#ifndef CONSOLE_HPP
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_HPP */

#ifndef KNR_STYLE /* STANDARD C */
#define FUNCTION_HEADER__CMT_CONSOLE_C_OOP__CURSOR_SIZE \
	OBJECT CMT_CONSOLE\
		*CMT_CONSOLE_C_OOP__CURSOR_SIZE(unsigned long SIZE_VALUE)
#else /* K&R */
#define FUNCTION_HEADER__CMT_CONSOLE_C_OOP__CURSOR_SIZE \
	OBJECT CMT_CONSOLE\
		*CMT_CONSOLE_C_OOP__CURSOR_SIZE(SIZE_VALUE)\
		unsigned long	SIZE_VALUE;
#endif /* !KNR_STYLE */

#define LOCALFUNCTION__CMT_CONSOLE_C_OOP__CURSOR_SIZE \
	FUNCTION_HEADER__CMT_CONSOLE_C_OOP__CURSOR_SIZE \
	{\
		OBJECT__CONNECT (CMT_CONSOLE);\
		\
		LOCALMACRO__CMT_CONSOLE__CURSOR_SIZE_CONTENT\
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
