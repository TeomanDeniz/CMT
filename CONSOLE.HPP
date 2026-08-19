/******************************************************************************\
# HPP - CONSOLE                                  #       Maximum Tension       #
################################################################################
#                                                #      -__            __-     #
# Teoman Deniz                                   #  :    :!1!-_    _-!1!:    : #
# maximum-tension.com                            #  ::                      :: #
#                                                #  :!:    : :: : :  :  ::::!: #
# +.....................++.....................+ #   :!:: :!:!1:!:!::1:::!!!:  #
# : C - Maximum Tension :: Create - 2026/08/10 : #   ::!::!!1001010!:!11!!::   #
# :---------------------::---------------------: #   :!1!!11000000000011!!:    #
# : License - GPL-3.0   :: Update - 2026/08/19 : #    ::::!!!1!!1!!!1!!!::     #
# +.....................++.....................+ #       ::::!::!:::!::::      #
\******************************************************************************/

#ifndef CONSOLE_HPP
#define CONSOLE_HPP 202608 /* VERSION */

/* **************************** [v] INCLUDES [v] **************************** */
#include "ENVIRONMENTS/PLATFORM.H"
/******* """""""""""""""""""""""""
 * #define __PLATFORM_AIX__
 * #define __PLATFORM_ANDROID__
 * #define __PLATFORM_BSD_ENVIRONMENT__
 * #define __PLATFORM_BSD_OS__
 * #define __PLATFORM_CYGWIN_ENVIRONMENT__
 * #define __PLATFORM_DRAGONFLY__
 * #define __PLATFORM_FREEBSD__
 * #define __PLATFORM_GNU_HURD__
 * #define __PLATFORM_GNU_KFREEBSD__
 * #define __PLATFORM_GNU_LINUX__
 * #define __PLATFORM_HP_UX__
 * #define __PLATFORM_INTERIX_ENVIRONMENT__
 * #define __PLATFORM_IRIX__
 * #define __PLATFORM_LINUX_KERNEL__
 * #define __PLATFORM_LYNXOS__
 * #define __PLATFORM_MACOS__
 * #define __PLATFORM_MINIX__
 * #define __PLATFORM_NETBSD__
 * #define __PLATFORM_OPENBSD__
 * #define __PLATFORM_QNX__
 * #define __PLATFORM_RELIANT_UNIX__
 * #define __PLATFORM_SCO_OPENSERVER__
 * #define __PLATFORM_SOLARIS__
 * #define __PLATFORM_SVR4_ENVIRONMENT__
 * #define __PLATFORM_SYLLABLE__
 * #define __PLATFORM_TRU64_OSF__
 * #define __PLATFORM_ULTRIX__
 * #define __PLATFORM_UNICOS__
 * #define __PLATFORM_UNICOS_MP__
 * #define __PLATFORM_UNIX_ENVIRONMENT__
 * #define __PLATFORM_UNIXWARE__
 * #define __PLATFORM_UWIN_ENVIRONMENT__
 * #define __PLATFORM_WINDOWS__
 * #define __PLATFORM_WINDOWS_CE__
 * #define __PLATFORM_MSDOS__
 */
#include "ENVIRONMENTS/KNR_STYLE.H"
/******* """"""""""""""""""""""""""
 * #define KNR_STYLE
 * #define const
 * #define unsigned
 */
#include "ATTRIBUTES/EXTERN_C.H"
/******* """""""""""""""""""""""
 * #define EXTERN_C_START
 * #define EXTERN_C_END
 */
#include "KEYWORDS/BOOLEAN.H"
/******* """"""""""""""""""""
 * #define boolean
 * #define true
 */
#include "KEYWORDS/TYPES.H"
/******* """"""""""""""""""
 * typedef	BIT32;
 * typedef	BYTE;
 * typedef	LET;
 * typedef	VAR;
 * typedef	PTR;
 * typedef	FAR_PTR;
 */
/* **************************** [^] INCLUDES [^] **************************** */

#define LOG_CURRENT __FILE__, __LINE__
#define WARNING_HERE(STRING) warning_at((STRING), LOG_CURRENT)
#define ERROR_HERE(STRING) error_at((STRING), LOG_CURRENT)
#define warning_here(STRING) WARNING_HERE(STRING)
#define error_here(STRING) ERROR_HERE(STRING)

/* ****************************** [v] UNIX [v] ****************************** */
#ifdef __PLATFORM_AIX__
#define LOCALMACRO__PLATFORM_FOUND
#define LOCALMACRO__CONSOLE_PLATFORM_UNIX
#endif /* __PLATFORM_AIX__ */

