#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************* [v] 64-BIT MEMORY [v] ************************** */
#define MOV_RAX_FROM_PTR_(VALUE) mov rax, qword ptr [VALUE]
#define MOV_RBX_FROM_PTR_(VALUE) mov rbx, qword ptr [VALUE]
#define MOV_RCX_FROM_PTR_(VALUE) mov rcx, qword ptr [VALUE]
#define MOV_RDX_FROM_PTR_(VALUE) mov rdx, qword ptr [VALUE]
#define MOV_RDI_FROM_PTR_(VALUE) mov rdi, qword ptr [VALUE]
#define MOV_RSI_FROM_PTR_(VALUE) mov rsi, qword ptr [VALUE]
#define MOV_RBP_FROM_PTR_(VALUE) mov rbp, qword ptr [VALUE]
#define MOV_RSP_FROM_PTR_(VALUE) mov rsp, qword ptr [VALUE]
#define MOV_R8_FROM_PTR_(VALUE) mov r8, qword ptr [VALUE]
#define MOV_R9_FROM_PTR_(VALUE) mov r9, qword ptr [VALUE]
#define MOV_R10_FROM_PTR_(VALUE) mov r10, qword ptr [VALUE]
#define MOV_R11_FROM_PTR_(VALUE) mov r11, qword ptr [VALUE]
#define MOV_R12_FROM_PTR_(VALUE) mov r12, qword ptr [VALUE]
#define MOV_R13_FROM_PTR_(VALUE) mov r13, qword ptr [VALUE]
#define MOV_R14_FROM_PTR_(VALUE) mov r14, qword ptr [VALUE]
#define MOV_R15_FROM_PTR_(VALUE) mov r15, qword ptr [VALUE]

#define MOV_RAX_TO_PTR_(VALUE) mov qword ptr [VALUE], rax
#define MOV_RBX_TO_PTR_(VALUE) mov qword ptr [VALUE], rbx
#define MOV_RCX_TO_PTR_(VALUE) mov qword ptr [VALUE], rcx
#define MOV_RDX_TO_PTR_(VALUE) mov qword ptr [VALUE], rdx
#define MOV_RDI_TO_PTR_(VALUE) mov qword ptr [VALUE], rdi
#define MOV_RSI_TO_PTR_(VALUE) mov qword ptr [VALUE], rsi
#define MOV_RBP_TO_PTR_(VALUE) mov qword ptr [VALUE], rbp
#define MOV_RSP_TO_PTR_(VALUE) mov qword ptr [VALUE], rsp
#define MOV_R8_TO_PTR_(VALUE) mov qword ptr [VALUE], r8
#define MOV_R9_TO_PTR_(VALUE) mov qword ptr [VALUE], r9
#define MOV_R10_TO_PTR_(VALUE) mov qword ptr [VALUE], r10
#define MOV_R11_TO_PTR_(VALUE) mov qword ptr [VALUE], r11
#define MOV_R12_TO_PTR_(VALUE) mov qword ptr [VALUE], r12
#define MOV_R13_TO_PTR_(VALUE) mov qword ptr [VALUE], r13
#define MOV_R14_TO_PTR_(VALUE) mov qword ptr [VALUE], r14
#define MOV_R15_TO_PTR_(VALUE) mov qword ptr [VALUE], r15

#define MOV_RAX_FROM_PTR_RAX mov rax, qword ptr [rax]
#define MOV_RAX_FROM_PTR_RBX mov rax, qword ptr [rbx]
#define MOV_RAX_FROM_PTR_RCX mov rax, qword ptr [rcx]
#define MOV_RAX_FROM_PTR_RDX mov rax, qword ptr [rdx]
#define MOV_RAX_FROM_PTR_RDI mov rax, qword ptr [rdi]
#define MOV_RAX_FROM_PTR_RSI mov rax, qword ptr [rsi]
#define MOV_RAX_FROM_PTR_RBP mov rax, qword ptr [rbp]
#define MOV_RAX_FROM_PTR_RSP mov rax, qword ptr [rsp]
#define MOV_RAX_FROM_PTR_R8 mov rax, qword ptr [r8]
#define MOV_RAX_FROM_PTR_R9 mov rax, qword ptr [r9]
#define MOV_RAX_FROM_PTR_R10 mov rax, qword ptr [r10]
#define MOV_RAX_FROM_PTR_R11 mov rax, qword ptr [r11]
#define MOV_RAX_FROM_PTR_R12 mov rax, qword ptr [r12]
#define MOV_RAX_FROM_PTR_R13 mov rax, qword ptr [r13]
#define MOV_RAX_FROM_PTR_R14 mov rax, qword ptr [r14]
#define MOV_RAX_FROM_PTR_R15 mov rax, qword ptr [r15]
#define MOV_RAX_FROM_PTR_EAX mov rax, qword ptr [eax]
#define MOV_RAX_FROM_PTR_EBX mov rax, qword ptr [ebx]
#define MOV_RAX_FROM_PTR_ECX mov rax, qword ptr [ecx]
#define MOV_RAX_FROM_PTR_EDX mov rax, qword ptr [edx]
#define MOV_RAX_FROM_PTR_EDI mov rax, qword ptr [edi]
#define MOV_RAX_FROM_PTR_ESI mov rax, qword ptr [esi]
#define MOV_RAX_FROM_PTR_EBP mov rax, qword ptr [ebp]
#define MOV_RAX_FROM_PTR_ESP mov rax, qword ptr [esp]

#define MOV_RBX_FROM_PTR_RAX mov rbx, qword ptr [rax]
#define MOV_RBX_FROM_PTR_RBX mov rbx, qword ptr [rbx]
#define MOV_RBX_FROM_PTR_RCX mov rbx, qword ptr [rcx]
#define MOV_RBX_FROM_PTR_RDX mov rbx, qword ptr [rdx]
#define MOV_RBX_FROM_PTR_RDI mov rbx, qword ptr [rdi]
#define MOV_RBX_FROM_PTR_RSI mov rbx, qword ptr [rsi]
#define MOV_RBX_FROM_PTR_RBP mov rbx, qword ptr [rbp]
#define MOV_RBX_FROM_PTR_RSP mov rbx, qword ptr [rsp]
#define MOV_RBX_FROM_PTR_R8 mov rbx, qword ptr [r8]
#define MOV_RBX_FROM_PTR_R9 mov rbx, qword ptr [r9]
#define MOV_RBX_FROM_PTR_R10 mov rbx, qword ptr [r10]
#define MOV_RBX_FROM_PTR_R11 mov rbx, qword ptr [r11]
#define MOV_RBX_FROM_PTR_R12 mov rbx, qword ptr [r12]
#define MOV_RBX_FROM_PTR_R13 mov rbx, qword ptr [r13]
#define MOV_RBX_FROM_PTR_R14 mov rbx, qword ptr [r14]
#define MOV_RBX_FROM_PTR_R15 mov rbx, qword ptr [r15]
#define MOV_RBX_FROM_PTR_EAX mov rbx, qword ptr [eax]
#define MOV_RBX_FROM_PTR_EBX mov rbx, qword ptr [ebx]
#define MOV_RBX_FROM_PTR_ECX mov rbx, qword ptr [ecx]
#define MOV_RBX_FROM_PTR_EDX mov rbx, qword ptr [edx]
#define MOV_RBX_FROM_PTR_EDI mov rbx, qword ptr [edi]
#define MOV_RBX_FROM_PTR_ESI mov rbx, qword ptr [esi]
#define MOV_RBX_FROM_PTR_EBP mov rbx, qword ptr [ebp]
#define MOV_RBX_FROM_PTR_ESP mov rbx, qword ptr [esp]

#define MOV_RCX_FROM_PTR_RAX mov rcx, qword ptr [rax]
#define MOV_RCX_FROM_PTR_RBX mov rcx, qword ptr [rbx]
#define MOV_RCX_FROM_PTR_RCX mov rcx, qword ptr [rcx]
#define MOV_RCX_FROM_PTR_RDX mov rcx, qword ptr [rdx]
#define MOV_RCX_FROM_PTR_RDI mov rcx, qword ptr [rdi]
#define MOV_RCX_FROM_PTR_RSI mov rcx, qword ptr [rsi]
#define MOV_RCX_FROM_PTR_RBP mov rcx, qword ptr [rbp]
#define MOV_RCX_FROM_PTR_RSP mov rcx, qword ptr [rsp]
#define MOV_RCX_FROM_PTR_R8 mov rcx, qword ptr [r8]
#define MOV_RCX_FROM_PTR_R9 mov rcx, qword ptr [r9]
#define MOV_RCX_FROM_PTR_R10 mov rcx, qword ptr [r10]
#define MOV_RCX_FROM_PTR_R11 mov rcx, qword ptr [r11]
#define MOV_RCX_FROM_PTR_R12 mov rcx, qword ptr [r12]
#define MOV_RCX_FROM_PTR_R13 mov rcx, qword ptr [r13]
#define MOV_RCX_FROM_PTR_R14 mov rcx, qword ptr [r14]
#define MOV_RCX_FROM_PTR_R15 mov rcx, qword ptr [r15]
#define MOV_RCX_FROM_PTR_EAX mov rcx, qword ptr [eax]
#define MOV_RCX_FROM_PTR_EBX mov rcx, qword ptr [ebx]
#define MOV_RCX_FROM_PTR_ECX mov rcx, qword ptr [ecx]
#define MOV_RCX_FROM_PTR_EDX mov rcx, qword ptr [edx]
#define MOV_RCX_FROM_PTR_EDI mov rcx, qword ptr [edi]
#define MOV_RCX_FROM_PTR_ESI mov rcx, qword ptr [esi]
#define MOV_RCX_FROM_PTR_EBP mov rcx, qword ptr [ebp]
#define MOV_RCX_FROM_PTR_ESP mov rcx, qword ptr [esp]

#define MOV_RDX_FROM_PTR_RAX mov rdx, qword ptr [rax]
#define MOV_RDX_FROM_PTR_RBX mov rdx, qword ptr [rbx]
#define MOV_RDX_FROM_PTR_RCX mov rdx, qword ptr [rcx]
#define MOV_RDX_FROM_PTR_RDX mov rdx, qword ptr [rdx]
#define MOV_RDX_FROM_PTR_RDI mov rdx, qword ptr [rdi]
#define MOV_RDX_FROM_PTR_RSI mov rdx, qword ptr [rsi]
#define MOV_RDX_FROM_PTR_RBP mov rdx, qword ptr [rbp]
#define MOV_RDX_FROM_PTR_RSP mov rdx, qword ptr [rsp]
#define MOV_RDX_FROM_PTR_R8 mov rdx, qword ptr [r8]
#define MOV_RDX_FROM_PTR_R9 mov rdx, qword ptr [r9]
#define MOV_RDX_FROM_PTR_R10 mov rdx, qword ptr [r10]
#define MOV_RDX_FROM_PTR_R11 mov rdx, qword ptr [r11]
#define MOV_RDX_FROM_PTR_R12 mov rdx, qword ptr [r12]
#define MOV_RDX_FROM_PTR_R13 mov rdx, qword ptr [r13]
#define MOV_RDX_FROM_PTR_R14 mov rdx, qword ptr [r14]
#define MOV_RDX_FROM_PTR_R15 mov rdx, qword ptr [r15]
#define MOV_RDX_FROM_PTR_EAX mov rdx, qword ptr [eax]
#define MOV_RDX_FROM_PTR_EBX mov rdx, qword ptr [ebx]
#define MOV_RDX_FROM_PTR_ECX mov rdx, qword ptr [ecx]
#define MOV_RDX_FROM_PTR_EDX mov rdx, qword ptr [edx]
#define MOV_RDX_FROM_PTR_EDI mov rdx, qword ptr [edi]
#define MOV_RDX_FROM_PTR_ESI mov rdx, qword ptr [esi]
#define MOV_RDX_FROM_PTR_EBP mov rdx, qword ptr [ebp]
#define MOV_RDX_FROM_PTR_ESP mov rdx, qword ptr [esp]

#define MOV_RDI_FROM_PTR_RAX mov rdi, qword ptr [rax]
#define MOV_RDI_FROM_PTR_RBX mov rdi, qword ptr [rbx]
#define MOV_RDI_FROM_PTR_RCX mov rdi, qword ptr [rcx]
#define MOV_RDI_FROM_PTR_RDX mov rdi, qword ptr [rdx]
#define MOV_RDI_FROM_PTR_RDI mov rdi, qword ptr [rdi]
#define MOV_RDI_FROM_PTR_RSI mov rdi, qword ptr [rsi]
#define MOV_RDI_FROM_PTR_RBP mov rdi, qword ptr [rbp]
#define MOV_RDI_FROM_PTR_RSP mov rdi, qword ptr [rsp]
#define MOV_RDI_FROM_PTR_R8 mov rdi, qword ptr [r8]
#define MOV_RDI_FROM_PTR_R9 mov rdi, qword ptr [r9]
#define MOV_RDI_FROM_PTR_R10 mov rdi, qword ptr [r10]
#define MOV_RDI_FROM_PTR_R11 mov rdi, qword ptr [r11]
#define MOV_RDI_FROM_PTR_R12 mov rdi, qword ptr [r12]
#define MOV_RDI_FROM_PTR_R13 mov rdi, qword ptr [r13]
#define MOV_RDI_FROM_PTR_R14 mov rdi, qword ptr [r14]
#define MOV_RDI_FROM_PTR_R15 mov rdi, qword ptr [r15]
#define MOV_RDI_FROM_PTR_EAX mov rdi, qword ptr [eax]
#define MOV_RDI_FROM_PTR_EBX mov rdi, qword ptr [ebx]
#define MOV_RDI_FROM_PTR_ECX mov rdi, qword ptr [ecx]
#define MOV_RDI_FROM_PTR_EDX mov rdi, qword ptr [edx]
#define MOV_RDI_FROM_PTR_EDI mov rdi, qword ptr [edi]
#define MOV_RDI_FROM_PTR_ESI mov rdi, qword ptr [esi]
#define MOV_RDI_FROM_PTR_EBP mov rdi, qword ptr [ebp]
#define MOV_RDI_FROM_PTR_ESP mov rdi, qword ptr [esp]

#define MOV_RSI_FROM_PTR_RAX mov rsi, qword ptr [rax]
#define MOV_RSI_FROM_PTR_RBX mov rsi, qword ptr [rbx]
#define MOV_RSI_FROM_PTR_RCX mov rsi, qword ptr [rcx]
#define MOV_RSI_FROM_PTR_RDX mov rsi, qword ptr [rdx]
#define MOV_RSI_FROM_PTR_RDI mov rsi, qword ptr [rdi]
#define MOV_RSI_FROM_PTR_RSI mov rsi, qword ptr [rsi]
#define MOV_RSI_FROM_PTR_RBP mov rsi, qword ptr [rbp]
#define MOV_RSI_FROM_PTR_RSP mov rsi, qword ptr [rsp]
#define MOV_RSI_FROM_PTR_R8 mov rsi, qword ptr [r8]
#define MOV_RSI_FROM_PTR_R9 mov rsi, qword ptr [r9]
#define MOV_RSI_FROM_PTR_R10 mov rsi, qword ptr [r10]
#define MOV_RSI_FROM_PTR_R11 mov rsi, qword ptr [r11]
#define MOV_RSI_FROM_PTR_R12 mov rsi, qword ptr [r12]
#define MOV_RSI_FROM_PTR_R13 mov rsi, qword ptr [r13]
#define MOV_RSI_FROM_PTR_R14 mov rsi, qword ptr [r14]
#define MOV_RSI_FROM_PTR_R15 mov rsi, qword ptr [r15]
#define MOV_RSI_FROM_PTR_EAX mov rsi, qword ptr [eax]
#define MOV_RSI_FROM_PTR_EBX mov rsi, qword ptr [ebx]
#define MOV_RSI_FROM_PTR_ECX mov rsi, qword ptr [ecx]
#define MOV_RSI_FROM_PTR_EDX mov rsi, qword ptr [edx]
#define MOV_RSI_FROM_PTR_EDI mov rsi, qword ptr [edi]
#define MOV_RSI_FROM_PTR_ESI mov rsi, qword ptr [esi]
#define MOV_RSI_FROM_PTR_EBP mov rsi, qword ptr [ebp]
#define MOV_RSI_FROM_PTR_ESP mov rsi, qword ptr [esp]

#define MOV_RBP_FROM_PTR_RAX mov rbp, qword ptr [rax]
#define MOV_RBP_FROM_PTR_RBX mov rbp, qword ptr [rbx]
#define MOV_RBP_FROM_PTR_RCX mov rbp, qword ptr [rcx]
#define MOV_RBP_FROM_PTR_RDX mov rbp, qword ptr [rdx]
#define MOV_RBP_FROM_PTR_RDI mov rbp, qword ptr [rdi]
#define MOV_RBP_FROM_PTR_RSI mov rbp, qword ptr [rsi]
#define MOV_RBP_FROM_PTR_RBP mov rbp, qword ptr [rbp]
#define MOV_RBP_FROM_PTR_RSP mov rbp, qword ptr [rsp]
#define MOV_RBP_FROM_PTR_R8 mov rbp, qword ptr [r8]
#define MOV_RBP_FROM_PTR_R9 mov rbp, qword ptr [r9]
#define MOV_RBP_FROM_PTR_R10 mov rbp, qword ptr [r10]
#define MOV_RBP_FROM_PTR_R11 mov rbp, qword ptr [r11]
#define MOV_RBP_FROM_PTR_R12 mov rbp, qword ptr [r12]
#define MOV_RBP_FROM_PTR_R13 mov rbp, qword ptr [r13]
#define MOV_RBP_FROM_PTR_R14 mov rbp, qword ptr [r14]
#define MOV_RBP_FROM_PTR_R15 mov rbp, qword ptr [r15]
#define MOV_RBP_FROM_PTR_EAX mov rbp, qword ptr [eax]
#define MOV_RBP_FROM_PTR_EBX mov rbp, qword ptr [ebx]
#define MOV_RBP_FROM_PTR_ECX mov rbp, qword ptr [ecx]
#define MOV_RBP_FROM_PTR_EDX mov rbp, qword ptr [edx]
#define MOV_RBP_FROM_PTR_EDI mov rbp, qword ptr [edi]
#define MOV_RBP_FROM_PTR_ESI mov rbp, qword ptr [esi]
#define MOV_RBP_FROM_PTR_EBP mov rbp, qword ptr [ebp]
#define MOV_RBP_FROM_PTR_ESP mov rbp, qword ptr [esp]

#define MOV_RSP_FROM_PTR_RAX mov rsp, qword ptr [rax]
#define MOV_RSP_FROM_PTR_RBX mov rsp, qword ptr [rbx]
#define MOV_RSP_FROM_PTR_RCX mov rsp, qword ptr [rcx]
#define MOV_RSP_FROM_PTR_RDX mov rsp, qword ptr [rdx]
#define MOV_RSP_FROM_PTR_RDI mov rsp, qword ptr [rdi]
#define MOV_RSP_FROM_PTR_RSI mov rsp, qword ptr [rsi]
#define MOV_RSP_FROM_PTR_RBP mov rsp, qword ptr [rbp]
#define MOV_RSP_FROM_PTR_RSP mov rsp, qword ptr [rsp]
#define MOV_RSP_FROM_PTR_R8 mov rsp, qword ptr [r8]
#define MOV_RSP_FROM_PTR_R9 mov rsp, qword ptr [r9]
#define MOV_RSP_FROM_PTR_R10 mov rsp, qword ptr [r10]
#define MOV_RSP_FROM_PTR_R11 mov rsp, qword ptr [r11]
#define MOV_RSP_FROM_PTR_R12 mov rsp, qword ptr [r12]
#define MOV_RSP_FROM_PTR_R13 mov rsp, qword ptr [r13]
#define MOV_RSP_FROM_PTR_R14 mov rsp, qword ptr [r14]
#define MOV_RSP_FROM_PTR_R15 mov rsp, qword ptr [r15]
#define MOV_RSP_FROM_PTR_EAX mov rsp, qword ptr [eax]
#define MOV_RSP_FROM_PTR_EBX mov rsp, qword ptr [ebx]
#define MOV_RSP_FROM_PTR_ECX mov rsp, qword ptr [ecx]
#define MOV_RSP_FROM_PTR_EDX mov rsp, qword ptr [edx]
#define MOV_RSP_FROM_PTR_EDI mov rsp, qword ptr [edi]
#define MOV_RSP_FROM_PTR_ESI mov rsp, qword ptr [esi]
#define MOV_RSP_FROM_PTR_EBP mov rsp, qword ptr [ebp]
#define MOV_RSP_FROM_PTR_ESP mov rsp, qword ptr [esp]

