#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************ [v] 32-BIT REGISTERS [v] ************************ */
#ifdef __SYSTEM_32_BIT__
#define XOR_EAX_EAX xor eax, eax
#define XOR_EAX_EBX xor eax, ebx
#define XOR_EAX_ECX xor eax, ecx
#define XOR_EAX_EDX xor eax, edx
#define XOR_EAX_EDI xor eax, edi
#define XOR_EAX_ESI xor eax, esi
#define XOR_EAX_EBP xor eax, ebp
#define XOR_EAX_ESP xor eax, esp

#define XOR_EBX_EAX xor ebx, eax
#define XOR_EBX_EBX xor ebx, ebx
#define XOR_EBX_ECX xor ebx, ecx
#define XOR_EBX_EDX xor ebx, edx
#define XOR_EBX_EDI xor ebx, edi
#define XOR_EBX_ESI xor ebx, esi
#define XOR_EBX_EBP xor ebx, ebp
#define XOR_EBX_ESP xor ebx, esp

#define XOR_ECX_EAX xor ecx, eax
#define XOR_ECX_EBX xor ecx, ebx
#define XOR_ECX_ECX xor ecx, ecx
#define XOR_ECX_EDX xor ecx, edx
#define XOR_ECX_EDI xor ecx, edi
#define XOR_ECX_ESI xor ecx, esi
#define XOR_ECX_EBP xor ecx, ebp
#define XOR_ECX_ESP xor ecx, esp

#define XOR_EDX_EAX xor edx, eax
#define XOR_EDX_EBX xor edx, ebx
#define XOR_EDX_ECX xor edx, ecx
#define XOR_EDX_EDX xor edx, edx
#define XOR_EDX_EDI xor edx, edi
#define XOR_EDX_ESI xor edx, esi
#define XOR_EDX_EBP xor edx, ebp
#define XOR_EDX_ESP xor edx, esp

#define XOR_EDI_EAX xor edi, eax
#define XOR_EDI_EBX xor edi, ebx
#define XOR_EDI_ECX xor edi, ecx
#define XOR_EDI_EDX xor edi, edx
#define XOR_EDI_EDI xor edi, edi
#define XOR_EDI_ESI xor edi, esi
#define XOR_EDI_EBP xor edi, ebp
#define XOR_EDI_ESP xor edi, esp

#define XOR_ESI_EAX xor esi, eax
#define XOR_ESI_EBX xor esi, ebx
#define XOR_ESI_ECX xor esi, ecx
#define XOR_ESI_EDX xor esi, edx
#define XOR_ESI_EDI xor esi, edi
#define XOR_ESI_ESI xor esi, esi
#define XOR_ESI_EBP xor esi, ebp
#define XOR_ESI_ESP xor esi, esp

#define XOR_EBP_EAX xor ebp, eax
#define XOR_EBP_EBX xor ebp, ebx
#define XOR_EBP_ECX xor ebp, ecx
#define XOR_EBP_EDX xor ebp, edx
#define XOR_EBP_EDI xor ebp, edi
#define XOR_EBP_ESI xor ebp, esi
#define XOR_EBP_EBP xor ebp, ebp
#define XOR_EBP_ESP xor ebp, esp

#define XOR_ESP_EAX xor esp, eax
#define XOR_ESP_EBX xor esp, ebx
#define XOR_ESP_ECX xor esp, ecx
#define XOR_ESP_EDX xor esp, edx
#define XOR_ESP_EDI xor esp, edi
#define XOR_ESP_ESI xor esp, esi
#define XOR_ESP_EBP xor esp, ebp
#define XOR_ESP_ESP xor esp, esp

