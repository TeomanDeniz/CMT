#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************ [v] 64-BIT REGISTERS [v] ************************ */
#define SUB_RAX_RAX sub rax, rax
#define SUB_RAX_RBX sub rax, rbx
#define SUB_RAX_RCX sub rax, rcx
#define SUB_RAX_RDX sub rax, rdx
#define SUB_RAX_RDI sub rax, rdi
#define SUB_RAX_RSI sub rax, rsi
#define SUB_RAX_RBP sub rax, rbp
#define SUB_RAX_RSP sub rax, rsp
#define SUB_RAX_R8 sub rax, r8
#define SUB_RAX_R9 sub rax, r9
#define SUB_RAX_R10 sub rax, r10
#define SUB_RAX_R11 sub rax, r11
#define SUB_RAX_R12 sub rax, r12
#define SUB_RAX_R13 sub rax, r13
#define SUB_RAX_R14 sub rax, r14
#define SUB_RAX_R15 sub rax, r15

#define SUB_RBX_RAX sub rbx, rax
#define SUB_RBX_RBX sub rbx, rbx
#define SUB_RBX_RCX sub rbx, rcx
#define SUB_RBX_RDX sub rbx, rdx
#define SUB_RBX_RDI sub rbx, rdi
#define SUB_RBX_RSI sub rbx, rsi
#define SUB_RBX_RBP sub rbx, rbp
#define SUB_RBX_RSP sub rbx, rsp
#define SUB_RBX_R8 sub rbx, r8
#define SUB_RBX_R9 sub rbx, r9
#define SUB_RBX_R10 sub rbx, r10
#define SUB_RBX_R11 sub rbx, r11
#define SUB_RBX_R12 sub rbx, r12
#define SUB_RBX_R13 sub rbx, r13
#define SUB_RBX_R14 sub rbx, r14
#define SUB_RBX_R15 sub rbx, r15

#define SUB_RCX_RAX sub rcx, rax
#define SUB_RCX_RBX sub rcx, rbx
#define SUB_RCX_RCX sub rcx, rcx
#define SUB_RCX_RDX sub rcx, rdx
#define SUB_RCX_RDI sub rcx, rdi
#define SUB_RCX_RSI sub rcx, rsi
#define SUB_RCX_RBP sub rcx, rbp
#define SUB_RCX_RSP sub rcx, rsp
#define SUB_RCX_R8 sub rcx, r8
#define SUB_RCX_R9 sub rcx, r9
#define SUB_RCX_R10 sub rcx, r10
#define SUB_RCX_R11 sub rcx, r11
#define SUB_RCX_R12 sub rcx, r12
#define SUB_RCX_R13 sub rcx, r13
#define SUB_RCX_R14 sub rcx, r14
#define SUB_RCX_R15 sub rcx, r15

#define SUB_RDX_RAX sub rdx, rax
#define SUB_RDX_RBX sub rdx, rbx
#define SUB_RDX_RCX sub rdx, rcx
#define SUB_RDX_RDX sub rdx, rdx
#define SUB_RDX_RDI sub rdx, rdi
#define SUB_RDX_RSI sub rdx, rsi
#define SUB_RDX_RBP sub rdx, rbp
#define SUB_RDX_RSP sub rdx, rsp
#define SUB_RDX_R8 sub rdx, r8
#define SUB_RDX_R9 sub rdx, r9
#define SUB_RDX_R10 sub rdx, r10
#define SUB_RDX_R11 sub rdx, r11
#define SUB_RDX_R12 sub rdx, r12
#define SUB_RDX_R13 sub rdx, r13
#define SUB_RDX_R14 sub rdx, r14
#define SUB_RDX_R15 sub rdx, r15

#define SUB_RDI_RAX sub rdi, rax
#define SUB_RDI_RBX sub rdi, rbx
#define SUB_RDI_RCX sub rdi, rcx
#define SUB_RDI_RDX sub rdi, rdx
#define SUB_RDI_RDI sub rdi, rdi
#define SUB_RDI_RSI sub rdi, rsi
#define SUB_RDI_RBP sub rdi, rbp
#define SUB_RDI_RSP sub rdi, rsp
#define SUB_RDI_R8 sub rdi, r8
#define SUB_RDI_R9 sub rdi, r9
#define SUB_RDI_R10 sub rdi, r10
#define SUB_RDI_R11 sub rdi, r11
#define SUB_RDI_R12 sub rdi, r12
#define SUB_RDI_R13 sub rdi, r13
#define SUB_RDI_R14 sub rdi, r14
#define SUB_RDI_R15 sub rdi, r15

