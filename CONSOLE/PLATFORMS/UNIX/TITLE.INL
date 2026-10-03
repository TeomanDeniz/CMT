#ifndef CONSOLE_HPP
#ifndef CONSOLE_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_H */
#endif /* !CONSOLE_HPP */

/******************************************************************************\
|* "ESC ] 0 ; TITLE BEL". THE FIRST CALL ALSO PUSHES THE ORIGINAL TITLE ON    *|
|* THE TERMINAL'S TITLE STACK ("ESC [ 22 ; 0 T"), AND THE DESTRUCTOR POPS IT, *|
|* SO THE SHELL GETS ITS OWN TITLE BACK. CONTROL CHARACTERS ARE DROPPED FROM  *|
|* THE TITLE; THEY COULD END THE SEQUENCE EARLY.                              *|
\******************************************************************************/

#define LOCALMACRO__CMT_CONSOLE__TITLE_CONTENT \
	do\
	{\
		const unsigned char	*__CMT_TITLE__ = (const unsigned char *)(STRING);\
		\
		if (!__CMT_TITLE__ || !THIS->_ACTIVE)\
			break ;\
		\
		LOCALMACRO__CMT_CONSOLE__ENTER\
		\
		if (!THIS->_TITLED)\
		{\
			LOCALMACRO__CMT_CONSOLE__OUT_TEXT("\033[22;0t")\
			THIS->_TITLED = TRUE;\
		}\
		\
		LOCALMACRO__CMT_CONSOLE__OUT_TEXT("\033]0;")\
		\
		while (*__CMT_TITLE__)\
		{\
			if (\
				(*__CMT_TITLE__ >= (unsigned)0X20) && \
				(*__CMT_TITLE__ != (unsigned)0X7F)\
			)\
				LOCALMACRO__CMT_CONSOLE__OUT_BYTE(*__CMT_TITLE__)\
			\
			++__CMT_TITLE__;\
		}\
		\
		LOCALMACRO__CMT_CONSOLE__OUT_BYTE(0X07)\
		LOCALMACRO__CMT_CONSOLE__SETTLE\
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
