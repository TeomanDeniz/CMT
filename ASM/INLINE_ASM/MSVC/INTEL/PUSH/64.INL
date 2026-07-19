#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************ [v] 64-BIT REGISTERS [v] ************************ */
#define PUSH_RAX push rax
#define PUSH_RBX push rbx
#define PUSH_RCX push rcx
#define PUSH_RDX push rdx
#define PUSH_RSI push rsi
#define PUSH_RDI push rdi
#define PUSH_RBP push rbp
#define PUSH_RSP push rsp
#define PUSH_R8 push r8
#define PUSH_R9 push r9
#define PUSH_R10 push r10
#define PUSH_R11 push r11
#define PUSH_R12 push r12
#define PUSH_R13 push r13
#define PUSH_R14 push r14
#define PUSH_R15 push r15
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
