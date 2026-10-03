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
#include "../CMT/CPP_CLASSES.INL"
/******* """"""""""""""""""""""""
 * #define CMT__OOP_CPP__...
 */
#include "API.INL"
/******* """""""""
 * #define LOCALTABLE__CMT_CONSOLE__...
 */
/* **************************** [^] INCLUDES [^] **************************** */

/******************************************************************************\
|* THE SHARED CONTENT MACROS WRITE INTO VALUES OF A DIFFERENT TYPE (FOR       *|
|* EXAMPLE AN "int" THROUGH AN "unsigned int *"). const_cast ALONE CAN NOT    *|
|* CHANGE THE TYPE, SO REINTERPRET FIRST AND DROP THE const AFTER. THE        *|
|* STORAGE BEHIND EVERY READ-ONLY VALUE IS NOT const, SO THE WRITE IS LEGAL.  *|
\******************************************************************************/
#undef OBJECT__INITIALIZE
#define OBJECT__INITIALIZE(VARIABLE, TYPE) \
	(*const_cast<TYPE *>(reinterpret_cast<const TYPE *>(&(VARIABLE))))

/* ************************ [v] TABLE ADAPTERS [v] ************************** */
#define LOCALMACRO__CMT_CONSOLE_CPP__DECLARE_METHOD(\
	UPPER, \
	LOWER, \
	KEY, \
	PARAMETERS, \
	ARGUMENTS, \
	PROLOGUE\
) \
	CMT__OOP_CPP__DECLARE_METHOD(\
		cmt::CONSOLE, UPPER, LOWER, PARAMETERS, ARGUMENTS\
	)
#define LOCALMACRO__CMT_CONSOLE_CPP__DECLARE_QUERY(\
	TYPE, \
	UPPER, \
	LOWER, \
	KEY, \
	PARAMETERS, \
	ARGUMENTS, \
	PROLOGUE\
) \
	CMT__OOP_CPP__DECLARE_QUERY(\
		TYPE, UPPER, LOWER, PARAMETERS, ARGUMENTS\
	)
/* ************************ [^] TABLE ADAPTERS [^] ************************** */

namespace cmt
{
	class CONSOLE
	{
		CMT__OOP_CPP__ROOT_OWNER(CONSOLE)

	public:
		/* ****************** [v] console.put.colored [v] ******************* */
		class T_PUT_COLORED
		{
			CMT__OOP_CPP__GROUP_OWNER(CONSOLE)

			explicit T_PUT_COLORED(CONSOLE *OWNER) :
				CMT__VALUE__OWNER(OWNER) {}

			LOCALTABLE__CMT_CONSOLE__PUT_COLORED(
				LOCALMACRO__CMT_CONSOLE_CPP__DECLARE_METHOD,
				LOCALMACRO__CMT_CONSOLE_CPP__DECLARE_QUERY
			)
		};

		/* ********************** [v] console.put [v] *********************** */
		class T_PUT
		{
			CMT__OOP_CPP__GROUP_OWNER(CONSOLE)

			explicit T_PUT(CONSOLE *OWNER) :
				CMT__VALUE__OWNER(OWNER),
				COLORED(OWNER),
				colored(COLORED) {}

			LOCALTABLE__CMT_CONSOLE__PUT(
				LOCALMACRO__CMT_CONSOLE_CPP__DECLARE_METHOD,
				LOCALMACRO__CMT_CONSOLE_CPP__DECLARE_QUERY
			)

			T_PUT_COLORED	COLORED;
			T_PUT_COLORED	&colored;
		};

		/* ******************** [v] console.cursor [v] ********************** */
		class T_CURSOR
		{
			CMT__OOP_CPP__GROUP_OWNER(CONSOLE)

			explicit T_CURSOR(CONSOLE *OWNER) :
				CMT__VALUE__OWNER(OWNER) {}

			LOCALTABLE__CMT_CONSOLE__CURSOR(
				LOCALMACRO__CMT_CONSOLE_CPP__DECLARE_METHOD,
				LOCALMACRO__CMT_CONSOLE_CPP__DECLARE_QUERY
			)
		};

