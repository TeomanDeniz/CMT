#ifndef CONSOLE_HPP
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_HPP */

#define LOCALMACRO__CMT_CONSOLE__HEIGHT_CONTENT \
	do\
	{\
		struct S_CONSOLE_SCREEN_BUFFER_INFO	INFO;\
		struct S_SMALL_RECT					WINDOW;\
		struct S_COORD						SIZE;\
		struct S_COORD						LARGEST;\
		long								WANT_COLUMNS;\
		long								WANT_ROWS;\
		BOOLEAN								__CMT_WT__;\
		BOOLEAN								__CMT_VT__;\
		\
		if (\
			!KERNEL32.GetConsoleScreenBufferInfo || \
			!KERNEL32.SetConsoleScreenBufferSize\
		)\
		{\
			THIS->warning(\
				"console.height() - console sizing entry points were "\
				"never resolved\n"\
			);\
			break ;\
		}\
		\
		if (!KERNEL32.GetConsoleScreenBufferInfo(THIS->_OUT_HANDLE, &INFO))\
		{\
			THIS->warning(\
				"console.height() - GetConsoleScreenBufferInfo failed, "\
				"output is probably redirected\n"\
			);\
			break ;\
		}\
		\
		WANT_COLUMNS = (long)INFO.SIZE.X;\
		WANT_ROWS = (long)(HEIGHT_VALUE);\
		\
		if (WANT_COLUMNS < (long)1)\
			WANT_COLUMNS = (long)1;\
		\
		if (WANT_ROWS < (long)1)\
			WANT_ROWS = (long)1;\
		\
		if (KERNEL32.GetLargestConsoleWindowSize)\
		{\
			LARGEST = KERNEL32.GetLargestConsoleWindowSize(THIS->_OUT_HANDLE);\
			\
			if (LARGEST.X && (WANT_COLUMNS > (long)LARGEST.X))\
				WANT_COLUMNS = (long)LARGEST.X;\
			\
			if (LARGEST.Y && (WANT_ROWS > (long)LARGEST.Y))\
				WANT_ROWS = (long)LARGEST.Y;\
		}\
		\
		LOCALMACRO__CMT_CONSOLE__IS_TERMINAL(__CMT_WT__)\
		SIZE.X = (short)WANT_COLUMNS;\
		SIZE.Y = (short)WANT_ROWS;\
		\
		if (__CMT_WT__)\
		{\
			KERNEL32.SetConsoleScreenBufferSize(THIS->_OUT_HANDLE, SIZE);\
			LOCALMACRO__CMT_CONSOLE__NEED_VT(__CMT_VT__)\
			\
			if (__CMT_VT__)\
			{\
				LOCALMACRO__CMT_CONSOLE__VT_RESIZE(WANT_COLUMNS, WANT_ROWS)\
			}\
		}\
		else\
		{\
			if (!KERNEL32.SetConsoleWindowInfo)\
				break ;\
			\
			WINDOW.LEFT = (short)0;\
			WINDOW.TOP = (short)0;\
			WINDOW.RIGHT = (short)0;\
			WINDOW.BOTTOM = (short)0;\
			KERNEL32.SetConsoleWindowInfo(THIS->_OUT_HANDLE, 1, &WINDOW);\
			KERNEL32.SetConsoleScreenBufferSize(THIS->_OUT_HANDLE, SIZE);\
			WINDOW.RIGHT = (short)(WANT_COLUMNS - (long)1);\
			WINDOW.BOTTOM = (short)(WANT_ROWS - (long)1);\
			KERNEL32.SetConsoleWindowInfo(THIS->_OUT_HANDLE, 1, &WINDOW);\
		}\
		\
		if (KERNEL32.GetConsoleScreenBufferInfo(THIS->_OUT_HANDLE, &INFO))\
		{\
			OBJECT__INITIALIZE (THIS->get.width, unsigned int) =\
				(unsigned int)((INFO.WINDOW.RIGHT - INFO.WINDOW.LEFT) + 1);\
			OBJECT__INITIALIZE (THIS->get.height, unsigned int) =\
				(unsigned int)((INFO.WINDOW.BOTTOM - INFO.WINDOW.TOP) + 1);\
		}\
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
