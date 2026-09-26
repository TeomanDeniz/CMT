#ifndef CONSOLE_HPP
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_HPP */

#ifndef SEAL_CMT_CONSOLE_OOP
#define SEAL_CMT_CONSOLE_OOP

/* **************************** [v] INCLUDES [v] **************************** */
#include "../OBJECT.H"
/******* """""""""""""
 * #define object
 * #define OBJECT
 * #define OBJECT__CONNECT(OBJECT_TYPE_NAME)
 * #define OBJECT__INJECT(TARGET, SOURCE)
 * #define OBJECT__EJECT(MEMBER_NAME)
 * #define OBJECT__INITIALIZE(VARIABLE, TYPE)
 */
/* **************************** [^] INCLUDES [^] **************************** */

#ifndef KNR_STYLE /* STANDARD C */
OBJECT CMT_CONSOLE
{
	OBJECT CMT_CONSOLE	*(*X)(int);
	OBJECT CMT_CONSOLE	*(*Y)(int);
	OBJECT CMT_CONSOLE	*(*XY)(int, int);
	OBJECT CMT_CONSOLE	*(*WIDTH)(unsigned int);
	OBJECT CMT_CONSOLE	*(*HEIGHT)(unsigned int);
	OBJECT CMT_CONSOLE	*(*TITLE)(const char *);
	OBJECT CMT_CONSOLE	*(*COLOR)(unsigned int);
	OBJECT CMT_CONSOLE	*(*DEFAULT_COLOR)(void);
	OBJECT CMT_CONSOLE	*(*CLEAR)(void);
	PTR					(*EXPORT)(void);
	OBJECT CMT_CONSOLE	*(*IMPORT)(PTR);
	OBJECT CMT_CONSOLE	*(*PUSH)(void);
	OBJECT CMT_CONSOLE	*(*POP)(void);
	OBJECT CMT_CONSOLE	*(*LOG)(char *);
	OBJECT CMT_CONSOLE	*(*ERROR)(char *);
	OBJECT CMT_CONSOLE	*(*ERROR_AT)(char *, char *, unsigned int);
	OBJECT CMT_CONSOLE	*(*WARNING)(char *);
	OBJECT CMT_CONSOLE	*(*WARNING_AT)(char *, char *, unsigned int);
	OBJECT CMT_CONSOLE	*(*PRINT)(const char *, VA_ARGS);

	struct /* PUT */
	{
		OBJECT CMT_CONSOLE	*(*STRING)(char *, unsigned int, unsigned int);
		OBJECT CMT_CONSOLE	*(*LINE)(
			char,
			unsigned int,
			unsigned int,
			unsigned int,
			unsigned int
		);
		OBJECT CMT_CONSOLE	*(*CURVE)(
			char,
			unsigned int,
			unsigned int,
			unsigned int,
			unsigned int,
			float,
			float
		);
		OBJECT CMT_CONSOLE	*(*FRAME)(
			char,
			unsigned int,
			unsigned int,
			unsigned int,
			unsigned int
		);
		OBJECT CMT_CONSOLE	*(*FRAME_RADIUS)(
			char,
			unsigned int,
			unsigned int,
			unsigned int,
			unsigned int,
			unsigned int
		);
		OBJECT CMT_CONSOLE	*(*RECTANGLE)(
			char,
			unsigned int,
			unsigned int,
			unsigned int,
			unsigned int
		);
		OBJECT CMT_CONSOLE	*(*RECTANGLE_RADIUS)(
			char,
			unsigned int,
			unsigned int,
			unsigned int,
			unsigned int,
			unsigned int
		);
		OBJECT CMT_CONSOLE	*(*CIRCLE)(
			char,
			unsigned int,
			unsigned int,
			unsigned int,
			unsigned int
		);
		OBJECT CMT_CONSOLE	*(*ELLIPSE)(
			char,
			unsigned int,
			unsigned int,
			unsigned int,
			unsigned int
		);

		struct /* COLORED */
		{
			OBJECT CMT_CONSOLE	*(*STRING)(
				char *, unsigned int, unsigned int, unsigned int
			);
			OBJECT CMT_CONSOLE	*(*LINE)(
				char,
				unsigned int,
				unsigned int,
				unsigned int,
				unsigned int,
				unsigned int
			);
			OBJECT CMT_CONSOLE	*(*CURVE)(
				char,
				unsigned int,
				unsigned int,
				unsigned int,
				unsigned int,
				unsigned int,
				float,
				float
			);
			OBJECT CMT_CONSOLE	*(*FRAME)(
				char,
				unsigned int,
				unsigned int,
				unsigned int,
				unsigned int,
				unsigned int
			);
			OBJECT CMT_CONSOLE	*(*FRAME_RADIUS)(
				char,
				unsigned int,
				unsigned int,
				unsigned int,
				unsigned int,
				unsigned int,
				unsigned int
			);
			OBJECT CMT_CONSOLE	*(*RECTANGLE)(
				char,
				unsigned int,
				unsigned int,
				unsigned int,
				unsigned int,
				unsigned int
			);
			OBJECT CMT_CONSOLE	*(*RECTANGLE_RADIUS)(
				char,
				unsigned int,
				unsigned int,
				unsigned int,
				unsigned int,
				unsigned int,
				unsigned int
			);
			OBJECT CMT_CONSOLE	*(*CIRCLE)(
				char,
				unsigned int,
				unsigned int,
				unsigned int,
				unsigned int,
				unsigned int
			);
			OBJECT CMT_CONSOLE	*(*ELLIPSE)(
				char,
				unsigned int,
				unsigned int,
				unsigned int,
				unsigned int,
				unsigned int
			);
		} COLORED;
	} PUT;

	struct /* CURSOR */
	{
		OBJECT CMT_CONSOLE	*(*COLOR)(unsigned int);
		OBJECT CMT_CONSOLE	*(*DEFAULT_COLOR)(void);
		OBJECT CMT_CONSOLE	*(*X)(unsigned int);
		OBJECT CMT_CONSOLE	*(*Y)(unsigned int);
		OBJECT CMT_CONSOLE	*(*XY)(unsigned int, unsigned int);
		OBJECT CMT_CONSOLE	*(*MOVE_X)(int);
		OBJECT CMT_CONSOLE	*(*MOVE_Y)(int);
		OBJECT CMT_CONSOLE	*(*MOVE_XY)(int, int);
		OBJECT CMT_CONSOLE	*(*SHOW)(BOOLEAN);
		OBJECT CMT_CONSOLE	*(*SIZE)(unsigned long);
	} CURSOR;

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
		struct /* WAIT */
		{
			OBJECT CMT_CONSOLE	*(*ANY)(void);
			OBJECT CMT_CONSOLE	*(*KEY)(void);
			OBJECT CMT_CONSOLE	*(*MOUSE)(void);
			OBJECT CMT_CONSOLE	*(*MOUSE_ACTION)(void);
			OBJECT CMT_CONSOLE	*(*MOUSE_MOVE)(void);
		} WAIT;

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
		char				*(*LINE)(\
			unsigned int, unsigned int, unsigned int, unsigned int\
		);
		char				**(*AREA)(\
			unsigned int, unsigned int, unsigned int, unsigned int\
		);

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

	void					(*__DESTRUCTOR__)(void);
	BOOLEAN					HIGHLIGHTER;

	LOCALMACRO__CMT_CONSOLE__PRIVATE_VARIABLES
};

