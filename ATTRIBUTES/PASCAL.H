/******************************************************************************\
# H - PASCAL                                     #       Maximum Tension       #
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
|*|                                  PASCAL                                  |*|
|*|__________________________________________________________________________|*|
|*|                                                                          |*|
|*| DEFINES A LEGACY CALLING CONVENTION WHERE ARGUMENTS ARE PUSHED           |*|
|*| RIGHT-TO-LEFT, AND THE CALLEE PERFORMS STACK CLEANUP.                    |*|
|*|                                                                          |*|
|*| MOSTLY ASSOCIATED WITH 16-BIT/LEGACY WINDOWS AND OLDER COMPILERS, BUT    |*|
|*| STILL EXPOSED IN SOME TOOLCHAINS FOR ABI COMPATIBILITY.                  |*|
|*|                                                                          |*|
|*|    ______________                      __________                        |*|
|*| IN 16-BIT WINDOWS, SYSTEM APIS USE THE FAR PASCAL CALLING CONVENTION     |*|
|*| (far CALL + pascal STACK CLEANUP).                                       |*|
|*|  ^^^        ^^^^^^                                                       |*|
|*| THEY ARE INVOKED NORMALLY; NO MANUAL FAR POINTER HANDLING IS REQUIRED.   |*|
|*|__________________________________________________________________________|*|
|*'..........................................................................'*|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| #define PASCAL                                                      : *|
|* : 3|                                                                     : *|
|* :                                                                        : *|
|* : EXAMPLES:                                                              : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| int PASCAL WinMain(HINSTANCE hi, HINSTANCE hpi, ...)                : *|
|* : 3| {                                                                   : *|
|* : 4|     . . .                                                           : *|
|* : 5| }                                                                   : *|
|* : 6|                                                                     : *|
|* : 7| extern PASCAL int WinMain(...);                                     : *|
|* : 8|                                                                     : *|
|* '........................................................................' *|
\******************************************************************************/

#ifndef PASCAL_H
#define PASCAL_H 202606 /* VERSION */

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

#ifdef __WATCOMC__
#define PASCAL __pascal
#else /* !__WATCOMC__ */
#ifdef __BORLANDC__
#define PASCAL pascal
#else /* !__BORLANDC__ */
#ifdef __CODEGEARC__
#define PASCAL pascal
#endif /* !__CODEGEARC__ */
#ifdef _MSC_VER
#define PASCAL __pascal
#else /* !_MSC_VER */
#ifdef __clang__
#ifdef __GNUC__
#define LOCALMACRO__GNU_CLANG
#endif /* __GNUC__ */
#endif /* __clang__ */

#ifdef LOCALMACRO__GNU_CLANG
#undef LOCALMACRO__GNU_CLANG
#define PASCAL pascal
#else /* !LOCALMACRO__GNU_CLANG */
#ifdef __clang__
#ifdef __cplusplus
#if (__cplusplus >= 201103L) /* C++11 */
#define LOCALMACRO__CLANG_CPP11
#endif /* __cplusplus >= 201103L */
#endif /* __cplusplus */
#endif /* __clang__ */

#ifdef LOCALMACRO__CLANG_CPP11
#undef LOCALMACRO__CLANG_CPP11
#define PASCAL clang::pascal
#endif /* LOCALMACRO__CLANG_CPP11 */
#endif /* LOCALMACRO__GNU_CLANG */
#endif /* _MSC_VER */
#endif /* __BORLANDC__ */
#endif /* __WATCOMC__ */

#ifndef PASCAL
#define PASCAL
#endif /* !PASCAL */

#ifndef STDCALL
#define STDCALL_H
#define STDCALL PASCAL /* CLASSIC */
#endif /* !STDCALL */

/* ************************ [v] TI CGT CCS (POP) [v] ************************ */
#ifdef __TI_COMPILER_VERSION__
#pragma diag_pop /* TI CGT CCS COMPILER DIRECTIVES */
#endif /* __TI_COMPILER_VERSION__ */
/* ************************ [^] TI CGT CCS (POP) [^] ************************ */

#endif /* !PASCAL_H */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
