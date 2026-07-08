/******************************************************************************\
# H - X17                                        #       Maximum Tension       #
################################################################################
#                                                #      -__            __-     #
# Teoman Deniz                                   #  :    :!1!-_    _-!1!:    : #
# maximum-tension.com                            #  ::                      :: #
#                                                #  :!:    : :: : :  :  ::::!: #
# +.....................++.....................+ #   :!:: :!:!1:!:!::1:::!!!:  #
# : C - Maximum Tension :: Create - 2025/09/15 : #   ::!::!!1001010!:!11!!::   #
# :---------------------::---------------------: #   :!1!!11000000000011!!:    #
# : License - GPL-3.0   :: Update - 2026/05/23 : #    ::::!!!1!!1!!!1!!!::     #
# +.....................++.....................+ #       ::::!::!:::!::::      #
\******************************************************************************/

/******************************************************************************\
|* __________________________________________________________________________ *|
|*|                                   X17                                    |*|
|*|__________________________________________________________________________|*|
|*|                                                                          |*|
|*| WITH THESE FUNCTIONS, YOU'RE ABLE TO MOVE AND GET VALUES FROM THE ARM    |*|
|*| CPU REGISTER X17 AND STACK WITH DIFFERENT DATA SIZES AND ARCHS.          |*|
|*|       _______    _______                                                 |*|
|*| USING GET_X17 OR SET_X17 ON A NON-ARM CPU WILL CAUSE AN ERROR ON         |*|
|*| COMPILING TIME.                                                          |*|
|*|__________________________________________________________________________|*|
|*                                                                            *|
\******************************************************************************/

/*############################################################################*\
|*#                                 CONTENTS                                 #*|
|*############################################################################*|
|* __________________________________________________________________________ *|
|*| CONTENT                                                       | DOC LINE |*|
|*|===============================================================|==========|*|
|*| #define GET_X17(VARIABLE)                                     | 43       |*|
|*| #define get_x17(variable)                                     |          |*|
|*|---------------------------------------------------------------|----------|*|
|*| #define SET_X17(VALUE)                                        | 66       |*|
|*| #define set_x17(value)                                        |          |*|
|*|_______________________________________________________________|__________|*|
|*                                                                            *|
|*                                ...........                                 *|
|* ...............................: GET_X17 :................................ *|
|* :                              '''''''''''                               : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| #define GET_X17(VARIABLE)                                           : *|
|* : 3| #define get_x17(variable)                                           : *|
|* : 4|                                                                     : *|
|* :                   ___                                                  : *|
|* : SETS THE VALUE OF X17 REGISTER HOLDING TO YOUR VARIABLE.               : *|
|* :                                                                        : *|
|* : EXAMPLE:                                                               : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| long long test = 0;                                                 : *|
|* : 3|                                                                     : *|
|* : 6| get_x17(test);                                                      : *|
|* : 7|                                                                     : *|
|* : 8| printf("%d\n", test); // SOME RANDOM VALUE X17 WAS HOLDING          : *|
|* : 9|                                                                     : *|
|* :........................................................................: *|
|*                                                                            *|
|*                                ...........                                 *|
|* ...............................: SET_X17 :................................ *|
|* :                              '''''''''''                               : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| #define SET_X17(VALUE)                                              : *|
|* : 3| #define set_x17(value)                                              : *|
|* : 4|                                                                     : *|
|* :          ___                                                           : *|
|* : SETS THE X17 REGISTER'S VALUE TO GIVEN VALUE OR VARIABLE.              : *|
|* :                                                                        : *|
|* : EXAMPLES:                                                              : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| set_x17(42);                                                        : *|
|* : 3|                                                                     : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| long long value = 42;                                               : *|
|* : 3|                                                                     : *|
|* : 4| set_x17(value);                                                     : *|
|* : 5|                                                                     : *|
|* :........................................................................: *|
|*                                                                            *|
\******************************************************************************/

/* * * * * * * * * * * * * * * * * * * ** * * * * * * * * * * * * * * * * * * *\
|* @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ *|
|* @                              TEST REPORT                               @ *|
|* @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ *|
|*                                                                            *|
|* #===============================================================#========# *|
|* | ENVIRONMENTS                                                  | RESULT | *|
|* #===============================================================#========# *|
|* |                                                               |        | *|
|* |_______________________________________________________________|________| *|
|*                                                                            *|
|*  @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@  *|
|*                                                                            *|
|*  /!\ No noteworthy issues were encountered to report.                      *|
|*                                                                            *|
\* * * * * * * * * * * * * * * * * * * ** * * * * * * * * * * * * * * * * * * */

#ifndef X17_H
#define X17_H 202605 /* VERSION */

/* **************************** [v] INCLUDES [v] **************************** */
#include "../../../ENVIRONMENTS/CPU.H"
/******* """""""""""""""""""""""""""""
 * #define __CPU_ARM__
 */
