/******************************************************************************\
# H - FAR                                        #       Maximum Tension       #
################################################################################
#                                                #      -__            __-     #
# Teoman Deniz                                   #  :    :!1!-_    _-!1!:    : #
# maximum-tension.com                            #  ::                      :: #
#                                                #  :!:    : :: : :  :  ::::!: #
# +.....................++.....................+ #   :!:: :!:!1:!:!::1:::!!!:  #
# : C - Maximum Tension :: Create - 2025/03/07 : #   ::!::!!1001010!:!11!!::   #
# :---------------------::---------------------: #   :!1!!11000000000011!!:    #
# : License - GPL-3.0   :: Update - 2026/05/16 : #    ::::!!!1!!1!!!1!!!::     #
# +.....................++.....................+ #       ::::!::!:::!::::      #
\******************************************************************************/

/******************************************************************************\
|* __________________________________________________________________________ *|
|*|                                   FAR                                    |*|
|*|__________________________________________________________________________|*|
|*|                                                                          |*|
|*| THIS HEADER PROVIDES A MINIMAL, PORTABLE ABSTRACTION FOR FAR-POINTER     |*|
|*| SUPPORT ACROSS COMPILERS AND PLATFORMS USED TO ACCESS MEMORY LOCATIONS   |*|
|*| BEYOND THE CURRENT SEGMENT IN 16-BIT ARCHITECTURES.                      |*|
|*|                                                                          |*|
|*| V IN 16-BIT COMPILERS (MS-DOS, TURBO C, WATCOM, ETC.), POINTERS ARE:     |*|
|*| :                                                                        |*|
|*| :.. NEAR: WITHIN A SINGLE SEGMENT                                        |*|
|*| :.. FAR: ACROSS SEGMENTS                                                 |*|
|*|                                                                          |*|
|*| V MEMORY SEGMENTATION IN 16-BIT SYSTEMS USES 64KB SEGMENTS:              |*|
|*| :                                                                        |*|
|*| :.. NEAR POINTER -> 16-BIT OFFSET                                        |*|
|*| :.. FAR POINTER -> 32-BIT (SEGMENT:OFFSET)                               |*|
|*|                ___                                                       |*|
|*| IT DEFINES THE FAR MACRO TO ANNOTATE FAR MEMORY QUALIFIERS WHERE         |*|
|*| SUPPORTED, AND THE IS__FAR__SUPPORTED MACRO TO ALLOW COMPILE-TIME        |*|
|*| DETECTION OF FAR-POINTER AVAILABILITY.                                   |*|
|*|                                                                          |*|
|*| WHEN FAR POINTERS ARE NOT SUPPORTED, THE MACROS SAFELY DEGRADE TO        |*|
|*| NO-OPS, PRESERVING SOURCE COMPATIBILITY WITHOUT IMPACTING BEHAVIOR.      |*|
|*|                                                                          |*|
|*| NOTE: ON CLASSIC 16-BIT SEGMENTED SYSTEMS (E.G. REAL-MODE X86), THE      |*|
|*|       THEORETICAL PHYSICAL ADDRESS SPACE IS UP TO 1 MB (20-BIT           |*|
|*|       ADDRESSING VIA SEGMENT:OFFSET).                                    |*|
|*|                                                                          |*|
|*|       FAR POINTERS ALLOW ACCESS OUTSIDE THE CURRENT SEGMENT BUT DO NOT   |*|
|*|       INCREASE OBJECT SIZE LIMITS.                                       |*|
|*|                                                                          |*|
|*|       THE PRACTICALLY USABLE MEMORY IS OFTEN MUCH SMALLER AND DEPENDS ON |*|
|*|       THE CPU MODE, MEMORY MODEL, AND COMPILER/RUNTIME SUPPORT (EMS/XMS, |*|
|*|       HUGE POINTERS, ETC.).                                              |*|
|*|                                                                          |*|
|*|       ALWAYS CONSULT AND TRUST YOUR COMPILER AND TARGET HARDWARE         |*|
|*|       DOCUMENTATION.                                                     |*|
|*|                                                                          |*|
|*| O PRO-TIP                                                                |*|
|*| :                                                                        |*|
|*| :.. CHECK YOUR COMPILER DOCUMENTATION FOR MEMORY MODELS AND POINTER      |*|
|*| : : TYPES.                                                               |*|
|*| :                                                                        |*|
|*| :.. ON **MODERN SYSTEMS** (32/64-BIT), FAR POINTERS ARE OBSOLETE AND     |*|
|*| : : MOSTLY IGNORED.                                                      |*|
|*| :                                                                        |*|
|*| :.. FAR POINTERS ARE SLOWER (DUE TO SEGMENT SWITCHING).                  |*|
|*| :                                                                        |*|
|*| :.. USE `FAR` ONLY IF YOU'RE PLANNING TO COMPILE YOUR CODE ON 16-BIT     |*|
|*|   : REAL MODE ENVIRONMENTS.                                              |*|
|*|__________________________________________________________________________|*|
|*                                                                            *|
\******************************************************************************/

