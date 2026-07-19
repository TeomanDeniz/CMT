/******************************************************************************\
# H - MFSPR_287                                  #       Maximum Tension       #
################################################################################
#                                                #      -__            __-     #
# Teoman Deniz                                   #  :    :!1!-_    _-!1!:    : #
# maximum-tension.com                            #  ::                      :: #
#                                                #  :!:    : :: : :  :  ::::!: #
# +.....................++.....................+ #   :!:: :!:!1:!:!::1:::!!!:  #
# : C - Maximum Tension :: Create - 2026/03/23 : #   ::!::!!1001010!:!11!!::   #
# :---------------------::---------------------: #   :!1!!11000000000011!!:    #
# : License - GPL-3.0   :: Update - 2026/05/23 : #    ::::!!!1!!1!!!1!!!::     #
# +.....................++.....................+ #       ::::!::!:::!::::      #
\******************************************************************************/

/******************************************************************************\
|* __________________________________________________________________________ *|
|*|                                MFSPR_287                                 |*|
|*|__________________________________________________________________________|*|
|*|                          _____                                           |*|
|*| THESE MACROS EXECUTE THE MFSPR INSTRUCTION TO READ THE CONTENTS OF       |*|
|*| SPECIAL-PURPOSE REGISTER (SPR) 287 ON POWERPC PROCESSORS.                |*|
|*| ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^                                       |*|
|*| _____                                                                    |*|
|*| MFSPR TRANSFERS THE VALUE OF A SPECIFIED SPR INTO A GENERAL-PURPOSE      |*|
|*| REGISTER (GPR), ALLOWING SOFTWARE TO INSPECT PROCESSOR STATE OR CONTROL  |*|
|*| INFORMATION MAINTAINED IN THAT REGISTER.                                 |*|
|*|     ___                                                                  |*|
|*| SPR 287 IS IMPLEMENTATION-SPECIFIC BUT IS COMMONLY ASSOCIATED WITH       |*|
|*| PROCESSOR VERSION REGISTER (PVR) ON MANY POWERPC VARIANTS.               |*|
|*| ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^                                         |*|
|*|   _____                                                                  |*|
|*| * MFSPR IS A PRIVILEGED OR SEMI-PRIVILEGED INSTRUCTION ON SOME           |*|
|*|   IMPLEMENTATIONS; AVAILABILITY MAY DEPEND ON EXECUTION LEVEL.           |*|
|*|                  _______    ________________________                     |*|
|*| * THE MEANING OF SPR 287 IS IMPLEMENTATION-DEPENDENT, THOUGH WIDELY USED |*|
|*| : AS:                                                                    |*|
|*| :     ________________________                                           |*|
|*| :.. * PROCESSOR IDENTIFICATION                                           |*|
|*| :     _____________________________                                      |*|
|*| :.. * VERSION AND REVISION ENCODING                                      |*|
|*|                                                                          |*|
|*| * THE RETURNED VALUE IS TYPICALLY STRUCTURED AS:                         |*|
|*| :                 ________________________                               |*|
|*| :.. * UPPER BITS: PROCESSOR FAMILY / MODEL                               |*|
|*| :                 ______________                                         |*|
|*| :.. * LOWER BITS: REVISION LEVEL                                         |*|
|*|                                                                          |*|
|*| * THE INSTRUCTION PERFORMS A DIRECT REGISTER TRANSFER:                   |*|
|*| :     ___________________________                                        |*|
|*| :.. * SPR[287] -> GPR -> VARIABLE                                        |*|
|*|                                                                          |*|
|*| * DOES NOT MODIFY CONDITION REGISTERS UNLESS EXPLICITLY IMPLEMENTED BY   |*|
|*|   THE COMPILER BACKEND.                                                  |*|
|*|                                                                          |*|
|*| * BEHAVIOR AND INTERPRETATION OF SPR 287 MAY DIFFER ACROSS:              |*|
|*| :                                                                        |*|
|*| :.. * EMBEDDED POWERPC VARIANTS                                          |*|
|*| :                                                                        |*|
|*| :.. * SERVER-CLASS PROCESSORS                                            |*|
|*| :                                                                        |*|
|*| :.. * CUSTOM IMPLEMENTATIONS                                             |*|
|*|                                                                          |*|
|*| SOFTWARE SHOULD NOT ASSUME A FIXED LAYOUT UNLESS TARGETING A KNOWN       |*|
|*| PROCESSOR FAMILY.                                                        |*|
|*|__________________________________________________________________________|*|
|*                                                                            *|
\******************************************************************************/

