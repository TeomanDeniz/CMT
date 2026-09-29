#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************* [v] 64-BIT MEMORY [v] ************************** */
#define XCHG_RAX_FROM_PTR_(VALUE) xchg rax, qword ptr [VALUE]
#define XCHG_RBX_FROM_PTR_(VALUE) xchg rbx, qword ptr [VALUE]
#define XCHG_RCX_FROM_PTR_(VALUE) xchg rcx, qword ptr [VALUE]
#define XCHG_RDX_FROM_PTR_(VALUE) xchg rdx, qword ptr [VALUE]
#define XCHG_RDI_FROM_PTR_(VALUE) xchg rdi, qword ptr [VALUE]
#define XCHG_RSI_FROM_PTR_(VALUE) xchg rsi, qword ptr [VALUE]
#define XCHG_RBP_FROM_PTR_(VALUE) xchg rbp, qword ptr [VALUE]
#define XCHG_RSP_FROM_PTR_(VALUE) xchg rsp, qword ptr [VALUE]
#define XCHG_R8_FROM_PTR_(VALUE) xchg r8, qword ptr [VALUE]
#define XCHG_R9_FROM_PTR_(VALUE) xchg r9, qword ptr [VALUE]
#define XCHG_R10_FROM_PTR_(VALUE) xchg r10, qword ptr [VALUE]
#define XCHG_R11_FROM_PTR_(VALUE) xchg r11, qword ptr [VALUE]
#define XCHG_R12_FROM_PTR_(VALUE) xchg r12, qword ptr [VALUE]
#define XCHG_R13_FROM_PTR_(VALUE) xchg r13, qword ptr [VALUE]
#define XCHG_R14_FROM_PTR_(VALUE) xchg r14, qword ptr [VALUE]
#define XCHG_R15_FROM_PTR_(VALUE) xchg r15, qword ptr [VALUE]

#define XCHG_RAX_TO_PTR_(VALUE) xchg qword ptr [VALUE], rax
#define XCHG_RBX_TO_PTR_(VALUE) xchg qword ptr [VALUE], rbx
#define XCHG_RCX_TO_PTR_(VALUE) xchg qword ptr [VALUE], rcx
#define XCHG_RDX_TO_PTR_(VALUE) xchg qword ptr [VALUE], rdx
#define XCHG_RDI_TO_PTR_(VALUE) xchg qword ptr [VALUE], rdi
#define XCHG_RSI_TO_PTR_(VALUE) xchg qword ptr [VALUE], rsi
#define XCHG_RBP_TO_PTR_(VALUE) xchg qword ptr [VALUE], rbp
#define XCHG_RSP_TO_PTR_(VALUE) xchg qword ptr [VALUE], rsp
#define XCHG_R8_TO_PTR_(VALUE) xchg qword ptr [VALUE], r8
#define XCHG_R9_TO_PTR_(VALUE) xchg qword ptr [VALUE], r9
#define XCHG_R10_TO_PTR_(VALUE) xchg qword ptr [VALUE], r10
#define XCHG_R11_TO_PTR_(VALUE) xchg qword ptr [VALUE], r11
#define XCHG_R12_TO_PTR_(VALUE) xchg qword ptr [VALUE], r12
#define XCHG_R13_TO_PTR_(VALUE) xchg qword ptr [VALUE], r13
#define XCHG_R14_TO_PTR_(VALUE) xchg qword ptr [VALUE], r14
#define XCHG_R15_TO_PTR_(VALUE) xchg qword ptr [VALUE], r15

#define XCHG_RAX_FROM_PTR_RAX xchg rax, qword ptr [rax]
#define XCHG_RAX_FROM_PTR_RBX xchg rax, qword ptr [rbx]
#define XCHG_RAX_FROM_PTR_RCX xchg rax, qword ptr [rcx]
#define XCHG_RAX_FROM_PTR_RDX xchg rax, qword ptr [rdx]
#define XCHG_RAX_FROM_PTR_RDI xchg rax, qword ptr [rdi]
#define XCHG_RAX_FROM_PTR_RSI xchg rax, qword ptr [rsi]
#define XCHG_RAX_FROM_PTR_RBP xchg rax, qword ptr [rbp]
#define XCHG_RAX_FROM_PTR_RSP xchg rax, qword ptr [rsp]
#define XCHG_RAX_FROM_PTR_R8 xchg rax, qword ptr [r8]
#define XCHG_RAX_FROM_PTR_R9 xchg rax, qword ptr [r9]
#define XCHG_RAX_FROM_PTR_R10 xchg rax, qword ptr [r10]
#define XCHG_RAX_FROM_PTR_R11 xchg rax, qword ptr [r11]
#define XCHG_RAX_FROM_PTR_R12 xchg rax, qword ptr [r12]
#define XCHG_RAX_FROM_PTR_R13 xchg rax, qword ptr [r13]
#define XCHG_RAX_FROM_PTR_R14 xchg rax, qword ptr [r14]
#define XCHG_RAX_FROM_PTR_R15 xchg rax, qword ptr [r15]
#define XCHG_RAX_FROM_PTR_EAX xchg rax, qword ptr [eax]
#define XCHG_RAX_FROM_PTR_EBX xchg rax, qword ptr [ebx]
#define XCHG_RAX_FROM_PTR_ECX xchg rax, qword ptr [ecx]
#define XCHG_RAX_FROM_PTR_EDX xchg rax, qword ptr [edx]
#define XCHG_RAX_FROM_PTR_EDI xchg rax, qword ptr [edi]
#define XCHG_RAX_FROM_PTR_ESI xchg rax, qword ptr [esi]
#define XCHG_RAX_FROM_PTR_EBP xchg rax, qword ptr [ebp]
#define XCHG_RAX_FROM_PTR_ESP xchg rax, qword ptr [esp]

#define XCHG_RBX_FROM_PTR_RAX xchg rbx, qword ptr [rax]
#define XCHG_RBX_FROM_PTR_RBX xchg rbx, qword ptr [rbx]
#define XCHG_RBX_FROM_PTR_RCX xchg rbx, qword ptr [rcx]
#define XCHG_RBX_FROM_PTR_RDX xchg rbx, qword ptr [rdx]
#define XCHG_RBX_FROM_PTR_RDI xchg rbx, qword ptr [rdi]
#define XCHG_RBX_FROM_PTR_RSI xchg rbx, qword ptr [rsi]
#define XCHG_RBX_FROM_PTR_RBP xchg rbx, qword ptr [rbp]
#define XCHG_RBX_FROM_PTR_RSP xchg rbx, qword ptr [rsp]
#define XCHG_RBX_FROM_PTR_R8 xchg rbx, qword ptr [r8]
#define XCHG_RBX_FROM_PTR_R9 xchg rbx, qword ptr [r9]
#define XCHG_RBX_FROM_PTR_R10 xchg rbx, qword ptr [r10]
#define XCHG_RBX_FROM_PTR_R11 xchg rbx, qword ptr [r11]
#define XCHG_RBX_FROM_PTR_R12 xchg rbx, qword ptr [r12]
#define XCHG_RBX_FROM_PTR_R13 xchg rbx, qword ptr [r13]
#define XCHG_RBX_FROM_PTR_R14 xchg rbx, qword ptr [r14]
#define XCHG_RBX_FROM_PTR_R15 xchg rbx, qword ptr [r15]
#define XCHG_RBX_FROM_PTR_EAX xchg rbx, qword ptr [eax]
#define XCHG_RBX_FROM_PTR_EBX xchg rbx, qword ptr [ebx]
#define XCHG_RBX_FROM_PTR_ECX xchg rbx, qword ptr [ecx]
#define XCHG_RBX_FROM_PTR_EDX xchg rbx, qword ptr [edx]
#define XCHG_RBX_FROM_PTR_EDI xchg rbx, qword ptr [edi]
#define XCHG_RBX_FROM_PTR_ESI xchg rbx, qword ptr [esi]
#define XCHG_RBX_FROM_PTR_EBP xchg rbx, qword ptr [ebp]
#define XCHG_RBX_FROM_PTR_ESP xchg rbx, qword ptr [esp]

#define XCHG_RCX_FROM_PTR_RAX xchg rcx, qword ptr [rax]
#define XCHG_RCX_FROM_PTR_RBX xchg rcx, qword ptr [rbx]
#define XCHG_RCX_FROM_PTR_RCX xchg rcx, qword ptr [rcx]
#define XCHG_RCX_FROM_PTR_RDX xchg rcx, qword ptr [rdx]
#define XCHG_RCX_FROM_PTR_RDI xchg rcx, qword ptr [rdi]
#define XCHG_RCX_FROM_PTR_RSI xchg rcx, qword ptr [rsi]
#define XCHG_RCX_FROM_PTR_RBP xchg rcx, qword ptr [rbp]
#define XCHG_RCX_FROM_PTR_RSP xchg rcx, qword ptr [rsp]
#define XCHG_RCX_FROM_PTR_R8 xchg rcx, qword ptr [r8]
#define XCHG_RCX_FROM_PTR_R9 xchg rcx, qword ptr [r9]
#define XCHG_RCX_FROM_PTR_R10 xchg rcx, qword ptr [r10]
#define XCHG_RCX_FROM_PTR_R11 xchg rcx, qword ptr [r11]
#define XCHG_RCX_FROM_PTR_R12 xchg rcx, qword ptr [r12]
#define XCHG_RCX_FROM_PTR_R13 xchg rcx, qword ptr [r13]
#define XCHG_RCX_FROM_PTR_R14 xchg rcx, qword ptr [r14]
#define XCHG_RCX_FROM_PTR_R15 xchg rcx, qword ptr [r15]
#define XCHG_RCX_FROM_PTR_EAX xchg rcx, qword ptr [eax]
#define XCHG_RCX_FROM_PTR_EBX xchg rcx, qword ptr [ebx]
#define XCHG_RCX_FROM_PTR_ECX xchg rcx, qword ptr [ecx]
#define XCHG_RCX_FROM_PTR_EDX xchg rcx, qword ptr [edx]
#define XCHG_RCX_FROM_PTR_EDI xchg rcx, qword ptr [edi]
#define XCHG_RCX_FROM_PTR_ESI xchg rcx, qword ptr [esi]
#define XCHG_RCX_FROM_PTR_EBP xchg rcx, qword ptr [ebp]
#define XCHG_RCX_FROM_PTR_ESP xchg rcx, qword ptr [esp]

#define XCHG_RDX_FROM_PTR_RAX xchg rdx, qword ptr [rax]
#define XCHG_RDX_FROM_PTR_RBX xchg rdx, qword ptr [rbx]
#define XCHG_RDX_FROM_PTR_RCX xchg rdx, qword ptr [rcx]
#define XCHG_RDX_FROM_PTR_RDX xchg rdx, qword ptr [rdx]
#define XCHG_RDX_FROM_PTR_RDI xchg rdx, qword ptr [rdi]
#define XCHG_RDX_FROM_PTR_RSI xchg rdx, qword ptr [rsi]
#define XCHG_RDX_FROM_PTR_RBP xchg rdx, qword ptr [rbp]
#define XCHG_RDX_FROM_PTR_RSP xchg rdx, qword ptr [rsp]
#define XCHG_RDX_FROM_PTR_R8 xchg rdx, qword ptr [r8]
#define XCHG_RDX_FROM_PTR_R9 xchg rdx, qword ptr [r9]
#define XCHG_RDX_FROM_PTR_R10 xchg rdx, qword ptr [r10]
#define XCHG_RDX_FROM_PTR_R11 xchg rdx, qword ptr [r11]
#define XCHG_RDX_FROM_PTR_R12 xchg rdx, qword ptr [r12]
#define XCHG_RDX_FROM_PTR_R13 xchg rdx, qword ptr [r13]
#define XCHG_RDX_FROM_PTR_R14 xchg rdx, qword ptr [r14]
#define XCHG_RDX_FROM_PTR_R15 xchg rdx, qword ptr [r15]
#define XCHG_RDX_FROM_PTR_EAX xchg rdx, qword ptr [eax]
#define XCHG_RDX_FROM_PTR_EBX xchg rdx, qword ptr [ebx]
#define XCHG_RDX_FROM_PTR_ECX xchg rdx, qword ptr [ecx]
#define XCHG_RDX_FROM_PTR_EDX xchg rdx, qword ptr [edx]
#define XCHG_RDX_FROM_PTR_EDI xchg rdx, qword ptr [edi]
#define XCHG_RDX_FROM_PTR_ESI xchg rdx, qword ptr [esi]
#define XCHG_RDX_FROM_PTR_EBP xchg rdx, qword ptr [ebp]
#define XCHG_RDX_FROM_PTR_ESP xchg rdx, qword ptr [esp]

#define XCHG_RDI_FROM_PTR_RAX xchg rdi, qword ptr [rax]
#define XCHG_RDI_FROM_PTR_RBX xchg rdi, qword ptr [rbx]
#define XCHG_RDI_FROM_PTR_RCX xchg rdi, qword ptr [rcx]
#define XCHG_RDI_FROM_PTR_RDX xchg rdi, qword ptr [rdx]
#define XCHG_RDI_FROM_PTR_RDI xchg rdi, qword ptr [rdi]
#define XCHG_RDI_FROM_PTR_RSI xchg rdi, qword ptr [rsi]
#define XCHG_RDI_FROM_PTR_RBP xchg rdi, qword ptr [rbp]
#define XCHG_RDI_FROM_PTR_RSP xchg rdi, qword ptr [rsp]
#define XCHG_RDI_FROM_PTR_R8 xchg rdi, qword ptr [r8]
#define XCHG_RDI_FROM_PTR_R9 xchg rdi, qword ptr [r9]
#define XCHG_RDI_FROM_PTR_R10 xchg rdi, qword ptr [r10]
#define XCHG_RDI_FROM_PTR_R11 xchg rdi, qword ptr [r11]
#define XCHG_RDI_FROM_PTR_R12 xchg rdi, qword ptr [r12]
#define XCHG_RDI_FROM_PTR_R13 xchg rdi, qword ptr [r13]
#define XCHG_RDI_FROM_PTR_R14 xchg rdi, qword ptr [r14]
#define XCHG_RDI_FROM_PTR_R15 xchg rdi, qword ptr [r15]
#define XCHG_RDI_FROM_PTR_EAX xchg rdi, qword ptr [eax]
#define XCHG_RDI_FROM_PTR_EBX xchg rdi, qword ptr [ebx]
#define XCHG_RDI_FROM_PTR_ECX xchg rdi, qword ptr [ecx]
#define XCHG_RDI_FROM_PTR_EDX xchg rdi, qword ptr [edx]
#define XCHG_RDI_FROM_PTR_EDI xchg rdi, qword ptr [edi]
#define XCHG_RDI_FROM_PTR_ESI xchg rdi, qword ptr [esi]
#define XCHG_RDI_FROM_PTR_EBP xchg rdi, qword ptr [ebp]
#define XCHG_RDI_FROM_PTR_ESP xchg rdi, qword ptr [esp]

#define XCHG_RSI_FROM_PTR_RAX xchg rsi, qword ptr [rax]
#define XCHG_RSI_FROM_PTR_RBX xchg rsi, qword ptr [rbx]
#define XCHG_RSI_FROM_PTR_RCX xchg rsi, qword ptr [rcx]
#define XCHG_RSI_FROM_PTR_RDX xchg rsi, qword ptr [rdx]
#define XCHG_RSI_FROM_PTR_RDI xchg rsi, qword ptr [rdi]
#define XCHG_RSI_FROM_PTR_RSI xchg rsi, qword ptr [rsi]
#define XCHG_RSI_FROM_PTR_RBP xchg rsi, qword ptr [rbp]
#define XCHG_RSI_FROM_PTR_RSP xchg rsi, qword ptr [rsp]
#define XCHG_RSI_FROM_PTR_R8 xchg rsi, qword ptr [r8]
#define XCHG_RSI_FROM_PTR_R9 xchg rsi, qword ptr [r9]
#define XCHG_RSI_FROM_PTR_R10 xchg rsi, qword ptr [r10]
#define XCHG_RSI_FROM_PTR_R11 xchg rsi, qword ptr [r11]
#define XCHG_RSI_FROM_PTR_R12 xchg rsi, qword ptr [r12]
#define XCHG_RSI_FROM_PTR_R13 xchg rsi, qword ptr [r13]
#define XCHG_RSI_FROM_PTR_R14 xchg rsi, qword ptr [r14]
#define XCHG_RSI_FROM_PTR_R15 xchg rsi, qword ptr [r15]
#define XCHG_RSI_FROM_PTR_EAX xchg rsi, qword ptr [eax]
#define XCHG_RSI_FROM_PTR_EBX xchg rsi, qword ptr [ebx]
#define XCHG_RSI_FROM_PTR_ECX xchg rsi, qword ptr [ecx]
#define XCHG_RSI_FROM_PTR_EDX xchg rsi, qword ptr [edx]
#define XCHG_RSI_FROM_PTR_EDI xchg rsi, qword ptr [edi]
#define XCHG_RSI_FROM_PTR_ESI xchg rsi, qword ptr [esi]
#define XCHG_RSI_FROM_PTR_EBP xchg rsi, qword ptr [ebp]
#define XCHG_RSI_FROM_PTR_ESP xchg rsi, qword ptr [esp]

#define XCHG_RBP_FROM_PTR_RAX xchg rbp, qword ptr [rax]
#define XCHG_RBP_FROM_PTR_RBX xchg rbp, qword ptr [rbx]
#define XCHG_RBP_FROM_PTR_RCX xchg rbp, qword ptr [rcx]
#define XCHG_RBP_FROM_PTR_RDX xchg rbp, qword ptr [rdx]
#define XCHG_RBP_FROM_PTR_RDI xchg rbp, qword ptr [rdi]
#define XCHG_RBP_FROM_PTR_RSI xchg rbp, qword ptr [rsi]
#define XCHG_RBP_FROM_PTR_RBP xchg rbp, qword ptr [rbp]
#define XCHG_RBP_FROM_PTR_RSP xchg rbp, qword ptr [rsp]
#define XCHG_RBP_FROM_PTR_R8 xchg rbp, qword ptr [r8]
#define XCHG_RBP_FROM_PTR_R9 xchg rbp, qword ptr [r9]
#define XCHG_RBP_FROM_PTR_R10 xchg rbp, qword ptr [r10]
#define XCHG_RBP_FROM_PTR_R11 xchg rbp, qword ptr [r11]
#define XCHG_RBP_FROM_PTR_R12 xchg rbp, qword ptr [r12]
#define XCHG_RBP_FROM_PTR_R13 xchg rbp, qword ptr [r13]
#define XCHG_RBP_FROM_PTR_R14 xchg rbp, qword ptr [r14]
#define XCHG_RBP_FROM_PTR_R15 xchg rbp, qword ptr [r15]
#define XCHG_RBP_FROM_PTR_EAX xchg rbp, qword ptr [eax]
#define XCHG_RBP_FROM_PTR_EBX xchg rbp, qword ptr [ebx]
#define XCHG_RBP_FROM_PTR_ECX xchg rbp, qword ptr [ecx]
#define XCHG_RBP_FROM_PTR_EDX xchg rbp, qword ptr [edx]
#define XCHG_RBP_FROM_PTR_EDI xchg rbp, qword ptr [edi]
#define XCHG_RBP_FROM_PTR_ESI xchg rbp, qword ptr [esi]
#define XCHG_RBP_FROM_PTR_EBP xchg rbp, qword ptr [ebp]
#define XCHG_RBP_FROM_PTR_ESP xchg rbp, qword ptr [esp]

#define XCHG_RSP_FROM_PTR_RAX xchg rsp, qword ptr [rax]
#define XCHG_RSP_FROM_PTR_RBX xchg rsp, qword ptr [rbx]
#define XCHG_RSP_FROM_PTR_RCX xchg rsp, qword ptr [rcx]
#define XCHG_RSP_FROM_PTR_RDX xchg rsp, qword ptr [rdx]
#define XCHG_RSP_FROM_PTR_RDI xchg rsp, qword ptr [rdi]
#define XCHG_RSP_FROM_PTR_RSI xchg rsp, qword ptr [rsi]
#define XCHG_RSP_FROM_PTR_RBP xchg rsp, qword ptr [rbp]
#define XCHG_RSP_FROM_PTR_RSP xchg rsp, qword ptr [rsp]
#define XCHG_RSP_FROM_PTR_R8 xchg rsp, qword ptr [r8]
#define XCHG_RSP_FROM_PTR_R9 xchg rsp, qword ptr [r9]
#define XCHG_RSP_FROM_PTR_R10 xchg rsp, qword ptr [r10]
#define XCHG_RSP_FROM_PTR_R11 xchg rsp, qword ptr [r11]
#define XCHG_RSP_FROM_PTR_R12 xchg rsp, qword ptr [r12]
#define XCHG_RSP_FROM_PTR_R13 xchg rsp, qword ptr [r13]
#define XCHG_RSP_FROM_PTR_R14 xchg rsp, qword ptr [r14]
#define XCHG_RSP_FROM_PTR_R15 xchg rsp, qword ptr [r15]
#define XCHG_RSP_FROM_PTR_EAX xchg rsp, qword ptr [eax]
#define XCHG_RSP_FROM_PTR_EBX xchg rsp, qword ptr [ebx]
#define XCHG_RSP_FROM_PTR_ECX xchg rsp, qword ptr [ecx]
#define XCHG_RSP_FROM_PTR_EDX xchg rsp, qword ptr [edx]
#define XCHG_RSP_FROM_PTR_EDI xchg rsp, qword ptr [edi]
#define XCHG_RSP_FROM_PTR_ESI xchg rsp, qword ptr [esi]
#define XCHG_RSP_FROM_PTR_EBP xchg rsp, qword ptr [ebp]
#define XCHG_RSP_FROM_PTR_ESP xchg rsp, qword ptr [esp]

