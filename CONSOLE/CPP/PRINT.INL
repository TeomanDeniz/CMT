#ifndef CONSOLE_HPP
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_HPP */

/******************************************************************************\
|* VARIADIC ARGUMENTS CAN NOT BE FORWARDED, SO "print" RUNS THE SHARED        *|
|* CONTENT ITSELF THROUGH A VIEW THAT ACTS AS A cmt::CONSOLE * FOR "->" AND   *|
|* TURNS BACK INTO A cmt::console * FOR "return (THIS);".                     *|
\******************************************************************************/

#define LOCALFUNCTION__CMT_CONSOLE_CPP__PRINT \
	cmt::CONSOLE\
		*cmt::CONSOLE::PRINT(const char *FORMAT, VA_ARGS)\
	VA_DECLARE\
	{\
		cmt::CONSOLE	*THIS = this;\
		\
		LOCALMACRO__CMT_CONSOLE__PRINT_CONTENT\
		\
		return (THIS);\
	}\
	\
	cmt::console\
		*cmt::console::print(const char *FORMAT, va_args)\
	va_declare\
	{\
		cmt::LOCALNAMESPACE__CONSOLE::VIEW	THIS(this);\
		\
		LOCALMACRO__CMT_CONSOLE__PRINT_CONTENT\
		\
		return (THIS);\
	}

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
