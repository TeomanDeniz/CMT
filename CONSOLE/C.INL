#ifndef CONSOLE_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_H */

#ifndef SEAL_CMT_CONSOLE_C
#define SEAL_CMT_CONSOLE_C

#ifndef OBJECT__INITIALIZE
#define OBJECT__INITIALIZE(VARIABLE, TYPE) *(TYPE *)(&VARIABLE)
#endif /* !OBJECT__INITIALIZE */

#ifndef KNR_STYLE /* STANDARD C */
struct S_CONSOLE
{
	struct /* EVENT */
	{
		void	(*ON_RESIZE)(unsigned int, unsigned int);
		void	(*ON_MOVE)(int, int);
		void	(*ON_CLOSE)(void);
		void	(*ON_FOCUS)(void);
		void	(*ON_BLUR)(void);
		void	(*ON_KEY)(unsigned int);
		void	(*ON_MOUSE)(unsigned int, unsigned int, unsigned int);
	} EVENT;

	struct /* INPUT */
	{
		struct /* GET */
		{
			const unsigned int	KEY;
			const unsigned int	MOUSE;
			const unsigned int	MOUSE_X;
			const unsigned int	MOUSE_Y;
		} GET;
	} INPUT;

	struct /* GET */
	{
		const BOOLEAN		ACTIVE;
		const BOOLEAN		TERMINAL;
		const unsigned int	ROWS;
		const unsigned int	COLUMNS;
		const unsigned int	PIXEL_WIDTH;
		const unsigned int	PIXEL_HEIGHT;
		const int			X;
		const int			Y;
		const unsigned int	COLOR;
		const unsigned int	DEFAULT_COLOR;
		const unsigned int	WIDTH;
		const unsigned int	HEIGHT;

		struct /* CURSOR */
		{
			const unsigned long	SIZE;
			const int			X;
			const int			Y;
			const unsigned int	COLOR;
			const unsigned int	DEFAULT_COLOR;
			const BOOLEAN		VISIBLE;
		} CURSOR;
	} GET;

	BOOLEAN					HIGHLIGHTER;

	LOCALMACRO__CMT_CONSOLE__PRIVATE_VARIABLES
};

struct s_console
{
	struct /* event */
	{
		void	(*on_resize)(unsigned int, unsigned int);
		void	(*on_move)(int, int);
		void	(*on_close)(void);
		void	(*on_focus)(void);
		void	(*on_blur)(void);
		void	(*on_key)(unsigned int);
		void	(*on_mouse)(unsigned int, unsigned int, unsigned int);
	} event;

	struct /* input */
	{
		struct /* get */
		{
			const unsigned int	key;
			const unsigned int	mouse;
			const unsigned int	mouse_x;
			const unsigned int	mouse_y;
		} get;
	} input;

	struct /* get */
	{
		const boolean		active;
		const boolean		terminal;
		const unsigned int	rows;
		const unsigned int	columns;
		const unsigned int	pixel_width;
		const unsigned int	pixel_height;
		const int			x;
		const int			y;
		const unsigned int	color;
		const unsigned int	default_color;
		const unsigned int	width;
		const unsigned int	height;

		struct /* cursor */
		{
			const unsigned long	size;
			const int			x;
			const int			y;
			const unsigned int	color;
			const unsigned int	default_color;
			const boolean		visible;
		} cursor;
	} get;

	boolean					highlighter;

	LOCALMACRO__CMT_CONSOLE__PRIVATE_VARIABLES
};
#else /* K&R */
struct S_CONSOLE
{
	struct /* EVENT */
	{
		void	(*ON_RESIZE)();
		void	(*ON_MOVE)();
		void	(*ON_CLOSE)();
		void	(*ON_FOCUS)();
		void	(*ON_BLUR)();
		void	(*ON_KEY)();
		void	(*ON_MOUSE)();
	} EVENT;

	struct /* INPUT */
	{
		struct /* GET */
		{
			const unsigned int	KEY;
			const unsigned int	MOUSE;
			const unsigned int	MOUSE_X;
			const unsigned int	MOUSE_Y;
		} GET;
	} INPUT;

	struct /* GET */
	{
		const BOOLEAN		ACTIVE;
		const BOOLEAN		TERMINAL;
		const unsigned int	ROWS;
		const unsigned int	COLUMNS;
		const unsigned int	PIXEL_WIDTH;
		const unsigned int	PIXEL_HEIGHT;
		const int			X;
		const int			Y;
		const unsigned int	COLOR;
		const unsigned int	DEFAULT_COLOR;
		const unsigned int	WIDTH;
		const unsigned int	HEIGHT;

		struct /* CURSOR */
		{
			const unsigned long	SIZE;
			const int			X;
			const int			Y;
			const unsigned int	COLOR;
			const unsigned int	DEFAULT_COLOR;
			const BOOLEAN		VISIBLE;
		} CURSOR;
	} GET;

	BOOLEAN					HIGHLIGHTER;

	LOCALMACRO__CMT_CONSOLE__PRIVATE_VARIABLES
};

struct s_console
{
	struct /* event */
	{
		void	(*on_resize)();
		void	(*on_move)();
		void	(*on_close)();
		void	(*on_focus)();
		void	(*on_blur)();
		void	(*on_key)();
		void	(*on_mouse)();
	} event;

	struct /* input */
	{
		struct /* get */
		{
			const unsigned int	key;
			const unsigned int	mouse;
			const unsigned int	mouse_x;
			const unsigned int	mouse_y;
		} get;
	} input;

