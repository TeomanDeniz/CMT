#ifndef CONSOLE_HPP
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_HPP */

#define LOCALMACRO__CMT_CONSOLE__CURSOR_COLOR_CONTENT \
	unsigned short	FOREGROUND;\
	unsigned short	BACKGROUND;\
	\
	FOREGROUND = (unsigned short)(COLOR_VALUE & 0X0F);\
	BACKGROUND = (unsigned short)((COLOR_VALUE >> 4) & 0X0F);\
	OBJECT__INITIALIZE (THIS->cursor.get.color, unsigned int) = COLOR_VALUE;\
	\
	KERNEL32.SetConsoleTextAttribute(\
		THIS->_OUT_HANDLE,\
		(unsigned short)((BACKGROUND << 4) | FOREGROUND)\
	);

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
