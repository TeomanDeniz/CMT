#ifndef MEMORY_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

#ifndef KNR_STYLE /* ANSI C */
#define FUNCTION_HEADER__IS_HEAP \
	BOOLEAN	IS_HEAP(PTR POINTER)
#else /* K&R */
#define FUNCTION_HEADER__IS_HEAP \
	BOOLEAN	IS_HEAP(POINTER) \
	PTR	POINTER;
#endif /* !KNR_STYLE */

#define LOCALFUNCTION__IS_HEAP \
	FUNCTION_HEADER__IS_HEAP \
	{\
		LET	I;\
		\
		if (POINTER == (PTR)0)\
			return ((BOOLEAN)0);\
		\
		for (I = 0; I < G_HEAP_COUNT; I += 1)\
		{\
			if (G_HEAP_PTRS[I] == POINTER)\
				return ((BOOLEAN)1);\
		}\
		\
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