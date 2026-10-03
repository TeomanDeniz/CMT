/******************************************************************************\
# H - REGISTER                                   #       Maximum Tension       #
################################################################################
#                                                #      -__            __-     #
# Teoman Deniz                                   #  :    :!1!-_    _-!1!:    : #
# maximum-tension.com                            #  ::                      :: #
#                                                #  :!:    : :: : :  :  ::::!: #
# +.....................++.....................+ #   :!:: :!:!1:!:!::1:::!!!:  #
# : C - Maximum Tension :: Create - 2026/10/01 : #   ::!::!!1001010!:!11!!::   #
# :---------------------::---------------------: #   :!1!!11000000000011!!:    #
# : License - Apache2.0 :: Update - 2026/10/02 : #    ::::!!!1!!1!!!1!!!::     #
# +.....................++.....................+ #       ::::!::!:::!::::      #
\******************************************************************************/

/******************************************************************************\
|* __________________________________________________________________________ *|
|*|                                 REGISTER                                 |*|
|*|__________________________________________________________________________|*|
|*|                                                                          |*|
|*| ONE STORAGE CLASS THAT C STILL HAS AND C++ THREW AWAY.                   |*|
|*|         ________                                                         |*|
|*| C KEEPS register UP TO AND INCLUDING C23. C++11 DEPRECATED IT AND        |*|
|*| C++17 REMOVED IT: CLANG REJECTS IT AS AN ERROR, GCC AND MSVC WARN.       |*|
|*|                                                                          |*|
|*| REGISTER.H DOES TWO THINGS:                                              |*|
|*| ^^^^^^^^^^                                                               |*|
|*| 1. <REGISTER> IS <register> WHERE <register> STILL MEANS SOMETHING (C,   |*|
|*| AND C++ BEFORE C++11), AND NOTHING IN C++11 AND LATER. CODE WRITTEN WITH |*|
|*| <REGISTER> COMPILES CLEANLY EVERYWHERE. 2. IN C++11 AND LATER, PLAIN     |*|
|*| <register> IN EXISTING CODE IS MADE TO COMPILE QUIETLY: THE COMPILER'S   |*|
|*| OWN DIAGNOSTIC IS SWITCHED OFF WHERE IT CAN BE, AND <register> IS        |*|
|*| DEFINED AS NOTHING ONLY WHERE IT CAN NOT.                                |*|
|*|                            __________                                    |*|
|*| THE C++ LEVEL IS READ FROM _MSVC_LANG ON MSVC, WHICH KEEPS               |*|
|*| __cplusplus AT 199711L UNLESS /Zc:__cplusplus IS GIVEN.                  |*|
|*| ^^^^^^^^^^^    ^^^^^^^        ^^^^^^^^^^^^^^^                            |*|
|*| LIBRARY CODE SHOULD SAY <REGISTER>, NEVER <register>: THEN IT COMPILES   |*|
|*| EVERYWHERE, WITH OR WITHOUT THE FIX BELOW.                               |*|
|*|__________________________________________________________________________|*|
|*                                                                            *|
\******************************************************************************/