#define XCHG_R8_FROM_PTR_RAX xchg r8, qword ptr [rax]
#define XCHG_R8_FROM_PTR_RBX xchg r8, qword ptr [rbx]
#define XCHG_R8_FROM_PTR_RCX xchg r8, qword ptr [rcx]
#define XCHG_R8_FROM_PTR_RDX xchg r8, qword ptr [rdx]
#define XCHG_R8_FROM_PTR_RDI xchg r8, qword ptr [rdi]
#define XCHG_R8_FROM_PTR_RSI xchg r8, qword ptr [rsi]
#define XCHG_R8_FROM_PTR_RBP xchg r8, qword ptr [rbp]
#define XCHG_R8_FROM_PTR_RSP xchg r8, qword ptr [rsp]
#define XCHG_R8_FROM_PTR_R8 xchg r8, qword ptr [r8]
#define XCHG_R8_FROM_PTR_R9 xchg r8, qword ptr [r9]
#define XCHG_R8_FROM_PTR_R10 xchg r8, qword ptr [r10]
#define XCHG_R8_FROM_PTR_R11 xchg r8, qword ptr [r11]
#define XCHG_R8_FROM_PTR_R12 xchg r8, qword ptr [r12]
#define XCHG_R8_FROM_PTR_R13 xchg r8, qword ptr [r13]
#define XCHG_R8_FROM_PTR_R14 xchg r8, qword ptr [r14]
#define XCHG_R8_FROM_PTR_R15 xchg r8, qword ptr [r15]
#define XCHG_R8_FROM_PTR_EAX xchg r8, qword ptr [eax]
#define XCHG_R8_FROM_PTR_EBX xchg r8, qword ptr [ebx]
#define XCHG_R8_FROM_PTR_ECX xchg r8, qword ptr [ecx]
#define XCHG_R8_FROM_PTR_EDX xchg r8, qword ptr [edx]
#define XCHG_R8_FROM_PTR_EDI xchg r8, qword ptr [edi]
#define XCHG_R8_FROM_PTR_ESI xchg r8, qword ptr [esi]
#define XCHG_R8_FROM_PTR_EBP xchg r8, qword ptr [ebp]
#define XCHG_R8_FROM_PTR_ESP xchg r8, qword ptr [esp]

#define XCHG_R9_FROM_PTR_RAX xchg r9, qword ptr [rax]
#define XCHG_R9_FROM_PTR_RBX xchg r9, qword ptr [rbx]
#define XCHG_R9_FROM_PTR_RCX xchg r9, qword ptr [rcx]
#define XCHG_R9_FROM_PTR_RDX xchg r9, qword ptr [rdx]
#define XCHG_R9_FROM_PTR_RDI xchg r9, qword ptr [rdi]
#define XCHG_R9_FROM_PTR_RSI xchg r9, qword ptr [rsi]
#define XCHG_R9_FROM_PTR_RBP xchg r9, qword ptr [rbp]
#define XCHG_R9_FROM_PTR_RSP xchg r9, qword ptr [rsp]
#define XCHG_R9_FROM_PTR_R8 xchg r9, qword ptr [r8]
#define XCHG_R9_FROM_PTR_R9 xchg r9, qword ptr [r9]
#define XCHG_R9_FROM_PTR_R10 xchg r9, qword ptr [r10]
#define XCHG_R9_FROM_PTR_R11 xchg r9, qword ptr [r11]
#define XCHG_R9_FROM_PTR_R12 xchg r9, qword ptr [r12]
#define XCHG_R9_FROM_PTR_R13 xchg r9, qword ptr [r13]
#define XCHG_R9_FROM_PTR_R14 xchg r9, qword ptr [r14]
#define XCHG_R9_FROM_PTR_R15 xchg r9, qword ptr [r15]
#define XCHG_R9_FROM_PTR_EAX xchg r9, qword ptr [eax]
#define XCHG_R9_FROM_PTR_EBX xchg r9, qword ptr [ebx]
#define XCHG_R9_FROM_PTR_ECX xchg r9, qword ptr [ecx]
#define XCHG_R9_FROM_PTR_EDX xchg r9, qword ptr [edx]
#define XCHG_R9_FROM_PTR_EDI xchg r9, qword ptr [edi]
#define XCHG_R9_FROM_PTR_ESI xchg r9, qword ptr [esi]
#define XCHG_R9_FROM_PTR_EBP xchg r9, qword ptr [ebp]
#define XCHG_R9_FROM_PTR_ESP xchg r9, qword ptr [esp]

#define XCHG_R10_FROM_PTR_RAX xchg r10, qword ptr [rax]
#define XCHG_R10_FROM_PTR_RBX xchg r10, qword ptr [rbx]
#define XCHG_R10_FROM_PTR_RCX xchg r10, qword ptr [rcx]
#define XCHG_R10_FROM_PTR_RDX xchg r10, qword ptr [rdx]
#define XCHG_R10_FROM_PTR_RDI xchg r10, qword ptr [rdi]
#define XCHG_R10_FROM_PTR_RSI xchg r10, qword ptr [rsi]
#define XCHG_R10_FROM_PTR_RBP xchg r10, qword ptr [rbp]
#define XCHG_R10_FROM_PTR_RSP xchg r10, qword ptr [rsp]
#define XCHG_R10_FROM_PTR_R8 xchg r10, qword ptr [r8]
#define XCHG_R10_FROM_PTR_R9 xchg r10, qword ptr [r9]
#define XCHG_R10_FROM_PTR_R10 xchg r10, qword ptr [r10]
#define XCHG_R10_FROM_PTR_R11 xchg r10, qword ptr [r11]
#define XCHG_R10_FROM_PTR_R12 xchg r10, qword ptr [r12]
#define XCHG_R10_FROM_PTR_R13 xchg r10, qword ptr [r13]
#define XCHG_R10_FROM_PTR_R14 xchg r10, qword ptr [r14]
#define XCHG_R10_FROM_PTR_R15 xchg r10, qword ptr [r15]
#define XCHG_R10_FROM_PTR_EAX xchg r10, qword ptr [eax]
#define XCHG_R10_FROM_PTR_EBX xchg r10, qword ptr [ebx]
#define XCHG_R10_FROM_PTR_ECX xchg r10, qword ptr [ecx]
#define XCHG_R10_FROM_PTR_EDX xchg r10, qword ptr [edx]
#define XCHG_R10_FROM_PTR_EDI xchg r10, qword ptr [edi]
#define XCHG_R10_FROM_PTR_ESI xchg r10, qword ptr [esi]
#define XCHG_R10_FROM_PTR_EBP xchg r10, qword ptr [ebp]
#define XCHG_R10_FROM_PTR_ESP xchg r10, qword ptr [esp]

#define XCHG_R11_FROM_PTR_RAX xchg r11, qword ptr [rax]
#define XCHG_R11_FROM_PTR_RBX xchg r11, qword ptr [rbx]
#define XCHG_R11_FROM_PTR_RCX xchg r11, qword ptr [rcx]
#define XCHG_R11_FROM_PTR_RDX xchg r11, qword ptr [rdx]
#define XCHG_R11_FROM_PTR_RDI xchg r11, qword ptr [rdi]
#define XCHG_R11_FROM_PTR_RSI xchg r11, qword ptr [rsi]
#define XCHG_R11_FROM_PTR_RBP xchg r11, qword ptr [rbp]
#define XCHG_R11_FROM_PTR_RSP xchg r11, qword ptr [rsp]
#define XCHG_R11_FROM_PTR_R8 xchg r11, qword ptr [r8]
#define XCHG_R11_FROM_PTR_R9 xchg r11, qword ptr [r9]
#define XCHG_R11_FROM_PTR_R10 xchg r11, qword ptr [r10]
#define XCHG_R11_FROM_PTR_R11 xchg r11, qword ptr [r11]
#define XCHG_R11_FROM_PTR_R12 xchg r11, qword ptr [r12]
#define XCHG_R11_FROM_PTR_R13 xchg r11, qword ptr [r13]
#define XCHG_R11_FROM_PTR_R14 xchg r11, qword ptr [r14]
#define XCHG_R11_FROM_PTR_R15 xchg r11, qword ptr [r15]
#define XCHG_R11_FROM_PTR_EAX xchg r11, qword ptr [eax]
#define XCHG_R11_FROM_PTR_EBX xchg r11, qword ptr [ebx]
#define XCHG_R11_FROM_PTR_ECX xchg r11, qword ptr [ecx]
#define XCHG_R11_FROM_PTR_EDX xchg r11, qword ptr [edx]
#define XCHG_R11_FROM_PTR_EDI xchg r11, qword ptr [edi]
#define XCHG_R11_FROM_PTR_ESI xchg r11, qword ptr [esi]
#define XCHG_R11_FROM_PTR_EBP xchg r11, qword ptr [ebp]
#define XCHG_R11_FROM_PTR_ESP xchg r11, qword ptr [esp]

#define XCHG_R12_FROM_PTR_RAX xchg r12, qword ptr [rax]
#define XCHG_R12_FROM_PTR_RBX xchg r12, qword ptr [rbx]
#define XCHG_R12_FROM_PTR_RCX xchg r12, qword ptr [rcx]
#define XCHG_R12_FROM_PTR_RDX xchg r12, qword ptr [rdx]
#define XCHG_R12_FROM_PTR_RDI xchg r12, qword ptr [rdi]
#define XCHG_R12_FROM_PTR_RSI xchg r12, qword ptr [rsi]
#define XCHG_R12_FROM_PTR_RBP xchg r12, qword ptr [rbp]
#define XCHG_R12_FROM_PTR_RSP xchg r12, qword ptr [rsp]
#define XCHG_R12_FROM_PTR_R8 xchg r12, qword ptr [r8]
#define XCHG_R12_FROM_PTR_R9 xchg r12, qword ptr [r9]
#define XCHG_R12_FROM_PTR_R10 xchg r12, qword ptr [r10]
#define XCHG_R12_FROM_PTR_R11 xchg r12, qword ptr [r11]
#define XCHG_R12_FROM_PTR_R12 xchg r12, qword ptr [r12]
#define XCHG_R12_FROM_PTR_R13 xchg r12, qword ptr [r13]
#define XCHG_R12_FROM_PTR_R14 xchg r12, qword ptr [r14]
#define XCHG_R12_FROM_PTR_R15 xchg r12, qword ptr [r15]
#define XCHG_R12_FROM_PTR_EAX xchg r12, qword ptr [eax]
#define XCHG_R12_FROM_PTR_EBX xchg r12, qword ptr [ebx]
#define XCHG_R12_FROM_PTR_ECX xchg r12, qword ptr [ecx]
#define XCHG_R12_FROM_PTR_EDX xchg r12, qword ptr [edx]
#define XCHG_R12_FROM_PTR_EDI xchg r12, qword ptr [edi]
#define XCHG_R12_FROM_PTR_ESI xchg r12, qword ptr [esi]
#define XCHG_R12_FROM_PTR_EBP xchg r12, qword ptr [ebp]
#define XCHG_R12_FROM_PTR_ESP xchg r12, qword ptr [esp]

#define XCHG_R13_FROM_PTR_RAX xchg r13, qword ptr [rax]
#define XCHG_R13_FROM_PTR_RBX xchg r13, qword ptr [rbx]
#define XCHG_R13_FROM_PTR_RCX xchg r13, qword ptr [rcx]
#define XCHG_R13_FROM_PTR_RDX xchg r13, qword ptr [rdx]
#define XCHG_R13_FROM_PTR_RDI xchg r13, qword ptr [rdi]
#define XCHG_R13_FROM_PTR_RSI xchg r13, qword ptr [rsi]
#define XCHG_R13_FROM_PTR_RBP xchg r13, qword ptr [rbp]
#define XCHG_R13_FROM_PTR_RSP xchg r13, qword ptr [rsp]
#define XCHG_R13_FROM_PTR_R8 xchg r13, qword ptr [r8]
#define XCHG_R13_FROM_PTR_R9 xchg r13, qword ptr [r9]
#define XCHG_R13_FROM_PTR_R10 xchg r13, qword ptr [r10]
#define XCHG_R13_FROM_PTR_R11 xchg r13, qword ptr [r11]
#define XCHG_R13_FROM_PTR_R12 xchg r13, qword ptr [r12]
#define XCHG_R13_FROM_PTR_R13 xchg r13, qword ptr [r13]
#define XCHG_R13_FROM_PTR_R14 xchg r13, qword ptr [r14]
#define XCHG_R13_FROM_PTR_R15 xchg r13, qword ptr [r15]
#define XCHG_R13_FROM_PTR_EAX xchg r13, qword ptr [eax]
#define XCHG_R13_FROM_PTR_EBX xchg r13, qword ptr [ebx]
#define XCHG_R13_FROM_PTR_ECX xchg r13, qword ptr [ecx]
#define XCHG_R13_FROM_PTR_EDX xchg r13, qword ptr [edx]
#define XCHG_R13_FROM_PTR_EDI xchg r13, qword ptr [edi]
#define XCHG_R13_FROM_PTR_ESI xchg r13, qword ptr [esi]
#define XCHG_R13_FROM_PTR_EBP xchg r13, qword ptr [ebp]
#define XCHG_R13_FROM_PTR_ESP xchg r13, qword ptr [esp]

#define XCHG_R14_FROM_PTR_RAX xchg r14, qword ptr [rax]
#define XCHG_R14_FROM_PTR_RBX xchg r14, qword ptr [rbx]
#define XCHG_R14_FROM_PTR_RCX xchg r14, qword ptr [rcx]
#define XCHG_R14_FROM_PTR_RDX xchg r14, qword ptr [rdx]
#define XCHG_R14_FROM_PTR_RDI xchg r14, qword ptr [rdi]
#define XCHG_R14_FROM_PTR_RSI xchg r14, qword ptr [rsi]
#define XCHG_R14_FROM_PTR_RBP xchg r14, qword ptr [rbp]
#define XCHG_R14_FROM_PTR_RSP xchg r14, qword ptr [rsp]
#define XCHG_R14_FROM_PTR_R8 xchg r14, qword ptr [r8]
#define XCHG_R14_FROM_PTR_R9 xchg r14, qword ptr [r9]
#define XCHG_R14_FROM_PTR_R10 xchg r14, qword ptr [r10]
#define XCHG_R14_FROM_PTR_R11 xchg r14, qword ptr [r11]
#define XCHG_R14_FROM_PTR_R12 xchg r14, qword ptr [r12]
#define XCHG_R14_FROM_PTR_R13 xchg r14, qword ptr [r13]
#define XCHG_R14_FROM_PTR_R14 xchg r14, qword ptr [r14]
#define XCHG_R14_FROM_PTR_R15 xchg r14, qword ptr [r15]
#define XCHG_R14_FROM_PTR_EAX xchg r14, qword ptr [eax]
#define XCHG_R14_FROM_PTR_EBX xchg r14, qword ptr [ebx]
#define XCHG_R14_FROM_PTR_ECX xchg r14, qword ptr [ecx]
#define XCHG_R14_FROM_PTR_EDX xchg r14, qword ptr [edx]
#define XCHG_R14_FROM_PTR_EDI xchg r14, qword ptr [edi]
#define XCHG_R14_FROM_PTR_ESI xchg r14, qword ptr [esi]
#define XCHG_R14_FROM_PTR_EBP xchg r14, qword ptr [ebp]
#define XCHG_R14_FROM_PTR_ESP xchg r14, qword ptr [esp]

#define XCHG_R15_FROM_PTR_RAX xchg r15, qword ptr [rax]
#define XCHG_R15_FROM_PTR_RBX xchg r15, qword ptr [rbx]
#define XCHG_R15_FROM_PTR_RCX xchg r15, qword ptr [rcx]
#define XCHG_R15_FROM_PTR_RDX xchg r15, qword ptr [rdx]
#define XCHG_R15_FROM_PTR_RDI xchg r15, qword ptr [rdi]
#define XCHG_R15_FROM_PTR_RSI xchg r15, qword ptr [rsi]
#define XCHG_R15_FROM_PTR_RBP xchg r15, qword ptr [rbp]
#define XCHG_R15_FROM_PTR_RSP xchg r15, qword ptr [rsp]
#define XCHG_R15_FROM_PTR_R8 xchg r15, qword ptr [r8]
#define XCHG_R15_FROM_PTR_R9 xchg r15, qword ptr [r9]
#define XCHG_R15_FROM_PTR_R10 xchg r15, qword ptr [r10]
#define XCHG_R15_FROM_PTR_R11 xchg r15, qword ptr [r11]
#define XCHG_R15_FROM_PTR_R12 xchg r15, qword ptr [r12]
#define XCHG_R15_FROM_PTR_R13 xchg r15, qword ptr [r13]
#define XCHG_R15_FROM_PTR_R14 xchg r15, qword ptr [r14]
#define XCHG_R15_FROM_PTR_R15 xchg r15, qword ptr [r15]
#define XCHG_R15_FROM_PTR_EAX xchg r15, qword ptr [eax]
#define XCHG_R15_FROM_PTR_EBX xchg r15, qword ptr [ebx]
#define XCHG_R15_FROM_PTR_ECX xchg r15, qword ptr [ecx]
#define XCHG_R15_FROM_PTR_EDX xchg r15, qword ptr [edx]
#define XCHG_R15_FROM_PTR_EDI xchg r15, qword ptr [edi]
#define XCHG_R15_FROM_PTR_ESI xchg r15, qword ptr [esi]
#define XCHG_R15_FROM_PTR_EBP xchg r15, qword ptr [ebp]
#define XCHG_R15_FROM_PTR_ESP xchg r15, qword ptr [esp]

#define XCHG_RAX_TO_PTR_RAX xchg qword ptr [rax], rax
#define XCHG_RAX_TO_PTR_RBX xchg qword ptr [rbx], rax
#define XCHG_RAX_TO_PTR_RCX xchg qword ptr [rcx], rax
#define XCHG_RAX_TO_PTR_RDX xchg qword ptr [rdx], rax
#define XCHG_RAX_TO_PTR_RDI xchg qword ptr [rdi], rax
#define XCHG_RAX_TO_PTR_RSI xchg qword ptr [rsi], rax
#define XCHG_RAX_TO_PTR_RBP xchg qword ptr [rbp], rax
#define XCHG_RAX_TO_PTR_RSP xchg qword ptr [rsp], rax
#define XCHG_RAX_TO_PTR_R8 xchg qword ptr [r8], rax
#define XCHG_RAX_TO_PTR_R9 xchg qword ptr [r9], rax
#define XCHG_RAX_TO_PTR_R10 xchg qword ptr [r10], rax
#define XCHG_RAX_TO_PTR_R11 xchg qword ptr [r11], rax
#define XCHG_RAX_TO_PTR_R12 xchg qword ptr [r12], rax
#define XCHG_RAX_TO_PTR_R13 xchg qword ptr [r13], rax
#define XCHG_RAX_TO_PTR_R14 xchg qword ptr [r14], rax
#define XCHG_RAX_TO_PTR_R15 xchg qword ptr [r15], rax
#define XCHG_RAX_TO_PTR_EAX xchg qword ptr [eax], rax
#define XCHG_RAX_TO_PTR_EBX xchg qword ptr [ebx], rax
#define XCHG_RAX_TO_PTR_ECX xchg qword ptr [ecx], rax
#define XCHG_RAX_TO_PTR_EDX xchg qword ptr [edx], rax
#define XCHG_RAX_TO_PTR_EDI xchg qword ptr [edi], rax
#define XCHG_RAX_TO_PTR_ESI xchg qword ptr [esi], rax
#define XCHG_RAX_TO_PTR_EBP xchg qword ptr [ebp], rax
#define XCHG_RAX_TO_PTR_ESP xchg qword ptr [esp], rax

