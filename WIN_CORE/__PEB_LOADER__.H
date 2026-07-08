/******************************************************************************\
# H - __PEB_LOADER__                             #       Maximum Tension       #
################################################################################
#                                                #      -__            __-     #
# Teoman Deniz                                   #  :    :!1!-_    _-!1!:    : #
# maximum-tension.com                            #  ::                      :: #
#                                                #  :!:    : :: : :  :  ::::!: #
# +.....................++.....................+ #   :!:: :!:!1:!:!::1:::!!!:  #
# : C - Maximum Tension :: Create - 2026/05/19 : #   ::!::!!1001010!:!11!!::   #
# :---------------------::---------------------: #   :!1!!11000000000011!!:    #
# : License - GPL-3.0   :: Update - 2026/06/16 : #    ::::!!!1!!1!!!1!!!::     #
# +.....................++.....................+ #       ::::!::!:::!::::      #
\******************************************************************************/

/******************************************************************************\
|* __________________________________________________________________________ *|
|*|                                PEB_LOADER                                |*|
|*|__________________________________________________________________________|*|
|*| ______________                                                           |*|
|*| PEB_LOADER PROVIDES LIGHTWEIGHT ROUTINES FOR LOCATING LOADED MODULES AND |*|
|*| EXPORTED FUNCTIONS WITHOUT RELYING ON THE WINDOWS LOADER APIS.           |*|
|*|                                      __________________                  |*|
|*| INSTEAD OF CALLING FUNCTIONS SUCH AS GetModuleHandleW() OR               |*|
|*| GetProcAddress(), THE MODULE WALKS THE PROCESS ENVIRONMENT BLOCK (PEB)   |*|
|*| AND PARSES PE EXPORT TABLES MANUALLY.                                    |*|
|*|                                                                          |*|
|*| THIS IS USEFUL FOR LOW-LEVEL RUNTIME ENVIRONMENTS, SHELLCODE, CUSTOM     |*|
|*| LOADERS, DEPENDENCY-FREE APPLICATIONS, AND SITUATIONS WHERE DIRECT       |*|
|*| INTERACTION WITH THE WINDOWS API IS UNDESIRABLE.                         |*|
|*|__________________________________________________________________________|*|
|*                                                                            *|
\******************************************************************************/

