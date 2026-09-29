#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************ [v] 32-BIT REGISTERS [v] ************************ */
#ifdef __SYSTEM_32_BIT__
#define XCHG_EAX_EAX xchg eax, eax
#define XCHG_EAX_EBX xchg eax, ebx
#define XCHG_EAX_ECX xchg eax, ecx
#define XCHG_EAX_EDX xchg eax, edx
#define XCHG_EAX_EDI xchg eax, edi
#define XCHG_EAX_ESI xchg eax, esi
#define XCHG_EAX_EBP xchg eax, ebp
#define XCHG_EAX_ESP xchg eax, esp

#define XCHG_EBX_EAX xchg ebx, eax
#define XCHG_EBX_EBX xchg ebx, ebx
#define XCHG_EBX_ECX xchg ebx, ecx
#define XCHG_EBX_EDX xchg ebx, edx
#define XCHG_EBX_EDI xchg ebx, edi
#define XCHG_EBX_ESI xchg ebx, esi
#define XCHG_EBX_EBP xchg ebx, ebp
#define XCHG_EBX_ESP xchg ebx, esp

#define XCHG_ECX_EAX xchg ecx, eax
#define XCHG_ECX_EBX xchg ecx, ebx
#define XCHG_ECX_ECX xchg ecx, ecx
#define XCHG_ECX_EDX xchg ecx, edx
#define XCHG_ECX_EDI xchg ecx, edi
#define XCHG_ECX_ESI xchg ecx, esi
#define XCHG_ECX_EBP xchg ecx, ebp
#define XCHG_ECX_ESP xchg ecx, esp

#define XCHG_EDX_EAX xchg edx, eax
#define XCHG_EDX_EBX xchg edx, ebx
#define XCHG_EDX_ECX xchg edx, ecx
#define XCHG_EDX_EDX xchg edx, edx
#define XCHG_EDX_EDI xchg edx, edi
#define XCHG_EDX_ESI xchg edx, esi
#define XCHG_EDX_EBP xchg edx, ebp
#define XCHG_EDX_ESP xchg edx, esp

#define XCHG_EDI_EAX xchg edi, eax
#define XCHG_EDI_EBX xchg edi, ebx
#define XCHG_EDI_ECX xchg edi, ecx
#define XCHG_EDI_EDX xchg edi, edx
#define XCHG_EDI_EDI xchg edi, edi
#define XCHG_EDI_ESI xchg edi, esi
#define XCHG_EDI_EBP xchg edi, ebp
#define XCHG_EDI_ESP xchg edi, esp

#define XCHG_ESI_EAX xchg esi, eax
#define XCHG_ESI_EBX xchg esi, ebx
#define XCHG_ESI_ECX xchg esi, ecx
#define XCHG_ESI_EDX xchg esi, edx
#define XCHG_ESI_EDI xchg esi, edi
#define XCHG_ESI_ESI xchg esi, esi
#define XCHG_ESI_EBP xchg esi, ebp
#define XCHG_ESI_ESP xchg esi, esp

#define XCHG_EBP_EAX xchg ebp, eax
#define XCHG_EBP_EBX xchg ebp, ebx
#define XCHG_EBP_ECX xchg ebp, ecx
#define XCHG_EBP_EDX xchg ebp, edx
#define XCHG_EBP_EDI xchg ebp, edi
#define XCHG_EBP_ESI xchg ebp, esi
#define XCHG_EBP_EBP xchg ebp, ebp
#define XCHG_EBP_ESP xchg ebp, esp

