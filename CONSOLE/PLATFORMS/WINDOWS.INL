#ifndef CONSOLE_HPP
#ifndef CONSOLE_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_H */
#endif /* !CONSOLE_HPP */

#ifndef SEAL_CMT_CONSOLE_WINDOWS
#define SEAL_CMT_CONSOLE_WINDOWS

/* **************************** [v] INCLUDES [v] **************************** */
#include "../../WIN_CORE/KERNEL32.H"
/******* """""""""""""""""""""""""""
 * struct S_COORD;
 * struct S_RECT;
 * struct S_SMALL_RECT;
 * struct S_CONSOLE_CURSOR_INFO;
 * struct S_CONSOLE_SCREEN_BUFFER_INFO;
 * struct S_INPUT_RECORD;
 * struct S_KERNEL32	KERNEL32;
 */
#include "../../WIN_CORE/USER32.H"
/******* """""""""""""""""""""""""
 * struct S_USER32	USER32;
 */
#include "../../ATTRIBUTES/REGISTER.H"
/******* """""""""""""""""""""""""""""
 * #define REGISTER
 */
/* **************************** [^] INCLUDES [^] **************************** */

#define LOCALMACRO__CMT_CONSOLE__SNAPSHOT_MAGIC \
	(unsigned long)0X434D5443 /* "CMTC" */
#define LOCALMACRO__CMT_CONSOLE__SNAPSHOT_VERSION (unsigned long)202609

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

#define LOCALMACRO__CMT_CONSOLE__PRIVATE_VARIABLES \
	PTR				_OUT_HANDLE;\
	PTR				_IN_HANDLE;\
	unsigned long	_IN_MODE;\
	PTR				_PUSH_DATA;\
	unsigned long	_PUSH_SIZE;\
	unsigned long	_PUSH_CAPACITY;\
	unsigned int	_PUSH_DEPTH;\
	PTR				_SCRATCH_DATA;\
	unsigned long	_SCRATCH_SIZE;\
	BOOLEAN			_ACTIVE;\
	BOOLEAN			_VT;\
	BOOLEAN			_OWNED;\
	BOOLEAN			_TERMINAL;

#define LOCALMACRO__CMT_CONSOLE__LOG_INLINE(__STRING__) \
	do\
	{\
		char			*THE_STRING = (__STRING__);\
		LET				LENGTH;\
		unsigned long	WRITTEN;\
		unsigned int	*X = &(\
			OBJECT__INITIALIZE (THIS->GET.CURSOR.X, unsigned int)\
		);\
		unsigned int	*Y = &(\
			OBJECT__INITIALIZE (THIS->GET.CURSOR.Y, unsigned int)\
		);\
		\
		LENGTH = (LET)0;\
		\
		while (THE_STRING[LENGTH] != 0)\
		{ /* THIS PART OF THE CODE SPONSORED BY CLAUDE */\
			const char		__CHARACTER__ = THE_STRING[LENGTH];\
			\
			if (__CHARACTER__ == '\n')\
			{\
				(*X) = 0;\
				(*Y)++;\
			}\
			else if (__CHARACTER__ == '\r')\
				(*X) = 0;\
			else if (__CHARACTER__ == '\b')\
			{\
				if ((*X) > 0)\
					(*X)--;\
			}\
			else\
			{\
				(*X)++;\
				\
				if ((*X) >= THIS->GET.WIDTH)\
				{\
					(*X) = 0;\
					(*Y)++;\
				}\
			}\
			\
			++LENGTH;\
		}\
		\
		if (THIS->_PUSH_DEPTH)\
		{\
			const unsigned long	NEEDED =\
				THIS->_PUSH_SIZE + (unsigned long)LENGTH + (unsigned long)1;\
			\
			if (THIS->_PUSH_CAPACITY < NEEDED)\
			{\
				unsigned long	TARGET;\
				PTR				BLOCK;\
				\
				if (THIS->_PUSH_CAPACITY)\
					TARGET = THIS->_PUSH_CAPACITY;\
				else\
					TARGET = (unsigned long)1024;\
				\
				while (TARGET < NEEDED)\
					TARGET = TARGET * (unsigned long)2;\
				\
				if (!THIS->_PUSH_DATA)\
					BLOCK = ALLOC((LET)TARGET);\
				else\
					BLOCK = REALLOC(THIS->_PUSH_DATA, (LET)TARGET);\
				\
				if (BLOCK)\
				{\
					THIS->_PUSH_DATA = BLOCK;\
					THIS->_PUSH_CAPACITY = TARGET;\
				}\
			}\
			\
			if (THIS->_PUSH_CAPACITY >= NEEDED)\
			{\
				REGISTER LET	INDEX = (LET)0;\
				char			*TAIL =\
					((char *)THIS->_PUSH_DATA) + THIS->_PUSH_SIZE;\
				\
				while (INDEX < LENGTH)\
				{\
					TAIL[INDEX] = THE_STRING[INDEX];\
					++INDEX;\
				}\
				\
				THIS->_PUSH_SIZE += (unsigned long)LENGTH;\
				((char *)THIS->_PUSH_DATA)[THIS->_PUSH_SIZE] = (char)0;\
				break ;\
			}\
		}\
		\
		if (\
			!KERNEL32.WriteConsoleA(\
				THIS->_OUT_HANDLE, THE_STRING, LENGTH, &WRITTEN, 0\
			)\
		)\
			KERNEL32.WriteFile(\
				THIS->_OUT_HANDLE, THE_STRING, LENGTH, &WRITTEN, 0\
			);\
	}\
	while (0)

#include "WINDOWS/UTILS/PRIMITIVES.INL"
#include "WINDOWS/UTILS/ATTACH.INL"
#include "WINDOWS/UTILS/ATTACH_PUBLISH.INL"
#include "WINDOWS/UTILS/HOST.INL"
#include "WINDOWS/UTILS/MOVE.INL"
#include "WINDOWS/INPUT/EVENT.INL"

#include "WINDOWS/__CONSTRUCTOR__.INL"
#include "WINDOWS/__DESTRUCTOR__.INL"
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
#endif /* !SEAL_CMT_CONSOLE_WINDOWS */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
