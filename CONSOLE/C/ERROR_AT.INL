#ifndef CONSOLE_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_H */

#ifndef KNR_STYLE /* STANDARD C */
#define FUNCTION_HEADER__CONSOLE_ERROR_AT \
	void\
		CONSOLE_ERROR_AT(\
			struct s_console *THIS, \
			char *STRING, \
			char *THE_FILE, \
			unsigned int THE_LINE\
		)
#define FUNCTION_HEADER__console_error_at \
	void\
		console_error_at(\
			struct s_console *THIS, \
			char *STRING, \
			char *THE_FILE, \
			unsigned int THE_LINE\
		)
#else /* K&R */
#define FUNCTION_HEADER__CONSOLE_ERROR_AT \
	CONSOLE_ERROR_AT(THIS, STRING, THE_FILE, THE_LINE)\
	struct s_console	*THIS;\
	char				*STRING;\
	char				*THE_FILE;\
	unsigned int		THE_LINE;
#define FUNCTION_HEADER__console_error_at \
	console_error_at(THIS, STRING, THE_FILE, THE_LINE)\
	struct s_console	*THIS;\
	char				*STRING;\
	char				*THE_FILE;\
	unsigned int		THE_LINE;
#endif /* !KNR_STYLE */

#define LOCALFUNCTION__CONSOLE_ERROR_AT \
	FUNCTION_HEADER__CONSOLE_ERROR_AT \
	{\
		LOCALMACRO__CMT_CONSOLE__ERROR_AT_CONTENT\
	}\
	\
	FUNCTION_HEADER__console_error_at \
	{\
		LOCALMACRO__CMT_CONSOLE__ERROR_AT_CONTENT\
	}

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
