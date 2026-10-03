#ifndef CONSOLE_HPP
#ifndef CONSOLE_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_H */
#endif /* !CONSOLE_HPP */

/******************************************************************************\
|* PUT A SNAPSHOT BACK. A SNAPSHOT FROM A DIFFERENT SIZE IS COPIED ROW BY ROW *|
|* INTO THE TOP LEFT CORNER, CLIPPED; CELLS IT DOES NOT COVER STAY AS THEY    *|
|* ARE. THEN THE WHOLE SCREEN IS REPAINTED AND THE CURSOR RESTORED.           *|
\******************************************************************************/

#define LOCALMACRO__CMT_CONSOLE__IMPORT_CONTENT \
	struct S_CONSOLE_SNAPSHOT	*SNAPSHOT =\
		(struct S_CONSOLE_SNAPSHOT *)DATA;\
	const unsigned char			*GLYPHS;\
	const unsigned char			*ATTRIBUTES;\
	unsigned long				ROW;\
	unsigned long				COLUMN;\
	unsigned long				ROWS;\
	unsigned long				SPAN;\
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
	LOCALMACRO__CMT_CONSOLE__ENTER_AT\
	GLYPHS = (const unsigned char *)(SNAPSHOT + 1);\
	ATTRIBUTES = \
		GLYPHS + ((SNAPSHOT->WIDTH * SNAPSHOT->HEIGHT) * (unsigned long)4);\
	ROWS = (SNAPSHOT->HEIGHT < (unsigned long)THIS->_CELLS_H)\
		? SNAPSHOT->HEIGHT : (unsigned long)THIS->_CELLS_H;\
	SPAN = (SNAPSHOT->WIDTH < (unsigned long)THIS->_CELLS_W)\
		? SNAPSHOT->WIDTH : (unsigned long)THIS->_CELLS_W;\
	\
	for (ROW = (unsigned long)0; THIS->_CELLS && (ROW < ROWS); ++ROW)\
	{\
		for (COLUMN = (unsigned long)0; COLUMN < SPAN; ++COLUMN)\
		{\
			const unsigned long	FROM = (ROW * SNAPSHOT->WIDTH) + COLUMN;\
			const unsigned long	TO = \
				(ROW * (unsigned long)THIS->_CELLS_W) + COLUMN;\
			\
			((unsigned long *)THIS->_CELLS)[TO] = \
				(unsigned long)GLYPHS[(FROM * 4) + 0] | \
				((unsigned long)GLYPHS[(FROM * 4) + 1] << 8) | \
				((unsigned long)GLYPHS[(FROM * 4) + 2] << 16) | \
				((unsigned long)GLYPHS[(FROM * 4) + 3] << 24);\
			((unsigned char *)THIS->_ATTRS)[TO] = ATTRIBUTES[FROM];\
		}\
	}\
	\
	LOCALMACRO__CMT_CONSOLE__BATCH_BEGIN\
	LOCALMACRO__CMT_CONSOLE__REDRAW\
	OBJECT__INITIALIZE (THIS->GET.DEFAULT_COLOR, unsigned int) = \
		(unsigned int)SNAPSHOT->DEFAULT_COLOR;\
	THIS->CURSOR.SIZE(\
		SNAPSHOT->CURSOR_SIZE ? SNAPSHOT->CURSOR_SIZE : (unsigned long)25\
	);\
	THIS->CURSOR.SHOW(SNAPSHOT->CURSOR_VISIBLE ? TRUE : FALSE);\
	THIS->CURSOR.XY(\
		(unsigned int)SNAPSHOT->CURSOR_X, (unsigned int)SNAPSHOT->CURSOR_Y\
	);\
	THIS->CURSOR.COLOR((unsigned int)SNAPSHOT->COLOR);\
	OBJECT__INITIALIZE (THIS->GET.COLOR, unsigned int) = \
		(unsigned int)SNAPSHOT->COLOR;\
	LOCALMACRO__CMT_CONSOLE__BATCH_END

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
