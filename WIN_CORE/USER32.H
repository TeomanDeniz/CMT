/******************************************************************************\
# H - USER32                                     #       Maximum Tension       #
################################################################################
#                                                #      -__            __-     #
# Teoman Deniz                                   #  :    :!1!-_    _-!1!:    : #
# maximum-tension.com                            #  ::                      :: #
#                                                #  :!:    : :: : :  :  ::::!: #
# +.....................++.....................+ #   :!:: :!:!1:!:!::1:::!!!:  #
# : C - Maximum Tension :: Create - 2026/07/28 : #   ::!::!!1001010!:!11!!::   #
# :---------------------::---------------------: #   :!1!!11000000000011!!:    #
# : License - Apache2.0 :: Update - 2026/10/09 : #    ::::!!!1!!1!!!1!!!::     #
# +.....................++.....................+ #       ::::!::!:::!::::      #
\******************************************************************************/

/******************************************************************************\
|* __________________________________________________________________________ *|
|*|                                  USER32                                  |*|
|*|__________________________________________________________________________|*|
|*|  ______________________________________________________________________  |*|
|*| | CONTENTS LIST                                                        | |*|
|*| |======================================================================| |*|
|*| | struct S_USER32;                                                     | |*|
|*| |----------------------------------------------------------------------| |*|
|*| | struct S_USER32 USER32;                                              | |*|
|*| |______________________________________________________________________| |*|
|*|             __________                                                   |*|
|*| THE WINDOWS USER32.DLL API IS EXPOSED THROUGH A SINGLE GLOBAL STRUCTURE  |*|
|*| NAMED USER32.                                                            |*|
|*|       ^^^^^^                                 _____________________       |*|
|*| THIS STRUCTURE IS POPULATED AT RUNTIME USING KERNEL32.LoadLibraryA, SO   |*|
|*| SOME FUNCTION POINTERS MAY BE <NULL> DEPENDING ON THE TARGET WINDOWS     |*|
|*| VERSION OR EXECUTION ENVIRONMENT. SO, ALWAYS VERIFY THAT A FUNCTION      |*|
|*| POINTER IS VALID BEFORE CALLING IT.                                      |*|
|*|                                     ________                             |*|
|*| AVAILABLE FUNCTIONS ARE DECLARED IN USER32.H. YOU CAN EXTEND THE STRUCT  |*|
|*| MANUALLY IF YOU NEED ADDITIONAL EXPORTS THAT ARE NOT CURRENTLY INCLUDED. |*|
|*|                                                                          |*|
|*| EXAMPLE:                                                                 |*|
|*|                                                                          |*|
|*|  v [C LANGUAGE]                                                          |*|
|*| 1|                                                                       |*|
|*| 2| #include <CMT/WIN_CORE/USER32.H>                                      |*|
|*| 3|                                                                       |*|
|*| 4| int main()                                                            |*|
|*| 5| {                                                                     |*|
|*| 6|     USER32.MessageBoxA(0, "Hello, World!", "CMT", 0);                 |*|
|*| 7|     return (0);                                                       |*|
|*| 8| }                                                                     |*|
|*| 9|                                                                       |*|
|*|__________________________________________________________________________|*|
|*                                                                            *|
\******************************************************************************/

#ifndef USER32_H
#define USER32_H 202610 /* VERSION */

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
#define T_USER32__RegisterClassExA(NAME) \
	unsigned short (STDCALL *NAME)(const PTR)
#define T_USER32__UnregisterClassA(NAME) int (STDCALL *NAME)(\
		const char *, \
		PTR\
	)
#define T_USER32__CreateWindowExA(NAME) PTR (STDCALL *NAME)(\
		unsigned long, \
		const char *, \
		const char *, \
		unsigned long, \
		int, \
		int, \
		int, \
		int, \
		PTR, \
		PTR, \
		PTR, \
		PTR\
	)
#define T_USER32__DestroyWindow(NAME) int (STDCALL *NAME)(PTR)
#define T_USER32__ShowWindow(NAME) int (STDCALL *NAME)(PTR, int)
#define T_USER32__UpdateWindow(NAME) int (STDCALL *NAME)(PTR)
#define T_USER32__CloseWindow(NAME) int (STDCALL *NAME)(PTR)
#define T_USER32__IsWindow(NAME) int (STDCALL *NAME)(PTR)
#define T_USER32__IsWindowVisible(NAME) int (STDCALL *NAME)(PTR)
#define T_USER32__IsWindowEnabled(NAME) int (STDCALL *NAME)(PTR)
#define T_USER32__EnableWindow(NAME) int (STDCALL *NAME)(PTR, int)
#define T_USER32__MoveWindow(NAME) int (STDCALL *NAME)(\
		PTR, \
		int, \
		int, \
		int, \
		int, \
		int\
	)
#define T_USER32__SetWindowPos(NAME) int (STDCALL *NAME)(\
		PTR, \
		PTR, \
		int, \
		int, \
		int, \
		int, \
		unsigned int\
	)