/*############################################################################*\
|*#                                 CONTENTS                                 #*|
|*############################################################################*|
|* __________________________________________________________________________ *|
|*| CONTENT                                                       | DOC LINE |*|
|*|===============================================================|==========|*|
|*| #define GET_MFSPR_287(VARIABLE)                               | 80       |*|
|*| #define get_mfspr_287(variable)                               |          |*|
|*|_______________________________________________________________|__________|*|
|*                                                                            *|
|*                             .................                              *|
|* ............................: GET_MFSPR_287 :............................. *|
|* :                           '''''''''''''''''                            : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| #define GET_MFSPR_287(VARIABLE)                                     : *|
|* : 3| #define get_mfspr_287(variable)                                     : *|
|* : 4|                                                                     : *|
|* :              _____                       _______                       : *|
|* : EXECUTES THE MFSPR INSTRUCTION TARGETING SPR 287, STORING THE          : *|
|* : RETRIEVED VALUE INTO THE PROVIDED VARIABLE.                            : *|
|* :                                                                        : *|
|* : THE MACRO EMITS AN MFSPR INSTRUCTION WHERE:                            : *|
|* :                    ^^^^^                                               : *|
|* : * THE DESTINATION IS A GENERAL-PURPOSE REGISTER MAPPED TO THE GIVEN    : *|
|* :   VARIABLE                                                             : *|
|* :                 _______                                                : *|
|* : * THE SOURCE IS SPR 287                                                : *|
|* :                                                                        : *|
|* : AFTER EXECUTION, THE VARIABLE CONTAINS THE RAW 32-BIT OR 64-BIT VALUE  : *|
|* : OF THE REGISTER (DEPENDING ON THE PROCESSOR MODE).                     : *|
|* :                                                                        : *|
|* : EXAMPLE:                                                               : *|
|* :                                                                        : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| unsigned int value;                                                 : *|
|* : 3|                                                                     : *|
|* : 4| get_mfspr_287(value);                                               : *|
|* : 5|                                                                     : *|
|* :                                                                        : *|
|* : AFTER EXECUTION:                                                       : *|
|* :                                  _______                               : *|
|* : * value CONTAINS THE CONTENTS OF SPR 287                               : *|
|* :   ^^^^^                                                                : *|
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

#ifndef MFSPR_287_H
#define MFSPR_287_H 202605 /* VERSION */

/* **************************** [v] INCLUDES [v] **************************** */
#include "../../../ENVIRONMENTS/CPU.H"
/******* """""""""""""""""""""""""""""
 * #define __CPU_POWERPC__
 */
/* **************************** [^] INCLUDES [^] **************************** */

#ifdef __CPU_POWERPC__

/* **************************** [v] INCLUDES [v] **************************** */
#include "../../../CHECK_FEATURE/INLINE_ASM.H"
/******* """""""""""""""""""""""""""""""""""""
 * #define IS__INLINE_ASM__SUPPORTED
 * #define INLINE_ASM_TYPE__GNU_EXTENDED
 * #define INLINE_ASM_TYPE__GNU
 * #define INLINE_ASM_TYPE__CODEWARRIOR
 * #define INLINE_ASM_TYPE__VBCC
 */
#include "../../../ENVIRONMENTS/KNR_STYLE.H"
/******* """""""""""""""""""""""""""""""""""
 * #define KNR_STYLE
 * #define unsigned
 */
/* **************************** [^] INCLUDES [^] **************************** */

