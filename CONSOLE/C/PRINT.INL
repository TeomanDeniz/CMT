#ifndef CONSOLE_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_H */

#ifndef KNR_STYLE /* STANDARD C */
#define FUNCTION_HEADER__CONSOLE_PRINT \
	void\
		CONSOLE_PRINT(struct s_console *THIS, const char *FORMAT, VA_ARGS)\
	VA_DECLARE
#define FUNCTION_HEADER__console_print \
	void\
		console_print(struct s_console *THIS, const char *FORMAT, va_args)\
	va_declare
#else /* K&R */
#define FUNCTION_HEADER__CONSOLE_PRINT \
	CONSOLE_PRINT(THIS, FORMAT, VA_ARGS)\
	struct s_console	THIS;\
	const char			*FORMAT;\
	VA_DECLARE
#define FUNCTION_HEADER__console_print \
	console_print(THIS, FORMAT, va_args)\
	struct s_console	THIS;\
	const char			*FORMAT;\
	va_declare
#endif /* !KNR_STYLE */

#define LOCALFUNCTION__CONSOLE_PRINT \
	FUNCTION_HEADER__CONSOLE_PRINT \
	{\
		LOCALMACRO__CMT_CONSOLE__PRINT_CONTENT\
	}\
	\
	FUNCTION_HEADER__console_print \
	{\
		LOCALMACRO__CMT_CONSOLE__PRINT_CONTENT\
	}

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
