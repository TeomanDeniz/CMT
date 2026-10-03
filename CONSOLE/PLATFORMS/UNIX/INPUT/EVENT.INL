#ifndef CONSOLE_HPP
#ifndef CONSOLE_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_H */
#endif /* !CONSOLE_HPP */

/******************************************************************************\
|* INPUT DECODING.                                                            *|
|*                                                                            *|
|* A TERMINAL SENDS BYTES; WINDOWS SENDS INPUT RECORDS. THIS FILE TURNS THE   *|
|* FORMER INTO THE LATTER'S VALUES, SO INPUT.GET.KEY AND INPUT.GET.MOUSE MEAN *|
|* THE SAME THING ON BOTH SYSTEMS:                                            *|
|*                                                                            *|
|*   INPUT.GET.KEY    (VIRTUAL_KEY_CODE << 16) | CHARACTER                    *|
|*                    VIRTUAL KEY CODES ARE THE WINDOWS VK_* VALUES (US       *|
|*                    LAYOUT FOR PUNCTUATION). NON ASCII TEXT ARRIVES WITH    *|
|*                    VIRTUAL KEY 0 AND ITS UNICODE CODE POINT IN THE LOW     *|
|*                    HALF. ALT IS NOT REPORTED; ALT+X IS JUST X.             *|
|*   INPUT.GET.MOUSE  (EVENT_FLAGS << 16) | BUTTON_STATE                      *|
|*                    EVENT_FLAGS: 1 MOVED, 2 DOUBLE CLICK, 4 WHEEL,          *|
|*                                 8 HORIZONTAL WHEEL                         *|
|*                    BUTTON_STATE: 1 LEFT, 2 RIGHT, 4 MIDDLE                 *|
|*                                                                            *|
|* A LONE ESC IS TOLD APART FROM THE START OF A SEQUENCE BY WAITING 30 MS FOR *|
|* MORE BYTES ("FORCE" BELOW).                                                *|
\******************************************************************************/

#define LOCALMACRO__CMT_CONSOLE__EVENT_NONE (unsigned)0X00
#define LOCALMACRO__CMT_CONSOLE__EVENT_KEY (unsigned)0X01
#define LOCALMACRO__CMT_CONSOLE__EVENT_MOUSE_MOVE (unsigned)0X02
#define LOCALMACRO__CMT_CONSOLE__EVENT_MOUSE_ACTION (unsigned)0X03
#define LOCALMACRO__CMT_CONSOLE__EVENT_RESIZE (unsigned)0X04
#define LOCALMACRO__CMT_CONSOLE__EVENT_FOCUS (unsigned)0X05
#define LOCALMACRO__CMT_CONSOLE__EVENT_OTHER (unsigned)0X06

#define LOCALMACRO__CMT_CONSOLE__VK_BACK (unsigned)0X08
#define LOCALMACRO__CMT_CONSOLE__VK_TAB (unsigned)0X09
#define LOCALMACRO__CMT_CONSOLE__VK_CLEAR (unsigned)0X0C
#define LOCALMACRO__CMT_CONSOLE__VK_RETURN (unsigned)0X0D
#define LOCALMACRO__CMT_CONSOLE__VK_ESCAPE (unsigned)0X1B
#define LOCALMACRO__CMT_CONSOLE__VK_SPACE (unsigned)0X20
#define LOCALMACRO__CMT_CONSOLE__VK_PRIOR (unsigned)0X21
#define LOCALMACRO__CMT_CONSOLE__VK_NEXT (unsigned)0X22
#define LOCALMACRO__CMT_CONSOLE__VK_END (unsigned)0X23
#define LOCALMACRO__CMT_CONSOLE__VK_HOME (unsigned)0X24
#define LOCALMACRO__CMT_CONSOLE__VK_LEFT (unsigned)0X25
#define LOCALMACRO__CMT_CONSOLE__VK_UP (unsigned)0X26
#define LOCALMACRO__CMT_CONSOLE__VK_RIGHT (unsigned)0X27
#define LOCALMACRO__CMT_CONSOLE__VK_DOWN (unsigned)0X28
#define LOCALMACRO__CMT_CONSOLE__VK_INSERT (unsigned)0X2D
#define LOCALMACRO__CMT_CONSOLE__VK_DELETE (unsigned)0X2E
#define LOCALMACRO__CMT_CONSOLE__VK_F1 (unsigned)0X70

/* VK_* FOR EVERY PRINTABLE ASCII CHARACTER FROM 0X20 TO 0X7E (US LAYOUT) */
#define LOCALMACRO__CMT_CONSOLE__VK_TABLE \
	"\040\061\336\063\064\065\067\336\071\060\070\273\274\275\276\277"\
	"\060\061\062\063\064\065\066\067\070\071\272\272\274\273\276\277"\
	"\062\101\102\103\104\105\106\107\110\111\112\113\114\115\116\117"\
	"\120\121\122\123\124\125\126\127\130\131\132\333\334\335\066\275"\
	"\300\101\102\103\104\105\106\107\110\111\112\113\114\115\116\117"\
	"\120\121\122\123\124\125\126\127\130\131\132\333\334\335\300"

#define LOCALMACRO__CMT_CONSOLE__VK_OF(CHARACTER) \
	(\
		(unsigned int)(\
			(const unsigned char *)LOCALMACRO__CMT_CONSOLE__VK_TABLE\
		)[(unsigned int)(CHARACTER) - (unsigned)0X20]\
	)

/* THE TERMINAL'S SUSPEND CHARACTER, WHERE THE SYSTEM HAS JOB CONTROL */
#ifdef SIGTSTP
#ifdef VSUSP
#define LOCALMACRO__CMT_CONSOLE__SUSPEND_SIGNAL SIGTSTP
#define LOCALMACRO__CMT_CONSOLE__SUSPEND_CHARACTER \
	((unsigned int)(unsigned char)THIS->_TERMIOS.c_cc[VSUSP])
#else /* !VSUSP */
#define LOCALMACRO__CMT_CONSOLE__SUSPEND_SIGNAL 0
#define LOCALMACRO__CMT_CONSOLE__SUSPEND_CHARACTER (unsigned)0X100
#endif /* VSUSP */
#else /* !SIGTSTP */
#define LOCALMACRO__CMT_CONSOLE__SUSPEND_SIGNAL 0
#define LOCALMACRO__CMT_CONSOLE__SUSPEND_CHARACTER (unsigned)0X100
#endif /* SIGTSTP */

