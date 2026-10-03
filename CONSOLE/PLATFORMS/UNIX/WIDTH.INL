#ifndef CONSOLE_HPP
#ifndef CONSOLE_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_H */
#endif /* !CONSOLE_HPP */

/******************************************************************************\
|* RESIZING THE WINDOW (XTWINOPS "ESC [ 8 ; ROWS ; COLUMNS T"). THE TERMINAL  *|
|* RESIZES ASYNCHRONOUSLY, SO ITS SIZE IS READ BACK FOR UP TO 300 MS. AS ON   *|
|* WINDOWS, GET.WIDTH / GET.HEIGHT REPORT WHAT THE WINDOW REALLY BECAME. IF   *|
|* IT DID NOT CHANGE AT ALL, THE TERMINAL REFUSED, AND THAT IS A WARNING.     *|
\******************************************************************************/

#define LOCALMACRO__CMT_CONSOLE__RESIZE_TO(NAME, COLUMNS, ROWS) \
	do\
	{\
		unsigned int	__CMT_RESIZE_COLUMNS__;\
		unsigned int	__CMT_RESIZE_ROWS__;\
		unsigned int	__CMT_RESIZE_WAS_COLUMNS__;\
		unsigned int	__CMT_RESIZE_WAS_ROWS__;\
		int				__CMT_RESIZE_TRY__;\
		\
		if (!THIS->_ACTIVE)\
			break ;\
		\
		LOCALMACRO__CMT_CONSOLE__ENTER\
		__CMT_RESIZE_WAS_COLUMNS__ = THIS->GET.WIDTH;\
		__CMT_RESIZE_WAS_ROWS__ = THIS->GET.HEIGHT;\
		__CMT_RESIZE_COLUMNS__ = (unsigned int)(COLUMNS);\
		__CMT_RESIZE_ROWS__ = (unsigned int)(ROWS);\
		\
		if (__CMT_RESIZE_COLUMNS__ < (unsigned)1)\
			__CMT_RESIZE_COLUMNS__ = (unsigned)1;\
		\
		if (__CMT_RESIZE_ROWS__ < (unsigned)1)\
			__CMT_RESIZE_ROWS__ = (unsigned)1;\
		\
		if (\
			(__CMT_RESIZE_COLUMNS__ == __CMT_RESIZE_WAS_COLUMNS__) && \
			(__CMT_RESIZE_ROWS__ == __CMT_RESIZE_WAS_ROWS__)\
		)\
			break ;\
		\
		LOCALMACRO__CMT_CONSOLE__OUT_TEXT("\033[8;")\
		LOCALMACRO__CMT_CONSOLE__OUT_NUMBER(__CMT_RESIZE_ROWS__)\
		LOCALMACRO__CMT_CONSOLE__OUT_BYTE(';')\
		LOCALMACRO__CMT_CONSOLE__OUT_NUMBER(__CMT_RESIZE_COLUMNS__)\
		LOCALMACRO__CMT_CONSOLE__OUT_BYTE('t')\
		LOCALMACRO__CMT_CONSOLE__OUT_FLUSH\
		\
		for (\
			__CMT_RESIZE_TRY__ = 0;\
			__CMT_RESIZE_TRY__ < 10;\
			++__CMT_RESIZE_TRY__\
		)\
		{\
			LOCALMACRO__CMT_CONSOLE__PAUSE(30)\
			LOCALMACRO__CMT_CONSOLE__SYNC_SIZE\
			\
			if (\
				(THIS->GET.WIDTH != __CMT_RESIZE_WAS_COLUMNS__) || \
				(THIS->GET.HEIGHT != __CMT_RESIZE_WAS_ROWS__)\
			)\
				break ;\
		}\
		\
		if (\
			(THIS->GET.WIDTH == __CMT_RESIZE_WAS_COLUMNS__) && \
			(THIS->GET.HEIGHT == __CMT_RESIZE_WAS_ROWS__)\
		)\
			THIS->WARNING(\
				"console." NAME "() - the terminal ignored the resize request "\
				"(window operations are disabled or unsupported)\n"\
			);\
		\
		LOCALMACRO__CMT_CONSOLE__SETTLE\
	}\
	while (0);

#define LOCALMACRO__CMT_CONSOLE__WIDTH_CONTENT \
	LOCALMACRO__CMT_CONSOLE__RESIZE_TO(\
		"width", (WIDTH_VALUE), THIS->GET.HEIGHT\
	)

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