#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef __PLATFORM_ANDROID__
#define LOCALMACRO__PLATFORM_FOUND
#define LOCALMACRO__CONSOLE_PLATFORM_UNIX
#endif /* __PLATFORM_ANDROID__ */
#endif /* !LOCALMACRO__PLATFORM_FOUND */

#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef __PLATFORM_BSD_ENVIRONMENT__
#define LOCALMACRO__PLATFORM_FOUND
#define LOCALMACRO__CONSOLE_PLATFORM_UNIX
#endif /* __PLATFORM_BSD_ENVIRONMENT__ */
#endif /* !LOCALMACRO__PLATFORM_FOUND */

#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef __PLATFORM_BSD_OS__
#define LOCALMACRO__PLATFORM_FOUND
#define LOCALMACRO__CONSOLE_PLATFORM_UNIX
#endif /* __PLATFORM_BSD_OS__ */
#endif /* !LOCALMACRO__PLATFORM_FOUND */

#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef __PLATFORM_CYGWIN_ENVIRONMENT__
#define LOCALMACRO__PLATFORM_FOUND
#define LOCALMACRO__CONSOLE_PLATFORM_UNIX
#endif /* __PLATFORM_CYGWIN_ENVIRONMENT__ */
#endif /* !LOCALMACRO__PLATFORM_FOUND */

#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef __PLATFORM_DRAGONFLY__
#define LOCALMACRO__PLATFORM_FOUND
#define LOCALMACRO__CONSOLE_PLATFORM_UNIX
#endif /* __PLATFORM_DRAGONFLY__ */
#endif /* !LOCALMACRO__PLATFORM_FOUND */

#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef __PLATFORM_FREEBSD__
#define LOCALMACRO__PLATFORM_FOUND
#define LOCALMACRO__CONSOLE_PLATFORM_UNIX
#endif /* __PLATFORM_FREEBSD__ */
#endif /* !LOCALMACRO__PLATFORM_FOUND */

#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef __PLATFORM_GNU_HURD__
#define LOCALMACRO__PLATFORM_FOUND
#define LOCALMACRO__CONSOLE_PLATFORM_UNIX
#endif /* __PLATFORM_GNU_HURD__ */
#endif /* !LOCALMACRO__PLATFORM_FOUND */

#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef __PLATFORM_GNU_KFREEBSD__
#define LOCALMACRO__PLATFORM_FOUND
#define LOCALMACRO__CONSOLE_PLATFORM_UNIX
#endif /* __PLATFORM_GNU_KFREEBSD__ */
#endif /* !LOCALMACRO__PLATFORM_FOUND */

#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef __PLATFORM_GNU_LINUX__
#define LOCALMACRO__PLATFORM_FOUND
#define LOCALMACRO__CONSOLE_PLATFORM_UNIX
#endif /* __PLATFORM_GNU_LINUX__ */
#endif /* !LOCALMACRO__PLATFORM_FOUND */

#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef __PLATFORM_HP_UX__
#define LOCALMACRO__PLATFORM_FOUND
#define LOCALMACRO__CONSOLE_PLATFORM_UNIX
#endif /* __PLATFORM_HP_UX__ */
#endif /* !LOCALMACRO__PLATFORM_FOUND */

#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef __PLATFORM_INTERIX_ENVIRONMENT__
#define LOCALMACRO__PLATFORM_FOUND
#define LOCALMACRO__CONSOLE_PLATFORM_UNIX
#endif /* __PLATFORM_INTERIX_ENVIRONMENT__ */
#endif /* !LOCALMACRO__PLATFORM_FOUND */

#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef __PLATFORM_IRIX__
#define LOCALMACRO__PLATFORM_FOUND
#define LOCALMACRO__CONSOLE_PLATFORM_UNIX
#endif /* __PLATFORM_IRIX__ */
#endif /* !LOCALMACRO__PLATFORM_FOUND */

#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef __PLATFORM_LINUX_KERNEL__
#define LOCALMACRO__PLATFORM_FOUND
#define LOCALMACRO__CONSOLE_PLATFORM_UNIX
#endif /* __PLATFORM_LINUX_KERNEL__ */
#endif /* !LOCALMACRO__PLATFORM_FOUND */

#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef __PLATFORM_LYNXOS__
#define LOCALMACRO__PLATFORM_FOUND
#define LOCALMACRO__CONSOLE_PLATFORM_UNIX
#endif /* __PLATFORM_LYNXOS__ */
#endif /* !LOCALMACRO__PLATFORM_FOUND */

#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef __PLATFORM_MACOS__
#define LOCALMACRO__PLATFORM_FOUND
#define LOCALMACRO__CONSOLE_PLATFORM_UNIX
#define LOCALMACRO__CONSOLE_PLATFORM_MACOS
#endif /* __PLATFORM_MACOS__ */
#endif /* !LOCALMACRO__PLATFORM_FOUND */

