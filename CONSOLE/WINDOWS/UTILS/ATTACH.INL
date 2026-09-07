#ifndef CONSOLE_HPP
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_HPP */

/******************************************************************************\
|* A PROCESS MAY BE ATTACHED TO AT MOST ONE CONSOLE. THAT IS A HARD WINDOWS   *|
|* RULE, NOT A LIMITATION OF THIS MODULE: ALLOCCONSOLE FAILS WITH             *|
|* ERROR_ACCESS_DENIED WHILE A CONSOLE IS ALREADY ATTACHED, AND THERE IS NO   *|
|* CALL THAT GRANTS A SECOND ONE. SO:                                         *|
|*                                                                            *|
|*   NAMESPACE CONSOLE   ATTACH TO THE PARENT'S CONSOLE, NEVER CREATE ONE.    *|
|*                       NO CONSOLE -> _ACTIVE IS FALSE AND EVERY MEMBER IS   *|
|*                       A QUIET NO-OP.                                       *|
|*                                                                            *|
|*   new (CMT_CONSOLE,)  CREATE ONE IF THE PROCESS HAS NONE, WHICH IS THE     *|
|*                       -MWINDOWS CASE YOU ARE AFTER. IF THE PROCESS ALREADY *|
|*                       HAS A CONSOLE THE NEW OBJECT SHARES IT; IT CANNOT    *|
|*                       GET A WINDOW OF ITS OWN.                             *|
|*                                                                            *|
|* THE TWO PATHS ARE TOLD APART BY ADDRESS: THE NAMESPACE OBJECT IS THE       *|
|* GLOBAL CONSOLE, ANYTHING ELSE CAME FROM NEW.                               *|
\******************************************************************************/

#define LOCALMACRO__CMT_CONSOLE__ERROR_ACCESS_DENIED ((unsigned long)5)
#define LOCALMACRO__CMT_CONSOLE__ATTACH_PARENT_PROCESS \
	((unsigned long)0XFFFFFFFF)
#define LOCALMACRO__CMT_CONSOLE__GENERIC_READ ((unsigned long)0X80000000)
#define LOCALMACRO__CMT_CONSOLE__GENERIC_WRITE ((unsigned long)0X40000000)
#define LOCALMACRO__CMT_CONSOLE__FILE_SHARE_READ ((unsigned long)0X00000001)
#define LOCALMACRO__CMT_CONSOLE__FILE_SHARE_WRITE ((unsigned long)0X00000002)
#define LOCALMACRO__CMT_CONSOLE__OPEN_EXISTING ((unsigned long)3)
#define LOCALMACRO__CMT_CONSOLE__INVALID_HANDLE ((PTR)(-1))
#define LOCALMACRO__CMT_CONSOLE__STD_OUTPUT ((unsigned long)0XFFFFFFF5)
#define LOCALMACRO__CMT_CONSOLE__STD_INPUT ((unsigned long)0XFFFFFFF6)
#define LOCALMACRO__CMT_CONSOLE__VT_OUTPUT ((unsigned long)0X0004)

#define LOCALMACRO__CMT_CONSOLE__VALID(HANDLE) \
	((HANDLE) && ((HANDLE) != LOCALMACRO__CMT_CONSOLE__INVALID_HANDLE))

#define LOCALMACRO__CMT_CONSOLE__REOPEN \
	do\
	{\
		if (!KERNEL32.CreateFileA)\
			break ;\
		\
		THIS->_OUT_HANDLE = KERNEL32.CreateFileA(\
			"CONOUT$",\
			LOCALMACRO__CMT_CONSOLE__GENERIC_READ |\
				LOCALMACRO__CMT_CONSOLE__GENERIC_WRITE,\
			LOCALMACRO__CMT_CONSOLE__FILE_SHARE_READ |\
				LOCALMACRO__CMT_CONSOLE__FILE_SHARE_WRITE,\
			(PTR)0, LOCALMACRO__CMT_CONSOLE__OPEN_EXISTING, \
			(unsigned long)0, (PTR)0\
		);\
		THIS->_IN_HANDLE = KERNEL32.CreateFileA(\
			"CONIN$",\
			LOCALMACRO__CMT_CONSOLE__GENERIC_READ | \
				LOCALMACRO__CMT_CONSOLE__GENERIC_WRITE, \
			LOCALMACRO__CMT_CONSOLE__FILE_SHARE_READ | \
				LOCALMACRO__CMT_CONSOLE__FILE_SHARE_WRITE, \
			(PTR)0, LOCALMACRO__CMT_CONSOLE__OPEN_EXISTING, \
			(unsigned long)0, (PTR)0\
		);\
	}\
	while (0);