	struct /* get */
	{
		const boolean		active;
		const boolean		terminal;
		const unsigned int	rows;
		const unsigned int	columns;
		const unsigned int	pixel_width;
		const unsigned int	pixel_height;
		const int			x;
		const int			y;
		const unsigned int	color;
		const unsigned int	default_color;
		const unsigned int	width;
		const unsigned int	height;

		struct /* cursor */
		{
			const unsigned long	size;
			const int			x;
			const int			y;
			const unsigned int	color;
			const unsigned int	default_color;
			const boolean		visible;
		} cursor;
	} get;

	boolean					highlighter;

	LOCALMACRO__CMT_CONSOLE__PRIVATE_VARIABLES
};
#endif /* !KNR_STYLE */

/* *************************** [v] MVS LINKER [v] *************************** */
/* **** MVS LINKER DOES NOT SUPPORT EXTERNAL NAMES LARGER THAN 8 BYTES!! **** */
#ifdef __MVS__ /* IBM Z/OS XL C/C++ */
#define CONSOLE_INIT CMTCINIT
#define CONSOLE_DESTORY CMTCCDES
#define CONSOLE_LOG CMTCCLOG
#define CONSOLE_WARNING CMTCCWAR
#define CONSOLE_WARNING_AT CMTCCWAT
#define CONSOLE_ERROR CMTCCERR
#define CONSOLE_ERROR_AT CMTCCEAT
#define CONSOLE_CURSOR_COLOR CMTCCCCO
#define CONSOLE_CURSOR_DEFAULT_COLOR CMTCCCDC
#define CONSOLE_PUT_STRING CMTCCPTS
#define CONSOLE_X CMTCCX01
#define CONSOLE_Y CMTCCY01
#define CONSOLE_XY CMTCCXY1
#define CONSOLE_WIDTH CMTCCWID
#define CONSOLE_HEIGHT CMTCCHEI
#define CONSOLE_COLOR CMTCCCOL
#define CONSOLE_DEFAULT_COLOR CMTCCDCO
#define CONSOLE_TITLE CMTCCTIL
#define CONSOLE_CLEAR CMTCCCLR
#define CONSOLE_EXPORT CMTCCEXP
#define CONSOLE_IMPORT CMTCCIMP
#define CONSOLE_PUSH CMTCCPSH
#define CONSOLE_POP CMTCCPOP
#define CONSOLE_PRINT CMTCCPRI
#define CONSOLE_CURSOR_X CMTCCCX1
#define CONSOLE_CURSOR_Y CMTCCCY1
#define CONSOLE_CURSOR_XY CMTCCCXY
#define CONSOLE_CURSOR_MOVE_X CMTCCCMX
#define CONSOLE_CURSOR_MOVE_Y CMTCCCMY
#define CONSOLE_CURSOR_MOVE_XY CMTCCCMZ
#define CONSOLE_CURSOR_SHOW CMTCCCSH
#define CONSOLE_CURSOR_SIZE CMTCCCSZ
#define CONSOLE_PUT_LINE CMTCCPTL
#define CONSOLE_PUT_CURVE CMTCCPTC
#define CONSOLE_PUT_FRAME CMTCCPTF
#define CONSOLE_PUT_FRAME_RADIUS CMTCCPFR
#define CONSOLE_PUT_RECTANGLE CMTCCPTR
#define CONSOLE_PUT_RECTANGLE_RADIUS CMTCCPRR
#define CONSOLE_PUT_CIRCLE CMTCCPTI
#define CONSOLE_PUT_ELLIPSE CMTCCPTE
#define CONSOLE_PUT_COLORED_STRING CMTCCCTS
#define CONSOLE_PUT_COLORED_LINE CMTCCCTL
#define CONSOLE_PUT_COLORED_CURVE CMTCCCTC
#define CONSOLE_PUT_COLORED_FRAME CMTCCCTF
#define CONSOLE_PUT_COLORED_FRAME_RADIUS CMTCCCFR
#define CONSOLE_PUT_COLORED_RECTANGLE CMTCCCTR
#define CONSOLE_PUT_COLORED_RECTANGLE_RADIUS CMTCCCRR
#define CONSOLE_PUT_COLORED_CIRCLE CMTCCCTI
#define CONSOLE_PUT_COLORED_ELLIPSE CMTCCCTE
#define CONSOLE_INPUT_WAIT_ANY CMTCCIWA
#define CONSOLE_INPUT_WAIT_KEY CMTCCIWK
#define CONSOLE_INPUT_WAIT_MOUSE CMTCCIWM
#define CONSOLE_INPUT_WAIT_MOUSE_ACTION CMTCCIMA
#define CONSOLE_INPUT_WAIT_MOUSE_MOVE CMTCCIMM
#define CONSOLE_GET_LINE CMTCCGTL
#define CONSOLE_GET_AREA CMTCCGTA
#define console_init mtlcinit
#define console_destory mtlccdes
#define console_log mtlcclog
#define console_warning mtlccwar
#define console_warning_at mtlccwat
#define console_error mtlccerr
#define console_error_at mtlcceat
#define console_cursor_color mtlcccco
#define console_cursor_default_color mtlcccdc
#define console_put_string mtlccpts
#define console_x mtlccx01
#define console_y mtlccy01
#define console_xy mtlccxy1
#define console_width mtlccwid
#define console_height mtlcchei
#define console_color mtlcccol
#define console_default_color mtlccdco
#define console_title mtlcctil
#define console_clear mtlccclr
#define console_export mtlccexp
#define console_import mtlccimp
#define console_push mtlccpsh
#define console_pop mtlccpop
#define console_print mtlccpri
#define console_cursor_x mtlcccx1
#define console_cursor_y mtlcccy1
#define console_cursor_xy mtlcccxy
#define console_cursor_move_x mtlcccmx
#define console_cursor_move_y mtlcccmy
#define console_cursor_move_xy mtlcccmz
#define console_cursor_show mtlcccsh
#define console_cursor_size mtlcccsz
#define console_put_line mtlccptl
#define console_put_curve mtlccptc
#define console_put_frame mtlccptf
#define console_put_frame_radius mtlccpfr
#define console_put_rectangle mtlccptr
#define console_put_rectangle_radius mtlccprr
#define console_put_circle mtlccpti
#define console_put_ellipse mtlccpte
#define console_put_colored_string mtlcccts
#define console_put_colored_line mtlccctl
#define console_put_colored_curve mtlccctc
#define console_put_colored_frame mtlccctf
#define console_put_colored_frame_radius mtlcccfr
#define console_put_colored_rectangle mtlccctr
#define console_put_colored_rectangle_radius mtlcccrr
#define console_put_colored_circle mtlcccti
#define console_put_colored_ellipse mtlcccte
#define console_input_wait_any mtlcciwa
#define console_input_wait_key mtlcciwk
#define console_input_wait_mouse mtlcciwm
#define console_input_wait_mouse_action mtlccima
#define console_input_wait_mouse_move mtlccimm
#define console_get_line mtlccgtl
#define console_get_area mtlccgta
#endif /* __MVS__ */
/* *************************** [^] MVS LINKER [^] *************************** */

