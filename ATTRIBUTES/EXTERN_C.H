/******************************************************************************\
# H - EXTERN_C                                   #       Maximum Tension       #
################################################################################
#                                                #      -__            __-     #
# Teoman Deniz                                   #  :    :!1!-_    _-!1!:    : #
# maximum-tension.com                            #  ::                      :: #
#                                                #  :!:    : :: : :  :  ::::!: #
# +.....................++.....................+ #   :!:: :!:!1:!:!::1:::!!!:  #
# : C - Maximum Tension :: Create - 2026/02/26 : #   ::!::!!1001010!:!11!!::   #
# :---------------------::---------------------: #   :!1!!11000000000011!!:    #
# : License - GPL-3.0   :: Update - 2026/06/16 : #    ::::!!!1!!1!!!1!!!::     #
# +.....................++.....................+ #       ::::!::!:::!::::      #
\******************************************************************************/

/******************************************************************************\
|* __________________________________________________________________________ *|
|*|                                 EXTERN_C                                 |*|
|*|__________________________________________________________________________|*|
|*|                                                                          |*|
|*| A LIGHTWEIGHT HEADER THAT PROVIDES PORTABLE MACROS FOR DECLARING C       |*|
|*| LINKAGE IN SHARED C/C++ HEADERS.                                         |*|
|*|                                            __________                    |*|
|*| WHEN INCLUDED IN C++ BUILDS, IT EXPANDS TO extern "C" BLOCKS TO PREVENT  |*|
|*| NAME MANGLING; IN C BUILDS, IT EXPANDS TO NOTHING.                       |*|
|*|                                                                          |*|
|*| THIS ENSURES SEAMLESS INTEROPERABILITY BETWEEN C AND C++ TRANSLATION     |*|
|*| UNITS.                                                                   |*|
|*|__________________________________________________________________________|*|
|*                                                                            *|
\******************************************************************************/

/*############################################################################*\
|*#                                 CONTENTS                                 #*|
|*############################################################################*|
|* __________________________________________________________________________ *|
|*| CONTENT                                                       | DOC LINE |*|
|*|===============================================================|==========|*|
|*| #define EXTERN_C_START                                        | 46       |*|
|*| #define extern_c_start                                        |          |*|
|*|---------------------------------------------------------------|----------|*|
|*| #define EXTERN_C_END                                          | 46       |*|
|*| #define extern_c_end                                          |          |*|
|*|_______________________________________________________________|__________|*|
|*                                                                            *|
|*                                 .........                                  *|
|* ................................: USAGE :................................. *|
|* :                               '''''''''                                : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| #define EXTERN_C_START                                              : *|
|* : 3| #define extern_c_start                                              : *|
|* : 4|                                                                     : *|
|* : 5| #define EXTERN_C_END                                                : *|
|* : 6| #define extern_c_end                                                : *|
|* : 7|                                                                     : *|
|* :                                                                        : *|
|* : EXAMPLES:                                                              : *|
|* :                                                                        : *|
|* :   v [C LANGUAGE]                                                       : *|
|* :  1|                                                                    : *|
|* :  2| extern_c_start                                                     : *|
|* :  3|                                                                    : *|
|* :  4| const char *global_variable = "test";                              : *|
|* :  5|                                                                    : *|
|* :  6| void func()                                                        : *|
|* :  7| {                                                                  : *|
|* :  8|     printf("42");                                                  : *|
|* :  9| }                                                                  : *|
|* : 10|                                                                    : *|
|* : 11| extern_c_end                                                       : *|
|* : 12|                                                                    : *|
|* :                                                                        : *|
|* :   v [C LANGUAGE]                                                       : *|
|* :  1|                                                                    : *|
|* :  2| #define CREATE_FUNCTION(NAME) \                                    : *|
|* :  3|     extern_c_start\                                                : *|
|* :  4|     \                                                              : *|
|* :  5|     static void NAME()\                                            : *|
|* :  6|     {\                                                             : *|
|* :  7|         printf("42\n");\                                           : *|
|* :  8|     }\                                                             : *|
|* :  9|     \                                                              : *|
|* : 10|     extern_c_end                                                   : *|
|* : 11|                                                                    : *|
|* : 12| CREATE_FUNCTION(test_function)                                     : *|
|* : 13|                                                                    : *|
|* :........................................................................: *|
|*                                                                            *|
\******************************************************************************/

#ifndef EXTERN_C_H
#define EXTERN_C_H 202606 /* VERSION */

#ifdef __WATCOMC__ /* WATCOM C++ */
#ifndef _ENABLE_AUTODEPEND /* IF AUTO DEPENDENCY TRACKING IS OFF */
#pragma read_only_file; /* THIS FILE WON'T CHANGE DURING COMPILE TIME */
#endif /* !_ENABLE_AUTODEPEND */
#endif /* __WATCOMC__ */

#ifdef __cplusplus /* C++ */
#define EXTERN_C_START extern "C" {
#define EXTERN_C_END }
#else /* !__cplusplus */
#define EXTERN_C_START
#define EXTERN_C_END
#endif /* __cplusplus */

#define extern_c_start EXTERN_C_START
#define extern_c_end EXTERN_C_END

#endif /* !EXTERN_C_H */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
