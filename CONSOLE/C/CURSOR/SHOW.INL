#ifndef CONSOLE_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_H */

#ifndef KNR_STYLE /* STANDARD C */
#define FUNCTION_HEADER__CONSOLE_CURSOR_SHOW \
	void\
		CONSOLE_CURSOR_SHOW(struct s_console *const THIS, BOOLEAN STATE)
#define FUNCTION_HEADER__console_cursor_show \
	void\
		console_cursor_show(struct s_console *const __this__, BOOLEAN STATE)
#else /* K&R */
#define FUNCTION_HEADER__CONSOLE_CURSOR_SHOW \
	CONSOLE_CURSOR_SHOW(THIS, STATE)\
	struct s_console	*const THIS;\
	BOOLEAN				STATE;
#define FUNCTION_HEADER__console_cursor_show \
	console_cursor_show(__this__, STATE)\
	struct s_console	*const __this__;\
	BOOLEAN				STATE;
#endif /* !KNR_STYLE */

#define LOCALFUNCTION__CONSOLE_CURSOR_SHOW \
	FUNCTION_HEADER__CONSOLE_CURSOR_SHOW \
	{\
		LOCALMACRO__CMT_CONSOLE__CURSOR_SHOW_CONTENT\
	}\
	\
	FUNCTION_HEADER__console_cursor_show \
	{\
		union U_CONSOLE_STORAGE	*const __THIS_CONVERTER__ = \
			(union U_CONSOLE_STORAGE *)(PTR)__this__;\
		struct S_CONSOLE		*const THIS = &__THIS_CONVERTER__->UPPER;\
		\
		LOCALMACRO__CMT_CONSOLE__CURSOR_SHOW_CONTENT\
	}

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