/* ********************* [v] METAWARE HIGH C LINKER [v] ********************* */
/* * METAWARE LINKER DOES NOT SUPPORT LOWER CASE NAMES ON FUNCTION NAMES!!! * */
#ifdef __HIGHC__ /* METAWARE HIGH C/C++ */
#define LOCALLINKER__CONSOLE_HIGHC \
	pragma Alias(console_init, "L_CONSOLE_INIT");\
	pragma Alias(console_destory, "L_CONSOLE_DESTORY");\
	pragma Alias(console_log, "L_CONSOLE_LOG");\
	pragma Alias(console_warning, "L_CONSOLE_WARNING");\
	pragma Alias(console_warning_at, "L_CONSOLE_WARNING_AT");\
	pragma Alias(console_error, "L_CONSOLE_ERROR");\
	pragma Alias(console_error_at, "L_CONSOLE_ERROR_AT");\
	pragma Alias(console_cursor_color, "L_CONSOLE_CURSOR_COLOR");\
	pragma Alias(\
		console_cursor_default_color, "L_CONSOLE_CURSOR_DEFAULT_COLOR"\
	);\
	pragma Alias(console_put_string, "L_CONSOLE_PUT_STRING");\
	pragma Alias(console_x, "L_CONSOLE_X");\
	pragma Alias(console_y, "L_CONSOLE_Y");\
	pragma Alias(console_xy, "L_CONSOLE_XY");\
	pragma Alias(console_width, "L_CONSOLE_WIDTH");\
	pragma Alias(console_height, "L_CONSOLE_HEIGHT");\
	pragma Alias(console_color, "L_CONSOLE_COLOR");\
	pragma Alias(console_default_color, "L_CONSOLE_DEFAULT_COLOR");\
	pragma Alias(console_title, "L_CONSOLE_TITLE");\
	pragma Alias(console_clear, "L_CONSOLE_CLEAR");\
	pragma Alias(console_export, "L_CONSOLE_EXPORT");\
	pragma Alias(console_import, "L_CONSOLE_IMPORT");\
	pragma Alias(console_push, "L_CONSOLE_PUSH");\
	pragma Alias(console_pop, "L_CONSOLE_POP");\
	pragma Alias(console_print, "L_CONSOLE_PRINT");\
	pragma Alias(console_cursor_x, "L_CONSOLE_CURSOR_X");\
	pragma Alias(console_cursor_y, "L_CONSOLE_CURSOR_Y");\
	pragma Alias(console_cursor_xy, "L_CONSOLE_CURSOR_XY");\
	pragma Alias(console_cursor_move_x, "L_CONSOLE_CURSOR_MOVE_X");\
	pragma Alias(console_cursor_move_y, "L_CONSOLE_CURSOR_MOVE_Y");\
	pragma Alias(console_cursor_move_xy, "L_CONSOLE_CURSOR_MOVE_XY");\
	pragma Alias(console_cursor_show, "L_CONSOLE_CURSOR_SHOW");\
	pragma Alias(console_cursor_size, "L_CONSOLE_CURSOR_SIZE");\
	pragma Alias(console_put_line, "L_CONSOLE_PUT_LINE");\
	pragma Alias(console_put_curve, "L_CONSOLE_PUT_CURVE");\
	pragma Alias(console_put_frame, "L_CONSOLE_PUT_FRAME");\
	pragma Alias(console_put_frame_radius, "L_CONSOLE_PUT_FRAME_RADIUS");\
	pragma Alias(console_put_rectangle, "L_CONSOLE_PUT_RECTANGLE");\
	pragma Alias(\
		console_put_rectangle_radius, "L_CONSOLE_PUT_RECTANGLE_RADIUS"\
	);\
	pragma Alias(console_put_circle, "L_CONSOLE_PUT_CIRCLE");\
	pragma Alias(console_put_ellipse, "L_CONSOLE_PUT_ELLIPSE");\
	pragma Alias(console_put_colored_string, "L_CONSOLE_PUT_COLORED_STRING");\
	pragma Alias(console_put_colored_line, "L_CONSOLE_PUT_COLORED_LINE");\
	pragma Alias(console_put_colored_curve, "L_CONSOLE_PUT_COLORED_CURVE");\
	pragma Alias(console_put_colored_frame, "L_CONSOLE_PUT_COLORED_FRAME");\
	pragma Alias(\
		console_put_colored_frame_radius, "L_CONSOLE_PUT_COLORED_FRAME_RADIUS"\
	);\
	pragma Alias(\
		console_put_colored_rectangle, "L_CONSOLE_PUT_COLORED_RECTANGLE"\
	);\
	pragma Alias(\
		console_put_colored_rectangle_radius, \
		"L_CONSOLE_PUT_COLORED_RECTANGLE_RADIUS"\
	);\
	pragma Alias(console_put_colored_circle, "L_CONSOLE_PUT_COLORED_CIRCLE");\
	pragma Alias(console_put_colored_ellipse, "L_CONSOLE_PUT_COLORED_ELLIPSE");\
	pragma Alias(console_input_wait_any, "L_CONSOLE_INPUT_WAIT_ANY");\
	pragma Alias(console_input_wait_key, "L_CONSOLE_INPUT_WAIT_KEY");\
	pragma Alias(console_input_wait_mouse, "L_CONSOLE_INPUT_WAIT_MOUSE");\
	pragma Alias(\
		console_input_wait_mouse_action, "L_CONSOLE_INPUT_WAIT_MOUSE_ACTION"\
	);\
	pragma Alias(\
		console_input_wait_mouse_move, "L_CONSOLE_INPUT_WAIT_MOUSE_MOVE"\
	);\
	pragma Alias(console_get_line, "L_CONSOLE_GET_LINE");\
	pragma Alias(console_get_area, "L_CONSOLE_GET_AREA");
