/******************************************************************************\
# H - KNR_STYLE                                  #       Maximum Tension       #
################################################################################
#                                                #      -__            __-     #
# Teoman Deniz                                   #  :    :!1!-_    _-!1!:    : #
# maximum-tension.com                            #  ::                      :: #
#                                                #  :!:    : :: : :  :  ::::!: #
# +.....................++.....................+ #   :!:: :!:!1:!:!::1:::!!!:  #
# : C - Maximum Tension :: Create - 2025/03/31 : #   ::!::!!1001010!:!11!!::   #
# :---------------------::---------------------: #   :!1!!11000000000011!!:    #
# : License - GPL-3.0   :: Update - 2026/04/09 : #    ::::!!!1!!1!!!1!!!::     #
# +.....................++.....................+ #       ::::!::!:::!::::      #
\******************************************************************************/

/******************************************************************************\
|* __________________________________________________________________________ *|
|*|                                KNR_STYLE                                 |*|
|*|__________________________________________________________________________|*|
|*|                                                                          |*|
|*| PROVIDES COMPATIBILITY MACROS FOR PRE-ANSI (K&R) C COMPILERS.            |*|
|*|                                                 _________                |*|
|*| IF THE COMPILER DOES NOT SUPPORT ANSI C SYNTAX, KNR_STYLE IS DEFINED AND |*|
|*| MISSING LANGUAGE KEYWORDS ARE REPLACED WITH EMPTY MACRO DEFINITIONS TO   |*|
|*| ALLOW THE CODEBASE TO COMPILE UNDER LEGACY ENVIRONMENTS.                 |*|
|*|__________________________________________________________________________|*|
|*                                                                            *|
\******************************************************************************/

/*############################################################################*\
|*#                                 CONTENTS                                 #*|
|*############################################################################*|
|* __________________________________________________________________________ *|
|*| CONTENT                                                       | DOC LINE |*|
|*|===============================================================|==========|*|
|*| #define KNR_STYLE                                             | 49       |*|
|*|---------------------------------------------------------------|----------|*|
|*| #define void                                                  | 64       |*|
|*|---------------------------------------------------------------|----------|*|
|*| #define const                                                 | 75       |*|
|*|---------------------------------------------------------------|----------|*|
|*| #define volatile                                              | 88       |*|
|*|---------------------------------------------------------------|----------|*|
|*| #define signed                                                | 101      |*|
|*|---------------------------------------------------------------|----------|*|
|*| #define unsigned                                              | 114      |*|
|*|_______________________________________________________________|__________|*|
|*                                                                            *|
|*                               .............                                *|
|* ..............................: KNR_STYLE :............................... *|
|* :                             '''''''''''''                              : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| #define KNR_STYLE                                                   : *|
|* : 3|                                                                     : *|
|* :                                                                        : *|
|* : DEFINED IF THE COMPILER IS NOT USING ANSI C SYNTAX                     : *|
|* : (I.E., K&R / PRE-C89 MODE).                                            : *|
|* :                                                                        : *|
|* : INDICATES THAT THE COMPILER LACKS SUPPORT FOR STANDARD FUNCTION        : *|
|* : PROTOTYPES AND MODERN TYPE QUALIFIERS.                                 : *|
|* :........................................................................: *|
|*                                                                            *|
|*                                  ........                                  *|
|* .................................: void :................................. *|
|* :                                ''''''''                                : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| #define void                                                        : *|
|* : 3|                                                                     : *|
|* :            vvvv                                           vvvv         : *|
|* : DEFINED AS char FOR K&R COMPILERS THAT DO NOT SUPPORT THE void KEYWORD : *|
|* :........................................................................: *|
|*                                                                            *|
|*                                 .........                                  *|
|* ................................: const :................................. *|
|* :                               '''''''''                                : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| #define const                                                       : *|
|* : 3|                                                                     : *|
|* :                                                                        : *|
|* : DEFINED AS AN EMPTY MACRO FOR K&R COMPILERS THAT DO NOT SUPPORT THE    : *|
|* : CONST TYPE QUALIFIER.                                                  : *|
|* : ^^^^^                                                                  : *|
|* :........................................................................: *|
|*                                                                            *|
|*                                ............                                *|
|* ...............................: volatile :............................... *|
|* :                              ''''''''''''                              : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| #define volatile                                                    : *|
|* : 3|                                                                     : *|
|* :                                                                        : *|
|* : DEFINED AS AN EMPTY MACRO FOR K&R COMPILERS THAT DO NOT SUPPORT THE    : *|
|* : volatile TYPE QUALIFIER.                                               : *|
|* : ^^^^^^^^                                                               : *|
|* :........................................................................: *|
|*                                                                            *|
|*                                 ..........                                 *|
|* ................................: signed :................................ *|
|* :                               ''''''''''                               : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| #define signed                                                      : *|
|* : 3|                                                                     : *|
|* :                                                                        : *|
|* : DEFINED AS AN EMPTY MACRO FOR K&R COMPILERS THAT DO NOT SUPPORT THE    : *|
|* : EXPLICIT signed KEYWORD.                                               : *|
|* :          ^^^^^^                                                        : *|
|* :........................................................................: *|
|*                                                                            *|
|*                                ............                                *|
|* ...............................: unsigned :............................... *|
|* :                              ''''''''''''                              : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| #define unsigned                                                    : *|
|* : 3|                                                                     : *|
|* :                                                                        : *|
|* : DEFINED AS AN EMPTY MACRO FOR MICROSOFT C COMPILER VERSION 2.03 AND    : *|
|* : EARLIER, WHERE EXPLICIT unsigned KEYWORD HANDLING MAY BE INCOMPLETE OR : *|
|* : INCOMPATIBLE.           ^^^^^^^^                                       : *|
|* :........................................................................: *|
|*                                                                            *|
\******************************************************************************/