#define T_USER32__GetWindowRect(NAME) int (STDCALL *NAME)(\
		PTR, \
		struct S_RECT *\
	)
#define T_USER32__GetClientRect(NAME) int (STDCALL *NAME)(PTR, PTR)
#define T_USER32__AdjustWindowRectEx(NAME) int (STDCALL *NAME)(\
		PTR, \
		unsigned long, \
		int, \
		unsigned long\
	)
#define T_USER32__SetWindowTextA(NAME) int (STDCALL *NAME)(PTR, const char *)
#define T_USER32__GetWindowTextA(NAME) int (STDCALL *NAME)(PTR, char *, int)
#define T_USER32__GetWindowLongPtrA(NAME) LET (STDCALL *NAME)(PTR, int)
#define T_USER32__SetWindowLongPtrA(NAME) LET (STDCALL *NAME)(PTR, int, LET)
#define T_USER32__GetWindowLongA(NAME) unsigned long (STDCALL *NAME)(PTR, int)
#define T_USER32__SetWindowLongA(NAME) unsigned long (STDCALL *NAME)(\
		PTR, \
		int, \
		unsigned long\
	)
#define T_USER32__SetLayeredWindowAttributes(NAME) int (STDCALL *NAME)(\
		PTR, \
		unsigned long, \
		unsigned char, \
		unsigned long\
	)
#define T_USER32__SetActiveWindow(NAME) PTR (STDCALL *NAME)(PTR)
#define T_USER32__GetActiveWindow(NAME) PTR (STDCALL *NAME)(void)
#define T_USER32__SetForegroundWindow(NAME) int (STDCALL *NAME)(PTR)
#define T_USER32__GetForegroundWindow(NAME) PTR (STDCALL *NAME)(void)
#define T_USER32__SetFocus(NAME) PTR (STDCALL *NAME)(PTR)
#define T_USER32__GetFocus(NAME) PTR (STDCALL *NAME)(void)
#define T_USER32__ShowWindowAsync(NAME) int (STDCALL *NAME)(PTR, int)
#define T_USER32__BringWindowToTop(NAME) int (STDCALL *NAME)(PTR)
#define T_USER32__GetMessageA(NAME) int (STDCALL *NAME)(\
		PTR, \
		PTR, \
		unsigned int, \
		unsigned int\
	)
#define T_USER32__PeekMessageA(NAME) int (STDCALL *NAME)(\
		PTR, \
		PTR, \
		unsigned int, \
		unsigned int, \
		unsigned int\
	)
#define T_USER32__TranslateMessage(NAME) int (STDCALL *NAME)(const PTR)
#define T_USER32__DispatchMessageA(NAME) LET (STDCALL *NAME)(const PTR)
#define T_USER32__PostQuitMessage(NAME) void (STDCALL *NAME)(int)
#define T_USER32__DefWindowProcA(NAME) LET (STDCALL *NAME)(\
		PTR, \
		unsigned int, \
		LET, \
		LET\
	)
#define T_USER32__SendMessageA(NAME) LET (STDCALL *NAME)(\
		PTR, \
		unsigned int, \
		LET, \
		LET\
	)
#define T_USER32__PostMessageA(NAME) int (STDCALL *NAME)(\
		PTR, \
		unsigned int, \
		LET, \
		LET\
	)
#define T_USER32__WaitMessage(NAME) int (STDCALL *NAME)(void)
#define T_USER32__CallWindowProcA(NAME) LET (STDCALL *NAME)(\
		PTR, \
		PTR, \
		unsigned int, \
		LET, \
		LET\
	)
#define T_USER32__GetDC(NAME) PTR (STDCALL *NAME)(PTR)
#define T_USER32__GetDCEx(NAME) PTR (STDCALL *NAME)(PTR, PTR, unsigned long)
#define T_USER32__ReleaseDC(NAME) int (STDCALL *NAME)(PTR, PTR)
#define T_USER32__BeginPaint(NAME) PTR (STDCALL *NAME)(PTR, PTR)
#define T_USER32__EndPaint(NAME) int (STDCALL *NAME)(PTR, const PTR)
#define T_USER32__InvalidateRect(NAME) int (STDCALL *NAME)(\
		PTR, \
		const PTR, \
		int\
	)
#define T_USER32__ValidateRect(NAME) int (STDCALL *NAME)(PTR, const PTR)
#define T_USER32__MonitorFromWindow(NAME) PTR (STDCALL *NAME)(\
		PTR, \
		unsigned long\
	)
#define T_USER32__MonitorFromPoint(NAME) PTR (STDCALL *NAME)(\
		LET, \
		unsigned long\
	)
#define T_USER32__GetMonitorInfoA(NAME) int (STDCALL *NAME)(PTR, PTR)
#define T_USER32__EnumDisplayMonitors(NAME) int (STDCALL *NAME)(\
		PTR, \
		const PTR, \
		PTR, \
		LET\
	)
#define T_USER32__EnumDisplaySettingsA(NAME) int (STDCALL *NAME)(\
		const char *, \
		unsigned long, \
		PTR\
	)
