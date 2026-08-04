/******************************************************************************\
# H - NOINLINE                                   #       Maximum Tension       #
################################################################################
#                                                #      -__            __-     #
# Teoman Deniz                                   #  :    :!1!-_    _-!1!:    : #
# maximum-tension.com                            #  ::                      :: #
#                                                #  :!:    : :: : :  :  ::::!: #
# +.....................++.....................+ #   :!:: :!:!1:!:!::1:::!!!:  #
# : C - Maximum Tension :: Create - 2026/08/04 : #   ::!::!!1001010!:!11!!::   #
# :---------------------::---------------------: #   :!1!!11000000000011!!:    #
# : License - GPL-3.0   :: Update - 2026/08/04 : #    ::::!!!1!!1!!!1!!!::     #
# +.....................++.....................+ #       ::::!::!:::!::::      #
\******************************************************************************/

/******************************************************************************\
|* __________________________________________________________________________ *|
|*|                                 NOINLINE                                 |*|
|*|__________________________________________________________________________|*|
|*|             ________                                                     |*|
|*| DEFINES THE NOINLINE FUNCTION ATTRIBUTE AS A CROSS-COMPILER MACRO THAT   |*|
|*| PREVENTS THE COMPILER FROM INLINING A FUNCTION.                          |*|
|*|                                                                          |*|
|*| THIS PROVIDES A SINGLE PORTABLE MACRO THAT MAPS TO THE APPROPRIATE       |*|
|*| COMPILER-SPECIFIC ATTRIBUTE OR KEYWORD.                                  |*|
|*|__________________________________________________________________________|*|
|*'..........................................................................'*|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| #define NOINLINE                                                    : *|
|* : 3|                                                                     : *|
|* :                                                                        : *|
|* : EXAMPLES:                                                              : *|
|* :                                                                        : *|
|* :   v [C LANGUAGE]                                                       : *|
|* :  1|                                                                    : *|
|* :  2| NOINLINE void log_message(const char *message);                    : *|
|* :  3|                                                                    : *|
|* :  4| extern NOINLINE int compute_value(int value);                      : *|
|* :  5|                                                                    : *|
|* :  6| NOINLINE void log_message(const char *message)                     : *|
|* :  7| {                                                                  : *|
|* :  8|     . . .                                                          : *|
|* :  9| }                                                                  : *|
|* : 10|                                                                    : *|
|* '........................................................................' *|
\******************************************************************************/

#ifndef NOINLINE_H
#define NOINLINE_H 202608 /* VERSION */

#ifdef __WATCOMC__ /* WATCOM C++ */
#ifndef _ENABLE_AUTODEPEND /* IF AUTO DEPENDENCY TRACKING IS OFF */
#pragma read_only_file; /* THIS FILE WON'T CHANGE DURING COMPILE TIME */
#endif /* !_ENABLE_AUTODEPEND */
#endif /* __WATCOMC__ */

#ifdef __clang__ /* CLANG */
#define NOINLINE __attribute__((__noinline__))
#endif /* __clang__ */

#ifndef NOINLINE
#ifdef __GNUC__ /* GNU-GCC */
#define NOINLINE __attribute__((__noinline__))
#endif /* __GNUC__ */
#endif /* !NOINLINE */

#ifndef NOINLINE
#ifdef _MSC_VER /* MSVC */
#define NOINLINE __declspec(noinline)
#endif /* _MSC_VER */
#endif /* !NOINLINE */

#ifndef NOINLINE
#ifdef __INTEL_COMPILER /* ICC CLASSIC */
#ifdef _MSC_VER
#define NOINLINE __declspec(noinline)
#else /* !_MSC_VER */
#define NOINLINE __attribute__((__noinline__))
#endif /* _MSC_VER */
#endif /* __INTEL_COMPILER */
#endif /* !NOINLINE */

