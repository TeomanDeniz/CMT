/******************************************************************************\
# H - IGNORE_VAR                                 #       Maximum Tension       #
################################################################################
#                                                #      -__            __-     #
# Teoman Deniz                                   #  :    :!1!-_    _-!1!:    : #
# maximum-tension.com                            #  ::                      :: #
#                                                #  :!:    : :: : :  :  ::::!: #
# +.....................++.....................+ #   :!:: :!:!1:!:!::1:::!!!:  #
# : C - Maximum Tension :: Create - 2024/05/28 : #   ::!::!!1001010!:!11!!::   #
# :---------------------::---------------------: #   :!1!!11000000000011!!:    #
# : License - GPL-3.0   :: Update - 2026/06/17 : #    ::::!!!1!!1!!!1!!!::     #
# +.....................++.....................+ #       ::::!::!:::!::::      #
\******************************************************************************/

/******************************************************************************\
|* __________________________________________________________________________ *|
|*|                                IGNORE_VAR                                |*|
|*|__________________________________________________________________________|*|
|*|                                                                          |*|
|*|  v [C LANGUAGE]                                                          |*|
|*| 1|                                                                       |*|
|*| 2| #define IGNORE_VAR(VARIABLE)                                          |*|
|*| 3| #define ignore_var(variable)                                          |*|
|*| 4|                                                                       |*|
|*|                                                                          |*|
|*| THIS KEYWORD TELLS THE COMPILER THAT THE VARIABLE MAY NOT BE USED IN     |*|
|*| THE PROGRAM.                                                             |*|
|*|                                                                          |*|
|*| IF UNUSED, THE COMPILER IGNORES THIS VARIABLE AND CONTINUES COMPILING    |*|
|*| THE PROGRAM WITHOUT GENERATING ANY WARNINGS.                             |*|
|*|                                                                          |*|
|*| TO USE, SIMPLY ADD THE TAG IN FRONT OF THE VARIABLE.                     |*|
|*|                                                                          |*|
|*|  v [C LANGUAGE]                                                          |*|
|*| 1|                                                                       |*|
|*| 2| IGNORE_VAR(test);                                                     |*|
|*| 3|                                                                       |*|
|*| 4| ignore_var(i);                                                        |*|
|*| 5|                                                                       |*|
|*|                                                                          |*|
|*| EXAMPLE:                                                                 |*|
|*|                                                                          |*|
|*|  v [C LANGUAGE]                                                          |*|
|*| 1|                                                                       |*|
|*| 2| int main(int argc, char **argv)                                       |*|
|*| 3| {                                                                     |*|
|*| 4|     ignore_var(argc);                                                 |*|
|*| 5|                                                                       |*|
|*| 6|     ...                                                               |*|
|*| 7| }                                                                     |*|
|*| 8|                                                                       |*|
|*|__________________________________________________________________________|*|
\******************************************************************************/

#ifndef IGNORE_VAR_H
#define IGNORE_VAR_H 202606 /* VERSION */

/* **************************** [v] INCLUDES [v] **************************** */
#include "../ENVIRONMENTS/KNR_STYLE.H"
/******* """""""""""""""""""""""""""""
 * #define KNR_STYLE
 */
/* **************************** [^] INCLUDES [^] **************************** */

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

#ifdef _MSC_VER /* MICROSOFT C++ */
#define IGNORE_VAR(VARIABLE) __pragma(warning(suppress:4100)) (void)(VARIABLE)
#else /*!_MSC_VER */
#ifndef KNR_STYLE /* STANDARD C */
#define IGNORE_VAR(VARIABLE) (void)(VARIABLE) /* PRAY FOR IT TO WORK LOL */
#else /* K&R */
#define IGNORE_VAR(VARIABLE) do {if (VARIABLE){}} while (0)
#endif /* !KNR_STYLE */
#endif /*_MSC_VER */

/* **************************** [v] LOWERCASE [v] *************************** */
#define ignore_var(variable) IGNORE_VAR(variable)
/* **************************** [^] LOWERCASE [^] *************************** */

/* ************************ [v] TI CGT CCS (POP) [v] ************************ */
#ifdef __TI_COMPILER_VERSION__
#pragma diag_pop /* TI CGT CCS COMPILER DIRECTIVES */
#endif /* __TI_COMPILER_VERSION__ */
/* ************************ [^] TI CGT CCS (POP) [^] ************************ */

#endif /* !IGNORE_VAR_H */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
