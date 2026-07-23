#ifndef MEMORY_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !MEMORY_H */

/* **************************** [v] INCLUDES [v] **************************** */
#include <AvailabilityMacros.h>
/******* """"""""""""""""""""""
 * @FOR <sys/mman.h>
 */
#include <sys/mman.h>
/******* """"""""""""
 * int	munmap(void *, size_t);
 */
/* **************************** [^] INCLUDES [^] **************************** */

#ifndef KNR_STYLE /* STANDARD C */
#define FUNCTION_HEADER__FREE_EXE \
	void\
		FREE_EXE(PTR POINTER)
#else /* K&R */
#define FUNCTION_HEADER__FREE_EXE \
	FREE_EXE(POINTER)\
	PTR	POINTER;
#endif /* !KNR_STYLE */

#define LOCALFUNCTION__FREE_EXE \
	FUNCTION_HEADER__FREE_EXE \
	{\
		struct S_SLAB	*SLAB;\
		\
		if (POINTER == (PTR)0)\
			return ;\
		\
		MUTEX_LOCK(G_MUTEX_ALLOC_EXE);\
		\
		for (SLAB = G_SLABS; SLAB; SLAB = SLAB->NEXT)\
		{\
			struct S_SEGMENT	*SEGMENT;\
			BYTE				*RW_PTR;\
			\
			if (\
				!(POINTER >= (PTR)SLAB->RX &&\
				POINTER < (PTR)(SLAB->RX + SLAB->SIZE))\
			)\
				continue ;\
			\
			RW_PTR = ((SLAB)->RW + (((BYTE *)(POINTER)) - (SLAB)->RX));\
			\
			if (RW_PTR < SLAB->RW + ALIGN_UP(sizeof(struct S_SEGMENT)))\
			{\
				MUTEX_UNLOCK(G_MUTEX_ALLOC_EXE);\
				return ;\
			}\
			\
			SEGMENT = (\
				(struct S_SEGMENT *)(\
					RW_PTR - ALIGN_UP(sizeof(struct S_SEGMENT))\
				)\
			);\
			\
			/*\
			 * A SEALED "MAP_JIT" SLAB IS STILL READABLE, SO THE DOUBLE FREE\
			 * CHECK COSTS NO TOGGLE ON THE ERROR PATH.\
			 */\
			if (SEGMENT->FREE)\
			{\
				MUTEX_UNLOCK(G_MUTEX_ALLOC_EXE);\
				/* TODO: LOG "DOUBLE FREE" ON CONSOLE */\
				return ;\
			}\
			\
			LOCALMACRO__EXE_OPEN(SLAB)\
			SEGMENT->FREE = 1;\
			\
			if (SEGMENT->NEXT && SEGMENT->NEXT->FREE)\
			{\
				SEGMENT->SIZE +=\
					ALIGN_UP(sizeof(struct S_SEGMENT)) + SEGMENT->NEXT->SIZE;\
				SEGMENT->NEXT = SEGMENT->NEXT->NEXT;\
				\
				if (SEGMENT->NEXT)\
					SEGMENT->NEXT->PREV = SEGMENT;\
			}\
			\
			if (SEGMENT->PREV && SEGMENT->PREV->FREE)\
			{\
				SEGMENT->PREV->SIZE +=\
					ALIGN_UP(sizeof(struct S_SEGMENT)) + SEGMENT->SIZE;\
				SEGMENT->PREV->NEXT = SEGMENT->NEXT;\
				\
				if (SEGMENT->NEXT)\
					SEGMENT->NEXT->PREV = SEGMENT->PREV;\
				\
				SEGMENT = SEGMENT->PREV;\
			}\
			\
			if (\
				SLAB->SEGMENTS == SEGMENT && SEGMENT->FREE &&\
				SEGMENT->SIZE == SLAB->SIZE - \
				ALIGN_UP(sizeof(struct S_SEGMENT))\
			)\
			{\
				/*\
				 * SEAL BEFORE THE MAPPING GOES AWAY. THE TOGGLE IS PER\
				 * THREAD AND PROCESS WIDE, SO LEAVING IT OPEN HERE WOULD\
				 * LEAVE EVERY OTHER "MAP_JIT" SLAB WRITABLE TOO.\
				 */\
				LOCALMACRO__EXE_SEAL(SLAB)\
				\
				if (SLAB->NEXT)\
					SLAB->NEXT->PREV = SLAB->PREV;\
				\
				if (SLAB->PREV)\
					SLAB->PREV->NEXT = SLAB->NEXT;\
				else\
					G_SLABS = SLAB->NEXT;\
				\
				munmap((PTR)SLAB->RW, (size_t)SLAB->SIZE);\
				FREE((PTR)SLAB);\
			}\
			else\
				LOCALMACRO__EXE_SEAL(SLAB)\
			\
			MUTEX_UNLOCK(G_MUTEX_ALLOC_EXE);\
			return ;\
		}\
		\
		MUTEX_UNLOCK(G_MUTEX_ALLOC_EXE);\
	}

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
