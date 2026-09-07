#ifndef CONSOLE_HPP
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_HPP */

#define LOCALMACRO__CMT_CONSOLE__PUT_COLORED_ELLIPSE_CONTENT \
	do\
	{\
		long	__CMT_OVAL_LEFT__ = (long)(START_X);\
		long	__CMT_OVAL_RIGHT__ = (long)(END_X);\
		long	__CMT_OVAL_TOP__ = (long)(START_Y);\
		long	__CMT_OVAL_BOTTOM__ = (long)(END_Y);\
		long	__CMT_OVAL_ROW__;\
		long	__CMT_OVAL_FROM__ = (long)0;\
		long	__CMT_OVAL_TO__ = (long)0;\
		int		__CMT_OVAL_VALID__;\
		\
		LOCALMACRO__CMT_CONSOLE__SWAP(__CMT_OVAL_LEFT__, __CMT_OVAL_RIGHT__);\
		LOCALMACRO__CMT_CONSOLE__SWAP(__CMT_OVAL_TOP__, __CMT_OVAL_BOTTOM__);\
		\
		for (\
			__CMT_OVAL_ROW__ = __CMT_OVAL_TOP__;\
			__CMT_OVAL_ROW__ <= __CMT_OVAL_BOTTOM__;\
			++__CMT_OVAL_ROW__\
		)\
		{\
			LOCALMACRO__CMT_CONSOLE__ELLIPSE_SPAN(\
				__CMT_OVAL_FROM__, __CMT_OVAL_TO__, __CMT_OVAL_VALID__,\
				__CMT_OVAL_ROW__, __CMT_OVAL_LEFT__, __CMT_OVAL_TOP__,\
				__CMT_OVAL_RIGHT__, __CMT_OVAL_BOTTOM__\
			);\
			\
			if (__CMT_OVAL_VALID__)\
				LOCALMACRO__CMT_CONSOLE__RUN (\
					CHARACTER, COLOR_VALUE, __CMT_OVAL_FROM__,\
					__CMT_OVAL_ROW__,\
					(__CMT_OVAL_TO__ - __CMT_OVAL_FROM__) + (long)1\
				);\
		}\
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
