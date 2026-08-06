/******************************************************************************\
# H - TRY_CATCH                                  #       Maximum Tension       #
################################################################################
#                                                #      -__            __-     #
# Teoman Deniz                                   #  :    :!1!-_    _-!1!:    : #
# maximum-tension.com                            #  ::                      :: #
#                                                #  :!:    : :: : :  :  ::::!: #
# +.....................++.....................+ #   :!:: :!:!1:!:!::1:::!!!:  #
# : C - Maximum Tension :: Create - 2025/04/25 : #   ::!::!!1001010!:!11!!::   #
# :---------------------::---------------------: #   :!1!!11000000000011!!:    #
# : License - GPL-3.0   :: Update - 2026/08/06 : #    ::::!!!1!!1!!!1!!!::     #
# +.....................++.....................+ #       ::::!::!:::!::::      #
\******************************************************************************/

/******************************************************************************\
|* __________________________________________________________________________ *|
|*|                                TRY_CATCH                                 |*|
|*|__________________________________________________________________________|*|
|*|                                                                          |*|
|*| PROVIDES A LIGHTWEIGHT EXCEPTION-STYLE CONTROL FLOW INTERFACE FOR C      |*|
|*| BASED ON setjmp/longjmp.                                                 |*|
|*|          ^^^^^^ ^^^^^^^                                                  |*|
|*| RATHER THAN REQUIRING COMPILER-SPECIFIC LANGUAGE EXTENSIONS,             |*|
|*| <TRY_CATCH.H> IMPLEMENTS PORTABLE <TRY>, <CATCH>, AND <THROW> CONSTRUCTS |*|
|*| USING THE STANDARD C RUNTIME.                                            |*|
|*|        ___                                                               |*|
|*| NESTED TRY BLOCKS ARE FULLY SUPPORTED, ALLOWING EXCEPTIONS TO            |*|
|*| PROPAGATE TO THE MOST RECENTLY ACTIVE HANDLER.                           |*|
|*|                                                                          |*|
|*| WHEN AN EXCEPTION IS THROWN, EXECUTION IMMEDIATELY TRANSFERS TO THE      |*|
|*| MATCHING <CATCH> BLOCK, CARRYING A USER-DEFINED VALUE THAT REPRESENTS    |*|
|*| THE EXCEPTION.                                                           |*|
|*|                                                                          |*|
|*| THE RESULT IS A SIMPLE, COMPILER-INDEPENDENT EXCEPTION MECHANISM THAT    |*|
|*| CLOSELY RESEMBLES HIGHER-LEVEL LANGUAGE EXCEPTION HANDLING WHILE         |*|
|*| REMAINING ENTIRELY COMPATIBLE WITH STANDARD C.                           |*|
|*|__________________________________________________________________________|*|
|*                                                                            *|
\******************************************************************************/

