/******************************************************************************\
# H - VOLATILE                                   #       Maximum Tension       #
################################################################################
#                                                #      -__            __-     #
# Teoman Deniz                                   #  :    :!1!-_    _-!1!:    : #
# maximum-tension.com                            #  ::                      :: #
#                                                #  :!:    : :: : :  :  ::::!: #
# +.....................++.....................+ #   :!:: :!:!1:!:!::1:::!!!:  #
# : C - Maximum Tension :: Create - 2026/09/15 : #   ::!::!!1001010!:!11!!::   #
# :---------------------::---------------------: #   :!1!!11000000000011!!:    #
# : License - Apache2.0 :: Update - 2026/09/28 : #    ::::!!!1!!1!!!1!!!::     #
# +.....................++.....................+ #       ::::!::!:::!::::      #
\******************************************************************************/

/******************************************************************************\
|* __________________________________________________________________________ *|
|*|                                 VOLATILE                                 |*|
|*|__________________________________________________________________________|*|
|*|                                                                          |*|
|*| DEFINES THE <volatile> TYPE QUALIFIER AS A CROSS-COMPILER MACRO THAT     |*|
|*| FORBIDS THE OPTIMIZER FROM CACHING, FOLDING, REORDERING OR ELIDING       |*|
|*| ACCESSES TO AN OBJECT.                                                   |*|
|*|                                                                          |*|
|*| THIS PROVIDES A SINGLE PORTABLE MACRO THAT MAPS TO THE APPROPRIATE       |*|
|*| COMPILER-SPECIFIC QUALIFIER OR ALTERNATE KEYWORD, AND DEGRADES SAFELY TO |*|
|*| A NO-OP ON PRE-ANSI (K&R) COMPILERS THAT HAVE NO SUCH QUALIFIER AT ALL.  |*|
|*|                                                                          |*|
|*| IF YOU WANT ALL THE VOLATILES TO BE DISABLED, YOU CAN DEFINE             |*|
|*| CMT_NO_VOLATILE.                                                         |*|
|*| ^^^^^^^^^^^^^^^                                                          |*|
|*| WHEN PRE-DEFINED BY THE USER BEFORE INCLUDING THE HEADER, THE KEYWORD IS |*|
|*| STRIPPED AND <IS__VOLATILE__SUPPORTED> IS UNDEFINED EVEN ON A COMPILER   |*|
|*| THAT SUPPORTS IT.                                                        |*|
|*|                                                                          |*|
|*| INTENDED FOR WORKING AROUND A BROKEN TOOLCHAIN, AND FOR EXERCISING THE   |*|
|*| DEGRADED K&R PATH FROM A MODERN HOST WITHOUT HAVING TO FIND A K&R        |*|
|*| COMPILER.                                                                |*|
|*|__________________________________________________________________________|*|
|*                                                                            *|
\******************************************************************************/

