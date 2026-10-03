#ifndef CONSOLE_HPP
#ifndef CONSOLE_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_H */
#endif /* !CONSOLE_HPP */

/******************************************************************************\
|* RAW MODE AND TERMINAL QUERIES.                                             *|
|*                                                                            *|
|* THE TERMINAL STAYS IN ITS NORMAL (COOKED) MODE WHILE THE PROGRAM RUNS, SO  *|
|* SCANF() AND FRIENDS KEEP WORKING. RAW MODE IS TURNED ON ONLY WHILE AN      *|
|* INPUT.WAIT.* IS WAITING, OR FOR A MOMENT TO READ A QUERY'S ANSWER, AND IT  *|
|* IS ALWAYS PUT BACK. MOUSE AND FOCUS REPORTING FOLLOW THE SAME RULE, SO A   *|
|* MOUSE MOVED WHILE NOBODY IS WAITING NEVER TYPES GARBAGE INTO THE SHELL.    *|
|*                                                                            *|
|* ISIG IS OFF IN RAW MODE, SO CTRL+C ARRIVES AS A BYTE. THE INPUT LOOP TURNS *|
|* IT BACK INTO SIGINT (AND CTRL+\ INTO SIGQUIT, CTRL+Z INTO SIGTSTP) AFTER   *|
|* RESTORING THE TERMINAL, SO THE PROGRAM DIES OR STOPS EXACTLY AS IT WOULD   *|
|* HAVE, BUT NEVER LEAVES THE SHELL IN RAW MODE OR WITH THE MOUSE REPORTING.  *|
|*                                                                            *|
|* A QUERY ENDS WITH "ESC [ 6 N" (CURSOR POSITION REPORT). EVERY VT100 STYLE  *|
|* TERMINAL ANSWERS IT, AND ANSWERS ARRIVE IN ORDER, SO WHEN ITS REPLY SHOWS  *|
|* UP EVERYTHING THE TERMINAL WAS GOING TO SAY ABOUT THE EARLIER REQUESTS IS  *|
|* ALREADY IN. TERMINALS THAT IGNORE A REQUEST SIMPLY SAY NOTHING ABOUT IT.   *|
\******************************************************************************/

#define LOCALMACRO__CMT_CONSOLE__MOUSE_ON \
	"\033[?1000h\033[?1002h\033[?1003h\033[?1006h\033[?1004h"
#define LOCALMACRO__CMT_CONSOLE__MOUSE_OFF \
	"\033[?1004l\033[?1006l\033[?1003l\033[?1002l\033[?1000l"

#define LOCALMACRO__CMT_CONSOLE__RAW_ENTER(WITH_MOUSE) \
	do\
	{\
		if (THIS->_INPUT && THIS->_SAVED && !THIS->_RAW)\
		{\
			struct termios	__CMT_RAW__ = THIS->_TERMIOS;\
			\
			__CMT_RAW__.c_lflag &= ~(tcflag_t)(ICANON | ECHO | ISIG | IEXTEN);\
			__CMT_RAW__.c_iflag &= ~(tcflag_t)(ICRNL | INLCR | IGNCR | IXON);\
			__CMT_RAW__.c_cc[VMIN] = 1;\
			__CMT_RAW__.c_cc[VTIME] = 0;\
			\
			if (tcsetattr(THIS->_IN_FD, TCSANOW, &__CMT_RAW__) == 0)\
				THIS->_RAW = TRUE;\
			\
			if (THIS->_RAW && (WITH_MOUSE) && THIS->_ACTIVE)\
			{\
				LOCALMACRO__CMT_CONSOLE__OUT_TEXT(\
					LOCALMACRO__CMT_CONSOLE__MOUSE_ON\
				)\
				LOCALMACRO__CMT_CONSOLE__OUT_FLUSH\
			}\
		}\
	}\
	while (0);

#define LOCALMACRO__CMT_CONSOLE__RAW_LEAVE(WITH_MOUSE) \
	do\
	{\
		if (THIS->_RAW)\
		{\
			if ((WITH_MOUSE) && THIS->_ACTIVE)\
			{\
				LOCALMACRO__CMT_CONSOLE__OUT_TEXT(\
					LOCALMACRO__CMT_CONSOLE__MOUSE_OFF\
				)\
				LOCALMACRO__CMT_CONSOLE__OUT_FLUSH\
			}\
			\
			tcsetattr(THIS->_IN_FD, TCSANOW, &THIS->_TERMIOS);\
			THIS->_RAW = FALSE;\
		}\
	}\
	while (0);

