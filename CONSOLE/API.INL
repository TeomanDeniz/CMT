#ifndef CONSOLE_HPP
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_HPP */

#ifndef SEAL_CMT_CONSOLE_API
#define SEAL_CMT_CONSOLE_API

/******************************************************************************\
|* THE WHOLE PUBLIC API OF THE CONSOLE, WRITTEN ONCE. EVERY LANGUAGE BINDING  *|
|* (CPP.INL TODAY, C_OOP.INL TOMORROW) EXPANDS THESE TABLES; NONE OF THEM     *|
|* REPEATS A SIGNATURE. SEE CMT/CPP_CLASSES.INL FOR WHAT EACH COLUMN MEANS.   *|
|*                                                                            *|
|* ADDING A MEMBER = ONE ROW HERE + ITS CONTENT MACRO IN EVERY PLATFORM.      *|
|* PARAMETER NAMES MUST BE THE NAMES THE CONTENT MACRO USES.                  *|
\******************************************************************************/

/* ************************** [v] EVENT TYPES [v] *************************** */
typedef void	(*T_CMT_CONSOLE_ON_SIZE)(unsigned int, unsigned int);
typedef void	(*T_CMT_CONSOLE_ON_PLACE)(int, int);
typedef void	(*T_CMT_CONSOLE_ON_SIGNAL)(void);
typedef void	(*T_CMT_CONSOLE_ON_KEY)(unsigned int);
typedef void	(*T_CMT_CONSOLE_ON_MOUSE)(
	unsigned int,
	unsigned int,
	unsigned int
);
/* ************************** [^] EVENT TYPES [^] *************************** */

/* **************************** [v] MEMBERS [v] ***************************** */
/* PRINT IS NOT HERE: A VARIADIC MEMBER CAN NOT BE FORWARDED, SO EVERY        */
/* BINDING WRITES IT BY HAND.                                                 */
#define LOCALTABLE__CMT_CONSOLE__ROOT(METHOD, QUERY) \
	METHOD(\
		X, x, X,\
		(int X_VALUE),\
		(X_VALUE),\
		CMT__OOP__NOTHING\
	)\
	METHOD(\
		Y, y, Y,\
		(int Y_VALUE),\
		(Y_VALUE),\
		CMT__OOP__NOTHING\
	)\
	METHOD(\
		XY, xy, XY,\
		(int X_VALUE, int Y_VALUE),\
		(X_VALUE, Y_VALUE),\
		CMT__OOP__NOTHING\
	)\
	METHOD(\
		WIDTH, width, WIDTH,\
		(unsigned int WIDTH_VALUE),\
		(WIDTH_VALUE),\
		CMT__OOP__NOTHING\
	)\
	METHOD(\
		HEIGHT, height, HEIGHT,\
		(unsigned int HEIGHT_VALUE),\
		(HEIGHT_VALUE),\
		CMT__OOP__NOTHING\
	)\
	METHOD(\
		TITLE, title, TITLE,\
		(const char *STRING),\
		(STRING),\
		CMT__OOP__NOTHING\
	)\
	METHOD(\
		COLOR, color, COLOR,\
		(unsigned int COLOR_VALUE),\
		(COLOR_VALUE),\
		CMT__OOP__NOTHING\
	)\
	METHOD(\
		DEFAULT_COLOR, default_color, DEFAULT_COLOR,\
		(void),\
		(),\
		CMT__OOP__NOTHING\
	)\
	METHOD(\
		CLEAR, clear, CLEAR,\
		(void),\
		(),\
		CMT__OOP__NOTHING\
	)\
	QUERY(\
		PTR, EXPORT, export_, EXPORT,\
		(void),\
		(),\
		CMT__OOP__NOTHING\
	)\
	METHOD(\
		IMPORT, import, IMPORT,\
		(PTR DATA),\
		(DATA),\
		CMT__OOP__NOTHING\
	)\
	METHOD(\
		PUSH, push, PUSH,\
		(void),\
		(),\
		CMT__OOP__NOTHING\
	)\
	METHOD(\
		POP, pop, POP,\
		(void),\
		(),\
		CMT__OOP__NOTHING\
	)\
	METHOD(\
		LOG, log, LOG,\
		(const char *STRING_VALUE),\
		(STRING_VALUE),\
		CMT__OOP__TEXT(STRING)\
	)\
	METHOD(\
		ERROR, error, ERROR,\
		(const char *STRING_VALUE),\
		(STRING_VALUE),\
		CMT__OOP__TEXT(STRING)\
	)\
	METHOD(\
		ERROR_AT, error_at, ERROR_AT,\
		(\
			const char *STRING_VALUE,\
			const char *THE_FILE_VALUE,\
			unsigned int THE_LINE\
		),\
		(STRING_VALUE, THE_FILE_VALUE, THE_LINE),\
		CMT__OOP__TEXT(STRING) CMT__OOP__TEXT(THE_FILE)\
	)\
	METHOD(\
		WARNING, warning, WARNING,\
		(const char *STRING_VALUE),\
		(STRING_VALUE),\
		CMT__OOP__TEXT(STRING)\
	)\
	METHOD(\
		WARNING_AT, warning_at, WARNING_AT,\
		(\
			const char *STRING_VALUE,\
			const char *THE_FILE_VALUE,\
			unsigned int THE_LINE\
		),\
		(STRING_VALUE, THE_FILE_VALUE, THE_LINE),\
		CMT__OOP__TEXT(STRING) CMT__OOP__TEXT(THE_FILE)\
	)

