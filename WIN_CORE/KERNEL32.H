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
# : License - Apache2.0 :: Update - 2026/10/07 : #    ::::!!!1!!1!!!1!!!::     #
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
typedef unsigned short      WCHAR;
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
typedef char                *LPSTR;
typedef const char          *LPCSTR;
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
#define KERNEL32_H 202610 /* VERSION */

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

/* **************************** [v] TYPEDEFS [v] **************************** */
#ifndef KNR_STYLE /* STANDARD C */
#define T_KERNEL32__LoadLibraryA(NAME) PTR (STDCALL *NAME)(const char *)
#define T_KERNEL32__LoadLibraryExA(NAME) \
	PTR (STDCALL *NAME)(\
		const char *, PTR, unsigned long\
	)
#define T_KERNEL32__FreeLibrary(NAME) int (STDCALL *NAME)(PTR)
#define T_KERNEL32__GetProcAddress(NAME) PTR (STDCALL *NAME)(PTR, const char *)
#define T_KERNEL32__GetModuleHandleA(NAME) PTR (STDCALL *NAME)(const char *)
#define T_KERNEL32__GetCurrentProcess(NAME) PTR (STDCALL *NAME)(void)
#define T_KERNEL32__GetCurrentProcessId(NAME) \
	unsigned long (STDCALL *NAME)(void)
#define T_KERNEL32__TerminateProcess(NAME) \
	int (STDCALL *NAME)(PTR, unsigned int)
#define T_KERNEL32__ExitProcess(NAME) void (STDCALL *NAME)(unsigned int)
#define T_KERNEL32__CreateThread(NAME) PTR (STDCALL *NAME)(\
		PTR, \
		LET, \
		unsigned long (STDCALL *NAME)(PTR), \
		PTR, \
		unsigned long, \
		unsigned long *\
	)
#define T_KERNEL32__GetCurrentThread(NAME) PTR (STDCALL *NAME)(void)
#define T_KERNEL32__GetCurrentThreadId(NAME) unsigned long (STDCALL *NAME)(void)
#define T_KERNEL32__ExitThread(NAME) void (STDCALL *NAME)(unsigned long)
#define T_KERNEL32__SuspendThread(NAME) unsigned long (STDCALL *NAME)(PTR)
#define T_KERNEL32__ResumeThread(NAME) unsigned long (STDCALL *NAME)(PTR)
#define T_KERNEL32__VirtualAlloc(NAME) PTR (STDCALL *NAME)(\
		PTR, \
		LET, \
		unsigned long, \
		unsigned long\
	)
#define T_KERNEL32__VirtualFree(NAME) int (STDCALL *NAME)(\
		PTR, \
		LET, \
		unsigned long\
	)
#define T_KERNEL32__VirtualProtect(NAME) int (STDCALL *NAME)(\
		PTR, \
		LET, \
		unsigned long, \
		unsigned long *\
	)
#define T_KERNEL32__RtlMoveMemory(NAME) void (STDCALL *NAME)(\
		PTR, \
		const PTR, \
		LET\
	)
#define T_KERNEL32__RtlCopyMemory(NAME) void (STDCALL *NAME)(\
		PTR, \
		const PTR, \
		LET\
	)
#define T_KERNEL32__RtlZeroMemory(NAME) void (STDCALL *NAME)(PTR, LET)
#define T_KERNEL32__GetProcessHeap(NAME) PTR (STDCALL *NAME)(void)
#define T_KERNEL32__HeapAlloc(NAME) PTR (STDCALL *NAME)(\
		PTR, \
		unsigned long, \
		LET\
	)
#define T_KERNEL32__HeapFree(NAME) int (STDCALL *NAME)(\
		PTR, \
		unsigned long, \
		PTR\
	)
#define T_KERNEL32__CreateFileA(NAME) PTR (STDCALL *NAME)(\
		const char *, \
		unsigned long, \
		unsigned long, \
		PTR, \
		unsigned long, \
		unsigned long, \
		PTR\
	)
#define T_KERNEL32__ReadFile(NAME) int (STDCALL *NAME)(\
		PTR, \
		PTR, \
		unsigned long, \
		unsigned long *, \
		PTR\
	)
#define T_KERNEL32__WriteFile(NAME) int (STDCALL *NAME)(\
		PTR, \
		const PTR, \
		unsigned long, \
		unsigned long *, \
		PTR\
	)
#define T_KERNEL32__CloseHandle(NAME) int (STDCALL *NAME)(PTR)
#define T_KERNEL32__GetFileSize(NAME) unsigned long (STDCALL *NAME)(\
		PTR, \
		unsigned long *\
	)
#define T_KERNEL32__DeleteFileA(NAME) int (STDCALL *NAME)(const char*)
#define T_KERNEL32__GetStdHandle(NAME) PTR (STDCALL *NAME)(unsigned long)
#define T_KERNEL32__WriteConsoleA(NAME) int (STDCALL *NAME)(\
		PTR, \
		const PTR, \
		unsigned long, \
		unsigned long *, \
		PTR\
	)
#define T_KERNEL32__WaitForSingleObject(NAME) unsigned long (STDCALL *NAME)(\
		PTR, \
		unsigned long\
	)
#define T_KERNEL32__Sleep(NAME) void (STDCALL *NAME)(unsigned long)
#define T_KERNEL32__GetSystemTime(NAME) void (STDCALL *NAME)(PTR)
#define T_KERNEL32__GetLocalTime(NAME) void (STDCALL *NAME)(PTR)
#define T_KERNEL32__QueryPerformanceCounter(NAME) \
	int (STDCALL *NAME)(long long *)
#define T_KERNEL32__QueryPerformanceFrequency(NAME) \
	int (STDCALL *NAME)(long long *)
#define T_KERNEL32__GetLastError(NAME) unsigned long (STDCALL *NAME)(void)
#define T_KERNEL32__SetLastError(NAME) void (STDCALL *NAME)(unsigned long)
#define T_KERNEL32__lstrcmpA(NAME) int (STDCALL *NAME)(\
		const char *, \
		const char *\
	)
#define T_KERNEL32__lstrcpyA(NAME) char *(STDCALL *NAME)(char *, const char *)
#define T_KERNEL32__lstrlenA(NAME) unsigned long (STDCALL *NAME)(const char *)
#define T_KERNEL32__FlushInstructionCache(NAME) int (STDCALL *NAME)(\
		PTR, \
		const PTR, \
		LET\
	)
#define T_KERNEL32__GetSystemInfo(NAME) \
	void (STDCALL *NAME)(struct S_SYSTEM_INFO *)
#define T_KERNEL32__GetExitCodeThread(NAME) \
	int (STDCALL *NAME)(PTR, unsigned long *)
#define T_KERNEL32__InitializeCriticalSection(NAME) void (STDCALL *NAME)(\
		struct S_CRITICAL_SECTION *\
	)
#define T_KERNEL32__DeleteCriticalSection(NAME) void (STDCALL *NAME)(PTR)
#define T_KERNEL32__EnterCriticalSection(NAME) void (STDCALL *NAME)(PTR)
#define T_KERNEL32__LeaveCriticalSection(NAME) void (STDCALL *NAME)(PTR)
#define T_KERNEL32__GlobalAlloc(NAME) PTR (STDCALL *NAME)(unsigned long, LET)
#define T_KERNEL32__GlobalLock(NAME) PTR (STDCALL *NAME)(PTR)
#define T_KERNEL32__GlobalUnlock(NAME) int (STDCALL *NAME)(PTR)
#define T_KERNEL32__GlobalReAlloc(NAME) PTR (STDCALL *NAME)(\
		PTR, \
		LET, \
		unsigned long\
	)
#define T_KERNEL32__GlobalFree(NAME) PTR (STDCALL *NAME)(PTR)
#define T_KERNEL32__CreateFileMappingA(NAME) PTR (STDCALL *NAME)(\
		PTR, \
		PTR, \
		unsigned long, \
		unsigned long, \
		unsigned long, \
		const char *\
	)
#define T_KERNEL32__MapViewOfFile(NAME) PTR (STDCALL *NAME)(\
		PTR, \
		unsigned long, \
		unsigned long, \
		unsigned long, \
		LET\
	)
#define T_KERNEL32__UnmapViewOfFile(NAME) int (STDCALL *NAME)(PTR)
#define T_KERNEL32__SetConsoleTextAttribute(NAME) int (STDCALL *NAME)(\
		PTR, \
		unsigned short\
	)
#define T_KERNEL32__GetConsoleScreenBufferInfo(NAME) int (STDCALL *NAME)(\
		PTR, \
		struct S_CONSOLE_SCREEN_BUFFER_INFO *\
	)
#define T_KERNEL32__SetConsoleCursorPosition(NAME) int (STDCALL *NAME)(\
		PTR, \
		struct S_COORD\
	)
#define T_KERNEL32__SetConsoleCursorInfo(NAME) int (STDCALL *NAME)(\
		PTR, \
		struct S_CONSOLE_CURSOR_INFO *\
	)
#define T_KERNEL32__GetConsoleCursorInfo(NAME) int (STDCALL *NAME)(\
		PTR, \
		struct S_CONSOLE_CURSOR_INFO *\
	)
#define T_KERNEL32__GetConsoleWindow(NAME) PTR (STDCALL *NAME)(void)
#define T_KERNEL32__SetConsoleScreenBufferSize(NAME) int (STDCALL *NAME)(\
		PTR, \
		struct S_COORD\
	)
#define T_KERNEL32__SetConsoleWindowInfo(NAME) int (STDCALL *NAME)(\
		PTR, \
		int, \
		const struct S_SMALL_RECT *\
	)
#define T_KERNEL32__GetLargestConsoleWindowSize(NAME) \
	struct S_COORD (STDCALL *NAME)(PTR)
#define T_KERNEL32__FillConsoleOutputCharacterA(NAME) int (STDCALL *NAME)(\
		PTR, \
		char, \
		unsigned long, \
		struct S_COORD, \
		unsigned long *\
	)
#define T_KERNEL32__FillConsoleOutputAttribute(NAME) int (STDCALL *NAME)(\
		PTR, \
		unsigned short, \
		unsigned long, \
		struct S_COORD, \
		unsigned long *\
	)
#define T_KERNEL32__WriteConsoleOutputCharacterA(NAME) int (STDCALL *NAME)(\
		PTR, \
		const char *, \
		unsigned long, \
		struct S_COORD, \
		unsigned long *\
	)
