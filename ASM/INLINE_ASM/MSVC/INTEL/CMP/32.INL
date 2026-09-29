#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************ [v] 32-BIT REGISTERS [v] ************************ */
#ifdef __SYSTEM_32_BIT__
#define CMP_EAX_EAX cmp eax, eax
#define CMP_EAX_EBX cmp eax, ebx
#define CMP_EAX_ECX cmp eax, ecx
#define CMP_EAX_EDX cmp eax, edx
#define CMP_EAX_EDI cmp eax, edi
#define CMP_EAX_ESI cmp eax, esi
#define CMP_EAX_EBP cmp eax, ebp
#define CMP_EAX_ESP cmp eax, esp

#define CMP_EBX_EAX cmp ebx, eax
#define CMP_EBX_EBX cmp ebx, ebx
#define CMP_EBX_ECX cmp ebx, ecx
#define CMP_EBX_EDX cmp ebx, edx
#define CMP_EBX_EDI cmp ebx, edi
#define CMP_EBX_ESI cmp ebx, esi
#define CMP_EBX_EBP cmp ebx, ebp
#define CMP_EBX_ESP cmp ebx, esp

#define CMP_ECX_EAX cmp ecx, eax
#define CMP_ECX_EBX cmp ecx, ebx
#define CMP_ECX_ECX cmp ecx, ecx
#define CMP_ECX_EDX cmp ecx, edx
#define CMP_ECX_EDI cmp ecx, edi
#define CMP_ECX_ESI cmp ecx, esi
#define CMP_ECX_EBP cmp ecx, ebp
#define CMP_ECX_ESP cmp ecx, esp

#define CMP_EDX_EAX cmp edx, eax
#define CMP_EDX_EBX cmp edx, ebx
#define CMP_EDX_ECX cmp edx, ecx
#define CMP_EDX_EDX cmp edx, edx
#define CMP_EDX_EDI cmp edx, edi
#define CMP_EDX_ESI cmp edx, esi
#define CMP_EDX_EBP cmp edx, ebp
#define CMP_EDX_ESP cmp edx, esp

#define CMP_EDI_EAX cmp edi, eax
#define CMP_EDI_EBX cmp edi, ebx
#define CMP_EDI_ECX cmp edi, ecx
#define CMP_EDI_EDX cmp edi, edx
#define CMP_EDI_EDI cmp edi, edi
#define CMP_EDI_ESI cmp edi, esi
#define CMP_EDI_EBP cmp edi, ebp
#define CMP_EDI_ESP cmp edi, esp

#define CMP_ESI_EAX cmp esi, eax
#define CMP_ESI_EBX cmp esi, ebx
#define CMP_ESI_ECX cmp esi, ecx
#define CMP_ESI_EDX cmp esi, edx
#define CMP_ESI_EDI cmp esi, edi
#define CMP_ESI_ESI cmp esi, esi
#define CMP_ESI_EBP cmp esi, ebp
#define CMP_ESI_ESP cmp esi, esp

#define CMP_EBP_EAX cmp ebp, eax
#define CMP_EBP_EBX cmp ebp, ebx
#define CMP_EBP_ECX cmp ebp, ecx
#define CMP_EBP_EDX cmp ebp, edx
#define CMP_EBP_EDI cmp ebp, edi
#define CMP_EBP_ESI cmp ebp, esi
#define CMP_EBP_EBP cmp ebp, ebp
#define CMP_EBP_ESP cmp ebp, esp

#define CMP_ESP_EAX cmp esp, eax
#define CMP_ESP_EBX cmp esp, ebx
#define CMP_ESP_ECX cmp esp, ecx
#define CMP_ESP_EDX cmp esp, edx
#define CMP_ESP_EDI cmp esp, edi
#define CMP_ESP_ESI cmp esp, esi
#define CMP_ESP_EBP cmp esp, ebp
#define CMP_ESP_ESP cmp esp, esp

