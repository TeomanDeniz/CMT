/******************************************************************************\
# H - SYSTEM_INFO                                #       Maximum Tension       #
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

#ifndef STRUCT_SYSTEM_INFO_H
#define STRUCT_SYSTEM_INFO_H 202608 /* VERSION */

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
struct S_SYSTEM_INFO
{
	union
	{
		unsigned long	OEM_ID;
		struct
		{
			unsigned short	PROCESSOR_ARCHITECTURE;
			unsigned short	RESERVED;
		}	DUMMY_STRUCT;
	}	DUMMY_UNION;
	unsigned long		PAGE_SIZE;
	PTR					MINIMUM_APPLICATION_ADDRESS;
	PTR					MAXIMUM_APPLICATION_ADDRESS;
	LET					ACTIVE_PROCESSOR_MASK;
	unsigned long		NUMBER_OF_PROCESSORS;
	unsigned long		PROCESSOR_TYPE;
	unsigned long		ALLOCATION_GRANULARITY;
	unsigned short		PROCESSOR_LEVEL;
	unsigned short		PROCESSOR_REVISION;
};
EXTERN_C_END

#endif /* !STRUCT_SYSTEM_INFO_H */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
