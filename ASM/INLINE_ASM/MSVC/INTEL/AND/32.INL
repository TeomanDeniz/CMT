#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************ [v] 32-BIT REGISTERS [v] ************************ */
#ifdef __SYSTEM_32_BIT__
#define AND_EAX_EAX and eax, eax
#define AND_EAX_EBX and eax, ebx
#define AND_EAX_ECX and eax, ecx
#define AND_EAX_EDX and eax, edx
#define AND_EAX_EDI and eax, edi
#define AND_EAX_ESI and eax, esi
#define AND_EAX_EBP and eax, ebp
#define AND_EAX_ESP and eax, esp

#define AND_EBX_EAX and ebx, eax
#define AND_EBX_EBX and ebx, ebx
#define AND_EBX_ECX and ebx, ecx
#define AND_EBX_EDX and ebx, edx
#define AND_EBX_EDI and ebx, edi
#define AND_EBX_ESI and ebx, esi
#define AND_EBX_EBP and ebx, ebp
#define AND_EBX_ESP and ebx, esp

#define AND_ECX_EAX and ecx, eax
#define AND_ECX_EBX and ecx, ebx
#define AND_ECX_ECX and ecx, ecx
#define AND_ECX_EDX and ecx, edx
#define AND_ECX_EDI and ecx, edi
#define AND_ECX_ESI and ecx, esi
#define AND_ECX_EBP and ecx, ebp
#define AND_ECX_ESP and ecx, esp

#define AND_EDX_EAX and edx, eax
#define AND_EDX_EBX and edx, ebx
#define AND_EDX_ECX and edx, ecx
#define AND_EDX_EDX and edx, edx
#define AND_EDX_EDI and edx, edi
#define AND_EDX_ESI and edx, esi
#define AND_EDX_EBP and edx, ebp
#define AND_EDX_ESP and edx, esp

#define AND_EDI_EAX and edi, eax
#define AND_EDI_EBX and edi, ebx
#define AND_EDI_ECX and edi, ecx
#define AND_EDI_EDX and edi, edx
#define AND_EDI_EDI and edi, edi
#define AND_EDI_ESI and edi, esi
#define AND_EDI_EBP and edi, ebp
#define AND_EDI_ESP and edi, esp

#define AND_ESI_EAX and esi, eax
#define AND_ESI_EBX and esi, ebx
#define AND_ESI_ECX and esi, ecx
#define AND_ESI_EDX and esi, edx
#define AND_ESI_EDI and esi, edi
#define AND_ESI_ESI and esi, esi
#define AND_ESI_EBP and esi, ebp
#define AND_ESI_ESP and esi, esp

#define AND_EBP_EAX and ebp, eax
#define AND_EBP_EBX and ebp, ebx
#define AND_EBP_ECX and ebp, ecx
#define AND_EBP_EDX and ebp, edx
#define AND_EBP_EDI and ebp, edi
#define AND_EBP_ESI and ebp, esi
#define AND_EBP_EBP and ebp, ebp
#define AND_EBP_ESP and ebp, esp

#define AND_ESP_EAX and esp, eax
#define AND_ESP_EBX and esp, ebx
#define AND_ESP_ECX and esp, ecx
#define AND_ESP_EDX and esp, edx
#define AND_ESP_EDI and esp, edi
#define AND_ESP_ESI and esp, esi
#define AND_ESP_EBP and esp, ebp
#define AND_ESP_ESP and esp, esp

#define AND_EAX_(VALUE) and eax, VALUE
#define AND_EBX_(VALUE) and ebx, VALUE
#define AND_ECX_(VALUE) and ecx, VALUE
#define AND_EDX_(VALUE) and edx, VALUE
#define AND_EDI_(VALUE) and edi, VALUE
#define AND_ESI_(VALUE) and esi, VALUE
#define AND_EBP_(VALUE) and ebp, VALUE
#define AND_ESP_(VALUE) and esp, VALUE
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define AND_EAX_EAX and eax, eax
#define AND_EAX_EBX and eax, ebx
#define AND_EAX_ECX and eax, ecx
#define AND_EAX_EDX and eax, edx
#define AND_EAX_EDI and eax, edi
#define AND_EAX_ESI and eax, esi
#define AND_EAX_EBP and eax, ebp
#define AND_EAX_ESP and eax, esp
#define AND_EAX_R8D and eax, r8d
#define AND_EAX_R9D and eax, r9d
#define AND_EAX_R10D and eax, r10d
#define AND_EAX_R11D and eax, r11d
#define AND_EAX_R12D and eax, r12d
#define AND_EAX_R13D and eax, r13d
#define AND_EAX_R14D and eax, r14d
#define AND_EAX_R15D and eax, r15d

