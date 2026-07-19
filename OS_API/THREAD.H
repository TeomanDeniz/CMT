/******************************************************************************\
# H - THREAD                                     #       Maximum Tension       #
################################################################################
#                                                #      -__            __-     #
# Teoman Deniz                                   #  :    :!1!-_    _-!1!:    : #
# maximum-tension.com                            #  ::                      :: #
#                                                #  :!:    : :: : :  :  ::::!: #
# +.....................++.....................+ #   :!:: :!:!1:!:!::1:::!!!:  #
# : C - Maximum Tension :: Create - 2025/06/05 : #   ::!::!!1001010!:!11!!::   #
# :---------------------::---------------------: #   :!1!!11000000000011!!:    #
# : License - GPL-3.0   :: Update - 2026/07/14 : #    ::::!!!1!!1!!!1!!!::     #
# +.....................++.....................+ #       ::::!::!:::!::::      #
\******************************************************************************/

/******************************************************************************\
|* __________________________________________________________________________ *|
|*|                                  THREAD                                  |*|
|*|__________________________________________________________________________|*|
|*| ________                                                                 |*|
|*| THREAD.H PROVIDES A SMALL CROSS-PLATFORM THREAD ABSTRACTION LAYER FOR    |*|
|*| CREATING AND SYNCHRONIZING THREADS USING A SINGLE, CONSISTENT API.       |*|
|*|                                                                          |*|
|*| THE GOAL OF THE MODULE IS TO HIDE PLATFORM-SPECIFIC THREADING            |*|
|*| IMPLEMENTATIONS BEHIND A COMMON INTERFACE, ALLOWING APPLICATIONS AND     |*|
|*| LIBRARIES TO CREATE AND MANAGE THREADS WITHOUT DIRECTLY DEPENDING ON     |*|
|*| OPERATING SYSTEM APIS.                                                   |*|
|*|                                                                          |*|
|*| THE MODULE AUTOMATICALLY MAPS ITS FUNCTIONS AND TYPES TO THE NATIVE      |*|
|*| THREADING FACILITIES AVAILABLE ON THE TARGET PLATFORM.                   |*|
|*|                                                                          |*|
|*| WHILE THE UNDERLYING IMPLEMENTATION DIFFERS BETWEEN OPERATING SYSTEMS    |*|
|*| AND RTOSES, THE BEHAVIOR AND USAGE REMAIN CONSISTENT ACROSS ALL          |*|
|*| SUPPORTED ENVIRONMENTS.                                                  |*|
|*| ________                                                                 |*|
|*| THREAD.H IS INTENDED FOR PROJECTS THAT REQUIRE PORTABLE MULTITHREADING   |*|
|*| SUPPORT WHILE MINIMIZING PLATFORM-SPECIFIC CODE AND CONDITIONAL          |*|
|*| COMPILATION.                                                             |*|
|*|                                                                          |*|
|*| SUPPORTED PLATFORMS:                                                     |*|
|*|                    _________________                                     |*|
|*| * FreeRTOS (DEFINE CMT_TRY_FREE_RTOS)                                    |*|
|*|                                                                          |*|
|*| * Haiku                                                                  |*|
|*|                                                                          |*|
|*| * OS/2 (BOTH 32-BIT AND 16-BIT)                                          |*|
|*|                 _____________                                            |*|
|*| * Plan9 (DEFINE CMT_TRY_PLAN9)                                           |*|
|*|                   ______________                                         |*|
|*| * TI-RTOS (DEFINE CMT_TRY_TIRTOS)                                        |*|
|*|                                                                          |*|
|*| * Unix (MacOS INCLUDED)                                                  |*|
|*|                                                                          |*|
|*| * VxWorks                                                                |*|
|*|                                                                          |*|
|*| * Windows                                                                |*|
|*|                  ______________                                          |*|
|*| * Zephyr (DEFINE CMT_TRY_ZEPHYR)                                         |*|
|*|                    _________                                             |*|
|*| IF CMT INDICATES A CMT_TRY_* MACRO FOR YOUR PLATFORM, YOU MUST DEFINE IT |*|
|*| MANUALLY.                                                                |*|
|*|                                                                          |*|
|*| THE BUILD SYSTEM CANNOT RELIABLY AUTO-DETECT THESE PLATFORMS BECAUSE     |*|
|*| MOST COMPILERS DO NOT EXPOSE A CONSISTENT PLATFORM IDENTIFICATION MACRO. |*|
|*|                                                                          |*|
|*| I AM SO SORRY ABOUT THAT ;-;                                             |*|
|*|                                                                          |*|
|*| ALSO, AS AN EXTRA: IF YOU CAN'T FIND YOUR PLATFORM IN THE LIST, DON'T    |*|
|*| WORRY; CMT ALSO PROVIDES A GO-LIKE MULTITASKING SYSTEM, OR ITS OWN       |*|
|*| MULTITHREADING MANAGEMENT, FOR YOUR PLATFORM (FOR EXAMPLE, "MS-DOS"),    |*|
|*| ALLOWING IT TO WORK ON PLATFORMS THAT AREN'T OFFICIALLY SUPPORTED.       |*|
|*|__________________________________________________________________________|*|
|*                                                                            *|
\******************************************************************************/

