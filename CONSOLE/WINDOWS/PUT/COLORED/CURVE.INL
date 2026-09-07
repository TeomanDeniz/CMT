#ifndef CONSOLE_HPP
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_HPP */

#define LOCALMACRO__CMT_CONSOLE__PUT_COLORED_CURVE_CONTENT \
	do\
	{\
		const double	__CMT_CURVE_AX__ = (double)(long)(START_X);\
		const double	__CMT_CURVE_AY__ = (double)(long)(START_Y);\
		const double	__CMT_CURVE_DX__ = (double)(long)(END_X);\
		const double	__CMT_CURVE_DY__ = (double)(long)(END_Y);\
		const double	__CMT_CURVE_VX__ = __CMT_CURVE_DX__ - __CMT_CURVE_AX__;\
		const double	__CMT_CURVE_VY__ = __CMT_CURVE_DY__ - __CMT_CURVE_AY__;\
		double			__CMT_CURVE_LENGTH__;\
		double			__CMT_CURVE_NX__;\
		double			__CMT_CURVE_NY__;\
		double			__CMT_CURVE_BX__;\
		double			__CMT_CURVE_BY__;\
		double			__CMT_CURVE_CX__;\
		double			__CMT_CURVE_CY__;\
		long			__CMT_CURVE_STEPS__;\
		long			__CMT_CURVE_STEP__;\
		\
		LOCALMACRO__CMT_CONSOLE__SQRT(\
			__CMT_CURVE_LENGTH__,\
			(__CMT_CURVE_VX__ * __CMT_CURVE_VX__) +\
			(__CMT_CURVE_VY__ * __CMT_CURVE_VY__)\
		);\
		\
		if (__CMT_CURVE_LENGTH__ < 1.0)\
			__CMT_CURVE_LENGTH__ = 1.0;\
		\
		__CMT_CURVE_NX__ = -(__CMT_CURVE_VY__ / __CMT_CURVE_LENGTH__);\
		__CMT_CURVE_NY__ = (__CMT_CURVE_VX__ / __CMT_CURVE_LENGTH__);\
		__CMT_CURVE_BX__ = __CMT_CURVE_AX__ + (__CMT_CURVE_VX__ / 3.0) +\
			(__CMT_CURVE_NX__ * (double)(CURVE_START));\
		__CMT_CURVE_BY__ = __CMT_CURVE_AY__ + (__CMT_CURVE_VY__ / 3.0) +\
			(__CMT_CURVE_NY__ * (double)(CURVE_START));\
		__CMT_CURVE_CX__ = __CMT_CURVE_DX__ - (__CMT_CURVE_VX__ / 3.0) +\
			(__CMT_CURVE_NX__ * (double)(CURVE_END));\
		__CMT_CURVE_CY__ = __CMT_CURVE_DY__ - (__CMT_CURVE_VY__ / 3.0) +\
			(__CMT_CURVE_NY__ * (double)(CURVE_END));\
		__CMT_CURVE_STEPS__ = (long)(__CMT_CURVE_LENGTH__ * 4.0) + (long)8;\
		\
		for (\
			__CMT_CURVE_STEP__ = (long)0;\
			__CMT_CURVE_STEP__ <= __CMT_CURVE_STEPS__;\
			++__CMT_CURVE_STEP__\
		)\
		{\
			const double	__CMT_CURVE_T__ =\
				(double)__CMT_CURVE_STEP__ / (double)__CMT_CURVE_STEPS__;\
			const double	__CMT_CURVE_U__ = 1.0 - __CMT_CURVE_T__;\
			const double	__CMT_CURVE_W0__ =\
				__CMT_CURVE_U__ * __CMT_CURVE_U__ * __CMT_CURVE_U__;\
			const double	__CMT_CURVE_W1__ =\
				3.0 * __CMT_CURVE_U__ * __CMT_CURVE_U__ * __CMT_CURVE_T__;\
			const double	__CMT_CURVE_W2__ =\
				3.0 * __CMT_CURVE_U__ * __CMT_CURVE_T__ * __CMT_CURVE_T__;\
			const double	__CMT_CURVE_W3__ =\
				__CMT_CURVE_T__ * __CMT_CURVE_T__ * __CMT_CURVE_T__;\
			\
			LOCALMACRO__CMT_CONSOLE__PLOT (\
				CHARACTER, COLOR_VALUE,\
				(long)(\
					((__CMT_CURVE_W0__ * __CMT_CURVE_AX__) +\
					(__CMT_CURVE_W1__ * __CMT_CURVE_BX__) +\
					(__CMT_CURVE_W2__ * __CMT_CURVE_CX__) +\
					(__CMT_CURVE_W3__ * __CMT_CURVE_DX__)) + 0.5\
				),\
				(long)(\
					((__CMT_CURVE_W0__ * __CMT_CURVE_AY__) +\
					(__CMT_CURVE_W1__ * __CMT_CURVE_BY__) +\
					(__CMT_CURVE_W2__ * __CMT_CURVE_CY__) +\
					(__CMT_CURVE_W3__ * __CMT_CURVE_DY__)) + 0.5\
				)\
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
