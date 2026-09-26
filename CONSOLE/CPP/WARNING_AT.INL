#ifndef CONSOLE_HPP
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_HPP */

#define LOCALFUNCTION__CMT_CONSOLE_CPP__WARNING_AT \
	cmt::CONSOLE\
		*cmt::CONSOLE::WARNING_AT(\
			const char *STRING_VALUE,\
			const char *THE_FILE_VALUE,\
			unsigned int THE_LINE\
		)\
	{\
		cmt::CONSOLE	*THIS = this;\
		char			*STRING = const_cast<char *>(STRING_VALUE);\
		char			*THE_FILE = const_cast<char *>(THE_FILE_VALUE);\
		\
		LOCALMACRO__CMT_CONSOLE__WARNING_AT_CONTENT\
		\
		return (THIS);\
	}\
	\
	cmt::console\
		*cmt::console::warning_at(\
			const char *STRING_VALUE,\
			const char *THE_FILE_VALUE,\
			unsigned int THE_LINE\
		)\
	{\
		cmt::console	*SELF = this;\
		\
		LOCALMACRO__CMT_CONSOLE_CPP__UPPER(SELF)->WARNING_AT(\
			STRING_VALUE,\
			THE_FILE_VALUE,\
			THE_LINE\
		);\
		\
		return (SELF);\
	}

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
