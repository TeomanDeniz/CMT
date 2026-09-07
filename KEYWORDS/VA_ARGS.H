/******************************************************************************\
# H - VA_ARGS                                    #       Maximum Tension       #
################################################################################
#                                                #      -__            __-     #
# Teoman Deniz                                   #  :    :!1!-_    _-!1!:    : #
# maximum-tension.com                            #  ::                      :: #
#                                                #  :!:    : :: : :  :  ::::!: #
# +.....................++.....................+ #   :!:: :!:!1:!:!::1:::!!!:  #
# : C - Maximum Tension :: Create - 2024/06/10 : #   ::!::!!1001010!:!11!!::   #
# :---------------------::---------------------: #   :!1!!11000000000011!!:    #
# : License - GPL-3.0   :: Update - 2026/08/28 : #    ::::!!!1!!1!!!1!!!::     #
# +.....................++.....................+ #       ::::!::!:::!::::      #
\******************************************************************************/

/******************************************************************************\
|* __________________________________________________________________________ *|
|*|                                 VA_ARGS                                  |*|
|*|__________________________________________________________________________|*|
|*|                                                                          |*|
|*| PROVIDES A LIGHTWEIGHT, CROSS-COMPILER INTERFACE FOR HANDLING VARIABLE   |*|
|*| ARGUMENT LISTS IN C.                                                     |*|
|*| _________                       __________                               |*|
|*| VA_ARGS.H COMBINES THE STANDARD <stdarg.h> INTERFACE, LEGACY             |*|
|*| <<varargs.h>>-STYLE CONVENTIONS, AND A CUSTOM FALLBACK IMPLEMENTATION TO |*|
|*| PROVIDE A CONSISTENT SET OF VARIABLE-ARGUMENT KEYWORDS ACROSS DIFFERENT  |*|
|*| COMPILERS AND LANGUAGE ENVIRONMENTS.                                     |*|
|*|                                                                          |*|
|*| THE LIBRARY EXPOSES BOTH UPPERCASE AND LOWERCASE FORMS OF ITS            |*|
|*| VARIABLE-ARGUMENT OBJECTS. STANDARD IMPLEMENTATIONS ARE USED WHEN        |*|
|*| AVAILABLE, WHILE UNSUPPORTED ENVIRONMENTS CAN FALL BACK TO THE LIBRARY'S |*|
|*| OWN IMPLEMENTATION.                                                      |*|
|*|                                                                          |*|
|*| THE INTERFACE PROVIDES EQUIVALENTS FOR DECLARING, STARTING, ACCESSING,   |*|
|*| COPYING, AND ENDING VARIABLE ARGUMENT LISTS. IT ALSO PROVIDES <VA_ARGS>, |*|
|*| WHICH REPRESENTS THE VARIABLE ARGUMENT PORTION OF A FUNCTION DECLARATION |*|
|*| IN ENVIRONMENTS WHERE THE STANDARD <...> SYNTAX IS UNAVAILABLE OR        |*|
|*| UNSUITABLE.                                                              |*|
|*|                                                                          |*|
|*| THE HEADER IS INTENDED TO MAKE VARIABLE-ARGUMENT FUNCTIONS MORE PORTABLE |*|
|*| WITHOUT REQUIRING THE REST OF THE SOURCE CODE TO DEPEND DIRECTLY ON      |*|
|*| COMPILER-SPECIFIC VARIABLE-ARGUMENT FACILITIES.                          |*|
|*|__________________________________________________________________________|*|
|*                                                                            *|
\******************************************************************************/

