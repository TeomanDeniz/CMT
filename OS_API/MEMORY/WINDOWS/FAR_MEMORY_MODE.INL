#ifndef MEMORY_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !MEMORY_H */

#ifndef KNR_STYLE /* STANDARD C */
#define FUNCTION_HEADER__FAR_MEMORY_MODE \
	BOOLEAN\
		FAR_MEMORY_MODE(FAR_PTR POINTER, LET SIZE, BIT32 FLAGS)
#else /* K&R */
#define FUNCTION_HEADER__FAR_MEMORY_MODE \
	BOOLEAN\
		FAR_MEMORY_MODE(POINTER, SIZE, FLAGS)\
		FAR_PTR	POINTER;\
		LET		SIZE;\
		BIT32	FLAGS;
#endif /* !KNR_STYLE */

#define LOCALFUNCTION__FAR_MEMORY_MODE \
	FUNCTION_HEADER__FAR_MEMORY_MODE \
	{\
		return (MEMORY_MODE((PTR)POINTER, SIZE, FLAGS));\
	}

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
