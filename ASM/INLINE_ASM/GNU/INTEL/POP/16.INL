#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************ [v] 16-BIT REGISTERS [v] ************************ */
#define POP_AX CMT_ASM("popw %ax")
#define POP_BX CMT_ASM("popw %bx")
#define POP_CX CMT_ASM("popw %cx")
#define POP_DX CMT_ASM("popw %dx")
#define POP_SI CMT_ASM("popw %si")
#define POP_DI CMT_ASM("popw %di")
#define POP_BP CMT_ASM("popw %bp")
#define POP_SP CMT_ASM("popw %sp")

#ifdef __SYSTEM_64_BIT__
#define POP_R8W CMT_ASM("popw %r8w")
#define POP_R9W CMT_ASM("popw %r9w")
#define POP_R10W CMT_ASM("popw %r10w")
#define POP_R11W CMT_ASM("popw %r11w")
#define POP_R12W CMT_ASM("popw %r12w")
#define POP_R13W CMT_ASM("popw %r13w")
#define POP_R14W CMT_ASM("popw %r14w")
#define POP_R15W CMT_ASM("popw %r15w")
#endif /* __SYSTEM_64_BIT__ */
/* ************************ [^] 16-BIT REGISTERS [^] ************************ */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