#define XCHG_ESP_EAX xchg esp, eax
#define XCHG_ESP_EBX xchg esp, ebx
#define XCHG_ESP_ECX xchg esp, ecx
#define XCHG_ESP_EDX xchg esp, edx
#define XCHG_ESP_EDI xchg esp, edi
#define XCHG_ESP_ESI xchg esp, esi
#define XCHG_ESP_EBP xchg esp, ebp
#define XCHG_ESP_ESP xchg esp, esp
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define XCHG_EAX_EAX xchg eax, eax
#define XCHG_EAX_EBX xchg eax, ebx
#define XCHG_EAX_ECX xchg eax, ecx
#define XCHG_EAX_EDX xchg eax, edx
#define XCHG_EAX_EDI xchg eax, edi
#define XCHG_EAX_ESI xchg eax, esi
#define XCHG_EAX_EBP xchg eax, ebp
#define XCHG_EAX_ESP xchg eax, esp
#define XCHG_EAX_R8D xchg eax, r8d
#define XCHG_EAX_R9D xchg eax, r9d
#define XCHG_EAX_R10D xchg eax, r10d
#define XCHG_EAX_R11D xchg eax, r11d
#define XCHG_EAX_R12D xchg eax, r12d
#define XCHG_EAX_R13D xchg eax, r13d
#define XCHG_EAX_R14D xchg eax, r14d
#define XCHG_EAX_R15D xchg eax, r15d

#define XCHG_EBX_EAX xchg ebx, eax
#define XCHG_EBX_EBX xchg ebx, ebx
#define XCHG_EBX_ECX xchg ebx, ecx
#define XCHG_EBX_EDX xchg ebx, edx
#define XCHG_EBX_EDI xchg ebx, edi
#define XCHG_EBX_ESI xchg ebx, esi
#define XCHG_EBX_EBP xchg ebx, ebp
#define XCHG_EBX_ESP xchg ebx, esp
#define XCHG_EBX_R8D xchg ebx, r8d
#define XCHG_EBX_R9D xchg ebx, r9d
#define XCHG_EBX_R10D xchg ebx, r10d
#define XCHG_EBX_R11D xchg ebx, r11d
#define XCHG_EBX_R12D xchg ebx, r12d
#define XCHG_EBX_R13D xchg ebx, r13d
#define XCHG_EBX_R14D xchg ebx, r14d
#define XCHG_EBX_R15D xchg ebx, r15d

#define XCHG_ECX_EAX xchg ecx, eax
#define XCHG_ECX_EBX xchg ecx, ebx
#define XCHG_ECX_ECX xchg ecx, ecx
#define XCHG_ECX_EDX xchg ecx, edx
#define XCHG_ECX_EDI xchg ecx, edi
#define XCHG_ECX_ESI xchg ecx, esi
#define XCHG_ECX_EBP xchg ecx, ebp
#define XCHG_ECX_ESP xchg ecx, esp
#define XCHG_ECX_R8D xchg ecx, r8d
#define XCHG_ECX_R9D xchg ecx, r9d
#define XCHG_ECX_R10D xchg ecx, r10d
#define XCHG_ECX_R11D xchg ecx, r11d
#define XCHG_ECX_R12D xchg ecx, r12d
#define XCHG_ECX_R13D xchg ecx, r13d
#define XCHG_ECX_R14D xchg ecx, r14d
#define XCHG_ECX_R15D xchg ecx, r15d

#define XCHG_EDX_EAX xchg edx, eax
#define XCHG_EDX_EBX xchg edx, ebx
#define XCHG_EDX_ECX xchg edx, ecx
#define XCHG_EDX_EDX xchg edx, edx
#define XCHG_EDX_EDI xchg edx, edi
#define XCHG_EDX_ESI xchg edx, esi
#define XCHG_EDX_EBP xchg edx, ebp
#define XCHG_EDX_ESP xchg edx, esp
#define XCHG_EDX_R8D xchg edx, r8d
#define XCHG_EDX_R9D xchg edx, r9d
#define XCHG_EDX_R10D xchg edx, r10d
#define XCHG_EDX_R11D xchg edx, r11d
#define XCHG_EDX_R12D xchg edx, r12d
#define XCHG_EDX_R13D xchg edx, r13d
#define XCHG_EDX_R14D xchg edx, r14d
#define XCHG_EDX_R15D xchg edx, r15d

