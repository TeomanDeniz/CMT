/**@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@**\
|**                              _    _ _______ ____                         **|
|**                         /\  | |  | |__   __/ __ \                        **|
|**                        /  \ | |  | |  | | | |  | |                       **|
|**                       / /\ \| |  | |  | | | |  | |                       **|
|**                      / ____ \ |__| |  | | | |__| |                       **|
|**  _____  ______  ____/_/____\_\____/  _|_| _\____/_ _______ ____  _____   **|
|** |  __ \|  ____|/ ____|__   __|  __ \| |  | |/ ____|__   __/ __ \|  __ \  **|
|** | |  | | |__  | (___    | |  | |__) | |  | | |       | | | |  | | |__) | **|
|** | |  | |  __|  \___ \   | |  |  _  /| |  | | |       | | | |  | |  _  /  **|
|** | |__| | |____ ____) |  | |  | | \ \| |__| | |____   | | | |__| | | \ \  **|
|** |_____/|______|_____/   |_|  |_|  \_\\____/ \_____|  |_|  \____/|_|  \_\ **|
|**                                                                          **|
|**@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@**|
|**@                                                                        @**|
|**@  AUTO-DESTRUCTOR: RUNS REGISTERED INITIALIZATION FUNCTIONS AFTER MAIN  @**|
|**@      ENSURING REQUIRED CLOSING IS DONE AFTER APLICATION IS CLOSED      @**|
|**@                                                                        @**|
\**@@[v]*[v]*[v]*[v]*[v]*[v]*[v]*[v]*[v][v]*[v]*[v]*[v]*[v]*[v]*[v]*[v]*[v]@@**/

/* **************************** [v] INCLUDES [v] **************************** */
#include "../ATTRIBUTES/STDCALL.H"
/******* """""""""""""""""""""""""
 * #define STDCALL
 */
#include "../ENVIRONMENTS/KNR_STYLE.H"
/******* """""""""""""""""""""""""""""
 * #define KNR_STYLE
 */
/* **************************** [^] INCLUDES [^] **************************** */

/* ***************** [v] FILL UNDEFINED GLOBAL LINKERS [v] ****************** */
#ifndef CMT_AUTO_LINKER
#define CMT_AUTO_LINKER __CMT_JAILBREAK_VARIABLE__;
#endif /* !CMT_AUTO_LINKER */

#ifndef CMT_NO_SSP_POP /* IN OBJECT.H */
#define CMT_NO_SSP_POP
#endif /* !CMT_NO_SSP_POP */

#ifndef CMT_AUTO_CONSTRUCTOR
#define CMT_AUTO_CONSTRUCTOR
#endif /* CMT_AUTO_CONSTRUCTOR */

#ifndef GLOBALDESTRUCTOR__TRY_CATCH
#define GLOBALDESTRUCTOR__TRY_CATCH
#endif /* !GLOBALDESTRUCTOR__TRY_CATCH */
/* ***************** [^] FILL UNDEFINED GLOBAL LINKERS [^] ****************** */

/* ******************* [v] CONNECT DESTRUCTOR EVENTS [v] ******************** */
#undef CMT_AUTO_DESTRUCTOR
#define CMT_AUTO_DESTRUCTOR \
	GLOBALDESTRUCTOR__TRY_CATCH
/* ******************* [^] CONNECT DESTRUCTOR EVENTS [^] ******************** */

#ifndef KNR_STYLE /* STANDARD C */
#define LOCALMACRO__MAIN CMT_NO_SSP_POP int main(int ARGC, char **ARGV)
#define LOCALMACRO__WINMAIN \
	CMT_NO_SSP_POP \
	int	\
		STDCALL WinMain(\
		void *HANDLE_INSTANCE, \
		void *HANDLE_PREVIOUS_INSTANCE, \
		char *CMD_LINE, \
		int CMD_SHOW\
	)
#else /* K&R */
#define LOCALMACRO__MAIN \
	CMT_NO_SSP_POP \
	int\
		main(ARGC, ARGV)\
		int		ARGC;\
		char	**ARGV;
#define LOCALMACRO__WINMAIN \
	CMT_NO_SSP_POP \
	int	\
		STDCALL WinMain(\
		HANDLE_INSTANCE, \
		HANDLE_PREVIOUS_INSTANCE, \
		CMD_LINE, \
		CMD_SHOW\
	)\
	char	*HANDLE_INSTANCE;\
	char	*HANDLE_PREVIOUS_INSTANCE;\
	char	*CMD_LINE;\
	int		CMD_SHOW;
#endif /* !KNR_STYLE */

#ifdef CMT_SETUP
#undef CMT_SETUP
#ifndef KNR_STYLE /* STANDARD C */
#define CMT_SETUP \
	void\
		__CMT_CONSTRUCTOR__(void)\
	{\
		CMT_AUTO_CONSTRUCTOR\
	}
	\
	void\
		__CMT_DESTRUCTOR__(void)\
	{\
		CMT_AUTO_DESTRUCTOR\
	}
