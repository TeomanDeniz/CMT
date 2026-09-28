#ifndef CONSOLE_HPP
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_HPP */

/******************************************************************************\
|* THE OUTLINE IS TAKEN FROM THE FILLED SHAPE RATHER THAN DRAWN ON ITS OWN.   *|
|*                                                                            *|
|* FOR EVERY ROW THE FILLED ELLIPSE COVERS THE SPAN [FROM, TO]. A CELL IN     *|
|* THAT SPAN IS ON THE EDGE WHEN IT IS NOT COVERED BY THE ROW ABOVE AND THE   *|
|* ROW BELOW, SO THE PART OF THE SPAN THAT BOTH NEIGHBOURS ALSO COVER IS THE  *|
|* INTERIOR AND GETS SKIPPED. WRITTEN AS INTERVALS:                           *|
|*                                                                            *|
|*   INTERIOR = [MAX(ABOVE_FROM, BELOW_FROM), MIN(ABOVE_TO, BELOW_TO)]        *|
|*   EDGE     = [FROM, INTERIOR_FROM - 1] AND [INTERIOR_TO + 1, TO]           *|
|*                                                                            *|
|* ON THE TOP AND BOTTOM ROWS THERE IS NO NEIGHBOUR, THE INTERIOR IS EMPTY,   *|
|* AND THE WHOLE SPAN IS DRAWN. THAT IS WHAT GIVES THE FLAT CAPS SEVERAL      *|
|* CELLS WIDE THAT YOU GET FROM A PAINT PROGRAM, INSTEAD OF THE SINGLE        *|
|* CHARACTER THE OLD ROW STITCHING PRODUCED.                                  *|
\******************************************************************************/

#define LOCALMACRO__CMT_CONSOLE__PUT_COLORED_CIRCLE_CONTENT \
	do\
	{\
		long	__CMT_RING_LEFT__ = (long)(START_X);\
		long	__CMT_RING_RIGHT__ = (long)(END_X);\
		long	__CMT_RING_TOP__ = (long)(START_Y);\
		long	__CMT_RING_BOTTOM__ = (long)(END_Y);\
		long	__CMT_RING_ROW__;\
		long	__CMT_RING_FROM__ = (long)0;\
		long	__CMT_RING_TO__ = (long)0;\
		long	__CMT_RING_UP_FROM__ = (long)0;\
		long	__CMT_RING_UP_TO__ = (long)0;\
		long	__CMT_RING_DOWN_FROM__ = (long)0;\
		long	__CMT_RING_DOWN_TO__ = (long)0;\
		long	__CMT_RING_IN_FROM__;\
		long	__CMT_RING_IN_TO__;\
		long	__CMT_RING_RUN__;\
		int		__CMT_RING_VALID__;\
		int		__CMT_RING_UP_OK__;\
		int		__CMT_RING_DOWN_OK__;\
		\
		LOCALMACRO__CMT_CONSOLE__SWAP(__CMT_RING_LEFT__, __CMT_RING_RIGHT__);\
		LOCALMACRO__CMT_CONSOLE__SWAP(__CMT_RING_TOP__, __CMT_RING_BOTTOM__);\
		\
		for (\
			__CMT_RING_ROW__ = __CMT_RING_TOP__;\
			__CMT_RING_ROW__ <= __CMT_RING_BOTTOM__;\
			++__CMT_RING_ROW__\
		)\
		{\
			LOCALMACRO__CMT_CONSOLE__ELLIPSE_SPAN(\
				__CMT_RING_FROM__, __CMT_RING_TO__, __CMT_RING_VALID__, \
				__CMT_RING_ROW__, __CMT_RING_LEFT__, __CMT_RING_TOP__, \
				__CMT_RING_RIGHT__, __CMT_RING_BOTTOM__\
			)\
			\
			if (!__CMT_RING_VALID__)\
				continue;\
			\
			__CMT_RING_UP_OK__ = 0;\
			\
			if (__CMT_RING_ROW__ > __CMT_RING_TOP__)\
			{\
				LOCALMACRO__CMT_CONSOLE__ELLIPSE_SPAN(\
					__CMT_RING_UP_FROM__, __CMT_RING_UP_TO__, \
					__CMT_RING_UP_OK__, __CMT_RING_ROW__ - (long)1, \
					__CMT_RING_LEFT__, __CMT_RING_TOP__, \
					__CMT_RING_RIGHT__, __CMT_RING_BOTTOM__\
				)\
			}\
			\
			__CMT_RING_DOWN_OK__ = 0;\
			\
			if (__CMT_RING_ROW__ < __CMT_RING_BOTTOM__)\
			{\
				LOCALMACRO__CMT_CONSOLE__ELLIPSE_SPAN(\
					__CMT_RING_DOWN_FROM__, __CMT_RING_DOWN_TO__, \
					__CMT_RING_DOWN_OK__, __CMT_RING_ROW__ + (long)1, \
					__CMT_RING_LEFT__, __CMT_RING_TOP__,\
					__CMT_RING_RIGHT__, __CMT_RING_BOTTOM__\
				)\
			}\
			\
			if (!__CMT_RING_UP_OK__ || !__CMT_RING_DOWN_OK__)\
			{\
				LOCALMACRO__CMT_CONSOLE__RUN(\
					CHARACTER, COLOR_VALUE, __CMT_RING_FROM__,\
					__CMT_RING_ROW__,\
					(__CMT_RING_TO__ - __CMT_RING_FROM__) + (long)1\
				)\
				continue ;\
			}\
			\
			__CMT_RING_IN_FROM__ = __CMT_RING_UP_FROM__;\
			\
			if (__CMT_RING_DOWN_FROM__ > __CMT_RING_IN_FROM__)\
				__CMT_RING_IN_FROM__ = __CMT_RING_DOWN_FROM__;\
			\
			__CMT_RING_IN_TO__ = __CMT_RING_UP_TO__;\
			\
			if (__CMT_RING_DOWN_TO__ < __CMT_RING_IN_TO__)\
				__CMT_RING_IN_TO__ = __CMT_RING_DOWN_TO__;\
			\
			if (__CMT_RING_IN_FROM__ > __CMT_RING_IN_TO__)\
			{\
				LOCALMACRO__CMT_CONSOLE__RUN(\
					CHARACTER, COLOR_VALUE, __CMT_RING_FROM__,\
					__CMT_RING_ROW__,\
					(__CMT_RING_TO__ - __CMT_RING_FROM__) + (long)1\
				)\
				continue ;\
			}\
			\
			__CMT_RING_RUN__ = __CMT_RING_IN_FROM__ - __CMT_RING_FROM__;\
			\
			if (__CMT_RING_RUN__ < (long)1)\
				__CMT_RING_RUN__ = (long)1;\
			\
			LOCALMACRO__CMT_CONSOLE__RUN(\
				CHARACTER, COLOR_VALUE, __CMT_RING_FROM__, \
				__CMT_RING_ROW__, __CMT_RING_RUN__\
			)\
			\
			__CMT_RING_RUN__ = __CMT_RING_TO__ - __CMT_RING_IN_TO__;\
			\
			if (__CMT_RING_RUN__ < (long)1)\
				__CMT_RING_RUN__ = (long)1;\
			\
			LOCALMACRO__CMT_CONSOLE__RUN(\
				CHARACTER, COLOR_VALUE, \
				(__CMT_RING_TO__ - __CMT_RING_RUN__) + (long)1, \
				__CMT_RING_ROW__, __CMT_RING_RUN__\
			)\
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
