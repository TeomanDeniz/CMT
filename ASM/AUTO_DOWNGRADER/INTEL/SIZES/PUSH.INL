#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

#ifndef __SYSTEM_64_BIT__
#ifdef __SYSTEM_32_BIT__
#define SIZEOF_PUSH_RAX SIZEOF_PUSH_EAX
#define SIZEOF_PUSH_RBX SIZEOF_PUSH_EBX
#define SIZEOF_PUSH_RCX SIZEOF_PUSH_ECX
#define SIZEOF_PUSH_RDX SIZEOF_PUSH_EDX
#define SIZEOF_PUSH_RSI SIZEOF_PUSH_ESI
#define SIZEOF_PUSH_RDI SIZEOF_PUSH_EDI
#define SIZEOF_PUSH_RBP SIZEOF_PUSH_EBP
#define SIZEOF_PUSH_RSP SIZEOF_PUSH_ESP
#else /* !__SYSTEM_32_BIT__ */
#define SIZEOF_PUSH_EAX SIZEOF_PUSH_AX
#define SIZEOF_PUSH_EBX SIZEOF_PUSH_BX
#define SIZEOF_PUSH_ECX SIZEOF_PUSH_CX
#define SIZEOF_PUSH_EDX SIZEOF_PUSH_DX
#define SIZEOF_PUSH_ESI SIZEOF_PUSH_SI
#define SIZEOF_PUSH_EDI SIZEOF_PUSH_DI
#define SIZEOF_PUSH_EBP SIZEOF_PUSH_BP
#define SIZEOF_PUSH_ESP SIZEOF_PUSH_SP
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