/* A MONOTONIC CLOCK, FOR DOUBLE CLICKS. WITHOUT ONE THERE ARE NONE. */
#ifdef CLOCK_MONOTONIC
#define LOCALMACRO__CMT_CONSOLE__NOW(SECONDS, NANOSECONDS, OK) \
	do\
	{\
		struct timespec	__CMT_NOW__;\
		\
		(OK) = (clock_gettime(CLOCK_MONOTONIC, &__CMT_NOW__) == 0);\
		(SECONDS) = (long)__CMT_NOW__.tv_sec;\
		(NANOSECONDS) = (long)__CMT_NOW__.tv_nsec;\
	}\
	while (0);
#else /* !CLOCK_MONOTONIC */
#define LOCALMACRO__CMT_CONSOLE__NOW(SECONDS, NANOSECONDS, OK) \
	do\
	{\
		(OK) = 0;\
		(SECONDS) = (long)0;\
		(NANOSECONDS) = (long)0;\
	}\
	while (0);
#endif /* CLOCK_MONOTONIC */

/******************************************************************************\
|* PUTTING THE TERMINAL'S LOOK BACK (BEFORE A SIGNAL, AND IN THE DESTRUCTOR), *|
|* AND RE-APPLYING OURS (IF THE PROCESS COMES BACK FROM THE SIGNAL).          *|
\******************************************************************************/

#define LOCALMACRO__CMT_CONSOLE__LOOK_RESTORE \
	do\
	{\
		if (THIS->_ACTIVE)\
		{\
			LOCALMACRO__CMT_CONSOLE__OUT_TEXT("\033[0m")\
			\
			if (THIS->_SHAPED)\
			{\
				LOCALMACRO__CMT_CONSOLE__SEND_START_SHAPE\
			}\
			\
			if (THIS->GET.CURSOR.VISIBLE != THIS->_START_VISIBLE)\
			{\
				if (THIS->_START_VISIBLE)\
					LOCALMACRO__CMT_CONSOLE__OUT_TEXT("\033[?25h")\
				else\
					LOCALMACRO__CMT_CONSOLE__OUT_TEXT("\033[?25l")\
			}\
			\
			THIS->_TPEN = -1;\
			LOCALMACRO__CMT_CONSOLE__OUT_FLUSH\
		}\
	}\
	while (0);

#define LOCALMACRO__CMT_CONSOLE__LOOK_APPLY \
	do\
	{\
		if (THIS->_ACTIVE)\
		{\
			if (THIS->_SHAPED)\
			{\
				LOCALMACRO__CMT_CONSOLE__SEND_SIZE(THIS->GET.CURSOR.SIZE)\
			}\
			\
			if (THIS->GET.CURSOR.VISIBLE != THIS->_START_VISIBLE)\
			{\
				if (THIS->GET.CURSOR.VISIBLE)\
					LOCALMACRO__CMT_CONSOLE__OUT_TEXT("\033[?25h")\
				else\
					LOCALMACRO__CMT_CONSOLE__OUT_TEXT("\033[?25l")\
			}\
			\
			THIS->_TPEN = -1;\
			THIS->_TVALID = FALSE;\
			LOCALMACRO__CMT_CONSOLE__OUT_FLUSH\
		}\
	}\
	while (0);

/******************************************************************************\
|* THE EVENTS                                                                 *|
\******************************************************************************/

#define LOCALMACRO__CMT_CONSOLE__KEY_EVENT(VIRTUAL_KEY, CHARACTER, KIND) \
	do\
	{\
		const unsigned int	__CMT_KEY__ = (\
			(((unsigned int)(VIRTUAL_KEY)) << 16) | \
			(((unsigned int)(CHARACTER)) & (unsigned)0XFFFF)\
		);\
		\
		OBJECT__INITIALIZE (THIS->INPUT.GET.KEY, unsigned int) = __CMT_KEY__;\
		(KIND) = LOCALMACRO__CMT_CONSOLE__EVENT_KEY;\
		\
		if (THIS->EVENT.ON_KEY)\
			THIS->EVENT.ON_KEY(__CMT_KEY__);\
	}\
	while (0);

#define LOCALMACRO__CMT_CONSOLE__MOUSE_EVENT(FLAGS, AT_X, AT_Y, KIND) \
	do\
	{\
		const unsigned int	__CMT_MOUSE_FLAGS__ = (unsigned int)(FLAGS);\
		const unsigned int	__CMT_MOUSE__ = (\
			(__CMT_MOUSE_FLAGS__ << 16) | \
			(THIS->_BUTTONS & (unsigned)0XFFFF)\
		);\
		const unsigned int	__CMT_MOUSE_X__ = (unsigned int)(AT_X);\
		const unsigned int	__CMT_MOUSE_Y__ = (unsigned int)(AT_Y);\
		\
		OBJECT__INITIALIZE (THIS->INPUT.GET.MOUSE, unsigned int) = \
			__CMT_MOUSE__;\
		OBJECT__INITIALIZE (THIS->INPUT.GET.MOUSE_X, unsigned int) = \
			__CMT_MOUSE_X__;\
		OBJECT__INITIALIZE (THIS->INPUT.GET.MOUSE_Y, unsigned int) = \
			__CMT_MOUSE_Y__;\
		\
		if (__CMT_MOUSE_FLAGS__ & (unsigned)1)\
			(KIND) = LOCALMACRO__CMT_CONSOLE__EVENT_MOUSE_MOVE;\
		else\
			(KIND) = LOCALMACRO__CMT_CONSOLE__EVENT_MOUSE_ACTION;\
		\
		if (THIS->EVENT.ON_MOUSE)\
			THIS->EVENT.ON_MOUSE(\
				__CMT_MOUSE__, __CMT_MOUSE_X__, __CMT_MOUSE_Y__\
			);\
	}\
	while (0);

