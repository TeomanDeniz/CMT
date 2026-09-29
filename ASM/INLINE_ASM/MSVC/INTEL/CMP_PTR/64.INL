#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************* [v] 64-BIT MEMORY [v] ************************** */
#define CMP_RAX_FROM_PTR_(VALUE) cmp rax, qword ptr [VALUE]
#define CMP_RBX_FROM_PTR_(VALUE) cmp rbx, qword ptr [VALUE]
#define CMP_RCX_FROM_PTR_(VALUE) cmp rcx, qword ptr [VALUE]
#define CMP_RDX_FROM_PTR_(VALUE) cmp rdx, qword ptr [VALUE]
#define CMP_RDI_FROM_PTR_(VALUE) cmp rdi, qword ptr [VALUE]
#define CMP_RSI_FROM_PTR_(VALUE) cmp rsi, qword ptr [VALUE]
#define CMP_RBP_FROM_PTR_(VALUE) cmp rbp, qword ptr [VALUE]
#define CMP_RSP_FROM_PTR_(VALUE) cmp rsp, qword ptr [VALUE]
#define CMP_R8_FROM_PTR_(VALUE) cmp r8, qword ptr [VALUE]
#define CMP_R9_FROM_PTR_(VALUE) cmp r9, qword ptr [VALUE]
#define CMP_R10_FROM_PTR_(VALUE) cmp r10, qword ptr [VALUE]
#define CMP_R11_FROM_PTR_(VALUE) cmp r11, qword ptr [VALUE]
#define CMP_R12_FROM_PTR_(VALUE) cmp r12, qword ptr [VALUE]
#define CMP_R13_FROM_PTR_(VALUE) cmp r13, qword ptr [VALUE]
#define CMP_R14_FROM_PTR_(VALUE) cmp r14, qword ptr [VALUE]
#define CMP_R15_FROM_PTR_(VALUE) cmp r15, qword ptr [VALUE]

#define CMP_RAX_TO_PTR_(VALUE) cmp qword ptr [VALUE], rax
#define CMP_RBX_TO_PTR_(VALUE) cmp qword ptr [VALUE], rbx
#define CMP_RCX_TO_PTR_(VALUE) cmp qword ptr [VALUE], rcx
#define CMP_RDX_TO_PTR_(VALUE) cmp qword ptr [VALUE], rdx
#define CMP_RDI_TO_PTR_(VALUE) cmp qword ptr [VALUE], rdi
#define CMP_RSI_TO_PTR_(VALUE) cmp qword ptr [VALUE], rsi
#define CMP_RBP_TO_PTR_(VALUE) cmp qword ptr [VALUE], rbp
#define CMP_RSP_TO_PTR_(VALUE) cmp qword ptr [VALUE], rsp
#define CMP_R8_TO_PTR_(VALUE) cmp qword ptr [VALUE], r8
#define CMP_R9_TO_PTR_(VALUE) cmp qword ptr [VALUE], r9
#define CMP_R10_TO_PTR_(VALUE) cmp qword ptr [VALUE], r10
#define CMP_R11_TO_PTR_(VALUE) cmp qword ptr [VALUE], r11
#define CMP_R12_TO_PTR_(VALUE) cmp qword ptr [VALUE], r12
#define CMP_R13_TO_PTR_(VALUE) cmp qword ptr [VALUE], r13
#define CMP_R14_TO_PTR_(VALUE) cmp qword ptr [VALUE], r14
#define CMP_R15_TO_PTR_(VALUE) cmp qword ptr [VALUE], r15

#define CMP_RAX_FROM_PTR_RAX cmp rax, qword ptr [rax]
#define CMP_RAX_FROM_PTR_RBX cmp rax, qword ptr [rbx]
#define CMP_RAX_FROM_PTR_RCX cmp rax, qword ptr [rcx]
#define CMP_RAX_FROM_PTR_RDX cmp rax, qword ptr [rdx]
#define CMP_RAX_FROM_PTR_RDI cmp rax, qword ptr [rdi]
#define CMP_RAX_FROM_PTR_RSI cmp rax, qword ptr [rsi]
#define CMP_RAX_FROM_PTR_RBP cmp rax, qword ptr [rbp]
#define CMP_RAX_FROM_PTR_RSP cmp rax, qword ptr [rsp]
#define CMP_RAX_FROM_PTR_R8 cmp rax, qword ptr [r8]
#define CMP_RAX_FROM_PTR_R9 cmp rax, qword ptr [r9]
#define CMP_RAX_FROM_PTR_R10 cmp rax, qword ptr [r10]
#define CMP_RAX_FROM_PTR_R11 cmp rax, qword ptr [r11]
#define CMP_RAX_FROM_PTR_R12 cmp rax, qword ptr [r12]
#define CMP_RAX_FROM_PTR_R13 cmp rax, qword ptr [r13]
#define CMP_RAX_FROM_PTR_R14 cmp rax, qword ptr [r14]
#define CMP_RAX_FROM_PTR_R15 cmp rax, qword ptr [r15]
#define CMP_RAX_FROM_PTR_EAX cmp rax, qword ptr [eax]
#define CMP_RAX_FROM_PTR_EBX cmp rax, qword ptr [ebx]
#define CMP_RAX_FROM_PTR_ECX cmp rax, qword ptr [ecx]
#define CMP_RAX_FROM_PTR_EDX cmp rax, qword ptr [edx]
#define CMP_RAX_FROM_PTR_EDI cmp rax, qword ptr [edi]
#define CMP_RAX_FROM_PTR_ESI cmp rax, qword ptr [esi]
#define CMP_RAX_FROM_PTR_EBP cmp rax, qword ptr [ebp]
#define CMP_RAX_FROM_PTR_ESP cmp rax, qword ptr [esp]

#define CMP_RBX_FROM_PTR_RAX cmp rbx, qword ptr [rax]
#define CMP_RBX_FROM_PTR_RBX cmp rbx, qword ptr [rbx]
#define CMP_RBX_FROM_PTR_RCX cmp rbx, qword ptr [rcx]
#define CMP_RBX_FROM_PTR_RDX cmp rbx, qword ptr [rdx]
#define CMP_RBX_FROM_PTR_RDI cmp rbx, qword ptr [rdi]
#define CMP_RBX_FROM_PTR_RSI cmp rbx, qword ptr [rsi]
#define CMP_RBX_FROM_PTR_RBP cmp rbx, qword ptr [rbp]
#define CMP_RBX_FROM_PTR_RSP cmp rbx, qword ptr [rsp]
#define CMP_RBX_FROM_PTR_R8 cmp rbx, qword ptr [r8]
#define CMP_RBX_FROM_PTR_R9 cmp rbx, qword ptr [r9]
#define CMP_RBX_FROM_PTR_R10 cmp rbx, qword ptr [r10]
#define CMP_RBX_FROM_PTR_R11 cmp rbx, qword ptr [r11]
#define CMP_RBX_FROM_PTR_R12 cmp rbx, qword ptr [r12]
#define CMP_RBX_FROM_PTR_R13 cmp rbx, qword ptr [r13]
#define CMP_RBX_FROM_PTR_R14 cmp rbx, qword ptr [r14]
#define CMP_RBX_FROM_PTR_R15 cmp rbx, qword ptr [r15]
#define CMP_RBX_FROM_PTR_EAX cmp rbx, qword ptr [eax]
#define CMP_RBX_FROM_PTR_EBX cmp rbx, qword ptr [ebx]
#define CMP_RBX_FROM_PTR_ECX cmp rbx, qword ptr [ecx]
#define CMP_RBX_FROM_PTR_EDX cmp rbx, qword ptr [edx]
#define CMP_RBX_FROM_PTR_EDI cmp rbx, qword ptr [edi]
#define CMP_RBX_FROM_PTR_ESI cmp rbx, qword ptr [esi]
#define CMP_RBX_FROM_PTR_EBP cmp rbx, qword ptr [ebp]
#define CMP_RBX_FROM_PTR_ESP cmp rbx, qword ptr [esp]

#define CMP_RCX_FROM_PTR_RAX cmp rcx, qword ptr [rax]
#define CMP_RCX_FROM_PTR_RBX cmp rcx, qword ptr [rbx]
#define CMP_RCX_FROM_PTR_RCX cmp rcx, qword ptr [rcx]
#define CMP_RCX_FROM_PTR_RDX cmp rcx, qword ptr [rdx]
#define CMP_RCX_FROM_PTR_RDI cmp rcx, qword ptr [rdi]
#define CMP_RCX_FROM_PTR_RSI cmp rcx, qword ptr [rsi]
#define CMP_RCX_FROM_PTR_RBP cmp rcx, qword ptr [rbp]
#define CMP_RCX_FROM_PTR_RSP cmp rcx, qword ptr [rsp]
#define CMP_RCX_FROM_PTR_R8 cmp rcx, qword ptr [r8]
#define CMP_RCX_FROM_PTR_R9 cmp rcx, qword ptr [r9]
#define CMP_RCX_FROM_PTR_R10 cmp rcx, qword ptr [r10]
#define CMP_RCX_FROM_PTR_R11 cmp rcx, qword ptr [r11]
#define CMP_RCX_FROM_PTR_R12 cmp rcx, qword ptr [r12]
#define CMP_RCX_FROM_PTR_R13 cmp rcx, qword ptr [r13]
#define CMP_RCX_FROM_PTR_R14 cmp rcx, qword ptr [r14]
#define CMP_RCX_FROM_PTR_R15 cmp rcx, qword ptr [r15]
#define CMP_RCX_FROM_PTR_EAX cmp rcx, qword ptr [eax]
#define CMP_RCX_FROM_PTR_EBX cmp rcx, qword ptr [ebx]
#define CMP_RCX_FROM_PTR_ECX cmp rcx, qword ptr [ecx]
#define CMP_RCX_FROM_PTR_EDX cmp rcx, qword ptr [edx]
#define CMP_RCX_FROM_PTR_EDI cmp rcx, qword ptr [edi]
#define CMP_RCX_FROM_PTR_ESI cmp rcx, qword ptr [esi]
#define CMP_RCX_FROM_PTR_EBP cmp rcx, qword ptr [ebp]
#define CMP_RCX_FROM_PTR_ESP cmp rcx, qword ptr [esp]

#define CMP_RDX_FROM_PTR_RAX cmp rdx, qword ptr [rax]
#define CMP_RDX_FROM_PTR_RBX cmp rdx, qword ptr [rbx]
#define CMP_RDX_FROM_PTR_RCX cmp rdx, qword ptr [rcx]
#define CMP_RDX_FROM_PTR_RDX cmp rdx, qword ptr [rdx]
#define CMP_RDX_FROM_PTR_RDI cmp rdx, qword ptr [rdi]
#define CMP_RDX_FROM_PTR_RSI cmp rdx, qword ptr [rsi]
#define CMP_RDX_FROM_PTR_RBP cmp rdx, qword ptr [rbp]
#define CMP_RDX_FROM_PTR_RSP cmp rdx, qword ptr [rsp]
#define CMP_RDX_FROM_PTR_R8 cmp rdx, qword ptr [r8]
#define CMP_RDX_FROM_PTR_R9 cmp rdx, qword ptr [r9]
#define CMP_RDX_FROM_PTR_R10 cmp rdx, qword ptr [r10]
#define CMP_RDX_FROM_PTR_R11 cmp rdx, qword ptr [r11]
#define CMP_RDX_FROM_PTR_R12 cmp rdx, qword ptr [r12]
#define CMP_RDX_FROM_PTR_R13 cmp rdx, qword ptr [r13]
#define CMP_RDX_FROM_PTR_R14 cmp rdx, qword ptr [r14]
#define CMP_RDX_FROM_PTR_R15 cmp rdx, qword ptr [r15]
#define CMP_RDX_FROM_PTR_EAX cmp rdx, qword ptr [eax]
#define CMP_RDX_FROM_PTR_EBX cmp rdx, qword ptr [ebx]
#define CMP_RDX_FROM_PTR_ECX cmp rdx, qword ptr [ecx]
#define CMP_RDX_FROM_PTR_EDX cmp rdx, qword ptr [edx]
#define CMP_RDX_FROM_PTR_EDI cmp rdx, qword ptr [edi]
#define CMP_RDX_FROM_PTR_ESI cmp rdx, qword ptr [esi]
#define CMP_RDX_FROM_PTR_EBP cmp rdx, qword ptr [ebp]
#define CMP_RDX_FROM_PTR_ESP cmp rdx, qword ptr [esp]

#define CMP_RDI_FROM_PTR_RAX cmp rdi, qword ptr [rax]
#define CMP_RDI_FROM_PTR_RBX cmp rdi, qword ptr [rbx]
#define CMP_RDI_FROM_PTR_RCX cmp rdi, qword ptr [rcx]
#define CMP_RDI_FROM_PTR_RDX cmp rdi, qword ptr [rdx]
#define CMP_RDI_FROM_PTR_RDI cmp rdi, qword ptr [rdi]
#define CMP_RDI_FROM_PTR_RSI cmp rdi, qword ptr [rsi]
#define CMP_RDI_FROM_PTR_RBP cmp rdi, qword ptr [rbp]
#define CMP_RDI_FROM_PTR_RSP cmp rdi, qword ptr [rsp]
#define CMP_RDI_FROM_PTR_R8 cmp rdi, qword ptr [r8]
#define CMP_RDI_FROM_PTR_R9 cmp rdi, qword ptr [r9]
#define CMP_RDI_FROM_PTR_R10 cmp rdi, qword ptr [r10]
#define CMP_RDI_FROM_PTR_R11 cmp rdi, qword ptr [r11]
#define CMP_RDI_FROM_PTR_R12 cmp rdi, qword ptr [r12]
#define CMP_RDI_FROM_PTR_R13 cmp rdi, qword ptr [r13]
#define CMP_RDI_FROM_PTR_R14 cmp rdi, qword ptr [r14]
#define CMP_RDI_FROM_PTR_R15 cmp rdi, qword ptr [r15]
#define CMP_RDI_FROM_PTR_EAX cmp rdi, qword ptr [eax]
#define CMP_RDI_FROM_PTR_EBX cmp rdi, qword ptr [ebx]
#define CMP_RDI_FROM_PTR_ECX cmp rdi, qword ptr [ecx]
#define CMP_RDI_FROM_PTR_EDX cmp rdi, qword ptr [edx]
#define CMP_RDI_FROM_PTR_EDI cmp rdi, qword ptr [edi]
#define CMP_RDI_FROM_PTR_ESI cmp rdi, qword ptr [esi]
#define CMP_RDI_FROM_PTR_EBP cmp rdi, qword ptr [ebp]
#define CMP_RDI_FROM_PTR_ESP cmp rdi, qword ptr [esp]

#define CMP_RSI_FROM_PTR_RAX cmp rsi, qword ptr [rax]
#define CMP_RSI_FROM_PTR_RBX cmp rsi, qword ptr [rbx]
#define CMP_RSI_FROM_PTR_RCX cmp rsi, qword ptr [rcx]
#define CMP_RSI_FROM_PTR_RDX cmp rsi, qword ptr [rdx]
#define CMP_RSI_FROM_PTR_RDI cmp rsi, qword ptr [rdi]
#define CMP_RSI_FROM_PTR_RSI cmp rsi, qword ptr [rsi]
#define CMP_RSI_FROM_PTR_RBP cmp rsi, qword ptr [rbp]
#define CMP_RSI_FROM_PTR_RSP cmp rsi, qword ptr [rsp]
#define CMP_RSI_FROM_PTR_R8 cmp rsi, qword ptr [r8]
#define CMP_RSI_FROM_PTR_R9 cmp rsi, qword ptr [r9]
#define CMP_RSI_FROM_PTR_R10 cmp rsi, qword ptr [r10]
#define CMP_RSI_FROM_PTR_R11 cmp rsi, qword ptr [r11]
#define CMP_RSI_FROM_PTR_R12 cmp rsi, qword ptr [r12]
#define CMP_RSI_FROM_PTR_R13 cmp rsi, qword ptr [r13]
#define CMP_RSI_FROM_PTR_R14 cmp rsi, qword ptr [r14]
#define CMP_RSI_FROM_PTR_R15 cmp rsi, qword ptr [r15]
#define CMP_RSI_FROM_PTR_EAX cmp rsi, qword ptr [eax]
#define CMP_RSI_FROM_PTR_EBX cmp rsi, qword ptr [ebx]
#define CMP_RSI_FROM_PTR_ECX cmp rsi, qword ptr [ecx]
#define CMP_RSI_FROM_PTR_EDX cmp rsi, qword ptr [edx]
#define CMP_RSI_FROM_PTR_EDI cmp rsi, qword ptr [edi]
#define CMP_RSI_FROM_PTR_ESI cmp rsi, qword ptr [esi]
#define CMP_RSI_FROM_PTR_EBP cmp rsi, qword ptr [ebp]
#define CMP_RSI_FROM_PTR_ESP cmp rsi, qword ptr [esp]

#define CMP_RBP_FROM_PTR_RAX cmp rbp, qword ptr [rax]
#define CMP_RBP_FROM_PTR_RBX cmp rbp, qword ptr [rbx]
#define CMP_RBP_FROM_PTR_RCX cmp rbp, qword ptr [rcx]
#define CMP_RBP_FROM_PTR_RDX cmp rbp, qword ptr [rdx]
#define CMP_RBP_FROM_PTR_RDI cmp rbp, qword ptr [rdi]
#define CMP_RBP_FROM_PTR_RSI cmp rbp, qword ptr [rsi]
#define CMP_RBP_FROM_PTR_RBP cmp rbp, qword ptr [rbp]
#define CMP_RBP_FROM_PTR_RSP cmp rbp, qword ptr [rsp]
#define CMP_RBP_FROM_PTR_R8 cmp rbp, qword ptr [r8]
#define CMP_RBP_FROM_PTR_R9 cmp rbp, qword ptr [r9]
#define CMP_RBP_FROM_PTR_R10 cmp rbp, qword ptr [r10]
#define CMP_RBP_FROM_PTR_R11 cmp rbp, qword ptr [r11]
#define CMP_RBP_FROM_PTR_R12 cmp rbp, qword ptr [r12]
#define CMP_RBP_FROM_PTR_R13 cmp rbp, qword ptr [r13]
#define CMP_RBP_FROM_PTR_R14 cmp rbp, qword ptr [r14]
#define CMP_RBP_FROM_PTR_R15 cmp rbp, qword ptr [r15]
#define CMP_RBP_FROM_PTR_EAX cmp rbp, qword ptr [eax]
#define CMP_RBP_FROM_PTR_EBX cmp rbp, qword ptr [ebx]
#define CMP_RBP_FROM_PTR_ECX cmp rbp, qword ptr [ecx]
#define CMP_RBP_FROM_PTR_EDX cmp rbp, qword ptr [edx]
#define CMP_RBP_FROM_PTR_EDI cmp rbp, qword ptr [edi]
#define CMP_RBP_FROM_PTR_ESI cmp rbp, qword ptr [esi]
#define CMP_RBP_FROM_PTR_EBP cmp rbp, qword ptr [ebp]
#define CMP_RBP_FROM_PTR_ESP cmp rbp, qword ptr [esp]

#define CMP_RSP_FROM_PTR_RAX cmp rsp, qword ptr [rax]
#define CMP_RSP_FROM_PTR_RBX cmp rsp, qword ptr [rbx]
#define CMP_RSP_FROM_PTR_RCX cmp rsp, qword ptr [rcx]
#define CMP_RSP_FROM_PTR_RDX cmp rsp, qword ptr [rdx]
#define CMP_RSP_FROM_PTR_RDI cmp rsp, qword ptr [rdi]
#define CMP_RSP_FROM_PTR_RSI cmp rsp, qword ptr [rsi]
#define CMP_RSP_FROM_PTR_RBP cmp rsp, qword ptr [rbp]
#define CMP_RSP_FROM_PTR_RSP cmp rsp, qword ptr [rsp]
#define CMP_RSP_FROM_PTR_R8 cmp rsp, qword ptr [r8]
#define CMP_RSP_FROM_PTR_R9 cmp rsp, qword ptr [r9]
#define CMP_RSP_FROM_PTR_R10 cmp rsp, qword ptr [r10]
#define CMP_RSP_FROM_PTR_R11 cmp rsp, qword ptr [r11]
#define CMP_RSP_FROM_PTR_R12 cmp rsp, qword ptr [r12]
#define CMP_RSP_FROM_PTR_R13 cmp rsp, qword ptr [r13]
#define CMP_RSP_FROM_PTR_R14 cmp rsp, qword ptr [r14]
#define CMP_RSP_FROM_PTR_R15 cmp rsp, qword ptr [r15]
#define CMP_RSP_FROM_PTR_EAX cmp rsp, qword ptr [eax]
#define CMP_RSP_FROM_PTR_EBX cmp rsp, qword ptr [ebx]
#define CMP_RSP_FROM_PTR_ECX cmp rsp, qword ptr [ecx]
#define CMP_RSP_FROM_PTR_EDX cmp rsp, qword ptr [edx]
#define CMP_RSP_FROM_PTR_EDI cmp rsp, qword ptr [edi]
#define CMP_RSP_FROM_PTR_ESI cmp rsp, qword ptr [esi]
#define CMP_RSP_FROM_PTR_EBP cmp rsp, qword ptr [ebp]
#define CMP_RSP_FROM_PTR_ESP cmp rsp, qword ptr [esp]

