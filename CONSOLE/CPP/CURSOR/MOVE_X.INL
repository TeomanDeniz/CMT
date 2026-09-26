#ifndef CONSOLE_HPP
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_HPP */

#define LOCALFUNCTION__CMT_CONSOLE_CPP__CURSOR_MOVE_X \
	cmt::CONSOLE\
		*cmt::CONSOLE::CURSOR::MOVE_X(int X_VALUE)\
	{\
		cmt::CONSOLE	*THIS = LOCALMACRO__CMT_CONSOLE_CPP__OWNER(this);\
		\
		LOCALMACRO__CMT_CONSOLE__CURSOR_MOVE_X_CONTENT\
		\
		return (THIS);\
	}\
	\
	cmt::console\
		*cmt::console::cursor::move_x(int X_VALUE)\
	{\
		cmt::console	*SELF = LOCALMACRO__CMT_CONSOLE_CPP__OWNER(this);\
		\
		LOCALMACRO__CMT_CONSOLE_CPP__UPPER(SELF)->CURSOR.MOVE_X(\
			X_VALUE\
		);\
		\
		return (SELF);\
	}

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
