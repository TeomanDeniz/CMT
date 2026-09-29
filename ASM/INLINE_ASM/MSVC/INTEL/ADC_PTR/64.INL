#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************* [v] 64-BIT MEMORY [v] ************************** */
#define ADC_RAX_FROM_PTR_(VALUE) adc rax, qword ptr [VALUE]
#define ADC_RBX_FROM_PTR_(VALUE) adc rbx, qword ptr [VALUE]
#define ADC_RCX_FROM_PTR_(VALUE) adc rcx, qword ptr [VALUE]
#define ADC_RDX_FROM_PTR_(VALUE) adc rdx, qword ptr [VALUE]
#define ADC_RDI_FROM_PTR_(VALUE) adc rdi, qword ptr [VALUE]
#define ADC_RSI_FROM_PTR_(VALUE) adc rsi, qword ptr [VALUE]
#define ADC_RBP_FROM_PTR_(VALUE) adc rbp, qword ptr [VALUE]
#define ADC_RSP_FROM_PTR_(VALUE) adc rsp, qword ptr [VALUE]
#define ADC_R8_FROM_PTR_(VALUE) adc r8, qword ptr [VALUE]
#define ADC_R9_FROM_PTR_(VALUE) adc r9, qword ptr [VALUE]
#define ADC_R10_FROM_PTR_(VALUE) adc r10, qword ptr [VALUE]
#define ADC_R11_FROM_PTR_(VALUE) adc r11, qword ptr [VALUE]
#define ADC_R12_FROM_PTR_(VALUE) adc r12, qword ptr [VALUE]
#define ADC_R13_FROM_PTR_(VALUE) adc r13, qword ptr [VALUE]
#define ADC_R14_FROM_PTR_(VALUE) adc r14, qword ptr [VALUE]
#define ADC_R15_FROM_PTR_(VALUE) adc r15, qword ptr [VALUE]

#define ADC_RAX_TO_PTR_(VALUE) adc qword ptr [VALUE], rax
#define ADC_RBX_TO_PTR_(VALUE) adc qword ptr [VALUE], rbx
#define ADC_RCX_TO_PTR_(VALUE) adc qword ptr [VALUE], rcx
#define ADC_RDX_TO_PTR_(VALUE) adc qword ptr [VALUE], rdx
#define ADC_RDI_TO_PTR_(VALUE) adc qword ptr [VALUE], rdi
#define ADC_RSI_TO_PTR_(VALUE) adc qword ptr [VALUE], rsi
#define ADC_RBP_TO_PTR_(VALUE) adc qword ptr [VALUE], rbp
#define ADC_RSP_TO_PTR_(VALUE) adc qword ptr [VALUE], rsp
#define ADC_R8_TO_PTR_(VALUE) adc qword ptr [VALUE], r8
#define ADC_R9_TO_PTR_(VALUE) adc qword ptr [VALUE], r9
#define ADC_R10_TO_PTR_(VALUE) adc qword ptr [VALUE], r10
#define ADC_R11_TO_PTR_(VALUE) adc qword ptr [VALUE], r11
#define ADC_R12_TO_PTR_(VALUE) adc qword ptr [VALUE], r12
#define ADC_R13_TO_PTR_(VALUE) adc qword ptr [VALUE], r13
#define ADC_R14_TO_PTR_(VALUE) adc qword ptr [VALUE], r14
#define ADC_R15_TO_PTR_(VALUE) adc qword ptr [VALUE], r15

#define ADC_RAX_FROM_PTR_RAX adc rax, qword ptr [rax]
#define ADC_RAX_FROM_PTR_RBX adc rax, qword ptr [rbx]
#define ADC_RAX_FROM_PTR_RCX adc rax, qword ptr [rcx]
#define ADC_RAX_FROM_PTR_RDX adc rax, qword ptr [rdx]
#define ADC_RAX_FROM_PTR_RDI adc rax, qword ptr [rdi]
#define ADC_RAX_FROM_PTR_RSI adc rax, qword ptr [rsi]
#define ADC_RAX_FROM_PTR_RBP adc rax, qword ptr [rbp]
#define ADC_RAX_FROM_PTR_RSP adc rax, qword ptr [rsp]
#define ADC_RAX_FROM_PTR_R8 adc rax, qword ptr [r8]
#define ADC_RAX_FROM_PTR_R9 adc rax, qword ptr [r9]
#define ADC_RAX_FROM_PTR_R10 adc rax, qword ptr [r10]
#define ADC_RAX_FROM_PTR_R11 adc rax, qword ptr [r11]
#define ADC_RAX_FROM_PTR_R12 adc rax, qword ptr [r12]
#define ADC_RAX_FROM_PTR_R13 adc rax, qword ptr [r13]
#define ADC_RAX_FROM_PTR_R14 adc rax, qword ptr [r14]
#define ADC_RAX_FROM_PTR_R15 adc rax, qword ptr [r15]
#define ADC_RAX_FROM_PTR_EAX adc rax, qword ptr [eax]
#define ADC_RAX_FROM_PTR_EBX adc rax, qword ptr [ebx]
#define ADC_RAX_FROM_PTR_ECX adc rax, qword ptr [ecx]
#define ADC_RAX_FROM_PTR_EDX adc rax, qword ptr [edx]
#define ADC_RAX_FROM_PTR_EDI adc rax, qword ptr [edi]
#define ADC_RAX_FROM_PTR_ESI adc rax, qword ptr [esi]
#define ADC_RAX_FROM_PTR_EBP adc rax, qword ptr [ebp]
#define ADC_RAX_FROM_PTR_ESP adc rax, qword ptr [esp]

#define ADC_RBX_FROM_PTR_RAX adc rbx, qword ptr [rax]
#define ADC_RBX_FROM_PTR_RBX adc rbx, qword ptr [rbx]
#define ADC_RBX_FROM_PTR_RCX adc rbx, qword ptr [rcx]
#define ADC_RBX_FROM_PTR_RDX adc rbx, qword ptr [rdx]
#define ADC_RBX_FROM_PTR_RDI adc rbx, qword ptr [rdi]
#define ADC_RBX_FROM_PTR_RSI adc rbx, qword ptr [rsi]
#define ADC_RBX_FROM_PTR_RBP adc rbx, qword ptr [rbp]
#define ADC_RBX_FROM_PTR_RSP adc rbx, qword ptr [rsp]
#define ADC_RBX_FROM_PTR_R8 adc rbx, qword ptr [r8]
#define ADC_RBX_FROM_PTR_R9 adc rbx, qword ptr [r9]
#define ADC_RBX_FROM_PTR_R10 adc rbx, qword ptr [r10]
#define ADC_RBX_FROM_PTR_R11 adc rbx, qword ptr [r11]
#define ADC_RBX_FROM_PTR_R12 adc rbx, qword ptr [r12]
#define ADC_RBX_FROM_PTR_R13 adc rbx, qword ptr [r13]
#define ADC_RBX_FROM_PTR_R14 adc rbx, qword ptr [r14]
#define ADC_RBX_FROM_PTR_R15 adc rbx, qword ptr [r15]
#define ADC_RBX_FROM_PTR_EAX adc rbx, qword ptr [eax]
#define ADC_RBX_FROM_PTR_EBX adc rbx, qword ptr [ebx]
#define ADC_RBX_FROM_PTR_ECX adc rbx, qword ptr [ecx]
#define ADC_RBX_FROM_PTR_EDX adc rbx, qword ptr [edx]
#define ADC_RBX_FROM_PTR_EDI adc rbx, qword ptr [edi]
#define ADC_RBX_FROM_PTR_ESI adc rbx, qword ptr [esi]
#define ADC_RBX_FROM_PTR_EBP adc rbx, qword ptr [ebp]
#define ADC_RBX_FROM_PTR_ESP adc rbx, qword ptr [esp]

#define ADC_RCX_FROM_PTR_RAX adc rcx, qword ptr [rax]
#define ADC_RCX_FROM_PTR_RBX adc rcx, qword ptr [rbx]
#define ADC_RCX_FROM_PTR_RCX adc rcx, qword ptr [rcx]
#define ADC_RCX_FROM_PTR_RDX adc rcx, qword ptr [rdx]
#define ADC_RCX_FROM_PTR_RDI adc rcx, qword ptr [rdi]
#define ADC_RCX_FROM_PTR_RSI adc rcx, qword ptr [rsi]
#define ADC_RCX_FROM_PTR_RBP adc rcx, qword ptr [rbp]
#define ADC_RCX_FROM_PTR_RSP adc rcx, qword ptr [rsp]
#define ADC_RCX_FROM_PTR_R8 adc rcx, qword ptr [r8]
#define ADC_RCX_FROM_PTR_R9 adc rcx, qword ptr [r9]
#define ADC_RCX_FROM_PTR_R10 adc rcx, qword ptr [r10]
#define ADC_RCX_FROM_PTR_R11 adc rcx, qword ptr [r11]
#define ADC_RCX_FROM_PTR_R12 adc rcx, qword ptr [r12]
#define ADC_RCX_FROM_PTR_R13 adc rcx, qword ptr [r13]
#define ADC_RCX_FROM_PTR_R14 adc rcx, qword ptr [r14]
#define ADC_RCX_FROM_PTR_R15 adc rcx, qword ptr [r15]
#define ADC_RCX_FROM_PTR_EAX adc rcx, qword ptr [eax]
#define ADC_RCX_FROM_PTR_EBX adc rcx, qword ptr [ebx]
#define ADC_RCX_FROM_PTR_ECX adc rcx, qword ptr [ecx]
#define ADC_RCX_FROM_PTR_EDX adc rcx, qword ptr [edx]
#define ADC_RCX_FROM_PTR_EDI adc rcx, qword ptr [edi]
#define ADC_RCX_FROM_PTR_ESI adc rcx, qword ptr [esi]
#define ADC_RCX_FROM_PTR_EBP adc rcx, qword ptr [ebp]
#define ADC_RCX_FROM_PTR_ESP adc rcx, qword ptr [esp]

#define ADC_RDX_FROM_PTR_RAX adc rdx, qword ptr [rax]
#define ADC_RDX_FROM_PTR_RBX adc rdx, qword ptr [rbx]
#define ADC_RDX_FROM_PTR_RCX adc rdx, qword ptr [rcx]
#define ADC_RDX_FROM_PTR_RDX adc rdx, qword ptr [rdx]
#define ADC_RDX_FROM_PTR_RDI adc rdx, qword ptr [rdi]
#define ADC_RDX_FROM_PTR_RSI adc rdx, qword ptr [rsi]
#define ADC_RDX_FROM_PTR_RBP adc rdx, qword ptr [rbp]
#define ADC_RDX_FROM_PTR_RSP adc rdx, qword ptr [rsp]
#define ADC_RDX_FROM_PTR_R8 adc rdx, qword ptr [r8]
#define ADC_RDX_FROM_PTR_R9 adc rdx, qword ptr [r9]
#define ADC_RDX_FROM_PTR_R10 adc rdx, qword ptr [r10]
#define ADC_RDX_FROM_PTR_R11 adc rdx, qword ptr [r11]
#define ADC_RDX_FROM_PTR_R12 adc rdx, qword ptr [r12]
#define ADC_RDX_FROM_PTR_R13 adc rdx, qword ptr [r13]
#define ADC_RDX_FROM_PTR_R14 adc rdx, qword ptr [r14]
#define ADC_RDX_FROM_PTR_R15 adc rdx, qword ptr [r15]
#define ADC_RDX_FROM_PTR_EAX adc rdx, qword ptr [eax]
#define ADC_RDX_FROM_PTR_EBX adc rdx, qword ptr [ebx]
#define ADC_RDX_FROM_PTR_ECX adc rdx, qword ptr [ecx]
#define ADC_RDX_FROM_PTR_EDX adc rdx, qword ptr [edx]
#define ADC_RDX_FROM_PTR_EDI adc rdx, qword ptr [edi]
#define ADC_RDX_FROM_PTR_ESI adc rdx, qword ptr [esi]
#define ADC_RDX_FROM_PTR_EBP adc rdx, qword ptr [ebp]
#define ADC_RDX_FROM_PTR_ESP adc rdx, qword ptr [esp]

#define ADC_RDI_FROM_PTR_RAX adc rdi, qword ptr [rax]
#define ADC_RDI_FROM_PTR_RBX adc rdi, qword ptr [rbx]
#define ADC_RDI_FROM_PTR_RCX adc rdi, qword ptr [rcx]
#define ADC_RDI_FROM_PTR_RDX adc rdi, qword ptr [rdx]
#define ADC_RDI_FROM_PTR_RDI adc rdi, qword ptr [rdi]
#define ADC_RDI_FROM_PTR_RSI adc rdi, qword ptr [rsi]
#define ADC_RDI_FROM_PTR_RBP adc rdi, qword ptr [rbp]
#define ADC_RDI_FROM_PTR_RSP adc rdi, qword ptr [rsp]
#define ADC_RDI_FROM_PTR_R8 adc rdi, qword ptr [r8]
#define ADC_RDI_FROM_PTR_R9 adc rdi, qword ptr [r9]
#define ADC_RDI_FROM_PTR_R10 adc rdi, qword ptr [r10]
#define ADC_RDI_FROM_PTR_R11 adc rdi, qword ptr [r11]
#define ADC_RDI_FROM_PTR_R12 adc rdi, qword ptr [r12]
#define ADC_RDI_FROM_PTR_R13 adc rdi, qword ptr [r13]
#define ADC_RDI_FROM_PTR_R14 adc rdi, qword ptr [r14]
#define ADC_RDI_FROM_PTR_R15 adc rdi, qword ptr [r15]
#define ADC_RDI_FROM_PTR_EAX adc rdi, qword ptr [eax]
#define ADC_RDI_FROM_PTR_EBX adc rdi, qword ptr [ebx]
#define ADC_RDI_FROM_PTR_ECX adc rdi, qword ptr [ecx]
#define ADC_RDI_FROM_PTR_EDX adc rdi, qword ptr [edx]
#define ADC_RDI_FROM_PTR_EDI adc rdi, qword ptr [edi]
#define ADC_RDI_FROM_PTR_ESI adc rdi, qword ptr [esi]
#define ADC_RDI_FROM_PTR_EBP adc rdi, qword ptr [ebp]
#define ADC_RDI_FROM_PTR_ESP adc rdi, qword ptr [esp]

#define ADC_RSI_FROM_PTR_RAX adc rsi, qword ptr [rax]
#define ADC_RSI_FROM_PTR_RBX adc rsi, qword ptr [rbx]
#define ADC_RSI_FROM_PTR_RCX adc rsi, qword ptr [rcx]
#define ADC_RSI_FROM_PTR_RDX adc rsi, qword ptr [rdx]
#define ADC_RSI_FROM_PTR_RDI adc rsi, qword ptr [rdi]
#define ADC_RSI_FROM_PTR_RSI adc rsi, qword ptr [rsi]
#define ADC_RSI_FROM_PTR_RBP adc rsi, qword ptr [rbp]
#define ADC_RSI_FROM_PTR_RSP adc rsi, qword ptr [rsp]
#define ADC_RSI_FROM_PTR_R8 adc rsi, qword ptr [r8]
#define ADC_RSI_FROM_PTR_R9 adc rsi, qword ptr [r9]
#define ADC_RSI_FROM_PTR_R10 adc rsi, qword ptr [r10]
#define ADC_RSI_FROM_PTR_R11 adc rsi, qword ptr [r11]
#define ADC_RSI_FROM_PTR_R12 adc rsi, qword ptr [r12]
#define ADC_RSI_FROM_PTR_R13 adc rsi, qword ptr [r13]
#define ADC_RSI_FROM_PTR_R14 adc rsi, qword ptr [r14]
#define ADC_RSI_FROM_PTR_R15 adc rsi, qword ptr [r15]
#define ADC_RSI_FROM_PTR_EAX adc rsi, qword ptr [eax]
#define ADC_RSI_FROM_PTR_EBX adc rsi, qword ptr [ebx]
#define ADC_RSI_FROM_PTR_ECX adc rsi, qword ptr [ecx]
#define ADC_RSI_FROM_PTR_EDX adc rsi, qword ptr [edx]
#define ADC_RSI_FROM_PTR_EDI adc rsi, qword ptr [edi]
#define ADC_RSI_FROM_PTR_ESI adc rsi, qword ptr [esi]
#define ADC_RSI_FROM_PTR_EBP adc rsi, qword ptr [ebp]
#define ADC_RSI_FROM_PTR_ESP adc rsi, qword ptr [esp]

#define ADC_RBP_FROM_PTR_RAX adc rbp, qword ptr [rax]
#define ADC_RBP_FROM_PTR_RBX adc rbp, qword ptr [rbx]
#define ADC_RBP_FROM_PTR_RCX adc rbp, qword ptr [rcx]
#define ADC_RBP_FROM_PTR_RDX adc rbp, qword ptr [rdx]
#define ADC_RBP_FROM_PTR_RDI adc rbp, qword ptr [rdi]
#define ADC_RBP_FROM_PTR_RSI adc rbp, qword ptr [rsi]
#define ADC_RBP_FROM_PTR_RBP adc rbp, qword ptr [rbp]
#define ADC_RBP_FROM_PTR_RSP adc rbp, qword ptr [rsp]
#define ADC_RBP_FROM_PTR_R8 adc rbp, qword ptr [r8]
#define ADC_RBP_FROM_PTR_R9 adc rbp, qword ptr [r9]
#define ADC_RBP_FROM_PTR_R10 adc rbp, qword ptr [r10]
#define ADC_RBP_FROM_PTR_R11 adc rbp, qword ptr [r11]
#define ADC_RBP_FROM_PTR_R12 adc rbp, qword ptr [r12]
#define ADC_RBP_FROM_PTR_R13 adc rbp, qword ptr [r13]
#define ADC_RBP_FROM_PTR_R14 adc rbp, qword ptr [r14]
#define ADC_RBP_FROM_PTR_R15 adc rbp, qword ptr [r15]
#define ADC_RBP_FROM_PTR_EAX adc rbp, qword ptr [eax]
#define ADC_RBP_FROM_PTR_EBX adc rbp, qword ptr [ebx]
#define ADC_RBP_FROM_PTR_ECX adc rbp, qword ptr [ecx]
#define ADC_RBP_FROM_PTR_EDX adc rbp, qword ptr [edx]
#define ADC_RBP_FROM_PTR_EDI adc rbp, qword ptr [edi]
#define ADC_RBP_FROM_PTR_ESI adc rbp, qword ptr [esi]
#define ADC_RBP_FROM_PTR_EBP adc rbp, qword ptr [ebp]
#define ADC_RBP_FROM_PTR_ESP adc rbp, qword ptr [esp]

#define ADC_RSP_FROM_PTR_RAX adc rsp, qword ptr [rax]
#define ADC_RSP_FROM_PTR_RBX adc rsp, qword ptr [rbx]
#define ADC_RSP_FROM_PTR_RCX adc rsp, qword ptr [rcx]
#define ADC_RSP_FROM_PTR_RDX adc rsp, qword ptr [rdx]
#define ADC_RSP_FROM_PTR_RDI adc rsp, qword ptr [rdi]
#define ADC_RSP_FROM_PTR_RSI adc rsp, qword ptr [rsi]
#define ADC_RSP_FROM_PTR_RBP adc rsp, qword ptr [rbp]
#define ADC_RSP_FROM_PTR_RSP adc rsp, qword ptr [rsp]
#define ADC_RSP_FROM_PTR_R8 adc rsp, qword ptr [r8]
#define ADC_RSP_FROM_PTR_R9 adc rsp, qword ptr [r9]
#define ADC_RSP_FROM_PTR_R10 adc rsp, qword ptr [r10]
#define ADC_RSP_FROM_PTR_R11 adc rsp, qword ptr [r11]
#define ADC_RSP_FROM_PTR_R12 adc rsp, qword ptr [r12]
#define ADC_RSP_FROM_PTR_R13 adc rsp, qword ptr [r13]
#define ADC_RSP_FROM_PTR_R14 adc rsp, qword ptr [r14]
#define ADC_RSP_FROM_PTR_R15 adc rsp, qword ptr [r15]
#define ADC_RSP_FROM_PTR_EAX adc rsp, qword ptr [eax]
#define ADC_RSP_FROM_PTR_EBX adc rsp, qword ptr [ebx]
#define ADC_RSP_FROM_PTR_ECX adc rsp, qword ptr [ecx]
#define ADC_RSP_FROM_PTR_EDX adc rsp, qword ptr [edx]
#define ADC_RSP_FROM_PTR_EDI adc rsp, qword ptr [edi]
#define ADC_RSP_FROM_PTR_ESI adc rsp, qword ptr [esi]
#define ADC_RSP_FROM_PTR_EBP adc rsp, qword ptr [ebp]
#define ADC_RSP_FROM_PTR_ESP adc rsp, qword ptr [esp]

