#ifndef MEMORY_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !MEMORY_H */

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
			SEGMENT = (struct S_SEGMENT *)(\
				RW_PTR - ALIGN_UP(sizeof(struct S_SEGMENT))\
			);\
			\
			if (SEGMENT->FREE)\
			{\
				MUTEX_UNLOCK(G_MUTEX_ALLOC_EXE);\
				/*\
				 * TODO: WHEN <CONSOLE.H> OBJECT IS DONE,\
				 *       SEND ERROR AND CLOSE THE APP SAFELY\
				 */\
				return ;\
			}\
			\
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
				SEGMENT->SIZE == SLAB->SIZE -\
				ALIGN_UP(sizeof(struct S_SEGMENT))\
			)\
			{\
				if (SLAB->NEXT)\
					SLAB->NEXT->PREV = SLAB->PREV;\
				\
				if (SLAB->PREV)\
					SLAB->PREV->NEXT = SLAB->NEXT;\
				else\
					G_SLABS = SLAB->NEXT;\
				\
				/*\
				 * A TIER 1 SLAB IS ONE "VirtualAlloc" RESERVATION, WHILE A\
				 * TIER 2 SLAB IS TWO MAPPED VIEWS OF A SECTION. THEY ARE\
				 * NOT RELEASED THE SAME WAY.\
				 */\
				if (SLAB->RX != SLAB->RW)\
				{\
					KERNEL32.UnmapViewOfFile((PTR)SLAB->RX);\
					KERNEL32.UnmapViewOfFile((PTR)SLAB->RW);\
				}\
				else\
				{\
					KERNEL32.VirtualFree(\
						(PTR)SLAB->RW, 0, (unsigned long)0X00008000\
					);\
				}\
				\
				FREE((PTR)SLAB);\
			}\
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