/*############################################################################*\
|*#                                 CONTENTS                                 #*|
|*############################################################################*|
|* __________________________________________________________________________ *|
|*| CONTENT                                                       | DOC LINE |*|
|*|===============================================================|==========|*|
|*| #define VOLATILE                                              | 54       |*|
|*|---------------------------------------------------------------|----------|*|
|*| #define IS__VOLATILE__SUPPORTED                               | 169      |*|
|*|_______________________________________________________________|__________|*|
|*                                                                            *|
|*                                ............                                *|
|* ...............................: VOLATILE :............................... *|
|* :                              ''''''''''''                              : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| #define VOLATILE                                                    : *|
|* : 3|                                                                     : *|
|* :                                                                        : *|
|* : MARKS AN OBJECT AS VOLATILE, TELLING THE COMPILER THAT ITS VALUE MAY   : *|
|* : CHANGE BY MEANS OUTSIDE THE VISIBLE FLOW OF THE PROGRAM, SO EVERY READ : *|
|* : AND WRITE WRITTEN IN THE SOURCE MUST ACTUALLY BE PERFORMED.            : *|
|* :                                                                        : *|
|* : O - TYPICAL REASONS AN OBJECT NEEDS IT:                                : *|
|* : :                                                                      : *|
|* : :.., IT IS WRITTEN BY GENERATED CODE THE COMPILER CANNOT SEE           : *|
|* : :                                                                      : *|
|* : :.., IT IS WRITTEN BY ANOTHER THREAD, A SIGNAL HANDLER OR AN INTERRUPT : *|
|* : :                                                                      : *|
|* : :.., IT IS A MEMORY-MAPPED HARDWARE REGISTER                           : *|
|* : :                                                                      : *|
|* : :.., IT IS MODIFIED ACROSS setjmp / longjmp                            : *|
|* :                            ^^^^^^   ^^^^^^^                            : *|
|* : WHEN UNSUPPORTED, <VOLATILE> SAFELY DEGRADES TO A NO-OP, PRESERVING    : *|
|* : SOURCE COMPATIBILITY WITHOUT ALTERING BEHAVIOR.                        : *|
|* :                                                                        : *|
|* : /!\ - THIS IS THE PART THAT IS WORTH READING TWICE, BECAUSE BOTH       : *|
|* : SPELLINGS COMPILE AND ONLY ONE OF THEM DOES WHAT IS USUALLY WANTED.    : *|
|* :                                             ____                       : *|
|* : THE QUALIFIER BINDS TO WHATEVER SITS ON ITS LEFT, OR TO THE THING ON   : *|
|* : ITS RIGHT WHEN THERE IS NOTHING ON ITS LEFT:                           : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| VOLATILE void    *a; // POINTER TO VOLATILE DATA - THE POINTER ITSE : *|
|* : 3|     LF IS NOT                                                       : *|
|* : 4| void            *VOLATILE b; // VOLATILE POINTER - THE POINTED DATA : *|
|* : 5|      IS NOT                                                         : *|
|* : 6| VOLATILE void    *VOLATILE c; // BOTH                               : *|
|* : 7|                                                                     : *|
|* :             ________________                                           : *|
|* : TO MAKE THE POINTER VARIABLE ITSELF VOLATILE, THE QUALIFIER MUST       : *|
|* : COME AFTER THE *.                                                      : *|
|* :                ^                                                       : *|
|* : THERE IS ONE CONVENIENT EXCEPTION. WHEN THE POINTER TYPE IS HIDDEN     : *|
|* : BEHIND A <typedef>, THE QUALIFIER APPLIES TO THE POINTER, WHICH IS THE : *|
|* : INTUITIVE RESULT:                                                      : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| typedef void    *PTR;                                               : *|
|* : 3|                                                                     : *|
|* : 4| VOLATILE PTR    p; // SAME AS: void *VOLATILE p;                    : *|
|* : 5|                                                                     : *|
|* :    ____________                                                        : *|
|* : SO VOLATILE PTR IS A VOLATILE POINTER, WHILE HAND-EXPANDING THAT       : *|
|* : TYPEDEF INTO <VOLATILE void *> SILENTLY FLIPS THE MEANING AND          : *|
|* : QUALIFIES THE DATA INSTEAD.                                            : *|
|* :                                                                        : *|
|* :                 .'''''''''''''''''''''''''''''''''''.                  : *|
|* :::::::::::::::::'  WHY IT MATTERS FOR GENERATED CODE  ':::::::::::::::::: *|
|* :                                                                        : *|
|* : IF A GLOBAL IS WRITTEN ONLY BY RUNTIME-GENERATED MACHINE CODE, NOTHING : *|
|* : IN THE TRANSLATION UNIT EVER ASSIGNS IT AS FAR AS THE COMPILER IS      : *|
|* : CONCERNED. UNDER WHOLE-PROGRAM VISIBILITY THE OPTIMIZER IS THEN        : *|
|* : ENTITLED TO CONCLUDE THE OBJECT STILL HOLDS ITS INITIALIZER AND        : *|
|* : REPLACE EVERY READ WITH THAT CONSTANT:                                 : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| static PTR    g_this; // NEVER ASSIGNED IN VISIBLE C CODE           : *|
|* : 3|                                                                     : *|
|* : 4| void    *connect(void)                                              : *|
|* : 5| {                                                                   : *|
|* : 6|     return (g_this); // -O2 -> "xorl %eax, %eax"  (FOLDED TO NULL!) : *|
|* : 7| }                                                                   : *|
|* : 8|                                                                     : *|
|* :                                                                        : *|
|* : ADDING THE QUALIFIER FORCES THE LOAD TO HAPPEN:                        : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| static VOLATILE PTR    g_this;                                      : *|
|* : 3|                                                                     : *|
|* : 4| void    *connect(void)                                              : *|
|* : 5| {                                                                   : *|
|* : 6|     return (g_this); // -O2 -> "movq g_this(%rip), %rax"            : *|
|* : 7| }                                                                   : *|
|* : 8|                                                                     : *|
|* : _____ ________                 ____                                    : *|
|* : NOTE: volatile ORDERS ACCESSES ONLY WITH RESPECT TO OTHER              : *|
|* : VOLATILE ACCESSES, AND IT IS <NOT> A SYNCHRONIZATION PRIMITIVE. IT     : *|
|* : DOES NOT PROVIDE ATOMICITY AND IT DOES NOT EMIT CPU MEMORY BARRIERS    : *|
|* : (EXCEPT UNDER MSVC'S </volatile:ms>). FOR SHARING MUTABLE DATA BETWEEN : *|
|* : THREADS, A REAL LOCK OR AN ATOMIC TYPE IS STILL REQUIRED.              : *|
|* :                                                                        : *|
|* : EXAMPLES:                                                              : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| VOLATILE int    flag;                                               : *|
|* : 3|                                                                     : *|
|* : 4| extern VOLATILE unsigned char    *port;                             : *|
|* : 5|                                                                     : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| VOLATILE int    counter;                                            : *|
|* : 3|                                                                     : *|
|* : 4| void    tick(void)                                                  : *|
|* : 5| {                                                                   : *|
|* : 6|     counter++;                                                      : *|
|* : 7| }                                                                   : *|
|* : 8|                                                                     : *|
|* :........................................................................: *|
|*                                                                            *|
|*                        ...........................                         *|
|* .......................: IS__VOLATILE__SUPPORTED :........................ *|
|* :                      '''''''''''''''''''''''''''                       : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| #define IS__VOLATILE__SUPPORTED                                     : *|
|* : 3|                                                                     : *|
|* :                                                                        : *|
|* : CHECKS WHETHER THE VOLATILE MACRO IS DEFINED AS NON-EMPTY.             : *|
|* :                    ^^^^^^^^                                            : *|
|* : THIS INDICATES THAT THE COMPILER TRULY SUPPORTS THE <volatile>         : *|
|* : QUALIFIER.                                                             : *|
|* :                                                                        : *|
|* : O - NOTES:                                                             : *|
|* : :   ^^^^^^                                                             : *|
|* : :.., THE MACRO IS UNDEFINED ONLY ON PRE-ANSI (K&R) COMPILERS, OR WHEN  : *|
|* : :  : THE USER EXPLICITLY REQUESTED <CMT_NO_VOLATILE>.                  : *|
|* : :                                                                      : *|
|* : :.., ANY ALGORITHM WHOSE <CORRECTNESS> DEPENDS ON THE QUALIFIER BEING  : *|
|* :    : HONORED MUST BE GUARDED, SINCE ON SUCH A TARGET NOTHING ENFORCES  : *|
|* :    : THE ACCESS.                                                       : *|
|* :                                                                        : *|
|* : EXAMPLE:                                                               : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| #ifdef IS__VOLATILE__SUPPORTED                                      : *|
|* : 3| VOLATILE PTR    g_this;                                             : *|
|* : 4| #else                                                               : *|
|* : 5| #error "THIS MODULE REQUIRES A COMPILER WITH VOLATILE SUPPORT"      : *|
|* : 6| #endif                                                              : *|
|* : 7|                                                                     : *|
|* :........................................................................: *|
|*                                                                            *|
|*    _______                                                                 *|
|*  _| NOTES |______________________________________________________________  *|
|* | :"""""""'                                                              | *|
|* | :                                                                      | *|
|* | :.., <GNU-GCC> USES THE ALTERNATE SPELLING <__volatile__> ON PURPOSE.  | *|
|* | :  : PRE-4.X GCC DISABLES THE PLAIN <volatile> UNDER <-traditional>,   | *|
|* | :  : WHILE THE <__>-WRAPPED SPELLING KEEPS WORKING. IT IS ACCEPTED     | *|
|* | :  : EVERYWHERE THE PLAIN KEYWORD IS, SO IT COSTS NOTHING ON MODERN    | *|
|* | :  : GCC. NOTE THAT <-ansi> AND <-std=c90> DO <NOT> DISABLE <volatile> | *|
|* | :  : - IT IS A STANDARD C89 KEYWORD.                                   | *|
|* | :    ____                ____________                                  | *|
|* | :.., MSVC HAS TWO MODES. /volatile:ms (THE DEFAULT ON X86 AND X64)     | *|
|* | :  : ADDS ACQUIRE/RELEASE SEMANTICS ON TOP OF THE STANDARD BEHAVIOR,   | *|
|* | :  : WHILE </volatile:iso> GIVES EXACTLY THE STANDARD BEHAVIOR. THE MS | *|
|* | :  : MODE IS STRICTLY STRONGER, NEVER WEAKER, SO BOTH ARE SAFE HERE.   | *|
|* | :                                                                      | *|
|* | :.., ANY UNKNOWN COMPILER THAT ANNOUNCES ITSELF AS ANSI C THROUGH      | *|
|* | :  : <__STDC__> OR <__STDC_VERSION__> IS TRUSTED WITHOUT NEEDING A     | *|
|* | :  : VENDOR TAG, SINCE THE KEYWORD IS PART OF THE LANGUAGE BY          | *|
|* | :  : DEFINITION FROM C89 ONWARD.                                       | *|
|* | :                                       ________                       | *|
|* | :.., ON THE DEGRADED PATH THE LOWERCASE volatile IS ALSO DEFINED AS    | *|
|* | :  : EMPTY, EXACTLY LIKE <KNR_STYLE.H> DOES FOR <void> AND <const>.    | *|
|* | :  : WITHOUT THAT, ANY HAND-WRITTEN <volatile> IN USER CODE WOULD FAIL | *|
|* | :  : TO PARSE ON A K&R COMPILER. ON EVERY SUPPORTED COMPILER THE       | *|
|* | :  : LOWERCASE SPELLING IS LEFT COMPLETELY UNTOUCHED, BECAUSE THE      | *|
|* | :  : NATIVE KEYWORD ALREADY WORKS AND REDEFINING IT WOULD ONLY RISK    | *|
|* | :  : DISTURBING SYSTEM HEADERS.                                        | *|
|* | :                                                                      | *|
|* | :.., THE QUALIFIER COSTS NOTHING WHEN IT IS NOT READ. IT ONLY          | *|
|* |    : SUPPRESSES OPTIMIZATION OF THE ACCESSES TO THE OBJECT IT MARKS,   | *|
|* |    : SO MARKING A HOT VARIABLE VOLATILE WITHOUT NEEDING IT WILL        | *|
|* |    : PESSIMIZE THE SURROUNDING CODE.                                   | *|
|* |                                                                        | *|
|* |________________________________________________________________________| *|
|*                                                                            *|
\******************************************************************************/

