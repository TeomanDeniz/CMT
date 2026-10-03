/******************************************************************************\
# H - RESTRICT                                   #       Maximum Tension       #
################################################################################
#                                                #      -__            __-     #
# Teoman Deniz                                   #  :    :!1!-_    _-!1!:    : #
# maximum-tension.com                            #  ::                      :: #
#                                                #  :!:    : :: : :  :  ::::!: #
# +.....................++.....................+ #   :!:: :!:!1:!:!::1:::!!!:  #
# : C - Maximum Tension :: Create - 2026/10/01 : #   ::!::!!1001010!:!11!!::   #
# :---------------------::---------------------: #   :!1!!11000000000011!!:    #
# : License - Apache2.0 :: Update - 2026/10/02 : #    ::::!!!1!!1!!!1!!!::     #
# +.....................++.....................+ #       ::::!::!:::!::::      #
\******************************************************************************/

/******************************************************************************\
|* __________________________________________________________________________ *|
|*|                                 RESTRICT                                 |*|
|*|__________________________________________________________________________|*|
|*|                                                                          |*|
|*| ONE POINTER QUALIFIER THAT ONLY C99 STANDARDISED AND EVERY COMPILER      |*|
|*| SPELLS ITS OWN WAY.                                                      |*|
|*| ________                                                                 |*|
|*| restrict PROMISES THE COMPILER THAT, FOR THE LIFETIME OF THE POINTER,    |*|
|*| THE OBJECT IT POINTS TO IS REACHED THROUGH THAT POINTER AND NOTHING      |*|
|*| ELSE. THE COMPILER MAY THEN KEEP VALUES IN REGISTERS AND REORDER LOADS   |*|
|*| AND STORES ACROSS WRITES THROUGH OTHER POINTERS. BREAKING THE PROMISE IS |*|
|*| UNDEFINED BEHAVIOUR, SO USE IT ONLY WHERE IT IS TRUE.                    |*|
|*|                                         ________                         |*|
|*| EXPANDING TO NOTHING IS ALWAYS CORRECT: restrict ONLY EVER ALLOWS        |*|
|*| OPTIMISATIONS, IT NEVER CHANGES WHAT A CORRECT PROGRAM MEANS.            |*|
|*|__________________________________________________________________________|*|
|*                                                                            *|
\******************************************************************************/

/*############################################################################*\
|*#                                 CONTENTS                                 #*|
|*############################################################################*|
|* __________________________________________________________________________ *|
|*| CONTENT                                                       | DOC LINE |*|
|*|===============================================================|==========|*|
|*| #define RESTRICT                                              | 51       |*|
|*|---------------------------------------------------------------|----------|*|
|*| #define restrict                                              | 72       |*|
|*|---------------------------------------------------------------|----------|*|
|*| #define IS__RESTRICT__SUPPORTED                               | 89       |*|
|*|---------------------------------------------------------------|----------|*|
|*| #define CMT_NO_RESTRICT_FIX                                   | 100      |*|
|*|_______________________________________________________________|__________|*|
|*                                                                            *|
|*                                ............                                *|
|* ...............................: RESTRICT :............................... *|
|* :                              ''''''''''''                              : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| #define RESTRICT                                                    : *|
|* : 3|                                                                     : *|
|* :                                                                        : *|
|* : THE RESTRICT QUALIFIER OF THE COMPILER IN USE, OR NOTHING. IT GOES     : *|
|* : WHERE restrict GOES, AFTER THE *:                                      : *|
|* :       ^^^^^^^^                 ^                                       : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| void    COPY(                                                       : *|
|* : 3|    BYTE *RESTRICT DESTINATION,                                      : *|
|* : 4|    const BYTE *RESTRICT SOURCE,                                     : *|
|* : 5|    LET SIZE                                                         : *|
|* : 6| );                                                                  : *|
|* : 7|                                                                     : *|
|* :........................................................................: *|
|*                                                                            *|
|*                                ............                                *|
|* ...............................: restrict :............................... *|
|* :                              ''''''''''''                              : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| #define restrict                                                    : *|
|* : 3|                                                                     : *|
|* :            ________            ________                                : *|
|* : DEFINED AS RESTRICT ONLY WHERE restrict IS NOT A KEYWORD (C89 AND      : *|
|* : C++), SO CODE WRITTEN FOR C99 ALSO COMPILES THERE.                     : *|
|* :                                            ____________________        : *|
|* : NEVER DEFINED ON MSVC: ITS OWN HEADERS SAY __declspec(restrict),       : *|
|* : WHICH A restrict MACRO WOULD BREAK. USE RESTRICT THERE.                : *|
|* :         ^^^^^^^^                        ^^^^^^^^                       : *|
|* : C99 AND LATER ARE NEVER TOUCHED.                                       : *|
|* :........................................................................: *|
|*                                                                            *|
|*                        ...........................                         *|
|* .......................: IS__RESTRICT__SUPPORTED :........................ *|
|* :                      '''''''''''''''''''''''''''                       : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| #define IS__RESTRICT__SUPPORTED                                     : *|
|* : 3|                                                                     : *|
|* :              ________                                                  : *|
|* : DEFINED WHEN RESTRICT IS A REAL QUALIFIER RATHER THAN NOTHING.         : *|
|* :........................................................................: *|
|*                                                                            *|
|*                          .......................                           *|
|* .........................: CMT_NO_RESTRICT_FIX :.......................... *|
|* :                        '''''''''''''''''''''''                         : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| #define CMT_NO_RESTRICT_FIX                                         : *|
|* : 3| #include "CMT/ATTRIBUTES/RESTRICT.H"                                : *|
|* : 4|                                                                     : *|
|* :                                                                        : *|
|* : DEFINE IT BEFORE THE FIRST CMT HEADER TO LEAVE THE IDENTIFIER          : *|
|* : <restrict> ALONE, FOR EXAMPLE IN C++ CODE THAT USES <restrict> AS A    : *|
|* : VARIABLE OR FUNCTION NAME. <RESTRICT> IS STILL DEFINED.                : *|
|* :........................................................................: *|
|*                                                                            *|
\******************************************************************************/

