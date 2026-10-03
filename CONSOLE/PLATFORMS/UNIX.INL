#ifndef CONSOLE_HPP
#ifndef CONSOLE_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_H */
#endif /* !CONSOLE_HPP */

#ifndef SEAL_CMT_CONSOLE_UNIX
#define SEAL_CMT_CONSOLE_UNIX

/******************************************************************************\
|* THE UNIX BACKEND.                                                          *|
|*                                                                            *|
|* A UNIX TERMINAL IS A STREAM, NOT A BUFFER: YOU CAN WRITE TO IT BUT YOU CAN *|
|* NOT READ IT BACK, AND IT DOES NOT TELL YOU WHERE THE CURSOR IS UNLESS YOU  *|
|* ASK AND WAIT FOR THE ANSWER. EVERYTHING THE WINDOWS BACKEND GETS FROM THE  *|
|* CONSOLE API IS REBUILT HERE FROM TWO PIECES:                               *|
|*                                                                            *|
|*   A SHADOW SCREEN  ONE GLYPH AND ONE ATTRIBUTE PER CELL, UPDATED BY EVERY  *|
|*                    WRITE. GET.LINE, GET.AREA, EXPORT AND COLOR() ARE       *|
|*                    SERVED FROM IT.                                         *|
|*                                                                            *|
|*   A TERMINAL MODEL WHERE THE REAL CURSOR IS, WHICH PEN THE TERMINAL IS     *|
|*                    USING, AND WHETHER IT IS WAITING TO WRAP. OUTPUT IS     *|
|*                    GENERATED AGAINST IT, SO A RUN OF CELLS ON ONE ROW      *|
|*                    COSTS ONE CURSOR MOVE, NOT ONE PER CELL.                *|
|*                                                                            *|
|* ALL OUTPUT GOES THROUGH ONE BUFFER AND LEAVES IN ONE WRITE() PER PUBLIC    *|
|* CALL. PUSH() SIMPLY HOLDS THAT BUFFER UNTIL THE OUTERMOST POP().           *|
|*                                                                            *|
|* COLOURS KEEP THE WINDOWS MEANING (LOW NIBBLE FOREGROUND, HIGH NIBBLE       *|
|* BACKGROUND, BIT 3 BRIGHT, BIT 0 BLUE, BIT 2 RED). THE PAIR 0X07 IS THE     *|
|* TERMINAL'S OWN DEFAULT, AND BY DEFAULT A BLACK BACKGROUND OR A LIGHT GREY  *|
|* FOREGROUND ALSO FALL BACK TO THE TERMINAL'S OWN COLOURS, SO OUTPUT LOOKS   *|
|* NATIVE ON LIGHT THEMES TOO. DEFINE CMT_CONSOLE_EXACT_COLORS BEFORE THE     *|
|* INCLUDE TO GET THE LITERAL VGA COLOURS INSTEAD.                            *|
|*                                                                            *|
|* SINGLE BYTES ABOVE 0X7F THAT ARE NOT PART OF VALID UTF-8 ARE READ AS CODE  *|
|* PAGE 437, SO '\XDB' IS STILL A FULL BLOCK AND '\XC4' STILL A LINE, EXACTLY *|
|* AS THEY DRAW IN A WINDOWS CONSOLE.                                         *|
\******************************************************************************/

/* **************************** [v] INCLUDES [v] **************************** */
#include <unistd.h>
/******* """"""""""
 * int		isatty(int);
 * ssize_t	read(int, void *, size_t);
 * ssize_t	write(int, const void *, size_t);
 * int		close(int);
 */
#include <fcntl.h>
/******* """""""""
 * int	open(const char *, int, ...);
 * #define O_RDWR
 * #define O_NOCTTY
 */
#include <termios.h>
/******* """""""""""
 * struct termios;
 * int	tcgetattr(int, struct termios *);
 * int	tcsetattr(int, int, const struct termios *);
 */
#include <sys/ioctl.h>
/******* """""""""""""
 * struct winsize;
 * #define TIOCGWINSZ
 */
#include <sys/time.h>
/******* """"""""""""
 * struct timeval;
 */
#include <sys/select.h>
/******* """"""""""""""
 * fd_set;
 * int	select(int, fd_set *, fd_set *, fd_set *, struct timeval *);
 */
#include <signal.h>
/******* """"""""""
 * int	raise(int);
 */
#include <errno.h>
/******* """""""""
 * #define errno
 * #define EINTR
 * #define EAGAIN
 */
#include <stdlib.h>
/******* """"""""""
 * char	*getenv(const char *);
 */
#include <time.h>
/******* """"""""
 * int	clock_gettime(clockid_t, struct timespec *); (DOUBLE CLICKS ONLY)
 */
