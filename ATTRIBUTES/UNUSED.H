/******************************************************************************\
# H - UNUSED                                     #       Maximum Tension       #
################################################################################
#                                                #      -__            __-     #
# Teoman Deniz                                   #  :    :!1!-_    _-!1!:    : #
# maximum-tension.com                            #  ::                      :: #
#                                                #  :!:    : :: : :  :  ::::!: #
# +.....................++.....................+ #   :!:: :!:!1:!:!::1:::!!!:  #
# : C - Maximum Tension :: Create - 2023/07/09 : #   ::!::!!1001010!:!11!!::   #
# :---------------------::---------------------: #   :!1!!11000000000011!!:    #
# : License - GPL-3.0   :: Update - 2026/08/07 : #    ::::!!!1!!1!!!1!!!::     #
# +.....................++.....................+ #       ::::!::!:::!::::      #
\******************************************************************************/

/******************************************************************************\
|* __________________________________________________________________________ *|
|*|                                  UNUSED                                  |*|
|*|__________________________________________________________________________|*|
|*|                                                                          |*|
|*| THIS MACRO TELLS THE COMPILER THAT THE FUNCTION MAY NOT BE USED IN THE   |*|
|*| PROGRAM.                                                                 |*|
|*|                                                                          |*|
|*| IF UNUSED, THE COMPILER IGNORES THIS FUNCTION AND CONTINUES COMPILING    |*|
|*| THE PROGRAM WITHOUT GIVING ANY WARNINGS.                                 |*|
|*|__________________________________________________________________________|*|
|*'..........................................................................'*|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| #define UNUSED                                                      : *|
|* : 3|                                                                     : *|
|* :                                                                        : *|
|* : JUST PUT THIS TAG AT THE BEGINNING OF THE FUNCTION.                    : *|
|* :                                                                        : *|
|* : EXAMPLES:                                                              : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| UNUSED void function(void)                                          : *|
|* : 3| {                                                                   : *|
|* : 4|     . . .                                                           : *|
|* : 5| }                                                                   : *|
|* : 6|                                                                     : *|
|* '........................................................................' *|
\******************************************************************************/

#ifndef UNUSED_H
#define UNUSED_H 202608 /* VERSION */

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

#ifdef __has_cpp_attribute
#if (__has_cpp_attribute(maybe_unused))
#define UNUSED [[maybe_unused]]
#endif /* __has_cpp_attribute(maybe_unused) */
#endif /* __has_cpp_attribute */

#ifndef UNUSED
#ifdef __has_c_attribute
#if (__has_c_attribute(maybe_unused))
#define UNUSED [[maybe_unused]]
#endif /* __has_c_attribute(maybe_unused) */
#endif /* __has_c_attribute */
#endif /* !UNUSED */

#ifndef UNUSED
#ifdef __has_attribute
#if (__has_attribute(unused))
#define UNUSED __attribute__((unused))
#endif /* __has_attribute(unused) */
#endif /* __has_attribute */
#endif /* !UNUSED */

#ifndef UNUSED
#ifdef __cplusplus
#if (__cplusplus >= 201703L) /* C++17+ */
#define UNUSED [[maybe_unused]]
#endif /* __cplusplus >= 201703L */
#endif /* __cplusplus */
#endif /* !UNUSED */

#ifndef UNUSED
#ifdef __clang__
#define UNUSED __attribute__((unused))
#else /* !__clang__ */
#ifdef __GNUC__
#if ((__GNUC__ > 4) || (__GNUC__ == 4 && __GNUC_MINOR__ >= 2)) /* GCC 4.2+ */
#define UNUSED __attribute__((unused))
#endif /* (__GNUC__ > 4) || (__GNUC__ == 4 && __GNUC_MINOR__ >= 2) */
#endif /* __GNUC__ */
#endif /* __clang__ */
#endif /* !UNUSED */

#ifndef UNUSED
#ifdef __CC_ARM
#ifdef __ARMCC_VERSION
#if (__ARMCC_VERSION < 6000000)
#define UNUSED __attribute__((unused))
#endif /* __ARMCC_VERSION < 6000000 */
#endif /* __ARMCC_VERSION */
#endif /* __CC_ARM */
#endif /* !UNUSED */

#ifndef UNUSED
#define UNUSED /* EMPTY */
#endif /* !UNUSED */

/* ************************ [v] TI CGT CCS (POP) [v] ************************ */
#ifdef __TI_COMPILER_VERSION__
#pragma diag_pop /* TI CGT CCS COMPILER DIRECTIVES */
#endif /* __TI_COMPILER_VERSION__ */
/* ************************ [^] TI CGT CCS (POP) [^] ************************ */

#endif /* !UNUSED_H */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