#define T_USER32__SetProcessDPIAware(NAME) int (STDCALL *NAME)(void)
#define T_USER32__LoadCursorA(NAME) PTR (STDCALL *NAME)(PTR, const char *)
#define T_USER32__SetCursor(NAME) PTR (STDCALL *NAME)(PTR)
#define T_USER32__GetCursor(NAME) PTR (STDCALL *NAME)(void)
#define T_USER32__GetCursorPos(NAME) int (STDCALL *NAME)(PTR)
#define T_USER32__SetCursorPos(NAME) int (STDCALL *NAME)(int, int)
#define T_USER32__ShowCursor(NAME) int (STDCALL *NAME)(int)
#define T_USER32__ClipCursor(NAME) int (STDCALL *NAME)(const PTR)
#define T_USER32__ScreenToClient(NAME) int (STDCALL *NAME)(PTR, PTR)
#define T_USER32__ClientToScreen(NAME) int (STDCALL *NAME)(PTR, PTR)
#define T_USER32__GetKeyState(NAME) short (STDCALL *NAME)(int)
#define T_USER32__GetAsyncKeyState(NAME) short (STDCALL *NAME)(int)
#define T_USER32__GetKeyboardState(NAME) int (STDCALL *NAME)(PTR)
#define T_USER32__MapVirtualKeyA(NAME) unsigned int (STDCALL *NAME)(\
		unsigned int, \
		unsigned int\
	)
#define T_USER32__MessageBoxA(NAME) int (STDCALL *NAME)(\
		PTR, \
		const char *, \
		const char *, \
		unsigned int\
	)
#define T_USER32__SetWindowsHookExA(NAME) PTR (STDCALL *NAME)(\
		int, \
		PTR, \
		PTR, \
		unsigned long\
	)
#define T_USER32__UnhookWindowsHookEx(NAME) int (STDCALL *NAME)(PTR)
#define T_USER32__CallNextHookEx(NAME) LET (STDCALL *NAME)(PTR, int, LET, LET)
#define T_USER32__OpenClipboard(NAME) int (STDCALL *NAME)(PTR)
#define T_USER32__CloseClipboard(NAME) int (STDCALL *NAME)(void)
#define T_USER32__EmptyClipboard(NAME) int (STDCALL *NAME)(void)
#define T_USER32__SetClipboardData(NAME) PTR (STDCALL *NAME)(\
		unsigned int, \
		PTR\
	)
#define T_USER32__GetClipboardData(NAME) PTR (STDCALL *NAME)(unsigned int)
#define T_USER32__IsClipboardFormatAvailable(NAME) int (STDCALL *NAME)(\
		unsigned int\
	)
#define T_USER32__LoadIconA(NAME) PTR (STDCALL *NAME)(PTR, const char *)
#define T_USER32__DestroyIcon(NAME) int (STDCALL *NAME)(PTR)
#define T_USER32__GetSystemMetrics(NAME) int (STDCALL *NAME)(int)
#define T_USER32__SystemParametersInfoA(NAME) int (STDCALL *NAME)(\
		unsigned int, \
		unsigned int, \
		PTR, \
		unsigned int\
	)
