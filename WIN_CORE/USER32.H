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
# : License - GPL-3.0   :: Update - 2026/07/28 : #    ::::!!!1!!1!!!1!!!::     #
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
#define USER32_H 202607 /* VERSION */

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
EXTERN_C_START
struct S_USER32
{
	PTR				SELF;
#ifndef KNR_STYLE /* STANDARD C */
	/* *** WINDOW CLASS *** */
	unsigned short	(STDCALL *RegisterClassExA)(const PTR);
	int				(STDCALL *UnregisterClassA)(const char *, PTR);
	PTR				(STDCALL *CreateWindowExA)(
		unsigned long,
		const char *,
		const char *,
		unsigned long,
		int,
		int,
		int,
		int,
		PTR,
		PTR,
		PTR,
		PTR
	);
	int				(STDCALL *DestroyWindow)(PTR);
	int				(STDCALL *ShowWindow)(PTR, int);
	int				(STDCALL *UpdateWindow)(PTR);
	int				(STDCALL *CloseWindow)(PTR);
	int				(STDCALL *IsWindow)(PTR);
	int				(STDCALL *IsWindowVisible)(PTR);
	int				(STDCALL *IsWindowEnabled)(PTR);
	int				(STDCALL *EnableWindow)(PTR, int);
	int				(STDCALL *MoveWindow)(PTR, int, int, int, int, int);
	int				(STDCALL *SetWindowPos)(
		PTR, PTR, int, int, int, int, unsigned int
	);
	int				(STDCALL *GetWindowRect)(PTR, PTR);
	int				(STDCALL *GetClientRect)(PTR, PTR);
	int				(STDCALL *AdjustWindowRectEx)(
		PTR, unsigned long, int, unsigned long
	);
	int				(STDCALL *SetWindowTextA)(PTR, const char *);
	int				(STDCALL *GetWindowTextA)(PTR, char *, int);
	LET				(STDCALL *GetWindowLongPtrA)(PTR, int);
	LET				(STDCALL *SetWindowLongPtrA)(PTR, int, LET);
	unsigned long	(STDCALL *GetWindowLongA)(PTR, int);
	unsigned long	(STDCALL *SetWindowLongA)(PTR, int, unsigned long);
	int				(STDCALL *SetLayeredWindowAttributes)(
		PTR,
		unsigned long,
		unsigned char,
		unsigned long
	);
	PTR				(STDCALL *SetActiveWindow)(PTR);
	PTR				(STDCALL *GetActiveWindow)(void);
	PTR				(STDCALL *SetForegroundWindow)(PTR);
	PTR				(STDCALL *GetForegroundWindow)(void);
	PTR				(STDCALL *SetFocus)(PTR);
	PTR				(STDCALL *GetFocus)(void);
	int				(STDCALL *ShowWindowAsync)(PTR, int);
	int				(STDCALL *BringWindowToTop)(PTR);
	int				(STDCALL *GetMessageA)(
		PTR, PTR, unsigned int, unsigned int
	);
	int				(STDCALL *PeekMessageA)(
		PTR, PTR, unsigned int, unsigned int, unsigned int
	);
	int				(STDCALL *TranslateMessage)(const PTR);
	LET				(STDCALL *DispatchMessageA)(const PTR);
	void			(STDCALL *PostQuitMessage)(int);
	LET				(STDCALL *DefWindowProcA)(PTR, unsigned int, LET, LET);
	LET				(STDCALL *SendMessageA)(PTR, unsigned int, LET, LET);
	int				(STDCALL *PostMessageA)(PTR, unsigned int, LET, LET);
	int				(STDCALL *WaitMessage)(void);
	LET				(STDCALL *CallWindowProcA)(
		PTR, PTR, unsigned int, LET, LET
	);
	PTR				(STDCALL *GetDC)(PTR);
	PTR				(STDCALL *GetDCEx)(PTR, PTR, unsigned long);
	int				(STDCALL *ReleaseDC)(PTR, PTR);
	PTR				(STDCALL *BeginPaint)(PTR, PTR);
	int				(STDCALL *EndPaint)(PTR, const PTR);
	int				(STDCALL *InvalidateRect)(PTR, const PTR, int);
	int				(STDCALL *ValidateRect)(PTR, const PTR);
	PTR				(STDCALL *MonitorFromWindow)(PTR, unsigned long);
	PTR				(STDCALL *MonitorFromPoint)(LET, unsigned long);
	int				(STDCALL *GetMonitorInfoA)(PTR, PTR);
	int				(STDCALL *EnumDisplayMonitors)(PTR, const PTR, PTR, LET);
	int				(STDCALL *EnumDisplaySettingsA)(
		const char *, unsigned long, PTR
	);
	int				(STDCALL *SetProcessDPIAware)(void);
	PTR				(STDCALL *LoadCursorA)(PTR, const char *);
	PTR				(STDCALL *SetCursor)(PTR);
	PTR				(STDCALL *GetCursor)(void);
	int				(STDCALL *GetCursorPos)(PTR);
	int				(STDCALL *SetCursorPos)(int, int);
	int				(STDCALL *ShowCursor)(int);
	int				(STDCALL *ClipCursor)(const PTR);
	int				(STDCALL *ScreenToClient)(PTR, PTR);
	int				(STDCALL *ClientToScreen)(PTR, PTR);
	short			(STDCALL *GetKeyState)(int);
	short			(STDCALL *GetAsyncKeyState)(int);
	int				(STDCALL *GetKeyboardState)(PTR);
	unsigned int	(STDCALL *MapVirtualKeyA)(unsigned int, unsigned int);
	PTR				(STDCALL *MessageBoxA)(
		PTR, const char *, const char *, unsigned int
	);
	int				(STDCALL *SetWindowsHookExA)(int, PTR, PTR, unsigned long);
	int				(STDCALL *UnhookWindowsHookEx)(PTR);
	LET				(STDCALL *CallNextHookEx)(PTR, int, LET, LET);
	int				(STDCALL *OpenClipboard)(PTR);
	int				(STDCALL *CloseClipboard)(void);
	int				(STDCALL *EmptyClipboard)(void);
	PTR				(STDCALL *SetClipboardData)(unsigned int, PTR);
	PTR				(STDCALL *GetClipboardData)(unsigned int);
	int				(STDCALL *IsClipboardFormatAvailable)(unsigned int);
	PTR				(STDCALL *LoadIconA)(PTR, const char *);
	PTR				(STDCALL *DestroyIcon)(PTR);
	int				(STDCALL *GetSystemMetrics)(int);
	int				(STDCALL *SystemParametersInfoA)(
		unsigned int,
		unsigned int,
		PTR,
		unsigned int
	);
#else /* K&R */
	unsigned short	(STDCALL *RegisterClassExA)();
	int				(STDCALL *UnregisterClassA)();
	PTR				(STDCALL *CreateWindowExA)();
	int				(STDCALL *DestroyWindow)();
	int				(STDCALL *ShowWindow)();
	int				(STDCALL *UpdateWindow)();
	int				(STDCALL *CloseWindow)();
	int				(STDCALL *IsWindow)();
	int				(STDCALL *IsWindowVisible)();
	int				(STDCALL *IsWindowEnabled)();
	int				(STDCALL *EnableWindow)();
	int				(STDCALL *MoveWindow)();
	int				(STDCALL *SetWindowPos)();
	int				(STDCALL *GetWindowRect)();
	int				(STDCALL *GetClientRect)();
	int				(STDCALL *AdjustWindowRectEx)();
	int				(STDCALL *SetWindowTextA)();
	int				(STDCALL *GetWindowTextA)();
	LET				(STDCALL *GetWindowLongPtrA)();
	LET				(STDCALL *SetWindowLongPtrA)();
	unsigned long	(STDCALL *GetWindowLongA)();
	unsigned long	(STDCALL *SetWindowLongA)();
	int				(STDCALL *SetLayeredWindowAttributes)();
	PTR				(STDCALL *SetActiveWindow)();
	PTR				(STDCALL *GetActiveWindow)();
	PTR				(STDCALL *SetForegroundWindow)();
	PTR				(STDCALL *GetForegroundWindow)();
	PTR				(STDCALL *SetFocus)();
	PTR				(STDCALL *GetFocus)();
	int				(STDCALL *ShowWindowAsync)();
	int				(STDCALL *BringWindowToTop)();
	int				(STDCALL *GetMessageA)();
	int				(STDCALL *PeekMessageA)();
	int				(STDCALL *TranslateMessage)();
	LET				(STDCALL *DispatchMessageA)();
	void			(STDCALL *PostQuitMessage)();
	LET				(STDCALL *DefWindowProcA)();
	LET				(STDCALL *SendMessageA)();
	int				(STDCALL *PostMessageA)();
	int				(STDCALL *WaitMessage)();
	LET				(STDCALL *CallWindowProcA)();
	PTR				(STDCALL *GetDC)();
	PTR				(STDCALL *GetDCEx)();
	int				(STDCALL *ReleaseDC)();
	PTR				(STDCALL *BeginPaint)();
	int				(STDCALL *EndPaint)();
	int				(STDCALL *InvalidateRect)();
	int				(STDCALL *ValidateRect)();
	PTR				(STDCALL *MonitorFromWindow)();
	PTR				(STDCALL *MonitorFromPoint)();
	int				(STDCALL *GetMonitorInfoA)();
	int				(STDCALL *EnumDisplayMonitors)();
	int				(STDCALL *EnumDisplaySettingsA)();
	int				(STDCALL *SetProcessDPIAware)();
	PTR				(STDCALL *LoadCursorA)();
	PTR				(STDCALL *SetCursor)();
	PTR				(STDCALL *GetCursor)();
	int				(STDCALL *GetCursorPos)();
	int				(STDCALL *SetCursorPos)();
	int				(STDCALL *ShowCursor)();
	int				(STDCALL *ClipCursor)();
	int				(STDCALL *ScreenToClient)();
	int				(STDCALL *ClientToScreen)();
	short			(STDCALL *GetKeyState)();
	short			(STDCALL *GetAsyncKeyState)();
	int				(STDCALL *GetKeyboardState)();
	unsigned int	(STDCALL *MapVirtualKeyA)();
	PTR				(STDCALL *MessageBoxA)();
	int				(STDCALL *SetWindowsHookExA)();
	int				(STDCALL *UnhookWindowsHookEx)();
	LET				(STDCALL *CallNextHookEx)();
	int				(STDCALL *OpenClipboard)();
	int				(STDCALL *CloseClipboard)();
	int				(STDCALL *EmptyClipboard)();
	PTR				(STDCALL *SetClipboardData)();
	PTR				(STDCALL *GetClipboardData)();
	int				(STDCALL *IsClipboardFormatAvailable)();
	PTR				(STDCALL *LoadIconA)();
	PTR				(STDCALL *DestroyIcon)();
	int				(STDCALL *GetSystemMetrics)();
	int				(STDCALL *SystemParametersInfoA)();
#endif /* !KNR_STYLE */
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

#undef GLOBALCONSTRUCTOR__USER32
#define GLOBALCONSTRUCTOR__USER32 \
	do\
	{\
		USER32.SELF = KERNEL32.LoadLibraryA("USER32.DLL");\
		USER32.RegisterClassExA = \
			KERNEL32.GetProcAddress(USER32.SELF, "RegisterClassExA");\
		USER32.UnregisterClassA = \
			KERNEL32.GetProcAddress(USER32.SELF, "UnregisterClassA");\
		USER32.CreateWindowExA = \
			KERNEL32.GetProcAddress(USER32.SELF, "CreateWindowExA");\
		USER32.DestroyWindow = \
			KERNEL32.GetProcAddress(USER32.SELF, "DestroyWindow");\
		USER32.ShowWindow = \
			KERNEL32.GetProcAddress(USER32.SELF, "ShowWindow");\
		USER32.UpdateWindow = \
			KERNEL32.GetProcAddress(USER32.SELF, "UpdateWindow");\
		USER32.CloseWindow = \
			KERNEL32.GetProcAddress(USER32.SELF, "CloseWindow");\
		USER32.IsWindow = \
			KERNEL32.GetProcAddress(USER32.SELF, "IsWindow");\
		USER32.IsWindowVisible = \
			KERNEL32.GetProcAddress(USER32.SELF, "IsWindowVisible");\
		USER32.IsWindowEnabled = \
			KERNEL32.GetProcAddress(USER32.SELF, "IsWindowEnabled");\
		USER32.EnableWindow = \
			KERNEL32.GetProcAddress(USER32.SELF, "EnableWindow");\
		USER32.MoveWindow = \
			KERNEL32.GetProcAddress(USER32.SELF, "MoveWindow");\
		USER32.SetWindowPos = \
			KERNEL32.GetProcAddress(USER32.SELF, "SetWindowPos");\
		USER32.GetWindowRect = \
			KERNEL32.GetProcAddress(USER32.SELF, "GetWindowRect");\
		USER32.GetClientRect = \
			KERNEL32.GetProcAddress(USER32.SELF, "GetClientRect");\
		USER32.AdjustWindowRectEx = \
			KERNEL32.GetProcAddress(USER32.SELF, "AdjustWindowRectEx");\
		USER32.SetWindowTextA = \
			KERNEL32.GetProcAddress(USER32.SELF, "SetWindowTextA");\
		USER32.GetWindowTextA = \
			KERNEL32.GetProcAddress(USER32.SELF, "GetWindowTextA");\
		USER32.GetWindowLongPtrA = \
			KERNEL32.GetProcAddress(USER32.SELF, "GetWindowLongPtrA");\
		USER32.SetWindowLongPtrA = \
			KERNEL32.GetProcAddress(USER32.SELF, "SetWindowLongPtrA");\
		USER32.GetWindowLongA = \
			KERNEL32.GetProcAddress(USER32.SELF, "GetWindowLongA");\
		USER32.SetWindowLongA = \
			KERNEL32.GetProcAddress(USER32.SELF, "SetWindowLongA");\
		USER32.SetLayeredWindowAttributes = \
			KERNEL32.GetProcAddress(USER32.SELF, "SetLayeredWindowAttributes");\
		USER32.SetActiveWindow = \
			KERNEL32.GetProcAddress(USER32.SELF, "SetActiveWindow");\
		USER32.GetActiveWindow = \
			KERNEL32.GetProcAddress(USER32.SELF, "GetActiveWindow");\
		USER32.SetForegroundWindow = \
			KERNEL32.GetProcAddress(USER32.SELF, "SetForegroundWindow");\
		USER32.GetForegroundWindow = \
			KERNEL32.GetProcAddress(USER32.SELF, "GetForegroundWindow");\
		USER32.SetFocus = \
			KERNEL32.GetProcAddress(USER32.SELF, "SetFocus");\
		USER32.GetFocus = \
			KERNEL32.GetProcAddress(USER32.SELF, "GetFocus");\
		USER32.ShowWindowAsync = \
			KERNEL32.GetProcAddress(USER32.SELF, "ShowWindowAsync");\
		USER32.BringWindowToTop = \
			KERNEL32.GetProcAddress(USER32.SELF, "BringWindowToTop");\
		USER32.GetMessageA = \
			KERNEL32.GetProcAddress(USER32.SELF, "GetMessageA");\
		USER32.PeekMessageA = \
			KERNEL32.GetProcAddress(USER32.SELF, "PeekMessageA");\
		USER32.TranslateMessage = \
			KERNEL32.GetProcAddress(USER32.SELF, "TranslateMessage");\
		USER32.DispatchMessageA = \
			KERNEL32.GetProcAddress(USER32.SELF, "DispatchMessageA");\
		USER32.PostQuitMessage = \
			KERNEL32.GetProcAddress(USER32.SELF, "PostQuitMessage");\
		USER32.DefWindowProcA = \
			KERNEL32.GetProcAddress(USER32.SELF, "DefWindowProcA");\
		USER32.SendMessageA = \
			KERNEL32.GetProcAddress(USER32.SELF, "SendMessageA");\
		USER32.PostMessageA = \
			KERNEL32.GetProcAddress(USER32.SELF, "PostMessageA");\
		USER32.WaitMessage = \
			KERNEL32.GetProcAddress(USER32.SELF, "WaitMessage");\
		USER32.CallWindowProcA = \
			KERNEL32.GetProcAddress(USER32.SELF, "CallWindowProcA");\
		USER32.GetDC = \
			KERNEL32.GetProcAddress(USER32.SELF, "GetDC");\
		USER32.GetDCEx = \
			KERNEL32.GetProcAddress(USER32.SELF, "GetDCEx");\
		USER32.ReleaseDC = \
			KERNEL32.GetProcAddress(USER32.SELF, "ReleaseDC");\
		USER32.BeginPaint = \
			KERNEL32.GetProcAddress(USER32.SELF, "BeginPaint");\
		USER32.EndPaint = \
			KERNEL32.GetProcAddress(USER32.SELF, "EndPaint");\
		USER32.InvalidateRect = \
			KERNEL32.GetProcAddress(USER32.SELF, "InvalidateRect");\
		USER32.ValidateRect = \
			KERNEL32.GetProcAddress(USER32.SELF, "ValidateRect");\
		USER32.MonitorFromWindow = \
			KERNEL32.GetProcAddress(USER32.SELF, "MonitorFromWindow");\
		USER32.MonitorFromPoint = \
			KERNEL32.GetProcAddress(USER32.SELF, "MonitorFromPoint");\
		USER32.GetMonitorInfoA = \
			KERNEL32.GetProcAddress(USER32.SELF, "GetMonitorInfoA");\
		USER32.EnumDisplayMonitors = \
			KERNEL32.GetProcAddress(USER32.SELF, "EnumDisplayMonitors");\
		USER32.EnumDisplaySettingsA = \
			KERNEL32.GetProcAddress(USER32.SELF, "EnumDisplaySettingsA");\
		USER32.SetProcessDPIAware = \
			KERNEL32.GetProcAddress(USER32.SELF, "SetProcessDPIAware");\
		USER32.LoadCursorA = \
			KERNEL32.GetProcAddress(USER32.SELF, "LoadCursorA");\
		USER32.SetCursor = \
			KERNEL32.GetProcAddress(USER32.SELF, "SetCursor");\
		USER32.GetCursor = \
			KERNEL32.GetProcAddress(USER32.SELF, "GetCursor");\
		USER32.GetCursorPos = \
			KERNEL32.GetProcAddress(USER32.SELF, "GetCursorPos");\
		USER32.SetCursorPos = \
			KERNEL32.GetProcAddress(USER32.SELF, "SetCursorPos");\
		USER32.ShowCursor = \
			KERNEL32.GetProcAddress(USER32.SELF, "ShowCursor");\
		USER32.ClipCursor = \
			KERNEL32.GetProcAddress(USER32.SELF, "ClipCursor");\
		USER32.ScreenToClient = \
			KERNEL32.GetProcAddress(USER32.SELF, "ScreenToClient");\
		USER32.ClientToScreen = \
			KERNEL32.GetProcAddress(USER32.SELF, "ClientToScreen");\
		USER32.GetKeyState = \
			KERNEL32.GetProcAddress(USER32.SELF, "GetKeyState");\
		USER32.GetAsyncKeyState = \
			KERNEL32.GetProcAddress(USER32.SELF, "GetAsyncKeyState");\
		USER32.GetKeyboardState = \
			KERNEL32.GetProcAddress(USER32.SELF, "GetKeyboardState");\
		USER32.MapVirtualKeyA = \
			KERNEL32.GetProcAddress(USER32.SELF, "MapVirtualKeyA");\
		USER32.MessageBoxA = \
			KERNEL32.GetProcAddress(USER32.SELF, "MessageBoxA");\
		USER32.SetWindowsHookExA = \
			KERNEL32.GetProcAddress(USER32.SELF, "SetWindowsHookExA");\
		USER32.UnhookWindowsHookEx = \
			KERNEL32.GetProcAddress(USER32.SELF, "UnhookWindowsHookEx");\
		USER32.CallNextHookEx = \
			KERNEL32.GetProcAddress(USER32.SELF, "CallNextHookEx");\
		USER32.OpenClipboard = \
			KERNEL32.GetProcAddress(USER32.SELF, "OpenClipboard");\
		USER32.CloseClipboard = \
			KERNEL32.GetProcAddress(USER32.SELF, "CloseClipboard");\
		USER32.EmptyClipboard = \
			KERNEL32.GetProcAddress(USER32.SELF, "EmptyClipboard");\
		USER32.SetClipboardData = \
			KERNEL32.GetProcAddress(USER32.SELF, "SetClipboardData");\
		USER32.GetClipboardData = \
			KERNEL32.GetProcAddress(USER32.SELF, "GetClipboardData");\
		USER32.IsClipboardFormatAvailable = \
			KERNEL32.GetProcAddress(USER32.SELF, "IsClipboardFormatAvailable");\
		USER32.LoadIconA = \
			KERNEL32.GetProcAddress(USER32.SELF, "LoadIconA");\
		USER32.DestroyIcon = \
			KERNEL32.GetProcAddress(USER32.SELF, "DestroyIcon");\
		USER32.GetSystemMetrics = \
			KERNEL32.GetProcAddress(USER32.SELF, "GetSystemMetrics");\
		USER32.SystemParametersInfoA = \
			KERNEL32.GetProcAddress(USER32.SELF, "SystemParametersInfoA");\
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

#else /* !CMT_SETUP */

/* [v] %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% /!\ IMPORTANT /!\ */
#undef GLOBALLINKER__USER32
#define GLOBALLINKER__USER32 LOCALLINKER__USER32
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