#define CMP_R8_FROM_PTR_RAX cmp r8, qword ptr [rax]
#define CMP_R8_FROM_PTR_RBX cmp r8, qword ptr [rbx]
#define CMP_R8_FROM_PTR_RCX cmp r8, qword ptr [rcx]
#define CMP_R8_FROM_PTR_RDX cmp r8, qword ptr [rdx]
#define CMP_R8_FROM_PTR_RDI cmp r8, qword ptr [rdi]
#define CMP_R8_FROM_PTR_RSI cmp r8, qword ptr [rsi]
#define CMP_R8_FROM_PTR_RBP cmp r8, qword ptr [rbp]
#define CMP_R8_FROM_PTR_RSP cmp r8, qword ptr [rsp]
#define CMP_R8_FROM_PTR_R8 cmp r8, qword ptr [r8]
#define CMP_R8_FROM_PTR_R9 cmp r8, qword ptr [r9]
#define CMP_R8_FROM_PTR_R10 cmp r8, qword ptr [r10]
#define CMP_R8_FROM_PTR_R11 cmp r8, qword ptr [r11]
#define CMP_R8_FROM_PTR_R12 cmp r8, qword ptr [r12]
#define CMP_R8_FROM_PTR_R13 cmp r8, qword ptr [r13]
#define CMP_R8_FROM_PTR_R14 cmp r8, qword ptr [r14]
#define CMP_R8_FROM_PTR_R15 cmp r8, qword ptr [r15]
#define CMP_R8_FROM_PTR_EAX cmp r8, qword ptr [eax]
#define CMP_R8_FROM_PTR_EBX cmp r8, qword ptr [ebx]
#define CMP_R8_FROM_PTR_ECX cmp r8, qword ptr [ecx]
#define CMP_R8_FROM_PTR_EDX cmp r8, qword ptr [edx]
#define CMP_R8_FROM_PTR_EDI cmp r8, qword ptr [edi]
#define CMP_R8_FROM_PTR_ESI cmp r8, qword ptr [esi]
#define CMP_R8_FROM_PTR_EBP cmp r8, qword ptr [ebp]
#define CMP_R8_FROM_PTR_ESP cmp r8, qword ptr [esp]

#define CMP_R9_FROM_PTR_RAX cmp r9, qword ptr [rax]
#define CMP_R9_FROM_PTR_RBX cmp r9, qword ptr [rbx]
#define CMP_R9_FROM_PTR_RCX cmp r9, qword ptr [rcx]
#define CMP_R9_FROM_PTR_RDX cmp r9, qword ptr [rdx]
#define CMP_R9_FROM_PTR_RDI cmp r9, qword ptr [rdi]
#define CMP_R9_FROM_PTR_RSI cmp r9, qword ptr [rsi]
#define CMP_R9_FROM_PTR_RBP cmp r9, qword ptr [rbp]
#define CMP_R9_FROM_PTR_RSP cmp r9, qword ptr [rsp]
#define CMP_R9_FROM_PTR_R8 cmp r9, qword ptr [r8]
#define CMP_R9_FROM_PTR_R9 cmp r9, qword ptr [r9]
#define CMP_R9_FROM_PTR_R10 cmp r9, qword ptr [r10]
#define CMP_R9_FROM_PTR_R11 cmp r9, qword ptr [r11]
#define CMP_R9_FROM_PTR_R12 cmp r9, qword ptr [r12]
#define CMP_R9_FROM_PTR_R13 cmp r9, qword ptr [r13]
#define CMP_R9_FROM_PTR_R14 cmp r9, qword ptr [r14]
#define CMP_R9_FROM_PTR_R15 cmp r9, qword ptr [r15]
#define CMP_R9_FROM_PTR_EAX cmp r9, qword ptr [eax]
#define CMP_R9_FROM_PTR_EBX cmp r9, qword ptr [ebx]
#define CMP_R9_FROM_PTR_ECX cmp r9, qword ptr [ecx]
#define CMP_R9_FROM_PTR_EDX cmp r9, qword ptr [edx]
#define CMP_R9_FROM_PTR_EDI cmp r9, qword ptr [edi]
#define CMP_R9_FROM_PTR_ESI cmp r9, qword ptr [esi]
#define CMP_R9_FROM_PTR_EBP cmp r9, qword ptr [ebp]
#define CMP_R9_FROM_PTR_ESP cmp r9, qword ptr [esp]

#define CMP_R10_FROM_PTR_RAX cmp r10, qword ptr [rax]
#define CMP_R10_FROM_PTR_RBX cmp r10, qword ptr [rbx]
#define CMP_R10_FROM_PTR_RCX cmp r10, qword ptr [rcx]
#define CMP_R10_FROM_PTR_RDX cmp r10, qword ptr [rdx]
#define CMP_R10_FROM_PTR_RDI cmp r10, qword ptr [rdi]
#define CMP_R10_FROM_PTR_RSI cmp r10, qword ptr [rsi]
#define CMP_R10_FROM_PTR_RBP cmp r10, qword ptr [rbp]
#define CMP_R10_FROM_PTR_RSP cmp r10, qword ptr [rsp]
#define CMP_R10_FROM_PTR_R8 cmp r10, qword ptr [r8]
#define CMP_R10_FROM_PTR_R9 cmp r10, qword ptr [r9]
#define CMP_R10_FROM_PTR_R10 cmp r10, qword ptr [r10]
#define CMP_R10_FROM_PTR_R11 cmp r10, qword ptr [r11]
#define CMP_R10_FROM_PTR_R12 cmp r10, qword ptr [r12]
#define CMP_R10_FROM_PTR_R13 cmp r10, qword ptr [r13]
#define CMP_R10_FROM_PTR_R14 cmp r10, qword ptr [r14]
#define CMP_R10_FROM_PTR_R15 cmp r10, qword ptr [r15]
#define CMP_R10_FROM_PTR_EAX cmp r10, qword ptr [eax]
#define CMP_R10_FROM_PTR_EBX cmp r10, qword ptr [ebx]
#define CMP_R10_FROM_PTR_ECX cmp r10, qword ptr [ecx]
#define CMP_R10_FROM_PTR_EDX cmp r10, qword ptr [edx]
#define CMP_R10_FROM_PTR_EDI cmp r10, qword ptr [edi]
#define CMP_R10_FROM_PTR_ESI cmp r10, qword ptr [esi]
#define CMP_R10_FROM_PTR_EBP cmp r10, qword ptr [ebp]
#define CMP_R10_FROM_PTR_ESP cmp r10, qword ptr [esp]

#define CMP_R11_FROM_PTR_RAX cmp r11, qword ptr [rax]
#define CMP_R11_FROM_PTR_RBX cmp r11, qword ptr [rbx]
#define CMP_R11_FROM_PTR_RCX cmp r11, qword ptr [rcx]
#define CMP_R11_FROM_PTR_RDX cmp r11, qword ptr [rdx]
#define CMP_R11_FROM_PTR_RDI cmp r11, qword ptr [rdi]
#define CMP_R11_FROM_PTR_RSI cmp r11, qword ptr [rsi]
#define CMP_R11_FROM_PTR_RBP cmp r11, qword ptr [rbp]
#define CMP_R11_FROM_PTR_RSP cmp r11, qword ptr [rsp]
#define CMP_R11_FROM_PTR_R8 cmp r11, qword ptr [r8]
#define CMP_R11_FROM_PTR_R9 cmp r11, qword ptr [r9]
#define CMP_R11_FROM_PTR_R10 cmp r11, qword ptr [r10]
#define CMP_R11_FROM_PTR_R11 cmp r11, qword ptr [r11]
#define CMP_R11_FROM_PTR_R12 cmp r11, qword ptr [r12]
#define CMP_R11_FROM_PTR_R13 cmp r11, qword ptr [r13]
#define CMP_R11_FROM_PTR_R14 cmp r11, qword ptr [r14]
#define CMP_R11_FROM_PTR_R15 cmp r11, qword ptr [r15]
#define CMP_R11_FROM_PTR_EAX cmp r11, qword ptr [eax]
#define CMP_R11_FROM_PTR_EBX cmp r11, qword ptr [ebx]
#define CMP_R11_FROM_PTR_ECX cmp r11, qword ptr [ecx]
#define CMP_R11_FROM_PTR_EDX cmp r11, qword ptr [edx]
#define CMP_R11_FROM_PTR_EDI cmp r11, qword ptr [edi]
#define CMP_R11_FROM_PTR_ESI cmp r11, qword ptr [esi]
#define CMP_R11_FROM_PTR_EBP cmp r11, qword ptr [ebp]
#define CMP_R11_FROM_PTR_ESP cmp r11, qword ptr [esp]

#define CMP_R12_FROM_PTR_RAX cmp r12, qword ptr [rax]
#define CMP_R12_FROM_PTR_RBX cmp r12, qword ptr [rbx]
#define CMP_R12_FROM_PTR_RCX cmp r12, qword ptr [rcx]
#define CMP_R12_FROM_PTR_RDX cmp r12, qword ptr [rdx]
#define CMP_R12_FROM_PTR_RDI cmp r12, qword ptr [rdi]
#define CMP_R12_FROM_PTR_RSI cmp r12, qword ptr [rsi]
#define CMP_R12_FROM_PTR_RBP cmp r12, qword ptr [rbp]
#define CMP_R12_FROM_PTR_RSP cmp r12, qword ptr [rsp]
#define CMP_R12_FROM_PTR_R8 cmp r12, qword ptr [r8]
#define CMP_R12_FROM_PTR_R9 cmp r12, qword ptr [r9]
#define CMP_R12_FROM_PTR_R10 cmp r12, qword ptr [r10]
#define CMP_R12_FROM_PTR_R11 cmp r12, qword ptr [r11]
#define CMP_R12_FROM_PTR_R12 cmp r12, qword ptr [r12]
#define CMP_R12_FROM_PTR_R13 cmp r12, qword ptr [r13]
#define CMP_R12_FROM_PTR_R14 cmp r12, qword ptr [r14]
#define CMP_R12_FROM_PTR_R15 cmp r12, qword ptr [r15]
#define CMP_R12_FROM_PTR_EAX cmp r12, qword ptr [eax]
#define CMP_R12_FROM_PTR_EBX cmp r12, qword ptr [ebx]
#define CMP_R12_FROM_PTR_ECX cmp r12, qword ptr [ecx]
#define CMP_R12_FROM_PTR_EDX cmp r12, qword ptr [edx]
#define CMP_R12_FROM_PTR_EDI cmp r12, qword ptr [edi]
#define CMP_R12_FROM_PTR_ESI cmp r12, qword ptr [esi]
#define CMP_R12_FROM_PTR_EBP cmp r12, qword ptr [ebp]
#define CMP_R12_FROM_PTR_ESP cmp r12, qword ptr [esp]

#define CMP_R13_FROM_PTR_RAX cmp r13, qword ptr [rax]
#define CMP_R13_FROM_PTR_RBX cmp r13, qword ptr [rbx]
#define CMP_R13_FROM_PTR_RCX cmp r13, qword ptr [rcx]
#define CMP_R13_FROM_PTR_RDX cmp r13, qword ptr [rdx]
#define CMP_R13_FROM_PTR_RDI cmp r13, qword ptr [rdi]
#define CMP_R13_FROM_PTR_RSI cmp r13, qword ptr [rsi]
#define CMP_R13_FROM_PTR_RBP cmp r13, qword ptr [rbp]
#define CMP_R13_FROM_PTR_RSP cmp r13, qword ptr [rsp]
#define CMP_R13_FROM_PTR_R8 cmp r13, qword ptr [r8]
#define CMP_R13_FROM_PTR_R9 cmp r13, qword ptr [r9]
#define CMP_R13_FROM_PTR_R10 cmp r13, qword ptr [r10]
#define CMP_R13_FROM_PTR_R11 cmp r13, qword ptr [r11]
#define CMP_R13_FROM_PTR_R12 cmp r13, qword ptr [r12]
#define CMP_R13_FROM_PTR_R13 cmp r13, qword ptr [r13]
#define CMP_R13_FROM_PTR_R14 cmp r13, qword ptr [r14]
#define CMP_R13_FROM_PTR_R15 cmp r13, qword ptr [r15]
#define CMP_R13_FROM_PTR_EAX cmp r13, qword ptr [eax]
#define CMP_R13_FROM_PTR_EBX cmp r13, qword ptr [ebx]
#define CMP_R13_FROM_PTR_ECX cmp r13, qword ptr [ecx]
#define CMP_R13_FROM_PTR_EDX cmp r13, qword ptr [edx]
#define CMP_R13_FROM_PTR_EDI cmp r13, qword ptr [edi]
#define CMP_R13_FROM_PTR_ESI cmp r13, qword ptr [esi]
#define CMP_R13_FROM_PTR_EBP cmp r13, qword ptr [ebp]
#define CMP_R13_FROM_PTR_ESP cmp r13, qword ptr [esp]

#define CMP_R14_FROM_PTR_RAX cmp r14, qword ptr [rax]
#define CMP_R14_FROM_PTR_RBX cmp r14, qword ptr [rbx]
#define CMP_R14_FROM_PTR_RCX cmp r14, qword ptr [rcx]
#define CMP_R14_FROM_PTR_RDX cmp r14, qword ptr [rdx]
#define CMP_R14_FROM_PTR_RDI cmp r14, qword ptr [rdi]
#define CMP_R14_FROM_PTR_RSI cmp r14, qword ptr [rsi]
#define CMP_R14_FROM_PTR_RBP cmp r14, qword ptr [rbp]
#define CMP_R14_FROM_PTR_RSP cmp r14, qword ptr [rsp]
#define CMP_R14_FROM_PTR_R8 cmp r14, qword ptr [r8]
#define CMP_R14_FROM_PTR_R9 cmp r14, qword ptr [r9]
#define CMP_R14_FROM_PTR_R10 cmp r14, qword ptr [r10]
#define CMP_R14_FROM_PTR_R11 cmp r14, qword ptr [r11]
#define CMP_R14_FROM_PTR_R12 cmp r14, qword ptr [r12]
#define CMP_R14_FROM_PTR_R13 cmp r14, qword ptr [r13]
#define CMP_R14_FROM_PTR_R14 cmp r14, qword ptr [r14]
#define CMP_R14_FROM_PTR_R15 cmp r14, qword ptr [r15]
#define CMP_R14_FROM_PTR_EAX cmp r14, qword ptr [eax]
#define CMP_R14_FROM_PTR_EBX cmp r14, qword ptr [ebx]
#define CMP_R14_FROM_PTR_ECX cmp r14, qword ptr [ecx]
#define CMP_R14_FROM_PTR_EDX cmp r14, qword ptr [edx]
#define CMP_R14_FROM_PTR_EDI cmp r14, qword ptr [edi]
#define CMP_R14_FROM_PTR_ESI cmp r14, qword ptr [esi]
#define CMP_R14_FROM_PTR_EBP cmp r14, qword ptr [ebp]
#define CMP_R14_FROM_PTR_ESP cmp r14, qword ptr [esp]

#define CMP_R15_FROM_PTR_RAX cmp r15, qword ptr [rax]
#define CMP_R15_FROM_PTR_RBX cmp r15, qword ptr [rbx]
#define CMP_R15_FROM_PTR_RCX cmp r15, qword ptr [rcx]
#define CMP_R15_FROM_PTR_RDX cmp r15, qword ptr [rdx]
#define CMP_R15_FROM_PTR_RDI cmp r15, qword ptr [rdi]
#define CMP_R15_FROM_PTR_RSI cmp r15, qword ptr [rsi]
#define CMP_R15_FROM_PTR_RBP cmp r15, qword ptr [rbp]
#define CMP_R15_FROM_PTR_RSP cmp r15, qword ptr [rsp]
#define CMP_R15_FROM_PTR_R8 cmp r15, qword ptr [r8]
#define CMP_R15_FROM_PTR_R9 cmp r15, qword ptr [r9]
#define CMP_R15_FROM_PTR_R10 cmp r15, qword ptr [r10]
#define CMP_R15_FROM_PTR_R11 cmp r15, qword ptr [r11]
#define CMP_R15_FROM_PTR_R12 cmp r15, qword ptr [r12]
#define CMP_R15_FROM_PTR_R13 cmp r15, qword ptr [r13]
#define CMP_R15_FROM_PTR_R14 cmp r15, qword ptr [r14]
#define CMP_R15_FROM_PTR_R15 cmp r15, qword ptr [r15]
#define CMP_R15_FROM_PTR_EAX cmp r15, qword ptr [eax]
#define CMP_R15_FROM_PTR_EBX cmp r15, qword ptr [ebx]
#define CMP_R15_FROM_PTR_ECX cmp r15, qword ptr [ecx]
#define CMP_R15_FROM_PTR_EDX cmp r15, qword ptr [edx]
#define CMP_R15_FROM_PTR_EDI cmp r15, qword ptr [edi]
#define CMP_R15_FROM_PTR_ESI cmp r15, qword ptr [esi]
#define CMP_R15_FROM_PTR_EBP cmp r15, qword ptr [ebp]
#define CMP_R15_FROM_PTR_ESP cmp r15, qword ptr [esp]

#define CMP_RAX_TO_PTR_RAX cmp qword ptr [rax], rax
#define CMP_RAX_TO_PTR_RBX cmp qword ptr [rbx], rax
#define CMP_RAX_TO_PTR_RCX cmp qword ptr [rcx], rax
#define CMP_RAX_TO_PTR_RDX cmp qword ptr [rdx], rax
#define CMP_RAX_TO_PTR_RDI cmp qword ptr [rdi], rax
#define CMP_RAX_TO_PTR_RSI cmp qword ptr [rsi], rax
#define CMP_RAX_TO_PTR_RBP cmp qword ptr [rbp], rax
#define CMP_RAX_TO_PTR_RSP cmp qword ptr [rsp], rax
#define CMP_RAX_TO_PTR_R8 cmp qword ptr [r8], rax
#define CMP_RAX_TO_PTR_R9 cmp qword ptr [r9], rax
#define CMP_RAX_TO_PTR_R10 cmp qword ptr [r10], rax
#define CMP_RAX_TO_PTR_R11 cmp qword ptr [r11], rax
#define CMP_RAX_TO_PTR_R12 cmp qword ptr [r12], rax
#define CMP_RAX_TO_PTR_R13 cmp qword ptr [r13], rax
#define CMP_RAX_TO_PTR_R14 cmp qword ptr [r14], rax
#define CMP_RAX_TO_PTR_R15 cmp qword ptr [r15], rax
#define CMP_RAX_TO_PTR_EAX cmp qword ptr [eax], rax
#define CMP_RAX_TO_PTR_EBX cmp qword ptr [ebx], rax
#define CMP_RAX_TO_PTR_ECX cmp qword ptr [ecx], rax
#define CMP_RAX_TO_PTR_EDX cmp qword ptr [edx], rax
#define CMP_RAX_TO_PTR_EDI cmp qword ptr [edi], rax
#define CMP_RAX_TO_PTR_ESI cmp qword ptr [esi], rax
#define CMP_RAX_TO_PTR_EBP cmp qword ptr [ebp], rax
#define CMP_RAX_TO_PTR_ESP cmp qword ptr [esp], rax

