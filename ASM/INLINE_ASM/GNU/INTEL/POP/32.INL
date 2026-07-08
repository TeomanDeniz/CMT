#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************ [v] 32-BIT REGISTERS [v] ************************ */
#define POP_EAX CMT_ASM("popl %eax")
#define POP_EBX CMT_ASM("popl %ebx")
#define POP_ECX CMT_ASM("popl %ecx")
#define POP_EDX CMT_ASM("popl %edx")
#define POP_ESI CMT_ASM("popl %esi")
#define POP_EDI CMT_ASM("popl %edi")
#define POP_EBP CMT_ASM("popl %ebp")
#define POP_ESP CMT_ASM("popl %esp")
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