/*############################################################################*\
|*#                                 CONTENTS                                 #*|
|*############################################################################*|
|* __________________________________________________________________________ *|
|*| CONTENT                                                       | DOC LINE |*|
|*|===============================================================|==========|*|
|*| T_THREAD THREAD_CREATE(void *(*) (void *), void *);           | 92       |*|
|*| t_thread thread_create(void *(*) (void *), void *);           |          |*|
|*|---------------------------------------------------------------|----------|*|
|*| int THREAD_JOIN(T_THREAD, void **);                           | 133      |*|
|*| int thread_join(t_thread, void **);                           |          |*|
|*|---------------------------------------------------------------|----------|*|
|*| typedef T_THREAD;                                             | N/A      |*|
|*| typedef t_thread;                                             |          |*|
|*|_______________________________________________________________|__________|*|
|*                                                                            *|
|*                             .................                              *|
|* ............................: THREAD_CREATE :............................. *|
|* :                           '''''''''''''''''                            : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| T_THREAD    THREAD_CREATE(void *(*) (void *), void *);              : *|
|* : 3| t_thread    thread_create(void *(*) (void *), void *);              : *|
|* : 4|                                                                     : *|
|* :                                                                        : *|
|* : CREATES A NEW THREAD AND STARTS EXECUTION IMMEDIATELY.                 : *|
|* :                                                                        : *|
|* : THE FIRST ARGUMENT IS THE THREAD ENTRY FUNCTION, WHICH MUST HAVE       : *|
|* : SIGNATURE void *(*)(void *).                                           : *|
|* :           ^^^^^^^^^^^^^^^^^                                            : *|
|* : THE SECOND ARGUMENT IS PASSED AS THE INPUT PARAMETER TO THE THREAD     : *|
|* : FUNCTION.                                                              : *|
|* :                          ________   ________                 ____      : *|
|* : RETURNS A THREAD HANDLE (t_thread / T_THREAD) ON SUCCESS, OR NULL ON   : *|
|* : FAILURE.                                                               : *|
|* :                                                                        : *|
|* : EXAMPLE:                                                               : *|
|* :                                                                        : *|
|* :   v [C LANGUAGE]                                                       : *|
|* :  1|                                                                    : *|
|* :  2| void    *my_thread(void *arg)                                      : *|
|* :  3| {                                                                  : *|
|* :  4|     // ...                                                         : *|
|* :  5|     return (0);                                                    : *|
|* :  6| }                                                                  : *|
|* :  7|                                                                    : *|
|* :  8| {                                                                  : *|
|* :  9|     t_thread    thread = thread_create(my_thread, NULL);           : *|
|* : 10|                                                                    : *|
|* : 11|     if (!thread)                                                   : *|
|* : 12|     {                                                              : *|
|* : 13|         // HANDLE ERROR                                            : *|
|* : 14|     }                                                              : *|
|* : 15| }                                                                  : *|
|* : 16|                                                                    : *|
|* :........................................................................: *|
|*                                                                            *|
|*                               ...............                              *|
|* ..............................: THREAD_JOIN :............................. *|
|* :                             '''''''''''''''                            : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| int THREAD_JOIN(T_THREAD, void **);                                 : *|
|* : 3| int thread_join(t_thread, void **);                                 : *|
|* : 4|                                                                     : *|
|* :                                                                        : *|
|* : WAITS FOR THE SPECIFIED THREAD TO TERMINATE.                           : *|
|* :                                                                        : *|
|* : THE SECOND ARGUMENT IS AN OPTIONAL OUTPUT PARAMETER USED TO RETRIEVE   : *|
|* : THE THREAD'S RETURN VALUE.                                             : *|
|* :           ____                                                         : *|
|* : IT MAY BE NULL IF THE RETURN VALUE IS NOT NEEDED.                      : *|
|* :         _                                                              : *|
|* : RETURNS 0 ON SUCCESS, OR A NON-ZERO VALUE ON FAILURE.                  : *|
|* :                                                                        : *|
|* : EXAMPLES:                                                              : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| void *ret;                                                          : *|
|* : 3|                                                                     : *|
|* : 4| thread_join(thread, &ret);                                          : *|
|* : 5|                                                                     : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| thread_join(thread, NULL);                                          : *|
|* : 3|                                                                     : *|
|* :........................................................................: *|
|*                                                                            *|
\******************************************************************************/