#include "../../ATTRIBUTES/REGISTER.H"
/******* """""""""""""""""""""""""""""
 * #define REGISTER
 */
/* **************************** [^] INCLUDES [^] **************************** */

#define LOCALMACRO__CMT_CONSOLE__SNAPSHOT_MAGIC \
	(unsigned long)0X434D5455 /* "CMTU" */
#define LOCALMACRO__CMT_CONSOLE__SNAPSHOT_VERSION (unsigned long)202610

/* THE PAIR THAT MEANS "WHATEVER THE TERMINAL USES BY DEFAULT" */
#define LOCALMACRO__CMT_CONSOLE__NATIVE_COLOR (unsigned int)0X07

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
	/* FOLLOWED BY WIDTH * HEIGHT GLYPHS OF 4 BYTES, THEN AS MANY ATTRIBUTES */
};
/* ***************************** [^] STRUCT [^] ***************************** */

/******************************************************************************\
|* _OUT_FD / _IN_FD    WHERE OUTPUT GOES AND WHERE KEYS COME FROM             *|
|* _FLAVOR             XTERM-LIKE, LINUX CONSOLE, OR OTHER (FROM $TERM)       *|
|* _ACTIVE             OUTPUT IS A TERMINAL (OTHERWISE ONLY TEXT IS WRITTEN)  *|
|* _INPUT              _IN_FD IS A TERMINAL                                   *|
|* _OWN_IN             _IN_FD IS /DEV/TTY, OPENED HERE, CLOSED ON DESTRUCTION *|
|* _SAVED / _TERMIOS   THE TERMINAL MODE AS WE FOUND IT                       *|
|* _RAW                INPUT IS IN RAW MODE RIGHT NOW (INSIDE INPUT.WAIT.*)   *|
|* _OUT_*              THE OUTPUT BUFFER                                      *|
|* _PUSH_DEPTH         PUSH() NESTING                                         *|
|* _BATCH              > 0 WHILE A MEMBER IS CALLING OTHER MEMBERS            *|
|* _CELLS / _ATTRS     THE SHADOW SCREEN, _CELLS_W * _CELLS_H CELLS           *|
|* _WRAP               THE CURSOR SITS PAST THE LAST COLUMN, WAITING TO WRAP  *|
|* _TX _TY _TVALID     WHERE THE TERMINAL'S CURSOR REALLY IS, IF KNOWN        *|
|* _TWRAP              THE TERMINAL ITSELF IS WAITING TO WRAP                 *|
|* _TPEN               THE ATTRIBUTE THE TERMINAL IS USING, -1 IF UNKNOWN     *|
|* _GLYPH_*            A UTF-8 CHARACTER SPLIT ACROSS TWO LOG() CALLS         *|
|* _ESC_*              AN ESCAPE SEQUENCE SPLIT ACROSS TWO LOG() CALLS        *|
|* _IN_DATA _IN_FILL   INPUT BYTES READ BUT NOT DECODED YET                   *|
|* _BUTTONS            MOUSE BUTTONS HELD DOWN                                *|
|* _WANT               WHICH EVENT KINDS THE NEXT WAIT STOPS ON (0 = ANY)     *|
|* _FOCUS              LAST KNOWN FOCUS STATE                                 *|
|* _EVENT_W _EVENT_H   THE SIZE ON_RESIZE LAST ANNOUNCED                      *|
|* _START_*            CURSOR SHAPE AND VISIBILITY TO PUT BACK ON EXIT        *|
|* _SHAPED _TITLED     CURSOR SHAPE / TITLE WERE CHANGED BY US                *|
|* _CLICK_*            THE LAST PRESS, FOR DOUBLE CLICK DETECTION             *|
\******************************************************************************/