#define ADC_R8_FROM_PTR_RAX adc r8, qword ptr [rax]
#define ADC_R8_FROM_PTR_RBX adc r8, qword ptr [rbx]
#define ADC_R8_FROM_PTR_RCX adc r8, qword ptr [rcx]
#define ADC_R8_FROM_PTR_RDX adc r8, qword ptr [rdx]
#define ADC_R8_FROM_PTR_RDI adc r8, qword ptr [rdi]
#define ADC_R8_FROM_PTR_RSI adc r8, qword ptr [rsi]
#define ADC_R8_FROM_PTR_RBP adc r8, qword ptr [rbp]
#define ADC_R8_FROM_PTR_RSP adc r8, qword ptr [rsp]
#define ADC_R8_FROM_PTR_R8 adc r8, qword ptr [r8]
#define ADC_R8_FROM_PTR_R9 adc r8, qword ptr [r9]
#define ADC_R8_FROM_PTR_R10 adc r8, qword ptr [r10]
#define ADC_R8_FROM_PTR_R11 adc r8, qword ptr [r11]
#define ADC_R8_FROM_PTR_R12 adc r8, qword ptr [r12]
#define ADC_R8_FROM_PTR_R13 adc r8, qword ptr [r13]
#define ADC_R8_FROM_PTR_R14 adc r8, qword ptr [r14]
#define ADC_R8_FROM_PTR_R15 adc r8, qword ptr [r15]
#define ADC_R8_FROM_PTR_EAX adc r8, qword ptr [eax]
#define ADC_R8_FROM_PTR_EBX adc r8, qword ptr [ebx]
#define ADC_R8_FROM_PTR_ECX adc r8, qword ptr [ecx]
#define ADC_R8_FROM_PTR_EDX adc r8, qword ptr [edx]
#define ADC_R8_FROM_PTR_EDI adc r8, qword ptr [edi]
#define ADC_R8_FROM_PTR_ESI adc r8, qword ptr [esi]
#define ADC_R8_FROM_PTR_EBP adc r8, qword ptr [ebp]
#define ADC_R8_FROM_PTR_ESP adc r8, qword ptr [esp]

#define ADC_R9_FROM_PTR_RAX adc r9, qword ptr [rax]
#define ADC_R9_FROM_PTR_RBX adc r9, qword ptr [rbx]
#define ADC_R9_FROM_PTR_RCX adc r9, qword ptr [rcx]
#define ADC_R9_FROM_PTR_RDX adc r9, qword ptr [rdx]
#define ADC_R9_FROM_PTR_RDI adc r9, qword ptr [rdi]
#define ADC_R9_FROM_PTR_RSI adc r9, qword ptr [rsi]
#define ADC_R9_FROM_PTR_RBP adc r9, qword ptr [rbp]
#define ADC_R9_FROM_PTR_RSP adc r9, qword ptr [rsp]
#define ADC_R9_FROM_PTR_R8 adc r9, qword ptr [r8]
#define ADC_R9_FROM_PTR_R9 adc r9, qword ptr [r9]
#define ADC_R9_FROM_PTR_R10 adc r9, qword ptr [r10]
#define ADC_R9_FROM_PTR_R11 adc r9, qword ptr [r11]
#define ADC_R9_FROM_PTR_R12 adc r9, qword ptr [r12]
#define ADC_R9_FROM_PTR_R13 adc r9, qword ptr [r13]
#define ADC_R9_FROM_PTR_R14 adc r9, qword ptr [r14]
#define ADC_R9_FROM_PTR_R15 adc r9, qword ptr [r15]
#define ADC_R9_FROM_PTR_EAX adc r9, qword ptr [eax]
#define ADC_R9_FROM_PTR_EBX adc r9, qword ptr [ebx]
#define ADC_R9_FROM_PTR_ECX adc r9, qword ptr [ecx]
#define ADC_R9_FROM_PTR_EDX adc r9, qword ptr [edx]
#define ADC_R9_FROM_PTR_EDI adc r9, qword ptr [edi]
#define ADC_R9_FROM_PTR_ESI adc r9, qword ptr [esi]
#define ADC_R9_FROM_PTR_EBP adc r9, qword ptr [ebp]
#define ADC_R9_FROM_PTR_ESP adc r9, qword ptr [esp]

#define ADC_R10_FROM_PTR_RAX adc r10, qword ptr [rax]
#define ADC_R10_FROM_PTR_RBX adc r10, qword ptr [rbx]
#define ADC_R10_FROM_PTR_RCX adc r10, qword ptr [rcx]
#define ADC_R10_FROM_PTR_RDX adc r10, qword ptr [rdx]
#define ADC_R10_FROM_PTR_RDI adc r10, qword ptr [rdi]
#define ADC_R10_FROM_PTR_RSI adc r10, qword ptr [rsi]
#define ADC_R10_FROM_PTR_RBP adc r10, qword ptr [rbp]
#define ADC_R10_FROM_PTR_RSP adc r10, qword ptr [rsp]
#define ADC_R10_FROM_PTR_R8 adc r10, qword ptr [r8]
#define ADC_R10_FROM_PTR_R9 adc r10, qword ptr [r9]
#define ADC_R10_FROM_PTR_R10 adc r10, qword ptr [r10]
#define ADC_R10_FROM_PTR_R11 adc r10, qword ptr [r11]
#define ADC_R10_FROM_PTR_R12 adc r10, qword ptr [r12]
#define ADC_R10_FROM_PTR_R13 adc r10, qword ptr [r13]
#define ADC_R10_FROM_PTR_R14 adc r10, qword ptr [r14]
#define ADC_R10_FROM_PTR_R15 adc r10, qword ptr [r15]
#define ADC_R10_FROM_PTR_EAX adc r10, qword ptr [eax]
#define ADC_R10_FROM_PTR_EBX adc r10, qword ptr [ebx]
#define ADC_R10_FROM_PTR_ECX adc r10, qword ptr [ecx]
#define ADC_R10_FROM_PTR_EDX adc r10, qword ptr [edx]
#define ADC_R10_FROM_PTR_EDI adc r10, qword ptr [edi]
#define ADC_R10_FROM_PTR_ESI adc r10, qword ptr [esi]
#define ADC_R10_FROM_PTR_EBP adc r10, qword ptr [ebp]
#define ADC_R10_FROM_PTR_ESP adc r10, qword ptr [esp]

#define ADC_R11_FROM_PTR_RAX adc r11, qword ptr [rax]
#define ADC_R11_FROM_PTR_RBX adc r11, qword ptr [rbx]
#define ADC_R11_FROM_PTR_RCX adc r11, qword ptr [rcx]
#define ADC_R11_FROM_PTR_RDX adc r11, qword ptr [rdx]
#define ADC_R11_FROM_PTR_RDI adc r11, qword ptr [rdi]
#define ADC_R11_FROM_PTR_RSI adc r11, qword ptr [rsi]
#define ADC_R11_FROM_PTR_RBP adc r11, qword ptr [rbp]
#define ADC_R11_FROM_PTR_RSP adc r11, qword ptr [rsp]
#define ADC_R11_FROM_PTR_R8 adc r11, qword ptr [r8]
#define ADC_R11_FROM_PTR_R9 adc r11, qword ptr [r9]
#define ADC_R11_FROM_PTR_R10 adc r11, qword ptr [r10]
#define ADC_R11_FROM_PTR_R11 adc r11, qword ptr [r11]
#define ADC_R11_FROM_PTR_R12 adc r11, qword ptr [r12]
#define ADC_R11_FROM_PTR_R13 adc r11, qword ptr [r13]
#define ADC_R11_FROM_PTR_R14 adc r11, qword ptr [r14]
#define ADC_R11_FROM_PTR_R15 adc r11, qword ptr [r15]
#define ADC_R11_FROM_PTR_EAX adc r11, qword ptr [eax]
#define ADC_R11_FROM_PTR_EBX adc r11, qword ptr [ebx]
#define ADC_R11_FROM_PTR_ECX adc r11, qword ptr [ecx]
#define ADC_R11_FROM_PTR_EDX adc r11, qword ptr [edx]
#define ADC_R11_FROM_PTR_EDI adc r11, qword ptr [edi]
#define ADC_R11_FROM_PTR_ESI adc r11, qword ptr [esi]
#define ADC_R11_FROM_PTR_EBP adc r11, qword ptr [ebp]
#define ADC_R11_FROM_PTR_ESP adc r11, qword ptr [esp]

#define ADC_R12_FROM_PTR_RAX adc r12, qword ptr [rax]
#define ADC_R12_FROM_PTR_RBX adc r12, qword ptr [rbx]
#define ADC_R12_FROM_PTR_RCX adc r12, qword ptr [rcx]
#define ADC_R12_FROM_PTR_RDX adc r12, qword ptr [rdx]
#define ADC_R12_FROM_PTR_RDI adc r12, qword ptr [rdi]
#define ADC_R12_FROM_PTR_RSI adc r12, qword ptr [rsi]
#define ADC_R12_FROM_PTR_RBP adc r12, qword ptr [rbp]
#define ADC_R12_FROM_PTR_RSP adc r12, qword ptr [rsp]
#define ADC_R12_FROM_PTR_R8 adc r12, qword ptr [r8]
#define ADC_R12_FROM_PTR_R9 adc r12, qword ptr [r9]
#define ADC_R12_FROM_PTR_R10 adc r12, qword ptr [r10]
#define ADC_R12_FROM_PTR_R11 adc r12, qword ptr [r11]
#define ADC_R12_FROM_PTR_R12 adc r12, qword ptr [r12]
#define ADC_R12_FROM_PTR_R13 adc r12, qword ptr [r13]
#define ADC_R12_FROM_PTR_R14 adc r12, qword ptr [r14]
#define ADC_R12_FROM_PTR_R15 adc r12, qword ptr [r15]
#define ADC_R12_FROM_PTR_EAX adc r12, qword ptr [eax]
#define ADC_R12_FROM_PTR_EBX adc r12, qword ptr [ebx]
#define ADC_R12_FROM_PTR_ECX adc r12, qword ptr [ecx]
#define ADC_R12_FROM_PTR_EDX adc r12, qword ptr [edx]
#define ADC_R12_FROM_PTR_EDI adc r12, qword ptr [edi]
#define ADC_R12_FROM_PTR_ESI adc r12, qword ptr [esi]
#define ADC_R12_FROM_PTR_EBP adc r12, qword ptr [ebp]
#define ADC_R12_FROM_PTR_ESP adc r12, qword ptr [esp]

#define ADC_R13_FROM_PTR_RAX adc r13, qword ptr [rax]
#define ADC_R13_FROM_PTR_RBX adc r13, qword ptr [rbx]
#define ADC_R13_FROM_PTR_RCX adc r13, qword ptr [rcx]
#define ADC_R13_FROM_PTR_RDX adc r13, qword ptr [rdx]
#define ADC_R13_FROM_PTR_RDI adc r13, qword ptr [rdi]
#define ADC_R13_FROM_PTR_RSI adc r13, qword ptr [rsi]
#define ADC_R13_FROM_PTR_RBP adc r13, qword ptr [rbp]
#define ADC_R13_FROM_PTR_RSP adc r13, qword ptr [rsp]
#define ADC_R13_FROM_PTR_R8 adc r13, qword ptr [r8]
#define ADC_R13_FROM_PTR_R9 adc r13, qword ptr [r9]
#define ADC_R13_FROM_PTR_R10 adc r13, qword ptr [r10]
#define ADC_R13_FROM_PTR_R11 adc r13, qword ptr [r11]
#define ADC_R13_FROM_PTR_R12 adc r13, qword ptr [r12]
#define ADC_R13_FROM_PTR_R13 adc r13, qword ptr [r13]
#define ADC_R13_FROM_PTR_R14 adc r13, qword ptr [r14]
#define ADC_R13_FROM_PTR_R15 adc r13, qword ptr [r15]
#define ADC_R13_FROM_PTR_EAX adc r13, qword ptr [eax]
#define ADC_R13_FROM_PTR_EBX adc r13, qword ptr [ebx]
#define ADC_R13_FROM_PTR_ECX adc r13, qword ptr [ecx]
#define ADC_R13_FROM_PTR_EDX adc r13, qword ptr [edx]
#define ADC_R13_FROM_PTR_EDI adc r13, qword ptr [edi]
#define ADC_R13_FROM_PTR_ESI adc r13, qword ptr [esi]
#define ADC_R13_FROM_PTR_EBP adc r13, qword ptr [ebp]
#define ADC_R13_FROM_PTR_ESP adc r13, qword ptr [esp]

#define ADC_R14_FROM_PTR_RAX adc r14, qword ptr [rax]
#define ADC_R14_FROM_PTR_RBX adc r14, qword ptr [rbx]
#define ADC_R14_FROM_PTR_RCX adc r14, qword ptr [rcx]
#define ADC_R14_FROM_PTR_RDX adc r14, qword ptr [rdx]
#define ADC_R14_FROM_PTR_RDI adc r14, qword ptr [rdi]
#define ADC_R14_FROM_PTR_RSI adc r14, qword ptr [rsi]
#define ADC_R14_FROM_PTR_RBP adc r14, qword ptr [rbp]
#define ADC_R14_FROM_PTR_RSP adc r14, qword ptr [rsp]
#define ADC_R14_FROM_PTR_R8 adc r14, qword ptr [r8]
#define ADC_R14_FROM_PTR_R9 adc r14, qword ptr [r9]
#define ADC_R14_FROM_PTR_R10 adc r14, qword ptr [r10]
#define ADC_R14_FROM_PTR_R11 adc r14, qword ptr [r11]
#define ADC_R14_FROM_PTR_R12 adc r14, qword ptr [r12]
#define ADC_R14_FROM_PTR_R13 adc r14, qword ptr [r13]
#define ADC_R14_FROM_PTR_R14 adc r14, qword ptr [r14]
#define ADC_R14_FROM_PTR_R15 adc r14, qword ptr [r15]
#define ADC_R14_FROM_PTR_EAX adc r14, qword ptr [eax]
#define ADC_R14_FROM_PTR_EBX adc r14, qword ptr [ebx]
#define ADC_R14_FROM_PTR_ECX adc r14, qword ptr [ecx]
#define ADC_R14_FROM_PTR_EDX adc r14, qword ptr [edx]
#define ADC_R14_FROM_PTR_EDI adc r14, qword ptr [edi]
#define ADC_R14_FROM_PTR_ESI adc r14, qword ptr [esi]
#define ADC_R14_FROM_PTR_EBP adc r14, qword ptr [ebp]
#define ADC_R14_FROM_PTR_ESP adc r14, qword ptr [esp]

#define ADC_R15_FROM_PTR_RAX adc r15, qword ptr [rax]
#define ADC_R15_FROM_PTR_RBX adc r15, qword ptr [rbx]
#define ADC_R15_FROM_PTR_RCX adc r15, qword ptr [rcx]
#define ADC_R15_FROM_PTR_RDX adc r15, qword ptr [rdx]
#define ADC_R15_FROM_PTR_RDI adc r15, qword ptr [rdi]
#define ADC_R15_FROM_PTR_RSI adc r15, qword ptr [rsi]
#define ADC_R15_FROM_PTR_RBP adc r15, qword ptr [rbp]
#define ADC_R15_FROM_PTR_RSP adc r15, qword ptr [rsp]
#define ADC_R15_FROM_PTR_R8 adc r15, qword ptr [r8]
#define ADC_R15_FROM_PTR_R9 adc r15, qword ptr [r9]
#define ADC_R15_FROM_PTR_R10 adc r15, qword ptr [r10]
#define ADC_R15_FROM_PTR_R11 adc r15, qword ptr [r11]
#define ADC_R15_FROM_PTR_R12 adc r15, qword ptr [r12]
#define ADC_R15_FROM_PTR_R13 adc r15, qword ptr [r13]
#define ADC_R15_FROM_PTR_R14 adc r15, qword ptr [r14]
#define ADC_R15_FROM_PTR_R15 adc r15, qword ptr [r15]
#define ADC_R15_FROM_PTR_EAX adc r15, qword ptr [eax]
#define ADC_R15_FROM_PTR_EBX adc r15, qword ptr [ebx]
#define ADC_R15_FROM_PTR_ECX adc r15, qword ptr [ecx]
#define ADC_R15_FROM_PTR_EDX adc r15, qword ptr [edx]
#define ADC_R15_FROM_PTR_EDI adc r15, qword ptr [edi]
#define ADC_R15_FROM_PTR_ESI adc r15, qword ptr [esi]
#define ADC_R15_FROM_PTR_EBP adc r15, qword ptr [ebp]
#define ADC_R15_FROM_PTR_ESP adc r15, qword ptr [esp]

#define ADC_RAX_TO_PTR_RAX adc qword ptr [rax], rax
#define ADC_RAX_TO_PTR_RBX adc qword ptr [rbx], rax
#define ADC_RAX_TO_PTR_RCX adc qword ptr [rcx], rax
#define ADC_RAX_TO_PTR_RDX adc qword ptr [rdx], rax
#define ADC_RAX_TO_PTR_RDI adc qword ptr [rdi], rax
#define ADC_RAX_TO_PTR_RSI adc qword ptr [rsi], rax
#define ADC_RAX_TO_PTR_RBP adc qword ptr [rbp], rax
#define ADC_RAX_TO_PTR_RSP adc qword ptr [rsp], rax
#define ADC_RAX_TO_PTR_R8 adc qword ptr [r8], rax
#define ADC_RAX_TO_PTR_R9 adc qword ptr [r9], rax
#define ADC_RAX_TO_PTR_R10 adc qword ptr [r10], rax
#define ADC_RAX_TO_PTR_R11 adc qword ptr [r11], rax
#define ADC_RAX_TO_PTR_R12 adc qword ptr [r12], rax
#define ADC_RAX_TO_PTR_R13 adc qword ptr [r13], rax
#define ADC_RAX_TO_PTR_R14 adc qword ptr [r14], rax
#define ADC_RAX_TO_PTR_R15 adc qword ptr [r15], rax
#define ADC_RAX_TO_PTR_EAX adc qword ptr [eax], rax
#define ADC_RAX_TO_PTR_EBX adc qword ptr [ebx], rax
#define ADC_RAX_TO_PTR_ECX adc qword ptr [ecx], rax
#define ADC_RAX_TO_PTR_EDX adc qword ptr [edx], rax
#define ADC_RAX_TO_PTR_EDI adc qword ptr [edi], rax
#define ADC_RAX_TO_PTR_ESI adc qword ptr [esi], rax
#define ADC_RAX_TO_PTR_EBP adc qword ptr [ebp], rax
#define ADC_RAX_TO_PTR_ESP adc qword ptr [esp], rax

