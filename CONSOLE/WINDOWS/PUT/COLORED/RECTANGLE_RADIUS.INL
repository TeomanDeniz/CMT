#ifndef CONSOLE_HPP
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_HPP */

#define LOCALMACRO__CMT_CONSOLE__PUT_COLORED_RECTANGLE_RADIUS_CONTENT \
	do\
	{\
		long	__CMT_SOFT_LEFT__ = (long)(START_X);\
		long	__CMT_SOFT_RIGHT__ = (long)(END_X);\
		long	__CMT_SOFT_TOP__ = (long)(START_Y);\
		long	__CMT_SOFT_BOTTOM__ = (long)(END_Y);\
		long	__CMT_SOFT_RADIUS__ = (long)(RADIUS);\
		long	__CMT_SOFT_ROW__;\
		long	__CMT_SOFT_WIDE__;\
		long	__CMT_SOFT_HIGH__;\
		\
		LOCALMACRO__CMT_CONSOLE__SWAP(__CMT_SOFT_LEFT__, __CMT_SOFT_RIGHT__);\
		LOCALMACRO__CMT_CONSOLE__SWAP(__CMT_SOFT_TOP__, __CMT_SOFT_BOTTOM__);\
		__CMT_SOFT_WIDE__ = __CMT_SOFT_RIGHT__ - __CMT_SOFT_LEFT__;\
		__CMT_SOFT_HIGH__ = __CMT_SOFT_BOTTOM__ - __CMT_SOFT_TOP__;\
		\
		if (__CMT_SOFT_RADIUS__ > (__CMT_SOFT_WIDE__ / (long)2))\
			__CMT_SOFT_RADIUS__ = __CMT_SOFT_WIDE__ / (long)2;\
		\
		if (__CMT_SOFT_RADIUS__ > (__CMT_SOFT_HIGH__ / (long)2))\
			__CMT_SOFT_RADIUS__ = __CMT_SOFT_HIGH__ / (long)2;\
		\
		if (__CMT_SOFT_RADIUS__ < (long)0)\
			__CMT_SOFT_RADIUS__ = (long)0;\
		\
		for (\
			__CMT_SOFT_ROW__ = (long)0;\
			__CMT_SOFT_ROW__ <= __CMT_SOFT_HIGH__;\
			++__CMT_SOFT_ROW__\
		)\
		{\
			long	__CMT_SOFT_INSET__ = (long)0;\
			\
			if (__CMT_SOFT_ROW__ < __CMT_SOFT_RADIUS__)\
			{\
				LOCALMACRO__CMT_CONSOLE__ARC_INSET(\
					__CMT_SOFT_INSET__, __CMT_SOFT_RADIUS__,\
					__CMT_SOFT_RADIUS__ - __CMT_SOFT_ROW__\
				);\
			}\
			else if (\
				__CMT_SOFT_ROW__ > (__CMT_SOFT_HIGH__ - __CMT_SOFT_RADIUS__)\
			)\
			{\
				LOCALMACRO__CMT_CONSOLE__ARC_INSET(\
					__CMT_SOFT_INSET__, __CMT_SOFT_RADIUS__,\
					__CMT_SOFT_RADIUS__ -\
						(__CMT_SOFT_HIGH__ - __CMT_SOFT_ROW__)\
				);\
			}\
			\
			LOCALMACRO__CMT_CONSOLE__RUN (\
				CHARACTER, COLOR_VALUE,\
				__CMT_SOFT_LEFT__ + __CMT_SOFT_INSET__,\
				__CMT_SOFT_TOP__ + __CMT_SOFT_ROW__,\
				(__CMT_SOFT_WIDE__ - (__CMT_SOFT_INSET__ * (long)2)) + (long)1\
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