/*############################################################################*\
|*#                                 CONTENTS                                 #*|
|*############################################################################*|
|* __________________________________________________________________________ *|
|*| CONTENT                                                       | DOC LINE |*|
|*|===============================================================|==========|*|
|*| typedef VA_LIST;                                              | 124      |*|
|*| typedef va_list;                                              |          |*|
|*|---------------------------------------------------------------|----------|*|
|*| #define VA_ARG                                                | 152      |*|
|*| #define va_arg                                                |          |*|
|*|---------------------------------------------------------------|----------|*|
|*| #define VA_COPY                                               | 186      |*|
|*| #define va_copy                                               |          |*|
|*|---------------------------------------------------------------|----------|*|
|*| #define VA_BEGIN                                              | 222      |*|
|*| #define va_begin                                              |          |*|
|*|---------------------------------------------------------------|----------|*|
|*| #define VA_END                                                | 258      |*|
|*| #define va_end                                                |          |*|
|*|---------------------------------------------------------------|----------|*|
|*| #define VA_ARGS                                               | 294      |*|
|*| #define va_args                                               |          |*|
|*|---------------------------------------------------------------|----------|*|
|*| #define VA_DECLARE                                            | 332      |*|
|*| #define va_declare                                            |          |*|
|*|_______________________________________________________________|__________|*|
|*                                                                            *|
|*                              ...............                               *|
|* .............................: Portability :.............................. *|
|* :                            '''''''''''''''                             : *|
|* : <VA_ARGS.H> IS DESIGNED AROUND THREE POSSIBLE SOURCES FOR              : *|
|* : VARIABLE-ARGUMENT SUPPORT:                                             : *|
|* :               __________                                               : *|
|* : 1. **STANDARD <stdarg.h> SUPPORT** WHEN THE COMPILER PROVIDES THE      : *|
|* : STANDARD C VARIABLE-ARGUMENT INTERFACE, THE LIBRARY CAN MAP ITS        : *|
|* : KEYWORDS DIRECTLY TO <va_list>, <va_start>, <va_arg>, <va_copy>, AND   : *|
|* : va_end.                                                                : *|
|* : ^^^^^^                                                                 : *|
|* : 2. **LEGACY <<varargs.h>>-STYLE SUPPORT** OLDER COMPILERS MAY USE      : *|
|* : CONVENTIONS SUCH AS <va_alist> AND <va_dcl>. THE LIBRARY PROVIDES      : *|
|* : <VA_ARGS> AND <VA_DECLARE> SO THESE CONVENTIONS CAN BE REPRESENTED     : *|
|* : THROUGH THE SAME SOURCE-LEVEL INTERFACE.                               : *|
|* :    _______________________________                                     : *|
|* : 3. LIBRARY FALLBACK IMPLEMENTATION WHEN NEITHER SUPPORTED INTERFACE    : *|
|* : IS AVAILABLE, <VA_ARGS.H> CAN PROVIDE ITS OWN IMPLEMENTATION OF THE    : *|
|* : REQUIRED OPERATIONS.                                                   : *|
|* :                                 _________                              : *|
|* : CONSEQUENTLY, SOURCE CODE USING VA_ARGS.H DOES NOT NEED TO SELECT      : *|
|* : THE VARIABLE-ARGUMENT MECHANISM DIRECTLY FOR EACH COMPILER.            : *|
|* :                                                                        : *|
|* : EVERY PRIMARY VARIABLE-ARGUMENT OPERATION IS EXPOSED IN BOTH UPPERCASE : *|
|* : AND LOWERCASE FORMS.                                                   : *|
|* :  ___________________________________________________________________   : *|
|* : | Uppercase    | Lowercase    | Purpose                             |  : *|
|* : |==============|==============|=====================================|  : *|
|* : | VA_LIST      | va_list      | VARIABLE-ARGUMENT LIST TYPE         |  : *|
|* : |--------------|--------------|-------------------------------------|  : *|
|* : | VA_ARG       | va_arg       | RETRIEVE THE NEXT ARGUMENT          |  : *|
|* : |--------------|--------------|-------------------------------------|  : *|
|* : | VA_COPY      | va_copy      | COPY A VARIABLE-ARGUMENT LIST       |  : *|
|* : |--------------|--------------|-------------------------------------|  : *|
|* : | VA_BEGIN     | va_begin     | INITIALIZE A VARIABLE-ARGUMENT LIST |  : *|
|* : |--------------|--------------|-------------------------------------|  : *|
|* : | VA_END       | va_end       | TERMINATE A VARIABLE-ARGUMENT LIST  |  : *|
|* : |--------------|--------------|-------------------------------------|  : *|
|* : | VA_ARGS      | va_args      | VARIABLE-ARGUMENT DECLARATION       |  : *|
|* : |--------------|--------------|-------------------------------------|  : *|
|* : | VA_DECLARE   | va_declare   | VARIABLE-ARGUMENT DECLARATION/SETUP |  : *|
|* : |______________|______________|_____________________________________|  : *|
|* :                                                                        : *|
|* : THE LOWERCASE NAMES GENERALLY PRESERVE THE CONVENTIONAL C              : *|
|* : VARIABLE-ARGUMENT NAMING STYLE, WHILE THE UPPERCASE NAMES PROVIDE A    : *|
|* : LIBRARY-LEVEL ABSTRACTION THAT IS EASY TO DISTINGUISH FROM             : *|
|* : COMPILER-PROVIDED PRIMITIVES.                                          : *|
|* :........................................................................: *|
|*                                                                            *|
|*                                ...........                                 *|
|* ...............................: VA_LIST :................................ *|
|* :                              '''''''''''                               : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| typedef va_list;                                                    : *|
|* : 3| typedef VA_LIST;                                                    : *|
|* : 4|                                                                     : *|
|* :                                                                        : *|
|* : PROVIDES AN UPPERCASE ALIAS FOR THE STANDARD va_list TYPE.             : *|
|* :                                              ^^^^^^^                   : *|
|* : <VA_LIST> CAN BE USED TO DECLARE A VARIABLE-ARGUMENT LIST OBJECT       : *|
|* : WITHOUT REFERRING DIRECTLY TO THE IMPLEMENTATION-PROVIDED <va_list>    : *|
|* : TYPE.                                                                  : *|
|* :               _______                                                  : *|
|* : THE LOWERCASE va_list REMAINS AVAILABLE AS PROVIDED BY THE             : *|
|* : UNDERLYING VARIABLE-ARGUMENT IMPLEMENTATION.                           : *|
|* :                                                                        : *|
|* : EXAMPLE                                                                : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| VA_LIST args;                                                       : *|
|* : 3|                                                                     : *|
|* : 4| VA_BEGIN(args, count);                                              : *|
|* : 5|                                                                     : *|
|* :........................................................................: *|
|*                                                                            *|
|*                                 ..........                                 *|
|* ................................: VA_ARG :................................ *|
|* :                               ''''''''''                               : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| #define VA_ARG                                                      : *|
|* : 3| #define va_arg                                                      : *|
|* : 4|                                                                     : *|
|* :                                                                        : *|
|* : RETRIEVES THE NEXT ARGUMENT FROM A VARIABLE-ARGUMENT LIST.             : *|
|* : ______                          ______                                 : *|
|* : VA_ARG IS THE UPPERCASE FORM OF va_arg AND FOLLOWS THE BEHAVIOR OF     : *|
|* : THE ACTIVE VARIABLE-ARGUMENT IMPLEMENTATION.                           : *|
|* :                                                                        : *|
|* : THE FIRST ARGUMENT SPECIFIES THE VARIABLE-ARGUMENT LIST, WHILE THE     : *|
|* : SECOND SPECIFIES THE EXPECTED TYPE OF THE NEXT ARGUMENT.               : *|
|* :                                                                        : *|
|* : EXAMPLE                                                                : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| int value;                                                          : *|
|* : 3|                                                                     : *|
|* : 4| value = VA_ARG(args, int);                                          : *|
|* : 5|                                                                     : *|
|* :                                                                        : *|
|* : THE LOWERCASE FORM CAN BE USED EQUIVALENTLY:                           : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| value = va_arg(args, int);                                          : *|
|* : 3|                                                                     : *|
|* :........................................................................: *|
|*                                                                            *|
|*                                ...........                                 *|
|* ...............................: VA_COPY :................................ *|
|* :                              '''''''''''                               : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| #define VA_COPY                                                     : *|
|* : 3| #define va_copy                                                     : *|
|* : 4|                                                                     : *|
|* :                                                                        : *|
|* : COPIES THE CURRENT STATE OF A VARIABLE-ARGUMENT LIST INTO ANOTHER      : *|
|* : VARIABLE-ARGUMENT LIST.                                                : *|
|* :                                                                        : *|
|* : THIS IS USEFUL WHEN THE SAME ARGUMENT SEQUENCE NEEDS TO BE TRAVERSED   : *|
|* : MORE THAN ONCE.                                                        : *|
|* : _______                          _______                               : *|
|* : VA_COPY IS THE UPPERCASE FORM OF va_copy AND USES THE                  : *|
|* : IMPLEMENTATION SUPPLIED BY THE COMPILER OR THE FALLBACK PROVIDED BY    : *|
|* : VA_ARGS.H.                                                             : *|
|* : ^^^^^^^^^                                                              : *|
|* : EXAMPLE                                                                : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| VA_LIST copy;                                                       : *|
|* : 3|                                                                     : *|
|* : 4| VA_COPY(copy, args);                                                : *|
|* : 5|                                                                     : *|
|* :                                                                        : *|
|* : THE COPIED LIST SHOULD BE TERMINATED INDEPENDENTLY:                    : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| VA_END(copy);                                                       : *|
|* : 3|                                                                     : *|
|* :........................................................................: *|
|*                                                                            *|
|*                                ............                                *|
|* ...............................: VA_BEGIN :............................... *|
|* :                              ''''''''''''                              : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| #define VA_BEGIN                                                    : *|
|* : 3| #define va_begin                                                    : *|
|* : 4|                                                                     : *|
|* :                                                                        : *|
|* : INITIALIZES A VARIABLE-ARGUMENT LIST BEFORE ITS ARGUMENTS ARE          : *|
|* : ACCESSED.                                                              : *|
|* :                                                                        : *|
|* : THE EXACT BEHAVIOR IS PROVIDED BY THE ACTIVE VARIABLE-ARGUMENT         : *|
|* : IMPLEMENTATION.                                                        : *|
|* :                                                                        : *|
|* : EXAMPLE                                                                : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| VA_LIST args;                                                       : *|
|* : 3|                                                                     : *|
|* : 4| VA_BEGIN(args, count);                                              : *|
|* : 5|                                                                     : *|
|* : 6| value = VA_ARG(args, int);                                          : *|
|* : 7|                                                                     : *|
|* : 8| VA_END(args);                                                       : *|
|* : 9|                                                                     : *|
|* :                                                                        : *|
|* : THE LOWERCASE FORM IS EQUIVALENT:                                      : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| va_begin(args, count);                                              : *|
|* : 3|                                                                     : *|
|* :........................................................................: *|
|*                                                                            *|
|*                                 ..........                                 *|
|* ................................: VA_END :................................ *|
|* :                               ''''''''''                               : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| #define VA_END                                                      : *|
|* : 3| #define va_end                                                      : *|
|* : 4|                                                                     : *|
|* :                                                                        : *|
|* : TERMINATES A VARIABLE-ARGUMENT LIST AFTER IT HAS BEEN USED.            : *|
|* :                                               ________                 : *|
|* : EVERY VARIABLE-ARGUMENT LIST INITIALIZED WITH VA_BEGIN OR OTHERWISE    : *|
|* : INITIALIZED ACCORDING TO THE ACTIVE IMPLEMENTATION SHOULD BE PASSED TO : *|
|* : VA_END WHEN IT IS NO LONGER NEEDED.                                    : *|
|* : ^^^^^^                                                                 : *|
|* : EXAMPLE                                                                : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| VA_LIST args;                                                       : *|
|* : 3|                                                                     : *|
|* : 4| VA_BEGIN(args, count);                                              : *|
|* : 5|                                                                     : *|
|* : 6| // Use args.                                                        : *|
|* : 7|                                                                     : *|
|* : 8| VA_END(args);                                                       : *|
|* : 9|                                                                     : *|
|* :                                                                        : *|
|* : THE LOWERCASE FORM CAN BE USED EQUIVALENTLY:                           : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| va_end(args);                                                       : *|
|* : 3|                                                                     : *|
|* :........................................................................: *|
|*                                                                            *|
|*                                ...........                                 *|
|* ...............................: VA_ARGS :................................ *|
|* :                              '''''''''''                               : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| #define VA_ARGS                                                     : *|
|* : 3| #define va_args                                                     : *|
|* : 4|                                                                     : *|
|* :                                                                        : *|
|* : REPRESENTS THE VARIABLE-ARGUMENT PORTION OF A FUNCTION DECLARATION.    : *|
|* : _______                                                                : *|
|* : VA_ARGS PROVIDES A PORTABLE ABSTRACTION FOR DECLARING FUNCTIONS THAT   : *|
|* : ACCEPT A VARIABLE NUMBER OF ARGUMENTS. IT IS INTENDED TO SERVE THE     : *|
|* : ROLE OF THE STANDARD <...> SYNTAX OR THE <va_alist> CONVENTION USED BY : *|
|* : OLDER VARIABLE-ARGUMENT IMPLEMENTATIONS.                               : *|
|* :                                                                        : *|
|* : THIS ALLOWS A FUNCTION DECLARATION TO USE THE LIBRARY'S                : *|
|* : VARIABLE-ARGUMENT SYNTAX WITHOUT DIRECTLY DEPENDING ON A PARTICULAR    : *|
|* : COMPILER'S DECLARATION CONVENTION.                                     : *|
|* :                                                                        : *|
|* : EXAMPLE                                                                : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| int print_values(int count, VA_ARGS);                               : *|
|* : 3|                                                                     : *|
|* :                                                                        : *|
|* : ON IMPLEMENTATIONS WHERE STANDARD C VARIABLE ARGUMENTS ARE AVAILABLE,  : *|
|* : VA_ARGS CAN CORRESPOND TO THE APPROPRIATE ...-STYLE DECLARATION.       : *|
|* : ^^^^^^^                                   ^^^                          : *|
|* : ON IMPLEMENTATIONS REQUIRING AN ALTERNATIVE VARIABLE-ARGUMENT          : *|
|* : CONVENTION, <VA_ARGS> CAN INSTEAD BE MAPPED TO THE CORRESPONDING       : *|
|* : IMPLEMENTATION-SPECIFIC REPRESENTATION.                                : *|
|* : _____ _______                                      _________           : *|
|* : NOTE: VA_ARGS IS A DECLARATION KEYWORD PROVIDED BY VA_ARGS.H; IT       : *|
|* : SHOULD NOT BE CONFUSED WITH THE C PREPROCESSOR'S <__VA_ARGS__> MACRO.  : *|
|* :........................................................................: *|
|*                                                                            *|
|*                               ..............                               *|
|* ..............................: VA_DECLARE :.............................. *|
|* :                             ''''''''''''''                             : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| #define VA_DECLARE                                                  : *|
|* : 3| #define va_declare                                                  : *|
|* : 4|                                                                     : *|
|* :                                                                        : *|
|* : DECLARES OR PREPARES THE VARIABLE-ARGUMENT PORTION OF A FUNCTION       : *|
|* : ACCORDING TO THE ACTIVE VA_ARGS.H IMPLEMENTATION.                      : *|
|* :                         ^^^^^^^^^                                      : *|
|* : <VA_DECLARE> PROVIDES A PORTABLE ABSTRACTION FOR THE VARIABLE-ARGUMENT : *|
|* : DECLARATION MECHANISM REQUIRED BY IMPLEMENTATIONS THAT CANNOT USE THE  : *|
|* : STANDARD ... SYNTAX DIRECTLY.                                          : *|
|* :          ^^^                                                           : *|
|* : IT IS INTENDED AS THE LIBRARY'S EQUIVALENT OF THE DECLARATION          : *|
|* : OPERATION USED BY THE UNDERLYING VARIABLE-ARGUMENT SYSTEM, INCLUDING   : *|
|* : IMPLEMENTATIONS BASED ON THE OLDER va_dcl CONVENTION.                  : *|
|* :                                    ^^^^^^                              : *|
|* : EXAMPLE                                                                : *|
|* :                                                                        : *|
|* :   v [C LANGUAGE]                                                       : *|
|* :  1|                                                                    : *|
|* :  2| int print_values(count)                                            : *|
|* :  3|     int count;                                                     : *|
|* :  4|     VA_DECLARE                                                     : *|
|* :  5| {                                                                  : *|
|* :  6|     VA_LIST args;                                                  : *|
|* :  7|                                                                    : *|
|* :  8|     VA_BEGIN(args, count);                                         : *|
|* :  9|                                                                    : *|
|* : 10|     // Process variable arguments.                                 : *|
|* : 11|                                                                    : *|
|* : 12|     VA_END(args);                                                  : *|
|* : 13| }                                                                  : *|
|* : 14|                                                                    : *|
|* :                                                                        : *|
|* : THE LOWERCASE FORM IS EQUIVALENT:                                      : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| va_declare                                                          : *|
|* : 3|                                                                     : *|
|* :                         __________                                     : *|
|* : THE ACTUAL EXPANSION OF VA_DECLARE DEPENDS ON THE COMPILER AND         : *|
|* : VARIABLE-ARGUMENT IMPLEMENTATION SELECTED BY <VA_ARGS.H>.              : *|
|* :........................................................................: *|
|*                                                                            *|
|*    _______                                                                 *|
|*  _| USAGE |______________________________________________________________  *|
|* | '"""""""'                                                              | *|
|* |                                                                        | *|
|* | A TYPICAL VARIABLE-ARGUMENT FUNCTION CAN BE WRITTEN USING THE PORTABLE | *|
|* | INTERFACE PROVIDED BY THE HEADER:                                      | *|
|* |                                                                        | *|
|* |   v [C LANGUAGE]                                                       | *|
|* |  1|                                                                    | *|
|* |  2| #include <VA_ARGS.H>                                               | *|
|* |  3|                                                                    | *|
|* |  4| int sum(int count, VA_ARGS)                                        | *|
|* |  5| {                                                                  | *|
|* |  6|     VA_LIST args;                                                  | *|
|* |  7|     int     total;                                                 | *|
|* |  8|     int     i;                                                     | *|
|* |  9|                                                                    | *|
|* | 10|     total = 0;                                                     | *|
|* | 11|     VA_BEGIN(args, count);                                         | *|
|* | 12|                                                                    | *|
|* | 13|     i = 0;                                                         | *|
|* | 14|     while (i < count)                                              | *|
|* | 15|     {                                                              | *|
|* | 16|         total += VA_ARG(args, int);                                | *|
|* | 17|         i++;                                                       | *|
|* | 18|     }                                                              | *|
|* | 19|                                                                    | *|
|* | 20|     VA_END(args);                                                  | *|
|* | 21|     return (total);                                                | *|
|* | 22| }                                                                  | *|
|* | 23|                                                                    | *|
|* |                                                                        | *|
|* | THE SAME INTERFACE IS AVAILABLE IN LOWERCASE FORM:                     | *|
|* |                                                                        | *|
|* |   v [C LANGUAGE]                                                       | *|
|* |  1|                                                                    | *|
|* |  2| #include <VA_ARGS.H>                                               | *|
|* |  3|                                                                    | *|
|* |  4| int sum(int count, va_args)                                        | *|
|* |  5| {                                                                  | *|
|* |  6|     va_list args;                                                  | *|
|* |  7|     int     total;                                                 | *|
|* |  8|     int     i;                                                     | *|
|* |  9|                                                                    | *|
|* | 10|     total = 0;                                                     | *|
|* | 11|     va_begin(args, count);                                         | *|
|* | 12|                                                                    | *|
|* | 13|     i = 0;                                                         | *|
|* | 14|     while (i < count)                                              | *|
|* | 15|     {                                                              | *|
|* | 16|         total += va_arg(args, int);                                | *|
|* | 17|         i++;                                                       | *|
|* | 18|     }                                                              | *|
|* | 19|                                                                    | *|
|* | 20|     va_end(args);                                                  | *|
|* | 21|     return (total);                                                | *|
|* | 22| }                                                                  | *|
|* | 23|                                                                    | *|
|* |                                                                        | *|
|* | USING THE UPPERCASE INTERFACE IS USEFUL WHEN THE SOURCE CODE IS        | *|
|* | INTENDED TO MAKE LIBRARY-PROVIDED PORTABILITY ABSTRACTIONS VISUALLY    | *|
|* | DISTINCT FROM THE UNDERLYING COMPILER IMPLEMENTATION.                  | *|
|* |                                                                        | *|
|* |________________________________________________________________________| *|
|*                                                                            *|
\******************************************************************************/

