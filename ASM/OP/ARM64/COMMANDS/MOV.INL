/* *************************** [v] REGISTERS [v] **************************** */
#define _MOV_X0_X17 \
	__ASM__OP__(0XE0)\
	__ASM__OP__(0X03)\
	__ASM__OP__(0X11)\
	__ASM__OP__(0XAA)
#define _MOV_X17_X0 \
	__ASM__OP__(0XF1)\
	__ASM__OP__(0X03)\
	__ASM__OP__(0X00)\
	__ASM__OP__(0XAA)
/* *************************** [^] REGISTERS [^] **************************** */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
