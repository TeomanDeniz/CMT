/* ************************ [v] 8-BIT REGISTERS [v] ************************* */
#define _ADD_AL_(VALUE) \
	__ASM__OP__(0X04)\
	__ASM__IMM8__(VALUE)
#define _ADD_BL_(VALUE) \
	__ASM__OP__(0X80)\
	__ASM__OP__(0XC3)\
	__ASM__IMM8__(VALUE)
#define _ADD_CL_(VALUE) \
	__ASM__OP__(0X80)\
	__ASM__OP__(0XC1)\
	__ASM__IMM8__(VALUE)
#define _ADD_DL_(VALUE) \
	__ASM__OP__(0X80)\
	__ASM__OP__(0XC2)\
	__ASM__IMM8__(VALUE)
/* ************************ [^] 8-BIT REGISTERS [^] ************************* */

/* ************************ [v] 16-BIT REGISTERS [v] ************************ */
#ifdef __SYSTEM_16_BIT__
#define _ADD_AX_(VALUE) \
	__ASM__OP__(0X05)\
	__ASM__IMM16__(VALUE)
#define _ADD_BX_(VALUE) \
	__ASM__OP__(0X81)\
	__ASM__OP__(0XC3)\
	__ASM__IMM16__(VALUE)
#define _ADD_CX_(VALUE) \
	__ASM__OP__(0X81)\
	__ASM__OP__(0XC1)\
	__ASM__IMM16__(VALUE)
#define _ADD_DX_(VALUE) \
	__ASM__OP__(0X81)\
	__ASM__OP__(0XC2)\
	__ASM__IMM16__(VALUE)
#else /* !__SYSTEM_16_BIT__ */
#define _ADD_AX_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X05)\
	__ASM__IMM16__(VALUE)
#define _ADD_BX_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X81)\
	__ASM__OP__(0XC3)\
	__ASM__IMM16__(VALUE)
#define _ADD_CX_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X81)\
	__ASM__OP__(0XC1)\
	__ASM__IMM16__(VALUE)
#define _ADD_DX_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X81)\
	__ASM__OP__(0XC2)\
	__ASM__IMM16__(VALUE)
#endif /* __SYSTEM_16_BIT__ */
/* ************************ [^] 16-BIT REGISTERS [^] ************************ */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
