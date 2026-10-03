#ifndef CONSOLE_HPP
#ifndef CONSOLE_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_H */
#endif /* !CONSOLE_HPP */

/******************************************************************************\
|* THE TEXT LAYER: HOW LOG() TURNS BYTES INTO CELLS.                          *|
|*                                                                            *|
|*   PRINTABLE      ONE CELL AT THE CURSOR IN THE CURSOR'S PEN                *|
|*   UTF-8          ONE CELL PER CHARACTER (ASSUMED ONE COLUMN WIDE). A       *|
|*                  CHARACTER SPLIT ACROSS TWO LOG() CALLS IS STITCHED BACK.  *|
|*   BAD UTF-8      EACH BYTE IS READ AS CODE PAGE 437 INSTEAD                *|
|*   \N             NEXT LINE, COLUMN 0 (SCROLLS AT THE BOTTOM)               *|
|*   \R \B          COLUMN 0 / ONE COLUMN BACK                                *|
|*   \T             SPACES UP TO THE NEXT MULTIPLE OF 8                       *|
|*   \A             PASSED THROUGH (THE BELL)                                 *|
|*   ESC [ ... M    SGR, TAKEN AS A PEN CHANGE: "\033[1;31M" IS THE SAME AS   *|
|*                  CURSOR.COLOR(0X0C). ONLY THE 16 BASIC COLOURS MAP.        *|
|*   OTHER ESCAPES  PASSED THROUGH UNTOUCHED; THE LAYER THEN FORGETS WHERE    *|
|*                  THE REAL CURSOR IS AND RE-SYNCS ON THE NEXT CELL          *|
|*   OTHER CONTROLS DROPPED                                                   *|
\******************************************************************************/

/******************************************************************************\
|* WHICH BYTES START A UTF-8 CHARACTER. VALID UTF-8 WINS BY DEFAULT, SO SOME  *|
|* CODE PAGE 437 PAIRS ("\XDB\XB2") READ AS ONE UTF-8 CHARACTER. PROGRAMS     *|
|* WHOSE STRINGS ARE CODE PAGE 437 ART DEFINE CMT_CONSOLE_CP437_TEXT, AND     *|
|* EVERY BYTE ABOVE 0X7F IN TEXT IS THEN CODE PAGE 437.                       *|
\******************************************************************************/

#ifdef CMT_CONSOLE_CP437_TEXT
#define LOCALMACRO__CMT_CONSOLE__UTF8_LEAD(BYTE) 0
#else /* !CMT_CONSOLE_CP437_TEXT */
#define LOCALMACRO__CMT_CONSOLE__UTF8_LEAD(BYTE) \
	(\
		((unsigned int)(BYTE) >= (unsigned)0XC2) && \
		((unsigned int)(BYTE) <= (unsigned)0XF4)\
	)
#endif /* CMT_CONSOLE_CP437_TEXT */

#define LOCALMACRO__CMT_CONSOLE__ESC_TEXT 0
#define LOCALMACRO__CMT_CONSOLE__ESC_START 1
#define LOCALMACRO__CMT_CONSOLE__ESC_CSI 2
#define LOCALMACRO__CMT_CONSOLE__ESC_STRING 3
#define LOCALMACRO__CMT_CONSOLE__ESC_STRING_END 4

