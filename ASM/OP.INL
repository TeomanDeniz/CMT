#ifdef INCL_CMT_ASM_OP
#ifndef SEAL_ASM_OP
#define SEAL_ASM_OP
#define __ASM__OP__(OP_CODE) __OP__[INDEX] = ((unsigned char)OP_CODE); ++INDEX;
#define __ASM__IMM8__(VALUE) __ASM__OP__((VALUE) & 0XFF)
#define __ASM__IMM16__(VALUE) \
	__ASM__OP__((VALUE) & 0XFF)\
	__ASM__OP__(((VALUE) >> 8) & 0XFF)
#define __ASM__IMM32__(VALUE) \
	__ASM__OP__(((VAR)(VALUE)) & 0XFF)\
	__ASM__OP__((((VAR)(VALUE)) >> 8) & 0XFF)\
	__ASM__OP__((((VAR)(VALUE)) >> 16) & 0XFF)\
	__ASM__OP__((((VAR)(VALUE)) >> 24) & 0XFF)
#define __ASM__IMM64__(VALUE) \
	__ASM__OP__(((VAR)(VALUE)) & 0XFF)\
	__ASM__OP__((((VAR)(VALUE)) >> 8) & 0XFF)\
	__ASM__OP__((((VAR)(VALUE)) >> 16) & 0XFF)\
	__ASM__OP__((((VAR)(VALUE)) >> 24) & 0XFF)\
	__ASM__OP__((((VAR)(VALUE)) >> 32) & 0XFF)\
	__ASM__OP__((((VAR)(VALUE)) >> 40) & 0XFF)\
	__ASM__OP__((((VAR)(VALUE)) >> 48) & 0XFF)\
	__ASM__OP__((((VAR)(VALUE)) >> 56) & 0XFF)
#endif /* !SEAL_ASM_OP */
#endif /* INCL_CMT_ASM_OP */

#ifdef __CPU_INTEL__
#include "OP/INTEL.INL"
#endif /* __CPU_INTEL__ */

#ifdef __CPU_ARM__
#include "OP/ARM.INL"
#endif /* __CPU_ARM__ */

#ifdef __CPU_POWERPC__
#include "OP/POWERPC.INL"
#endif /* __CPU_POWERPC__ */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
