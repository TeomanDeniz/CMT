#ifndef CONSOLE_HPP
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_HPP */

#ifndef SEAL_CMT_CONSOLE_CPP
#define SEAL_CMT_CONSOLE_CPP

/* **************************** [v] INCLUDES [v] **************************** */
#include <new>
/******* """""
 * void	*operator new(...);
 */
#include <cstddef>
/******* """""""""
 * #define offsetof
 */
/* **************************** [^] INCLUDES [^] **************************** */

/******************************************************************************\
|* THE SHARED CONTENT MACROS WRITE INTO "const" MEMBERS OF A DIFFERENT TYPE  *|
|* (FOR EXAMPLE A "const int" THROUGH AN "unsigned int *"). const_cast ALONE  *|
|* CAN NOT CHANGE THE TYPE, SO REINTERPRET FIRST AND DROP THE const AFTER.    *|
\******************************************************************************/
#undef OBJECT__INITIALIZE
#define OBJECT__INITIALIZE(VARIABLE, TYPE) \
	(*const_cast<TYPE *>(reinterpret_cast<const TYPE *>(&(VARIABLE))))

namespace cmt
{
	class console;

	class CONSOLE
	{
		friend class console;

	public:
		CONSOLE(void);
		~CONSOLE(void);

		CONSOLE	*X(int);
		CONSOLE	*Y(int);
		CONSOLE	*XY(int, int);
		CONSOLE	*WIDTH(unsigned int);
		CONSOLE	*HEIGHT(unsigned int);
		CONSOLE	*TITLE(const char *);
		CONSOLE	*COLOR(unsigned int);
		CONSOLE	*DEFAULT_COLOR(void);
		CONSOLE	*CLEAR(void);
		PTR		EXPORT(void);
		CONSOLE	*IMPORT(PTR);
		CONSOLE	*PUSH(void);
		CONSOLE	*POP(void);
		CONSOLE	*LOG(const char *);
		CONSOLE	*ERROR(const char *);
		CONSOLE	*ERROR_AT(const char *, const char *, unsigned int);
		CONSOLE	*WARNING(const char *);
		CONSOLE	*WARNING_AT(const char *, const char *, unsigned int);
		CONSOLE	*PRINT(const char *, VA_ARGS);

		struct PUT
		{
			CONSOLE	*STRING(const char *, unsigned int, unsigned int);
			CONSOLE	*LINE(
				char,
				unsigned int,
				unsigned int,
				unsigned int,
				unsigned int
			);
			CONSOLE	*CURVE(
				char,
				unsigned int,
				unsigned int,
				unsigned int,
				unsigned int,
				float,
				float
			);
			CONSOLE	*FRAME(
				char,
				unsigned int,
				unsigned int,
				unsigned int,
				unsigned int
			);
			CONSOLE	*FRAME_RADIUS(
				char,
				unsigned int,
				unsigned int,
				unsigned int,
				unsigned int,
				unsigned int
			);
			CONSOLE	*RECTANGLE(
				char,
				unsigned int,
				unsigned int,
				unsigned int,
				unsigned int
			);
			CONSOLE	*RECTANGLE_RADIUS(
				char,
				unsigned int,
				unsigned int,
				unsigned int,
				unsigned int,
				unsigned int
			);
			CONSOLE	*CIRCLE(
				char,
				unsigned int,
				unsigned int,
				unsigned int,
				unsigned int
			);
			CONSOLE	*ELLIPSE(
				char,
				unsigned int,
				unsigned int,
				unsigned int,
				unsigned int
			);

			struct COLORED
			{
				CONSOLE	*STRING(
					const char *,
					unsigned int,
					unsigned int,
					unsigned int
				);
				CONSOLE	*LINE(
					char,
					unsigned int,
					unsigned int,
					unsigned int,
					unsigned int,
					unsigned int
				);
				CONSOLE	*CURVE(
					char,
					unsigned int,
					unsigned int,
					unsigned int,
					unsigned int,
					unsigned int,
					float,
					float
				);
				CONSOLE	*FRAME(
					char,
					unsigned int,
					unsigned int,
					unsigned int,
					unsigned int,
					unsigned int
				);
				CONSOLE	*FRAME_RADIUS(
					char,
					unsigned int,
					unsigned int,
					unsigned int,
					unsigned int,
					unsigned int,
					unsigned int
				);
				CONSOLE	*RECTANGLE(
					char,
					unsigned int,
					unsigned int,
					unsigned int,
					unsigned int,
					unsigned int
				);
				CONSOLE	*RECTANGLE_RADIUS(
					char,
					unsigned int,
					unsigned int,
					unsigned int,
					unsigned int,
					unsigned int,
					unsigned int
				);
				CONSOLE	*CIRCLE(
					char,
					unsigned int,
					unsigned int,
					unsigned int,
					unsigned int,
					unsigned int
				);
				CONSOLE	*ELLIPSE(
					char,
					unsigned int,
					unsigned int,
					unsigned int,
					unsigned int,
					unsigned int
				);
			} COLORED;
		} PUT;

