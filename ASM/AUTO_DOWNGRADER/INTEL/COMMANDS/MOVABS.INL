#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

#ifndef __SYSTEM_64_BIT__
#define MOVABS_RAX_(VALUE) MOV_EAX_(VALUE)
#define MOVABS_RBX_(VALUE) MOV_EBX_(VALUE)
#define MOVABS_RCX_(VALUE) MOV_ECX_(VALUE)
#define MOVABS_RDX_(VALUE) MOV_EDX_(VALUE)
#define MOVABS_RSI_(VALUE) MOV_ESI_(VALUE)
#define MOVABS_RDI_(VALUE) MOV_EDI_(VALUE)
#define MOVABS_RBP_(VALUE) MOV_EBP_(VALUE)
#define MOVABS_RSP_(VALUE) MOV_ESP_(VALUE)
#endif /* !__SYSTEM_64_BIT__ */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
