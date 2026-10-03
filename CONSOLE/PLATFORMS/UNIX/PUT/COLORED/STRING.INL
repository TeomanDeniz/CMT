#ifndef CONSOLE_HPP
#ifndef CONSOLE_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_H */
#endif /* !CONSOLE_HPP */

/******************************************************************************\
|* TEXT AT A POSITION IN A GIVEN COLOUR, CUT AT THE RIGHT EDGE. LIKE THE      *|
|* WINDOWS VERSION IT WRITES CELLS: NO WRAPPING, AND CONTROL CHARACTERS ARE   *|
|* JUST CELLS (SHOWN AS SPACES), NOT COMMANDS.                                *|
\******************************************************************************/

#define LOCALMACRO__CMT_CONSOLE__PUT_COLORED_STRING_CONTENT \
	const char	*__CMT_PAINT__ = (const char *)(STRING);\
	\
	LOCALMACRO__CMT_CONSOLE__ENTER_AT\
	\
	if (\
		__CMT_PAINT__ && \
		((unsigned int)(X) < THIS->GET.WIDTH) && \
		((unsigned int)(Y) < THIS->GET.HEIGHT)\
	)\
	{\
		unsigned int	__CMT_PAINT_X__ = (unsigned int)(X);\
		unsigned long	__CMT_PAINT_GLYPH__;\
		\
		LOCALMACRO__CMT_CONSOLE__BATCH_BEGIN\
		\
		while (*__CMT_PAINT__ && (__CMT_PAINT_X__ < THIS->GET.WIDTH))\
		{\
			LOCALMACRO__CMT_CONSOLE__NEXT_GLYPH(\
				__CMT_PAINT__, __CMT_PAINT_GLYPH__\
			)\
			LOCALMACRO__CMT_CONSOLE__CELL(\
				__CMT_PAINT_X__, (Y), __CMT_PAINT_GLYPH__, (COLOR_VALUE)\
			)\
			++__CMT_PAINT_X__;\
		}\
		\
		LOCALMACRO__CMT_CONSOLE__BATCH_END\
	}

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
