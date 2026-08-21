#ifndef CONSOLE_HPP
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_HPP */

#ifndef KNR_STYLE /* STANDARD C */
#define FUNCTION_HEADER__CMT_CONSOLE_C_OOP__ERROR_AT \
	OBJECT CMT_CONSOLE\
		*CMT_CONSOLE_C_OOP__ERROR_AT(\
			char *STRING,\
			char *THE_FILE, \
			unsigned int THE_LINE \
		)
#else /* K&R */
#define FUNCTION_HEADER__CMT_CONSOLE_C_OOP__ERROR_AT \
	OBJECT CMT_CONSOLE\
		*CMT_CONSOLE_C_OOP__ERROR_AT(\
			STRING, THE_FILE, THE_LINE\
		)\
		char			*STRING;\
		char			*THE_FILE; \
		unsigned int	THE_LINE;
#endif /* !KNR_STYLE */

#define LOCALFUNCTION__CMT_CONSOLE_C_OOP__ERROR_AT \
	FUNCTION_HEADER__CMT_CONSOLE_C_OOP__ERROR_AT \
	{\
		OBJECT__CONNECT (CMT_CONSOLE);\
		\
		LOCALMACRO__CMT_CONSOLE__ERROR_AT_CONTENT\
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
