#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************ [v] 32-BIT REGISTERS [v] ************************ */
#ifdef __SYSTEM_32_BIT__
#define ADD_EAX_EAX add eax, eax
#define ADD_EAX_EBX add eax, ebx
#define ADD_EAX_ECX add eax, ecx
#define ADD_EAX_EDX add eax, edx
#define ADD_EAX_EDI add eax, edi
#define ADD_EAX_ESI add eax, esi
#define ADD_EAX_EBP add eax, ebp
#define ADD_EAX_ESP add eax, esp

#define ADD_EBX_EAX add ebx, eax
#define ADD_EBX_EBX add ebx, ebx
#define ADD_EBX_ECX add ebx, ecx
#define ADD_EBX_EDX add ebx, edx
#define ADD_EBX_EDI add ebx, edi
#define ADD_EBX_ESI add ebx, esi
#define ADD_EBX_EBP add ebx, ebp
#define ADD_EBX_ESP add ebx, esp

#define ADD_ECX_EAX add ecx, eax
#define ADD_ECX_EBX add ecx, ebx
#define ADD_ECX_ECX add ecx, ecx
#define ADD_ECX_EDX add ecx, edx
#define ADD_ECX_EDI add ecx, edi
#define ADD_ECX_ESI add ecx, esi
#define ADD_ECX_EBP add ecx, ebp
#define ADD_ECX_ESP add ecx, esp

#define ADD_EDX_EAX add edx, eax
#define ADD_EDX_EBX add edx, ebx
#define ADD_EDX_ECX add edx, ecx
#define ADD_EDX_EDX add edx, edx
#define ADD_EDX_EDI add edx, edi
#define ADD_EDX_ESI add edx, esi
#define ADD_EDX_EBP add edx, ebp
#define ADD_EDX_ESP add edx, esp

#define ADD_EDI_EAX add edi, eax
#define ADD_EDI_EBX add edi, ebx
#define ADD_EDI_ECX add edi, ecx
#define ADD_EDI_EDX add edi, edx
#define ADD_EDI_EDI add edi, edi
#define ADD_EDI_ESI add edi, esi
#define ADD_EDI_EBP add edi, ebp
#define ADD_EDI_ESP add edi, esp

#define ADD_ESI_EAX add esi, eax
#define ADD_ESI_EBX add esi, ebx
#define ADD_ESI_ECX add esi, ecx
#define ADD_ESI_EDX add esi, edx
#define ADD_ESI_EDI add esi, edi
#define ADD_ESI_ESI add esi, esi
#define ADD_ESI_EBP add esi, ebp
#define ADD_ESI_ESP add esi, esp

#define ADD_EBP_EAX add ebp, eax
#define ADD_EBP_EBX add ebp, ebx
#define ADD_EBP_ECX add ebp, ecx
#define ADD_EBP_EDX add ebp, edx
#define ADD_EBP_EDI add ebp, edi
#define ADD_EBP_ESI add ebp, esi
#define ADD_EBP_EBP add ebp, ebp
#define ADD_EBP_ESP add ebp, esp

#define ADD_ESP_EAX add esp, eax
#define ADD_ESP_EBX add esp, ebx
#define ADD_ESP_ECX add esp, ecx
#define ADD_ESP_EDX add esp, edx
#define ADD_ESP_EDI add esp, edi
#define ADD_ESP_ESI add esp, esi
#define ADD_ESP_EBP add esp, ebp
#define ADD_ESP_ESP add esp, esp

#define ADD_EAX_(VALUE) add eax, VALUE
#define ADD_EBX_(VALUE) add ebx, VALUE
#define ADD_ECX_(VALUE) add ecx, VALUE
#define ADD_EDX_(VALUE) add edx, VALUE
#define ADD_EDI_(VALUE) add edi, VALUE
#define ADD_ESI_(VALUE) add esi, VALUE
#define ADD_EBP_(VALUE) add ebp, VALUE
#define ADD_ESP_(VALUE) add esp, VALUE
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define ADD_EAX_EAX add eax, eax
#define ADD_EAX_EBX add eax, ebx
#define ADD_EAX_ECX add eax, ecx
#define ADD_EAX_EDX add eax, edx
#define ADD_EAX_EDI add eax, edi
#define ADD_EAX_ESI add eax, esi
#define ADD_EAX_EBP add eax, ebp
#define ADD_EAX_ESP add eax, esp
#define ADD_EAX_R8D add eax, r8d
#define ADD_EAX_R9D add eax, r9d
#define ADD_EAX_R10D add eax, r10d
#define ADD_EAX_R11D add eax, r11d
#define ADD_EAX_R12D add eax, r12d
#define ADD_EAX_R13D add eax, r13d
#define ADD_EAX_R14D add eax, r14d
#define ADD_EAX_R15D add eax, r15d

