#ifndef CONSOLE_HPP
#ifndef CONSOLE_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_H */
#endif /* !CONSOLE_HPP */

/******************************************************************************\
|* READ BACK FROM THE SHADOW SCREEN, AS UTF-8. A TERMINAL CAN NOT BE READ, SO *|
|* THIS SEES WHAT THIS CONSOLE OBJECT DREW: TEXT PRINTED BY SOMETHING ELSE    *|
|* (PRINTF, THE SHELL BEFORE THE PROGRAM STARTED) READS AS SPACES.            *|
\******************************************************************************/

#define LOCALMACRO__CMT_CONSOLE__GET_LINE_CONTENT \
	const unsigned long	SPAN = (unsigned long)THIS->_CELLS_W;\
	const unsigned long	ROOM = SPAN * (unsigned long)THIS->_CELLS_H;\
	unsigned long		FROM = \
		((unsigned long)START_Y * SPAN) + (unsigned long)START_X;\
	unsigned long		TO = \
		((unsigned long)END_Y * SPAN) + (unsigned long)END_X;\
	unsigned long		AT;\
	unsigned long		FILL;\
	PTR					BLOCK;\
	\
	LOCALMACRO__CMT_CONSOLE__ENTER\
	\
	if (TO < FROM)\
	{\
		const unsigned long	SWAP = FROM;\
		\
		FROM = TO;\
		TO = SWAP;\
	}\
	\
	if (!THIS->_CELLS || (FROM >= ROOM))\
		return ((char *)0);\
	\
	if (TO >= ROOM)\
		TO = ROOM - (unsigned long)1;\
	\
	LOCALMACRO__CMT_CONSOLE__SCRATCH(\
		BLOCK, (((TO - FROM) + (unsigned long)1) * (unsigned long)4) + \
			(unsigned long)1\
	)\
	\
	if (!BLOCK)\
		return ((char *)0);\
	\
	FILL = (unsigned long)0;\
	\
	for (AT = FROM; AT <= TO; ++AT)\
	{\
		unsigned long	GLYPH = ((unsigned long *)THIS->_CELLS)[AT];\
		\
		if (!GLYPH)\
			GLYPH = (unsigned long)' ';\
		\
		while (GLYPH)\
		{\
			((char *)BLOCK)[FILL++] = (char)(GLYPH & (unsigned long)0XFF);\
			GLYPH = GLYPH >> 8;\
		}\
	}\
	\
	((char *)BLOCK)[FILL] = (char)0;\
	return ((char *)BLOCK);

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
