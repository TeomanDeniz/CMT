#ifndef CONSOLE_HPP
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_HPP */

#define LOCALMACRO__CMT_CONSOLE__CURSOR_SIZE_CONTENT \
	struct S_CONSOLE_CURSOR_INFO	INFO;\
	unsigned long				TARGET = SIZE_VALUE;\
	\
	if (!KERNEL32.GetConsoleCursorInfo(THIS->_OUT_HANDLE, &INFO))\
		return (THIS);\
	\
	if (TARGET < (unsigned long)1)\
		TARGET = (unsigned long)1;\
	\
	if (TARGET > (unsigned long)100)\
		TARGET = (unsigned long)100;\
	\
	INFO.SIZE = TARGET;\
	\
	if (KERNEL32.SetConsoleCursorInfo(THIS->_OUT_HANDLE, &INFO))\
		OBJECT__INITIALIZE (THIS->get.cursor.size, unsigned long) = TARGET;

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
