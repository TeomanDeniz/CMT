#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************ [v] 64-BIT REGISTERS [v] ************************ */
#define TEST_RAX_RAX test rax, rax
#define TEST_RAX_RBX test rax, rbx
#define TEST_RAX_RCX test rax, rcx
#define TEST_RAX_RDX test rax, rdx
#define TEST_RAX_RDI test rax, rdi
#define TEST_RAX_RSI test rax, rsi
#define TEST_RAX_RBP test rax, rbp
#define TEST_RAX_RSP test rax, rsp
#define TEST_RAX_R8 test rax, r8
#define TEST_RAX_R9 test rax, r9
#define TEST_RAX_R10 test rax, r10
#define TEST_RAX_R11 test rax, r11
#define TEST_RAX_R12 test rax, r12
#define TEST_RAX_R13 test rax, r13
#define TEST_RAX_R14 test rax, r14
#define TEST_RAX_R15 test rax, r15

#define TEST_RBX_RAX test rbx, rax
#define TEST_RBX_RBX test rbx, rbx
#define TEST_RBX_RCX test rbx, rcx
#define TEST_RBX_RDX test rbx, rdx
#define TEST_RBX_RDI test rbx, rdi
#define TEST_RBX_RSI test rbx, rsi
#define TEST_RBX_RBP test rbx, rbp
#define TEST_RBX_RSP test rbx, rsp
#define TEST_RBX_R8 test rbx, r8
#define TEST_RBX_R9 test rbx, r9
#define TEST_RBX_R10 test rbx, r10
#define TEST_RBX_R11 test rbx, r11
#define TEST_RBX_R12 test rbx, r12
#define TEST_RBX_R13 test rbx, r13
#define TEST_RBX_R14 test rbx, r14
#define TEST_RBX_R15 test rbx, r15

#define TEST_RCX_RAX test rcx, rax
#define TEST_RCX_RBX test rcx, rbx
#define TEST_RCX_RCX test rcx, rcx
#define TEST_RCX_RDX test rcx, rdx
#define TEST_RCX_RDI test rcx, rdi
#define TEST_RCX_RSI test rcx, rsi
#define TEST_RCX_RBP test rcx, rbp
#define TEST_RCX_RSP test rcx, rsp
#define TEST_RCX_R8 test rcx, r8
#define TEST_RCX_R9 test rcx, r9
#define TEST_RCX_R10 test rcx, r10
#define TEST_RCX_R11 test rcx, r11
#define TEST_RCX_R12 test rcx, r12
#define TEST_RCX_R13 test rcx, r13
#define TEST_RCX_R14 test rcx, r14
#define TEST_RCX_R15 test rcx, r15

#define TEST_RDX_RAX test rdx, rax
#define TEST_RDX_RBX test rdx, rbx
#define TEST_RDX_RCX test rdx, rcx
#define TEST_RDX_RDX test rdx, rdx
#define TEST_RDX_RDI test rdx, rdi
#define TEST_RDX_RSI test rdx, rsi
#define TEST_RDX_RBP test rdx, rbp
#define TEST_RDX_RSP test rdx, rsp
#define TEST_RDX_R8 test rdx, r8
#define TEST_RDX_R9 test rdx, r9
#define TEST_RDX_R10 test rdx, r10
#define TEST_RDX_R11 test rdx, r11
#define TEST_RDX_R12 test rdx, r12
#define TEST_RDX_R13 test rdx, r13
#define TEST_RDX_R14 test rdx, r14
#define TEST_RDX_R15 test rdx, r15

#define TEST_RDI_RAX test rdi, rax
#define TEST_RDI_RBX test rdi, rbx
#define TEST_RDI_RCX test rdi, rcx
#define TEST_RDI_RDX test rdi, rdx
#define TEST_RDI_RDI test rdi, rdi
#define TEST_RDI_RSI test rdi, rsi
#define TEST_RDI_RBP test rdi, rbp
#define TEST_RDI_RSP test rdi, rsp
#define TEST_RDI_R8 test rdi, r8
#define TEST_RDI_R9 test rdi, r9
#define TEST_RDI_R10 test rdi, r10
#define TEST_RDI_R11 test rdi, r11
#define TEST_RDI_R12 test rdi, r12
#define TEST_RDI_R13 test rdi, r13
#define TEST_RDI_R14 test rdi, r14
#define TEST_RDI_R15 test rdi, r15

