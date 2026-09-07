#ifndef CONSOLE_HPP
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_HPP */

/******************************************************************************\
|* APPEND THIS TO LOCALMACRO__CMT_CONSOLE__ATTACH, OR PASTE THE LINE INTO     *|
|* THE CONSTRUCTOR RIGHT AFTER IT, SO GET.ACTIVE MIRRORS THE PRIVATE FLAG.    *|
\******************************************************************************/

#define LOCALMACRO__CMT_CONSOLE__PUBLISH_ACTIVE \
	OBJECT__INITIALIZE (THIS->get.active, BOOLEAN) = THIS->_ACTIVE;

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
