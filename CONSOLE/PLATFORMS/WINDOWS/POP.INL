#ifndef CONSOLE_HPP
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_HPP */

#define LOCALMACRO__CMT_CONSOLE__POP_CONTENT \
	if (THIS->_PUSH_DEPTH)\
		--THIS->_PUSH_DEPTH;\
	\
	if ((!THIS->_PUSH_DEPTH) && THIS->_PUSH_DATA && THIS->_PUSH_SIZE)\
	{\
		char				*DATA = (char *)THIS->_PUSH_DATA;\
		const unsigned long	SIZE = THIS->_PUSH_SIZE;\
		unsigned long		WRITTEN;\
		\
		THIS->_PUSH_SIZE = (unsigned long)0;\
		\
		if (\
			!KERNEL32.WriteConsoleA(\
				THIS->_OUT_HANDLE, DATA, SIZE, &WRITTEN, 0\
			)\
		)\
			KERNEL32.WriteFile(THIS->_OUT_HANDLE, DATA, SIZE, &WRITTEN, 0);\
		\
		DATA[0] = (char)0;\
	}

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
