/******************************************************************************\
# H - MAYBE_ARGS                                 #       Maximum Tension       #
################################################################################
#                                                #      -__            __-     #
# Teoman Deniz                                   #  :    :!1!-_    _-!1!:    : #
# maximum-tension.com                            #  ::                      :: #
#                                                #  :!:    : :: : :  :  ::::!: #
# +.....................++.....................+ #   :!:: :!:!1:!:!::1:::!!!:  #
# : C - Maximum Tension :: Create - 2026/09/21 : #   ::!::!!1001010!:!11!!::   #
# :---------------------::---------------------: #   :!1!!11000000000011!!:    #
# : License - GPL-3.0   :: Update - 2026/09/21 : #    ::::!!!1!!1!!!1!!!::     #
# +.....................++.....................+ #       ::::!::!:::!::::      #
\******************************************************************************/

/******************************************************************************\
|* __________________________________________________________________________ *|
|*|                                MAYBE_ARGS                                |*|
|*|__________________________________________________________________________|*|
|*|                                                                          |*|
|*| DECLARES A FUNCTION PARAMETER LIST THAT CAN ACCEPT >ANY NUMBER OF        |*|
|*| ARGUMENTS OF ANY TYPE<, IN A WAY THAT KEEPS WORKING ACROSS C STANDARDS.  |*|
|*|                                     __                                   |*|
|*| BEFORE C23, AN EMPTY PARAMETER LIST () MEANT "UNSPECIFIED ARGUMENTS"     |*|
|*| (A NON-PROTOTYPE DECLARATION), SO int f(); COULD BE CALLED WITH          |*|
|*| ANYTHING.                         ^^^^^^^^                               |*|
|*| ________________  __                               ______                |*|
|*| C23 CHANGED THIS: () NOW MEANS EXACTLY THE SAME AS (void), WHICH BREAKS  |*|
|*| CODE THAT RELIED ON THE OLD BEHAVIOR. AT THE SAME TIME, C23 STARTED      |*|
|*| ALLOWING A VARIADIC LIST WITH NO NAMED PARAMETER BEFORE IT, (...), WHICH |*|
|*| C++ HAS ALWAYS ALLOWED.                                     ^^^^^        |*|
|*| __________                                                               |*|
|*| MAYBE_ARGS PICKS THE RIGHT FORM FOR THE CURRENT COMPILER:                |*|
|*|  ______________________________________________________________________  |*|
|*| | ENVIRONMENT | MAYBE_ARGS EXPANDS TO | RESULT                         | |*|
|*| |=============|=======================|================================| |*|
|*| | C23 AND     | ...                   | f(...) - VARIADIC, NO NAMED    | |*|
|*| | ABOVE       |                       | PARAMETER                      | |*|
|*| | (NON-MSVC)  |                       |                                | |*|
|*| |-------------|-----------------------|--------------------------------| |*|
|*| | C++         | ...                   | f(...) - VARIADIC, NO NAMED    | |*|
|*| |             |                       | PARAMETER                      | |*|
|*| |-------------|-----------------------|--------------------------------| |*|
|*| | C89 / C99 / | (nothing)             | f() - UNSPECIFIED ARGUMENTS    | |*|
|*| | C11 / C17,  |                       |                                | |*|
|*| | MSVC        |                       |                                | |*|
|*| |_____________|_______________________|________________________________| |*|
|*|                                                   ___________________    |*|
|*| IN THE PRE-C23 CASE, THE HEADER ALSO SILENCES THE -Wstrict-prototypes    |*|
|*| (GCC / CLANG) AND >-Wdeprecated-non-prototype< (CLANG) WARNINGS THAT     |*|
|*| f() WOULD OTHERWISE PRODUCE.                                             |*|
|*| ^^^                                                                      |*|
|*|__________________________________________________________________________|*|
|*'..........................................................................'*|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| #define MAYBE_ARGS                                                  : *|
|* : 3| #define maybe_args                                                  : *|
|* : 4|                                                                     : *|
|* :                                                                        : *|
|* : EXAMPLES:                                                              : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| // A generic function pointer type that can hold "any" callback     : *|
|* : 3| typedef void    (*t_callback)(MAYBE_ARGS);                          : *|
|* : 4|                                                                     : *|
|* : 5| // A declaration that accepts any arguments on every standard       : *|
|* : 6| extern int  legacy_handler(maybe_args);                             : *|
|* : 7|                                                                     : *|
|* :                                                                        : *|
|* : O - (i) NOTE                                                           : *|
|* : | >                              ______________________________        : *|
|* : | > THE WARNING SUPPRESSION USES #pragma ... diagnostic ignored        : *|
|* : | > WITHOUT A PUSH/POP PAIR, SO ON PRE-C23 C IT STAYS IN EFFECT FOR    : *|
|* : | > THE REST OF THE TRANSLATION UNIT AFTER THIS HEADER IS INCLUDED.    : *|
|* : '                                                                      : *|
|* :                                                                        : *|
|* : O - (!) WARNING                                                        : *|
|* : | > ______     ___                                                     : *|
|* : | > f(...) AND f() ARE NOT IDENTICAL AT THE ABI LEVEL.                 : *|
|* : | >                                           _____                    : *|
|* : | > CALLING A NON-VARIADIC FUNCTION THROUGH A (...) POINTER            : *|
|* : | > (C23 / C++) IS UNDEFINED BEHAVIOR; CAST THE POINTER BACK TO ITS    : *|
|* : | > REAL TYPE BEFORE CALLING IT.                                       : *|
|* : '                                                                      : *|
|* '........................................................................' *|
\******************************************************************************/

#ifndef MAYBE_ARGS_H
#define MAYBE_ARGS_H 202609 /* VERSION */

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

#ifdef __STDC_VERSION__
#if (__STDC_VERSION__ > 201710L) /* C23+ */
#ifndef _MSC_VER
#define MAYBE_ARGS ...
#endif /* !_MSC_VER */
#endif /* __STDC_VERSION__ > 201710L */
#endif /* __STDC_VERSION__ */

#ifndef MAYBE_ARGS
#ifdef __cplusplus /* C++ */
#define MAYBE_ARGS ...
#endif /* __cplusplus */
#endif /* !MAYBE_ARGS */

#ifndef MAYBE_ARGS
#define MAYBE_ARGS

#ifdef __clang__
#ifdef __has_warning
#if (__has_warning("-Wdeprecated-non-prototype"))
#pragma clang diagnostic ignored "-Wdeprecated-non-prototype"
#endif /* __has_warning("-Wdeprecated-non-prototype") */
#endif /* __has_warning */

#pragma clang diagnostic ignored "-Wstrict-prototypes"
#else /* !__clang__ */
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wstrict-prototypes"
#endif /* __GNUC__ */
#endif /* __clang__ */
#endif /* !MAYBE_ARGS */

#define maybe_args MAYBE_ARGS

/* ************************ [v] TI CGT CCS (POP) [v] ************************ */
#ifdef __TI_COMPILER_VERSION__
#pragma diag_pop /* TI CGT CCS COMPILER DIRECTIVES */
#endif /* __TI_COMPILER_VERSION__ */
/* ************************ [^] TI CGT CCS (POP) [^] ************************ */

#endif /* !MAYBE_ARGS_H */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
