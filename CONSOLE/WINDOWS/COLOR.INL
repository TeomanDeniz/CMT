#ifndef CONSOLE_HPP
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_HPP */

#define LOCALMACRO__CMT_CONSOLE__COLOR_CONTENT \
	const unsigned int		TARGET = (unsigned int)(COLOR_VALUE);\
	const unsigned short	ATTRIBUTE =\
		LOCALMACRO__CMT_CONSOLE__ATTRIBUTE (TARGET);\
	const unsigned long		CELLS =\
		(unsigned long)THIS->get.width * (unsigned long)THIS->get.height;\
	struct S_COORD			ORIGIN;\
	unsigned long			WRITTEN;\
	\
	ORIGIN.X = 0;\
	ORIGIN.Y = 0;\
	KERNEL32.FillConsoleOutputAttribute(\
		THIS->_OUT_HANDLE, ATTRIBUTE, CELLS, ORIGIN, &WRITTEN\
	);\
	KERNEL32.SetConsoleTextAttribute(THIS->_OUT_HANDLE, ATTRIBUTE);\
	OBJECT__INITIALIZE (THIS->get.color, unsigned int) = TARGET;\
	OBJECT__INITIALIZE (THIS->get.cursor.color, unsigned int) = TARGET;

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