#define ADC_RBX_TO_PTR_RAX adc qword ptr [rax], rbx
#define ADC_RBX_TO_PTR_RBX adc qword ptr [rbx], rbx
#define ADC_RBX_TO_PTR_RCX adc qword ptr [rcx], rbx
#define ADC_RBX_TO_PTR_RDX adc qword ptr [rdx], rbx
#define ADC_RBX_TO_PTR_RDI adc qword ptr [rdi], rbx
#define ADC_RBX_TO_PTR_RSI adc qword ptr [rsi], rbx
#define ADC_RBX_TO_PTR_RBP adc qword ptr [rbp], rbx
#define ADC_RBX_TO_PTR_RSP adc qword ptr [rsp], rbx
#define ADC_RBX_TO_PTR_R8 adc qword ptr [r8], rbx
#define ADC_RBX_TO_PTR_R9 adc qword ptr [r9], rbx
#define ADC_RBX_TO_PTR_R10 adc qword ptr [r10], rbx
#define ADC_RBX_TO_PTR_R11 adc qword ptr [r11], rbx
#define ADC_RBX_TO_PTR_R12 adc qword ptr [r12], rbx
#define ADC_RBX_TO_PTR_R13 adc qword ptr [r13], rbx
#define ADC_RBX_TO_PTR_R14 adc qword ptr [r14], rbx
#define ADC_RBX_TO_PTR_R15 adc qword ptr [r15], rbx
#define ADC_RBX_TO_PTR_EAX adc qword ptr [eax], rbx
#define ADC_RBX_TO_PTR_EBX adc qword ptr [ebx], rbx
#define ADC_RBX_TO_PTR_ECX adc qword ptr [ecx], rbx
#define ADC_RBX_TO_PTR_EDX adc qword ptr [edx], rbx
#define ADC_RBX_TO_PTR_EDI adc qword ptr [edi], rbx
#define ADC_RBX_TO_PTR_ESI adc qword ptr [esi], rbx
#define ADC_RBX_TO_PTR_EBP adc qword ptr [ebp], rbx
#define ADC_RBX_TO_PTR_ESP adc qword ptr [esp], rbx

#define ADC_RCX_TO_PTR_RAX adc qword ptr [rax], rcx
#define ADC_RCX_TO_PTR_RBX adc qword ptr [rbx], rcx
#define ADC_RCX_TO_PTR_RCX adc qword ptr [rcx], rcx
#define ADC_RCX_TO_PTR_RDX adc qword ptr [rdx], rcx
#define ADC_RCX_TO_PTR_RDI adc qword ptr [rdi], rcx
#define ADC_RCX_TO_PTR_RSI adc qword ptr [rsi], rcx
#define ADC_RCX_TO_PTR_RBP adc qword ptr [rbp], rcx
#define ADC_RCX_TO_PTR_RSP adc qword ptr [rsp], rcx
#define ADC_RCX_TO_PTR_R8 adc qword ptr [r8], rcx
#define ADC_RCX_TO_PTR_R9 adc qword ptr [r9], rcx
#define ADC_RCX_TO_PTR_R10 adc qword ptr [r10], rcx
#define ADC_RCX_TO_PTR_R11 adc qword ptr [r11], rcx
#define ADC_RCX_TO_PTR_R12 adc qword ptr [r12], rcx
#define ADC_RCX_TO_PTR_R13 adc qword ptr [r13], rcx
#define ADC_RCX_TO_PTR_R14 adc qword ptr [r14], rcx
#define ADC_RCX_TO_PTR_R15 adc qword ptr [r15], rcx
#define ADC_RCX_TO_PTR_EAX adc qword ptr [eax], rcx
#define ADC_RCX_TO_PTR_EBX adc qword ptr [ebx], rcx
#define ADC_RCX_TO_PTR_ECX adc qword ptr [ecx], rcx
#define ADC_RCX_TO_PTR_EDX adc qword ptr [edx], rcx
#define ADC_RCX_TO_PTR_EDI adc qword ptr [edi], rcx
#define ADC_RCX_TO_PTR_ESI adc qword ptr [esi], rcx
#define ADC_RCX_TO_PTR_EBP adc qword ptr [ebp], rcx
#define ADC_RCX_TO_PTR_ESP adc qword ptr [esp], rcx

#define ADC_RDX_TO_PTR_RAX adc qword ptr [rax], rdx
#define ADC_RDX_TO_PTR_RBX adc qword ptr [rbx], rdx
#define ADC_RDX_TO_PTR_RCX adc qword ptr [rcx], rdx
#define ADC_RDX_TO_PTR_RDX adc qword ptr [rdx], rdx
#define ADC_RDX_TO_PTR_RDI adc qword ptr [rdi], rdx
#define ADC_RDX_TO_PTR_RSI adc qword ptr [rsi], rdx
#define ADC_RDX_TO_PTR_RBP adc qword ptr [rbp], rdx
#define ADC_RDX_TO_PTR_RSP adc qword ptr [rsp], rdx
#define ADC_RDX_TO_PTR_R8 adc qword ptr [r8], rdx
#define ADC_RDX_TO_PTR_R9 adc qword ptr [r9], rdx
#define ADC_RDX_TO_PTR_R10 adc qword ptr [r10], rdx
#define ADC_RDX_TO_PTR_R11 adc qword ptr [r11], rdx
#define ADC_RDX_TO_PTR_R12 adc qword ptr [r12], rdx
#define ADC_RDX_TO_PTR_R13 adc qword ptr [r13], rdx
#define ADC_RDX_TO_PTR_R14 adc qword ptr [r14], rdx
#define ADC_RDX_TO_PTR_R15 adc qword ptr [r15], rdx
#define ADC_RDX_TO_PTR_EAX adc qword ptr [eax], rdx
#define ADC_RDX_TO_PTR_EBX adc qword ptr [ebx], rdx
#define ADC_RDX_TO_PTR_ECX adc qword ptr [ecx], rdx
#define ADC_RDX_TO_PTR_EDX adc qword ptr [edx], rdx
#define ADC_RDX_TO_PTR_EDI adc qword ptr [edi], rdx
#define ADC_RDX_TO_PTR_ESI adc qword ptr [esi], rdx
#define ADC_RDX_TO_PTR_EBP adc qword ptr [ebp], rdx
#define ADC_RDX_TO_PTR_ESP adc qword ptr [esp], rdx

#define ADC_RDI_TO_PTR_RAX adc qword ptr [rax], rdi
#define ADC_RDI_TO_PTR_RBX adc qword ptr [rbx], rdi
#define ADC_RDI_TO_PTR_RCX adc qword ptr [rcx], rdi
#define ADC_RDI_TO_PTR_RDX adc qword ptr [rdx], rdi
#define ADC_RDI_TO_PTR_RDI adc qword ptr [rdi], rdi
#define ADC_RDI_TO_PTR_RSI adc qword ptr [rsi], rdi
#define ADC_RDI_TO_PTR_RBP adc qword ptr [rbp], rdi
#define ADC_RDI_TO_PTR_RSP adc qword ptr [rsp], rdi
#define ADC_RDI_TO_PTR_R8 adc qword ptr [r8], rdi
#define ADC_RDI_TO_PTR_R9 adc qword ptr [r9], rdi
#define ADC_RDI_TO_PTR_R10 adc qword ptr [r10], rdi
#define ADC_RDI_TO_PTR_R11 adc qword ptr [r11], rdi
#define ADC_RDI_TO_PTR_R12 adc qword ptr [r12], rdi
#define ADC_RDI_TO_PTR_R13 adc qword ptr [r13], rdi
#define ADC_RDI_TO_PTR_R14 adc qword ptr [r14], rdi
#define ADC_RDI_TO_PTR_R15 adc qword ptr [r15], rdi
#define ADC_RDI_TO_PTR_EAX adc qword ptr [eax], rdi
#define ADC_RDI_TO_PTR_EBX adc qword ptr [ebx], rdi
#define ADC_RDI_TO_PTR_ECX adc qword ptr [ecx], rdi
#define ADC_RDI_TO_PTR_EDX adc qword ptr [edx], rdi
#define ADC_RDI_TO_PTR_EDI adc qword ptr [edi], rdi
#define ADC_RDI_TO_PTR_ESI adc qword ptr [esi], rdi
#define ADC_RDI_TO_PTR_EBP adc qword ptr [ebp], rdi
#define ADC_RDI_TO_PTR_ESP adc qword ptr [esp], rdi

#define ADC_RSI_TO_PTR_RAX adc qword ptr [rax], rsi
#define ADC_RSI_TO_PTR_RBX adc qword ptr [rbx], rsi
#define ADC_RSI_TO_PTR_RCX adc qword ptr [rcx], rsi
#define ADC_RSI_TO_PTR_RDX adc qword ptr [rdx], rsi
#define ADC_RSI_TO_PTR_RDI adc qword ptr [rdi], rsi
#define ADC_RSI_TO_PTR_RSI adc qword ptr [rsi], rsi
#define ADC_RSI_TO_PTR_RBP adc qword ptr [rbp], rsi
#define ADC_RSI_TO_PTR_RSP adc qword ptr [rsp], rsi
#define ADC_RSI_TO_PTR_R8 adc qword ptr [r8], rsi
#define ADC_RSI_TO_PTR_R9 adc qword ptr [r9], rsi
#define ADC_RSI_TO_PTR_R10 adc qword ptr [r10], rsi
#define ADC_RSI_TO_PTR_R11 adc qword ptr [r11], rsi
#define ADC_RSI_TO_PTR_R12 adc qword ptr [r12], rsi
#define ADC_RSI_TO_PTR_R13 adc qword ptr [r13], rsi
#define ADC_RSI_TO_PTR_R14 adc qword ptr [r14], rsi
#define ADC_RSI_TO_PTR_R15 adc qword ptr [r15], rsi
#define ADC_RSI_TO_PTR_EAX adc qword ptr [eax], rsi
#define ADC_RSI_TO_PTR_EBX adc qword ptr [ebx], rsi
#define ADC_RSI_TO_PTR_ECX adc qword ptr [ecx], rsi
#define ADC_RSI_TO_PTR_EDX adc qword ptr [edx], rsi
#define ADC_RSI_TO_PTR_EDI adc qword ptr [edi], rsi
#define ADC_RSI_TO_PTR_ESI adc qword ptr [esi], rsi
#define ADC_RSI_TO_PTR_EBP adc qword ptr [ebp], rsi
#define ADC_RSI_TO_PTR_ESP adc qword ptr [esp], rsi

#define ADC_RBP_TO_PTR_RAX adc qword ptr [rax], rbp
#define ADC_RBP_TO_PTR_RBX adc qword ptr [rbx], rbp
#define ADC_RBP_TO_PTR_RCX adc qword ptr [rcx], rbp
#define ADC_RBP_TO_PTR_RDX adc qword ptr [rdx], rbp
#define ADC_RBP_TO_PTR_RDI adc qword ptr [rdi], rbp
#define ADC_RBP_TO_PTR_RSI adc qword ptr [rsi], rbp
#define ADC_RBP_TO_PTR_RBP adc qword ptr [rbp], rbp
#define ADC_RBP_TO_PTR_RSP adc qword ptr [rsp], rbp
#define ADC_RBP_TO_PTR_R8 adc qword ptr [r8], rbp
#define ADC_RBP_TO_PTR_R9 adc qword ptr [r9], rbp
#define ADC_RBP_TO_PTR_R10 adc qword ptr [r10], rbp
#define ADC_RBP_TO_PTR_R11 adc qword ptr [r11], rbp
#define ADC_RBP_TO_PTR_R12 adc qword ptr [r12], rbp
#define ADC_RBP_TO_PTR_R13 adc qword ptr [r13], rbp
#define ADC_RBP_TO_PTR_R14 adc qword ptr [r14], rbp
#define ADC_RBP_TO_PTR_R15 adc qword ptr [r15], rbp
#define ADC_RBP_TO_PTR_EAX adc qword ptr [eax], rbp
#define ADC_RBP_TO_PTR_EBX adc qword ptr [ebx], rbp
#define ADC_RBP_TO_PTR_ECX adc qword ptr [ecx], rbp
#define ADC_RBP_TO_PTR_EDX adc qword ptr [edx], rbp
#define ADC_RBP_TO_PTR_EDI adc qword ptr [edi], rbp
#define ADC_RBP_TO_PTR_ESI adc qword ptr [esi], rbp
#define ADC_RBP_TO_PTR_EBP adc qword ptr [ebp], rbp
#define ADC_RBP_TO_PTR_ESP adc qword ptr [esp], rbp

#define ADC_RSP_TO_PTR_RAX adc qword ptr [rax], rsp
#define ADC_RSP_TO_PTR_RBX adc qword ptr [rbx], rsp
#define ADC_RSP_TO_PTR_RCX adc qword ptr [rcx], rsp
#define ADC_RSP_TO_PTR_RDX adc qword ptr [rdx], rsp
#define ADC_RSP_TO_PTR_RDI adc qword ptr [rdi], rsp
#define ADC_RSP_TO_PTR_RSI adc qword ptr [rsi], rsp
#define ADC_RSP_TO_PTR_RBP adc qword ptr [rbp], rsp
#define ADC_RSP_TO_PTR_RSP adc qword ptr [rsp], rsp
#define ADC_RSP_TO_PTR_R8 adc qword ptr [r8], rsp
#define ADC_RSP_TO_PTR_R9 adc qword ptr [r9], rsp
#define ADC_RSP_TO_PTR_R10 adc qword ptr [r10], rsp
#define ADC_RSP_TO_PTR_R11 adc qword ptr [r11], rsp
#define ADC_RSP_TO_PTR_R12 adc qword ptr [r12], rsp
#define ADC_RSP_TO_PTR_R13 adc qword ptr [r13], rsp
#define ADC_RSP_TO_PTR_R14 adc qword ptr [r14], rsp
#define ADC_RSP_TO_PTR_R15 adc qword ptr [r15], rsp
#define ADC_RSP_TO_PTR_EAX adc qword ptr [eax], rsp
#define ADC_RSP_TO_PTR_EBX adc qword ptr [ebx], rsp
#define ADC_RSP_TO_PTR_ECX adc qword ptr [ecx], rsp
#define ADC_RSP_TO_PTR_EDX adc qword ptr [edx], rsp
#define ADC_RSP_TO_PTR_EDI adc qword ptr [edi], rsp
#define ADC_RSP_TO_PTR_ESI adc qword ptr [esi], rsp
#define ADC_RSP_TO_PTR_EBP adc qword ptr [ebp], rsp
#define ADC_RSP_TO_PTR_ESP adc qword ptr [esp], rsp

#define ADC_R8_TO_PTR_RAX adc qword ptr [rax], r8
#define ADC_R8_TO_PTR_RBX adc qword ptr [rbx], r8
#define ADC_R8_TO_PTR_RCX adc qword ptr [rcx], r8
#define ADC_R8_TO_PTR_RDX adc qword ptr [rdx], r8
#define ADC_R8_TO_PTR_RDI adc qword ptr [rdi], r8
#define ADC_R8_TO_PTR_RSI adc qword ptr [rsi], r8
#define ADC_R8_TO_PTR_RBP adc qword ptr [rbp], r8
#define ADC_R8_TO_PTR_RSP adc qword ptr [rsp], r8
#define ADC_R8_TO_PTR_R8 adc qword ptr [r8], r8
#define ADC_R8_TO_PTR_R9 adc qword ptr [r9], r8
#define ADC_R8_TO_PTR_R10 adc qword ptr [r10], r8
#define ADC_R8_TO_PTR_R11 adc qword ptr [r11], r8
#define ADC_R8_TO_PTR_R12 adc qword ptr [r12], r8
#define ADC_R8_TO_PTR_R13 adc qword ptr [r13], r8
#define ADC_R8_TO_PTR_R14 adc qword ptr [r14], r8
#define ADC_R8_TO_PTR_R15 adc qword ptr [r15], r8
#define ADC_R8_TO_PTR_EAX adc qword ptr [eax], r8
#define ADC_R8_TO_PTR_EBX adc qword ptr [ebx], r8
#define ADC_R8_TO_PTR_ECX adc qword ptr [ecx], r8
#define ADC_R8_TO_PTR_EDX adc qword ptr [edx], r8
#define ADC_R8_TO_PTR_EDI adc qword ptr [edi], r8
#define ADC_R8_TO_PTR_ESI adc qword ptr [esi], r8
#define ADC_R8_TO_PTR_EBP adc qword ptr [ebp], r8
#define ADC_R8_TO_PTR_ESP adc qword ptr [esp], r8

#define ADC_R9_TO_PTR_RAX adc qword ptr [rax], r9
#define ADC_R9_TO_PTR_RBX adc qword ptr [rbx], r9
#define ADC_R9_TO_PTR_RCX adc qword ptr [rcx], r9
#define ADC_R9_TO_PTR_RDX adc qword ptr [rdx], r9
#define ADC_R9_TO_PTR_RDI adc qword ptr [rdi], r9
#define ADC_R9_TO_PTR_RSI adc qword ptr [rsi], r9
#define ADC_R9_TO_PTR_RBP adc qword ptr [rbp], r9
#define ADC_R9_TO_PTR_RSP adc qword ptr [rsp], r9
#define ADC_R9_TO_PTR_R8 adc qword ptr [r8], r9
#define ADC_R9_TO_PTR_R9 adc qword ptr [r9], r9
#define ADC_R9_TO_PTR_R10 adc qword ptr [r10], r9
#define ADC_R9_TO_PTR_R11 adc qword ptr [r11], r9
#define ADC_R9_TO_PTR_R12 adc qword ptr [r12], r9
#define ADC_R9_TO_PTR_R13 adc qword ptr [r13], r9
#define ADC_R9_TO_PTR_R14 adc qword ptr [r14], r9
#define ADC_R9_TO_PTR_R15 adc qword ptr [r15], r9
#define ADC_R9_TO_PTR_EAX adc qword ptr [eax], r9
#define ADC_R9_TO_PTR_EBX adc qword ptr [ebx], r9
#define ADC_R9_TO_PTR_ECX adc qword ptr [ecx], r9
#define ADC_R9_TO_PTR_EDX adc qword ptr [edx], r9
#define ADC_R9_TO_PTR_EDI adc qword ptr [edi], r9
#define ADC_R9_TO_PTR_ESI adc qword ptr [esi], r9
#define ADC_R9_TO_PTR_EBP adc qword ptr [ebp], r9
#define ADC_R9_TO_PTR_ESP adc qword ptr [esp], r9

#define ADC_R10_TO_PTR_RAX adc qword ptr [rax], r10
#define ADC_R10_TO_PTR_RBX adc qword ptr [rbx], r10
#define ADC_R10_TO_PTR_RCX adc qword ptr [rcx], r10
#define ADC_R10_TO_PTR_RDX adc qword ptr [rdx], r10
#define ADC_R10_TO_PTR_RDI adc qword ptr [rdi], r10
#define ADC_R10_TO_PTR_RSI adc qword ptr [rsi], r10
#define ADC_R10_TO_PTR_RBP adc qword ptr [rbp], r10
#define ADC_R10_TO_PTR_RSP adc qword ptr [rsp], r10
#define ADC_R10_TO_PTR_R8 adc qword ptr [r8], r10
#define ADC_R10_TO_PTR_R9 adc qword ptr [r9], r10
#define ADC_R10_TO_PTR_R10 adc qword ptr [r10], r10
#define ADC_R10_TO_PTR_R11 adc qword ptr [r11], r10
#define ADC_R10_TO_PTR_R12 adc qword ptr [r12], r10
#define ADC_R10_TO_PTR_R13 adc qword ptr [r13], r10
#define ADC_R10_TO_PTR_R14 adc qword ptr [r14], r10
#define ADC_R10_TO_PTR_R15 adc qword ptr [r15], r10
#define ADC_R10_TO_PTR_EAX adc qword ptr [eax], r10
#define ADC_R10_TO_PTR_EBX adc qword ptr [ebx], r10
#define ADC_R10_TO_PTR_ECX adc qword ptr [ecx], r10
#define ADC_R10_TO_PTR_EDX adc qword ptr [edx], r10
#define ADC_R10_TO_PTR_EDI adc qword ptr [edi], r10
#define ADC_R10_TO_PTR_ESI adc qword ptr [esi], r10
#define ADC_R10_TO_PTR_EBP adc qword ptr [ebp], r10
#define ADC_R10_TO_PTR_ESP adc qword ptr [esp], r10

