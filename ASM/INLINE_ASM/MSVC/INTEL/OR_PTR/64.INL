#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************* [v] 64-BIT MEMORY [v] ************************** */
#define OR_RAX_FROM_PTR_(VALUE) or rax, qword ptr [VALUE]
#define OR_RBX_FROM_PTR_(VALUE) or rbx, qword ptr [VALUE]
#define OR_RCX_FROM_PTR_(VALUE) or rcx, qword ptr [VALUE]
#define OR_RDX_FROM_PTR_(VALUE) or rdx, qword ptr [VALUE]
#define OR_RDI_FROM_PTR_(VALUE) or rdi, qword ptr [VALUE]
#define OR_RSI_FROM_PTR_(VALUE) or rsi, qword ptr [VALUE]
#define OR_RBP_FROM_PTR_(VALUE) or rbp, qword ptr [VALUE]
#define OR_RSP_FROM_PTR_(VALUE) or rsp, qword ptr [VALUE]
#define OR_R8_FROM_PTR_(VALUE) or r8, qword ptr [VALUE]
#define OR_R9_FROM_PTR_(VALUE) or r9, qword ptr [VALUE]
#define OR_R10_FROM_PTR_(VALUE) or r10, qword ptr [VALUE]
#define OR_R11_FROM_PTR_(VALUE) or r11, qword ptr [VALUE]
#define OR_R12_FROM_PTR_(VALUE) or r12, qword ptr [VALUE]
#define OR_R13_FROM_PTR_(VALUE) or r13, qword ptr [VALUE]
#define OR_R14_FROM_PTR_(VALUE) or r14, qword ptr [VALUE]
#define OR_R15_FROM_PTR_(VALUE) or r15, qword ptr [VALUE]

#define OR_RAX_TO_PTR_(VALUE) or qword ptr [VALUE], rax
#define OR_RBX_TO_PTR_(VALUE) or qword ptr [VALUE], rbx
#define OR_RCX_TO_PTR_(VALUE) or qword ptr [VALUE], rcx
#define OR_RDX_TO_PTR_(VALUE) or qword ptr [VALUE], rdx
#define OR_RDI_TO_PTR_(VALUE) or qword ptr [VALUE], rdi
#define OR_RSI_TO_PTR_(VALUE) or qword ptr [VALUE], rsi
#define OR_RBP_TO_PTR_(VALUE) or qword ptr [VALUE], rbp
#define OR_RSP_TO_PTR_(VALUE) or qword ptr [VALUE], rsp
#define OR_R8_TO_PTR_(VALUE) or qword ptr [VALUE], r8
#define OR_R9_TO_PTR_(VALUE) or qword ptr [VALUE], r9
#define OR_R10_TO_PTR_(VALUE) or qword ptr [VALUE], r10
#define OR_R11_TO_PTR_(VALUE) or qword ptr [VALUE], r11
#define OR_R12_TO_PTR_(VALUE) or qword ptr [VALUE], r12
#define OR_R13_TO_PTR_(VALUE) or qword ptr [VALUE], r13
#define OR_R14_TO_PTR_(VALUE) or qword ptr [VALUE], r14
#define OR_R15_TO_PTR_(VALUE) or qword ptr [VALUE], r15

#define OR_RAX_FROM_PTR_RAX or rax, qword ptr [rax]
#define OR_RAX_FROM_PTR_RBX or rax, qword ptr [rbx]
#define OR_RAX_FROM_PTR_RCX or rax, qword ptr [rcx]
#define OR_RAX_FROM_PTR_RDX or rax, qword ptr [rdx]
#define OR_RAX_FROM_PTR_RDI or rax, qword ptr [rdi]
#define OR_RAX_FROM_PTR_RSI or rax, qword ptr [rsi]
#define OR_RAX_FROM_PTR_RBP or rax, qword ptr [rbp]
#define OR_RAX_FROM_PTR_RSP or rax, qword ptr [rsp]
#define OR_RAX_FROM_PTR_R8 or rax, qword ptr [r8]
#define OR_RAX_FROM_PTR_R9 or rax, qword ptr [r9]
#define OR_RAX_FROM_PTR_R10 or rax, qword ptr [r10]
#define OR_RAX_FROM_PTR_R11 or rax, qword ptr [r11]
#define OR_RAX_FROM_PTR_R12 or rax, qword ptr [r12]
#define OR_RAX_FROM_PTR_R13 or rax, qword ptr [r13]
#define OR_RAX_FROM_PTR_R14 or rax, qword ptr [r14]
#define OR_RAX_FROM_PTR_R15 or rax, qword ptr [r15]
#define OR_RAX_FROM_PTR_EAX or rax, qword ptr [eax]
#define OR_RAX_FROM_PTR_EBX or rax, qword ptr [ebx]
#define OR_RAX_FROM_PTR_ECX or rax, qword ptr [ecx]
#define OR_RAX_FROM_PTR_EDX or rax, qword ptr [edx]
#define OR_RAX_FROM_PTR_EDI or rax, qword ptr [edi]
#define OR_RAX_FROM_PTR_ESI or rax, qword ptr [esi]
#define OR_RAX_FROM_PTR_EBP or rax, qword ptr [ebp]
#define OR_RAX_FROM_PTR_ESP or rax, qword ptr [esp]

#define OR_RBX_FROM_PTR_RAX or rbx, qword ptr [rax]
#define OR_RBX_FROM_PTR_RBX or rbx, qword ptr [rbx]
#define OR_RBX_FROM_PTR_RCX or rbx, qword ptr [rcx]
#define OR_RBX_FROM_PTR_RDX or rbx, qword ptr [rdx]
#define OR_RBX_FROM_PTR_RDI or rbx, qword ptr [rdi]
#define OR_RBX_FROM_PTR_RSI or rbx, qword ptr [rsi]
#define OR_RBX_FROM_PTR_RBP or rbx, qword ptr [rbp]
#define OR_RBX_FROM_PTR_RSP or rbx, qword ptr [rsp]
#define OR_RBX_FROM_PTR_R8 or rbx, qword ptr [r8]
#define OR_RBX_FROM_PTR_R9 or rbx, qword ptr [r9]
#define OR_RBX_FROM_PTR_R10 or rbx, qword ptr [r10]
#define OR_RBX_FROM_PTR_R11 or rbx, qword ptr [r11]
#define OR_RBX_FROM_PTR_R12 or rbx, qword ptr [r12]
#define OR_RBX_FROM_PTR_R13 or rbx, qword ptr [r13]
#define OR_RBX_FROM_PTR_R14 or rbx, qword ptr [r14]
#define OR_RBX_FROM_PTR_R15 or rbx, qword ptr [r15]
#define OR_RBX_FROM_PTR_EAX or rbx, qword ptr [eax]
#define OR_RBX_FROM_PTR_EBX or rbx, qword ptr [ebx]
#define OR_RBX_FROM_PTR_ECX or rbx, qword ptr [ecx]
#define OR_RBX_FROM_PTR_EDX or rbx, qword ptr [edx]
#define OR_RBX_FROM_PTR_EDI or rbx, qword ptr [edi]
#define OR_RBX_FROM_PTR_ESI or rbx, qword ptr [esi]
#define OR_RBX_FROM_PTR_EBP or rbx, qword ptr [ebp]
#define OR_RBX_FROM_PTR_ESP or rbx, qword ptr [esp]

#define OR_RCX_FROM_PTR_RAX or rcx, qword ptr [rax]
#define OR_RCX_FROM_PTR_RBX or rcx, qword ptr [rbx]
#define OR_RCX_FROM_PTR_RCX or rcx, qword ptr [rcx]
#define OR_RCX_FROM_PTR_RDX or rcx, qword ptr [rdx]
#define OR_RCX_FROM_PTR_RDI or rcx, qword ptr [rdi]
#define OR_RCX_FROM_PTR_RSI or rcx, qword ptr [rsi]
#define OR_RCX_FROM_PTR_RBP or rcx, qword ptr [rbp]
#define OR_RCX_FROM_PTR_RSP or rcx, qword ptr [rsp]
#define OR_RCX_FROM_PTR_R8 or rcx, qword ptr [r8]
#define OR_RCX_FROM_PTR_R9 or rcx, qword ptr [r9]
#define OR_RCX_FROM_PTR_R10 or rcx, qword ptr [r10]
#define OR_RCX_FROM_PTR_R11 or rcx, qword ptr [r11]
#define OR_RCX_FROM_PTR_R12 or rcx, qword ptr [r12]
#define OR_RCX_FROM_PTR_R13 or rcx, qword ptr [r13]
#define OR_RCX_FROM_PTR_R14 or rcx, qword ptr [r14]
#define OR_RCX_FROM_PTR_R15 or rcx, qword ptr [r15]
#define OR_RCX_FROM_PTR_EAX or rcx, qword ptr [eax]
#define OR_RCX_FROM_PTR_EBX or rcx, qword ptr [ebx]
#define OR_RCX_FROM_PTR_ECX or rcx, qword ptr [ecx]
#define OR_RCX_FROM_PTR_EDX or rcx, qword ptr [edx]
#define OR_RCX_FROM_PTR_EDI or rcx, qword ptr [edi]
#define OR_RCX_FROM_PTR_ESI or rcx, qword ptr [esi]
#define OR_RCX_FROM_PTR_EBP or rcx, qword ptr [ebp]
#define OR_RCX_FROM_PTR_ESP or rcx, qword ptr [esp]

#define OR_RDX_FROM_PTR_RAX or rdx, qword ptr [rax]
#define OR_RDX_FROM_PTR_RBX or rdx, qword ptr [rbx]
#define OR_RDX_FROM_PTR_RCX or rdx, qword ptr [rcx]
#define OR_RDX_FROM_PTR_RDX or rdx, qword ptr [rdx]
#define OR_RDX_FROM_PTR_RDI or rdx, qword ptr [rdi]
#define OR_RDX_FROM_PTR_RSI or rdx, qword ptr [rsi]
#define OR_RDX_FROM_PTR_RBP or rdx, qword ptr [rbp]
#define OR_RDX_FROM_PTR_RSP or rdx, qword ptr [rsp]
#define OR_RDX_FROM_PTR_R8 or rdx, qword ptr [r8]
#define OR_RDX_FROM_PTR_R9 or rdx, qword ptr [r9]
#define OR_RDX_FROM_PTR_R10 or rdx, qword ptr [r10]
#define OR_RDX_FROM_PTR_R11 or rdx, qword ptr [r11]
#define OR_RDX_FROM_PTR_R12 or rdx, qword ptr [r12]
#define OR_RDX_FROM_PTR_R13 or rdx, qword ptr [r13]
#define OR_RDX_FROM_PTR_R14 or rdx, qword ptr [r14]
#define OR_RDX_FROM_PTR_R15 or rdx, qword ptr [r15]
#define OR_RDX_FROM_PTR_EAX or rdx, qword ptr [eax]
#define OR_RDX_FROM_PTR_EBX or rdx, qword ptr [ebx]
#define OR_RDX_FROM_PTR_ECX or rdx, qword ptr [ecx]
#define OR_RDX_FROM_PTR_EDX or rdx, qword ptr [edx]
#define OR_RDX_FROM_PTR_EDI or rdx, qword ptr [edi]
#define OR_RDX_FROM_PTR_ESI or rdx, qword ptr [esi]
#define OR_RDX_FROM_PTR_EBP or rdx, qword ptr [ebp]
#define OR_RDX_FROM_PTR_ESP or rdx, qword ptr [esp]

#define OR_RDI_FROM_PTR_RAX or rdi, qword ptr [rax]
#define OR_RDI_FROM_PTR_RBX or rdi, qword ptr [rbx]
#define OR_RDI_FROM_PTR_RCX or rdi, qword ptr [rcx]
#define OR_RDI_FROM_PTR_RDX or rdi, qword ptr [rdx]
#define OR_RDI_FROM_PTR_RDI or rdi, qword ptr [rdi]
#define OR_RDI_FROM_PTR_RSI or rdi, qword ptr [rsi]
#define OR_RDI_FROM_PTR_RBP or rdi, qword ptr [rbp]
#define OR_RDI_FROM_PTR_RSP or rdi, qword ptr [rsp]
#define OR_RDI_FROM_PTR_R8 or rdi, qword ptr [r8]
#define OR_RDI_FROM_PTR_R9 or rdi, qword ptr [r9]
#define OR_RDI_FROM_PTR_R10 or rdi, qword ptr [r10]
#define OR_RDI_FROM_PTR_R11 or rdi, qword ptr [r11]
#define OR_RDI_FROM_PTR_R12 or rdi, qword ptr [r12]
#define OR_RDI_FROM_PTR_R13 or rdi, qword ptr [r13]
#define OR_RDI_FROM_PTR_R14 or rdi, qword ptr [r14]
#define OR_RDI_FROM_PTR_R15 or rdi, qword ptr [r15]
#define OR_RDI_FROM_PTR_EAX or rdi, qword ptr [eax]
#define OR_RDI_FROM_PTR_EBX or rdi, qword ptr [ebx]
#define OR_RDI_FROM_PTR_ECX or rdi, qword ptr [ecx]
#define OR_RDI_FROM_PTR_EDX or rdi, qword ptr [edx]
#define OR_RDI_FROM_PTR_EDI or rdi, qword ptr [edi]
#define OR_RDI_FROM_PTR_ESI or rdi, qword ptr [esi]
#define OR_RDI_FROM_PTR_EBP or rdi, qword ptr [ebp]
#define OR_RDI_FROM_PTR_ESP or rdi, qword ptr [esp]

#define OR_RSI_FROM_PTR_RAX or rsi, qword ptr [rax]
#define OR_RSI_FROM_PTR_RBX or rsi, qword ptr [rbx]
#define OR_RSI_FROM_PTR_RCX or rsi, qword ptr [rcx]
#define OR_RSI_FROM_PTR_RDX or rsi, qword ptr [rdx]
#define OR_RSI_FROM_PTR_RDI or rsi, qword ptr [rdi]
#define OR_RSI_FROM_PTR_RSI or rsi, qword ptr [rsi]
#define OR_RSI_FROM_PTR_RBP or rsi, qword ptr [rbp]
#define OR_RSI_FROM_PTR_RSP or rsi, qword ptr [rsp]
#define OR_RSI_FROM_PTR_R8 or rsi, qword ptr [r8]
#define OR_RSI_FROM_PTR_R9 or rsi, qword ptr [r9]
#define OR_RSI_FROM_PTR_R10 or rsi, qword ptr [r10]
#define OR_RSI_FROM_PTR_R11 or rsi, qword ptr [r11]
#define OR_RSI_FROM_PTR_R12 or rsi, qword ptr [r12]
#define OR_RSI_FROM_PTR_R13 or rsi, qword ptr [r13]
#define OR_RSI_FROM_PTR_R14 or rsi, qword ptr [r14]
#define OR_RSI_FROM_PTR_R15 or rsi, qword ptr [r15]
#define OR_RSI_FROM_PTR_EAX or rsi, qword ptr [eax]
#define OR_RSI_FROM_PTR_EBX or rsi, qword ptr [ebx]
#define OR_RSI_FROM_PTR_ECX or rsi, qword ptr [ecx]
#define OR_RSI_FROM_PTR_EDX or rsi, qword ptr [edx]
#define OR_RSI_FROM_PTR_EDI or rsi, qword ptr [edi]
#define OR_RSI_FROM_PTR_ESI or rsi, qword ptr [esi]
#define OR_RSI_FROM_PTR_EBP or rsi, qword ptr [ebp]
#define OR_RSI_FROM_PTR_ESP or rsi, qword ptr [esp]

#define OR_RBP_FROM_PTR_RAX or rbp, qword ptr [rax]
#define OR_RBP_FROM_PTR_RBX or rbp, qword ptr [rbx]
#define OR_RBP_FROM_PTR_RCX or rbp, qword ptr [rcx]
#define OR_RBP_FROM_PTR_RDX or rbp, qword ptr [rdx]
#define OR_RBP_FROM_PTR_RDI or rbp, qword ptr [rdi]
#define OR_RBP_FROM_PTR_RSI or rbp, qword ptr [rsi]
#define OR_RBP_FROM_PTR_RBP or rbp, qword ptr [rbp]
#define OR_RBP_FROM_PTR_RSP or rbp, qword ptr [rsp]
#define OR_RBP_FROM_PTR_R8 or rbp, qword ptr [r8]
#define OR_RBP_FROM_PTR_R9 or rbp, qword ptr [r9]
#define OR_RBP_FROM_PTR_R10 or rbp, qword ptr [r10]
#define OR_RBP_FROM_PTR_R11 or rbp, qword ptr [r11]
#define OR_RBP_FROM_PTR_R12 or rbp, qword ptr [r12]
#define OR_RBP_FROM_PTR_R13 or rbp, qword ptr [r13]
#define OR_RBP_FROM_PTR_R14 or rbp, qword ptr [r14]
#define OR_RBP_FROM_PTR_R15 or rbp, qword ptr [r15]
#define OR_RBP_FROM_PTR_EAX or rbp, qword ptr [eax]
#define OR_RBP_FROM_PTR_EBX or rbp, qword ptr [ebx]
#define OR_RBP_FROM_PTR_ECX or rbp, qword ptr [ecx]
#define OR_RBP_FROM_PTR_EDX or rbp, qword ptr [edx]
#define OR_RBP_FROM_PTR_EDI or rbp, qword ptr [edi]
#define OR_RBP_FROM_PTR_ESI or rbp, qword ptr [esi]
#define OR_RBP_FROM_PTR_EBP or rbp, qword ptr [ebp]
#define OR_RBP_FROM_PTR_ESP or rbp, qword ptr [esp]

#define OR_RSP_FROM_PTR_RAX or rsp, qword ptr [rax]
#define OR_RSP_FROM_PTR_RBX or rsp, qword ptr [rbx]
#define OR_RSP_FROM_PTR_RCX or rsp, qword ptr [rcx]
#define OR_RSP_FROM_PTR_RDX or rsp, qword ptr [rdx]
#define OR_RSP_FROM_PTR_RDI or rsp, qword ptr [rdi]
#define OR_RSP_FROM_PTR_RSI or rsp, qword ptr [rsi]
#define OR_RSP_FROM_PTR_RBP or rsp, qword ptr [rbp]
#define OR_RSP_FROM_PTR_RSP or rsp, qword ptr [rsp]
#define OR_RSP_FROM_PTR_R8 or rsp, qword ptr [r8]
#define OR_RSP_FROM_PTR_R9 or rsp, qword ptr [r9]
#define OR_RSP_FROM_PTR_R10 or rsp, qword ptr [r10]
#define OR_RSP_FROM_PTR_R11 or rsp, qword ptr [r11]
#define OR_RSP_FROM_PTR_R12 or rsp, qword ptr [r12]
#define OR_RSP_FROM_PTR_R13 or rsp, qword ptr [r13]
#define OR_RSP_FROM_PTR_R14 or rsp, qword ptr [r14]
#define OR_RSP_FROM_PTR_R15 or rsp, qword ptr [r15]
#define OR_RSP_FROM_PTR_EAX or rsp, qword ptr [eax]
#define OR_RSP_FROM_PTR_EBX or rsp, qword ptr [ebx]
#define OR_RSP_FROM_PTR_ECX or rsp, qword ptr [ecx]
#define OR_RSP_FROM_PTR_EDX or rsp, qword ptr [edx]
#define OR_RSP_FROM_PTR_EDI or rsp, qword ptr [edi]
#define OR_RSP_FROM_PTR_ESI or rsp, qword ptr [esi]
#define OR_RSP_FROM_PTR_EBP or rsp, qword ptr [ebp]
#define OR_RSP_FROM_PTR_ESP or rsp, qword ptr [esp]

