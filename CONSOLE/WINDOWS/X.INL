#ifndef CONSOLE_HPP
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_HPP */

#define LOCALMACRO__CMT_CONSOLE__X_CONTENT \
	do\
	{\
		PTR				__CMT_WIN__;\
		struct S_RECT	__CMT_BOX__;\
		BOOLEAN			__CMT_WT__;\
		BOOLEAN			__CMT_U32__;\
		\
		if (!KERNEL32.GetConsoleWindow)\
		{\
			THIS->warning(\
				"console.x() - KERNEL32.GetConsoleWindow was never "\
				"resolved\n"\
			);\
			break ;\
		}\
		\
		LOCALMACRO__CMT_CONSOLE__NEED_USER32(__CMT_U32__)\
		\
		if (!__CMT_U32__)\
		{\
			THIS->warning(\
				"console.x() - USER32 could not be connected\n"\
			);\
			break ;\
		}\
		\
		LOCALMACRO__CMT_CONSOLE__IS_TERMINAL(__CMT_WT__)\
		\
		if (__CMT_WT__)\
		{\
			THIS->warning(\
				"console.x() - Windows Terminal owns the window, "\
				"position cannot be set (use conhost.exe for this)\n"\
			);\
			break ;\
		}\
		\
		__CMT_WIN__ = KERNEL32.GetConsoleWindow();\
		\
		if (!__CMT_WIN__)\
		{\
			THIS->warning("console.x() - no console window\n");\
			break ;\
		}\
		\
		if (!USER32.GetWindowRect(__CMT_WIN__, &__CMT_BOX__))\
		{\
			THIS->warning("console.x() - GetWindowRect failed\n");\
			break ;\
		}\
		\
		USER32.MoveWindow(\
			__CMT_WIN__,\
			(int)(X_VALUE),\
			(int)__CMT_BOX__.TOP,\
			(int)(__CMT_BOX__.RIGHT - __CMT_BOX__.LEFT),\
			(int)(__CMT_BOX__.BOTTOM - __CMT_BOX__.TOP),\
			1\
		);\
		\
		if (USER32.GetWindowRect(__CMT_WIN__, &__CMT_BOX__))\
		{\
			OBJECT__INITIALIZE (THIS->get.x, int) = (int)__CMT_BOX__.LEFT;\
			OBJECT__INITIALIZE (THIS->get.y, int) = (int)__CMT_BOX__.TOP;\
		}\
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