#define XCHG_RBX_TO_PTR_RAX xchg qword ptr [rax], rbx
#define XCHG_RBX_TO_PTR_RBX xchg qword ptr [rbx], rbx
#define XCHG_RBX_TO_PTR_RCX xchg qword ptr [rcx], rbx
#define XCHG_RBX_TO_PTR_RDX xchg qword ptr [rdx], rbx
#define XCHG_RBX_TO_PTR_RDI xchg qword ptr [rdi], rbx
#define XCHG_RBX_TO_PTR_RSI xchg qword ptr [rsi], rbx
#define XCHG_RBX_TO_PTR_RBP xchg qword ptr [rbp], rbx
#define XCHG_RBX_TO_PTR_RSP xchg qword ptr [rsp], rbx
#define XCHG_RBX_TO_PTR_R8 xchg qword ptr [r8], rbx
#define XCHG_RBX_TO_PTR_R9 xchg qword ptr [r9], rbx
#define XCHG_RBX_TO_PTR_R10 xchg qword ptr [r10], rbx
#define XCHG_RBX_TO_PTR_R11 xchg qword ptr [r11], rbx
#define XCHG_RBX_TO_PTR_R12 xchg qword ptr [r12], rbx
#define XCHG_RBX_TO_PTR_R13 xchg qword ptr [r13], rbx
#define XCHG_RBX_TO_PTR_R14 xchg qword ptr [r14], rbx
#define XCHG_RBX_TO_PTR_R15 xchg qword ptr [r15], rbx
#define XCHG_RBX_TO_PTR_EAX xchg qword ptr [eax], rbx
#define XCHG_RBX_TO_PTR_EBX xchg qword ptr [ebx], rbx
#define XCHG_RBX_TO_PTR_ECX xchg qword ptr [ecx], rbx
#define XCHG_RBX_TO_PTR_EDX xchg qword ptr [edx], rbx
#define XCHG_RBX_TO_PTR_EDI xchg qword ptr [edi], rbx
#define XCHG_RBX_TO_PTR_ESI xchg qword ptr [esi], rbx
#define XCHG_RBX_TO_PTR_EBP xchg qword ptr [ebp], rbx
#define XCHG_RBX_TO_PTR_ESP xchg qword ptr [esp], rbx

#define XCHG_RCX_TO_PTR_RAX xchg qword ptr [rax], rcx
#define XCHG_RCX_TO_PTR_RBX xchg qword ptr [rbx], rcx
#define XCHG_RCX_TO_PTR_RCX xchg qword ptr [rcx], rcx
#define XCHG_RCX_TO_PTR_RDX xchg qword ptr [rdx], rcx
#define XCHG_RCX_TO_PTR_RDI xchg qword ptr [rdi], rcx
#define XCHG_RCX_TO_PTR_RSI xchg qword ptr [rsi], rcx
#define XCHG_RCX_TO_PTR_RBP xchg qword ptr [rbp], rcx
#define XCHG_RCX_TO_PTR_RSP xchg qword ptr [rsp], rcx
#define XCHG_RCX_TO_PTR_R8 xchg qword ptr [r8], rcx
#define XCHG_RCX_TO_PTR_R9 xchg qword ptr [r9], rcx
#define XCHG_RCX_TO_PTR_R10 xchg qword ptr [r10], rcx
#define XCHG_RCX_TO_PTR_R11 xchg qword ptr [r11], rcx
#define XCHG_RCX_TO_PTR_R12 xchg qword ptr [r12], rcx
#define XCHG_RCX_TO_PTR_R13 xchg qword ptr [r13], rcx
#define XCHG_RCX_TO_PTR_R14 xchg qword ptr [r14], rcx
#define XCHG_RCX_TO_PTR_R15 xchg qword ptr [r15], rcx
#define XCHG_RCX_TO_PTR_EAX xchg qword ptr [eax], rcx
#define XCHG_RCX_TO_PTR_EBX xchg qword ptr [ebx], rcx
#define XCHG_RCX_TO_PTR_ECX xchg qword ptr [ecx], rcx
#define XCHG_RCX_TO_PTR_EDX xchg qword ptr [edx], rcx
#define XCHG_RCX_TO_PTR_EDI xchg qword ptr [edi], rcx
#define XCHG_RCX_TO_PTR_ESI xchg qword ptr [esi], rcx
#define XCHG_RCX_TO_PTR_EBP xchg qword ptr [ebp], rcx
#define XCHG_RCX_TO_PTR_ESP xchg qword ptr [esp], rcx

#define XCHG_RDX_TO_PTR_RAX xchg qword ptr [rax], rdx
#define XCHG_RDX_TO_PTR_RBX xchg qword ptr [rbx], rdx
#define XCHG_RDX_TO_PTR_RCX xchg qword ptr [rcx], rdx
#define XCHG_RDX_TO_PTR_RDX xchg qword ptr [rdx], rdx
#define XCHG_RDX_TO_PTR_RDI xchg qword ptr [rdi], rdx
#define XCHG_RDX_TO_PTR_RSI xchg qword ptr [rsi], rdx
#define XCHG_RDX_TO_PTR_RBP xchg qword ptr [rbp], rdx
#define XCHG_RDX_TO_PTR_RSP xchg qword ptr [rsp], rdx
#define XCHG_RDX_TO_PTR_R8 xchg qword ptr [r8], rdx
#define XCHG_RDX_TO_PTR_R9 xchg qword ptr [r9], rdx
#define XCHG_RDX_TO_PTR_R10 xchg qword ptr [r10], rdx
#define XCHG_RDX_TO_PTR_R11 xchg qword ptr [r11], rdx
#define XCHG_RDX_TO_PTR_R12 xchg qword ptr [r12], rdx
#define XCHG_RDX_TO_PTR_R13 xchg qword ptr [r13], rdx
#define XCHG_RDX_TO_PTR_R14 xchg qword ptr [r14], rdx
#define XCHG_RDX_TO_PTR_R15 xchg qword ptr [r15], rdx
#define XCHG_RDX_TO_PTR_EAX xchg qword ptr [eax], rdx
#define XCHG_RDX_TO_PTR_EBX xchg qword ptr [ebx], rdx
#define XCHG_RDX_TO_PTR_ECX xchg qword ptr [ecx], rdx
#define XCHG_RDX_TO_PTR_EDX xchg qword ptr [edx], rdx
#define XCHG_RDX_TO_PTR_EDI xchg qword ptr [edi], rdx
#define XCHG_RDX_TO_PTR_ESI xchg qword ptr [esi], rdx
#define XCHG_RDX_TO_PTR_EBP xchg qword ptr [ebp], rdx
#define XCHG_RDX_TO_PTR_ESP xchg qword ptr [esp], rdx

#define XCHG_RDI_TO_PTR_RAX xchg qword ptr [rax], rdi
#define XCHG_RDI_TO_PTR_RBX xchg qword ptr [rbx], rdi
#define XCHG_RDI_TO_PTR_RCX xchg qword ptr [rcx], rdi
#define XCHG_RDI_TO_PTR_RDX xchg qword ptr [rdx], rdi
#define XCHG_RDI_TO_PTR_RDI xchg qword ptr [rdi], rdi
#define XCHG_RDI_TO_PTR_RSI xchg qword ptr [rsi], rdi
#define XCHG_RDI_TO_PTR_RBP xchg qword ptr [rbp], rdi
#define XCHG_RDI_TO_PTR_RSP xchg qword ptr [rsp], rdi
#define XCHG_RDI_TO_PTR_R8 xchg qword ptr [r8], rdi
#define XCHG_RDI_TO_PTR_R9 xchg qword ptr [r9], rdi
#define XCHG_RDI_TO_PTR_R10 xchg qword ptr [r10], rdi
#define XCHG_RDI_TO_PTR_R11 xchg qword ptr [r11], rdi
#define XCHG_RDI_TO_PTR_R12 xchg qword ptr [r12], rdi
#define XCHG_RDI_TO_PTR_R13 xchg qword ptr [r13], rdi
#define XCHG_RDI_TO_PTR_R14 xchg qword ptr [r14], rdi
#define XCHG_RDI_TO_PTR_R15 xchg qword ptr [r15], rdi
#define XCHG_RDI_TO_PTR_EAX xchg qword ptr [eax], rdi
#define XCHG_RDI_TO_PTR_EBX xchg qword ptr [ebx], rdi
#define XCHG_RDI_TO_PTR_ECX xchg qword ptr [ecx], rdi
#define XCHG_RDI_TO_PTR_EDX xchg qword ptr [edx], rdi
#define XCHG_RDI_TO_PTR_EDI xchg qword ptr [edi], rdi
#define XCHG_RDI_TO_PTR_ESI xchg qword ptr [esi], rdi
#define XCHG_RDI_TO_PTR_EBP xchg qword ptr [ebp], rdi
#define XCHG_RDI_TO_PTR_ESP xchg qword ptr [esp], rdi

#define XCHG_RSI_TO_PTR_RAX xchg qword ptr [rax], rsi
#define XCHG_RSI_TO_PTR_RBX xchg qword ptr [rbx], rsi
#define XCHG_RSI_TO_PTR_RCX xchg qword ptr [rcx], rsi
#define XCHG_RSI_TO_PTR_RDX xchg qword ptr [rdx], rsi
#define XCHG_RSI_TO_PTR_RDI xchg qword ptr [rdi], rsi
#define XCHG_RSI_TO_PTR_RSI xchg qword ptr [rsi], rsi
#define XCHG_RSI_TO_PTR_RBP xchg qword ptr [rbp], rsi
#define XCHG_RSI_TO_PTR_RSP xchg qword ptr [rsp], rsi
#define XCHG_RSI_TO_PTR_R8 xchg qword ptr [r8], rsi
#define XCHG_RSI_TO_PTR_R9 xchg qword ptr [r9], rsi
#define XCHG_RSI_TO_PTR_R10 xchg qword ptr [r10], rsi
#define XCHG_RSI_TO_PTR_R11 xchg qword ptr [r11], rsi
#define XCHG_RSI_TO_PTR_R12 xchg qword ptr [r12], rsi
#define XCHG_RSI_TO_PTR_R13 xchg qword ptr [r13], rsi
#define XCHG_RSI_TO_PTR_R14 xchg qword ptr [r14], rsi
#define XCHG_RSI_TO_PTR_R15 xchg qword ptr [r15], rsi
#define XCHG_RSI_TO_PTR_EAX xchg qword ptr [eax], rsi
#define XCHG_RSI_TO_PTR_EBX xchg qword ptr [ebx], rsi
#define XCHG_RSI_TO_PTR_ECX xchg qword ptr [ecx], rsi
#define XCHG_RSI_TO_PTR_EDX xchg qword ptr [edx], rsi
#define XCHG_RSI_TO_PTR_EDI xchg qword ptr [edi], rsi
#define XCHG_RSI_TO_PTR_ESI xchg qword ptr [esi], rsi
#define XCHG_RSI_TO_PTR_EBP xchg qword ptr [ebp], rsi
#define XCHG_RSI_TO_PTR_ESP xchg qword ptr [esp], rsi

#define XCHG_RBP_TO_PTR_RAX xchg qword ptr [rax], rbp
#define XCHG_RBP_TO_PTR_RBX xchg qword ptr [rbx], rbp
#define XCHG_RBP_TO_PTR_RCX xchg qword ptr [rcx], rbp
#define XCHG_RBP_TO_PTR_RDX xchg qword ptr [rdx], rbp
#define XCHG_RBP_TO_PTR_RDI xchg qword ptr [rdi], rbp
#define XCHG_RBP_TO_PTR_RSI xchg qword ptr [rsi], rbp
#define XCHG_RBP_TO_PTR_RBP xchg qword ptr [rbp], rbp
#define XCHG_RBP_TO_PTR_RSP xchg qword ptr [rsp], rbp
#define XCHG_RBP_TO_PTR_R8 xchg qword ptr [r8], rbp
#define XCHG_RBP_TO_PTR_R9 xchg qword ptr [r9], rbp
#define XCHG_RBP_TO_PTR_R10 xchg qword ptr [r10], rbp
#define XCHG_RBP_TO_PTR_R11 xchg qword ptr [r11], rbp
#define XCHG_RBP_TO_PTR_R12 xchg qword ptr [r12], rbp
#define XCHG_RBP_TO_PTR_R13 xchg qword ptr [r13], rbp
#define XCHG_RBP_TO_PTR_R14 xchg qword ptr [r14], rbp
#define XCHG_RBP_TO_PTR_R15 xchg qword ptr [r15], rbp
#define XCHG_RBP_TO_PTR_EAX xchg qword ptr [eax], rbp
#define XCHG_RBP_TO_PTR_EBX xchg qword ptr [ebx], rbp
#define XCHG_RBP_TO_PTR_ECX xchg qword ptr [ecx], rbp
#define XCHG_RBP_TO_PTR_EDX xchg qword ptr [edx], rbp
#define XCHG_RBP_TO_PTR_EDI xchg qword ptr [edi], rbp
#define XCHG_RBP_TO_PTR_ESI xchg qword ptr [esi], rbp
#define XCHG_RBP_TO_PTR_EBP xchg qword ptr [ebp], rbp
#define XCHG_RBP_TO_PTR_ESP xchg qword ptr [esp], rbp

#define XCHG_RSP_TO_PTR_RAX xchg qword ptr [rax], rsp
#define XCHG_RSP_TO_PTR_RBX xchg qword ptr [rbx], rsp
#define XCHG_RSP_TO_PTR_RCX xchg qword ptr [rcx], rsp
#define XCHG_RSP_TO_PTR_RDX xchg qword ptr [rdx], rsp
#define XCHG_RSP_TO_PTR_RDI xchg qword ptr [rdi], rsp
#define XCHG_RSP_TO_PTR_RSI xchg qword ptr [rsi], rsp
#define XCHG_RSP_TO_PTR_RBP xchg qword ptr [rbp], rsp
#define XCHG_RSP_TO_PTR_RSP xchg qword ptr [rsp], rsp
#define XCHG_RSP_TO_PTR_R8 xchg qword ptr [r8], rsp
#define XCHG_RSP_TO_PTR_R9 xchg qword ptr [r9], rsp
#define XCHG_RSP_TO_PTR_R10 xchg qword ptr [r10], rsp
#define XCHG_RSP_TO_PTR_R11 xchg qword ptr [r11], rsp
#define XCHG_RSP_TO_PTR_R12 xchg qword ptr [r12], rsp
#define XCHG_RSP_TO_PTR_R13 xchg qword ptr [r13], rsp
#define XCHG_RSP_TO_PTR_R14 xchg qword ptr [r14], rsp
#define XCHG_RSP_TO_PTR_R15 xchg qword ptr [r15], rsp
#define XCHG_RSP_TO_PTR_EAX xchg qword ptr [eax], rsp
#define XCHG_RSP_TO_PTR_EBX xchg qword ptr [ebx], rsp
#define XCHG_RSP_TO_PTR_ECX xchg qword ptr [ecx], rsp
#define XCHG_RSP_TO_PTR_EDX xchg qword ptr [edx], rsp
#define XCHG_RSP_TO_PTR_EDI xchg qword ptr [edi], rsp
#define XCHG_RSP_TO_PTR_ESI xchg qword ptr [esi], rsp
#define XCHG_RSP_TO_PTR_EBP xchg qword ptr [ebp], rsp
#define XCHG_RSP_TO_PTR_ESP xchg qword ptr [esp], rsp

#define XCHG_R8_TO_PTR_RAX xchg qword ptr [rax], r8
#define XCHG_R8_TO_PTR_RBX xchg qword ptr [rbx], r8
#define XCHG_R8_TO_PTR_RCX xchg qword ptr [rcx], r8
#define XCHG_R8_TO_PTR_RDX xchg qword ptr [rdx], r8
#define XCHG_R8_TO_PTR_RDI xchg qword ptr [rdi], r8
#define XCHG_R8_TO_PTR_RSI xchg qword ptr [rsi], r8
#define XCHG_R8_TO_PTR_RBP xchg qword ptr [rbp], r8
#define XCHG_R8_TO_PTR_RSP xchg qword ptr [rsp], r8
#define XCHG_R8_TO_PTR_R8 xchg qword ptr [r8], r8
#define XCHG_R8_TO_PTR_R9 xchg qword ptr [r9], r8
#define XCHG_R8_TO_PTR_R10 xchg qword ptr [r10], r8
#define XCHG_R8_TO_PTR_R11 xchg qword ptr [r11], r8
#define XCHG_R8_TO_PTR_R12 xchg qword ptr [r12], r8
#define XCHG_R8_TO_PTR_R13 xchg qword ptr [r13], r8
#define XCHG_R8_TO_PTR_R14 xchg qword ptr [r14], r8
#define XCHG_R8_TO_PTR_R15 xchg qword ptr [r15], r8
#define XCHG_R8_TO_PTR_EAX xchg qword ptr [eax], r8
#define XCHG_R8_TO_PTR_EBX xchg qword ptr [ebx], r8
#define XCHG_R8_TO_PTR_ECX xchg qword ptr [ecx], r8
#define XCHG_R8_TO_PTR_EDX xchg qword ptr [edx], r8
#define XCHG_R8_TO_PTR_EDI xchg qword ptr [edi], r8
#define XCHG_R8_TO_PTR_ESI xchg qword ptr [esi], r8
#define XCHG_R8_TO_PTR_EBP xchg qword ptr [ebp], r8
#define XCHG_R8_TO_PTR_ESP xchg qword ptr [esp], r8

#define XCHG_R9_TO_PTR_RAX xchg qword ptr [rax], r9
#define XCHG_R9_TO_PTR_RBX xchg qword ptr [rbx], r9
#define XCHG_R9_TO_PTR_RCX xchg qword ptr [rcx], r9
#define XCHG_R9_TO_PTR_RDX xchg qword ptr [rdx], r9
#define XCHG_R9_TO_PTR_RDI xchg qword ptr [rdi], r9
#define XCHG_R9_TO_PTR_RSI xchg qword ptr [rsi], r9
#define XCHG_R9_TO_PTR_RBP xchg qword ptr [rbp], r9
#define XCHG_R9_TO_PTR_RSP xchg qword ptr [rsp], r9
#define XCHG_R9_TO_PTR_R8 xchg qword ptr [r8], r9
#define XCHG_R9_TO_PTR_R9 xchg qword ptr [r9], r9
#define XCHG_R9_TO_PTR_R10 xchg qword ptr [r10], r9
#define XCHG_R9_TO_PTR_R11 xchg qword ptr [r11], r9
#define XCHG_R9_TO_PTR_R12 xchg qword ptr [r12], r9
#define XCHG_R9_TO_PTR_R13 xchg qword ptr [r13], r9
#define XCHG_R9_TO_PTR_R14 xchg qword ptr [r14], r9
#define XCHG_R9_TO_PTR_R15 xchg qword ptr [r15], r9
#define XCHG_R9_TO_PTR_EAX xchg qword ptr [eax], r9
#define XCHG_R9_TO_PTR_EBX xchg qword ptr [ebx], r9
#define XCHG_R9_TO_PTR_ECX xchg qword ptr [ecx], r9
#define XCHG_R9_TO_PTR_EDX xchg qword ptr [edx], r9
#define XCHG_R9_TO_PTR_EDI xchg qword ptr [edi], r9
#define XCHG_R9_TO_PTR_ESI xchg qword ptr [esi], r9
#define XCHG_R9_TO_PTR_EBP xchg qword ptr [ebp], r9
#define XCHG_R9_TO_PTR_ESP xchg qword ptr [esp], r9

#define XCHG_R10_TO_PTR_RAX xchg qword ptr [rax], r10
#define XCHG_R10_TO_PTR_RBX xchg qword ptr [rbx], r10
#define XCHG_R10_TO_PTR_RCX xchg qword ptr [rcx], r10
#define XCHG_R10_TO_PTR_RDX xchg qword ptr [rdx], r10
#define XCHG_R10_TO_PTR_RDI xchg qword ptr [rdi], r10
#define XCHG_R10_TO_PTR_RSI xchg qword ptr [rsi], r10
#define XCHG_R10_TO_PTR_RBP xchg qword ptr [rbp], r10
#define XCHG_R10_TO_PTR_RSP xchg qword ptr [rsp], r10
#define XCHG_R10_TO_PTR_R8 xchg qword ptr [r8], r10
#define XCHG_R10_TO_PTR_R9 xchg qword ptr [r9], r10
#define XCHG_R10_TO_PTR_R10 xchg qword ptr [r10], r10
#define XCHG_R10_TO_PTR_R11 xchg qword ptr [r11], r10
#define XCHG_R10_TO_PTR_R12 xchg qword ptr [r12], r10
#define XCHG_R10_TO_PTR_R13 xchg qword ptr [r13], r10
#define XCHG_R10_TO_PTR_R14 xchg qword ptr [r14], r10
#define XCHG_R10_TO_PTR_R15 xchg qword ptr [r15], r10
#define XCHG_R10_TO_PTR_EAX xchg qword ptr [eax], r10
#define XCHG_R10_TO_PTR_EBX xchg qword ptr [ebx], r10
#define XCHG_R10_TO_PTR_ECX xchg qword ptr [ecx], r10
#define XCHG_R10_TO_PTR_EDX xchg qword ptr [edx], r10
#define XCHG_R10_TO_PTR_EDI xchg qword ptr [edi], r10
#define XCHG_R10_TO_PTR_ESI xchg qword ptr [esi], r10
#define XCHG_R10_TO_PTR_EBP xchg qword ptr [ebp], r10
#define XCHG_R10_TO_PTR_ESP xchg qword ptr [esp], r10