#define AND_EBX_EAX and ebx, eax
#define AND_EBX_EBX and ebx, ebx
#define AND_EBX_ECX and ebx, ecx
#define AND_EBX_EDX and ebx, edx
#define AND_EBX_EDI and ebx, edi
#define AND_EBX_ESI and ebx, esi
#define AND_EBX_EBP and ebx, ebp
#define AND_EBX_ESP and ebx, esp
#define AND_EBX_R8D and ebx, r8d
#define AND_EBX_R9D and ebx, r9d
#define AND_EBX_R10D and ebx, r10d
#define AND_EBX_R11D and ebx, r11d
#define AND_EBX_R12D and ebx, r12d
#define AND_EBX_R13D and ebx, r13d
#define AND_EBX_R14D and ebx, r14d
#define AND_EBX_R15D and ebx, r15d

#define AND_ECX_EAX and ecx, eax
#define AND_ECX_EBX and ecx, ebx
#define AND_ECX_ECX and ecx, ecx
#define AND_ECX_EDX and ecx, edx
#define AND_ECX_EDI and ecx, edi
#define AND_ECX_ESI and ecx, esi
#define AND_ECX_EBP and ecx, ebp
#define AND_ECX_ESP and ecx, esp
#define AND_ECX_R8D and ecx, r8d
#define AND_ECX_R9D and ecx, r9d
#define AND_ECX_R10D and ecx, r10d
#define AND_ECX_R11D and ecx, r11d
#define AND_ECX_R12D and ecx, r12d
#define AND_ECX_R13D and ecx, r13d
#define AND_ECX_R14D and ecx, r14d
#define AND_ECX_R15D and ecx, r15d

#define AND_EDX_EAX and edx, eax
#define AND_EDX_EBX and edx, ebx
#define AND_EDX_ECX and edx, ecx
#define AND_EDX_EDX and edx, edx
#define AND_EDX_EDI and edx, edi
#define AND_EDX_ESI and edx, esi
#define AND_EDX_EBP and edx, ebp
#define AND_EDX_ESP and edx, esp
#define AND_EDX_R8D and edx, r8d
#define AND_EDX_R9D and edx, r9d
#define AND_EDX_R10D and edx, r10d
#define AND_EDX_R11D and edx, r11d
#define AND_EDX_R12D and edx, r12d
#define AND_EDX_R13D and edx, r13d
#define AND_EDX_R14D and edx, r14d
#define AND_EDX_R15D and edx, r15d

#define AND_EDI_EAX and edi, eax
#define AND_EDI_EBX and edi, ebx
#define AND_EDI_ECX and edi, ecx
#define AND_EDI_EDX and edi, edx
#define AND_EDI_EDI and edi, edi
#define AND_EDI_ESI and edi, esi
#define AND_EDI_EBP and edi, ebp
#define AND_EDI_ESP and edi, esp
#define AND_EDI_R8D and edi, r8d
#define AND_EDI_R9D and edi, r9d
#define AND_EDI_R10D and edi, r10d
#define AND_EDI_R11D and edi, r11d
#define AND_EDI_R12D and edi, r12d
#define AND_EDI_R13D and edi, r13d
#define AND_EDI_R14D and edi, r14d
#define AND_EDI_R15D and edi, r15d

#define AND_ESI_EAX and esi, eax
#define AND_ESI_EBX and esi, ebx
#define AND_ESI_ECX and esi, ecx
#define AND_ESI_EDX and esi, edx
#define AND_ESI_EDI and esi, edi
#define AND_ESI_ESI and esi, esi
#define AND_ESI_EBP and esi, ebp
#define AND_ESI_ESP and esi, esp
#define AND_ESI_R8D and esi, r8d
#define AND_ESI_R9D and esi, r9d
#define AND_ESI_R10D and esi, r10d
#define AND_ESI_R11D and esi, r11d
#define AND_ESI_R12D and esi, r12d
#define AND_ESI_R13D and esi, r13d
#define AND_ESI_R14D and esi, r14d
#define AND_ESI_R15D and esi, r15d

