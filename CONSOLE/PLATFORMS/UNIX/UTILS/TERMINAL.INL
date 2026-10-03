#ifndef CONSOLE_HPP
#ifndef CONSOLE_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_H */
#endif /* !CONSOLE_HPP */

/******************************************************************************\
|* THE TERMINAL LAYER.                                                        *|
|*                                                                            *|
|* EVERY BYTE FOR THE TERMINAL GOES INTO ONE BUFFER (OUT_BYTE, OR RESERVE +   *|
|* THE *_RAW EMITTERS), AND THE BUFFER LEAVES THROUGH OUT_FLUSH. SETTLE()     *|
|* ENDS EVERY PUBLIC MEMBER: IT PARKS THE REAL CURSOR ON THE LOGICAL ONE,     *|
|* PUTS THE PEN BACK, AND FLUSHES, UNLESS A PUSH() IS HOLDING THE OUTPUT OR   *|
|* THE MEMBER WAS CALLED BY ANOTHER MEMBER (_BATCH), IN WHICH CASE THE        *|
|* OUTERMOST ONE DOES IT.                                                     *|
|*                                                                            *|
|* CELL() IS THE ONLY WAY A CHARACTER GETS ONTO THE SCREEN AT A POSITION: IT  *|
|* WRITES THE SHADOW, MOVES THE REAL CURSOR ONLY IF IT IS NOT ALREADY THERE,  *|
|* AND CHANGES THE PEN ONLY IF IT DIFFERS.                                    *|
|*                                                                            *|
|* A TERMINAL THAT WRITES THE LAST COLUMN DOES NOT WRAP YET: IT WAITS FOR THE *|
|* NEXT CHARACTER ("PENDING WRAP"). _TWRAP REMEMBERS THAT STATE, BECAUSE ANY  *|
|* CURSOR MOVE CANCELS IT.                                                    *|
\******************************************************************************/

#define LOCALMACRO__CMT_CONSOLE__OUT_FLUSH \
	do\
	{\
		unsigned long	__CMT_FLUSH_DONE__ = (unsigned long)0;\
		\
		while (__CMT_FLUSH_DONE__ < THIS->_OUT_FILL)\
		{\
			const long	__CMT_FLUSH_STEP__ = (long)write(\
				THIS->_OUT_FD,\
				((char *)THIS->_OUT_DATA) + __CMT_FLUSH_DONE__,\
				(size_t)(THIS->_OUT_FILL - __CMT_FLUSH_DONE__)\
			);\
			\
			if (__CMT_FLUSH_STEP__ > (long)0)\
				__CMT_FLUSH_DONE__ += (unsigned long)__CMT_FLUSH_STEP__;\
			else if ((__CMT_FLUSH_STEP__ < (long)0) && (errno == EINTR))\
				continue ;\
			else\
				break ;\
		}\
		\
		THIS->_OUT_FILL = (unsigned long)0;\
	}\
	while (0);

#define LOCALMACRO__CMT_CONSOLE__OUT_BYTE(CHARACTER) \
	do\
	{\
		const char	__CMT_OUT_BYTE__ = (char)(CHARACTER);\
		\
		if (THIS->_OUT_FILL >= THIS->_OUT_CAPACITY)\
		{\
			if (THIS->_OUT_CAPACITY && !THIS->_PUSH_DEPTH)\
			{\
				LOCALMACRO__CMT_CONSOLE__OUT_FLUSH\
			}\
			else\
			{\
				const unsigned long	__CMT_OUT_GROW__ = THIS->_OUT_CAPACITY\
					? (THIS->_OUT_CAPACITY * (unsigned long)2)\
					: (unsigned long)4096;\
				PTR					__CMT_OUT_BLOCK__;\
				\
				if (THIS->_OUT_DATA)\
					__CMT_OUT_BLOCK__ = \
						REALLOC(THIS->_OUT_DATA, (LET)__CMT_OUT_GROW__);\
				else\
					__CMT_OUT_BLOCK__ = ALLOC((LET)__CMT_OUT_GROW__);\
				\
				if (__CMT_OUT_BLOCK__)\
				{\
					THIS->_OUT_DATA = __CMT_OUT_BLOCK__;\
					THIS->_OUT_CAPACITY = __CMT_OUT_GROW__;\
				}\
				else if (THIS->_OUT_FILL)\
				{\
					LOCALMACRO__CMT_CONSOLE__OUT_FLUSH\
				}\
			}\
		}\
		\
		if (THIS->_OUT_FILL < THIS->_OUT_CAPACITY)\
			((char *)THIS->_OUT_DATA)[THIS->_OUT_FILL++] = __CMT_OUT_BYTE__;\
		else if (write(THIS->_OUT_FD, &__CMT_OUT_BYTE__, (size_t)1) < 0)\
			THIS->_OUT_FILL = (unsigned long)0; /* NOTHING LEFT TO TRY */\
	}\
	while (0);

