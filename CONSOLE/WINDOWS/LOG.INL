#ifndef CONSOLE_HPP
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_HPP */

#define LOCALMACRO__CMT_CONSOLE__LOG_CONTENT \
	LET				LENGTH;\
	unsigned long	WRITTEN;\
	unsigned int	*X = &(\
		OBJECT__INITIALIZE (THIS->get.cursor.x, unsigned int)\
	);\
	unsigned int	*Y = &(\
		OBJECT__INITIALIZE (THIS->get.cursor.y, unsigned int)\
	);\
	\
	LENGTH = (LET)0;\
	\
	while (STRING[LENGTH] != 0)\
	{\
		const char		__CHARACTER__ = STRING[LENGTH];\
	\
		if (__CHARACTER__ == '\n')\
		{\
			(*X) = 0;\
			(*Y)++;\
		}\
		else if (__CHARACTER__ == '\r')\
			(*X) = 0;\
		else if (__CHARACTER__ == '\b')\
		{\
			if ((*X) > 0)\
				(*X)--;\
		}\
		else\
		{\
			(*X)++;\
	\
			if ((*X) >= THIS->get.width)\
			{\
				(*X) = 0;\
				(*Y)++;\
			}\
		}\
	\
		++LENGTH;\
	}\
	\
	if (THIS->_PUSH_DEPTH)\
	{\
		const unsigned long	NEEDED =\
			THIS->_PUSH_SIZE + (unsigned long)LENGTH + (unsigned long)1;\
		\
		if (THIS->_PUSH_CAPACITY < NEEDED)\
		{\
			unsigned long	TARGET;\
			PTR				BLOCK;\
			\
			if (THIS->_PUSH_CAPACITY)\
				TARGET = THIS->_PUSH_CAPACITY;\
			else\
				TARGET = (unsigned long)1024;\
			\
			while (TARGET < NEEDED)\
				TARGET = TARGET * (unsigned long)2;\
			\
			if (!THIS->_PUSH_DATA)\
				BLOCK = ALLOC((LET)TARGET);\
			else\
				BLOCK = REALLOC(THIS->_PUSH_DATA, (LET)TARGET);\
			\
			if (BLOCK)\
			{\
				THIS->_PUSH_DATA = BLOCK;\
				THIS->_PUSH_CAPACITY = TARGET;\
			}\
		}\
		\
		if (THIS->_PUSH_CAPACITY >= NEEDED)\
		{\
			char	*TAIL = ((char *)THIS->_PUSH_DATA) + THIS->_PUSH_SIZE;\
			LET		INDEX = (LET)0;\
			\
			while (INDEX < LENGTH)\
			{\
				TAIL[INDEX] = STRING[INDEX];\
				++INDEX;\
			}\
			\
			THIS->_PUSH_SIZE += (unsigned long)LENGTH;\
			((char *)THIS->_PUSH_DATA)[THIS->_PUSH_SIZE] = (char)0;\
			return (THIS);\
		}\
	}\
	\
	if (\
		!KERNEL32.WriteConsoleA(\
			THIS->_OUT_HANDLE, STRING, LENGTH, &WRITTEN, 0\
		)\
	)\
		KERNEL32.WriteFile(THIS->_OUT_HANDLE, STRING, LENGTH, &WRITTEN, 0);

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
