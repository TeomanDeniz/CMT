#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************* [v] 64-BIT MEMORY [v] ************************** */
#define SBB_RAX_FROM_PTR_(VALUE) sbb rax, qword ptr [VALUE]
#define SBB_RBX_FROM_PTR_(VALUE) sbb rbx, qword ptr [VALUE]
#define SBB_RCX_FROM_PTR_(VALUE) sbb rcx, qword ptr [VALUE]
#define SBB_RDX_FROM_PTR_(VALUE) sbb rdx, qword ptr [VALUE]
#define SBB_RDI_FROM_PTR_(VALUE) sbb rdi, qword ptr [VALUE]
#define SBB_RSI_FROM_PTR_(VALUE) sbb rsi, qword ptr [VALUE]
#define SBB_RBP_FROM_PTR_(VALUE) sbb rbp, qword ptr [VALUE]
#define SBB_RSP_FROM_PTR_(VALUE) sbb rsp, qword ptr [VALUE]
#define SBB_R8_FROM_PTR_(VALUE) sbb r8, qword ptr [VALUE]
#define SBB_R9_FROM_PTR_(VALUE) sbb r9, qword ptr [VALUE]
#define SBB_R10_FROM_PTR_(VALUE) sbb r10, qword ptr [VALUE]
#define SBB_R11_FROM_PTR_(VALUE) sbb r11, qword ptr [VALUE]
#define SBB_R12_FROM_PTR_(VALUE) sbb r12, qword ptr [VALUE]
#define SBB_R13_FROM_PTR_(VALUE) sbb r13, qword ptr [VALUE]
#define SBB_R14_FROM_PTR_(VALUE) sbb r14, qword ptr [VALUE]
#define SBB_R15_FROM_PTR_(VALUE) sbb r15, qword ptr [VALUE]

#define SBB_RAX_TO_PTR_(VALUE) sbb qword ptr [VALUE], rax
#define SBB_RBX_TO_PTR_(VALUE) sbb qword ptr [VALUE], rbx
#define SBB_RCX_TO_PTR_(VALUE) sbb qword ptr [VALUE], rcx
#define SBB_RDX_TO_PTR_(VALUE) sbb qword ptr [VALUE], rdx
#define SBB_RDI_TO_PTR_(VALUE) sbb qword ptr [VALUE], rdi
#define SBB_RSI_TO_PTR_(VALUE) sbb qword ptr [VALUE], rsi
#define SBB_RBP_TO_PTR_(VALUE) sbb qword ptr [VALUE], rbp
#define SBB_RSP_TO_PTR_(VALUE) sbb qword ptr [VALUE], rsp
#define SBB_R8_TO_PTR_(VALUE) sbb qword ptr [VALUE], r8
#define SBB_R9_TO_PTR_(VALUE) sbb qword ptr [VALUE], r9
#define SBB_R10_TO_PTR_(VALUE) sbb qword ptr [VALUE], r10
#define SBB_R11_TO_PTR_(VALUE) sbb qword ptr [VALUE], r11
#define SBB_R12_TO_PTR_(VALUE) sbb qword ptr [VALUE], r12
#define SBB_R13_TO_PTR_(VALUE) sbb qword ptr [VALUE], r13
#define SBB_R14_TO_PTR_(VALUE) sbb qword ptr [VALUE], r14
#define SBB_R15_TO_PTR_(VALUE) sbb qword ptr [VALUE], r15

#define SBB_RAX_FROM_PTR_RAX sbb rax, qword ptr [rax]
#define SBB_RAX_FROM_PTR_RBX sbb rax, qword ptr [rbx]
#define SBB_RAX_FROM_PTR_RCX sbb rax, qword ptr [rcx]
#define SBB_RAX_FROM_PTR_RDX sbb rax, qword ptr [rdx]
#define SBB_RAX_FROM_PTR_RDI sbb rax, qword ptr [rdi]
#define SBB_RAX_FROM_PTR_RSI sbb rax, qword ptr [rsi]
#define SBB_RAX_FROM_PTR_RBP sbb rax, qword ptr [rbp]
#define SBB_RAX_FROM_PTR_RSP sbb rax, qword ptr [rsp]
#define SBB_RAX_FROM_PTR_R8 sbb rax, qword ptr [r8]
#define SBB_RAX_FROM_PTR_R9 sbb rax, qword ptr [r9]
#define SBB_RAX_FROM_PTR_R10 sbb rax, qword ptr [r10]
#define SBB_RAX_FROM_PTR_R11 sbb rax, qword ptr [r11]
#define SBB_RAX_FROM_PTR_R12 sbb rax, qword ptr [r12]
#define SBB_RAX_FROM_PTR_R13 sbb rax, qword ptr [r13]
#define SBB_RAX_FROM_PTR_R14 sbb rax, qword ptr [r14]
#define SBB_RAX_FROM_PTR_R15 sbb rax, qword ptr [r15]
#define SBB_RAX_FROM_PTR_EAX sbb rax, qword ptr [eax]
#define SBB_RAX_FROM_PTR_EBX sbb rax, qword ptr [ebx]
#define SBB_RAX_FROM_PTR_ECX sbb rax, qword ptr [ecx]
#define SBB_RAX_FROM_PTR_EDX sbb rax, qword ptr [edx]
#define SBB_RAX_FROM_PTR_EDI sbb rax, qword ptr [edi]
#define SBB_RAX_FROM_PTR_ESI sbb rax, qword ptr [esi]
#define SBB_RAX_FROM_PTR_EBP sbb rax, qword ptr [ebp]
#define SBB_RAX_FROM_PTR_ESP sbb rax, qword ptr [esp]

#define SBB_RBX_FROM_PTR_RAX sbb rbx, qword ptr [rax]
#define SBB_RBX_FROM_PTR_RBX sbb rbx, qword ptr [rbx]
#define SBB_RBX_FROM_PTR_RCX sbb rbx, qword ptr [rcx]
#define SBB_RBX_FROM_PTR_RDX sbb rbx, qword ptr [rdx]
#define SBB_RBX_FROM_PTR_RDI sbb rbx, qword ptr [rdi]
#define SBB_RBX_FROM_PTR_RSI sbb rbx, qword ptr [rsi]
#define SBB_RBX_FROM_PTR_RBP sbb rbx, qword ptr [rbp]
#define SBB_RBX_FROM_PTR_RSP sbb rbx, qword ptr [rsp]
#define SBB_RBX_FROM_PTR_R8 sbb rbx, qword ptr [r8]
#define SBB_RBX_FROM_PTR_R9 sbb rbx, qword ptr [r9]
#define SBB_RBX_FROM_PTR_R10 sbb rbx, qword ptr [r10]
#define SBB_RBX_FROM_PTR_R11 sbb rbx, qword ptr [r11]
#define SBB_RBX_FROM_PTR_R12 sbb rbx, qword ptr [r12]
#define SBB_RBX_FROM_PTR_R13 sbb rbx, qword ptr [r13]
#define SBB_RBX_FROM_PTR_R14 sbb rbx, qword ptr [r14]
#define SBB_RBX_FROM_PTR_R15 sbb rbx, qword ptr [r15]
#define SBB_RBX_FROM_PTR_EAX sbb rbx, qword ptr [eax]
#define SBB_RBX_FROM_PTR_EBX sbb rbx, qword ptr [ebx]
#define SBB_RBX_FROM_PTR_ECX sbb rbx, qword ptr [ecx]
#define SBB_RBX_FROM_PTR_EDX sbb rbx, qword ptr [edx]
#define SBB_RBX_FROM_PTR_EDI sbb rbx, qword ptr [edi]
#define SBB_RBX_FROM_PTR_ESI sbb rbx, qword ptr [esi]
#define SBB_RBX_FROM_PTR_EBP sbb rbx, qword ptr [ebp]
#define SBB_RBX_FROM_PTR_ESP sbb rbx, qword ptr [esp]

#define SBB_RCX_FROM_PTR_RAX sbb rcx, qword ptr [rax]
#define SBB_RCX_FROM_PTR_RBX sbb rcx, qword ptr [rbx]
#define SBB_RCX_FROM_PTR_RCX sbb rcx, qword ptr [rcx]
#define SBB_RCX_FROM_PTR_RDX sbb rcx, qword ptr [rdx]
#define SBB_RCX_FROM_PTR_RDI sbb rcx, qword ptr [rdi]
#define SBB_RCX_FROM_PTR_RSI sbb rcx, qword ptr [rsi]
#define SBB_RCX_FROM_PTR_RBP sbb rcx, qword ptr [rbp]
#define SBB_RCX_FROM_PTR_RSP sbb rcx, qword ptr [rsp]
#define SBB_RCX_FROM_PTR_R8 sbb rcx, qword ptr [r8]
#define SBB_RCX_FROM_PTR_R9 sbb rcx, qword ptr [r9]
#define SBB_RCX_FROM_PTR_R10 sbb rcx, qword ptr [r10]
#define SBB_RCX_FROM_PTR_R11 sbb rcx, qword ptr [r11]
#define SBB_RCX_FROM_PTR_R12 sbb rcx, qword ptr [r12]
#define SBB_RCX_FROM_PTR_R13 sbb rcx, qword ptr [r13]
#define SBB_RCX_FROM_PTR_R14 sbb rcx, qword ptr [r14]
#define SBB_RCX_FROM_PTR_R15 sbb rcx, qword ptr [r15]
#define SBB_RCX_FROM_PTR_EAX sbb rcx, qword ptr [eax]
#define SBB_RCX_FROM_PTR_EBX sbb rcx, qword ptr [ebx]
#define SBB_RCX_FROM_PTR_ECX sbb rcx, qword ptr [ecx]
#define SBB_RCX_FROM_PTR_EDX sbb rcx, qword ptr [edx]
#define SBB_RCX_FROM_PTR_EDI sbb rcx, qword ptr [edi]
#define SBB_RCX_FROM_PTR_ESI sbb rcx, qword ptr [esi]
#define SBB_RCX_FROM_PTR_EBP sbb rcx, qword ptr [ebp]
#define SBB_RCX_FROM_PTR_ESP sbb rcx, qword ptr [esp]

#define SBB_RDX_FROM_PTR_RAX sbb rdx, qword ptr [rax]
#define SBB_RDX_FROM_PTR_RBX sbb rdx, qword ptr [rbx]
#define SBB_RDX_FROM_PTR_RCX sbb rdx, qword ptr [rcx]
#define SBB_RDX_FROM_PTR_RDX sbb rdx, qword ptr [rdx]
#define SBB_RDX_FROM_PTR_RDI sbb rdx, qword ptr [rdi]
#define SBB_RDX_FROM_PTR_RSI sbb rdx, qword ptr [rsi]
#define SBB_RDX_FROM_PTR_RBP sbb rdx, qword ptr [rbp]
#define SBB_RDX_FROM_PTR_RSP sbb rdx, qword ptr [rsp]
#define SBB_RDX_FROM_PTR_R8 sbb rdx, qword ptr [r8]
#define SBB_RDX_FROM_PTR_R9 sbb rdx, qword ptr [r9]
#define SBB_RDX_FROM_PTR_R10 sbb rdx, qword ptr [r10]
#define SBB_RDX_FROM_PTR_R11 sbb rdx, qword ptr [r11]
#define SBB_RDX_FROM_PTR_R12 sbb rdx, qword ptr [r12]
#define SBB_RDX_FROM_PTR_R13 sbb rdx, qword ptr [r13]
#define SBB_RDX_FROM_PTR_R14 sbb rdx, qword ptr [r14]
#define SBB_RDX_FROM_PTR_R15 sbb rdx, qword ptr [r15]
#define SBB_RDX_FROM_PTR_EAX sbb rdx, qword ptr [eax]
#define SBB_RDX_FROM_PTR_EBX sbb rdx, qword ptr [ebx]
#define SBB_RDX_FROM_PTR_ECX sbb rdx, qword ptr [ecx]
#define SBB_RDX_FROM_PTR_EDX sbb rdx, qword ptr [edx]
#define SBB_RDX_FROM_PTR_EDI sbb rdx, qword ptr [edi]
#define SBB_RDX_FROM_PTR_ESI sbb rdx, qword ptr [esi]
#define SBB_RDX_FROM_PTR_EBP sbb rdx, qword ptr [ebp]
#define SBB_RDX_FROM_PTR_ESP sbb rdx, qword ptr [esp]

#define SBB_RDI_FROM_PTR_RAX sbb rdi, qword ptr [rax]
#define SBB_RDI_FROM_PTR_RBX sbb rdi, qword ptr [rbx]
#define SBB_RDI_FROM_PTR_RCX sbb rdi, qword ptr [rcx]
#define SBB_RDI_FROM_PTR_RDX sbb rdi, qword ptr [rdx]
#define SBB_RDI_FROM_PTR_RDI sbb rdi, qword ptr [rdi]
#define SBB_RDI_FROM_PTR_RSI sbb rdi, qword ptr [rsi]
#define SBB_RDI_FROM_PTR_RBP sbb rdi, qword ptr [rbp]
#define SBB_RDI_FROM_PTR_RSP sbb rdi, qword ptr [rsp]
#define SBB_RDI_FROM_PTR_R8 sbb rdi, qword ptr [r8]
#define SBB_RDI_FROM_PTR_R9 sbb rdi, qword ptr [r9]
#define SBB_RDI_FROM_PTR_R10 sbb rdi, qword ptr [r10]
#define SBB_RDI_FROM_PTR_R11 sbb rdi, qword ptr [r11]
#define SBB_RDI_FROM_PTR_R12 sbb rdi, qword ptr [r12]
#define SBB_RDI_FROM_PTR_R13 sbb rdi, qword ptr [r13]
#define SBB_RDI_FROM_PTR_R14 sbb rdi, qword ptr [r14]
#define SBB_RDI_FROM_PTR_R15 sbb rdi, qword ptr [r15]
#define SBB_RDI_FROM_PTR_EAX sbb rdi, qword ptr [eax]
#define SBB_RDI_FROM_PTR_EBX sbb rdi, qword ptr [ebx]
#define SBB_RDI_FROM_PTR_ECX sbb rdi, qword ptr [ecx]
#define SBB_RDI_FROM_PTR_EDX sbb rdi, qword ptr [edx]
#define SBB_RDI_FROM_PTR_EDI sbb rdi, qword ptr [edi]
#define SBB_RDI_FROM_PTR_ESI sbb rdi, qword ptr [esi]
#define SBB_RDI_FROM_PTR_EBP sbb rdi, qword ptr [ebp]
#define SBB_RDI_FROM_PTR_ESP sbb rdi, qword ptr [esp]

#define SBB_RSI_FROM_PTR_RAX sbb rsi, qword ptr [rax]
#define SBB_RSI_FROM_PTR_RBX sbb rsi, qword ptr [rbx]
#define SBB_RSI_FROM_PTR_RCX sbb rsi, qword ptr [rcx]
#define SBB_RSI_FROM_PTR_RDX sbb rsi, qword ptr [rdx]
#define SBB_RSI_FROM_PTR_RDI sbb rsi, qword ptr [rdi]
#define SBB_RSI_FROM_PTR_RSI sbb rsi, qword ptr [rsi]
#define SBB_RSI_FROM_PTR_RBP sbb rsi, qword ptr [rbp]
#define SBB_RSI_FROM_PTR_RSP sbb rsi, qword ptr [rsp]
#define SBB_RSI_FROM_PTR_R8 sbb rsi, qword ptr [r8]
#define SBB_RSI_FROM_PTR_R9 sbb rsi, qword ptr [r9]
#define SBB_RSI_FROM_PTR_R10 sbb rsi, qword ptr [r10]
#define SBB_RSI_FROM_PTR_R11 sbb rsi, qword ptr [r11]
#define SBB_RSI_FROM_PTR_R12 sbb rsi, qword ptr [r12]
#define SBB_RSI_FROM_PTR_R13 sbb rsi, qword ptr [r13]
#define SBB_RSI_FROM_PTR_R14 sbb rsi, qword ptr [r14]
#define SBB_RSI_FROM_PTR_R15 sbb rsi, qword ptr [r15]
#define SBB_RSI_FROM_PTR_EAX sbb rsi, qword ptr [eax]
#define SBB_RSI_FROM_PTR_EBX sbb rsi, qword ptr [ebx]
#define SBB_RSI_FROM_PTR_ECX sbb rsi, qword ptr [ecx]
#define SBB_RSI_FROM_PTR_EDX sbb rsi, qword ptr [edx]
#define SBB_RSI_FROM_PTR_EDI sbb rsi, qword ptr [edi]
#define SBB_RSI_FROM_PTR_ESI sbb rsi, qword ptr [esi]
#define SBB_RSI_FROM_PTR_EBP sbb rsi, qword ptr [ebp]
#define SBB_RSI_FROM_PTR_ESP sbb rsi, qword ptr [esp]

#define SBB_RBP_FROM_PTR_RAX sbb rbp, qword ptr [rax]
#define SBB_RBP_FROM_PTR_RBX sbb rbp, qword ptr [rbx]
#define SBB_RBP_FROM_PTR_RCX sbb rbp, qword ptr [rcx]
#define SBB_RBP_FROM_PTR_RDX sbb rbp, qword ptr [rdx]
#define SBB_RBP_FROM_PTR_RDI sbb rbp, qword ptr [rdi]
#define SBB_RBP_FROM_PTR_RSI sbb rbp, qword ptr [rsi]
#define SBB_RBP_FROM_PTR_RBP sbb rbp, qword ptr [rbp]
#define SBB_RBP_FROM_PTR_RSP sbb rbp, qword ptr [rsp]
#define SBB_RBP_FROM_PTR_R8 sbb rbp, qword ptr [r8]
#define SBB_RBP_FROM_PTR_R9 sbb rbp, qword ptr [r9]
#define SBB_RBP_FROM_PTR_R10 sbb rbp, qword ptr [r10]
#define SBB_RBP_FROM_PTR_R11 sbb rbp, qword ptr [r11]
#define SBB_RBP_FROM_PTR_R12 sbb rbp, qword ptr [r12]
#define SBB_RBP_FROM_PTR_R13 sbb rbp, qword ptr [r13]
#define SBB_RBP_FROM_PTR_R14 sbb rbp, qword ptr [r14]
#define SBB_RBP_FROM_PTR_R15 sbb rbp, qword ptr [r15]
#define SBB_RBP_FROM_PTR_EAX sbb rbp, qword ptr [eax]
#define SBB_RBP_FROM_PTR_EBX sbb rbp, qword ptr [ebx]
#define SBB_RBP_FROM_PTR_ECX sbb rbp, qword ptr [ecx]
#define SBB_RBP_FROM_PTR_EDX sbb rbp, qword ptr [edx]
#define SBB_RBP_FROM_PTR_EDI sbb rbp, qword ptr [edi]
#define SBB_RBP_FROM_PTR_ESI sbb rbp, qword ptr [esi]
#define SBB_RBP_FROM_PTR_EBP sbb rbp, qword ptr [ebp]
#define SBB_RBP_FROM_PTR_ESP sbb rbp, qword ptr [esp]

#define SBB_RSP_FROM_PTR_RAX sbb rsp, qword ptr [rax]
#define SBB_RSP_FROM_PTR_RBX sbb rsp, qword ptr [rbx]
#define SBB_RSP_FROM_PTR_RCX sbb rsp, qword ptr [rcx]
#define SBB_RSP_FROM_PTR_RDX sbb rsp, qword ptr [rdx]
#define SBB_RSP_FROM_PTR_RDI sbb rsp, qword ptr [rdi]
#define SBB_RSP_FROM_PTR_RSI sbb rsp, qword ptr [rsi]
#define SBB_RSP_FROM_PTR_RBP sbb rsp, qword ptr [rbp]
#define SBB_RSP_FROM_PTR_RSP sbb rsp, qword ptr [rsp]
#define SBB_RSP_FROM_PTR_R8 sbb rsp, qword ptr [r8]
#define SBB_RSP_FROM_PTR_R9 sbb rsp, qword ptr [r9]
#define SBB_RSP_FROM_PTR_R10 sbb rsp, qword ptr [r10]
#define SBB_RSP_FROM_PTR_R11 sbb rsp, qword ptr [r11]
#define SBB_RSP_FROM_PTR_R12 sbb rsp, qword ptr [r12]
#define SBB_RSP_FROM_PTR_R13 sbb rsp, qword ptr [r13]
#define SBB_RSP_FROM_PTR_R14 sbb rsp, qword ptr [r14]
#define SBB_RSP_FROM_PTR_R15 sbb rsp, qword ptr [r15]
#define SBB_RSP_FROM_PTR_EAX sbb rsp, qword ptr [eax]
#define SBB_RSP_FROM_PTR_EBX sbb rsp, qword ptr [ebx]
#define SBB_RSP_FROM_PTR_ECX sbb rsp, qword ptr [ecx]
#define SBB_RSP_FROM_PTR_EDX sbb rsp, qword ptr [edx]
#define SBB_RSP_FROM_PTR_EDI sbb rsp, qword ptr [edi]
#define SBB_RSP_FROM_PTR_ESI sbb rsp, qword ptr [esi]
#define SBB_RSP_FROM_PTR_EBP sbb rsp, qword ptr [ebp]
#define SBB_RSP_FROM_PTR_ESP sbb rsp, qword ptr [esp]