object cmt_console
{
	object cmt_console	*(*x)(int);
	object cmt_console	*(*y)(int);
	object cmt_console	*(*xy)(int, int);
	object cmt_console	*(*width)(unsigned int);
	object cmt_console	*(*height)(unsigned int);
	object cmt_console	*(*title)(const char *);
	object cmt_console	*(*color)(unsigned int);
	object cmt_console	*(*default_color)(void);
	object cmt_console	*(*clear)(void);
	ptr					(*export)(void);
	object cmt_console	*(*import)(ptr);
	object cmt_console	*(*push)(void);
	object cmt_console	*(*pop)(void);
	object cmt_console	*(*log)(char *);
	object cmt_console	*(*error)(char *);
	object cmt_console	*(*error_at)(char *, char *, unsigned int);
	object cmt_console	*(*warning)(char *);
	object cmt_console	*(*warning_at)(char *, char *, unsigned int);
	object cmt_console	*(*print)(const char *, va_args);

	struct /* put */
	{
		object cmt_console	*(*string)(char *, unsigned int, unsigned int);
		object cmt_console	*(*line)(\
			char,\
			unsigned int,\
			unsigned int,\
			unsigned int,\
			unsigned int\
		);
		object cmt_console	*(*curve)(\
			char,\
			unsigned int,\
			unsigned int,\
			unsigned int,\
			unsigned int,\
			float,\
			float\
		);
		object cmt_console	*(*frame)(\
			char,\
			unsigned int,\
			unsigned int,\
			unsigned int,\
			unsigned int\
		);
		object cmt_console	*(*frame_radius)(\
			char,\
			unsigned int,\
			unsigned int,\
			unsigned int,\
			unsigned int,\
			unsigned int\
		);
		object cmt_console	*(*rectangle)(\
			char,\
			unsigned int,\
			unsigned int,\
			unsigned int,\
			unsigned int\
		);
		object cmt_console	*(*rectangle_radius)(\
			char,\
			unsigned int,\
			unsigned int,\
			unsigned int,\
			unsigned int,\
			unsigned int\
		);
		object cmt_console	*(*circle)(\
			char,\
			unsigned int,\
			unsigned int,\
			unsigned int,\
			unsigned int\
		);
		object cmt_console	*(*ellipse)(\
			char,\
			unsigned int,\
			unsigned int,\
			unsigned int,\
			unsigned int\
		);

