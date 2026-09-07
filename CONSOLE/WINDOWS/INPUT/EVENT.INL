#ifndef CONSOLE_HPP
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_HPP */

/******************************************************************************\
|* CONSOLE INPUT RECORDS ARE DECODED HERE, ONCE. EVERY INPUT.WAIT.* MEMBER    *|
|* PUMPS THE SAME QUEUE AND FIRES THE SAME EVENT.* CALLBACKS; THEY DIFFER     *|
|* ONLY IN WHICH DECODED KIND MAKES THEM STOP WAITING.                        *|
|*                                                                            *|
|* INPUT.GET.KEY PACKS THE SCAN INFO AS (VIRTUAL_KEY_CODE << 16) | ASCII, SO  *|
|* PRINTABLE KEYS CAN BE READ STRAIGHT OUT OF THE LOW BYTE WHILE ARROWS AND   *|
|* FUNCTION KEYS STAY REACHABLE IN THE HIGH HALF.                             *|
|*                                                                            *|
|* INPUT.GET.MOUSE PACKS IT AS (EVENT_FLAGS << 16) | BUTTON_STATE.            *|
\******************************************************************************/

#define LOCALMACRO__CMT_CONSOLE__EVENT_NONE (unsigned)0X00
#define LOCALMACRO__CMT_CONSOLE__EVENT_KEY (unsigned)0X01
#define LOCALMACRO__CMT_CONSOLE__EVENT_MOUSE_MOVE (unsigned)0X02
#define LOCALMACRO__CMT_CONSOLE__EVENT_MOUSE_ACTION (unsigned)0X03
#define LOCALMACRO__CMT_CONSOLE__EVENT_RESIZE (unsigned)0X04
#define LOCALMACRO__CMT_CONSOLE__EVENT_FOCUS (unsigned)0X05
#define LOCALMACRO__CMT_CONSOLE__EVENT_OTHER (unsigned)0X06
#define LOCALMACRO__CMT_CONSOLE__RECORD_KEY 0X0001
#define LOCALMACRO__CMT_CONSOLE__RECORD_MOUSE 0X0002
#define LOCALMACRO__CMT_CONSOLE__RECORD_RESIZE 0X0004
#define LOCALMACRO__CMT_CONSOLE__RECORD_FOCUS 0X0010
#define LOCALMACRO__CMT_CONSOLE__MOUSE_MOVED (unsigned)0X0001

