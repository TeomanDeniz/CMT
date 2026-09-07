/******************************************************************************\
# H - INLINE                                     #       Maximum Tension       #
################################################################################
#                                                #      -__            __-     #
# Teoman Deniz                                   #  :    :!1!-_    _-!1!:    : #
# maximum-tension.com                            #  ::                      :: #
#                                                #  :!:    : :: : :  :  ::::!: #
# +.....................++.....................+ #   :!:: :!:!1:!:!::1:::!!!:  #
# : C - Maximum Tension :: Create - 2023/07/09 : #   ::!::!!1001010!:!11!!::   #
# :---------------------::---------------------: #   :!1!!11000000000011!!:    #
# : License - GPL-3.0   :: Update - 2026/08/25 : #    ::::!!!1!!1!!!1!!!::     #
# +.....................++.....................+ #       ::::!::!:::!::::      #
\******************************************************************************/

/******************************************************************************\
|* __________________________________________________________________________ *|
|*|                                   FAR                                    |*|
|*|__________________________________________________________________________|*|
|*|                                                                          |*|
|*| <INLINE> AND <FORCE_INLINE> ARE FUNCTION MODIFIERS USED TO REQUEST THAT  |*|
|*| A COMPILER TREAT A FUNCTION AS AN INLINE FUNCTION.                       |*|
|*| ______                                                                   |*|
|*| INLINE PROVIDES A PORTABLE WAY TO REQUEST NORMAL INLINING. THE           |*|
|*| COMPILER MAY CHOOSE WHETHER OR NOT TO ACTUALLY SUBSTITUTE THE FUNCTION'S |*|
|*| CODE AT EACH CALL SITE.                                                  |*|
|*| ____________                                                             |*|
|*| FORCE_INLINE EXPRESSES A STRONGER REQUEST: WHEN THE COMPILER SUPPORTS    |*|
|*| SUCH A FEATURE, IT TELLS THE COMPILER TO MAKE A STRONGER EFFORT TO       |*|
|*| INLINE THE FUNCTION. IT MAY USE COMPILER-SPECIFIC EXTENSIONS SUCH AS     |*|
|*| __forceinline OR __attribute__((always_inline)).                         |*|
|*| ^^^^^^^^^^^^^    ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^                          |*|
|*| INLINING CAN REDUCE THE OVERHEAD OF A FUNCTION CALL, BUT IT MAY ALSO     |*|
|*| INCREASE THE SIZE OF THE GENERATED PROGRAM. **NEITHER <INLINE> NOR       |*|
|*| <FORCE_INLINE> SHOULD BE INTERPRETED AS A GUARANTEE THAT THE RESULTING   |*|
|*| MACHINE CODE WILL CONTAIN NO FUNCTION CALL.** THE EXACT BEHAVIOUR        |*|
|*| DEPENDS ON THE COMPILER AND ITS OPTIMISATION SETTINGS.                   |*|
|*|                                                                          |*|
|*| EXAMPLE:                                                                 |*|
|*| ^^^^^^^                                                                  |*|
|*|   v [C LANGUAGE]                                                         |*|
|*|  1|                                                                      |*|
|*|  2| // Inline function:                                                  |*|
|*|  3| INLINE int test(void)                                                |*|
|*|  4| {                                                                    |*|
|*|  5|     return (15 + 42);                                                |*|
|*|  6| }                                                                    |*|
|*|  7|                                                                      |*|
|*|  8| // Used in main:                                                     |*|
|*|  9| int main(void)                                                       |*|
|*| 10| {                                                                    |*|
|*| 11|     printf("%d", test());                                            |*|
|*| 12|     return (0);                                                      |*|
|*| 13| }                                                                    |*|
|*| 14|                                                                      |*|
|*|                                                                          |*|
|*| A COMPILER MAY EFFECTIVELY TURN THE CALL INTO SOMETHING EQUIVALENT TO:   |*|
|*|                                                                          |*|
|*|  v [C LANGUAGE]                                                          |*|
|*| 1|                                                                       |*|
|*| 2| int main(void)                                                        |*|
|*| 3| {                                                                     |*|
|*| 4|     printf("%d", (15 + 42));                                          |*|
|*| 5|     return (0);                                                       |*|
|*| 6| }                                                                     |*|
|*| 7|                                                                       |*|
|*|                                                                          |*|
|*| THE EXACT GENERATED CODE IS COMPILER-DEPENDENT.                          |*|
|*|                                                                          |*|
|*| THIS IS ONLY AN EXAMPLE. YOU ARE FREE TO PUT WHATEVER VALID CODE IS      |*|
|*| APPROPRIATE INSIDE AN INLINE FUNCTION, BUT SOME CONSTRUCTS CAN PREVENT   |*|
|*| OR COMPLICATE INLINING. SEE <HOW NOT TO USE IT> BELOW.                   |*|
|*|__________________________________________________________________________|*|
|*                                                                            *|
\******************************************************************************/