/* THE CURSOR GOES TO COLUMN 0 OF THE NEXT LINE, SCROLLING AT THE BOTTOM */
#define LOCALMACRO__CMT_CONSOLE__LINE_FEED \
	do\
	{\
		const int	__CMT_FEED_HEIGHT__ = (int)THIS->GET.HEIGHT;\
		\
		if ((THIS->GET.CURSOR.Y + 1) < __CMT_FEED_HEIGHT__)\
			OBJECT__INITIALIZE (THIS->GET.CURSOR.Y, int) = \
				THIS->GET.CURSOR.Y + 1;\
		else\
		{\
			LOCALMACRO__CMT_CONSOLE__SHADOW_SCROLL(THIS->GET.CURSOR.COLOR)\
			\
			if (THIS->_ACTIVE)\
			{\
				LOCALMACRO__CMT_CONSOLE__MOVE_TO(0, __CMT_FEED_HEIGHT__ - 1)\
				LOCALMACRO__CMT_CONSOLE__SET_PEN(THIS->GET.CURSOR.COLOR)\
				LOCALMACRO__CMT_CONSOLE__OUT_TEXT("\r\n")\
				THIS->_TX = 0;\
				THIS->_TY = __CMT_FEED_HEIGHT__ - 1;\
				THIS->_TVALID = TRUE;\
				THIS->_TWRAP = FALSE;\
			}\
			\
			OBJECT__INITIALIZE (THIS->GET.CURSOR.Y, int) = \
				__CMT_FEED_HEIGHT__ - 1;\
		}\
		\
		OBJECT__INITIALIZE (THIS->GET.CURSOR.X, int) = 0;\
		THIS->_WRAP = FALSE;\
	}\
	while (0);

/* ONE CHARACTER AT THE CURSOR, THEN ADVANCE (WITH A PENDING WRAP AT THE END) */
#define LOCALMACRO__CMT_CONSOLE__FEED_GLYPH(GLYPH) \
	do\
	{\
		const unsigned long	__CMT_FEED_GLYPH__ = (unsigned long)(GLYPH);\
		const int			__CMT_FEED_WIDE__ = (int)THIS->GET.WIDTH;\
		const int			__CMT_FEED_HIGH__ = (int)THIS->GET.HEIGHT;\
		\
		if ((__CMT_FEED_WIDE__ < 1) || (__CMT_FEED_HIGH__ < 1))\
			break ;\
		\
		if (THIS->_WRAP)\
		{\
			const int	__CMT_FEED_ROW__ = THIS->GET.CURSOR.Y;\
			\
			if (\
				THIS->_ACTIVE && THIS->_TWRAP && THIS->_TVALID && \
				(THIS->_TX == (__CMT_FEED_WIDE__ - 1)) && \
				(THIS->_TY == __CMT_FEED_ROW__)\
			)\
			{\
				/* THE TERMINAL WRAPS BY ITSELF WHEN THIS GLYPH ARRIVES */\
				if ((__CMT_FEED_ROW__ + 1) >= __CMT_FEED_HIGH__)\
				{\
					LOCALMACRO__CMT_CONSOLE__SHADOW_SCROLL(\
						THIS->GET.CURSOR.COLOR\
					)\
					OBJECT__INITIALIZE (THIS->GET.CURSOR.Y, int) = \
						__CMT_FEED_HIGH__ - 1;\
				}\
				else\
					OBJECT__INITIALIZE (THIS->GET.CURSOR.Y, int) = \
						__CMT_FEED_ROW__ + 1;\
				\
				OBJECT__INITIALIZE (THIS->GET.CURSOR.X, int) = 0;\
				THIS->_WRAP = FALSE;\
				THIS->_TX = 0;\
				THIS->_TY = THIS->GET.CURSOR.Y;\
				THIS->_TWRAP = FALSE;\
			}\
			else\
			{\
				LOCALMACRO__CMT_CONSOLE__LINE_FEED\
			}\
		}\
		\
		LOCALMACRO__CMT_CONSOLE__CELL(\
			THIS->GET.CURSOR.X, THIS->GET.CURSOR.Y, __CMT_FEED_GLYPH__,\
			THIS->GET.CURSOR.COLOR\
		)\
		\
		if ((THIS->GET.CURSOR.X + 1) >= __CMT_FEED_WIDE__)\
			THIS->_WRAP = TRUE;\
		else\
			OBJECT__INITIALIZE (THIS->GET.CURSOR.X, int) = \
				THIS->GET.CURSOR.X + 1;\
	}\
	while (0);

