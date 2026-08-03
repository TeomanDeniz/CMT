#ifndef MEMORY_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

#ifndef KNR_STYLE /* ANSI C */
#define FUNCTION_HEADER__REALLOC \
	PTR	REALLOC(PTR ADDRESS, register LET SIZE)
#else /* K&R */
#define FUNCTION_HEADER__REALLOC \
	PTR	REALLOC(ADDRESS, SIZE) \
	PTR				ADDRESS;
	register LET	SIZE;
#endif /* !KNR_STYLE */

#define LOCALFUNCTION__REALLOC \
	FUNCTION_HEADER__REALLOC \
	{\
		const PTR	RESULT = realloc(ADDRESS, SIZE + sizeof(LET));\
		PTR			USER_PTR;\
		\
		if (!RESULT)\
			return ((PTR)0);\
		\
		{\
			LET	TRACK_I;\
			\
			for (TRACK_I = 0; TRACK_I < G_HEAP_COUNT; TRACK_I += 1)\
			{\
				if (G_HEAP_PTRS[TRACK_I] == ADDRESS)\
				{\
					G_HEAP_PTRS[TRACK_I] =\
						G_HEAP_PTRS[G_HEAP_COUNT - 1];\
					G_HEAP_COUNT -= 1;\
					break ;\
				}\
			}\
		}\
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