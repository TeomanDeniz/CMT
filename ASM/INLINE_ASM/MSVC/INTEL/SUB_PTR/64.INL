#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************* [v] 64-BIT MEMORY [v] ************************** */
#define SUB_RAX_FROM_PTR_(VALUE) sub rax, qword ptr [VALUE]
#define SUB_RBX_FROM_PTR_(VALUE) sub rbx, qword ptr [VALUE]
#define SUB_RCX_FROM_PTR_(VALUE) sub rcx, qword ptr [VALUE]
#define SUB_RDX_FROM_PTR_(VALUE) sub rdx, qword ptr [VALUE]
#define SUB_RDI_FROM_PTR_(VALUE) sub rdi, qword ptr [VALUE]
#define SUB_RSI_FROM_PTR_(VALUE) sub rsi, qword ptr [VALUE]
#define SUB_RBP_FROM_PTR_(VALUE) sub rbp, qword ptr [VALUE]
#define SUB_RSP_FROM_PTR_(VALUE) sub rsp, qword ptr [VALUE]
#define SUB_R8_FROM_PTR_(VALUE) sub r8, qword ptr [VALUE]
#define SUB_R9_FROM_PTR_(VALUE) sub r9, qword ptr [VALUE]
#define SUB_R10_FROM_PTR_(VALUE) sub r10, qword ptr [VALUE]
#define SUB_R11_FROM_PTR_(VALUE) sub r11, qword ptr [VALUE]
#define SUB_R12_FROM_PTR_(VALUE) sub r12, qword ptr [VALUE]
#define SUB_R13_FROM_PTR_(VALUE) sub r13, qword ptr [VALUE]
#define SUB_R14_FROM_PTR_(VALUE) sub r14, qword ptr [VALUE]
#define SUB_R15_FROM_PTR_(VALUE) sub r15, qword ptr [VALUE]

#define SUB_RAX_TO_PTR_(VALUE) sub qword ptr [VALUE], rax
#define SUB_RBX_TO_PTR_(VALUE) sub qword ptr [VALUE], rbx
#define SUB_RCX_TO_PTR_(VALUE) sub qword ptr [VALUE], rcx
#define SUB_RDX_TO_PTR_(VALUE) sub qword ptr [VALUE], rdx
#define SUB_RDI_TO_PTR_(VALUE) sub qword ptr [VALUE], rdi
#define SUB_RSI_TO_PTR_(VALUE) sub qword ptr [VALUE], rsi
#define SUB_RBP_TO_PTR_(VALUE) sub qword ptr [VALUE], rbp
#define SUB_RSP_TO_PTR_(VALUE) sub qword ptr [VALUE], rsp
#define SUB_R8_TO_PTR_(VALUE) sub qword ptr [VALUE], r8
#define SUB_R9_TO_PTR_(VALUE) sub qword ptr [VALUE], r9
#define SUB_R10_TO_PTR_(VALUE) sub qword ptr [VALUE], r10
#define SUB_R11_TO_PTR_(VALUE) sub qword ptr [VALUE], r11
#define SUB_R12_TO_PTR_(VALUE) sub qword ptr [VALUE], r12
#define SUB_R13_TO_PTR_(VALUE) sub qword ptr [VALUE], r13
#define SUB_R14_TO_PTR_(VALUE) sub qword ptr [VALUE], r14
#define SUB_R15_TO_PTR_(VALUE) sub qword ptr [VALUE], r15

#define SUB_RAX_FROM_PTR_RAX sub rax, qword ptr [rax]
#define SUB_RAX_FROM_PTR_RBX sub rax, qword ptr [rbx]
#define SUB_RAX_FROM_PTR_RCX sub rax, qword ptr [rcx]
#define SUB_RAX_FROM_PTR_RDX sub rax, qword ptr [rdx]
#define SUB_RAX_FROM_PTR_RDI sub rax, qword ptr [rdi]
#define SUB_RAX_FROM_PTR_RSI sub rax, qword ptr [rsi]
#define SUB_RAX_FROM_PTR_RBP sub rax, qword ptr [rbp]
#define SUB_RAX_FROM_PTR_RSP sub rax, qword ptr [rsp]
#define SUB_RAX_FROM_PTR_R8 sub rax, qword ptr [r8]
#define SUB_RAX_FROM_PTR_R9 sub rax, qword ptr [r9]
#define SUB_RAX_FROM_PTR_R10 sub rax, qword ptr [r10]
#define SUB_RAX_FROM_PTR_R11 sub rax, qword ptr [r11]
#define SUB_RAX_FROM_PTR_R12 sub rax, qword ptr [r12]
#define SUB_RAX_FROM_PTR_R13 sub rax, qword ptr [r13]
#define SUB_RAX_FROM_PTR_R14 sub rax, qword ptr [r14]
#define SUB_RAX_FROM_PTR_R15 sub rax, qword ptr [r15]
#define SUB_RAX_FROM_PTR_EAX sub rax, qword ptr [eax]
#define SUB_RAX_FROM_PTR_EBX sub rax, qword ptr [ebx]
#define SUB_RAX_FROM_PTR_ECX sub rax, qword ptr [ecx]
#define SUB_RAX_FROM_PTR_EDX sub rax, qword ptr [edx]
#define SUB_RAX_FROM_PTR_EDI sub rax, qword ptr [edi]
#define SUB_RAX_FROM_PTR_ESI sub rax, qword ptr [esi]
#define SUB_RAX_FROM_PTR_EBP sub rax, qword ptr [ebp]
#define SUB_RAX_FROM_PTR_ESP sub rax, qword ptr [esp]

#define SUB_RBX_FROM_PTR_RAX sub rbx, qword ptr [rax]
#define SUB_RBX_FROM_PTR_RBX sub rbx, qword ptr [rbx]
#define SUB_RBX_FROM_PTR_RCX sub rbx, qword ptr [rcx]
#define SUB_RBX_FROM_PTR_RDX sub rbx, qword ptr [rdx]
#define SUB_RBX_FROM_PTR_RDI sub rbx, qword ptr [rdi]
#define SUB_RBX_FROM_PTR_RSI sub rbx, qword ptr [rsi]
#define SUB_RBX_FROM_PTR_RBP sub rbx, qword ptr [rbp]
#define SUB_RBX_FROM_PTR_RSP sub rbx, qword ptr [rsp]
#define SUB_RBX_FROM_PTR_R8 sub rbx, qword ptr [r8]
#define SUB_RBX_FROM_PTR_R9 sub rbx, qword ptr [r9]
#define SUB_RBX_FROM_PTR_R10 sub rbx, qword ptr [r10]
#define SUB_RBX_FROM_PTR_R11 sub rbx, qword ptr [r11]
#define SUB_RBX_FROM_PTR_R12 sub rbx, qword ptr [r12]
#define SUB_RBX_FROM_PTR_R13 sub rbx, qword ptr [r13]
#define SUB_RBX_FROM_PTR_R14 sub rbx, qword ptr [r14]
#define SUB_RBX_FROM_PTR_R15 sub rbx, qword ptr [r15]
#define SUB_RBX_FROM_PTR_EAX sub rbx, qword ptr [eax]
#define SUB_RBX_FROM_PTR_EBX sub rbx, qword ptr [ebx]
#define SUB_RBX_FROM_PTR_ECX sub rbx, qword ptr [ecx]
#define SUB_RBX_FROM_PTR_EDX sub rbx, qword ptr [edx]
#define SUB_RBX_FROM_PTR_EDI sub rbx, qword ptr [edi]
#define SUB_RBX_FROM_PTR_ESI sub rbx, qword ptr [esi]
#define SUB_RBX_FROM_PTR_EBP sub rbx, qword ptr [ebp]
#define SUB_RBX_FROM_PTR_ESP sub rbx, qword ptr [esp]

#define SUB_RCX_FROM_PTR_RAX sub rcx, qword ptr [rax]
#define SUB_RCX_FROM_PTR_RBX sub rcx, qword ptr [rbx]
#define SUB_RCX_FROM_PTR_RCX sub rcx, qword ptr [rcx]
#define SUB_RCX_FROM_PTR_RDX sub rcx, qword ptr [rdx]
#define SUB_RCX_FROM_PTR_RDI sub rcx, qword ptr [rdi]
#define SUB_RCX_FROM_PTR_RSI sub rcx, qword ptr [rsi]
#define SUB_RCX_FROM_PTR_RBP sub rcx, qword ptr [rbp]
#define SUB_RCX_FROM_PTR_RSP sub rcx, qword ptr [rsp]
#define SUB_RCX_FROM_PTR_R8 sub rcx, qword ptr [r8]
#define SUB_RCX_FROM_PTR_R9 sub rcx, qword ptr [r9]
#define SUB_RCX_FROM_PTR_R10 sub rcx, qword ptr [r10]
#define SUB_RCX_FROM_PTR_R11 sub rcx, qword ptr [r11]
#define SUB_RCX_FROM_PTR_R12 sub rcx, qword ptr [r12]
#define SUB_RCX_FROM_PTR_R13 sub rcx, qword ptr [r13]
#define SUB_RCX_FROM_PTR_R14 sub rcx, qword ptr [r14]
#define SUB_RCX_FROM_PTR_R15 sub rcx, qword ptr [r15]
#define SUB_RCX_FROM_PTR_EAX sub rcx, qword ptr [eax]
#define SUB_RCX_FROM_PTR_EBX sub rcx, qword ptr [ebx]
#define SUB_RCX_FROM_PTR_ECX sub rcx, qword ptr [ecx]
#define SUB_RCX_FROM_PTR_EDX sub rcx, qword ptr [edx]
#define SUB_RCX_FROM_PTR_EDI sub rcx, qword ptr [edi]
#define SUB_RCX_FROM_PTR_ESI sub rcx, qword ptr [esi]
#define SUB_RCX_FROM_PTR_EBP sub rcx, qword ptr [ebp]
#define SUB_RCX_FROM_PTR_ESP sub rcx, qword ptr [esp]

#define SUB_RDX_FROM_PTR_RAX sub rdx, qword ptr [rax]
#define SUB_RDX_FROM_PTR_RBX sub rdx, qword ptr [rbx]
#define SUB_RDX_FROM_PTR_RCX sub rdx, qword ptr [rcx]
#define SUB_RDX_FROM_PTR_RDX sub rdx, qword ptr [rdx]
#define SUB_RDX_FROM_PTR_RDI sub rdx, qword ptr [rdi]
#define SUB_RDX_FROM_PTR_RSI sub rdx, qword ptr [rsi]
#define SUB_RDX_FROM_PTR_RBP sub rdx, qword ptr [rbp]
#define SUB_RDX_FROM_PTR_RSP sub rdx, qword ptr [rsp]
#define SUB_RDX_FROM_PTR_R8 sub rdx, qword ptr [r8]
#define SUB_RDX_FROM_PTR_R9 sub rdx, qword ptr [r9]
#define SUB_RDX_FROM_PTR_R10 sub rdx, qword ptr [r10]
#define SUB_RDX_FROM_PTR_R11 sub rdx, qword ptr [r11]
#define SUB_RDX_FROM_PTR_R12 sub rdx, qword ptr [r12]
#define SUB_RDX_FROM_PTR_R13 sub rdx, qword ptr [r13]
#define SUB_RDX_FROM_PTR_R14 sub rdx, qword ptr [r14]
#define SUB_RDX_FROM_PTR_R15 sub rdx, qword ptr [r15]
#define SUB_RDX_FROM_PTR_EAX sub rdx, qword ptr [eax]
#define SUB_RDX_FROM_PTR_EBX sub rdx, qword ptr [ebx]
#define SUB_RDX_FROM_PTR_ECX sub rdx, qword ptr [ecx]
#define SUB_RDX_FROM_PTR_EDX sub rdx, qword ptr [edx]
#define SUB_RDX_FROM_PTR_EDI sub rdx, qword ptr [edi]
#define SUB_RDX_FROM_PTR_ESI sub rdx, qword ptr [esi]
#define SUB_RDX_FROM_PTR_EBP sub rdx, qword ptr [ebp]
#define SUB_RDX_FROM_PTR_ESP sub rdx, qword ptr [esp]

#define SUB_RDI_FROM_PTR_RAX sub rdi, qword ptr [rax]
#define SUB_RDI_FROM_PTR_RBX sub rdi, qword ptr [rbx]
#define SUB_RDI_FROM_PTR_RCX sub rdi, qword ptr [rcx]
#define SUB_RDI_FROM_PTR_RDX sub rdi, qword ptr [rdx]
#define SUB_RDI_FROM_PTR_RDI sub rdi, qword ptr [rdi]
#define SUB_RDI_FROM_PTR_RSI sub rdi, qword ptr [rsi]
#define SUB_RDI_FROM_PTR_RBP sub rdi, qword ptr [rbp]
#define SUB_RDI_FROM_PTR_RSP sub rdi, qword ptr [rsp]
#define SUB_RDI_FROM_PTR_R8 sub rdi, qword ptr [r8]
#define SUB_RDI_FROM_PTR_R9 sub rdi, qword ptr [r9]
#define SUB_RDI_FROM_PTR_R10 sub rdi, qword ptr [r10]
#define SUB_RDI_FROM_PTR_R11 sub rdi, qword ptr [r11]
#define SUB_RDI_FROM_PTR_R12 sub rdi, qword ptr [r12]
#define SUB_RDI_FROM_PTR_R13 sub rdi, qword ptr [r13]
#define SUB_RDI_FROM_PTR_R14 sub rdi, qword ptr [r14]
#define SUB_RDI_FROM_PTR_R15 sub rdi, qword ptr [r15]
#define SUB_RDI_FROM_PTR_EAX sub rdi, qword ptr [eax]
#define SUB_RDI_FROM_PTR_EBX sub rdi, qword ptr [ebx]
#define SUB_RDI_FROM_PTR_ECX sub rdi, qword ptr [ecx]
#define SUB_RDI_FROM_PTR_EDX sub rdi, qword ptr [edx]
#define SUB_RDI_FROM_PTR_EDI sub rdi, qword ptr [edi]
#define SUB_RDI_FROM_PTR_ESI sub rdi, qword ptr [esi]
#define SUB_RDI_FROM_PTR_EBP sub rdi, qword ptr [ebp]
#define SUB_RDI_FROM_PTR_ESP sub rdi, qword ptr [esp]

#define SUB_RSI_FROM_PTR_RAX sub rsi, qword ptr [rax]
#define SUB_RSI_FROM_PTR_RBX sub rsi, qword ptr [rbx]
#define SUB_RSI_FROM_PTR_RCX sub rsi, qword ptr [rcx]
#define SUB_RSI_FROM_PTR_RDX sub rsi, qword ptr [rdx]
#define SUB_RSI_FROM_PTR_RDI sub rsi, qword ptr [rdi]
#define SUB_RSI_FROM_PTR_RSI sub rsi, qword ptr [rsi]
#define SUB_RSI_FROM_PTR_RBP sub rsi, qword ptr [rbp]
#define SUB_RSI_FROM_PTR_RSP sub rsi, qword ptr [rsp]
#define SUB_RSI_FROM_PTR_R8 sub rsi, qword ptr [r8]
#define SUB_RSI_FROM_PTR_R9 sub rsi, qword ptr [r9]
#define SUB_RSI_FROM_PTR_R10 sub rsi, qword ptr [r10]
#define SUB_RSI_FROM_PTR_R11 sub rsi, qword ptr [r11]
#define SUB_RSI_FROM_PTR_R12 sub rsi, qword ptr [r12]
#define SUB_RSI_FROM_PTR_R13 sub rsi, qword ptr [r13]
#define SUB_RSI_FROM_PTR_R14 sub rsi, qword ptr [r14]
#define SUB_RSI_FROM_PTR_R15 sub rsi, qword ptr [r15]
#define SUB_RSI_FROM_PTR_EAX sub rsi, qword ptr [eax]
#define SUB_RSI_FROM_PTR_EBX sub rsi, qword ptr [ebx]
#define SUB_RSI_FROM_PTR_ECX sub rsi, qword ptr [ecx]
#define SUB_RSI_FROM_PTR_EDX sub rsi, qword ptr [edx]
#define SUB_RSI_FROM_PTR_EDI sub rsi, qword ptr [edi]
#define SUB_RSI_FROM_PTR_ESI sub rsi, qword ptr [esi]
#define SUB_RSI_FROM_PTR_EBP sub rsi, qword ptr [ebp]
#define SUB_RSI_FROM_PTR_ESP sub rsi, qword ptr [esp]

#define SUB_RBP_FROM_PTR_RAX sub rbp, qword ptr [rax]
#define SUB_RBP_FROM_PTR_RBX sub rbp, qword ptr [rbx]
#define SUB_RBP_FROM_PTR_RCX sub rbp, qword ptr [rcx]
#define SUB_RBP_FROM_PTR_RDX sub rbp, qword ptr [rdx]
#define SUB_RBP_FROM_PTR_RDI sub rbp, qword ptr [rdi]
#define SUB_RBP_FROM_PTR_RSI sub rbp, qword ptr [rsi]
#define SUB_RBP_FROM_PTR_RBP sub rbp, qword ptr [rbp]
#define SUB_RBP_FROM_PTR_RSP sub rbp, qword ptr [rsp]
#define SUB_RBP_FROM_PTR_R8 sub rbp, qword ptr [r8]
#define SUB_RBP_FROM_PTR_R9 sub rbp, qword ptr [r9]
#define SUB_RBP_FROM_PTR_R10 sub rbp, qword ptr [r10]
#define SUB_RBP_FROM_PTR_R11 sub rbp, qword ptr [r11]
#define SUB_RBP_FROM_PTR_R12 sub rbp, qword ptr [r12]
#define SUB_RBP_FROM_PTR_R13 sub rbp, qword ptr [r13]
#define SUB_RBP_FROM_PTR_R14 sub rbp, qword ptr [r14]
#define SUB_RBP_FROM_PTR_R15 sub rbp, qword ptr [r15]
#define SUB_RBP_FROM_PTR_EAX sub rbp, qword ptr [eax]
#define SUB_RBP_FROM_PTR_EBX sub rbp, qword ptr [ebx]
#define SUB_RBP_FROM_PTR_ECX sub rbp, qword ptr [ecx]
#define SUB_RBP_FROM_PTR_EDX sub rbp, qword ptr [edx]
#define SUB_RBP_FROM_PTR_EDI sub rbp, qword ptr [edi]
#define SUB_RBP_FROM_PTR_ESI sub rbp, qword ptr [esi]
#define SUB_RBP_FROM_PTR_EBP sub rbp, qword ptr [ebp]
#define SUB_RBP_FROM_PTR_ESP sub rbp, qword ptr [esp]

#define SUB_RSP_FROM_PTR_RAX sub rsp, qword ptr [rax]
#define SUB_RSP_FROM_PTR_RBX sub rsp, qword ptr [rbx]
#define SUB_RSP_FROM_PTR_RCX sub rsp, qword ptr [rcx]
#define SUB_RSP_FROM_PTR_RDX sub rsp, qword ptr [rdx]
#define SUB_RSP_FROM_PTR_RDI sub rsp, qword ptr [rdi]
#define SUB_RSP_FROM_PTR_RSI sub rsp, qword ptr [rsi]
#define SUB_RSP_FROM_PTR_RBP sub rsp, qword ptr [rbp]
#define SUB_RSP_FROM_PTR_RSP sub rsp, qword ptr [rsp]
#define SUB_RSP_FROM_PTR_R8 sub rsp, qword ptr [r8]
#define SUB_RSP_FROM_PTR_R9 sub rsp, qword ptr [r9]
#define SUB_RSP_FROM_PTR_R10 sub rsp, qword ptr [r10]
#define SUB_RSP_FROM_PTR_R11 sub rsp, qword ptr [r11]
#define SUB_RSP_FROM_PTR_R12 sub rsp, qword ptr [r12]
#define SUB_RSP_FROM_PTR_R13 sub rsp, qword ptr [r13]
#define SUB_RSP_FROM_PTR_R14 sub rsp, qword ptr [r14]
#define SUB_RSP_FROM_PTR_R15 sub rsp, qword ptr [r15]
#define SUB_RSP_FROM_PTR_EAX sub rsp, qword ptr [eax]
#define SUB_RSP_FROM_PTR_EBX sub rsp, qword ptr [ebx]
#define SUB_RSP_FROM_PTR_ECX sub rsp, qword ptr [ecx]
#define SUB_RSP_FROM_PTR_EDX sub rsp, qword ptr [edx]
#define SUB_RSP_FROM_PTR_EDI sub rsp, qword ptr [edi]
#define SUB_RSP_FROM_PTR_ESI sub rsp, qword ptr [esi]
#define SUB_RSP_FROM_PTR_EBP sub rsp, qword ptr [ebp]
#define SUB_RSP_FROM_PTR_ESP sub rsp, qword ptr [esp]

