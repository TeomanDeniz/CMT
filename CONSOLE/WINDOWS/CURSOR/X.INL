#ifndef CONSOLE_HPP
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_HPP */

#define LOCALMACRO__CMT_CONSOLE__CURSOR_X_CONTENT \
	struct S_COORD	COORDINATES;\
	long			TARGET_X = (long)X_VALUE;\
	long			TARGET_Y = (long)THIS->GET.CURSOR.Y;\
	\
	if (TARGET_X < (long)0)\
		TARGET_X = (long)0;\
	\
	if (TARGET_Y < (long)0)\
		TARGET_Y = (long)0;\
	\
	if (TARGET_X >= (long)THIS->GET.WIDTH)\
		TARGET_X = (long)THIS->GET.WIDTH - (long)1;\
	\
	if (TARGET_Y >= (long)THIS->GET.HEIGHT)\
		TARGET_Y = (long)THIS->GET.HEIGHT - (long)1;\
	\
	COORDINATES.X = (short)TARGET_X;\
	COORDINATES.Y = (short)TARGET_Y;\
	\
	if (KERNEL32.SetConsoleCursorPosition(THIS->_OUT_HANDLE, COORDINATES))\
	{\
		OBJECT__INITIALIZE (THIS->GET.CURSOR.X, int) = (int)TARGET_X;\
		OBJECT__INITIALIZE (THIS->GET.CURSOR.Y, int) = (int)TARGET_Y;\
	}

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
