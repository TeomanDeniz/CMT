#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************ [v] 32-BIT REGISTERS [v] ************************ */
#define PUSH_EAX CMT_ASM("pushl %eax")
#define PUSH_EBX CMT_ASM("pushl %ebx")
#define PUSH_ECX CMT_ASM("pushl %ecx")
#define PUSH_EDX CMT_ASM("pushl %edx")
#define PUSH_ESI CMT_ASM("pushl %esi")
#define PUSH_EDI CMT_ASM("pushl %edi")
#define PUSH_EBP CMT_ASM("pushl %ebp")
#define PUSH_ESP CMT_ASM("pushl %esp")
/* ************************ [^] 32-BIT REGISTERS [^] ************************ */

#include "16.INL"

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