/* THE BYTES OF AN UNFINISHED UTF-8 CHARACTER, EACH READ AS CODE PAGE 437 */
#define LOCALMACRO__CMT_CONSOLE__FEED_BROKEN \
	do\
	{\
		unsigned long	__CMT_BROKEN_LEFT__ = THIS->_GLYPH;\
		\
		THIS->_GLYPH_NEED = 0;\
		\
		while (__CMT_BROKEN_LEFT__)\
		{\
			const unsigned int	__CMT_BROKEN_BYTE__ = \
				(unsigned int)(__CMT_BROKEN_LEFT__ & (unsigned long)0XFF);\
			\
			LOCALMACRO__CMT_CONSOLE__FEED_GLYPH(\
				LOCALMACRO__CMT_CONSOLE__BYTE_GLYPH(__CMT_BROKEN_BYTE__)\
			)\
			__CMT_BROKEN_LEFT__ = __CMT_BROKEN_LEFT__ >> 8;\
		}\
	}\
	while (0);

/* "\033[...M" FROM THE USER'S TEXT, APPLIED TO THE CURSOR PEN */
#define LOCALMACRO__CMT_CONSOLE__APPLY_SGR \
	do\
	{\
		const unsigned int	__CMT_SGR_DEFAULT__ = \
			THIS->GET.CURSOR.DEFAULT_COLOR;\
		unsigned int		__CMT_SGR_FORE__ = \
			THIS->GET.CURSOR.COLOR & (unsigned)0X0F;\
		unsigned int		__CMT_SGR_BACK__ = \
			(THIS->GET.CURSOR.COLOR >> 4) & (unsigned)0X0F;\
		unsigned int		__CMT_SGR_VALUE__ = (unsigned)0;\
		unsigned int		__CMT_SGR_AT__ = (unsigned)0;\
		int					__CMT_SGR_SKIP__ = 0;\
		int					__CMT_SGR_MODE__ = 0;\
		int					__CMT_SGR_BOLD__ = -1;\
		\
		while (__CMT_SGR_AT__ <= THIS->_ESC_FILL)\
		{\
			const char	__CMT_SGR_BYTE__ = (__CMT_SGR_AT__ < THIS->_ESC_FILL)\
				? THIS->_ESC_DATA[__CMT_SGR_AT__]\
				: ';';\
			\
			++__CMT_SGR_AT__;\
			\
			if ((__CMT_SGR_BYTE__ >= '0') && (__CMT_SGR_BYTE__ <= '9'))\
			{\
				__CMT_SGR_VALUE__ = (__CMT_SGR_VALUE__ * (unsigned)10) + \
					(unsigned int)(__CMT_SGR_BYTE__ - '0');\
				continue ;\
			}\
			\
			if ((__CMT_SGR_BYTE__ != ';') && (__CMT_SGR_BYTE__ != ':'))\
				continue ;\
			\
			if (__CMT_SGR_MODE__)\
			{\
				/* 38;5;N AND 38;2;R;G;B HAVE NO 16 COLOUR MEANING */\
				__CMT_SGR_SKIP__ = (__CMT_SGR_VALUE__ == (unsigned)5) ? 1 : \
					((__CMT_SGR_VALUE__ == (unsigned)2) ? 3 : 0);\
				__CMT_SGR_MODE__ = 0;\
			}\
			else if (__CMT_SGR_SKIP__)\
				--__CMT_SGR_SKIP__;\
			else if (__CMT_SGR_VALUE__ == (unsigned)0)\
			{\
				__CMT_SGR_FORE__ = __CMT_SGR_DEFAULT__ & (unsigned)0X0F;\
				__CMT_SGR_BACK__ = (__CMT_SGR_DEFAULT__ >> 4) & (unsigned)0X0F;\
				__CMT_SGR_BOLD__ = -1;\
			}\
			else if (__CMT_SGR_VALUE__ == (unsigned)1)\
				__CMT_SGR_BOLD__ = 1;\
			else if (__CMT_SGR_VALUE__ == (unsigned)22)\
			{\
				__CMT_SGR_BOLD__ = -1;\
				__CMT_SGR_FORE__ = __CMT_SGR_FORE__ & 7U;\
			}\
			else if (\
				(__CMT_SGR_VALUE__ >= (unsigned)30) && \
				(__CMT_SGR_VALUE__ <= (unsigned)37)\
			)\
				__CMT_SGR_FORE__ = (\
					(__CMT_SGR_FORE__ & (unsigned)8) | \
					LOCALMACRO__CMT_CONSOLE__ANSI_INDEX(\
						__CMT_SGR_VALUE__ - (unsigned)30\
					)\
				);\
			else if (\
				(__CMT_SGR_VALUE__ >= (unsigned)90) && \
				(__CMT_SGR_VALUE__ <= (unsigned)97)\
			)\
				__CMT_SGR_FORE__ = (\
					(unsigned)8 | \
					LOCALMACRO__CMT_CONSOLE__ANSI_INDEX(\
						__CMT_SGR_VALUE__ - (unsigned)90\
					)\
				);\
			else if (\
				(__CMT_SGR_VALUE__ >= (unsigned)40) && \
				(__CMT_SGR_VALUE__ <= (unsigned)47)\
			)\
				__CMT_SGR_BACK__ = LOCALMACRO__CMT_CONSOLE__ANSI_INDEX(\
					__CMT_SGR_VALUE__ - (unsigned)40\
				);\
			else if (\
				(__CMT_SGR_VALUE__ >= (unsigned)100) && \
				(__CMT_SGR_VALUE__ <= (unsigned)107)\
			)\
				__CMT_SGR_BACK__ = (\
					(unsigned)8 | LOCALMACRO__CMT_CONSOLE__ANSI_INDEX(\
						__CMT_SGR_VALUE__ - (unsigned)100\
					)\
				);\
			else if (__CMT_SGR_VALUE__ == (unsigned)39)\
				__CMT_SGR_FORE__ = __CMT_SGR_DEFAULT__ & (unsigned)0X0F;\
			else if (__CMT_SGR_VALUE__ == (unsigned)49)\
				__CMT_SGR_BACK__ = (__CMT_SGR_DEFAULT__ >> 4) & (unsigned)0X0F;\
			else if (\
				(__CMT_SGR_VALUE__ == (unsigned)38) || \
				(__CMT_SGR_VALUE__ == (unsigned)48)\
			)\
				__CMT_SGR_MODE__ = 1;\
			\
			__CMT_SGR_VALUE__ = (unsigned)0;\
		}\
		\
		if (__CMT_SGR_BOLD__ == 1)\
			__CMT_SGR_FORE__ = __CMT_SGR_FORE__ | (unsigned)8;\
		\
		OBJECT__INITIALIZE (THIS->GET.CURSOR.COLOR, unsigned int) = \
			(__CMT_SGR_BACK__ << 4) | __CMT_SGR_FORE__;\
	}\
	while (0);

