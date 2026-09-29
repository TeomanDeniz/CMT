#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************ [v] 64-BIT REGISTERS [v] ************************ */
#define AND_RAX_RAX and rax, rax
#define AND_RAX_RBX and rax, rbx
#define AND_RAX_RCX and rax, rcx
#define AND_RAX_RDX and rax, rdx
#define AND_RAX_RDI and rax, rdi
#define AND_RAX_RSI and rax, rsi
#define AND_RAX_RBP and rax, rbp
#define AND_RAX_RSP and rax, rsp
#define AND_RAX_R8 and rax, r8
#define AND_RAX_R9 and rax, r9
#define AND_RAX_R10 and rax, r10
#define AND_RAX_R11 and rax, r11
#define AND_RAX_R12 and rax, r12
#define AND_RAX_R13 and rax, r13
#define AND_RAX_R14 and rax, r14
#define AND_RAX_R15 and rax, r15

#define AND_RBX_RAX and rbx, rax
#define AND_RBX_RBX and rbx, rbx
#define AND_RBX_RCX and rbx, rcx
#define AND_RBX_RDX and rbx, rdx
#define AND_RBX_RDI and rbx, rdi
#define AND_RBX_RSI and rbx, rsi
#define AND_RBX_RBP and rbx, rbp
#define AND_RBX_RSP and rbx, rsp
#define AND_RBX_R8 and rbx, r8
#define AND_RBX_R9 and rbx, r9
#define AND_RBX_R10 and rbx, r10
#define AND_RBX_R11 and rbx, r11
#define AND_RBX_R12 and rbx, r12
#define AND_RBX_R13 and rbx, r13
#define AND_RBX_R14 and rbx, r14
#define AND_RBX_R15 and rbx, r15

#define AND_RCX_RAX and rcx, rax
#define AND_RCX_RBX and rcx, rbx
#define AND_RCX_RCX and rcx, rcx
#define AND_RCX_RDX and rcx, rdx
#define AND_RCX_RDI and rcx, rdi
#define AND_RCX_RSI and rcx, rsi
#define AND_RCX_RBP and rcx, rbp
#define AND_RCX_RSP and rcx, rsp
#define AND_RCX_R8 and rcx, r8
#define AND_RCX_R9 and rcx, r9
#define AND_RCX_R10 and rcx, r10
#define AND_RCX_R11 and rcx, r11
#define AND_RCX_R12 and rcx, r12
#define AND_RCX_R13 and rcx, r13
#define AND_RCX_R14 and rcx, r14
#define AND_RCX_R15 and rcx, r15

#define AND_RDX_RAX and rdx, rax
#define AND_RDX_RBX and rdx, rbx
#define AND_RDX_RCX and rdx, rcx
#define AND_RDX_RDX and rdx, rdx
#define AND_RDX_RDI and rdx, rdi
#define AND_RDX_RSI and rdx, rsi
#define AND_RDX_RBP and rdx, rbp
#define AND_RDX_RSP and rdx, rsp
#define AND_RDX_R8 and rdx, r8
#define AND_RDX_R9 and rdx, r9
#define AND_RDX_R10 and rdx, r10
#define AND_RDX_R11 and rdx, r11
#define AND_RDX_R12 and rdx, r12
#define AND_RDX_R13 and rdx, r13
#define AND_RDX_R14 and rdx, r14
#define AND_RDX_R15 and rdx, r15

#define AND_RDI_RAX and rdi, rax
#define AND_RDI_RBX and rdi, rbx
#define AND_RDI_RCX and rdi, rcx
#define AND_RDI_RDX and rdi, rdx
#define AND_RDI_RDI and rdi, rdi
#define AND_RDI_RSI and rdi, rsi
#define AND_RDI_RBP and rdi, rbp
#define AND_RDI_RSP and rdi, rsp
#define AND_RDI_R8 and rdi, r8
#define AND_RDI_R9 and rdi, r9
#define AND_RDI_R10 and rdi, r10
#define AND_RDI_R11 and rdi, r11
#define AND_RDI_R12 and rdi, r12
#define AND_RDI_R13 and rdi, r13
#define AND_RDI_R14 and rdi, r14
#define AND_RDI_R15 and rdi, r15