#define XCHG_R11_TO_PTR_RAX xchg qword ptr [rax], r11
#define XCHG_R11_TO_PTR_RBX xchg qword ptr [rbx], r11
#define XCHG_R11_TO_PTR_RCX xchg qword ptr [rcx], r11
#define XCHG_R11_TO_PTR_RDX xchg qword ptr [rdx], r11
#define XCHG_R11_TO_PTR_RDI xchg qword ptr [rdi], r11
#define XCHG_R11_TO_PTR_RSI xchg qword ptr [rsi], r11
#define XCHG_R11_TO_PTR_RBP xchg qword ptr [rbp], r11
#define XCHG_R11_TO_PTR_RSP xchg qword ptr [rsp], r11
#define XCHG_R11_TO_PTR_R8 xchg qword ptr [r8], r11
#define XCHG_R11_TO_PTR_R9 xchg qword ptr [r9], r11
#define XCHG_R11_TO_PTR_R10 xchg qword ptr [r10], r11
#define XCHG_R11_TO_PTR_R11 xchg qword ptr [r11], r11
#define XCHG_R11_TO_PTR_R12 xchg qword ptr [r12], r11
#define XCHG_R11_TO_PTR_R13 xchg qword ptr [r13], r11
#define XCHG_R11_TO_PTR_R14 xchg qword ptr [r14], r11
#define XCHG_R11_TO_PTR_R15 xchg qword ptr [r15], r11
#define XCHG_R11_TO_PTR_EAX xchg qword ptr [eax], r11
#define XCHG_R11_TO_PTR_EBX xchg qword ptr [ebx], r11
#define XCHG_R11_TO_PTR_ECX xchg qword ptr [ecx], r11
#define XCHG_R11_TO_PTR_EDX xchg qword ptr [edx], r11
#define XCHG_R11_TO_PTR_EDI xchg qword ptr [edi], r11
#define XCHG_R11_TO_PTR_ESI xchg qword ptr [esi], r11
#define XCHG_R11_TO_PTR_EBP xchg qword ptr [ebp], r11
#define XCHG_R11_TO_PTR_ESP xchg qword ptr [esp], r11

#define XCHG_R12_TO_PTR_RAX xchg qword ptr [rax], r12
#define XCHG_R12_TO_PTR_RBX xchg qword ptr [rbx], r12
#define XCHG_R12_TO_PTR_RCX xchg qword ptr [rcx], r12
#define XCHG_R12_TO_PTR_RDX xchg qword ptr [rdx], r12
#define XCHG_R12_TO_PTR_RDI xchg qword ptr [rdi], r12
#define XCHG_R12_TO_PTR_RSI xchg qword ptr [rsi], r12
#define XCHG_R12_TO_PTR_RBP xchg qword ptr [rbp], r12
#define XCHG_R12_TO_PTR_RSP xchg qword ptr [rsp], r12
#define XCHG_R12_TO_PTR_R8 xchg qword ptr [r8], r12
#define XCHG_R12_TO_PTR_R9 xchg qword ptr [r9], r12
#define XCHG_R12_TO_PTR_R10 xchg qword ptr [r10], r12
#define XCHG_R12_TO_PTR_R11 xchg qword ptr [r11], r12
#define XCHG_R12_TO_PTR_R12 xchg qword ptr [r12], r12
#define XCHG_R12_TO_PTR_R13 xchg qword ptr [r13], r12
#define XCHG_R12_TO_PTR_R14 xchg qword ptr [r14], r12
#define XCHG_R12_TO_PTR_R15 xchg qword ptr [r15], r12
#define XCHG_R12_TO_PTR_EAX xchg qword ptr [eax], r12
#define XCHG_R12_TO_PTR_EBX xchg qword ptr [ebx], r12
#define XCHG_R12_TO_PTR_ECX xchg qword ptr [ecx], r12
#define XCHG_R12_TO_PTR_EDX xchg qword ptr [edx], r12
#define XCHG_R12_TO_PTR_EDI xchg qword ptr [edi], r12
#define XCHG_R12_TO_PTR_ESI xchg qword ptr [esi], r12
#define XCHG_R12_TO_PTR_EBP xchg qword ptr [ebp], r12
#define XCHG_R12_TO_PTR_ESP xchg qword ptr [esp], r12

#define XCHG_R13_TO_PTR_RAX xchg qword ptr [rax], r13
#define XCHG_R13_TO_PTR_RBX xchg qword ptr [rbx], r13
#define XCHG_R13_TO_PTR_RCX xchg qword ptr [rcx], r13
#define XCHG_R13_TO_PTR_RDX xchg qword ptr [rdx], r13
#define XCHG_R13_TO_PTR_RDI xchg qword ptr [rdi], r13
#define XCHG_R13_TO_PTR_RSI xchg qword ptr [rsi], r13
#define XCHG_R13_TO_PTR_RBP xchg qword ptr [rbp], r13
#define XCHG_R13_TO_PTR_RSP xchg qword ptr [rsp], r13
#define XCHG_R13_TO_PTR_R8 xchg qword ptr [r8], r13
#define XCHG_R13_TO_PTR_R9 xchg qword ptr [r9], r13
#define XCHG_R13_TO_PTR_R10 xchg qword ptr [r10], r13
#define XCHG_R13_TO_PTR_R11 xchg qword ptr [r11], r13
#define XCHG_R13_TO_PTR_R12 xchg qword ptr [r12], r13
#define XCHG_R13_TO_PTR_R13 xchg qword ptr [r13], r13
#define XCHG_R13_TO_PTR_R14 xchg qword ptr [r14], r13
#define XCHG_R13_TO_PTR_R15 xchg qword ptr [r15], r13
#define XCHG_R13_TO_PTR_EAX xchg qword ptr [eax], r13
#define XCHG_R13_TO_PTR_EBX xchg qword ptr [ebx], r13
#define XCHG_R13_TO_PTR_ECX xchg qword ptr [ecx], r13
#define XCHG_R13_TO_PTR_EDX xchg qword ptr [edx], r13
#define XCHG_R13_TO_PTR_EDI xchg qword ptr [edi], r13
#define XCHG_R13_TO_PTR_ESI xchg qword ptr [esi], r13
#define XCHG_R13_TO_PTR_EBP xchg qword ptr [ebp], r13
#define XCHG_R13_TO_PTR_ESP xchg qword ptr [esp], r13

#define XCHG_R14_TO_PTR_RAX xchg qword ptr [rax], r14
#define XCHG_R14_TO_PTR_RBX xchg qword ptr [rbx], r14
#define XCHG_R14_TO_PTR_RCX xchg qword ptr [rcx], r14
#define XCHG_R14_TO_PTR_RDX xchg qword ptr [rdx], r14
#define XCHG_R14_TO_PTR_RDI xchg qword ptr [rdi], r14
#define XCHG_R14_TO_PTR_RSI xchg qword ptr [rsi], r14
#define XCHG_R14_TO_PTR_RBP xchg qword ptr [rbp], r14
#define XCHG_R14_TO_PTR_RSP xchg qword ptr [rsp], r14
#define XCHG_R14_TO_PTR_R8 xchg qword ptr [r8], r14
#define XCHG_R14_TO_PTR_R9 xchg qword ptr [r9], r14
#define XCHG_R14_TO_PTR_R10 xchg qword ptr [r10], r14
#define XCHG_R14_TO_PTR_R11 xchg qword ptr [r11], r14
#define XCHG_R14_TO_PTR_R12 xchg qword ptr [r12], r14
#define XCHG_R14_TO_PTR_R13 xchg qword ptr [r13], r14
#define XCHG_R14_TO_PTR_R14 xchg qword ptr [r14], r14
#define XCHG_R14_TO_PTR_R15 xchg qword ptr [r15], r14
#define XCHG_R14_TO_PTR_EAX xchg qword ptr [eax], r14
#define XCHG_R14_TO_PTR_EBX xchg qword ptr [ebx], r14
#define XCHG_R14_TO_PTR_ECX xchg qword ptr [ecx], r14
#define XCHG_R14_TO_PTR_EDX xchg qword ptr [edx], r14
#define XCHG_R14_TO_PTR_EDI xchg qword ptr [edi], r14
#define XCHG_R14_TO_PTR_ESI xchg qword ptr [esi], r14
#define XCHG_R14_TO_PTR_EBP xchg qword ptr [ebp], r14
#define XCHG_R14_TO_PTR_ESP xchg qword ptr [esp], r14

#define XCHG_R15_TO_PTR_RAX xchg qword ptr [rax], r15
#define XCHG_R15_TO_PTR_RBX xchg qword ptr [rbx], r15
#define XCHG_R15_TO_PTR_RCX xchg qword ptr [rcx], r15
#define XCHG_R15_TO_PTR_RDX xchg qword ptr [rdx], r15
#define XCHG_R15_TO_PTR_RDI xchg qword ptr [rdi], r15
#define XCHG_R15_TO_PTR_RSI xchg qword ptr [rsi], r15
#define XCHG_R15_TO_PTR_RBP xchg qword ptr [rbp], r15
#define XCHG_R15_TO_PTR_RSP xchg qword ptr [rsp], r15
#define XCHG_R15_TO_PTR_R8 xchg qword ptr [r8], r15
#define XCHG_R15_TO_PTR_R9 xchg qword ptr [r9], r15
#define XCHG_R15_TO_PTR_R10 xchg qword ptr [r10], r15
#define XCHG_R15_TO_PTR_R11 xchg qword ptr [r11], r15
#define XCHG_R15_TO_PTR_R12 xchg qword ptr [r12], r15
#define XCHG_R15_TO_PTR_R13 xchg qword ptr [r13], r15
#define XCHG_R15_TO_PTR_R14 xchg qword ptr [r14], r15
#define XCHG_R15_TO_PTR_R15 xchg qword ptr [r15], r15
#define XCHG_R15_TO_PTR_EAX xchg qword ptr [eax], r15
#define XCHG_R15_TO_PTR_EBX xchg qword ptr [ebx], r15
#define XCHG_R15_TO_PTR_ECX xchg qword ptr [ecx], r15
#define XCHG_R15_TO_PTR_EDX xchg qword ptr [edx], r15
#define XCHG_R15_TO_PTR_EDI xchg qword ptr [edi], r15
#define XCHG_R15_TO_PTR_ESI xchg qword ptr [esi], r15
#define XCHG_R15_TO_PTR_EBP xchg qword ptr [ebp], r15
#define XCHG_R15_TO_PTR_ESP xchg qword ptr [esp], r15

#define XCHG_RAX_FROM_PTR_RAX_(VALUE) xchg rax, qword ptr [rax + VALUE]
#define XCHG_RAX_FROM_PTR_RBX_(VALUE) xchg rax, qword ptr [rbx + VALUE]
#define XCHG_RAX_FROM_PTR_RCX_(VALUE) xchg rax, qword ptr [rcx + VALUE]
#define XCHG_RAX_FROM_PTR_RDX_(VALUE) xchg rax, qword ptr [rdx + VALUE]
#define XCHG_RAX_FROM_PTR_RDI_(VALUE) xchg rax, qword ptr [rdi + VALUE]
#define XCHG_RAX_FROM_PTR_RSI_(VALUE) xchg rax, qword ptr [rsi + VALUE]
#define XCHG_RAX_FROM_PTR_RBP_(VALUE) xchg rax, qword ptr [rbp + VALUE]
#define XCHG_RAX_FROM_PTR_RSP_(VALUE) xchg rax, qword ptr [rsp + VALUE]
#define XCHG_RAX_FROM_PTR_R8_(VALUE) xchg rax, qword ptr [r8 + VALUE]
#define XCHG_RAX_FROM_PTR_R9_(VALUE) xchg rax, qword ptr [r9 + VALUE]
#define XCHG_RAX_FROM_PTR_R10_(VALUE) xchg rax, qword ptr [r10 + VALUE]
#define XCHG_RAX_FROM_PTR_R11_(VALUE) xchg rax, qword ptr [r11 + VALUE]
#define XCHG_RAX_FROM_PTR_R12_(VALUE) xchg rax, qword ptr [r12 + VALUE]
#define XCHG_RAX_FROM_PTR_R13_(VALUE) xchg rax, qword ptr [r13 + VALUE]
#define XCHG_RAX_FROM_PTR_R14_(VALUE) xchg rax, qword ptr [r14 + VALUE]
#define XCHG_RAX_FROM_PTR_R15_(VALUE) xchg rax, qword ptr [r15 + VALUE]
#define XCHG_RAX_FROM_PTR_EAX_(VALUE) xchg rax, qword ptr [eax + VALUE]
#define XCHG_RAX_FROM_PTR_EBX_(VALUE) xchg rax, qword ptr [ebx + VALUE]
#define XCHG_RAX_FROM_PTR_ECX_(VALUE) xchg rax, qword ptr [ecx + VALUE]
#define XCHG_RAX_FROM_PTR_EDX_(VALUE) xchg rax, qword ptr [edx + VALUE]
#define XCHG_RAX_FROM_PTR_EDI_(VALUE) xchg rax, qword ptr [edi + VALUE]
#define XCHG_RAX_FROM_PTR_ESI_(VALUE) xchg rax, qword ptr [esi + VALUE]
#define XCHG_RAX_FROM_PTR_EBP_(VALUE) xchg rax, qword ptr [ebp + VALUE]
#define XCHG_RAX_FROM_PTR_ESP_(VALUE) xchg rax, qword ptr [esp + VALUE]

#define XCHG_RBX_FROM_PTR_RAX_(VALUE) xchg rbx, qword ptr [rax + VALUE]
#define XCHG_RBX_FROM_PTR_RBX_(VALUE) xchg rbx, qword ptr [rbx + VALUE]
#define XCHG_RBX_FROM_PTR_RCX_(VALUE) xchg rbx, qword ptr [rcx + VALUE]
#define XCHG_RBX_FROM_PTR_RDX_(VALUE) xchg rbx, qword ptr [rdx + VALUE]
#define XCHG_RBX_FROM_PTR_RDI_(VALUE) xchg rbx, qword ptr [rdi + VALUE]
#define XCHG_RBX_FROM_PTR_RSI_(VALUE) xchg rbx, qword ptr [rsi + VALUE]
#define XCHG_RBX_FROM_PTR_RBP_(VALUE) xchg rbx, qword ptr [rbp + VALUE]
#define XCHG_RBX_FROM_PTR_RSP_(VALUE) xchg rbx, qword ptr [rsp + VALUE]
#define XCHG_RBX_FROM_PTR_R8_(VALUE) xchg rbx, qword ptr [r8 + VALUE]
#define XCHG_RBX_FROM_PTR_R9_(VALUE) xchg rbx, qword ptr [r9 + VALUE]
#define XCHG_RBX_FROM_PTR_R10_(VALUE) xchg rbx, qword ptr [r10 + VALUE]
#define XCHG_RBX_FROM_PTR_R11_(VALUE) xchg rbx, qword ptr [r11 + VALUE]
#define XCHG_RBX_FROM_PTR_R12_(VALUE) xchg rbx, qword ptr [r12 + VALUE]
#define XCHG_RBX_FROM_PTR_R13_(VALUE) xchg rbx, qword ptr [r13 + VALUE]
#define XCHG_RBX_FROM_PTR_R14_(VALUE) xchg rbx, qword ptr [r14 + VALUE]
#define XCHG_RBX_FROM_PTR_R15_(VALUE) xchg rbx, qword ptr [r15 + VALUE]
#define XCHG_RBX_FROM_PTR_EAX_(VALUE) xchg rbx, qword ptr [eax + VALUE]
#define XCHG_RBX_FROM_PTR_EBX_(VALUE) xchg rbx, qword ptr [ebx + VALUE]
#define XCHG_RBX_FROM_PTR_ECX_(VALUE) xchg rbx, qword ptr [ecx + VALUE]
#define XCHG_RBX_FROM_PTR_EDX_(VALUE) xchg rbx, qword ptr [edx + VALUE]
#define XCHG_RBX_FROM_PTR_EDI_(VALUE) xchg rbx, qword ptr [edi + VALUE]
#define XCHG_RBX_FROM_PTR_ESI_(VALUE) xchg rbx, qword ptr [esi + VALUE]
#define XCHG_RBX_FROM_PTR_EBP_(VALUE) xchg rbx, qword ptr [ebp + VALUE]
#define XCHG_RBX_FROM_PTR_ESP_(VALUE) xchg rbx, qword ptr [esp + VALUE]

#define XCHG_RCX_FROM_PTR_RAX_(VALUE) xchg rcx, qword ptr [rax + VALUE]
#define XCHG_RCX_FROM_PTR_RBX_(VALUE) xchg rcx, qword ptr [rbx + VALUE]
#define XCHG_RCX_FROM_PTR_RCX_(VALUE) xchg rcx, qword ptr [rcx + VALUE]
#define XCHG_RCX_FROM_PTR_RDX_(VALUE) xchg rcx, qword ptr [rdx + VALUE]
#define XCHG_RCX_FROM_PTR_RDI_(VALUE) xchg rcx, qword ptr [rdi + VALUE]
#define XCHG_RCX_FROM_PTR_RSI_(VALUE) xchg rcx, qword ptr [rsi + VALUE]
#define XCHG_RCX_FROM_PTR_RBP_(VALUE) xchg rcx, qword ptr [rbp + VALUE]
#define XCHG_RCX_FROM_PTR_RSP_(VALUE) xchg rcx, qword ptr [rsp + VALUE]
#define XCHG_RCX_FROM_PTR_R8_(VALUE) xchg rcx, qword ptr [r8 + VALUE]
#define XCHG_RCX_FROM_PTR_R9_(VALUE) xchg rcx, qword ptr [r9 + VALUE]
#define XCHG_RCX_FROM_PTR_R10_(VALUE) xchg rcx, qword ptr [r10 + VALUE]
#define XCHG_RCX_FROM_PTR_R11_(VALUE) xchg rcx, qword ptr [r11 + VALUE]
#define XCHG_RCX_FROM_PTR_R12_(VALUE) xchg rcx, qword ptr [r12 + VALUE]
#define XCHG_RCX_FROM_PTR_R13_(VALUE) xchg rcx, qword ptr [r13 + VALUE]
#define XCHG_RCX_FROM_PTR_R14_(VALUE) xchg rcx, qword ptr [r14 + VALUE]
#define XCHG_RCX_FROM_PTR_R15_(VALUE) xchg rcx, qword ptr [r15 + VALUE]
#define XCHG_RCX_FROM_PTR_EAX_(VALUE) xchg rcx, qword ptr [eax + VALUE]
#define XCHG_RCX_FROM_PTR_EBX_(VALUE) xchg rcx, qword ptr [ebx + VALUE]
#define XCHG_RCX_FROM_PTR_ECX_(VALUE) xchg rcx, qword ptr [ecx + VALUE]
#define XCHG_RCX_FROM_PTR_EDX_(VALUE) xchg rcx, qword ptr [edx + VALUE]
#define XCHG_RCX_FROM_PTR_EDI_(VALUE) xchg rcx, qword ptr [edi + VALUE]
#define XCHG_RCX_FROM_PTR_ESI_(VALUE) xchg rcx, qword ptr [esi + VALUE]
#define XCHG_RCX_FROM_PTR_EBP_(VALUE) xchg rcx, qword ptr [ebp + VALUE]
#define XCHG_RCX_FROM_PTR_ESP_(VALUE) xchg rcx, qword ptr [esp + VALUE]