#define LOCALMACRO__CMT_CONSOLE__DISPATCH(RECORD, KIND) \
	do\
	{\
		(KIND) = LOCALMACRO__CMT_CONSOLE__EVENT_NONE;\
		\
		if ((RECORD).EVENT_TYPE == LOCALMACRO__CMT_CONSOLE__RECORD_KEY)\
		{\
			if ((RECORD).EVENT.KEY_EVENT.KEY_DOWN)\
			{\
				const unsigned int	__CMT_KEY__ = \
					(((unsigned int)\
						(RECORD).EVENT.KEY_EVENT.VIRTUAL_KEY_CODE) << 16) | \
					((unsigned int)(unsigned char)\
						(RECORD).EVENT.KEY_EVENT.CHAR.ASCII);\
				\
				OBJECT__INITIALIZE (THIS->input.get.key, unsigned int) = \
					__CMT_KEY__;\
				(KIND) = LOCALMACRO__CMT_CONSOLE__EVENT_KEY;\
				\
				if (THIS->event.on_key)\
					THIS->event.on_key(__CMT_KEY__);\
			}\
		}\
		else if ((RECORD).EVENT_TYPE == LOCALMACRO__CMT_CONSOLE__RECORD_MOUSE)\
		{\
			const unsigned int	__CMT_FLAGS__ = \
				(unsigned int)(RECORD).EVENT.MOUSE_EVENT.EVENT_FLAGS;\
			const unsigned int	__CMT_MOUSE__ = (\
				(__CMT_FLAGS__ << 16) | (\
					(\
						(unsigned int)(RECORD).EVENT.MOUSE_EVENT.BUTTON_STATE\
					) & (unsigned)0XFFFF\
				)\
			);\
			const unsigned int	__CMT_MOUSE_X__ = (unsigned int)\
				(RECORD).EVENT.MOUSE_EVENT.MOUSE_POSITION.X;\
			const unsigned int	__CMT_MOUSE_Y__ = (unsigned int)\
				(RECORD).EVENT.MOUSE_EVENT.MOUSE_POSITION.Y;\
			\
			OBJECT__INITIALIZE (THIS->input.get.mouse, unsigned int) = \
				__CMT_MOUSE__;\
			OBJECT__INITIALIZE (THIS->input.get.mouse_x, unsigned int) = \
				__CMT_MOUSE_X__;\
			OBJECT__INITIALIZE (THIS->input.get.mouse_y, unsigned int) = \
				__CMT_MOUSE_Y__;\
			\
			if (__CMT_FLAGS__ & LOCALMACRO__CMT_CONSOLE__MOUSE_MOVED)\
				(KIND) = LOCALMACRO__CMT_CONSOLE__EVENT_MOUSE_MOVE;\
			else\
				(KIND) = LOCALMACRO__CMT_CONSOLE__EVENT_MOUSE_ACTION;\
			\
			if (THIS->event.on_mouse)\
				THIS->event.on_mouse(\
					__CMT_MOUSE__, __CMT_MOUSE_X__, __CMT_MOUSE_Y__\
				);\
		}\
		else if ((RECORD).EVENT_TYPE == LOCALMACRO__CMT_CONSOLE__RECORD_RESIZE)\
		{\
			const unsigned int	__CMT_WIDE__ = (unsigned int)\
				(RECORD).EVENT.WINDOW_BUFFER_SIZE_EVENT.SIZE.X;\
			const unsigned int	__CMT_HIGH__ = (unsigned int)\
				(RECORD).EVENT.WINDOW_BUFFER_SIZE_EVENT.SIZE.Y;\
			\
			OBJECT__INITIALIZE (THIS->get.width, unsigned int) = __CMT_WIDE__;\
			OBJECT__INITIALIZE (THIS->get.height, unsigned int) = __CMT_HIGH__;\
			(KIND) = LOCALMACRO__CMT_CONSOLE__EVENT_RESIZE;\
			\
			if (THIS->event.on_resize)\
				THIS->event.on_resize(__CMT_WIDE__, __CMT_HIGH__);\
		}\
		else if ((RECORD).EVENT_TYPE == LOCALMACRO__CMT_CONSOLE__RECORD_FOCUS)\
		{\
			(KIND) = LOCALMACRO__CMT_CONSOLE__EVENT_FOCUS;\
			\
			if ((RECORD).EVENT.FOCUS_EVENT.SET_FOCUS)\
			{\
				if (THIS->event.on_focus)\
					THIS->event.on_focus();\
			}\
			else if (THIS->event.on_blur)\
				THIS->event.on_blur();\
		}\
		else\
			(KIND) = LOCALMACRO__CMT_CONSOLE__EVENT_OTHER;\
	}\
	while (0);

#define LOCALMACRO__CMT_CONSOLE__TRACK_MOVE \
	do\
	{\
		PTR				__CMT_MOVE_WINDOW__ = KERNEL32.GetConsoleWindow();\
		struct S_RECT	__CMT_MOVE_BOUNDS__;\
		\
		if (\
			__CMT_MOVE_WINDOW__ && USER32.GetWindowRect && \
			USER32.GetWindowRect(__CMT_MOVE_WINDOW__, &__CMT_MOVE_BOUNDS__)\
		)\
		{\
			if (\
				((int)__CMT_MOVE_BOUNDS__.LEFT != THIS->get.x) || \
				((int)__CMT_MOVE_BOUNDS__.TOP != THIS->get.y)\
			)\
			{\
				OBJECT__INITIALIZE (THIS->get.x, int) = \
					(int)__CMT_MOVE_BOUNDS__.LEFT;\
				OBJECT__INITIALIZE (THIS->get.y, int) = \
					(int)__CMT_MOVE_BOUNDS__.TOP;\
				\
				if (THIS->event.on_move)\
					THIS->event.on_move(\
						(int)__CMT_MOVE_BOUNDS__.LEFT,\
						(int)__CMT_MOVE_BOUNDS__.TOP\
					);\
			}\
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
