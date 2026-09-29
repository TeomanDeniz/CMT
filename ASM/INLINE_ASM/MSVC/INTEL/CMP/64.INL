#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************ [v] 64-BIT REGISTERS [v] ************************ */
#define CMP_RAX_RAX cmp rax, rax
#define CMP_RAX_RBX cmp rax, rbx
#define CMP_RAX_RCX cmp rax, rcx
#define CMP_RAX_RDX cmp rax, rdx
#define CMP_RAX_RDI cmp rax, rdi
#define CMP_RAX_RSI cmp rax, rsi
#define CMP_RAX_RBP cmp rax, rbp
#define CMP_RAX_RSP cmp rax, rsp
#define CMP_RAX_R8 cmp rax, r8
#define CMP_RAX_R9 cmp rax, r9
#define CMP_RAX_R10 cmp rax, r10
#define CMP_RAX_R11 cmp rax, r11
#define CMP_RAX_R12 cmp rax, r12
#define CMP_RAX_R13 cmp rax, r13
#define CMP_RAX_R14 cmp rax, r14
#define CMP_RAX_R15 cmp rax, r15

#define CMP_RBX_RAX cmp rbx, rax
#define CMP_RBX_RBX cmp rbx, rbx
#define CMP_RBX_RCX cmp rbx, rcx
#define CMP_RBX_RDX cmp rbx, rdx
#define CMP_RBX_RDI cmp rbx, rdi
#define CMP_RBX_RSI cmp rbx, rsi
#define CMP_RBX_RBP cmp rbx, rbp
#define CMP_RBX_RSP cmp rbx, rsp
#define CMP_RBX_R8 cmp rbx, r8
#define CMP_RBX_R9 cmp rbx, r9
#define CMP_RBX_R10 cmp rbx, r10
#define CMP_RBX_R11 cmp rbx, r11
#define CMP_RBX_R12 cmp rbx, r12
#define CMP_RBX_R13 cmp rbx, r13
#define CMP_RBX_R14 cmp rbx, r14
#define CMP_RBX_R15 cmp rbx, r15

#define CMP_RCX_RAX cmp rcx, rax
#define CMP_RCX_RBX cmp rcx, rbx
#define CMP_RCX_RCX cmp rcx, rcx
#define CMP_RCX_RDX cmp rcx, rdx
#define CMP_RCX_RDI cmp rcx, rdi
#define CMP_RCX_RSI cmp rcx, rsi
#define CMP_RCX_RBP cmp rcx, rbp
#define CMP_RCX_RSP cmp rcx, rsp
#define CMP_RCX_R8 cmp rcx, r8
#define CMP_RCX_R9 cmp rcx, r9
#define CMP_RCX_R10 cmp rcx, r10
#define CMP_RCX_R11 cmp rcx, r11
#define CMP_RCX_R12 cmp rcx, r12
#define CMP_RCX_R13 cmp rcx, r13
#define CMP_RCX_R14 cmp rcx, r14
#define CMP_RCX_R15 cmp rcx, r15

#define CMP_RDX_RAX cmp rdx, rax
#define CMP_RDX_RBX cmp rdx, rbx
#define CMP_RDX_RCX cmp rdx, rcx
#define CMP_RDX_RDX cmp rdx, rdx
#define CMP_RDX_RDI cmp rdx, rdi
#define CMP_RDX_RSI cmp rdx, rsi
#define CMP_RDX_RBP cmp rdx, rbp
#define CMP_RDX_RSP cmp rdx, rsp
#define CMP_RDX_R8 cmp rdx, r8
#define CMP_RDX_R9 cmp rdx, r9
#define CMP_RDX_R10 cmp rdx, r10
#define CMP_RDX_R11 cmp rdx, r11
#define CMP_RDX_R12 cmp rdx, r12
#define CMP_RDX_R13 cmp rdx, r13
#define CMP_RDX_R14 cmp rdx, r14
#define CMP_RDX_R15 cmp rdx, r15

#define CMP_RDI_RAX cmp rdi, rax
#define CMP_RDI_RBX cmp rdi, rbx
#define CMP_RDI_RCX cmp rdi, rcx
#define CMP_RDI_RDX cmp rdi, rdx
#define CMP_RDI_RDI cmp rdi, rdi
#define CMP_RDI_RSI cmp rdi, rsi
#define CMP_RDI_RBP cmp rdi, rbp
#define CMP_RDI_RSP cmp rdi, rsp
#define CMP_RDI_R8 cmp rdi, r8
#define CMP_RDI_R9 cmp rdi, r9
#define CMP_RDI_R10 cmp rdi, r10
#define CMP_RDI_R11 cmp rdi, r11
#define CMP_RDI_R12 cmp rdi, r12
#define CMP_RDI_R13 cmp rdi, r13
#define CMP_RDI_R14 cmp rdi, r14
#define CMP_RDI_R15 cmp rdi, r15

#define CMP_RSI_RAX cmp rsi, rax
#define CMP_RSI_RBX cmp rsi, rbx
#define CMP_RSI_RCX cmp rsi, rcx
#define CMP_RSI_RDX cmp rsi, rdx
#define CMP_RSI_RDI cmp rsi, rdi
#define CMP_RSI_RSI cmp rsi, rsi
#define CMP_RSI_RBP cmp rsi, rbp
#define CMP_RSI_RSP cmp rsi, rsp
#define CMP_RSI_R8 cmp rsi, r8
#define CMP_RSI_R9 cmp rsi, r9
#define CMP_RSI_R10 cmp rsi, r10
#define CMP_RSI_R11 cmp rsi, r11
#define CMP_RSI_R12 cmp rsi, r12
#define CMP_RSI_R13 cmp rsi, r13
#define CMP_RSI_R14 cmp rsi, r14
#define CMP_RSI_R15 cmp rsi, r15

#define CMP_RBP_RAX cmp rbp, rax
#define CMP_RBP_RBX cmp rbp, rbx
#define CMP_RBP_RCX cmp rbp, rcx
#define CMP_RBP_RDX cmp rbp, rdx
#define CMP_RBP_RDI cmp rbp, rdi
#define CMP_RBP_RSI cmp rbp, rsi
#define CMP_RBP_RBP cmp rbp, rbp
#define CMP_RBP_RSP cmp rbp, rsp
#define CMP_RBP_R8 cmp rbp, r8
#define CMP_RBP_R9 cmp rbp, r9
#define CMP_RBP_R10 cmp rbp, r10
#define CMP_RBP_R11 cmp rbp, r11
#define CMP_RBP_R12 cmp rbp, r12
#define CMP_RBP_R13 cmp rbp, r13
#define CMP_RBP_R14 cmp rbp, r14
#define CMP_RBP_R15 cmp rbp, r15

#define CMP_RSP_RAX cmp rsp, rax
#define CMP_RSP_RBX cmp rsp, rbx
#define CMP_RSP_RCX cmp rsp, rcx
#define CMP_RSP_RDX cmp rsp, rdx
#define CMP_RSP_RDI cmp rsp, rdi
#define CMP_RSP_RSI cmp rsp, rsi
#define CMP_RSP_RBP cmp rsp, rbp
#define CMP_RSP_RSP cmp rsp, rsp
#define CMP_RSP_R8 cmp rsp, r8
#define CMP_RSP_R9 cmp rsp, r9
#define CMP_RSP_R10 cmp rsp, r10
#define CMP_RSP_R11 cmp rsp, r11
#define CMP_RSP_R12 cmp rsp, r12
#define CMP_RSP_R13 cmp rsp, r13
#define CMP_RSP_R14 cmp rsp, r14
#define CMP_RSP_R15 cmp rsp, r15

