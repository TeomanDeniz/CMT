/******************************************************************************\
# H - SETJMP                                     #       Maximum Tension       #
################################################################################
#                                                #      -__            __-     #
# Eliot Dresselhaus (2005), Teoman Deniz         #  :    :!1!-_    _-!1!:    : #
# maximum-tension.com                            #  ::                      :: #
#                                                #  :!:    : :: : :  :  ::::!: #
# +.....................++.....................+ #   :!:: :!:!1:!:!::1:::!!!:  #
# : C - Maximum Tension :: Create - 2026/09/24 : #   ::!::!!1001010!:!11!!::   #
# :---------------------::---------------------: #   :!1!!11000000000011!!:    #
# : License - GPL-3.0   :: Update - 2026/09/25 : #    ::::!!!1!!1!!!1!!!::     #
# +.....................++.....................+ #       ::::!::!:::!::::      #
\******************************************************************************/

/******************************************************************************\
|* __________________________________________________________________________ *|
|*|                                  SETJMP                                  |*|
|*|__________________________________________________________________________|*|
|*|                                                                          |*|
|*| SETJMP PROVIDES A UNIFIED INTERFACE FOR NON-LOCAL CONTROL FLOW USING THE |*|
|*| STANDARD C setjmp AND longjmp MECHANISMS.                                |*|
|*|            ^^^^^^     ^^^^^^^                                            |*|
|*| IT ALLOWS AN EXECUTION ENVIRONMENT TO BE SAVED AND LATER RESTORED,       |*|
|*| MAKING IT POSSIBLE TO RETURN TO A PREVIOUSLY ESTABLISHED POINT IN THE    |*|
|*| CALL STACK WITHOUT PROPAGATING NORMAL FUNCTION RETURNS THROUGH EVERY     |*|
|*| INTERMEDIATE FUNCTION.                                                   |*|
|*|                                                                          |*|
|*| O - TYPICAL USE CASES INCLUDE:                                           |*|
|*| :                                                                        |*|
|*| :.., RECOVERING FROM DEEPLY NESTED ERROR CONDITIONS.                     |*|
|*| :                                                                        |*|
|*| :.., IMPLEMENTING LIGHTWEIGHT EXCEPTION-LIKE CONTROL FLOW IN C.          |*|
|*| :                                                                        |*|
|*| :.., RETURNING TO A KNOWN EXECUTION POINT AFTER AN ERROR OR EXCEPTIONAL  |*|
|*| :  : CONDITION.                                                          |*|
|*| :                                                                        |*|
|*| :.., SUPPORTING CONTROL-FLOW MECHANISMS IN ENVIRONMENTS WHERE A          |*|
|*|    : CONVENTIONAL EXCEPTION SYSTEM IS UNAVAILABLE.                       |*|
|*|                                                       ________           |*|
|*| SETJMP MAPS THE CMT UPPERCASE INTERFACE TO THE NATIVE setjmp.h           |*|
|*| IMPLEMENTATION WHEN A COMPATIBLE IMPLEMENTATION IS AVAILABLE.            |*|
|*|                                                                          |*|
|*| O - THE INTERFACE IS INTENTIONALLY KEPT SMALL:                           |*|
|*| :                                                                        |*|
|*| :.., JMP_BUF - JUMP-BUFFER TYPE.                                         |*|
|*| :                                                                        |*|
|*| :.., SETJMP - SAVES AN EXECUTION ENVIRONMENT.                            |*|
|*| :                                                                        |*|
|*| :.., LONGJMP - RESTORES A PREVIOUSLY SAVED ENVIRONMENT.                  |*|
|*|                             ________                                     |*|
|*| ON PLATFORMS WHERE A NATIVE setjmp.h IMPLEMENTATION CANNOT BE            |*|
|*| DETECTED, A FALLBACK IMPLEMENTATION MAY BE PROVIDED IN THE FUTURE.       |*|
|*|__________________________________________________________________________|*|
|*                                                                            *|
\******************************************************************************/

