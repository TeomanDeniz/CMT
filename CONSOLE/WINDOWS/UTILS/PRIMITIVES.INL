#ifndef CONSOLE_HPP
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_HPP */

#define LOCALMACRO__CMT_CONSOLE__ATTRIBUTE(COLOR_VALUE) \
	((unsigned short)(\
		((((unsigned short)((COLOR_VALUE) >> 4)) & 0X0F) << 4) |\
		(((unsigned short)(COLOR_VALUE)) & 0X0F)\
	))

#define LOCALMACRO__CMT_CONSOLE__SWAP(FIRST, SECOND) \
	do\
	{\
		if ((FIRST) > (SECOND))\
		{\
			const long	__CMT_SWAP__ = (FIRST);\
			\
			(FIRST) = (SECOND);\
			(SECOND) = __CMT_SWAP__;\
		}\
	}\
	while (0);

#define LOCALMACRO__CMT_CONSOLE__SQRT(RESULT, VALUE) \
	do\
	{\
		double	__CMT_SQRT_VALUE__ = (double)(VALUE);\
		double	__CMT_SQRT_ROOT__;\
		int		__CMT_SQRT_STEP__;\
		\
		if (__CMT_SQRT_VALUE__ <= 0.0)\
			__CMT_SQRT_ROOT__ = 0.0;\
		else\
		{\
			__CMT_SQRT_ROOT__ = __CMT_SQRT_VALUE__;\
			\
			if (__CMT_SQRT_ROOT__ < 1.0)\
				__CMT_SQRT_ROOT__ = 1.0;\
			\
			for (\
				__CMT_SQRT_STEP__ = 0;\
				__CMT_SQRT_STEP__ < 32;\
				++__CMT_SQRT_STEP__\
			)\
				__CMT_SQRT_ROOT__ = 0.5 * (\
					__CMT_SQRT_ROOT__ +\
					(__CMT_SQRT_VALUE__ / __CMT_SQRT_ROOT__)\
				);\
		}\
		\
		(RESULT) = __CMT_SQRT_ROOT__;\
	}\
	while (0);

#define LOCALMACRO__CMT_CONSOLE__PLOT(CHARACTER, COLOR_VALUE, AT_X, AT_Y) \
	do\
	{\
		const long	__CMT_PLOT_X__ = (long)(AT_X);\
		const long	__CMT_PLOT_Y__ = (long)(AT_Y);\
		\
		if (\
			(__CMT_PLOT_X__ >= (long)0) && (__CMT_PLOT_Y__ >= (long)0) &&\
			(__CMT_PLOT_X__ < (long)THIS->get.width) &&\
			(__CMT_PLOT_Y__ < (long)THIS->get.height)\
		)\
		{\
			const char			__CMT_PLOT_CHARACTER__ = (char)(CHARACTER);\
			const unsigned short	__CMT_PLOT_ATTRIBUTE__ =\
				LOCALMACRO__CMT_CONSOLE__ATTRIBUTE (COLOR_VALUE);\
			struct S_COORD		__CMT_PLOT_AT__;\
			unsigned long		__CMT_PLOT_DONE__;\
			\
			__CMT_PLOT_AT__.X = (short)__CMT_PLOT_X__;\
			__CMT_PLOT_AT__.Y = (short)__CMT_PLOT_Y__;\
			KERNEL32.WriteConsoleOutputCharacterA(\
				THIS->_OUT_HANDLE, &__CMT_PLOT_CHARACTER__, (unsigned long)1,\
				__CMT_PLOT_AT__, &__CMT_PLOT_DONE__\
			);\
			KERNEL32.WriteConsoleOutputAttribute(\
				THIS->_OUT_HANDLE, &__CMT_PLOT_ATTRIBUTE__, (unsigned long)1,\
				__CMT_PLOT_AT__, &__CMT_PLOT_DONE__\
			);\
		}\
	}\
	while (0);

#define LOCALMACRO__CMT_CONSOLE__RUN(\
	CHARACTER, COLOR_VALUE, AT_X, AT_Y, LENGTH\
) \
	do\
	{\
		long			__CMT_RUN_X__ = (long)(AT_X);\
		long			__CMT_RUN_LENGTH__ = (long)(LENGTH);\
		const long		__CMT_RUN_Y__ = (long)(AT_Y);\
		\
		if (__CMT_RUN_X__ < (long)0)\
		{\
			__CMT_RUN_LENGTH__ += __CMT_RUN_X__;\
			__CMT_RUN_X__ = (long)0;\
		}\
		\
		if ((__CMT_RUN_X__ + __CMT_RUN_LENGTH__) > (long)THIS->get.width)\
			__CMT_RUN_LENGTH__ = (long)THIS->get.width - __CMT_RUN_X__;\
		\
		if (\
			(__CMT_RUN_LENGTH__ > (long)0) && (__CMT_RUN_Y__ >= (long)0) &&\
			(__CMT_RUN_Y__ < (long)THIS->get.height)\
		)\
		{\
			struct S_COORD	__CMT_RUN_AT__;\
			unsigned long	__CMT_RUN_DONE__;\
			const unsigned short	__CMT_RUN_ATTRIBUTE__ =\
				LOCALMACRO__CMT_CONSOLE__ATTRIBUTE(COLOR_VALUE);\
			\
			__CMT_RUN_AT__.X = (short)__CMT_RUN_X__;\
			__CMT_RUN_AT__.Y = (short)__CMT_RUN_Y__;\
			KERNEL32.FillConsoleOutputCharacterA(\
				THIS->_OUT_HANDLE, (char)(CHARACTER),\
				(unsigned long)__CMT_RUN_LENGTH__, __CMT_RUN_AT__,\
				&__CMT_RUN_DONE__\
			);\
			KERNEL32.FillConsoleOutputAttribute(\
				THIS->_OUT_HANDLE, __CMT_RUN_ATTRIBUTE__,\
				(unsigned long)__CMT_RUN_LENGTH__, __CMT_RUN_AT__,\
				&__CMT_RUN_DONE__\
			);\
		}\
	}\
	while (0);