#define SBB_R8_FROM_PTR_RAX sbb r8, qword ptr [rax]
#define SBB_R8_FROM_PTR_RBX sbb r8, qword ptr [rbx]
#define SBB_R8_FROM_PTR_RCX sbb r8, qword ptr [rcx]
#define SBB_R8_FROM_PTR_RDX sbb r8, qword ptr [rdx]
#define SBB_R8_FROM_PTR_RDI sbb r8, qword ptr [rdi]
#define SBB_R8_FROM_PTR_RSI sbb r8, qword ptr [rsi]
#define SBB_R8_FROM_PTR_RBP sbb r8, qword ptr [rbp]
#define SBB_R8_FROM_PTR_RSP sbb r8, qword ptr [rsp]
#define SBB_R8_FROM_PTR_R8 sbb r8, qword ptr [r8]
#define SBB_R8_FROM_PTR_R9 sbb r8, qword ptr [r9]
#define SBB_R8_FROM_PTR_R10 sbb r8, qword ptr [r10]
#define SBB_R8_FROM_PTR_R11 sbb r8, qword ptr [r11]
#define SBB_R8_FROM_PTR_R12 sbb r8, qword ptr [r12]
#define SBB_R8_FROM_PTR_R13 sbb r8, qword ptr [r13]
#define SBB_R8_FROM_PTR_R14 sbb r8, qword ptr [r14]
#define SBB_R8_FROM_PTR_R15 sbb r8, qword ptr [r15]
#define SBB_R8_FROM_PTR_EAX sbb r8, qword ptr [eax]
#define SBB_R8_FROM_PTR_EBX sbb r8, qword ptr [ebx]
#define SBB_R8_FROM_PTR_ECX sbb r8, qword ptr [ecx]
#define SBB_R8_FROM_PTR_EDX sbb r8, qword ptr [edx]
#define SBB_R8_FROM_PTR_EDI sbb r8, qword ptr [edi]
#define SBB_R8_FROM_PTR_ESI sbb r8, qword ptr [esi]
#define SBB_R8_FROM_PTR_EBP sbb r8, qword ptr [ebp]
#define SBB_R8_FROM_PTR_ESP sbb r8, qword ptr [esp]

#define SBB_R9_FROM_PTR_RAX sbb r9, qword ptr [rax]
#define SBB_R9_FROM_PTR_RBX sbb r9, qword ptr [rbx]
#define SBB_R9_FROM_PTR_RCX sbb r9, qword ptr [rcx]
#define SBB_R9_FROM_PTR_RDX sbb r9, qword ptr [rdx]
#define SBB_R9_FROM_PTR_RDI sbb r9, qword ptr [rdi]
#define SBB_R9_FROM_PTR_RSI sbb r9, qword ptr [rsi]
#define SBB_R9_FROM_PTR_RBP sbb r9, qword ptr [rbp]
#define SBB_R9_FROM_PTR_RSP sbb r9, qword ptr [rsp]
#define SBB_R9_FROM_PTR_R8 sbb r9, qword ptr [r8]
#define SBB_R9_FROM_PTR_R9 sbb r9, qword ptr [r9]
#define SBB_R9_FROM_PTR_R10 sbb r9, qword ptr [r10]
#define SBB_R9_FROM_PTR_R11 sbb r9, qword ptr [r11]
#define SBB_R9_FROM_PTR_R12 sbb r9, qword ptr [r12]
#define SBB_R9_FROM_PTR_R13 sbb r9, qword ptr [r13]
#define SBB_R9_FROM_PTR_R14 sbb r9, qword ptr [r14]
#define SBB_R9_FROM_PTR_R15 sbb r9, qword ptr [r15]
#define SBB_R9_FROM_PTR_EAX sbb r9, qword ptr [eax]
#define SBB_R9_FROM_PTR_EBX sbb r9, qword ptr [ebx]
#define SBB_R9_FROM_PTR_ECX sbb r9, qword ptr [ecx]
#define SBB_R9_FROM_PTR_EDX sbb r9, qword ptr [edx]
#define SBB_R9_FROM_PTR_EDI sbb r9, qword ptr [edi]
#define SBB_R9_FROM_PTR_ESI sbb r9, qword ptr [esi]
#define SBB_R9_FROM_PTR_EBP sbb r9, qword ptr [ebp]
#define SBB_R9_FROM_PTR_ESP sbb r9, qword ptr [esp]

#define SBB_R10_FROM_PTR_RAX sbb r10, qword ptr [rax]
#define SBB_R10_FROM_PTR_RBX sbb r10, qword ptr [rbx]
#define SBB_R10_FROM_PTR_RCX sbb r10, qword ptr [rcx]
#define SBB_R10_FROM_PTR_RDX sbb r10, qword ptr [rdx]
#define SBB_R10_FROM_PTR_RDI sbb r10, qword ptr [rdi]
#define SBB_R10_FROM_PTR_RSI sbb r10, qword ptr [rsi]
#define SBB_R10_FROM_PTR_RBP sbb r10, qword ptr [rbp]
#define SBB_R10_FROM_PTR_RSP sbb r10, qword ptr [rsp]
#define SBB_R10_FROM_PTR_R8 sbb r10, qword ptr [r8]
#define SBB_R10_FROM_PTR_R9 sbb r10, qword ptr [r9]
#define SBB_R10_FROM_PTR_R10 sbb r10, qword ptr [r10]
#define SBB_R10_FROM_PTR_R11 sbb r10, qword ptr [r11]
#define SBB_R10_FROM_PTR_R12 sbb r10, qword ptr [r12]
#define SBB_R10_FROM_PTR_R13 sbb r10, qword ptr [r13]
#define SBB_R10_FROM_PTR_R14 sbb r10, qword ptr [r14]
#define SBB_R10_FROM_PTR_R15 sbb r10, qword ptr [r15]
#define SBB_R10_FROM_PTR_EAX sbb r10, qword ptr [eax]
#define SBB_R10_FROM_PTR_EBX sbb r10, qword ptr [ebx]
#define SBB_R10_FROM_PTR_ECX sbb r10, qword ptr [ecx]
#define SBB_R10_FROM_PTR_EDX sbb r10, qword ptr [edx]
#define SBB_R10_FROM_PTR_EDI sbb r10, qword ptr [edi]
#define SBB_R10_FROM_PTR_ESI sbb r10, qword ptr [esi]
#define SBB_R10_FROM_PTR_EBP sbb r10, qword ptr [ebp]
#define SBB_R10_FROM_PTR_ESP sbb r10, qword ptr [esp]

#define SBB_R11_FROM_PTR_RAX sbb r11, qword ptr [rax]
#define SBB_R11_FROM_PTR_RBX sbb r11, qword ptr [rbx]
#define SBB_R11_FROM_PTR_RCX sbb r11, qword ptr [rcx]
#define SBB_R11_FROM_PTR_RDX sbb r11, qword ptr [rdx]
#define SBB_R11_FROM_PTR_RDI sbb r11, qword ptr [rdi]
#define SBB_R11_FROM_PTR_RSI sbb r11, qword ptr [rsi]
#define SBB_R11_FROM_PTR_RBP sbb r11, qword ptr [rbp]
#define SBB_R11_FROM_PTR_RSP sbb r11, qword ptr [rsp]
#define SBB_R11_FROM_PTR_R8 sbb r11, qword ptr [r8]
#define SBB_R11_FROM_PTR_R9 sbb r11, qword ptr [r9]
#define SBB_R11_FROM_PTR_R10 sbb r11, qword ptr [r10]
#define SBB_R11_FROM_PTR_R11 sbb r11, qword ptr [r11]
#define SBB_R11_FROM_PTR_R12 sbb r11, qword ptr [r12]
#define SBB_R11_FROM_PTR_R13 sbb r11, qword ptr [r13]
#define SBB_R11_FROM_PTR_R14 sbb r11, qword ptr [r14]
#define SBB_R11_FROM_PTR_R15 sbb r11, qword ptr [r15]
#define SBB_R11_FROM_PTR_EAX sbb r11, qword ptr [eax]
#define SBB_R11_FROM_PTR_EBX sbb r11, qword ptr [ebx]
#define SBB_R11_FROM_PTR_ECX sbb r11, qword ptr [ecx]
#define SBB_R11_FROM_PTR_EDX sbb r11, qword ptr [edx]
#define SBB_R11_FROM_PTR_EDI sbb r11, qword ptr [edi]
#define SBB_R11_FROM_PTR_ESI sbb r11, qword ptr [esi]
#define SBB_R11_FROM_PTR_EBP sbb r11, qword ptr [ebp]
#define SBB_R11_FROM_PTR_ESP sbb r11, qword ptr [esp]

#define SBB_R12_FROM_PTR_RAX sbb r12, qword ptr [rax]
#define SBB_R12_FROM_PTR_RBX sbb r12, qword ptr [rbx]
#define SBB_R12_FROM_PTR_RCX sbb r12, qword ptr [rcx]
#define SBB_R12_FROM_PTR_RDX sbb r12, qword ptr [rdx]
#define SBB_R12_FROM_PTR_RDI sbb r12, qword ptr [rdi]
#define SBB_R12_FROM_PTR_RSI sbb r12, qword ptr [rsi]
#define SBB_R12_FROM_PTR_RBP sbb r12, qword ptr [rbp]
#define SBB_R12_FROM_PTR_RSP sbb r12, qword ptr [rsp]
#define SBB_R12_FROM_PTR_R8 sbb r12, qword ptr [r8]
#define SBB_R12_FROM_PTR_R9 sbb r12, qword ptr [r9]
#define SBB_R12_FROM_PTR_R10 sbb r12, qword ptr [r10]
#define SBB_R12_FROM_PTR_R11 sbb r12, qword ptr [r11]
#define SBB_R12_FROM_PTR_R12 sbb r12, qword ptr [r12]
#define SBB_R12_FROM_PTR_R13 sbb r12, qword ptr [r13]
#define SBB_R12_FROM_PTR_R14 sbb r12, qword ptr [r14]
#define SBB_R12_FROM_PTR_R15 sbb r12, qword ptr [r15]
#define SBB_R12_FROM_PTR_EAX sbb r12, qword ptr [eax]
#define SBB_R12_FROM_PTR_EBX sbb r12, qword ptr [ebx]
#define SBB_R12_FROM_PTR_ECX sbb r12, qword ptr [ecx]
#define SBB_R12_FROM_PTR_EDX sbb r12, qword ptr [edx]
#define SBB_R12_FROM_PTR_EDI sbb r12, qword ptr [edi]
#define SBB_R12_FROM_PTR_ESI sbb r12, qword ptr [esi]
#define SBB_R12_FROM_PTR_EBP sbb r12, qword ptr [ebp]
#define SBB_R12_FROM_PTR_ESP sbb r12, qword ptr [esp]

#define SBB_R13_FROM_PTR_RAX sbb r13, qword ptr [rax]
#define SBB_R13_FROM_PTR_RBX sbb r13, qword ptr [rbx]
#define SBB_R13_FROM_PTR_RCX sbb r13, qword ptr [rcx]
#define SBB_R13_FROM_PTR_RDX sbb r13, qword ptr [rdx]
#define SBB_R13_FROM_PTR_RDI sbb r13, qword ptr [rdi]
#define SBB_R13_FROM_PTR_RSI sbb r13, qword ptr [rsi]
#define SBB_R13_FROM_PTR_RBP sbb r13, qword ptr [rbp]
#define SBB_R13_FROM_PTR_RSP sbb r13, qword ptr [rsp]
#define SBB_R13_FROM_PTR_R8 sbb r13, qword ptr [r8]
#define SBB_R13_FROM_PTR_R9 sbb r13, qword ptr [r9]
#define SBB_R13_FROM_PTR_R10 sbb r13, qword ptr [r10]
#define SBB_R13_FROM_PTR_R11 sbb r13, qword ptr [r11]
#define SBB_R13_FROM_PTR_R12 sbb r13, qword ptr [r12]
#define SBB_R13_FROM_PTR_R13 sbb r13, qword ptr [r13]
#define SBB_R13_FROM_PTR_R14 sbb r13, qword ptr [r14]
#define SBB_R13_FROM_PTR_R15 sbb r13, qword ptr [r15]
#define SBB_R13_FROM_PTR_EAX sbb r13, qword ptr [eax]
#define SBB_R13_FROM_PTR_EBX sbb r13, qword ptr [ebx]
#define SBB_R13_FROM_PTR_ECX sbb r13, qword ptr [ecx]
#define SBB_R13_FROM_PTR_EDX sbb r13, qword ptr [edx]
#define SBB_R13_FROM_PTR_EDI sbb r13, qword ptr [edi]
#define SBB_R13_FROM_PTR_ESI sbb r13, qword ptr [esi]
#define SBB_R13_FROM_PTR_EBP sbb r13, qword ptr [ebp]
#define SBB_R13_FROM_PTR_ESP sbb r13, qword ptr [esp]

#define SBB_R14_FROM_PTR_RAX sbb r14, qword ptr [rax]
#define SBB_R14_FROM_PTR_RBX sbb r14, qword ptr [rbx]
#define SBB_R14_FROM_PTR_RCX sbb r14, qword ptr [rcx]
#define SBB_R14_FROM_PTR_RDX sbb r14, qword ptr [rdx]
#define SBB_R14_FROM_PTR_RDI sbb r14, qword ptr [rdi]
#define SBB_R14_FROM_PTR_RSI sbb r14, qword ptr [rsi]
#define SBB_R14_FROM_PTR_RBP sbb r14, qword ptr [rbp]
#define SBB_R14_FROM_PTR_RSP sbb r14, qword ptr [rsp]
#define SBB_R14_FROM_PTR_R8 sbb r14, qword ptr [r8]
#define SBB_R14_FROM_PTR_R9 sbb r14, qword ptr [r9]
#define SBB_R14_FROM_PTR_R10 sbb r14, qword ptr [r10]
#define SBB_R14_FROM_PTR_R11 sbb r14, qword ptr [r11]
#define SBB_R14_FROM_PTR_R12 sbb r14, qword ptr [r12]
#define SBB_R14_FROM_PTR_R13 sbb r14, qword ptr [r13]
#define SBB_R14_FROM_PTR_R14 sbb r14, qword ptr [r14]
#define SBB_R14_FROM_PTR_R15 sbb r14, qword ptr [r15]
#define SBB_R14_FROM_PTR_EAX sbb r14, qword ptr [eax]
#define SBB_R14_FROM_PTR_EBX sbb r14, qword ptr [ebx]
#define SBB_R14_FROM_PTR_ECX sbb r14, qword ptr [ecx]
#define SBB_R14_FROM_PTR_EDX sbb r14, qword ptr [edx]
#define SBB_R14_FROM_PTR_EDI sbb r14, qword ptr [edi]
#define SBB_R14_FROM_PTR_ESI sbb r14, qword ptr [esi]
#define SBB_R14_FROM_PTR_EBP sbb r14, qword ptr [ebp]
#define SBB_R14_FROM_PTR_ESP sbb r14, qword ptr [esp]

#define SBB_R15_FROM_PTR_RAX sbb r15, qword ptr [rax]
#define SBB_R15_FROM_PTR_RBX sbb r15, qword ptr [rbx]
#define SBB_R15_FROM_PTR_RCX sbb r15, qword ptr [rcx]
#define SBB_R15_FROM_PTR_RDX sbb r15, qword ptr [rdx]
#define SBB_R15_FROM_PTR_RDI sbb r15, qword ptr [rdi]
#define SBB_R15_FROM_PTR_RSI sbb r15, qword ptr [rsi]
#define SBB_R15_FROM_PTR_RBP sbb r15, qword ptr [rbp]
#define SBB_R15_FROM_PTR_RSP sbb r15, qword ptr [rsp]
#define SBB_R15_FROM_PTR_R8 sbb r15, qword ptr [r8]
#define SBB_R15_FROM_PTR_R9 sbb r15, qword ptr [r9]
#define SBB_R15_FROM_PTR_R10 sbb r15, qword ptr [r10]
#define SBB_R15_FROM_PTR_R11 sbb r15, qword ptr [r11]
#define SBB_R15_FROM_PTR_R12 sbb r15, qword ptr [r12]
#define SBB_R15_FROM_PTR_R13 sbb r15, qword ptr [r13]
#define SBB_R15_FROM_PTR_R14 sbb r15, qword ptr [r14]
#define SBB_R15_FROM_PTR_R15 sbb r15, qword ptr [r15]
#define SBB_R15_FROM_PTR_EAX sbb r15, qword ptr [eax]
#define SBB_R15_FROM_PTR_EBX sbb r15, qword ptr [ebx]
#define SBB_R15_FROM_PTR_ECX sbb r15, qword ptr [ecx]
#define SBB_R15_FROM_PTR_EDX sbb r15, qword ptr [edx]
#define SBB_R15_FROM_PTR_EDI sbb r15, qword ptr [edi]
#define SBB_R15_FROM_PTR_ESI sbb r15, qword ptr [esi]
#define SBB_R15_FROM_PTR_EBP sbb r15, qword ptr [ebp]
#define SBB_R15_FROM_PTR_ESP sbb r15, qword ptr [esp]

#define SBB_RAX_TO_PTR_RAX sbb qword ptr [rax], rax
#define SBB_RAX_TO_PTR_RBX sbb qword ptr [rbx], rax
#define SBB_RAX_TO_PTR_RCX sbb qword ptr [rcx], rax
#define SBB_RAX_TO_PTR_RDX sbb qword ptr [rdx], rax
#define SBB_RAX_TO_PTR_RDI sbb qword ptr [rdi], rax
#define SBB_RAX_TO_PTR_RSI sbb qword ptr [rsi], rax
#define SBB_RAX_TO_PTR_RBP sbb qword ptr [rbp], rax
#define SBB_RAX_TO_PTR_RSP sbb qword ptr [rsp], rax
#define SBB_RAX_TO_PTR_R8 sbb qword ptr [r8], rax
#define SBB_RAX_TO_PTR_R9 sbb qword ptr [r9], rax
#define SBB_RAX_TO_PTR_R10 sbb qword ptr [r10], rax
#define SBB_RAX_TO_PTR_R11 sbb qword ptr [r11], rax
#define SBB_RAX_TO_PTR_R12 sbb qword ptr [r12], rax
#define SBB_RAX_TO_PTR_R13 sbb qword ptr [r13], rax
#define SBB_RAX_TO_PTR_R14 sbb qword ptr [r14], rax
#define SBB_RAX_TO_PTR_R15 sbb qword ptr [r15], rax
#define SBB_RAX_TO_PTR_EAX sbb qword ptr [eax], rax
#define SBB_RAX_TO_PTR_EBX sbb qword ptr [ebx], rax
#define SBB_RAX_TO_PTR_ECX sbb qword ptr [ecx], rax
#define SBB_RAX_TO_PTR_EDX sbb qword ptr [edx], rax
#define SBB_RAX_TO_PTR_EDI sbb qword ptr [edi], rax
#define SBB_RAX_TO_PTR_ESI sbb qword ptr [esi], rax
#define SBB_RAX_TO_PTR_EBP sbb qword ptr [ebp], rax
#define SBB_RAX_TO_PTR_ESP sbb qword ptr [esp], rax