#define OR_R8_FROM_PTR_RAX or r8, qword ptr [rax]
#define OR_R8_FROM_PTR_RBX or r8, qword ptr [rbx]
#define OR_R8_FROM_PTR_RCX or r8, qword ptr [rcx]
#define OR_R8_FROM_PTR_RDX or r8, qword ptr [rdx]
#define OR_R8_FROM_PTR_RDI or r8, qword ptr [rdi]
#define OR_R8_FROM_PTR_RSI or r8, qword ptr [rsi]
#define OR_R8_FROM_PTR_RBP or r8, qword ptr [rbp]
#define OR_R8_FROM_PTR_RSP or r8, qword ptr [rsp]
#define OR_R8_FROM_PTR_R8 or r8, qword ptr [r8]
#define OR_R8_FROM_PTR_R9 or r8, qword ptr [r9]
#define OR_R8_FROM_PTR_R10 or r8, qword ptr [r10]
#define OR_R8_FROM_PTR_R11 or r8, qword ptr [r11]
#define OR_R8_FROM_PTR_R12 or r8, qword ptr [r12]
#define OR_R8_FROM_PTR_R13 or r8, qword ptr [r13]
#define OR_R8_FROM_PTR_R14 or r8, qword ptr [r14]
#define OR_R8_FROM_PTR_R15 or r8, qword ptr [r15]
#define OR_R8_FROM_PTR_EAX or r8, qword ptr [eax]
#define OR_R8_FROM_PTR_EBX or r8, qword ptr [ebx]
#define OR_R8_FROM_PTR_ECX or r8, qword ptr [ecx]
#define OR_R8_FROM_PTR_EDX or r8, qword ptr [edx]
#define OR_R8_FROM_PTR_EDI or r8, qword ptr [edi]
#define OR_R8_FROM_PTR_ESI or r8, qword ptr [esi]
#define OR_R8_FROM_PTR_EBP or r8, qword ptr [ebp]
#define OR_R8_FROM_PTR_ESP or r8, qword ptr [esp]

#define OR_R9_FROM_PTR_RAX or r9, qword ptr [rax]
#define OR_R9_FROM_PTR_RBX or r9, qword ptr [rbx]
#define OR_R9_FROM_PTR_RCX or r9, qword ptr [rcx]
#define OR_R9_FROM_PTR_RDX or r9, qword ptr [rdx]
#define OR_R9_FROM_PTR_RDI or r9, qword ptr [rdi]
#define OR_R9_FROM_PTR_RSI or r9, qword ptr [rsi]
#define OR_R9_FROM_PTR_RBP or r9, qword ptr [rbp]
#define OR_R9_FROM_PTR_RSP or r9, qword ptr [rsp]
#define OR_R9_FROM_PTR_R8 or r9, qword ptr [r8]
#define OR_R9_FROM_PTR_R9 or r9, qword ptr [r9]
#define OR_R9_FROM_PTR_R10 or r9, qword ptr [r10]
#define OR_R9_FROM_PTR_R11 or r9, qword ptr [r11]
#define OR_R9_FROM_PTR_R12 or r9, qword ptr [r12]
#define OR_R9_FROM_PTR_R13 or r9, qword ptr [r13]
#define OR_R9_FROM_PTR_R14 or r9, qword ptr [r14]
#define OR_R9_FROM_PTR_R15 or r9, qword ptr [r15]
#define OR_R9_FROM_PTR_EAX or r9, qword ptr [eax]
#define OR_R9_FROM_PTR_EBX or r9, qword ptr [ebx]
#define OR_R9_FROM_PTR_ECX or r9, qword ptr [ecx]
#define OR_R9_FROM_PTR_EDX or r9, qword ptr [edx]
#define OR_R9_FROM_PTR_EDI or r9, qword ptr [edi]
#define OR_R9_FROM_PTR_ESI or r9, qword ptr [esi]
#define OR_R9_FROM_PTR_EBP or r9, qword ptr [ebp]
#define OR_R9_FROM_PTR_ESP or r9, qword ptr [esp]

#define OR_R10_FROM_PTR_RAX or r10, qword ptr [rax]
#define OR_R10_FROM_PTR_RBX or r10, qword ptr [rbx]
#define OR_R10_FROM_PTR_RCX or r10, qword ptr [rcx]
#define OR_R10_FROM_PTR_RDX or r10, qword ptr [rdx]
#define OR_R10_FROM_PTR_RDI or r10, qword ptr [rdi]
#define OR_R10_FROM_PTR_RSI or r10, qword ptr [rsi]
#define OR_R10_FROM_PTR_RBP or r10, qword ptr [rbp]
#define OR_R10_FROM_PTR_RSP or r10, qword ptr [rsp]
#define OR_R10_FROM_PTR_R8 or r10, qword ptr [r8]
#define OR_R10_FROM_PTR_R9 or r10, qword ptr [r9]
#define OR_R10_FROM_PTR_R10 or r10, qword ptr [r10]
#define OR_R10_FROM_PTR_R11 or r10, qword ptr [r11]
#define OR_R10_FROM_PTR_R12 or r10, qword ptr [r12]
#define OR_R10_FROM_PTR_R13 or r10, qword ptr [r13]
#define OR_R10_FROM_PTR_R14 or r10, qword ptr [r14]
#define OR_R10_FROM_PTR_R15 or r10, qword ptr [r15]
#define OR_R10_FROM_PTR_EAX or r10, qword ptr [eax]
#define OR_R10_FROM_PTR_EBX or r10, qword ptr [ebx]
#define OR_R10_FROM_PTR_ECX or r10, qword ptr [ecx]
#define OR_R10_FROM_PTR_EDX or r10, qword ptr [edx]
#define OR_R10_FROM_PTR_EDI or r10, qword ptr [edi]
#define OR_R10_FROM_PTR_ESI or r10, qword ptr [esi]
#define OR_R10_FROM_PTR_EBP or r10, qword ptr [ebp]
#define OR_R10_FROM_PTR_ESP or r10, qword ptr [esp]

#define OR_R11_FROM_PTR_RAX or r11, qword ptr [rax]
#define OR_R11_FROM_PTR_RBX or r11, qword ptr [rbx]
#define OR_R11_FROM_PTR_RCX or r11, qword ptr [rcx]
#define OR_R11_FROM_PTR_RDX or r11, qword ptr [rdx]
#define OR_R11_FROM_PTR_RDI or r11, qword ptr [rdi]
#define OR_R11_FROM_PTR_RSI or r11, qword ptr [rsi]
#define OR_R11_FROM_PTR_RBP or r11, qword ptr [rbp]
#define OR_R11_FROM_PTR_RSP or r11, qword ptr [rsp]
#define OR_R11_FROM_PTR_R8 or r11, qword ptr [r8]
#define OR_R11_FROM_PTR_R9 or r11, qword ptr [r9]
#define OR_R11_FROM_PTR_R10 or r11, qword ptr [r10]
#define OR_R11_FROM_PTR_R11 or r11, qword ptr [r11]
#define OR_R11_FROM_PTR_R12 or r11, qword ptr [r12]
#define OR_R11_FROM_PTR_R13 or r11, qword ptr [r13]
#define OR_R11_FROM_PTR_R14 or r11, qword ptr [r14]
#define OR_R11_FROM_PTR_R15 or r11, qword ptr [r15]
#define OR_R11_FROM_PTR_EAX or r11, qword ptr [eax]
#define OR_R11_FROM_PTR_EBX or r11, qword ptr [ebx]
#define OR_R11_FROM_PTR_ECX or r11, qword ptr [ecx]
#define OR_R11_FROM_PTR_EDX or r11, qword ptr [edx]
#define OR_R11_FROM_PTR_EDI or r11, qword ptr [edi]
#define OR_R11_FROM_PTR_ESI or r11, qword ptr [esi]
#define OR_R11_FROM_PTR_EBP or r11, qword ptr [ebp]
#define OR_R11_FROM_PTR_ESP or r11, qword ptr [esp]

#define OR_R12_FROM_PTR_RAX or r12, qword ptr [rax]
#define OR_R12_FROM_PTR_RBX or r12, qword ptr [rbx]
#define OR_R12_FROM_PTR_RCX or r12, qword ptr [rcx]
#define OR_R12_FROM_PTR_RDX or r12, qword ptr [rdx]
#define OR_R12_FROM_PTR_RDI or r12, qword ptr [rdi]
#define OR_R12_FROM_PTR_RSI or r12, qword ptr [rsi]
#define OR_R12_FROM_PTR_RBP or r12, qword ptr [rbp]
#define OR_R12_FROM_PTR_RSP or r12, qword ptr [rsp]
#define OR_R12_FROM_PTR_R8 or r12, qword ptr [r8]
#define OR_R12_FROM_PTR_R9 or r12, qword ptr [r9]
#define OR_R12_FROM_PTR_R10 or r12, qword ptr [r10]
#define OR_R12_FROM_PTR_R11 or r12, qword ptr [r11]
#define OR_R12_FROM_PTR_R12 or r12, qword ptr [r12]
#define OR_R12_FROM_PTR_R13 or r12, qword ptr [r13]
#define OR_R12_FROM_PTR_R14 or r12, qword ptr [r14]
#define OR_R12_FROM_PTR_R15 or r12, qword ptr [r15]
#define OR_R12_FROM_PTR_EAX or r12, qword ptr [eax]
#define OR_R12_FROM_PTR_EBX or r12, qword ptr [ebx]
#define OR_R12_FROM_PTR_ECX or r12, qword ptr [ecx]
#define OR_R12_FROM_PTR_EDX or r12, qword ptr [edx]
#define OR_R12_FROM_PTR_EDI or r12, qword ptr [edi]
#define OR_R12_FROM_PTR_ESI or r12, qword ptr [esi]
#define OR_R12_FROM_PTR_EBP or r12, qword ptr [ebp]
#define OR_R12_FROM_PTR_ESP or r12, qword ptr [esp]

#define OR_R13_FROM_PTR_RAX or r13, qword ptr [rax]
#define OR_R13_FROM_PTR_RBX or r13, qword ptr [rbx]
#define OR_R13_FROM_PTR_RCX or r13, qword ptr [rcx]
#define OR_R13_FROM_PTR_RDX or r13, qword ptr [rdx]
#define OR_R13_FROM_PTR_RDI or r13, qword ptr [rdi]
#define OR_R13_FROM_PTR_RSI or r13, qword ptr [rsi]
#define OR_R13_FROM_PTR_RBP or r13, qword ptr [rbp]
#define OR_R13_FROM_PTR_RSP or r13, qword ptr [rsp]
#define OR_R13_FROM_PTR_R8 or r13, qword ptr [r8]
#define OR_R13_FROM_PTR_R9 or r13, qword ptr [r9]
#define OR_R13_FROM_PTR_R10 or r13, qword ptr [r10]
#define OR_R13_FROM_PTR_R11 or r13, qword ptr [r11]
#define OR_R13_FROM_PTR_R12 or r13, qword ptr [r12]
#define OR_R13_FROM_PTR_R13 or r13, qword ptr [r13]
#define OR_R13_FROM_PTR_R14 or r13, qword ptr [r14]
#define OR_R13_FROM_PTR_R15 or r13, qword ptr [r15]
#define OR_R13_FROM_PTR_EAX or r13, qword ptr [eax]
#define OR_R13_FROM_PTR_EBX or r13, qword ptr [ebx]
#define OR_R13_FROM_PTR_ECX or r13, qword ptr [ecx]
#define OR_R13_FROM_PTR_EDX or r13, qword ptr [edx]
#define OR_R13_FROM_PTR_EDI or r13, qword ptr [edi]
#define OR_R13_FROM_PTR_ESI or r13, qword ptr [esi]
#define OR_R13_FROM_PTR_EBP or r13, qword ptr [ebp]
#define OR_R13_FROM_PTR_ESP or r13, qword ptr [esp]

#define OR_R14_FROM_PTR_RAX or r14, qword ptr [rax]
#define OR_R14_FROM_PTR_RBX or r14, qword ptr [rbx]
#define OR_R14_FROM_PTR_RCX or r14, qword ptr [rcx]
#define OR_R14_FROM_PTR_RDX or r14, qword ptr [rdx]
#define OR_R14_FROM_PTR_RDI or r14, qword ptr [rdi]
#define OR_R14_FROM_PTR_RSI or r14, qword ptr [rsi]
#define OR_R14_FROM_PTR_RBP or r14, qword ptr [rbp]
#define OR_R14_FROM_PTR_RSP or r14, qword ptr [rsp]
#define OR_R14_FROM_PTR_R8 or r14, qword ptr [r8]
#define OR_R14_FROM_PTR_R9 or r14, qword ptr [r9]
#define OR_R14_FROM_PTR_R10 or r14, qword ptr [r10]
#define OR_R14_FROM_PTR_R11 or r14, qword ptr [r11]
#define OR_R14_FROM_PTR_R12 or r14, qword ptr [r12]
#define OR_R14_FROM_PTR_R13 or r14, qword ptr [r13]
#define OR_R14_FROM_PTR_R14 or r14, qword ptr [r14]
#define OR_R14_FROM_PTR_R15 or r14, qword ptr [r15]
#define OR_R14_FROM_PTR_EAX or r14, qword ptr [eax]
#define OR_R14_FROM_PTR_EBX or r14, qword ptr [ebx]
#define OR_R14_FROM_PTR_ECX or r14, qword ptr [ecx]
#define OR_R14_FROM_PTR_EDX or r14, qword ptr [edx]
#define OR_R14_FROM_PTR_EDI or r14, qword ptr [edi]
#define OR_R14_FROM_PTR_ESI or r14, qword ptr [esi]
#define OR_R14_FROM_PTR_EBP or r14, qword ptr [ebp]
#define OR_R14_FROM_PTR_ESP or r14, qword ptr [esp]

#define OR_R15_FROM_PTR_RAX or r15, qword ptr [rax]
#define OR_R15_FROM_PTR_RBX or r15, qword ptr [rbx]
#define OR_R15_FROM_PTR_RCX or r15, qword ptr [rcx]
#define OR_R15_FROM_PTR_RDX or r15, qword ptr [rdx]
#define OR_R15_FROM_PTR_RDI or r15, qword ptr [rdi]
#define OR_R15_FROM_PTR_RSI or r15, qword ptr [rsi]
#define OR_R15_FROM_PTR_RBP or r15, qword ptr [rbp]
#define OR_R15_FROM_PTR_RSP or r15, qword ptr [rsp]
#define OR_R15_FROM_PTR_R8 or r15, qword ptr [r8]
#define OR_R15_FROM_PTR_R9 or r15, qword ptr [r9]
#define OR_R15_FROM_PTR_R10 or r15, qword ptr [r10]
#define OR_R15_FROM_PTR_R11 or r15, qword ptr [r11]
#define OR_R15_FROM_PTR_R12 or r15, qword ptr [r12]
#define OR_R15_FROM_PTR_R13 or r15, qword ptr [r13]
#define OR_R15_FROM_PTR_R14 or r15, qword ptr [r14]
#define OR_R15_FROM_PTR_R15 or r15, qword ptr [r15]
#define OR_R15_FROM_PTR_EAX or r15, qword ptr [eax]
#define OR_R15_FROM_PTR_EBX or r15, qword ptr [ebx]
#define OR_R15_FROM_PTR_ECX or r15, qword ptr [ecx]
#define OR_R15_FROM_PTR_EDX or r15, qword ptr [edx]
#define OR_R15_FROM_PTR_EDI or r15, qword ptr [edi]
#define OR_R15_FROM_PTR_ESI or r15, qword ptr [esi]
#define OR_R15_FROM_PTR_EBP or r15, qword ptr [ebp]
#define OR_R15_FROM_PTR_ESP or r15, qword ptr [esp]

#define OR_RAX_TO_PTR_RAX or qword ptr [rax], rax
#define OR_RAX_TO_PTR_RBX or qword ptr [rbx], rax
#define OR_RAX_TO_PTR_RCX or qword ptr [rcx], rax
#define OR_RAX_TO_PTR_RDX or qword ptr [rdx], rax
#define OR_RAX_TO_PTR_RDI or qword ptr [rdi], rax
#define OR_RAX_TO_PTR_RSI or qword ptr [rsi], rax
#define OR_RAX_TO_PTR_RBP or qword ptr [rbp], rax
#define OR_RAX_TO_PTR_RSP or qword ptr [rsp], rax
#define OR_RAX_TO_PTR_R8 or qword ptr [r8], rax
#define OR_RAX_TO_PTR_R9 or qword ptr [r9], rax
#define OR_RAX_TO_PTR_R10 or qword ptr [r10], rax
#define OR_RAX_TO_PTR_R11 or qword ptr [r11], rax
#define OR_RAX_TO_PTR_R12 or qword ptr [r12], rax
#define OR_RAX_TO_PTR_R13 or qword ptr [r13], rax
#define OR_RAX_TO_PTR_R14 or qword ptr [r14], rax
#define OR_RAX_TO_PTR_R15 or qword ptr [r15], rax
#define OR_RAX_TO_PTR_EAX or qword ptr [eax], rax
#define OR_RAX_TO_PTR_EBX or qword ptr [ebx], rax
#define OR_RAX_TO_PTR_ECX or qword ptr [ecx], rax
#define OR_RAX_TO_PTR_EDX or qword ptr [edx], rax
#define OR_RAX_TO_PTR_EDI or qword ptr [edi], rax
#define OR_RAX_TO_PTR_ESI or qword ptr [esi], rax
#define OR_RAX_TO_PTR_EBP or qword ptr [ebp], rax
#define OR_RAX_TO_PTR_ESP or qword ptr [esp], rax

