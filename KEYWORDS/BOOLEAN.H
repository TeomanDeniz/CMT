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
# : License - GPL-3.0   :: Update - 2026/07/11 : #    ::::!!!1!!1!!!1!!!::     #
# +.....................++.....................+ #       ::::!::!:::!::::      #
\******************************************************************************/

/******************************************************************************\
|* __________________________________________________________________________ *|
|*|                                 BOOLEAN                                  |*|
|*|__________________________________________________________________________|*|
|*|                                                                          |*|
|*| PROVIDES A PORTABLE BOOLEAN INTERFACE FOR C THAT AUTOMATICALLY ADAPTS TO |*|
|*| THE COMPILER'S NATIVE BOOLEAN IMPLEMENTATION WHENEVER AVAILABLE.         |*|
|*|                                                        _________         |*|
|*| RATHER THAN FORCING A FIXED TYPE OR VALUE DEFINITIONS, BOOLEAN.H DETECTS |*|
|*| THE MOST SUITABLE COMPILER-SUPPORTED BOOLEAN TYPE AND CONSTANTS, FALLING |*|
|*| BACK TO A PORTABLE IMPLEMENTATION ONLY WHEN NECESSARY.                   |*|
|*|                                                _________                 |*|
|*| IF A STANDARD COMPILER BOOLEAN HEADER (SUCH AS stdbool.h OR AN           |*|
|*| EQUIVALENT IMPLEMENTATION) HAS ALREADY BEEN INCLUDED, THIS MODULE        |*|
|*| TRANSPARENTLY ADOPTS IT.                                                 |*|
|*|                                                                          |*|
|*| OTHERWISE, IT INCLUDES THE APPROPRIATE COMPILER HEADER ITSELF BEFORE     |*|
|*| EXPOSING A CONSISTENT SET OF BOOLEAN DEFINITIONS.                        |*|
|*|                                                                          |*|
|*| THE RESULT IS A SINGLE, COMPILER-INDEPENDENT INTERFACE THAT REMAINS      |*|
|*| FULLY COMPATIBLE WITH EXISTING CODE WHILE PRESERVING THE COMPILER'S      |*|
|*| PREFERRED BOOLEAN REPRESENTATION WHENEVER POSSIBLE.                      |*|
|*|__________________________________________________________________________|*|
|*                                                                            *|
\******************************************************************************/

/*############################################################################*\
|*#                                 CONTENTS                                 #*|
|*############################################################################*|
|* __________________________________________________________________________ *|
|*| CONTENT                                                       | DOC LINE |*|
|*|===============================================================|==========|*|
|*| #define BOOLEAN                                               | 60       |*|
|*| #define boolean                                               |          |*|
|*|---------------------------------------------------------------|----------|*|
|*| #define TRUE                                                  | 76       |*|
|*| #define true                                                  |          |*|
|*|---------------------------------------------------------------|----------|*|
|*| #define FALSE                                                 | 91       |*|
|*| #define false                                                 |          |*|
|*|---------------------------------------------------------------|----------|*|
|*| #define __bool_true_false_are_defined                         | 106      |*|
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
|* : DEFINES THE PROJECT'S PORTABLE BOOLEAN TYPE.                           : *|
|* :                                                                        : *|
|* : WHEN SUPPORTED, IT ALIASES THE COMPILER'S NATIVE BOOLEAN TYPE;         : *|
|* : OTHERWISE IT FALLS BACK TO AN IMPLEMENTATION BASED ON unsigned char.   : *|
|* :                                                       ^^^^^^^^^^^^^    : *|
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
|* :                                                                        : *|
|* : DEFINES THE BOOLEAN TRUE VALUE.                                        : *|
|* :                                                                        : *|
|* : USES THE COMPILER'S NATIVE DEFINITION WHENEVER AVAILABLE, OTHERWISE    : *|
|* : PROVIDES A PORTABLE FALLBACK VALUE.                                    : *|
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
|* :                                                                        : *|
|* : DEFINES THE BOOLEAN FALSE VALUE.                                       : *|
|* :                                                                        : *|
|* : USES THE COMPILER'S NATIVE DEFINITION WHENEVER AVAILABLE, OTHERWISE    : *|
|* : PROVIDES A PORTABLE FALLBACK VALUE.                                    : *|
|* :........................................................................: *|
|*                                                                            *|
|*                     .................................                      *|
|* ....................: __bool_true_false_are_defined :..................... *|
|* :                   '''''''''''''''''''''''''''''''''                    : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| #define __bool_true_false_are_defined                               : *|
|* : 3|                                                                     : *|
|* :                                                                        : *|
|* : DEFINES THE STANDARD COMPATIBILITY MACRO INDICATING THAT BOOLEAN       : *|
|* : DEFINITIONS ARE AVAILABLE, MATCHING THE BEHAVIOR EXPECTED BY           : *|
|* : IMPLEMENTATIONS COMPATIBLE WITH stdbool.h.                             : *|
|* :                                 ^^^^^^^^^                              : *|
|* :........................................................................: *|
|*                                                                            *|
\******************************************************************************/