		/* ********************* [v] console.event [v] ********************** */
		class T_EVENT : private cmt::CMT__OOP_START
		{
		public:
			T_EVENT(void) :
				CMT__OOP_START()
				LOCALTABLE__CMT_CONSOLE__EVENT_VALUES(
					CMT__OOP_CPP__WRITABLE_INIT_STORE
				)
				LOCALTABLE__CMT_CONSOLE__EVENT_VALUES(
					CMT__OOP_CPP__WRITABLE_INIT_EXPOSE
				) {}

			LOCALTABLE__CMT_CONSOLE__EVENT_VALUES(
				CMT__OOP_CPP__WRITABLE_STORE
			)
			LOCALTABLE__CMT_CONSOLE__EVENT_VALUES(
				CMT__OOP_CPP__WRITABLE_EXPOSE
			)
		};

		/* ***************** [v] console.input.wait [v] ********************* */
		class T_INPUT_WAIT
		{
			CMT__OOP_CPP__GROUP_OWNER(CONSOLE)

			explicit T_INPUT_WAIT(CONSOLE *OWNER) :
				CMT__VALUE__OWNER(OWNER) {}

			LOCALTABLE__CMT_CONSOLE__INPUT_WAIT(
				LOCALMACRO__CMT_CONSOLE_CPP__DECLARE_METHOD,
				LOCALMACRO__CMT_CONSOLE_CPP__DECLARE_QUERY
			)
		};

		/* ****************** [v] console.input.get [v] ********************* */
		class T_INPUT_GET : private cmt::CMT__OOP_START
		{
		public:
			T_INPUT_GET(void) :
				CMT__OOP_START()
				LOCALTABLE__CMT_CONSOLE__INPUT_GET_VALUES(
					CMT__OOP_CPP__READONLY_INIT_STORE
				)
				LOCALTABLE__CMT_CONSOLE__INPUT_GET_VALUES(
					CMT__OOP_CPP__READONLY_INIT_EXPOSE
				) {}

		private:
			LOCALTABLE__CMT_CONSOLE__INPUT_GET_VALUES(
				CMT__OOP_CPP__READONLY_STORE
			)

		public:
			LOCALTABLE__CMT_CONSOLE__INPUT_GET_VALUES(
				CMT__OOP_CPP__READONLY_EXPOSE
			)
		};

		/* ********************* [v] console.input [v] ********************** */
		class T_INPUT
		{
		public:
			explicit T_INPUT(CONSOLE *OWNER) :
				WAIT(OWNER),
				wait(WAIT),
				GET(),
				get(GET) {}

			T_INPUT_WAIT	WAIT;
			T_INPUT_WAIT	&wait;
			T_INPUT_GET		GET;
			T_INPUT_GET		&get;
		};

		/* ****************** [v] console.get.cursor [v] ******************** */
		class T_GET_CURSOR : private cmt::CMT__OOP_START
		{
		public:
			T_GET_CURSOR(void) :
				CMT__OOP_START()
				LOCALTABLE__CMT_CONSOLE__GET_CURSOR_VALUES(
					CMT__OOP_CPP__READONLY_INIT_STORE
				)
				LOCALTABLE__CMT_CONSOLE__GET_CURSOR_VALUES(
					CMT__OOP_CPP__READONLY_INIT_EXPOSE
				) {}

		private:
			LOCALTABLE__CMT_CONSOLE__GET_CURSOR_VALUES(
				CMT__OOP_CPP__READONLY_STORE
			)

		public:
			LOCALTABLE__CMT_CONSOLE__GET_CURSOR_VALUES(
				CMT__OOP_CPP__READONLY_EXPOSE
			)
		};

		/* ********************** [v] console.get [v] *********************** */
		class T_GET
		{
			CMT__OOP_CPP__GROUP_OWNER(CONSOLE)

			explicit T_GET(CONSOLE *OWNER) :
				CMT__VALUE__OWNER(OWNER)
				LOCALTABLE__CMT_CONSOLE__GET_VALUES(
					CMT__OOP_CPP__READONLY_INIT_STORE
				)
				LOCALTABLE__CMT_CONSOLE__GET_VALUES(
					CMT__OOP_CPP__READONLY_INIT_EXPOSE
				),
				CURSOR(),
				cursor(CURSOR) {}

