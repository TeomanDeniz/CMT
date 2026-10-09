#ifndef CONSOLE_HPP
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_HPP */

#define LOCALMACRO__CMT_CONSOLE__WARNING_CONTENT \
	if (THIS->HIGHLIGHTER)\
	{\
		const unsigned short	DEFAULT_COLOR = (unsigned short)(\
			((unsigned short)(\
					(THIS->GET.CURSOR.DEFAULT_COLOR >> 4) & 0X0F\
			) << 4) | \
			(unsigned short)(THIS->GET.CURSOR.DEFAULT_COLOR & 0X0F)\
		);\
		\
		KERNEL32.SetConsoleTextAttribute(THIS->_OUT_HANDLE, 13);\
		LOCALMACRO__CMT_CONSOLE__LOG_INLINE(" WARNING");\
		KERNEL32.SetConsoleTextAttribute(THIS->_OUT_HANDLE, DEFAULT_COLOR);\
		LOCALMACRO__CMT_CONSOLE__LOG_INLINE(": ");\
		KERNEL32.SetConsoleTextAttribute(THIS->_OUT_HANDLE, 15);\
		LOCALMACRO__CMT_CONSOLE__LOG_INLINE(STRING);\
		KERNEL32.SetConsoleTextAttribute(THIS->_OUT_HANDLE, DEFAULT_COLOR);\
	}\
	else\
	{\
		LOCALMACRO__CMT_CONSOLE__LOG_INLINE(" WARNING: ");\
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