#define SBB_RBX_TO_PTR_RAX sbb qword ptr [rax], rbx
#define SBB_RBX_TO_PTR_RBX sbb qword ptr [rbx], rbx
#define SBB_RBX_TO_PTR_RCX sbb qword ptr [rcx], rbx
#define SBB_RBX_TO_PTR_RDX sbb qword ptr [rdx], rbx
#define SBB_RBX_TO_PTR_RDI sbb qword ptr [rdi], rbx
#define SBB_RBX_TO_PTR_RSI sbb qword ptr [rsi], rbx
#define SBB_RBX_TO_PTR_RBP sbb qword ptr [rbp], rbx
#define SBB_RBX_TO_PTR_RSP sbb qword ptr [rsp], rbx
#define SBB_RBX_TO_PTR_R8 sbb qword ptr [r8], rbx
#define SBB_RBX_TO_PTR_R9 sbb qword ptr [r9], rbx
#define SBB_RBX_TO_PTR_R10 sbb qword ptr [r10], rbx
#define SBB_RBX_TO_PTR_R11 sbb qword ptr [r11], rbx
#define SBB_RBX_TO_PTR_R12 sbb qword ptr [r12], rbx
#define SBB_RBX_TO_PTR_R13 sbb qword ptr [r13], rbx
#define SBB_RBX_TO_PTR_R14 sbb qword ptr [r14], rbx
#define SBB_RBX_TO_PTR_R15 sbb qword ptr [r15], rbx
#define SBB_RBX_TO_PTR_EAX sbb qword ptr [eax], rbx
#define SBB_RBX_TO_PTR_EBX sbb qword ptr [ebx], rbx
#define SBB_RBX_TO_PTR_ECX sbb qword ptr [ecx], rbx
#define SBB_RBX_TO_PTR_EDX sbb qword ptr [edx], rbx
#define SBB_RBX_TO_PTR_EDI sbb qword ptr [edi], rbx
#define SBB_RBX_TO_PTR_ESI sbb qword ptr [esi], rbx
#define SBB_RBX_TO_PTR_EBP sbb qword ptr [ebp], rbx
#define SBB_RBX_TO_PTR_ESP sbb qword ptr [esp], rbx

#define SBB_RCX_TO_PTR_RAX sbb qword ptr [rax], rcx
#define SBB_RCX_TO_PTR_RBX sbb qword ptr [rbx], rcx
#define SBB_RCX_TO_PTR_RCX sbb qword ptr [rcx], rcx
#define SBB_RCX_TO_PTR_RDX sbb qword ptr [rdx], rcx
#define SBB_RCX_TO_PTR_RDI sbb qword ptr [rdi], rcx
#define SBB_RCX_TO_PTR_RSI sbb qword ptr [rsi], rcx
#define SBB_RCX_TO_PTR_RBP sbb qword ptr [rbp], rcx
#define SBB_RCX_TO_PTR_RSP sbb qword ptr [rsp], rcx
#define SBB_RCX_TO_PTR_R8 sbb qword ptr [r8], rcx
#define SBB_RCX_TO_PTR_R9 sbb qword ptr [r9], rcx
#define SBB_RCX_TO_PTR_R10 sbb qword ptr [r10], rcx
#define SBB_RCX_TO_PTR_R11 sbb qword ptr [r11], rcx
#define SBB_RCX_TO_PTR_R12 sbb qword ptr [r12], rcx
#define SBB_RCX_TO_PTR_R13 sbb qword ptr [r13], rcx
#define SBB_RCX_TO_PTR_R14 sbb qword ptr [r14], rcx
#define SBB_RCX_TO_PTR_R15 sbb qword ptr [r15], rcx
#define SBB_RCX_TO_PTR_EAX sbb qword ptr [eax], rcx
#define SBB_RCX_TO_PTR_EBX sbb qword ptr [ebx], rcx
#define SBB_RCX_TO_PTR_ECX sbb qword ptr [ecx], rcx
#define SBB_RCX_TO_PTR_EDX sbb qword ptr [edx], rcx
#define SBB_RCX_TO_PTR_EDI sbb qword ptr [edi], rcx
#define SBB_RCX_TO_PTR_ESI sbb qword ptr [esi], rcx
#define SBB_RCX_TO_PTR_EBP sbb qword ptr [ebp], rcx
#define SBB_RCX_TO_PTR_ESP sbb qword ptr [esp], rcx

#define SBB_RDX_TO_PTR_RAX sbb qword ptr [rax], rdx
#define SBB_RDX_TO_PTR_RBX sbb qword ptr [rbx], rdx
#define SBB_RDX_TO_PTR_RCX sbb qword ptr [rcx], rdx
#define SBB_RDX_TO_PTR_RDX sbb qword ptr [rdx], rdx
#define SBB_RDX_TO_PTR_RDI sbb qword ptr [rdi], rdx
#define SBB_RDX_TO_PTR_RSI sbb qword ptr [rsi], rdx
#define SBB_RDX_TO_PTR_RBP sbb qword ptr [rbp], rdx
#define SBB_RDX_TO_PTR_RSP sbb qword ptr [rsp], rdx
#define SBB_RDX_TO_PTR_R8 sbb qword ptr [r8], rdx
#define SBB_RDX_TO_PTR_R9 sbb qword ptr [r9], rdx
#define SBB_RDX_TO_PTR_R10 sbb qword ptr [r10], rdx
#define SBB_RDX_TO_PTR_R11 sbb qword ptr [r11], rdx
#define SBB_RDX_TO_PTR_R12 sbb qword ptr [r12], rdx
#define SBB_RDX_TO_PTR_R13 sbb qword ptr [r13], rdx
#define SBB_RDX_TO_PTR_R14 sbb qword ptr [r14], rdx
#define SBB_RDX_TO_PTR_R15 sbb qword ptr [r15], rdx
#define SBB_RDX_TO_PTR_EAX sbb qword ptr [eax], rdx
#define SBB_RDX_TO_PTR_EBX sbb qword ptr [ebx], rdx
#define SBB_RDX_TO_PTR_ECX sbb qword ptr [ecx], rdx
#define SBB_RDX_TO_PTR_EDX sbb qword ptr [edx], rdx
#define SBB_RDX_TO_PTR_EDI sbb qword ptr [edi], rdx
#define SBB_RDX_TO_PTR_ESI sbb qword ptr [esi], rdx
#define SBB_RDX_TO_PTR_EBP sbb qword ptr [ebp], rdx
#define SBB_RDX_TO_PTR_ESP sbb qword ptr [esp], rdx

#define SBB_RDI_TO_PTR_RAX sbb qword ptr [rax], rdi
#define SBB_RDI_TO_PTR_RBX sbb qword ptr [rbx], rdi
#define SBB_RDI_TO_PTR_RCX sbb qword ptr [rcx], rdi
#define SBB_RDI_TO_PTR_RDX sbb qword ptr [rdx], rdi
#define SBB_RDI_TO_PTR_RDI sbb qword ptr [rdi], rdi
#define SBB_RDI_TO_PTR_RSI sbb qword ptr [rsi], rdi
#define SBB_RDI_TO_PTR_RBP sbb qword ptr [rbp], rdi
#define SBB_RDI_TO_PTR_RSP sbb qword ptr [rsp], rdi
#define SBB_RDI_TO_PTR_R8 sbb qword ptr [r8], rdi
#define SBB_RDI_TO_PTR_R9 sbb qword ptr [r9], rdi
#define SBB_RDI_TO_PTR_R10 sbb qword ptr [r10], rdi
#define SBB_RDI_TO_PTR_R11 sbb qword ptr [r11], rdi
#define SBB_RDI_TO_PTR_R12 sbb qword ptr [r12], rdi
#define SBB_RDI_TO_PTR_R13 sbb qword ptr [r13], rdi
#define SBB_RDI_TO_PTR_R14 sbb qword ptr [r14], rdi
#define SBB_RDI_TO_PTR_R15 sbb qword ptr [r15], rdi
#define SBB_RDI_TO_PTR_EAX sbb qword ptr [eax], rdi
#define SBB_RDI_TO_PTR_EBX sbb qword ptr [ebx], rdi
#define SBB_RDI_TO_PTR_ECX sbb qword ptr [ecx], rdi
#define SBB_RDI_TO_PTR_EDX sbb qword ptr [edx], rdi
#define SBB_RDI_TO_PTR_EDI sbb qword ptr [edi], rdi
#define SBB_RDI_TO_PTR_ESI sbb qword ptr [esi], rdi
#define SBB_RDI_TO_PTR_EBP sbb qword ptr [ebp], rdi
#define SBB_RDI_TO_PTR_ESP sbb qword ptr [esp], rdi

#define SBB_RSI_TO_PTR_RAX sbb qword ptr [rax], rsi
#define SBB_RSI_TO_PTR_RBX sbb qword ptr [rbx], rsi
#define SBB_RSI_TO_PTR_RCX sbb qword ptr [rcx], rsi
#define SBB_RSI_TO_PTR_RDX sbb qword ptr [rdx], rsi
#define SBB_RSI_TO_PTR_RDI sbb qword ptr [rdi], rsi
#define SBB_RSI_TO_PTR_RSI sbb qword ptr [rsi], rsi
#define SBB_RSI_TO_PTR_RBP sbb qword ptr [rbp], rsi
#define SBB_RSI_TO_PTR_RSP sbb qword ptr [rsp], rsi
#define SBB_RSI_TO_PTR_R8 sbb qword ptr [r8], rsi
#define SBB_RSI_TO_PTR_R9 sbb qword ptr [r9], rsi
#define SBB_RSI_TO_PTR_R10 sbb qword ptr [r10], rsi
#define SBB_RSI_TO_PTR_R11 sbb qword ptr [r11], rsi
#define SBB_RSI_TO_PTR_R12 sbb qword ptr [r12], rsi
#define SBB_RSI_TO_PTR_R13 sbb qword ptr [r13], rsi
#define SBB_RSI_TO_PTR_R14 sbb qword ptr [r14], rsi
#define SBB_RSI_TO_PTR_R15 sbb qword ptr [r15], rsi
#define SBB_RSI_TO_PTR_EAX sbb qword ptr [eax], rsi
#define SBB_RSI_TO_PTR_EBX sbb qword ptr [ebx], rsi
#define SBB_RSI_TO_PTR_ECX sbb qword ptr [ecx], rsi
#define SBB_RSI_TO_PTR_EDX sbb qword ptr [edx], rsi
#define SBB_RSI_TO_PTR_EDI sbb qword ptr [edi], rsi
#define SBB_RSI_TO_PTR_ESI sbb qword ptr [esi], rsi
#define SBB_RSI_TO_PTR_EBP sbb qword ptr [ebp], rsi
#define SBB_RSI_TO_PTR_ESP sbb qword ptr [esp], rsi

#define SBB_RBP_TO_PTR_RAX sbb qword ptr [rax], rbp
#define SBB_RBP_TO_PTR_RBX sbb qword ptr [rbx], rbp
#define SBB_RBP_TO_PTR_RCX sbb qword ptr [rcx], rbp
#define SBB_RBP_TO_PTR_RDX sbb qword ptr [rdx], rbp
#define SBB_RBP_TO_PTR_RDI sbb qword ptr [rdi], rbp
#define SBB_RBP_TO_PTR_RSI sbb qword ptr [rsi], rbp
#define SBB_RBP_TO_PTR_RBP sbb qword ptr [rbp], rbp
#define SBB_RBP_TO_PTR_RSP sbb qword ptr [rsp], rbp
#define SBB_RBP_TO_PTR_R8 sbb qword ptr [r8], rbp
#define SBB_RBP_TO_PTR_R9 sbb qword ptr [r9], rbp
#define SBB_RBP_TO_PTR_R10 sbb qword ptr [r10], rbp
#define SBB_RBP_TO_PTR_R11 sbb qword ptr [r11], rbp
#define SBB_RBP_TO_PTR_R12 sbb qword ptr [r12], rbp
#define SBB_RBP_TO_PTR_R13 sbb qword ptr [r13], rbp
#define SBB_RBP_TO_PTR_R14 sbb qword ptr [r14], rbp
#define SBB_RBP_TO_PTR_R15 sbb qword ptr [r15], rbp
#define SBB_RBP_TO_PTR_EAX sbb qword ptr [eax], rbp
#define SBB_RBP_TO_PTR_EBX sbb qword ptr [ebx], rbp
#define SBB_RBP_TO_PTR_ECX sbb qword ptr [ecx], rbp
#define SBB_RBP_TO_PTR_EDX sbb qword ptr [edx], rbp
#define SBB_RBP_TO_PTR_EDI sbb qword ptr [edi], rbp
#define SBB_RBP_TO_PTR_ESI sbb qword ptr [esi], rbp
#define SBB_RBP_TO_PTR_EBP sbb qword ptr [ebp], rbp
#define SBB_RBP_TO_PTR_ESP sbb qword ptr [esp], rbp

#define SBB_RSP_TO_PTR_RAX sbb qword ptr [rax], rsp
#define SBB_RSP_TO_PTR_RBX sbb qword ptr [rbx], rsp
#define SBB_RSP_TO_PTR_RCX sbb qword ptr [rcx], rsp
#define SBB_RSP_TO_PTR_RDX sbb qword ptr [rdx], rsp
#define SBB_RSP_TO_PTR_RDI sbb qword ptr [rdi], rsp
#define SBB_RSP_TO_PTR_RSI sbb qword ptr [rsi], rsp
#define SBB_RSP_TO_PTR_RBP sbb qword ptr [rbp], rsp
#define SBB_RSP_TO_PTR_RSP sbb qword ptr [rsp], rsp
#define SBB_RSP_TO_PTR_R8 sbb qword ptr [r8], rsp
#define SBB_RSP_TO_PTR_R9 sbb qword ptr [r9], rsp
#define SBB_RSP_TO_PTR_R10 sbb qword ptr [r10], rsp
#define SBB_RSP_TO_PTR_R11 sbb qword ptr [r11], rsp
#define SBB_RSP_TO_PTR_R12 sbb qword ptr [r12], rsp
#define SBB_RSP_TO_PTR_R13 sbb qword ptr [r13], rsp
#define SBB_RSP_TO_PTR_R14 sbb qword ptr [r14], rsp
#define SBB_RSP_TO_PTR_R15 sbb qword ptr [r15], rsp
#define SBB_RSP_TO_PTR_EAX sbb qword ptr [eax], rsp
#define SBB_RSP_TO_PTR_EBX sbb qword ptr [ebx], rsp
#define SBB_RSP_TO_PTR_ECX sbb qword ptr [ecx], rsp
#define SBB_RSP_TO_PTR_EDX sbb qword ptr [edx], rsp
#define SBB_RSP_TO_PTR_EDI sbb qword ptr [edi], rsp
#define SBB_RSP_TO_PTR_ESI sbb qword ptr [esi], rsp
#define SBB_RSP_TO_PTR_EBP sbb qword ptr [ebp], rsp
#define SBB_RSP_TO_PTR_ESP sbb qword ptr [esp], rsp

#define SBB_R8_TO_PTR_RAX sbb qword ptr [rax], r8
#define SBB_R8_TO_PTR_RBX sbb qword ptr [rbx], r8
#define SBB_R8_TO_PTR_RCX sbb qword ptr [rcx], r8
#define SBB_R8_TO_PTR_RDX sbb qword ptr [rdx], r8
#define SBB_R8_TO_PTR_RDI sbb qword ptr [rdi], r8
#define SBB_R8_TO_PTR_RSI sbb qword ptr [rsi], r8
#define SBB_R8_TO_PTR_RBP sbb qword ptr [rbp], r8
#define SBB_R8_TO_PTR_RSP sbb qword ptr [rsp], r8
#define SBB_R8_TO_PTR_R8 sbb qword ptr [r8], r8
#define SBB_R8_TO_PTR_R9 sbb qword ptr [r9], r8
#define SBB_R8_TO_PTR_R10 sbb qword ptr [r10], r8
#define SBB_R8_TO_PTR_R11 sbb qword ptr [r11], r8
#define SBB_R8_TO_PTR_R12 sbb qword ptr [r12], r8
#define SBB_R8_TO_PTR_R13 sbb qword ptr [r13], r8
#define SBB_R8_TO_PTR_R14 sbb qword ptr [r14], r8
#define SBB_R8_TO_PTR_R15 sbb qword ptr [r15], r8
#define SBB_R8_TO_PTR_EAX sbb qword ptr [eax], r8
#define SBB_R8_TO_PTR_EBX sbb qword ptr [ebx], r8
#define SBB_R8_TO_PTR_ECX sbb qword ptr [ecx], r8
#define SBB_R8_TO_PTR_EDX sbb qword ptr [edx], r8
#define SBB_R8_TO_PTR_EDI sbb qword ptr [edi], r8
#define SBB_R8_TO_PTR_ESI sbb qword ptr [esi], r8
#define SBB_R8_TO_PTR_EBP sbb qword ptr [ebp], r8
#define SBB_R8_TO_PTR_ESP sbb qword ptr [esp], r8

#define SBB_R9_TO_PTR_RAX sbb qword ptr [rax], r9
#define SBB_R9_TO_PTR_RBX sbb qword ptr [rbx], r9
#define SBB_R9_TO_PTR_RCX sbb qword ptr [rcx], r9
#define SBB_R9_TO_PTR_RDX sbb qword ptr [rdx], r9
#define SBB_R9_TO_PTR_RDI sbb qword ptr [rdi], r9
#define SBB_R9_TO_PTR_RSI sbb qword ptr [rsi], r9
#define SBB_R9_TO_PTR_RBP sbb qword ptr [rbp], r9
#define SBB_R9_TO_PTR_RSP sbb qword ptr [rsp], r9
#define SBB_R9_TO_PTR_R8 sbb qword ptr [r8], r9
#define SBB_R9_TO_PTR_R9 sbb qword ptr [r9], r9
#define SBB_R9_TO_PTR_R10 sbb qword ptr [r10], r9
#define SBB_R9_TO_PTR_R11 sbb qword ptr [r11], r9
#define SBB_R9_TO_PTR_R12 sbb qword ptr [r12], r9
#define SBB_R9_TO_PTR_R13 sbb qword ptr [r13], r9
#define SBB_R9_TO_PTR_R14 sbb qword ptr [r14], r9
#define SBB_R9_TO_PTR_R15 sbb qword ptr [r15], r9
#define SBB_R9_TO_PTR_EAX sbb qword ptr [eax], r9
#define SBB_R9_TO_PTR_EBX sbb qword ptr [ebx], r9
#define SBB_R9_TO_PTR_ECX sbb qword ptr [ecx], r9
#define SBB_R9_TO_PTR_EDX sbb qword ptr [edx], r9
#define SBB_R9_TO_PTR_EDI sbb qword ptr [edi], r9
#define SBB_R9_TO_PTR_ESI sbb qword ptr [esi], r9
#define SBB_R9_TO_PTR_EBP sbb qword ptr [ebp], r9
#define SBB_R9_TO_PTR_ESP sbb qword ptr [esp], r9

#define SBB_R10_TO_PTR_RAX sbb qword ptr [rax], r10
#define SBB_R10_TO_PTR_RBX sbb qword ptr [rbx], r10
#define SBB_R10_TO_PTR_RCX sbb qword ptr [rcx], r10
#define SBB_R10_TO_PTR_RDX sbb qword ptr [rdx], r10
#define SBB_R10_TO_PTR_RDI sbb qword ptr [rdi], r10
#define SBB_R10_TO_PTR_RSI sbb qword ptr [rsi], r10
#define SBB_R10_TO_PTR_RBP sbb qword ptr [rbp], r10
#define SBB_R10_TO_PTR_RSP sbb qword ptr [rsp], r10
#define SBB_R10_TO_PTR_R8 sbb qword ptr [r8], r10
#define SBB_R10_TO_PTR_R9 sbb qword ptr [r9], r10
#define SBB_R10_TO_PTR_R10 sbb qword ptr [r10], r10
#define SBB_R10_TO_PTR_R11 sbb qword ptr [r11], r10
#define SBB_R10_TO_PTR_R12 sbb qword ptr [r12], r10
#define SBB_R10_TO_PTR_R13 sbb qword ptr [r13], r10
#define SBB_R10_TO_PTR_R14 sbb qword ptr [r14], r10
#define SBB_R10_TO_PTR_R15 sbb qword ptr [r15], r10
#define SBB_R10_TO_PTR_EAX sbb qword ptr [eax], r10
#define SBB_R10_TO_PTR_EBX sbb qword ptr [ebx], r10
#define SBB_R10_TO_PTR_ECX sbb qword ptr [ecx], r10
#define SBB_R10_TO_PTR_EDX sbb qword ptr [edx], r10
#define SBB_R10_TO_PTR_EDI sbb qword ptr [edi], r10
#define SBB_R10_TO_PTR_ESI sbb qword ptr [esi], r10
#define SBB_R10_TO_PTR_EBP sbb qword ptr [ebp], r10
#define SBB_R10_TO_PTR_ESP sbb qword ptr [esp], r10

