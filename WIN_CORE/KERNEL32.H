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
# : License - GPL-3.0   :: Update - 2026/08/20 : #    ::::!!!1!!1!!!1!!!::     #
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

/* (SELF NOTE, IGNORE THIS PART)
typedef unsigned char       BYTE;
typedef unsigned char       UCHAR;
typedef char                CHAR;
typedef char                CCHAR;
typedef wchar_t             WCHAR;
typedef short               SHORT;
typedef unsigned short      USHORT;
typedef int                 INT;
typedef unsigned int        UINT;
typedef long                LONG;
typedef unsigned long       ULONG;
typedef float               FLOAT;
typedef int                 BOOL;
typedef unsigned short      WORD;
typedef unsigned long       DWORD;
typedef signed char         INT8;
typedef signed short        INT16;
typedef signed int          INT32;
typedef signed __int64      INT64;
typedef unsigned char       UINT8;
typedef unsigned short      UINT16;
typedef unsigned int        UINT32;
typedef unsigned __int64    UINT64;
typedef signed int          LONG32;
typedef __int64             LONG64;
typedef unsigned int        ULONG32;
typedef unsigned __int64    ULONG64;
typedef __int64             LONGLONG;
typedef unsigned __int64    ULONGLONG;
typedef unsigned __int64    DWORDLONG;
typedef unsigned __int64    DWORD64;
typedef unsigned __int64    QWORD;
#ifdef _WIN64
typedef __int64          INT_PTR;
typedef unsigned __int64 UINT_PTR;
typedef __int64          LONG_PTR;
typedef unsigned __int64 ULONG_PTR;
typedef int              HALF_PTR;
typedef unsigned int     UHALF_PTR;
#else
typedef int              INT_PTR;
typedef unsigned int     UINT_PTR;
typedef long             LONG_PTR;
typedef unsigned long    ULONG_PTR;
typedef short            HALF_PTR;
typedef unsigned short   UHALF_PTR;
#endif
typedef ULONG_PTR DWORD_PTR;
typedef ULONG_PTR SIZE_T;
typedef LONG_PTR  SSIZE_T;
*/

#ifndef KERNEL32_H
#define KERNEL32_H 202608 /* VERSION */

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
#include "../ATTRIBUTES/EXTERN_C.H"
/******* """"""""""""""""""""""""""
 * #define EXTERN_C_START
 * #define EXTERN_C_END
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
 * typedef	PTR;
 * typedef	LET;
 * typedef	VAR;
 */
#include "../ENVIRONMENTS/PLATFORM.H"
/******* """"""""""""""""""""""""""""
 * #define __PLATFORM_WINDOWS__
 */
/* **************************** [^] INCLUDES [^] **************************** */

/* **************************** [v] STRUCTS [v] ***************************** */
#include "STRUCTS/SYSTEM_INFO.H"
/******* """""""""""""""""""""""
 * struct S_SYSTEM_INFO;
 */
#include "STRUCTS/CRITICAL_SECTION.H"
/******* """"""""""""""""""""""""""""
 * struct S_CRITICAL_SECTION;
 */
#include "STRUCTS/CONSOLE_SCREEN_BUFFER_INFO.H"
/******* """"""""""""""""""""""""""""""""""""""
 * struct S_CONSOLE_SCREEN_BUFFER_INFO;
 */
#include "STRUCTS/COORD.H"
/******* """""""""""""""""
 * struct S_COORD;
 */
#include "STRUCTS/CONSOLE_CURSOR_INFO.H"
/******* """""""""""""""""""""""""""""""
 * struct S_CONSOLE_CURSOR_INFO;
 */

struct S_SYSTEM_INFO test1;
struct S_CRITICAL_SECTION test2;

