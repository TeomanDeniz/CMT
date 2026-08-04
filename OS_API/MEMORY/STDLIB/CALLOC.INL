#ifndef MEMORY_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !MEMORY_H */

#ifndef KNR_STYLE /* ANSI C */
#define FUNCTION_HEADER__CALLOC \
	PTR	CALLOC(LET SIZE)
#else /* K&R */
#define FUNCTION_HEADER__CALLOC \
	PTR	CALLOC(SIZE) \
	LET	SIZE;
#endif /* !KNR_STYLE */

#define LOCALFUNCTION__CALLOC \
	FUNCTION_HEADER__CALLOC \
	{\
		const PTR	RESULT = calloc(1, SIZE + sizeof(LET));\
		PTR			USER_PTR;\
		\
		if (!RESULT)\
			return ((PTR)0);\
		\
		(*((LET *)RESULT)) = SIZE;\
		USER_PTR = (PTR)(((LET *)RESULT) + 1);\
		\
		if (G_HEAP_COUNT >= G_HEAP_CAPACITY)\
		{\
			LET	NEW_CAP;\
			PTR	*NEW_PTRS;\
			\
			if (G_HEAP_CAPACITY == (LET)0)\
				NEW_CAP = (LET)64;\
			else\
				NEW_CAP = (G_HEAP_CAPACITY * (LET)2);\
			\
			NEW_PTRS = (PTR *)realloc(\
				(PTR)G_HEAP_PTRS,\
				(LET)(NEW_CAP * sizeof(PTR))\
			);\
			\
			if (NEW_PTRS)\
			{\
				G_HEAP_PTRS = NEW_PTRS;\
				G_HEAP_CAPACITY = NEW_CAP;\
			}\
		}\
		\
		if (G_HEAP_COUNT < G_HEAP_CAPACITY)\
		{\
			G_HEAP_PTRS[G_HEAP_COUNT] = (USER_PTR);\
			G_HEAP_COUNT += 1;\
		}\
		\
		return (USER_PTR);\
	}

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //