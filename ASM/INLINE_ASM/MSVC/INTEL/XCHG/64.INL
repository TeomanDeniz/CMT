#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************ [v] 64-BIT REGISTERS [v] ************************ */
#define XCHG_RAX_RAX xchg rax, rax
#define XCHG_RAX_RBX xchg rax, rbx
#define XCHG_RAX_RCX xchg rax, rcx
#define XCHG_RAX_RDX xchg rax, rdx
#define XCHG_RAX_RDI xchg rax, rdi
#define XCHG_RAX_RSI xchg rax, rsi
#define XCHG_RAX_RBP xchg rax, rbp
#define XCHG_RAX_RSP xchg rax, rsp
#define XCHG_RAX_R8 xchg rax, r8
#define XCHG_RAX_R9 xchg rax, r9
#define XCHG_RAX_R10 xchg rax, r10
#define XCHG_RAX_R11 xchg rax, r11
#define XCHG_RAX_R12 xchg rax, r12
#define XCHG_RAX_R13 xchg rax, r13
#define XCHG_RAX_R14 xchg rax, r14
#define XCHG_RAX_R15 xchg rax, r15

#define XCHG_RBX_RAX xchg rbx, rax
#define XCHG_RBX_RBX xchg rbx, rbx
#define XCHG_RBX_RCX xchg rbx, rcx
#define XCHG_RBX_RDX xchg rbx, rdx
#define XCHG_RBX_RDI xchg rbx, rdi
#define XCHG_RBX_RSI xchg rbx, rsi
#define XCHG_RBX_RBP xchg rbx, rbp
#define XCHG_RBX_RSP xchg rbx, rsp
#define XCHG_RBX_R8 xchg rbx, r8
#define XCHG_RBX_R9 xchg rbx, r9
#define XCHG_RBX_R10 xchg rbx, r10
#define XCHG_RBX_R11 xchg rbx, r11
#define XCHG_RBX_R12 xchg rbx, r12
#define XCHG_RBX_R13 xchg rbx, r13
#define XCHG_RBX_R14 xchg rbx, r14
#define XCHG_RBX_R15 xchg rbx, r15

#define XCHG_RCX_RAX xchg rcx, rax
#define XCHG_RCX_RBX xchg rcx, rbx
#define XCHG_RCX_RCX xchg rcx, rcx
#define XCHG_RCX_RDX xchg rcx, rdx
#define XCHG_RCX_RDI xchg rcx, rdi
#define XCHG_RCX_RSI xchg rcx, rsi
#define XCHG_RCX_RBP xchg rcx, rbp
#define XCHG_RCX_RSP xchg rcx, rsp
#define XCHG_RCX_R8 xchg rcx, r8
#define XCHG_RCX_R9 xchg rcx, r9
#define XCHG_RCX_R10 xchg rcx, r10
#define XCHG_RCX_R11 xchg rcx, r11
#define XCHG_RCX_R12 xchg rcx, r12
#define XCHG_RCX_R13 xchg rcx, r13
#define XCHG_RCX_R14 xchg rcx, r14
#define XCHG_RCX_R15 xchg rcx, r15

#define XCHG_RDX_RAX xchg rdx, rax
#define XCHG_RDX_RBX xchg rdx, rbx
#define XCHG_RDX_RCX xchg rdx, rcx
#define XCHG_RDX_RDX xchg rdx, rdx
#define XCHG_RDX_RDI xchg rdx, rdi
#define XCHG_RDX_RSI xchg rdx, rsi
#define XCHG_RDX_RBP xchg rdx, rbp
#define XCHG_RDX_RSP xchg rdx, rsp
#define XCHG_RDX_R8 xchg rdx, r8
#define XCHG_RDX_R9 xchg rdx, r9
#define XCHG_RDX_R10 xchg rdx, r10
#define XCHG_RDX_R11 xchg rdx, r11
#define XCHG_RDX_R12 xchg rdx, r12
#define XCHG_RDX_R13 xchg rdx, r13
#define XCHG_RDX_R14 xchg rdx, r14
#define XCHG_RDX_R15 xchg rdx, r15

#define XCHG_RDI_RAX xchg rdi, rax
#define XCHG_RDI_RBX xchg rdi, rbx
#define XCHG_RDI_RCX xchg rdi, rcx
#define XCHG_RDI_RDX xchg rdi, rdx
#define XCHG_RDI_RDI xchg rdi, rdi
#define XCHG_RDI_RSI xchg rdi, rsi
#define XCHG_RDI_RBP xchg rdi, rbp
#define XCHG_RDI_RSP xchg rdi, rsp
#define XCHG_RDI_R8 xchg rdi, r8
#define XCHG_RDI_R9 xchg rdi, r9
#define XCHG_RDI_R10 xchg rdi, r10
#define XCHG_RDI_R11 xchg rdi, r11
#define XCHG_RDI_R12 xchg rdi, r12
#define XCHG_RDI_R13 xchg rdi, r13
#define XCHG_RDI_R14 xchg rdi, r14
#define XCHG_RDI_R15 xchg rdi, r15

