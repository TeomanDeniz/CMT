#ifndef CONSOLE_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_H */

#ifndef KNR_STYLE /* STANDARD C */
#define FUNCTION_HEADER__CONSOLE_CLEAR \
	void\
		CONSOLE_CLEAR(struct s_console *THIS)
#define FUNCTION_HEADER__console_clear \
	void\
		console_clear(struct s_console *THIS)
#else /* K&R */
#define FUNCTION_HEADER__CONSOLE_CLEAR \
	CONSOLE_CLEAR(THIS)\
	struct s_console	*THIS;
#define FUNCTION_HEADER__console_clear \
	console_clear(THIS)\
	struct s_console	*THIS;
#endif /* !KNR_STYLE */

#define LOCALFUNCTION__CONSOLE_CLEAR \
	FUNCTION_HEADER__CONSOLE_CLEAR \
	{\
		LOCALMACRO__CMT_CONSOLE__CLEAR_CONTENT\
	}\
	\
	FUNCTION_HEADER__console_clear \
	{\
		LOCALMACRO__CMT_CONSOLE__CLEAR_CONTENT\
	}

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
