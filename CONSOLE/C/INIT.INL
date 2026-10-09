#ifndef CONSOLE_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_H */

#ifndef KNR_STYLE /* STANDARD C */
#define FUNCTION_HEADER__CONSOLE_INIT \
	void\
		CONSOLE_INIT(struct s_console *const THIS)
#define FUNCTION_HEADER__console_init \
	void\
		console_init(struct s_console *const __this__)
#else /* K&R */
#define FUNCTION_HEADER__CONSOLE_INIT \
	CONSOLE_INIT(THIS)\
	struct s_console	*const THIS;
#define FUNCTION_HEADER__console_init \
	console_init(__this__)\
	struct s_console	*const __this__;
#endif /* !KNR_STYLE */

#define LOCALFUNCTION__CMT_CONSOLE_C_OOP \
	FUNCTION_HEADER__CONSOLE_INIT \
	{\
		LOCALFUNCTION__CMT_CONSOLE_CONTENT\
	}\
	\
	FUNCTION_HEADER__console_init \
	{\
		union U_CONSOLE_STORAGE	*const __THIS_CONVERTER__ = \
			(union U_CONSOLE_STORAGE *)(PTR)__this__;\
		struct S_CONSOLE		*const THIS = &__THIS_CONVERTER__->UPPER;\
		\
		LOCALFUNCTION__CMT_CONSOLE_CONTENT\
	}

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
