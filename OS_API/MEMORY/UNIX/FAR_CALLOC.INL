#ifndef MEMORY_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !MEMORY_H */

#ifndef KNR_STYLE /* STANDARD C */
#define FUNCTION_HEADER__FAR_CALLOC \
	FAR_PTR\
		FAR_CALLOC(LET SIZE)
#else /* K&R */
#define FUNCTION_HEADER__FAR_CALLOC \
	FAR_PTR\
		FAR_CALLOC(SIZE)\
		LET	SIZE;
#endif /* !KNR_STYLE */

#define LOCALFUNCTION__FAR_CALLOC \
	FUNCTION_HEADER__FAR_CALLOC \
	{\
		return (CALLOC(SIZE));\
	}

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