#define LOCALTABLE__CMT_CONSOLE__PUT(METHOD, QUERY) \
	METHOD(\
		STRING, string, PUT_STRING,\
		(const char *STRING_VALUE, unsigned int X, unsigned int Y),\
		(STRING_VALUE, X, Y),\
		CMT__OOP__TEXT(STRING)\
	)\
	METHOD(\
		LINE, line, PUT_LINE,\
		(\
			char CHARACTER,\
			unsigned int START_X,\
			unsigned int START_Y,\
			unsigned int END_X,\
			unsigned int END_Y\
		),\
		(CHARACTER, START_X, START_Y, END_X, END_Y),\
		CMT__OOP__NOTHING\
	)\
	METHOD(\
		CURVE, curve, PUT_CURVE,\
		(\
			char CHARACTER,\
			unsigned int START_X,\
			unsigned int START_Y,\
			unsigned int END_X,\
			unsigned int END_Y,\
			float CURVE_START,\
			float CURVE_END\
		),\
		(CHARACTER, START_X, START_Y, END_X, END_Y, CURVE_START, CURVE_END),\
		CMT__OOP__NOTHING\
	)\
	METHOD(\
		FRAME, frame, PUT_FRAME,\
		(\
			char CHARACTER,\
			unsigned int START_X,\
			unsigned int START_Y,\
			unsigned int END_X,\
			unsigned int END_Y\
		),\
		(CHARACTER, START_X, START_Y, END_X, END_Y),\
		CMT__OOP__NOTHING\
	)\
	METHOD(\
		FRAME_RADIUS, frame_radius, PUT_FRAME_RADIUS,\
		(\
			char CHARACTER,\
			unsigned int START_X,\
			unsigned int START_Y,\
			unsigned int END_X,\
			unsigned int END_Y,\
			unsigned int RADIUS\
		),\
		(CHARACTER, START_X, START_Y, END_X, END_Y, RADIUS),\
		CMT__OOP__NOTHING\
	)\
	METHOD(\
		RECTANGLE, rectangle, PUT_RECTANGLE,\
		(\
			char CHARACTER,\
			unsigned int START_X,\
			unsigned int START_Y,\
			unsigned int END_X,\
			unsigned int END_Y\
		),\
		(CHARACTER, START_X, START_Y, END_X, END_Y),\
		CMT__OOP__NOTHING\
	)\
	METHOD(\
		RECTANGLE_RADIUS, rectangle_radius, PUT_RECTANGLE_RADIUS,\
		(\
			char CHARACTER,\
			unsigned int START_X,\
			unsigned int START_Y,\
			unsigned int END_X,\
			unsigned int END_Y,\
			unsigned int RADIUS\
		),\
		(CHARACTER, START_X, START_Y, END_X, END_Y, RADIUS),\
		CMT__OOP__NOTHING\
	)\
	METHOD(\
		CIRCLE, circle, PUT_CIRCLE,\
		(\
			char CHARACTER,\
			unsigned int START_X,\
			unsigned int START_Y,\
			unsigned int END_X,\
			unsigned int END_Y\
		),\
		(CHARACTER, START_X, START_Y, END_X, END_Y),\
		CMT__OOP__NOTHING\
	)\
	METHOD(\
		ELLIPSE, ellipse, PUT_ELLIPSE,\
		(\
			char CHARACTER,\
			unsigned int START_X,\
			unsigned int START_Y,\
			unsigned int END_X,\
			unsigned int END_Y\
		),\
		(CHARACTER, START_X, START_Y, END_X, END_Y),\
		CMT__OOP__NOTHING\
	)

