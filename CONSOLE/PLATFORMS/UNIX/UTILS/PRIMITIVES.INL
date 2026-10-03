#ifndef CONSOLE_HPP
#ifndef CONSOLE_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_H */
#endif /* !CONSOLE_HPP */

/******************************************************************************\
|* SHAPE HELPERS. ATTRIBUTE, SWAP, SQRT, ARC_INSET, ELLIPSE_SPAN AND SCRATCH  *|
|* ARE THE SAME PURE ARITHMETIC AS IN THE WINDOWS BACKEND. PLOT AND RUN ARE   *|
|* THE TWO PLACES A SHAPE TOUCHES THE SCREEN; HERE THEY GO THROUGH CELL(),    *|
|* WHICH UPDATES THE SHADOW SCREEN AND THE TERMINAL TOGETHER.                 *|
\******************************************************************************/

#define LOCALMACRO__CMT_CONSOLE__ATTRIBUTE(COLOR_VALUE) \
	(\
		(unsigned short)(\
			((((unsigned short)((COLOR_VALUE) >> 4)) & 0X0F) << 4) | \
			(((unsigned short)(COLOR_VALUE)) & 0X0F)\
		)\
	)

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
					__CMT_SQRT_ROOT__ + \
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
			(__CMT_PLOT_X__ >= (long)0) && (__CMT_PLOT_Y__ >= (long)0) && \
			(__CMT_PLOT_X__ < (long)THIS->GET.WIDTH) && \
			(__CMT_PLOT_Y__ < (long)THIS->GET.HEIGHT)\
		)\
		{\
			const unsigned char	__CMT_PLOT_BYTE__ = \
				(unsigned char)(CHARACTER);\
			\
			LOCALMACRO__CMT_CONSOLE__CELL(\
				__CMT_PLOT_X__, __CMT_PLOT_Y__,\
				LOCALMACRO__CMT_CONSOLE__BYTE_GLYPH(__CMT_PLOT_BYTE__),\
				(COLOR_VALUE)\
			)\
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
		if ((__CMT_RUN_X__ + __CMT_RUN_LENGTH__) > (long)THIS->GET.WIDTH)\
			__CMT_RUN_LENGTH__ = (long)THIS->GET.WIDTH - __CMT_RUN_X__;\
		\
		if (\
			(__CMT_RUN_LENGTH__ > (long)0) && (__CMT_RUN_Y__ >= (long)0) && \
			(__CMT_RUN_Y__ < (long)THIS->GET.HEIGHT)\
		)\
		{\
			const unsigned char	__CMT_RUN_BYTE__ = (unsigned char)(CHARACTER);\
			const unsigned long	__CMT_RUN_GLYPH__ = \
				LOCALMACRO__CMT_CONSOLE__BYTE_GLYPH(__CMT_RUN_BYTE__);\
			\
			while (__CMT_RUN_LENGTH__-- > (long)0)\
			{\
				LOCALMACRO__CMT_CONSOLE__CELL(\
					__CMT_RUN_X__, __CMT_RUN_Y__, __CMT_RUN_GLYPH__,\
					(COLOR_VALUE)\
				)\
				++__CMT_RUN_X__;\
			}\
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
		double			__CMT_SPAN_REACH__;\
		double			__CMT_SPAN_REST__;\
		double			__CMT_SPAN_ROOT__;\
		\
		__CMT_SPAN_REACH__ = __CMT_SPAN_CY__ - (double)(ROW);\
		\
		if (__CMT_SPAN_REACH__ < 0.0)\
			__CMT_SPAN_REACH__ = -__CMT_SPAN_REACH__;\
		\
		__CMT_SPAN_REACH__ -= 0.5;\
		\
		if (__CMT_SPAN_REACH__ < 0.0)\
			__CMT_SPAN_REACH__ = 0.0;\
		\
		if (__CMT_SPAN_B__ <= 0.0)\
			__CMT_SPAN_OFF__ = 0.0;\
		else\
			__CMT_SPAN_OFF__ = __CMT_SPAN_REACH__ / __CMT_SPAN_B__;\
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

/******************************************************************************\
|* A GLYPH IS ONE CHARACTER CELL: THE UTF-8 BYTES OF ONE CHARACTER PACKED     *|
|* INTO AN UNSIGNED LONG, FIRST BYTE LOWEST. ASCII IS JUST ITS OWN CODE.      *|
|*                                                                            *|
|* A SINGLE BYTE CAN NOT BE UTF-8 ABOVE 0X7F, SO THE ONE BYTE CHARACTERS THE  *|
|* PUT.* SHAPES TAKE ARE READ AS CODE PAGE 437 (THE TABLE BELOW, THREE UTF-8  *|
|* BYTES PER ENTRY, ZERO PADDED). CONTROL CODES BECOME A SPACE.               *|
\******************************************************************************/

#define LOCALMACRO__CMT_CONSOLE__CP437 \
	"\303\207\000\303\274\000\303\251\000\303\242\000"\
	"\303\244\000\303\240\000\303\245\000\303\247\000"\
	"\303\252\000\303\253\000\303\250\000\303\257\000"\
	"\303\256\000\303\254\000\303\204\000\303\205\000"\
	"\303\211\000\303\246\000\303\206\000\303\264\000"\
	"\303\266\000\303\262\000\303\273\000\303\271\000"\
	"\303\277\000\303\226\000\303\234\000\302\242\000"\
	"\302\243\000\302\245\000\342\202\247\306\222\000"\
	"\303\241\000\303\255\000\303\263\000\303\272\000"\
	"\303\261\000\303\221\000\302\252\000\302\272\000"\
	"\302\277\000\342\214\220\302\254\000\302\275\000"\
	"\302\274\000\302\241\000\302\253\000\302\273\000"\
	"\342\226\221\342\226\222\342\226\223\342\224\202"\
	"\342\224\244\342\225\241\342\225\242\342\225\226"\
	"\342\225\225\342\225\243\342\225\221\342\225\227"\
	"\342\225\235\342\225\234\342\225\233\342\224\220"\
	"\342\224\224\342\224\264\342\224\254\342\224\234"\
	"\342\224\200\342\224\274\342\225\236\342\225\237"\
	"\342\225\232\342\225\224\342\225\251\342\225\246"\
	"\342\225\240\342\225\220\342\225\254\342\225\247"\
	"\342\225\250\342\225\244\342\225\245\342\225\231"\
	"\342\225\230\342\225\222\342\225\223\342\225\253"\
	"\342\225\252\342\224\230\342\224\214\342\226\210"\
	"\342\226\204\342\226\214\342\226\220\342\226\200"\
	"\316\261\000\303\237\000\316\223\000\317\200\000"\
	"\316\243\000\317\203\000\302\265\000\317\204\000"\
	"\316\246\000\316\230\000\316\251\000\316\264\000"\
	"\342\210\236\317\206\000\316\265\000\342\210\251"\
	"\342\211\241\302\261\000\342\211\245\342\211\244"\
	"\342\214\240\342\214\241\303\267\000\342\211\210"\
	"\302\260\000\342\210\231\302\267\000\342\210\232"\
	"\342\201\277\302\262\000\342\226\240\302\240\000"

#define LOCALMACRO__CMT_CONSOLE__CP437_BYTE(INDEX, AT) \
	((unsigned long)(\
		(const unsigned char *)LOCALMACRO__CMT_CONSOLE__CP437\
	)[((INDEX) * 3) + (AT)])

#define LOCALMACRO__CMT_CONSOLE__CP437_GLYPH(INDEX) \
	(\
		LOCALMACRO__CMT_CONSOLE__CP437_BYTE((INDEX), 0) |\
		(LOCALMACRO__CMT_CONSOLE__CP437_BYTE((INDEX), 1) << 8) |\
		(LOCALMACRO__CMT_CONSOLE__CP437_BYTE((INDEX), 2) << 16)\
	)

#define LOCALMACRO__CMT_CONSOLE__BYTE_GLYPH(BYTE) \
	(\
		(((unsigned int)(BYTE) < 0X20) || ((unsigned int)(BYTE) == 0X7F))\
		? (unsigned long)' '\
		: (\
			((unsigned int)(BYTE) < 0X80)\
			? (unsigned long)(BYTE)\
			: LOCALMACRO__CMT_CONSOLE__CP437_GLYPH(\
				(unsigned int)(BYTE) - 0X80\
			)\
		)\
	)

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
