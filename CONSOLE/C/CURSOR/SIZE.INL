#ifndef CONSOLE_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_H */

#ifndef KNR_STYLE /* STANDARD C */
#define FUNCTION_HEADER__CONSOLE_CURSOR_SIZE \
	void\
		CONSOLE_CURSOR_SIZE(struct s_console *THIS, unsigned long SIZE_VALUE)
#define FUNCTION_HEADER__console_cursor_size \
	void\
		console_cursor_size(struct s_console *THIS, unsigned long SIZE_VALUE)
#else /* K&R */
#define FUNCTION_HEADER__CONSOLE_CURSOR_SIZE \
	CONSOLE_CURSOR_SIZE(THIS, SIZE_VALUE)\
	struct s_console	*THIS;\
	unsigned long		SIZE_VALUE;
#define FUNCTION_HEADER__console_cursor_size \
	console_cursor_size(THIS, SIZE_VALUE)\
	struct s_console	*THIS;\
	unsigned long		SIZE_VALUE;
#endif /* !KNR_STYLE */

#define LOCALFUNCTION__CONSOLE_CURSOR_SIZE \
	FUNCTION_HEADER__CONSOLE_CURSOR_SIZE \
	{\
		LOCALMACRO__CMT_CONSOLE__CURSOR_SIZE_CONTENT\
	}\
	\
	FUNCTION_HEADER__console_cursor_size \
	{\
		LOCALMACRO__CMT_CONSOLE__CURSOR_SIZE_CONTENT\
	}

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