#define XCHG_RDX_FROM_PTR_RAX_(VALUE) xchg rdx, qword ptr [rax + VALUE]
#define XCHG_RDX_FROM_PTR_RBX_(VALUE) xchg rdx, qword ptr [rbx + VALUE]
#define XCHG_RDX_FROM_PTR_RCX_(VALUE) xchg rdx, qword ptr [rcx + VALUE]
#define XCHG_RDX_FROM_PTR_RDX_(VALUE) xchg rdx, qword ptr [rdx + VALUE]
#define XCHG_RDX_FROM_PTR_RDI_(VALUE) xchg rdx, qword ptr [rdi + VALUE]
#define XCHG_RDX_FROM_PTR_RSI_(VALUE) xchg rdx, qword ptr [rsi + VALUE]
#define XCHG_RDX_FROM_PTR_RBP_(VALUE) xchg rdx, qword ptr [rbp + VALUE]
#define XCHG_RDX_FROM_PTR_RSP_(VALUE) xchg rdx, qword ptr [rsp + VALUE]
#define XCHG_RDX_FROM_PTR_R8_(VALUE) xchg rdx, qword ptr [r8 + VALUE]
#define XCHG_RDX_FROM_PTR_R9_(VALUE) xchg rdx, qword ptr [r9 + VALUE]
#define XCHG_RDX_FROM_PTR_R10_(VALUE) xchg rdx, qword ptr [r10 + VALUE]
#define XCHG_RDX_FROM_PTR_R11_(VALUE) xchg rdx, qword ptr [r11 + VALUE]
#define XCHG_RDX_FROM_PTR_R12_(VALUE) xchg rdx, qword ptr [r12 + VALUE]
#define XCHG_RDX_FROM_PTR_R13_(VALUE) xchg rdx, qword ptr [r13 + VALUE]
#define XCHG_RDX_FROM_PTR_R14_(VALUE) xchg rdx, qword ptr [r14 + VALUE]
#define XCHG_RDX_FROM_PTR_R15_(VALUE) xchg rdx, qword ptr [r15 + VALUE]
#define XCHG_RDX_FROM_PTR_EAX_(VALUE) xchg rdx, qword ptr [eax + VALUE]
#define XCHG_RDX_FROM_PTR_EBX_(VALUE) xchg rdx, qword ptr [ebx + VALUE]
#define XCHG_RDX_FROM_PTR_ECX_(VALUE) xchg rdx, qword ptr [ecx + VALUE]
#define XCHG_RDX_FROM_PTR_EDX_(VALUE) xchg rdx, qword ptr [edx + VALUE]
#define XCHG_RDX_FROM_PTR_EDI_(VALUE) xchg rdx, qword ptr [edi + VALUE]
#define XCHG_RDX_FROM_PTR_ESI_(VALUE) xchg rdx, qword ptr [esi + VALUE]
#define XCHG_RDX_FROM_PTR_EBP_(VALUE) xchg rdx, qword ptr [ebp + VALUE]
#define XCHG_RDX_FROM_PTR_ESP_(VALUE) xchg rdx, qword ptr [esp + VALUE]

#define XCHG_RDI_FROM_PTR_RAX_(VALUE) xchg rdi, qword ptr [rax + VALUE]
#define XCHG_RDI_FROM_PTR_RBX_(VALUE) xchg rdi, qword ptr [rbx + VALUE]
#define XCHG_RDI_FROM_PTR_RCX_(VALUE) xchg rdi, qword ptr [rcx + VALUE]
#define XCHG_RDI_FROM_PTR_RDX_(VALUE) xchg rdi, qword ptr [rdx + VALUE]
#define XCHG_RDI_FROM_PTR_RDI_(VALUE) xchg rdi, qword ptr [rdi + VALUE]
#define XCHG_RDI_FROM_PTR_RSI_(VALUE) xchg rdi, qword ptr [rsi + VALUE]
#define XCHG_RDI_FROM_PTR_RBP_(VALUE) xchg rdi, qword ptr [rbp + VALUE]
#define XCHG_RDI_FROM_PTR_RSP_(VALUE) xchg rdi, qword ptr [rsp + VALUE]
#define XCHG_RDI_FROM_PTR_R8_(VALUE) xchg rdi, qword ptr [r8 + VALUE]
#define XCHG_RDI_FROM_PTR_R9_(VALUE) xchg rdi, qword ptr [r9 + VALUE]
#define XCHG_RDI_FROM_PTR_R10_(VALUE) xchg rdi, qword ptr [r10 + VALUE]
#define XCHG_RDI_FROM_PTR_R11_(VALUE) xchg rdi, qword ptr [r11 + VALUE]
#define XCHG_RDI_FROM_PTR_R12_(VALUE) xchg rdi, qword ptr [r12 + VALUE]
#define XCHG_RDI_FROM_PTR_R13_(VALUE) xchg rdi, qword ptr [r13 + VALUE]
#define XCHG_RDI_FROM_PTR_R14_(VALUE) xchg rdi, qword ptr [r14 + VALUE]
#define XCHG_RDI_FROM_PTR_R15_(VALUE) xchg rdi, qword ptr [r15 + VALUE]
#define XCHG_RDI_FROM_PTR_EAX_(VALUE) xchg rdi, qword ptr [eax + VALUE]
#define XCHG_RDI_FROM_PTR_EBX_(VALUE) xchg rdi, qword ptr [ebx + VALUE]
#define XCHG_RDI_FROM_PTR_ECX_(VALUE) xchg rdi, qword ptr [ecx + VALUE]
#define XCHG_RDI_FROM_PTR_EDX_(VALUE) xchg rdi, qword ptr [edx + VALUE]
#define XCHG_RDI_FROM_PTR_EDI_(VALUE) xchg rdi, qword ptr [edi + VALUE]
#define XCHG_RDI_FROM_PTR_ESI_(VALUE) xchg rdi, qword ptr [esi + VALUE]
#define XCHG_RDI_FROM_PTR_EBP_(VALUE) xchg rdi, qword ptr [ebp + VALUE]
#define XCHG_RDI_FROM_PTR_ESP_(VALUE) xchg rdi, qword ptr [esp + VALUE]

#define XCHG_RSI_FROM_PTR_RAX_(VALUE) xchg rsi, qword ptr [rax + VALUE]
#define XCHG_RSI_FROM_PTR_RBX_(VALUE) xchg rsi, qword ptr [rbx + VALUE]
#define XCHG_RSI_FROM_PTR_RCX_(VALUE) xchg rsi, qword ptr [rcx + VALUE]
#define XCHG_RSI_FROM_PTR_RDX_(VALUE) xchg rsi, qword ptr [rdx + VALUE]
#define XCHG_RSI_FROM_PTR_RDI_(VALUE) xchg rsi, qword ptr [rdi + VALUE]
#define XCHG_RSI_FROM_PTR_RSI_(VALUE) xchg rsi, qword ptr [rsi + VALUE]
#define XCHG_RSI_FROM_PTR_RBP_(VALUE) xchg rsi, qword ptr [rbp + VALUE]
#define XCHG_RSI_FROM_PTR_RSP_(VALUE) xchg rsi, qword ptr [rsp + VALUE]
#define XCHG_RSI_FROM_PTR_R8_(VALUE) xchg rsi, qword ptr [r8 + VALUE]
#define XCHG_RSI_FROM_PTR_R9_(VALUE) xchg rsi, qword ptr [r9 + VALUE]
#define XCHG_RSI_FROM_PTR_R10_(VALUE) xchg rsi, qword ptr [r10 + VALUE]
#define XCHG_RSI_FROM_PTR_R11_(VALUE) xchg rsi, qword ptr [r11 + VALUE]
#define XCHG_RSI_FROM_PTR_R12_(VALUE) xchg rsi, qword ptr [r12 + VALUE]
#define XCHG_RSI_FROM_PTR_R13_(VALUE) xchg rsi, qword ptr [r13 + VALUE]
#define XCHG_RSI_FROM_PTR_R14_(VALUE) xchg rsi, qword ptr [r14 + VALUE]
#define XCHG_RSI_FROM_PTR_R15_(VALUE) xchg rsi, qword ptr [r15 + VALUE]
#define XCHG_RSI_FROM_PTR_EAX_(VALUE) xchg rsi, qword ptr [eax + VALUE]
#define XCHG_RSI_FROM_PTR_EBX_(VALUE) xchg rsi, qword ptr [ebx + VALUE]
#define XCHG_RSI_FROM_PTR_ECX_(VALUE) xchg rsi, qword ptr [ecx + VALUE]
#define XCHG_RSI_FROM_PTR_EDX_(VALUE) xchg rsi, qword ptr [edx + VALUE]
#define XCHG_RSI_FROM_PTR_EDI_(VALUE) xchg rsi, qword ptr [edi + VALUE]
#define XCHG_RSI_FROM_PTR_ESI_(VALUE) xchg rsi, qword ptr [esi + VALUE]
#define XCHG_RSI_FROM_PTR_EBP_(VALUE) xchg rsi, qword ptr [ebp + VALUE]
#define XCHG_RSI_FROM_PTR_ESP_(VALUE) xchg rsi, qword ptr [esp + VALUE]

#define XCHG_RBP_FROM_PTR_RAX_(VALUE) xchg rbp, qword ptr [rax + VALUE]
#define XCHG_RBP_FROM_PTR_RBX_(VALUE) xchg rbp, qword ptr [rbx + VALUE]
#define XCHG_RBP_FROM_PTR_RCX_(VALUE) xchg rbp, qword ptr [rcx + VALUE]
#define XCHG_RBP_FROM_PTR_RDX_(VALUE) xchg rbp, qword ptr [rdx + VALUE]
#define XCHG_RBP_FROM_PTR_RDI_(VALUE) xchg rbp, qword ptr [rdi + VALUE]
#define XCHG_RBP_FROM_PTR_RSI_(VALUE) xchg rbp, qword ptr [rsi + VALUE]
#define XCHG_RBP_FROM_PTR_RBP_(VALUE) xchg rbp, qword ptr [rbp + VALUE]
#define XCHG_RBP_FROM_PTR_RSP_(VALUE) xchg rbp, qword ptr [rsp + VALUE]
#define XCHG_RBP_FROM_PTR_R8_(VALUE) xchg rbp, qword ptr [r8 + VALUE]
#define XCHG_RBP_FROM_PTR_R9_(VALUE) xchg rbp, qword ptr [r9 + VALUE]
#define XCHG_RBP_FROM_PTR_R10_(VALUE) xchg rbp, qword ptr [r10 + VALUE]
#define XCHG_RBP_FROM_PTR_R11_(VALUE) xchg rbp, qword ptr [r11 + VALUE]
#define XCHG_RBP_FROM_PTR_R12_(VALUE) xchg rbp, qword ptr [r12 + VALUE]
#define XCHG_RBP_FROM_PTR_R13_(VALUE) xchg rbp, qword ptr [r13 + VALUE]
#define XCHG_RBP_FROM_PTR_R14_(VALUE) xchg rbp, qword ptr [r14 + VALUE]
#define XCHG_RBP_FROM_PTR_R15_(VALUE) xchg rbp, qword ptr [r15 + VALUE]
#define XCHG_RBP_FROM_PTR_EAX_(VALUE) xchg rbp, qword ptr [eax + VALUE]
#define XCHG_RBP_FROM_PTR_EBX_(VALUE) xchg rbp, qword ptr [ebx + VALUE]
#define XCHG_RBP_FROM_PTR_ECX_(VALUE) xchg rbp, qword ptr [ecx + VALUE]
#define XCHG_RBP_FROM_PTR_EDX_(VALUE) xchg rbp, qword ptr [edx + VALUE]
#define XCHG_RBP_FROM_PTR_EDI_(VALUE) xchg rbp, qword ptr [edi + VALUE]
#define XCHG_RBP_FROM_PTR_ESI_(VALUE) xchg rbp, qword ptr [esi + VALUE]
#define XCHG_RBP_FROM_PTR_EBP_(VALUE) xchg rbp, qword ptr [ebp + VALUE]
#define XCHG_RBP_FROM_PTR_ESP_(VALUE) xchg rbp, qword ptr [esp + VALUE]

#define XCHG_RSP_FROM_PTR_RAX_(VALUE) xchg rsp, qword ptr [rax + VALUE]
#define XCHG_RSP_FROM_PTR_RBX_(VALUE) xchg rsp, qword ptr [rbx + VALUE]
#define XCHG_RSP_FROM_PTR_RCX_(VALUE) xchg rsp, qword ptr [rcx + VALUE]
#define XCHG_RSP_FROM_PTR_RDX_(VALUE) xchg rsp, qword ptr [rdx + VALUE]
#define XCHG_RSP_FROM_PTR_RDI_(VALUE) xchg rsp, qword ptr [rdi + VALUE]
#define XCHG_RSP_FROM_PTR_RSI_(VALUE) xchg rsp, qword ptr [rsi + VALUE]
#define XCHG_RSP_FROM_PTR_RBP_(VALUE) xchg rsp, qword ptr [rbp + VALUE]
#define XCHG_RSP_FROM_PTR_RSP_(VALUE) xchg rsp, qword ptr [rsp + VALUE]
#define XCHG_RSP_FROM_PTR_R8_(VALUE) xchg rsp, qword ptr [r8 + VALUE]
#define XCHG_RSP_FROM_PTR_R9_(VALUE) xchg rsp, qword ptr [r9 + VALUE]
#define XCHG_RSP_FROM_PTR_R10_(VALUE) xchg rsp, qword ptr [r10 + VALUE]
#define XCHG_RSP_FROM_PTR_R11_(VALUE) xchg rsp, qword ptr [r11 + VALUE]
#define XCHG_RSP_FROM_PTR_R12_(VALUE) xchg rsp, qword ptr [r12 + VALUE]
#define XCHG_RSP_FROM_PTR_R13_(VALUE) xchg rsp, qword ptr [r13 + VALUE]
#define XCHG_RSP_FROM_PTR_R14_(VALUE) xchg rsp, qword ptr [r14 + VALUE]
#define XCHG_RSP_FROM_PTR_R15_(VALUE) xchg rsp, qword ptr [r15 + VALUE]
#define XCHG_RSP_FROM_PTR_EAX_(VALUE) xchg rsp, qword ptr [eax + VALUE]
#define XCHG_RSP_FROM_PTR_EBX_(VALUE) xchg rsp, qword ptr [ebx + VALUE]
#define XCHG_RSP_FROM_PTR_ECX_(VALUE) xchg rsp, qword ptr [ecx + VALUE]
#define XCHG_RSP_FROM_PTR_EDX_(VALUE) xchg rsp, qword ptr [edx + VALUE]
#define XCHG_RSP_FROM_PTR_EDI_(VALUE) xchg rsp, qword ptr [edi + VALUE]
#define XCHG_RSP_FROM_PTR_ESI_(VALUE) xchg rsp, qword ptr [esi + VALUE]
#define XCHG_RSP_FROM_PTR_EBP_(VALUE) xchg rsp, qword ptr [ebp + VALUE]
#define XCHG_RSP_FROM_PTR_ESP_(VALUE) xchg rsp, qword ptr [esp + VALUE]

#define XCHG_R8_FROM_PTR_RAX_(VALUE) xchg r8, qword ptr [rax + VALUE]
#define XCHG_R8_FROM_PTR_RBX_(VALUE) xchg r8, qword ptr [rbx + VALUE]
#define XCHG_R8_FROM_PTR_RCX_(VALUE) xchg r8, qword ptr [rcx + VALUE]
#define XCHG_R8_FROM_PTR_RDX_(VALUE) xchg r8, qword ptr [rdx + VALUE]
#define XCHG_R8_FROM_PTR_RDI_(VALUE) xchg r8, qword ptr [rdi + VALUE]
#define XCHG_R8_FROM_PTR_RSI_(VALUE) xchg r8, qword ptr [rsi + VALUE]
#define XCHG_R8_FROM_PTR_RBP_(VALUE) xchg r8, qword ptr [rbp + VALUE]
#define XCHG_R8_FROM_PTR_RSP_(VALUE) xchg r8, qword ptr [rsp + VALUE]
#define XCHG_R8_FROM_PTR_R8_(VALUE) xchg r8, qword ptr [r8 + VALUE]
#define XCHG_R8_FROM_PTR_R9_(VALUE) xchg r8, qword ptr [r9 + VALUE]
#define XCHG_R8_FROM_PTR_R10_(VALUE) xchg r8, qword ptr [r10 + VALUE]
#define XCHG_R8_FROM_PTR_R11_(VALUE) xchg r8, qword ptr [r11 + VALUE]
#define XCHG_R8_FROM_PTR_R12_(VALUE) xchg r8, qword ptr [r12 + VALUE]
#define XCHG_R8_FROM_PTR_R13_(VALUE) xchg r8, qword ptr [r13 + VALUE]
#define XCHG_R8_FROM_PTR_R14_(VALUE) xchg r8, qword ptr [r14 + VALUE]
#define XCHG_R8_FROM_PTR_R15_(VALUE) xchg r8, qword ptr [r15 + VALUE]
#define XCHG_R8_FROM_PTR_EAX_(VALUE) xchg r8, qword ptr [eax + VALUE]
#define XCHG_R8_FROM_PTR_EBX_(VALUE) xchg r8, qword ptr [ebx + VALUE]
#define XCHG_R8_FROM_PTR_ECX_(VALUE) xchg r8, qword ptr [ecx + VALUE]
#define XCHG_R8_FROM_PTR_EDX_(VALUE) xchg r8, qword ptr [edx + VALUE]
#define XCHG_R8_FROM_PTR_EDI_(VALUE) xchg r8, qword ptr [edi + VALUE]
#define XCHG_R8_FROM_PTR_ESI_(VALUE) xchg r8, qword ptr [esi + VALUE]
#define XCHG_R8_FROM_PTR_EBP_(VALUE) xchg r8, qword ptr [ebp + VALUE]
#define XCHG_R8_FROM_PTR_ESP_(VALUE) xchg r8, qword ptr [esp + VALUE]

#define XCHG_R9_FROM_PTR_RAX_(VALUE) xchg r9, qword ptr [rax + VALUE]
#define XCHG_R9_FROM_PTR_RBX_(VALUE) xchg r9, qword ptr [rbx + VALUE]
#define XCHG_R9_FROM_PTR_RCX_(VALUE) xchg r9, qword ptr [rcx + VALUE]
#define XCHG_R9_FROM_PTR_RDX_(VALUE) xchg r9, qword ptr [rdx + VALUE]
#define XCHG_R9_FROM_PTR_RDI_(VALUE) xchg r9, qword ptr [rdi + VALUE]
#define XCHG_R9_FROM_PTR_RSI_(VALUE) xchg r9, qword ptr [rsi + VALUE]
#define XCHG_R9_FROM_PTR_RBP_(VALUE) xchg r9, qword ptr [rbp + VALUE]
#define XCHG_R9_FROM_PTR_RSP_(VALUE) xchg r9, qword ptr [rsp + VALUE]
#define XCHG_R9_FROM_PTR_R8_(VALUE) xchg r9, qword ptr [r8 + VALUE]
#define XCHG_R9_FROM_PTR_R9_(VALUE) xchg r9, qword ptr [r9 + VALUE]
#define XCHG_R9_FROM_PTR_R10_(VALUE) xchg r9, qword ptr [r10 + VALUE]
#define XCHG_R9_FROM_PTR_R11_(VALUE) xchg r9, qword ptr [r11 + VALUE]
#define XCHG_R9_FROM_PTR_R12_(VALUE) xchg r9, qword ptr [r12 + VALUE]
#define XCHG_R9_FROM_PTR_R13_(VALUE) xchg r9, qword ptr [r13 + VALUE]
#define XCHG_R9_FROM_PTR_R14_(VALUE) xchg r9, qword ptr [r14 + VALUE]
#define XCHG_R9_FROM_PTR_R15_(VALUE) xchg r9, qword ptr [r15 + VALUE]
#define XCHG_R9_FROM_PTR_EAX_(VALUE) xchg r9, qword ptr [eax + VALUE]
#define XCHG_R9_FROM_PTR_EBX_(VALUE) xchg r9, qword ptr [ebx + VALUE]
#define XCHG_R9_FROM_PTR_ECX_(VALUE) xchg r9, qword ptr [ecx + VALUE]
#define XCHG_R9_FROM_PTR_EDX_(VALUE) xchg r9, qword ptr [edx + VALUE]
#define XCHG_R9_FROM_PTR_EDI_(VALUE) xchg r9, qword ptr [edi + VALUE]
#define XCHG_R9_FROM_PTR_ESI_(VALUE) xchg r9, qword ptr [esi + VALUE]
#define XCHG_R9_FROM_PTR_EBP_(VALUE) xchg r9, qword ptr [ebp + VALUE]
#define XCHG_R9_FROM_PTR_ESP_(VALUE) xchg r9, qword ptr [esp + VALUE]