#define TEST_RSI_RAX test rsi, rax
#define TEST_RSI_RBX test rsi, rbx
#define TEST_RSI_RCX test rsi, rcx
#define TEST_RSI_RDX test rsi, rdx
#define TEST_RSI_RDI test rsi, rdi
#define TEST_RSI_RSI test rsi, rsi
#define TEST_RSI_RBP test rsi, rbp
#define TEST_RSI_RSP test rsi, rsp
#define TEST_RSI_R8 test rsi, r8
#define TEST_RSI_R9 test rsi, r9
#define TEST_RSI_R10 test rsi, r10
#define TEST_RSI_R11 test rsi, r11
#define TEST_RSI_R12 test rsi, r12
#define TEST_RSI_R13 test rsi, r13
#define TEST_RSI_R14 test rsi, r14
#define TEST_RSI_R15 test rsi, r15

#define TEST_RBP_RAX test rbp, rax
#define TEST_RBP_RBX test rbp, rbx
#define TEST_RBP_RCX test rbp, rcx
#define TEST_RBP_RDX test rbp, rdx
#define TEST_RBP_RDI test rbp, rdi
#define TEST_RBP_RSI test rbp, rsi
#define TEST_RBP_RBP test rbp, rbp
#define TEST_RBP_RSP test rbp, rsp
#define TEST_RBP_R8 test rbp, r8
#define TEST_RBP_R9 test rbp, r9
#define TEST_RBP_R10 test rbp, r10
#define TEST_RBP_R11 test rbp, r11
#define TEST_RBP_R12 test rbp, r12
#define TEST_RBP_R13 test rbp, r13
#define TEST_RBP_R14 test rbp, r14
#define TEST_RBP_R15 test rbp, r15

#define TEST_RSP_RAX test rsp, rax
#define TEST_RSP_RBX test rsp, rbx
#define TEST_RSP_RCX test rsp, rcx
#define TEST_RSP_RDX test rsp, rdx
#define TEST_RSP_RDI test rsp, rdi
#define TEST_RSP_RSI test rsp, rsi
#define TEST_RSP_RBP test rsp, rbp
#define TEST_RSP_RSP test rsp, rsp
#define TEST_RSP_R8 test rsp, r8
#define TEST_RSP_R9 test rsp, r9
#define TEST_RSP_R10 test rsp, r10
#define TEST_RSP_R11 test rsp, r11
#define TEST_RSP_R12 test rsp, r12
#define TEST_RSP_R13 test rsp, r13
#define TEST_RSP_R14 test rsp, r14
#define TEST_RSP_R15 test rsp, r15

#define TEST_R8_RAX test r8, rax
#define TEST_R8_RBX test r8, rbx
#define TEST_R8_RCX test r8, rcx
#define TEST_R8_RDX test r8, rdx
#define TEST_R8_RDI test r8, rdi
#define TEST_R8_RSI test r8, rsi
#define TEST_R8_RBP test r8, rbp
#define TEST_R8_RSP test r8, rsp
#define TEST_R8_R8 test r8, r8
#define TEST_R8_R9 test r8, r9
#define TEST_R8_R10 test r8, r10
#define TEST_R8_R11 test r8, r11
#define TEST_R8_R12 test r8, r12
#define TEST_R8_R13 test r8, r13
#define TEST_R8_R14 test r8, r14
#define TEST_R8_R15 test r8, r15

#define TEST_R9_RAX test r9, rax
#define TEST_R9_RBX test r9, rbx
#define TEST_R9_RCX test r9, rcx
#define TEST_R9_RDX test r9, rdx
#define TEST_R9_RDI test r9, rdi
#define TEST_R9_RSI test r9, rsi
#define TEST_R9_RBP test r9, rbp
#define TEST_R9_RSP test r9, rsp
#define TEST_R9_R8 test r9, r8
#define TEST_R9_R9 test r9, r9
#define TEST_R9_R10 test r9, r10
#define TEST_R9_R11 test r9, r11
#define TEST_R9_R12 test r9, r12
#define TEST_R9_R13 test r9, r13
#define TEST_R9_R14 test r9, r14
#define TEST_R9_R15 test r9, r15

#define TEST_R10_RAX test r10, rax
#define TEST_R10_RBX test r10, rbx
#define TEST_R10_RCX test r10, rcx
#define TEST_R10_RDX test r10, rdx
#define TEST_R10_RDI test r10, rdi
#define TEST_R10_RSI test r10, rsi
#define TEST_R10_RBP test r10, rbp
#define TEST_R10_RSP test r10, rsp
#define TEST_R10_R8 test r10, r8
#define TEST_R10_R9 test r10, r9
#define TEST_R10_R10 test r10, r10
#define TEST_R10_R11 test r10, r11
#define TEST_R10_R12 test r10, r12
#define TEST_R10_R13 test r10, r13
#define TEST_R10_R14 test r10, r14
#define TEST_R10_R15 test r10, r15

