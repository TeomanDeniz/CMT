#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************ [v] 64-BIT REGISTERS [v] ************************ */
#define OR_RAX_RAX or rax, rax
#define OR_RAX_RBX or rax, rbx
#define OR_RAX_RCX or rax, rcx
#define OR_RAX_RDX or rax, rdx
#define OR_RAX_RDI or rax, rdi
#define OR_RAX_RSI or rax, rsi
#define OR_RAX_RBP or rax, rbp
#define OR_RAX_RSP or rax, rsp
#define OR_RAX_R8 or rax, r8
#define OR_RAX_R9 or rax, r9
#define OR_RAX_R10 or rax, r10
#define OR_RAX_R11 or rax, r11
#define OR_RAX_R12 or rax, r12
#define OR_RAX_R13 or rax, r13
#define OR_RAX_R14 or rax, r14
#define OR_RAX_R15 or rax, r15

#define OR_RBX_RAX or rbx, rax
#define OR_RBX_RBX or rbx, rbx
#define OR_RBX_RCX or rbx, rcx
#define OR_RBX_RDX or rbx, rdx
#define OR_RBX_RDI or rbx, rdi
#define OR_RBX_RSI or rbx, rsi
#define OR_RBX_RBP or rbx, rbp
#define OR_RBX_RSP or rbx, rsp
#define OR_RBX_R8 or rbx, r8
#define OR_RBX_R9 or rbx, r9
#define OR_RBX_R10 or rbx, r10
#define OR_RBX_R11 or rbx, r11
#define OR_RBX_R12 or rbx, r12
#define OR_RBX_R13 or rbx, r13
#define OR_RBX_R14 or rbx, r14
#define OR_RBX_R15 or rbx, r15

#define OR_RCX_RAX or rcx, rax
#define OR_RCX_RBX or rcx, rbx
#define OR_RCX_RCX or rcx, rcx
#define OR_RCX_RDX or rcx, rdx
#define OR_RCX_RDI or rcx, rdi
#define OR_RCX_RSI or rcx, rsi
#define OR_RCX_RBP or rcx, rbp
#define OR_RCX_RSP or rcx, rsp
#define OR_RCX_R8 or rcx, r8
#define OR_RCX_R9 or rcx, r9
#define OR_RCX_R10 or rcx, r10
#define OR_RCX_R11 or rcx, r11
#define OR_RCX_R12 or rcx, r12
#define OR_RCX_R13 or rcx, r13
#define OR_RCX_R14 or rcx, r14
#define OR_RCX_R15 or rcx, r15

#define OR_RDX_RAX or rdx, rax
#define OR_RDX_RBX or rdx, rbx
#define OR_RDX_RCX or rdx, rcx
#define OR_RDX_RDX or rdx, rdx
#define OR_RDX_RDI or rdx, rdi
#define OR_RDX_RSI or rdx, rsi
#define OR_RDX_RBP or rdx, rbp
#define OR_RDX_RSP or rdx, rsp
#define OR_RDX_R8 or rdx, r8
#define OR_RDX_R9 or rdx, r9
#define OR_RDX_R10 or rdx, r10
#define OR_RDX_R11 or rdx, r11
#define OR_RDX_R12 or rdx, r12
#define OR_RDX_R13 or rdx, r13
#define OR_RDX_R14 or rdx, r14
#define OR_RDX_R15 or rdx, r15

#define OR_RDI_RAX or rdi, rax
#define OR_RDI_RBX or rdi, rbx
#define OR_RDI_RCX or rdi, rcx
#define OR_RDI_RDX or rdi, rdx
#define OR_RDI_RDI or rdi, rdi
#define OR_RDI_RSI or rdi, rsi
#define OR_RDI_RBP or rdi, rbp
#define OR_RDI_RSP or rdi, rsp
#define OR_RDI_R8 or rdi, r8
#define OR_RDI_R9 or rdi, r9
#define OR_RDI_R10 or rdi, r10
#define OR_RDI_R11 or rdi, r11
#define OR_RDI_R12 or rdi, r12
#define OR_RDI_R13 or rdi, r13
#define OR_RDI_R14 or rdi, r14
#define OR_RDI_R15 or rdi, r15

