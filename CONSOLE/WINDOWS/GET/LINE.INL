#ifndef CONSOLE_HPP
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_HPP */

#define LOCALMACRO__CMT_CONSOLE__GET_LINE_CONTENT \
	const unsigned long	SPAN = (unsigned long)THIS->get.width;\
	const unsigned long	ROOM = SPAN * (unsigned long)THIS->get.height;\
	unsigned long		FROM = \
		((unsigned long)START_Y * SPAN) + (unsigned long)START_X;\
	unsigned long		TO = \
		((unsigned long)END_Y * SPAN) + (unsigned long)END_X;\
	unsigned long		COUNT;\
	unsigned long		READ;\
	struct S_COORD		ORIGIN;\
	PTR					BLOCK;\
	\
	if (TO < FROM)\
	{\
		const unsigned long	SWAP = FROM;\
		\
		FROM = TO;\
		TO = SWAP;\
	}\
	\
	if (FROM >= ROOM)\
		return ((char *)0);\
	\
	if (TO >= ROOM)\
		TO = ROOM - (unsigned long)1;\
	\
	COUNT = (TO - FROM) + (unsigned long)1;\
	LOCALMACRO__CMT_CONSOLE__SCRATCH (BLOCK, COUNT + (unsigned long)1)\
	\
	if (!BLOCK)\
		return ((char *)0);\
	\
	ORIGIN.X = (short)(FROM % SPAN);\
	ORIGIN.Y = (short)(FROM / SPAN);\
	READ = (unsigned long)0;\
	KERNEL32.ReadConsoleOutputCharacterA(\
		THIS->_OUT_HANDLE, (char *)BLOCK, COUNT, ORIGIN, &READ\
	);\
	((char *)BLOCK)[READ] = (char)0;\
	return ((char *)BLOCK);

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