#define CMP_RBX_TO_PTR_RAX cmp qword ptr [rax], rbx
#define CMP_RBX_TO_PTR_RBX cmp qword ptr [rbx], rbx
#define CMP_RBX_TO_PTR_RCX cmp qword ptr [rcx], rbx
#define CMP_RBX_TO_PTR_RDX cmp qword ptr [rdx], rbx
#define CMP_RBX_TO_PTR_RDI cmp qword ptr [rdi], rbx
#define CMP_RBX_TO_PTR_RSI cmp qword ptr [rsi], rbx
#define CMP_RBX_TO_PTR_RBP cmp qword ptr [rbp], rbx
#define CMP_RBX_TO_PTR_RSP cmp qword ptr [rsp], rbx
#define CMP_RBX_TO_PTR_R8 cmp qword ptr [r8], rbx
#define CMP_RBX_TO_PTR_R9 cmp qword ptr [r9], rbx
#define CMP_RBX_TO_PTR_R10 cmp qword ptr [r10], rbx
#define CMP_RBX_TO_PTR_R11 cmp qword ptr [r11], rbx
#define CMP_RBX_TO_PTR_R12 cmp qword ptr [r12], rbx
#define CMP_RBX_TO_PTR_R13 cmp qword ptr [r13], rbx
#define CMP_RBX_TO_PTR_R14 cmp qword ptr [r14], rbx
#define CMP_RBX_TO_PTR_R15 cmp qword ptr [r15], rbx
#define CMP_RBX_TO_PTR_EAX cmp qword ptr [eax], rbx
#define CMP_RBX_TO_PTR_EBX cmp qword ptr [ebx], rbx
#define CMP_RBX_TO_PTR_ECX cmp qword ptr [ecx], rbx
#define CMP_RBX_TO_PTR_EDX cmp qword ptr [edx], rbx
#define CMP_RBX_TO_PTR_EDI cmp qword ptr [edi], rbx
#define CMP_RBX_TO_PTR_ESI cmp qword ptr [esi], rbx
#define CMP_RBX_TO_PTR_EBP cmp qword ptr [ebp], rbx
#define CMP_RBX_TO_PTR_ESP cmp qword ptr [esp], rbx

#define CMP_RCX_TO_PTR_RAX cmp qword ptr [rax], rcx
#define CMP_RCX_TO_PTR_RBX cmp qword ptr [rbx], rcx
#define CMP_RCX_TO_PTR_RCX cmp qword ptr [rcx], rcx
#define CMP_RCX_TO_PTR_RDX cmp qword ptr [rdx], rcx
#define CMP_RCX_TO_PTR_RDI cmp qword ptr [rdi], rcx
#define CMP_RCX_TO_PTR_RSI cmp qword ptr [rsi], rcx
#define CMP_RCX_TO_PTR_RBP cmp qword ptr [rbp], rcx
#define CMP_RCX_TO_PTR_RSP cmp qword ptr [rsp], rcx
#define CMP_RCX_TO_PTR_R8 cmp qword ptr [r8], rcx
#define CMP_RCX_TO_PTR_R9 cmp qword ptr [r9], rcx
#define CMP_RCX_TO_PTR_R10 cmp qword ptr [r10], rcx
#define CMP_RCX_TO_PTR_R11 cmp qword ptr [r11], rcx
#define CMP_RCX_TO_PTR_R12 cmp qword ptr [r12], rcx
#define CMP_RCX_TO_PTR_R13 cmp qword ptr [r13], rcx
#define CMP_RCX_TO_PTR_R14 cmp qword ptr [r14], rcx
#define CMP_RCX_TO_PTR_R15 cmp qword ptr [r15], rcx
#define CMP_RCX_TO_PTR_EAX cmp qword ptr [eax], rcx
#define CMP_RCX_TO_PTR_EBX cmp qword ptr [ebx], rcx
#define CMP_RCX_TO_PTR_ECX cmp qword ptr [ecx], rcx
#define CMP_RCX_TO_PTR_EDX cmp qword ptr [edx], rcx
#define CMP_RCX_TO_PTR_EDI cmp qword ptr [edi], rcx
#define CMP_RCX_TO_PTR_ESI cmp qword ptr [esi], rcx
#define CMP_RCX_TO_PTR_EBP cmp qword ptr [ebp], rcx
#define CMP_RCX_TO_PTR_ESP cmp qword ptr [esp], rcx

#define CMP_RDX_TO_PTR_RAX cmp qword ptr [rax], rdx
#define CMP_RDX_TO_PTR_RBX cmp qword ptr [rbx], rdx
#define CMP_RDX_TO_PTR_RCX cmp qword ptr [rcx], rdx
#define CMP_RDX_TO_PTR_RDX cmp qword ptr [rdx], rdx
#define CMP_RDX_TO_PTR_RDI cmp qword ptr [rdi], rdx
#define CMP_RDX_TO_PTR_RSI cmp qword ptr [rsi], rdx
#define CMP_RDX_TO_PTR_RBP cmp qword ptr [rbp], rdx
#define CMP_RDX_TO_PTR_RSP cmp qword ptr [rsp], rdx
#define CMP_RDX_TO_PTR_R8 cmp qword ptr [r8], rdx
#define CMP_RDX_TO_PTR_R9 cmp qword ptr [r9], rdx
#define CMP_RDX_TO_PTR_R10 cmp qword ptr [r10], rdx
#define CMP_RDX_TO_PTR_R11 cmp qword ptr [r11], rdx
#define CMP_RDX_TO_PTR_R12 cmp qword ptr [r12], rdx
#define CMP_RDX_TO_PTR_R13 cmp qword ptr [r13], rdx
#define CMP_RDX_TO_PTR_R14 cmp qword ptr [r14], rdx
#define CMP_RDX_TO_PTR_R15 cmp qword ptr [r15], rdx
#define CMP_RDX_TO_PTR_EAX cmp qword ptr [eax], rdx
#define CMP_RDX_TO_PTR_EBX cmp qword ptr [ebx], rdx
#define CMP_RDX_TO_PTR_ECX cmp qword ptr [ecx], rdx
#define CMP_RDX_TO_PTR_EDX cmp qword ptr [edx], rdx
#define CMP_RDX_TO_PTR_EDI cmp qword ptr [edi], rdx
#define CMP_RDX_TO_PTR_ESI cmp qword ptr [esi], rdx
#define CMP_RDX_TO_PTR_EBP cmp qword ptr [ebp], rdx
#define CMP_RDX_TO_PTR_ESP cmp qword ptr [esp], rdx

#define CMP_RDI_TO_PTR_RAX cmp qword ptr [rax], rdi
#define CMP_RDI_TO_PTR_RBX cmp qword ptr [rbx], rdi
#define CMP_RDI_TO_PTR_RCX cmp qword ptr [rcx], rdi
#define CMP_RDI_TO_PTR_RDX cmp qword ptr [rdx], rdi
#define CMP_RDI_TO_PTR_RDI cmp qword ptr [rdi], rdi
#define CMP_RDI_TO_PTR_RSI cmp qword ptr [rsi], rdi
#define CMP_RDI_TO_PTR_RBP cmp qword ptr [rbp], rdi
#define CMP_RDI_TO_PTR_RSP cmp qword ptr [rsp], rdi
#define CMP_RDI_TO_PTR_R8 cmp qword ptr [r8], rdi
#define CMP_RDI_TO_PTR_R9 cmp qword ptr [r9], rdi
#define CMP_RDI_TO_PTR_R10 cmp qword ptr [r10], rdi
#define CMP_RDI_TO_PTR_R11 cmp qword ptr [r11], rdi
#define CMP_RDI_TO_PTR_R12 cmp qword ptr [r12], rdi
#define CMP_RDI_TO_PTR_R13 cmp qword ptr [r13], rdi
#define CMP_RDI_TO_PTR_R14 cmp qword ptr [r14], rdi
#define CMP_RDI_TO_PTR_R15 cmp qword ptr [r15], rdi
#define CMP_RDI_TO_PTR_EAX cmp qword ptr [eax], rdi
#define CMP_RDI_TO_PTR_EBX cmp qword ptr [ebx], rdi
#define CMP_RDI_TO_PTR_ECX cmp qword ptr [ecx], rdi
#define CMP_RDI_TO_PTR_EDX cmp qword ptr [edx], rdi
#define CMP_RDI_TO_PTR_EDI cmp qword ptr [edi], rdi
#define CMP_RDI_TO_PTR_ESI cmp qword ptr [esi], rdi
#define CMP_RDI_TO_PTR_EBP cmp qword ptr [ebp], rdi
#define CMP_RDI_TO_PTR_ESP cmp qword ptr [esp], rdi

#define CMP_RSI_TO_PTR_RAX cmp qword ptr [rax], rsi
#define CMP_RSI_TO_PTR_RBX cmp qword ptr [rbx], rsi
#define CMP_RSI_TO_PTR_RCX cmp qword ptr [rcx], rsi
#define CMP_RSI_TO_PTR_RDX cmp qword ptr [rdx], rsi
#define CMP_RSI_TO_PTR_RDI cmp qword ptr [rdi], rsi
#define CMP_RSI_TO_PTR_RSI cmp qword ptr [rsi], rsi
#define CMP_RSI_TO_PTR_RBP cmp qword ptr [rbp], rsi
#define CMP_RSI_TO_PTR_RSP cmp qword ptr [rsp], rsi
#define CMP_RSI_TO_PTR_R8 cmp qword ptr [r8], rsi
#define CMP_RSI_TO_PTR_R9 cmp qword ptr [r9], rsi
#define CMP_RSI_TO_PTR_R10 cmp qword ptr [r10], rsi
#define CMP_RSI_TO_PTR_R11 cmp qword ptr [r11], rsi
#define CMP_RSI_TO_PTR_R12 cmp qword ptr [r12], rsi
#define CMP_RSI_TO_PTR_R13 cmp qword ptr [r13], rsi
#define CMP_RSI_TO_PTR_R14 cmp qword ptr [r14], rsi
#define CMP_RSI_TO_PTR_R15 cmp qword ptr [r15], rsi
#define CMP_RSI_TO_PTR_EAX cmp qword ptr [eax], rsi
#define CMP_RSI_TO_PTR_EBX cmp qword ptr [ebx], rsi
#define CMP_RSI_TO_PTR_ECX cmp qword ptr [ecx], rsi
#define CMP_RSI_TO_PTR_EDX cmp qword ptr [edx], rsi
#define CMP_RSI_TO_PTR_EDI cmp qword ptr [edi], rsi
#define CMP_RSI_TO_PTR_ESI cmp qword ptr [esi], rsi
#define CMP_RSI_TO_PTR_EBP cmp qword ptr [ebp], rsi
#define CMP_RSI_TO_PTR_ESP cmp qword ptr [esp], rsi

#define CMP_RBP_TO_PTR_RAX cmp qword ptr [rax], rbp
#define CMP_RBP_TO_PTR_RBX cmp qword ptr [rbx], rbp
#define CMP_RBP_TO_PTR_RCX cmp qword ptr [rcx], rbp
#define CMP_RBP_TO_PTR_RDX cmp qword ptr [rdx], rbp
#define CMP_RBP_TO_PTR_RDI cmp qword ptr [rdi], rbp
#define CMP_RBP_TO_PTR_RSI cmp qword ptr [rsi], rbp
#define CMP_RBP_TO_PTR_RBP cmp qword ptr [rbp], rbp
#define CMP_RBP_TO_PTR_RSP cmp qword ptr [rsp], rbp
#define CMP_RBP_TO_PTR_R8 cmp qword ptr [r8], rbp
#define CMP_RBP_TO_PTR_R9 cmp qword ptr [r9], rbp
#define CMP_RBP_TO_PTR_R10 cmp qword ptr [r10], rbp
#define CMP_RBP_TO_PTR_R11 cmp qword ptr [r11], rbp
#define CMP_RBP_TO_PTR_R12 cmp qword ptr [r12], rbp
#define CMP_RBP_TO_PTR_R13 cmp qword ptr [r13], rbp
#define CMP_RBP_TO_PTR_R14 cmp qword ptr [r14], rbp
#define CMP_RBP_TO_PTR_R15 cmp qword ptr [r15], rbp
#define CMP_RBP_TO_PTR_EAX cmp qword ptr [eax], rbp
#define CMP_RBP_TO_PTR_EBX cmp qword ptr [ebx], rbp
#define CMP_RBP_TO_PTR_ECX cmp qword ptr [ecx], rbp
#define CMP_RBP_TO_PTR_EDX cmp qword ptr [edx], rbp
#define CMP_RBP_TO_PTR_EDI cmp qword ptr [edi], rbp
#define CMP_RBP_TO_PTR_ESI cmp qword ptr [esi], rbp
#define CMP_RBP_TO_PTR_EBP cmp qword ptr [ebp], rbp
#define CMP_RBP_TO_PTR_ESP cmp qword ptr [esp], rbp

#define CMP_RSP_TO_PTR_RAX cmp qword ptr [rax], rsp
#define CMP_RSP_TO_PTR_RBX cmp qword ptr [rbx], rsp
#define CMP_RSP_TO_PTR_RCX cmp qword ptr [rcx], rsp
#define CMP_RSP_TO_PTR_RDX cmp qword ptr [rdx], rsp
#define CMP_RSP_TO_PTR_RDI cmp qword ptr [rdi], rsp
#define CMP_RSP_TO_PTR_RSI cmp qword ptr [rsi], rsp
#define CMP_RSP_TO_PTR_RBP cmp qword ptr [rbp], rsp
#define CMP_RSP_TO_PTR_RSP cmp qword ptr [rsp], rsp
#define CMP_RSP_TO_PTR_R8 cmp qword ptr [r8], rsp
#define CMP_RSP_TO_PTR_R9 cmp qword ptr [r9], rsp
#define CMP_RSP_TO_PTR_R10 cmp qword ptr [r10], rsp
#define CMP_RSP_TO_PTR_R11 cmp qword ptr [r11], rsp
#define CMP_RSP_TO_PTR_R12 cmp qword ptr [r12], rsp
#define CMP_RSP_TO_PTR_R13 cmp qword ptr [r13], rsp
#define CMP_RSP_TO_PTR_R14 cmp qword ptr [r14], rsp
#define CMP_RSP_TO_PTR_R15 cmp qword ptr [r15], rsp
#define CMP_RSP_TO_PTR_EAX cmp qword ptr [eax], rsp
#define CMP_RSP_TO_PTR_EBX cmp qword ptr [ebx], rsp
#define CMP_RSP_TO_PTR_ECX cmp qword ptr [ecx], rsp
#define CMP_RSP_TO_PTR_EDX cmp qword ptr [edx], rsp
#define CMP_RSP_TO_PTR_EDI cmp qword ptr [edi], rsp
#define CMP_RSP_TO_PTR_ESI cmp qword ptr [esi], rsp
#define CMP_RSP_TO_PTR_EBP cmp qword ptr [ebp], rsp
#define CMP_RSP_TO_PTR_ESP cmp qword ptr [esp], rsp

#define CMP_R8_TO_PTR_RAX cmp qword ptr [rax], r8
#define CMP_R8_TO_PTR_RBX cmp qword ptr [rbx], r8
#define CMP_R8_TO_PTR_RCX cmp qword ptr [rcx], r8
#define CMP_R8_TO_PTR_RDX cmp qword ptr [rdx], r8
#define CMP_R8_TO_PTR_RDI cmp qword ptr [rdi], r8
#define CMP_R8_TO_PTR_RSI cmp qword ptr [rsi], r8
#define CMP_R8_TO_PTR_RBP cmp qword ptr [rbp], r8
#define CMP_R8_TO_PTR_RSP cmp qword ptr [rsp], r8
#define CMP_R8_TO_PTR_R8 cmp qword ptr [r8], r8
#define CMP_R8_TO_PTR_R9 cmp qword ptr [r9], r8
#define CMP_R8_TO_PTR_R10 cmp qword ptr [r10], r8
#define CMP_R8_TO_PTR_R11 cmp qword ptr [r11], r8
#define CMP_R8_TO_PTR_R12 cmp qword ptr [r12], r8
#define CMP_R8_TO_PTR_R13 cmp qword ptr [r13], r8
#define CMP_R8_TO_PTR_R14 cmp qword ptr [r14], r8
#define CMP_R8_TO_PTR_R15 cmp qword ptr [r15], r8
#define CMP_R8_TO_PTR_EAX cmp qword ptr [eax], r8
#define CMP_R8_TO_PTR_EBX cmp qword ptr [ebx], r8
#define CMP_R8_TO_PTR_ECX cmp qword ptr [ecx], r8
#define CMP_R8_TO_PTR_EDX cmp qword ptr [edx], r8
#define CMP_R8_TO_PTR_EDI cmp qword ptr [edi], r8
#define CMP_R8_TO_PTR_ESI cmp qword ptr [esi], r8
#define CMP_R8_TO_PTR_EBP cmp qword ptr [ebp], r8
#define CMP_R8_TO_PTR_ESP cmp qword ptr [esp], r8

#define CMP_R9_TO_PTR_RAX cmp qword ptr [rax], r9
#define CMP_R9_TO_PTR_RBX cmp qword ptr [rbx], r9
#define CMP_R9_TO_PTR_RCX cmp qword ptr [rcx], r9
#define CMP_R9_TO_PTR_RDX cmp qword ptr [rdx], r9
#define CMP_R9_TO_PTR_RDI cmp qword ptr [rdi], r9
#define CMP_R9_TO_PTR_RSI cmp qword ptr [rsi], r9
#define CMP_R9_TO_PTR_RBP cmp qword ptr [rbp], r9
#define CMP_R9_TO_PTR_RSP cmp qword ptr [rsp], r9
#define CMP_R9_TO_PTR_R8 cmp qword ptr [r8], r9
#define CMP_R9_TO_PTR_R9 cmp qword ptr [r9], r9
#define CMP_R9_TO_PTR_R10 cmp qword ptr [r10], r9
#define CMP_R9_TO_PTR_R11 cmp qword ptr [r11], r9
#define CMP_R9_TO_PTR_R12 cmp qword ptr [r12], r9
#define CMP_R9_TO_PTR_R13 cmp qword ptr [r13], r9
#define CMP_R9_TO_PTR_R14 cmp qword ptr [r14], r9
#define CMP_R9_TO_PTR_R15 cmp qword ptr [r15], r9
#define CMP_R9_TO_PTR_EAX cmp qword ptr [eax], r9
#define CMP_R9_TO_PTR_EBX cmp qword ptr [ebx], r9
#define CMP_R9_TO_PTR_ECX cmp qword ptr [ecx], r9
#define CMP_R9_TO_PTR_EDX cmp qword ptr [edx], r9
#define CMP_R9_TO_PTR_EDI cmp qword ptr [edi], r9
#define CMP_R9_TO_PTR_ESI cmp qword ptr [esi], r9
#define CMP_R9_TO_PTR_EBP cmp qword ptr [ebp], r9
#define CMP_R9_TO_PTR_ESP cmp qword ptr [esp], r9

#define CMP_R10_TO_PTR_RAX cmp qword ptr [rax], r10
#define CMP_R10_TO_PTR_RBX cmp qword ptr [rbx], r10
#define CMP_R10_TO_PTR_RCX cmp qword ptr [rcx], r10
#define CMP_R10_TO_PTR_RDX cmp qword ptr [rdx], r10
#define CMP_R10_TO_PTR_RDI cmp qword ptr [rdi], r10
#define CMP_R10_TO_PTR_RSI cmp qword ptr [rsi], r10
#define CMP_R10_TO_PTR_RBP cmp qword ptr [rbp], r10
#define CMP_R10_TO_PTR_RSP cmp qword ptr [rsp], r10
#define CMP_R10_TO_PTR_R8 cmp qword ptr [r8], r10
#define CMP_R10_TO_PTR_R9 cmp qword ptr [r9], r10
#define CMP_R10_TO_PTR_R10 cmp qword ptr [r10], r10
#define CMP_R10_TO_PTR_R11 cmp qword ptr [r11], r10
#define CMP_R10_TO_PTR_R12 cmp qword ptr [r12], r10
#define CMP_R10_TO_PTR_R13 cmp qword ptr [r13], r10
#define CMP_R10_TO_PTR_R14 cmp qword ptr [r14], r10
#define CMP_R10_TO_PTR_R15 cmp qword ptr [r15], r10
#define CMP_R10_TO_PTR_EAX cmp qword ptr [eax], r10
#define CMP_R10_TO_PTR_EBX cmp qword ptr [ebx], r10
#define CMP_R10_TO_PTR_ECX cmp qword ptr [ecx], r10
#define CMP_R10_TO_PTR_EDX cmp qword ptr [edx], r10
#define CMP_R10_TO_PTR_EDI cmp qword ptr [edi], r10
#define CMP_R10_TO_PTR_ESI cmp qword ptr [esi], r10
#define CMP_R10_TO_PTR_EBP cmp qword ptr [ebp], r10
#define CMP_R10_TO_PTR_ESP cmp qword ptr [esp], r10

