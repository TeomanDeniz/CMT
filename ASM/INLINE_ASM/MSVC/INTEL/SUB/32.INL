#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************ [v] 32-BIT REGISTERS [v] ************************ */
#ifdef __SYSTEM_32_BIT__
#define SUB_EAX_EAX sub eax, eax
#define SUB_EAX_EBX sub eax, ebx
#define SUB_EAX_ECX sub eax, ecx
#define SUB_EAX_EDX sub eax, edx
#define SUB_EAX_EDI sub eax, edi
#define SUB_EAX_ESI sub eax, esi
#define SUB_EAX_EBP sub eax, ebp
#define SUB_EAX_ESP sub eax, esp

#define SUB_EBX_EAX sub ebx, eax
#define SUB_EBX_EBX sub ebx, ebx
#define SUB_EBX_ECX sub ebx, ecx
#define SUB_EBX_EDX sub ebx, edx
#define SUB_EBX_EDI sub ebx, edi
#define SUB_EBX_ESI sub ebx, esi
#define SUB_EBX_EBP sub ebx, ebp
#define SUB_EBX_ESP sub ebx, esp

#define SUB_ECX_EAX sub ecx, eax
#define SUB_ECX_EBX sub ecx, ebx
#define SUB_ECX_ECX sub ecx, ecx
#define SUB_ECX_EDX sub ecx, edx
#define SUB_ECX_EDI sub ecx, edi
#define SUB_ECX_ESI sub ecx, esi
#define SUB_ECX_EBP sub ecx, ebp
#define SUB_ECX_ESP sub ecx, esp

#define SUB_EDX_EAX sub edx, eax
#define SUB_EDX_EBX sub edx, ebx
#define SUB_EDX_ECX sub edx, ecx
#define SUB_EDX_EDX sub edx, edx
#define SUB_EDX_EDI sub edx, edi
#define SUB_EDX_ESI sub edx, esi
#define SUB_EDX_EBP sub edx, ebp
#define SUB_EDX_ESP sub edx, esp

#define SUB_EDI_EAX sub edi, eax
#define SUB_EDI_EBX sub edi, ebx
#define SUB_EDI_ECX sub edi, ecx
#define SUB_EDI_EDX sub edi, edx
#define SUB_EDI_EDI sub edi, edi
#define SUB_EDI_ESI sub edi, esi
#define SUB_EDI_EBP sub edi, ebp
#define SUB_EDI_ESP sub edi, esp

#define SUB_ESI_EAX sub esi, eax
#define SUB_ESI_EBX sub esi, ebx
#define SUB_ESI_ECX sub esi, ecx
#define SUB_ESI_EDX sub esi, edx
#define SUB_ESI_EDI sub esi, edi
#define SUB_ESI_ESI sub esi, esi
#define SUB_ESI_EBP sub esi, ebp
#define SUB_ESI_ESP sub esi, esp

#define SUB_EBP_EAX sub ebp, eax
#define SUB_EBP_EBX sub ebp, ebx
#define SUB_EBP_ECX sub ebp, ecx
#define SUB_EBP_EDX sub ebp, edx
#define SUB_EBP_EDI sub ebp, edi
#define SUB_EBP_ESI sub ebp, esi
#define SUB_EBP_EBP sub ebp, ebp
#define SUB_EBP_ESP sub ebp, esp

#define SUB_ESP_EAX sub esp, eax
#define SUB_ESP_EBX sub esp, ebx
#define SUB_ESP_ECX sub esp, ecx
#define SUB_ESP_EDX sub esp, edx
#define SUB_ESP_EDI sub esp, edi
#define SUB_ESP_ESI sub esp, esi
#define SUB_ESP_EBP sub esp, ebp
#define SUB_ESP_ESP sub esp, esp

