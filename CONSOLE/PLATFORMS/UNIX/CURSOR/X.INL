#ifndef CONSOLE_HPP
#ifndef CONSOLE_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_H */
#endif /* !CONSOLE_HPP */

/******************************************************************************\
|* CURSOR PLACEMENT: THE SAME CLAMPING AS THE WINDOWS BACKEND. THE MOVE IS    *|
|* SENT AT ONCE (NOT LAZILY), SO PRINTF() AFTERWARDS STARTS AT THE NEW PLACE. *|
\******************************************************************************/

#define LOCALMACRO__CMT_CONSOLE__PLACE_CURSOR(TO_X, TO_Y) \
	do\
	{\
		long	__CMT_CURSOR_X__ = (long)(TO_X);\
		long	__CMT_CURSOR_Y__ = (long)(TO_Y);\
		\
		LOCALMACRO__CMT_CONSOLE__ENTER_AT\
		\
		if (__CMT_CURSOR_X__ >= (long)THIS->GET.WIDTH)\
			__CMT_CURSOR_X__ = (long)THIS->GET.WIDTH - (long)1;\
		\
		if (__CMT_CURSOR_Y__ >= (long)THIS->GET.HEIGHT)\
			__CMT_CURSOR_Y__ = (long)THIS->GET.HEIGHT - (long)1;\
		\
		if (__CMT_CURSOR_X__ < (long)0)\
			__CMT_CURSOR_X__ = (long)0;\
		\
		if (__CMT_CURSOR_Y__ < (long)0)\
			__CMT_CURSOR_Y__ = (long)0;\
		\
		OBJECT__INITIALIZE (THIS->GET.CURSOR.X, int) = (int)__CMT_CURSOR_X__;\
		OBJECT__INITIALIZE (THIS->GET.CURSOR.Y, int) = (int)__CMT_CURSOR_Y__;\
		THIS->_WRAP = FALSE;\
		LOCALMACRO__CMT_CONSOLE__SETTLE\
	}\
	while (0);

#define LOCALMACRO__CMT_CONSOLE__CURSOR_X_CONTENT \
	LOCALMACRO__CMT_CONSOLE__PLACE_CURSOR((long)(X_VALUE), THIS->GET.CURSOR.Y)

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