/*############################################################################*\
|*#                                 CONTENTS                                 #*|
|*############################################################################*|
|* __________________________________________________________________________ *|
|*| CONTENT                                                       | DOC LINE |*|
|*|===============================================================|==========|*|
|*| #define REGISTER                                              | 57       |*|
|*|---------------------------------------------------------------|----------|*|
|*| #define register                                              | 91       |*|
|*|---------------------------------------------------------------|----------|*|
|*| #define CMT_NO_REGISTER_FIX                                   | 129      |*|
|*|_______________________________________________________________|__________|*|
|*                                                                            *|
|*                                ............                                *|
|* ...............................: REGISTER :............................... *|
|* :                              ''''''''''''                              : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| #define REGISTER                                                    : *|
|* : 3|                                                                     : *|
|* :                                                                        : *|
|* : A register STORAGE CLASS THAT IS VALID IN EVERY LANGUAGE MODE.         : *|
|* :   ^^^^^^^^                                                             : *|
|* :  _____________________________                                         : *|
|* : | LANGUAGE        | REGISTER  |                                        : *|
|* : |                 | ^^^^^^^^  |                                        : *|
|* : |=================|===========|                                        : *|
|* : | C, K&R TO C23   | register  |                                        : *|
|* : |                 | ^^^^^^^^  |                                        : *|
|* : |-----------------|-----------|                                        : *|
|* : | C++98, C++03    | register  |                                        : *|
|* : |                 | ^^^^^^^^  |                                        : *|
|* : |-----------------|-----------|                                        : *|
|* : | C++11 AND LATER | (NOTHING) |                                        : *|
|* : |                 | ^^^^^^^^^ |                                        : *|
|* : |_________________|___________|                                        : *|
|* :                                                                        : *|
|* : LIKE <register> ITSELF IT IS ONLY A HINT. C STILL FORBIDS TAKING THE   : *|
|* : ADDRESS OF A REGISTER VARIABLE, SO CODE THAT COMPILES AS C ALSO        : *|
|* : COMPILES AS C++.                                                       : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| REGISTER unsigned int    INDEX;                                     : *|
|* : 3|                                                                     : *|
|* :........................................................................: *|
|*                                                                            *|
|*                                ............                                *|
|* ...............................: register :............................... *|
|* :                              ''''''''''''                              : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| #define register                                                    : *|
|* : 3|                                                                     : *|
|* :                                                   ________             : *|
|* : IN C++11 AND LATER, EXISTING CODE THAT STILL SAYS register IS MADE     : *|
|* : TO COMPILE WITHOUT ERRORS OR WARNINGS:                                 : *|
|* :  ______________________________________________________________        : *|
|* : | COMPILER      | WHAT REGISTER.H DOES                         |       : *|
|* : |               |      ^^^^^^^^^^                              |       : *|
|* : |===============|==============================================|       : *|
|* : | CLANG         | IGNORES -Wregister AND -Wdeprecated-register |       : *|
|* : |               |         ^^^^^^^^^^     ^^^^^^^^^^^^^^^^^^^^^ |       : *|
|* : |---------------|----------------------------------------------|       : *|
|* : | GCC 7+        | IGNORES -Wregister                           |       : *|
|* : |               |         ^^^^^^^^^^                           |       : *|
|* : |---------------|----------------------------------------------|       : *|
|* : | MSVC 2017+    | DISABLES WARNING C5033                       |       : *|
|* : |---------------|----------------------------------------------|       : *|
|* : | ANYTHING ELSE | #define register (C++17 AND LATER ONLY)      |       : *|
|* : |               | ^^^^^^^^^^^^^^^^                             |       : *|
|* : |_______________|______________________________________________|       : *|
|* :                                                                        : *|
|* : THE DIAGNOSTICS STAY OFF FOR THE REST OF THE TRANSLATION UNIT, BECAUSE : *|
|* : A MACRO THAT USES register EXPANDS LATER, IN THE CODE THAT CALLS IT.   : *|
|* :                   ^^^^^^^^                                             : *|
|* : ONLY THE LAST ROW TOUCHES THE KEYWORD ITSELF. A MACRO NAMED <register> : *|
|* : HIDES A KEYWORD: CLANG WARNS ABOUT IT (-Wkeyword-macro), THE MSVC      : *|
|* : STANDARD LIBRARY REFUSES IT (<xkeycheck.h>), AND GNU EXPLICIT          : *|
|* : REGISTER VARIABLES (register int X asm("r10")) STOP WORKING. SO IT     : *|
|* : IS THE LAST RESORT, NOT THE FIRST.                                     : *|
|* :                                                                        : *|
|* : C IS NEVER TOUCHED.                                                    : *|
|* :........................................................................: *|
|*                                                                            *|
|*                          .......................                           *|
|* .........................: CMT_NO_REGISTER_FIX :.......................... *|
|* :                        '''''''''''''''''''''''                         : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| #define CMT_NO_REGISTER_FIX                                         : *|
|* : 3| #include "CMT/ATTRIBUTES/REGISTER.H"                                : *|
|* : 4|                                                                     : *|
|* :                                                    ________            : *|
|* : DEFINE IT BEFORE THE FIRST CMT HEADER TO LEAVE THE register KEYWORD    : *|
|* : AND THE COMPILER'S DIAGNOSTICS EXACTLY AS THEY ARE.                    : *|
|* : ________                                        ________               : *|
|* : REGISTER IS STILL DEFINED, SO CODE WRITTEN WITH REGISTER KEEPS         : *|
|* : COMPILING IN C++17 AND LATER EITHER WAY. CODE THAT STILL SAYS          : *|
|* : <register> WILL HIT THE COMPILER'S OWN ERROR AGAIN (CLANG) OR WARNING  : *|
|* : (GCC, MSVC).                                                           : *|
|* :........................................................................: *|
|*                                                                            *|
\******************************************************************************/

#ifndef REGISTER_H
#define REGISTER_H 202610 /* VERSION */

#ifdef __WATCOMC__ /* WATCOM C++ */
#ifndef _ENABLE_AUTODEPEND /* IF AUTO DEPENDENCY TRACKING IS OFF */
#pragma read_only_file; /* THIS FILE WON'T CHANGE DURING COMPILE TIME */
#endif /* !_ENABLE_AUTODEPEND */
#endif /* __WATCOMC__ */