#define LOCALTABLE__CMT_CONSOLE__PUT_COLORED(METHOD, QUERY) \
	METHOD(\
		STRING, string, PUT_COLORED_STRING,\
		(\
			const char *STRING_VALUE,\
			unsigned int COLOR_VALUE,\
			unsigned int X,\
			unsigned int Y\
		),\
		(STRING_VALUE, COLOR_VALUE, X, Y),\
		CMT__OOP__TEXT(STRING)\
	)\
	METHOD(\
		LINE, line, PUT_COLORED_LINE,\
		(\
			char CHARACTER,\
			unsigned int COLOR_VALUE,\
			unsigned int START_X,\
			unsigned int START_Y,\
			unsigned int END_X,\
			unsigned int END_Y\
		),\
		(CHARACTER, COLOR_VALUE, START_X, START_Y, END_X, END_Y),\
		CMT__OOP__NOTHING\
	)\
	METHOD(\
		CURVE, curve, PUT_COLORED_CURVE,\
		(\
			char CHARACTER,\
			unsigned int COLOR_VALUE,\
			unsigned int START_X,\
			unsigned int START_Y,\
			unsigned int END_X,\
			unsigned int END_Y,\
			float CURVE_START,\
			float CURVE_END\
		),\
		(\
			CHARACTER,\
			COLOR_VALUE,\
			START_X,\
			START_Y,\
			END_X,\
			END_Y,\
			CURVE_START,\
			CURVE_END\
		),\
		CMT__OOP__NOTHING\
	)\
	METHOD(\
		FRAME, frame, PUT_COLORED_FRAME,\
		(\
			char CHARACTER,\
			unsigned int COLOR_VALUE,\
			unsigned int START_X,\
			unsigned int START_Y,\
			unsigned int END_X,\
			unsigned int END_Y\
		),\
		(CHARACTER, COLOR_VALUE, START_X, START_Y, END_X, END_Y),\
		CMT__OOP__NOTHING\
	)\
	METHOD(\
		FRAME_RADIUS, frame_radius, PUT_COLORED_FRAME_RADIUS,\
		(\
			char CHARACTER,\
			unsigned int COLOR_VALUE,\
			unsigned int START_X,\
			unsigned int START_Y,\
			unsigned int END_X,\
			unsigned int END_Y,\
			unsigned int RADIUS\
		),\
		(CHARACTER, COLOR_VALUE, START_X, START_Y, END_X, END_Y, RADIUS),\
		CMT__OOP__NOTHING\
	)\
	METHOD(\
		RECTANGLE, rectangle, PUT_COLORED_RECTANGLE,\
		(\
			char CHARACTER,\
			unsigned int COLOR_VALUE,\
			unsigned int START_X,\
			unsigned int START_Y,\
			unsigned int END_X,\
			unsigned int END_Y\
		),\
		(CHARACTER, COLOR_VALUE, START_X, START_Y, END_X, END_Y),\
		CMT__OOP__NOTHING\
	)\
	METHOD(\
		RECTANGLE_RADIUS, rectangle_radius, PUT_COLORED_RECTANGLE_RADIUS,\
		(\
			char CHARACTER,\
			unsigned int COLOR_VALUE,\
			unsigned int START_X,\
			unsigned int START_Y,\
			unsigned int END_X,\
			unsigned int END_Y,\
			unsigned int RADIUS\
		),\
		(CHARACTER, COLOR_VALUE, START_X, START_Y, END_X, END_Y, RADIUS),\
		CMT__OOP__NOTHING\
	)\
	METHOD(\
		CIRCLE, circle, PUT_COLORED_CIRCLE,\
		(\
			char CHARACTER,\
			unsigned int COLOR_VALUE,\
			unsigned int START_X,\
			unsigned int START_Y,\
			unsigned int END_X,\
			unsigned int END_Y\
		),\
		(CHARACTER, COLOR_VALUE, START_X, START_Y, END_X, END_Y),\
		CMT__OOP__NOTHING\
	)\
	METHOD(\
		ELLIPSE, ellipse, PUT_COLORED_ELLIPSE,\
		(\
			char CHARACTER,\
			unsigned int COLOR_VALUE,\
			unsigned int START_X,\
			unsigned int START_Y,\
			unsigned int END_X,\
			unsigned int END_Y\
		),\
		(CHARACTER, COLOR_VALUE, START_X, START_Y, END_X, END_Y),\
		CMT__OOP__NOTHING\
	)

