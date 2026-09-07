#ifndef CONSOLE_HPP
#ifndef CONSOLE_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_H */
#endif /* !CONSOLE_HPP */

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
object CMT_CONSOLE
{
	OBJECT CMT_CONSOLE	*(*x)(int);
	OBJECT CMT_CONSOLE	*(*y)(int);
	OBJECT CMT_CONSOLE	*(*xy)(int, int);
	OBJECT CMT_CONSOLE	*(*width)(unsigned int);
	OBJECT CMT_CONSOLE	*(*height)(unsigned int);
	OBJECT CMT_CONSOLE	*(*title)(const char *);

	OBJECT CMT_CONSOLE	*(*color)(unsigned int);
	OBJECT CMT_CONSOLE	*(*default_color)(void);
	OBJECT CMT_CONSOLE	*(*clear)(void);

	PTR					(*export)(void);
	OBJECT CMT_CONSOLE	*(*import)(PTR);

	OBJECT CMT_CONSOLE	*(*push)(void);
	OBJECT CMT_CONSOLE	*(*pop)(void);

	OBJECT CMT_CONSOLE	*(*log)(char *);
	OBJECT CMT_CONSOLE	*(*error)(char *);
	OBJECT CMT_CONSOLE	*(*error_at)(char *, char *, unsigned int);
	OBJECT CMT_CONSOLE	*(*warning)(char *);
	OBJECT CMT_CONSOLE	*(*warning_at)(char *, char *, unsigned int);
	OBJECT CMT_CONSOLE	*(*print)(const char *, VA_ARGS);

	struct /* put */
	{
		OBJECT CMT_CONSOLE	*(*string)(char *, unsigned int, unsigned int);
		OBJECT CMT_CONSOLE	*(*line)(
			char,
			unsigned int,
			unsigned int,
			unsigned int,
			unsigned int
		);
		OBJECT CMT_CONSOLE	*(*curve)(
			char,
			unsigned int,
			unsigned int,
			unsigned int,
			unsigned int,
			float,
			float
		);
		OBJECT CMT_CONSOLE	*(*frame)(
			char,
			unsigned int,
			unsigned int,
			unsigned int,
			unsigned int
		);
		OBJECT CMT_CONSOLE	*(*frame_radius)(
			char,
			unsigned int,
			unsigned int,
			unsigned int,
			unsigned int,
			unsigned int
		);
		OBJECT CMT_CONSOLE	*(*rectangle)(
			char,
			unsigned int,
			unsigned int,
			unsigned int,
			unsigned int
		);
		OBJECT CMT_CONSOLE	*(*rectangle_radius)(
			char,
			unsigned int,
			unsigned int,
			unsigned int,
			unsigned int,
			unsigned int
		);
		OBJECT CMT_CONSOLE	*(*circle)(
			char,
			unsigned int,
			unsigned int,
			unsigned int,
			unsigned int
		);
		OBJECT CMT_CONSOLE	*(*ellipse)(
			char,
			unsigned int,
			unsigned int,
			unsigned int,
			unsigned int
		);

		struct /* colored */
		{
			OBJECT CMT_CONSOLE	*(*string)(
				char *, unsigned int, unsigned int, unsigned int
			);
			OBJECT CMT_CONSOLE	*(*line)(
				char,
				unsigned int,
				unsigned int,
				unsigned int,
				unsigned int,
				unsigned int
			);
			OBJECT CMT_CONSOLE	*(*curve)(
				char,
				unsigned int,
				unsigned int,
				unsigned int,
				unsigned int,
				unsigned int,
				float,
				float
			);
			OBJECT CMT_CONSOLE	*(*frame)(
				char,
				unsigned int,
				unsigned int,
				unsigned int,
				unsigned int,
				unsigned int
			);
			OBJECT CMT_CONSOLE	*(*frame_radius)(
				char,
				unsigned int,
				unsigned int,
				unsigned int,
				unsigned int,
				unsigned int,
				unsigned int
			);
			OBJECT CMT_CONSOLE	*(*rectangle)(
				char,
				unsigned int,
				unsigned int,
				unsigned int,
				unsigned int,
				unsigned int
			);
			OBJECT CMT_CONSOLE	*(*rectangle_radius)(
				char,
				unsigned int,
				unsigned int,
				unsigned int,
				unsigned int,
				unsigned int,
				unsigned int
			);
			OBJECT CMT_CONSOLE	*(*circle)(
				char,
				unsigned int,
				unsigned int,
				unsigned int,
				unsigned int,
				unsigned int
			);
			OBJECT CMT_CONSOLE	*(*ellipse)(
				char,
				unsigned int,
				unsigned int,
				unsigned int,
				unsigned int,
				unsigned int
			);
		} colored;
	} put;

