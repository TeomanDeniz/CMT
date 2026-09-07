#ifndef CONSOLE_HPP
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_HPP */

#define LOCALMACRO__CMT_CONSOLE__PUT_COLORED_FRAME_CONTENT \
	do\
	{\
		long	__CMT_FRAME_LEFT__ = (long)(START_X);\
		long	__CMT_FRAME_RIGHT__ = (long)(END_X);\
		long	__CMT_FRAME_TOP__ = (long)(START_Y);\
		long	__CMT_FRAME_BOTTOM__ = (long)(END_Y);\
		long	__CMT_FRAME_ROW__;\
		\
		LOCALMACRO__CMT_CONSOLE__SWAP(__CMT_FRAME_LEFT__, __CMT_FRAME_RIGHT__);\
		LOCALMACRO__CMT_CONSOLE__SWAP(__CMT_FRAME_TOP__, __CMT_FRAME_BOTTOM__);\
		LOCALMACRO__CMT_CONSOLE__RUN (\
			CHARACTER, COLOR_VALUE, __CMT_FRAME_LEFT__, __CMT_FRAME_TOP__,\
			(__CMT_FRAME_RIGHT__ - __CMT_FRAME_LEFT__) + (long)1\
		);\
		\
		if (__CMT_FRAME_BOTTOM__ != __CMT_FRAME_TOP__)\
			LOCALMACRO__CMT_CONSOLE__RUN (\
				CHARACTER, COLOR_VALUE, __CMT_FRAME_LEFT__,\
				__CMT_FRAME_BOTTOM__,\
				(__CMT_FRAME_RIGHT__ - __CMT_FRAME_LEFT__) + (long)1\
			);\
		\
		for (\
			__CMT_FRAME_ROW__ = __CMT_FRAME_TOP__ + (long)1;\
			__CMT_FRAME_ROW__ < __CMT_FRAME_BOTTOM__;\
			++__CMT_FRAME_ROW__\
		)\
		{\
			LOCALMACRO__CMT_CONSOLE__PLOT (\
				CHARACTER, COLOR_VALUE, __CMT_FRAME_LEFT__, __CMT_FRAME_ROW__\
			);\
			\
			if (__CMT_FRAME_RIGHT__ != __CMT_FRAME_LEFT__)\
				LOCALMACRO__CMT_CONSOLE__PLOT (\
					CHARACTER, COLOR_VALUE, __CMT_FRAME_RIGHT__,\
					__CMT_FRAME_ROW__\
				);\
		}\
	}\
	while (0);

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