#ifndef KNR_STYLE_H
#define KNR_STYLE_H 202604 /* VERSION */

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

/* *************************** [v] KNR_STYLE [v] **************************** */
#ifndef __cplusplus /* C++ */
#ifdef __NOPROTO__ /* DISABLES ANSI C FUNCTION PROTOTYPES */
#define KNR_STYLE
#endif /* __NOPROTO__ */
#ifndef KNR_STYLE
#ifndef __STDC__
#define KNR_STYLE
#else /* __STDC__ */
#ifdef __STDC_VERSION__
#if (__STDC_VERSION__ < 199409L) /* ... < C89 */
#define KNR_STYLE
#endif /* __STDC_VERSION__ < 199409L */
#else /* !__STDC_VERSION__ */
#define KNR_STYLE
#endif /* __STDC_VERSION__ */
#endif /* !__STDC__ */
#endif /* !KNR_STYLE */
/* *************************** [^] KNR_STYLE [^] **************************** */

#ifdef KNR_STYLE
#define void char
#define const
#define volatile
#define signed

/* **************************** [v] UNSIGNED [v] **************************** */
#ifdef LATTICE /* LATTICE C COMPILER */
#define unsigned
#else /* !LATTICE */
#ifdef BDS /* BDS C COMPILER */
#define unsigned
#else /* !BDS */
#ifdef MANX /* AZTEC C COMPILER */
#define unsigned
#endif /* MANX */
#endif /* BDS */
#endif /* LATTICE */
/* **************************** [^] UNSIGNED [^] **************************** */

#endif /* KNR_STYLE */
#endif /* !__cplusplus */

/* ************************ [v] TI CGT CCS (POP) [v] ************************ */
#ifdef __TI_COMPILER_VERSION__
#pragma diag_pop /* TI CGT CCS COMPILER DIRECTIVES */
#endif /* __TI_COMPILER_VERSION__ */
/* ************************ [^] TI CGT CCS (POP) [^] ************************ */

#endif /* !KNR_STYLE_H */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
