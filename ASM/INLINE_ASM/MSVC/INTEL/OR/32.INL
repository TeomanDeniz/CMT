#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************ [v] 32-BIT REGISTERS [v] ************************ */
#ifdef __SYSTEM_32_BIT__
#define OR_EAX_EAX or eax, eax
#define OR_EAX_EBX or eax, ebx
#define OR_EAX_ECX or eax, ecx
#define OR_EAX_EDX or eax, edx
#define OR_EAX_EDI or eax, edi
#define OR_EAX_ESI or eax, esi
#define OR_EAX_EBP or eax, ebp
#define OR_EAX_ESP or eax, esp

#define OR_EBX_EAX or ebx, eax
#define OR_EBX_EBX or ebx, ebx
#define OR_EBX_ECX or ebx, ecx
#define OR_EBX_EDX or ebx, edx
#define OR_EBX_EDI or ebx, edi
#define OR_EBX_ESI or ebx, esi
#define OR_EBX_EBP or ebx, ebp
#define OR_EBX_ESP or ebx, esp

#define OR_ECX_EAX or ecx, eax
#define OR_ECX_EBX or ecx, ebx
#define OR_ECX_ECX or ecx, ecx
#define OR_ECX_EDX or ecx, edx
#define OR_ECX_EDI or ecx, edi
#define OR_ECX_ESI or ecx, esi
#define OR_ECX_EBP or ecx, ebp
#define OR_ECX_ESP or ecx, esp

#define OR_EDX_EAX or edx, eax
#define OR_EDX_EBX or edx, ebx
#define OR_EDX_ECX or edx, ecx
#define OR_EDX_EDX or edx, edx
#define OR_EDX_EDI or edx, edi
#define OR_EDX_ESI or edx, esi
#define OR_EDX_EBP or edx, ebp
#define OR_EDX_ESP or edx, esp

#define OR_EDI_EAX or edi, eax
#define OR_EDI_EBX or edi, ebx
#define OR_EDI_ECX or edi, ecx
#define OR_EDI_EDX or edi, edx
#define OR_EDI_EDI or edi, edi
#define OR_EDI_ESI or edi, esi
#define OR_EDI_EBP or edi, ebp
#define OR_EDI_ESP or edi, esp

#define OR_ESI_EAX or esi, eax
#define OR_ESI_EBX or esi, ebx
#define OR_ESI_ECX or esi, ecx
#define OR_ESI_EDX or esi, edx
#define OR_ESI_EDI or esi, edi
#define OR_ESI_ESI or esi, esi
#define OR_ESI_EBP or esi, ebp
#define OR_ESI_ESP or esi, esp

#define OR_EBP_EAX or ebp, eax
#define OR_EBP_EBX or ebp, ebx
#define OR_EBP_ECX or ebp, ecx
#define OR_EBP_EDX or ebp, edx
#define OR_EBP_EDI or ebp, edi
#define OR_EBP_ESI or ebp, esi
#define OR_EBP_EBP or ebp, ebp
#define OR_EBP_ESP or ebp, esp

#define OR_ESP_EAX or esp, eax
#define OR_ESP_EBX or esp, ebx
#define OR_ESP_ECX or esp, ecx
#define OR_ESP_EDX or esp, edx
#define OR_ESP_EDI or esp, edi
#define OR_ESP_ESI or esp, esi
#define OR_ESP_EBP or esp, ebp
#define OR_ESP_ESP or esp, esp

#define OR_EAX_(VALUE) or eax, VALUE
#define OR_EBX_(VALUE) or ebx, VALUE
#define OR_ECX_(VALUE) or ecx, VALUE
#define OR_EDX_(VALUE) or edx, VALUE
#define OR_EDI_(VALUE) or edi, VALUE
#define OR_ESI_(VALUE) or esi, VALUE
#define OR_EBP_(VALUE) or ebp, VALUE
#define OR_ESP_(VALUE) or esp, VALUE
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define OR_EAX_EAX or eax, eax
#define OR_EAX_EBX or eax, ebx
#define OR_EAX_ECX or eax, ecx
#define OR_EAX_EDX or eax, edx
#define OR_EAX_EDI or eax, edi
#define OR_EAX_ESI or eax, esi
#define OR_EAX_EBP or eax, ebp
#define OR_EAX_ESP or eax, esp
#define OR_EAX_R8D or eax, r8d
#define OR_EAX_R9D or eax, r9d
#define OR_EAX_R10D or eax, r10d
#define OR_EAX_R11D or eax, r11d
#define OR_EAX_R12D or eax, r12d
#define OR_EAX_R13D or eax, r13d
#define OR_EAX_R14D or eax, r14d
#define OR_EAX_R15D or eax, r15d