#else /* !__HIGHC__ */
#define LOCALLINKER__CONSOLE_HIGHC
#endif /* __HIGHC__ */
/* ********************* [^] METAWARE HIGH C LINKER [^] ********************* */

/* **************************** [v] EXTERNS [v] ***************************** */
#ifndef KNR_STYLE /* STANDARD C */
extern void	CONSOLE_INIT(struct S_CONSOLE *);
extern void	CONSOLE_DESTROY(struct S_CONSOLE *);
extern void	CONSOLE_LOG(struct S_CONSOLE *, char *);
extern void	CONSOLE_WARNING(struct S_CONSOLE *, char *);
extern void	CONSOLE_WARNING_AT(\
	struct S_CONSOLE *, char *, char *, unsigned int\
);
extern void	CONSOLE_ERROR(struct S_CONSOLE *, char *);
extern void	CONSOLE_ERROR_AT(struct S_CONSOLE *, char *, char *, unsigned int);
extern void	CONSOLE_CURSOR_COLOR(struct S_CONSOLE *, unsigned int);
extern void	CONSOLE_CURSOR_DEFAULT_COLOR(struct S_CONSOLE *);
extern void	CONSOLE_PUT_STRING(\
	struct S_CONSOLE *, char *, unsigned int, unsigned int\
);
extern void	CONSOLE_X(struct S_CONSOLE *, int);
extern void	CONSOLE_Y(struct S_CONSOLE *, int);
extern void	CONSOLE_XY(struct S_CONSOLE *, int, int);
extern void	CONSOLE_WIDTH(struct S_CONSOLE *, unsigned int);
extern void	CONSOLE_HEIGHT(struct S_CONSOLE *, unsigned int);
extern void	CONSOLE_COLOR(struct S_CONSOLE *, unsigned int);
extern void	CONSOLE_DEFAULT_COLOR(struct S_CONSOLE *);
extern void	CONSOLE_CLEAR(struct S_CONSOLE *);
extern void	CONSOLE_TITLE(struct S_CONSOLE *, const char *);
extern PTR	CONSOLE_EXPORT(struct S_CONSOLE *);
extern void	CONSOLE_IMPORT(struct S_CONSOLE *, PTR);
extern void	CONSOLE_PUSH(struct S_CONSOLE *);
extern void	CONSOLE_POP(struct S_CONSOLE *);
extern void	CONSOLE_PRINT(struct S_CONSOLE *, const char *, VA_ARGS);
extern void	CONSOLE_CURSOR_X(struct S_CONSOLE *, unsigned int);
extern void	CONSOLE_CURSOR_Y(struct S_CONSOLE *, unsigned int);
extern void	CONSOLE_CURSOR_XY(struct S_CONSOLE *, unsigned int, unsigned int);
extern void	CONSOLE_CURSOR_MOVE_X(struct S_CONSOLE *, int);
extern void	CONSOLE_CURSOR_MOVE_Y(struct S_CONSOLE *, int);
extern void	CONSOLE_CURSOR_MOVE_XY(struct S_CONSOLE *, int, int);
extern void	CONSOLE_CURSOR_SHOW(struct S_CONSOLE *, BOOLEAN);
extern void	CONSOLE_CURSOR_SIZE(struct S_CONSOLE *, unsigned long);
extern void	CONSOLE_PUT_LINE(\
	struct S_CONSOLE *, \
	char, \
	unsigned int, \
	unsigned int, \
	unsigned int, \
	unsigned int\
);
extern void	CONSOLE_PUT_CURVE(\
	struct S_CONSOLE *, \
	char, \
	unsigned int, \
	unsigned int, \
	unsigned int, \
	unsigned int, \
	float, \
	float\
);
extern void	CONSOLE_PUT_FRAME(\
	struct S_CONSOLE *, \
	char, \
	unsigned int, \
	unsigned int, \
	unsigned int, \
	unsigned int\
);
extern void	CONSOLE_PUT_FRAME_RADIUS(\
	struct S_CONSOLE *, \
	char, \
	unsigned int, \
	unsigned int, \
	unsigned int, \
	unsigned int, \
	unsigned int\
);
extern void	CONSOLE_PUT_RECTANGLE(\
	struct S_CONSOLE *, \
	char, \
	unsigned int, \
	unsigned int, \
	unsigned int, \
	unsigned int\
);
extern void	CONSOLE_PUT_RECTANGLE_RADIUS(\
	struct S_CONSOLE *, \
	char, \
	unsigned int, \
	unsigned int, \
	unsigned int, \
	unsigned int, \
	unsigned int\
);
extern void	CONSOLE_PUT_CIRCLE(\
	struct S_CONSOLE *, \
	char, \
	unsigned int, \
	unsigned int, \
	unsigned int, \
	unsigned int\
);
extern void	CONSOLE_PUT_ELLIPSE(\
	struct S_CONSOLE *, \
	char, \
	unsigned int, \
	unsigned int, \
	unsigned int, \
	unsigned int\
);
extern void	CONSOLE_PUT_COLORED_STRING(\
	struct S_CONSOLE *, char *, unsigned int, unsigned int, unsigned int\
);
extern void	CONSOLE_PUT_COLORED_LINE(\
	struct S_CONSOLE *, \
	char, \
	unsigned int, \
	unsigned int, \
	unsigned int, \
	unsigned int, \
	unsigned int\
);
extern void	CONSOLE_PUT_COLORED_CURVE(\
	struct S_CONSOLE *, \
	char, \
	unsigned int, \
	unsigned int, \
	unsigned int, \
	unsigned int, \
	unsigned int, \
	float, \
	float\
);
extern void	CONSOLE_PUT_COLORED_FRAME(\
	struct S_CONSOLE *, \
	char, \
	unsigned int, \
	unsigned int, \
	unsigned int, \
	unsigned int, \
	unsigned int\
);
extern void	CONSOLE_PUT_COLORED_FRAME_RADIUS(\
	struct S_CONSOLE *, \
	char, \
	unsigned int, \
	unsigned int, \
	unsigned int, \
	unsigned int, \
	unsigned int, \
	unsigned int\
);
extern void	CONSOLE_PUT_COLORED_RECTANGLE(\
	struct S_CONSOLE *, \
	char, \
	unsigned int, \
	unsigned int, \
	unsigned int, \
	unsigned int, \
	unsigned int\
);
extern void	CONSOLE_PUT_COLORED_RECTANGLE_RADIUS(\
	struct S_CONSOLE *, \
	char, \
	unsigned int, \
	unsigned int, \
	unsigned int, \
	unsigned int, \
	unsigned int, \
	unsigned int\
);
extern void	CONSOLE_PUT_COLORED_CIRCLE(\
	struct S_CONSOLE *, \
	char, \
	unsigned int, \
	unsigned int, \
	unsigned int, \
	unsigned int, \
	unsigned int\
);
extern void	CONSOLE_PUT_COLORED_ELLIPSE(\
	struct S_CONSOLE *, \
	char, \
	unsigned int, \
	unsigned int, \
	unsigned int, \
	unsigned int, \
	unsigned int\
);
extern void	CONSOLE_INPUT_WAIT_ANY(struct S_CONSOLE *);
extern void	CONSOLE_INPUT_WAIT_KEY(struct S_CONSOLE *);
extern void	CONSOLE_INPUT_WAIT_MOUSE(struct S_CONSOLE *);
extern void	CONSOLE_INPUT_WAIT_MOUSE_ACTION(struct S_CONSOLE *);
extern void	CONSOLE_INPUT_WAIT_MOUSE_MOVE(struct S_CONSOLE *);
extern char	*CONSOLE_GET_LINE(\
	struct S_CONSOLE *, unsigned int, unsigned int, unsigned int, unsigned int\
);
extern char	**CONSOLE_GET_AREA(\
	struct S_CONSOLE *, unsigned int, unsigned int, unsigned int, unsigned int\
);
extern void	console_init(struct s_console *);
extern void	console_destroy(struct s_console *);
extern void	console_log(struct s_console *, char *);
extern void	console_warning(struct s_console *, char *);
extern void	console_warning_at(\
	struct s_console *, char *, char *, unsigned int\
);
extern void	console_error(struct s_console *, char *);
extern void	console_error_at(struct s_console *, char *, char *, unsigned int);
extern void	console_cursor_color(struct s_console *, unsigned int);
extern void	console_cursor_default_color(struct s_console *);
extern void	console_put_string(\
	struct s_console *, char *, unsigned int, unsigned int\
);
extern void	console_x(struct s_console *, int);
extern void	console_y(struct s_console *, int);
extern void	console_xy(struct s_console *, int, int);
extern void	console_width(struct s_console *, unsigned int);
extern void	console_height(struct s_console *, unsigned int);
extern void	console_color(struct s_console *, unsigned int);
extern void	console_default_color(struct s_console *);
extern void	console_clear(struct s_console *);
extern void	console_title(struct s_console *, const char *);
extern ptr	console_export(struct s_console *);
extern void	console_import(struct s_console *, ptr);
extern void	console_push(struct s_console *);
extern void	console_pop(struct s_console *);
extern void	console_print(struct s_console *, const char *, va_args);
extern void	console_cursor_x(struct s_console *, unsigned int);
extern void	console_cursor_y(struct s_console *, unsigned int);
extern void	console_cursor_xy(struct s_console *, unsigned int, unsigned int);
extern void	console_cursor_move_x(struct s_console *, int);
extern void	console_cursor_move_y(struct s_console *, int);
extern void	console_cursor_move_xy(struct s_console *, int, int);
extern void	console_cursor_show(struct s_console *, boolean);
extern void	console_cursor_size(struct s_console *, unsigned long);
extern void	console_put_line(\
	struct s_console *, \
	char, \
	unsigned int, \
	unsigned int, \
	unsigned int, \
	unsigned int\
);
extern void	console_put_curve(\
	struct s_console *, \
	char, \
	unsigned int, \
	unsigned int, \
	unsigned int, \
	unsigned int, \
	float, \
	float\
);
extern void	console_put_frame(\
	struct s_console *, \
	char, \
	unsigned int, \
	unsigned int, \
	unsigned int, \
	unsigned int\
);
extern void	console_put_frame_radius(\
	struct s_console *, \
	char, \
	unsigned int, \
	unsigned int, \
	unsigned int, \
	unsigned int, \
	unsigned int\
);
extern void	console_put_rectangle(\
	struct s_console *, \
	char, \
	unsigned int, \
	unsigned int, \
	unsigned int, \
	unsigned int\
);
extern void	console_put_rectangle_radius(\
	struct s_console *, \
	char, \
	unsigned int, \
	unsigned int, \
	unsigned int, \
	unsigned int, \
	unsigned int\
);
extern void	console_put_circle(\
	struct s_console *, \
	char, \
	unsigned int, \
	unsigned int, \
	unsigned int, \
	unsigned int\
);
extern void	console_put_ellipse(\
	struct s_console *, \
	char, \
	unsigned int, \
	unsigned int, \
	unsigned int, \
	unsigned int\
);
extern void	console_put_colored_string(\
	struct s_console *, char *, unsigned int, unsigned int, unsigned int\
);
extern void	console_put_colored_line(\
	struct s_console *, \
	char, \
	unsigned int, \
	unsigned int, \
	unsigned int, \
	unsigned int, \
	unsigned int\
);
extern void	console_put_colored_curve(\
	struct s_console *, \
	char, \
	unsigned int, \
	unsigned int, \
	unsigned int, \
	unsigned int, \
	unsigned int, \
	float, \
	float\
);
extern void	console_put_colored_frame(\
	struct s_console *, \
	char, \
	unsigned int, \
	unsigned int, \
	unsigned int, \
	unsigned int, \
	unsigned int\
);
extern void	console_put_colored_frame_radius(\
	struct s_console *, \
	char, \
	unsigned int, \
	unsigned int, \
	unsigned int, \
	unsigned int, \
	unsigned int, \
	unsigned int\
);
extern void	console_put_colored_rectangle(\
	struct s_console *, \
	char, \
	unsigned int, \
	unsigned int, \
	unsigned int, \
	unsigned int, \
	unsigned int\
);
extern void	console_put_colored_rectangle_radius(\
	struct s_console *, \
	char, \
	unsigned int, \
	unsigned int, \
	unsigned int, \
	unsigned int, \
	unsigned int, \
	unsigned int\
);
extern void	console_put_colored_circle(\
	struct s_console *, \
	char, \
	unsigned int, \
	unsigned int, \
	unsigned int, \
	unsigned int, \
	unsigned int\
);
extern void	console_put_colored_ellipse(\
	struct s_console *, \
	char, \
	unsigned int, \
	unsigned int, \
	unsigned int, \
	unsigned int, \
	unsigned int\
);
extern void	console_input_wait_any(struct s_console *);
extern void	console_input_wait_key(struct s_console *);
extern void	console_input_wait_mouse(struct s_console *);
extern void	console_input_wait_mouse_action(struct s_console *);
extern void	console_input_wait_mouse_move(struct s_console *);
extern char	*console_get_line(\
	struct s_console *, unsigned int, unsigned int, unsigned int, unsigned int\
);
extern char	**console_get_area(\
	struct s_console *, unsigned int, unsigned int, unsigned int, unsigned int\
);
#else /* K&R */
extern		CONSOLE_INIT();
extern		CONSOLE_DESTROY();
extern		CONSOLE_LOG();
extern		CONSOLE_WARNING();
extern		CONSOLE_WARNING_AT();
extern		CONSOLE_ERROR();
extern		CONSOLE_ERROR_AT();
extern		CONSOLE_CURSOR_COLOR();
extern		CONSOLE_CURSOR_DEFAULT_COLOR();
extern		CONSOLE_PUT_STRING();
extern		CONSOLE_X();
extern		CONSOLE_Y();
extern		CONSOLE_XY();
extern		CONSOLE_WIDTH();
extern		CONSOLE_HEIGHT();
extern		CONSOLE_COLOR();
extern		CONSOLE_DEFAULT_COLOR();
extern		CONSOLE_CLEAR();
extern		CONSOLE_TITLE();
extern PTR	CONSOLE_EXPORT();
extern		CONSOLE_IMPORT();
extern		CONSOLE_PUSH();
extern		CONSOLE_POP();
extern		CONSOLE_PRINT();
extern		CONSOLE_CURSOR_X();
extern		CONSOLE_CURSOR_Y();
extern		CONSOLE_CURSOR_XY();
extern		CONSOLE_CURSOR_MOVE_X();
extern		CONSOLE_CURSOR_MOVE_Y();
extern		CONSOLE_CURSOR_MOVE_XY();
extern		CONSOLE_CURSOR_SHOW();
extern		CONSOLE_CURSOR_SIZE();
extern		CONSOLE_PUT_LINE();
extern		CONSOLE_PUT_CURVE();
extern		CONSOLE_PUT_FRAME();
extern		CONSOLE_PUT_FRAME_RADIUS();
extern		CONSOLE_PUT_RECTANGLE();
extern		CONSOLE_PUT_RECTANGLE_RADIUS();
extern		CONSOLE_PUT_CIRCLE();
extern		CONSOLE_PUT_ELLIPSE();
extern		CONSOLE_PUT_COLORED_STRING();
extern		CONSOLE_PUT_COLORED_LINE();
extern		CONSOLE_PUT_COLORED_CURVE();
extern		CONSOLE_PUT_COLORED_FRAME();
extern		CONSOLE_PUT_COLORED_FRAME_RADIUS();
extern		CONSOLE_PUT_COLORED_RECTANGLE();
extern		CONSOLE_PUT_COLORED_RECTANGLE_RADIUS();
extern		CONSOLE_PUT_COLORED_CIRCLE();
extern		CONSOLE_PUT_COLORED_ELLIPSE();
extern		CONSOLE_INPUT_WAIT_ANY();
extern		CONSOLE_INPUT_WAIT_KEY();
extern		CONSOLE_INPUT_WAIT_MOUSE();
extern		CONSOLE_INPUT_WAIT_MOUSE_ACTION();
extern		CONSOLE_INPUT_WAIT_MOUSE_MOVE();
extern char	*CONSOLE_GET_LINE();
extern char	**CONSOLE_GET_AREA();
extern		console_init();
extern		console_destroy();
extern		console_log();
extern		console_warning();
extern		console_warning_at();
extern		console_error();
extern		console_error_at();
extern		console_cursor_color();
extern		console_cursor_default_color();
extern		console_put_string();
extern		console_x();
extern		console_y();
extern		console_xy();
extern		console_width();
extern		console_height();
extern		console_color();
extern		console_default_color();
extern		console_clear();
extern		console_title();
extern ptr	console_export();
extern		console_import();
extern		console_push();
extern		console_pop();
extern		console_print();
extern		console_cursor_x();
extern		console_cursor_y();
extern		console_cursor_xy();
extern		console_cursor_move_x();
extern		console_cursor_move_y();
extern		console_cursor_move_xy();
extern		console_cursor_show();
extern		console_cursor_size();
extern		console_put_line();
extern		console_put_curve();
extern		console_put_frame();
extern		console_put_frame_radius();
extern		console_put_rectangle();
extern		console_put_rectangle_radius();
extern		console_put_circle();
extern		console_put_ellipse();
extern		console_put_colored_string();
extern		console_put_colored_line();
extern		console_put_colored_curve();
extern		console_put_colored_frame();
extern		console_put_colored_frame_radius();
extern		console_put_colored_rectangle();
extern		console_put_colored_rectangle_radius();
extern		console_put_colored_circle();
extern		console_put_colored_ellipse();
extern		console_input_wait_any();
extern		console_input_wait_key();
extern		console_input_wait_mouse();
extern		console_input_wait_mouse_action();
extern		console_input_wait_mouse_move();
extern char	*console_get_line();
extern char	**console_get_area();
#endif /* !KNR_STYLE */
/* **************************** [^] EXTERNS [^] ***************************** */

