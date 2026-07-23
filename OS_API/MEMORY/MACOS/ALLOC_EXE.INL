#ifndef MEMORY_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !MEMORY_H */

/* **************************** [v] INCLUDES [v] **************************** */
#include <sys/mman.h>
/******* """"""""""""
 * #define PROT_READ
 * #define PROT_WRITE
 * #define PROT_EXEC
 * #define MAP_PRIVATE
 * #define MAP_ANONYMOUS
 * #define MAP_JIT
 * #define MAP_FAILED
 * int	munmap(void *, size_t);
 * int	mprotect(void *, size_t, int);
 * void	*mmap(void *, size_t, int, int, int, off_t);
 */
#include <AvailabilityMacros.h>
/******* """"""""""""""""""""""
 * @FOR <pthread.h>
 * @FOR <sys/mman.h>
 */
#include <pthread.h>
/******* """""""""""
 * void	pthread_jit_write_protect_np(int);
 */
/* **************************** [^] INCLUDES [^] **************************** */

/*
 * "pthread_jit_write_protect_np" ONLY EXISTS ON APPLE SILICON. ON INTEL MACS
 * THE "MAP_JIT" TIER IS NEVER REACHED (TIER 1 ALWAYS SUCCEEDS THERE), BUT THE
 * CALL STILL HAS TO COMPILE, SO IT COLLAPSES INTO NOTHING.
 */
#ifdef __arm64__
#define LOCALMACRO_JIT_WRITE(STATE) pthread_jit_write_protect_np((STATE))
#else /* !__arm64__ */
#ifdef __aarch64__
#define LOCALMACRO_JIT_WRITE(STATE) pthread_jit_write_protect_np((STATE))
#else /* !__aarch64__ */
#define LOCALMACRO_JIT_WRITE(STATE) ((void)(STATE))
#endif /* __aarch64__ */
#endif /* __arm64__ */

/* ************************** [v] WRITE WINDOW [v] ************************** *\
|* **** "MAP_JIT" PAGES ARE EXECUTABLE AT REST AND HAVE TO BE UNLOCKED   **** *|
|* **** BEFORE ANY WRITE - INCLUDING WRITES TO OUR OWN SEGMENT HEADERS.  **** *|
|* **** THE TOGGLE IS PER THREAD AND COVERS EVERY "MAP_JIT" REGION IN    **** *|
|* **** THE PROCESS, SO IT IS OPENED AS LATE AND SEALED AS EARLY AS      **** *|
|* **** POSSIBLE. TIER 1 SLABS ARE ALWAYS WRITABLE AND SKIP BOTH.        **** *|
\* ************************************************************************** */
#define LOCALMACRO__EXE_OPEN(SLAB) \
	do\
	{\
		if ((SLAB)->MODE == 2)\
			LOCALMACRO_JIT_WRITE(0);\
	}\
	while (0)

#define LOCALMACRO__EXE_SEAL(SLAB) \
	do\
	{\
		if ((SLAB)->MODE == 2)\
			LOCALMACRO_JIT_WRITE(1);\
	}\
	while (0)
/* ************************** [^] WRITE WINDOW [^] ************************** */

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
				LOCALMACRO__EXE_OPEN(SCAN)\
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
				LOCALMACRO__EXE_SEAL(SCAN)\
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
			int				MODE;\
			\
			RW = ((BYTE *)0);\
			MODE = 0;\
			\
			/*\
			 * TIER 1 - PLAIN "RWX".\
			 * SUCCEEDS ON INTEL MACS AND ON APPLE SILICON WITHOUT THE\
			 * HARDENED RUNTIME. NOTHING TO TOGGLE AFTERWARDS.\
			 */\
			{\
				PTR	MAP;\
				\
				MAP = mmap(\
					(PTR)0,\
					(size_t)SLAB_SIZE,\
					PROT_READ | PROT_WRITE | PROT_EXEC,\
					MAP_PRIVATE | MAP_ANON,\
					-1,\
					0\
				);\
				\
				if (MAP != MAP_FAILED)\
				{\
					RW = ((BYTE *)MAP);\
					MODE = 0;\
				}\
			}\
			\
			/*\
			 * TIER 2 - "MAP_JIT".\
			 * THE ONLY WAY TO GET EXECUTABLE MEMORY UNDER THE HARDENED\
			 * RUNTIME. THERE IS NO DUAL MAPPING TIER ON MACOS BECAUSE\
			 * MAPPING A FILE "PROT_EXEC" IS REFUSED THERE, SO WRITE AND\
			 * EXECUTE SHARE ONE ADDRESS AND ARE SEPARATED IN TIME BY THE\
			 * PER THREAD HARDWARE TOGGLE INSTEAD.\
			 */\
			if (RW == (BYTE *)0)\
			{\
				PTR	MAP;\
				\
				MAP = mmap(\
					(PTR)0,\
					(size_t)SLAB_SIZE,\
					PROT_READ | PROT_WRITE | PROT_EXEC,\
					MAP_PRIVATE | MAP_ANON | MAP_JIT,\
					-1,\
					0\
				);\
				\
				if (MAP != MAP_FAILED)\
				{\
					RW = ((BYTE *)MAP);\
					MODE = 2;\
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
					munmap((PTR)RW, (size_t)SLAB_SIZE);\
					SLAB = ((struct S_SLAB *)0);\
				}\
				else\
				{\
					NEW_SLAB->RW = RW;\
					NEW_SLAB->RX = RW;\
					NEW_SLAB->SIZE = SLAB_SIZE;\
					NEW_SLAB->MODE = MODE;\
					\
					/*\
					 * THE FIRST SEGMENT HEADER IS A WRITE INTO THE SLAB\
					 * TOO, SO IT NEEDS THE WINDOW EXACTLY LIKE ANY\
					 * OTHER WRITE DOES.\
					 */\
					LOCALMACRO__EXE_OPEN(NEW_SLAB)\
					NEW_SLAB->SEGMENTS = (struct S_SEGMENT *)RW;\
					NEW_SLAB->SEGMENTS->SIZE =\
						SLAB_SIZE - ALIGN_UP(sizeof(struct S_SEGMENT));\
					NEW_SLAB->SEGMENTS->FREE = 1;\
					NEW_SLAB->SEGMENTS->NEXT = (struct S_SEGMENT *)0;\
					NEW_SLAB->SEGMENTS->PREV = (struct S_SEGMENT *)0;\
					LOCALMACRO__EXE_SEAL(NEW_SLAB)\
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
