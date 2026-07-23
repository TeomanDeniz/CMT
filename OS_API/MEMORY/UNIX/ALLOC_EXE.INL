#ifndef MEMORY_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !MEMORY_H */

/* **************************** [v] INCLUDES [v] **************************** */
#include <stdlib.h>
/******* """"""""""
 * int	mkstemp(char *);
 */
#include <unistd.h>
/******* """"""""""
 * int	close(int);
 * int	unlink(const char *);
 * int	ftruncate(int, off_t);
 * long	syscall(long, ...);
 */
#include <sys/mman.h>
/******* """"""""""""
 * #define PROT_READ
 * #define PROT_WRITE
 * #define PROT_EXEC
 * #define MAP_PRIVATE
 * #define MAP_ANONYMOUS
 * #define MAP_SHARED
 * #define MAP_FAILED
 * int	munmap(void *, size_t);
 * int	mprotect(void *, size_t, int);
 * void	*mmap(void *, size_t, int, int, int, off_t);
 */
#include <sys/types.h>
/******* """""""""""""
 * typedef	off_t;
 */

#ifdef __linux__
#include <sys/syscall.h>
/******* """""""""""""""
 * #define SYS_memfd_create
 */

#ifndef MFD_CLOEXEC
#define MFD_CLOEXEC ((unsigned)0X0001)
#endif /* !MFD_CLOEXEC */
#endif /* __linux__ */
/* **************************** [^] INCLUDES [^] **************************** */

#define LOCALMACRO_MEMFD FD = -1

#ifdef __linux__
#ifdef SYS_memfd_create
#undef LOCALMACRO_MEMFD
#define LOCALMACRO_MEMFD \
	FD = ((int)syscall(SYS_memfd_create, "CMT_JIT_ENGINE", MFD_CLOEXEC))
#endif /* SYS_memfd_create */
#endif /* __linux__ */

/*
 * BOTH TIERS BELOW LEAVE THE SLAB PERMANENTLY WRITABLE THROUGH "->RW", SO
 * NOTHING IN THIS BACKEND EVER HAS TO FLIP A PAGE PROTECTION AT RUNTIME.
 * A THIRD "mprotect" FLIPPING TIER WAS MEASURED AND DROPPED: IT COST ABOUT
 * 6600NS PER ALLOC/FREE PAIR AGAINST 10ns FOR BOTH TIERS KEPT HERE, AND IT
 * ONLY EVER APPLIES ON HOSTS THAT REFUSE "mprotect(PROT_EXEC)" ANYWAY.
 */

/* ************************* [v] SEGMENT TAKING [v] ************************* *\
|* **** THIS IS EXPANDED TWICE (BEFORE AND AFTER SLAB CREATION), SO IT   **** *|
|* **** MUST NOT CONTAIN A LABEL. THE OUTER LOOP STOPS ON "RESULT".      **** *|
\* ************************************************************************** */
#define LOCALMACRO__EXE_TAKE_SEGMENT \
	{\
		struct S_SLAB		*SCAN;\
		struct S_SEGMENT	*SEGMENT;\
		\
		RESULT = ((PTR)0);\
		\
		for (SCAN = G_SLABS; SCAN && !RESULT; SCAN = SCAN->NEXT)\
		{\
			for (SEGMENT = SCAN->SEGMENTS; SEGMENT; SEGMENT = SEGMENT->NEXT)\
			{\
				BYTE	*RW_PTR;\
				BYTE	*RX_PTR;\
				\
				if (!SEGMENT->FREE || SEGMENT->SIZE < REQUEST)\
					continue ;\
				\
				if (\
					SEGMENT->SIZE >=\
					(\
						REQUEST +\
						ALIGN_UP(sizeof(struct S_SEGMENT)) +\
						MAX_ALIGNMENT\
					)\
				)\
				{\
					struct S_SEGMENT	*SPLIT;\
					\
					SPLIT = (struct S_SEGMENT *)(\
						((BYTE *)SEGMENT) +\
						ALIGN_UP(sizeof(struct S_SEGMENT)) +\
						REQUEST\
					);\
					SPLIT->SIZE = (\
						SEGMENT->SIZE -\
						REQUEST -\
						ALIGN_UP(sizeof(struct S_SEGMENT))\
					);\
					SPLIT->FREE = 1;\
					SPLIT->NEXT = SEGMENT->NEXT;\
					SPLIT->PREV = SEGMENT;\
					\
					if (SPLIT->NEXT)\
						SPLIT->NEXT->PREV = SPLIT;\
					\
					SEGMENT->NEXT = SPLIT;\
					SEGMENT->SIZE = REQUEST;\
				}\
				\
				SEGMENT->FREE = 0;\
				RW_PTR = (\
					((BYTE *)(SEGMENT)) +\
					ALIGN_UP(sizeof(struct S_SEGMENT))\
				);\
				RX_PTR = SCAN->RX + (RW_PTR - SCAN->RW);\
				\
				if (OP_CODES != (PTR)0)\
					memcpy((PTR)RW_PTR, OP_CODES, SIZE);\
				\
				CLEAR_INSTRUCTION_CACHE(RX_PTR, RX_PTR + SIZE);\
				RESULT = ((PTR)RX_PTR);\
				break ;\
			}\
		}\
	}
