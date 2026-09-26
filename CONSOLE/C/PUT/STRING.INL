#ifndef CONSOLE_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_H */

#ifndef KNR_STYLE /* STANDARD C */
#define FUNCTION_HEADER__CONSOLE_PUT_STRING \
	void\
		CONSOLE_PUT_STRING(\
			struct s_console *THIS, \
			char *STRING, \
			unsigned int X, \
			unsigned int Y\
		)
#define FUNCTION_HEADER__console_put_string \
	void\
		console_put_string(\
			struct s_console *THIS, \
			char *STRING, \
			unsigned int X, \
			unsigned int Y\
		)
#else /* K&R */
#define FUNCTION_HEADER__CONSOLE_PUT_STRING \
	CONSOLE_PUT_STRING(THIS, STRING, X, Y)\
	struct s_console	*THIS;\
	char				*STRING;\
	unsigned int		X;\
	unsigned int		Y;
#define FUNCTION_HEADER__console_put_string \
	console_put_string(THIS, STRING, X, Y)\
	struct s_console	*THIS;\
	char				*STRING;\
	unsigned int		X;\
	unsigned int		Y;
#endif /* !KNR_STYLE */

#define LOCALFUNCTION__CONSOLE_PUT_STRING \
	FUNCTION_HEADER__CONSOLE_PUT_STRING \
	{\
		LOCALMACRO__CMT_CONSOLE__PUT_STRING_CONTENT\
	}\
	\
	FUNCTION_HEADER__console_put_string \
	{\
		LOCALMACRO__CMT_CONSOLE__PUT_STRING_CONTENT\
	}

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