#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef __PLATFORM_MINIX__
#define LOCALMACRO__PLATFORM_FOUND
#define LOCALMACRO__CONSOLE_PLATFORM_UNIX
#endif /* __PLATFORM_MINIX__ */
#endif /* !LOCALMACRO__PLATFORM_FOUND */

#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef __PLATFORM_NETBSD__
#define LOCALMACRO__PLATFORM_FOUND
#define LOCALMACRO__CONSOLE_PLATFORM_UNIX
#endif /* __PLATFORM_NETBSD__ */
#endif /* !LOCALMACRO__PLATFORM_FOUND */

#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef __PLATFORM_OPENBSD__
#define LOCALMACRO__PLATFORM_FOUND
#define LOCALMACRO__CONSOLE_PLATFORM_UNIX
#endif /* __PLATFORM_OPENBSD__ */
#endif /* !LOCALMACRO__PLATFORM_FOUND */

#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef __PLATFORM_QNX__
#define LOCALMACRO__PLATFORM_FOUND
#define LOCALMACRO__CONSOLE_PLATFORM_UNIX
#endif /* __PLATFORM_QNX__ */
#endif /* !LOCALMACRO__PLATFORM_FOUND */

#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef __PLATFORM_RELIANT_UNIX__
#define LOCALMACRO__PLATFORM_FOUND
#define LOCALMACRO__CONSOLE_PLATFORM_UNIX
#endif /* __PLATFORM_RELIANT_UNIX__ */
#endif /* !LOCALMACRO__PLATFORM_FOUND */

#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef __PLATFORM_SCO_OPENSERVER__
#define LOCALMACRO__PLATFORM_FOUND
#define LOCALMACRO__CONSOLE_PLATFORM_UNIX
#endif /* __PLATFORM_SCO_OPENSERVER__ */
#endif /* !LOCALMACRO__PLATFORM_FOUND */

#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef __PLATFORM_SOLARIS__
#define LOCALMACRO__PLATFORM_FOUND
#define LOCALMACRO__CONSOLE_PLATFORM_UNIX
#endif /* __PLATFORM_SOLARIS__ */
#endif /* !LOCALMACRO__PLATFORM_FOUND */

#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef __PLATFORM_SVR4_ENVIRONMENT__
#define LOCALMACRO__PLATFORM_FOUND
#define LOCALMACRO__CONSOLE_PLATFORM_UNIX
#endif /* __PLATFORM_SVR4_ENVIRONMENT__ */
#endif /* !LOCALMACRO__PLATFORM_FOUND */

#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef __PLATFORM_SYLLABLE__
#define LOCALMACRO__PLATFORM_FOUND
#define LOCALMACRO__CONSOLE_PLATFORM_UNIX
#endif /* __PLATFORM_SYLLABLE__ */
#endif /* !LOCALMACRO__PLATFORM_FOUND */

#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef __PLATFORM_TRU64_OSF__
#define LOCALMACRO__PLATFORM_FOUND
#define LOCALMACRO__CONSOLE_PLATFORM_UNIX
#endif /* __PLATFORM_TRU64_OSF__ */
#endif /* !LOCALMACRO__PLATFORM_FOUND */

#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef __PLATFORM_ULTRIX__
#define LOCALMACRO__PLATFORM_FOUND
#define LOCALMACRO__CONSOLE_PLATFORM_UNIX
#endif /* __PLATFORM_ULTRIX__ */
#endif /* !LOCALMACRO__PLATFORM_FOUND */

#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef __PLATFORM_UNICOS__
#define LOCALMACRO__PLATFORM_FOUND
#define LOCALMACRO__CONSOLE_PLATFORM_UNIX
#endif /* __PLATFORM_UNICOS__ */
#endif /* !LOCALMACRO__PLATFORM_FOUND */

#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef __PLATFORM_UNICOS_MP__
#define LOCALMACRO__PLATFORM_FOUND
#define LOCALMACRO__CONSOLE_PLATFORM_UNIX
#endif /* __PLATFORM_UNICOS_MP__ */
#endif /* !LOCALMACRO__PLATFORM_FOUND */

#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef __PLATFORM_UNIX_ENVIRONMENT__
#define LOCALMACRO__PLATFORM_FOUND
#define LOCALMACRO__CONSOLE_PLATFORM_UNIX
#endif /* __PLATFORM_UNIX_ENVIRONMENT__ */
#endif /* !LOCALMACRO__PLATFORM_FOUND */

