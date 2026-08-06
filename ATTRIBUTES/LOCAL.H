/******************************************************************************\
# H - LOCAL                                      #       Maximum Tension       #
################################################################################
#                                                #      -__            __-     #
# Teoman Deniz                                   #  :    :!1!-_    _-!1!:    : #
# maximum-tension.com                            #  ::                      :: #
#                                                #  :!:    : :: : :  :  ::::!: #
# +.....................++.....................+ #   :!:: :!:!1:!:!::1:::!!!:  #
# : C - Maximum Tension :: Create - 2025/05/14 : #   ::!::!!1001010!:!11!!::   #
# :---------------------::---------------------: #   :!1!!11000000000011!!:    #
# : License - GPL-3.0   :: Update - 2026/08/06 : #    ::::!!!1!!1!!!1!!!::     #
# +.....................++.....................+ #       ::::!::!:::!::::      #
\******************************************************************************/

/******************************************************************************\
|* __________________________________________________________________________ *|
|*|                                  LOCAL                                   |*|
|*|__________________________________________________________________________|*|
|*|                                     ______    ______                     |*|
|*| THIS KEYWORD MUST ONLY BE USED WITH GLOBAL OR static VARIABLES WHEN      |*|
|*| NEEDED.                                                                  |*|
|*|                          ____________          ________________________  |*|
|*| IT MARKS THE VARIABLE AS THREAD-LOCAL, MEANING EACH THREAD GETS ITS OWN  |*|
|*| SEPARATE INSTANCE OF THAT VARIABLE.                                      |*|
|*| ^^^^^^^^^^^^^^^^^            __________________________                  |*|
|*| THIS ENSURES THE VARIABLE IS NOT SHARED BETWEEN THREADS, PREVENTING RACE |*|
|*| CONDITIONS OR UNINTENDED DATA SHARING.                                   |*|
|*|                                                                          |*|
|*|  v [C LANGUAGE]                                                          |*|
|*| 1|                                                                       |*|
|*| 2| extern local int g_variable;                                          |*|
|*| 3| //     ^^^^^                                                          |*|
|*| 4|                                                                       |*|
|*|                                                                          |*|
|*| ADD THAT IF YOU'RE TRYING TO ACCESS YOUR GLOBAL VARIABLE USING THE       |*|
|*| extern KEYWORD.                                                          |*|
|*| ^^^^^^                                                                   |*|
|*| [ SIDE NOTES ]                                                           |*|
|*|                       _____                ____________________          |*|
|*| YES, YOU MUST USE THE local KEYWORD IN THE PROTOTYPES OF GLOBAL          |*|
|*| VARIABLES TOO.                                                           |*|
|*| ^^^^^^^^^                                                                |*|
|*|__________________________________________________________________________|*|
|*'..........................................................................'*|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| #define LOCAL                                                       : *|
|* : 3| #define local                                                       : *|
|* : 4|                                                                     : *|
|* :                 ____________________                                   : *|
|* :  v [C LANGUAGE] FOR GLOBAL VARIABLES                                   : *|
|* : 1|                                                                     : *|
|* : 2| local int g_variable = 0;                                           : *|
|* : 3|                                                                     : *|
|* :                 ____________________                                   : *|
|* :  v [C LANGUAGE] FOR STATIC VARIABLES                                   : *|
|* : 1|                                                                     : *|
|* : 2| void test(void)                                                     : *|
|* : 3| {                                                                   : *|
|* : 4|     static local int    variable = 0;                               : *|
|* : 5| }                                                                   : *|
|* : 6|                                                                     : *|
|* '........................................................................' *|
\******************************************************************************/

#ifndef LOCAL_H
#define LOCAL_H 202608 /* VERSION */

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

#ifdef _MSC_VER /* MSVC || CLANG-CL */
#define LOCAL __declspec(thread)
#endif /* _MSC_VER */

#ifndef LOCAL
#ifdef __cplusplus
#if (__cplusplus >= 201103L) /* AKA: C++ 11+ */
#define LOCAL thread_local
#endif /* __cplusplus >= 201103L */
#endif /* __cplusplus */
#endif /* !LOCAL */

#ifdef __STDC_VERSION__
#if (__STDC_VERSION__ >= 201112L && __STDC_VERSION__ < 202311L) /* C == 11 */
#define LOCAL _Thread_local
#endif /* __STDC_VERSION__ >= 201112L && __STDC_VERSION__ < 202311L */
#endif /* __STDC_VERSION__ */

#ifndef LOCAL
#ifdef __GNUC__ /* GNU GCC */
#if (__GNUC__ >= 4)
#define LOCAL __thread
#endif /* __GNUC__ >= 4 */
#endif /* __GNUC__ */
#endif /* !LOCAL */

#ifndef LOCAL
#ifdef __clang__ /* CLANG */
#define LOCAL __thread
#endif /* __clang__ */
#endif /* !LOCAL */

#ifndef LOCAL
#ifdef __SUNPRO_C /* ORACLE SUN STUDIO C COMPILER */
#define LOCAL __thread
#endif /* __SUNPRO_C */
#endif /* !LOCAL */

#ifndef LOCAL
#ifdef __SUNPRO_CC /* ORACLE SUN STUDIO C++ COMPILER */
#define LOCAL __thread
#endif /* __SUNPRO_C */
#endif /* !LOCAL */

/* **************************** [v] LOWERCASE [v] *************************** */
#define local LOCAL
/* **************************** [^] LOWERCASE [^] *************************** */

/* ************************ [v] TI CGT CCS (POP) [v] ************************ */
#ifdef __TI_COMPILER_VERSION__
#pragma diag_pop /* TI CGT CCS COMPILER DIRECTIVES */
#endif /* __TI_COMPILER_VERSION__ */
/* ************************ [^] TI CGT CCS (POP) [^] ************************ */
#endif /* !LOCAL_H */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
