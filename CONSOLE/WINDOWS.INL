#ifndef CONSOLE_HPP
#ifndef CONSOLE_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_H */
#endif /* !CONSOLE_HPP */

/* **************************** [v] INCLUDES [v] **************************** */
#include "../WIN_CORE/KERNEL32.H"
/******* """"""""""""""""""""""""
 * struct S_COORD;
 * struct S_CONSOLE_CURSOR_INFO;
 * struct S_KERNEL32	KERNEL32;
 */
/* **************************** [^] INCLUDES [^] **************************** */

typedef PTR	T_CONSOLE_OUT_HANDLE;

#include "WINDOWS/CMT_CONSOLE.INL"
#include "WINDOWS/FREE.INL"
#include "WINDOWS/LOG.INL"
#include "WINDOWS/WARNING.INL"
#include "WINDOWS/WARNING_AT.INL"
#include "WINDOWS/ERROR.INL"
#include "WINDOWS/ERROR_AT.INL"

#include "WINDOWS/CURSOR/COLOR.INL"
#include "WINDOWS/CURSOR/DEFAULT_COLOR.INL"

#include "WINDOWS/PUT/STRING.INL"

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
