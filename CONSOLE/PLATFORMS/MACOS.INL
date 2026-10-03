#ifndef CONSOLE_HPP
#ifndef CONSOLE_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_H */
#endif /* !CONSOLE_HPP */

#ifndef SEAL_CMT_CONSOLE_MACOS
#define SEAL_CMT_CONSOLE_MACOS

/******************************************************************************\
|* MACOS USES THE UNIX BACKEND (PLATFORMS.INL INCLUDES UNIX.INL RIGHT AFTER   *|
|* THIS FILE). THE ONLY DIFFERENCES THAT MATTER ARE ALREADY HANDLED THERE:    *|
|*                                                                            *|
|*   POLL() DOES NOT WORK ON TERMINAL DEVICES ON MACOS, SO THE UNIX BACKEND   *|
|*   WAITS FOR INPUT WITH SELECT() EVERYWHERE.                                *|
|*                                                                            *|
|*   TERMINAL.APP AND ITERM2 BOTH ANSWER THE WINDOW QUERIES, SO X(), Y(),     *|
|*   WIDTH() AND HEIGHT() WORK THERE AS LONG AS THE USER ALLOWS IT.           *|
|*                                                                            *|
|* THE DARWIN FEATURE MACRO KEEPS STRUCT WINSIZE AND CLOCK_GETTIME VISIBLE    *|
|* WHEN SOMETHING ELSE ASKED FOR STRICT POSIX. IT ONLY HELPS IF NO SYSTEM     *|
|* HEADER WAS INCLUDED BEFORE THIS ONE; OTHERWISE IT IS HARMLESS.             *|
\******************************************************************************/

#ifndef _DARWIN_C_SOURCE
#define _DARWIN_C_SOURCE 1
#endif /* !_DARWIN_C_SOURCE */
#endif /* !SEAL_CMT_CONSOLE_MACOS */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