#define CMP_EAX_(VALUE) cmp eax, VALUE
#define CMP_EBX_(VALUE) cmp ebx, VALUE
#define CMP_ECX_(VALUE) cmp ecx, VALUE
#define CMP_EDX_(VALUE) cmp edx, VALUE
#define CMP_EDI_(VALUE) cmp edi, VALUE
#define CMP_ESI_(VALUE) cmp esi, VALUE
#define CMP_EBP_(VALUE) cmp ebp, VALUE
#define CMP_ESP_(VALUE) cmp esp, VALUE
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define CMP_EAX_EAX cmp eax, eax
#define CMP_EAX_EBX cmp eax, ebx
#define CMP_EAX_ECX cmp eax, ecx
#define CMP_EAX_EDX cmp eax, edx
#define CMP_EAX_EDI cmp eax, edi
#define CMP_EAX_ESI cmp eax, esi
#define CMP_EAX_EBP cmp eax, ebp
#define CMP_EAX_ESP cmp eax, esp
#define CMP_EAX_R8D cmp eax, r8d
#define CMP_EAX_R9D cmp eax, r9d
#define CMP_EAX_R10D cmp eax, r10d
#define CMP_EAX_R11D cmp eax, r11d
#define CMP_EAX_R12D cmp eax, r12d
#define CMP_EAX_R13D cmp eax, r13d
#define CMP_EAX_R14D cmp eax, r14d
#define CMP_EAX_R15D cmp eax, r15d

#define CMP_EBX_EAX cmp ebx, eax
#define CMP_EBX_EBX cmp ebx, ebx
#define CMP_EBX_ECX cmp ebx, ecx
#define CMP_EBX_EDX cmp ebx, edx
#define CMP_EBX_EDI cmp ebx, edi
#define CMP_EBX_ESI cmp ebx, esi
#define CMP_EBX_EBP cmp ebx, ebp
#define CMP_EBX_ESP cmp ebx, esp
#define CMP_EBX_R8D cmp ebx, r8d
#define CMP_EBX_R9D cmp ebx, r9d
#define CMP_EBX_R10D cmp ebx, r10d
#define CMP_EBX_R11D cmp ebx, r11d
#define CMP_EBX_R12D cmp ebx, r12d
#define CMP_EBX_R13D cmp ebx, r13d
#define CMP_EBX_R14D cmp ebx, r14d
#define CMP_EBX_R15D cmp ebx, r15d

#define CMP_ECX_EAX cmp ecx, eax
#define CMP_ECX_EBX cmp ecx, ebx
#define CMP_ECX_ECX cmp ecx, ecx
#define CMP_ECX_EDX cmp ecx, edx
#define CMP_ECX_EDI cmp ecx, edi
#define CMP_ECX_ESI cmp ecx, esi
#define CMP_ECX_EBP cmp ecx, ebp
#define CMP_ECX_ESP cmp ecx, esp
#define CMP_ECX_R8D cmp ecx, r8d
#define CMP_ECX_R9D cmp ecx, r9d
#define CMP_ECX_R10D cmp ecx, r10d
#define CMP_ECX_R11D cmp ecx, r11d
#define CMP_ECX_R12D cmp ecx, r12d
#define CMP_ECX_R13D cmp ecx, r13d
#define CMP_ECX_R14D cmp ecx, r14d
#define CMP_ECX_R15D cmp ecx, r15d

#define CMP_EDX_EAX cmp edx, eax
#define CMP_EDX_EBX cmp edx, ebx
#define CMP_EDX_ECX cmp edx, ecx
#define CMP_EDX_EDX cmp edx, edx
#define CMP_EDX_EDI cmp edx, edi
#define CMP_EDX_ESI cmp edx, esi
#define CMP_EDX_EBP cmp edx, ebp
#define CMP_EDX_ESP cmp edx, esp
#define CMP_EDX_R8D cmp edx, r8d
#define CMP_EDX_R9D cmp edx, r9d
#define CMP_EDX_R10D cmp edx, r10d
#define CMP_EDX_R11D cmp edx, r11d
#define CMP_EDX_R12D cmp edx, r12d
#define CMP_EDX_R13D cmp edx, r13d
#define CMP_EDX_R14D cmp edx, r14d
#define CMP_EDX_R15D cmp edx, r15d