#define CMP_R8_RAX cmp r8, rax
#define CMP_R8_RBX cmp r8, rbx
#define CMP_R8_RCX cmp r8, rcx
#define CMP_R8_RDX cmp r8, rdx
#define CMP_R8_RDI cmp r8, rdi
#define CMP_R8_RSI cmp r8, rsi
#define CMP_R8_RBP cmp r8, rbp
#define CMP_R8_RSP cmp r8, rsp
#define CMP_R8_R8 cmp r8, r8
#define CMP_R8_R9 cmp r8, r9
#define CMP_R8_R10 cmp r8, r10
#define CMP_R8_R11 cmp r8, r11
#define CMP_R8_R12 cmp r8, r12
#define CMP_R8_R13 cmp r8, r13
#define CMP_R8_R14 cmp r8, r14
#define CMP_R8_R15 cmp r8, r15

#define CMP_R9_RAX cmp r9, rax
#define CMP_R9_RBX cmp r9, rbx
#define CMP_R9_RCX cmp r9, rcx
#define CMP_R9_RDX cmp r9, rdx
#define CMP_R9_RDI cmp r9, rdi
#define CMP_R9_RSI cmp r9, rsi
#define CMP_R9_RBP cmp r9, rbp
#define CMP_R9_RSP cmp r9, rsp
#define CMP_R9_R8 cmp r9, r8
#define CMP_R9_R9 cmp r9, r9
#define CMP_R9_R10 cmp r9, r10
#define CMP_R9_R11 cmp r9, r11
#define CMP_R9_R12 cmp r9, r12
#define CMP_R9_R13 cmp r9, r13
#define CMP_R9_R14 cmp r9, r14
#define CMP_R9_R15 cmp r9, r15

#define CMP_R10_RAX cmp r10, rax
#define CMP_R10_RBX cmp r10, rbx
#define CMP_R10_RCX cmp r10, rcx
#define CMP_R10_RDX cmp r10, rdx
#define CMP_R10_RDI cmp r10, rdi
#define CMP_R10_RSI cmp r10, rsi
#define CMP_R10_RBP cmp r10, rbp
#define CMP_R10_RSP cmp r10, rsp
#define CMP_R10_R8 cmp r10, r8
#define CMP_R10_R9 cmp r10, r9
#define CMP_R10_R10 cmp r10, r10
#define CMP_R10_R11 cmp r10, r11
#define CMP_R10_R12 cmp r10, r12
#define CMP_R10_R13 cmp r10, r13
#define CMP_R10_R14 cmp r10, r14
#define CMP_R10_R15 cmp r10, r15

#define CMP_R11_RAX cmp r11, rax
#define CMP_R11_RBX cmp r11, rbx
#define CMP_R11_RCX cmp r11, rcx
#define CMP_R11_RDX cmp r11, rdx
#define CMP_R11_RDI cmp r11, rdi
#define CMP_R11_RSI cmp r11, rsi
#define CMP_R11_RBP cmp r11, rbp
#define CMP_R11_RSP cmp r11, rsp
#define CMP_R11_R8 cmp r11, r8
#define CMP_R11_R9 cmp r11, r9
#define CMP_R11_R10 cmp r11, r10
#define CMP_R11_R11 cmp r11, r11
#define CMP_R11_R12 cmp r11, r12
#define CMP_R11_R13 cmp r11, r13
#define CMP_R11_R14 cmp r11, r14
#define CMP_R11_R15 cmp r11, r15

#define CMP_R12_RAX cmp r12, rax
#define CMP_R12_RBX cmp r12, rbx
#define CMP_R12_RCX cmp r12, rcx
#define CMP_R12_RDX cmp r12, rdx
#define CMP_R12_RDI cmp r12, rdi
#define CMP_R12_RSI cmp r12, rsi
#define CMP_R12_RBP cmp r12, rbp
#define CMP_R12_RSP cmp r12, rsp
#define CMP_R12_R8 cmp r12, r8
#define CMP_R12_R9 cmp r12, r9
#define CMP_R12_R10 cmp r12, r10
#define CMP_R12_R11 cmp r12, r11
#define CMP_R12_R12 cmp r12, r12
#define CMP_R12_R13 cmp r12, r13
#define CMP_R12_R14 cmp r12, r14
#define CMP_R12_R15 cmp r12, r15

