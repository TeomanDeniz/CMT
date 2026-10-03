#ifndef CONSOLE_HPP
#ifndef CONSOLE_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_H */
#endif /* !CONSOLE_HPP */

/******************************************************************************\
|* A SNAPSHOT OF THE SHADOW SCREEN: THE HEADER, THEN FOUR BYTES OF UTF-8 PER  *|
|* CELL (ZERO PADDED), THEN ONE ATTRIBUTE BYTE PER CELL. ONE ALLOC, YOURS TO  *|
|* FREE() WHEN DONE.                                                          *|
\******************************************************************************/

#define LOCALMACRO__CMT_CONSOLE__EXPORT_CONTENT \
	struct S_CONSOLE_SNAPSHOT	*SNAPSHOT;\
	const unsigned long			CELLS =\
		(unsigned long)THIS->_CELLS_W * (unsigned long)THIS->_CELLS_H;\
	unsigned char				*GLYPHS;\
	unsigned char				*ATTRIBUTES;\
	unsigned long				AT;\
	PTR							BLOCK;\
	\
	LOCALMACRO__CMT_CONSOLE__ENTER\
	BLOCK = ALLOC(\
		(LET)(\
			sizeof(struct S_CONSOLE_SNAPSHOT) + \
			(CELLS * (unsigned long)4) + CELLS + (unsigned long)1\
		)\
	);\
	\
	if (!BLOCK)\
		return ((PTR)0);\
	\
	SNAPSHOT = (struct S_CONSOLE_SNAPSHOT *)BLOCK;\
	GLYPHS = (unsigned char *)(SNAPSHOT + 1);\
	ATTRIBUTES = GLYPHS + (CELLS * (unsigned long)4);\
	SNAPSHOT->MAGIC = LOCALMACRO__CMT_CONSOLE__SNAPSHOT_MAGIC;\
	SNAPSHOT->VERSION = LOCALMACRO__CMT_CONSOLE__SNAPSHOT_VERSION;\
	SNAPSHOT->WIDTH = (unsigned long)THIS->_CELLS_W;\
	SNAPSHOT->HEIGHT = (unsigned long)THIS->_CELLS_H;\
	SNAPSHOT->CURSOR_X = (long)THIS->GET.CURSOR.X;\
	SNAPSHOT->CURSOR_Y = (long)THIS->GET.CURSOR.Y;\
	SNAPSHOT->CURSOR_SIZE = THIS->GET.CURSOR.SIZE;\
	SNAPSHOT->CURSOR_VISIBLE = (unsigned long)THIS->GET.CURSOR.VISIBLE;\
	SNAPSHOT->COLOR = (unsigned long)THIS->GET.COLOR;\
	SNAPSHOT->DEFAULT_COLOR = (unsigned long)THIS->GET.DEFAULT_COLOR;\
	\
	for (AT = (unsigned long)0; AT < CELLS; ++AT)\
	{\
		const unsigned long	GLYPH = ((unsigned long *)THIS->_CELLS)[AT];\
		\
		GLYPHS[(AT * 4) + 0] = (unsigned char)(GLYPH & 0XFF);\
		GLYPHS[(AT * 4) + 1] = (unsigned char)((GLYPH >> 8) & 0XFF);\
		GLYPHS[(AT * 4) + 2] = (unsigned char)((GLYPH >> 16) & 0XFF);\
		GLYPHS[(AT * 4) + 3] = (unsigned char)((GLYPH >> 24) & 0XFF);\
		ATTRIBUTES[AT] = ((unsigned char *)THIS->_ATTRS)[AT];\
	}\
	\
	return (BLOCK);

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
