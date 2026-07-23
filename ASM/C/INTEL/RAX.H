/******************************************************************************\
# H - RAX                                        #       Maximum Tension       #
################################################################################
#                                                #      -__            __-     #
# Teoman Deniz                                   #  :    :!1!-_    _-!1!:    : #
# maximum-tension.com                            #  ::                      :: #
#                                                #  :!:    : :: : :  :  ::::!: #
# +.....................++.....................+ #   :!:: :!:!1:!:!::1:::!!!:  #
# : C - Maximum Tension :: Create - 2025/09/15 : #   ::!::!!1001010!:!11!!::   #
# :---------------------::---------------------: #   :!1!!11000000000011!!:    #
# : License - GPL-3.0   :: Update - 2026/07/23 : #    ::::!!!1!!1!!!1!!!::     #
# +.....................++.....................+ #       ::::!::!:::!::::      #
\******************************************************************************/

/******************************************************************************\
|* __________________________________________________________________________ *|
|*|                                   RAX                                    |*|
|*|__________________________________________________________________________|*|
|*|                                                                          |*|
|*| WITH THESE FUNCTIONS, YOU'RE ABLE TO MOVE AND GET VALUES FROM THE INTEL  |*|
|*| CPU REGISTER RAX AND STACK WITH DIFFERENT DATA SIZES AND ARCHS.          |*|
|*|       _______    _______                                                 |*|
|*| USING GET_RAX OR SET_RAX ON A NON-INTEL CPU WILL CAUSE AN ERROR ON       |*|
|*| COMPILING TIME.                                                          |*|
|*|                                                                          |*|
|*| /!\ NOTE                                                                 |*|
|*|  :                                                                       |*|
|*|  :.. ON INTEL 32-BIT, EAX REGISTER IS USED.                              |*|
|*|  :.. ON INTEL 16-BIT, AX REGISTER IS USED.                               |*|
|*|__________________________________________________________________________|*|
|*                                                                            *|
\******************************************************************************/

/*############################################################################*\
|*#                                 CONTENTS                                 #*|
|*############################################################################*|
|* __________________________________________________________________________ *|
|*| CONTENT                                                       | DOC LINE |*|
|*|===============================================================|==========|*|
|*| #define GET_RAX(VARIABLE)                                     | 48       |*|
|*| #define get_rax(variable)                                     |          |*|
|*|---------------------------------------------------------------|----------|*|
|*| #define SET_RAX(VALUE)                                        | 73       |*|
|*| #define set_rax(value)                                        |          |*|
|*|_______________________________________________________________|__________|*|
|*                                                                            *|
|*                                ...........                                 *|
|* ...............................: GET_RAX :................................ *|
|* :                              '''''''''''                               : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| #define GET_RAX(VARIABLE)                                           : *|
|* : 3| #define get_rax(variable)                                           : *|
|* : 4|                                                                     : *|
|* :                   ___                                                  : *|
|* : SETS THE VALUE OF RAX REGISTER HOLDING TO YOUR VARIABLE.               : *|
|* :                                                                        : *|
|* : EXAMPLE:                                                               : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| long long test = 0;                                                 : *|
|* : 3|                                                                     : *|
|* : 4| volatile_function_that_returns_42();                                : *|
|* : 5|                                                                     : *|
|* : 6| get_rax(test);                                                      : *|
|* : 7|                                                                     : *|
|* : 8| printf("%d\n", test); // 42                                         : *|
|* : 9|                                                                     : *|
|* :........................................................................: *|
|*                                                                            *|
|*                                ...........                                 *|
|* ...............................: SET_RAX :................................ *|
|* :                              '''''''''''                               : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| #define SET_RAX(VALUE)                                              : *|
|* : 3| #define set_rax(value)                                              : *|
|* : 4|                                                                     : *|
|* :          ___                                                           : *|
|* : SETS THE RAX REGISTER'S VALUE TO GIVEN VALUE OR VARIABLE.              : *|
|* :                                                                        : *|
|* : EXAMPLES:                                                              : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| set_rax(42);                                                        : *|
|* : 3|                                                                     : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| long long value = 42;                                               : *|
|* : 3|                                                                     : *|
|* : 4| set_rax(value);                                                     : *|
|* : 5|                                                                     : *|
|* :........................................................................: *|
|*                                                                            *|
\******************************************************************************/