/*############################################################################*\
|*#                                 CONTENTS                                 #*|
|*############################################################################*|
|* __________________________________________________________________________ *|
|*| CONTENT                                                       | DOC LINE |*|
|*|===============================================================|==========|*|
|*| #define jmp_buf                                               | 74       |*|
|*| #define JMP_BUF                                               |          |*|
|*|---------------------------------------------------------------|----------|*|
|*| #define setjmp(env)                                           | 86       |*|
|*| #define SETJMP(ENV)                                           |          |*|
|*|---------------------------------------------------------------|----------|*|
|*| #define longjmp(env, val)                                     | 119      |*|
|*| #define LONGJMP(ENV, VAL)                                     |          |*|
|*|_______________________________________________________________|__________|*|
|*                                                                            *|
|*                                ...........                                 *|
|* ...............................: JMP_BUF :................................ *|
|* :                              '''''''''''                               : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| #define jmp_buf                                                     : *|
|* : 3| #define JMP_BUF                                                     : *|
|* : 4|                                                                     : *|
|* :                                      ______     _______                : *|
|* : DEFINES THE JUMP-BUFFER TYPE USED BY SETJMP AND LONGJMP.               : *|
|* :........................................................................: *|
|*                                                                            *|
|*                                 ..........                                 *|
|* ................................: SETJMP :................................ *|
|* :                               ''''''''''                               : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| #define setjmp(env)                                                 : *|
|* : 3| #define SETJMP(ENV)                                                 : *|
|* : 4|                                                                     : *|
|* :                                                                        : *|
|* : SAVES THE CURRENT EXECUTION ENVIRONMENT INTO ENV.                      : *|
|* :                                              ^^^                       : *|
|* : RETURNS 0 WHEN THE ENVIRONMENT IS SAVED NORMALLY.                      : *|
|* :         ^                                                              : *|
|* : WHEN EXECUTION LATER RETURNS THROUGH <LONGJMP>, <SETJMP> RETURNS THE   : *|
|* : VALUE SUPPLIED TO LONGJMP.                                             : *|
|* :                   ^^^^^^^                                              : *|
|* : EXAMPLE:                                                               : *|
|* :                                                                        : *|
|* :   v [C LANGUAGE]                                                       : *|
|* :  1|                                                                    : *|
|* :  2| JMP_BUF    ENV;                                                    : *|
|* :  3|                                                                    : *|
|* :  4| if (SETJMP(ENV) == 0)                                              : *|
|* :  5| {                                                                  : *|
|* :  6|     // normal execution                                            : *|
|* :  7| }                                                                  : *|
|* :  8| else                                                               : *|
|* :  9| {                                                                  : *|
|* : 10|     // returned through LONGJMP                                    : *|
|* : 11| }                                                                  : *|
|* : 12|                                                                    : *|
|* :........................................................................: *|
|*                                                                            *|
|*                                ...........                                 *|
|* ...............................: LONGJMP :................................ *|
|* :                              '''''''''''                               : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| #define longjmp(env, val)                                           : *|
|* : 3| #define LONGJMP(ENV, VAL)                                           : *|
|* : 4|                                                                     : *|
|* :                                                                        : *|
|* : RESTORES THE EXECUTION ENVIRONMENT PREVIOUSLY SAVED BY SETJMP.         : *|
|* :                                                        ^^^^^^          : *|
|* : EXECUTION CONTINUES AT THE CORRESPONDING SETJMP CALL.                  : *|
|* :                                          ^^^^^^                        : *|
|* : VAL BECOMES THE RETURN VALUE OF SETJMP.                                : *|
|* : ^^^                             ^^^^^^                                 : *|
|* : EXAMPLE:                                                               : *|
|* :                                                                        : *|
|* :   v [C LANGUAGE]                                                       : *|
|* :  1|                                                                    : *|
|* :  2| JMP_BUF    ENV;                                                    : *|
|* :  3|                                                                    : *|
|* :  4| if (SETJMP(ENV) == 0)                                              : *|
|* :  5| {                                                                  : *|
|* :  6|     LONGJMP(ENV, 1);                                               : *|
|* :  7| }                                                                  : *|
|* :  8| else                                                               : *|
|* :  9| {                                                                  : *|
|* : 10|     // execution resumes here                                      : *|
|* : 11| }                                                                  : *|
|* : 12|                                                                    : *|
|* :........................................................................: *|
|*                                                                            *|
\******************************************************************************/

#ifndef SETJMP_H
#define SETJMP_H 202609 /* VERSION */

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

#ifdef __has_include
#if (__has_include(<setjmp.h>))
#define IS__SETJMP__DEFAULT
#endif /* __has_include(<stdlib.h>) */
#endif /* __has_include */

/* ************************ [v] MSVC / CLANG-CL [v] ************************* */
#ifndef IS__SETJMP__DEFAULT
#ifdef _MSC_VER
#define IS__SETJMP__DEFAULT
#endif /* _MSC_VER */
#endif /* !IS__SETJMP__DEFAULT */
/* ************************ [^] MSVC / CLANG-CL [^] ************************* */