#define XCHG_EDI_EAX xchg edi, eax
#define XCHG_EDI_EBX xchg edi, ebx
#define XCHG_EDI_ECX xchg edi, ecx
#define XCHG_EDI_EDX xchg edi, edx
#define XCHG_EDI_EDI xchg edi, edi
#define XCHG_EDI_ESI xchg edi, esi
#define XCHG_EDI_EBP xchg edi, ebp
#define XCHG_EDI_ESP xchg edi, esp
#define XCHG_EDI_R8D xchg edi, r8d
#define XCHG_EDI_R9D xchg edi, r9d
#define XCHG_EDI_R10D xchg edi, r10d
#define XCHG_EDI_R11D xchg edi, r11d
#define XCHG_EDI_R12D xchg edi, r12d
#define XCHG_EDI_R13D xchg edi, r13d
#define XCHG_EDI_R14D xchg edi, r14d
#define XCHG_EDI_R15D xchg edi, r15d

#define XCHG_ESI_EAX xchg esi, eax
#define XCHG_ESI_EBX xchg esi, ebx
#define XCHG_ESI_ECX xchg esi, ecx
#define XCHG_ESI_EDX xchg esi, edx
#define XCHG_ESI_EDI xchg esi, edi
#define XCHG_ESI_ESI xchg esi, esi
#define XCHG_ESI_EBP xchg esi, ebp
#define XCHG_ESI_ESP xchg esi, esp
#define XCHG_ESI_R8D xchg esi, r8d
#define XCHG_ESI_R9D xchg esi, r9d
#define XCHG_ESI_R10D xchg esi, r10d
#define XCHG_ESI_R11D xchg esi, r11d
#define XCHG_ESI_R12D xchg esi, r12d
#define XCHG_ESI_R13D xchg esi, r13d
#define XCHG_ESI_R14D xchg esi, r14d
#define XCHG_ESI_R15D xchg esi, r15d

#define XCHG_EBP_EAX xchg ebp, eax
#define XCHG_EBP_EBX xchg ebp, ebx
#define XCHG_EBP_ECX xchg ebp, ecx
#define XCHG_EBP_EDX xchg ebp, edx
#define XCHG_EBP_EDI xchg ebp, edi
#define XCHG_EBP_ESI xchg ebp, esi
#define XCHG_EBP_EBP xchg ebp, ebp
#define XCHG_EBP_ESP xchg ebp, esp
#define XCHG_EBP_R8D xchg ebp, r8d
#define XCHG_EBP_R9D xchg ebp, r9d
#define XCHG_EBP_R10D xchg ebp, r10d
#define XCHG_EBP_R11D xchg ebp, r11d
#define XCHG_EBP_R12D xchg ebp, r12d
#define XCHG_EBP_R13D xchg ebp, r13d
#define XCHG_EBP_R14D xchg ebp, r14d
#define XCHG_EBP_R15D xchg ebp, r15d

#define XCHG_ESP_EAX xchg esp, eax
#define XCHG_ESP_EBX xchg esp, ebx
#define XCHG_ESP_ECX xchg esp, ecx
#define XCHG_ESP_EDX xchg esp, edx
#define XCHG_ESP_EDI xchg esp, edi
#define XCHG_ESP_ESI xchg esp, esi
#define XCHG_ESP_EBP xchg esp, ebp
#define XCHG_ESP_ESP xchg esp, esp
#define XCHG_ESP_R8D xchg esp, r8d
#define XCHG_ESP_R9D xchg esp, r9d
#define XCHG_ESP_R10D xchg esp, r10d
#define XCHG_ESP_R11D xchg esp, r11d
#define XCHG_ESP_R12D xchg esp, r12d
#define XCHG_ESP_R13D xchg esp, r13d
#define XCHG_ESP_R14D xchg esp, r14d
#define XCHG_ESP_R15D xchg esp, r15d

