/******************************************************************************\
# H - BOOLEAN                                    #       Maximum Tension       #
################################################################################
#                                                #      -__            __-     #
# Teoman Deniz                                   #  :    :!1!-_    _-!1!:    : #
# maximum-tension.com                            #  ::                      :: #
#                                                #  :!:    : :: : :  :  ::::!: #
# +.....................++.....................+ #   :!:: :!:!1:!:!::1:::!!!:  #
# : C - Maximum Tension :: Create - 2026/07/07 : #   ::!::!!1001010!:!11!!::   #
# :---------------------::---------------------: #   :!1!!11000000000011!!:    #
# : License - Apache2.0 :: Update - 2026/10/02 : #    ::::!!!1!!1!!!1!!!::     #
# +.....................++.....................+ #       ::::!::!:::!::::      #
\******************************************************************************/

/******************************************************************************\
|* __________________________________________________________________________ *|
|*|                                 BOOLEAN                                  |*|
|*|__________________________________________________________________________|*|
|*|                                                                          |*|
|*| ONE BOOLEAN TYPE AND ONE PAIR OF TRUTH VALUES THAT MEAN THE SAME THING   |*|
|*| ON EVERY COMPILER, FROM K&R C TO C23 AND FROM TURBO C++ TO TODAY.        |*|
|*|                               _____________________________________      |*|
|*| THE HEADER ASKS ONE QUESTION, "WHAT DOES THIS LANGUAGE ALREADY GIVE      |*|
|*| ME?", AND THE FIRST RULE THAT MATCHES WINS:                              |*|
|*|  ______________________________________________________________________  |*|
|*| | Rule | Language / compiler                 | BOOLEAN is              | |*|
|*| |======|=====================================|=========================| |*|
|*| | 1    | C++ older than the bool keyword     | unsigned char           | |*|
|*| |      |                    ^^^^             | ^^^^^^^^^^^^^           | |*|
|*| |------|-------------------------------------|-------------------------| |*|
|*| | 2    | C++                                 | bool                    | |*|
|*| |      |                                     | ^^^^                    | |*|
|*| |------|-------------------------------------|-------------------------| |*|
|*| | 3    | C, <stdbool.h> already included     | bool (adopted as it is) | |*|
|*| |      |    ^^^^^^^^^^^                      | ^^^^                    | |*|
|*| |------|-------------------------------------|-------------------------| |*|
|*| | 4    | C23 and later                       | bool                    | |*|
|*| |      |                                     | ^^^^                    | |*|
|*| |------|-------------------------------------|-------------------------| |*|
|*| | 5    | C99, C11, C17                       | bool (<stdbool.h>)      | |*|
|*| |      |                                     | ^^^^  ^^^^^^^^^^^       | |*|
|*| |------|-------------------------------------|-------------------------| |*|
|*| | 6    | MSVC 2013+ in its default C mode    | bool (<stdbool.h>)      | |*|
|*| |      |                                     | ^^^^  ^^^^^^^^^^^       | |*|
|*| |------|-------------------------------------|-------------------------| |*|
|*| | 7    | C89 on GCC 3+ or Clang              | _Bool (extension)       | |*|
|*| |      |                                     | ^^^^^                   | |*|
|*| |------|-------------------------------------|-------------------------| |*|
|*| | 8    | Anything else                       | unsigned char           | |*|
|*| |      |                                     | ^^^^^^^^^^^^^           | |*|
|*| |______|_____________________________________|_________________________| |*|
|*|                                                                          |*|
|*| TURBO C++, BORLAND C++ BEFORE 5.0, WATCOM C++ BEFORE 11.0, VISUAL C++    |*|
|*| BEFORE 5.0.                                                              |*|
|*| ____     _____                                                           |*|
|*| TRUE AND FALSE ALWAYS FOLLOW THE CHOSEN TYPE, SO IN C++ THEY ARE         |*|
|*| REAL bool VALUES, NOT INTEGERS.                                          |*|
|*|      ^^^^                                                                |*|
|*| <bool>, <true> AND <false> ARE ONLY DEFINED WHEN THE LANGUAGE HAS NONE   |*|
|*| OF ITS OWN.                                                              |*|
|*|__________________________________________________________________________|*|
|*                                                                            *|
\******************************************************************************/