#define SUB_R8_FROM_PTR_RAX sub r8, qword ptr [rax]
#define SUB_R8_FROM_PTR_RBX sub r8, qword ptr [rbx]
#define SUB_R8_FROM_PTR_RCX sub r8, qword ptr [rcx]
#define SUB_R8_FROM_PTR_RDX sub r8, qword ptr [rdx]
#define SUB_R8_FROM_PTR_RDI sub r8, qword ptr [rdi]
#define SUB_R8_FROM_PTR_RSI sub r8, qword ptr [rsi]
#define SUB_R8_FROM_PTR_RBP sub r8, qword ptr [rbp]
#define SUB_R8_FROM_PTR_RSP sub r8, qword ptr [rsp]
#define SUB_R8_FROM_PTR_R8 sub r8, qword ptr [r8]
#define SUB_R8_FROM_PTR_R9 sub r8, qword ptr [r9]
#define SUB_R8_FROM_PTR_R10 sub r8, qword ptr [r10]
#define SUB_R8_FROM_PTR_R11 sub r8, qword ptr [r11]
#define SUB_R8_FROM_PTR_R12 sub r8, qword ptr [r12]
#define SUB_R8_FROM_PTR_R13 sub r8, qword ptr [r13]
#define SUB_R8_FROM_PTR_R14 sub r8, qword ptr [r14]
#define SUB_R8_FROM_PTR_R15 sub r8, qword ptr [r15]
#define SUB_R8_FROM_PTR_EAX sub r8, qword ptr [eax]
#define SUB_R8_FROM_PTR_EBX sub r8, qword ptr [ebx]
#define SUB_R8_FROM_PTR_ECX sub r8, qword ptr [ecx]
#define SUB_R8_FROM_PTR_EDX sub r8, qword ptr [edx]
#define SUB_R8_FROM_PTR_EDI sub r8, qword ptr [edi]
#define SUB_R8_FROM_PTR_ESI sub r8, qword ptr [esi]
#define SUB_R8_FROM_PTR_EBP sub r8, qword ptr [ebp]
#define SUB_R8_FROM_PTR_ESP sub r8, qword ptr [esp]

#define SUB_R9_FROM_PTR_RAX sub r9, qword ptr [rax]
#define SUB_R9_FROM_PTR_RBX sub r9, qword ptr [rbx]
#define SUB_R9_FROM_PTR_RCX sub r9, qword ptr [rcx]
#define SUB_R9_FROM_PTR_RDX sub r9, qword ptr [rdx]
#define SUB_R9_FROM_PTR_RDI sub r9, qword ptr [rdi]
#define SUB_R9_FROM_PTR_RSI sub r9, qword ptr [rsi]
#define SUB_R9_FROM_PTR_RBP sub r9, qword ptr [rbp]
#define SUB_R9_FROM_PTR_RSP sub r9, qword ptr [rsp]
#define SUB_R9_FROM_PTR_R8 sub r9, qword ptr [r8]
#define SUB_R9_FROM_PTR_R9 sub r9, qword ptr [r9]
#define SUB_R9_FROM_PTR_R10 sub r9, qword ptr [r10]
#define SUB_R9_FROM_PTR_R11 sub r9, qword ptr [r11]
#define SUB_R9_FROM_PTR_R12 sub r9, qword ptr [r12]
#define SUB_R9_FROM_PTR_R13 sub r9, qword ptr [r13]
#define SUB_R9_FROM_PTR_R14 sub r9, qword ptr [r14]
#define SUB_R9_FROM_PTR_R15 sub r9, qword ptr [r15]
#define SUB_R9_FROM_PTR_EAX sub r9, qword ptr [eax]
#define SUB_R9_FROM_PTR_EBX sub r9, qword ptr [ebx]
#define SUB_R9_FROM_PTR_ECX sub r9, qword ptr [ecx]
#define SUB_R9_FROM_PTR_EDX sub r9, qword ptr [edx]
#define SUB_R9_FROM_PTR_EDI sub r9, qword ptr [edi]
#define SUB_R9_FROM_PTR_ESI sub r9, qword ptr [esi]
#define SUB_R9_FROM_PTR_EBP sub r9, qword ptr [ebp]
#define SUB_R9_FROM_PTR_ESP sub r9, qword ptr [esp]

#define SUB_R10_FROM_PTR_RAX sub r10, qword ptr [rax]
#define SUB_R10_FROM_PTR_RBX sub r10, qword ptr [rbx]
#define SUB_R10_FROM_PTR_RCX sub r10, qword ptr [rcx]
#define SUB_R10_FROM_PTR_RDX sub r10, qword ptr [rdx]
#define SUB_R10_FROM_PTR_RDI sub r10, qword ptr [rdi]
#define SUB_R10_FROM_PTR_RSI sub r10, qword ptr [rsi]
#define SUB_R10_FROM_PTR_RBP sub r10, qword ptr [rbp]
#define SUB_R10_FROM_PTR_RSP sub r10, qword ptr [rsp]
#define SUB_R10_FROM_PTR_R8 sub r10, qword ptr [r8]
#define SUB_R10_FROM_PTR_R9 sub r10, qword ptr [r9]
#define SUB_R10_FROM_PTR_R10 sub r10, qword ptr [r10]
#define SUB_R10_FROM_PTR_R11 sub r10, qword ptr [r11]
#define SUB_R10_FROM_PTR_R12 sub r10, qword ptr [r12]
#define SUB_R10_FROM_PTR_R13 sub r10, qword ptr [r13]
#define SUB_R10_FROM_PTR_R14 sub r10, qword ptr [r14]
#define SUB_R10_FROM_PTR_R15 sub r10, qword ptr [r15]
#define SUB_R10_FROM_PTR_EAX sub r10, qword ptr [eax]
#define SUB_R10_FROM_PTR_EBX sub r10, qword ptr [ebx]
#define SUB_R10_FROM_PTR_ECX sub r10, qword ptr [ecx]
#define SUB_R10_FROM_PTR_EDX sub r10, qword ptr [edx]
#define SUB_R10_FROM_PTR_EDI sub r10, qword ptr [edi]
#define SUB_R10_FROM_PTR_ESI sub r10, qword ptr [esi]
#define SUB_R10_FROM_PTR_EBP sub r10, qword ptr [ebp]
#define SUB_R10_FROM_PTR_ESP sub r10, qword ptr [esp]

#define SUB_R11_FROM_PTR_RAX sub r11, qword ptr [rax]
#define SUB_R11_FROM_PTR_RBX sub r11, qword ptr [rbx]
#define SUB_R11_FROM_PTR_RCX sub r11, qword ptr [rcx]
#define SUB_R11_FROM_PTR_RDX sub r11, qword ptr [rdx]
#define SUB_R11_FROM_PTR_RDI sub r11, qword ptr [rdi]
#define SUB_R11_FROM_PTR_RSI sub r11, qword ptr [rsi]
#define SUB_R11_FROM_PTR_RBP sub r11, qword ptr [rbp]
#define SUB_R11_FROM_PTR_RSP sub r11, qword ptr [rsp]
#define SUB_R11_FROM_PTR_R8 sub r11, qword ptr [r8]
#define SUB_R11_FROM_PTR_R9 sub r11, qword ptr [r9]
#define SUB_R11_FROM_PTR_R10 sub r11, qword ptr [r10]
#define SUB_R11_FROM_PTR_R11 sub r11, qword ptr [r11]
#define SUB_R11_FROM_PTR_R12 sub r11, qword ptr [r12]
#define SUB_R11_FROM_PTR_R13 sub r11, qword ptr [r13]
#define SUB_R11_FROM_PTR_R14 sub r11, qword ptr [r14]
#define SUB_R11_FROM_PTR_R15 sub r11, qword ptr [r15]
#define SUB_R11_FROM_PTR_EAX sub r11, qword ptr [eax]
#define SUB_R11_FROM_PTR_EBX sub r11, qword ptr [ebx]
#define SUB_R11_FROM_PTR_ECX sub r11, qword ptr [ecx]
#define SUB_R11_FROM_PTR_EDX sub r11, qword ptr [edx]
#define SUB_R11_FROM_PTR_EDI sub r11, qword ptr [edi]
#define SUB_R11_FROM_PTR_ESI sub r11, qword ptr [esi]
#define SUB_R11_FROM_PTR_EBP sub r11, qword ptr [ebp]
#define SUB_R11_FROM_PTR_ESP sub r11, qword ptr [esp]

#define SUB_R12_FROM_PTR_RAX sub r12, qword ptr [rax]
#define SUB_R12_FROM_PTR_RBX sub r12, qword ptr [rbx]
#define SUB_R12_FROM_PTR_RCX sub r12, qword ptr [rcx]
#define SUB_R12_FROM_PTR_RDX sub r12, qword ptr [rdx]
#define SUB_R12_FROM_PTR_RDI sub r12, qword ptr [rdi]
#define SUB_R12_FROM_PTR_RSI sub r12, qword ptr [rsi]
#define SUB_R12_FROM_PTR_RBP sub r12, qword ptr [rbp]
#define SUB_R12_FROM_PTR_RSP sub r12, qword ptr [rsp]
#define SUB_R12_FROM_PTR_R8 sub r12, qword ptr [r8]
#define SUB_R12_FROM_PTR_R9 sub r12, qword ptr [r9]
#define SUB_R12_FROM_PTR_R10 sub r12, qword ptr [r10]
#define SUB_R12_FROM_PTR_R11 sub r12, qword ptr [r11]
#define SUB_R12_FROM_PTR_R12 sub r12, qword ptr [r12]
#define SUB_R12_FROM_PTR_R13 sub r12, qword ptr [r13]
#define SUB_R12_FROM_PTR_R14 sub r12, qword ptr [r14]
#define SUB_R12_FROM_PTR_R15 sub r12, qword ptr [r15]
#define SUB_R12_FROM_PTR_EAX sub r12, qword ptr [eax]
#define SUB_R12_FROM_PTR_EBX sub r12, qword ptr [ebx]
#define SUB_R12_FROM_PTR_ECX sub r12, qword ptr [ecx]
#define SUB_R12_FROM_PTR_EDX sub r12, qword ptr [edx]
#define SUB_R12_FROM_PTR_EDI sub r12, qword ptr [edi]
#define SUB_R12_FROM_PTR_ESI sub r12, qword ptr [esi]
#define SUB_R12_FROM_PTR_EBP sub r12, qword ptr [ebp]
#define SUB_R12_FROM_PTR_ESP sub r12, qword ptr [esp]

#define SUB_R13_FROM_PTR_RAX sub r13, qword ptr [rax]
#define SUB_R13_FROM_PTR_RBX sub r13, qword ptr [rbx]
#define SUB_R13_FROM_PTR_RCX sub r13, qword ptr [rcx]
#define SUB_R13_FROM_PTR_RDX sub r13, qword ptr [rdx]
#define SUB_R13_FROM_PTR_RDI sub r13, qword ptr [rdi]
#define SUB_R13_FROM_PTR_RSI sub r13, qword ptr [rsi]
#define SUB_R13_FROM_PTR_RBP sub r13, qword ptr [rbp]
#define SUB_R13_FROM_PTR_RSP sub r13, qword ptr [rsp]
#define SUB_R13_FROM_PTR_R8 sub r13, qword ptr [r8]
#define SUB_R13_FROM_PTR_R9 sub r13, qword ptr [r9]
#define SUB_R13_FROM_PTR_R10 sub r13, qword ptr [r10]
#define SUB_R13_FROM_PTR_R11 sub r13, qword ptr [r11]
#define SUB_R13_FROM_PTR_R12 sub r13, qword ptr [r12]
#define SUB_R13_FROM_PTR_R13 sub r13, qword ptr [r13]
#define SUB_R13_FROM_PTR_R14 sub r13, qword ptr [r14]
#define SUB_R13_FROM_PTR_R15 sub r13, qword ptr [r15]
#define SUB_R13_FROM_PTR_EAX sub r13, qword ptr [eax]
#define SUB_R13_FROM_PTR_EBX sub r13, qword ptr [ebx]
#define SUB_R13_FROM_PTR_ECX sub r13, qword ptr [ecx]
#define SUB_R13_FROM_PTR_EDX sub r13, qword ptr [edx]
#define SUB_R13_FROM_PTR_EDI sub r13, qword ptr [edi]
#define SUB_R13_FROM_PTR_ESI sub r13, qword ptr [esi]
#define SUB_R13_FROM_PTR_EBP sub r13, qword ptr [ebp]
#define SUB_R13_FROM_PTR_ESP sub r13, qword ptr [esp]

#define SUB_R14_FROM_PTR_RAX sub r14, qword ptr [rax]
#define SUB_R14_FROM_PTR_RBX sub r14, qword ptr [rbx]
#define SUB_R14_FROM_PTR_RCX sub r14, qword ptr [rcx]
#define SUB_R14_FROM_PTR_RDX sub r14, qword ptr [rdx]
#define SUB_R14_FROM_PTR_RDI sub r14, qword ptr [rdi]
#define SUB_R14_FROM_PTR_RSI sub r14, qword ptr [rsi]
#define SUB_R14_FROM_PTR_RBP sub r14, qword ptr [rbp]
#define SUB_R14_FROM_PTR_RSP sub r14, qword ptr [rsp]
#define SUB_R14_FROM_PTR_R8 sub r14, qword ptr [r8]
#define SUB_R14_FROM_PTR_R9 sub r14, qword ptr [r9]
#define SUB_R14_FROM_PTR_R10 sub r14, qword ptr [r10]
#define SUB_R14_FROM_PTR_R11 sub r14, qword ptr [r11]
#define SUB_R14_FROM_PTR_R12 sub r14, qword ptr [r12]
#define SUB_R14_FROM_PTR_R13 sub r14, qword ptr [r13]
#define SUB_R14_FROM_PTR_R14 sub r14, qword ptr [r14]
#define SUB_R14_FROM_PTR_R15 sub r14, qword ptr [r15]
#define SUB_R14_FROM_PTR_EAX sub r14, qword ptr [eax]
#define SUB_R14_FROM_PTR_EBX sub r14, qword ptr [ebx]
#define SUB_R14_FROM_PTR_ECX sub r14, qword ptr [ecx]
#define SUB_R14_FROM_PTR_EDX sub r14, qword ptr [edx]
#define SUB_R14_FROM_PTR_EDI sub r14, qword ptr [edi]
#define SUB_R14_FROM_PTR_ESI sub r14, qword ptr [esi]
#define SUB_R14_FROM_PTR_EBP sub r14, qword ptr [ebp]
#define SUB_R14_FROM_PTR_ESP sub r14, qword ptr [esp]

#define SUB_R15_FROM_PTR_RAX sub r15, qword ptr [rax]
#define SUB_R15_FROM_PTR_RBX sub r15, qword ptr [rbx]
#define SUB_R15_FROM_PTR_RCX sub r15, qword ptr [rcx]
#define SUB_R15_FROM_PTR_RDX sub r15, qword ptr [rdx]
#define SUB_R15_FROM_PTR_RDI sub r15, qword ptr [rdi]
#define SUB_R15_FROM_PTR_RSI sub r15, qword ptr [rsi]
#define SUB_R15_FROM_PTR_RBP sub r15, qword ptr [rbp]
#define SUB_R15_FROM_PTR_RSP sub r15, qword ptr [rsp]
#define SUB_R15_FROM_PTR_R8 sub r15, qword ptr [r8]
#define SUB_R15_FROM_PTR_R9 sub r15, qword ptr [r9]
#define SUB_R15_FROM_PTR_R10 sub r15, qword ptr [r10]
#define SUB_R15_FROM_PTR_R11 sub r15, qword ptr [r11]
#define SUB_R15_FROM_PTR_R12 sub r15, qword ptr [r12]
#define SUB_R15_FROM_PTR_R13 sub r15, qword ptr [r13]
#define SUB_R15_FROM_PTR_R14 sub r15, qword ptr [r14]
#define SUB_R15_FROM_PTR_R15 sub r15, qword ptr [r15]
#define SUB_R15_FROM_PTR_EAX sub r15, qword ptr [eax]
#define SUB_R15_FROM_PTR_EBX sub r15, qword ptr [ebx]
#define SUB_R15_FROM_PTR_ECX sub r15, qword ptr [ecx]
#define SUB_R15_FROM_PTR_EDX sub r15, qword ptr [edx]
#define SUB_R15_FROM_PTR_EDI sub r15, qword ptr [edi]
#define SUB_R15_FROM_PTR_ESI sub r15, qword ptr [esi]
#define SUB_R15_FROM_PTR_EBP sub r15, qword ptr [ebp]
#define SUB_R15_FROM_PTR_ESP sub r15, qword ptr [esp]

#define SUB_RAX_TO_PTR_RAX sub qword ptr [rax], rax
#define SUB_RAX_TO_PTR_RBX sub qword ptr [rbx], rax
#define SUB_RAX_TO_PTR_RCX sub qword ptr [rcx], rax
#define SUB_RAX_TO_PTR_RDX sub qword ptr [rdx], rax
#define SUB_RAX_TO_PTR_RDI sub qword ptr [rdi], rax
#define SUB_RAX_TO_PTR_RSI sub qword ptr [rsi], rax
#define SUB_RAX_TO_PTR_RBP sub qword ptr [rbp], rax
#define SUB_RAX_TO_PTR_RSP sub qword ptr [rsp], rax
#define SUB_RAX_TO_PTR_R8 sub qword ptr [r8], rax
#define SUB_RAX_TO_PTR_R9 sub qword ptr [r9], rax
#define SUB_RAX_TO_PTR_R10 sub qword ptr [r10], rax
#define SUB_RAX_TO_PTR_R11 sub qword ptr [r11], rax
#define SUB_RAX_TO_PTR_R12 sub qword ptr [r12], rax
#define SUB_RAX_TO_PTR_R13 sub qword ptr [r13], rax
#define SUB_RAX_TO_PTR_R14 sub qword ptr [r14], rax
#define SUB_RAX_TO_PTR_R15 sub qword ptr [r15], rax
#define SUB_RAX_TO_PTR_EAX sub qword ptr [eax], rax
#define SUB_RAX_TO_PTR_EBX sub qword ptr [ebx], rax
#define SUB_RAX_TO_PTR_ECX sub qword ptr [ecx], rax
#define SUB_RAX_TO_PTR_EDX sub qword ptr [edx], rax
#define SUB_RAX_TO_PTR_EDI sub qword ptr [edi], rax
#define SUB_RAX_TO_PTR_ESI sub qword ptr [esi], rax
#define SUB_RAX_TO_PTR_EBP sub qword ptr [ebp], rax
#define SUB_RAX_TO_PTR_ESP sub qword ptr [esp], rax

