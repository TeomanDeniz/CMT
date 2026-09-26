#ifndef CONSOLE_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_H */

#ifndef KNR_STYLE /* STANDARD C */
#define FUNCTION_HEADER__CONSOLE_WIDTH \
	void\
		CONSOLE_WIDTH(struct s_console *THIS, unsigned int WIDTH_VALUE)
#define FUNCTION_HEADER__console_width \
	void\
		console_width(struct s_console *THIS, unsigned int WIDTH_VALUE)
#else /* K&R */
#define FUNCTION_HEADER__CONSOLE_WIDTH \
	CONSOLE_WIDTH(THIS, WIDTH_VALUE)\
	struct s_console	*THIS;\
	unsigned int		WIDTH_VALUE;
#define FUNCTION_HEADER__console_width \
	console_width(THIS, WIDTH_VALUE)\
	struct s_console	*THIS;\
	unsigned int		WIDTH_VALUE;
#endif /* !KNR_STYLE */

#define LOCALFUNCTION__CONSOLE_WIDTH \
	FUNCTION_HEADER__CONSOLE_WIDTH \
	{\
		LOCALMACRO__CMT_CONSOLE__WIDTH_CONTENT\
	}\
	\
	FUNCTION_HEADER__console_width \
	{\
		LOCALMACRO__CMT_CONSOLE__WIDTH_CONTENT\
	}

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