#define ADC_R11_TO_PTR_RAX adc qword ptr [rax], r11
#define ADC_R11_TO_PTR_RBX adc qword ptr [rbx], r11
#define ADC_R11_TO_PTR_RCX adc qword ptr [rcx], r11
#define ADC_R11_TO_PTR_RDX adc qword ptr [rdx], r11
#define ADC_R11_TO_PTR_RDI adc qword ptr [rdi], r11
#define ADC_R11_TO_PTR_RSI adc qword ptr [rsi], r11
#define ADC_R11_TO_PTR_RBP adc qword ptr [rbp], r11
#define ADC_R11_TO_PTR_RSP adc qword ptr [rsp], r11
#define ADC_R11_TO_PTR_R8 adc qword ptr [r8], r11
#define ADC_R11_TO_PTR_R9 adc qword ptr [r9], r11
#define ADC_R11_TO_PTR_R10 adc qword ptr [r10], r11
#define ADC_R11_TO_PTR_R11 adc qword ptr [r11], r11
#define ADC_R11_TO_PTR_R12 adc qword ptr [r12], r11
#define ADC_R11_TO_PTR_R13 adc qword ptr [r13], r11
#define ADC_R11_TO_PTR_R14 adc qword ptr [r14], r11
#define ADC_R11_TO_PTR_R15 adc qword ptr [r15], r11
#define ADC_R11_TO_PTR_EAX adc qword ptr [eax], r11
#define ADC_R11_TO_PTR_EBX adc qword ptr [ebx], r11
#define ADC_R11_TO_PTR_ECX adc qword ptr [ecx], r11
#define ADC_R11_TO_PTR_EDX adc qword ptr [edx], r11
#define ADC_R11_TO_PTR_EDI adc qword ptr [edi], r11
#define ADC_R11_TO_PTR_ESI adc qword ptr [esi], r11
#define ADC_R11_TO_PTR_EBP adc qword ptr [ebp], r11
#define ADC_R11_TO_PTR_ESP adc qword ptr [esp], r11

#define ADC_R12_TO_PTR_RAX adc qword ptr [rax], r12
#define ADC_R12_TO_PTR_RBX adc qword ptr [rbx], r12
#define ADC_R12_TO_PTR_RCX adc qword ptr [rcx], r12
#define ADC_R12_TO_PTR_RDX adc qword ptr [rdx], r12
#define ADC_R12_TO_PTR_RDI adc qword ptr [rdi], r12
#define ADC_R12_TO_PTR_RSI adc qword ptr [rsi], r12
#define ADC_R12_TO_PTR_RBP adc qword ptr [rbp], r12
#define ADC_R12_TO_PTR_RSP adc qword ptr [rsp], r12
#define ADC_R12_TO_PTR_R8 adc qword ptr [r8], r12
#define ADC_R12_TO_PTR_R9 adc qword ptr [r9], r12
#define ADC_R12_TO_PTR_R10 adc qword ptr [r10], r12
#define ADC_R12_TO_PTR_R11 adc qword ptr [r11], r12
#define ADC_R12_TO_PTR_R12 adc qword ptr [r12], r12
#define ADC_R12_TO_PTR_R13 adc qword ptr [r13], r12
#define ADC_R12_TO_PTR_R14 adc qword ptr [r14], r12
#define ADC_R12_TO_PTR_R15 adc qword ptr [r15], r12
#define ADC_R12_TO_PTR_EAX adc qword ptr [eax], r12
#define ADC_R12_TO_PTR_EBX adc qword ptr [ebx], r12
#define ADC_R12_TO_PTR_ECX adc qword ptr [ecx], r12
#define ADC_R12_TO_PTR_EDX adc qword ptr [edx], r12
#define ADC_R12_TO_PTR_EDI adc qword ptr [edi], r12
#define ADC_R12_TO_PTR_ESI adc qword ptr [esi], r12
#define ADC_R12_TO_PTR_EBP adc qword ptr [ebp], r12
#define ADC_R12_TO_PTR_ESP adc qword ptr [esp], r12

#define ADC_R13_TO_PTR_RAX adc qword ptr [rax], r13
#define ADC_R13_TO_PTR_RBX adc qword ptr [rbx], r13
#define ADC_R13_TO_PTR_RCX adc qword ptr [rcx], r13
#define ADC_R13_TO_PTR_RDX adc qword ptr [rdx], r13
#define ADC_R13_TO_PTR_RDI adc qword ptr [rdi], r13
#define ADC_R13_TO_PTR_RSI adc qword ptr [rsi], r13
#define ADC_R13_TO_PTR_RBP adc qword ptr [rbp], r13
#define ADC_R13_TO_PTR_RSP adc qword ptr [rsp], r13
#define ADC_R13_TO_PTR_R8 adc qword ptr [r8], r13
#define ADC_R13_TO_PTR_R9 adc qword ptr [r9], r13
#define ADC_R13_TO_PTR_R10 adc qword ptr [r10], r13
#define ADC_R13_TO_PTR_R11 adc qword ptr [r11], r13
#define ADC_R13_TO_PTR_R12 adc qword ptr [r12], r13
#define ADC_R13_TO_PTR_R13 adc qword ptr [r13], r13
#define ADC_R13_TO_PTR_R14 adc qword ptr [r14], r13
#define ADC_R13_TO_PTR_R15 adc qword ptr [r15], r13
#define ADC_R13_TO_PTR_EAX adc qword ptr [eax], r13
#define ADC_R13_TO_PTR_EBX adc qword ptr [ebx], r13
#define ADC_R13_TO_PTR_ECX adc qword ptr [ecx], r13
#define ADC_R13_TO_PTR_EDX adc qword ptr [edx], r13
#define ADC_R13_TO_PTR_EDI adc qword ptr [edi], r13
#define ADC_R13_TO_PTR_ESI adc qword ptr [esi], r13
#define ADC_R13_TO_PTR_EBP adc qword ptr [ebp], r13
#define ADC_R13_TO_PTR_ESP adc qword ptr [esp], r13

#define ADC_R14_TO_PTR_RAX adc qword ptr [rax], r14
#define ADC_R14_TO_PTR_RBX adc qword ptr [rbx], r14
#define ADC_R14_TO_PTR_RCX adc qword ptr [rcx], r14
#define ADC_R14_TO_PTR_RDX adc qword ptr [rdx], r14
#define ADC_R14_TO_PTR_RDI adc qword ptr [rdi], r14
#define ADC_R14_TO_PTR_RSI adc qword ptr [rsi], r14
#define ADC_R14_TO_PTR_RBP adc qword ptr [rbp], r14
#define ADC_R14_TO_PTR_RSP adc qword ptr [rsp], r14
#define ADC_R14_TO_PTR_R8 adc qword ptr [r8], r14
#define ADC_R14_TO_PTR_R9 adc qword ptr [r9], r14
#define ADC_R14_TO_PTR_R10 adc qword ptr [r10], r14
#define ADC_R14_TO_PTR_R11 adc qword ptr [r11], r14
#define ADC_R14_TO_PTR_R12 adc qword ptr [r12], r14
#define ADC_R14_TO_PTR_R13 adc qword ptr [r13], r14
#define ADC_R14_TO_PTR_R14 adc qword ptr [r14], r14
#define ADC_R14_TO_PTR_R15 adc qword ptr [r15], r14
#define ADC_R14_TO_PTR_EAX adc qword ptr [eax], r14
#define ADC_R14_TO_PTR_EBX adc qword ptr [ebx], r14
#define ADC_R14_TO_PTR_ECX adc qword ptr [ecx], r14
#define ADC_R14_TO_PTR_EDX adc qword ptr [edx], r14
#define ADC_R14_TO_PTR_EDI adc qword ptr [edi], r14
#define ADC_R14_TO_PTR_ESI adc qword ptr [esi], r14
#define ADC_R14_TO_PTR_EBP adc qword ptr [ebp], r14
#define ADC_R14_TO_PTR_ESP adc qword ptr [esp], r14

#define ADC_R15_TO_PTR_RAX adc qword ptr [rax], r15
#define ADC_R15_TO_PTR_RBX adc qword ptr [rbx], r15
#define ADC_R15_TO_PTR_RCX adc qword ptr [rcx], r15
#define ADC_R15_TO_PTR_RDX adc qword ptr [rdx], r15
#define ADC_R15_TO_PTR_RDI adc qword ptr [rdi], r15
#define ADC_R15_TO_PTR_RSI adc qword ptr [rsi], r15
#define ADC_R15_TO_PTR_RBP adc qword ptr [rbp], r15
#define ADC_R15_TO_PTR_RSP adc qword ptr [rsp], r15
#define ADC_R15_TO_PTR_R8 adc qword ptr [r8], r15
#define ADC_R15_TO_PTR_R9 adc qword ptr [r9], r15
#define ADC_R15_TO_PTR_R10 adc qword ptr [r10], r15
#define ADC_R15_TO_PTR_R11 adc qword ptr [r11], r15
#define ADC_R15_TO_PTR_R12 adc qword ptr [r12], r15
#define ADC_R15_TO_PTR_R13 adc qword ptr [r13], r15
#define ADC_R15_TO_PTR_R14 adc qword ptr [r14], r15
#define ADC_R15_TO_PTR_R15 adc qword ptr [r15], r15
#define ADC_R15_TO_PTR_EAX adc qword ptr [eax], r15
#define ADC_R15_TO_PTR_EBX adc qword ptr [ebx], r15
#define ADC_R15_TO_PTR_ECX adc qword ptr [ecx], r15
#define ADC_R15_TO_PTR_EDX adc qword ptr [edx], r15
#define ADC_R15_TO_PTR_EDI adc qword ptr [edi], r15
#define ADC_R15_TO_PTR_ESI adc qword ptr [esi], r15
#define ADC_R15_TO_PTR_EBP adc qword ptr [ebp], r15
#define ADC_R15_TO_PTR_ESP adc qword ptr [esp], r15

#define ADC_RAX_FROM_PTR_RAX_(VALUE) adc rax, qword ptr [rax + VALUE]
#define ADC_RAX_FROM_PTR_RBX_(VALUE) adc rax, qword ptr [rbx + VALUE]
#define ADC_RAX_FROM_PTR_RCX_(VALUE) adc rax, qword ptr [rcx + VALUE]
#define ADC_RAX_FROM_PTR_RDX_(VALUE) adc rax, qword ptr [rdx + VALUE]
#define ADC_RAX_FROM_PTR_RDI_(VALUE) adc rax, qword ptr [rdi + VALUE]
#define ADC_RAX_FROM_PTR_RSI_(VALUE) adc rax, qword ptr [rsi + VALUE]
#define ADC_RAX_FROM_PTR_RBP_(VALUE) adc rax, qword ptr [rbp + VALUE]
#define ADC_RAX_FROM_PTR_RSP_(VALUE) adc rax, qword ptr [rsp + VALUE]
#define ADC_RAX_FROM_PTR_R8_(VALUE) adc rax, qword ptr [r8 + VALUE]
#define ADC_RAX_FROM_PTR_R9_(VALUE) adc rax, qword ptr [r9 + VALUE]
#define ADC_RAX_FROM_PTR_R10_(VALUE) adc rax, qword ptr [r10 + VALUE]
#define ADC_RAX_FROM_PTR_R11_(VALUE) adc rax, qword ptr [r11 + VALUE]
#define ADC_RAX_FROM_PTR_R12_(VALUE) adc rax, qword ptr [r12 + VALUE]
#define ADC_RAX_FROM_PTR_R13_(VALUE) adc rax, qword ptr [r13 + VALUE]
#define ADC_RAX_FROM_PTR_R14_(VALUE) adc rax, qword ptr [r14 + VALUE]
#define ADC_RAX_FROM_PTR_R15_(VALUE) adc rax, qword ptr [r15 + VALUE]
#define ADC_RAX_FROM_PTR_EAX_(VALUE) adc rax, qword ptr [eax + VALUE]
#define ADC_RAX_FROM_PTR_EBX_(VALUE) adc rax, qword ptr [ebx + VALUE]
#define ADC_RAX_FROM_PTR_ECX_(VALUE) adc rax, qword ptr [ecx + VALUE]
#define ADC_RAX_FROM_PTR_EDX_(VALUE) adc rax, qword ptr [edx + VALUE]
#define ADC_RAX_FROM_PTR_EDI_(VALUE) adc rax, qword ptr [edi + VALUE]
#define ADC_RAX_FROM_PTR_ESI_(VALUE) adc rax, qword ptr [esi + VALUE]
#define ADC_RAX_FROM_PTR_EBP_(VALUE) adc rax, qword ptr [ebp + VALUE]
#define ADC_RAX_FROM_PTR_ESP_(VALUE) adc rax, qword ptr [esp + VALUE]

#define ADC_RBX_FROM_PTR_RAX_(VALUE) adc rbx, qword ptr [rax + VALUE]
#define ADC_RBX_FROM_PTR_RBX_(VALUE) adc rbx, qword ptr [rbx + VALUE]
#define ADC_RBX_FROM_PTR_RCX_(VALUE) adc rbx, qword ptr [rcx + VALUE]
#define ADC_RBX_FROM_PTR_RDX_(VALUE) adc rbx, qword ptr [rdx + VALUE]
#define ADC_RBX_FROM_PTR_RDI_(VALUE) adc rbx, qword ptr [rdi + VALUE]
#define ADC_RBX_FROM_PTR_RSI_(VALUE) adc rbx, qword ptr [rsi + VALUE]
#define ADC_RBX_FROM_PTR_RBP_(VALUE) adc rbx, qword ptr [rbp + VALUE]
#define ADC_RBX_FROM_PTR_RSP_(VALUE) adc rbx, qword ptr [rsp + VALUE]
#define ADC_RBX_FROM_PTR_R8_(VALUE) adc rbx, qword ptr [r8 + VALUE]
#define ADC_RBX_FROM_PTR_R9_(VALUE) adc rbx, qword ptr [r9 + VALUE]
#define ADC_RBX_FROM_PTR_R10_(VALUE) adc rbx, qword ptr [r10 + VALUE]
#define ADC_RBX_FROM_PTR_R11_(VALUE) adc rbx, qword ptr [r11 + VALUE]
#define ADC_RBX_FROM_PTR_R12_(VALUE) adc rbx, qword ptr [r12 + VALUE]
#define ADC_RBX_FROM_PTR_R13_(VALUE) adc rbx, qword ptr [r13 + VALUE]
#define ADC_RBX_FROM_PTR_R14_(VALUE) adc rbx, qword ptr [r14 + VALUE]
#define ADC_RBX_FROM_PTR_R15_(VALUE) adc rbx, qword ptr [r15 + VALUE]
#define ADC_RBX_FROM_PTR_EAX_(VALUE) adc rbx, qword ptr [eax + VALUE]
#define ADC_RBX_FROM_PTR_EBX_(VALUE) adc rbx, qword ptr [ebx + VALUE]
#define ADC_RBX_FROM_PTR_ECX_(VALUE) adc rbx, qword ptr [ecx + VALUE]
#define ADC_RBX_FROM_PTR_EDX_(VALUE) adc rbx, qword ptr [edx + VALUE]
#define ADC_RBX_FROM_PTR_EDI_(VALUE) adc rbx, qword ptr [edi + VALUE]
#define ADC_RBX_FROM_PTR_ESI_(VALUE) adc rbx, qword ptr [esi + VALUE]
#define ADC_RBX_FROM_PTR_EBP_(VALUE) adc rbx, qword ptr [ebp + VALUE]
#define ADC_RBX_FROM_PTR_ESP_(VALUE) adc rbx, qword ptr [esp + VALUE]

#define ADC_RCX_FROM_PTR_RAX_(VALUE) adc rcx, qword ptr [rax + VALUE]
#define ADC_RCX_FROM_PTR_RBX_(VALUE) adc rcx, qword ptr [rbx + VALUE]
#define ADC_RCX_FROM_PTR_RCX_(VALUE) adc rcx, qword ptr [rcx + VALUE]
#define ADC_RCX_FROM_PTR_RDX_(VALUE) adc rcx, qword ptr [rdx + VALUE]
#define ADC_RCX_FROM_PTR_RDI_(VALUE) adc rcx, qword ptr [rdi + VALUE]
#define ADC_RCX_FROM_PTR_RSI_(VALUE) adc rcx, qword ptr [rsi + VALUE]
#define ADC_RCX_FROM_PTR_RBP_(VALUE) adc rcx, qword ptr [rbp + VALUE]
#define ADC_RCX_FROM_PTR_RSP_(VALUE) adc rcx, qword ptr [rsp + VALUE]
#define ADC_RCX_FROM_PTR_R8_(VALUE) adc rcx, qword ptr [r8 + VALUE]
#define ADC_RCX_FROM_PTR_R9_(VALUE) adc rcx, qword ptr [r9 + VALUE]
#define ADC_RCX_FROM_PTR_R10_(VALUE) adc rcx, qword ptr [r10 + VALUE]
#define ADC_RCX_FROM_PTR_R11_(VALUE) adc rcx, qword ptr [r11 + VALUE]
#define ADC_RCX_FROM_PTR_R12_(VALUE) adc rcx, qword ptr [r12 + VALUE]
#define ADC_RCX_FROM_PTR_R13_(VALUE) adc rcx, qword ptr [r13 + VALUE]
#define ADC_RCX_FROM_PTR_R14_(VALUE) adc rcx, qword ptr [r14 + VALUE]
#define ADC_RCX_FROM_PTR_R15_(VALUE) adc rcx, qword ptr [r15 + VALUE]
#define ADC_RCX_FROM_PTR_EAX_(VALUE) adc rcx, qword ptr [eax + VALUE]
#define ADC_RCX_FROM_PTR_EBX_(VALUE) adc rcx, qword ptr [ebx + VALUE]
#define ADC_RCX_FROM_PTR_ECX_(VALUE) adc rcx, qword ptr [ecx + VALUE]
#define ADC_RCX_FROM_PTR_EDX_(VALUE) adc rcx, qword ptr [edx + VALUE]
#define ADC_RCX_FROM_PTR_EDI_(VALUE) adc rcx, qword ptr [edi + VALUE]
#define ADC_RCX_FROM_PTR_ESI_(VALUE) adc rcx, qword ptr [esi + VALUE]
#define ADC_RCX_FROM_PTR_EBP_(VALUE) adc rcx, qword ptr [ebp + VALUE]
#define ADC_RCX_FROM_PTR_ESP_(VALUE) adc rcx, qword ptr [esp + VALUE]

