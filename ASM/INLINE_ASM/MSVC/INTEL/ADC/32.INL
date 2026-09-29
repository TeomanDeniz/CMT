#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************ [v] 32-BIT REGISTERS [v] ************************ */
#ifdef __SYSTEM_32_BIT__
#define ADC_EAX_EAX adc eax, eax
#define ADC_EAX_EBX adc eax, ebx
#define ADC_EAX_ECX adc eax, ecx
#define ADC_EAX_EDX adc eax, edx
#define ADC_EAX_EDI adc eax, edi
#define ADC_EAX_ESI adc eax, esi
#define ADC_EAX_EBP adc eax, ebp
#define ADC_EAX_ESP adc eax, esp

#define ADC_EBX_EAX adc ebx, eax
#define ADC_EBX_EBX adc ebx, ebx
#define ADC_EBX_ECX adc ebx, ecx
#define ADC_EBX_EDX adc ebx, edx
#define ADC_EBX_EDI adc ebx, edi
#define ADC_EBX_ESI adc ebx, esi
#define ADC_EBX_EBP adc ebx, ebp
#define ADC_EBX_ESP adc ebx, esp

#define ADC_ECX_EAX adc ecx, eax
#define ADC_ECX_EBX adc ecx, ebx
#define ADC_ECX_ECX adc ecx, ecx
#define ADC_ECX_EDX adc ecx, edx
#define ADC_ECX_EDI adc ecx, edi
#define ADC_ECX_ESI adc ecx, esi
#define ADC_ECX_EBP adc ecx, ebp
#define ADC_ECX_ESP adc ecx, esp

#define ADC_EDX_EAX adc edx, eax
#define ADC_EDX_EBX adc edx, ebx
#define ADC_EDX_ECX adc edx, ecx
#define ADC_EDX_EDX adc edx, edx
#define ADC_EDX_EDI adc edx, edi
#define ADC_EDX_ESI adc edx, esi
#define ADC_EDX_EBP adc edx, ebp
#define ADC_EDX_ESP adc edx, esp

#define ADC_EDI_EAX adc edi, eax
#define ADC_EDI_EBX adc edi, ebx
#define ADC_EDI_ECX adc edi, ecx
#define ADC_EDI_EDX adc edi, edx
#define ADC_EDI_EDI adc edi, edi
#define ADC_EDI_ESI adc edi, esi
#define ADC_EDI_EBP adc edi, ebp
#define ADC_EDI_ESP adc edi, esp

#define ADC_ESI_EAX adc esi, eax
#define ADC_ESI_EBX adc esi, ebx
#define ADC_ESI_ECX adc esi, ecx
#define ADC_ESI_EDX adc esi, edx
#define ADC_ESI_EDI adc esi, edi
#define ADC_ESI_ESI adc esi, esi
#define ADC_ESI_EBP adc esi, ebp
#define ADC_ESI_ESP adc esi, esp

#define ADC_EBP_EAX adc ebp, eax
#define ADC_EBP_EBX adc ebp, ebx
#define ADC_EBP_ECX adc ebp, ecx
#define ADC_EBP_EDX adc ebp, edx
#define ADC_EBP_EDI adc ebp, edi
#define ADC_EBP_ESI adc ebp, esi
#define ADC_EBP_EBP adc ebp, ebp
#define ADC_EBP_ESP adc ebp, esp

#define ADC_ESP_EAX adc esp, eax
#define ADC_ESP_EBX adc esp, ebx
#define ADC_ESP_ECX adc esp, ecx
#define ADC_ESP_EDX adc esp, edx
#define ADC_ESP_EDI adc esp, edi
#define ADC_ESP_ESI adc esp, esi
#define ADC_ESP_EBP adc esp, ebp
#define ADC_ESP_ESP adc esp, esp

