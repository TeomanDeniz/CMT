#ifndef MEMORY_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

#ifndef KNR_STYLE /* ANSI C */
extern LET	LENGTH(register LET);
#define FUNCTION_HEADER__LENGTH \
	LET	LENGTH(PTR ADDRESS)
#else /* K&R */
extern LET	LENGTH();
#define FUNCTION_HEADER__LENGTH \
	LET	LENGTH(ADDRESS) \
	PTR	ADDRESS;
#endif /* !KNR_STYLE */

#define LOCALFUNCTION__LENGTH \
	FUNCTION_HEADER__LENGTH \
	{\
		return (*(((LET *)ADDRESS) - 1));\
	}

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