#ifndef BOOLEAN_H
#define BOOLEAN_H 202607 /* VERSION */

#ifdef __WATCOMC__ /* WATCOM C++ */
#ifndef _ENABLE_AUTODEPEND /* IF AUTO DEPENDENCY TRACKING IS OFF */
#pragma read_only_file; /* THIS FILE WON'T CHANGE DURING COMPILE TIME */
#endif /* !_ENABLE_AUTODEPEND */
#endif /* __WATCOMC__ */

#ifdef TRUE /* TRUST ME, I KNOW WHAT I AM DOING */
#undef TRUE
#endif /* !TRUE */

#ifdef FALSE
#undef FALSE
#endif /* !FALSE */

/* ****************************** [v] TCC [v] ******************************* */
#ifdef __TINYC__
#define LOCALMACRO__BOOLEAN_DEFINED

#ifndef _STDBOOL_H
#define bool _Bool
#define true 1
#define false 0
#define BOOLEAN _Bool
#define boolean _Bool
#define TRUE 1
#define FALSE 0
#else /* _STDBOOL_H */
#undef _STDBOOL_H
#define BOOLEAN bool
#define boolean bool
#define TRUE true
#define FALSE false
#endif /* !_STDBOOL_H */
#endif /* __TINYC__ */
/* ****************************** [^] TCC [^] ******************************* */

/* ***************************** [v] DJGPP [v] ****************************** */
#ifndef LOCALMACRO__BOOLEAN_DEFINED
#ifdef __DJGPP__
#ifndef __dj_stdbool__h_
#ifdef __STDC_VERSION__
#if (__STDC_VERSION__ >= 199901L)
#define LOCALMACRO__STDC_BOOLEAN
#endif /* __STDC_VERSION__ >= 199901L */
#endif /* __STDC_VERSION__ */

#ifndef LOCALMACRO__STDC_BOOLEAN
#ifndef __STRICT_ANSI__
#define LOCALMACRO__STDC_BOOLEAN
#endif /* !__STRICT_ANSI__ */
#endif /* !LOCALMACRO__STDC_BOOLEAN */

#ifndef LOCALMACRO__STDC_BOOLEAN
#ifdef __cplusplus
#define LOCALMACRO__STDC_BOOLEAN
#endif /* __cplusplus */
#endif /* !LOCALMACRO__STDC_BOOLEAN */

#ifdef LOCALMACRO__STDC_BOOLEAN
#undef LOCALMACRO__STDC_BOOLEAN
#define bool _Bool
#define true 1
#define false 0
#endif /* LOCALMACRO__STDC_BOOLEAN */
#else /* __dj_stdbool__h_ */
#undef __dj_stdbool__h_
#endif /* !__dj_stdbool__h_ */