/* **************************** [^] INCLUDES [^] **************************** */

#ifdef __CPU_ARM__

/* **************************** [v] INCLUDES [v] **************************** */
#include "../../../ENVIRONMENTS/ARCHITECTURE.H"
/******* """"""""""""""""""""""""""""""""""""""
 * #define __SYSTEM_64_BIT__
 */
/* **************************** [^] INCLUDES [^] **************************** */

#ifdef __SYSTEM_64_BIT__

/* **************************** [v] INCLUDES [v] **************************** */
#include "../../../CHECK_FEATURE/INLINE_ASM.H"
/******* """""""""""""""""""""""""""""""""""""
 * #define IS__INLINE_ASM__SUPPORTED
 * #define INLINE_ASM_TYPE__GNU_EXTENDED
 */
#include "../../../KEYWORDS/TYPES.H"
/******* """""""""""""""""""""""""""
 * typedef PTR;
 */
/* **************************** [^] INCLUDES [^] **************************** */

#ifdef IS__INLINE_ASM__SUPPORTED

#ifdef INLINE_ASM_TYPE__GNU_EXTENDED
#define LOCALMACRO__X17_GET(__REGISTER__) \
	__asm__ __volatile__ (\
		"mov %0, x17"\
		: "=r"(__REGISTER__)\
	)
#define LOCALMACRO__X17_SET(__REGISTER__) \
	__asm__ __volatile__ (\
		"mov x17, %0"\
		: \
		: "r"(__REGISTER__)\
	)
#endif /* INLINE_ASM_TYPE__GNU_EXTENDED */

#ifdef INLINE_ASM_TYPE__MSVC
#define LOCALMACRO__X17_GET(__REGISTER__) \
	__asm\
	{\
		MOV __REGISTER__, X17\
	}
#define LOCALMACRO__X17_SET(__REGISTER__) \
	__asm\
	{\
		MOV X17, __REGISTER__\
	}
#endif /* INLINE_ASM_TYPE__MSVC */


/* TODO: ADD MORE ASSEMBLY VARIANTS */

#ifndef LOCALMACRO__X17_GET
#define GET_X17(_) \
	"ERROR - CMT (X17.H) IS NOT SUPPORTED IN YOUR COMPILER YET :l"
#define SET_X17(_) \
	"ERROR - CMT (X17.H) IS NOT SUPPORTED IN YOUR COMPILER YET :l"
#else /* LOCALMACRO__X17_GET */
#define GET_X17(VARIABLE) \
	do\
	{\
		register PTR	__REGISTER__;\
		\
		LOCALMACRO__X17_GET(__REGISTER__);\
		(VARIABLE) = __REGISTER__;\
	}\
	while (0)
#define SET_X17(VALUE) \
	do\
	{\
		register PTR	__REGISTER__ = (PTR)(VALUE);\
		\
		LOCALMACRO__X17_SET(__REGISTER__);\
	}\
	while (0)
#endif /* !LOCALMACRO__X17_GET */

#else /* !IS__INLINE_ASM__SUPPORTED */

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

/* **************************** [v] INCLUDES [v] **************************** */
#include "../../../ENVIRONMENTS/KNR_STYLE.H"
/******* """""""""""""""""""""""""""""""""""
 * #define KNR_STYLE
 * #define void
 */
#include "../../../ASM/CAN_CMT_USE_INLINE_ASM_FOR_SECTIONS.INL"
/******* """"""""""""""""""""""""""""""""""""""""""""""""""""""
 * #define CMT_CANT_USE_INLINE_ASM_FOR_SECTIONS
 */
/* **************************** [^] INCLUDES [^] **************************** */

/* *************************** [v] MVS LINKER [v] *************************** */
/* **** MVS LINKER DOES NOT SUPPORT EXTERNAL NAMES LARGER THAN 8 BYTES!! **** */
#ifdef __MVS__ /* IBM Z/OS XL C/C++ */
#define LOCALMACRO__X17_GET LX17_GET
#define LOCALMACRO__X17_SET LX17_SET
#endif /* __MVS__ */
/* *************************** [^] MVS LINKER [^] *************************** */

/* **************************** [v] EXTERNS [v] ***************************** */
#ifndef KNR_STYLE /* STANDARD C */
extern PTR	LOCALMACRO__X17_GET(void);
extern void	LOCALMACRO__X17_SET(PTR);
#else /* K&R */
extern PTR	LOCALMACRO__X17_GET();
extern		LOCALMACRO__X17_SET();
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

#ifdef CMT_CANT_USE_INLINE_ASM_FOR_SECTIONS
#define GLOBALCONSTRUCTOR__X17 \
	((int (*)())LOCALMACRO__X17_GET)();\
	((int (*)())LOCALMACRO__X17_SET)();
#endif /* CMT_CANT_USE_INLINE_ASM_FOR_SECTIONS */

