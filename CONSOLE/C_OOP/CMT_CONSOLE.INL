#ifndef CONSOLE_HPP
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_HPP */

#ifndef KNR_STYLE /* STANDARD C */
#define FUNCTION_HEADER__CMT_CONSOLE_C_OOP \
	void\
		CMT_CONSOLE(void)
#else /* K&R */
#define FUNCTION_HEADER__CMT_CONSOLE_C_OOP \
	CMT_CONSOLE()
#endif /* !KNR_STYLE */

#define LOCALFUNCTION__CMT_CONSOLE_C_OOP \
	FUNCTION_HEADER__CMT_CONSOLE_C_OOP \
	{\
		OBJECT__CONNECT (CMT_CONSOLE);\
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
