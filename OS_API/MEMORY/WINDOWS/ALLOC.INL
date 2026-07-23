#ifndef MEMORY_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !MEMORY_H */

#ifndef KNR_STYLE /* STANDARD C */
#define FUNCTION_HEADER__ALLOC \
	PTR\
		ALLOC(LET SIZE)
#else /* K&R */
#define FUNCTION_HEADER__ALLOC \
	PTR\
		ALLOC(SIZE)\
		LET	SIZE;
#endif /* !KNR_STYLE */

#define LOCALFUNCTION__ALLOC \
	FUNCTION_HEADER__ALLOC \
	{\
		struct S_MEM_PAGE	*PAGE;\
		struct S_MEM_BLOCK	*BLOCK;\
		PTR					RESULT;\
		const LET			REQUEST = ALIGN_UP(SIZE);\
		\
		if (REQUEST == 0)\
			return ((PTR)0);\
		\
		MUTEX_LOCK(G_MUTEX_ALLOC);\
		BLOCK = (struct S_MEM_BLOCK *)0;\
		PAGE = (struct S_MEM_PAGE *)0;\
		\
		{\
			struct S_MEM_PAGE	*TEMP_PAGE;\
			struct S_MEM_BLOCK	*TEMP_BLOCK;\
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
					if (TEMP_BLOCK->FREED && TEMP_BLOCK->SIZE >= REQUEST)\
					{\
						BLOCK = TEMP_BLOCK;\
						PAGE = TEMP_PAGE;\
						goto BLOCK_FOUND;\
					}\
				}\
			}\
		}\
		\
	BLOCK_FOUND:\
		\
		if (!BLOCK)\
		{\
			const LET	NEW_PAGE_SIZE = (\
				(\
					(\
						ALIGN_UP(sizeof(struct S_MEM_PAGE)) +\
						ALIGN_UP(sizeof(struct S_MEM_BLOCK)) +\
						REQUEST + PAGE_SIZE - 1\
					) / PAGE_SIZE\
				) * PAGE_SIZE\
			);\
			\
			PAGE = KERNEL32.VirtualAlloc(\
				(PTR)0,\
				NEW_PAGE_SIZE,\
				(unsigned long)0X00003000,\
				(unsigned long)0X00000004\
			);\
			\
			if (PAGE == (struct S_MEM_PAGE *)0)\
			{\
				MUTEX_UNLOCK(G_MUTEX_ALLOC);\
				return ((PTR)0);\
			}\
			\
			PAGE->SIZE = NEW_PAGE_SIZE;\
			PAGE->USED = 0;\
			PAGE->PREV = (struct S_MEM_PAGE *)0;\
			PAGE->NEXT = G_MEM_PAGES;\
			\
			if (G_MEM_PAGES)\
				G_MEM_PAGES->PREV = PAGE;\
			\
			BLOCK = (\
				(struct S_MEM_BLOCK *)(\
					((BYTE *)PAGE) + ALIGN_UP(sizeof(struct S_MEM_PAGE))\
				)\
			);\
			BLOCK->SIZE = (\
				NEW_PAGE_SIZE -\
				ALIGN_UP(sizeof(struct S_MEM_PAGE)) -\
				ALIGN_UP(sizeof(struct S_MEM_BLOCK))\
			);\
			BLOCK->FREED = 1;\
			BLOCK->NEXT = (struct S_MEM_BLOCK *)0;\
			BLOCK->PREV = (struct S_MEM_BLOCK *)0;\
			BLOCK->PAGE = PAGE;\
			PAGE->BLOCKS = BLOCK;\
			G_MEM_PAGES = PAGE;\
		}\
		\
		if (\
			BLOCK->SIZE >=\
			(\
				REQUEST +\
				ALIGN_UP(sizeof(struct S_MEM_BLOCK)) +\
				MAX_ALIGNMENT\
			)\
		)\
		{\
			struct S_MEM_BLOCK	*NEW_BLOCK;\
			\
			NEW_BLOCK = (struct S_MEM_BLOCK *)(\
				((BYTE *)BLOCK) +\
				ALIGN_UP(sizeof(struct S_MEM_BLOCK)) +\
				REQUEST\
			);\
			NEW_BLOCK->SIZE = (\
				BLOCK->SIZE -\
				REQUEST -\
				ALIGN_UP(sizeof(struct S_MEM_BLOCK))\
			);\
			NEW_BLOCK->FREED = 1;\
			NEW_BLOCK->NEXT = BLOCK->NEXT;\
			NEW_BLOCK->PREV = BLOCK;\
			NEW_BLOCK->PAGE = BLOCK->PAGE;\
			\
			if (NEW_BLOCK->NEXT)\
				NEW_BLOCK->NEXT->PREV = NEW_BLOCK;\
			\
			BLOCK->NEXT = NEW_BLOCK;\
			BLOCK->SIZE = REQUEST;\
		}\
		\
		BLOCK->FREED = 0;\
		\
		if (BLOCK->PAGE)\
			BLOCK->PAGE->USED += BLOCK->SIZE;\
		\
		RESULT = (PTR)(\
			((BYTE *)(BLOCK)) + ALIGN_UP(sizeof(struct S_MEM_BLOCK))\
		);\
		MUTEX_UNLOCK(G_MUTEX_ALLOC);\
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