#define SUB_RBX_TO_PTR_RAX sub qword ptr [rax], rbx
#define SUB_RBX_TO_PTR_RBX sub qword ptr [rbx], rbx
#define SUB_RBX_TO_PTR_RCX sub qword ptr [rcx], rbx
#define SUB_RBX_TO_PTR_RDX sub qword ptr [rdx], rbx
#define SUB_RBX_TO_PTR_RDI sub qword ptr [rdi], rbx
#define SUB_RBX_TO_PTR_RSI sub qword ptr [rsi], rbx
#define SUB_RBX_TO_PTR_RBP sub qword ptr [rbp], rbx
#define SUB_RBX_TO_PTR_RSP sub qword ptr [rsp], rbx
#define SUB_RBX_TO_PTR_R8 sub qword ptr [r8], rbx
#define SUB_RBX_TO_PTR_R9 sub qword ptr [r9], rbx
#define SUB_RBX_TO_PTR_R10 sub qword ptr [r10], rbx
#define SUB_RBX_TO_PTR_R11 sub qword ptr [r11], rbx
#define SUB_RBX_TO_PTR_R12 sub qword ptr [r12], rbx
#define SUB_RBX_TO_PTR_R13 sub qword ptr [r13], rbx
#define SUB_RBX_TO_PTR_R14 sub qword ptr [r14], rbx
#define SUB_RBX_TO_PTR_R15 sub qword ptr [r15], rbx
#define SUB_RBX_TO_PTR_EAX sub qword ptr [eax], rbx
#define SUB_RBX_TO_PTR_EBX sub qword ptr [ebx], rbx
#define SUB_RBX_TO_PTR_ECX sub qword ptr [ecx], rbx
#define SUB_RBX_TO_PTR_EDX sub qword ptr [edx], rbx
#define SUB_RBX_TO_PTR_EDI sub qword ptr [edi], rbx
#define SUB_RBX_TO_PTR_ESI sub qword ptr [esi], rbx
#define SUB_RBX_TO_PTR_EBP sub qword ptr [ebp], rbx
#define SUB_RBX_TO_PTR_ESP sub qword ptr [esp], rbx

#define SUB_RCX_TO_PTR_RAX sub qword ptr [rax], rcx
#define SUB_RCX_TO_PTR_RBX sub qword ptr [rbx], rcx
#define SUB_RCX_TO_PTR_RCX sub qword ptr [rcx], rcx
#define SUB_RCX_TO_PTR_RDX sub qword ptr [rdx], rcx
#define SUB_RCX_TO_PTR_RDI sub qword ptr [rdi], rcx
#define SUB_RCX_TO_PTR_RSI sub qword ptr [rsi], rcx
#define SUB_RCX_TO_PTR_RBP sub qword ptr [rbp], rcx
#define SUB_RCX_TO_PTR_RSP sub qword ptr [rsp], rcx
#define SUB_RCX_TO_PTR_R8 sub qword ptr [r8], rcx
#define SUB_RCX_TO_PTR_R9 sub qword ptr [r9], rcx
#define SUB_RCX_TO_PTR_R10 sub qword ptr [r10], rcx
#define SUB_RCX_TO_PTR_R11 sub qword ptr [r11], rcx
#define SUB_RCX_TO_PTR_R12 sub qword ptr [r12], rcx
#define SUB_RCX_TO_PTR_R13 sub qword ptr [r13], rcx
#define SUB_RCX_TO_PTR_R14 sub qword ptr [r14], rcx
#define SUB_RCX_TO_PTR_R15 sub qword ptr [r15], rcx
#define SUB_RCX_TO_PTR_EAX sub qword ptr [eax], rcx
#define SUB_RCX_TO_PTR_EBX sub qword ptr [ebx], rcx
#define SUB_RCX_TO_PTR_ECX sub qword ptr [ecx], rcx
#define SUB_RCX_TO_PTR_EDX sub qword ptr [edx], rcx
#define SUB_RCX_TO_PTR_EDI sub qword ptr [edi], rcx
#define SUB_RCX_TO_PTR_ESI sub qword ptr [esi], rcx
#define SUB_RCX_TO_PTR_EBP sub qword ptr [ebp], rcx
#define SUB_RCX_TO_PTR_ESP sub qword ptr [esp], rcx

#define SUB_RDX_TO_PTR_RAX sub qword ptr [rax], rdx
#define SUB_RDX_TO_PTR_RBX sub qword ptr [rbx], rdx
#define SUB_RDX_TO_PTR_RCX sub qword ptr [rcx], rdx
#define SUB_RDX_TO_PTR_RDX sub qword ptr [rdx], rdx
#define SUB_RDX_TO_PTR_RDI sub qword ptr [rdi], rdx
#define SUB_RDX_TO_PTR_RSI sub qword ptr [rsi], rdx
#define SUB_RDX_TO_PTR_RBP sub qword ptr [rbp], rdx
#define SUB_RDX_TO_PTR_RSP sub qword ptr [rsp], rdx
#define SUB_RDX_TO_PTR_R8 sub qword ptr [r8], rdx
#define SUB_RDX_TO_PTR_R9 sub qword ptr [r9], rdx
#define SUB_RDX_TO_PTR_R10 sub qword ptr [r10], rdx
#define SUB_RDX_TO_PTR_R11 sub qword ptr [r11], rdx
#define SUB_RDX_TO_PTR_R12 sub qword ptr [r12], rdx
#define SUB_RDX_TO_PTR_R13 sub qword ptr [r13], rdx
#define SUB_RDX_TO_PTR_R14 sub qword ptr [r14], rdx
#define SUB_RDX_TO_PTR_R15 sub qword ptr [r15], rdx
#define SUB_RDX_TO_PTR_EAX sub qword ptr [eax], rdx
#define SUB_RDX_TO_PTR_EBX sub qword ptr [ebx], rdx
#define SUB_RDX_TO_PTR_ECX sub qword ptr [ecx], rdx
#define SUB_RDX_TO_PTR_EDX sub qword ptr [edx], rdx
#define SUB_RDX_TO_PTR_EDI sub qword ptr [edi], rdx
#define SUB_RDX_TO_PTR_ESI sub qword ptr [esi], rdx
#define SUB_RDX_TO_PTR_EBP sub qword ptr [ebp], rdx
#define SUB_RDX_TO_PTR_ESP sub qword ptr [esp], rdx

#define SUB_RDI_TO_PTR_RAX sub qword ptr [rax], rdi
#define SUB_RDI_TO_PTR_RBX sub qword ptr [rbx], rdi
#define SUB_RDI_TO_PTR_RCX sub qword ptr [rcx], rdi
#define SUB_RDI_TO_PTR_RDX sub qword ptr [rdx], rdi
#define SUB_RDI_TO_PTR_RDI sub qword ptr [rdi], rdi
#define SUB_RDI_TO_PTR_RSI sub qword ptr [rsi], rdi
#define SUB_RDI_TO_PTR_RBP sub qword ptr [rbp], rdi
#define SUB_RDI_TO_PTR_RSP sub qword ptr [rsp], rdi
#define SUB_RDI_TO_PTR_R8 sub qword ptr [r8], rdi
#define SUB_RDI_TO_PTR_R9 sub qword ptr [r9], rdi
#define SUB_RDI_TO_PTR_R10 sub qword ptr [r10], rdi
#define SUB_RDI_TO_PTR_R11 sub qword ptr [r11], rdi
#define SUB_RDI_TO_PTR_R12 sub qword ptr [r12], rdi
#define SUB_RDI_TO_PTR_R13 sub qword ptr [r13], rdi
#define SUB_RDI_TO_PTR_R14 sub qword ptr [r14], rdi
#define SUB_RDI_TO_PTR_R15 sub qword ptr [r15], rdi
#define SUB_RDI_TO_PTR_EAX sub qword ptr [eax], rdi
#define SUB_RDI_TO_PTR_EBX sub qword ptr [ebx], rdi
#define SUB_RDI_TO_PTR_ECX sub qword ptr [ecx], rdi
#define SUB_RDI_TO_PTR_EDX sub qword ptr [edx], rdi
#define SUB_RDI_TO_PTR_EDI sub qword ptr [edi], rdi
#define SUB_RDI_TO_PTR_ESI sub qword ptr [esi], rdi
#define SUB_RDI_TO_PTR_EBP sub qword ptr [ebp], rdi
#define SUB_RDI_TO_PTR_ESP sub qword ptr [esp], rdi

#define SUB_RSI_TO_PTR_RAX sub qword ptr [rax], rsi
#define SUB_RSI_TO_PTR_RBX sub qword ptr [rbx], rsi
#define SUB_RSI_TO_PTR_RCX sub qword ptr [rcx], rsi
#define SUB_RSI_TO_PTR_RDX sub qword ptr [rdx], rsi
#define SUB_RSI_TO_PTR_RDI sub qword ptr [rdi], rsi
#define SUB_RSI_TO_PTR_RSI sub qword ptr [rsi], rsi
#define SUB_RSI_TO_PTR_RBP sub qword ptr [rbp], rsi
#define SUB_RSI_TO_PTR_RSP sub qword ptr [rsp], rsi
#define SUB_RSI_TO_PTR_R8 sub qword ptr [r8], rsi
#define SUB_RSI_TO_PTR_R9 sub qword ptr [r9], rsi
#define SUB_RSI_TO_PTR_R10 sub qword ptr [r10], rsi
#define SUB_RSI_TO_PTR_R11 sub qword ptr [r11], rsi
#define SUB_RSI_TO_PTR_R12 sub qword ptr [r12], rsi
#define SUB_RSI_TO_PTR_R13 sub qword ptr [r13], rsi
#define SUB_RSI_TO_PTR_R14 sub qword ptr [r14], rsi
#define SUB_RSI_TO_PTR_R15 sub qword ptr [r15], rsi
#define SUB_RSI_TO_PTR_EAX sub qword ptr [eax], rsi
#define SUB_RSI_TO_PTR_EBX sub qword ptr [ebx], rsi
#define SUB_RSI_TO_PTR_ECX sub qword ptr [ecx], rsi
#define SUB_RSI_TO_PTR_EDX sub qword ptr [edx], rsi
#define SUB_RSI_TO_PTR_EDI sub qword ptr [edi], rsi
#define SUB_RSI_TO_PTR_ESI sub qword ptr [esi], rsi
#define SUB_RSI_TO_PTR_EBP sub qword ptr [ebp], rsi
#define SUB_RSI_TO_PTR_ESP sub qword ptr [esp], rsi

#define SUB_RBP_TO_PTR_RAX sub qword ptr [rax], rbp
#define SUB_RBP_TO_PTR_RBX sub qword ptr [rbx], rbp
#define SUB_RBP_TO_PTR_RCX sub qword ptr [rcx], rbp
#define SUB_RBP_TO_PTR_RDX sub qword ptr [rdx], rbp
#define SUB_RBP_TO_PTR_RDI sub qword ptr [rdi], rbp
#define SUB_RBP_TO_PTR_RSI sub qword ptr [rsi], rbp
#define SUB_RBP_TO_PTR_RBP sub qword ptr [rbp], rbp
#define SUB_RBP_TO_PTR_RSP sub qword ptr [rsp], rbp
#define SUB_RBP_TO_PTR_R8 sub qword ptr [r8], rbp
#define SUB_RBP_TO_PTR_R9 sub qword ptr [r9], rbp
#define SUB_RBP_TO_PTR_R10 sub qword ptr [r10], rbp
#define SUB_RBP_TO_PTR_R11 sub qword ptr [r11], rbp
#define SUB_RBP_TO_PTR_R12 sub qword ptr [r12], rbp
#define SUB_RBP_TO_PTR_R13 sub qword ptr [r13], rbp
#define SUB_RBP_TO_PTR_R14 sub qword ptr [r14], rbp
#define SUB_RBP_TO_PTR_R15 sub qword ptr [r15], rbp
#define SUB_RBP_TO_PTR_EAX sub qword ptr [eax], rbp
#define SUB_RBP_TO_PTR_EBX sub qword ptr [ebx], rbp
#define SUB_RBP_TO_PTR_ECX sub qword ptr [ecx], rbp
#define SUB_RBP_TO_PTR_EDX sub qword ptr [edx], rbp
#define SUB_RBP_TO_PTR_EDI sub qword ptr [edi], rbp
#define SUB_RBP_TO_PTR_ESI sub qword ptr [esi], rbp
#define SUB_RBP_TO_PTR_EBP sub qword ptr [ebp], rbp
#define SUB_RBP_TO_PTR_ESP sub qword ptr [esp], rbp

#define SUB_RSP_TO_PTR_RAX sub qword ptr [rax], rsp
#define SUB_RSP_TO_PTR_RBX sub qword ptr [rbx], rsp
#define SUB_RSP_TO_PTR_RCX sub qword ptr [rcx], rsp
#define SUB_RSP_TO_PTR_RDX sub qword ptr [rdx], rsp
#define SUB_RSP_TO_PTR_RDI sub qword ptr [rdi], rsp
#define SUB_RSP_TO_PTR_RSI sub qword ptr [rsi], rsp
#define SUB_RSP_TO_PTR_RBP sub qword ptr [rbp], rsp
#define SUB_RSP_TO_PTR_RSP sub qword ptr [rsp], rsp
#define SUB_RSP_TO_PTR_R8 sub qword ptr [r8], rsp
#define SUB_RSP_TO_PTR_R9 sub qword ptr [r9], rsp
#define SUB_RSP_TO_PTR_R10 sub qword ptr [r10], rsp
#define SUB_RSP_TO_PTR_R11 sub qword ptr [r11], rsp
#define SUB_RSP_TO_PTR_R12 sub qword ptr [r12], rsp
#define SUB_RSP_TO_PTR_R13 sub qword ptr [r13], rsp
#define SUB_RSP_TO_PTR_R14 sub qword ptr [r14], rsp
#define SUB_RSP_TO_PTR_R15 sub qword ptr [r15], rsp
#define SUB_RSP_TO_PTR_EAX sub qword ptr [eax], rsp
#define SUB_RSP_TO_PTR_EBX sub qword ptr [ebx], rsp
#define SUB_RSP_TO_PTR_ECX sub qword ptr [ecx], rsp
#define SUB_RSP_TO_PTR_EDX sub qword ptr [edx], rsp
#define SUB_RSP_TO_PTR_EDI sub qword ptr [edi], rsp
#define SUB_RSP_TO_PTR_ESI sub qword ptr [esi], rsp
#define SUB_RSP_TO_PTR_EBP sub qword ptr [ebp], rsp
#define SUB_RSP_TO_PTR_ESP sub qword ptr [esp], rsp

#define SUB_R8_TO_PTR_RAX sub qword ptr [rax], r8
#define SUB_R8_TO_PTR_RBX sub qword ptr [rbx], r8
#define SUB_R8_TO_PTR_RCX sub qword ptr [rcx], r8
#define SUB_R8_TO_PTR_RDX sub qword ptr [rdx], r8
#define SUB_R8_TO_PTR_RDI sub qword ptr [rdi], r8
#define SUB_R8_TO_PTR_RSI sub qword ptr [rsi], r8
#define SUB_R8_TO_PTR_RBP sub qword ptr [rbp], r8
#define SUB_R8_TO_PTR_RSP sub qword ptr [rsp], r8
#define SUB_R8_TO_PTR_R8 sub qword ptr [r8], r8
#define SUB_R8_TO_PTR_R9 sub qword ptr [r9], r8
#define SUB_R8_TO_PTR_R10 sub qword ptr [r10], r8
#define SUB_R8_TO_PTR_R11 sub qword ptr [r11], r8
#define SUB_R8_TO_PTR_R12 sub qword ptr [r12], r8
#define SUB_R8_TO_PTR_R13 sub qword ptr [r13], r8
#define SUB_R8_TO_PTR_R14 sub qword ptr [r14], r8
#define SUB_R8_TO_PTR_R15 sub qword ptr [r15], r8
#define SUB_R8_TO_PTR_EAX sub qword ptr [eax], r8
#define SUB_R8_TO_PTR_EBX sub qword ptr [ebx], r8
#define SUB_R8_TO_PTR_ECX sub qword ptr [ecx], r8
#define SUB_R8_TO_PTR_EDX sub qword ptr [edx], r8
#define SUB_R8_TO_PTR_EDI sub qword ptr [edi], r8
#define SUB_R8_TO_PTR_ESI sub qword ptr [esi], r8
#define SUB_R8_TO_PTR_EBP sub qword ptr [ebp], r8
#define SUB_R8_TO_PTR_ESP sub qword ptr [esp], r8

#define SUB_R9_TO_PTR_RAX sub qword ptr [rax], r9
#define SUB_R9_TO_PTR_RBX sub qword ptr [rbx], r9
#define SUB_R9_TO_PTR_RCX sub qword ptr [rcx], r9
#define SUB_R9_TO_PTR_RDX sub qword ptr [rdx], r9
#define SUB_R9_TO_PTR_RDI sub qword ptr [rdi], r9
#define SUB_R9_TO_PTR_RSI sub qword ptr [rsi], r9
#define SUB_R9_TO_PTR_RBP sub qword ptr [rbp], r9
#define SUB_R9_TO_PTR_RSP sub qword ptr [rsp], r9
#define SUB_R9_TO_PTR_R8 sub qword ptr [r8], r9
#define SUB_R9_TO_PTR_R9 sub qword ptr [r9], r9
#define SUB_R9_TO_PTR_R10 sub qword ptr [r10], r9
#define SUB_R9_TO_PTR_R11 sub qword ptr [r11], r9
#define SUB_R9_TO_PTR_R12 sub qword ptr [r12], r9
#define SUB_R9_TO_PTR_R13 sub qword ptr [r13], r9
#define SUB_R9_TO_PTR_R14 sub qword ptr [r14], r9
#define SUB_R9_TO_PTR_R15 sub qword ptr [r15], r9
#define SUB_R9_TO_PTR_EAX sub qword ptr [eax], r9
#define SUB_R9_TO_PTR_EBX sub qword ptr [ebx], r9
#define SUB_R9_TO_PTR_ECX sub qword ptr [ecx], r9
#define SUB_R9_TO_PTR_EDX sub qword ptr [edx], r9
#define SUB_R9_TO_PTR_EDI sub qword ptr [edi], r9
#define SUB_R9_TO_PTR_ESI sub qword ptr [esi], r9
#define SUB_R9_TO_PTR_EBP sub qword ptr [ebp], r9
#define SUB_R9_TO_PTR_ESP sub qword ptr [esp], r9

#define SUB_R10_TO_PTR_RAX sub qword ptr [rax], r10
#define SUB_R10_TO_PTR_RBX sub qword ptr [rbx], r10
#define SUB_R10_TO_PTR_RCX sub qword ptr [rcx], r10
#define SUB_R10_TO_PTR_RDX sub qword ptr [rdx], r10
#define SUB_R10_TO_PTR_RDI sub qword ptr [rdi], r10
#define SUB_R10_TO_PTR_RSI sub qword ptr [rsi], r10
#define SUB_R10_TO_PTR_RBP sub qword ptr [rbp], r10
#define SUB_R10_TO_PTR_RSP sub qword ptr [rsp], r10
#define SUB_R10_TO_PTR_R8 sub qword ptr [r8], r10
#define SUB_R10_TO_PTR_R9 sub qword ptr [r9], r10
#define SUB_R10_TO_PTR_R10 sub qword ptr [r10], r10
#define SUB_R10_TO_PTR_R11 sub qword ptr [r11], r10
#define SUB_R10_TO_PTR_R12 sub qword ptr [r12], r10
#define SUB_R10_TO_PTR_R13 sub qword ptr [r13], r10
#define SUB_R10_TO_PTR_R14 sub qword ptr [r14], r10
#define SUB_R10_TO_PTR_R15 sub qword ptr [r15], r10
#define SUB_R10_TO_PTR_EAX sub qword ptr [eax], r10
#define SUB_R10_TO_PTR_EBX sub qword ptr [ebx], r10
#define SUB_R10_TO_PTR_ECX sub qword ptr [ecx], r10
#define SUB_R10_TO_PTR_EDX sub qword ptr [edx], r10
#define SUB_R10_TO_PTR_EDI sub qword ptr [edi], r10
#define SUB_R10_TO_PTR_ESI sub qword ptr [esi], r10
#define SUB_R10_TO_PTR_EBP sub qword ptr [ebp], r10
#define SUB_R10_TO_PTR_ESP sub qword ptr [esp], r10