#define CMP_R11_TO_PTR_RAX cmp qword ptr [rax], r11
#define CMP_R11_TO_PTR_RBX cmp qword ptr [rbx], r11
#define CMP_R11_TO_PTR_RCX cmp qword ptr [rcx], r11
#define CMP_R11_TO_PTR_RDX cmp qword ptr [rdx], r11
#define CMP_R11_TO_PTR_RDI cmp qword ptr [rdi], r11
#define CMP_R11_TO_PTR_RSI cmp qword ptr [rsi], r11
#define CMP_R11_TO_PTR_RBP cmp qword ptr [rbp], r11
#define CMP_R11_TO_PTR_RSP cmp qword ptr [rsp], r11
#define CMP_R11_TO_PTR_R8 cmp qword ptr [r8], r11
#define CMP_R11_TO_PTR_R9 cmp qword ptr [r9], r11
#define CMP_R11_TO_PTR_R10 cmp qword ptr [r10], r11
#define CMP_R11_TO_PTR_R11 cmp qword ptr [r11], r11
#define CMP_R11_TO_PTR_R12 cmp qword ptr [r12], r11
#define CMP_R11_TO_PTR_R13 cmp qword ptr [r13], r11
#define CMP_R11_TO_PTR_R14 cmp qword ptr [r14], r11
#define CMP_R11_TO_PTR_R15 cmp qword ptr [r15], r11
#define CMP_R11_TO_PTR_EAX cmp qword ptr [eax], r11
#define CMP_R11_TO_PTR_EBX cmp qword ptr [ebx], r11
#define CMP_R11_TO_PTR_ECX cmp qword ptr [ecx], r11
#define CMP_R11_TO_PTR_EDX cmp qword ptr [edx], r11
#define CMP_R11_TO_PTR_EDI cmp qword ptr [edi], r11
#define CMP_R11_TO_PTR_ESI cmp qword ptr [esi], r11
#define CMP_R11_TO_PTR_EBP cmp qword ptr [ebp], r11
#define CMP_R11_TO_PTR_ESP cmp qword ptr [esp], r11

#define CMP_R12_TO_PTR_RAX cmp qword ptr [rax], r12
#define CMP_R12_TO_PTR_RBX cmp qword ptr [rbx], r12
#define CMP_R12_TO_PTR_RCX cmp qword ptr [rcx], r12
#define CMP_R12_TO_PTR_RDX cmp qword ptr [rdx], r12
#define CMP_R12_TO_PTR_RDI cmp qword ptr [rdi], r12
#define CMP_R12_TO_PTR_RSI cmp qword ptr [rsi], r12
#define CMP_R12_TO_PTR_RBP cmp qword ptr [rbp], r12
#define CMP_R12_TO_PTR_RSP cmp qword ptr [rsp], r12
#define CMP_R12_TO_PTR_R8 cmp qword ptr [r8], r12
#define CMP_R12_TO_PTR_R9 cmp qword ptr [r9], r12
#define CMP_R12_TO_PTR_R10 cmp qword ptr [r10], r12
#define CMP_R12_TO_PTR_R11 cmp qword ptr [r11], r12
#define CMP_R12_TO_PTR_R12 cmp qword ptr [r12], r12
#define CMP_R12_TO_PTR_R13 cmp qword ptr [r13], r12
#define CMP_R12_TO_PTR_R14 cmp qword ptr [r14], r12
#define CMP_R12_TO_PTR_R15 cmp qword ptr [r15], r12
#define CMP_R12_TO_PTR_EAX cmp qword ptr [eax], r12
#define CMP_R12_TO_PTR_EBX cmp qword ptr [ebx], r12
#define CMP_R12_TO_PTR_ECX cmp qword ptr [ecx], r12
#define CMP_R12_TO_PTR_EDX cmp qword ptr [edx], r12
#define CMP_R12_TO_PTR_EDI cmp qword ptr [edi], r12
#define CMP_R12_TO_PTR_ESI cmp qword ptr [esi], r12
#define CMP_R12_TO_PTR_EBP cmp qword ptr [ebp], r12
#define CMP_R12_TO_PTR_ESP cmp qword ptr [esp], r12

#define CMP_R13_TO_PTR_RAX cmp qword ptr [rax], r13
#define CMP_R13_TO_PTR_RBX cmp qword ptr [rbx], r13
#define CMP_R13_TO_PTR_RCX cmp qword ptr [rcx], r13
#define CMP_R13_TO_PTR_RDX cmp qword ptr [rdx], r13
#define CMP_R13_TO_PTR_RDI cmp qword ptr [rdi], r13
#define CMP_R13_TO_PTR_RSI cmp qword ptr [rsi], r13
#define CMP_R13_TO_PTR_RBP cmp qword ptr [rbp], r13
#define CMP_R13_TO_PTR_RSP cmp qword ptr [rsp], r13
#define CMP_R13_TO_PTR_R8 cmp qword ptr [r8], r13
#define CMP_R13_TO_PTR_R9 cmp qword ptr [r9], r13
#define CMP_R13_TO_PTR_R10 cmp qword ptr [r10], r13
#define CMP_R13_TO_PTR_R11 cmp qword ptr [r11], r13
#define CMP_R13_TO_PTR_R12 cmp qword ptr [r12], r13
#define CMP_R13_TO_PTR_R13 cmp qword ptr [r13], r13
#define CMP_R13_TO_PTR_R14 cmp qword ptr [r14], r13
#define CMP_R13_TO_PTR_R15 cmp qword ptr [r15], r13
#define CMP_R13_TO_PTR_EAX cmp qword ptr [eax], r13
#define CMP_R13_TO_PTR_EBX cmp qword ptr [ebx], r13
#define CMP_R13_TO_PTR_ECX cmp qword ptr [ecx], r13
#define CMP_R13_TO_PTR_EDX cmp qword ptr [edx], r13
#define CMP_R13_TO_PTR_EDI cmp qword ptr [edi], r13
#define CMP_R13_TO_PTR_ESI cmp qword ptr [esi], r13
#define CMP_R13_TO_PTR_EBP cmp qword ptr [ebp], r13
#define CMP_R13_TO_PTR_ESP cmp qword ptr [esp], r13

#define CMP_R14_TO_PTR_RAX cmp qword ptr [rax], r14
#define CMP_R14_TO_PTR_RBX cmp qword ptr [rbx], r14
#define CMP_R14_TO_PTR_RCX cmp qword ptr [rcx], r14
#define CMP_R14_TO_PTR_RDX cmp qword ptr [rdx], r14
#define CMP_R14_TO_PTR_RDI cmp qword ptr [rdi], r14
#define CMP_R14_TO_PTR_RSI cmp qword ptr [rsi], r14
#define CMP_R14_TO_PTR_RBP cmp qword ptr [rbp], r14
#define CMP_R14_TO_PTR_RSP cmp qword ptr [rsp], r14
#define CMP_R14_TO_PTR_R8 cmp qword ptr [r8], r14
#define CMP_R14_TO_PTR_R9 cmp qword ptr [r9], r14
#define CMP_R14_TO_PTR_R10 cmp qword ptr [r10], r14
#define CMP_R14_TO_PTR_R11 cmp qword ptr [r11], r14
#define CMP_R14_TO_PTR_R12 cmp qword ptr [r12], r14
#define CMP_R14_TO_PTR_R13 cmp qword ptr [r13], r14
#define CMP_R14_TO_PTR_R14 cmp qword ptr [r14], r14
#define CMP_R14_TO_PTR_R15 cmp qword ptr [r15], r14
#define CMP_R14_TO_PTR_EAX cmp qword ptr [eax], r14
#define CMP_R14_TO_PTR_EBX cmp qword ptr [ebx], r14
#define CMP_R14_TO_PTR_ECX cmp qword ptr [ecx], r14
#define CMP_R14_TO_PTR_EDX cmp qword ptr [edx], r14
#define CMP_R14_TO_PTR_EDI cmp qword ptr [edi], r14
#define CMP_R14_TO_PTR_ESI cmp qword ptr [esi], r14
#define CMP_R14_TO_PTR_EBP cmp qword ptr [ebp], r14
#define CMP_R14_TO_PTR_ESP cmp qword ptr [esp], r14

#define CMP_R15_TO_PTR_RAX cmp qword ptr [rax], r15
#define CMP_R15_TO_PTR_RBX cmp qword ptr [rbx], r15
#define CMP_R15_TO_PTR_RCX cmp qword ptr [rcx], r15
#define CMP_R15_TO_PTR_RDX cmp qword ptr [rdx], r15
#define CMP_R15_TO_PTR_RDI cmp qword ptr [rdi], r15
#define CMP_R15_TO_PTR_RSI cmp qword ptr [rsi], r15
#define CMP_R15_TO_PTR_RBP cmp qword ptr [rbp], r15
#define CMP_R15_TO_PTR_RSP cmp qword ptr [rsp], r15
#define CMP_R15_TO_PTR_R8 cmp qword ptr [r8], r15
#define CMP_R15_TO_PTR_R9 cmp qword ptr [r9], r15
#define CMP_R15_TO_PTR_R10 cmp qword ptr [r10], r15
#define CMP_R15_TO_PTR_R11 cmp qword ptr [r11], r15
#define CMP_R15_TO_PTR_R12 cmp qword ptr [r12], r15
#define CMP_R15_TO_PTR_R13 cmp qword ptr [r13], r15
#define CMP_R15_TO_PTR_R14 cmp qword ptr [r14], r15
#define CMP_R15_TO_PTR_R15 cmp qword ptr [r15], r15
#define CMP_R15_TO_PTR_EAX cmp qword ptr [eax], r15
#define CMP_R15_TO_PTR_EBX cmp qword ptr [ebx], r15
#define CMP_R15_TO_PTR_ECX cmp qword ptr [ecx], r15
#define CMP_R15_TO_PTR_EDX cmp qword ptr [edx], r15
#define CMP_R15_TO_PTR_EDI cmp qword ptr [edi], r15
#define CMP_R15_TO_PTR_ESI cmp qword ptr [esi], r15
#define CMP_R15_TO_PTR_EBP cmp qword ptr [ebp], r15
#define CMP_R15_TO_PTR_ESP cmp qword ptr [esp], r15

#define CMP_RAX_FROM_PTR_RAX_(VALUE) cmp rax, qword ptr [rax + VALUE]
#define CMP_RAX_FROM_PTR_RBX_(VALUE) cmp rax, qword ptr [rbx + VALUE]
#define CMP_RAX_FROM_PTR_RCX_(VALUE) cmp rax, qword ptr [rcx + VALUE]
#define CMP_RAX_FROM_PTR_RDX_(VALUE) cmp rax, qword ptr [rdx + VALUE]
#define CMP_RAX_FROM_PTR_RDI_(VALUE) cmp rax, qword ptr [rdi + VALUE]
#define CMP_RAX_FROM_PTR_RSI_(VALUE) cmp rax, qword ptr [rsi + VALUE]
#define CMP_RAX_FROM_PTR_RBP_(VALUE) cmp rax, qword ptr [rbp + VALUE]
#define CMP_RAX_FROM_PTR_RSP_(VALUE) cmp rax, qword ptr [rsp + VALUE]
#define CMP_RAX_FROM_PTR_R8_(VALUE) cmp rax, qword ptr [r8 + VALUE]
#define CMP_RAX_FROM_PTR_R9_(VALUE) cmp rax, qword ptr [r9 + VALUE]
#define CMP_RAX_FROM_PTR_R10_(VALUE) cmp rax, qword ptr [r10 + VALUE]
#define CMP_RAX_FROM_PTR_R11_(VALUE) cmp rax, qword ptr [r11 + VALUE]
#define CMP_RAX_FROM_PTR_R12_(VALUE) cmp rax, qword ptr [r12 + VALUE]
#define CMP_RAX_FROM_PTR_R13_(VALUE) cmp rax, qword ptr [r13 + VALUE]
#define CMP_RAX_FROM_PTR_R14_(VALUE) cmp rax, qword ptr [r14 + VALUE]
#define CMP_RAX_FROM_PTR_R15_(VALUE) cmp rax, qword ptr [r15 + VALUE]
#define CMP_RAX_FROM_PTR_EAX_(VALUE) cmp rax, qword ptr [eax + VALUE]
#define CMP_RAX_FROM_PTR_EBX_(VALUE) cmp rax, qword ptr [ebx + VALUE]
#define CMP_RAX_FROM_PTR_ECX_(VALUE) cmp rax, qword ptr [ecx + VALUE]
#define CMP_RAX_FROM_PTR_EDX_(VALUE) cmp rax, qword ptr [edx + VALUE]
#define CMP_RAX_FROM_PTR_EDI_(VALUE) cmp rax, qword ptr [edi + VALUE]
#define CMP_RAX_FROM_PTR_ESI_(VALUE) cmp rax, qword ptr [esi + VALUE]
#define CMP_RAX_FROM_PTR_EBP_(VALUE) cmp rax, qword ptr [ebp + VALUE]
#define CMP_RAX_FROM_PTR_ESP_(VALUE) cmp rax, qword ptr [esp + VALUE]

#define CMP_RBX_FROM_PTR_RAX_(VALUE) cmp rbx, qword ptr [rax + VALUE]
#define CMP_RBX_FROM_PTR_RBX_(VALUE) cmp rbx, qword ptr [rbx + VALUE]
#define CMP_RBX_FROM_PTR_RCX_(VALUE) cmp rbx, qword ptr [rcx + VALUE]
#define CMP_RBX_FROM_PTR_RDX_(VALUE) cmp rbx, qword ptr [rdx + VALUE]
#define CMP_RBX_FROM_PTR_RDI_(VALUE) cmp rbx, qword ptr [rdi + VALUE]
#define CMP_RBX_FROM_PTR_RSI_(VALUE) cmp rbx, qword ptr [rsi + VALUE]
#define CMP_RBX_FROM_PTR_RBP_(VALUE) cmp rbx, qword ptr [rbp + VALUE]
#define CMP_RBX_FROM_PTR_RSP_(VALUE) cmp rbx, qword ptr [rsp + VALUE]
#define CMP_RBX_FROM_PTR_R8_(VALUE) cmp rbx, qword ptr [r8 + VALUE]
#define CMP_RBX_FROM_PTR_R9_(VALUE) cmp rbx, qword ptr [r9 + VALUE]
#define CMP_RBX_FROM_PTR_R10_(VALUE) cmp rbx, qword ptr [r10 + VALUE]
#define CMP_RBX_FROM_PTR_R11_(VALUE) cmp rbx, qword ptr [r11 + VALUE]
#define CMP_RBX_FROM_PTR_R12_(VALUE) cmp rbx, qword ptr [r12 + VALUE]
#define CMP_RBX_FROM_PTR_R13_(VALUE) cmp rbx, qword ptr [r13 + VALUE]
#define CMP_RBX_FROM_PTR_R14_(VALUE) cmp rbx, qword ptr [r14 + VALUE]
#define CMP_RBX_FROM_PTR_R15_(VALUE) cmp rbx, qword ptr [r15 + VALUE]
#define CMP_RBX_FROM_PTR_EAX_(VALUE) cmp rbx, qword ptr [eax + VALUE]
#define CMP_RBX_FROM_PTR_EBX_(VALUE) cmp rbx, qword ptr [ebx + VALUE]
#define CMP_RBX_FROM_PTR_ECX_(VALUE) cmp rbx, qword ptr [ecx + VALUE]
#define CMP_RBX_FROM_PTR_EDX_(VALUE) cmp rbx, qword ptr [edx + VALUE]
#define CMP_RBX_FROM_PTR_EDI_(VALUE) cmp rbx, qword ptr [edi + VALUE]
#define CMP_RBX_FROM_PTR_ESI_(VALUE) cmp rbx, qword ptr [esi + VALUE]
#define CMP_RBX_FROM_PTR_EBP_(VALUE) cmp rbx, qword ptr [ebp + VALUE]
#define CMP_RBX_FROM_PTR_ESP_(VALUE) cmp rbx, qword ptr [esp + VALUE]

#define CMP_RCX_FROM_PTR_RAX_(VALUE) cmp rcx, qword ptr [rax + VALUE]
#define CMP_RCX_FROM_PTR_RBX_(VALUE) cmp rcx, qword ptr [rbx + VALUE]
#define CMP_RCX_FROM_PTR_RCX_(VALUE) cmp rcx, qword ptr [rcx + VALUE]
#define CMP_RCX_FROM_PTR_RDX_(VALUE) cmp rcx, qword ptr [rdx + VALUE]
#define CMP_RCX_FROM_PTR_RDI_(VALUE) cmp rcx, qword ptr [rdi + VALUE]
#define CMP_RCX_FROM_PTR_RSI_(VALUE) cmp rcx, qword ptr [rsi + VALUE]
#define CMP_RCX_FROM_PTR_RBP_(VALUE) cmp rcx, qword ptr [rbp + VALUE]
#define CMP_RCX_FROM_PTR_RSP_(VALUE) cmp rcx, qword ptr [rsp + VALUE]
#define CMP_RCX_FROM_PTR_R8_(VALUE) cmp rcx, qword ptr [r8 + VALUE]
#define CMP_RCX_FROM_PTR_R9_(VALUE) cmp rcx, qword ptr [r9 + VALUE]
#define CMP_RCX_FROM_PTR_R10_(VALUE) cmp rcx, qword ptr [r10 + VALUE]
#define CMP_RCX_FROM_PTR_R11_(VALUE) cmp rcx, qword ptr [r11 + VALUE]
#define CMP_RCX_FROM_PTR_R12_(VALUE) cmp rcx, qword ptr [r12 + VALUE]
#define CMP_RCX_FROM_PTR_R13_(VALUE) cmp rcx, qword ptr [r13 + VALUE]
#define CMP_RCX_FROM_PTR_R14_(VALUE) cmp rcx, qword ptr [r14 + VALUE]
#define CMP_RCX_FROM_PTR_R15_(VALUE) cmp rcx, qword ptr [r15 + VALUE]
#define CMP_RCX_FROM_PTR_EAX_(VALUE) cmp rcx, qword ptr [eax + VALUE]
#define CMP_RCX_FROM_PTR_EBX_(VALUE) cmp rcx, qword ptr [ebx + VALUE]
#define CMP_RCX_FROM_PTR_ECX_(VALUE) cmp rcx, qword ptr [ecx + VALUE]
#define CMP_RCX_FROM_PTR_EDX_(VALUE) cmp rcx, qword ptr [edx + VALUE]
#define CMP_RCX_FROM_PTR_EDI_(VALUE) cmp rcx, qword ptr [edi + VALUE]
#define CMP_RCX_FROM_PTR_ESI_(VALUE) cmp rcx, qword ptr [esi + VALUE]
#define CMP_RCX_FROM_PTR_EBP_(VALUE) cmp rcx, qword ptr [ebp + VALUE]
#define CMP_RCX_FROM_PTR_ESP_(VALUE) cmp rcx, qword ptr [esp + VALUE]

