#ifndef CONSOLE_HPP
#ifndef CONSOLE_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_H */
#endif /* !CONSOLE_HPP */

/* **************************** [v] INCLUDES [v] **************************** */
#include "../OBJECT.H"
/******* """""""""""""
 * #define object
 * #define OBJECT__CONNECT(OBJECT_TYPE_NAME)
 * #define OBJECT__INJECT(TARGET, SOURCE)
 * #define OBJECT__EJECT(MEMBER_NAME)
 * #define OBJECT__INITIALIZE(VARIABLE, TYPE)
 */
/* **************************** [^] INCLUDES [^] **************************** */

OBJECT CMT_CONSOLE
{
	OBJECT CMT_CONSOLE	*(*color)(unsigned int);
	OBJECT CMT_CONSOLE	*(*default_color)(void);
	OBJECT CMT_CONSOLE	*(*x)(int);
	OBJECT CMT_CONSOLE	*(*y)(int);
	OBJECT CMT_CONSOLE	*(*width)(unsigned int);
	OBJECT CMT_CONSOLE	*(*height)(unsigned int);

	OBJECT CMT_CONSOLE	*(*log)(char *);
	OBJECT CMT_CONSOLE	*(*error)(char *);
	OBJECT CMT_CONSOLE	*(*error_at)(char *, char *, unsigned int);
	OBJECT CMT_CONSOLE	*(*warning)(char *);
	OBJECT CMT_CONSOLE	*(*warning_at)(char *, char *, unsigned int);

	OBJECT CMT_CONSOLE	*(*highlighter)(BOOLEAN);

	struct
	{
		OBJECT CMT_CONSOLE	*(*string)(unsigned int, unsigned int, char *);
		OBJECT CMT_CONSOLE	*(*character)(unsigned int, unsigned int, char);
		OBJECT CMT_CONSOLE	*(*color)(unsigned int, unsigned int, unsigned int);

		OBJECT CMT_CONSOLE	*(*string_with_color)(
			unsigned int, unsigned int, char *, unsigned int
		);
		OBJECT CMT_CONSOLE	*(*character_with_color)(
			unsigned int, unsigned int, char, unsigned int
		);

		struct
		{
			OBJECT CMT_CONSOLE	*(*character)(
				unsigned int, unsigned int, char, unsigned int, unsigned int
			);
			OBJECT CMT_CONSOLE	*(*color)(
				unsigned int,
				unsigned int,
				unsigned int,
				unsigned int,
				unsigned int
			);

		} line;

		struct
		{
			OBJECT CMT_CONSOLE	*(*character)(
				unsigned int, unsigned int, char, unsigned int, unsigned int
			);
			OBJECT CMT_CONSOLE	*(*color)(
				unsigned int,
				unsigned int,
				unsigned int,
				unsigned int,
				unsigned int
			);

		} frame;

		struct
		{
			OBJECT CMT_CONSOLE	*(*character)(
				unsigned int, unsigned int, char, unsigned int, unsigned int
			);
			OBJECT CMT_CONSOLE	*(*color)(
				unsigned int,
				unsigned int,
				unsigned int,
				unsigned int,
				unsigned int
			);

		} square;
	} put;

	struct
	{
		OBJECT CMT_CONSOLE	*(*x)(unsigned int);
		OBJECT CMT_CONSOLE	*(*y)(unsigned int);
		OBJECT CMT_CONSOLE	*(*color)(unsigned int);
		OBJECT CMT_CONSOLE	*(*default_color)();

		OBJECT CMT_CONSOLE	*(*goto_xy)(unsigned int, unsigned int);
		OBJECT CMT_CONSOLE	*(*goto_x)(unsigned int);
		OBJECT CMT_CONSOLE	*(*goto_y)(unsigned int);

		OBJECT CMT_CONSOLE	*(*move_xy)(unsigned int, unsigned int);
		OBJECT CMT_CONSOLE	*(*move_x)(unsigned int);
		OBJECT CMT_CONSOLE	*(*move_y)(unsigned int);

		struct
		{
			const int			x;
			const int			y;
			const unsigned int	color;
			const unsigned int	default_color;
			const unsigned int	size;
		} get;
	} cursor;

	struct
	{
		const int			x;
		const int			y;
		const unsigned int	color;
		const unsigned int	default_color;
		const unsigned int	width;
		const unsigned int	height;
	} get;

	void					(*free)(void);
	BOOLEAN					_HIGHLIGHTER;
	T_CONSOLE_OUT_HANDLE	_OUT_HANDLE;
};

/* *************************** [v] MVS LINKER [v] *************************** */
/* **** MVS LINKER DOES NOT SUPPORT EXTERNAL NAMES LARGER THAN 8 BYTES!! **** */
#ifdef __MVS__ /* IBM Z/OS XL C/C++ */
#define CMT_CONSOLE CMTCOCOP
#define CMT_CONSOLE_C_OOP__FREE MTCOPFRE
#define CMT_CONSOLE_C_OOP__LOG MTCOPLOG
#define CMT_CONSOLE_C_OOP__WARNING MTCOPWAR
#define CMT_CONSOLE_C_OOP__WARNING_AT MTCOPWAT
#define CMT_CONSOLE_C_OOP__ERROR MTCOPERR
#define CMT_CONSOLE_C_OOP__CURSOR_COLOR MTCOPCCO
#define CMT_CONSOLE_C_OOP__CURSOR_DEFAULT_COLOR MTCOPCDC
#endif /* __MVS__ */
/* *************************** [^] MVS LINKER [^] *************************** */

/* **************************** [v] EXTERNS [v] ***************************** */
extern OBJECT CMT_CONSOLE	console;

#ifndef KNR_STYLE /* STANDARD C */
extern void					CMT_CONSOLE_C_OOP__FREE(void);
extern void					CMT_CONSOLE(void);
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__LOG(char *);
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__WARNING(char *);
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__WARNING_AT(\
	char *, char *, unsigned int\
);
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__ERROR(char *);
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__CURSOR_COLOR(unsigned int);
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__CURSOR_DEFAULT_COLOR(void);
#else /* K&R */
extern CMT_CONSOLE_C_OOP__FREE();
extern CMT_CONSOLE(void);
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__LOG();
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__WARNING();
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__WARNING_AT();
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__ERROR();
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__CURSOR_COLOR();
extern OBJECT CMT_CONSOLE	*CMT_CONSOLE_C_OOP__CURSOR_DEFAULT_COLOR();
#endif /* !KNR_STYLE */
/* **************************** [^] EXTERNS [^] ***************************** */

#include "C_OOP/CMT_CONSOLE.INL"
#include "C_OOP/FREE.INL"
#include "C_OOP/LOG.INL"
#include "C_OOP/WARNING.INL"
#include "C_OOP/WARNING_AT.INL"
#include "C_OOP/ERROR.INL"

#include "C_OOP/CURSOR/COLOR.INL"
#include "C_OOP/CURSOR/DEFAULT_COLOR.INL"

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
	LOCALFUNCTION__CMT_CONSOLE_C_OOP__CURSOR_COLOR \
	LOCALFUNCTION__CMT_CONSOLE_C_OOP__CURSOR_DEFAULT_COLOR

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
