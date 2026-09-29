#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************ [v] 32-BIT REGISTERS [v] ************************ */
#ifdef __SYSTEM_32_BIT__
#define SBB_EAX_EAX sbb eax, eax
#define SBB_EAX_EBX sbb eax, ebx
#define SBB_EAX_ECX sbb eax, ecx
#define SBB_EAX_EDX sbb eax, edx
#define SBB_EAX_EDI sbb eax, edi
#define SBB_EAX_ESI sbb eax, esi
#define SBB_EAX_EBP sbb eax, ebp
#define SBB_EAX_ESP sbb eax, esp

#define SBB_EBX_EAX sbb ebx, eax
#define SBB_EBX_EBX sbb ebx, ebx
#define SBB_EBX_ECX sbb ebx, ecx
#define SBB_EBX_EDX sbb ebx, edx
#define SBB_EBX_EDI sbb ebx, edi
#define SBB_EBX_ESI sbb ebx, esi
#define SBB_EBX_EBP sbb ebx, ebp
#define SBB_EBX_ESP sbb ebx, esp

#define SBB_ECX_EAX sbb ecx, eax
#define SBB_ECX_EBX sbb ecx, ebx
#define SBB_ECX_ECX sbb ecx, ecx
#define SBB_ECX_EDX sbb ecx, edx
#define SBB_ECX_EDI sbb ecx, edi
#define SBB_ECX_ESI sbb ecx, esi
#define SBB_ECX_EBP sbb ecx, ebp
#define SBB_ECX_ESP sbb ecx, esp

#define SBB_EDX_EAX sbb edx, eax
#define SBB_EDX_EBX sbb edx, ebx
#define SBB_EDX_ECX sbb edx, ecx
#define SBB_EDX_EDX sbb edx, edx
#define SBB_EDX_EDI sbb edx, edi
#define SBB_EDX_ESI sbb edx, esi
#define SBB_EDX_EBP sbb edx, ebp
#define SBB_EDX_ESP sbb edx, esp

#define SBB_EDI_EAX sbb edi, eax
#define SBB_EDI_EBX sbb edi, ebx
#define SBB_EDI_ECX sbb edi, ecx
#define SBB_EDI_EDX sbb edi, edx
#define SBB_EDI_EDI sbb edi, edi
#define SBB_EDI_ESI sbb edi, esi
#define SBB_EDI_EBP sbb edi, ebp
#define SBB_EDI_ESP sbb edi, esp

#define SBB_ESI_EAX sbb esi, eax
#define SBB_ESI_EBX sbb esi, ebx
#define SBB_ESI_ECX sbb esi, ecx
#define SBB_ESI_EDX sbb esi, edx
#define SBB_ESI_EDI sbb esi, edi
#define SBB_ESI_ESI sbb esi, esi
#define SBB_ESI_EBP sbb esi, ebp
#define SBB_ESI_ESP sbb esi, esp

#define SBB_EBP_EAX sbb ebp, eax
#define SBB_EBP_EBX sbb ebp, ebx
#define SBB_EBP_ECX sbb ebp, ecx
#define SBB_EBP_EDX sbb ebp, edx
#define SBB_EBP_EDI sbb ebp, edi
#define SBB_EBP_ESI sbb ebp, esi
#define SBB_EBP_EBP sbb ebp, ebp
#define SBB_EBP_ESP sbb ebp, esp

#define SBB_ESP_EAX sbb esp, eax
#define SBB_ESP_EBX sbb esp, ebx
#define SBB_ESP_ECX sbb esp, ecx
#define SBB_ESP_EDX sbb esp, edx
#define SBB_ESP_EDI sbb esp, edi
#define SBB_ESP_ESI sbb esp, esi
#define SBB_ESP_EBP sbb esp, ebp
#define SBB_ESP_ESP sbb esp, esp

