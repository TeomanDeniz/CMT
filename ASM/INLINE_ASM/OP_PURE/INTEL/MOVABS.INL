#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

#ifdef __SYSTEM_64_BIT__
#define MOVABS_RAX_(VALUE) _MOVABS_RAX_(VALUE)
#define MOVABS_RBX_(VALUE) _MOVABS_RBX_(VALUE)
#define MOVABS_RCX_(VALUE) _MOVABS_RCX_(VALUE)
#define MOVABS_RDX_(VALUE) _MOVABS_RDX_(VALUE)
#define MOVABS_RSI_(VALUE) _MOVABS_RSI_(VALUE)
#define MOVABS_RDI_(VALUE) _MOVABS_RDI_(VALUE)
#define MOVABS_RBP_(VALUE) _MOVABS_RBP_(VALUE)
#define MOVABS_RSP_(VALUE) _MOVABS_RSP_(VALUE)
#define MOVABS_R8_(VALUE) _MOVABS_R8_(VALUE)
#define MOVABS_R9_(VALUE) _MOVABS_R9_(VALUE)
#define MOVABS_R10_(VALUE) _MOVABS_R10_(VALUE)
#define MOVABS_R11_(VALUE) _MOVABS_R11_(VALUE)
#define MOVABS_R12_(VALUE) _MOVABS_R12_(VALUE)
#define MOVABS_R13_(VALUE) _MOVABS_R13_(VALUE)
#define MOVABS_R14_(VALUE) _MOVABS_R14_(VALUE)
#define MOVABS_R15_(VALUE) _MOVABS_R15_(VALUE)
#endif /* __SYSTEM_64_BIT__ */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