/*############################################################################*\
|*#                                 CONTENTS                                 #*|
|*############################################################################*|
|* __________________________________________________________________________ *|
|*| CONTENT                                                       | DOC LINE |*|
|*|===============================================================|==========|*|
|*| #define INLINE                                                | 88       |*|
|*|---------------------------------------------------------------|----------|*|
|*| #define FORCE_INLINE                                          | 119      |*|
|*|_______________________________________________________________|__________|*|
|*                                                                            *|
|*                                 ..........                                 *|
|* ................................: INLINE :................................ *|
|* :                               ''''''''''                               : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| #define INLINE                                                      : *|
|* : 3|                                                                     : *|
|* :                                                                        : *|
|* : INLINE REQUESTS NORMAL INLINE SEMANTICS FOR A FUNCTION.                : *|
|* : ^^^^^^                                                                 : *|
|* : THE EXACT DEFINITION OF <INLINE> DEPENDS ON THE COMPILER. FOR EXAMPLE, : *|
|* : IT MAY EXPAND TO THE STANDARD C/C++ <inline> KEYWORD OR TO A           : *|
|* : COMPILER-SPECIFIC EQUIVALENT SUCH AS __inline OR __inline__.           : *|
|* :                                      ^^^^^^^^    ^^^^^^^^^^            : *|
|* : JUST PUT THIS TAG AT THE BEGINNING OF THE FUNCTION DECLARATION.        : *|
|* :                                                                        : *|
|* : EXAMPLE:                                                               : *|
|* : ^^^^^^^                                                                : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| INLINE void function(void)                                          : *|
|* : 3| {                                                                   : *|
|* : 4|     . . .                                                           : *|
|* : 5| }                                                                   : *|
|* : 6|                                                                     : *|
|* : ______      _______                                                    : *|
|* : INLINE IS A REQUEST, NOT A GUARANTEE. THE COMPILER IS STILL FREE       : *|
|* : TO EMIT AN ORDINARY FUNCTION CALL WHEN IT DETERMINES THAT INLINING IS  : *|
|* : UNDESIRABLE OR IMPOSSIBLE.                                             : *|
|* :........................................................................: *|
|*                                                                            *|
|*                              ................                              *|
|* .............................: FORCE_INLINE :............................. *|
|* :                            ''''''''''''''''                            : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| #define FORCE_INLINE                                                : *|
|* : 3|                                                                     : *|
|* : ____________                                                           : *|
|* : FORCE_INLINE IS INTENDED FOR FUNCTIONS WHERE INLINING IS               : *|
|* : PARTICULARLY DESIRABLE.                                                : *|
|* :                                                                        : *|
|* : WHERE SUPPORTED, IT USES THE COMPILER'S STRONGEST PRACTICAL INLINE     : *|
|* : MECHANISM. FOR EXAMPLE, MSVC MAY USE <__forceinline>, WHILE GCC AND    : *|
|* : CLANG MAY USE __attribute__((always_inline)).                          : *|
|* :               ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^                           : *|
|* : EXAMPLE:                                                               : *|
|* : ^^^^^^^                                                                : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| FORCE_INLINE int function(int a, int b)                             : *|
|* : 3| {                                                                   : *|
|* : 4|     return (a + b);                                                 : *|
|* : 5| }                                                                   : *|
|* : 6|                                                                     : *|
|* :        ______  ____________                                            : *|
|* : UNLIKE INLINE, FORCE_INLINE COMMUNICATES THAT THE PROGRAMMER           : *|
|* : CONSIDERS INLINING ESPECIALLY IMPORTANT.                               : *|
|* :            ____________                                                : *|
|* : HOWEVER, **FORCE_INLINE IS STILL NOT AN ABSOLUTE GUARANTEE**. THE      : *|
|* : COMPILER CAN REJECT OR IGNORE AN AGGRESSIVE INLINE REQUEST IN          : *|
|* : SITUATIONS WHERE INLINING IS IMPOSSIBLE, INCOMPATIBLE WITH THE CURRENT : *|
|* : COMPILATION MODE, OR OTHERWISE UNSUPPORTED.                            : *|
|* :     ____________                                                       : *|
|* : USE FORCE_INLINE SPARINGLY. OVERUSING IT CAN INCREASE EXECUTABLE       : *|
|* : SIZE, INCREASE INSTRUCTION-CACHE PRESSURE, AND SOMETIMES MAKE          : *|
|* : PERFORMANCE WORSE RATHER THAN BETTER.                                  : *|
|* :........................................................................: *|
|*                                                                            *|
|*    ________________________                                                *|
|*  _| INLINE VS FORCE_INLINE |_____________________________________________  *|
|* | '""""""""""""""""""""""""'                                             | *|
|* |       _________________________________________________________        | *|
|* |      | MACRO          | PURPOSE                   | STRENGTH   |       | *|
|* |      |================|===========================|============|       | *|
|* |      | <INLINE>       | REQUEST ORDINARY INLINING | NORMAL     |       | *|
|* |      |----------------|---------------------------|------------|       | *|
|* |      | <FORCE_INLINE> | STRONGLY REQUEST INLINING | AGGRESSIVE |       | *|
|* |      |________________|___________________________|____________|       | *|
|* |                                                                        | *|
|* | IN GENERAL:                                                            | *|
|* |                                                                        | *|
|* |  v [C LANGUAGE]                                                        | *|
|* | 1|                                                                     | *|
|* | 2| INLINE int normal_function(void)                                    | *|
|* | 3| {                                                                   | *|
|* | 4|     . . .                                                           | *|
|* | 5| }                                                                   | *|
|* | 6|                                                                     | *|
|* |                                                                        | *|
|* | SHOULD BE PREFERRED WHEN THE FUNCTION IS SIMPLY A GOOD CANDIDATE FOR   | *|
|* | INLINING.                                                              | *|
|* |                                                                        | *|
|* | USE:                                                                   | *|
|* |                                                                        | *|
|* |  v [C LANGUAGE]                                                        | *|
|* | 1|                                                                     | *|
|* | 2| FORCE_INLINE int performance_critical_function(void)                | *|
|* | 3| {                                                                   | *|
|* | 4|     . . .                                                           | *|
|* | 5| }                                                                   | *|
|* | 6|                                                                     | *|
|* |                                                                        | *|
|* | WHEN YOU HAVE A SPECIFIC REASON TO STRONGLY ENCOURAGE INLINING.        | *|
|* |                                                                        | *|
|* |________________________________________________________________________| *|
|*                                                                            *|
|*    ___________________                                                     *|
|*  _| HOW NOT TO USE IT |__________________________________________________  *|
|* | '"""""""""""""""""""'                                                  | *|
|* |                                                                        | *|
|* | THERE ARE NO UNIVERSAL RULES SAYING THAT AN INLINE FUNCTION <CANNOT>   | *|
|* | CONTAIN PARTICULAR C OR C++ CONSTRUCTS. MOST OF THE FOLLOWING          | *|
|* | CONSTRUCTS ARE LEGAL.                                                  | *|
|* |                                                                        | *|
|* | THE IMPORTANT QUESTION IS WHETHER THEY MAKE INLINING IMPOSSIBLE,       | *|
|* | UNDESIRABLE, COMPILER-DEPENDENT, OR LESS USEFUL.                       | *|
|* |                                                                        | *|
|* | 1. **DON'T ASSUME static inline PREVENTS INLINING.**                   | *|
|* |                   ^^^^^^^^^^^^^                                        | *|
|* | static inline DOES NOT CANCEL THE EFFECT OF INLINE.                    | *|
|* | ^^^^^^^^^^^^^      ^^^                      ^^^^^^                     | *|
|* | IN FACT, <static inline> IS OFTEN USEFUL FOR FUNCTIONS DEFINED IN      | *|
|* | HEADERS BECAUSE IT GIVES THE FUNCTION INTERNAL LINKAGE.                | *|
|* |                                                                        | *|
|* | FOR EXAMPLE:                                                           | *|
|* |                                                                        | *|
|* |  v [C LANGUAGE]                                                        | *|
|* | 1|                                                                     | *|
|* | 2| static INLINE int test(void)                                        | *|
|* | 3| {                                                                   | *|
|* | 4|     return (15 + 42);                                               | *|
|* | 5| }                                                                   | *|
|* | 6|                                                                     | *|
|* |                                                                        | *|
|* | IS PERFECTLY VALID ON COMPILERS SUPPORTING THE CORRESPONDING INLINE    | *|
|* | SEMANTICS.                                                             | *|
|* |          _____________                                                 | *|
|* | HOWEVER, static inline HAS DIFFERENT LINKAGE SEMANTICS FROM A          | *|
|* | NON-STATIC INLINE FUNCTION. WHETHER IT IS APPROPRIATE DEPENDS ON HOW   | *|
|* | THE FUNCTION IS DECLARED AND WHERE THE HEADER IS USED.                 | *|
|* |             ______                                                     | *|
|* | **DON'T USE static MERELY BECAUSE YOU THINK IT MAKES A FUNCTION        | *|
|* | INLINE FASTER.** IT DOES NOT.                                          | *|
|* |                                                                        | *|
|* | 2. DON'T ASSUME EVERY FUNCTION CAN BE COMPLETELY INLINED.              | *|
|* |    ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^              | *|
|* | SOME FUNCTIONS ARE SIMPLY POOR CANDIDATES FOR INLINING.                | *|
|* |                                                                        | *|
|* | FOR EXAMPLE:                                                           | *|
|* |                                                                        | *|
|* |   v [C LANGUAGE]                                                       | *|
|* |  1|                                                                    | *|
|* |  2| INLINE void test(void)                                             | *|
|* |  3| {                                                                  | *|
|* |  4|     LAYER:                                                         | *|
|* |  5|                                                                    | *|
|* |  6|     . . .                                                          | *|
|* |  7|                                                                    | *|
|* |  8|     goto LAYER;                                                    | *|
|* |  9| }                                                                  | *|
|* | 10|                                                                    | *|
|* |                                                                        | *|
|* | goto ITSELF DOES NOT MAKE AN INLINE FUNCTION INVALID.                  | *|
|* | ^^^^             ^^^                                                   | *|
|* | HOWEVER, COMPLICATED CONTROL FLOW CAN MAKE OPTIMISATION AND INLINING   | *|
|* | MORE DIFFICULT, ESPECIALLY WHEN COMBINED WITH OTHER CONSTRUCTS.        | *|
|* |                                                                        | *|
|* | THE SAME APPLIES TO LARGE FUNCTIONS:                                   | *|
|* |                                                                        | *|
|* |  v [C LANGUAGE]                                                        | *|
|* | 1|                                                                     | *|
|* | 2| FORCE_INLINE void enormous_function(void)                           | *|
|* | 3| {                                                                   | *|
|* | 4|     . . .                                                           | *|
|* | 5|     // Hundreds or thousands of lines of code...                    | *|
|* | 6| }                                                                   | *|
|* | 7|                                                                     | *|
|* |                                                                        | *|
|* | FORCING A HUGE FUNCTION TO BE INLINED EVERYWHERE CAN MAKE THE          | *|
|* | RESULTING PROGRAM LARGER AND POTENTIALLY SLOWER.                       | *|
|* |                                                                        | *|
|* | 3. STATIC LOCAL VARIABLES ARE NOT INHERENTLY FORBIDDEN.                | *|
|* |    ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^                | *|
|* | A STATIC LOCAL VARIABLE CAN LEGALLY EXIST INSIDE AN INLINE FUNCTION IN | *|
|* | MANY C AND C++ CONTEXTS:                                               | *|
|* |                                                                        | *|
|* |  v [C LANGUAGE]                                                        | *|
|* | 1|                                                                     | *|
|* | 2| INLINE int test(void)                                               | *|
|* | 3| {                                                                   | *|
|* | 4|     static int dog;                                                 | *|
|* | 5|                                                                     | *|
|* | 6|     return (++dog);                                                 | *|
|* | 7| }                                                                   | *|
|* | 8|                                                                     | *|
|* |                                      _____________________________     | *|
|* | HOWEVER, STATIC LOCAL VARIABLES HAVE PERSISTENT STORAGE AND SHARED     | *|
|* | STATE, WHICH MAY MAKE THE FUNCTION BEHAVE VERY DIFFERENTLY FROM A      | *|
|* | SIMPLE, SIDE-EFFECT-FREE INLINE FUNCTION.                              | *|
|* |                                                                        | *|
|* | THEY CAN ALSO INTERACT WITH LANGUAGE-SPECIFIC INLINE AND LINKAGE       | *|
|* | RULES.                                                                 | *|
|* |                                                                        | *|
|* | THEREFORE, AVOID STATIC LOCAL VARIABLES IN SMALL UTILITY FUNCTIONS     | *|
|* | UNLESS THEIR PERSISTENT STATE IS INTENTIONAL.                          | *|
|* |                                                                        | *|
|* | 4. RECURSION CANNOT GENERALLY BE COMPLETELY INLINED.                   | *|
|* |    ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^                   | *|
|* | AN INLINE FUNCTION CAN CALL ITSELF:                                    | *|
|* |                                                                        | *|
|* |  v [C LANGUAGE]                                                        | *|
|* | 1|                                                                     | *|
|* | 2| INLINE int factorial(int a)                                         | *|
|* | 3| {                                                                   | *|
|* | 4|     if (a <= 1)                                                     | *|
|* | 5|         return (1);                                                 | *|
|* | 6|                                                                     | *|
|* | 7|     return (a * factorial(a - 1));                                  | *|
|* | 8| }                                                                   | *|
|* | 9|                                                                     | *|
|* |                                                                        | *|
|* | THIS IS LEGAL.                                                         | *|
|* |                                                                        | *|
|* | HOWEVER, A RECURSIVE CALL CANNOT NORMALLY BE EXPANDED INDEFINITELY.    | *|
|* | EVENTUALLY THE COMPILER MUST LEAVE A FUNCTION CALL, TRANSFORM THE      | *|
|* | RECURSION, OR OTHERWISE HANDLE IT WITHOUT FULLY INLINING EVERY         | *|
|* | RECURSIVE INVOCATION.                                                  | *|
|* |                                                                        | *|
|* | THEREFORE, INLINE DOES NOT MEAN:                                       | *|
|* |            ^^^^^^      ^^^                                             | *|
|* | "EVERY CALL MUST DISAPPEAR."                                           | *|
|* |                                                                        | *|
|* | RECURSIVE FUNCTIONS ARE GENERALLY POOR CANDIDATES FOR FORCE_INLINE.    | *|
|* |                                                       ^^^^^^^^^^^^     | *|
|* | 5. VARIADIC FUNCTIONS MAY HAVE COMPILER-SPECIFIC LIMITATIONS.          | *|
|* |    ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^          | *|
|* | A VARIADIC FUNCTION SUCH AS:                                           | *|
|* |                                                                        | *|
|* |  v [C LANGUAGE]                                                        | *|
|* | 1|                                                                     | *|
|* | 2| INLINE void inline_test(int a, ...)                                 | *|
|* | 3| {                                                                   | *|
|* | 4|     va_list list;                                                   | *|
|* | 5|                                                                     | *|
|* | 6|     . . .                                                           | *|
|* | 7| }                                                                   | *|
|* | 8|                                                                     | *|
|* |                                                                        | *|
|* | IS NOT UNIVERSALLY FORBIDDEN FROM BEING INLINE.                        | *|
|* |                                                                        | *|
|* | HOWEVER, VARIADIC FUNCTIONS CAN BE MORE COMPLICATED FOR COMPILERS TO   | *|
|* | OPTIMISE, AND THEIR EXACT INTERACTION WITH INLINE SEMANTICS CAN DEPEND | *|
|* | ON THE COMPILER AND LANGUAGE STANDARD.                                 | *|
|* |                                  ____________                          | *|
|* | IN PARTICULAR, DON'T ASSUME THAT FORCE_INLINE CAN MAKE EVERY           | *|
|* | VARIADIC FUNCTION DISAPPEAR COMPLETELY AT EVERY CALL SITE.             | *|
|* |                                                                        | *|
|* | IF A FUNCTION DOES NOT ACTUALLY NEED TO BE VARIADIC, PREFER A FIXED    | *|
|* | PARAMETER LIST.                                                        | *|
|* |                                                                        | *|
|* | 6. **DON'T MAKE EVERYTHING FORCE_INLINE.**                             | *|
|* |                            ^^^^^^^^^^^^                                | *|
|* | THIS IS PROBABLY THE MOST IMPORTANT RULE.                              | *|
|* |                                                                        | *|
|* | INLINING IS NOT AUTOMATICALLY AN OPTIMISATION.                         | *|
|* |                                                                        | *|
|* | FOR EXAMPLE:                                                           | *|
|* |                                                                        | *|
|* |  v [C LANGUAGE]                                                        | *|
|* | 1|                                                                     | *|
|* | 2| FORCE_INLINE void enormous_function(void)                           | *|
|* | 3| {                                                                   | *|
|* | 4|     . . .                                                           | *|
|* | 5| }                                                                   | *|
|* | 6|                                                                     | *|
|* |                                                                        | *|
|* | IF THIS FUNCTION IS CALLED FROM MANY DIFFERENT PLACES, FORCING ITS     | *|
|* | BODY INTO EVERY CALL SITE CAN SIGNIFICANTLY INCREASE THE SIZE OF THE   | *|
|* | GENERATED PROGRAM.                                                     | *|
|* |                                                                        | *|
|* | LARGER CODE CAN CAUSE WORSE INSTRUCTION-CACHE BEHAVIOUR AND CAN        | *|
|* | SOMETIMES MAKE THE PROGRAM SLOWER.                                     | *|
|* |                            ^^^^^^                                      | *|
|* | USE <FORCE_INLINE> WHEN THERE IS A SPECIFIC PERFORMANCE OR             | *|
|* | IMPLEMENTATION REASON FOR IT, NOT SIMPLY BECAUSE THE FUNCTION IS       | *|
|* | SMALL.                                                                 | *|
|* |    ____________________________________________________________        | *|
|* | 7. DON'T RELY ON THE SOURCE CODE TO DETERMINE THE FINAL MACHINE        | *|
|* | CODE.                                                                  | *|
|* |                                                                        | *|
|* | THIS:                                                                  | *|
|* |                                                                        | *|
|* |  v [C LANGUAGE]                                                        | *|
|* | 1|                                                                     | *|
|* | 2| INLINE int test(void)                                               | *|
|* | 3| {                                                                   | *|
|* | 4|     return (15 + 42);                                               | *|
|* | 5| }                                                                   | *|
|* | 6|                                                                     | *|
|* |                                                                        | *|
|* | DOES NOT GUARANTEE THAT THE COMPILER WILL GENERATE A FUNCTION          | *|
|* | CONTAINING THE ADDITION.                                               | *|
|* |                                                                        | *|
|* | THE COMPILER MAY INSTEAD CONSTANT-FOLD THE EXPRESSION:                 | *|
|* |                                                                        | *|
|* |  v [C LANGUAGE]                                                        | *|
|* | 1|                                                                     | *|
|* | 2| return (57);                                                        | *|
|* | 3|                                                                     | *|
|* |                                                                        | *|
|* | OR OPTIMISE THE ENTIRE CALL AWAY.                                      | *|
|* |                                                        ______          | *|
|* | LIKEWISE, A COMPILER MAY DECIDE THAT A FUNCTION MARKED INLINE SHOULD   | *|
|* | REMAIN AN ORDINARY FUNCTION CALL.                                      | *|
|* |                                                                        | *|
|* | THE FINAL MACHINE CODE DEPENDS ON THE COMPILER, TARGET ARCHITECTURE,   | *|
|* | COMPILATION OPTIONS, OPTIMISATION LEVEL, AND SURROUNDING CODE.         | *|
|* |                                                                        | *|
|* |________________________________________________________________________| *|
|*                                                                            *|
\******************************************************************************/