#ifndef VA_ARGS_H
#define VA_ARGS_H 202608 /* VERSION */

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

/* ************************* [v] VARARGS.H CHECK [v] ************************ */
#ifdef __GNUC__
#if (__GNUC__ > 2)
#define LOCALMACRO__VA_ARGS_EXIST
#endif /* __GNUC__ > 2 */
#endif /* __GNUC__ */

#ifdef _MSC_VER
#if (_MSC_VER >= 1900)
#define LOCALMACRO__VA_ARGS_EXIST
#endif /* _MSC_VER >= 1900 */
#endif /* _MSC_VER */

#ifdef __TI_COMPILER_VERSION__
#define LOCALMACRO__VA_ARGS_EXIST
#endif /* __TI_COMPILER_VERSION__ */

#ifdef __CMOC__
#define LOCALMACRO__VA_ARGS_EXIST
#endif /* __CMOC__ */

#ifdef SDCC
#define LOCALMACRO__VA_ARGS_EXIST
#endif /* SDCC */

#ifdef __SDCC
#define LOCALMACRO__VA_ARGS_EXIST
#endif /* __SDCC */

#ifdef __IAR_SYSTEMS_ICC__
#define LOCALMACRO__VA_ARGS_EXIST
#endif /* __IAR_SYSTEMS_ICC__ */