/* WAIT UP TO MILLISECONDS FOR INPUT. RESULT: 1 READY, 0 TIMEOUT, -1 ERROR. */
/* SELECT() RATHER THAN POLL(): MACOS POLL() DOES NOT WORK ON TERMINALS. */
#define LOCALMACRO__CMT_CONSOLE__INPUT_READY(MILLISECONDS, RESULT) \
	do\
	{\
		fd_set			__CMT_READY_SET__;\
		struct timeval	__CMT_READY_TIME__;\
		\
		FD_ZERO(&__CMT_READY_SET__);\
		FD_SET(THIS->_IN_FD, &__CMT_READY_SET__);\
		__CMT_READY_TIME__.tv_sec = (long)(MILLISECONDS) / (long)1000;\
		__CMT_READY_TIME__.tv_usec = \
			((long)(MILLISECONDS) % (long)1000) * (long)1000;\
		(RESULT) = select(\
			THIS->_IN_FD + 1, &__CMT_READY_SET__, (fd_set *)0, (fd_set *)0,\
			&__CMT_READY_TIME__\
		);\
		\
		if ((RESULT) < 0)\
			(RESULT) = (errno == EINTR) ? 0 : -1;\
		else if ((RESULT) > 0)\
			(RESULT) = 1;\
	}\
	while (0);

#define LOCALMACRO__CMT_CONSOLE__PAUSE(MILLISECONDS) \
	do\
	{\
		struct timeval	__CMT_PAUSE__;\
		\
		__CMT_PAUSE__.tv_sec = (long)(MILLISECONDS) / (long)1000;\
		__CMT_PAUSE__.tv_usec = \
			((long)(MILLISECONDS) % (long)1000) * (long)1000;\
		select(0, (fd_set *)0, (fd_set *)0, (fd_set *)0, &__CMT_PAUSE__);\
	}\
	while (0);

/******************************************************************************\
|* ASK THE TERMINAL SOMETHING. REQUEST IS SENT, FOLLOWED BY THE CURSOR REPORT *|
|* REQUEST; BYTES ARE COLLECTED INTO BUFFER UNTIL THAT REPORT ARRIVES OR HALF *|
|* A SECOND PASSES WITHOUT ANY. FILL RECEIVES THE BYTE COUNT (0 IF THE        *|
|* TERMINAL COULD NOT BE ASKED AT ALL).                                       *|
\******************************************************************************/