#ifndef INLINE_H
#define INLINE_H 202608 /* VERSION */

#ifdef __WATCOMC__ /* WATCOM C++ */
#ifndef _ENABLE_AUTODEPEND /* IF AUTO DEPENDENCY TRACKING IS OFF */
#pragma read_only_file; /* THIS FILE WON'T CHANGE DURING COMPILE TIME */
#endif /* !_ENABLE_AUTODEPEND */
#endif /* __WATCOMC__ */

#ifdef _MSC_VER /* MICROSOFT C++ */
#define INLINE __inline
#define FORCE_INLINE __forceinline
#endif /* _MSC_VER */

#ifndef INLINE
#ifdef __CC_ARM
#ifdef __ARMCC_VERSION
#if (__ARMCC_VERSION >= 6000000) /* ARM COMPILER 6 / ARMCLANG */
#define INLINE __inline
#define FORCE_INLINE INLINE __attribute__((__always_inline__))
#else /* __ARMCC_VERSION < 6000000 */
#define INLINE __inline
#define FORCE_INLINE __forceinline
#endif /* (__ARMCC_VERSION >= 6000000) */
#endif /* __ARMCC_VERSION */
#endif /* __CC_ARM */
#endif /* !INLINE */

#ifndef INLINE
#ifdef __WATCOMC__ /* OPEN WATCOM C/C++ */
#define INLINE __inline
#endif /* __WATCOMC__ */
#endif /* !INLINE */