#define AND_RSI_RAX and rsi, rax
#define AND_RSI_RBX and rsi, rbx
#define AND_RSI_RCX and rsi, rcx
#define AND_RSI_RDX and rsi, rdx
#define AND_RSI_RDI and rsi, rdi
#define AND_RSI_RSI and rsi, rsi
#define AND_RSI_RBP and rsi, rbp
#define AND_RSI_RSP and rsi, rsp
#define AND_RSI_R8 and rsi, r8
#define AND_RSI_R9 and rsi, r9
#define AND_RSI_R10 and rsi, r10
#define AND_RSI_R11 and rsi, r11
#define AND_RSI_R12 and rsi, r12
#define AND_RSI_R13 and rsi, r13
#define AND_RSI_R14 and rsi, r14
#define AND_RSI_R15 and rsi, r15

#define AND_RBP_RAX and rbp, rax
#define AND_RBP_RBX and rbp, rbx
#define AND_RBP_RCX and rbp, rcx
#define AND_RBP_RDX and rbp, rdx
#define AND_RBP_RDI and rbp, rdi
#define AND_RBP_RSI and rbp, rsi
#define AND_RBP_RBP and rbp, rbp
#define AND_RBP_RSP and rbp, rsp
#define AND_RBP_R8 and rbp, r8
#define AND_RBP_R9 and rbp, r9
#define AND_RBP_R10 and rbp, r10
#define AND_RBP_R11 and rbp, r11
#define AND_RBP_R12 and rbp, r12
#define AND_RBP_R13 and rbp, r13
#define AND_RBP_R14 and rbp, r14
#define AND_RBP_R15 and rbp, r15

#define AND_RSP_RAX and rsp, rax
#define AND_RSP_RBX and rsp, rbx
#define AND_RSP_RCX and rsp, rcx
#define AND_RSP_RDX and rsp, rdx
#define AND_RSP_RDI and rsp, rdi
#define AND_RSP_RSI and rsp, rsi
#define AND_RSP_RBP and rsp, rbp
#define AND_RSP_RSP and rsp, rsp
#define AND_RSP_R8 and rsp, r8
#define AND_RSP_R9 and rsp, r9
#define AND_RSP_R10 and rsp, r10
#define AND_RSP_R11 and rsp, r11
#define AND_RSP_R12 and rsp, r12
#define AND_RSP_R13 and rsp, r13
#define AND_RSP_R14 and rsp, r14
#define AND_RSP_R15 and rsp, r15

#define AND_R8_RAX and r8, rax
#define AND_R8_RBX and r8, rbx
#define AND_R8_RCX and r8, rcx
#define AND_R8_RDX and r8, rdx
#define AND_R8_RDI and r8, rdi
#define AND_R8_RSI and r8, rsi
#define AND_R8_RBP and r8, rbp
#define AND_R8_RSP and r8, rsp
#define AND_R8_R8 and r8, r8
#define AND_R8_R9 and r8, r9
#define AND_R8_R10 and r8, r10
#define AND_R8_R11 and r8, r11
#define AND_R8_R12 and r8, r12
#define AND_R8_R13 and r8, r13
#define AND_R8_R14 and r8, r14
#define AND_R8_R15 and r8, r15

#define AND_R9_RAX and r9, rax
#define AND_R9_RBX and r9, rbx
#define AND_R9_RCX and r9, rcx
#define AND_R9_RDX and r9, rdx
#define AND_R9_RDI and r9, rdi
#define AND_R9_RSI and r9, rsi
#define AND_R9_RBP and r9, rbp
#define AND_R9_RSP and r9, rsp
#define AND_R9_R8 and r9, r8
#define AND_R9_R9 and r9, r9
#define AND_R9_R10 and r9, r10
#define AND_R9_R11 and r9, r11
#define AND_R9_R12 and r9, r12
#define AND_R9_R13 and r9, r13
#define AND_R9_R14 and r9, r14
#define AND_R9_R15 and r9, r15

#define AND_R10_RAX and r10, rax
#define AND_R10_RBX and r10, rbx
#define AND_R10_RCX and r10, rcx
#define AND_R10_RDX and r10, rdx
#define AND_R10_RDI and r10, rdi
#define AND_R10_RSI and r10, rsi
#define AND_R10_RBP and r10, rbp
#define AND_R10_RSP and r10, rsp
#define AND_R10_R8 and r10, r8
#define AND_R10_R9 and r10, r9
#define AND_R10_R10 and r10, r10
#define AND_R10_R11 and r10, r11
#define AND_R10_R12 and r10, r12
#define AND_R10_R13 and r10, r13
#define AND_R10_R14 and r10, r14
#define AND_R10_R15 and r10, r15

