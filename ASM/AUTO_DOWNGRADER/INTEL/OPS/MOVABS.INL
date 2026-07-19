#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

#ifndef __SYSTEM_64_BIT__
#define _MOVABS_RAX_(VALUE) _MOV_EAX_(VALUE)
#define _MOVABS_RBX_(VALUE) _MOV_EBX_(VALUE)
#define _MOVABS_RCX_(VALUE) _MOV_ECX_(VALUE)
#define _MOVABS_RDX_(VALUE) _MOV_EDX_(VALUE)
#define _MOVABS_RSI_(VALUE) _MOV_ESI_(VALUE)
#define _MOVABS_RDI_(VALUE) _MOV_EDI_(VALUE)
#define _MOVABS_RBP_(VALUE) _MOV_EBP_(VALUE)
#define _MOVABS_RSP_(VALUE) _MOV_ESP_(VALUE)
#endif /* !__SYSTEM_64_BIT__ */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
