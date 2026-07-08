#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

#ifndef __SYSTEM_64_BIT__
#ifdef __SYSTEM_32_BIT__
#define SIZEOF_POP_RAX SIZEOF_POP_EAX
#define SIZEOF_POP_RBX SIZEOF_POP_EBX
#define SIZEOF_POP_RCX SIZEOF_POP_ECX
#define SIZEOF_POP_RDX SIZEOF_POP_EDX
#define SIZEOF_POP_RSI SIZEOF_POP_ESI
#define SIZEOF_POP_RDI SIZEOF_POP_EDI
#define SIZEOF_POP_RBP SIZEOF_POP_EBP
#define SIZEOF_POP_RSP SIZEOF_POP_ESP
#else /* !__SYSTEM_32_BIT__ */
#define SIZEOF_POP_EAX SIZEOF_POP_AX
#define SIZEOF_POP_EBX SIZEOF_POP_BX
#define SIZEOF_POP_ECX SIZEOF_POP_CX
#define SIZEOF_POP_EDX SIZEOF_POP_DX
#define SIZEOF_POP_ESI SIZEOF_POP_SI
#define SIZEOF_POP_EDI SIZEOF_POP_DI
#define SIZEOF_POP_EBP SIZEOF_POP_BP
#define SIZEOF_POP_ESP SIZEOF_POP_SP
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