#define MOV_R8_FROM_PTR_RAX mov r8, qword ptr [rax]
#define MOV_R8_FROM_PTR_RBX mov r8, qword ptr [rbx]
#define MOV_R8_FROM_PTR_RCX mov r8, qword ptr [rcx]
#define MOV_R8_FROM_PTR_RDX mov r8, qword ptr [rdx]
#define MOV_R8_FROM_PTR_RDI mov r8, qword ptr [rdi]
#define MOV_R8_FROM_PTR_RSI mov r8, qword ptr [rsi]
#define MOV_R8_FROM_PTR_RBP mov r8, qword ptr [rbp]
#define MOV_R8_FROM_PTR_RSP mov r8, qword ptr [rsp]
#define MOV_R8_FROM_PTR_R8 mov r8, qword ptr [r8]
#define MOV_R8_FROM_PTR_R9 mov r8, qword ptr [r9]
#define MOV_R8_FROM_PTR_R10 mov r8, qword ptr [r10]
#define MOV_R8_FROM_PTR_R11 mov r8, qword ptr [r11]
#define MOV_R8_FROM_PTR_R12 mov r8, qword ptr [r12]
#define MOV_R8_FROM_PTR_R13 mov r8, qword ptr [r13]
#define MOV_R8_FROM_PTR_R14 mov r8, qword ptr [r14]
#define MOV_R8_FROM_PTR_R15 mov r8, qword ptr [r15]
#define MOV_R8_FROM_PTR_EAX mov r8, qword ptr [eax]
#define MOV_R8_FROM_PTR_EBX mov r8, qword ptr [ebx]
#define MOV_R8_FROM_PTR_ECX mov r8, qword ptr [ecx]
#define MOV_R8_FROM_PTR_EDX mov r8, qword ptr [edx]
#define MOV_R8_FROM_PTR_EDI mov r8, qword ptr [edi]
#define MOV_R8_FROM_PTR_ESI mov r8, qword ptr [esi]
#define MOV_R8_FROM_PTR_EBP mov r8, qword ptr [ebp]
#define MOV_R8_FROM_PTR_ESP mov r8, qword ptr [esp]

#define MOV_R9_FROM_PTR_RAX mov r9, qword ptr [rax]
#define MOV_R9_FROM_PTR_RBX mov r9, qword ptr [rbx]
#define MOV_R9_FROM_PTR_RCX mov r9, qword ptr [rcx]
#define MOV_R9_FROM_PTR_RDX mov r9, qword ptr [rdx]
#define MOV_R9_FROM_PTR_RDI mov r9, qword ptr [rdi]
#define MOV_R9_FROM_PTR_RSI mov r9, qword ptr [rsi]
#define MOV_R9_FROM_PTR_RBP mov r9, qword ptr [rbp]
#define MOV_R9_FROM_PTR_RSP mov r9, qword ptr [rsp]
#define MOV_R9_FROM_PTR_R8 mov r9, qword ptr [r8]
#define MOV_R9_FROM_PTR_R9 mov r9, qword ptr [r9]
#define MOV_R9_FROM_PTR_R10 mov r9, qword ptr [r10]
#define MOV_R9_FROM_PTR_R11 mov r9, qword ptr [r11]
#define MOV_R9_FROM_PTR_R12 mov r9, qword ptr [r12]
#define MOV_R9_FROM_PTR_R13 mov r9, qword ptr [r13]
#define MOV_R9_FROM_PTR_R14 mov r9, qword ptr [r14]
#define MOV_R9_FROM_PTR_R15 mov r9, qword ptr [r15]
#define MOV_R9_FROM_PTR_EAX mov r9, qword ptr [eax]
#define MOV_R9_FROM_PTR_EBX mov r9, qword ptr [ebx]
#define MOV_R9_FROM_PTR_ECX mov r9, qword ptr [ecx]
#define MOV_R9_FROM_PTR_EDX mov r9, qword ptr [edx]
#define MOV_R9_FROM_PTR_EDI mov r9, qword ptr [edi]
#define MOV_R9_FROM_PTR_ESI mov r9, qword ptr [esi]
#define MOV_R9_FROM_PTR_EBP mov r9, qword ptr [ebp]
#define MOV_R9_FROM_PTR_ESP mov r9, qword ptr [esp]

#define MOV_R10_FROM_PTR_RAX mov r10, qword ptr [rax]
#define MOV_R10_FROM_PTR_RBX mov r10, qword ptr [rbx]
#define MOV_R10_FROM_PTR_RCX mov r10, qword ptr [rcx]
#define MOV_R10_FROM_PTR_RDX mov r10, qword ptr [rdx]
#define MOV_R10_FROM_PTR_RDI mov r10, qword ptr [rdi]
#define MOV_R10_FROM_PTR_RSI mov r10, qword ptr [rsi]
#define MOV_R10_FROM_PTR_RBP mov r10, qword ptr [rbp]
#define MOV_R10_FROM_PTR_RSP mov r10, qword ptr [rsp]
#define MOV_R10_FROM_PTR_R8 mov r10, qword ptr [r8]
#define MOV_R10_FROM_PTR_R9 mov r10, qword ptr [r9]
#define MOV_R10_FROM_PTR_R10 mov r10, qword ptr [r10]
#define MOV_R10_FROM_PTR_R11 mov r10, qword ptr [r11]
#define MOV_R10_FROM_PTR_R12 mov r10, qword ptr [r12]
#define MOV_R10_FROM_PTR_R13 mov r10, qword ptr [r13]
#define MOV_R10_FROM_PTR_R14 mov r10, qword ptr [r14]
#define MOV_R10_FROM_PTR_R15 mov r10, qword ptr [r15]
#define MOV_R10_FROM_PTR_EAX mov r10, qword ptr [eax]
#define MOV_R10_FROM_PTR_EBX mov r10, qword ptr [ebx]
#define MOV_R10_FROM_PTR_ECX mov r10, qword ptr [ecx]
#define MOV_R10_FROM_PTR_EDX mov r10, qword ptr [edx]
#define MOV_R10_FROM_PTR_EDI mov r10, qword ptr [edi]
#define MOV_R10_FROM_PTR_ESI mov r10, qword ptr [esi]
#define MOV_R10_FROM_PTR_EBP mov r10, qword ptr [ebp]
#define MOV_R10_FROM_PTR_ESP mov r10, qword ptr [esp]

#define MOV_R11_FROM_PTR_RAX mov r11, qword ptr [rax]
#define MOV_R11_FROM_PTR_RBX mov r11, qword ptr [rbx]
#define MOV_R11_FROM_PTR_RCX mov r11, qword ptr [rcx]
#define MOV_R11_FROM_PTR_RDX mov r11, qword ptr [rdx]
#define MOV_R11_FROM_PTR_RDI mov r11, qword ptr [rdi]
#define MOV_R11_FROM_PTR_RSI mov r11, qword ptr [rsi]
#define MOV_R11_FROM_PTR_RBP mov r11, qword ptr [rbp]
#define MOV_R11_FROM_PTR_RSP mov r11, qword ptr [rsp]
#define MOV_R11_FROM_PTR_R8 mov r11, qword ptr [r8]
#define MOV_R11_FROM_PTR_R9 mov r11, qword ptr [r9]
#define MOV_R11_FROM_PTR_R10 mov r11, qword ptr [r10]
#define MOV_R11_FROM_PTR_R11 mov r11, qword ptr [r11]
#define MOV_R11_FROM_PTR_R12 mov r11, qword ptr [r12]
#define MOV_R11_FROM_PTR_R13 mov r11, qword ptr [r13]
#define MOV_R11_FROM_PTR_R14 mov r11, qword ptr [r14]
#define MOV_R11_FROM_PTR_R15 mov r11, qword ptr [r15]
#define MOV_R11_FROM_PTR_EAX mov r11, qword ptr [eax]
#define MOV_R11_FROM_PTR_EBX mov r11, qword ptr [ebx]
#define MOV_R11_FROM_PTR_ECX mov r11, qword ptr [ecx]
#define MOV_R11_FROM_PTR_EDX mov r11, qword ptr [edx]
#define MOV_R11_FROM_PTR_EDI mov r11, qword ptr [edi]
#define MOV_R11_FROM_PTR_ESI mov r11, qword ptr [esi]
#define MOV_R11_FROM_PTR_EBP mov r11, qword ptr [ebp]
#define MOV_R11_FROM_PTR_ESP mov r11, qword ptr [esp]

#define MOV_R12_FROM_PTR_RAX mov r12, qword ptr [rax]
#define MOV_R12_FROM_PTR_RBX mov r12, qword ptr [rbx]
#define MOV_R12_FROM_PTR_RCX mov r12, qword ptr [rcx]
#define MOV_R12_FROM_PTR_RDX mov r12, qword ptr [rdx]
#define MOV_R12_FROM_PTR_RDI mov r12, qword ptr [rdi]
#define MOV_R12_FROM_PTR_RSI mov r12, qword ptr [rsi]
#define MOV_R12_FROM_PTR_RBP mov r12, qword ptr [rbp]
#define MOV_R12_FROM_PTR_RSP mov r12, qword ptr [rsp]
#define MOV_R12_FROM_PTR_R8 mov r12, qword ptr [r8]
#define MOV_R12_FROM_PTR_R9 mov r12, qword ptr [r9]
#define MOV_R12_FROM_PTR_R10 mov r12, qword ptr [r10]
#define MOV_R12_FROM_PTR_R11 mov r12, qword ptr [r11]
#define MOV_R12_FROM_PTR_R12 mov r12, qword ptr [r12]
#define MOV_R12_FROM_PTR_R13 mov r12, qword ptr [r13]
#define MOV_R12_FROM_PTR_R14 mov r12, qword ptr [r14]
#define MOV_R12_FROM_PTR_R15 mov r12, qword ptr [r15]
#define MOV_R12_FROM_PTR_EAX mov r12, qword ptr [eax]
#define MOV_R12_FROM_PTR_EBX mov r12, qword ptr [ebx]
#define MOV_R12_FROM_PTR_ECX mov r12, qword ptr [ecx]
#define MOV_R12_FROM_PTR_EDX mov r12, qword ptr [edx]
#define MOV_R12_FROM_PTR_EDI mov r12, qword ptr [edi]
#define MOV_R12_FROM_PTR_ESI mov r12, qword ptr [esi]
#define MOV_R12_FROM_PTR_EBP mov r12, qword ptr [ebp]
#define MOV_R12_FROM_PTR_ESP mov r12, qword ptr [esp]

#define MOV_R13_FROM_PTR_RAX mov r13, qword ptr [rax]
#define MOV_R13_FROM_PTR_RBX mov r13, qword ptr [rbx]
#define MOV_R13_FROM_PTR_RCX mov r13, qword ptr [rcx]
#define MOV_R13_FROM_PTR_RDX mov r13, qword ptr [rdx]
#define MOV_R13_FROM_PTR_RDI mov r13, qword ptr [rdi]
#define MOV_R13_FROM_PTR_RSI mov r13, qword ptr [rsi]
#define MOV_R13_FROM_PTR_RBP mov r13, qword ptr [rbp]
#define MOV_R13_FROM_PTR_RSP mov r13, qword ptr [rsp]
#define MOV_R13_FROM_PTR_R8 mov r13, qword ptr [r8]
#define MOV_R13_FROM_PTR_R9 mov r13, qword ptr [r9]
#define MOV_R13_FROM_PTR_R10 mov r13, qword ptr [r10]
#define MOV_R13_FROM_PTR_R11 mov r13, qword ptr [r11]
#define MOV_R13_FROM_PTR_R12 mov r13, qword ptr [r12]
#define MOV_R13_FROM_PTR_R13 mov r13, qword ptr [r13]
#define MOV_R13_FROM_PTR_R14 mov r13, qword ptr [r14]
#define MOV_R13_FROM_PTR_R15 mov r13, qword ptr [r15]
#define MOV_R13_FROM_PTR_EAX mov r13, qword ptr [eax]
#define MOV_R13_FROM_PTR_EBX mov r13, qword ptr [ebx]
#define MOV_R13_FROM_PTR_ECX mov r13, qword ptr [ecx]
#define MOV_R13_FROM_PTR_EDX mov r13, qword ptr [edx]
#define MOV_R13_FROM_PTR_EDI mov r13, qword ptr [edi]
#define MOV_R13_FROM_PTR_ESI mov r13, qword ptr [esi]
#define MOV_R13_FROM_PTR_EBP mov r13, qword ptr [ebp]
#define MOV_R13_FROM_PTR_ESP mov r13, qword ptr [esp]

#define MOV_R14_FROM_PTR_RAX mov r14, qword ptr [rax]
#define MOV_R14_FROM_PTR_RBX mov r14, qword ptr [rbx]
#define MOV_R14_FROM_PTR_RCX mov r14, qword ptr [rcx]
#define MOV_R14_FROM_PTR_RDX mov r14, qword ptr [rdx]
#define MOV_R14_FROM_PTR_RDI mov r14, qword ptr [rdi]
#define MOV_R14_FROM_PTR_RSI mov r14, qword ptr [rsi]
#define MOV_R14_FROM_PTR_RBP mov r14, qword ptr [rbp]
#define MOV_R14_FROM_PTR_RSP mov r14, qword ptr [rsp]
#define MOV_R14_FROM_PTR_R8 mov r14, qword ptr [r8]
#define MOV_R14_FROM_PTR_R9 mov r14, qword ptr [r9]
#define MOV_R14_FROM_PTR_R10 mov r14, qword ptr [r10]
#define MOV_R14_FROM_PTR_R11 mov r14, qword ptr [r11]
#define MOV_R14_FROM_PTR_R12 mov r14, qword ptr [r12]
#define MOV_R14_FROM_PTR_R13 mov r14, qword ptr [r13]
#define MOV_R14_FROM_PTR_R14 mov r14, qword ptr [r14]
#define MOV_R14_FROM_PTR_R15 mov r14, qword ptr [r15]
#define MOV_R14_FROM_PTR_EAX mov r14, qword ptr [eax]
#define MOV_R14_FROM_PTR_EBX mov r14, qword ptr [ebx]
#define MOV_R14_FROM_PTR_ECX mov r14, qword ptr [ecx]
#define MOV_R14_FROM_PTR_EDX mov r14, qword ptr [edx]
#define MOV_R14_FROM_PTR_EDI mov r14, qword ptr [edi]
#define MOV_R14_FROM_PTR_ESI mov r14, qword ptr [esi]
#define MOV_R14_FROM_PTR_EBP mov r14, qword ptr [ebp]
#define MOV_R14_FROM_PTR_ESP mov r14, qword ptr [esp]

#define MOV_R15_FROM_PTR_RAX mov r15, qword ptr [rax]
#define MOV_R15_FROM_PTR_RBX mov r15, qword ptr [rbx]
#define MOV_R15_FROM_PTR_RCX mov r15, qword ptr [rcx]
#define MOV_R15_FROM_PTR_RDX mov r15, qword ptr [rdx]
#define MOV_R15_FROM_PTR_RDI mov r15, qword ptr [rdi]
#define MOV_R15_FROM_PTR_RSI mov r15, qword ptr [rsi]
#define MOV_R15_FROM_PTR_RBP mov r15, qword ptr [rbp]
#define MOV_R15_FROM_PTR_RSP mov r15, qword ptr [rsp]
#define MOV_R15_FROM_PTR_R8 mov r15, qword ptr [r8]
#define MOV_R15_FROM_PTR_R9 mov r15, qword ptr [r9]
#define MOV_R15_FROM_PTR_R10 mov r15, qword ptr [r10]
#define MOV_R15_FROM_PTR_R11 mov r15, qword ptr [r11]
#define MOV_R15_FROM_PTR_R12 mov r15, qword ptr [r12]
#define MOV_R15_FROM_PTR_R13 mov r15, qword ptr [r13]
#define MOV_R15_FROM_PTR_R14 mov r15, qword ptr [r14]
#define MOV_R15_FROM_PTR_R15 mov r15, qword ptr [r15]
#define MOV_R15_FROM_PTR_EAX mov r15, qword ptr [eax]
#define MOV_R15_FROM_PTR_EBX mov r15, qword ptr [ebx]
#define MOV_R15_FROM_PTR_ECX mov r15, qword ptr [ecx]
#define MOV_R15_FROM_PTR_EDX mov r15, qword ptr [edx]
#define MOV_R15_FROM_PTR_EDI mov r15, qword ptr [edi]
#define MOV_R15_FROM_PTR_ESI mov r15, qword ptr [esi]
#define MOV_R15_FROM_PTR_EBP mov r15, qword ptr [ebp]
#define MOV_R15_FROM_PTR_ESP mov r15, qword ptr [esp]

#define MOV_RAX_TO_PTR_RAX mov qword ptr [rax], rax
#define MOV_RAX_TO_PTR_RBX mov qword ptr [rbx], rax
#define MOV_RAX_TO_PTR_RCX mov qword ptr [rcx], rax
#define MOV_RAX_TO_PTR_RDX mov qword ptr [rdx], rax
#define MOV_RAX_TO_PTR_RDI mov qword ptr [rdi], rax
#define MOV_RAX_TO_PTR_RSI mov qword ptr [rsi], rax
#define MOV_RAX_TO_PTR_RBP mov qword ptr [rbp], rax
#define MOV_RAX_TO_PTR_RSP mov qword ptr [rsp], rax
#define MOV_RAX_TO_PTR_R8 mov qword ptr [r8], rax
#define MOV_RAX_TO_PTR_R9 mov qword ptr [r9], rax
#define MOV_RAX_TO_PTR_R10 mov qword ptr [r10], rax
#define MOV_RAX_TO_PTR_R11 mov qword ptr [r11], rax
#define MOV_RAX_TO_PTR_R12 mov qword ptr [r12], rax
#define MOV_RAX_TO_PTR_R13 mov qword ptr [r13], rax
#define MOV_RAX_TO_PTR_R14 mov qword ptr [r14], rax
#define MOV_RAX_TO_PTR_R15 mov qword ptr [r15], rax
#define MOV_RAX_TO_PTR_EAX mov qword ptr [eax], rax
#define MOV_RAX_TO_PTR_EBX mov qword ptr [ebx], rax
#define MOV_RAX_TO_PTR_ECX mov qword ptr [ecx], rax
#define MOV_RAX_TO_PTR_EDX mov qword ptr [edx], rax
#define MOV_RAX_TO_PTR_EDI mov qword ptr [edi], rax
#define MOV_RAX_TO_PTR_ESI mov qword ptr [esi], rax
#define MOV_RAX_TO_PTR_EBP mov qword ptr [ebp], rax
#define MOV_RAX_TO_PTR_ESP mov qword ptr [esp], rax

