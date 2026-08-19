/******************************************************************************\
# H - CONSOLE_SCREEN_BUFFER_INFO                 #       Maximum Tension       #
################################################################################
#                                                #      -__            __-     #
# Teoman Deniz                                   #  :    :!1!-_    _-!1!:    : #
# maximum-tension.com                            #  ::                      :: #
#                                                #  :!:    : :: : :  :  ::::!: #
# +.....................++.....................+ #   :!:: :!:!1:!:!::1:::!!!:  #
# : C - Maximum Tension :: Create - 2026/08/12 : #   ::!::!!1001010!:!11!!::   #
# :---------------------::---------------------: #   :!1!!11000000000011!!:    #
# : License - GPL-3.0   :: Update - 2026/08/12 : #    ::::!!!1!!1!!!1!!!::     #
# +.....................++.....................+ #       ::::!::!:::!::::      #
\******************************************************************************/

#ifndef STRUCT_CONSOLE_SCREEN_BUFFER_INFO_H
#define STRUCT_CONSOLE_SCREEN_BUFFER_INFO_H 202608 /* VERSION */

/* **************************** [v] INCLUDES [v] **************************** */
#include "COORD.H"
/******* """""""""
 * struct S_COORD;
 */
#include "SMALL_RECT.H"
/******* """"""""""""""
 * struct S_SMALL_RECT;
 */
#include "../../ATTRIBUTES/EXTERN_C.H"
/******* """""""""""""""""""""""""""""
 * #define EXTERN_C_START
 * #define EXTERN_C_END
 */
/* **************************** [^] INCLUDES [^] **************************** */

EXTERN_C_START
struct S_CONSOLE_SCREEN_BUFFER_INFO
{
	struct S_COORD		SIZE;
	struct S_COORD		CURSOR_POSITION;
	unsigned short		ATTRIBUTES;
	struct S_SMALL_RECT	WINDOW;
	struct S_COORD		MAXIMUM_WINDOW_SIZE;
};
EXTERN_C_END

#endif /* !STRUCT_CONSOLE_SCREEN_BUFFER_INFO_H */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
