#ifndef CONSOLE_HPP
#ifndef CONSOLE_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_H */
#endif /* !CONSOLE_HPP */

#define LOCALMACRO__CMT_CONSOLE__PUT_LINE_CONTENT \
	THIS->PUT.COLORED.LINE(\
		CHARACTER, \
		THIS->GET.CURSOR.COLOR, \
		START_X, \
		START_Y, \
		END_X, \
		END_Y\
	);

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