#define SUB_R11_TO_PTR_RAX sub qword ptr [rax], r11
#define SUB_R11_TO_PTR_RBX sub qword ptr [rbx], r11
#define SUB_R11_TO_PTR_RCX sub qword ptr [rcx], r11
#define SUB_R11_TO_PTR_RDX sub qword ptr [rdx], r11
#define SUB_R11_TO_PTR_RDI sub qword ptr [rdi], r11
#define SUB_R11_TO_PTR_RSI sub qword ptr [rsi], r11
#define SUB_R11_TO_PTR_RBP sub qword ptr [rbp], r11
#define SUB_R11_TO_PTR_RSP sub qword ptr [rsp], r11
#define SUB_R11_TO_PTR_R8 sub qword ptr [r8], r11
#define SUB_R11_TO_PTR_R9 sub qword ptr [r9], r11
#define SUB_R11_TO_PTR_R10 sub qword ptr [r10], r11
#define SUB_R11_TO_PTR_R11 sub qword ptr [r11], r11
#define SUB_R11_TO_PTR_R12 sub qword ptr [r12], r11
#define SUB_R11_TO_PTR_R13 sub qword ptr [r13], r11
#define SUB_R11_TO_PTR_R14 sub qword ptr [r14], r11
#define SUB_R11_TO_PTR_R15 sub qword ptr [r15], r11
#define SUB_R11_TO_PTR_EAX sub qword ptr [eax], r11
#define SUB_R11_TO_PTR_EBX sub qword ptr [ebx], r11
#define SUB_R11_TO_PTR_ECX sub qword ptr [ecx], r11
#define SUB_R11_TO_PTR_EDX sub qword ptr [edx], r11
#define SUB_R11_TO_PTR_EDI sub qword ptr [edi], r11
#define SUB_R11_TO_PTR_ESI sub qword ptr [esi], r11
#define SUB_R11_TO_PTR_EBP sub qword ptr [ebp], r11
#define SUB_R11_TO_PTR_ESP sub qword ptr [esp], r11

#define SUB_R12_TO_PTR_RAX sub qword ptr [rax], r12
#define SUB_R12_TO_PTR_RBX sub qword ptr [rbx], r12
#define SUB_R12_TO_PTR_RCX sub qword ptr [rcx], r12
#define SUB_R12_TO_PTR_RDX sub qword ptr [rdx], r12
#define SUB_R12_TO_PTR_RDI sub qword ptr [rdi], r12
#define SUB_R12_TO_PTR_RSI sub qword ptr [rsi], r12
#define SUB_R12_TO_PTR_RBP sub qword ptr [rbp], r12
#define SUB_R12_TO_PTR_RSP sub qword ptr [rsp], r12
#define SUB_R12_TO_PTR_R8 sub qword ptr [r8], r12
#define SUB_R12_TO_PTR_R9 sub qword ptr [r9], r12
#define SUB_R12_TO_PTR_R10 sub qword ptr [r10], r12
#define SUB_R12_TO_PTR_R11 sub qword ptr [r11], r12
#define SUB_R12_TO_PTR_R12 sub qword ptr [r12], r12
#define SUB_R12_TO_PTR_R13 sub qword ptr [r13], r12
#define SUB_R12_TO_PTR_R14 sub qword ptr [r14], r12
#define SUB_R12_TO_PTR_R15 sub qword ptr [r15], r12
#define SUB_R12_TO_PTR_EAX sub qword ptr [eax], r12
#define SUB_R12_TO_PTR_EBX sub qword ptr [ebx], r12
#define SUB_R12_TO_PTR_ECX sub qword ptr [ecx], r12
#define SUB_R12_TO_PTR_EDX sub qword ptr [edx], r12
#define SUB_R12_TO_PTR_EDI sub qword ptr [edi], r12
#define SUB_R12_TO_PTR_ESI sub qword ptr [esi], r12
#define SUB_R12_TO_PTR_EBP sub qword ptr [ebp], r12
#define SUB_R12_TO_PTR_ESP sub qword ptr [esp], r12

#define SUB_R13_TO_PTR_RAX sub qword ptr [rax], r13
#define SUB_R13_TO_PTR_RBX sub qword ptr [rbx], r13
#define SUB_R13_TO_PTR_RCX sub qword ptr [rcx], r13
#define SUB_R13_TO_PTR_RDX sub qword ptr [rdx], r13
#define SUB_R13_TO_PTR_RDI sub qword ptr [rdi], r13
#define SUB_R13_TO_PTR_RSI sub qword ptr [rsi], r13
#define SUB_R13_TO_PTR_RBP sub qword ptr [rbp], r13
#define SUB_R13_TO_PTR_RSP sub qword ptr [rsp], r13
#define SUB_R13_TO_PTR_R8 sub qword ptr [r8], r13
#define SUB_R13_TO_PTR_R9 sub qword ptr [r9], r13
#define SUB_R13_TO_PTR_R10 sub qword ptr [r10], r13
#define SUB_R13_TO_PTR_R11 sub qword ptr [r11], r13
#define SUB_R13_TO_PTR_R12 sub qword ptr [r12], r13
#define SUB_R13_TO_PTR_R13 sub qword ptr [r13], r13
#define SUB_R13_TO_PTR_R14 sub qword ptr [r14], r13
#define SUB_R13_TO_PTR_R15 sub qword ptr [r15], r13
#define SUB_R13_TO_PTR_EAX sub qword ptr [eax], r13
#define SUB_R13_TO_PTR_EBX sub qword ptr [ebx], r13
#define SUB_R13_TO_PTR_ECX sub qword ptr [ecx], r13
#define SUB_R13_TO_PTR_EDX sub qword ptr [edx], r13
#define SUB_R13_TO_PTR_EDI sub qword ptr [edi], r13
#define SUB_R13_TO_PTR_ESI sub qword ptr [esi], r13
#define SUB_R13_TO_PTR_EBP sub qword ptr [ebp], r13
#define SUB_R13_TO_PTR_ESP sub qword ptr [esp], r13

#define SUB_R14_TO_PTR_RAX sub qword ptr [rax], r14
#define SUB_R14_TO_PTR_RBX sub qword ptr [rbx], r14
#define SUB_R14_TO_PTR_RCX sub qword ptr [rcx], r14
#define SUB_R14_TO_PTR_RDX sub qword ptr [rdx], r14
#define SUB_R14_TO_PTR_RDI sub qword ptr [rdi], r14
#define SUB_R14_TO_PTR_RSI sub qword ptr [rsi], r14
#define SUB_R14_TO_PTR_RBP sub qword ptr [rbp], r14
#define SUB_R14_TO_PTR_RSP sub qword ptr [rsp], r14
#define SUB_R14_TO_PTR_R8 sub qword ptr [r8], r14
#define SUB_R14_TO_PTR_R9 sub qword ptr [r9], r14
#define SUB_R14_TO_PTR_R10 sub qword ptr [r10], r14
#define SUB_R14_TO_PTR_R11 sub qword ptr [r11], r14
#define SUB_R14_TO_PTR_R12 sub qword ptr [r12], r14
#define SUB_R14_TO_PTR_R13 sub qword ptr [r13], r14
#define SUB_R14_TO_PTR_R14 sub qword ptr [r14], r14
#define SUB_R14_TO_PTR_R15 sub qword ptr [r15], r14
#define SUB_R14_TO_PTR_EAX sub qword ptr [eax], r14
#define SUB_R14_TO_PTR_EBX sub qword ptr [ebx], r14
#define SUB_R14_TO_PTR_ECX sub qword ptr [ecx], r14
#define SUB_R14_TO_PTR_EDX sub qword ptr [edx], r14
#define SUB_R14_TO_PTR_EDI sub qword ptr [edi], r14
#define SUB_R14_TO_PTR_ESI sub qword ptr [esi], r14
#define SUB_R14_TO_PTR_EBP sub qword ptr [ebp], r14
#define SUB_R14_TO_PTR_ESP sub qword ptr [esp], r14

#define SUB_R15_TO_PTR_RAX sub qword ptr [rax], r15
#define SUB_R15_TO_PTR_RBX sub qword ptr [rbx], r15
#define SUB_R15_TO_PTR_RCX sub qword ptr [rcx], r15
#define SUB_R15_TO_PTR_RDX sub qword ptr [rdx], r15
#define SUB_R15_TO_PTR_RDI sub qword ptr [rdi], r15
#define SUB_R15_TO_PTR_RSI sub qword ptr [rsi], r15
#define SUB_R15_TO_PTR_RBP sub qword ptr [rbp], r15
#define SUB_R15_TO_PTR_RSP sub qword ptr [rsp], r15
#define SUB_R15_TO_PTR_R8 sub qword ptr [r8], r15
#define SUB_R15_TO_PTR_R9 sub qword ptr [r9], r15
#define SUB_R15_TO_PTR_R10 sub qword ptr [r10], r15
#define SUB_R15_TO_PTR_R11 sub qword ptr [r11], r15
#define SUB_R15_TO_PTR_R12 sub qword ptr [r12], r15
#define SUB_R15_TO_PTR_R13 sub qword ptr [r13], r15
#define SUB_R15_TO_PTR_R14 sub qword ptr [r14], r15
#define SUB_R15_TO_PTR_R15 sub qword ptr [r15], r15
#define SUB_R15_TO_PTR_EAX sub qword ptr [eax], r15
#define SUB_R15_TO_PTR_EBX sub qword ptr [ebx], r15
#define SUB_R15_TO_PTR_ECX sub qword ptr [ecx], r15
#define SUB_R15_TO_PTR_EDX sub qword ptr [edx], r15
#define SUB_R15_TO_PTR_EDI sub qword ptr [edi], r15
#define SUB_R15_TO_PTR_ESI sub qword ptr [esi], r15
#define SUB_R15_TO_PTR_EBP sub qword ptr [ebp], r15
#define SUB_R15_TO_PTR_ESP sub qword ptr [esp], r15

#define SUB_RAX_FROM_PTR_RAX_(VALUE) sub rax, qword ptr [rax + VALUE]
#define SUB_RAX_FROM_PTR_RBX_(VALUE) sub rax, qword ptr [rbx + VALUE]
#define SUB_RAX_FROM_PTR_RCX_(VALUE) sub rax, qword ptr [rcx + VALUE]
#define SUB_RAX_FROM_PTR_RDX_(VALUE) sub rax, qword ptr [rdx + VALUE]
#define SUB_RAX_FROM_PTR_RDI_(VALUE) sub rax, qword ptr [rdi + VALUE]
#define SUB_RAX_FROM_PTR_RSI_(VALUE) sub rax, qword ptr [rsi + VALUE]
#define SUB_RAX_FROM_PTR_RBP_(VALUE) sub rax, qword ptr [rbp + VALUE]
#define SUB_RAX_FROM_PTR_RSP_(VALUE) sub rax, qword ptr [rsp + VALUE]
#define SUB_RAX_FROM_PTR_R8_(VALUE) sub rax, qword ptr [r8 + VALUE]
#define SUB_RAX_FROM_PTR_R9_(VALUE) sub rax, qword ptr [r9 + VALUE]
#define SUB_RAX_FROM_PTR_R10_(VALUE) sub rax, qword ptr [r10 + VALUE]
#define SUB_RAX_FROM_PTR_R11_(VALUE) sub rax, qword ptr [r11 + VALUE]
#define SUB_RAX_FROM_PTR_R12_(VALUE) sub rax, qword ptr [r12 + VALUE]
#define SUB_RAX_FROM_PTR_R13_(VALUE) sub rax, qword ptr [r13 + VALUE]
#define SUB_RAX_FROM_PTR_R14_(VALUE) sub rax, qword ptr [r14 + VALUE]
#define SUB_RAX_FROM_PTR_R15_(VALUE) sub rax, qword ptr [r15 + VALUE]
#define SUB_RAX_FROM_PTR_EAX_(VALUE) sub rax, qword ptr [eax + VALUE]
#define SUB_RAX_FROM_PTR_EBX_(VALUE) sub rax, qword ptr [ebx + VALUE]
#define SUB_RAX_FROM_PTR_ECX_(VALUE) sub rax, qword ptr [ecx + VALUE]
#define SUB_RAX_FROM_PTR_EDX_(VALUE) sub rax, qword ptr [edx + VALUE]
#define SUB_RAX_FROM_PTR_EDI_(VALUE) sub rax, qword ptr [edi + VALUE]
#define SUB_RAX_FROM_PTR_ESI_(VALUE) sub rax, qword ptr [esi + VALUE]
#define SUB_RAX_FROM_PTR_EBP_(VALUE) sub rax, qword ptr [ebp + VALUE]
#define SUB_RAX_FROM_PTR_ESP_(VALUE) sub rax, qword ptr [esp + VALUE]

#define SUB_RBX_FROM_PTR_RAX_(VALUE) sub rbx, qword ptr [rax + VALUE]
#define SUB_RBX_FROM_PTR_RBX_(VALUE) sub rbx, qword ptr [rbx + VALUE]
#define SUB_RBX_FROM_PTR_RCX_(VALUE) sub rbx, qword ptr [rcx + VALUE]
#define SUB_RBX_FROM_PTR_RDX_(VALUE) sub rbx, qword ptr [rdx + VALUE]
#define SUB_RBX_FROM_PTR_RDI_(VALUE) sub rbx, qword ptr [rdi + VALUE]
#define SUB_RBX_FROM_PTR_RSI_(VALUE) sub rbx, qword ptr [rsi + VALUE]
#define SUB_RBX_FROM_PTR_RBP_(VALUE) sub rbx, qword ptr [rbp + VALUE]
#define SUB_RBX_FROM_PTR_RSP_(VALUE) sub rbx, qword ptr [rsp + VALUE]
#define SUB_RBX_FROM_PTR_R8_(VALUE) sub rbx, qword ptr [r8 + VALUE]
#define SUB_RBX_FROM_PTR_R9_(VALUE) sub rbx, qword ptr [r9 + VALUE]
#define SUB_RBX_FROM_PTR_R10_(VALUE) sub rbx, qword ptr [r10 + VALUE]
#define SUB_RBX_FROM_PTR_R11_(VALUE) sub rbx, qword ptr [r11 + VALUE]
#define SUB_RBX_FROM_PTR_R12_(VALUE) sub rbx, qword ptr [r12 + VALUE]
#define SUB_RBX_FROM_PTR_R13_(VALUE) sub rbx, qword ptr [r13 + VALUE]
#define SUB_RBX_FROM_PTR_R14_(VALUE) sub rbx, qword ptr [r14 + VALUE]
#define SUB_RBX_FROM_PTR_R15_(VALUE) sub rbx, qword ptr [r15 + VALUE]
#define SUB_RBX_FROM_PTR_EAX_(VALUE) sub rbx, qword ptr [eax + VALUE]
#define SUB_RBX_FROM_PTR_EBX_(VALUE) sub rbx, qword ptr [ebx + VALUE]
#define SUB_RBX_FROM_PTR_ECX_(VALUE) sub rbx, qword ptr [ecx + VALUE]
#define SUB_RBX_FROM_PTR_EDX_(VALUE) sub rbx, qword ptr [edx + VALUE]
#define SUB_RBX_FROM_PTR_EDI_(VALUE) sub rbx, qword ptr [edi + VALUE]
#define SUB_RBX_FROM_PTR_ESI_(VALUE) sub rbx, qword ptr [esi + VALUE]
#define SUB_RBX_FROM_PTR_EBP_(VALUE) sub rbx, qword ptr [ebp + VALUE]
#define SUB_RBX_FROM_PTR_ESP_(VALUE) sub rbx, qword ptr [esp + VALUE]

#define SUB_RCX_FROM_PTR_RAX_(VALUE) sub rcx, qword ptr [rax + VALUE]
#define SUB_RCX_FROM_PTR_RBX_(VALUE) sub rcx, qword ptr [rbx + VALUE]
#define SUB_RCX_FROM_PTR_RCX_(VALUE) sub rcx, qword ptr [rcx + VALUE]
#define SUB_RCX_FROM_PTR_RDX_(VALUE) sub rcx, qword ptr [rdx + VALUE]
#define SUB_RCX_FROM_PTR_RDI_(VALUE) sub rcx, qword ptr [rdi + VALUE]
#define SUB_RCX_FROM_PTR_RSI_(VALUE) sub rcx, qword ptr [rsi + VALUE]
#define SUB_RCX_FROM_PTR_RBP_(VALUE) sub rcx, qword ptr [rbp + VALUE]
#define SUB_RCX_FROM_PTR_RSP_(VALUE) sub rcx, qword ptr [rsp + VALUE]
#define SUB_RCX_FROM_PTR_R8_(VALUE) sub rcx, qword ptr [r8 + VALUE]
#define SUB_RCX_FROM_PTR_R9_(VALUE) sub rcx, qword ptr [r9 + VALUE]
#define SUB_RCX_FROM_PTR_R10_(VALUE) sub rcx, qword ptr [r10 + VALUE]
#define SUB_RCX_FROM_PTR_R11_(VALUE) sub rcx, qword ptr [r11 + VALUE]
#define SUB_RCX_FROM_PTR_R12_(VALUE) sub rcx, qword ptr [r12 + VALUE]
#define SUB_RCX_FROM_PTR_R13_(VALUE) sub rcx, qword ptr [r13 + VALUE]
#define SUB_RCX_FROM_PTR_R14_(VALUE) sub rcx, qword ptr [r14 + VALUE]
#define SUB_RCX_FROM_PTR_R15_(VALUE) sub rcx, qword ptr [r15 + VALUE]
#define SUB_RCX_FROM_PTR_EAX_(VALUE) sub rcx, qword ptr [eax + VALUE]
#define SUB_RCX_FROM_PTR_EBX_(VALUE) sub rcx, qword ptr [ebx + VALUE]
#define SUB_RCX_FROM_PTR_ECX_(VALUE) sub rcx, qword ptr [ecx + VALUE]
#define SUB_RCX_FROM_PTR_EDX_(VALUE) sub rcx, qword ptr [edx + VALUE]
#define SUB_RCX_FROM_PTR_EDI_(VALUE) sub rcx, qword ptr [edi + VALUE]
#define SUB_RCX_FROM_PTR_ESI_(VALUE) sub rcx, qword ptr [esi + VALUE]
#define SUB_RCX_FROM_PTR_EBP_(VALUE) sub rcx, qword ptr [ebp + VALUE]
#define SUB_RCX_FROM_PTR_ESP_(VALUE) sub rcx, qword ptr [esp + VALUE]