#else /* K&R */
#define T_USER32__RegisterClassExA(NAME) unsigned short (STDCALL *NAME)()
#define T_USER32__UnregisterClassA(NAME) int (STDCALL *NAME)()
#define T_USER32__CreateWindowExA(NAME) PTR (STDCALL *NAME)()
#define T_USER32__DestroyWindow(NAME) int (STDCALL *NAME)()
#define T_USER32__ShowWindow(NAME) int (STDCALL *NAME)()
#define T_USER32__UpdateWindow(NAME) int (STDCALL *NAME)()
#define T_USER32__CloseWindow(NAME) int (STDCALL *NAME)()
#define T_USER32__IsWindow(NAME) int (STDCALL *NAME)()
#define T_USER32__IsWindowVisible(NAME) int (STDCALL *NAME)()
#define T_USER32__IsWindowEnabled(NAME) int (STDCALL *NAME)()
#define T_USER32__EnableWindow(NAME) int (STDCALL *NAME)()
#define T_USER32__MoveWindow(NAME) int (STDCALL *NAME)()
#define T_USER32__SetWindowPos(NAME) int (STDCALL *NAME)()
#define T_USER32__GetWindowRect(NAME) int (STDCALL *NAME)()
#define T_USER32__GetClientRect(NAME) int (STDCALL *NAME)()
#define T_USER32__AdjustWindowRectEx(NAME) int (STDCALL *NAME)()
#define T_USER32__SetWindowTextA(NAME) int (STDCALL *NAME)()
#define T_USER32__GetWindowTextA(NAME) int (STDCALL *NAME)()
#define T_USER32__GetWindowLongPtrA(NAME) LET (STDCALL *NAME)()
#define T_USER32__SetWindowLongPtrA(NAME) LET (STDCALL *NAME)()
#define T_USER32__GetWindowLongA(NAME) unsigned long (STDCALL *NAME)()
#define T_USER32__SetWindowLongA(NAME) unsigned long (STDCALL *NAME)()
#define T_USER32__SetLayeredWindowAttributes(NAME) int (STDCALL *NAME)()
#define T_USER32__SetActiveWindow(NAME) PTR (STDCALL *NAME)()
#define T_USER32__GetActiveWindow(NAME) PTR (STDCALL *NAME)()
#define T_USER32__SetForegroundWindow(NAME) int (STDCALL *NAME)()
#define T_USER32__GetForegroundWindow(NAME) PTR (STDCALL *NAME)()
#define T_USER32__SetFocus(NAME) PTR (STDCALL *NAME)()
#define T_USER32__GetFocus(NAME) PTR (STDCALL *NAME)()
#define T_USER32__ShowWindowAsync(NAME) int (STDCALL *NAME)()
#define T_USER32__BringWindowToTop(NAME) int (STDCALL *NAME)()
#define T_USER32__GetMessageA(NAME) int (STDCALL *NAME)()
#define T_USER32__PeekMessageA(NAME) int (STDCALL *NAME)()
#define T_USER32__TranslateMessage(NAME) int (STDCALL *NAME)()
#define T_USER32__DispatchMessageA(NAME) LET (STDCALL *NAME)()
#define T_USER32__PostQuitMessage(NAME) void (STDCALL *NAME)()
#define T_USER32__DefWindowProcA(NAME) LET (STDCALL *NAME)()
#define T_USER32__SendMessageA(NAME) LET (STDCALL *NAME)()
#define T_USER32__PostMessageA(NAME) int (STDCALL *NAME)()
#define T_USER32__WaitMessage(NAME) int (STDCALL *NAME)()
#define T_USER32__CallWindowProcA(NAME) LET (STDCALL *NAME)()
#define T_USER32__GetDC(NAME) PTR (STDCALL *NAME)()
#define T_USER32__GetDCEx(NAME) PTR (STDCALL *NAME)()
#define T_USER32__ReleaseDC(NAME) int (STDCALL *NAME)()
#define T_USER32__BeginPaint(NAME) PTR (STDCALL *NAME)()
#define T_USER32__EndPaint(NAME) int (STDCALL *NAME)()
#define T_USER32__InvalidateRect(NAME) int (STDCALL *NAME)()
#define T_USER32__ValidateRect(NAME) int (STDCALL *NAME)()
#define T_USER32__MonitorFromWindow(NAME) PTR (STDCALL *NAME)()
#define T_USER32__MonitorFromPoint(NAME) PTR (STDCALL *NAME)()
#define T_USER32__GetMonitorInfoA(NAME) int (STDCALL *NAME)()
#define T_USER32__EnumDisplayMonitors(NAME) int (STDCALL *NAME)()
#define T_USER32__EnumDisplaySettingsA(NAME) int (STDCALL *NAME)()
#define T_USER32__SetProcessDPIAware(NAME) int (STDCALL *NAME)()
#define T_USER32__LoadCursorA(NAME) PTR (STDCALL *NAME)()
#define T_USER32__SetCursor(NAME) PTR (STDCALL *NAME)()
#define T_USER32__GetCursor(NAME) PTR (STDCALL *NAME)()
#define T_USER32__GetCursorPos(NAME) int (STDCALL *NAME)()
#define T_USER32__SetCursorPos(NAME) int (STDCALL *NAME)()
#define T_USER32__ShowCursor(NAME) int (STDCALL *NAME)()
#define T_USER32__ClipCursor(NAME) int (STDCALL *NAME)()
#define T_USER32__ScreenToClient(NAME) int (STDCALL *NAME)()
#define T_USER32__ClientToScreen(NAME) int (STDCALL *NAME)()
#define T_USER32__GetKeyState(NAME) short (STDCALL *NAME)()
#define T_USER32__GetAsyncKeyState(NAME) short (STDCALL *NAME)()
#define T_USER32__GetKeyboardState(NAME) int (STDCALL *NAME)()
#define T_USER32__MapVirtualKeyA(NAME) unsigned int (STDCALL *NAME)()
#define T_USER32__MessageBoxA(NAME) int (STDCALL *NAME)()
#define T_USER32__SetWindowsHookExA(NAME) PTR (STDCALL *NAME)()
#define T_USER32__UnhookWindowsHookEx(NAME) int (STDCALL *NAME)()
#define T_USER32__CallNextHookEx(NAME) LET (STDCALL *NAME)()
#define T_USER32__OpenClipboard(NAME) int (STDCALL *NAME)()
#define T_USER32__CloseClipboard(NAME) int (STDCALL *NAME)()
#define T_USER32__EmptyClipboard(NAME) int (STDCALL *NAME)()
#define T_USER32__SetClipboardData(NAME) PTR (STDCALL *NAME)()
#define T_USER32__GetClipboardData(NAME) PTR (STDCALL *NAME)()
#define T_USER32__IsClipboardFormatAvailable(NAME) int (STDCALL *NAME)()
#define T_USER32__LoadIconA(NAME) PTR (STDCALL *NAME)()
#define T_USER32__DestroyIcon(NAME) int (STDCALL *NAME)()
#define T_USER32__GetSystemMetrics(NAME) int (STDCALL *NAME)()
#define T_USER32__SystemParametersInfoA(NAME) int (STDCALL *NAME)()
#endif /* !KNR_STYLE */
/* **************************** [^] TYPEDEFS [^] **************************** */

