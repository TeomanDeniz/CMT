/******************************************************************************\
# H - MUTEX                                      #       Maximum Tension       #
################################################################################
#                                                #      -__            __-     #
# Teoman Deniz                                   #  :    :!1!-_    _-!1!:    : #
# maximum-tension.com                            #  ::                      :: #
#                                                #  :!:    : :: : :  :  ::::!: #
# +.....................++.....................+ #   :!:: :!:!1:!:!::1:::!!!:  #
# : C - Maximum Tension :: Create - 2025/06/05 : #   ::!::!!1001010!:!11!!::   #
# :---------------------::---------------------: #   :!1!!11000000000011!!:    #
# : License - GPL-3.0   :: Update - 2026/07/04 : #    ::::!!!1!!1!!!1!!!::     #
# +.....................++.....................+ #       ::::!::!:::!::::      #
\******************************************************************************/

/******************************************************************************\
|* __________________________________________________________________________ *|
|*|                                  MUTEX                                   |*|
|*|__________________________________________________________________________|*|
|*|                                                                          |*|
|*| MUTEX PROVIDES A LIGHTWEIGHT, CROSS-PLATFORM MUTUAL EXCLUSION PRIMITIVE  |*|
|*| FOR SYNCHRONIZING ACCESS TO SHARED RESOURCES BETWEEN MULTIPLE THREADS.   |*|
|*|                                            ________                      |*|
|*| IT IS PRIMARILY INTENDED FOR USE ALONGSIDE THREAD.H, ALLOWING THREADS TO |*|
|*| SAFELY COORDINATE ACCESS TO DATA AND PREVENT RACE CONDITIONS.            |*|
|*|                                                                          |*|
|*| A MUTEX CAN BE CREATED, LOCKED, UNLOCKED, AND DESTROYED THROUGH A        |*|
|*| UNIFIED API THAT MAPS TO THE NATIVE SYNCHRONIZATION MECHANISMS OF EACH   |*|
|*| SUPPORTED OPERATING SYSTEM.                                              |*|
|*|                                                                          |*|
|*| THIS ALLOWS THE SAME SOURCE CODE TO BE USED ACROSS A WIDE RANGE OF       |*|
|*| PLATFORMS WITHOUT MODIFICATION.                                          |*|
|*|                                                                          |*|
|*| O - TYPICAL USE CASES INCLUDE:                                           |*|
|*| :                                                                        |*|
|*| :.., PROTECTING SHARED VARIABLES AND DATA STRUCTURES.                    |*|
|*| :                                                                        |*|
|*| :.., SERIALIZING ACCESS TO FILES, DEVICES, OR OTHER RESOURCES.           |*|
|*| :                                                                        |*|
|*| :.., COORDINATING WORK BETWEEN THREADS CREATED WITH THREAD.H.            |*|
|*| :                                                                        |*|
|*| :.., PREVENTING RACE CONDITIONS IN MULTITHREADED APPLICATIONS.           |*|
|*|                                                                          |*|
|*| MUTEX IS DESIGNED TO BE SIMPLE, PORTABLE, AND SUITABLE FOR BOTH DESKTOP  |*|
|*| AND EMBEDDED ENVIRONMENTS.                                               |*|
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
|*|__________________________________________________________________________|*|
|*                                                                            *|
\******************************************************************************/

