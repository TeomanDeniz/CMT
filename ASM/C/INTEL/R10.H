/******************************************************************************\
# H - R10                                        #       Maximum Tension       #
################################################################################
#                                                #      -__            __-     #
# Teoman Deniz                                   #  :    :!1!-_    _-!1!:    : #
# maximum-tension.com                            #  ::                      :: #
#                                                #  :!:    : :: : :  :  ::::!: #
# +.....................++.....................+ #   :!:: :!:!1:!:!::1:::!!!:  #
# : C - Maximum Tension :: Create - 2026/08/28 : #   ::!::!!1001010!:!11!!::   #
# :---------------------::---------------------: #   :!1!!11000000000011!!:    #
# : License - GPL-3.0   :: Update - 2026/08/28 : #    ::::!!!1!!1!!!1!!!::     #
# +.....................++.....................+ #       ::::!::!:::!::::      #
\******************************************************************************/

/******************************************************************************\
|* __________________________________________________________________________ *|
|*|                                   R10                                    |*|
|*|__________________________________________________________________________|*|
|*|                                                                          |*|
|*| WITH THESE FUNCTIONS, YOU'RE ABLE TO MOVE AND GET VALUES FROM THE INTEL  |*|
|*| CPU REGISTER R10 AND STACK WITH DIFFERENT DATA SIZES AND ARCHS.          |*|
|*|       _______    _______                                                 |*|
|*| USING GET_R10 OR SET_R10 ON A NON-INTEL CPU WILL CAUSE AN ERROR ON       |*|
|*| COMPILING TIME.                                                          |*|
|*|                                                                          |*|
|*| /!\ NOTE                                                                 |*|
|*|  :                                                                       |*|
|*|  :.., ON INTEL 32-BIT AND 16-BIT, THIS HEADER WILL THORW AN ERROR        |*|
|*|__________________________________________________________________________|*|
|*                                                                            *|
\******************************************************************************/

/*############################################################################*\
|*#                                 CONTENTS                                 #*|
|*############################################################################*|
|* __________________________________________________________________________ *|
|*| CONTENT                                                       | DOC LINE |*|
|*|===============================================================|==========|*|
|*| #define GET_R10(VARIABLE)                                     | 47       |*|
|*| #define get_r10(variable)                                     |          |*|
|*|---------------------------------------------------------------|----------|*|
|*| #define SET_R10(VALUE)                                        | 72       |*|
|*| #define set_r10(value)                                        |          |*|
|*|_______________________________________________________________|__________|*|
|*                                                                            *|
|*                                ...........                                 *|
|* ...............................: GET_R10 :................................ *|
|* :                              '''''''''''                               : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| #define GET_R10(VARIABLE)                                           : *|
|* : 3| #define get_r10(variable)                                           : *|
|* : 4|                                                                     : *|
|* :                   ___                                                  : *|
|* : SETS THE VALUE OF R10 REGISTER HOLDING TO YOUR VARIABLE.               : *|
|* :                                                                        : *|
|* : EXAMPLE:                                                               : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| long long test = 0;                                                 : *|
|* : 3|                                                                     : *|
|* : 4| volatile_function_that_sets_r10_to_42();                            : *|
|* : 5|                                                                     : *|
|* : 6| get_r10(test);                                                      : *|
|* : 7|                                                                     : *|
|* : 8| printf("%d\n", test); // 42                                         : *|
|* : 9|                                                                     : *|
|* :........................................................................: *|
|*                                                                            *|
|*                                ...........                                 *|
|* ...............................: SET_R10 :................................ *|
|* :                              '''''''''''                               : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| #define SET_R10(VALUE)                                              : *|
|* : 3| #define set_r10(value)                                              : *|
|* : 4|                                                                     : *|
|* :          ___                                                           : *|
|* : SETS THE R10 REGISTER'S VALUE TO GIVEN VALUE OR VARIABLE.              : *|
|* :                                                                        : *|
|* : EXAMPLES:                                                              : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| set_r10(42);                                                        : *|
|* : 3|                                                                     : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| long long value = 42;                                               : *|
|* : 3|                                                                     : *|
|* : 4| set_r10(value);                                                     : *|
|* : 5|                                                                     : *|
|* :........................................................................: *|
|*                                                                            *|
\******************************************************************************/

#ifndef R10_H
#define R10_H 202608 /* VERSION */

/* **************************** [v] INCLUDES [v] **************************** */
#include "../../../ENVIRONMENTS/CPU.H"
/******* """""""""""""""""""""""""""""
 * #define __CPU_INTEL__
 */
/* **************************** [^] INCLUDES [^] **************************** */

#ifdef __CPU_INTEL__
/* **************************** [v] INCLUDES [v] **************************** */
#include "../../../CHECK_FEATURE/INLINE_ASM.H"
/******* """""""""""""""""""""""""""""""""""""
 * #define IS__INLINE_ASM__SUPPORTED
 * #define INLINE_ASM_TYPE__GNU
 * #define INLINE_ASM_TYPE__MSVC
 */