/* *************************** [v] C++ LEVEL [v] **************************** */
#ifdef __cplusplus
#define LOCALMACRO__REGISTER_CPLUSPLUS __cplusplus

#ifdef _MSVC_LANG /* MSVC: __cplusplus IS 199711L WITHOUT /Zc:__cplusplus */
#if (_MSVC_LANG > __cplusplus)
#undef LOCALMACRO__REGISTER_CPLUSPLUS
#define LOCALMACRO__REGISTER_CPLUSPLUS _MSVC_LANG
#endif /* _MSVC_LANG > __cplusplus */
#endif /* _MSVC_LANG */
#endif /* __cplusplus */
/* *************************** [^] C++ LEVEL [^] **************************** */

/* **************************** [v] REGISTER [v] **************************** */
#ifdef REGISTER
#undef REGISTER
#endif /* REGISTER */

#ifdef LOCALMACRO__REGISTER_CPLUSPLUS
#if (LOCALMACRO__REGISTER_CPLUSPLUS >= 201103L)
#define REGISTER /* DEPRECATED IN C++11, REMOVED IN C++17 */
#else /* LOCALMACRO__REGISTER_CPLUSPLUS < 201103L */
#define REGISTER register
#endif /* LOCALMACRO__REGISTER_CPLUSPLUS >= 201103L */
#else /* !LOCALMACRO__REGISTER_CPLUSPLUS */
#define REGISTER register /* C KEEPS IT, UP TO AND INCLUDING C23 */
#endif /* LOCALMACRO__REGISTER_CPLUSPLUS */
/* **************************** [^] REGISTER [^] **************************** */

/* **************************** [v] register [v] **************************** */
/*  PLAIN register IN C++11+: SILENCE THE COMPILER WHERE IT CAN BE SILENCED.  */
/*  "#define register" IS THE LAST RESORT: IT HIDES A KEYWORD (CLANG WARNS,   */
/*   MSVC'S <xkeycheck.h> REFUSES IT) AND BREAKS register int X asm("r10").   */
#ifndef CMT_NO_REGISTER_FIX
#ifdef LOCALMACRO__REGISTER_CPLUSPLUS
#if (LOCALMACRO__REGISTER_CPLUSPLUS >= 201103L)
#ifdef __clang__ /* AN ERROR IN C++17, A WARNING IN C++11 AND C++14 */
#ifdef __has_warning
#if __has_warning("-Wregister")
#pragma clang diagnostic ignored "-Wregister"
#define LOCALMACRO__REGISTER_SILENCED
#endif /* __has_warning("-Wregister") */

#if __has_warning("-Wdeprecated-register")
#pragma clang diagnostic ignored "-Wdeprecated-register"
#endif /* __has_warning("-Wdeprecated-register") */
#endif /* __has_warning */
#else /* !__clang__ */
#ifdef __GNUC__
#ifndef __INTEL_COMPILER /* CLASSIC ICC ONLY PRETENDS TO BE GCC */
#if (__GNUC__ >= 7) /* A WARNING IN C++17, -pedantic-errors TOO */
#pragma GCC diagnostic ignored "-Wregister"
#define LOCALMACRO__REGISTER_SILENCED
#endif /* __GNUC__ >= 7 */
#endif /* !__INTEL_COMPILER */
#endif /* __GNUC__ */

#ifdef _MSC_VER
#if (_MSC_VER >= 1910) /* C5033: NO LONGER A SUPPORTED STORAGE CLASS */
#pragma warning(disable: 5033)
#define LOCALMACRO__REGISTER_SILENCED
#endif /* _MSC_VER >= 1910 */
#endif /* _MSC_VER */
#endif /* __clang__ */

#ifndef LOCALMACRO__REGISTER_SILENCED /* LAST RESORT, C++17 AND LATER */
#if (LOCALMACRO__REGISTER_CPLUSPLUS >= 201703L)
#ifndef register
#define register
#endif /* !register */
#endif /* LOCALMACRO__REGISTER_CPLUSPLUS >= 201703L */
#else /* LOCALMACRO__REGISTER_SILENCED */
#undef LOCALMACRO__REGISTER_SILENCED
#endif /* !LOCALMACRO__REGISTER_SILENCED */
#endif /* LOCALMACRO__REGISTER_CPLUSPLUS >= 201103L */
#endif /* LOCALMACRO__REGISTER_CPLUSPLUS */
#endif /* !CMT_NO_REGISTER_FIX */
/* **************************** [^] register [^] **************************** */

#ifdef LOCALMACRO__REGISTER_CPLUSPLUS
#undef LOCALMACRO__REGISTER_CPLUSPLUS
#endif /* LOCALMACRO__REGISTER_CPLUSPLUS */
#endif /* !REGISTER_H */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