#define XOR_EAX_(VALUE) xor eax, VALUE
#define XOR_EBX_(VALUE) xor ebx, VALUE
#define XOR_ECX_(VALUE) xor ecx, VALUE
#define XOR_EDX_(VALUE) xor edx, VALUE
#define XOR_EDI_(VALUE) xor edi, VALUE
#define XOR_ESI_(VALUE) xor esi, VALUE
#define XOR_EBP_(VALUE) xor ebp, VALUE
#define XOR_ESP_(VALUE) xor esp, VALUE
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define XOR_EAX_EAX xor eax, eax
#define XOR_EAX_EBX xor eax, ebx
#define XOR_EAX_ECX xor eax, ecx
#define XOR_EAX_EDX xor eax, edx
#define XOR_EAX_EDI xor eax, edi
#define XOR_EAX_ESI xor eax, esi
#define XOR_EAX_EBP xor eax, ebp
#define XOR_EAX_ESP xor eax, esp
#define XOR_EAX_R8D xor eax, r8d
#define XOR_EAX_R9D xor eax, r9d
#define XOR_EAX_R10D xor eax, r10d
#define XOR_EAX_R11D xor eax, r11d
#define XOR_EAX_R12D xor eax, r12d
#define XOR_EAX_R13D xor eax, r13d
#define XOR_EAX_R14D xor eax, r14d
#define XOR_EAX_R15D xor eax, r15d

#define XOR_EBX_EAX xor ebx, eax
#define XOR_EBX_EBX xor ebx, ebx
#define XOR_EBX_ECX xor ebx, ecx
#define XOR_EBX_EDX xor ebx, edx
#define XOR_EBX_EDI xor ebx, edi
#define XOR_EBX_ESI xor ebx, esi
#define XOR_EBX_EBP xor ebx, ebp
#define XOR_EBX_ESP xor ebx, esp
#define XOR_EBX_R8D xor ebx, r8d
#define XOR_EBX_R9D xor ebx, r9d
#define XOR_EBX_R10D xor ebx, r10d
#define XOR_EBX_R11D xor ebx, r11d
#define XOR_EBX_R12D xor ebx, r12d
#define XOR_EBX_R13D xor ebx, r13d
#define XOR_EBX_R14D xor ebx, r14d
#define XOR_EBX_R15D xor ebx, r15d

#define XOR_ECX_EAX xor ecx, eax
#define XOR_ECX_EBX xor ecx, ebx
#define XOR_ECX_ECX xor ecx, ecx
#define XOR_ECX_EDX xor ecx, edx
#define XOR_ECX_EDI xor ecx, edi
#define XOR_ECX_ESI xor ecx, esi
#define XOR_ECX_EBP xor ecx, ebp
#define XOR_ECX_ESP xor ecx, esp
#define XOR_ECX_R8D xor ecx, r8d
#define XOR_ECX_R9D xor ecx, r9d
#define XOR_ECX_R10D xor ecx, r10d
#define XOR_ECX_R11D xor ecx, r11d
#define XOR_ECX_R12D xor ecx, r12d
#define XOR_ECX_R13D xor ecx, r13d
#define XOR_ECX_R14D xor ecx, r14d
#define XOR_ECX_R15D xor ecx, r15d

#define XOR_EDX_EAX xor edx, eax
#define XOR_EDX_EBX xor edx, ebx
#define XOR_EDX_ECX xor edx, ecx
#define XOR_EDX_EDX xor edx, edx
#define XOR_EDX_EDI xor edx, edi
#define XOR_EDX_ESI xor edx, esi
#define XOR_EDX_EBP xor edx, ebp
#define XOR_EDX_ESP xor edx, esp
#define XOR_EDX_R8D xor edx, r8d
#define XOR_EDX_R9D xor edx, r9d
#define XOR_EDX_R10D xor edx, r10d
#define XOR_EDX_R11D xor edx, r11d
#define XOR_EDX_R12D xor edx, r12d
#define XOR_EDX_R13D xor edx, r13d
#define XOR_EDX_R14D xor edx, r14d
#define XOR_EDX_R15D xor edx, r15d