#define CMP_EDI_EAX cmp edi, eax
#define CMP_EDI_EBX cmp edi, ebx
#define CMP_EDI_ECX cmp edi, ecx
#define CMP_EDI_EDX cmp edi, edx
#define CMP_EDI_EDI cmp edi, edi
#define CMP_EDI_ESI cmp edi, esi
#define CMP_EDI_EBP cmp edi, ebp
#define CMP_EDI_ESP cmp edi, esp
#define CMP_EDI_R8D cmp edi, r8d
#define CMP_EDI_R9D cmp edi, r9d
#define CMP_EDI_R10D cmp edi, r10d
#define CMP_EDI_R11D cmp edi, r11d
#define CMP_EDI_R12D cmp edi, r12d
#define CMP_EDI_R13D cmp edi, r13d
#define CMP_EDI_R14D cmp edi, r14d
#define CMP_EDI_R15D cmp edi, r15d

#define CMP_ESI_EAX cmp esi, eax
#define CMP_ESI_EBX cmp esi, ebx
#define CMP_ESI_ECX cmp esi, ecx
#define CMP_ESI_EDX cmp esi, edx
#define CMP_ESI_EDI cmp esi, edi
#define CMP_ESI_ESI cmp esi, esi
#define CMP_ESI_EBP cmp esi, ebp
#define CMP_ESI_ESP cmp esi, esp
#define CMP_ESI_R8D cmp esi, r8d
#define CMP_ESI_R9D cmp esi, r9d
#define CMP_ESI_R10D cmp esi, r10d
#define CMP_ESI_R11D cmp esi, r11d
#define CMP_ESI_R12D cmp esi, r12d
#define CMP_ESI_R13D cmp esi, r13d
#define CMP_ESI_R14D cmp esi, r14d
#define CMP_ESI_R15D cmp esi, r15d

#define CMP_EBP_EAX cmp ebp, eax
#define CMP_EBP_EBX cmp ebp, ebx
#define CMP_EBP_ECX cmp ebp, ecx
#define CMP_EBP_EDX cmp ebp, edx
#define CMP_EBP_EDI cmp ebp, edi
#define CMP_EBP_ESI cmp ebp, esi
#define CMP_EBP_EBP cmp ebp, ebp
#define CMP_EBP_ESP cmp ebp, esp
#define CMP_EBP_R8D cmp ebp, r8d
#define CMP_EBP_R9D cmp ebp, r9d
#define CMP_EBP_R10D cmp ebp, r10d
#define CMP_EBP_R11D cmp ebp, r11d
#define CMP_EBP_R12D cmp ebp, r12d
#define CMP_EBP_R13D cmp ebp, r13d
#define CMP_EBP_R14D cmp ebp, r14d
#define CMP_EBP_R15D cmp ebp, r15d

#define CMP_ESP_EAX cmp esp, eax
#define CMP_ESP_EBX cmp esp, ebx
#define CMP_ESP_ECX cmp esp, ecx
#define CMP_ESP_EDX cmp esp, edx
#define CMP_ESP_EDI cmp esp, edi
#define CMP_ESP_ESI cmp esp, esi
#define CMP_ESP_EBP cmp esp, ebp
#define CMP_ESP_ESP cmp esp, esp
#define CMP_ESP_R8D cmp esp, r8d
#define CMP_ESP_R9D cmp esp, r9d
#define CMP_ESP_R10D cmp esp, r10d
#define CMP_ESP_R11D cmp esp, r11d
#define CMP_ESP_R12D cmp esp, r12d
#define CMP_ESP_R13D cmp esp, r13d
#define CMP_ESP_R14D cmp esp, r14d
#define CMP_ESP_R15D cmp esp, r15d

#define CMP_R8D_EAX cmp r8d, eax
#define CMP_R8D_EBX cmp r8d, ebx
#define CMP_R8D_ECX cmp r8d, ecx
#define CMP_R8D_EDX cmp r8d, edx
#define CMP_R8D_EDI cmp r8d, edi
#define CMP_R8D_ESI cmp r8d, esi
#define CMP_R8D_EBP cmp r8d, ebp
#define CMP_R8D_ESP cmp r8d, esp
#define CMP_R8D_R8D cmp r8d, r8d
#define CMP_R8D_R9D cmp r8d, r9d
#define CMP_R8D_R10D cmp r8d, r10d
#define CMP_R8D_R11D cmp r8d, r11d
#define CMP_R8D_R12D cmp r8d, r12d
#define CMP_R8D_R13D cmp r8d, r13d
#define CMP_R8D_R14D cmp r8d, r14d
#define CMP_R8D_R15D cmp r8d, r15d