#else /* K&R */
#define CMT_SETUP \
	int\
		__CMT_CONSTRUCTOR__()\
	{\
		CMT_AUTO_CONSTRUCTOR\
	}
	\
	int\
		__CMT_DESTRUCTOR__()\
	{\
		CMT_AUTO_DESTRUCTOR\
	}
#endif /* !KNR_STYLE */
#else /* !CMT_SETUP */
#ifdef CMT_EXTERN
#ifndef KNR_STYLE /* STANDARD C */
extern void	__CMT_CONSTRUCTOR__(void);
extern void	__CMT_DESTRUCTOR__(void);
#else /* K&R */
extern int	__CMT_CONSTRUCTOR__();
extern int	__CMT_DESTRUCTOR__();
#endif /* !KNR_STYLE */

#undef main
#undef WinMain

#ifndef KNR_STYLE /* STANDARD C */
#define main \
	CMT_AUTO_LINKER\
	LOCALMACRO__MAIN\
	{\
		__CMT_CONSTRUCTOR__()\
		\
		/* TODO: HANDLE ENV */\
		extern int	__MAIN__();\
		\
		int	RESULT = ((int (*)(int, char **))(void *)__MAIN__)(ARGC, ARGV);\
		\
		__CMT_DESTRUCTOR__()\
		return (RESULT);\
	}\
	int	__MAIN__
#define WinMain \
	CMT_AUTO_LINKER\
	LOCALMACRO__WINMAIN\
	{\
		__CMT_CONSTRUCTOR__()\
		\
		extern int	__WIN_MAIN__();\
		\
		int	RESULT = \
		(\
			((int (*)(void *, void *, char *, int))(void *)__WIN_MAIN__)(\
				HANDLE_INSTANCE, HANDLE_PREVIOUS_INSTANCE, CMD_LINE, CMD_SHOW\
			)\
		);\
		\
		__CMT_DESTRUCTOR__()\
		return (RESULT);\
	}\
	int __WIN_MAIN__
#else /* K&R */
#define main \
	CMT_AUTO_LINKER\
	LOCALMACRO__MAIN\
	{\
		__CMT_CONSTRUCTOR__()\
		\
		/* TODO: HANDLE ENV */\
		extern int	__MAIN__();\
		\
		int	RESULT = __MAIN__(ARGC, ARGV);\
		\
		__CMT_DESTRUCTOR__()\
		return (RESULT);\
	}\
	int	__MAIN__
#define WinMain \
	CMT_AUTO_LINKER\
	LOCALMACRO__WINMAIN\
	{\
		__CMT_CONSTRUCTOR__()\
		\
		extern int	__WIN_MAIN__();\
		\
		int	RESULT = __WIN_MAIN__(\
			HANDLE_INSTANCE, HANDLE_PREVIOUS_INSTANCE, CMD_LINE, CMD_SHOW\
		);\
		\
		__CMT_DESTRUCTOR__()\
		return (RESULT);\
	}\
	int __WIN_MAIN__
#endif /* !KNR_STYLE */
#else /* !CMT_EXTERN */
#undef main
#undef WinMain

#ifndef KNR_STYLE /* STANDARD C */
#define main \
	CMT_AUTO_LINKER\
	LOCALMACRO__MAIN\
	{\
		CMT_AUTO_CONSTRUCTOR\
		\
		/* TODO: HANDLE ENV */\
		extern int	__MAIN__();\
		\
		int	RESULT = ((int (*)(int, char **))(void *)__MAIN__)(ARGC, ARGV);\
		\
		CMT_AUTO_DESTRUCTOR\
		return (RESULT);\
	}\
	int	__MAIN__
#define WinMain \
	CMT_AUTO_LINKER\
	LOCALMACRO__WINMAIN\
	{\
		CMT_AUTO_CONSTRUCTOR\
		\
		extern int	__WIN_MAIN__();\
		\
		int	RESULT = \
		(\
			((int (*)(void *, void *, char *, int))(void *)__WIN_MAIN__)(\
				HANDLE_INSTANCE, HANDLE_PREVIOUS_INSTANCE, CMD_LINE, CMD_SHOW\
			)\
		);\
		\
		CMT_AUTO_DESTRUCTOR\
		return (RESULT);\
	}\
	int __WIN_MAIN__
#else /* K&R */
#define main \
	CMT_AUTO_LINKER\
	LOCALMACRO__MAIN\
	{\
		CMT_AUTO_CONSTRUCTOR\
		\
		/* TODO: HANDLE ENV */\
		extern int	__MAIN__();\
		\
		return (__MAIN__(ARGC, ARGV));\
	}\
	int	__MAIN__
#define WinMain \
	CMT_AUTO_LINKER\
	LOCALMACRO__WINMAIN\
	{\
		CMT_AUTO_CONSTRUCTOR\
		\
		extern int	__WIN_MAIN__();\
		return (\
			__WIN_MAIN__(\
				HANDLE_INSTANCE, HANDLE_PREVIOUS_INSTANCE, CMD_LINE, CMD_SHOW\
			)\
		);\
	}\
	int __WIN_MAIN__
#endif /* !KNR_STYLE */
#endif /* CMT_EXTERN */
#endif /* CMT_SETUP */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
