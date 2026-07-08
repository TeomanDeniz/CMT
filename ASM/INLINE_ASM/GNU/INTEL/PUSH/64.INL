#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************ [v] 64-BIT REGISTERS [v] ************************ */
#define PUSH_RAX CMT_ASM("pushq %rax")
#define PUSH_RBX CMT_ASM("pushq %rbx")
#define PUSH_RCX CMT_ASM("pushq %rcx")
#define PUSH_RDX CMT_ASM("pushq %rdx")
#define PUSH_RSI CMT_ASM("pushq %rsi")
#define PUSH_RDI CMT_ASM("pushq %rdi")
#define PUSH_RBP CMT_ASM("pushq %rbp")
#define PUSH_RSP CMT_ASM("pushq %rsp")
#define PUSH_R8 CMT_ASM("pushq %r8")
#define PUSH_R9 CMT_ASM("pushq %r9")
#define PUSH_R10 CMT_ASM("pushq %r10")
#define PUSH_R11 CMT_ASM("pushq %r11")
#define PUSH_R12 CMT_ASM("pushq %r12")
#define PUSH_R13 CMT_ASM("pushq %r13")
#define PUSH_R14 CMT_ASM("pushq %r14")
#define PUSH_R15 CMT_ASM("pushq %r15")
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