		struct CURSOR
		{
			CONSOLE	*COLOR(unsigned int);
			CONSOLE	*DEFAULT_COLOR(void);
			CONSOLE	*X(unsigned int);
			CONSOLE	*Y(unsigned int);
			CONSOLE	*XY(unsigned int, unsigned int);
			CONSOLE	*MOVE_X(int);
			CONSOLE	*MOVE_Y(int);
			CONSOLE	*MOVE_XY(int, int);
			CONSOLE	*SHOW(BOOLEAN);
			CONSOLE	*SIZE(unsigned long);
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

		struct INPUT
		{
			struct WAIT
			{
				CONSOLE	*ANY(void);
				CONSOLE	*KEY(void);
				CONSOLE	*MOUSE(void);
				CONSOLE	*MOUSE_ACTION(void);
				CONSOLE	*MOUSE_MOVE(void);
			} WAIT;

			struct GET
			{
				const unsigned int	KEY;
				const unsigned int	MOUSE;
				const unsigned int	MOUSE_X;
				const unsigned int	MOUSE_Y;
			} GET;
		} INPUT;

		struct GET
		{
			char	*LINE(
				unsigned int,
				unsigned int,
				unsigned int,
				unsigned int
			);
			char	**AREA(
				unsigned int,
				unsigned int,
				unsigned int,
				unsigned int
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

			struct CURSOR
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

	private:
		CONSOLE(const CONSOLE &) = delete; /* OWNS HANDLES AND BUFFERS */
		CONSOLE	&operator=(const CONSOLE &) = delete;

		LOCALMACRO__CMT_CONSOLE__PRIVATE_VARIABLES
	};

	class console
	{
	public:
		console(void);
		~console(void);

		console	*x(int);
		console	*y(int);
		console	*xy(int, int);
		console	*width(unsigned int);
		console	*height(unsigned int);
		console	*title(const char *);
		console	*color(unsigned int);
		console	*default_color(void);
		console	*clear(void);
		ptr		export_(void);
		console	*import(ptr);
		console	*push(void);
		console	*pop(void);
		console	*log(const char *);
		console	*error(const char *);
		console	*error_at(const char *, const char *, unsigned int);
		console	*warning(const char *);
		console	*warning_at(const char *, const char *, unsigned int);
		console	*print(const char *, va_args);

		struct put
		{
			console	*string(const char *, unsigned int, unsigned int);
			console	*line(
				char,
				unsigned int,
				unsigned int,
				unsigned int,
				unsigned int
			);
			console	*curve(
				char,
				unsigned int,
				unsigned int,
				unsigned int,
				unsigned int,
				float,
				float
			);
			console	*frame(
				char,
				unsigned int,
				unsigned int,
				unsigned int,
				unsigned int
			);
			console	*frame_radius(
				char,
				unsigned int,
				unsigned int,
				unsigned int,
				unsigned int,
				unsigned int
			);
			console	*rectangle(
				char,
				unsigned int,
				unsigned int,
				unsigned int,
				unsigned int
			);
			console	*rectangle_radius(
				char,
				unsigned int,
				unsigned int,
				unsigned int,
				unsigned int,
				unsigned int
			);
			console	*circle(
				char,
				unsigned int,
				unsigned int,
				unsigned int,
				unsigned int
			);
			console	*ellipse(
				char,
				unsigned int,
				unsigned int,
				unsigned int,
				unsigned int
			);