#define AND_R11_RAX and r11, rax
#define AND_R11_RBX and r11, rbx
#define AND_R11_RCX and r11, rcx
#define AND_R11_RDX and r11, rdx
#define AND_R11_RDI and r11, rdi
#define AND_R11_RSI and r11, rsi
#define AND_R11_RBP and r11, rbp
#define AND_R11_RSP and r11, rsp
#define AND_R11_R8 and r11, r8
#define AND_R11_R9 and r11, r9
#define AND_R11_R10 and r11, r10
#define AND_R11_R11 and r11, r11
#define AND_R11_R12 and r11, r12
#define AND_R11_R13 and r11, r13
#define AND_R11_R14 and r11, r14
#define AND_R11_R15 and r11, r15

#define AND_R12_RAX and r12, rax
#define AND_R12_RBX and r12, rbx
#define AND_R12_RCX and r12, rcx
#define AND_R12_RDX and r12, rdx
#define AND_R12_RDI and r12, rdi
#define AND_R12_RSI and r12, rsi
#define AND_R12_RBP and r12, rbp
#define AND_R12_RSP and r12, rsp
#define AND_R12_R8 and r12, r8
#define AND_R12_R9 and r12, r9
#define AND_R12_R10 and r12, r10
#define AND_R12_R11 and r12, r11
#define AND_R12_R12 and r12, r12
#define AND_R12_R13 and r12, r13
#define AND_R12_R14 and r12, r14
#define AND_R12_R15 and r12, r15

#define AND_R13_RAX and r13, rax
#define AND_R13_RBX and r13, rbx
#define AND_R13_RCX and r13, rcx
#define AND_R13_RDX and r13, rdx
#define AND_R13_RDI and r13, rdi
#define AND_R13_RSI and r13, rsi
#define AND_R13_RBP and r13, rbp
#define AND_R13_RSP and r13, rsp
#define AND_R13_R8 and r13, r8
#define AND_R13_R9 and r13, r9
#define AND_R13_R10 and r13, r10
#define AND_R13_R11 and r13, r11
#define AND_R13_R12 and r13, r12
#define AND_R13_R13 and r13, r13
#define AND_R13_R14 and r13, r14
#define AND_R13_R15 and r13, r15

#define AND_R14_RAX and r14, rax
#define AND_R14_RBX and r14, rbx
#define AND_R14_RCX and r14, rcx
#define AND_R14_RDX and r14, rdx
#define AND_R14_RDI and r14, rdi
#define AND_R14_RSI and r14, rsi
#define AND_R14_RBP and r14, rbp
#define AND_R14_RSP and r14, rsp
#define AND_R14_R8 and r14, r8
#define AND_R14_R9 and r14, r9
#define AND_R14_R10 and r14, r10
#define AND_R14_R11 and r14, r11
#define AND_R14_R12 and r14, r12
#define AND_R14_R13 and r14, r13
#define AND_R14_R14 and r14, r14
#define AND_R14_R15 and r14, r15

#define AND_R15_RAX and r15, rax
#define AND_R15_RBX and r15, rbx
#define AND_R15_RCX and r15, rcx
#define AND_R15_RDX and r15, rdx
#define AND_R15_RDI and r15, rdi
#define AND_R15_RSI and r15, rsi
#define AND_R15_RBP and r15, rbp
#define AND_R15_RSP and r15, rsp
#define AND_R15_R8 and r15, r8
#define AND_R15_R9 and r15, r9
#define AND_R15_R10 and r15, r10
#define AND_R15_R11 and r15, r11
#define AND_R15_R12 and r15, r12
#define AND_R15_R13 and r15, r13
#define AND_R15_R14 and r15, r14
#define AND_R15_R15 and r15, r15

#define AND_RAX_(VALUE) and rax, VALUE
#define AND_RBX_(VALUE) and rbx, VALUE
#define AND_RCX_(VALUE) and rcx, VALUE
#define AND_RDX_(VALUE) and rdx, VALUE
#define AND_RDI_(VALUE) and rdi, VALUE
#define AND_RSI_(VALUE) and rsi, VALUE
#define AND_RBP_(VALUE) and rbp, VALUE
#define AND_RSP_(VALUE) and rsp, VALUE
#define AND_R8_(VALUE) and r8, VALUE
#define AND_R9_(VALUE) and r9, VALUE
#define AND_R10_(VALUE) and r10, VALUE
#define AND_R11_(VALUE) and r11, VALUE
#define AND_R12_(VALUE) and r12, VALUE
#define AND_R13_(VALUE) and r13, VALUE
#define AND_R14_(VALUE) and r14, VALUE
#define AND_R15_(VALUE) and r15, VALUE
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