/*   /\   #==========================================================#   /\   */
/*  //\\  |                  SETUP MEMBER CREATION                   |  //\\  */
/* '""""' #==========================================================# '""""' */

#ifdef LOCALMACRO__SETUP_LINKABLE
#undef LOCALMACRO__SETUP_LINKABLE

/* .,,,,. #==========================================================# .,,,,. */
/*  \\//  |                 LINKABLE MEMBER CREATION                 |  \\//  */
/*   \/   #==========================================================#   \/   */

/* **************************** [v] INCLUDES [v] **************************** */
#include "../../../ASM.H" /* I DON'T SUGGEST PUTTING IT HERE ACTUALLY... */
/******* """"""""""""""""
 * #define SECTION(RETURN_TYPE, NAME, ARGUMENTS)
 * #define SECTION_KNR(RETURN_TYPE, NAME, ARGUMENTS)
 * #define END
 * #define MOV_X0_X17
 * #define MOV_X17_X0
 * #define RET
 */
/* **************************** [^] INCLUDES [^] **************************** */

/* ********************* [v] METAWARE HIGH C LINKER [v] ********************* */
/* * METAWARE LINKER DOES NOT SUPPORT LOWER CASE NAMES ON FUNCTION NAMES!!! * */
#ifdef __HIGHC__ /* METAWARE HIGH C/C++ */
#define LOCALLINKER__X17_HIGHC \
	pragma Alias(LOCALMACRO__X17_GET, "LOCALMACRO__X17_GET"); \
	pragma Alias(LOCALMACRO__X17_SET, "LOCALMACRO__X17_SET");
#else /* !__HIGHC__ */
#define LOCALLINKER__X17_HIGHC
#endif /* __HIGHC__ */
/* ********************* [^] METAWARE HIGH C LINKER [^] ********************* */

#define LOCALLINKER__X17_GET \
	SECTION(\
		PTR, LOCALMACRO__X17_GET, (void)\
	)\
	SECTION_KNR(\
		PTR, LOCALMACRO__X17_GET, ()\
	)\
		MOV_X0_X17\
		RET\
	END

#define LOCALLINKER__X17_SET \
	SECTION(\
		void, LOCALMACRO__X17_SET, (PTR ARG1)\
	)\
	SECTION_KNR(\
		void, LOCALMACRO__X17_SET, (ARG1)\
		PTR	ARG1;\
	)\
		MOV_X17_X0\
		RET\
	END

#define LOCALLINKER__X17 \
	LOCALLINKER__X17_HIGHC LOCALLINKER__X17_GET LOCALLINKER__X17_SET

#ifdef CMT_SETUP

/* [v] %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% /!\ IMPORTANT /!\ */
LOCALLINKER__X17
/* [^] %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% /!\ IMPORTANT /!\ */

#include "../../../CMT_AUTO_CONSTRUCTOR.INL"
#else /* !CMT_SETUP */

/* [v] %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% /!\ IMPORTANT /!\ */
#undef GLOBALLINKER__X17
#define GLOBALLINKER__X17 LOCALLINKER__X17
/* [^] %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% /!\ IMPORTANT /!\ */

/*   /\   #==========================================================#   /\   */
/*  //\\  |                 LINKABLE MEMBER CREATION                 |  //\\  */
/* '""""' #==========================================================# '""""' */

#include "../../../CMT_AUTO_LINKER.INL"
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

#define GET_X17(VARIABLE) \
	do\
	{\
		(VARIABLE) = LOCALMACRO__X17_GET();\
	}\
	while (0)
#define SET_X17(VALUE) \
	do\
	{\
		register PTR	__REGISTER__ = (PTR)(VALUE);\
		\
		LOCALMACRO__X17_SET(__REGISTER__);\
	}\
	while (0)

#endif /* IS__INLINE_ASM__SUPPORTED */

#else /* !__SYSTEM_64_BIT__ */
#define GET_X17(_) "ERROR - YOUR ARCHITECTURE DOESN'T SUPPORT THIS COMMAND D:<"
#define SET_X17(_) "ERROR - YOUR ARCHITECTURE DOESN'T SUPPORT THIS COMMAND D:<"
#endif /* __SYSTEM_64_BIT__ */
#else /* !__CPU_ARM__ */
#define GET_X17(_) "ERROR - YOU'RE NOT USING AN ARM CPU TO USE THIS COMMAND >:("
#define SET_X17(_) "ERROR - YOU'RE NOT USING AN ARM CPU TO USE THIS COMMAND >:("
#endif /* __CPU_ARM__ */

/* *************************** [v] LOWERCASE [v] **************************** */
#define get_x17(variable) GET_X17(variable)
#define set_x17(value) SET_X17(value)
/* *************************** [^] LOWERCASE [^] **************************** */
#endif /* !X17_H */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