/******************************************************************************\
|* RESERVE(N) MAKES ROOM FOR N BYTES ONCE (GROWING, OR FLUSHING WHEN NOTHING  *|
|* IS HELD); THE *_RAW EMITTERS THAT FOLLOW IT WRITE WITHOUT CHECKING. THIS   *|
|* KEEPS THE GROW-OR-FLUSH CODE OUT OF EVERY SINGLE BYTE. IF THE ROOM CAN NOT *|
|* BE MADE (OUT OF MEMORY) THE ITEM IS SKIPPED RATHER THAN OVERRUN.           *|
\******************************************************************************/

#define LOCALMACRO__CMT_CONSOLE__RESERVE(COUNT, OK) \
	do\
	{\
		const unsigned long	__CMT_RESERVE__ = (unsigned long)(COUNT);\
		\
		if ((THIS->_OUT_FILL + __CMT_RESERVE__) > THIS->_OUT_CAPACITY)\
		{\
			if (THIS->_OUT_FILL && !THIS->_PUSH_DEPTH)\
			{\
				LOCALMACRO__CMT_CONSOLE__OUT_FLUSH\
			}\
			\
			if ((THIS->_OUT_FILL + __CMT_RESERVE__) > THIS->_OUT_CAPACITY)\
			{\
				PTR				__CMT_RESERVE_BLOCK__;\
				unsigned long	__CMT_RESERVE_GROW__ = (\
					THIS->_OUT_CAPACITY\
					? (THIS->_OUT_CAPACITY * (unsigned long)2)\
					: (unsigned long)4096\
				);\
				\
				while (\
					__CMT_RESERVE_GROW__ < (THIS->_OUT_FILL + __CMT_RESERVE__)\
				)\
					__CMT_RESERVE_GROW__ = \
						__CMT_RESERVE_GROW__ * (unsigned long)2;\
				\
				if (THIS->_OUT_DATA)\
					__CMT_RESERVE_BLOCK__ = \
						REALLOC(THIS->_OUT_DATA, (LET)__CMT_RESERVE_GROW__);\
				else\
					__CMT_RESERVE_BLOCK__ = ALLOC((LET)__CMT_RESERVE_GROW__);\
				\
				if (__CMT_RESERVE_BLOCK__)\
				{\
					THIS->_OUT_DATA = __CMT_RESERVE_BLOCK__;\
					THIS->_OUT_CAPACITY = __CMT_RESERVE_GROW__;\
				}\
			}\
		}\
		\
		(OK) = ((THIS->_OUT_FILL + __CMT_RESERVE__) <= THIS->_OUT_CAPACITY);\
	}\
	while (0);

#define LOCALMACRO__CMT_CONSOLE__OUT_RAW(CHARACTER) \
	((char *)THIS->_OUT_DATA)[THIS->_OUT_FILL++] = (char)(CHARACTER);

#define LOCALMACRO__CMT_CONSOLE__OUT_NUMBER_RAW(VALUE) \
	do\
	{\
		unsigned long	__CMT_NUMBER_LEFT__ = (unsigned long)(VALUE);\
		char			__CMT_NUMBER_DIGITS__[24];\
		int				__CMT_NUMBER_COUNT__ = 0;\
		\
		do\
		{\
			__CMT_NUMBER_DIGITS__[__CMT_NUMBER_COUNT__++] = (char)(\
				'0' + (int)(__CMT_NUMBER_LEFT__ % (unsigned long)10)\
			);\
			__CMT_NUMBER_LEFT__ = __CMT_NUMBER_LEFT__ / (unsigned long)10;\
		}\
		while (__CMT_NUMBER_LEFT__ && (__CMT_NUMBER_COUNT__ < 23));\
		\
		while (__CMT_NUMBER_COUNT__)\
			LOCALMACRO__CMT_CONSOLE__OUT_RAW(\
				__CMT_NUMBER_DIGITS__[--__CMT_NUMBER_COUNT__]\
			)\
	}\
	while (0);

#define LOCALMACRO__CMT_CONSOLE__OUT_TEXT(TEXT) \
	do\
	{\
		const char	*__CMT_OUT_TEXT__ = (TEXT);\
		\
		while (*__CMT_OUT_TEXT__)\
		{\
			LOCALMACRO__CMT_CONSOLE__OUT_BYTE(*__CMT_OUT_TEXT__)\
			++__CMT_OUT_TEXT__;\
		}\
	}\
	while (0);

