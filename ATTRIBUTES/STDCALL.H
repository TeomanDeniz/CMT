/******************************************************************************\
# H - STDCALL                                    #       Maximum Tension       #
################################################################################
#                                                #      -__            __-     #
# Teoman Deniz                                   #  :    :!1!-_    _-!1!:    : #
# maximum-tension.com                            #  ::                      :: #
#                                                #  :!:    : :: : :  :  ::::!: #
# +.....................++.....................+ #   :!:: :!:!1:!:!::1:::!!!:  #
# : C - Maximum Tension :: Create - 2023/07/11 : #   ::!::!!1001010!:!11!!::   #
# :---------------------::---------------------: #   :!1!!11000000000011!!:    #
# : License - GPL-3.0   :: Update - 2026/06/16 : #    ::::!!!1!!1!!!1!!!::     #
# +.....................++.....................+ #       ::::!::!:::!::::      #
\******************************************************************************/

/******************************************************************************\
|* __________________________________________________________________________ *|
|*|                                 STDCALL                                  |*|
|*|__________________________________________________________________________|*|
|*|                                                                          |*|
|*| DEFINES A CALLING CONVENTION WHERE ARGUMENTS ARE PASSED ON THE STACK,    |*|
|*| THE CALLEE CLEANS THE STACK, AND (ON 32-BIT SYSTEMS) THE FUNCTION NAME   |*|
|*| MAY BE DECORATED.                                                        |*|
|*|                                                                          |*|
|*| PRIMARILY ASSOCIATED WITH WINDOWS APIS BUT SUPPORTED BY MULTIPLE         |*|
|*| COMPILERS FOR BINARY-INTERFACE COMPATIBILITY.                            |*|
|*|    ______________                      ___________                       |*|
|*| IN 16-BIT WINDOWS, SYSTEM APIS USE THE FAR STDCALL CALLING CONVENTION    |*|
|*| (far CALL + stdcall STACK CLEANUP).                                      |*|
|*|  ^^^        ^^^^^^^                                                      |*|
|*| THEY ARE INVOKED NORMALLY; NO MANUAL FAR POINTER HANDLING IS REQUIRED.   |*|
|*|__________________________________________________________________________|*|
|*'..........................................................................'*|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| #define STDCALL                                                     : *|
|* : 3|                                                                     : *|
|* :                                                                        : *|
|* : EXAMPLES:                                                              : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| int STDCALL WinMain(HINSTANCE hi, HINSTANCE hpi, ...)               : *|
|* : 3| {                                                                   : *|
|* : 4|     . . .                                                           : *|
|* : 5| }                                                                   : *|
|* : 6|                                                                     : *|
|* : 7| extern STDCALL int WinMain(...);                                    : *|
|* : 8|                                                                     : *|
|* '........................................................................' *|
\******************************************************************************/

#ifndef STDCALL_H
#define STDCALL_H 202606 /* VERSION */

/* *********************** [v] TI CGT CCS (PUSH) [v] ************************ */
#ifdef __TI_COMPILER_VERSION__
#pragma diag_push /* TI CGT CCS COMPILER DIRECTIVES */
#pragma CHECK_MISRA("5.4") /* TAG NAMES SHALL BE A UNIQUE IDENTIFIER */
#pragma CHECK_MISRA("19.3") /*
# THE #INCLUDE DIRECTIVE SHALL BE FOLLOWED BY EITHER A <FILENAME> OR "FILENAME"
# SEQUENCE
# */
#endif /* __TI_COMPILER_VERSION__ */
/* *********************** [^] TI CGT CCS (PUSH) [^] ************************ */

#ifdef _WIN16
#include "PASCAL.H"
#define STDCALL PASCAL
#endif /* _WIN16 */

#ifndef STDCALL
#ifdef __BORLANDC__
#if (__BORLANDC__ < 0X500) /* VERSION 5.0 */
#define STDCALL stdcall
#else /* __BORLANDC__ >= 0X500 */
#define STDCALL __stdcall
#endif /* __BORLANDC__ < 0X500 */
#endif /* __BORLANDC__ */
#endif /* !STDCALL */

#ifndef STDCALL
#ifdef __WATCOMC__
#if (__WATCOMC__ < 1100) /* VERSION 11.0 */
#define STDCALL stdcall
#else /* __WATCOMC__ >= 1100 */
#define STDCALL __stdcall
#endif /* __WATCOMC__ < 1100 */
#endif /* __WATCOMC__ */
#endif /* !STDCALL */

#ifndef STDCALL
#ifdef __GNUC__
#ifdef _WIN32
#define STDCALL __attribute__((stdcall))
#else /* !_WIN32 */
#ifdef __CYGWIN__
#define STDCALL __attribute__((stdcall))
#endif /* __CYGWIN__ */
#endif /* _WIN32 */
#endif /* __GNUC__ */
#endif /* !STDCALL */

#ifndef STDCALL
#ifdef __clang__
#ifdef _WIN32
#define STDCALL __attribute__((stdcall))
#else /* !_WIN32 */
#ifdef __CYGWIN__
#define STDCALL __attribute__((stdcall))
#endif /* __CYGWIN__ */
#endif /* _WIN32 */
#endif /* __clang__ */
#endif /* !STDCALL */

#ifndef STDCALL
#define STDCALL
#endif /* !STDCALL */

#ifndef PASCAL
#define PASCAL_H
#define PASCAL STDCALL /* CLASSIC */
#endif /* !PASCAL */

/* ************************ [v] TI CGT CCS (POP) [v] ************************ */
#ifdef __TI_COMPILER_VERSION__
#pragma diag_pop /* TI CGT CCS COMPILER DIRECTIVES */
#endif /* __TI_COMPILER_VERSION__ */
/* ************************ [^] TI CGT CCS (POP) [^] ************************ */

#endif /* !STDCALL_H */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
