#ifndef CONSOLE_HPP
#ifndef CONSOLE_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_H */
#endif /* !CONSOLE_HPP */

/* EVERY CELL TAKES THE NEW ATTRIBUTE; THE CHARACTERS STAY */
#define LOCALMACRO__CMT_CONSOLE__REPAINT(TARGET) \
	do\
	{\
		const unsigned int	__CMT_REPAINT__ = \
			((unsigned int)(TARGET)) & (unsigned)0XFF;\
		const unsigned long	__CMT_REPAINT_CELLS__ = \
			(unsigned long)THIS->_CELLS_W * (unsigned long)THIS->_CELLS_H;\
		unsigned long		__CMT_REPAINT_AT__;\
		\
		LOCALMACRO__CMT_CONSOLE__ENTER_AT\
		LOCALMACRO__CMT_CONSOLE__BATCH_BEGIN\
		\
		if (THIS->_ATTRS)\
		{\
			for (\
				__CMT_REPAINT_AT__ = (unsigned long)0;\
				__CMT_REPAINT_AT__ < __CMT_REPAINT_CELLS__;\
				++__CMT_REPAINT_AT__\
			)\
				((unsigned char *)THIS->_ATTRS)[__CMT_REPAINT_AT__] = \
					(unsigned char)__CMT_REPAINT__;\
		}\
		\
		LOCALMACRO__CMT_CONSOLE__REDRAW\
		OBJECT__INITIALIZE (THIS->GET.COLOR, unsigned int) = __CMT_REPAINT__;\
		OBJECT__INITIALIZE (THIS->GET.CURSOR.COLOR, unsigned int) = \
			__CMT_REPAINT__;\
		LOCALMACRO__CMT_CONSOLE__BATCH_END\
	}\
	while (0);

#define LOCALMACRO__CMT_CONSOLE__COLOR_CONTENT \
	LOCALMACRO__CMT_CONSOLE__REPAINT(COLOR_VALUE)

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