#define ADC_RDX_FROM_PTR_RAX_(VALUE) adc rdx, qword ptr [rax + VALUE]
#define ADC_RDX_FROM_PTR_RBX_(VALUE) adc rdx, qword ptr [rbx + VALUE]
#define ADC_RDX_FROM_PTR_RCX_(VALUE) adc rdx, qword ptr [rcx + VALUE]
#define ADC_RDX_FROM_PTR_RDX_(VALUE) adc rdx, qword ptr [rdx + VALUE]
#define ADC_RDX_FROM_PTR_RDI_(VALUE) adc rdx, qword ptr [rdi + VALUE]
#define ADC_RDX_FROM_PTR_RSI_(VALUE) adc rdx, qword ptr [rsi + VALUE]
#define ADC_RDX_FROM_PTR_RBP_(VALUE) adc rdx, qword ptr [rbp + VALUE]
#define ADC_RDX_FROM_PTR_RSP_(VALUE) adc rdx, qword ptr [rsp + VALUE]
#define ADC_RDX_FROM_PTR_R8_(VALUE) adc rdx, qword ptr [r8 + VALUE]
#define ADC_RDX_FROM_PTR_R9_(VALUE) adc rdx, qword ptr [r9 + VALUE]
#define ADC_RDX_FROM_PTR_R10_(VALUE) adc rdx, qword ptr [r10 + VALUE]
#define ADC_RDX_FROM_PTR_R11_(VALUE) adc rdx, qword ptr [r11 + VALUE]
#define ADC_RDX_FROM_PTR_R12_(VALUE) adc rdx, qword ptr [r12 + VALUE]
#define ADC_RDX_FROM_PTR_R13_(VALUE) adc rdx, qword ptr [r13 + VALUE]
#define ADC_RDX_FROM_PTR_R14_(VALUE) adc rdx, qword ptr [r14 + VALUE]
#define ADC_RDX_FROM_PTR_R15_(VALUE) adc rdx, qword ptr [r15 + VALUE]
#define ADC_RDX_FROM_PTR_EAX_(VALUE) adc rdx, qword ptr [eax + VALUE]
#define ADC_RDX_FROM_PTR_EBX_(VALUE) adc rdx, qword ptr [ebx + VALUE]
#define ADC_RDX_FROM_PTR_ECX_(VALUE) adc rdx, qword ptr [ecx + VALUE]
#define ADC_RDX_FROM_PTR_EDX_(VALUE) adc rdx, qword ptr [edx + VALUE]
#define ADC_RDX_FROM_PTR_EDI_(VALUE) adc rdx, qword ptr [edi + VALUE]
#define ADC_RDX_FROM_PTR_ESI_(VALUE) adc rdx, qword ptr [esi + VALUE]
#define ADC_RDX_FROM_PTR_EBP_(VALUE) adc rdx, qword ptr [ebp + VALUE]
#define ADC_RDX_FROM_PTR_ESP_(VALUE) adc rdx, qword ptr [esp + VALUE]

#define ADC_RDI_FROM_PTR_RAX_(VALUE) adc rdi, qword ptr [rax + VALUE]
#define ADC_RDI_FROM_PTR_RBX_(VALUE) adc rdi, qword ptr [rbx + VALUE]
#define ADC_RDI_FROM_PTR_RCX_(VALUE) adc rdi, qword ptr [rcx + VALUE]
#define ADC_RDI_FROM_PTR_RDX_(VALUE) adc rdi, qword ptr [rdx + VALUE]
#define ADC_RDI_FROM_PTR_RDI_(VALUE) adc rdi, qword ptr [rdi + VALUE]
#define ADC_RDI_FROM_PTR_RSI_(VALUE) adc rdi, qword ptr [rsi + VALUE]
#define ADC_RDI_FROM_PTR_RBP_(VALUE) adc rdi, qword ptr [rbp + VALUE]
#define ADC_RDI_FROM_PTR_RSP_(VALUE) adc rdi, qword ptr [rsp + VALUE]
#define ADC_RDI_FROM_PTR_R8_(VALUE) adc rdi, qword ptr [r8 + VALUE]
#define ADC_RDI_FROM_PTR_R9_(VALUE) adc rdi, qword ptr [r9 + VALUE]
#define ADC_RDI_FROM_PTR_R10_(VALUE) adc rdi, qword ptr [r10 + VALUE]
#define ADC_RDI_FROM_PTR_R11_(VALUE) adc rdi, qword ptr [r11 + VALUE]
#define ADC_RDI_FROM_PTR_R12_(VALUE) adc rdi, qword ptr [r12 + VALUE]
#define ADC_RDI_FROM_PTR_R13_(VALUE) adc rdi, qword ptr [r13 + VALUE]
#define ADC_RDI_FROM_PTR_R14_(VALUE) adc rdi, qword ptr [r14 + VALUE]
#define ADC_RDI_FROM_PTR_R15_(VALUE) adc rdi, qword ptr [r15 + VALUE]
#define ADC_RDI_FROM_PTR_EAX_(VALUE) adc rdi, qword ptr [eax + VALUE]
#define ADC_RDI_FROM_PTR_EBX_(VALUE) adc rdi, qword ptr [ebx + VALUE]
#define ADC_RDI_FROM_PTR_ECX_(VALUE) adc rdi, qword ptr [ecx + VALUE]
#define ADC_RDI_FROM_PTR_EDX_(VALUE) adc rdi, qword ptr [edx + VALUE]
#define ADC_RDI_FROM_PTR_EDI_(VALUE) adc rdi, qword ptr [edi + VALUE]
#define ADC_RDI_FROM_PTR_ESI_(VALUE) adc rdi, qword ptr [esi + VALUE]
#define ADC_RDI_FROM_PTR_EBP_(VALUE) adc rdi, qword ptr [ebp + VALUE]
#define ADC_RDI_FROM_PTR_ESP_(VALUE) adc rdi, qword ptr [esp + VALUE]

#define ADC_RSI_FROM_PTR_RAX_(VALUE) adc rsi, qword ptr [rax + VALUE]
#define ADC_RSI_FROM_PTR_RBX_(VALUE) adc rsi, qword ptr [rbx + VALUE]
#define ADC_RSI_FROM_PTR_RCX_(VALUE) adc rsi, qword ptr [rcx + VALUE]
#define ADC_RSI_FROM_PTR_RDX_(VALUE) adc rsi, qword ptr [rdx + VALUE]
#define ADC_RSI_FROM_PTR_RDI_(VALUE) adc rsi, qword ptr [rdi + VALUE]
#define ADC_RSI_FROM_PTR_RSI_(VALUE) adc rsi, qword ptr [rsi + VALUE]
#define ADC_RSI_FROM_PTR_RBP_(VALUE) adc rsi, qword ptr [rbp + VALUE]
#define ADC_RSI_FROM_PTR_RSP_(VALUE) adc rsi, qword ptr [rsp + VALUE]
#define ADC_RSI_FROM_PTR_R8_(VALUE) adc rsi, qword ptr [r8 + VALUE]
#define ADC_RSI_FROM_PTR_R9_(VALUE) adc rsi, qword ptr [r9 + VALUE]
#define ADC_RSI_FROM_PTR_R10_(VALUE) adc rsi, qword ptr [r10 + VALUE]
#define ADC_RSI_FROM_PTR_R11_(VALUE) adc rsi, qword ptr [r11 + VALUE]
#define ADC_RSI_FROM_PTR_R12_(VALUE) adc rsi, qword ptr [r12 + VALUE]
#define ADC_RSI_FROM_PTR_R13_(VALUE) adc rsi, qword ptr [r13 + VALUE]
#define ADC_RSI_FROM_PTR_R14_(VALUE) adc rsi, qword ptr [r14 + VALUE]
#define ADC_RSI_FROM_PTR_R15_(VALUE) adc rsi, qword ptr [r15 + VALUE]
#define ADC_RSI_FROM_PTR_EAX_(VALUE) adc rsi, qword ptr [eax + VALUE]
#define ADC_RSI_FROM_PTR_EBX_(VALUE) adc rsi, qword ptr [ebx + VALUE]
#define ADC_RSI_FROM_PTR_ECX_(VALUE) adc rsi, qword ptr [ecx + VALUE]
#define ADC_RSI_FROM_PTR_EDX_(VALUE) adc rsi, qword ptr [edx + VALUE]
#define ADC_RSI_FROM_PTR_EDI_(VALUE) adc rsi, qword ptr [edi + VALUE]
#define ADC_RSI_FROM_PTR_ESI_(VALUE) adc rsi, qword ptr [esi + VALUE]
#define ADC_RSI_FROM_PTR_EBP_(VALUE) adc rsi, qword ptr [ebp + VALUE]
#define ADC_RSI_FROM_PTR_ESP_(VALUE) adc rsi, qword ptr [esp + VALUE]

#define ADC_RBP_FROM_PTR_RAX_(VALUE) adc rbp, qword ptr [rax + VALUE]
#define ADC_RBP_FROM_PTR_RBX_(VALUE) adc rbp, qword ptr [rbx + VALUE]
#define ADC_RBP_FROM_PTR_RCX_(VALUE) adc rbp, qword ptr [rcx + VALUE]
#define ADC_RBP_FROM_PTR_RDX_(VALUE) adc rbp, qword ptr [rdx + VALUE]
#define ADC_RBP_FROM_PTR_RDI_(VALUE) adc rbp, qword ptr [rdi + VALUE]
#define ADC_RBP_FROM_PTR_RSI_(VALUE) adc rbp, qword ptr [rsi + VALUE]
#define ADC_RBP_FROM_PTR_RBP_(VALUE) adc rbp, qword ptr [rbp + VALUE]
#define ADC_RBP_FROM_PTR_RSP_(VALUE) adc rbp, qword ptr [rsp + VALUE]
#define ADC_RBP_FROM_PTR_R8_(VALUE) adc rbp, qword ptr [r8 + VALUE]
#define ADC_RBP_FROM_PTR_R9_(VALUE) adc rbp, qword ptr [r9 + VALUE]
#define ADC_RBP_FROM_PTR_R10_(VALUE) adc rbp, qword ptr [r10 + VALUE]
#define ADC_RBP_FROM_PTR_R11_(VALUE) adc rbp, qword ptr [r11 + VALUE]
#define ADC_RBP_FROM_PTR_R12_(VALUE) adc rbp, qword ptr [r12 + VALUE]
#define ADC_RBP_FROM_PTR_R13_(VALUE) adc rbp, qword ptr [r13 + VALUE]
#define ADC_RBP_FROM_PTR_R14_(VALUE) adc rbp, qword ptr [r14 + VALUE]
#define ADC_RBP_FROM_PTR_R15_(VALUE) adc rbp, qword ptr [r15 + VALUE]
#define ADC_RBP_FROM_PTR_EAX_(VALUE) adc rbp, qword ptr [eax + VALUE]
#define ADC_RBP_FROM_PTR_EBX_(VALUE) adc rbp, qword ptr [ebx + VALUE]
#define ADC_RBP_FROM_PTR_ECX_(VALUE) adc rbp, qword ptr [ecx + VALUE]
#define ADC_RBP_FROM_PTR_EDX_(VALUE) adc rbp, qword ptr [edx + VALUE]
#define ADC_RBP_FROM_PTR_EDI_(VALUE) adc rbp, qword ptr [edi + VALUE]
#define ADC_RBP_FROM_PTR_ESI_(VALUE) adc rbp, qword ptr [esi + VALUE]
#define ADC_RBP_FROM_PTR_EBP_(VALUE) adc rbp, qword ptr [ebp + VALUE]
#define ADC_RBP_FROM_PTR_ESP_(VALUE) adc rbp, qword ptr [esp + VALUE]

#define ADC_RSP_FROM_PTR_RAX_(VALUE) adc rsp, qword ptr [rax + VALUE]
#define ADC_RSP_FROM_PTR_RBX_(VALUE) adc rsp, qword ptr [rbx + VALUE]
#define ADC_RSP_FROM_PTR_RCX_(VALUE) adc rsp, qword ptr [rcx + VALUE]
#define ADC_RSP_FROM_PTR_RDX_(VALUE) adc rsp, qword ptr [rdx + VALUE]
#define ADC_RSP_FROM_PTR_RDI_(VALUE) adc rsp, qword ptr [rdi + VALUE]
#define ADC_RSP_FROM_PTR_RSI_(VALUE) adc rsp, qword ptr [rsi + VALUE]
#define ADC_RSP_FROM_PTR_RBP_(VALUE) adc rsp, qword ptr [rbp + VALUE]
#define ADC_RSP_FROM_PTR_RSP_(VALUE) adc rsp, qword ptr [rsp + VALUE]
#define ADC_RSP_FROM_PTR_R8_(VALUE) adc rsp, qword ptr [r8 + VALUE]
#define ADC_RSP_FROM_PTR_R9_(VALUE) adc rsp, qword ptr [r9 + VALUE]
#define ADC_RSP_FROM_PTR_R10_(VALUE) adc rsp, qword ptr [r10 + VALUE]
#define ADC_RSP_FROM_PTR_R11_(VALUE) adc rsp, qword ptr [r11 + VALUE]
#define ADC_RSP_FROM_PTR_R12_(VALUE) adc rsp, qword ptr [r12 + VALUE]
#define ADC_RSP_FROM_PTR_R13_(VALUE) adc rsp, qword ptr [r13 + VALUE]
#define ADC_RSP_FROM_PTR_R14_(VALUE) adc rsp, qword ptr [r14 + VALUE]
#define ADC_RSP_FROM_PTR_R15_(VALUE) adc rsp, qword ptr [r15 + VALUE]
#define ADC_RSP_FROM_PTR_EAX_(VALUE) adc rsp, qword ptr [eax + VALUE]
#define ADC_RSP_FROM_PTR_EBX_(VALUE) adc rsp, qword ptr [ebx + VALUE]
#define ADC_RSP_FROM_PTR_ECX_(VALUE) adc rsp, qword ptr [ecx + VALUE]
#define ADC_RSP_FROM_PTR_EDX_(VALUE) adc rsp, qword ptr [edx + VALUE]
#define ADC_RSP_FROM_PTR_EDI_(VALUE) adc rsp, qword ptr [edi + VALUE]
#define ADC_RSP_FROM_PTR_ESI_(VALUE) adc rsp, qword ptr [esi + VALUE]
#define ADC_RSP_FROM_PTR_EBP_(VALUE) adc rsp, qword ptr [ebp + VALUE]
#define ADC_RSP_FROM_PTR_ESP_(VALUE) adc rsp, qword ptr [esp + VALUE]

#define ADC_R8_FROM_PTR_RAX_(VALUE) adc r8, qword ptr [rax + VALUE]
#define ADC_R8_FROM_PTR_RBX_(VALUE) adc r8, qword ptr [rbx + VALUE]
#define ADC_R8_FROM_PTR_RCX_(VALUE) adc r8, qword ptr [rcx + VALUE]
#define ADC_R8_FROM_PTR_RDX_(VALUE) adc r8, qword ptr [rdx + VALUE]
#define ADC_R8_FROM_PTR_RDI_(VALUE) adc r8, qword ptr [rdi + VALUE]
#define ADC_R8_FROM_PTR_RSI_(VALUE) adc r8, qword ptr [rsi + VALUE]
#define ADC_R8_FROM_PTR_RBP_(VALUE) adc r8, qword ptr [rbp + VALUE]
#define ADC_R8_FROM_PTR_RSP_(VALUE) adc r8, qword ptr [rsp + VALUE]
#define ADC_R8_FROM_PTR_R8_(VALUE) adc r8, qword ptr [r8 + VALUE]
#define ADC_R8_FROM_PTR_R9_(VALUE) adc r8, qword ptr [r9 + VALUE]
#define ADC_R8_FROM_PTR_R10_(VALUE) adc r8, qword ptr [r10 + VALUE]
#define ADC_R8_FROM_PTR_R11_(VALUE) adc r8, qword ptr [r11 + VALUE]
#define ADC_R8_FROM_PTR_R12_(VALUE) adc r8, qword ptr [r12 + VALUE]
#define ADC_R8_FROM_PTR_R13_(VALUE) adc r8, qword ptr [r13 + VALUE]
#define ADC_R8_FROM_PTR_R14_(VALUE) adc r8, qword ptr [r14 + VALUE]
#define ADC_R8_FROM_PTR_R15_(VALUE) adc r8, qword ptr [r15 + VALUE]
#define ADC_R8_FROM_PTR_EAX_(VALUE) adc r8, qword ptr [eax + VALUE]
#define ADC_R8_FROM_PTR_EBX_(VALUE) adc r8, qword ptr [ebx + VALUE]
#define ADC_R8_FROM_PTR_ECX_(VALUE) adc r8, qword ptr [ecx + VALUE]
#define ADC_R8_FROM_PTR_EDX_(VALUE) adc r8, qword ptr [edx + VALUE]
#define ADC_R8_FROM_PTR_EDI_(VALUE) adc r8, qword ptr [edi + VALUE]
#define ADC_R8_FROM_PTR_ESI_(VALUE) adc r8, qword ptr [esi + VALUE]
#define ADC_R8_FROM_PTR_EBP_(VALUE) adc r8, qword ptr [ebp + VALUE]
#define ADC_R8_FROM_PTR_ESP_(VALUE) adc r8, qword ptr [esp + VALUE]

#define ADC_R9_FROM_PTR_RAX_(VALUE) adc r9, qword ptr [rax + VALUE]
#define ADC_R9_FROM_PTR_RBX_(VALUE) adc r9, qword ptr [rbx + VALUE]
#define ADC_R9_FROM_PTR_RCX_(VALUE) adc r9, qword ptr [rcx + VALUE]
#define ADC_R9_FROM_PTR_RDX_(VALUE) adc r9, qword ptr [rdx + VALUE]
#define ADC_R9_FROM_PTR_RDI_(VALUE) adc r9, qword ptr [rdi + VALUE]
#define ADC_R9_FROM_PTR_RSI_(VALUE) adc r9, qword ptr [rsi + VALUE]
#define ADC_R9_FROM_PTR_RBP_(VALUE) adc r9, qword ptr [rbp + VALUE]
#define ADC_R9_FROM_PTR_RSP_(VALUE) adc r9, qword ptr [rsp + VALUE]
#define ADC_R9_FROM_PTR_R8_(VALUE) adc r9, qword ptr [r8 + VALUE]
#define ADC_R9_FROM_PTR_R9_(VALUE) adc r9, qword ptr [r9 + VALUE]
#define ADC_R9_FROM_PTR_R10_(VALUE) adc r9, qword ptr [r10 + VALUE]
#define ADC_R9_FROM_PTR_R11_(VALUE) adc r9, qword ptr [r11 + VALUE]
#define ADC_R9_FROM_PTR_R12_(VALUE) adc r9, qword ptr [r12 + VALUE]
#define ADC_R9_FROM_PTR_R13_(VALUE) adc r9, qword ptr [r13 + VALUE]
#define ADC_R9_FROM_PTR_R14_(VALUE) adc r9, qword ptr [r14 + VALUE]
#define ADC_R9_FROM_PTR_R15_(VALUE) adc r9, qword ptr [r15 + VALUE]
#define ADC_R9_FROM_PTR_EAX_(VALUE) adc r9, qword ptr [eax + VALUE]
#define ADC_R9_FROM_PTR_EBX_(VALUE) adc r9, qword ptr [ebx + VALUE]
#define ADC_R9_FROM_PTR_ECX_(VALUE) adc r9, qword ptr [ecx + VALUE]
#define ADC_R9_FROM_PTR_EDX_(VALUE) adc r9, qword ptr [edx + VALUE]
#define ADC_R9_FROM_PTR_EDI_(VALUE) adc r9, qword ptr [edi + VALUE]
#define ADC_R9_FROM_PTR_ESI_(VALUE) adc r9, qword ptr [esi + VALUE]
#define ADC_R9_FROM_PTR_EBP_(VALUE) adc r9, qword ptr [ebp + VALUE]
#define ADC_R9_FROM_PTR_ESP_(VALUE) adc r9, qword ptr [esp + VALUE]

