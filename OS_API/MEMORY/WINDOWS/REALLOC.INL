#ifndef MEMORY_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !MEMORY_H */

#ifndef KNR_STYLE /* STANDARD C */
#define FUNCTION_HEADER__REALLOC \
	PTR\
		REALLOC(PTR POINTER, LET SIZE)
#else /* K&R */
#define FUNCTION_HEADER__REALLOC \
	PTR\
		REALLOC(POINTER, SIZE)\
		PTR	POINTER;\
		LET	SIZE;
#endif /* !KNR_STYLE */

#define LOCALFUNCTION__REALLOC \
	FUNCTION_HEADER__REALLOC \
	{\
		struct S_MEM_BLOCK	*BLOCK;\
		const LET			REQUEST = ALIGN_UP(SIZE);\
		\
		if (POINTER == (PTR)0)\
			return (ALLOC(SIZE));\
		\
		if (SIZE == 0)\
		{\
			FREE(POINTER);\
			return ((PTR)0);\
		}\
		\
		MUTEX_LOCK(G_MUTEX_ALLOC);\
		BLOCK = (\
			(struct S_MEM_BLOCK *)(((BYTE *)(POINTER)) -\
			ALIGN_UP(sizeof(struct S_MEM_BLOCK)))\
		);\
		\
		if (REQUEST <= BLOCK->SIZE)\
		{\
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
				struct S_MEM_PAGE	*PAGE;\
				\
				PAGE = BLOCK->PAGE;\
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
				NEW_BLOCK->PAGE = PAGE;\
				\
				if (NEW_BLOCK->NEXT)\
					NEW_BLOCK->NEXT->PREV = NEW_BLOCK;\
				\
				if (PAGE)\
					PAGE->USED -= (BLOCK->SIZE - REQUEST);\
				\
				BLOCK->NEXT = NEW_BLOCK;\
				BLOCK->SIZE = REQUEST;\
				\
				if (NEW_BLOCK->NEXT && NEW_BLOCK->NEXT->FREED)\
				{\
					NEW_BLOCK->SIZE += (\
						ALIGN_UP(sizeof(struct S_MEM_BLOCK)) +\
						NEW_BLOCK->NEXT->SIZE\
					);\
					NEW_BLOCK->NEXT = NEW_BLOCK->NEXT->NEXT;\
					\
					if (NEW_BLOCK->NEXT)\
						NEW_BLOCK->NEXT->PREV = NEW_BLOCK;\
				}\
			}\
			\
			MUTEX_UNLOCK(G_MUTEX_ALLOC);\
			return (POINTER);\
		}\
		\
		if (\
			BLOCK->NEXT && BLOCK->NEXT->FREED &&\
			BLOCK->SIZE + ALIGN_UP(sizeof(struct S_MEM_BLOCK)) +\
			BLOCK->NEXT->SIZE >= REQUEST\
		)\
		{\
			struct S_MEM_BLOCK	*ABSORBED;\
			struct S_MEM_PAGE	*PAGE;\
			const LET			COMBINED = (\
				BLOCK->SIZE +\
				ALIGN_UP(sizeof(struct S_MEM_BLOCK)) +\
				BLOCK->NEXT->SIZE\
			);\
			\
			PAGE = BLOCK->PAGE;\
			ABSORBED = BLOCK->NEXT;\
			BLOCK->NEXT = ABSORBED->NEXT;\
			\
			if (BLOCK->NEXT)\
				BLOCK->NEXT->PREV = BLOCK;\
			\
			if (PAGE)\
				PAGE->USED += (COMBINED - BLOCK->SIZE);\
			\
			BLOCK->SIZE = COMBINED;\
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
				NEW_BLOCK->PAGE = PAGE;\
				\
				if (NEW_BLOCK->NEXT)\
					NEW_BLOCK->NEXT->PREV = NEW_BLOCK;\
				\
				if (PAGE)\
					PAGE->USED -= (BLOCK->SIZE - REQUEST);\
				\
				BLOCK->NEXT = NEW_BLOCK;\
				BLOCK->SIZE = REQUEST;\
			}\
			\
			MUTEX_UNLOCK(G_MUTEX_ALLOC);\
			return (POINTER);\
		}\
		\
		MUTEX_UNLOCK(G_MUTEX_ALLOC);\
		\
		{\
			PTR			NEW_RESULT;\
			const LET	OLD_SIZE = BLOCK->SIZE;\
			\
			NEW_RESULT = ALLOC(SIZE);\
			\
			if (NEW_RESULT == (PTR)0)\
				return ((PTR)0);\
			\
			if (OLD_SIZE < SIZE)\
				memcpy(NEW_RESULT, POINTER, OLD_SIZE);\
			else\
				memcpy(NEW_RESULT, POINTER, SIZE);\
			\
			FREE(POINTER);\
			return (NEW_RESULT);\
		}\
	}

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