#define MOV_RBX_TO_PTR_RAX mov qword ptr [rax], rbx
#define MOV_RBX_TO_PTR_RBX mov qword ptr [rbx], rbx
#define MOV_RBX_TO_PTR_RCX mov qword ptr [rcx], rbx
#define MOV_RBX_TO_PTR_RDX mov qword ptr [rdx], rbx
#define MOV_RBX_TO_PTR_RDI mov qword ptr [rdi], rbx
#define MOV_RBX_TO_PTR_RSI mov qword ptr [rsi], rbx
#define MOV_RBX_TO_PTR_RBP mov qword ptr [rbp], rbx
#define MOV_RBX_TO_PTR_RSP mov qword ptr [rsp], rbx
#define MOV_RBX_TO_PTR_R8 mov qword ptr [r8], rbx
#define MOV_RBX_TO_PTR_R9 mov qword ptr [r9], rbx
#define MOV_RBX_TO_PTR_R10 mov qword ptr [r10], rbx
#define MOV_RBX_TO_PTR_R11 mov qword ptr [r11], rbx
#define MOV_RBX_TO_PTR_R12 mov qword ptr [r12], rbx
#define MOV_RBX_TO_PTR_R13 mov qword ptr [r13], rbx
#define MOV_RBX_TO_PTR_R14 mov qword ptr [r14], rbx
#define MOV_RBX_TO_PTR_R15 mov qword ptr [r15], rbx
#define MOV_RBX_TO_PTR_EAX mov qword ptr [eax], rbx
#define MOV_RBX_TO_PTR_EBX mov qword ptr [ebx], rbx
#define MOV_RBX_TO_PTR_ECX mov qword ptr [ecx], rbx
#define MOV_RBX_TO_PTR_EDX mov qword ptr [edx], rbx
#define MOV_RBX_TO_PTR_EDI mov qword ptr [edi], rbx
#define MOV_RBX_TO_PTR_ESI mov qword ptr [esi], rbx
#define MOV_RBX_TO_PTR_EBP mov qword ptr [ebp], rbx
#define MOV_RBX_TO_PTR_ESP mov qword ptr [esp], rbx

#define MOV_RCX_TO_PTR_RAX mov qword ptr [rax], rcx
#define MOV_RCX_TO_PTR_RBX mov qword ptr [rbx], rcx
#define MOV_RCX_TO_PTR_RCX mov qword ptr [rcx], rcx
#define MOV_RCX_TO_PTR_RDX mov qword ptr [rdx], rcx
#define MOV_RCX_TO_PTR_RDI mov qword ptr [rdi], rcx
#define MOV_RCX_TO_PTR_RSI mov qword ptr [rsi], rcx
#define MOV_RCX_TO_PTR_RBP mov qword ptr [rbp], rcx
#define MOV_RCX_TO_PTR_RSP mov qword ptr [rsp], rcx
#define MOV_RCX_TO_PTR_R8 mov qword ptr [r8], rcx
#define MOV_RCX_TO_PTR_R9 mov qword ptr [r9], rcx
#define MOV_RCX_TO_PTR_R10 mov qword ptr [r10], rcx
#define MOV_RCX_TO_PTR_R11 mov qword ptr [r11], rcx
#define MOV_RCX_TO_PTR_R12 mov qword ptr [r12], rcx
#define MOV_RCX_TO_PTR_R13 mov qword ptr [r13], rcx
#define MOV_RCX_TO_PTR_R14 mov qword ptr [r14], rcx
#define MOV_RCX_TO_PTR_R15 mov qword ptr [r15], rcx
#define MOV_RCX_TO_PTR_EAX mov qword ptr [eax], rcx
#define MOV_RCX_TO_PTR_EBX mov qword ptr [ebx], rcx
#define MOV_RCX_TO_PTR_ECX mov qword ptr [ecx], rcx
#define MOV_RCX_TO_PTR_EDX mov qword ptr [edx], rcx
#define MOV_RCX_TO_PTR_EDI mov qword ptr [edi], rcx
#define MOV_RCX_TO_PTR_ESI mov qword ptr [esi], rcx
#define MOV_RCX_TO_PTR_EBP mov qword ptr [ebp], rcx
#define MOV_RCX_TO_PTR_ESP mov qword ptr [esp], rcx

#define MOV_RDX_TO_PTR_RAX mov qword ptr [rax], rdx
#define MOV_RDX_TO_PTR_RBX mov qword ptr [rbx], rdx
#define MOV_RDX_TO_PTR_RCX mov qword ptr [rcx], rdx
#define MOV_RDX_TO_PTR_RDX mov qword ptr [rdx], rdx
#define MOV_RDX_TO_PTR_RDI mov qword ptr [rdi], rdx
#define MOV_RDX_TO_PTR_RSI mov qword ptr [rsi], rdx
#define MOV_RDX_TO_PTR_RBP mov qword ptr [rbp], rdx
#define MOV_RDX_TO_PTR_RSP mov qword ptr [rsp], rdx
#define MOV_RDX_TO_PTR_R8 mov qword ptr [r8], rdx
#define MOV_RDX_TO_PTR_R9 mov qword ptr [r9], rdx
#define MOV_RDX_TO_PTR_R10 mov qword ptr [r10], rdx
#define MOV_RDX_TO_PTR_R11 mov qword ptr [r11], rdx
#define MOV_RDX_TO_PTR_R12 mov qword ptr [r12], rdx
#define MOV_RDX_TO_PTR_R13 mov qword ptr [r13], rdx
#define MOV_RDX_TO_PTR_R14 mov qword ptr [r14], rdx
#define MOV_RDX_TO_PTR_R15 mov qword ptr [r15], rdx
#define MOV_RDX_TO_PTR_EAX mov qword ptr [eax], rdx
#define MOV_RDX_TO_PTR_EBX mov qword ptr [ebx], rdx
#define MOV_RDX_TO_PTR_ECX mov qword ptr [ecx], rdx
#define MOV_RDX_TO_PTR_EDX mov qword ptr [edx], rdx
#define MOV_RDX_TO_PTR_EDI mov qword ptr [edi], rdx
#define MOV_RDX_TO_PTR_ESI mov qword ptr [esi], rdx
#define MOV_RDX_TO_PTR_EBP mov qword ptr [ebp], rdx
#define MOV_RDX_TO_PTR_ESP mov qword ptr [esp], rdx

#define MOV_RDI_TO_PTR_RAX mov qword ptr [rax], rdi
#define MOV_RDI_TO_PTR_RBX mov qword ptr [rbx], rdi
#define MOV_RDI_TO_PTR_RCX mov qword ptr [rcx], rdi
#define MOV_RDI_TO_PTR_RDX mov qword ptr [rdx], rdi
#define MOV_RDI_TO_PTR_RDI mov qword ptr [rdi], rdi
#define MOV_RDI_TO_PTR_RSI mov qword ptr [rsi], rdi
#define MOV_RDI_TO_PTR_RBP mov qword ptr [rbp], rdi
#define MOV_RDI_TO_PTR_RSP mov qword ptr [rsp], rdi
#define MOV_RDI_TO_PTR_R8 mov qword ptr [r8], rdi
#define MOV_RDI_TO_PTR_R9 mov qword ptr [r9], rdi
#define MOV_RDI_TO_PTR_R10 mov qword ptr [r10], rdi
#define MOV_RDI_TO_PTR_R11 mov qword ptr [r11], rdi
#define MOV_RDI_TO_PTR_R12 mov qword ptr [r12], rdi
#define MOV_RDI_TO_PTR_R13 mov qword ptr [r13], rdi
#define MOV_RDI_TO_PTR_R14 mov qword ptr [r14], rdi
#define MOV_RDI_TO_PTR_R15 mov qword ptr [r15], rdi
#define MOV_RDI_TO_PTR_EAX mov qword ptr [eax], rdi
#define MOV_RDI_TO_PTR_EBX mov qword ptr [ebx], rdi
#define MOV_RDI_TO_PTR_ECX mov qword ptr [ecx], rdi
#define MOV_RDI_TO_PTR_EDX mov qword ptr [edx], rdi
#define MOV_RDI_TO_PTR_EDI mov qword ptr [edi], rdi
#define MOV_RDI_TO_PTR_ESI mov qword ptr [esi], rdi
#define MOV_RDI_TO_PTR_EBP mov qword ptr [ebp], rdi
#define MOV_RDI_TO_PTR_ESP mov qword ptr [esp], rdi

#define MOV_RSI_TO_PTR_RAX mov qword ptr [rax], rsi
#define MOV_RSI_TO_PTR_RBX mov qword ptr [rbx], rsi
#define MOV_RSI_TO_PTR_RCX mov qword ptr [rcx], rsi
#define MOV_RSI_TO_PTR_RDX mov qword ptr [rdx], rsi
#define MOV_RSI_TO_PTR_RDI mov qword ptr [rdi], rsi
#define MOV_RSI_TO_PTR_RSI mov qword ptr [rsi], rsi
#define MOV_RSI_TO_PTR_RBP mov qword ptr [rbp], rsi
#define MOV_RSI_TO_PTR_RSP mov qword ptr [rsp], rsi
#define MOV_RSI_TO_PTR_R8 mov qword ptr [r8], rsi
#define MOV_RSI_TO_PTR_R9 mov qword ptr [r9], rsi
#define MOV_RSI_TO_PTR_R10 mov qword ptr [r10], rsi
#define MOV_RSI_TO_PTR_R11 mov qword ptr [r11], rsi
#define MOV_RSI_TO_PTR_R12 mov qword ptr [r12], rsi
#define MOV_RSI_TO_PTR_R13 mov qword ptr [r13], rsi
#define MOV_RSI_TO_PTR_R14 mov qword ptr [r14], rsi
#define MOV_RSI_TO_PTR_R15 mov qword ptr [r15], rsi
#define MOV_RSI_TO_PTR_EAX mov qword ptr [eax], rsi
#define MOV_RSI_TO_PTR_EBX mov qword ptr [ebx], rsi
#define MOV_RSI_TO_PTR_ECX mov qword ptr [ecx], rsi
#define MOV_RSI_TO_PTR_EDX mov qword ptr [edx], rsi
#define MOV_RSI_TO_PTR_EDI mov qword ptr [edi], rsi
#define MOV_RSI_TO_PTR_ESI mov qword ptr [esi], rsi
#define MOV_RSI_TO_PTR_EBP mov qword ptr [ebp], rsi
#define MOV_RSI_TO_PTR_ESP mov qword ptr [esp], rsi

#define MOV_RBP_TO_PTR_RAX mov qword ptr [rax], rbp
#define MOV_RBP_TO_PTR_RBX mov qword ptr [rbx], rbp
#define MOV_RBP_TO_PTR_RCX mov qword ptr [rcx], rbp
#define MOV_RBP_TO_PTR_RDX mov qword ptr [rdx], rbp
#define MOV_RBP_TO_PTR_RDI mov qword ptr [rdi], rbp
#define MOV_RBP_TO_PTR_RSI mov qword ptr [rsi], rbp
#define MOV_RBP_TO_PTR_RBP mov qword ptr [rbp], rbp
#define MOV_RBP_TO_PTR_RSP mov qword ptr [rsp], rbp
#define MOV_RBP_TO_PTR_R8 mov qword ptr [r8], rbp
#define MOV_RBP_TO_PTR_R9 mov qword ptr [r9], rbp
#define MOV_RBP_TO_PTR_R10 mov qword ptr [r10], rbp
#define MOV_RBP_TO_PTR_R11 mov qword ptr [r11], rbp
#define MOV_RBP_TO_PTR_R12 mov qword ptr [r12], rbp
#define MOV_RBP_TO_PTR_R13 mov qword ptr [r13], rbp
#define MOV_RBP_TO_PTR_R14 mov qword ptr [r14], rbp
#define MOV_RBP_TO_PTR_R15 mov qword ptr [r15], rbp
#define MOV_RBP_TO_PTR_EAX mov qword ptr [eax], rbp
#define MOV_RBP_TO_PTR_EBX mov qword ptr [ebx], rbp
#define MOV_RBP_TO_PTR_ECX mov qword ptr [ecx], rbp
#define MOV_RBP_TO_PTR_EDX mov qword ptr [edx], rbp
#define MOV_RBP_TO_PTR_EDI mov qword ptr [edi], rbp
#define MOV_RBP_TO_PTR_ESI mov qword ptr [esi], rbp
#define MOV_RBP_TO_PTR_EBP mov qword ptr [ebp], rbp
#define MOV_RBP_TO_PTR_ESP mov qword ptr [esp], rbp

#define MOV_RSP_TO_PTR_RAX mov qword ptr [rax], rsp
#define MOV_RSP_TO_PTR_RBX mov qword ptr [rbx], rsp
#define MOV_RSP_TO_PTR_RCX mov qword ptr [rcx], rsp
#define MOV_RSP_TO_PTR_RDX mov qword ptr [rdx], rsp
#define MOV_RSP_TO_PTR_RDI mov qword ptr [rdi], rsp
#define MOV_RSP_TO_PTR_RSI mov qword ptr [rsi], rsp
#define MOV_RSP_TO_PTR_RBP mov qword ptr [rbp], rsp
#define MOV_RSP_TO_PTR_RSP mov qword ptr [rsp], rsp
#define MOV_RSP_TO_PTR_R8 mov qword ptr [r8], rsp
#define MOV_RSP_TO_PTR_R9 mov qword ptr [r9], rsp
#define MOV_RSP_TO_PTR_R10 mov qword ptr [r10], rsp
#define MOV_RSP_TO_PTR_R11 mov qword ptr [r11], rsp
#define MOV_RSP_TO_PTR_R12 mov qword ptr [r12], rsp
#define MOV_RSP_TO_PTR_R13 mov qword ptr [r13], rsp
#define MOV_RSP_TO_PTR_R14 mov qword ptr [r14], rsp
#define MOV_RSP_TO_PTR_R15 mov qword ptr [r15], rsp
#define MOV_RSP_TO_PTR_EAX mov qword ptr [eax], rsp
#define MOV_RSP_TO_PTR_EBX mov qword ptr [ebx], rsp
#define MOV_RSP_TO_PTR_ECX mov qword ptr [ecx], rsp
#define MOV_RSP_TO_PTR_EDX mov qword ptr [edx], rsp
#define MOV_RSP_TO_PTR_EDI mov qword ptr [edi], rsp
#define MOV_RSP_TO_PTR_ESI mov qword ptr [esi], rsp
#define MOV_RSP_TO_PTR_EBP mov qword ptr [ebp], rsp
#define MOV_RSP_TO_PTR_ESP mov qword ptr [esp], rsp

#define MOV_R8_TO_PTR_RAX mov qword ptr [rax], r8
#define MOV_R8_TO_PTR_RBX mov qword ptr [rbx], r8
#define MOV_R8_TO_PTR_RCX mov qword ptr [rcx], r8
#define MOV_R8_TO_PTR_RDX mov qword ptr [rdx], r8
#define MOV_R8_TO_PTR_RDI mov qword ptr [rdi], r8
#define MOV_R8_TO_PTR_RSI mov qword ptr [rsi], r8
#define MOV_R8_TO_PTR_RBP mov qword ptr [rbp], r8
#define MOV_R8_TO_PTR_RSP mov qword ptr [rsp], r8
#define MOV_R8_TO_PTR_R8 mov qword ptr [r8], r8
#define MOV_R8_TO_PTR_R9 mov qword ptr [r9], r8
#define MOV_R8_TO_PTR_R10 mov qword ptr [r10], r8
#define MOV_R8_TO_PTR_R11 mov qword ptr [r11], r8
#define MOV_R8_TO_PTR_R12 mov qword ptr [r12], r8
#define MOV_R8_TO_PTR_R13 mov qword ptr [r13], r8
#define MOV_R8_TO_PTR_R14 mov qword ptr [r14], r8
#define MOV_R8_TO_PTR_R15 mov qword ptr [r15], r8
#define MOV_R8_TO_PTR_EAX mov qword ptr [eax], r8
#define MOV_R8_TO_PTR_EBX mov qword ptr [ebx], r8
#define MOV_R8_TO_PTR_ECX mov qword ptr [ecx], r8
#define MOV_R8_TO_PTR_EDX mov qword ptr [edx], r8
#define MOV_R8_TO_PTR_EDI mov qword ptr [edi], r8
#define MOV_R8_TO_PTR_ESI mov qword ptr [esi], r8
#define MOV_R8_TO_PTR_EBP mov qword ptr [ebp], r8
#define MOV_R8_TO_PTR_ESP mov qword ptr [esp], r8

#define MOV_R9_TO_PTR_RAX mov qword ptr [rax], r9
#define MOV_R9_TO_PTR_RBX mov qword ptr [rbx], r9
#define MOV_R9_TO_PTR_RCX mov qword ptr [rcx], r9
#define MOV_R9_TO_PTR_RDX mov qword ptr [rdx], r9
#define MOV_R9_TO_PTR_RDI mov qword ptr [rdi], r9
#define MOV_R9_TO_PTR_RSI mov qword ptr [rsi], r9
#define MOV_R9_TO_PTR_RBP mov qword ptr [rbp], r9
#define MOV_R9_TO_PTR_RSP mov qword ptr [rsp], r9
#define MOV_R9_TO_PTR_R8 mov qword ptr [r8], r9
#define MOV_R9_TO_PTR_R9 mov qword ptr [r9], r9
#define MOV_R9_TO_PTR_R10 mov qword ptr [r10], r9
#define MOV_R9_TO_PTR_R11 mov qword ptr [r11], r9
#define MOV_R9_TO_PTR_R12 mov qword ptr [r12], r9
#define MOV_R9_TO_PTR_R13 mov qword ptr [r13], r9
#define MOV_R9_TO_PTR_R14 mov qword ptr [r14], r9
#define MOV_R9_TO_PTR_R15 mov qword ptr [r15], r9
#define MOV_R9_TO_PTR_EAX mov qword ptr [eax], r9
#define MOV_R9_TO_PTR_EBX mov qword ptr [ebx], r9
#define MOV_R9_TO_PTR_ECX mov qword ptr [ecx], r9
#define MOV_R9_TO_PTR_EDX mov qword ptr [edx], r9
#define MOV_R9_TO_PTR_EDI mov qword ptr [edi], r9
#define MOV_R9_TO_PTR_ESI mov qword ptr [esi], r9
#define MOV_R9_TO_PTR_EBP mov qword ptr [ebp], r9
#define MOV_R9_TO_PTR_ESP mov qword ptr [esp], r9

#define MOV_R10_TO_PTR_RAX mov qword ptr [rax], r10
#define MOV_R10_TO_PTR_RBX mov qword ptr [rbx], r10
#define MOV_R10_TO_PTR_RCX mov qword ptr [rcx], r10
#define MOV_R10_TO_PTR_RDX mov qword ptr [rdx], r10
#define MOV_R10_TO_PTR_RDI mov qword ptr [rdi], r10
#define MOV_R10_TO_PTR_RSI mov qword ptr [rsi], r10
#define MOV_R10_TO_PTR_RBP mov qword ptr [rbp], r10
#define MOV_R10_TO_PTR_RSP mov qword ptr [rsp], r10
#define MOV_R10_TO_PTR_R8 mov qword ptr [r8], r10
#define MOV_R10_TO_PTR_R9 mov qword ptr [r9], r10
#define MOV_R10_TO_PTR_R10 mov qword ptr [r10], r10
#define MOV_R10_TO_PTR_R11 mov qword ptr [r11], r10
#define MOV_R10_TO_PTR_R12 mov qword ptr [r12], r10
#define MOV_R10_TO_PTR_R13 mov qword ptr [r13], r10
#define MOV_R10_TO_PTR_R14 mov qword ptr [r14], r10
#define MOV_R10_TO_PTR_R15 mov qword ptr [r15], r10
#define MOV_R10_TO_PTR_EAX mov qword ptr [eax], r10
#define MOV_R10_TO_PTR_EBX mov qword ptr [ebx], r10
#define MOV_R10_TO_PTR_ECX mov qword ptr [ecx], r10
#define MOV_R10_TO_PTR_EDX mov qword ptr [edx], r10
#define MOV_R10_TO_PTR_EDI mov qword ptr [edi], r10
#define MOV_R10_TO_PTR_ESI mov qword ptr [esi], r10
#define MOV_R10_TO_PTR_EBP mov qword ptr [ebp], r10
#define MOV_R10_TO_PTR_ESP mov qword ptr [esp], r10

