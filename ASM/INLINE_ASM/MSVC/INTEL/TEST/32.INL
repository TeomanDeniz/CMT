#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************ [v] 32-BIT REGISTERS [v] ************************ */
#ifdef __SYSTEM_32_BIT__
#define TEST_EAX_EAX test eax, eax
#define TEST_EAX_EBX test eax, ebx
#define TEST_EAX_ECX test eax, ecx
#define TEST_EAX_EDX test eax, edx
#define TEST_EAX_EDI test eax, edi
#define TEST_EAX_ESI test eax, esi
#define TEST_EAX_EBP test eax, ebp
#define TEST_EAX_ESP test eax, esp

#define TEST_EBX_EAX test ebx, eax
#define TEST_EBX_EBX test ebx, ebx
#define TEST_EBX_ECX test ebx, ecx
#define TEST_EBX_EDX test ebx, edx
#define TEST_EBX_EDI test ebx, edi
#define TEST_EBX_ESI test ebx, esi
#define TEST_EBX_EBP test ebx, ebp
#define TEST_EBX_ESP test ebx, esp

#define TEST_ECX_EAX test ecx, eax
#define TEST_ECX_EBX test ecx, ebx
#define TEST_ECX_ECX test ecx, ecx
#define TEST_ECX_EDX test ecx, edx
#define TEST_ECX_EDI test ecx, edi
#define TEST_ECX_ESI test ecx, esi
#define TEST_ECX_EBP test ecx, ebp
#define TEST_ECX_ESP test ecx, esp

#define TEST_EDX_EAX test edx, eax
#define TEST_EDX_EBX test edx, ebx
#define TEST_EDX_ECX test edx, ecx
#define TEST_EDX_EDX test edx, edx
#define TEST_EDX_EDI test edx, edi
#define TEST_EDX_ESI test edx, esi
#define TEST_EDX_EBP test edx, ebp
#define TEST_EDX_ESP test edx, esp

#define TEST_EDI_EAX test edi, eax
#define TEST_EDI_EBX test edi, ebx
#define TEST_EDI_ECX test edi, ecx
#define TEST_EDI_EDX test edi, edx
#define TEST_EDI_EDI test edi, edi
#define TEST_EDI_ESI test edi, esi
#define TEST_EDI_EBP test edi, ebp
#define TEST_EDI_ESP test edi, esp

#define TEST_ESI_EAX test esi, eax
#define TEST_ESI_EBX test esi, ebx
#define TEST_ESI_ECX test esi, ecx
#define TEST_ESI_EDX test esi, edx
#define TEST_ESI_EDI test esi, edi
#define TEST_ESI_ESI test esi, esi
#define TEST_ESI_EBP test esi, ebp
#define TEST_ESI_ESP test esi, esp

#define TEST_EBP_EAX test ebp, eax
#define TEST_EBP_EBX test ebp, ebx
#define TEST_EBP_ECX test ebp, ecx
#define TEST_EBP_EDX test ebp, edx
#define TEST_EBP_EDI test ebp, edi
#define TEST_EBP_ESI test ebp, esi
#define TEST_EBP_EBP test ebp, ebp
#define TEST_EBP_ESP test ebp, esp

#define TEST_ESP_EAX test esp, eax
#define TEST_ESP_EBX test esp, ebx
#define TEST_ESP_ECX test esp, ecx
#define TEST_ESP_EDX test esp, edx
#define TEST_ESP_EDI test esp, edi
#define TEST_ESP_ESI test esp, esi
#define TEST_ESP_EBP test esp, ebp
#define TEST_ESP_ESP test esp, esp

#define TEST_EAX_(VALUE) test eax, VALUE
#define TEST_EBX_(VALUE) test ebx, VALUE
#define TEST_ECX_(VALUE) test ecx, VALUE
#define TEST_EDX_(VALUE) test edx, VALUE
#define TEST_EDI_(VALUE) test edi, VALUE
#define TEST_ESI_(VALUE) test esi, VALUE
#define TEST_EBP_(VALUE) test ebp, VALUE
#define TEST_ESP_(VALUE) test esp, VALUE
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define TEST_EAX_EAX test eax, eax
#define TEST_EAX_EBX test eax, ebx
#define TEST_EAX_ECX test eax, ecx
#define TEST_EAX_EDX test eax, edx
#define TEST_EAX_EDI test eax, edi
#define TEST_EAX_ESI test eax, esi
#define TEST_EAX_EBP test eax, ebp
#define TEST_EAX_ESP test eax, esp
#define TEST_EAX_R8D test eax, r8d
#define TEST_EAX_R9D test eax, r9d
#define TEST_EAX_R10D test eax, r10d
#define TEST_EAX_R11D test eax, r11d
#define TEST_EAX_R12D test eax, r12d
#define TEST_EAX_R13D test eax, r13d
#define TEST_EAX_R14D test eax, r14d
#define TEST_EAX_R15D test eax, r15d