#define AND_EBP_EAX and ebp, eax
#define AND_EBP_EBX and ebp, ebx
#define AND_EBP_ECX and ebp, ecx
#define AND_EBP_EDX and ebp, edx
#define AND_EBP_EDI and ebp, edi
#define AND_EBP_ESI and ebp, esi
#define AND_EBP_EBP and ebp, ebp
#define AND_EBP_ESP and ebp, esp
#define AND_EBP_R8D and ebp, r8d
#define AND_EBP_R9D and ebp, r9d
#define AND_EBP_R10D and ebp, r10d
#define AND_EBP_R11D and ebp, r11d
#define AND_EBP_R12D and ebp, r12d
#define AND_EBP_R13D and ebp, r13d
#define AND_EBP_R14D and ebp, r14d
#define AND_EBP_R15D and ebp, r15d

#define AND_ESP_EAX and esp, eax
#define AND_ESP_EBX and esp, ebx
#define AND_ESP_ECX and esp, ecx
#define AND_ESP_EDX and esp, edx
#define AND_ESP_EDI and esp, edi
#define AND_ESP_ESI and esp, esi
#define AND_ESP_EBP and esp, ebp
#define AND_ESP_ESP and esp, esp
#define AND_ESP_R8D and esp, r8d
#define AND_ESP_R9D and esp, r9d
#define AND_ESP_R10D and esp, r10d
#define AND_ESP_R11D and esp, r11d
#define AND_ESP_R12D and esp, r12d
#define AND_ESP_R13D and esp, r13d
#define AND_ESP_R14D and esp, r14d
#define AND_ESP_R15D and esp, r15d

#define AND_R8D_EAX and r8d, eax
#define AND_R8D_EBX and r8d, ebx
#define AND_R8D_ECX and r8d, ecx
#define AND_R8D_EDX and r8d, edx
#define AND_R8D_EDI and r8d, edi
#define AND_R8D_ESI and r8d, esi
#define AND_R8D_EBP and r8d, ebp
#define AND_R8D_ESP and r8d, esp
#define AND_R8D_R8D and r8d, r8d
#define AND_R8D_R9D and r8d, r9d
#define AND_R8D_R10D and r8d, r10d
#define AND_R8D_R11D and r8d, r11d
#define AND_R8D_R12D and r8d, r12d
#define AND_R8D_R13D and r8d, r13d
#define AND_R8D_R14D and r8d, r14d
#define AND_R8D_R15D and r8d, r15d

#define AND_R9D_EAX and r9d, eax
#define AND_R9D_EBX and r9d, ebx
#define AND_R9D_ECX and r9d, ecx
#define AND_R9D_EDX and r9d, edx
#define AND_R9D_EDI and r9d, edi
#define AND_R9D_ESI and r9d, esi
#define AND_R9D_EBP and r9d, ebp
#define AND_R9D_ESP and r9d, esp
#define AND_R9D_R8D and r9d, r8d
#define AND_R9D_R9D and r9d, r9d
#define AND_R9D_R10D and r9d, r10d
#define AND_R9D_R11D and r9d, r11d
#define AND_R9D_R12D and r9d, r12d
#define AND_R9D_R13D and r9d, r13d
#define AND_R9D_R14D and r9d, r14d
#define AND_R9D_R15D and r9d, r15d

#define AND_R10D_EAX and r10d, eax
#define AND_R10D_EBX and r10d, ebx
#define AND_R10D_ECX and r10d, ecx
#define AND_R10D_EDX and r10d, edx
#define AND_R10D_EDI and r10d, edi
#define AND_R10D_ESI and r10d, esi
#define AND_R10D_EBP and r10d, ebp
#define AND_R10D_ESP and r10d, esp
#define AND_R10D_R8D and r10d, r8d
#define AND_R10D_R9D and r10d, r9d
#define AND_R10D_R10D and r10d, r10d
#define AND_R10D_R11D and r10d, r11d
#define AND_R10D_R12D and r10d, r12d
#define AND_R10D_R13D and r10d, r13d
#define AND_R10D_R14D and r10d, r14d
#define AND_R10D_R15D and r10d, r15d

#define AND_R11D_EAX and r11d, eax
#define AND_R11D_EBX and r11d, ebx
#define AND_R11D_ECX and r11d, ecx
#define AND_R11D_EDX and r11d, edx
#define AND_R11D_EDI and r11d, edi
#define AND_R11D_ESI and r11d, esi
#define AND_R11D_EBP and r11d, ebp
#define AND_R11D_ESP and r11d, esp
#define AND_R11D_R8D and r11d, r8d
#define AND_R11D_R9D and r11d, r9d
#define AND_R11D_R10D and r11d, r10d
#define AND_R11D_R11D and r11d, r11d
#define AND_R11D_R12D and r11d, r12d
#define AND_R11D_R13D and r11d, r13d
#define AND_R11D_R14D and r11d, r14d
#define AND_R11D_R15D and r11d, r15d