#define LOCALMACRO__BOOLEAN_DEFINED
#define BOOLEAN bool
#define boolean bool
#define TRUE true
#define FALSE false
#endif /* __DJGPP__ */
#endif /* !LOCALMACRO__BOOLEAN_DEFINED */
/* ***************************** [^] DJGPP [^] ****************************** */

/* ***************************** [v] CLANG [v] ****************************** */
#ifndef LOCALMACRO__BOOLEAN_DEFINED
#ifdef __clang__
#define LOCALMACRO__BOOLEAN_DEFINED

#ifndef __STDBOOL_H
#ifndef __cplusplus
#define bool _Bool
#define true 1
#define false 0
#else /* __cplusplus */
#ifdef __GNUC__
#ifndef __STRICT_ANSI__
#define _Bool bool

#if (__cplusplus < 201103L) /* FOR C++98 */
#define bool bool
#define false false
#define true true
#endif /* __cplusplus < 201103L */
#endif /* !__STRICT_ANSI__ */
#endif /* __GNUC__ */
#endif /* !__cplusplus */
#else /* __STDBOOL_H */
#undef __STDBOOL_H
#define BOOLEAN bool
#define boolean bool
#define TRUE true
#define FALSE false
#endif /* !__STDBOOL_H */
#endif /* __clang__ */
#endif /* !LOCALMACRO__BOOLEAN_DEFINED */
/* ***************************** [^] CLANG [^] ****************************** */

/* ****************************** [v] CINT [v] ****************************** */
#ifndef LOCALMACRO__BOOLEAN_DEFINED
#ifdef G__OLDIMPLEMENRTATION1604
#ifndef G__BOOLEAN_H
#define BOOLEAN int
#else /* G__BOOLEAN_H */
#undef G__BOOLEAN_H
#define BOOLEAN boolean
#endif /* !G__BOOLEAN_H */

#define TRUE 1
#define FALSE 0
#define LOCALMACRO__BOOLEAN_DEFINED
#endif /* G__OLDIMPLEMENRTATION1604 */
#endif /* !LOCALMACRO__BOOLEAN_DEFINED */
/* ****************************** [^] CINT [^] ****************************** */

/* *************************** [v] WATCOM C++ [v] *************************** */
#ifndef LOCALMACRO__BOOLEAN_DEFINED
#ifdef __WATCOMC__
#define LOCALMACRO__BOOLEAN_DEFINED

#ifndef _STDBOOL_H_INCLUDED
#ifndef __cplusplus
#if (__STDC_VERSION__ >= 199901L)
#define BOOLEAN _Bool
#else /* __STDC_VERSION__ < 199901L */
#define BOOLEAN char
#endif /* __STDC_VERSION__ >= 199901L */

#define boolean BOOLEAN
#define bool BOOLEAN
#define TRUE 1
#define FALSE 0
#endif /* !__cplusplus */
#else /* _STDBOOL_H_INCLUDED */
#undef _STDBOOL_H_INCLUDED
#define BOOLEAN bool
#define TRUE true
#define FALSE false
#endif /* !_STDBOOL_H_INCLUDED */
#endif /* __WATCOMC__ */
#endif /* !LOCALMACRO__BOOLEAN_DEFINED */
/* *************************** [^] WATCOM C++ [^] *************************** */

/* ****************************** [v] GNUC [v] ****************************** */
#ifndef LOCALMACRO__BOOLEAN_DEFINED
#ifdef __GNUC__
#define LOCALMACRO__BOOLEAN_DEFINED

#ifndef _STDBOOL_H
#ifndef __cplusplus
#define bool _Bool