#define OR_EBX_EAX or ebx, eax
#define OR_EBX_EBX or ebx, ebx
#define OR_EBX_ECX or ebx, ecx
#define OR_EBX_EDX or ebx, edx
#define OR_EBX_EDI or ebx, edi
#define OR_EBX_ESI or ebx, esi
#define OR_EBX_EBP or ebx, ebp
#define OR_EBX_ESP or ebx, esp
#define OR_EBX_R8D or ebx, r8d
#define OR_EBX_R9D or ebx, r9d
#define OR_EBX_R10D or ebx, r10d
#define OR_EBX_R11D or ebx, r11d
#define OR_EBX_R12D or ebx, r12d
#define OR_EBX_R13D or ebx, r13d
#define OR_EBX_R14D or ebx, r14d
#define OR_EBX_R15D or ebx, r15d

#define OR_ECX_EAX or ecx, eax
#define OR_ECX_EBX or ecx, ebx
#define OR_ECX_ECX or ecx, ecx
#define OR_ECX_EDX or ecx, edx
#define OR_ECX_EDI or ecx, edi
#define OR_ECX_ESI or ecx, esi
#define OR_ECX_EBP or ecx, ebp
#define OR_ECX_ESP or ecx, esp
#define OR_ECX_R8D or ecx, r8d
#define OR_ECX_R9D or ecx, r9d
#define OR_ECX_R10D or ecx, r10d
#define OR_ECX_R11D or ecx, r11d
#define OR_ECX_R12D or ecx, r12d
#define OR_ECX_R13D or ecx, r13d
#define OR_ECX_R14D or ecx, r14d
#define OR_ECX_R15D or ecx, r15d

#define OR_EDX_EAX or edx, eax
#define OR_EDX_EBX or edx, ebx
#define OR_EDX_ECX or edx, ecx
#define OR_EDX_EDX or edx, edx
#define OR_EDX_EDI or edx, edi
#define OR_EDX_ESI or edx, esi
#define OR_EDX_EBP or edx, ebp
#define OR_EDX_ESP or edx, esp
#define OR_EDX_R8D or edx, r8d
#define OR_EDX_R9D or edx, r9d
#define OR_EDX_R10D or edx, r10d
#define OR_EDX_R11D or edx, r11d
#define OR_EDX_R12D or edx, r12d
#define OR_EDX_R13D or edx, r13d
#define OR_EDX_R14D or edx, r14d
#define OR_EDX_R15D or edx, r15d

#define OR_EDI_EAX or edi, eax
#define OR_EDI_EBX or edi, ebx
#define OR_EDI_ECX or edi, ecx
#define OR_EDI_EDX or edi, edx
#define OR_EDI_EDI or edi, edi
#define OR_EDI_ESI or edi, esi
#define OR_EDI_EBP or edi, ebp
#define OR_EDI_ESP or edi, esp
#define OR_EDI_R8D or edi, r8d
#define OR_EDI_R9D or edi, r9d
#define OR_EDI_R10D or edi, r10d
#define OR_EDI_R11D or edi, r11d
#define OR_EDI_R12D or edi, r12d
#define OR_EDI_R13D or edi, r13d
#define OR_EDI_R14D or edi, r14d
#define OR_EDI_R15D or edi, r15d

#define OR_ESI_EAX or esi, eax
#define OR_ESI_EBX or esi, ebx
#define OR_ESI_ECX or esi, ecx
#define OR_ESI_EDX or esi, edx
#define OR_ESI_EDI or esi, edi
#define OR_ESI_ESI or esi, esi
#define OR_ESI_EBP or esi, ebp
#define OR_ESI_ESP or esi, esp
#define OR_ESI_R8D or esi, r8d
#define OR_ESI_R9D or esi, r9d
#define OR_ESI_R10D or esi, r10d
#define OR_ESI_R11D or esi, r11d
#define OR_ESI_R12D or esi, r12d
#define OR_ESI_R13D or esi, r13d
#define OR_ESI_R14D or esi, r14d
#define OR_ESI_R15D or esi, r15d