#ifdef __ARMCC_VERSION
#define LOCALMACRO__VA_ARGS_EXIST
#endif /* __ARMCC_VERSION */

#ifndef LOCALMACRO__VA_ARGS_EXIST
#ifndef CMT_TRY_VARARGS
#ifndef CMT_TRY_VA_ARGS
#ifdef __has_include
#if (__has_include(<varargs.h>))
#define LOCALMACRO__VARARGS_EXIST
#else /* !__has_include(<varargs.h>) */
#if (__has_include(<stdarg.h>))
#define LOCALMACRO__VA_ARGS_EXIST
#endif /* __has_include(<stdarg.h>) */
#endif /* __has_include(<varargs.h>) */
#endif /* __has_include */
#else /* CMT_TRY_VA_ARGS */
#define LOCALMACRO__VA_ARGS_EXIST
#endif /* !CMT_TRY_VA_ARGS */
#else /* CMT_TRY_VARARGS */
#define LOCALMACRO__VARARGS_EXIST
#endif /* !CMT_TRY_VARARGS */
#endif /* !LOCALMACRO__VA_ARGS_EXIST */

#ifdef __TINYC__
#define LOCALMACRO__VA_ARGS_EXIST
#endif /* __TINYC__ */

#ifndef LOCALMACRO__VA_ARGS_EXIST
#ifndef LOCALMACRO__VARARGS_EXIST
#ifdef __GNUC__
#define LOCALMACRO__VARARGS_EXIST
#endif /* __GNUC__ */