#define T_KERNEL32__WriteConsoleOutputAttribute(NAME) int (STDCALL *NAME)(\
		PTR, \
		const unsigned short *, \
		unsigned long, \
		struct S_COORD, \
		unsigned long *\
	)
#define T_KERNEL32__ReadConsoleOutputCharacterA(NAME) int (STDCALL *NAME)(\
		PTR, \
		char *, \
		unsigned long, \
		struct S_COORD, \
		unsigned long *\
	)
#define T_KERNEL32__ReadConsoleOutputAttribute(NAME) int (STDCALL *NAME)(\
		PTR, \
		unsigned short *, \
		unsigned long, \
		struct S_COORD, \
		unsigned long *\
	)
#define T_KERNEL32__ReadConsoleInputA(NAME) int (STDCALL *NAME)(\
		PTR, \
		struct S_INPUT_RECORD *, \
		unsigned long, \
		unsigned long *\
	)
#define T_KERNEL32__GetConsoleMode(NAME) int (STDCALL *NAME)(\
		PTR, \
		unsigned long *\
	)
#define T_KERNEL32__SetConsoleMode(NAME) int (STDCALL *NAME)(\
		PTR, \
		unsigned long\
	)
#define T_KERNEL32__HeapReAlloc(NAME) PTR (STDCALL *NAME)(\
		PTR, \
		unsigned long, \
		PTR, \
		LET\
	)
#define T_KERNEL32__SetConsoleTitleA(NAME) int (STDCALL *NAME)(const char *)
#define T_KERNEL32__GetEnvironmentVariableA(NAME) \
	unsigned long (STDCALL *NAME)(\
		const char *, \
		char *, \
		unsigned long\
	)
#else /* K&R */
#define T_KERNEL32__LoadLibraryA(NAME) PTR (STDCALL *NAME)()
#define T_KERNEL32__LoadLibraryExA(NAME) PTR (STDCALL *NAME)()
#define T_KERNEL32__FreeLibrary(NAME) int (STDCALL *NAME)()
#define T_KERNEL32__GetProcAddress(NAME) PTR (STDCALL *NAME)()
#define T_KERNEL32__GetModuleHandleA(NAME) PTR (STDCALL *NAME)()
#define T_KERNEL32__GetCurrentProcess(NAME) PTR (STDCALL *NAME)()
#define T_KERNEL32__GetCurrentProcessId(NAME) unsigned long (STDCALL *NAME)()
#define T_KERNEL32__TerminateProcess(NAME) int (STDCALL *NAME)()
#define T_KERNEL32__ExitProcess(NAME) int (STDCALL *NAME)()
#define T_KERNEL32__CreateThread(NAME) PTR (STDCALL *NAME)()
#define T_KERNEL32__GetCurrentThread(NAME) PTR (STDCALL *NAME)()
#define T_KERNEL32__GetCurrentThreadId(NAME) unsigned long (STDCALL *NAME)()
#define T_KERNEL32__ExitThread(NAME) int (STDCALL *NAME)()
#define T_KERNEL32__SuspendThread(NAME) unsigned long (STDCALL *NAME)()
#define T_KERNEL32__ResumeThread(NAME) unsigned long (STDCALL *NAME)()
#define T_KERNEL32__VirtualAlloc(NAME) PTR (STDCALL *NAME)()
#define T_KERNEL32__VirtualFree(NAME) int (STDCALL *NAME)()
#define T_KERNEL32__VirtualProtect(NAME) int (STDCALL *NAME)()
#define T_KERNEL32__RtlMoveMemory(NAME) int (STDCALL *NAME)()
#define T_KERNEL32__RtlCopyMemory(NAME) int (STDCALL *NAME)()
#define T_KERNEL32__RtlZeroMemory(NAME) int (STDCALL *NAME)()
#define T_KERNEL32__GetProcessHeap(NAME) PTR (STDCALL *NAME)()
#define T_KERNEL32__HeapAlloc(NAME) PTR (STDCALL *NAME)()
#define T_KERNEL32__HeapFree(NAME) int (STDCALL *NAME)()
#define T_KERNEL32__CreateFileA(NAME) PTR (STDCALL *NAME)()
#define T_KERNEL32__ReadFile(NAME) int (STDCALL *NAME)()
#define T_KERNEL32__WriteFile(NAME) int (STDCALL *NAME)()
#define T_KERNEL32__CloseHandle(NAME) int (STDCALL *NAME)()
#define T_KERNEL32__GetFileSize(NAME) unsigned long (STDCALL *NAME)()
#define T_KERNEL32__DeleteFileA(NAME) int (STDCALL *NAME)()
#define T_KERNEL32__GetStdHandle(NAME) PTR (STDCALL *NAME)()
#define T_KERNEL32__WriteConsoleA(NAME) int (STDCALL *NAME)()
#define T_KERNEL32__WaitForSingleObject(NAME) unsigned long (STDCALL *NAME)()
#define T_KERNEL32__Sleep(NAME) int (STDCALL *NAME)()
#define T_KERNEL32__GetSystemTime(NAME) int (STDCALL *NAME)()
#define T_KERNEL32__GetLocalTime(NAME) int (STDCALL *NAME)()
#define T_KERNEL32__QueryPerformanceCounter(NAME) int (STDCALL *NAME)()
#define T_KERNEL32__QueryPerformanceFrequency(NAME) int (STDCALL *NAME)()
#define T_KERNEL32__GetLastError(NAME) unsigned long (STDCALL *NAME)()
#define T_KERNEL32__SetLastError(NAME) int (STDCALL *NAME)()
#define T_KERNEL32__lstrcmpA(NAME) int (STDCALL *NAME)()
#define T_KERNEL32__lstrcpyA(NAME) char *(STDCALL *NAME)()
#define T_KERNEL32__lstrlenA(NAME) unsigned long (STDCALL *NAME)()
#define T_KERNEL32__FlushInstructionCache(NAME) int (STDCALL *NAME)()
#define T_KERNEL32__GetSystemInfo(NAME) int (STDCALL *NAME)()
#define T_KERNEL32__GetExitCodeThread(NAME) int (STDCALL *NAME)()
#define T_KERNEL32__InitializeCriticalSection(NAME) int (STDCALL *NAME)()
#define T_KERNEL32__DeleteCriticalSection(NAME) int (STDCALL *NAME)()
#define T_KERNEL32__EnterCriticalSection(NAME) int (STDCALL *NAME)()
#define T_KERNEL32__LeaveCriticalSection(NAME) int (STDCALL *NAME)()
#define T_KERNEL32__GlobalAlloc(NAME) PTR (STDCALL *NAME)()
#define T_KERNEL32__GlobalLock(NAME) PTR (STDCALL *NAME)()
#define T_KERNEL32__GlobalUnlock(NAME) int (STDCALL *NAME)()
#define T_KERNEL32__GlobalReAlloc(NAME) PTR (STDCALL *NAME)()
#define T_KERNEL32__GlobalFree(NAME) PTR (STDCALL *NAME)()
#define T_KERNEL32__CreateFileMappingA(NAME) PTR (STDCALL *NAME)()
#define T_KERNEL32__MapViewOfFile(NAME) PTR (STDCALL *NAME)()
#define T_KERNEL32__UnmapViewOfFile(NAME) int (STDCALL *NAME)()
#define T_KERNEL32__SetConsoleTextAttribute(NAME) int (STDCALL *NAME)()
#define T_KERNEL32__GetConsoleScreenBufferInfo(NAME) int (STDCALL *NAME)()
#define T_KERNEL32__SetConsoleCursorPosition(NAME) int (STDCALL *NAME)()
#define T_KERNEL32__SetConsoleCursorInfo(NAME) int (STDCALL *NAME)()
#define T_KERNEL32__GetConsoleCursorInfo(NAME) int (STDCALL *NAME)()
#define T_KERNEL32__GetConsoleWindow(NAME) PTR (STDCALL *NAME)()
#define T_KERNEL32__SetConsoleScreenBufferSize(NAME) int (STDCALL *NAME)()
#define T_KERNEL32__SetConsoleWindowInfo(NAME) int (STDCALL *NAME)()
#define T_KERNEL32__GetLargestConsoleWindowSize(NAME) \
	struct S_COORD (STDCALL *NAME)()
