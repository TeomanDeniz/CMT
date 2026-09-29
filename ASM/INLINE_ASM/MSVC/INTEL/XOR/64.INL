#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************ [v] 64-BIT REGISTERS [v] ************************ */
#define XOR_RAX_RAX xor rax, rax
#define XOR_RAX_RBX xor rax, rbx
#define XOR_RAX_RCX xor rax, rcx
#define XOR_RAX_RDX xor rax, rdx
#define XOR_RAX_RDI xor rax, rdi
#define XOR_RAX_RSI xor rax, rsi
#define XOR_RAX_RBP xor rax, rbp
#define XOR_RAX_RSP xor rax, rsp
#define XOR_RAX_R8 xor rax, r8
#define XOR_RAX_R9 xor rax, r9
#define XOR_RAX_R10 xor rax, r10
#define XOR_RAX_R11 xor rax, r11
#define XOR_RAX_R12 xor rax, r12
#define XOR_RAX_R13 xor rax, r13
#define XOR_RAX_R14 xor rax, r14
#define XOR_RAX_R15 xor rax, r15

#define XOR_RBX_RAX xor rbx, rax
#define XOR_RBX_RBX xor rbx, rbx
#define XOR_RBX_RCX xor rbx, rcx
#define XOR_RBX_RDX xor rbx, rdx
#define XOR_RBX_RDI xor rbx, rdi
#define XOR_RBX_RSI xor rbx, rsi
#define XOR_RBX_RBP xor rbx, rbp
#define XOR_RBX_RSP xor rbx, rsp
#define XOR_RBX_R8 xor rbx, r8
#define XOR_RBX_R9 xor rbx, r9
#define XOR_RBX_R10 xor rbx, r10
#define XOR_RBX_R11 xor rbx, r11
#define XOR_RBX_R12 xor rbx, r12
#define XOR_RBX_R13 xor rbx, r13
#define XOR_RBX_R14 xor rbx, r14
#define XOR_RBX_R15 xor rbx, r15

#define XOR_RCX_RAX xor rcx, rax
#define XOR_RCX_RBX xor rcx, rbx
#define XOR_RCX_RCX xor rcx, rcx
#define XOR_RCX_RDX xor rcx, rdx
#define XOR_RCX_RDI xor rcx, rdi
#define XOR_RCX_RSI xor rcx, rsi
#define XOR_RCX_RBP xor rcx, rbp
#define XOR_RCX_RSP xor rcx, rsp
#define XOR_RCX_R8 xor rcx, r8
#define XOR_RCX_R9 xor rcx, r9
#define XOR_RCX_R10 xor rcx, r10
#define XOR_RCX_R11 xor rcx, r11
#define XOR_RCX_R12 xor rcx, r12
#define XOR_RCX_R13 xor rcx, r13
#define XOR_RCX_R14 xor rcx, r14
#define XOR_RCX_R15 xor rcx, r15

#define XOR_RDX_RAX xor rdx, rax
#define XOR_RDX_RBX xor rdx, rbx
#define XOR_RDX_RCX xor rdx, rcx
#define XOR_RDX_RDX xor rdx, rdx
#define XOR_RDX_RDI xor rdx, rdi
#define XOR_RDX_RSI xor rdx, rsi
#define XOR_RDX_RBP xor rdx, rbp
#define XOR_RDX_RSP xor rdx, rsp
#define XOR_RDX_R8 xor rdx, r8
#define XOR_RDX_R9 xor rdx, r9
#define XOR_RDX_R10 xor rdx, r10
#define XOR_RDX_R11 xor rdx, r11
#define XOR_RDX_R12 xor rdx, r12
#define XOR_RDX_R13 xor rdx, r13
#define XOR_RDX_R14 xor rdx, r14
#define XOR_RDX_R15 xor rdx, r15

#define XOR_RDI_RAX xor rdi, rax
#define XOR_RDI_RBX xor rdi, rbx
#define XOR_RDI_RCX xor rdi, rcx
#define XOR_RDI_RDX xor rdi, rdx
#define XOR_RDI_RDI xor rdi, rdi
#define XOR_RDI_RSI xor rdi, rsi
#define XOR_RDI_RBP xor rdi, rbp
#define XOR_RDI_RSP xor rdi, rsp
#define XOR_RDI_R8 xor rdi, r8
#define XOR_RDI_R9 xor rdi, r9
#define XOR_RDI_R10 xor rdi, r10
#define XOR_RDI_R11 xor rdi, r11
#define XOR_RDI_R12 xor rdi, r12
#define XOR_RDI_R13 xor rdi, r13
#define XOR_RDI_R14 xor rdi, r14
#define XOR_RDI_R15 xor rdi, r15

