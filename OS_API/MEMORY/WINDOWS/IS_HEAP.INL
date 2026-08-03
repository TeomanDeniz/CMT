#ifndef MEMORY_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !MEMORY_H */

#ifndef KNR_STYLE /* STANDARD C */
#define FUNCTION_HEADER__IS_HEAP \
	BOOLEAN\
		IS_HEAP(PTR POINTER)
#else /* K&R */
#define FUNCTION_HEADER__IS_HEAP \
	BOOLEAN\
		IS_HEAP(POINTER)\
		PTR	POINTER;
#endif /* !KNR_STYLE */

#define LOCALFUNCTION__IS_HEAP \
	FUNCTION_HEADER__IS_HEAP \
	{\
		struct S_MEM_PAGE	*TEMP_PAGE;\
		struct S_MEM_BLOCK	*TEMP_BLOCK;\
		\
		if (POINTER == (PTR)0)\
			return ((BOOLEAN)0);\
		\
		MUTEX_LOCK(G_MUTEX_ALLOC);\
		\
		for (\
			TEMP_PAGE = G_MEM_PAGES;\
			TEMP_PAGE;\
			TEMP_PAGE = TEMP_PAGE->NEXT\
		)\
		{\
			for (\
				TEMP_BLOCK = TEMP_PAGE->BLOCKS;\
				TEMP_BLOCK;\
				TEMP_BLOCK = TEMP_BLOCK->NEXT\
			)\
			{\
				BYTE	*BLOCK_DATA;\
				\
				if (TEMP_BLOCK->FREED)\
					continue ;\
				\
				BLOCK_DATA = (\
					((BYTE *)(TEMP_BLOCK)) +\
					ALIGN_UP(sizeof(struct S_MEM_BLOCK))\
				);\
				\
				if ((PTR)BLOCK_DATA == POINTER)\
				{\
					MUTEX_UNLOCK(G_MUTEX_ALLOC);\
					return ((BOOLEAN)1);\
				}\
			}\
		}\
		\
		MUTEX_UNLOCK(G_MUTEX_ALLOC);\
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