#define SBB_R11_TO_PTR_RAX sbb qword ptr [rax], r11
#define SBB_R11_TO_PTR_RBX sbb qword ptr [rbx], r11
#define SBB_R11_TO_PTR_RCX sbb qword ptr [rcx], r11
#define SBB_R11_TO_PTR_RDX sbb qword ptr [rdx], r11
#define SBB_R11_TO_PTR_RDI sbb qword ptr [rdi], r11
#define SBB_R11_TO_PTR_RSI sbb qword ptr [rsi], r11
#define SBB_R11_TO_PTR_RBP sbb qword ptr [rbp], r11
#define SBB_R11_TO_PTR_RSP sbb qword ptr [rsp], r11
#define SBB_R11_TO_PTR_R8 sbb qword ptr [r8], r11
#define SBB_R11_TO_PTR_R9 sbb qword ptr [r9], r11
#define SBB_R11_TO_PTR_R10 sbb qword ptr [r10], r11
#define SBB_R11_TO_PTR_R11 sbb qword ptr [r11], r11
#define SBB_R11_TO_PTR_R12 sbb qword ptr [r12], r11
#define SBB_R11_TO_PTR_R13 sbb qword ptr [r13], r11
#define SBB_R11_TO_PTR_R14 sbb qword ptr [r14], r11
#define SBB_R11_TO_PTR_R15 sbb qword ptr [r15], r11
#define SBB_R11_TO_PTR_EAX sbb qword ptr [eax], r11
#define SBB_R11_TO_PTR_EBX sbb qword ptr [ebx], r11
#define SBB_R11_TO_PTR_ECX sbb qword ptr [ecx], r11
#define SBB_R11_TO_PTR_EDX sbb qword ptr [edx], r11
#define SBB_R11_TO_PTR_EDI sbb qword ptr [edi], r11
#define SBB_R11_TO_PTR_ESI sbb qword ptr [esi], r11
#define SBB_R11_TO_PTR_EBP sbb qword ptr [ebp], r11
#define SBB_R11_TO_PTR_ESP sbb qword ptr [esp], r11

#define SBB_R12_TO_PTR_RAX sbb qword ptr [rax], r12
#define SBB_R12_TO_PTR_RBX sbb qword ptr [rbx], r12
#define SBB_R12_TO_PTR_RCX sbb qword ptr [rcx], r12
#define SBB_R12_TO_PTR_RDX sbb qword ptr [rdx], r12
#define SBB_R12_TO_PTR_RDI sbb qword ptr [rdi], r12
#define SBB_R12_TO_PTR_RSI sbb qword ptr [rsi], r12
#define SBB_R12_TO_PTR_RBP sbb qword ptr [rbp], r12
#define SBB_R12_TO_PTR_RSP sbb qword ptr [rsp], r12
#define SBB_R12_TO_PTR_R8 sbb qword ptr [r8], r12
#define SBB_R12_TO_PTR_R9 sbb qword ptr [r9], r12
#define SBB_R12_TO_PTR_R10 sbb qword ptr [r10], r12
#define SBB_R12_TO_PTR_R11 sbb qword ptr [r11], r12
#define SBB_R12_TO_PTR_R12 sbb qword ptr [r12], r12
#define SBB_R12_TO_PTR_R13 sbb qword ptr [r13], r12
#define SBB_R12_TO_PTR_R14 sbb qword ptr [r14], r12
#define SBB_R12_TO_PTR_R15 sbb qword ptr [r15], r12
#define SBB_R12_TO_PTR_EAX sbb qword ptr [eax], r12
#define SBB_R12_TO_PTR_EBX sbb qword ptr [ebx], r12
#define SBB_R12_TO_PTR_ECX sbb qword ptr [ecx], r12
#define SBB_R12_TO_PTR_EDX sbb qword ptr [edx], r12
#define SBB_R12_TO_PTR_EDI sbb qword ptr [edi], r12
#define SBB_R12_TO_PTR_ESI sbb qword ptr [esi], r12
#define SBB_R12_TO_PTR_EBP sbb qword ptr [ebp], r12
#define SBB_R12_TO_PTR_ESP sbb qword ptr [esp], r12

#define SBB_R13_TO_PTR_RAX sbb qword ptr [rax], r13
#define SBB_R13_TO_PTR_RBX sbb qword ptr [rbx], r13
#define SBB_R13_TO_PTR_RCX sbb qword ptr [rcx], r13
#define SBB_R13_TO_PTR_RDX sbb qword ptr [rdx], r13
#define SBB_R13_TO_PTR_RDI sbb qword ptr [rdi], r13
#define SBB_R13_TO_PTR_RSI sbb qword ptr [rsi], r13
#define SBB_R13_TO_PTR_RBP sbb qword ptr [rbp], r13
#define SBB_R13_TO_PTR_RSP sbb qword ptr [rsp], r13
#define SBB_R13_TO_PTR_R8 sbb qword ptr [r8], r13
#define SBB_R13_TO_PTR_R9 sbb qword ptr [r9], r13
#define SBB_R13_TO_PTR_R10 sbb qword ptr [r10], r13
#define SBB_R13_TO_PTR_R11 sbb qword ptr [r11], r13
#define SBB_R13_TO_PTR_R12 sbb qword ptr [r12], r13
#define SBB_R13_TO_PTR_R13 sbb qword ptr [r13], r13
#define SBB_R13_TO_PTR_R14 sbb qword ptr [r14], r13
#define SBB_R13_TO_PTR_R15 sbb qword ptr [r15], r13
#define SBB_R13_TO_PTR_EAX sbb qword ptr [eax], r13
#define SBB_R13_TO_PTR_EBX sbb qword ptr [ebx], r13
#define SBB_R13_TO_PTR_ECX sbb qword ptr [ecx], r13
#define SBB_R13_TO_PTR_EDX sbb qword ptr [edx], r13
#define SBB_R13_TO_PTR_EDI sbb qword ptr [edi], r13
#define SBB_R13_TO_PTR_ESI sbb qword ptr [esi], r13
#define SBB_R13_TO_PTR_EBP sbb qword ptr [ebp], r13
#define SBB_R13_TO_PTR_ESP sbb qword ptr [esp], r13

#define SBB_R14_TO_PTR_RAX sbb qword ptr [rax], r14
#define SBB_R14_TO_PTR_RBX sbb qword ptr [rbx], r14
#define SBB_R14_TO_PTR_RCX sbb qword ptr [rcx], r14
#define SBB_R14_TO_PTR_RDX sbb qword ptr [rdx], r14
#define SBB_R14_TO_PTR_RDI sbb qword ptr [rdi], r14
#define SBB_R14_TO_PTR_RSI sbb qword ptr [rsi], r14
#define SBB_R14_TO_PTR_RBP sbb qword ptr [rbp], r14
#define SBB_R14_TO_PTR_RSP sbb qword ptr [rsp], r14
#define SBB_R14_TO_PTR_R8 sbb qword ptr [r8], r14
#define SBB_R14_TO_PTR_R9 sbb qword ptr [r9], r14
#define SBB_R14_TO_PTR_R10 sbb qword ptr [r10], r14
#define SBB_R14_TO_PTR_R11 sbb qword ptr [r11], r14
#define SBB_R14_TO_PTR_R12 sbb qword ptr [r12], r14
#define SBB_R14_TO_PTR_R13 sbb qword ptr [r13], r14
#define SBB_R14_TO_PTR_R14 sbb qword ptr [r14], r14
#define SBB_R14_TO_PTR_R15 sbb qword ptr [r15], r14
#define SBB_R14_TO_PTR_EAX sbb qword ptr [eax], r14
#define SBB_R14_TO_PTR_EBX sbb qword ptr [ebx], r14
#define SBB_R14_TO_PTR_ECX sbb qword ptr [ecx], r14
#define SBB_R14_TO_PTR_EDX sbb qword ptr [edx], r14
#define SBB_R14_TO_PTR_EDI sbb qword ptr [edi], r14
#define SBB_R14_TO_PTR_ESI sbb qword ptr [esi], r14
#define SBB_R14_TO_PTR_EBP sbb qword ptr [ebp], r14
#define SBB_R14_TO_PTR_ESP sbb qword ptr [esp], r14

#define SBB_R15_TO_PTR_RAX sbb qword ptr [rax], r15
#define SBB_R15_TO_PTR_RBX sbb qword ptr [rbx], r15
#define SBB_R15_TO_PTR_RCX sbb qword ptr [rcx], r15
#define SBB_R15_TO_PTR_RDX sbb qword ptr [rdx], r15
#define SBB_R15_TO_PTR_RDI sbb qword ptr [rdi], r15
#define SBB_R15_TO_PTR_RSI sbb qword ptr [rsi], r15
#define SBB_R15_TO_PTR_RBP sbb qword ptr [rbp], r15
#define SBB_R15_TO_PTR_RSP sbb qword ptr [rsp], r15
#define SBB_R15_TO_PTR_R8 sbb qword ptr [r8], r15
#define SBB_R15_TO_PTR_R9 sbb qword ptr [r9], r15
#define SBB_R15_TO_PTR_R10 sbb qword ptr [r10], r15
#define SBB_R15_TO_PTR_R11 sbb qword ptr [r11], r15
#define SBB_R15_TO_PTR_R12 sbb qword ptr [r12], r15
#define SBB_R15_TO_PTR_R13 sbb qword ptr [r13], r15
#define SBB_R15_TO_PTR_R14 sbb qword ptr [r14], r15
#define SBB_R15_TO_PTR_R15 sbb qword ptr [r15], r15
#define SBB_R15_TO_PTR_EAX sbb qword ptr [eax], r15
#define SBB_R15_TO_PTR_EBX sbb qword ptr [ebx], r15
#define SBB_R15_TO_PTR_ECX sbb qword ptr [ecx], r15
#define SBB_R15_TO_PTR_EDX sbb qword ptr [edx], r15
#define SBB_R15_TO_PTR_EDI sbb qword ptr [edi], r15
#define SBB_R15_TO_PTR_ESI sbb qword ptr [esi], r15
#define SBB_R15_TO_PTR_EBP sbb qword ptr [ebp], r15
#define SBB_R15_TO_PTR_ESP sbb qword ptr [esp], r15

#define SBB_RAX_FROM_PTR_RAX_(VALUE) sbb rax, qword ptr [rax + VALUE]
#define SBB_RAX_FROM_PTR_RBX_(VALUE) sbb rax, qword ptr [rbx + VALUE]
#define SBB_RAX_FROM_PTR_RCX_(VALUE) sbb rax, qword ptr [rcx + VALUE]
#define SBB_RAX_FROM_PTR_RDX_(VALUE) sbb rax, qword ptr [rdx + VALUE]
#define SBB_RAX_FROM_PTR_RDI_(VALUE) sbb rax, qword ptr [rdi + VALUE]
#define SBB_RAX_FROM_PTR_RSI_(VALUE) sbb rax, qword ptr [rsi + VALUE]
#define SBB_RAX_FROM_PTR_RBP_(VALUE) sbb rax, qword ptr [rbp + VALUE]
#define SBB_RAX_FROM_PTR_RSP_(VALUE) sbb rax, qword ptr [rsp + VALUE]
#define SBB_RAX_FROM_PTR_R8_(VALUE) sbb rax, qword ptr [r8 + VALUE]
#define SBB_RAX_FROM_PTR_R9_(VALUE) sbb rax, qword ptr [r9 + VALUE]
#define SBB_RAX_FROM_PTR_R10_(VALUE) sbb rax, qword ptr [r10 + VALUE]
#define SBB_RAX_FROM_PTR_R11_(VALUE) sbb rax, qword ptr [r11 + VALUE]
#define SBB_RAX_FROM_PTR_R12_(VALUE) sbb rax, qword ptr [r12 + VALUE]
#define SBB_RAX_FROM_PTR_R13_(VALUE) sbb rax, qword ptr [r13 + VALUE]
#define SBB_RAX_FROM_PTR_R14_(VALUE) sbb rax, qword ptr [r14 + VALUE]
#define SBB_RAX_FROM_PTR_R15_(VALUE) sbb rax, qword ptr [r15 + VALUE]
#define SBB_RAX_FROM_PTR_EAX_(VALUE) sbb rax, qword ptr [eax + VALUE]
#define SBB_RAX_FROM_PTR_EBX_(VALUE) sbb rax, qword ptr [ebx + VALUE]
#define SBB_RAX_FROM_PTR_ECX_(VALUE) sbb rax, qword ptr [ecx + VALUE]
#define SBB_RAX_FROM_PTR_EDX_(VALUE) sbb rax, qword ptr [edx + VALUE]
#define SBB_RAX_FROM_PTR_EDI_(VALUE) sbb rax, qword ptr [edi + VALUE]
#define SBB_RAX_FROM_PTR_ESI_(VALUE) sbb rax, qword ptr [esi + VALUE]
#define SBB_RAX_FROM_PTR_EBP_(VALUE) sbb rax, qword ptr [ebp + VALUE]
#define SBB_RAX_FROM_PTR_ESP_(VALUE) sbb rax, qword ptr [esp + VALUE]

#define SBB_RBX_FROM_PTR_RAX_(VALUE) sbb rbx, qword ptr [rax + VALUE]
#define SBB_RBX_FROM_PTR_RBX_(VALUE) sbb rbx, qword ptr [rbx + VALUE]
#define SBB_RBX_FROM_PTR_RCX_(VALUE) sbb rbx, qword ptr [rcx + VALUE]
#define SBB_RBX_FROM_PTR_RDX_(VALUE) sbb rbx, qword ptr [rdx + VALUE]
#define SBB_RBX_FROM_PTR_RDI_(VALUE) sbb rbx, qword ptr [rdi + VALUE]
#define SBB_RBX_FROM_PTR_RSI_(VALUE) sbb rbx, qword ptr [rsi + VALUE]
#define SBB_RBX_FROM_PTR_RBP_(VALUE) sbb rbx, qword ptr [rbp + VALUE]
#define SBB_RBX_FROM_PTR_RSP_(VALUE) sbb rbx, qword ptr [rsp + VALUE]
#define SBB_RBX_FROM_PTR_R8_(VALUE) sbb rbx, qword ptr [r8 + VALUE]
#define SBB_RBX_FROM_PTR_R9_(VALUE) sbb rbx, qword ptr [r9 + VALUE]
#define SBB_RBX_FROM_PTR_R10_(VALUE) sbb rbx, qword ptr [r10 + VALUE]
#define SBB_RBX_FROM_PTR_R11_(VALUE) sbb rbx, qword ptr [r11 + VALUE]
#define SBB_RBX_FROM_PTR_R12_(VALUE) sbb rbx, qword ptr [r12 + VALUE]
#define SBB_RBX_FROM_PTR_R13_(VALUE) sbb rbx, qword ptr [r13 + VALUE]
#define SBB_RBX_FROM_PTR_R14_(VALUE) sbb rbx, qword ptr [r14 + VALUE]
#define SBB_RBX_FROM_PTR_R15_(VALUE) sbb rbx, qword ptr [r15 + VALUE]
#define SBB_RBX_FROM_PTR_EAX_(VALUE) sbb rbx, qword ptr [eax + VALUE]
#define SBB_RBX_FROM_PTR_EBX_(VALUE) sbb rbx, qword ptr [ebx + VALUE]
#define SBB_RBX_FROM_PTR_ECX_(VALUE) sbb rbx, qword ptr [ecx + VALUE]
#define SBB_RBX_FROM_PTR_EDX_(VALUE) sbb rbx, qword ptr [edx + VALUE]
#define SBB_RBX_FROM_PTR_EDI_(VALUE) sbb rbx, qword ptr [edi + VALUE]
#define SBB_RBX_FROM_PTR_ESI_(VALUE) sbb rbx, qword ptr [esi + VALUE]
#define SBB_RBX_FROM_PTR_EBP_(VALUE) sbb rbx, qword ptr [ebp + VALUE]
#define SBB_RBX_FROM_PTR_ESP_(VALUE) sbb rbx, qword ptr [esp + VALUE]

#define SBB_RCX_FROM_PTR_RAX_(VALUE) sbb rcx, qword ptr [rax + VALUE]
#define SBB_RCX_FROM_PTR_RBX_(VALUE) sbb rcx, qword ptr [rbx + VALUE]
#define SBB_RCX_FROM_PTR_RCX_(VALUE) sbb rcx, qword ptr [rcx + VALUE]
#define SBB_RCX_FROM_PTR_RDX_(VALUE) sbb rcx, qword ptr [rdx + VALUE]
#define SBB_RCX_FROM_PTR_RDI_(VALUE) sbb rcx, qword ptr [rdi + VALUE]
#define SBB_RCX_FROM_PTR_RSI_(VALUE) sbb rcx, qword ptr [rsi + VALUE]
#define SBB_RCX_FROM_PTR_RBP_(VALUE) sbb rcx, qword ptr [rbp + VALUE]
#define SBB_RCX_FROM_PTR_RSP_(VALUE) sbb rcx, qword ptr [rsp + VALUE]
#define SBB_RCX_FROM_PTR_R8_(VALUE) sbb rcx, qword ptr [r8 + VALUE]
#define SBB_RCX_FROM_PTR_R9_(VALUE) sbb rcx, qword ptr [r9 + VALUE]
#define SBB_RCX_FROM_PTR_R10_(VALUE) sbb rcx, qword ptr [r10 + VALUE]
#define SBB_RCX_FROM_PTR_R11_(VALUE) sbb rcx, qword ptr [r11 + VALUE]
#define SBB_RCX_FROM_PTR_R12_(VALUE) sbb rcx, qword ptr [r12 + VALUE]
#define SBB_RCX_FROM_PTR_R13_(VALUE) sbb rcx, qword ptr [r13 + VALUE]
#define SBB_RCX_FROM_PTR_R14_(VALUE) sbb rcx, qword ptr [r14 + VALUE]
#define SBB_RCX_FROM_PTR_R15_(VALUE) sbb rcx, qword ptr [r15 + VALUE]
#define SBB_RCX_FROM_PTR_EAX_(VALUE) sbb rcx, qword ptr [eax + VALUE]
#define SBB_RCX_FROM_PTR_EBX_(VALUE) sbb rcx, qword ptr [ebx + VALUE]
#define SBB_RCX_FROM_PTR_ECX_(VALUE) sbb rcx, qword ptr [ecx + VALUE]
#define SBB_RCX_FROM_PTR_EDX_(VALUE) sbb rcx, qword ptr [edx + VALUE]
#define SBB_RCX_FROM_PTR_EDI_(VALUE) sbb rcx, qword ptr [edi + VALUE]
#define SBB_RCX_FROM_PTR_ESI_(VALUE) sbb rcx, qword ptr [esi + VALUE]
#define SBB_RCX_FROM_PTR_EBP_(VALUE) sbb rcx, qword ptr [ebp + VALUE]
#define SBB_RCX_FROM_PTR_ESP_(VALUE) sbb rcx, qword ptr [esp + VALUE]