#define LOCALMACRO__CMT_CONSOLE__OUT_NUMBER(VALUE) \
	do\
	{\
		int	__CMT_NUMBER_ROOM__;\
		\
		LOCALMACRO__CMT_CONSOLE__RESERVE(24, __CMT_NUMBER_ROOM__)\
		\
		if (__CMT_NUMBER_ROOM__)\
			LOCALMACRO__CMT_CONSOLE__OUT_NUMBER_RAW(VALUE)\
	}\
	while (0);

#define LOCALMACRO__CMT_CONSOLE__OUT_GLYPH_RAW(GLYPH) \
	do\
	{\
		unsigned long	__CMT_GLYPH_LEFT__ = (unsigned long)(GLYPH);\
		\
		if (!__CMT_GLYPH_LEFT__)\
			__CMT_GLYPH_LEFT__ = (unsigned long)' ';\
		\
		do\
		{\
			LOCALMACRO__CMT_CONSOLE__OUT_RAW(\
				(char)(__CMT_GLYPH_LEFT__ & (unsigned long)0XFF)\
			)\
			__CMT_GLYPH_LEFT__ = __CMT_GLYPH_LEFT__ >> 8;\
		}\
		while (__CMT_GLYPH_LEFT__);\
	}\
	while (0);

/******************************************************************************\
|* WINDOWS NUMBERS ITS EIGHT COLOURS BLUE=1 GREEN=2 RED=4, ANSI NUMBERS THEM  *|
|* RED=1 GREEN=2 BLUE=4. SWAPPING BITS 0 AND 2 CONVERTS EITHER WAY.           *|
\******************************************************************************/

#define LOCALMACRO__CMT_CONSOLE__ANSI_INDEX(NIBBLE) \
	(\
		((((unsigned int)(NIBBLE)) & (unsigned)1) << 2) | \
		(((unsigned int)(NIBBLE)) & (unsigned)2) | \
		((((unsigned int)(NIBBLE)) & (unsigned)4) >> 2)\
	)

#ifdef CMT_CONSOLE_EXACT_COLORS
#define LOCALMACRO__CMT_CONSOLE__KEEP_FOREGROUND(NIBBLE) 1
#define LOCALMACRO__CMT_CONSOLE__KEEP_BACKGROUND(NIBBLE) 1
#else /* !CMT_CONSOLE_EXACT_COLORS */
#define LOCALMACRO__CMT_CONSOLE__KEEP_FOREGROUND(NIBBLE) \
	((NIBBLE) != (unsigned)7)
#define LOCALMACRO__CMT_CONSOLE__KEEP_BACKGROUND(NIBBLE) \
	((NIBBLE) != (unsigned)0)
#endif /* CMT_CONSOLE_EXACT_COLORS */

/* NEEDS 24 RESERVED BYTES */
#define LOCALMACRO__CMT_CONSOLE__SET_PEN_RAW(ATTRIBUTE) \
	do\
	{\
		const int	__CMT_PEN__ = \
			(int)(((unsigned int)(ATTRIBUTE)) & (unsigned)0XFF);\
		\
		if (THIS->_ACTIVE && (THIS->_TPEN != __CMT_PEN__))\
		{\
			const unsigned int	__CMT_PEN_FORE__ = \
				((unsigned int)__CMT_PEN__) & (unsigned)0X0F;\
			const unsigned int	__CMT_PEN_BACK__ = \
				(((unsigned int)__CMT_PEN__) >> 4) & (unsigned)0X0F;\
			\
			LOCALMACRO__CMT_CONSOLE__OUT_RAW('\033')\
			LOCALMACRO__CMT_CONSOLE__OUT_RAW('[')\
			LOCALMACRO__CMT_CONSOLE__OUT_RAW('0')\
			\
			if (LOCALMACRO__CMT_CONSOLE__KEEP_FOREGROUND(__CMT_PEN_FORE__))\
			{\
				LOCALMACRO__CMT_CONSOLE__OUT_RAW(';')\
				LOCALMACRO__CMT_CONSOLE__OUT_NUMBER_RAW(\
					(\
						(__CMT_PEN_FORE__ & (unsigned)8) ? \
						(unsigned)90 : (unsigned)30\
					) + \
					LOCALMACRO__CMT_CONSOLE__ANSI_INDEX(__CMT_PEN_FORE__)\
				)\
			}\
			\
			if (LOCALMACRO__CMT_CONSOLE__KEEP_BACKGROUND(__CMT_PEN_BACK__))\
			{\
				LOCALMACRO__CMT_CONSOLE__OUT_RAW(';')\
				LOCALMACRO__CMT_CONSOLE__OUT_NUMBER_RAW(\
					(\
						(__CMT_PEN_BACK__ & (unsigned)8) ? \
						(unsigned)100 : (unsigned)40\
					) + \
					LOCALMACRO__CMT_CONSOLE__ANSI_INDEX(__CMT_PEN_BACK__)\
				)\
			}\
			\
			LOCALMACRO__CMT_CONSOLE__OUT_RAW('m')\
			THIS->_TPEN = __CMT_PEN__;\
		}\
	}\
	while (0);