#define XOR_RSI_RAX xor rsi, rax
#define XOR_RSI_RBX xor rsi, rbx
#define XOR_RSI_RCX xor rsi, rcx
#define XOR_RSI_RDX xor rsi, rdx
#define XOR_RSI_RDI xor rsi, rdi
#define XOR_RSI_RSI xor rsi, rsi
#define XOR_RSI_RBP xor rsi, rbp
#define XOR_RSI_RSP xor rsi, rsp
#define XOR_RSI_R8 xor rsi, r8
#define XOR_RSI_R9 xor rsi, r9
#define XOR_RSI_R10 xor rsi, r10
#define XOR_RSI_R11 xor rsi, r11
#define XOR_RSI_R12 xor rsi, r12
#define XOR_RSI_R13 xor rsi, r13
#define XOR_RSI_R14 xor rsi, r14
#define XOR_RSI_R15 xor rsi, r15

#define XOR_RBP_RAX xor rbp, rax
#define XOR_RBP_RBX xor rbp, rbx
#define XOR_RBP_RCX xor rbp, rcx
#define XOR_RBP_RDX xor rbp, rdx
#define XOR_RBP_RDI xor rbp, rdi
#define XOR_RBP_RSI xor rbp, rsi
#define XOR_RBP_RBP xor rbp, rbp
#define XOR_RBP_RSP xor rbp, rsp
#define XOR_RBP_R8 xor rbp, r8
#define XOR_RBP_R9 xor rbp, r9
#define XOR_RBP_R10 xor rbp, r10
#define XOR_RBP_R11 xor rbp, r11
#define XOR_RBP_R12 xor rbp, r12
#define XOR_RBP_R13 xor rbp, r13
#define XOR_RBP_R14 xor rbp, r14
#define XOR_RBP_R15 xor rbp, r15

#define XOR_RSP_RAX xor rsp, rax
#define XOR_RSP_RBX xor rsp, rbx
#define XOR_RSP_RCX xor rsp, rcx
#define XOR_RSP_RDX xor rsp, rdx
#define XOR_RSP_RDI xor rsp, rdi
#define XOR_RSP_RSI xor rsp, rsi
#define XOR_RSP_RBP xor rsp, rbp
#define XOR_RSP_RSP xor rsp, rsp
#define XOR_RSP_R8 xor rsp, r8
#define XOR_RSP_R9 xor rsp, r9
#define XOR_RSP_R10 xor rsp, r10
#define XOR_RSP_R11 xor rsp, r11
#define XOR_RSP_R12 xor rsp, r12
#define XOR_RSP_R13 xor rsp, r13
#define XOR_RSP_R14 xor rsp, r14
#define XOR_RSP_R15 xor rsp, r15

#define XOR_R8_RAX xor r8, rax
#define XOR_R8_RBX xor r8, rbx
#define XOR_R8_RCX xor r8, rcx
#define XOR_R8_RDX xor r8, rdx
#define XOR_R8_RDI xor r8, rdi
#define XOR_R8_RSI xor r8, rsi
#define XOR_R8_RBP xor r8, rbp
#define XOR_R8_RSP xor r8, rsp
#define XOR_R8_R8 xor r8, r8
#define XOR_R8_R9 xor r8, r9
#define XOR_R8_R10 xor r8, r10
#define XOR_R8_R11 xor r8, r11
#define XOR_R8_R12 xor r8, r12
#define XOR_R8_R13 xor r8, r13
#define XOR_R8_R14 xor r8, r14
#define XOR_R8_R15 xor r8, r15

#define XOR_R9_RAX xor r9, rax
#define XOR_R9_RBX xor r9, rbx
#define XOR_R9_RCX xor r9, rcx
#define XOR_R9_RDX xor r9, rdx
#define XOR_R9_RDI xor r9, rdi
#define XOR_R9_RSI xor r9, rsi
#define XOR_R9_RBP xor r9, rbp
#define XOR_R9_RSP xor r9, rsp
#define XOR_R9_R8 xor r9, r8
#define XOR_R9_R9 xor r9, r9
#define XOR_R9_R10 xor r9, r10
#define XOR_R9_R11 xor r9, r11
#define XOR_R9_R12 xor r9, r12
#define XOR_R9_R13 xor r9, r13
#define XOR_R9_R14 xor r9, r14
#define XOR_R9_R15 xor r9, r15

#define XOR_R10_RAX xor r10, rax
#define XOR_R10_RBX xor r10, rbx
#define XOR_R10_RCX xor r10, rcx
#define XOR_R10_RDX xor r10, rdx
#define XOR_R10_RDI xor r10, rdi
#define XOR_R10_RSI xor r10, rsi
#define XOR_R10_RBP xor r10, rbp
#define XOR_R10_RSP xor r10, rsp
#define XOR_R10_R8 xor r10, r8
#define XOR_R10_R9 xor r10, r9
#define XOR_R10_R10 xor r10, r10
#define XOR_R10_R11 xor r10, r11
#define XOR_R10_R12 xor r10, r12
#define XOR_R10_R13 xor r10, r13
#define XOR_R10_R14 xor r10, r14
#define XOR_R10_R15 xor r10, r15

