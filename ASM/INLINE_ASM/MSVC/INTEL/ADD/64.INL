#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************ [v] 64-BIT REGISTERS [v] ************************ */
#define ADD_RAX_RAX add rax, rax
#define ADD_RAX_RBX add rax, rbx
#define ADD_RAX_RCX add rax, rcx
#define ADD_RAX_RDX add rax, rdx
#define ADD_RAX_RDI add rax, rdi
#define ADD_RAX_RSI add rax, rsi
#define ADD_RAX_RBP add rax, rbp
#define ADD_RAX_RSP add rax, rsp
#define ADD_RAX_R8 add rax, r8
#define ADD_RAX_R9 add rax, r9
#define ADD_RAX_R10 add rax, r10
#define ADD_RAX_R11 add rax, r11
#define ADD_RAX_R12 add rax, r12
#define ADD_RAX_R13 add rax, r13
#define ADD_RAX_R14 add rax, r14
#define ADD_RAX_R15 add rax, r15

#define ADD_RBX_RAX add rbx, rax
#define ADD_RBX_RBX add rbx, rbx
#define ADD_RBX_RCX add rbx, rcx
#define ADD_RBX_RDX add rbx, rdx
#define ADD_RBX_RDI add rbx, rdi
#define ADD_RBX_RSI add rbx, rsi
#define ADD_RBX_RBP add rbx, rbp
#define ADD_RBX_RSP add rbx, rsp
#define ADD_RBX_R8 add rbx, r8
#define ADD_RBX_R9 add rbx, r9
#define ADD_RBX_R10 add rbx, r10
#define ADD_RBX_R11 add rbx, r11
#define ADD_RBX_R12 add rbx, r12
#define ADD_RBX_R13 add rbx, r13
#define ADD_RBX_R14 add rbx, r14
#define ADD_RBX_R15 add rbx, r15

#define ADD_RCX_RAX add rcx, rax
#define ADD_RCX_RBX add rcx, rbx
#define ADD_RCX_RCX add rcx, rcx
#define ADD_RCX_RDX add rcx, rdx
#define ADD_RCX_RDI add rcx, rdi
#define ADD_RCX_RSI add rcx, rsi
#define ADD_RCX_RBP add rcx, rbp
#define ADD_RCX_RSP add rcx, rsp
#define ADD_RCX_R8 add rcx, r8
#define ADD_RCX_R9 add rcx, r9
#define ADD_RCX_R10 add rcx, r10
#define ADD_RCX_R11 add rcx, r11
#define ADD_RCX_R12 add rcx, r12
#define ADD_RCX_R13 add rcx, r13
#define ADD_RCX_R14 add rcx, r14
#define ADD_RCX_R15 add rcx, r15

#define ADD_RDX_RAX add rdx, rax
#define ADD_RDX_RBX add rdx, rbx
#define ADD_RDX_RCX add rdx, rcx
#define ADD_RDX_RDX add rdx, rdx
#define ADD_RDX_RDI add rdx, rdi
#define ADD_RDX_RSI add rdx, rsi
#define ADD_RDX_RBP add rdx, rbp
#define ADD_RDX_RSP add rdx, rsp
#define ADD_RDX_R8 add rdx, r8
#define ADD_RDX_R9 add rdx, r9
#define ADD_RDX_R10 add rdx, r10
#define ADD_RDX_R11 add rdx, r11
#define ADD_RDX_R12 add rdx, r12
#define ADD_RDX_R13 add rdx, r13
#define ADD_RDX_R14 add rdx, r14
#define ADD_RDX_R15 add rdx, r15

#define ADD_RDI_RAX add rdi, rax
#define ADD_RDI_RBX add rdi, rbx
#define ADD_RDI_RCX add rdi, rcx
#define ADD_RDI_RDX add rdi, rdx
#define ADD_RDI_RDI add rdi, rdi
#define ADD_RDI_RSI add rdi, rsi
#define ADD_RDI_RBP add rdi, rbp
#define ADD_RDI_RSP add rdi, rsp
#define ADD_RDI_R8 add rdi, r8
#define ADD_RDI_R9 add rdi, r9
#define ADD_RDI_R10 add rdi, r10
#define ADD_RDI_R11 add rdi, r11
#define ADD_RDI_R12 add rdi, r12
#define ADD_RDI_R13 add rdi, r13
#define ADD_RDI_R14 add rdi, r14
#define ADD_RDI_R15 add rdi, r15

