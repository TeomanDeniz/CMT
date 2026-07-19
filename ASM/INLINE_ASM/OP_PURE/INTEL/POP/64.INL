#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************ [v] 64-BIT REGISTERS [v] ************************ */
#define POP_RAX _POP_RAX
#define POP_RBX _POP_RBX
#define POP_RCX _POP_RCX
#define POP_RDX _POP_RDX
#define POP_RSI _POP_RSI
#define POP_RDI _POP_RDI
#define POP_RBP _POP_RBP
#define POP_RSP _POP_RSP
#define POP_R8 _POP_R8
#define POP_R9 _POP_R9
#define POP_R10 _POP_R10
#define POP_R11 _POP_R11
#define POP_R12 _POP_R12
#define POP_R13 _POP_R13
#define POP_R14 _POP_R14
#define POP_R15 _POP_R15
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