#ifndef RAX_H
#define RAX_H 202607 /* VERSION */

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
#define LOCALMACRO__RAX_GET(__REGISTER__) \
	__asm__ __volatile__ (\
		"movq %%rax, %0" \
		: "=r" (__REGISTER__)\
	)
#define LOCALMACRO__RAX_SET(__REGISTER__) \
	__asm__ __volatile__ (\
		"movq %0, %%rax" \
		: \
		: "r" (__REGISTER__)\
	)
#endif /* __SYSTEM_64_BIT__ */

#ifdef __SYSTEM_32_BIT__
#define LOCALMACRO__RAX_GET(__REGISTER__) \
	__asm__ __volatile__ (\
		"movl %%eax, %0" \
		: "=r" (__REGISTER__)\
	)
#define LOCALMACRO__RAX_SET(__REGISTER__) \
	__asm__ __volatile__ (\
		"movl %0, %%eax" \
		: \
		: "r" (__REGISTER__)\
	)
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_16_BIT__
#define LOCALMACRO__RAX_GET(__REGISTER__) \
	__asm__ __volatile__ ("mov %%ax, %0" : "=r" (__REGISTER__))
#define LOCALMACRO__RAX_SET(__REGISTER__) \
	__asm__ __volatile__ ("mov %0, %%ax" : : "r" (__REGISTER__))
#endif /* __SYSTEM_16_BIT__ */
#endif /* INLINE_ASM_TYPE__GNU */

#ifndef LOCALMACRO__RAX_GET
#ifdef INLINE_ASM_TYPE__MSVC

#ifdef __SYSTEM_64_BIT__
#define LOCALMACRO__RAX_GET(__REGISTER__) \
	__asm\
	{\
		mov rax, __REGISTER__\
	}
#define LOCALMACRO__RAX_SET(__REGISTER__) \
	__asm\
	{\
		mov __REGISTER__, rax\
	}
#endif /* __SYSTEM_64_BIT__ */

#ifdef __SYSTEM_32_BIT__
#define LOCALMACRO__RAX_GET(__REGISTER__) \
	__asm\
	{\
		mov eax, __REGISTER__\
	}
#define LOCALMACRO__RAX_SET(__REGISTER__) \
	__asm\
	{\
		mov __REGISTER__, eax\
	}
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_16_BIT__
#define LOCALMACRO__RAX_GET(__REGISTER__) \
	__asm\
	{\
		mov ax, __REGISTER__\
	}
#define LOCALMACRO__RAX_SET(__REGISTER__) \
	__asm\
	{\
		mov __REGISTER__, ax\
	}
#endif /* __SYSTEM_16_BIT__ */

#endif /* INLINE_ASM_TYPE__MSVC */
#endif /* !LOCALMACRO__RAX_GET */

/* TODO: ADD MORE ASSEMBLY VARIANTS */

#ifndef LOCALMACRO__RAX_GET
#define GET_RAX(_) \
	"ERROR - CMT (RAX.H) IS NOT SUPPORTED IN YOUR COMPILER YET :l"
#define SET_RAX(_) \
	"ERROR - CMT (RAX.H) IS NOT SUPPORTED IN YOUR COMPILER YET :l"
#else /* LOCALMACRO__RAX_GET */
#define GET_RAX(VARIABLE) \
	do\
	{\
		register PTR	__REGISTER__;\
		\
		LOCALMACRO__RAX_GET(__REGISTER__);\
		(VARIABLE) = __REGISTER__;\
	}\
	while (0)

#define SET_RAX(VALUE) \
	do\
	{\
		register PTR	__REGISTER__ = (PTR)(VALUE);\
		\
		LOCALMACRO__RAX_SET(__REGISTER__);\
	}\
	while (0)
#endif /* !LOCALMACRO__RAX_GET */

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
#define LOCALMACRO__RAX_GET LRAX_GET
#define LOCALMACRO__RAX_SET LRAX_SET
#endif /* __MVS__ */
/* *************************** [^] MVS LINKER [^] *************************** */