#define MOV_R11_TO_PTR_RAX mov qword ptr [rax], r11
#define MOV_R11_TO_PTR_RBX mov qword ptr [rbx], r11
#define MOV_R11_TO_PTR_RCX mov qword ptr [rcx], r11
#define MOV_R11_TO_PTR_RDX mov qword ptr [rdx], r11
#define MOV_R11_TO_PTR_RDI mov qword ptr [rdi], r11
#define MOV_R11_TO_PTR_RSI mov qword ptr [rsi], r11
#define MOV_R11_TO_PTR_RBP mov qword ptr [rbp], r11
#define MOV_R11_TO_PTR_RSP mov qword ptr [rsp], r11
#define MOV_R11_TO_PTR_R8 mov qword ptr [r8], r11
#define MOV_R11_TO_PTR_R9 mov qword ptr [r9], r11
#define MOV_R11_TO_PTR_R10 mov qword ptr [r10], r11
#define MOV_R11_TO_PTR_R11 mov qword ptr [r11], r11
#define MOV_R11_TO_PTR_R12 mov qword ptr [r12], r11
#define MOV_R11_TO_PTR_R13 mov qword ptr [r13], r11
#define MOV_R11_TO_PTR_R14 mov qword ptr [r14], r11
#define MOV_R11_TO_PTR_R15 mov qword ptr [r15], r11
#define MOV_R11_TO_PTR_EAX mov qword ptr [eax], r11
#define MOV_R11_TO_PTR_EBX mov qword ptr [ebx], r11
#define MOV_R11_TO_PTR_ECX mov qword ptr [ecx], r11
#define MOV_R11_TO_PTR_EDX mov qword ptr [edx], r11
#define MOV_R11_TO_PTR_EDI mov qword ptr [edi], r11
#define MOV_R11_TO_PTR_ESI mov qword ptr [esi], r11
#define MOV_R11_TO_PTR_EBP mov qword ptr [ebp], r11
#define MOV_R11_TO_PTR_ESP mov qword ptr [esp], r11

#define MOV_R12_TO_PTR_RAX mov qword ptr [rax], r12
#define MOV_R12_TO_PTR_RBX mov qword ptr [rbx], r12
#define MOV_R12_TO_PTR_RCX mov qword ptr [rcx], r12
#define MOV_R12_TO_PTR_RDX mov qword ptr [rdx], r12
#define MOV_R12_TO_PTR_RDI mov qword ptr [rdi], r12
#define MOV_R12_TO_PTR_RSI mov qword ptr [rsi], r12
#define MOV_R12_TO_PTR_RBP mov qword ptr [rbp], r12
#define MOV_R12_TO_PTR_RSP mov qword ptr [rsp], r12
#define MOV_R12_TO_PTR_R8 mov qword ptr [r8], r12
#define MOV_R12_TO_PTR_R9 mov qword ptr [r9], r12
#define MOV_R12_TO_PTR_R10 mov qword ptr [r10], r12
#define MOV_R12_TO_PTR_R11 mov qword ptr [r11], r12
#define MOV_R12_TO_PTR_R12 mov qword ptr [r12], r12
#define MOV_R12_TO_PTR_R13 mov qword ptr [r13], r12
#define MOV_R12_TO_PTR_R14 mov qword ptr [r14], r12
#define MOV_R12_TO_PTR_R15 mov qword ptr [r15], r12
#define MOV_R12_TO_PTR_EAX mov qword ptr [eax], r12
#define MOV_R12_TO_PTR_EBX mov qword ptr [ebx], r12
#define MOV_R12_TO_PTR_ECX mov qword ptr [ecx], r12
#define MOV_R12_TO_PTR_EDX mov qword ptr [edx], r12
#define MOV_R12_TO_PTR_EDI mov qword ptr [edi], r12
#define MOV_R12_TO_PTR_ESI mov qword ptr [esi], r12
#define MOV_R12_TO_PTR_EBP mov qword ptr [ebp], r12
#define MOV_R12_TO_PTR_ESP mov qword ptr [esp], r12

#define MOV_R13_TO_PTR_RAX mov qword ptr [rax], r13
#define MOV_R13_TO_PTR_RBX mov qword ptr [rbx], r13
#define MOV_R13_TO_PTR_RCX mov qword ptr [rcx], r13
#define MOV_R13_TO_PTR_RDX mov qword ptr [rdx], r13
#define MOV_R13_TO_PTR_RDI mov qword ptr [rdi], r13
#define MOV_R13_TO_PTR_RSI mov qword ptr [rsi], r13
#define MOV_R13_TO_PTR_RBP mov qword ptr [rbp], r13
#define MOV_R13_TO_PTR_RSP mov qword ptr [rsp], r13
#define MOV_R13_TO_PTR_R8 mov qword ptr [r8], r13
#define MOV_R13_TO_PTR_R9 mov qword ptr [r9], r13
#define MOV_R13_TO_PTR_R10 mov qword ptr [r10], r13
#define MOV_R13_TO_PTR_R11 mov qword ptr [r11], r13
#define MOV_R13_TO_PTR_R12 mov qword ptr [r12], r13
#define MOV_R13_TO_PTR_R13 mov qword ptr [r13], r13
#define MOV_R13_TO_PTR_R14 mov qword ptr [r14], r13
#define MOV_R13_TO_PTR_R15 mov qword ptr [r15], r13
#define MOV_R13_TO_PTR_EAX mov qword ptr [eax], r13
#define MOV_R13_TO_PTR_EBX mov qword ptr [ebx], r13
#define MOV_R13_TO_PTR_ECX mov qword ptr [ecx], r13
#define MOV_R13_TO_PTR_EDX mov qword ptr [edx], r13
#define MOV_R13_TO_PTR_EDI mov qword ptr [edi], r13
#define MOV_R13_TO_PTR_ESI mov qword ptr [esi], r13
#define MOV_R13_TO_PTR_EBP mov qword ptr [ebp], r13
#define MOV_R13_TO_PTR_ESP mov qword ptr [esp], r13

#define MOV_R14_TO_PTR_RAX mov qword ptr [rax], r14
#define MOV_R14_TO_PTR_RBX mov qword ptr [rbx], r14
#define MOV_R14_TO_PTR_RCX mov qword ptr [rcx], r14
#define MOV_R14_TO_PTR_RDX mov qword ptr [rdx], r14
#define MOV_R14_TO_PTR_RDI mov qword ptr [rdi], r14
#define MOV_R14_TO_PTR_RSI mov qword ptr [rsi], r14
#define MOV_R14_TO_PTR_RBP mov qword ptr [rbp], r14
#define MOV_R14_TO_PTR_RSP mov qword ptr [rsp], r14
#define MOV_R14_TO_PTR_R8 mov qword ptr [r8], r14
#define MOV_R14_TO_PTR_R9 mov qword ptr [r9], r14
#define MOV_R14_TO_PTR_R10 mov qword ptr [r10], r14
#define MOV_R14_TO_PTR_R11 mov qword ptr [r11], r14
#define MOV_R14_TO_PTR_R12 mov qword ptr [r12], r14
#define MOV_R14_TO_PTR_R13 mov qword ptr [r13], r14
#define MOV_R14_TO_PTR_R14 mov qword ptr [r14], r14
#define MOV_R14_TO_PTR_R15 mov qword ptr [r15], r14
#define MOV_R14_TO_PTR_EAX mov qword ptr [eax], r14
#define MOV_R14_TO_PTR_EBX mov qword ptr [ebx], r14
#define MOV_R14_TO_PTR_ECX mov qword ptr [ecx], r14
#define MOV_R14_TO_PTR_EDX mov qword ptr [edx], r14
#define MOV_R14_TO_PTR_EDI mov qword ptr [edi], r14
#define MOV_R14_TO_PTR_ESI mov qword ptr [esi], r14
#define MOV_R14_TO_PTR_EBP mov qword ptr [ebp], r14
#define MOV_R14_TO_PTR_ESP mov qword ptr [esp], r14

#define MOV_R15_TO_PTR_RAX mov qword ptr [rax], r15
#define MOV_R15_TO_PTR_RBX mov qword ptr [rbx], r15
#define MOV_R15_TO_PTR_RCX mov qword ptr [rcx], r15
#define MOV_R15_TO_PTR_RDX mov qword ptr [rdx], r15
#define MOV_R15_TO_PTR_RDI mov qword ptr [rdi], r15
#define MOV_R15_TO_PTR_RSI mov qword ptr [rsi], r15
#define MOV_R15_TO_PTR_RBP mov qword ptr [rbp], r15
#define MOV_R15_TO_PTR_RSP mov qword ptr [rsp], r15
#define MOV_R15_TO_PTR_R8 mov qword ptr [r8], r15
#define MOV_R15_TO_PTR_R9 mov qword ptr [r9], r15
#define MOV_R15_TO_PTR_R10 mov qword ptr [r10], r15
#define MOV_R15_TO_PTR_R11 mov qword ptr [r11], r15
#define MOV_R15_TO_PTR_R12 mov qword ptr [r12], r15
#define MOV_R15_TO_PTR_R13 mov qword ptr [r13], r15
#define MOV_R15_TO_PTR_R14 mov qword ptr [r14], r15
#define MOV_R15_TO_PTR_R15 mov qword ptr [r15], r15
#define MOV_R15_TO_PTR_EAX mov qword ptr [eax], r15
#define MOV_R15_TO_PTR_EBX mov qword ptr [ebx], r15
#define MOV_R15_TO_PTR_ECX mov qword ptr [ecx], r15
#define MOV_R15_TO_PTR_EDX mov qword ptr [edx], r15
#define MOV_R15_TO_PTR_EDI mov qword ptr [edi], r15
#define MOV_R15_TO_PTR_ESI mov qword ptr [esi], r15
#define MOV_R15_TO_PTR_EBP mov qword ptr [ebp], r15
#define MOV_R15_TO_PTR_ESP mov qword ptr [esp], r15

#define MOV_RAX_FROM_PTR_RAX_(VALUE) mov rax, qword ptr [rax + VALUE]
#define MOV_RAX_FROM_PTR_RBX_(VALUE) mov rax, qword ptr [rbx + VALUE]
#define MOV_RAX_FROM_PTR_RCX_(VALUE) mov rax, qword ptr [rcx + VALUE]
#define MOV_RAX_FROM_PTR_RDX_(VALUE) mov rax, qword ptr [rdx + VALUE]
#define MOV_RAX_FROM_PTR_RDI_(VALUE) mov rax, qword ptr [rdi + VALUE]
#define MOV_RAX_FROM_PTR_RSI_(VALUE) mov rax, qword ptr [rsi + VALUE]
#define MOV_RAX_FROM_PTR_RBP_(VALUE) mov rax, qword ptr [rbp + VALUE]
#define MOV_RAX_FROM_PTR_RSP_(VALUE) mov rax, qword ptr [rsp + VALUE]
#define MOV_RAX_FROM_PTR_R8_(VALUE) mov rax, qword ptr [r8 + VALUE]
#define MOV_RAX_FROM_PTR_R9_(VALUE) mov rax, qword ptr [r9 + VALUE]
#define MOV_RAX_FROM_PTR_R10_(VALUE) mov rax, qword ptr [r10 + VALUE]
#define MOV_RAX_FROM_PTR_R11_(VALUE) mov rax, qword ptr [r11 + VALUE]
#define MOV_RAX_FROM_PTR_R12_(VALUE) mov rax, qword ptr [r12 + VALUE]
#define MOV_RAX_FROM_PTR_R13_(VALUE) mov rax, qword ptr [r13 + VALUE]
#define MOV_RAX_FROM_PTR_R14_(VALUE) mov rax, qword ptr [r14 + VALUE]
#define MOV_RAX_FROM_PTR_R15_(VALUE) mov rax, qword ptr [r15 + VALUE]
#define MOV_RAX_FROM_PTR_EAX_(VALUE) mov rax, qword ptr [eax + VALUE]
#define MOV_RAX_FROM_PTR_EBX_(VALUE) mov rax, qword ptr [ebx + VALUE]
#define MOV_RAX_FROM_PTR_ECX_(VALUE) mov rax, qword ptr [ecx + VALUE]
#define MOV_RAX_FROM_PTR_EDX_(VALUE) mov rax, qword ptr [edx + VALUE]
#define MOV_RAX_FROM_PTR_EDI_(VALUE) mov rax, qword ptr [edi + VALUE]
#define MOV_RAX_FROM_PTR_ESI_(VALUE) mov rax, qword ptr [esi + VALUE]
#define MOV_RAX_FROM_PTR_EBP_(VALUE) mov rax, qword ptr [ebp + VALUE]
#define MOV_RAX_FROM_PTR_ESP_(VALUE) mov rax, qword ptr [esp + VALUE]

#define MOV_RBX_FROM_PTR_RAX_(VALUE) mov rbx, qword ptr [rax + VALUE]
#define MOV_RBX_FROM_PTR_RBX_(VALUE) mov rbx, qword ptr [rbx + VALUE]
#define MOV_RBX_FROM_PTR_RCX_(VALUE) mov rbx, qword ptr [rcx + VALUE]
#define MOV_RBX_FROM_PTR_RDX_(VALUE) mov rbx, qword ptr [rdx + VALUE]
#define MOV_RBX_FROM_PTR_RDI_(VALUE) mov rbx, qword ptr [rdi + VALUE]
#define MOV_RBX_FROM_PTR_RSI_(VALUE) mov rbx, qword ptr [rsi + VALUE]
#define MOV_RBX_FROM_PTR_RBP_(VALUE) mov rbx, qword ptr [rbp + VALUE]
#define MOV_RBX_FROM_PTR_RSP_(VALUE) mov rbx, qword ptr [rsp + VALUE]
#define MOV_RBX_FROM_PTR_R8_(VALUE) mov rbx, qword ptr [r8 + VALUE]
#define MOV_RBX_FROM_PTR_R9_(VALUE) mov rbx, qword ptr [r9 + VALUE]
#define MOV_RBX_FROM_PTR_R10_(VALUE) mov rbx, qword ptr [r10 + VALUE]
#define MOV_RBX_FROM_PTR_R11_(VALUE) mov rbx, qword ptr [r11 + VALUE]
#define MOV_RBX_FROM_PTR_R12_(VALUE) mov rbx, qword ptr [r12 + VALUE]
#define MOV_RBX_FROM_PTR_R13_(VALUE) mov rbx, qword ptr [r13 + VALUE]
#define MOV_RBX_FROM_PTR_R14_(VALUE) mov rbx, qword ptr [r14 + VALUE]
#define MOV_RBX_FROM_PTR_R15_(VALUE) mov rbx, qword ptr [r15 + VALUE]
#define MOV_RBX_FROM_PTR_EAX_(VALUE) mov rbx, qword ptr [eax + VALUE]
#define MOV_RBX_FROM_PTR_EBX_(VALUE) mov rbx, qword ptr [ebx + VALUE]
#define MOV_RBX_FROM_PTR_ECX_(VALUE) mov rbx, qword ptr [ecx + VALUE]
#define MOV_RBX_FROM_PTR_EDX_(VALUE) mov rbx, qword ptr [edx + VALUE]
#define MOV_RBX_FROM_PTR_EDI_(VALUE) mov rbx, qword ptr [edi + VALUE]
#define MOV_RBX_FROM_PTR_ESI_(VALUE) mov rbx, qword ptr [esi + VALUE]
#define MOV_RBX_FROM_PTR_EBP_(VALUE) mov rbx, qword ptr [ebp + VALUE]
#define MOV_RBX_FROM_PTR_ESP_(VALUE) mov rbx, qword ptr [esp + VALUE]

#define MOV_RCX_FROM_PTR_RAX_(VALUE) mov rcx, qword ptr [rax + VALUE]
#define MOV_RCX_FROM_PTR_RBX_(VALUE) mov rcx, qword ptr [rbx + VALUE]
#define MOV_RCX_FROM_PTR_RCX_(VALUE) mov rcx, qword ptr [rcx + VALUE]
#define MOV_RCX_FROM_PTR_RDX_(VALUE) mov rcx, qword ptr [rdx + VALUE]
#define MOV_RCX_FROM_PTR_RDI_(VALUE) mov rcx, qword ptr [rdi + VALUE]
#define MOV_RCX_FROM_PTR_RSI_(VALUE) mov rcx, qword ptr [rsi + VALUE]
#define MOV_RCX_FROM_PTR_RBP_(VALUE) mov rcx, qword ptr [rbp + VALUE]
#define MOV_RCX_FROM_PTR_RSP_(VALUE) mov rcx, qword ptr [rsp + VALUE]
#define MOV_RCX_FROM_PTR_R8_(VALUE) mov rcx, qword ptr [r8 + VALUE]
#define MOV_RCX_FROM_PTR_R9_(VALUE) mov rcx, qword ptr [r9 + VALUE]
#define MOV_RCX_FROM_PTR_R10_(VALUE) mov rcx, qword ptr [r10 + VALUE]
#define MOV_RCX_FROM_PTR_R11_(VALUE) mov rcx, qword ptr [r11 + VALUE]
#define MOV_RCX_FROM_PTR_R12_(VALUE) mov rcx, qword ptr [r12 + VALUE]
#define MOV_RCX_FROM_PTR_R13_(VALUE) mov rcx, qword ptr [r13 + VALUE]
#define MOV_RCX_FROM_PTR_R14_(VALUE) mov rcx, qword ptr [r14 + VALUE]
#define MOV_RCX_FROM_PTR_R15_(VALUE) mov rcx, qword ptr [r15 + VALUE]
#define MOV_RCX_FROM_PTR_EAX_(VALUE) mov rcx, qword ptr [eax + VALUE]
#define MOV_RCX_FROM_PTR_EBX_(VALUE) mov rcx, qword ptr [ebx + VALUE]
#define MOV_RCX_FROM_PTR_ECX_(VALUE) mov rcx, qword ptr [ecx + VALUE]
#define MOV_RCX_FROM_PTR_EDX_(VALUE) mov rcx, qword ptr [edx + VALUE]
#define MOV_RCX_FROM_PTR_EDI_(VALUE) mov rcx, qword ptr [edi + VALUE]
#define MOV_RCX_FROM_PTR_ESI_(VALUE) mov rcx, qword ptr [esi + VALUE]
#define MOV_RCX_FROM_PTR_EBP_(VALUE) mov rcx, qword ptr [ebp + VALUE]
#define MOV_RCX_FROM_PTR_ESP_(VALUE) mov rcx, qword ptr [esp + VALUE]