#define OR_RBX_TO_PTR_RAX or qword ptr [rax], rbx
#define OR_RBX_TO_PTR_RBX or qword ptr [rbx], rbx
#define OR_RBX_TO_PTR_RCX or qword ptr [rcx], rbx
#define OR_RBX_TO_PTR_RDX or qword ptr [rdx], rbx
#define OR_RBX_TO_PTR_RDI or qword ptr [rdi], rbx
#define OR_RBX_TO_PTR_RSI or qword ptr [rsi], rbx
#define OR_RBX_TO_PTR_RBP or qword ptr [rbp], rbx
#define OR_RBX_TO_PTR_RSP or qword ptr [rsp], rbx
#define OR_RBX_TO_PTR_R8 or qword ptr [r8], rbx
#define OR_RBX_TO_PTR_R9 or qword ptr [r9], rbx
#define OR_RBX_TO_PTR_R10 or qword ptr [r10], rbx
#define OR_RBX_TO_PTR_R11 or qword ptr [r11], rbx
#define OR_RBX_TO_PTR_R12 or qword ptr [r12], rbx
#define OR_RBX_TO_PTR_R13 or qword ptr [r13], rbx
#define OR_RBX_TO_PTR_R14 or qword ptr [r14], rbx
#define OR_RBX_TO_PTR_R15 or qword ptr [r15], rbx
#define OR_RBX_TO_PTR_EAX or qword ptr [eax], rbx
#define OR_RBX_TO_PTR_EBX or qword ptr [ebx], rbx
#define OR_RBX_TO_PTR_ECX or qword ptr [ecx], rbx
#define OR_RBX_TO_PTR_EDX or qword ptr [edx], rbx
#define OR_RBX_TO_PTR_EDI or qword ptr [edi], rbx
#define OR_RBX_TO_PTR_ESI or qword ptr [esi], rbx
#define OR_RBX_TO_PTR_EBP or qword ptr [ebp], rbx
#define OR_RBX_TO_PTR_ESP or qword ptr [esp], rbx

#define OR_RCX_TO_PTR_RAX or qword ptr [rax], rcx
#define OR_RCX_TO_PTR_RBX or qword ptr [rbx], rcx
#define OR_RCX_TO_PTR_RCX or qword ptr [rcx], rcx
#define OR_RCX_TO_PTR_RDX or qword ptr [rdx], rcx
#define OR_RCX_TO_PTR_RDI or qword ptr [rdi], rcx
#define OR_RCX_TO_PTR_RSI or qword ptr [rsi], rcx
#define OR_RCX_TO_PTR_RBP or qword ptr [rbp], rcx
#define OR_RCX_TO_PTR_RSP or qword ptr [rsp], rcx
#define OR_RCX_TO_PTR_R8 or qword ptr [r8], rcx
#define OR_RCX_TO_PTR_R9 or qword ptr [r9], rcx
#define OR_RCX_TO_PTR_R10 or qword ptr [r10], rcx
#define OR_RCX_TO_PTR_R11 or qword ptr [r11], rcx
#define OR_RCX_TO_PTR_R12 or qword ptr [r12], rcx
#define OR_RCX_TO_PTR_R13 or qword ptr [r13], rcx
#define OR_RCX_TO_PTR_R14 or qword ptr [r14], rcx
#define OR_RCX_TO_PTR_R15 or qword ptr [r15], rcx
#define OR_RCX_TO_PTR_EAX or qword ptr [eax], rcx
#define OR_RCX_TO_PTR_EBX or qword ptr [ebx], rcx
#define OR_RCX_TO_PTR_ECX or qword ptr [ecx], rcx
#define OR_RCX_TO_PTR_EDX or qword ptr [edx], rcx
#define OR_RCX_TO_PTR_EDI or qword ptr [edi], rcx
#define OR_RCX_TO_PTR_ESI or qword ptr [esi], rcx
#define OR_RCX_TO_PTR_EBP or qword ptr [ebp], rcx
#define OR_RCX_TO_PTR_ESP or qword ptr [esp], rcx

#define OR_RDX_TO_PTR_RAX or qword ptr [rax], rdx
#define OR_RDX_TO_PTR_RBX or qword ptr [rbx], rdx
#define OR_RDX_TO_PTR_RCX or qword ptr [rcx], rdx
#define OR_RDX_TO_PTR_RDX or qword ptr [rdx], rdx
#define OR_RDX_TO_PTR_RDI or qword ptr [rdi], rdx
#define OR_RDX_TO_PTR_RSI or qword ptr [rsi], rdx
#define OR_RDX_TO_PTR_RBP or qword ptr [rbp], rdx
#define OR_RDX_TO_PTR_RSP or qword ptr [rsp], rdx
#define OR_RDX_TO_PTR_R8 or qword ptr [r8], rdx
#define OR_RDX_TO_PTR_R9 or qword ptr [r9], rdx
#define OR_RDX_TO_PTR_R10 or qword ptr [r10], rdx
#define OR_RDX_TO_PTR_R11 or qword ptr [r11], rdx
#define OR_RDX_TO_PTR_R12 or qword ptr [r12], rdx
#define OR_RDX_TO_PTR_R13 or qword ptr [r13], rdx
#define OR_RDX_TO_PTR_R14 or qword ptr [r14], rdx
#define OR_RDX_TO_PTR_R15 or qword ptr [r15], rdx
#define OR_RDX_TO_PTR_EAX or qword ptr [eax], rdx
#define OR_RDX_TO_PTR_EBX or qword ptr [ebx], rdx
#define OR_RDX_TO_PTR_ECX or qword ptr [ecx], rdx
#define OR_RDX_TO_PTR_EDX or qword ptr [edx], rdx
#define OR_RDX_TO_PTR_EDI or qword ptr [edi], rdx
#define OR_RDX_TO_PTR_ESI or qword ptr [esi], rdx
#define OR_RDX_TO_PTR_EBP or qword ptr [ebp], rdx
#define OR_RDX_TO_PTR_ESP or qword ptr [esp], rdx

#define OR_RDI_TO_PTR_RAX or qword ptr [rax], rdi
#define OR_RDI_TO_PTR_RBX or qword ptr [rbx], rdi
#define OR_RDI_TO_PTR_RCX or qword ptr [rcx], rdi
#define OR_RDI_TO_PTR_RDX or qword ptr [rdx], rdi
#define OR_RDI_TO_PTR_RDI or qword ptr [rdi], rdi
#define OR_RDI_TO_PTR_RSI or qword ptr [rsi], rdi
#define OR_RDI_TO_PTR_RBP or qword ptr [rbp], rdi
#define OR_RDI_TO_PTR_RSP or qword ptr [rsp], rdi
#define OR_RDI_TO_PTR_R8 or qword ptr [r8], rdi
#define OR_RDI_TO_PTR_R9 or qword ptr [r9], rdi
#define OR_RDI_TO_PTR_R10 or qword ptr [r10], rdi
#define OR_RDI_TO_PTR_R11 or qword ptr [r11], rdi
#define OR_RDI_TO_PTR_R12 or qword ptr [r12], rdi
#define OR_RDI_TO_PTR_R13 or qword ptr [r13], rdi
#define OR_RDI_TO_PTR_R14 or qword ptr [r14], rdi
#define OR_RDI_TO_PTR_R15 or qword ptr [r15], rdi
#define OR_RDI_TO_PTR_EAX or qword ptr [eax], rdi
#define OR_RDI_TO_PTR_EBX or qword ptr [ebx], rdi
#define OR_RDI_TO_PTR_ECX or qword ptr [ecx], rdi
#define OR_RDI_TO_PTR_EDX or qword ptr [edx], rdi
#define OR_RDI_TO_PTR_EDI or qword ptr [edi], rdi
#define OR_RDI_TO_PTR_ESI or qword ptr [esi], rdi
#define OR_RDI_TO_PTR_EBP or qword ptr [ebp], rdi
#define OR_RDI_TO_PTR_ESP or qword ptr [esp], rdi

#define OR_RSI_TO_PTR_RAX or qword ptr [rax], rsi
#define OR_RSI_TO_PTR_RBX or qword ptr [rbx], rsi
#define OR_RSI_TO_PTR_RCX or qword ptr [rcx], rsi
#define OR_RSI_TO_PTR_RDX or qword ptr [rdx], rsi
#define OR_RSI_TO_PTR_RDI or qword ptr [rdi], rsi
#define OR_RSI_TO_PTR_RSI or qword ptr [rsi], rsi
#define OR_RSI_TO_PTR_RBP or qword ptr [rbp], rsi
#define OR_RSI_TO_PTR_RSP or qword ptr [rsp], rsi
#define OR_RSI_TO_PTR_R8 or qword ptr [r8], rsi
#define OR_RSI_TO_PTR_R9 or qword ptr [r9], rsi
#define OR_RSI_TO_PTR_R10 or qword ptr [r10], rsi
#define OR_RSI_TO_PTR_R11 or qword ptr [r11], rsi
#define OR_RSI_TO_PTR_R12 or qword ptr [r12], rsi
#define OR_RSI_TO_PTR_R13 or qword ptr [r13], rsi
#define OR_RSI_TO_PTR_R14 or qword ptr [r14], rsi
#define OR_RSI_TO_PTR_R15 or qword ptr [r15], rsi
#define OR_RSI_TO_PTR_EAX or qword ptr [eax], rsi
#define OR_RSI_TO_PTR_EBX or qword ptr [ebx], rsi
#define OR_RSI_TO_PTR_ECX or qword ptr [ecx], rsi
#define OR_RSI_TO_PTR_EDX or qword ptr [edx], rsi
#define OR_RSI_TO_PTR_EDI or qword ptr [edi], rsi
#define OR_RSI_TO_PTR_ESI or qword ptr [esi], rsi
#define OR_RSI_TO_PTR_EBP or qword ptr [ebp], rsi
#define OR_RSI_TO_PTR_ESP or qword ptr [esp], rsi

#define OR_RBP_TO_PTR_RAX or qword ptr [rax], rbp
#define OR_RBP_TO_PTR_RBX or qword ptr [rbx], rbp
#define OR_RBP_TO_PTR_RCX or qword ptr [rcx], rbp
#define OR_RBP_TO_PTR_RDX or qword ptr [rdx], rbp
#define OR_RBP_TO_PTR_RDI or qword ptr [rdi], rbp
#define OR_RBP_TO_PTR_RSI or qword ptr [rsi], rbp
#define OR_RBP_TO_PTR_RBP or qword ptr [rbp], rbp
#define OR_RBP_TO_PTR_RSP or qword ptr [rsp], rbp
#define OR_RBP_TO_PTR_R8 or qword ptr [r8], rbp
#define OR_RBP_TO_PTR_R9 or qword ptr [r9], rbp
#define OR_RBP_TO_PTR_R10 or qword ptr [r10], rbp
#define OR_RBP_TO_PTR_R11 or qword ptr [r11], rbp
#define OR_RBP_TO_PTR_R12 or qword ptr [r12], rbp
#define OR_RBP_TO_PTR_R13 or qword ptr [r13], rbp
#define OR_RBP_TO_PTR_R14 or qword ptr [r14], rbp
#define OR_RBP_TO_PTR_R15 or qword ptr [r15], rbp
#define OR_RBP_TO_PTR_EAX or qword ptr [eax], rbp
#define OR_RBP_TO_PTR_EBX or qword ptr [ebx], rbp
#define OR_RBP_TO_PTR_ECX or qword ptr [ecx], rbp
#define OR_RBP_TO_PTR_EDX or qword ptr [edx], rbp
#define OR_RBP_TO_PTR_EDI or qword ptr [edi], rbp
#define OR_RBP_TO_PTR_ESI or qword ptr [esi], rbp
#define OR_RBP_TO_PTR_EBP or qword ptr [ebp], rbp
#define OR_RBP_TO_PTR_ESP or qword ptr [esp], rbp

#define OR_RSP_TO_PTR_RAX or qword ptr [rax], rsp
#define OR_RSP_TO_PTR_RBX or qword ptr [rbx], rsp
#define OR_RSP_TO_PTR_RCX or qword ptr [rcx], rsp
#define OR_RSP_TO_PTR_RDX or qword ptr [rdx], rsp
#define OR_RSP_TO_PTR_RDI or qword ptr [rdi], rsp
#define OR_RSP_TO_PTR_RSI or qword ptr [rsi], rsp
#define OR_RSP_TO_PTR_RBP or qword ptr [rbp], rsp
#define OR_RSP_TO_PTR_RSP or qword ptr [rsp], rsp
#define OR_RSP_TO_PTR_R8 or qword ptr [r8], rsp
#define OR_RSP_TO_PTR_R9 or qword ptr [r9], rsp
#define OR_RSP_TO_PTR_R10 or qword ptr [r10], rsp
#define OR_RSP_TO_PTR_R11 or qword ptr [r11], rsp
#define OR_RSP_TO_PTR_R12 or qword ptr [r12], rsp
#define OR_RSP_TO_PTR_R13 or qword ptr [r13], rsp
#define OR_RSP_TO_PTR_R14 or qword ptr [r14], rsp
#define OR_RSP_TO_PTR_R15 or qword ptr [r15], rsp
#define OR_RSP_TO_PTR_EAX or qword ptr [eax], rsp
#define OR_RSP_TO_PTR_EBX or qword ptr [ebx], rsp
#define OR_RSP_TO_PTR_ECX or qword ptr [ecx], rsp
#define OR_RSP_TO_PTR_EDX or qword ptr [edx], rsp
#define OR_RSP_TO_PTR_EDI or qword ptr [edi], rsp
#define OR_RSP_TO_PTR_ESI or qword ptr [esi], rsp
#define OR_RSP_TO_PTR_EBP or qword ptr [ebp], rsp
#define OR_RSP_TO_PTR_ESP or qword ptr [esp], rsp

#define OR_R8_TO_PTR_RAX or qword ptr [rax], r8
#define OR_R8_TO_PTR_RBX or qword ptr [rbx], r8
#define OR_R8_TO_PTR_RCX or qword ptr [rcx], r8
#define OR_R8_TO_PTR_RDX or qword ptr [rdx], r8
#define OR_R8_TO_PTR_RDI or qword ptr [rdi], r8
#define OR_R8_TO_PTR_RSI or qword ptr [rsi], r8
#define OR_R8_TO_PTR_RBP or qword ptr [rbp], r8
#define OR_R8_TO_PTR_RSP or qword ptr [rsp], r8
#define OR_R8_TO_PTR_R8 or qword ptr [r8], r8
#define OR_R8_TO_PTR_R9 or qword ptr [r9], r8
#define OR_R8_TO_PTR_R10 or qword ptr [r10], r8
#define OR_R8_TO_PTR_R11 or qword ptr [r11], r8
#define OR_R8_TO_PTR_R12 or qword ptr [r12], r8
#define OR_R8_TO_PTR_R13 or qword ptr [r13], r8
#define OR_R8_TO_PTR_R14 or qword ptr [r14], r8
#define OR_R8_TO_PTR_R15 or qword ptr [r15], r8
#define OR_R8_TO_PTR_EAX or qword ptr [eax], r8
#define OR_R8_TO_PTR_EBX or qword ptr [ebx], r8
#define OR_R8_TO_PTR_ECX or qword ptr [ecx], r8
#define OR_R8_TO_PTR_EDX or qword ptr [edx], r8
#define OR_R8_TO_PTR_EDI or qword ptr [edi], r8
#define OR_R8_TO_PTR_ESI or qword ptr [esi], r8
#define OR_R8_TO_PTR_EBP or qword ptr [ebp], r8
#define OR_R8_TO_PTR_ESP or qword ptr [esp], r8

#define OR_R9_TO_PTR_RAX or qword ptr [rax], r9
#define OR_R9_TO_PTR_RBX or qword ptr [rbx], r9
#define OR_R9_TO_PTR_RCX or qword ptr [rcx], r9
#define OR_R9_TO_PTR_RDX or qword ptr [rdx], r9
#define OR_R9_TO_PTR_RDI or qword ptr [rdi], r9
#define OR_R9_TO_PTR_RSI or qword ptr [rsi], r9
#define OR_R9_TO_PTR_RBP or qword ptr [rbp], r9
#define OR_R9_TO_PTR_RSP or qword ptr [rsp], r9
#define OR_R9_TO_PTR_R8 or qword ptr [r8], r9
#define OR_R9_TO_PTR_R9 or qword ptr [r9], r9
#define OR_R9_TO_PTR_R10 or qword ptr [r10], r9
#define OR_R9_TO_PTR_R11 or qword ptr [r11], r9
#define OR_R9_TO_PTR_R12 or qword ptr [r12], r9
#define OR_R9_TO_PTR_R13 or qword ptr [r13], r9
#define OR_R9_TO_PTR_R14 or qword ptr [r14], r9
#define OR_R9_TO_PTR_R15 or qword ptr [r15], r9
#define OR_R9_TO_PTR_EAX or qword ptr [eax], r9
#define OR_R9_TO_PTR_EBX or qword ptr [ebx], r9
#define OR_R9_TO_PTR_ECX or qword ptr [ecx], r9
#define OR_R9_TO_PTR_EDX or qword ptr [edx], r9
#define OR_R9_TO_PTR_EDI or qword ptr [edi], r9
#define OR_R9_TO_PTR_ESI or qword ptr [esi], r9
#define OR_R9_TO_PTR_EBP or qword ptr [ebp], r9
#define OR_R9_TO_PTR_ESP or qword ptr [esp], r9

#define OR_R10_TO_PTR_RAX or qword ptr [rax], r10
#define OR_R10_TO_PTR_RBX or qword ptr [rbx], r10
#define OR_R10_TO_PTR_RCX or qword ptr [rcx], r10
#define OR_R10_TO_PTR_RDX or qword ptr [rdx], r10
#define OR_R10_TO_PTR_RDI or qword ptr [rdi], r10
#define OR_R10_TO_PTR_RSI or qword ptr [rsi], r10
#define OR_R10_TO_PTR_RBP or qword ptr [rbp], r10
#define OR_R10_TO_PTR_RSP or qword ptr [rsp], r10
#define OR_R10_TO_PTR_R8 or qword ptr [r8], r10
#define OR_R10_TO_PTR_R9 or qword ptr [r9], r10
#define OR_R10_TO_PTR_R10 or qword ptr [r10], r10
#define OR_R10_TO_PTR_R11 or qword ptr [r11], r10
#define OR_R10_TO_PTR_R12 or qword ptr [r12], r10
#define OR_R10_TO_PTR_R13 or qword ptr [r13], r10
#define OR_R10_TO_PTR_R14 or qword ptr [r14], r10
#define OR_R10_TO_PTR_R15 or qword ptr [r15], r10
#define OR_R10_TO_PTR_EAX or qword ptr [eax], r10
#define OR_R10_TO_PTR_EBX or qword ptr [ebx], r10
#define OR_R10_TO_PTR_ECX or qword ptr [ecx], r10
#define OR_R10_TO_PTR_EDX or qword ptr [edx], r10
#define OR_R10_TO_PTR_EDI or qword ptr [edi], r10
#define OR_R10_TO_PTR_ESI or qword ptr [esi], r10
#define OR_R10_TO_PTR_EBP or qword ptr [ebp], r10
#define OR_R10_TO_PTR_ESP or qword ptr [esp], r10

