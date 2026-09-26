#ifndef CONSOLE_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_H */

#ifndef KNR_STYLE /* STANDARD C */
#define FUNCTION_HEADER__CONSOLE_Y \
	void\
		CONSOLE_Y(struct S_CONSOLE *THIS, int Y_VALUE)
#define FUNCTION_HEADER__console_y \
	void\
		console_y(struct s_console *THIS, int Y_VALUE)
#else /* K&R */
#define FUNCTION_HEADER__CONSOLE_Y \
	CONSOLE_Y(THIS, Y_VALUE)\
	struct S_CONSOLE	*THIS;\
	int					Y_VALUE;
#define FUNCTION_HEADER__console_y \
	console_y(THIS, Y_VALUE)\
	struct s_console	*THIS;\
	int					Y_VALUE;
#endif /* !KNR_STYLE */

#define LOCALFUNCTION__CONSOLE_Y \
	FUNCTION_HEADER__CONSOLE_Y \
	{\
		LOCALMACRO__CMT_CONSOLE__Y_CONTENT\
	}\
	\
	FUNCTION_HEADER__console_y \
	{\
		LOCALMACRO__CMT_CONSOLE__Y_CONTENT\
	}

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
