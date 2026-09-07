#ifndef CONSOLE_HPP
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_HPP */

#define LOCALMACRO__CMT_CONSOLE__PUT_COLORED_LINE_CONTENT \
	do\
	{\
		long	__CMT_LINE_X0__ = (long)(START_X);\
		long	__CMT_LINE_Y0__ = (long)(START_Y);\
		long	__CMT_LINE_X1__ = (long)(END_X);\
		long	__CMT_LINE_Y1__ = (long)(END_Y);\
		\
		if (__CMT_LINE_Y0__ == __CMT_LINE_Y1__)\
		{\
			LOCALMACRO__CMT_CONSOLE__SWAP(__CMT_LINE_X0__, __CMT_LINE_X1__);\
			LOCALMACRO__CMT_CONSOLE__RUN (\
				CHARACTER, COLOR_VALUE, __CMT_LINE_X0__, __CMT_LINE_Y0__,\
				(__CMT_LINE_X1__ - __CMT_LINE_X0__) + (long)1\
			);\
		}\
		else\
		{\
			long	__CMT_LINE_DX__ = __CMT_LINE_X1__ - __CMT_LINE_X0__;\
			long	__CMT_LINE_DY__ = __CMT_LINE_Y1__ - __CMT_LINE_Y0__;\
			long	__CMT_LINE_SX__ = \
				(__CMT_LINE_DX__ < (long)0) ? -(long)1 : (long)1;\
			long	__CMT_LINE_SY__ = \
				(__CMT_LINE_DY__ < (long)0) ? -(long)1 : (long)1;\
			long	__CMT_LINE_ERROR__;\
			long	__CMT_LINE_DOUBLE__;\
			\
			if (__CMT_LINE_DX__ < (long)0)\
				__CMT_LINE_DX__ = -__CMT_LINE_DX__;\
			\
			if (__CMT_LINE_DY__ > (long)0)\
				__CMT_LINE_DY__ = -__CMT_LINE_DY__;\
			\
			__CMT_LINE_ERROR__ = __CMT_LINE_DX__ + __CMT_LINE_DY__;\
			\
			while (1)\
			{\
				LOCALMACRO__CMT_CONSOLE__PLOT (\
					CHARACTER, COLOR_VALUE, __CMT_LINE_X0__, __CMT_LINE_Y0__\
				);\
				\
				if (\
					(__CMT_LINE_X0__ == __CMT_LINE_X1__) &&\
					(__CMT_LINE_Y0__ == __CMT_LINE_Y1__)\
				)\
					break ;\
				\
				__CMT_LINE_DOUBLE__ = __CMT_LINE_ERROR__ * (long)2;\
				\
				if (__CMT_LINE_DOUBLE__ >= __CMT_LINE_DY__)\
				{\
					if (__CMT_LINE_X0__ == __CMT_LINE_X1__)\
						break ;\
					\
					__CMT_LINE_ERROR__ += __CMT_LINE_DY__;\
					__CMT_LINE_X0__ += __CMT_LINE_SX__;\
				}\
				\
				if (__CMT_LINE_DOUBLE__ <= __CMT_LINE_DX__)\
				{\
					if (__CMT_LINE_Y0__ == __CMT_LINE_Y1__)\
						break ;\
					\
					__CMT_LINE_ERROR__ += __CMT_LINE_DX__;\
					__CMT_LINE_Y0__ += __CMT_LINE_SY__;\
				}\
			}\
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