#define OR_R11_TO_PTR_RAX or qword ptr [rax], r11
#define OR_R11_TO_PTR_RBX or qword ptr [rbx], r11
#define OR_R11_TO_PTR_RCX or qword ptr [rcx], r11
#define OR_R11_TO_PTR_RDX or qword ptr [rdx], r11
#define OR_R11_TO_PTR_RDI or qword ptr [rdi], r11
#define OR_R11_TO_PTR_RSI or qword ptr [rsi], r11
#define OR_R11_TO_PTR_RBP or qword ptr [rbp], r11
#define OR_R11_TO_PTR_RSP or qword ptr [rsp], r11
#define OR_R11_TO_PTR_R8 or qword ptr [r8], r11
#define OR_R11_TO_PTR_R9 or qword ptr [r9], r11
#define OR_R11_TO_PTR_R10 or qword ptr [r10], r11
#define OR_R11_TO_PTR_R11 or qword ptr [r11], r11
#define OR_R11_TO_PTR_R12 or qword ptr [r12], r11
#define OR_R11_TO_PTR_R13 or qword ptr [r13], r11
#define OR_R11_TO_PTR_R14 or qword ptr [r14], r11
#define OR_R11_TO_PTR_R15 or qword ptr [r15], r11
#define OR_R11_TO_PTR_EAX or qword ptr [eax], r11
#define OR_R11_TO_PTR_EBX or qword ptr [ebx], r11
#define OR_R11_TO_PTR_ECX or qword ptr [ecx], r11
#define OR_R11_TO_PTR_EDX or qword ptr [edx], r11
#define OR_R11_TO_PTR_EDI or qword ptr [edi], r11
#define OR_R11_TO_PTR_ESI or qword ptr [esi], r11
#define OR_R11_TO_PTR_EBP or qword ptr [ebp], r11
#define OR_R11_TO_PTR_ESP or qword ptr [esp], r11

#define OR_R12_TO_PTR_RAX or qword ptr [rax], r12
#define OR_R12_TO_PTR_RBX or qword ptr [rbx], r12
#define OR_R12_TO_PTR_RCX or qword ptr [rcx], r12
#define OR_R12_TO_PTR_RDX or qword ptr [rdx], r12
#define OR_R12_TO_PTR_RDI or qword ptr [rdi], r12
#define OR_R12_TO_PTR_RSI or qword ptr [rsi], r12
#define OR_R12_TO_PTR_RBP or qword ptr [rbp], r12
#define OR_R12_TO_PTR_RSP or qword ptr [rsp], r12
#define OR_R12_TO_PTR_R8 or qword ptr [r8], r12
#define OR_R12_TO_PTR_R9 or qword ptr [r9], r12
#define OR_R12_TO_PTR_R10 or qword ptr [r10], r12
#define OR_R12_TO_PTR_R11 or qword ptr [r11], r12
#define OR_R12_TO_PTR_R12 or qword ptr [r12], r12
#define OR_R12_TO_PTR_R13 or qword ptr [r13], r12
#define OR_R12_TO_PTR_R14 or qword ptr [r14], r12
#define OR_R12_TO_PTR_R15 or qword ptr [r15], r12
#define OR_R12_TO_PTR_EAX or qword ptr [eax], r12
#define OR_R12_TO_PTR_EBX or qword ptr [ebx], r12
#define OR_R12_TO_PTR_ECX or qword ptr [ecx], r12
#define OR_R12_TO_PTR_EDX or qword ptr [edx], r12
#define OR_R12_TO_PTR_EDI or qword ptr [edi], r12
#define OR_R12_TO_PTR_ESI or qword ptr [esi], r12
#define OR_R12_TO_PTR_EBP or qword ptr [ebp], r12
#define OR_R12_TO_PTR_ESP or qword ptr [esp], r12

#define OR_R13_TO_PTR_RAX or qword ptr [rax], r13
#define OR_R13_TO_PTR_RBX or qword ptr [rbx], r13
#define OR_R13_TO_PTR_RCX or qword ptr [rcx], r13
#define OR_R13_TO_PTR_RDX or qword ptr [rdx], r13
#define OR_R13_TO_PTR_RDI or qword ptr [rdi], r13
#define OR_R13_TO_PTR_RSI or qword ptr [rsi], r13
#define OR_R13_TO_PTR_RBP or qword ptr [rbp], r13
#define OR_R13_TO_PTR_RSP or qword ptr [rsp], r13
#define OR_R13_TO_PTR_R8 or qword ptr [r8], r13
#define OR_R13_TO_PTR_R9 or qword ptr [r9], r13
#define OR_R13_TO_PTR_R10 or qword ptr [r10], r13
#define OR_R13_TO_PTR_R11 or qword ptr [r11], r13
#define OR_R13_TO_PTR_R12 or qword ptr [r12], r13
#define OR_R13_TO_PTR_R13 or qword ptr [r13], r13
#define OR_R13_TO_PTR_R14 or qword ptr [r14], r13
#define OR_R13_TO_PTR_R15 or qword ptr [r15], r13
#define OR_R13_TO_PTR_EAX or qword ptr [eax], r13
#define OR_R13_TO_PTR_EBX or qword ptr [ebx], r13
#define OR_R13_TO_PTR_ECX or qword ptr [ecx], r13
#define OR_R13_TO_PTR_EDX or qword ptr [edx], r13
#define OR_R13_TO_PTR_EDI or qword ptr [edi], r13
#define OR_R13_TO_PTR_ESI or qword ptr [esi], r13
#define OR_R13_TO_PTR_EBP or qword ptr [ebp], r13
#define OR_R13_TO_PTR_ESP or qword ptr [esp], r13

#define OR_R14_TO_PTR_RAX or qword ptr [rax], r14
#define OR_R14_TO_PTR_RBX or qword ptr [rbx], r14
#define OR_R14_TO_PTR_RCX or qword ptr [rcx], r14
#define OR_R14_TO_PTR_RDX or qword ptr [rdx], r14
#define OR_R14_TO_PTR_RDI or qword ptr [rdi], r14
#define OR_R14_TO_PTR_RSI or qword ptr [rsi], r14
#define OR_R14_TO_PTR_RBP or qword ptr [rbp], r14
#define OR_R14_TO_PTR_RSP or qword ptr [rsp], r14
#define OR_R14_TO_PTR_R8 or qword ptr [r8], r14
#define OR_R14_TO_PTR_R9 or qword ptr [r9], r14
#define OR_R14_TO_PTR_R10 or qword ptr [r10], r14
#define OR_R14_TO_PTR_R11 or qword ptr [r11], r14
#define OR_R14_TO_PTR_R12 or qword ptr [r12], r14
#define OR_R14_TO_PTR_R13 or qword ptr [r13], r14
#define OR_R14_TO_PTR_R14 or qword ptr [r14], r14
#define OR_R14_TO_PTR_R15 or qword ptr [r15], r14
#define OR_R14_TO_PTR_EAX or qword ptr [eax], r14
#define OR_R14_TO_PTR_EBX or qword ptr [ebx], r14
#define OR_R14_TO_PTR_ECX or qword ptr [ecx], r14
#define OR_R14_TO_PTR_EDX or qword ptr [edx], r14
#define OR_R14_TO_PTR_EDI or qword ptr [edi], r14
#define OR_R14_TO_PTR_ESI or qword ptr [esi], r14
#define OR_R14_TO_PTR_EBP or qword ptr [ebp], r14
#define OR_R14_TO_PTR_ESP or qword ptr [esp], r14

#define OR_R15_TO_PTR_RAX or qword ptr [rax], r15
#define OR_R15_TO_PTR_RBX or qword ptr [rbx], r15
#define OR_R15_TO_PTR_RCX or qword ptr [rcx], r15
#define OR_R15_TO_PTR_RDX or qword ptr [rdx], r15
#define OR_R15_TO_PTR_RDI or qword ptr [rdi], r15
#define OR_R15_TO_PTR_RSI or qword ptr [rsi], r15
#define OR_R15_TO_PTR_RBP or qword ptr [rbp], r15
#define OR_R15_TO_PTR_RSP or qword ptr [rsp], r15
#define OR_R15_TO_PTR_R8 or qword ptr [r8], r15
#define OR_R15_TO_PTR_R9 or qword ptr [r9], r15
#define OR_R15_TO_PTR_R10 or qword ptr [r10], r15
#define OR_R15_TO_PTR_R11 or qword ptr [r11], r15
#define OR_R15_TO_PTR_R12 or qword ptr [r12], r15
#define OR_R15_TO_PTR_R13 or qword ptr [r13], r15
#define OR_R15_TO_PTR_R14 or qword ptr [r14], r15
#define OR_R15_TO_PTR_R15 or qword ptr [r15], r15
#define OR_R15_TO_PTR_EAX or qword ptr [eax], r15
#define OR_R15_TO_PTR_EBX or qword ptr [ebx], r15
#define OR_R15_TO_PTR_ECX or qword ptr [ecx], r15
#define OR_R15_TO_PTR_EDX or qword ptr [edx], r15
#define OR_R15_TO_PTR_EDI or qword ptr [edi], r15
#define OR_R15_TO_PTR_ESI or qword ptr [esi], r15
#define OR_R15_TO_PTR_EBP or qword ptr [ebp], r15
#define OR_R15_TO_PTR_ESP or qword ptr [esp], r15

#define OR_RAX_FROM_PTR_RAX_(VALUE) or rax, qword ptr [rax + VALUE]
#define OR_RAX_FROM_PTR_RBX_(VALUE) or rax, qword ptr [rbx + VALUE]
#define OR_RAX_FROM_PTR_RCX_(VALUE) or rax, qword ptr [rcx + VALUE]
#define OR_RAX_FROM_PTR_RDX_(VALUE) or rax, qword ptr [rdx + VALUE]
#define OR_RAX_FROM_PTR_RDI_(VALUE) or rax, qword ptr [rdi + VALUE]
#define OR_RAX_FROM_PTR_RSI_(VALUE) or rax, qword ptr [rsi + VALUE]
#define OR_RAX_FROM_PTR_RBP_(VALUE) or rax, qword ptr [rbp + VALUE]
#define OR_RAX_FROM_PTR_RSP_(VALUE) or rax, qword ptr [rsp + VALUE]
#define OR_RAX_FROM_PTR_R8_(VALUE) or rax, qword ptr [r8 + VALUE]
#define OR_RAX_FROM_PTR_R9_(VALUE) or rax, qword ptr [r9 + VALUE]
#define OR_RAX_FROM_PTR_R10_(VALUE) or rax, qword ptr [r10 + VALUE]
#define OR_RAX_FROM_PTR_R11_(VALUE) or rax, qword ptr [r11 + VALUE]
#define OR_RAX_FROM_PTR_R12_(VALUE) or rax, qword ptr [r12 + VALUE]
#define OR_RAX_FROM_PTR_R13_(VALUE) or rax, qword ptr [r13 + VALUE]
#define OR_RAX_FROM_PTR_R14_(VALUE) or rax, qword ptr [r14 + VALUE]
#define OR_RAX_FROM_PTR_R15_(VALUE) or rax, qword ptr [r15 + VALUE]
#define OR_RAX_FROM_PTR_EAX_(VALUE) or rax, qword ptr [eax + VALUE]
#define OR_RAX_FROM_PTR_EBX_(VALUE) or rax, qword ptr [ebx + VALUE]
#define OR_RAX_FROM_PTR_ECX_(VALUE) or rax, qword ptr [ecx + VALUE]
#define OR_RAX_FROM_PTR_EDX_(VALUE) or rax, qword ptr [edx + VALUE]
#define OR_RAX_FROM_PTR_EDI_(VALUE) or rax, qword ptr [edi + VALUE]
#define OR_RAX_FROM_PTR_ESI_(VALUE) or rax, qword ptr [esi + VALUE]
#define OR_RAX_FROM_PTR_EBP_(VALUE) or rax, qword ptr [ebp + VALUE]
#define OR_RAX_FROM_PTR_ESP_(VALUE) or rax, qword ptr [esp + VALUE]

#define OR_RBX_FROM_PTR_RAX_(VALUE) or rbx, qword ptr [rax + VALUE]
#define OR_RBX_FROM_PTR_RBX_(VALUE) or rbx, qword ptr [rbx + VALUE]
#define OR_RBX_FROM_PTR_RCX_(VALUE) or rbx, qword ptr [rcx + VALUE]
#define OR_RBX_FROM_PTR_RDX_(VALUE) or rbx, qword ptr [rdx + VALUE]
#define OR_RBX_FROM_PTR_RDI_(VALUE) or rbx, qword ptr [rdi + VALUE]
#define OR_RBX_FROM_PTR_RSI_(VALUE) or rbx, qword ptr [rsi + VALUE]
#define OR_RBX_FROM_PTR_RBP_(VALUE) or rbx, qword ptr [rbp + VALUE]
#define OR_RBX_FROM_PTR_RSP_(VALUE) or rbx, qword ptr [rsp + VALUE]
#define OR_RBX_FROM_PTR_R8_(VALUE) or rbx, qword ptr [r8 + VALUE]
#define OR_RBX_FROM_PTR_R9_(VALUE) or rbx, qword ptr [r9 + VALUE]
#define OR_RBX_FROM_PTR_R10_(VALUE) or rbx, qword ptr [r10 + VALUE]
#define OR_RBX_FROM_PTR_R11_(VALUE) or rbx, qword ptr [r11 + VALUE]
#define OR_RBX_FROM_PTR_R12_(VALUE) or rbx, qword ptr [r12 + VALUE]
#define OR_RBX_FROM_PTR_R13_(VALUE) or rbx, qword ptr [r13 + VALUE]
#define OR_RBX_FROM_PTR_R14_(VALUE) or rbx, qword ptr [r14 + VALUE]
#define OR_RBX_FROM_PTR_R15_(VALUE) or rbx, qword ptr [r15 + VALUE]
#define OR_RBX_FROM_PTR_EAX_(VALUE) or rbx, qword ptr [eax + VALUE]
#define OR_RBX_FROM_PTR_EBX_(VALUE) or rbx, qword ptr [ebx + VALUE]
#define OR_RBX_FROM_PTR_ECX_(VALUE) or rbx, qword ptr [ecx + VALUE]
#define OR_RBX_FROM_PTR_EDX_(VALUE) or rbx, qword ptr [edx + VALUE]
#define OR_RBX_FROM_PTR_EDI_(VALUE) or rbx, qword ptr [edi + VALUE]
#define OR_RBX_FROM_PTR_ESI_(VALUE) or rbx, qword ptr [esi + VALUE]
#define OR_RBX_FROM_PTR_EBP_(VALUE) or rbx, qword ptr [ebp + VALUE]
#define OR_RBX_FROM_PTR_ESP_(VALUE) or rbx, qword ptr [esp + VALUE]

#define OR_RCX_FROM_PTR_RAX_(VALUE) or rcx, qword ptr [rax + VALUE]
#define OR_RCX_FROM_PTR_RBX_(VALUE) or rcx, qword ptr [rbx + VALUE]
#define OR_RCX_FROM_PTR_RCX_(VALUE) or rcx, qword ptr [rcx + VALUE]
#define OR_RCX_FROM_PTR_RDX_(VALUE) or rcx, qword ptr [rdx + VALUE]
#define OR_RCX_FROM_PTR_RDI_(VALUE) or rcx, qword ptr [rdi + VALUE]
#define OR_RCX_FROM_PTR_RSI_(VALUE) or rcx, qword ptr [rsi + VALUE]
#define OR_RCX_FROM_PTR_RBP_(VALUE) or rcx, qword ptr [rbp + VALUE]
#define OR_RCX_FROM_PTR_RSP_(VALUE) or rcx, qword ptr [rsp + VALUE]
#define OR_RCX_FROM_PTR_R8_(VALUE) or rcx, qword ptr [r8 + VALUE]
#define OR_RCX_FROM_PTR_R9_(VALUE) or rcx, qword ptr [r9 + VALUE]
#define OR_RCX_FROM_PTR_R10_(VALUE) or rcx, qword ptr [r10 + VALUE]
#define OR_RCX_FROM_PTR_R11_(VALUE) or rcx, qword ptr [r11 + VALUE]
#define OR_RCX_FROM_PTR_R12_(VALUE) or rcx, qword ptr [r12 + VALUE]
#define OR_RCX_FROM_PTR_R13_(VALUE) or rcx, qword ptr [r13 + VALUE]
#define OR_RCX_FROM_PTR_R14_(VALUE) or rcx, qword ptr [r14 + VALUE]
#define OR_RCX_FROM_PTR_R15_(VALUE) or rcx, qword ptr [r15 + VALUE]
#define OR_RCX_FROM_PTR_EAX_(VALUE) or rcx, qword ptr [eax + VALUE]
#define OR_RCX_FROM_PTR_EBX_(VALUE) or rcx, qword ptr [ebx + VALUE]
#define OR_RCX_FROM_PTR_ECX_(VALUE) or rcx, qword ptr [ecx + VALUE]
#define OR_RCX_FROM_PTR_EDX_(VALUE) or rcx, qword ptr [edx + VALUE]
#define OR_RCX_FROM_PTR_EDI_(VALUE) or rcx, qword ptr [edi + VALUE]
#define OR_RCX_FROM_PTR_ESI_(VALUE) or rcx, qword ptr [esi + VALUE]
#define OR_RCX_FROM_PTR_EBP_(VALUE) or rcx, qword ptr [ebp + VALUE]
#define OR_RCX_FROM_PTR_ESP_(VALUE) or rcx, qword ptr [esp + VALUE]

#define OR_RDX_FROM_PTR_RAX_(VALUE) or rdx, qword ptr [rax + VALUE]
#define OR_RDX_FROM_PTR_RBX_(VALUE) or rdx, qword ptr [rbx + VALUE]
#define OR_RDX_FROM_PTR_RCX_(VALUE) or rdx, qword ptr [rcx + VALUE]
#define OR_RDX_FROM_PTR_RDX_(VALUE) or rdx, qword ptr [rdx + VALUE]
#define OR_RDX_FROM_PTR_RDI_(VALUE) or rdx, qword ptr [rdi + VALUE]
#define OR_RDX_FROM_PTR_RSI_(VALUE) or rdx, qword ptr [rsi + VALUE]
#define OR_RDX_FROM_PTR_RBP_(VALUE) or rdx, qword ptr [rbp + VALUE]
#define OR_RDX_FROM_PTR_RSP_(VALUE) or rdx, qword ptr [rsp + VALUE]
#define OR_RDX_FROM_PTR_R8_(VALUE) or rdx, qword ptr [r8 + VALUE]
#define OR_RDX_FROM_PTR_R9_(VALUE) or rdx, qword ptr [r9 + VALUE]
#define OR_RDX_FROM_PTR_R10_(VALUE) or rdx, qword ptr [r10 + VALUE]
#define OR_RDX_FROM_PTR_R11_(VALUE) or rdx, qword ptr [r11 + VALUE]
#define OR_RDX_FROM_PTR_R12_(VALUE) or rdx, qword ptr [r12 + VALUE]
#define OR_RDX_FROM_PTR_R13_(VALUE) or rdx, qword ptr [r13 + VALUE]
#define OR_RDX_FROM_PTR_R14_(VALUE) or rdx, qword ptr [r14 + VALUE]
#define OR_RDX_FROM_PTR_R15_(VALUE) or rdx, qword ptr [r15 + VALUE]
#define OR_RDX_FROM_PTR_EAX_(VALUE) or rdx, qword ptr [eax + VALUE]
#define OR_RDX_FROM_PTR_EBX_(VALUE) or rdx, qword ptr [ebx + VALUE]
#define OR_RDX_FROM_PTR_ECX_(VALUE) or rdx, qword ptr [ecx + VALUE]
#define OR_RDX_FROM_PTR_EDX_(VALUE) or rdx, qword ptr [edx + VALUE]
#define OR_RDX_FROM_PTR_EDI_(VALUE) or rdx, qword ptr [edi + VALUE]
#define OR_RDX_FROM_PTR_ESI_(VALUE) or rdx, qword ptr [esi + VALUE]
#define OR_RDX_FROM_PTR_EBP_(VALUE) or rdx, qword ptr [ebp + VALUE]
#define OR_RDX_FROM_PTR_ESP_(VALUE) or rdx, qword ptr [esp + VALUE]

