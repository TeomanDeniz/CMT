#ifndef CONSOLE_HPP
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_HPP */

#define LOCALFUNCTION__CMT_CONSOLE_CPP__PUT_COLORED_RECTANGLE_RADIUS \
	cmt::CONSOLE\
		*cmt::CONSOLE::PUT::COLORED::RECTANGLE_RADIUS(\
			char CHARACTER,\
			unsigned int COLOR_VALUE,\
			unsigned int START_X,\
			unsigned int START_Y,\
			unsigned int END_X,\
			unsigned int END_Y,\
			unsigned int RADIUS\
		)\
	{\
		cmt::CONSOLE	*THIS = LOCALMACRO__CMT_CONSOLE_CPP__OWNER(this);\
		\
		LOCALMACRO__CMT_CONSOLE__PUT_COLORED_RECTANGLE_RADIUS_CONTENT\
		\
		return (THIS);\
	}\
	\
	cmt::console\
		*cmt::console::put::colored::rectangle_radius(\
			char CHARACTER,\
			unsigned int COLOR_VALUE,\
			unsigned int START_X,\
			unsigned int START_Y,\
			unsigned int END_X,\
			unsigned int END_Y,\
			unsigned int RADIUS\
		)\
	{\
		cmt::console	*SELF = LOCALMACRO__CMT_CONSOLE_CPP__OWNER(this);\
		\
		LOCALMACRO__CMT_CONSOLE_CPP__UPPER(\
			SELF\
		)->PUT.COLORED.RECTANGLE_RADIUS(\
			CHARACTER,\
			COLOR_VALUE,\
			START_X,\
			START_Y,\
			END_X,\
			END_Y,\
			RADIUS\
		);\
		\
		return (SELF);\
	}

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
