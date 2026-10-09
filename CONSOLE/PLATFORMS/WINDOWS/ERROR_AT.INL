#ifndef CONSOLE_HPP
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_HPP */

#define LOCALMACRO__CMT_CONSOLE__ERROR_AT_CONTENT \
	char	INT_STR[12];\
	\
	{\
		REGISTER int	INDEX_1 = 0;\
		REGISTER int	INDEX_2;\
		REGISTER int	INDEX_3;\
		REGISTER int	INDEX_FOR;\
		\
		INDEX_2 = INDEX_1;\
		\
		do\
		{\
			INT_STR[INDEX_2++] = 48 + (THE_LINE % 10);\
			THE_LINE /= 10;\
		}\
		while (THE_LINE);\
		\
		INT_STR[INDEX_2] = (char)0;\
		INDEX_FOR = INDEX_1;\
		INDEX_3 = INDEX_2 - 1;\
		\
		while (INDEX_FOR < INDEX_3)\
		{\
			const char	CHARACTER = INT_STR[INDEX_FOR];\
			\
			INT_STR[INDEX_FOR] = INT_STR[INDEX_3];\
			INT_STR[INDEX_3] = CHARACTER;\
			++INDEX_FOR;\
			--INDEX_3;\
		}\
	}\
	\
	if (THIS->HIGHLIGHTER)\
	{\
		const unsigned short	DEFAULT_COLOR = (unsigned short)(\
			((unsigned short)(\
					(THIS->GET.CURSOR.DEFAULT_COLOR >> 4) & 0X0F\
			) << 4) | \
			(unsigned short)(THIS->GET.CURSOR.DEFAULT_COLOR & 0X0F)\
		);\
		\
		KERNEL32.SetConsoleTextAttribute(THIS->_OUT_HANDLE, 11);\
		LOCALMACRO__CMT_CONSOLE__LOG_INLINE("\n ");\
		LOCALMACRO__CMT_CONSOLE__LOG_INLINE(THE_FILE);\
		KERNEL32.SetConsoleTextAttribute(THIS->_OUT_HANDLE, DEFAULT_COLOR);\
		LOCALMACRO__CMT_CONSOLE__LOG_INLINE(" (");\
		KERNEL32.SetConsoleTextAttribute(THIS->_OUT_HANDLE, 11);\
		LOCALMACRO__CMT_CONSOLE__LOG_INLINE(INT_STR);\
		KERNEL32.SetConsoleTextAttribute(THIS->_OUT_HANDLE, DEFAULT_COLOR);\
		LOCALMACRO__CMT_CONSOLE__LOG_INLINE("): ");\
		KERNEL32.SetConsoleTextAttribute(THIS->_OUT_HANDLE, 12);\
		LOCALMACRO__CMT_CONSOLE__LOG_INLINE("ERROR");\
		KERNEL32.SetConsoleTextAttribute(THIS->_OUT_HANDLE, DEFAULT_COLOR);\
		LOCALMACRO__CMT_CONSOLE__LOG_INLINE(": ");\
		KERNEL32.SetConsoleTextAttribute(THIS->_OUT_HANDLE, 15);\
		LOCALMACRO__CMT_CONSOLE__LOG_INLINE(STRING);\
		KERNEL32.SetConsoleTextAttribute(THIS->_OUT_HANDLE, DEFAULT_COLOR);\
	}\
	else\
	{\
		LOCALMACRO__CMT_CONSOLE__LOG_INLINE("\n ");\
		LOCALMACRO__CMT_CONSOLE__LOG_INLINE(THE_FILE);\
		LOCALMACRO__CMT_CONSOLE__LOG_INLINE(":(");\
		LOCALMACRO__CMT_CONSOLE__LOG_INLINE(INT_STR);\
		LOCALMACRO__CMT_CONSOLE__LOG_INLINE("): ERROR: ");\
		LOCALMACRO__CMT_CONSOLE__LOG_INLINE(STRING);\
	}

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
