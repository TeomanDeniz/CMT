#ifndef CONSOLE_HPP
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_HPP */

/******************************************************************************\
|* MOVING THE CONSOLE WINDOW.                                                 *|
|*                                                                            *|
|* TWO THINGS WERE WRONG BEFORE.                                              *|
|*                                                                            *|
|* FIRST, THIS REFUSED TO EVEN TRY WHEN WT_SESSION WAS SET. THAT WAS MY       *|
|* ASSUMPTION, NOT A MEASUREMENT, AND IT WAS WRONG: MOVEWINDOW DOES REACH THE *|
|* WINDOW UNDER WINDOWS TERMINAL TOO. THE RULE NOW IS SIMPLY TO TRY AND TO    *|
|* REPORT A FAILURE, NEVER TO PREDICT ONE.                                    *|
|*                                                                            *|
|* SECOND, POSITION WAS BEING APPLIED WITH MOVEWINDOW, WHICH ALSO TAKES A     *|
|* SIZE. THAT SIZE CAME FROM GETWINDOWRECT, AND UNDER A PSEUDO CONSOLE        *|
|* GETWINDOWRECT RETURNS SUCCESS WITH AN ALL ZERO RECTANGLE, SO THE WINDOW    *|
|* WAS BEING TOLD TO BECOME ZERO BY ZERO. SETWINDOWPOS WITH SWP_NOSIZE ASKS   *|
|* ONLY FOR A POSITION AND LEAVES THE SIZE ALONE, SO THE RECTANGLE NEVER HAS  *|
|* TO BE TRUSTED.                                                             *|
\******************************************************************************/

#define LOCALMACRO__CMT_CONSOLE__SWP_NOSIZE (unsigned)0X0001
#define LOCALMACRO__CMT_CONSOLE__SWP_NOZORDER (unsigned)0X0004
#define LOCALMACRO__CMT_CONSOLE__SWP_NOACTIVATE (unsigned)0X0010

#define LOCALMACRO__CMT_CONSOLE__NEED_USER32(RESULT) \
	do\
	{\
		(RESULT) = (BOOLEAN)(USER32.SetWindowPos != 0);\
	}\
	while (0);

#define LOCALMACRO__CMT_CONSOLE__WINDOW_ORIGIN(WINDOW, AT_X, AT_Y) \
	do\
	{\
		struct S_RECT	__CMT_BOX__;\
		\
		(AT_X) = THIS->get.x;\
		(AT_Y) = THIS->get.y;\
		\
		if (!USER32.GetWindowRect)\
			break ;\
		\
		if (!USER32.GetWindowRect((WINDOW), &__CMT_BOX__))\
			break ;\
		\
		if (\
			(__CMT_BOX__.RIGHT <= __CMT_BOX__.LEFT) ||\
			(__CMT_BOX__.BOTTOM <= __CMT_BOX__.TOP)\
		)\
			break ;\
		\
		(AT_X) = (int)__CMT_BOX__.LEFT;\
		(AT_Y) = (int)__CMT_BOX__.TOP;\
	}\
	while (0);

#define LOCALMACRO__CMT_CONSOLE__PLACE(NAME, TO_X, TO_Y) \
	do\
	{\
		PTR		__CMT_WIN__;\
		BOOLEAN	__CMT_U32__;\
		int		__CMT_X__;\
		int		__CMT_Y__;\
		\
		if (!KERNEL32.GetConsoleWindow)\
		{\
			THIS->warning(\
				"console." NAME "() - KERNEL32.GetConsoleWindow was never "\
				"resolved\n"\
			);\
			break ;\
		}\
		\
		__CMT_WIN__ = KERNEL32.GetConsoleWindow();\
		\
		if (!__CMT_WIN__)\
		{\
			THIS->warning("console." NAME "() - no console window\n");\
			break ;\
		}\
		\
		LOCALMACRO__CMT_CONSOLE__NEED_USER32(__CMT_U32__)\
		\
		if (!__CMT_U32__)\
		{\
			THIS->warning(\
				"console." NAME "() - USER32 could not be connected\n"\
			);\
			break ;\
		}\
		\
		LOCALMACRO__CMT_CONSOLE__WINDOW_ORIGIN(\
			__CMT_WIN__, __CMT_X__, __CMT_Y__\
		)\
		\
		if (\
			!USER32.SetWindowPos(\
				__CMT_WIN__, (PTR)0, (TO_X), (TO_Y), 0, 0,\
				LOCALMACRO__CMT_CONSOLE__SWP_NOSIZE | \
					LOCALMACRO__CMT_CONSOLE__SWP_NOZORDER | \
					LOCALMACRO__CMT_CONSOLE__SWP_NOACTIVATE\
			)\
		)\
		{\
			THIS->warning("console." NAME "() - SetWindowPos failed\n");\
			break ;\
		}\
		\
		OBJECT__INITIALIZE (THIS->get.x, int) = (TO_X);\
		OBJECT__INITIALIZE (THIS->get.y, int) = (TO_Y);\
		LOCALMACRO__CMT_CONSOLE__WINDOW_ORIGIN(\
			__CMT_WIN__, __CMT_X__, __CMT_Y__\
		)\
		OBJECT__INITIALIZE (THIS->get.x, int) = __CMT_X__;\
		OBJECT__INITIALIZE (THIS->get.y, int) = __CMT_Y__;\
	}\
	while (0);

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