#define OR_RDI_FROM_PTR_RAX_(VALUE) or rdi, qword ptr [rax + VALUE]
#define OR_RDI_FROM_PTR_RBX_(VALUE) or rdi, qword ptr [rbx + VALUE]
#define OR_RDI_FROM_PTR_RCX_(VALUE) or rdi, qword ptr [rcx + VALUE]
#define OR_RDI_FROM_PTR_RDX_(VALUE) or rdi, qword ptr [rdx + VALUE]
#define OR_RDI_FROM_PTR_RDI_(VALUE) or rdi, qword ptr [rdi + VALUE]
#define OR_RDI_FROM_PTR_RSI_(VALUE) or rdi, qword ptr [rsi + VALUE]
#define OR_RDI_FROM_PTR_RBP_(VALUE) or rdi, qword ptr [rbp + VALUE]
#define OR_RDI_FROM_PTR_RSP_(VALUE) or rdi, qword ptr [rsp + VALUE]
#define OR_RDI_FROM_PTR_R8_(VALUE) or rdi, qword ptr [r8 + VALUE]
#define OR_RDI_FROM_PTR_R9_(VALUE) or rdi, qword ptr [r9 + VALUE]
#define OR_RDI_FROM_PTR_R10_(VALUE) or rdi, qword ptr [r10 + VALUE]
#define OR_RDI_FROM_PTR_R11_(VALUE) or rdi, qword ptr [r11 + VALUE]
#define OR_RDI_FROM_PTR_R12_(VALUE) or rdi, qword ptr [r12 + VALUE]
#define OR_RDI_FROM_PTR_R13_(VALUE) or rdi, qword ptr [r13 + VALUE]
#define OR_RDI_FROM_PTR_R14_(VALUE) or rdi, qword ptr [r14 + VALUE]
#define OR_RDI_FROM_PTR_R15_(VALUE) or rdi, qword ptr [r15 + VALUE]
#define OR_RDI_FROM_PTR_EAX_(VALUE) or rdi, qword ptr [eax + VALUE]
#define OR_RDI_FROM_PTR_EBX_(VALUE) or rdi, qword ptr [ebx + VALUE]
#define OR_RDI_FROM_PTR_ECX_(VALUE) or rdi, qword ptr [ecx + VALUE]
#define OR_RDI_FROM_PTR_EDX_(VALUE) or rdi, qword ptr [edx + VALUE]
#define OR_RDI_FROM_PTR_EDI_(VALUE) or rdi, qword ptr [edi + VALUE]
#define OR_RDI_FROM_PTR_ESI_(VALUE) or rdi, qword ptr [esi + VALUE]
#define OR_RDI_FROM_PTR_EBP_(VALUE) or rdi, qword ptr [ebp + VALUE]
#define OR_RDI_FROM_PTR_ESP_(VALUE) or rdi, qword ptr [esp + VALUE]

#define OR_RSI_FROM_PTR_RAX_(VALUE) or rsi, qword ptr [rax + VALUE]
#define OR_RSI_FROM_PTR_RBX_(VALUE) or rsi, qword ptr [rbx + VALUE]
#define OR_RSI_FROM_PTR_RCX_(VALUE) or rsi, qword ptr [rcx + VALUE]
#define OR_RSI_FROM_PTR_RDX_(VALUE) or rsi, qword ptr [rdx + VALUE]
#define OR_RSI_FROM_PTR_RDI_(VALUE) or rsi, qword ptr [rdi + VALUE]
#define OR_RSI_FROM_PTR_RSI_(VALUE) or rsi, qword ptr [rsi + VALUE]
#define OR_RSI_FROM_PTR_RBP_(VALUE) or rsi, qword ptr [rbp + VALUE]
#define OR_RSI_FROM_PTR_RSP_(VALUE) or rsi, qword ptr [rsp + VALUE]
#define OR_RSI_FROM_PTR_R8_(VALUE) or rsi, qword ptr [r8 + VALUE]
#define OR_RSI_FROM_PTR_R9_(VALUE) or rsi, qword ptr [r9 + VALUE]
#define OR_RSI_FROM_PTR_R10_(VALUE) or rsi, qword ptr [r10 + VALUE]
#define OR_RSI_FROM_PTR_R11_(VALUE) or rsi, qword ptr [r11 + VALUE]
#define OR_RSI_FROM_PTR_R12_(VALUE) or rsi, qword ptr [r12 + VALUE]
#define OR_RSI_FROM_PTR_R13_(VALUE) or rsi, qword ptr [r13 + VALUE]
#define OR_RSI_FROM_PTR_R14_(VALUE) or rsi, qword ptr [r14 + VALUE]
#define OR_RSI_FROM_PTR_R15_(VALUE) or rsi, qword ptr [r15 + VALUE]
#define OR_RSI_FROM_PTR_EAX_(VALUE) or rsi, qword ptr [eax + VALUE]
#define OR_RSI_FROM_PTR_EBX_(VALUE) or rsi, qword ptr [ebx + VALUE]
#define OR_RSI_FROM_PTR_ECX_(VALUE) or rsi, qword ptr [ecx + VALUE]
#define OR_RSI_FROM_PTR_EDX_(VALUE) or rsi, qword ptr [edx + VALUE]
#define OR_RSI_FROM_PTR_EDI_(VALUE) or rsi, qword ptr [edi + VALUE]
#define OR_RSI_FROM_PTR_ESI_(VALUE) or rsi, qword ptr [esi + VALUE]
#define OR_RSI_FROM_PTR_EBP_(VALUE) or rsi, qword ptr [ebp + VALUE]
#define OR_RSI_FROM_PTR_ESP_(VALUE) or rsi, qword ptr [esp + VALUE]

#define OR_RBP_FROM_PTR_RAX_(VALUE) or rbp, qword ptr [rax + VALUE]
#define OR_RBP_FROM_PTR_RBX_(VALUE) or rbp, qword ptr [rbx + VALUE]
#define OR_RBP_FROM_PTR_RCX_(VALUE) or rbp, qword ptr [rcx + VALUE]
#define OR_RBP_FROM_PTR_RDX_(VALUE) or rbp, qword ptr [rdx + VALUE]
#define OR_RBP_FROM_PTR_RDI_(VALUE) or rbp, qword ptr [rdi + VALUE]
#define OR_RBP_FROM_PTR_RSI_(VALUE) or rbp, qword ptr [rsi + VALUE]
#define OR_RBP_FROM_PTR_RBP_(VALUE) or rbp, qword ptr [rbp + VALUE]
#define OR_RBP_FROM_PTR_RSP_(VALUE) or rbp, qword ptr [rsp + VALUE]
#define OR_RBP_FROM_PTR_R8_(VALUE) or rbp, qword ptr [r8 + VALUE]
#define OR_RBP_FROM_PTR_R9_(VALUE) or rbp, qword ptr [r9 + VALUE]
#define OR_RBP_FROM_PTR_R10_(VALUE) or rbp, qword ptr [r10 + VALUE]
#define OR_RBP_FROM_PTR_R11_(VALUE) or rbp, qword ptr [r11 + VALUE]
#define OR_RBP_FROM_PTR_R12_(VALUE) or rbp, qword ptr [r12 + VALUE]
#define OR_RBP_FROM_PTR_R13_(VALUE) or rbp, qword ptr [r13 + VALUE]
#define OR_RBP_FROM_PTR_R14_(VALUE) or rbp, qword ptr [r14 + VALUE]
#define OR_RBP_FROM_PTR_R15_(VALUE) or rbp, qword ptr [r15 + VALUE]
#define OR_RBP_FROM_PTR_EAX_(VALUE) or rbp, qword ptr [eax + VALUE]
#define OR_RBP_FROM_PTR_EBX_(VALUE) or rbp, qword ptr [ebx + VALUE]
#define OR_RBP_FROM_PTR_ECX_(VALUE) or rbp, qword ptr [ecx + VALUE]
#define OR_RBP_FROM_PTR_EDX_(VALUE) or rbp, qword ptr [edx + VALUE]
#define OR_RBP_FROM_PTR_EDI_(VALUE) or rbp, qword ptr [edi + VALUE]
#define OR_RBP_FROM_PTR_ESI_(VALUE) or rbp, qword ptr [esi + VALUE]
#define OR_RBP_FROM_PTR_EBP_(VALUE) or rbp, qword ptr [ebp + VALUE]
#define OR_RBP_FROM_PTR_ESP_(VALUE) or rbp, qword ptr [esp + VALUE]

#define OR_RSP_FROM_PTR_RAX_(VALUE) or rsp, qword ptr [rax + VALUE]
#define OR_RSP_FROM_PTR_RBX_(VALUE) or rsp, qword ptr [rbx + VALUE]
#define OR_RSP_FROM_PTR_RCX_(VALUE) or rsp, qword ptr [rcx + VALUE]
#define OR_RSP_FROM_PTR_RDX_(VALUE) or rsp, qword ptr [rdx + VALUE]
#define OR_RSP_FROM_PTR_RDI_(VALUE) or rsp, qword ptr [rdi + VALUE]
#define OR_RSP_FROM_PTR_RSI_(VALUE) or rsp, qword ptr [rsi + VALUE]
#define OR_RSP_FROM_PTR_RBP_(VALUE) or rsp, qword ptr [rbp + VALUE]
#define OR_RSP_FROM_PTR_RSP_(VALUE) or rsp, qword ptr [rsp + VALUE]
#define OR_RSP_FROM_PTR_R8_(VALUE) or rsp, qword ptr [r8 + VALUE]
#define OR_RSP_FROM_PTR_R9_(VALUE) or rsp, qword ptr [r9 + VALUE]
#define OR_RSP_FROM_PTR_R10_(VALUE) or rsp, qword ptr [r10 + VALUE]
#define OR_RSP_FROM_PTR_R11_(VALUE) or rsp, qword ptr [r11 + VALUE]
#define OR_RSP_FROM_PTR_R12_(VALUE) or rsp, qword ptr [r12 + VALUE]
#define OR_RSP_FROM_PTR_R13_(VALUE) or rsp, qword ptr [r13 + VALUE]
#define OR_RSP_FROM_PTR_R14_(VALUE) or rsp, qword ptr [r14 + VALUE]
#define OR_RSP_FROM_PTR_R15_(VALUE) or rsp, qword ptr [r15 + VALUE]
#define OR_RSP_FROM_PTR_EAX_(VALUE) or rsp, qword ptr [eax + VALUE]
#define OR_RSP_FROM_PTR_EBX_(VALUE) or rsp, qword ptr [ebx + VALUE]
#define OR_RSP_FROM_PTR_ECX_(VALUE) or rsp, qword ptr [ecx + VALUE]
#define OR_RSP_FROM_PTR_EDX_(VALUE) or rsp, qword ptr [edx + VALUE]
#define OR_RSP_FROM_PTR_EDI_(VALUE) or rsp, qword ptr [edi + VALUE]
#define OR_RSP_FROM_PTR_ESI_(VALUE) or rsp, qword ptr [esi + VALUE]
#define OR_RSP_FROM_PTR_EBP_(VALUE) or rsp, qword ptr [ebp + VALUE]
#define OR_RSP_FROM_PTR_ESP_(VALUE) or rsp, qword ptr [esp + VALUE]

#define OR_R8_FROM_PTR_RAX_(VALUE) or r8, qword ptr [rax + VALUE]
#define OR_R8_FROM_PTR_RBX_(VALUE) or r8, qword ptr [rbx + VALUE]
#define OR_R8_FROM_PTR_RCX_(VALUE) or r8, qword ptr [rcx + VALUE]
#define OR_R8_FROM_PTR_RDX_(VALUE) or r8, qword ptr [rdx + VALUE]
#define OR_R8_FROM_PTR_RDI_(VALUE) or r8, qword ptr [rdi + VALUE]
#define OR_R8_FROM_PTR_RSI_(VALUE) or r8, qword ptr [rsi + VALUE]
#define OR_R8_FROM_PTR_RBP_(VALUE) or r8, qword ptr [rbp + VALUE]
#define OR_R8_FROM_PTR_RSP_(VALUE) or r8, qword ptr [rsp + VALUE]
#define OR_R8_FROM_PTR_R8_(VALUE) or r8, qword ptr [r8 + VALUE]
#define OR_R8_FROM_PTR_R9_(VALUE) or r8, qword ptr [r9 + VALUE]
#define OR_R8_FROM_PTR_R10_(VALUE) or r8, qword ptr [r10 + VALUE]
#define OR_R8_FROM_PTR_R11_(VALUE) or r8, qword ptr [r11 + VALUE]
#define OR_R8_FROM_PTR_R12_(VALUE) or r8, qword ptr [r12 + VALUE]
#define OR_R8_FROM_PTR_R13_(VALUE) or r8, qword ptr [r13 + VALUE]
#define OR_R8_FROM_PTR_R14_(VALUE) or r8, qword ptr [r14 + VALUE]
#define OR_R8_FROM_PTR_R15_(VALUE) or r8, qword ptr [r15 + VALUE]
#define OR_R8_FROM_PTR_EAX_(VALUE) or r8, qword ptr [eax + VALUE]
#define OR_R8_FROM_PTR_EBX_(VALUE) or r8, qword ptr [ebx + VALUE]
#define OR_R8_FROM_PTR_ECX_(VALUE) or r8, qword ptr [ecx + VALUE]
#define OR_R8_FROM_PTR_EDX_(VALUE) or r8, qword ptr [edx + VALUE]
#define OR_R8_FROM_PTR_EDI_(VALUE) or r8, qword ptr [edi + VALUE]
#define OR_R8_FROM_PTR_ESI_(VALUE) or r8, qword ptr [esi + VALUE]
#define OR_R8_FROM_PTR_EBP_(VALUE) or r8, qword ptr [ebp + VALUE]
#define OR_R8_FROM_PTR_ESP_(VALUE) or r8, qword ptr [esp + VALUE]

#define OR_R9_FROM_PTR_RAX_(VALUE) or r9, qword ptr [rax + VALUE]
#define OR_R9_FROM_PTR_RBX_(VALUE) or r9, qword ptr [rbx + VALUE]
#define OR_R9_FROM_PTR_RCX_(VALUE) or r9, qword ptr [rcx + VALUE]
#define OR_R9_FROM_PTR_RDX_(VALUE) or r9, qword ptr [rdx + VALUE]
#define OR_R9_FROM_PTR_RDI_(VALUE) or r9, qword ptr [rdi + VALUE]
#define OR_R9_FROM_PTR_RSI_(VALUE) or r9, qword ptr [rsi + VALUE]
#define OR_R9_FROM_PTR_RBP_(VALUE) or r9, qword ptr [rbp + VALUE]
#define OR_R9_FROM_PTR_RSP_(VALUE) or r9, qword ptr [rsp + VALUE]
#define OR_R9_FROM_PTR_R8_(VALUE) or r9, qword ptr [r8 + VALUE]
#define OR_R9_FROM_PTR_R9_(VALUE) or r9, qword ptr [r9 + VALUE]
#define OR_R9_FROM_PTR_R10_(VALUE) or r9, qword ptr [r10 + VALUE]
#define OR_R9_FROM_PTR_R11_(VALUE) or r9, qword ptr [r11 + VALUE]
#define OR_R9_FROM_PTR_R12_(VALUE) or r9, qword ptr [r12 + VALUE]
#define OR_R9_FROM_PTR_R13_(VALUE) or r9, qword ptr [r13 + VALUE]
#define OR_R9_FROM_PTR_R14_(VALUE) or r9, qword ptr [r14 + VALUE]
#define OR_R9_FROM_PTR_R15_(VALUE) or r9, qword ptr [r15 + VALUE]
#define OR_R9_FROM_PTR_EAX_(VALUE) or r9, qword ptr [eax + VALUE]
#define OR_R9_FROM_PTR_EBX_(VALUE) or r9, qword ptr [ebx + VALUE]
#define OR_R9_FROM_PTR_ECX_(VALUE) or r9, qword ptr [ecx + VALUE]
#define OR_R9_FROM_PTR_EDX_(VALUE) or r9, qword ptr [edx + VALUE]
#define OR_R9_FROM_PTR_EDI_(VALUE) or r9, qword ptr [edi + VALUE]
#define OR_R9_FROM_PTR_ESI_(VALUE) or r9, qword ptr [esi + VALUE]
#define OR_R9_FROM_PTR_EBP_(VALUE) or r9, qword ptr [ebp + VALUE]
#define OR_R9_FROM_PTR_ESP_(VALUE) or r9, qword ptr [esp + VALUE]