#define LOCALTABLE__CMT_CONSOLE__CURSOR(METHOD, QUERY) \
	METHOD(\
		COLOR, color, CURSOR_COLOR,\
		(unsigned int COLOR_VALUE),\
		(COLOR_VALUE),\
		CMT__OOP__NOTHING\
	)\
	METHOD(\
		DEFAULT_COLOR, default_color, CURSOR_DEFAULT_COLOR,\
		(void),\
		(),\
		CMT__OOP__NOTHING\
	)\
	METHOD(\
		X, x, CURSOR_X,\
		(unsigned int X_VALUE),\
		(X_VALUE),\
		CMT__OOP__NOTHING\
	)\
	METHOD(\
		Y, y, CURSOR_Y,\
		(unsigned int Y_VALUE),\
		(Y_VALUE),\
		CMT__OOP__NOTHING\
	)\
	METHOD(\
		XY, xy, CURSOR_XY,\
		(unsigned int X_VALUE, unsigned int Y_VALUE),\
		(X_VALUE, Y_VALUE),\
		CMT__OOP__NOTHING\
	)\
	METHOD(\
		MOVE_X, move_x, CURSOR_MOVE_X,\
		(int X_VALUE),\
		(X_VALUE),\
		CMT__OOP__NOTHING\
	)\
	METHOD(\
		MOVE_Y, move_y, CURSOR_MOVE_Y,\
		(int Y_VALUE),\
		(Y_VALUE),\
		CMT__OOP__NOTHING\
	)\
	METHOD(\
		MOVE_XY, move_xy, CURSOR_MOVE_XY,\
		(int X_VALUE, int Y_VALUE),\
		(X_VALUE, Y_VALUE),\
		CMT__OOP__NOTHING\
	)\
	METHOD(\
		SHOW, show, CURSOR_SHOW,\
		(BOOLEAN STATE),\
		(STATE),\
		CMT__OOP__NOTHING\
	)\
	METHOD(\
		SIZE, size, CURSOR_SIZE,\
		(unsigned long SIZE_VALUE),\
		(SIZE_VALUE),\
		CMT__OOP__NOTHING\
	)

#define LOCALTABLE__CMT_CONSOLE__INPUT_WAIT(METHOD, QUERY) \
	METHOD(\
		ANY, any, INPUT_WAIT_ANY,\
		(void),\
		(),\
		CMT__OOP__NOTHING\
	)\
	METHOD(\
		KEY, key, INPUT_WAIT_KEY,\
		(void),\
		(),\
		CMT__OOP__NOTHING\
	)\
	METHOD(\
		MOUSE, mouse, INPUT_WAIT_MOUSE,\
		(void),\
		(),\
		CMT__OOP__NOTHING\
	)\
	METHOD(\
		MOUSE_ACTION, mouse_action, INPUT_WAIT_MOUSE_ACTION,\
		(void),\
		(),\
		CMT__OOP__NOTHING\
	)\
	METHOD(\
		MOUSE_MOVE, mouse_move, INPUT_WAIT_MOUSE_MOVE,\
		(void),\
		(),\
		CMT__OOP__NOTHING\
	)

