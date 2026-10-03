#ifndef CONSOLE_HPP
#ifndef CONSOLE_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_H */
#endif /* !CONSOLE_HPP */

/******************************************************************************\
|* BLANK THE SCREEN IN THE SCREEN COLOUR (GET.COLOR) AND HOME THE CURSOR.     *|
|* "ESC [ 2 J" FILLS WITH THE CURRENT BACKGROUND ON EVERY MODERN TERMINAL.    *|
\******************************************************************************/

#define LOCALMACRO__CMT_CONSOLE__CLEAR_CONTENT \
	do\
	{\
		const unsigned long	__CMT_CLEAR_CELLS__ = \
			(unsigned long)THIS->_CELLS_W * (unsigned long)THIS->_CELLS_H;\
		unsigned long		__CMT_CLEAR_AT__;\
		\
		LOCALMACRO__CMT_CONSOLE__ENTER_AT\
		LOCALMACRO__CMT_CONSOLE__BATCH_BEGIN\
		\
		if (THIS->_CELLS)\
		{\
			for (\
				__CMT_CLEAR_AT__ = (unsigned long)0;\
				__CMT_CLEAR_AT__ < __CMT_CLEAR_CELLS__;\
				++__CMT_CLEAR_AT__\
			)\
			{\
				((unsigned long *)THIS->_CELLS)[__CMT_CLEAR_AT__] = \
					(unsigned long)' ';\
				((unsigned char *)THIS->_ATTRS)[__CMT_CLEAR_AT__] = \
					(unsigned char)THIS->GET.COLOR;\
			}\
		}\
		\
		if (THIS->_ACTIVE)\
		{\
			LOCALMACRO__CMT_CONSOLE__SET_PEN(THIS->GET.COLOR)\
			LOCALMACRO__CMT_CONSOLE__OUT_TEXT("\033[2J")\
		}\
		\
		OBJECT__INITIALIZE (THIS->GET.CURSOR.X, int) = 0;\
		OBJECT__INITIALIZE (THIS->GET.CURSOR.Y, int) = 0;\
		THIS->_WRAP = FALSE;\
		LOCALMACRO__CMT_CONSOLE__BATCH_END\
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