/*############################################################################*\
|*#                                 CONTENTS                                 #*|
|*############################################################################*|
|* __________________________________________________________________________ *|
|*| CONTENT                                                       | DOC LINE |*|
|*|===============================================================|==========|*|
|*| int MUTEX_CREATE(T_MUTEX *);                                  | 100      |*|
|*| int mutex_create(t_mutex *);                                  |          |*|
|*|---------------------------------------------------------------|----------|*|
|*| int MUTEX_DESTROY(T_MUTEX *);                                 | 131      |*|
|*| int mutex_destroy(t_mutex *);                                 |          |*|
|*|---------------------------------------------------------------|----------|*|
|*| #define MUTEX_LOCK(MUTEX)                                     | 154      |*|
|*| #define mutex_lock(MUTEX)                                     |          |*|
|*|---------------------------------------------------------------|----------|*|
|*| #define MUTEX_UNLOCK(MUTEX)                                   | 173      |*|
|*| #define mutex_unlock(MUTEX)                                   |          |*|
|*|---------------------------------------------------------------|----------|*|
|*| typedef T_MUTEX;                                              | N/A      |*|
|*| typedef t_mutex;                                              |          |*|
|*|_______________________________________________________________|__________|*|
|*                                                                            *|
|*                              ................                              *|
|* .............................: MUTEX_CREATE :............................. *|
|* :                            ''''''''''''''''                            : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| int MUTEX_CREATE(T_MUTEX *);                                        : *|
|* : 3| int mutex_create(t_mutex *);                                        : *|
|* : 4|                                                                     : *|
|* :                                                                        : *|
|* : INITIALIZES A MUTEX OBJECT.                                            : *|
|* :                                                                        : *|
|* : THE ARGUMENT IS A POINTER TO A MUTEX HANDLE THAT WILL BE INITIALIZED   : *|
|* : BY THE FUNCTION.                                                       : *|
|* :         _                                                              : *|
|* : RETURNS 0 ON SUCCESS, OR A NON-ZERO VALUE ON FAILURE.                  : *|
|* :                                                                        : *|
|* : EXAMPLE:                                                               : *|
|* :                                                                        : *|
|* :   v [C LANGUAGE]                                                       : *|
|* :  1|                                                                    : *|
|* :  2| t_mutex mutex;                                                     : *|
|* :  3|                                                                    : *|
|* :  4| mutex_create(&mutex);                                              : *|
|* :  5|                                                                    : *|
|* :  6| if (!mutex)                                                        : *|
|* :  7| {                                                                  : *|
|* :  8|     // HANDLE ERROR                                                : *|
|* :  9| }                                                                  : *|
|* : 10|                                                                    : *|
|* :........................................................................: *|
|*                                                                            *|
|*                             .................                              *|
|* ............................: MUTEX_DESTROY :............................. *|
|* :                           '''''''''''''''''                            : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| int MUTEX_DESTROY(T_MUTEX *);                                       : *|
|* : 3| int mutex_destroy(t_mutex *);                                       : *|
|* : 4|                                                                     : *|
|* :                               ____________                             : *|
|* : DESTROYS A MUTEX CREATED WITH mutex_create.                            : *|
|* :                                                                        : *|
|* : THE MUTEX BECOMES INVALID AFTER THIS CALL.                             : *|
|* :         _                                                              : *|
|* : RETURNS 0 ON SUCCESS, OR A NON-ZERO VALUE ON FAILURE.                  : *|
|* :                                                                        : *|
|* : EXAMPLE:                                                               : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| mutex_destroy(&mutex);                                              : *|
|* : 3|                                                                     : *|
|* :........................................................................: *|
|*                                                                            *|
|*                               ..............                               *|
|* ..............................: MUTEX_LOCK :.............................. *|
|* :                             ''''''''''''''                             : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| #define MUTEX_LOCK(MUTEX)                                           : *|
|* : 3| #define mutex_lock(MUTEX)                                           : *|
|* : 4|                                                                     : *|
|* :                                                                        : *|
|* : BLOCKS UNTIL THE MUTEX IS ACQUIRED.                                    : *|
|* :                                                                        : *|
|* : EXAMPLE:                                                               : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| mutex_lock(mutex);                                                  : *|
|* : 3|                                                                     : *|
|* :........................................................................: *|
|*                                                                            *|
|*                              ................                              *|
|* .............................: MUTEX_UNLOCK :............................. *|
|* :                            ''''''''''''''''                            : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| #define MUTEX_UNLOCK(MUTEX)                                         : *|
|* : 3| #define mutex_unlock(MUTEX)                                         : *|
|* : 4|                                                                     : *|
|* :                                                                        : *|
|* : RELEASES A PREVIOUSLY ACQUIRED MUTEX.                                  : *|
|* :                                                                        : *|
|* : EXAMPLE:                                                               : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| mutex_unlock(mutex);                                                : *|
|* : 3|                                                                     : *|
|* :........................................................................: *|
|*                                                                            *|
\******************************************************************************/

/**
 * TODO:
 * Implement AmigaOS 3 & 4
 */

#ifndef MUTEX_H
#define MUTEX_H 202607 /* VERSION */

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