			struct colored
			{
				console	*string(
					const char *,
					unsigned int,
					unsigned int,
					unsigned int
				);
				console	*line(
					char,
					unsigned int,
					unsigned int,
					unsigned int,
					unsigned int,
					unsigned int
				);
				console	*curve(
					char,
					unsigned int,
					unsigned int,
					unsigned int,
					unsigned int,
					unsigned int,
					float,
					float
				);
				console	*frame(
					char,
					unsigned int,
					unsigned int,
					unsigned int,
					unsigned int,
					unsigned int
				);
				console	*frame_radius(
					char,
					unsigned int,
					unsigned int,
					unsigned int,
					unsigned int,
					unsigned int,
					unsigned int
				);
				console	*rectangle(
					char,
					unsigned int,
					unsigned int,
					unsigned int,
					unsigned int,
					unsigned int
				);
				console	*rectangle_radius(
					char,
					unsigned int,
					unsigned int,
					unsigned int,
					unsigned int,
					unsigned int,
					unsigned int
				);
				console	*circle(
					char,
					unsigned int,
					unsigned int,
					unsigned int,
					unsigned int,
					unsigned int
				);
				console	*ellipse(
					char,
					unsigned int,
					unsigned int,
					unsigned int,
					unsigned int,
					unsigned int
				);
			} colored;
		} put;

		struct cursor
		{
			console	*color(unsigned int);
			console	*default_color(void);
			console	*x(unsigned int);
			console	*y(unsigned int);
			console	*xy(unsigned int, unsigned int);
			console	*move_x(int);
			console	*move_y(int);
			console	*move_xy(int, int);
			console	*show(boolean);
			console	*size(unsigned long);
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

		struct input
		{
			struct wait
			{
				console	*any(void);
				console	*key(void);
				console	*mouse(void);
				console	*mouse_action(void);
				console	*mouse_move(void);
			} wait;

			struct get
			{
				const unsigned int	key;
				const unsigned int	mouse;
				const unsigned int	mouse_x;
				const unsigned int	mouse_y;
			} get;
		} input;

		struct get
		{
			char	*line(
				unsigned int,
				unsigned int,
				unsigned int,
				unsigned int
			);
			char	**area(
				unsigned int,
				unsigned int,
				unsigned int,
				unsigned int
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

			struct cursor
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

	private:
		console(const console &) = delete; /* OWNS HANDLES AND BUFFERS */
		console	&operator=(const console &) = delete;

		LOCALMACRO__CMT_CONSOLE__PRIVATE_VARIABLES
	};

	/**************************************************************************\
	|* A MEMBER FUNCTION OF A NESTED STRUCT (PUT, CURSOR, ...) GETS A "this"  *|
	|* THAT POINTS AT THAT STRUCT, NOT AT THE CONSOLE. OWNER() WALKS BACK TO  *|
	|* THE CONSOLE THAT CONTAINS IT.                                          *|
	\**************************************************************************/
	namespace LOCALNAMESPACE__CONSOLE
	{

#if (defined(__GNUC__) || defined(__clang__))
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Winvalid-offsetof"
#endif /* __GNUC__ || __clang__ */
		inline CONSOLE	*OWNER(struct CONSOLE::PUT *MEMBER)
		{
			return (
				reinterpret_cast<CONSOLE *>(
					reinterpret_cast<char *>(MEMBER) - (offsetof(CONSOLE, PUT))
				)
			);
		}
		inline CONSOLE	*OWNER(struct CONSOLE::PUT::COLORED *MEMBER)
		{
			return (
				reinterpret_cast<CONSOLE *>(
					reinterpret_cast<char *>(MEMBER) - (offsetof(CONSOLE, PUT) +
					offsetof(struct CONSOLE::PUT, COLORED))
				)
			);
		}
		inline CONSOLE	*OWNER(struct CONSOLE::CURSOR *MEMBER)
		{
			return (
				reinterpret_cast<CONSOLE *>(
					reinterpret_cast<char *>(MEMBER) -
					(offsetof(CONSOLE, CURSOR))
				)
			);
		}
		inline CONSOLE	*OWNER(struct CONSOLE::INPUT::WAIT *MEMBER)
		{
			return (
				reinterpret_cast<CONSOLE *>(
					reinterpret_cast<char *>(MEMBER) -
					(
						offsetof(CONSOLE, INPUT) +
						offsetof(struct CONSOLE::INPUT, WAIT)
					)
				)
			);
		}
		inline CONSOLE	*OWNER(struct CONSOLE::GET *MEMBER)
		{
			return (
				reinterpret_cast<CONSOLE *>(
					reinterpret_cast<char *>(MEMBER) - (offsetof(CONSOLE, GET))
				)
			);
		}
		inline console	*OWNER(struct console::put *MEMBER)
		{
			return (
				reinterpret_cast<console *>(
					reinterpret_cast<char *>(MEMBER) - (offsetof(console, put))
				)
			);
		}
		inline console	*OWNER(struct console::put::colored *MEMBER)
		{
			return (
				reinterpret_cast<console *>(
					reinterpret_cast<char *>(MEMBER) - (offsetof(console, put) +
					offsetof(struct console::put, colored))
				)
			);
		}
		inline console	*OWNER(struct console::cursor *MEMBER)
		{
			return (
				reinterpret_cast<console *>(
					reinterpret_cast<char *>(MEMBER) -
					(offsetof(console, cursor))
				)
			);
		}
		inline console	*OWNER(struct console::input::wait *MEMBER)
		{
			return (
				reinterpret_cast<console *>(
					reinterpret_cast<char *>(MEMBER) - (
						offsetof(console, input) +
						offsetof(struct console::input, wait)
					)
				)
			);
		}
		inline console	*OWNER(struct console::get *MEMBER)
		{
			return (
				reinterpret_cast<console *>(
					reinterpret_cast<char *>(MEMBER) - (offsetof(console, get))
				)
			);
		}

#if (defined(__GNUC__) || defined(__clang__))
#pragma GCC diagnostic pop
#endif /* __GNUC__ || __clang__ */

