#ifndef CONSOLE_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_H */

#ifndef KNR_STYLE /* STANDARD C */
#define FUNCTION_HEADER__CONSOLE_PUT_COLORED_ELLIPSE \
	void\
		CONSOLE_PUT_COLORED_ELLIPSE(\
			struct s_console *THIS, \
			char CHARACTER, \
			unsigned int COLOR_VALUE, \
			unsigned int START_X, \
			unsigned int START_Y, \
			unsigned int END_X, \
			unsigned int END_Y 
		)
#define FUNCTION_HEADER__console_put_colored_ellipse \
	void\
		console_put_colored_ellipse(\
			struct s_console *THIS, \
			char CHARACTER, \
			unsigned int COLOR_VALUE, \
			unsigned int START_X, \
			unsigned int START_Y, \
			unsigned int END_X, \
			unsigned int END_Y 
		)
#else /* K&R */
#define FUNCTION_HEADER__CONSOLE_PUT_COLORED_ELLIPSE \
	CONSOLE_PUT_COLORED_ELLIPSE(\
		THIS, CHARACTER, COLOR_VALUE, START_X, START_Y, END_X, END_Y\
	)\
	struct s_console	*THIS;\
	char				CHARACTER;\
	unsigned int		COLOR_VALUE;\
	unsigned int		START_X;\
	unsigned int		START_Y;\
	unsigned int		END_X;\
	unsigned int		END_Y;
#define FUNCTION_HEADER__console_put_colored_ellipse \
	console_put_colored_ellipse(\
		THIS, CHARACTER, COLOR_VALUE, START_X, START_Y, END_X, END_Y\
	)\
	struct s_console	*THIS;\
	char				CHARACTER;\
	unsigned int		COLOR_VALUE;\
	unsigned int		START_X;\
	unsigned int		START_Y;\
	unsigned int		END_X;\
	unsigned int		END_Y;
#endif /* !KNR_STYLE */

#define LOCALFUNCTION__CONSOLE_PUT_COLORED_ELLIPSE \
	FUNCTION_HEADER__CONSOLE_PUT_COLORED_ELLIPSE \
	{\
		LOCALMACRO__CMT_CONSOLE__PUT_COLORED_ELLIPSE_CONTENT\
	}\
	\
	FUNCTION_HEADER__console_put_colored_ellipse \
	{\
		LOCALMACRO__CMT_CONSOLE__PUT_COLORED_ELLIPSE_CONTENT\
	}

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