EXTERN_C_START
struct S_KERNEL32
{
	PTR				SELF;
#ifndef KNR_STYLE /* STANDARD C */
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
	int				(STDCALL *FlushInstructionCache)(PTR, const PTR, LET);
	void			(STDCALL *GetSystemInfo)(struct S_SYSTEM_INFO *);
	int				(STDCALL *GetExitCodeThread)(PTR, unsigned long *);
	void			(STDCALL *InitializeCriticalSection)(
		struct S_CRITICAL_SECTION *
	);
	void			(STDCALL *DeleteCriticalSection)(PTR);
	void			(STDCALL *EnterCriticalSection)(PTR);
	void			(STDCALL *LeaveCriticalSection)(PTR);
	PTR				(STDCALL *GlobalAlloc)(unsigned long, LET);
	PTR				(STDCALL *GlobalLock)(PTR);
	int				(STDCALL *GlobalUnlock)(PTR);
	PTR				(STDCALL *GlobalReAlloc)(PTR, LET, unsigned long);
	PTR				(STDCALL *GlobalFree)(PTR);
	PTR				(STDCALL *CreateFileMappingA)(
		PTR, PTR, unsigned long, unsigned long,
		unsigned long, const char *
	);
	PTR				(STDCALL *MapViewOfFile)(
		PTR, unsigned long, unsigned long, unsigned long, LET
	);
	int				(STDCALL *UnmapViewOfFile)(PTR);
	int				(STDCALL *SetConsoleTextAttribute)(PTR, unsigned short);
	int				(STDCALL *GetConsoleScreenBufferInfo)(
		PTR, struct S_CONSOLE_SCREEN_BUFFER_INFO *
	);
	int				(STDCALL *SetConsoleCursorPosition)(PTR, struct S_COORD);
	int				(STDCALL *SetConsoleCursorInfo)(\
		PTR, struct S_CONSOLE_CURSOR_INFO *\
	);
	int				(STDCALL *GetConsoleCursorInfo)(\
		PTR, struct S_CONSOLE_CURSOR_INFO *\
	);
#else /* K&R */
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
	PTR				(STDCALL *GlobalAlloc)();
	PTR				(STDCALL *GlobalLock)();
	int				(STDCALL *GlobalUnlock)();
	PTR				(STDCALL *GlobalReAlloc)();
	PTR				(STDCALL *GlobalFree)();
	PTR				(STDCALL *CreateFileMappingA)();
	PTR				(STDCALL *MapViewOfFile)();
	int				(STDCALL *UnmapViewOfFile)();
	int				(STDCALL *SetConsoleTextAttribute)();
	int				(STDCALL *GetConsoleScreenBufferInfo)();
	int				(STDCALL *SetConsoleCursorPosition)();
	int				(STDCALL *SetConsoleCursorInfo)();
	int				(STDCALL *GetConsoleCursorInfo)();
#endif /* !KNR_STYLE */
};
EXTERN_C_END
/* **************************** [^] STRUCTS [^] ***************************** */

#ifdef __PLATFORM_WINDOWS__
/* **************************** [v] EXTERNS [v] ***************************** */
EXTERN_C_START
extern struct S_KERNEL32	KERNEL32;
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

/* **************************** [v] INCLUDES [v] **************************** */
#include "__PEB_LOADER__.H"
/******* """"""""""""""""""
 * void	*PEB_GET_MODULE_BASE(unsigned char *); 
 * void	*PEB_GET_EXPORT(const unsigned char *, const char *);
 */