		/* LETS THE SHARED "print" CONTENT RUN ON A cmt::console */
		class VIEW
		{
		public:
			explicit VIEW(console *SELF) :
				TARGET(reinterpret_cast<CONSOLE *>(SELF)) {}

			CONSOLE	*operator->(void) const { return (TARGET); }
			operator console *(void) const
			{
				return (reinterpret_cast<console *>(TARGET));
			}

		private:
			CONSOLE	*TARGET;
		};
	}
}

#define LOCALMACRO__CMT_CONSOLE_CPP__OWNER(POINTER) \
	cmt::LOCALNAMESPACE__CONSOLE::OWNER(POINTER)
#define LOCALMACRO__CMT_CONSOLE_CPP__UPPER(POINTER) \
	reinterpret_cast<cmt::CONSOLE *>(POINTER)

/* cmt::console IS A LOWER CASE VIEW OF THE SAME BYTES AS cmt::CONSOLE */
static_assert(
	sizeof(cmt::CONSOLE) == sizeof(cmt::console),
	"CMT CONSOLE: cmt::CONSOLE AND cmt::console LAYOUTS DIVERGED (SIZE)"
);

#if (defined(__GNUC__) || defined(__clang__))
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Winvalid-offsetof"
#endif /* __GNUC__ || __clang__ */

static_assert(
	offsetof(cmt::CONSOLE, EVENT) == offsetof(cmt::console, event),
	"CMT CONSOLE: cmt::CONSOLE AND cmt::console LAYOUTS DIVERGED (EVENT)"
);
static_assert(
	offsetof(cmt::CONSOLE, INPUT) == offsetof(cmt::console, input),
	"CMT CONSOLE: cmt::CONSOLE AND cmt::console LAYOUTS DIVERGED (INPUT)"
);
static_assert(
	offsetof(cmt::CONSOLE, GET) == offsetof(cmt::console, get),
	"CMT CONSOLE: cmt::CONSOLE AND cmt::console LAYOUTS DIVERGED (GET)"
);
static_assert(
	offsetof(cmt::CONSOLE, HIGHLIGHTER) == offsetof(cmt::console, highlighter),
	"CMT CONSOLE: cmt::CONSOLE AND cmt::console LAYOUTS DIVERGED (HIGHLIGHTER)"
);

#if (defined(__GNUC__) || defined(__clang__))
#pragma GCC diagnostic pop
#endif /* __GNUC__ || __clang__ */

/* **************************** [v] EXTERNS [v] ***************************** */
extern cmt::CONSOLE	&CONSOLE;
extern cmt::console	&console;
/* **************************** [^] EXTERNS [^] ***************************** */

#include "CPP/__CONSTRUCTOR__.INL"
#include "CPP/__DESTRUCTOR__.INL"
#include "CPP/PRINT.INL"
#include "CPP/X.INL"
#include "CPP/Y.INL"
#include "CPP/XY.INL"
#include "CPP/WIDTH.INL"
#include "CPP/HEIGHT.INL"
#include "CPP/TITLE.INL"
#include "CPP/COLOR.INL"
#include "CPP/DEFAULT_COLOR.INL"
#include "CPP/CLEAR.INL"
#include "CPP/EXPORT.INL"
#include "CPP/IMPORT.INL"
#include "CPP/PUSH.INL"
#include "CPP/POP.INL"
#include "CPP/LOG.INL"
#include "CPP/ERROR.INL"
#include "CPP/ERROR_AT.INL"
#include "CPP/WARNING.INL"
#include "CPP/WARNING_AT.INL"
#include "CPP/PUT/STRING.INL"
#include "CPP/PUT/LINE.INL"
#include "CPP/PUT/CURVE.INL"
#include "CPP/PUT/FRAME.INL"
#include "CPP/PUT/FRAME_RADIUS.INL"
#include "CPP/PUT/RECTANGLE.INL"
#include "CPP/PUT/RECTANGLE_RADIUS.INL"
#include "CPP/PUT/CIRCLE.INL"
#include "CPP/PUT/ELLIPSE.INL"
#include "CPP/PUT/COLORED/STRING.INL"
#include "CPP/PUT/COLORED/LINE.INL"
#include "CPP/PUT/COLORED/CURVE.INL"
#include "CPP/PUT/COLORED/FRAME.INL"
#include "CPP/PUT/COLORED/FRAME_RADIUS.INL"
#include "CPP/PUT/COLORED/RECTANGLE.INL"
#include "CPP/PUT/COLORED/RECTANGLE_RADIUS.INL"
#include "CPP/PUT/COLORED/CIRCLE.INL"
#include "CPP/PUT/COLORED/ELLIPSE.INL"
#include "CPP/CURSOR/COLOR.INL"
#include "CPP/CURSOR/DEFAULT_COLOR.INL"
#include "CPP/CURSOR/X.INL"
#include "CPP/CURSOR/Y.INL"
#include "CPP/CURSOR/XY.INL"
#include "CPP/CURSOR/MOVE_X.INL"
#include "CPP/CURSOR/MOVE_Y.INL"
#include "CPP/CURSOR/MOVE_XY.INL"
#include "CPP/CURSOR/SHOW.INL"
#include "CPP/CURSOR/SIZE.INL"
#include "CPP/INPUT/WAIT/ANY.INL"
#include "CPP/INPUT/WAIT/KEY.INL"
#include "CPP/INPUT/WAIT/MOUSE.INL"
#include "CPP/INPUT/WAIT/MOUSE_ACTION.INL"
#include "CPP/INPUT/WAIT/MOUSE_MOVE.INL"
#include "CPP/GET/LINE.INL"
#include "CPP/GET/AREA.INL"

#define LOCALCONSTRUCTOR__CONSOLE \
	new (static_cast<void *>(CONSOLE_STORAGE)) cmt::CONSOLE();
#define LOCALDESTRUCTOR__CONSOLE \
	CONSOLE.CURSOR.DEFAULT_COLOR()->~CONSOLE();

/* .,,,,. #==========================================================# .,,,,. */
/*  \\//  |                 LINKABLE MEMBER CREATION                 |  \\//  */
/*   \/   #==========================================================#   \/   */

#undef LOCALLINKER__CONSOLE_OOP
#define LOCALLINKER__CONSOLE_OOP \
	alignas(cmt::CONSOLE) unsigned char\
		CONSOLE_STORAGE[sizeof(cmt::CONSOLE)];\
	cmt::CONSOLE	&CONSOLE = \
		*reinterpret_cast<cmt::CONSOLE *>(CONSOLE_STORAGE);\
	cmt::console	&console = \
		*reinterpret_cast<cmt::console *>(CONSOLE_STORAGE);\
	LOCALFUNCTION__CMT_CONSOLE_CPP__CONSTRUCTOR \
	LOCALFUNCTION__CMT_CONSOLE_CPP__DESTRUCTOR \
	LOCALFUNCTION__CMT_CONSOLE_CPP__PRINT \
	LOCALFUNCTION__CMT_CONSOLE_CPP__X \
	LOCALFUNCTION__CMT_CONSOLE_CPP__Y \
	LOCALFUNCTION__CMT_CONSOLE_CPP__XY \
	LOCALFUNCTION__CMT_CONSOLE_CPP__WIDTH \
	LOCALFUNCTION__CMT_CONSOLE_CPP__HEIGHT \
	LOCALFUNCTION__CMT_CONSOLE_CPP__TITLE \
	LOCALFUNCTION__CMT_CONSOLE_CPP__COLOR \
	LOCALFUNCTION__CMT_CONSOLE_CPP__DEFAULT_COLOR \
	LOCALFUNCTION__CMT_CONSOLE_CPP__CLEAR \
	LOCALFUNCTION__CMT_CONSOLE_CPP__EXPORT \
	LOCALFUNCTION__CMT_CONSOLE_CPP__IMPORT \
	LOCALFUNCTION__CMT_CONSOLE_CPP__PUSH \
	LOCALFUNCTION__CMT_CONSOLE_CPP__POP \
	LOCALFUNCTION__CMT_CONSOLE_CPP__LOG \
	LOCALFUNCTION__CMT_CONSOLE_CPP__ERROR \
	LOCALFUNCTION__CMT_CONSOLE_CPP__ERROR_AT \
	LOCALFUNCTION__CMT_CONSOLE_CPP__WARNING \
	LOCALFUNCTION__CMT_CONSOLE_CPP__WARNING_AT \
	LOCALFUNCTION__CMT_CONSOLE_CPP__PUT_STRING \
	LOCALFUNCTION__CMT_CONSOLE_CPP__PUT_LINE \
	LOCALFUNCTION__CMT_CONSOLE_CPP__PUT_CURVE \
	LOCALFUNCTION__CMT_CONSOLE_CPP__PUT_FRAME \
	LOCALFUNCTION__CMT_CONSOLE_CPP__PUT_FRAME_RADIUS \
	LOCALFUNCTION__CMT_CONSOLE_CPP__PUT_RECTANGLE \
	LOCALFUNCTION__CMT_CONSOLE_CPP__PUT_RECTANGLE_RADIUS \
	LOCALFUNCTION__CMT_CONSOLE_CPP__PUT_CIRCLE \
	LOCALFUNCTION__CMT_CONSOLE_CPP__PUT_ELLIPSE \
	LOCALFUNCTION__CMT_CONSOLE_CPP__PUT_COLORED_STRING \
	LOCALFUNCTION__CMT_CONSOLE_CPP__PUT_COLORED_LINE \
	LOCALFUNCTION__CMT_CONSOLE_CPP__PUT_COLORED_CURVE \
	LOCALFUNCTION__CMT_CONSOLE_CPP__PUT_COLORED_FRAME \
	LOCALFUNCTION__CMT_CONSOLE_CPP__PUT_COLORED_FRAME_RADIUS \
	LOCALFUNCTION__CMT_CONSOLE_CPP__PUT_COLORED_RECTANGLE \
	LOCALFUNCTION__CMT_CONSOLE_CPP__PUT_COLORED_RECTANGLE_RADIUS \
	LOCALFUNCTION__CMT_CONSOLE_CPP__PUT_COLORED_CIRCLE \
	LOCALFUNCTION__CMT_CONSOLE_CPP__PUT_COLORED_ELLIPSE \
	LOCALFUNCTION__CMT_CONSOLE_CPP__CURSOR_COLOR \
	LOCALFUNCTION__CMT_CONSOLE_CPP__CURSOR_DEFAULT_COLOR \
	LOCALFUNCTION__CMT_CONSOLE_CPP__CURSOR_X \
	LOCALFUNCTION__CMT_CONSOLE_CPP__CURSOR_Y \
	LOCALFUNCTION__CMT_CONSOLE_CPP__CURSOR_XY \
	LOCALFUNCTION__CMT_CONSOLE_CPP__CURSOR_MOVE_X \
	LOCALFUNCTION__CMT_CONSOLE_CPP__CURSOR_MOVE_Y \
	LOCALFUNCTION__CMT_CONSOLE_CPP__CURSOR_MOVE_XY \
	LOCALFUNCTION__CMT_CONSOLE_CPP__CURSOR_SHOW \
	LOCALFUNCTION__CMT_CONSOLE_CPP__CURSOR_SIZE \
	LOCALFUNCTION__CMT_CONSOLE_CPP__INPUT_WAIT_ANY \
	LOCALFUNCTION__CMT_CONSOLE_CPP__INPUT_WAIT_KEY \
	LOCALFUNCTION__CMT_CONSOLE_CPP__INPUT_WAIT_MOUSE \
	LOCALFUNCTION__CMT_CONSOLE_CPP__INPUT_WAIT_MOUSE_ACTION \
	LOCALFUNCTION__CMT_CONSOLE_CPP__INPUT_WAIT_MOUSE_MOVE \
	LOCALFUNCTION__CMT_CONSOLE_CPP__GET_LINE \
	LOCALFUNCTION__CMT_CONSOLE_CPP__GET_AREA

/*   /\   #==========================================================#   /\   */
/*  //\\  |                 LINKABLE MEMBER CREATION                 |  //\\  */
/* '""""' #==========================================================# '""""' */

#endif /* !SEAL_CMT_CONSOLE_CPP */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