#define SUB_RDX_FROM_PTR_RAX_(VALUE) sub rdx, qword ptr [rax + VALUE]
#define SUB_RDX_FROM_PTR_RBX_(VALUE) sub rdx, qword ptr [rbx + VALUE]
#define SUB_RDX_FROM_PTR_RCX_(VALUE) sub rdx, qword ptr [rcx + VALUE]
#define SUB_RDX_FROM_PTR_RDX_(VALUE) sub rdx, qword ptr [rdx + VALUE]
#define SUB_RDX_FROM_PTR_RDI_(VALUE) sub rdx, qword ptr [rdi + VALUE]
#define SUB_RDX_FROM_PTR_RSI_(VALUE) sub rdx, qword ptr [rsi + VALUE]
#define SUB_RDX_FROM_PTR_RBP_(VALUE) sub rdx, qword ptr [rbp + VALUE]
#define SUB_RDX_FROM_PTR_RSP_(VALUE) sub rdx, qword ptr [rsp + VALUE]
#define SUB_RDX_FROM_PTR_R8_(VALUE) sub rdx, qword ptr [r8 + VALUE]
#define SUB_RDX_FROM_PTR_R9_(VALUE) sub rdx, qword ptr [r9 + VALUE]
#define SUB_RDX_FROM_PTR_R10_(VALUE) sub rdx, qword ptr [r10 + VALUE]
#define SUB_RDX_FROM_PTR_R11_(VALUE) sub rdx, qword ptr [r11 + VALUE]
#define SUB_RDX_FROM_PTR_R12_(VALUE) sub rdx, qword ptr [r12 + VALUE]
#define SUB_RDX_FROM_PTR_R13_(VALUE) sub rdx, qword ptr [r13 + VALUE]
#define SUB_RDX_FROM_PTR_R14_(VALUE) sub rdx, qword ptr [r14 + VALUE]
#define SUB_RDX_FROM_PTR_R15_(VALUE) sub rdx, qword ptr [r15 + VALUE]
#define SUB_RDX_FROM_PTR_EAX_(VALUE) sub rdx, qword ptr [eax + VALUE]
#define SUB_RDX_FROM_PTR_EBX_(VALUE) sub rdx, qword ptr [ebx + VALUE]
#define SUB_RDX_FROM_PTR_ECX_(VALUE) sub rdx, qword ptr [ecx + VALUE]
#define SUB_RDX_FROM_PTR_EDX_(VALUE) sub rdx, qword ptr [edx + VALUE]
#define SUB_RDX_FROM_PTR_EDI_(VALUE) sub rdx, qword ptr [edi + VALUE]
#define SUB_RDX_FROM_PTR_ESI_(VALUE) sub rdx, qword ptr [esi + VALUE]
#define SUB_RDX_FROM_PTR_EBP_(VALUE) sub rdx, qword ptr [ebp + VALUE]
#define SUB_RDX_FROM_PTR_ESP_(VALUE) sub rdx, qword ptr [esp + VALUE]

#define SUB_RDI_FROM_PTR_RAX_(VALUE) sub rdi, qword ptr [rax + VALUE]
#define SUB_RDI_FROM_PTR_RBX_(VALUE) sub rdi, qword ptr [rbx + VALUE]
#define SUB_RDI_FROM_PTR_RCX_(VALUE) sub rdi, qword ptr [rcx + VALUE]
#define SUB_RDI_FROM_PTR_RDX_(VALUE) sub rdi, qword ptr [rdx + VALUE]
#define SUB_RDI_FROM_PTR_RDI_(VALUE) sub rdi, qword ptr [rdi + VALUE]
#define SUB_RDI_FROM_PTR_RSI_(VALUE) sub rdi, qword ptr [rsi + VALUE]
#define SUB_RDI_FROM_PTR_RBP_(VALUE) sub rdi, qword ptr [rbp + VALUE]
#define SUB_RDI_FROM_PTR_RSP_(VALUE) sub rdi, qword ptr [rsp + VALUE]
#define SUB_RDI_FROM_PTR_R8_(VALUE) sub rdi, qword ptr [r8 + VALUE]
#define SUB_RDI_FROM_PTR_R9_(VALUE) sub rdi, qword ptr [r9 + VALUE]
#define SUB_RDI_FROM_PTR_R10_(VALUE) sub rdi, qword ptr [r10 + VALUE]
#define SUB_RDI_FROM_PTR_R11_(VALUE) sub rdi, qword ptr [r11 + VALUE]
#define SUB_RDI_FROM_PTR_R12_(VALUE) sub rdi, qword ptr [r12 + VALUE]
#define SUB_RDI_FROM_PTR_R13_(VALUE) sub rdi, qword ptr [r13 + VALUE]
#define SUB_RDI_FROM_PTR_R14_(VALUE) sub rdi, qword ptr [r14 + VALUE]
#define SUB_RDI_FROM_PTR_R15_(VALUE) sub rdi, qword ptr [r15 + VALUE]
#define SUB_RDI_FROM_PTR_EAX_(VALUE) sub rdi, qword ptr [eax + VALUE]
#define SUB_RDI_FROM_PTR_EBX_(VALUE) sub rdi, qword ptr [ebx + VALUE]
#define SUB_RDI_FROM_PTR_ECX_(VALUE) sub rdi, qword ptr [ecx + VALUE]
#define SUB_RDI_FROM_PTR_EDX_(VALUE) sub rdi, qword ptr [edx + VALUE]
#define SUB_RDI_FROM_PTR_EDI_(VALUE) sub rdi, qword ptr [edi + VALUE]
#define SUB_RDI_FROM_PTR_ESI_(VALUE) sub rdi, qword ptr [esi + VALUE]
#define SUB_RDI_FROM_PTR_EBP_(VALUE) sub rdi, qword ptr [ebp + VALUE]
#define SUB_RDI_FROM_PTR_ESP_(VALUE) sub rdi, qword ptr [esp + VALUE]

#define SUB_RSI_FROM_PTR_RAX_(VALUE) sub rsi, qword ptr [rax + VALUE]
#define SUB_RSI_FROM_PTR_RBX_(VALUE) sub rsi, qword ptr [rbx + VALUE]
#define SUB_RSI_FROM_PTR_RCX_(VALUE) sub rsi, qword ptr [rcx + VALUE]
#define SUB_RSI_FROM_PTR_RDX_(VALUE) sub rsi, qword ptr [rdx + VALUE]
#define SUB_RSI_FROM_PTR_RDI_(VALUE) sub rsi, qword ptr [rdi + VALUE]
#define SUB_RSI_FROM_PTR_RSI_(VALUE) sub rsi, qword ptr [rsi + VALUE]
#define SUB_RSI_FROM_PTR_RBP_(VALUE) sub rsi, qword ptr [rbp + VALUE]
#define SUB_RSI_FROM_PTR_RSP_(VALUE) sub rsi, qword ptr [rsp + VALUE]
#define SUB_RSI_FROM_PTR_R8_(VALUE) sub rsi, qword ptr [r8 + VALUE]
#define SUB_RSI_FROM_PTR_R9_(VALUE) sub rsi, qword ptr [r9 + VALUE]
#define SUB_RSI_FROM_PTR_R10_(VALUE) sub rsi, qword ptr [r10 + VALUE]
#define SUB_RSI_FROM_PTR_R11_(VALUE) sub rsi, qword ptr [r11 + VALUE]
#define SUB_RSI_FROM_PTR_R12_(VALUE) sub rsi, qword ptr [r12 + VALUE]
#define SUB_RSI_FROM_PTR_R13_(VALUE) sub rsi, qword ptr [r13 + VALUE]
#define SUB_RSI_FROM_PTR_R14_(VALUE) sub rsi, qword ptr [r14 + VALUE]
#define SUB_RSI_FROM_PTR_R15_(VALUE) sub rsi, qword ptr [r15 + VALUE]
#define SUB_RSI_FROM_PTR_EAX_(VALUE) sub rsi, qword ptr [eax + VALUE]
#define SUB_RSI_FROM_PTR_EBX_(VALUE) sub rsi, qword ptr [ebx + VALUE]
#define SUB_RSI_FROM_PTR_ECX_(VALUE) sub rsi, qword ptr [ecx + VALUE]
#define SUB_RSI_FROM_PTR_EDX_(VALUE) sub rsi, qword ptr [edx + VALUE]
#define SUB_RSI_FROM_PTR_EDI_(VALUE) sub rsi, qword ptr [edi + VALUE]
#define SUB_RSI_FROM_PTR_ESI_(VALUE) sub rsi, qword ptr [esi + VALUE]
#define SUB_RSI_FROM_PTR_EBP_(VALUE) sub rsi, qword ptr [ebp + VALUE]
#define SUB_RSI_FROM_PTR_ESP_(VALUE) sub rsi, qword ptr [esp + VALUE]

#define SUB_RBP_FROM_PTR_RAX_(VALUE) sub rbp, qword ptr [rax + VALUE]
#define SUB_RBP_FROM_PTR_RBX_(VALUE) sub rbp, qword ptr [rbx + VALUE]
#define SUB_RBP_FROM_PTR_RCX_(VALUE) sub rbp, qword ptr [rcx + VALUE]
#define SUB_RBP_FROM_PTR_RDX_(VALUE) sub rbp, qword ptr [rdx + VALUE]
#define SUB_RBP_FROM_PTR_RDI_(VALUE) sub rbp, qword ptr [rdi + VALUE]
#define SUB_RBP_FROM_PTR_RSI_(VALUE) sub rbp, qword ptr [rsi + VALUE]
#define SUB_RBP_FROM_PTR_RBP_(VALUE) sub rbp, qword ptr [rbp + VALUE]
#define SUB_RBP_FROM_PTR_RSP_(VALUE) sub rbp, qword ptr [rsp + VALUE]
#define SUB_RBP_FROM_PTR_R8_(VALUE) sub rbp, qword ptr [r8 + VALUE]
#define SUB_RBP_FROM_PTR_R9_(VALUE) sub rbp, qword ptr [r9 + VALUE]
#define SUB_RBP_FROM_PTR_R10_(VALUE) sub rbp, qword ptr [r10 + VALUE]
#define SUB_RBP_FROM_PTR_R11_(VALUE) sub rbp, qword ptr [r11 + VALUE]
#define SUB_RBP_FROM_PTR_R12_(VALUE) sub rbp, qword ptr [r12 + VALUE]
#define SUB_RBP_FROM_PTR_R13_(VALUE) sub rbp, qword ptr [r13 + VALUE]
#define SUB_RBP_FROM_PTR_R14_(VALUE) sub rbp, qword ptr [r14 + VALUE]
#define SUB_RBP_FROM_PTR_R15_(VALUE) sub rbp, qword ptr [r15 + VALUE]
#define SUB_RBP_FROM_PTR_EAX_(VALUE) sub rbp, qword ptr [eax + VALUE]
#define SUB_RBP_FROM_PTR_EBX_(VALUE) sub rbp, qword ptr [ebx + VALUE]
#define SUB_RBP_FROM_PTR_ECX_(VALUE) sub rbp, qword ptr [ecx + VALUE]
#define SUB_RBP_FROM_PTR_EDX_(VALUE) sub rbp, qword ptr [edx + VALUE]
#define SUB_RBP_FROM_PTR_EDI_(VALUE) sub rbp, qword ptr [edi + VALUE]
#define SUB_RBP_FROM_PTR_ESI_(VALUE) sub rbp, qword ptr [esi + VALUE]
#define SUB_RBP_FROM_PTR_EBP_(VALUE) sub rbp, qword ptr [ebp + VALUE]
#define SUB_RBP_FROM_PTR_ESP_(VALUE) sub rbp, qword ptr [esp + VALUE]

#define SUB_RSP_FROM_PTR_RAX_(VALUE) sub rsp, qword ptr [rax + VALUE]
#define SUB_RSP_FROM_PTR_RBX_(VALUE) sub rsp, qword ptr [rbx + VALUE]
#define SUB_RSP_FROM_PTR_RCX_(VALUE) sub rsp, qword ptr [rcx + VALUE]
#define SUB_RSP_FROM_PTR_RDX_(VALUE) sub rsp, qword ptr [rdx + VALUE]
#define SUB_RSP_FROM_PTR_RDI_(VALUE) sub rsp, qword ptr [rdi + VALUE]
#define SUB_RSP_FROM_PTR_RSI_(VALUE) sub rsp, qword ptr [rsi + VALUE]
#define SUB_RSP_FROM_PTR_RBP_(VALUE) sub rsp, qword ptr [rbp + VALUE]
#define SUB_RSP_FROM_PTR_RSP_(VALUE) sub rsp, qword ptr [rsp + VALUE]
#define SUB_RSP_FROM_PTR_R8_(VALUE) sub rsp, qword ptr [r8 + VALUE]
#define SUB_RSP_FROM_PTR_R9_(VALUE) sub rsp, qword ptr [r9 + VALUE]
#define SUB_RSP_FROM_PTR_R10_(VALUE) sub rsp, qword ptr [r10 + VALUE]
#define SUB_RSP_FROM_PTR_R11_(VALUE) sub rsp, qword ptr [r11 + VALUE]
#define SUB_RSP_FROM_PTR_R12_(VALUE) sub rsp, qword ptr [r12 + VALUE]
#define SUB_RSP_FROM_PTR_R13_(VALUE) sub rsp, qword ptr [r13 + VALUE]
#define SUB_RSP_FROM_PTR_R14_(VALUE) sub rsp, qword ptr [r14 + VALUE]
#define SUB_RSP_FROM_PTR_R15_(VALUE) sub rsp, qword ptr [r15 + VALUE]
#define SUB_RSP_FROM_PTR_EAX_(VALUE) sub rsp, qword ptr [eax + VALUE]
#define SUB_RSP_FROM_PTR_EBX_(VALUE) sub rsp, qword ptr [ebx + VALUE]
#define SUB_RSP_FROM_PTR_ECX_(VALUE) sub rsp, qword ptr [ecx + VALUE]
#define SUB_RSP_FROM_PTR_EDX_(VALUE) sub rsp, qword ptr [edx + VALUE]
#define SUB_RSP_FROM_PTR_EDI_(VALUE) sub rsp, qword ptr [edi + VALUE]
#define SUB_RSP_FROM_PTR_ESI_(VALUE) sub rsp, qword ptr [esi + VALUE]
#define SUB_RSP_FROM_PTR_EBP_(VALUE) sub rsp, qword ptr [ebp + VALUE]
#define SUB_RSP_FROM_PTR_ESP_(VALUE) sub rsp, qword ptr [esp + VALUE]

#define SUB_R8_FROM_PTR_RAX_(VALUE) sub r8, qword ptr [rax + VALUE]
#define SUB_R8_FROM_PTR_RBX_(VALUE) sub r8, qword ptr [rbx + VALUE]
#define SUB_R8_FROM_PTR_RCX_(VALUE) sub r8, qword ptr [rcx + VALUE]
#define SUB_R8_FROM_PTR_RDX_(VALUE) sub r8, qword ptr [rdx + VALUE]
#define SUB_R8_FROM_PTR_RDI_(VALUE) sub r8, qword ptr [rdi + VALUE]
#define SUB_R8_FROM_PTR_RSI_(VALUE) sub r8, qword ptr [rsi + VALUE]
#define SUB_R8_FROM_PTR_RBP_(VALUE) sub r8, qword ptr [rbp + VALUE]
#define SUB_R8_FROM_PTR_RSP_(VALUE) sub r8, qword ptr [rsp + VALUE]
#define SUB_R8_FROM_PTR_R8_(VALUE) sub r8, qword ptr [r8 + VALUE]
#define SUB_R8_FROM_PTR_R9_(VALUE) sub r8, qword ptr [r9 + VALUE]
#define SUB_R8_FROM_PTR_R10_(VALUE) sub r8, qword ptr [r10 + VALUE]
#define SUB_R8_FROM_PTR_R11_(VALUE) sub r8, qword ptr [r11 + VALUE]
#define SUB_R8_FROM_PTR_R12_(VALUE) sub r8, qword ptr [r12 + VALUE]
#define SUB_R8_FROM_PTR_R13_(VALUE) sub r8, qword ptr [r13 + VALUE]
#define SUB_R8_FROM_PTR_R14_(VALUE) sub r8, qword ptr [r14 + VALUE]
#define SUB_R8_FROM_PTR_R15_(VALUE) sub r8, qword ptr [r15 + VALUE]
#define SUB_R8_FROM_PTR_EAX_(VALUE) sub r8, qword ptr [eax + VALUE]
#define SUB_R8_FROM_PTR_EBX_(VALUE) sub r8, qword ptr [ebx + VALUE]
#define SUB_R8_FROM_PTR_ECX_(VALUE) sub r8, qword ptr [ecx + VALUE]
#define SUB_R8_FROM_PTR_EDX_(VALUE) sub r8, qword ptr [edx + VALUE]
#define SUB_R8_FROM_PTR_EDI_(VALUE) sub r8, qword ptr [edi + VALUE]
#define SUB_R8_FROM_PTR_ESI_(VALUE) sub r8, qword ptr [esi + VALUE]
#define SUB_R8_FROM_PTR_EBP_(VALUE) sub r8, qword ptr [ebp + VALUE]
#define SUB_R8_FROM_PTR_ESP_(VALUE) sub r8, qword ptr [esp + VALUE]

#define SUB_R9_FROM_PTR_RAX_(VALUE) sub r9, qword ptr [rax + VALUE]
#define SUB_R9_FROM_PTR_RBX_(VALUE) sub r9, qword ptr [rbx + VALUE]
#define SUB_R9_FROM_PTR_RCX_(VALUE) sub r9, qword ptr [rcx + VALUE]
#define SUB_R9_FROM_PTR_RDX_(VALUE) sub r9, qword ptr [rdx + VALUE]
#define SUB_R9_FROM_PTR_RDI_(VALUE) sub r9, qword ptr [rdi + VALUE]
#define SUB_R9_FROM_PTR_RSI_(VALUE) sub r9, qword ptr [rsi + VALUE]
#define SUB_R9_FROM_PTR_RBP_(VALUE) sub r9, qword ptr [rbp + VALUE]
#define SUB_R9_FROM_PTR_RSP_(VALUE) sub r9, qword ptr [rsp + VALUE]
#define SUB_R9_FROM_PTR_R8_(VALUE) sub r9, qword ptr [r8 + VALUE]
#define SUB_R9_FROM_PTR_R9_(VALUE) sub r9, qword ptr [r9 + VALUE]
#define SUB_R9_FROM_PTR_R10_(VALUE) sub r9, qword ptr [r10 + VALUE]
#define SUB_R9_FROM_PTR_R11_(VALUE) sub r9, qword ptr [r11 + VALUE]
#define SUB_R9_FROM_PTR_R12_(VALUE) sub r9, qword ptr [r12 + VALUE]
#define SUB_R9_FROM_PTR_R13_(VALUE) sub r9, qword ptr [r13 + VALUE]
#define SUB_R9_FROM_PTR_R14_(VALUE) sub r9, qword ptr [r14 + VALUE]
#define SUB_R9_FROM_PTR_R15_(VALUE) sub r9, qword ptr [r15 + VALUE]
#define SUB_R9_FROM_PTR_EAX_(VALUE) sub r9, qword ptr [eax + VALUE]
#define SUB_R9_FROM_PTR_EBX_(VALUE) sub r9, qword ptr [ebx + VALUE]
#define SUB_R9_FROM_PTR_ECX_(VALUE) sub r9, qword ptr [ecx + VALUE]
#define SUB_R9_FROM_PTR_EDX_(VALUE) sub r9, qword ptr [edx + VALUE]
#define SUB_R9_FROM_PTR_EDI_(VALUE) sub r9, qword ptr [edi + VALUE]
#define SUB_R9_FROM_PTR_ESI_(VALUE) sub r9, qword ptr [esi + VALUE]
#define SUB_R9_FROM_PTR_EBP_(VALUE) sub r9, qword ptr [ebp + VALUE]
#define SUB_R9_FROM_PTR_ESP_(VALUE) sub r9, qword ptr [esp + VALUE]