/*############################################################################*\
|*#                                 CONTENTS                                 #*|
|*############################################################################*|
|* __________________________________________________________________________ *|
|*| CONTENT                                                       | DOC LINE |*|
|*|===============================================================|==========|*|
|*| void *PEB_GET_MODULE_BASE(unsigned char *);                   | 50       |*|
|*|_______________________________________________________________|__________|*|
|*| void *peb_get_module_base(unsigned char *);                   | 50       |*|
|*|_______________________________________________________________|__________|*|
|*| void *PEB_GET_EXPORT(const unsigned char *, const char *);    | 90       |*|
|*|_______________________________________________________________|__________|*|
|*| void *peb_get_export(const unsigned char *, const char *);    | 90       |*|
|*|_______________________________________________________________|__________|*|
|*                                                                            *|
|*                          .......................                           *|
|* .........................: PEB_GET_MODULE_BASE :.......................... *|
|* :                        '''''''''''''''''''''''                         : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| void    *PEB_GET_MODULE_BASE(unsigned char *);                      : *|
|* : 3| void    *peb_get_module_base(unsigned char *);                      : *|
|* : 4|                                                                     : *|
|* :                                                                        : *|
|* : SEARCHES THE PROCESS LOADER'S MODULE LIST THROUGH THE PEB AND RETURNS  : *|
|* : THE BASE ADDRESS OF A LOADED MODULE WHOSE UNICODE FILENAME MATCHES     : *|
|* : THE TARGET ARGUMENT.                                                   : *|
|* :                                     _____________________              : *|
|* : THE FUNCTION TRAVERSES THE LOADER'S InLoadOrderModuleList, COMPARES    : *|
|* : EACH MODULE'S BaseDllName, AND RETURNS THE CORRESPONDING DllBase WHEN  : *|
|* : A MATCH IS FOUND. ^^^^^^^                                ^^^^^^^       : *|
|* :                                                                        : *|
|* : RETURNS:                                                               : *|
|* :                                                                        : *|
|* : * MODULE BASE ADDRESS ON SUCCESS.                                      : *|
|* : * 0 IF THE MODULE IS NOT LOADED.                                       : *|
|* : * 0 IF THE PEB OR LOADER STRUCTURES ARE UNAVAILABLE.                   : *|
|* :                                                                        : *|
|* : EXAMPLE:                                                               : *|
|* :                                                                        : *|
|* :   v [C LANGUAGE]                                                       : *|
|* :  1|                                                                    : *|
|* :  2| void    *KERNEL32 = PEB_GET_MODULE_BASE("KERNEL32.DLL");           : *|
|* :  3|                                                                    : *|
|* :  4| if (!KERNEL32)                                                     : *|
|* :  5| {                                                                  : *|
|* :  6|     // MODULE SOMEHOW NOT FOUND                                    : *|
|* :  7| }                                                                  : *|
|* :  8| else                                                               : *|
|* :  9| {                                                                  : *|
|* : 10|     // KERNEL32.DeleteFileA("KERNEL32.DLL")                        : *|
|* : 11| }                                                                  : *|
|* : 12|                                                                    : *|
|* :........................................................................: *|
|*                                                                            *|
|*                             ..................                             *|
|* ............................: PEB_GET_EXPORT :............................ *|
|* :                           ''''''''''''''''''                           : *|
|* :  v [C LANGUAGE]                                                        : *|
|* : 1|                                                                     : *|
|* : 2| void    *PEB_GET_EXPORT(const unsigned char *, const char *);       : *|
|* : 3| void    *peb_get_export(const unsigned char *, const char *);       : *|
|* : 4|                                                                     : *|
|* :                                                                        : *|
|* : RETRIEVES THE ADDRESS OF AN EXPORTED FUNCTION BY MANUALLY PARSING A    : *|
|* : MODULE'S PE EXPORT DIRECTORY.                                          : *|
|* :                                                                        : *|
|* : THE FUNCTION VALIDATES THE DOS HEADER, LOCATES THE PE HEADER, RESOLVES : *|
|* : THE EXPORT TABLE, AND PERFORMS A STRING COMPARISON AGAINST EXPORTED    : *|
|* : NAMES UNTIL THE REQUESTED SYMBOL IS FOUND.                             : *|
|* :                                                                        : *|
|* : UNLIKE GetProcAddress(), NO WINDOWS API CALLS ARE USED.                : *|
|* :        ^^^^^^^^^^^^^^^^                                                : *|
|* : RETURNS:                                                               : *|
|* :                                                                        : *|
|* : * EXPORTED FUNCTION ADDRESS ON SUCCESS.                                : *|
|* : * 0 IF THE EXPORT DOES NOT EXIST.                                      : *|
|* : * 0 IF THE MODULE IS INVALID OR LACKS AN EXPORT TABLE.                 : *|
|* :                                                                        : *|
|* : EXAMPLE:                                                               : *|
|* :                                                                        : *|
|* :   v [C LANGUAGE]                                                       : *|
|* :  1|                                                                    : *|
|* :  2| #define INCL_CMT_STDCALL                                           : *|
|* :  3| #include <CMT.H> // STDCALL                                        : *|
|* :  4|                                                                    : *|
|* :  5| void    *KERNEL32 = PEB_GET_MODULE_BASE("KERNEL32.DLL");           : *|
|* :  6|                                                                    : *|
|* :  7| typedef void    *(                                                 : *|
|* :  8|     STDCALL *FN_GETPROCADDRESS                                     : *|
|* :  9| )(void *, const char *);                                           : *|
|* : 10|                                                                    : *|
|* : 11| FN_GETPROCADDRESS    GET_PROC_ADDRESS =                            : *|
|* : 12|     (FN_GETPROCADDRESS)PEB_GET_EXPORT(KERNEL32, "GetProcAddress"); : *|
|* : 13|                                                                    : *|
|* : 14| if (GET_PROC_ADDRESS)                                              : *|
|* : 15| {                                                                  : *|
|* : 16|     // EXPORT RESOLVED                                             : *|
|* : 17|     // YOU CAN NOW USE GetProcAddress FUNCTION AS GET_PROC_ADDRESS : *|
|* : 18| }                                                                  : *|
|* : 19|                                                                    : *|
|* :........................................................................: *|
|*                                                                            *|
\******************************************************************************/

#ifndef PEB_LOADER_H
#define PEB_LOADER_H 202606 /* VERSION */

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