#define SUB_EAX_(VALUE) sub eax, VALUE
#define SUB_EBX_(VALUE) sub ebx, VALUE
#define SUB_ECX_(VALUE) sub ecx, VALUE
#define SUB_EDX_(VALUE) sub edx, VALUE
#define SUB_EDI_(VALUE) sub edi, VALUE
#define SUB_ESI_(VALUE) sub esi, VALUE
#define SUB_EBP_(VALUE) sub ebp, VALUE
#define SUB_ESP_(VALUE) sub esp, VALUE
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define SUB_EAX_EAX sub eax, eax
#define SUB_EAX_EBX sub eax, ebx
#define SUB_EAX_ECX sub eax, ecx
#define SUB_EAX_EDX sub eax, edx
#define SUB_EAX_EDI sub eax, edi
#define SUB_EAX_ESI sub eax, esi
#define SUB_EAX_EBP sub eax, ebp
#define SUB_EAX_ESP sub eax, esp
#define SUB_EAX_R8D sub eax, r8d
#define SUB_EAX_R9D sub eax, r9d
#define SUB_EAX_R10D sub eax, r10d
#define SUB_EAX_R11D sub eax, r11d
#define SUB_EAX_R12D sub eax, r12d
#define SUB_EAX_R13D sub eax, r13d
#define SUB_EAX_R14D sub eax, r14d
#define SUB_EAX_R15D sub eax, r15d

#define SUB_EBX_EAX sub ebx, eax
#define SUB_EBX_EBX sub ebx, ebx
#define SUB_EBX_ECX sub ebx, ecx
#define SUB_EBX_EDX sub ebx, edx
#define SUB_EBX_EDI sub ebx, edi
#define SUB_EBX_ESI sub ebx, esi
#define SUB_EBX_EBP sub ebx, ebp
#define SUB_EBX_ESP sub ebx, esp
#define SUB_EBX_R8D sub ebx, r8d
#define SUB_EBX_R9D sub ebx, r9d
#define SUB_EBX_R10D sub ebx, r10d
#define SUB_EBX_R11D sub ebx, r11d
#define SUB_EBX_R12D sub ebx, r12d
#define SUB_EBX_R13D sub ebx, r13d
#define SUB_EBX_R14D sub ebx, r14d
#define SUB_EBX_R15D sub ebx, r15d

#define SUB_ECX_EAX sub ecx, eax
#define SUB_ECX_EBX sub ecx, ebx
#define SUB_ECX_ECX sub ecx, ecx
#define SUB_ECX_EDX sub ecx, edx
#define SUB_ECX_EDI sub ecx, edi
#define SUB_ECX_ESI sub ecx, esi
#define SUB_ECX_EBP sub ecx, ebp
#define SUB_ECX_ESP sub ecx, esp
#define SUB_ECX_R8D sub ecx, r8d
#define SUB_ECX_R9D sub ecx, r9d
#define SUB_ECX_R10D sub ecx, r10d
#define SUB_ECX_R11D sub ecx, r11d
#define SUB_ECX_R12D sub ecx, r12d
#define SUB_ECX_R13D sub ecx, r13d
#define SUB_ECX_R14D sub ecx, r14d
#define SUB_ECX_R15D sub ecx, r15d

#define SUB_EDX_EAX sub edx, eax
#define SUB_EDX_EBX sub edx, ebx
#define SUB_EDX_ECX sub edx, ecx
#define SUB_EDX_EDX sub edx, edx
#define SUB_EDX_EDI sub edx, edi
#define SUB_EDX_ESI sub edx, esi
#define SUB_EDX_EBP sub edx, ebp
#define SUB_EDX_ESP sub edx, esp
#define SUB_EDX_R8D sub edx, r8d
#define SUB_EDX_R9D sub edx, r9d
#define SUB_EDX_R10D sub edx, r10d
#define SUB_EDX_R11D sub edx, r11d
#define SUB_EDX_R12D sub edx, r12d
#define SUB_EDX_R13D sub edx, r13d
#define SUB_EDX_R14D sub edx, r14d
#define SUB_EDX_R15D sub edx, r15d

