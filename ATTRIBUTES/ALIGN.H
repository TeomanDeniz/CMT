/******************************************************************************\
# H - ALIGN                                      #       Maximum Tension       #
################################################################################
#                                                #      -__            __-     #
# Teoman Deniz                                   #  :    :!1!-_    _-!1!:    : #
# maximum-tension.com                            #  ::                      :: #
#                                                #  :!:    : :: : :  :  ::::!: #
# +.....................++.....................+ #   :!:: :!:!1:!:!::1:::!!!:  #
# : C - Maximum Tension :: Create - 2023/07/12 : #   ::!::!!1001010!:!11!!::   #
# :---------------------::---------------------: #   :!1!!11000000000011!!:    #
# : License - AGPL-3.0  :: Update - 2026/06/16 : #    ::::!!!1!!1!!!1!!!::     #
# +.....................++.....................+ #       ::::!::!:::!::::      #
\******************************************************************************/

/******************************************************************************\
|* __________________________________________________________________________ *|
|*|                                  ALIGN                                   |*|
|*|__________________________________________________________________________|*|
|*|                                                                          |*|
|*| THIS HEADER DEFINES UTILITIES FOR MANAGING MEMORY ALIGNMENT IN THE       |*|
|*| LIBRARY.                                                                 |*|
|*|                                                                          |*|
|*| IT PROVIDES A UNION REPRESENTING THE MAXIMUM ALIGNMENT REQUIREMENTS AND  |*|
|*| MACROS FOR CALCULATING ALIGNED MEMORY ADDRESSES.                         |*|
|*|                                                                          |*|
|*| ALIGNMENT AFFECTS HOW OBJECTS ARE LAID OUT IN MEMORY.                    |*|
|*|                                                                          |*|
|*| USING THESE MACROS CHANGES                                               |*|
|*| :.. WHERE AN OBJECT MAY START IN MEMORY                                  |*|
|*| :.. HOW MUCH PADDING THE COMPILER INSERTS                                |*|
|*| :.. THE EFFECTIVE SIZE AND LAYOUT OF STRUCT TYPES                        |*|
|*| :.. THE GENERATED LOAD / STORE INSTRUCTIONS                              |*|
|*| :.. ABI COMPATIBILITY WITH OTHER CODE                                    |*|
|*|                                                                          |*|
|*| ALIGNMENT DOES NOT CHANGE                                                |*|
|*| :.. THE VALUE REPRESENTATION                                             |*|
|*| :.. THE SEMANTICS OF THE TYPE                                            |*|
|*| :.. THE LANGUAGE RULES OF C                                              |*|
|*| :.. ACCESS ORDER OR ATOMICITY                                            |*|
|*|                                                                          |*|
|*| FOR VARIABLES                                                            |*|
|*| :.. THE OBJECT ADDRESS WILL BE A MULTIPLE OF THE GIVEN ALIGNMENT         |*|
|*| :.. MISALIGNED ACCESSES ARE AVOIDED                                      |*|
|*| :.. OVER-ALIGNMENT MAY INCREASE STACK OR DATA SEGMENT SIZE               |*|
|*|                                                                          |*|
|*| FOR STRUCTS                                                              |*|
|*| :.. THE STRUCT TYPE ITSELF BECOMES ALIGNED                               |*|
|*| :.. ALL INSTANCES OF THE TYPE FOLLOW THAT ALIGNMENT                      |*|
|*| :.. sizeof(struct) MAY INCREASE DUE TO TAIL PADDING                      |*|
|*| :.. BINARY LAYOUT CHANGES → ABI BREAK IF SHARED                          |*|
|*|                                                                          |*|
|*| FOR ARRAYS                                                               |*|
|*| :.. EACH ELEMENT RESPECTS THE TYPE ALIGNMENT                             |*|
|*| :.. STRIDE MAY INCREASE                                                  |*|
|*|                                                                          |*|
|*| FOR PERFORMANCE                                                          |*|
|*| :.. PROPER ALIGNMENT ENABLES SIMD AND WIDE LOADS                         |*|
|*| :.. BAD ALIGNMENT MAY FORCE SLOW OR FAULTING ACCESSES                    |*|
|*| :.. OVER-ALIGNMENT MAY HURT CACHE DENSITY                                |*|
|*|                                                                          |*|
|*| FOR ABI                                                                  |*|
|*| :.. CHANGING ALIGNMENT CHANGES CALLING AND MEMORY CONTRACTS              |*|
|*| :.. STRUCTS PASSED ACROSS MODULES MUST MATCH ALIGNMENT EXACTLY           |*|
|*|                                                                          |*|
|*| ALLOCATORS                                                               |*|
|*| :.. ALIGNMENT ONLY APPLIES TO THE TYPE                                   |*|
|*| :.. DYNAMIC ALLOCATION MUST PROVIDE COMPATIBLE ALIGNMENT                 |*|
|*| :.. malloc IS NOT REQUIRED TO SATISFY OVER-ALIGNED TYPES                 |*|
|*|                                                                          |*|
|*| FAILURE MODES                                                            |*|
|*| :.. SILENT PADDING CHANGES                                               |*|
|*| :.. ABI MISMATCHES                                                       |*|
|*| :.. INCOMPATIBLE SERIALIZED DATA                                         |*|
|*| :.. CRASHES ON STRICT-ALIGNMENT ARCHITECTURES                            |*|
|*|                                                                          |*|
|*| ALIGNMENT IS A LAYOUT CONSTRAINT, NOT A SAFETY FEATURE.                  |*|
|*|__________________________________________________________________________|*|
|*                                                                            *|
\******************************************************************************/