#ifndef NOINLINE
#ifdef __INTEL_LLVM_COMPILER /* INTEL ICX */
#define NOINLINE __attribute__((__noinline__))
#endif /* __INTEL_LLVM_COMPILER */
#endif /* !NOINLINE */

#ifndef NOINLINE
#ifdef __TINYC__ /* TINY C COMPILER */
#define NOINLINE __attribute__((__noinline__))
#endif /* __TINYC__ */
#endif /* !NOINLINE */

#ifndef NOINLINE
#ifdef __CC_ARM /* ARM COMPILER 5 */
#define NOINLINE __attribute__((noinline))
#endif /* __CC_ARM */
#endif /* !NOINLINE */

#ifndef NOINLINE
#ifdef __ARMCOMPILER_VERSION /* ARM COMPILER 6 (LLVM-BASED) */
#define NOINLINE __attribute__((noinline))
#endif /* __ARMCOMPILER_VERSION */
#endif /* !NOINLINE */

#ifndef NOINLINE
#ifdef __IBMCPP__ /* IBM XL */
#define NOINLINE __attribute__((noinline))
#else /* !__IBMCPP__ */
#ifdef __IBMC__ /* IBM XL */
#define NOINLINE __attribute__((noinline))
#endif /* __IBMC__ */
#endif /* __IBMCPP__ */
#endif /* !NOINLINE */

#ifndef NOINLINE
#ifdef __SUNPRO_C /* SUN STUDIO / ORACLE DEVELOPER STUDIO */
#define NOINLINE __attribute__((noinline))
#else /* !__SUNPRO_C */
#ifdef __SUNPRO_CC
#define NOINLINE __attribute__((noinline))
#endif /* __SUNPRO_CC */
#endif /* __SUNPRO_C */
#endif /* !NOINLINE */

#ifndef NOINLINE
#ifdef __BORLANDC__ /* BORLAND C/C++ */
#define NOINLINE __declspec(noinline)
#endif /* __BORLANDC__ */
#endif /* !NOINLINE */

#ifndef NOINLINE
#ifdef __DMC__ /* DIGITAL MARS */
#define NOINLINE __declspec(noinline)
#endif /* __DMC__ */
#endif /* !NOINLINE */

#ifndef NOINLINE
#ifdef __WATCOMC__ /* WATCOM / OPENWATCOM */
#define NOINLINE __declspec(noinline)
#endif /* __WATCOMC__ */
#endif /* !NOINLINE */

#ifndef NOINLINE
#ifdef __MWERKS__ /* METROWERKS CODEWARRIOR */
#define NOINLINE __declspec(noinline)
#endif /* __MWERKS__ */
#endif /* !NOINLINE */

#ifndef NOINLINE
#ifdef __ghs__ /* GREEN HILLS */
#define NOINLINE __attribute__((noinline))
#endif /* __ghs__ */
#endif /* !NOINLINE */

#ifndef NOINLINE
#ifdef __IAR_SYSTEMS_ICC__ /* IAR EMBEDDED WORKBENCH */
#define NOINLINE __attribute__((noinline))
#endif /* __IAR_SYSTEMS_ICC__ */
#endif /* !NOINLINE */

#ifndef NOINLINE
#ifdef __TI_COMPILER_VERSION__ /* TEXAS INSTRUMENTS */
#define NOINLINE __attribute__((noinline))
#endif /* __TI_COMPILER_VERSION__ */
#endif /* !NOINLINE */

#ifndef NOINLINE
#ifdef __POCC__ /* PELLES C */
#define NOINLINE __declspec(noinline)
#endif /* __POCC__ */
#endif /* !NOINLINE */

#ifndef NOINLINE
#ifdef __PGI /* PGI / NVIDIA HPC */
#define NOINLINE __attribute__((noinline))
#endif /* __PGI */
#endif /* !NOINLINE */

#ifndef NOINLINE
#define NOINLINE
#endif /* !NOINLINE */
#endif /* NOINLINE_H */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