#ifdef __SYSTEM_32_BIT__
#define LOCALMACRO__PEB_RESERVED_SIZE 0XC
#else /* !__SYSTEM_32_BIT__ */
#ifdef __SYSTEM_64_BIT__
#define LOCALMACRO__PEB_RESERVED_SIZE 0X18
#endif /* __SYSTEM_64_BIT__ */
#endif /* __SYSTEM_32_BIT__ */

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
#include "../ENVIRONMENTS/KNR_STYLE.H"
/******* """""""""""""""""""""""""""""
 * #define unsigned
 * #define const
 * #define void
 * #define KNR_STYLE
 */
#include "../ASM/CAN_CMT_USE_INLINE_ASM_FOR_SECTIONS.INL"
/******* """"""""""""""""""""""""""""""""""""""""""""""""
 * #define CMT_CANT_USE_INLINE_ASM_FOR_SECTIONS
 */
/* **************************** [^] INCLUDES [^] **************************** */

/* **************************** [v] STRUCTS [v] ***************************** */
struct S_LIST_ENTRY
{
	struct S_LIST_ENTRY	*FLINK;
	struct S_LIST_ENTRY	*BLINK;
};

struct S_UNICODE_STRING
{
	unsigned short	LENGTH;
	unsigned short	MAXIMUM_LENGTH;
	unsigned short	*BUFFER;
};

struct S_PEB_LDR_DATA
{
	unsigned long		LENGTH;
	unsigned char		INITIALIZED;
	void				*SESSION_SERVER_HANDLE;
	struct S_LIST_ENTRY	IN_LOAD_ORDER_MODULE_LIST;
	struct S_LIST_ENTRY	IN_MEMORY_ORDER_MODULE_LIST;
	struct S_LIST_ENTRY	IN_INITIALIZATION_ORDER_MODULE_LIST;
	void				*ENTRY_IN_PROGRESS;
	unsigned char		SHUTDOWN_IN_PROGRESS;
	void				*SHUTDOWN_THREAD_ID;
};

struct S_LDR_DATA_TABLE_ENTRY
{
	struct S_LIST_ENTRY		IN_LOAD_ORDER_LINKS;
	struct S_LIST_ENTRY		IN_MEMORY_ORDER_LINKS;
	struct S_LIST_ENTRY		IN_INITIALIZATION_ORDER_LINKS;
	void					*DLL_BASE;
	void					*ENTRY_POINT;
	void					*SIZE_OF_IMAGE;
	struct S_UNICODE_STRING	FULL_DLL_NAME;
	struct S_UNICODE_STRING	BASE_DLL_NAME;
};

struct S_PEB
{
	unsigned char			RESERVED[LOCALMACRO__PEB_RESERVED_SIZE];
	struct S_PEB_LDR_DATA	*LDR;
};
/* **************************** [^] STRUCTS [^] ***************************** */

/* *************************** [v] MVS LINKER [v] *************************** */
/* **** MVS LINKER DOES NOT SUPPORT EXTERNAL NAMES LARGER THAN 8 BYTES!! **** */
#ifdef __MVS__ /* IBM Z/OS XL C/C++ */
#define PEB_GET_EXPORT PEBGETEX
#define PEB_GET_MODULE_BASE PEBGETMB
#define READ_FS_DWORD RDFSQWRD
#define READ_GS_QWORD RDGSDWRD
#endif /* __MVS__ */
/* *************************** [^] MVS LINKER [^] *************************** */

/* **************************** [v] EXTERNS [v] ***************************** */
#ifndef KNR_STYLE /* STANDARD C */
extern void	*PEB_GET_EXPORT(const unsigned char *, const char *);
extern void	*PEB_GET_MODULE_BASE(const char *);

#ifdef __SYSTEM_32_BIT__
extern unsigned int			READ_FS_DWORD(unsigned int);
#else /* !__SYSTEM_32_BIT__ */
#ifdef __SYSTEM_64_BIT__
extern unsigned long long	READ_GS_QWORD(unsigned long long);
#endif /* __SYSTEM_64_BIT__ */
#endif /* __SYSTEM_32_BIT__ */
#else /* K&R */
extern char	*PEB_GET_EXPORT();
extern char	*PEB_GET_MODULE_BASE();