/*############################################################################*\
|*#                                 CONTENTS                                 #*|
|*############################################################################*|
|* __________________________________________________________________________ *|
|*| CONTENT                                                       | DOC LINE |*|
|*|===============================================================|==========|*|
|*| #define BOOLEAN                                               | 86       |*|
|*| #define boolean                                               |          |*|
|*|---------------------------------------------------------------|----------|*|
|*| #define TRUE                                                  | 107      |*|
|*| #define true                                                  |          |*|
|*|---------------------------------------------------------------|----------|*|
|*| #define FALSE                                                 | 125      |*|
|*| #define false                                                 |          |*|
|*|---------------------------------------------------------------|----------|*|
|*| #define bool                                                  | 143      |*|
|*|---------------------------------------------------------------|----------|*|
|*| #define __bool_true_false_are_defined                         | 160      |*|
|*|_______________________________________________________________|__________|*|
|*                                                                            *|
|*                                ...........                                 *|
|* ...............................: BOOLEAN :................................ *|
|* :                              '''''''''''                               : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| #define BOOLEAN                                                     : *|
|* : 3| #define boolean                                                     : *|
|* : 4|                                                                     : *|
|* :                                                                        : *|
|* : THE PORTABLE BOOLEAN TYPE.                                             : *|
|* :       ____                                _____                        : *|
|* : IT IS bool WHEREVER THE LANGUAGE HAS ONE, _Bool ON C89 COMPILERS       : *|
|* : THAT ACCEPT IT AS AN EXTENSION, AND unsigned char EVERYWHERE ELSE.     : *|
|* :                                     ^^^^^^^^^^^^^                      : *|
|* : CONVERTING ANY NONZERO VALUE TO <BOOLEAN> GIVES <TRUE>, EXCEPT ON THE  : *|
|* : <unsigned char> FALLBACK, WHERE ONLY THE LOW 8 BITS SURVIVE. WRITE     : *|
|* : (BOOLEAN)(VALUE != 0) WHEN THAT MATTERS.                               : *|
|* : ^^^^^^^^^^^^^^^^^^^^^                                                  : *|
|* : <boolean> IS THE LOWERCASE ALIAS.                                      : *|
|* :........................................................................: *|
|*                                                                            *|
|*                                  ........                                  *|
|* .................................: TRUE :................................. *|
|* :                                ''''''''                                : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| #define TRUE                                                        : *|
|* : 3| #define true                                                        : *|
|* : 4|                                                                     : *|
|* :                                    ____          ____         _        : *|
|* : THE TRUE VALUE OF THE CHOSEN TYPE: true WHEREVER bool EXISTS, 1        : *|
|* : EVERYWHERE ELSE.                                                       : *|
|* :            ____                   ___________                          : *|
|* : AN EARLIER TRUE (FOR EXAMPLE FROM <windows.h>) IS REPLACED. IT         : *|
|* : ALWAYS MEANT 1, SO NOTHING CHANGES FOR CODE THAT USED IT.              : *|
|* :              ^                                                         : *|
|* : <true> IS ONLY DEFINED WHEN THE LANGUAGE HAS NONE OF ITS OWN.          : *|
|* :........................................................................: *|
|*                                                                            *|
|*                                 .........                                  *|
|* ................................: FALSE :................................. *|
|* :                               '''''''''                                : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| #define FALSE                                                       : *|
|* : 3| #define false                                                       : *|
|* : 4|                                                                     : *|
|* :                                     _____          ____                : *|
|* : THE FALSE VALUE OF THE CHOSEN TYPE: false WHEREVER bool EXISTS,        : *|
|* : 0 EVERYWHERE ELSE.                                                     : *|
|* : ^                                                                      : *|
|* : AN EARLIER <FALSE> (FOR EXAMPLE FROM <<windows.h>>) IS REPLACED. IT    : *|
|* : ALWAYS MEANT 0, SO NOTHING CHANGES FOR CODE THAT USED IT.              : *|
|* :              ^                                                         : *|
|* : <false> IS ONLY DEFINED WHEN THE LANGUAGE HAS NONE OF ITS OWN.         : *|
|* :........................................................................: *|
|*                                                                            *|
|*                                  ........                                  *|
|* .................................: bool :................................. *|
|* :                                ''''''''                                : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| #define bool                                                        : *|
|* : 3|                                                                     : *|
|* :                                       ____                             : *|
|* : ONLY DEFINED WHEN THE LANGUAGE HAS NO bool OF ITS OWN: C89 AND         : *|
|* : OLDER, AND C++ COMPILERS OLDER THAN THE KEYWORD. IT NAMES THE SAME     : *|
|* : TYPE AS BOOLEAN, SO CODE WRITTEN FOR <stdbool.h> STILL COMPILES.       : *|
|* :         ^^^^^^^                      ^^^^^^^^^^^                       : *|
|* : THE GUARDS OF THE KNOWN <<stdbool.h>> HEADERS ARE CLOSED AT THE SAME   : *|
|* : TIME, SO A LATER #include <stdbool.h> IS A NO-OP INSTEAD OF A CLASH.   : *|
|* :                  ^^^^^^^^^^^^^^^^^^^^                                  : *|
|* :........................................................................: *|
|*                                                                            *|
|*                     .................................                      *|
|* ....................: __bool_true_false_are_defined :..................... *|
|* :                   '''''''''''''''''''''''''''''''''                    : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| #define __bool_true_false_are_defined                               : *|
|* : 3|                                                                     : *|
|* :                              ____  ____     _____                      : *|
|* : THE STANDARD MACRO THAT SAYS bool, true AND false ARE READY TO         : *|
|* : USE, THE SAME WAY <<stdbool.h>> DEFINES IT. ALWAYS <1>.                : *|
|* :........................................................................: *|
|*                                                                            *|
\******************************************************************************/