#define SBB_RDX_FROM_PTR_RAX_(VALUE) sbb rdx, qword ptr [rax + VALUE]
#define SBB_RDX_FROM_PTR_RBX_(VALUE) sbb rdx, qword ptr [rbx + VALUE]
#define SBB_RDX_FROM_PTR_RCX_(VALUE) sbb rdx, qword ptr [rcx + VALUE]
#define SBB_RDX_FROM_PTR_RDX_(VALUE) sbb rdx, qword ptr [rdx + VALUE]
#define SBB_RDX_FROM_PTR_RDI_(VALUE) sbb rdx, qword ptr [rdi + VALUE]
#define SBB_RDX_FROM_PTR_RSI_(VALUE) sbb rdx, qword ptr [rsi + VALUE]
#define SBB_RDX_FROM_PTR_RBP_(VALUE) sbb rdx, qword ptr [rbp + VALUE]
#define SBB_RDX_FROM_PTR_RSP_(VALUE) sbb rdx, qword ptr [rsp + VALUE]
#define SBB_RDX_FROM_PTR_R8_(VALUE) sbb rdx, qword ptr [r8 + VALUE]
#define SBB_RDX_FROM_PTR_R9_(VALUE) sbb rdx, qword ptr [r9 + VALUE]
#define SBB_RDX_FROM_PTR_R10_(VALUE) sbb rdx, qword ptr [r10 + VALUE]
#define SBB_RDX_FROM_PTR_R11_(VALUE) sbb rdx, qword ptr [r11 + VALUE]
#define SBB_RDX_FROM_PTR_R12_(VALUE) sbb rdx, qword ptr [r12 + VALUE]
#define SBB_RDX_FROM_PTR_R13_(VALUE) sbb rdx, qword ptr [r13 + VALUE]
#define SBB_RDX_FROM_PTR_R14_(VALUE) sbb rdx, qword ptr [r14 + VALUE]
#define SBB_RDX_FROM_PTR_R15_(VALUE) sbb rdx, qword ptr [r15 + VALUE]
#define SBB_RDX_FROM_PTR_EAX_(VALUE) sbb rdx, qword ptr [eax + VALUE]
#define SBB_RDX_FROM_PTR_EBX_(VALUE) sbb rdx, qword ptr [ebx + VALUE]
#define SBB_RDX_FROM_PTR_ECX_(VALUE) sbb rdx, qword ptr [ecx + VALUE]
#define SBB_RDX_FROM_PTR_EDX_(VALUE) sbb rdx, qword ptr [edx + VALUE]
#define SBB_RDX_FROM_PTR_EDI_(VALUE) sbb rdx, qword ptr [edi + VALUE]
#define SBB_RDX_FROM_PTR_ESI_(VALUE) sbb rdx, qword ptr [esi + VALUE]
#define SBB_RDX_FROM_PTR_EBP_(VALUE) sbb rdx, qword ptr [ebp + VALUE]
#define SBB_RDX_FROM_PTR_ESP_(VALUE) sbb rdx, qword ptr [esp + VALUE]

#define SBB_RDI_FROM_PTR_RAX_(VALUE) sbb rdi, qword ptr [rax + VALUE]
#define SBB_RDI_FROM_PTR_RBX_(VALUE) sbb rdi, qword ptr [rbx + VALUE]
#define SBB_RDI_FROM_PTR_RCX_(VALUE) sbb rdi, qword ptr [rcx + VALUE]
#define SBB_RDI_FROM_PTR_RDX_(VALUE) sbb rdi, qword ptr [rdx + VALUE]
#define SBB_RDI_FROM_PTR_RDI_(VALUE) sbb rdi, qword ptr [rdi + VALUE]
#define SBB_RDI_FROM_PTR_RSI_(VALUE) sbb rdi, qword ptr [rsi + VALUE]
#define SBB_RDI_FROM_PTR_RBP_(VALUE) sbb rdi, qword ptr [rbp + VALUE]
#define SBB_RDI_FROM_PTR_RSP_(VALUE) sbb rdi, qword ptr [rsp + VALUE]
#define SBB_RDI_FROM_PTR_R8_(VALUE) sbb rdi, qword ptr [r8 + VALUE]
#define SBB_RDI_FROM_PTR_R9_(VALUE) sbb rdi, qword ptr [r9 + VALUE]
#define SBB_RDI_FROM_PTR_R10_(VALUE) sbb rdi, qword ptr [r10 + VALUE]
#define SBB_RDI_FROM_PTR_R11_(VALUE) sbb rdi, qword ptr [r11 + VALUE]
#define SBB_RDI_FROM_PTR_R12_(VALUE) sbb rdi, qword ptr [r12 + VALUE]
#define SBB_RDI_FROM_PTR_R13_(VALUE) sbb rdi, qword ptr [r13 + VALUE]
#define SBB_RDI_FROM_PTR_R14_(VALUE) sbb rdi, qword ptr [r14 + VALUE]
#define SBB_RDI_FROM_PTR_R15_(VALUE) sbb rdi, qword ptr [r15 + VALUE]
#define SBB_RDI_FROM_PTR_EAX_(VALUE) sbb rdi, qword ptr [eax + VALUE]
#define SBB_RDI_FROM_PTR_EBX_(VALUE) sbb rdi, qword ptr [ebx + VALUE]
#define SBB_RDI_FROM_PTR_ECX_(VALUE) sbb rdi, qword ptr [ecx + VALUE]
#define SBB_RDI_FROM_PTR_EDX_(VALUE) sbb rdi, qword ptr [edx + VALUE]
#define SBB_RDI_FROM_PTR_EDI_(VALUE) sbb rdi, qword ptr [edi + VALUE]
#define SBB_RDI_FROM_PTR_ESI_(VALUE) sbb rdi, qword ptr [esi + VALUE]
#define SBB_RDI_FROM_PTR_EBP_(VALUE) sbb rdi, qword ptr [ebp + VALUE]
#define SBB_RDI_FROM_PTR_ESP_(VALUE) sbb rdi, qword ptr [esp + VALUE]

#define SBB_RSI_FROM_PTR_RAX_(VALUE) sbb rsi, qword ptr [rax + VALUE]
#define SBB_RSI_FROM_PTR_RBX_(VALUE) sbb rsi, qword ptr [rbx + VALUE]
#define SBB_RSI_FROM_PTR_RCX_(VALUE) sbb rsi, qword ptr [rcx + VALUE]
#define SBB_RSI_FROM_PTR_RDX_(VALUE) sbb rsi, qword ptr [rdx + VALUE]
#define SBB_RSI_FROM_PTR_RDI_(VALUE) sbb rsi, qword ptr [rdi + VALUE]
#define SBB_RSI_FROM_PTR_RSI_(VALUE) sbb rsi, qword ptr [rsi + VALUE]
#define SBB_RSI_FROM_PTR_RBP_(VALUE) sbb rsi, qword ptr [rbp + VALUE]
#define SBB_RSI_FROM_PTR_RSP_(VALUE) sbb rsi, qword ptr [rsp + VALUE]
#define SBB_RSI_FROM_PTR_R8_(VALUE) sbb rsi, qword ptr [r8 + VALUE]
#define SBB_RSI_FROM_PTR_R9_(VALUE) sbb rsi, qword ptr [r9 + VALUE]
#define SBB_RSI_FROM_PTR_R10_(VALUE) sbb rsi, qword ptr [r10 + VALUE]
#define SBB_RSI_FROM_PTR_R11_(VALUE) sbb rsi, qword ptr [r11 + VALUE]
#define SBB_RSI_FROM_PTR_R12_(VALUE) sbb rsi, qword ptr [r12 + VALUE]
#define SBB_RSI_FROM_PTR_R13_(VALUE) sbb rsi, qword ptr [r13 + VALUE]
#define SBB_RSI_FROM_PTR_R14_(VALUE) sbb rsi, qword ptr [r14 + VALUE]
#define SBB_RSI_FROM_PTR_R15_(VALUE) sbb rsi, qword ptr [r15 + VALUE]
#define SBB_RSI_FROM_PTR_EAX_(VALUE) sbb rsi, qword ptr [eax + VALUE]
#define SBB_RSI_FROM_PTR_EBX_(VALUE) sbb rsi, qword ptr [ebx + VALUE]
#define SBB_RSI_FROM_PTR_ECX_(VALUE) sbb rsi, qword ptr [ecx + VALUE]
#define SBB_RSI_FROM_PTR_EDX_(VALUE) sbb rsi, qword ptr [edx + VALUE]
#define SBB_RSI_FROM_PTR_EDI_(VALUE) sbb rsi, qword ptr [edi + VALUE]
#define SBB_RSI_FROM_PTR_ESI_(VALUE) sbb rsi, qword ptr [esi + VALUE]
#define SBB_RSI_FROM_PTR_EBP_(VALUE) sbb rsi, qword ptr [ebp + VALUE]
#define SBB_RSI_FROM_PTR_ESP_(VALUE) sbb rsi, qword ptr [esp + VALUE]

#define SBB_RBP_FROM_PTR_RAX_(VALUE) sbb rbp, qword ptr [rax + VALUE]
#define SBB_RBP_FROM_PTR_RBX_(VALUE) sbb rbp, qword ptr [rbx + VALUE]
#define SBB_RBP_FROM_PTR_RCX_(VALUE) sbb rbp, qword ptr [rcx + VALUE]
#define SBB_RBP_FROM_PTR_RDX_(VALUE) sbb rbp, qword ptr [rdx + VALUE]
#define SBB_RBP_FROM_PTR_RDI_(VALUE) sbb rbp, qword ptr [rdi + VALUE]
#define SBB_RBP_FROM_PTR_RSI_(VALUE) sbb rbp, qword ptr [rsi + VALUE]
#define SBB_RBP_FROM_PTR_RBP_(VALUE) sbb rbp, qword ptr [rbp + VALUE]
#define SBB_RBP_FROM_PTR_RSP_(VALUE) sbb rbp, qword ptr [rsp + VALUE]
#define SBB_RBP_FROM_PTR_R8_(VALUE) sbb rbp, qword ptr [r8 + VALUE]
#define SBB_RBP_FROM_PTR_R9_(VALUE) sbb rbp, qword ptr [r9 + VALUE]
#define SBB_RBP_FROM_PTR_R10_(VALUE) sbb rbp, qword ptr [r10 + VALUE]
#define SBB_RBP_FROM_PTR_R11_(VALUE) sbb rbp, qword ptr [r11 + VALUE]
#define SBB_RBP_FROM_PTR_R12_(VALUE) sbb rbp, qword ptr [r12 + VALUE]
#define SBB_RBP_FROM_PTR_R13_(VALUE) sbb rbp, qword ptr [r13 + VALUE]
#define SBB_RBP_FROM_PTR_R14_(VALUE) sbb rbp, qword ptr [r14 + VALUE]
#define SBB_RBP_FROM_PTR_R15_(VALUE) sbb rbp, qword ptr [r15 + VALUE]
#define SBB_RBP_FROM_PTR_EAX_(VALUE) sbb rbp, qword ptr [eax + VALUE]
#define SBB_RBP_FROM_PTR_EBX_(VALUE) sbb rbp, qword ptr [ebx + VALUE]
#define SBB_RBP_FROM_PTR_ECX_(VALUE) sbb rbp, qword ptr [ecx + VALUE]
#define SBB_RBP_FROM_PTR_EDX_(VALUE) sbb rbp, qword ptr [edx + VALUE]
#define SBB_RBP_FROM_PTR_EDI_(VALUE) sbb rbp, qword ptr [edi + VALUE]
#define SBB_RBP_FROM_PTR_ESI_(VALUE) sbb rbp, qword ptr [esi + VALUE]
#define SBB_RBP_FROM_PTR_EBP_(VALUE) sbb rbp, qword ptr [ebp + VALUE]
#define SBB_RBP_FROM_PTR_ESP_(VALUE) sbb rbp, qword ptr [esp + VALUE]

#define SBB_RSP_FROM_PTR_RAX_(VALUE) sbb rsp, qword ptr [rax + VALUE]
#define SBB_RSP_FROM_PTR_RBX_(VALUE) sbb rsp, qword ptr [rbx + VALUE]
#define SBB_RSP_FROM_PTR_RCX_(VALUE) sbb rsp, qword ptr [rcx + VALUE]
#define SBB_RSP_FROM_PTR_RDX_(VALUE) sbb rsp, qword ptr [rdx + VALUE]
#define SBB_RSP_FROM_PTR_RDI_(VALUE) sbb rsp, qword ptr [rdi + VALUE]
#define SBB_RSP_FROM_PTR_RSI_(VALUE) sbb rsp, qword ptr [rsi + VALUE]
#define SBB_RSP_FROM_PTR_RBP_(VALUE) sbb rsp, qword ptr [rbp + VALUE]
#define SBB_RSP_FROM_PTR_RSP_(VALUE) sbb rsp, qword ptr [rsp + VALUE]
#define SBB_RSP_FROM_PTR_R8_(VALUE) sbb rsp, qword ptr [r8 + VALUE]
#define SBB_RSP_FROM_PTR_R9_(VALUE) sbb rsp, qword ptr [r9 + VALUE]
#define SBB_RSP_FROM_PTR_R10_(VALUE) sbb rsp, qword ptr [r10 + VALUE]
#define SBB_RSP_FROM_PTR_R11_(VALUE) sbb rsp, qword ptr [r11 + VALUE]
#define SBB_RSP_FROM_PTR_R12_(VALUE) sbb rsp, qword ptr [r12 + VALUE]
#define SBB_RSP_FROM_PTR_R13_(VALUE) sbb rsp, qword ptr [r13 + VALUE]
#define SBB_RSP_FROM_PTR_R14_(VALUE) sbb rsp, qword ptr [r14 + VALUE]
#define SBB_RSP_FROM_PTR_R15_(VALUE) sbb rsp, qword ptr [r15 + VALUE]
#define SBB_RSP_FROM_PTR_EAX_(VALUE) sbb rsp, qword ptr [eax + VALUE]
#define SBB_RSP_FROM_PTR_EBX_(VALUE) sbb rsp, qword ptr [ebx + VALUE]
#define SBB_RSP_FROM_PTR_ECX_(VALUE) sbb rsp, qword ptr [ecx + VALUE]
#define SBB_RSP_FROM_PTR_EDX_(VALUE) sbb rsp, qword ptr [edx + VALUE]
#define SBB_RSP_FROM_PTR_EDI_(VALUE) sbb rsp, qword ptr [edi + VALUE]
#define SBB_RSP_FROM_PTR_ESI_(VALUE) sbb rsp, qword ptr [esi + VALUE]
#define SBB_RSP_FROM_PTR_EBP_(VALUE) sbb rsp, qword ptr [ebp + VALUE]
#define SBB_RSP_FROM_PTR_ESP_(VALUE) sbb rsp, qword ptr [esp + VALUE]

#define SBB_R8_FROM_PTR_RAX_(VALUE) sbb r8, qword ptr [rax + VALUE]
#define SBB_R8_FROM_PTR_RBX_(VALUE) sbb r8, qword ptr [rbx + VALUE]
#define SBB_R8_FROM_PTR_RCX_(VALUE) sbb r8, qword ptr [rcx + VALUE]
#define SBB_R8_FROM_PTR_RDX_(VALUE) sbb r8, qword ptr [rdx + VALUE]
#define SBB_R8_FROM_PTR_RDI_(VALUE) sbb r8, qword ptr [rdi + VALUE]
#define SBB_R8_FROM_PTR_RSI_(VALUE) sbb r8, qword ptr [rsi + VALUE]
#define SBB_R8_FROM_PTR_RBP_(VALUE) sbb r8, qword ptr [rbp + VALUE]
#define SBB_R8_FROM_PTR_RSP_(VALUE) sbb r8, qword ptr [rsp + VALUE]
#define SBB_R8_FROM_PTR_R8_(VALUE) sbb r8, qword ptr [r8 + VALUE]
#define SBB_R8_FROM_PTR_R9_(VALUE) sbb r8, qword ptr [r9 + VALUE]
#define SBB_R8_FROM_PTR_R10_(VALUE) sbb r8, qword ptr [r10 + VALUE]
#define SBB_R8_FROM_PTR_R11_(VALUE) sbb r8, qword ptr [r11 + VALUE]
#define SBB_R8_FROM_PTR_R12_(VALUE) sbb r8, qword ptr [r12 + VALUE]
#define SBB_R8_FROM_PTR_R13_(VALUE) sbb r8, qword ptr [r13 + VALUE]
#define SBB_R8_FROM_PTR_R14_(VALUE) sbb r8, qword ptr [r14 + VALUE]
#define SBB_R8_FROM_PTR_R15_(VALUE) sbb r8, qword ptr [r15 + VALUE]
#define SBB_R8_FROM_PTR_EAX_(VALUE) sbb r8, qword ptr [eax + VALUE]
#define SBB_R8_FROM_PTR_EBX_(VALUE) sbb r8, qword ptr [ebx + VALUE]
#define SBB_R8_FROM_PTR_ECX_(VALUE) sbb r8, qword ptr [ecx + VALUE]
#define SBB_R8_FROM_PTR_EDX_(VALUE) sbb r8, qword ptr [edx + VALUE]
#define SBB_R8_FROM_PTR_EDI_(VALUE) sbb r8, qword ptr [edi + VALUE]
#define SBB_R8_FROM_PTR_ESI_(VALUE) sbb r8, qword ptr [esi + VALUE]
#define SBB_R8_FROM_PTR_EBP_(VALUE) sbb r8, qword ptr [ebp + VALUE]
#define SBB_R8_FROM_PTR_ESP_(VALUE) sbb r8, qword ptr [esp + VALUE]

#define SBB_R9_FROM_PTR_RAX_(VALUE) sbb r9, qword ptr [rax + VALUE]
#define SBB_R9_FROM_PTR_RBX_(VALUE) sbb r9, qword ptr [rbx + VALUE]
#define SBB_R9_FROM_PTR_RCX_(VALUE) sbb r9, qword ptr [rcx + VALUE]
#define SBB_R9_FROM_PTR_RDX_(VALUE) sbb r9, qword ptr [rdx + VALUE]
#define SBB_R9_FROM_PTR_RDI_(VALUE) sbb r9, qword ptr [rdi + VALUE]
#define SBB_R9_FROM_PTR_RSI_(VALUE) sbb r9, qword ptr [rsi + VALUE]
#define SBB_R9_FROM_PTR_RBP_(VALUE) sbb r9, qword ptr [rbp + VALUE]
#define SBB_R9_FROM_PTR_RSP_(VALUE) sbb r9, qword ptr [rsp + VALUE]
#define SBB_R9_FROM_PTR_R8_(VALUE) sbb r9, qword ptr [r8 + VALUE]
#define SBB_R9_FROM_PTR_R9_(VALUE) sbb r9, qword ptr [r9 + VALUE]
#define SBB_R9_FROM_PTR_R10_(VALUE) sbb r9, qword ptr [r10 + VALUE]
#define SBB_R9_FROM_PTR_R11_(VALUE) sbb r9, qword ptr [r11 + VALUE]
#define SBB_R9_FROM_PTR_R12_(VALUE) sbb r9, qword ptr [r12 + VALUE]
#define SBB_R9_FROM_PTR_R13_(VALUE) sbb r9, qword ptr [r13 + VALUE]
#define SBB_R9_FROM_PTR_R14_(VALUE) sbb r9, qword ptr [r14 + VALUE]
#define SBB_R9_FROM_PTR_R15_(VALUE) sbb r9, qword ptr [r15 + VALUE]
#define SBB_R9_FROM_PTR_EAX_(VALUE) sbb r9, qword ptr [eax + VALUE]
#define SBB_R9_FROM_PTR_EBX_(VALUE) sbb r9, qword ptr [ebx + VALUE]
#define SBB_R9_FROM_PTR_ECX_(VALUE) sbb r9, qword ptr [ecx + VALUE]
#define SBB_R9_FROM_PTR_EDX_(VALUE) sbb r9, qword ptr [edx + VALUE]
#define SBB_R9_FROM_PTR_EDI_(VALUE) sbb r9, qword ptr [edi + VALUE]
#define SBB_R9_FROM_PTR_ESI_(VALUE) sbb r9, qword ptr [esi + VALUE]
#define SBB_R9_FROM_PTR_EBP_(VALUE) sbb r9, qword ptr [ebp + VALUE]
#define SBB_R9_FROM_PTR_ESP_(VALUE) sbb r9, qword ptr [esp + VALUE]

