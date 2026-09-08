#ifndef CONSOLE_HPP
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_HPP */

#define LOCALMACRO__CMT_CONSOLE__IS_TERMINAL(RESULT) \
	do\
	{\
		char	__CMT_ENV__[8];\
		\
		(RESULT) = FALSE;\
		\
		if (!KERNEL32.GetEnvironmentVariableA)\
			break ;\
		\
		if (\
			KERNEL32.GetEnvironmentVariableA(\
				"WT_SESSION", __CMT_ENV__, (unsigned long)sizeof(__CMT_ENV__)\
			)\
		)\
			(RESULT) = TRUE;\
	}\
	while (0);

#define LOCALMACRO__CMT_CONSOLE__NEED_VT(RESULT) \
	do\
	{\
		unsigned long	__CMT_MODE__ = (unsigned long)0;\
		\
		(RESULT) = FALSE;\
		\
		if (!KERNEL32.GetConsoleMode || !KERNEL32.SetConsoleMode)\
			break ;\
		\
		if (!KERNEL32.GetConsoleMode(THIS->_OUT_HANDLE, &__CMT_MODE__))\
			break ;\
		\
		if (__CMT_MODE__ & (unsigned long)0X0004)\
		{\
			(RESULT) = TRUE;\
			break ;\
		}\
		\
		(RESULT) = (BOOLEAN)(\
			KERNEL32.SetConsoleMode(\
				THIS->_OUT_HANDLE, __CMT_MODE__ | (unsigned long)0X0004\
			) != 0\
		);\
	}\
	while (0);

#define LOCALMACRO__CMT_CONSOLE__VT_RESIZE(COLUMNS, ROWS) \
	do\
	{\
		char			__CMT_SEQ__[32];\
		int				__CMT_AT__ = 0;\
		unsigned long	__CMT_OUT__ = (unsigned long)0;\
		unsigned long	__CMT_N__;\
		int				__CMT_D__;\
		char			__CMT_TMP__[8];\
		\
		if (!KERNEL32.WriteConsoleA)\
			break ;\
		\
		__CMT_SEQ__[__CMT_AT__++] = (char)0X1B;\
		__CMT_SEQ__[__CMT_AT__++] = '[';\
		__CMT_SEQ__[__CMT_AT__++] = '8';\
		__CMT_SEQ__[__CMT_AT__++] = ';';\
		__CMT_N__ = (unsigned long)(ROWS);\
		__CMT_D__ = 0;\
		\
		do\
		{\
			__CMT_TMP__[__CMT_D__++] = \
				(char)('0' + (__CMT_N__ % (unsigned long)10));\
			__CMT_N__ = __CMT_N__ / (unsigned long)10;\
		}\
		while (__CMT_N__ && (__CMT_D__ < 7));\
		\
		while (__CMT_D__)\
			__CMT_SEQ__[__CMT_AT__++] = __CMT_TMP__[--__CMT_D__];\
		\
		__CMT_SEQ__[__CMT_AT__++] = ';';\
		__CMT_N__ = (unsigned long)(COLUMNS);\
		__CMT_D__ = 0;\
		\
		do\
		{\
			__CMT_TMP__[__CMT_D__++] = \
				(char)('0' + (__CMT_N__ % (unsigned long)10));\
			__CMT_N__ = __CMT_N__ / (unsigned long)10;\
		}\
		while (__CMT_N__ && (__CMT_D__ < 7));\
		\
		while (__CMT_D__)\
			__CMT_SEQ__[__CMT_AT__++] = __CMT_TMP__[--__CMT_D__];\
		\
		__CMT_SEQ__[__CMT_AT__++] = 't';\
		KERNEL32.WriteConsoleA(\
			THIS->_OUT_HANDLE, __CMT_SEQ__,\
			(unsigned long)__CMT_AT__, &__CMT_OUT__, (PTR)0\
		);\
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
