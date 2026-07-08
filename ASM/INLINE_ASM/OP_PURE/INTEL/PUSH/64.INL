#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************ [v] 64-BIT REGISTERS [v] ************************ */
#define PUSH_RAX _PUSH_RAX
#define PUSH_RBX _PUSH_RBX
#define PUSH_RCX _PUSH_RCX
#define PUSH_RDX _PUSH_RDX
#define PUSH_RSI _PUSH_RSI
#define PUSH_RDI _PUSH_RDI
#define PUSH_RBP _PUSH_RBP
#define PUSH_RSP _PUSH_RSP
#define PUSH_R8 _PUSH_R8
#define PUSH_R9 _PUSH_R9
#define PUSH_R10 _PUSH_R10
#define PUSH_R11 _PUSH_R11
#define PUSH_R12 _PUSH_R12
#define PUSH_R13 _PUSH_R13
#define PUSH_R14 _PUSH_R14
#define PUSH_R15 _PUSH_R15
/* ************************ [^] 64-BIT REGISTERS [^] ************************ */

#include "16.INL"

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
