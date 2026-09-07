/******************************************************************************\
# H - INPUT_RECORD                               #       Maximum Tension       #
################################################################################
#                                                #      -__            __-     #
# Teoman Deniz                                   #  :    :!1!-_    _-!1!:    : #
# maximum-tension.com                            #  ::                      :: #
#                                                #  :!:    : :: : :  :  ::::!: #
# +.....................++.....................+ #   :!:: :!:!1:!:!::1:::!!!:  #
# : C - Maximum Tension :: Create - 2026/08/22 : #   ::!::!!1001010!:!11!!::   #
# :---------------------::---------------------: #   :!1!!11000000000011!!:    #
# : License - GPL-3.0   :: Update - 2026/08/22 : #    ::::!!!1!!1!!!1!!!::     #
# +.....................++.....................+ #       ::::!::!:::!::::      #
\******************************************************************************/

#ifndef STRUCT_INPUT_RECORD_H
#define STRUCT_INPUT_RECORD_H 202608 /* VERSION */

/* **************************** [v] INCLUDES [v] **************************** */
#include "../../ATTRIBUTES/EXTERN_C.H"
/******* """""""""""""""""""""""""""""
 * #define EXTERN_C_START
 * #define EXTERN_C_END
 */
#include "KEY_EVENT_RECORD.H"
/******* """"""""""""""""""""
 * struct S_KEY_EVENT_RECORD;
 */
#include "MOUSE_EVENT_RECORD.H"
/******* """"""""""""""""""""""
 * struct S_MOUSE_EVENT_RECORD;
 */
#include "WINDOW_BUFFER_SIZE_RECORD.H"
/******* """""""""""""""""""""""""""""
 * struct S_WINDOW_BUFFER_SIZE_RECORD;
 */
#include "MENU_EVENT_RECORD.H"
/******* """""""""""""""""""""
 * struct S_MENU_EVENT_RECORD;
 */
#include "FOCUS_EVENT_RECORD.H"
/******* """"""""""""""""""""""
 * struct S_FOCUS_EVENT_RECORD;
 */
/* **************************** [^] INCLUDES [^] **************************** */

EXTERN_C_START
struct S_INPUT_RECORD
{
	unsigned short	EVENT_TYPE;
	union
	{
		struct S_KEY_EVENT_RECORD			KEY_EVENT;
		struct S_MOUSE_EVENT_RECORD			MOUSE_EVENT;
		struct S_WINDOW_BUFFER_SIZE_RECORD	WINDOW_BUFFER_SIZE_EVENT;
		struct S_MENU_EVENT_RECORD			MENU_EVENT;
		struct S_FOCUS_EVENT_RECORD			FOCUS_EVENT;
	} EVENT;
};
EXTERN_C_END

#endif /* !STRUCT_INPUT_RECORD_H */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