/*############################################################################*\
|*#                                 CONTENTS                                 #*|
|*############################################################################*|
|* __________________________________________________________________________ *|
|*| CONTENT                                                       | DOC LINE |*|
|*|===============================================================|==========|*|
|*| #define MAX_ALIGNMENT                                         | 51       |*|
|*|---------------------------------------------------------------|----------|*|
|*| #define ALIGN_UP(VALUE)                                       | 63       |*|
|*| #define align_up(value)                                       |          |*|
|*|---------------------------------------------------------------|----------|*|
|*| #define ALIGN_VARIABLE(VALUE)                                 | 83       |*|
|*| #define align_variable(value)                                 |          |*|
|*|---------------------------------------------------------------|----------|*|
|*| #define ALIGN_STRUCT_PUSH(VALUE)                              | 104      |*|
|*| #define align_struct_push(value)                              |          |*|
|*|---------------------------------------------------------------|----------|*|
|*| #define ALIGN_STRUCT_POP(VALUE)                               | 104      |*|
|*| #define align_struct_pop(value)                               |          |*|
|*|_______________________________________________________________|__________|*|
|*                                                                            *|
|*                             .................                              *|
|* ............................: MAX_ALIGNMENT :............................. *|
|* :                           '''''''''''''''''                            : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| #define MAX_ALIGNMENT                                               : *|
|* : 3|                                                                     : *|
|* :                                                                        : *|
|* : RETURNS THE SIZE OF MAXIMUM REQUIRED ALIGNMENT SUPPORTED BUT COMPILER  : *|
|* : OR OPERATING SYSTEM.                                                   : *|
|* :........................................................................: *|
|*                                                                            *|
|*                                ............                                *|
|* ...............................: ALIGN_UP :............................... *|
|* :                              ''''''''''''                              : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| #define ALIGN_UP(VALUE)                                             : *|
|* : 3| #define align_up(value)                                             : *|
|* : 4|                                                                     : *|
|* :        _____                               _____________               : *|
|* : ROUNDS VALUE UP TO THE NEAREST MULTIPLE OF MAX_ALIGNMENT TO ENSURE     : *|
|* : PROPER MEMORY ALIGNMENT.                                               : *|
|* :                                                                        : *|
|* : EXAMPLE:                                                               : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| size_t offset = ALIGN_UP(current_offset);                           : *|
|* : 3|                                                                     : *|
|* :........................................................................: *|
|*                                                                            *|
|*                            ..................                              *|
|* ...........................: ALIGN_VARIABLE :............................. *|
|* :                          ''''''''''''''''''                            : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| #define ALIGN_VARIABLE(VALUE)                                       : *|
|* : 3| #define align_variable(value)                                       : *|
|* : 4|                                                                     : *|
|* :          _____                                                         : *|
|* : ROUNDS A VALUE UP TO THE NEXT MULTIPLE OF THE MAXIMUM REQUIRED         : *|
|* : ALIGNMENT FOR A VARIABLE.                                              : *|
|* :                                                                        : *|
|* : EXAMPLE:                                                               : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| ALIGN_VARIABLE(16) int var;                                         : *|
|* : 3| align_variable(16) int var = 42;                                    : *|
|* : 4|                                                                     : *|
|* :........................................................................: *|
|*                                                                            *|
|*                  .......................................                   *|
|* .................: ALIGN_STRUCT_PUSH, ALIGN_STRUCT_POP :.................. *|
|* :                '''''''''''''''''''''''''''''''''''''''                 : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| #define ALIGN_STRUCT_PUSH(VALUE)                                    : *|
|* : 3| #define align_struct_push(value)                                    : *|
|* : 4|                                                                     : *|
|* : 5| #define ALIGN_STRUCT_POP(VALUE)                                     : *|
|* : 6| #define align_struct_pop(value)                                     : *|
|* : 7|                                                                     : *|
|* :          _____                                                         : *|
|* : ROUNDS A VALUE UP TO THE NEXT MULTIPLE OF THE MAXIMUM REQUIRED         : *|
|* : ALIGNMENT FOR THE START OF STRUCT.                                     : *|
|* :                                                                        : *|
|* : EXAMPLES:                                                              : *|
|* :                                                                        : *|
|* :   v [C LANGUAGE]                                                       : *|
|* :  1|                                                                    : *|
|* :  2| ALIGN_STRUCT_PUSH(MAX_ALIGNMENT)                                   : *|
|* :  3| struct s_struct                                                    : *|
|* :  4| {                                                                  : *|
|* :  5|     . . .                                                          : *|
|* :  6| } ALIGN_STRUCT_POP(MAX_ALIGNMENT);                                 : *|
|* :  7|                                                                    : *|
|* :  8| align_struct_push(MAX_ALIGNMENT)                                   : *|
|* :  9| typedef struct s_struct                                            : *|
|* : 10| {                                                                  : *|
|* : 11|     . . .                                                          : *|
|* : 12| } align_struct_pop(MAX_ALIGNMENT) t_struct;                        : *|
|* : 13|                                                                    : *|
|* :........................................................................: *|
|*                                                                            *|
\******************************************************************************/