#define SBB_EAX_(VALUE) sbb eax, VALUE
#define SBB_EBX_(VALUE) sbb ebx, VALUE
#define SBB_ECX_(VALUE) sbb ecx, VALUE
#define SBB_EDX_(VALUE) sbb edx, VALUE
#define SBB_EDI_(VALUE) sbb edi, VALUE
#define SBB_ESI_(VALUE) sbb esi, VALUE
#define SBB_EBP_(VALUE) sbb ebp, VALUE
#define SBB_ESP_(VALUE) sbb esp, VALUE
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define SBB_EAX_EAX sbb eax, eax
#define SBB_EAX_EBX sbb eax, ebx
#define SBB_EAX_ECX sbb eax, ecx
#define SBB_EAX_EDX sbb eax, edx
#define SBB_EAX_EDI sbb eax, edi
#define SBB_EAX_ESI sbb eax, esi
#define SBB_EAX_EBP sbb eax, ebp
#define SBB_EAX_ESP sbb eax, esp
#define SBB_EAX_R8D sbb eax, r8d
#define SBB_EAX_R9D sbb eax, r9d
#define SBB_EAX_R10D sbb eax, r10d
#define SBB_EAX_R11D sbb eax, r11d
#define SBB_EAX_R12D sbb eax, r12d
#define SBB_EAX_R13D sbb eax, r13d
#define SBB_EAX_R14D sbb eax, r14d
#define SBB_EAX_R15D sbb eax, r15d

#define SBB_EBX_EAX sbb ebx, eax
#define SBB_EBX_EBX sbb ebx, ebx
#define SBB_EBX_ECX sbb ebx, ecx
#define SBB_EBX_EDX sbb ebx, edx
#define SBB_EBX_EDI sbb ebx, edi
#define SBB_EBX_ESI sbb ebx, esi
#define SBB_EBX_EBP sbb ebx, ebp
#define SBB_EBX_ESP sbb ebx, esp
#define SBB_EBX_R8D sbb ebx, r8d
#define SBB_EBX_R9D sbb ebx, r9d
#define SBB_EBX_R10D sbb ebx, r10d
#define SBB_EBX_R11D sbb ebx, r11d
#define SBB_EBX_R12D sbb ebx, r12d
#define SBB_EBX_R13D sbb ebx, r13d
#define SBB_EBX_R14D sbb ebx, r14d
#define SBB_EBX_R15D sbb ebx, r15d

#define SBB_ECX_EAX sbb ecx, eax
#define SBB_ECX_EBX sbb ecx, ebx
#define SBB_ECX_ECX sbb ecx, ecx
#define SBB_ECX_EDX sbb ecx, edx
#define SBB_ECX_EDI sbb ecx, edi
#define SBB_ECX_ESI sbb ecx, esi
#define SBB_ECX_EBP sbb ecx, ebp
#define SBB_ECX_ESP sbb ecx, esp
#define SBB_ECX_R8D sbb ecx, r8d
#define SBB_ECX_R9D sbb ecx, r9d
#define SBB_ECX_R10D sbb ecx, r10d
#define SBB_ECX_R11D sbb ecx, r11d
#define SBB_ECX_R12D sbb ecx, r12d
#define SBB_ECX_R13D sbb ecx, r13d
#define SBB_ECX_R14D sbb ecx, r14d
#define SBB_ECX_R15D sbb ecx, r15d

#define SBB_EDX_EAX sbb edx, eax
#define SBB_EDX_EBX sbb edx, ebx
#define SBB_EDX_ECX sbb edx, ecx
#define SBB_EDX_EDX sbb edx, edx
#define SBB_EDX_EDI sbb edx, edi
#define SBB_EDX_ESI sbb edx, esi
#define SBB_EDX_EBP sbb edx, ebp
#define SBB_EDX_ESP sbb edx, esp
#define SBB_EDX_R8D sbb edx, r8d
#define SBB_EDX_R9D sbb edx, r9d
#define SBB_EDX_R10D sbb edx, r10d
#define SBB_EDX_R11D sbb edx, r11d
#define SBB_EDX_R12D sbb edx, r12d
#define SBB_EDX_R13D sbb edx, r13d
#define SBB_EDX_R14D sbb edx, r14d
#define SBB_EDX_R15D sbb edx, r15d