#define SUB_R10_FROM_PTR_RAX_(VALUE) sub r10, qword ptr [rax + VALUE]
#define SUB_R10_FROM_PTR_RBX_(VALUE) sub r10, qword ptr [rbx + VALUE]
#define SUB_R10_FROM_PTR_RCX_(VALUE) sub r10, qword ptr [rcx + VALUE]
#define SUB_R10_FROM_PTR_RDX_(VALUE) sub r10, qword ptr [rdx + VALUE]
#define SUB_R10_FROM_PTR_RDI_(VALUE) sub r10, qword ptr [rdi + VALUE]
#define SUB_R10_FROM_PTR_RSI_(VALUE) sub r10, qword ptr [rsi + VALUE]
#define SUB_R10_FROM_PTR_RBP_(VALUE) sub r10, qword ptr [rbp + VALUE]
#define SUB_R10_FROM_PTR_RSP_(VALUE) sub r10, qword ptr [rsp + VALUE]
#define SUB_R10_FROM_PTR_R8_(VALUE) sub r10, qword ptr [r8 + VALUE]
#define SUB_R10_FROM_PTR_R9_(VALUE) sub r10, qword ptr [r9 + VALUE]
#define SUB_R10_FROM_PTR_R10_(VALUE) sub r10, qword ptr [r10 + VALUE]
#define SUB_R10_FROM_PTR_R11_(VALUE) sub r10, qword ptr [r11 + VALUE]
#define SUB_R10_FROM_PTR_R12_(VALUE) sub r10, qword ptr [r12 + VALUE]
#define SUB_R10_FROM_PTR_R13_(VALUE) sub r10, qword ptr [r13 + VALUE]
#define SUB_R10_FROM_PTR_R14_(VALUE) sub r10, qword ptr [r14 + VALUE]
#define SUB_R10_FROM_PTR_R15_(VALUE) sub r10, qword ptr [r15 + VALUE]
#define SUB_R10_FROM_PTR_EAX_(VALUE) sub r10, qword ptr [eax + VALUE]
#define SUB_R10_FROM_PTR_EBX_(VALUE) sub r10, qword ptr [ebx + VALUE]
#define SUB_R10_FROM_PTR_ECX_(VALUE) sub r10, qword ptr [ecx + VALUE]
#define SUB_R10_FROM_PTR_EDX_(VALUE) sub r10, qword ptr [edx + VALUE]
#define SUB_R10_FROM_PTR_EDI_(VALUE) sub r10, qword ptr [edi + VALUE]
#define SUB_R10_FROM_PTR_ESI_(VALUE) sub r10, qword ptr [esi + VALUE]
#define SUB_R10_FROM_PTR_EBP_(VALUE) sub r10, qword ptr [ebp + VALUE]
#define SUB_R10_FROM_PTR_ESP_(VALUE) sub r10, qword ptr [esp + VALUE]

#define SUB_R11_FROM_PTR_RAX_(VALUE) sub r11, qword ptr [rax + VALUE]
#define SUB_R11_FROM_PTR_RBX_(VALUE) sub r11, qword ptr [rbx + VALUE]
#define SUB_R11_FROM_PTR_RCX_(VALUE) sub r11, qword ptr [rcx + VALUE]
#define SUB_R11_FROM_PTR_RDX_(VALUE) sub r11, qword ptr [rdx + VALUE]
#define SUB_R11_FROM_PTR_RDI_(VALUE) sub r11, qword ptr [rdi + VALUE]
#define SUB_R11_FROM_PTR_RSI_(VALUE) sub r11, qword ptr [rsi + VALUE]
#define SUB_R11_FROM_PTR_RBP_(VALUE) sub r11, qword ptr [rbp + VALUE]
#define SUB_R11_FROM_PTR_RSP_(VALUE) sub r11, qword ptr [rsp + VALUE]
#define SUB_R11_FROM_PTR_R8_(VALUE) sub r11, qword ptr [r8 + VALUE]
#define SUB_R11_FROM_PTR_R9_(VALUE) sub r11, qword ptr [r9 + VALUE]
#define SUB_R11_FROM_PTR_R10_(VALUE) sub r11, qword ptr [r10 + VALUE]
#define SUB_R11_FROM_PTR_R11_(VALUE) sub r11, qword ptr [r11 + VALUE]
#define SUB_R11_FROM_PTR_R12_(VALUE) sub r11, qword ptr [r12 + VALUE]
#define SUB_R11_FROM_PTR_R13_(VALUE) sub r11, qword ptr [r13 + VALUE]
#define SUB_R11_FROM_PTR_R14_(VALUE) sub r11, qword ptr [r14 + VALUE]
#define SUB_R11_FROM_PTR_R15_(VALUE) sub r11, qword ptr [r15 + VALUE]
#define SUB_R11_FROM_PTR_EAX_(VALUE) sub r11, qword ptr [eax + VALUE]
#define SUB_R11_FROM_PTR_EBX_(VALUE) sub r11, qword ptr [ebx + VALUE]
#define SUB_R11_FROM_PTR_ECX_(VALUE) sub r11, qword ptr [ecx + VALUE]
#define SUB_R11_FROM_PTR_EDX_(VALUE) sub r11, qword ptr [edx + VALUE]
#define SUB_R11_FROM_PTR_EDI_(VALUE) sub r11, qword ptr [edi + VALUE]
#define SUB_R11_FROM_PTR_ESI_(VALUE) sub r11, qword ptr [esi + VALUE]
#define SUB_R11_FROM_PTR_EBP_(VALUE) sub r11, qword ptr [ebp + VALUE]
#define SUB_R11_FROM_PTR_ESP_(VALUE) sub r11, qword ptr [esp + VALUE]

#define SUB_R12_FROM_PTR_RAX_(VALUE) sub r12, qword ptr [rax + VALUE]
#define SUB_R12_FROM_PTR_RBX_(VALUE) sub r12, qword ptr [rbx + VALUE]
#define SUB_R12_FROM_PTR_RCX_(VALUE) sub r12, qword ptr [rcx + VALUE]
#define SUB_R12_FROM_PTR_RDX_(VALUE) sub r12, qword ptr [rdx + VALUE]
#define SUB_R12_FROM_PTR_RDI_(VALUE) sub r12, qword ptr [rdi + VALUE]
#define SUB_R12_FROM_PTR_RSI_(VALUE) sub r12, qword ptr [rsi + VALUE]
#define SUB_R12_FROM_PTR_RBP_(VALUE) sub r12, qword ptr [rbp + VALUE]
#define SUB_R12_FROM_PTR_RSP_(VALUE) sub r12, qword ptr [rsp + VALUE]
#define SUB_R12_FROM_PTR_R8_(VALUE) sub r12, qword ptr [r8 + VALUE]
#define SUB_R12_FROM_PTR_R9_(VALUE) sub r12, qword ptr [r9 + VALUE]
#define SUB_R12_FROM_PTR_R10_(VALUE) sub r12, qword ptr [r10 + VALUE]
#define SUB_R12_FROM_PTR_R11_(VALUE) sub r12, qword ptr [r11 + VALUE]
#define SUB_R12_FROM_PTR_R12_(VALUE) sub r12, qword ptr [r12 + VALUE]
#define SUB_R12_FROM_PTR_R13_(VALUE) sub r12, qword ptr [r13 + VALUE]
#define SUB_R12_FROM_PTR_R14_(VALUE) sub r12, qword ptr [r14 + VALUE]
#define SUB_R12_FROM_PTR_R15_(VALUE) sub r12, qword ptr [r15 + VALUE]
#define SUB_R12_FROM_PTR_EAX_(VALUE) sub r12, qword ptr [eax + VALUE]
#define SUB_R12_FROM_PTR_EBX_(VALUE) sub r12, qword ptr [ebx + VALUE]
#define SUB_R12_FROM_PTR_ECX_(VALUE) sub r12, qword ptr [ecx + VALUE]
#define SUB_R12_FROM_PTR_EDX_(VALUE) sub r12, qword ptr [edx + VALUE]
#define SUB_R12_FROM_PTR_EDI_(VALUE) sub r12, qword ptr [edi + VALUE]
#define SUB_R12_FROM_PTR_ESI_(VALUE) sub r12, qword ptr [esi + VALUE]
#define SUB_R12_FROM_PTR_EBP_(VALUE) sub r12, qword ptr [ebp + VALUE]
#define SUB_R12_FROM_PTR_ESP_(VALUE) sub r12, qword ptr [esp + VALUE]

#define SUB_R13_FROM_PTR_RAX_(VALUE) sub r13, qword ptr [rax + VALUE]
#define SUB_R13_FROM_PTR_RBX_(VALUE) sub r13, qword ptr [rbx + VALUE]
#define SUB_R13_FROM_PTR_RCX_(VALUE) sub r13, qword ptr [rcx + VALUE]
#define SUB_R13_FROM_PTR_RDX_(VALUE) sub r13, qword ptr [rdx + VALUE]
#define SUB_R13_FROM_PTR_RDI_(VALUE) sub r13, qword ptr [rdi + VALUE]
#define SUB_R13_FROM_PTR_RSI_(VALUE) sub r13, qword ptr [rsi + VALUE]
#define SUB_R13_FROM_PTR_RBP_(VALUE) sub r13, qword ptr [rbp + VALUE]
#define SUB_R13_FROM_PTR_RSP_(VALUE) sub r13, qword ptr [rsp + VALUE]
#define SUB_R13_FROM_PTR_R8_(VALUE) sub r13, qword ptr [r8 + VALUE]
#define SUB_R13_FROM_PTR_R9_(VALUE) sub r13, qword ptr [r9 + VALUE]
#define SUB_R13_FROM_PTR_R10_(VALUE) sub r13, qword ptr [r10 + VALUE]
#define SUB_R13_FROM_PTR_R11_(VALUE) sub r13, qword ptr [r11 + VALUE]
#define SUB_R13_FROM_PTR_R12_(VALUE) sub r13, qword ptr [r12 + VALUE]
#define SUB_R13_FROM_PTR_R13_(VALUE) sub r13, qword ptr [r13 + VALUE]
#define SUB_R13_FROM_PTR_R14_(VALUE) sub r13, qword ptr [r14 + VALUE]
#define SUB_R13_FROM_PTR_R15_(VALUE) sub r13, qword ptr [r15 + VALUE]
#define SUB_R13_FROM_PTR_EAX_(VALUE) sub r13, qword ptr [eax + VALUE]
#define SUB_R13_FROM_PTR_EBX_(VALUE) sub r13, qword ptr [ebx + VALUE]
#define SUB_R13_FROM_PTR_ECX_(VALUE) sub r13, qword ptr [ecx + VALUE]
#define SUB_R13_FROM_PTR_EDX_(VALUE) sub r13, qword ptr [edx + VALUE]
#define SUB_R13_FROM_PTR_EDI_(VALUE) sub r13, qword ptr [edi + VALUE]
#define SUB_R13_FROM_PTR_ESI_(VALUE) sub r13, qword ptr [esi + VALUE]
#define SUB_R13_FROM_PTR_EBP_(VALUE) sub r13, qword ptr [ebp + VALUE]
#define SUB_R13_FROM_PTR_ESP_(VALUE) sub r13, qword ptr [esp + VALUE]

#define SUB_R14_FROM_PTR_RAX_(VALUE) sub r14, qword ptr [rax + VALUE]
#define SUB_R14_FROM_PTR_RBX_(VALUE) sub r14, qword ptr [rbx + VALUE]
#define SUB_R14_FROM_PTR_RCX_(VALUE) sub r14, qword ptr [rcx + VALUE]
#define SUB_R14_FROM_PTR_RDX_(VALUE) sub r14, qword ptr [rdx + VALUE]
#define SUB_R14_FROM_PTR_RDI_(VALUE) sub r14, qword ptr [rdi + VALUE]
#define SUB_R14_FROM_PTR_RSI_(VALUE) sub r14, qword ptr [rsi + VALUE]
#define SUB_R14_FROM_PTR_RBP_(VALUE) sub r14, qword ptr [rbp + VALUE]
#define SUB_R14_FROM_PTR_RSP_(VALUE) sub r14, qword ptr [rsp + VALUE]
#define SUB_R14_FROM_PTR_R8_(VALUE) sub r14, qword ptr [r8 + VALUE]
#define SUB_R14_FROM_PTR_R9_(VALUE) sub r14, qword ptr [r9 + VALUE]
#define SUB_R14_FROM_PTR_R10_(VALUE) sub r14, qword ptr [r10 + VALUE]
#define SUB_R14_FROM_PTR_R11_(VALUE) sub r14, qword ptr [r11 + VALUE]
#define SUB_R14_FROM_PTR_R12_(VALUE) sub r14, qword ptr [r12 + VALUE]
#define SUB_R14_FROM_PTR_R13_(VALUE) sub r14, qword ptr [r13 + VALUE]
#define SUB_R14_FROM_PTR_R14_(VALUE) sub r14, qword ptr [r14 + VALUE]
#define SUB_R14_FROM_PTR_R15_(VALUE) sub r14, qword ptr [r15 + VALUE]
#define SUB_R14_FROM_PTR_EAX_(VALUE) sub r14, qword ptr [eax + VALUE]
#define SUB_R14_FROM_PTR_EBX_(VALUE) sub r14, qword ptr [ebx + VALUE]
#define SUB_R14_FROM_PTR_ECX_(VALUE) sub r14, qword ptr [ecx + VALUE]
#define SUB_R14_FROM_PTR_EDX_(VALUE) sub r14, qword ptr [edx + VALUE]
#define SUB_R14_FROM_PTR_EDI_(VALUE) sub r14, qword ptr [edi + VALUE]
#define SUB_R14_FROM_PTR_ESI_(VALUE) sub r14, qword ptr [esi + VALUE]
#define SUB_R14_FROM_PTR_EBP_(VALUE) sub r14, qword ptr [ebp + VALUE]
#define SUB_R14_FROM_PTR_ESP_(VALUE) sub r14, qword ptr [esp + VALUE]

#define SUB_R15_FROM_PTR_RAX_(VALUE) sub r15, qword ptr [rax + VALUE]
#define SUB_R15_FROM_PTR_RBX_(VALUE) sub r15, qword ptr [rbx + VALUE]
#define SUB_R15_FROM_PTR_RCX_(VALUE) sub r15, qword ptr [rcx + VALUE]
#define SUB_R15_FROM_PTR_RDX_(VALUE) sub r15, qword ptr [rdx + VALUE]
#define SUB_R15_FROM_PTR_RDI_(VALUE) sub r15, qword ptr [rdi + VALUE]
#define SUB_R15_FROM_PTR_RSI_(VALUE) sub r15, qword ptr [rsi + VALUE]
#define SUB_R15_FROM_PTR_RBP_(VALUE) sub r15, qword ptr [rbp + VALUE]
#define SUB_R15_FROM_PTR_RSP_(VALUE) sub r15, qword ptr [rsp + VALUE]
#define SUB_R15_FROM_PTR_R8_(VALUE) sub r15, qword ptr [r8 + VALUE]
#define SUB_R15_FROM_PTR_R9_(VALUE) sub r15, qword ptr [r9 + VALUE]
#define SUB_R15_FROM_PTR_R10_(VALUE) sub r15, qword ptr [r10 + VALUE]
#define SUB_R15_FROM_PTR_R11_(VALUE) sub r15, qword ptr [r11 + VALUE]
#define SUB_R15_FROM_PTR_R12_(VALUE) sub r15, qword ptr [r12 + VALUE]
#define SUB_R15_FROM_PTR_R13_(VALUE) sub r15, qword ptr [r13 + VALUE]
#define SUB_R15_FROM_PTR_R14_(VALUE) sub r15, qword ptr [r14 + VALUE]
#define SUB_R15_FROM_PTR_R15_(VALUE) sub r15, qword ptr [r15 + VALUE]
#define SUB_R15_FROM_PTR_EAX_(VALUE) sub r15, qword ptr [eax + VALUE]
#define SUB_R15_FROM_PTR_EBX_(VALUE) sub r15, qword ptr [ebx + VALUE]
#define SUB_R15_FROM_PTR_ECX_(VALUE) sub r15, qword ptr [ecx + VALUE]
#define SUB_R15_FROM_PTR_EDX_(VALUE) sub r15, qword ptr [edx + VALUE]
#define SUB_R15_FROM_PTR_EDI_(VALUE) sub r15, qword ptr [edi + VALUE]
#define SUB_R15_FROM_PTR_ESI_(VALUE) sub r15, qword ptr [esi + VALUE]
#define SUB_R15_FROM_PTR_EBP_(VALUE) sub r15, qword ptr [ebp + VALUE]
#define SUB_R15_FROM_PTR_ESP_(VALUE) sub r15, qword ptr [esp + VALUE]

#define SUB_RAX_TO_PTR_RAX_(VALUE) sub qword ptr [rax + VALUE], rax
#define SUB_RAX_TO_PTR_RBX_(VALUE) sub qword ptr [rbx + VALUE], rax
#define SUB_RAX_TO_PTR_RCX_(VALUE) sub qword ptr [rcx + VALUE], rax
#define SUB_RAX_TO_PTR_RDX_(VALUE) sub qword ptr [rdx + VALUE], rax
#define SUB_RAX_TO_PTR_RDI_(VALUE) sub qword ptr [rdi + VALUE], rax
#define SUB_RAX_TO_PTR_RSI_(VALUE) sub qword ptr [rsi + VALUE], rax
#define SUB_RAX_TO_PTR_RBP_(VALUE) sub qword ptr [rbp + VALUE], rax
#define SUB_RAX_TO_PTR_RSP_(VALUE) sub qword ptr [rsp + VALUE], rax
#define SUB_RAX_TO_PTR_R8_(VALUE) sub qword ptr [r8 + VALUE], rax
#define SUB_RAX_TO_PTR_R9_(VALUE) sub qword ptr [r9 + VALUE], rax
#define SUB_RAX_TO_PTR_R10_(VALUE) sub qword ptr [r10 + VALUE], rax
#define SUB_RAX_TO_PTR_R11_(VALUE) sub qword ptr [r11 + VALUE], rax
#define SUB_RAX_TO_PTR_R12_(VALUE) sub qword ptr [r12 + VALUE], rax
#define SUB_RAX_TO_PTR_R13_(VALUE) sub qword ptr [r13 + VALUE], rax
#define SUB_RAX_TO_PTR_R14_(VALUE) sub qword ptr [r14 + VALUE], rax
#define SUB_RAX_TO_PTR_R15_(VALUE) sub qword ptr [r15 + VALUE], rax
#define SUB_RAX_TO_PTR_EAX_(VALUE) sub qword ptr [eax + VALUE], rax
#define SUB_RAX_TO_PTR_EBX_(VALUE) sub qword ptr [ebx + VALUE], rax
#define SUB_RAX_TO_PTR_ECX_(VALUE) sub qword ptr [ecx + VALUE], rax
#define SUB_RAX_TO_PTR_EDX_(VALUE) sub qword ptr [edx + VALUE], rax
#define SUB_RAX_TO_PTR_EDI_(VALUE) sub qword ptr [edi + VALUE], rax
#define SUB_RAX_TO_PTR_ESI_(VALUE) sub qword ptr [esi + VALUE], rax
#define SUB_RAX_TO_PTR_EBP_(VALUE) sub qword ptr [ebp + VALUE], rax
#define SUB_RAX_TO_PTR_ESP_(VALUE) sub qword ptr [esp + VALUE], rax