#define TEST_R11_RAX test r11, rax
#define TEST_R11_RBX test r11, rbx
#define TEST_R11_RCX test r11, rcx
#define TEST_R11_RDX test r11, rdx
#define TEST_R11_RDI test r11, rdi
#define TEST_R11_RSI test r11, rsi
#define TEST_R11_RBP test r11, rbp
#define TEST_R11_RSP test r11, rsp
#define TEST_R11_R8 test r11, r8
#define TEST_R11_R9 test r11, r9
#define TEST_R11_R10 test r11, r10
#define TEST_R11_R11 test r11, r11
#define TEST_R11_R12 test r11, r12
#define TEST_R11_R13 test r11, r13
#define TEST_R11_R14 test r11, r14
#define TEST_R11_R15 test r11, r15

#define TEST_R12_RAX test r12, rax
#define TEST_R12_RBX test r12, rbx
#define TEST_R12_RCX test r12, rcx
#define TEST_R12_RDX test r12, rdx
#define TEST_R12_RDI test r12, rdi
#define TEST_R12_RSI test r12, rsi
#define TEST_R12_RBP test r12, rbp
#define TEST_R12_RSP test r12, rsp
#define TEST_R12_R8 test r12, r8
#define TEST_R12_R9 test r12, r9
#define TEST_R12_R10 test r12, r10
#define TEST_R12_R11 test r12, r11
#define TEST_R12_R12 test r12, r12
#define TEST_R12_R13 test r12, r13
#define TEST_R12_R14 test r12, r14
#define TEST_R12_R15 test r12, r15

#define TEST_R13_RAX test r13, rax
#define TEST_R13_RBX test r13, rbx
#define TEST_R13_RCX test r13, rcx
#define TEST_R13_RDX test r13, rdx
#define TEST_R13_RDI test r13, rdi
#define TEST_R13_RSI test r13, rsi
#define TEST_R13_RBP test r13, rbp
#define TEST_R13_RSP test r13, rsp
#define TEST_R13_R8 test r13, r8
#define TEST_R13_R9 test r13, r9
#define TEST_R13_R10 test r13, r10
#define TEST_R13_R11 test r13, r11
#define TEST_R13_R12 test r13, r12
#define TEST_R13_R13 test r13, r13
#define TEST_R13_R14 test r13, r14
#define TEST_R13_R15 test r13, r15

#define TEST_R14_RAX test r14, rax
#define TEST_R14_RBX test r14, rbx
#define TEST_R14_RCX test r14, rcx
#define TEST_R14_RDX test r14, rdx
#define TEST_R14_RDI test r14, rdi
#define TEST_R14_RSI test r14, rsi
#define TEST_R14_RBP test r14, rbp
#define TEST_R14_RSP test r14, rsp
#define TEST_R14_R8 test r14, r8
#define TEST_R14_R9 test r14, r9
#define TEST_R14_R10 test r14, r10
#define TEST_R14_R11 test r14, r11
#define TEST_R14_R12 test r14, r12
#define TEST_R14_R13 test r14, r13
#define TEST_R14_R14 test r14, r14
#define TEST_R14_R15 test r14, r15

#define TEST_R15_RAX test r15, rax
#define TEST_R15_RBX test r15, rbx
#define TEST_R15_RCX test r15, rcx
#define TEST_R15_RDX test r15, rdx
#define TEST_R15_RDI test r15, rdi
#define TEST_R15_RSI test r15, rsi
#define TEST_R15_RBP test r15, rbp
#define TEST_R15_RSP test r15, rsp
#define TEST_R15_R8 test r15, r8
#define TEST_R15_R9 test r15, r9
#define TEST_R15_R10 test r15, r10
#define TEST_R15_R11 test r15, r11
#define TEST_R15_R12 test r15, r12
#define TEST_R15_R13 test r15, r13
#define TEST_R15_R14 test r15, r14
#define TEST_R15_R15 test r15, r15

#define TEST_RAX_(VALUE) test rax, VALUE
#define TEST_RBX_(VALUE) test rbx, VALUE
#define TEST_RCX_(VALUE) test rcx, VALUE
#define TEST_RDX_(VALUE) test rdx, VALUE
#define TEST_RDI_(VALUE) test rdi, VALUE
#define TEST_RSI_(VALUE) test rsi, VALUE
#define TEST_RBP_(VALUE) test rbp, VALUE
#define TEST_RSP_(VALUE) test rsp, VALUE
#define TEST_R8_(VALUE) test r8, VALUE
#define TEST_R9_(VALUE) test r9, VALUE
#define TEST_R10_(VALUE) test r10, VALUE
#define TEST_R11_(VALUE) test r11, VALUE
#define TEST_R12_(VALUE) test r12, VALUE
#define TEST_R13_(VALUE) test r13, VALUE
#define TEST_R14_(VALUE) test r14, VALUE
#define TEST_R15_(VALUE) test r15, VALUE
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
