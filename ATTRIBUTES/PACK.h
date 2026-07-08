/******************************************************************************\
# H - PACK                                       #       Maximum Tension       #
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
|*|                                   PACK                                   |*|
|*|__________________________________________________________________________|*|
|*|                                                                          |*|
|*| THIS HEADER DEFINES MACROS THAT REMOVE PADDING BYTES FROM STRUCTURES,    |*|
|*| REDUCING THEIR MEMORY FOOTPRINT.                                         |*|
|*|                                                                          |*|
|*| DO NOT USE THIS BY DEFAULT. PACKED STRUCTURES SHOULD BE LIMITED TO CASES |*|
|*| WHERE THE MEMORY LAYOUT MUST BE EXACT (BINARY FORMATS, NETWORK           |*|
|*| PROTOCOLS, FILE I/O). REMOVING PADDING CAN INTRODUCE UNALIGNED MEMORY    |*|
|*| ACCESS AND MEASURABLE PERFORMANCE PENALTIES.                             |*|
|*|                                                                          |*|
|*| BEFORE THE SOLUTION, THE PROBLEM:                                        |*|
|*|                                                                          |*|
|*| CPUS ACCESS MEMORY MORE EFFICIENTLY WHEN DATA IS ALIGNED TO NATURAL      |*|
|*| BOUNDARIES (TYPICALLY 1, 2, 4, 8, 16 BYTES). TO SATISFY THESE            |*|
|*| REQUIREMENTS, COMPILERS AUTOMATICALLY INSERT PADDING BYTES INTO          |*|
|*| STRUCTURES.                                                              |*|
|*|                                                                          |*|
|*| EXAMPLES:                                                                |*|
|*|          ___                                                             |*|
|*| A SINGLE int IS NATURALLY ALIGNED-NO PADDING NEEDED:                     |*|
|*|                                                                          |*|
|*|  v [C LANGUAGE]                                                          |*|
|*| 1|                                                                       |*|
|*| 2| struct test                                                           |*|
|*| 3| {                                                                     |*|
|*| 4|     int a;                                                            |*|
|*| 5| }; // sizeof = 4 BYTES                                                |*|
|*| 6|                                                                       |*|
|*|                                                                          |*|
|*| PADDING IS INSERTED SO THE STRUCTURE SIZE REMAINS ALIGNED:               |*|
|*|                                                                          |*|
|*|  v [C LANGUAGE]                                                          |*|
|*| 1|                                                                       |*|
|*| 2| struct test                                                           |*|
|*| 3| {                                                                     |*|
|*| 4|     int a;  // 4                                                      |*|
|*| 5|     char b; // 1 + 3 (4)                                              |*|
|*| 6| }; // sizeof = 8 BYTES (3 BYTES PADDING)                              |*|
|*| 7|                                                                       |*|
|*|                                                                          |*|
|*| POINTER ALIGNMENT FORCES ADDITIONAL PADDING:                             |*|
|*|                                                                          |*|
|*|  v [C LANGUAGE]                                                          |*|
|*| 1|                                                                       |*|
|*| 2| struct test                                                           |*|
|*| 3| {                                                                     |*|
|*| 4|     void *a; // 8                                                     |*|
|*| 5|     char b;  // 1 + 7 (8)                                             |*|
|*| 6| }; // sizeof = 16 BYTES (7 BYTES PADDING)                             |*|
|*| 7|                                                                       |*|
|*|                                                                          |*|
|*| TRAILING MEMBERS ARE PADDED TO PRESERVE ALIGNMENT RULES:                 |*|
|*|                                                                          |*|
|*|  v [C LANGUAGE]                                                          |*|
|*| 1|                                                                       |*|
|*| 2| struct test                                                           |*|
|*| 3| {                                                                     |*|
|*| 4|     void *a; // 8                                                     |*|
|*| 5|     void *b; // 8                                                     |*|
|*| 6|     short c; // 2 + 6 (8)                                             |*|
|*| 7| }; // sizeof = 24 BYTES (6 BYTES PADDING)                             |*|
|*| 8|                                                                       |*|
|*|                                                                          |*|
|*| LARGE ALIGNMENT REQUIREMENTS CAN WASTE SIGNIFICANT SPACE:                |*|
|*|                                                                          |*|
|*|  v [C LANGUAGE]                                                          |*|
|*| 1|                                                                       |*|
|*| 2| struct test                                                           |*|
|*| 3| {                                                                     |*|
|*| 4|     long double a; // 16                                              |*|
|*| 5|     char b;        // 1 + 15 (16)                                     |*|
|*| 6| }; // sizeof = 32 BYTES (15 BYTES PADDING... WHAT A WASTE)            |*|
|*| 7|                                                                       |*|
|*|                                                                          |*|
|*| PADDING EXISTS TO KEEP MEMORY ACCESSES ALIGNED AND FAST.                 |*|
|*|                                                                          |*|
|*| IF THE STRUCTURE IS PACKED:                                              |*|
|*|                                                                          |*|
|*|  v [C LANGUAGE]                                                          |*|
|*| 1|                                                                       |*|
|*| 2| PRAGMA_PACK_PUSH                                                      |*|
|*| 3| struct test                                                           |*|
|*| 4| {                                                                     |*|
|*| 5|     int a;                                                            |*|
|*| 6|     char b;                                                           |*|
|*| 7| } PACK;                                                               |*|
|*| 8| PRAGMA_PACK_POP                                                       |*|
|*| 9|                                                                       |*|
|*| ___________________                                                      |*|
|*| sizeof(struct test) BECOMES 5 BYTES.                                     |*|
|*|                                                                          |*|
|*| THIS ELIMINATES PADDING BUT MAY CAUSE UNALIGNED ACCESSES, WHICH CAN BE   |*|
|*| SLOWER OR EVEN FAULT ON SOME ARCHITECTURES.                              |*|
|*|                                                                          |*|
|*| Sharing packed structures across APIs, modules, or hot paths is a common |*|
|*| source of unnecessary performance loss. Use them deliberately, not       |*|
|*| habitually.                                                              |*|
|*|__________________________________________________________________________|*|
|*                                                                            *|
\******************************************************************************/

