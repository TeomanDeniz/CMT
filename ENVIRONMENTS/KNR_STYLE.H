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
# : License - Apache2.0 :: Update - 2026/10/09 : #    ::::!!!1!!1!!!1!!!::     #
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
#define KNR_STYLE_H 202610 /* VERSION */

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
#ifndef CMT_NO_KNR_STYLE /* USER CAN FORCE ANSI MODE */
#ifndef __STDC__
/*
# __STDC__ IS NOT DEFINED. THIS IS EITHER A REAL K&R COMPILER, OR AN ANSI
# CAPABLE COMPILER RUNNING IN ITS DEFAULT (EXTENSIONS ON) MODE. MSVC, WATCOM,
# BORLAND AND TURBO C DO NOT DEFINE __STDC__ UNLESS STRICT ANSI MODE IS ON
# (/Za, -za, -A), BUT THEY ALL SUPPORT PROTOTYPES, void AND const.
# SO ONLY COMPILERS THAT ARE NOT KNOWN TO BE ANSI CAPABLE ARE TREATED AS K&R.
# C89/C90 (__STDC__ WITHOUT __STDC_VERSION__) IS ANSI, NOT K&R.
*/
#define LOCALMACRO__KNR_STYLE_CANDIDATE
#ifdef _MSC_VER /* MICROSOFT C/C++ */
#undef LOCALMACRO__KNR_STYLE_CANDIDATE
#endif /* _MSC_VER */
#ifdef __WATCOMC__ /* WATCOM C/C++ */
#undef LOCALMACRO__KNR_STYLE_CANDIDATE
#endif /* __WATCOMC__ */
#ifdef __TURBOC__ /* TURBO C */
#undef LOCALMACRO__KNR_STYLE_CANDIDATE
#endif /* __TURBOC__ */
#ifdef __BORLANDC__ /* BORLAND C/C++ */
#undef LOCALMACRO__KNR_STYLE_CANDIDATE
#endif /* __BORLANDC__ */
#ifdef __CODEGEARC__ /* CODEGEAR C/C++ */
#undef LOCALMACRO__KNR_STYLE_CANDIDATE
#endif /* __CODEGEARC__ */
#ifdef __ZTC__ /* ZORTECH C/C++ */
#undef LOCALMACRO__KNR_STYLE_CANDIDATE
#endif /* __ZTC__ */
#ifdef __SC__ /* SYMANTEC C/C++ */
#undef LOCALMACRO__KNR_STYLE_CANDIDATE
#endif /* __SC__ */
#ifdef __DMC__ /* DIGITAL MARS */
#undef LOCALMACRO__KNR_STYLE_CANDIDATE
#endif /* __DMC__ */
#ifdef __GNUC__ /* GCC */
#undef LOCALMACRO__KNR_STYLE_CANDIDATE
#endif /* __GNUC__ */
#ifdef __clang__ /* CLANG */
#undef LOCALMACRO__KNR_STYLE_CANDIDATE
#endif /* __clang__ */
#ifdef __INTEL_COMPILER /* INTEL C/C++ */
#undef LOCALMACRO__KNR_STYLE_CANDIDATE
#endif /* __INTEL_COMPILER */
#ifdef __TINYC__ /* TINY C COMPILER */
#undef LOCALMACRO__KNR_STYLE_CANDIDATE
#endif /* __TINYC__ */
#ifdef __LCC__ /* LCC / LCC-WIN32 */
#undef LOCALMACRO__KNR_STYLE_CANDIDATE
#endif /* __LCC__ */
#ifdef __POCC__ /* PELLES C */
#undef LOCALMACRO__KNR_STYLE_CANDIDATE
#endif /* __POCC__ */
#ifdef __ORANGEC__ /* ORANGE C */
#undef LOCALMACRO__KNR_STYLE_CANDIDATE
#endif /* __ORANGEC__ */
#ifdef __IBMC__ /* IBM C */
#undef LOCALMACRO__KNR_STYLE_CANDIDATE
#endif /* __IBMC__ */
#ifdef __xlC__ /* IBM XL C */
#undef LOCALMACRO__KNR_STYLE_CANDIDATE
#endif /* __xlC__ */
#ifdef __SUNPRO_C /* SUN STUDIO C (-Xt DEFINES __STDC__ AS 0 OR NOT AT ALL) */
#undef LOCALMACRO__KNR_STYLE_CANDIDATE
#endif /* __SUNPRO_C */
#ifdef __HP_cc /* HP ANSI C */
#undef LOCALMACRO__KNR_STYLE_CANDIDATE
#endif /* __HP_cc */
#ifdef __DECC /* DEC / COMPAQ C */
#undef LOCALMACRO__KNR_STYLE_CANDIDATE
#endif /* __DECC */
#ifdef __HIGHC__ /* METAWARE HIGH C */
#undef LOCALMACRO__KNR_STYLE_CANDIDATE
#endif /* __HIGHC__ */
#ifdef __MWERKS__ /* METROWERKS CODEWARRIOR */
#undef LOCALMACRO__KNR_STYLE_CANDIDATE
#endif /* __MWERKS__ */
#ifdef __CC_ARM /* ARM C COMPILER */
#undef LOCALMACRO__KNR_STYLE_CANDIDATE
#endif /* __CC_ARM */
#ifdef __IAR_SYSTEMS_ICC__ /* IAR C/C++ */
#undef LOCALMACRO__KNR_STYLE_CANDIDATE
#endif /* __IAR_SYSTEMS_ICC__ */
#ifdef __TI_COMPILER_VERSION__ /* TI CGT */
#undef LOCALMACRO__KNR_STYLE_CANDIDATE
#endif /* __TI_COMPILER_VERSION__ */
#ifdef __C51__ /* KEIL C51 */
#undef LOCALMACRO__KNR_STYLE_CANDIDATE
#endif /* __C51__ */
#ifdef SDCC /* SMALL DEVICE C COMPILER (OLD MACRO NAME) */
#undef LOCALMACRO__KNR_STYLE_CANDIDATE
#endif /* SDCC */
#ifdef __SDCC /* SMALL DEVICE C COMPILER */
#undef LOCALMACRO__KNR_STYLE_CANDIDATE
#endif /* __SDCC */
#ifdef __CC65__ /* CC65 */
#undef LOCALMACRO__KNR_STYLE_CANDIDATE
#endif /* __CC65__ */
#ifdef _CRAYC /* CRAY C */
#undef LOCALMACRO__KNR_STYLE_CANDIDATE
#endif /* _CRAYC */
#ifdef __PGI /* PGI / NVIDIA HPC */
#undef LOCALMACRO__KNR_STYLE_CANDIDATE
#endif /* __PGI */
#ifdef LOCALMACRO__KNR_STYLE_CANDIDATE
#undef LOCALMACRO__KNR_STYLE_CANDIDATE
#define KNR_STYLE
#endif /* LOCALMACRO__KNR_STYLE_CANDIDATE */
#endif /* !__STDC__ */
#endif /* !CMT_NO_KNR_STYLE */
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
