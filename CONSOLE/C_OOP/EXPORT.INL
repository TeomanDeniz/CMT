#ifndef CONSOLE_HPP
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_HPP */

#ifndef KNR_STYLE /* STANDARD C */
#define FUNCTION_HEADER__CMT_CONSOLE_C_OOP__EXPORT \
	PTR\
		CMT_CONSOLE_C_OOP__EXPORT(void)
#else /* K&R */
#define FUNCTION_HEADER__CMT_CONSOLE_C_OOP__EXPORT \
	PTR\
		CMT_CONSOLE_C_OOP__EXPORT()
#endif /* !KNR_STYLE */

#define LOCALFUNCTION__CMT_CONSOLE_C_OOP__EXPORT \
	FUNCTION_HEADER__CMT_CONSOLE_C_OOP__EXPORT \
	{\
		OBJECT__CONNECT (CMT_CONSOLE);\
		\
		LOCALMACRO__CMT_CONSOLE__EXPORT_CONTENT\
	}

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