#ifndef BOOLEAN_H
#define BOOLEAN_H 202610 /* VERSION */

#ifdef __WATCOMC__ /* WATCOM C++ */
#ifndef _ENABLE_AUTODEPEND /* IF AUTO DEPENDENCY TRACKING IS OFF */
#pragma read_only_file; /* THIS FILE WON'T CHANGE DURING COMPILE TIME */
#endif /* !_ENABLE_AUTODEPEND */
#endif /* __WATCOMC__ */

/* *************************** [v] THE MODELS [v] *************************** */
#define LOCALMACRO__BOOLEAN_KEYWORD 1 /* THE LANGUAGE ALREADY HAS bool */
#define LOCALMACRO__BOOLEAN_STDBOOL 2 /* bool COMES FROM <stdbool.h> */
#define LOCALMACRO__BOOLEAN_EXTENSION 3 /* C89 WITH THE GNU _Bool */
#define LOCALMACRO__BOOLEAN_FALLBACK 4 /* NOTHING, unsigned char IT IS */
/* *************************** [^] THE MODELS [^] *************************** */

/* ************************* [v] PICK THE MODEL [v] ************************* */
/* FIRST MATCH WINS: EVERY RULE IS SKIPPED ONCE A MODEL HAS BEEN PICKED. */

/* RULE 1 - C++ COMPILERS OLDER THAN THE bool KEYWORD */
#ifdef __cplusplus
#ifdef __BORLANDC__
#if (__BORLANDC__ < 0x0500) /* BORLAND C++ 5.0 */
#define LOCALMACRO__BOOLEAN_MODEL LOCALMACRO__BOOLEAN_FALLBACK
#endif /* __BORLANDC__ < 0x0500 */
#else /* !__BORLANDC__ */
#ifdef __TURBOC__ /* TURBO C++ NEVER HAD IT */
#define LOCALMACRO__BOOLEAN_MODEL LOCALMACRO__BOOLEAN_FALLBACK
#endif /* __TURBOC__ */
#endif /* __BORLANDC__ */