			LOCALTABLE__CMT_CONSOLE__GET(
				LOCALMACRO__CMT_CONSOLE_CPP__DECLARE_METHOD,
				LOCALMACRO__CMT_CONSOLE_CPP__DECLARE_QUERY
			)

		private:
			LOCALTABLE__CMT_CONSOLE__GET_VALUES(
				CMT__OOP_CPP__READONLY_STORE
			)

		public:
			LOCALTABLE__CMT_CONSOLE__GET_VALUES(
				CMT__OOP_CPP__READONLY_EXPOSE
			)

			T_GET_CURSOR	CURSOR;
			T_GET_CURSOR	&cursor;
		};

		/* ************************ [v] console [v] ************************* */
		CONSOLE(void);
		~CONSOLE(void);

		LOCALTABLE__CMT_CONSOLE__ROOT(
			LOCALMACRO__CMT_CONSOLE_CPP__DECLARE_METHOD,
			LOCALMACRO__CMT_CONSOLE_CPP__DECLARE_QUERY
		)

		/* VARIADIC: NOT FORWARDABLE, SO BOTH SPELLINGS RUN THE CONTENT */
		CONSOLE	*PRINT(const char *, VA_ARGS);
		CONSOLE	*print(const char *, VA_ARGS);

		T_PUT		PUT;
		T_PUT		&put;
		T_CURSOR	CURSOR;
		T_CURSOR	&cursor;
		T_EVENT		EVENT;
		T_EVENT		&event;
		T_INPUT		INPUT;
		T_INPUT		&input;
		T_GET		GET;
		T_GET		&get;

		LOCALTABLE__CMT_CONSOLE__ROOT_VALUES(
			CMT__OOP_CPP__WRITABLE_STORE
		)
		LOCALTABLE__CMT_CONSOLE__ROOT_VALUES(
			CMT__OOP_CPP__WRITABLE_EXPOSE
		)

	private:
		CONSOLE(const CONSOLE &); /* OWNS HANDLES AND BUFFERS: NOT COPYABLE */
		CONSOLE	&operator=(const CONSOLE &);

		/* PRE-2003 COMPILERS DO NOT LET NESTED CLASSES SEE PRIVATE MEMBERS */
		friend class T_PUT;
		friend class T_PUT_COLORED;
		friend class T_CURSOR;
		friend class T_INPUT_WAIT;
		friend class T_GET;

		LOCALMACRO__CMT_CONSOLE__PRIVATE_VARIABLES
	};

	typedef CONSOLE	console; /* cmt::console NAMES THE SAME CLASS */
}

/* **************************** [v] EXTERNS [v] ***************************** */
extern cmt::CONSOLE	&CONSOLE;
extern cmt::CONSOLE	&console;
/* **************************** [^] EXTERNS [^] ***************************** */

/* *********************** [v] MEMBER DEFINITIONS [v] *********************** */
#define LOCALMACRO__CMT_CONSOLE_CPP__DEFINE(\
	SCOPE, \
	UPPER, \
	KEY, \
	PARAMETERS, \
	PROLOGUE\
) \
	CMT__OOP_CPP__DEFINE_METHOD(\
		cmt::CONSOLE,\
		SCOPE,\
		UPPER,\
		LOCALMACRO__CMT_CONSOLE__##KEY##_CONTENT,\
		PARAMETERS,\
		PROLOGUE\
	)
#define LOCALMACRO__CMT_CONSOLE_CPP__DEFINE_Q(\
	SCOPE, \
	TYPE, \
	UPPER, \
	KEY, \
	PARAMETERS, \
	PROLOGUE\
) \
	CMT__OOP_CPP__DEFINE_QUERY(\
		cmt::CONSOLE,\
		TYPE,\
		SCOPE,\
		UPPER,\
		LOCALMACRO__CMT_CONSOLE__##KEY##_CONTENT,\
		PARAMETERS,\
		PROLOGUE\
	)

/* ONE PAIR PER GROUP: ONLY THE SCOPE CHANGES */
#define LOCALMACRO__CMT_CONSOLE_CPP__ROOT_M(U, L, K, P, A, R) \
	LOCALMACRO__CMT_CONSOLE_CPP__DEFINE(cmt::CONSOLE, U, K, P, R)
