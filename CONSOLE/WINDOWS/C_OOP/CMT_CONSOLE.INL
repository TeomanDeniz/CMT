#ifndef CONSOLE_HPP
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_HPP */

#define LOCALFUNCTION__CMT_CONSOLE_CONTENT \
	OBJECT__INJECT (THIS->free, CMT_CONSOLE_C_OOP__FREE);\
	OBJECT__INJECT (THIS->log, CMT_CONSOLE_C_OOP__LOG);\
	OBJECT__INJECT (THIS->warning, CMT_CONSOLE_C_OOP__WARNING);\
	OBJECT__INJECT (THIS->warning_at, CMT_CONSOLE_C_OOP__WARNING_AT);\
	OBJECT__INJECT (THIS->error, CMT_CONSOLE_C_OOP__ERROR);\
	OBJECT__INJECT (\
		THIS->cursor.default_color, CMT_CONSOLE_C_OOP__CURSOR_DEFAULT_COLOR\
	);\
	OBJECT__INJECT (THIS->cursor.color, CMT_CONSOLE_C_OOP__CURSOR_COLOR);\
	THIS->_OUT_HANDLE = KERNEL32.GetStdHandle((unsigned long)-11);\
	THIS->_HIGHLIGHTER = TRUE;\
	\
	do\
	{\
		struct S_CONSOLE_SCREEN_BUFFER_INFO	INFO;\
		\
		if (!KERNEL32.GetConsoleScreenBufferInfo(THIS->_OUT_HANDLE, &INFO))\
		{\
			THIS->free();\
			return ;\
		}\
		\
		const unsigned int	CURRENT_COLOR = \
			(unsigned int)(INFO.ATTRIBUTES & 0XFF);\
		\
		OBJECT__INITIALIZE (THIS->get.default_color, unsigned int) = \
			CURRENT_COLOR;\
		OBJECT__INITIALIZE (THIS->cursor.get.default_color, unsigned int) = \
			CURRENT_COLOR;\
		OBJECT__INITIALIZE (THIS->cursor.get.color, unsigned int) = \
			CURRENT_COLOR;\
		OBJECT__INITIALIZE (THIS->get.color, unsigned int) = \
			CURRENT_COLOR;\
		OBJECT__INITIALIZE (THIS->cursor.get.x, unsigned short) = \
			(unsigned short)INFO.CURSOR_POSITION.X;\
		OBJECT__INITIALIZE (THIS->cursor.get.x, unsigned short) = \
			(unsigned short)INFO.CURSOR_POSITION.Y;\
		OBJECT__INITIALIZE (THIS->get.width, unsigned short) = \
			(unsigned short)INFO.SIZE.X;\
		OBJECT__INITIALIZE (THIS->get.height, unsigned short) = \
			(unsigned short)INFO.SIZE.Y;\
	}\
	while (0);

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
