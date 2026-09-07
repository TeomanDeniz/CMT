#ifndef CONSOLE_HPP
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_HPP */

#define LOCALMACRO__CMT_CONSOLE__PUT_COLORED_CIRCLE_CONTENT \
	do\
	{\
		long	__CMT_RING_LEFT__ = (long)(START_X);\
		long	__CMT_RING_RIGHT__ = (long)(END_X);\
		long	__CMT_RING_TOP__ = (long)(START_Y);\
		long	__CMT_RING_BOTTOM__ = (long)(END_Y);\
		long	__CMT_RING_ROW__;\
		long	__CMT_RING_FROM__ = (long)0;\
		long	__CMT_RING_TO__ = (long)0;\
		long	__CMT_RING_WAS_FROM__ = (long)0;\
		long	__CMT_RING_WAS_TO__ = (long)0;\
		int		__CMT_RING_VALID__;\
		int		__CMT_RING_FIRST__ = 1;\
		\
		LOCALMACRO__CMT_CONSOLE__SWAP(__CMT_RING_LEFT__, __CMT_RING_RIGHT__);\
		LOCALMACRO__CMT_CONSOLE__SWAP(__CMT_RING_TOP__, __CMT_RING_BOTTOM__);\
		\
		for (\
			__CMT_RING_ROW__ = __CMT_RING_TOP__;\
			__CMT_RING_ROW__ <= __CMT_RING_BOTTOM__;\
			++__CMT_RING_ROW__\
		)\
		{\
			LOCALMACRO__CMT_CONSOLE__ELLIPSE_SPAN(\
				__CMT_RING_FROM__, __CMT_RING_TO__, __CMT_RING_VALID__,\
				__CMT_RING_ROW__, __CMT_RING_LEFT__, __CMT_RING_TOP__,\
				__CMT_RING_RIGHT__, __CMT_RING_BOTTOM__\
			);\
			\
			if (!__CMT_RING_VALID__)\
				continue ;\
			\
			if (\
				__CMT_RING_FIRST__ || (__CMT_RING_ROW__ == __CMT_RING_BOTTOM__)\
			)\
			{\
				LOCALMACRO__CMT_CONSOLE__RUN (\
					CHARACTER, COLOR_VALUE, __CMT_RING_FROM__,\
					__CMT_RING_ROW__,\
					(__CMT_RING_TO__ - __CMT_RING_FROM__) + (long)1\
				);\
				__CMT_RING_FIRST__ = 0;\
			}\
			else\
			{\
				if (__CMT_RING_FROM__ < __CMT_RING_WAS_FROM__)\
				{\
					LOCALMACRO__CMT_CONSOLE__RUN (\
						CHARACTER, COLOR_VALUE, __CMT_RING_FROM__,\
						__CMT_RING_ROW__,\
						__CMT_RING_WAS_FROM__ - __CMT_RING_FROM__\
					);\
				}\
				else if (__CMT_RING_FROM__ > __CMT_RING_WAS_FROM__)\
				{\
					LOCALMACRO__CMT_CONSOLE__RUN (\
						CHARACTER, COLOR_VALUE, __CMT_RING_WAS_FROM__,\
						__CMT_RING_ROW__ - (long)1,\
						__CMT_RING_FROM__ - __CMT_RING_WAS_FROM__\
					);\
				}\
				\
				LOCALMACRO__CMT_CONSOLE__PLOT (\
					CHARACTER, COLOR_VALUE, __CMT_RING_FROM__, __CMT_RING_ROW__\
				);\
				\
				if (__CMT_RING_TO__ > __CMT_RING_WAS_TO__)\
				{\
					LOCALMACRO__CMT_CONSOLE__RUN (\
						CHARACTER, COLOR_VALUE, __CMT_RING_WAS_TO__ + (long)1,\
						__CMT_RING_ROW__,\
						__CMT_RING_TO__ - __CMT_RING_WAS_TO__\
					);\
				}\
				else if (__CMT_RING_TO__ < __CMT_RING_WAS_TO__)\
				{\
					LOCALMACRO__CMT_CONSOLE__RUN (\
						CHARACTER, COLOR_VALUE, __CMT_RING_TO__ + (long)1,\
						__CMT_RING_ROW__ - 1L,\
						__CMT_RING_WAS_TO__ - __CMT_RING_TO__\
					);\
				}\
				\
				LOCALMACRO__CMT_CONSOLE__PLOT (\
					CHARACTER, COLOR_VALUE, __CMT_RING_TO__, __CMT_RING_ROW__\
				);\
			}\
			\
			__CMT_RING_WAS_FROM__ = __CMT_RING_FROM__;\
			__CMT_RING_WAS_TO__ = __CMT_RING_TO__;\
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
