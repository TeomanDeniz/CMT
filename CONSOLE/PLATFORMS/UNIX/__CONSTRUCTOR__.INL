#ifndef CONSOLE_HPP
#ifndef CONSOLE_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_H */
#endif /* !CONSOLE_HPP */

#ifndef OBJECT__INITIALIZE
#define OBJECT__INITIALIZE(VARIABLE, TYPE) *(TYPE *)(&VARIABLE)
#endif /* !OBJECT__INITIALIZE */

/******************************************************************************\
|* OUTPUT IS STDOUT. IF STDOUT IS NOT A TERMINAL (REDIRECTED TO A FILE OR A   *|
|* PIPE) GET.ACTIVE IS FALSE: LOG() AND PRINT() STILL WRITE THEIR TEXT, SO    *|
|* THE FILE GETS THE MESSAGES, AND EVERYTHING VISUAL IS A QUIET NO-OP.        *|
|*                                                                            *|
|* KEYS COME FROM STDIN IF IT IS A TERMINAL, OTHERWISE FROM /DEV/TTY, SO      *|
|* "ECHO DATA | PROGRAM" CAN STILL WAIT FOR A KEY PRESS.                      *|
|*                                                                            *|
|* THEN THE TERMINAL IS ASKED, IN ONE ROUND TRIP, WHERE THE CURSOR IS, WHETHER*|
|* IT IS VISIBLE, WHICH SHAPE IT HAS, AND HOW BIG AND WHERE THE WINDOW IS.    *|
|* WHATEVER IT DOES NOT ANSWER KEEPS A SENSIBLE DEFAULT.                      *|
\******************************************************************************/