#define LOCALMACRO__CMT_CONSOLE__QUERY(REQUEST, BUFFER, FILL) \
	do\
	{\
		const BOOLEAN	__CMT_QUERY_WAS_RAW__ = THIS->_RAW;\
		int				__CMT_QUERY_IDLE__ = 0;\
		int				__CMT_QUERY_DONE__ = 0;\
		\
		(FILL) = (unsigned)0;\
		\
		if (!THIS->_ACTIVE || !THIS->_INPUT)\
			break ;\
		\
		LOCALMACRO__CMT_CONSOLE__RAW_ENTER(0)\
		\
		if (!THIS->_RAW)\
			break ;\
		\
		LOCALMACRO__CMT_CONSOLE__OUT_TEXT(REQUEST)\
		LOCALMACRO__CMT_CONSOLE__OUT_TEXT("\033[6n")\
		LOCALMACRO__CMT_CONSOLE__OUT_FLUSH\
		\
		while (!__CMT_QUERY_DONE__ && (__CMT_QUERY_IDLE__ < 10))\
		{\
			int		__CMT_QUERY_READY__;\
			long	__CMT_QUERY_GOT__;\
			\
			LOCALMACRO__CMT_CONSOLE__INPUT_READY(50, __CMT_QUERY_READY__)\
			\
			if (__CMT_QUERY_READY__ < 0)\
				break ;\
			\
			if (!__CMT_QUERY_READY__)\
			{\
				++__CMT_QUERY_IDLE__;\
				continue ;\
			}\
			\
			if ((FILL) >= (unsigned int)(sizeof(BUFFER) - 1))\
				(FILL) = (unsigned)0;\
			/* NOT A REPLY WE CARE ABOUT; KEEP THE TAIL */\
			\
			__CMT_QUERY_GOT__ = (long)read(\
				THIS->_IN_FD, (BUFFER) + (FILL),\
				(size_t)(sizeof(BUFFER) - 1 - (FILL))\
			);\
			\
			if (__CMT_QUERY_GOT__ <= (long)0)\
			{\
				if ((__CMT_QUERY_GOT__ < (long)0) && (errno == EINTR))\
					continue ;\
				\
				break ;\
			}\
			\
			(FILL) += (unsigned int)__CMT_QUERY_GOT__;\
			(BUFFER)[(FILL)] = (char)0;\
			\
			{\
				/* DONE ONCE "ESC [ DIGITS ; DIGITS R" IS IN */\
				unsigned int	__CMT_QUERY_AT__;\
				\
				for (\
					__CMT_QUERY_AT__ = (unsigned)0;\
					__CMT_QUERY_AT__ + (unsigned)1 < (FILL);\
					++__CMT_QUERY_AT__\
				)\
				{\
					unsigned int	__CMT_QUERY_END__ = \
						__CMT_QUERY_AT__ + (unsigned)2;\
					\
					if (\
						((BUFFER)[__CMT_QUERY_AT__] != '\033') || \
						((BUFFER)[__CMT_QUERY_AT__ + (unsigned)1] != '[')\
					)\
						continue ;\
					\
					while (\
						(__CMT_QUERY_END__ < (FILL)) && (\
							(((BUFFER)[__CMT_QUERY_END__] >= '0') && \
								((BUFFER)[__CMT_QUERY_END__] <= '9')) || \
							((BUFFER)[__CMT_QUERY_END__] == ';')\
						)\
					)\
						++__CMT_QUERY_END__;\
					\
					if (\
						(__CMT_QUERY_END__ < (FILL)) && \
						((BUFFER)[__CMT_QUERY_END__] == 'R') && \
						(__CMT_QUERY_END__ > __CMT_QUERY_AT__ + (unsigned)2)\
					)\
						__CMT_QUERY_DONE__ = 1;\
				}\
			}\
		}\
		\
		if (!__CMT_QUERY_WAS_RAW__)\
			LOCALMACRO__CMT_CONSOLE__RAW_LEAVE(0)\
	}\
	while (0);

/******************************************************************************\
|* WALK EVERY "ESC [ ... FINAL" IN A REPLY BUFFER. FOR EACH ONE, BODY RUNS    *|
|* WITH:                                                                      *|
|*   __CMT_CSI_MARK__    '?', '<', '=', '>' OR 0                              *|
|*   __CMT_CSI_FINAL__   THE FINAL BYTE                                       *|
|*   __CMT_CSI_P__[4]    THE FIRST FOUR NUMERIC PARAMETERS (MISSING = 0)      *|
|*   __CMT_CSI_N__       HOW MANY PARAMETERS WERE PRESENT                     *|
\******************************************************************************/

