#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

#ifdef __SYSTEM_64_BIT__
#define MOVABS_RAX_(VALUE) CMT_ASM("movabsq $" _(VALUE) ", %rax")
#define MOVABS_RBX_(VALUE) CMT_ASM("movabsq $" _(VALUE) ", %rbx")
#define MOVABS_RCX_(VALUE) CMT_ASM("movabsq $" _(VALUE) ", %rcx")
#define MOVABS_RDX_(VALUE) CMT_ASM("movabsq $" _(VALUE) ", %rdx")
#define MOVABS_RSI_(VALUE) CMT_ASM("movabsq $" _(VALUE) ", %rsi")
#define MOVABS_RDI_(VALUE) CMT_ASM("movabsq $" _(VALUE) ", %rdi")
#define MOVABS_RBP_(VALUE) CMT_ASM("movabsq $" _(VALUE) ", %rbp")
#define MOVABS_RSP_(VALUE) CMT_ASM("movabsq $" _(VALUE) ", %rsp")
#define MOVABS_R8_(VALUE) CMT_ASM("movabsq $" _(VALUE) ", %r8")
#define MOVABS_R9_(VALUE) CMT_ASM("movabsq $" _(VALUE) ", %r9")
#define MOVABS_R10_(VALUE) CMT_ASM("movabsq $" _(VALUE) ", %r10")
#define MOVABS_R11_(VALUE) CMT_ASM("movabsq $" _(VALUE) ", %r11")
#define MOVABS_R12_(VALUE) CMT_ASM("movabsq $" _(VALUE) ", %r12")
#define MOVABS_R13_(VALUE) CMT_ASM("movabsq $" _(VALUE) ", %r13")
#define MOVABS_R14_(VALUE) CMT_ASM("movabsq $" _(VALUE) ", %r14")
#define MOVABS_R15_(VALUE) CMT_ASM("movabsq $" _(VALUE) ", %r15")
#endif /* __SYSTEM_64_BIT__ */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