#ifndef INLINE
#ifdef __clang__ /* CLANG / LLVM */
#define INLINE __inline__
#define FORCE_INLINE __inline__ __attribute__((__always_inline__))
#endif /* __clang__ */
#endif /* !INLINE */

#ifndef INLINE
#ifdef __TINYC__ /* TCC (TINY C COMPILER) */
#define INLINE __inline__
#endif /* __TINYC__ */
#endif /* !INLINE */

#ifndef INLINE
#ifdef __GNUC__
#if (\
	(__GNUC__ > 4) || /* IF GTR 4.X.X */\
	(\
		(__GNUC__ == 4) && /* IF EQU 4.X.X */\
		(__GNUC_MINOR__ >= 2) /* IF GEQ X.2.X */\
	)\
) /* IS GCC VERSION 4.2.X OR GREATER (MAXIMUM C99) */
#ifdef __DJGPP__
#define FORCE_INLINE __inline__ __attribute__((__gnu_inline__))
#else /* !__DJGPP__ */
#define FORCE_INLINE __inline__ __attribute__((__gnu_inline__, always_inline))
#endif /* DJGPP */
#endif /* __GNUC__ >= 4.2.X */

#define INLINE __inline__
#endif /* __GNUC__ */
#endif /* !INLINE */

#ifndef INLINE
#ifdef __cplusplus /* C++ */
#define INLINE inline
#endif /* __cplusplus */
#endif /* !INLINE */

#ifndef INLINE
#ifdef __STDC_VERSION__
#if (__STDC_VERSION__ >= 199901L) /* C99+ */
#define INLINE inline
#else /* __STDC_VERSION__ < 199901L */
#define INLINE __inline__
#endif /* __STDC_VERSION__ >= 199901L */
#endif /* __STDC_VERSION__ */
#endif /* !INLINE */

#ifndef INLINE
#define INLINE /* NOT SUPPORTED */
#endif /* !INLINE */

#ifndef FORCE_INLINE
#define FORCE_INLINE INLINE
#endif /* !FORCE_INLINE */
#endif /* !INLINE_H */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