#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef __PLATFORM_UNIXWARE__
#define LOCALMACRO__PLATFORM_FOUND
#define LOCALMACRO__CONSOLE_PLATFORM_UNIX
#endif /* __PLATFORM_UNIXWARE__ */
#endif /* !LOCALMACRO__PLATFORM_FOUND */

#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef __PLATFORM_UWIN_ENVIRONMENT__
#define LOCALMACRO__PLATFORM_FOUND
#define LOCALMACRO__CONSOLE_PLATFORM_UNIX
#endif /* __PLATFORM_UWIN_ENVIRONMENT__ */
#endif /* !LOCALMACRO__PLATFORM_FOUND */
/* ****************************** [^] UNIX [^] ****************************** */

/* **************************** [v] WINDOWS [v] ***************************** */
#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef __PLATFORM_WINDOWS__
#define LOCALMACRO__PLATFORM_FOUND
#define LOCALMACRO__CONSOLE_PLATFORM_WINDOWS
#endif /* __PLATFORM_WINDOWS__ */
#endif /* !LOCALMACRO__PLATFORM_FOUND */

#ifndef LOCALMACRO__PLATFORM_FOUND
#ifdef __PLATFORM_WINDOWS_CE__
#define LOCALMACRO__PLATFORM_FOUND
#define LOCALMACRO__CONSOLE_PLATFORM_WINDOWS
#endif /* __PLATFORM_WINDOWS_CE__ */
#endif /* !LOCALMACRO__PLATFORM_FOUND */
/* **************************** [^] WINDOWS [^] ***************************** */

#ifdef LOCALMACRO__CONSOLE_PLATFORM_MACOS
#undef LOCALMACRO__CONSOLE_PLATFORM_MACOS
#include "CONSOLE/MACOS.INL"
#endif /* LOCALMACRO__CONSOLE_PLATFORM_MACOS */

#ifdef LOCALMACRO__CONSOLE_PLATFORM_UNIX
#undef LOCALMACRO__CONSOLE_PLATFORM_UNIX
#include "CONSOLE/UNIX.INL"
#endif /* LOCALMACRO__CONSOLE_PLATFORM_UNIX */

#ifdef LOCALMACRO__CONSOLE_PLATFORM_WINDOWS
#undef LOCALMACRO__CONSOLE_PLATFORM_WINDOWS
#include "CONSOLE/WINDOWS.INL"
#endif /* LOCALMACRO__CONSOLE_PLATFORM_WINDOWS */

#ifndef __cplusplus /* C++ */
#include "CONSOLE/C_OOP.INL"
#else /* __cplusplus */

/* C++ class */

#include "CONSOLE/CPP.INL"
#endif /* !__cplusplus */

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

#ifndef LOCALCONSTRUCTOR__CONSOLE
#define LOCALCONSTRUCTOR__CONSOLE
#endif /* !LOCALCONSTRUCTOR__CONSOLE */

#ifndef LOCALDESTRUCTOR__CONSOLE
#define LOCALDESTRUCTOR__CONSOLE
#endif /* !LOCALDESTRUCTOR__CONSOLE */

#undef GLOBALCONSTRUCTOR__CONSOLE
#define GLOBALCONSTRUCTOR__CONSOLE \
	do\
	{\
		LOCALCONSTRUCTOR__CONSOLE\
	}\
	while (0);

#undef GLOBALDESTRUCTOR__CONSOLE
#define GLOBALDESTRUCTOR__CONSOLE \
	do\
	{\
		LOCALDESTRUCTOR__CONSOLE\
	}\
	while (0);

/*   /\   #==========================================================#   /\   */
/*  //\\  |                  SETUP MEMBER CREATION                   |  //\\  */
/* '""""' #==========================================================# '""""' */

#ifdef LOCALMACRO__SETUP_LINKABLE
#undef LOCALMACRO__SETUP_LINKABLE

#ifdef CMT_SETUP

/* [v] %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% /!\ IMPORTANT /!\ */
EXTERN_C_START
LOCALLINKER__CONSOLE
EXTERN_C_END
/* [^] %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% /!\ IMPORTANT /!\ */

#include "CMT/CONSTRUCTOR.INL"
#else /* !CMT_SETUP */

/* [v] %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% /!\ IMPORTANT /!\ */
#undef GLOBALLINKER__CONSOLE
#define GLOBALLINKER__CONSOLE LOCALLINKER__CONSOLE
/* [^] %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% /!\ IMPORTANT /!\ */

#include "CMT/LINKER.INL"
#endif /* CMT_SETUP */
#else /* !LOCALMACRO__SETUP_LINKABLE */
#include "CMT/CONSTRUCTOR.INL"
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

#endif /* !CONSOLE_HPP */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
