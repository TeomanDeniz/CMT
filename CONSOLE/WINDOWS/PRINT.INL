#ifndef CONSOLE_HPP
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_HPP */

/******************************************************************************\
|* A SELF CONTAINED FORMATTER. IT DOES NOT CALL THE C RUNTIME: EVERYTHING IS  *|
|* ASSEMBLED INTO A LOCAL BUFFER AND HANDED TO LOG() IN CHUNKS, SO PRINT()    *|
|* HONOURS PUSH/POP AND THE CURSOR BOOKKEEPING LIKE ANY OTHER LOG OUTPUT.     *|
|*                                                                            *|
|* SUPPORTED: %d %i %u %o %x %X %b %c %s %p %f %F %%                          *|
|* FLAGS:     - 0 + space      WIDTH AND PRECISION: DIGITS OR *               *|
|* LENGTH:    l ll h hh z j t  (ONLY L IS MEANINGFUL HERE)                    *|
|*                                                                            *|
|* THE HELPERS BELOW READ PRINT_WIDTH, PRINT_PRECISION, PRINT_LEFT,           *|
|* PRINT_ZERO, PRINT_SIGN AND PRINT_SPACE OUT OF THE ENCLOSING SCOPE.         *|
\******************************************************************************/

#define LOCALMACRO__CMT_CONSOLE__PRINT_EMIT(CHARACTER) \
	do\
	{\
		PRINT_BUFFER[PRINT_FILL++] = (char)(CHARACTER);\
		\
		if (PRINT_FILL >= 960)\
		{\
			PRINT_BUFFER[PRINT_FILL] = (char)0;\
			THIS->log(PRINT_BUFFER);\
			PRINT_FILL = 0;\
		}\
	}\
	while (0);

#define LOCALMACRO__CMT_CONSOLE__PRINT_PAD(CHARACTER, COUNT) \
	do\
	{\
		long	__CMT_PAD_LEFT__ = (long)(COUNT);\
		\
		while (__CMT_PAD_LEFT__-- > (long)0)\
			LOCALMACRO__CMT_CONSOLE__PRINT_EMIT(CHARACTER)\
	}\
	while (0);