#define OR_EBP_EAX or ebp, eax
#define OR_EBP_EBX or ebp, ebx
#define OR_EBP_ECX or ebp, ecx
#define OR_EBP_EDX or ebp, edx
#define OR_EBP_EDI or ebp, edi
#define OR_EBP_ESI or ebp, esi
#define OR_EBP_EBP or ebp, ebp
#define OR_EBP_ESP or ebp, esp
#define OR_EBP_R8D or ebp, r8d
#define OR_EBP_R9D or ebp, r9d
#define OR_EBP_R10D or ebp, r10d
#define OR_EBP_R11D or ebp, r11d
#define OR_EBP_R12D or ebp, r12d
#define OR_EBP_R13D or ebp, r13d
#define OR_EBP_R14D or ebp, r14d
#define OR_EBP_R15D or ebp, r15d

#define OR_ESP_EAX or esp, eax
#define OR_ESP_EBX or esp, ebx
#define OR_ESP_ECX or esp, ecx
#define OR_ESP_EDX or esp, edx
#define OR_ESP_EDI or esp, edi
#define OR_ESP_ESI or esp, esi
#define OR_ESP_EBP or esp, ebp
#define OR_ESP_ESP or esp, esp
#define OR_ESP_R8D or esp, r8d
#define OR_ESP_R9D or esp, r9d
#define OR_ESP_R10D or esp, r10d
#define OR_ESP_R11D or esp, r11d
#define OR_ESP_R12D or esp, r12d
#define OR_ESP_R13D or esp, r13d
#define OR_ESP_R14D or esp, r14d
#define OR_ESP_R15D or esp, r15d

#define OR_R8D_EAX or r8d, eax
#define OR_R8D_EBX or r8d, ebx
#define OR_R8D_ECX or r8d, ecx
#define OR_R8D_EDX or r8d, edx
#define OR_R8D_EDI or r8d, edi
#define OR_R8D_ESI or r8d, esi
#define OR_R8D_EBP or r8d, ebp
#define OR_R8D_ESP or r8d, esp
#define OR_R8D_R8D or r8d, r8d
#define OR_R8D_R9D or r8d, r9d
#define OR_R8D_R10D or r8d, r10d
#define OR_R8D_R11D or r8d, r11d
#define OR_R8D_R12D or r8d, r12d
#define OR_R8D_R13D or r8d, r13d
#define OR_R8D_R14D or r8d, r14d
#define OR_R8D_R15D or r8d, r15d

#define OR_R9D_EAX or r9d, eax
#define OR_R9D_EBX or r9d, ebx
#define OR_R9D_ECX or r9d, ecx
#define OR_R9D_EDX or r9d, edx
#define OR_R9D_EDI or r9d, edi
#define OR_R9D_ESI or r9d, esi
#define OR_R9D_EBP or r9d, ebp
#define OR_R9D_ESP or r9d, esp
#define OR_R9D_R8D or r9d, r8d
#define OR_R9D_R9D or r9d, r9d
#define OR_R9D_R10D or r9d, r10d
#define OR_R9D_R11D or r9d, r11d
#define OR_R9D_R12D or r9d, r12d
#define OR_R9D_R13D or r9d, r13d
#define OR_R9D_R14D or r9d, r14d
#define OR_R9D_R15D or r9d, r15d

#define OR_R10D_EAX or r10d, eax
#define OR_R10D_EBX or r10d, ebx
#define OR_R10D_ECX or r10d, ecx
#define OR_R10D_EDX or r10d, edx
#define OR_R10D_EDI or r10d, edi
#define OR_R10D_ESI or r10d, esi
#define OR_R10D_EBP or r10d, ebp
#define OR_R10D_ESP or r10d, esp
#define OR_R10D_R8D or r10d, r8d
#define OR_R10D_R9D or r10d, r9d
#define OR_R10D_R10D or r10d, r10d
#define OR_R10D_R11D or r10d, r11d
#define OR_R10D_R12D or r10d, r12d
#define OR_R10D_R13D or r10d, r13d
#define OR_R10D_R14D or r10d, r14d
#define OR_R10D_R15D or r10d, r15d

#define OR_R11D_EAX or r11d, eax
#define OR_R11D_EBX or r11d, ebx
#define OR_R11D_ECX or r11d, ecx
#define OR_R11D_EDX or r11d, edx
#define OR_R11D_EDI or r11d, edi
#define OR_R11D_ESI or r11d, esi
#define OR_R11D_EBP or r11d, ebp
#define OR_R11D_ESP or r11d, esp
#define OR_R11D_R8D or r11d, r8d
#define OR_R11D_R9D or r11d, r9d
#define OR_R11D_R10D or r11d, r10d
#define OR_R11D_R11D or r11d, r11d
#define OR_R11D_R12D or r11d, r12d
#define OR_R11D_R13D or r11d, r13d
#define OR_R11D_R14D or r11d, r14d
#define OR_R11D_R15D or r11d, r15d