#define SUB_EDI_EAX sub edi, eax
#define SUB_EDI_EBX sub edi, ebx
#define SUB_EDI_ECX sub edi, ecx
#define SUB_EDI_EDX sub edi, edx
#define SUB_EDI_EDI sub edi, edi
#define SUB_EDI_ESI sub edi, esi
#define SUB_EDI_EBP sub edi, ebp
#define SUB_EDI_ESP sub edi, esp
#define SUB_EDI_R8D sub edi, r8d
#define SUB_EDI_R9D sub edi, r9d
#define SUB_EDI_R10D sub edi, r10d
#define SUB_EDI_R11D sub edi, r11d
#define SUB_EDI_R12D sub edi, r12d
#define SUB_EDI_R13D sub edi, r13d
#define SUB_EDI_R14D sub edi, r14d
#define SUB_EDI_R15D sub edi, r15d

#define SUB_ESI_EAX sub esi, eax
#define SUB_ESI_EBX sub esi, ebx
#define SUB_ESI_ECX sub esi, ecx
#define SUB_ESI_EDX sub esi, edx
#define SUB_ESI_EDI sub esi, edi
#define SUB_ESI_ESI sub esi, esi
#define SUB_ESI_EBP sub esi, ebp
#define SUB_ESI_ESP sub esi, esp
#define SUB_ESI_R8D sub esi, r8d
#define SUB_ESI_R9D sub esi, r9d
#define SUB_ESI_R10D sub esi, r10d
#define SUB_ESI_R11D sub esi, r11d
#define SUB_ESI_R12D sub esi, r12d
#define SUB_ESI_R13D sub esi, r13d
#define SUB_ESI_R14D sub esi, r14d
#define SUB_ESI_R15D sub esi, r15d

#define SUB_EBP_EAX sub ebp, eax
#define SUB_EBP_EBX sub ebp, ebx
#define SUB_EBP_ECX sub ebp, ecx
#define SUB_EBP_EDX sub ebp, edx
#define SUB_EBP_EDI sub ebp, edi
#define SUB_EBP_ESI sub ebp, esi
#define SUB_EBP_EBP sub ebp, ebp
#define SUB_EBP_ESP sub ebp, esp
#define SUB_EBP_R8D sub ebp, r8d
#define SUB_EBP_R9D sub ebp, r9d
#define SUB_EBP_R10D sub ebp, r10d
#define SUB_EBP_R11D sub ebp, r11d
#define SUB_EBP_R12D sub ebp, r12d
#define SUB_EBP_R13D sub ebp, r13d
#define SUB_EBP_R14D sub ebp, r14d
#define SUB_EBP_R15D sub ebp, r15d

#define SUB_ESP_EAX sub esp, eax
#define SUB_ESP_EBX sub esp, ebx
#define SUB_ESP_ECX sub esp, ecx
#define SUB_ESP_EDX sub esp, edx
#define SUB_ESP_EDI sub esp, edi
#define SUB_ESP_ESI sub esp, esi
#define SUB_ESP_EBP sub esp, ebp
#define SUB_ESP_ESP sub esp, esp
#define SUB_ESP_R8D sub esp, r8d
#define SUB_ESP_R9D sub esp, r9d
#define SUB_ESP_R10D sub esp, r10d
#define SUB_ESP_R11D sub esp, r11d
#define SUB_ESP_R12D sub esp, r12d
#define SUB_ESP_R13D sub esp, r13d
#define SUB_ESP_R14D sub esp, r14d
#define SUB_ESP_R15D sub esp, r15d

#define SUB_R8D_EAX sub r8d, eax
#define SUB_R8D_EBX sub r8d, ebx
#define SUB_R8D_ECX sub r8d, ecx
#define SUB_R8D_EDX sub r8d, edx
#define SUB_R8D_EDI sub r8d, edi
#define SUB_R8D_ESI sub r8d, esi
#define SUB_R8D_EBP sub r8d, ebp
#define SUB_R8D_ESP sub r8d, esp
#define SUB_R8D_R8D sub r8d, r8d
#define SUB_R8D_R9D sub r8d, r9d
#define SUB_R8D_R10D sub r8d, r10d
#define SUB_R8D_R11D sub r8d, r11d
#define SUB_R8D_R12D sub r8d, r12d
#define SUB_R8D_R13D sub r8d, r13d
#define SUB_R8D_R14D sub r8d, r14d
#define SUB_R8D_R15D sub r8d, r15d