/* **************************** [^] INCLUDES [^] **************************** */

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
		KERNEL32.SELF = PEB_GET_MODULE_BASE("KERNEL32.DLL");\
		KERNEL32.GetCurrentProcess = \
			PEB_GET_EXPORT(KERNEL32.SELF, "GetCurrentProcess");\
		KERNEL32.FlushInstructionCache = \
			PEB_GET_EXPORT(KERNEL32.SELF, "FlushInstructionCache");\
		KERNEL32.LoadLibraryA = PEB_GET_EXPORT(KERNEL32.SELF, "LoadLibraryA");\
		KERNEL32.LoadLibraryExA = \
			PEB_GET_EXPORT(KERNEL32.SELF, "LoadLibraryExA");\
		KERNEL32.FreeLibrary = PEB_GET_EXPORT(KERNEL32.SELF, "FreeLibrary");\
		KERNEL32.GetProcAddress = \
			PEB_GET_EXPORT(KERNEL32.SELF, "GetProcAddress");\
		KERNEL32.GetModuleHandleA = \
			PEB_GET_EXPORT(KERNEL32.SELF, "GetModuleHandleA");\
		KERNEL32.GetCurrentProcessId = \
			PEB_GET_EXPORT(KERNEL32.SELF, "GetCurrentProcessId");\
		KERNEL32.TerminateProcess = \
			PEB_GET_EXPORT(KERNEL32.SELF, "TerminateProcess");\
		KERNEL32.ExitProcess = PEB_GET_EXPORT(KERNEL32.SELF, "ExitProcess");\
		KERNEL32.CreateThread = PEB_GET_EXPORT(KERNEL32.SELF, "CreateThread");\
		KERNEL32.GetCurrentThread = \
			PEB_GET_EXPORT(KERNEL32.SELF, "GetCurrentThread");\
		KERNEL32.GetCurrentThreadId = \
			PEB_GET_EXPORT(KERNEL32.SELF, "GetCurrentThreadId");\
		KERNEL32.ExitThread = PEB_GET_EXPORT(KERNEL32.SELF, "ExitThread");\
		KERNEL32.SuspendThread = \
			PEB_GET_EXPORT(KERNEL32.SELF, "SuspendThread");\
		KERNEL32.ResumeThread = PEB_GET_EXPORT(KERNEL32.SELF, "ResumeThread");\
		KERNEL32.VirtualAlloc = PEB_GET_EXPORT(KERNEL32.SELF, "VirtualAlloc");\
		KERNEL32.VirtualFree = PEB_GET_EXPORT(KERNEL32.SELF, "VirtualFree");\
		KERNEL32.VirtualProtect = \
			PEB_GET_EXPORT(KERNEL32.SELF, "VirtualProtect");\
		KERNEL32.RtlMoveMemory = \
			PEB_GET_EXPORT(KERNEL32.SELF, "RtlMoveMemory");\
		KERNEL32.RtlCopyMemory = \
			PEB_GET_EXPORT(KERNEL32.SELF, "RtlCopyMemory");\
		KERNEL32.RtlZeroMemory = \
			PEB_GET_EXPORT(KERNEL32.SELF, "RtlZeroMemory");\
		KERNEL32.GetProcessHeap = \
			PEB_GET_EXPORT(KERNEL32.SELF, "GetProcessHeap");\
		KERNEL32.HeapAlloc = PEB_GET_EXPORT(KERNEL32.SELF, "HeapAlloc");\
		KERNEL32.HeapFree = PEB_GET_EXPORT(KERNEL32.SELF, "HeapFree");\
		KERNEL32.CreateFileA = PEB_GET_EXPORT(KERNEL32.SELF, "CreateFileA");\
		KERNEL32.ReadFile = PEB_GET_EXPORT(KERNEL32.SELF, "ReadFile");\
		KERNEL32.WriteFile = PEB_GET_EXPORT(KERNEL32.SELF, "WriteFile");\
		KERNEL32.CloseHandle = PEB_GET_EXPORT(KERNEL32.SELF, "CloseHandle");\
		KERNEL32.GetFileSize = PEB_GET_EXPORT(KERNEL32.SELF, "GetFileSize");\
		KERNEL32.DeleteFileA = PEB_GET_EXPORT(KERNEL32.SELF, "DeleteFileA");\
		KERNEL32.GetStdHandle = PEB_GET_EXPORT(KERNEL32.SELF, "GetStdHandle");\
		KERNEL32.WriteConsoleA = \
			PEB_GET_EXPORT(KERNEL32.SELF, "WriteConsoleA");\
		KERNEL32.WaitForSingleObject = \
			PEB_GET_EXPORT(KERNEL32.SELF, "WaitForSingleObject");\
		KERNEL32.Sleep = PEB_GET_EXPORT(KERNEL32.SELF, "Sleep");\
		KERNEL32.GetSystemTime = \
			PEB_GET_EXPORT(KERNEL32.SELF, "GetSystemTime");\
		KERNEL32.GetLocalTime = PEB_GET_EXPORT(KERNEL32.SELF, "GetLocalTime");\
		KERNEL32.QueryPerformanceCounter = \
			PEB_GET_EXPORT(KERNEL32.SELF, "QueryPerformanceCounter");\
		KERNEL32.QueryPerformanceFrequency = \
			PEB_GET_EXPORT(KERNEL32.SELF, "QueryPerformanceFrequency");\
		KERNEL32.GetLastError = PEB_GET_EXPORT(KERNEL32.SELF, "GetLastError");\
		KERNEL32.SetLastError = PEB_GET_EXPORT(KERNEL32.SELF, "SetLastError");\
		KERNEL32.lstrcmpA = PEB_GET_EXPORT(KERNEL32.SELF, "lstrcmpA");\
		KERNEL32.lstrcpyA = PEB_GET_EXPORT(KERNEL32.SELF, "lstrcpyA");\
		KERNEL32.lstrlenA = PEB_GET_EXPORT(KERNEL32.SELF, "lstrlenA");\
		KERNEL32.GetSystemInfo = \
			PEB_GET_EXPORT(KERNEL32.SELF, "GetSystemInfo");\
		KERNEL32.GetExitCodeThread = \
			PEB_GET_EXPORT(KERNEL32.SELF, "GetExitCodeThread");\
		KERNEL32.InitializeCriticalSection = \
			PEB_GET_EXPORT(KERNEL32.SELF, "InitializeCriticalSection");\
		KERNEL32.DeleteCriticalSection = \
			PEB_GET_EXPORT(KERNEL32.SELF, "DeleteCriticalSection");\
		KERNEL32.EnterCriticalSection = \
			PEB_GET_EXPORT(KERNEL32.SELF, "EnterCriticalSection");\
		KERNEL32.LeaveCriticalSection = \
			PEB_GET_EXPORT(KERNEL32.SELF, "LeaveCriticalSection");\
		KERNEL32.GlobalAlloc = PEB_GET_EXPORT(KERNEL32.SELF, "GlobalAlloc");\
		KERNEL32.GlobalLock = PEB_GET_EXPORT(KERNEL32.SELF, "GlobalLock");\
		KERNEL32.GlobalUnlock = PEB_GET_EXPORT(KERNEL32.SELF, "GlobalUnlock");\
		KERNEL32.GlobalReAlloc = \
			PEB_GET_EXPORT(KERNEL32.SELF, "GlobalReAlloc");\
		KERNEL32.GlobalFree = PEB_GET_EXPORT(KERNEL32.SELF, "GlobalFree");\
		KERNEL32.CreateFileMappingA = \
			PEB_GET_EXPORT(KERNEL32.SELF, "CreateFileMappingA");\
		KERNEL32.MapViewOfFile = \
			PEB_GET_EXPORT(KERNEL32.SELF, "MapViewOfFile");\
		KERNEL32.UnmapViewOfFile = \
			PEB_GET_EXPORT(KERNEL32.SELF, "UnmapViewOfFile");\
		KERNEL32.SetConsoleTextAttribute = \
			PEB_GET_EXPORT(KERNEL32.SELF, "SetConsoleTextAttribute");\
		KERNEL32.GetConsoleScreenBufferInfo = \
			PEB_GET_EXPORT(KERNEL32.SELF, "GetConsoleScreenBufferInfo");\
		KERNEL32.SetConsoleCursorPosition = \
			PEB_GET_EXPORT(KERNEL32.SELF, "SetConsoleCursorPosition");\
		KERNEL32.SetConsoleCursorInfo = \
			PEB_GET_EXPORT(KERNEL32.SELF, "SetConsoleCursorInfo");\
		KERNEL32.GetConsoleCursorInfo = \
			PEB_GET_EXPORT(KERNEL32.SELF, "GetConsoleCursorInfo");\
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
EXTERN_C_START
LOCALLINKER__KERNEL32
EXTERN_C_END
/* [^] %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% /!\ IMPORTANT /!\ */

#include "../CMT/CONSTRUCTOR.INL"
#else /* !CMT_SETUP */

/* [v] %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% /!\ IMPORTANT /!\ */
#undef GLOBALLINKER__KERNEL32
#define GLOBALLINKER__KERNEL32 LOCALLINKER__KERNEL32
/* [^] %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% /!\ IMPORTANT /!\ */

#include "../CMT/LINKER.INL"
#endif /* CMT_SETUP */
#else /* !LOCALMACRO__SETUP_LINKABLE */
#include "../CMT/CONSTRUCTOR.INL"
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
#endif /* !__PLATFORM_WINDOWS__ */

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