#define SUB_RBX_TO_PTR_RAX_(VALUE) sub qword ptr [rax + VALUE], rbx
#define SUB_RBX_TO_PTR_RBX_(VALUE) sub qword ptr [rbx + VALUE], rbx
#define SUB_RBX_TO_PTR_RCX_(VALUE) sub qword ptr [rcx + VALUE], rbx
#define SUB_RBX_TO_PTR_RDX_(VALUE) sub qword ptr [rdx + VALUE], rbx
#define SUB_RBX_TO_PTR_RDI_(VALUE) sub qword ptr [rdi + VALUE], rbx
#define SUB_RBX_TO_PTR_RSI_(VALUE) sub qword ptr [rsi + VALUE], rbx
#define SUB_RBX_TO_PTR_RBP_(VALUE) sub qword ptr [rbp + VALUE], rbx
#define SUB_RBX_TO_PTR_RSP_(VALUE) sub qword ptr [rsp + VALUE], rbx
#define SUB_RBX_TO_PTR_R8_(VALUE) sub qword ptr [r8 + VALUE], rbx
#define SUB_RBX_TO_PTR_R9_(VALUE) sub qword ptr [r9 + VALUE], rbx
#define SUB_RBX_TO_PTR_R10_(VALUE) sub qword ptr [r10 + VALUE], rbx
#define SUB_RBX_TO_PTR_R11_(VALUE) sub qword ptr [r11 + VALUE], rbx
#define SUB_RBX_TO_PTR_R12_(VALUE) sub qword ptr [r12 + VALUE], rbx
#define SUB_RBX_TO_PTR_R13_(VALUE) sub qword ptr [r13 + VALUE], rbx
#define SUB_RBX_TO_PTR_R14_(VALUE) sub qword ptr [r14 + VALUE], rbx
#define SUB_RBX_TO_PTR_R15_(VALUE) sub qword ptr [r15 + VALUE], rbx
#define SUB_RBX_TO_PTR_EAX_(VALUE) sub qword ptr [eax + VALUE], rbx
#define SUB_RBX_TO_PTR_EBX_(VALUE) sub qword ptr [ebx + VALUE], rbx
#define SUB_RBX_TO_PTR_ECX_(VALUE) sub qword ptr [ecx + VALUE], rbx
#define SUB_RBX_TO_PTR_EDX_(VALUE) sub qword ptr [edx + VALUE], rbx
#define SUB_RBX_TO_PTR_EDI_(VALUE) sub qword ptr [edi + VALUE], rbx
#define SUB_RBX_TO_PTR_ESI_(VALUE) sub qword ptr [esi + VALUE], rbx
#define SUB_RBX_TO_PTR_EBP_(VALUE) sub qword ptr [ebp + VALUE], rbx
#define SUB_RBX_TO_PTR_ESP_(VALUE) sub qword ptr [esp + VALUE], rbx

#define SUB_RCX_TO_PTR_RAX_(VALUE) sub qword ptr [rax + VALUE], rcx
#define SUB_RCX_TO_PTR_RBX_(VALUE) sub qword ptr [rbx + VALUE], rcx
#define SUB_RCX_TO_PTR_RCX_(VALUE) sub qword ptr [rcx + VALUE], rcx
#define SUB_RCX_TO_PTR_RDX_(VALUE) sub qword ptr [rdx + VALUE], rcx
#define SUB_RCX_TO_PTR_RDI_(VALUE) sub qword ptr [rdi + VALUE], rcx
#define SUB_RCX_TO_PTR_RSI_(VALUE) sub qword ptr [rsi + VALUE], rcx
#define SUB_RCX_TO_PTR_RBP_(VALUE) sub qword ptr [rbp + VALUE], rcx
#define SUB_RCX_TO_PTR_RSP_(VALUE) sub qword ptr [rsp + VALUE], rcx
#define SUB_RCX_TO_PTR_R8_(VALUE) sub qword ptr [r8 + VALUE], rcx
#define SUB_RCX_TO_PTR_R9_(VALUE) sub qword ptr [r9 + VALUE], rcx
#define SUB_RCX_TO_PTR_R10_(VALUE) sub qword ptr [r10 + VALUE], rcx
#define SUB_RCX_TO_PTR_R11_(VALUE) sub qword ptr [r11 + VALUE], rcx
#define SUB_RCX_TO_PTR_R12_(VALUE) sub qword ptr [r12 + VALUE], rcx
#define SUB_RCX_TO_PTR_R13_(VALUE) sub qword ptr [r13 + VALUE], rcx
#define SUB_RCX_TO_PTR_R14_(VALUE) sub qword ptr [r14 + VALUE], rcx
#define SUB_RCX_TO_PTR_R15_(VALUE) sub qword ptr [r15 + VALUE], rcx
#define SUB_RCX_TO_PTR_EAX_(VALUE) sub qword ptr [eax + VALUE], rcx
#define SUB_RCX_TO_PTR_EBX_(VALUE) sub qword ptr [ebx + VALUE], rcx
#define SUB_RCX_TO_PTR_ECX_(VALUE) sub qword ptr [ecx + VALUE], rcx
#define SUB_RCX_TO_PTR_EDX_(VALUE) sub qword ptr [edx + VALUE], rcx
#define SUB_RCX_TO_PTR_EDI_(VALUE) sub qword ptr [edi + VALUE], rcx
#define SUB_RCX_TO_PTR_ESI_(VALUE) sub qword ptr [esi + VALUE], rcx
#define SUB_RCX_TO_PTR_EBP_(VALUE) sub qword ptr [ebp + VALUE], rcx
#define SUB_RCX_TO_PTR_ESP_(VALUE) sub qword ptr [esp + VALUE], rcx

#define SUB_RDX_TO_PTR_RAX_(VALUE) sub qword ptr [rax + VALUE], rdx
#define SUB_RDX_TO_PTR_RBX_(VALUE) sub qword ptr [rbx + VALUE], rdx
#define SUB_RDX_TO_PTR_RCX_(VALUE) sub qword ptr [rcx + VALUE], rdx
#define SUB_RDX_TO_PTR_RDX_(VALUE) sub qword ptr [rdx + VALUE], rdx
#define SUB_RDX_TO_PTR_RDI_(VALUE) sub qword ptr [rdi + VALUE], rdx
#define SUB_RDX_TO_PTR_RSI_(VALUE) sub qword ptr [rsi + VALUE], rdx
#define SUB_RDX_TO_PTR_RBP_(VALUE) sub qword ptr [rbp + VALUE], rdx
#define SUB_RDX_TO_PTR_RSP_(VALUE) sub qword ptr [rsp + VALUE], rdx
#define SUB_RDX_TO_PTR_R8_(VALUE) sub qword ptr [r8 + VALUE], rdx
#define SUB_RDX_TO_PTR_R9_(VALUE) sub qword ptr [r9 + VALUE], rdx
#define SUB_RDX_TO_PTR_R10_(VALUE) sub qword ptr [r10 + VALUE], rdx
#define SUB_RDX_TO_PTR_R11_(VALUE) sub qword ptr [r11 + VALUE], rdx
#define SUB_RDX_TO_PTR_R12_(VALUE) sub qword ptr [r12 + VALUE], rdx
#define SUB_RDX_TO_PTR_R13_(VALUE) sub qword ptr [r13 + VALUE], rdx
#define SUB_RDX_TO_PTR_R14_(VALUE) sub qword ptr [r14 + VALUE], rdx
#define SUB_RDX_TO_PTR_R15_(VALUE) sub qword ptr [r15 + VALUE], rdx
#define SUB_RDX_TO_PTR_EAX_(VALUE) sub qword ptr [eax + VALUE], rdx
#define SUB_RDX_TO_PTR_EBX_(VALUE) sub qword ptr [ebx + VALUE], rdx
#define SUB_RDX_TO_PTR_ECX_(VALUE) sub qword ptr [ecx + VALUE], rdx
#define SUB_RDX_TO_PTR_EDX_(VALUE) sub qword ptr [edx + VALUE], rdx
#define SUB_RDX_TO_PTR_EDI_(VALUE) sub qword ptr [edi + VALUE], rdx
#define SUB_RDX_TO_PTR_ESI_(VALUE) sub qword ptr [esi + VALUE], rdx
#define SUB_RDX_TO_PTR_EBP_(VALUE) sub qword ptr [ebp + VALUE], rdx
#define SUB_RDX_TO_PTR_ESP_(VALUE) sub qword ptr [esp + VALUE], rdx

#define SUB_RDI_TO_PTR_RAX_(VALUE) sub qword ptr [rax + VALUE], rdi
#define SUB_RDI_TO_PTR_RBX_(VALUE) sub qword ptr [rbx + VALUE], rdi
#define SUB_RDI_TO_PTR_RCX_(VALUE) sub qword ptr [rcx + VALUE], rdi
#define SUB_RDI_TO_PTR_RDX_(VALUE) sub qword ptr [rdx + VALUE], rdi
#define SUB_RDI_TO_PTR_RDI_(VALUE) sub qword ptr [rdi + VALUE], rdi
#define SUB_RDI_TO_PTR_RSI_(VALUE) sub qword ptr [rsi + VALUE], rdi
#define SUB_RDI_TO_PTR_RBP_(VALUE) sub qword ptr [rbp + VALUE], rdi
#define SUB_RDI_TO_PTR_RSP_(VALUE) sub qword ptr [rsp + VALUE], rdi
#define SUB_RDI_TO_PTR_R8_(VALUE) sub qword ptr [r8 + VALUE], rdi
#define SUB_RDI_TO_PTR_R9_(VALUE) sub qword ptr [r9 + VALUE], rdi
#define SUB_RDI_TO_PTR_R10_(VALUE) sub qword ptr [r10 + VALUE], rdi
#define SUB_RDI_TO_PTR_R11_(VALUE) sub qword ptr [r11 + VALUE], rdi
#define SUB_RDI_TO_PTR_R12_(VALUE) sub qword ptr [r12 + VALUE], rdi
#define SUB_RDI_TO_PTR_R13_(VALUE) sub qword ptr [r13 + VALUE], rdi
#define SUB_RDI_TO_PTR_R14_(VALUE) sub qword ptr [r14 + VALUE], rdi
#define SUB_RDI_TO_PTR_R15_(VALUE) sub qword ptr [r15 + VALUE], rdi
#define SUB_RDI_TO_PTR_EAX_(VALUE) sub qword ptr [eax + VALUE], rdi
#define SUB_RDI_TO_PTR_EBX_(VALUE) sub qword ptr [ebx + VALUE], rdi
#define SUB_RDI_TO_PTR_ECX_(VALUE) sub qword ptr [ecx + VALUE], rdi
#define SUB_RDI_TO_PTR_EDX_(VALUE) sub qword ptr [edx + VALUE], rdi
#define SUB_RDI_TO_PTR_EDI_(VALUE) sub qword ptr [edi + VALUE], rdi
#define SUB_RDI_TO_PTR_ESI_(VALUE) sub qword ptr [esi + VALUE], rdi
#define SUB_RDI_TO_PTR_EBP_(VALUE) sub qword ptr [ebp + VALUE], rdi
#define SUB_RDI_TO_PTR_ESP_(VALUE) sub qword ptr [esp + VALUE], rdi

#define SUB_RSI_TO_PTR_RAX_(VALUE) sub qword ptr [rax + VALUE], rsi
#define SUB_RSI_TO_PTR_RBX_(VALUE) sub qword ptr [rbx + VALUE], rsi
#define SUB_RSI_TO_PTR_RCX_(VALUE) sub qword ptr [rcx + VALUE], rsi
#define SUB_RSI_TO_PTR_RDX_(VALUE) sub qword ptr [rdx + VALUE], rsi
#define SUB_RSI_TO_PTR_RDI_(VALUE) sub qword ptr [rdi + VALUE], rsi
#define SUB_RSI_TO_PTR_RSI_(VALUE) sub qword ptr [rsi + VALUE], rsi
#define SUB_RSI_TO_PTR_RBP_(VALUE) sub qword ptr [rbp + VALUE], rsi
#define SUB_RSI_TO_PTR_RSP_(VALUE) sub qword ptr [rsp + VALUE], rsi
#define SUB_RSI_TO_PTR_R8_(VALUE) sub qword ptr [r8 + VALUE], rsi
#define SUB_RSI_TO_PTR_R9_(VALUE) sub qword ptr [r9 + VALUE], rsi
#define SUB_RSI_TO_PTR_R10_(VALUE) sub qword ptr [r10 + VALUE], rsi
#define SUB_RSI_TO_PTR_R11_(VALUE) sub qword ptr [r11 + VALUE], rsi
#define SUB_RSI_TO_PTR_R12_(VALUE) sub qword ptr [r12 + VALUE], rsi
#define SUB_RSI_TO_PTR_R13_(VALUE) sub qword ptr [r13 + VALUE], rsi
#define SUB_RSI_TO_PTR_R14_(VALUE) sub qword ptr [r14 + VALUE], rsi
#define SUB_RSI_TO_PTR_R15_(VALUE) sub qword ptr [r15 + VALUE], rsi
#define SUB_RSI_TO_PTR_EAX_(VALUE) sub qword ptr [eax + VALUE], rsi
#define SUB_RSI_TO_PTR_EBX_(VALUE) sub qword ptr [ebx + VALUE], rsi
#define SUB_RSI_TO_PTR_ECX_(VALUE) sub qword ptr [ecx + VALUE], rsi
#define SUB_RSI_TO_PTR_EDX_(VALUE) sub qword ptr [edx + VALUE], rsi
#define SUB_RSI_TO_PTR_EDI_(VALUE) sub qword ptr [edi + VALUE], rsi
#define SUB_RSI_TO_PTR_ESI_(VALUE) sub qword ptr [esi + VALUE], rsi
#define SUB_RSI_TO_PTR_EBP_(VALUE) sub qword ptr [ebp + VALUE], rsi
#define SUB_RSI_TO_PTR_ESP_(VALUE) sub qword ptr [esp + VALUE], rsi

#define SUB_RBP_TO_PTR_RAX_(VALUE) sub qword ptr [rax + VALUE], rbp
#define SUB_RBP_TO_PTR_RBX_(VALUE) sub qword ptr [rbx + VALUE], rbp
#define SUB_RBP_TO_PTR_RCX_(VALUE) sub qword ptr [rcx + VALUE], rbp
#define SUB_RBP_TO_PTR_RDX_(VALUE) sub qword ptr [rdx + VALUE], rbp
#define SUB_RBP_TO_PTR_RDI_(VALUE) sub qword ptr [rdi + VALUE], rbp
#define SUB_RBP_TO_PTR_RSI_(VALUE) sub qword ptr [rsi + VALUE], rbp
#define SUB_RBP_TO_PTR_RBP_(VALUE) sub qword ptr [rbp + VALUE], rbp
#define SUB_RBP_TO_PTR_RSP_(VALUE) sub qword ptr [rsp + VALUE], rbp
#define SUB_RBP_TO_PTR_R8_(VALUE) sub qword ptr [r8 + VALUE], rbp
#define SUB_RBP_TO_PTR_R9_(VALUE) sub qword ptr [r9 + VALUE], rbp
#define SUB_RBP_TO_PTR_R10_(VALUE) sub qword ptr [r10 + VALUE], rbp
#define SUB_RBP_TO_PTR_R11_(VALUE) sub qword ptr [r11 + VALUE], rbp
#define SUB_RBP_TO_PTR_R12_(VALUE) sub qword ptr [r12 + VALUE], rbp
#define SUB_RBP_TO_PTR_R13_(VALUE) sub qword ptr [r13 + VALUE], rbp
#define SUB_RBP_TO_PTR_R14_(VALUE) sub qword ptr [r14 + VALUE], rbp
#define SUB_RBP_TO_PTR_R15_(VALUE) sub qword ptr [r15 + VALUE], rbp
#define SUB_RBP_TO_PTR_EAX_(VALUE) sub qword ptr [eax + VALUE], rbp
#define SUB_RBP_TO_PTR_EBX_(VALUE) sub qword ptr [ebx + VALUE], rbp
#define SUB_RBP_TO_PTR_ECX_(VALUE) sub qword ptr [ecx + VALUE], rbp
#define SUB_RBP_TO_PTR_EDX_(VALUE) sub qword ptr [edx + VALUE], rbp
#define SUB_RBP_TO_PTR_EDI_(VALUE) sub qword ptr [edi + VALUE], rbp
#define SUB_RBP_TO_PTR_ESI_(VALUE) sub qword ptr [esi + VALUE], rbp
#define SUB_RBP_TO_PTR_EBP_(VALUE) sub qword ptr [ebp + VALUE], rbp
#define SUB_RBP_TO_PTR_ESP_(VALUE) sub qword ptr [esp + VALUE], rbp

#define SUB_RSP_TO_PTR_RAX_(VALUE) sub qword ptr [rax + VALUE], rsp
#define SUB_RSP_TO_PTR_RBX_(VALUE) sub qword ptr [rbx + VALUE], rsp
#define SUB_RSP_TO_PTR_RCX_(VALUE) sub qword ptr [rcx + VALUE], rsp
#define SUB_RSP_TO_PTR_RDX_(VALUE) sub qword ptr [rdx + VALUE], rsp
#define SUB_RSP_TO_PTR_RDI_(VALUE) sub qword ptr [rdi + VALUE], rsp
#define SUB_RSP_TO_PTR_RSI_(VALUE) sub qword ptr [rsi + VALUE], rsp
#define SUB_RSP_TO_PTR_RBP_(VALUE) sub qword ptr [rbp + VALUE], rsp
#define SUB_RSP_TO_PTR_RSP_(VALUE) sub qword ptr [rsp + VALUE], rsp
#define SUB_RSP_TO_PTR_R8_(VALUE) sub qword ptr [r8 + VALUE], rsp
#define SUB_RSP_TO_PTR_R9_(VALUE) sub qword ptr [r9 + VALUE], rsp
#define SUB_RSP_TO_PTR_R10_(VALUE) sub qword ptr [r10 + VALUE], rsp
#define SUB_RSP_TO_PTR_R11_(VALUE) sub qword ptr [r11 + VALUE], rsp
#define SUB_RSP_TO_PTR_R12_(VALUE) sub qword ptr [r12 + VALUE], rsp
#define SUB_RSP_TO_PTR_R13_(VALUE) sub qword ptr [r13 + VALUE], rsp
#define SUB_RSP_TO_PTR_R14_(VALUE) sub qword ptr [r14 + VALUE], rsp
#define SUB_RSP_TO_PTR_R15_(VALUE) sub qword ptr [r15 + VALUE], rsp
#define SUB_RSP_TO_PTR_EAX_(VALUE) sub qword ptr [eax + VALUE], rsp
#define SUB_RSP_TO_PTR_EBX_(VALUE) sub qword ptr [ebx + VALUE], rsp
#define SUB_RSP_TO_PTR_ECX_(VALUE) sub qword ptr [ecx + VALUE], rsp
#define SUB_RSP_TO_PTR_EDX_(VALUE) sub qword ptr [edx + VALUE], rsp
#define SUB_RSP_TO_PTR_EDI_(VALUE) sub qword ptr [edi + VALUE], rsp
#define SUB_RSP_TO_PTR_ESI_(VALUE) sub qword ptr [esi + VALUE], rsp
#define SUB_RSP_TO_PTR_EBP_(VALUE) sub qword ptr [ebp + VALUE], rsp
#define SUB_RSP_TO_PTR_ESP_(VALUE) sub qword ptr [esp + VALUE], rsp

#define SUB_R8_TO_PTR_RAX_(VALUE) sub qword ptr [rax + VALUE], r8
#define SUB_R8_TO_PTR_RBX_(VALUE) sub qword ptr [rbx + VALUE], r8
#define SUB_R8_TO_PTR_RCX_(VALUE) sub qword ptr [rcx + VALUE], r8
#define SUB_R8_TO_PTR_RDX_(VALUE) sub qword ptr [rdx + VALUE], r8
#define SUB_R8_TO_PTR_RDI_(VALUE) sub qword ptr [rdi + VALUE], r8
#define SUB_R8_TO_PTR_RSI_(VALUE) sub qword ptr [rsi + VALUE], r8
#define SUB_R8_TO_PTR_RBP_(VALUE) sub qword ptr [rbp + VALUE], r8
#define SUB_R8_TO_PTR_RSP_(VALUE) sub qword ptr [rsp + VALUE], r8
#define SUB_R8_TO_PTR_R8_(VALUE) sub qword ptr [r8 + VALUE], r8
#define SUB_R8_TO_PTR_R9_(VALUE) sub qword ptr [r9 + VALUE], r8
#define SUB_R8_TO_PTR_R10_(VALUE) sub qword ptr [r10 + VALUE], r8
#define SUB_R8_TO_PTR_R11_(VALUE) sub qword ptr [r11 + VALUE], r8
#define SUB_R8_TO_PTR_R12_(VALUE) sub qword ptr [r12 + VALUE], r8
#define SUB_R8_TO_PTR_R13_(VALUE) sub qword ptr [r13 + VALUE], r8
#define SUB_R8_TO_PTR_R14_(VALUE) sub qword ptr [r14 + VALUE], r8
#define SUB_R8_TO_PTR_R15_(VALUE) sub qword ptr [r15 + VALUE], r8
#define SUB_R8_TO_PTR_EAX_(VALUE) sub qword ptr [eax + VALUE], r8
#define SUB_R8_TO_PTR_EBX_(VALUE) sub qword ptr [ebx + VALUE], r8
#define SUB_R8_TO_PTR_ECX_(VALUE) sub qword ptr [ecx + VALUE], r8
#define SUB_R8_TO_PTR_EDX_(VALUE) sub qword ptr [edx + VALUE], r8
#define SUB_R8_TO_PTR_EDI_(VALUE) sub qword ptr [edi + VALUE], r8
#define SUB_R8_TO_PTR_ESI_(VALUE) sub qword ptr [esi + VALUE], r8
#define SUB_R8_TO_PTR_EBP_(VALUE) sub qword ptr [ebp + VALUE], r8
#define SUB_R8_TO_PTR_ESP_(VALUE) sub qword ptr [esp + VALUE], r8