#define XOR_EDI_EAX xor edi, eax
#define XOR_EDI_EBX xor edi, ebx
#define XOR_EDI_ECX xor edi, ecx
#define XOR_EDI_EDX xor edi, edx
#define XOR_EDI_EDI xor edi, edi
#define XOR_EDI_ESI xor edi, esi
#define XOR_EDI_EBP xor edi, ebp
#define XOR_EDI_ESP xor edi, esp
#define XOR_EDI_R8D xor edi, r8d
#define XOR_EDI_R9D xor edi, r9d
#define XOR_EDI_R10D xor edi, r10d
#define XOR_EDI_R11D xor edi, r11d
#define XOR_EDI_R12D xor edi, r12d
#define XOR_EDI_R13D xor edi, r13d
#define XOR_EDI_R14D xor edi, r14d
#define XOR_EDI_R15D xor edi, r15d

#define XOR_ESI_EAX xor esi, eax
#define XOR_ESI_EBX xor esi, ebx
#define XOR_ESI_ECX xor esi, ecx
#define XOR_ESI_EDX xor esi, edx
#define XOR_ESI_EDI xor esi, edi
#define XOR_ESI_ESI xor esi, esi
#define XOR_ESI_EBP xor esi, ebp
#define XOR_ESI_ESP xor esi, esp
#define XOR_ESI_R8D xor esi, r8d
#define XOR_ESI_R9D xor esi, r9d
#define XOR_ESI_R10D xor esi, r10d
#define XOR_ESI_R11D xor esi, r11d
#define XOR_ESI_R12D xor esi, r12d
#define XOR_ESI_R13D xor esi, r13d
#define XOR_ESI_R14D xor esi, r14d
#define XOR_ESI_R15D xor esi, r15d

#define XOR_EBP_EAX xor ebp, eax
#define XOR_EBP_EBX xor ebp, ebx
#define XOR_EBP_ECX xor ebp, ecx
#define XOR_EBP_EDX xor ebp, edx
#define XOR_EBP_EDI xor ebp, edi
#define XOR_EBP_ESI xor ebp, esi
#define XOR_EBP_EBP xor ebp, ebp
#define XOR_EBP_ESP xor ebp, esp
#define XOR_EBP_R8D xor ebp, r8d
#define XOR_EBP_R9D xor ebp, r9d
#define XOR_EBP_R10D xor ebp, r10d
#define XOR_EBP_R11D xor ebp, r11d
#define XOR_EBP_R12D xor ebp, r12d
#define XOR_EBP_R13D xor ebp, r13d
#define XOR_EBP_R14D xor ebp, r14d
#define XOR_EBP_R15D xor ebp, r15d

#define XOR_ESP_EAX xor esp, eax
#define XOR_ESP_EBX xor esp, ebx
#define XOR_ESP_ECX xor esp, ecx
#define XOR_ESP_EDX xor esp, edx
#define XOR_ESP_EDI xor esp, edi
#define XOR_ESP_ESI xor esp, esi
#define XOR_ESP_EBP xor esp, ebp
#define XOR_ESP_ESP xor esp, esp
#define XOR_ESP_R8D xor esp, r8d
#define XOR_ESP_R9D xor esp, r9d
#define XOR_ESP_R10D xor esp, r10d
#define XOR_ESP_R11D xor esp, r11d
#define XOR_ESP_R12D xor esp, r12d
#define XOR_ESP_R13D xor esp, r13d
#define XOR_ESP_R14D xor esp, r14d
#define XOR_ESP_R15D xor esp, r15d

#define XOR_R8D_EAX xor r8d, eax
#define XOR_R8D_EBX xor r8d, ebx
#define XOR_R8D_ECX xor r8d, ecx
#define XOR_R8D_EDX xor r8d, edx
#define XOR_R8D_EDI xor r8d, edi
#define XOR_R8D_ESI xor r8d, esi
#define XOR_R8D_EBP xor r8d, ebp
#define XOR_R8D_ESP xor r8d, esp
#define XOR_R8D_R8D xor r8d, r8d
#define XOR_R8D_R9D xor r8d, r9d
#define XOR_R8D_R10D xor r8d, r10d
#define XOR_R8D_R11D xor r8d, r11d
#define XOR_R8D_R12D xor r8d, r12d
#define XOR_R8D_R13D xor r8d, r13d
#define XOR_R8D_R14D xor r8d, r14d
#define XOR_R8D_R15D xor r8d, r15d