#define OR_R10_FROM_PTR_RAX_(VALUE) or r10, qword ptr [rax + VALUE]
#define OR_R10_FROM_PTR_RBX_(VALUE) or r10, qword ptr [rbx + VALUE]
#define OR_R10_FROM_PTR_RCX_(VALUE) or r10, qword ptr [rcx + VALUE]
#define OR_R10_FROM_PTR_RDX_(VALUE) or r10, qword ptr [rdx + VALUE]
#define OR_R10_FROM_PTR_RDI_(VALUE) or r10, qword ptr [rdi + VALUE]
#define OR_R10_FROM_PTR_RSI_(VALUE) or r10, qword ptr [rsi + VALUE]
#define OR_R10_FROM_PTR_RBP_(VALUE) or r10, qword ptr [rbp + VALUE]
#define OR_R10_FROM_PTR_RSP_(VALUE) or r10, qword ptr [rsp + VALUE]
#define OR_R10_FROM_PTR_R8_(VALUE) or r10, qword ptr [r8 + VALUE]
#define OR_R10_FROM_PTR_R9_(VALUE) or r10, qword ptr [r9 + VALUE]
#define OR_R10_FROM_PTR_R10_(VALUE) or r10, qword ptr [r10 + VALUE]
#define OR_R10_FROM_PTR_R11_(VALUE) or r10, qword ptr [r11 + VALUE]
#define OR_R10_FROM_PTR_R12_(VALUE) or r10, qword ptr [r12 + VALUE]
#define OR_R10_FROM_PTR_R13_(VALUE) or r10, qword ptr [r13 + VALUE]
#define OR_R10_FROM_PTR_R14_(VALUE) or r10, qword ptr [r14 + VALUE]
#define OR_R10_FROM_PTR_R15_(VALUE) or r10, qword ptr [r15 + VALUE]
#define OR_R10_FROM_PTR_EAX_(VALUE) or r10, qword ptr [eax + VALUE]
#define OR_R10_FROM_PTR_EBX_(VALUE) or r10, qword ptr [ebx + VALUE]
#define OR_R10_FROM_PTR_ECX_(VALUE) or r10, qword ptr [ecx + VALUE]
#define OR_R10_FROM_PTR_EDX_(VALUE) or r10, qword ptr [edx + VALUE]
#define OR_R10_FROM_PTR_EDI_(VALUE) or r10, qword ptr [edi + VALUE]
#define OR_R10_FROM_PTR_ESI_(VALUE) or r10, qword ptr [esi + VALUE]
#define OR_R10_FROM_PTR_EBP_(VALUE) or r10, qword ptr [ebp + VALUE]
#define OR_R10_FROM_PTR_ESP_(VALUE) or r10, qword ptr [esp + VALUE]

#define OR_R11_FROM_PTR_RAX_(VALUE) or r11, qword ptr [rax + VALUE]
#define OR_R11_FROM_PTR_RBX_(VALUE) or r11, qword ptr [rbx + VALUE]
#define OR_R11_FROM_PTR_RCX_(VALUE) or r11, qword ptr [rcx + VALUE]
#define OR_R11_FROM_PTR_RDX_(VALUE) or r11, qword ptr [rdx + VALUE]
#define OR_R11_FROM_PTR_RDI_(VALUE) or r11, qword ptr [rdi + VALUE]
#define OR_R11_FROM_PTR_RSI_(VALUE) or r11, qword ptr [rsi + VALUE]
#define OR_R11_FROM_PTR_RBP_(VALUE) or r11, qword ptr [rbp + VALUE]
#define OR_R11_FROM_PTR_RSP_(VALUE) or r11, qword ptr [rsp + VALUE]
#define OR_R11_FROM_PTR_R8_(VALUE) or r11, qword ptr [r8 + VALUE]
#define OR_R11_FROM_PTR_R9_(VALUE) or r11, qword ptr [r9 + VALUE]
#define OR_R11_FROM_PTR_R10_(VALUE) or r11, qword ptr [r10 + VALUE]
#define OR_R11_FROM_PTR_R11_(VALUE) or r11, qword ptr [r11 + VALUE]
#define OR_R11_FROM_PTR_R12_(VALUE) or r11, qword ptr [r12 + VALUE]
#define OR_R11_FROM_PTR_R13_(VALUE) or r11, qword ptr [r13 + VALUE]
#define OR_R11_FROM_PTR_R14_(VALUE) or r11, qword ptr [r14 + VALUE]
#define OR_R11_FROM_PTR_R15_(VALUE) or r11, qword ptr [r15 + VALUE]
#define OR_R11_FROM_PTR_EAX_(VALUE) or r11, qword ptr [eax + VALUE]
#define OR_R11_FROM_PTR_EBX_(VALUE) or r11, qword ptr [ebx + VALUE]
#define OR_R11_FROM_PTR_ECX_(VALUE) or r11, qword ptr [ecx + VALUE]
#define OR_R11_FROM_PTR_EDX_(VALUE) or r11, qword ptr [edx + VALUE]
#define OR_R11_FROM_PTR_EDI_(VALUE) or r11, qword ptr [edi + VALUE]
#define OR_R11_FROM_PTR_ESI_(VALUE) or r11, qword ptr [esi + VALUE]
#define OR_R11_FROM_PTR_EBP_(VALUE) or r11, qword ptr [ebp + VALUE]
#define OR_R11_FROM_PTR_ESP_(VALUE) or r11, qword ptr [esp + VALUE]

#define OR_R12_FROM_PTR_RAX_(VALUE) or r12, qword ptr [rax + VALUE]
#define OR_R12_FROM_PTR_RBX_(VALUE) or r12, qword ptr [rbx + VALUE]
#define OR_R12_FROM_PTR_RCX_(VALUE) or r12, qword ptr [rcx + VALUE]
#define OR_R12_FROM_PTR_RDX_(VALUE) or r12, qword ptr [rdx + VALUE]
#define OR_R12_FROM_PTR_RDI_(VALUE) or r12, qword ptr [rdi + VALUE]
#define OR_R12_FROM_PTR_RSI_(VALUE) or r12, qword ptr [rsi + VALUE]
#define OR_R12_FROM_PTR_RBP_(VALUE) or r12, qword ptr [rbp + VALUE]
#define OR_R12_FROM_PTR_RSP_(VALUE) or r12, qword ptr [rsp + VALUE]
#define OR_R12_FROM_PTR_R8_(VALUE) or r12, qword ptr [r8 + VALUE]
#define OR_R12_FROM_PTR_R9_(VALUE) or r12, qword ptr [r9 + VALUE]
#define OR_R12_FROM_PTR_R10_(VALUE) or r12, qword ptr [r10 + VALUE]
#define OR_R12_FROM_PTR_R11_(VALUE) or r12, qword ptr [r11 + VALUE]
#define OR_R12_FROM_PTR_R12_(VALUE) or r12, qword ptr [r12 + VALUE]
#define OR_R12_FROM_PTR_R13_(VALUE) or r12, qword ptr [r13 + VALUE]
#define OR_R12_FROM_PTR_R14_(VALUE) or r12, qword ptr [r14 + VALUE]
#define OR_R12_FROM_PTR_R15_(VALUE) or r12, qword ptr [r15 + VALUE]
#define OR_R12_FROM_PTR_EAX_(VALUE) or r12, qword ptr [eax + VALUE]
#define OR_R12_FROM_PTR_EBX_(VALUE) or r12, qword ptr [ebx + VALUE]
#define OR_R12_FROM_PTR_ECX_(VALUE) or r12, qword ptr [ecx + VALUE]
#define OR_R12_FROM_PTR_EDX_(VALUE) or r12, qword ptr [edx + VALUE]
#define OR_R12_FROM_PTR_EDI_(VALUE) or r12, qword ptr [edi + VALUE]
#define OR_R12_FROM_PTR_ESI_(VALUE) or r12, qword ptr [esi + VALUE]
#define OR_R12_FROM_PTR_EBP_(VALUE) or r12, qword ptr [ebp + VALUE]
#define OR_R12_FROM_PTR_ESP_(VALUE) or r12, qword ptr [esp + VALUE]

#define OR_R13_FROM_PTR_RAX_(VALUE) or r13, qword ptr [rax + VALUE]
#define OR_R13_FROM_PTR_RBX_(VALUE) or r13, qword ptr [rbx + VALUE]
#define OR_R13_FROM_PTR_RCX_(VALUE) or r13, qword ptr [rcx + VALUE]
#define OR_R13_FROM_PTR_RDX_(VALUE) or r13, qword ptr [rdx + VALUE]
#define OR_R13_FROM_PTR_RDI_(VALUE) or r13, qword ptr [rdi + VALUE]
#define OR_R13_FROM_PTR_RSI_(VALUE) or r13, qword ptr [rsi + VALUE]
#define OR_R13_FROM_PTR_RBP_(VALUE) or r13, qword ptr [rbp + VALUE]
#define OR_R13_FROM_PTR_RSP_(VALUE) or r13, qword ptr [rsp + VALUE]
#define OR_R13_FROM_PTR_R8_(VALUE) or r13, qword ptr [r8 + VALUE]
#define OR_R13_FROM_PTR_R9_(VALUE) or r13, qword ptr [r9 + VALUE]
#define OR_R13_FROM_PTR_R10_(VALUE) or r13, qword ptr [r10 + VALUE]
#define OR_R13_FROM_PTR_R11_(VALUE) or r13, qword ptr [r11 + VALUE]
#define OR_R13_FROM_PTR_R12_(VALUE) or r13, qword ptr [r12 + VALUE]
#define OR_R13_FROM_PTR_R13_(VALUE) or r13, qword ptr [r13 + VALUE]
#define OR_R13_FROM_PTR_R14_(VALUE) or r13, qword ptr [r14 + VALUE]
#define OR_R13_FROM_PTR_R15_(VALUE) or r13, qword ptr [r15 + VALUE]
#define OR_R13_FROM_PTR_EAX_(VALUE) or r13, qword ptr [eax + VALUE]
#define OR_R13_FROM_PTR_EBX_(VALUE) or r13, qword ptr [ebx + VALUE]
#define OR_R13_FROM_PTR_ECX_(VALUE) or r13, qword ptr [ecx + VALUE]
#define OR_R13_FROM_PTR_EDX_(VALUE) or r13, qword ptr [edx + VALUE]
#define OR_R13_FROM_PTR_EDI_(VALUE) or r13, qword ptr [edi + VALUE]
#define OR_R13_FROM_PTR_ESI_(VALUE) or r13, qword ptr [esi + VALUE]
#define OR_R13_FROM_PTR_EBP_(VALUE) or r13, qword ptr [ebp + VALUE]
#define OR_R13_FROM_PTR_ESP_(VALUE) or r13, qword ptr [esp + VALUE]

#define OR_R14_FROM_PTR_RAX_(VALUE) or r14, qword ptr [rax + VALUE]
#define OR_R14_FROM_PTR_RBX_(VALUE) or r14, qword ptr [rbx + VALUE]
#define OR_R14_FROM_PTR_RCX_(VALUE) or r14, qword ptr [rcx + VALUE]
#define OR_R14_FROM_PTR_RDX_(VALUE) or r14, qword ptr [rdx + VALUE]
#define OR_R14_FROM_PTR_RDI_(VALUE) or r14, qword ptr [rdi + VALUE]
#define OR_R14_FROM_PTR_RSI_(VALUE) or r14, qword ptr [rsi + VALUE]
#define OR_R14_FROM_PTR_RBP_(VALUE) or r14, qword ptr [rbp + VALUE]
#define OR_R14_FROM_PTR_RSP_(VALUE) or r14, qword ptr [rsp + VALUE]
#define OR_R14_FROM_PTR_R8_(VALUE) or r14, qword ptr [r8 + VALUE]
#define OR_R14_FROM_PTR_R9_(VALUE) or r14, qword ptr [r9 + VALUE]
#define OR_R14_FROM_PTR_R10_(VALUE) or r14, qword ptr [r10 + VALUE]
#define OR_R14_FROM_PTR_R11_(VALUE) or r14, qword ptr [r11 + VALUE]
#define OR_R14_FROM_PTR_R12_(VALUE) or r14, qword ptr [r12 + VALUE]
#define OR_R14_FROM_PTR_R13_(VALUE) or r14, qword ptr [r13 + VALUE]
#define OR_R14_FROM_PTR_R14_(VALUE) or r14, qword ptr [r14 + VALUE]
#define OR_R14_FROM_PTR_R15_(VALUE) or r14, qword ptr [r15 + VALUE]
#define OR_R14_FROM_PTR_EAX_(VALUE) or r14, qword ptr [eax + VALUE]
#define OR_R14_FROM_PTR_EBX_(VALUE) or r14, qword ptr [ebx + VALUE]
#define OR_R14_FROM_PTR_ECX_(VALUE) or r14, qword ptr [ecx + VALUE]
#define OR_R14_FROM_PTR_EDX_(VALUE) or r14, qword ptr [edx + VALUE]
#define OR_R14_FROM_PTR_EDI_(VALUE) or r14, qword ptr [edi + VALUE]
#define OR_R14_FROM_PTR_ESI_(VALUE) or r14, qword ptr [esi + VALUE]
#define OR_R14_FROM_PTR_EBP_(VALUE) or r14, qword ptr [ebp + VALUE]
#define OR_R14_FROM_PTR_ESP_(VALUE) or r14, qword ptr [esp + VALUE]

#define OR_R15_FROM_PTR_RAX_(VALUE) or r15, qword ptr [rax + VALUE]
#define OR_R15_FROM_PTR_RBX_(VALUE) or r15, qword ptr [rbx + VALUE]
#define OR_R15_FROM_PTR_RCX_(VALUE) or r15, qword ptr [rcx + VALUE]
#define OR_R15_FROM_PTR_RDX_(VALUE) or r15, qword ptr [rdx + VALUE]
#define OR_R15_FROM_PTR_RDI_(VALUE) or r15, qword ptr [rdi + VALUE]
#define OR_R15_FROM_PTR_RSI_(VALUE) or r15, qword ptr [rsi + VALUE]
#define OR_R15_FROM_PTR_RBP_(VALUE) or r15, qword ptr [rbp + VALUE]
#define OR_R15_FROM_PTR_RSP_(VALUE) or r15, qword ptr [rsp + VALUE]
#define OR_R15_FROM_PTR_R8_(VALUE) or r15, qword ptr [r8 + VALUE]
#define OR_R15_FROM_PTR_R9_(VALUE) or r15, qword ptr [r9 + VALUE]
#define OR_R15_FROM_PTR_R10_(VALUE) or r15, qword ptr [r10 + VALUE]
#define OR_R15_FROM_PTR_R11_(VALUE) or r15, qword ptr [r11 + VALUE]
#define OR_R15_FROM_PTR_R12_(VALUE) or r15, qword ptr [r12 + VALUE]
#define OR_R15_FROM_PTR_R13_(VALUE) or r15, qword ptr [r13 + VALUE]
#define OR_R15_FROM_PTR_R14_(VALUE) or r15, qword ptr [r14 + VALUE]
#define OR_R15_FROM_PTR_R15_(VALUE) or r15, qword ptr [r15 + VALUE]
#define OR_R15_FROM_PTR_EAX_(VALUE) or r15, qword ptr [eax + VALUE]
#define OR_R15_FROM_PTR_EBX_(VALUE) or r15, qword ptr [ebx + VALUE]
#define OR_R15_FROM_PTR_ECX_(VALUE) or r15, qword ptr [ecx + VALUE]
#define OR_R15_FROM_PTR_EDX_(VALUE) or r15, qword ptr [edx + VALUE]
#define OR_R15_FROM_PTR_EDI_(VALUE) or r15, qword ptr [edi + VALUE]
#define OR_R15_FROM_PTR_ESI_(VALUE) or r15, qword ptr [esi + VALUE]
#define OR_R15_FROM_PTR_EBP_(VALUE) or r15, qword ptr [ebp + VALUE]
#define OR_R15_FROM_PTR_ESP_(VALUE) or r15, qword ptr [esp + VALUE]

#define OR_RAX_TO_PTR_RAX_(VALUE) or qword ptr [rax + VALUE], rax
#define OR_RAX_TO_PTR_RBX_(VALUE) or qword ptr [rbx + VALUE], rax
#define OR_RAX_TO_PTR_RCX_(VALUE) or qword ptr [rcx + VALUE], rax
#define OR_RAX_TO_PTR_RDX_(VALUE) or qword ptr [rdx + VALUE], rax
#define OR_RAX_TO_PTR_RDI_(VALUE) or qword ptr [rdi + VALUE], rax
#define OR_RAX_TO_PTR_RSI_(VALUE) or qword ptr [rsi + VALUE], rax
#define OR_RAX_TO_PTR_RBP_(VALUE) or qword ptr [rbp + VALUE], rax
#define OR_RAX_TO_PTR_RSP_(VALUE) or qword ptr [rsp + VALUE], rax
#define OR_RAX_TO_PTR_R8_(VALUE) or qword ptr [r8 + VALUE], rax
#define OR_RAX_TO_PTR_R9_(VALUE) or qword ptr [r9 + VALUE], rax
#define OR_RAX_TO_PTR_R10_(VALUE) or qword ptr [r10 + VALUE], rax
#define OR_RAX_TO_PTR_R11_(VALUE) or qword ptr [r11 + VALUE], rax
#define OR_RAX_TO_PTR_R12_(VALUE) or qword ptr [r12 + VALUE], rax
#define OR_RAX_TO_PTR_R13_(VALUE) or qword ptr [r13 + VALUE], rax
#define OR_RAX_TO_PTR_R14_(VALUE) or qword ptr [r14 + VALUE], rax
#define OR_RAX_TO_PTR_R15_(VALUE) or qword ptr [r15 + VALUE], rax
#define OR_RAX_TO_PTR_EAX_(VALUE) or qword ptr [eax + VALUE], rax
#define OR_RAX_TO_PTR_EBX_(VALUE) or qword ptr [ebx + VALUE], rax
#define OR_RAX_TO_PTR_ECX_(VALUE) or qword ptr [ecx + VALUE], rax
#define OR_RAX_TO_PTR_EDX_(VALUE) or qword ptr [edx + VALUE], rax
#define OR_RAX_TO_PTR_EDI_(VALUE) or qword ptr [edi + VALUE], rax
#define OR_RAX_TO_PTR_ESI_(VALUE) or qword ptr [esi + VALUE], rax
#define OR_RAX_TO_PTR_EBP_(VALUE) or qword ptr [ebp + VALUE], rax
#define OR_RAX_TO_PTR_ESP_(VALUE) or qword ptr [esp + VALUE], rax