#define XCHG_R8D_EAX xchg r8d, eax
#define XCHG_R8D_EBX xchg r8d, ebx
#define XCHG_R8D_ECX xchg r8d, ecx
#define XCHG_R8D_EDX xchg r8d, edx
#define XCHG_R8D_EDI xchg r8d, edi
#define XCHG_R8D_ESI xchg r8d, esi
#define XCHG_R8D_EBP xchg r8d, ebp
#define XCHG_R8D_ESP xchg r8d, esp
#define XCHG_R8D_R8D xchg r8d, r8d
#define XCHG_R8D_R9D xchg r8d, r9d
#define XCHG_R8D_R10D xchg r8d, r10d
#define XCHG_R8D_R11D xchg r8d, r11d
#define XCHG_R8D_R12D xchg r8d, r12d
#define XCHG_R8D_R13D xchg r8d, r13d
#define XCHG_R8D_R14D xchg r8d, r14d
#define XCHG_R8D_R15D xchg r8d, r15d

#define XCHG_R9D_EAX xchg r9d, eax
#define XCHG_R9D_EBX xchg r9d, ebx
#define XCHG_R9D_ECX xchg r9d, ecx
#define XCHG_R9D_EDX xchg r9d, edx
#define XCHG_R9D_EDI xchg r9d, edi
#define XCHG_R9D_ESI xchg r9d, esi
#define XCHG_R9D_EBP xchg r9d, ebp
#define XCHG_R9D_ESP xchg r9d, esp
#define XCHG_R9D_R8D xchg r9d, r8d
#define XCHG_R9D_R9D xchg r9d, r9d
#define XCHG_R9D_R10D xchg r9d, r10d
#define XCHG_R9D_R11D xchg r9d, r11d
#define XCHG_R9D_R12D xchg r9d, r12d
#define XCHG_R9D_R13D xchg r9d, r13d
#define XCHG_R9D_R14D xchg r9d, r14d
#define XCHG_R9D_R15D xchg r9d, r15d

#define XCHG_R10D_EAX xchg r10d, eax
#define XCHG_R10D_EBX xchg r10d, ebx
#define XCHG_R10D_ECX xchg r10d, ecx
#define XCHG_R10D_EDX xchg r10d, edx
#define XCHG_R10D_EDI xchg r10d, edi
#define XCHG_R10D_ESI xchg r10d, esi
#define XCHG_R10D_EBP xchg r10d, ebp
#define XCHG_R10D_ESP xchg r10d, esp
#define XCHG_R10D_R8D xchg r10d, r8d
#define XCHG_R10D_R9D xchg r10d, r9d
#define XCHG_R10D_R10D xchg r10d, r10d
#define XCHG_R10D_R11D xchg r10d, r11d
#define XCHG_R10D_R12D xchg r10d, r12d
#define XCHG_R10D_R13D xchg r10d, r13d
#define XCHG_R10D_R14D xchg r10d, r14d
#define XCHG_R10D_R15D xchg r10d, r15d

#define XCHG_R11D_EAX xchg r11d, eax
#define XCHG_R11D_EBX xchg r11d, ebx
#define XCHG_R11D_ECX xchg r11d, ecx
#define XCHG_R11D_EDX xchg r11d, edx
#define XCHG_R11D_EDI xchg r11d, edi
#define XCHG_R11D_ESI xchg r11d, esi
#define XCHG_R11D_EBP xchg r11d, ebp
#define XCHG_R11D_ESP xchg r11d, esp
#define XCHG_R11D_R8D xchg r11d, r8d
#define XCHG_R11D_R9D xchg r11d, r9d
#define XCHG_R11D_R10D xchg r11d, r10d
#define XCHG_R11D_R11D xchg r11d, r11d
#define XCHG_R11D_R12D xchg r11d, r12d
#define XCHG_R11D_R13D xchg r11d, r13d
#define XCHG_R11D_R14D xchg r11d, r14d
#define XCHG_R11D_R15D xchg r11d, r15d