/*############################################################################*\
|*#                                 CONTENTS                                 #*|
|*############################################################################*|
|* __________________________________________________________________________ *|
|*| CONTENT                                                       | DOC LINE |*|
|*|===============================================================|==========|*|
|*| #define PRAGMA_PACK_PUSH                                      | 133      |*|
|*|---------------------------------------------------------------|----------|*|
|*| #define PRAGMA_PACK_POP                                       | 155      |*|
|*|---------------------------------------------------------------|----------|*|
|*| #define PACK                                                  | 176      |*|
|*|_______________________________________________________________|__________|*|
|*                                                                            *|
|*                            ....................                            *|
|* ...........................: PRAGMA_PACK_PUSH :........................... *|
|* :                          ''''''''''''''''''''                          : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| #define PRAGMA_PACK_PUSH                                            : *|
|* : 3|                                                                     : *|
|* :                                                                        : *|
|* : BEGINS A STRUCTURE PACKING SCOPE BY PUSHING THE CURRENT ALIGNMENT AND  : *|
|* : SETTING PACKED ALIGNMENT FOR SUBSEQUENT DECLARATIONS.                  : *|
|* :                                                                        : *|
|* : EXAMPLE:                                                               : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| PRAGMA_PACK_PUSH                                                    : *|
|* : 3| struct test                                                         : *|
|* : 4| {                                                                   : *|
|* : 5|     . . .                                                           : *|
|* : 6|                                                                     : *|
|* :........................................................................: *|
|*                                                                            *|
|*                            ...................                             *|
|* ...........................: PRAGMA_PACK_POP :............................ *|
|* :                          '''''''''''''''''''                           : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| #define PRAGMA_PACK_POP                                             : *|
|* : 3|                                                                     : *|
|* :                                                                        : *|
|* : ENDS A STRUCTURE PACKING SCOPE BY RESTORING THE PREVIOUS ALIGNMENT     : *|
|* : PUSHED BY PRAGMA_PACK_PUSH.                                            : *|
|* :           ^^^^^^^^^^^^^^^^                                             : *|
|* : EXAMPLE:                                                               : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2|     . . .                                                           : *|
|* : 3| };                                                                  : *|
|* : 4| PRAGME_PACK_POP                                                     : *|
|* : 5|                                                                     : *|
|* :........................................................................: *|
|*                                                                            *|
|*                                  ........                                  *|
|* .................................: PACK :................................. *|
|* :                                ''''''''                                : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| #define PACK                                                        : *|
|* : 3|                                                                     : *|
|* :                                                                        : *|
|* : APPLIES THE PACKED ATTRIBUTE TO A STRUCTURE DECLARATION, FORCING       : *|
|* : MINIMAL ALIGNMENT AND PREVENTING PADDING WITHIN THE STRUCTURE.         : *|
|* :                       ________________   _______________               : *|
|* : MUST BE USED INSIDE A PRAGMA_PACK_PUSH / PRAGMA_PACK_POP SCOPE.        : *|
|* :                                                                        : *|
|* : EXAMPLES:                                                              : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| PRAGMA_PACK_PUSH                                                    : *|
|* : 3| struct test                                                         : *|
|* : 4| {                                                                   : *|
|* : 5|     . . .                                                           : *|
|* : 6| } PACK;                                                             : *|
|* : 7| PRAGMA_PACK_POP                                                     : *|
|* : 8|                                                                     : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| PRAGMA_PACK_PUSH                                                    : *|
|* : 3| typedef struct test                                                 : *|
|* : 4| {                                                                   : *|
|* : 5|     . . .                                                           : *|
|* : 6| } PACK t_test;                                                      : *|
|* : 7| PRAGMA_PACK_POP                                                     : *|
|* : 8|                                                                     : *|
|* :........................................................................: *|
|*                                                                            *|
\******************************************************************************/