#define LOCALMACRO__CMT_CONSOLE_CPP__ROOT_Q(T, U, L, K, P, A, R) \
	LOCALMACRO__CMT_CONSOLE_CPP__DEFINE_Q(cmt::CONSOLE, T, U, K, P, R)
#define LOCALMACRO__CMT_CONSOLE_CPP__PUT_M(U, L, K, P, A, R) \
	LOCALMACRO__CMT_CONSOLE_CPP__DEFINE(cmt::CONSOLE::T_PUT, U, K, P, R)
#define LOCALMACRO__CMT_CONSOLE_CPP__PUT_Q(T, U, L, K, P, A, R) \
	LOCALMACRO__CMT_CONSOLE_CPP__DEFINE_Q(cmt::CONSOLE::T_PUT, T, U, K, P, R)
#define LOCALMACRO__CMT_CONSOLE_CPP__PUT_COLORED_M(U, L, K, P, A, R) \
	LOCALMACRO__CMT_CONSOLE_CPP__DEFINE(\
		cmt::CONSOLE::T_PUT_COLORED, U, K, P, R\
	)
#define LOCALMACRO__CMT_CONSOLE_CPP__PUT_COLORED_Q(T, U, L, K, P, A, R) \
	LOCALMACRO__CMT_CONSOLE_CPP__DEFINE_Q(\
		cmt::CONSOLE::T_PUT_COLORED, T, U, K, P, R\
	)
#define LOCALMACRO__CMT_CONSOLE_CPP__CURSOR_M(U, L, K, P, A, R) \
	LOCALMACRO__CMT_CONSOLE_CPP__DEFINE(cmt::CONSOLE::T_CURSOR, U, K, P, R)
#define LOCALMACRO__CMT_CONSOLE_CPP__CURSOR_Q(T, U, L, K, P, A, R) \
	LOCALMACRO__CMT_CONSOLE_CPP__DEFINE_Q(cmt::CONSOLE::T_CURSOR, T, U, K, P, R)
#define LOCALMACRO__CMT_CONSOLE_CPP__INPUT_WAIT_M(U, L, K, P, A, R) \
	LOCALMACRO__CMT_CONSOLE_CPP__DEFINE(\
		cmt::CONSOLE::T_INPUT_WAIT, U, K, P, R\
	)
#define LOCALMACRO__CMT_CONSOLE_CPP__INPUT_WAIT_Q(T, U, L, K, P, A, R) \
	LOCALMACRO__CMT_CONSOLE_CPP__DEFINE_Q(\
		cmt::CONSOLE::T_INPUT_WAIT, T, U, K, P, R\
	)
#define LOCALMACRO__CMT_CONSOLE_CPP__GET_M(U, L, K, P, A, R) \
	LOCALMACRO__CMT_CONSOLE_CPP__DEFINE(cmt::CONSOLE::T_GET, U, K, P, R)
#define LOCALMACRO__CMT_CONSOLE_CPP__GET_Q(T, U, L, K, P, A, R) \
	LOCALMACRO__CMT_CONSOLE_CPP__DEFINE_Q(cmt::CONSOLE::T_GET, T, U, K, P, R)

#define LOCALFUNCTION__CMT_CONSOLE_CPP__MEMBERS \
	LOCALTABLE__CMT_CONSOLE__ROOT(\
		LOCALMACRO__CMT_CONSOLE_CPP__ROOT_M,\
		LOCALMACRO__CMT_CONSOLE_CPP__ROOT_Q\
	)\
	LOCALTABLE__CMT_CONSOLE__PUT(\
		LOCALMACRO__CMT_CONSOLE_CPP__PUT_M,\
		LOCALMACRO__CMT_CONSOLE_CPP__PUT_Q\
	)\
	LOCALTABLE__CMT_CONSOLE__PUT_COLORED(\
		LOCALMACRO__CMT_CONSOLE_CPP__PUT_COLORED_M,\
		LOCALMACRO__CMT_CONSOLE_CPP__PUT_COLORED_Q\
	)\
	LOCALTABLE__CMT_CONSOLE__CURSOR(\
		LOCALMACRO__CMT_CONSOLE_CPP__CURSOR_M,\
		LOCALMACRO__CMT_CONSOLE_CPP__CURSOR_Q\
	)\
	LOCALTABLE__CMT_CONSOLE__INPUT_WAIT(\
		LOCALMACRO__CMT_CONSOLE_CPP__INPUT_WAIT_M,\
		LOCALMACRO__CMT_CONSOLE_CPP__INPUT_WAIT_Q\
	)\
	LOCALTABLE__CMT_CONSOLE__GET(\
		LOCALMACRO__CMT_CONSOLE_CPP__GET_M,\
		LOCALMACRO__CMT_CONSOLE_CPP__GET_Q\
	)