#define XOR_R11_RAX xor r11, rax
#define XOR_R11_RBX xor r11, rbx
#define XOR_R11_RCX xor r11, rcx
#define XOR_R11_RDX xor r11, rdx
#define XOR_R11_RDI xor r11, rdi
#define XOR_R11_RSI xor r11, rsi
#define XOR_R11_RBP xor r11, rbp
#define XOR_R11_RSP xor r11, rsp
#define XOR_R11_R8 xor r11, r8
#define XOR_R11_R9 xor r11, r9
#define XOR_R11_R10 xor r11, r10
#define XOR_R11_R11 xor r11, r11
#define XOR_R11_R12 xor r11, r12
#define XOR_R11_R13 xor r11, r13
#define XOR_R11_R14 xor r11, r14
#define XOR_R11_R15 xor r11, r15

#define XOR_R12_RAX xor r12, rax
#define XOR_R12_RBX xor r12, rbx
#define XOR_R12_RCX xor r12, rcx
#define XOR_R12_RDX xor r12, rdx
#define XOR_R12_RDI xor r12, rdi
#define XOR_R12_RSI xor r12, rsi
#define XOR_R12_RBP xor r12, rbp
#define XOR_R12_RSP xor r12, rsp
#define XOR_R12_R8 xor r12, r8
#define XOR_R12_R9 xor r12, r9
#define XOR_R12_R10 xor r12, r10
#define XOR_R12_R11 xor r12, r11
#define XOR_R12_R12 xor r12, r12
#define XOR_R12_R13 xor r12, r13
#define XOR_R12_R14 xor r12, r14
#define XOR_R12_R15 xor r12, r15

#define XOR_R13_RAX xor r13, rax
#define XOR_R13_RBX xor r13, rbx
#define XOR_R13_RCX xor r13, rcx
#define XOR_R13_RDX xor r13, rdx
#define XOR_R13_RDI xor r13, rdi
#define XOR_R13_RSI xor r13, rsi
#define XOR_R13_RBP xor r13, rbp
#define XOR_R13_RSP xor r13, rsp
#define XOR_R13_R8 xor r13, r8
#define XOR_R13_R9 xor r13, r9
#define XOR_R13_R10 xor r13, r10
#define XOR_R13_R11 xor r13, r11
#define XOR_R13_R12 xor r13, r12
#define XOR_R13_R13 xor r13, r13
#define XOR_R13_R14 xor r13, r14
#define XOR_R13_R15 xor r13, r15

#define XOR_R14_RAX xor r14, rax
#define XOR_R14_RBX xor r14, rbx
#define XOR_R14_RCX xor r14, rcx
#define XOR_R14_RDX xor r14, rdx
#define XOR_R14_RDI xor r14, rdi
#define XOR_R14_RSI xor r14, rsi
#define XOR_R14_RBP xor r14, rbp
#define XOR_R14_RSP xor r14, rsp
#define XOR_R14_R8 xor r14, r8
#define XOR_R14_R9 xor r14, r9
#define XOR_R14_R10 xor r14, r10
#define XOR_R14_R11 xor r14, r11
#define XOR_R14_R12 xor r14, r12
#define XOR_R14_R13 xor r14, r13
#define XOR_R14_R14 xor r14, r14
#define XOR_R14_R15 xor r14, r15

#define XOR_R15_RAX xor r15, rax
#define XOR_R15_RBX xor r15, rbx
#define XOR_R15_RCX xor r15, rcx
#define XOR_R15_RDX xor r15, rdx
#define XOR_R15_RDI xor r15, rdi
#define XOR_R15_RSI xor r15, rsi
#define XOR_R15_RBP xor r15, rbp
#define XOR_R15_RSP xor r15, rsp
#define XOR_R15_R8 xor r15, r8
#define XOR_R15_R9 xor r15, r9
#define XOR_R15_R10 xor r15, r10
#define XOR_R15_R11 xor r15, r11
#define XOR_R15_R12 xor r15, r12
#define XOR_R15_R13 xor r15, r13
#define XOR_R15_R14 xor r15, r14
#define XOR_R15_R15 xor r15, r15

#define XOR_RAX_(VALUE) xor rax, VALUE
#define XOR_RBX_(VALUE) xor rbx, VALUE
#define XOR_RCX_(VALUE) xor rcx, VALUE
#define XOR_RDX_(VALUE) xor rdx, VALUE
#define XOR_RDI_(VALUE) xor rdi, VALUE
#define XOR_RSI_(VALUE) xor rsi, VALUE
#define XOR_RBP_(VALUE) xor rbp, VALUE
#define XOR_RSP_(VALUE) xor rsp, VALUE
#define XOR_R8_(VALUE) xor r8, VALUE
#define XOR_R9_(VALUE) xor r9, VALUE
#define XOR_R10_(VALUE) xor r10, VALUE
#define XOR_R11_(VALUE) xor r11, VALUE
#define XOR_R12_(VALUE) xor r12, VALUE
#define XOR_R13_(VALUE) xor r13, VALUE
#define XOR_R14_(VALUE) xor r14, VALUE
#define XOR_R15_(VALUE) xor r15, VALUE
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