#ifndef VOLATILE_H
#define VOLATILE_H 202609 /* VERSION */

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

#define IS__VOLATILE__SUPPORTED

/* ************************* [v] USER OVERRIDE [v] ************************** *\
|* *  IF THE USER PRE-DEFINES <CMT_NO_VOLATILE>, THE KEYWORD IS STRIPPED    * *|
|* *  EVEN WHEN THE COMPILER SUPPORTS IT. USEFUL FOR BROKEN TOOLCHAINS AND  * *|
|* *              FOR TESTING THE DEGRADED PATH ON A MODERN HOST.           * *|
\* ************************************************************************** */
#ifdef CMT_NO_VOLATILE
#define LOCALMACRO__VOLATILE_IS_FALSE
#endif /* CMT_NO_VOLATILE */

#ifndef LOCALMACRO__VOLATILE_IS_FALSE
/* ************************ [v] DEFINE VOLATILE [v] ************************* */
#ifdef __cplusplus /* C++ (KEYWORD SINCE THE VERY FIRST STANDARD) */
#define VOLATILE volatile
#endif /* __cplusplus */

#ifndef VOLATILE
#ifdef __clang__ /* CLANG */
#define VOLATILE volatile
#endif /* __clang__ */
#endif /* !VOLATILE */

#ifndef VOLATILE
#ifdef __GNUC__ /* GNU-GCC */
#define VOLATILE __volatile__ /*
# THE ALTERNATE KEYWORD IS USED ON PURPOSE: PRE-4.X GCC DISABLES THE PLAIN
# "volatile" UNDER "-traditional", WHILE THE "__"-WRAPPED SPELLING KEEPS
# WORKING. IT IS ACCEPTED EVERYWHERE THE PLAIN KEYWORD IS, SO IT COSTS
# NOTHING ON MODERN GCC. NOTE THAT "-ansi" / "-std=c90" DO NOT DISABLE
# "volatile" - IT IS A STANDARD C89 KEYWORD.               ^^^
# */
#endif /* __GNUC__ */
#endif /* !VOLATILE */

