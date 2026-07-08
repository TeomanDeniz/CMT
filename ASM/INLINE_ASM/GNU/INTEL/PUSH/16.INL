#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************ [v] 16-BIT REGISTERS [v] ************************ */
#define PUSH_AX CMT_ASM("pushw %ax")
#define PUSH_BX CMT_ASM("pushw %bx")
#define PUSH_CX CMT_ASM("pushw %cx")
#define PUSH_DX CMT_ASM("pushw %dx")
#define PUSH_SI CMT_ASM("pushw %si")
#define PUSH_DI CMT_ASM("pushw %di")
#define PUSH_BP CMT_ASM("pushw %bp")
#define PUSH_SP CMT_ASM("pushw %sp")

#ifdef __SYSTEM_64_BIT__
#define PUSH_R8W CMT_ASM("pushw %r8w")
#define PUSH_R9W CMT_ASM("pushw %r9w")
#define PUSH_R10W CMT_ASM("pushw %r10w")
#define PUSH_R11W CMT_ASM("pushw %r11w")
#define PUSH_R12W CMT_ASM("pushw %r12w")
#define PUSH_R13W CMT_ASM("pushw %r13w")
#define PUSH_R14W CMT_ASM("pushw %r14w")
#define PUSH_R15W CMT_ASM("pushw %r15w")
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
