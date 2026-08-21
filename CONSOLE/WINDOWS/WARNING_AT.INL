#ifndef CONSOLE_HPP
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_HPP */

#define LOCALMACRO__CMT_CONSOLE__WARNING_AT_CONTENT \
	char	INT_STR[12];\
	\
	{\
		register int	INDEX_1 = 0;\
		register int	INDEX_2;\
		register int	INDEX_3;\
		register int	INDEX_FOR;\
		\
		if (THE_LINE < 0)\
		{\
			INT_STR[INDEX_1++] = '-';\
			THE_LINE = -THE_LINE;\
		}\
		\
		INDEX_2 = INDEX_1;\
		\
		do\
		{\
			INT_STR[INDEX_2++] = 48 + (THE_LINE % 10);\
			THE_LINE /= 10;\
		}\
		while (THE_LINE);\
		\
		INT_STR[INDEX_2] = (char)0;\
		INDEX_FOR = INDEX_1;\
		INDEX_3 = INDEX_2 - 1;\
		\
		while (INDEX_FOR < INDEX_3)\
		{\
			register char	CHARACTER = INT_STR[INDEX_FOR];\
			\
			INT_STR[INDEX_FOR] = INT_STR[INDEX_3];\
			INT_STR[INDEX_3] = CHARACTER;\
			++INDEX_FOR;\
			--INDEX_3;\
		}\
	}\
	\
	if (THIS->_HIGHLIGHTER)\
		THIS->cursor.color(0XB)\
			->log("\n ")\
			->log(THE_FILE)\
			->cursor.default_color()\
			->log(" (")\
			->cursor.color(0XB)\
			->log(INT_STR)\
			->cursor.default_color()\
			->log("): ")\
			->cursor.color(0XD)\
			->log("WARNING")\
			->cursor.default_color()\
			->log(": ")\
			->cursor.color(0XF)\
			->log(STRING)\
			->cursor.default_color();\
	else\
		THIS->log("\n ")\
			->log(THE_FILE)\
			->log(":(")\
			->log(INT_STR)\
			->log("): ")\
			->log("WARNING: ")\
			->log(STRING);

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