#ifdef unix
#define LOCALMACRO__VARARGS_EXIST
#endif /* unix */

#ifdef __unix
#define LOCALMACRO__VARARGS_EXIST
#endif /* __unix */

#ifdef __unix__
#define LOCALMACRO__VARARGS_EXIST
#endif /* __unix__ */

#ifdef __SVR4
#define LOCALMACRO__VARARGS_EXIST
#endif /* __SVR4 */

#ifdef __svr4__
#define LOCALMACRO__VARARGS_EXIST
#endif /* __svr4__ */

#ifdef sun
#define LOCALMACRO__VARARGS_EXIST
#endif /* sun */

#ifdef __sun
#define LOCALMACRO__VARARGS_EXIST
#endif /* __sun */

#ifdef _AIX
#define LOCALMACRO__VARARGS_EXIST
#endif /* _AIX */

#ifdef hpux
#define LOCALMACRO__VARARGS_EXIST
#endif /* hpux */

#ifdef __hpux
#define LOCALMACRO__VARARGS_EXIST
#endif /* __hpux */

#ifdef ultrix
#define LOCALMACRO__VARARGS_EXIST
#endif /* ultrix */

#ifdef sgi
#define LOCALMACRO__VARARGS_EXIST
#endif /* sgi */

#ifdef __sgi
#define LOCALMACRO__VARARGS_EXIST
#endif /* __sgi */