#define SBB_EDI_EAX sbb edi, eax
#define SBB_EDI_EBX sbb edi, ebx
#define SBB_EDI_ECX sbb edi, ecx
#define SBB_EDI_EDX sbb edi, edx
#define SBB_EDI_EDI sbb edi, edi
#define SBB_EDI_ESI sbb edi, esi
#define SBB_EDI_EBP sbb edi, ebp
#define SBB_EDI_ESP sbb edi, esp
#define SBB_EDI_R8D sbb edi, r8d
#define SBB_EDI_R9D sbb edi, r9d
#define SBB_EDI_R10D sbb edi, r10d
#define SBB_EDI_R11D sbb edi, r11d
#define SBB_EDI_R12D sbb edi, r12d
#define SBB_EDI_R13D sbb edi, r13d
#define SBB_EDI_R14D sbb edi, r14d
#define SBB_EDI_R15D sbb edi, r15d

#define SBB_ESI_EAX sbb esi, eax
#define SBB_ESI_EBX sbb esi, ebx
#define SBB_ESI_ECX sbb esi, ecx
#define SBB_ESI_EDX sbb esi, edx
#define SBB_ESI_EDI sbb esi, edi
#define SBB_ESI_ESI sbb esi, esi
#define SBB_ESI_EBP sbb esi, ebp
#define SBB_ESI_ESP sbb esi, esp
#define SBB_ESI_R8D sbb esi, r8d
#define SBB_ESI_R9D sbb esi, r9d
#define SBB_ESI_R10D sbb esi, r10d
#define SBB_ESI_R11D sbb esi, r11d
#define SBB_ESI_R12D sbb esi, r12d
#define SBB_ESI_R13D sbb esi, r13d
#define SBB_ESI_R14D sbb esi, r14d
#define SBB_ESI_R15D sbb esi, r15d

#define SBB_EBP_EAX sbb ebp, eax
#define SBB_EBP_EBX sbb ebp, ebx
#define SBB_EBP_ECX sbb ebp, ecx
#define SBB_EBP_EDX sbb ebp, edx
#define SBB_EBP_EDI sbb ebp, edi
#define SBB_EBP_ESI sbb ebp, esi
#define SBB_EBP_EBP sbb ebp, ebp
#define SBB_EBP_ESP sbb ebp, esp
#define SBB_EBP_R8D sbb ebp, r8d
#define SBB_EBP_R9D sbb ebp, r9d
#define SBB_EBP_R10D sbb ebp, r10d
#define SBB_EBP_R11D sbb ebp, r11d
#define SBB_EBP_R12D sbb ebp, r12d
#define SBB_EBP_R13D sbb ebp, r13d
#define SBB_EBP_R14D sbb ebp, r14d
#define SBB_EBP_R15D sbb ebp, r15d

#define SBB_ESP_EAX sbb esp, eax
#define SBB_ESP_EBX sbb esp, ebx
#define SBB_ESP_ECX sbb esp, ecx
#define SBB_ESP_EDX sbb esp, edx
#define SBB_ESP_EDI sbb esp, edi
#define SBB_ESP_ESI sbb esp, esi
#define SBB_ESP_EBP sbb esp, ebp
#define SBB_ESP_ESP sbb esp, esp
#define SBB_ESP_R8D sbb esp, r8d
#define SBB_ESP_R9D sbb esp, r9d
#define SBB_ESP_R10D sbb esp, r10d
#define SBB_ESP_R11D sbb esp, r11d
#define SBB_ESP_R12D sbb esp, r12d
#define SBB_ESP_R13D sbb esp, r13d
#define SBB_ESP_R14D sbb esp, r14d
#define SBB_ESP_R15D sbb esp, r15d

#define SBB_R8D_EAX sbb r8d, eax
#define SBB_R8D_EBX sbb r8d, ebx
#define SBB_R8D_ECX sbb r8d, ecx
#define SBB_R8D_EDX sbb r8d, edx
#define SBB_R8D_EDI sbb r8d, edi
#define SBB_R8D_ESI sbb r8d, esi
#define SBB_R8D_EBP sbb r8d, ebp
#define SBB_R8D_ESP sbb r8d, esp
#define SBB_R8D_R8D sbb r8d, r8d
#define SBB_R8D_R9D sbb r8d, r9d
#define SBB_R8D_R10D sbb r8d, r10d
#define SBB_R8D_R11D sbb r8d, r11d
#define SBB_R8D_R12D sbb r8d, r12d
#define SBB_R8D_R13D sbb r8d, r13d
#define SBB_R8D_R14D sbb r8d, r14d
#define SBB_R8D_R15D sbb r8d, r15d

