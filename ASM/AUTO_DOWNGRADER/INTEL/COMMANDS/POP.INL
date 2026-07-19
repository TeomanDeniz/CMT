#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

#ifndef __SYSTEM_64_BIT__
#ifdef __SYSTEM_32_BIT__
#define POP_RAX POP_EAX
#define POP_RBX POP_EBX
#define POP_RCX POP_ECX
#define POP_RDX POP_EDX
#define POP_RSI POP_ESI
#define POP_RDI POP_EDI
#define POP_RBP POP_EBP
#define POP_RSP POP_ESP
#else /* !__SYSTEM_32_BIT__ */
#define POP_EAX POP_AX
#define POP_EBX POP_BX
#define POP_ECX POP_CX
#define POP_EDX POP_DX
#define POP_ESI POP_SI
#define POP_EDI POP_DI
#define POP_EBP POP_BP
#define POP_ESP POP_SP
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