#ifdef __osf__
#define LOCALMACRO__VARARGS_EXIST
#endif /* __osf__ */

#ifdef M_XENIX
#define LOCALMACRO__VARARGS_EXIST
#endif /* M_XENIX */

#ifdef VAXC
#define LOCALMACRO__VARARGS_EXIST
#endif /* VAXC */

#ifdef __VMS
#define LOCALMACRO__VARARGS_EXIST
#endif /* __VMS */

#ifdef _MSC_VER
#define LOCALMACRO__VARARGS_EXIST
#endif /* _MSC_VER */

#ifdef __TURBOC__
#define LOCALMACRO__VARARGS_EXIST
#endif /* __TURBOC__ */

#ifdef __BORLANDC__
#define LOCALMACRO__VARARGS_EXIST
#endif /* __BORLANDC__ */

#ifdef __WATCOMC__
#define LOCALMACRO__VARARGS_EXIST
#endif /* __WATCOMC__ */

#ifdef __ZTC__
#define LOCALMACRO__VARARGS_EXIST
#endif /* __ZTC__ */

#ifdef __SC__
#define LOCALMACRO__VARARGS_EXIST
#endif /* __SC__ */

#ifdef __DMC__
#define LOCALMACRO__VARARGS_EXIST
#endif /* __DMC__ */
#endif /* !LOCALMACRO__VARARGS_EXIST */
#endif /* !LOCALMACRO__VA_ARGS_EXIST */
/* ************************* [^] VARARGS.H CHECK [^] ************************ */

#ifdef LOCALMACRO__VA_ARGS_EXIST
#undef LOCALMACRO__VA_ARGS_EXIST

#ifdef __cplusplus /* C++ */
#include <cstdarg>
/******* """""""""
 * typedef va_list;
 * <T>	va_arg(va_list, <T>);
 * void	va_copy(va_list, va_list);
 * void	va_start(va_list, ...);
 * void	va_end(va_list);
 */
#else /* !__cplusplus */
#include <stdarg.h>
/******* """"""""""
 * typedef va_list;
 * <T>	va_arg(va_list, <T>);
 * void	va_copy(va_list, va_list);
 * void	va_start(va_list, ...);
 * void	va_end(va_list);
 */
#endif /* __cplusplus */

#define va_declare
#define va_args ...
#define va_begin va_start

#else /* !LOCALMACRO__VA_ARGS_EXIST */

#ifdef LOCALMACRO__VARARGS_EXIST

#include <varargs.h>
/******* """"""""""
 * #define va_alist
 * #define va_dcl
 * typedef	va_list;
 * void		va_start(va_list);
 * type		va_arg(va_list, <type>);
 * void		va_end(va_list);
 */

#define va_declare va_dcl
#define va_args va_alist
#define va_begin(__VA_LIST__, __VA_START__) va_start(__VA_LIST__)

#else /* !LOCALMACRO__VARARGS_EXIST */

/* **************************** [v] INCLUDES [v] **************************** */
#include "../ENVIRONMENTS/ARCHITECTURE.H"
/******* """"""""""""""""""""""""""""""""
 * #define __SYSTEM_32_BIT__
 * #define __SYSTEM_16_BIT__
 * #define __SYSTEM_8_BIT__
 */