#define ADD_EBX_EAX add ebx, eax
#define ADD_EBX_EBX add ebx, ebx
#define ADD_EBX_ECX add ebx, ecx
#define ADD_EBX_EDX add ebx, edx
#define ADD_EBX_EDI add ebx, edi
#define ADD_EBX_ESI add ebx, esi
#define ADD_EBX_EBP add ebx, ebp
#define ADD_EBX_ESP add ebx, esp
#define ADD_EBX_R8D add ebx, r8d
#define ADD_EBX_R9D add ebx, r9d
#define ADD_EBX_R10D add ebx, r10d
#define ADD_EBX_R11D add ebx, r11d
#define ADD_EBX_R12D add ebx, r12d
#define ADD_EBX_R13D add ebx, r13d
#define ADD_EBX_R14D add ebx, r14d
#define ADD_EBX_R15D add ebx, r15d

#define ADD_ECX_EAX add ecx, eax
#define ADD_ECX_EBX add ecx, ebx
#define ADD_ECX_ECX add ecx, ecx
#define ADD_ECX_EDX add ecx, edx
#define ADD_ECX_EDI add ecx, edi
#define ADD_ECX_ESI add ecx, esi
#define ADD_ECX_EBP add ecx, ebp
#define ADD_ECX_ESP add ecx, esp
#define ADD_ECX_R8D add ecx, r8d
#define ADD_ECX_R9D add ecx, r9d
#define ADD_ECX_R10D add ecx, r10d
#define ADD_ECX_R11D add ecx, r11d
#define ADD_ECX_R12D add ecx, r12d
#define ADD_ECX_R13D add ecx, r13d
#define ADD_ECX_R14D add ecx, r14d
#define ADD_ECX_R15D add ecx, r15d

#define ADD_EDX_EAX add edx, eax
#define ADD_EDX_EBX add edx, ebx
#define ADD_EDX_ECX add edx, ecx
#define ADD_EDX_EDX add edx, edx
#define ADD_EDX_EDI add edx, edi
#define ADD_EDX_ESI add edx, esi
#define ADD_EDX_EBP add edx, ebp
#define ADD_EDX_ESP add edx, esp
#define ADD_EDX_R8D add edx, r8d
#define ADD_EDX_R9D add edx, r9d
#define ADD_EDX_R10D add edx, r10d
#define ADD_EDX_R11D add edx, r11d
#define ADD_EDX_R12D add edx, r12d
#define ADD_EDX_R13D add edx, r13d
#define ADD_EDX_R14D add edx, r14d
#define ADD_EDX_R15D add edx, r15d

#define ADD_EDI_EAX add edi, eax
#define ADD_EDI_EBX add edi, ebx
#define ADD_EDI_ECX add edi, ecx
#define ADD_EDI_EDX add edi, edx
#define ADD_EDI_EDI add edi, edi
#define ADD_EDI_ESI add edi, esi
#define ADD_EDI_EBP add edi, ebp
#define ADD_EDI_ESP add edi, esp
#define ADD_EDI_R8D add edi, r8d
#define ADD_EDI_R9D add edi, r9d
#define ADD_EDI_R10D add edi, r10d
#define ADD_EDI_R11D add edi, r11d
#define ADD_EDI_R12D add edi, r12d
#define ADD_EDI_R13D add edi, r13d
#define ADD_EDI_R14D add edi, r14d
#define ADD_EDI_R15D add edi, r15d

#define ADD_ESI_EAX add esi, eax
#define ADD_ESI_EBX add esi, ebx
#define ADD_ESI_ECX add esi, ecx
#define ADD_ESI_EDX add esi, edx
#define ADD_ESI_EDI add esi, edi
#define ADD_ESI_ESI add esi, esi
#define ADD_ESI_EBP add esi, ebp
#define ADD_ESI_ESP add esi, esp
#define ADD_ESI_R8D add esi, r8d
#define ADD_ESI_R9D add esi, r9d
#define ADD_ESI_R10D add esi, r10d
#define ADD_ESI_R11D add esi, r11d
#define ADD_ESI_R12D add esi, r12d
#define ADD_ESI_R13D add esi, r13d
#define ADD_ESI_R14D add esi, r14d
#define ADD_ESI_R15D add esi, r15d