#define OR_R12D_EAX or r12d, eax
#define OR_R12D_EBX or r12d, ebx
#define OR_R12D_ECX or r12d, ecx
#define OR_R12D_EDX or r12d, edx
#define OR_R12D_EDI or r12d, edi
#define OR_R12D_ESI or r12d, esi
#define OR_R12D_EBP or r12d, ebp
#define OR_R12D_ESP or r12d, esp
#define OR_R12D_R8D or r12d, r8d
#define OR_R12D_R9D or r12d, r9d
#define OR_R12D_R10D or r12d, r10d
#define OR_R12D_R11D or r12d, r11d
#define OR_R12D_R12D or r12d, r12d
#define OR_R12D_R13D or r12d, r13d
#define OR_R12D_R14D or r12d, r14d
#define OR_R12D_R15D or r12d, r15d

#define OR_R13D_EAX or r13d, eax
#define OR_R13D_EBX or r13d, ebx
#define OR_R13D_ECX or r13d, ecx
#define OR_R13D_EDX or r13d, edx
#define OR_R13D_EDI or r13d, edi
#define OR_R13D_ESI or r13d, esi
#define OR_R13D_EBP or r13d, ebp
#define OR_R13D_ESP or r13d, esp
#define OR_R13D_R8D or r13d, r8d
#define OR_R13D_R9D or r13d, r9d
#define OR_R13D_R10D or r13d, r10d
#define OR_R13D_R11D or r13d, r11d
#define OR_R13D_R12D or r13d, r12d
#define OR_R13D_R13D or r13d, r13d
#define OR_R13D_R14D or r13d, r14d
#define OR_R13D_R15D or r13d, r15d

#define OR_R14D_EAX or r14d, eax
#define OR_R14D_EBX or r14d, ebx
#define OR_R14D_ECX or r14d, ecx
#define OR_R14D_EDX or r14d, edx
#define OR_R14D_EDI or r14d, edi
#define OR_R14D_ESI or r14d, esi
#define OR_R14D_EBP or r14d, ebp
#define OR_R14D_ESP or r14d, esp
#define OR_R14D_R8D or r14d, r8d
#define OR_R14D_R9D or r14d, r9d
#define OR_R14D_R10D or r14d, r10d
#define OR_R14D_R11D or r14d, r11d
#define OR_R14D_R12D or r14d, r12d
#define OR_R14D_R13D or r14d, r13d
#define OR_R14D_R14D or r14d, r14d
#define OR_R14D_R15D or r14d, r15d

#define OR_R15D_EAX or r15d, eax
#define OR_R15D_EBX or r15d, ebx
#define OR_R15D_ECX or r15d, ecx
#define OR_R15D_EDX or r15d, edx
#define OR_R15D_EDI or r15d, edi
#define OR_R15D_ESI or r15d, esi
#define OR_R15D_EBP or r15d, ebp
#define OR_R15D_ESP or r15d, esp
#define OR_R15D_R8D or r15d, r8d
#define OR_R15D_R9D or r15d, r9d
#define OR_R15D_R10D or r15d, r10d
#define OR_R15D_R11D or r15d, r11d
#define OR_R15D_R12D or r15d, r12d
#define OR_R15D_R13D or r15d, r13d
#define OR_R15D_R14D or r15d, r14d
#define OR_R15D_R15D or r15d, r15d

#define OR_EAX_(VALUE) or eax, VALUE
#define OR_EBX_(VALUE) or ebx, VALUE
#define OR_ECX_(VALUE) or ecx, VALUE
#define OR_EDX_(VALUE) or edx, VALUE
#define OR_EDI_(VALUE) or edi, VALUE
#define OR_ESI_(VALUE) or esi, VALUE
#define OR_EBP_(VALUE) or ebp, VALUE
#define OR_ESP_(VALUE) or esp, VALUE
#define OR_R8D_(VALUE) or r8d, VALUE
#define OR_R9D_(VALUE) or r9d, VALUE
#define OR_R10D_(VALUE) or r10d, VALUE
#define OR_R11D_(VALUE) or r11d, VALUE
#define OR_R12D_(VALUE) or r12d, VALUE
#define OR_R13D_(VALUE) or r13d, VALUE
#define OR_R14D_(VALUE) or r14d, VALUE
#define OR_R15D_(VALUE) or r15d, VALUE
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
