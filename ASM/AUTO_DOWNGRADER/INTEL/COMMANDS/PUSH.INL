#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

#ifndef __SYSTEM_64_BIT__
#ifdef __SYSTEM_32_BIT__
#define PUSH_RAX PUSH_EAX
#define PUSH_RBX PUSH_EBX
#define PUSH_RCX PUSH_ECX
#define PUSH_RDX PUSH_EDX
#define PUSH_RSI PUSH_ESI
#define PUSH_RDI PUSH_EDI
#define PUSH_RBP PUSH_EBP
#define PUSH_RSP PUSH_ESP
#else /* !__SYSTEM_32_BIT__ */
#define PUSH_EAX PUSH_AX
#define PUSH_EBX PUSH_BX
#define PUSH_ECX PUSH_CX
#define PUSH_EDX PUSH_DX
#define PUSH_ESI PUSH_SI
#define PUSH_EDI PUSH_DI
#define PUSH_EBP PUSH_BP
#define PUSH_ESP PUSH_SP
#endif /* __SYSTEM_32_BIT__ */
#endif /* !__SYSTEM_64_BIT__ */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
