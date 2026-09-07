#ifndef CONSOLE_HPP
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_HPP */

#define LOCALMACRO__CMT_CONSOLE__FREE_CONTENT \
	if (THIS->_IN_HANDLE && THIS->_IN_MODE)\
		KERNEL32.SetConsoleMode(THIS->_IN_HANDLE, THIS->_IN_MODE);\
	\
	if (THIS->_PUSH_DATA)\
	{\
		FREE(THIS->_PUSH_DATA);\
		THIS->_PUSH_DATA = (PTR)0;\
	}\
	\
	if (THIS->_SCRATCH_DATA)\
	{\
		FREE(THIS->_SCRATCH_DATA);\
		THIS->_SCRATCH_DATA = (PTR)0;\
	}\
	THIS->_PUSH_SIZE = (unsigned long)0;\
	THIS->_PUSH_CAPACITY = (unsigned long)0;\
	THIS->_PUSH_DEPTH = (long)0;\
	THIS->_SCRATCH_SIZE = (unsigned long)0;\
	\
	OBJECT__EJECT (THIS->x);\
	OBJECT__EJECT (THIS->y);\
	OBJECT__EJECT (THIS->xy);\
	OBJECT__EJECT (THIS->width);\
	OBJECT__EJECT (THIS->height);\
	OBJECT__EJECT (THIS->title);\
	\
	OBJECT__EJECT (THIS->color);\
	OBJECT__EJECT (THIS->default_color);\
	OBJECT__EJECT (THIS->clear);\
	\
	OBJECT__EJECT (THIS->export);\
	OBJECT__EJECT (THIS->import);\
	\
	OBJECT__EJECT (THIS->push);\
	OBJECT__EJECT (THIS->pop);\
	\
	OBJECT__EJECT (THIS->log);\
	OBJECT__EJECT (THIS->error);\
	OBJECT__EJECT (THIS->error_at);\
	OBJECT__EJECT (THIS->warning);\
	OBJECT__EJECT (THIS->warning_at);\
	OBJECT__EJECT (THIS->print);\
	\
	OBJECT__EJECT (THIS->put.string);\
	OBJECT__EJECT (THIS->put.line);\
	OBJECT__EJECT (THIS->put.curve);\
	OBJECT__EJECT (THIS->put.frame);\
	OBJECT__EJECT (THIS->put.frame_radius);\
	OBJECT__EJECT (THIS->put.rectangle);\
	OBJECT__EJECT (THIS->put.rectangle_radius);\
	OBJECT__EJECT (THIS->put.circle);\
	OBJECT__EJECT (THIS->put.ellipse);\
	\
	OBJECT__EJECT (THIS->put.colored.string);\
	OBJECT__EJECT (THIS->put.colored.line);\
	OBJECT__EJECT (THIS->put.colored.curve);\
	OBJECT__EJECT (THIS->put.colored.frame);\
	OBJECT__EJECT (THIS->put.colored.frame_radius);\
	OBJECT__EJECT (THIS->put.colored.rectangle);\
	OBJECT__EJECT (THIS->put.colored.rectangle_radius);\
	OBJECT__EJECT (THIS->put.colored.circle);\
	OBJECT__EJECT (THIS->put.colored.ellipse);\
	\
	OBJECT__EJECT (THIS->cursor.color);\
	OBJECT__EJECT (THIS->cursor.default_color);\
	OBJECT__EJECT (THIS->cursor.x);\
	OBJECT__EJECT (THIS->cursor.y);\
	OBJECT__EJECT (THIS->cursor.xy);\
	OBJECT__EJECT (THIS->cursor.move_x);\
	OBJECT__EJECT (THIS->cursor.move_y);\
	OBJECT__EJECT (THIS->cursor.move_xy);\
	OBJECT__EJECT (THIS->cursor.show);\
	OBJECT__EJECT (THIS->cursor.size);\
	\
	OBJECT__EJECT (THIS->input.wait.any);\
	OBJECT__EJECT (THIS->input.wait.key);\
	OBJECT__EJECT (THIS->input.wait.mouse);\
	OBJECT__EJECT (THIS->input.wait.mouse_action);\
	OBJECT__EJECT (THIS->input.wait.mouse_move);\
	\
	OBJECT__EJECT (THIS->get.line);\
	OBJECT__EJECT (THIS->get.area);\
	\
	OBJECT__EJECT (THIS->free);\
	\
	DESTROY (THIS);

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