#define LOCALMACRO__CMT_CONSOLE__PRINT_NUMBER(VALUE, NEGATIVE, BASE, UPPER) \
	do\
	{\
		unsigned long	__CMT_NUM_LEFT__ = (unsigned long)(VALUE);\
		const int		__CMT_NUM_ZERO__ = \
			(__CMT_NUM_LEFT__ == (unsigned long)0);\
		const unsigned long	__CMT_NUM_BASE__ = (unsigned long)(BASE);\
		char			__CMT_NUM_DIGITS__[72];\
		int				__CMT_NUM_COUNT__ = 0;\
		char			__CMT_NUM_SIGN__ = (char)0;\
		char			__CMT_NUM_PREFIX__[2];\
		int				__CMT_NUM_PRELEN__ = 0;\
		long			__CMT_NUM_PAD__;\
		\
		if (!__CMT_NUM_LEFT__)\
			__CMT_NUM_DIGITS__[__CMT_NUM_COUNT__++] = '0';\
		\
		while (__CMT_NUM_LEFT__)\
		{\
			const int	__CMT_NUM_DIGIT__ =\
				(int)(__CMT_NUM_LEFT__ % __CMT_NUM_BASE__);\
			\
			if (__CMT_NUM_DIGIT__ < 10)\
				__CMT_NUM_DIGITS__[__CMT_NUM_COUNT__++] = \
					(char)('0' + __CMT_NUM_DIGIT__);\
			else\
			{\
				if (UPPER)\
					__CMT_NUM_DIGITS__[__CMT_NUM_COUNT__++] = \
						(char)('A' + (__CMT_NUM_DIGIT__ - 10));\
				else\
					__CMT_NUM_DIGITS__[__CMT_NUM_COUNT__++] = \
						(char)('a' + (__CMT_NUM_DIGIT__ - 10));\
			}\
			\
			__CMT_NUM_LEFT__ = __CMT_NUM_LEFT__ / __CMT_NUM_BASE__;\
		}\
	\
		while (\
			((long)__CMT_NUM_COUNT__ < PRINT_PRECISION) &&\
			(__CMT_NUM_COUNT__ < (int)(sizeof(__CMT_NUM_DIGITS__) - 1))\
		)\
			__CMT_NUM_DIGITS__[__CMT_NUM_COUNT__++] = '0';\
		\
		if (NEGATIVE)\
			__CMT_NUM_SIGN__ = '-';\
		else if (PRINT_SIGN)\
			__CMT_NUM_SIGN__ = '+';\
		else if (PRINT_SPACE)\
			__CMT_NUM_SIGN__ = ' ';\
		\
		if (PRINT_ALT)\
		{\
			if ((__CMT_NUM_BASE__ == (unsigned long)16) && (!__CMT_NUM_ZERO__))\
			{\
				__CMT_NUM_PREFIX__[0] = '0';\
				\
				if (UPPER)\
					__CMT_NUM_PREFIX__[1] = 'X';\
				else\
					__CMT_NUM_PREFIX__[1] = 'x';\
				\
				__CMT_NUM_PRELEN__ = 2;\
			}\
			else if (\
				(__CMT_NUM_BASE__ == (unsigned long)2) && (!__CMT_NUM_ZERO__)\
			)\
			{\
				__CMT_NUM_PREFIX__[0] = '0';\
				\
				if (UPPER)\
					__CMT_NUM_PREFIX__[1] = 'B';\
				else\
					__CMT_NUM_PREFIX__[1] = 'b';\
				\
				__CMT_NUM_PRELEN__ = 2;\
			}\
			else if ((__CMT_NUM_BASE__ == (unsigned long)8) &&\
				(__CMT_NUM_DIGITS__[__CMT_NUM_COUNT__ - 1] != '0'))\
			{\
				__CMT_NUM_PREFIX__[0] = '0';\
				__CMT_NUM_PRELEN__ = 1;\
			}\
		}\
		\
		if (__CMT_NUM_SIGN__)\
			__CMT_NUM_PAD__ = \
				PRINT_WIDTH - (long)__CMT_NUM_COUNT__ - (long)1 - \
				(long)__CMT_NUM_PRELEN__;\
		else\
			__CMT_NUM_PAD__ = \
				PRINT_WIDTH - (long)__CMT_NUM_COUNT__ -\
				(long)__CMT_NUM_PRELEN__;\
		\
		if ((!PRINT_LEFT) && ((!PRINT_ZERO) || (PRINT_PRECISION >= (long)0)))\
			LOCALMACRO__CMT_CONSOLE__PRINT_PAD(' ', __CMT_NUM_PAD__)\
		\
		if (__CMT_NUM_SIGN__)\
			LOCALMACRO__CMT_CONSOLE__PRINT_EMIT(__CMT_NUM_SIGN__)\
		\
		if (__CMT_NUM_PRELEN__ > 0)\
			LOCALMACRO__CMT_CONSOLE__PRINT_EMIT(__CMT_NUM_PREFIX__[0])\
		\
		if (__CMT_NUM_PRELEN__ > 1)\
			LOCALMACRO__CMT_CONSOLE__PRINT_EMIT(__CMT_NUM_PREFIX__[1])\
		\
		if ((!PRINT_LEFT) && PRINT_ZERO && (PRINT_PRECISION < (long)0))\
			LOCALMACRO__CMT_CONSOLE__PRINT_PAD('0', __CMT_NUM_PAD__)\
		\
		while (__CMT_NUM_COUNT__ > 0)\
			LOCALMACRO__CMT_CONSOLE__PRINT_EMIT(\
				__CMT_NUM_DIGITS__[--__CMT_NUM_COUNT__]\
			)\
		\
		if (PRINT_LEFT)\
			LOCALMACRO__CMT_CONSOLE__PRINT_PAD(' ', __CMT_NUM_PAD__)\
	}\
	while (0);