#define CMP_RDX_FROM_PTR_RAX_(VALUE) cmp rdx, qword ptr [rax + VALUE]
#define CMP_RDX_FROM_PTR_RBX_(VALUE) cmp rdx, qword ptr [rbx + VALUE]
#define CMP_RDX_FROM_PTR_RCX_(VALUE) cmp rdx, qword ptr [rcx + VALUE]
#define CMP_RDX_FROM_PTR_RDX_(VALUE) cmp rdx, qword ptr [rdx + VALUE]
#define CMP_RDX_FROM_PTR_RDI_(VALUE) cmp rdx, qword ptr [rdi + VALUE]
#define CMP_RDX_FROM_PTR_RSI_(VALUE) cmp rdx, qword ptr [rsi + VALUE]
#define CMP_RDX_FROM_PTR_RBP_(VALUE) cmp rdx, qword ptr [rbp + VALUE]
#define CMP_RDX_FROM_PTR_RSP_(VALUE) cmp rdx, qword ptr [rsp + VALUE]
#define CMP_RDX_FROM_PTR_R8_(VALUE) cmp rdx, qword ptr [r8 + VALUE]
#define CMP_RDX_FROM_PTR_R9_(VALUE) cmp rdx, qword ptr [r9 + VALUE]
#define CMP_RDX_FROM_PTR_R10_(VALUE) cmp rdx, qword ptr [r10 + VALUE]
#define CMP_RDX_FROM_PTR_R11_(VALUE) cmp rdx, qword ptr [r11 + VALUE]
#define CMP_RDX_FROM_PTR_R12_(VALUE) cmp rdx, qword ptr [r12 + VALUE]
#define CMP_RDX_FROM_PTR_R13_(VALUE) cmp rdx, qword ptr [r13 + VALUE]
#define CMP_RDX_FROM_PTR_R14_(VALUE) cmp rdx, qword ptr [r14 + VALUE]
#define CMP_RDX_FROM_PTR_R15_(VALUE) cmp rdx, qword ptr [r15 + VALUE]
#define CMP_RDX_FROM_PTR_EAX_(VALUE) cmp rdx, qword ptr [eax + VALUE]
#define CMP_RDX_FROM_PTR_EBX_(VALUE) cmp rdx, qword ptr [ebx + VALUE]
#define CMP_RDX_FROM_PTR_ECX_(VALUE) cmp rdx, qword ptr [ecx + VALUE]
#define CMP_RDX_FROM_PTR_EDX_(VALUE) cmp rdx, qword ptr [edx + VALUE]
#define CMP_RDX_FROM_PTR_EDI_(VALUE) cmp rdx, qword ptr [edi + VALUE]
#define CMP_RDX_FROM_PTR_ESI_(VALUE) cmp rdx, qword ptr [esi + VALUE]
#define CMP_RDX_FROM_PTR_EBP_(VALUE) cmp rdx, qword ptr [ebp + VALUE]
#define CMP_RDX_FROM_PTR_ESP_(VALUE) cmp rdx, qword ptr [esp + VALUE]

#define CMP_RDI_FROM_PTR_RAX_(VALUE) cmp rdi, qword ptr [rax + VALUE]
#define CMP_RDI_FROM_PTR_RBX_(VALUE) cmp rdi, qword ptr [rbx + VALUE]
#define CMP_RDI_FROM_PTR_RCX_(VALUE) cmp rdi, qword ptr [rcx + VALUE]
#define CMP_RDI_FROM_PTR_RDX_(VALUE) cmp rdi, qword ptr [rdx + VALUE]
#define CMP_RDI_FROM_PTR_RDI_(VALUE) cmp rdi, qword ptr [rdi + VALUE]
#define CMP_RDI_FROM_PTR_RSI_(VALUE) cmp rdi, qword ptr [rsi + VALUE]
#define CMP_RDI_FROM_PTR_RBP_(VALUE) cmp rdi, qword ptr [rbp + VALUE]
#define CMP_RDI_FROM_PTR_RSP_(VALUE) cmp rdi, qword ptr [rsp + VALUE]
#define CMP_RDI_FROM_PTR_R8_(VALUE) cmp rdi, qword ptr [r8 + VALUE]
#define CMP_RDI_FROM_PTR_R9_(VALUE) cmp rdi, qword ptr [r9 + VALUE]
#define CMP_RDI_FROM_PTR_R10_(VALUE) cmp rdi, qword ptr [r10 + VALUE]
#define CMP_RDI_FROM_PTR_R11_(VALUE) cmp rdi, qword ptr [r11 + VALUE]
#define CMP_RDI_FROM_PTR_R12_(VALUE) cmp rdi, qword ptr [r12 + VALUE]
#define CMP_RDI_FROM_PTR_R13_(VALUE) cmp rdi, qword ptr [r13 + VALUE]
#define CMP_RDI_FROM_PTR_R14_(VALUE) cmp rdi, qword ptr [r14 + VALUE]
#define CMP_RDI_FROM_PTR_R15_(VALUE) cmp rdi, qword ptr [r15 + VALUE]
#define CMP_RDI_FROM_PTR_EAX_(VALUE) cmp rdi, qword ptr [eax + VALUE]
#define CMP_RDI_FROM_PTR_EBX_(VALUE) cmp rdi, qword ptr [ebx + VALUE]
#define CMP_RDI_FROM_PTR_ECX_(VALUE) cmp rdi, qword ptr [ecx + VALUE]
#define CMP_RDI_FROM_PTR_EDX_(VALUE) cmp rdi, qword ptr [edx + VALUE]
#define CMP_RDI_FROM_PTR_EDI_(VALUE) cmp rdi, qword ptr [edi + VALUE]
#define CMP_RDI_FROM_PTR_ESI_(VALUE) cmp rdi, qword ptr [esi + VALUE]
#define CMP_RDI_FROM_PTR_EBP_(VALUE) cmp rdi, qword ptr [ebp + VALUE]
#define CMP_RDI_FROM_PTR_ESP_(VALUE) cmp rdi, qword ptr [esp + VALUE]

#define CMP_RSI_FROM_PTR_RAX_(VALUE) cmp rsi, qword ptr [rax + VALUE]
#define CMP_RSI_FROM_PTR_RBX_(VALUE) cmp rsi, qword ptr [rbx + VALUE]
#define CMP_RSI_FROM_PTR_RCX_(VALUE) cmp rsi, qword ptr [rcx + VALUE]
#define CMP_RSI_FROM_PTR_RDX_(VALUE) cmp rsi, qword ptr [rdx + VALUE]
#define CMP_RSI_FROM_PTR_RDI_(VALUE) cmp rsi, qword ptr [rdi + VALUE]
#define CMP_RSI_FROM_PTR_RSI_(VALUE) cmp rsi, qword ptr [rsi + VALUE]
#define CMP_RSI_FROM_PTR_RBP_(VALUE) cmp rsi, qword ptr [rbp + VALUE]
#define CMP_RSI_FROM_PTR_RSP_(VALUE) cmp rsi, qword ptr [rsp + VALUE]
#define CMP_RSI_FROM_PTR_R8_(VALUE) cmp rsi, qword ptr [r8 + VALUE]
#define CMP_RSI_FROM_PTR_R9_(VALUE) cmp rsi, qword ptr [r9 + VALUE]
#define CMP_RSI_FROM_PTR_R10_(VALUE) cmp rsi, qword ptr [r10 + VALUE]
#define CMP_RSI_FROM_PTR_R11_(VALUE) cmp rsi, qword ptr [r11 + VALUE]
#define CMP_RSI_FROM_PTR_R12_(VALUE) cmp rsi, qword ptr [r12 + VALUE]
#define CMP_RSI_FROM_PTR_R13_(VALUE) cmp rsi, qword ptr [r13 + VALUE]
#define CMP_RSI_FROM_PTR_R14_(VALUE) cmp rsi, qword ptr [r14 + VALUE]
#define CMP_RSI_FROM_PTR_R15_(VALUE) cmp rsi, qword ptr [r15 + VALUE]
#define CMP_RSI_FROM_PTR_EAX_(VALUE) cmp rsi, qword ptr [eax + VALUE]
#define CMP_RSI_FROM_PTR_EBX_(VALUE) cmp rsi, qword ptr [ebx + VALUE]
#define CMP_RSI_FROM_PTR_ECX_(VALUE) cmp rsi, qword ptr [ecx + VALUE]
#define CMP_RSI_FROM_PTR_EDX_(VALUE) cmp rsi, qword ptr [edx + VALUE]
#define CMP_RSI_FROM_PTR_EDI_(VALUE) cmp rsi, qword ptr [edi + VALUE]
#define CMP_RSI_FROM_PTR_ESI_(VALUE) cmp rsi, qword ptr [esi + VALUE]
#define CMP_RSI_FROM_PTR_EBP_(VALUE) cmp rsi, qword ptr [ebp + VALUE]
#define CMP_RSI_FROM_PTR_ESP_(VALUE) cmp rsi, qword ptr [esp + VALUE]

#define CMP_RBP_FROM_PTR_RAX_(VALUE) cmp rbp, qword ptr [rax + VALUE]
#define CMP_RBP_FROM_PTR_RBX_(VALUE) cmp rbp, qword ptr [rbx + VALUE]
#define CMP_RBP_FROM_PTR_RCX_(VALUE) cmp rbp, qword ptr [rcx + VALUE]
#define CMP_RBP_FROM_PTR_RDX_(VALUE) cmp rbp, qword ptr [rdx + VALUE]
#define CMP_RBP_FROM_PTR_RDI_(VALUE) cmp rbp, qword ptr [rdi + VALUE]
#define CMP_RBP_FROM_PTR_RSI_(VALUE) cmp rbp, qword ptr [rsi + VALUE]
#define CMP_RBP_FROM_PTR_RBP_(VALUE) cmp rbp, qword ptr [rbp + VALUE]
#define CMP_RBP_FROM_PTR_RSP_(VALUE) cmp rbp, qword ptr [rsp + VALUE]
#define CMP_RBP_FROM_PTR_R8_(VALUE) cmp rbp, qword ptr [r8 + VALUE]
#define CMP_RBP_FROM_PTR_R9_(VALUE) cmp rbp, qword ptr [r9 + VALUE]
#define CMP_RBP_FROM_PTR_R10_(VALUE) cmp rbp, qword ptr [r10 + VALUE]
#define CMP_RBP_FROM_PTR_R11_(VALUE) cmp rbp, qword ptr [r11 + VALUE]
#define CMP_RBP_FROM_PTR_R12_(VALUE) cmp rbp, qword ptr [r12 + VALUE]
#define CMP_RBP_FROM_PTR_R13_(VALUE) cmp rbp, qword ptr [r13 + VALUE]
#define CMP_RBP_FROM_PTR_R14_(VALUE) cmp rbp, qword ptr [r14 + VALUE]
#define CMP_RBP_FROM_PTR_R15_(VALUE) cmp rbp, qword ptr [r15 + VALUE]
#define CMP_RBP_FROM_PTR_EAX_(VALUE) cmp rbp, qword ptr [eax + VALUE]
#define CMP_RBP_FROM_PTR_EBX_(VALUE) cmp rbp, qword ptr [ebx + VALUE]
#define CMP_RBP_FROM_PTR_ECX_(VALUE) cmp rbp, qword ptr [ecx + VALUE]
#define CMP_RBP_FROM_PTR_EDX_(VALUE) cmp rbp, qword ptr [edx + VALUE]
#define CMP_RBP_FROM_PTR_EDI_(VALUE) cmp rbp, qword ptr [edi + VALUE]
#define CMP_RBP_FROM_PTR_ESI_(VALUE) cmp rbp, qword ptr [esi + VALUE]
#define CMP_RBP_FROM_PTR_EBP_(VALUE) cmp rbp, qword ptr [ebp + VALUE]
#define CMP_RBP_FROM_PTR_ESP_(VALUE) cmp rbp, qword ptr [esp + VALUE]

#define CMP_RSP_FROM_PTR_RAX_(VALUE) cmp rsp, qword ptr [rax + VALUE]
#define CMP_RSP_FROM_PTR_RBX_(VALUE) cmp rsp, qword ptr [rbx + VALUE]
#define CMP_RSP_FROM_PTR_RCX_(VALUE) cmp rsp, qword ptr [rcx + VALUE]
#define CMP_RSP_FROM_PTR_RDX_(VALUE) cmp rsp, qword ptr [rdx + VALUE]
#define CMP_RSP_FROM_PTR_RDI_(VALUE) cmp rsp, qword ptr [rdi + VALUE]
#define CMP_RSP_FROM_PTR_RSI_(VALUE) cmp rsp, qword ptr [rsi + VALUE]
#define CMP_RSP_FROM_PTR_RBP_(VALUE) cmp rsp, qword ptr [rbp + VALUE]
#define CMP_RSP_FROM_PTR_RSP_(VALUE) cmp rsp, qword ptr [rsp + VALUE]
#define CMP_RSP_FROM_PTR_R8_(VALUE) cmp rsp, qword ptr [r8 + VALUE]
#define CMP_RSP_FROM_PTR_R9_(VALUE) cmp rsp, qword ptr [r9 + VALUE]
#define CMP_RSP_FROM_PTR_R10_(VALUE) cmp rsp, qword ptr [r10 + VALUE]
#define CMP_RSP_FROM_PTR_R11_(VALUE) cmp rsp, qword ptr [r11 + VALUE]
#define CMP_RSP_FROM_PTR_R12_(VALUE) cmp rsp, qword ptr [r12 + VALUE]
#define CMP_RSP_FROM_PTR_R13_(VALUE) cmp rsp, qword ptr [r13 + VALUE]
#define CMP_RSP_FROM_PTR_R14_(VALUE) cmp rsp, qword ptr [r14 + VALUE]
#define CMP_RSP_FROM_PTR_R15_(VALUE) cmp rsp, qword ptr [r15 + VALUE]
#define CMP_RSP_FROM_PTR_EAX_(VALUE) cmp rsp, qword ptr [eax + VALUE]
#define CMP_RSP_FROM_PTR_EBX_(VALUE) cmp rsp, qword ptr [ebx + VALUE]
#define CMP_RSP_FROM_PTR_ECX_(VALUE) cmp rsp, qword ptr [ecx + VALUE]
#define CMP_RSP_FROM_PTR_EDX_(VALUE) cmp rsp, qword ptr [edx + VALUE]
#define CMP_RSP_FROM_PTR_EDI_(VALUE) cmp rsp, qword ptr [edi + VALUE]
#define CMP_RSP_FROM_PTR_ESI_(VALUE) cmp rsp, qword ptr [esi + VALUE]
#define CMP_RSP_FROM_PTR_EBP_(VALUE) cmp rsp, qword ptr [ebp + VALUE]
#define CMP_RSP_FROM_PTR_ESP_(VALUE) cmp rsp, qword ptr [esp + VALUE]

#define CMP_R8_FROM_PTR_RAX_(VALUE) cmp r8, qword ptr [rax + VALUE]
#define CMP_R8_FROM_PTR_RBX_(VALUE) cmp r8, qword ptr [rbx + VALUE]
#define CMP_R8_FROM_PTR_RCX_(VALUE) cmp r8, qword ptr [rcx + VALUE]
#define CMP_R8_FROM_PTR_RDX_(VALUE) cmp r8, qword ptr [rdx + VALUE]
#define CMP_R8_FROM_PTR_RDI_(VALUE) cmp r8, qword ptr [rdi + VALUE]
#define CMP_R8_FROM_PTR_RSI_(VALUE) cmp r8, qword ptr [rsi + VALUE]
#define CMP_R8_FROM_PTR_RBP_(VALUE) cmp r8, qword ptr [rbp + VALUE]
#define CMP_R8_FROM_PTR_RSP_(VALUE) cmp r8, qword ptr [rsp + VALUE]
#define CMP_R8_FROM_PTR_R8_(VALUE) cmp r8, qword ptr [r8 + VALUE]
#define CMP_R8_FROM_PTR_R9_(VALUE) cmp r8, qword ptr [r9 + VALUE]
#define CMP_R8_FROM_PTR_R10_(VALUE) cmp r8, qword ptr [r10 + VALUE]
#define CMP_R8_FROM_PTR_R11_(VALUE) cmp r8, qword ptr [r11 + VALUE]
#define CMP_R8_FROM_PTR_R12_(VALUE) cmp r8, qword ptr [r12 + VALUE]
#define CMP_R8_FROM_PTR_R13_(VALUE) cmp r8, qword ptr [r13 + VALUE]
#define CMP_R8_FROM_PTR_R14_(VALUE) cmp r8, qword ptr [r14 + VALUE]
#define CMP_R8_FROM_PTR_R15_(VALUE) cmp r8, qword ptr [r15 + VALUE]
#define CMP_R8_FROM_PTR_EAX_(VALUE) cmp r8, qword ptr [eax + VALUE]
#define CMP_R8_FROM_PTR_EBX_(VALUE) cmp r8, qword ptr [ebx + VALUE]
#define CMP_R8_FROM_PTR_ECX_(VALUE) cmp r8, qword ptr [ecx + VALUE]
#define CMP_R8_FROM_PTR_EDX_(VALUE) cmp r8, qword ptr [edx + VALUE]
#define CMP_R8_FROM_PTR_EDI_(VALUE) cmp r8, qword ptr [edi + VALUE]
#define CMP_R8_FROM_PTR_ESI_(VALUE) cmp r8, qword ptr [esi + VALUE]
#define CMP_R8_FROM_PTR_EBP_(VALUE) cmp r8, qword ptr [ebp + VALUE]
#define CMP_R8_FROM_PTR_ESP_(VALUE) cmp r8, qword ptr [esp + VALUE]

#define CMP_R9_FROM_PTR_RAX_(VALUE) cmp r9, qword ptr [rax + VALUE]
#define CMP_R9_FROM_PTR_RBX_(VALUE) cmp r9, qword ptr [rbx + VALUE]
#define CMP_R9_FROM_PTR_RCX_(VALUE) cmp r9, qword ptr [rcx + VALUE]
#define CMP_R9_FROM_PTR_RDX_(VALUE) cmp r9, qword ptr [rdx + VALUE]
#define CMP_R9_FROM_PTR_RDI_(VALUE) cmp r9, qword ptr [rdi + VALUE]
#define CMP_R9_FROM_PTR_RSI_(VALUE) cmp r9, qword ptr [rsi + VALUE]
#define CMP_R9_FROM_PTR_RBP_(VALUE) cmp r9, qword ptr [rbp + VALUE]
#define CMP_R9_FROM_PTR_RSP_(VALUE) cmp r9, qword ptr [rsp + VALUE]
#define CMP_R9_FROM_PTR_R8_(VALUE) cmp r9, qword ptr [r8 + VALUE]
#define CMP_R9_FROM_PTR_R9_(VALUE) cmp r9, qword ptr [r9 + VALUE]
#define CMP_R9_FROM_PTR_R10_(VALUE) cmp r9, qword ptr [r10 + VALUE]
#define CMP_R9_FROM_PTR_R11_(VALUE) cmp r9, qword ptr [r11 + VALUE]
#define CMP_R9_FROM_PTR_R12_(VALUE) cmp r9, qword ptr [r12 + VALUE]
#define CMP_R9_FROM_PTR_R13_(VALUE) cmp r9, qword ptr [r13 + VALUE]
#define CMP_R9_FROM_PTR_R14_(VALUE) cmp r9, qword ptr [r14 + VALUE]
#define CMP_R9_FROM_PTR_R15_(VALUE) cmp r9, qword ptr [r15 + VALUE]
#define CMP_R9_FROM_PTR_EAX_(VALUE) cmp r9, qword ptr [eax + VALUE]
#define CMP_R9_FROM_PTR_EBX_(VALUE) cmp r9, qword ptr [ebx + VALUE]
#define CMP_R9_FROM_PTR_ECX_(VALUE) cmp r9, qword ptr [ecx + VALUE]
#define CMP_R9_FROM_PTR_EDX_(VALUE) cmp r9, qword ptr [edx + VALUE]
#define CMP_R9_FROM_PTR_EDI_(VALUE) cmp r9, qword ptr [edi + VALUE]
#define CMP_R9_FROM_PTR_ESI_(VALUE) cmp r9, qword ptr [esi + VALUE]
#define CMP_R9_FROM_PTR_EBP_(VALUE) cmp r9, qword ptr [ebp + VALUE]
#define CMP_R9_FROM_PTR_ESP_(VALUE) cmp r9, qword ptr [esp + VALUE]

