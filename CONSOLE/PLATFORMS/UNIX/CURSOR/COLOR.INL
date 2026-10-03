#ifndef CONSOLE_HPP
#ifndef CONSOLE_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_H */
#endif /* !CONSOLE_HPP */

/* THE PEN FOR EVERYTHING WRITTEN FROM HERE ON; THE SCREEN IS NOT TOUCHED */
#define LOCALMACRO__CMT_CONSOLE__CURSOR_COLOR_CONTENT \
	LOCALMACRO__CMT_CONSOLE__ENTER\
	OBJECT__INITIALIZE (THIS->GET.CURSOR.COLOR, unsigned int) = \
		((unsigned int)(COLOR_VALUE)) & (unsigned)0XFF;\
	LOCALMACRO__CMT_CONSOLE__SETTLE

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