/* THE HAND-WRITTEN ONES: CONSTRUCTION, DESTRUCTION AND THE VARIADIC PRINT */
#define LOCALFUNCTION__CMT_CONSOLE_CPP__SPECIAL \
	cmt::CONSOLE::CONSOLE(void) : \
		PUT(this), \
		put(PUT), \
		CURSOR(this), \
		cursor(CURSOR), \
		EVENT(), \
		event(EVENT), \
		INPUT(this), \
		input(INPUT), \
		GET(this), \
		get(GET)\
		LOCALTABLE__CMT_CONSOLE__ROOT_VALUES(\
			CMT__OOP_CPP__WRITABLE_INIT_STORE\
		)\
		LOCALTABLE__CMT_CONSOLE__ROOT_VALUES(\
			CMT__OOP_CPP__WRITABLE_INIT_EXPOSE\
		)\
	{\
		cmt::CONSOLE	*THIS = this;\
		\
		THIS->HIGHLIGHTER = TRUE;\
		LOCALFUNCTION__CMT_CONSOLE_CONTENT\
	}\
	\
	cmt::CONSOLE::~CONSOLE(void)\
	{\
		cmt::CONSOLE	*THIS = this;\
		\
		LOCALMACRO__CMT_CONSOLE__DESTRUCTOR_CONTENT\
	}\
	\
	cmt::CONSOLE\
		*cmt::CONSOLE::PRINT(const char *FORMAT, VA_ARGS)\
	VA_DECLARE\
	{\
		cmt::CONSOLE	*THIS = this;\
		\
		LOCALMACRO__CMT_CONSOLE__PRINT_CONTENT\
		\
		return (THIS);\
	}\
	\
	cmt::CONSOLE\
		*cmt::CONSOLE::print(const char *FORMAT, VA_ARGS)\
	VA_DECLARE\
	{\
		cmt::CONSOLE	*THIS = this;\
		\
		LOCALMACRO__CMT_CONSOLE__PRINT_CONTENT\
		\
		return (THIS);\
	}
/* *********************** [^] MEMBER DEFINITIONS [^] *********************** */

#define LOCALCONSTRUCTOR__CONSOLE \
	new (static_cast<void *>(&CONSOLE_STORAGE)) cmt::CONSOLE();
#define LOCALDESTRUCTOR__CONSOLE \
	CONSOLE.CURSOR.DEFAULT_COLOR()->~CONSOLE();

/* .,,,,. #==========================================================# .,,,,. */
/*  \\//  |                 LINKABLE MEMBER CREATION                 |  \\//  */
/*   \/   #==========================================================#   \/   */

/* THE UNION ONLY GIVES THE BYTES THE STRICTEST ALIGNMENT, WITHOUT alignas */
#undef LOCALLINKER__CONSOLE_OOP
#define LOCALLINKER__CONSOLE_OOP \
	union LOCALUNION__CMT_CONSOLE_STORAGE\
	{\
		unsigned char	BYTES[sizeof(cmt::CONSOLE)];\
		long double		ALIGN_FLOAT;\
		long			ALIGN_INTEGER;\
		void			*ALIGN_POINTER;\
		void			(*ALIGN_FUNCTION)(void);\
	}	CONSOLE_STORAGE;\
	cmt::CONSOLE	&CONSOLE = \
		*reinterpret_cast<cmt::CONSOLE *>(&CONSOLE_STORAGE);\
	cmt::CONSOLE	&console = \
		*reinterpret_cast<cmt::CONSOLE *>(&CONSOLE_STORAGE);\
	LOCALFUNCTION__CMT_CONSOLE_CPP__SPECIAL \
	LOCALFUNCTION__CMT_CONSOLE_CPP__MEMBERS

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