#define ADD_RSI_RAX add rsi, rax
#define ADD_RSI_RBX add rsi, rbx
#define ADD_RSI_RCX add rsi, rcx
#define ADD_RSI_RDX add rsi, rdx
#define ADD_RSI_RDI add rsi, rdi
#define ADD_RSI_RSI add rsi, rsi
#define ADD_RSI_RBP add rsi, rbp
#define ADD_RSI_RSP add rsi, rsp
#define ADD_RSI_R8 add rsi, r8
#define ADD_RSI_R9 add rsi, r9
#define ADD_RSI_R10 add rsi, r10
#define ADD_RSI_R11 add rsi, r11
#define ADD_RSI_R12 add rsi, r12
#define ADD_RSI_R13 add rsi, r13
#define ADD_RSI_R14 add rsi, r14
#define ADD_RSI_R15 add rsi, r15

#define ADD_RBP_RAX add rbp, rax
#define ADD_RBP_RBX add rbp, rbx
#define ADD_RBP_RCX add rbp, rcx
#define ADD_RBP_RDX add rbp, rdx
#define ADD_RBP_RDI add rbp, rdi
#define ADD_RBP_RSI add rbp, rsi
#define ADD_RBP_RBP add rbp, rbp
#define ADD_RBP_RSP add rbp, rsp
#define ADD_RBP_R8 add rbp, r8
#define ADD_RBP_R9 add rbp, r9
#define ADD_RBP_R10 add rbp, r10
#define ADD_RBP_R11 add rbp, r11
#define ADD_RBP_R12 add rbp, r12
#define ADD_RBP_R13 add rbp, r13
#define ADD_RBP_R14 add rbp, r14
#define ADD_RBP_R15 add rbp, r15

#define ADD_RSP_RAX add rsp, rax
#define ADD_RSP_RBX add rsp, rbx
#define ADD_RSP_RCX add rsp, rcx
#define ADD_RSP_RDX add rsp, rdx
#define ADD_RSP_RDI add rsp, rdi
#define ADD_RSP_RSI add rsp, rsi
#define ADD_RSP_RBP add rsp, rbp
#define ADD_RSP_RSP add rsp, rsp
#define ADD_RSP_R8 add rsp, r8
#define ADD_RSP_R9 add rsp, r9
#define ADD_RSP_R10 add rsp, r10
#define ADD_RSP_R11 add rsp, r11
#define ADD_RSP_R12 add rsp, r12
#define ADD_RSP_R13 add rsp, r13
#define ADD_RSP_R14 add rsp, r14
#define ADD_RSP_R15 add rsp, r15

#define ADD_R8_RAX add r8, rax
#define ADD_R8_RBX add r8, rbx
#define ADD_R8_RCX add r8, rcx
#define ADD_R8_RDX add r8, rdx
#define ADD_R8_RDI add r8, rdi
#define ADD_R8_RSI add r8, rsi
#define ADD_R8_RBP add r8, rbp
#define ADD_R8_RSP add r8, rsp
#define ADD_R8_R8 add r8, r8
#define ADD_R8_R9 add r8, r9
#define ADD_R8_R10 add r8, r10
#define ADD_R8_R11 add r8, r11
#define ADD_R8_R12 add r8, r12
#define ADD_R8_R13 add r8, r13
#define ADD_R8_R14 add r8, r14
#define ADD_R8_R15 add r8, r15

#define ADD_R9_RAX add r9, rax
#define ADD_R9_RBX add r9, rbx
#define ADD_R9_RCX add r9, rcx
#define ADD_R9_RDX add r9, rdx
#define ADD_R9_RDI add r9, rdi
#define ADD_R9_RSI add r9, rsi
#define ADD_R9_RBP add r9, rbp
#define ADD_R9_RSP add r9, rsp
#define ADD_R9_R8 add r9, r8
#define ADD_R9_R9 add r9, r9
#define ADD_R9_R10 add r9, r10
#define ADD_R9_R11 add r9, r11
#define ADD_R9_R12 add r9, r12
#define ADD_R9_R13 add r9, r13
#define ADD_R9_R14 add r9, r14
#define ADD_R9_R15 add r9, r15

#define ADD_R10_RAX add r10, rax
#define ADD_R10_RBX add r10, rbx
#define ADD_R10_RCX add r10, rcx
#define ADD_R10_RDX add r10, rdx
#define ADD_R10_RDI add r10, rdi
#define ADD_R10_RSI add r10, rsi
#define ADD_R10_RBP add r10, rbp
#define ADD_R10_RSP add r10, rsp
#define ADD_R10_R8 add r10, r8
#define ADD_R10_R9 add r10, r9
#define ADD_R10_R10 add r10, r10
#define ADD_R10_R11 add r10, r11
#define ADD_R10_R12 add r10, r12
#define ADD_R10_R13 add r10, r13
#define ADD_R10_R14 add r10, r14
#define ADD_R10_R15 add r10, r15