		struct /* colored */
		{
			object cmt_console	*(*string)(\
				char *, unsigned int, unsigned int, unsigned int\
			);
			object cmt_console	*(*line)(\
				char,\
				unsigned int,\
				unsigned int,\
				unsigned int,\
				unsigned int,\
				unsigned int\
			);
			object cmt_console	*(*curve)(\
				char,\
				unsigned int,\
				unsigned int,\
				unsigned int,\
				unsigned int,\
				unsigned int,\
				float,\
				float\
			);
			object cmt_console	*(*frame)(\
				char,\
				unsigned int,\
				unsigned int,\
				unsigned int,\
				unsigned int,\
				unsigned int\
			);
			object cmt_console	*(*frame_radius)(\
				char,\
				unsigned int,\
				unsigned int,\
				unsigned int,\
				unsigned int,\
				unsigned int,\
				unsigned int\
			);
			object cmt_console	*(*rectangle)(\
				char,\
				unsigned int,\
				unsigned int,\
				unsigned int,\
				unsigned int,\
				unsigned int\
			);
			object cmt_console	*(*rectangle_radius)(\
				char,\
				unsigned int,\
				unsigned int,\
				unsigned int,\
				unsigned int,\
				unsigned int,\
				unsigned int\
			);
			object cmt_console	*(*circle)(\
				char,\
				unsigned int,\
				unsigned int,\
				unsigned int,\
				unsigned int,\
				unsigned int\
			);
			object cmt_console	*(*ellipse)(\
				char,\
				unsigned int,\
				unsigned int,\
				unsigned int,\
				unsigned int,\
				unsigned int\
			);
		} colored;
	} put;

	struct /* cursor */
	{
		object cmt_console	*(*color)(unsigned int);
		object cmt_console	*(*default_color)(void);
		object cmt_console	*(*x)(unsigned int);
		object cmt_console	*(*y)(unsigned int);
		object cmt_console	*(*xy)(unsigned int, unsigned int);
		object cmt_console	*(*move_x)(int);
		object cmt_console	*(*move_y)(int);
		object cmt_console	*(*move_xy)(int, int);
		object cmt_console	*(*show)(boolean);
		object cmt_console	*(*size)(unsigned long);
	} cursor;

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
		struct /* wait */
		{
			object cmt_console	*(*any)(void);
			object cmt_console	*(*key)(void);
			object cmt_console	*(*mouse)(void);
			object cmt_console	*(*mouse_action)(void);
			object cmt_console	*(*mouse_move)(void);
		} wait;

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
		char				*(*line)(\
			unsigned int, unsigned int, unsigned int, unsigned int\
		);
		char				**(*area)(\
			unsigned int, unsigned int, unsigned int, unsigned int\
		);

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

	void					(*__DESTRUCTOR__)(void);
	boolean					highlighter;

	LOCALMACRO__CMT_CONSOLE__PRIVATE_VARIABLES
};
#else /* K&R */
OBJECT CMT_CONSOLE
{
	OBJECT CMT_CONSOLE	*(*X)();
	OBJECT CMT_CONSOLE	*(*Y)();
	OBJECT CMT_CONSOLE	*(*XY)();
	OBJECT CMT_CONSOLE	*(*WIDTH)();
	OBJECT CMT_CONSOLE	*(*HEIGHT)();
	OBJECT CMT_CONSOLE	*(*TITLE)();
	OBJECT CMT_CONSOLE	*(*COLOR)();
	OBJECT CMT_CONSOLE	*(*DEFAULT_COLOR)();
	OBJECT CMT_CONSOLE	*(*CLEAR)();
	PTR					(*EXPORT)();
	OBJECT CMT_CONSOLE	*(*IMPORT)();
	OBJECT CMT_CONSOLE	*(*PUSH)();
	OBJECT CMT_CONSOLE	*(*POP)();
	OBJECT CMT_CONSOLE	*(*LOG)();
	OBJECT CMT_CONSOLE	*(*ERROR)();
	OBJECT CMT_CONSOLE	*(*ERROR_AT)();
	OBJECT CMT_CONSOLE	*(*WARNING)();
	OBJECT CMT_CONSOLE	*(*WARNING_AT)();
	OBJECT CMT_CONSOLE	*(*PRINT)();

	struct /* PUT */
	{
		OBJECT CMT_CONSOLE	*(*STRING)();
		OBJECT CMT_CONSOLE	*(*LINE)();
		OBJECT CMT_CONSOLE	*(*CURVE)();
		OBJECT CMT_CONSOLE	*(*FRAME)();
		OBJECT CMT_CONSOLE	*(*FRAME_RADIUS)();
		OBJECT CMT_CONSOLE	*(*RECTANGLE)();
		OBJECT CMT_CONSOLE	*(*RECTANGLE_RADIUS)();
		OBJECT CMT_CONSOLE	*(*CIRCLE)();
		OBJECT CMT_CONSOLE	*(*ELLIPSE)();

		struct /* COLORED */
		{
			OBJECT CMT_CONSOLE	*(*STRING)();
			OBJECT CMT_CONSOLE	*(*LINE)();
			OBJECT CMT_CONSOLE	*(*CURVE)();
			OBJECT CMT_CONSOLE	*(*FRAME)();
			OBJECT CMT_CONSOLE	*(*FRAME_RADIUS)();
			OBJECT CMT_CONSOLE	*(*RECTANGLE)();
			OBJECT CMT_CONSOLE	*(*RECTANGLE_RADIUS)();
			OBJECT CMT_CONSOLE	*(*CIRCLE)();
			OBJECT CMT_CONSOLE	*(*ELLIPSE)();
		} COLORED;
	} PUT;

	struct /* CURSOR */
	{
		OBJECT CMT_CONSOLE	*(*COLOR)();
		OBJECT CMT_CONSOLE	*(*DEFAULT_COLOR)();
		OBJECT CMT_CONSOLE	*(*X)();
		OBJECT CMT_CONSOLE	*(*Y)();
		OBJECT CMT_CONSOLE	*(*XY)();
		OBJECT CMT_CONSOLE	*(*MOVE_X)();
		OBJECT CMT_CONSOLE	*(*MOVE_Y)();
		OBJECT CMT_CONSOLE	*(*MOVE_XY)();
		OBJECT CMT_CONSOLE	*(*SHOW)();
		OBJECT CMT_CONSOLE	*(*SIZE)();
	} CURSOR;

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
		struct /* WAIT */
		{
			OBJECT CMT_CONSOLE	*(*ANY)();
			OBJECT CMT_CONSOLE	*(*KEY)();
			OBJECT CMT_CONSOLE	*(*MOUSE)();
			OBJECT CMT_CONSOLE	*(*MOUSE_ACTION)();
			OBJECT CMT_CONSOLE	*(*MOUSE_MOVE)();
		} WAIT;

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
		char				*(*LINE)();
		char				**(*AREA)();

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

							(*__DESTRUCTOR__)();
	BOOLEAN					HIGHLIGHTER;

	LOCALMACRO__CMT_CONSOLE__PRIVATE_VARIABLES
};