#ifdef INLINE_ASM_TYPE__CODEWARRIOR
#undef IS__INLINE_ASM__SUPPORTED
#else /* !INLINE_ASM_TYPE__CODEWARRIOR */
#ifdef INLINE_ASM_TYPE__VBCC
#undef IS__INLINE_ASM__SUPPORTED
#endif /* INLINE_ASM_TYPE__VBCC */
#endif /* INLINE_ASM_TYPE__CODEWARRIOR */

#ifdef IS__INLINE_ASM__SUPPORTED

#ifdef INLINE_ASM_TYPE__GNU_EXTENDED
#define GET_MFSPR_287(VARIABLE) \
	do\
	{\
		register unsigned long	RESULT;\
		\
		__asm__ __volatile__ (\
			"mfspr %0, 287" \
			: "=r"(RESULT) : : \
		);\
		(VARIABLE) = RESULT;\
	} while (0)
#endif /* INLINE_ASM_TYPE__GNU_EXTENDED */

#ifndef GET_MFSPR_287
#ifdef INLINE_ASM_TYPE__GNU
#define GET_MFSPR_287(VARIABLE) \
	do\
	{\
		register unsigned long	RESULT;\
		\
		asm (\
			"mfspr %0, 287" \
			: "=r"(RESULT) : : \
		);\
		(VARIABLE) = RESULT;\
	} while (0)
#endif /* INLINE_ASM_TYPE__GNU_EXTENDED */
#endif /* !GET_MFSPR_287 */

#ifndef GET_MFSPR_287
#define GET_MFSPR_287() \
	"ERROR - CMT (GET_MFSPR_287.H) IS NOT SUPPORTED IN YOUR COMPILER :l"
#endif /* !GET_MFSPR_287 */

#else /* !IS__INLINE_ASM__SUPPORTED */

#ifdef INLINE_ASM_TYPE__CODEWARRIOR
#define IS__INLINE_ASM__SUPPORTED
#else /* !INLINE_ASM_TYPE__CODEWARRIOR */
#ifdef INLINE_ASM_TYPE__VBCC
#define IS__INLINE_ASM__SUPPORTED
#endif /* INLINE_ASM_TYPE__VBCC */
#endif /* INLINE_ASM_TYPE__CODEWARRIOR */

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
 * #define unsigned
 */
#include "../../../ASM/CAN_CMT_USE_INLINE_ASM_FOR_SECTIONS.INL"
/******* """"""""""""""""""""""""""""""""""""""""""""""""""""""
 * #define CMT_CANT_USE_INLINE_ASM_FOR_SECTIONS
 */
/* **************************** [^] INCLUDES [^] **************************** */

/* *************************** [v] MVS LINKER [v] *************************** */
/* **** MVS LINKER DOES NOT SUPPORT EXTERNAL NAMES LARGER THAN 8 BYTES!! **** */
#ifdef __MVS__ /* IBM Z/OS XL C/C++ */
#define LOCALMACRO__GET_MFSPR_287 L_SPR287
#endif /* __MVS__ */
/* *************************** [^] MVS LINKER [^] *************************** */

/* **************************** [v] EXTERNS [v] ***************************** */
#ifndef KNR_STYLE /* STANDARD C */
extern unsigned long	LOCALMACRO__GET_MFSPR_287(void);
#else /* K&R */
extern unsigned long	LOCALMACRO__GET_MFSPR_287();
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
#define GLOBALCONSTRUCTOR__MFSPR_287 ((int (*)())LOCALMACRO__GET_MFSPR_287)();
#endif /* CMT_CANT_USE_INLINE_ASM_FOR_SECTIONS */

/*   /\   #==========================================================#   /\   */
/*  //\\  |                  SETUP MEMBER CREATION                   |  //\\  */
/* '""""' #==========================================================# '""""' */

#ifdef LOCALMACRO__SETUP_LINKABLE
#undef LOCALMACRO__SETUP_LINKABLE