	struct /* cursor */
	{
		OBJECT CMT_CONSOLE	*(*color)(unsigned int);
		OBJECT CMT_CONSOLE	*(*default_color)(void);

		OBJECT CMT_CONSOLE	*(*x)(unsigned int);
		OBJECT CMT_CONSOLE	*(*y)(unsigned int);
		OBJECT CMT_CONSOLE	*(*xy)(unsigned int, unsigned int);

		OBJECT CMT_CONSOLE	*(*move_x)(int);
		OBJECT CMT_CONSOLE	*(*move_y)(int);
		OBJECT CMT_CONSOLE	*(*move_xy)(int, int);

		OBJECT CMT_CONSOLE	*(*show)(BOOLEAN);
		OBJECT CMT_CONSOLE	*(*size)(unsigned long);
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
			OBJECT CMT_CONSOLE	*(*any)(void);
			OBJECT CMT_CONSOLE	*(*key)(void);
			OBJECT CMT_CONSOLE	*(*mouse)(void);
			OBJECT CMT_CONSOLE	*(*mouse_action)(void);
			OBJECT CMT_CONSOLE	*(*mouse_move)(void);
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

		const BOOLEAN		active;
		const BOOLEAN		terminal;
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
			const BOOLEAN		visible;
		} cursor;
	} get;

	void					(*free)(void);
	BOOLEAN					highlighter;

	/**/ /* [v] PRIVATE ***************************************************** */
	/**/
	/**/ T_CONSOLE_OUT_HANDLE	_OUT_HANDLE;
	/**/ T_CONSOLE_IN_HANDLE	_IN_HANDLE;
	/**/ unsigned long			_IN_MODE;
	/**/ PTR					_PUSH_DATA;
	/**/ unsigned long			_PUSH_SIZE;
	/**/ unsigned long			_PUSH_CAPACITY;
	/**/ unsigned int			_PUSH_DEPTH;
	/**/ PTR					_SCRATCH_DATA;
	/**/ unsigned long			_SCRATCH_SIZE;
	/**/ BOOLEAN				_ACTIVE;
	/**/ BOOLEAN				_VT;
	/**/ BOOLEAN				_OWNED;
	/**/ BOOLEAN				_TERMINAL;
	/**/
	/**/ /* [^] PRIVATE ***************************************************** */
};
#else /* K&R */
object CMT_CONSOLE
{
	OBJECT CMT_CONSOLE	*(*x)();
	OBJECT CMT_CONSOLE	*(*y)();
	OBJECT CMT_CONSOLE	*(*xy)();
	OBJECT CMT_CONSOLE	*(*width)();
	OBJECT CMT_CONSOLE	*(*height)();
	OBJECT CMT_CONSOLE	*(*title)();

	OBJECT CMT_CONSOLE	*(*color)();
	OBJECT CMT_CONSOLE	*(*default_color)();
	OBJECT CMT_CONSOLE	*(*clear)();

	PTR					(*export)();
	OBJECT CMT_CONSOLE	*(*import)();

	OBJECT CMT_CONSOLE	*(*push)();
	OBJECT CMT_CONSOLE	*(*pop)();

	OBJECT CMT_CONSOLE	*(*log)();
	OBJECT CMT_CONSOLE	*(*error)();
	OBJECT CMT_CONSOLE	*(*error_at)();
	OBJECT CMT_CONSOLE	*(*warning)();
	OBJECT CMT_CONSOLE	*(*warning_at)();
	OBJECT CMT_CONSOLE	*(*print)();

	struct /* put */
	{
		OBJECT CMT_CONSOLE	*(*string)();
		OBJECT CMT_CONSOLE	*(*line)();
		OBJECT CMT_CONSOLE	*(*curve)();
		OBJECT CMT_CONSOLE	*(*frame)();
		OBJECT CMT_CONSOLE	*(*frame_radius)();
		OBJECT CMT_CONSOLE	*(*rectangle)();
		OBJECT CMT_CONSOLE	*(*rectangle_radius)();
		OBJECT CMT_CONSOLE	*(*circle)();
		OBJECT CMT_CONSOLE	*(*ellipse)();

