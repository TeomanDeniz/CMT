#ifndef CONSOLE_HPP
#ifndef CONSOLE_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_H */
#endif /* !CONSOLE_HPP */

/******************************************************************************\
|* THE TERMINAL IS LEFT AS IT WAS FOUND: COOKED MODE, NO MOUSE REPORTING, THE *|
|* TERMINAL'S OWN COLOURS, THE ORIGINAL CURSOR SHAPE AND VISIBILITY, AND THE  *|
|* ORIGINAL WINDOW TITLE (FOR TERMINALS WITH A TITLE STACK). THE TEXT THAT    *|
|* WAS WRITTEN STAYS ON SCREEN, AS IT DOES ON WINDOWS.                        *|
\******************************************************************************/

#define LOCALMACRO__CMT_CONSOLE__DESTRUCTOR_CONTENT \
	THIS->_PUSH_DEPTH = (unsigned)0;\
	THIS->_BATCH = (unsigned)0;\
	LOCALMACRO__CMT_CONSOLE__RAW_LEAVE(1)\
	\
	if (THIS->_ACTIVE)\
	{\
		if (THIS->_TITLED)\
			LOCALMACRO__CMT_CONSOLE__OUT_TEXT("\033[23;0t")\
		\
		LOCALMACRO__CMT_CONSOLE__LOOK_RESTORE\
		THIS->_SHAPED = FALSE;\
		THIS->_TITLED = FALSE;\
	}\
	\
	if (THIS->_OUT_FILL)\
	{\
		LOCALMACRO__CMT_CONSOLE__OUT_FLUSH\
	}\
	\
	if (THIS->_OWN_IN)\
	{\
		close(THIS->_IN_FD);\
		THIS->_IN_FD = 0;\
		THIS->_OWN_IN = FALSE;\
	}\
	\
	THIS->_INPUT = FALSE;\
	\
	if (THIS->_OUT_DATA)\
	{\
		FREE(THIS->_OUT_DATA);\
		THIS->_OUT_DATA = (PTR)0;\
	}\
	\
	if (THIS->_SCRATCH_DATA)\
	{\
		FREE(THIS->_SCRATCH_DATA);\
		THIS->_SCRATCH_DATA = (PTR)0;\
	}\
	\
	if (THIS->_CELLS)\
	{\
		FREE(THIS->_CELLS);\
		THIS->_CELLS = (PTR)0;\
	}\
	\
	if (THIS->_ATTRS)\
	{\
		FREE(THIS->_ATTRS);\
		THIS->_ATTRS = (PTR)0;\
	}\
	\
	THIS->_OUT_FILL = (unsigned long)0;\
	THIS->_OUT_CAPACITY = (unsigned long)0;\
	THIS->_SCRATCH_SIZE = (unsigned long)0;\
	THIS->_CELLS_W = (unsigned)0;\
	THIS->_CELLS_H = (unsigned)0;

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