#define TEST_EBX_EAX test ebx, eax
#define TEST_EBX_EBX test ebx, ebx
#define TEST_EBX_ECX test ebx, ecx
#define TEST_EBX_EDX test ebx, edx
#define TEST_EBX_EDI test ebx, edi
#define TEST_EBX_ESI test ebx, esi
#define TEST_EBX_EBP test ebx, ebp
#define TEST_EBX_ESP test ebx, esp
#define TEST_EBX_R8D test ebx, r8d
#define TEST_EBX_R9D test ebx, r9d
#define TEST_EBX_R10D test ebx, r10d
#define TEST_EBX_R11D test ebx, r11d
#define TEST_EBX_R12D test ebx, r12d
#define TEST_EBX_R13D test ebx, r13d
#define TEST_EBX_R14D test ebx, r14d
#define TEST_EBX_R15D test ebx, r15d

#define TEST_ECX_EAX test ecx, eax
#define TEST_ECX_EBX test ecx, ebx
#define TEST_ECX_ECX test ecx, ecx
#define TEST_ECX_EDX test ecx, edx
#define TEST_ECX_EDI test ecx, edi
#define TEST_ECX_ESI test ecx, esi
#define TEST_ECX_EBP test ecx, ebp
#define TEST_ECX_ESP test ecx, esp
#define TEST_ECX_R8D test ecx, r8d
#define TEST_ECX_R9D test ecx, r9d
#define TEST_ECX_R10D test ecx, r10d
#define TEST_ECX_R11D test ecx, r11d
#define TEST_ECX_R12D test ecx, r12d
#define TEST_ECX_R13D test ecx, r13d
#define TEST_ECX_R14D test ecx, r14d
#define TEST_ECX_R15D test ecx, r15d

#define TEST_EDX_EAX test edx, eax
#define TEST_EDX_EBX test edx, ebx
#define TEST_EDX_ECX test edx, ecx
#define TEST_EDX_EDX test edx, edx
#define TEST_EDX_EDI test edx, edi
#define TEST_EDX_ESI test edx, esi
#define TEST_EDX_EBP test edx, ebp
#define TEST_EDX_ESP test edx, esp
#define TEST_EDX_R8D test edx, r8d
#define TEST_EDX_R9D test edx, r9d
#define TEST_EDX_R10D test edx, r10d
#define TEST_EDX_R11D test edx, r11d
#define TEST_EDX_R12D test edx, r12d
#define TEST_EDX_R13D test edx, r13d
#define TEST_EDX_R14D test edx, r14d
#define TEST_EDX_R15D test edx, r15d

#define TEST_EDI_EAX test edi, eax
#define TEST_EDI_EBX test edi, ebx
#define TEST_EDI_ECX test edi, ecx
#define TEST_EDI_EDX test edi, edx
#define TEST_EDI_EDI test edi, edi
#define TEST_EDI_ESI test edi, esi
#define TEST_EDI_EBP test edi, ebp
#define TEST_EDI_ESP test edi, esp
#define TEST_EDI_R8D test edi, r8d
#define TEST_EDI_R9D test edi, r9d
#define TEST_EDI_R10D test edi, r10d
#define TEST_EDI_R11D test edi, r11d
#define TEST_EDI_R12D test edi, r12d
#define TEST_EDI_R13D test edi, r13d
#define TEST_EDI_R14D test edi, r14d
#define TEST_EDI_R15D test edi, r15d

#define TEST_ESI_EAX test esi, eax
#define TEST_ESI_EBX test esi, ebx
#define TEST_ESI_ECX test esi, ecx
#define TEST_ESI_EDX test esi, edx
#define TEST_ESI_EDI test esi, edi
#define TEST_ESI_ESI test esi, esi
#define TEST_ESI_EBP test esi, ebp
#define TEST_ESI_ESP test esi, esp
#define TEST_ESI_R8D test esi, r8d
#define TEST_ESI_R9D test esi, r9d
#define TEST_ESI_R10D test esi, r10d
#define TEST_ESI_R11D test esi, r11d
#define TEST_ESI_R12D test esi, r12d
#define TEST_ESI_R13D test esi, r13d
#define TEST_ESI_R14D test esi, r14d
#define TEST_ESI_R15D test esi, r15d

