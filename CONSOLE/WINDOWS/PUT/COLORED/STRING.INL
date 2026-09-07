#ifndef CONSOLE_HPP
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_HPP */

#define LOCALMACRO__CMT_CONSOLE__PUT_COLORED_STRING_CONTENT \
	struct S_COORD			COORDINATES;\
	unsigned long			WRITTEN;\
	unsigned long			LENGTH;\
	const unsigned short	ATTRIBUTE =\
		LOCALMACRO__CMT_CONSOLE__ATTRIBUTE (COLOR_VALUE);\
	\
	LENGTH = (unsigned long)0;\
	\
	while (STRING[LENGTH] != 0)\
		++LENGTH;\
	\
	if ((X < THIS->get.width) && (Y < THIS->get.height))\
	{\
		if ((X + LENGTH) > THIS->get.width)\
			LENGTH = THIS->get.width - X;\
		\
		COORDINATES.X = (short)X;\
		COORDINATES.Y = (short)Y;\
		KERNEL32.WriteConsoleOutputCharacterA(\
			THIS->_OUT_HANDLE, STRING, LENGTH, COORDINATES, &WRITTEN\
		);\
		KERNEL32.FillConsoleOutputAttribute(\
			THIS->_OUT_HANDLE, ATTRIBUTE, LENGTH, COORDINATES, &WRITTEN\
		);\
	}

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