#define XCHG_RSI_RAX xchg rsi, rax
#define XCHG_RSI_RBX xchg rsi, rbx
#define XCHG_RSI_RCX xchg rsi, rcx
#define XCHG_RSI_RDX xchg rsi, rdx
#define XCHG_RSI_RDI xchg rsi, rdi
#define XCHG_RSI_RSI xchg rsi, rsi
#define XCHG_RSI_RBP xchg rsi, rbp
#define XCHG_RSI_RSP xchg rsi, rsp
#define XCHG_RSI_R8 xchg rsi, r8
#define XCHG_RSI_R9 xchg rsi, r9
#define XCHG_RSI_R10 xchg rsi, r10
#define XCHG_RSI_R11 xchg rsi, r11
#define XCHG_RSI_R12 xchg rsi, r12
#define XCHG_RSI_R13 xchg rsi, r13
#define XCHG_RSI_R14 xchg rsi, r14
#define XCHG_RSI_R15 xchg rsi, r15

#define XCHG_RBP_RAX xchg rbp, rax
#define XCHG_RBP_RBX xchg rbp, rbx
#define XCHG_RBP_RCX xchg rbp, rcx
#define XCHG_RBP_RDX xchg rbp, rdx
#define XCHG_RBP_RDI xchg rbp, rdi
#define XCHG_RBP_RSI xchg rbp, rsi
#define XCHG_RBP_RBP xchg rbp, rbp
#define XCHG_RBP_RSP xchg rbp, rsp
#define XCHG_RBP_R8 xchg rbp, r8
#define XCHG_RBP_R9 xchg rbp, r9
#define XCHG_RBP_R10 xchg rbp, r10
#define XCHG_RBP_R11 xchg rbp, r11
#define XCHG_RBP_R12 xchg rbp, r12
#define XCHG_RBP_R13 xchg rbp, r13
#define XCHG_RBP_R14 xchg rbp, r14
#define XCHG_RBP_R15 xchg rbp, r15

#define XCHG_RSP_RAX xchg rsp, rax
#define XCHG_RSP_RBX xchg rsp, rbx
#define XCHG_RSP_RCX xchg rsp, rcx
#define XCHG_RSP_RDX xchg rsp, rdx
#define XCHG_RSP_RDI xchg rsp, rdi
#define XCHG_RSP_RSI xchg rsp, rsi
#define XCHG_RSP_RBP xchg rsp, rbp
#define XCHG_RSP_RSP xchg rsp, rsp
#define XCHG_RSP_R8 xchg rsp, r8
#define XCHG_RSP_R9 xchg rsp, r9
#define XCHG_RSP_R10 xchg rsp, r10
#define XCHG_RSP_R11 xchg rsp, r11
#define XCHG_RSP_R12 xchg rsp, r12
#define XCHG_RSP_R13 xchg rsp, r13
#define XCHG_RSP_R14 xchg rsp, r14
#define XCHG_RSP_R15 xchg rsp, r15

#define XCHG_R8_RAX xchg r8, rax
#define XCHG_R8_RBX xchg r8, rbx
#define XCHG_R8_RCX xchg r8, rcx
#define XCHG_R8_RDX xchg r8, rdx
#define XCHG_R8_RDI xchg r8, rdi
#define XCHG_R8_RSI xchg r8, rsi
#define XCHG_R8_RBP xchg r8, rbp
#define XCHG_R8_RSP xchg r8, rsp
#define XCHG_R8_R8 xchg r8, r8
#define XCHG_R8_R9 xchg r8, r9
#define XCHG_R8_R10 xchg r8, r10
#define XCHG_R8_R11 xchg r8, r11
#define XCHG_R8_R12 xchg r8, r12
#define XCHG_R8_R13 xchg r8, r13
#define XCHG_R8_R14 xchg r8, r14
#define XCHG_R8_R15 xchg r8, r15

#define XCHG_R9_RAX xchg r9, rax
#define XCHG_R9_RBX xchg r9, rbx
#define XCHG_R9_RCX xchg r9, rcx
#define XCHG_R9_RDX xchg r9, rdx
#define XCHG_R9_RDI xchg r9, rdi
#define XCHG_R9_RSI xchg r9, rsi
#define XCHG_R9_RBP xchg r9, rbp
#define XCHG_R9_RSP xchg r9, rsp
#define XCHG_R9_R8 xchg r9, r8
#define XCHG_R9_R9 xchg r9, r9
#define XCHG_R9_R10 xchg r9, r10
#define XCHG_R9_R11 xchg r9, r11
#define XCHG_R9_R12 xchg r9, r12
#define XCHG_R9_R13 xchg r9, r13
#define XCHG_R9_R14 xchg r9, r14
#define XCHG_R9_R15 xchg r9, r15