#ifdef __SYSTEM_32_BIT__
extern unsigned int		READ_FS_DWORD();
#else /* !__SYSTEM_32_BIT__ */
#ifdef __SYSTEM_64_BIT__
extern unsigned long	READ_GS_QWORD();
#endif /* __SYSTEM_64_BIT__ */
#endif /* __SYSTEM_32_BIT__ */
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
#ifndef __TINYC__
#ifdef __SYSTEM_32_BIT__
#undef GLOBALCONSTRUCTOR__PEB_LOADER
#define GLOBALCONSTRUCTOR__PEB_LOADER ((int (*)())READ_FS_DWORD)();
#else /* !__SYSTEM_32_BIT__ */
#ifdef __SYSTEM_64_BIT__
#undef GLOBALCONSTRUCTOR__PEB_LOADER
#define GLOBALCONSTRUCTOR__PEB_LOADER ((int (*)())READ_GS_QWORD)();
#endif /* __SYSTEM_64_BIT__ */
#endif /* __SYSTEM_32_BIT__ */
#endif /* !__TINYC__ */
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
#include "../ENVIRONMENTS/ARCHITECTURE.H"
/******* """"""""""""""""""""""""""""""""
 * #define __SYSTEM_32_BIT__
 * #define __SYSTEM_64_BIT__
 */
#define INCL_CMT_ASM_INLINE
#define INCL_CMT_ASM_MOV
#define INCL_CMT_ASM_OTHERS
#define INCL_CMT_ASM_MOV_ABI
#define INCL_CMT_ASM_MOV_PTR_SEGMENT
#include "../ASM.H"
/******* """"""""""
 * #define SECTION(RETURN_TYPE, NAME, ARGUMENTS)
 * #define SECTION_KNR(RETURN_TYPE, NAME, ARGUMENTS)
 * #define MOV_EAX_ARG1
 * #define MOV_EAX_FROM_PTR_FS_EAX
 * #define MOV_RAX_FROM_PTR_GS_RCX
 * #define RET
 * #define END
 */
/* **************************** [^] INCLUDES [^] **************************** */

#ifdef __SYSTEM_32_BIT__
#ifndef __TINYC__
#define LOCALLINKER__READ_GS_QWORD
#define LOCALLINKER__READ_FS_DWORD \
	SECTION (unsigned int, READ_FS_DWORD, (unsigned int OFFSET))\
	SECTION_KNR (unsigned int, READ_FS_DWORD, (unsigned int OFFSET))\
		MOV_EAX_ARG1\
		MOV_EAX_FROM_PTR_FS_EAX\
		RET\
	END
#else /* __TINYC__ */
#define LOCALLINKER__READ_GS_QWORD
#define LOCALLINKER__READ_FS_DWORD \
	unsigned int\
		READ_FS_DWORD(unsigned int OFFSET)\
		{\
			unsigned int	RETURN;\
			\
			__asm__ __volatile__ (\
				"movl %%fs:(%1), %0"\
				: "=r"(RETURN)\
				: "r"(OFFSET)\
			);\
			return (RETURN);\
		}
#endif /* !__TINYC__ */

#define LOCALMACRO__CONTAINING_RECORD(ADDRESS, TYPE, FIELD) \
	(\
		(TYPE *)((unsigned char *)(ADDRESS) - \
		(unsigned long)(&((TYPE *)0)->FIELD))\
	)
#define LOCALMACRO__GET_PEB_PTR() ((struct S_PEB *)READ_FS_DWORD(0X30))
#else /* !__SYSTEM_32_BIT__ */
#ifdef __SYSTEM_64_BIT__
#ifndef __TINYC__
#define LOCALLINKER__READ_FS_DWORD
#define LOCALLINKER__READ_GS_QWORD \
	SECTION (\
		unsigned long long, \
		READ_GS_QWORD, \
		(register unsigned long long OFFSET)\
	)\
	SECTION_KNR (\
		unsigned long long, \
		READ_GS_QWORD, \
		(OFFSET)\
		register unsigned long long	OFFSET;\
	)\
		MOV_RAX_FROM_PTR_GS_RCX /* ALWAYS RCX, IT'S FOR WIN64 ANYWAY */\
		RET\
	END
