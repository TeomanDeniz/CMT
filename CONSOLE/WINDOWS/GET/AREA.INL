#ifndef CONSOLE_HPP
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_HPP */

#define LOCALMACRO__CMT_CONSOLE__GET_AREA_CONTENT \
	long			LEFT = (long)START_X;\
	long			RIGHT = (long)END_X;\
	long			TOP = (long)START_Y;\
	long			BOTTOM = (long)END_Y;\
	long			ROW;\
	unsigned long	COLUMNS;\
	unsigned long	ROWS;\
	unsigned long	STRIDE;\
	char			**TABLE;\
	char			*TEXT;\
	PTR				BLOCK;\
	\
	LOCALMACRO__CMT_CONSOLE__SWAP (LEFT, RIGHT);\
	LOCALMACRO__CMT_CONSOLE__SWAP (TOP, BOTTOM);\
	\
	if (RIGHT >= (long)THIS->get.width)\
		RIGHT = (long)THIS->get.width - (long)1;\
	\
	if (BOTTOM >= (long)THIS->get.height)\
		BOTTOM = (long)THIS->get.height - (long)1;\
	\
	if ((LEFT > RIGHT) || (TOP > BOTTOM))\
		return ((char **)0);\
	\
	COLUMNS = (unsigned long)((RIGHT - LEFT) + (long)1);\
	ROWS = (unsigned long)((BOTTOM - TOP) + (long)1);\
	STRIDE = COLUMNS + (unsigned long)1;\
	LOCALMACRO__CMT_CONSOLE__SCRATCH(\
		BLOCK, ((ROWS + (unsigned long)1) * sizeof(char *)) + (ROWS * STRIDE)\
	)\
	\
	if (!BLOCK)\
		return ((char **)0);\
	\
	TABLE = (char **)BLOCK;\
	TEXT = (char *)(TABLE + (ROWS + (unsigned long)1));\
	\
	for (ROW = (long)0; ROW < (long)ROWS; ++ROW)\
	{\
		struct S_COORD	ORIGIN;\
		unsigned long	READ = (unsigned long)0;\
		\
		ORIGIN.X = (short)LEFT;\
		ORIGIN.Y = (short)(TOP + ROW);\
		KERNEL32.ReadConsoleOutputCharacterA(\
			THIS->_OUT_HANDLE, TEXT + ((unsigned long)ROW * STRIDE), COLUMNS,\
			ORIGIN, &READ\
		);\
		TEXT[((unsigned long)ROW * STRIDE) + READ] = (char)0;\
		TABLE[ROW] = TEXT + ((unsigned long)ROW * STRIDE);\
	}\
	\
	TABLE[ROWS] = (char *)0;\
	\
	return (TABLE);

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