/**
 * TODO:
 * Implement AmigaOS 3 & 4
 */

#ifndef THREAD_H
#define THREAD_H 202607 /* VERSION */

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
 * #define void
 * #define unsigned
 */
/* **************************** [^] INCLUDES [^] **************************** */

/* ***************** [v] LOCALMACRO_THREAD_FOR_WINDOWS [v] ****************** */
#ifdef _WIN32
#define LOCALMACRO_THREAD_FOR_WINDOWS
#define LOCALMACRO_THREAD_FOUND
#endif /* _WIN32 */
/* ***************** [^] LOCALMACRO_THREAD_FOR_WINDOWS [^] ****************** */

/* ******************* [v] LOCALMACRO_THREAD_FOR_UNIX [v] ******************* */
#ifndef LOCALMACRO_THREAD_FOUND
#ifdef __linux__
#define LOCALMACRO_THREAD_FOR_UNIX
#define LOCALMACRO_THREAD_FOUND
#else /* !__linux__ */
#ifdef __APPLE__
#define LOCALMACRO_THREAD_FOR_UNIX
#endif /* __APPLE__ */
#endif /* __linux__ */
#endif /* !LOCALMACRO_THREAD_FOUND */
/* ******************* [^] LOCALMACRO_THREAD_FOR_UNIX [^] ******************* */

/* ******************* [v] LOCALMACRO_THREAD_FOR_OS2 [v] ******************** */
#ifndef LOCALMACRO_THREAD_FOUND
#ifdef __OS2__
#define LOCALMACRO_THREAD_FOR_OS2
#define LOCALMACRO_THREAD_FOUND
#ifdef __32BIT__
#define LOCALMACRO_THREAD_FOR_OS2_32BIT
#else /* !__32BIT__ */
#ifdef _M_386
#define LOCALMACRO_THREAD_FOR_OS2_32BIT
#endif /* _M_386 */
#endif /* __32BIT__ */
#else /* !__OS2__ */
#ifdef __EMX__
#define LOCALMACRO_THREAD_FOR_OS2
#ifdef __32BIT__
#define LOCALMACRO_THREAD_FOR_OS2_32BIT
#else /* !__32BIT__ */
#ifdef _M_386
#define LOCALMACRO_THREAD_FOR_OS2_32BIT
#endif /* _M_386 */
#endif /* __32BIT__ */
#endif /* __EMX__ */
#endif /* __OS2__ */
#endif /* !LOCALMACRO_THREAD_FOUND */
/* ******************* [^] LOCALMACRO_THREAD_FOR_OS2 [^] ******************** */