#define XOR_R9D_EAX xor r9d, eax
#define XOR_R9D_EBX xor r9d, ebx
#define XOR_R9D_ECX xor r9d, ecx
#define XOR_R9D_EDX xor r9d, edx
#define XOR_R9D_EDI xor r9d, edi
#define XOR_R9D_ESI xor r9d, esi
#define XOR_R9D_EBP xor r9d, ebp
#define XOR_R9D_ESP xor r9d, esp
#define XOR_R9D_R8D xor r9d, r8d
#define XOR_R9D_R9D xor r9d, r9d
#define XOR_R9D_R10D xor r9d, r10d
#define XOR_R9D_R11D xor r9d, r11d
#define XOR_R9D_R12D xor r9d, r12d
#define XOR_R9D_R13D xor r9d, r13d
#define XOR_R9D_R14D xor r9d, r14d
#define XOR_R9D_R15D xor r9d, r15d

#define XOR_R10D_EAX xor r10d, eax
#define XOR_R10D_EBX xor r10d, ebx
#define XOR_R10D_ECX xor r10d, ecx
#define XOR_R10D_EDX xor r10d, edx
#define XOR_R10D_EDI xor r10d, edi
#define XOR_R10D_ESI xor r10d, esi
#define XOR_R10D_EBP xor r10d, ebp
#define XOR_R10D_ESP xor r10d, esp
#define XOR_R10D_R8D xor r10d, r8d
#define XOR_R10D_R9D xor r10d, r9d
#define XOR_R10D_R10D xor r10d, r10d
#define XOR_R10D_R11D xor r10d, r11d
#define XOR_R10D_R12D xor r10d, r12d
#define XOR_R10D_R13D xor r10d, r13d
#define XOR_R10D_R14D xor r10d, r14d
#define XOR_R10D_R15D xor r10d, r15d

#define XOR_R11D_EAX xor r11d, eax
#define XOR_R11D_EBX xor r11d, ebx
#define XOR_R11D_ECX xor r11d, ecx
#define XOR_R11D_EDX xor r11d, edx
#define XOR_R11D_EDI xor r11d, edi
#define XOR_R11D_ESI xor r11d, esi
#define XOR_R11D_EBP xor r11d, ebp
#define XOR_R11D_ESP xor r11d, esp
#define XOR_R11D_R8D xor r11d, r8d
#define XOR_R11D_R9D xor r11d, r9d
#define XOR_R11D_R10D xor r11d, r10d
#define XOR_R11D_R11D xor r11d, r11d
#define XOR_R11D_R12D xor r11d, r12d
#define XOR_R11D_R13D xor r11d, r13d
#define XOR_R11D_R14D xor r11d, r14d
#define XOR_R11D_R15D xor r11d, r15d

#define XOR_R12D_EAX xor r12d, eax
#define XOR_R12D_EBX xor r12d, ebx
#define XOR_R12D_ECX xor r12d, ecx
#define XOR_R12D_EDX xor r12d, edx
#define XOR_R12D_EDI xor r12d, edi
#define XOR_R12D_ESI xor r12d, esi
#define XOR_R12D_EBP xor r12d, ebp
#define XOR_R12D_ESP xor r12d, esp
#define XOR_R12D_R8D xor r12d, r8d
#define XOR_R12D_R9D xor r12d, r9d
#define XOR_R12D_R10D xor r12d, r10d
#define XOR_R12D_R11D xor r12d, r11d
#define XOR_R12D_R12D xor r12d, r12d
#define XOR_R12D_R13D xor r12d, r13d
#define XOR_R12D_R14D xor r12d, r14d
#define XOR_R12D_R15D xor r12d, r15d

