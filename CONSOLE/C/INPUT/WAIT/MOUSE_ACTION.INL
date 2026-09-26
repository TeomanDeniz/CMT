#ifndef CONSOLE_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_H */

#ifndef KNR_STYLE /* STANDARD C */
#define FUNCTION_HEADER__CONSOLE_INPUT_WAIT_MOUSE_ACTION \
	void\
		CONSOLE_INPUT_WAIT_MOUSE_ACTION(struct s_console *THIS)
#define FUNCTION_HEADER__console_input_wait_mouse_action \
	void\
		console_input_wait_mouse_action(struct s_console *THIS)
#else /* K&R */
#define FUNCTION_HEADER__CONSOLE_INPUT_WAIT_MOUSE_ACTION \
	CONSOLE_INPUT_WAIT_MOUSE_ACTION(THIS)\
	struct s_console	*THIS;
#define FUNCTION_HEADER__console_input_wait_mouse_action \
	console_input_wait_mouse_action(THIS)\
	struct s_console	*THIS;
#endif /* !KNR_STYLE */

#define LOCALFUNCTION__CONSOLE_INPUT_WAIT_MOUSE_ACTION \
	FUNCTION_HEADER__CONSOLE_INPUT_WAIT_MOUSE_ACTION \
	{\
		LOCALMACRO__CMT_CONSOLE__INPUT_WAIT_MOUSE_ACTION_CONTENT\
	}\
	\
	FUNCTION_HEADER__console_input_wait_mouse_action \
	{\
		LOCALMACRO__CMT_CONSOLE__INPUT_WAIT_MOUSE_ACTION_CONTENT\
	}

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