/* **************************** [v] STRUCTS [v] ***************************** */
#include "STRUCTS/RECT.H"
/******* """"""""""""""""
 * struct S_RECT;
 */

EXTERN_C_START
struct S_USER32
{
	PTR	SELF;
	T_USER32__RegisterClassExA(RegisterClassExA);
	T_USER32__UnregisterClassA(UnregisterClassA);
	T_USER32__CreateWindowExA(CreateWindowExA);
	T_USER32__DestroyWindow(DestroyWindow);
	T_USER32__ShowWindow(ShowWindow);
	T_USER32__UpdateWindow(UpdateWindow);
	T_USER32__CloseWindow(CloseWindow);
	T_USER32__IsWindow(IsWindow);
	T_USER32__IsWindowVisible(IsWindowVisible);
	T_USER32__IsWindowEnabled(IsWindowEnabled);
	T_USER32__EnableWindow(EnableWindow);
	T_USER32__MoveWindow(MoveWindow);
	T_USER32__SetWindowPos(SetWindowPos);
	T_USER32__GetWindowRect(GetWindowRect);
	T_USER32__GetClientRect(GetClientRect);
	T_USER32__AdjustWindowRectEx(AdjustWindowRectEx);
	T_USER32__SetWindowTextA(SetWindowTextA);
	T_USER32__GetWindowTextA(GetWindowTextA);
	T_USER32__GetWindowLongPtrA(GetWindowLongPtrA);
	T_USER32__SetWindowLongPtrA(SetWindowLongPtrA);
	T_USER32__GetWindowLongA(GetWindowLongA);
	T_USER32__SetWindowLongA(SetWindowLongA);
	T_USER32__SetLayeredWindowAttributes(SetLayeredWindowAttributes);
	T_USER32__SetActiveWindow(SetActiveWindow);
	T_USER32__GetActiveWindow(GetActiveWindow);
	T_USER32__SetForegroundWindow(SetForegroundWindow);
	T_USER32__GetForegroundWindow(GetForegroundWindow);
	T_USER32__SetFocus(SetFocus);
	T_USER32__GetFocus(GetFocus);
	T_USER32__ShowWindowAsync(ShowWindowAsync);
	T_USER32__BringWindowToTop(BringWindowToTop);
	T_USER32__GetMessageA(GetMessageA);
	T_USER32__PeekMessageA(PeekMessageA);
	T_USER32__TranslateMessage(TranslateMessage);
	T_USER32__DispatchMessageA(DispatchMessageA);
	T_USER32__PostQuitMessage(PostQuitMessage);
	T_USER32__DefWindowProcA(DefWindowProcA);
	T_USER32__SendMessageA(SendMessageA);
	T_USER32__PostMessageA(PostMessageA);
	T_USER32__WaitMessage(WaitMessage);
	T_USER32__CallWindowProcA(CallWindowProcA);
	T_USER32__GetDC(GetDC);
	T_USER32__GetDCEx(GetDCEx);
	T_USER32__ReleaseDC(ReleaseDC);
	T_USER32__BeginPaint(BeginPaint);
	T_USER32__EndPaint(EndPaint);
	T_USER32__InvalidateRect(InvalidateRect);
	T_USER32__ValidateRect(ValidateRect);
	T_USER32__MonitorFromWindow(MonitorFromWindow);
	T_USER32__MonitorFromPoint(MonitorFromPoint);
	T_USER32__GetMonitorInfoA(GetMonitorInfoA);
	T_USER32__EnumDisplayMonitors(EnumDisplayMonitors);
	T_USER32__EnumDisplaySettingsA(EnumDisplaySettingsA);
	T_USER32__SetProcessDPIAware(SetProcessDPIAware);
	T_USER32__LoadCursorA(LoadCursorA);
	T_USER32__SetCursor(SetCursor);
	T_USER32__GetCursor(GetCursor);
	T_USER32__GetCursorPos(GetCursorPos);
	T_USER32__SetCursorPos(SetCursorPos);
	T_USER32__ShowCursor(ShowCursor);
	T_USER32__ClipCursor(ClipCursor);
	T_USER32__ScreenToClient(ScreenToClient);
	T_USER32__ClientToScreen(ClientToScreen);
	T_USER32__GetKeyState(GetKeyState);
	T_USER32__GetAsyncKeyState(GetAsyncKeyState);
	T_USER32__GetKeyboardState(GetKeyboardState);
	T_USER32__MapVirtualKeyA(MapVirtualKeyA);
	T_USER32__MessageBoxA(MessageBoxA);
	T_USER32__SetWindowsHookExA(SetWindowsHookExA);
	T_USER32__UnhookWindowsHookEx(UnhookWindowsHookEx);
	T_USER32__CallNextHookEx(CallNextHookEx);
	T_USER32__OpenClipboard(OpenClipboard);
	T_USER32__CloseClipboard(CloseClipboard);
	T_USER32__EmptyClipboard(EmptyClipboard);
	T_USER32__SetClipboardData(SetClipboardData);
	T_USER32__GetClipboardData(GetClipboardData);
	T_USER32__IsClipboardFormatAvailable(IsClipboardFormatAvailable);
	T_USER32__LoadIconA(LoadIconA);
	T_USER32__DestroyIcon(DestroyIcon);
	T_USER32__GetSystemMetrics(GetSystemMetrics);
	T_USER32__SystemParametersInfoA(SystemParametersInfoA);
};
EXTERN_C_END
/* **************************** [^] STRUCTS [^] ***************************** */