#define SUB_R9_TO_PTR_RAX_(VALUE) sub qword ptr [rax + VALUE], r9
#define SUB_R9_TO_PTR_RBX_(VALUE) sub qword ptr [rbx + VALUE], r9
#define SUB_R9_TO_PTR_RCX_(VALUE) sub qword ptr [rcx + VALUE], r9
#define SUB_R9_TO_PTR_RDX_(VALUE) sub qword ptr [rdx + VALUE], r9
#define SUB_R9_TO_PTR_RDI_(VALUE) sub qword ptr [rdi + VALUE], r9
#define SUB_R9_TO_PTR_RSI_(VALUE) sub qword ptr [rsi + VALUE], r9
#define SUB_R9_TO_PTR_RBP_(VALUE) sub qword ptr [rbp + VALUE], r9
#define SUB_R9_TO_PTR_RSP_(VALUE) sub qword ptr [rsp + VALUE], r9
#define SUB_R9_TO_PTR_R8_(VALUE) sub qword ptr [r8 + VALUE], r9
#define SUB_R9_TO_PTR_R9_(VALUE) sub qword ptr [r9 + VALUE], r9
#define SUB_R9_TO_PTR_R10_(VALUE) sub qword ptr [r10 + VALUE], r9
#define SUB_R9_TO_PTR_R11_(VALUE) sub qword ptr [r11 + VALUE], r9
#define SUB_R9_TO_PTR_R12_(VALUE) sub qword ptr [r12 + VALUE], r9
#define SUB_R9_TO_PTR_R13_(VALUE) sub qword ptr [r13 + VALUE], r9
#define SUB_R9_TO_PTR_R14_(VALUE) sub qword ptr [r14 + VALUE], r9
#define SUB_R9_TO_PTR_R15_(VALUE) sub qword ptr [r15 + VALUE], r9
#define SUB_R9_TO_PTR_EAX_(VALUE) sub qword ptr [eax + VALUE], r9
#define SUB_R9_TO_PTR_EBX_(VALUE) sub qword ptr [ebx + VALUE], r9
#define SUB_R9_TO_PTR_ECX_(VALUE) sub qword ptr [ecx + VALUE], r9
#define SUB_R9_TO_PTR_EDX_(VALUE) sub qword ptr [edx + VALUE], r9
#define SUB_R9_TO_PTR_EDI_(VALUE) sub qword ptr [edi + VALUE], r9
#define SUB_R9_TO_PTR_ESI_(VALUE) sub qword ptr [esi + VALUE], r9
#define SUB_R9_TO_PTR_EBP_(VALUE) sub qword ptr [ebp + VALUE], r9
#define SUB_R9_TO_PTR_ESP_(VALUE) sub qword ptr [esp + VALUE], r9

#define SUB_R10_TO_PTR_RAX_(VALUE) sub qword ptr [rax + VALUE], r10
#define SUB_R10_TO_PTR_RBX_(VALUE) sub qword ptr [rbx + VALUE], r10
#define SUB_R10_TO_PTR_RCX_(VALUE) sub qword ptr [rcx + VALUE], r10
#define SUB_R10_TO_PTR_RDX_(VALUE) sub qword ptr [rdx + VALUE], r10
#define SUB_R10_TO_PTR_RDI_(VALUE) sub qword ptr [rdi + VALUE], r10
#define SUB_R10_TO_PTR_RSI_(VALUE) sub qword ptr [rsi + VALUE], r10
#define SUB_R10_TO_PTR_RBP_(VALUE) sub qword ptr [rbp + VALUE], r10
#define SUB_R10_TO_PTR_RSP_(VALUE) sub qword ptr [rsp + VALUE], r10
#define SUB_R10_TO_PTR_R8_(VALUE) sub qword ptr [r8 + VALUE], r10
#define SUB_R10_TO_PTR_R9_(VALUE) sub qword ptr [r9 + VALUE], r10
#define SUB_R10_TO_PTR_R10_(VALUE) sub qword ptr [r10 + VALUE], r10
#define SUB_R10_TO_PTR_R11_(VALUE) sub qword ptr [r11 + VALUE], r10
#define SUB_R10_TO_PTR_R12_(VALUE) sub qword ptr [r12 + VALUE], r10
#define SUB_R10_TO_PTR_R13_(VALUE) sub qword ptr [r13 + VALUE], r10
#define SUB_R10_TO_PTR_R14_(VALUE) sub qword ptr [r14 + VALUE], r10
#define SUB_R10_TO_PTR_R15_(VALUE) sub qword ptr [r15 + VALUE], r10
#define SUB_R10_TO_PTR_EAX_(VALUE) sub qword ptr [eax + VALUE], r10
#define SUB_R10_TO_PTR_EBX_(VALUE) sub qword ptr [ebx + VALUE], r10
#define SUB_R10_TO_PTR_ECX_(VALUE) sub qword ptr [ecx + VALUE], r10
#define SUB_R10_TO_PTR_EDX_(VALUE) sub qword ptr [edx + VALUE], r10
#define SUB_R10_TO_PTR_EDI_(VALUE) sub qword ptr [edi + VALUE], r10
#define SUB_R10_TO_PTR_ESI_(VALUE) sub qword ptr [esi + VALUE], r10
#define SUB_R10_TO_PTR_EBP_(VALUE) sub qword ptr [ebp + VALUE], r10
#define SUB_R10_TO_PTR_ESP_(VALUE) sub qword ptr [esp + VALUE], r10

#define SUB_R11_TO_PTR_RAX_(VALUE) sub qword ptr [rax + VALUE], r11
#define SUB_R11_TO_PTR_RBX_(VALUE) sub qword ptr [rbx + VALUE], r11
#define SUB_R11_TO_PTR_RCX_(VALUE) sub qword ptr [rcx + VALUE], r11
#define SUB_R11_TO_PTR_RDX_(VALUE) sub qword ptr [rdx + VALUE], r11
#define SUB_R11_TO_PTR_RDI_(VALUE) sub qword ptr [rdi + VALUE], r11
#define SUB_R11_TO_PTR_RSI_(VALUE) sub qword ptr [rsi + VALUE], r11
#define SUB_R11_TO_PTR_RBP_(VALUE) sub qword ptr [rbp + VALUE], r11
#define SUB_R11_TO_PTR_RSP_(VALUE) sub qword ptr [rsp + VALUE], r11
#define SUB_R11_TO_PTR_R8_(VALUE) sub qword ptr [r8 + VALUE], r11
#define SUB_R11_TO_PTR_R9_(VALUE) sub qword ptr [r9 + VALUE], r11
#define SUB_R11_TO_PTR_R10_(VALUE) sub qword ptr [r10 + VALUE], r11
#define SUB_R11_TO_PTR_R11_(VALUE) sub qword ptr [r11 + VALUE], r11
#define SUB_R11_TO_PTR_R12_(VALUE) sub qword ptr [r12 + VALUE], r11
#define SUB_R11_TO_PTR_R13_(VALUE) sub qword ptr [r13 + VALUE], r11
#define SUB_R11_TO_PTR_R14_(VALUE) sub qword ptr [r14 + VALUE], r11
#define SUB_R11_TO_PTR_R15_(VALUE) sub qword ptr [r15 + VALUE], r11
#define SUB_R11_TO_PTR_EAX_(VALUE) sub qword ptr [eax + VALUE], r11
#define SUB_R11_TO_PTR_EBX_(VALUE) sub qword ptr [ebx + VALUE], r11
#define SUB_R11_TO_PTR_ECX_(VALUE) sub qword ptr [ecx + VALUE], r11
#define SUB_R11_TO_PTR_EDX_(VALUE) sub qword ptr [edx + VALUE], r11
#define SUB_R11_TO_PTR_EDI_(VALUE) sub qword ptr [edi + VALUE], r11
#define SUB_R11_TO_PTR_ESI_(VALUE) sub qword ptr [esi + VALUE], r11
#define SUB_R11_TO_PTR_EBP_(VALUE) sub qword ptr [ebp + VALUE], r11
#define SUB_R11_TO_PTR_ESP_(VALUE) sub qword ptr [esp + VALUE], r11

#define SUB_R12_TO_PTR_RAX_(VALUE) sub qword ptr [rax + VALUE], r12
#define SUB_R12_TO_PTR_RBX_(VALUE) sub qword ptr [rbx + VALUE], r12
#define SUB_R12_TO_PTR_RCX_(VALUE) sub qword ptr [rcx + VALUE], r12
#define SUB_R12_TO_PTR_RDX_(VALUE) sub qword ptr [rdx + VALUE], r12
#define SUB_R12_TO_PTR_RDI_(VALUE) sub qword ptr [rdi + VALUE], r12
#define SUB_R12_TO_PTR_RSI_(VALUE) sub qword ptr [rsi + VALUE], r12
#define SUB_R12_TO_PTR_RBP_(VALUE) sub qword ptr [rbp + VALUE], r12
#define SUB_R12_TO_PTR_RSP_(VALUE) sub qword ptr [rsp + VALUE], r12
#define SUB_R12_TO_PTR_R8_(VALUE) sub qword ptr [r8 + VALUE], r12
#define SUB_R12_TO_PTR_R9_(VALUE) sub qword ptr [r9 + VALUE], r12
#define SUB_R12_TO_PTR_R10_(VALUE) sub qword ptr [r10 + VALUE], r12
#define SUB_R12_TO_PTR_R11_(VALUE) sub qword ptr [r11 + VALUE], r12
#define SUB_R12_TO_PTR_R12_(VALUE) sub qword ptr [r12 + VALUE], r12
#define SUB_R12_TO_PTR_R13_(VALUE) sub qword ptr [r13 + VALUE], r12
#define SUB_R12_TO_PTR_R14_(VALUE) sub qword ptr [r14 + VALUE], r12
#define SUB_R12_TO_PTR_R15_(VALUE) sub qword ptr [r15 + VALUE], r12
#define SUB_R12_TO_PTR_EAX_(VALUE) sub qword ptr [eax + VALUE], r12
#define SUB_R12_TO_PTR_EBX_(VALUE) sub qword ptr [ebx + VALUE], r12
#define SUB_R12_TO_PTR_ECX_(VALUE) sub qword ptr [ecx + VALUE], r12
#define SUB_R12_TO_PTR_EDX_(VALUE) sub qword ptr [edx + VALUE], r12
#define SUB_R12_TO_PTR_EDI_(VALUE) sub qword ptr [edi + VALUE], r12
#define SUB_R12_TO_PTR_ESI_(VALUE) sub qword ptr [esi + VALUE], r12
#define SUB_R12_TO_PTR_EBP_(VALUE) sub qword ptr [ebp + VALUE], r12
#define SUB_R12_TO_PTR_ESP_(VALUE) sub qword ptr [esp + VALUE], r12

#define SUB_R13_TO_PTR_RAX_(VALUE) sub qword ptr [rax + VALUE], r13
#define SUB_R13_TO_PTR_RBX_(VALUE) sub qword ptr [rbx + VALUE], r13
#define SUB_R13_TO_PTR_RCX_(VALUE) sub qword ptr [rcx + VALUE], r13
#define SUB_R13_TO_PTR_RDX_(VALUE) sub qword ptr [rdx + VALUE], r13
#define SUB_R13_TO_PTR_RDI_(VALUE) sub qword ptr [rdi + VALUE], r13
#define SUB_R13_TO_PTR_RSI_(VALUE) sub qword ptr [rsi + VALUE], r13
#define SUB_R13_TO_PTR_RBP_(VALUE) sub qword ptr [rbp + VALUE], r13
#define SUB_R13_TO_PTR_RSP_(VALUE) sub qword ptr [rsp + VALUE], r13
#define SUB_R13_TO_PTR_R8_(VALUE) sub qword ptr [r8 + VALUE], r13
#define SUB_R13_TO_PTR_R9_(VALUE) sub qword ptr [r9 + VALUE], r13
#define SUB_R13_TO_PTR_R10_(VALUE) sub qword ptr [r10 + VALUE], r13
#define SUB_R13_TO_PTR_R11_(VALUE) sub qword ptr [r11 + VALUE], r13
#define SUB_R13_TO_PTR_R12_(VALUE) sub qword ptr [r12 + VALUE], r13
#define SUB_R13_TO_PTR_R13_(VALUE) sub qword ptr [r13 + VALUE], r13
#define SUB_R13_TO_PTR_R14_(VALUE) sub qword ptr [r14 + VALUE], r13
#define SUB_R13_TO_PTR_R15_(VALUE) sub qword ptr [r15 + VALUE], r13
#define SUB_R13_TO_PTR_EAX_(VALUE) sub qword ptr [eax + VALUE], r13
#define SUB_R13_TO_PTR_EBX_(VALUE) sub qword ptr [ebx + VALUE], r13
#define SUB_R13_TO_PTR_ECX_(VALUE) sub qword ptr [ecx + VALUE], r13
#define SUB_R13_TO_PTR_EDX_(VALUE) sub qword ptr [edx + VALUE], r13
#define SUB_R13_TO_PTR_EDI_(VALUE) sub qword ptr [edi + VALUE], r13
#define SUB_R13_TO_PTR_ESI_(VALUE) sub qword ptr [esi + VALUE], r13
#define SUB_R13_TO_PTR_EBP_(VALUE) sub qword ptr [ebp + VALUE], r13
#define SUB_R13_TO_PTR_ESP_(VALUE) sub qword ptr [esp + VALUE], r13

#define SUB_R14_TO_PTR_RAX_(VALUE) sub qword ptr [rax + VALUE], r14
#define SUB_R14_TO_PTR_RBX_(VALUE) sub qword ptr [rbx + VALUE], r14
#define SUB_R14_TO_PTR_RCX_(VALUE) sub qword ptr [rcx + VALUE], r14
#define SUB_R14_TO_PTR_RDX_(VALUE) sub qword ptr [rdx + VALUE], r14
#define SUB_R14_TO_PTR_RDI_(VALUE) sub qword ptr [rdi + VALUE], r14
#define SUB_R14_TO_PTR_RSI_(VALUE) sub qword ptr [rsi + VALUE], r14
#define SUB_R14_TO_PTR_RBP_(VALUE) sub qword ptr [rbp + VALUE], r14
#define SUB_R14_TO_PTR_RSP_(VALUE) sub qword ptr [rsp + VALUE], r14
#define SUB_R14_TO_PTR_R8_(VALUE) sub qword ptr [r8 + VALUE], r14
#define SUB_R14_TO_PTR_R9_(VALUE) sub qword ptr [r9 + VALUE], r14
#define SUB_R14_TO_PTR_R10_(VALUE) sub qword ptr [r10 + VALUE], r14
#define SUB_R14_TO_PTR_R11_(VALUE) sub qword ptr [r11 + VALUE], r14
#define SUB_R14_TO_PTR_R12_(VALUE) sub qword ptr [r12 + VALUE], r14
#define SUB_R14_TO_PTR_R13_(VALUE) sub qword ptr [r13 + VALUE], r14
#define SUB_R14_TO_PTR_R14_(VALUE) sub qword ptr [r14 + VALUE], r14
#define SUB_R14_TO_PTR_R15_(VALUE) sub qword ptr [r15 + VALUE], r14
#define SUB_R14_TO_PTR_EAX_(VALUE) sub qword ptr [eax + VALUE], r14
#define SUB_R14_TO_PTR_EBX_(VALUE) sub qword ptr [ebx + VALUE], r14
#define SUB_R14_TO_PTR_ECX_(VALUE) sub qword ptr [ecx + VALUE], r14
#define SUB_R14_TO_PTR_EDX_(VALUE) sub qword ptr [edx + VALUE], r14
#define SUB_R14_TO_PTR_EDI_(VALUE) sub qword ptr [edi + VALUE], r14
#define SUB_R14_TO_PTR_ESI_(VALUE) sub qword ptr [esi + VALUE], r14
#define SUB_R14_TO_PTR_EBP_(VALUE) sub qword ptr [ebp + VALUE], r14
#define SUB_R14_TO_PTR_ESP_(VALUE) sub qword ptr [esp + VALUE], r14

#define SUB_R15_TO_PTR_RAX_(VALUE) sub qword ptr [rax + VALUE], r15
#define SUB_R15_TO_PTR_RBX_(VALUE) sub qword ptr [rbx + VALUE], r15
#define SUB_R15_TO_PTR_RCX_(VALUE) sub qword ptr [rcx + VALUE], r15
#define SUB_R15_TO_PTR_RDX_(VALUE) sub qword ptr [rdx + VALUE], r15
#define SUB_R15_TO_PTR_RDI_(VALUE) sub qword ptr [rdi + VALUE], r15
#define SUB_R15_TO_PTR_RSI_(VALUE) sub qword ptr [rsi + VALUE], r15
#define SUB_R15_TO_PTR_RBP_(VALUE) sub qword ptr [rbp + VALUE], r15
#define SUB_R15_TO_PTR_RSP_(VALUE) sub qword ptr [rsp + VALUE], r15
#define SUB_R15_TO_PTR_R8_(VALUE) sub qword ptr [r8 + VALUE], r15
#define SUB_R15_TO_PTR_R9_(VALUE) sub qword ptr [r9 + VALUE], r15
#define SUB_R15_TO_PTR_R10_(VALUE) sub qword ptr [r10 + VALUE], r15
#define SUB_R15_TO_PTR_R11_(VALUE) sub qword ptr [r11 + VALUE], r15
#define SUB_R15_TO_PTR_R12_(VALUE) sub qword ptr [r12 + VALUE], r15
#define SUB_R15_TO_PTR_R13_(VALUE) sub qword ptr [r13 + VALUE], r15
#define SUB_R15_TO_PTR_R14_(VALUE) sub qword ptr [r14 + VALUE], r15
#define SUB_R15_TO_PTR_R15_(VALUE) sub qword ptr [r15 + VALUE], r15
#define SUB_R15_TO_PTR_EAX_(VALUE) sub qword ptr [eax + VALUE], r15
#define SUB_R15_TO_PTR_EBX_(VALUE) sub qword ptr [ebx + VALUE], r15
#define SUB_R15_TO_PTR_ECX_(VALUE) sub qword ptr [ecx + VALUE], r15
#define SUB_R15_TO_PTR_EDX_(VALUE) sub qword ptr [edx + VALUE], r15
#define SUB_R15_TO_PTR_EDI_(VALUE) sub qword ptr [edi + VALUE], r15
#define SUB_R15_TO_PTR_ESI_(VALUE) sub qword ptr [esi + VALUE], r15
#define SUB_R15_TO_PTR_EBP_(VALUE) sub qword ptr [ebp + VALUE], r15
#define SUB_R15_TO_PTR_ESP_(VALUE) sub qword ptr [esp + VALUE], r15
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