#define ADC_EAX_(VALUE) adc eax, VALUE
#define ADC_EBX_(VALUE) adc ebx, VALUE
#define ADC_ECX_(VALUE) adc ecx, VALUE
#define ADC_EDX_(VALUE) adc edx, VALUE
#define ADC_EDI_(VALUE) adc edi, VALUE
#define ADC_ESI_(VALUE) adc esi, VALUE
#define ADC_EBP_(VALUE) adc ebp, VALUE
#define ADC_ESP_(VALUE) adc esp, VALUE
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define ADC_EAX_EAX adc eax, eax
#define ADC_EAX_EBX adc eax, ebx
#define ADC_EAX_ECX adc eax, ecx
#define ADC_EAX_EDX adc eax, edx
#define ADC_EAX_EDI adc eax, edi
#define ADC_EAX_ESI adc eax, esi
#define ADC_EAX_EBP adc eax, ebp
#define ADC_EAX_ESP adc eax, esp
#define ADC_EAX_R8D adc eax, r8d
#define ADC_EAX_R9D adc eax, r9d
#define ADC_EAX_R10D adc eax, r10d
#define ADC_EAX_R11D adc eax, r11d
#define ADC_EAX_R12D adc eax, r12d
#define ADC_EAX_R13D adc eax, r13d
#define ADC_EAX_R14D adc eax, r14d
#define ADC_EAX_R15D adc eax, r15d

#define ADC_EBX_EAX adc ebx, eax
#define ADC_EBX_EBX adc ebx, ebx
#define ADC_EBX_ECX adc ebx, ecx
#define ADC_EBX_EDX adc ebx, edx
#define ADC_EBX_EDI adc ebx, edi
#define ADC_EBX_ESI adc ebx, esi
#define ADC_EBX_EBP adc ebx, ebp
#define ADC_EBX_ESP adc ebx, esp
#define ADC_EBX_R8D adc ebx, r8d
#define ADC_EBX_R9D adc ebx, r9d
#define ADC_EBX_R10D adc ebx, r10d
#define ADC_EBX_R11D adc ebx, r11d
#define ADC_EBX_R12D adc ebx, r12d
#define ADC_EBX_R13D adc ebx, r13d
#define ADC_EBX_R14D adc ebx, r14d
#define ADC_EBX_R15D adc ebx, r15d

#define ADC_ECX_EAX adc ecx, eax
#define ADC_ECX_EBX adc ecx, ebx
#define ADC_ECX_ECX adc ecx, ecx
#define ADC_ECX_EDX adc ecx, edx
#define ADC_ECX_EDI adc ecx, edi
#define ADC_ECX_ESI adc ecx, esi
#define ADC_ECX_EBP adc ecx, ebp
#define ADC_ECX_ESP adc ecx, esp
#define ADC_ECX_R8D adc ecx, r8d
#define ADC_ECX_R9D adc ecx, r9d
#define ADC_ECX_R10D adc ecx, r10d
#define ADC_ECX_R11D adc ecx, r11d
#define ADC_ECX_R12D adc ecx, r12d
#define ADC_ECX_R13D adc ecx, r13d
#define ADC_ECX_R14D adc ecx, r14d
#define ADC_ECX_R15D adc ecx, r15d

#define ADC_EDX_EAX adc edx, eax
#define ADC_EDX_EBX adc edx, ebx
#define ADC_EDX_ECX adc edx, ecx
#define ADC_EDX_EDX adc edx, edx
#define ADC_EDX_EDI adc edx, edi
#define ADC_EDX_ESI adc edx, esi
#define ADC_EDX_EBP adc edx, ebp
#define ADC_EDX_ESP adc edx, esp
#define ADC_EDX_R8D adc edx, r8d
#define ADC_EDX_R9D adc edx, r9d
#define ADC_EDX_R10D adc edx, r10d
#define ADC_EDX_R11D adc edx, r11d
#define ADC_EDX_R12D adc edx, r12d
#define ADC_EDX_R13D adc edx, r13d
#define ADC_EDX_R14D adc edx, r14d
#define ADC_EDX_R15D adc edx, r15d

