#ifndef CONSOLE_HPP
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_HPP */

#define LOCALFUNCTION__CMT_CONSOLE_CPP__IMPORT \
	cmt::CONSOLE\
		*cmt::CONSOLE::IMPORT(PTR DATA)\
	{\
		cmt::CONSOLE	*THIS = this;\
		\
		LOCALMACRO__CMT_CONSOLE__IMPORT_CONTENT\
		\
		return (THIS);\
	}\
	\
	cmt::console\
		*cmt::console::import(ptr DATA)\
	{\
		cmt::console	*SELF = this;\
		\
		LOCALMACRO__CMT_CONSOLE_CPP__UPPER(SELF)->IMPORT(DATA);\
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
