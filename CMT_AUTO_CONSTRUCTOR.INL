/**@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@**\
|**@                                                                        @**|
|**@                         ##    #    # ##### .####.                      @**|
|**@                        #''#   #    #   #   ##  ##                      @**|
|**@                       ######  #.  .#   #   ##  ##                      @**|
|**@                      ##    ## '####'   #   '####'                      @**|
|**@                                                                        @**|
|**@  .###. .####. ##  # .####. ##### ####. #    # .###. ##### .####. ####. @**|
|**@  ##    ##  ## #'# # #....    #   #  .# #    # ##      #   ##  ## #  .# @**|
|**@  ##    ##  ## # '##  ''''#   #   ####' #.  .# ##      #   ##  ## ####' @**|
|**@  '###' '####' #  '# '####'   #   #  '# '####' '###'   #   '####' #  '# @**|
|**@                                                                        @**|
|**@ AUTO-CONSTRUCTOR: RUNS REGISTERED INITIALIZATION FUNCTIONS BEFORE MAIN @**|
|**@       ENSURING REQUIRED SETUP IS READY BEFORE USER CODE EXECUTES       @**|
|**@                                                                        @**|
\**@@[v]*[v]*[v]*[v]*[v]*[v]*[v]*[v]*[v][v]*[v]*[v]*[v]*[v]*[v]*[v]*[v]*[v]@@**/

/* **************************** [v] INCLUDES [v] **************************** */
#include "ATTRIBUTES/STDCALL.H"
/******* """"""""""""""""""""""
 * #define STDCALL
 */
#include "ENVIRONMENTS/KNR_STYLE.H"
/******* """"""""""""""""""""""""""
 * #define STDCALL
 */
/* **************************** [^] INCLUDES [^] **************************** */

/* ***************** [v] FILL UNDEFINED GLOBAL LINKERS [v] ****************** */
#ifndef CMT_AUTO_LINKER
#define CMT_AUTO_LINKER __CMT_JAILBREAK_VARIABLE__;
#endif /* !CMT_AUTO_LINKER */

#ifndef GLOBALCONSTRUCTOR__MIDR
#define GLOBALCONSTRUCTOR__MIDR
#endif /* !GLOBALLINKER__MIDR */

#ifndef GLOBALCONSTRUCTOR__X17
#define GLOBALCONSTRUCTOR__X17
#endif /* !GLOBALCONSTRUCTOR__X17 */

#ifndef GLOBALCONSTRUCTOR__CPUID
#define GLOBALCONSTRUCTOR__CPUID
#endif /* !GLOBALCONSTRUCTOR__CPUID */

#ifndef GLOBALCONSTRUCTOR__RAX
#define GLOBALCONSTRUCTOR__RAX
#endif /* !GLOBALCONSTRUCTOR__RAX */

#ifndef GLOBALCONSTRUCTOR__MFSPR_287
#define GLOBALCONSTRUCTOR__MFSPR_287
#endif /* !GLOBALCONSTRUCTOR__MFSPR_287 */

#ifndef GLOBALCONSTRUCTOR__CPU
#define GLOBALCONSTRUCTOR__CPU
#endif /* !GLOBALCONSTRUCTOR__CPU */

#ifndef GLOBALCONSTRUCTOR__PEB_LOADER
#define GLOBALCONSTRUCTOR__PEB_LOADER
#endif /* !GLOBALCONSTRUCTOR__PEB_LOADER */

#ifndef GLOBALCONSTRUCTOR__KERNEL32
#define GLOBALCONSTRUCTOR__KERNEL32
#endif /* !GLOBALCONSTRUCTOR__KERNEL32 */

#ifndef GLOBALCONSTRUCTOR__THREAD
#define GLOBALCONSTRUCTOR__THREAD
#endif /* !GLOBALCONSTRUCTOR__THREAD */
/* ***************** [^] FILL UNDEFINED GLOBAL LINKERS [^] ****************** */

