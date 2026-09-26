#ifndef CONSOLE_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_H */

#ifndef KNR_STYLE /* STANDARD C */
#define FUNCTION_HEADER__CONSOLE_TITLE \
	void\
		CONSOLE_TITLE(struct s_console *THIS, const char *STRING)
#define FUNCTION_HEADER__console_title \
	void\
		console_title(struct s_console *THIS, const char *STRING)
#else /* K&R */
#define FUNCTION_HEADER__CONSOLE_TITLE \
	CONSOLE_TITLE(THIS, STRING)\
	struct s_console	*THIS;\
	const char			*STRING;
#define FUNCTION_HEADER__console_title \
	console_title(THIS, STRING)\
	struct s_console	*THIS;\
	const char			*STRING;
#endif /* !KNR_STYLE */

#define LOCALFUNCTION__CONSOLE_TITLE \
	FUNCTION_HEADER__CONSOLE_TITLE \
	{\
		LOCALMACRO__CMT_CONSOLE__TITLE_CONTENT\
	}\
	\
	FUNCTION_HEADER__console_title \
	{\
		LOCALMACRO__CMT_CONSOLE__TITLE_CONTENT\
	}

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