#define LOCALMACRO__CMT_CONSOLE__EACH_CSI(BUFFER, FILL, BODY) \
	do\
	{\
		unsigned int	__CMT_CSI_AT__ = (unsigned)0;\
		\
		while (__CMT_CSI_AT__ + (unsigned)2 < (unsigned int)(FILL))\
		{\
			char			__CMT_CSI_MARK__ = (char)0;\
			char			__CMT_CSI_FINAL__ = (char)0;\
			unsigned long	__CMT_CSI_P__[4];\
			int				__CMT_CSI_N__ = 0;\
			unsigned int	__CMT_CSI_SCAN__;\
			\
			if (\
				((BUFFER)[__CMT_CSI_AT__] != '\033') || \
				((BUFFER)[__CMT_CSI_AT__ + (unsigned)1] != '[')\
			)\
			{\
				++__CMT_CSI_AT__;\
				continue ;\
			}\
			\
			__CMT_CSI_P__[0] = (unsigned long)0;\
			__CMT_CSI_P__[1] = (unsigned long)0;\
			__CMT_CSI_P__[2] = (unsigned long)0;\
			__CMT_CSI_P__[3] = (unsigned long)0;\
			__CMT_CSI_SCAN__ = __CMT_CSI_AT__ + (unsigned)2;\
			\
			if (\
				((BUFFER)[__CMT_CSI_SCAN__] == '?') || \
				((BUFFER)[__CMT_CSI_SCAN__] == '<') || \
				((BUFFER)[__CMT_CSI_SCAN__] == '=') || \
				((BUFFER)[__CMT_CSI_SCAN__] == '>')\
			)\
				__CMT_CSI_MARK__ = (BUFFER)[__CMT_CSI_SCAN__++];\
			\
			while (__CMT_CSI_SCAN__ < (unsigned int)(FILL))\
			{\
				const char	__CMT_CSI_BYTE__ = (BUFFER)[__CMT_CSI_SCAN__];\
				\
				if ((__CMT_CSI_BYTE__ >= '0') && (__CMT_CSI_BYTE__ <= '9'))\
				{\
					if (!__CMT_CSI_N__)\
						__CMT_CSI_N__ = 1;\
					\
					if (__CMT_CSI_N__ <= 4)\
						__CMT_CSI_P__[__CMT_CSI_N__ - 1] = \
							(__CMT_CSI_P__[__CMT_CSI_N__ - 1] * \
								(unsigned long)10) + \
							(unsigned long)(__CMT_CSI_BYTE__ - '0');\
				}\
				else if (\
					(__CMT_CSI_BYTE__ == ';') || (__CMT_CSI_BYTE__ == ':')\
				)\
					__CMT_CSI_N__ = (__CMT_CSI_N__ ? __CMT_CSI_N__ : 1) + 1;\
				else if (\
					(__CMT_CSI_BYTE__ >= 0X20) && (__CMT_CSI_BYTE__ <= 0X2F)\
				)\
					{/* INTERMEDIATE BYTES ('$', ' ') ARE NOT NEEDED */}\
				else\
				{\
					if (\
						(__CMT_CSI_BYTE__ >= 0X40) && \
						(__CMT_CSI_BYTE__ <= 0X7E)\
					)\
						__CMT_CSI_FINAL__ = __CMT_CSI_BYTE__;\
					\
					break ;\
				}\
				\
				++__CMT_CSI_SCAN__;\
			}\
			\
			if (__CMT_CSI_FINAL__)\
			{\
				BODY\
			}\
			\
			__CMT_CSI_AT__ = (\
				__CMT_CSI_FINAL__\
				? (__CMT_CSI_SCAN__ + (unsigned)1)\
				: __CMT_CSI_SCAN__\
			);\
		}\
	}\
	while (0);

/******************************************************************************\
|* TERMINAL FLAVOURS, FROM $TERM.                                             *|
|*                                                                            *|
|*   XTERM  ANYTHING XTERM-LIKE (XTERM, VTE, KONSOLE, KITTY, ALACRITTY, FOOT, *|
|*          WEZTERM, ITERM2, WINDOWS TERMINAL, TMUX, SCREEN, RXVT, ...).      *|
|*          ALL QUERIES ARE SAFE.                                             *|
|*   LINUX  THE LINUX TEXT CONSOLE. IT HAS NO DCS AND NO DECRQM (IT WOULD     *|
|*          PRINT PART OF THEM), AND ITS OWN CURSOR SIZE SEQUENCE.            *|
|*   OTHER  UNKNOWN: ONLY REQUESTS EVERY VT100 IGNORES OR ANSWERS ARE SENT.   *|
|*                                                                            *|
|* TERM=DUMB MEANS NO CURSOR CONTROL AT ALL; THE CONSTRUCTOR TREATS IT LIKE   *|
|* OUTPUT THAT IS NOT A TERMINAL (TEXT ONLY).                                 *|
\******************************************************************************/

#define LOCALMACRO__CMT_CONSOLE__FLAVOR_OTHER 0
#define LOCALMACRO__CMT_CONSOLE__FLAVOR_XTERM 1
#define LOCALMACRO__CMT_CONSOLE__FLAVOR_LINUX 2