#define CMP_R9D_EAX cmp r9d, eax
#define CMP_R9D_EBX cmp r9d, ebx
#define CMP_R9D_ECX cmp r9d, ecx
#define CMP_R9D_EDX cmp r9d, edx
#define CMP_R9D_EDI cmp r9d, edi
#define CMP_R9D_ESI cmp r9d, esi
#define CMP_R9D_EBP cmp r9d, ebp
#define CMP_R9D_ESP cmp r9d, esp
#define CMP_R9D_R8D cmp r9d, r8d
#define CMP_R9D_R9D cmp r9d, r9d
#define CMP_R9D_R10D cmp r9d, r10d
#define CMP_R9D_R11D cmp r9d, r11d
#define CMP_R9D_R12D cmp r9d, r12d
#define CMP_R9D_R13D cmp r9d, r13d
#define CMP_R9D_R14D cmp r9d, r14d
#define CMP_R9D_R15D cmp r9d, r15d

#define CMP_R10D_EAX cmp r10d, eax
#define CMP_R10D_EBX cmp r10d, ebx
#define CMP_R10D_ECX cmp r10d, ecx
#define CMP_R10D_EDX cmp r10d, edx
#define CMP_R10D_EDI cmp r10d, edi
#define CMP_R10D_ESI cmp r10d, esi
#define CMP_R10D_EBP cmp r10d, ebp
#define CMP_R10D_ESP cmp r10d, esp
#define CMP_R10D_R8D cmp r10d, r8d
#define CMP_R10D_R9D cmp r10d, r9d
#define CMP_R10D_R10D cmp r10d, r10d
#define CMP_R10D_R11D cmp r10d, r11d
#define CMP_R10D_R12D cmp r10d, r12d
#define CMP_R10D_R13D cmp r10d, r13d
#define CMP_R10D_R14D cmp r10d, r14d
#define CMP_R10D_R15D cmp r10d, r15d

#define CMP_R11D_EAX cmp r11d, eax
#define CMP_R11D_EBX cmp r11d, ebx
#define CMP_R11D_ECX cmp r11d, ecx
#define CMP_R11D_EDX cmp r11d, edx
#define CMP_R11D_EDI cmp r11d, edi
#define CMP_R11D_ESI cmp r11d, esi
#define CMP_R11D_EBP cmp r11d, ebp
#define CMP_R11D_ESP cmp r11d, esp
#define CMP_R11D_R8D cmp r11d, r8d
#define CMP_R11D_R9D cmp r11d, r9d
#define CMP_R11D_R10D cmp r11d, r10d
#define CMP_R11D_R11D cmp r11d, r11d
#define CMP_R11D_R12D cmp r11d, r12d
#define CMP_R11D_R13D cmp r11d, r13d
#define CMP_R11D_R14D cmp r11d, r14d
#define CMP_R11D_R15D cmp r11d, r15d

#define CMP_R12D_EAX cmp r12d, eax
#define CMP_R12D_EBX cmp r12d, ebx
#define CMP_R12D_ECX cmp r12d, ecx
#define CMP_R12D_EDX cmp r12d, edx
#define CMP_R12D_EDI cmp r12d, edi
#define CMP_R12D_ESI cmp r12d, esi
#define CMP_R12D_EBP cmp r12d, ebp
#define CMP_R12D_ESP cmp r12d, esp
#define CMP_R12D_R8D cmp r12d, r8d
#define CMP_R12D_R9D cmp r12d, r9d
#define CMP_R12D_R10D cmp r12d, r10d
#define CMP_R12D_R11D cmp r12d, r11d
#define CMP_R12D_R12D cmp r12d, r12d
#define CMP_R12D_R13D cmp r12d, r13d
#define CMP_R12D_R14D cmp r12d, r14d
#define CMP_R12D_R15D cmp r12d, r15d