#define XCHG_R10_FROM_PTR_RAX_(VALUE) xchg r10, qword ptr [rax + VALUE]
#define XCHG_R10_FROM_PTR_RBX_(VALUE) xchg r10, qword ptr [rbx + VALUE]
#define XCHG_R10_FROM_PTR_RCX_(VALUE) xchg r10, qword ptr [rcx + VALUE]
#define XCHG_R10_FROM_PTR_RDX_(VALUE) xchg r10, qword ptr [rdx + VALUE]
#define XCHG_R10_FROM_PTR_RDI_(VALUE) xchg r10, qword ptr [rdi + VALUE]
#define XCHG_R10_FROM_PTR_RSI_(VALUE) xchg r10, qword ptr [rsi + VALUE]
#define XCHG_R10_FROM_PTR_RBP_(VALUE) xchg r10, qword ptr [rbp + VALUE]
#define XCHG_R10_FROM_PTR_RSP_(VALUE) xchg r10, qword ptr [rsp + VALUE]
#define XCHG_R10_FROM_PTR_R8_(VALUE) xchg r10, qword ptr [r8 + VALUE]
#define XCHG_R10_FROM_PTR_R9_(VALUE) xchg r10, qword ptr [r9 + VALUE]
#define XCHG_R10_FROM_PTR_R10_(VALUE) xchg r10, qword ptr [r10 + VALUE]
#define XCHG_R10_FROM_PTR_R11_(VALUE) xchg r10, qword ptr [r11 + VALUE]
#define XCHG_R10_FROM_PTR_R12_(VALUE) xchg r10, qword ptr [r12 + VALUE]
#define XCHG_R10_FROM_PTR_R13_(VALUE) xchg r10, qword ptr [r13 + VALUE]
#define XCHG_R10_FROM_PTR_R14_(VALUE) xchg r10, qword ptr [r14 + VALUE]
#define XCHG_R10_FROM_PTR_R15_(VALUE) xchg r10, qword ptr [r15 + VALUE]
#define XCHG_R10_FROM_PTR_EAX_(VALUE) xchg r10, qword ptr [eax + VALUE]
#define XCHG_R10_FROM_PTR_EBX_(VALUE) xchg r10, qword ptr [ebx + VALUE]
#define XCHG_R10_FROM_PTR_ECX_(VALUE) xchg r10, qword ptr [ecx + VALUE]
#define XCHG_R10_FROM_PTR_EDX_(VALUE) xchg r10, qword ptr [edx + VALUE]
#define XCHG_R10_FROM_PTR_EDI_(VALUE) xchg r10, qword ptr [edi + VALUE]
#define XCHG_R10_FROM_PTR_ESI_(VALUE) xchg r10, qword ptr [esi + VALUE]
#define XCHG_R10_FROM_PTR_EBP_(VALUE) xchg r10, qword ptr [ebp + VALUE]
#define XCHG_R10_FROM_PTR_ESP_(VALUE) xchg r10, qword ptr [esp + VALUE]

#define XCHG_R11_FROM_PTR_RAX_(VALUE) xchg r11, qword ptr [rax + VALUE]
#define XCHG_R11_FROM_PTR_RBX_(VALUE) xchg r11, qword ptr [rbx + VALUE]
#define XCHG_R11_FROM_PTR_RCX_(VALUE) xchg r11, qword ptr [rcx + VALUE]
#define XCHG_R11_FROM_PTR_RDX_(VALUE) xchg r11, qword ptr [rdx + VALUE]
#define XCHG_R11_FROM_PTR_RDI_(VALUE) xchg r11, qword ptr [rdi + VALUE]
#define XCHG_R11_FROM_PTR_RSI_(VALUE) xchg r11, qword ptr [rsi + VALUE]
#define XCHG_R11_FROM_PTR_RBP_(VALUE) xchg r11, qword ptr [rbp + VALUE]
#define XCHG_R11_FROM_PTR_RSP_(VALUE) xchg r11, qword ptr [rsp + VALUE]
#define XCHG_R11_FROM_PTR_R8_(VALUE) xchg r11, qword ptr [r8 + VALUE]
#define XCHG_R11_FROM_PTR_R9_(VALUE) xchg r11, qword ptr [r9 + VALUE]
#define XCHG_R11_FROM_PTR_R10_(VALUE) xchg r11, qword ptr [r10 + VALUE]
#define XCHG_R11_FROM_PTR_R11_(VALUE) xchg r11, qword ptr [r11 + VALUE]
#define XCHG_R11_FROM_PTR_R12_(VALUE) xchg r11, qword ptr [r12 + VALUE]
#define XCHG_R11_FROM_PTR_R13_(VALUE) xchg r11, qword ptr [r13 + VALUE]
#define XCHG_R11_FROM_PTR_R14_(VALUE) xchg r11, qword ptr [r14 + VALUE]
#define XCHG_R11_FROM_PTR_R15_(VALUE) xchg r11, qword ptr [r15 + VALUE]
#define XCHG_R11_FROM_PTR_EAX_(VALUE) xchg r11, qword ptr [eax + VALUE]
#define XCHG_R11_FROM_PTR_EBX_(VALUE) xchg r11, qword ptr [ebx + VALUE]
#define XCHG_R11_FROM_PTR_ECX_(VALUE) xchg r11, qword ptr [ecx + VALUE]
#define XCHG_R11_FROM_PTR_EDX_(VALUE) xchg r11, qword ptr [edx + VALUE]
#define XCHG_R11_FROM_PTR_EDI_(VALUE) xchg r11, qword ptr [edi + VALUE]
#define XCHG_R11_FROM_PTR_ESI_(VALUE) xchg r11, qword ptr [esi + VALUE]
#define XCHG_R11_FROM_PTR_EBP_(VALUE) xchg r11, qword ptr [ebp + VALUE]
#define XCHG_R11_FROM_PTR_ESP_(VALUE) xchg r11, qword ptr [esp + VALUE]

#define XCHG_R12_FROM_PTR_RAX_(VALUE) xchg r12, qword ptr [rax + VALUE]
#define XCHG_R12_FROM_PTR_RBX_(VALUE) xchg r12, qword ptr [rbx + VALUE]
#define XCHG_R12_FROM_PTR_RCX_(VALUE) xchg r12, qword ptr [rcx + VALUE]
#define XCHG_R12_FROM_PTR_RDX_(VALUE) xchg r12, qword ptr [rdx + VALUE]
#define XCHG_R12_FROM_PTR_RDI_(VALUE) xchg r12, qword ptr [rdi + VALUE]
#define XCHG_R12_FROM_PTR_RSI_(VALUE) xchg r12, qword ptr [rsi + VALUE]
#define XCHG_R12_FROM_PTR_RBP_(VALUE) xchg r12, qword ptr [rbp + VALUE]
#define XCHG_R12_FROM_PTR_RSP_(VALUE) xchg r12, qword ptr [rsp + VALUE]
#define XCHG_R12_FROM_PTR_R8_(VALUE) xchg r12, qword ptr [r8 + VALUE]
#define XCHG_R12_FROM_PTR_R9_(VALUE) xchg r12, qword ptr [r9 + VALUE]
#define XCHG_R12_FROM_PTR_R10_(VALUE) xchg r12, qword ptr [r10 + VALUE]
#define XCHG_R12_FROM_PTR_R11_(VALUE) xchg r12, qword ptr [r11 + VALUE]
#define XCHG_R12_FROM_PTR_R12_(VALUE) xchg r12, qword ptr [r12 + VALUE]
#define XCHG_R12_FROM_PTR_R13_(VALUE) xchg r12, qword ptr [r13 + VALUE]
#define XCHG_R12_FROM_PTR_R14_(VALUE) xchg r12, qword ptr [r14 + VALUE]
#define XCHG_R12_FROM_PTR_R15_(VALUE) xchg r12, qword ptr [r15 + VALUE]
#define XCHG_R12_FROM_PTR_EAX_(VALUE) xchg r12, qword ptr [eax + VALUE]
#define XCHG_R12_FROM_PTR_EBX_(VALUE) xchg r12, qword ptr [ebx + VALUE]
#define XCHG_R12_FROM_PTR_ECX_(VALUE) xchg r12, qword ptr [ecx + VALUE]
#define XCHG_R12_FROM_PTR_EDX_(VALUE) xchg r12, qword ptr [edx + VALUE]
#define XCHG_R12_FROM_PTR_EDI_(VALUE) xchg r12, qword ptr [edi + VALUE]
#define XCHG_R12_FROM_PTR_ESI_(VALUE) xchg r12, qword ptr [esi + VALUE]
#define XCHG_R12_FROM_PTR_EBP_(VALUE) xchg r12, qword ptr [ebp + VALUE]
#define XCHG_R12_FROM_PTR_ESP_(VALUE) xchg r12, qword ptr [esp + VALUE]

#define XCHG_R13_FROM_PTR_RAX_(VALUE) xchg r13, qword ptr [rax + VALUE]
#define XCHG_R13_FROM_PTR_RBX_(VALUE) xchg r13, qword ptr [rbx + VALUE]
#define XCHG_R13_FROM_PTR_RCX_(VALUE) xchg r13, qword ptr [rcx + VALUE]
#define XCHG_R13_FROM_PTR_RDX_(VALUE) xchg r13, qword ptr [rdx + VALUE]
#define XCHG_R13_FROM_PTR_RDI_(VALUE) xchg r13, qword ptr [rdi + VALUE]
#define XCHG_R13_FROM_PTR_RSI_(VALUE) xchg r13, qword ptr [rsi + VALUE]
#define XCHG_R13_FROM_PTR_RBP_(VALUE) xchg r13, qword ptr [rbp + VALUE]
#define XCHG_R13_FROM_PTR_RSP_(VALUE) xchg r13, qword ptr [rsp + VALUE]
#define XCHG_R13_FROM_PTR_R8_(VALUE) xchg r13, qword ptr [r8 + VALUE]
#define XCHG_R13_FROM_PTR_R9_(VALUE) xchg r13, qword ptr [r9 + VALUE]
#define XCHG_R13_FROM_PTR_R10_(VALUE) xchg r13, qword ptr [r10 + VALUE]
#define XCHG_R13_FROM_PTR_R11_(VALUE) xchg r13, qword ptr [r11 + VALUE]
#define XCHG_R13_FROM_PTR_R12_(VALUE) xchg r13, qword ptr [r12 + VALUE]
#define XCHG_R13_FROM_PTR_R13_(VALUE) xchg r13, qword ptr [r13 + VALUE]
#define XCHG_R13_FROM_PTR_R14_(VALUE) xchg r13, qword ptr [r14 + VALUE]
#define XCHG_R13_FROM_PTR_R15_(VALUE) xchg r13, qword ptr [r15 + VALUE]
#define XCHG_R13_FROM_PTR_EAX_(VALUE) xchg r13, qword ptr [eax + VALUE]
#define XCHG_R13_FROM_PTR_EBX_(VALUE) xchg r13, qword ptr [ebx + VALUE]
#define XCHG_R13_FROM_PTR_ECX_(VALUE) xchg r13, qword ptr [ecx + VALUE]
#define XCHG_R13_FROM_PTR_EDX_(VALUE) xchg r13, qword ptr [edx + VALUE]
#define XCHG_R13_FROM_PTR_EDI_(VALUE) xchg r13, qword ptr [edi + VALUE]
#define XCHG_R13_FROM_PTR_ESI_(VALUE) xchg r13, qword ptr [esi + VALUE]
#define XCHG_R13_FROM_PTR_EBP_(VALUE) xchg r13, qword ptr [ebp + VALUE]
#define XCHG_R13_FROM_PTR_ESP_(VALUE) xchg r13, qword ptr [esp + VALUE]

#define XCHG_R14_FROM_PTR_RAX_(VALUE) xchg r14, qword ptr [rax + VALUE]
#define XCHG_R14_FROM_PTR_RBX_(VALUE) xchg r14, qword ptr [rbx + VALUE]
#define XCHG_R14_FROM_PTR_RCX_(VALUE) xchg r14, qword ptr [rcx + VALUE]
#define XCHG_R14_FROM_PTR_RDX_(VALUE) xchg r14, qword ptr [rdx + VALUE]
#define XCHG_R14_FROM_PTR_RDI_(VALUE) xchg r14, qword ptr [rdi + VALUE]
#define XCHG_R14_FROM_PTR_RSI_(VALUE) xchg r14, qword ptr [rsi + VALUE]
#define XCHG_R14_FROM_PTR_RBP_(VALUE) xchg r14, qword ptr [rbp + VALUE]
#define XCHG_R14_FROM_PTR_RSP_(VALUE) xchg r14, qword ptr [rsp + VALUE]
#define XCHG_R14_FROM_PTR_R8_(VALUE) xchg r14, qword ptr [r8 + VALUE]
#define XCHG_R14_FROM_PTR_R9_(VALUE) xchg r14, qword ptr [r9 + VALUE]
#define XCHG_R14_FROM_PTR_R10_(VALUE) xchg r14, qword ptr [r10 + VALUE]
#define XCHG_R14_FROM_PTR_R11_(VALUE) xchg r14, qword ptr [r11 + VALUE]
#define XCHG_R14_FROM_PTR_R12_(VALUE) xchg r14, qword ptr [r12 + VALUE]
#define XCHG_R14_FROM_PTR_R13_(VALUE) xchg r14, qword ptr [r13 + VALUE]
#define XCHG_R14_FROM_PTR_R14_(VALUE) xchg r14, qword ptr [r14 + VALUE]
#define XCHG_R14_FROM_PTR_R15_(VALUE) xchg r14, qword ptr [r15 + VALUE]
#define XCHG_R14_FROM_PTR_EAX_(VALUE) xchg r14, qword ptr [eax + VALUE]
#define XCHG_R14_FROM_PTR_EBX_(VALUE) xchg r14, qword ptr [ebx + VALUE]
#define XCHG_R14_FROM_PTR_ECX_(VALUE) xchg r14, qword ptr [ecx + VALUE]
#define XCHG_R14_FROM_PTR_EDX_(VALUE) xchg r14, qword ptr [edx + VALUE]
#define XCHG_R14_FROM_PTR_EDI_(VALUE) xchg r14, qword ptr [edi + VALUE]
#define XCHG_R14_FROM_PTR_ESI_(VALUE) xchg r14, qword ptr [esi + VALUE]
#define XCHG_R14_FROM_PTR_EBP_(VALUE) xchg r14, qword ptr [ebp + VALUE]
#define XCHG_R14_FROM_PTR_ESP_(VALUE) xchg r14, qword ptr [esp + VALUE]

#define XCHG_R15_FROM_PTR_RAX_(VALUE) xchg r15, qword ptr [rax + VALUE]
#define XCHG_R15_FROM_PTR_RBX_(VALUE) xchg r15, qword ptr [rbx + VALUE]
#define XCHG_R15_FROM_PTR_RCX_(VALUE) xchg r15, qword ptr [rcx + VALUE]
#define XCHG_R15_FROM_PTR_RDX_(VALUE) xchg r15, qword ptr [rdx + VALUE]
#define XCHG_R15_FROM_PTR_RDI_(VALUE) xchg r15, qword ptr [rdi + VALUE]
#define XCHG_R15_FROM_PTR_RSI_(VALUE) xchg r15, qword ptr [rsi + VALUE]
#define XCHG_R15_FROM_PTR_RBP_(VALUE) xchg r15, qword ptr [rbp + VALUE]
#define XCHG_R15_FROM_PTR_RSP_(VALUE) xchg r15, qword ptr [rsp + VALUE]
#define XCHG_R15_FROM_PTR_R8_(VALUE) xchg r15, qword ptr [r8 + VALUE]
#define XCHG_R15_FROM_PTR_R9_(VALUE) xchg r15, qword ptr [r9 + VALUE]
#define XCHG_R15_FROM_PTR_R10_(VALUE) xchg r15, qword ptr [r10 + VALUE]
#define XCHG_R15_FROM_PTR_R11_(VALUE) xchg r15, qword ptr [r11 + VALUE]
#define XCHG_R15_FROM_PTR_R12_(VALUE) xchg r15, qword ptr [r12 + VALUE]
#define XCHG_R15_FROM_PTR_R13_(VALUE) xchg r15, qword ptr [r13 + VALUE]
#define XCHG_R15_FROM_PTR_R14_(VALUE) xchg r15, qword ptr [r14 + VALUE]
#define XCHG_R15_FROM_PTR_R15_(VALUE) xchg r15, qword ptr [r15 + VALUE]
#define XCHG_R15_FROM_PTR_EAX_(VALUE) xchg r15, qword ptr [eax + VALUE]
#define XCHG_R15_FROM_PTR_EBX_(VALUE) xchg r15, qword ptr [ebx + VALUE]
#define XCHG_R15_FROM_PTR_ECX_(VALUE) xchg r15, qword ptr [ecx + VALUE]
#define XCHG_R15_FROM_PTR_EDX_(VALUE) xchg r15, qword ptr [edx + VALUE]
#define XCHG_R15_FROM_PTR_EDI_(VALUE) xchg r15, qword ptr [edi + VALUE]
#define XCHG_R15_FROM_PTR_ESI_(VALUE) xchg r15, qword ptr [esi + VALUE]
#define XCHG_R15_FROM_PTR_EBP_(VALUE) xchg r15, qword ptr [ebp + VALUE]
#define XCHG_R15_FROM_PTR_ESP_(VALUE) xchg r15, qword ptr [esp + VALUE]

#define XCHG_RAX_TO_PTR_RAX_(VALUE) xchg qword ptr [rax + VALUE], rax
#define XCHG_RAX_TO_PTR_RBX_(VALUE) xchg qword ptr [rbx + VALUE], rax
#define XCHG_RAX_TO_PTR_RCX_(VALUE) xchg qword ptr [rcx + VALUE], rax
#define XCHG_RAX_TO_PTR_RDX_(VALUE) xchg qword ptr [rdx + VALUE], rax
#define XCHG_RAX_TO_PTR_RDI_(VALUE) xchg qword ptr [rdi + VALUE], rax
#define XCHG_RAX_TO_PTR_RSI_(VALUE) xchg qword ptr [rsi + VALUE], rax
#define XCHG_RAX_TO_PTR_RBP_(VALUE) xchg qword ptr [rbp + VALUE], rax
#define XCHG_RAX_TO_PTR_RSP_(VALUE) xchg qword ptr [rsp + VALUE], rax
#define XCHG_RAX_TO_PTR_R8_(VALUE) xchg qword ptr [r8 + VALUE], rax
#define XCHG_RAX_TO_PTR_R9_(VALUE) xchg qword ptr [r9 + VALUE], rax
#define XCHG_RAX_TO_PTR_R10_(VALUE) xchg qword ptr [r10 + VALUE], rax
#define XCHG_RAX_TO_PTR_R11_(VALUE) xchg qword ptr [r11 + VALUE], rax
#define XCHG_RAX_TO_PTR_R12_(VALUE) xchg qword ptr [r12 + VALUE], rax
#define XCHG_RAX_TO_PTR_R13_(VALUE) xchg qword ptr [r13 + VALUE], rax
#define XCHG_RAX_TO_PTR_R14_(VALUE) xchg qword ptr [r14 + VALUE], rax
#define XCHG_RAX_TO_PTR_R15_(VALUE) xchg qword ptr [r15 + VALUE], rax
#define XCHG_RAX_TO_PTR_EAX_(VALUE) xchg qword ptr [eax + VALUE], rax
#define XCHG_RAX_TO_PTR_EBX_(VALUE) xchg qword ptr [ebx + VALUE], rax
#define XCHG_RAX_TO_PTR_ECX_(VALUE) xchg qword ptr [ecx + VALUE], rax
#define XCHG_RAX_TO_PTR_EDX_(VALUE) xchg qword ptr [edx + VALUE], rax
#define XCHG_RAX_TO_PTR_EDI_(VALUE) xchg qword ptr [edi + VALUE], rax
#define XCHG_RAX_TO_PTR_ESI_(VALUE) xchg qword ptr [esi + VALUE], rax
#define XCHG_RAX_TO_PTR_EBP_(VALUE) xchg qword ptr [ebp + VALUE], rax
#define XCHG_RAX_TO_PTR_ESP_(VALUE) xchg qword ptr [esp + VALUE], rax