#include "../ENVIRONMENTS/KNR_STYLE.H"
/******* """""""""""""""""""""""""""""
 * #define KNR_STYLE
 */
#include "../ATTRIBUTES/INLINE.H"
/******* """"""""""""""""""""""""
 * #define FORCE_INLINE
 */
#include "../ATTRIBUTES/EXTERN_C.H"
/******* """"""""""""""""""""""""""
 * #define EXTERN_C_START
 * #define EXTERN_C_END
 */
/* **************************** [^] INCLUDES [^] **************************** */

#define va_args var __dummy_va_args_variable__
#define va_declare

/* **************************** [v] TYPEDEFS [v] **************************** */
typedef char	*va_list;
/* **************************** [^] TYPEDEFS [^] **************************** */

/* *************************** [v] MVS LINKER [v] *************************** */
/* **** MVS LINKER DOES NOT SUPPORT EXTERNAL NAMES LARGER THAN 8 BYTES!! **** */
#ifdef __MVS__ /* IBM Z/OS XL C/C++ */
#define __VA_ARGS_HELPER_FUNCTION__ CMT_VAR_
#endif /* __MVS__ */
/* *************************** [^] MVS LINKER [^] *************************** */

/* **************************** [v] EXTERNS [v] ***************************** */
EXTERN_C_START
#ifndef KNR_STYLE /* STANDARD C */
FORCE_INLINE char	*__VA_ARGS_HELPER_FUNCTION__(register char **, register int);
#else /* K&R */
FORCE_INLINE char	*__VA_ARGS_HELPER_FUNCTION__();
#endif /* !KNR_STYLE */
EXTERN_C_END
/* **************************** [^] EXTERNS [^] ***************************** */

/**@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@**\
|**@                                                                        @**|
|**@            @@@@@@@@@   @@@@@  @@@@@ @@@@@@@@@@@    @@@@@@@             @**|
|**@           @@@:::::@@@ ::@@@  ::@@@ :@:::@@@:::@  @@@:::::@@@           @**|
|**@          :@@@    :@@@  :@@@   :@@@ :   :@@@  :  @@@     ::@@@          @**|
|**@          :@@@@@@@@@@@  :@@@   :@@@     :@@@    :@@@      :@@@          @**|
|**@          :@@@:::::@@@  :@@@   :@@@     :@@@    :@@@      :@@@          @**|
|**@          :@@@    :@@@  :@@@   :@@@     :@@@    ::@@@     @@@           @**|
|**@          @@@@@   @@@@@ ::@@@@@@@@      @@@@@    :::@@@@@@@:            @**|
|**@         :::::   :::::   ::::::::      :::::       :::::::              @**|
|**@                                                                        @**|
|**@ @@@@@       @@@@@ @@@@@@   @@@@@ @@@@@   @@@@ @@@@@@@@@@ @@@@@@@@@@@   @**|
|**@::@@@       ::@@@ ::@@@@@@ ::@@@ ::@@@   @@@: ::@@@:::::@::@@@:::::@@@  @**|
|**@ :@@@        :@@@  :@@@:@@@ :@@@  :@@@  @@@    :@@@  @ :  :@@@    :@@@  @**|
|**@ :@@@        :@@@  :@@@::@@@:@@@  :@@@@@@@     :@@@@@@    :@@@@@@@@@@   @**|
|**@ :@@@        :@@@  :@@@ ::@@@@@@  :@@@::@@@    :@@@::@    :@@@:::::@@@  @**|
|**@ :@@@      @ :@@@  :@@@  ::@@@@@  :@@@ ::@@@   :@@@ :   @ :@@@    :@@@  @**|
|**@ @@@@@@@@@@@ @@@@@ @@@@@  ::@@@@@ @@@@@ ::@@@@ @@@@@@@@@@ @@@@@   @@@@@ @**|
|**@::::::::::: ::::: :::::    ::::: :::::   :::: :::::::::: :::::   :::::  @**|
|**@                                                                        @**|
\**@@[v]*[v]*[v]*[v]*[v]*[v]*[v]*[v]*[v][v]*[v]*[v]*[v]*[v]*[v]*[v]*[v]*[v]@@**/

/* ******************* [v] LOCALMACRO__SETUP_LINKABLE [v] ******************* */
#ifdef CMT_SETUP
#define LOCALMACRO__SETUP_LINKABLE
#else /* !CMT_SETUP */
#ifndef CMT_EXTERN /* MEANS BOTH NOT DEFINED */
#define LOCALMACRO__SETUP_LINKABLE
#endif /* !CMT_EXTERN */
#endif /* !CMT_SETUP */
/* ******************* [^] LOCALMACRO__SETUP_LINKABLE [^] ******************* */

#ifdef LOCALMACRO__SETUP_LINKABLE
#undef LOCALMACRO__SETUP_LINKABLE

/* .,,,,. #==========================================================# .,,,,. */
/*  \\//  |                 LINKABLE MEMBER CREATION                 |  \\//  */
/*   \/   #==========================================================#   \/   */

#ifndef KNR_STYLE /* STANDARD C */
#define FUNCTION_HEADER____VA_ARGS_HELPER_FUNCTION__ \
	FORCE_INLINE char\
		*__VA_ARGS_HELPER_FUNCTION__(register char **LIST, register int SIZE)