#define AND_R12D_EAX and r12d, eax
#define AND_R12D_EBX and r12d, ebx
#define AND_R12D_ECX and r12d, ecx
#define AND_R12D_EDX and r12d, edx
#define AND_R12D_EDI and r12d, edi
#define AND_R12D_ESI and r12d, esi
#define AND_R12D_EBP and r12d, ebp
#define AND_R12D_ESP and r12d, esp
#define AND_R12D_R8D and r12d, r8d
#define AND_R12D_R9D and r12d, r9d
#define AND_R12D_R10D and r12d, r10d
#define AND_R12D_R11D and r12d, r11d
#define AND_R12D_R12D and r12d, r12d
#define AND_R12D_R13D and r12d, r13d
#define AND_R12D_R14D and r12d, r14d
#define AND_R12D_R15D and r12d, r15d

#define AND_R13D_EAX and r13d, eax
#define AND_R13D_EBX and r13d, ebx
#define AND_R13D_ECX and r13d, ecx
#define AND_R13D_EDX and r13d, edx
#define AND_R13D_EDI and r13d, edi
#define AND_R13D_ESI and r13d, esi
#define AND_R13D_EBP and r13d, ebp
#define AND_R13D_ESP and r13d, esp
#define AND_R13D_R8D and r13d, r8d
#define AND_R13D_R9D and r13d, r9d
#define AND_R13D_R10D and r13d, r10d
#define AND_R13D_R11D and r13d, r11d
#define AND_R13D_R12D and r13d, r12d
#define AND_R13D_R13D and r13d, r13d
#define AND_R13D_R14D and r13d, r14d
#define AND_R13D_R15D and r13d, r15d

#define AND_R14D_EAX and r14d, eax
#define AND_R14D_EBX and r14d, ebx
#define AND_R14D_ECX and r14d, ecx
#define AND_R14D_EDX and r14d, edx
#define AND_R14D_EDI and r14d, edi
#define AND_R14D_ESI and r14d, esi
#define AND_R14D_EBP and r14d, ebp
#define AND_R14D_ESP and r14d, esp
#define AND_R14D_R8D and r14d, r8d
#define AND_R14D_R9D and r14d, r9d
#define AND_R14D_R10D and r14d, r10d
#define AND_R14D_R11D and r14d, r11d
#define AND_R14D_R12D and r14d, r12d
#define AND_R14D_R13D and r14d, r13d
#define AND_R14D_R14D and r14d, r14d
#define AND_R14D_R15D and r14d, r15d

#define AND_R15D_EAX and r15d, eax
#define AND_R15D_EBX and r15d, ebx
#define AND_R15D_ECX and r15d, ecx
#define AND_R15D_EDX and r15d, edx
#define AND_R15D_EDI and r15d, edi
#define AND_R15D_ESI and r15d, esi
#define AND_R15D_EBP and r15d, ebp
#define AND_R15D_ESP and r15d, esp
#define AND_R15D_R8D and r15d, r8d
#define AND_R15D_R9D and r15d, r9d
#define AND_R15D_R10D and r15d, r10d
#define AND_R15D_R11D and r15d, r11d
#define AND_R15D_R12D and r15d, r12d
#define AND_R15D_R13D and r15d, r13d
#define AND_R15D_R14D and r15d, r14d
#define AND_R15D_R15D and r15d, r15d

#define AND_EAX_(VALUE) and eax, VALUE
#define AND_EBX_(VALUE) and ebx, VALUE
#define AND_ECX_(VALUE) and ecx, VALUE
#define AND_EDX_(VALUE) and edx, VALUE
#define AND_EDI_(VALUE) and edi, VALUE
#define AND_ESI_(VALUE) and esi, VALUE
#define AND_EBP_(VALUE) and ebp, VALUE
#define AND_ESP_(VALUE) and esp, VALUE
#define AND_R8D_(VALUE) and r8d, VALUE
#define AND_R9D_(VALUE) and r9d, VALUE
#define AND_R10D_(VALUE) and r10d, VALUE
#define AND_R11D_(VALUE) and r11d, VALUE
#define AND_R12D_(VALUE) and r12d, VALUE
#define AND_R13D_(VALUE) and r13d, VALUE
#define AND_R14D_(VALUE) and r14d, VALUE
#define AND_R15D_(VALUE) and r15d, VALUE
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