/*############################################################################*\
|*#                                 CONTENTS                                 #*|
|*############################################################################*|
|* __________________________________________________________________________ *|
|*| CONTENT                                                       | DOC LINE |*|
|*|===============================================================|==========|*|
|*| #define TRY                                                   | 61       |*|
|*| #define try                                                   |          |*|
|*|---------------------------------------------------------------|----------|*|
|*| #define CATCH(ERROR_VARIABLE)                                 | 93       |*|
|*| #define catch(error_variable)                                 |          |*|
|*|---------------------------------------------------------------|----------|*|
|*| static int THROW(VAR);                                        | 124      |*|
|*| static int throw(var);                                        |          |*|
|*|---------------------------------------------------------------|----------|*|
|*| #define IS_IN_TRY                                             | 152      |*|
|*| #define is_in_try                                             |          |*|
|*|_______________________________________________________________|__________|*|
|*                                                                            *|
|*                                  .......                                   *|
|* .................................: TRY :.................................. *|
|* :                                '''''''                                 : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| #define TRY                                                         : *|
|* : 3| #define try                                                         : *|
|* : 4|                                                                     : *|
|* :                                                                        : *|
|* : BEGINS A PROTECTED EXECUTION BLOCK.                                    : *|
|* :                                                                        : *|
|* : IF NO EXCEPTION IS THROWN, EXECUTION CONTINUES NORMALLY THROUGH THE    : *|
|* : BLOCK. EXCEPTIONS RAISED WITH <THROW> IMMEDIATELY TRANSFER EXECUTION   : *|
|* : TO THE MATCHING CATCH BLOCK.                                           : *|
|* :                 ^^^^^                                                  : *|
|* : EXAMPLE                                                                : *|
|* :                                                                        : *|
|* :   v [C LANGUAGE]                                                       : *|
|* :  1|                                                                    : *|
|* :  2| TRY                                                                : *|
|* :  3| {                                                                  : *|
|* :  4|     printf("Before exception.\n");                                 : *|
|* :  5|     THROW("Something went wrong.");                                : *|
|* :  6|     printf("This line is never reached.\n");                       : *|
|* :  7| }                                                                  : *|
|* :  8| CATCH(var error)                                                   : *|
|* :  9| {                                                                  : *|
|* : 10|     printf("%s\n", error);                                         : *|
|* : 11| }                                                                  : *|
|* : 12|                                                                    : *|
|* :........................................................................: *|
|*                                                                            *|
|*                                 .........                                  *|
|* ................................: CATCH :................................. *|
|* :                               '''''''''                                : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| #define CATCH(ERROR_VARIABLE)                                       : *|
|* : 3| #define catch(error_variable)                                       : *|
|* : 4|                                                                     : *|
|* :                                                                        : *|
|* : HANDLES AN EXCEPTION RAISED BY A MATCHING TRY BLOCK.                   : *|
|* :                                           ^^^                          : *|
|* : THE SPECIFIED VARIABLE RECEIVES THE VALUE SUPPLIED TO <THROW>. IF NO   : *|
|* : EXCEPTION WAS THROWN, THE CATCH BLOCK IS SKIPPED.                      : *|
|* :                           ^^^^^                                        : *|
|* : EXAMPLE                                                                : *|
|* :                                                                        : *|
|* :   v [C LANGUAGE]                                                       : *|
|* :  1|                                                                    : *|
|* :  2| PTR error;                                                         : *|
|* :  3|                                                                    : *|
|* :  4| TRY                                                                : *|
|* :  5| {                                                                  : *|
|* :  6|     THROW("File not found.");                                      : *|
|* :  7| }                                                                  : *|
|* :  8| CATCH(error)                                                       : *|
|* :  9| {                                                                  : *|
|* : 10|     printf("Error: %s\n", (char *)error);                          : *|
|* : 11| }                                                                  : *|
|* : 12|                                                                    : *|
|* :........................................................................: *|
|*                                                                            *|
|*                                 .........                                  *|
|* ................................: THROW :................................. *|
|* :                               '''''''''                                : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| static int    THROW(VAR);                                           : *|
|* : 3| static int    throw(var);                                           : *|
|* : 4|                                                                     : *|
|* :                                                                        : *|
|* : RAISES AN EXCEPTION FROM WITHIN AN ACTIVE TRY BLOCK.                   : *|
|* :                                           ^^^                          : *|
|* : EXECUTION IMMEDIATELY LEAVES THE CURRENT PROTECTED BLOCK AND RESUMES   : *|
|* : IN ITS MATCHING <CATCH> BLOCK, PASSING THE SUPPLIED VALUE AS THE       : *|
|* : EXCEPTION.                                                             : *|
|* :                                                                        : *|
|* : IF NO TRY BLOCK IS CURRENTLY ACTIVE, THE MACRO HAS NO EFFECT.          : *|
|* :       ^^^                                                              : *|
|* : EXAMPLE                                                                : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| if (file == NULL)                                                   : *|
|* : 3| {                                                                   : *|
|* : 4|     throw("Unable to open file.");                                  : *|
|* : 5| }                                                                   : *|
|* : 6|                                                                     : *|
|* :........................................................................: *|
|*                                                                            *|
|*                               .............                                *|
|* ..............................: IS_IN_TRY :............................... *|
|* :                             '''''''''''''                              : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| #define IS_IN_TRY                                                   : *|
|* : 3| #define is_in_try                                                   : *|
|* : 4|                                                                     : *|
|* :                                                                        : *|
|* : EVALUATES TO A NON-ZERO VALUE WHEN EXECUTION IS CURRENTLY INSIDE ONE   : *|
|* : OR MORE ACTIVE TRY BLOCKS.                                             : *|
|* :                ^^^                                                     : *|
|* : THIS CAN BE USED TO DETERMINE WHETHER CALLING <THROW> WOULD TRANSFER   : *|
|* : CONTROL TO AN EXCEPTION HANDLER.                                       : *|
|* :                                                                        : *|
|* : EXAMPLE                                                                : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| if (IS_IN_TRY)                                                      : *|
|* : 3| {                                                                   : *|
|* : 4|     THROW("Unexpected error.");                                     : *|
|* : 5| }                                                                   : *|
|* : 6|                                                                     : *|
|* :........................................................................: *|
|*                                                                            *|
|*                                ............                                *|
|* ...............................: EXAMPLES :............................... *|
|* :                              ''''''''''''                              : *|
|* : BASIC TRY/CATCH                                                        : *|
|* :                                                                        : *|
|* :   v [C LANGUAGE]                                                       : *|
|* :  1|                                                                    : *|
|* :  2| try                                                                : *|
|* :  3| {                                                                  : *|
|* :  4|     if (1)                                                         : *|
|* :  5|         throw (99);                                                : *|
|* :  6| }                                                                  : *|
|* :  7| catch (var err)                                                    : *|
|* :  8| {                                                                  : *|
|* :  9|     printf("ERROR: %d\n", err);                                    : *|
|* : 10| }                                                                  : *|
|* : 11|                                                                    : *|
|* :                                                                        : *|
|* : TCC (TINY C COMPILER) COMPATIBILITY                                    : *|
|* :                                                                        : *|
|* : COMPILERS LIKE TCC DO NOT ALLOW VARIABLE DECLARATIONS INSIDE CONTROL   : *|
|* : CLAUSES (E.G. for (int a;...)).                                        : *|
|* :               ^^^^^^^^^^^^^^^                                          : *|
|* : SO, DECLARE var err; OUTSIDE THE catch() SCOPE:                        : *|
|* :             ^^^^^^^^             ^^^^^^^                               : *|
|* :   v [C LANGUAGE]                                                       : *|
|* :  1|                                                                    : *|
|* :  2| var    err;                                                        : *|
|* :  3|                                                                    : *|
|* :  4| try                                                                : *|
|* :  5| {                                                                  : *|
|* :  6|     if (1)                                                         : *|
|* :  7|         throw (99);                                                : *|
|* :  8| }                                                                  : *|
|* :  9| catch (err)                                                        : *|
|* : 10| {                                                                  : *|
|* : 11|     printf("ERROR: %d\n", err);                                    : *|
|* : 12| }                                                                  : *|
|* : 13|                                                                    : *|
|* :                                                                        : *|
|* : TRY/CATCH INSIDE A CALLED FUNCTION                                     : *|
|* :                                                                        : *|
|* :   v [C LANGUAGE]                                                       : *|
|* :  1|                                                                    : *|
|* :  2| #include <stdio.h>                                                 : *|
|* :  3| #include "CMT/KEYWORDS/TRY_CATCH.H"                                : *|
|* :  4|                                                                    : *|
|* :  5| int test(void)                                                     : *|
|* :  6| {                                                                  : *|
|* :  7|     if (is_in_try)                                                 : *|
|* :  8|         throw ("test runned in TRY block");                        : *|
|* :  9|     else                                                           : *|
|* : 10|         return (-1);                                               : *|
|* : 11|                                                                    : *|
|* : 12|     return (0);                                                    : *|
|* : 13| }                                                                  : *|
|* : 14|                                                                    : *|
|* : 15| int main(void)                                                     : *|
|* : 16| {                                                                  : *|
|* : 17|     try                                                            : *|
|* : 18|     {                                                              : *|
|* : 19|         test();                                                    : *|
|* : 20|     }                                                              : *|
|* : 21|     catch (char *err)                                              : *|
|* : 22|     {                                                              : *|
|* : 23|         printf("ERROR: %s\n", err);                                : *|
|* : 24|     }                                                              : *|
|* : 25|                                                                    : *|
|* : 26|     return (0);                                                    : *|
|* : 27| }                                                                  : *|
|* : 28|                                                                    : *|
|* :                                                                        : *|
|* : NESTED TRY/CATCH                                                       : *|
|* :                                                                        : *|
|* :   v [C LANGUAGE]                                                       : *|
|* :  1|                                                                    : *|
|* :  2| try                                                                : *|
|* :  3| {                                                                  : *|
|* :  4|     try {                                                          : *|
|* :  5|         throw (42);                                                : *|
|* :  6|     }                                                              : *|
|* :  7|     catch (var error) {                                            : *|
|* :  8|         printf("err_1: %d\n", error);                              : *|
|* :  9|         throw (32);                                                : *|
|* : 10|     }                                                              : *|
|* : 11| }                                                                  : *|
|* : 12| catch (var error)                                                  : *|
|* : 13| {                                                                  : *|
|* : 14|     printf("err_2: %d\n", error);                                  : *|
|* : 15| }                                                                  : *|
|* : 16|                                                                    : *|
|* :........................................................................: *|
|*                                                                            *|
\******************************************************************************/