#define MOV_RDX_FROM_PTR_RAX_(VALUE) mov rdx, qword ptr [rax + VALUE]
#define MOV_RDX_FROM_PTR_RBX_(VALUE) mov rdx, qword ptr [rbx + VALUE]
#define MOV_RDX_FROM_PTR_RCX_(VALUE) mov rdx, qword ptr [rcx + VALUE]
#define MOV_RDX_FROM_PTR_RDX_(VALUE) mov rdx, qword ptr [rdx + VALUE]
#define MOV_RDX_FROM_PTR_RDI_(VALUE) mov rdx, qword ptr [rdi + VALUE]
#define MOV_RDX_FROM_PTR_RSI_(VALUE) mov rdx, qword ptr [rsi + VALUE]
#define MOV_RDX_FROM_PTR_RBP_(VALUE) mov rdx, qword ptr [rbp + VALUE]
#define MOV_RDX_FROM_PTR_RSP_(VALUE) mov rdx, qword ptr [rsp + VALUE]
#define MOV_RDX_FROM_PTR_R8_(VALUE) mov rdx, qword ptr [r8 + VALUE]
#define MOV_RDX_FROM_PTR_R9_(VALUE) mov rdx, qword ptr [r9 + VALUE]
#define MOV_RDX_FROM_PTR_R10_(VALUE) mov rdx, qword ptr [r10 + VALUE]
#define MOV_RDX_FROM_PTR_R11_(VALUE) mov rdx, qword ptr [r11 + VALUE]
#define MOV_RDX_FROM_PTR_R12_(VALUE) mov rdx, qword ptr [r12 + VALUE]
#define MOV_RDX_FROM_PTR_R13_(VALUE) mov rdx, qword ptr [r13 + VALUE]
#define MOV_RDX_FROM_PTR_R14_(VALUE) mov rdx, qword ptr [r14 + VALUE]
#define MOV_RDX_FROM_PTR_R15_(VALUE) mov rdx, qword ptr [r15 + VALUE]
#define MOV_RDX_FROM_PTR_EAX_(VALUE) mov rdx, qword ptr [eax + VALUE]
#define MOV_RDX_FROM_PTR_EBX_(VALUE) mov rdx, qword ptr [ebx + VALUE]
#define MOV_RDX_FROM_PTR_ECX_(VALUE) mov rdx, qword ptr [ecx + VALUE]
#define MOV_RDX_FROM_PTR_EDX_(VALUE) mov rdx, qword ptr [edx + VALUE]
#define MOV_RDX_FROM_PTR_EDI_(VALUE) mov rdx, qword ptr [edi + VALUE]
#define MOV_RDX_FROM_PTR_ESI_(VALUE) mov rdx, qword ptr [esi + VALUE]
#define MOV_RDX_FROM_PTR_EBP_(VALUE) mov rdx, qword ptr [ebp + VALUE]
#define MOV_RDX_FROM_PTR_ESP_(VALUE) mov rdx, qword ptr [esp + VALUE]

#define MOV_RDI_FROM_PTR_RAX_(VALUE) mov rdi, qword ptr [rax + VALUE]
#define MOV_RDI_FROM_PTR_RBX_(VALUE) mov rdi, qword ptr [rbx + VALUE]
#define MOV_RDI_FROM_PTR_RCX_(VALUE) mov rdi, qword ptr [rcx + VALUE]
#define MOV_RDI_FROM_PTR_RDX_(VALUE) mov rdi, qword ptr [rdx + VALUE]
#define MOV_RDI_FROM_PTR_RDI_(VALUE) mov rdi, qword ptr [rdi + VALUE]
#define MOV_RDI_FROM_PTR_RSI_(VALUE) mov rdi, qword ptr [rsi + VALUE]
#define MOV_RDI_FROM_PTR_RBP_(VALUE) mov rdi, qword ptr [rbp + VALUE]
#define MOV_RDI_FROM_PTR_RSP_(VALUE) mov rdi, qword ptr [rsp + VALUE]
#define MOV_RDI_FROM_PTR_R8_(VALUE) mov rdi, qword ptr [r8 + VALUE]
#define MOV_RDI_FROM_PTR_R9_(VALUE) mov rdi, qword ptr [r9 + VALUE]
#define MOV_RDI_FROM_PTR_R10_(VALUE) mov rdi, qword ptr [r10 + VALUE]
#define MOV_RDI_FROM_PTR_R11_(VALUE) mov rdi, qword ptr [r11 + VALUE]
#define MOV_RDI_FROM_PTR_R12_(VALUE) mov rdi, qword ptr [r12 + VALUE]
#define MOV_RDI_FROM_PTR_R13_(VALUE) mov rdi, qword ptr [r13 + VALUE]
#define MOV_RDI_FROM_PTR_R14_(VALUE) mov rdi, qword ptr [r14 + VALUE]
#define MOV_RDI_FROM_PTR_R15_(VALUE) mov rdi, qword ptr [r15 + VALUE]
#define MOV_RDI_FROM_PTR_EAX_(VALUE) mov rdi, qword ptr [eax + VALUE]
#define MOV_RDI_FROM_PTR_EBX_(VALUE) mov rdi, qword ptr [ebx + VALUE]
#define MOV_RDI_FROM_PTR_ECX_(VALUE) mov rdi, qword ptr [ecx + VALUE]
#define MOV_RDI_FROM_PTR_EDX_(VALUE) mov rdi, qword ptr [edx + VALUE]
#define MOV_RDI_FROM_PTR_EDI_(VALUE) mov rdi, qword ptr [edi + VALUE]
#define MOV_RDI_FROM_PTR_ESI_(VALUE) mov rdi, qword ptr [esi + VALUE]
#define MOV_RDI_FROM_PTR_EBP_(VALUE) mov rdi, qword ptr [ebp + VALUE]
#define MOV_RDI_FROM_PTR_ESP_(VALUE) mov rdi, qword ptr [esp + VALUE]

#define MOV_RSI_FROM_PTR_RAX_(VALUE) mov rsi, qword ptr [rax + VALUE]
#define MOV_RSI_FROM_PTR_RBX_(VALUE) mov rsi, qword ptr [rbx + VALUE]
#define MOV_RSI_FROM_PTR_RCX_(VALUE) mov rsi, qword ptr [rcx + VALUE]
#define MOV_RSI_FROM_PTR_RDX_(VALUE) mov rsi, qword ptr [rdx + VALUE]
#define MOV_RSI_FROM_PTR_RDI_(VALUE) mov rsi, qword ptr [rdi + VALUE]
#define MOV_RSI_FROM_PTR_RSI_(VALUE) mov rsi, qword ptr [rsi + VALUE]
#define MOV_RSI_FROM_PTR_RBP_(VALUE) mov rsi, qword ptr [rbp + VALUE]
#define MOV_RSI_FROM_PTR_RSP_(VALUE) mov rsi, qword ptr [rsp + VALUE]
#define MOV_RSI_FROM_PTR_R8_(VALUE) mov rsi, qword ptr [r8 + VALUE]
#define MOV_RSI_FROM_PTR_R9_(VALUE) mov rsi, qword ptr [r9 + VALUE]
#define MOV_RSI_FROM_PTR_R10_(VALUE) mov rsi, qword ptr [r10 + VALUE]
#define MOV_RSI_FROM_PTR_R11_(VALUE) mov rsi, qword ptr [r11 + VALUE]
#define MOV_RSI_FROM_PTR_R12_(VALUE) mov rsi, qword ptr [r12 + VALUE]
#define MOV_RSI_FROM_PTR_R13_(VALUE) mov rsi, qword ptr [r13 + VALUE]
#define MOV_RSI_FROM_PTR_R14_(VALUE) mov rsi, qword ptr [r14 + VALUE]
#define MOV_RSI_FROM_PTR_R15_(VALUE) mov rsi, qword ptr [r15 + VALUE]
#define MOV_RSI_FROM_PTR_EAX_(VALUE) mov rsi, qword ptr [eax + VALUE]
#define MOV_RSI_FROM_PTR_EBX_(VALUE) mov rsi, qword ptr [ebx + VALUE]
#define MOV_RSI_FROM_PTR_ECX_(VALUE) mov rsi, qword ptr [ecx + VALUE]
#define MOV_RSI_FROM_PTR_EDX_(VALUE) mov rsi, qword ptr [edx + VALUE]
#define MOV_RSI_FROM_PTR_EDI_(VALUE) mov rsi, qword ptr [edi + VALUE]
#define MOV_RSI_FROM_PTR_ESI_(VALUE) mov rsi, qword ptr [esi + VALUE]
#define MOV_RSI_FROM_PTR_EBP_(VALUE) mov rsi, qword ptr [ebp + VALUE]
#define MOV_RSI_FROM_PTR_ESP_(VALUE) mov rsi, qword ptr [esp + VALUE]

#define MOV_RBP_FROM_PTR_RAX_(VALUE) mov rbp, qword ptr [rax + VALUE]
#define MOV_RBP_FROM_PTR_RBX_(VALUE) mov rbp, qword ptr [rbx + VALUE]
#define MOV_RBP_FROM_PTR_RCX_(VALUE) mov rbp, qword ptr [rcx + VALUE]
#define MOV_RBP_FROM_PTR_RDX_(VALUE) mov rbp, qword ptr [rdx + VALUE]
#define MOV_RBP_FROM_PTR_RDI_(VALUE) mov rbp, qword ptr [rdi + VALUE]
#define MOV_RBP_FROM_PTR_RSI_(VALUE) mov rbp, qword ptr [rsi + VALUE]
#define MOV_RBP_FROM_PTR_RBP_(VALUE) mov rbp, qword ptr [rbp + VALUE]
#define MOV_RBP_FROM_PTR_RSP_(VALUE) mov rbp, qword ptr [rsp + VALUE]
#define MOV_RBP_FROM_PTR_R8_(VALUE) mov rbp, qword ptr [r8 + VALUE]
#define MOV_RBP_FROM_PTR_R9_(VALUE) mov rbp, qword ptr [r9 + VALUE]
#define MOV_RBP_FROM_PTR_R10_(VALUE) mov rbp, qword ptr [r10 + VALUE]
#define MOV_RBP_FROM_PTR_R11_(VALUE) mov rbp, qword ptr [r11 + VALUE]
#define MOV_RBP_FROM_PTR_R12_(VALUE) mov rbp, qword ptr [r12 + VALUE]
#define MOV_RBP_FROM_PTR_R13_(VALUE) mov rbp, qword ptr [r13 + VALUE]
#define MOV_RBP_FROM_PTR_R14_(VALUE) mov rbp, qword ptr [r14 + VALUE]
#define MOV_RBP_FROM_PTR_R15_(VALUE) mov rbp, qword ptr [r15 + VALUE]
#define MOV_RBP_FROM_PTR_EAX_(VALUE) mov rbp, qword ptr [eax + VALUE]
#define MOV_RBP_FROM_PTR_EBX_(VALUE) mov rbp, qword ptr [ebx + VALUE]
#define MOV_RBP_FROM_PTR_ECX_(VALUE) mov rbp, qword ptr [ecx + VALUE]
#define MOV_RBP_FROM_PTR_EDX_(VALUE) mov rbp, qword ptr [edx + VALUE]
#define MOV_RBP_FROM_PTR_EDI_(VALUE) mov rbp, qword ptr [edi + VALUE]
#define MOV_RBP_FROM_PTR_ESI_(VALUE) mov rbp, qword ptr [esi + VALUE]
#define MOV_RBP_FROM_PTR_EBP_(VALUE) mov rbp, qword ptr [ebp + VALUE]
#define MOV_RBP_FROM_PTR_ESP_(VALUE) mov rbp, qword ptr [esp + VALUE]

#define MOV_RSP_FROM_PTR_RAX_(VALUE) mov rsp, qword ptr [rax + VALUE]
#define MOV_RSP_FROM_PTR_RBX_(VALUE) mov rsp, qword ptr [rbx + VALUE]
#define MOV_RSP_FROM_PTR_RCX_(VALUE) mov rsp, qword ptr [rcx + VALUE]
#define MOV_RSP_FROM_PTR_RDX_(VALUE) mov rsp, qword ptr [rdx + VALUE]
#define MOV_RSP_FROM_PTR_RDI_(VALUE) mov rsp, qword ptr [rdi + VALUE]
#define MOV_RSP_FROM_PTR_RSI_(VALUE) mov rsp, qword ptr [rsi + VALUE]
#define MOV_RSP_FROM_PTR_RBP_(VALUE) mov rsp, qword ptr [rbp + VALUE]
#define MOV_RSP_FROM_PTR_RSP_(VALUE) mov rsp, qword ptr [rsp + VALUE]
#define MOV_RSP_FROM_PTR_R8_(VALUE) mov rsp, qword ptr [r8 + VALUE]
#define MOV_RSP_FROM_PTR_R9_(VALUE) mov rsp, qword ptr [r9 + VALUE]
#define MOV_RSP_FROM_PTR_R10_(VALUE) mov rsp, qword ptr [r10 + VALUE]
#define MOV_RSP_FROM_PTR_R11_(VALUE) mov rsp, qword ptr [r11 + VALUE]
#define MOV_RSP_FROM_PTR_R12_(VALUE) mov rsp, qword ptr [r12 + VALUE]
#define MOV_RSP_FROM_PTR_R13_(VALUE) mov rsp, qword ptr [r13 + VALUE]
#define MOV_RSP_FROM_PTR_R14_(VALUE) mov rsp, qword ptr [r14 + VALUE]
#define MOV_RSP_FROM_PTR_R15_(VALUE) mov rsp, qword ptr [r15 + VALUE]
#define MOV_RSP_FROM_PTR_EAX_(VALUE) mov rsp, qword ptr [eax + VALUE]
#define MOV_RSP_FROM_PTR_EBX_(VALUE) mov rsp, qword ptr [ebx + VALUE]
#define MOV_RSP_FROM_PTR_ECX_(VALUE) mov rsp, qword ptr [ecx + VALUE]
#define MOV_RSP_FROM_PTR_EDX_(VALUE) mov rsp, qword ptr [edx + VALUE]
#define MOV_RSP_FROM_PTR_EDI_(VALUE) mov rsp, qword ptr [edi + VALUE]
#define MOV_RSP_FROM_PTR_ESI_(VALUE) mov rsp, qword ptr [esi + VALUE]
#define MOV_RSP_FROM_PTR_EBP_(VALUE) mov rsp, qword ptr [ebp + VALUE]
#define MOV_RSP_FROM_PTR_ESP_(VALUE) mov rsp, qword ptr [esp + VALUE]

#define MOV_R8_FROM_PTR_RAX_(VALUE) mov r8, qword ptr [rax + VALUE]
#define MOV_R8_FROM_PTR_RBX_(VALUE) mov r8, qword ptr [rbx + VALUE]
#define MOV_R8_FROM_PTR_RCX_(VALUE) mov r8, qword ptr [rcx + VALUE]
#define MOV_R8_FROM_PTR_RDX_(VALUE) mov r8, qword ptr [rdx + VALUE]
#define MOV_R8_FROM_PTR_RDI_(VALUE) mov r8, qword ptr [rdi + VALUE]
#define MOV_R8_FROM_PTR_RSI_(VALUE) mov r8, qword ptr [rsi + VALUE]
#define MOV_R8_FROM_PTR_RBP_(VALUE) mov r8, qword ptr [rbp + VALUE]
#define MOV_R8_FROM_PTR_RSP_(VALUE) mov r8, qword ptr [rsp + VALUE]
#define MOV_R8_FROM_PTR_R8_(VALUE) mov r8, qword ptr [r8 + VALUE]
#define MOV_R8_FROM_PTR_R9_(VALUE) mov r8, qword ptr [r9 + VALUE]
#define MOV_R8_FROM_PTR_R10_(VALUE) mov r8, qword ptr [r10 + VALUE]
#define MOV_R8_FROM_PTR_R11_(VALUE) mov r8, qword ptr [r11 + VALUE]
#define MOV_R8_FROM_PTR_R12_(VALUE) mov r8, qword ptr [r12 + VALUE]
#define MOV_R8_FROM_PTR_R13_(VALUE) mov r8, qword ptr [r13 + VALUE]
#define MOV_R8_FROM_PTR_R14_(VALUE) mov r8, qword ptr [r14 + VALUE]
#define MOV_R8_FROM_PTR_R15_(VALUE) mov r8, qword ptr [r15 + VALUE]
#define MOV_R8_FROM_PTR_EAX_(VALUE) mov r8, qword ptr [eax + VALUE]
#define MOV_R8_FROM_PTR_EBX_(VALUE) mov r8, qword ptr [ebx + VALUE]
#define MOV_R8_FROM_PTR_ECX_(VALUE) mov r8, qword ptr [ecx + VALUE]
#define MOV_R8_FROM_PTR_EDX_(VALUE) mov r8, qword ptr [edx + VALUE]
#define MOV_R8_FROM_PTR_EDI_(VALUE) mov r8, qword ptr [edi + VALUE]
#define MOV_R8_FROM_PTR_ESI_(VALUE) mov r8, qword ptr [esi + VALUE]
#define MOV_R8_FROM_PTR_EBP_(VALUE) mov r8, qword ptr [ebp + VALUE]
#define MOV_R8_FROM_PTR_ESP_(VALUE) mov r8, qword ptr [esp + VALUE]

#define MOV_R9_FROM_PTR_RAX_(VALUE) mov r9, qword ptr [rax + VALUE]
#define MOV_R9_FROM_PTR_RBX_(VALUE) mov r9, qword ptr [rbx + VALUE]
#define MOV_R9_FROM_PTR_RCX_(VALUE) mov r9, qword ptr [rcx + VALUE]
#define MOV_R9_FROM_PTR_RDX_(VALUE) mov r9, qword ptr [rdx + VALUE]
#define MOV_R9_FROM_PTR_RDI_(VALUE) mov r9, qword ptr [rdi + VALUE]
#define MOV_R9_FROM_PTR_RSI_(VALUE) mov r9, qword ptr [rsi + VALUE]
#define MOV_R9_FROM_PTR_RBP_(VALUE) mov r9, qword ptr [rbp + VALUE]
#define MOV_R9_FROM_PTR_RSP_(VALUE) mov r9, qword ptr [rsp + VALUE]
#define MOV_R9_FROM_PTR_R8_(VALUE) mov r9, qword ptr [r8 + VALUE]
#define MOV_R9_FROM_PTR_R9_(VALUE) mov r9, qword ptr [r9 + VALUE]
#define MOV_R9_FROM_PTR_R10_(VALUE) mov r9, qword ptr [r10 + VALUE]
#define MOV_R9_FROM_PTR_R11_(VALUE) mov r9, qword ptr [r11 + VALUE]
#define MOV_R9_FROM_PTR_R12_(VALUE) mov r9, qword ptr [r12 + VALUE]
#define MOV_R9_FROM_PTR_R13_(VALUE) mov r9, qword ptr [r13 + VALUE]
#define MOV_R9_FROM_PTR_R14_(VALUE) mov r9, qword ptr [r14 + VALUE]
#define MOV_R9_FROM_PTR_R15_(VALUE) mov r9, qword ptr [r15 + VALUE]
#define MOV_R9_FROM_PTR_EAX_(VALUE) mov r9, qword ptr [eax + VALUE]
#define MOV_R9_FROM_PTR_EBX_(VALUE) mov r9, qword ptr [ebx + VALUE]
#define MOV_R9_FROM_PTR_ECX_(VALUE) mov r9, qword ptr [ecx + VALUE]
#define MOV_R9_FROM_PTR_EDX_(VALUE) mov r9, qword ptr [edx + VALUE]
#define MOV_R9_FROM_PTR_EDI_(VALUE) mov r9, qword ptr [edi + VALUE]
#define MOV_R9_FROM_PTR_ESI_(VALUE) mov r9, qword ptr [esi + VALUE]
#define MOV_R9_FROM_PTR_EBP_(VALUE) mov r9, qword ptr [ebp + VALUE]
#define MOV_R9_FROM_PTR_ESP_(VALUE) mov r9, qword ptr [esp + VALUE]