/* RESULT = 1 IF THE STRING HAYSTACK CONTAINS THE LITERAL NEEDLE */
#define LOCALMACRO__CMT_CONSOLE__CONTAINS(HAYSTACK, NEEDLE, RESULT) \
	do\
	{\
		const char	*__CMT_HAY__ = (HAYSTACK);\
		\
		(RESULT) = 0;\
		\
		while (__CMT_HAY__ && *__CMT_HAY__ && !(RESULT))\
		{\
			const char	*__CMT_NEEDLE__ = (NEEDLE);\
			const char	*__CMT_MATCH__ = __CMT_HAY__;\
			\
			while (*__CMT_NEEDLE__ && (*__CMT_MATCH__ == *__CMT_NEEDLE__))\
			{\
				++__CMT_MATCH__;\
				++__CMT_NEEDLE__;\
			}\
			\
			if (!*__CMT_NEEDLE__)\
				(RESULT) = 1;\
			\
			++__CMT_HAY__;\
		}\
	}\
	while (0);

#define LOCALMACRO__CMT_CONSOLE__DETECT_FLAVOR \
	do\
	{\
		const char	*__CMT_TERM__ = getenv("TERM");\
		int			__CMT_TERM_HIT__ = 0;\
		\
		THIS->_FLAVOR = LOCALMACRO__CMT_CONSOLE__FLAVOR_OTHER;\
		\
		if (!__CMT_TERM__)\
			break ;\
		\
		if (\
			(__CMT_TERM__[0] == 'd') && (__CMT_TERM__[1] == 'u') && \
			(__CMT_TERM__[2] == 'm') && (__CMT_TERM__[3] == 'b')\
		)\
		{\
			THIS->_ACTIVE = FALSE;\
			break ;\
		}\
		\
		LOCALMACRO__CMT_CONSOLE__CONTAINS(\
			__CMT_TERM__, "linux", __CMT_TERM_HIT__\
		)\
		\
		if (__CMT_TERM_HIT__)\
		{\
			THIS->_FLAVOR = LOCALMACRO__CMT_CONSOLE__FLAVOR_LINUX;\
			break ;\
		}\
		\
		LOCALMACRO__CMT_CONSOLE__CONTAINS(\
			__CMT_TERM__, "xterm", __CMT_TERM_HIT__\
		)\
		\
		if (!__CMT_TERM_HIT__)\
			LOCALMACRO__CMT_CONSOLE__CONTAINS(\
				__CMT_TERM__, "kitty", __CMT_TERM_HIT__\
			)\
		\
		if (!__CMT_TERM_HIT__)\
			LOCALMACRO__CMT_CONSOLE__CONTAINS(\
				__CMT_TERM__, "alacritty", __CMT_TERM_HIT__\
			)\
		\
		if (!__CMT_TERM_HIT__)\
			LOCALMACRO__CMT_CONSOLE__CONTAINS(\
				__CMT_TERM__, "foot", __CMT_TERM_HIT__\
			)\
		\
		if (!__CMT_TERM_HIT__)\
			LOCALMACRO__CMT_CONSOLE__CONTAINS(\
				__CMT_TERM__, "wezterm", __CMT_TERM_HIT__\
			)\
		\
		if (!__CMT_TERM_HIT__)\
			LOCALMACRO__CMT_CONSOLE__CONTAINS(\
				__CMT_TERM__, "tmux", __CMT_TERM_HIT__\
			)\
		\
		if (!__CMT_TERM_HIT__)\
			LOCALMACRO__CMT_CONSOLE__CONTAINS(\
				__CMT_TERM__, "screen", __CMT_TERM_HIT__\
			)\
		\
		if (!__CMT_TERM_HIT__)\
			LOCALMACRO__CMT_CONSOLE__CONTAINS(\
				__CMT_TERM__, "rxvt", __CMT_TERM_HIT__\
			)\
		\
		if (!__CMT_TERM_HIT__)\
			LOCALMACRO__CMT_CONSOLE__CONTAINS(\
				__CMT_TERM__, "konsole", __CMT_TERM_HIT__\
			)\
		\
		if (!__CMT_TERM_HIT__)\
			LOCALMACRO__CMT_CONSOLE__CONTAINS(\
				__CMT_TERM__, "ghostty", __CMT_TERM_HIT__\
			)\
		\
		if (__CMT_TERM_HIT__)\
			THIS->_FLAVOR = LOCALMACRO__CMT_CONSOLE__FLAVOR_XTERM;\
	}\
	while (0);