#define OR_RSI_RAX or rsi, rax
#define OR_RSI_RBX or rsi, rbx
#define OR_RSI_RCX or rsi, rcx
#define OR_RSI_RDX or rsi, rdx
#define OR_RSI_RDI or rsi, rdi
#define OR_RSI_RSI or rsi, rsi
#define OR_RSI_RBP or rsi, rbp
#define OR_RSI_RSP or rsi, rsp
#define OR_RSI_R8 or rsi, r8
#define OR_RSI_R9 or rsi, r9
#define OR_RSI_R10 or rsi, r10
#define OR_RSI_R11 or rsi, r11
#define OR_RSI_R12 or rsi, r12
#define OR_RSI_R13 or rsi, r13
#define OR_RSI_R14 or rsi, r14
#define OR_RSI_R15 or rsi, r15

#define OR_RBP_RAX or rbp, rax
#define OR_RBP_RBX or rbp, rbx
#define OR_RBP_RCX or rbp, rcx
#define OR_RBP_RDX or rbp, rdx
#define OR_RBP_RDI or rbp, rdi
#define OR_RBP_RSI or rbp, rsi
#define OR_RBP_RBP or rbp, rbp
#define OR_RBP_RSP or rbp, rsp
#define OR_RBP_R8 or rbp, r8
#define OR_RBP_R9 or rbp, r9
#define OR_RBP_R10 or rbp, r10
#define OR_RBP_R11 or rbp, r11
#define OR_RBP_R12 or rbp, r12
#define OR_RBP_R13 or rbp, r13
#define OR_RBP_R14 or rbp, r14
#define OR_RBP_R15 or rbp, r15

#define OR_RSP_RAX or rsp, rax
#define OR_RSP_RBX or rsp, rbx
#define OR_RSP_RCX or rsp, rcx
#define OR_RSP_RDX or rsp, rdx
#define OR_RSP_RDI or rsp, rdi
#define OR_RSP_RSI or rsp, rsi
#define OR_RSP_RBP or rsp, rbp
#define OR_RSP_RSP or rsp, rsp
#define OR_RSP_R8 or rsp, r8
#define OR_RSP_R9 or rsp, r9
#define OR_RSP_R10 or rsp, r10
#define OR_RSP_R11 or rsp, r11
#define OR_RSP_R12 or rsp, r12
#define OR_RSP_R13 or rsp, r13
#define OR_RSP_R14 or rsp, r14
#define OR_RSP_R15 or rsp, r15

#define OR_R8_RAX or r8, rax
#define OR_R8_RBX or r8, rbx
#define OR_R8_RCX or r8, rcx
#define OR_R8_RDX or r8, rdx
#define OR_R8_RDI or r8, rdi
#define OR_R8_RSI or r8, rsi
#define OR_R8_RBP or r8, rbp
#define OR_R8_RSP or r8, rsp
#define OR_R8_R8 or r8, r8
#define OR_R8_R9 or r8, r9
#define OR_R8_R10 or r8, r10
#define OR_R8_R11 or r8, r11
#define OR_R8_R12 or r8, r12
#define OR_R8_R13 or r8, r13
#define OR_R8_R14 or r8, r14
#define OR_R8_R15 or r8, r15

#define OR_R9_RAX or r9, rax
#define OR_R9_RBX or r9, rbx
#define OR_R9_RCX or r9, rcx
#define OR_R9_RDX or r9, rdx
#define OR_R9_RDI or r9, rdi
#define OR_R9_RSI or r9, rsi
#define OR_R9_RBP or r9, rbp
#define OR_R9_RSP or r9, rsp
#define OR_R9_R8 or r9, r8
#define OR_R9_R9 or r9, r9
#define OR_R9_R10 or r9, r10
#define OR_R9_R11 or r9, r11
#define OR_R9_R12 or r9, r12
#define OR_R9_R13 or r9, r13
#define OR_R9_R14 or r9, r14
#define OR_R9_R15 or r9, r15

#define OR_R10_RAX or r10, rax
#define OR_R10_RBX or r10, rbx
#define OR_R10_RCX or r10, rcx
#define OR_R10_RDX or r10, rdx
#define OR_R10_RDI or r10, rdi
#define OR_R10_RSI or r10, rsi
#define OR_R10_RBP or r10, rbp
#define OR_R10_RSP or r10, rsp
#define OR_R10_R8 or r10, r8
#define OR_R10_R9 or r10, r9
#define OR_R10_R10 or r10, r10
#define OR_R10_R11 or r10, r11
#define OR_R10_R12 or r10, r12
#define OR_R10_R13 or r10, r13
#define OR_R10_R14 or r10, r14
#define OR_R10_R15 or r10, r15