#define CMP_R10_FROM_PTR_RAX_(VALUE) cmp r10, qword ptr [rax + VALUE]
#define CMP_R10_FROM_PTR_RBX_(VALUE) cmp r10, qword ptr [rbx + VALUE]
#define CMP_R10_FROM_PTR_RCX_(VALUE) cmp r10, qword ptr [rcx + VALUE]
#define CMP_R10_FROM_PTR_RDX_(VALUE) cmp r10, qword ptr [rdx + VALUE]
#define CMP_R10_FROM_PTR_RDI_(VALUE) cmp r10, qword ptr [rdi + VALUE]
#define CMP_R10_FROM_PTR_RSI_(VALUE) cmp r10, qword ptr [rsi + VALUE]
#define CMP_R10_FROM_PTR_RBP_(VALUE) cmp r10, qword ptr [rbp + VALUE]
#define CMP_R10_FROM_PTR_RSP_(VALUE) cmp r10, qword ptr [rsp + VALUE]
#define CMP_R10_FROM_PTR_R8_(VALUE) cmp r10, qword ptr [r8 + VALUE]
#define CMP_R10_FROM_PTR_R9_(VALUE) cmp r10, qword ptr [r9 + VALUE]
#define CMP_R10_FROM_PTR_R10_(VALUE) cmp r10, qword ptr [r10 + VALUE]
#define CMP_R10_FROM_PTR_R11_(VALUE) cmp r10, qword ptr [r11 + VALUE]
#define CMP_R10_FROM_PTR_R12_(VALUE) cmp r10, qword ptr [r12 + VALUE]
#define CMP_R10_FROM_PTR_R13_(VALUE) cmp r10, qword ptr [r13 + VALUE]
#define CMP_R10_FROM_PTR_R14_(VALUE) cmp r10, qword ptr [r14 + VALUE]
#define CMP_R10_FROM_PTR_R15_(VALUE) cmp r10, qword ptr [r15 + VALUE]
#define CMP_R10_FROM_PTR_EAX_(VALUE) cmp r10, qword ptr [eax + VALUE]
#define CMP_R10_FROM_PTR_EBX_(VALUE) cmp r10, qword ptr [ebx + VALUE]
#define CMP_R10_FROM_PTR_ECX_(VALUE) cmp r10, qword ptr [ecx + VALUE]
#define CMP_R10_FROM_PTR_EDX_(VALUE) cmp r10, qword ptr [edx + VALUE]
#define CMP_R10_FROM_PTR_EDI_(VALUE) cmp r10, qword ptr [edi + VALUE]
#define CMP_R10_FROM_PTR_ESI_(VALUE) cmp r10, qword ptr [esi + VALUE]
#define CMP_R10_FROM_PTR_EBP_(VALUE) cmp r10, qword ptr [ebp + VALUE]
#define CMP_R10_FROM_PTR_ESP_(VALUE) cmp r10, qword ptr [esp + VALUE]

#define CMP_R11_FROM_PTR_RAX_(VALUE) cmp r11, qword ptr [rax + VALUE]
#define CMP_R11_FROM_PTR_RBX_(VALUE) cmp r11, qword ptr [rbx + VALUE]
#define CMP_R11_FROM_PTR_RCX_(VALUE) cmp r11, qword ptr [rcx + VALUE]
#define CMP_R11_FROM_PTR_RDX_(VALUE) cmp r11, qword ptr [rdx + VALUE]
#define CMP_R11_FROM_PTR_RDI_(VALUE) cmp r11, qword ptr [rdi + VALUE]
#define CMP_R11_FROM_PTR_RSI_(VALUE) cmp r11, qword ptr [rsi + VALUE]
#define CMP_R11_FROM_PTR_RBP_(VALUE) cmp r11, qword ptr [rbp + VALUE]
#define CMP_R11_FROM_PTR_RSP_(VALUE) cmp r11, qword ptr [rsp + VALUE]
#define CMP_R11_FROM_PTR_R8_(VALUE) cmp r11, qword ptr [r8 + VALUE]
#define CMP_R11_FROM_PTR_R9_(VALUE) cmp r11, qword ptr [r9 + VALUE]
#define CMP_R11_FROM_PTR_R10_(VALUE) cmp r11, qword ptr [r10 + VALUE]
#define CMP_R11_FROM_PTR_R11_(VALUE) cmp r11, qword ptr [r11 + VALUE]
#define CMP_R11_FROM_PTR_R12_(VALUE) cmp r11, qword ptr [r12 + VALUE]
#define CMP_R11_FROM_PTR_R13_(VALUE) cmp r11, qword ptr [r13 + VALUE]
#define CMP_R11_FROM_PTR_R14_(VALUE) cmp r11, qword ptr [r14 + VALUE]
#define CMP_R11_FROM_PTR_R15_(VALUE) cmp r11, qword ptr [r15 + VALUE]
#define CMP_R11_FROM_PTR_EAX_(VALUE) cmp r11, qword ptr [eax + VALUE]
#define CMP_R11_FROM_PTR_EBX_(VALUE) cmp r11, qword ptr [ebx + VALUE]
#define CMP_R11_FROM_PTR_ECX_(VALUE) cmp r11, qword ptr [ecx + VALUE]
#define CMP_R11_FROM_PTR_EDX_(VALUE) cmp r11, qword ptr [edx + VALUE]
#define CMP_R11_FROM_PTR_EDI_(VALUE) cmp r11, qword ptr [edi + VALUE]
#define CMP_R11_FROM_PTR_ESI_(VALUE) cmp r11, qword ptr [esi + VALUE]
#define CMP_R11_FROM_PTR_EBP_(VALUE) cmp r11, qword ptr [ebp + VALUE]
#define CMP_R11_FROM_PTR_ESP_(VALUE) cmp r11, qword ptr [esp + VALUE]

#define CMP_R12_FROM_PTR_RAX_(VALUE) cmp r12, qword ptr [rax + VALUE]
#define CMP_R12_FROM_PTR_RBX_(VALUE) cmp r12, qword ptr [rbx + VALUE]
#define CMP_R12_FROM_PTR_RCX_(VALUE) cmp r12, qword ptr [rcx + VALUE]
#define CMP_R12_FROM_PTR_RDX_(VALUE) cmp r12, qword ptr [rdx + VALUE]
#define CMP_R12_FROM_PTR_RDI_(VALUE) cmp r12, qword ptr [rdi + VALUE]
#define CMP_R12_FROM_PTR_RSI_(VALUE) cmp r12, qword ptr [rsi + VALUE]
#define CMP_R12_FROM_PTR_RBP_(VALUE) cmp r12, qword ptr [rbp + VALUE]
#define CMP_R12_FROM_PTR_RSP_(VALUE) cmp r12, qword ptr [rsp + VALUE]
#define CMP_R12_FROM_PTR_R8_(VALUE) cmp r12, qword ptr [r8 + VALUE]
#define CMP_R12_FROM_PTR_R9_(VALUE) cmp r12, qword ptr [r9 + VALUE]
#define CMP_R12_FROM_PTR_R10_(VALUE) cmp r12, qword ptr [r10 + VALUE]
#define CMP_R12_FROM_PTR_R11_(VALUE) cmp r12, qword ptr [r11 + VALUE]
#define CMP_R12_FROM_PTR_R12_(VALUE) cmp r12, qword ptr [r12 + VALUE]
#define CMP_R12_FROM_PTR_R13_(VALUE) cmp r12, qword ptr [r13 + VALUE]
#define CMP_R12_FROM_PTR_R14_(VALUE) cmp r12, qword ptr [r14 + VALUE]
#define CMP_R12_FROM_PTR_R15_(VALUE) cmp r12, qword ptr [r15 + VALUE]
#define CMP_R12_FROM_PTR_EAX_(VALUE) cmp r12, qword ptr [eax + VALUE]
#define CMP_R12_FROM_PTR_EBX_(VALUE) cmp r12, qword ptr [ebx + VALUE]
#define CMP_R12_FROM_PTR_ECX_(VALUE) cmp r12, qword ptr [ecx + VALUE]
#define CMP_R12_FROM_PTR_EDX_(VALUE) cmp r12, qword ptr [edx + VALUE]
#define CMP_R12_FROM_PTR_EDI_(VALUE) cmp r12, qword ptr [edi + VALUE]
#define CMP_R12_FROM_PTR_ESI_(VALUE) cmp r12, qword ptr [esi + VALUE]
#define CMP_R12_FROM_PTR_EBP_(VALUE) cmp r12, qword ptr [ebp + VALUE]
#define CMP_R12_FROM_PTR_ESP_(VALUE) cmp r12, qword ptr [esp + VALUE]

#define CMP_R13_FROM_PTR_RAX_(VALUE) cmp r13, qword ptr [rax + VALUE]
#define CMP_R13_FROM_PTR_RBX_(VALUE) cmp r13, qword ptr [rbx + VALUE]
#define CMP_R13_FROM_PTR_RCX_(VALUE) cmp r13, qword ptr [rcx + VALUE]
#define CMP_R13_FROM_PTR_RDX_(VALUE) cmp r13, qword ptr [rdx + VALUE]
#define CMP_R13_FROM_PTR_RDI_(VALUE) cmp r13, qword ptr [rdi + VALUE]
#define CMP_R13_FROM_PTR_RSI_(VALUE) cmp r13, qword ptr [rsi + VALUE]
#define CMP_R13_FROM_PTR_RBP_(VALUE) cmp r13, qword ptr [rbp + VALUE]
#define CMP_R13_FROM_PTR_RSP_(VALUE) cmp r13, qword ptr [rsp + VALUE]
#define CMP_R13_FROM_PTR_R8_(VALUE) cmp r13, qword ptr [r8 + VALUE]
#define CMP_R13_FROM_PTR_R9_(VALUE) cmp r13, qword ptr [r9 + VALUE]
#define CMP_R13_FROM_PTR_R10_(VALUE) cmp r13, qword ptr [r10 + VALUE]
#define CMP_R13_FROM_PTR_R11_(VALUE) cmp r13, qword ptr [r11 + VALUE]
#define CMP_R13_FROM_PTR_R12_(VALUE) cmp r13, qword ptr [r12 + VALUE]
#define CMP_R13_FROM_PTR_R13_(VALUE) cmp r13, qword ptr [r13 + VALUE]
#define CMP_R13_FROM_PTR_R14_(VALUE) cmp r13, qword ptr [r14 + VALUE]
#define CMP_R13_FROM_PTR_R15_(VALUE) cmp r13, qword ptr [r15 + VALUE]
#define CMP_R13_FROM_PTR_EAX_(VALUE) cmp r13, qword ptr [eax + VALUE]
#define CMP_R13_FROM_PTR_EBX_(VALUE) cmp r13, qword ptr [ebx + VALUE]
#define CMP_R13_FROM_PTR_ECX_(VALUE) cmp r13, qword ptr [ecx + VALUE]
#define CMP_R13_FROM_PTR_EDX_(VALUE) cmp r13, qword ptr [edx + VALUE]
#define CMP_R13_FROM_PTR_EDI_(VALUE) cmp r13, qword ptr [edi + VALUE]
#define CMP_R13_FROM_PTR_ESI_(VALUE) cmp r13, qword ptr [esi + VALUE]
#define CMP_R13_FROM_PTR_EBP_(VALUE) cmp r13, qword ptr [ebp + VALUE]
#define CMP_R13_FROM_PTR_ESP_(VALUE) cmp r13, qword ptr [esp + VALUE]

#define CMP_R14_FROM_PTR_RAX_(VALUE) cmp r14, qword ptr [rax + VALUE]
#define CMP_R14_FROM_PTR_RBX_(VALUE) cmp r14, qword ptr [rbx + VALUE]
#define CMP_R14_FROM_PTR_RCX_(VALUE) cmp r14, qword ptr [rcx + VALUE]
#define CMP_R14_FROM_PTR_RDX_(VALUE) cmp r14, qword ptr [rdx + VALUE]
#define CMP_R14_FROM_PTR_RDI_(VALUE) cmp r14, qword ptr [rdi + VALUE]
#define CMP_R14_FROM_PTR_RSI_(VALUE) cmp r14, qword ptr [rsi + VALUE]
#define CMP_R14_FROM_PTR_RBP_(VALUE) cmp r14, qword ptr [rbp + VALUE]
#define CMP_R14_FROM_PTR_RSP_(VALUE) cmp r14, qword ptr [rsp + VALUE]
#define CMP_R14_FROM_PTR_R8_(VALUE) cmp r14, qword ptr [r8 + VALUE]
#define CMP_R14_FROM_PTR_R9_(VALUE) cmp r14, qword ptr [r9 + VALUE]
#define CMP_R14_FROM_PTR_R10_(VALUE) cmp r14, qword ptr [r10 + VALUE]
#define CMP_R14_FROM_PTR_R11_(VALUE) cmp r14, qword ptr [r11 + VALUE]
#define CMP_R14_FROM_PTR_R12_(VALUE) cmp r14, qword ptr [r12 + VALUE]
#define CMP_R14_FROM_PTR_R13_(VALUE) cmp r14, qword ptr [r13 + VALUE]
#define CMP_R14_FROM_PTR_R14_(VALUE) cmp r14, qword ptr [r14 + VALUE]
#define CMP_R14_FROM_PTR_R15_(VALUE) cmp r14, qword ptr [r15 + VALUE]
#define CMP_R14_FROM_PTR_EAX_(VALUE) cmp r14, qword ptr [eax + VALUE]
#define CMP_R14_FROM_PTR_EBX_(VALUE) cmp r14, qword ptr [ebx + VALUE]
#define CMP_R14_FROM_PTR_ECX_(VALUE) cmp r14, qword ptr [ecx + VALUE]
#define CMP_R14_FROM_PTR_EDX_(VALUE) cmp r14, qword ptr [edx + VALUE]
#define CMP_R14_FROM_PTR_EDI_(VALUE) cmp r14, qword ptr [edi + VALUE]
#define CMP_R14_FROM_PTR_ESI_(VALUE) cmp r14, qword ptr [esi + VALUE]
#define CMP_R14_FROM_PTR_EBP_(VALUE) cmp r14, qword ptr [ebp + VALUE]
#define CMP_R14_FROM_PTR_ESP_(VALUE) cmp r14, qword ptr [esp + VALUE]

#define CMP_R15_FROM_PTR_RAX_(VALUE) cmp r15, qword ptr [rax + VALUE]
#define CMP_R15_FROM_PTR_RBX_(VALUE) cmp r15, qword ptr [rbx + VALUE]
#define CMP_R15_FROM_PTR_RCX_(VALUE) cmp r15, qword ptr [rcx + VALUE]
#define CMP_R15_FROM_PTR_RDX_(VALUE) cmp r15, qword ptr [rdx + VALUE]
#define CMP_R15_FROM_PTR_RDI_(VALUE) cmp r15, qword ptr [rdi + VALUE]
#define CMP_R15_FROM_PTR_RSI_(VALUE) cmp r15, qword ptr [rsi + VALUE]
#define CMP_R15_FROM_PTR_RBP_(VALUE) cmp r15, qword ptr [rbp + VALUE]
#define CMP_R15_FROM_PTR_RSP_(VALUE) cmp r15, qword ptr [rsp + VALUE]
#define CMP_R15_FROM_PTR_R8_(VALUE) cmp r15, qword ptr [r8 + VALUE]
#define CMP_R15_FROM_PTR_R9_(VALUE) cmp r15, qword ptr [r9 + VALUE]
#define CMP_R15_FROM_PTR_R10_(VALUE) cmp r15, qword ptr [r10 + VALUE]
#define CMP_R15_FROM_PTR_R11_(VALUE) cmp r15, qword ptr [r11 + VALUE]
#define CMP_R15_FROM_PTR_R12_(VALUE) cmp r15, qword ptr [r12 + VALUE]
#define CMP_R15_FROM_PTR_R13_(VALUE) cmp r15, qword ptr [r13 + VALUE]
#define CMP_R15_FROM_PTR_R14_(VALUE) cmp r15, qword ptr [r14 + VALUE]
#define CMP_R15_FROM_PTR_R15_(VALUE) cmp r15, qword ptr [r15 + VALUE]
#define CMP_R15_FROM_PTR_EAX_(VALUE) cmp r15, qword ptr [eax + VALUE]
#define CMP_R15_FROM_PTR_EBX_(VALUE) cmp r15, qword ptr [ebx + VALUE]
#define CMP_R15_FROM_PTR_ECX_(VALUE) cmp r15, qword ptr [ecx + VALUE]
#define CMP_R15_FROM_PTR_EDX_(VALUE) cmp r15, qword ptr [edx + VALUE]
#define CMP_R15_FROM_PTR_EDI_(VALUE) cmp r15, qword ptr [edi + VALUE]
#define CMP_R15_FROM_PTR_ESI_(VALUE) cmp r15, qword ptr [esi + VALUE]
#define CMP_R15_FROM_PTR_EBP_(VALUE) cmp r15, qword ptr [ebp + VALUE]
#define CMP_R15_FROM_PTR_ESP_(VALUE) cmp r15, qword ptr [esp + VALUE]

#define CMP_RAX_TO_PTR_RAX_(VALUE) cmp qword ptr [rax + VALUE], rax
#define CMP_RAX_TO_PTR_RBX_(VALUE) cmp qword ptr [rbx + VALUE], rax
#define CMP_RAX_TO_PTR_RCX_(VALUE) cmp qword ptr [rcx + VALUE], rax
#define CMP_RAX_TO_PTR_RDX_(VALUE) cmp qword ptr [rdx + VALUE], rax
#define CMP_RAX_TO_PTR_RDI_(VALUE) cmp qword ptr [rdi + VALUE], rax
#define CMP_RAX_TO_PTR_RSI_(VALUE) cmp qword ptr [rsi + VALUE], rax
#define CMP_RAX_TO_PTR_RBP_(VALUE) cmp qword ptr [rbp + VALUE], rax
#define CMP_RAX_TO_PTR_RSP_(VALUE) cmp qword ptr [rsp + VALUE], rax
#define CMP_RAX_TO_PTR_R8_(VALUE) cmp qword ptr [r8 + VALUE], rax
#define CMP_RAX_TO_PTR_R9_(VALUE) cmp qword ptr [r9 + VALUE], rax
#define CMP_RAX_TO_PTR_R10_(VALUE) cmp qword ptr [r10 + VALUE], rax
#define CMP_RAX_TO_PTR_R11_(VALUE) cmp qword ptr [r11 + VALUE], rax
#define CMP_RAX_TO_PTR_R12_(VALUE) cmp qword ptr [r12 + VALUE], rax
#define CMP_RAX_TO_PTR_R13_(VALUE) cmp qword ptr [r13 + VALUE], rax
#define CMP_RAX_TO_PTR_R14_(VALUE) cmp qword ptr [r14 + VALUE], rax
#define CMP_RAX_TO_PTR_R15_(VALUE) cmp qword ptr [r15 + VALUE], rax
#define CMP_RAX_TO_PTR_EAX_(VALUE) cmp qword ptr [eax + VALUE], rax
#define CMP_RAX_TO_PTR_EBX_(VALUE) cmp qword ptr [ebx + VALUE], rax
#define CMP_RAX_TO_PTR_ECX_(VALUE) cmp qword ptr [ecx + VALUE], rax
#define CMP_RAX_TO_PTR_EDX_(VALUE) cmp qword ptr [edx + VALUE], rax
#define CMP_RAX_TO_PTR_EDI_(VALUE) cmp qword ptr [edi + VALUE], rax
#define CMP_RAX_TO_PTR_ESI_(VALUE) cmp qword ptr [esi + VALUE], rax
#define CMP_RAX_TO_PTR_EBP_(VALUE) cmp qword ptr [ebp + VALUE], rax
#define CMP_RAX_TO_PTR_ESP_(VALUE) cmp qword ptr [esp + VALUE], rax

