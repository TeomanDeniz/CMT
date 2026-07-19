#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

#ifndef __SYSTEM_64_BIT__
#ifdef __SYSTEM_32_BIT__
#define _PUSH_RAX _PUSH_EAX
#define _PUSH_RBX _PUSH_EBX
#define _PUSH_RCX _PUSH_ECX
#define _PUSH_RDX _PUSH_EDX
#define _PUSH_RSI _PUSH_ESI
#define _PUSH_RDI _PUSH_EDI
#define _PUSH_RBP _PUSH_EBP
#define _PUSH_RSP _PUSH_ESP
#else /* !__SYSTEM_32_BIT__ */
#define _PUSH_EAX _PUSH_AX
#define _PUSH_EBX _PUSH_BX
#define _PUSH_ECX _PUSH_CX
#define _PUSH_EDX _PUSH_DX
#define _PUSH_ESI _PUSH_SI
#define _PUSH_EDI _PUSH_DI
#define _PUSH_EBP _PUSH_BP
#define _PUSH_ESP _PUSH_SP
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
