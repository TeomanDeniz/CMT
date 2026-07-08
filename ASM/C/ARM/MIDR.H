/******************************************************************************\
# H - MIDR                                       #       Maximum Tension       #
################################################################################
#                                                #      -__            __-     #
# Teoman Deniz                                   #  :    :!1!-_    _-!1!:    : #
# maximum-tension.com                            #  ::                      :: #
#                                                #  :!:    : :: : :  :  ::::!: #
# +.....................++.....................+ #   :!:: :!:!1:!:!::1:::!!!:  #
# : C - Maximum Tension :: Create - 2026/03/10 : #   ::!::!!1001010!:!11!!::   #
# :---------------------::---------------------: #   :!1!!11000000000011!!:    #
# : License - GPL-3.0   :: Update - 2026/06/09 : #    ::::!!!1!!1!!!1!!!::     #
# +.....................++.....................+ #       ::::!::!:::!::::      #
\******************************************************************************/

/******************************************************************************\
|* __________________________________________________________________________ *|
|*|                                   MIDR                                   |*|
|*|__________________________________________________________________________|*|
|*|                                                                          |*|
|*| WITH THIS FUNCTION, YOU'RE ABLE TO READ THE ARM CPU                      |*|
|*| MAIN ID REGISTER (MIDR).                                                 |*|
|*| ^^^^^^^^^^^^^^^^^^^^^^^                                                  |*|
|*| USING GET_MIDR ON A NON-ARM CPU WILL CAUSE AN ERROR ON COMPILING TIME.   |*|
|*|       ^^^^^^^^                                                           |*|
|*|__________________________________________________________________________|*|
|*                                                                            *|
\******************************************************************************/

/*############################################################################*\
|*#                                 CONTENTS                                 #*|
|*############################################################################*|
|* __________________________________________________________________________ *|
|*| CONTENT                                                       | DOC LINE |*|
|*|===============================================================|==========|*|
|*| #define GET_MIDR(VARIABLE)                                    | 40       |*|
|*| #define get_midr(variable)                                    |          |*|
|*|_______________________________________________________________|__________|*|
|*                                                                            *|
|*                                ............                                *|
|* ...............................: GET_MIDR :............................... *|
|* :                              ''''''''''''                              : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| #define GET_MIDR(VARIABLE)                                          : *|
|* : 3| #define get_midr(variable)                                          : *|
|* : 4|                                                                     : *|
|* :                       ____                                             : *|
|* : SETS THE VALUE OF THE MIDR REGISTER TO YOUR VARIABLE.                  : *|
|* :                                                                        : *|
|* : EXAMPLE:                                                               : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| unsigned int midr = 0;                                              : *|
|* : 3|                                                                     : *|
|* : 4| get_midr(midr);                                                     : *|
|* : 5|                                                                     : *|
|* : 6| printf("%x\n", midr); // CPU Main ID Register value                 : *|
|* : 7|                                                                     : *|
|* :........................................................................: *|
|*                                                                            *|
\******************************************************************************/

#ifndef MIDR_H
#define MIDR_H 202606 /* VERSION */

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
#include "../../../CHECK_FEATURE/INLINE_ASM.H"
/******* """""""""""""""""""""""""""""""""""""
 * #define IS__INLINE_ASM__SUPPORTED
 * #define INLINE_ASM_TYPE__GNU_EXTENDED
 * #define INLINE_ASM_TYPE__MSVC
 */
#include "../../../KEYWORDS/TYPES.H"
/******* """""""""""""""""""""""""""
 * typedef PTR;
 */
/* **************************** [^] INCLUDES [^] **************************** */

#ifdef IS__INLINE_ASM__SUPPORTED

#ifdef INLINE_ASM_TYPE__GNU_EXTENDED
#ifdef __SYSTEM_64_BIT__
#define LOCALMACRO__MIDR_GET(__REGISTER__) \
	__asm__ __volatile__("mrs %0, midr_el1" : "=r"(__REGISTER__));
#else /* __SYSTEM_32_BIT__ */
#define LOCALMACRO__MIDR_GET(__REGISTER__) \
	__asm__ __volatile__("mrc p15, 0, %0, c0, c0, 0" : "=r"(__REGISTER__));
#endif /* __SYSTEM_64_BIT__ */
#endif /* INLINE_ASM_TYPE__GNU_EXTENDED */

#ifdef INLINE_ASM_TYPE__MSVC /* NOT FOR MSVC, IT IS FOR ACC AND OTHERS */
#ifdef __SYSTEM_64_BIT__
#define LOCALMACRO__MIDR_GET(__REGISTER__) \
	__asm\
	{\
		mrs __REGISTER__, midr_el1\
	}
#else /* __SYSTEM_32_BIT__ */
#define LOCALMACRO__MIDR_GET(__REGISTER__) \
	__asm\
	{\
		mrc p15, 0, __REGISTER__, c0, c0, 0\
	}
#endif /* __SYSTEM_64_BIT__ */
#endif /* INLINE_ASM_TYPE__MSVC */