#define ADC_R10_FROM_PTR_RAX_(VALUE) adc r10, qword ptr [rax + VALUE]
#define ADC_R10_FROM_PTR_RBX_(VALUE) adc r10, qword ptr [rbx + VALUE]
#define ADC_R10_FROM_PTR_RCX_(VALUE) adc r10, qword ptr [rcx + VALUE]
#define ADC_R10_FROM_PTR_RDX_(VALUE) adc r10, qword ptr [rdx + VALUE]
#define ADC_R10_FROM_PTR_RDI_(VALUE) adc r10, qword ptr [rdi + VALUE]
#define ADC_R10_FROM_PTR_RSI_(VALUE) adc r10, qword ptr [rsi + VALUE]
#define ADC_R10_FROM_PTR_RBP_(VALUE) adc r10, qword ptr [rbp + VALUE]
#define ADC_R10_FROM_PTR_RSP_(VALUE) adc r10, qword ptr [rsp + VALUE]
#define ADC_R10_FROM_PTR_R8_(VALUE) adc r10, qword ptr [r8 + VALUE]
#define ADC_R10_FROM_PTR_R9_(VALUE) adc r10, qword ptr [r9 + VALUE]
#define ADC_R10_FROM_PTR_R10_(VALUE) adc r10, qword ptr [r10 + VALUE]
#define ADC_R10_FROM_PTR_R11_(VALUE) adc r10, qword ptr [r11 + VALUE]
#define ADC_R10_FROM_PTR_R12_(VALUE) adc r10, qword ptr [r12 + VALUE]
#define ADC_R10_FROM_PTR_R13_(VALUE) adc r10, qword ptr [r13 + VALUE]
#define ADC_R10_FROM_PTR_R14_(VALUE) adc r10, qword ptr [r14 + VALUE]
#define ADC_R10_FROM_PTR_R15_(VALUE) adc r10, qword ptr [r15 + VALUE]
#define ADC_R10_FROM_PTR_EAX_(VALUE) adc r10, qword ptr [eax + VALUE]
#define ADC_R10_FROM_PTR_EBX_(VALUE) adc r10, qword ptr [ebx + VALUE]
#define ADC_R10_FROM_PTR_ECX_(VALUE) adc r10, qword ptr [ecx + VALUE]
#define ADC_R10_FROM_PTR_EDX_(VALUE) adc r10, qword ptr [edx + VALUE]
#define ADC_R10_FROM_PTR_EDI_(VALUE) adc r10, qword ptr [edi + VALUE]
#define ADC_R10_FROM_PTR_ESI_(VALUE) adc r10, qword ptr [esi + VALUE]
#define ADC_R10_FROM_PTR_EBP_(VALUE) adc r10, qword ptr [ebp + VALUE]
#define ADC_R10_FROM_PTR_ESP_(VALUE) adc r10, qword ptr [esp + VALUE]

#define ADC_R11_FROM_PTR_RAX_(VALUE) adc r11, qword ptr [rax + VALUE]
#define ADC_R11_FROM_PTR_RBX_(VALUE) adc r11, qword ptr [rbx + VALUE]
#define ADC_R11_FROM_PTR_RCX_(VALUE) adc r11, qword ptr [rcx + VALUE]
#define ADC_R11_FROM_PTR_RDX_(VALUE) adc r11, qword ptr [rdx + VALUE]
#define ADC_R11_FROM_PTR_RDI_(VALUE) adc r11, qword ptr [rdi + VALUE]
#define ADC_R11_FROM_PTR_RSI_(VALUE) adc r11, qword ptr [rsi + VALUE]
#define ADC_R11_FROM_PTR_RBP_(VALUE) adc r11, qword ptr [rbp + VALUE]
#define ADC_R11_FROM_PTR_RSP_(VALUE) adc r11, qword ptr [rsp + VALUE]
#define ADC_R11_FROM_PTR_R8_(VALUE) adc r11, qword ptr [r8 + VALUE]
#define ADC_R11_FROM_PTR_R9_(VALUE) adc r11, qword ptr [r9 + VALUE]
#define ADC_R11_FROM_PTR_R10_(VALUE) adc r11, qword ptr [r10 + VALUE]
#define ADC_R11_FROM_PTR_R11_(VALUE) adc r11, qword ptr [r11 + VALUE]
#define ADC_R11_FROM_PTR_R12_(VALUE) adc r11, qword ptr [r12 + VALUE]
#define ADC_R11_FROM_PTR_R13_(VALUE) adc r11, qword ptr [r13 + VALUE]
#define ADC_R11_FROM_PTR_R14_(VALUE) adc r11, qword ptr [r14 + VALUE]
#define ADC_R11_FROM_PTR_R15_(VALUE) adc r11, qword ptr [r15 + VALUE]
#define ADC_R11_FROM_PTR_EAX_(VALUE) adc r11, qword ptr [eax + VALUE]
#define ADC_R11_FROM_PTR_EBX_(VALUE) adc r11, qword ptr [ebx + VALUE]
#define ADC_R11_FROM_PTR_ECX_(VALUE) adc r11, qword ptr [ecx + VALUE]
#define ADC_R11_FROM_PTR_EDX_(VALUE) adc r11, qword ptr [edx + VALUE]
#define ADC_R11_FROM_PTR_EDI_(VALUE) adc r11, qword ptr [edi + VALUE]
#define ADC_R11_FROM_PTR_ESI_(VALUE) adc r11, qword ptr [esi + VALUE]
#define ADC_R11_FROM_PTR_EBP_(VALUE) adc r11, qword ptr [ebp + VALUE]
#define ADC_R11_FROM_PTR_ESP_(VALUE) adc r11, qword ptr [esp + VALUE]

#define ADC_R12_FROM_PTR_RAX_(VALUE) adc r12, qword ptr [rax + VALUE]
#define ADC_R12_FROM_PTR_RBX_(VALUE) adc r12, qword ptr [rbx + VALUE]
#define ADC_R12_FROM_PTR_RCX_(VALUE) adc r12, qword ptr [rcx + VALUE]
#define ADC_R12_FROM_PTR_RDX_(VALUE) adc r12, qword ptr [rdx + VALUE]
#define ADC_R12_FROM_PTR_RDI_(VALUE) adc r12, qword ptr [rdi + VALUE]
#define ADC_R12_FROM_PTR_RSI_(VALUE) adc r12, qword ptr [rsi + VALUE]
#define ADC_R12_FROM_PTR_RBP_(VALUE) adc r12, qword ptr [rbp + VALUE]
#define ADC_R12_FROM_PTR_RSP_(VALUE) adc r12, qword ptr [rsp + VALUE]
#define ADC_R12_FROM_PTR_R8_(VALUE) adc r12, qword ptr [r8 + VALUE]
#define ADC_R12_FROM_PTR_R9_(VALUE) adc r12, qword ptr [r9 + VALUE]
#define ADC_R12_FROM_PTR_R10_(VALUE) adc r12, qword ptr [r10 + VALUE]
#define ADC_R12_FROM_PTR_R11_(VALUE) adc r12, qword ptr [r11 + VALUE]
#define ADC_R12_FROM_PTR_R12_(VALUE) adc r12, qword ptr [r12 + VALUE]
#define ADC_R12_FROM_PTR_R13_(VALUE) adc r12, qword ptr [r13 + VALUE]
#define ADC_R12_FROM_PTR_R14_(VALUE) adc r12, qword ptr [r14 + VALUE]
#define ADC_R12_FROM_PTR_R15_(VALUE) adc r12, qword ptr [r15 + VALUE]
#define ADC_R12_FROM_PTR_EAX_(VALUE) adc r12, qword ptr [eax + VALUE]
#define ADC_R12_FROM_PTR_EBX_(VALUE) adc r12, qword ptr [ebx + VALUE]
#define ADC_R12_FROM_PTR_ECX_(VALUE) adc r12, qword ptr [ecx + VALUE]
#define ADC_R12_FROM_PTR_EDX_(VALUE) adc r12, qword ptr [edx + VALUE]
#define ADC_R12_FROM_PTR_EDI_(VALUE) adc r12, qword ptr [edi + VALUE]
#define ADC_R12_FROM_PTR_ESI_(VALUE) adc r12, qword ptr [esi + VALUE]
#define ADC_R12_FROM_PTR_EBP_(VALUE) adc r12, qword ptr [ebp + VALUE]
#define ADC_R12_FROM_PTR_ESP_(VALUE) adc r12, qword ptr [esp + VALUE]

#define ADC_R13_FROM_PTR_RAX_(VALUE) adc r13, qword ptr [rax + VALUE]
#define ADC_R13_FROM_PTR_RBX_(VALUE) adc r13, qword ptr [rbx + VALUE]
#define ADC_R13_FROM_PTR_RCX_(VALUE) adc r13, qword ptr [rcx + VALUE]
#define ADC_R13_FROM_PTR_RDX_(VALUE) adc r13, qword ptr [rdx + VALUE]
#define ADC_R13_FROM_PTR_RDI_(VALUE) adc r13, qword ptr [rdi + VALUE]
#define ADC_R13_FROM_PTR_RSI_(VALUE) adc r13, qword ptr [rsi + VALUE]
#define ADC_R13_FROM_PTR_RBP_(VALUE) adc r13, qword ptr [rbp + VALUE]
#define ADC_R13_FROM_PTR_RSP_(VALUE) adc r13, qword ptr [rsp + VALUE]
#define ADC_R13_FROM_PTR_R8_(VALUE) adc r13, qword ptr [r8 + VALUE]
#define ADC_R13_FROM_PTR_R9_(VALUE) adc r13, qword ptr [r9 + VALUE]
#define ADC_R13_FROM_PTR_R10_(VALUE) adc r13, qword ptr [r10 + VALUE]
#define ADC_R13_FROM_PTR_R11_(VALUE) adc r13, qword ptr [r11 + VALUE]
#define ADC_R13_FROM_PTR_R12_(VALUE) adc r13, qword ptr [r12 + VALUE]
#define ADC_R13_FROM_PTR_R13_(VALUE) adc r13, qword ptr [r13 + VALUE]
#define ADC_R13_FROM_PTR_R14_(VALUE) adc r13, qword ptr [r14 + VALUE]
#define ADC_R13_FROM_PTR_R15_(VALUE) adc r13, qword ptr [r15 + VALUE]
#define ADC_R13_FROM_PTR_EAX_(VALUE) adc r13, qword ptr [eax + VALUE]
#define ADC_R13_FROM_PTR_EBX_(VALUE) adc r13, qword ptr [ebx + VALUE]
#define ADC_R13_FROM_PTR_ECX_(VALUE) adc r13, qword ptr [ecx + VALUE]
#define ADC_R13_FROM_PTR_EDX_(VALUE) adc r13, qword ptr [edx + VALUE]
#define ADC_R13_FROM_PTR_EDI_(VALUE) adc r13, qword ptr [edi + VALUE]
#define ADC_R13_FROM_PTR_ESI_(VALUE) adc r13, qword ptr [esi + VALUE]
#define ADC_R13_FROM_PTR_EBP_(VALUE) adc r13, qword ptr [ebp + VALUE]
#define ADC_R13_FROM_PTR_ESP_(VALUE) adc r13, qword ptr [esp + VALUE]

#define ADC_R14_FROM_PTR_RAX_(VALUE) adc r14, qword ptr [rax + VALUE]
#define ADC_R14_FROM_PTR_RBX_(VALUE) adc r14, qword ptr [rbx + VALUE]
#define ADC_R14_FROM_PTR_RCX_(VALUE) adc r14, qword ptr [rcx + VALUE]
#define ADC_R14_FROM_PTR_RDX_(VALUE) adc r14, qword ptr [rdx + VALUE]
#define ADC_R14_FROM_PTR_RDI_(VALUE) adc r14, qword ptr [rdi + VALUE]
#define ADC_R14_FROM_PTR_RSI_(VALUE) adc r14, qword ptr [rsi + VALUE]
#define ADC_R14_FROM_PTR_RBP_(VALUE) adc r14, qword ptr [rbp + VALUE]
#define ADC_R14_FROM_PTR_RSP_(VALUE) adc r14, qword ptr [rsp + VALUE]
#define ADC_R14_FROM_PTR_R8_(VALUE) adc r14, qword ptr [r8 + VALUE]
#define ADC_R14_FROM_PTR_R9_(VALUE) adc r14, qword ptr [r9 + VALUE]
#define ADC_R14_FROM_PTR_R10_(VALUE) adc r14, qword ptr [r10 + VALUE]
#define ADC_R14_FROM_PTR_R11_(VALUE) adc r14, qword ptr [r11 + VALUE]
#define ADC_R14_FROM_PTR_R12_(VALUE) adc r14, qword ptr [r12 + VALUE]
#define ADC_R14_FROM_PTR_R13_(VALUE) adc r14, qword ptr [r13 + VALUE]
#define ADC_R14_FROM_PTR_R14_(VALUE) adc r14, qword ptr [r14 + VALUE]
#define ADC_R14_FROM_PTR_R15_(VALUE) adc r14, qword ptr [r15 + VALUE]
#define ADC_R14_FROM_PTR_EAX_(VALUE) adc r14, qword ptr [eax + VALUE]
#define ADC_R14_FROM_PTR_EBX_(VALUE) adc r14, qword ptr [ebx + VALUE]
#define ADC_R14_FROM_PTR_ECX_(VALUE) adc r14, qword ptr [ecx + VALUE]
#define ADC_R14_FROM_PTR_EDX_(VALUE) adc r14, qword ptr [edx + VALUE]
#define ADC_R14_FROM_PTR_EDI_(VALUE) adc r14, qword ptr [edi + VALUE]
#define ADC_R14_FROM_PTR_ESI_(VALUE) adc r14, qword ptr [esi + VALUE]
#define ADC_R14_FROM_PTR_EBP_(VALUE) adc r14, qword ptr [ebp + VALUE]
#define ADC_R14_FROM_PTR_ESP_(VALUE) adc r14, qword ptr [esp + VALUE]

#define ADC_R15_FROM_PTR_RAX_(VALUE) adc r15, qword ptr [rax + VALUE]
#define ADC_R15_FROM_PTR_RBX_(VALUE) adc r15, qword ptr [rbx + VALUE]
#define ADC_R15_FROM_PTR_RCX_(VALUE) adc r15, qword ptr [rcx + VALUE]
#define ADC_R15_FROM_PTR_RDX_(VALUE) adc r15, qword ptr [rdx + VALUE]
#define ADC_R15_FROM_PTR_RDI_(VALUE) adc r15, qword ptr [rdi + VALUE]
#define ADC_R15_FROM_PTR_RSI_(VALUE) adc r15, qword ptr [rsi + VALUE]
#define ADC_R15_FROM_PTR_RBP_(VALUE) adc r15, qword ptr [rbp + VALUE]
#define ADC_R15_FROM_PTR_RSP_(VALUE) adc r15, qword ptr [rsp + VALUE]
#define ADC_R15_FROM_PTR_R8_(VALUE) adc r15, qword ptr [r8 + VALUE]
#define ADC_R15_FROM_PTR_R9_(VALUE) adc r15, qword ptr [r9 + VALUE]
#define ADC_R15_FROM_PTR_R10_(VALUE) adc r15, qword ptr [r10 + VALUE]
#define ADC_R15_FROM_PTR_R11_(VALUE) adc r15, qword ptr [r11 + VALUE]
#define ADC_R15_FROM_PTR_R12_(VALUE) adc r15, qword ptr [r12 + VALUE]
#define ADC_R15_FROM_PTR_R13_(VALUE) adc r15, qword ptr [r13 + VALUE]
#define ADC_R15_FROM_PTR_R14_(VALUE) adc r15, qword ptr [r14 + VALUE]
#define ADC_R15_FROM_PTR_R15_(VALUE) adc r15, qword ptr [r15 + VALUE]
#define ADC_R15_FROM_PTR_EAX_(VALUE) adc r15, qword ptr [eax + VALUE]
#define ADC_R15_FROM_PTR_EBX_(VALUE) adc r15, qword ptr [ebx + VALUE]
#define ADC_R15_FROM_PTR_ECX_(VALUE) adc r15, qword ptr [ecx + VALUE]
#define ADC_R15_FROM_PTR_EDX_(VALUE) adc r15, qword ptr [edx + VALUE]
#define ADC_R15_FROM_PTR_EDI_(VALUE) adc r15, qword ptr [edi + VALUE]
#define ADC_R15_FROM_PTR_ESI_(VALUE) adc r15, qword ptr [esi + VALUE]
#define ADC_R15_FROM_PTR_EBP_(VALUE) adc r15, qword ptr [ebp + VALUE]
#define ADC_R15_FROM_PTR_ESP_(VALUE) adc r15, qword ptr [esp + VALUE]

#define ADC_RAX_TO_PTR_RAX_(VALUE) adc qword ptr [rax + VALUE], rax
#define ADC_RAX_TO_PTR_RBX_(VALUE) adc qword ptr [rbx + VALUE], rax
#define ADC_RAX_TO_PTR_RCX_(VALUE) adc qword ptr [rcx + VALUE], rax
#define ADC_RAX_TO_PTR_RDX_(VALUE) adc qword ptr [rdx + VALUE], rax
#define ADC_RAX_TO_PTR_RDI_(VALUE) adc qword ptr [rdi + VALUE], rax
#define ADC_RAX_TO_PTR_RSI_(VALUE) adc qword ptr [rsi + VALUE], rax
#define ADC_RAX_TO_PTR_RBP_(VALUE) adc qword ptr [rbp + VALUE], rax
#define ADC_RAX_TO_PTR_RSP_(VALUE) adc qword ptr [rsp + VALUE], rax
#define ADC_RAX_TO_PTR_R8_(VALUE) adc qword ptr [r8 + VALUE], rax
#define ADC_RAX_TO_PTR_R9_(VALUE) adc qword ptr [r9 + VALUE], rax
#define ADC_RAX_TO_PTR_R10_(VALUE) adc qword ptr [r10 + VALUE], rax
#define ADC_RAX_TO_PTR_R11_(VALUE) adc qword ptr [r11 + VALUE], rax
#define ADC_RAX_TO_PTR_R12_(VALUE) adc qword ptr [r12 + VALUE], rax
#define ADC_RAX_TO_PTR_R13_(VALUE) adc qword ptr [r13 + VALUE], rax
#define ADC_RAX_TO_PTR_R14_(VALUE) adc qword ptr [r14 + VALUE], rax
#define ADC_RAX_TO_PTR_R15_(VALUE) adc qword ptr [r15 + VALUE], rax
#define ADC_RAX_TO_PTR_EAX_(VALUE) adc qword ptr [eax + VALUE], rax
#define ADC_RAX_TO_PTR_EBX_(VALUE) adc qword ptr [ebx + VALUE], rax
#define ADC_RAX_TO_PTR_ECX_(VALUE) adc qword ptr [ecx + VALUE], rax
#define ADC_RAX_TO_PTR_EDX_(VALUE) adc qword ptr [edx + VALUE], rax
#define ADC_RAX_TO_PTR_EDI_(VALUE) adc qword ptr [edi + VALUE], rax
#define ADC_RAX_TO_PTR_ESI_(VALUE) adc qword ptr [esi + VALUE], rax
#define ADC_RAX_TO_PTR_EBP_(VALUE) adc qword ptr [ebp + VALUE], rax
#define ADC_RAX_TO_PTR_ESP_(VALUE) adc qword ptr [esp + VALUE], rax