/* ONE MOUSE REPORT, ALREADY SPLIT INTO XTERM'S BUTTON CODE AND A CELL */
#define LOCALMACRO__CMT_CONSOLE__MOUSE_REPORT(CODE, AT_X, AT_Y, PRESS, KIND) \
	do\
	{\
		const unsigned int	__CMT_REPORT_CODE__ = (unsigned int)(CODE);\
		const unsigned int	__CMT_REPORT_X__ = (unsigned int)(AT_X);\
		const unsigned int	__CMT_REPORT_Y__ = (unsigned int)(AT_Y);\
		unsigned int		__CMT_REPORT_FLAGS__ = (unsigned)0;\
		\
		if (__CMT_REPORT_CODE__ & (unsigned)64)\
		{\
			if (!(PRESS))\
				break ;\
			\
			if (__CMT_REPORT_CODE__ & (unsigned)2)\
				__CMT_REPORT_FLAGS__ = (unsigned)8;\
			else\
				__CMT_REPORT_FLAGS__ = (unsigned)4;\
		}\
		else if (__CMT_REPORT_CODE__ & (unsigned)32)\
			__CMT_REPORT_FLAGS__ = (unsigned)1;\
		else\
		{\
			const unsigned int	__CMT_REPORT_BUTTON__ = \
				__CMT_REPORT_CODE__ & (unsigned)3;\
			const unsigned int	__CMT_REPORT_BIT__ = (\
				(__CMT_REPORT_BUTTON__ == (unsigned)0) ? (unsigned)1 : \
				((__CMT_REPORT_BUTTON__ == (unsigned)1) ? (unsigned)4 : \
				(\
					(__CMT_REPORT_BUTTON__ == (unsigned)2) ? (unsigned)2 : \
					(unsigned)0)\
				)\
			);\
			\
			if (!__CMT_REPORT_BIT__)\
				THIS->_BUTTONS = (unsigned)0;\
			else if (!(PRESS))\
				THIS->_BUTTONS = THIS->_BUTTONS & ~__CMT_REPORT_BIT__;\
			else\
			{\
				long	__CMT_CLICK_SECONDS__;\
				long	__CMT_CLICK_NANOSECONDS__;\
				int		__CMT_CLICK_OK__;\
				\
				THIS->_BUTTONS = THIS->_BUTTONS | __CMT_REPORT_BIT__;\
				LOCALMACRO__CMT_CONSOLE__NOW(\
					__CMT_CLICK_SECONDS__, __CMT_CLICK_NANOSECONDS__,\
					__CMT_CLICK_OK__\
				)\
				\
				if (__CMT_CLICK_OK__)\
				{\
					const long	__CMT_CLICK_ELAPSED__ = \
						((__CMT_CLICK_SECONDS__ - THIS->_CLICK_SECONDS) * \
							(long)1000) + \
						((__CMT_CLICK_NANOSECONDS__ - \
							THIS->_CLICK_NANOSECONDS) / (long)1000000);\
					\
					if (\
						(THIS->_CLICK_BUTTON == __CMT_REPORT_BIT__) && \
						(THIS->_CLICK_X == __CMT_REPORT_X__) && \
						(THIS->_CLICK_Y == __CMT_REPORT_Y__) && \
						(__CMT_CLICK_ELAPSED__ >= (long)0) && \
						(__CMT_CLICK_ELAPSED__ <= (long)500)\
					)\
					{\
						__CMT_REPORT_FLAGS__ = (unsigned)2;\
						THIS->_CLICK_BUTTON = (unsigned)0;\
					}\
					else\
					{\
						THIS->_CLICK_BUTTON = __CMT_REPORT_BIT__;\
						THIS->_CLICK_X = __CMT_REPORT_X__;\
						THIS->_CLICK_Y = __CMT_REPORT_Y__;\
						THIS->_CLICK_SECONDS = __CMT_CLICK_SECONDS__;\
						THIS->_CLICK_NANOSECONDS = __CMT_CLICK_NANOSECONDS__;\
					}\
				}\
			}\
		}\
		\
		LOCALMACRO__CMT_CONSOLE__MOUSE_EVENT(\
			__CMT_REPORT_FLAGS__, __CMT_REPORT_X__, __CMT_REPORT_Y__, KIND\
		)\
	}\
	while (0);

#define LOCALMACRO__CMT_CONSOLE__FOCUS_EVENT(FOCUSED, KIND) \
	do\
	{\
		const int	__CMT_FOCUS__ = (FOCUSED) ? 1 : 0;\
		\
		if (THIS->_FOCUS == __CMT_FOCUS__)\
			break ;\
		\
		THIS->_FOCUS = __CMT_FOCUS__;\
		(KIND) = LOCALMACRO__CMT_CONSOLE__EVENT_FOCUS;\
		\
		if (__CMT_FOCUS__)\
		{\
			if (THIS->EVENT.ON_FOCUS)\
				THIS->EVENT.ON_FOCUS();\
		}\
		else if (THIS->EVENT.ON_BLUR)\
			THIS->EVENT.ON_BLUR();\
	}\
	while (0);

/* "ESC [ 3 ; X ; Y T", THE ANSWER TO A WINDOW POSITION QUERY */
#define LOCALMACRO__CMT_CONSOLE__MOVE_EVENT(AT_X, AT_Y) \
	do\
	{\
		const int	__CMT_MOVED_X__ = (int)(AT_X);\
		const int	__CMT_MOVED_Y__ = (int)(AT_Y);\
		\
		if (\
			(__CMT_MOVED_X__ != THIS->GET.X) || \
			(__CMT_MOVED_Y__ != THIS->GET.Y)\
		)\
		{\
			OBJECT__INITIALIZE (THIS->GET.X, int) = __CMT_MOVED_X__;\
			OBJECT__INITIALIZE (THIS->GET.Y, int) = __CMT_MOVED_Y__;\
			\
			if (THIS->EVENT.ON_MOVE)\
				THIS->EVENT.ON_MOVE(__CMT_MOVED_X__, __CMT_MOVED_Y__);\
		}\
	}\
	while (0);

/******************************************************************************\
|* DECODE THE FIRST EVENT IN _IN_DATA.                                        *|
|*   USED  BYTES IT TOOK; 0 MEANS "INCOMPLETE, READ MORE FIRST"               *|
|*   KIND  WHAT IT WAS (EVENT_NONE FOR REPLIES AND UNKNOWN SEQUENCES)         *|
|*   FORCE NO MORE BYTES ARE COMING: DECODE WHAT IS THERE AS IT STANDS        *|
\******************************************************************************/

