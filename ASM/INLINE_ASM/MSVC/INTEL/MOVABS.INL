#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

#ifdef __SYSTEM_64_BIT__
#define MOVABS_RAX_(VALUE) movabs rax, VALUE
#define MOVABS_RBX_(VALUE) movabs rbx, VALUE
#define MOVABS_RCX_(VALUE) movabs rcx, VALUE
#define MOVABS_RDX_(VALUE) movabs rdx, VALUE
#define MOVABS_RSI_(VALUE) movabs rsi, VALUE
#define MOVABS_RDI_(VALUE) movabs rdi, VALUE
#define MOVABS_RBP_(VALUE) movabs rbp, VALUE
#define MOVABS_RSP_(VALUE) movabs rsp, VALUE
#define MOVABS_R8_(VALUE) movabs r8, VALUE
#define MOVABS_R9_(VALUE) movabs r9, VALUE
#define MOVABS_R10_(VALUE) movabs r10, VALUE
#define MOVABS_R11_(VALUE) movabs r11, VALUE
#define MOVABS_R12_(VALUE) movabs r12, VALUE
#define MOVABS_R13_(VALUE) movabs r13, VALUE
#define MOVABS_R14_(VALUE) movabs r14, VALUE
#define MOVABS_R15_(VALUE) movabs r15, VALUE
#endif /* __SYSTEM_64_BIT__ */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