#define ADC_RBX_TO_PTR_RAX_(VALUE) adc qword ptr [rax + VALUE], rbx
#define ADC_RBX_TO_PTR_RBX_(VALUE) adc qword ptr [rbx + VALUE], rbx
#define ADC_RBX_TO_PTR_RCX_(VALUE) adc qword ptr [rcx + VALUE], rbx
#define ADC_RBX_TO_PTR_RDX_(VALUE) adc qword ptr [rdx + VALUE], rbx
#define ADC_RBX_TO_PTR_RDI_(VALUE) adc qword ptr [rdi + VALUE], rbx
#define ADC_RBX_TO_PTR_RSI_(VALUE) adc qword ptr [rsi + VALUE], rbx
#define ADC_RBX_TO_PTR_RBP_(VALUE) adc qword ptr [rbp + VALUE], rbx
#define ADC_RBX_TO_PTR_RSP_(VALUE) adc qword ptr [rsp + VALUE], rbx
#define ADC_RBX_TO_PTR_R8_(VALUE) adc qword ptr [r8 + VALUE], rbx
#define ADC_RBX_TO_PTR_R9_(VALUE) adc qword ptr [r9 + VALUE], rbx
#define ADC_RBX_TO_PTR_R10_(VALUE) adc qword ptr [r10 + VALUE], rbx
#define ADC_RBX_TO_PTR_R11_(VALUE) adc qword ptr [r11 + VALUE], rbx
#define ADC_RBX_TO_PTR_R12_(VALUE) adc qword ptr [r12 + VALUE], rbx
#define ADC_RBX_TO_PTR_R13_(VALUE) adc qword ptr [r13 + VALUE], rbx
#define ADC_RBX_TO_PTR_R14_(VALUE) adc qword ptr [r14 + VALUE], rbx
#define ADC_RBX_TO_PTR_R15_(VALUE) adc qword ptr [r15 + VALUE], rbx
#define ADC_RBX_TO_PTR_EAX_(VALUE) adc qword ptr [eax + VALUE], rbx
#define ADC_RBX_TO_PTR_EBX_(VALUE) adc qword ptr [ebx + VALUE], rbx
#define ADC_RBX_TO_PTR_ECX_(VALUE) adc qword ptr [ecx + VALUE], rbx
#define ADC_RBX_TO_PTR_EDX_(VALUE) adc qword ptr [edx + VALUE], rbx
#define ADC_RBX_TO_PTR_EDI_(VALUE) adc qword ptr [edi + VALUE], rbx
#define ADC_RBX_TO_PTR_ESI_(VALUE) adc qword ptr [esi + VALUE], rbx
#define ADC_RBX_TO_PTR_EBP_(VALUE) adc qword ptr [ebp + VALUE], rbx
#define ADC_RBX_TO_PTR_ESP_(VALUE) adc qword ptr [esp + VALUE], rbx

#define ADC_RCX_TO_PTR_RAX_(VALUE) adc qword ptr [rax + VALUE], rcx
#define ADC_RCX_TO_PTR_RBX_(VALUE) adc qword ptr [rbx + VALUE], rcx
#define ADC_RCX_TO_PTR_RCX_(VALUE) adc qword ptr [rcx + VALUE], rcx
#define ADC_RCX_TO_PTR_RDX_(VALUE) adc qword ptr [rdx + VALUE], rcx
#define ADC_RCX_TO_PTR_RDI_(VALUE) adc qword ptr [rdi + VALUE], rcx
#define ADC_RCX_TO_PTR_RSI_(VALUE) adc qword ptr [rsi + VALUE], rcx
#define ADC_RCX_TO_PTR_RBP_(VALUE) adc qword ptr [rbp + VALUE], rcx
#define ADC_RCX_TO_PTR_RSP_(VALUE) adc qword ptr [rsp + VALUE], rcx
#define ADC_RCX_TO_PTR_R8_(VALUE) adc qword ptr [r8 + VALUE], rcx
#define ADC_RCX_TO_PTR_R9_(VALUE) adc qword ptr [r9 + VALUE], rcx
#define ADC_RCX_TO_PTR_R10_(VALUE) adc qword ptr [r10 + VALUE], rcx
#define ADC_RCX_TO_PTR_R11_(VALUE) adc qword ptr [r11 + VALUE], rcx
#define ADC_RCX_TO_PTR_R12_(VALUE) adc qword ptr [r12 + VALUE], rcx
#define ADC_RCX_TO_PTR_R13_(VALUE) adc qword ptr [r13 + VALUE], rcx
#define ADC_RCX_TO_PTR_R14_(VALUE) adc qword ptr [r14 + VALUE], rcx
#define ADC_RCX_TO_PTR_R15_(VALUE) adc qword ptr [r15 + VALUE], rcx
#define ADC_RCX_TO_PTR_EAX_(VALUE) adc qword ptr [eax + VALUE], rcx
#define ADC_RCX_TO_PTR_EBX_(VALUE) adc qword ptr [ebx + VALUE], rcx
#define ADC_RCX_TO_PTR_ECX_(VALUE) adc qword ptr [ecx + VALUE], rcx
#define ADC_RCX_TO_PTR_EDX_(VALUE) adc qword ptr [edx + VALUE], rcx
#define ADC_RCX_TO_PTR_EDI_(VALUE) adc qword ptr [edi + VALUE], rcx
#define ADC_RCX_TO_PTR_ESI_(VALUE) adc qword ptr [esi + VALUE], rcx
#define ADC_RCX_TO_PTR_EBP_(VALUE) adc qword ptr [ebp + VALUE], rcx
#define ADC_RCX_TO_PTR_ESP_(VALUE) adc qword ptr [esp + VALUE], rcx

#define ADC_RDX_TO_PTR_RAX_(VALUE) adc qword ptr [rax + VALUE], rdx
#define ADC_RDX_TO_PTR_RBX_(VALUE) adc qword ptr [rbx + VALUE], rdx
#define ADC_RDX_TO_PTR_RCX_(VALUE) adc qword ptr [rcx + VALUE], rdx
#define ADC_RDX_TO_PTR_RDX_(VALUE) adc qword ptr [rdx + VALUE], rdx
#define ADC_RDX_TO_PTR_RDI_(VALUE) adc qword ptr [rdi + VALUE], rdx
#define ADC_RDX_TO_PTR_RSI_(VALUE) adc qword ptr [rsi + VALUE], rdx
#define ADC_RDX_TO_PTR_RBP_(VALUE) adc qword ptr [rbp + VALUE], rdx
#define ADC_RDX_TO_PTR_RSP_(VALUE) adc qword ptr [rsp + VALUE], rdx
#define ADC_RDX_TO_PTR_R8_(VALUE) adc qword ptr [r8 + VALUE], rdx
#define ADC_RDX_TO_PTR_R9_(VALUE) adc qword ptr [r9 + VALUE], rdx
#define ADC_RDX_TO_PTR_R10_(VALUE) adc qword ptr [r10 + VALUE], rdx
#define ADC_RDX_TO_PTR_R11_(VALUE) adc qword ptr [r11 + VALUE], rdx
#define ADC_RDX_TO_PTR_R12_(VALUE) adc qword ptr [r12 + VALUE], rdx
#define ADC_RDX_TO_PTR_R13_(VALUE) adc qword ptr [r13 + VALUE], rdx
#define ADC_RDX_TO_PTR_R14_(VALUE) adc qword ptr [r14 + VALUE], rdx
#define ADC_RDX_TO_PTR_R15_(VALUE) adc qword ptr [r15 + VALUE], rdx
#define ADC_RDX_TO_PTR_EAX_(VALUE) adc qword ptr [eax + VALUE], rdx
#define ADC_RDX_TO_PTR_EBX_(VALUE) adc qword ptr [ebx + VALUE], rdx
#define ADC_RDX_TO_PTR_ECX_(VALUE) adc qword ptr [ecx + VALUE], rdx
#define ADC_RDX_TO_PTR_EDX_(VALUE) adc qword ptr [edx + VALUE], rdx
#define ADC_RDX_TO_PTR_EDI_(VALUE) adc qword ptr [edi + VALUE], rdx
#define ADC_RDX_TO_PTR_ESI_(VALUE) adc qword ptr [esi + VALUE], rdx
#define ADC_RDX_TO_PTR_EBP_(VALUE) adc qword ptr [ebp + VALUE], rdx
#define ADC_RDX_TO_PTR_ESP_(VALUE) adc qword ptr [esp + VALUE], rdx

#define ADC_RDI_TO_PTR_RAX_(VALUE) adc qword ptr [rax + VALUE], rdi
#define ADC_RDI_TO_PTR_RBX_(VALUE) adc qword ptr [rbx + VALUE], rdi
#define ADC_RDI_TO_PTR_RCX_(VALUE) adc qword ptr [rcx + VALUE], rdi
#define ADC_RDI_TO_PTR_RDX_(VALUE) adc qword ptr [rdx + VALUE], rdi
#define ADC_RDI_TO_PTR_RDI_(VALUE) adc qword ptr [rdi + VALUE], rdi
#define ADC_RDI_TO_PTR_RSI_(VALUE) adc qword ptr [rsi + VALUE], rdi
#define ADC_RDI_TO_PTR_RBP_(VALUE) adc qword ptr [rbp + VALUE], rdi
#define ADC_RDI_TO_PTR_RSP_(VALUE) adc qword ptr [rsp + VALUE], rdi
#define ADC_RDI_TO_PTR_R8_(VALUE) adc qword ptr [r8 + VALUE], rdi
#define ADC_RDI_TO_PTR_R9_(VALUE) adc qword ptr [r9 + VALUE], rdi
#define ADC_RDI_TO_PTR_R10_(VALUE) adc qword ptr [r10 + VALUE], rdi
#define ADC_RDI_TO_PTR_R11_(VALUE) adc qword ptr [r11 + VALUE], rdi
#define ADC_RDI_TO_PTR_R12_(VALUE) adc qword ptr [r12 + VALUE], rdi
#define ADC_RDI_TO_PTR_R13_(VALUE) adc qword ptr [r13 + VALUE], rdi
#define ADC_RDI_TO_PTR_R14_(VALUE) adc qword ptr [r14 + VALUE], rdi
#define ADC_RDI_TO_PTR_R15_(VALUE) adc qword ptr [r15 + VALUE], rdi
#define ADC_RDI_TO_PTR_EAX_(VALUE) adc qword ptr [eax + VALUE], rdi
#define ADC_RDI_TO_PTR_EBX_(VALUE) adc qword ptr [ebx + VALUE], rdi
#define ADC_RDI_TO_PTR_ECX_(VALUE) adc qword ptr [ecx + VALUE], rdi
#define ADC_RDI_TO_PTR_EDX_(VALUE) adc qword ptr [edx + VALUE], rdi
#define ADC_RDI_TO_PTR_EDI_(VALUE) adc qword ptr [edi + VALUE], rdi
#define ADC_RDI_TO_PTR_ESI_(VALUE) adc qword ptr [esi + VALUE], rdi
#define ADC_RDI_TO_PTR_EBP_(VALUE) adc qword ptr [ebp + VALUE], rdi
#define ADC_RDI_TO_PTR_ESP_(VALUE) adc qword ptr [esp + VALUE], rdi

#define ADC_RSI_TO_PTR_RAX_(VALUE) adc qword ptr [rax + VALUE], rsi
#define ADC_RSI_TO_PTR_RBX_(VALUE) adc qword ptr [rbx + VALUE], rsi
#define ADC_RSI_TO_PTR_RCX_(VALUE) adc qword ptr [rcx + VALUE], rsi
#define ADC_RSI_TO_PTR_RDX_(VALUE) adc qword ptr [rdx + VALUE], rsi
#define ADC_RSI_TO_PTR_RDI_(VALUE) adc qword ptr [rdi + VALUE], rsi
#define ADC_RSI_TO_PTR_RSI_(VALUE) adc qword ptr [rsi + VALUE], rsi
#define ADC_RSI_TO_PTR_RBP_(VALUE) adc qword ptr [rbp + VALUE], rsi
#define ADC_RSI_TO_PTR_RSP_(VALUE) adc qword ptr [rsp + VALUE], rsi
#define ADC_RSI_TO_PTR_R8_(VALUE) adc qword ptr [r8 + VALUE], rsi
#define ADC_RSI_TO_PTR_R9_(VALUE) adc qword ptr [r9 + VALUE], rsi
#define ADC_RSI_TO_PTR_R10_(VALUE) adc qword ptr [r10 + VALUE], rsi
#define ADC_RSI_TO_PTR_R11_(VALUE) adc qword ptr [r11 + VALUE], rsi
#define ADC_RSI_TO_PTR_R12_(VALUE) adc qword ptr [r12 + VALUE], rsi
#define ADC_RSI_TO_PTR_R13_(VALUE) adc qword ptr [r13 + VALUE], rsi
#define ADC_RSI_TO_PTR_R14_(VALUE) adc qword ptr [r14 + VALUE], rsi
#define ADC_RSI_TO_PTR_R15_(VALUE) adc qword ptr [r15 + VALUE], rsi
#define ADC_RSI_TO_PTR_EAX_(VALUE) adc qword ptr [eax + VALUE], rsi
#define ADC_RSI_TO_PTR_EBX_(VALUE) adc qword ptr [ebx + VALUE], rsi
#define ADC_RSI_TO_PTR_ECX_(VALUE) adc qword ptr [ecx + VALUE], rsi
#define ADC_RSI_TO_PTR_EDX_(VALUE) adc qword ptr [edx + VALUE], rsi
#define ADC_RSI_TO_PTR_EDI_(VALUE) adc qword ptr [edi + VALUE], rsi
#define ADC_RSI_TO_PTR_ESI_(VALUE) adc qword ptr [esi + VALUE], rsi
#define ADC_RSI_TO_PTR_EBP_(VALUE) adc qword ptr [ebp + VALUE], rsi
#define ADC_RSI_TO_PTR_ESP_(VALUE) adc qword ptr [esp + VALUE], rsi

#define ADC_RBP_TO_PTR_RAX_(VALUE) adc qword ptr [rax + VALUE], rbp
#define ADC_RBP_TO_PTR_RBX_(VALUE) adc qword ptr [rbx + VALUE], rbp
#define ADC_RBP_TO_PTR_RCX_(VALUE) adc qword ptr [rcx + VALUE], rbp
#define ADC_RBP_TO_PTR_RDX_(VALUE) adc qword ptr [rdx + VALUE], rbp
#define ADC_RBP_TO_PTR_RDI_(VALUE) adc qword ptr [rdi + VALUE], rbp
#define ADC_RBP_TO_PTR_RSI_(VALUE) adc qword ptr [rsi + VALUE], rbp
#define ADC_RBP_TO_PTR_RBP_(VALUE) adc qword ptr [rbp + VALUE], rbp
#define ADC_RBP_TO_PTR_RSP_(VALUE) adc qword ptr [rsp + VALUE], rbp
#define ADC_RBP_TO_PTR_R8_(VALUE) adc qword ptr [r8 + VALUE], rbp
#define ADC_RBP_TO_PTR_R9_(VALUE) adc qword ptr [r9 + VALUE], rbp
#define ADC_RBP_TO_PTR_R10_(VALUE) adc qword ptr [r10 + VALUE], rbp
#define ADC_RBP_TO_PTR_R11_(VALUE) adc qword ptr [r11 + VALUE], rbp
#define ADC_RBP_TO_PTR_R12_(VALUE) adc qword ptr [r12 + VALUE], rbp
#define ADC_RBP_TO_PTR_R13_(VALUE) adc qword ptr [r13 + VALUE], rbp
#define ADC_RBP_TO_PTR_R14_(VALUE) adc qword ptr [r14 + VALUE], rbp
#define ADC_RBP_TO_PTR_R15_(VALUE) adc qword ptr [r15 + VALUE], rbp
#define ADC_RBP_TO_PTR_EAX_(VALUE) adc qword ptr [eax + VALUE], rbp
#define ADC_RBP_TO_PTR_EBX_(VALUE) adc qword ptr [ebx + VALUE], rbp
#define ADC_RBP_TO_PTR_ECX_(VALUE) adc qword ptr [ecx + VALUE], rbp
#define ADC_RBP_TO_PTR_EDX_(VALUE) adc qword ptr [edx + VALUE], rbp
#define ADC_RBP_TO_PTR_EDI_(VALUE) adc qword ptr [edi + VALUE], rbp
#define ADC_RBP_TO_PTR_ESI_(VALUE) adc qword ptr [esi + VALUE], rbp
#define ADC_RBP_TO_PTR_EBP_(VALUE) adc qword ptr [ebp + VALUE], rbp
#define ADC_RBP_TO_PTR_ESP_(VALUE) adc qword ptr [esp + VALUE], rbp

#define ADC_RSP_TO_PTR_RAX_(VALUE) adc qword ptr [rax + VALUE], rsp
#define ADC_RSP_TO_PTR_RBX_(VALUE) adc qword ptr [rbx + VALUE], rsp
#define ADC_RSP_TO_PTR_RCX_(VALUE) adc qword ptr [rcx + VALUE], rsp
#define ADC_RSP_TO_PTR_RDX_(VALUE) adc qword ptr [rdx + VALUE], rsp
#define ADC_RSP_TO_PTR_RDI_(VALUE) adc qword ptr [rdi + VALUE], rsp
#define ADC_RSP_TO_PTR_RSI_(VALUE) adc qword ptr [rsi + VALUE], rsp
#define ADC_RSP_TO_PTR_RBP_(VALUE) adc qword ptr [rbp + VALUE], rsp
#define ADC_RSP_TO_PTR_RSP_(VALUE) adc qword ptr [rsp + VALUE], rsp
#define ADC_RSP_TO_PTR_R8_(VALUE) adc qword ptr [r8 + VALUE], rsp
#define ADC_RSP_TO_PTR_R9_(VALUE) adc qword ptr [r9 + VALUE], rsp
#define ADC_RSP_TO_PTR_R10_(VALUE) adc qword ptr [r10 + VALUE], rsp
#define ADC_RSP_TO_PTR_R11_(VALUE) adc qword ptr [r11 + VALUE], rsp
#define ADC_RSP_TO_PTR_R12_(VALUE) adc qword ptr [r12 + VALUE], rsp
#define ADC_RSP_TO_PTR_R13_(VALUE) adc qword ptr [r13 + VALUE], rsp
#define ADC_RSP_TO_PTR_R14_(VALUE) adc qword ptr [r14 + VALUE], rsp
#define ADC_RSP_TO_PTR_R15_(VALUE) adc qword ptr [r15 + VALUE], rsp
#define ADC_RSP_TO_PTR_EAX_(VALUE) adc qword ptr [eax + VALUE], rsp
#define ADC_RSP_TO_PTR_EBX_(VALUE) adc qword ptr [ebx + VALUE], rsp
#define ADC_RSP_TO_PTR_ECX_(VALUE) adc qword ptr [ecx + VALUE], rsp
#define ADC_RSP_TO_PTR_EDX_(VALUE) adc qword ptr [edx + VALUE], rsp
#define ADC_RSP_TO_PTR_EDI_(VALUE) adc qword ptr [edi + VALUE], rsp
#define ADC_RSP_TO_PTR_ESI_(VALUE) adc qword ptr [esi + VALUE], rsp
#define ADC_RSP_TO_PTR_EBP_(VALUE) adc qword ptr [ebp + VALUE], rsp
#define ADC_RSP_TO_PTR_ESP_(VALUE) adc qword ptr [esp + VALUE], rsp

#define ADC_R8_TO_PTR_RAX_(VALUE) adc qword ptr [rax + VALUE], r8
#define ADC_R8_TO_PTR_RBX_(VALUE) adc qword ptr [rbx + VALUE], r8
#define ADC_R8_TO_PTR_RCX_(VALUE) adc qword ptr [rcx + VALUE], r8
#define ADC_R8_TO_PTR_RDX_(VALUE) adc qword ptr [rdx + VALUE], r8
#define ADC_R8_TO_PTR_RDI_(VALUE) adc qword ptr [rdi + VALUE], r8
#define ADC_R8_TO_PTR_RSI_(VALUE) adc qword ptr [rsi + VALUE], r8
#define ADC_R8_TO_PTR_RBP_(VALUE) adc qword ptr [rbp + VALUE], r8
#define ADC_R8_TO_PTR_RSP_(VALUE) adc qword ptr [rsp + VALUE], r8
#define ADC_R8_TO_PTR_R8_(VALUE) adc qword ptr [r8 + VALUE], r8
#define ADC_R8_TO_PTR_R9_(VALUE) adc qword ptr [r9 + VALUE], r8
#define ADC_R8_TO_PTR_R10_(VALUE) adc qword ptr [r10 + VALUE], r8
#define ADC_R8_TO_PTR_R11_(VALUE) adc qword ptr [r11 + VALUE], r8
#define ADC_R8_TO_PTR_R12_(VALUE) adc qword ptr [r12 + VALUE], r8
#define ADC_R8_TO_PTR_R13_(VALUE) adc qword ptr [r13 + VALUE], r8
#define ADC_R8_TO_PTR_R14_(VALUE) adc qword ptr [r14 + VALUE], r8
#define ADC_R8_TO_PTR_R15_(VALUE) adc qword ptr [r15 + VALUE], r8
#define ADC_R8_TO_PTR_EAX_(VALUE) adc qword ptr [eax + VALUE], r8
#define ADC_R8_TO_PTR_EBX_(VALUE) adc qword ptr [ebx + VALUE], r8
#define ADC_R8_TO_PTR_ECX_(VALUE) adc qword ptr [ecx + VALUE], r8
#define ADC_R8_TO_PTR_EDX_(VALUE) adc qword ptr [edx + VALUE], r8
#define ADC_R8_TO_PTR_EDI_(VALUE) adc qword ptr [edi + VALUE], r8
#define ADC_R8_TO_PTR_ESI_(VALUE) adc qword ptr [esi + VALUE], r8
#define ADC_R8_TO_PTR_EBP_(VALUE) adc qword ptr [ebp + VALUE], r8
#define ADC_R8_TO_PTR_ESP_(VALUE) adc qword ptr [esp + VALUE], r8