#ifndef VOLATILE
#ifdef _MSC_VER /* MSVC */
#define VOLATILE volatile /*
# BE AWARE OF "/volatile:ms" (DEFAULT ON X86/X64) VERSUS "/volatile:iso".
# THE "MS" MODE GIVES ACQUIRE/RELEASE SEMANTICS ON TOP OF THE STANDARD ONES,
# SO IT IS STRICTER, NEVER WEAKER. IT IS SAFE EITHER WAY.
# */
#endif /* _MSC_VER */
#endif /* !VOLATILE */

#ifndef VOLATILE
#ifdef __INTEL_COMPILER /* ICC CLASSIC */
#define VOLATILE volatile
#endif /* __INTEL_COMPILER */
#endif /* !VOLATILE */

#ifndef VOLATILE
#ifdef __INTEL_LLVM_COMPILER /* INTEL ICX */
#define VOLATILE volatile
#endif /* __INTEL_LLVM_COMPILER */
#endif /* !VOLATILE */

#ifndef VOLATILE
#ifdef __TINYC__ /* TINY C COMPILER */
#define VOLATILE volatile
#endif /* __TINYC__ */
#endif /* !VOLATILE */

#ifndef VOLATILE
#ifdef __CC_ARM /* ARM COMPILER 5 */
#define VOLATILE volatile
#endif /* __CC_ARM */
#endif /* !VOLATILE */