/* ******************** [v] LOCALMACRO_THREAD_HAIKU [v] ********************* */
#ifndef LOCALMACRO_THREAD_FOUND
#ifdef __HAIKU__
#define LOCALMACRO_THREAD_HAIKU
#define LOCALMACRO_THREAD_FOUND
#endif /* __HAIKU__ */
#endif /* !LOCALMACRO_THREAD_FOUND */
/* ******************** [^] LOCALMACRO_THREAD_HAIKU [^] ********************* */

/* ******************** [v] LOCALMACRO_THREAD_PLAN9 [v] ********************* */
#ifndef LOCALMACRO_THREAD_FOUND
#ifdef CMT_TRY_PLAN9
#define LOCALMACRO_THREAD_PLAN9
#define LOCALMACRO_THREAD_FOUND
#endif /* CMT_TRY_PLAN9 */
#endif /* !LOCALMACRO_THREAD_FOUND */
/* ******************** [^] LOCALMACRO_THREAD_PLAN9 [^] ********************* */

/* ******************* [v] LOCALMACRO_THREAD_VXWORKS [v] ******************** */
#ifndef LOCALMACRO_THREAD_FOUND
#ifdef __VXWORKS__
#define LOCALMACRO_THREAD_VXWORKS
#define LOCALMACRO_THREAD_FOUND
#else /* !__VXWORKS__ */
#ifdef __vxworks
#define LOCALMACRO_THREAD_VXWORKS
#define LOCALMACRO_THREAD_FOUND
#endif /* __vxworks */
#endif /* __VXWORKS__ */
#endif /* !LOCALMACRO_THREAD_FOUND */
/* ******************* [^] LOCALMACRO_THREAD_VXWORKS [^] ******************** */

/* ******************* [v] LOCALMACRO_THREAD_FREERTOS [v] ******************* */
#ifndef LOCALMACRO_THREAD_FOUND
#ifdef freertos
#define LOCALMACRO_THREAD_FREERTOS
#define LOCALMACRO_THREAD_FOUND
#else /* !freertos */
#ifdef FREERTOS_CONFIG_H
#define LOCALMACRO_THREAD_FREERTOS
#define LOCALMACRO_THREAD_FOUND
#else /* !FREERTOS_CONFIG_H */
#ifdef __FREERTOS__
#define LOCALMACRO_THREAD_FREERTOS
#define LOCALMACRO_THREAD_FOUND
#else /* !__FREERTOS__ */
#ifdef CMT_TRY_FREE_RTOS
#define LOCALMACRO_THREAD_FREERTOS
#define LOCALMACRO_THREAD_FOUND
#endif /* CMT_TRY_FREE_RTOS */
#endif /* __FREERTOS__ */
#endif /* FREERTOS_CONFIG_H */
#endif /* freertos */
#endif /* !LOCALMACRO_THREAD_FOUND */
/* ******************* [^] LOCALMACRO_THREAD_FREERTOS [^] ******************* */

/* ******************* [v] LOCALMACRO_THREAD_ZEPHYR [v] ********************* */
#ifndef LOCALMACRO_THREAD_FOUND
#ifdef CONFIG_ZEPHYR
#define LOCALMACRO_THREAD_ZEPHYR
#define LOCALMACRO_THREAD_FOUND
#else /* !CONFIG_ZEPHYR */
#ifdef CONFIG_KERNEL_INIT_PRIORITY_DEFAULT
#define LOCALMACRO_THREAD_ZEPHYR
#define LOCALMACRO_THREAD_FOUND
#else /* !CONFIG_KERNEL_INIT_PRIORITY_DEFAULT */
#ifdef ZEPHYR_VERSION_CODE
#define LOCALMACRO_THREAD_ZEPHYR
#define LOCALMACRO_THREAD_FOUND
#else /* !ZEPHYR_VERSION_CODE */
#ifdef __ZEPHYR__
#define LOCALMACRO_THREAD_ZEPHYR
#define LOCALMACRO_THREAD_FOUND
#else /* !__ZEPHYR__ */
#ifdef CMT_TRY_ZEPHYR
#define LOCALMACRO_THREAD_ZEPHYR
#define LOCALMACRO_THREAD_FOUND
#endif /* CMT_TRY_ZEPHYR */
#endif /* __ZEPHYR__ */
#endif /* ZEPHYR_VERSION_CODE */
#endif /* CONFIG_KERNEL_INIT_PRIORITY_DEFAULT */
#endif /* CONFIG_ZEPHYR */
#endif /* !LOCALMACRO_THREAD_FOUND */
/* ******************* [^] LOCALMACRO_THREAD_ZEPHYR [^] ********************* */

