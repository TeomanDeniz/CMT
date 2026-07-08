#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

#ifndef __SYSTEM_64_BIT__
#ifdef __SYSTEM_32_BIT__
#define _POP_RAX _POP_EAX
#define _POP_RBX _POP_EBX
#define _POP_RCX _POP_ECX
#define _POP_RDX _POP_EDX
#define _POP_RSI _POP_ESI
#define _POP_RDI _POP_EDI
#define _POP_RBP _POP_EBP
#define _POP_RSP _POP_ESP
#else /* !__SYSTEM_32_BIT__ */
#define _POP_EAX _POP_AX
#define _POP_EBX _POP_BX
#define _POP_ECX _POP_CX
#define _POP_EDX _POP_DX
#define _POP_ESI _POP_SI
#define _POP_EDI _POP_DI
#define _POP_EBP _POP_BP
#define _POP_ESP _POP_SP
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