#define ADC_EDI_EAX adc edi, eax
#define ADC_EDI_EBX adc edi, ebx
#define ADC_EDI_ECX adc edi, ecx
#define ADC_EDI_EDX adc edi, edx
#define ADC_EDI_EDI adc edi, edi
#define ADC_EDI_ESI adc edi, esi
#define ADC_EDI_EBP adc edi, ebp
#define ADC_EDI_ESP adc edi, esp
#define ADC_EDI_R8D adc edi, r8d
#define ADC_EDI_R9D adc edi, r9d
#define ADC_EDI_R10D adc edi, r10d
#define ADC_EDI_R11D adc edi, r11d
#define ADC_EDI_R12D adc edi, r12d
#define ADC_EDI_R13D adc edi, r13d
#define ADC_EDI_R14D adc edi, r14d
#define ADC_EDI_R15D adc edi, r15d

#define ADC_ESI_EAX adc esi, eax
#define ADC_ESI_EBX adc esi, ebx
#define ADC_ESI_ECX adc esi, ecx
#define ADC_ESI_EDX adc esi, edx
#define ADC_ESI_EDI adc esi, edi
#define ADC_ESI_ESI adc esi, esi
#define ADC_ESI_EBP adc esi, ebp
#define ADC_ESI_ESP adc esi, esp
#define ADC_ESI_R8D adc esi, r8d
#define ADC_ESI_R9D adc esi, r9d
#define ADC_ESI_R10D adc esi, r10d
#define ADC_ESI_R11D adc esi, r11d
#define ADC_ESI_R12D adc esi, r12d
#define ADC_ESI_R13D adc esi, r13d
#define ADC_ESI_R14D adc esi, r14d
#define ADC_ESI_R15D adc esi, r15d

#define ADC_EBP_EAX adc ebp, eax
#define ADC_EBP_EBX adc ebp, ebx
#define ADC_EBP_ECX adc ebp, ecx
#define ADC_EBP_EDX adc ebp, edx
#define ADC_EBP_EDI adc ebp, edi
#define ADC_EBP_ESI adc ebp, esi
#define ADC_EBP_EBP adc ebp, ebp
#define ADC_EBP_ESP adc ebp, esp
#define ADC_EBP_R8D adc ebp, r8d
#define ADC_EBP_R9D adc ebp, r9d
#define ADC_EBP_R10D adc ebp, r10d
#define ADC_EBP_R11D adc ebp, r11d
#define ADC_EBP_R12D adc ebp, r12d
#define ADC_EBP_R13D adc ebp, r13d
#define ADC_EBP_R14D adc ebp, r14d
#define ADC_EBP_R15D adc ebp, r15d

#define ADC_ESP_EAX adc esp, eax
#define ADC_ESP_EBX adc esp, ebx
#define ADC_ESP_ECX adc esp, ecx
#define ADC_ESP_EDX adc esp, edx
#define ADC_ESP_EDI adc esp, edi
#define ADC_ESP_ESI adc esp, esi
#define ADC_ESP_EBP adc esp, ebp
#define ADC_ESP_ESP adc esp, esp
#define ADC_ESP_R8D adc esp, r8d
#define ADC_ESP_R9D adc esp, r9d
#define ADC_ESP_R10D adc esp, r10d
#define ADC_ESP_R11D adc esp, r11d
#define ADC_ESP_R12D adc esp, r12d
#define ADC_ESP_R13D adc esp, r13d
#define ADC_ESP_R14D adc esp, r14d
#define ADC_ESP_R15D adc esp, r15d

#define ADC_R8D_EAX adc r8d, eax
#define ADC_R8D_EBX adc r8d, ebx
#define ADC_R8D_ECX adc r8d, ecx
#define ADC_R8D_EDX adc r8d, edx
#define ADC_R8D_EDI adc r8d, edi
#define ADC_R8D_ESI adc r8d, esi
#define ADC_R8D_EBP adc r8d, ebp
#define ADC_R8D_ESP adc r8d, esp
#define ADC_R8D_R8D adc r8d, r8d
#define ADC_R8D_R9D adc r8d, r9d
#define ADC_R8D_R10D adc r8d, r10d
#define ADC_R8D_R11D adc r8d, r11d
#define ADC_R8D_R12D adc r8d, r12d
#define ADC_R8D_R13D adc r8d, r13d
#define ADC_R8D_R14D adc r8d, r14d
#define ADC_R8D_R15D adc r8d, r15d