/* TODO: ADD MORE ASSEMBLY VARIANTS */

#ifndef LOCALMACRO__MIDR_GET
#define GET_MIDR(_) \
	"ERROR - CMT (MIDR.H) IS NOT SUPPORTED IN YOUR COMPILER YET :l"
#else /* LOCALMACRO__MIDR_GET */
#define GET_MIDR(VARIABLE) \
	do\
	{\
		register PTR	__REGISTER__;\
		\
		LOCALMACRO__MIDR_GET(__REGISTER__);\
		(VARIABLE) = __REGISTER__;\
	}\
	while (0)
#endif /* !LOCALMACRO__MIDR_GET */

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
 */
#include "../../../ASM/CAN_CMT_USE_INLINE_ASM_FOR_SECTIONS.INL"
/******* """"""""""""""""""""""""""""""""""""""""""""""""""""""
 * #define CMT_CANT_USE_INLINE_ASM_FOR_SECTIONS
 */
/* **************************** [^] INCLUDES [^] **************************** */

/* *************************** [v] MVS LINKER [v] *************************** */
/* **** MVS LINKER DOES NOT SUPPORT EXTERNAL NAMES LARGER THAN 8 BYTES!! **** */
#ifdef __MVS__ /* IBM Z/OS XL C/C++ */
#define LOCALMACRO__MIDR_GET LMIDRGET
#endif /* __MVS__ */
/* *************************** [^] MVS LINKER [^] *************************** */

/* **************************** [v] EXTERNS [v] ***************************** */
#ifndef KNR_STYLE /* STANDARD C */
extern PTR	LOCALMACRO__MIDR_GET(void);
#else /* K&R */
extern PTR	LOCALMACRO__MIDR_GET();
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
#define GLOBALCONSTRUCTOR__MIDR ((int (*)())LOCALMACRO__MIDR_GET)();
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
#include "../../../ASM.H"
/******* """"""""""""""""
 * #define SECTION(RETURN_TYPE, NAME, ARGUMENTS)
 * #define SECTION_KNR(RETURN_TYPE, NAME, ARGUMENTS)
 * #define END
 * #define MRS_X0_MIDR_EL1
 * #define MRC_R0_MIDR
 * #define RET
 */
/* **************************** [^] INCLUDES [^] **************************** */

/* ********************* [v] METAWARE HIGH C LINKER [v] ********************* */
/* * METAWARE LINKER DOES NOT SUPPORT LOWER CASE NAMES ON FUNCTION NAMES!!! * */
#ifdef __HIGHC__ /* METAWARE HIGH C/C++ */
#define LOCALLINKER__MIDR_HIGHC \
	pragma Alias(LOCALMACRO__MIDR_GET, "LOCALMACRO__MIDR_GET");
#else /* !__HIGHC__ */
#define LOCALLINKER__MIDR_HIGHC
#endif /* __HIGHC__ */
/* ********************* [^] METAWARE HIGH C LINKER [^] ********************* */

#ifdef __SYSTEM_64_BIT__
#define LOCALLINKER__MIDR_GET \
	SECTION(\
		PTR, LOCALMACRO__MIDR_GET, (void)\
	)\
	SECTION_KNR(\
		PTR, LOCALMACRO__MIDR_GET, ()\
	)\
		MRS_X0_MIDR_EL1\
		RET\
	END
#else /* __SYSTEM_32_BIT__ */
#define LOCALLINKER__MIDR_GET \
	SECTION(\
		PTR, LOCALMACRO__MIDR_GET, (void)\
	)\
	SECTION_KNR(\
		PTR, LOCALMACRO__MIDR_GET, ()\
	)\
		MRC_R0_MIDR\
		RET\
	END
#endif /* __SYSTEM_64_BIT__ */

#define LOCALLINKER__MIDR LOCALLINKER__MIDR_HIGHC LOCALLINKER__MIDR_GET

#ifdef CMT_SETUP

/* [v] %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% /!\ IMPORTANT /!\ */
LOCALLINKER__MIDR
/* [^] %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% /!\ IMPORTANT /!\ */

#include "../../../CMT_AUTO_CONSTRUCTOR.INL"
#else /* !CMT_SETUP */

/* [v] %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% /!\ IMPORTANT /!\ */
#undef GLOBALLINKER__MIDR
#define GLOBALLINKER__MIDR LOCALLINKER__MIDR
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

#define GET_MIDR(VARIABLE) \
	do\
	{\
		(VARIABLE) = LOCALMACRO__MIDR_GET();\
	}\
	while (0)

#endif /* IS__INLINE_ASM__SUPPORTED */
#else /* !__CPU_ARM__ */
#define GET_MIDR(_) \
	"ERROR - YOU'RE NOT USING AN ARM CPU TO USE THIS COMMAND >:("
#endif /* __CPU_ARM__ */

/* *************************** [v] LOWERCASE [v] **************************** */
#define get_midr(variable) GET_MIDR(variable)
/* *************************** [^] LOWERCASE [^] **************************** */
#endif /* !MIDR_H */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