#define T_KERNEL32__FillConsoleOutputCharacterA(NAME) int (STDCALL *NAME)()
#define T_KERNEL32__FillConsoleOutputAttribute(NAME) int (STDCALL *NAME)()
#define T_KERNEL32__WriteConsoleOutputCharacterA(NAME) int (STDCALL *NAME)()
#define T_KERNEL32__WriteConsoleOutputAttribute(NAME) int (STDCALL *NAME)()
#define T_KERNEL32__ReadConsoleOutputCharacterA(NAME) int (STDCALL *NAME)()
#define T_KERNEL32__ReadConsoleOutputAttribute(NAME) int (STDCALL *NAME)()
#define T_KERNEL32__ReadConsoleInputA(NAME) int (STDCALL *NAME)()
#define T_KERNEL32__GetConsoleMode(NAME) int (STDCALL *NAME)()
#define T_KERNEL32__SetConsoleMode(NAME) int (STDCALL *NAME)()
#define T_KERNEL32__HeapReAlloc(NAME) PTR (STDCALL *NAME)()
#define T_KERNEL32__SetConsoleTitleA(NAME) int (STDCALL *NAME)()
#define T_KERNEL32__GetEnvironmentVariableA(NAME) \
	unsigned long (STDCALL *NAME)()
#endif /* !KNR_STYLE */
/* **************************** [^] TYPEDEFS [^] **************************** */

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
#include "STRUCTS/INPUT_RECORD.H"
/******* """"""""""""""""""""""""
 * struct S_INPUT_RECORD;
 */

struct S_SYSTEM_INFO test1;
struct S_CRITICAL_SECTION test2;