/* ************************* [^] SEGMENT TAKING [^] ************************* */

#ifndef KNR_STYLE /* STANDARD C */
#define FUNCTION_HEADER__ALLOC_EXE \
	PTR\
		ALLOC_EXE(const PTR OP_CODES, LET SIZE)
#else /* K&R */
#define FUNCTION_HEADER__ALLOC_EXE \
	PTR\
		ALLOC_EXE(OP_CODES, SIZE)\
		PTR	OP_CODES;\
		LET	SIZE;
#endif /* !KNR_STYLE */

#define LOCALFUNCTION__ALLOC_EXE \
	FUNCTION_HEADER__ALLOC_EXE \
	{\
		struct S_SLAB	*SLAB;\
		PTR				RESULT;\
		LET				SLAB_SIZE;\
		const LET		REQUEST = ALIGN_UP(SIZE);\
		\
		if (REQUEST == 0)\
			return ((PTR)0);\
		\
		MUTEX_LOCK(G_MUTEX_ALLOC_EXE);\
		LOCALMACRO__EXE_TAKE_SEGMENT\
		\
		if (RESULT != (PTR)0)\
		{\
			MUTEX_UNLOCK(G_MUTEX_ALLOC_EXE);\
			return (RESULT);\
		}\
		\
		SLAB_SIZE = PAGE_SIZE;\
		\
		if (REQUEST + ALIGN_UP(sizeof(struct S_SEGMENT)) > SLAB_SIZE)\
		{\
			SLAB_SIZE = (\
				(\
					(\
						REQUEST +\
						ALIGN_UP(sizeof(struct S_SEGMENT)) +\
						PAGE_SIZE - 1\
					) / PAGE_SIZE\
				) * PAGE_SIZE\
			);\
		}\
		\
		{\
			struct S_SLAB	*NEW_SLAB;\
			BYTE			*RW;\
			BYTE			*RX;\
			int				MODE;\
			\
			RW = ((BYTE *)0);\
			RX = ((BYTE *)0);\
			MODE = 0;\
			\
			/*\
			 * TIER 1 - PLAIN "RWX".\
			 * ONE SYSCALL, NO BOOKKEEPING, NO PROTECTION FLIP EVER.\
			 * THIS IS THE PATH VIRTUALLY EVERY HOST TAKES.\
			 */\
			{\
				PTR	MAP;\
				\
				MAP = mmap(\
					(PTR)0,\
					(size_t)SLAB_SIZE,\
					PROT_READ | PROT_WRITE | PROT_EXEC,\
					MAP_PRIVATE | MAP_ANONYMOUS,\
					-1,\
					0\
				);\
				\
				if (MAP != MAP_FAILED)\
				{\
					RW = ((BYTE *)MAP);\
					RX = ((BYTE *)MAP);\
					MODE = 0;\
				}\
			}\
			\
			/*\
			 * TIER 2 - TWO VIEWS OF ONE ANONYMOUS OBJECT.\
			 * COSTS MORE TO SET UP, BUT IS FREE AFTERWARDS BECAUSE THE\
			 * WRITABLE VIEW NEVER NEEDS TO BE RE-PROTECTED.\
			 */\
			if (RW == (BYTE *)0)\
			{\
				int	FD;\
				\
				LOCALMACRO_MEMFD;\
				\
				if (FD < 0)\
				{\
					char	TMP__CMT_JIT[20] = "/tmp/cmt_jit_XXXXXX";\
					\
					FD = mkstemp(TMP__CMT_JIT);\
					\
					if (FD >= 0)\
						unlink(TMP__CMT_JIT);\
				}\
				\
				if (FD >= 0)\
				{\
					if (ftruncate(FD, (off_t)SLAB_SIZE) != 0)\
						close(FD);\
					else\
					{\
						PTR	RW_MAP;\
						\
						RW_MAP = mmap(\
							(PTR)0,\
							(size_t)SLAB_SIZE,\
							PROT_READ | PROT_WRITE,\
							MAP_SHARED,\
							FD,\
							0\
						);\
						\
						if (RW_MAP != MAP_FAILED)\
						{\
							PTR	RX_MAP;\
							\
							RX_MAP = mmap(\
								(PTR)0,\
								(size_t)SLAB_SIZE,\
								PROT_READ | PROT_EXEC,\
								MAP_SHARED,\
								FD,\
								0\
							);\
							\
							if (RX_MAP == MAP_FAILED)\
								munmap(RW_MAP, (size_t)SLAB_SIZE);\
							else\
							{\
								RW = ((BYTE *)RW_MAP);\
								RX = ((BYTE *)RX_MAP);\
								MODE = 1;\
							}\
						}\
						\
						close(FD);\
					}\
				}\
			}\
			\
			if (RW == (BYTE *)0)\
				SLAB = ((struct S_SLAB *)0);\
			else\
			{\
				NEW_SLAB = (struct S_SLAB *)ALLOC(sizeof(struct S_SLAB));\
				\
				if (!NEW_SLAB)\
				{\
					if (RX != RW)\
						munmap((PTR)RX, (size_t)SLAB_SIZE);\
					\
					munmap((PTR)RW, (size_t)SLAB_SIZE);\
					SLAB = ((struct S_SLAB *)0);\
				}\
				else\
				{\
					NEW_SLAB->RW = RW;\
					NEW_SLAB->RX = RX;\
					NEW_SLAB->SIZE = SLAB_SIZE;\
					NEW_SLAB->MODE = MODE;\
					NEW_SLAB->SEGMENTS = (struct S_SEGMENT *)RW;\
					NEW_SLAB->SEGMENTS->SIZE =\
						SLAB_SIZE - ALIGN_UP(sizeof(struct S_SEGMENT));\
					NEW_SLAB->SEGMENTS->FREE = 1;\
					NEW_SLAB->SEGMENTS->NEXT = (struct S_SEGMENT *)0;\
					NEW_SLAB->SEGMENTS->PREV = (struct S_SEGMENT *)0;\
					NEW_SLAB->PREV = (struct S_SLAB *)0;\
					NEW_SLAB->NEXT = (struct S_SLAB *)0;\
					SLAB = NEW_SLAB;\
				}\
			}\
		}\
		\
		if (!SLAB)\
		{\
			MUTEX_UNLOCK(G_MUTEX_ALLOC_EXE);\
			return ((PTR)0);\
		}\
		\
		SLAB->NEXT = G_SLABS;\
		\
		if (G_SLABS)\
			G_SLABS->PREV = SLAB;\
		\
		G_SLABS = SLAB;\
		LOCALMACRO__EXE_TAKE_SEGMENT\
		MUTEX_UNLOCK(G_MUTEX_ALLOC_EXE);\
		return (RESULT);\
	}

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