#define CMP_R13_RAX cmp r13, rax
#define CMP_R13_RBX cmp r13, rbx
#define CMP_R13_RCX cmp r13, rcx
#define CMP_R13_RDX cmp r13, rdx
#define CMP_R13_RDI cmp r13, rdi
#define CMP_R13_RSI cmp r13, rsi
#define CMP_R13_RBP cmp r13, rbp
#define CMP_R13_RSP cmp r13, rsp
#define CMP_R13_R8 cmp r13, r8
#define CMP_R13_R9 cmp r13, r9
#define CMP_R13_R10 cmp r13, r10
#define CMP_R13_R11 cmp r13, r11
#define CMP_R13_R12 cmp r13, r12
#define CMP_R13_R13 cmp r13, r13
#define CMP_R13_R14 cmp r13, r14
#define CMP_R13_R15 cmp r13, r15

#define CMP_R14_RAX cmp r14, rax
#define CMP_R14_RBX cmp r14, rbx
#define CMP_R14_RCX cmp r14, rcx
#define CMP_R14_RDX cmp r14, rdx
#define CMP_R14_RDI cmp r14, rdi
#define CMP_R14_RSI cmp r14, rsi
#define CMP_R14_RBP cmp r14, rbp
#define CMP_R14_RSP cmp r14, rsp
#define CMP_R14_R8 cmp r14, r8
#define CMP_R14_R9 cmp r14, r9
#define CMP_R14_R10 cmp r14, r10
#define CMP_R14_R11 cmp r14, r11
#define CMP_R14_R12 cmp r14, r12
#define CMP_R14_R13 cmp r14, r13
#define CMP_R14_R14 cmp r14, r14
#define CMP_R14_R15 cmp r14, r15

#define CMP_R15_RAX cmp r15, rax
#define CMP_R15_RBX cmp r15, rbx
#define CMP_R15_RCX cmp r15, rcx
#define CMP_R15_RDX cmp r15, rdx
#define CMP_R15_RDI cmp r15, rdi
#define CMP_R15_RSI cmp r15, rsi
#define CMP_R15_RBP cmp r15, rbp
#define CMP_R15_RSP cmp r15, rsp
#define CMP_R15_R8 cmp r15, r8
#define CMP_R15_R9 cmp r15, r9
#define CMP_R15_R10 cmp r15, r10
#define CMP_R15_R11 cmp r15, r11
#define CMP_R15_R12 cmp r15, r12
#define CMP_R15_R13 cmp r15, r13
#define CMP_R15_R14 cmp r15, r14
#define CMP_R15_R15 cmp r15, r15

#define CMP_RAX_(VALUE) cmp rax, VALUE
#define CMP_RBX_(VALUE) cmp rbx, VALUE
#define CMP_RCX_(VALUE) cmp rcx, VALUE
#define CMP_RDX_(VALUE) cmp rdx, VALUE
#define CMP_RDI_(VALUE) cmp rdi, VALUE
#define CMP_RSI_(VALUE) cmp rsi, VALUE
#define CMP_RBP_(VALUE) cmp rbp, VALUE
#define CMP_RSP_(VALUE) cmp rsp, VALUE
#define CMP_R8_(VALUE) cmp r8, VALUE
#define CMP_R9_(VALUE) cmp r9, VALUE
#define CMP_R10_(VALUE) cmp r10, VALUE
#define CMP_R11_(VALUE) cmp r11, VALUE
#define CMP_R12_(VALUE) cmp r12, VALUE
#define CMP_R13_(VALUE) cmp r13, VALUE
#define CMP_R14_(VALUE) cmp r14, VALUE
#define CMP_R15_(VALUE) cmp r15, VALUE
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