#define LOCALMACRO__CMT_CONSOLE__DECODE(USED, KIND, FORCE) \
	do\
	{\
		const unsigned char	*__CMT_IN__ = THIS->_IN_DATA;\
		const unsigned int	__CMT_IN_FILL__ = THIS->_IN_FILL;\
		const unsigned int	__CMT_LEAD__ = (unsigned int)__CMT_IN__[0];\
		\
		(USED) = (unsigned)0;\
		(KIND) = LOCALMACRO__CMT_CONSOLE__EVENT_NONE;\
		\
		if (!__CMT_IN_FILL__)\
			break ;\
		\
		/* CTRL+C, CTRL+\ AND CTRL+Z KEEP THEIR USUAL MEANING */\
		if (\
			THIS->_SAVED && \
			(THIS->_TERMIOS.c_lflag & ISIG) && \
			__CMT_LEAD__ && \
			(\
				(\
					__CMT_LEAD__ == \
					(unsigned int)(unsigned char)THIS->_TERMIOS.c_cc[VINTR]\
				) || (\
					__CMT_LEAD__ == \
					(unsigned int)(unsigned char)THIS->_TERMIOS.c_cc[VQUIT]\
				) || (\
					__CMT_LEAD__ == LOCALMACRO__CMT_CONSOLE__SUSPEND_CHARACTER\
				)\
			)\
		)\
		{\
			const int	__CMT_SIGNAL__ = \
				(
					__CMT_LEAD__ == (\
						(unsigned int)(unsigned char)THIS->_TERMIOS.c_cc[VINTR]\
					) ? SIGINT : (\
						(\
							__CMT_LEAD__ == \
							(unsigned int)(unsigned char)(\
								THIS->_TERMIOS.c_cc[VQUIT]\
							)\
						) ? SIGQUIT : LOCALMACRO__CMT_CONSOLE__SUSPEND_SIGNAL\
					)\
				);\
			\
			(USED) = (unsigned)1;\
			\
			if (__CMT_SIGNAL__)\
			{\
				LOCALMACRO__CMT_CONSOLE__RAW_LEAVE(1)\
				LOCALMACRO__CMT_CONSOLE__LOOK_RESTORE\
				raise(__CMT_SIGNAL__);\
				LOCALMACRO__CMT_CONSOLE__LOOK_APPLY\
				LOCALMACRO__CMT_CONSOLE__RAW_ENTER(1)\
			}\
			\
			break ;\
		}\
		\
		if (__CMT_LEAD__ == (unsigned)0X1B)\
		{\
			unsigned int	__CMT_SECOND__;\
			\
			if (__CMT_IN_FILL__ < (unsigned)2)\
			{\
				if (FORCE)\
				{\
					(USED) = (unsigned)1;\
					LOCALMACRO__CMT_CONSOLE__KEY_EVENT(\
						LOCALMACRO__CMT_CONSOLE__VK_ESCAPE, \
						(unsigned)0X1B, \
						KIND\
					)\
				}\
				\
				break ;\
			}\
			\
			__CMT_SECOND__ = (unsigned int)__CMT_IN__[1];\
			\
			if (__CMT_SECOND__ == (unsigned int)'[')\
			{\
				unsigned int	__CMT_SCAN__ = (unsigned)2;\
				unsigned int	__CMT_MARK__ = (unsigned)0;\
				unsigned int	__CMT_FINAL__ = (unsigned)0;\
				unsigned long	__CMT_P__[4];\
				int				__CMT_N__ = 0;\
				\
				__CMT_P__[0] = (unsigned long)0;\
				__CMT_P__[1] = (unsigned long)0;\
				__CMT_P__[2] = (unsigned long)0;\
				__CMT_P__[3] = (unsigned long)0;\
				\
				/* X10 MOUSE: ESC [ M B X Y, THREE RAW BYTES */\
				if ((__CMT_IN_FILL__ >= (unsigned)3) && (__CMT_IN__[2] == 'M'))\
				{\
					if (__CMT_IN_FILL__ < (unsigned)6)\
					{\
						if (FORCE)\
							(USED) = __CMT_IN_FILL__;\
						\
						break ;\
					}\
					\
					(USED) = (unsigned)6;\
					\
					{\
						const unsigned int	__CMT_X10_CODE__ = (\
							((unsigned int)__CMT_IN__[3] - (unsigned)32) & \
							(unsigned)0XFF\
						);\
						const unsigned int	__CMT_X10_X__ = (\
							((unsigned int)__CMT_IN__[4] > (unsigned)32) ? \
							((unsigned int)__CMT_IN__[4] - (unsigned)33) : \
							(unsigned)0\
						);\
						const unsigned int	__CMT_X10_Y__ = (\
							((unsigned int)__CMT_IN__[5] > (unsigned)32) ? \
							((unsigned int)__CMT_IN__[5] - (unsigned)33) : \
							(unsigned)0\
						);\
						\
						LOCALMACRO__CMT_CONSOLE__MOUSE_REPORT(\
							__CMT_X10_CODE__, \
							__CMT_X10_X__, \
							__CMT_X10_Y__, \
							(\
								(__CMT_X10_CODE__ & (unsigned)3) != \
								(unsigned)3\
							) || (__CMT_X10_CODE__ & (unsigned)96), \
							KIND\
						)\
					}\
					\
					break ;\
				}\
				\
				if (\
					(__CMT_IN_FILL__ > (unsigned)2) && (\
						(__CMT_IN__[2] == '<') || (__CMT_IN__[2] == '?') || \
						(__CMT_IN__[2] == '=') || (__CMT_IN__[2] == '>')\
					)\
				)\
					__CMT_MARK__ = (unsigned int)__CMT_IN__[__CMT_SCAN__++];\
				\
				while (__CMT_SCAN__ < __CMT_IN_FILL__)\
				{\
					const unsigned int	__CMT_BYTE__ = \
						(unsigned int)__CMT_IN__[__CMT_SCAN__];\
					\
					if ((__CMT_BYTE__ >= '0') && (__CMT_BYTE__ <= '9'))\
					{\
						if (!__CMT_N__)\
							__CMT_N__ = 1;\
						\
						if (__CMT_N__ <= 4)\
							__CMT_P__[__CMT_N__ - 1] = (\
								(\
									__CMT_P__[__CMT_N__ - 1] * \
									(unsigned long)10\
								) + (unsigned long)(__CMT_BYTE__ - '0')\
							);\
					}\
					else if ((__CMT_BYTE__ == ';') || (__CMT_BYTE__ == ':'))\
						__CMT_N__ = (__CMT_N__ ? __CMT_N__ : 1) + 1;\
					else if (\
						(__CMT_BYTE__ >= (unsigned)0X20) && \
						(__CMT_BYTE__ <= (unsigned)0X2F)\
					)\
					{/* VOID */}\
					else\
					{\
						if (\
							(__CMT_BYTE__ >= (unsigned)0X40) && \
							(__CMT_BYTE__ <= (unsigned)0X7E)\
						)\
							__CMT_FINAL__ = __CMT_BYTE__;\
						\
						break ;\
					}\
					\
					++__CMT_SCAN__;\
				}\
				\
				if (!__CMT_FINAL__)\
				{\
					if (__CMT_SCAN__ < __CMT_IN_FILL__)\
						(USED) = __CMT_SCAN__; /* BROKEN SEQUENCE, DROP IT */\
					else if (FORCE)\
						(USED) = __CMT_IN_FILL__;\
					\
					break ;\
				}\
				\
				(USED) = __CMT_SCAN__ + (unsigned)1;\
				\
				if (__CMT_MARK__ == (unsigned int)'<')\
				{\
					if (\
						(__CMT_FINAL__ == (unsigned int)'M') || \
						(__CMT_FINAL__ == (unsigned int)'m')\
					)\
					{\
						LOCALMACRO__CMT_CONSOLE__MOUSE_REPORT(\
							__CMT_P__[0],\
							__CMT_P__[1] ? \
							(__CMT_P__[1] - (unsigned long)1) : \
							(unsigned long)0,\
							__CMT_P__[2] ? \
							(__CMT_P__[2] - (unsigned long)1) : \
							(unsigned long)0,\
							(__CMT_FINAL__ == (unsigned int)'M'), KIND\
						)\
					}\
					\
					break ;\
				}\
				\
				if (__CMT_MARK__)\
					break ; /* A REPLY (DEVICE ATTRIBUTES, MODES): IGNORED */\
				\
				switch (__CMT_FINAL__)\
				{\
					case ('A'):\
					{\
						LOCALMACRO__CMT_CONSOLE__KEY_EVENT(\
							LOCALMACRO__CMT_CONSOLE__VK_UP, (unsigned)0, KIND\
						)\
						break ;\
					}\
					case ('B'):\
					{\
						LOCALMACRO__CMT_CONSOLE__KEY_EVENT(\
							LOCALMACRO__CMT_CONSOLE__VK_DOWN, (unsigned)0, KIND\
						)\
						break ;\
					}\
					case ('C'):\
					{\
						LOCALMACRO__CMT_CONSOLE__KEY_EVENT(\
							LOCALMACRO__CMT_CONSOLE__VK_RIGHT, \
							(unsigned)0, KIND\
						)\
						break ;\
					}\
					case ('D'):\
					{\
						LOCALMACRO__CMT_CONSOLE__KEY_EVENT(\
							LOCALMACRO__CMT_CONSOLE__VK_LEFT, (unsigned)0, KIND\
						)\
						break ;\
					}\
					case ('E'):\
					{\
						LOCALMACRO__CMT_CONSOLE__KEY_EVENT(\
							LOCALMACRO__CMT_CONSOLE__VK_CLEAR, \
							(unsigned)0, KIND\
						)\
						break ;\
					}\
					case ('H'):\
					{\
						LOCALMACRO__CMT_CONSOLE__KEY_EVENT(\
							LOCALMACRO__CMT_CONSOLE__VK_HOME, (unsigned)0, KIND\
						)\
						break ;\
					}\
					case ('F'):\
					{\
						LOCALMACRO__CMT_CONSOLE__KEY_EVENT(\
							LOCALMACRO__CMT_CONSOLE__VK_END, (unsigned)0, KIND\
						)\
						break ;\
					}\
					case ('Z'):\
					{\
						LOCALMACRO__CMT_CONSOLE__KEY_EVENT(\
							LOCALMACRO__CMT_CONSOLE__VK_TAB, \
							(unsigned)0X09, KIND\
						)\
						break ;\
					}\
					case ('P'):\
					case ('Q'):\
					case ('R'):\
					case ('S'):\
					{\
						/* "ESC [ 1 ; M P" IS F1 WITH MODIFIERS, BUT */\
						/* "ESC [ ROW ; COLUMN R" IS A LATE CURSOR REPORT */\
						if (\
							(__CMT_N__ < 2) || \
							(__CMT_P__[0] == (unsigned long)1)\
						)\
							LOCALMACRO__CMT_CONSOLE__KEY_EVENT(\
								LOCALMACRO__CMT_CONSOLE__VK_F1 + \
									(__CMT_FINAL__ - (unsigned int)'P'),\
								(unsigned)0, KIND\
							)\
						break ;\
					}\
					case ('I'):\
					{\
						LOCALMACRO__CMT_CONSOLE__FOCUS_EVENT(1, KIND)\
						break ;\
					}\
					case ('O'):\
					{\
						LOCALMACRO__CMT_CONSOLE__FOCUS_EVENT(0, KIND)\
						break ;\
					}\
					case ('t'):\
					{\
						if (\
							(__CMT_P__[0] == (unsigned long)3) && \
							(__CMT_N__ >= 3)\
						)\
							LOCALMACRO__CMT_CONSOLE__MOVE_EVENT(\
								__CMT_P__[1], __CMT_P__[2]\
							)\
						break ;\
					}\
					case ('~'):\
					{\
						const unsigned long	__CMT_TILDE__ = __CMT_P__[0];\
						unsigned int		__CMT_TILDE_KEY__ = (unsigned)0;\
						\
						if (\
							(__CMT_TILDE__ == (unsigned long)1) || \
							(__CMT_TILDE__ == (unsigned long)7)\
						)\
							__CMT_TILDE_KEY__ = \
								LOCALMACRO__CMT_CONSOLE__VK_HOME;\
						else if (__CMT_TILDE__ == (unsigned long)2)\
							__CMT_TILDE_KEY__ = \
								LOCALMACRO__CMT_CONSOLE__VK_INSERT;\
						else if (__CMT_TILDE__ == (unsigned long)3)\
							__CMT_TILDE_KEY__ = \
								LOCALMACRO__CMT_CONSOLE__VK_DELETE;\
						else if (\
							(__CMT_TILDE__ == (unsigned long)4) || \
							(__CMT_TILDE__ == (unsigned long)8)\
						)\
							__CMT_TILDE_KEY__ = \
								LOCALMACRO__CMT_CONSOLE__VK_END;\
						else if (__CMT_TILDE__ == (unsigned long)5)\
							__CMT_TILDE_KEY__ = \
								LOCALMACRO__CMT_CONSOLE__VK_PRIOR;\
						else if (__CMT_TILDE__ == (unsigned long)6)\
							__CMT_TILDE_KEY__ = \
								LOCALMACRO__CMT_CONSOLE__VK_NEXT;\
						else if (\
							(__CMT_TILDE__ >= (unsigned long)11) && \
							(__CMT_TILDE__ <= (unsigned long)15)\
						)\
							__CMT_TILDE_KEY__ = (\
								LOCALMACRO__CMT_CONSOLE__VK_F1 + \
								(unsigned int)(\
									__CMT_TILDE__ - (unsigned long)11\
								)\
							);\
						else if (\
							(__CMT_TILDE__ >= (unsigned long)17) && \
							(__CMT_TILDE__ <= (unsigned long)21)\
						)\
							__CMT_TILDE_KEY__ = (\
								LOCALMACRO__CMT_CONSOLE__VK_F1 + \
								(unsigned)5 + (unsigned int)(\
									__CMT_TILDE__ - (unsigned long)17\
								)\
							);\
						else if (\
							(__CMT_TILDE__ >= (unsigned long)23) && \
							(__CMT_TILDE__ <= (unsigned long)24)\
						)\
							__CMT_TILDE_KEY__ = (\
								LOCALMACRO__CMT_CONSOLE__VK_F1 + \
								(unsigned)10 + (unsigned int)(\
									__CMT_TILDE__ - (unsigned long)23|
								)\
							);\
						\
						if (__CMT_TILDE_KEY__)\
							LOCALMACRO__CMT_CONSOLE__KEY_EVENT(\
								__CMT_TILDE_KEY__, (unsigned)0, KIND\
							)\
						\
						break ;\
					}\
					default:\
						break ;\
				}\
				\
				break ;\
			}\
			\
			if (__CMT_SECOND__ == (unsigned int)'O')\
			{\
				unsigned int	__CMT_THIRD__;\
				unsigned int	__CMT_SS3_KEY__ = (unsigned)0;\
				unsigned int	__CMT_SS3_CHAR__ = (unsigned)0;\
				\
				if (__CMT_IN_FILL__ < (unsigned)3)\
				{\
					if (FORCE)\
						(USED) = (unsigned)1; /* ALT + O IS JUST O */\
					\
					break ;\
				}\
				\
				(USED) = (unsigned)3;\
				__CMT_THIRD__ = (unsigned int)__CMT_IN__[2];\
				\
				if (__CMT_THIRD__ == (unsigned int)'A')\
					__CMT_SS3_KEY__ = LOCALMACRO__CMT_CONSOLE__VK_UP;\
				else if (__CMT_THIRD__ == (unsigned int)'B')\
					__CMT_SS3_KEY__ = LOCALMACRO__CMT_CONSOLE__VK_DOWN;\
				else if (__CMT_THIRD__ == (unsigned int)'C')\
					__CMT_SS3_KEY__ = LOCALMACRO__CMT_CONSOLE__VK_RIGHT;\
				else if (__CMT_THIRD__ == (unsigned int)'D')\
					__CMT_SS3_KEY__ = LOCALMACRO__CMT_CONSOLE__VK_LEFT;\
				else if (__CMT_THIRD__ == (unsigned int)'H')\
					__CMT_SS3_KEY__ = LOCALMACRO__CMT_CONSOLE__VK_HOME;\
				else if (__CMT_THIRD__ == (unsigned int)'F')\
					__CMT_SS3_KEY__ = LOCALMACRO__CMT_CONSOLE__VK_END;\
				else if (\
					(__CMT_THIRD__ >= (unsigned int)'P') && \
					(__CMT_THIRD__ <= (unsigned int)'S')\
				)\
					__CMT_SS3_KEY__ = LOCALMACRO__CMT_CONSOLE__VK_F1 + \
						(__CMT_THIRD__ - (unsigned int)'P');\
				else if (__CMT_THIRD__ == (unsigned int)'M')\
				{\
					__CMT_SS3_KEY__ = LOCALMACRO__CMT_CONSOLE__VK_RETURN;\
					__CMT_SS3_CHAR__ = (unsigned)0X0D;\
				}\
				else\
				{\
					(USED) = (unsigned)1; /* FOLLOWED BY SOMETHING ELSE */\
					break ;\
				}\
				\
				LOCALMACRO__CMT_CONSOLE__KEY_EVENT(\
					__CMT_SS3_KEY__, __CMT_SS3_CHAR__, KIND\
				)\
				break ;\
			}\
			\
			if (\
				(__CMT_SECOND__ == (unsigned int)'P') || \
				(__CMT_SECOND__ == (unsigned int)']')\
			)\
			{\
				/* A LATE DCS / OSC REPLY STARTS WITH A DIGIT OR '$' ; */\
				/* ANYTHING ELSE IS ALT+P OR ALT+]                     */\
				unsigned int	__CMT_STRING_AT__ = (unsigned)2;\
				\
				if (__CMT_IN_FILL__ < (unsigned)3)\
				{\
					if (FORCE)\
						(USED) = (unsigned)1;\
					\
					break ;\
				}\
				\
				if (\
					!(\
						((__CMT_IN__[2] >= '0') && (__CMT_IN__[2] <= '9')) || \
						(__CMT_IN__[2] == '$') || (__CMT_IN__[2] == '>')\
					)\
				)\
				{\
					(USED) = (unsigned)1;\
					break ;\
				}\
				\
				while (__CMT_STRING_AT__ < __CMT_IN_FILL__)\
				{\
					if (__CMT_IN__[__CMT_STRING_AT__] == (unsigned)0X07)\
					{\
						(USED) = __CMT_STRING_AT__ + (unsigned)1;\
						break ;\
					}\
					\
					if (\
						(__CMT_IN__[__CMT_STRING_AT__] == (unsigned)0X1B) && \
						(__CMT_STRING_AT__ + (unsigned)1 < __CMT_IN_FILL__) && \
						(__CMT_IN__[__CMT_STRING_AT__ + (unsigned)1] == '\\')\
					)\
					{\
						(USED) = __CMT_STRING_AT__ + (unsigned)2;\
						break ;\
					}\
					\
					++__CMT_STRING_AT__;\
				}\
				\
				if (!(USED) && (FORCE))\
					(USED) = __CMT_IN_FILL__;\
				\
				break ;\
			}\
			\
			/* ESC ESC, OR ALT+KEY: THE ESC GOES, THE KEY FOLLOWS ON ITS OWN */\
			(USED) = (unsigned)1;\
			\
			if (__CMT_SECOND__ == (unsigned)0X1B)\
				LOCALMACRO__CMT_CONSOLE__KEY_EVENT(\
					LOCALMACRO__CMT_CONSOLE__VK_ESCAPE, (unsigned)0X1B, KIND\
				)\
			\
			break ;\
		}\
		\
		if (\
			(__CMT_LEAD__ >= (unsigned)0XC2) && \
			(__CMT_LEAD__ <= (unsigned)0XF4)\
		)\
		{\
			const unsigned int	__CMT_UTF8_NEED__ = (\
				(__CMT_LEAD__ >= (unsigned)0XF0) ? \
				(unsigned)3 : (\
					(__CMT_LEAD__ >= (unsigned)0XE0) ? \
					(unsigned)2 : (unsigned)1\
				)\
			);\
			unsigned long		__CMT_UTF8_POINT__ = (unsigned long)(\
				__CMT_LEAD__ & (\
					(__CMT_UTF8_NEED__ == (unsigned)1) ? (unsigned)0X1F : \
					(\
						(__CMT_UTF8_NEED__ == (unsigned)2) ? (unsigned)0X0F : \
						(unsigned)0X07\
					)\
				)\
			);\
			unsigned int		__CMT_UTF8_AT__ = (unsigned)1;\
			\
			if (__CMT_IN_FILL__ <= __CMT_UTF8_NEED__)\
			{\
				if (FORCE)\
				{\
					(USED) = (unsigned)1;\
					LOCALMACRO__CMT_CONSOLE__KEY_EVENT(\
						(unsigned)0, __CMT_LEAD__, KIND\
					)\
				}\
				\
				break ;\
			}\
			\
			while (__CMT_UTF8_AT__ <= __CMT_UTF8_NEED__)\
			{\
				if (\
					(__CMT_IN__[__CMT_UTF8_AT__] & (unsigned)0XC0) != \
					(unsigned)0X80\
				)\
					break ;\
				\
				__CMT_UTF8_POINT__ = (\
					(__CMT_UTF8_POINT__ << 6) | \
					(unsigned long)(\
						__CMT_IN__[__CMT_UTF8_AT__] & (unsigned)0X3F\
					)\
				);\
				++__CMT_UTF8_AT__;\
			}\
			\
			if (__CMT_UTF8_AT__ <= __CMT_UTF8_NEED__)\
			{\
				(USED) = (unsigned)1;\
				LOCALMACRO__CMT_CONSOLE__KEY_EVENT(\
					(unsigned)0, __CMT_LEAD__, KIND\
				)\
				break ;\
			}\
			\
			(USED) = __CMT_UTF8_NEED__ + (unsigned)1;\
			\
			if (__CMT_UTF8_POINT__ > (unsigned long)0XFFFF)\
				__CMT_UTF8_POINT__ = (unsigned long)0XFFFD;\
			\
			LOCALMACRO__CMT_CONSOLE__KEY_EVENT(\
				(unsigned)0, (unsigned int)__CMT_UTF8_POINT__, KIND\
			)\
			break ;\
		}\
		\
		(USED) = 1U;\
		\
		if (\
			(__CMT_LEAD__ == (unsigned)0X0D) || \
			(__CMT_LEAD__ == (unsigned)0X0A)\
		)\
			LOCALMACRO__CMT_CONSOLE__KEY_EVENT(\
				LOCALMACRO__CMT_CONSOLE__VK_RETURN, (unsigned)0X0D, KIND\
			)\
		else if (__CMT_LEAD__ == (unsigned)0X09)\
			LOCALMACRO__CMT_CONSOLE__KEY_EVENT(\
				LOCALMACRO__CMT_CONSOLE__VK_TAB, (unsigned)0X09, KIND\
			)\
		else if (\
			(__CMT_LEAD__ == (unsigned)0X7F) || \
			(__CMT_LEAD__ == (unsigned)0X08)\
		)\
			LOCALMACRO__CMT_CONSOLE__KEY_EVENT(\
				LOCALMACRO__CMT_CONSOLE__VK_BACK, (unsigned)0X08, KIND\
			)\
		else if (__CMT_LEAD__ == (unsigned)0X00)\
			LOCALMACRO__CMT_CONSOLE__KEY_EVENT(\
				LOCALMACRO__CMT_CONSOLE__VK_SPACE, (unsigned)0, KIND\
			)\
		else if (__CMT_LEAD__ <= (unsigned)0X1A)\
			LOCALMACRO__CMT_CONSOLE__KEY_EVENT(\
				(unsigned)0X40 + __CMT_LEAD__, __CMT_LEAD__, KIND\
			)\
		else if (__CMT_LEAD__ == (unsigned)0X1C)\
			LOCALMACRO__CMT_CONSOLE__KEY_EVENT(\
				(unsigned)0XDC, __CMT_LEAD__, KIND\
			)\
		else if (__CMT_LEAD__ == (unsigned)0X1D)\
			LOCALMACRO__CMT_CONSOLE__KEY_EVENT(\
				(unsigned)0XDD, __CMT_LEAD__, KIND\
			)\
		else if (__CMT_LEAD__ == (unsigned)0X1E)\
			LOCALMACRO__CMT_CONSOLE__KEY_EVENT(\
				(unsigned)0X36, __CMT_LEAD__, KIND\
			)\
		else if (__CMT_LEAD__ == (unsigned)0X1F)\
			LOCALMACRO__CMT_CONSOLE__KEY_EVENT(\
				(unsigned)0XBD, __CMT_LEAD__, KIND\
			)\
		else if (__CMT_LEAD__ < (unsigned)0X7F)\
			LOCALMACRO__CMT_CONSOLE__KEY_EVENT(\
				LOCALMACRO__CMT_CONSOLE__VK_OF(__CMT_LEAD__), \
				__CMT_LEAD__, \
				KIND\
			)\
		else\
			LOCALMACRO__CMT_CONSOLE__KEY_EVENT((unsigned)0, __CMT_LEAD__, KIND)\
	}\
	while (0);