#define SUB_R9D_EAX sub r9d, eax
#define SUB_R9D_EBX sub r9d, ebx
#define SUB_R9D_ECX sub r9d, ecx
#define SUB_R9D_EDX sub r9d, edx
#define SUB_R9D_EDI sub r9d, edi
#define SUB_R9D_ESI sub r9d, esi
#define SUB_R9D_EBP sub r9d, ebp
#define SUB_R9D_ESP sub r9d, esp
#define SUB_R9D_R8D sub r9d, r8d
#define SUB_R9D_R9D sub r9d, r9d
#define SUB_R9D_R10D sub r9d, r10d
#define SUB_R9D_R11D sub r9d, r11d
#define SUB_R9D_R12D sub r9d, r12d
#define SUB_R9D_R13D sub r9d, r13d
#define SUB_R9D_R14D sub r9d, r14d
#define SUB_R9D_R15D sub r9d, r15d

#define SUB_R10D_EAX sub r10d, eax
#define SUB_R10D_EBX sub r10d, ebx
#define SUB_R10D_ECX sub r10d, ecx
#define SUB_R10D_EDX sub r10d, edx
#define SUB_R10D_EDI sub r10d, edi
#define SUB_R10D_ESI sub r10d, esi
#define SUB_R10D_EBP sub r10d, ebp
#define SUB_R10D_ESP sub r10d, esp
#define SUB_R10D_R8D sub r10d, r8d
#define SUB_R10D_R9D sub r10d, r9d
#define SUB_R10D_R10D sub r10d, r10d
#define SUB_R10D_R11D sub r10d, r11d
#define SUB_R10D_R12D sub r10d, r12d
#define SUB_R10D_R13D sub r10d, r13d
#define SUB_R10D_R14D sub r10d, r14d
#define SUB_R10D_R15D sub r10d, r15d

#define SUB_R11D_EAX sub r11d, eax
#define SUB_R11D_EBX sub r11d, ebx
#define SUB_R11D_ECX sub r11d, ecx
#define SUB_R11D_EDX sub r11d, edx
#define SUB_R11D_EDI sub r11d, edi
#define SUB_R11D_ESI sub r11d, esi
#define SUB_R11D_EBP sub r11d, ebp
#define SUB_R11D_ESP sub r11d, esp
#define SUB_R11D_R8D sub r11d, r8d
#define SUB_R11D_R9D sub r11d, r9d
#define SUB_R11D_R10D sub r11d, r10d
#define SUB_R11D_R11D sub r11d, r11d
#define SUB_R11D_R12D sub r11d, r12d
#define SUB_R11D_R13D sub r11d, r13d
#define SUB_R11D_R14D sub r11d, r14d
#define SUB_R11D_R15D sub r11d, r15d

#define SUB_R12D_EAX sub r12d, eax
#define SUB_R12D_EBX sub r12d, ebx
#define SUB_R12D_ECX sub r12d, ecx
#define SUB_R12D_EDX sub r12d, edx
#define SUB_R12D_EDI sub r12d, edi
#define SUB_R12D_ESI sub r12d, esi
#define SUB_R12D_EBP sub r12d, ebp
#define SUB_R12D_ESP sub r12d, esp
#define SUB_R12D_R8D sub r12d, r8d
#define SUB_R12D_R9D sub r12d, r9d
#define SUB_R12D_R10D sub r12d, r10d
#define SUB_R12D_R11D sub r12d, r11d
#define SUB_R12D_R12D sub r12d, r12d
#define SUB_R12D_R13D sub r12d, r13d
#define SUB_R12D_R14D sub r12d, r14d
#define SUB_R12D_R15D sub r12d, r15d