#include "C/INIT.INL"
#include "C/DESTRUCTOR.INL"
#include "C/LOG.INL"
#include "C/WARNING.INL"
#include "C/WARNING_AT.INL"
#include "C/ERROR.INL"
#include "C/ERROR_AT.INL"
#include "C/CURSOR/COLOR.INL"
#include "C/CURSOR/DEFAULT_COLOR.INL"
#include "C/PUT/STRING.INL"
#include "C/X.INL"
#include "C/Y.INL"
#include "C/XY.INL"
#include "C/WIDTH.INL"
#include "C/HEIGHT.INL"
#include "C/COLOR.INL"
#include "C/DEFAULT_COLOR.INL"
#include "C/CLEAR.INL"
#include "C/TITLE.INL"
#include "C/EXPORT.INL"
#include "C/IMPORT.INL"
#include "C/PUSH.INL"
#include "C/POP.INL"
#include "C/PRINT.INL"
#include "C/CURSOR/X.INL"
#include "C/CURSOR/Y.INL"
#include "C/CURSOR/XY.INL"
#include "C/CURSOR/MOVE_X.INL"
#include "C/CURSOR/MOVE_Y.INL"
#include "C/CURSOR/MOVE_XY.INL"
#include "C/CURSOR/SHOW.INL"
#include "C/CURSOR/SIZE.INL"
#include "C/PUT/LINE.INL"
#include "C/PUT/CURVE.INL"
#include "C/PUT/FRAME.INL"
#include "C/PUT/FRAME_RADIUS.INL"
#include "C/PUT/RECTANGLE.INL"
#include "C/PUT/RECTANGLE_RADIUS.INL"
#include "C/PUT/CIRCLE.INL"
#include "C/PUT/ELLIPSE.INL"
#include "C/PUT/COLORED/STRING.INL"
#include "C/PUT/COLORED/LINE.INL"
#include "C/PUT/COLORED/CURVE.INL"
#include "C/PUT/COLORED/FRAME.INL"
#include "C/PUT/COLORED/FRAME_RADIUS.INL"
#include "C/PUT/COLORED/RECTANGLE.INL"
#include "C/PUT/COLORED/RECTANGLE_RADIUS.INL"
#include "C/PUT/COLORED/CIRCLE.INL"
#include "C/PUT/COLORED/ELLIPSE.INL"
#include "C/INPUT/WAIT/ANY.INL"
#include "C/INPUT/WAIT/KEY.INL"
#include "C/INPUT/WAIT/MOUSE.INL"
#include "C/INPUT/WAIT/MOUSE_ACTION.INL"
#include "C/INPUT/WAIT/MOUSE_MOVE.INL"
#include "C/GET/LINE.INL"
#include "C/GET/AREA.INL"

