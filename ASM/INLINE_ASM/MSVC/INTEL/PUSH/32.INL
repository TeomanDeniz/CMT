#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************ [v] 32-BIT REGISTERS [v] ************************ */
#define PUSH_EAX push eax
#define PUSH_EBX push ebx
#define PUSH_ECX push ecx
#define PUSH_EDX push edx
#define PUSH_ESI push esi
#define PUSH_EDI push edi
#define PUSH_EBP push ebp
#define PUSH_ESP push esp
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
