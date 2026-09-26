#ifndef CONSOLE_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_H */

#ifndef KNR_STYLE /* STANDARD C */
#define FUNCTION_HEADER__CONSOLE_INPUT_WAIT_MOUSE_MOVE \
	void\
		CONSOLE_INPUT_WAIT_MOUSE_MOVE(struct s_console *THIS)
#define FUNCTION_HEADER__console_input_wait_mouse_move \
	void\
		console_input_wait_mouse_move(struct s_console *THIS)
#else /* K&R */
#define FUNCTION_HEADER__CONSOLE_INPUT_WAIT_MOUSE_MOVE \
	CONSOLE_INPUT_WAIT_MOUSE_MOVE(THIS)\
	struct s_console	*THIS;
#define FUNCTION_HEADER__console_input_wait_mouse_move \
	console_input_wait_mouse_move(THIS)\
	struct s_console	*THIS;
#endif /* !KNR_STYLE */

#define LOCALFUNCTION__CONSOLE_INPUT_WAIT_MOUSE_MOVE \
	FUNCTION_HEADER__CONSOLE_INPUT_WAIT_MOUSE_MOVE \
	{\
		LOCALMACRO__CMT_CONSOLE__INPUT_WAIT_MOUSE_MOVE_CONTENT\
	}\
	\
	FUNCTION_HEADER__console_input_wait_mouse_move \
	{\
		LOCALMACRO__CMT_CONSOLE__INPUT_WAIT_MOUSE_MOVE_CONTENT\
	}

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
