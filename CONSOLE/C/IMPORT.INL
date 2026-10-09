#ifndef CONSOLE_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_H */

#ifndef KNR_STYLE /* STANDARD C */
#define FUNCTION_HEADER__CONSOLE_IMPORT \
	void\
		CONSOLE_IMPORT(struct s_console *const THIS, PTR DATA)
#define FUNCTION_HEADER__console_import \
	void\
		console_import(struct s_console *const __this__, ptr DATA)
#else /* K&R */
#define FUNCTION_HEADER__CONSOLE_IMPORT \
	CONSOLE_IMPORT(THIS, DATA)\
	struct s_console	*const THIS;\
	PTR					DATA;
#define FUNCTION_HEADER__console_import \
	console_import(__this__, DATA)\
	struct s_console	*const __this__;\
	ptr					DATA;
#endif /* !KNR_STYLE */

#define LOCALFUNCTION__CONSOLE_IMPORT \
	FUNCTION_HEADER__CONSOLE_IMPORT \
	{\
		LOCALMACRO__CMT_CONSOLE__IMPORT_CONTENT\
	}\
	\
	FUNCTION_HEADER__console_import \
	{\
		union U_CONSOLE_STORAGE	*const __THIS_CONVERTER__ = \
			(union U_CONSOLE_STORAGE *)(PTR)__this__;\
		struct S_CONSOLE		*const THIS = &__THIS_CONVERTER__->UPPER;\
		\
		LOCALMACRO__CMT_CONSOLE__IMPORT_CONTENT\
	}

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