#define XCHG_R12D_EAX xchg r12d, eax
#define XCHG_R12D_EBX xchg r12d, ebx
#define XCHG_R12D_ECX xchg r12d, ecx
#define XCHG_R12D_EDX xchg r12d, edx
#define XCHG_R12D_EDI xchg r12d, edi
#define XCHG_R12D_ESI xchg r12d, esi
#define XCHG_R12D_EBP xchg r12d, ebp
#define XCHG_R12D_ESP xchg r12d, esp
#define XCHG_R12D_R8D xchg r12d, r8d
#define XCHG_R12D_R9D xchg r12d, r9d
#define XCHG_R12D_R10D xchg r12d, r10d
#define XCHG_R12D_R11D xchg r12d, r11d
#define XCHG_R12D_R12D xchg r12d, r12d
#define XCHG_R12D_R13D xchg r12d, r13d
#define XCHG_R12D_R14D xchg r12d, r14d
#define XCHG_R12D_R15D xchg r12d, r15d

#define XCHG_R13D_EAX xchg r13d, eax
#define XCHG_R13D_EBX xchg r13d, ebx
#define XCHG_R13D_ECX xchg r13d, ecx
#define XCHG_R13D_EDX xchg r13d, edx
#define XCHG_R13D_EDI xchg r13d, edi
#define XCHG_R13D_ESI xchg r13d, esi
#define XCHG_R13D_EBP xchg r13d, ebp
#define XCHG_R13D_ESP xchg r13d, esp
#define XCHG_R13D_R8D xchg r13d, r8d
#define XCHG_R13D_R9D xchg r13d, r9d
#define XCHG_R13D_R10D xchg r13d, r10d
#define XCHG_R13D_R11D xchg r13d, r11d
#define XCHG_R13D_R12D xchg r13d, r12d
#define XCHG_R13D_R13D xchg r13d, r13d
#define XCHG_R13D_R14D xchg r13d, r14d
#define XCHG_R13D_R15D xchg r13d, r15d

#define XCHG_R14D_EAX xchg r14d, eax
#define XCHG_R14D_EBX xchg r14d, ebx
#define XCHG_R14D_ECX xchg r14d, ecx
#define XCHG_R14D_EDX xchg r14d, edx
#define XCHG_R14D_EDI xchg r14d, edi
#define XCHG_R14D_ESI xchg r14d, esi
#define XCHG_R14D_EBP xchg r14d, ebp
#define XCHG_R14D_ESP xchg r14d, esp
#define XCHG_R14D_R8D xchg r14d, r8d
#define XCHG_R14D_R9D xchg r14d, r9d
#define XCHG_R14D_R10D xchg r14d, r10d
#define XCHG_R14D_R11D xchg r14d, r11d
#define XCHG_R14D_R12D xchg r14d, r12d
#define XCHG_R14D_R13D xchg r14d, r13d
#define XCHG_R14D_R14D xchg r14d, r14d
#define XCHG_R14D_R15D xchg r14d, r15d

#define XCHG_R15D_EAX xchg r15d, eax
#define XCHG_R15D_EBX xchg r15d, ebx
#define XCHG_R15D_ECX xchg r15d, ecx
#define XCHG_R15D_EDX xchg r15d, edx
#define XCHG_R15D_EDI xchg r15d, edi
#define XCHG_R15D_ESI xchg r15d, esi
#define XCHG_R15D_EBP xchg r15d, ebp
#define XCHG_R15D_ESP xchg r15d, esp
#define XCHG_R15D_R8D xchg r15d, r8d
#define XCHG_R15D_R9D xchg r15d, r9d
#define XCHG_R15D_R10D xchg r15d, r10d
#define XCHG_R15D_R11D xchg r15d, r11d
#define XCHG_R15D_R12D xchg r15d, r12d
#define XCHG_R15D_R13D xchg r15d, r13d
#define XCHG_R15D_R14D xchg r15d, r14d
#define XCHG_R15D_R15D xchg r15d, r15d
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