#define LOCALMACRO__CMT_CONSOLE__SET_PEN(ATTRIBUTE) \
	do\
	{\
		int	__CMT_PEN_ROOM__;\
		\
		LOCALMACRO__CMT_CONSOLE__RESERVE(24, __CMT_PEN_ROOM__)\
		\
		if (__CMT_PEN_ROOM__)\
			LOCALMACRO__CMT_CONSOLE__SET_PEN_RAW(ATTRIBUTE)\
	}\
	while (0);

/* NEEDS 24 RESERVED BYTES */
#define LOCALMACRO__CMT_CONSOLE__MOVE_TO_RAW(AT_X, AT_Y) \
	do\
	{\
		const int	__CMT_MOVE_X__ = (int)(AT_X);\
		const int	__CMT_MOVE_Y__ = (int)(AT_Y);\
		\
		if (\
			THIS->_ACTIVE && (\
				!THIS->_TVALID || THIS->_TWRAP || \
				(THIS->_TX != __CMT_MOVE_X__) || (THIS->_TY != __CMT_MOVE_Y__)\
			)\
		)\
		{\
			LOCALMACRO__CMT_CONSOLE__OUT_RAW('\033')\
			LOCALMACRO__CMT_CONSOLE__OUT_RAW('[')\
			LOCALMACRO__CMT_CONSOLE__OUT_NUMBER_RAW(__CMT_MOVE_Y__ + 1)\
			LOCALMACRO__CMT_CONSOLE__OUT_RAW(';')\
			LOCALMACRO__CMT_CONSOLE__OUT_NUMBER_RAW(__CMT_MOVE_X__ + 1)\
			LOCALMACRO__CMT_CONSOLE__OUT_RAW('H')\
			THIS->_TX = __CMT_MOVE_X__;\
			THIS->_TY = __CMT_MOVE_Y__;\
			THIS->_TVALID = TRUE;\
			THIS->_TWRAP = FALSE;\
		}\
	}\
	while (0);

#define LOCALMACRO__CMT_CONSOLE__MOVE_TO(AT_X, AT_Y) \
	do\
	{\
		int	__CMT_MOVE_ROOM__;\
		\
		LOCALMACRO__CMT_CONSOLE__RESERVE(24, __CMT_MOVE_ROOM__)\
		\
		if (__CMT_MOVE_ROOM__)\
			LOCALMACRO__CMT_CONSOLE__MOVE_TO_RAW(AT_X, AT_Y)\
	}\
	while (0);

#define LOCALMACRO__CMT_CONSOLE__CELL(AT_X, AT_Y, GLYPH, ATTRIBUTE) \
	do\
	{\
		const long			__CMT_CELL_X__ = (long)(AT_X);\
		const long			__CMT_CELL_Y__ = (long)(AT_Y);\
		const unsigned long	__CMT_CELL_GLYPH__ = (unsigned long)(GLYPH);\
		const unsigned int	__CMT_CELL_ATTRIBUTE__ = \
			((unsigned int)(ATTRIBUTE)) & (unsigned)0XFF;\
		\
		if (\
			THIS->_CELLS && \
			(__CMT_CELL_X__ >= (long)0) && (__CMT_CELL_Y__ >= (long)0) && \
			(__CMT_CELL_X__ < (long)THIS->_CELLS_W) && \
			(__CMT_CELL_Y__ < (long)THIS->_CELLS_H)\
		)\
		{\
			const unsigned long	__CMT_CELL_AT__ = (\
				(\
					(unsigned long)__CMT_CELL_Y__ * \
					(unsigned long)THIS->_CELLS_W\
				) + (unsigned long)__CMT_CELL_X__\
			);\
			\
			((unsigned long *)THIS->_CELLS)[__CMT_CELL_AT__] = \
				__CMT_CELL_GLYPH__;\
			((unsigned char *)THIS->_ATTRS)[__CMT_CELL_AT__] = \
				(unsigned char)__CMT_CELL_ATTRIBUTE__;\
		}\
		\
		if (THIS->_ACTIVE)\
		{\
			int	__CMT_CELL_ROOM__;\
			\
			LOCALMACRO__CMT_CONSOLE__RESERVE(56, __CMT_CELL_ROOM__)\
			\
			if (__CMT_CELL_ROOM__)\
			{\
				LOCALMACRO__CMT_CONSOLE__MOVE_TO_RAW(\
					__CMT_CELL_X__, __CMT_CELL_Y__\
				)\
				LOCALMACRO__CMT_CONSOLE__SET_PEN_RAW(__CMT_CELL_ATTRIBUTE__)\
				LOCALMACRO__CMT_CONSOLE__OUT_GLYPH_RAW(__CMT_CELL_GLYPH__)\
				\
				if ((THIS->_TX + 1) >= (int)THIS->GET.WIDTH)\
					THIS->_TWRAP = TRUE;\
				else\
					++THIS->_TX;\
			}\
		}\
	}\
	while (0);

