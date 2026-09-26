#ifndef CONSOLE_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_H */

#ifndef KNR_STYLE /* STANDARD C */
#define FUNCTION_HEADER__CONSOLE_ERROR \
	void\
		CONSOLE_ERROR(struct s_console *THIS, char *STRING)
#define FUNCTION_HEADER__console_error \
	void\
		console_error(struct s_console *THIS, char *STRING)
#else /* K&R */
#define FUNCTION_HEADER__CONSOLE_ERROR \
	CONSOLE_ERROR(THIS, STRING)\
	struct s_console	*THIS;\
	char				*STRING;
#define FUNCTION_HEADER__console_error \
	console_error(THIS, STRING)\
	struct s_console	*THIS;\
	char				*STRING;
#endif /* !KNR_STYLE */

#define LOCALFUNCTION__CONSOLE_ERROR \
	FUNCTION_HEADER__CONSOLE_ERROR \
	{\
		LOCALMACRO__CMT_CONSOLE__ERROR_CONTENT\
	}\
	\
	FUNCTION_HEADER__console_error \
	{\
		LOCALMACRO__CMT_CONSOLE__ERROR_CONTENT\
	}

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