#include "../../../KEYWORDS/TYPES.H"
/******* """""""""""""""""""""""""""
 * typedef PTR;
 */
#include "../../../ATTRIBUTES/EXTERN_C.H"
/******* """"""""""""""""""""""""""""""""
 * #define EXTERN_C_START
 * #define EXTERN_C_END
 */
/* **************************** [^] INCLUDES [^] **************************** */

#ifdef IS__INLINE_ASM__SUPPORTED
/* **************************** [v] INCLUDES [v] **************************** */
#include "../../../ENVIRONMENTS/ARCHITECTURE.H"
/******* """"""""""""""""""""""""""""""""""""""
 * #define __SYSTEM_64_BIT__
 * #define __SYSTEM_32_BIT__
 * #define __SYSTEM_16_BIT__
 */
/* **************************** [^] INCLUDES [^] **************************** */

#ifdef INLINE_ASM_TYPE__GNU
#ifdef __SYSTEM_64_BIT__
#define LOCALMACRO__R10_GET(__REGISTER__) \
	__asm__ __volatile__ (\
		"movq %%r10, %0" \
		: "=r" (__REGISTER__)\
	)
#define LOCALMACRO__R10_SET(__REGISTER__) \
	__asm__ __volatile__ (\
		"movq %0, %%r10" \
		: \
		: "r" (__REGISTER__)\
	)
#endif /* __SYSTEM_64_BIT__ */
#endif /* INLINE_ASM_TYPE__GNU */

#ifndef LOCALMACRO__R10_GET
#ifdef INLINE_ASM_TYPE__MSVC

#ifdef __SYSTEM_64_BIT__
#define LOCALMACRO__R10_GET(__REGISTER__) \
	__asm\
	{\
		mov r10, __REGISTER__\
	}
#define LOCALMACRO__R10_SET(__REGISTER__) \
	__asm\
	{\
		mov __REGISTER__, r10\
	}
#endif /* __SYSTEM_64_BIT__ */
#endif /* INLINE_ASM_TYPE__MSVC */
#endif /* !LOCALMACRO__R10_GET */

/* TODO: ADD MORE ASSEMBLY VARIANTS */

#ifndef LOCALMACRO__R10_GET
#include "../../../CMT/WARNER.INL"

#define GET_R10(_) \
	CMT_WARN(\
		"ERROR - CMT (R10.H) IS NOT SUPPORTED IN YOUR COMPILER YET :l"\
	)
#define SET_R10(_) \
	CMT_WARN(\
		"ERROR - CMT (R10.H) IS NOT SUPPORTED IN YOUR COMPILER YET :l"\
	)
#else /* LOCALMACRO__R10_GET */
#define GET_R10(VARIABLE) \
	do\
	{\
		register PTR	__REGISTER__;\
		\
		LOCALMACRO__R10_GET(__REGISTER__);\
		(VARIABLE) = __REGISTER__;\
	}\
	while (0)

#define SET_R10(VALUE) \
	do\
	{\
		register PTR	__REGISTER__ = (PTR)(VALUE);\
		\
		LOCALMACRO__R10_SET(__REGISTER__);\
	}\
	while (0)
#endif /* !LOCALMACRO__R10_GET */

#else /* !IS__INLINE_ASM__SUPPORTED */

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
#define LOCALMACRO__R10_GET LR10_GET
#define LOCALMACRO__R10_SET LR10_SET
#endif /* __MVS__ */
/* *************************** [^] MVS LINKER [^] *************************** */

/* **************************** [v] EXTERNS [v] ***************************** */
EXTERN_C_START
#ifndef KNR_STYLE /* STANDARD C */
extern PTR	LOCALMACRO__R10_GET(void);
extern void	LOCALMACRO__R10_SET(PTR);
#else /* K&R */
extern PTR	LOCALMACRO__R10_GET();
extern		LOCALMACRO__R10_SET();
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

/* .,,,,. #==========================================================# .,,,,. */
/*  \\//  |                  SETUP MEMBER CREATION                   |  \\//  */
/*   \/   #==========================================================#   \/   */

#ifdef CMT_CANT_USE_INLINE_ASM_FOR_SECTIONS
#undef GLOBALCONSTRUCTOR__R10
#define GLOBALCONSTRUCTOR__R10 \
	((void *(*)())(void *)LOCALMACRO__R10_GET)(); \
	((void *(*)())(void *)LOCALMACRO__R10_SET)();
#endif /* CMT_CANT_USE_INLINE_ASM_FOR_SECTIONS */

/*   /\   #==========================================================#   /\   */
/*  //\\  |                  SETUP MEMBER CREATION                   |  //\\  */
/* '""""' #==========================================================# '""""' */

#ifdef LOCALMACRO__SETUP_LINKABLE
#undef LOCALMACRO__SETUP_LINKABLE

/* .,,,,. #==========================================================# .,,,,. */
/*  \\//  |                 LINKABLE MEMBER CREATION                 |  \\//  */
/*   \/   #==========================================================#   \/   */

