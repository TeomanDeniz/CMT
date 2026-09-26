#ifndef CONSOLE_HPP
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_HPP */

#define LOCALMACRO__CMT_CONSOLE__PUT_STRING_CONTENT \
	struct S_COORD		COORDINATES;\
	struct S_COORD		ORG_COORDINATES;\
	const unsigned int	PUSHED = THIS->_PUSH_DEPTH;\
	\
	COORDINATES.X = (short)X;\
	COORDINATES.Y = (short)Y;\
	ORG_COORDINATES.X = (short)THIS->GET.CURSOR.X;\
	ORG_COORDINATES.Y = (short)THIS->GET.CURSOR.Y;\
	KERNEL32.SetConsoleCursorPosition(THIS->_OUT_HANDLE, COORDINATES);\
	THIS->_PUSH_DEPTH = (unsigned)0;\
	THIS->LOG(STRING);\
	THIS->_PUSH_DEPTH = PUSHED;\
	KERNEL32.SetConsoleCursorPosition(THIS->_OUT_HANDLE, ORG_COORDINATES);

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