#define OR_RBX_TO_PTR_RAX_(VALUE) or qword ptr [rax + VALUE], rbx
#define OR_RBX_TO_PTR_RBX_(VALUE) or qword ptr [rbx + VALUE], rbx
#define OR_RBX_TO_PTR_RCX_(VALUE) or qword ptr [rcx + VALUE], rbx
#define OR_RBX_TO_PTR_RDX_(VALUE) or qword ptr [rdx + VALUE], rbx
#define OR_RBX_TO_PTR_RDI_(VALUE) or qword ptr [rdi + VALUE], rbx
#define OR_RBX_TO_PTR_RSI_(VALUE) or qword ptr [rsi + VALUE], rbx
#define OR_RBX_TO_PTR_RBP_(VALUE) or qword ptr [rbp + VALUE], rbx
#define OR_RBX_TO_PTR_RSP_(VALUE) or qword ptr [rsp + VALUE], rbx
#define OR_RBX_TO_PTR_R8_(VALUE) or qword ptr [r8 + VALUE], rbx
#define OR_RBX_TO_PTR_R9_(VALUE) or qword ptr [r9 + VALUE], rbx
#define OR_RBX_TO_PTR_R10_(VALUE) or qword ptr [r10 + VALUE], rbx
#define OR_RBX_TO_PTR_R11_(VALUE) or qword ptr [r11 + VALUE], rbx
#define OR_RBX_TO_PTR_R12_(VALUE) or qword ptr [r12 + VALUE], rbx
#define OR_RBX_TO_PTR_R13_(VALUE) or qword ptr [r13 + VALUE], rbx
#define OR_RBX_TO_PTR_R14_(VALUE) or qword ptr [r14 + VALUE], rbx
#define OR_RBX_TO_PTR_R15_(VALUE) or qword ptr [r15 + VALUE], rbx
#define OR_RBX_TO_PTR_EAX_(VALUE) or qword ptr [eax + VALUE], rbx
#define OR_RBX_TO_PTR_EBX_(VALUE) or qword ptr [ebx + VALUE], rbx
#define OR_RBX_TO_PTR_ECX_(VALUE) or qword ptr [ecx + VALUE], rbx
#define OR_RBX_TO_PTR_EDX_(VALUE) or qword ptr [edx + VALUE], rbx
#define OR_RBX_TO_PTR_EDI_(VALUE) or qword ptr [edi + VALUE], rbx
#define OR_RBX_TO_PTR_ESI_(VALUE) or qword ptr [esi + VALUE], rbx
#define OR_RBX_TO_PTR_EBP_(VALUE) or qword ptr [ebp + VALUE], rbx
#define OR_RBX_TO_PTR_ESP_(VALUE) or qword ptr [esp + VALUE], rbx

#define OR_RCX_TO_PTR_RAX_(VALUE) or qword ptr [rax + VALUE], rcx
#define OR_RCX_TO_PTR_RBX_(VALUE) or qword ptr [rbx + VALUE], rcx
#define OR_RCX_TO_PTR_RCX_(VALUE) or qword ptr [rcx + VALUE], rcx
#define OR_RCX_TO_PTR_RDX_(VALUE) or qword ptr [rdx + VALUE], rcx
#define OR_RCX_TO_PTR_RDI_(VALUE) or qword ptr [rdi + VALUE], rcx
#define OR_RCX_TO_PTR_RSI_(VALUE) or qword ptr [rsi + VALUE], rcx
#define OR_RCX_TO_PTR_RBP_(VALUE) or qword ptr [rbp + VALUE], rcx
#define OR_RCX_TO_PTR_RSP_(VALUE) or qword ptr [rsp + VALUE], rcx
#define OR_RCX_TO_PTR_R8_(VALUE) or qword ptr [r8 + VALUE], rcx
#define OR_RCX_TO_PTR_R9_(VALUE) or qword ptr [r9 + VALUE], rcx
#define OR_RCX_TO_PTR_R10_(VALUE) or qword ptr [r10 + VALUE], rcx
#define OR_RCX_TO_PTR_R11_(VALUE) or qword ptr [r11 + VALUE], rcx
#define OR_RCX_TO_PTR_R12_(VALUE) or qword ptr [r12 + VALUE], rcx
#define OR_RCX_TO_PTR_R13_(VALUE) or qword ptr [r13 + VALUE], rcx
#define OR_RCX_TO_PTR_R14_(VALUE) or qword ptr [r14 + VALUE], rcx
#define OR_RCX_TO_PTR_R15_(VALUE) or qword ptr [r15 + VALUE], rcx
#define OR_RCX_TO_PTR_EAX_(VALUE) or qword ptr [eax + VALUE], rcx
#define OR_RCX_TO_PTR_EBX_(VALUE) or qword ptr [ebx + VALUE], rcx
#define OR_RCX_TO_PTR_ECX_(VALUE) or qword ptr [ecx + VALUE], rcx
#define OR_RCX_TO_PTR_EDX_(VALUE) or qword ptr [edx + VALUE], rcx
#define OR_RCX_TO_PTR_EDI_(VALUE) or qword ptr [edi + VALUE], rcx
#define OR_RCX_TO_PTR_ESI_(VALUE) or qword ptr [esi + VALUE], rcx
#define OR_RCX_TO_PTR_EBP_(VALUE) or qword ptr [ebp + VALUE], rcx
#define OR_RCX_TO_PTR_ESP_(VALUE) or qword ptr [esp + VALUE], rcx

#define OR_RDX_TO_PTR_RAX_(VALUE) or qword ptr [rax + VALUE], rdx
#define OR_RDX_TO_PTR_RBX_(VALUE) or qword ptr [rbx + VALUE], rdx
#define OR_RDX_TO_PTR_RCX_(VALUE) or qword ptr [rcx + VALUE], rdx
#define OR_RDX_TO_PTR_RDX_(VALUE) or qword ptr [rdx + VALUE], rdx
#define OR_RDX_TO_PTR_RDI_(VALUE) or qword ptr [rdi + VALUE], rdx
#define OR_RDX_TO_PTR_RSI_(VALUE) or qword ptr [rsi + VALUE], rdx
#define OR_RDX_TO_PTR_RBP_(VALUE) or qword ptr [rbp + VALUE], rdx
#define OR_RDX_TO_PTR_RSP_(VALUE) or qword ptr [rsp + VALUE], rdx
#define OR_RDX_TO_PTR_R8_(VALUE) or qword ptr [r8 + VALUE], rdx
#define OR_RDX_TO_PTR_R9_(VALUE) or qword ptr [r9 + VALUE], rdx
#define OR_RDX_TO_PTR_R10_(VALUE) or qword ptr [r10 + VALUE], rdx
#define OR_RDX_TO_PTR_R11_(VALUE) or qword ptr [r11 + VALUE], rdx
#define OR_RDX_TO_PTR_R12_(VALUE) or qword ptr [r12 + VALUE], rdx
#define OR_RDX_TO_PTR_R13_(VALUE) or qword ptr [r13 + VALUE], rdx
#define OR_RDX_TO_PTR_R14_(VALUE) or qword ptr [r14 + VALUE], rdx
#define OR_RDX_TO_PTR_R15_(VALUE) or qword ptr [r15 + VALUE], rdx
#define OR_RDX_TO_PTR_EAX_(VALUE) or qword ptr [eax + VALUE], rdx
#define OR_RDX_TO_PTR_EBX_(VALUE) or qword ptr [ebx + VALUE], rdx
#define OR_RDX_TO_PTR_ECX_(VALUE) or qword ptr [ecx + VALUE], rdx
#define OR_RDX_TO_PTR_EDX_(VALUE) or qword ptr [edx + VALUE], rdx
#define OR_RDX_TO_PTR_EDI_(VALUE) or qword ptr [edi + VALUE], rdx
#define OR_RDX_TO_PTR_ESI_(VALUE) or qword ptr [esi + VALUE], rdx
#define OR_RDX_TO_PTR_EBP_(VALUE) or qword ptr [ebp + VALUE], rdx
#define OR_RDX_TO_PTR_ESP_(VALUE) or qword ptr [esp + VALUE], rdx

#define OR_RDI_TO_PTR_RAX_(VALUE) or qword ptr [rax + VALUE], rdi
#define OR_RDI_TO_PTR_RBX_(VALUE) or qword ptr [rbx + VALUE], rdi
#define OR_RDI_TO_PTR_RCX_(VALUE) or qword ptr [rcx + VALUE], rdi
#define OR_RDI_TO_PTR_RDX_(VALUE) or qword ptr [rdx + VALUE], rdi
#define OR_RDI_TO_PTR_RDI_(VALUE) or qword ptr [rdi + VALUE], rdi
#define OR_RDI_TO_PTR_RSI_(VALUE) or qword ptr [rsi + VALUE], rdi
#define OR_RDI_TO_PTR_RBP_(VALUE) or qword ptr [rbp + VALUE], rdi
#define OR_RDI_TO_PTR_RSP_(VALUE) or qword ptr [rsp + VALUE], rdi
#define OR_RDI_TO_PTR_R8_(VALUE) or qword ptr [r8 + VALUE], rdi
#define OR_RDI_TO_PTR_R9_(VALUE) or qword ptr [r9 + VALUE], rdi
#define OR_RDI_TO_PTR_R10_(VALUE) or qword ptr [r10 + VALUE], rdi
#define OR_RDI_TO_PTR_R11_(VALUE) or qword ptr [r11 + VALUE], rdi
#define OR_RDI_TO_PTR_R12_(VALUE) or qword ptr [r12 + VALUE], rdi
#define OR_RDI_TO_PTR_R13_(VALUE) or qword ptr [r13 + VALUE], rdi
#define OR_RDI_TO_PTR_R14_(VALUE) or qword ptr [r14 + VALUE], rdi
#define OR_RDI_TO_PTR_R15_(VALUE) or qword ptr [r15 + VALUE], rdi
#define OR_RDI_TO_PTR_EAX_(VALUE) or qword ptr [eax + VALUE], rdi
#define OR_RDI_TO_PTR_EBX_(VALUE) or qword ptr [ebx + VALUE], rdi
#define OR_RDI_TO_PTR_ECX_(VALUE) or qword ptr [ecx + VALUE], rdi
#define OR_RDI_TO_PTR_EDX_(VALUE) or qword ptr [edx + VALUE], rdi
#define OR_RDI_TO_PTR_EDI_(VALUE) or qword ptr [edi + VALUE], rdi
#define OR_RDI_TO_PTR_ESI_(VALUE) or qword ptr [esi + VALUE], rdi
#define OR_RDI_TO_PTR_EBP_(VALUE) or qword ptr [ebp + VALUE], rdi
#define OR_RDI_TO_PTR_ESP_(VALUE) or qword ptr [esp + VALUE], rdi

#define OR_RSI_TO_PTR_RAX_(VALUE) or qword ptr [rax + VALUE], rsi
#define OR_RSI_TO_PTR_RBX_(VALUE) or qword ptr [rbx + VALUE], rsi
#define OR_RSI_TO_PTR_RCX_(VALUE) or qword ptr [rcx + VALUE], rsi
#define OR_RSI_TO_PTR_RDX_(VALUE) or qword ptr [rdx + VALUE], rsi
#define OR_RSI_TO_PTR_RDI_(VALUE) or qword ptr [rdi + VALUE], rsi
#define OR_RSI_TO_PTR_RSI_(VALUE) or qword ptr [rsi + VALUE], rsi
#define OR_RSI_TO_PTR_RBP_(VALUE) or qword ptr [rbp + VALUE], rsi
#define OR_RSI_TO_PTR_RSP_(VALUE) or qword ptr [rsp + VALUE], rsi
#define OR_RSI_TO_PTR_R8_(VALUE) or qword ptr [r8 + VALUE], rsi
#define OR_RSI_TO_PTR_R9_(VALUE) or qword ptr [r9 + VALUE], rsi
#define OR_RSI_TO_PTR_R10_(VALUE) or qword ptr [r10 + VALUE], rsi
#define OR_RSI_TO_PTR_R11_(VALUE) or qword ptr [r11 + VALUE], rsi
#define OR_RSI_TO_PTR_R12_(VALUE) or qword ptr [r12 + VALUE], rsi
#define OR_RSI_TO_PTR_R13_(VALUE) or qword ptr [r13 + VALUE], rsi
#define OR_RSI_TO_PTR_R14_(VALUE) or qword ptr [r14 + VALUE], rsi
#define OR_RSI_TO_PTR_R15_(VALUE) or qword ptr [r15 + VALUE], rsi
#define OR_RSI_TO_PTR_EAX_(VALUE) or qword ptr [eax + VALUE], rsi
#define OR_RSI_TO_PTR_EBX_(VALUE) or qword ptr [ebx + VALUE], rsi
#define OR_RSI_TO_PTR_ECX_(VALUE) or qword ptr [ecx + VALUE], rsi
#define OR_RSI_TO_PTR_EDX_(VALUE) or qword ptr [edx + VALUE], rsi
#define OR_RSI_TO_PTR_EDI_(VALUE) or qword ptr [edi + VALUE], rsi
#define OR_RSI_TO_PTR_ESI_(VALUE) or qword ptr [esi + VALUE], rsi
#define OR_RSI_TO_PTR_EBP_(VALUE) or qword ptr [ebp + VALUE], rsi
#define OR_RSI_TO_PTR_ESP_(VALUE) or qword ptr [esp + VALUE], rsi

#define OR_RBP_TO_PTR_RAX_(VALUE) or qword ptr [rax + VALUE], rbp
#define OR_RBP_TO_PTR_RBX_(VALUE) or qword ptr [rbx + VALUE], rbp
#define OR_RBP_TO_PTR_RCX_(VALUE) or qword ptr [rcx + VALUE], rbp
#define OR_RBP_TO_PTR_RDX_(VALUE) or qword ptr [rdx + VALUE], rbp
#define OR_RBP_TO_PTR_RDI_(VALUE) or qword ptr [rdi + VALUE], rbp
#define OR_RBP_TO_PTR_RSI_(VALUE) or qword ptr [rsi + VALUE], rbp
#define OR_RBP_TO_PTR_RBP_(VALUE) or qword ptr [rbp + VALUE], rbp
#define OR_RBP_TO_PTR_RSP_(VALUE) or qword ptr [rsp + VALUE], rbp
#define OR_RBP_TO_PTR_R8_(VALUE) or qword ptr [r8 + VALUE], rbp
#define OR_RBP_TO_PTR_R9_(VALUE) or qword ptr [r9 + VALUE], rbp
#define OR_RBP_TO_PTR_R10_(VALUE) or qword ptr [r10 + VALUE], rbp
#define OR_RBP_TO_PTR_R11_(VALUE) or qword ptr [r11 + VALUE], rbp
#define OR_RBP_TO_PTR_R12_(VALUE) or qword ptr [r12 + VALUE], rbp
#define OR_RBP_TO_PTR_R13_(VALUE) or qword ptr [r13 + VALUE], rbp
#define OR_RBP_TO_PTR_R14_(VALUE) or qword ptr [r14 + VALUE], rbp
#define OR_RBP_TO_PTR_R15_(VALUE) or qword ptr [r15 + VALUE], rbp
#define OR_RBP_TO_PTR_EAX_(VALUE) or qword ptr [eax + VALUE], rbp
#define OR_RBP_TO_PTR_EBX_(VALUE) or qword ptr [ebx + VALUE], rbp
#define OR_RBP_TO_PTR_ECX_(VALUE) or qword ptr [ecx + VALUE], rbp
#define OR_RBP_TO_PTR_EDX_(VALUE) or qword ptr [edx + VALUE], rbp
#define OR_RBP_TO_PTR_EDI_(VALUE) or qword ptr [edi + VALUE], rbp
#define OR_RBP_TO_PTR_ESI_(VALUE) or qword ptr [esi + VALUE], rbp
#define OR_RBP_TO_PTR_EBP_(VALUE) or qword ptr [ebp + VALUE], rbp
#define OR_RBP_TO_PTR_ESP_(VALUE) or qword ptr [esp + VALUE], rbp

#define OR_RSP_TO_PTR_RAX_(VALUE) or qword ptr [rax + VALUE], rsp
#define OR_RSP_TO_PTR_RBX_(VALUE) or qword ptr [rbx + VALUE], rsp
#define OR_RSP_TO_PTR_RCX_(VALUE) or qword ptr [rcx + VALUE], rsp
#define OR_RSP_TO_PTR_RDX_(VALUE) or qword ptr [rdx + VALUE], rsp
#define OR_RSP_TO_PTR_RDI_(VALUE) or qword ptr [rdi + VALUE], rsp
#define OR_RSP_TO_PTR_RSI_(VALUE) or qword ptr [rsi + VALUE], rsp
#define OR_RSP_TO_PTR_RBP_(VALUE) or qword ptr [rbp + VALUE], rsp
#define OR_RSP_TO_PTR_RSP_(VALUE) or qword ptr [rsp + VALUE], rsp
#define OR_RSP_TO_PTR_R8_(VALUE) or qword ptr [r8 + VALUE], rsp
#define OR_RSP_TO_PTR_R9_(VALUE) or qword ptr [r9 + VALUE], rsp
#define OR_RSP_TO_PTR_R10_(VALUE) or qword ptr [r10 + VALUE], rsp
#define OR_RSP_TO_PTR_R11_(VALUE) or qword ptr [r11 + VALUE], rsp
#define OR_RSP_TO_PTR_R12_(VALUE) or qword ptr [r12 + VALUE], rsp
#define OR_RSP_TO_PTR_R13_(VALUE) or qword ptr [r13 + VALUE], rsp
#define OR_RSP_TO_PTR_R14_(VALUE) or qword ptr [r14 + VALUE], rsp
#define OR_RSP_TO_PTR_R15_(VALUE) or qword ptr [r15 + VALUE], rsp
#define OR_RSP_TO_PTR_EAX_(VALUE) or qword ptr [eax + VALUE], rsp
#define OR_RSP_TO_PTR_EBX_(VALUE) or qword ptr [ebx + VALUE], rsp
#define OR_RSP_TO_PTR_ECX_(VALUE) or qword ptr [ecx + VALUE], rsp
#define OR_RSP_TO_PTR_EDX_(VALUE) or qword ptr [edx + VALUE], rsp
#define OR_RSP_TO_PTR_EDI_(VALUE) or qword ptr [edi + VALUE], rsp
#define OR_RSP_TO_PTR_ESI_(VALUE) or qword ptr [esi + VALUE], rsp
#define OR_RSP_TO_PTR_EBP_(VALUE) or qword ptr [ebp + VALUE], rsp
#define OR_RSP_TO_PTR_ESP_(VALUE) or qword ptr [esp + VALUE], rsp

#define OR_R8_TO_PTR_RAX_(VALUE) or qword ptr [rax + VALUE], r8
#define OR_R8_TO_PTR_RBX_(VALUE) or qword ptr [rbx + VALUE], r8
#define OR_R8_TO_PTR_RCX_(VALUE) or qword ptr [rcx + VALUE], r8
#define OR_R8_TO_PTR_RDX_(VALUE) or qword ptr [rdx + VALUE], r8
#define OR_R8_TO_PTR_RDI_(VALUE) or qword ptr [rdi + VALUE], r8
#define OR_R8_TO_PTR_RSI_(VALUE) or qword ptr [rsi + VALUE], r8
#define OR_R8_TO_PTR_RBP_(VALUE) or qword ptr [rbp + VALUE], r8
#define OR_R8_TO_PTR_RSP_(VALUE) or qword ptr [rsp + VALUE], r8
#define OR_R8_TO_PTR_R8_(VALUE) or qword ptr [r8 + VALUE], r8
#define OR_R8_TO_PTR_R9_(VALUE) or qword ptr [r9 + VALUE], r8
#define OR_R8_TO_PTR_R10_(VALUE) or qword ptr [r10 + VALUE], r8
#define OR_R8_TO_PTR_R11_(VALUE) or qword ptr [r11 + VALUE], r8
#define OR_R8_TO_PTR_R12_(VALUE) or qword ptr [r12 + VALUE], r8
#define OR_R8_TO_PTR_R13_(VALUE) or qword ptr [r13 + VALUE], r8
#define OR_R8_TO_PTR_R14_(VALUE) or qword ptr [r14 + VALUE], r8
#define OR_R8_TO_PTR_R15_(VALUE) or qword ptr [r15 + VALUE], r8
#define OR_R8_TO_PTR_EAX_(VALUE) or qword ptr [eax + VALUE], r8
#define OR_R8_TO_PTR_EBX_(VALUE) or qword ptr [ebx + VALUE], r8
#define OR_R8_TO_PTR_ECX_(VALUE) or qword ptr [ecx + VALUE], r8
#define OR_R8_TO_PTR_EDX_(VALUE) or qword ptr [edx + VALUE], r8
#define OR_R8_TO_PTR_EDI_(VALUE) or qword ptr [edi + VALUE], r8
#define OR_R8_TO_PTR_ESI_(VALUE) or qword ptr [esi + VALUE], r8
#define OR_R8_TO_PTR_EBP_(VALUE) or qword ptr [ebp + VALUE], r8
#define OR_R8_TO_PTR_ESP_(VALUE) or qword ptr [esp + VALUE], r8