object cmt_console
{
	object cmt_console	*(*x)();
	object cmt_console	*(*y)();
	object cmt_console	*(*xy)();
	object cmt_console	*(*width)();
	object cmt_console	*(*height)();
	object cmt_console	*(*title)();
	object cmt_console	*(*color)();
	object cmt_console	*(*default_color)();
	object cmt_console	*(*clear)();
	ptr					(*export)();
	object cmt_console	*(*import)();
	object cmt_console	*(*push)();
	object cmt_console	*(*pop)();
	object cmt_console	*(*log)();
	object cmt_console	*(*error)();
	object cmt_console	*(*error_at)();
	object cmt_console	*(*warning)();
	object cmt_console	*(*warning_at)();
	object cmt_console	*(*print)();

	struct /* put */
	{
		object cmt_console	*(*string)();
		object cmt_console	*(*line)();
		object cmt_console	*(*curve)();
		object cmt_console	*(*frame)();
		object cmt_console	*(*frame_radius)();
		object cmt_console	*(*rectangle)();
		object cmt_console	*(*rectangle_radius)();
		object cmt_console	*(*circle)();
		object cmt_console	*(*ellipse)();

		struct /* colored */
		{
			object cmt_console	*(*string)();
			object cmt_console	*(*line)();
			object cmt_console	*(*curve)();
			object cmt_console	*(*frame)();
			object cmt_console	*(*frame_radius)();
			object cmt_console	*(*rectangle)();
			object cmt_console	*(*rectangle_radius)();
			object cmt_console	*(*circle)();
			object cmt_console	*(*ellipse)();
		} colored;
	} put;

	struct /* cursor */
	{
		object cmt_console	*(*color)();
		object cmt_console	*(*default_color)();
		object cmt_console	*(*x)();
		object cmt_console	*(*y)();
		object cmt_console	*(*xy)();
		object cmt_console	*(*move_x)();
		object cmt_console	*(*move_y)();
		object cmt_console	*(*move_xy)();
		object cmt_console	*(*show)();
		object cmt_console	*(*size)();
	} cursor;

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
		struct /* wait */
		{
			object cmt_console	*(*any)();
			object cmt_console	*(*key)();
			object cmt_console	*(*mouse)();
			object cmt_console	*(*mouse_action)();
			object cmt_console	*(*mouse_move)();
		} wait;

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
		char				*(*line)();
		char				**(*area)();

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

							(*__DESTRUCTOR__)();
	boolean					highlighter;

