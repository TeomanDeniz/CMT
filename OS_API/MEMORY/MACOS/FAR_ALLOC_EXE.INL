#ifndef MEMORY_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !MEMORY_H */

#ifndef KNR_STYLE /* STANDARD C */
#define FUNCTION_HEADER__FAR_ALLOC_EXE \
	FAR_PTR\
		FAR_ALLOC_EXE(const PTR OP_CODES, LET SIZE)
#else /* K&R */
#define FUNCTION_HEADER__FAR_ALLOC_EXE \
	FAR_PTR\
		FAR_ALLOC_EXE(OP_CODES, SIZE)\
		PTR	OP_CODES;\
		LET	SIZE;
#endif /* !KNR_STYLE */

#define LOCALFUNCTION__FAR_ALLOC_EXE \
	FUNCTION_HEADER__FAR_ALLOC_EXE \
	{\
		return ((FAR_PTR)ALLOC_EXE(OP_CODES, SIZE));\
	}

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