#define OR_R11_RAX or r11, rax
#define OR_R11_RBX or r11, rbx
#define OR_R11_RCX or r11, rcx
#define OR_R11_RDX or r11, rdx
#define OR_R11_RDI or r11, rdi
#define OR_R11_RSI or r11, rsi
#define OR_R11_RBP or r11, rbp
#define OR_R11_RSP or r11, rsp
#define OR_R11_R8 or r11, r8
#define OR_R11_R9 or r11, r9
#define OR_R11_R10 or r11, r10
#define OR_R11_R11 or r11, r11
#define OR_R11_R12 or r11, r12
#define OR_R11_R13 or r11, r13
#define OR_R11_R14 or r11, r14
#define OR_R11_R15 or r11, r15

#define OR_R12_RAX or r12, rax
#define OR_R12_RBX or r12, rbx
#define OR_R12_RCX or r12, rcx
#define OR_R12_RDX or r12, rdx
#define OR_R12_RDI or r12, rdi
#define OR_R12_RSI or r12, rsi
#define OR_R12_RBP or r12, rbp
#define OR_R12_RSP or r12, rsp
#define OR_R12_R8 or r12, r8
#define OR_R12_R9 or r12, r9
#define OR_R12_R10 or r12, r10
#define OR_R12_R11 or r12, r11
#define OR_R12_R12 or r12, r12
#define OR_R12_R13 or r12, r13
#define OR_R12_R14 or r12, r14
#define OR_R12_R15 or r12, r15

#define OR_R13_RAX or r13, rax
#define OR_R13_RBX or r13, rbx
#define OR_R13_RCX or r13, rcx
#define OR_R13_RDX or r13, rdx
#define OR_R13_RDI or r13, rdi
#define OR_R13_RSI or r13, rsi
#define OR_R13_RBP or r13, rbp
#define OR_R13_RSP or r13, rsp
#define OR_R13_R8 or r13, r8
#define OR_R13_R9 or r13, r9
#define OR_R13_R10 or r13, r10
#define OR_R13_R11 or r13, r11
#define OR_R13_R12 or r13, r12
#define OR_R13_R13 or r13, r13
#define OR_R13_R14 or r13, r14
#define OR_R13_R15 or r13, r15

#define OR_R14_RAX or r14, rax
#define OR_R14_RBX or r14, rbx
#define OR_R14_RCX or r14, rcx
#define OR_R14_RDX or r14, rdx
#define OR_R14_RDI or r14, rdi
#define OR_R14_RSI or r14, rsi
#define OR_R14_RBP or r14, rbp
#define OR_R14_RSP or r14, rsp
#define OR_R14_R8 or r14, r8
#define OR_R14_R9 or r14, r9
#define OR_R14_R10 or r14, r10
#define OR_R14_R11 or r14, r11
#define OR_R14_R12 or r14, r12
#define OR_R14_R13 or r14, r13
#define OR_R14_R14 or r14, r14
#define OR_R14_R15 or r14, r15

#define OR_R15_RAX or r15, rax
#define OR_R15_RBX or r15, rbx
#define OR_R15_RCX or r15, rcx
#define OR_R15_RDX or r15, rdx
#define OR_R15_RDI or r15, rdi
#define OR_R15_RSI or r15, rsi
#define OR_R15_RBP or r15, rbp
#define OR_R15_RSP or r15, rsp
#define OR_R15_R8 or r15, r8
#define OR_R15_R9 or r15, r9
#define OR_R15_R10 or r15, r10
#define OR_R15_R11 or r15, r11
#define OR_R15_R12 or r15, r12
#define OR_R15_R13 or r15, r13
#define OR_R15_R14 or r15, r14
#define OR_R15_R15 or r15, r15

#define OR_RAX_(VALUE) or rax, VALUE
#define OR_RBX_(VALUE) or rbx, VALUE
#define OR_RCX_(VALUE) or rcx, VALUE
#define OR_RDX_(VALUE) or rdx, VALUE
#define OR_RDI_(VALUE) or rdi, VALUE
#define OR_RSI_(VALUE) or rsi, VALUE
#define OR_RBP_(VALUE) or rbp, VALUE
#define OR_RSP_(VALUE) or rsp, VALUE
#define OR_R8_(VALUE) or r8, VALUE
#define OR_R9_(VALUE) or r9, VALUE
#define OR_R10_(VALUE) or r10, VALUE
#define OR_R11_(VALUE) or r11, VALUE
#define OR_R12_(VALUE) or r12, VALUE
#define OR_R13_(VALUE) or r13, VALUE
#define OR_R14_(VALUE) or r14, VALUE
#define OR_R15_(VALUE) or r15, VALUE
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