#ifndef PACK_H
#define PACK_H 202606 /* VERSION */

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

#ifdef _MSC_VER /* MICROSOFT C++ */
#define PRAGMA_PACK_PUSH(PRAGMA_PACK_PUSH_MSC_VER) \
	__pragma(pack(push, PRAGMA_PACK_PUSH_MSC_VER));
#define PRAGMA_PACK_POP __pragma(pack(pop));
#define PACK /* EMPTY */
#else /* !_MSC_VER */
#ifdef __GNUC__
#if (\
	(__GNUC__ > 2) || \
	(__GNUC__ == 2 && __GNUC_MINOR__ > 7) || \
	(__GNUC__ == 2 && __GNUC_MINOR__ == 7 && __GNUC_PATCHLEVEL__ >= 1)\
) /* GCC 2.7.1+ (MINIMUM C90) */
#ifdef __TINYC__ /* TCC */
#define PRAGMA_PACK_PUSH /* EMPTY */
#define PRAGMA_PACK_POP /* EMPTY */
#define PACK __attribute__((packed))
#else /* !__TINYC__ */
#define PRAGMA_PACK_PUSH _Pragma("pack(push, 1)")
#define PRAGMA_PACK_POP _Pragma("pack(pop)");
#define PACK __attribute__((packed))
#endif /* __TINYC__ */
#else /* __GNUC__ < 2.7.1 */
#define PRAGMA_PACK_PUSH /* EMPTY */
#define PRAGMA_PACK_POP /* EMPTY */
#define PACK /* EMPTY */
#endif /* __GNUC__ >= 2.7.1 */
#endif /* __GNUC__ */
#endif /* _MSC_VER */

/* ************************ [v] TI CGT CCS (POP) [v] ************************ */
#ifdef __TI_COMPILER_VERSION__
#pragma diag_pop /* TI CGT CCS COMPILER DIRECTIVES */
#endif /* __TI_COMPILER_VERSION__ */
/* ************************ [^] TI CGT CCS (POP) [^] ************************ */

#endif /* !PACK_H */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
