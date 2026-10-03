#ifndef CONSOLE_HPP
#ifndef CONSOLE_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_H */
#endif /* !CONSOLE_HPP */

/******************************************************************************\
|* THE CARET SHAPE (SEE UTILS/QUERY.INL FOR THE MAPPING). UNLIKE WINDOWS     *|
|* TERMINAL, MOST UNIX TERMINALS HONOUR IT: XTERM, GNOME TERMINAL, KONSOLE,   *|
|* KITTY, ALACRITTY, WEZTERM, ITERM2, AND THE LINUX TEXT CONSOLE. THE         *|
|* DESTRUCTOR PUTS THE ORIGINAL SHAPE BACK.                                   *|
\******************************************************************************/

#define LOCALMACRO__CMT_CONSOLE__CURSOR_SIZE_CONTENT \
	if (THIS->_ACTIVE)\
	{\
		unsigned long	__CMT_SIZE_TARGET__ = (unsigned long)(SIZE_VALUE);\
		\
		LOCALMACRO__CMT_CONSOLE__ENTER\
		\
		if (__CMT_SIZE_TARGET__ < (unsigned long)1)\
			__CMT_SIZE_TARGET__ = (unsigned long)1;\
		\
		if (__CMT_SIZE_TARGET__ > (unsigned long)100)\
			__CMT_SIZE_TARGET__ = (unsigned long)100;\
		\
		LOCALMACRO__CMT_CONSOLE__SEND_SIZE(__CMT_SIZE_TARGET__)\
		THIS->_SHAPED = TRUE;\
		OBJECT__INITIALIZE (THIS->GET.CURSOR.SIZE, unsigned long) = \
			__CMT_SIZE_TARGET__;\
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