#ifndef RESTRICT_H
#define RESTRICT_H 202610 /* VERSION */

#ifdef __WATCOMC__ /* WATCOM C++ */
#ifndef _ENABLE_AUTODEPEND /* IF AUTO DEPENDENCY TRACKING IS OFF */
#pragma read_only_file; /* THIS FILE WON'T CHANGE DURING COMPILE TIME */
#endif /* !_ENABLE_AUTODEPEND */
#endif /* __WATCOMC__ */

/* **************************** [v] RESTRICT [v] **************************** */
/* FIRST MATCH WINS: EVERY RULE IS SKIPPED ONCE A SPELLING HAS BEEN PICKED.   */
#ifdef RESTRICT
#undef RESTRICT
#endif /* RESTRICT */

/* RULE 1 - C99 AND LATER: THE KEYWORD */
#ifndef __cplusplus
#ifdef __STDC_VERSION__
#if (__STDC_VERSION__ >= 199901L)
#define RESTRICT restrict
#define LOCALMACRO__RESTRICT_IS_KEYWORD
#endif /* __STDC_VERSION__ >= 199901L */
#endif /* __STDC_VERSION__ */
#endif /* !__cplusplus */

/* RULE 2 - GCC 3+, CLANG, ICC AND EVERY OTHER GNU LOOK-ALIKE (C89 AND C++) */
#ifndef RESTRICT
#ifdef __GNUC__
#if (__GNUC__ >= 3)
#define RESTRICT __restrict
#endif /* __GNUC__ >= 3 */
#endif /* __GNUC__ */
#endif /* !RESTRICT */

#ifndef RESTRICT
#ifdef __clang__ /* CLANG-CL DOES NOT DEFINE __GNUC__ */
#define RESTRICT __restrict
#endif /* __clang__ */
#endif /* !RESTRICT */

/* RULE 3 - VISUAL C++ 2005+ */
#ifndef RESTRICT
#ifdef _MSC_VER
#if (_MSC_VER >= 1400)
#define RESTRICT __restrict
#endif /* _MSC_VER >= 1400 */
#endif /* _MSC_VER */
#endif /* !RESTRICT */

/* RULE 4 - OTHER COMPILERS WITH A DOCUMENTED SPELLING */
#ifndef RESTRICT
#ifdef __INTEL_COMPILER /* ICL ON WINDOWS, NO __GNUC__ THERE */
#define RESTRICT __restrict
#endif /* __INTEL_COMPILER */
#endif /* !RESTRICT */

#ifndef RESTRICT
#ifdef __IBMC__ /* IBM XL C */
#define RESTRICT __restrict
#endif /* __IBMC__ */
#endif /* !RESTRICT */

#ifndef RESTRICT
#ifdef __IBMCPP__ /* IBM XL C++ */
#define RESTRICT __restrict
#endif /* __IBMCPP__ */
#endif /* !RESTRICT */

#ifndef RESTRICT
#ifdef __TI_COMPILER_VERSION__ /* TI CGT, EVERY MODE */
#define RESTRICT __restrict
#endif /* __TI_COMPILER_VERSION__ */
#endif /* !RESTRICT */

#ifndef RESTRICT
#ifdef __SUNPRO_C /* SUN / ORACLE STUDIO C BEFORE -std=c99 */
#define RESTRICT _Restrict
#endif /* __SUNPRO_C */
#endif /* !RESTRICT */

/* RULE 5 - ANYTHING ELSE: A HINT NOBODY CAN READ IS NO HINT AT ALL */
#ifndef RESTRICT
#define RESTRICT
#else /* RESTRICT */
#define IS__RESTRICT__SUPPORTED
#endif /* !RESTRICT */
/* **************************** [^] RESTRICT [^] **************************** */

/* **************************** [v] restrict [v] **************************** */
/* ONLY WHERE restrict IS NOT A KEYWORD (C89, C++). NEVER ON MSVC: ITS OWN    */
/* HEADERS SAY __declspec(restrict), WHICH THE MACRO WOULD BREAK.             */
#ifndef CMT_NO_RESTRICT_FIX
#ifndef LOCALMACRO__RESTRICT_IS_KEYWORD
#ifndef _MSC_VER
#ifndef restrict
#define restrict RESTRICT
#endif /* !restrict */
#endif /* !_MSC_VER */
#endif /* !LOCALMACRO__RESTRICT_IS_KEYWORD */
#endif /* !CMT_NO_RESTRICT_FIX */

#ifdef LOCALMACRO__RESTRICT_IS_KEYWORD
#undef LOCALMACRO__RESTRICT_IS_KEYWORD
#endif /* LOCALMACRO__RESTRICT_IS_KEYWORD */
/* **************************** [^] restrict [^] **************************** */
#endif /* !RESTRICT_H */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
