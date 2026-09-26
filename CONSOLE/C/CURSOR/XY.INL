#ifndef CONSOLE_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_H */

#ifndef KNR_STYLE /* STANDARD C */
#define FUNCTION_HEADER__CONSOLE_CURSOR_XY \
	void\
		CONSOLE_CURSOR_XY(\
			struct s_console *THIS, unsigned int X_VALUE, unsigned int Y_VALUE\
		)
#define FUNCTION_HEADER__console_cursor_xy \
	void\
		console_cursor_xy(\
			struct s_console *THIS, unsigned int X_VALUE, unsigned int Y_VALUE\
		)
#else /* K&R */
#define FUNCTION_HEADER__CONSOLE_CURSOR_XY \
	CONSOLE_CURSOR_XY(THIS, X_VALUE, Y_VALUE)\
	struct s_console	*THIS;\
	unsigned int		X_VALUE;\
	unsigned int		Y_VALUE;
#define FUNCTION_HEADER__console_cursor_xy \
	console_cursor_xy(THIS, X_VALUE, Y_VALUE)\
	struct s_console	*THIS;\
	unsigned int		X_VALUE;\
	unsigned int		Y_VALUE;
#endif /* !KNR_STYLE */

#define LOCALFUNCTION__CONSOLE_CURSOR_XY \
	FUNCTION_HEADER__CONSOLE_CURSOR_XY \
	{\
		LOCALMACRO__CMT_CONSOLE__CURSOR_XY_CONTENT\
	}\
	\
	FUNCTION_HEADER__console_cursor_xy \
	{\
		LOCALMACRO__CMT_CONSOLE__CURSOR_XY_CONTENT\
	}

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