/* ****************** [v] LOCALMACRO_MUTEX_FOR_WINDOWS [v] ****************** */
#ifdef _WIN32
#define LOCALMACRO_MUTEX_FOR_WINDOWS
#define LOCALMACRO_MUTEX_FOUND
#endif /* _WIN32 */
/* ****************** [^] LOCALMACRO_MUTEX_FOR_WINDOWS [^] ****************** */

/* ******************* [v] LOCALMACRO_MUTEX_FOR_UNIX [v] ******************** */
#ifndef LOCALMACRO_MUTEX_FOUND
#ifdef __linux__
#define LOCALMACRO_MUTEX_FOR_UNIX
#define LOCALMACRO_MUTEX_FOUND
#else /* !__linux__ */
#ifdef __APPLE__
#define LOCALMACRO_MUTEX_FOR_UNIX
#endif /* __APPLE__ */
#endif /* __linux__ */
#endif /* !LOCALMACRO_MUTEX_FOUND */
/* ******************* [^] LOCALMACRO_MUTEX_FOR_UNIX [^] ******************** */

/* ******************** [v] LOCALMACRO_MUTEX_FOR_OS2 [v] ******************** */
#ifndef LOCALMACRO_MUTEX_FOUND
#ifdef __OS2__
#define LOCALMACRO_MUTEX_FOR_OS2
#define LOCALMACRO_MUTEX_FOUND
#else /* !__OS2__ */
#ifdef __EMX__
#define LOCALMACRO_MUTEX_FOR_OS2
#endif /* __EMX__ */
#endif /* __OS2__ */
#endif /* !LOCALMACRO_MUTEX_FOUND */
/* ******************** [^] LOCALMACRO_MUTEX_FOR_OS2 [^] ******************** */

/* ********************* [v] LOCALMACRO_MUTEX_HAIKU [v] ********************* */
#ifndef LOCALMACRO_MUTEX_FOUND
#ifdef __HAIKU__
#define LOCALMACRO_MUTEX_HAIKU
#define LOCALMACRO_MUTEX_FOUND
#endif /* __HAIKU__ */
#endif /* !LOCALMACRO_MUTEX_FOUND */
/* ********************* [^] LOCALMACRO_MUTEX_HAIKU [^] ********************* */

/* ********************* [v] LOCALMACRO_MUTEX_PLAN9 [v] ********************* */
#ifndef LOCALMACRO_MUTEX_FOUND
#ifdef CMT_TRY_PLAN9
#define LOCALMACRO_MUTEX_PLAN9
#define LOCALMACRO_MUTEX_FOUND
#endif /* CMT_TRY_PLAN9 */
#endif /* !LOCALMACRO_MUTEX_FOUND */
/* ********************* [^] LOCALMACRO_MUTEX_PLAN9 [^] ********************* */

/* ******************** [v] LOCALMACRO_MUTEX_VXWORKS [v] ******************** */
#ifndef LOCALMACRO_MUTEX_FOUND
#ifdef __VXWORKS__
#define LOCALMACRO_MUTEX_VXWORKS
#define LOCALMACRO_MUTEX_FOUND
#else /* !__VXWORKS__ */
#ifdef __vxworks
#define LOCALMACRO_MUTEX_VXWORKS
#define LOCALMACRO_MUTEX_FOUND
#endif /* __vxworks */
#endif /* __VXWORKS__ */
#endif /* !LOCALMACRO_MUTEX_FOUND */
/* ******************** [^] LOCALMACRO_MUTEX_VXWORKS [^] ******************** */

/* ******************* [v] LOCALMACRO_MUTEX_FREERTOS [v] ******************** */
#ifndef LOCALMACRO_MUTEX_FOUND
#ifdef freertos
#define LOCALMACRO_MUTEX_FREERTOS
#define LOCALMACRO_MUTEX_FOUND
#else /* !freertos */
#ifdef FREERTOS_CONFIG_H
#define LOCALMACRO_MUTEX_FREERTOS
#define LOCALMACRO_MUTEX_FOUND
#else /* !FREERTOS_CONFIG_H */
#ifdef __FREERTOS__
#define LOCALMACRO_MUTEX_FREERTOS
#define LOCALMACRO_MUTEX_FOUND
#else /* !__FREERTOS__ */
#ifdef CMT_TRY_FREE_RTOS
#define LOCALMACRO_MUTEX_FREERTOS
#define LOCALMACRO_MUTEX_FOUND
#endif /* CMT_TRY_FREE_RTOS */
#endif /* __FREERTOS__ */
#endif /* FREERTOS_CONFIG_H */
#endif /* freertos */
#endif /* !LOCALMACRO_MUTEX_FOUND */
/* ******************* [^] LOCALMACRO_MUTEX_FREERTOS [^] ******************** */

