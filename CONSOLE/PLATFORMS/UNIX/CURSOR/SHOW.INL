#ifndef CONSOLE_HPP
#ifndef CONSOLE_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_H */
#endif /* !CONSOLE_HPP */

/* "ESC [ ? 25 H" / "ESC [ ? 25 L" */
#define LOCALMACRO__CMT_CONSOLE__CURSOR_SHOW_CONTENT \
	if (THIS->_ACTIVE)\
	{\
		LOCALMACRO__CMT_CONSOLE__ENTER\
		\
		if (STATE)\
			LOCALMACRO__CMT_CONSOLE__OUT_TEXT("\033[?25h")\
		else\
			LOCALMACRO__CMT_CONSOLE__OUT_TEXT("\033[?25l")\
		\
		OBJECT__INITIALIZE (THIS->GET.CURSOR.VISIBLE, BOOLEAN) = \
			(STATE) ? TRUE : FALSE;\
		LOCALMACRO__CMT_CONSOLE__SETTLE\
	}

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
