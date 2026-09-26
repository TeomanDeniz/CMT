#ifndef CONSOLE_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_H */

#ifndef KNR_STYLE /* STANDARD C */
#define FUNCTION_HEADER__CONSOLE_PUSH \
	void\
		CONSOLE_PUSH(struct s_console *THIS)
#define FUNCTION_HEADER__console_push \
	void\
		console_push(struct s_console *THIS)
#else /* K&R */
#define FUNCTION_HEADER__CONSOLE_PUSH \
	CONSOLE_PUSH(THIS)\
	struct s_console	*THIS;
#define FUNCTION_HEADER__console_push \
	console_push(THIS)\
	struct s_console	*THIS;
#endif /* !KNR_STYLE */

#define LOCALFUNCTION__CONSOLE_PUSH \
	FUNCTION_HEADER__CONSOLE_PUSH \
	{\
		LOCALMACRO__CMT_CONSOLE__PUSH_CONTENT\
	}\
	\
	FUNCTION_HEADER__console_push \
	{\
		LOCALMACRO__CMT_CONSOLE__PUSH_CONTENT\
	}

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
