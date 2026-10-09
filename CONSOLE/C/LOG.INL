#ifndef CONSOLE_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_H */

#ifndef KNR_STYLE /* STANDARD C */
#define FUNCTION_HEADER__CONSOLE_LOG \
	void\
		CONSOLE_LOG(struct s_console *const THIS, char *STRING)
#define FUNCTION_HEADER__console_log \
	void\
		console_log(struct s_console *const __this__, char *STRING)
#else /* K&R */
#define FUNCTION_HEADER__CONSOLE_LOG \
	CONSOLE_LOG(THIS, STRING)\
	struct s_console	*const THIS;\
	char				*STRING;
#define FUNCTION_HEADER__console_log \
	console_log(__this__, STRING)\
	struct s_console	*const __this__;\
	char				*STRING;
#endif /* !KNR_STYLE */

#define LOCALFUNCTION__CONSOLE_LOG \
	FUNCTION_HEADER__CONSOLE_LOG \
	{\
		LOCALMACRO__CMT_CONSOLE__LOG_CONTENT\
	}\
	\
	FUNCTION_HEADER__console_log \
	{\
		union U_CONSOLE_STORAGE	*const __THIS_CONVERTER__ = \
			(union U_CONSOLE_STORAGE *)(PTR)__this__;\
		struct S_CONSOLE		*const THIS = &__THIS_CONVERTER__->UPPER;\
		\
		LOCALMACRO__CMT_CONSOLE__LOG_CONTENT\
	}

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