#define LOCALMACRO__CMT_CONSOLE__PROBE(RESULT) \
	do\
	{\
		struct S_CONSOLE_SCREEN_BUFFER_INFO	__CMT_PROBE__;\
		\
		(RESULT) = (BOOLEAN)(\
			LOCALMACRO__CMT_CONSOLE__VALID (THIS->_OUT_HANDLE) &&\
			KERNEL32.GetConsoleScreenBufferInfo &&\
			KERNEL32.GetConsoleScreenBufferInfo(\
				THIS->_OUT_HANDLE, &__CMT_PROBE__\
			)\
		);\
	}\
	while (0);

#define LOCALMACRO__CMT_CONSOLE__ATTACH \
	do\
	{\
		BOOLEAN	__CMT_OK__ = FALSE;\
		\
		OBJECT__INITIALIZE (THIS->_ACTIVE, BOOLEAN) = FALSE;\
		OBJECT__INITIALIZE (THIS->_VT, BOOLEAN) = FALSE;\
		OBJECT__INITIALIZE (THIS->_OWNED, BOOLEAN) = FALSE;\
		THIS->_OUT_HANDLE = (PTR)0;\
		THIS->_IN_HANDLE = (PTR)0;\
		\
		if (!KERNEL32.GetStdHandle)\
			break ;\
		\
		THIS->_OUT_HANDLE = \
			KERNEL32.GetStdHandle(LOCALMACRO__CMT_CONSOLE__STD_OUTPUT);\
		THIS->_IN_HANDLE = \
			KERNEL32.GetStdHandle(LOCALMACRO__CMT_CONSOLE__STD_INPUT);\
		LOCALMACRO__CMT_CONSOLE__PROBE (__CMT_OK__)\
		\
		if (!__CMT_OK__ && KERNEL32.AttachConsole)\
		{\
			if (\
				KERNEL32.AttachConsole(\
					LOCALMACRO__CMT_CONSOLE__ATTACH_PARENT_PROCESS\
				)\
			)\
			{\
				LOCALMACRO__CMT_CONSOLE__REOPEN\
				LOCALMACRO__CMT_CONSOLE__PROBE (__CMT_OK__)\
			}\
		}\
		\
		if (!__CMT_OK__ && (THIS != &console) && KERNEL32.AllocConsole)\
		{\
			if (KERNEL32.AllocConsole())\
			{\
				LOCALMACRO__CMT_CONSOLE__REOPEN\
				LOCALMACRO__CMT_CONSOLE__PROBE (__CMT_OK__)\
				\
				if (__CMT_OK__)\
					OBJECT__INITIALIZE (THIS->_OWNED, BOOLEAN) = TRUE;\
			}\
		}\
		\
		if (!__CMT_OK__)\
			break ;\
		\
		OBJECT__INITIALIZE (THIS->_ACTIVE, BOOLEAN) = TRUE;\
		OBJECT__INITIALIZE (THIS->get.active, BOOLEAN) = TRUE;\
	}\
	while (0);

#define LOCALMACRO__CMT_CONSOLE__DETACH \
	do\
	{\
		if (THIS->_OWNED && KERNEL32.FreeConsole)\
			KERNEL32.FreeConsole();\
		\
		OBJECT__INITIALIZE (THIS->_OWNED, BOOLEAN) = FALSE;\
		OBJECT__INITIALIZE (THIS->_ACTIVE, BOOLEAN) = FALSE;\
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