#define SBB_R9D_EAX sbb r9d, eax
#define SBB_R9D_EBX sbb r9d, ebx
#define SBB_R9D_ECX sbb r9d, ecx
#define SBB_R9D_EDX sbb r9d, edx
#define SBB_R9D_EDI sbb r9d, edi
#define SBB_R9D_ESI sbb r9d, esi
#define SBB_R9D_EBP sbb r9d, ebp
#define SBB_R9D_ESP sbb r9d, esp
#define SBB_R9D_R8D sbb r9d, r8d
#define SBB_R9D_R9D sbb r9d, r9d
#define SBB_R9D_R10D sbb r9d, r10d
#define SBB_R9D_R11D sbb r9d, r11d
#define SBB_R9D_R12D sbb r9d, r12d
#define SBB_R9D_R13D sbb r9d, r13d
#define SBB_R9D_R14D sbb r9d, r14d
#define SBB_R9D_R15D sbb r9d, r15d

#define SBB_R10D_EAX sbb r10d, eax
#define SBB_R10D_EBX sbb r10d, ebx
#define SBB_R10D_ECX sbb r10d, ecx
#define SBB_R10D_EDX sbb r10d, edx
#define SBB_R10D_EDI sbb r10d, edi
#define SBB_R10D_ESI sbb r10d, esi
#define SBB_R10D_EBP sbb r10d, ebp
#define SBB_R10D_ESP sbb r10d, esp
#define SBB_R10D_R8D sbb r10d, r8d
#define SBB_R10D_R9D sbb r10d, r9d
#define SBB_R10D_R10D sbb r10d, r10d
#define SBB_R10D_R11D sbb r10d, r11d
#define SBB_R10D_R12D sbb r10d, r12d
#define SBB_R10D_R13D sbb r10d, r13d
#define SBB_R10D_R14D sbb r10d, r14d
#define SBB_R10D_R15D sbb r10d, r15d

#define SBB_R11D_EAX sbb r11d, eax
#define SBB_R11D_EBX sbb r11d, ebx
#define SBB_R11D_ECX sbb r11d, ecx
#define SBB_R11D_EDX sbb r11d, edx
#define SBB_R11D_EDI sbb r11d, edi
#define SBB_R11D_ESI sbb r11d, esi
#define SBB_R11D_EBP sbb r11d, ebp
#define SBB_R11D_ESP sbb r11d, esp
#define SBB_R11D_R8D sbb r11d, r8d
#define SBB_R11D_R9D sbb r11d, r9d
#define SBB_R11D_R10D sbb r11d, r10d
#define SBB_R11D_R11D sbb r11d, r11d
#define SBB_R11D_R12D sbb r11d, r12d
#define SBB_R11D_R13D sbb r11d, r13d
#define SBB_R11D_R14D sbb r11d, r14d
#define SBB_R11D_R15D sbb r11d, r15d

#define SBB_R12D_EAX sbb r12d, eax
#define SBB_R12D_EBX sbb r12d, ebx
#define SBB_R12D_ECX sbb r12d, ecx
#define SBB_R12D_EDX sbb r12d, edx
#define SBB_R12D_EDI sbb r12d, edi
#define SBB_R12D_ESI sbb r12d, esi
#define SBB_R12D_EBP sbb r12d, ebp
#define SBB_R12D_ESP sbb r12d, esp
#define SBB_R12D_R8D sbb r12d, r8d
#define SBB_R12D_R9D sbb r12d, r9d
#define SBB_R12D_R10D sbb r12d, r10d
#define SBB_R12D_R11D sbb r12d, r11d
#define SBB_R12D_R12D sbb r12d, r12d
#define SBB_R12D_R13D sbb r12d, r13d
#define SBB_R12D_R14D sbb r12d, r14d
#define SBB_R12D_R15D sbb r12d, r15d