#define MOV_R10_FROM_PTR_RAX_(VALUE) mov r10, qword ptr [rax + VALUE]
#define MOV_R10_FROM_PTR_RBX_(VALUE) mov r10, qword ptr [rbx + VALUE]
#define MOV_R10_FROM_PTR_RCX_(VALUE) mov r10, qword ptr [rcx + VALUE]
#define MOV_R10_FROM_PTR_RDX_(VALUE) mov r10, qword ptr [rdx + VALUE]
#define MOV_R10_FROM_PTR_RDI_(VALUE) mov r10, qword ptr [rdi + VALUE]
#define MOV_R10_FROM_PTR_RSI_(VALUE) mov r10, qword ptr [rsi + VALUE]
#define MOV_R10_FROM_PTR_RBP_(VALUE) mov r10, qword ptr [rbp + VALUE]
#define MOV_R10_FROM_PTR_RSP_(VALUE) mov r10, qword ptr [rsp + VALUE]
#define MOV_R10_FROM_PTR_R8_(VALUE) mov r10, qword ptr [r8 + VALUE]
#define MOV_R10_FROM_PTR_R9_(VALUE) mov r10, qword ptr [r9 + VALUE]
#define MOV_R10_FROM_PTR_R10_(VALUE) mov r10, qword ptr [r10 + VALUE]
#define MOV_R10_FROM_PTR_R11_(VALUE) mov r10, qword ptr [r11 + VALUE]
#define MOV_R10_FROM_PTR_R12_(VALUE) mov r10, qword ptr [r12 + VALUE]
#define MOV_R10_FROM_PTR_R13_(VALUE) mov r10, qword ptr [r13 + VALUE]
#define MOV_R10_FROM_PTR_R14_(VALUE) mov r10, qword ptr [r14 + VALUE]
#define MOV_R10_FROM_PTR_R15_(VALUE) mov r10, qword ptr [r15 + VALUE]
#define MOV_R10_FROM_PTR_EAX_(VALUE) mov r10, qword ptr [eax + VALUE]
#define MOV_R10_FROM_PTR_EBX_(VALUE) mov r10, qword ptr [ebx + VALUE]
#define MOV_R10_FROM_PTR_ECX_(VALUE) mov r10, qword ptr [ecx + VALUE]
#define MOV_R10_FROM_PTR_EDX_(VALUE) mov r10, qword ptr [edx + VALUE]
#define MOV_R10_FROM_PTR_EDI_(VALUE) mov r10, qword ptr [edi + VALUE]
#define MOV_R10_FROM_PTR_ESI_(VALUE) mov r10, qword ptr [esi + VALUE]
#define MOV_R10_FROM_PTR_EBP_(VALUE) mov r10, qword ptr [ebp + VALUE]
#define MOV_R10_FROM_PTR_ESP_(VALUE) mov r10, qword ptr [esp + VALUE]

#define MOV_R11_FROM_PTR_RAX_(VALUE) mov r11, qword ptr [rax + VALUE]
#define MOV_R11_FROM_PTR_RBX_(VALUE) mov r11, qword ptr [rbx + VALUE]
#define MOV_R11_FROM_PTR_RCX_(VALUE) mov r11, qword ptr [rcx + VALUE]
#define MOV_R11_FROM_PTR_RDX_(VALUE) mov r11, qword ptr [rdx + VALUE]
#define MOV_R11_FROM_PTR_RDI_(VALUE) mov r11, qword ptr [rdi + VALUE]
#define MOV_R11_FROM_PTR_RSI_(VALUE) mov r11, qword ptr [rsi + VALUE]
#define MOV_R11_FROM_PTR_RBP_(VALUE) mov r11, qword ptr [rbp + VALUE]
#define MOV_R11_FROM_PTR_RSP_(VALUE) mov r11, qword ptr [rsp + VALUE]
#define MOV_R11_FROM_PTR_R8_(VALUE) mov r11, qword ptr [r8 + VALUE]
#define MOV_R11_FROM_PTR_R9_(VALUE) mov r11, qword ptr [r9 + VALUE]
#define MOV_R11_FROM_PTR_R10_(VALUE) mov r11, qword ptr [r10 + VALUE]
#define MOV_R11_FROM_PTR_R11_(VALUE) mov r11, qword ptr [r11 + VALUE]
#define MOV_R11_FROM_PTR_R12_(VALUE) mov r11, qword ptr [r12 + VALUE]
#define MOV_R11_FROM_PTR_R13_(VALUE) mov r11, qword ptr [r13 + VALUE]
#define MOV_R11_FROM_PTR_R14_(VALUE) mov r11, qword ptr [r14 + VALUE]
#define MOV_R11_FROM_PTR_R15_(VALUE) mov r11, qword ptr [r15 + VALUE]
#define MOV_R11_FROM_PTR_EAX_(VALUE) mov r11, qword ptr [eax + VALUE]
#define MOV_R11_FROM_PTR_EBX_(VALUE) mov r11, qword ptr [ebx + VALUE]
#define MOV_R11_FROM_PTR_ECX_(VALUE) mov r11, qword ptr [ecx + VALUE]
#define MOV_R11_FROM_PTR_EDX_(VALUE) mov r11, qword ptr [edx + VALUE]
#define MOV_R11_FROM_PTR_EDI_(VALUE) mov r11, qword ptr [edi + VALUE]
#define MOV_R11_FROM_PTR_ESI_(VALUE) mov r11, qword ptr [esi + VALUE]
#define MOV_R11_FROM_PTR_EBP_(VALUE) mov r11, qword ptr [ebp + VALUE]
#define MOV_R11_FROM_PTR_ESP_(VALUE) mov r11, qword ptr [esp + VALUE]

#define MOV_R12_FROM_PTR_RAX_(VALUE) mov r12, qword ptr [rax + VALUE]
#define MOV_R12_FROM_PTR_RBX_(VALUE) mov r12, qword ptr [rbx + VALUE]
#define MOV_R12_FROM_PTR_RCX_(VALUE) mov r12, qword ptr [rcx + VALUE]
#define MOV_R12_FROM_PTR_RDX_(VALUE) mov r12, qword ptr [rdx + VALUE]
#define MOV_R12_FROM_PTR_RDI_(VALUE) mov r12, qword ptr [rdi + VALUE]
#define MOV_R12_FROM_PTR_RSI_(VALUE) mov r12, qword ptr [rsi + VALUE]
#define MOV_R12_FROM_PTR_RBP_(VALUE) mov r12, qword ptr [rbp + VALUE]
#define MOV_R12_FROM_PTR_RSP_(VALUE) mov r12, qword ptr [rsp + VALUE]
#define MOV_R12_FROM_PTR_R8_(VALUE) mov r12, qword ptr [r8 + VALUE]
#define MOV_R12_FROM_PTR_R9_(VALUE) mov r12, qword ptr [r9 + VALUE]
#define MOV_R12_FROM_PTR_R10_(VALUE) mov r12, qword ptr [r10 + VALUE]
#define MOV_R12_FROM_PTR_R11_(VALUE) mov r12, qword ptr [r11 + VALUE]
#define MOV_R12_FROM_PTR_R12_(VALUE) mov r12, qword ptr [r12 + VALUE]
#define MOV_R12_FROM_PTR_R13_(VALUE) mov r12, qword ptr [r13 + VALUE]
#define MOV_R12_FROM_PTR_R14_(VALUE) mov r12, qword ptr [r14 + VALUE]
#define MOV_R12_FROM_PTR_R15_(VALUE) mov r12, qword ptr [r15 + VALUE]
#define MOV_R12_FROM_PTR_EAX_(VALUE) mov r12, qword ptr [eax + VALUE]
#define MOV_R12_FROM_PTR_EBX_(VALUE) mov r12, qword ptr [ebx + VALUE]
#define MOV_R12_FROM_PTR_ECX_(VALUE) mov r12, qword ptr [ecx + VALUE]
#define MOV_R12_FROM_PTR_EDX_(VALUE) mov r12, qword ptr [edx + VALUE]
#define MOV_R12_FROM_PTR_EDI_(VALUE) mov r12, qword ptr [edi + VALUE]
#define MOV_R12_FROM_PTR_ESI_(VALUE) mov r12, qword ptr [esi + VALUE]
#define MOV_R12_FROM_PTR_EBP_(VALUE) mov r12, qword ptr [ebp + VALUE]
#define MOV_R12_FROM_PTR_ESP_(VALUE) mov r12, qword ptr [esp + VALUE]

#define MOV_R13_FROM_PTR_RAX_(VALUE) mov r13, qword ptr [rax + VALUE]
#define MOV_R13_FROM_PTR_RBX_(VALUE) mov r13, qword ptr [rbx + VALUE]
#define MOV_R13_FROM_PTR_RCX_(VALUE) mov r13, qword ptr [rcx + VALUE]
#define MOV_R13_FROM_PTR_RDX_(VALUE) mov r13, qword ptr [rdx + VALUE]
#define MOV_R13_FROM_PTR_RDI_(VALUE) mov r13, qword ptr [rdi + VALUE]
#define MOV_R13_FROM_PTR_RSI_(VALUE) mov r13, qword ptr [rsi + VALUE]
#define MOV_R13_FROM_PTR_RBP_(VALUE) mov r13, qword ptr [rbp + VALUE]
#define MOV_R13_FROM_PTR_RSP_(VALUE) mov r13, qword ptr [rsp + VALUE]
#define MOV_R13_FROM_PTR_R8_(VALUE) mov r13, qword ptr [r8 + VALUE]
#define MOV_R13_FROM_PTR_R9_(VALUE) mov r13, qword ptr [r9 + VALUE]
#define MOV_R13_FROM_PTR_R10_(VALUE) mov r13, qword ptr [r10 + VALUE]
#define MOV_R13_FROM_PTR_R11_(VALUE) mov r13, qword ptr [r11 + VALUE]
#define MOV_R13_FROM_PTR_R12_(VALUE) mov r13, qword ptr [r12 + VALUE]
#define MOV_R13_FROM_PTR_R13_(VALUE) mov r13, qword ptr [r13 + VALUE]
#define MOV_R13_FROM_PTR_R14_(VALUE) mov r13, qword ptr [r14 + VALUE]
#define MOV_R13_FROM_PTR_R15_(VALUE) mov r13, qword ptr [r15 + VALUE]
#define MOV_R13_FROM_PTR_EAX_(VALUE) mov r13, qword ptr [eax + VALUE]
#define MOV_R13_FROM_PTR_EBX_(VALUE) mov r13, qword ptr [ebx + VALUE]
#define MOV_R13_FROM_PTR_ECX_(VALUE) mov r13, qword ptr [ecx + VALUE]
#define MOV_R13_FROM_PTR_EDX_(VALUE) mov r13, qword ptr [edx + VALUE]
#define MOV_R13_FROM_PTR_EDI_(VALUE) mov r13, qword ptr [edi + VALUE]
#define MOV_R13_FROM_PTR_ESI_(VALUE) mov r13, qword ptr [esi + VALUE]
#define MOV_R13_FROM_PTR_EBP_(VALUE) mov r13, qword ptr [ebp + VALUE]
#define MOV_R13_FROM_PTR_ESP_(VALUE) mov r13, qword ptr [esp + VALUE]

#define MOV_R14_FROM_PTR_RAX_(VALUE) mov r14, qword ptr [rax + VALUE]
#define MOV_R14_FROM_PTR_RBX_(VALUE) mov r14, qword ptr [rbx + VALUE]
#define MOV_R14_FROM_PTR_RCX_(VALUE) mov r14, qword ptr [rcx + VALUE]
#define MOV_R14_FROM_PTR_RDX_(VALUE) mov r14, qword ptr [rdx + VALUE]
#define MOV_R14_FROM_PTR_RDI_(VALUE) mov r14, qword ptr [rdi + VALUE]
#define MOV_R14_FROM_PTR_RSI_(VALUE) mov r14, qword ptr [rsi + VALUE]
#define MOV_R14_FROM_PTR_RBP_(VALUE) mov r14, qword ptr [rbp + VALUE]
#define MOV_R14_FROM_PTR_RSP_(VALUE) mov r14, qword ptr [rsp + VALUE]
#define MOV_R14_FROM_PTR_R8_(VALUE) mov r14, qword ptr [r8 + VALUE]
#define MOV_R14_FROM_PTR_R9_(VALUE) mov r14, qword ptr [r9 + VALUE]
#define MOV_R14_FROM_PTR_R10_(VALUE) mov r14, qword ptr [r10 + VALUE]
#define MOV_R14_FROM_PTR_R11_(VALUE) mov r14, qword ptr [r11 + VALUE]
#define MOV_R14_FROM_PTR_R12_(VALUE) mov r14, qword ptr [r12 + VALUE]
#define MOV_R14_FROM_PTR_R13_(VALUE) mov r14, qword ptr [r13 + VALUE]
#define MOV_R14_FROM_PTR_R14_(VALUE) mov r14, qword ptr [r14 + VALUE]
#define MOV_R14_FROM_PTR_R15_(VALUE) mov r14, qword ptr [r15 + VALUE]
#define MOV_R14_FROM_PTR_EAX_(VALUE) mov r14, qword ptr [eax + VALUE]
#define MOV_R14_FROM_PTR_EBX_(VALUE) mov r14, qword ptr [ebx + VALUE]
#define MOV_R14_FROM_PTR_ECX_(VALUE) mov r14, qword ptr [ecx + VALUE]
#define MOV_R14_FROM_PTR_EDX_(VALUE) mov r14, qword ptr [edx + VALUE]
#define MOV_R14_FROM_PTR_EDI_(VALUE) mov r14, qword ptr [edi + VALUE]
#define MOV_R14_FROM_PTR_ESI_(VALUE) mov r14, qword ptr [esi + VALUE]
#define MOV_R14_FROM_PTR_EBP_(VALUE) mov r14, qword ptr [ebp + VALUE]
#define MOV_R14_FROM_PTR_ESP_(VALUE) mov r14, qword ptr [esp + VALUE]

#define MOV_R15_FROM_PTR_RAX_(VALUE) mov r15, qword ptr [rax + VALUE]
#define MOV_R15_FROM_PTR_RBX_(VALUE) mov r15, qword ptr [rbx + VALUE]
#define MOV_R15_FROM_PTR_RCX_(VALUE) mov r15, qword ptr [rcx + VALUE]
#define MOV_R15_FROM_PTR_RDX_(VALUE) mov r15, qword ptr [rdx + VALUE]
#define MOV_R15_FROM_PTR_RDI_(VALUE) mov r15, qword ptr [rdi + VALUE]
#define MOV_R15_FROM_PTR_RSI_(VALUE) mov r15, qword ptr [rsi + VALUE]
#define MOV_R15_FROM_PTR_RBP_(VALUE) mov r15, qword ptr [rbp + VALUE]
#define MOV_R15_FROM_PTR_RSP_(VALUE) mov r15, qword ptr [rsp + VALUE]
#define MOV_R15_FROM_PTR_R8_(VALUE) mov r15, qword ptr [r8 + VALUE]
#define MOV_R15_FROM_PTR_R9_(VALUE) mov r15, qword ptr [r9 + VALUE]
#define MOV_R15_FROM_PTR_R10_(VALUE) mov r15, qword ptr [r10 + VALUE]
#define MOV_R15_FROM_PTR_R11_(VALUE) mov r15, qword ptr [r11 + VALUE]
#define MOV_R15_FROM_PTR_R12_(VALUE) mov r15, qword ptr [r12 + VALUE]
#define MOV_R15_FROM_PTR_R13_(VALUE) mov r15, qword ptr [r13 + VALUE]
#define MOV_R15_FROM_PTR_R14_(VALUE) mov r15, qword ptr [r14 + VALUE]
#define MOV_R15_FROM_PTR_R15_(VALUE) mov r15, qword ptr [r15 + VALUE]
#define MOV_R15_FROM_PTR_EAX_(VALUE) mov r15, qword ptr [eax + VALUE]
#define MOV_R15_FROM_PTR_EBX_(VALUE) mov r15, qword ptr [ebx + VALUE]
#define MOV_R15_FROM_PTR_ECX_(VALUE) mov r15, qword ptr [ecx + VALUE]
#define MOV_R15_FROM_PTR_EDX_(VALUE) mov r15, qword ptr [edx + VALUE]
#define MOV_R15_FROM_PTR_EDI_(VALUE) mov r15, qword ptr [edi + VALUE]
#define MOV_R15_FROM_PTR_ESI_(VALUE) mov r15, qword ptr [esi + VALUE]
#define MOV_R15_FROM_PTR_EBP_(VALUE) mov r15, qword ptr [ebp + VALUE]
#define MOV_R15_FROM_PTR_ESP_(VALUE) mov r15, qword ptr [esp + VALUE]

#define MOV_RAX_TO_PTR_RAX_(VALUE) mov qword ptr [rax + VALUE], rax
#define MOV_RAX_TO_PTR_RBX_(VALUE) mov qword ptr [rbx + VALUE], rax
#define MOV_RAX_TO_PTR_RCX_(VALUE) mov qword ptr [rcx + VALUE], rax
#define MOV_RAX_TO_PTR_RDX_(VALUE) mov qword ptr [rdx + VALUE], rax
#define MOV_RAX_TO_PTR_RDI_(VALUE) mov qword ptr [rdi + VALUE], rax
#define MOV_RAX_TO_PTR_RSI_(VALUE) mov qword ptr [rsi + VALUE], rax
#define MOV_RAX_TO_PTR_RBP_(VALUE) mov qword ptr [rbp + VALUE], rax
#define MOV_RAX_TO_PTR_RSP_(VALUE) mov qword ptr [rsp + VALUE], rax
#define MOV_RAX_TO_PTR_R8_(VALUE) mov qword ptr [r8 + VALUE], rax
#define MOV_RAX_TO_PTR_R9_(VALUE) mov qword ptr [r9 + VALUE], rax
#define MOV_RAX_TO_PTR_R10_(VALUE) mov qword ptr [r10 + VALUE], rax
#define MOV_RAX_TO_PTR_R11_(VALUE) mov qword ptr [r11 + VALUE], rax
#define MOV_RAX_TO_PTR_R12_(VALUE) mov qword ptr [r12 + VALUE], rax
#define MOV_RAX_TO_PTR_R13_(VALUE) mov qword ptr [r13 + VALUE], rax
#define MOV_RAX_TO_PTR_R14_(VALUE) mov qword ptr [r14 + VALUE], rax
#define MOV_RAX_TO_PTR_R15_(VALUE) mov qword ptr [r15 + VALUE], rax
#define MOV_RAX_TO_PTR_EAX_(VALUE) mov qword ptr [eax + VALUE], rax
#define MOV_RAX_TO_PTR_EBX_(VALUE) mov qword ptr [ebx + VALUE], rax
#define MOV_RAX_TO_PTR_ECX_(VALUE) mov qword ptr [ecx + VALUE], rax
#define MOV_RAX_TO_PTR_EDX_(VALUE) mov qword ptr [edx + VALUE], rax
#define MOV_RAX_TO_PTR_EDI_(VALUE) mov qword ptr [edi + VALUE], rax
#define MOV_RAX_TO_PTR_ESI_(VALUE) mov qword ptr [esi + VALUE], rax
#define MOV_RAX_TO_PTR_EBP_(VALUE) mov qword ptr [ebp + VALUE], rax
#define MOV_RAX_TO_PTR_ESP_(VALUE) mov qword ptr [esp + VALUE], rax