/******************************************************************************\
|* THE SHADOW SCREEN                                                          *|
\******************************************************************************/

#define LOCALMACRO__CMT_CONSOLE__SHADOW_RESIZE(NEW_WIDTH, NEW_HEIGHT, FILL) \
	do\
	{\
		unsigned int		__CMT_SHADOW_W__ = (unsigned int)(NEW_WIDTH);\
		unsigned int		__CMT_SHADOW_H__ = (unsigned int)(NEW_HEIGHT);\
		const unsigned char	__CMT_SHADOW_FILL__ = (unsigned char)(FILL);\
		const unsigned long	__CMT_SHADOW_COUNT__ = \
			(unsigned long)__CMT_SHADOW_W__ * (unsigned long)__CMT_SHADOW_H__;\
		unsigned long		*__CMT_SHADOW_CELLS__ = (unsigned long *)0;\
		unsigned char		*__CMT_SHADOW_ATTRS__ = (unsigned char *)0;\
		\
		if (__CMT_SHADOW_COUNT__)\
		{\
			__CMT_SHADOW_CELLS__ = (unsigned long *)ALLOC(\
				(LET)(__CMT_SHADOW_COUNT__ * sizeof(unsigned long))\
			);\
			__CMT_SHADOW_ATTRS__ = \
				(unsigned char *)ALLOC((LET)__CMT_SHADOW_COUNT__);\
		}\
		\
		if (!__CMT_SHADOW_CELLS__ || !__CMT_SHADOW_ATTRS__)\
		{\
			if (__CMT_SHADOW_CELLS__)\
				FREE((PTR)__CMT_SHADOW_CELLS__);\
			\
			if (__CMT_SHADOW_ATTRS__)\
				FREE((PTR)__CMT_SHADOW_ATTRS__);\
			\
			__CMT_SHADOW_CELLS__ = (unsigned long *)0;\
			__CMT_SHADOW_ATTRS__ = (unsigned char *)0;\
			__CMT_SHADOW_W__ = (unsigned)0;\
			__CMT_SHADOW_H__ = (unsigned)0;\
		}\
		else\
		{\
			unsigned long	__CMT_SHADOW_AT__;\
			unsigned int	__CMT_SHADOW_ROW__;\
			unsigned int	__CMT_SHADOW_COLUMN__;\
			\
			for (\
				__CMT_SHADOW_AT__ = (unsigned long)0;\
				__CMT_SHADOW_AT__ < __CMT_SHADOW_COUNT__;\
				++__CMT_SHADOW_AT__\
			)\
			{\
				__CMT_SHADOW_CELLS__[__CMT_SHADOW_AT__] = (unsigned long)' ';\
				__CMT_SHADOW_ATTRS__[__CMT_SHADOW_AT__] = __CMT_SHADOW_FILL__;\
			}\
			\
			if (THIS->_CELLS)\
			{\
				for (\
					__CMT_SHADOW_ROW__ = (unsigned)0;\
					(\
						(__CMT_SHADOW_ROW__ < __CMT_SHADOW_H__) && \
						(__CMT_SHADOW_ROW__ < THIS->_CELLS_H)\
					);\
					++__CMT_SHADOW_ROW__\
				)\
				{\
					for (\
						__CMT_SHADOW_COLUMN__ = (unsigned)0;\
						(\
							(__CMT_SHADOW_COLUMN__ < __CMT_SHADOW_W__) && \
							(__CMT_SHADOW_COLUMN__ < THIS->_CELLS_W)\
						);\
						++__CMT_SHADOW_COLUMN__\
					)\
					{\
						const unsigned long	__CMT_SHADOW_TO__ = (\
							(\
								(unsigned long)__CMT_SHADOW_ROW__ * \
								(unsigned long)__CMT_SHADOW_W__\
							) + \
							(unsigned long)__CMT_SHADOW_COLUMN__\
						);\
						const unsigned long	__CMT_SHADOW_FROM__ = (\
							(\
								(unsigned long)__CMT_SHADOW_ROW__ * \
								(unsigned long)THIS->_CELLS_W\
							) + \
							(unsigned long)__CMT_SHADOW_COLUMN__\
						);\
						\
						__CMT_SHADOW_CELLS__[__CMT_SHADOW_TO__] = (\
							((unsigned long *)THIS->_CELLS)\
							[__CMT_SHADOW_FROM__]\
						);\
						__CMT_SHADOW_ATTRS__[__CMT_SHADOW_TO__] = (\
							((unsigned char *)THIS->_ATTRS)\
							[__CMT_SHADOW_FROM__]\
						);\
					}\
				}\
			}\
		}\
		\
		if (THIS->_CELLS)\
			FREE(THIS->_CELLS);\
		\
		if (THIS->_ATTRS)\
			FREE(THIS->_ATTRS);\
		\
		THIS->_CELLS = (PTR)__CMT_SHADOW_CELLS__;\
		THIS->_ATTRS = (PTR)__CMT_SHADOW_ATTRS__;\
		THIS->_CELLS_W = __CMT_SHADOW_W__;\
		THIS->_CELLS_H = __CMT_SHADOW_H__;\
	}\
	while (0);

