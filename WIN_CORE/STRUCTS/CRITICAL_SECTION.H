/******************************************************************************\
# H - CRITICAL_SECTION                           #       Maximum Tension       #
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

#ifndef STRUCT_CRITICAL_SECTION_H
#define STRUCT_CRITICAL_SECTION_H 202608 /* VERSION */

/* **************************** [v] INCLUDES [v] **************************** */
#include "../../ATTRIBUTES/EXTERN_C.H"
/******* """""""""""""""""""""""""""""
 * #define EXTERN_C_START
 * #define EXTERN_C_END
 */
#include "../../KEYWORDS/TYPES.H"
/******* """"""""""""""""""""""""
 * typedef	PTR;
 * typedef	LET;
 */
/* **************************** [^] INCLUDES [^] **************************** */

EXTERN_C_START
struct S_CRITICAL_SECTION
{
	PTR				DEBUG_INFO;
	unsigned long	LOCK_COUNT;
	unsigned long	RECURSION_COUNT;
	PTR				OWNING_THREAD;
	PTR				LOCK_SEMAPHORE;
	LET				SPIN_COUNT;
};
EXTERN_C_END

#endif /* !STRUCT_CRITICAL_SECTION_H */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