#define LOCALTABLE__CMT_CONSOLE__GET(METHOD, QUERY) \
	QUERY(\
		char *, LINE, line, GET_LINE,\
		(\
			unsigned int START_X,\
			unsigned int START_Y,\
			unsigned int END_X,\
			unsigned int END_Y\
		),\
		(START_X, START_Y, END_X, END_Y),\
		CMT__OOP__NOTHING\
	)\
	QUERY(\
		char **, AREA, area, GET_AREA,\
		(\
			unsigned int START_X,\
			unsigned int START_Y,\
			unsigned int END_X,\
			unsigned int END_Y\
		),\
		(START_X, START_Y, END_X, END_Y),\
		CMT__OOP__NOTHING\
	)
/* **************************** [^] MEMBERS [^] ***************************** */

/* ***************************** [v] VALUES [v] ***************************** */
/* console.get.* - READ-ONLY */
#define LOCALTABLE__CMT_CONSOLE__GET_VALUES(FIELD) \
	FIELD(BOOLEAN, ACTIVE, active)\
	FIELD(BOOLEAN, TERMINAL, terminal)\
	FIELD(unsigned int, ROWS, rows)\
	FIELD(unsigned int, COLUMNS, columns)\
	FIELD(unsigned int, PIXEL_WIDTH, pixel_width)\
	FIELD(unsigned int, PIXEL_HEIGHT, pixel_height)\
	FIELD(int, X, x)\
	FIELD(int, Y, y)\
	FIELD(unsigned int, COLOR, color)\
	FIELD(unsigned int, DEFAULT_COLOR, default_color)\
	FIELD(unsigned int, WIDTH, width)\
	FIELD(unsigned int, HEIGHT, height)

/* console.get.cursor.* - READ-ONLY */
#define LOCALTABLE__CMT_CONSOLE__GET_CURSOR_VALUES(FIELD) \
	FIELD(unsigned long, SIZE, size)\
	FIELD(int, X, x)\
	FIELD(int, Y, y)\
	FIELD(unsigned int, COLOR, color)\
	FIELD(unsigned int, DEFAULT_COLOR, default_color)\
	FIELD(BOOLEAN, VISIBLE, visible)

/* console.input.get.* - READ-ONLY */
#define LOCALTABLE__CMT_CONSOLE__INPUT_GET_VALUES(FIELD) \
	FIELD(unsigned int, KEY, key)\
	FIELD(unsigned int, MOUSE, mouse)\
	FIELD(unsigned int, MOUSE_X, mouse_x)\
	FIELD(unsigned int, MOUSE_Y, mouse_y)

/* console.event.* - WRITABLE */
#define LOCALTABLE__CMT_CONSOLE__EVENT_VALUES(FIELD) \
	FIELD(T_CMT_CONSOLE_ON_SIZE, ON_RESIZE, on_resize)\
	FIELD(T_CMT_CONSOLE_ON_PLACE, ON_MOVE, on_move)\
	FIELD(T_CMT_CONSOLE_ON_SIGNAL, ON_CLOSE, on_close)\
	FIELD(T_CMT_CONSOLE_ON_SIGNAL, ON_FOCUS, on_focus)\
	FIELD(T_CMT_CONSOLE_ON_SIGNAL, ON_BLUR, on_blur)\
	FIELD(T_CMT_CONSOLE_ON_KEY, ON_KEY, on_key)\
	FIELD(T_CMT_CONSOLE_ON_MOUSE, ON_MOUSE, on_mouse)

/* console.* - WRITABLE */
#define LOCALTABLE__CMT_CONSOLE__ROOT_VALUES(FIELD) \
	FIELD(BOOLEAN, HIGHLIGHTER, highlighter)
/* ***************************** [^] VALUES [^] ***************************** */

#endif /* !SEAL_CMT_CONSOLE_API */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