/* ******************* [v] LOCALMACRO_THREAD_TI_RTOS [v] ******************** */
#ifndef LOCALMACRO_THREAD_FOUND
#ifdef __TI_COMPILER_VERSION__
#ifdef CMT_TRY_TIRTOS
#define LOCALMACRO_THREAD_TI_RTOS
#define LOCALMACRO_THREAD_FOUND
#endif /* CMT_TRY_TIRTOS */
#endif /* __TI_COMPILER_VERSION__ */
#endif /* !LOCALMACRO_THREAD_FOUND */
/* ******************* [^] LOCALMACRO_THREAD_TI_RTOS [^] ******************** */

#ifdef LOCALMACRO_THREAD_FOUND
#undef LOCALMACRO_THREAD_FOUND

#ifdef LOCALMACRO_THREAD_FOR_WINDOWS
#include "THREAD/WINDOWS.INL"
#undef LOCALMACRO_THREAD_FOR_WINDOWS
#endif /* LOCALMACRO_THREAD_FOR_WINDOWS */

#ifdef LOCALMACRO_THREAD_FOR_OS2
#ifdef LOCALMACRO_THREAD_FOR_OS2_32BIT
#include "THREAD/OS2_32BIT.INL"
#undef LOCALMACRO_THREAD_FOR_OS2_32BIT
#else /* !LOCALMACRO_THREAD_FOR_OS2_32BIT */
#include "THREAD/OS2_16BIT.INL"
#endif /* LOCALMACRO_THREAD_FOR_OS2_32BIT */
#undef LOCALMACRO_THREAD_FOR_OS2
#endif /* LOCALMACRO_THREAD_FOR_OS2 */

#ifdef LOCALMACRO_THREAD_FOR_UNIX
#include "THREAD/UNIX.INL"
#undef LOCALMACRO_THREAD_FOR_UNIX
#endif /* LOCALMACRO_THREAD_FOR_UNIX */

#ifdef LOCALMACRO_THREAD_HAIKU
#include "THREAD/HAIKU.INL"
#undef LOCALMACRO_THREAD_HAIKU
#endif /* LOCALMACRO_THREAD_HAIKU */

#ifdef LOCALMACRO_THREAD_PLAN9
#include "THREAD/PLAN9.INL"
#undef LOCALMACRO_THREAD_PLAN9
#endif /* LOCALMACRO_THREAD_PLAN9 */

#ifdef LOCALMACRO_THREAD_VXWORKS
#include "THREAD/VXWORKS.INL"
#undef LOCALMACRO_THREAD_VXWORKS
#endif /* LOCALMACRO_THREAD_VXWORKS */

#ifdef LOCALMACRO_THREAD_FREERTOS
#include "THREAD/FREERTOS.INL"
#undef LOCALMACRO_THREAD_FREERTOS
#endif /* LOCALMACRO_THREAD_FREERTOS */

#ifdef LOCALMACRO_THREAD_ZEPHYR
#include "THREAD/ZEPHYR.INL"
#undef LOCALMACRO_THREAD_ZEPHYR
#endif /* LOCALMACRO_THREAD_ZEPHYR */

#ifdef LOCALMACRO_THREAD_TI_RTOS
#include "THREAD/TI_RTOS.INL"
#undef LOCALMACRO_THREAD_TI_RTOS
#endif /* LOCALMACRO_THREAD_TI_RTOS */

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

/* *************************** [v] MVS LINKER [v] *************************** */
/* **** MVS LINKER DOES NOT SUPPORT EXTERNAL NAMES LARGER THAN 8 BYTES!! **** */
#ifdef __MVS__ /* IBM Z/OS XL C/C++ */
#define THREAD_CREATE CMTTHRCE
#define THREAD_JOIN CMTTHRJN
#endif /* __MVS__ */
/* *************************** [^] MVS LINKER [^] *************************** */

