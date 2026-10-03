#ifndef CONSOLE_HPP
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_HPP */

#define LOCALMACRO__CMT_CONSOLE__ERROR_AT_CONTENT \
	char	INT_STR[12];\
	\
	{\
		REGISTER int	INDEX_1 = 0;\
		REGISTER int	INDEX_2;\
		REGISTER int	INDEX_3;\
		REGISTER int	INDEX_FOR;\
		\
		INDEX_2 = INDEX_1;\
		\
		do\
		{\
			INT_STR[INDEX_2++] = 48 + (THE_LINE % 10);\
			THE_LINE = THE_LINE / 10;\
		}\
		while (THE_LINE);\
		\
		INT_STR[INDEX_2] = (char)0;\
		INDEX_FOR = INDEX_1;\
		INDEX_3 = INDEX_2 - 1;\
		\
		while (INDEX_FOR < INDEX_3)\
		{\
			char	CHARACTER = INT_STR[INDEX_FOR];\
			\
			INT_STR[INDEX_FOR] = INT_STR[INDEX_3];\
			INT_STR[INDEX_3] = CHARACTER;\
			++INDEX_FOR;\
			--INDEX_3;\
		}\
	}\
	\
	if (THIS->HIGHLIGHTER)\
		THIS->CURSOR.COLOR(0XB)\
			->LOG("\n ")\
			->LOG(THE_FILE)\
			->CURSOR.DEFAULT_COLOR()\
			->LOG(" (")\
			->CURSOR.COLOR(0XB)\
			->LOG(INT_STR)\
			->CURSOR.DEFAULT_COLOR()\
			->LOG("): ")\
			->CURSOR.COLOR(0XC)\
			->LOG("ERROR")\
			->CURSOR.DEFAULT_COLOR()\
			->LOG(": ")\
			->CURSOR.COLOR(0XF)\
			->LOG(STRING)\
			->CURSOR.DEFAULT_COLOR();\
	else\
		THIS->LOG("\n ")\
			->LOG(THE_FILE)\
			->LOG(":(")\
			->LOG(INT_STR)\
			->LOG("): ")\
			->LOG("ERROR: ")\
			->LOG(STRING);

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