#else /* __TINYC__ */
#define LOCALLINKER__READ_FS_DWORD
#define LOCALLINKER__READ_GS_QWORD \
	unsigned long long\
		READ_GS_QWORD(unsigned long long OFFSET)\
		{\
			unsigned long long	RETURN;\
			\
			__asm__ __volatile__ (\
				"movq %%gs:(%1), %0"\
				: "=r"(RETURN)\
				: "r"(OFFSET)\
			);\
			return (RETURN);\
		}
#endif /* !__TINYC__ */

#define LOCALMACRO__CONTAINING_RECORD(ADDRESS, TYPE, FIELD) \
	(\
		(TYPE *)((unsigned char *)(ADDRESS) - \
		(unsigned long long)(&((TYPE *)0)->FIELD))\
	)
#define LOCALMACRO__GET_PEB_PTR() ((struct S_PEB *)READ_GS_QWORD(0X60))
#endif /* __SYSTEM_64_BIT__ */
#endif /* __SYSTEM_32_BIT__ */

#ifndef KNR_STYLE /* STANDARD C */
#define FUNCTION_HEADER__PEB_GET_MODULE_BASE \
	void\
		*PEB_GET_MODULE_BASE(const char *TARGET)
#define FUNCTION_HEADER__PEB_GET_EXPORT \
	void\
		*PEB_GET_EXPORT(const unsigned char *MODULE, const char *FUNCTION_NAME)
#else /* K&R */
#define FUNCTION_HEADER__PEB_GET_MODULE_BASE \
	char\
		*PEB_GET_MODULE_BASE(TARGET)\
		char	*TARGET;
#define FUNCTION_HEADER__PEB_GET_EXPORT \
	char\
		*PEB_GET_EXPORT(MODULE, FUNCTION_NAME)\
		unsigned char	*MODULE;\
		char			*FUNCTION_NAME;
#endif /* !KNR_STYLE */

#define LOCALLINKER__PEB_GET_MODULE_BASE \
	FUNCTION_HEADER__PEB_GET_MODULE_BASE\
	{\
		struct S_PEB	*THE_PEB = LOCALMACRO__GET_PEB_PTR();\
		\
		if (!THE_PEB || !THE_PEB->LDR)\
			return (0);\
		\
		const struct S_LIST_ENTRY	*const HEAD =\
			&THE_PEB->LDR->IN_LOAD_ORDER_MODULE_LIST;\
		struct S_LIST_ENTRY			*CURSOR = HEAD->FLINK;\
		\
		while (CURSOR != HEAD)\
		{\
			struct S_LDR_DATA_TABLE_ENTRY	*ENTRY = \
				LOCALMACRO__CONTAINING_RECORD(\
					CURSOR, struct S_LDR_DATA_TABLE_ENTRY, IN_LOAD_ORDER_LINKS\
				);\
			\
			if (ENTRY->BASE_DLL_NAME.BUFFER)\
			{\
				const struct S_UNICODE_STRING	*UNICODE_ARGIMENT =\
					(struct S_UNICODE_STRING *)&ENTRY->BASE_DLL_NAME;\
				register unsigned short			INDEX;\
				const unsigned short			SIZE =\
					UNICODE_ARGIMENT->LENGTH / sizeof(unsigned short);\
				\
				if (SIZE <= 256)\
				{\
					register int	SKIP = 0;\
					\
					for (INDEX = 0; INDEX < SIZE; INDEX++)\
					{\
						register unsigned short	CHARACTER_1 =\
							UNICODE_ARGIMENT->BUFFER[INDEX];\
						register char			CHARACTER_2 = TARGET[INDEX];\
						\
						if (!CHARACTER_2)\
						{\
							SKIP = 1;\
							break ;\
						}\
						\
						if (CHARACTER_1 >= 'A' && CHARACTER_1 <= 'Z')\
							CHARACTER_1 += 32;\
						\
						if (CHARACTER_2 >= 'A' && CHARACTER_2 <= 'Z')\
							CHARACTER_2 += 32;\
						\
						if ((char)CHARACTER_1 != CHARACTER_2)\
						{\
							SKIP = 1;\
							break ;\
						}\
					}\
					\
					if (!SKIP && TARGET[SIZE] == 0)\
						return (ENTRY->DLL_BASE);\
				}\
			}\
			\
			CURSOR = CURSOR->FLINK;\
		}\
		\
		return (0);\
	}

#define LOCALLINKER__PEB_GET_EXPORT \
	FUNCTION_HEADER__PEB_GET_EXPORT\
	{\
		if (*(unsigned short *)MODULE != 0X5A4D)\
			return (0);\
		\
		unsigned long	EXPORT_RVA = (unsigned long)0;\
		\
		{\
			const unsigned char		*const NT =\
				MODULE + *((unsigned long *)(MODULE + 0X3C));\
			const unsigned short	MAGIC = *(unsigned short *)(NT + 0X18);\
			\
			if (MAGIC == 0X10B) /* PE32 */\
				EXPORT_RVA = *(unsigned long *)(NT + 0X78);\
			else if (MAGIC == 0X20B) /* PE32+ */\
				EXPORT_RVA = *(unsigned long *)(NT + 0X88);\
			else\
				return (0);\
		}\
		\
		if (!EXPORT_RVA)\
			return (0);\
		\
		const unsigned char		*const EXPORT = MODULE + EXPORT_RVA;\
		const unsigned long		*const NAMES =\
			(unsigned long *)(MODULE + *(unsigned long *)(EXPORT + 0X20));\
		const unsigned long		*const FUNCTIONS =\
			(unsigned long *)(MODULE + *(unsigned long *)(EXPORT + 0X1C));\
		const unsigned short	*const OLD =\
			(unsigned short *)(MODULE + *(unsigned long *)(EXPORT + 0X24));\
		const unsigned long		COUNT = *(unsigned long *)(EXPORT + 0X18);\
		unsigned long			INDEX;\
		\
		for (INDEX = 0; INDEX < COUNT; INDEX++)\
		{\
			const char	*FUNCTION_ADDRESS = (char *)(MODULE + NAMES[INDEX]);\
			const char	*FUNCTION_NAME_ITERATION = FUNCTION_NAME;\
			\
			if (!FUNCTION_ADDRESS || !FUNCTION_NAME)\
				continue ;\
			\
			while (\
				*FUNCTION_ADDRESS && *FUNCTION_NAME_ITERATION &&\
				*FUNCTION_ADDRESS == *FUNCTION_NAME_ITERATION\
			)\
			{\
				++FUNCTION_ADDRESS;\
				++FUNCTION_NAME_ITERATION;\
			}\
			\
			if (*FUNCTION_ADDRESS == 0 && *FUNCTION_NAME_ITERATION == 0)\
				return ((unsigned char *)MODULE + FUNCTIONS[OLD[INDEX]]);\
		}\
		\
		return (0);\
	}

#define LOCALLINKER__PEB_LOADER \
	LOCALLINKER__READ_FS_DWORD \
	LOCALLINKER__READ_GS_QWORD \
	LOCALLINKER__PEB_GET_MODULE_BASE \
	LOCALLINKER__PEB_GET_EXPORT

#ifdef CMT_SETUP

/* [v] %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% /!\ IMPORTANT /!\ */
LOCALLINKER__PEB_LOADER
/* [^] %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% /!\ IMPORTANT /!\ */

#include "../CMT_AUTO_CONSTRUCTOR.INL"
#else /* !CMT_SETUP */

/* [v] %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% /!\ IMPORTANT /!\ */
#undef GLOBALLINKER__PEB_LOADER
#define GLOBALLINKER__PEB_LOADER LOCALLINKER__PEB_LOADER
/* [^] %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% /!\ IMPORTANT /!\ */

/*   /\   #==========================================================#   /\   */
/*  //\\  |                 LINKABLE MEMBER CREATION                 |  //\\  */
/* '""""' #==========================================================# '""""' */

#include "../CMT_AUTO_LINKER.INL"
#endif /* CMT_SETUP */
#else /* !LOCALMACRO__SETUP_LINKABLE */
#include "../CMT_AUTO_CONSTRUCTOR.INL"
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

/* *************************** [v] LOWERCASE [v] **************************** */
#define peb_get_module_base PEB_GET_MODULE_BASE
#define peb_get_export PEB_GET_EXPORT
/* *************************** [^] LOWERCASE [^] **************************** */

/* ************************ [v] TI CGT CCS (POP) [v] ************************ */
#ifdef __TI_COMPILER_VERSION__
#pragma diag_pop /* TI CGT CCS COMPILER DIRECTIVES */
#endif /* __TI_COMPILER_VERSION__ */
/* ************************ [^] TI CGT CCS (POP) [^] ************************ */

#endif /* !PEB_LOADER_H */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