#define ADD_R11_RAX add r11, rax
#define ADD_R11_RBX add r11, rbx
#define ADD_R11_RCX add r11, rcx
#define ADD_R11_RDX add r11, rdx
#define ADD_R11_RDI add r11, rdi
#define ADD_R11_RSI add r11, rsi
#define ADD_R11_RBP add r11, rbp
#define ADD_R11_RSP add r11, rsp
#define ADD_R11_R8 add r11, r8
#define ADD_R11_R9 add r11, r9
#define ADD_R11_R10 add r11, r10
#define ADD_R11_R11 add r11, r11
#define ADD_R11_R12 add r11, r12
#define ADD_R11_R13 add r11, r13
#define ADD_R11_R14 add r11, r14
#define ADD_R11_R15 add r11, r15

#define ADD_R12_RAX add r12, rax
#define ADD_R12_RBX add r12, rbx
#define ADD_R12_RCX add r12, rcx
#define ADD_R12_RDX add r12, rdx
#define ADD_R12_RDI add r12, rdi
#define ADD_R12_RSI add r12, rsi
#define ADD_R12_RBP add r12, rbp
#define ADD_R12_RSP add r12, rsp
#define ADD_R12_R8 add r12, r8
#define ADD_R12_R9 add r12, r9
#define ADD_R12_R10 add r12, r10
#define ADD_R12_R11 add r12, r11
#define ADD_R12_R12 add r12, r12
#define ADD_R12_R13 add r12, r13
#define ADD_R12_R14 add r12, r14
#define ADD_R12_R15 add r12, r15

#define ADD_R13_RAX add r13, rax
#define ADD_R13_RBX add r13, rbx
#define ADD_R13_RCX add r13, rcx
#define ADD_R13_RDX add r13, rdx
#define ADD_R13_RDI add r13, rdi
#define ADD_R13_RSI add r13, rsi
#define ADD_R13_RBP add r13, rbp
#define ADD_R13_RSP add r13, rsp
#define ADD_R13_R8 add r13, r8
#define ADD_R13_R9 add r13, r9
#define ADD_R13_R10 add r13, r10
#define ADD_R13_R11 add r13, r11
#define ADD_R13_R12 add r13, r12
#define ADD_R13_R13 add r13, r13
#define ADD_R13_R14 add r13, r14
#define ADD_R13_R15 add r13, r15

#define ADD_R14_RAX add r14, rax
#define ADD_R14_RBX add r14, rbx
#define ADD_R14_RCX add r14, rcx
#define ADD_R14_RDX add r14, rdx
#define ADD_R14_RDI add r14, rdi
#define ADD_R14_RSI add r14, rsi
#define ADD_R14_RBP add r14, rbp
#define ADD_R14_RSP add r14, rsp
#define ADD_R14_R8 add r14, r8
#define ADD_R14_R9 add r14, r9
#define ADD_R14_R10 add r14, r10
#define ADD_R14_R11 add r14, r11
#define ADD_R14_R12 add r14, r12
#define ADD_R14_R13 add r14, r13
#define ADD_R14_R14 add r14, r14
#define ADD_R14_R15 add r14, r15

#define ADD_R15_RAX add r15, rax
#define ADD_R15_RBX add r15, rbx
#define ADD_R15_RCX add r15, rcx
#define ADD_R15_RDX add r15, rdx
#define ADD_R15_RDI add r15, rdi
#define ADD_R15_RSI add r15, rsi
#define ADD_R15_RBP add r15, rbp
#define ADD_R15_RSP add r15, rsp
#define ADD_R15_R8 add r15, r8
#define ADD_R15_R9 add r15, r9
#define ADD_R15_R10 add r15, r10
#define ADD_R15_R11 add r15, r11
#define ADD_R15_R12 add r15, r12
#define ADD_R15_R13 add r15, r13
#define ADD_R15_R14 add r15, r14
#define ADD_R15_R15 add r15, r15

#define ADD_RAX_(VALUE) add rax, VALUE
#define ADD_RBX_(VALUE) add rbx, VALUE
#define ADD_RCX_(VALUE) add rcx, VALUE
#define ADD_RDX_(VALUE) add rdx, VALUE
#define ADD_RDI_(VALUE) add rdi, VALUE
#define ADD_RSI_(VALUE) add rsi, VALUE
#define ADD_RBP_(VALUE) add rbp, VALUE
#define ADD_RSP_(VALUE) add rsp, VALUE
#define ADD_R8_(VALUE) add r8, VALUE
#define ADD_R9_(VALUE) add r9, VALUE
#define ADD_R10_(VALUE) add r10, VALUE
#define ADD_R11_(VALUE) add r11, VALUE
#define ADD_R12_(VALUE) add r12, VALUE
#define ADD_R13_(VALUE) add r13, VALUE
#define ADD_R14_(VALUE) add r14, VALUE
#define ADD_R15_(VALUE) add r15, VALUE
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