#define SBB_R10_FROM_PTR_RAX_(VALUE) sbb r10, qword ptr [rax + VALUE]
#define SBB_R10_FROM_PTR_RBX_(VALUE) sbb r10, qword ptr [rbx + VALUE]
#define SBB_R10_FROM_PTR_RCX_(VALUE) sbb r10, qword ptr [rcx + VALUE]
#define SBB_R10_FROM_PTR_RDX_(VALUE) sbb r10, qword ptr [rdx + VALUE]
#define SBB_R10_FROM_PTR_RDI_(VALUE) sbb r10, qword ptr [rdi + VALUE]
#define SBB_R10_FROM_PTR_RSI_(VALUE) sbb r10, qword ptr [rsi + VALUE]
#define SBB_R10_FROM_PTR_RBP_(VALUE) sbb r10, qword ptr [rbp + VALUE]
#define SBB_R10_FROM_PTR_RSP_(VALUE) sbb r10, qword ptr [rsp + VALUE]
#define SBB_R10_FROM_PTR_R8_(VALUE) sbb r10, qword ptr [r8 + VALUE]
#define SBB_R10_FROM_PTR_R9_(VALUE) sbb r10, qword ptr [r9 + VALUE]
#define SBB_R10_FROM_PTR_R10_(VALUE) sbb r10, qword ptr [r10 + VALUE]
#define SBB_R10_FROM_PTR_R11_(VALUE) sbb r10, qword ptr [r11 + VALUE]
#define SBB_R10_FROM_PTR_R12_(VALUE) sbb r10, qword ptr [r12 + VALUE]
#define SBB_R10_FROM_PTR_R13_(VALUE) sbb r10, qword ptr [r13 + VALUE]
#define SBB_R10_FROM_PTR_R14_(VALUE) sbb r10, qword ptr [r14 + VALUE]
#define SBB_R10_FROM_PTR_R15_(VALUE) sbb r10, qword ptr [r15 + VALUE]
#define SBB_R10_FROM_PTR_EAX_(VALUE) sbb r10, qword ptr [eax + VALUE]
#define SBB_R10_FROM_PTR_EBX_(VALUE) sbb r10, qword ptr [ebx + VALUE]
#define SBB_R10_FROM_PTR_ECX_(VALUE) sbb r10, qword ptr [ecx + VALUE]
#define SBB_R10_FROM_PTR_EDX_(VALUE) sbb r10, qword ptr [edx + VALUE]
#define SBB_R10_FROM_PTR_EDI_(VALUE) sbb r10, qword ptr [edi + VALUE]
#define SBB_R10_FROM_PTR_ESI_(VALUE) sbb r10, qword ptr [esi + VALUE]
#define SBB_R10_FROM_PTR_EBP_(VALUE) sbb r10, qword ptr [ebp + VALUE]
#define SBB_R10_FROM_PTR_ESP_(VALUE) sbb r10, qword ptr [esp + VALUE]

#define SBB_R11_FROM_PTR_RAX_(VALUE) sbb r11, qword ptr [rax + VALUE]
#define SBB_R11_FROM_PTR_RBX_(VALUE) sbb r11, qword ptr [rbx + VALUE]
#define SBB_R11_FROM_PTR_RCX_(VALUE) sbb r11, qword ptr [rcx + VALUE]
#define SBB_R11_FROM_PTR_RDX_(VALUE) sbb r11, qword ptr [rdx + VALUE]
#define SBB_R11_FROM_PTR_RDI_(VALUE) sbb r11, qword ptr [rdi + VALUE]
#define SBB_R11_FROM_PTR_RSI_(VALUE) sbb r11, qword ptr [rsi + VALUE]
#define SBB_R11_FROM_PTR_RBP_(VALUE) sbb r11, qword ptr [rbp + VALUE]
#define SBB_R11_FROM_PTR_RSP_(VALUE) sbb r11, qword ptr [rsp + VALUE]
#define SBB_R11_FROM_PTR_R8_(VALUE) sbb r11, qword ptr [r8 + VALUE]
#define SBB_R11_FROM_PTR_R9_(VALUE) sbb r11, qword ptr [r9 + VALUE]
#define SBB_R11_FROM_PTR_R10_(VALUE) sbb r11, qword ptr [r10 + VALUE]
#define SBB_R11_FROM_PTR_R11_(VALUE) sbb r11, qword ptr [r11 + VALUE]
#define SBB_R11_FROM_PTR_R12_(VALUE) sbb r11, qword ptr [r12 + VALUE]
#define SBB_R11_FROM_PTR_R13_(VALUE) sbb r11, qword ptr [r13 + VALUE]
#define SBB_R11_FROM_PTR_R14_(VALUE) sbb r11, qword ptr [r14 + VALUE]
#define SBB_R11_FROM_PTR_R15_(VALUE) sbb r11, qword ptr [r15 + VALUE]
#define SBB_R11_FROM_PTR_EAX_(VALUE) sbb r11, qword ptr [eax + VALUE]
#define SBB_R11_FROM_PTR_EBX_(VALUE) sbb r11, qword ptr [ebx + VALUE]
#define SBB_R11_FROM_PTR_ECX_(VALUE) sbb r11, qword ptr [ecx + VALUE]
#define SBB_R11_FROM_PTR_EDX_(VALUE) sbb r11, qword ptr [edx + VALUE]
#define SBB_R11_FROM_PTR_EDI_(VALUE) sbb r11, qword ptr [edi + VALUE]
#define SBB_R11_FROM_PTR_ESI_(VALUE) sbb r11, qword ptr [esi + VALUE]
#define SBB_R11_FROM_PTR_EBP_(VALUE) sbb r11, qword ptr [ebp + VALUE]
#define SBB_R11_FROM_PTR_ESP_(VALUE) sbb r11, qword ptr [esp + VALUE]

#define SBB_R12_FROM_PTR_RAX_(VALUE) sbb r12, qword ptr [rax + VALUE]
#define SBB_R12_FROM_PTR_RBX_(VALUE) sbb r12, qword ptr [rbx + VALUE]
#define SBB_R12_FROM_PTR_RCX_(VALUE) sbb r12, qword ptr [rcx + VALUE]
#define SBB_R12_FROM_PTR_RDX_(VALUE) sbb r12, qword ptr [rdx + VALUE]
#define SBB_R12_FROM_PTR_RDI_(VALUE) sbb r12, qword ptr [rdi + VALUE]
#define SBB_R12_FROM_PTR_RSI_(VALUE) sbb r12, qword ptr [rsi + VALUE]
#define SBB_R12_FROM_PTR_RBP_(VALUE) sbb r12, qword ptr [rbp + VALUE]
#define SBB_R12_FROM_PTR_RSP_(VALUE) sbb r12, qword ptr [rsp + VALUE]
#define SBB_R12_FROM_PTR_R8_(VALUE) sbb r12, qword ptr [r8 + VALUE]
#define SBB_R12_FROM_PTR_R9_(VALUE) sbb r12, qword ptr [r9 + VALUE]
#define SBB_R12_FROM_PTR_R10_(VALUE) sbb r12, qword ptr [r10 + VALUE]
#define SBB_R12_FROM_PTR_R11_(VALUE) sbb r12, qword ptr [r11 + VALUE]
#define SBB_R12_FROM_PTR_R12_(VALUE) sbb r12, qword ptr [r12 + VALUE]
#define SBB_R12_FROM_PTR_R13_(VALUE) sbb r12, qword ptr [r13 + VALUE]
#define SBB_R12_FROM_PTR_R14_(VALUE) sbb r12, qword ptr [r14 + VALUE]
#define SBB_R12_FROM_PTR_R15_(VALUE) sbb r12, qword ptr [r15 + VALUE]
#define SBB_R12_FROM_PTR_EAX_(VALUE) sbb r12, qword ptr [eax + VALUE]
#define SBB_R12_FROM_PTR_EBX_(VALUE) sbb r12, qword ptr [ebx + VALUE]
#define SBB_R12_FROM_PTR_ECX_(VALUE) sbb r12, qword ptr [ecx + VALUE]
#define SBB_R12_FROM_PTR_EDX_(VALUE) sbb r12, qword ptr [edx + VALUE]
#define SBB_R12_FROM_PTR_EDI_(VALUE) sbb r12, qword ptr [edi + VALUE]
#define SBB_R12_FROM_PTR_ESI_(VALUE) sbb r12, qword ptr [esi + VALUE]
#define SBB_R12_FROM_PTR_EBP_(VALUE) sbb r12, qword ptr [ebp + VALUE]
#define SBB_R12_FROM_PTR_ESP_(VALUE) sbb r12, qword ptr [esp + VALUE]

#define SBB_R13_FROM_PTR_RAX_(VALUE) sbb r13, qword ptr [rax + VALUE]
#define SBB_R13_FROM_PTR_RBX_(VALUE) sbb r13, qword ptr [rbx + VALUE]
#define SBB_R13_FROM_PTR_RCX_(VALUE) sbb r13, qword ptr [rcx + VALUE]
#define SBB_R13_FROM_PTR_RDX_(VALUE) sbb r13, qword ptr [rdx + VALUE]
#define SBB_R13_FROM_PTR_RDI_(VALUE) sbb r13, qword ptr [rdi + VALUE]
#define SBB_R13_FROM_PTR_RSI_(VALUE) sbb r13, qword ptr [rsi + VALUE]
#define SBB_R13_FROM_PTR_RBP_(VALUE) sbb r13, qword ptr [rbp + VALUE]
#define SBB_R13_FROM_PTR_RSP_(VALUE) sbb r13, qword ptr [rsp + VALUE]
#define SBB_R13_FROM_PTR_R8_(VALUE) sbb r13, qword ptr [r8 + VALUE]
#define SBB_R13_FROM_PTR_R9_(VALUE) sbb r13, qword ptr [r9 + VALUE]
#define SBB_R13_FROM_PTR_R10_(VALUE) sbb r13, qword ptr [r10 + VALUE]
#define SBB_R13_FROM_PTR_R11_(VALUE) sbb r13, qword ptr [r11 + VALUE]
#define SBB_R13_FROM_PTR_R12_(VALUE) sbb r13, qword ptr [r12 + VALUE]
#define SBB_R13_FROM_PTR_R13_(VALUE) sbb r13, qword ptr [r13 + VALUE]
#define SBB_R13_FROM_PTR_R14_(VALUE) sbb r13, qword ptr [r14 + VALUE]
#define SBB_R13_FROM_PTR_R15_(VALUE) sbb r13, qword ptr [r15 + VALUE]
#define SBB_R13_FROM_PTR_EAX_(VALUE) sbb r13, qword ptr [eax + VALUE]
#define SBB_R13_FROM_PTR_EBX_(VALUE) sbb r13, qword ptr [ebx + VALUE]
#define SBB_R13_FROM_PTR_ECX_(VALUE) sbb r13, qword ptr [ecx + VALUE]
#define SBB_R13_FROM_PTR_EDX_(VALUE) sbb r13, qword ptr [edx + VALUE]
#define SBB_R13_FROM_PTR_EDI_(VALUE) sbb r13, qword ptr [edi + VALUE]
#define SBB_R13_FROM_PTR_ESI_(VALUE) sbb r13, qword ptr [esi + VALUE]
#define SBB_R13_FROM_PTR_EBP_(VALUE) sbb r13, qword ptr [ebp + VALUE]
#define SBB_R13_FROM_PTR_ESP_(VALUE) sbb r13, qword ptr [esp + VALUE]

#define SBB_R14_FROM_PTR_RAX_(VALUE) sbb r14, qword ptr [rax + VALUE]
#define SBB_R14_FROM_PTR_RBX_(VALUE) sbb r14, qword ptr [rbx + VALUE]
#define SBB_R14_FROM_PTR_RCX_(VALUE) sbb r14, qword ptr [rcx + VALUE]
#define SBB_R14_FROM_PTR_RDX_(VALUE) sbb r14, qword ptr [rdx + VALUE]
#define SBB_R14_FROM_PTR_RDI_(VALUE) sbb r14, qword ptr [rdi + VALUE]
#define SBB_R14_FROM_PTR_RSI_(VALUE) sbb r14, qword ptr [rsi + VALUE]
#define SBB_R14_FROM_PTR_RBP_(VALUE) sbb r14, qword ptr [rbp + VALUE]
#define SBB_R14_FROM_PTR_RSP_(VALUE) sbb r14, qword ptr [rsp + VALUE]
#define SBB_R14_FROM_PTR_R8_(VALUE) sbb r14, qword ptr [r8 + VALUE]
#define SBB_R14_FROM_PTR_R9_(VALUE) sbb r14, qword ptr [r9 + VALUE]
#define SBB_R14_FROM_PTR_R10_(VALUE) sbb r14, qword ptr [r10 + VALUE]
#define SBB_R14_FROM_PTR_R11_(VALUE) sbb r14, qword ptr [r11 + VALUE]
#define SBB_R14_FROM_PTR_R12_(VALUE) sbb r14, qword ptr [r12 + VALUE]
#define SBB_R14_FROM_PTR_R13_(VALUE) sbb r14, qword ptr [r13 + VALUE]
#define SBB_R14_FROM_PTR_R14_(VALUE) sbb r14, qword ptr [r14 + VALUE]
#define SBB_R14_FROM_PTR_R15_(VALUE) sbb r14, qword ptr [r15 + VALUE]
#define SBB_R14_FROM_PTR_EAX_(VALUE) sbb r14, qword ptr [eax + VALUE]
#define SBB_R14_FROM_PTR_EBX_(VALUE) sbb r14, qword ptr [ebx + VALUE]
#define SBB_R14_FROM_PTR_ECX_(VALUE) sbb r14, qword ptr [ecx + VALUE]
#define SBB_R14_FROM_PTR_EDX_(VALUE) sbb r14, qword ptr [edx + VALUE]
#define SBB_R14_FROM_PTR_EDI_(VALUE) sbb r14, qword ptr [edi + VALUE]
#define SBB_R14_FROM_PTR_ESI_(VALUE) sbb r14, qword ptr [esi + VALUE]
#define SBB_R14_FROM_PTR_EBP_(VALUE) sbb r14, qword ptr [ebp + VALUE]
#define SBB_R14_FROM_PTR_ESP_(VALUE) sbb r14, qword ptr [esp + VALUE]

#define SBB_R15_FROM_PTR_RAX_(VALUE) sbb r15, qword ptr [rax + VALUE]
#define SBB_R15_FROM_PTR_RBX_(VALUE) sbb r15, qword ptr [rbx + VALUE]
#define SBB_R15_FROM_PTR_RCX_(VALUE) sbb r15, qword ptr [rcx + VALUE]
#define SBB_R15_FROM_PTR_RDX_(VALUE) sbb r15, qword ptr [rdx + VALUE]
#define SBB_R15_FROM_PTR_RDI_(VALUE) sbb r15, qword ptr [rdi + VALUE]
#define SBB_R15_FROM_PTR_RSI_(VALUE) sbb r15, qword ptr [rsi + VALUE]
#define SBB_R15_FROM_PTR_RBP_(VALUE) sbb r15, qword ptr [rbp + VALUE]
#define SBB_R15_FROM_PTR_RSP_(VALUE) sbb r15, qword ptr [rsp + VALUE]
#define SBB_R15_FROM_PTR_R8_(VALUE) sbb r15, qword ptr [r8 + VALUE]
#define SBB_R15_FROM_PTR_R9_(VALUE) sbb r15, qword ptr [r9 + VALUE]
#define SBB_R15_FROM_PTR_R10_(VALUE) sbb r15, qword ptr [r10 + VALUE]
#define SBB_R15_FROM_PTR_R11_(VALUE) sbb r15, qword ptr [r11 + VALUE]
#define SBB_R15_FROM_PTR_R12_(VALUE) sbb r15, qword ptr [r12 + VALUE]
#define SBB_R15_FROM_PTR_R13_(VALUE) sbb r15, qword ptr [r13 + VALUE]
#define SBB_R15_FROM_PTR_R14_(VALUE) sbb r15, qword ptr [r14 + VALUE]
#define SBB_R15_FROM_PTR_R15_(VALUE) sbb r15, qword ptr [r15 + VALUE]
#define SBB_R15_FROM_PTR_EAX_(VALUE) sbb r15, qword ptr [eax + VALUE]
#define SBB_R15_FROM_PTR_EBX_(VALUE) sbb r15, qword ptr [ebx + VALUE]
#define SBB_R15_FROM_PTR_ECX_(VALUE) sbb r15, qword ptr [ecx + VALUE]
#define SBB_R15_FROM_PTR_EDX_(VALUE) sbb r15, qword ptr [edx + VALUE]
#define SBB_R15_FROM_PTR_EDI_(VALUE) sbb r15, qword ptr [edi + VALUE]
#define SBB_R15_FROM_PTR_ESI_(VALUE) sbb r15, qword ptr [esi + VALUE]
#define SBB_R15_FROM_PTR_EBP_(VALUE) sbb r15, qword ptr [ebp + VALUE]
#define SBB_R15_FROM_PTR_ESP_(VALUE) sbb r15, qword ptr [esp + VALUE]

#define SBB_RAX_TO_PTR_RAX_(VALUE) sbb qword ptr [rax + VALUE], rax
#define SBB_RAX_TO_PTR_RBX_(VALUE) sbb qword ptr [rbx + VALUE], rax
#define SBB_RAX_TO_PTR_RCX_(VALUE) sbb qword ptr [rcx + VALUE], rax
#define SBB_RAX_TO_PTR_RDX_(VALUE) sbb qword ptr [rdx + VALUE], rax
#define SBB_RAX_TO_PTR_RDI_(VALUE) sbb qword ptr [rdi + VALUE], rax
#define SBB_RAX_TO_PTR_RSI_(VALUE) sbb qword ptr [rsi + VALUE], rax
#define SBB_RAX_TO_PTR_RBP_(VALUE) sbb qword ptr [rbp + VALUE], rax
#define SBB_RAX_TO_PTR_RSP_(VALUE) sbb qword ptr [rsp + VALUE], rax
#define SBB_RAX_TO_PTR_R8_(VALUE) sbb qword ptr [r8 + VALUE], rax
#define SBB_RAX_TO_PTR_R9_(VALUE) sbb qword ptr [r9 + VALUE], rax
#define SBB_RAX_TO_PTR_R10_(VALUE) sbb qword ptr [r10 + VALUE], rax
#define SBB_RAX_TO_PTR_R11_(VALUE) sbb qword ptr [r11 + VALUE], rax
#define SBB_RAX_TO_PTR_R12_(VALUE) sbb qword ptr [r12 + VALUE], rax
#define SBB_RAX_TO_PTR_R13_(VALUE) sbb qword ptr [r13 + VALUE], rax
#define SBB_RAX_TO_PTR_R14_(VALUE) sbb qword ptr [r14 + VALUE], rax
#define SBB_RAX_TO_PTR_R15_(VALUE) sbb qword ptr [r15 + VALUE], rax
#define SBB_RAX_TO_PTR_EAX_(VALUE) sbb qword ptr [eax + VALUE], rax
#define SBB_RAX_TO_PTR_EBX_(VALUE) sbb qword ptr [ebx + VALUE], rax
#define SBB_RAX_TO_PTR_ECX_(VALUE) sbb qword ptr [ecx + VALUE], rax
#define SBB_RAX_TO_PTR_EDX_(VALUE) sbb qword ptr [edx + VALUE], rax
#define SBB_RAX_TO_PTR_EDI_(VALUE) sbb qword ptr [edi + VALUE], rax
#define SBB_RAX_TO_PTR_ESI_(VALUE) sbb qword ptr [esi + VALUE], rax
#define SBB_RAX_TO_PTR_EBP_(VALUE) sbb qword ptr [ebp + VALUE], rax
#define SBB_RAX_TO_PTR_ESP_(VALUE) sbb qword ptr [esp + VALUE], rax

