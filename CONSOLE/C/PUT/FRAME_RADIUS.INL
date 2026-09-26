#ifndef CONSOLE_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_H */

#ifndef KNR_STYLE /* STANDARD C */
#define FUNCTION_HEADER__CONSOLE_PUT_FRAME_RADIUS \
	void\
		CONSOLE_PUT_FRAME_RADIUS(\
			struct s_console *THIS, \
			char CHARACTER, \
			unsigned int START_X, \
			unsigned int START_Y, \
			unsigned int END_X, \
			unsigned int END_Y, \
			unsigned int RADIUS\
		)
#define FUNCTION_HEADER__console_put_frame_radius \
	void\
		console_put_frame_radius(\
			struct s_console *THIS, \
			char CHARACTER, \
			unsigned int START_X, \
			unsigned int START_Y, \
			unsigned int END_X, \
			unsigned int END_Y, \
			unsigned int RADIUS\
		)
#else /* K&R */
#define FUNCTION_HEADER__CONSOLE_PUT_FRAME_RADIUS \
	CONSOLE_PUT_FRAME_RADIUS(\
		THIS, CHARACTER, START_X, START_Y, END_X, END_Y, RADIUS\
	)\
	struct s_console	*THIS;\
	char				CHARACTER;\
	unsigned int		START_X;\
	unsigned int		START_Y;\
	unsigned int		END_X;\
	unsigned int		END_Y;\
	unsigned int		RADIUS;
#define FUNCTION_HEADER__console_put_frame_radius \
	console_put_frame_radius(\
		THIS, CHARACTER, START_X, START_Y, END_X, END_Y, RADIUS\
	)\
	struct s_console	*THIS;\
	char				CHARACTER;\
	unsigned int		START_X;\
	unsigned int		START_Y;\
	unsigned int		END_X;\
	unsigned int		END_Y;\
	unsigned int		RADIUS;
#endif /* !KNR_STYLE */

#define LOCALFUNCTION__CONSOLE_PUT_FRAME_RADIUS \
	FUNCTION_HEADER__CONSOLE_PUT_FRAME_RADIUS \
	{\
		LOCALMACRO__CMT_CONSOLE__PUT_FRAME_RADIUS_CONTENT\
	}\
	\
	FUNCTION_HEADER__console_put_frame_radius \
	{\
		LOCALMACRO__CMT_CONSOLE__PUT_FRAME_RADIUS_CONTENT\
	}

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