#ifndef VOLATILE
#ifdef __ARMCOMPILER_VERSION /* ARM COMPILER 6 (LLVM-BASED) */
#define VOLATILE volatile
#endif /* __ARMCOMPILER_VERSION */
#endif /* !VOLATILE */

#ifndef VOLATILE
#ifdef __IBMCPP__ /* IBM XL */
#define VOLATILE volatile
#else /* !__IBMCPP__ */
#ifdef __IBMC__ /* IBM XL */
#define VOLATILE volatile
#endif /* __IBMC__ */
#endif /* __IBMCPP__ */
#endif /* !VOLATILE */

#ifndef VOLATILE
#ifdef __SUNPRO_C /* SUN STUDIO / ORACLE DEVELOPER STUDIO */
#define VOLATILE volatile
#else /* !__SUNPRO_C */
#ifdef __SUNPRO_CC
#define VOLATILE volatile
#endif /* __SUNPRO_CC */
#endif /* __SUNPRO_C */
#endif /* !VOLATILE */

#ifndef VOLATILE
#ifdef __TURBOC__ /* TURBO C / TURBO C++ (2.0+ IS ANSI ENOUGH) */
#define VOLATILE volatile
#endif /* __TURBOC__ */
#endif /* !VOLATILE */

#ifndef VOLATILE
#ifdef __BORLANDC__ /* BORLAND C/C++ */
#define VOLATILE volatile
#endif /* __BORLANDC__ */
#endif /* !VOLATILE */

#ifndef VOLATILE
#ifdef __DMC__ /* DIGITAL MARS */
#define VOLATILE volatile
#endif /* __DMC__ */
#endif /* !VOLATILE */

#ifndef VOLATILE
#ifdef __WATCOMC__ /* WATCOM / OPENWATCOM */
#define VOLATILE volatile
#endif /* __WATCOMC__ */
#endif /* !VOLATILE */

#ifndef VOLATILE
#ifdef __MWERKS__ /* METROWERKS CODEWARRIOR */
#define VOLATILE volatile
#endif /* __MWERKS__ */
#endif /* !VOLATILE */

#ifndef VOLATILE
#ifdef __ghs__ /* GREEN HILLS */
#define VOLATILE volatile
#endif /* __ghs__ */
#endif /* !VOLATILE */