#define SBB_RBX_TO_PTR_RAX_(VALUE) sbb qword ptr [rax + VALUE], rbx
#define SBB_RBX_TO_PTR_RBX_(VALUE) sbb qword ptr [rbx + VALUE], rbx
#define SBB_RBX_TO_PTR_RCX_(VALUE) sbb qword ptr [rcx + VALUE], rbx
#define SBB_RBX_TO_PTR_RDX_(VALUE) sbb qword ptr [rdx + VALUE], rbx
#define SBB_RBX_TO_PTR_RDI_(VALUE) sbb qword ptr [rdi + VALUE], rbx
#define SBB_RBX_TO_PTR_RSI_(VALUE) sbb qword ptr [rsi + VALUE], rbx
#define SBB_RBX_TO_PTR_RBP_(VALUE) sbb qword ptr [rbp + VALUE], rbx
#define SBB_RBX_TO_PTR_RSP_(VALUE) sbb qword ptr [rsp + VALUE], rbx
#define SBB_RBX_TO_PTR_R8_(VALUE) sbb qword ptr [r8 + VALUE], rbx
#define SBB_RBX_TO_PTR_R9_(VALUE) sbb qword ptr [r9 + VALUE], rbx
#define SBB_RBX_TO_PTR_R10_(VALUE) sbb qword ptr [r10 + VALUE], rbx
#define SBB_RBX_TO_PTR_R11_(VALUE) sbb qword ptr [r11 + VALUE], rbx
#define SBB_RBX_TO_PTR_R12_(VALUE) sbb qword ptr [r12 + VALUE], rbx
#define SBB_RBX_TO_PTR_R13_(VALUE) sbb qword ptr [r13 + VALUE], rbx
#define SBB_RBX_TO_PTR_R14_(VALUE) sbb qword ptr [r14 + VALUE], rbx
#define SBB_RBX_TO_PTR_R15_(VALUE) sbb qword ptr [r15 + VALUE], rbx
#define SBB_RBX_TO_PTR_EAX_(VALUE) sbb qword ptr [eax + VALUE], rbx
#define SBB_RBX_TO_PTR_EBX_(VALUE) sbb qword ptr [ebx + VALUE], rbx
#define SBB_RBX_TO_PTR_ECX_(VALUE) sbb qword ptr [ecx + VALUE], rbx
#define SBB_RBX_TO_PTR_EDX_(VALUE) sbb qword ptr [edx + VALUE], rbx
#define SBB_RBX_TO_PTR_EDI_(VALUE) sbb qword ptr [edi + VALUE], rbx
#define SBB_RBX_TO_PTR_ESI_(VALUE) sbb qword ptr [esi + VALUE], rbx
#define SBB_RBX_TO_PTR_EBP_(VALUE) sbb qword ptr [ebp + VALUE], rbx
#define SBB_RBX_TO_PTR_ESP_(VALUE) sbb qword ptr [esp + VALUE], rbx

#define SBB_RCX_TO_PTR_RAX_(VALUE) sbb qword ptr [rax + VALUE], rcx
#define SBB_RCX_TO_PTR_RBX_(VALUE) sbb qword ptr [rbx + VALUE], rcx
#define SBB_RCX_TO_PTR_RCX_(VALUE) sbb qword ptr [rcx + VALUE], rcx
#define SBB_RCX_TO_PTR_RDX_(VALUE) sbb qword ptr [rdx + VALUE], rcx
#define SBB_RCX_TO_PTR_RDI_(VALUE) sbb qword ptr [rdi + VALUE], rcx
#define SBB_RCX_TO_PTR_RSI_(VALUE) sbb qword ptr [rsi + VALUE], rcx
#define SBB_RCX_TO_PTR_RBP_(VALUE) sbb qword ptr [rbp + VALUE], rcx
#define SBB_RCX_TO_PTR_RSP_(VALUE) sbb qword ptr [rsp + VALUE], rcx
#define SBB_RCX_TO_PTR_R8_(VALUE) sbb qword ptr [r8 + VALUE], rcx
#define SBB_RCX_TO_PTR_R9_(VALUE) sbb qword ptr [r9 + VALUE], rcx
#define SBB_RCX_TO_PTR_R10_(VALUE) sbb qword ptr [r10 + VALUE], rcx
#define SBB_RCX_TO_PTR_R11_(VALUE) sbb qword ptr [r11 + VALUE], rcx
#define SBB_RCX_TO_PTR_R12_(VALUE) sbb qword ptr [r12 + VALUE], rcx
#define SBB_RCX_TO_PTR_R13_(VALUE) sbb qword ptr [r13 + VALUE], rcx
#define SBB_RCX_TO_PTR_R14_(VALUE) sbb qword ptr [r14 + VALUE], rcx
#define SBB_RCX_TO_PTR_R15_(VALUE) sbb qword ptr [r15 + VALUE], rcx
#define SBB_RCX_TO_PTR_EAX_(VALUE) sbb qword ptr [eax + VALUE], rcx
#define SBB_RCX_TO_PTR_EBX_(VALUE) sbb qword ptr [ebx + VALUE], rcx
#define SBB_RCX_TO_PTR_ECX_(VALUE) sbb qword ptr [ecx + VALUE], rcx
#define SBB_RCX_TO_PTR_EDX_(VALUE) sbb qword ptr [edx + VALUE], rcx
#define SBB_RCX_TO_PTR_EDI_(VALUE) sbb qword ptr [edi + VALUE], rcx
#define SBB_RCX_TO_PTR_ESI_(VALUE) sbb qword ptr [esi + VALUE], rcx
#define SBB_RCX_TO_PTR_EBP_(VALUE) sbb qword ptr [ebp + VALUE], rcx
#define SBB_RCX_TO_PTR_ESP_(VALUE) sbb qword ptr [esp + VALUE], rcx

#define SBB_RDX_TO_PTR_RAX_(VALUE) sbb qword ptr [rax + VALUE], rdx
#define SBB_RDX_TO_PTR_RBX_(VALUE) sbb qword ptr [rbx + VALUE], rdx
#define SBB_RDX_TO_PTR_RCX_(VALUE) sbb qword ptr [rcx + VALUE], rdx
#define SBB_RDX_TO_PTR_RDX_(VALUE) sbb qword ptr [rdx + VALUE], rdx
#define SBB_RDX_TO_PTR_RDI_(VALUE) sbb qword ptr [rdi + VALUE], rdx
#define SBB_RDX_TO_PTR_RSI_(VALUE) sbb qword ptr [rsi + VALUE], rdx
#define SBB_RDX_TO_PTR_RBP_(VALUE) sbb qword ptr [rbp + VALUE], rdx
#define SBB_RDX_TO_PTR_RSP_(VALUE) sbb qword ptr [rsp + VALUE], rdx
#define SBB_RDX_TO_PTR_R8_(VALUE) sbb qword ptr [r8 + VALUE], rdx
#define SBB_RDX_TO_PTR_R9_(VALUE) sbb qword ptr [r9 + VALUE], rdx
#define SBB_RDX_TO_PTR_R10_(VALUE) sbb qword ptr [r10 + VALUE], rdx
#define SBB_RDX_TO_PTR_R11_(VALUE) sbb qword ptr [r11 + VALUE], rdx
#define SBB_RDX_TO_PTR_R12_(VALUE) sbb qword ptr [r12 + VALUE], rdx
#define SBB_RDX_TO_PTR_R13_(VALUE) sbb qword ptr [r13 + VALUE], rdx
#define SBB_RDX_TO_PTR_R14_(VALUE) sbb qword ptr [r14 + VALUE], rdx
#define SBB_RDX_TO_PTR_R15_(VALUE) sbb qword ptr [r15 + VALUE], rdx
#define SBB_RDX_TO_PTR_EAX_(VALUE) sbb qword ptr [eax + VALUE], rdx
#define SBB_RDX_TO_PTR_EBX_(VALUE) sbb qword ptr [ebx + VALUE], rdx
#define SBB_RDX_TO_PTR_ECX_(VALUE) sbb qword ptr [ecx + VALUE], rdx
#define SBB_RDX_TO_PTR_EDX_(VALUE) sbb qword ptr [edx + VALUE], rdx
#define SBB_RDX_TO_PTR_EDI_(VALUE) sbb qword ptr [edi + VALUE], rdx
#define SBB_RDX_TO_PTR_ESI_(VALUE) sbb qword ptr [esi + VALUE], rdx
#define SBB_RDX_TO_PTR_EBP_(VALUE) sbb qword ptr [ebp + VALUE], rdx
#define SBB_RDX_TO_PTR_ESP_(VALUE) sbb qword ptr [esp + VALUE], rdx

#define SBB_RDI_TO_PTR_RAX_(VALUE) sbb qword ptr [rax + VALUE], rdi
#define SBB_RDI_TO_PTR_RBX_(VALUE) sbb qword ptr [rbx + VALUE], rdi
#define SBB_RDI_TO_PTR_RCX_(VALUE) sbb qword ptr [rcx + VALUE], rdi
#define SBB_RDI_TO_PTR_RDX_(VALUE) sbb qword ptr [rdx + VALUE], rdi
#define SBB_RDI_TO_PTR_RDI_(VALUE) sbb qword ptr [rdi + VALUE], rdi
#define SBB_RDI_TO_PTR_RSI_(VALUE) sbb qword ptr [rsi + VALUE], rdi
#define SBB_RDI_TO_PTR_RBP_(VALUE) sbb qword ptr [rbp + VALUE], rdi
#define SBB_RDI_TO_PTR_RSP_(VALUE) sbb qword ptr [rsp + VALUE], rdi
#define SBB_RDI_TO_PTR_R8_(VALUE) sbb qword ptr [r8 + VALUE], rdi
#define SBB_RDI_TO_PTR_R9_(VALUE) sbb qword ptr [r9 + VALUE], rdi
#define SBB_RDI_TO_PTR_R10_(VALUE) sbb qword ptr [r10 + VALUE], rdi
#define SBB_RDI_TO_PTR_R11_(VALUE) sbb qword ptr [r11 + VALUE], rdi
#define SBB_RDI_TO_PTR_R12_(VALUE) sbb qword ptr [r12 + VALUE], rdi
#define SBB_RDI_TO_PTR_R13_(VALUE) sbb qword ptr [r13 + VALUE], rdi
#define SBB_RDI_TO_PTR_R14_(VALUE) sbb qword ptr [r14 + VALUE], rdi
#define SBB_RDI_TO_PTR_R15_(VALUE) sbb qword ptr [r15 + VALUE], rdi
#define SBB_RDI_TO_PTR_EAX_(VALUE) sbb qword ptr [eax + VALUE], rdi
#define SBB_RDI_TO_PTR_EBX_(VALUE) sbb qword ptr [ebx + VALUE], rdi
#define SBB_RDI_TO_PTR_ECX_(VALUE) sbb qword ptr [ecx + VALUE], rdi
#define SBB_RDI_TO_PTR_EDX_(VALUE) sbb qword ptr [edx + VALUE], rdi
#define SBB_RDI_TO_PTR_EDI_(VALUE) sbb qword ptr [edi + VALUE], rdi
#define SBB_RDI_TO_PTR_ESI_(VALUE) sbb qword ptr [esi + VALUE], rdi
#define SBB_RDI_TO_PTR_EBP_(VALUE) sbb qword ptr [ebp + VALUE], rdi
#define SBB_RDI_TO_PTR_ESP_(VALUE) sbb qword ptr [esp + VALUE], rdi

#define SBB_RSI_TO_PTR_RAX_(VALUE) sbb qword ptr [rax + VALUE], rsi
#define SBB_RSI_TO_PTR_RBX_(VALUE) sbb qword ptr [rbx + VALUE], rsi
#define SBB_RSI_TO_PTR_RCX_(VALUE) sbb qword ptr [rcx + VALUE], rsi
#define SBB_RSI_TO_PTR_RDX_(VALUE) sbb qword ptr [rdx + VALUE], rsi
#define SBB_RSI_TO_PTR_RDI_(VALUE) sbb qword ptr [rdi + VALUE], rsi
#define SBB_RSI_TO_PTR_RSI_(VALUE) sbb qword ptr [rsi + VALUE], rsi
#define SBB_RSI_TO_PTR_RBP_(VALUE) sbb qword ptr [rbp + VALUE], rsi
#define SBB_RSI_TO_PTR_RSP_(VALUE) sbb qword ptr [rsp + VALUE], rsi
#define SBB_RSI_TO_PTR_R8_(VALUE) sbb qword ptr [r8 + VALUE], rsi
#define SBB_RSI_TO_PTR_R9_(VALUE) sbb qword ptr [r9 + VALUE], rsi
#define SBB_RSI_TO_PTR_R10_(VALUE) sbb qword ptr [r10 + VALUE], rsi
#define SBB_RSI_TO_PTR_R11_(VALUE) sbb qword ptr [r11 + VALUE], rsi
#define SBB_RSI_TO_PTR_R12_(VALUE) sbb qword ptr [r12 + VALUE], rsi
#define SBB_RSI_TO_PTR_R13_(VALUE) sbb qword ptr [r13 + VALUE], rsi
#define SBB_RSI_TO_PTR_R14_(VALUE) sbb qword ptr [r14 + VALUE], rsi
#define SBB_RSI_TO_PTR_R15_(VALUE) sbb qword ptr [r15 + VALUE], rsi
#define SBB_RSI_TO_PTR_EAX_(VALUE) sbb qword ptr [eax + VALUE], rsi
#define SBB_RSI_TO_PTR_EBX_(VALUE) sbb qword ptr [ebx + VALUE], rsi
#define SBB_RSI_TO_PTR_ECX_(VALUE) sbb qword ptr [ecx + VALUE], rsi
#define SBB_RSI_TO_PTR_EDX_(VALUE) sbb qword ptr [edx + VALUE], rsi
#define SBB_RSI_TO_PTR_EDI_(VALUE) sbb qword ptr [edi + VALUE], rsi
#define SBB_RSI_TO_PTR_ESI_(VALUE) sbb qword ptr [esi + VALUE], rsi
#define SBB_RSI_TO_PTR_EBP_(VALUE) sbb qword ptr [ebp + VALUE], rsi
#define SBB_RSI_TO_PTR_ESP_(VALUE) sbb qword ptr [esp + VALUE], rsi

#define SBB_RBP_TO_PTR_RAX_(VALUE) sbb qword ptr [rax + VALUE], rbp
#define SBB_RBP_TO_PTR_RBX_(VALUE) sbb qword ptr [rbx + VALUE], rbp
#define SBB_RBP_TO_PTR_RCX_(VALUE) sbb qword ptr [rcx + VALUE], rbp
#define SBB_RBP_TO_PTR_RDX_(VALUE) sbb qword ptr [rdx + VALUE], rbp
#define SBB_RBP_TO_PTR_RDI_(VALUE) sbb qword ptr [rdi + VALUE], rbp
#define SBB_RBP_TO_PTR_RSI_(VALUE) sbb qword ptr [rsi + VALUE], rbp
#define SBB_RBP_TO_PTR_RBP_(VALUE) sbb qword ptr [rbp + VALUE], rbp
#define SBB_RBP_TO_PTR_RSP_(VALUE) sbb qword ptr [rsp + VALUE], rbp
#define SBB_RBP_TO_PTR_R8_(VALUE) sbb qword ptr [r8 + VALUE], rbp
#define SBB_RBP_TO_PTR_R9_(VALUE) sbb qword ptr [r9 + VALUE], rbp
#define SBB_RBP_TO_PTR_R10_(VALUE) sbb qword ptr [r10 + VALUE], rbp
#define SBB_RBP_TO_PTR_R11_(VALUE) sbb qword ptr [r11 + VALUE], rbp
#define SBB_RBP_TO_PTR_R12_(VALUE) sbb qword ptr [r12 + VALUE], rbp
#define SBB_RBP_TO_PTR_R13_(VALUE) sbb qword ptr [r13 + VALUE], rbp
#define SBB_RBP_TO_PTR_R14_(VALUE) sbb qword ptr [r14 + VALUE], rbp
#define SBB_RBP_TO_PTR_R15_(VALUE) sbb qword ptr [r15 + VALUE], rbp
#define SBB_RBP_TO_PTR_EAX_(VALUE) sbb qword ptr [eax + VALUE], rbp
#define SBB_RBP_TO_PTR_EBX_(VALUE) sbb qword ptr [ebx + VALUE], rbp
#define SBB_RBP_TO_PTR_ECX_(VALUE) sbb qword ptr [ecx + VALUE], rbp
#define SBB_RBP_TO_PTR_EDX_(VALUE) sbb qword ptr [edx + VALUE], rbp
#define SBB_RBP_TO_PTR_EDI_(VALUE) sbb qword ptr [edi + VALUE], rbp
#define SBB_RBP_TO_PTR_ESI_(VALUE) sbb qword ptr [esi + VALUE], rbp
#define SBB_RBP_TO_PTR_EBP_(VALUE) sbb qword ptr [ebp + VALUE], rbp
#define SBB_RBP_TO_PTR_ESP_(VALUE) sbb qword ptr [esp + VALUE], rbp

#define SBB_RSP_TO_PTR_RAX_(VALUE) sbb qword ptr [rax + VALUE], rsp
#define SBB_RSP_TO_PTR_RBX_(VALUE) sbb qword ptr [rbx + VALUE], rsp
#define SBB_RSP_TO_PTR_RCX_(VALUE) sbb qword ptr [rcx + VALUE], rsp
#define SBB_RSP_TO_PTR_RDX_(VALUE) sbb qword ptr [rdx + VALUE], rsp
#define SBB_RSP_TO_PTR_RDI_(VALUE) sbb qword ptr [rdi + VALUE], rsp
#define SBB_RSP_TO_PTR_RSI_(VALUE) sbb qword ptr [rsi + VALUE], rsp
#define SBB_RSP_TO_PTR_RBP_(VALUE) sbb qword ptr [rbp + VALUE], rsp
#define SBB_RSP_TO_PTR_RSP_(VALUE) sbb qword ptr [rsp + VALUE], rsp
#define SBB_RSP_TO_PTR_R8_(VALUE) sbb qword ptr [r8 + VALUE], rsp
#define SBB_RSP_TO_PTR_R9_(VALUE) sbb qword ptr [r9 + VALUE], rsp
#define SBB_RSP_TO_PTR_R10_(VALUE) sbb qword ptr [r10 + VALUE], rsp
#define SBB_RSP_TO_PTR_R11_(VALUE) sbb qword ptr [r11 + VALUE], rsp
#define SBB_RSP_TO_PTR_R12_(VALUE) sbb qword ptr [r12 + VALUE], rsp
#define SBB_RSP_TO_PTR_R13_(VALUE) sbb qword ptr [r13 + VALUE], rsp
#define SBB_RSP_TO_PTR_R14_(VALUE) sbb qword ptr [r14 + VALUE], rsp
#define SBB_RSP_TO_PTR_R15_(VALUE) sbb qword ptr [r15 + VALUE], rsp
#define SBB_RSP_TO_PTR_EAX_(VALUE) sbb qword ptr [eax + VALUE], rsp
#define SBB_RSP_TO_PTR_EBX_(VALUE) sbb qword ptr [ebx + VALUE], rsp
#define SBB_RSP_TO_PTR_ECX_(VALUE) sbb qword ptr [ecx + VALUE], rsp
#define SBB_RSP_TO_PTR_EDX_(VALUE) sbb qword ptr [edx + VALUE], rsp
#define SBB_RSP_TO_PTR_EDI_(VALUE) sbb qword ptr [edi + VALUE], rsp
#define SBB_RSP_TO_PTR_ESI_(VALUE) sbb qword ptr [esi + VALUE], rsp
#define SBB_RSP_TO_PTR_EBP_(VALUE) sbb qword ptr [ebp + VALUE], rsp
#define SBB_RSP_TO_PTR_ESP_(VALUE) sbb qword ptr [esp + VALUE], rsp

#define SBB_R8_TO_PTR_RAX_(VALUE) sbb qword ptr [rax + VALUE], r8
#define SBB_R8_TO_PTR_RBX_(VALUE) sbb qword ptr [rbx + VALUE], r8
#define SBB_R8_TO_PTR_RCX_(VALUE) sbb qword ptr [rcx + VALUE], r8
#define SBB_R8_TO_PTR_RDX_(VALUE) sbb qword ptr [rdx + VALUE], r8
#define SBB_R8_TO_PTR_RDI_(VALUE) sbb qword ptr [rdi + VALUE], r8
#define SBB_R8_TO_PTR_RSI_(VALUE) sbb qword ptr [rsi + VALUE], r8
#define SBB_R8_TO_PTR_RBP_(VALUE) sbb qword ptr [rbp + VALUE], r8
#define SBB_R8_TO_PTR_RSP_(VALUE) sbb qword ptr [rsp + VALUE], r8
#define SBB_R8_TO_PTR_R8_(VALUE) sbb qword ptr [r8 + VALUE], r8
#define SBB_R8_TO_PTR_R9_(VALUE) sbb qword ptr [r9 + VALUE], r8
#define SBB_R8_TO_PTR_R10_(VALUE) sbb qword ptr [r10 + VALUE], r8
#define SBB_R8_TO_PTR_R11_(VALUE) sbb qword ptr [r11 + VALUE], r8
#define SBB_R8_TO_PTR_R12_(VALUE) sbb qword ptr [r12 + VALUE], r8
#define SBB_R8_TO_PTR_R13_(VALUE) sbb qword ptr [r13 + VALUE], r8
#define SBB_R8_TO_PTR_R14_(VALUE) sbb qword ptr [r14 + VALUE], r8
#define SBB_R8_TO_PTR_R15_(VALUE) sbb qword ptr [r15 + VALUE], r8
#define SBB_R8_TO_PTR_EAX_(VALUE) sbb qword ptr [eax + VALUE], r8
#define SBB_R8_TO_PTR_EBX_(VALUE) sbb qword ptr [ebx + VALUE], r8
#define SBB_R8_TO_PTR_ECX_(VALUE) sbb qword ptr [ecx + VALUE], r8
#define SBB_R8_TO_PTR_EDX_(VALUE) sbb qword ptr [edx + VALUE], r8
#define SBB_R8_TO_PTR_EDI_(VALUE) sbb qword ptr [edi + VALUE], r8
#define SBB_R8_TO_PTR_ESI_(VALUE) sbb qword ptr [esi + VALUE], r8
#define SBB_R8_TO_PTR_EBP_(VALUE) sbb qword ptr [ebp + VALUE], r8
#define SBB_R8_TO_PTR_ESP_(VALUE) sbb qword ptr [esp + VALUE], r8