/* THE SHADOW SIDE OF A SCROLL: EVERY ROW MOVES UP ONE, THE LAST ONE IS NEW */
#define LOCALMACRO__CMT_CONSOLE__SHADOW_SCROLL(FILL) \
	do\
	{\
		if (THIS->_CELLS && THIS->_CELLS_H)\
		{\
			const unsigned long	__CMT_SCROLL_SPAN__ = \
				(unsigned long)THIS->_CELLS_W;\
			const unsigned long	__CMT_SCROLL_LAST__ = (\
				__CMT_SCROLL_SPAN__ * \
				(unsigned long)(THIS->_CELLS_H - (unsigned)1)\
			);\
			unsigned long		__CMT_SCROLL_AT__;\
			\
			for (\
				__CMT_SCROLL_AT__ = (unsigned long)0;\
				__CMT_SCROLL_AT__ < __CMT_SCROLL_LAST__;\
				++__CMT_SCROLL_AT__\
			)\
			{\
				((unsigned long *)THIS->_CELLS)[__CMT_SCROLL_AT__] = \
					((unsigned long *)THIS->_CELLS)\
					[__CMT_SCROLL_AT__ + __CMT_SCROLL_SPAN__];\
				((unsigned char *)THIS->_ATTRS)[__CMT_SCROLL_AT__] = \
					((unsigned char *)THIS->_ATTRS)\
					[__CMT_SCROLL_AT__ + __CMT_SCROLL_SPAN__];\
			}\
			\
			for (\
				__CMT_SCROLL_AT__ = __CMT_SCROLL_LAST__;\
				(\
					__CMT_SCROLL_AT__ < \
					(__CMT_SCROLL_LAST__ + __CMT_SCROLL_SPAN__)\
				);\
				++__CMT_SCROLL_AT__\
			)\
			{\
				((unsigned long *)THIS->_CELLS)[__CMT_SCROLL_AT__] = \
					(unsigned long)' ';\
				((unsigned char *)THIS->_ATTRS)[__CMT_SCROLL_AT__] = \
					(unsigned char)(FILL);\
			}\
		}\
	}\
	while (0);

