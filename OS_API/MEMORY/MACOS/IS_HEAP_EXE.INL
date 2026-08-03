#ifndef MEMORY_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !MEMORY_H */

#ifndef KNR_STYLE /* STANDARD C */
#define FUNCTION_HEADER__IS_HEAP_EXE \
	BOOLEAN\
		IS_HEAP_EXE(PTR POINTER)
#else /* K&R */
#define FUNCTION_HEADER__IS_HEAP_EXE \
	BOOLEAN\
		IS_HEAP_EXE(POINTER)\
		PTR	POINTER;
#endif /* !KNR_STYLE */

#define LOCALFUNCTION__IS_HEAP_EXE \
	FUNCTION_HEADER__IS_HEAP_EXE \
	{\
		struct S_SLAB	*SLAB;\
		\
		if (POINTER == (PTR)0)\
			return ((BOOLEAN)0);\
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
				return ((BOOLEAN)0);\
			}\
			\
			SEGMENT = (struct S_SEGMENT *)(\
				RW_PTR - ALIGN_UP(sizeof(struct S_SEGMENT))\
			);\
			\
			if (!SEGMENT->FREE)\
			{\
				MUTEX_UNLOCK(G_MUTEX_ALLOC_EXE);\
				return ((BOOLEAN)1);\
			}\
			\
			MUTEX_UNLOCK(G_MUTEX_ALLOC_EXE);\
			return ((BOOLEAN)0);\
		}\
		\
		MUTEX_UNLOCK(G_MUTEX_ALLOC_EXE);\
		return ((BOOLEAN)0);\
	}

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //