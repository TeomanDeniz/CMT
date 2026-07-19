/******************************************************************************\
# H - KERNEL32                                   #       Maximum Tension       #
################################################################################
#                                                #      -__            __-     #
# Teoman Deniz                                   #  :    :!1!-_    _-!1!:    : #
# maximum-tension.com                            #  ::                      :: #
#                                                #  :!:    : :: : :  :  ::::!: #
# +.....................++.....................+ #   :!:: :!:!1:!:!::1:::!!!:  #
# : C - Maximum Tension :: Create - 2026/05/19 : #   ::!::!!1001010!:!11!!::   #
# :---------------------::---------------------: #   :!1!!11000000000011!!:    #
# : License - GPL-3.0   :: Update - 2026/06/19 : #    ::::!!!1!!1!!!1!!!::     #
# +.....................++.....................+ #       ::::!::!:::!::::      #
\******************************************************************************/

/******************************************************************************\
|* __________________________________________________________________________ *|
|*|                                 KERNEL32                                 |*|
|*|__________________________________________________________________________|*|
|*|  ______________________________________________________________________  |*|
|*| | CONTENTS LIST                                                        | |*|
|*| |======================================================================| |*|
|*| | struct S_KERNEL32;                                                   | |*|
|*| |----------------------------------------------------------------------| |*|
|*| | struct S_KERNEL32 KERNEL32;                                          | |*|
|*| |______________________________________________________________________| |*|
|*|             ____________                                                 |*|
|*| THE WINDOWS KERNEL32.DLL API IS EXPOSED THROUGH A SINGLE GLOBAL          |*|
|*| STRUCTURE NAMED KERNEL32.                                                |*|
|*|                 ^^^^^^^^                                                 |*|
|*| THIS STRUCTURE IS POPULATED AT RUNTIME, SO SOME FUNCTION POINTERS MAY BE |*|
|*| NULL DEPENDING ON THE TARGET WINDOWS VERSION (ESPECIALLY ON OLDER        |*|
|*| SYSTEMS SUCH AS WINDOWS 2000). SO, ALWAYS VERIFY THAT A FUNCTION POINTER |*|
|*| IS VALID BEFORE CALLING IT.                                              |*|
|*|                                     __________                           |*|
|*| AVAILABLE FUNCTIONS ARE DECLARED IN KERNEL32.H. YOU CAN EXTEND THE       |*|
|*| STRUCT MANUALLY IF YOU NEED ADDITIONAL EXPORTS THAT ARE NOT CURRENTLY    |*|
|*| INCLUDED.                                                                |*|
|*|                                                                          |*|
|*| EXAMPLE:                                                                 |*|
|*|                                                                          |*|
|*|  v [C LANGUAGE]                                                          |*|
|*| 1|                                                                       |*|
|*| 2| #include <CMT/WIN_CORE/KERNEL32.H>                                    |*|
|*| 3|                                                                       |*|
|*| 4| int main()                                                            |*|
|*| 5| {                                                                     |*|
|*| 6|     KERNEL32.Sleep(42);                                               |*|
|*| 7|     return (0);                                                       |*|
|*| 8| }                                                                     |*|
|*| 9|                                                                       |*|
|*|__________________________________________________________________________|*|
|*                                                                            *|
\******************************************************************************/

#ifndef KERNEL32_H
#define KERNEL32_H 202606 /* VERSION */

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
#include "../ATTRIBUTES/STDCALL.H"
/******* """""""""""""""""""""""""
 * #define STDCALL
 */
#include "../ENVIRONMENTS/KNR_STYLE.H"
/******* """""""""""""""""""""""""""""
 * #define KNR_STYLE
 * #define void
 * #define unsigned
 * #define const
 */
#include "../KEYWORDS/TYPES.H"
/******* """""""""""""""""""""
 * typeof	PTR;
 * typeof	LET;
 * typeof	VAR;
 */
/* **************************** [^] INCLUDES [^] **************************** */

/* **************************** [v] STRUCTS [v] ***************************** */
struct S_WIN_SYSTEM_INFO
{
	union
	{
		unsigned long	OEM_ID;
		struct
		{
			unsigned short	PROCESSOR_ARCHITECTURE;
			unsigned short	RESERVED;
		}	DUMMYSTRUCTNAME;
	}	DUMMYUNIONNAME;
	unsigned long		PAGE_SIZE;
	PTR					MINIMUM_APPLICATION_ADDRESS;
	PTR					MAXIMUM_APPLICATION_ADDRESS;
	LET					ACTIVE_PROCESSOR_MASK;
	unsigned long		NUMBER_OF_PROCESSORS;
	unsigned long		PROCESSOR_TYPE;
	unsigned long		ALLOCATION_GRANULARITY;
	unsigned short		PROCESSOR_LEVEL;
	unsigned short		PROCESSOR_REVISION;
};

struct S_KERNEL32
{
#ifndef KNR_STYLE /* STANDARD C */
	PTR				SELF_ADDRESS;
	PTR				(STDCALL *LoadLibraryA)(const char *);
	PTR				(STDCALL *LoadLibraryExA)(
		const char*,
		PTR,
		unsigned long
	);
	int				(STDCALL *FreeLibrary)(PTR);
	PTR				(STDCALL *GetProcAddress)(PTR, const char *);
	PTR				(STDCALL *GetModuleHandleA)(const char *);
	PTR				(STDCALL *GetCurrentProcess)(void);
	unsigned long	(STDCALL *GetCurrentProcessId)(void);
	int				(STDCALL *TerminateProcess)(PTR, unsigned int);
	void			(STDCALL *ExitProcess)(unsigned int);
	PTR				(STDCALL *CreateThread)(
		PTR,
		unsigned long,
		unsigned long (STDCALL *)(PTR),
		PTR,
		unsigned long,
		unsigned long *
	);
	PTR				(STDCALL *GetCurrentThread)(void);
	unsigned long	(STDCALL *GetCurrentThreadId)(void);
	void			(STDCALL *ExitThread)(unsigned long);
	unsigned long	(STDCALL *SuspendThread)(PTR);
	unsigned long	(STDCALL *ResumeThread)(PTR);
	PTR				(STDCALL *VirtualAlloc)(
		PTR,
		unsigned long,
		unsigned long,
		unsigned long
	);
	int				(STDCALL *VirtualFree)(
		PTR,
		unsigned long,
		unsigned long
	);
	int				(STDCALL *VirtualProtect)(
		PTR,
		unsigned long,
		unsigned long,
		unsigned long *
	);
	void			(STDCALL *RtlMoveMemory)(
		PTR,
		const PTR,
		unsigned long
	);
	void			(STDCALL *RtlCopyMemory)(
		PTR,
		const PTR,
		unsigned long
	);
	void			(STDCALL *RtlZeroMemory)(PTR, unsigned long);
	PTR				(STDCALL *GetProcessHeap)(void);
	PTR				(STDCALL *HeapAlloc)(
		PTR,
		unsigned long,
		unsigned long
	);
	int				(STDCALL *HeapFree)(
		PTR,
		unsigned long,
		PTR
	);
	PTR				(STDCALL *CreateFileA)(
		const char *,
		unsigned long,
		unsigned long,
		PTR,
		unsigned long,
		unsigned long,
		PTR
	);
	int				(STDCALL *ReadFile)(
		PTR,
		PTR,
		unsigned long,
		unsigned long *,
		PTR
	);
	int				(STDCALL *WriteFile)(
		PTR,
		const PTR,
		unsigned long,
		unsigned long *,
		PTR
	);
	int				(STDCALL *CloseHandle)(PTR);
	unsigned long	(STDCALL *GetFileSize)(PTR, unsigned long *);
	int				(STDCALL *DeleteFileA)(const char*);
	PTR				(STDCALL *GetStdHandle)(unsigned long);
	int				(STDCALL *WriteConsoleA)(
		PTR,
		const PTR,
		unsigned long,
		unsigned long *,
		PTR
	);
	unsigned long	(STDCALL *WaitForSingleObject)(PTR, unsigned long);
	void			(STDCALL *Sleep)(unsigned long);
	void			(STDCALL *GetSystemTime)(PTR);
	void			(STDCALL *GetLocalTime)(PTR);
	int				(STDCALL *QueryPerformanceCounter)(long long *);
	int				(STDCALL *QueryPerformanceFrequency)(long long *);
	unsigned long	(STDCALL *GetLastError)(void);
	void			(STDCALL *SetLastError)(unsigned long);
	int				(STDCALL *lstrcmpA)(const char *, const char *);
	char			*(STDCALL *lstrcpyA)(char *, const char *);
	unsigned long	(STDCALL *lstrlenA)(const char *);
	int				(STDCALL *FlushInstructionCache)(PTR, const PTR, VAR);
	void			(STDCALL *GetSystemInfo)(struct S_WIN_SYSTEM_INFO *);
	int				(STDCALL *GetExitCodeThread)(PTR, unsigned long *);
	void			(STDCALL *InitializeCriticalSection)(PTR);
	void			(STDCALL *DeleteCriticalSection)(PTR);
	void			(STDCALL *EnterCriticalSection)(PTR);
	void			(STDCALL *LeaveCriticalSection)(PTR);
#else /* K&R */
	char			*SELF_ADDRESS;
	PTR				(STDCALL *LoadLibraryA)();
	PTR				(STDCALL *LoadLibraryExA)();
	int				(STDCALL *FreeLibrary)();
	PTR				(STDCALL *GetProcAddress)();
	PTR				(STDCALL *GetModuleHandleA)();
	PTR				(STDCALL *GetCurrentProcess)();
	unsigned long	(STDCALL *GetCurrentProcessId)();
	int				(STDCALL *TerminateProcess)();
	int				(STDCALL *ExitProcess)();
	PTR				(STDCALL *CreateThread)();
	PTR				(STDCALL *GetCurrentThread)();
	unsigned long	(STDCALL *GetCurrentThreadId)();
	int				(STDCALL *ExitThread)();
	unsigned long	(STDCALL *SuspendThread)();
	unsigned long	(STDCALL *ResumeThread)();
	PTR				(STDCALL *VirtualAlloc)();
	int				(STDCALL *VirtualFree)();
	int				(STDCALL *VirtualProtect)();
	int				(STDCALL *RtlMoveMemory)();
	int				(STDCALL *RtlCopyMemory)();
	int				(STDCALL *RtlZeroMemory)();
	PTR				(STDCALL *GetProcessHeap)();
	PTR				(STDCALL *HeapAlloc)();
	int				(STDCALL *HeapFree)();
	PTR				(STDCALL *CreateFileA)();
	int				(STDCALL *ReadFile)();
	int				(STDCALL *WriteFile)();
	int				(STDCALL *CloseHandle)();
	unsigned long	(STDCALL *GetFileSize)();
	int				(STDCALL *DeleteFileA)();
	PTR				(STDCALL *GetStdHandle)();
	int				(STDCALL *WriteConsoleA)();
	unsigned long	(STDCALL *WaitForSingleObject)();
	int				(STDCALL *Sleep)();
	int				(STDCALL *GetSystemTime)();
	int				(STDCALL *GetLocalTime)();
	int				(STDCALL *QueryPerformanceCounter)();
	int				(STDCALL *QueryPerformanceFrequency)();
	unsigned long	(STDCALL *GetLastError)();
	int				(STDCALL *SetLastError)();
	int				(STDCALL *lstrcmpA)();
	char			*(STDCALL *lstrcpyA)();
	unsigned long	(STDCALL *lstrlenA)();
	int				(STDCALL *FlushInstructionCache)();
	int				(STDCALL *GetSystemInfo)();
	int				(STDCALL *GetExitCodeThread)();
	int				(STDCALL *InitializeCriticalSection)();
	int				(STDCALL *DeleteCriticalSection)();
	int				(STDCALL *EnterCriticalSection)();
	int				(STDCALL *LeaveCriticalSection)();
#endif /* !KNR_STYLE */
};
/* **************************** [^] STRUCTS [^] ***************************** */

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
#include "__PEB_LOADER__.H"
/******* """"""""""""""""""
 * void	*PEB_GET_MODULE_BASE(unsigned char *); 
 * void	*PEB_GET_EXPORT(const unsigned char *, const char *);
 */
/* **************************** [^] INCLUDES [^] **************************** */

/* **************************** [v] EXTERNS [v] ***************************** */
extern struct S_KERNEL32	KERNEL32;
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

#undef GLOBALCONSTRUCTOR__KERNEL32
#define GLOBALCONSTRUCTOR__KERNEL32 \
	do\
	{\
		KERNEL32.SELF_ADDRESS = PEB_GET_MODULE_BASE("KERNEL32.DLL");\
		KERNEL32.GetCurrentProcess = \
			PEB_GET_EXPORT(KERNEL32.SELF_ADDRESS, "GetCurrentProcess");\
		KERNEL32.FlushInstructionCache = \
			PEB_GET_EXPORT(KERNEL32.SELF_ADDRESS, "FlushInstructionCache");\
		KERNEL32.LoadLibraryA = \
			PEB_GET_EXPORT(KERNEL32.SELF_ADDRESS, "LoadLibraryA");\
		KERNEL32.LoadLibraryExA = \
			PEB_GET_EXPORT(KERNEL32.SELF_ADDRESS, "LoadLibraryExA");\
		KERNEL32.FreeLibrary = \
			PEB_GET_EXPORT(KERNEL32.SELF_ADDRESS, "FreeLibrary");\
		KERNEL32.GetProcAddress = \
			PEB_GET_EXPORT(KERNEL32.SELF_ADDRESS, "GetProcAddress");\
		KERNEL32.GetModuleHandleA = \
			PEB_GET_EXPORT(KERNEL32.SELF_ADDRESS, "GetModuleHandleA");\
		KERNEL32.GetCurrentProcessId = \
			PEB_GET_EXPORT(KERNEL32.SELF_ADDRESS, "GetCurrentProcessId");\
		KERNEL32.TerminateProcess = \
			PEB_GET_EXPORT(KERNEL32.SELF_ADDRESS, "TerminateProcess");\
		KERNEL32.ExitProcess = \
			PEB_GET_EXPORT(KERNEL32.SELF_ADDRESS, "ExitProcess");\
		KERNEL32.CreateThread = \
			PEB_GET_EXPORT(KERNEL32.SELF_ADDRESS, "CreateThread");\
		KERNEL32.GetCurrentThread = \
			PEB_GET_EXPORT(KERNEL32.SELF_ADDRESS, "GetCurrentThread");\
		KERNEL32.GetCurrentThreadId = \
			PEB_GET_EXPORT(KERNEL32.SELF_ADDRESS, "GetCurrentThreadId");\
		KERNEL32.ExitThread = \
			PEB_GET_EXPORT(KERNEL32.SELF_ADDRESS, "ExitThread");\
		KERNEL32.SuspendThread = \
			PEB_GET_EXPORT(KERNEL32.SELF_ADDRESS, "SuspendThread");\
		KERNEL32.ResumeThread = \
			PEB_GET_EXPORT(KERNEL32.SELF_ADDRESS, "ResumeThread");\
		KERNEL32.VirtualAlloc = \
			PEB_GET_EXPORT(KERNEL32.SELF_ADDRESS, "VirtualAlloc");\
		KERNEL32.VirtualFree = \
			PEB_GET_EXPORT(KERNEL32.SELF_ADDRESS, "VirtualFree");\
		KERNEL32.VirtualProtect = \
			PEB_GET_EXPORT(KERNEL32.SELF_ADDRESS, "VirtualProtect");\
		KERNEL32.RtlMoveMemory = \
			PEB_GET_EXPORT(KERNEL32.SELF_ADDRESS, "RtlMoveMemory");\
		KERNEL32.RtlCopyMemory = \
			PEB_GET_EXPORT(KERNEL32.SELF_ADDRESS, "RtlCopyMemory");\
		KERNEL32.RtlZeroMemory = \
			PEB_GET_EXPORT(KERNEL32.SELF_ADDRESS, "RtlZeroMemory");\
		KERNEL32.GetProcessHeap = \
			PEB_GET_EXPORT(KERNEL32.SELF_ADDRESS, "GetProcessHeap");\
		KERNEL32.HeapAlloc = \
			PEB_GET_EXPORT(KERNEL32.SELF_ADDRESS, "HeapAlloc");\
		KERNEL32.HeapFree = \
			PEB_GET_EXPORT(KERNEL32.SELF_ADDRESS, "HeapFree");\
		KERNEL32.CreateFileA = \
			PEB_GET_EXPORT(KERNEL32.SELF_ADDRESS, "CreateFileA");\
		KERNEL32.ReadFile = \
			PEB_GET_EXPORT(KERNEL32.SELF_ADDRESS, "ReadFile");\
		KERNEL32.WriteFile = \
			PEB_GET_EXPORT(KERNEL32.SELF_ADDRESS, "WriteFile");\
		KERNEL32.CloseHandle = \
			PEB_GET_EXPORT(KERNEL32.SELF_ADDRESS, "CloseHandle");\
		KERNEL32.GetFileSize = \
			PEB_GET_EXPORT(KERNEL32.SELF_ADDRESS, "GetFileSize");\
		KERNEL32.DeleteFileA = \
			PEB_GET_EXPORT(KERNEL32.SELF_ADDRESS, "DeleteFileA");\
		KERNEL32.GetStdHandle = \
			PEB_GET_EXPORT(KERNEL32.SELF_ADDRESS, "GetStdHandle");\
		KERNEL32.WriteConsoleA = \
			PEB_GET_EXPORT(KERNEL32.SELF_ADDRESS, "WriteConsoleA");\
		KERNEL32.WaitForSingleObject = \
			PEB_GET_EXPORT(KERNEL32.SELF_ADDRESS, "WaitForSingleObject");\
		KERNEL32.Sleep = PEB_GET_EXPORT(KERNEL32.SELF_ADDRESS, "Sleep");\
		KERNEL32.GetSystemTime = \
			PEB_GET_EXPORT(KERNEL32.SELF_ADDRESS, "GetSystemTime");\
		KERNEL32.GetLocalTime = \
			PEB_GET_EXPORT(KERNEL32.SELF_ADDRESS, "GetLocalTime");\
		KERNEL32.QueryPerformanceCounter = \
			PEB_GET_EXPORT(KERNEL32.SELF_ADDRESS, "QueryPerformanceCounter");\
		KERNEL32.QueryPerformanceFrequency = \
			PEB_GET_EXPORT(KERNEL32.SELF_ADDRESS, "QueryPerformanceFrequency");\
		KERNEL32.GetLastError = \
			PEB_GET_EXPORT(KERNEL32.SELF_ADDRESS, "GetLastError");\
		KERNEL32.SetLastError = \
			PEB_GET_EXPORT(KERNEL32.SELF_ADDRESS, "SetLastError");\
		KERNEL32.lstrcmpA = \
			PEB_GET_EXPORT(KERNEL32.SELF_ADDRESS, "lstrcmpA");\
		KERNEL32.lstrcpyA = \
			PEB_GET_EXPORT(KERNEL32.SELF_ADDRESS, "lstrcpyA");\
		KERNEL32.lstrlenA = \
			PEB_GET_EXPORT(KERNEL32.SELF_ADDRESS, "lstrlenA");\
		KERNEL32.GetSystemInfo = \
			PEB_GET_EXPORT(KERNEL32.SELF_ADDRESS, "GetSystemInfo");\
		KERNEL32.GetExitCodeThread = \
			PEB_GET_EXPORT(KERNEL32.SELF_ADDRESS, "GetExitCodeThread");\
		KERNEL32.InitializeCriticalSection = \
			PEB_GET_EXPORT(KERNEL32.SELF_ADDRESS, "InitializeCriticalSection");\
		KERNEL32.DeleteCriticalSection = \
			PEB_GET_EXPORT(KERNEL32.SELF_ADDRESS, "DeleteCriticalSection");\
		KERNEL32.EnterCriticalSection = \
			PEB_GET_EXPORT(KERNEL32.SELF_ADDRESS, "EnterCriticalSection");\
		KERNEL32.LeaveCriticalSection = \
			PEB_GET_EXPORT(KERNEL32.SELF_ADDRESS, "LeaveCriticalSection");\
	}\
	while (0);