#define LOCALMACRO__CMT_CONSOLE__ARC_INSET(RESULT, RADIUS, DISTANCE) \
	do\
	{\
		const double	__CMT_ARC_R__ = (double)(long)(RADIUS);\
		const double	__CMT_ARC_D__ = (double)(long)(DISTANCE);\
		double			__CMT_ARC_ROOT__;\
		\
		LOCALMACRO__CMT_CONSOLE__SQRT(\
			__CMT_ARC_ROOT__,\
			(__CMT_ARC_R__ * __CMT_ARC_R__) - (__CMT_ARC_D__ * __CMT_ARC_D__)\
		);\
		(RESULT) = (long)(__CMT_ARC_R__ - __CMT_ARC_ROOT__ + 0.5);\
	}\
	while (0);

#define LOCALMACRO__CMT_CONSOLE__ELLIPSE_SPAN(\
	LEFT, RIGHT, VALID, ROW, X0, Y0, X1, Y1\
) \
	do\
	{\
		const double	__CMT_SPAN_A__ = ((double)((X1) - (X0))) / 2.0;\
		const double	__CMT_SPAN_B__ = ((double)((Y1) - (Y0))) / 2.0;\
		const double	__CMT_SPAN_CX__ = ((double)(X0) + (double)(X1)) / 2.0;\
		const double	__CMT_SPAN_CY__ = ((double)(Y0) + (double)(Y1)) / 2.0;\
		double			__CMT_SPAN_OFF__;\
		double			__CMT_SPAN_REST__;\
		double			__CMT_SPAN_ROOT__;\
		\
		if (__CMT_SPAN_B__ <= 0.0)\
			__CMT_SPAN_OFF__ = 0.0;\
		else\
		{\
			__CMT_SPAN_OFF__ = \
				((double)(ROW) - __CMT_SPAN_CY__) / __CMT_SPAN_B__;\
		}\
		\
		__CMT_SPAN_REST__ = 1.0 - (__CMT_SPAN_OFF__ * __CMT_SPAN_OFF__);\
		\
		if (__CMT_SPAN_REST__ < 0.0)\
		{\
			if (__CMT_SPAN_REST__ > -0.000001)\
				__CMT_SPAN_REST__ = 0.0;\
		}\
		\
		if (__CMT_SPAN_REST__ < 0.0)\
			(VALID) = 0;\
		else\
		{\
			LOCALMACRO__CMT_CONSOLE__SQRT(\
				__CMT_SPAN_ROOT__, __CMT_SPAN_REST__\
			);\
			__CMT_SPAN_ROOT__ *= __CMT_SPAN_A__;\
			(LEFT) = (long)((__CMT_SPAN_CX__ - __CMT_SPAN_ROOT__) + 0.5);\
			(RIGHT) = (long)((__CMT_SPAN_CX__ + __CMT_SPAN_ROOT__) + 0.5);\
			(VALID) = 1;\
		}\
	}\
	while (0);

#define LOCALMACRO__CMT_CONSOLE__SCRATCH(RESULT, BYTES) \
	do\
	{\
		const unsigned long	__CMT_SCRATCH_NEED__ = (unsigned long)(BYTES);\
		\
		if (THIS->_SCRATCH_SIZE < __CMT_SCRATCH_NEED__)\
		{\
			PTR	__CMT_SCRATCH_BLOCK__;\
			\
			if (!THIS->_SCRATCH_DATA)\
				__CMT_SCRATCH_BLOCK__ = ALLOC((LET)__CMT_SCRATCH_NEED__);\
			else\
				__CMT_SCRATCH_BLOCK__ = REALLOC(\
					THIS->_SCRATCH_DATA, (LET)__CMT_SCRATCH_NEED__\
				);\
			\
			if (__CMT_SCRATCH_BLOCK__)\
			{\
				THIS->_SCRATCH_DATA = __CMT_SCRATCH_BLOCK__;\
				THIS->_SCRATCH_SIZE = __CMT_SCRATCH_NEED__;\
			}\
		}\
		\
		if (THIS->_SCRATCH_SIZE >= __CMT_SCRATCH_NEED__)\
			(RESULT) = THIS->_SCRATCH_DATA;\
		else\
			(RESULT) = (PTR)0;\
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
