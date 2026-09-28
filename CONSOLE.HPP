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
# : License - Apache2.0 :: Update - 2026/09/28 : #    ::::!!!1!!1!!!1!!!::     #
# +.....................++.....................+ #       ::::!::!:::!::::      #
\******************************************************************************/

#ifndef CONSOLE_HPP
#define CONSOLE_HPP 202608 /* VERSION */

/* **************************** [v] INCLUDES [v] **************************** */
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
 * #define BOOLEAN
 * #define boolean
 * #define TRUE
 * #define FALSE
 */
#include "KEYWORDS/TYPES.H"
/******* """"""""""""""""""
 * typedef	BIT32;
 * typedef	BYTE;
 * typedef	LET;
 * typedef	VAR;
 * typedef	PTR;
 * typedef	ptr;
 */
#include "KEYWORDS/VA_ARGS.H"
/******* """"""""""""""""""""
 * #define VA_ARG
 * #define VA_COPY
 * #define VA_BEGIN
 * #define VA_END
 * #define VA_ARGS
 * #define va_args
 * #define VA_DECLARE
 * #define va_declare
 * typedef	VA_LIST;
 */
#include "OS_API/MEMORY.H"
/******* """""""""""""""""
 * PTR	ALLOC(LET);
 * void	FREE(PTR);
 * PTR	REALLOC(PTR, LET);
 */
/* **************************** [^] INCLUDES [^] **************************** */

#ifndef LOG_CURRENT
#define LOG_CURRENT __FILE__, __LINE__
#endif /* !LOG_CURRENT */

#define WARNING_HERE(STRING) warning_at((STRING), LOG_CURRENT)
#define ERROR_HERE(STRING) error_at((STRING), LOG_CURRENT)
#define warning_here(STRING) WARNING_HERE(STRING)
#define error_here(STRING) ERROR_HERE(STRING)

/* ********************* [v] METAWARE HIGH C LINKER [v] ********************* */
/* * METAWARE LINKER DOES NOT SUPPORT LOWER CASE NAMES ON FUNCTION NAMES!!! * */
#ifdef __HIGHC__ /* METAWARE HIGH C/C++ */
#define LOCALLINKER__CONSOLE_HIGHC pragma Alias(console, "L_CONSOLE");
#else /* !__HIGHC__ */
#define LOCALLINKER__CONSOLE_HIGHC
#endif /* __HIGHC__ */
/* ********************* [^] METAWARE HIGH C LINKER [^] ********************* */

#include "CONSOLE/PLATFORMS.INL"

#ifndef __cplusplus /* C++ */
#include "CONSOLE/C_OOP.INL"
#else /* __cplusplus */
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
LOCALLINKER__CONSOLE_HIGHC
LOCALLINKER__CONSOLE_OOP
EXTERN_C_END
/* [^] %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% /!\ IMPORTANT /!\ */

#include "CMT/CONSTRUCTOR.INL"
#else /* !CMT_SETUP */

/* [v] %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% /!\ IMPORTANT /!\ */
#undef GLOBALLINKER__CONSOLE_OOP
#define GLOBALLINKER__CONSOLE_OOP \
	LOCALLINKER__CONSOLE_HIGHC \
	LOCALLINKER__CONSOLE_OOP
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
