#ifndef CONSOLE_HPP
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_HPP */

#ifndef OBJECT__INITIALIZE
#define OBJECT__INITIALIZE(VARIABLE, TYPE) *(TYPE *)(&VARIABLE)
#endif /* !OBJECT__INITIALIZE */

#define LOCALFUNCTION__CMT_CONSOLE_CONTENT \
	THIS->EVENT.ON_RESIZE = 0;\
	THIS->EVENT.ON_MOVE = 0;\
	THIS->EVENT.ON_CLOSE = 0;\
	THIS->EVENT.ON_FOCUS = 0;\
	THIS->EVENT.ON_BLUR = 0;\
	THIS->EVENT.ON_KEY = 0;\
	THIS->EVENT.ON_MOUSE = 0;\
	\
	OBJECT__INITIALIZE (THIS->INPUT.GET.KEY, unsigned int) = (unsigned)0;\
	OBJECT__INITIALIZE (THIS->INPUT.GET.MOUSE, unsigned int) = (unsigned)0;\
	OBJECT__INITIALIZE (THIS->INPUT.GET.MOUSE_X, unsigned int) = (unsigned)0;\
	OBJECT__INITIALIZE (THIS->INPUT.GET.MOUSE_Y, unsigned int) = (unsigned)0;\
	\
	THIS->_OUT_HANDLE = KERNEL32.GetStdHandle((unsigned long)-11);\
	THIS->_IN_HANDLE = KERNEL32.GetStdHandle((unsigned long)-10);\
	THIS->_IN_MODE = (unsigned long)0;\
	THIS->_PUSH_DATA = (PTR)0;\
	THIS->_PUSH_SIZE = (unsigned long)0;\
	THIS->_PUSH_CAPACITY = (unsigned long)0;\
	THIS->_PUSH_DEPTH = (unsigned)0;\
	THIS->_SCRATCH_DATA = (PTR)0;\
	THIS->_SCRATCH_SIZE = (unsigned long)0;\
	THIS->HIGHLIGHTER = TRUE;\
	\
	do\
	{\
		struct S_CONSOLE_SCREEN_BUFFER_INFO	INFO;\
		\
		if (!KERNEL32.GetConsoleScreenBufferInfo(THIS->_OUT_HANDLE, &INFO))\
			return ;\
		\
		const unsigned int	CURRENT_COLOR = \
			(unsigned int)(INFO.ATTRIBUTES & 0XFF);\
		\
		OBJECT__INITIALIZE (THIS->GET.DEFAULT_COLOR, unsigned int) = \
			CURRENT_COLOR;\
		OBJECT__INITIALIZE (THIS->GET.COLOR, unsigned int) = CURRENT_COLOR;\
		OBJECT__INITIALIZE (THIS->GET.CURSOR.X, int) = \
			(int)INFO.CURSOR_POSITION.X;\
		OBJECT__INITIALIZE (THIS->GET.CURSOR.Y, int) = \
			(int)INFO.CURSOR_POSITION.Y;\
		OBJECT__INITIALIZE (THIS->GET.CURSOR.DEFAULT_COLOR, unsigned int) = \
			CURRENT_COLOR;\
		OBJECT__INITIALIZE (THIS->GET.CURSOR.COLOR, unsigned int) = \
			CURRENT_COLOR;\
		OBJECT__INITIALIZE (THIS->GET.WIDTH, unsigned int) = \
			(unsigned int)INFO.SIZE.X;\
		OBJECT__INITIALIZE (THIS->GET.HEIGHT, unsigned int) = \
			(unsigned int)INFO.SIZE.Y;\
	}\
	while (0);\
	\
	do\
	{\
		struct S_CONSOLE_CURSOR_INFO	INFO;\
		\
		if (!KERNEL32.GetConsoleCursorInfo(THIS->_OUT_HANDLE, &INFO))\
			return ;\
		\
		OBJECT__INITIALIZE (THIS->GET.CURSOR.VISIBLE, BOOLEAN) = \
			(BOOLEAN)INFO.VISIBLE;\
		OBJECT__INITIALIZE (THIS->GET.CURSOR.SIZE, unsigned long) = \
			(unsigned long)INFO.SIZE;\
	}\
	while (0);\
	\
	do\
	{\
		PTR				WINDOW_HANDLE = KERNEL32.GetConsoleWindow();\
		struct S_RECT	BOUNDS;\
		\
		if (\
			WINDOW_HANDLE && USER32.GetWindowRect && \
			USER32.GetWindowRect(WINDOW_HANDLE, &BOUNDS)\
		)\
		{\
			OBJECT__INITIALIZE (THIS->GET.X, int) = (int)BOUNDS.LEFT;\
			OBJECT__INITIALIZE (THIS->GET.Y, int) = (int)BOUNDS.TOP;\
		}\
		else\
		{\
			OBJECT__INITIALIZE (THIS->GET.X, int) = 0;\
			OBJECT__INITIALIZE (THIS->GET.Y, int) = 0;\
		}\
	}\
	while (0);\
	\
	if (KERNEL32.GetConsoleMode(THIS->_IN_HANDLE, &THIS->_IN_MODE))\
		KERNEL32.SetConsoleMode(\
			THIS->_IN_HANDLE, \
			(\
				(THIS->_IN_MODE | (unsigned long)0X98) & \
				~(unsigned long)0X40\
			)\
		);

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