#ifndef TRY_CATCH_H
#define TRY_CATCH_H 202608 /* VERSION */

#define CMT_TRY_CATCH_MEMORY_PAGE_SIZE 32 /* CHANGE IF YOU WANT */

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
#include "../ENVIRONMENTS/KNR_STYLE.H"
/******* """""""""""""""""""""""""""""
 * #define KNR_STYLE
 * #define unsigned
 */
#include "../ATTRIBUTES/EXTERN_C.H"
/******* """"""""""""""""""""""""""
 * #define EXTERN_C_START
 * #define EXTERN_C_END
 */
#include <setjmp.h> /* TODO: UPGRADE AND UPDATE LATER */
/******* """"""""""
 * #define jmp_buf
 * #define setjmp(env)
 * #define longjmp(env, val)
 */
#include "../ATTRIBUTES/LOCAL.H"
/******* """""""""""""""""""""""
 * #define LOCAL
 */
#include "../ATTRIBUTES/UNUSED.H"
/******* """"""""""""""""""""""""
 * #define UNUSED
 */
#include "../OS_API/MEMORY.H"
/******* """"""""""""""""""""
 * PTR	ALLOC(LET);
 * void	FREE(PTR);
 * PTR	REALLOC(PTR, LET);
 */
#include "TYPES.H"
/******* """""""""
 * typedef	PTR;
 * typedef	VAR;
 * typedef	var;
 */