/* ************* [v] CONNECT GLOBAL LINKERS AND DEFINE MAIN [v] ************* */
#undef CMT_AUTO_CONSTRUCTOR
#define CMT_AUTO_CONSTRUCTOR \
	GLOBALCONSTRUCTOR__PEB_LOADER \
	GLOBALCONSTRUCTOR__KERNEL32 \
	GLOBALCONSTRUCTOR__MIDR \
	GLOBALCONSTRUCTOR__X17 \
	GLOBALCONSTRUCTOR__CPUID \
	GLOBALCONSTRUCTOR__RAX \
	GLOBALCONSTRUCTOR__MFSPR_287 \
	GLOBALCONSTRUCTOR__CPU \
	GLOBALCONSTRUCTOR__THREAD
/* ************* [^] CONNECT GLOBAL LINKERS AND DEFINE MAIN [^] ************* */

#ifndef KNR_STYLE /* STANDARD C */
#define LOCALMACRO__MAIN int main(int ARGC, char **ARGV)
#define LOCALMACRO__WINMAIN \
	int	\
		STDCALL WinMain(\
		void *HANDLE_INSTANCE, \
		void *HANDLE_PREVIOUS_INSTANCE, \
		char *CMD_LINE, \
		int CMD_SHOW\
	)
#else /* K&R */
#define LOCALMACRO__MAIN \
	int\
		main(ARGC, ARGV)\
		int		ARGC;\
		char	**ARGV;
#define LOCALMACRO__WINMAIN \
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
		__SETUP__(void)\
	{\
		CMT_AUTO_CONSTRUCTOR\
	}
#else /* K&R */
#define CMT_SETUP \
	int\
		__SETUP__()\
	{\
		CMT_AUTO_CONSTRUCTOR\
	}
#endif /* !KNR_STYLE */
#else /* !CMT_SETUP */
#ifdef CMT_EXTERN

#ifndef KNR_STYLE /* STANDARD C */
extern void	__SETUP__(void);
#else /* K&R */
extern int	__SETUP__();
#endif /* !KNR_STYLE */

#undef main
#define main \
	CMT_AUTO_LINKER\
	LOCALMACRO__MAIN\
	{\
		__SETUP__();\
		\
		extern int	__MAIN__();\
		/* TODO: HANDLE ENV */\
		return (((int (*)(int, char **))__MAIN__)(ARGC, ARGV));\
	}\
	int	__MAIN__
#undef WinMain
#define WinMain \
	CMT_AUTO_LINKER\
	LOCALMACRO__WINMAIN\
	{\
		__SETUP__();\
		\
		extern int	__WIN_MAIN__();\
		return (\
			(\
				(int (*)(void *, void *, char *, int))\
				__WIN_MAIN__\
			)(HANDLE_INSTANCE, HANDLE_PREVIOUS_INSTANCE, CMD_LINE, CMD_SHOW));\
	}\
	int __WIN_MAIN__
#else /* !CMT_EXTERN */
#undef main
#define main \
	CMT_AUTO_LINKER\
	LOCALMACRO__MAIN\
	{\
		CMT_AUTO_CONSTRUCTOR\
		\
		extern int	__MAIN__();\
		/* TODO: HANDLE ENV */\
		return (((int (*)(int, char **))__MAIN__)(ARGC, ARGV));\
	}\
	int	__MAIN__
#undef WinMain
#define WinMain \
	CMT_AUTO_LINKER\
	LOCALMACRO__WINMAIN\
	{\
		CMT_AUTO_CONSTRUCTOR\
		\
		extern int	__WIN_MAIN__();\
		return (\
			(\
				(int (*)(void *, void *, char *, int))\
				__WIN_MAIN__\
			)(HANDLE_INSTANCE, HANDLE_PREVIOUS_INSTANCE, CMD_LINE, CMD_SHOW));\
	}\
	int __WIN_MAIN__
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