/******************************************************************************\
|* PAINT THE SHADOW BACK ONTO THE TERMINAL. A CELL HOLDING GLYPH 0 IS ONE WE  *|
|* KNOW NOTHING ABOUT (WHAT THE SHELL PRINTED ABOVE US BEFORE THE PROGRAM     *|
|* STARTED); IT IS LEFT ALONE, SO COLOR() AND IMPORT() NEVER WIPE IT.         *|
\******************************************************************************/
#define LOCALMACRO__CMT_CONSOLE__REDRAW \
	do\
	{\
		unsigned int	__CMT_REDRAW_ROW__;\
		unsigned int	__CMT_REDRAW_COLUMN__;\
		\
		if (THIS->_CELLS && THIS->_ACTIVE)\
		{\
			for (\
				__CMT_REDRAW_ROW__ = (unsigned)0;\
				__CMT_REDRAW_ROW__ < THIS->_CELLS_H;\
				++__CMT_REDRAW_ROW__\
			)\
			{\
				for (\
					__CMT_REDRAW_COLUMN__ = (unsigned)0;\
					__CMT_REDRAW_COLUMN__ < THIS->_CELLS_W;\
					++__CMT_REDRAW_COLUMN__\
				)\
				{\
					const unsigned long	__CMT_REDRAW_AT__ = (\
						(\
							(unsigned long)__CMT_REDRAW_ROW__ * \
							(unsigned long)THIS->_CELLS_W\
						) + \
						(unsigned long)__CMT_REDRAW_COLUMN__\
					);\
					\
					if (((unsigned long *)THIS->_CELLS)[__CMT_REDRAW_AT__])\
					{\
						LOCALMACRO__CMT_CONSOLE__CELL(\
							__CMT_REDRAW_COLUMN__, \
							__CMT_REDRAW_ROW__, \
							((unsigned long *)THIS->_CELLS)\
							[__CMT_REDRAW_AT__], \
							((unsigned char *)THIS->_ATTRS)\
							[__CMT_REDRAW_AT__]\
						)\
					}\
				}\
			}\
		}\
	}\
	while (0);

/******************************************************************************\
|* WINDOW SIZE. THE TERMINAL IS ASKED WITH TIOCGWINSZ ON EVERY PUBLIC CALL;   *|
|* IT IS ONE SYSTEM CALL, AND IT MEANS GET.WIDTH AND GET.HEIGHT ARE NEVER     *|
|* STALE AFTER THE USER DRAGS THE WINDOW. ON_RESIZE IS FIRED FROM THE INPUT   *|
|* LOOP, NOT FROM HERE.                                                       *|
\******************************************************************************/

#ifdef TIOCGWINSZ
#define LOCALMACRO__CMT_CONSOLE__WINDOW_SIZE(\
	COLUMNS, ROWS, X_PIXELS, Y_PIXELS, OK\
) \
	do\
	{\
		struct winsize	__CMT_WINSIZE__;\
		\
		(OK) = 0;\
		\
		if (\
			(ioctl(THIS->_OUT_FD, TIOCGWINSZ, &__CMT_WINSIZE__) == 0) && \
			__CMT_WINSIZE__.ws_col && __CMT_WINSIZE__.ws_row\
		)\
		{\
			(COLUMNS) = (unsigned int)__CMT_WINSIZE__.ws_col;\
			(ROWS) = (unsigned int)__CMT_WINSIZE__.ws_row;\
			(X_PIXELS) = (unsigned int)__CMT_WINSIZE__.ws_xpixel;\
			(Y_PIXELS) = (unsigned int)__CMT_WINSIZE__.ws_ypixel;\
			(OK) = 1;\
		}\
	}\
	while (0);
#else /* !TIOCGWINSZ */
#define LOCALMACRO__CMT_CONSOLE__WINDOW_SIZE(\
	COLUMNS, ROWS, X_PIXELS, Y_PIXELS, OK\
) \
	(OK) = 0;
#endif /* TIOCGWINSZ */

#define LOCALMACRO__CMT_CONSOLE__SYNC_SIZE \
	do\
	{\
		unsigned int	__CMT_SIZE_COLUMNS__ = (unsigned)0;\
		unsigned int	__CMT_SIZE_ROWS__ = (unsigned)0;\
		unsigned int	__CMT_SIZE_XPIXELS__ = (unsigned)0;\
		unsigned int	__CMT_SIZE_YPIXELS__ = (unsigned)0;\
		int				__CMT_SIZE_OK__ = 0;\
		\
		if (THIS->_ACTIVE)\
		{\
			LOCALMACRO__CMT_CONSOLE__WINDOW_SIZE(\
				__CMT_SIZE_COLUMNS__, __CMT_SIZE_ROWS__,\
				__CMT_SIZE_XPIXELS__, __CMT_SIZE_YPIXELS__, __CMT_SIZE_OK__\
			)\
		}\
		\
		if (\
			__CMT_SIZE_OK__ && (\
				(__CMT_SIZE_COLUMNS__ != THIS->GET.WIDTH) || \
				(__CMT_SIZE_ROWS__ != THIS->GET.HEIGHT)\
			)\
		)\
		{\
			OBJECT__INITIALIZE (THIS->GET.WIDTH, unsigned int) = \
				__CMT_SIZE_COLUMNS__;\
			OBJECT__INITIALIZE (THIS->GET.HEIGHT, unsigned int) = \
				__CMT_SIZE_ROWS__;\
			OBJECT__INITIALIZE (THIS->GET.COLUMNS, unsigned int) = \
				__CMT_SIZE_COLUMNS__;\
			OBJECT__INITIALIZE (THIS->GET.ROWS, unsigned int) = \
				__CMT_SIZE_ROWS__;\
			LOCALMACRO__CMT_CONSOLE__SHADOW_RESIZE(\
				__CMT_SIZE_COLUMNS__, __CMT_SIZE_ROWS__, THIS->GET.COLOR\
			)\
			\
			if (THIS->GET.CURSOR.X >= (int)__CMT_SIZE_COLUMNS__)\
				OBJECT__INITIALIZE (THIS->GET.CURSOR.X, int) = \
					(int)__CMT_SIZE_COLUMNS__ - 1;\
			\
			if (THIS->GET.CURSOR.Y >= (int)__CMT_SIZE_ROWS__)\
				OBJECT__INITIALIZE (THIS->GET.CURSOR.Y, int) = \
					(int)__CMT_SIZE_ROWS__ - 1;\
			\
			THIS->_WRAP = FALSE;\
			THIS->_TVALID = FALSE;\
			THIS->_TWRAP = FALSE;\
		}\
		\
		if (__CMT_SIZE_OK__ && __CMT_SIZE_XPIXELS__ && __CMT_SIZE_YPIXELS__)\
		{\
			OBJECT__INITIALIZE (THIS->GET.PIXEL_WIDTH, unsigned int) = \
				__CMT_SIZE_XPIXELS__;\
			OBJECT__INITIALIZE (THIS->GET.PIXEL_HEIGHT, unsigned int) = \
				__CMT_SIZE_YPIXELS__;\
		}\
	}\
	while (0);

