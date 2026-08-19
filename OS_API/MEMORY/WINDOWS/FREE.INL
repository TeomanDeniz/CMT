#ifndef MEMORY_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !MEMORY_H */

#ifndef KNR_STYLE /* STANDARD C */
#define FUNCTION_HEADER__FREE \
	void\
		FREE(PTR POINTER)
#else /* K&R */
#define FUNCTION_HEADER__FREE \
	FREE(POINTER)\
	PTR	POINTER;
#endif /* !KNR_STYLE */

#define LOCALFUNCTION__FREE \
	FUNCTION_HEADER__FREE \
	{\
		struct S_MEM_BLOCK	*BLOCK;\
		struct S_MEM_PAGE	*PAGE;\
		\
		if (POINTER == (PTR)0)\
			return ;\
		\
		MUTEX_LOCK(G_MUTEX_ALLOC);\
		BLOCK = (\
			(struct S_MEM_BLOCK *)(((BYTE *)(POINTER)) -\
			ALIGN_UP(sizeof(struct S_MEM_BLOCK)))\
		);\
		\
		if (!BLOCK->PAGE || BLOCK->FREED)\
		{\
			/*\
			 * TODO: WHEN <CONSOLE.H> OBJECT IS DONE,\
			 *       SEND ERROR AND CLOSE THE APP SAFELY\
			 */\
			MUTEX_UNLOCK(G_MUTEX_ALLOC);\
			return ;\
		}\
		\
		PAGE = BLOCK->PAGE;\
		PAGE->USED -= BLOCK->SIZE;\
		\
		{\
			register int	Q_CLASS = -1;\
			\
			{\
				register LET	INDEX;\
				\
				for (INDEX = 0; INDEX < CMT_MEMORY_QUICKLIST_CLASSES; INDEX++)\
				{\
					if (BLOCK->SIZE == CMT_MEMORY__QUICKLIST_LIMIT[INDEX])\
					{\
						Q_CLASS = (int)INDEX;\
						break ;\
					}\
				}\
			}\
			\
			if (\
				Q_CLASS >= 0 && \
				G_QUICKLIST_COUNT[Q_CLASS] < CMT_MEMORY_QUICKLIST_CAP\
			)\
			{\
				BLOCK->FREED = 2;\
				BLOCK->QUICK_NEXT = G_QUICKLIST[Q_CLASS];\
				G_QUICKLIST[Q_CLASS] = BLOCK;\
				G_QUICKLIST_COUNT[Q_CLASS]++;\
				MUTEX_UNLOCK(G_MUTEX_ALLOC);\
				return ;\
			}\
			\
			BLOCK->FREED = 1;\
		}\
		\
		if (BLOCK->NEXT && BLOCK->NEXT->FREED == 1)\
		{\
			BLOCK->SIZE +=\
				ALIGN_UP(sizeof(struct S_MEM_BLOCK)) + BLOCK->NEXT->SIZE;\
			BLOCK->NEXT = BLOCK->NEXT->NEXT;\
			\
			if (BLOCK->NEXT)\
				BLOCK->NEXT->PREV = BLOCK;\
		}\
		\
		if (BLOCK->PREV && BLOCK->PREV->FREED == 1)\
		{\
			BLOCK->PREV->SIZE +=\
				ALIGN_UP(sizeof(struct S_MEM_BLOCK)) + BLOCK->SIZE;\
			BLOCK->PREV->NEXT = BLOCK->NEXT;\
			\
			if (BLOCK->NEXT)\
				BLOCK->NEXT->PREV = BLOCK->PREV;\
			\
			if (PAGE->BLOCKS == BLOCK)\
				PAGE->BLOCKS = BLOCK->PREV;\
			\
			BLOCK = BLOCK->PREV;\
		}\
		\
		if (PAGE->USED == 0)\
		{\
			if (G_MEM_EMPTY_BYTES + PAGE->SIZE > CMT_MEMORY_MAX_EMPTY_BYTES)\
			{\
				if (PAGE->NEXT)\
					PAGE->NEXT->PREV = PAGE->PREV;\
				\
				if (PAGE->PREV)\
					PAGE->PREV->NEXT = PAGE->NEXT;\
				else\
					G_MEM_PAGES = PAGE->NEXT;\
				\
				{\
					register int	PURGE_CLASS;\
					\
					for (\
						PURGE_CLASS = 0;\
						PURGE_CLASS < (int)CMT_MEMORY_QUICKLIST_CLASSES;\
						++PURGE_CLASS\
					)\
					{\
						struct S_MEM_BLOCK	**LINK = &G_QUICKLIST[PURGE_CLASS];\
						\
						while (*LINK)\
						{\
							if ((*LINK)->PAGE == PAGE)\
							{\
								*LINK = (*LINK)->QUICK_NEXT;\
								G_QUICKLIST_COUNT[PURGE_CLASS]--;\
							}\
							else\
								LINK = &(*LINK)->QUICK_NEXT;\
						}\
					}\
				}\
				\
				KERNEL32.VirtualFree(PAGE, 0, (unsigned long)0X00008000);\
			}\
			else\
			{\
				PAGE->RETAINED_EMPTY = 1;\
				G_MEM_EMPTY_BYTES += PAGE->SIZE;\
			}\
		}\
		\
		MUTEX_UNLOCK(G_MUTEX_ALLOC);\
	}

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
