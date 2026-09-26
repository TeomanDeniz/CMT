#ifndef CONSOLE_HPP
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_HPP */

#define LOCALFUNCTION__CMT_CONSOLE_CPP__GET_LINE \
	char\
		*cmt::CONSOLE::GET::LINE(\
			unsigned int START_X,\
			unsigned int START_Y,\
			unsigned int END_X,\
			unsigned int END_Y\
		)\
	{\
		cmt::CONSOLE	*THIS = LOCALMACRO__CMT_CONSOLE_CPP__OWNER(this);\
		\
		LOCALMACRO__CMT_CONSOLE__GET_LINE_CONTENT\
	}\
	\
	char\
		*cmt::console::get::line(\
			unsigned int START_X,\
			unsigned int START_Y,\
			unsigned int END_X,\
			unsigned int END_Y\
		)\
	{\
		cmt::console	*SELF = LOCALMACRO__CMT_CONSOLE_CPP__OWNER(this);\
		\
		return (\
			LOCALMACRO__CMT_CONSOLE_CPP__UPPER(SELF)->GET.LINE(\
				START_X,\
				START_Y,\
				END_X,\
				END_Y\
			)\
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
