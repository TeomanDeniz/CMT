#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************ [v] 64-BIT REGISTERS [v] ************************ */
#define POP_RAX pop rax
#define POP_RBX pop rbx
#define POP_RCX pop rcx
#define POP_RDX pop rdx
#define POP_RSI pop rsi
#define POP_RDI pop rdi
#define POP_RBP pop rbp
#define POP_RSP pop rsp
#define POP_R8 pop r8
#define POP_R9 pop r9
#define POP_R10 pop r10
#define POP_R11 pop r11
#define POP_R12 pop r12
#define POP_R13 pop r13
#define POP_R14 pop r14
#define POP_R15 pop r15
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