EXTERN_C_START
struct S_KERNEL32
{
	PTR	SELF;
	T_KERNEL32__LoadLibraryA(LoadLibraryA);
	T_KERNEL32__LoadLibraryExA(LoadLibraryExA);
	T_KERNEL32__FreeLibrary(FreeLibrary);
	T_KERNEL32__GetProcAddress(GetProcAddress);
	T_KERNEL32__GetModuleHandleA(GetModuleHandleA);
	T_KERNEL32__GetCurrentProcess(GetCurrentProcess);
	T_KERNEL32__GetCurrentProcessId(GetCurrentProcessId);
	T_KERNEL32__TerminateProcess(TerminateProcess);
	T_KERNEL32__ExitProcess(ExitProcess);
	T_KERNEL32__CreateThread(CreateThread);
	T_KERNEL32__GetCurrentThread(GetCurrentThread);
	T_KERNEL32__GetCurrentThreadId(GetCurrentThreadId);
	T_KERNEL32__ExitThread(ExitThread);
	T_KERNEL32__SuspendThread(SuspendThread);
	T_KERNEL32__ResumeThread(ResumeThread);
	T_KERNEL32__VirtualAlloc(VirtualAlloc);
	T_KERNEL32__VirtualFree(VirtualFree);
	T_KERNEL32__VirtualProtect(VirtualProtect);
	T_KERNEL32__RtlMoveMemory(RtlMoveMemory);
	T_KERNEL32__RtlCopyMemory(RtlCopyMemory);
	T_KERNEL32__RtlZeroMemory(RtlZeroMemory);
	T_KERNEL32__GetProcessHeap(GetProcessHeap);
	T_KERNEL32__HeapAlloc(HeapAlloc);
	T_KERNEL32__HeapFree(HeapFree);
	T_KERNEL32__CreateFileA(CreateFileA);
	T_KERNEL32__ReadFile(ReadFile);
	T_KERNEL32__WriteFile(WriteFile);
	T_KERNEL32__CloseHandle(CloseHandle);
	T_KERNEL32__GetFileSize(GetFileSize);
	T_KERNEL32__DeleteFileA(DeleteFileA);
	T_KERNEL32__GetStdHandle(GetStdHandle);
	T_KERNEL32__WriteConsoleA(WriteConsoleA);
	T_KERNEL32__WaitForSingleObject(WaitForSingleObject);
	T_KERNEL32__Sleep(Sleep);
	T_KERNEL32__GetSystemTime(GetSystemTime);
	T_KERNEL32__GetLocalTime(GetLocalTime);
	T_KERNEL32__QueryPerformanceCounter(QueryPerformanceCounter);
	T_KERNEL32__QueryPerformanceFrequency(QueryPerformanceFrequency);
	T_KERNEL32__GetLastError(GetLastError);
	T_KERNEL32__SetLastError(SetLastError);
	T_KERNEL32__lstrcmpA(lstrcmpA);
	T_KERNEL32__lstrcpyA(lstrcpyA);
	T_KERNEL32__lstrlenA(lstrlenA);
	T_KERNEL32__FlushInstructionCache(FlushInstructionCache);
	T_KERNEL32__GetSystemInfo(GetSystemInfo);
	T_KERNEL32__GetExitCodeThread(GetExitCodeThread);
	T_KERNEL32__InitializeCriticalSection(InitializeCriticalSection);
	T_KERNEL32__DeleteCriticalSection(DeleteCriticalSection);
	T_KERNEL32__EnterCriticalSection(EnterCriticalSection);
	T_KERNEL32__LeaveCriticalSection(LeaveCriticalSection);
	T_KERNEL32__GlobalAlloc(GlobalAlloc);
	T_KERNEL32__GlobalLock(GlobalLock);
	T_KERNEL32__GlobalUnlock(GlobalUnlock);
	T_KERNEL32__GlobalReAlloc(GlobalReAlloc);
	T_KERNEL32__GlobalFree(GlobalFree);
	T_KERNEL32__CreateFileMappingA(CreateFileMappingA);
	T_KERNEL32__MapViewOfFile(MapViewOfFile);
	T_KERNEL32__UnmapViewOfFile(UnmapViewOfFile);
	T_KERNEL32__SetConsoleTextAttribute(SetConsoleTextAttribute);
	T_KERNEL32__GetConsoleScreenBufferInfo(GetConsoleScreenBufferInfo);
	T_KERNEL32__SetConsoleCursorPosition(SetConsoleCursorPosition);
	T_KERNEL32__SetConsoleCursorInfo(SetConsoleCursorInfo);
	T_KERNEL32__GetConsoleCursorInfo(GetConsoleCursorInfo);
	T_KERNEL32__GetConsoleWindow(GetConsoleWindow);
	T_KERNEL32__SetConsoleScreenBufferSize(SetConsoleScreenBufferSize);
	T_KERNEL32__SetConsoleWindowInfo(SetConsoleWindowInfo);
	T_KERNEL32__GetLargestConsoleWindowSize(GetLargestConsoleWindowSize);
	T_KERNEL32__FillConsoleOutputCharacterA(FillConsoleOutputCharacterA);
	T_KERNEL32__FillConsoleOutputAttribute(FillConsoleOutputAttribute);
	T_KERNEL32__WriteConsoleOutputCharacterA(WriteConsoleOutputCharacterA);
	T_KERNEL32__WriteConsoleOutputAttribute(WriteConsoleOutputAttribute);
	T_KERNEL32__ReadConsoleOutputCharacterA(ReadConsoleOutputCharacterA);
	T_KERNEL32__ReadConsoleOutputAttribute(ReadConsoleOutputAttribute);
	T_KERNEL32__ReadConsoleInputA(ReadConsoleInputA);
	T_KERNEL32__GetConsoleMode(GetConsoleMode);
	T_KERNEL32__SetConsoleMode(SetConsoleMode);
	T_KERNEL32__HeapReAlloc(HeapReAlloc);
	T_KERNEL32__SetConsoleTitleA(SetConsoleTitleA);
	T_KERNEL32__GetEnvironmentVariableA(GetEnvironmentVariableA);
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

#define LOCALMACRO__KERNEL32__EXPORT(NAME) \
	PEB_GET_EXPORT((const unsigned char *)KERNEL32.SELF, NAME)

#undef GLOBALCONSTRUCTOR__KERNEL32
#define GLOBALCONSTRUCTOR__KERNEL32 \
	do\
	{\
		KERNEL32.SELF = PEB_GET_MODULE_BASE("KERNEL32.DLL");\
		KERNEL32.GetCurrentProcess = (T_KERNEL32__GetCurrentProcess())\
			LOCALMACRO__KERNEL32__EXPORT("GetCurrentProcess");\
		KERNEL32.FlushInstructionCache = (T_KERNEL32__FlushInstructionCache())\
			LOCALMACRO__KERNEL32__EXPORT("FlushInstructionCache");\
		KERNEL32.LoadLibraryA = (T_KERNEL32__LoadLibraryA())\
			LOCALMACRO__KERNEL32__EXPORT("LoadLibraryA");\
		KERNEL32.LoadLibraryExA = (T_KERNEL32__LoadLibraryExA())\
			LOCALMACRO__KERNEL32__EXPORT("LoadLibraryExA");\
		KERNEL32.FreeLibrary = (T_KERNEL32__FreeLibrary())\
			LOCALMACRO__KERNEL32__EXPORT("FreeLibrary");\
		KERNEL32.GetProcAddress = (T_KERNEL32__GetProcAddress())\
			LOCALMACRO__KERNEL32__EXPORT("GetProcAddress");\
		KERNEL32.GetModuleHandleA = (T_KERNEL32__GetModuleHandleA())\
			LOCALMACRO__KERNEL32__EXPORT("GetModuleHandleA");\
		KERNEL32.GetCurrentProcessId = (T_KERNEL32__GetCurrentProcessId())\
			LOCALMACRO__KERNEL32__EXPORT("GetCurrentProcessId");\
		KERNEL32.TerminateProcess = (T_KERNEL32__TerminateProcess())\
			LOCALMACRO__KERNEL32__EXPORT("TerminateProcess");\
		KERNEL32.ExitProcess = (T_KERNEL32__ExitProcess())\
			LOCALMACRO__KERNEL32__EXPORT("ExitProcess");\
		KERNEL32.CreateThread = (T_KERNEL32__CreateThread())\
			LOCALMACRO__KERNEL32__EXPORT("CreateThread");\
		KERNEL32.GetCurrentThread = (T_KERNEL32__GetCurrentThread())\
			LOCALMACRO__KERNEL32__EXPORT("GetCurrentThread");\
		KERNEL32.GetCurrentThreadId = (T_KERNEL32__GetCurrentThreadId())\
			LOCALMACRO__KERNEL32__EXPORT("GetCurrentThreadId");\
		KERNEL32.ExitThread = (T_KERNEL32__ExitThread())\
			LOCALMACRO__KERNEL32__EXPORT("ExitThread");\
		KERNEL32.SuspendThread = (T_KERNEL32__SuspendThread())\
			LOCALMACRO__KERNEL32__EXPORT("SuspendThread");\
		KERNEL32.ResumeThread = (T_KERNEL32__ResumeThread())\
			LOCALMACRO__KERNEL32__EXPORT("ResumeThread");\
		KERNEL32.VirtualAlloc = (T_KERNEL32__VirtualAlloc())\
			LOCALMACRO__KERNEL32__EXPORT("VirtualAlloc");\
		KERNEL32.VirtualFree = (T_KERNEL32__VirtualFree())\
			LOCALMACRO__KERNEL32__EXPORT("VirtualFree");\
		KERNEL32.VirtualProtect = (T_KERNEL32__VirtualProtect())\
			LOCALMACRO__KERNEL32__EXPORT("VirtualProtect");\
		KERNEL32.RtlMoveMemory = (T_KERNEL32__RtlMoveMemory())\
			LOCALMACRO__KERNEL32__EXPORT("RtlMoveMemory");\
		KERNEL32.RtlCopyMemory = (T_KERNEL32__RtlCopyMemory())\
			LOCALMACRO__KERNEL32__EXPORT("RtlCopyMemory");\
		KERNEL32.RtlZeroMemory = (T_KERNEL32__RtlZeroMemory())\
			LOCALMACRO__KERNEL32__EXPORT("RtlZeroMemory");\
		KERNEL32.GetProcessHeap = (T_KERNEL32__GetProcessHeap())\
			LOCALMACRO__KERNEL32__EXPORT("GetProcessHeap");\
		KERNEL32.HeapAlloc = (T_KERNEL32__HeapAlloc())\
			LOCALMACRO__KERNEL32__EXPORT("HeapAlloc");\
		KERNEL32.HeapFree = (T_KERNEL32__HeapFree())\
			LOCALMACRO__KERNEL32__EXPORT("HeapFree");\
		KERNEL32.CreateFileA = (T_KERNEL32__CreateFileA())\
			LOCALMACRO__KERNEL32__EXPORT("CreateFileA");\
		KERNEL32.ReadFile = (T_KERNEL32__ReadFile())\
			LOCALMACRO__KERNEL32__EXPORT("ReadFile");\
		KERNEL32.WriteFile = (T_KERNEL32__WriteFile())\
			LOCALMACRO__KERNEL32__EXPORT("WriteFile");\
		KERNEL32.CloseHandle = (T_KERNEL32__CloseHandle())\
			LOCALMACRO__KERNEL32__EXPORT("CloseHandle");\
		KERNEL32.GetFileSize = (T_KERNEL32__GetFileSize())\
			LOCALMACRO__KERNEL32__EXPORT("GetFileSize");\
		KERNEL32.DeleteFileA = (T_KERNEL32__DeleteFileA())\
			LOCALMACRO__KERNEL32__EXPORT("DeleteFileA");\
		KERNEL32.GetStdHandle = (T_KERNEL32__GetStdHandle())\
			LOCALMACRO__KERNEL32__EXPORT("GetStdHandle");\
		KERNEL32.WriteConsoleA = (T_KERNEL32__WriteConsoleA())\
			LOCALMACRO__KERNEL32__EXPORT("WriteConsoleA");\
		KERNEL32.WaitForSingleObject = (T_KERNEL32__WaitForSingleObject())\
			LOCALMACRO__KERNEL32__EXPORT("WaitForSingleObject");\
		KERNEL32.Sleep = (T_KERNEL32__Sleep())\
			LOCALMACRO__KERNEL32__EXPORT("Sleep");\
		KERNEL32.GetSystemTime = (T_KERNEL32__GetSystemTime())\
			LOCALMACRO__KERNEL32__EXPORT("GetSystemTime");\
		KERNEL32.GetLocalTime = (T_KERNEL32__GetLocalTime())\
			LOCALMACRO__KERNEL32__EXPORT("GetLocalTime");\
		KERNEL32.QueryPerformanceCounter = \
			(T_KERNEL32__QueryPerformanceCounter())\
			LOCALMACRO__KERNEL32__EXPORT("QueryPerformanceCounter");\
		KERNEL32.QueryPerformanceFrequency = \
			(T_KERNEL32__QueryPerformanceFrequency())\
			LOCALMACRO__KERNEL32__EXPORT("QueryPerformanceFrequency");\
		KERNEL32.GetLastError = (T_KERNEL32__GetLastError())\
			LOCALMACRO__KERNEL32__EXPORT("GetLastError");\
		KERNEL32.SetLastError = (T_KERNEL32__SetLastError())\
			LOCALMACRO__KERNEL32__EXPORT("SetLastError");\
		KERNEL32.lstrcmpA = (T_KERNEL32__lstrcmpA())\
			LOCALMACRO__KERNEL32__EXPORT("lstrcmpA");\
		KERNEL32.lstrcpyA = (T_KERNEL32__lstrcpyA())\
			LOCALMACRO__KERNEL32__EXPORT("lstrcpyA");\
		KERNEL32.lstrlenA = (T_KERNEL32__lstrlenA())\
			LOCALMACRO__KERNEL32__EXPORT("lstrlenA");\
		KERNEL32.GetSystemInfo = (T_KERNEL32__GetSystemInfo())\
			LOCALMACRO__KERNEL32__EXPORT("GetSystemInfo");\
		KERNEL32.GetExitCodeThread = (T_KERNEL32__GetExitCodeThread())\
			LOCALMACRO__KERNEL32__EXPORT("GetExitCodeThread");\
		KERNEL32.InitializeCriticalSection = \
			(T_KERNEL32__InitializeCriticalSection())\
			LOCALMACRO__KERNEL32__EXPORT("InitializeCriticalSection");\
		KERNEL32.DeleteCriticalSection = (T_KERNEL32__DeleteCriticalSection())\
			LOCALMACRO__KERNEL32__EXPORT("DeleteCriticalSection");\
		KERNEL32.EnterCriticalSection = (T_KERNEL32__EnterCriticalSection())\
			LOCALMACRO__KERNEL32__EXPORT("EnterCriticalSection");\
		KERNEL32.LeaveCriticalSection = (T_KERNEL32__LeaveCriticalSection())\
			LOCALMACRO__KERNEL32__EXPORT("LeaveCriticalSection");\
		KERNEL32.GlobalAlloc = (T_KERNEL32__GlobalAlloc())\
			LOCALMACRO__KERNEL32__EXPORT("GlobalAlloc");\
		KERNEL32.GlobalLock = (T_KERNEL32__GlobalLock())\
			LOCALMACRO__KERNEL32__EXPORT("GlobalLock");\
		KERNEL32.GlobalUnlock = (T_KERNEL32__GlobalUnlock())\
			LOCALMACRO__KERNEL32__EXPORT("GlobalUnlock");\
		KERNEL32.GlobalReAlloc = (T_KERNEL32__GlobalReAlloc())\
			LOCALMACRO__KERNEL32__EXPORT("GlobalReAlloc");\
		KERNEL32.GlobalFree = (T_KERNEL32__GlobalFree())\
			LOCALMACRO__KERNEL32__EXPORT("GlobalFree");\
		KERNEL32.CreateFileMappingA = (T_KERNEL32__CreateFileMappingA())\
			LOCALMACRO__KERNEL32__EXPORT("CreateFileMappingA");\
		KERNEL32.MapViewOfFile = (T_KERNEL32__MapViewOfFile())\
			LOCALMACRO__KERNEL32__EXPORT("MapViewOfFile");\
		KERNEL32.UnmapViewOfFile = (T_KERNEL32__UnmapViewOfFile())\
			LOCALMACRO__KERNEL32__EXPORT("UnmapViewOfFile");\
		KERNEL32.SetConsoleTextAttribute = \
			(T_KERNEL32__SetConsoleTextAttribute())\
			LOCALMACRO__KERNEL32__EXPORT("SetConsoleTextAttribute");\
		KERNEL32.GetConsoleScreenBufferInfo = \
			(T_KERNEL32__GetConsoleScreenBufferInfo())\
			LOCALMACRO__KERNEL32__EXPORT("GetConsoleScreenBufferInfo");\
		KERNEL32.SetConsoleCursorPosition = \
			(T_KERNEL32__SetConsoleCursorPosition())\
			LOCALMACRO__KERNEL32__EXPORT("SetConsoleCursorPosition");\
		KERNEL32.SetConsoleCursorInfo = (T_KERNEL32__SetConsoleCursorInfo())\
			LOCALMACRO__KERNEL32__EXPORT("SetConsoleCursorInfo");\
		KERNEL32.GetConsoleCursorInfo = (T_KERNEL32__GetConsoleCursorInfo())\
			LOCALMACRO__KERNEL32__EXPORT("GetConsoleCursorInfo");\
		KERNEL32.GetConsoleWindow = (T_KERNEL32__GetConsoleWindow())\
			LOCALMACRO__KERNEL32__EXPORT("GetConsoleWindow");\
		KERNEL32.SetConsoleScreenBufferSize = \
			(T_KERNEL32__SetConsoleScreenBufferSize())\
			LOCALMACRO__KERNEL32__EXPORT("SetConsoleScreenBufferSize");\
		KERNEL32.SetConsoleWindowInfo = (T_KERNEL32__SetConsoleWindowInfo())\
			LOCALMACRO__KERNEL32__EXPORT("SetConsoleWindowInfo");\
		KERNEL32.GetLargestConsoleWindowSize = \
			(T_KERNEL32__GetLargestConsoleWindowSize())\
			LOCALMACRO__KERNEL32__EXPORT("GetLargestConsoleWindowSize");\
		KERNEL32.FillConsoleOutputCharacterA = \
			(T_KERNEL32__FillConsoleOutputCharacterA())\
			LOCALMACRO__KERNEL32__EXPORT("FillConsoleOutputCharacterA");\
		KERNEL32.FillConsoleOutputAttribute = \
			(T_KERNEL32__FillConsoleOutputAttribute())\
			LOCALMACRO__KERNEL32__EXPORT("FillConsoleOutputAttribute");\
		KERNEL32.WriteConsoleOutputCharacterA = \
			(T_KERNEL32__WriteConsoleOutputCharacterA())\
			LOCALMACRO__KERNEL32__EXPORT("WriteConsoleOutputCharacterA");\
		KERNEL32.WriteConsoleOutputAttribute = \
			(T_KERNEL32__WriteConsoleOutputAttribute())\
			LOCALMACRO__KERNEL32__EXPORT("WriteConsoleOutputAttribute");\
		KERNEL32.ReadConsoleOutputCharacterA = \
			(T_KERNEL32__ReadConsoleOutputCharacterA())\
			LOCALMACRO__KERNEL32__EXPORT("ReadConsoleOutputCharacterA");\
		KERNEL32.ReadConsoleOutputAttribute = \
			(T_KERNEL32__ReadConsoleOutputAttribute())\
			LOCALMACRO__KERNEL32__EXPORT("ReadConsoleOutputAttribute");\
		KERNEL32.ReadConsoleInputA = (T_KERNEL32__ReadConsoleInputA())\
			LOCALMACRO__KERNEL32__EXPORT("ReadConsoleInputA");\
		KERNEL32.GetConsoleMode = (T_KERNEL32__GetConsoleMode())\
			LOCALMACRO__KERNEL32__EXPORT("GetConsoleMode");\
		KERNEL32.SetConsoleMode = (T_KERNEL32__SetConsoleMode())\
			LOCALMACRO__KERNEL32__EXPORT("SetConsoleMode");\
		KERNEL32.HeapReAlloc = (T_KERNEL32__HeapReAlloc())\
			LOCALMACRO__KERNEL32__EXPORT("HeapReAlloc");\
		KERNEL32.SetConsoleTitleA = (T_KERNEL32__SetConsoleTitleA())\
			LOCALMACRO__KERNEL32__EXPORT("SetConsoleTitleA");\
		KERNEL32.GetEnvironmentVariableA = \
			(T_KERNEL32__GetEnvironmentVariableA())\
			LOCALMACRO__KERNEL32__EXPORT("GetEnvironmentVariableA");\
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
