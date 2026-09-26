#ifndef CONSOLE_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_H */

#ifndef KNR_STYLE /* STANDARD C */
#define FUNCTION_HEADER__CONSOLE_CURSOR_COLOR \
	void\
		CONSOLE_CURSOR_COLOR(struct s_console *THIS, unsigned int COLOR_VALUE)
#define FUNCTION_HEADER__console_cursor_color \
	void\
		console_cursor_color(struct s_console *THIS, unsigned int COLOR_VALUE)
#else /* K&R */
#define FUNCTION_HEADER__CONSOLE_CURSOR_COLOR \
	CONSOLE_CURSOR_COLOR(THIS, COLOR_VALUE)\
	struct s_console	*THIS;\
	unsigned int		COLOR_VALUE;
#define FUNCTION_HEADER__console_cursor_color \
	console_cursor_color(THIS, COLOR_VALUE)\
	struct s_console	*THIS;\
	unsigned int		COLOR_VALUE;
#endif /* !KNR_STYLE */

#define LOCALFUNCTION__CONSOLE_CURSOR_COLOR \
	FUNCTION_HEADER__CONSOLE_CURSOR_COLOR \
	{\
		LOCALMACRO__CMT_CONSOLE__CURSOR_COLOR_CONTENT\
	}\
	\
	FUNCTION_HEADER__console_cursor_color \
	{\
		LOCALMACRO__CMT_CONSOLE__CURSOR_COLOR_CONTENT\
	}

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