	LOCALMACRO__CMT_CONSOLE__PRIVATE_VARIABLES
#endif /* !KNR_STYLE */

/* *************************** [v] MVS LINKER [v] *************************** */
/* **** MVS LINKER DOES NOT SUPPORT EXTERNAL NAMES LARGER THAN 8 BYTES!! **** */
#ifdef __MVS__ /* IBM Z/OS XL C/C++ */
#define CMT_CONSOLE CMTCOCOP
#define CMT_CONSOLE_C_OOP__DESTRUCTOR MTCOPDES
#define CMT_CONSOLE_C_OOP__LOG MTCOPLOG
#define CMT_CONSOLE_C_OOP__WARNING MTCOPWAR
#define CMT_CONSOLE_C_OOP__WARNING_AT MTCOPWAT
#define CMT_CONSOLE_C_OOP__ERROR MTCOPERR
#define CMT_CONSOLE_C_OOP__ERROR_AT MTCOPEAT
#define CMT_CONSOLE_C_OOP__CURSOR_COLOR MTCOPCCO
#define CMT_CONSOLE_C_OOP__CURSOR_DEFAULT_COLOR MTCOPCDC
#define CMT_CONSOLE_C_OOP__PUT_STRING MTCOPPTS
#define CMT_CONSOLE_C_OOP__X MTCOPX01
#define CMT_CONSOLE_C_OOP__Y MTCOPY01
#define CMT_CONSOLE_C_OOP__XY MTCOPXY1
#define CMT_CONSOLE_C_OOP__WIDTH MTCOPWID
#define CMT_CONSOLE_C_OOP__HEIGHT MTCOPHEI
#define CMT_CONSOLE_C_OOP__COLOR MTCOPCOL
#define CMT_CONSOLE_C_OOP__DEFAULT_COLOR MTCOPDCO
#define CMT_CONSOLE_C_OOP__TITLE MTCOPTIL
#define CMT_CONSOLE_C_OOP__CLEAR MTCOPCLR
#define CMT_CONSOLE_C_OOP__EXPORT MTCOPEXP
#define CMT_CONSOLE_C_OOP__IMPORT MTCOPIMP
#define CMT_CONSOLE_C_OOP__PUSH MTCOPPSH
#define CMT_CONSOLE_C_OOP__POP MTCOPPOP
#define CMT_CONSOLE_C_OOP__PRINT MTCOPPRI
#define CMT_CONSOLE_C_OOP__CURSOR_X MTCOPCX1
#define CMT_CONSOLE_C_OOP__CURSOR_Y MTCOPCY1
#define CMT_CONSOLE_C_OOP__CURSOR_XY MTCOPCXY
#define CMT_CONSOLE_C_OOP__CURSOR_MOVE_X MTCOPCMX
#define CMT_CONSOLE_C_OOP__CURSOR_MOVE_Y MTCOPCMY
#define CMT_CONSOLE_C_OOP__CURSOR_MOVE_XY MTCOPCMZ
#define CMT_CONSOLE_C_OOP__CURSOR_SHOW MTCOPCSH
#define CMT_CONSOLE_C_OOP__CURSOR_SIZE MTCOPCSZ
#define CMT_CONSOLE_C_OOP__PUT_LINE MTCOPPTL
#define CMT_CONSOLE_C_OOP__PUT_CURVE MTCOPPTC
#define CMT_CONSOLE_C_OOP__PUT_FRAME MTCOPPTF
#define CMT_CONSOLE_C_OOP__PUT_FRAME_RADIUS MTCOPPFR
#define CMT_CONSOLE_C_OOP__PUT_RECTANGLE MTCOPPTR
#define CMT_CONSOLE_C_OOP__PUT_RECTANGLE_RADIUS MTCOPPRR
#define CMT_CONSOLE_C_OOP__PUT_CIRCLE MTCOPPTI
#define CMT_CONSOLE_C_OOP__PUT_ELLIPSE MTCOPPTE
#define CMT_CONSOLE_C_OOP__PUT_COLORED_STRING MTCOPCTS
#define CMT_CONSOLE_C_OOP__PUT_COLORED_LINE MTCOPCTL
#define CMT_CONSOLE_C_OOP__PUT_COLORED_CURVE MTCOPCTC
#define CMT_CONSOLE_C_OOP__PUT_COLORED_FRAME MTCOPCTF
#define CMT_CONSOLE_C_OOP__PUT_COLORED_FRAME_RADIUS MTCOPCFR
#define CMT_CONSOLE_C_OOP__PUT_COLORED_RECTANGLE MTCOPCTR
#define CMT_CONSOLE_C_OOP__PUT_COLORED_RECTANGLE_RADIUS MTCOPCRR
#define CMT_CONSOLE_C_OOP__PUT_COLORED_CIRCLE MTCOPCTI
#define CMT_CONSOLE_C_OOP__PUT_COLORED_ELLIPSE MTCOPCTE
#define CMT_CONSOLE_C_OOP__INPUT_WAIT_ANY MTCOPIWA
#define CMT_CONSOLE_C_OOP__INPUT_WAIT_KEY MTCOPIWK
#define CMT_CONSOLE_C_OOP__INPUT_WAIT_MOUSE MTCOPIWM
#define CMT_CONSOLE_C_OOP__INPUT_WAIT_MOUSE_ACTION MTCOPIMA
#define CMT_CONSOLE_C_OOP__INPUT_WAIT_MOUSE_MOVE MTCOPIMM
#define CMT_CONSOLE_C_OOP__GET_LINE MTCOPGTL
#define CMT_CONSOLE_C_OOP__GET_AREA MTCOPGTA
#endif /* __MVS__ */
/* *************************** [^] MVS LINKER [^] *************************** */

/* **************************** [v] EXTERNS [v] ***************************** */
extern object cmt_console	console;
extern OBJECT CMT_CONSOLE	CONSOLE;

#ifndef KNR_STYLE /* STANDARD C */
extern void					CMT_CONSOLE(void);
extern void					CMT_CONSOLE_C_OOP__DESTRUCTOR(void);
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__LOG(char *);
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__WARNING(char *);
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__WARNING_AT(\
	char *, char *, unsigned int\
);
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__ERROR(char *);
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__ERROR_AT(\
	char *, char *, unsigned int\
);
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__CURSOR_COLOR(unsigned int);
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__CURSOR_DEFAULT_COLOR(void);
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__PUT_STRING(\
	char *, unsigned int, unsigned int\
);
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__X(int);
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__Y(int);
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__XY(int, int);
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__WIDTH(unsigned int);
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__HEIGHT(unsigned int);
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__COLOR(unsigned int);
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__DEFAULT_COLOR(void);
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__CLEAR(void);
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__TITLE(const char *);
extern PTR					CMT_CONSOLE_C_OOP__EXPORT(void);
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__IMPORT(PTR);
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__PUSH(void);
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__POP(void);
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__PRINT(const char *, VA_ARGS);
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__CURSOR_X(unsigned int);
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__CURSOR_Y(unsigned int);
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__CURSOR_XY(\
	unsigned int, unsigned int\
);
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__CURSOR_MOVE_X(int);
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__CURSOR_MOVE_Y(int);
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__CURSOR_MOVE_XY(int, int);
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__CURSOR_SHOW(BOOLEAN);
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__CURSOR_SIZE(unsigned long);
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__PUT_LINE(\
	char, unsigned int, unsigned int, unsigned int, unsigned int\
);
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__PUT_CURVE(\
	char, unsigned int, unsigned int, unsigned int, unsigned int, float, float\
);
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__PUT_FRAME(\
	char, unsigned int, unsigned int, unsigned int, unsigned int\
);
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__PUT_FRAME_RADIUS(\
	char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int\
);
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__PUT_RECTANGLE(\
	char, unsigned int, unsigned int, unsigned int, unsigned int\
);
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__PUT_RECTANGLE_RADIUS(\
	char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int\
);
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__PUT_CIRCLE(\
	char, unsigned int, unsigned int, unsigned int, unsigned int\
);
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__PUT_ELLIPSE(\
	char, unsigned int, unsigned int, unsigned int, unsigned int\
);
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__PUT_COLORED_STRING(\
	char *, unsigned int, unsigned int, unsigned int\
);
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__PUT_COLORED_LINE(\
	char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int\
);
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__PUT_COLORED_CURVE(\
	char,\
	unsigned int,\
	unsigned int,\
	unsigned int,\
	unsigned int,\
	unsigned int,\
	float,\
	float\
);
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__PUT_COLORED_FRAME(\
	char,\
	unsigned int,\
	unsigned int,\
	unsigned int,\
	unsigned int,\
	unsigned int\
);
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__PUT_COLORED_FRAME_RADIUS(\
	char,\
	unsigned int,\
	unsigned int,\
	unsigned int,\
	unsigned int,\
	unsigned int,\
	unsigned int\
);
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__PUT_COLORED_RECTANGLE(\
	char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int\
);
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__PUT_COLORED_RECTANGLE_RADIUS(\
	char,\
	unsigned int,\
	unsigned int,\
	unsigned int,\
	unsigned int,\
	unsigned int,\
	unsigned int\
);
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__PUT_COLORED_CIRCLE(\
	char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int\
);
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__PUT_COLORED_ELLIPSE(\
	char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int\
);
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__INPUT_WAIT_ANY(void);
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__INPUT_WAIT_KEY(void);
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__INPUT_WAIT_MOUSE(void);
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__INPUT_WAIT_MOUSE_ACTION(void);
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__INPUT_WAIT_MOUSE_MOVE(void);
extern char					*CMT_CONSOLE_C_OOP__GET_LINE(\
	unsigned int, unsigned int, unsigned int, unsigned int\
);
extern char					**CMT_CONSOLE_C_OOP__GET_AREA(\
	unsigned int, unsigned int, unsigned int, unsigned int\
);
#else /* K&R */
extern						CMT_CONSOLE();
extern						CMT_CONSOLE_C_OOP__DESTRUCTOR();
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__LOG();
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__WARNING();
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__WARNING_AT();
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__ERROR();
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__ERROR_AT();
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__CURSOR_COLOR();
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__CURSOR_DEFAULT_COLOR();
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__PUT_STRING();
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__X();
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__Y();
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__XY();
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__WIDTH();
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__HEIGHT();
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__COLOR();
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__DEFAULT_COLOR();
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__CLEAR();
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__TITLE();
extern PTR					CMT_CONSOLE_C_OOP__EXPORT();
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__IMPORT();
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__PUSH();
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__POP();
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__PRINT();
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__CURSOR_X();
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__CURSOR_Y();
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__CURSOR_XY();
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__CURSOR_MOVE_X();
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__CURSOR_MOVE_Y();
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__CURSOR_MOVE_XY();
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__CURSOR_SHOW();
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__CURSOR_SIZE();
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__PUT_LINE();
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__PUT_CURVE();
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__PUT_FRAME();
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__PUT_FRAME_RADIUS();
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__PUT_RECTANGLE();
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__PUT_RECTANGLE_RADIUS();
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__PUT_CIRCLE();
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__PUT_ELLIPSE();
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__PUT_COLORED_STRING();
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__PUT_COLORED_LINE();
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__PUT_COLORED_CURVE();
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__PUT_COLORED_FRAME();
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__PUT_COLORED_FRAME_RADIUS();
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__PUT_COLORED_RECTANGLE();
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__PUT_COLORED_RECTANGLE_RADIUS();
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__PUT_COLORED_CIRCLE();
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__PUT_COLORED_ELLIPSE();
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__INPUT_WAIT_ANY();
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__INPUT_WAIT_KEY();
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__INPUT_WAIT_MOUSE();
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__INPUT_WAIT_MOUSE_ACTION();
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__INPUT_WAIT_MOUSE_MOVE();
extern char					*CMT_CONSOLE_C_OOP__GET_LINE();
extern char					**CMT_CONSOLE_C_OOP__GET_AREA();
#endif /* !KNR_STYLE */
/* **************************** [^] EXTERNS [^] ***************************** */

#include "C_OOP/__CONSTRUCTOR__.INL"
#include "C_OOP/__DESTRUCTOR__.INL"
#include "C_OOP/LOG.INL"
#include "C_OOP/WARNING.INL"
#include "C_OOP/WARNING_AT.INL"
#include "C_OOP/ERROR.INL"
#include "C_OOP/ERROR_AT.INL"
#include "C_OOP/CURSOR/COLOR.INL"
#include "C_OOP/CURSOR/DEFAULT_COLOR.INL"
#include "C_OOP/PUT/STRING.INL"
#include "C_OOP/X.INL"
#include "C_OOP/Y.INL"
#include "C_OOP/XY.INL"
#include "C_OOP/WIDTH.INL"
#include "C_OOP/HEIGHT.INL"
#include "C_OOP/COLOR.INL"
#include "C_OOP/DEFAULT_COLOR.INL"
#include "C_OOP/CLEAR.INL"
#include "C_OOP/TITLE.INL"
#include "C_OOP/EXPORT.INL"
#include "C_OOP/IMPORT.INL"
#include "C_OOP/PUSH.INL"
#include "C_OOP/POP.INL"
#include "C_OOP/PRINT.INL"
#include "C_OOP/CURSOR/X.INL"
#include "C_OOP/CURSOR/Y.INL"
#include "C_OOP/CURSOR/XY.INL"
#include "C_OOP/CURSOR/MOVE_X.INL"
#include "C_OOP/CURSOR/MOVE_Y.INL"
#include "C_OOP/CURSOR/MOVE_XY.INL"
#include "C_OOP/CURSOR/SHOW.INL"
#include "C_OOP/CURSOR/SIZE.INL"
#include "C_OOP/PUT/LINE.INL"
#include "C_OOP/PUT/CURVE.INL"
#include "C_OOP/PUT/FRAME.INL"
#include "C_OOP/PUT/FRAME_RADIUS.INL"
#include "C_OOP/PUT/RECTANGLE.INL"
#include "C_OOP/PUT/RECTANGLE_RADIUS.INL"
#include "C_OOP/PUT/CIRCLE.INL"
#include "C_OOP/PUT/ELLIPSE.INL"
#include "C_OOP/PUT/COLORED/STRING.INL"
#include "C_OOP/PUT/COLORED/LINE.INL"
#include "C_OOP/PUT/COLORED/CURVE.INL"
#include "C_OOP/PUT/COLORED/FRAME.INL"
#include "C_OOP/PUT/COLORED/FRAME_RADIUS.INL"
#include "C_OOP/PUT/COLORED/RECTANGLE.INL"
#include "C_OOP/PUT/COLORED/RECTANGLE_RADIUS.INL"
#include "C_OOP/PUT/COLORED/CIRCLE.INL"
#include "C_OOP/PUT/COLORED/ELLIPSE.INL"
#include "C_OOP/INPUT/WAIT/ANY.INL"
#include "C_OOP/INPUT/WAIT/KEY.INL"
#include "C_OOP/INPUT/WAIT/MOUSE.INL"
#include "C_OOP/INPUT/WAIT/MOUSE_ACTION.INL"
#include "C_OOP/INPUT/WAIT/MOUSE_MOVE.INL"
#include "C_OOP/GET/LINE.INL"
#include "C_OOP/GET/AREA.INL"

#define LOCALCONSTRUCTOR__CONSOLE \
	LOCALMACRO__OBJECT_SENDER (&CONSOLE);\
	CMT_CONSOLE();\
	OBJECT__COPY (&console, &CONSOLE);
#define LOCALDESTRUCTOR__CONSOLE \
	CONSOLE.CURSOR.DEFAULT_COLOR();\
	DESTROY (CONSOLE);

/* .,,,,. #==========================================================# .,,,,. */
/*  \\//  |                 LINKABLE MEMBER CREATION                 |  \\//  */
/*   \/   #==========================================================#   \/   */

#undef LOCALLINKER__CONSOLE_OOP
#define LOCALLINKER__CONSOLE_OOP \
	object cmt_console	console;\
	OBJECT CMT_CONSOLE	CONSOLE;\
	LOCALFUNCTION__CMT_CONSOLE_C_OOP \
	LOCALFUNCTION__CMT_CONSOLE_C_OOP__DESTRUCTOR \
	LOCALFUNCTION__CMT_CONSOLE_C_OOP__LOG \
	LOCALFUNCTION__CMT_CONSOLE_C_OOP__WARNING \
	LOCALFUNCTION__CMT_CONSOLE_C_OOP__WARNING_AT \
	LOCALFUNCTION__CMT_CONSOLE_C_OOP__ERROR \
	LOCALFUNCTION__CMT_CONSOLE_C_OOP__ERROR_AT \
	LOCALFUNCTION__CMT_CONSOLE_C_OOP__CURSOR_COLOR \
	LOCALFUNCTION__CMT_CONSOLE_C_OOP__CURSOR_DEFAULT_COLOR \
	LOCALFUNCTION__CMT_CONSOLE_C_OOP__PUT_STRING \
	LOCALFUNCTION__CMT_CONSOLE_C_OOP__X \
	LOCALFUNCTION__CMT_CONSOLE_C_OOP__Y \
	LOCALFUNCTION__CMT_CONSOLE_C_OOP__XY \
	LOCALFUNCTION__CMT_CONSOLE_C_OOP__WIDTH \
	LOCALFUNCTION__CMT_CONSOLE_C_OOP__HEIGHT \
	LOCALFUNCTION__CMT_CONSOLE_C_OOP__COLOR \
	LOCALFUNCTION__CMT_CONSOLE_C_OOP__DEFAULT_COLOR \
	LOCALFUNCTION__CMT_CONSOLE_C_OOP__CLEAR \
	LOCALFUNCTION__CMT_CONSOLE_C_OOP__TITLE \
	LOCALFUNCTION__CMT_CONSOLE_C_OOP__EXPORT \
	LOCALFUNCTION__CMT_CONSOLE_C_OOP__IMPORT \
	LOCALFUNCTION__CMT_CONSOLE_C_OOP__PUSH \
	LOCALFUNCTION__CMT_CONSOLE_C_OOP__POP \
	LOCALFUNCTION__CMT_CONSOLE_C_OOP__PRINT \
	LOCALFUNCTION__CMT_CONSOLE_C_OOP__CURSOR_X \
	LOCALFUNCTION__CMT_CONSOLE_C_OOP__CURSOR_Y \
	LOCALFUNCTION__CMT_CONSOLE_C_OOP__CURSOR_XY \
	LOCALFUNCTION__CMT_CONSOLE_C_OOP__CURSOR_MOVE_X \
	LOCALFUNCTION__CMT_CONSOLE_C_OOP__CURSOR_MOVE_Y \
	LOCALFUNCTION__CMT_CONSOLE_C_OOP__CURSOR_MOVE_XY \
	LOCALFUNCTION__CMT_CONSOLE_C_OOP__CURSOR_SHOW \
	LOCALFUNCTION__CMT_CONSOLE_C_OOP__CURSOR_SIZE \
	LOCALFUNCTION__CMT_CONSOLE_C_OOP__PUT_LINE \
	LOCALFUNCTION__CMT_CONSOLE_C_OOP__PUT_CURVE \
	LOCALFUNCTION__CMT_CONSOLE_C_OOP__PUT_FRAME \
	LOCALFUNCTION__CMT_CONSOLE_C_OOP__PUT_FRAME_RADIUS \
	LOCALFUNCTION__CMT_CONSOLE_C_OOP__PUT_RECTANGLE \
	LOCALFUNCTION__CMT_CONSOLE_C_OOP__PUT_RECTANGLE_RADIUS \
	LOCALFUNCTION__CMT_CONSOLE_C_OOP__PUT_CIRCLE \
	LOCALFUNCTION__CMT_CONSOLE_C_OOP__PUT_ELLIPSE \
	LOCALFUNCTION__CMT_CONSOLE_C_OOP__PUT_COLORED_STRING \
	LOCALFUNCTION__CMT_CONSOLE_C_OOP__PUT_COLORED_LINE \
	LOCALFUNCTION__CMT_CONSOLE_C_OOP__PUT_COLORED_CURVE \
	LOCALFUNCTION__CMT_CONSOLE_C_OOP__PUT_COLORED_FRAME \
	LOCALFUNCTION__CMT_CONSOLE_C_OOP__PUT_COLORED_FRAME_RADIUS \
	LOCALFUNCTION__CMT_CONSOLE_C_OOP__PUT_COLORED_RECTANGLE \
	LOCALFUNCTION__CMT_CONSOLE_C_OOP__PUT_COLORED_RECTANGLE_RADIUS \
	LOCALFUNCTION__CMT_CONSOLE_C_OOP__PUT_COLORED_CIRCLE \
	LOCALFUNCTION__CMT_CONSOLE_C_OOP__PUT_COLORED_ELLIPSE \
	LOCALFUNCTION__CMT_CONSOLE_C_OOP__INPUT_WAIT_ANY \
	LOCALFUNCTION__CMT_CONSOLE_C_OOP__INPUT_WAIT_KEY \
	LOCALFUNCTION__CMT_CONSOLE_C_OOP__INPUT_WAIT_MOUSE \
	LOCALFUNCTION__CMT_CONSOLE_C_OOP__INPUT_WAIT_MOUSE_ACTION \
	LOCALFUNCTION__CMT_CONSOLE_C_OOP__INPUT_WAIT_MOUSE_MOVE \
	LOCALFUNCTION__CMT_CONSOLE_C_OOP__GET_LINE \
	LOCALFUNCTION__CMT_CONSOLE_C_OOP__GET_AREA

/*   /\   #==========================================================#   /\   */
/*  //\\  |                 LINKABLE MEMBER CREATION                 |  //\\  */
/* '""""' #==========================================================# '""""' */

#endif /* !SEAL_CMT_CONSOLE_OOP */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