#define CMP_R13D_EAX cmp r13d, eax
#define CMP_R13D_EBX cmp r13d, ebx
#define CMP_R13D_ECX cmp r13d, ecx
#define CMP_R13D_EDX cmp r13d, edx
#define CMP_R13D_EDI cmp r13d, edi
#define CMP_R13D_ESI cmp r13d, esi
#define CMP_R13D_EBP cmp r13d, ebp
#define CMP_R13D_ESP cmp r13d, esp
#define CMP_R13D_R8D cmp r13d, r8d
#define CMP_R13D_R9D cmp r13d, r9d
#define CMP_R13D_R10D cmp r13d, r10d
#define CMP_R13D_R11D cmp r13d, r11d
#define CMP_R13D_R12D cmp r13d, r12d
#define CMP_R13D_R13D cmp r13d, r13d
#define CMP_R13D_R14D cmp r13d, r14d
#define CMP_R13D_R15D cmp r13d, r15d

#define CMP_R14D_EAX cmp r14d, eax
#define CMP_R14D_EBX cmp r14d, ebx
#define CMP_R14D_ECX cmp r14d, ecx
#define CMP_R14D_EDX cmp r14d, edx
#define CMP_R14D_EDI cmp r14d, edi
#define CMP_R14D_ESI cmp r14d, esi
#define CMP_R14D_EBP cmp r14d, ebp
#define CMP_R14D_ESP cmp r14d, esp
#define CMP_R14D_R8D cmp r14d, r8d
#define CMP_R14D_R9D cmp r14d, r9d
#define CMP_R14D_R10D cmp r14d, r10d
#define CMP_R14D_R11D cmp r14d, r11d
#define CMP_R14D_R12D cmp r14d, r12d
#define CMP_R14D_R13D cmp r14d, r13d
#define CMP_R14D_R14D cmp r14d, r14d
#define CMP_R14D_R15D cmp r14d, r15d

#define CMP_R15D_EAX cmp r15d, eax
#define CMP_R15D_EBX cmp r15d, ebx
#define CMP_R15D_ECX cmp r15d, ecx
#define CMP_R15D_EDX cmp r15d, edx
#define CMP_R15D_EDI cmp r15d, edi
#define CMP_R15D_ESI cmp r15d, esi
#define CMP_R15D_EBP cmp r15d, ebp
#define CMP_R15D_ESP cmp r15d, esp
#define CMP_R15D_R8D cmp r15d, r8d
#define CMP_R15D_R9D cmp r15d, r9d
#define CMP_R15D_R10D cmp r15d, r10d
#define CMP_R15D_R11D cmp r15d, r11d
#define CMP_R15D_R12D cmp r15d, r12d
#define CMP_R15D_R13D cmp r15d, r13d
#define CMP_R15D_R14D cmp r15d, r14d
#define CMP_R15D_R15D cmp r15d, r15d

#define CMP_EAX_(VALUE) cmp eax, VALUE
#define CMP_EBX_(VALUE) cmp ebx, VALUE
#define CMP_ECX_(VALUE) cmp ecx, VALUE
#define CMP_EDX_(VALUE) cmp edx, VALUE
#define CMP_EDI_(VALUE) cmp edi, VALUE
#define CMP_ESI_(VALUE) cmp esi, VALUE
#define CMP_EBP_(VALUE) cmp ebp, VALUE
#define CMP_ESP_(VALUE) cmp esp, VALUE
#define CMP_R8D_(VALUE) cmp r8d, VALUE
#define CMP_R9D_(VALUE) cmp r9d, VALUE
#define CMP_R10D_(VALUE) cmp r10d, VALUE
#define CMP_R11D_(VALUE) cmp r11d, VALUE
#define CMP_R12D_(VALUE) cmp r12d, VALUE
#define CMP_R13D_(VALUE) cmp r13d, VALUE
#define CMP_R14D_(VALUE) cmp r14d, VALUE
#define CMP_R15D_(VALUE) cmp r15d, VALUE
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