/* **************************** [^] INCLUDES [^] **************************** */

#define __TRY_CATCH_SHRINK__() \
	do\
	{\
		if (\
			G__TRY_CATCH_INDEX_LIMIT__ > CMT_TRY_CATCH_MEMORY_PAGE_SIZE && \
			G__TRY_CATCH_INDEX__ <= \
			(G__TRY_CATCH_INDEX_LIMIT__ - CMT_TRY_CATCH_MEMORY_PAGE_SIZE) \
		)\
		{\
			LET __NEW_LIMIT__ = \
				G__TRY_CATCH_INDEX_LIMIT__ - CMT_TRY_CATCH_MEMORY_PAGE_SIZE;\
			\
			jmp_buf	*__NEW_BUFFER__ = \
				(jmp_buf *)REALLOC(\
					G__TRY_CATCH_BUFFER__, __NEW_LIMIT__ * sizeof(jmp_buf)	\
				);\
			\
			if (__NEW_BUFFER__)\
			{\
				G__TRY_CATCH_BUFFER__ = __NEW_BUFFER__;\
				G__TRY_CATCH_INDEX_LIMIT__ = __NEW_LIMIT__;\
			}\
		}\
	}\
	while (0)

#define TRY \
	if (\
		LOCALFUNCTION__TRY_CATCH_GROW__() && \
		!setjmp(G__TRY_CATCH_BUFFER__[G__TRY_CATCH_INDEX__++])\
	)

