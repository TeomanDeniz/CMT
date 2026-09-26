#ifndef CONSOLE_HPP
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_HPP */

/******************************************************************************\
|* EVENT(), INPUT{} AND GET{} ZERO EVERY PUBLIC MEMBER BEFORE THE SHARED      *|
|* CONTENT RUNS. WITHOUT THEM A CONSOLE CREATED ON THE STACK WOULD START WITH *|
|* GARBAGE IN THE MEMBERS THE CONTENT DOES NOT TOUCH (ROWS, COLUMNS, ACTIVE). *|
\******************************************************************************/

#define LOCALFUNCTION__CMT_CONSOLE_CPP__CONSTRUCTOR \
	cmt::CONSOLE::CONSOLE(void) :\
		PUT(),\
		CURSOR(),\
		EVENT(),\
		INPUT{},\
		GET{},\
		HIGHLIGHTER(TRUE)\
	{\
		cmt::CONSOLE	*THIS = this;\
		\
		LOCALFUNCTION__CMT_CONSOLE_CONTENT\
	}\
	\
	cmt::console::console(void) :\
		put(),\
		cursor(),\
		event(),\
		input{},\
		get{},\
		highlighter(TRUE)\
	{\
		cmt::CONSOLE	*THIS = reinterpret_cast<cmt::CONSOLE *>(this);\
		\
		LOCALFUNCTION__CMT_CONSOLE_CONTENT\
	}

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
