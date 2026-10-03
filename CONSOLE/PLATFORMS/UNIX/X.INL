#ifndef CONSOLE_HPP
#ifndef CONSOLE_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_H */
#endif /* !CONSOLE_HPP */

/******************************************************************************\
|* MOVING THE WINDOW (XTWINOPS "ESC [ 3 ; X ; Y T").                          *|
|*                                                                            *|
|* MANY TERMINALS REFUSE THIS ON PURPOSE (XTERM KEEPS WINDOW OPERATIONS OFF   *|
|* BY DEFAULT, GNOME TERMINAL AND KITTY IGNORE THEM), AND A REFUSAL IS        *|
|* SILENT. SO AFTER THE REQUEST THE TERMINAL IS ASKED WHERE ITS WINDOW IS:    *|
|*                                                                            *|
|*   IT MOVED            GET.X / GET.Y TAKE THE REPORTED POSITION             *|
|*   IT DID NOT MOVE     WARNING: THE TERMINAL IGNORED THE MOVE               *|
|*   NO ANSWER AT ALL    WARNING: THE MOVE COULD NOT BE CONFIRMED             *|
|*                                                                            *|
|* COORDINATES ARE PIXELS. A TERMINAL CAN NOT BE SENT A NEGATIVE NUMBER, SO   *|
|* NEGATIVE POSITIONS BECOME 0 (WITH A WARNING).                              *|
\******************************************************************************/

#define LOCALMACRO__CMT_CONSOLE__PLACE(NAME, TO_X, TO_Y) \
	do\
	{\
		int				__CMT_PLACE_X__ = (int)(TO_X);\
		int				__CMT_PLACE_Y__ = (int)(TO_Y);\
		const int		__CMT_PLACE_WAS_X__ = THIS->GET.X;\
		const int		__CMT_PLACE_WAS_Y__ = THIS->GET.Y;\
		char			__CMT_PLACE_REPLY__[256];\
		unsigned int	__CMT_PLACE_FILL__ = (unsigned)0;\
		int				__CMT_PLACE_SEEN__ = 0;\
		int				__CMT_PLACE_NOW_X__ = 0;\
		int				__CMT_PLACE_NOW_Y__ = 0;\
		\
		if (!THIS->_ACTIVE)\
			break ;\
		\
		LOCALMACRO__CMT_CONSOLE__ENTER\
		\
		if ((__CMT_PLACE_X__ < 0) || (__CMT_PLACE_Y__ < 0))\
		{\
			THIS->WARNING(\
				"console." NAME "() - a terminal can not be sent a negative "\
				"position, 0 is used instead\n"\
			);\
			\
			if (__CMT_PLACE_X__ < 0)\
				__CMT_PLACE_X__ = 0;\
			\
			if (__CMT_PLACE_Y__ < 0)\
				__CMT_PLACE_Y__ = 0;\
		}\
		\
		LOCALMACRO__CMT_CONSOLE__OUT_TEXT("\033[3;")\
		LOCALMACRO__CMT_CONSOLE__OUT_NUMBER(__CMT_PLACE_X__)\
		LOCALMACRO__CMT_CONSOLE__OUT_BYTE(';')\
		LOCALMACRO__CMT_CONSOLE__OUT_NUMBER(__CMT_PLACE_Y__)\
		LOCALMACRO__CMT_CONSOLE__OUT_BYTE('t')\
		LOCALMACRO__CMT_CONSOLE__OUT_FLUSH\
		LOCALMACRO__CMT_CONSOLE__PAUSE(50)\
		LOCALMACRO__CMT_CONSOLE__QUERY(\
			"\033[13t", __CMT_PLACE_REPLY__, __CMT_PLACE_FILL__\
		)\
		LOCALMACRO__CMT_CONSOLE__EACH_CSI(\
			__CMT_PLACE_REPLY__, __CMT_PLACE_FILL__,\
			if (\
				(__CMT_CSI_FINAL__ == 't') && !__CMT_CSI_MARK__ && \
				(__CMT_CSI_P__[0] == (unsigned long)3) && (__CMT_CSI_N__ >= 3)\
			)\
			{\
				__CMT_PLACE_SEEN__ = 1;\
				__CMT_PLACE_NOW_X__ = (int)__CMT_CSI_P__[1];\
				__CMT_PLACE_NOW_Y__ = (int)__CMT_CSI_P__[2];\
			}\
		)\
		\
		if (!__CMT_PLACE_SEEN__)\
		{\
			OBJECT__INITIALIZE (THIS->GET.X, int) = __CMT_PLACE_X__;\
			OBJECT__INITIALIZE (THIS->GET.Y, int) = __CMT_PLACE_Y__;\
			THIS->WARNING(\
				"console." NAME "() - the terminal does not report where its "\
				"window is, so the move could not be confirmed\n"\
			);\
			break ;\
		}\
		\
		OBJECT__INITIALIZE (THIS->GET.X, int) = __CMT_PLACE_NOW_X__;\
		OBJECT__INITIALIZE (THIS->GET.Y, int) = __CMT_PLACE_NOW_Y__;\
		\
		if (\
			(__CMT_PLACE_NOW_X__ == __CMT_PLACE_WAS_X__) && \
			(__CMT_PLACE_NOW_Y__ == __CMT_PLACE_WAS_Y__) && \
			(\
				(__CMT_PLACE_X__ != __CMT_PLACE_WAS_X__) || \
				(__CMT_PLACE_Y__ != __CMT_PLACE_WAS_Y__)\
			)\
		)\
			THIS->WARNING(\
				"console." NAME "() - the terminal ignored the move (window "\
				"operations are disabled or unsupported)\n"\
			);\
	}\
	while (0);

#define LOCALMACRO__CMT_CONSOLE__X_CONTENT \
	do\
	{\
		int	__CMT_KEEP_Y__ = THIS->GET.Y;\
		\
		LOCALMACRO__CMT_CONSOLE__PLACE("x", (int)(X_VALUE), __CMT_KEEP_Y__)\
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