#define OR_R9_TO_PTR_RAX_(VALUE) or qword ptr [rax + VALUE], r9
#define OR_R9_TO_PTR_RBX_(VALUE) or qword ptr [rbx + VALUE], r9
#define OR_R9_TO_PTR_RCX_(VALUE) or qword ptr [rcx + VALUE], r9
#define OR_R9_TO_PTR_RDX_(VALUE) or qword ptr [rdx + VALUE], r9
#define OR_R9_TO_PTR_RDI_(VALUE) or qword ptr [rdi + VALUE], r9
#define OR_R9_TO_PTR_RSI_(VALUE) or qword ptr [rsi + VALUE], r9
#define OR_R9_TO_PTR_RBP_(VALUE) or qword ptr [rbp + VALUE], r9
#define OR_R9_TO_PTR_RSP_(VALUE) or qword ptr [rsp + VALUE], r9
#define OR_R9_TO_PTR_R8_(VALUE) or qword ptr [r8 + VALUE], r9
#define OR_R9_TO_PTR_R9_(VALUE) or qword ptr [r9 + VALUE], r9
#define OR_R9_TO_PTR_R10_(VALUE) or qword ptr [r10 + VALUE], r9
#define OR_R9_TO_PTR_R11_(VALUE) or qword ptr [r11 + VALUE], r9
#define OR_R9_TO_PTR_R12_(VALUE) or qword ptr [r12 + VALUE], r9
#define OR_R9_TO_PTR_R13_(VALUE) or qword ptr [r13 + VALUE], r9
#define OR_R9_TO_PTR_R14_(VALUE) or qword ptr [r14 + VALUE], r9
#define OR_R9_TO_PTR_R15_(VALUE) or qword ptr [r15 + VALUE], r9
#define OR_R9_TO_PTR_EAX_(VALUE) or qword ptr [eax + VALUE], r9
#define OR_R9_TO_PTR_EBX_(VALUE) or qword ptr [ebx + VALUE], r9
#define OR_R9_TO_PTR_ECX_(VALUE) or qword ptr [ecx + VALUE], r9
#define OR_R9_TO_PTR_EDX_(VALUE) or qword ptr [edx + VALUE], r9
#define OR_R9_TO_PTR_EDI_(VALUE) or qword ptr [edi + VALUE], r9
#define OR_R9_TO_PTR_ESI_(VALUE) or qword ptr [esi + VALUE], r9
#define OR_R9_TO_PTR_EBP_(VALUE) or qword ptr [ebp + VALUE], r9
#define OR_R9_TO_PTR_ESP_(VALUE) or qword ptr [esp + VALUE], r9

#define OR_R10_TO_PTR_RAX_(VALUE) or qword ptr [rax + VALUE], r10
#define OR_R10_TO_PTR_RBX_(VALUE) or qword ptr [rbx + VALUE], r10
#define OR_R10_TO_PTR_RCX_(VALUE) or qword ptr [rcx + VALUE], r10
#define OR_R10_TO_PTR_RDX_(VALUE) or qword ptr [rdx + VALUE], r10
#define OR_R10_TO_PTR_RDI_(VALUE) or qword ptr [rdi + VALUE], r10
#define OR_R10_TO_PTR_RSI_(VALUE) or qword ptr [rsi + VALUE], r10
#define OR_R10_TO_PTR_RBP_(VALUE) or qword ptr [rbp + VALUE], r10
#define OR_R10_TO_PTR_RSP_(VALUE) or qword ptr [rsp + VALUE], r10
#define OR_R10_TO_PTR_R8_(VALUE) or qword ptr [r8 + VALUE], r10
#define OR_R10_TO_PTR_R9_(VALUE) or qword ptr [r9 + VALUE], r10
#define OR_R10_TO_PTR_R10_(VALUE) or qword ptr [r10 + VALUE], r10
#define OR_R10_TO_PTR_R11_(VALUE) or qword ptr [r11 + VALUE], r10
#define OR_R10_TO_PTR_R12_(VALUE) or qword ptr [r12 + VALUE], r10
#define OR_R10_TO_PTR_R13_(VALUE) or qword ptr [r13 + VALUE], r10
#define OR_R10_TO_PTR_R14_(VALUE) or qword ptr [r14 + VALUE], r10
#define OR_R10_TO_PTR_R15_(VALUE) or qword ptr [r15 + VALUE], r10
#define OR_R10_TO_PTR_EAX_(VALUE) or qword ptr [eax + VALUE], r10
#define OR_R10_TO_PTR_EBX_(VALUE) or qword ptr [ebx + VALUE], r10
#define OR_R10_TO_PTR_ECX_(VALUE) or qword ptr [ecx + VALUE], r10
#define OR_R10_TO_PTR_EDX_(VALUE) or qword ptr [edx + VALUE], r10
#define OR_R10_TO_PTR_EDI_(VALUE) or qword ptr [edi + VALUE], r10
#define OR_R10_TO_PTR_ESI_(VALUE) or qword ptr [esi + VALUE], r10
#define OR_R10_TO_PTR_EBP_(VALUE) or qword ptr [ebp + VALUE], r10
#define OR_R10_TO_PTR_ESP_(VALUE) or qword ptr [esp + VALUE], r10

#define OR_R11_TO_PTR_RAX_(VALUE) or qword ptr [rax + VALUE], r11
#define OR_R11_TO_PTR_RBX_(VALUE) or qword ptr [rbx + VALUE], r11
#define OR_R11_TO_PTR_RCX_(VALUE) or qword ptr [rcx + VALUE], r11
#define OR_R11_TO_PTR_RDX_(VALUE) or qword ptr [rdx + VALUE], r11
#define OR_R11_TO_PTR_RDI_(VALUE) or qword ptr [rdi + VALUE], r11
#define OR_R11_TO_PTR_RSI_(VALUE) or qword ptr [rsi + VALUE], r11
#define OR_R11_TO_PTR_RBP_(VALUE) or qword ptr [rbp + VALUE], r11
#define OR_R11_TO_PTR_RSP_(VALUE) or qword ptr [rsp + VALUE], r11
#define OR_R11_TO_PTR_R8_(VALUE) or qword ptr [r8 + VALUE], r11
#define OR_R11_TO_PTR_R9_(VALUE) or qword ptr [r9 + VALUE], r11
#define OR_R11_TO_PTR_R10_(VALUE) or qword ptr [r10 + VALUE], r11
#define OR_R11_TO_PTR_R11_(VALUE) or qword ptr [r11 + VALUE], r11
#define OR_R11_TO_PTR_R12_(VALUE) or qword ptr [r12 + VALUE], r11
#define OR_R11_TO_PTR_R13_(VALUE) or qword ptr [r13 + VALUE], r11
#define OR_R11_TO_PTR_R14_(VALUE) or qword ptr [r14 + VALUE], r11
#define OR_R11_TO_PTR_R15_(VALUE) or qword ptr [r15 + VALUE], r11
#define OR_R11_TO_PTR_EAX_(VALUE) or qword ptr [eax + VALUE], r11
#define OR_R11_TO_PTR_EBX_(VALUE) or qword ptr [ebx + VALUE], r11
#define OR_R11_TO_PTR_ECX_(VALUE) or qword ptr [ecx + VALUE], r11
#define OR_R11_TO_PTR_EDX_(VALUE) or qword ptr [edx + VALUE], r11
#define OR_R11_TO_PTR_EDI_(VALUE) or qword ptr [edi + VALUE], r11
#define OR_R11_TO_PTR_ESI_(VALUE) or qword ptr [esi + VALUE], r11
#define OR_R11_TO_PTR_EBP_(VALUE) or qword ptr [ebp + VALUE], r11
#define OR_R11_TO_PTR_ESP_(VALUE) or qword ptr [esp + VALUE], r11

#define OR_R12_TO_PTR_RAX_(VALUE) or qword ptr [rax + VALUE], r12
#define OR_R12_TO_PTR_RBX_(VALUE) or qword ptr [rbx + VALUE], r12
#define OR_R12_TO_PTR_RCX_(VALUE) or qword ptr [rcx + VALUE], r12
#define OR_R12_TO_PTR_RDX_(VALUE) or qword ptr [rdx + VALUE], r12
#define OR_R12_TO_PTR_RDI_(VALUE) or qword ptr [rdi + VALUE], r12
#define OR_R12_TO_PTR_RSI_(VALUE) or qword ptr [rsi + VALUE], r12
#define OR_R12_TO_PTR_RBP_(VALUE) or qword ptr [rbp + VALUE], r12
#define OR_R12_TO_PTR_RSP_(VALUE) or qword ptr [rsp + VALUE], r12
#define OR_R12_TO_PTR_R8_(VALUE) or qword ptr [r8 + VALUE], r12
#define OR_R12_TO_PTR_R9_(VALUE) or qword ptr [r9 + VALUE], r12
#define OR_R12_TO_PTR_R10_(VALUE) or qword ptr [r10 + VALUE], r12
#define OR_R12_TO_PTR_R11_(VALUE) or qword ptr [r11 + VALUE], r12
#define OR_R12_TO_PTR_R12_(VALUE) or qword ptr [r12 + VALUE], r12
#define OR_R12_TO_PTR_R13_(VALUE) or qword ptr [r13 + VALUE], r12
#define OR_R12_TO_PTR_R14_(VALUE) or qword ptr [r14 + VALUE], r12
#define OR_R12_TO_PTR_R15_(VALUE) or qword ptr [r15 + VALUE], r12
#define OR_R12_TO_PTR_EAX_(VALUE) or qword ptr [eax + VALUE], r12
#define OR_R12_TO_PTR_EBX_(VALUE) or qword ptr [ebx + VALUE], r12
#define OR_R12_TO_PTR_ECX_(VALUE) or qword ptr [ecx + VALUE], r12
#define OR_R12_TO_PTR_EDX_(VALUE) or qword ptr [edx + VALUE], r12
#define OR_R12_TO_PTR_EDI_(VALUE) or qword ptr [edi + VALUE], r12
#define OR_R12_TO_PTR_ESI_(VALUE) or qword ptr [esi + VALUE], r12
#define OR_R12_TO_PTR_EBP_(VALUE) or qword ptr [ebp + VALUE], r12
#define OR_R12_TO_PTR_ESP_(VALUE) or qword ptr [esp + VALUE], r12

#define OR_R13_TO_PTR_RAX_(VALUE) or qword ptr [rax + VALUE], r13
#define OR_R13_TO_PTR_RBX_(VALUE) or qword ptr [rbx + VALUE], r13
#define OR_R13_TO_PTR_RCX_(VALUE) or qword ptr [rcx + VALUE], r13
#define OR_R13_TO_PTR_RDX_(VALUE) or qword ptr [rdx + VALUE], r13
#define OR_R13_TO_PTR_RDI_(VALUE) or qword ptr [rdi + VALUE], r13
#define OR_R13_TO_PTR_RSI_(VALUE) or qword ptr [rsi + VALUE], r13
#define OR_R13_TO_PTR_RBP_(VALUE) or qword ptr [rbp + VALUE], r13
#define OR_R13_TO_PTR_RSP_(VALUE) or qword ptr [rsp + VALUE], r13
#define OR_R13_TO_PTR_R8_(VALUE) or qword ptr [r8 + VALUE], r13
#define OR_R13_TO_PTR_R9_(VALUE) or qword ptr [r9 + VALUE], r13
#define OR_R13_TO_PTR_R10_(VALUE) or qword ptr [r10 + VALUE], r13
#define OR_R13_TO_PTR_R11_(VALUE) or qword ptr [r11 + VALUE], r13
#define OR_R13_TO_PTR_R12_(VALUE) or qword ptr [r12 + VALUE], r13
#define OR_R13_TO_PTR_R13_(VALUE) or qword ptr [r13 + VALUE], r13
#define OR_R13_TO_PTR_R14_(VALUE) or qword ptr [r14 + VALUE], r13
#define OR_R13_TO_PTR_R15_(VALUE) or qword ptr [r15 + VALUE], r13
#define OR_R13_TO_PTR_EAX_(VALUE) or qword ptr [eax + VALUE], r13
#define OR_R13_TO_PTR_EBX_(VALUE) or qword ptr [ebx + VALUE], r13
#define OR_R13_TO_PTR_ECX_(VALUE) or qword ptr [ecx + VALUE], r13
#define OR_R13_TO_PTR_EDX_(VALUE) or qword ptr [edx + VALUE], r13
#define OR_R13_TO_PTR_EDI_(VALUE) or qword ptr [edi + VALUE], r13
#define OR_R13_TO_PTR_ESI_(VALUE) or qword ptr [esi + VALUE], r13
#define OR_R13_TO_PTR_EBP_(VALUE) or qword ptr [ebp + VALUE], r13
#define OR_R13_TO_PTR_ESP_(VALUE) or qword ptr [esp + VALUE], r13

#define OR_R14_TO_PTR_RAX_(VALUE) or qword ptr [rax + VALUE], r14
#define OR_R14_TO_PTR_RBX_(VALUE) or qword ptr [rbx + VALUE], r14
#define OR_R14_TO_PTR_RCX_(VALUE) or qword ptr [rcx + VALUE], r14
#define OR_R14_TO_PTR_RDX_(VALUE) or qword ptr [rdx + VALUE], r14
#define OR_R14_TO_PTR_RDI_(VALUE) or qword ptr [rdi + VALUE], r14
#define OR_R14_TO_PTR_RSI_(VALUE) or qword ptr [rsi + VALUE], r14
#define OR_R14_TO_PTR_RBP_(VALUE) or qword ptr [rbp + VALUE], r14
#define OR_R14_TO_PTR_RSP_(VALUE) or qword ptr [rsp + VALUE], r14
#define OR_R14_TO_PTR_R8_(VALUE) or qword ptr [r8 + VALUE], r14
#define OR_R14_TO_PTR_R9_(VALUE) or qword ptr [r9 + VALUE], r14
#define OR_R14_TO_PTR_R10_(VALUE) or qword ptr [r10 + VALUE], r14
#define OR_R14_TO_PTR_R11_(VALUE) or qword ptr [r11 + VALUE], r14
#define OR_R14_TO_PTR_R12_(VALUE) or qword ptr [r12 + VALUE], r14
#define OR_R14_TO_PTR_R13_(VALUE) or qword ptr [r13 + VALUE], r14
#define OR_R14_TO_PTR_R14_(VALUE) or qword ptr [r14 + VALUE], r14
#define OR_R14_TO_PTR_R15_(VALUE) or qword ptr [r15 + VALUE], r14
#define OR_R14_TO_PTR_EAX_(VALUE) or qword ptr [eax + VALUE], r14
#define OR_R14_TO_PTR_EBX_(VALUE) or qword ptr [ebx + VALUE], r14
#define OR_R14_TO_PTR_ECX_(VALUE) or qword ptr [ecx + VALUE], r14
#define OR_R14_TO_PTR_EDX_(VALUE) or qword ptr [edx + VALUE], r14
#define OR_R14_TO_PTR_EDI_(VALUE) or qword ptr [edi + VALUE], r14
#define OR_R14_TO_PTR_ESI_(VALUE) or qword ptr [esi + VALUE], r14
#define OR_R14_TO_PTR_EBP_(VALUE) or qword ptr [ebp + VALUE], r14
#define OR_R14_TO_PTR_ESP_(VALUE) or qword ptr [esp + VALUE], r14

#define OR_R15_TO_PTR_RAX_(VALUE) or qword ptr [rax + VALUE], r15
#define OR_R15_TO_PTR_RBX_(VALUE) or qword ptr [rbx + VALUE], r15
#define OR_R15_TO_PTR_RCX_(VALUE) or qword ptr [rcx + VALUE], r15
#define OR_R15_TO_PTR_RDX_(VALUE) or qword ptr [rdx + VALUE], r15
#define OR_R15_TO_PTR_RDI_(VALUE) or qword ptr [rdi + VALUE], r15
#define OR_R15_TO_PTR_RSI_(VALUE) or qword ptr [rsi + VALUE], r15
#define OR_R15_TO_PTR_RBP_(VALUE) or qword ptr [rbp + VALUE], r15
#define OR_R15_TO_PTR_RSP_(VALUE) or qword ptr [rsp + VALUE], r15
#define OR_R15_TO_PTR_R8_(VALUE) or qword ptr [r8 + VALUE], r15
#define OR_R15_TO_PTR_R9_(VALUE) or qword ptr [r9 + VALUE], r15
#define OR_R15_TO_PTR_R10_(VALUE) or qword ptr [r10 + VALUE], r15
#define OR_R15_TO_PTR_R11_(VALUE) or qword ptr [r11 + VALUE], r15
#define OR_R15_TO_PTR_R12_(VALUE) or qword ptr [r12 + VALUE], r15
#define OR_R15_TO_PTR_R13_(VALUE) or qword ptr [r13 + VALUE], r15
#define OR_R15_TO_PTR_R14_(VALUE) or qword ptr [r14 + VALUE], r15
#define OR_R15_TO_PTR_R15_(VALUE) or qword ptr [r15 + VALUE], r15
#define OR_R15_TO_PTR_EAX_(VALUE) or qword ptr [eax + VALUE], r15
#define OR_R15_TO_PTR_EBX_(VALUE) or qword ptr [ebx + VALUE], r15
#define OR_R15_TO_PTR_ECX_(VALUE) or qword ptr [ecx + VALUE], r15
#define OR_R15_TO_PTR_EDX_(VALUE) or qword ptr [edx + VALUE], r15
#define OR_R15_TO_PTR_EDI_(VALUE) or qword ptr [edi + VALUE], r15
#define OR_R15_TO_PTR_ESI_(VALUE) or qword ptr [esi + VALUE], r15
#define OR_R15_TO_PTR_EBP_(VALUE) or qword ptr [ebp + VALUE], r15
#define OR_R15_TO_PTR_ESP_(VALUE) or qword ptr [esp + VALUE], r15
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
