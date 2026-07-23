/******************************************************************************\
# H - REGPARM                                    #       Maximum Tension       #
################################################################################
#                                                #      -__            __-     #
# Teoman Deniz                                   #  :    :!1!-_    _-!1!:    : #
# maximum-tension.com                            #  ::                      :: #
#                                                #  :!:    : :: : :  :  ::::!: #
# +.....................++.....................+ #   :!:: :!:!1:!:!::1:::!!!:  #
# : C - Maximum Tension :: Create - 2023/07/11 : #   ::!::!!1001010!:!11!!::   #
# :---------------------::---------------------: #   :!1!!11000000000011!!:    #
# : License - GPL-3.0   :: Update - 2026/06/16 : #    ::::!!!1!!1!!!1!!!::     #
# +.....................++.....................+ #       ::::!::!:::!::::      #
\******************************************************************************/

/******************************************************************************\
|* __________________________________________________________________________ *|
|*|                                 REGPARM                                  |*|
|*|__________________________________________________________________________|*|
|*|                                                                          |*|
|*| THIS HEADER PROVIDES A MINIMAL ABSTRACTION FOR REGISTER-BASED ARGUMENT   |*|
|*| PASSING ON 32-BIT X86 SYSTEMS, USING THE COMPILER-SPECIFIC regparm       |*|
|*| CALLING CONVENTION WHERE SUPPORTED.                        ^^^^^^^       |*|
|*|                                                                          |*|
|*| ON CLASSIC 32-BIT X86 (I386) SYSTEMS, THE DEFAULT C CALLING CONVENTION   |*|
|*| (CDECL) PASSES ALL FUNCTION ARGUMENTS ON THE STACK.                      |*|
|*|  ^^^^^                                                                   |*|
|*| SOME COMPILERS (NOTABLY GCC-COMPATIBLE) PROVIDE EXTENSIONS THAT ALLOW A  |*|
|*| LIMITED NUMBER OF ARGUMENTS TO BE PASSED VIA CPU REGISTERS, REDUCING     |*|
|*| CALL OVERHEAD FOR SMALL, FREQUENTLY CALLED FUNCTIONS.                    |*|
|*|     __________                                                           |*|
|*| THE REGPARM(N) MACRO ANNOTATES A FUNCTION (OR FUNCTION POINTER) TO       |*|
|*| REQUEST THAT UP TO N ARGUMENTS BE PASSED IN REGISTERS, WHEN SUPPORTED BY |*|
|*| THE COMPILER AND TARGET ARCHITECTURE.                                    |*|
|*|                   __________                                             |*|
|*| WHEN UNSUPPORTED, REGPARM(N) SAFELY DEGRADES TO A NO-OP, PRESERVING      |*|
|*| SOURCE COMPATIBILITY WITHOUT ALTERING BEHAVIOR.                          |*|
|*|                                                                          |*|
|*| O - IMPORTANT:                                                           |*|
|*| :   _______                                                              |*|
|*| :.. regparm IS NOT A STANDARDIZED ABI.                                   |*|
|*| :                                                                        |*|
|*| :.. IT IS A COMPILER AND ARCHITECTURE-SPECIFIC OPTIMIZATION AND MUST BE  |*|
|*|   : USED CONSISTENTLY ACROSS DECLARATIONS, DEFINITIONS, AND FUNCTION     |*|
|*|   : POINTERS.                                                            |*|
|*|__________________________________________________________________________|*|
|*                                                                            *|
\******************************************************************************/