/*############################################################################*\
|*#                                 CONTENTS                                 #*|
|*############################################################################*|
|* __________________________________________________________________________ *|
|*| CONTENT                                                       | DOC LINE |*|
|*|===============================================================|==========|*|
|*| #define FAR                                                   | 83       |*|
|*|---------------------------------------------------------------|----------|*|
|*| #define IS__FAR__SUPPORTED                                    | 123      |*|
|*|_______________________________________________________________|__________|*|
|*                                                                            *|
|*                                  .......                                   *|
|* .................................: FAR :.................................. *|
|* :                                '''''''                                 : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| #define FAR                                                         : *|
|* : 3|                                                                     : *|
|* :                                                                        : *|
|* : THE MEMORY ACCESS TYPE DEPENDING ON THE COMPILER AND PLATFORM.         : *|
|* :                                                                        : *|
|* : /!\ - ON 16-BIT SYSTEMS, IT EXPANDS TO A FAR POINTER KEYWORD           : *|
|* :       (E.G., FAR, _FAR).                                               : *|
|* :                                                                        : *|
|* : /!\ - ON MODERN SYSTEMS, IT'S OFTEN EMPTY OR UNUSED.                   : *|
|* :                                ___              ____________________   : *|
|* : SINCE GNU DOES NOT SUPPORT THE far KEYWORD (THE __attribute__((far))   : *|
|* : EXTENSION IS EXCLUDED, AS IT WORKS DIFFERENTLY), THIS KEYWORD IS       : *|
|* : DEFINED AS EMPTY IN GNU.                                               : *|
|* :                                                                        : *|
|* : EXAMPLES:                                                              : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| char FAR *far_ptr = far_malloc(128000);                             : *|
|* : 3|                                                                     : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| void (FAR *far_function)();                                         : *|
|* : 3|                                                                     : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| // "variable" AND "function" MUST REFER TO FAR-ADDRESSABLE STORAGE  : *|
|* : 3|                                                                     : *|
|* : 4| void FAR *p = (void FAR *)variable;                                 : *|
|* : 5| void (FAR *f)() = (void (FAR *)())function;                         : *|
|* : 6|                                                                     : *|
|* :........................................................................: *|
|*                                                                            *|
|*                           ......................                           *|
|* ..........................: IS__FAR__SUPPORTED :.......................... *|
|* :                         ''''''''''''''''''''''                         : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| #define IS__FAR__SUPPORTED                                          : *|
|* : 3|                                                                     : *|
|* :                    ___                                                 : *|
|* : CHECKS WHETHER THE FAR MACRO IS DEFINED AS NON-EMPTY.                  : *|
|* :                                                     ___                : *|
|* : THIS INDICATES THAT THE COMPILER TRULY SUPPORTS THE far KEYWORD.       : *|
|* :                                                                        : *|
|* : O - NOTE:                                                              : *|
|* : :            __________________                                        : *|
|* : :.. CHECKING IS__FAR__SUPPORTED ALONE IS NOT SUFFICIENT.               : *|
|* : :                                                                      : *|
|* : :.. YOU MUST ALSO VERIFY THAT YOUR TARGET ARCHITECTURE AND COMPILER    : *|
|* :   : RUNTIME SUPPORT FAR MEMORY ALLOCATION AND MEMORY ACCESS ROUTINES   : *|
|* :   : COMPATIBLE WITH FAR POINTERS.                                      : *|
|* :                                                                        : *|
|* : EXAMPLE:                                                               : *|
|* :                                                                        : *|
|* :   v [C LANGUAGE]                                                       : *|
|* :  1|                                                                    : *|
|* :  2| #ifdef IS__FAR__SUPPORTED                                          : *|
|* :  3| void FAR * test = far_malloc(128000);                              : *|
|* :  4| ...                                                                : *|
|* :  5| #else                                                              : *|
|* :  6| #ifdef __SYSTEM_16_BIT__                                           : *|
|* :  7| // YOU MUST REALLY GOTTA DO SOMETHING IN HERE                      : *|
|* :  8| ...                                                                : *|
|* :  9| #else // NO TROUBLE AT ALL (HOPE)                                  : *|
|* : 10| void *test = malloc(128000);                                       : *|
|* : 11| ...                                                                : *|
|* : 12| #endif                                                             : *|
|* : 13| #endif                                                             : *|
|* : 14|                                                                    : *|
|* :........................................................................: *|
|*                                                                            *|
\******************************************************************************/