/* ******************** [v] LOCALMACRO_MUTEX_ZEPHYR [v] ********************* */
#ifndef LOCALMACRO_MUTEX_FOUND
#ifdef CONFIG_ZEPHYR
#define LOCALMACRO_MUTEX_ZEPHYR
#define LOCALMACRO_MUTEX_FOUND
#else /* !CONFIG_ZEPHYR */
#ifdef CONFIG_KERNEL_INIT_PRIORITY_DEFAULT
#define LOCALMACRO_MUTEX_ZEPHYR
#define LOCALMACRO_MUTEX_FOUND
#else /* !CONFIG_KERNEL_INIT_PRIORITY_DEFAULT */
#ifdef ZEPHYR_VERSION_CODE
#define LOCALMACRO_MUTEX_ZEPHYR
#define LOCALMACRO_MUTEX_FOUND
#else /* !ZEPHYR_VERSION_CODE */
#ifdef __ZEPHYR__
#define LOCALMACRO_MUTEX_ZEPHYR
#define LOCALMACRO_MUTEX_FOUND
#else /* !__ZEPHYR__ */
#ifdef CMT_TRY_ZEPHYR
#define LOCALMACRO_MUTEX_ZEPHYR
#define LOCALMACRO_MUTEX_FOUND
#endif /* CMT_TRY_ZEPHYR */
#endif /* __ZEPHYR__ */
#endif /* ZEPHYR_VERSION_CODE */
#endif /* CONFIG_KERNEL_INIT_PRIORITY_DEFAULT */
#endif /* CONFIG_ZEPHYR */
#endif /* !LOCALMACRO_MUTEX_FOUND */
/* ******************* [^] LOCALMACRO_MUTEX_ZEPHYR [^] ********************** */

/* ******************** [v] LOCALMACRO_MUTEX_TI_RTOS [v] ******************** */
#ifndef LOCALMACRO_MUTEX_FOUND
#ifdef __TI_COMPILER_VERSION__
#ifdef CMT_TRY_TIRTOS
#define LOCALMACRO_MUTEX_TI_RTOS
#define LOCALMACRO_MUTEX_FOUND
#endif /* CMT_TRY_TIRTOS */
#endif /* __TI_COMPILER_VERSION__ */
#endif /* !LOCALMACRO_MUTEX_FOUND */
/* ******************** [^] LOCALMACRO_MUTEX_TI_RTOS [^] ******************** */

#ifdef LOCALMACRO_MUTEX_FOUND
#undef LOCALMACRO_MUTEX_FOUND

#ifdef LOCALMACRO_MUTEX_FOR_WINDOWS
#include "MUTEX/WINDOWS.INL"
#undef LOCALMACRO_MUTEX_FOR_WINDOWS
#endif /* LOCALMACRO_MUTEX_FOR_WINDOWS */

#ifdef LOCALMACRO_MUTEX_FOR_OS2
#include "MUTEX/OS2.INL"
#undef LOCALMACRO_MUTEX_FOR_OS2
#endif /* LOCALMACRO_MUTEX_FOR_OS2 */

#ifdef LOCALMACRO_MUTEX_FOR_UNIX
#include "MUTEX/UNIX.INL"
#undef LOCALMACRO_MUTEX_FOR_UNIX
#endif /* LOCALMACRO_MUTEX_FOR_UNIX */

#ifdef LOCALMACRO_MUTEX_HAIKU
#include "MUTEX/HAIKU.INL"
#undef LOCALMACRO_MUTEX_HAIKU
#endif /* LOCALMACRO_MUTEX_HAIKU */

#ifdef LOCALMACRO_MUTEX_PLAN9
#include "MUTEX/PLAN9.INL"
#undef LOCALMACRO_MUTEX_PLAN9
#endif /* LOCALMACRO_MUTEX_PLAN9 */

#ifdef LOCALMACRO_MUTEX_VXWORKS
#include "MUTEX/VXWORKS.INL"
#undef LOCALMACRO_MUTEX_VXWORKS
#endif /* LOCALMACRO_MUTEX_VXWORKS */