#define XCHG_RBX_TO_PTR_RAX_(VALUE) xchg qword ptr [rax + VALUE], rbx
#define XCHG_RBX_TO_PTR_RBX_(VALUE) xchg qword ptr [rbx + VALUE], rbx
#define XCHG_RBX_TO_PTR_RCX_(VALUE) xchg qword ptr [rcx + VALUE], rbx
#define XCHG_RBX_TO_PTR_RDX_(VALUE) xchg qword ptr [rdx + VALUE], rbx
#define XCHG_RBX_TO_PTR_RDI_(VALUE) xchg qword ptr [rdi + VALUE], rbx
#define XCHG_RBX_TO_PTR_RSI_(VALUE) xchg qword ptr [rsi + VALUE], rbx
#define XCHG_RBX_TO_PTR_RBP_(VALUE) xchg qword ptr [rbp + VALUE], rbx
#define XCHG_RBX_TO_PTR_RSP_(VALUE) xchg qword ptr [rsp + VALUE], rbx
#define XCHG_RBX_TO_PTR_R8_(VALUE) xchg qword ptr [r8 + VALUE], rbx
#define XCHG_RBX_TO_PTR_R9_(VALUE) xchg qword ptr [r9 + VALUE], rbx
#define XCHG_RBX_TO_PTR_R10_(VALUE) xchg qword ptr [r10 + VALUE], rbx
#define XCHG_RBX_TO_PTR_R11_(VALUE) xchg qword ptr [r11 + VALUE], rbx
#define XCHG_RBX_TO_PTR_R12_(VALUE) xchg qword ptr [r12 + VALUE], rbx
#define XCHG_RBX_TO_PTR_R13_(VALUE) xchg qword ptr [r13 + VALUE], rbx
#define XCHG_RBX_TO_PTR_R14_(VALUE) xchg qword ptr [r14 + VALUE], rbx
#define XCHG_RBX_TO_PTR_R15_(VALUE) xchg qword ptr [r15 + VALUE], rbx
#define XCHG_RBX_TO_PTR_EAX_(VALUE) xchg qword ptr [eax + VALUE], rbx
#define XCHG_RBX_TO_PTR_EBX_(VALUE) xchg qword ptr [ebx + VALUE], rbx
#define XCHG_RBX_TO_PTR_ECX_(VALUE) xchg qword ptr [ecx + VALUE], rbx
#define XCHG_RBX_TO_PTR_EDX_(VALUE) xchg qword ptr [edx + VALUE], rbx
#define XCHG_RBX_TO_PTR_EDI_(VALUE) xchg qword ptr [edi + VALUE], rbx
#define XCHG_RBX_TO_PTR_ESI_(VALUE) xchg qword ptr [esi + VALUE], rbx
#define XCHG_RBX_TO_PTR_EBP_(VALUE) xchg qword ptr [ebp + VALUE], rbx
#define XCHG_RBX_TO_PTR_ESP_(VALUE) xchg qword ptr [esp + VALUE], rbx

#define XCHG_RCX_TO_PTR_RAX_(VALUE) xchg qword ptr [rax + VALUE], rcx
#define XCHG_RCX_TO_PTR_RBX_(VALUE) xchg qword ptr [rbx + VALUE], rcx
#define XCHG_RCX_TO_PTR_RCX_(VALUE) xchg qword ptr [rcx + VALUE], rcx
#define XCHG_RCX_TO_PTR_RDX_(VALUE) xchg qword ptr [rdx + VALUE], rcx
#define XCHG_RCX_TO_PTR_RDI_(VALUE) xchg qword ptr [rdi + VALUE], rcx
#define XCHG_RCX_TO_PTR_RSI_(VALUE) xchg qword ptr [rsi + VALUE], rcx
#define XCHG_RCX_TO_PTR_RBP_(VALUE) xchg qword ptr [rbp + VALUE], rcx
#define XCHG_RCX_TO_PTR_RSP_(VALUE) xchg qword ptr [rsp + VALUE], rcx
#define XCHG_RCX_TO_PTR_R8_(VALUE) xchg qword ptr [r8 + VALUE], rcx
#define XCHG_RCX_TO_PTR_R9_(VALUE) xchg qword ptr [r9 + VALUE], rcx
#define XCHG_RCX_TO_PTR_R10_(VALUE) xchg qword ptr [r10 + VALUE], rcx
#define XCHG_RCX_TO_PTR_R11_(VALUE) xchg qword ptr [r11 + VALUE], rcx
#define XCHG_RCX_TO_PTR_R12_(VALUE) xchg qword ptr [r12 + VALUE], rcx
#define XCHG_RCX_TO_PTR_R13_(VALUE) xchg qword ptr [r13 + VALUE], rcx
#define XCHG_RCX_TO_PTR_R14_(VALUE) xchg qword ptr [r14 + VALUE], rcx
#define XCHG_RCX_TO_PTR_R15_(VALUE) xchg qword ptr [r15 + VALUE], rcx
#define XCHG_RCX_TO_PTR_EAX_(VALUE) xchg qword ptr [eax + VALUE], rcx
#define XCHG_RCX_TO_PTR_EBX_(VALUE) xchg qword ptr [ebx + VALUE], rcx
#define XCHG_RCX_TO_PTR_ECX_(VALUE) xchg qword ptr [ecx + VALUE], rcx
#define XCHG_RCX_TO_PTR_EDX_(VALUE) xchg qword ptr [edx + VALUE], rcx
#define XCHG_RCX_TO_PTR_EDI_(VALUE) xchg qword ptr [edi + VALUE], rcx
#define XCHG_RCX_TO_PTR_ESI_(VALUE) xchg qword ptr [esi + VALUE], rcx
#define XCHG_RCX_TO_PTR_EBP_(VALUE) xchg qword ptr [ebp + VALUE], rcx
#define XCHG_RCX_TO_PTR_ESP_(VALUE) xchg qword ptr [esp + VALUE], rcx

#define XCHG_RDX_TO_PTR_RAX_(VALUE) xchg qword ptr [rax + VALUE], rdx
#define XCHG_RDX_TO_PTR_RBX_(VALUE) xchg qword ptr [rbx + VALUE], rdx
#define XCHG_RDX_TO_PTR_RCX_(VALUE) xchg qword ptr [rcx + VALUE], rdx
#define XCHG_RDX_TO_PTR_RDX_(VALUE) xchg qword ptr [rdx + VALUE], rdx
#define XCHG_RDX_TO_PTR_RDI_(VALUE) xchg qword ptr [rdi + VALUE], rdx
#define XCHG_RDX_TO_PTR_RSI_(VALUE) xchg qword ptr [rsi + VALUE], rdx
#define XCHG_RDX_TO_PTR_RBP_(VALUE) xchg qword ptr [rbp + VALUE], rdx
#define XCHG_RDX_TO_PTR_RSP_(VALUE) xchg qword ptr [rsp + VALUE], rdx
#define XCHG_RDX_TO_PTR_R8_(VALUE) xchg qword ptr [r8 + VALUE], rdx
#define XCHG_RDX_TO_PTR_R9_(VALUE) xchg qword ptr [r9 + VALUE], rdx
#define XCHG_RDX_TO_PTR_R10_(VALUE) xchg qword ptr [r10 + VALUE], rdx
#define XCHG_RDX_TO_PTR_R11_(VALUE) xchg qword ptr [r11 + VALUE], rdx
#define XCHG_RDX_TO_PTR_R12_(VALUE) xchg qword ptr [r12 + VALUE], rdx
#define XCHG_RDX_TO_PTR_R13_(VALUE) xchg qword ptr [r13 + VALUE], rdx
#define XCHG_RDX_TO_PTR_R14_(VALUE) xchg qword ptr [r14 + VALUE], rdx
#define XCHG_RDX_TO_PTR_R15_(VALUE) xchg qword ptr [r15 + VALUE], rdx
#define XCHG_RDX_TO_PTR_EAX_(VALUE) xchg qword ptr [eax + VALUE], rdx
#define XCHG_RDX_TO_PTR_EBX_(VALUE) xchg qword ptr [ebx + VALUE], rdx
#define XCHG_RDX_TO_PTR_ECX_(VALUE) xchg qword ptr [ecx + VALUE], rdx
#define XCHG_RDX_TO_PTR_EDX_(VALUE) xchg qword ptr [edx + VALUE], rdx
#define XCHG_RDX_TO_PTR_EDI_(VALUE) xchg qword ptr [edi + VALUE], rdx
#define XCHG_RDX_TO_PTR_ESI_(VALUE) xchg qword ptr [esi + VALUE], rdx
#define XCHG_RDX_TO_PTR_EBP_(VALUE) xchg qword ptr [ebp + VALUE], rdx
#define XCHG_RDX_TO_PTR_ESP_(VALUE) xchg qword ptr [esp + VALUE], rdx

#define XCHG_RDI_TO_PTR_RAX_(VALUE) xchg qword ptr [rax + VALUE], rdi
#define XCHG_RDI_TO_PTR_RBX_(VALUE) xchg qword ptr [rbx + VALUE], rdi
#define XCHG_RDI_TO_PTR_RCX_(VALUE) xchg qword ptr [rcx + VALUE], rdi
#define XCHG_RDI_TO_PTR_RDX_(VALUE) xchg qword ptr [rdx + VALUE], rdi
#define XCHG_RDI_TO_PTR_RDI_(VALUE) xchg qword ptr [rdi + VALUE], rdi
#define XCHG_RDI_TO_PTR_RSI_(VALUE) xchg qword ptr [rsi + VALUE], rdi
#define XCHG_RDI_TO_PTR_RBP_(VALUE) xchg qword ptr [rbp + VALUE], rdi
#define XCHG_RDI_TO_PTR_RSP_(VALUE) xchg qword ptr [rsp + VALUE], rdi
#define XCHG_RDI_TO_PTR_R8_(VALUE) xchg qword ptr [r8 + VALUE], rdi
#define XCHG_RDI_TO_PTR_R9_(VALUE) xchg qword ptr [r9 + VALUE], rdi
#define XCHG_RDI_TO_PTR_R10_(VALUE) xchg qword ptr [r10 + VALUE], rdi
#define XCHG_RDI_TO_PTR_R11_(VALUE) xchg qword ptr [r11 + VALUE], rdi
#define XCHG_RDI_TO_PTR_R12_(VALUE) xchg qword ptr [r12 + VALUE], rdi
#define XCHG_RDI_TO_PTR_R13_(VALUE) xchg qword ptr [r13 + VALUE], rdi
#define XCHG_RDI_TO_PTR_R14_(VALUE) xchg qword ptr [r14 + VALUE], rdi
#define XCHG_RDI_TO_PTR_R15_(VALUE) xchg qword ptr [r15 + VALUE], rdi
#define XCHG_RDI_TO_PTR_EAX_(VALUE) xchg qword ptr [eax + VALUE], rdi
#define XCHG_RDI_TO_PTR_EBX_(VALUE) xchg qword ptr [ebx + VALUE], rdi
#define XCHG_RDI_TO_PTR_ECX_(VALUE) xchg qword ptr [ecx + VALUE], rdi
#define XCHG_RDI_TO_PTR_EDX_(VALUE) xchg qword ptr [edx + VALUE], rdi
#define XCHG_RDI_TO_PTR_EDI_(VALUE) xchg qword ptr [edi + VALUE], rdi
#define XCHG_RDI_TO_PTR_ESI_(VALUE) xchg qword ptr [esi + VALUE], rdi
#define XCHG_RDI_TO_PTR_EBP_(VALUE) xchg qword ptr [ebp + VALUE], rdi
#define XCHG_RDI_TO_PTR_ESP_(VALUE) xchg qword ptr [esp + VALUE], rdi

#define XCHG_RSI_TO_PTR_RAX_(VALUE) xchg qword ptr [rax + VALUE], rsi
#define XCHG_RSI_TO_PTR_RBX_(VALUE) xchg qword ptr [rbx + VALUE], rsi
#define XCHG_RSI_TO_PTR_RCX_(VALUE) xchg qword ptr [rcx + VALUE], rsi
#define XCHG_RSI_TO_PTR_RDX_(VALUE) xchg qword ptr [rdx + VALUE], rsi
#define XCHG_RSI_TO_PTR_RDI_(VALUE) xchg qword ptr [rdi + VALUE], rsi
#define XCHG_RSI_TO_PTR_RSI_(VALUE) xchg qword ptr [rsi + VALUE], rsi
#define XCHG_RSI_TO_PTR_RBP_(VALUE) xchg qword ptr [rbp + VALUE], rsi
#define XCHG_RSI_TO_PTR_RSP_(VALUE) xchg qword ptr [rsp + VALUE], rsi
#define XCHG_RSI_TO_PTR_R8_(VALUE) xchg qword ptr [r8 + VALUE], rsi
#define XCHG_RSI_TO_PTR_R9_(VALUE) xchg qword ptr [r9 + VALUE], rsi
#define XCHG_RSI_TO_PTR_R10_(VALUE) xchg qword ptr [r10 + VALUE], rsi
#define XCHG_RSI_TO_PTR_R11_(VALUE) xchg qword ptr [r11 + VALUE], rsi
#define XCHG_RSI_TO_PTR_R12_(VALUE) xchg qword ptr [r12 + VALUE], rsi
#define XCHG_RSI_TO_PTR_R13_(VALUE) xchg qword ptr [r13 + VALUE], rsi
#define XCHG_RSI_TO_PTR_R14_(VALUE) xchg qword ptr [r14 + VALUE], rsi
#define XCHG_RSI_TO_PTR_R15_(VALUE) xchg qword ptr [r15 + VALUE], rsi
#define XCHG_RSI_TO_PTR_EAX_(VALUE) xchg qword ptr [eax + VALUE], rsi
#define XCHG_RSI_TO_PTR_EBX_(VALUE) xchg qword ptr [ebx + VALUE], rsi
#define XCHG_RSI_TO_PTR_ECX_(VALUE) xchg qword ptr [ecx + VALUE], rsi
#define XCHG_RSI_TO_PTR_EDX_(VALUE) xchg qword ptr [edx + VALUE], rsi
#define XCHG_RSI_TO_PTR_EDI_(VALUE) xchg qword ptr [edi + VALUE], rsi
#define XCHG_RSI_TO_PTR_ESI_(VALUE) xchg qword ptr [esi + VALUE], rsi
#define XCHG_RSI_TO_PTR_EBP_(VALUE) xchg qword ptr [ebp + VALUE], rsi
#define XCHG_RSI_TO_PTR_ESP_(VALUE) xchg qword ptr [esp + VALUE], rsi

#define XCHG_RBP_TO_PTR_RAX_(VALUE) xchg qword ptr [rax + VALUE], rbp
#define XCHG_RBP_TO_PTR_RBX_(VALUE) xchg qword ptr [rbx + VALUE], rbp
#define XCHG_RBP_TO_PTR_RCX_(VALUE) xchg qword ptr [rcx + VALUE], rbp
#define XCHG_RBP_TO_PTR_RDX_(VALUE) xchg qword ptr [rdx + VALUE], rbp
#define XCHG_RBP_TO_PTR_RDI_(VALUE) xchg qword ptr [rdi + VALUE], rbp
#define XCHG_RBP_TO_PTR_RSI_(VALUE) xchg qword ptr [rsi + VALUE], rbp
#define XCHG_RBP_TO_PTR_RBP_(VALUE) xchg qword ptr [rbp + VALUE], rbp
#define XCHG_RBP_TO_PTR_RSP_(VALUE) xchg qword ptr [rsp + VALUE], rbp
#define XCHG_RBP_TO_PTR_R8_(VALUE) xchg qword ptr [r8 + VALUE], rbp
#define XCHG_RBP_TO_PTR_R9_(VALUE) xchg qword ptr [r9 + VALUE], rbp
#define XCHG_RBP_TO_PTR_R10_(VALUE) xchg qword ptr [r10 + VALUE], rbp
#define XCHG_RBP_TO_PTR_R11_(VALUE) xchg qword ptr [r11 + VALUE], rbp
#define XCHG_RBP_TO_PTR_R12_(VALUE) xchg qword ptr [r12 + VALUE], rbp
#define XCHG_RBP_TO_PTR_R13_(VALUE) xchg qword ptr [r13 + VALUE], rbp
#define XCHG_RBP_TO_PTR_R14_(VALUE) xchg qword ptr [r14 + VALUE], rbp
#define XCHG_RBP_TO_PTR_R15_(VALUE) xchg qword ptr [r15 + VALUE], rbp
#define XCHG_RBP_TO_PTR_EAX_(VALUE) xchg qword ptr [eax + VALUE], rbp
#define XCHG_RBP_TO_PTR_EBX_(VALUE) xchg qword ptr [ebx + VALUE], rbp
#define XCHG_RBP_TO_PTR_ECX_(VALUE) xchg qword ptr [ecx + VALUE], rbp
#define XCHG_RBP_TO_PTR_EDX_(VALUE) xchg qword ptr [edx + VALUE], rbp
#define XCHG_RBP_TO_PTR_EDI_(VALUE) xchg qword ptr [edi + VALUE], rbp
#define XCHG_RBP_TO_PTR_ESI_(VALUE) xchg qword ptr [esi + VALUE], rbp
#define XCHG_RBP_TO_PTR_EBP_(VALUE) xchg qword ptr [ebp + VALUE], rbp
#define XCHG_RBP_TO_PTR_ESP_(VALUE) xchg qword ptr [esp + VALUE], rbp

#define XCHG_RSP_TO_PTR_RAX_(VALUE) xchg qword ptr [rax + VALUE], rsp
#define XCHG_RSP_TO_PTR_RBX_(VALUE) xchg qword ptr [rbx + VALUE], rsp
#define XCHG_RSP_TO_PTR_RCX_(VALUE) xchg qword ptr [rcx + VALUE], rsp
#define XCHG_RSP_TO_PTR_RDX_(VALUE) xchg qword ptr [rdx + VALUE], rsp
#define XCHG_RSP_TO_PTR_RDI_(VALUE) xchg qword ptr [rdi + VALUE], rsp
#define XCHG_RSP_TO_PTR_RSI_(VALUE) xchg qword ptr [rsi + VALUE], rsp
#define XCHG_RSP_TO_PTR_RBP_(VALUE) xchg qword ptr [rbp + VALUE], rsp
#define XCHG_RSP_TO_PTR_RSP_(VALUE) xchg qword ptr [rsp + VALUE], rsp
#define XCHG_RSP_TO_PTR_R8_(VALUE) xchg qword ptr [r8 + VALUE], rsp
#define XCHG_RSP_TO_PTR_R9_(VALUE) xchg qword ptr [r9 + VALUE], rsp
#define XCHG_RSP_TO_PTR_R10_(VALUE) xchg qword ptr [r10 + VALUE], rsp
#define XCHG_RSP_TO_PTR_R11_(VALUE) xchg qword ptr [r11 + VALUE], rsp
#define XCHG_RSP_TO_PTR_R12_(VALUE) xchg qword ptr [r12 + VALUE], rsp
#define XCHG_RSP_TO_PTR_R13_(VALUE) xchg qword ptr [r13 + VALUE], rsp
#define XCHG_RSP_TO_PTR_R14_(VALUE) xchg qword ptr [r14 + VALUE], rsp
#define XCHG_RSP_TO_PTR_R15_(VALUE) xchg qword ptr [r15 + VALUE], rsp
#define XCHG_RSP_TO_PTR_EAX_(VALUE) xchg qword ptr [eax + VALUE], rsp
#define XCHG_RSP_TO_PTR_EBX_(VALUE) xchg qword ptr [ebx + VALUE], rsp
#define XCHG_RSP_TO_PTR_ECX_(VALUE) xchg qword ptr [ecx + VALUE], rsp
#define XCHG_RSP_TO_PTR_EDX_(VALUE) xchg qword ptr [edx + VALUE], rsp
#define XCHG_RSP_TO_PTR_EDI_(VALUE) xchg qword ptr [edi + VALUE], rsp
#define XCHG_RSP_TO_PTR_ESI_(VALUE) xchg qword ptr [esi + VALUE], rsp
#define XCHG_RSP_TO_PTR_EBP_(VALUE) xchg qword ptr [ebp + VALUE], rsp
#define XCHG_RSP_TO_PTR_ESP_(VALUE) xchg qword ptr [esp + VALUE], rsp

#define XCHG_R8_TO_PTR_RAX_(VALUE) xchg qword ptr [rax + VALUE], r8
#define XCHG_R8_TO_PTR_RBX_(VALUE) xchg qword ptr [rbx + VALUE], r8
#define XCHG_R8_TO_PTR_RCX_(VALUE) xchg qword ptr [rcx + VALUE], r8
#define XCHG_R8_TO_PTR_RDX_(VALUE) xchg qword ptr [rdx + VALUE], r8
#define XCHG_R8_TO_PTR_RDI_(VALUE) xchg qword ptr [rdi + VALUE], r8
#define XCHG_R8_TO_PTR_RSI_(VALUE) xchg qword ptr [rsi + VALUE], r8
#define XCHG_R8_TO_PTR_RBP_(VALUE) xchg qword ptr [rbp + VALUE], r8
#define XCHG_R8_TO_PTR_RSP_(VALUE) xchg qword ptr [rsp + VALUE], r8
#define XCHG_R8_TO_PTR_R8_(VALUE) xchg qword ptr [r8 + VALUE], r8
#define XCHG_R8_TO_PTR_R9_(VALUE) xchg qword ptr [r9 + VALUE], r8
#define XCHG_R8_TO_PTR_R10_(VALUE) xchg qword ptr [r10 + VALUE], r8
#define XCHG_R8_TO_PTR_R11_(VALUE) xchg qword ptr [r11 + VALUE], r8
#define XCHG_R8_TO_PTR_R12_(VALUE) xchg qword ptr [r12 + VALUE], r8
#define XCHG_R8_TO_PTR_R13_(VALUE) xchg qword ptr [r13 + VALUE], r8
#define XCHG_R8_TO_PTR_R14_(VALUE) xchg qword ptr [r14 + VALUE], r8
#define XCHG_R8_TO_PTR_R15_(VALUE) xchg qword ptr [r15 + VALUE], r8
#define XCHG_R8_TO_PTR_EAX_(VALUE) xchg qword ptr [eax + VALUE], r8
#define XCHG_R8_TO_PTR_EBX_(VALUE) xchg qword ptr [ebx + VALUE], r8
#define XCHG_R8_TO_PTR_ECX_(VALUE) xchg qword ptr [ecx + VALUE], r8
#define XCHG_R8_TO_PTR_EDX_(VALUE) xchg qword ptr [edx + VALUE], r8
#define XCHG_R8_TO_PTR_EDI_(VALUE) xchg qword ptr [edi + VALUE], r8
#define XCHG_R8_TO_PTR_ESI_(VALUE) xchg qword ptr [esi + VALUE], r8
#define XCHG_R8_TO_PTR_EBP_(VALUE) xchg qword ptr [ebp + VALUE], r8
#define XCHG_R8_TO_PTR_ESP_(VALUE) xchg qword ptr [esp + VALUE], r8