#define ADC_R9_TO_PTR_RAX_(VALUE) adc qword ptr [rax + VALUE], r9
#define ADC_R9_TO_PTR_RBX_(VALUE) adc qword ptr [rbx + VALUE], r9
#define ADC_R9_TO_PTR_RCX_(VALUE) adc qword ptr [rcx + VALUE], r9
#define ADC_R9_TO_PTR_RDX_(VALUE) adc qword ptr [rdx + VALUE], r9
#define ADC_R9_TO_PTR_RDI_(VALUE) adc qword ptr [rdi + VALUE], r9
#define ADC_R9_TO_PTR_RSI_(VALUE) adc qword ptr [rsi + VALUE], r9
#define ADC_R9_TO_PTR_RBP_(VALUE) adc qword ptr [rbp + VALUE], r9
#define ADC_R9_TO_PTR_RSP_(VALUE) adc qword ptr [rsp + VALUE], r9
#define ADC_R9_TO_PTR_R8_(VALUE) adc qword ptr [r8 + VALUE], r9
#define ADC_R9_TO_PTR_R9_(VALUE) adc qword ptr [r9 + VALUE], r9
#define ADC_R9_TO_PTR_R10_(VALUE) adc qword ptr [r10 + VALUE], r9
#define ADC_R9_TO_PTR_R11_(VALUE) adc qword ptr [r11 + VALUE], r9
#define ADC_R9_TO_PTR_R12_(VALUE) adc qword ptr [r12 + VALUE], r9
#define ADC_R9_TO_PTR_R13_(VALUE) adc qword ptr [r13 + VALUE], r9
#define ADC_R9_TO_PTR_R14_(VALUE) adc qword ptr [r14 + VALUE], r9
#define ADC_R9_TO_PTR_R15_(VALUE) adc qword ptr [r15 + VALUE], r9
#define ADC_R9_TO_PTR_EAX_(VALUE) adc qword ptr [eax + VALUE], r9
#define ADC_R9_TO_PTR_EBX_(VALUE) adc qword ptr [ebx + VALUE], r9
#define ADC_R9_TO_PTR_ECX_(VALUE) adc qword ptr [ecx + VALUE], r9
#define ADC_R9_TO_PTR_EDX_(VALUE) adc qword ptr [edx + VALUE], r9
#define ADC_R9_TO_PTR_EDI_(VALUE) adc qword ptr [edi + VALUE], r9
#define ADC_R9_TO_PTR_ESI_(VALUE) adc qword ptr [esi + VALUE], r9
#define ADC_R9_TO_PTR_EBP_(VALUE) adc qword ptr [ebp + VALUE], r9
#define ADC_R9_TO_PTR_ESP_(VALUE) adc qword ptr [esp + VALUE], r9

#define ADC_R10_TO_PTR_RAX_(VALUE) adc qword ptr [rax + VALUE], r10
#define ADC_R10_TO_PTR_RBX_(VALUE) adc qword ptr [rbx + VALUE], r10
#define ADC_R10_TO_PTR_RCX_(VALUE) adc qword ptr [rcx + VALUE], r10
#define ADC_R10_TO_PTR_RDX_(VALUE) adc qword ptr [rdx + VALUE], r10
#define ADC_R10_TO_PTR_RDI_(VALUE) adc qword ptr [rdi + VALUE], r10
#define ADC_R10_TO_PTR_RSI_(VALUE) adc qword ptr [rsi + VALUE], r10
#define ADC_R10_TO_PTR_RBP_(VALUE) adc qword ptr [rbp + VALUE], r10
#define ADC_R10_TO_PTR_RSP_(VALUE) adc qword ptr [rsp + VALUE], r10
#define ADC_R10_TO_PTR_R8_(VALUE) adc qword ptr [r8 + VALUE], r10
#define ADC_R10_TO_PTR_R9_(VALUE) adc qword ptr [r9 + VALUE], r10
#define ADC_R10_TO_PTR_R10_(VALUE) adc qword ptr [r10 + VALUE], r10
#define ADC_R10_TO_PTR_R11_(VALUE) adc qword ptr [r11 + VALUE], r10
#define ADC_R10_TO_PTR_R12_(VALUE) adc qword ptr [r12 + VALUE], r10
#define ADC_R10_TO_PTR_R13_(VALUE) adc qword ptr [r13 + VALUE], r10
#define ADC_R10_TO_PTR_R14_(VALUE) adc qword ptr [r14 + VALUE], r10
#define ADC_R10_TO_PTR_R15_(VALUE) adc qword ptr [r15 + VALUE], r10
#define ADC_R10_TO_PTR_EAX_(VALUE) adc qword ptr [eax + VALUE], r10
#define ADC_R10_TO_PTR_EBX_(VALUE) adc qword ptr [ebx + VALUE], r10
#define ADC_R10_TO_PTR_ECX_(VALUE) adc qword ptr [ecx + VALUE], r10
#define ADC_R10_TO_PTR_EDX_(VALUE) adc qword ptr [edx + VALUE], r10
#define ADC_R10_TO_PTR_EDI_(VALUE) adc qword ptr [edi + VALUE], r10
#define ADC_R10_TO_PTR_ESI_(VALUE) adc qword ptr [esi + VALUE], r10
#define ADC_R10_TO_PTR_EBP_(VALUE) adc qword ptr [ebp + VALUE], r10
#define ADC_R10_TO_PTR_ESP_(VALUE) adc qword ptr [esp + VALUE], r10

#define ADC_R11_TO_PTR_RAX_(VALUE) adc qword ptr [rax + VALUE], r11
#define ADC_R11_TO_PTR_RBX_(VALUE) adc qword ptr [rbx + VALUE], r11
#define ADC_R11_TO_PTR_RCX_(VALUE) adc qword ptr [rcx + VALUE], r11
#define ADC_R11_TO_PTR_RDX_(VALUE) adc qword ptr [rdx + VALUE], r11
#define ADC_R11_TO_PTR_RDI_(VALUE) adc qword ptr [rdi + VALUE], r11
#define ADC_R11_TO_PTR_RSI_(VALUE) adc qword ptr [rsi + VALUE], r11
#define ADC_R11_TO_PTR_RBP_(VALUE) adc qword ptr [rbp + VALUE], r11
#define ADC_R11_TO_PTR_RSP_(VALUE) adc qword ptr [rsp + VALUE], r11
#define ADC_R11_TO_PTR_R8_(VALUE) adc qword ptr [r8 + VALUE], r11
#define ADC_R11_TO_PTR_R9_(VALUE) adc qword ptr [r9 + VALUE], r11
#define ADC_R11_TO_PTR_R10_(VALUE) adc qword ptr [r10 + VALUE], r11
#define ADC_R11_TO_PTR_R11_(VALUE) adc qword ptr [r11 + VALUE], r11
#define ADC_R11_TO_PTR_R12_(VALUE) adc qword ptr [r12 + VALUE], r11
#define ADC_R11_TO_PTR_R13_(VALUE) adc qword ptr [r13 + VALUE], r11
#define ADC_R11_TO_PTR_R14_(VALUE) adc qword ptr [r14 + VALUE], r11
#define ADC_R11_TO_PTR_R15_(VALUE) adc qword ptr [r15 + VALUE], r11
#define ADC_R11_TO_PTR_EAX_(VALUE) adc qword ptr [eax + VALUE], r11
#define ADC_R11_TO_PTR_EBX_(VALUE) adc qword ptr [ebx + VALUE], r11
#define ADC_R11_TO_PTR_ECX_(VALUE) adc qword ptr [ecx + VALUE], r11
#define ADC_R11_TO_PTR_EDX_(VALUE) adc qword ptr [edx + VALUE], r11
#define ADC_R11_TO_PTR_EDI_(VALUE) adc qword ptr [edi + VALUE], r11
#define ADC_R11_TO_PTR_ESI_(VALUE) adc qword ptr [esi + VALUE], r11
#define ADC_R11_TO_PTR_EBP_(VALUE) adc qword ptr [ebp + VALUE], r11
#define ADC_R11_TO_PTR_ESP_(VALUE) adc qword ptr [esp + VALUE], r11

#define ADC_R12_TO_PTR_RAX_(VALUE) adc qword ptr [rax + VALUE], r12
#define ADC_R12_TO_PTR_RBX_(VALUE) adc qword ptr [rbx + VALUE], r12
#define ADC_R12_TO_PTR_RCX_(VALUE) adc qword ptr [rcx + VALUE], r12
#define ADC_R12_TO_PTR_RDX_(VALUE) adc qword ptr [rdx + VALUE], r12
#define ADC_R12_TO_PTR_RDI_(VALUE) adc qword ptr [rdi + VALUE], r12
#define ADC_R12_TO_PTR_RSI_(VALUE) adc qword ptr [rsi + VALUE], r12
#define ADC_R12_TO_PTR_RBP_(VALUE) adc qword ptr [rbp + VALUE], r12
#define ADC_R12_TO_PTR_RSP_(VALUE) adc qword ptr [rsp + VALUE], r12
#define ADC_R12_TO_PTR_R8_(VALUE) adc qword ptr [r8 + VALUE], r12
#define ADC_R12_TO_PTR_R9_(VALUE) adc qword ptr [r9 + VALUE], r12
#define ADC_R12_TO_PTR_R10_(VALUE) adc qword ptr [r10 + VALUE], r12
#define ADC_R12_TO_PTR_R11_(VALUE) adc qword ptr [r11 + VALUE], r12
#define ADC_R12_TO_PTR_R12_(VALUE) adc qword ptr [r12 + VALUE], r12
#define ADC_R12_TO_PTR_R13_(VALUE) adc qword ptr [r13 + VALUE], r12
#define ADC_R12_TO_PTR_R14_(VALUE) adc qword ptr [r14 + VALUE], r12
#define ADC_R12_TO_PTR_R15_(VALUE) adc qword ptr [r15 + VALUE], r12
#define ADC_R12_TO_PTR_EAX_(VALUE) adc qword ptr [eax + VALUE], r12
#define ADC_R12_TO_PTR_EBX_(VALUE) adc qword ptr [ebx + VALUE], r12
#define ADC_R12_TO_PTR_ECX_(VALUE) adc qword ptr [ecx + VALUE], r12
#define ADC_R12_TO_PTR_EDX_(VALUE) adc qword ptr [edx + VALUE], r12
#define ADC_R12_TO_PTR_EDI_(VALUE) adc qword ptr [edi + VALUE], r12
#define ADC_R12_TO_PTR_ESI_(VALUE) adc qword ptr [esi + VALUE], r12
#define ADC_R12_TO_PTR_EBP_(VALUE) adc qword ptr [ebp + VALUE], r12
#define ADC_R12_TO_PTR_ESP_(VALUE) adc qword ptr [esp + VALUE], r12

#define ADC_R13_TO_PTR_RAX_(VALUE) adc qword ptr [rax + VALUE], r13
#define ADC_R13_TO_PTR_RBX_(VALUE) adc qword ptr [rbx + VALUE], r13
#define ADC_R13_TO_PTR_RCX_(VALUE) adc qword ptr [rcx + VALUE], r13
#define ADC_R13_TO_PTR_RDX_(VALUE) adc qword ptr [rdx + VALUE], r13
#define ADC_R13_TO_PTR_RDI_(VALUE) adc qword ptr [rdi + VALUE], r13
#define ADC_R13_TO_PTR_RSI_(VALUE) adc qword ptr [rsi + VALUE], r13
#define ADC_R13_TO_PTR_RBP_(VALUE) adc qword ptr [rbp + VALUE], r13
#define ADC_R13_TO_PTR_RSP_(VALUE) adc qword ptr [rsp + VALUE], r13
#define ADC_R13_TO_PTR_R8_(VALUE) adc qword ptr [r8 + VALUE], r13
#define ADC_R13_TO_PTR_R9_(VALUE) adc qword ptr [r9 + VALUE], r13
#define ADC_R13_TO_PTR_R10_(VALUE) adc qword ptr [r10 + VALUE], r13
#define ADC_R13_TO_PTR_R11_(VALUE) adc qword ptr [r11 + VALUE], r13
#define ADC_R13_TO_PTR_R12_(VALUE) adc qword ptr [r12 + VALUE], r13
#define ADC_R13_TO_PTR_R13_(VALUE) adc qword ptr [r13 + VALUE], r13
#define ADC_R13_TO_PTR_R14_(VALUE) adc qword ptr [r14 + VALUE], r13
#define ADC_R13_TO_PTR_R15_(VALUE) adc qword ptr [r15 + VALUE], r13
#define ADC_R13_TO_PTR_EAX_(VALUE) adc qword ptr [eax + VALUE], r13
#define ADC_R13_TO_PTR_EBX_(VALUE) adc qword ptr [ebx + VALUE], r13
#define ADC_R13_TO_PTR_ECX_(VALUE) adc qword ptr [ecx + VALUE], r13
#define ADC_R13_TO_PTR_EDX_(VALUE) adc qword ptr [edx + VALUE], r13
#define ADC_R13_TO_PTR_EDI_(VALUE) adc qword ptr [edi + VALUE], r13
#define ADC_R13_TO_PTR_ESI_(VALUE) adc qword ptr [esi + VALUE], r13
#define ADC_R13_TO_PTR_EBP_(VALUE) adc qword ptr [ebp + VALUE], r13
#define ADC_R13_TO_PTR_ESP_(VALUE) adc qword ptr [esp + VALUE], r13

#define ADC_R14_TO_PTR_RAX_(VALUE) adc qword ptr [rax + VALUE], r14
#define ADC_R14_TO_PTR_RBX_(VALUE) adc qword ptr [rbx + VALUE], r14
#define ADC_R14_TO_PTR_RCX_(VALUE) adc qword ptr [rcx + VALUE], r14
#define ADC_R14_TO_PTR_RDX_(VALUE) adc qword ptr [rdx + VALUE], r14
#define ADC_R14_TO_PTR_RDI_(VALUE) adc qword ptr [rdi + VALUE], r14
#define ADC_R14_TO_PTR_RSI_(VALUE) adc qword ptr [rsi + VALUE], r14
#define ADC_R14_TO_PTR_RBP_(VALUE) adc qword ptr [rbp + VALUE], r14
#define ADC_R14_TO_PTR_RSP_(VALUE) adc qword ptr [rsp + VALUE], r14
#define ADC_R14_TO_PTR_R8_(VALUE) adc qword ptr [r8 + VALUE], r14
#define ADC_R14_TO_PTR_R9_(VALUE) adc qword ptr [r9 + VALUE], r14
#define ADC_R14_TO_PTR_R10_(VALUE) adc qword ptr [r10 + VALUE], r14
#define ADC_R14_TO_PTR_R11_(VALUE) adc qword ptr [r11 + VALUE], r14
#define ADC_R14_TO_PTR_R12_(VALUE) adc qword ptr [r12 + VALUE], r14
#define ADC_R14_TO_PTR_R13_(VALUE) adc qword ptr [r13 + VALUE], r14
#define ADC_R14_TO_PTR_R14_(VALUE) adc qword ptr [r14 + VALUE], r14
#define ADC_R14_TO_PTR_R15_(VALUE) adc qword ptr [r15 + VALUE], r14
#define ADC_R14_TO_PTR_EAX_(VALUE) adc qword ptr [eax + VALUE], r14
#define ADC_R14_TO_PTR_EBX_(VALUE) adc qword ptr [ebx + VALUE], r14
#define ADC_R14_TO_PTR_ECX_(VALUE) adc qword ptr [ecx + VALUE], r14
#define ADC_R14_TO_PTR_EDX_(VALUE) adc qword ptr [edx + VALUE], r14
#define ADC_R14_TO_PTR_EDI_(VALUE) adc qword ptr [edi + VALUE], r14
#define ADC_R14_TO_PTR_ESI_(VALUE) adc qword ptr [esi + VALUE], r14
#define ADC_R14_TO_PTR_EBP_(VALUE) adc qword ptr [ebp + VALUE], r14
#define ADC_R14_TO_PTR_ESP_(VALUE) adc qword ptr [esp + VALUE], r14

#define ADC_R15_TO_PTR_RAX_(VALUE) adc qword ptr [rax + VALUE], r15
#define ADC_R15_TO_PTR_RBX_(VALUE) adc qword ptr [rbx + VALUE], r15
#define ADC_R15_TO_PTR_RCX_(VALUE) adc qword ptr [rcx + VALUE], r15
#define ADC_R15_TO_PTR_RDX_(VALUE) adc qword ptr [rdx + VALUE], r15
#define ADC_R15_TO_PTR_RDI_(VALUE) adc qword ptr [rdi + VALUE], r15
#define ADC_R15_TO_PTR_RSI_(VALUE) adc qword ptr [rsi + VALUE], r15
#define ADC_R15_TO_PTR_RBP_(VALUE) adc qword ptr [rbp + VALUE], r15
#define ADC_R15_TO_PTR_RSP_(VALUE) adc qword ptr [rsp + VALUE], r15
#define ADC_R15_TO_PTR_R8_(VALUE) adc qword ptr [r8 + VALUE], r15
#define ADC_R15_TO_PTR_R9_(VALUE) adc qword ptr [r9 + VALUE], r15
#define ADC_R15_TO_PTR_R10_(VALUE) adc qword ptr [r10 + VALUE], r15
#define ADC_R15_TO_PTR_R11_(VALUE) adc qword ptr [r11 + VALUE], r15
#define ADC_R15_TO_PTR_R12_(VALUE) adc qword ptr [r12 + VALUE], r15
#define ADC_R15_TO_PTR_R13_(VALUE) adc qword ptr [r13 + VALUE], r15
#define ADC_R15_TO_PTR_R14_(VALUE) adc qword ptr [r14 + VALUE], r15
#define ADC_R15_TO_PTR_R15_(VALUE) adc qword ptr [r15 + VALUE], r15
#define ADC_R15_TO_PTR_EAX_(VALUE) adc qword ptr [eax + VALUE], r15
#define ADC_R15_TO_PTR_EBX_(VALUE) adc qword ptr [ebx + VALUE], r15
#define ADC_R15_TO_PTR_ECX_(VALUE) adc qword ptr [ecx + VALUE], r15
#define ADC_R15_TO_PTR_EDX_(VALUE) adc qword ptr [edx + VALUE], r15
#define ADC_R15_TO_PTR_EDI_(VALUE) adc qword ptr [edi + VALUE], r15
#define ADC_R15_TO_PTR_ESI_(VALUE) adc qword ptr [esi + VALUE], r15
#define ADC_R15_TO_PTR_EBP_(VALUE) adc qword ptr [ebp + VALUE], r15
#define ADC_R15_TO_PTR_ESP_(VALUE) adc qword ptr [esp + VALUE], r15
/* ************************* [^] 64-BIT MEMORY [^] ************************** */

#include "32.INL"

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