/* **************************** [v] EXTERNS [v] ***************************** */
#ifndef KNR_STYLE /* STANDARD C */
extern T_THREAD	THREAD_CREATE(void *(*) (void *), void *);
extern int		THREAD_JOIN(T_THREAD, void **);
#else /* K&R */
extern T_THREAD	THREAD_CREATE();
extern int		THREAD_JOIN();
#endif /* !KNR_STYLE */
/* **************************** [^] EXTERNS [^] ***************************** */

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

#ifndef LOCALCONSTRUCTOR__THREAD
#define LOCALCONSTRUCTOR__THREAD
#endif /* !LOCALCONSTRUCTOR__THREAD */

#undef GLOBALCONSTRUCTOR__THREAD
#define GLOBALCONSTRUCTOR__THREAD LOCALCONSTRUCTOR__THREAD

/*   /\   #==========================================================#   /\   */
/*  //\\  |                  SETUP MEMBER CREATION                   |  //\\  */
/* '""""' #==========================================================# '""""' */

#ifdef LOCALMACRO__SETUP_LINKABLE
#undef LOCALMACRO__SETUP_LINKABLE

/* .,,,,. #==========================================================# .,,,,. */
/*  \\//  |                 LINKABLE MEMBER CREATION                 |  \\//  */
/*   \/   #==========================================================#   \/   */

#ifndef LOCALMACRO__THREAD_GLOBALS
#define LOCALMACRO__THREAD_GLOBALS
#endif /* !LOCALMACRO__THREAD_GLOBALS */

#define LOCALLINKER__THREAD \
	LOCALMACRO__THREAD_GLOBALS \
	LOCALFUNCTION__THREAD_CREATE \
	LOCALFUNCTION__THREAD_JOIN

/*   /\   #==========================================================#   /\   */
/*  //\\  |                 LINKABLE MEMBER CREATION                 |  //\\  */
/* '""""' #==========================================================# '""""' */

#ifdef CMT_SETUP

/* [v] %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% /!\ IMPORTANT /!\ */
LOCALLINKER__THREAD
/* [^] %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% /!\ IMPORTANT /!\ */

#else /* !CMT_SETUP */

/* [v] %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% /!\ IMPORTANT /!\ */
#undef GLOBALLINKER__THREAD
#define GLOBALLINKER__THREAD LOCALLINKER__THREAD
/* [^] %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% /!\ IMPORTANT /!\ */

#include "../CMT_AUTO_LINKER.INL"
#endif /* CMT_SETUP */
#else /* !LOCALMACRO__SETUP_LINKABLE */
#include "../../../CMT_AUTO_CONSTRUCTOR.INL"
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
#else /* !LOCALMACRO_THREAD_FOUND */
/* **************************** [v] INCLUDES [v] **************************** */
#include "../KEYWORDS/TYPES.H"
/******* """""""""""""""""""""
 * typedef	VAR;
 */
/* **************************** [^] INCLUDES [^] **************************** */

typedef VAR	T_THREAD;

#define THREAD_CREATE(A, B) \
	"CMT - THREAD: OPERATING SYSTEM OR COMPILER DOESN'T SUPPORT THREADS!!!"
#define THREAD_JOIN(A, B) \
	"CMT - THREAD: OPERATING SYSTEM OR COMPILER DOESN'T SUPPORT THREADS!!!"
#endif /* LOCALMACRO_THREAD_FOUND */

/* *************************** [v] LOWERCASE [v] **************************** */
typedef T_THREAD	t_thread;

#define thread_create THREAD_CREATE
#define thread_join THREAD_JOIN
/* *************************** [^] LOWERCASE [^] **************************** */

/* ************************ [v] TI CGT CCS (POP) [v] ************************ */
#ifdef __TI_COMPILER_VERSION__
#pragma diag_pop /* TI CGT CCS COMPILER DIRECTIVES */
#endif /* __TI_COMPILER_VERSION__ */
/* ************************ [^] TI CGT CCS (POP) [^] ************************ */
#endif /* !THREAD_H */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