#define SBB_R13D_EAX sbb r13d, eax
#define SBB_R13D_EBX sbb r13d, ebx
#define SBB_R13D_ECX sbb r13d, ecx
#define SBB_R13D_EDX sbb r13d, edx
#define SBB_R13D_EDI sbb r13d, edi
#define SBB_R13D_ESI sbb r13d, esi
#define SBB_R13D_EBP sbb r13d, ebp
#define SBB_R13D_ESP sbb r13d, esp
#define SBB_R13D_R8D sbb r13d, r8d
#define SBB_R13D_R9D sbb r13d, r9d
#define SBB_R13D_R10D sbb r13d, r10d
#define SBB_R13D_R11D sbb r13d, r11d
#define SBB_R13D_R12D sbb r13d, r12d
#define SBB_R13D_R13D sbb r13d, r13d
#define SBB_R13D_R14D sbb r13d, r14d
#define SBB_R13D_R15D sbb r13d, r15d

#define SBB_R14D_EAX sbb r14d, eax
#define SBB_R14D_EBX sbb r14d, ebx
#define SBB_R14D_ECX sbb r14d, ecx
#define SBB_R14D_EDX sbb r14d, edx
#define SBB_R14D_EDI sbb r14d, edi
#define SBB_R14D_ESI sbb r14d, esi
#define SBB_R14D_EBP sbb r14d, ebp
#define SBB_R14D_ESP sbb r14d, esp
#define SBB_R14D_R8D sbb r14d, r8d
#define SBB_R14D_R9D sbb r14d, r9d
#define SBB_R14D_R10D sbb r14d, r10d
#define SBB_R14D_R11D sbb r14d, r11d
#define SBB_R14D_R12D sbb r14d, r12d
#define SBB_R14D_R13D sbb r14d, r13d
#define SBB_R14D_R14D sbb r14d, r14d
#define SBB_R14D_R15D sbb r14d, r15d

#define SBB_R15D_EAX sbb r15d, eax
#define SBB_R15D_EBX sbb r15d, ebx
#define SBB_R15D_ECX sbb r15d, ecx
#define SBB_R15D_EDX sbb r15d, edx
#define SBB_R15D_EDI sbb r15d, edi
#define SBB_R15D_ESI sbb r15d, esi
#define SBB_R15D_EBP sbb r15d, ebp
#define SBB_R15D_ESP sbb r15d, esp
#define SBB_R15D_R8D sbb r15d, r8d
#define SBB_R15D_R9D sbb r15d, r9d
#define SBB_R15D_R10D sbb r15d, r10d
#define SBB_R15D_R11D sbb r15d, r11d
#define SBB_R15D_R12D sbb r15d, r12d
#define SBB_R15D_R13D sbb r15d, r13d
#define SBB_R15D_R14D sbb r15d, r14d
#define SBB_R15D_R15D sbb r15d, r15d

#define SBB_EAX_(VALUE) sbb eax, VALUE
#define SBB_EBX_(VALUE) sbb ebx, VALUE
#define SBB_ECX_(VALUE) sbb ecx, VALUE
#define SBB_EDX_(VALUE) sbb edx, VALUE
#define SBB_EDI_(VALUE) sbb edi, VALUE
#define SBB_ESI_(VALUE) sbb esi, VALUE
#define SBB_EBP_(VALUE) sbb ebp, VALUE
#define SBB_ESP_(VALUE) sbb esp, VALUE
#define SBB_R8D_(VALUE) sbb r8d, VALUE
#define SBB_R9D_(VALUE) sbb r9d, VALUE
#define SBB_R10D_(VALUE) sbb r10d, VALUE
#define SBB_R11D_(VALUE) sbb r11d, VALUE
#define SBB_R12D_(VALUE) sbb r12d, VALUE
#define SBB_R13D_(VALUE) sbb r13d, VALUE
#define SBB_R14D_(VALUE) sbb r14d, VALUE
#define SBB_R15D_(VALUE) sbb r15d, VALUE
#endif /* __SYSTEM_64_BIT__ */
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