#else /* K&R */
#define FUNCTION_HEADER____VA_ARGS_HELPER_FUNCTION__ \
	FORCE_INLINE char\
		*__VA_ARGS_HELPER_FUNCTION__(LIST, SIZE)\
		register char	**LIST;\
		register int	SIZE;
#endif /* !KNR_STYLE */

#ifdef __SYSTEM_32_BIT__
#define LOCALFUNCTION____VA_ARGS_HELPER_FUNCTION__ \
	FUNCTION_HEADER____VA_ARGS_HELPER_FUNCTION__\
	{\
		register int	ADJUST;\
		\
		ADJUST = (SIZE + 3) & (~ 3);\
		*LIST += ADJUST;\
		return (*LIST - ADJUST);\
	}

#define va_begin(LIST, ARGUMENT) \
	LIST = ((char *)&(ARGUMENT)) + ((sizeof(ARGUMENT) + 3) & (~ 3))
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_16_BIT__
#define LOCALFUNCTION____VA_ARGS_HELPER_FUNCTION__ \
	FUNCTION_HEADER____VA_ARGS_HELPER_FUNCTION__\
	{\
		register int	ADJUST;\
		\
		ADJUST = (SIZE + 1) & (~ 1);\
		*LIST += ADJUST;\
		return (*LIST - ADJUST);\
	}

#define va_begin(LIST, ARGUMENT) \
	LIST = ((char *)&(ARGUMENT)) + ((sizeof(ARGUMENT) + 1) & (~ 1))
#endif /* __SYSTEM_16_BIT__ */

#ifdef __SYSTEM_8_BIT__
#define LOCALFUNCTION____VA_ARGS_HELPER_FUNCTION__ \
	FUNCTION_HEADER____VA_ARGS_HELPER_FUNCTION__\
	{\
		*LIST += SIZE;\
		return (*LIST - SIZE);\
	}

#define va_begin(LIST, ARGUMENT) LIST = ((char *)&(ARGUMENT)) + sizeof(ARGUMENT)
#endif /* __SYSTEM_8_BIT__ */

#define LOCALLINKER__VA_ARGS LOCALFUNCTION____VA_ARGS_HELPER_FUNCTION__

/*   /\   #==========================================================#   /\   */
/*  //\\  |                 LINKABLE MEMBER CREATION                 |  //\\  */
/* '""""' #==========================================================# '""""' */

#ifdef CMT_SETUP

/* [v] %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% /!\ IMPORTANT /!\ */
EXTERN_C_START
LOCALLINKER__VA_ARGS
EXTERN_C_END
/* [^] %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% /!\ IMPORTANT /!\ */

#include "../CMT/CONSTRUCTOR.INL"
#else /* !CMT_SETUP */

/* [v] %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% /!\ IMPORTANT /!\ */
#undef GLOBALLINKER__VA_ARGS
#define GLOBALLINKER__VA_ARGS LOCALLINKER__VA_ARGS
/* [^] %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% /!\ IMPORTANT /!\ */

#include "../CMT/LINKER.INL"
#endif /* CMT_SETUP */
#else /* !LOCALMACRO__SETUP_LINKABLE */
#include "../CMT/CONSTRUCTOR.INL"
#endif /* LOCALMACRO__SETUP_LINKABLE */

/**@@[^]*[^]*[^]*[^]*[^]*[^]*[^]*[^]*[^][^]*[^]*[^]*[^]*[^]*[^]*[^]*[^]*[^]@@**\
|**@          _    _ _______ ____    _      _____ _   _ _  ________ _____   @**|
|**@     /\  | |  | |__   __/ __ \  | |    |_   _| \ | | |/ /  ____|  __ \  @**|
|**@    /  \ | |  | |  | | | |  | |_| |      | | |  \| | ' /| |__  | |__) | @**|
|**@   / /\ \| |  | |  | | | |  | |_| |      | | | . ` |  < |  __| |  _  /  @**|
|**@  / ____ \ |__| |  | | | |__| | | |____ _| |_| |\  | . \| |____| | \ \  @**|
|**@ /_/    \_\____/   |_|  \____/  |______|_____|_| \_|_|\_\______|_|  \_\ @**|
|**@                                                                        @**|
\**@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@**/

#define va_arg(LIST, TYPE) \
	*(TYPE *)__VA_ARGS_HELPER_FUNCTION__(&(LIST), sizeof(TYPE))
#define va_copy(DESTINATION, SOURCE) (DESTINATION) = (SOURCE)
#define va_end(LIST)
#endif /* LOCALMACRO__VARARGS_EXIST */
#endif /* LOCALMACRO__VA_ARGS_EXIST */

/* **************************** [v] UPPERCASE [v] *************************** */
typedef va_list	VA_LIST;
#define VA_ARG(A, B) va_arg(A, B)
#define VA_COPY(A, B) va_copy(A, B)
#define VA_BEGIN(A, B) va_begin(A, B)
#define VA_END(A) va_end(A)
#define VA_ARGS va_args
#define VA_DECLARE va_declare
/* **************************** [^] UPPERCASE [^] *************************** */

/* ************************ [v] TI CGT CCS (POP) [v] ************************ */
#ifdef __TI_COMPILER_VERSION__
#pragma diag_pop /* TI CGT CCS COMPILER DIRECTIVES */
#endif /* __TI_COMPILER_VERSION__ */
/* ************************ [^] TI CGT CCS (POP) [^] ************************ */

#endif /* !VA_ARGS_H */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