#define MOV_RBX_TO_PTR_RAX_(VALUE) mov qword ptr [rax + VALUE], rbx
#define MOV_RBX_TO_PTR_RBX_(VALUE) mov qword ptr [rbx + VALUE], rbx
#define MOV_RBX_TO_PTR_RCX_(VALUE) mov qword ptr [rcx + VALUE], rbx
#define MOV_RBX_TO_PTR_RDX_(VALUE) mov qword ptr [rdx + VALUE], rbx
#define MOV_RBX_TO_PTR_RDI_(VALUE) mov qword ptr [rdi + VALUE], rbx
#define MOV_RBX_TO_PTR_RSI_(VALUE) mov qword ptr [rsi + VALUE], rbx
#define MOV_RBX_TO_PTR_RBP_(VALUE) mov qword ptr [rbp + VALUE], rbx
#define MOV_RBX_TO_PTR_RSP_(VALUE) mov qword ptr [rsp + VALUE], rbx
#define MOV_RBX_TO_PTR_R8_(VALUE) mov qword ptr [r8 + VALUE], rbx
#define MOV_RBX_TO_PTR_R9_(VALUE) mov qword ptr [r9 + VALUE], rbx
#define MOV_RBX_TO_PTR_R10_(VALUE) mov qword ptr [r10 + VALUE], rbx
#define MOV_RBX_TO_PTR_R11_(VALUE) mov qword ptr [r11 + VALUE], rbx
#define MOV_RBX_TO_PTR_R12_(VALUE) mov qword ptr [r12 + VALUE], rbx
#define MOV_RBX_TO_PTR_R13_(VALUE) mov qword ptr [r13 + VALUE], rbx
#define MOV_RBX_TO_PTR_R14_(VALUE) mov qword ptr [r14 + VALUE], rbx
#define MOV_RBX_TO_PTR_R15_(VALUE) mov qword ptr [r15 + VALUE], rbx
#define MOV_RBX_TO_PTR_EAX_(VALUE) mov qword ptr [eax + VALUE], rbx
#define MOV_RBX_TO_PTR_EBX_(VALUE) mov qword ptr [ebx + VALUE], rbx
#define MOV_RBX_TO_PTR_ECX_(VALUE) mov qword ptr [ecx + VALUE], rbx
#define MOV_RBX_TO_PTR_EDX_(VALUE) mov qword ptr [edx + VALUE], rbx
#define MOV_RBX_TO_PTR_EDI_(VALUE) mov qword ptr [edi + VALUE], rbx
#define MOV_RBX_TO_PTR_ESI_(VALUE) mov qword ptr [esi + VALUE], rbx
#define MOV_RBX_TO_PTR_EBP_(VALUE) mov qword ptr [ebp + VALUE], rbx
#define MOV_RBX_TO_PTR_ESP_(VALUE) mov qword ptr [esp + VALUE], rbx

#define MOV_RCX_TO_PTR_RAX_(VALUE) mov qword ptr [rax + VALUE], rcx
#define MOV_RCX_TO_PTR_RBX_(VALUE) mov qword ptr [rbx + VALUE], rcx
#define MOV_RCX_TO_PTR_RCX_(VALUE) mov qword ptr [rcx + VALUE], rcx
#define MOV_RCX_TO_PTR_RDX_(VALUE) mov qword ptr [rdx + VALUE], rcx
#define MOV_RCX_TO_PTR_RDI_(VALUE) mov qword ptr [rdi + VALUE], rcx
#define MOV_RCX_TO_PTR_RSI_(VALUE) mov qword ptr [rsi + VALUE], rcx
#define MOV_RCX_TO_PTR_RBP_(VALUE) mov qword ptr [rbp + VALUE], rcx
#define MOV_RCX_TO_PTR_RSP_(VALUE) mov qword ptr [rsp + VALUE], rcx
#define MOV_RCX_TO_PTR_R8_(VALUE) mov qword ptr [r8 + VALUE], rcx
#define MOV_RCX_TO_PTR_R9_(VALUE) mov qword ptr [r9 + VALUE], rcx
#define MOV_RCX_TO_PTR_R10_(VALUE) mov qword ptr [r10 + VALUE], rcx
#define MOV_RCX_TO_PTR_R11_(VALUE) mov qword ptr [r11 + VALUE], rcx
#define MOV_RCX_TO_PTR_R12_(VALUE) mov qword ptr [r12 + VALUE], rcx
#define MOV_RCX_TO_PTR_R13_(VALUE) mov qword ptr [r13 + VALUE], rcx
#define MOV_RCX_TO_PTR_R14_(VALUE) mov qword ptr [r14 + VALUE], rcx
#define MOV_RCX_TO_PTR_R15_(VALUE) mov qword ptr [r15 + VALUE], rcx
#define MOV_RCX_TO_PTR_EAX_(VALUE) mov qword ptr [eax + VALUE], rcx
#define MOV_RCX_TO_PTR_EBX_(VALUE) mov qword ptr [ebx + VALUE], rcx
#define MOV_RCX_TO_PTR_ECX_(VALUE) mov qword ptr [ecx + VALUE], rcx
#define MOV_RCX_TO_PTR_EDX_(VALUE) mov qword ptr [edx + VALUE], rcx
#define MOV_RCX_TO_PTR_EDI_(VALUE) mov qword ptr [edi + VALUE], rcx
#define MOV_RCX_TO_PTR_ESI_(VALUE) mov qword ptr [esi + VALUE], rcx
#define MOV_RCX_TO_PTR_EBP_(VALUE) mov qword ptr [ebp + VALUE], rcx
#define MOV_RCX_TO_PTR_ESP_(VALUE) mov qword ptr [esp + VALUE], rcx

#define MOV_RDX_TO_PTR_RAX_(VALUE) mov qword ptr [rax + VALUE], rdx
#define MOV_RDX_TO_PTR_RBX_(VALUE) mov qword ptr [rbx + VALUE], rdx
#define MOV_RDX_TO_PTR_RCX_(VALUE) mov qword ptr [rcx + VALUE], rdx
#define MOV_RDX_TO_PTR_RDX_(VALUE) mov qword ptr [rdx + VALUE], rdx
#define MOV_RDX_TO_PTR_RDI_(VALUE) mov qword ptr [rdi + VALUE], rdx
#define MOV_RDX_TO_PTR_RSI_(VALUE) mov qword ptr [rsi + VALUE], rdx
#define MOV_RDX_TO_PTR_RBP_(VALUE) mov qword ptr [rbp + VALUE], rdx
#define MOV_RDX_TO_PTR_RSP_(VALUE) mov qword ptr [rsp + VALUE], rdx
#define MOV_RDX_TO_PTR_R8_(VALUE) mov qword ptr [r8 + VALUE], rdx
#define MOV_RDX_TO_PTR_R9_(VALUE) mov qword ptr [r9 + VALUE], rdx
#define MOV_RDX_TO_PTR_R10_(VALUE) mov qword ptr [r10 + VALUE], rdx
#define MOV_RDX_TO_PTR_R11_(VALUE) mov qword ptr [r11 + VALUE], rdx
#define MOV_RDX_TO_PTR_R12_(VALUE) mov qword ptr [r12 + VALUE], rdx
#define MOV_RDX_TO_PTR_R13_(VALUE) mov qword ptr [r13 + VALUE], rdx
#define MOV_RDX_TO_PTR_R14_(VALUE) mov qword ptr [r14 + VALUE], rdx
#define MOV_RDX_TO_PTR_R15_(VALUE) mov qword ptr [r15 + VALUE], rdx
#define MOV_RDX_TO_PTR_EAX_(VALUE) mov qword ptr [eax + VALUE], rdx
#define MOV_RDX_TO_PTR_EBX_(VALUE) mov qword ptr [ebx + VALUE], rdx
#define MOV_RDX_TO_PTR_ECX_(VALUE) mov qword ptr [ecx + VALUE], rdx
#define MOV_RDX_TO_PTR_EDX_(VALUE) mov qword ptr [edx + VALUE], rdx
#define MOV_RDX_TO_PTR_EDI_(VALUE) mov qword ptr [edi + VALUE], rdx
#define MOV_RDX_TO_PTR_ESI_(VALUE) mov qword ptr [esi + VALUE], rdx
#define MOV_RDX_TO_PTR_EBP_(VALUE) mov qword ptr [ebp + VALUE], rdx
#define MOV_RDX_TO_PTR_ESP_(VALUE) mov qword ptr [esp + VALUE], rdx

#define MOV_RDI_TO_PTR_RAX_(VALUE) mov qword ptr [rax + VALUE], rdi
#define MOV_RDI_TO_PTR_RBX_(VALUE) mov qword ptr [rbx + VALUE], rdi
#define MOV_RDI_TO_PTR_RCX_(VALUE) mov qword ptr [rcx + VALUE], rdi
#define MOV_RDI_TO_PTR_RDX_(VALUE) mov qword ptr [rdx + VALUE], rdi
#define MOV_RDI_TO_PTR_RDI_(VALUE) mov qword ptr [rdi + VALUE], rdi
#define MOV_RDI_TO_PTR_RSI_(VALUE) mov qword ptr [rsi + VALUE], rdi
#define MOV_RDI_TO_PTR_RBP_(VALUE) mov qword ptr [rbp + VALUE], rdi
#define MOV_RDI_TO_PTR_RSP_(VALUE) mov qword ptr [rsp + VALUE], rdi
#define MOV_RDI_TO_PTR_R8_(VALUE) mov qword ptr [r8 + VALUE], rdi
#define MOV_RDI_TO_PTR_R9_(VALUE) mov qword ptr [r9 + VALUE], rdi
#define MOV_RDI_TO_PTR_R10_(VALUE) mov qword ptr [r10 + VALUE], rdi
#define MOV_RDI_TO_PTR_R11_(VALUE) mov qword ptr [r11 + VALUE], rdi
#define MOV_RDI_TO_PTR_R12_(VALUE) mov qword ptr [r12 + VALUE], rdi
#define MOV_RDI_TO_PTR_R13_(VALUE) mov qword ptr [r13 + VALUE], rdi
#define MOV_RDI_TO_PTR_R14_(VALUE) mov qword ptr [r14 + VALUE], rdi
#define MOV_RDI_TO_PTR_R15_(VALUE) mov qword ptr [r15 + VALUE], rdi
#define MOV_RDI_TO_PTR_EAX_(VALUE) mov qword ptr [eax + VALUE], rdi
#define MOV_RDI_TO_PTR_EBX_(VALUE) mov qword ptr [ebx + VALUE], rdi
#define MOV_RDI_TO_PTR_ECX_(VALUE) mov qword ptr [ecx + VALUE], rdi
#define MOV_RDI_TO_PTR_EDX_(VALUE) mov qword ptr [edx + VALUE], rdi
#define MOV_RDI_TO_PTR_EDI_(VALUE) mov qword ptr [edi + VALUE], rdi
#define MOV_RDI_TO_PTR_ESI_(VALUE) mov qword ptr [esi + VALUE], rdi
#define MOV_RDI_TO_PTR_EBP_(VALUE) mov qword ptr [ebp + VALUE], rdi
#define MOV_RDI_TO_PTR_ESP_(VALUE) mov qword ptr [esp + VALUE], rdi

#define MOV_RSI_TO_PTR_RAX_(VALUE) mov qword ptr [rax + VALUE], rsi
#define MOV_RSI_TO_PTR_RBX_(VALUE) mov qword ptr [rbx + VALUE], rsi
#define MOV_RSI_TO_PTR_RCX_(VALUE) mov qword ptr [rcx + VALUE], rsi
#define MOV_RSI_TO_PTR_RDX_(VALUE) mov qword ptr [rdx + VALUE], rsi
#define MOV_RSI_TO_PTR_RDI_(VALUE) mov qword ptr [rdi + VALUE], rsi
#define MOV_RSI_TO_PTR_RSI_(VALUE) mov qword ptr [rsi + VALUE], rsi
#define MOV_RSI_TO_PTR_RBP_(VALUE) mov qword ptr [rbp + VALUE], rsi
#define MOV_RSI_TO_PTR_RSP_(VALUE) mov qword ptr [rsp + VALUE], rsi
#define MOV_RSI_TO_PTR_R8_(VALUE) mov qword ptr [r8 + VALUE], rsi
#define MOV_RSI_TO_PTR_R9_(VALUE) mov qword ptr [r9 + VALUE], rsi
#define MOV_RSI_TO_PTR_R10_(VALUE) mov qword ptr [r10 + VALUE], rsi
#define MOV_RSI_TO_PTR_R11_(VALUE) mov qword ptr [r11 + VALUE], rsi
#define MOV_RSI_TO_PTR_R12_(VALUE) mov qword ptr [r12 + VALUE], rsi
#define MOV_RSI_TO_PTR_R13_(VALUE) mov qword ptr [r13 + VALUE], rsi
#define MOV_RSI_TO_PTR_R14_(VALUE) mov qword ptr [r14 + VALUE], rsi
#define MOV_RSI_TO_PTR_R15_(VALUE) mov qword ptr [r15 + VALUE], rsi
#define MOV_RSI_TO_PTR_EAX_(VALUE) mov qword ptr [eax + VALUE], rsi
#define MOV_RSI_TO_PTR_EBX_(VALUE) mov qword ptr [ebx + VALUE], rsi
#define MOV_RSI_TO_PTR_ECX_(VALUE) mov qword ptr [ecx + VALUE], rsi
#define MOV_RSI_TO_PTR_EDX_(VALUE) mov qword ptr [edx + VALUE], rsi
#define MOV_RSI_TO_PTR_EDI_(VALUE) mov qword ptr [edi + VALUE], rsi
#define MOV_RSI_TO_PTR_ESI_(VALUE) mov qword ptr [esi + VALUE], rsi
#define MOV_RSI_TO_PTR_EBP_(VALUE) mov qword ptr [ebp + VALUE], rsi
#define MOV_RSI_TO_PTR_ESP_(VALUE) mov qword ptr [esp + VALUE], rsi

#define MOV_RBP_TO_PTR_RAX_(VALUE) mov qword ptr [rax + VALUE], rbp
#define MOV_RBP_TO_PTR_RBX_(VALUE) mov qword ptr [rbx + VALUE], rbp
#define MOV_RBP_TO_PTR_RCX_(VALUE) mov qword ptr [rcx + VALUE], rbp
#define MOV_RBP_TO_PTR_RDX_(VALUE) mov qword ptr [rdx + VALUE], rbp
#define MOV_RBP_TO_PTR_RDI_(VALUE) mov qword ptr [rdi + VALUE], rbp
#define MOV_RBP_TO_PTR_RSI_(VALUE) mov qword ptr [rsi + VALUE], rbp
#define MOV_RBP_TO_PTR_RBP_(VALUE) mov qword ptr [rbp + VALUE], rbp
#define MOV_RBP_TO_PTR_RSP_(VALUE) mov qword ptr [rsp + VALUE], rbp
#define MOV_RBP_TO_PTR_R8_(VALUE) mov qword ptr [r8 + VALUE], rbp
#define MOV_RBP_TO_PTR_R9_(VALUE) mov qword ptr [r9 + VALUE], rbp
#define MOV_RBP_TO_PTR_R10_(VALUE) mov qword ptr [r10 + VALUE], rbp
#define MOV_RBP_TO_PTR_R11_(VALUE) mov qword ptr [r11 + VALUE], rbp
#define MOV_RBP_TO_PTR_R12_(VALUE) mov qword ptr [r12 + VALUE], rbp
#define MOV_RBP_TO_PTR_R13_(VALUE) mov qword ptr [r13 + VALUE], rbp
#define MOV_RBP_TO_PTR_R14_(VALUE) mov qword ptr [r14 + VALUE], rbp
#define MOV_RBP_TO_PTR_R15_(VALUE) mov qword ptr [r15 + VALUE], rbp
#define MOV_RBP_TO_PTR_EAX_(VALUE) mov qword ptr [eax + VALUE], rbp
#define MOV_RBP_TO_PTR_EBX_(VALUE) mov qword ptr [ebx + VALUE], rbp
#define MOV_RBP_TO_PTR_ECX_(VALUE) mov qword ptr [ecx + VALUE], rbp
#define MOV_RBP_TO_PTR_EDX_(VALUE) mov qword ptr [edx + VALUE], rbp
#define MOV_RBP_TO_PTR_EDI_(VALUE) mov qword ptr [edi + VALUE], rbp
#define MOV_RBP_TO_PTR_ESI_(VALUE) mov qword ptr [esi + VALUE], rbp
#define MOV_RBP_TO_PTR_EBP_(VALUE) mov qword ptr [ebp + VALUE], rbp
#define MOV_RBP_TO_PTR_ESP_(VALUE) mov qword ptr [esp + VALUE], rbp

#define MOV_RSP_TO_PTR_RAX_(VALUE) mov qword ptr [rax + VALUE], rsp
#define MOV_RSP_TO_PTR_RBX_(VALUE) mov qword ptr [rbx + VALUE], rsp
#define MOV_RSP_TO_PTR_RCX_(VALUE) mov qword ptr [rcx + VALUE], rsp
#define MOV_RSP_TO_PTR_RDX_(VALUE) mov qword ptr [rdx + VALUE], rsp
#define MOV_RSP_TO_PTR_RDI_(VALUE) mov qword ptr [rdi + VALUE], rsp
#define MOV_RSP_TO_PTR_RSI_(VALUE) mov qword ptr [rsi + VALUE], rsp
#define MOV_RSP_TO_PTR_RBP_(VALUE) mov qword ptr [rbp + VALUE], rsp
#define MOV_RSP_TO_PTR_RSP_(VALUE) mov qword ptr [rsp + VALUE], rsp
#define MOV_RSP_TO_PTR_R8_(VALUE) mov qword ptr [r8 + VALUE], rsp
#define MOV_RSP_TO_PTR_R9_(VALUE) mov qword ptr [r9 + VALUE], rsp
#define MOV_RSP_TO_PTR_R10_(VALUE) mov qword ptr [r10 + VALUE], rsp
#define MOV_RSP_TO_PTR_R11_(VALUE) mov qword ptr [r11 + VALUE], rsp
#define MOV_RSP_TO_PTR_R12_(VALUE) mov qword ptr [r12 + VALUE], rsp
#define MOV_RSP_TO_PTR_R13_(VALUE) mov qword ptr [r13 + VALUE], rsp
#define MOV_RSP_TO_PTR_R14_(VALUE) mov qword ptr [r14 + VALUE], rsp
#define MOV_RSP_TO_PTR_R15_(VALUE) mov qword ptr [r15 + VALUE], rsp
#define MOV_RSP_TO_PTR_EAX_(VALUE) mov qword ptr [eax + VALUE], rsp
#define MOV_RSP_TO_PTR_EBX_(VALUE) mov qword ptr [ebx + VALUE], rsp
#define MOV_RSP_TO_PTR_ECX_(VALUE) mov qword ptr [ecx + VALUE], rsp
#define MOV_RSP_TO_PTR_EDX_(VALUE) mov qword ptr [edx + VALUE], rsp
#define MOV_RSP_TO_PTR_EDI_(VALUE) mov qword ptr [edi + VALUE], rsp
#define MOV_RSP_TO_PTR_ESI_(VALUE) mov qword ptr [esi + VALUE], rsp
#define MOV_RSP_TO_PTR_EBP_(VALUE) mov qword ptr [ebp + VALUE], rsp
#define MOV_RSP_TO_PTR_ESP_(VALUE) mov qword ptr [esp + VALUE], rsp

#define MOV_R8_TO_PTR_RAX_(VALUE) mov qword ptr [rax + VALUE], r8
#define MOV_R8_TO_PTR_RBX_(VALUE) mov qword ptr [rbx + VALUE], r8
#define MOV_R8_TO_PTR_RCX_(VALUE) mov qword ptr [rcx + VALUE], r8
#define MOV_R8_TO_PTR_RDX_(VALUE) mov qword ptr [rdx + VALUE], r8
#define MOV_R8_TO_PTR_RDI_(VALUE) mov qword ptr [rdi + VALUE], r8
#define MOV_R8_TO_PTR_RSI_(VALUE) mov qword ptr [rsi + VALUE], r8
#define MOV_R8_TO_PTR_RBP_(VALUE) mov qword ptr [rbp + VALUE], r8
#define MOV_R8_TO_PTR_RSP_(VALUE) mov qword ptr [rsp + VALUE], r8
#define MOV_R8_TO_PTR_R8_(VALUE) mov qword ptr [r8 + VALUE], r8
#define MOV_R8_TO_PTR_R9_(VALUE) mov qword ptr [r9 + VALUE], r8
#define MOV_R8_TO_PTR_R10_(VALUE) mov qword ptr [r10 + VALUE], r8
#define MOV_R8_TO_PTR_R11_(VALUE) mov qword ptr [r11 + VALUE], r8
#define MOV_R8_TO_PTR_R12_(VALUE) mov qword ptr [r12 + VALUE], r8
#define MOV_R8_TO_PTR_R13_(VALUE) mov qword ptr [r13 + VALUE], r8
#define MOV_R8_TO_PTR_R14_(VALUE) mov qword ptr [r14 + VALUE], r8
#define MOV_R8_TO_PTR_R15_(VALUE) mov qword ptr [r15 + VALUE], r8
#define MOV_R8_TO_PTR_EAX_(VALUE) mov qword ptr [eax + VALUE], r8
#define MOV_R8_TO_PTR_EBX_(VALUE) mov qword ptr [ebx + VALUE], r8
#define MOV_R8_TO_PTR_ECX_(VALUE) mov qword ptr [ecx + VALUE], r8
#define MOV_R8_TO_PTR_EDX_(VALUE) mov qword ptr [edx + VALUE], r8
#define MOV_R8_TO_PTR_EDI_(VALUE) mov qword ptr [edi + VALUE], r8
#define MOV_R8_TO_PTR_ESI_(VALUE) mov qword ptr [esi + VALUE], r8
#define MOV_R8_TO_PTR_EBP_(VALUE) mov qword ptr [ebp + VALUE], r8
#define MOV_R8_TO_PTR_ESP_(VALUE) mov qword ptr [esp + VALUE], r8

