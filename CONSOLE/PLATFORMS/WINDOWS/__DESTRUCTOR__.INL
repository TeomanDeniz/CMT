#ifndef CONSOLE_HPP
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_HPP */

#define LOCALMACRO__CMT_CONSOLE__DESTRUCTOR_CONTENT \
	if (THIS->_IN_HANDLE && THIS->_IN_MODE)\
		KERNEL32.SetConsoleMode(THIS->_IN_HANDLE, THIS->_IN_MODE);\
	\
	if (THIS->_PUSH_DATA)\
	{\
		FREE(THIS->_PUSH_DATA);\
		THIS->_PUSH_DATA = (PTR)0;\
	}\
	\
	if (THIS->_SCRATCH_DATA)\
	{\
		FREE(THIS->_SCRATCH_DATA);\
		THIS->_SCRATCH_DATA = (PTR)0;\
	}\
	\
	THIS->_PUSH_SIZE = (unsigned long)0;\
	THIS->_PUSH_CAPACITY = (unsigned long)0;\
	THIS->_PUSH_DEPTH = (long)0;\
	THIS->_SCRATCH_SIZE = (unsigned long)0;

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