#define CATCH(ERROR_VARIABLE) \
	if (G__TRY_CATCH_VALUE__ == (PTR)0)\
	{\
		if (G__TRY_CATCH_INDEX__)\
		{\
			--G__TRY_CATCH_INDEX__;\
			__TRY_CATCH_SHRINK__();\
		}\
	}\
	else\
		for (\
			ERROR_VARIABLE = G__TRY_CATCH_VALUE__;\
			G__TRY_CATCH_VALUE__;\
			G__TRY_CATCH_VALUE__ = (PTR)0\
		)

#define LOCALMACRO__THROW_CONTENT(__THROW_VALUE__) \
	if (G__TRY_CATCH_INDEX__ != 0)\
	{\
		G__TRY_CATCH_VALUE__ = (PTR)(__THROW_VALUE__);\
		\
		--G__TRY_CATCH_INDEX__;\
		__TRY_CATCH_SHRINK__();\
		\
		longjmp(\
			G__TRY_CATCH_BUFFER__[G__TRY_CATCH_INDEX__], \
			(int)(!!(__THROW_VALUE__))\
		);\
	}\
	\
	return (1)

#define IS_IN_TRY (!!G__TRY_CATCH_INDEX__)

/* *************************** [v] MVS LINKER [v] *************************** */
/* **** MVS LINKER DOES NOT SUPPORT EXTERNAL NAMES LARGER THAN 8 BYTES!! **** */
#ifdef __MVS__ /* IBM Z/OS XL C/C++ */
#define G__TRY_CATCH_BUFFER__ G_TRYBFR
#define G__TRY_CATCH_INDEX__ G_TRYIND
#define G__TRY_CATCH_VALUE__ G_TRYVAL
#define G__TRY_CATCH_INDEX_LIMIT__ G_TRYILM;
#endif /* __MVS__ */
/* *************************** [^] MVS LINKER [^] *************************** */

/* **************************** [v] EXTERNS [v] ***************************** */
EXTERN_C_START
extern LOCAL jmp_buf	*G__TRY_CATCH_BUFFER__;
extern LOCAL LET		G__TRY_CATCH_INDEX__;
extern LOCAL LET		G__TRY_CATCH_INDEX_LIMIT__;
extern LOCAL PTR		G__TRY_CATCH_VALUE__;
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

/* .,,,,. #==========================================================# .,,,,. */
/*  \\//  |                  SETUP MEMBER CREATION                   |  \\//  */
/*   \/   #==========================================================#   \/   */

#undef GLOBALCONSTRUCTOR__TRY_CATCH
#undef GLOBALDESTRUCTOR__TRY_CATCH

#define GLOBALCONSTRUCTOR__TRY_CATCH \
	do\
	{\
		G__TRY_CATCH_BUFFER__ = \
			(jmp_buf *)ALLOC(CMT_TRY_CATCH_MEMORY_PAGE_SIZE * sizeof(jmp_buf));\
	}\
	while (0);

#define GLOBALDESTRUCTOR__TRY_CATCH \
	do\
	{\
		if (G__TRY_CATCH_BUFFER__)\
			FREE(G__TRY_CATCH_BUFFER__);\
	}\
	while (0);

/*   /\   #==========================================================#   /\   */
/*  //\\  |                  SETUP MEMBER CREATION                   |  //\\  */
/* '""""' #==========================================================# '""""' */

#ifdef LOCALMACRO__SETUP_LINKABLE
#undef LOCALMACRO__SETUP_LINKABLE

