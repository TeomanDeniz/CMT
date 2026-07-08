/******************************************************************************\
# H - FASTCALL                                   #       Maximum Tension       #
################################################################################
#                                                #      -__            __-     #
# Teoman Deniz                                   #  :    :!1!-_    _-!1!:    : #
# maximum-tension.com                            #  ::                      :: #
#                                                #  :!:    : :: : :  :  ::::!: #
# +.....................++.....................+ #   :!:: :!:!1:!:!::1:::!!!:  #
# : C - Maximum Tension :: Create - 2026/01/30 : #   ::!::!!1001010!:!11!!::   #
# :---------------------::---------------------: #   :!1!!11000000000011!!:    #
# : License - GPL-3.0   :: Update - 2026/06/16 : #    ::::!!!1!!1!!!1!!!::     #
# +.....................++.....................+ #       ::::!::!:::!::::      #
\******************************************************************************/

/******************************************************************************\
|* __________________________________________________________________________ *|
|*|                                 FASTCALL                                 |*|
|*|__________________________________________________________________________|*|
|*|                                                                          |*|
|*| THIS HEADER PROVIDES A MINIMAL ABSTRACTION FOR REGISTER-BASED ARGUMENT   |*|
|*| PASSING ON 32-BIT X86 SYSTEMS, USING THE COMPILER-SPECIFIC fastcall      |*|
|*| CALLING CONVENTION WHERE SUPPORTED.                        ^^^^^^^^      |*|
|*|                                                                          |*|
|*| ON CLASSIC 32-BIT X86 (I386) SYSTEMS, THE DEFAULT C CALLING CONVENTION   |*|
|*| (CDECL) PASSES ALL FUNCTION ARGUMENTS ON THE STACK.                      |*|
|*|  ^^^^^                                                                   |*|
|*| SOME COMPILERS (NOTABLY MSVC AND NOTABLY GCC-COMPATIBLE) PROVIDE         |*|
|*| EXTENSIONS THAT ALLOW A LIMITED NUMBER OF ARGUMENTS TO BE PASSED VIA CPU |*|
|*| REGISTERS, REDUCING CALL OVERHEAD FOR SMALL, FREQUENTLY CALLED           |*|
|*| FUNCTIONS.                                                               |*|
|*|     ________                                                             |*|
|*| THE FASTCALL MACRO ANNOTATES A FUNCTION (OR FUNCTION POINTER) TO REQUEST |*|
|*| THAT ARGUMENTS BE PASSED USING THE COMPILER'S FASTCALL CONVENTION, WHEN  |*|
|*| SUPPORTED BY THE COMPILER AND TARGET ARCHITECTURE.                       |*|
|*|                   ________                                               |*|
|*| WHEN UNSUPPORTED, FASTCALL SAFELY DEGRADES TO A NO-OP, PRESERVING SOURCE |*|
|*| COMPATIBILITY WITHOUT ALTERING BEHAVIOR.                                 |*|
|*|                                                                          |*|
|*| O - IMPORTANT:                                                           |*|
|*| :   ________                                                             |*|
|*| :.. fastcall IS NOT A STANDARDIZED ABI.                                  |*|
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
|*| #define FASTCALL                                              | 63       |*|
|*| #define fastcall                                              |          |*|
|*|---------------------------------------------------------------|----------|*|
|*| #define IS__FASTCALL__SUPPORTED                               | 127      |*|
|*|_______________________________________________________________|__________|*|
|*                                                                            *|
|*                                ............                                *|
|* ...............................: FASTCALL :............................... *|
|* :                              ''''''''''''                              : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| #define FASTCALL                                                    : *|
|* : 3| #define fastcall                                                    : *|
|* : 4|                                                                     : *|
|* :                                                                        : *|
|* : REQUESTS THAT FUNCTION ARGUMENTS BE PASSED IN REGISTERS ACCORDING TO   : *|
|* : THE COMPILER'S fastcall CONVENTION INSTEAD OF ENTIRELY ON THE STACK.   : *|
|* :                                                                        : *|
|* : TYPICAL 32-BIT X86 FASTCALL REGISTER USAGE:                            : *|
|* :  ___________________________                                           : *|
|* : | REGISTER USAGE (IN ORDER) |                                          : *|
|* : |===========================|                                          : *|
|* : | ECX, EDX                  |                                          : *|
|* : |___________________________|                                          : *|
|* :                                                                        : *|
|* : O - REGISTER USAGE IS COMPILER-DEFINED                                 : *|
|* :                                                                        : *|
|* : O - USUALLY LIMITED TO TWO ARGUMENTS                                   : *|
|* :                                                                        : *|
|* : O - REMAINING ARGUMENTS (IF ANY) ARE PASSED ON THE STACK               : *|
|* :                                                                        : *|
|* : O - RETURN VALUES ARE UNAFFECTED                                       : *|
|* :                                                                        : *|
|* : EXAMPLES:                                                              : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| int fastcall func(int a, void *b);                                  : *|
|* : 3|                                                                     : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| int FASTCALL func(int a, int b, int c, int d, int e);               : *|
|* : 3|                                                                     : *|
|* :  : a ----> ECX                                                         : *|
|* :  : b ----> EDX                                                         : *|
|* :  : c, d, e -> STACK                                                    : *|
|* :                                                                        : *|
|* : PROTOTYPE:                                                             : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| extern int fastcall func(int, int, void *);                         : *|
|* : 3|                                                                     : *|
|* :                                                                        : *|
|* : FUNCTION POINTER:                                                      : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| int (FASTCALL *test)(int, int, void *);                             : *|
|* : 3|                                                                     : *|
|* :                                                                        : *|
|* : FUNCTION POINTER TYPE CASTING:                                         : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| test = (int (FASTCALL *)(int))pointer;                              : *|
|* : 3|                                                                     : *|
|* :........................................................................: *|
|*                                                                            *|
|*                        ...........................                         *|
|* .......................: IS__FASTCALL__SUPPORTED :........................ *|
|* :                      '''''''''''''''''''''''''''                       : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| #define IS__FASTCALL__SUPPORTED                                     : *|
|* : 3|                                                                     : *|
|* :                    ________                                            : *|
|* : CHECKS WHETHER THE FASTCALL MACRO IS DEFINED AS NON-EMPTY.             : *|
|* :                                                     ________           : *|
|* : THIS INDICATES THAT THE COMPILER TRULY SUPPORTS THE fastcall           : *|
|* : ATTRIBUTE.                                                             : *|
|* :                                                                        : *|
|* : O - NOTE:                                                              : *|
|* : :            _______________________                                   : *|
|* : :.. CHECKING IS__FASTCALL__SUPPORTED ALONE IS NOT SUFFICIENT.          : *|
|* : :                                                                      : *|
|* : :.. YOU MUST ALSO VERIFY THAT YOUR TARGET ARCHITECTURE AND COMPILER    : *|
|* :   : SUPPORTS fastcall.                                                 : *|
|* :              ^^^^^^^^                                                  : *|
|* : EXAMPLES:                                                              : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| #ifdef IS__FASTCALL__SUPPORTED                                      : *|
|* : 3| int FASTCALL fast_add(int a, int b, int c);                         : *|
|* : 4| #else                                                               : *|
|* : 5| int fast_add(int a, int b, int c);                                  : *|
|* : 6| #endif                                                              : *|
|* : 7|                                                                     : *|
|* :........................................................................: *|
|*                                                                            *|
\******************************************************************************/