#define TEST_EBP_EAX test ebp, eax
#define TEST_EBP_EBX test ebp, ebx
#define TEST_EBP_ECX test ebp, ecx
#define TEST_EBP_EDX test ebp, edx
#define TEST_EBP_EDI test ebp, edi
#define TEST_EBP_ESI test ebp, esi
#define TEST_EBP_EBP test ebp, ebp
#define TEST_EBP_ESP test ebp, esp
#define TEST_EBP_R8D test ebp, r8d
#define TEST_EBP_R9D test ebp, r9d
#define TEST_EBP_R10D test ebp, r10d
#define TEST_EBP_R11D test ebp, r11d
#define TEST_EBP_R12D test ebp, r12d
#define TEST_EBP_R13D test ebp, r13d
#define TEST_EBP_R14D test ebp, r14d
#define TEST_EBP_R15D test ebp, r15d

#define TEST_ESP_EAX test esp, eax
#define TEST_ESP_EBX test esp, ebx
#define TEST_ESP_ECX test esp, ecx
#define TEST_ESP_EDX test esp, edx
#define TEST_ESP_EDI test esp, edi
#define TEST_ESP_ESI test esp, esi
#define TEST_ESP_EBP test esp, ebp
#define TEST_ESP_ESP test esp, esp
#define TEST_ESP_R8D test esp, r8d
#define TEST_ESP_R9D test esp, r9d
#define TEST_ESP_R10D test esp, r10d
#define TEST_ESP_R11D test esp, r11d
#define TEST_ESP_R12D test esp, r12d
#define TEST_ESP_R13D test esp, r13d
#define TEST_ESP_R14D test esp, r14d
#define TEST_ESP_R15D test esp, r15d

#define TEST_R8D_EAX test r8d, eax
#define TEST_R8D_EBX test r8d, ebx
#define TEST_R8D_ECX test r8d, ecx
#define TEST_R8D_EDX test r8d, edx
#define TEST_R8D_EDI test r8d, edi
#define TEST_R8D_ESI test r8d, esi
#define TEST_R8D_EBP test r8d, ebp
#define TEST_R8D_ESP test r8d, esp
#define TEST_R8D_R8D test r8d, r8d
#define TEST_R8D_R9D test r8d, r9d
#define TEST_R8D_R10D test r8d, r10d
#define TEST_R8D_R11D test r8d, r11d
#define TEST_R8D_R12D test r8d, r12d
#define TEST_R8D_R13D test r8d, r13d
#define TEST_R8D_R14D test r8d, r14d
#define TEST_R8D_R15D test r8d, r15d

#define TEST_R9D_EAX test r9d, eax
#define TEST_R9D_EBX test r9d, ebx
#define TEST_R9D_ECX test r9d, ecx
#define TEST_R9D_EDX test r9d, edx
#define TEST_R9D_EDI test r9d, edi
#define TEST_R9D_ESI test r9d, esi
#define TEST_R9D_EBP test r9d, ebp
#define TEST_R9D_ESP test r9d, esp
#define TEST_R9D_R8D test r9d, r8d
#define TEST_R9D_R9D test r9d, r9d
#define TEST_R9D_R10D test r9d, r10d
#define TEST_R9D_R11D test r9d, r11d
#define TEST_R9D_R12D test r9d, r12d
#define TEST_R9D_R13D test r9d, r13d
#define TEST_R9D_R14D test r9d, r14d
#define TEST_R9D_R15D test r9d, r15d

#define TEST_R10D_EAX test r10d, eax
#define TEST_R10D_EBX test r10d, ebx
#define TEST_R10D_ECX test r10d, ecx
#define TEST_R10D_EDX test r10d, edx
#define TEST_R10D_EDI test r10d, edi
#define TEST_R10D_ESI test r10d, esi
#define TEST_R10D_EBP test r10d, ebp
#define TEST_R10D_ESP test r10d, esp
#define TEST_R10D_R8D test r10d, r8d
#define TEST_R10D_R9D test r10d, r9d
#define TEST_R10D_R10D test r10d, r10d
#define TEST_R10D_R11D test r10d, r11d
#define TEST_R10D_R12D test r10d, r12d
#define TEST_R10D_R13D test r10d, r13d
#define TEST_R10D_R14D test r10d, r14d
#define TEST_R10D_R15D test r10d, r15d

#define TEST_R11D_EAX test r11d, eax
#define TEST_R11D_EBX test r11d, ebx
#define TEST_R11D_ECX test r11d, ecx
#define TEST_R11D_EDX test r11d, edx
#define TEST_R11D_EDI test r11d, edi
#define TEST_R11D_ESI test r11d, esi
#define TEST_R11D_EBP test r11d, ebp
#define TEST_R11D_ESP test r11d, esp
#define TEST_R11D_R8D test r11d, r8d
#define TEST_R11D_R9D test r11d, r9d
#define TEST_R11D_R10D test r11d, r10d
#define TEST_R11D_R11D test r11d, r11d
#define TEST_R11D_R12D test r11d, r12d
#define TEST_R11D_R13D test r11d, r13d
#define TEST_R11D_R14D test r11d, r14d
#define TEST_R11D_R15D test r11d, r15d