/*############################################################################*\
|*#                                 CONTENTS                                 #*|
|*############################################################################*|
|* __________________________________________________________________________ *|
|*| CONTENT                                                       | DOC LINE |*|
|*|===============================================================|==========|*|
|*| #define REGPARM(ARGS)                                         | 62       |*|
|*| #define regparm(args)                                         |          |*|
|*|---------------------------------------------------------------|----------|*|
|*| #define IS__REGPARM__SUPPORTED                                | 129      |*|
|*|_______________________________________________________________|__________|*|
|*                                                                            *|
|*                                ...........                                 *|
|* ...............................: REGPARM :................................ *|
|* :                              '''''''''''                               : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| #define REGPARM(ARGS)                                               : *|
|* : 3| #define regparm(args)                                               : *|
|* : 4|                                                                     : *|
|* :                                                                        : *|
|* : REQUESTS THAT UP TO N FUNCTION ARGUMENTS BE PASSED IN REGISTERS        : *|
|* : INSTEAD OF ON THE STACK.                                               : *|
|* :  ____________ ___________________________                              : *|
|* : | REGPARM(N) | REGISTER USAGE (IN ORDER) |                             : *|
|* : |============|===========================|                             : *|
|* : | REGPARM(1) | EAX                       |                             : *|
|* : |------------|---------------------------|                             : *|
|* : | REGPARM(2) | EAX, EDX                  |                             : *|
|* : |------------|---------------------------|                             : *|
|* : | REGPARM(3) | EAX, EDX, ECX             |                             : *|
|* : |____________|___________________________|                             : *|
|* :                                                                        : *|
|* : O - MAXIMUM SUPPORTED VALUE: 3                                         : *|
|* :                                                                        : *|
|* : O - REMAINING ARGUMENTS (IF ANY) ARE PASSED ON THE STACK               : *|
|* :                                                                        : *|
|* : O - ARGUMENT COUNT DOES NOT NEED TO MATCH N                            : *|
|* :                                                                        : *|
|* : O - RETURN VALUES ARE UNAFFECTED                                       : *|
|* :                                                                        : *|
|* : EXAMPLES:                                                              : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| int regparm(2) func(int a, void *b);                                : *|
|* : 3|                                                                     : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| int REGPARM(3) func(int a, int b, int c, int d, int e);             : *|
|* : 3|                                                                     : *|
|* :  : a ----> EAX                                                         : *|
|* :  : b ----> EDX                                                         : *|
|* :  : c ----> ECX                                                         : *|
|* :  : d, e -> STACK                                                       : *|
|* :                                                                        : *|
|* : PROTOTYPE:                                                             : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| extern int regparm(3) func(int, int, void *);                       : *|
|* : 3|                                                                     : *|
|* :                                                                        : *|
|* : FUNCTION POINTER:                                                      : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| int (REGPARM(3) *test)(int, int, void *);                           : *|
|* : 3|                                                                     : *|
|* :                                                                        : *|
|* : FUNCTION POINTER TYPE CASTING:                                         : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| test = (int (REGPARM(1) *)(int))pointer;                            : *|
|* : 3|                                                                     : *|
|* :........................................................................: *|
|*                                                                            *|
|*                         ..........................                         *|
|* ........................: IS__REGPARM__SUPPORTED :........................ *|
|* :                       ''''''''''''''''''''''''''                       : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| #define IS__REGPARM__SUPPORTED                                      : *|
|* : 3|                                                                     : *|
|* :                    _______                                             : *|
|* : CHECKS WHETHER THE REGPARM MACRO IS DEFINED AS NON-EMPTY.              : *|
|* :                                                     _______            : *|
|* : THIS INDICATES THAT THE COMPILER TRULY SUPPORTS THE regparm ATTRIBUTE. : *|
|* :                                                                        : *|
|* : O - NOTE:                                                              : *|
|* : :            ______________________                                    : *|
|* : :.. CHECKING IS__REGPARM__SUPPORTED ALONE IS NOT SUFFICIENT.           : *|
|* : :                                                                      : *|
|* : :.. YOU MUST ALSO VERIFY THAT YOUR TARGET ARCHITECTURE AND COMPILER    : *|
|* :   : SUPPORTS REGPARM.                                                  : *|
|* :                                                                        : *|
|* : EXAMPLES:                                                              : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| #ifdef IS__REGPARM__SUPPORTED                                       : *|
|* : 3| int REGPARM(3) fast_add(int a, int b, int c);                       : *|
|* : 4| #else                                                               : *|
|* : 5| int fast_add(int a, int b, int c);                                  : *|
|* : 6| #endif                                                              : *|
|* : 7|                                                                     : *|
|* :........................................................................: *|
|*                                                                            *|
\******************************************************************************/

#ifndef REGPARM_H
#define REGPARM_H 202606 /* VERSION */

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

#define IS__REGPARM__SUPPORTED

#ifdef __cplusplus /* C++ */
#define REGPARM(ARGS) __attribute__((regparm(ARGS)))
#else /* !__cplusplus */
#ifdef __GNUC__
#if (\
	(__GNUC__ > 2) || \
	(__GNUC__ == 2 && __GNUC_MINOR__ > 7) || \
	(__GNUC__ == 2 && __GNUC_MINOR__ == 7 && __GNUC_PATCHLEVEL__ >= 1)\
) /* GCC 2.7.1+ (MINIMUM C90) */
#ifdef __clang__
#ifdef __i386__ /* INTEL X86 */
#define REGPARM(ARGS) __attribute__((regparm(ARGS)))
#endif /* __i386__ */
#else /* !__clang__ */
#ifndef __DJGPP__ /* MS-DOS */
#ifdef __i386__ /* INTEL X86 */
#define REGPARM(ARGS) __attribute__((regparm(ARGS)))
#endif /* __i386__ */
#endif /* !__DJGPP__ */
#endif /* __clang__ */
#endif /* __GNUC__ >= 2.7.1 */
#endif /* __GNUC__ */
#endif /* __cplusplus */

#ifndef REGPARM
#define REGPARM(ARGS)
#undef IS__REGPARM__SUPPORTED
#endif /* !REGPARM */

#define regparm(args) REGPARM(args)

/* ************************ [v] TI CGT CCS (POP) [v] ************************ */
#ifdef __TI_COMPILER_VERSION__
#pragma diag_pop /* TI CGT CCS COMPILER DIRECTIVES */
#endif /* __TI_COMPILER_VERSION__ */
/* ************************ [^] TI CGT CCS (POP) [^] ************************ */

#endif /* !REGPARM_H */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