#define ADC_R9D_EAX adc r9d, eax
#define ADC_R9D_EBX adc r9d, ebx
#define ADC_R9D_ECX adc r9d, ecx
#define ADC_R9D_EDX adc r9d, edx
#define ADC_R9D_EDI adc r9d, edi
#define ADC_R9D_ESI adc r9d, esi
#define ADC_R9D_EBP adc r9d, ebp
#define ADC_R9D_ESP adc r9d, esp
#define ADC_R9D_R8D adc r9d, r8d
#define ADC_R9D_R9D adc r9d, r9d
#define ADC_R9D_R10D adc r9d, r10d
#define ADC_R9D_R11D adc r9d, r11d
#define ADC_R9D_R12D adc r9d, r12d
#define ADC_R9D_R13D adc r9d, r13d
#define ADC_R9D_R14D adc r9d, r14d
#define ADC_R9D_R15D adc r9d, r15d

#define ADC_R10D_EAX adc r10d, eax
#define ADC_R10D_EBX adc r10d, ebx
#define ADC_R10D_ECX adc r10d, ecx
#define ADC_R10D_EDX adc r10d, edx
#define ADC_R10D_EDI adc r10d, edi
#define ADC_R10D_ESI adc r10d, esi
#define ADC_R10D_EBP adc r10d, ebp
#define ADC_R10D_ESP adc r10d, esp
#define ADC_R10D_R8D adc r10d, r8d
#define ADC_R10D_R9D adc r10d, r9d
#define ADC_R10D_R10D adc r10d, r10d
#define ADC_R10D_R11D adc r10d, r11d
#define ADC_R10D_R12D adc r10d, r12d
#define ADC_R10D_R13D adc r10d, r13d
#define ADC_R10D_R14D adc r10d, r14d
#define ADC_R10D_R15D adc r10d, r15d

#define ADC_R11D_EAX adc r11d, eax
#define ADC_R11D_EBX adc r11d, ebx
#define ADC_R11D_ECX adc r11d, ecx
#define ADC_R11D_EDX adc r11d, edx
#define ADC_R11D_EDI adc r11d, edi
#define ADC_R11D_ESI adc r11d, esi
#define ADC_R11D_EBP adc r11d, ebp
#define ADC_R11D_ESP adc r11d, esp
#define ADC_R11D_R8D adc r11d, r8d
#define ADC_R11D_R9D adc r11d, r9d
#define ADC_R11D_R10D adc r11d, r10d
#define ADC_R11D_R11D adc r11d, r11d
#define ADC_R11D_R12D adc r11d, r12d
#define ADC_R11D_R13D adc r11d, r13d
#define ADC_R11D_R14D adc r11d, r14d
#define ADC_R11D_R15D adc r11d, r15d

#define ADC_R12D_EAX adc r12d, eax
#define ADC_R12D_EBX adc r12d, ebx
#define ADC_R12D_ECX adc r12d, ecx
#define ADC_R12D_EDX adc r12d, edx
#define ADC_R12D_EDI adc r12d, edi
#define ADC_R12D_ESI adc r12d, esi
#define ADC_R12D_EBP adc r12d, ebp
#define ADC_R12D_ESP adc r12d, esp
#define ADC_R12D_R8D adc r12d, r8d
#define ADC_R12D_R9D adc r12d, r9d
#define ADC_R12D_R10D adc r12d, r10d
#define ADC_R12D_R11D adc r12d, r11d
#define ADC_R12D_R12D adc r12d, r12d
#define ADC_R12D_R13D adc r12d, r13d
#define ADC_R12D_R14D adc r12d, r14d
#define ADC_R12D_R15D adc r12d, r15d

