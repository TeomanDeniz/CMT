/******************************************************************************\
# H - CDECL                                      #       Maximum Tension       #
################################################################################
#                                                #      -__            __-     #
# Teoman Deniz                                   #  :    :!1!-_    _-!1!:    : #
# maximum-tension.com                            #  ::                      :: #
#                                                #  :!:    : :: : :  :  ::::!: #
# +.....................++.....................+ #   :!:: :!:!1:!:!::1:::!!!:  #
# : C - Maximum Tension :: Create - 2026/06/07 : #   ::!::!!1001010!:!11!!::   #
# :---------------------::---------------------: #   :!1!!11000000000011!!:    #
# : License - GPL-3.0   :: Update - 2026/06/16 : #    ::::!!!1!!1!!!1!!!::     #
# +.....................++.....................+ #       ::::!::!:::!::::      #
\******************************************************************************/

/******************************************************************************\
|* __________________________________________________________________________ *|
|*|                                  CDECL                                   |*|
|*|__________________________________________________________________________|*|
|*|                                                                          |*|
|*| DEFINES A CALLING CONVENTION WHERE ARGUMENTS ARE PASSED ON THE STACK,    |*|
|*| THE CALLER CLEANS THE STACK, AND (ON 32-BIT SYSTEMS) THE FUNCTION NAME   |*|
|*| MAY BE DECORATED.                                                        |*|
|*|                                                                          |*|
|*| THIS IS THE DEFAULT CALLING CONVENTION USED BY MOST C COMPILERS AND      |*|
|*| ALLOWS FUNCTIONS WITH A VARIABLE NUMBER OF ARGUMENTS.                    |*|
|*|__________________________________________________________________________|*|
|*'..........................................................................'*|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| #define CDECL                                                       : *|
|* : 3|                                                                     : *|
|* :                                                                        : *|
|* : EXAMPLES:                                                              : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| int CDECL add(int a, int b)                                         : *|
|* : 3| {                                                                   : *|
|* : 4|     return a + b;                                                   : *|
|* : 5| }                                                                   : *|
|* : 6|                                                                     : *|
|* : 7| extern CDECL int printf(const char *format, ...);                   : *|
|* : 8|                                                                     : *|
|* '........................................................................' *|
\******************************************************************************/

#ifndef CDECL_H
#define CDECL_H 202606 /* VERSION */

#ifdef __WATCOMC__ /* WATCOM C++ */
#ifndef _ENABLE_AUTODEPEND /* IF AUTO DEPENDENCY TRACKING IS OFF */
#pragma read_only_file; /* THIS FILE WON'T CHANGE DURING COMPILE TIME */
#endif /* !_ENABLE_AUTODEPEND */
#endif /* __WATCOMC__ */

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

#ifdef __BORLANDC__
#if (__BORLANDC__ < 0X500) /* VERSION 5.0 */
#define CDECL cdecl
#else /* __BORLANDC__ >= 0X500 */
#define CDECL __cdecl
#endif /* __BORLANDC__ < 0X500 */
#endif /* __BORLANDC__ */

#ifndef CDECL
#ifdef __WATCOMC__
#if (__WATCOMC__ < 1100) /* VERSION 11.0 */
#define CDECL cdecl
#else /* __WATCOMC__ >= 1100 */
#define CDECL __cdecl
#endif /* __WATCOMC__ < 1100 */
#endif /* __WATCOMC__ */
#endif /* !CDECL */

#ifndef CDECL
#ifdef __GNUC__
#ifdef _WIN32
#define CDECL __attribute__((cdecl))
#else /* !_WIN32 */
#ifdef __CYGWIN__
#define CDECL __attribute__((cdecl))
#endif /* __CYGWIN__ */
#endif /* _WIN32 */
#endif /* __GNUC__ */
#endif /* !CDECL */

#ifndef CDECL
#ifdef __clang__
#ifdef _WIN32
#define CDECL __attribute__((cdecl))
#else /* !_WIN32 */
#ifdef __CYGWIN__
#define CDECL __attribute__((cdecl))
#endif /* __CYGWIN__ */
#endif /* _WIN32 */
#endif /* __clang__ */
#endif /* !CDECL */

#ifndef CDECL
#define CDECL
#endif /* !CDECL */

/* ************************ [v] TI CGT CCS (POP) [v] ************************ */
#ifdef __TI_COMPILER_VERSION__
#pragma diag_pop /* TI CGT CCS COMPILER DIRECTIVES */
#endif /* __TI_COMPILER_VERSION__ */
/* ************************ [^] TI CGT CCS (POP) [^] ************************ */

#endif /* !CDECL_H */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
