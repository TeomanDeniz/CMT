/* ************************ [v] 32-BIT REGISTERS [v] ************************ */
#define _ADD_EAX_(VALUE) \
	__ASM__OP__(0X05)\
	__ASM__IMM32__(VALUE)
#define _ADD_EBX_(VALUE) \
	__ASM__OP__(0X81)\
	__ASM__OP__(0XC3)\
	__ASM__IMM32__(VALUE)
#define _ADD_ECX_(VALUE) \
	__ASM__OP__(0X81)\
	__ASM__OP__(0XC1)\
	__ASM__IMM32__(VALUE)
#define _ADD_EDX_(VALUE) \
	__ASM__OP__(0X81)\
	__ASM__OP__(0XC2)\
	__ASM__IMM32__(VALUE)
/* ************************ [^] 32-BIT REGISTERS [^] ************************ */

#include "16.INL"

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