#define ADC_R13D_EAX adc r13d, eax
#define ADC_R13D_EBX adc r13d, ebx
#define ADC_R13D_ECX adc r13d, ecx
#define ADC_R13D_EDX adc r13d, edx
#define ADC_R13D_EDI adc r13d, edi
#define ADC_R13D_ESI adc r13d, esi
#define ADC_R13D_EBP adc r13d, ebp
#define ADC_R13D_ESP adc r13d, esp
#define ADC_R13D_R8D adc r13d, r8d
#define ADC_R13D_R9D adc r13d, r9d
#define ADC_R13D_R10D adc r13d, r10d
#define ADC_R13D_R11D adc r13d, r11d
#define ADC_R13D_R12D adc r13d, r12d
#define ADC_R13D_R13D adc r13d, r13d
#define ADC_R13D_R14D adc r13d, r14d
#define ADC_R13D_R15D adc r13d, r15d

#define ADC_R14D_EAX adc r14d, eax
#define ADC_R14D_EBX adc r14d, ebx
#define ADC_R14D_ECX adc r14d, ecx
#define ADC_R14D_EDX adc r14d, edx
#define ADC_R14D_EDI adc r14d, edi
#define ADC_R14D_ESI adc r14d, esi
#define ADC_R14D_EBP adc r14d, ebp
#define ADC_R14D_ESP adc r14d, esp
#define ADC_R14D_R8D adc r14d, r8d
#define ADC_R14D_R9D adc r14d, r9d
#define ADC_R14D_R10D adc r14d, r10d
#define ADC_R14D_R11D adc r14d, r11d
#define ADC_R14D_R12D adc r14d, r12d
#define ADC_R14D_R13D adc r14d, r13d
#define ADC_R14D_R14D adc r14d, r14d
#define ADC_R14D_R15D adc r14d, r15d

#define ADC_R15D_EAX adc r15d, eax
#define ADC_R15D_EBX adc r15d, ebx
#define ADC_R15D_ECX adc r15d, ecx
#define ADC_R15D_EDX adc r15d, edx
#define ADC_R15D_EDI adc r15d, edi
#define ADC_R15D_ESI adc r15d, esi
#define ADC_R15D_EBP adc r15d, ebp
#define ADC_R15D_ESP adc r15d, esp
#define ADC_R15D_R8D adc r15d, r8d
#define ADC_R15D_R9D adc r15d, r9d
#define ADC_R15D_R10D adc r15d, r10d
#define ADC_R15D_R11D adc r15d, r11d
#define ADC_R15D_R12D adc r15d, r12d
#define ADC_R15D_R13D adc r15d, r13d
#define ADC_R15D_R14D adc r15d, r14d
#define ADC_R15D_R15D adc r15d, r15d

#define ADC_EAX_(VALUE) adc eax, VALUE
#define ADC_EBX_(VALUE) adc ebx, VALUE
#define ADC_ECX_(VALUE) adc ecx, VALUE
#define ADC_EDX_(VALUE) adc edx, VALUE
#define ADC_EDI_(VALUE) adc edi, VALUE
#define ADC_ESI_(VALUE) adc esi, VALUE
#define ADC_EBP_(VALUE) adc ebp, VALUE
#define ADC_ESP_(VALUE) adc esp, VALUE
#define ADC_R8D_(VALUE) adc r8d, VALUE
#define ADC_R9D_(VALUE) adc r9d, VALUE
#define ADC_R10D_(VALUE) adc r10d, VALUE
#define ADC_R11D_(VALUE) adc r11d, VALUE
#define ADC_R12D_(VALUE) adc r12d, VALUE
#define ADC_R13D_(VALUE) adc r13d, VALUE
#define ADC_R14D_(VALUE) adc r14d, VALUE
#define ADC_R15D_(VALUE) adc r15d, VALUE
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