/* **************************** [v] EXTERNS [v] ***************************** */
EXTERN_C_START
#ifndef KNR_STYLE /* STANDARD C */
extern PTR	LOCALMACRO__RAX_GET(void);
extern void	LOCALMACRO__RAX_SET(PTR);
#else /* K&R */
extern PTR	LOCALMACRO__RAX_GET();
extern		LOCALMACRO__RAX_SET();
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
#define GLOBALCONSTRUCTOR__RAX \
	((int (*)())LOCALMACRO__RAX_GET)(); \
	((int (*)())LOCALMACRO__RAX_SET)();
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
 * #define MOV_ARG1_RAX
 * #define RET
 */
/* **************************** [^] INCLUDES [^] **************************** */

/* ********************* [v] METAWARE HIGH C LINKER [v] ********************* */
/* * METAWARE LINKER DOES NOT SUPPORT LOWER CASE NAMES ON FUNCTION NAMES!!! * */
#ifdef __HIGHC__ /* METAWARE HIGH C/C++ */
#define LOCALLINKER__RAX_HIGHC \
	pragma Alias(LOCALMACRO__RAX_GET, "LOCALMACRO__RAX_GET"); \
	pragma Alias(LOCALMACRO__RAX_SET, "LOCALMACRO__RAX_SET");
#else /* !__HIGHC__ */
#define LOCALLINKER__RAX_HIGHC
#endif /* __HIGHC__ */
/* ********************* [^] METAWARE HIGH C LINKER [^] ********************* */

#define LOCALLINKER__RAX_GET \
	SECTION(\
		PTR, LOCALMACRO__RAX_GET, (void)\
	)\
	SECTION_KNR(\
		PTR, LOCALMACRO__RAX_GET, ()\
	)\
		RET\
	END

#define LOCALLINKER__RAX_SET \
	SECTION(\
		void, LOCALMACRO__RAX_SET, (PTR ARG1)\
	)\
	SECTION_KNR(\
		void, LOCALMACRO__RAX_SET, (ARG1)\
		PTR	ARG1;\
	)\
		MOV_ARG1_RAX\
		RET\
	END

#define LOCALLINKER__RAX \
	LOCALLINKER__RAX_HIGHC LOCALLINKER__RAX_GET LOCALLINKER__RAX_SET

#ifdef CMT_SETUP

/* [v] %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% /!\ IMPORTANT /!\ */
EXTERN_C_START
LOCALLINKER__RAX
EXTERN_C_END
/* [^] %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% /!\ IMPORTANT /!\ */

#include "../../../CMT_AUTO_CONSTRUCTOR.INL"
#else /* !CMT_SETUP */

/* [v] %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% /!\ IMPORTANT /!\ */
#undef GLOBALLINKER__RAX
#define GLOBALLINKER__RAX LOCALLINKER__RAX
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

#define GET_RAX(VARIABLE) \
	do\
	{\
		(VARIABLE) = LOCALMACRO__RAX_GET();\
	}\
	while (0)
#define SET_RAX(VALUE) \
	do\
	{\
		register PTR	__REGISTER__ = (PTR)(VALUE);\
		\
		LOCALMACRO__RAX_SET(__REGISTER__);\
	}\
	while (0)

#endif /* IS__INLINE_ASM__SUPPORTED */
#else /* !__CPU_INTEL__ */
#include "../../../CMT_WARNER.INL"

#define GET_RAX(_) \
	CMT_WARN(\
		"ERROR - YOU'RE NOT USING AN INTEL CPU TO USE THIS COMMAND >:("\
	)
#define SET_RAX(_) \
	CMT_WARN(\
		"ERROR - YOU'RE NOT USING AN INTEL CPU TO USE THIS COMMAND >:("\
	)
#endif /* __CPU_INTEL__ */

/* *************************** [v] LOWERCASE [v] **************************** */
#define get_rax(variable) GET_RAX(variable)
#define set_rax(value) SET_RAX(value)
/* *************************** [^] LOWERCASE [^] **************************** */
#endif /* !RAX_H */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
