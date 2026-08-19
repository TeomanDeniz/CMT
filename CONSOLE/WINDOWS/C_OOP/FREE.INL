#ifndef CONSOLE_HPP
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_HPP */

#define LOCALMACRO__CMT_CONSOLE__FREE_CONTENT \
	OBJECT__EJECT (THIS->free);\
	OBJECT__EJECT (THIS->log);\
	OBJECT__EJECT (THIS->warning);\
	OBJECT__EJECT (THIS->warning_at);\
	OBJECT__EJECT (THIS->error);\
	OBJECT__EJECT (THIS->cursor.color);\
	OBJECT__EJECT (THIS->cursor.default_color);\
 	DESTROY (THIS);

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