#define SUB_R13D_EAX sub r13d, eax
#define SUB_R13D_EBX sub r13d, ebx
#define SUB_R13D_ECX sub r13d, ecx
#define SUB_R13D_EDX sub r13d, edx
#define SUB_R13D_EDI sub r13d, edi
#define SUB_R13D_ESI sub r13d, esi
#define SUB_R13D_EBP sub r13d, ebp
#define SUB_R13D_ESP sub r13d, esp
#define SUB_R13D_R8D sub r13d, r8d
#define SUB_R13D_R9D sub r13d, r9d
#define SUB_R13D_R10D sub r13d, r10d
#define SUB_R13D_R11D sub r13d, r11d
#define SUB_R13D_R12D sub r13d, r12d
#define SUB_R13D_R13D sub r13d, r13d
#define SUB_R13D_R14D sub r13d, r14d
#define SUB_R13D_R15D sub r13d, r15d

#define SUB_R14D_EAX sub r14d, eax
#define SUB_R14D_EBX sub r14d, ebx
#define SUB_R14D_ECX sub r14d, ecx
#define SUB_R14D_EDX sub r14d, edx
#define SUB_R14D_EDI sub r14d, edi
#define SUB_R14D_ESI sub r14d, esi
#define SUB_R14D_EBP sub r14d, ebp
#define SUB_R14D_ESP sub r14d, esp
#define SUB_R14D_R8D sub r14d, r8d
#define SUB_R14D_R9D sub r14d, r9d
#define SUB_R14D_R10D sub r14d, r10d
#define SUB_R14D_R11D sub r14d, r11d
#define SUB_R14D_R12D sub r14d, r12d
#define SUB_R14D_R13D sub r14d, r13d
#define SUB_R14D_R14D sub r14d, r14d
#define SUB_R14D_R15D sub r14d, r15d

#define SUB_R15D_EAX sub r15d, eax
#define SUB_R15D_EBX sub r15d, ebx
#define SUB_R15D_ECX sub r15d, ecx
#define SUB_R15D_EDX sub r15d, edx
#define SUB_R15D_EDI sub r15d, edi
#define SUB_R15D_ESI sub r15d, esi
#define SUB_R15D_EBP sub r15d, ebp
#define SUB_R15D_ESP sub r15d, esp
#define SUB_R15D_R8D sub r15d, r8d
#define SUB_R15D_R9D sub r15d, r9d
#define SUB_R15D_R10D sub r15d, r10d
#define SUB_R15D_R11D sub r15d, r11d
#define SUB_R15D_R12D sub r15d, r12d
#define SUB_R15D_R13D sub r15d, r13d
#define SUB_R15D_R14D sub r15d, r14d
#define SUB_R15D_R15D sub r15d, r15d

#define SUB_EAX_(VALUE) sub eax, VALUE
#define SUB_EBX_(VALUE) sub ebx, VALUE
#define SUB_ECX_(VALUE) sub ecx, VALUE
#define SUB_EDX_(VALUE) sub edx, VALUE
#define SUB_EDI_(VALUE) sub edi, VALUE
#define SUB_ESI_(VALUE) sub esi, VALUE
#define SUB_EBP_(VALUE) sub ebp, VALUE
#define SUB_ESP_(VALUE) sub esp, VALUE
#define SUB_R8D_(VALUE) sub r8d, VALUE
#define SUB_R9D_(VALUE) sub r9d, VALUE
#define SUB_R10D_(VALUE) sub r10d, VALUE
#define SUB_R11D_(VALUE) sub r11d, VALUE
#define SUB_R12D_(VALUE) sub r12d, VALUE
#define SUB_R13D_(VALUE) sub r13d, VALUE
#define SUB_R14D_(VALUE) sub r14d, VALUE
#define SUB_R15D_(VALUE) sub r15d, VALUE
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