#define CMP_RBX_TO_PTR_RAX_(VALUE) cmp qword ptr [rax + VALUE], rbx
#define CMP_RBX_TO_PTR_RBX_(VALUE) cmp qword ptr [rbx + VALUE], rbx
#define CMP_RBX_TO_PTR_RCX_(VALUE) cmp qword ptr [rcx + VALUE], rbx
#define CMP_RBX_TO_PTR_RDX_(VALUE) cmp qword ptr [rdx + VALUE], rbx
#define CMP_RBX_TO_PTR_RDI_(VALUE) cmp qword ptr [rdi + VALUE], rbx
#define CMP_RBX_TO_PTR_RSI_(VALUE) cmp qword ptr [rsi + VALUE], rbx
#define CMP_RBX_TO_PTR_RBP_(VALUE) cmp qword ptr [rbp + VALUE], rbx
#define CMP_RBX_TO_PTR_RSP_(VALUE) cmp qword ptr [rsp + VALUE], rbx
#define CMP_RBX_TO_PTR_R8_(VALUE) cmp qword ptr [r8 + VALUE], rbx
#define CMP_RBX_TO_PTR_R9_(VALUE) cmp qword ptr [r9 + VALUE], rbx
#define CMP_RBX_TO_PTR_R10_(VALUE) cmp qword ptr [r10 + VALUE], rbx
#define CMP_RBX_TO_PTR_R11_(VALUE) cmp qword ptr [r11 + VALUE], rbx
#define CMP_RBX_TO_PTR_R12_(VALUE) cmp qword ptr [r12 + VALUE], rbx
#define CMP_RBX_TO_PTR_R13_(VALUE) cmp qword ptr [r13 + VALUE], rbx
#define CMP_RBX_TO_PTR_R14_(VALUE) cmp qword ptr [r14 + VALUE], rbx
#define CMP_RBX_TO_PTR_R15_(VALUE) cmp qword ptr [r15 + VALUE], rbx
#define CMP_RBX_TO_PTR_EAX_(VALUE) cmp qword ptr [eax + VALUE], rbx
#define CMP_RBX_TO_PTR_EBX_(VALUE) cmp qword ptr [ebx + VALUE], rbx
#define CMP_RBX_TO_PTR_ECX_(VALUE) cmp qword ptr [ecx + VALUE], rbx
#define CMP_RBX_TO_PTR_EDX_(VALUE) cmp qword ptr [edx + VALUE], rbx
#define CMP_RBX_TO_PTR_EDI_(VALUE) cmp qword ptr [edi + VALUE], rbx
#define CMP_RBX_TO_PTR_ESI_(VALUE) cmp qword ptr [esi + VALUE], rbx
#define CMP_RBX_TO_PTR_EBP_(VALUE) cmp qword ptr [ebp + VALUE], rbx
#define CMP_RBX_TO_PTR_ESP_(VALUE) cmp qword ptr [esp + VALUE], rbx

#define CMP_RCX_TO_PTR_RAX_(VALUE) cmp qword ptr [rax + VALUE], rcx
#define CMP_RCX_TO_PTR_RBX_(VALUE) cmp qword ptr [rbx + VALUE], rcx
#define CMP_RCX_TO_PTR_RCX_(VALUE) cmp qword ptr [rcx + VALUE], rcx
#define CMP_RCX_TO_PTR_RDX_(VALUE) cmp qword ptr [rdx + VALUE], rcx
#define CMP_RCX_TO_PTR_RDI_(VALUE) cmp qword ptr [rdi + VALUE], rcx
#define CMP_RCX_TO_PTR_RSI_(VALUE) cmp qword ptr [rsi + VALUE], rcx
#define CMP_RCX_TO_PTR_RBP_(VALUE) cmp qword ptr [rbp + VALUE], rcx
#define CMP_RCX_TO_PTR_RSP_(VALUE) cmp qword ptr [rsp + VALUE], rcx
#define CMP_RCX_TO_PTR_R8_(VALUE) cmp qword ptr [r8 + VALUE], rcx
#define CMP_RCX_TO_PTR_R9_(VALUE) cmp qword ptr [r9 + VALUE], rcx
#define CMP_RCX_TO_PTR_R10_(VALUE) cmp qword ptr [r10 + VALUE], rcx
#define CMP_RCX_TO_PTR_R11_(VALUE) cmp qword ptr [r11 + VALUE], rcx
#define CMP_RCX_TO_PTR_R12_(VALUE) cmp qword ptr [r12 + VALUE], rcx
#define CMP_RCX_TO_PTR_R13_(VALUE) cmp qword ptr [r13 + VALUE], rcx
#define CMP_RCX_TO_PTR_R14_(VALUE) cmp qword ptr [r14 + VALUE], rcx
#define CMP_RCX_TO_PTR_R15_(VALUE) cmp qword ptr [r15 + VALUE], rcx
#define CMP_RCX_TO_PTR_EAX_(VALUE) cmp qword ptr [eax + VALUE], rcx
#define CMP_RCX_TO_PTR_EBX_(VALUE) cmp qword ptr [ebx + VALUE], rcx
#define CMP_RCX_TO_PTR_ECX_(VALUE) cmp qword ptr [ecx + VALUE], rcx
#define CMP_RCX_TO_PTR_EDX_(VALUE) cmp qword ptr [edx + VALUE], rcx
#define CMP_RCX_TO_PTR_EDI_(VALUE) cmp qword ptr [edi + VALUE], rcx
#define CMP_RCX_TO_PTR_ESI_(VALUE) cmp qword ptr [esi + VALUE], rcx
#define CMP_RCX_TO_PTR_EBP_(VALUE) cmp qword ptr [ebp + VALUE], rcx
#define CMP_RCX_TO_PTR_ESP_(VALUE) cmp qword ptr [esp + VALUE], rcx

#define CMP_RDX_TO_PTR_RAX_(VALUE) cmp qword ptr [rax + VALUE], rdx
#define CMP_RDX_TO_PTR_RBX_(VALUE) cmp qword ptr [rbx + VALUE], rdx
#define CMP_RDX_TO_PTR_RCX_(VALUE) cmp qword ptr [rcx + VALUE], rdx
#define CMP_RDX_TO_PTR_RDX_(VALUE) cmp qword ptr [rdx + VALUE], rdx
#define CMP_RDX_TO_PTR_RDI_(VALUE) cmp qword ptr [rdi + VALUE], rdx
#define CMP_RDX_TO_PTR_RSI_(VALUE) cmp qword ptr [rsi + VALUE], rdx
#define CMP_RDX_TO_PTR_RBP_(VALUE) cmp qword ptr [rbp + VALUE], rdx
#define CMP_RDX_TO_PTR_RSP_(VALUE) cmp qword ptr [rsp + VALUE], rdx
#define CMP_RDX_TO_PTR_R8_(VALUE) cmp qword ptr [r8 + VALUE], rdx
#define CMP_RDX_TO_PTR_R9_(VALUE) cmp qword ptr [r9 + VALUE], rdx
#define CMP_RDX_TO_PTR_R10_(VALUE) cmp qword ptr [r10 + VALUE], rdx
#define CMP_RDX_TO_PTR_R11_(VALUE) cmp qword ptr [r11 + VALUE], rdx
#define CMP_RDX_TO_PTR_R12_(VALUE) cmp qword ptr [r12 + VALUE], rdx
#define CMP_RDX_TO_PTR_R13_(VALUE) cmp qword ptr [r13 + VALUE], rdx
#define CMP_RDX_TO_PTR_R14_(VALUE) cmp qword ptr [r14 + VALUE], rdx
#define CMP_RDX_TO_PTR_R15_(VALUE) cmp qword ptr [r15 + VALUE], rdx
#define CMP_RDX_TO_PTR_EAX_(VALUE) cmp qword ptr [eax + VALUE], rdx
#define CMP_RDX_TO_PTR_EBX_(VALUE) cmp qword ptr [ebx + VALUE], rdx
#define CMP_RDX_TO_PTR_ECX_(VALUE) cmp qword ptr [ecx + VALUE], rdx
#define CMP_RDX_TO_PTR_EDX_(VALUE) cmp qword ptr [edx + VALUE], rdx
#define CMP_RDX_TO_PTR_EDI_(VALUE) cmp qword ptr [edi + VALUE], rdx
#define CMP_RDX_TO_PTR_ESI_(VALUE) cmp qword ptr [esi + VALUE], rdx
#define CMP_RDX_TO_PTR_EBP_(VALUE) cmp qword ptr [ebp + VALUE], rdx
#define CMP_RDX_TO_PTR_ESP_(VALUE) cmp qword ptr [esp + VALUE], rdx

#define CMP_RDI_TO_PTR_RAX_(VALUE) cmp qword ptr [rax + VALUE], rdi
#define CMP_RDI_TO_PTR_RBX_(VALUE) cmp qword ptr [rbx + VALUE], rdi
#define CMP_RDI_TO_PTR_RCX_(VALUE) cmp qword ptr [rcx + VALUE], rdi
#define CMP_RDI_TO_PTR_RDX_(VALUE) cmp qword ptr [rdx + VALUE], rdi
#define CMP_RDI_TO_PTR_RDI_(VALUE) cmp qword ptr [rdi + VALUE], rdi
#define CMP_RDI_TO_PTR_RSI_(VALUE) cmp qword ptr [rsi + VALUE], rdi
#define CMP_RDI_TO_PTR_RBP_(VALUE) cmp qword ptr [rbp + VALUE], rdi
#define CMP_RDI_TO_PTR_RSP_(VALUE) cmp qword ptr [rsp + VALUE], rdi
#define CMP_RDI_TO_PTR_R8_(VALUE) cmp qword ptr [r8 + VALUE], rdi
#define CMP_RDI_TO_PTR_R9_(VALUE) cmp qword ptr [r9 + VALUE], rdi
#define CMP_RDI_TO_PTR_R10_(VALUE) cmp qword ptr [r10 + VALUE], rdi
#define CMP_RDI_TO_PTR_R11_(VALUE) cmp qword ptr [r11 + VALUE], rdi
#define CMP_RDI_TO_PTR_R12_(VALUE) cmp qword ptr [r12 + VALUE], rdi
#define CMP_RDI_TO_PTR_R13_(VALUE) cmp qword ptr [r13 + VALUE], rdi
#define CMP_RDI_TO_PTR_R14_(VALUE) cmp qword ptr [r14 + VALUE], rdi
#define CMP_RDI_TO_PTR_R15_(VALUE) cmp qword ptr [r15 + VALUE], rdi
#define CMP_RDI_TO_PTR_EAX_(VALUE) cmp qword ptr [eax + VALUE], rdi
#define CMP_RDI_TO_PTR_EBX_(VALUE) cmp qword ptr [ebx + VALUE], rdi
#define CMP_RDI_TO_PTR_ECX_(VALUE) cmp qword ptr [ecx + VALUE], rdi
#define CMP_RDI_TO_PTR_EDX_(VALUE) cmp qword ptr [edx + VALUE], rdi
#define CMP_RDI_TO_PTR_EDI_(VALUE) cmp qword ptr [edi + VALUE], rdi
#define CMP_RDI_TO_PTR_ESI_(VALUE) cmp qword ptr [esi + VALUE], rdi
#define CMP_RDI_TO_PTR_EBP_(VALUE) cmp qword ptr [ebp + VALUE], rdi
#define CMP_RDI_TO_PTR_ESP_(VALUE) cmp qword ptr [esp + VALUE], rdi

#define CMP_RSI_TO_PTR_RAX_(VALUE) cmp qword ptr [rax + VALUE], rsi
#define CMP_RSI_TO_PTR_RBX_(VALUE) cmp qword ptr [rbx + VALUE], rsi
#define CMP_RSI_TO_PTR_RCX_(VALUE) cmp qword ptr [rcx + VALUE], rsi
#define CMP_RSI_TO_PTR_RDX_(VALUE) cmp qword ptr [rdx + VALUE], rsi
#define CMP_RSI_TO_PTR_RDI_(VALUE) cmp qword ptr [rdi + VALUE], rsi
#define CMP_RSI_TO_PTR_RSI_(VALUE) cmp qword ptr [rsi + VALUE], rsi
#define CMP_RSI_TO_PTR_RBP_(VALUE) cmp qword ptr [rbp + VALUE], rsi
#define CMP_RSI_TO_PTR_RSP_(VALUE) cmp qword ptr [rsp + VALUE], rsi
#define CMP_RSI_TO_PTR_R8_(VALUE) cmp qword ptr [r8 + VALUE], rsi
#define CMP_RSI_TO_PTR_R9_(VALUE) cmp qword ptr [r9 + VALUE], rsi
#define CMP_RSI_TO_PTR_R10_(VALUE) cmp qword ptr [r10 + VALUE], rsi
#define CMP_RSI_TO_PTR_R11_(VALUE) cmp qword ptr [r11 + VALUE], rsi
#define CMP_RSI_TO_PTR_R12_(VALUE) cmp qword ptr [r12 + VALUE], rsi
#define CMP_RSI_TO_PTR_R13_(VALUE) cmp qword ptr [r13 + VALUE], rsi
#define CMP_RSI_TO_PTR_R14_(VALUE) cmp qword ptr [r14 + VALUE], rsi
#define CMP_RSI_TO_PTR_R15_(VALUE) cmp qword ptr [r15 + VALUE], rsi
#define CMP_RSI_TO_PTR_EAX_(VALUE) cmp qword ptr [eax + VALUE], rsi
#define CMP_RSI_TO_PTR_EBX_(VALUE) cmp qword ptr [ebx + VALUE], rsi
#define CMP_RSI_TO_PTR_ECX_(VALUE) cmp qword ptr [ecx + VALUE], rsi
#define CMP_RSI_TO_PTR_EDX_(VALUE) cmp qword ptr [edx + VALUE], rsi
#define CMP_RSI_TO_PTR_EDI_(VALUE) cmp qword ptr [edi + VALUE], rsi
#define CMP_RSI_TO_PTR_ESI_(VALUE) cmp qword ptr [esi + VALUE], rsi
#define CMP_RSI_TO_PTR_EBP_(VALUE) cmp qword ptr [ebp + VALUE], rsi
#define CMP_RSI_TO_PTR_ESP_(VALUE) cmp qword ptr [esp + VALUE], rsi

#define CMP_RBP_TO_PTR_RAX_(VALUE) cmp qword ptr [rax + VALUE], rbp
#define CMP_RBP_TO_PTR_RBX_(VALUE) cmp qword ptr [rbx + VALUE], rbp
#define CMP_RBP_TO_PTR_RCX_(VALUE) cmp qword ptr [rcx + VALUE], rbp
#define CMP_RBP_TO_PTR_RDX_(VALUE) cmp qword ptr [rdx + VALUE], rbp
#define CMP_RBP_TO_PTR_RDI_(VALUE) cmp qword ptr [rdi + VALUE], rbp
#define CMP_RBP_TO_PTR_RSI_(VALUE) cmp qword ptr [rsi + VALUE], rbp
#define CMP_RBP_TO_PTR_RBP_(VALUE) cmp qword ptr [rbp + VALUE], rbp
#define CMP_RBP_TO_PTR_RSP_(VALUE) cmp qword ptr [rsp + VALUE], rbp
#define CMP_RBP_TO_PTR_R8_(VALUE) cmp qword ptr [r8 + VALUE], rbp
#define CMP_RBP_TO_PTR_R9_(VALUE) cmp qword ptr [r9 + VALUE], rbp
#define CMP_RBP_TO_PTR_R10_(VALUE) cmp qword ptr [r10 + VALUE], rbp
#define CMP_RBP_TO_PTR_R11_(VALUE) cmp qword ptr [r11 + VALUE], rbp
#define CMP_RBP_TO_PTR_R12_(VALUE) cmp qword ptr [r12 + VALUE], rbp
#define CMP_RBP_TO_PTR_R13_(VALUE) cmp qword ptr [r13 + VALUE], rbp
#define CMP_RBP_TO_PTR_R14_(VALUE) cmp qword ptr [r14 + VALUE], rbp
#define CMP_RBP_TO_PTR_R15_(VALUE) cmp qword ptr [r15 + VALUE], rbp
#define CMP_RBP_TO_PTR_EAX_(VALUE) cmp qword ptr [eax + VALUE], rbp
#define CMP_RBP_TO_PTR_EBX_(VALUE) cmp qword ptr [ebx + VALUE], rbp
#define CMP_RBP_TO_PTR_ECX_(VALUE) cmp qword ptr [ecx + VALUE], rbp
#define CMP_RBP_TO_PTR_EDX_(VALUE) cmp qword ptr [edx + VALUE], rbp
#define CMP_RBP_TO_PTR_EDI_(VALUE) cmp qword ptr [edi + VALUE], rbp
#define CMP_RBP_TO_PTR_ESI_(VALUE) cmp qword ptr [esi + VALUE], rbp
#define CMP_RBP_TO_PTR_EBP_(VALUE) cmp qword ptr [ebp + VALUE], rbp
#define CMP_RBP_TO_PTR_ESP_(VALUE) cmp qword ptr [esp + VALUE], rbp

#define CMP_RSP_TO_PTR_RAX_(VALUE) cmp qword ptr [rax + VALUE], rsp
#define CMP_RSP_TO_PTR_RBX_(VALUE) cmp qword ptr [rbx + VALUE], rsp
#define CMP_RSP_TO_PTR_RCX_(VALUE) cmp qword ptr [rcx + VALUE], rsp
#define CMP_RSP_TO_PTR_RDX_(VALUE) cmp qword ptr [rdx + VALUE], rsp
#define CMP_RSP_TO_PTR_RDI_(VALUE) cmp qword ptr [rdi + VALUE], rsp
#define CMP_RSP_TO_PTR_RSI_(VALUE) cmp qword ptr [rsi + VALUE], rsp
#define CMP_RSP_TO_PTR_RBP_(VALUE) cmp qword ptr [rbp + VALUE], rsp
#define CMP_RSP_TO_PTR_RSP_(VALUE) cmp qword ptr [rsp + VALUE], rsp
#define CMP_RSP_TO_PTR_R8_(VALUE) cmp qword ptr [r8 + VALUE], rsp
#define CMP_RSP_TO_PTR_R9_(VALUE) cmp qword ptr [r9 + VALUE], rsp
#define CMP_RSP_TO_PTR_R10_(VALUE) cmp qword ptr [r10 + VALUE], rsp
#define CMP_RSP_TO_PTR_R11_(VALUE) cmp qword ptr [r11 + VALUE], rsp
#define CMP_RSP_TO_PTR_R12_(VALUE) cmp qword ptr [r12 + VALUE], rsp
#define CMP_RSP_TO_PTR_R13_(VALUE) cmp qword ptr [r13 + VALUE], rsp
#define CMP_RSP_TO_PTR_R14_(VALUE) cmp qword ptr [r14 + VALUE], rsp
#define CMP_RSP_TO_PTR_R15_(VALUE) cmp qword ptr [r15 + VALUE], rsp
#define CMP_RSP_TO_PTR_EAX_(VALUE) cmp qword ptr [eax + VALUE], rsp
#define CMP_RSP_TO_PTR_EBX_(VALUE) cmp qword ptr [ebx + VALUE], rsp
#define CMP_RSP_TO_PTR_ECX_(VALUE) cmp qword ptr [ecx + VALUE], rsp
#define CMP_RSP_TO_PTR_EDX_(VALUE) cmp qword ptr [edx + VALUE], rsp
#define CMP_RSP_TO_PTR_EDI_(VALUE) cmp qword ptr [edi + VALUE], rsp
#define CMP_RSP_TO_PTR_ESI_(VALUE) cmp qword ptr [esi + VALUE], rsp
#define CMP_RSP_TO_PTR_EBP_(VALUE) cmp qword ptr [ebp + VALUE], rsp
#define CMP_RSP_TO_PTR_ESP_(VALUE) cmp qword ptr [esp + VALUE], rsp

#define CMP_R8_TO_PTR_RAX_(VALUE) cmp qword ptr [rax + VALUE], r8
#define CMP_R8_TO_PTR_RBX_(VALUE) cmp qword ptr [rbx + VALUE], r8
#define CMP_R8_TO_PTR_RCX_(VALUE) cmp qword ptr [rcx + VALUE], r8
#define CMP_R8_TO_PTR_RDX_(VALUE) cmp qword ptr [rdx + VALUE], r8
#define CMP_R8_TO_PTR_RDI_(VALUE) cmp qword ptr [rdi + VALUE], r8
#define CMP_R8_TO_PTR_RSI_(VALUE) cmp qword ptr [rsi + VALUE], r8
#define CMP_R8_TO_PTR_RBP_(VALUE) cmp qword ptr [rbp + VALUE], r8
#define CMP_R8_TO_PTR_RSP_(VALUE) cmp qword ptr [rsp + VALUE], r8
#define CMP_R8_TO_PTR_R8_(VALUE) cmp qword ptr [r8 + VALUE], r8
#define CMP_R8_TO_PTR_R9_(VALUE) cmp qword ptr [r9 + VALUE], r8
#define CMP_R8_TO_PTR_R10_(VALUE) cmp qword ptr [r10 + VALUE], r8
#define CMP_R8_TO_PTR_R11_(VALUE) cmp qword ptr [r11 + VALUE], r8
#define CMP_R8_TO_PTR_R12_(VALUE) cmp qword ptr [r12 + VALUE], r8
#define CMP_R8_TO_PTR_R13_(VALUE) cmp qword ptr [r13 + VALUE], r8
#define CMP_R8_TO_PTR_R14_(VALUE) cmp qword ptr [r14 + VALUE], r8
#define CMP_R8_TO_PTR_R15_(VALUE) cmp qword ptr [r15 + VALUE], r8
#define CMP_R8_TO_PTR_EAX_(VALUE) cmp qword ptr [eax + VALUE], r8
#define CMP_R8_TO_PTR_EBX_(VALUE) cmp qword ptr [ebx + VALUE], r8
#define CMP_R8_TO_PTR_ECX_(VALUE) cmp qword ptr [ecx + VALUE], r8
#define CMP_R8_TO_PTR_EDX_(VALUE) cmp qword ptr [edx + VALUE], r8
#define CMP_R8_TO_PTR_EDI_(VALUE) cmp qword ptr [edi + VALUE], r8
#define CMP_R8_TO_PTR_ESI_(VALUE) cmp qword ptr [esi + VALUE], r8
#define CMP_R8_TO_PTR_EBP_(VALUE) cmp qword ptr [ebp + VALUE], r8
#define CMP_R8_TO_PTR_ESP_(VALUE) cmp qword ptr [esp + VALUE], r8