#ifdef LOCALMACRO_MUTEX_FREERTOS
#include "MUTEX/FREERTOS.INL"
#undef LOCALMACRO_MUTEX_FREERTOS
#endif /* LOCALMACRO_MUTEX_FREERTOS */

#ifdef LOCALMACRO_MUTEX_ZEPHYR
#include "MUTEX/ZEPHYR.INL"
#undef LOCALMACRO_MUTEX_ZEPHYR
#endif /* LOCALMACRO_MUTEX_ZEPHYR */

#ifdef LOCALMACRO_MUTEX_TI_RTOS
#include "MUTEX/TI_RTOS.INL"
#undef LOCALMACRO_MUTEX_TI_RTOS
#endif /* LOCALMACRO_MUTEX_TI_RTOS */

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
#define MUTEX_CREATE CMTMTXCE
#define MUTEX_DESTROY CMTMTXDY
#endif /* __MVS__ */
/* *************************** [^] MVS LINKER [^] *************************** */

/* **************************** [v] EXTERNS [v] ***************************** */
#ifndef KNR_STYLE /* STANDARD C */
extern int	MUTEX_CREATE(T_MUTEX *);
extern int	MUTEX_DESTROY(T_MUTEX *);
#else /* K&R */
extern int	MUTEX_CREATE();
extern int	MUTEX_DESTROY();
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

#ifdef LOCALMACRO__SETUP_LINKABLE
#undef LOCALMACRO__SETUP_LINKABLE

/* .,,,,. #==========================================================# .,,,,. */
/*  \\//  |                 LINKABLE MEMBER CREATION                 |  \\//  */
/*   \/   #==========================================================#   \/   */

#define LOCALLINKER__MUTEX \
	LOCALFUNCTION__MUTEX_CREATE \
	LOCALFUNCTION__MUTEX_DESTROY

/*   /\   #==========================================================#   /\   */
/*  //\\  |                 LINKABLE MEMBER CREATION                 |  //\\  */
/* '""""' #==========================================================# '""""' */

#ifdef CMT_SETUP

/* [v] %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% /!\ IMPORTANT /!\ */
LOCALLINKER__MUTEX
/* [^] %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% /!\ IMPORTANT /!\ */

#else /* !CMT_SETUP */

/* [v] %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% /!\ IMPORTANT /!\ */
#undef GLOBALLINKER__MUTEX
#define GLOBALLINKER__MUTEX LOCALLINKER__MUTEX
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
#else /* !LOCALMACRO_MUTEX_FOUND */
/* **************************** [v] INCLUDES [v] **************************** */
#include "../KEYWORDS/TYPES.H"
/******* """""""""""""""""""""
 * typedef	VAR;
 */
/* **************************** [^] INCLUDES [^] **************************** */

typedef VAR	T_MUTEX;

#define MUTEX_CREATE(A)\
	"CMT - THREAD: OPERATING SYSTEM OR COMPILER DOESN'T SUPPORT MUTEXES!!!"
#define MUTEX_CREATE(A)\
	"CMT - THREAD: OPERATING SYSTEM OR COMPILER DOESN'T SUPPORT MUTEXES!!!"
#define MUTEX_LOCK(A)\
	"CMT - THREAD: OPERATING SYSTEM OR COMPILER DOESN'T SUPPORT MUTEXES!!!"
#define MUTEX_UNLOCK(A)\
	"CMT - THREAD: OPERATING SYSTEM OR COMPILER DOESN'T SUPPORT MUTEXES!!!"
#endif /* LOCALMACRO_MUTEX_FOUND */

/* *************************** [v] LOWERCASE [v] **************************** */
typedef T_MUTEX	t_mutex;

#define mutex_create MUTEX_CREATE
#define mutex_create MUTEX_CREATE
#define mutex_lock MUTEX_LOCK
#define mutex_unlock MUTEX_UNLOCK
/* *************************** [^] LOWERCASE [^] **************************** */

/* ************************ [v] TI CGT CCS (POP) [v] ************************ */
#ifdef __TI_COMPILER_VERSION__
#pragma diag_pop /* TI CGT CCS COMPILER DIRECTIVES */
#endif /* __TI_COMPILER_VERSION__ */
/* ************************ [^] TI CGT CCS (POP) [^] ************************ */
#endif /* !MUTEX_H */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
