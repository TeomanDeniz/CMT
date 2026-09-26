#ifndef CONSOLE_HPP
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_HPP */

#define LOCALFUNCTION__CMT_CONSOLE_CPP__PUT_STRING \
	cmt::CONSOLE\
		*cmt::CONSOLE::PUT::STRING(\
			const char *STRING_VALUE,\
			unsigned int X,\
			unsigned int Y\
		)\
	{\
		cmt::CONSOLE	*THIS = LOCALMACRO__CMT_CONSOLE_CPP__OWNER(this);\
		char			*STRING = const_cast<char *>(STRING_VALUE);\
		\
		LOCALMACRO__CMT_CONSOLE__PUT_STRING_CONTENT\
		\
		return (THIS);\
	}\
	\
	cmt::console\
		*cmt::console::put::string(\
			const char *STRING_VALUE,\
			unsigned int X,\
			unsigned int Y\
		)\
	{\
		cmt::console	*SELF = LOCALMACRO__CMT_CONSOLE_CPP__OWNER(this);\
		\
		LOCALMACRO__CMT_CONSOLE_CPP__UPPER(SELF)->PUT.STRING(\
			STRING_VALUE,\
			X,\
			Y\
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
