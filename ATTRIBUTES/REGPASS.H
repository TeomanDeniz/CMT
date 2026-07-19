/******************************************************************************\
# H - REGPASS                                    #       Maximum Tension       #
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
|*|                                 REGPASS                                  |*|
|*|__________________________________________________________________________|*|
|*|                     _______     ________                                 |*|
|*| COMBINATION OF BOTH REGPARM AND FASTCALL.                                |*|
|*|                                                                          |*|
|*| THE PURPOSE OF THIS ADDON EXIST IS ALWAYS TRYING TO PASS PARAMETERS AS   |*|
|*| REGISTERS. OR AT LEAST TWO OR THREE OF THEM.                             |*|
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
|*| #define REGPASS                                               | 47       |*|
|*| #define regpass                                               |          |*|
|*|_______________________________________________________________|__________|*|
|*                                                                            *|
|*                                ...........                                 *|
|* ...............................: REGPASS :................................ *|
|* :                              '''''''''''                               : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| #define REGPASS                                                     : *|
|* : 3| #define regpass                                                     : *|
|* : 4|                                                                     : *|
|* :                         ______________________________                 : *|
|* : USING ONE OF AVALIABLE "PASSING ARGUMENTS VIA REGISTER" METHOD, ELSE   : *|
|* : DOES NOTHING.                                                          : *|
|* :  ____________ ___________________________                              : *|
|* : | REGPASS    | REGISTER USAGE (IN ORDER) |                             : *|
|* : |============|===========================|                             : *|
|* : | REGPARM(3) | EAX, EDX, ECX             |                             : *|
|* : |------------|---------------------------|                             : *|
|* : | FASTCALL   | ECX, EDX                  |                             : *|
|* : |____________|___________________________|                             : *|
|* :                                                                        : *|
|* : EXAMPLES:                                                              : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| int regpass func(int a, void *b);                                   : *|
|* : 3|                                                                     : *|
|* :                                                                        : *|
|* : PROTOTYPE:                                                             : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| extern int REGPASS func(int, int, void *);                          : *|
|* : 3|                                                                     : *|
|* :                                                                        : *|
|* : FUNCTION POINTER:                                                      : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| int (regpass *test)(int, int, void *);                              : *|
|* : 3|                                                                     : *|
|* :                                                                        : *|
|* : FUNCTION POINTER TYPE CASTING:                                         : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| test = (int (REGPASS *)(int))pointer;                               : *|
|* : 3|                                                                     : *|
|* :........................................................................: *|
|*                                                                            *|
\******************************************************************************/

#ifndef REGPASS_H
#define REGPASS_H 202606 /* VERSION */

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

/* **************************** [v] INCLUDES [v] **************************** */
#include "REGPARM.H"
/******* """""""""""
 * #define REGPARM(ARGS)
 * #define IS__REGPARM__SUPPORTED
 */
#include "FASTCALL.H"
/******* """"""""""""
 * #define FASTCALL
 * #define IS__FASTCALL__SUPPORTED
 */
/* **************************** [^] INCLUDES [^] **************************** */

#ifdef IS__REGPARM__SUPPORTED
#define REGPASS REGPARM(3)
#else /* !IS__REGPARM__SUPPORTED */
#ifdef IS__FASTCALL__SUPPORTED
#define REGPASS FASTCALL
#else /* !IS__FASTCALL__SUPPORTED */
#define REGPASS
#endif /* IS__FASTCALL__SUPPORTED */
#endif /* IS__REGPARM__SUPPORTED */

#define regpass REGPASS

/* ************************ [v] TI CGT CCS (POP) [v] ************************ */
#ifdef __TI_COMPILER_VERSION__
#pragma diag_pop /* TI CGT CCS COMPILER DIRECTIVES */
#endif /* __TI_COMPILER_VERSION__ */
/* ************************ [^] TI CGT CCS (POP) [^] ************************ */

#endif /* !REGPASS_H */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