#ifdef __PLATFORM_WINDOWS__
/* **************************** [v] EXTERNS [v] ***************************** */
EXTERN_C_START
extern struct S_USER32	USER32;
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
#include "KERNEL32.H"
/******* """"""""""""
 * struct S_KERNEL32	KERNEL32;
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

#define LOCALMACRO__USER32__EXPORT(NAME) \
	KERNEL32.GetProcAddress((PTR)USER32.SELF, NAME)

#undef GLOBALCONSTRUCTOR__USER32
#define GLOBALCONSTRUCTOR__USER32 \
	do\
	{\
		USER32.SELF = KERNEL32.LoadLibraryA("USER32.DLL");\
		USER32.RegisterClassExA = (T_USER32__RegisterClassExA())\
			LOCALMACRO__USER32__EXPORT("RegisterClassExA");\
		USER32.UnregisterClassA = (T_USER32__UnregisterClassA())\
			LOCALMACRO__USER32__EXPORT("UnregisterClassA");\
		USER32.CreateWindowExA = (T_USER32__CreateWindowExA())\
			LOCALMACRO__USER32__EXPORT("CreateWindowExA");\
		USER32.DestroyWindow = (T_USER32__DestroyWindow())\
			LOCALMACRO__USER32__EXPORT("DestroyWindow");\
		USER32.ShowWindow = (T_USER32__ShowWindow())\
			LOCALMACRO__USER32__EXPORT("ShowWindow");\
		USER32.UpdateWindow = (T_USER32__UpdateWindow())\
			LOCALMACRO__USER32__EXPORT("UpdateWindow");\
		USER32.CloseWindow = (T_USER32__CloseWindow())\
			LOCALMACRO__USER32__EXPORT("CloseWindow");\
		USER32.IsWindow = (T_USER32__IsWindow())\
			LOCALMACRO__USER32__EXPORT("IsWindow");\
		USER32.IsWindowVisible = (T_USER32__IsWindowVisible())\
			LOCALMACRO__USER32__EXPORT("IsWindowVisible");\
		USER32.IsWindowEnabled = (T_USER32__IsWindowEnabled())\
			LOCALMACRO__USER32__EXPORT("IsWindowEnabled");\
		USER32.EnableWindow = (T_USER32__EnableWindow())\
			LOCALMACRO__USER32__EXPORT("EnableWindow");\
		USER32.MoveWindow = (T_USER32__MoveWindow())\
			LOCALMACRO__USER32__EXPORT("MoveWindow");\
		USER32.SetWindowPos = (T_USER32__SetWindowPos())\
			LOCALMACRO__USER32__EXPORT("SetWindowPos");\
		USER32.GetWindowRect = (T_USER32__GetWindowRect())\
			LOCALMACRO__USER32__EXPORT("GetWindowRect");\
		USER32.GetClientRect = (T_USER32__GetClientRect())\
			LOCALMACRO__USER32__EXPORT("GetClientRect");\
		USER32.AdjustWindowRectEx = (T_USER32__AdjustWindowRectEx())\
			LOCALMACRO__USER32__EXPORT("AdjustWindowRectEx");\
		USER32.SetWindowTextA = (T_USER32__SetWindowTextA())\
			LOCALMACRO__USER32__EXPORT("SetWindowTextA");\
		USER32.GetWindowTextA = (T_USER32__GetWindowTextA())\
			LOCALMACRO__USER32__EXPORT("GetWindowTextA");\
		USER32.GetWindowLongPtrA = (T_USER32__GetWindowLongPtrA())\
			LOCALMACRO__USER32__EXPORT("GetWindowLongPtrA");\
		USER32.SetWindowLongPtrA = (T_USER32__SetWindowLongPtrA())\
			LOCALMACRO__USER32__EXPORT("SetWindowLongPtrA");\
		USER32.GetWindowLongA = (T_USER32__GetWindowLongA())\
			LOCALMACRO__USER32__EXPORT("GetWindowLongA");\
		USER32.SetWindowLongA = (T_USER32__SetWindowLongA())\
			LOCALMACRO__USER32__EXPORT("SetWindowLongA");\
		USER32.SetLayeredWindowAttributes = \
			(T_USER32__SetLayeredWindowAttributes())\
			LOCALMACRO__USER32__EXPORT("SetLayeredWindowAttributes");\
		USER32.SetActiveWindow = (T_USER32__SetActiveWindow())\
			LOCALMACRO__USER32__EXPORT("SetActiveWindow");\
		USER32.GetActiveWindow = (T_USER32__GetActiveWindow())\
			LOCALMACRO__USER32__EXPORT("GetActiveWindow");\
		USER32.SetForegroundWindow = (T_USER32__SetForegroundWindow())\
			LOCALMACRO__USER32__EXPORT("SetForegroundWindow");\
		USER32.GetForegroundWindow = (T_USER32__GetForegroundWindow())\
			LOCALMACRO__USER32__EXPORT("GetForegroundWindow");\
		USER32.SetFocus = (T_USER32__SetFocus())\
			LOCALMACRO__USER32__EXPORT("SetFocus");\
		USER32.GetFocus = (T_USER32__GetFocus())\
			LOCALMACRO__USER32__EXPORT("GetFocus");\
		USER32.ShowWindowAsync = (T_USER32__ShowWindowAsync())\
			LOCALMACRO__USER32__EXPORT("ShowWindowAsync");\
		USER32.BringWindowToTop = (T_USER32__BringWindowToTop())\
			LOCALMACRO__USER32__EXPORT("BringWindowToTop");\
		USER32.GetMessageA = (T_USER32__GetMessageA())\
			LOCALMACRO__USER32__EXPORT("GetMessageA");\
		USER32.PeekMessageA = (T_USER32__PeekMessageA())\
			LOCALMACRO__USER32__EXPORT("PeekMessageA");\
		USER32.TranslateMessage = (T_USER32__TranslateMessage())\
			LOCALMACRO__USER32__EXPORT("TranslateMessage");\
		USER32.DispatchMessageA = (T_USER32__DispatchMessageA())\
			LOCALMACRO__USER32__EXPORT("DispatchMessageA");\
		USER32.PostQuitMessage = (T_USER32__PostQuitMessage())\
			LOCALMACRO__USER32__EXPORT("PostQuitMessage");\
		USER32.DefWindowProcA = (T_USER32__DefWindowProcA())\
			LOCALMACRO__USER32__EXPORT("DefWindowProcA");\
		USER32.SendMessageA = (T_USER32__SendMessageA())\
			LOCALMACRO__USER32__EXPORT("SendMessageA");\
		USER32.PostMessageA = (T_USER32__PostMessageA())\
			LOCALMACRO__USER32__EXPORT("PostMessageA");\
		USER32.WaitMessage = (T_USER32__WaitMessage())\
			LOCALMACRO__USER32__EXPORT("WaitMessage");\
		USER32.CallWindowProcA = (T_USER32__CallWindowProcA())\
			LOCALMACRO__USER32__EXPORT("CallWindowProcA");\
		USER32.GetDC = (T_USER32__GetDC())\
			LOCALMACRO__USER32__EXPORT("GetDC");\
		USER32.GetDCEx = (T_USER32__GetDCEx())\
			LOCALMACRO__USER32__EXPORT("GetDCEx");\
		USER32.ReleaseDC = (T_USER32__ReleaseDC())\
			LOCALMACRO__USER32__EXPORT("ReleaseDC");\
		USER32.BeginPaint = (T_USER32__BeginPaint())\
			LOCALMACRO__USER32__EXPORT("BeginPaint");\
		USER32.EndPaint = (T_USER32__EndPaint())\
			LOCALMACRO__USER32__EXPORT("EndPaint");\
		USER32.InvalidateRect = (T_USER32__InvalidateRect())\
			LOCALMACRO__USER32__EXPORT("InvalidateRect");\
		USER32.ValidateRect = (T_USER32__ValidateRect())\
			LOCALMACRO__USER32__EXPORT("ValidateRect");\
		USER32.MonitorFromWindow = (T_USER32__MonitorFromWindow())\
			LOCALMACRO__USER32__EXPORT("MonitorFromWindow");\
		USER32.MonitorFromPoint = (T_USER32__MonitorFromPoint())\
			LOCALMACRO__USER32__EXPORT("MonitorFromPoint");\
		USER32.GetMonitorInfoA = (T_USER32__GetMonitorInfoA())\
			LOCALMACRO__USER32__EXPORT("GetMonitorInfoA");\
		USER32.EnumDisplayMonitors = (T_USER32__EnumDisplayMonitors())\
			LOCALMACRO__USER32__EXPORT("EnumDisplayMonitors");\
		USER32.EnumDisplaySettingsA = (T_USER32__EnumDisplaySettingsA())\
			LOCALMACRO__USER32__EXPORT("EnumDisplaySettingsA");\
		USER32.SetProcessDPIAware = (T_USER32__SetProcessDPIAware())\
			LOCALMACRO__USER32__EXPORT("SetProcessDPIAware");\
		USER32.LoadCursorA = (T_USER32__LoadCursorA())\
			LOCALMACRO__USER32__EXPORT("LoadCursorA");\
		USER32.SetCursor = (T_USER32__SetCursor())\
			LOCALMACRO__USER32__EXPORT("SetCursor");\
		USER32.GetCursor = (T_USER32__GetCursor())\
			LOCALMACRO__USER32__EXPORT("GetCursor");\
		USER32.GetCursorPos = (T_USER32__GetCursorPos())\
			LOCALMACRO__USER32__EXPORT("GetCursorPos");\
		USER32.SetCursorPos = (T_USER32__SetCursorPos())\
			LOCALMACRO__USER32__EXPORT("SetCursorPos");\
		USER32.ShowCursor = (T_USER32__ShowCursor())\
			LOCALMACRO__USER32__EXPORT("ShowCursor");\
		USER32.ClipCursor = (T_USER32__ClipCursor())\
			LOCALMACRO__USER32__EXPORT("ClipCursor");\
		USER32.ScreenToClient = (T_USER32__ScreenToClient())\
			LOCALMACRO__USER32__EXPORT("ScreenToClient");\
		USER32.ClientToScreen = (T_USER32__ClientToScreen())\
			LOCALMACRO__USER32__EXPORT("ClientToScreen");\
		USER32.GetKeyState = (T_USER32__GetKeyState())\
			LOCALMACRO__USER32__EXPORT("GetKeyState");\
		USER32.GetAsyncKeyState = (T_USER32__GetAsyncKeyState())\
			LOCALMACRO__USER32__EXPORT("GetAsyncKeyState");\
		USER32.GetKeyboardState = (T_USER32__GetKeyboardState())\
			LOCALMACRO__USER32__EXPORT("GetKeyboardState");\
		USER32.MapVirtualKeyA = (T_USER32__MapVirtualKeyA())\
			LOCALMACRO__USER32__EXPORT("MapVirtualKeyA");\
		USER32.MessageBoxA = (T_USER32__MessageBoxA())\
			LOCALMACRO__USER32__EXPORT("MessageBoxA");\
		USER32.SetWindowsHookExA = (T_USER32__SetWindowsHookExA())\
			LOCALMACRO__USER32__EXPORT("SetWindowsHookExA");\
		USER32.UnhookWindowsHookEx = (T_USER32__UnhookWindowsHookEx())\
			LOCALMACRO__USER32__EXPORT("UnhookWindowsHookEx");\
		USER32.CallNextHookEx = (T_USER32__CallNextHookEx())\
			LOCALMACRO__USER32__EXPORT("CallNextHookEx");\
		USER32.OpenClipboard = (T_USER32__OpenClipboard())\
			LOCALMACRO__USER32__EXPORT("OpenClipboard");\
		USER32.CloseClipboard = (T_USER32__CloseClipboard())\
			LOCALMACRO__USER32__EXPORT("CloseClipboard");\
		USER32.EmptyClipboard = (T_USER32__EmptyClipboard())\
			LOCALMACRO__USER32__EXPORT("EmptyClipboard");\
		USER32.SetClipboardData = (T_USER32__SetClipboardData())\
			LOCALMACRO__USER32__EXPORT("SetClipboardData");\
		USER32.GetClipboardData = (T_USER32__GetClipboardData())\
			LOCALMACRO__USER32__EXPORT("GetClipboardData");\
		USER32.IsClipboardFormatAvailable = \
			(T_USER32__IsClipboardFormatAvailable())\
			LOCALMACRO__USER32__EXPORT("IsClipboardFormatAvailable");\
		USER32.LoadIconA = (T_USER32__LoadIconA())\
			LOCALMACRO__USER32__EXPORT("LoadIconA");\
		USER32.DestroyIcon = (T_USER32__DestroyIcon())\
			LOCALMACRO__USER32__EXPORT("DestroyIcon");\
		USER32.GetSystemMetrics = (T_USER32__GetSystemMetrics())\
			LOCALMACRO__USER32__EXPORT("GetSystemMetrics");\
		USER32.SystemParametersInfoA = (T_USER32__SystemParametersInfoA())\
			LOCALMACRO__USER32__EXPORT("SystemParametersInfoA");\
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

#define LOCALLINKER__USER32 \
	EXTERN_C_START\
	struct S_USER32	USER32;\
	EXTERN_C_END

/*   /\   #==========================================================#   /\   */
/*  //\\  |                 LINKABLE MEMBER CREATION                 |  //\\  */
/* '""""' #==========================================================# '""""' */

#ifdef CMT_SETUP

/* [v] %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% /!\ IMPORTANT /!\ */
EXTERN_C_START
LOCALLINKER__USER32
EXTERN_C_END
/* [^] %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% /!\ IMPORTANT /!\ */

#include "../CMT/CONSTRUCTOR.INL"
#else /* !CMT_SETUP */

/* [v] %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% /!\ IMPORTANT /!\ */
#undef GLOBALLINKER__USER32
#define GLOBALLINKER__USER32 LOCALLINKER__USER32
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
#endif /* !USER32_H */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