/* .,,,,. #==========================================================# .,,,,. */
/*  \\//  |                 LINKABLE MEMBER CREATION                 |  \\//  */
/*   \/   #==========================================================#   \/   */

/* ********************* [v] METAWARE HIGH C LINKER [v] ********************* */
/* * METAWARE LINKER DOES NOT SUPPORT LOWER CASE NAMES ON FUNCTION NAMES!!! * */
#ifdef __HIGHC__ /* METAWARE HIGH C/C++ */
#define LOCALLINKER__MFSPR_287_HIGHC \
	pragma Alias(LOCALMACRO__GET_MFSPR_287, "LOCALMACRO__GET_MFSPR_287");
#else /* !__HIGHC__ */
#define LOCALLINKER__MFSPR_287_HIGHC
#endif /* __HIGHC__ */
/* ********************* [^] METAWARE HIGH C LINKER [^] ********************* */

#ifdef INLINE_ASM_TYPE__CODEWARRIOR
#define LOCALLINKER__MFSPR_287 \
	LOCALLINKER__MFSPR_287_HIGHC \
	asm unsigned long\
		LOCALMACRO__GET_MFSPR_287()\
	{\
		nofralloc /* PREVENT COMPILER FROM GENERATING STACK FRAME */\
		mfspr r3, 287\
		blr\
	}
#else /* !INLINE_ASM_TYPE__CODEWARRIOR */
#ifdef INLINE_ASM_TYPE__VBCC

#define LOCALLINKER__MFSPR_287 \
	LOCALLINKER__MFSPR_287_HIGHC \
	unsigned long\
		LOCALMACRO__GET_MFSPR_287() \
		__reg("r3") = "\tmfspr r3, 287\n\tblr\n";

#else /* !INLINE_ASM_TYPE__VBCC */

/* **************************** [v] INCLUDES [v] **************************** */
#include "../../../ASM.H"
/******* """"""""""""""""
 * #define SECTION(RETURN_TYPE, NAME, ARGUMENTS)
 * #define SECTION_KNR(RETURN_TYPE, NAME, ARGUMENTS)
 * #define END
 * #define MFSPR_R3_287
 * #define BLR
 */
/* **************************** [^] INCLUDES [^] **************************** */

#define LOCALLINKER__MFSPR_287 \
	LOCALLINKER__MFSPR_287_HIGHC \
	SECTION(\
		unsigned long, LOCALMACRO__GET_MFSPR_287, (void)\
	)\
	SECTION_KNR(\
		unsigned long, LOCALMACRO__GET_MFSPR_287, ()\
	)\
		MFSPR_R3_287 \
		BLR \
	END

#endif /* INLINE_ASM_TYPE__VBCC */
#endif /* INLINE_ASM_TYPE__CODEWARRIOR */

#ifdef CMT_SETUP

/* [v] %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% /!\ IMPORTANT /!\ */
LOCALLINKER__MFSPR_287
/* [^] %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% /!\ IMPORTANT /!\ */

#include "../../../CMT_AUTO_CONSTRUCTOR.INL"
#else /* !CMT_SETUP */

/* [v] %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% /!\ IMPORTANT /!\ */
#undef GLOBALLINKER__MFSPR_287
#define GLOBALLINKER__MFSPR_287 LOCALLINKER__MFSPR_287
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

#define GET_MFSPR_287(VARIABLE) \
	do\
	{\
		(VARIABLE) = LOCALMACRO__GET_MFSPR_287();\
	} while (0)

#endif /* IS__INLINE_ASM__SUPPORTED */

#else /* !__CPU_POWERPC__ */
#define GET_MFSPR_287() \
	"ERROR - YOU'RE NOT USING A POWERPC CPU TO USE THIS COMMAND >:("
#endif /* __CPU_POWERPC__ */

/* *************************** [v] LOWERCASE [v] **************************** */
#define get_mfspr_287(variable) GET_MFSPR_287(variable)
/* *************************** [^] LOWERCASE [^] **************************** */
#endif /* !MFSPR_287_H */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