/* .,,,,. #==========================================================# .,,,,. */
/*  \\//  |                 LINKABLE MEMBER CREATION                 |  \\//  */
/*   \/   #==========================================================#   \/   */

#undef LOCALLINKER__CONSOLE
#define LOCALLINKER__CONSOLE \
	LOCALLINKER__CONSOLE_HIGHC \
	LOCALFUNCTION__CONSOLE_INIT \
	LOCALFUNCTION__CONSOLE_DESTRUCTOR \
	LOCALFUNCTION__CONSOLE_LOG \
	LOCALFUNCTION__CONSOLE_WARNING \
	LOCALFUNCTION__CONSOLE_WARNING_AT \
	LOCALFUNCTION__CONSOLE_ERROR \
	LOCALFUNCTION__CONSOLE_ERROR_AT \
	LOCALFUNCTION__CONSOLE_CURSOR_COLOR \
	LOCALFUNCTION__CONSOLE_CURSOR_DEFAULT_COLOR \
	LOCALFUNCTION__CONSOLE_PUT_STRING \
	LOCALFUNCTION__CONSOLE_X \
	LOCALFUNCTION__CONSOLE_Y \
	LOCALFUNCTION__CONSOLE_XY \
	LOCALFUNCTION__CONSOLE_WIDTH \
	LOCALFUNCTION__CONSOLE_HEIGHT \
	LOCALFUNCTION__CONSOLE_COLOR \
	LOCALFUNCTION__CONSOLE_DEFAULT_COLOR \
	LOCALFUNCTION__CONSOLE_CLEAR \
	LOCALFUNCTION__CONSOLE_TITLE \
	LOCALFUNCTION__CONSOLE_EXPORT \
	LOCALFUNCTION__CONSOLE_IMPORT \
	LOCALFUNCTION__CONSOLE_PUSH \
	LOCALFUNCTION__CONSOLE_POP \
	LOCALFUNCTION__CONSOLE_PRINT \
	LOCALFUNCTION__CONSOLE_CURSOR_X \
	LOCALFUNCTION__CONSOLE_CURSOR_Y \
	LOCALFUNCTION__CONSOLE_CURSOR_XY \
	LOCALFUNCTION__CONSOLE_CURSOR_MOVE_X \
	LOCALFUNCTION__CONSOLE_CURSOR_MOVE_Y \
	LOCALFUNCTION__CONSOLE_CURSOR_MOVE_XY \
	LOCALFUNCTION__CONSOLE_CURSOR_SHOW \
	LOCALFUNCTION__CONSOLE_CURSOR_SIZE \
	LOCALFUNCTION__CONSOLE_PUT_LINE \
	LOCALFUNCTION__CONSOLE_PUT_CURVE \
	LOCALFUNCTION__CONSOLE_PUT_FRAME \
	LOCALFUNCTION__CONSOLE_PUT_FRAME_RADIUS \
	LOCALFUNCTION__CONSOLE_PUT_RECTANGLE \
	LOCALFUNCTION__CONSOLE_PUT_RECTANGLE_RADIUS \
	LOCALFUNCTION__CONSOLE_PUT_CIRCLE \
	LOCALFUNCTION__CONSOLE_PUT_ELLIPSE \
	LOCALFUNCTION__CONSOLE_PUT_COLORED_STRING \
	LOCALFUNCTION__CONSOLE_PUT_COLORED_LINE \
	LOCALFUNCTION__CONSOLE_PUT_COLORED_CURVE \
	LOCALFUNCTION__CONSOLE_PUT_COLORED_FRAME \
	LOCALFUNCTION__CONSOLE_PUT_COLORED_FRAME_RADIUS \
	LOCALFUNCTION__CONSOLE_PUT_COLORED_RECTANGLE \
	LOCALFUNCTION__CONSOLE_PUT_COLORED_RECTANGLE_RADIUS \
	LOCALFUNCTION__CONSOLE_PUT_COLORED_CIRCLE \
	LOCALFUNCTION__CONSOLE_PUT_COLORED_ELLIPSE \
	LOCALFUNCTION__CONSOLE_INPUT_WAIT_ANY \
	LOCALFUNCTION__CONSOLE_INPUT_WAIT_KEY \
	LOCALFUNCTION__CONSOLE_INPUT_WAIT_MOUSE \
	LOCALFUNCTION__CONSOLE_INPUT_WAIT_MOUSE_ACTION \
	LOCALFUNCTION__CONSOLE_INPUT_WAIT_MOUSE_MOVE \
	LOCALFUNCTION__CONSOLE_GET_LINE \
	LOCALFUNCTION__CONSOLE_GET_AREA

/*   /\   #==========================================================#   /\   */
/*  //\\  |                 LINKABLE MEMBER CREATION                 |  //\\  */
/* '""""' #==========================================================# '""""' */

#endif /* !SEAL_CMT_CONSOLE_C */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