#define LOCALFUNCTION__CMT_CONSOLE_CONTENT \
	THIS->EVENT.ON_RESIZE = 0;\
	THIS->EVENT.ON_MOVE = 0;\
	THIS->EVENT.ON_CLOSE = 0;\
	THIS->EVENT.ON_FOCUS = 0;\
	THIS->EVENT.ON_BLUR = 0;\
	THIS->EVENT.ON_KEY = 0;\
	THIS->EVENT.ON_MOUSE = 0;\
	\
	OBJECT__INITIALIZE (THIS->INPUT.GET.KEY, unsigned int) = (unsigned)0;\
	OBJECT__INITIALIZE (THIS->INPUT.GET.MOUSE, unsigned int) = (unsigned)0;\
	OBJECT__INITIALIZE (THIS->INPUT.GET.MOUSE_X, unsigned int) = (unsigned)0;\
	OBJECT__INITIALIZE (THIS->INPUT.GET.MOUSE_Y, unsigned int) = (unsigned)0;\
	\
	THIS->_OUT_FD = 1;\
	THIS->_IN_FD = 0;\
	THIS->_FLAVOR = LOCALMACRO__CMT_CONSOLE__FLAVOR_OTHER;\
	THIS->_ACTIVE = (BOOLEAN)(isatty(THIS->_OUT_FD) == 1);\
	LOCALMACRO__CMT_CONSOLE__DETECT_FLAVOR\
	THIS->_INPUT = FALSE;\
	THIS->_OWN_IN = FALSE;\
	THIS->_SAVED = FALSE;\
	THIS->_RAW = FALSE;\
	THIS->_OUT_DATA = (PTR)0;\
	THIS->_OUT_FILL = (unsigned long)0;\
	THIS->_OUT_CAPACITY = (unsigned long)0;\
	THIS->_PUSH_DEPTH = (unsigned)0;\
	THIS->_BATCH = (unsigned)0;\
	THIS->_SCRATCH_DATA = (PTR)0;\
	THIS->_SCRATCH_SIZE = (unsigned long)0;\
	THIS->_CELLS = (PTR)0;\
	THIS->_ATTRS = (PTR)0;\
	THIS->_CELLS_W = (unsigned)0;\
	THIS->_CELLS_H = (unsigned)0;\
	THIS->_WRAP = FALSE;\
	THIS->_TWRAP = FALSE;\
	THIS->_TVALID = FALSE;\
	THIS->_TX = 0;\
	THIS->_TY = 0;\
	THIS->_TPEN = -1;\
	THIS->_GLYPH = (unsigned long)0;\
	THIS->_GLYPH_NEED = 0;\
	THIS->_GLYPH_HAVE = 0;\
	THIS->_ESC_STATE = LOCALMACRO__CMT_CONSOLE__ESC_TEXT;\
	THIS->_ESC_FILL = (unsigned)0;\
	THIS->_IN_FILL = (unsigned)0;\
	THIS->_BUTTONS = (unsigned)0;\
	THIS->_WANT = (unsigned)0;\
	THIS->_FOCUS = 1;\
	THIS->_START_SHAPE = -1;\
	THIS->_START_VISIBLE = TRUE;\
	THIS->_SHAPED = FALSE;\
	THIS->_TITLED = FALSE;\
	THIS->_CLICK_SECONDS = (long)0;\
	THIS->_CLICK_NANOSECONDS = (long)0;\
	THIS->_CLICK_X = (unsigned)0;\
	THIS->_CLICK_Y = (unsigned)0;\
	THIS->_CLICK_BUTTON = (unsigned)0;\
	THIS->HIGHLIGHTER = TRUE;\
	\
	OBJECT__INITIALIZE (THIS->GET.ACTIVE, BOOLEAN) = THIS->_ACTIVE;\
	OBJECT__INITIALIZE (THIS->GET.TERMINAL, BOOLEAN) = THIS->_ACTIVE;\
	OBJECT__INITIALIZE (THIS->GET.WIDTH, unsigned int) = (unsigned)80;\
	OBJECT__INITIALIZE (THIS->GET.HEIGHT, unsigned int) = (unsigned)24;\
	OBJECT__INITIALIZE (THIS->GET.COLUMNS, unsigned int) = (unsigned)80;\
	OBJECT__INITIALIZE (THIS->GET.ROWS, unsigned int) = (unsigned)24;\
	OBJECT__INITIALIZE (THIS->GET.PIXEL_WIDTH, unsigned int) = (unsigned)0;\
	OBJECT__INITIALIZE (THIS->GET.PIXEL_HEIGHT, unsigned int) = (unsigned)0;\
	OBJECT__INITIALIZE (THIS->GET.X, int) = 0;\
	OBJECT__INITIALIZE (THIS->GET.Y, int) = 0;\
	OBJECT__INITIALIZE (THIS->GET.COLOR, unsigned int) = \
		LOCALMACRO__CMT_CONSOLE__NATIVE_COLOR;\
	OBJECT__INITIALIZE (THIS->GET.DEFAULT_COLOR, unsigned int) = \
		LOCALMACRO__CMT_CONSOLE__NATIVE_COLOR;\
	OBJECT__INITIALIZE (THIS->GET.CURSOR.COLOR, unsigned int) = \
		LOCALMACRO__CMT_CONSOLE__NATIVE_COLOR;\
	OBJECT__INITIALIZE (THIS->GET.CURSOR.DEFAULT_COLOR, unsigned int) = \
		LOCALMACRO__CMT_CONSOLE__NATIVE_COLOR;\
	OBJECT__INITIALIZE (THIS->GET.CURSOR.X, int) = 0;\
	OBJECT__INITIALIZE (THIS->GET.CURSOR.Y, int) = 0;\
	OBJECT__INITIALIZE (THIS->GET.CURSOR.SIZE, unsigned long) = \
		(unsigned long)100;\
	OBJECT__INITIALIZE (THIS->GET.CURSOR.VISIBLE, BOOLEAN) = TRUE;\
	\
	if (isatty(THIS->_IN_FD) == 1)\
		THIS->_INPUT = TRUE;\
	else\
	{\
		const int	__CMT_TTY__ = open("/dev/tty", O_RDWR | O_NOCTTY);\
		\
		if (__CMT_TTY__ >= 0)\
		{\
			THIS->_IN_FD = __CMT_TTY__;\
			THIS->_OWN_IN = TRUE;\
			THIS->_INPUT = TRUE;\
		}\
	}\
	\
	if (THIS->_INPUT && (tcgetattr(THIS->_IN_FD, &THIS->_TERMIOS) == 0))\
		THIS->_SAVED = TRUE;\
	\
	THIS->_INPUT = THIS->_SAVED;\
	\
	do\
	{\
		unsigned int	__CMT_START_COLUMNS__ = (unsigned)0;\
		unsigned int	__CMT_START_ROWS__ = (unsigned)0;\
		unsigned int	__CMT_START_XPIXELS__ = (unsigned)0;\
		unsigned int	__CMT_START_YPIXELS__ = (unsigned)0;\
		int				__CMT_START_OK__ = 0;\
		\
		if (THIS->_ACTIVE)\
		{\
			LOCALMACRO__CMT_CONSOLE__WINDOW_SIZE(\
				__CMT_START_COLUMNS__, __CMT_START_ROWS__,\
				__CMT_START_XPIXELS__, __CMT_START_YPIXELS__, __CMT_START_OK__\
			)\
		}\
		\
		if (__CMT_START_OK__)\
		{\
			OBJECT__INITIALIZE (THIS->GET.WIDTH, unsigned int) = \
				__CMT_START_COLUMNS__;\
			OBJECT__INITIALIZE (THIS->GET.HEIGHT, unsigned int) = \
				__CMT_START_ROWS__;\
			OBJECT__INITIALIZE (THIS->GET.COLUMNS, unsigned int) = \
				__CMT_START_COLUMNS__;\
			OBJECT__INITIALIZE (THIS->GET.ROWS, unsigned int) = \
				__CMT_START_ROWS__;\
			OBJECT__INITIALIZE (THIS->GET.PIXEL_WIDTH, unsigned int) = \
				__CMT_START_XPIXELS__;\
			OBJECT__INITIALIZE (THIS->GET.PIXEL_HEIGHT, unsigned int) = \
				__CMT_START_YPIXELS__;\
		}\
	}\
	while (0);\
	\
	LOCALMACRO__CMT_CONSOLE__SHADOW_RESIZE(\
		THIS->GET.WIDTH, THIS->GET.HEIGHT, LOCALMACRO__CMT_CONSOLE__NATIVE_COLOR\
	)\
	THIS->_EVENT_W = THIS->GET.WIDTH;\
	THIS->_EVENT_H = THIS->GET.HEIGHT;\
	\
	do\
	{\
		char			__CMT_REPLY__[512];\
		unsigned int	__CMT_REPLY_FILL__ = (unsigned)0;\
		unsigned int	__CMT_REPLY_AT__;\
		\
		if (THIS->_FLAVOR == LOCALMACRO__CMT_CONSOLE__FLAVOR_XTERM)\
		{\
			LOCALMACRO__CMT_CONSOLE__QUERY(\
				"\033[?25$p" "\033P$q q\033\\" "\033[14t" "\033[13t",\
				__CMT_REPLY__, __CMT_REPLY_FILL__\
			)\
		}\
		else\
		{\
			LOCALMACRO__CMT_CONSOLE__QUERY(\
				"\033[14t" "\033[13t", __CMT_REPLY__, __CMT_REPLY_FILL__\
			)\
		}\
		\
		LOCALMACRO__CMT_CONSOLE__EACH_CSI(\
			__CMT_REPLY__, __CMT_REPLY_FILL__,\
			if (\
				(__CMT_CSI_FINAL__ == 'R') && !__CMT_CSI_MARK__ && \
				(__CMT_CSI_N__ >= 2) && __CMT_CSI_P__[0] && __CMT_CSI_P__[1]\
			)\
			{\
				OBJECT__INITIALIZE (THIS->GET.CURSOR.Y, int) = \
					(int)__CMT_CSI_P__[0] - 1;\
				OBJECT__INITIALIZE (THIS->GET.CURSOR.X, int) = \
					(int)__CMT_CSI_P__[1] - 1;\
			}\
			else if (\
				(__CMT_CSI_FINAL__ == 'y') && (__CMT_CSI_MARK__ == '?') && \
				(__CMT_CSI_P__[0] == (unsigned long)25) && __CMT_CSI_P__[1]\
			)\
			{\
				THIS->_START_VISIBLE = (BOOLEAN)(\
					(__CMT_CSI_P__[1] == (unsigned long)1) || \
					(__CMT_CSI_P__[1] == (unsigned long)3)\
				);\
				OBJECT__INITIALIZE (THIS->GET.CURSOR.VISIBLE, BOOLEAN) = \
					THIS->_START_VISIBLE;\
			}\
			else if (\
				(__CMT_CSI_FINAL__ == 't') && !__CMT_CSI_MARK__ && \
				(__CMT_CSI_P__[0] == (unsigned long)4) && \
				(__CMT_CSI_N__ >= 3) && \
				!THIS->GET.PIXEL_WIDTH\
			)\
			{\
				OBJECT__INITIALIZE (THIS->GET.PIXEL_HEIGHT, unsigned int) = \
					(unsigned int)__CMT_CSI_P__[1];\
				OBJECT__INITIALIZE (THIS->GET.PIXEL_WIDTH, unsigned int) = \
					(unsigned int)__CMT_CSI_P__[2];\
			}\
			else if (\
				(__CMT_CSI_FINAL__ == 't') && !__CMT_CSI_MARK__ && \
				(__CMT_CSI_P__[0] == (unsigned long)3) && (__CMT_CSI_N__ >= 3)\
			)\
			{\
				OBJECT__INITIALIZE (THIS->GET.X, int) = (int)__CMT_CSI_P__[1];\
				OBJECT__INITIALIZE (THIS->GET.Y, int) = (int)__CMT_CSI_P__[2];\
			}\
		)\
		\
		/* "ESC P 1 $ R <SHAPE> SPACE Q": THE CURSOR SHAPE (DECRQSS) */\
		for (\
			__CMT_REPLY_AT__ = (unsigned)0;\
			__CMT_REPLY_AT__ + (unsigned)6 < __CMT_REPLY_FILL__;\
			++__CMT_REPLY_AT__\
		)\
		{\
			if (\
				(__CMT_REPLY__[__CMT_REPLY_AT__] == '\033') && \
				(__CMT_REPLY__[__CMT_REPLY_AT__ + (unsigned)1] == 'P') && \
				(__CMT_REPLY__[__CMT_REPLY_AT__ + (unsigned)2] == '1') && \
				(__CMT_REPLY__[__CMT_REPLY_AT__ + (unsigned)3] == '$') && \
				(__CMT_REPLY__[__CMT_REPLY_AT__ + (unsigned)4] == 'r') && \
				(__CMT_REPLY__[__CMT_REPLY_AT__ + (unsigned)5] >= '0') && \
				(__CMT_REPLY__[__CMT_REPLY_AT__ + (unsigned)5] <= '6') && \
				(__CMT_REPLY__[__CMT_REPLY_AT__ + (unsigned)6] == ' ')\
			)\
			{\
				THIS->_START_SHAPE = \
					(int)(__CMT_REPLY__[__CMT_REPLY_AT__ + (unsigned)5] - '0');\
				OBJECT__INITIALIZE (THIS->GET.CURSOR.SIZE, unsigned long) = \
					LOCALMACRO__CMT_CONSOLE__SIZE_OF(THIS->_START_SHAPE);\
				break ;\
			}\
		}\
		\
		if (\
			THIS->GET.CURSOR.X >= (int)THIS->GET.WIDTH || \
			THIS->GET.CURSOR.X < 0\
		)\
			OBJECT__INITIALIZE (THIS->GET.CURSOR.X, int) = 0;\
		\
		if (\
			THIS->GET.CURSOR.Y >= (int)THIS->GET.HEIGHT || \
			THIS->GET.CURSOR.Y < 0\
		)\
			OBJECT__INITIALIZE (THIS->GET.CURSOR.Y, int) = 0;\
		\
		/* EVERYTHING BEFORE THE CURSOR WAS THERE BEFORE US: UNKNOWN (0) */\
		if (THIS->_CELLS)\
		{\
			const unsigned long	__CMT_START_AT__ = \
				((unsigned long)THIS->GET.CURSOR.Y * \
					(unsigned long)THIS->_CELLS_W) + \
				(unsigned long)THIS->GET.CURSOR.X;\
			\
			for (\
				__CMT_REPLY_AT__ = (unsigned)0;\
				(unsigned long)__CMT_REPLY_AT__ < __CMT_START_AT__;\
				++__CMT_REPLY_AT__\
			)\
				((unsigned long *)THIS->_CELLS)[__CMT_REPLY_AT__] = \
					(unsigned long)0;\
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