#define LOCALMACRO__CMT_CONSOLE__PRIVATE_VARIABLES \
	int				_OUT_FD;\
	int				_IN_FD;\
	int				_FLAVOR;\
	BOOLEAN			_ACTIVE;\
	BOOLEAN			_INPUT;\
	BOOLEAN			_OWN_IN;\
	BOOLEAN			_SAVED;\
	BOOLEAN			_RAW;\
	struct termios	_TERMIOS;\
	PTR				_OUT_DATA;\
	unsigned long	_OUT_FILL;\
	unsigned long	_OUT_CAPACITY;\
	unsigned int	_PUSH_DEPTH;\
	unsigned int	_BATCH;\
	PTR				_SCRATCH_DATA;\
	unsigned long	_SCRATCH_SIZE;\
	PTR				_CELLS;\
	PTR				_ATTRS;\
	unsigned int	_CELLS_W;\
	unsigned int	_CELLS_H;\
	BOOLEAN			_WRAP;\
	BOOLEAN			_TWRAP;\
	BOOLEAN			_TVALID;\
	int				_TX;\
	int				_TY;\
	int				_TPEN;\
	unsigned long	_GLYPH;\
	int				_GLYPH_NEED;\
	int				_GLYPH_HAVE;\
	int				_ESC_STATE;\
	unsigned int	_ESC_FILL;\
	char			_ESC_DATA[40];\
	unsigned char	_IN_DATA[256];\
	unsigned int	_IN_FILL;\
	unsigned int	_BUTTONS;\
	unsigned int	_WANT;\
	int				_FOCUS;\
	unsigned int	_EVENT_W;\
	unsigned int	_EVENT_H;\
	int				_START_SHAPE;\
	BOOLEAN			_START_VISIBLE;\
	BOOLEAN			_SHAPED;\
	BOOLEAN			_TITLED;\
	long			_CLICK_SECONDS;\
	long			_CLICK_NANOSECONDS;\
	unsigned int	_CLICK_X;\
	unsigned int	_CLICK_Y;\
	unsigned int	_CLICK_BUTTON;

#include "UNIX/UTILS/PRIMITIVES.INL"
#include "UNIX/UTILS/TERMINAL.INL"
#include "UNIX/UTILS/TEXT.INL"
#include "UNIX/UTILS/QUERY.INL"
#include "UNIX/INPUT/EVENT.INL"

#include "UNIX/__CONSTRUCTOR__.INL"
#include "UNIX/__DESTRUCTOR__.INL"
#include "UNIX/LOG.INL"
#include "UNIX/WARNING.INL"
#include "UNIX/WARNING_AT.INL"
#include "UNIX/ERROR.INL"
#include "UNIX/ERROR_AT.INL"
#include "UNIX/PRINT.INL"

#include "UNIX/X.INL"
#include "UNIX/Y.INL"
#include "UNIX/XY.INL"
#include "UNIX/WIDTH.INL"
#include "UNIX/HEIGHT.INL"
#include "UNIX/COLOR.INL"
#include "UNIX/DEFAULT_COLOR.INL"
#include "UNIX/CLEAR.INL"
#include "UNIX/TITLE.INL"

#include "UNIX/EXPORT.INL"
#include "UNIX/IMPORT.INL"
#include "UNIX/PUSH.INL"
#include "UNIX/POP.INL"

#include "UNIX/CURSOR/COLOR.INL"
#include "UNIX/CURSOR/DEFAULT_COLOR.INL"
#include "UNIX/CURSOR/X.INL"
#include "UNIX/CURSOR/Y.INL"
#include "UNIX/CURSOR/XY.INL"
#include "UNIX/CURSOR/MOVE_X.INL"
#include "UNIX/CURSOR/MOVE_Y.INL"
#include "UNIX/CURSOR/MOVE_XY.INL"
#include "UNIX/CURSOR/SHOW.INL"
#include "UNIX/CURSOR/SIZE.INL"

#include "UNIX/PUT/STRING.INL"
#include "UNIX/PUT/LINE.INL"
#include "UNIX/PUT/CURVE.INL"
#include "UNIX/PUT/FRAME.INL"
#include "UNIX/PUT/FRAME_RADIUS.INL"
#include "UNIX/PUT/RECTANGLE.INL"
#include "UNIX/PUT/RECTANGLE_RADIUS.INL"
#include "UNIX/PUT/CIRCLE.INL"
#include "UNIX/PUT/ELLIPSE.INL"

#include "UNIX/PUT/COLORED/STRING.INL"
#include "UNIX/PUT/COLORED/LINE.INL"
#include "UNIX/PUT/COLORED/CURVE.INL"
#include "UNIX/PUT/COLORED/FRAME.INL"
#include "UNIX/PUT/COLORED/FRAME_RADIUS.INL"
#include "UNIX/PUT/COLORED/RECTANGLE.INL"
#include "UNIX/PUT/COLORED/RECTANGLE_RADIUS.INL"
#include "UNIX/PUT/COLORED/CIRCLE.INL"
#include "UNIX/PUT/COLORED/ELLIPSE.INL"

#include "UNIX/INPUT/WAIT/ANY.INL"
#include "UNIX/INPUT/WAIT/KEY.INL"
#include "UNIX/INPUT/WAIT/MOUSE.INL"
#include "UNIX/INPUT/WAIT/MOUSE_ACTION.INL"
#include "UNIX/INPUT/WAIT/MOUSE_MOVE.INL"

#include "UNIX/GET/LINE.INL"
#include "UNIX/GET/AREA.INL"
#endif /* !SEAL_CMT_CONSOLE_UNIX */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