/* AN ESCAPE SEQUENCE WE DO NOT MODEL: SEND IT, THEN TRUST NOTHING WE KNEW */
#define LOCALMACRO__CMT_CONSOLE__PASS_ESCAPE(FINAL) \
	do\
	{\
		unsigned int	__CMT_PASS_AT__;\
		\
		if (THIS->_ACTIVE)\
		{\
			LOCALMACRO__CMT_CONSOLE__OUT_BYTE('\033')\
			LOCALMACRO__CMT_CONSOLE__OUT_BYTE('[')\
			\
			for (\
				__CMT_PASS_AT__ = (unsigned)0;\
				__CMT_PASS_AT__ < THIS->_ESC_FILL;\
				++__CMT_PASS_AT__\
			)\
				LOCALMACRO__CMT_CONSOLE__OUT_BYTE(\
					THIS->_ESC_DATA[__CMT_PASS_AT__]\
				)\
			\
			LOCALMACRO__CMT_CONSOLE__OUT_BYTE(FINAL)\
		}\
		\
		THIS->_TVALID = FALSE;\
		THIS->_TPEN = -1;\
	}\
	while (0);

/* ONE BYTE OF LOG() TEXT */
#define LOCALMACRO__CMT_CONSOLE__FEED(BYTE) \
	do\
	{\
		const unsigned int	__CMT_BYTE__ = (unsigned int)(unsigned char)(BYTE);\
		\
		if (THIS->_ESC_STATE == LOCALMACRO__CMT_CONSOLE__ESC_START)\
		{\
			if (__CMT_BYTE__ == (unsigned int)'[')\
			{\
				THIS->_ESC_STATE = LOCALMACRO__CMT_CONSOLE__ESC_CSI;\
				THIS->_ESC_FILL = (unsigned)0;\
			}\
			else if (\
				(__CMT_BYTE__ == (unsigned int)']') || \
				(__CMT_BYTE__ == (unsigned int)'P') || \
				(__CMT_BYTE__ == (unsigned int)'_') || \
				(__CMT_BYTE__ == (unsigned int)'^') || \
				(__CMT_BYTE__ == (unsigned int)'X')\
			)\
			{\
				if (THIS->_ACTIVE)\
				{\
					LOCALMACRO__CMT_CONSOLE__OUT_BYTE('\033')\
					LOCALMACRO__CMT_CONSOLE__OUT_BYTE(__CMT_BYTE__)\
				}\
				\
				THIS->_ESC_STATE = LOCALMACRO__CMT_CONSOLE__ESC_STRING;\
			}\
			else if (__CMT_BYTE__ == (unsigned)0X1B)\
				THIS->_ESC_STATE = LOCALMACRO__CMT_CONSOLE__ESC_START;\
			else\
			{\
				if (\
					THIS->_ACTIVE && \
					(__CMT_BYTE__ >= (unsigned)0X20) && \
					(__CMT_BYTE__ < (unsigned)0X7F)\
				)\
				{\
					LOCALMACRO__CMT_CONSOLE__OUT_BYTE('\033')\
					LOCALMACRO__CMT_CONSOLE__OUT_BYTE(__CMT_BYTE__)\
				}\
				\
				THIS->_TVALID = FALSE;\
				THIS->_TPEN = -1;\
				THIS->_ESC_STATE = LOCALMACRO__CMT_CONSOLE__ESC_TEXT;\
			}\
			\
			break ;\
		}\
		\
		if (THIS->_ESC_STATE == LOCALMACRO__CMT_CONSOLE__ESC_CSI)\
		{\
			if (\
				(__CMT_BYTE__ >= (unsigned)0X40) && \
				(__CMT_BYTE__ <= (unsigned)0X7E)\
			)\
			{\
				const int	__CMT_PRIVATE__ = (\
					THIS->_ESC_FILL && (\
						(THIS->_ESC_DATA[0] == '?') || \
						(THIS->_ESC_DATA[0] == '<') || \
						(THIS->_ESC_DATA[0] == '=') || \
						(THIS->_ESC_DATA[0] == '>')\
					)\
				);\
				\
				if (\
					(__CMT_BYTE__ == (unsigned int)'m') && !__CMT_PRIVATE__ && \
					(THIS->_ESC_FILL < (unsigned int)sizeof(THIS->_ESC_DATA))\
				)\
				{\
					LOCALMACRO__CMT_CONSOLE__APPLY_SGR\
				}\
				else if (\
					THIS->_ESC_FILL < (unsigned int)sizeof(THIS->_ESC_DATA)\
				)\
				{\
					LOCALMACRO__CMT_CONSOLE__PASS_ESCAPE(__CMT_BYTE__)\
				}\
				else\
				{\
					THIS->_TVALID = FALSE;\
					THIS->_TPEN = -1;\
				}\
				\
				THIS->_ESC_STATE = LOCALMACRO__CMT_CONSOLE__ESC_TEXT;\
			}\
			else if (\
				(__CMT_BYTE__ >= (unsigned)0X20) && \
				(__CMT_BYTE__ <= (unsigned)0X3F)\
			)\
			{\
				if (THIS->_ESC_FILL < (unsigned int)sizeof(THIS->_ESC_DATA))\
					THIS->_ESC_DATA[THIS->_ESC_FILL++] = (char)__CMT_BYTE__;\
				else\
					THIS->_ESC_FILL = (unsigned int)sizeof(THIS->_ESC_DATA);\
			}\
			else if (__CMT_BYTE__ == (unsigned)0X1B)\
				THIS->_ESC_STATE = LOCALMACRO__CMT_CONSOLE__ESC_START;\
			\
			break ;\
		}\
		\
		if (\
			(THIS->_ESC_STATE == LOCALMACRO__CMT_CONSOLE__ESC_STRING) || \
			(THIS->_ESC_STATE == LOCALMACRO__CMT_CONSOLE__ESC_STRING_END)\
		)\
		{\
			if (THIS->_ACTIVE)\
				LOCALMACRO__CMT_CONSOLE__OUT_BYTE(__CMT_BYTE__)\
			\
			if (__CMT_BYTE__ == (unsigned)0X07)\
				THIS->_ESC_STATE = LOCALMACRO__CMT_CONSOLE__ESC_TEXT;\
			else if (\
				(\
					THIS->_ESC_STATE == \
					LOCALMACRO__CMT_CONSOLE__ESC_STRING_END\
				) && (__CMT_BYTE__ == (unsigned int)'\\')\
			)\
				THIS->_ESC_STATE = LOCALMACRO__CMT_CONSOLE__ESC_TEXT;\
			else if (__CMT_BYTE__ == (unsigned)0X1B)\
				THIS->_ESC_STATE = LOCALMACRO__CMT_CONSOLE__ESC_STRING_END;\
			else\
				THIS->_ESC_STATE = LOCALMACRO__CMT_CONSOLE__ESC_STRING;\
			\
			break ;\
		}\
		\
		if (THIS->_GLYPH_NEED)\
		{\
			if ((__CMT_BYTE__ & (unsigned)0XC0) == (unsigned)0X80)\
			{\
				++THIS->_GLYPH_HAVE;\
				THIS->_GLYPH = THIS->_GLYPH | (\
					(unsigned long)__CMT_BYTE__ << (8 * THIS->_GLYPH_HAVE)\
				);\
				\
				if (THIS->_GLYPH_HAVE >= THIS->_GLYPH_NEED)\
				{\
					THIS->_GLYPH_NEED = 0;\
					LOCALMACRO__CMT_CONSOLE__FEED_GLYPH(THIS->_GLYPH)\
				}\
				\
				break ;\
			}\
			\
			LOCALMACRO__CMT_CONSOLE__FEED_BROKEN\
		}\
		\
		if (LOCALMACRO__CMT_CONSOLE__UTF8_LEAD(__CMT_BYTE__))\
		{\
			THIS->_GLYPH = (unsigned long)__CMT_BYTE__;\
			THIS->_GLYPH_HAVE = 0;\
			THIS->_GLYPH_NEED = (\
				(__CMT_BYTE__ >= (unsigned)0XF0) ? 3 : \
				((__CMT_BYTE__ >= (unsigned)0XE0) ? 2 : 1)\
			);\
		}\
		else if (__CMT_BYTE__ >= (unsigned)0X80)\
		{\
			LOCALMACRO__CMT_CONSOLE__FEED_GLYPH(\
				LOCALMACRO__CMT_CONSOLE__BYTE_GLYPH(__CMT_BYTE__)\
			)\
		}\
		else if (\
			(__CMT_BYTE__ >= (unsigned)0X20) && \
			(__CMT_BYTE__ != (unsigned)0X7F)\
		)\
		{\
			LOCALMACRO__CMT_CONSOLE__FEED_GLYPH(__CMT_BYTE__)\
		}\
		else if (__CMT_BYTE__ == (unsigned int)'\n')\
		{\
			LOCALMACRO__CMT_CONSOLE__LINE_FEED\
		}\
		else if (__CMT_BYTE__ == (unsigned int)'\r')\
		{\
			OBJECT__INITIALIZE (THIS->GET.CURSOR.X, int) = 0;\
			THIS->_WRAP = FALSE;\
		}\
		else if (__CMT_BYTE__ == (unsigned int)'\b')\
		{\
			if (THIS->_WRAP)\
				THIS->_WRAP = FALSE;\
			else if (THIS->GET.CURSOR.X > 0)\
				OBJECT__INITIALIZE (THIS->GET.CURSOR.X, int) = \
					THIS->GET.CURSOR.X - 1;\
		}\
		else if (__CMT_BYTE__ == (unsigned int)'\t')\
		{\
			int	__CMT_TAB__ = (\
				THIS->_WRAP ? 8 : (8 - (THIS->GET.CURSOR.X % 8))\
			);\
			\
			while (__CMT_TAB__-- > 0)\
				LOCALMACRO__CMT_CONSOLE__FEED_GLYPH(' ')\
		}\
		else if (__CMT_BYTE__ == (unsigned)0X07)\
		{\
			if (THIS->_ACTIVE)\
				LOCALMACRO__CMT_CONSOLE__OUT_BYTE(0X07)\
		}\
		else if (__CMT_BYTE__ == (unsigned)0X1B)\
			THIS->_ESC_STATE = LOCALMACRO__CMT_CONSOLE__ESC_START;\
	}\
	while (0);