#define SUB_RSI_RAX sub rsi, rax
#define SUB_RSI_RBX sub rsi, rbx
#define SUB_RSI_RCX sub rsi, rcx
#define SUB_RSI_RDX sub rsi, rdx
#define SUB_RSI_RDI sub rsi, rdi
#define SUB_RSI_RSI sub rsi, rsi
#define SUB_RSI_RBP sub rsi, rbp
#define SUB_RSI_RSP sub rsi, rsp
#define SUB_RSI_R8 sub rsi, r8
#define SUB_RSI_R9 sub rsi, r9
#define SUB_RSI_R10 sub rsi, r10
#define SUB_RSI_R11 sub rsi, r11
#define SUB_RSI_R12 sub rsi, r12
#define SUB_RSI_R13 sub rsi, r13
#define SUB_RSI_R14 sub rsi, r14
#define SUB_RSI_R15 sub rsi, r15

#define SUB_RBP_RAX sub rbp, rax
#define SUB_RBP_RBX sub rbp, rbx
#define SUB_RBP_RCX sub rbp, rcx
#define SUB_RBP_RDX sub rbp, rdx
#define SUB_RBP_RDI sub rbp, rdi
#define SUB_RBP_RSI sub rbp, rsi
#define SUB_RBP_RBP sub rbp, rbp
#define SUB_RBP_RSP sub rbp, rsp
#define SUB_RBP_R8 sub rbp, r8
#define SUB_RBP_R9 sub rbp, r9
#define SUB_RBP_R10 sub rbp, r10
#define SUB_RBP_R11 sub rbp, r11
#define SUB_RBP_R12 sub rbp, r12
#define SUB_RBP_R13 sub rbp, r13
#define SUB_RBP_R14 sub rbp, r14
#define SUB_RBP_R15 sub rbp, r15

#define SUB_RSP_RAX sub rsp, rax
#define SUB_RSP_RBX sub rsp, rbx
#define SUB_RSP_RCX sub rsp, rcx
#define SUB_RSP_RDX sub rsp, rdx
#define SUB_RSP_RDI sub rsp, rdi
#define SUB_RSP_RSI sub rsp, rsi
#define SUB_RSP_RBP sub rsp, rbp
#define SUB_RSP_RSP sub rsp, rsp
#define SUB_RSP_R8 sub rsp, r8
#define SUB_RSP_R9 sub rsp, r9
#define SUB_RSP_R10 sub rsp, r10
#define SUB_RSP_R11 sub rsp, r11
#define SUB_RSP_R12 sub rsp, r12
#define SUB_RSP_R13 sub rsp, r13
#define SUB_RSP_R14 sub rsp, r14
#define SUB_RSP_R15 sub rsp, r15

#define SUB_R8_RAX sub r8, rax
#define SUB_R8_RBX sub r8, rbx
#define SUB_R8_RCX sub r8, rcx
#define SUB_R8_RDX sub r8, rdx
#define SUB_R8_RDI sub r8, rdi
#define SUB_R8_RSI sub r8, rsi
#define SUB_R8_RBP sub r8, rbp
#define SUB_R8_RSP sub r8, rsp
#define SUB_R8_R8 sub r8, r8
#define SUB_R8_R9 sub r8, r9
#define SUB_R8_R10 sub r8, r10
#define SUB_R8_R11 sub r8, r11
#define SUB_R8_R12 sub r8, r12
#define SUB_R8_R13 sub r8, r13
#define SUB_R8_R14 sub r8, r14
#define SUB_R8_R15 sub r8, r15

#define SUB_R9_RAX sub r9, rax
#define SUB_R9_RBX sub r9, rbx
#define SUB_R9_RCX sub r9, rcx
#define SUB_R9_RDX sub r9, rdx
#define SUB_R9_RDI sub r9, rdi
#define SUB_R9_RSI sub r9, rsi
#define SUB_R9_RBP sub r9, rbp
#define SUB_R9_RSP sub r9, rsp
#define SUB_R9_R8 sub r9, r8
#define SUB_R9_R9 sub r9, r9
#define SUB_R9_R10 sub r9, r10
#define SUB_R9_R11 sub r9, r11
#define SUB_R9_R12 sub r9, r12
#define SUB_R9_R13 sub r9, r13
#define SUB_R9_R14 sub r9, r14
#define SUB_R9_R15 sub r9, r15

#define SUB_R10_RAX sub r10, rax
#define SUB_R10_RBX sub r10, rbx
#define SUB_R10_RCX sub r10, rcx
#define SUB_R10_RDX sub r10, rdx
#define SUB_R10_RDI sub r10, rdi
#define SUB_R10_RSI sub r10, rsi
#define SUB_R10_RBP sub r10, rbp
#define SUB_R10_RSP sub r10, rsp
#define SUB_R10_R8 sub r10, r8
#define SUB_R10_R9 sub r10, r9
#define SUB_R10_R10 sub r10, r10
#define SUB_R10_R11 sub r10, r11
#define SUB_R10_R12 sub r10, r12
#define SUB_R10_R13 sub r10, r13
#define SUB_R10_R14 sub r10, r14
#define SUB_R10_R15 sub r10, r15