#ifndef LOCALMACRO__BOOLEAN_MODEL
#ifdef __WATCOMC__
#if (__WATCOMC__ < 1100) /* WATCOM C++ 11.0 */
#define LOCALMACRO__BOOLEAN_MODEL LOCALMACRO__BOOLEAN_FALLBACK
#endif /* __WATCOMC__ < 1100 */
#endif /* __WATCOMC__ */
#endif /* !LOCALMACRO__BOOLEAN_MODEL */

#ifndef LOCALMACRO__BOOLEAN_MODEL
#ifdef _MSC_VER
#if (_MSC_VER < 1100) /* VISUAL C++ 5.0 */
#define LOCALMACRO__BOOLEAN_MODEL LOCALMACRO__BOOLEAN_FALLBACK
#endif /* _MSC_VER < 1100 */
#endif /* _MSC_VER */
#endif /* !LOCALMACRO__BOOLEAN_MODEL */

/* RULE 2 - C++ */
#ifndef LOCALMACRO__BOOLEAN_MODEL
#define LOCALMACRO__BOOLEAN_MODEL LOCALMACRO__BOOLEAN_KEYWORD
#endif /* !LOCALMACRO__BOOLEAN_MODEL */
#endif /* __cplusplus */

/* RULE 3 - C WITH <stdbool.h> ALREADY INCLUDED: ADOPT IT AS IT IS */
#ifndef LOCALMACRO__BOOLEAN_MODEL
#ifdef __bool_true_false_are_defined
#define LOCALMACRO__BOOLEAN_MODEL LOCALMACRO__BOOLEAN_KEYWORD
#endif /* __bool_true_false_are_defined */
#endif /* !LOCALMACRO__BOOLEAN_MODEL */

/* RULE 4 AND 5 - C23 HAS THE KEYWORD, C99 TO C17 HAVE <stdbool.h> */
#ifndef LOCALMACRO__BOOLEAN_MODEL
#ifdef __STDC_VERSION__
#if (__STDC_VERSION__ > 201710L)
#define LOCALMACRO__BOOLEAN_MODEL LOCALMACRO__BOOLEAN_KEYWORD
#else /* __STDC_VERSION__ <= 201710L */
#if (__STDC_VERSION__ >= 199901L)
#define LOCALMACRO__BOOLEAN_MODEL LOCALMACRO__BOOLEAN_STDBOOL
#endif /* __STDC_VERSION__ >= 199901L */
#endif /* __STDC_VERSION__ > 201710L */
#endif /* __STDC_VERSION__ */
#endif /* !LOCALMACRO__BOOLEAN_MODEL */

/* RULE 6 - MSVC 2013+ HAS <stdbool.h> EVEN WITHOUT __STDC_VERSION__ */
#ifndef LOCALMACRO__BOOLEAN_MODEL
#ifdef _MSC_VER
#if (_MSC_VER >= 1800)
#define LOCALMACRO__BOOLEAN_MODEL LOCALMACRO__BOOLEAN_STDBOOL
#endif /* _MSC_VER >= 1800 */
#endif /* _MSC_VER */
#endif /* !LOCALMACRO__BOOLEAN_MODEL */

/* RULE 7 - C89 ON GCC 3+ OR CLANG: _Bool AS AN EXTENSION */
#ifndef LOCALMACRO__BOOLEAN_MODEL
#ifdef __GNUC__
#if (__GNUC__ >= 3)
#define LOCALMACRO__BOOLEAN_MODEL LOCALMACRO__BOOLEAN_EXTENSION
#endif /* __GNUC__ >= 3 */
#endif /* __GNUC__ */
#endif /* !LOCALMACRO__BOOLEAN_MODEL */

/* RULE 8 - ANYTHING ELSE */
#ifndef LOCALMACRO__BOOLEAN_MODEL
#define LOCALMACRO__BOOLEAN_MODEL LOCALMACRO__BOOLEAN_FALLBACK
#endif /* !LOCALMACRO__BOOLEAN_MODEL */
/* ************************* [^] PICK THE MODEL [^] ************************* */

/* ************************** [v] CLEAN SLATE [v] *************************** */
#ifdef TRUE /* TRUST ME, I KNOW WHAT I AM DOING */
#undef TRUE
#endif /* TRUE */