#ifndef VOLATILE
#ifdef __IAR_SYSTEMS_ICC__ /* IAR EMBEDDED WORKBENCH */
#define VOLATILE volatile
#endif /* __IAR_SYSTEMS_ICC__ */
#endif /* !VOLATILE */

#ifndef VOLATILE
#ifdef __TI_COMPILER_VERSION__ /* TEXAS INSTRUMENTS */
#define VOLATILE volatile
#endif /* __TI_COMPILER_VERSION__ */
#endif /* !VOLATILE */

#ifndef VOLATILE
#ifdef __POCC__ /* PELLES C */
#define VOLATILE volatile
#endif /* __POCC__ */
#endif /* !VOLATILE */

#ifndef VOLATILE
#ifdef __PGI /* PGI / NVIDIA HPC */
#define VOLATILE volatile
#endif /* __PGI */
#endif /* !VOLATILE */

#ifndef VOLATILE
#ifdef __SDCC /* SMALL DEVICE C COMPILER */
#define VOLATILE volatile
#endif /* __SDCC */
#endif /* !VOLATILE */

#ifndef VOLATILE
#ifdef __CC65__ /* CC65 (6502) */
#define VOLATILE volatile
#endif /* __CC65__ */
#endif /* !VOLATILE */

#ifndef VOLATILE
#ifdef __VBCC__ /* VBCC */
#define VOLATILE volatile
#endif /* __VBCC__ */
#endif /* !VOLATILE */

#ifndef VOLATILE
#ifdef __LCC__ /* LCC */
#define VOLATILE volatile
#endif /* __LCC__ */
#endif /* !VOLATILE */

/* ********************* [v] GENERIC ANSI FALLBACK [v] ********************** *\
|* *  ANY UNKNOWN COMPILER THAT ANNOUNCES ITSELF AS ANSI C (C89) OR NEWER   * *|
|* *  HAS THE KEYWORD BY DEFINITION, SO IT IS TRUSTED WITHOUT A VENDOR TAG. * *|
\* ************************************************************************** */
#ifndef VOLATILE
#ifdef __STDC_VERSION__ /* C95 AND NEWER */
#define VOLATILE volatile
#endif /* __STDC_VERSION__ */
#endif /* !VOLATILE */

#ifndef VOLATILE
#ifdef __STDC__ /* C89 / C90 */
#define VOLATILE volatile
#endif /* __STDC__ */
#endif /* !VOLATILE */
/* ************************ [^] DEFINE VOLATILE [^] ************************* */
#endif /* !LOCALMACRO__VOLATILE_IS_FALSE */

#undef LOCALMACRO__VOLATILE_IS_FALSE

/* ************************* [v] K&R DEGRADE [v] **************************** *\
|* *  PRE-ANSI (K&R) COMPILERS HAVE NO SUCH QUALIFIER. THE MACRO BECOMES    * *|
|* *  EMPTY SO THE SOURCE STILL COMPILES. THE LOWERCASE SPELLING IS ALSO    * *|
|* *  STRIPPED, EXACTLY LIKE <KNR_STYLE.H> DOES FOR "void" AND "const",     * *|
|* *  OTHERWISE HAND-WRITTEN "volatile" IN USER CODE WOULD NOT PARSE.       * *|
|* *                                                                        * *|
|* *  /!\ - ON SUCH A TARGET NOTHING ENFORCES THE ACCESS, SO ANY ALGORITHM  * *|
|* *        THAT DEPENDS ON IT MUST BE GUARDED WITH                         * *|
|* *        <IS__VOLATILE__SUPPORTED> BY THE USER.                          * *|
\* ************************************************************************** */
#ifndef VOLATILE
#undef IS__VOLATILE__SUPPORTED
#define VOLATILE
#define volatile /* STRIP THE KEYWORD THE COMPILER CANNOT PARSE */
#endif /* !VOLATILE */

/* ************************ [v] TI CGT CCS (POP) [v] ************************ */
#ifdef __TI_COMPILER_VERSION__
#pragma diag_pop /* TI CGT CCS COMPILER DIRECTIVES */
#endif /* __TI_COMPILER_VERSION__ */
/* ************************ [^] TI CGT CCS (POP) [^] ************************ */

#endif /* !VOLATILE_H */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