#ifdef __STDC_VERSION__
#if (__STDC_VERSION__ > 201710L)
#define true ((_Bool) +1U)
#define false ((_Bool) +0U)
#define TRUE ((_Bool) +1U)
#define FALSE ((_Bool) +0U)
#else /* __STDC_VERSION__ <= 201710L */
#define TRUE 1
#define FALSE 0
#endif /* __STDC_VERSION__ > 201710L */
#else /* !__STDC_VERSION__ */
#define true 1
#define false 0
#define TRUE 1
#define FALSE 0
#endif /* __STDC_VERSION__ */
#else /* __cplusplus */
#define _Bool bool
#endif /* __cplusplus */
#else /* _STDBOOL_H */
#undef _STDBOOL_H
#define BOOLEAN bool
#define TRUE true
#define FALSE false
#endif /* !_STDBOOL_H */
#endif /* __GNUC__ */
#endif /* !LOCALMACRO__BOOLEAN_DEFINED */
/* ****************************** [^] GNUC [^] ****************************** */

/* ******************************* [v] TI [v] ******************************* */
#ifndef LOCALMACRO__BOOLEAN_DEFINED
#ifdef __TI_PROPRIETARY_STRICT_ANSI_MACRO
#define LOCALMACRO__BOOLEAN_DEFINED

#ifdef __bool_true_false_are_defined
#define BOOLEAN bool
#define TRUE true
#define FALSE false
#else /* !__bool_true_false_are_defined */
#ifndef __cplusplus
#if (__TI_PROPRIETARY_STRICT_ANSI_MACRO && 199901L > __STDC_VERSION__)
typedef unsigned char	_Bool;
#endif /* __TI_PROPRIETARY_STRICT_ANSI_MACRO && 199901L > __STDC_VERSION__ */

#define BOOLEAN _Bool
#define bool _Bool
#define true 1
#define false 0
#else /* __cplusplus */
#define BOOLEAN bool
#endif /* !__cplusplus */

#define TRUE 1
#define FALSE 0
#endif /* __bool_true_false_are_defined */
#endif /* __TI_PROPRIETARY_STRICT_ANSI_MACRO */
#endif /* !LOCALMACRO__BOOLEAN_DEFINED */
/* ******************************* [^] TI [^] ******************************* */

/* ***************************** [v] Z88DK [v] ****************************** */
#ifndef LOCALMACRO__BOOLEAN_DEFINED
#ifdef __STDBOOL_H__
#undef __STDBOOL_H__
#define LOCALMACRO__BOOLEAN_DEFINED
#define BOOLEAN bool
#define TRUE true
#define FALSE false
#endif /* __STDBOOL_H__ */
#endif /* !LOCALMACRO__BOOLEAN_DEFINED */
/* ***************************** [^] Z88DK [^] ****************************** */

#ifndef LOCALMACRO__BOOLEAN_DEFINED
typedef unsigned char	BOOLEAN;

#define TRUE 1 /* INDEED! <TEA NOISES> */
#define FALSE 0 /* APPALLING! <BLOODY TEA NOISES> */
#else /* LOCALMACRO__BOOLEAN_DEFINED */
#undef LOCALMACRO__BOOLEAN_DEFINED
#endif /* !LOCALMACRO__BOOLEAN_DEFINED */

#define boolean BOOLEAN

#ifndef true
#define true TRUE
#endif /* !true */

#ifndef false
#define false FALSE
#endif /* !false */

#ifndef __bool_true_false_are_defined
#ifndef bool
#define bool BOOLEAN /* JUST IN CASE? */
#endif /* !bool */
#endif /* !__bool_true_false_are_defined */

#undef __bool_true_false_are_defined
#define __bool_true_false_are_defined 1

/* ************************ [v] REMOVE CONFLICTS [v] ************************ */
#define G__BOOLEAN_H /* CINT */
#define _STDBOOL_H_INCLUDED /* WATCOM C++ */
#define __STDBOOL_H /* CLANG */
#define _STDBOOL_H /* TCC */
#define __dj_stdbool__h_ /* DJGPP */
#define __STDBOOL_H__ /* Z88DK */
/* ************************ [^] REMOVE CONFLICTS [^] ************************ */
#endif /* !BOOLEAN_H */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