/* * * * * * * * * * * * * * * * * * * ** * * * * * * * * * * * * * * * * * * *\
|* @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ *|
|* @                              TEST REPORT                               @ *|
|* @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ *|
|*                                                                            *|
|* #===============================================================#========# *|
|* | ENVIRONMENTS                                                  | RESULT | *|
|* #===============================================================#========# *|
|* | WINDOWS 11 25H2 | INTEL X64 I5-13420H | GCC 8.1.0 MINGW-W64   | PASSED | *|
|* |---------------------------------------------------------------|--------| *|
|* | WINDOWS 2000 SERVICE PACK 4 | INTEL X86 PENTIUM 4 | GCC 3.4.2 |        | *|
|* | MINGW SPECIAL EDITION                                         | PASSED | *|
|* |---------------------------------------------------------------|--------| *|
|* | WINDOWS 2000 SERVICE PACK 4 | INTEL X86 PENTIUM 4 | MICROSOFT |        | *|
|* | C COMPILER (MC1.EXE MC2.EXE) VERSION 2.03                     | PASSED | *|
|* |---------------------------------------------------------------|--------| *|
|* | UBUNTU 22.04.5 LTS | INTEL X64 I5-13420H | PCC 1.2.0.DEVEL    | PASSED | *|
|* |---------------------------------------------------------------|--------| *|
|* | UBUNTU 22.04.5 LTS | INTEL X64 I5-13420H | CLANG              |        | *|
|* | 14.0.0-1UBUNTU1.1                                             | PASSED | *|
|* |---------------------------------------------------------------|--------| *|
|* | TRSDOS | ZLOG Z80 8BIT 48KB RAM | CMOC                        | PASSED | *|
|* |---------------------------------------------------------------|--------| *|
|* | APPLE MACOS 26 | APPLE SILICON M2 2.2.1 | CLANG LLVM - 5.0.2  | PASSED | *|
|* |_______________________________________________________________|________| *|
|*                                                                            *|
|*  @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@  *|
|*                                                                            *|
|*  /!\ No noteworthy issues were encountered to report.                      *|
|*                                                                            *|
\* * * * * * * * * * * * * * * * * * * ** * * * * * * * * * * * * * * * * * * */

/* TODO (SELF NOTE): ALL TEST REPORTS ARE GOING TO CARRIED TO TESTS FOLDER  */
/*                   THIS IS BECAUSE GIVING MORE DETAILS IN TESTS, AND      */
/*                   LEAVING MORE SPACES ON HEADER FILES WHEN COMPILERS ARE */
/*                   USING THE FILES TO COMPILE YOUR PROJECT.               */

#ifndef FAR_H
#define FAR_H 202605 /* VERSION */

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

#ifndef __cplusplus /* C++ */
/* **************************** [v] INCLUDES [v] **************************** */
#include "../ENVIRONMENTS/ARCHITECTURE.H"
/******* """"""""""""""""""""""""""""""""
 * #define __SYSTEM_8_BIT__
 * #define __SYSTEM_16_BIT__
 */
