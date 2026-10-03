#ifndef CONSOLE_HPP
#ifndef CONSOLE_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_H */
#endif /* !CONSOLE_HPP */

#define LOCALMACRO__CMT_CONSOLE__PUT_COLORED_RECTANGLE_CONTENT \
	LOCALMACRO__CMT_CONSOLE__ENTER_AT\
	LOCALMACRO__CMT_CONSOLE__BATCH_BEGIN\
	\
	do\
	{\
		long	__CMT_FILL_LEFT__ = (long)(START_X);\
		long	__CMT_FILL_RIGHT__ = (long)(END_X);\
		long	__CMT_FILL_TOP__ = (long)(START_Y);\
		long	__CMT_FILL_BOTTOM__ = (long)(END_Y);\
		long	__CMT_FILL_ROW__;\
		\
		LOCALMACRO__CMT_CONSOLE__SWAP(__CMT_FILL_LEFT__, __CMT_FILL_RIGHT__);\
		LOCALMACRO__CMT_CONSOLE__SWAP(__CMT_FILL_TOP__, __CMT_FILL_BOTTOM__);\
		\
		for (\
			__CMT_FILL_ROW__ = __CMT_FILL_TOP__;\
			__CMT_FILL_ROW__ <= __CMT_FILL_BOTTOM__;\
			++__CMT_FILL_ROW__\
		)\
			LOCALMACRO__CMT_CONSOLE__RUN(\
				CHARACTER, COLOR_VALUE, __CMT_FILL_LEFT__, __CMT_FILL_ROW__, \
				(__CMT_FILL_RIGHT__ - __CMT_FILL_LEFT__) + (long)1\
			);\
	}\
	while (0);\
	\
	LOCALMACRO__CMT_CONSOLE__BATCH_END

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
