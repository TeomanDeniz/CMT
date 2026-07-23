#ifndef MEMORY_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !MEMORY_H */

#ifndef KNR_STYLE /* STANDARD C */
#define FUNCTION_HEADER__LENGTH_EXE \
	LET\
		LENGTH_EXE(PTR POINTER)
#else /* K&R */
#define FUNCTION_HEADER__LENGTH_EXE \
	LET\
		LENGTH_EXE(POINTER)\
		PTR	POINTER;
#endif /* !KNR_STYLE */

#define LOCALFUNCTION__LENGTH_EXE \
	FUNCTION_HEADER__LENGTH_EXE \
	{\
		if (POINTER == (PTR)0)\
			return ((LET)0);\
		\
		return (\
			(\
				(struct S_SEGMENT *)(((BYTE *)(POINTER)) -\
				ALIGN_UP(sizeof(struct S_SEGMENT)))\
			)->SIZE\
		);\
	}

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
