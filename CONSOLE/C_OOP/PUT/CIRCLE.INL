#ifndef CONSOLE_HPP
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_HPP */

#ifndef KNR_STYLE /* STANDARD C */
#define FUNCTION_HEADER__CMT_CONSOLE_C_OOP__PUT_CIRCLE \
	OBJECT CMT_CONSOLE\
		*CMT_CONSOLE_C_OOP__PUT_CIRCLE(\
			char CHARACTER,\
			unsigned int START_X,\
			unsigned int START_Y,\
			unsigned int END_X,\
			unsigned int END_Y\
		)
#else /* K&R */
#define FUNCTION_HEADER__CMT_CONSOLE_C_OOP__PUT_CIRCLE \
	OBJECT CMT_CONSOLE\
		*CMT_CONSOLE_C_OOP__PUT_CIRCLE(\
			CHARACTER, START_X, START_Y, END_X, END_Y\
		)\
		char			CHARACTER;\
		unsigned int	START_X;\
		unsigned int	START_Y;\
		unsigned int	END_X;\
		unsigned int	END_Y;
#endif /* !KNR_STYLE */

#define LOCALFUNCTION__CMT_CONSOLE_C_OOP__PUT_CIRCLE \
	FUNCTION_HEADER__CMT_CONSOLE_C_OOP__PUT_CIRCLE \
	{\
		OBJECT__CONNECT (CMT_CONSOLE);\
		\
		LOCALMACRO__CMT_CONSOLE__PUT_CIRCLE_CONTENT\
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
