#ifndef CONSOLE_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_H */

#ifndef KNR_STYLE /* STANDARD C */
#define FUNCTION_HEADER__CONSOLE_HEIGHT \
	void\
		CONSOLE_HEIGHT(struct s_console *THIS, unsigned int HEIGHT_VALUE)
#define FUNCTION_HEADER__console_height \
	void\
		console_height(struct s_console *THIS, unsigned int HEIGHT_VALUE)
#else /* K&R */
#define FUNCTION_HEADER__CONSOLE_HEIGHT \
	CONSOLE_HEIGHT(THIS, HEIGHT_VALUE)\
	struct s_console	*THIS;\
	unsigned int		HEIGHT_VALUE;
#define FUNCTION_HEADER__console_height \
	console_height(THIS, HEIGHT_VALUE)\
	struct s_console	*THIS;\
	unsigned int		HEIGHT_VALUE;
#endif /* !KNR_STYLE */

#define LOCALFUNCTION__CONSOLE_HEIGHT \
	FUNCTION_HEADER__CONSOLE_HEIGHT \
	{\
		LOCALMACRO__CMT_CONSOLE__HEIGHT_CONTENT\
	}\
	\
	FUNCTION_HEADER__console_height \
	{\
		LOCALMACRO__CMT_CONSOLE__HEIGHT_CONTENT\
	}

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