/* **************************** [^] INCLUDES [^] **************************** */

/* ************************* [v] SEALING SYSTEM [v] ************************* *\
|* *   SEALING SYSTEM IS FOR AVOID USING "#IF" PRE-PROCESSING COMMANDS TO   * *|
|* * MAKE THE LIBRARY CAN ABLE TO WORK AND COMPILE WITHOUT ANY WARNINGS AND * *|
|* *         ERRORS IN EVERY C COMPILER AND C COMPILER VERSIONS!!!          * *|
\* ************************************************************************** */
#ifdef M_I86SM
#define LOCALMACRO__FAR_MODE_IS_TRUE
#else /* !M_I86SM */
#ifdef M_I86MM
#define LOCALMACRO__FAR_MODE_IS_TRUE
#else /* !M_I86MM */
#ifdef __SMALL__
#define LOCALMACRO__FAR_MODE_IS_TRUE
#else /* !__SMALL__ */
#ifdef __MEDIUM__
#define LOCALMACRO__FAR_MODE_IS_TRUE
#else /* !__MEDIUM__ */
#ifdef __MSDOS__
#define LOCALMACRO__FAR_MODE_IS_TRUE
#else /* !__MSDOS__ */
#ifdef _DOS
#define LOCALMACRO__FAR_MODE_IS_TRUE
#else /* !_DOS */
#ifdef __SYSTEM_16_BIT__
#define LOCALMACRO__FAR_MODE_IS_TRUE
#else /* !__SYSTEM_16_BIT__ */
#ifdef __SYSTEM_8_BIT__
#define LOCALMACRO__FAR_MODE_IS_TRUE
#endif /* __SYSTEM_8_BIT__ */
#endif /* __SYSTEM_16_BIT__ */
#endif /* _DOS */
#endif /* __MSDOS__ */
#endif /* __MEDIUM__ */
#endif /* __SMALL__ */
#endif /* M_I86MM */
#endif /* M_I86SM */
/* ************************* [^] SEALING SYSTEM [^] ************************* */

#define IS__FAR__SUPPORTED

/* *************************** [v] DEFINE FAR [v] *************************** */
#ifdef LOCALMACRO__FAR_MODE_IS_TRUE
#undef LOCALMACRO__FAR_MODE_IS_TRUE
#ifndef FAR
#ifdef _MSC_VER
#define FAR _far
#endif /* _MSC_VER */
#endif /* !FAR */

#ifndef FAR
#ifdef __TURBOC__
#define FAR _far
#endif /* __TURBOC__ */
#endif /* !FAR */

#ifndef FAR
#ifdef __BORLANDC__
#define FAR _far
#endif /* __BORLANDC__ */
#endif /* !FAR */

#ifndef FAR
#ifdef __WATCOMC__
#define FAR __far
#endif /* __WATCOMC__ */
#endif /* !FAR */

#ifndef FAR
#ifdef __VBCC__ /* VBCC */
#define FAR __far
#endif /* __VBCC__ */
#endif /* !FAR */

#ifndef FAR
#ifdef __GNUC__
#undef IS__FAR__SUPPORTED
#define FAR /* LOL? SHAME ON YOU GNU... */
#endif /* __GNUC__ */
#endif /* !FAR */

#ifndef FAR
#define FAR far
#endif /* !FAR */
#else /* !LOCALMACRO__FAR_MODE_IS_TRUE */
#undef IS__FAR__SUPPORTED
#define FAR
#endif /* LOCALMACRO__FAR_MODE_IS_TRUE */
/* *************************** [^] DEFINE FAR [^] *************************** */
#endif /* !__cplusplus */

/* ************************ [v] TI CGT CCS (POP) [v] ************************ */
#ifdef __TI_COMPILER_VERSION__
#pragma diag_pop /* TI CGT CCS COMPILER DIRECTIVES */
#endif /* __TI_COMPILER_VERSION__ */
/* ************************ [^] TI CGT CCS (POP) [^] ************************ */
#endif /* !FAR_H */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
