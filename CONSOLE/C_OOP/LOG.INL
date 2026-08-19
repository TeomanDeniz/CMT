#ifndef CONSOLE_HPP
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_HPP */

#ifndef KNR_STYLE /* STANDARD C */
#define FUNCTION_HEADER__CMT_CONSOLE_C_OOP__LOG \
	OBJECT CMT_CONSOLE\
		*CMT_CONSOLE_C_OOP__LOG(char *STRING)
#else /* K&R */
#define FUNCTION_HEADER__CMT_CONSOLE_C_OOP__LOG \
	OBJECT CMT_CONSOLE\
		*CMT_CONSOLE_C_OOP__LOG(STRING)\
		char	*STRING;
#endif /* !KNR_STYLE */

#define LOCALFUNCTION__CMT_CONSOLE_C_OOP__LOG \
	FUNCTION_HEADER__CMT_CONSOLE_C_OOP__LOG \
	{\
		OBJECT__CONNECT (CMT_CONSOLE);\
		\
		LOCALMACRO__CMT_CONSOLE__LOG_CONTENT\
		\
		return (THIS);\
	}

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
