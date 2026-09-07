#ifndef CONSOLE_HPP
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_HPP */

#define LOCALMACRO__CMT_CONSOLE__IMPORT_CONTENT \
	struct S_CONSOLE_SNAPSHOT		*SNAPSHOT =\
		(struct S_CONSOLE_SNAPSHOT *)DATA;\
	struct S_CONSOLE_CURSOR_INFO	CURSOR_INFO;\
	struct S_COORD					ORIGIN;\
	unsigned long					WRITTEN;\
	unsigned long					CELLS;\
	unsigned long					TEXT_BYTES;\
	unsigned long					ROOM;\
	char							*TEXT;\
	unsigned short					*ATTRIBUTES;\
	\
	if (!SNAPSHOT)\
		return (THIS);\
	\
	if (SNAPSHOT->MAGIC != LOCALMACRO__CMT_CONSOLE__SNAPSHOT_MAGIC)\
		return (THIS);\
	\
	if (SNAPSHOT->VERSION != LOCALMACRO__CMT_CONSOLE__SNAPSHOT_VERSION)\
		return (THIS);\
	\
	CELLS = SNAPSHOT->WIDTH * SNAPSHOT->HEIGHT;\
	TEXT_BYTES = (CELLS + (unsigned long)1) & ~(unsigned long)1;\
	TEXT = (char *)(SNAPSHOT + 1);\
	ATTRIBUTES = (unsigned short *)(TEXT + TEXT_BYTES);\
	ROOM = (unsigned long)THIS->get.width * (unsigned long)THIS->get.height;\
	\
	if (SNAPSHOT->WIDTH == (unsigned long)THIS->get.width)\
	{\
		if (CELLS > ROOM)\
			CELLS = ROOM;\
		\
		ORIGIN.X = 0;\
		ORIGIN.Y = 0;\
		KERNEL32.WriteConsoleOutputCharacterA(\
			THIS->_OUT_HANDLE, TEXT, CELLS, ORIGIN, &WRITTEN\
		);\
		KERNEL32.WriteConsoleOutputAttribute(\
			THIS->_OUT_HANDLE, ATTRIBUTES, CELLS, ORIGIN, &WRITTEN\
		);\
	}\
	else\
	{\
		unsigned long		ROW;\
		unsigned long		SPAN = SNAPSHOT->WIDTH;\
		const unsigned long	ROWS = (SNAPSHOT->HEIGHT > THIS->get.height)\
			? (unsigned long)THIS->get.height\
			: SNAPSHOT->HEIGHT;\
		\
		if (SPAN > (unsigned long)THIS->get.width)\
			SPAN = (unsigned long)THIS->get.width;\
		\
		for (ROW = (unsigned long)0; ROW < ROWS; ++ROW)\
		{\
			ORIGIN.X = 0;\
			ORIGIN.Y = (short)ROW;\
			KERNEL32.WriteConsoleOutputCharacterA(\
				THIS->_OUT_HANDLE, TEXT + (ROW * SNAPSHOT->WIDTH), SPAN,\
				ORIGIN, &WRITTEN\
			);\
			KERNEL32.WriteConsoleOutputAttribute(\
				THIS->_OUT_HANDLE, ATTRIBUTES + (ROW * SNAPSHOT->WIDTH), SPAN,\
				ORIGIN, &WRITTEN\
			);\
		}\
	}\
	\
	if (SNAPSHOT->CURSOR_SIZE)\
		CURSOR_INFO.SIZE = SNAPSHOT->CURSOR_SIZE;\
	else\
		CURSOR_INFO.SIZE = (unsigned long)25;\
	\
	if (SNAPSHOT->CURSOR_VISIBLE)\
		CURSOR_INFO.VISIBLE = TRUE;\
	else\
		CURSOR_INFO.VISIBLE = FALSE;\
	\
	KERNEL32.SetConsoleCursorInfo(THIS->_OUT_HANDLE, &CURSOR_INFO);\
	OBJECT__INITIALIZE (THIS->get.cursor.size, unsigned long) = \
		CURSOR_INFO.SIZE;\
	OBJECT__INITIALIZE (THIS->get.cursor.visible, BOOLEAN) = \
		(BOOLEAN)CURSOR_INFO.VISIBLE;\
	OBJECT__INITIALIZE (THIS->get.default_color, unsigned int) = \
		(unsigned int)SNAPSHOT->DEFAULT_COLOR;\
	THIS->cursor.xy(\
		(unsigned int)SNAPSHOT->CURSOR_X, (unsigned int)SNAPSHOT->CURSOR_Y\
	);\
	THIS->cursor.color((unsigned int)SNAPSHOT->COLOR);\
	OBJECT__INITIALIZE (THIS->get.color, unsigned int) = \
		(unsigned int)SNAPSHOT->COLOR;

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
