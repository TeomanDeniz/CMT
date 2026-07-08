#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************ [v] 64-BIT REGISTERS [v] ************************ */
#define POP_RAX CMT_ASM("popq %rax")
#define POP_RBX CMT_ASM("popq %rbx")
#define POP_RCX CMT_ASM("popq %rcx")
#define POP_RDX CMT_ASM("popq %rdx")
#define POP_RSI CMT_ASM("popq %rsi")
#define POP_RDI CMT_ASM("popq %rdi")
#define POP_RBP CMT_ASM("popq %rbp")
#define POP_RSP CMT_ASM("popq %rsp")
#define POP_R8 CMT_ASM("popq %r8")
#define POP_R9 CMT_ASM("popq %r9")
#define POP_R10 CMT_ASM("popq %r10")
#define POP_R11 CMT_ASM("popq %r11")
#define POP_R12 CMT_ASM("popq %r12")
#define POP_R13 CMT_ASM("popq %r13")
#define POP_R14 CMT_ASM("popq %r14")
#define POP_R15 CMT_ASM("popq %r15")
/* ************************ [^] 64-BIT REGISTERS [^] ************************ */

#include "16.INL"

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