#define SUB_R11_RAX sub r11, rax
#define SUB_R11_RBX sub r11, rbx
#define SUB_R11_RCX sub r11, rcx
#define SUB_R11_RDX sub r11, rdx
#define SUB_R11_RDI sub r11, rdi
#define SUB_R11_RSI sub r11, rsi
#define SUB_R11_RBP sub r11, rbp
#define SUB_R11_RSP sub r11, rsp
#define SUB_R11_R8 sub r11, r8
#define SUB_R11_R9 sub r11, r9
#define SUB_R11_R10 sub r11, r10
#define SUB_R11_R11 sub r11, r11
#define SUB_R11_R12 sub r11, r12
#define SUB_R11_R13 sub r11, r13
#define SUB_R11_R14 sub r11, r14
#define SUB_R11_R15 sub r11, r15

#define SUB_R12_RAX sub r12, rax
#define SUB_R12_RBX sub r12, rbx
#define SUB_R12_RCX sub r12, rcx
#define SUB_R12_RDX sub r12, rdx
#define SUB_R12_RDI sub r12, rdi
#define SUB_R12_RSI sub r12, rsi
#define SUB_R12_RBP sub r12, rbp
#define SUB_R12_RSP sub r12, rsp
#define SUB_R12_R8 sub r12, r8
#define SUB_R12_R9 sub r12, r9
#define SUB_R12_R10 sub r12, r10
#define SUB_R12_R11 sub r12, r11
#define SUB_R12_R12 sub r12, r12
#define SUB_R12_R13 sub r12, r13
#define SUB_R12_R14 sub r12, r14
#define SUB_R12_R15 sub r12, r15

#define SUB_R13_RAX sub r13, rax
#define SUB_R13_RBX sub r13, rbx
#define SUB_R13_RCX sub r13, rcx
#define SUB_R13_RDX sub r13, rdx
#define SUB_R13_RDI sub r13, rdi
#define SUB_R13_RSI sub r13, rsi
#define SUB_R13_RBP sub r13, rbp
#define SUB_R13_RSP sub r13, rsp
#define SUB_R13_R8 sub r13, r8
#define SUB_R13_R9 sub r13, r9
#define SUB_R13_R10 sub r13, r10
#define SUB_R13_R11 sub r13, r11
#define SUB_R13_R12 sub r13, r12
#define SUB_R13_R13 sub r13, r13
#define SUB_R13_R14 sub r13, r14
#define SUB_R13_R15 sub r13, r15

#define SUB_R14_RAX sub r14, rax
#define SUB_R14_RBX sub r14, rbx
#define SUB_R14_RCX sub r14, rcx
#define SUB_R14_RDX sub r14, rdx
#define SUB_R14_RDI sub r14, rdi
#define SUB_R14_RSI sub r14, rsi
#define SUB_R14_RBP sub r14, rbp
#define SUB_R14_RSP sub r14, rsp
#define SUB_R14_R8 sub r14, r8
#define SUB_R14_R9 sub r14, r9
#define SUB_R14_R10 sub r14, r10
#define SUB_R14_R11 sub r14, r11
#define SUB_R14_R12 sub r14, r12
#define SUB_R14_R13 sub r14, r13
#define SUB_R14_R14 sub r14, r14
#define SUB_R14_R15 sub r14, r15

#define SUB_R15_RAX sub r15, rax
#define SUB_R15_RBX sub r15, rbx
#define SUB_R15_RCX sub r15, rcx
#define SUB_R15_RDX sub r15, rdx
#define SUB_R15_RDI sub r15, rdi
#define SUB_R15_RSI sub r15, rsi
#define SUB_R15_RBP sub r15, rbp
#define SUB_R15_RSP sub r15, rsp
#define SUB_R15_R8 sub r15, r8
#define SUB_R15_R9 sub r15, r9
#define SUB_R15_R10 sub r15, r10
#define SUB_R15_R11 sub r15, r11
#define SUB_R15_R12 sub r15, r12
#define SUB_R15_R13 sub r15, r13
#define SUB_R15_R14 sub r15, r14
#define SUB_R15_R15 sub r15, r15

#define SUB_RAX_(VALUE) sub rax, VALUE
#define SUB_RBX_(VALUE) sub rbx, VALUE
#define SUB_RCX_(VALUE) sub rcx, VALUE
#define SUB_RDX_(VALUE) sub rdx, VALUE
#define SUB_RDI_(VALUE) sub rdi, VALUE
#define SUB_RSI_(VALUE) sub rsi, VALUE
#define SUB_RBP_(VALUE) sub rbp, VALUE
#define SUB_RSP_(VALUE) sub rsp, VALUE
#define SUB_R8_(VALUE) sub r8, VALUE
#define SUB_R9_(VALUE) sub r9, VALUE
#define SUB_R10_(VALUE) sub r10, VALUE
#define SUB_R11_(VALUE) sub r11, VALUE
#define SUB_R12_(VALUE) sub r12, VALUE
#define SUB_R13_(VALUE) sub r13, VALUE
#define SUB_R14_(VALUE) sub r14, VALUE
#define SUB_R15_(VALUE) sub r15, VALUE
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
