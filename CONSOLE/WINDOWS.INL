#ifndef CONSOLE_HPP
#ifndef CONSOLE_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_H */
#endif /* !CONSOLE_HPP */

/* **************************** [v] INCLUDES [v] **************************** */
#include "../WIN_CORE/KERNEL32.H"
/******* """"""""""""""""""""""""
 * struct S_COORD;
 * struct S_RECT;
 * struct S_SMALL_RECT;
 * struct S_CONSOLE_CURSOR_INFO;
 * struct S_CONSOLE_SCREEN_BUFFER_INFO;
 * struct S_INPUT_RECORD;
 * struct S_KERNEL32	KERNEL32;
 */
#include "../WIN_CORE/USER32.H"
/******* """""""""""""""""""""
 * struct S_USER32	USER32;
 */
/* **************************** [^] INCLUDES [^] **************************** */

#define LOCALMACRO__CMT_CONSOLE__SNAPSHOT_MAGIC \
	(unsigned long)0X434D5443 /* "CMTC" */
#define LOCALMACRO__CMT_CONSOLE__SNAPSHOT_VERSION (unsigned long)202608

/* ***************************** [v] STRUCT [v] ***************************** */
struct S_CONSOLE_SNAPSHOT
{
	unsigned long	MAGIC;
	unsigned long	VERSION;
	unsigned long	WIDTH;
	unsigned long	HEIGHT;
	long			CURSOR_X;
	long			CURSOR_Y;
	unsigned long	CURSOR_SIZE;
	unsigned long	CURSOR_VISIBLE;
	unsigned long	COLOR;
	unsigned long	DEFAULT_COLOR;
};
/* ***************************** [^] STRUCT [^] ***************************** */

/* **************************** [v] TYPEDEFS [v] **************************** */
typedef PTR	T_CONSOLE_OUT_HANDLE;
typedef PTR	T_CONSOLE_IN_HANDLE;
/* **************************** [^] TYPEDEFS [^] **************************** */

#include "WINDOWS/UTILS/PRIMITIVES.INL"
#include "WINDOWS/UTILS/ATTACH.INL"
#include "WINDOWS/UTILS/ATTACH_PUBLISH.INL"
#include "WINDOWS/UTILS/HOST.INL"
#include "WINDOWS/UTILS/MOVE.INL"
#include "WINDOWS/INPUT/EVENT.INL"

#include "WINDOWS/CMT_CONSOLE.INL"
#include "WINDOWS/FREE.INL"
#include "WINDOWS/LOG.INL"
#include "WINDOWS/WARNING.INL"
#include "WINDOWS/WARNING_AT.INL"
#include "WINDOWS/ERROR.INL"
#include "WINDOWS/ERROR_AT.INL"
#include "WINDOWS/PRINT.INL"

#include "WINDOWS/X.INL"
#include "WINDOWS/Y.INL"
#include "WINDOWS/XY.INL"
#include "WINDOWS/WIDTH.INL"
#include "WINDOWS/HEIGHT.INL"
#include "WINDOWS/COLOR.INL"
#include "WINDOWS/DEFAULT_COLOR.INL"
#include "WINDOWS/CLEAR.INL"
#include "WINDOWS/TITLE.INL"

#include "WINDOWS/EXPORT.INL"
#include "WINDOWS/IMPORT.INL"
#include "WINDOWS/PUSH.INL"
#include "WINDOWS/POP.INL"

#include "WINDOWS/CURSOR/COLOR.INL"
#include "WINDOWS/CURSOR/DEFAULT_COLOR.INL"
#include "WINDOWS/CURSOR/X.INL"
#include "WINDOWS/CURSOR/Y.INL"
#include "WINDOWS/CURSOR/XY.INL"
#include "WINDOWS/CURSOR/MOVE_X.INL"
#include "WINDOWS/CURSOR/MOVE_Y.INL"
#include "WINDOWS/CURSOR/MOVE_XY.INL"
#include "WINDOWS/CURSOR/SHOW.INL"
#include "WINDOWS/CURSOR/SIZE.INL"

#include "WINDOWS/PUT/STRING.INL"
#include "WINDOWS/PUT/LINE.INL"
#include "WINDOWS/PUT/CURVE.INL"
#include "WINDOWS/PUT/FRAME.INL"
#include "WINDOWS/PUT/FRAME_RADIUS.INL"
#include "WINDOWS/PUT/RECTANGLE.INL"
#include "WINDOWS/PUT/RECTANGLE_RADIUS.INL"
#include "WINDOWS/PUT/CIRCLE.INL"
#include "WINDOWS/PUT/ELLIPSE.INL"

#include "WINDOWS/PUT/COLORED/STRING.INL"
#include "WINDOWS/PUT/COLORED/LINE.INL"
#include "WINDOWS/PUT/COLORED/CURVE.INL"
#include "WINDOWS/PUT/COLORED/FRAME.INL"
#include "WINDOWS/PUT/COLORED/FRAME_RADIUS.INL"
#include "WINDOWS/PUT/COLORED/RECTANGLE.INL"
#include "WINDOWS/PUT/COLORED/RECTANGLE_RADIUS.INL"
#include "WINDOWS/PUT/COLORED/CIRCLE.INL"
#include "WINDOWS/PUT/COLORED/ELLIPSE.INL"

#include "WINDOWS/INPUT/WAIT/ANY.INL"
#include "WINDOWS/INPUT/WAIT/KEY.INL"
#include "WINDOWS/INPUT/WAIT/MOUSE.INL"
#include "WINDOWS/INPUT/WAIT/MOUSE_ACTION.INL"
#include "WINDOWS/INPUT/WAIT/MOUSE_MOVE.INL"

#include "WINDOWS/GET/LINE.INL"
#include "WINDOWS/GET/AREA.INL"

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