/******************************************************************************\
|* CURSOR SIZE. WINDOWS DESCRIBES THE CARET AS A PERCENTAGE OF THE CELL.      *|
|*                                                                            *|
|*   XTERM/OTHER  DECSCUSR OFFERS BLOCK AND UNDERLINE: UP TO 50% IS AN        *|
|*                UNDERLINE, ABOVE THAT A BLOCK, BOTH BLINKING LIKE THE       *|
|*                WINDOWS CARET.                                              *|
|*   LINUX        "ESC [ ? N C" HAS FIVE HEIGHTS: UNDERSCORE, LOWER THIRD,    *|
|*                LOWER HALF, TWO THIRDS AND FULL BLOCK.                      *|
|*                                                                            *|
|* GET.CURSOR.SIZE ALWAYS REPORTS THE EXACT NUMBER THAT WAS ASKED FOR.        *|
\******************************************************************************/

#define LOCALMACRO__CMT_CONSOLE__SHAPE_OF(SIZE_VALUE) \
	(((unsigned long)(SIZE_VALUE) <= (unsigned long)50) ? 3 : 1)

#define LOCALMACRO__CMT_CONSOLE__SIZE_OF(SHAPE) \
	((((SHAPE) == 1) || ((SHAPE) == 2) || ((SHAPE) == 0)) \
		? (unsigned long)100 : (unsigned long)25)

#define LOCALMACRO__CMT_CONSOLE__LINUX_SHAPE_OF(SIZE_VALUE) \
	(((unsigned long)(SIZE_VALUE) <= (unsigned long)25) ? 2 : \
	(((unsigned long)(SIZE_VALUE) <= (unsigned long)40) ? 3 : \
	(((unsigned long)(SIZE_VALUE) <= (unsigned long)60) ? 4 : \
	(((unsigned long)(SIZE_VALUE) <= (unsigned long)85) ? 5 : 6))))

#define LOCALMACRO__CMT_CONSOLE__SEND_SIZE(SIZE_VALUE) \
	do\
	{\
		if (THIS->_FLAVOR == LOCALMACRO__CMT_CONSOLE__FLAVOR_LINUX)\
		{\
			LOCALMACRO__CMT_CONSOLE__OUT_TEXT("\033[?")\
			LOCALMACRO__CMT_CONSOLE__OUT_NUMBER(\
				LOCALMACRO__CMT_CONSOLE__LINUX_SHAPE_OF(SIZE_VALUE)\
			)\
			LOCALMACRO__CMT_CONSOLE__OUT_BYTE('c')\
		}\
		else\
		{\
			LOCALMACRO__CMT_CONSOLE__OUT_TEXT("\033[")\
			LOCALMACRO__CMT_CONSOLE__OUT_NUMBER(\
				LOCALMACRO__CMT_CONSOLE__SHAPE_OF(SIZE_VALUE)\
			)\
			LOCALMACRO__CMT_CONSOLE__OUT_TEXT(" q")\
		}\
	}\
	while (0);

/* THE SHAPE THE TERMINAL HAD BEFORE US (OR ITS DEFAULT, IF IT DID NOT SAY) */
#define LOCALMACRO__CMT_CONSOLE__SEND_START_SHAPE \
	do\
	{\
		if (THIS->_FLAVOR == LOCALMACRO__CMT_CONSOLE__FLAVOR_LINUX)\
			LOCALMACRO__CMT_CONSOLE__OUT_TEXT("\033[?0c")\
		else\
		{\
			LOCALMACRO__CMT_CONSOLE__OUT_TEXT("\033[")\
			LOCALMACRO__CMT_CONSOLE__OUT_NUMBER(\
				(THIS->_START_SHAPE >= 0) ? THIS->_START_SHAPE : 0\
			)\
			LOCALMACRO__CMT_CONSOLE__OUT_TEXT(" q")\
		}\
	}\
	while (0);

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