/******************************************************************************\
|* THE LOOP EVERY INPUT.WAIT.* RUNS. IT PUMPS EVENTS (FIRING THE CALLBACKS)   *|
|* UNTIL ONE MAKES STOP TRUE. STOP READS THE VARIABLE KIND.                   *|
|*                                                                            *|
|* A RESIZE IS NOTICED BY ASKING THE TERMINAL ITS SIZE EVERY 100 MS WHILE     *|
|* WAITING, SO NO SIGNAL HANDLER IS NEEDED. A WINDOW MOVE IS ASKED FOR ONCE   *|
|* PER WAIT, AND ONLY IF SOMEBODY LISTENS TO ON_MOVE.                         *|
\******************************************************************************/

#define LOCALMACRO__CMT_CONSOLE__WAIT_FOR(STOP) \
	do\
	{\
		unsigned int	KIND = LOCALMACRO__CMT_CONSOLE__EVENT_NONE;\
		unsigned int	__CMT_WAIT_USED__;\
		int				__CMT_WAIT_FORCE__ = 0;\
		int				__CMT_WAIT_READY__;\
		long			__CMT_WAIT_GOT__;\
		const BOOLEAN	__CMT_WAIT_WAS_RAW__ = THIS->_RAW;\
		\
		if (!THIS->_INPUT)\
			break ; /* NO KEYBOARD: NOTHING TO WAIT FOR, JUST LIKE WINDOWS */\
		\
		LOCALMACRO__CMT_CONSOLE__ENTER\
		LOCALMACRO__CMT_CONSOLE__SETTLE\
		LOCALMACRO__CMT_CONSOLE__RAW_ENTER(1)\
		\
		if (!THIS->_RAW)\
			break ;\
		\
		if (THIS->EVENT.ON_MOVE && THIS->_ACTIVE)\
		{\
			LOCALMACRO__CMT_CONSOLE__OUT_TEXT("\033[13t")\
			LOCALMACRO__CMT_CONSOLE__OUT_FLUSH\
		}\
		\
		while (1)\
		{\
			KIND = LOCALMACRO__CMT_CONSOLE__EVENT_NONE;\
			LOCALMACRO__CMT_CONSOLE__SYNC_SIZE\
			\
			if (\
				(THIS->GET.WIDTH != THIS->_EVENT_W) || \
				(THIS->GET.HEIGHT != THIS->_EVENT_H)\
			)\
			{\
				THIS->_EVENT_W = THIS->GET.WIDTH;\
				THIS->_EVENT_H = THIS->GET.HEIGHT;\
				KIND = LOCALMACRO__CMT_CONSOLE__EVENT_RESIZE;\
				\
				if (THIS->EVENT.ON_RESIZE)\
					THIS->EVENT.ON_RESIZE(THIS->GET.WIDTH, THIS->GET.HEIGHT);\
				\
				if (STOP)\
					break ;\
			}\
			\
			if (THIS->_IN_FILL)\
			{\
				LOCALMACRO__CMT_CONSOLE__DECODE(\
					__CMT_WAIT_USED__, KIND, __CMT_WAIT_FORCE__\
				)\
				\
				if (__CMT_WAIT_USED__)\
				{\
					unsigned int	__CMT_WAIT_MOVE__;\
					\
					if (__CMT_WAIT_USED__ > THIS->_IN_FILL)\
						__CMT_WAIT_USED__ = THIS->_IN_FILL;\
					\
					for (\
						__CMT_WAIT_MOVE__ = __CMT_WAIT_USED__;\
						__CMT_WAIT_MOVE__ < THIS->_IN_FILL;\
						++__CMT_WAIT_MOVE__\
					)\
						THIS->_IN_DATA[__CMT_WAIT_MOVE__ - __CMT_WAIT_USED__] = \
							THIS->_IN_DATA[__CMT_WAIT_MOVE__];\
					\
					THIS->_IN_FILL -= __CMT_WAIT_USED__;\
					__CMT_WAIT_FORCE__ = 0;\
					\
					if (\
						(KIND != LOCALMACRO__CMT_CONSOLE__EVENT_NONE) && (STOP)\
					)\
						break ;\
					\
					continue ;\
				}\
			}\
			\
			if (THIS->_IN_FILL >= (unsigned int)sizeof(THIS->_IN_DATA))\
			{\
				__CMT_WAIT_FORCE__ = 1;\
				continue ;\
			}\
			\
			LOCALMACRO__CMT_CONSOLE__INPUT_READY(\
				THIS->_IN_FILL ? 30 : 100, __CMT_WAIT_READY__\
			)\
			\
			if (__CMT_WAIT_READY__ < 0)\
				break ;\
			\
			if (!__CMT_WAIT_READY__)\
			{\
				if (THIS->_IN_FILL)\
					__CMT_WAIT_FORCE__ = 1;\
				\
				continue ;\
			}\
			\
			__CMT_WAIT_GOT__ = (long)read(\
				THIS->_IN_FD, THIS->_IN_DATA + THIS->_IN_FILL,\
				(size_t)(sizeof(THIS->_IN_DATA) - THIS->_IN_FILL)\
			);\
			\
			if (__CMT_WAIT_GOT__ > (long)0)\
				THIS->_IN_FILL += (unsigned int)__CMT_WAIT_GOT__;\
			else if (__CMT_WAIT_GOT__ == (long)0)\
				break ; /* THE TERMINAL HUNG UP */\
			else if ((errno != EINTR) && (errno != EAGAIN))\
				break ;\
		}\
		\
		if (!__CMT_WAIT_WAS_RAW__)\
			LOCALMACRO__CMT_CONSOLE__RAW_LEAVE(1)\
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
