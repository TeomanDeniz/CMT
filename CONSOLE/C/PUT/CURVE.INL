#ifndef CONSOLE_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_H */

#ifndef KNR_STYLE /* STANDARD C */
#define FUNCTION_HEADER__CONSOLE_PUT_CURVE \
	void\
		CONSOLE_PUT_CURVE(\
			struct s_console *THIS, \
			char CHARACTER, \
			unsigned int START_X, \
			unsigned int START_Y, \
			unsigned int END_X, \
			unsigned int END_Y, \
			float CURVE_START, \
			float CURVE_END\
		)
#define FUNCTION_HEADER__console_put_curve \
	void\
		console_put_curve(\
			struct s_console *THIS, \
			char CHARACTER, \
			unsigned int START_X, \
			unsigned int START_Y, \
			unsigned int END_X, \
			unsigned int END_Y, \
			float CURVE_START, \
			float CURVE_END\
		)
#else /* K&R */
#define FUNCTION_HEADER__CONSOLE_PUT_CURVE \
	CONSOLE_PUT_CURVE(\
		THIS, \
		CHARACTER, \
		START_X, \
		START_Y, \
		END_X, \
		END_Y, \
		CURVE_START, \
		CURVE_END\
	)\
	struct s_console	*THIS;\
	char				CHARACTER;\
	unsigned int		START_X;\
	unsigned int		START_Y;\
	unsigned int		END_X;\
	unsigned int		END_Y;\
	float				CURVE_START;\
	float				CURVE_END;
#define FUNCTION_HEADER__console_put_curve \
	console_put_curve(\
		THIS, \
		CHARACTER, \
		START_X, \
		START_Y, \
		END_X, \
		END_Y, \
		CURVE_START, \
		CURVE_END\
	)\
	struct s_console	*THIS;\
	char				CHARACTER;\
	unsigned int		START_X;\
	unsigned int		START_Y;\
	unsigned int		END_X;\
	unsigned int		END_Y;\
	float				CURVE_START;\
	float				CURVE_END;
#endif /* !KNR_STYLE */

#define LOCALFUNCTION__CONSOLE_PUT_CURVE \
	FUNCTION_HEADER__CONSOLE_PUT_CURVE \
	{\
		LOCALMACRO__CMT_CONSOLE__PUT_CURVE_CONTENT\
	}\
	\
	FUNCTION_HEADER__console_put_curve \
	{\
		LOCALMACRO__CMT_CONSOLE__PUT_CURVE_CONTENT\
	}

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