#ifdef FALSE
#undef FALSE
#endif /* FALSE */

#ifdef BOOLEAN
#undef BOOLEAN
#endif /* BOOLEAN */

#ifdef boolean
#undef boolean
#endif /* boolean */
/* ************************** [^] CLEAN SLATE [^] *************************** */

/* ********************** [v] KEYWORD AND STDBOOL [v] *********************** */
#if (LOCALMACRO__BOOLEAN_MODEL == LOCALMACRO__BOOLEAN_STDBOOL)
#include <stdbool.h>
#endif /* LOCALMACRO__BOOLEAN_MODEL == LOCALMACRO__BOOLEAN_STDBOOL */

#if (LOCALMACRO__BOOLEAN_MODEL <= LOCALMACRO__BOOLEAN_STDBOOL)
#define BOOLEAN bool
#define TRUE true
#define FALSE false
#endif /* LOCALMACRO__BOOLEAN_MODEL <= LOCALMACRO__BOOLEAN_STDBOOL */
/* ********************** [^] KEYWORD AND STDBOOL [^] *********************** */

/* *************************** [v] EXTENSION [v] **************************** */
#if (LOCALMACRO__BOOLEAN_MODEL == LOCALMACRO__BOOLEAN_EXTENSION)
__extension__ typedef _Bool	T_BOOLEAN; /* NO -pedantic NOISE IN C89 */

#define BOOLEAN T_BOOLEAN
#define TRUE 1
#define FALSE 0
#endif /* LOCALMACRO__BOOLEAN_MODEL == LOCALMACRO__BOOLEAN_EXTENSION */
/* *************************** [^] EXTENSION [^] **************************** */

/* **************************** [v] FALLBACK [v] **************************** */
#if (LOCALMACRO__BOOLEAN_MODEL == LOCALMACRO__BOOLEAN_FALLBACK)
typedef unsigned char	T_BOOLEAN;

#define BOOLEAN T_BOOLEAN
#define TRUE 1 /* INDEED! <TEA NOISES> */
#define FALSE 0 /* APPALLING! <BLOODY TEA NOISES> */
#endif /* LOCALMACRO__BOOLEAN_MODEL == LOCALMACRO__BOOLEAN_FALLBACK */
/* **************************** [^] FALLBACK [^] **************************** */

/* ******************** [v] NO bool IN THE LANGUAGE [v] ********************* */
#if (LOCALMACRO__BOOLEAN_MODEL >= LOCALMACRO__BOOLEAN_EXTENSION)
#ifndef bool
#define bool BOOLEAN
#endif /* !bool */

#ifndef true
#define true TRUE
#endif /* !true */

#ifndef false
#define false FALSE
#endif /* !false */

/* A LATER <stdbool.h> WOULD REDEFINE bool: ITS GUARDS MAKE IT A NO-OP */
#define _STDBOOL_H /* GCC, TCC */
#define __STDBOOL_H /* CLANG */
#define _STDBOOL_H_INCLUDED /* WATCOM C++ */
#define __dj_stdbool__h_ /* DJGPP */
#define __STDBOOL_H__ /* Z88DK */
#define G__BOOLEAN_H /* CINT */
#endif /* LOCALMACRO__BOOLEAN_MODEL >= LOCALMACRO__BOOLEAN_EXTENSION */
/* ******************** [^] NO bool IN THE LANGUAGE [^] ********************* */

/* ************************** [v] EVERY MODEL [v] *************************** */
#define boolean BOOLEAN

#ifndef __bool_true_false_are_defined
#define __bool_true_false_are_defined 1
#endif /* !__bool_true_false_are_defined */

#undef LOCALMACRO__BOOLEAN_MODEL
#undef LOCALMACRO__BOOLEAN_KEYWORD
#undef LOCALMACRO__BOOLEAN_STDBOOL
#undef LOCALMACRO__BOOLEAN_EXTENSION
#undef LOCALMACRO__BOOLEAN_FALLBACK
/* ************************** [^] EVERY MODEL [^] *************************** */
#endif /* !BOOLEAN_H */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