#define MOV_R9_TO_PTR_RAX_(VALUE) mov qword ptr [rax + VALUE], r9
#define MOV_R9_TO_PTR_RBX_(VALUE) mov qword ptr [rbx + VALUE], r9
#define MOV_R9_TO_PTR_RCX_(VALUE) mov qword ptr [rcx + VALUE], r9
#define MOV_R9_TO_PTR_RDX_(VALUE) mov qword ptr [rdx + VALUE], r9
#define MOV_R9_TO_PTR_RDI_(VALUE) mov qword ptr [rdi + VALUE], r9
#define MOV_R9_TO_PTR_RSI_(VALUE) mov qword ptr [rsi + VALUE], r9
#define MOV_R9_TO_PTR_RBP_(VALUE) mov qword ptr [rbp + VALUE], r9
#define MOV_R9_TO_PTR_RSP_(VALUE) mov qword ptr [rsp + VALUE], r9
#define MOV_R9_TO_PTR_R8_(VALUE) mov qword ptr [r8 + VALUE], r9
#define MOV_R9_TO_PTR_R9_(VALUE) mov qword ptr [r9 + VALUE], r9
#define MOV_R9_TO_PTR_R10_(VALUE) mov qword ptr [r10 + VALUE], r9
#define MOV_R9_TO_PTR_R11_(VALUE) mov qword ptr [r11 + VALUE], r9
#define MOV_R9_TO_PTR_R12_(VALUE) mov qword ptr [r12 + VALUE], r9
#define MOV_R9_TO_PTR_R13_(VALUE) mov qword ptr [r13 + VALUE], r9
#define MOV_R9_TO_PTR_R14_(VALUE) mov qword ptr [r14 + VALUE], r9
#define MOV_R9_TO_PTR_R15_(VALUE) mov qword ptr [r15 + VALUE], r9
#define MOV_R9_TO_PTR_EAX_(VALUE) mov qword ptr [eax + VALUE], r9
#define MOV_R9_TO_PTR_EBX_(VALUE) mov qword ptr [ebx + VALUE], r9
#define MOV_R9_TO_PTR_ECX_(VALUE) mov qword ptr [ecx + VALUE], r9
#define MOV_R9_TO_PTR_EDX_(VALUE) mov qword ptr [edx + VALUE], r9
#define MOV_R9_TO_PTR_EDI_(VALUE) mov qword ptr [edi + VALUE], r9
#define MOV_R9_TO_PTR_ESI_(VALUE) mov qword ptr [esi + VALUE], r9
#define MOV_R9_TO_PTR_EBP_(VALUE) mov qword ptr [ebp + VALUE], r9
#define MOV_R9_TO_PTR_ESP_(VALUE) mov qword ptr [esp + VALUE], r9

#define MOV_R10_TO_PTR_RAX_(VALUE) mov qword ptr [rax + VALUE], r10
#define MOV_R10_TO_PTR_RBX_(VALUE) mov qword ptr [rbx + VALUE], r10
#define MOV_R10_TO_PTR_RCX_(VALUE) mov qword ptr [rcx + VALUE], r10
#define MOV_R10_TO_PTR_RDX_(VALUE) mov qword ptr [rdx + VALUE], r10
#define MOV_R10_TO_PTR_RDI_(VALUE) mov qword ptr [rdi + VALUE], r10
#define MOV_R10_TO_PTR_RSI_(VALUE) mov qword ptr [rsi + VALUE], r10
#define MOV_R10_TO_PTR_RBP_(VALUE) mov qword ptr [rbp + VALUE], r10
#define MOV_R10_TO_PTR_RSP_(VALUE) mov qword ptr [rsp + VALUE], r10
#define MOV_R10_TO_PTR_R8_(VALUE) mov qword ptr [r8 + VALUE], r10
#define MOV_R10_TO_PTR_R9_(VALUE) mov qword ptr [r9 + VALUE], r10
#define MOV_R10_TO_PTR_R10_(VALUE) mov qword ptr [r10 + VALUE], r10
#define MOV_R10_TO_PTR_R11_(VALUE) mov qword ptr [r11 + VALUE], r10
#define MOV_R10_TO_PTR_R12_(VALUE) mov qword ptr [r12 + VALUE], r10
#define MOV_R10_TO_PTR_R13_(VALUE) mov qword ptr [r13 + VALUE], r10
#define MOV_R10_TO_PTR_R14_(VALUE) mov qword ptr [r14 + VALUE], r10
#define MOV_R10_TO_PTR_R15_(VALUE) mov qword ptr [r15 + VALUE], r10
#define MOV_R10_TO_PTR_EAX_(VALUE) mov qword ptr [eax + VALUE], r10
#define MOV_R10_TO_PTR_EBX_(VALUE) mov qword ptr [ebx + VALUE], r10
#define MOV_R10_TO_PTR_ECX_(VALUE) mov qword ptr [ecx + VALUE], r10
#define MOV_R10_TO_PTR_EDX_(VALUE) mov qword ptr [edx + VALUE], r10
#define MOV_R10_TO_PTR_EDI_(VALUE) mov qword ptr [edi + VALUE], r10
#define MOV_R10_TO_PTR_ESI_(VALUE) mov qword ptr [esi + VALUE], r10
#define MOV_R10_TO_PTR_EBP_(VALUE) mov qword ptr [ebp + VALUE], r10
#define MOV_R10_TO_PTR_ESP_(VALUE) mov qword ptr [esp + VALUE], r10

#define MOV_R11_TO_PTR_RAX_(VALUE) mov qword ptr [rax + VALUE], r11
#define MOV_R11_TO_PTR_RBX_(VALUE) mov qword ptr [rbx + VALUE], r11
#define MOV_R11_TO_PTR_RCX_(VALUE) mov qword ptr [rcx + VALUE], r11
#define MOV_R11_TO_PTR_RDX_(VALUE) mov qword ptr [rdx + VALUE], r11
#define MOV_R11_TO_PTR_RDI_(VALUE) mov qword ptr [rdi + VALUE], r11
#define MOV_R11_TO_PTR_RSI_(VALUE) mov qword ptr [rsi + VALUE], r11
#define MOV_R11_TO_PTR_RBP_(VALUE) mov qword ptr [rbp + VALUE], r11
#define MOV_R11_TO_PTR_RSP_(VALUE) mov qword ptr [rsp + VALUE], r11
#define MOV_R11_TO_PTR_R8_(VALUE) mov qword ptr [r8 + VALUE], r11
#define MOV_R11_TO_PTR_R9_(VALUE) mov qword ptr [r9 + VALUE], r11
#define MOV_R11_TO_PTR_R10_(VALUE) mov qword ptr [r10 + VALUE], r11
#define MOV_R11_TO_PTR_R11_(VALUE) mov qword ptr [r11 + VALUE], r11
#define MOV_R11_TO_PTR_R12_(VALUE) mov qword ptr [r12 + VALUE], r11
#define MOV_R11_TO_PTR_R13_(VALUE) mov qword ptr [r13 + VALUE], r11
#define MOV_R11_TO_PTR_R14_(VALUE) mov qword ptr [r14 + VALUE], r11
#define MOV_R11_TO_PTR_R15_(VALUE) mov qword ptr [r15 + VALUE], r11
#define MOV_R11_TO_PTR_EAX_(VALUE) mov qword ptr [eax + VALUE], r11
#define MOV_R11_TO_PTR_EBX_(VALUE) mov qword ptr [ebx + VALUE], r11
#define MOV_R11_TO_PTR_ECX_(VALUE) mov qword ptr [ecx + VALUE], r11
#define MOV_R11_TO_PTR_EDX_(VALUE) mov qword ptr [edx + VALUE], r11
#define MOV_R11_TO_PTR_EDI_(VALUE) mov qword ptr [edi + VALUE], r11
#define MOV_R11_TO_PTR_ESI_(VALUE) mov qword ptr [esi + VALUE], r11
#define MOV_R11_TO_PTR_EBP_(VALUE) mov qword ptr [ebp + VALUE], r11
#define MOV_R11_TO_PTR_ESP_(VALUE) mov qword ptr [esp + VALUE], r11

#define MOV_R12_TO_PTR_RAX_(VALUE) mov qword ptr [rax + VALUE], r12
#define MOV_R12_TO_PTR_RBX_(VALUE) mov qword ptr [rbx + VALUE], r12
#define MOV_R12_TO_PTR_RCX_(VALUE) mov qword ptr [rcx + VALUE], r12
#define MOV_R12_TO_PTR_RDX_(VALUE) mov qword ptr [rdx + VALUE], r12
#define MOV_R12_TO_PTR_RDI_(VALUE) mov qword ptr [rdi + VALUE], r12
#define MOV_R12_TO_PTR_RSI_(VALUE) mov qword ptr [rsi + VALUE], r12
#define MOV_R12_TO_PTR_RBP_(VALUE) mov qword ptr [rbp + VALUE], r12
#define MOV_R12_TO_PTR_RSP_(VALUE) mov qword ptr [rsp + VALUE], r12
#define MOV_R12_TO_PTR_R8_(VALUE) mov qword ptr [r8 + VALUE], r12
#define MOV_R12_TO_PTR_R9_(VALUE) mov qword ptr [r9 + VALUE], r12
#define MOV_R12_TO_PTR_R10_(VALUE) mov qword ptr [r10 + VALUE], r12
#define MOV_R12_TO_PTR_R11_(VALUE) mov qword ptr [r11 + VALUE], r12
#define MOV_R12_TO_PTR_R12_(VALUE) mov qword ptr [r12 + VALUE], r12
#define MOV_R12_TO_PTR_R13_(VALUE) mov qword ptr [r13 + VALUE], r12
#define MOV_R12_TO_PTR_R14_(VALUE) mov qword ptr [r14 + VALUE], r12
#define MOV_R12_TO_PTR_R15_(VALUE) mov qword ptr [r15 + VALUE], r12
#define MOV_R12_TO_PTR_EAX_(VALUE) mov qword ptr [eax + VALUE], r12
#define MOV_R12_TO_PTR_EBX_(VALUE) mov qword ptr [ebx + VALUE], r12
#define MOV_R12_TO_PTR_ECX_(VALUE) mov qword ptr [ecx + VALUE], r12
#define MOV_R12_TO_PTR_EDX_(VALUE) mov qword ptr [edx + VALUE], r12
#define MOV_R12_TO_PTR_EDI_(VALUE) mov qword ptr [edi + VALUE], r12
#define MOV_R12_TO_PTR_ESI_(VALUE) mov qword ptr [esi + VALUE], r12
#define MOV_R12_TO_PTR_EBP_(VALUE) mov qword ptr [ebp + VALUE], r12
#define MOV_R12_TO_PTR_ESP_(VALUE) mov qword ptr [esp + VALUE], r12

#define MOV_R13_TO_PTR_RAX_(VALUE) mov qword ptr [rax + VALUE], r13
#define MOV_R13_TO_PTR_RBX_(VALUE) mov qword ptr [rbx + VALUE], r13
#define MOV_R13_TO_PTR_RCX_(VALUE) mov qword ptr [rcx + VALUE], r13
#define MOV_R13_TO_PTR_RDX_(VALUE) mov qword ptr [rdx + VALUE], r13
#define MOV_R13_TO_PTR_RDI_(VALUE) mov qword ptr [rdi + VALUE], r13
#define MOV_R13_TO_PTR_RSI_(VALUE) mov qword ptr [rsi + VALUE], r13
#define MOV_R13_TO_PTR_RBP_(VALUE) mov qword ptr [rbp + VALUE], r13
#define MOV_R13_TO_PTR_RSP_(VALUE) mov qword ptr [rsp + VALUE], r13
#define MOV_R13_TO_PTR_R8_(VALUE) mov qword ptr [r8 + VALUE], r13
#define MOV_R13_TO_PTR_R9_(VALUE) mov qword ptr [r9 + VALUE], r13
#define MOV_R13_TO_PTR_R10_(VALUE) mov qword ptr [r10 + VALUE], r13
#define MOV_R13_TO_PTR_R11_(VALUE) mov qword ptr [r11 + VALUE], r13
#define MOV_R13_TO_PTR_R12_(VALUE) mov qword ptr [r12 + VALUE], r13
#define MOV_R13_TO_PTR_R13_(VALUE) mov qword ptr [r13 + VALUE], r13
#define MOV_R13_TO_PTR_R14_(VALUE) mov qword ptr [r14 + VALUE], r13
#define MOV_R13_TO_PTR_R15_(VALUE) mov qword ptr [r15 + VALUE], r13
#define MOV_R13_TO_PTR_EAX_(VALUE) mov qword ptr [eax + VALUE], r13
#define MOV_R13_TO_PTR_EBX_(VALUE) mov qword ptr [ebx + VALUE], r13
#define MOV_R13_TO_PTR_ECX_(VALUE) mov qword ptr [ecx + VALUE], r13
#define MOV_R13_TO_PTR_EDX_(VALUE) mov qword ptr [edx + VALUE], r13
#define MOV_R13_TO_PTR_EDI_(VALUE) mov qword ptr [edi + VALUE], r13
#define MOV_R13_TO_PTR_ESI_(VALUE) mov qword ptr [esi + VALUE], r13
#define MOV_R13_TO_PTR_EBP_(VALUE) mov qword ptr [ebp + VALUE], r13
#define MOV_R13_TO_PTR_ESP_(VALUE) mov qword ptr [esp + VALUE], r13

#define MOV_R14_TO_PTR_RAX_(VALUE) mov qword ptr [rax + VALUE], r14
#define MOV_R14_TO_PTR_RBX_(VALUE) mov qword ptr [rbx + VALUE], r14
#define MOV_R14_TO_PTR_RCX_(VALUE) mov qword ptr [rcx + VALUE], r14
#define MOV_R14_TO_PTR_RDX_(VALUE) mov qword ptr [rdx + VALUE], r14
#define MOV_R14_TO_PTR_RDI_(VALUE) mov qword ptr [rdi + VALUE], r14
#define MOV_R14_TO_PTR_RSI_(VALUE) mov qword ptr [rsi + VALUE], r14
#define MOV_R14_TO_PTR_RBP_(VALUE) mov qword ptr [rbp + VALUE], r14
#define MOV_R14_TO_PTR_RSP_(VALUE) mov qword ptr [rsp + VALUE], r14
#define MOV_R14_TO_PTR_R8_(VALUE) mov qword ptr [r8 + VALUE], r14
#define MOV_R14_TO_PTR_R9_(VALUE) mov qword ptr [r9 + VALUE], r14
#define MOV_R14_TO_PTR_R10_(VALUE) mov qword ptr [r10 + VALUE], r14
#define MOV_R14_TO_PTR_R11_(VALUE) mov qword ptr [r11 + VALUE], r14
#define MOV_R14_TO_PTR_R12_(VALUE) mov qword ptr [r12 + VALUE], r14
#define MOV_R14_TO_PTR_R13_(VALUE) mov qword ptr [r13 + VALUE], r14
#define MOV_R14_TO_PTR_R14_(VALUE) mov qword ptr [r14 + VALUE], r14
#define MOV_R14_TO_PTR_R15_(VALUE) mov qword ptr [r15 + VALUE], r14
#define MOV_R14_TO_PTR_EAX_(VALUE) mov qword ptr [eax + VALUE], r14
#define MOV_R14_TO_PTR_EBX_(VALUE) mov qword ptr [ebx + VALUE], r14
#define MOV_R14_TO_PTR_ECX_(VALUE) mov qword ptr [ecx + VALUE], r14
#define MOV_R14_TO_PTR_EDX_(VALUE) mov qword ptr [edx + VALUE], r14
#define MOV_R14_TO_PTR_EDI_(VALUE) mov qword ptr [edi + VALUE], r14
#define MOV_R14_TO_PTR_ESI_(VALUE) mov qword ptr [esi + VALUE], r14
#define MOV_R14_TO_PTR_EBP_(VALUE) mov qword ptr [ebp + VALUE], r14
#define MOV_R14_TO_PTR_ESP_(VALUE) mov qword ptr [esp + VALUE], r14

#define MOV_R15_TO_PTR_RAX_(VALUE) mov qword ptr [rax + VALUE], r15
#define MOV_R15_TO_PTR_RBX_(VALUE) mov qword ptr [rbx + VALUE], r15
#define MOV_R15_TO_PTR_RCX_(VALUE) mov qword ptr [rcx + VALUE], r15
#define MOV_R15_TO_PTR_RDX_(VALUE) mov qword ptr [rdx + VALUE], r15
#define MOV_R15_TO_PTR_RDI_(VALUE) mov qword ptr [rdi + VALUE], r15
#define MOV_R15_TO_PTR_RSI_(VALUE) mov qword ptr [rsi + VALUE], r15
#define MOV_R15_TO_PTR_RBP_(VALUE) mov qword ptr [rbp + VALUE], r15
#define MOV_R15_TO_PTR_RSP_(VALUE) mov qword ptr [rsp + VALUE], r15
#define MOV_R15_TO_PTR_R8_(VALUE) mov qword ptr [r8 + VALUE], r15
#define MOV_R15_TO_PTR_R9_(VALUE) mov qword ptr [r9 + VALUE], r15
#define MOV_R15_TO_PTR_R10_(VALUE) mov qword ptr [r10 + VALUE], r15
#define MOV_R15_TO_PTR_R11_(VALUE) mov qword ptr [r11 + VALUE], r15
#define MOV_R15_TO_PTR_R12_(VALUE) mov qword ptr [r12 + VALUE], r15
#define MOV_R15_TO_PTR_R13_(VALUE) mov qword ptr [r13 + VALUE], r15
#define MOV_R15_TO_PTR_R14_(VALUE) mov qword ptr [r14 + VALUE], r15
#define MOV_R15_TO_PTR_R15_(VALUE) mov qword ptr [r15 + VALUE], r15
#define MOV_R15_TO_PTR_EAX_(VALUE) mov qword ptr [eax + VALUE], r15
#define MOV_R15_TO_PTR_EBX_(VALUE) mov qword ptr [ebx + VALUE], r15
#define MOV_R15_TO_PTR_ECX_(VALUE) mov qword ptr [ecx + VALUE], r15
#define MOV_R15_TO_PTR_EDX_(VALUE) mov qword ptr [edx + VALUE], r15
#define MOV_R15_TO_PTR_EDI_(VALUE) mov qword ptr [edi + VALUE], r15
#define MOV_R15_TO_PTR_ESI_(VALUE) mov qword ptr [esi + VALUE], r15
#define MOV_R15_TO_PTR_EBP_(VALUE) mov qword ptr [ebp + VALUE], r15
#define MOV_R15_TO_PTR_ESP_(VALUE) mov qword ptr [esp + VALUE], r15
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
