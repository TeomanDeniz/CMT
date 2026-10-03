#ifndef CONSOLE_HPP
#ifndef CONSOLE_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_H */
#endif /* !CONSOLE_HPP */

/******************************************************************************\
|* THE ONE REAL WAIT LOOP. THE OTHER FOUR SET _WANT (A MASK OF 1 << KIND) AND *|
|* CALL THIS ONE, SO THE DECODER EXISTS ONCE. _WANT IS TAKEN AND CLEARED ON   *|
|* ENTRY, SO A CALLBACK THAT WAITS AGAIN STARTS FROM A CLEAN SLATE.           *|
\******************************************************************************/

#define LOCALMACRO__CMT_CONSOLE__INPUT_WAIT_ANY_CONTENT \
	const unsigned int	__CMT_WANT__ = \
		THIS->_WANT ? THIS->_WANT : ~(unsigned)1;\
	\
	THIS->_WANT = (unsigned)0;\
	LOCALMACRO__CMT_CONSOLE__WAIT_FOR(((unsigned)1 << KIND) & __CMT_WANT__)

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
