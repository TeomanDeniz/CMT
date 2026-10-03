#ifndef CONSOLE_HPP
#ifndef CONSOLE_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_H */
#endif /* !CONSOLE_HPP */

/******************************************************************************\
|* TEXT AT A POSITION, WITH EVERYTHING LOG() UNDERSTANDS (WRAPPING, \N, UTF-8,*|
|* SGR COLOURS). THE CURSOR IS PUT BACK AFTERWARDS, BOTH THE REAL ONE AND     *|
|* GET.CURSOR, SO DRAWING NEVER DISTURBS THE LOG STREAM.                      *|
\******************************************************************************/

#define LOCALMACRO__CMT_CONSOLE__PUT_STRING_CONTENT \
	const unsigned char	*__CMT_PUT__ = (const unsigned char *)(STRING);\
	\
	LOCALMACRO__CMT_CONSOLE__ENTER_AT\
	\
	if (\
		__CMT_PUT__ && \
		((unsigned int)(X) < THIS->GET.WIDTH) && \
		((unsigned int)(Y) < THIS->GET.HEIGHT)\
	)\
	{\
		const int		__CMT_PUT_KEEP_X__ = THIS->GET.CURSOR.X;\
		const int		__CMT_PUT_KEEP_Y__ = THIS->GET.CURSOR.Y;\
		const unsigned int	__CMT_PUT_KEEP_PEN__ = THIS->GET.CURSOR.COLOR;\
		const BOOLEAN	__CMT_PUT_KEEP_WRAP__ = THIS->_WRAP;\
		\
		LOCALMACRO__CMT_CONSOLE__BATCH_BEGIN\
		OBJECT__INITIALIZE (THIS->GET.CURSOR.X, int) = (int)(X);\
		OBJECT__INITIALIZE (THIS->GET.CURSOR.Y, int) = (int)(Y);\
		THIS->_WRAP = FALSE;\
		\
		THIS->LOG(STRING);\
		\
		OBJECT__INITIALIZE (THIS->GET.CURSOR.X, int) = __CMT_PUT_KEEP_X__;\
		OBJECT__INITIALIZE (THIS->GET.CURSOR.Y, int) = __CMT_PUT_KEEP_Y__;\
		OBJECT__INITIALIZE (THIS->GET.CURSOR.COLOR, unsigned int) = \
			__CMT_PUT_KEEP_PEN__;\
		THIS->_WRAP = __CMT_PUT_KEEP_WRAP__;\
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
