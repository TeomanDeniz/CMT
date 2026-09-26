#ifndef CONSOLE_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_H */

#ifndef KNR_STYLE /* STANDARD C */
#define FUNCTION_HEADER__CONSOLE_PUT_FRAME \
	void\
		CONSOLE_PUT_FRAME(\
			struct s_console *THIS, \
			char CHARACTER, \
			unsigned int START_X, \
			unsigned int START_Y, \
			unsigned int END_X, \
			unsigned int END_Y\
		)
#define FUNCTION_HEADER__console_put_frame \
	void\
		console_put_frame(\
			struct s_console *THIS, \
			char CHARACTER, \
			unsigned int START_X, \
			unsigned int START_Y, \
			unsigned int END_X, \
			unsigned int END_Y\
		)
#else /* K&R */
#define FUNCTION_HEADER__CONSOLE_PUT_FRAME \
	CONSOLE_PUT_FRAME(THIS, CHARACTER, START_X, START_Y, END_X, END_Y)\
	struct s_console	*THIS;\
	char				CHARACTER;\
	unsigned int		START_X;\
	unsigned int		START_Y;\
	unsigned int		END_X;\
	unsigned int		END_Y;
#define FUNCTION_HEADER__console_put_frame \
	console_put_frame(THIS, CHARACTER, START_X, START_Y, END_X, END_Y)\
	struct s_console	*THIS;\
	char				CHARACTER;\
	unsigned int		START_X;\
	unsigned int		START_Y;\
	unsigned int		END_X;\
	unsigned int		END_Y;
#endif /* !KNR_STYLE */

#define LOCALFUNCTION__CONSOLE_PUT_FRAME \
	FUNCTION_HEADER__CONSOLE_PUT_FRAME \
	{\
		LOCALMACRO__CMT_CONSOLE__PUT_FRAME_CONTENT\
	}\
	\
	FUNCTION_HEADER__console_put_frame \
	{\
		LOCALMACRO__CMT_CONSOLE__PUT_FRAME_CONTENT\
	}

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
