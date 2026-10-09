#ifndef CONSOLE_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_H */

#ifndef KNR_STYLE /* STANDARD C */
#define FUNCTION_HEADER__CONSOLE_DESTRUCTOR \
	void\
		CONSOLE_DESTORY(struct s_console *const THIS)
#define FUNCTION_HEADER__console_destructor \
	void\
		console_destory(struct s_console *const __this__)
#else /* K&R */
#define FUNCTION_HEADER__CONSOLE_DESTRUCTOR \
	CONSOLE_DESTORY(THIS)\
	struct s_console	*const THIS;
#define FUNCTION_HEADER__console_destructor \
	console_destory(__this__)\
	struct s_console	*const __this__;
#endif /* !KNR_STYLE */

#define LOCALFUNCTION__CONSOLE_DESTRUCTOR \
	FUNCTION_HEADER__CONSOLE_DESTRUCTOR \
	{\
		LOCALMACRO__CMT_CONSOLE__DESTRUCTOR_CONTENT\
	}\
	\
	FUNCTION_HEADER__console_destructor \
	{\
		union U_CONSOLE_STORAGE	*const __THIS_CONVERTER__ = \
			(union U_CONSOLE_STORAGE *)(PTR)__this__;\
		struct S_CONSOLE		*const THIS = &__THIS_CONVERTER__->UPPER;\
		\
		LOCALMACRO__CMT_CONSOLE__DESTRUCTOR_CONTENT\
	}

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