/*   /\   #==========================================================#   /\   */
/*  //\\  |                  SETUP MEMBER CREATION                   |  //\\  */
/* '""""' #==========================================================# '""""' */

#ifdef LOCALMACRO__SETUP_LINKABLE
#undef LOCALMACRO__SETUP_LINKABLE

/* .,,,,. #==========================================================# .,,,,. */
/*  \\//  |                 LINKABLE MEMBER CREATION                 |  \\//  */
/*   \/   #==========================================================#   \/   */

#define LOCALLINKER__KERNEL32 \
	EXTERN_C_START\
	struct S_KERNEL32	KERNEL32;\
	EXTERN_C_END

/*   /\   #==========================================================#   /\   */
/*  //\\  |                 LINKABLE MEMBER CREATION                 |  //\\  */
/* '""""' #==========================================================# '""""' */

#ifdef CMT_SETUP

/* [v] %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% /!\ IMPORTANT /!\ */
LOCALLINKER__KERNEL32
/* [^] %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% /!\ IMPORTANT /!\ */

#else /* !CMT_SETUP */

/* [v] %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% /!\ IMPORTANT /!\ */
#undef GLOBALLINKER__KERNEL32
#define GLOBALLINKER__KERNEL32 LOCALLINKER__KERNEL32
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

/* ************************ [v] TI CGT CCS (POP) [v] ************************ */
#ifdef __TI_COMPILER_VERSION__
#pragma diag_pop /* TI CGT CCS COMPILER DIRECTIVES */
#endif /* __TI_COMPILER_VERSION__ */
/* ************************ [^] TI CGT CCS (POP) [^] ************************ */

#endif /* !KERNEL32_H */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