#define ADD_EBP_EAX add ebp, eax
#define ADD_EBP_EBX add ebp, ebx
#define ADD_EBP_ECX add ebp, ecx
#define ADD_EBP_EDX add ebp, edx
#define ADD_EBP_EDI add ebp, edi
#define ADD_EBP_ESI add ebp, esi
#define ADD_EBP_EBP add ebp, ebp
#define ADD_EBP_ESP add ebp, esp
#define ADD_EBP_R8D add ebp, r8d
#define ADD_EBP_R9D add ebp, r9d
#define ADD_EBP_R10D add ebp, r10d
#define ADD_EBP_R11D add ebp, r11d
#define ADD_EBP_R12D add ebp, r12d
#define ADD_EBP_R13D add ebp, r13d
#define ADD_EBP_R14D add ebp, r14d
#define ADD_EBP_R15D add ebp, r15d

#define ADD_ESP_EAX add esp, eax
#define ADD_ESP_EBX add esp, ebx
#define ADD_ESP_ECX add esp, ecx
#define ADD_ESP_EDX add esp, edx
#define ADD_ESP_EDI add esp, edi
#define ADD_ESP_ESI add esp, esi
#define ADD_ESP_EBP add esp, ebp
#define ADD_ESP_ESP add esp, esp
#define ADD_ESP_R8D add esp, r8d
#define ADD_ESP_R9D add esp, r9d
#define ADD_ESP_R10D add esp, r10d
#define ADD_ESP_R11D add esp, r11d
#define ADD_ESP_R12D add esp, r12d
#define ADD_ESP_R13D add esp, r13d
#define ADD_ESP_R14D add esp, r14d
#define ADD_ESP_R15D add esp, r15d

#define ADD_R8D_EAX add r8d, eax
#define ADD_R8D_EBX add r8d, ebx
#define ADD_R8D_ECX add r8d, ecx
#define ADD_R8D_EDX add r8d, edx
#define ADD_R8D_EDI add r8d, edi
#define ADD_R8D_ESI add r8d, esi
#define ADD_R8D_EBP add r8d, ebp
#define ADD_R8D_ESP add r8d, esp
#define ADD_R8D_R8D add r8d, r8d
#define ADD_R8D_R9D add r8d, r9d
#define ADD_R8D_R10D add r8d, r10d
#define ADD_R8D_R11D add r8d, r11d
#define ADD_R8D_R12D add r8d, r12d
#define ADD_R8D_R13D add r8d, r13d
#define ADD_R8D_R14D add r8d, r14d
#define ADD_R8D_R15D add r8d, r15d

#define ADD_R9D_EAX add r9d, eax
#define ADD_R9D_EBX add r9d, ebx
#define ADD_R9D_ECX add r9d, ecx
#define ADD_R9D_EDX add r9d, edx
#define ADD_R9D_EDI add r9d, edi
#define ADD_R9D_ESI add r9d, esi
#define ADD_R9D_EBP add r9d, ebp
#define ADD_R9D_ESP add r9d, esp
#define ADD_R9D_R8D add r9d, r8d
#define ADD_R9D_R9D add r9d, r9d
#define ADD_R9D_R10D add r9d, r10d
#define ADD_R9D_R11D add r9d, r11d
#define ADD_R9D_R12D add r9d, r12d
#define ADD_R9D_R13D add r9d, r13d
#define ADD_R9D_R14D add r9d, r14d
#define ADD_R9D_R15D add r9d, r15d

#define ADD_R10D_EAX add r10d, eax
#define ADD_R10D_EBX add r10d, ebx
#define ADD_R10D_ECX add r10d, ecx
#define ADD_R10D_EDX add r10d, edx
#define ADD_R10D_EDI add r10d, edi
#define ADD_R10D_ESI add r10d, esi
#define ADD_R10D_EBP add r10d, ebp
#define ADD_R10D_ESP add r10d, esp
#define ADD_R10D_R8D add r10d, r8d
#define ADD_R10D_R9D add r10d, r9d
#define ADD_R10D_R10D add r10d, r10d
#define ADD_R10D_R11D add r10d, r11d
#define ADD_R10D_R12D add r10d, r12d
#define ADD_R10D_R13D add r10d, r13d
#define ADD_R10D_R14D add r10d, r14d
#define ADD_R10D_R15D add r10d, r15d

#define ADD_R11D_EAX add r11d, eax
#define ADD_R11D_EBX add r11d, ebx
#define ADD_R11D_ECX add r11d, ecx
#define ADD_R11D_EDX add r11d, edx
#define ADD_R11D_EDI add r11d, edi
#define ADD_R11D_ESI add r11d, esi
#define ADD_R11D_EBP add r11d, ebp
#define ADD_R11D_ESP add r11d, esp
#define ADD_R11D_R8D add r11d, r8d
#define ADD_R11D_R9D add r11d, r9d
#define ADD_R11D_R10D add r11d, r10d
#define ADD_R11D_R11D add r11d, r11d
#define ADD_R11D_R12D add r11d, r12d
#define ADD_R11D_R13D add r11d, r13d
#define ADD_R11D_R14D add r11d, r14d
#define ADD_R11D_R15D add r11d, r15d