#ifdef INCL_CMT_ASM_MOV_ABI
#undef INCL_CMT_ASM_MOV_ABI
#endif /* INCL_CMT_ASM_MOV_ABI */

#ifdef INCL_CMT_ASM_OTHERS
#undef INCL_CMT_ASM_OTHERS
#endif /* INCL_CMT_ASM_OTHERS */

#ifdef INCL_CMT_ASM_MOV
#undef INCL_CMT_ASM_MOV
#endif /* INCL_CMT_ASM_MOV */

/* **************************** [v] INCLUDES [v] **************************** */
#define INCL_CMT_ASM_MOV
#define INCL_CMT_ASM_MOV_ABI
#define INCL_CMT_ASM_OTHERS
#include "../../../ASM.H"
/******* """"""""""""""""
 * #define SECTION(RETURN_TYPE, NAME, ARGUMENTS)
 * #define SECTION_KNR(RETURN_TYPE, NAME, ARGUMENTS)
 * #define END
 * #define MOV_RAX_R10
 * #define MOV_ARG1_R10
 * #define RET
 */
/* **************************** [^] INCLUDES [^] **************************** */

/* ********************* [v] METAWARE HIGH C LINKER [v] ********************* */
/* * METAWARE LINKER DOES NOT SUPPORT LOWER CASE NAMES ON FUNCTION NAMES!!! * */
#ifdef __HIGHC__ /* METAWARE HIGH C/C++ */
#define LOCALLINKER__R10_HIGHC \
	pragma Alias(LOCALMACRO__R10_GET, "LOCALMACRO__R10_GET"); \
	pragma Alias(LOCALMACRO__R10_SET, "LOCALMACRO__R10_SET");
#else /* !__HIGHC__ */
#define LOCALLINKER__R10_HIGHC
#endif /* __HIGHC__ */
/* ********************* [^] METAWARE HIGH C LINKER [^] ********************* */

#define LOCALLINKER__R10_GET \
	SECTION(\
		PTR, LOCALMACRO__R10_GET, (void)\
	)\
	SECTION_KNR(\
		PTR, LOCALMACRO__R10_GET, ()\
	)\
		MOV_RAX_R10\
		RET\
	END

#ifdef __SYSTEM_64_BIT__
#define LOCALLINKER__R10_SET \
	SECTION(\
		void, LOCALMACRO__R10_SET, (PTR ARG1)\
	)\
	SECTION_KNR(\
		void, LOCALMACRO__R10_SET, (ARG1)\
		PTR	ARG1;\
	)\
		MOV_ARG1_R10\
		RET\
	END
#else /* !__SYSTEM_64_BIT__ */
#endif /* __SYSTEM_64_BIT__ */

#define LOCALLINKER__R10 \
	LOCALLINKER__R10_HIGHC LOCALLINKER__R10_GET LOCALLINKER__R10_SET

#ifdef CMT_SETUP

/* [v] %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% /!\ IMPORTANT /!\ */
EXTERN_C_START
LOCALLINKER__R10
EXTERN_C_END
/* [^] %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% /!\ IMPORTANT /!\ */

#include "../../../CMT/CONSTRUCTOR.INL"
#else /* !CMT_SETUP */

/* [v] %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% /!\ IMPORTANT /!\ */
#undef GLOBALLINKER__R10
#define GLOBALLINKER__R10 LOCALLINKER__R10
/* [^] %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% /!\ IMPORTANT /!\ */

/*   /\   #==========================================================#   /\   */
/*  //\\  |                 LINKABLE MEMBER CREATION                 |  //\\  */
/* '""""' #==========================================================# '""""' */

#include "../../../CMT/LINKER.INL"
#endif /* CMT_SETUP */
#else /* !LOCALMACRO__SETUP_LINKABLE */
#include "../../../CMT/CONSTRUCTOR.INL"
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

#define GET_R10(VARIABLE) \
	do\
	{\
		((PTR)VARIABLE) = (PTR)LOCALMACRO__R10_GET();\
	}\
	while (0)
#define SET_R10(VALUE) \
	do\
	{\
		register PTR	__REGISTER__ = (PTR)(VALUE);\
		\
		LOCALMACRO__R10_SET(__REGISTER__);\
	}\
	while (0)

#endif /* IS__INLINE_ASM__SUPPORTED */
#else /* !__CPU_INTEL__ */
#include "../../../CMT/WARNER.INL"

#define GET_R10(_) \
	CMT_WARN(\
		"ERROR - YOU'RE NOT USING AN INTEL CPU TO USE THIS COMMAND >:("\
	)
#define SET_R10(_) \
	CMT_WARN(\
		"ERROR - YOU'RE NOT USING AN INTEL CPU TO USE THIS COMMAND >:("\
	)
#endif /* __CPU_INTEL__ */

/* *************************** [v] LOWERCASE [v] **************************** */
#define get_r10(variable) GET_R10(variable)
#define set_r10(value) SET_R10(value)
/* *************************** [^] LOWERCASE [^] **************************** */
#endif /* !R10_H */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