#define XCHG_R9_TO_PTR_RAX_(VALUE) xchg qword ptr [rax + VALUE], r9
#define XCHG_R9_TO_PTR_RBX_(VALUE) xchg qword ptr [rbx + VALUE], r9
#define XCHG_R9_TO_PTR_RCX_(VALUE) xchg qword ptr [rcx + VALUE], r9
#define XCHG_R9_TO_PTR_RDX_(VALUE) xchg qword ptr [rdx + VALUE], r9
#define XCHG_R9_TO_PTR_RDI_(VALUE) xchg qword ptr [rdi + VALUE], r9
#define XCHG_R9_TO_PTR_RSI_(VALUE) xchg qword ptr [rsi + VALUE], r9
#define XCHG_R9_TO_PTR_RBP_(VALUE) xchg qword ptr [rbp + VALUE], r9
#define XCHG_R9_TO_PTR_RSP_(VALUE) xchg qword ptr [rsp + VALUE], r9
#define XCHG_R9_TO_PTR_R8_(VALUE) xchg qword ptr [r8 + VALUE], r9
#define XCHG_R9_TO_PTR_R9_(VALUE) xchg qword ptr [r9 + VALUE], r9
#define XCHG_R9_TO_PTR_R10_(VALUE) xchg qword ptr [r10 + VALUE], r9
#define XCHG_R9_TO_PTR_R11_(VALUE) xchg qword ptr [r11 + VALUE], r9
#define XCHG_R9_TO_PTR_R12_(VALUE) xchg qword ptr [r12 + VALUE], r9
#define XCHG_R9_TO_PTR_R13_(VALUE) xchg qword ptr [r13 + VALUE], r9
#define XCHG_R9_TO_PTR_R14_(VALUE) xchg qword ptr [r14 + VALUE], r9
#define XCHG_R9_TO_PTR_R15_(VALUE) xchg qword ptr [r15 + VALUE], r9
#define XCHG_R9_TO_PTR_EAX_(VALUE) xchg qword ptr [eax + VALUE], r9
#define XCHG_R9_TO_PTR_EBX_(VALUE) xchg qword ptr [ebx + VALUE], r9
#define XCHG_R9_TO_PTR_ECX_(VALUE) xchg qword ptr [ecx + VALUE], r9
#define XCHG_R9_TO_PTR_EDX_(VALUE) xchg qword ptr [edx + VALUE], r9
#define XCHG_R9_TO_PTR_EDI_(VALUE) xchg qword ptr [edi + VALUE], r9
#define XCHG_R9_TO_PTR_ESI_(VALUE) xchg qword ptr [esi + VALUE], r9
#define XCHG_R9_TO_PTR_EBP_(VALUE) xchg qword ptr [ebp + VALUE], r9
#define XCHG_R9_TO_PTR_ESP_(VALUE) xchg qword ptr [esp + VALUE], r9

#define XCHG_R10_TO_PTR_RAX_(VALUE) xchg qword ptr [rax + VALUE], r10
#define XCHG_R10_TO_PTR_RBX_(VALUE) xchg qword ptr [rbx + VALUE], r10
#define XCHG_R10_TO_PTR_RCX_(VALUE) xchg qword ptr [rcx + VALUE], r10
#define XCHG_R10_TO_PTR_RDX_(VALUE) xchg qword ptr [rdx + VALUE], r10
#define XCHG_R10_TO_PTR_RDI_(VALUE) xchg qword ptr [rdi + VALUE], r10
#define XCHG_R10_TO_PTR_RSI_(VALUE) xchg qword ptr [rsi + VALUE], r10
#define XCHG_R10_TO_PTR_RBP_(VALUE) xchg qword ptr [rbp + VALUE], r10
#define XCHG_R10_TO_PTR_RSP_(VALUE) xchg qword ptr [rsp + VALUE], r10
#define XCHG_R10_TO_PTR_R8_(VALUE) xchg qword ptr [r8 + VALUE], r10
#define XCHG_R10_TO_PTR_R9_(VALUE) xchg qword ptr [r9 + VALUE], r10
#define XCHG_R10_TO_PTR_R10_(VALUE) xchg qword ptr [r10 + VALUE], r10
#define XCHG_R10_TO_PTR_R11_(VALUE) xchg qword ptr [r11 + VALUE], r10
#define XCHG_R10_TO_PTR_R12_(VALUE) xchg qword ptr [r12 + VALUE], r10
#define XCHG_R10_TO_PTR_R13_(VALUE) xchg qword ptr [r13 + VALUE], r10
#define XCHG_R10_TO_PTR_R14_(VALUE) xchg qword ptr [r14 + VALUE], r10
#define XCHG_R10_TO_PTR_R15_(VALUE) xchg qword ptr [r15 + VALUE], r10
#define XCHG_R10_TO_PTR_EAX_(VALUE) xchg qword ptr [eax + VALUE], r10
#define XCHG_R10_TO_PTR_EBX_(VALUE) xchg qword ptr [ebx + VALUE], r10
#define XCHG_R10_TO_PTR_ECX_(VALUE) xchg qword ptr [ecx + VALUE], r10
#define XCHG_R10_TO_PTR_EDX_(VALUE) xchg qword ptr [edx + VALUE], r10
#define XCHG_R10_TO_PTR_EDI_(VALUE) xchg qword ptr [edi + VALUE], r10
#define XCHG_R10_TO_PTR_ESI_(VALUE) xchg qword ptr [esi + VALUE], r10
#define XCHG_R10_TO_PTR_EBP_(VALUE) xchg qword ptr [ebp + VALUE], r10
#define XCHG_R10_TO_PTR_ESP_(VALUE) xchg qword ptr [esp + VALUE], r10

#define XCHG_R11_TO_PTR_RAX_(VALUE) xchg qword ptr [rax + VALUE], r11
#define XCHG_R11_TO_PTR_RBX_(VALUE) xchg qword ptr [rbx + VALUE], r11
#define XCHG_R11_TO_PTR_RCX_(VALUE) xchg qword ptr [rcx + VALUE], r11
#define XCHG_R11_TO_PTR_RDX_(VALUE) xchg qword ptr [rdx + VALUE], r11
#define XCHG_R11_TO_PTR_RDI_(VALUE) xchg qword ptr [rdi + VALUE], r11
#define XCHG_R11_TO_PTR_RSI_(VALUE) xchg qword ptr [rsi + VALUE], r11
#define XCHG_R11_TO_PTR_RBP_(VALUE) xchg qword ptr [rbp + VALUE], r11
#define XCHG_R11_TO_PTR_RSP_(VALUE) xchg qword ptr [rsp + VALUE], r11
#define XCHG_R11_TO_PTR_R8_(VALUE) xchg qword ptr [r8 + VALUE], r11
#define XCHG_R11_TO_PTR_R9_(VALUE) xchg qword ptr [r9 + VALUE], r11
#define XCHG_R11_TO_PTR_R10_(VALUE) xchg qword ptr [r10 + VALUE], r11
#define XCHG_R11_TO_PTR_R11_(VALUE) xchg qword ptr [r11 + VALUE], r11
#define XCHG_R11_TO_PTR_R12_(VALUE) xchg qword ptr [r12 + VALUE], r11
#define XCHG_R11_TO_PTR_R13_(VALUE) xchg qword ptr [r13 + VALUE], r11
#define XCHG_R11_TO_PTR_R14_(VALUE) xchg qword ptr [r14 + VALUE], r11
#define XCHG_R11_TO_PTR_R15_(VALUE) xchg qword ptr [r15 + VALUE], r11
#define XCHG_R11_TO_PTR_EAX_(VALUE) xchg qword ptr [eax + VALUE], r11
#define XCHG_R11_TO_PTR_EBX_(VALUE) xchg qword ptr [ebx + VALUE], r11
#define XCHG_R11_TO_PTR_ECX_(VALUE) xchg qword ptr [ecx + VALUE], r11
#define XCHG_R11_TO_PTR_EDX_(VALUE) xchg qword ptr [edx + VALUE], r11
#define XCHG_R11_TO_PTR_EDI_(VALUE) xchg qword ptr [edi + VALUE], r11
#define XCHG_R11_TO_PTR_ESI_(VALUE) xchg qword ptr [esi + VALUE], r11
#define XCHG_R11_TO_PTR_EBP_(VALUE) xchg qword ptr [ebp + VALUE], r11
#define XCHG_R11_TO_PTR_ESP_(VALUE) xchg qword ptr [esp + VALUE], r11

#define XCHG_R12_TO_PTR_RAX_(VALUE) xchg qword ptr [rax + VALUE], r12
#define XCHG_R12_TO_PTR_RBX_(VALUE) xchg qword ptr [rbx + VALUE], r12
#define XCHG_R12_TO_PTR_RCX_(VALUE) xchg qword ptr [rcx + VALUE], r12
#define XCHG_R12_TO_PTR_RDX_(VALUE) xchg qword ptr [rdx + VALUE], r12
#define XCHG_R12_TO_PTR_RDI_(VALUE) xchg qword ptr [rdi + VALUE], r12
#define XCHG_R12_TO_PTR_RSI_(VALUE) xchg qword ptr [rsi + VALUE], r12
#define XCHG_R12_TO_PTR_RBP_(VALUE) xchg qword ptr [rbp + VALUE], r12
#define XCHG_R12_TO_PTR_RSP_(VALUE) xchg qword ptr [rsp + VALUE], r12
#define XCHG_R12_TO_PTR_R8_(VALUE) xchg qword ptr [r8 + VALUE], r12
#define XCHG_R12_TO_PTR_R9_(VALUE) xchg qword ptr [r9 + VALUE], r12
#define XCHG_R12_TO_PTR_R10_(VALUE) xchg qword ptr [r10 + VALUE], r12
#define XCHG_R12_TO_PTR_R11_(VALUE) xchg qword ptr [r11 + VALUE], r12
#define XCHG_R12_TO_PTR_R12_(VALUE) xchg qword ptr [r12 + VALUE], r12
#define XCHG_R12_TO_PTR_R13_(VALUE) xchg qword ptr [r13 + VALUE], r12
#define XCHG_R12_TO_PTR_R14_(VALUE) xchg qword ptr [r14 + VALUE], r12
#define XCHG_R12_TO_PTR_R15_(VALUE) xchg qword ptr [r15 + VALUE], r12
#define XCHG_R12_TO_PTR_EAX_(VALUE) xchg qword ptr [eax + VALUE], r12
#define XCHG_R12_TO_PTR_EBX_(VALUE) xchg qword ptr [ebx + VALUE], r12
#define XCHG_R12_TO_PTR_ECX_(VALUE) xchg qword ptr [ecx + VALUE], r12
#define XCHG_R12_TO_PTR_EDX_(VALUE) xchg qword ptr [edx + VALUE], r12
#define XCHG_R12_TO_PTR_EDI_(VALUE) xchg qword ptr [edi + VALUE], r12
#define XCHG_R12_TO_PTR_ESI_(VALUE) xchg qword ptr [esi + VALUE], r12
#define XCHG_R12_TO_PTR_EBP_(VALUE) xchg qword ptr [ebp + VALUE], r12
#define XCHG_R12_TO_PTR_ESP_(VALUE) xchg qword ptr [esp + VALUE], r12

#define XCHG_R13_TO_PTR_RAX_(VALUE) xchg qword ptr [rax + VALUE], r13
#define XCHG_R13_TO_PTR_RBX_(VALUE) xchg qword ptr [rbx + VALUE], r13
#define XCHG_R13_TO_PTR_RCX_(VALUE) xchg qword ptr [rcx + VALUE], r13
#define XCHG_R13_TO_PTR_RDX_(VALUE) xchg qword ptr [rdx + VALUE], r13
#define XCHG_R13_TO_PTR_RDI_(VALUE) xchg qword ptr [rdi + VALUE], r13
#define XCHG_R13_TO_PTR_RSI_(VALUE) xchg qword ptr [rsi + VALUE], r13
#define XCHG_R13_TO_PTR_RBP_(VALUE) xchg qword ptr [rbp + VALUE], r13
#define XCHG_R13_TO_PTR_RSP_(VALUE) xchg qword ptr [rsp + VALUE], r13
#define XCHG_R13_TO_PTR_R8_(VALUE) xchg qword ptr [r8 + VALUE], r13
#define XCHG_R13_TO_PTR_R9_(VALUE) xchg qword ptr [r9 + VALUE], r13
#define XCHG_R13_TO_PTR_R10_(VALUE) xchg qword ptr [r10 + VALUE], r13
#define XCHG_R13_TO_PTR_R11_(VALUE) xchg qword ptr [r11 + VALUE], r13
#define XCHG_R13_TO_PTR_R12_(VALUE) xchg qword ptr [r12 + VALUE], r13
#define XCHG_R13_TO_PTR_R13_(VALUE) xchg qword ptr [r13 + VALUE], r13
#define XCHG_R13_TO_PTR_R14_(VALUE) xchg qword ptr [r14 + VALUE], r13
#define XCHG_R13_TO_PTR_R15_(VALUE) xchg qword ptr [r15 + VALUE], r13
#define XCHG_R13_TO_PTR_EAX_(VALUE) xchg qword ptr [eax + VALUE], r13
#define XCHG_R13_TO_PTR_EBX_(VALUE) xchg qword ptr [ebx + VALUE], r13
#define XCHG_R13_TO_PTR_ECX_(VALUE) xchg qword ptr [ecx + VALUE], r13
#define XCHG_R13_TO_PTR_EDX_(VALUE) xchg qword ptr [edx + VALUE], r13
#define XCHG_R13_TO_PTR_EDI_(VALUE) xchg qword ptr [edi + VALUE], r13
#define XCHG_R13_TO_PTR_ESI_(VALUE) xchg qword ptr [esi + VALUE], r13
#define XCHG_R13_TO_PTR_EBP_(VALUE) xchg qword ptr [ebp + VALUE], r13
#define XCHG_R13_TO_PTR_ESP_(VALUE) xchg qword ptr [esp + VALUE], r13

#define XCHG_R14_TO_PTR_RAX_(VALUE) xchg qword ptr [rax + VALUE], r14
#define XCHG_R14_TO_PTR_RBX_(VALUE) xchg qword ptr [rbx + VALUE], r14
#define XCHG_R14_TO_PTR_RCX_(VALUE) xchg qword ptr [rcx + VALUE], r14
#define XCHG_R14_TO_PTR_RDX_(VALUE) xchg qword ptr [rdx + VALUE], r14
#define XCHG_R14_TO_PTR_RDI_(VALUE) xchg qword ptr [rdi + VALUE], r14
#define XCHG_R14_TO_PTR_RSI_(VALUE) xchg qword ptr [rsi + VALUE], r14
#define XCHG_R14_TO_PTR_RBP_(VALUE) xchg qword ptr [rbp + VALUE], r14
#define XCHG_R14_TO_PTR_RSP_(VALUE) xchg qword ptr [rsp + VALUE], r14
#define XCHG_R14_TO_PTR_R8_(VALUE) xchg qword ptr [r8 + VALUE], r14
#define XCHG_R14_TO_PTR_R9_(VALUE) xchg qword ptr [r9 + VALUE], r14
#define XCHG_R14_TO_PTR_R10_(VALUE) xchg qword ptr [r10 + VALUE], r14
#define XCHG_R14_TO_PTR_R11_(VALUE) xchg qword ptr [r11 + VALUE], r14
#define XCHG_R14_TO_PTR_R12_(VALUE) xchg qword ptr [r12 + VALUE], r14
#define XCHG_R14_TO_PTR_R13_(VALUE) xchg qword ptr [r13 + VALUE], r14
#define XCHG_R14_TO_PTR_R14_(VALUE) xchg qword ptr [r14 + VALUE], r14
#define XCHG_R14_TO_PTR_R15_(VALUE) xchg qword ptr [r15 + VALUE], r14
#define XCHG_R14_TO_PTR_EAX_(VALUE) xchg qword ptr [eax + VALUE], r14
#define XCHG_R14_TO_PTR_EBX_(VALUE) xchg qword ptr [ebx + VALUE], r14
#define XCHG_R14_TO_PTR_ECX_(VALUE) xchg qword ptr [ecx + VALUE], r14
#define XCHG_R14_TO_PTR_EDX_(VALUE) xchg qword ptr [edx + VALUE], r14
#define XCHG_R14_TO_PTR_EDI_(VALUE) xchg qword ptr [edi + VALUE], r14
#define XCHG_R14_TO_PTR_ESI_(VALUE) xchg qword ptr [esi + VALUE], r14
#define XCHG_R14_TO_PTR_EBP_(VALUE) xchg qword ptr [ebp + VALUE], r14
#define XCHG_R14_TO_PTR_ESP_(VALUE) xchg qword ptr [esp + VALUE], r14

#define XCHG_R15_TO_PTR_RAX_(VALUE) xchg qword ptr [rax + VALUE], r15
#define XCHG_R15_TO_PTR_RBX_(VALUE) xchg qword ptr [rbx + VALUE], r15
#define XCHG_R15_TO_PTR_RCX_(VALUE) xchg qword ptr [rcx + VALUE], r15
#define XCHG_R15_TO_PTR_RDX_(VALUE) xchg qword ptr [rdx + VALUE], r15
#define XCHG_R15_TO_PTR_RDI_(VALUE) xchg qword ptr [rdi + VALUE], r15
#define XCHG_R15_TO_PTR_RSI_(VALUE) xchg qword ptr [rsi + VALUE], r15
#define XCHG_R15_TO_PTR_RBP_(VALUE) xchg qword ptr [rbp + VALUE], r15
#define XCHG_R15_TO_PTR_RSP_(VALUE) xchg qword ptr [rsp + VALUE], r15
#define XCHG_R15_TO_PTR_R8_(VALUE) xchg qword ptr [r8 + VALUE], r15
#define XCHG_R15_TO_PTR_R9_(VALUE) xchg qword ptr [r9 + VALUE], r15
#define XCHG_R15_TO_PTR_R10_(VALUE) xchg qword ptr [r10 + VALUE], r15
#define XCHG_R15_TO_PTR_R11_(VALUE) xchg qword ptr [r11 + VALUE], r15
#define XCHG_R15_TO_PTR_R12_(VALUE) xchg qword ptr [r12 + VALUE], r15
#define XCHG_R15_TO_PTR_R13_(VALUE) xchg qword ptr [r13 + VALUE], r15
#define XCHG_R15_TO_PTR_R14_(VALUE) xchg qword ptr [r14 + VALUE], r15
#define XCHG_R15_TO_PTR_R15_(VALUE) xchg qword ptr [r15 + VALUE], r15
#define XCHG_R15_TO_PTR_EAX_(VALUE) xchg qword ptr [eax + VALUE], r15
#define XCHG_R15_TO_PTR_EBX_(VALUE) xchg qword ptr [ebx + VALUE], r15
#define XCHG_R15_TO_PTR_ECX_(VALUE) xchg qword ptr [ecx + VALUE], r15
#define XCHG_R15_TO_PTR_EDX_(VALUE) xchg qword ptr [edx + VALUE], r15
#define XCHG_R15_TO_PTR_EDI_(VALUE) xchg qword ptr [edi + VALUE], r15
#define XCHG_R15_TO_PTR_ESI_(VALUE) xchg qword ptr [esi + VALUE], r15
#define XCHG_R15_TO_PTR_EBP_(VALUE) xchg qword ptr [ebp + VALUE], r15
#define XCHG_R15_TO_PTR_ESP_(VALUE) xchg qword ptr [esp + VALUE], r15
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