#ifndef FASTCALL_H
#define FASTCALL_H 202606 /* VERSION */

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

#define IS__FASTCALL__SUPPORTED

#ifdef _MSC_VER /* MICROSOFT C++ */
#ifdef _M_IX86
#define FASTCALL __fastcall
#endif /* _M_IX86 */
#endif /* _MSC_VER */

#ifndef FASTCALL
#ifdef __clang__
#ifdef _M_IX86
#define FASTCALL __msfastcall
#endif /* _M_IX86 */
#endif /* __clang__ */
#endif /* !FASTCALL */

#ifndef FASTCALL
#ifdef __GNUC__
#if (\
	(__GNUC__ > 2) || \
	(__GNUC__ == 2 && __GNUC_MINOR__ > 7) || \
	(__GNUC__ == 2 && __GNUC_MINOR__ == 7 && __GNUC_PATCHLEVEL__ >= 1)\
) /* GCC 2.7.1+ (MINIMUM C90) */
#ifdef __i386__
#define FASTCALL __attribute__((fastcall))
#endif /* __i386__ */
#endif /* __GNUC__ >= 2.7.1 */
#endif /* __GNUC__ */
#endif /* !FASTCALL */

#ifndef FASTCALL
#undef IS__FASTCALL__SUPPORTED
#define FASTCALL
#endif /* !FASTCALL */

#define fastcall FASTCALL

/* ************************ [v] TI CGT CCS (POP) [v] ************************ */
#ifdef __TI_COMPILER_VERSION__
#pragma diag_pop /* TI CGT CCS COMPILER DIRECTIVES */
#endif /* __TI_COMPILER_VERSION__ */
/* ************************ [^] TI CGT CCS (POP) [^] ************************ */

#endif /* !FASTCALL_H */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