#define XCHG_R10_RAX xchg r10, rax
#define XCHG_R10_RBX xchg r10, rbx
#define XCHG_R10_RCX xchg r10, rcx
#define XCHG_R10_RDX xchg r10, rdx
#define XCHG_R10_RDI xchg r10, rdi
#define XCHG_R10_RSI xchg r10, rsi
#define XCHG_R10_RBP xchg r10, rbp
#define XCHG_R10_RSP xchg r10, rsp
#define XCHG_R10_R8 xchg r10, r8
#define XCHG_R10_R9 xchg r10, r9
#define XCHG_R10_R10 xchg r10, r10
#define XCHG_R10_R11 xchg r10, r11
#define XCHG_R10_R12 xchg r10, r12
#define XCHG_R10_R13 xchg r10, r13
#define XCHG_R10_R14 xchg r10, r14
#define XCHG_R10_R15 xchg r10, r15

#define XCHG_R11_RAX xchg r11, rax
#define XCHG_R11_RBX xchg r11, rbx
#define XCHG_R11_RCX xchg r11, rcx
#define XCHG_R11_RDX xchg r11, rdx
#define XCHG_R11_RDI xchg r11, rdi
#define XCHG_R11_RSI xchg r11, rsi
#define XCHG_R11_RBP xchg r11, rbp
#define XCHG_R11_RSP xchg r11, rsp
#define XCHG_R11_R8 xchg r11, r8
#define XCHG_R11_R9 xchg r11, r9
#define XCHG_R11_R10 xchg r11, r10
#define XCHG_R11_R11 xchg r11, r11
#define XCHG_R11_R12 xchg r11, r12
#define XCHG_R11_R13 xchg r11, r13
#define XCHG_R11_R14 xchg r11, r14
#define XCHG_R11_R15 xchg r11, r15

#define XCHG_R12_RAX xchg r12, rax
#define XCHG_R12_RBX xchg r12, rbx
#define XCHG_R12_RCX xchg r12, rcx
#define XCHG_R12_RDX xchg r12, rdx
#define XCHG_R12_RDI xchg r12, rdi
#define XCHG_R12_RSI xchg r12, rsi
#define XCHG_R12_RBP xchg r12, rbp
#define XCHG_R12_RSP xchg r12, rsp
#define XCHG_R12_R8 xchg r12, r8
#define XCHG_R12_R9 xchg r12, r9
#define XCHG_R12_R10 xchg r12, r10
#define XCHG_R12_R11 xchg r12, r11
#define XCHG_R12_R12 xchg r12, r12
#define XCHG_R12_R13 xchg r12, r13
#define XCHG_R12_R14 xchg r12, r14
#define XCHG_R12_R15 xchg r12, r15

#define XCHG_R13_RAX xchg r13, rax
#define XCHG_R13_RBX xchg r13, rbx
#define XCHG_R13_RCX xchg r13, rcx
#define XCHG_R13_RDX xchg r13, rdx
#define XCHG_R13_RDI xchg r13, rdi
#define XCHG_R13_RSI xchg r13, rsi
#define XCHG_R13_RBP xchg r13, rbp
#define XCHG_R13_RSP xchg r13, rsp
#define XCHG_R13_R8 xchg r13, r8
#define XCHG_R13_R9 xchg r13, r9
#define XCHG_R13_R10 xchg r13, r10
#define XCHG_R13_R11 xchg r13, r11
#define XCHG_R13_R12 xchg r13, r12
#define XCHG_R13_R13 xchg r13, r13
#define XCHG_R13_R14 xchg r13, r14
#define XCHG_R13_R15 xchg r13, r15

#define XCHG_R14_RAX xchg r14, rax
#define XCHG_R14_RBX xchg r14, rbx
#define XCHG_R14_RCX xchg r14, rcx
#define XCHG_R14_RDX xchg r14, rdx
#define XCHG_R14_RDI xchg r14, rdi
#define XCHG_R14_RSI xchg r14, rsi
#define XCHG_R14_RBP xchg r14, rbp
#define XCHG_R14_RSP xchg r14, rsp
#define XCHG_R14_R8 xchg r14, r8
#define XCHG_R14_R9 xchg r14, r9
#define XCHG_R14_R10 xchg r14, r10
#define XCHG_R14_R11 xchg r14, r11
#define XCHG_R14_R12 xchg r14, r12
#define XCHG_R14_R13 xchg r14, r13
#define XCHG_R14_R14 xchg r14, r14
#define XCHG_R14_R15 xchg r14, r15

#define XCHG_R15_RAX xchg r15, rax
#define XCHG_R15_RBX xchg r15, rbx
#define XCHG_R15_RCX xchg r15, rcx
#define XCHG_R15_RDX xchg r15, rdx
#define XCHG_R15_RDI xchg r15, rdi
#define XCHG_R15_RSI xchg r15, rsi
#define XCHG_R15_RBP xchg r15, rbp
#define XCHG_R15_RSP xchg r15, rsp
#define XCHG_R15_R8 xchg r15, r8
#define XCHG_R15_R9 xchg r15, r9
#define XCHG_R15_R10 xchg r15, r10
#define XCHG_R15_R11 xchg r15, r11
#define XCHG_R15_R12 xchg r15, r12
#define XCHG_R15_R13 xchg r15, r13
#define XCHG_R15_R14 xchg r15, r14
#define XCHG_R15_R15 xchg r15, r15
/* ************************ [^] 64-BIT REGISTERS [^] ************************ */

#include "32.INL"

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
