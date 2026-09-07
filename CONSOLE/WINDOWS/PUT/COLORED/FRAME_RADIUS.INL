#ifndef CONSOLE_HPP
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_HPP */

#define LOCALMACRO__CMT_CONSOLE__PUT_COLORED_FRAME_RADIUS_CONTENT \
	do\
	{\
		long	__CMT_ROUND_LEFT__ = (long)(START_X);\
		long	__CMT_ROUND_RIGHT__ = (long)(END_X);\
		long	__CMT_ROUND_TOP__ = (long)(START_Y);\
		long	__CMT_ROUND_BOTTOM__ = (long)(END_Y);\
		long	__CMT_ROUND_RADIUS__ = (long)(RADIUS);\
		long	__CMT_ROUND_STEP__;\
		long	__CMT_ROUND_INSET__;\
		long	__CMT_ROUND_PREVIOUS__;\
		long	__CMT_ROUND_WIDE__;\
		long	__CMT_ROUND_HIGH__;\
		\
		LOCALMACRO__CMT_CONSOLE__SWAP(__CMT_ROUND_LEFT__, __CMT_ROUND_RIGHT__);\
		LOCALMACRO__CMT_CONSOLE__SWAP(__CMT_ROUND_TOP__, __CMT_ROUND_BOTTOM__);\
		__CMT_ROUND_WIDE__ = __CMT_ROUND_RIGHT__ - __CMT_ROUND_LEFT__;\
		__CMT_ROUND_HIGH__ = __CMT_ROUND_BOTTOM__ - __CMT_ROUND_TOP__;\
		\
		if (__CMT_ROUND_RADIUS__ > (__CMT_ROUND_WIDE__ / (long)2))\
			__CMT_ROUND_RADIUS__ = __CMT_ROUND_WIDE__ / (long)2;\
		\
		if (__CMT_ROUND_RADIUS__ > (__CMT_ROUND_HIGH__ / (long)2))\
			__CMT_ROUND_RADIUS__ = __CMT_ROUND_HIGH__ / (long)2;\
		\
		if (__CMT_ROUND_RADIUS__ < (long)1)\
		{\
			THIS->put.colored.frame(\
				CHARACTER, COLOR_VALUE,\
				(unsigned int)__CMT_ROUND_LEFT__,\
				(unsigned int)__CMT_ROUND_TOP__,\
				(unsigned int)__CMT_ROUND_RIGHT__,\
				(unsigned int)__CMT_ROUND_BOTTOM__\
			);\
			break ;\
		}\
		\
		LOCALMACRO__CMT_CONSOLE__RUN (\
			CHARACTER, COLOR_VALUE,\
			__CMT_ROUND_LEFT__ + __CMT_ROUND_RADIUS__, __CMT_ROUND_TOP__,\
			(__CMT_ROUND_WIDE__ - (__CMT_ROUND_RADIUS__ * (long)2)) + (long)1\
		);\
		LOCALMACRO__CMT_CONSOLE__RUN (\
			CHARACTER, COLOR_VALUE,\
			__CMT_ROUND_LEFT__ + __CMT_ROUND_RADIUS__, __CMT_ROUND_BOTTOM__,\
			(__CMT_ROUND_WIDE__ - (__CMT_ROUND_RADIUS__ * (long)2)) + (long)1\
		);\
		\
		for (\
			__CMT_ROUND_STEP__ = __CMT_ROUND_RADIUS__;\
			__CMT_ROUND_STEP__ <= (__CMT_ROUND_HIGH__ - __CMT_ROUND_RADIUS__);\
			++__CMT_ROUND_STEP__\
		)\
		{\
			LOCALMACRO__CMT_CONSOLE__PLOT (\
				CHARACTER, COLOR_VALUE, __CMT_ROUND_LEFT__,\
				__CMT_ROUND_TOP__ + __CMT_ROUND_STEP__\
			);\
			LOCALMACRO__CMT_CONSOLE__PLOT (\
				CHARACTER, COLOR_VALUE, __CMT_ROUND_RIGHT__,\
				__CMT_ROUND_TOP__ + __CMT_ROUND_STEP__\
			);\
		}\
		\
		__CMT_ROUND_PREVIOUS__ = __CMT_ROUND_RADIUS__;\
		\
		for (\
			__CMT_ROUND_STEP__ = (long)0;\
			__CMT_ROUND_STEP__ <= __CMT_ROUND_RADIUS__;\
			++__CMT_ROUND_STEP__\
		)\
		{\
			long	__CMT_ROUND_SPAN__;\
			\
			LOCALMACRO__CMT_CONSOLE__ARC_INSET(\
				__CMT_ROUND_INSET__, __CMT_ROUND_RADIUS__,\
				__CMT_ROUND_RADIUS__ - __CMT_ROUND_STEP__\
			);\
			__CMT_ROUND_SPAN__ = __CMT_ROUND_PREVIOUS__ - __CMT_ROUND_INSET__;\
			\
			if (__CMT_ROUND_SPAN__ < (long)1)\
				__CMT_ROUND_SPAN__ = (long)1;\
			\
			LOCALMACRO__CMT_CONSOLE__RUN (\
				CHARACTER, COLOR_VALUE,\
				__CMT_ROUND_LEFT__ + __CMT_ROUND_INSET__,\
				__CMT_ROUND_TOP__ + __CMT_ROUND_STEP__, __CMT_ROUND_SPAN__\
			);\
			LOCALMACRO__CMT_CONSOLE__RUN (\
				CHARACTER, COLOR_VALUE,\
				(__CMT_ROUND_RIGHT__ - __CMT_ROUND_INSET__) -\
					(__CMT_ROUND_SPAN__ - (long)1),\
				__CMT_ROUND_TOP__ + __CMT_ROUND_STEP__, __CMT_ROUND_SPAN__\
			);\
			LOCALMACRO__CMT_CONSOLE__RUN (\
				CHARACTER, COLOR_VALUE,\
				__CMT_ROUND_LEFT__ + __CMT_ROUND_INSET__,\
				__CMT_ROUND_BOTTOM__ - __CMT_ROUND_STEP__, __CMT_ROUND_SPAN__\
			);\
			LOCALMACRO__CMT_CONSOLE__RUN (\
				CHARACTER, COLOR_VALUE,\
				(__CMT_ROUND_RIGHT__ - __CMT_ROUND_INSET__) -\
					(__CMT_ROUND_SPAN__ - (long)1),\
				__CMT_ROUND_BOTTOM__ - __CMT_ROUND_STEP__, __CMT_ROUND_SPAN__\
			);\
			__CMT_ROUND_PREVIOUS__ = __CMT_ROUND_INSET__;\
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