#define TEST_R12D_EAX test r12d, eax
#define TEST_R12D_EBX test r12d, ebx
#define TEST_R12D_ECX test r12d, ecx
#define TEST_R12D_EDX test r12d, edx
#define TEST_R12D_EDI test r12d, edi
#define TEST_R12D_ESI test r12d, esi
#define TEST_R12D_EBP test r12d, ebp
#define TEST_R12D_ESP test r12d, esp
#define TEST_R12D_R8D test r12d, r8d
#define TEST_R12D_R9D test r12d, r9d
#define TEST_R12D_R10D test r12d, r10d
#define TEST_R12D_R11D test r12d, r11d
#define TEST_R12D_R12D test r12d, r12d
#define TEST_R12D_R13D test r12d, r13d
#define TEST_R12D_R14D test r12d, r14d
#define TEST_R12D_R15D test r12d, r15d

#define TEST_R13D_EAX test r13d, eax
#define TEST_R13D_EBX test r13d, ebx
#define TEST_R13D_ECX test r13d, ecx
#define TEST_R13D_EDX test r13d, edx
#define TEST_R13D_EDI test r13d, edi
#define TEST_R13D_ESI test r13d, esi
#define TEST_R13D_EBP test r13d, ebp
#define TEST_R13D_ESP test r13d, esp
#define TEST_R13D_R8D test r13d, r8d
#define TEST_R13D_R9D test r13d, r9d
#define TEST_R13D_R10D test r13d, r10d
#define TEST_R13D_R11D test r13d, r11d
#define TEST_R13D_R12D test r13d, r12d
#define TEST_R13D_R13D test r13d, r13d
#define TEST_R13D_R14D test r13d, r14d
#define TEST_R13D_R15D test r13d, r15d

#define TEST_R14D_EAX test r14d, eax
#define TEST_R14D_EBX test r14d, ebx
#define TEST_R14D_ECX test r14d, ecx
#define TEST_R14D_EDX test r14d, edx
#define TEST_R14D_EDI test r14d, edi
#define TEST_R14D_ESI test r14d, esi
#define TEST_R14D_EBP test r14d, ebp
#define TEST_R14D_ESP test r14d, esp
#define TEST_R14D_R8D test r14d, r8d
#define TEST_R14D_R9D test r14d, r9d
#define TEST_R14D_R10D test r14d, r10d
#define TEST_R14D_R11D test r14d, r11d
#define TEST_R14D_R12D test r14d, r12d
#define TEST_R14D_R13D test r14d, r13d
#define TEST_R14D_R14D test r14d, r14d
#define TEST_R14D_R15D test r14d, r15d

#define TEST_R15D_EAX test r15d, eax
#define TEST_R15D_EBX test r15d, ebx
#define TEST_R15D_ECX test r15d, ecx
#define TEST_R15D_EDX test r15d, edx
#define TEST_R15D_EDI test r15d, edi
#define TEST_R15D_ESI test r15d, esi
#define TEST_R15D_EBP test r15d, ebp
#define TEST_R15D_ESP test r15d, esp
#define TEST_R15D_R8D test r15d, r8d
#define TEST_R15D_R9D test r15d, r9d
#define TEST_R15D_R10D test r15d, r10d
#define TEST_R15D_R11D test r15d, r11d
#define TEST_R15D_R12D test r15d, r12d
#define TEST_R15D_R13D test r15d, r13d
#define TEST_R15D_R14D test r15d, r14d
#define TEST_R15D_R15D test r15d, r15d

#define TEST_EAX_(VALUE) test eax, VALUE
#define TEST_EBX_(VALUE) test ebx, VALUE
#define TEST_ECX_(VALUE) test ecx, VALUE
#define TEST_EDX_(VALUE) test edx, VALUE
#define TEST_EDI_(VALUE) test edi, VALUE
#define TEST_ESI_(VALUE) test esi, VALUE
#define TEST_EBP_(VALUE) test ebp, VALUE
#define TEST_ESP_(VALUE) test esp, VALUE
#define TEST_R8D_(VALUE) test r8d, VALUE
#define TEST_R9D_(VALUE) test r9d, VALUE
#define TEST_R10D_(VALUE) test r10d, VALUE
#define TEST_R11D_(VALUE) test r11d, VALUE
#define TEST_R12D_(VALUE) test r12d, VALUE
#define TEST_R13D_(VALUE) test r13d, VALUE
#define TEST_R14D_(VALUE) test r14d, VALUE
#define TEST_R15D_(VALUE) test r15d, VALUE
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