#define CMP_R9_TO_PTR_RAX_(VALUE) cmp qword ptr [rax + VALUE], r9
#define CMP_R9_TO_PTR_RBX_(VALUE) cmp qword ptr [rbx + VALUE], r9
#define CMP_R9_TO_PTR_RCX_(VALUE) cmp qword ptr [rcx + VALUE], r9
#define CMP_R9_TO_PTR_RDX_(VALUE) cmp qword ptr [rdx + VALUE], r9
#define CMP_R9_TO_PTR_RDI_(VALUE) cmp qword ptr [rdi + VALUE], r9
#define CMP_R9_TO_PTR_RSI_(VALUE) cmp qword ptr [rsi + VALUE], r9
#define CMP_R9_TO_PTR_RBP_(VALUE) cmp qword ptr [rbp + VALUE], r9
#define CMP_R9_TO_PTR_RSP_(VALUE) cmp qword ptr [rsp + VALUE], r9
#define CMP_R9_TO_PTR_R8_(VALUE) cmp qword ptr [r8 + VALUE], r9
#define CMP_R9_TO_PTR_R9_(VALUE) cmp qword ptr [r9 + VALUE], r9
#define CMP_R9_TO_PTR_R10_(VALUE) cmp qword ptr [r10 + VALUE], r9
#define CMP_R9_TO_PTR_R11_(VALUE) cmp qword ptr [r11 + VALUE], r9
#define CMP_R9_TO_PTR_R12_(VALUE) cmp qword ptr [r12 + VALUE], r9
#define CMP_R9_TO_PTR_R13_(VALUE) cmp qword ptr [r13 + VALUE], r9
#define CMP_R9_TO_PTR_R14_(VALUE) cmp qword ptr [r14 + VALUE], r9
#define CMP_R9_TO_PTR_R15_(VALUE) cmp qword ptr [r15 + VALUE], r9
#define CMP_R9_TO_PTR_EAX_(VALUE) cmp qword ptr [eax + VALUE], r9
#define CMP_R9_TO_PTR_EBX_(VALUE) cmp qword ptr [ebx + VALUE], r9
#define CMP_R9_TO_PTR_ECX_(VALUE) cmp qword ptr [ecx + VALUE], r9
#define CMP_R9_TO_PTR_EDX_(VALUE) cmp qword ptr [edx + VALUE], r9
#define CMP_R9_TO_PTR_EDI_(VALUE) cmp qword ptr [edi + VALUE], r9
#define CMP_R9_TO_PTR_ESI_(VALUE) cmp qword ptr [esi + VALUE], r9
#define CMP_R9_TO_PTR_EBP_(VALUE) cmp qword ptr [ebp + VALUE], r9
#define CMP_R9_TO_PTR_ESP_(VALUE) cmp qword ptr [esp + VALUE], r9

#define CMP_R10_TO_PTR_RAX_(VALUE) cmp qword ptr [rax + VALUE], r10
#define CMP_R10_TO_PTR_RBX_(VALUE) cmp qword ptr [rbx + VALUE], r10
#define CMP_R10_TO_PTR_RCX_(VALUE) cmp qword ptr [rcx + VALUE], r10
#define CMP_R10_TO_PTR_RDX_(VALUE) cmp qword ptr [rdx + VALUE], r10
#define CMP_R10_TO_PTR_RDI_(VALUE) cmp qword ptr [rdi + VALUE], r10
#define CMP_R10_TO_PTR_RSI_(VALUE) cmp qword ptr [rsi + VALUE], r10
#define CMP_R10_TO_PTR_RBP_(VALUE) cmp qword ptr [rbp + VALUE], r10
#define CMP_R10_TO_PTR_RSP_(VALUE) cmp qword ptr [rsp + VALUE], r10
#define CMP_R10_TO_PTR_R8_(VALUE) cmp qword ptr [r8 + VALUE], r10
#define CMP_R10_TO_PTR_R9_(VALUE) cmp qword ptr [r9 + VALUE], r10
#define CMP_R10_TO_PTR_R10_(VALUE) cmp qword ptr [r10 + VALUE], r10
#define CMP_R10_TO_PTR_R11_(VALUE) cmp qword ptr [r11 + VALUE], r10
#define CMP_R10_TO_PTR_R12_(VALUE) cmp qword ptr [r12 + VALUE], r10
#define CMP_R10_TO_PTR_R13_(VALUE) cmp qword ptr [r13 + VALUE], r10
#define CMP_R10_TO_PTR_R14_(VALUE) cmp qword ptr [r14 + VALUE], r10
#define CMP_R10_TO_PTR_R15_(VALUE) cmp qword ptr [r15 + VALUE], r10
#define CMP_R10_TO_PTR_EAX_(VALUE) cmp qword ptr [eax + VALUE], r10
#define CMP_R10_TO_PTR_EBX_(VALUE) cmp qword ptr [ebx + VALUE], r10
#define CMP_R10_TO_PTR_ECX_(VALUE) cmp qword ptr [ecx + VALUE], r10
#define CMP_R10_TO_PTR_EDX_(VALUE) cmp qword ptr [edx + VALUE], r10
#define CMP_R10_TO_PTR_EDI_(VALUE) cmp qword ptr [edi + VALUE], r10
#define CMP_R10_TO_PTR_ESI_(VALUE) cmp qword ptr [esi + VALUE], r10
#define CMP_R10_TO_PTR_EBP_(VALUE) cmp qword ptr [ebp + VALUE], r10
#define CMP_R10_TO_PTR_ESP_(VALUE) cmp qword ptr [esp + VALUE], r10

#define CMP_R11_TO_PTR_RAX_(VALUE) cmp qword ptr [rax + VALUE], r11
#define CMP_R11_TO_PTR_RBX_(VALUE) cmp qword ptr [rbx + VALUE], r11
#define CMP_R11_TO_PTR_RCX_(VALUE) cmp qword ptr [rcx + VALUE], r11
#define CMP_R11_TO_PTR_RDX_(VALUE) cmp qword ptr [rdx + VALUE], r11
#define CMP_R11_TO_PTR_RDI_(VALUE) cmp qword ptr [rdi + VALUE], r11
#define CMP_R11_TO_PTR_RSI_(VALUE) cmp qword ptr [rsi + VALUE], r11
#define CMP_R11_TO_PTR_RBP_(VALUE) cmp qword ptr [rbp + VALUE], r11
#define CMP_R11_TO_PTR_RSP_(VALUE) cmp qword ptr [rsp + VALUE], r11
#define CMP_R11_TO_PTR_R8_(VALUE) cmp qword ptr [r8 + VALUE], r11
#define CMP_R11_TO_PTR_R9_(VALUE) cmp qword ptr [r9 + VALUE], r11
#define CMP_R11_TO_PTR_R10_(VALUE) cmp qword ptr [r10 + VALUE], r11
#define CMP_R11_TO_PTR_R11_(VALUE) cmp qword ptr [r11 + VALUE], r11
#define CMP_R11_TO_PTR_R12_(VALUE) cmp qword ptr [r12 + VALUE], r11
#define CMP_R11_TO_PTR_R13_(VALUE) cmp qword ptr [r13 + VALUE], r11
#define CMP_R11_TO_PTR_R14_(VALUE) cmp qword ptr [r14 + VALUE], r11
#define CMP_R11_TO_PTR_R15_(VALUE) cmp qword ptr [r15 + VALUE], r11
#define CMP_R11_TO_PTR_EAX_(VALUE) cmp qword ptr [eax + VALUE], r11
#define CMP_R11_TO_PTR_EBX_(VALUE) cmp qword ptr [ebx + VALUE], r11
#define CMP_R11_TO_PTR_ECX_(VALUE) cmp qword ptr [ecx + VALUE], r11
#define CMP_R11_TO_PTR_EDX_(VALUE) cmp qword ptr [edx + VALUE], r11
#define CMP_R11_TO_PTR_EDI_(VALUE) cmp qword ptr [edi + VALUE], r11
#define CMP_R11_TO_PTR_ESI_(VALUE) cmp qword ptr [esi + VALUE], r11
#define CMP_R11_TO_PTR_EBP_(VALUE) cmp qword ptr [ebp + VALUE], r11
#define CMP_R11_TO_PTR_ESP_(VALUE) cmp qword ptr [esp + VALUE], r11

#define CMP_R12_TO_PTR_RAX_(VALUE) cmp qword ptr [rax + VALUE], r12
#define CMP_R12_TO_PTR_RBX_(VALUE) cmp qword ptr [rbx + VALUE], r12
#define CMP_R12_TO_PTR_RCX_(VALUE) cmp qword ptr [rcx + VALUE], r12
#define CMP_R12_TO_PTR_RDX_(VALUE) cmp qword ptr [rdx + VALUE], r12
#define CMP_R12_TO_PTR_RDI_(VALUE) cmp qword ptr [rdi + VALUE], r12
#define CMP_R12_TO_PTR_RSI_(VALUE) cmp qword ptr [rsi + VALUE], r12
#define CMP_R12_TO_PTR_RBP_(VALUE) cmp qword ptr [rbp + VALUE], r12
#define CMP_R12_TO_PTR_RSP_(VALUE) cmp qword ptr [rsp + VALUE], r12
#define CMP_R12_TO_PTR_R8_(VALUE) cmp qword ptr [r8 + VALUE], r12
#define CMP_R12_TO_PTR_R9_(VALUE) cmp qword ptr [r9 + VALUE], r12
#define CMP_R12_TO_PTR_R10_(VALUE) cmp qword ptr [r10 + VALUE], r12
#define CMP_R12_TO_PTR_R11_(VALUE) cmp qword ptr [r11 + VALUE], r12
#define CMP_R12_TO_PTR_R12_(VALUE) cmp qword ptr [r12 + VALUE], r12
#define CMP_R12_TO_PTR_R13_(VALUE) cmp qword ptr [r13 + VALUE], r12
#define CMP_R12_TO_PTR_R14_(VALUE) cmp qword ptr [r14 + VALUE], r12
#define CMP_R12_TO_PTR_R15_(VALUE) cmp qword ptr [r15 + VALUE], r12
#define CMP_R12_TO_PTR_EAX_(VALUE) cmp qword ptr [eax + VALUE], r12
#define CMP_R12_TO_PTR_EBX_(VALUE) cmp qword ptr [ebx + VALUE], r12
#define CMP_R12_TO_PTR_ECX_(VALUE) cmp qword ptr [ecx + VALUE], r12
#define CMP_R12_TO_PTR_EDX_(VALUE) cmp qword ptr [edx + VALUE], r12
#define CMP_R12_TO_PTR_EDI_(VALUE) cmp qword ptr [edi + VALUE], r12
#define CMP_R12_TO_PTR_ESI_(VALUE) cmp qword ptr [esi + VALUE], r12
#define CMP_R12_TO_PTR_EBP_(VALUE) cmp qword ptr [ebp + VALUE], r12
#define CMP_R12_TO_PTR_ESP_(VALUE) cmp qword ptr [esp + VALUE], r12

#define CMP_R13_TO_PTR_RAX_(VALUE) cmp qword ptr [rax + VALUE], r13
#define CMP_R13_TO_PTR_RBX_(VALUE) cmp qword ptr [rbx + VALUE], r13
#define CMP_R13_TO_PTR_RCX_(VALUE) cmp qword ptr [rcx + VALUE], r13
#define CMP_R13_TO_PTR_RDX_(VALUE) cmp qword ptr [rdx + VALUE], r13
#define CMP_R13_TO_PTR_RDI_(VALUE) cmp qword ptr [rdi + VALUE], r13
#define CMP_R13_TO_PTR_RSI_(VALUE) cmp qword ptr [rsi + VALUE], r13
#define CMP_R13_TO_PTR_RBP_(VALUE) cmp qword ptr [rbp + VALUE], r13
#define CMP_R13_TO_PTR_RSP_(VALUE) cmp qword ptr [rsp + VALUE], r13
#define CMP_R13_TO_PTR_R8_(VALUE) cmp qword ptr [r8 + VALUE], r13
#define CMP_R13_TO_PTR_R9_(VALUE) cmp qword ptr [r9 + VALUE], r13
#define CMP_R13_TO_PTR_R10_(VALUE) cmp qword ptr [r10 + VALUE], r13
#define CMP_R13_TO_PTR_R11_(VALUE) cmp qword ptr [r11 + VALUE], r13
#define CMP_R13_TO_PTR_R12_(VALUE) cmp qword ptr [r12 + VALUE], r13
#define CMP_R13_TO_PTR_R13_(VALUE) cmp qword ptr [r13 + VALUE], r13
#define CMP_R13_TO_PTR_R14_(VALUE) cmp qword ptr [r14 + VALUE], r13
#define CMP_R13_TO_PTR_R15_(VALUE) cmp qword ptr [r15 + VALUE], r13
#define CMP_R13_TO_PTR_EAX_(VALUE) cmp qword ptr [eax + VALUE], r13
#define CMP_R13_TO_PTR_EBX_(VALUE) cmp qword ptr [ebx + VALUE], r13
#define CMP_R13_TO_PTR_ECX_(VALUE) cmp qword ptr [ecx + VALUE], r13
#define CMP_R13_TO_PTR_EDX_(VALUE) cmp qword ptr [edx + VALUE], r13
#define CMP_R13_TO_PTR_EDI_(VALUE) cmp qword ptr [edi + VALUE], r13
#define CMP_R13_TO_PTR_ESI_(VALUE) cmp qword ptr [esi + VALUE], r13
#define CMP_R13_TO_PTR_EBP_(VALUE) cmp qword ptr [ebp + VALUE], r13
#define CMP_R13_TO_PTR_ESP_(VALUE) cmp qword ptr [esp + VALUE], r13

#define CMP_R14_TO_PTR_RAX_(VALUE) cmp qword ptr [rax + VALUE], r14
#define CMP_R14_TO_PTR_RBX_(VALUE) cmp qword ptr [rbx + VALUE], r14
#define CMP_R14_TO_PTR_RCX_(VALUE) cmp qword ptr [rcx + VALUE], r14
#define CMP_R14_TO_PTR_RDX_(VALUE) cmp qword ptr [rdx + VALUE], r14
#define CMP_R14_TO_PTR_RDI_(VALUE) cmp qword ptr [rdi + VALUE], r14
#define CMP_R14_TO_PTR_RSI_(VALUE) cmp qword ptr [rsi + VALUE], r14
#define CMP_R14_TO_PTR_RBP_(VALUE) cmp qword ptr [rbp + VALUE], r14
#define CMP_R14_TO_PTR_RSP_(VALUE) cmp qword ptr [rsp + VALUE], r14
#define CMP_R14_TO_PTR_R8_(VALUE) cmp qword ptr [r8 + VALUE], r14
#define CMP_R14_TO_PTR_R9_(VALUE) cmp qword ptr [r9 + VALUE], r14
#define CMP_R14_TO_PTR_R10_(VALUE) cmp qword ptr [r10 + VALUE], r14
#define CMP_R14_TO_PTR_R11_(VALUE) cmp qword ptr [r11 + VALUE], r14
#define CMP_R14_TO_PTR_R12_(VALUE) cmp qword ptr [r12 + VALUE], r14
#define CMP_R14_TO_PTR_R13_(VALUE) cmp qword ptr [r13 + VALUE], r14
#define CMP_R14_TO_PTR_R14_(VALUE) cmp qword ptr [r14 + VALUE], r14
#define CMP_R14_TO_PTR_R15_(VALUE) cmp qword ptr [r15 + VALUE], r14
#define CMP_R14_TO_PTR_EAX_(VALUE) cmp qword ptr [eax + VALUE], r14
#define CMP_R14_TO_PTR_EBX_(VALUE) cmp qword ptr [ebx + VALUE], r14
#define CMP_R14_TO_PTR_ECX_(VALUE) cmp qword ptr [ecx + VALUE], r14
#define CMP_R14_TO_PTR_EDX_(VALUE) cmp qword ptr [edx + VALUE], r14
#define CMP_R14_TO_PTR_EDI_(VALUE) cmp qword ptr [edi + VALUE], r14
#define CMP_R14_TO_PTR_ESI_(VALUE) cmp qword ptr [esi + VALUE], r14
#define CMP_R14_TO_PTR_EBP_(VALUE) cmp qword ptr [ebp + VALUE], r14
#define CMP_R14_TO_PTR_ESP_(VALUE) cmp qword ptr [esp + VALUE], r14

#define CMP_R15_TO_PTR_RAX_(VALUE) cmp qword ptr [rax + VALUE], r15
#define CMP_R15_TO_PTR_RBX_(VALUE) cmp qword ptr [rbx + VALUE], r15
#define CMP_R15_TO_PTR_RCX_(VALUE) cmp qword ptr [rcx + VALUE], r15
#define CMP_R15_TO_PTR_RDX_(VALUE) cmp qword ptr [rdx + VALUE], r15
#define CMP_R15_TO_PTR_RDI_(VALUE) cmp qword ptr [rdi + VALUE], r15
#define CMP_R15_TO_PTR_RSI_(VALUE) cmp qword ptr [rsi + VALUE], r15
#define CMP_R15_TO_PTR_RBP_(VALUE) cmp qword ptr [rbp + VALUE], r15
#define CMP_R15_TO_PTR_RSP_(VALUE) cmp qword ptr [rsp + VALUE], r15
#define CMP_R15_TO_PTR_R8_(VALUE) cmp qword ptr [r8 + VALUE], r15
#define CMP_R15_TO_PTR_R9_(VALUE) cmp qword ptr [r9 + VALUE], r15
#define CMP_R15_TO_PTR_R10_(VALUE) cmp qword ptr [r10 + VALUE], r15
#define CMP_R15_TO_PTR_R11_(VALUE) cmp qword ptr [r11 + VALUE], r15
#define CMP_R15_TO_PTR_R12_(VALUE) cmp qword ptr [r12 + VALUE], r15
#define CMP_R15_TO_PTR_R13_(VALUE) cmp qword ptr [r13 + VALUE], r15
#define CMP_R15_TO_PTR_R14_(VALUE) cmp qword ptr [r14 + VALUE], r15
#define CMP_R15_TO_PTR_R15_(VALUE) cmp qword ptr [r15 + VALUE], r15
#define CMP_R15_TO_PTR_EAX_(VALUE) cmp qword ptr [eax + VALUE], r15
#define CMP_R15_TO_PTR_EBX_(VALUE) cmp qword ptr [ebx + VALUE], r15
#define CMP_R15_TO_PTR_ECX_(VALUE) cmp qword ptr [ecx + VALUE], r15
#define CMP_R15_TO_PTR_EDX_(VALUE) cmp qword ptr [edx + VALUE], r15
#define CMP_R15_TO_PTR_EDI_(VALUE) cmp qword ptr [edi + VALUE], r15
#define CMP_R15_TO_PTR_ESI_(VALUE) cmp qword ptr [esi + VALUE], r15
#define CMP_R15_TO_PTR_EBP_(VALUE) cmp qword ptr [ebp + VALUE], r15
#define CMP_R15_TO_PTR_ESP_(VALUE) cmp qword ptr [esp + VALUE], r15
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