#define XOR_R13D_EAX xor r13d, eax
#define XOR_R13D_EBX xor r13d, ebx
#define XOR_R13D_ECX xor r13d, ecx
#define XOR_R13D_EDX xor r13d, edx
#define XOR_R13D_EDI xor r13d, edi
#define XOR_R13D_ESI xor r13d, esi
#define XOR_R13D_EBP xor r13d, ebp
#define XOR_R13D_ESP xor r13d, esp
#define XOR_R13D_R8D xor r13d, r8d
#define XOR_R13D_R9D xor r13d, r9d
#define XOR_R13D_R10D xor r13d, r10d
#define XOR_R13D_R11D xor r13d, r11d
#define XOR_R13D_R12D xor r13d, r12d
#define XOR_R13D_R13D xor r13d, r13d
#define XOR_R13D_R14D xor r13d, r14d
#define XOR_R13D_R15D xor r13d, r15d

#define XOR_R14D_EAX xor r14d, eax
#define XOR_R14D_EBX xor r14d, ebx
#define XOR_R14D_ECX xor r14d, ecx
#define XOR_R14D_EDX xor r14d, edx
#define XOR_R14D_EDI xor r14d, edi
#define XOR_R14D_ESI xor r14d, esi
#define XOR_R14D_EBP xor r14d, ebp
#define XOR_R14D_ESP xor r14d, esp
#define XOR_R14D_R8D xor r14d, r8d
#define XOR_R14D_R9D xor r14d, r9d
#define XOR_R14D_R10D xor r14d, r10d
#define XOR_R14D_R11D xor r14d, r11d
#define XOR_R14D_R12D xor r14d, r12d
#define XOR_R14D_R13D xor r14d, r13d
#define XOR_R14D_R14D xor r14d, r14d
#define XOR_R14D_R15D xor r14d, r15d

#define XOR_R15D_EAX xor r15d, eax
#define XOR_R15D_EBX xor r15d, ebx
#define XOR_R15D_ECX xor r15d, ecx
#define XOR_R15D_EDX xor r15d, edx
#define XOR_R15D_EDI xor r15d, edi
#define XOR_R15D_ESI xor r15d, esi
#define XOR_R15D_EBP xor r15d, ebp
#define XOR_R15D_ESP xor r15d, esp
#define XOR_R15D_R8D xor r15d, r8d
#define XOR_R15D_R9D xor r15d, r9d
#define XOR_R15D_R10D xor r15d, r10d
#define XOR_R15D_R11D xor r15d, r11d
#define XOR_R15D_R12D xor r15d, r12d
#define XOR_R15D_R13D xor r15d, r13d
#define XOR_R15D_R14D xor r15d, r14d
#define XOR_R15D_R15D xor r15d, r15d

#define XOR_EAX_(VALUE) xor eax, VALUE
#define XOR_EBX_(VALUE) xor ebx, VALUE
#define XOR_ECX_(VALUE) xor ecx, VALUE
#define XOR_EDX_(VALUE) xor edx, VALUE
#define XOR_EDI_(VALUE) xor edi, VALUE
#define XOR_ESI_(VALUE) xor esi, VALUE
#define XOR_EBP_(VALUE) xor ebp, VALUE
#define XOR_ESP_(VALUE) xor esp, VALUE
#define XOR_R8D_(VALUE) xor r8d, VALUE
#define XOR_R9D_(VALUE) xor r9d, VALUE
#define XOR_R10D_(VALUE) xor r10d, VALUE
#define XOR_R11D_(VALUE) xor r11d, VALUE
#define XOR_R12D_(VALUE) xor r12d, VALUE
#define XOR_R13D_(VALUE) xor r13d, VALUE
#define XOR_R14D_(VALUE) xor r14d, VALUE
#define XOR_R15D_(VALUE) xor r15d, VALUE
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