/* ***************************** [v] CLANG [v] ****************************** */
#ifndef IS__SETJMP__DEFAULT
#ifdef __clang__
#define IS__SETJMP__DEFAULT
#endif /* __clang__ */
#endif /* !IS__SETJMP__DEFAULT */
/* **************************** [^] CLANG [^] ******************************* */

/* ****************************** [v] GCC [v] ******************************* */
#ifndef IS__SETJMP__DEFAULT
#ifdef __GNUC__
#define IS__SETJMP__DEFAULT
#endif /* __GNUC__ */
#endif /* !IS__SETJMP__DEFAULT */
/* ****************************** [^] GCC [^] ******************************* */

/* ***************************** [v] WATCOM [v] ***************************** */
#ifndef IS__SETJMP__DEFAULT
#ifdef __WATCOMC__
#define IS__SETJMP__DEFAULT
#endif /* __WATCOMC__ */
#endif /* !IS__SETJMP__DEFAULT */
/* ***************************** [^] WATCOM [^] ***************************** */

/* **************************** [v] BORLAND [v] ***************************** */
#ifndef IS__SETJMP__DEFAULT
#ifdef __BORLANDC__
#define IS__SETJMP__DEFAULT
#endif /* __BORLANDC__ */
#endif /* !IS__SETJMP__DEFAULT */
/* **************************** [^] BORLAND [^] ***************************** */

/* **************************** [v] TURBO C [v] ***************************** */
#ifndef IS__SETJMP__DEFAULT
#ifdef __TURBOC__
#define IS__SETJMP__DEFAULT
#endif /* __TURBOC__ */
#endif /* !IS__SETJMP__DEFAULT */
/* **************************** [^] TURBO C [^] ***************************** */

/* ************************** [v] DIGITAL MARS [v] ************************** */
#ifndef IS__SETJMP__DEFAULT
#ifdef __DMC__
#define IS__SETJMP__DEFAULT
#endif /* __DMC__ */
#endif /* !IS__SETJMP__DEFAULT */
/* ************************** [^] DIGITAL MARS [^] ************************** */

/* ***************************** [v] IBM C [v] ****************************** */
#ifndef IS__SETJMP__DEFAULT
#ifdef __IBMC__
#define IS__SETJMP__DEFAULT
#else /* !__IBMC__ */
#ifdef __IBMCPP__
#define IS__SETJMP__DEFAULT
#endif /* __IBMCPP__ */
#endif /* __IBMC__ */
#endif /* !IS__SETJMP__DEFAULT */
/* ***************************** [^] IBM C [^] ****************************** */

/* ***************************** [v] SUN C [v] ****************************** */
#ifndef IS__SETJMP__DEFAULT
#ifdef __SUNPRO_C
#define IS__SETJMP__DEFAULT
#endif /* __SUNPRO_C */
#endif /* !IS__SETJMP__DEFAULT */
/* ***************************** [^] SUN C [^] ****************************** */

/* **************************** [v] SUN C++ [v] ***************************** */	
#ifndef IS__SETJMP__DEFAULT
#ifdef __SUNPRO_CC
#define IS__SETJMP__DEFAULT
#endif /* __SUNPRO_CC */
#endif /* !IS__SETJMP__DEFAULT */
/* **************************** [^] SUN C++ [^] ***************************** */

#ifdef IS__SETJMP__DEFAULT
#include <setjmp.h>
/******* """"""""""
 * #define jmp_buf
 * #define setjmp(env)
 * #define longjmp(env, val)
 */
#else /* !IS__SETJMP__DEFAULT */
/* TODO: https://docs.fd.io/vpp/16.09/dd/d58/longjmp_8_s_source.html */
#endif /* !IS__SETJMP__DEFAULT */

/* *************************** [v] UPPERCASE [v] **************************** */
#define JMP_BUF jmp_buf
#define SETJMP(ENV) setjmp(ENV)
#define LONGJMP(ENV, VAL) longjmp(ENV, VAL)
/* *************************** [^] UPPERCASE [^] **************************** */

/* ************************ [v] TI CGT CCS (POP) [v] ************************ */
#ifdef __TI_COMPILER_VERSION__
#pragma diag_pop /* TI CGT CCS COMPILER DIRECTIVES */
#endif /* __TI_COMPILER_VERSION__ */
/* ************************ [^] TI CGT CCS (POP) [^] ************************ */

#endif /* !SETJMP_H */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