/******************************************************************************\
|* ENTER / ENTER_AT OPEN A PUBLIC MEMBER, SETTLE CLOSES IT.                   *|
|*                                                                            *|
|* THE OUTERMOST MEMBER FORGETS WHICH PEN THE TERMINAL HAS: ANOTHER CONSOLE   *|
|* OBJECT, OR A DESTRUCTOR, MAY HAVE CHANGED IT SINCE. A MEMBER THAT WRITES   *|
|* AT A POSITION (ENTER_AT) ALSO FORGETS WHERE THE REAL CURSOR IS, BECAUSE    *|
|* PRINTF() MAY HAVE MOVED IT; ITS FIRST CELL THEREFORE ALWAYS STARTS WITH AN *|
|* EXPLICIT CURSOR MOVE. LOG() DOES NOT, SO TEXT KEEPS FLOWING AFTER WHATEVER *|
|* PRINTF() LEFT ON THE LINE, JUST LIKE ON WINDOWS.                           *|
\******************************************************************************/

#define LOCALMACRO__CMT_CONSOLE__ENTER \
	if (!THIS->_BATCH)\
	{\
		THIS->_TPEN = -1;\
		LOCALMACRO__CMT_CONSOLE__SYNC_SIZE\
	}

#define LOCALMACRO__CMT_CONSOLE__ENTER_AT \
	if (!THIS->_BATCH)\
	{\
		THIS->_TPEN = -1;\
		THIS->_TVALID = FALSE;\
		LOCALMACRO__CMT_CONSOLE__SYNC_SIZE\
	}

#define LOCALMACRO__CMT_CONSOLE__SETTLE \
	do\
	{\
		if (!THIS->_BATCH)\
		{\
			if (THIS->_ACTIVE && THIS->GET.WIDTH && THIS->GET.HEIGHT)\
			{\
				const int	__CMT_SETTLE_X__ = THIS->GET.CURSOR.X;\
				const int	__CMT_SETTLE_Y__ = THIS->GET.CURSOR.Y;\
				\
				if (\
					!(\
						THIS->_WRAP && THIS->_TWRAP && THIS->_TVALID && \
						(THIS->_TX == __CMT_SETTLE_X__) && \
						(THIS->_TY == __CMT_SETTLE_Y__)\
					)\
				)\
				{\
					LOCALMACRO__CMT_CONSOLE__MOVE_TO(\
						__CMT_SETTLE_X__, __CMT_SETTLE_Y__\
					)\
				}\
				\
				LOCALMACRO__CMT_CONSOLE__SET_PEN(THIS->GET.CURSOR.COLOR)\
			}\
			\
			if (!THIS->_PUSH_DEPTH)\
			{\
				LOCALMACRO__CMT_CONSOLE__OUT_FLUSH\
			}\
		}\
	}\
	while (0);

#define LOCALMACRO__CMT_CONSOLE__BATCH_BEGIN \
	++THIS->_BATCH;

#define LOCALMACRO__CMT_CONSOLE__BATCH_END \
	--THIS->_BATCH;\
	LOCALMACRO__CMT_CONSOLE__SETTLE

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
