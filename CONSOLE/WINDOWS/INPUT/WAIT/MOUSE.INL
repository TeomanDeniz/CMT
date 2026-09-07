#ifndef CONSOLE_HPP
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_HPP */

#define LOCALMACRO__CMT_CONSOLE__INPUT_WAIT_MOUSE_CONTENT \
	struct S_INPUT_RECORD	RECORD;\
	unsigned long			READ;\
	unsigned int			KIND;\
	\
	while (1)\
	{\
		if (\
			!KERNEL32.ReadConsoleInputA(\
				THIS->_IN_HANDLE, &RECORD, (unsigned long)1, &READ\
			)\
		)\
			break ;\
		\
		if (!READ)\
			continue ;\
		\
		LOCALMACRO__CMT_CONSOLE__DISPATCH(RECORD, KIND)\
		LOCALMACRO__CMT_CONSOLE__TRACK_MOVE\
		\
		if ((KIND == LOCALMACRO__CMT_CONSOLE__EVENT_MOUSE_MOVE) ||\
			(KIND == LOCALMACRO__CMT_CONSOLE__EVENT_MOUSE_ACTION))\
			break ;\
	}

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