/******************************************************************************\
|* READ ONE CHARACTER OUT OF A STRING THAT IS NOT GOING THROUGH LOG(), FOR    *|
|* PUT.COLORED.STRING: THE SAME UTF-8 / CODE PAGE 437 RULES, NO STATE KEPT.   *|
\******************************************************************************/

#define LOCALMACRO__CMT_CONSOLE__NEXT_GLYPH(CURSOR, GLYPH) \
	do\
	{\
		const unsigned char	*__CMT_NEXT__ = (const unsigned char *)(CURSOR);\
		const unsigned int	__CMT_NEXT_LEAD__ = (unsigned int)__CMT_NEXT__[0];\
		int					__CMT_NEXT_AT__ = 1;\
		const int			__CMT_NEXT_NEED__ = (\
			LOCALMACRO__CMT_CONSOLE__UTF8_LEAD(__CMT_NEXT_LEAD__)\
				? (\
					(__CMT_NEXT_LEAD__ >= (unsigned)0XF0) ? 3 : \
					((__CMT_NEXT_LEAD__ >= (unsigned)0XE0) ? 2 : 1)\
				) : 0\
		);\
		\
		while (\
			(__CMT_NEXT_AT__ <= __CMT_NEXT_NEED__) && \
			(\
				(__CMT_NEXT__[__CMT_NEXT_AT__] & (unsigned)0XC0) == \
				(unsigned)0X80\
			)\
		)\
			++__CMT_NEXT_AT__;\
		\
		if (__CMT_NEXT_NEED__ && (__CMT_NEXT_AT__ > __CMT_NEXT_NEED__))\
		{\
			(GLYPH) = (unsigned long)0;\
			\
			while (__CMT_NEXT_AT__-- > 0)\
				(GLYPH) = ((GLYPH) << 8) | \
					(unsigned long)__CMT_NEXT__[__CMT_NEXT_AT__];\
			\
			(CURSOR) += __CMT_NEXT_NEED__ + 1;\
		}\
		else\
		{\
			(GLYPH) = LOCALMACRO__CMT_CONSOLE__BYTE_GLYPH(__CMT_NEXT_LEAD__);\
			(CURSOR) += 1;\
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