#ifndef ALIGN_H
#define ALIGN_H 202606 /* VERSION */

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

/* **************************** [v] INCLUDES [v] **************************** */
#include "../KEYWORDS/TYPES.H"
/******* """""""""""""""""""""
 * #define SUPPORTED__FLOAT128
 * typedef PTR;
 * typedef VAR;
 * typedef FLOAT128;
 */
/* **************************** [^] INCLUDES [^] **************************** */

union U_MAX_ALIGN
{
	PTR			P; /* VOID PTR */
	VAR			V; /* INT VOID PTR */
#ifdef SUPPORTED__FLOAT128
	FLOAT128	F128; /* LONG DOUBLE */
#endif /* SUPPORTED__FLOAT128 */
};

#define MAX_ALIGNMENT sizeof(union U_MAX_ALIGN)
#define ALIGN_UP(VALUE) (((VALUE) + (MAX_ALIGNMENT - 1)) & ~(MAX_ALIGNMENT - 1))

#ifdef _MSC_VER /* MICROSOFT C++ */
#define ALIGN_VARIABLE(__ALIGN_VARIABLE__) __declspec(align(__ALIGN_VARIABLE__))
#define ALIGN_STRUCT_PUSH(__ALIGN_STRUCT_PUSH__)
#define ALIGN_STRUCT_POP(__ALIGN_STRUCT_POP__) \
	ALIGN_VARIABLE(__ALIGN_STRUCT_POP__)
#else /* !_MSC_VER */
#ifdef __INTEL_COMPILER
#if (__INTEL_COMPILER >= 800) /* INTEL COMPILER 8.0+ */
#define LOCALMACRO__INTEL_COMPILER
#endif /* __INTEL_COMPILER >= 800 */
#endif /* __INTEL_COMPILER */
#ifdef LOCALMACRO__INTEL_COMPILER
#undef LOCALMACRO__INTEL_COMPILER
#define ALIGN_VARIABLE(__ALIGN_VARIABLE__) \
	__attribute__((aligned(__ALIGN_VARIABLE__)))
#define ALIGN_STRUCT_PUSH(__ALIGN_STRUCT_PUSH__) \
	ALIGN_VARIABLE(__ALIGN_STRUCT_PUSH__)
#define ALIGN_STRUCT_POP(__ALIGN_STRUCT_POP__)
#else /* !LOCALMACRO__INTEL_COMPILER */
#ifdef __GNUC__
#if (\
	(__GNUC__ > 2) || \
	(__GNUC__ == 2 && __GNUC_MINOR__ > 7) || \
	(__GNUC__ == 2 && __GNUC_MINOR__ == 7 && __GNUC_PATCHLEVEL__ >= 1)\
) /* GCC 2.7.1+ (MINIMUM C90) */
#define LOCALMACRO__GCC_COMPILER
#endif /* __GNUC__ >= 2.7.1 */
#endif /* __GNUC__ */
#ifdef LOCALMACRO__GCC_COMPILER
#undef LOCALMACRO__GCC_COMPILER
#define ALIGN_VARIABLE(__ALIGN_VARIABLE__) \
	__attribute__((aligned(__ALIGN_VARIABLE__)))
#define ALIGN_STRUCT_PUSH(__ALIGN_STRUCT_PUSH__) \
	ALIGN_VARIABLE(__ALIGN_STRUCT_PUSH__)
#define ALIGN_STRUCT_POP(__ALIGN_STRUCT_POP__)
#else /* !LOCALMACRO__GCC_COMPILER */
#define ALIGN_VARIABLE(__ALIGN_VARIABLE__)
#define ALIGN_STRUCT_PUSH(__ALIGN_STRUCT_PUSH__)
#define ALIGN_STRUCT_POP(__ALIGN_STRUCT_POP__)
#endif /* LOCALMACRO__GCC_COMPILER */
#endif /* LOCALMACRO__INTEL_COMPILER */
#endif /* _MSC_VER */

#define align_variable ALIGN_VARIABLE
#define align_struct_push ALIGN_STRUCT_PUSH
#define align_struct_pop ALIGN_STRUCT_POP
#define align_up(value) ALIGN_UP(value)

/* ************************ [v] TI CGT CCS (POP) [v] ************************ */
#ifdef __TI_COMPILER_VERSION__
#pragma diag_pop /* TI CGT CCS COMPILER DIRECTIVES */
#endif /* __TI_COMPILER_VERSION__ */
/* ************************ [^] TI CGT CCS (POP) [^] ************************ */

#endif /* !ALIGN_H */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
