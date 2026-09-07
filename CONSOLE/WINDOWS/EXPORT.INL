#ifndef CONSOLE_HPP
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_HPP */

#define LOCALMACRO__CMT_CONSOLE__EXPORT_CONTENT \
	struct S_CONSOLE_SNAPSHOT	*SNAPSHOT;\
	const unsigned long			CELLS =\
		(unsigned long)THIS->get.width * (unsigned long)THIS->get.height;\
	const unsigned long			TEXT_BYTES = \
		(CELLS + (unsigned long)1) & ~(unsigned long)1;\
	struct S_COORD				ORIGIN;\
	unsigned long				READ;\
	char						*TEXT;\
	unsigned short				*ATTRIBUTES;\
	PTR							BLOCK;\
	\
	BLOCK = ALLOC(\
		sizeof(struct S_CONSOLE_SNAPSHOT) + TEXT_BYTES +\
			(CELLS * sizeof(unsigned short))\
	);\
	\
	if (!BLOCK)\
		return ((PTR)0);\
	\
	SNAPSHOT = (struct S_CONSOLE_SNAPSHOT *)BLOCK;\
	TEXT = (char *)(SNAPSHOT + 1);\
	ATTRIBUTES = (unsigned short *)(TEXT + TEXT_BYTES);\
	SNAPSHOT->MAGIC = LOCALMACRO__CMT_CONSOLE__SNAPSHOT_MAGIC;\
	SNAPSHOT->VERSION = LOCALMACRO__CMT_CONSOLE__SNAPSHOT_VERSION;\
	SNAPSHOT->WIDTH = (unsigned long)THIS->get.width;\
	SNAPSHOT->HEIGHT = (unsigned long)THIS->get.height;\
	SNAPSHOT->CURSOR_X = (long)THIS->get.cursor.x;\
	SNAPSHOT->CURSOR_Y = (long)THIS->get.cursor.y;\
	SNAPSHOT->CURSOR_SIZE = THIS->get.cursor.size;\
	SNAPSHOT->CURSOR_VISIBLE = (unsigned long)THIS->get.cursor.visible;\
	SNAPSHOT->COLOR = (unsigned long)THIS->get.color;\
	SNAPSHOT->DEFAULT_COLOR = (unsigned long)THIS->get.default_color;\
	ORIGIN.X = 0;\
	ORIGIN.Y = 0;\
	KERNEL32.ReadConsoleOutputCharacterA(\
		THIS->_OUT_HANDLE, TEXT, CELLS, ORIGIN, &READ\
	);\
	KERNEL32.ReadConsoleOutputAttribute(\
		THIS->_OUT_HANDLE, ATTRIBUTES, CELLS, ORIGIN, &READ\
	);\
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