/* .,,,,. #==========================================================# .,,,,. */
/*  \\//  |                 LINKABLE MEMBER CREATION                 |  \\//  */
/*   \/   #==========================================================#   \/   */

#define LOCALLINKER__TRY_CATCH \
	LOCAL jmp_buf	*G__TRY_CATCH_BUFFER__ = (jmp_buf *)0;\
	LOCAL LET		G__TRY_CATCH_INDEX__ = 0;\
	LOCAL LET		G__TRY_CATCH_INDEX_LIMIT__ = \
		CMT_TRY_CATCH_MEMORY_PAGE_SIZE;\
	LOCAL PTR		G__TRY_CATCH_VALUE__ = (PTR)0;\

/*   /\   #==========================================================#   /\   */
/*  //\\  |                 LINKABLE MEMBER CREATION                 |  //\\  */
/* '""""' #==========================================================# '""""' */

#ifdef CMT_SETUP

/* [v] %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% /!\ IMPORTANT /!\ */
EXTERN_C_START
LOCALLINKER__TRY_CATCH
EXTERN_C_END
/* [^] %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% /!\ IMPORTANT /!\ */

#include "../CMT/CONSTRUCTOR.INL"
#else /* !CMT_SETUP */

/* [v] %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% /!\ IMPORTANT /!\ */
#undef GLOBALLINKER__TRY_CATCH
#define GLOBALLINKER__TRY_CATCH LOCALLINKER__TRY_CATCH
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

EXTERN_C_START
UNUSED static int
#ifndef KNR_STYLE /* STANDARD C */
	LOCALFUNCTION__TRY_CATCH_GROW__(void)
#else /* K&R */
	LOCALFUNCTION__TRY_CATCH_GROW__()
#endif /* !KNR_STYLE */
{
	if (G__TRY_CATCH_INDEX__ >= G__TRY_CATCH_INDEX_LIMIT__)
	{
		LET __NEW_LIMIT__ =
			G__TRY_CATCH_INDEX_LIMIT__ + CMT_TRY_CATCH_MEMORY_PAGE_SIZE;
		
		jmp_buf	*__NEW_BUFFER__ =
			(jmp_buf *)REALLOC(
				G__TRY_CATCH_BUFFER__,
				__NEW_LIMIT__ * sizeof(jmp_buf)
			);

		if (__NEW_BUFFER__)
		{
			G__TRY_CATCH_BUFFER__ = __NEW_BUFFER__;
			G__TRY_CATCH_INDEX_LIMIT__ = __NEW_LIMIT__;
		}
	}

	return (1);
}

UNUSED static int
#ifndef KNR_STYLE /* STANDARD C */
	THROW(PTR THROW_VALUE)
#else /* K&R */
	THROW(THROW_VALUE)
	PTR	THROW_VALUE;
#endif /* !KNR_STYLE */
{
	LOCALMACRO__THROW_CONTENT(THROW_VALUE);
}

UNUSED static int
#ifndef KNR_STYLE /* STANDARD C */
	throw(ptr throw_value)
#else /* K&R */
	throw(throw_value)
	ptr	throw_value;
#endif /* !KNR_STYLE */
{
	LOCALMACRO__THROW_CONTENT(throw_value);
}
EXTERN_C_END

/* **************************** [v] LOWERCASE [v] *************************** */
#ifndef __cplusplus /* C++ */
#define try TRY
#define catch(error_variable) CATCH(error_variable)
#endif /* __cplusplus */

#define is_in_try IS_IN_TRY
/* **************************** [^] LOWERCASE [^] *************************** */

/* ************************ [v] TI CGT CCS (POP) [v] ************************ */
#ifdef __TI_COMPILER_VERSION__
#pragma diag_pop /* TI CGT CCS COMPILER DIRECTIVES */
#endif /* __TI_COMPILER_VERSION__ */
/* ************************ [^] TI CGT CCS (POP) [^] ************************ */
#endif /* !TRY_CATCH_H */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
