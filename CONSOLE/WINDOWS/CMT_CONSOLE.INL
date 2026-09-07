#ifndef CONSOLE_HPP
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_HPP */

#define LOCALFUNCTION__CMT_CONSOLE_CONTENT \
	OBJECT__INJECT (THIS->x, CMT_CONSOLE_C_OOP__X);\
	OBJECT__INJECT (THIS->y, CMT_CONSOLE_C_OOP__Y);\
	OBJECT__INJECT (THIS->xy, CMT_CONSOLE_C_OOP__XY);\
	OBJECT__INJECT (THIS->width, CMT_CONSOLE_C_OOP__WIDTH);\
	OBJECT__INJECT (THIS->height, CMT_CONSOLE_C_OOP__HEIGHT);\
	OBJECT__INJECT (THIS->title, CMT_CONSOLE_C_OOP__TITLE);\
	\
	OBJECT__INJECT (THIS->color, CMT_CONSOLE_C_OOP__COLOR);\
	OBJECT__INJECT (THIS->default_color, CMT_CONSOLE_C_OOP__DEFAULT_COLOR);\
	OBJECT__INJECT (THIS->clear, CMT_CONSOLE_C_OOP__CLEAR);\
	\
	OBJECT__INJECT (THIS->export, CMT_CONSOLE_C_OOP__EXPORT);\
	OBJECT__INJECT (THIS->import, CMT_CONSOLE_C_OOP__IMPORT);\
	\
	OBJECT__INJECT (THIS->push, CMT_CONSOLE_C_OOP__PUSH);\
	OBJECT__INJECT (THIS->pop, CMT_CONSOLE_C_OOP__POP);\
	\
	OBJECT__INJECT (THIS->log, CMT_CONSOLE_C_OOP__LOG);\
	OBJECT__INJECT (THIS->error, CMT_CONSOLE_C_OOP__ERROR);\
	OBJECT__INJECT (THIS->error_at, CMT_CONSOLE_C_OOP__ERROR_AT);\
	OBJECT__INJECT (THIS->warning, CMT_CONSOLE_C_OOP__WARNING);\
	OBJECT__INJECT (THIS->warning_at, CMT_CONSOLE_C_OOP__WARNING_AT);\
	OBJECT__INJECT (THIS->print, CMT_CONSOLE_C_OOP__PRINT);\
	\
	OBJECT__INJECT (THIS->put.string, CMT_CONSOLE_C_OOP__PUT_STRING);\
	OBJECT__INJECT (THIS->put.line, CMT_CONSOLE_C_OOP__PUT_LINE);\
	OBJECT__INJECT (THIS->put.curve, CMT_CONSOLE_C_OOP__PUT_CURVE);\
	OBJECT__INJECT (THIS->put.frame, CMT_CONSOLE_C_OOP__PUT_FRAME);\
	OBJECT__INJECT (\
		THIS->put.frame_radius, CMT_CONSOLE_C_OOP__PUT_FRAME_RADIUS\
	);\
	OBJECT__INJECT (THIS->put.rectangle, CMT_CONSOLE_C_OOP__PUT_RECTANGLE);\
	OBJECT__INJECT (\
		THIS->put.rectangle_radius, CMT_CONSOLE_C_OOP__PUT_RECTANGLE_RADIUS\
	);\
	OBJECT__INJECT (THIS->put.circle, CMT_CONSOLE_C_OOP__PUT_CIRCLE);\
	OBJECT__INJECT (THIS->put.ellipse, CMT_CONSOLE_C_OOP__PUT_ELLIPSE);\
	\
	OBJECT__INJECT (\
		THIS->put.colored.string, CMT_CONSOLE_C_OOP__PUT_COLORED_STRING\
	);\
	OBJECT__INJECT (\
		THIS->put.colored.line, CMT_CONSOLE_C_OOP__PUT_COLORED_LINE\
	);\
	OBJECT__INJECT (\
		THIS->put.colored.curve, CMT_CONSOLE_C_OOP__PUT_COLORED_CURVE\
	);\
	OBJECT__INJECT (\
		THIS->put.colored.frame, CMT_CONSOLE_C_OOP__PUT_COLORED_FRAME\
	);\
	OBJECT__INJECT (\
		THIS->put.colored.frame_radius, \
		CMT_CONSOLE_C_OOP__PUT_COLORED_FRAME_RADIUS\
	);\
	OBJECT__INJECT (\
		THIS->put.colored.rectangle, CMT_CONSOLE_C_OOP__PUT_COLORED_RECTANGLE\
	);\
	OBJECT__INJECT (\
		THIS->put.colored.rectangle_radius, \
		CMT_CONSOLE_C_OOP__PUT_COLORED_RECTANGLE_RADIUS\
	);\
	OBJECT__INJECT (\
		THIS->put.colored.circle, CMT_CONSOLE_C_OOP__PUT_COLORED_CIRCLE\
	);\
	OBJECT__INJECT (\
		THIS->put.colored.ellipse, CMT_CONSOLE_C_OOP__PUT_COLORED_ELLIPSE\
	);\
	\
	OBJECT__INJECT (THIS->cursor.color, CMT_CONSOLE_C_OOP__CURSOR_COLOR);\
	OBJECT__INJECT (\
		THIS->cursor.default_color, CMT_CONSOLE_C_OOP__CURSOR_DEFAULT_COLOR\
	);\
	OBJECT__INJECT (THIS->cursor.x, CMT_CONSOLE_C_OOP__CURSOR_X);\
	OBJECT__INJECT (THIS->cursor.y, CMT_CONSOLE_C_OOP__CURSOR_Y);\
	OBJECT__INJECT (THIS->cursor.xy, CMT_CONSOLE_C_OOP__CURSOR_XY);\
	OBJECT__INJECT (THIS->cursor.move_x, CMT_CONSOLE_C_OOP__CURSOR_MOVE_X);\
	OBJECT__INJECT (THIS->cursor.move_y, CMT_CONSOLE_C_OOP__CURSOR_MOVE_Y);\
	OBJECT__INJECT (\
		THIS->cursor.move_xy, CMT_CONSOLE_C_OOP__CURSOR_MOVE_XY\
	);\
	OBJECT__INJECT (THIS->cursor.show, CMT_CONSOLE_C_OOP__CURSOR_SHOW);\
	OBJECT__INJECT (THIS->cursor.size, CMT_CONSOLE_C_OOP__CURSOR_SIZE);\
	\
	OBJECT__INJECT (\
		THIS->input.wait.any, CMT_CONSOLE_C_OOP__INPUT_WAIT_ANY\
	);\
	OBJECT__INJECT (\
		THIS->input.wait.key, CMT_CONSOLE_C_OOP__INPUT_WAIT_KEY\
	);\
	OBJECT__INJECT (\
		THIS->input.wait.mouse, CMT_CONSOLE_C_OOP__INPUT_WAIT_MOUSE\
	);\
	OBJECT__INJECT (\
		THIS->input.wait.mouse_action, \
		CMT_CONSOLE_C_OOP__INPUT_WAIT_MOUSE_ACTION\
	);\
	OBJECT__INJECT (\
		THIS->input.wait.mouse_move, CMT_CONSOLE_C_OOP__INPUT_WAIT_MOUSE_MOVE\
	);\
	\
	OBJECT__INJECT (THIS->get.line, CMT_CONSOLE_C_OOP__GET_LINE);\
	OBJECT__INJECT (THIS->get.area, CMT_CONSOLE_C_OOP__GET_AREA);\
	\
	OBJECT__INJECT (THIS->free, CMT_CONSOLE_C_OOP__FREE);\
	\
	THIS->event.on_resize = 0;\
	THIS->event.on_move = 0;\
	THIS->event.on_close = 0;\
	THIS->event.on_focus = 0;\
	THIS->event.on_blur = 0;\
	THIS->event.on_key = 0;\
	THIS->event.on_mouse = 0;\
	\
	OBJECT__INITIALIZE (THIS->input.get.key, unsigned int) = (unsigned)0;\
	OBJECT__INITIALIZE (THIS->input.get.mouse, unsigned int) = (unsigned)0;\
	OBJECT__INITIALIZE (THIS->input.get.mouse_x, unsigned int) = (unsigned)0;\
	OBJECT__INITIALIZE (THIS->input.get.mouse_y, unsigned int) = (unsigned)0;\
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
	THIS->highlighter = TRUE;\
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
		OBJECT__INITIALIZE (THIS->get.color, unsigned int) = CURRENT_COLOR;\
		OBJECT__INITIALIZE (THIS->get.cursor.x, int) = \
			(int)INFO.CURSOR_POSITION.X;\
		OBJECT__INITIALIZE (THIS->get.cursor.y, int) = \
			(int)INFO.CURSOR_POSITION.Y;\
		OBJECT__INITIALIZE (THIS->get.cursor.default_color, unsigned int) = \
			CURRENT_COLOR;\
		OBJECT__INITIALIZE (THIS->get.cursor.color, unsigned int) = \
			CURRENT_COLOR;\
		OBJECT__INITIALIZE (THIS->get.width, unsigned int) = \
			(unsigned int)INFO.SIZE.X;\
		OBJECT__INITIALIZE (THIS->get.height, unsigned int) = \
			(unsigned int)INFO.SIZE.Y;\
	}\
	while (0);\
	\
	do\
	{\
		struct S_CONSOLE_CURSOR_INFO	INFO;\
		\
		if (!KERNEL32.GetConsoleCursorInfo(THIS->_OUT_HANDLE, &INFO))\
		{\
			THIS->free();\
			return ;\
		}\
		\
		OBJECT__INITIALIZE (THIS->get.cursor.visible, BOOLEAN) =\
			(BOOLEAN)INFO.VISIBLE;\
		OBJECT__INITIALIZE (THIS->get.cursor.size, unsigned long) =\
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
			WINDOW_HANDLE && USER32.GetWindowRect &&\
			USER32.GetWindowRect(WINDOW_HANDLE, &BOUNDS)\
		)\
		{\
			OBJECT__INITIALIZE (THIS->get.x, int) = (int)BOUNDS.LEFT;\
			OBJECT__INITIALIZE (THIS->get.y, int) = (int)BOUNDS.TOP;\
		}\
		else\
		{\
			OBJECT__INITIALIZE (THIS->get.x, int) = 0;\
			OBJECT__INITIALIZE (THIS->get.y, int) = 0;\
		}\
	}\
	while (0);\
	\
	/***********************************************************************\\
	|* MOUSE AND RESIZE RECORDS ONLY ARRIVE ONCE THE CONSOLE IS ASKED FOR  *|\
	|* THEM, AND QUICK EDIT HAS TO GO OR IT EATS EVERY CLICK. THE ORIGINAL *|\
	|* MODE IS KEPT SO FREE() CAN HAND THE CONSOLE BACK UNTOUCHED.         *|\
	\***********************************************************************/\
	if (KERNEL32.GetConsoleMode(THIS->_IN_HANDLE, &THIS->_IN_MODE))\
		KERNEL32.SetConsoleMode(\
			THIS->_IN_HANDLE,\
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