#define LOCALMACRO__CMT_CONSOLE__PRINT_CONTENT \
	VA_LIST			ARGUMENTS;\
	char			PRINT_BUFFER[1024];\
	int				PRINT_FILL = 0;\
	const char		*SCAN = FORMAT;\
	long			PRINT_WIDTH;\
	long			PRINT_PRECISION;\
	int				PRINT_LEFT;\
	int				PRINT_ZERO;\
	int				PRINT_SIGN;\
	int				PRINT_SPACE;\
	int				PRINT_ALT;\
	int				PRINT_LONG;\
	char			CONVERSION;\
	\
	if (!SCAN)\
		return (THIS);\
	\
	VA_BEGIN(ARGUMENTS, FORMAT);\
	\
	while (*SCAN)\
	{\
		if (*SCAN != '%')\
		{\
			LOCALMACRO__CMT_CONSOLE__PRINT_EMIT(*SCAN)\
			++SCAN;\
			continue ;\
		}\
		\
		++SCAN;\
		\
		if (*SCAN == '%')\
		{\
			LOCALMACRO__CMT_CONSOLE__PRINT_EMIT('%')\
			++SCAN;\
			continue ;\
		}\
		\
		PRINT_LEFT = 0;\
		PRINT_ZERO = 0;\
		PRINT_SIGN = 0;\
		PRINT_SPACE = 0;\
		PRINT_ALT = 0;\
		\
		while (1)\
		{\
			if (*SCAN == '-')\
				PRINT_LEFT = 1;\
			else if (*SCAN == '0')\
				PRINT_ZERO = 1;\
			else if (*SCAN == '+')\
				PRINT_SIGN = 1;\
			else if (*SCAN == ' ')\
				PRINT_SPACE = 1;\
			else if (*SCAN == '#')\
				PRINT_ALT = 1;\
			else\
				break ;\
			\
			++SCAN;\
		}\
		\
		PRINT_WIDTH = (long)0;\
		\
		if (*SCAN == '*')\
		{\
			PRINT_WIDTH = (long)VA_ARG(ARGUMENTS, int);\
			++SCAN;\
			\
			if (PRINT_WIDTH < (long)0)\
			{\
				PRINT_LEFT = 1;\
				PRINT_WIDTH = -PRINT_WIDTH;\
			}\
		}\
		else\
		{\
			while ((*SCAN >= '0') && (*SCAN <= '9'))\
			{\
				PRINT_WIDTH = (PRINT_WIDTH * (long)10) + (long)(*SCAN - '0');\
				++SCAN;\
			}\
		}\
		\
		PRINT_PRECISION = (long)-1;\
		\
		if (*SCAN == '.')\
		{\
			++SCAN;\
			PRINT_PRECISION = (long)0;\
			\
			if (*SCAN == '*')\
			{\
				PRINT_PRECISION = (long)VA_ARG(ARGUMENTS, int);\
				++SCAN;\
			}\
			else\
				while ((*SCAN >= '0') && (*SCAN <= '9'))\
				{\
					PRINT_PRECISION =\
						(PRINT_PRECISION * (long)10) + (long)(*SCAN - '0');\
					++SCAN;\
				}\
		}\
		\
		PRINT_LONG = 0;\
		\
		while (\
			(*SCAN == 'l') || (*SCAN == 'h') || (*SCAN == 'z') ||\
			(*SCAN == 'j') || (*SCAN == 't')\
		)\
		{\
			if (*SCAN == 'l')\
				++PRINT_LONG;\
			\
			++SCAN;\
		}\
		\
		CONVERSION = *SCAN;\
		\
		if (!CONVERSION)\
			break ;\
		\
		++SCAN;\
		\
		if ((CONVERSION == 'd') || (CONVERSION == 'i'))\
		{\
			const long			VALUE = PRINT_LONG\
				? VA_ARG(ARGUMENTS, long)\
				: (long)VA_ARG(ARGUMENTS, int);\
			const int			NEGATIVE = (VALUE < (long)0);\
			const unsigned long	MAGNITUDE = NEGATIVE\
				? ((unsigned long)(-(VALUE + (long)1)) + (unsigned long)1)\
				: (unsigned long)VALUE;\
			\
			LOCALMACRO__CMT_CONSOLE__PRINT_NUMBER(MAGNITUDE, NEGATIVE, 10, 0)\
		}\
		else if (\
			(CONVERSION == 'u') || (CONVERSION == 'o') ||\
			(CONVERSION == 'x') || (CONVERSION == 'X') || (CONVERSION == 'b')\
		)\
		{\
			const unsigned long	VALUE = PRINT_LONG\
				? VA_ARG(ARGUMENTS, unsigned long)\
				: (unsigned long)VA_ARG(ARGUMENTS, unsigned int);\
			int					BASE = 10;\
			\
			if (CONVERSION == 'o')\
				BASE = 8;\
			else if (CONVERSION == 'b')\
				BASE = 2;\
			else if (CONVERSION != 'u')\
				BASE = 16;\
			\
			PRINT_SIGN = 0;\
			PRINT_SPACE = 0;\
			LOCALMACRO__CMT_CONSOLE__PRINT_NUMBER(\
				VALUE, 0, BASE, (CONVERSION == 'X')\
			)\
		}\
		else if (CONVERSION == 'p')\
		{\
			const VAR	VALUE = (VAR)VA_ARG(ARGUMENTS, PTR);\
			\
			LOCALMACRO__CMT_CONSOLE__PRINT_EMIT('0')\
			LOCALMACRO__CMT_CONSOLE__PRINT_EMIT('X')\
			PRINT_SIGN = 0;\
			PRINT_SPACE = 0;\
			PRINT_WIDTH = (long)0;\
			PRINT_PRECISION = (long)(sizeof(PTR) * 2);\
			LOCALMACRO__CMT_CONSOLE__PRINT_NUMBER(VALUE, 0, 16, 1)\
		}\
		else if (CONVERSION == 'c')\
		{\
			const char	VALUE = (char)VA_ARG(ARGUMENTS, int);\
			\
			if (!PRINT_LEFT)\
				LOCALMACRO__CMT_CONSOLE__PRINT_PAD(' ', PRINT_WIDTH - (long)1)\
			\
			LOCALMACRO__CMT_CONSOLE__PRINT_EMIT(VALUE)\
			\
			if (PRINT_LEFT)\
				LOCALMACRO__CMT_CONSOLE__PRINT_PAD(' ', PRINT_WIDTH - (long)1)\
		}\
		else if (CONVERSION == 's')\
		{\
			const char	*TEXT = VA_ARG(ARGUMENTS, char *);\
			long		LENGTH = (long)0;\
			long		STEP;\
			\
			if (!TEXT)\
				TEXT = "(null)";\
			\
			while (\
				TEXT[LENGTH] &&\
				((PRINT_PRECISION < (long)0) || (LENGTH < PRINT_PRECISION))\
			)\
				++LENGTH;\
			\
			if (!PRINT_LEFT)\
				LOCALMACRO__CMT_CONSOLE__PRINT_PAD(\
					' ', PRINT_WIDTH - LENGTH\
				)\
			\
			for (STEP = (long)0; STEP < LENGTH; ++STEP)\
				LOCALMACRO__CMT_CONSOLE__PRINT_EMIT(TEXT[STEP])\
			\
			if (PRINT_LEFT)\
				LOCALMACRO__CMT_CONSOLE__PRINT_PAD(\
					' ', PRINT_WIDTH - LENGTH\
				)\
		}\
		else if ((CONVERSION == 'f') || (CONVERSION == 'F'))\
		{\
			double			VALUE = VA_ARG(ARGUMENTS, double);\
			const int		NEGATIVE = (VALUE < 0.0);\
			const long		DECIMALS = \
				(PRINT_PRECISION < (long)0) ? (long)6 : PRINT_PRECISION;\
			const long		ROOM = \
				(DECIMALS > (long)0) ? (DECIMALS + (long)1) : (long)0;\
			double			SCALE = 1.0;\
			long			STEP;\
			long			DIGITS = (long)0;\
			long			PAD;\
			unsigned long	WHOLE;\
			unsigned long	FRACTION;\
			unsigned long	COUNTER;\
			\
			if (NEGATIVE)\
				VALUE = -VALUE;\
			\
			for (STEP = (long)0; STEP < DECIMALS; ++STEP)\
				SCALE *= 10.0;\
			\
			VALUE += 0.5 / SCALE;\
			WHOLE = (unsigned long)VALUE;\
			FRACTION = (unsigned long)((VALUE - (double)WHOLE) * SCALE);\
			COUNTER = WHOLE;\
			\
			do\
			{\
				++DIGITS;\
				COUNTER = COUNTER / (unsigned long)10;\
			}\
			while (COUNTER);\
			\
			if (NEGATIVE || PRINT_SIGN || PRINT_SPACE)\
				PAD = (PRINT_WIDTH - DIGITS - ROOM - (long)1);\
			else\
				PAD = (PRINT_WIDTH - DIGITS - ROOM);\
			\
			if (PAD < (long)0)\
				PAD = (long)0;\
			\
			if ((!PRINT_LEFT) && (!PRINT_ZERO))\
				LOCALMACRO__CMT_CONSOLE__PRINT_PAD(' ', PAD)\
			\
			if ((!PRINT_LEFT) && PRINT_ZERO)\
				PRINT_PRECISION = (DIGITS + PAD);\
			else\
				PRINT_PRECISION = (long)-1;\
			\
			PRINT_WIDTH = (long)0;\
			PRINT_ZERO = 0;\
			LOCALMACRO__CMT_CONSOLE__PRINT_NUMBER(WHOLE, NEGATIVE, 10, 0)\
			\
			if (DECIMALS > (long)0)\
			{\
				LOCALMACRO__CMT_CONSOLE__PRINT_EMIT('.')\
				PRINT_SIGN = 0;\
				PRINT_SPACE = 0;\
				PRINT_LEFT = 0;\
				PRINT_PRECISION = DECIMALS;\
				LOCALMACRO__CMT_CONSOLE__PRINT_NUMBER(FRACTION, 0, 10, 0)\
			}\
			\
			if (PRINT_LEFT)\
				LOCALMACRO__CMT_CONSOLE__PRINT_PAD(' ', PAD)\
		}\
		else\
		{\
			LOCALMACRO__CMT_CONSOLE__PRINT_EMIT('%')\
			LOCALMACRO__CMT_CONSOLE__PRINT_EMIT(CONVERSION)\
		}\
	}\
	\
	VA_END(ARGUMENTS);\
	PRINT_BUFFER[PRINT_FILL] = (char)0;\
	\
	if (PRINT_FILL)\
		THIS->log(PRINT_BUFFER);

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