#define ADD_R12D_EAX add r12d, eax
#define ADD_R12D_EBX add r12d, ebx
#define ADD_R12D_ECX add r12d, ecx
#define ADD_R12D_EDX add r12d, edx
#define ADD_R12D_EDI add r12d, edi
#define ADD_R12D_ESI add r12d, esi
#define ADD_R12D_EBP add r12d, ebp
#define ADD_R12D_ESP add r12d, esp
#define ADD_R12D_R8D add r12d, r8d
#define ADD_R12D_R9D add r12d, r9d
#define ADD_R12D_R10D add r12d, r10d
#define ADD_R12D_R11D add r12d, r11d
#define ADD_R12D_R12D add r12d, r12d
#define ADD_R12D_R13D add r12d, r13d
#define ADD_R12D_R14D add r12d, r14d
#define ADD_R12D_R15D add r12d, r15d

#define ADD_R13D_EAX add r13d, eax
#define ADD_R13D_EBX add r13d, ebx
#define ADD_R13D_ECX add r13d, ecx
#define ADD_R13D_EDX add r13d, edx
#define ADD_R13D_EDI add r13d, edi
#define ADD_R13D_ESI add r13d, esi
#define ADD_R13D_EBP add r13d, ebp
#define ADD_R13D_ESP add r13d, esp
#define ADD_R13D_R8D add r13d, r8d
#define ADD_R13D_R9D add r13d, r9d
#define ADD_R13D_R10D add r13d, r10d
#define ADD_R13D_R11D add r13d, r11d
#define ADD_R13D_R12D add r13d, r12d
#define ADD_R13D_R13D add r13d, r13d
#define ADD_R13D_R14D add r13d, r14d
#define ADD_R13D_R15D add r13d, r15d

#define ADD_R14D_EAX add r14d, eax
#define ADD_R14D_EBX add r14d, ebx
#define ADD_R14D_ECX add r14d, ecx
#define ADD_R14D_EDX add r14d, edx
#define ADD_R14D_EDI add r14d, edi
#define ADD_R14D_ESI add r14d, esi
#define ADD_R14D_EBP add r14d, ebp
#define ADD_R14D_ESP add r14d, esp
#define ADD_R14D_R8D add r14d, r8d
#define ADD_R14D_R9D add r14d, r9d
#define ADD_R14D_R10D add r14d, r10d
#define ADD_R14D_R11D add r14d, r11d
#define ADD_R14D_R12D add r14d, r12d
#define ADD_R14D_R13D add r14d, r13d
#define ADD_R14D_R14D add r14d, r14d
#define ADD_R14D_R15D add r14d, r15d

#define ADD_R15D_EAX add r15d, eax
#define ADD_R15D_EBX add r15d, ebx
#define ADD_R15D_ECX add r15d, ecx
#define ADD_R15D_EDX add r15d, edx
#define ADD_R15D_EDI add r15d, edi
#define ADD_R15D_ESI add r15d, esi
#define ADD_R15D_EBP add r15d, ebp
#define ADD_R15D_ESP add r15d, esp
#define ADD_R15D_R8D add r15d, r8d
#define ADD_R15D_R9D add r15d, r9d
#define ADD_R15D_R10D add r15d, r10d
#define ADD_R15D_R11D add r15d, r11d
#define ADD_R15D_R12D add r15d, r12d
#define ADD_R15D_R13D add r15d, r13d
#define ADD_R15D_R14D add r15d, r14d
#define ADD_R15D_R15D add r15d, r15d

#define ADD_EAX_(VALUE) add eax, VALUE
#define ADD_EBX_(VALUE) add ebx, VALUE
#define ADD_ECX_(VALUE) add ecx, VALUE
#define ADD_EDX_(VALUE) add edx, VALUE
#define ADD_EDI_(VALUE) add edi, VALUE
#define ADD_ESI_(VALUE) add esi, VALUE
#define ADD_EBP_(VALUE) add ebp, VALUE
#define ADD_ESP_(VALUE) add esp, VALUE
#define ADD_R8D_(VALUE) add r8d, VALUE
#define ADD_R9D_(VALUE) add r9d, VALUE
#define ADD_R10D_(VALUE) add r10d, VALUE
#define ADD_R11D_(VALUE) add r11d, VALUE
#define ADD_R12D_(VALUE) add r12d, VALUE
#define ADD_R13D_(VALUE) add r13d, VALUE
#define ADD_R14D_(VALUE) add r14d, VALUE
#define ADD_R15D_(VALUE) add r15d, VALUE
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