#define SBB_R9_TO_PTR_RAX_(VALUE) sbb qword ptr [rax + VALUE], r9
#define SBB_R9_TO_PTR_RBX_(VALUE) sbb qword ptr [rbx + VALUE], r9
#define SBB_R9_TO_PTR_RCX_(VALUE) sbb qword ptr [rcx + VALUE], r9
#define SBB_R9_TO_PTR_RDX_(VALUE) sbb qword ptr [rdx + VALUE], r9
#define SBB_R9_TO_PTR_RDI_(VALUE) sbb qword ptr [rdi + VALUE], r9
#define SBB_R9_TO_PTR_RSI_(VALUE) sbb qword ptr [rsi + VALUE], r9
#define SBB_R9_TO_PTR_RBP_(VALUE) sbb qword ptr [rbp + VALUE], r9
#define SBB_R9_TO_PTR_RSP_(VALUE) sbb qword ptr [rsp + VALUE], r9
#define SBB_R9_TO_PTR_R8_(VALUE) sbb qword ptr [r8 + VALUE], r9
#define SBB_R9_TO_PTR_R9_(VALUE) sbb qword ptr [r9 + VALUE], r9
#define SBB_R9_TO_PTR_R10_(VALUE) sbb qword ptr [r10 + VALUE], r9
#define SBB_R9_TO_PTR_R11_(VALUE) sbb qword ptr [r11 + VALUE], r9
#define SBB_R9_TO_PTR_R12_(VALUE) sbb qword ptr [r12 + VALUE], r9
#define SBB_R9_TO_PTR_R13_(VALUE) sbb qword ptr [r13 + VALUE], r9
#define SBB_R9_TO_PTR_R14_(VALUE) sbb qword ptr [r14 + VALUE], r9
#define SBB_R9_TO_PTR_R15_(VALUE) sbb qword ptr [r15 + VALUE], r9
#define SBB_R9_TO_PTR_EAX_(VALUE) sbb qword ptr [eax + VALUE], r9
#define SBB_R9_TO_PTR_EBX_(VALUE) sbb qword ptr [ebx + VALUE], r9
#define SBB_R9_TO_PTR_ECX_(VALUE) sbb qword ptr [ecx + VALUE], r9
#define SBB_R9_TO_PTR_EDX_(VALUE) sbb qword ptr [edx + VALUE], r9
#define SBB_R9_TO_PTR_EDI_(VALUE) sbb qword ptr [edi + VALUE], r9
#define SBB_R9_TO_PTR_ESI_(VALUE) sbb qword ptr [esi + VALUE], r9
#define SBB_R9_TO_PTR_EBP_(VALUE) sbb qword ptr [ebp + VALUE], r9
#define SBB_R9_TO_PTR_ESP_(VALUE) sbb qword ptr [esp + VALUE], r9

#define SBB_R10_TO_PTR_RAX_(VALUE) sbb qword ptr [rax + VALUE], r10
#define SBB_R10_TO_PTR_RBX_(VALUE) sbb qword ptr [rbx + VALUE], r10
#define SBB_R10_TO_PTR_RCX_(VALUE) sbb qword ptr [rcx + VALUE], r10
#define SBB_R10_TO_PTR_RDX_(VALUE) sbb qword ptr [rdx + VALUE], r10
#define SBB_R10_TO_PTR_RDI_(VALUE) sbb qword ptr [rdi + VALUE], r10
#define SBB_R10_TO_PTR_RSI_(VALUE) sbb qword ptr [rsi + VALUE], r10
#define SBB_R10_TO_PTR_RBP_(VALUE) sbb qword ptr [rbp + VALUE], r10
#define SBB_R10_TO_PTR_RSP_(VALUE) sbb qword ptr [rsp + VALUE], r10
#define SBB_R10_TO_PTR_R8_(VALUE) sbb qword ptr [r8 + VALUE], r10
#define SBB_R10_TO_PTR_R9_(VALUE) sbb qword ptr [r9 + VALUE], r10
#define SBB_R10_TO_PTR_R10_(VALUE) sbb qword ptr [r10 + VALUE], r10
#define SBB_R10_TO_PTR_R11_(VALUE) sbb qword ptr [r11 + VALUE], r10
#define SBB_R10_TO_PTR_R12_(VALUE) sbb qword ptr [r12 + VALUE], r10
#define SBB_R10_TO_PTR_R13_(VALUE) sbb qword ptr [r13 + VALUE], r10
#define SBB_R10_TO_PTR_R14_(VALUE) sbb qword ptr [r14 + VALUE], r10
#define SBB_R10_TO_PTR_R15_(VALUE) sbb qword ptr [r15 + VALUE], r10
#define SBB_R10_TO_PTR_EAX_(VALUE) sbb qword ptr [eax + VALUE], r10
#define SBB_R10_TO_PTR_EBX_(VALUE) sbb qword ptr [ebx + VALUE], r10
#define SBB_R10_TO_PTR_ECX_(VALUE) sbb qword ptr [ecx + VALUE], r10
#define SBB_R10_TO_PTR_EDX_(VALUE) sbb qword ptr [edx + VALUE], r10
#define SBB_R10_TO_PTR_EDI_(VALUE) sbb qword ptr [edi + VALUE], r10
#define SBB_R10_TO_PTR_ESI_(VALUE) sbb qword ptr [esi + VALUE], r10
#define SBB_R10_TO_PTR_EBP_(VALUE) sbb qword ptr [ebp + VALUE], r10
#define SBB_R10_TO_PTR_ESP_(VALUE) sbb qword ptr [esp + VALUE], r10

#define SBB_R11_TO_PTR_RAX_(VALUE) sbb qword ptr [rax + VALUE], r11
#define SBB_R11_TO_PTR_RBX_(VALUE) sbb qword ptr [rbx + VALUE], r11
#define SBB_R11_TO_PTR_RCX_(VALUE) sbb qword ptr [rcx + VALUE], r11
#define SBB_R11_TO_PTR_RDX_(VALUE) sbb qword ptr [rdx + VALUE], r11
#define SBB_R11_TO_PTR_RDI_(VALUE) sbb qword ptr [rdi + VALUE], r11
#define SBB_R11_TO_PTR_RSI_(VALUE) sbb qword ptr [rsi + VALUE], r11
#define SBB_R11_TO_PTR_RBP_(VALUE) sbb qword ptr [rbp + VALUE], r11
#define SBB_R11_TO_PTR_RSP_(VALUE) sbb qword ptr [rsp + VALUE], r11
#define SBB_R11_TO_PTR_R8_(VALUE) sbb qword ptr [r8 + VALUE], r11
#define SBB_R11_TO_PTR_R9_(VALUE) sbb qword ptr [r9 + VALUE], r11
#define SBB_R11_TO_PTR_R10_(VALUE) sbb qword ptr [r10 + VALUE], r11
#define SBB_R11_TO_PTR_R11_(VALUE) sbb qword ptr [r11 + VALUE], r11
#define SBB_R11_TO_PTR_R12_(VALUE) sbb qword ptr [r12 + VALUE], r11
#define SBB_R11_TO_PTR_R13_(VALUE) sbb qword ptr [r13 + VALUE], r11
#define SBB_R11_TO_PTR_R14_(VALUE) sbb qword ptr [r14 + VALUE], r11
#define SBB_R11_TO_PTR_R15_(VALUE) sbb qword ptr [r15 + VALUE], r11
#define SBB_R11_TO_PTR_EAX_(VALUE) sbb qword ptr [eax + VALUE], r11
#define SBB_R11_TO_PTR_EBX_(VALUE) sbb qword ptr [ebx + VALUE], r11
#define SBB_R11_TO_PTR_ECX_(VALUE) sbb qword ptr [ecx + VALUE], r11
#define SBB_R11_TO_PTR_EDX_(VALUE) sbb qword ptr [edx + VALUE], r11
#define SBB_R11_TO_PTR_EDI_(VALUE) sbb qword ptr [edi + VALUE], r11
#define SBB_R11_TO_PTR_ESI_(VALUE) sbb qword ptr [esi + VALUE], r11
#define SBB_R11_TO_PTR_EBP_(VALUE) sbb qword ptr [ebp + VALUE], r11
#define SBB_R11_TO_PTR_ESP_(VALUE) sbb qword ptr [esp + VALUE], r11

#define SBB_R12_TO_PTR_RAX_(VALUE) sbb qword ptr [rax + VALUE], r12
#define SBB_R12_TO_PTR_RBX_(VALUE) sbb qword ptr [rbx + VALUE], r12
#define SBB_R12_TO_PTR_RCX_(VALUE) sbb qword ptr [rcx + VALUE], r12
#define SBB_R12_TO_PTR_RDX_(VALUE) sbb qword ptr [rdx + VALUE], r12
#define SBB_R12_TO_PTR_RDI_(VALUE) sbb qword ptr [rdi + VALUE], r12
#define SBB_R12_TO_PTR_RSI_(VALUE) sbb qword ptr [rsi + VALUE], r12
#define SBB_R12_TO_PTR_RBP_(VALUE) sbb qword ptr [rbp + VALUE], r12
#define SBB_R12_TO_PTR_RSP_(VALUE) sbb qword ptr [rsp + VALUE], r12
#define SBB_R12_TO_PTR_R8_(VALUE) sbb qword ptr [r8 + VALUE], r12
#define SBB_R12_TO_PTR_R9_(VALUE) sbb qword ptr [r9 + VALUE], r12
#define SBB_R12_TO_PTR_R10_(VALUE) sbb qword ptr [r10 + VALUE], r12
#define SBB_R12_TO_PTR_R11_(VALUE) sbb qword ptr [r11 + VALUE], r12
#define SBB_R12_TO_PTR_R12_(VALUE) sbb qword ptr [r12 + VALUE], r12
#define SBB_R12_TO_PTR_R13_(VALUE) sbb qword ptr [r13 + VALUE], r12
#define SBB_R12_TO_PTR_R14_(VALUE) sbb qword ptr [r14 + VALUE], r12
#define SBB_R12_TO_PTR_R15_(VALUE) sbb qword ptr [r15 + VALUE], r12
#define SBB_R12_TO_PTR_EAX_(VALUE) sbb qword ptr [eax + VALUE], r12
#define SBB_R12_TO_PTR_EBX_(VALUE) sbb qword ptr [ebx + VALUE], r12
#define SBB_R12_TO_PTR_ECX_(VALUE) sbb qword ptr [ecx + VALUE], r12
#define SBB_R12_TO_PTR_EDX_(VALUE) sbb qword ptr [edx + VALUE], r12
#define SBB_R12_TO_PTR_EDI_(VALUE) sbb qword ptr [edi + VALUE], r12
#define SBB_R12_TO_PTR_ESI_(VALUE) sbb qword ptr [esi + VALUE], r12
#define SBB_R12_TO_PTR_EBP_(VALUE) sbb qword ptr [ebp + VALUE], r12
#define SBB_R12_TO_PTR_ESP_(VALUE) sbb qword ptr [esp + VALUE], r12

#define SBB_R13_TO_PTR_RAX_(VALUE) sbb qword ptr [rax + VALUE], r13
#define SBB_R13_TO_PTR_RBX_(VALUE) sbb qword ptr [rbx + VALUE], r13
#define SBB_R13_TO_PTR_RCX_(VALUE) sbb qword ptr [rcx + VALUE], r13
#define SBB_R13_TO_PTR_RDX_(VALUE) sbb qword ptr [rdx + VALUE], r13
#define SBB_R13_TO_PTR_RDI_(VALUE) sbb qword ptr [rdi + VALUE], r13
#define SBB_R13_TO_PTR_RSI_(VALUE) sbb qword ptr [rsi + VALUE], r13
#define SBB_R13_TO_PTR_RBP_(VALUE) sbb qword ptr [rbp + VALUE], r13
#define SBB_R13_TO_PTR_RSP_(VALUE) sbb qword ptr [rsp + VALUE], r13
#define SBB_R13_TO_PTR_R8_(VALUE) sbb qword ptr [r8 + VALUE], r13
#define SBB_R13_TO_PTR_R9_(VALUE) sbb qword ptr [r9 + VALUE], r13
#define SBB_R13_TO_PTR_R10_(VALUE) sbb qword ptr [r10 + VALUE], r13
#define SBB_R13_TO_PTR_R11_(VALUE) sbb qword ptr [r11 + VALUE], r13
#define SBB_R13_TO_PTR_R12_(VALUE) sbb qword ptr [r12 + VALUE], r13
#define SBB_R13_TO_PTR_R13_(VALUE) sbb qword ptr [r13 + VALUE], r13
#define SBB_R13_TO_PTR_R14_(VALUE) sbb qword ptr [r14 + VALUE], r13
#define SBB_R13_TO_PTR_R15_(VALUE) sbb qword ptr [r15 + VALUE], r13
#define SBB_R13_TO_PTR_EAX_(VALUE) sbb qword ptr [eax + VALUE], r13
#define SBB_R13_TO_PTR_EBX_(VALUE) sbb qword ptr [ebx + VALUE], r13
#define SBB_R13_TO_PTR_ECX_(VALUE) sbb qword ptr [ecx + VALUE], r13
#define SBB_R13_TO_PTR_EDX_(VALUE) sbb qword ptr [edx + VALUE], r13
#define SBB_R13_TO_PTR_EDI_(VALUE) sbb qword ptr [edi + VALUE], r13
#define SBB_R13_TO_PTR_ESI_(VALUE) sbb qword ptr [esi + VALUE], r13
#define SBB_R13_TO_PTR_EBP_(VALUE) sbb qword ptr [ebp + VALUE], r13
#define SBB_R13_TO_PTR_ESP_(VALUE) sbb qword ptr [esp + VALUE], r13

#define SBB_R14_TO_PTR_RAX_(VALUE) sbb qword ptr [rax + VALUE], r14
#define SBB_R14_TO_PTR_RBX_(VALUE) sbb qword ptr [rbx + VALUE], r14
#define SBB_R14_TO_PTR_RCX_(VALUE) sbb qword ptr [rcx + VALUE], r14
#define SBB_R14_TO_PTR_RDX_(VALUE) sbb qword ptr [rdx + VALUE], r14
#define SBB_R14_TO_PTR_RDI_(VALUE) sbb qword ptr [rdi + VALUE], r14
#define SBB_R14_TO_PTR_RSI_(VALUE) sbb qword ptr [rsi + VALUE], r14
#define SBB_R14_TO_PTR_RBP_(VALUE) sbb qword ptr [rbp + VALUE], r14
#define SBB_R14_TO_PTR_RSP_(VALUE) sbb qword ptr [rsp + VALUE], r14
#define SBB_R14_TO_PTR_R8_(VALUE) sbb qword ptr [r8 + VALUE], r14
#define SBB_R14_TO_PTR_R9_(VALUE) sbb qword ptr [r9 + VALUE], r14
#define SBB_R14_TO_PTR_R10_(VALUE) sbb qword ptr [r10 + VALUE], r14
#define SBB_R14_TO_PTR_R11_(VALUE) sbb qword ptr [r11 + VALUE], r14
#define SBB_R14_TO_PTR_R12_(VALUE) sbb qword ptr [r12 + VALUE], r14
#define SBB_R14_TO_PTR_R13_(VALUE) sbb qword ptr [r13 + VALUE], r14
#define SBB_R14_TO_PTR_R14_(VALUE) sbb qword ptr [r14 + VALUE], r14
#define SBB_R14_TO_PTR_R15_(VALUE) sbb qword ptr [r15 + VALUE], r14
#define SBB_R14_TO_PTR_EAX_(VALUE) sbb qword ptr [eax + VALUE], r14
#define SBB_R14_TO_PTR_EBX_(VALUE) sbb qword ptr [ebx + VALUE], r14
#define SBB_R14_TO_PTR_ECX_(VALUE) sbb qword ptr [ecx + VALUE], r14
#define SBB_R14_TO_PTR_EDX_(VALUE) sbb qword ptr [edx + VALUE], r14
#define SBB_R14_TO_PTR_EDI_(VALUE) sbb qword ptr [edi + VALUE], r14
#define SBB_R14_TO_PTR_ESI_(VALUE) sbb qword ptr [esi + VALUE], r14
#define SBB_R14_TO_PTR_EBP_(VALUE) sbb qword ptr [ebp + VALUE], r14
#define SBB_R14_TO_PTR_ESP_(VALUE) sbb qword ptr [esp + VALUE], r14

#define SBB_R15_TO_PTR_RAX_(VALUE) sbb qword ptr [rax + VALUE], r15
#define SBB_R15_TO_PTR_RBX_(VALUE) sbb qword ptr [rbx + VALUE], r15
#define SBB_R15_TO_PTR_RCX_(VALUE) sbb qword ptr [rcx + VALUE], r15
#define SBB_R15_TO_PTR_RDX_(VALUE) sbb qword ptr [rdx + VALUE], r15
#define SBB_R15_TO_PTR_RDI_(VALUE) sbb qword ptr [rdi + VALUE], r15
#define SBB_R15_TO_PTR_RSI_(VALUE) sbb qword ptr [rsi + VALUE], r15
#define SBB_R15_TO_PTR_RBP_(VALUE) sbb qword ptr [rbp + VALUE], r15
#define SBB_R15_TO_PTR_RSP_(VALUE) sbb qword ptr [rsp + VALUE], r15
#define SBB_R15_TO_PTR_R8_(VALUE) sbb qword ptr [r8 + VALUE], r15
#define SBB_R15_TO_PTR_R9_(VALUE) sbb qword ptr [r9 + VALUE], r15
#define SBB_R15_TO_PTR_R10_(VALUE) sbb qword ptr [r10 + VALUE], r15
#define SBB_R15_TO_PTR_R11_(VALUE) sbb qword ptr [r11 + VALUE], r15
#define SBB_R15_TO_PTR_R12_(VALUE) sbb qword ptr [r12 + VALUE], r15
#define SBB_R15_TO_PTR_R13_(VALUE) sbb qword ptr [r13 + VALUE], r15
#define SBB_R15_TO_PTR_R14_(VALUE) sbb qword ptr [r14 + VALUE], r15
#define SBB_R15_TO_PTR_R15_(VALUE) sbb qword ptr [r15 + VALUE], r15
#define SBB_R15_TO_PTR_EAX_(VALUE) sbb qword ptr [eax + VALUE], r15
#define SBB_R15_TO_PTR_EBX_(VALUE) sbb qword ptr [ebx + VALUE], r15
#define SBB_R15_TO_PTR_ECX_(VALUE) sbb qword ptr [ecx + VALUE], r15
#define SBB_R15_TO_PTR_EDX_(VALUE) sbb qword ptr [edx + VALUE], r15
#define SBB_R15_TO_PTR_EDI_(VALUE) sbb qword ptr [edi + VALUE], r15
#define SBB_R15_TO_PTR_ESI_(VALUE) sbb qword ptr [esi + VALUE], r15
#define SBB_R15_TO_PTR_EBP_(VALUE) sbb qword ptr [ebp + VALUE], r15
#define SBB_R15_TO_PTR_ESP_(VALUE) sbb qword ptr [esp + VALUE], r15
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