		struct /* colored */
		{
			OBJECT CMT_CONSOLE	*(*string)();
			OBJECT CMT_CONSOLE	*(*line)();
			OBJECT CMT_CONSOLE	*(*curve)();
			OBJECT CMT_CONSOLE	*(*frame)();
			OBJECT CMT_CONSOLE	*(*frame_radius)();
			OBJECT CMT_CONSOLE	*(*rectangle)();
			OBJECT CMT_CONSOLE	*(*rectangle_radius)();
			OBJECT CMT_CONSOLE	*(*circle)();
			OBJECT CMT_CONSOLE	*(*ellipse)();
		} colored;
	} put;

	struct /* cursor */
	{
		OBJECT CMT_CONSOLE	*(*color)();
		OBJECT CMT_CONSOLE	*(*default_color)();
		OBJECT CMT_CONSOLE	*(*x)();
		OBJECT CMT_CONSOLE	*(*y)();
		OBJECT CMT_CONSOLE	*(*xy)();
		OBJECT CMT_CONSOLE	*(*move_x)();
		OBJECT CMT_CONSOLE	*(*move_y)();
		OBJECT CMT_CONSOLE	*(*move_xy)();
		OBJECT CMT_CONSOLE	*(*show)();
		OBJECT CMT_CONSOLE	*(*size)();
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
			OBJECT CMT_CONSOLE	*(*any)();
			OBJECT CMT_CONSOLE	*(*key)();
			OBJECT CMT_CONSOLE	*(*mouse)();
			OBJECT CMT_CONSOLE	*(*mouse_action)();
			OBJECT CMT_CONSOLE	*(*mouse_move)();
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

		const BOOLEAN		active;
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
			const BOOLEAN		visible;
		} cursor;
	} get;

							(*free)();
	BOOLEAN					highlighter;

	/**/ /* [v] PRIVATE ***************************************************** */
	/**/
	/**/ T_CONSOLE_OUT_HANDLE	_OUT_HANDLE;
	/**/ T_CONSOLE_IN_HANDLE	_IN_HANDLE;
	/**/ unsigned long			_IN_MODE;
	/**/ PTR					_PUSH_DATA;
	/**/ unsigned long			_PUSH_SIZE;
	/**/ unsigned long			_PUSH_CAPACITY;
	/**/ unsigned int			_PUSH_DEPTH;
	/**/ PTR					_SCRATCH_DATA;
	/**/ unsigned long			_SCRATCH_SIZE;
	/**/
	/**/ /* [^] PRIVATE ***************************************************** */
};
#endif /* !KNR_STYLE */

/* *************************** [v] MVS LINKER [v] *************************** */
/* **** MVS LINKER DOES NOT SUPPORT EXTERNAL NAMES LARGER THAN 8 BYTES!! **** */
#ifdef __MVS__ /* IBM Z/OS XL C/C++ */
#define CMT_CONSOLE CMTCOCOP
#define CMT_CONSOLE_C_OOP__FREE MTCOPFRE
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
extern OBJECT CMT_CONSOLE	console;

#ifndef KNR_STYLE /* STANDARD C */
extern void					CMT_CONSOLE(void);
extern void					CMT_CONSOLE_C_OOP__FREE(void);
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
extern						CMT_CONSOLE_C_OOP__FREE();
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

#include "C_OOP/CMT_CONSOLE.INL"

#include "C_OOP/FREE.INL"
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
	LOCALMACRO__OBJECT_SENDER (console);\
	CMT_CONSOLE();
#define LOCALDESTRUCTOR__CONSOLE console.cursor.default_color()->free();

/* .,,,,. #==========================================================# .,,,,. */
/*  \\//  |                 LINKABLE MEMBER CREATION                 |  \\//  */
/*   \/   #==========================================================#   \/   */

#undef LOCALLINKER__CONSOLE
#define LOCALLINKER__CONSOLE \
	OBJECT CMT_CONSOLE	console; \
	LOCALFUNCTION__CMT_CONSOLE_C_OOP \
	LOCALFUNCTION__CMT_CONSOLE_C_OOP__FREE \
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

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
