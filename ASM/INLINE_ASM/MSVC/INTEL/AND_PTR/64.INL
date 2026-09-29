#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************* [v] 64-BIT MEMORY [v] ************************** */
#define AND_RAX_FROM_PTR_(VALUE) and rax, qword ptr [VALUE]
#define AND_RBX_FROM_PTR_(VALUE) and rbx, qword ptr [VALUE]
#define AND_RCX_FROM_PTR_(VALUE) and rcx, qword ptr [VALUE]
#define AND_RDX_FROM_PTR_(VALUE) and rdx, qword ptr [VALUE]
#define AND_RDI_FROM_PTR_(VALUE) and rdi, qword ptr [VALUE]
#define AND_RSI_FROM_PTR_(VALUE) and rsi, qword ptr [VALUE]
#define AND_RBP_FROM_PTR_(VALUE) and rbp, qword ptr [VALUE]
#define AND_RSP_FROM_PTR_(VALUE) and rsp, qword ptr [VALUE]
#define AND_R8_FROM_PTR_(VALUE) and r8, qword ptr [VALUE]
#define AND_R9_FROM_PTR_(VALUE) and r9, qword ptr [VALUE]
#define AND_R10_FROM_PTR_(VALUE) and r10, qword ptr [VALUE]
#define AND_R11_FROM_PTR_(VALUE) and r11, qword ptr [VALUE]
#define AND_R12_FROM_PTR_(VALUE) and r12, qword ptr [VALUE]
#define AND_R13_FROM_PTR_(VALUE) and r13, qword ptr [VALUE]
#define AND_R14_FROM_PTR_(VALUE) and r14, qword ptr [VALUE]
#define AND_R15_FROM_PTR_(VALUE) and r15, qword ptr [VALUE]

#define AND_RAX_TO_PTR_(VALUE) and qword ptr [VALUE], rax
#define AND_RBX_TO_PTR_(VALUE) and qword ptr [VALUE], rbx
#define AND_RCX_TO_PTR_(VALUE) and qword ptr [VALUE], rcx
#define AND_RDX_TO_PTR_(VALUE) and qword ptr [VALUE], rdx
#define AND_RDI_TO_PTR_(VALUE) and qword ptr [VALUE], rdi
#define AND_RSI_TO_PTR_(VALUE) and qword ptr [VALUE], rsi
#define AND_RBP_TO_PTR_(VALUE) and qword ptr [VALUE], rbp
#define AND_RSP_TO_PTR_(VALUE) and qword ptr [VALUE], rsp
#define AND_R8_TO_PTR_(VALUE) and qword ptr [VALUE], r8
#define AND_R9_TO_PTR_(VALUE) and qword ptr [VALUE], r9
#define AND_R10_TO_PTR_(VALUE) and qword ptr [VALUE], r10
#define AND_R11_TO_PTR_(VALUE) and qword ptr [VALUE], r11
#define AND_R12_TO_PTR_(VALUE) and qword ptr [VALUE], r12
#define AND_R13_TO_PTR_(VALUE) and qword ptr [VALUE], r13
#define AND_R14_TO_PTR_(VALUE) and qword ptr [VALUE], r14
#define AND_R15_TO_PTR_(VALUE) and qword ptr [VALUE], r15

#define AND_RAX_FROM_PTR_RAX and rax, qword ptr [rax]
#define AND_RAX_FROM_PTR_RBX and rax, qword ptr [rbx]
#define AND_RAX_FROM_PTR_RCX and rax, qword ptr [rcx]
#define AND_RAX_FROM_PTR_RDX and rax, qword ptr [rdx]
#define AND_RAX_FROM_PTR_RDI and rax, qword ptr [rdi]
#define AND_RAX_FROM_PTR_RSI and rax, qword ptr [rsi]
#define AND_RAX_FROM_PTR_RBP and rax, qword ptr [rbp]
#define AND_RAX_FROM_PTR_RSP and rax, qword ptr [rsp]
#define AND_RAX_FROM_PTR_R8 and rax, qword ptr [r8]
#define AND_RAX_FROM_PTR_R9 and rax, qword ptr [r9]
#define AND_RAX_FROM_PTR_R10 and rax, qword ptr [r10]
#define AND_RAX_FROM_PTR_R11 and rax, qword ptr [r11]
#define AND_RAX_FROM_PTR_R12 and rax, qword ptr [r12]
#define AND_RAX_FROM_PTR_R13 and rax, qword ptr [r13]
#define AND_RAX_FROM_PTR_R14 and rax, qword ptr [r14]
#define AND_RAX_FROM_PTR_R15 and rax, qword ptr [r15]
#define AND_RAX_FROM_PTR_EAX and rax, qword ptr [eax]
#define AND_RAX_FROM_PTR_EBX and rax, qword ptr [ebx]
#define AND_RAX_FROM_PTR_ECX and rax, qword ptr [ecx]
#define AND_RAX_FROM_PTR_EDX and rax, qword ptr [edx]
#define AND_RAX_FROM_PTR_EDI and rax, qword ptr [edi]
#define AND_RAX_FROM_PTR_ESI and rax, qword ptr [esi]
#define AND_RAX_FROM_PTR_EBP and rax, qword ptr [ebp]
#define AND_RAX_FROM_PTR_ESP and rax, qword ptr [esp]

#define AND_RBX_FROM_PTR_RAX and rbx, qword ptr [rax]
#define AND_RBX_FROM_PTR_RBX and rbx, qword ptr [rbx]
#define AND_RBX_FROM_PTR_RCX and rbx, qword ptr [rcx]
#define AND_RBX_FROM_PTR_RDX and rbx, qword ptr [rdx]
#define AND_RBX_FROM_PTR_RDI and rbx, qword ptr [rdi]
#define AND_RBX_FROM_PTR_RSI and rbx, qword ptr [rsi]
#define AND_RBX_FROM_PTR_RBP and rbx, qword ptr [rbp]
#define AND_RBX_FROM_PTR_RSP and rbx, qword ptr [rsp]
#define AND_RBX_FROM_PTR_R8 and rbx, qword ptr [r8]
#define AND_RBX_FROM_PTR_R9 and rbx, qword ptr [r9]
#define AND_RBX_FROM_PTR_R10 and rbx, qword ptr [r10]
#define AND_RBX_FROM_PTR_R11 and rbx, qword ptr [r11]
#define AND_RBX_FROM_PTR_R12 and rbx, qword ptr [r12]
#define AND_RBX_FROM_PTR_R13 and rbx, qword ptr [r13]
#define AND_RBX_FROM_PTR_R14 and rbx, qword ptr [r14]
#define AND_RBX_FROM_PTR_R15 and rbx, qword ptr [r15]
#define AND_RBX_FROM_PTR_EAX and rbx, qword ptr [eax]
#define AND_RBX_FROM_PTR_EBX and rbx, qword ptr [ebx]
#define AND_RBX_FROM_PTR_ECX and rbx, qword ptr [ecx]
#define AND_RBX_FROM_PTR_EDX and rbx, qword ptr [edx]
#define AND_RBX_FROM_PTR_EDI and rbx, qword ptr [edi]
#define AND_RBX_FROM_PTR_ESI and rbx, qword ptr [esi]
#define AND_RBX_FROM_PTR_EBP and rbx, qword ptr [ebp]
#define AND_RBX_FROM_PTR_ESP and rbx, qword ptr [esp]

#define AND_RCX_FROM_PTR_RAX and rcx, qword ptr [rax]
#define AND_RCX_FROM_PTR_RBX and rcx, qword ptr [rbx]
#define AND_RCX_FROM_PTR_RCX and rcx, qword ptr [rcx]
#define AND_RCX_FROM_PTR_RDX and rcx, qword ptr [rdx]
#define AND_RCX_FROM_PTR_RDI and rcx, qword ptr [rdi]
#define AND_RCX_FROM_PTR_RSI and rcx, qword ptr [rsi]
#define AND_RCX_FROM_PTR_RBP and rcx, qword ptr [rbp]
#define AND_RCX_FROM_PTR_RSP and rcx, qword ptr [rsp]
#define AND_RCX_FROM_PTR_R8 and rcx, qword ptr [r8]
#define AND_RCX_FROM_PTR_R9 and rcx, qword ptr [r9]
#define AND_RCX_FROM_PTR_R10 and rcx, qword ptr [r10]
#define AND_RCX_FROM_PTR_R11 and rcx, qword ptr [r11]
#define AND_RCX_FROM_PTR_R12 and rcx, qword ptr [r12]
#define AND_RCX_FROM_PTR_R13 and rcx, qword ptr [r13]
#define AND_RCX_FROM_PTR_R14 and rcx, qword ptr [r14]
#define AND_RCX_FROM_PTR_R15 and rcx, qword ptr [r15]
#define AND_RCX_FROM_PTR_EAX and rcx, qword ptr [eax]
#define AND_RCX_FROM_PTR_EBX and rcx, qword ptr [ebx]
#define AND_RCX_FROM_PTR_ECX and rcx, qword ptr [ecx]
#define AND_RCX_FROM_PTR_EDX and rcx, qword ptr [edx]
#define AND_RCX_FROM_PTR_EDI and rcx, qword ptr [edi]
#define AND_RCX_FROM_PTR_ESI and rcx, qword ptr [esi]
#define AND_RCX_FROM_PTR_EBP and rcx, qword ptr [ebp]
#define AND_RCX_FROM_PTR_ESP and rcx, qword ptr [esp]

#define AND_RDX_FROM_PTR_RAX and rdx, qword ptr [rax]
#define AND_RDX_FROM_PTR_RBX and rdx, qword ptr [rbx]
#define AND_RDX_FROM_PTR_RCX and rdx, qword ptr [rcx]
#define AND_RDX_FROM_PTR_RDX and rdx, qword ptr [rdx]
#define AND_RDX_FROM_PTR_RDI and rdx, qword ptr [rdi]
#define AND_RDX_FROM_PTR_RSI and rdx, qword ptr [rsi]
#define AND_RDX_FROM_PTR_RBP and rdx, qword ptr [rbp]
#define AND_RDX_FROM_PTR_RSP and rdx, qword ptr [rsp]
#define AND_RDX_FROM_PTR_R8 and rdx, qword ptr [r8]
#define AND_RDX_FROM_PTR_R9 and rdx, qword ptr [r9]
#define AND_RDX_FROM_PTR_R10 and rdx, qword ptr [r10]
#define AND_RDX_FROM_PTR_R11 and rdx, qword ptr [r11]
#define AND_RDX_FROM_PTR_R12 and rdx, qword ptr [r12]
#define AND_RDX_FROM_PTR_R13 and rdx, qword ptr [r13]
#define AND_RDX_FROM_PTR_R14 and rdx, qword ptr [r14]
#define AND_RDX_FROM_PTR_R15 and rdx, qword ptr [r15]
#define AND_RDX_FROM_PTR_EAX and rdx, qword ptr [eax]
#define AND_RDX_FROM_PTR_EBX and rdx, qword ptr [ebx]
#define AND_RDX_FROM_PTR_ECX and rdx, qword ptr [ecx]
#define AND_RDX_FROM_PTR_EDX and rdx, qword ptr [edx]
#define AND_RDX_FROM_PTR_EDI and rdx, qword ptr [edi]
#define AND_RDX_FROM_PTR_ESI and rdx, qword ptr [esi]
#define AND_RDX_FROM_PTR_EBP and rdx, qword ptr [ebp]
#define AND_RDX_FROM_PTR_ESP and rdx, qword ptr [esp]

#define AND_RDI_FROM_PTR_RAX and rdi, qword ptr [rax]
#define AND_RDI_FROM_PTR_RBX and rdi, qword ptr [rbx]
#define AND_RDI_FROM_PTR_RCX and rdi, qword ptr [rcx]
#define AND_RDI_FROM_PTR_RDX and rdi, qword ptr [rdx]
#define AND_RDI_FROM_PTR_RDI and rdi, qword ptr [rdi]
#define AND_RDI_FROM_PTR_RSI and rdi, qword ptr [rsi]
#define AND_RDI_FROM_PTR_RBP and rdi, qword ptr [rbp]
#define AND_RDI_FROM_PTR_RSP and rdi, qword ptr [rsp]
#define AND_RDI_FROM_PTR_R8 and rdi, qword ptr [r8]
#define AND_RDI_FROM_PTR_R9 and rdi, qword ptr [r9]
#define AND_RDI_FROM_PTR_R10 and rdi, qword ptr [r10]
#define AND_RDI_FROM_PTR_R11 and rdi, qword ptr [r11]
#define AND_RDI_FROM_PTR_R12 and rdi, qword ptr [r12]
#define AND_RDI_FROM_PTR_R13 and rdi, qword ptr [r13]
#define AND_RDI_FROM_PTR_R14 and rdi, qword ptr [r14]
#define AND_RDI_FROM_PTR_R15 and rdi, qword ptr [r15]
#define AND_RDI_FROM_PTR_EAX and rdi, qword ptr [eax]
#define AND_RDI_FROM_PTR_EBX and rdi, qword ptr [ebx]
#define AND_RDI_FROM_PTR_ECX and rdi, qword ptr [ecx]
#define AND_RDI_FROM_PTR_EDX and rdi, qword ptr [edx]
#define AND_RDI_FROM_PTR_EDI and rdi, qword ptr [edi]
#define AND_RDI_FROM_PTR_ESI and rdi, qword ptr [esi]
#define AND_RDI_FROM_PTR_EBP and rdi, qword ptr [ebp]
#define AND_RDI_FROM_PTR_ESP and rdi, qword ptr [esp]

#define AND_RSI_FROM_PTR_RAX and rsi, qword ptr [rax]
#define AND_RSI_FROM_PTR_RBX and rsi, qword ptr [rbx]
#define AND_RSI_FROM_PTR_RCX and rsi, qword ptr [rcx]
#define AND_RSI_FROM_PTR_RDX and rsi, qword ptr [rdx]
#define AND_RSI_FROM_PTR_RDI and rsi, qword ptr [rdi]
#define AND_RSI_FROM_PTR_RSI and rsi, qword ptr [rsi]
#define AND_RSI_FROM_PTR_RBP and rsi, qword ptr [rbp]
#define AND_RSI_FROM_PTR_RSP and rsi, qword ptr [rsp]
#define AND_RSI_FROM_PTR_R8 and rsi, qword ptr [r8]
#define AND_RSI_FROM_PTR_R9 and rsi, qword ptr [r9]
#define AND_RSI_FROM_PTR_R10 and rsi, qword ptr [r10]
#define AND_RSI_FROM_PTR_R11 and rsi, qword ptr [r11]
#define AND_RSI_FROM_PTR_R12 and rsi, qword ptr [r12]
#define AND_RSI_FROM_PTR_R13 and rsi, qword ptr [r13]
#define AND_RSI_FROM_PTR_R14 and rsi, qword ptr [r14]
#define AND_RSI_FROM_PTR_R15 and rsi, qword ptr [r15]
#define AND_RSI_FROM_PTR_EAX and rsi, qword ptr [eax]
#define AND_RSI_FROM_PTR_EBX and rsi, qword ptr [ebx]
#define AND_RSI_FROM_PTR_ECX and rsi, qword ptr [ecx]
#define AND_RSI_FROM_PTR_EDX and rsi, qword ptr [edx]
#define AND_RSI_FROM_PTR_EDI and rsi, qword ptr [edi]
#define AND_RSI_FROM_PTR_ESI and rsi, qword ptr [esi]
#define AND_RSI_FROM_PTR_EBP and rsi, qword ptr [ebp]
#define AND_RSI_FROM_PTR_ESP and rsi, qword ptr [esp]

#define AND_RBP_FROM_PTR_RAX and rbp, qword ptr [rax]
#define AND_RBP_FROM_PTR_RBX and rbp, qword ptr [rbx]
#define AND_RBP_FROM_PTR_RCX and rbp, qword ptr [rcx]
#define AND_RBP_FROM_PTR_RDX and rbp, qword ptr [rdx]
#define AND_RBP_FROM_PTR_RDI and rbp, qword ptr [rdi]
#define AND_RBP_FROM_PTR_RSI and rbp, qword ptr [rsi]
#define AND_RBP_FROM_PTR_RBP and rbp, qword ptr [rbp]
#define AND_RBP_FROM_PTR_RSP and rbp, qword ptr [rsp]
#define AND_RBP_FROM_PTR_R8 and rbp, qword ptr [r8]
#define AND_RBP_FROM_PTR_R9 and rbp, qword ptr [r9]
#define AND_RBP_FROM_PTR_R10 and rbp, qword ptr [r10]
#define AND_RBP_FROM_PTR_R11 and rbp, qword ptr [r11]
#define AND_RBP_FROM_PTR_R12 and rbp, qword ptr [r12]
#define AND_RBP_FROM_PTR_R13 and rbp, qword ptr [r13]
#define AND_RBP_FROM_PTR_R14 and rbp, qword ptr [r14]
#define AND_RBP_FROM_PTR_R15 and rbp, qword ptr [r15]
#define AND_RBP_FROM_PTR_EAX and rbp, qword ptr [eax]
#define AND_RBP_FROM_PTR_EBX and rbp, qword ptr [ebx]
#define AND_RBP_FROM_PTR_ECX and rbp, qword ptr [ecx]
#define AND_RBP_FROM_PTR_EDX and rbp, qword ptr [edx]
#define AND_RBP_FROM_PTR_EDI and rbp, qword ptr [edi]
#define AND_RBP_FROM_PTR_ESI and rbp, qword ptr [esi]
#define AND_RBP_FROM_PTR_EBP and rbp, qword ptr [ebp]
#define AND_RBP_FROM_PTR_ESP and rbp, qword ptr [esp]

#define AND_RSP_FROM_PTR_RAX and rsp, qword ptr [rax]
#define AND_RSP_FROM_PTR_RBX and rsp, qword ptr [rbx]
#define AND_RSP_FROM_PTR_RCX and rsp, qword ptr [rcx]
#define AND_RSP_FROM_PTR_RDX and rsp, qword ptr [rdx]
#define AND_RSP_FROM_PTR_RDI and rsp, qword ptr [rdi]
#define AND_RSP_FROM_PTR_RSI and rsp, qword ptr [rsi]
#define AND_RSP_FROM_PTR_RBP and rsp, qword ptr [rbp]
#define AND_RSP_FROM_PTR_RSP and rsp, qword ptr [rsp]
#define AND_RSP_FROM_PTR_R8 and rsp, qword ptr [r8]
#define AND_RSP_FROM_PTR_R9 and rsp, qword ptr [r9]
#define AND_RSP_FROM_PTR_R10 and rsp, qword ptr [r10]
#define AND_RSP_FROM_PTR_R11 and rsp, qword ptr [r11]
#define AND_RSP_FROM_PTR_R12 and rsp, qword ptr [r12]
#define AND_RSP_FROM_PTR_R13 and rsp, qword ptr [r13]
#define AND_RSP_FROM_PTR_R14 and rsp, qword ptr [r14]
#define AND_RSP_FROM_PTR_R15 and rsp, qword ptr [r15]
#define AND_RSP_FROM_PTR_EAX and rsp, qword ptr [eax]
#define AND_RSP_FROM_PTR_EBX and rsp, qword ptr [ebx]
#define AND_RSP_FROM_PTR_ECX and rsp, qword ptr [ecx]
#define AND_RSP_FROM_PTR_EDX and rsp, qword ptr [edx]
#define AND_RSP_FROM_PTR_EDI and rsp, qword ptr [edi]
#define AND_RSP_FROM_PTR_ESI and rsp, qword ptr [esi]
#define AND_RSP_FROM_PTR_EBP and rsp, qword ptr [ebp]
#define AND_RSP_FROM_PTR_ESP and rsp, qword ptr [esp]

#define AND_R8_FROM_PTR_RAX and r8, qword ptr [rax]
#define AND_R8_FROM_PTR_RBX and r8, qword ptr [rbx]
#define AND_R8_FROM_PTR_RCX and r8, qword ptr [rcx]
#define AND_R8_FROM_PTR_RDX and r8, qword ptr [rdx]
#define AND_R8_FROM_PTR_RDI and r8, qword ptr [rdi]
#define AND_R8_FROM_PTR_RSI and r8, qword ptr [rsi]
#define AND_R8_FROM_PTR_RBP and r8, qword ptr [rbp]
#define AND_R8_FROM_PTR_RSP and r8, qword ptr [rsp]
#define AND_R8_FROM_PTR_R8 and r8, qword ptr [r8]
#define AND_R8_FROM_PTR_R9 and r8, qword ptr [r9]
#define AND_R8_FROM_PTR_R10 and r8, qword ptr [r10]
#define AND_R8_FROM_PTR_R11 and r8, qword ptr [r11]
#define AND_R8_FROM_PTR_R12 and r8, qword ptr [r12]
#define AND_R8_FROM_PTR_R13 and r8, qword ptr [r13]
#define AND_R8_FROM_PTR_R14 and r8, qword ptr [r14]
#define AND_R8_FROM_PTR_R15 and r8, qword ptr [r15]
#define AND_R8_FROM_PTR_EAX and r8, qword ptr [eax]
#define AND_R8_FROM_PTR_EBX and r8, qword ptr [ebx]
#define AND_R8_FROM_PTR_ECX and r8, qword ptr [ecx]
#define AND_R8_FROM_PTR_EDX and r8, qword ptr [edx]
#define AND_R8_FROM_PTR_EDI and r8, qword ptr [edi]
#define AND_R8_FROM_PTR_ESI and r8, qword ptr [esi]
#define AND_R8_FROM_PTR_EBP and r8, qword ptr [ebp]
#define AND_R8_FROM_PTR_ESP and r8, qword ptr [esp]

#define AND_R9_FROM_PTR_RAX and r9, qword ptr [rax]
#define AND_R9_FROM_PTR_RBX and r9, qword ptr [rbx]
#define AND_R9_FROM_PTR_RCX and r9, qword ptr [rcx]
#define AND_R9_FROM_PTR_RDX and r9, qword ptr [rdx]
#define AND_R9_FROM_PTR_RDI and r9, qword ptr [rdi]
#define AND_R9_FROM_PTR_RSI and r9, qword ptr [rsi]
#define AND_R9_FROM_PTR_RBP and r9, qword ptr [rbp]
#define AND_R9_FROM_PTR_RSP and r9, qword ptr [rsp]
#define AND_R9_FROM_PTR_R8 and r9, qword ptr [r8]
#define AND_R9_FROM_PTR_R9 and r9, qword ptr [r9]
#define AND_R9_FROM_PTR_R10 and r9, qword ptr [r10]
#define AND_R9_FROM_PTR_R11 and r9, qword ptr [r11]
#define AND_R9_FROM_PTR_R12 and r9, qword ptr [r12]
#define AND_R9_FROM_PTR_R13 and r9, qword ptr [r13]
#define AND_R9_FROM_PTR_R14 and r9, qword ptr [r14]
#define AND_R9_FROM_PTR_R15 and r9, qword ptr [r15]
#define AND_R9_FROM_PTR_EAX and r9, qword ptr [eax]
#define AND_R9_FROM_PTR_EBX and r9, qword ptr [ebx]
#define AND_R9_FROM_PTR_ECX and r9, qword ptr [ecx]
#define AND_R9_FROM_PTR_EDX and r9, qword ptr [edx]
#define AND_R9_FROM_PTR_EDI and r9, qword ptr [edi]
#define AND_R9_FROM_PTR_ESI and r9, qword ptr [esi]
#define AND_R9_FROM_PTR_EBP and r9, qword ptr [ebp]
#define AND_R9_FROM_PTR_ESP and r9, qword ptr [esp]

#define AND_R10_FROM_PTR_RAX and r10, qword ptr [rax]
#define AND_R10_FROM_PTR_RBX and r10, qword ptr [rbx]
#define AND_R10_FROM_PTR_RCX and r10, qword ptr [rcx]
#define AND_R10_FROM_PTR_RDX and r10, qword ptr [rdx]
#define AND_R10_FROM_PTR_RDI and r10, qword ptr [rdi]
#define AND_R10_FROM_PTR_RSI and r10, qword ptr [rsi]
#define AND_R10_FROM_PTR_RBP and r10, qword ptr [rbp]
#define AND_R10_FROM_PTR_RSP and r10, qword ptr [rsp]
#define AND_R10_FROM_PTR_R8 and r10, qword ptr [r8]
#define AND_R10_FROM_PTR_R9 and r10, qword ptr [r9]
#define AND_R10_FROM_PTR_R10 and r10, qword ptr [r10]
#define AND_R10_FROM_PTR_R11 and r10, qword ptr [r11]
#define AND_R10_FROM_PTR_R12 and r10, qword ptr [r12]
#define AND_R10_FROM_PTR_R13 and r10, qword ptr [r13]
#define AND_R10_FROM_PTR_R14 and r10, qword ptr [r14]
#define AND_R10_FROM_PTR_R15 and r10, qword ptr [r15]
#define AND_R10_FROM_PTR_EAX and r10, qword ptr [eax]
#define AND_R10_FROM_PTR_EBX and r10, qword ptr [ebx]
#define AND_R10_FROM_PTR_ECX and r10, qword ptr [ecx]
#define AND_R10_FROM_PTR_EDX and r10, qword ptr [edx]
#define AND_R10_FROM_PTR_EDI and r10, qword ptr [edi]
#define AND_R10_FROM_PTR_ESI and r10, qword ptr [esi]
#define AND_R10_FROM_PTR_EBP and r10, qword ptr [ebp]
#define AND_R10_FROM_PTR_ESP and r10, qword ptr [esp]

#define AND_R11_FROM_PTR_RAX and r11, qword ptr [rax]
#define AND_R11_FROM_PTR_RBX and r11, qword ptr [rbx]
#define AND_R11_FROM_PTR_RCX and r11, qword ptr [rcx]
#define AND_R11_FROM_PTR_RDX and r11, qword ptr [rdx]
#define AND_R11_FROM_PTR_RDI and r11, qword ptr [rdi]
#define AND_R11_FROM_PTR_RSI and r11, qword ptr [rsi]
#define AND_R11_FROM_PTR_RBP and r11, qword ptr [rbp]
#define AND_R11_FROM_PTR_RSP and r11, qword ptr [rsp]
#define AND_R11_FROM_PTR_R8 and r11, qword ptr [r8]
#define AND_R11_FROM_PTR_R9 and r11, qword ptr [r9]
#define AND_R11_FROM_PTR_R10 and r11, qword ptr [r10]
#define AND_R11_FROM_PTR_R11 and r11, qword ptr [r11]
#define AND_R11_FROM_PTR_R12 and r11, qword ptr [r12]
#define AND_R11_FROM_PTR_R13 and r11, qword ptr [r13]
#define AND_R11_FROM_PTR_R14 and r11, qword ptr [r14]
#define AND_R11_FROM_PTR_R15 and r11, qword ptr [r15]
#define AND_R11_FROM_PTR_EAX and r11, qword ptr [eax]
#define AND_R11_FROM_PTR_EBX and r11, qword ptr [ebx]
#define AND_R11_FROM_PTR_ECX and r11, qword ptr [ecx]
#define AND_R11_FROM_PTR_EDX and r11, qword ptr [edx]
#define AND_R11_FROM_PTR_EDI and r11, qword ptr [edi]
#define AND_R11_FROM_PTR_ESI and r11, qword ptr [esi]
#define AND_R11_FROM_PTR_EBP and r11, qword ptr [ebp]
#define AND_R11_FROM_PTR_ESP and r11, qword ptr [esp]

#define AND_R12_FROM_PTR_RAX and r12, qword ptr [rax]
#define AND_R12_FROM_PTR_RBX and r12, qword ptr [rbx]
#define AND_R12_FROM_PTR_RCX and r12, qword ptr [rcx]
#define AND_R12_FROM_PTR_RDX and r12, qword ptr [rdx]
#define AND_R12_FROM_PTR_RDI and r12, qword ptr [rdi]
#define AND_R12_FROM_PTR_RSI and r12, qword ptr [rsi]
#define AND_R12_FROM_PTR_RBP and r12, qword ptr [rbp]
#define AND_R12_FROM_PTR_RSP and r12, qword ptr [rsp]
#define AND_R12_FROM_PTR_R8 and r12, qword ptr [r8]
#define AND_R12_FROM_PTR_R9 and r12, qword ptr [r9]
#define AND_R12_FROM_PTR_R10 and r12, qword ptr [r10]
#define AND_R12_FROM_PTR_R11 and r12, qword ptr [r11]
#define AND_R12_FROM_PTR_R12 and r12, qword ptr [r12]
#define AND_R12_FROM_PTR_R13 and r12, qword ptr [r13]
#define AND_R12_FROM_PTR_R14 and r12, qword ptr [r14]
#define AND_R12_FROM_PTR_R15 and r12, qword ptr [r15]
#define AND_R12_FROM_PTR_EAX and r12, qword ptr [eax]
#define AND_R12_FROM_PTR_EBX and r12, qword ptr [ebx]
#define AND_R12_FROM_PTR_ECX and r12, qword ptr [ecx]
#define AND_R12_FROM_PTR_EDX and r12, qword ptr [edx]
#define AND_R12_FROM_PTR_EDI and r12, qword ptr [edi]
#define AND_R12_FROM_PTR_ESI and r12, qword ptr [esi]
#define AND_R12_FROM_PTR_EBP and r12, qword ptr [ebp]
#define AND_R12_FROM_PTR_ESP and r12, qword ptr [esp]

#define AND_R13_FROM_PTR_RAX and r13, qword ptr [rax]
#define AND_R13_FROM_PTR_RBX and r13, qword ptr [rbx]
#define AND_R13_FROM_PTR_RCX and r13, qword ptr [rcx]
#define AND_R13_FROM_PTR_RDX and r13, qword ptr [rdx]
#define AND_R13_FROM_PTR_RDI and r13, qword ptr [rdi]
#define AND_R13_FROM_PTR_RSI and r13, qword ptr [rsi]
#define AND_R13_FROM_PTR_RBP and r13, qword ptr [rbp]
#define AND_R13_FROM_PTR_RSP and r13, qword ptr [rsp]
#define AND_R13_FROM_PTR_R8 and r13, qword ptr [r8]
#define AND_R13_FROM_PTR_R9 and r13, qword ptr [r9]
#define AND_R13_FROM_PTR_R10 and r13, qword ptr [r10]
#define AND_R13_FROM_PTR_R11 and r13, qword ptr [r11]
#define AND_R13_FROM_PTR_R12 and r13, qword ptr [r12]
#define AND_R13_FROM_PTR_R13 and r13, qword ptr [r13]
#define AND_R13_FROM_PTR_R14 and r13, qword ptr [r14]
#define AND_R13_FROM_PTR_R15 and r13, qword ptr [r15]
#define AND_R13_FROM_PTR_EAX and r13, qword ptr [eax]
#define AND_R13_FROM_PTR_EBX and r13, qword ptr [ebx]
#define AND_R13_FROM_PTR_ECX and r13, qword ptr [ecx]
#define AND_R13_FROM_PTR_EDX and r13, qword ptr [edx]
#define AND_R13_FROM_PTR_EDI and r13, qword ptr [edi]
#define AND_R13_FROM_PTR_ESI and r13, qword ptr [esi]
#define AND_R13_FROM_PTR_EBP and r13, qword ptr [ebp]
#define AND_R13_FROM_PTR_ESP and r13, qword ptr [esp]

#define AND_R14_FROM_PTR_RAX and r14, qword ptr [rax]
#define AND_R14_FROM_PTR_RBX and r14, qword ptr [rbx]
#define AND_R14_FROM_PTR_RCX and r14, qword ptr [rcx]
#define AND_R14_FROM_PTR_RDX and r14, qword ptr [rdx]
#define AND_R14_FROM_PTR_RDI and r14, qword ptr [rdi]
#define AND_R14_FROM_PTR_RSI and r14, qword ptr [rsi]
#define AND_R14_FROM_PTR_RBP and r14, qword ptr [rbp]
#define AND_R14_FROM_PTR_RSP and r14, qword ptr [rsp]
#define AND_R14_FROM_PTR_R8 and r14, qword ptr [r8]
#define AND_R14_FROM_PTR_R9 and r14, qword ptr [r9]
#define AND_R14_FROM_PTR_R10 and r14, qword ptr [r10]
#define AND_R14_FROM_PTR_R11 and r14, qword ptr [r11]
#define AND_R14_FROM_PTR_R12 and r14, qword ptr [r12]
#define AND_R14_FROM_PTR_R13 and r14, qword ptr [r13]
#define AND_R14_FROM_PTR_R14 and r14, qword ptr [r14]
#define AND_R14_FROM_PTR_R15 and r14, qword ptr [r15]
#define AND_R14_FROM_PTR_EAX and r14, qword ptr [eax]
#define AND_R14_FROM_PTR_EBX and r14, qword ptr [ebx]
#define AND_R14_FROM_PTR_ECX and r14, qword ptr [ecx]
#define AND_R14_FROM_PTR_EDX and r14, qword ptr [edx]
#define AND_R14_FROM_PTR_EDI and r14, qword ptr [edi]
#define AND_R14_FROM_PTR_ESI and r14, qword ptr [esi]
#define AND_R14_FROM_PTR_EBP and r14, qword ptr [ebp]
#define AND_R14_FROM_PTR_ESP and r14, qword ptr [esp]

#define AND_R15_FROM_PTR_RAX and r15, qword ptr [rax]
#define AND_R15_FROM_PTR_RBX and r15, qword ptr [rbx]
#define AND_R15_FROM_PTR_RCX and r15, qword ptr [rcx]
#define AND_R15_FROM_PTR_RDX and r15, qword ptr [rdx]
#define AND_R15_FROM_PTR_RDI and r15, qword ptr [rdi]
#define AND_R15_FROM_PTR_RSI and r15, qword ptr [rsi]
#define AND_R15_FROM_PTR_RBP and r15, qword ptr [rbp]
#define AND_R15_FROM_PTR_RSP and r15, qword ptr [rsp]
#define AND_R15_FROM_PTR_R8 and r15, qword ptr [r8]
#define AND_R15_FROM_PTR_R9 and r15, qword ptr [r9]
#define AND_R15_FROM_PTR_R10 and r15, qword ptr [r10]
#define AND_R15_FROM_PTR_R11 and r15, qword ptr [r11]
#define AND_R15_FROM_PTR_R12 and r15, qword ptr [r12]
#define AND_R15_FROM_PTR_R13 and r15, qword ptr [r13]
#define AND_R15_FROM_PTR_R14 and r15, qword ptr [r14]
#define AND_R15_FROM_PTR_R15 and r15, qword ptr [r15]
#define AND_R15_FROM_PTR_EAX and r15, qword ptr [eax]
#define AND_R15_FROM_PTR_EBX and r15, qword ptr [ebx]
#define AND_R15_FROM_PTR_ECX and r15, qword ptr [ecx]
#define AND_R15_FROM_PTR_EDX and r15, qword ptr [edx]
#define AND_R15_FROM_PTR_EDI and r15, qword ptr [edi]
#define AND_R15_FROM_PTR_ESI and r15, qword ptr [esi]
#define AND_R15_FROM_PTR_EBP and r15, qword ptr [ebp]
#define AND_R15_FROM_PTR_ESP and r15, qword ptr [esp]

#define AND_RAX_TO_PTR_RAX and qword ptr [rax], rax
#define AND_RAX_TO_PTR_RBX and qword ptr [rbx], rax
#define AND_RAX_TO_PTR_RCX and qword ptr [rcx], rax
#define AND_RAX_TO_PTR_RDX and qword ptr [rdx], rax
#define AND_RAX_TO_PTR_RDI and qword ptr [rdi], rax
#define AND_RAX_TO_PTR_RSI and qword ptr [rsi], rax
#define AND_RAX_TO_PTR_RBP and qword ptr [rbp], rax
#define AND_RAX_TO_PTR_RSP and qword ptr [rsp], rax
#define AND_RAX_TO_PTR_R8 and qword ptr [r8], rax
#define AND_RAX_TO_PTR_R9 and qword ptr [r9], rax
#define AND_RAX_TO_PTR_R10 and qword ptr [r10], rax
#define AND_RAX_TO_PTR_R11 and qword ptr [r11], rax
#define AND_RAX_TO_PTR_R12 and qword ptr [r12], rax
#define AND_RAX_TO_PTR_R13 and qword ptr [r13], rax
#define AND_RAX_TO_PTR_R14 and qword ptr [r14], rax
#define AND_RAX_TO_PTR_R15 and qword ptr [r15], rax
#define AND_RAX_TO_PTR_EAX and qword ptr [eax], rax
#define AND_RAX_TO_PTR_EBX and qword ptr [ebx], rax
#define AND_RAX_TO_PTR_ECX and qword ptr [ecx], rax
#define AND_RAX_TO_PTR_EDX and qword ptr [edx], rax
#define AND_RAX_TO_PTR_EDI and qword ptr [edi], rax
#define AND_RAX_TO_PTR_ESI and qword ptr [esi], rax
#define AND_RAX_TO_PTR_EBP and qword ptr [ebp], rax
#define AND_RAX_TO_PTR_ESP and qword ptr [esp], rax

#define AND_RBX_TO_PTR_RAX and qword ptr [rax], rbx
#define AND_RBX_TO_PTR_RBX and qword ptr [rbx], rbx
#define AND_RBX_TO_PTR_RCX and qword ptr [rcx], rbx
#define AND_RBX_TO_PTR_RDX and qword ptr [rdx], rbx
#define AND_RBX_TO_PTR_RDI and qword ptr [rdi], rbx
#define AND_RBX_TO_PTR_RSI and qword ptr [rsi], rbx
#define AND_RBX_TO_PTR_RBP and qword ptr [rbp], rbx
#define AND_RBX_TO_PTR_RSP and qword ptr [rsp], rbx
#define AND_RBX_TO_PTR_R8 and qword ptr [r8], rbx
#define AND_RBX_TO_PTR_R9 and qword ptr [r9], rbx
#define AND_RBX_TO_PTR_R10 and qword ptr [r10], rbx
#define AND_RBX_TO_PTR_R11 and qword ptr [r11], rbx
#define AND_RBX_TO_PTR_R12 and qword ptr [r12], rbx
#define AND_RBX_TO_PTR_R13 and qword ptr [r13], rbx
#define AND_RBX_TO_PTR_R14 and qword ptr [r14], rbx
#define AND_RBX_TO_PTR_R15 and qword ptr [r15], rbx
#define AND_RBX_TO_PTR_EAX and qword ptr [eax], rbx
#define AND_RBX_TO_PTR_EBX and qword ptr [ebx], rbx
#define AND_RBX_TO_PTR_ECX and qword ptr [ecx], rbx
#define AND_RBX_TO_PTR_EDX and qword ptr [edx], rbx
#define AND_RBX_TO_PTR_EDI and qword ptr [edi], rbx
#define AND_RBX_TO_PTR_ESI and qword ptr [esi], rbx
#define AND_RBX_TO_PTR_EBP and qword ptr [ebp], rbx
#define AND_RBX_TO_PTR_ESP and qword ptr [esp], rbx

#define AND_RCX_TO_PTR_RAX and qword ptr [rax], rcx
#define AND_RCX_TO_PTR_RBX and qword ptr [rbx], rcx
#define AND_RCX_TO_PTR_RCX and qword ptr [rcx], rcx
#define AND_RCX_TO_PTR_RDX and qword ptr [rdx], rcx
#define AND_RCX_TO_PTR_RDI and qword ptr [rdi], rcx
#define AND_RCX_TO_PTR_RSI and qword ptr [rsi], rcx
#define AND_RCX_TO_PTR_RBP and qword ptr [rbp], rcx
#define AND_RCX_TO_PTR_RSP and qword ptr [rsp], rcx
#define AND_RCX_TO_PTR_R8 and qword ptr [r8], rcx
#define AND_RCX_TO_PTR_R9 and qword ptr [r9], rcx
#define AND_RCX_TO_PTR_R10 and qword ptr [r10], rcx
#define AND_RCX_TO_PTR_R11 and qword ptr [r11], rcx
#define AND_RCX_TO_PTR_R12 and qword ptr [r12], rcx
#define AND_RCX_TO_PTR_R13 and qword ptr [r13], rcx
#define AND_RCX_TO_PTR_R14 and qword ptr [r14], rcx
#define AND_RCX_TO_PTR_R15 and qword ptr [r15], rcx
#define AND_RCX_TO_PTR_EAX and qword ptr [eax], rcx
#define AND_RCX_TO_PTR_EBX and qword ptr [ebx], rcx
#define AND_RCX_TO_PTR_ECX and qword ptr [ecx], rcx
#define AND_RCX_TO_PTR_EDX and qword ptr [edx], rcx
#define AND_RCX_TO_PTR_EDI and qword ptr [edi], rcx
#define AND_RCX_TO_PTR_ESI and qword ptr [esi], rcx
#define AND_RCX_TO_PTR_EBP and qword ptr [ebp], rcx
#define AND_RCX_TO_PTR_ESP and qword ptr [esp], rcx

#define AND_RDX_TO_PTR_RAX and qword ptr [rax], rdx
#define AND_RDX_TO_PTR_RBX and qword ptr [rbx], rdx
#define AND_RDX_TO_PTR_RCX and qword ptr [rcx], rdx
#define AND_RDX_TO_PTR_RDX and qword ptr [rdx], rdx
#define AND_RDX_TO_PTR_RDI and qword ptr [rdi], rdx
#define AND_RDX_TO_PTR_RSI and qword ptr [rsi], rdx
#define AND_RDX_TO_PTR_RBP and qword ptr [rbp], rdx
#define AND_RDX_TO_PTR_RSP and qword ptr [rsp], rdx
#define AND_RDX_TO_PTR_R8 and qword ptr [r8], rdx
#define AND_RDX_TO_PTR_R9 and qword ptr [r9], rdx
#define AND_RDX_TO_PTR_R10 and qword ptr [r10], rdx
#define AND_RDX_TO_PTR_R11 and qword ptr [r11], rdx
#define AND_RDX_TO_PTR_R12 and qword ptr [r12], rdx
#define AND_RDX_TO_PTR_R13 and qword ptr [r13], rdx
#define AND_RDX_TO_PTR_R14 and qword ptr [r14], rdx
#define AND_RDX_TO_PTR_R15 and qword ptr [r15], rdx
#define AND_RDX_TO_PTR_EAX and qword ptr [eax], rdx
#define AND_RDX_TO_PTR_EBX and qword ptr [ebx], rdx
#define AND_RDX_TO_PTR_ECX and qword ptr [ecx], rdx
#define AND_RDX_TO_PTR_EDX and qword ptr [edx], rdx
#define AND_RDX_TO_PTR_EDI and qword ptr [edi], rdx
#define AND_RDX_TO_PTR_ESI and qword ptr [esi], rdx
#define AND_RDX_TO_PTR_EBP and qword ptr [ebp], rdx
#define AND_RDX_TO_PTR_ESP and qword ptr [esp], rdx

#define AND_RDI_TO_PTR_RAX and qword ptr [rax], rdi
#define AND_RDI_TO_PTR_RBX and qword ptr [rbx], rdi
#define AND_RDI_TO_PTR_RCX and qword ptr [rcx], rdi
#define AND_RDI_TO_PTR_RDX and qword ptr [rdx], rdi
#define AND_RDI_TO_PTR_RDI and qword ptr [rdi], rdi
#define AND_RDI_TO_PTR_RSI and qword ptr [rsi], rdi
#define AND_RDI_TO_PTR_RBP and qword ptr [rbp], rdi
#define AND_RDI_TO_PTR_RSP and qword ptr [rsp], rdi
#define AND_RDI_TO_PTR_R8 and qword ptr [r8], rdi
#define AND_RDI_TO_PTR_R9 and qword ptr [r9], rdi
#define AND_RDI_TO_PTR_R10 and qword ptr [r10], rdi
#define AND_RDI_TO_PTR_R11 and qword ptr [r11], rdi
#define AND_RDI_TO_PTR_R12 and qword ptr [r12], rdi
#define AND_RDI_TO_PTR_R13 and qword ptr [r13], rdi
#define AND_RDI_TO_PTR_R14 and qword ptr [r14], rdi
#define AND_RDI_TO_PTR_R15 and qword ptr [r15], rdi
#define AND_RDI_TO_PTR_EAX and qword ptr [eax], rdi
#define AND_RDI_TO_PTR_EBX and qword ptr [ebx], rdi
#define AND_RDI_TO_PTR_ECX and qword ptr [ecx], rdi
#define AND_RDI_TO_PTR_EDX and qword ptr [edx], rdi
#define AND_RDI_TO_PTR_EDI and qword ptr [edi], rdi
#define AND_RDI_TO_PTR_ESI and qword ptr [esi], rdi
#define AND_RDI_TO_PTR_EBP and qword ptr [ebp], rdi
#define AND_RDI_TO_PTR_ESP and qword ptr [esp], rdi

#define AND_RSI_TO_PTR_RAX and qword ptr [rax], rsi
#define AND_RSI_TO_PTR_RBX and qword ptr [rbx], rsi
#define AND_RSI_TO_PTR_RCX and qword ptr [rcx], rsi
#define AND_RSI_TO_PTR_RDX and qword ptr [rdx], rsi
#define AND_RSI_TO_PTR_RDI and qword ptr [rdi], rsi
#define AND_RSI_TO_PTR_RSI and qword ptr [rsi], rsi
#define AND_RSI_TO_PTR_RBP and qword ptr [rbp], rsi
#define AND_RSI_TO_PTR_RSP and qword ptr [rsp], rsi
#define AND_RSI_TO_PTR_R8 and qword ptr [r8], rsi
#define AND_RSI_TO_PTR_R9 and qword ptr [r9], rsi
#define AND_RSI_TO_PTR_R10 and qword ptr [r10], rsi
#define AND_RSI_TO_PTR_R11 and qword ptr [r11], rsi
#define AND_RSI_TO_PTR_R12 and qword ptr [r12], rsi
#define AND_RSI_TO_PTR_R13 and qword ptr [r13], rsi
#define AND_RSI_TO_PTR_R14 and qword ptr [r14], rsi
#define AND_RSI_TO_PTR_R15 and qword ptr [r15], rsi
#define AND_RSI_TO_PTR_EAX and qword ptr [eax], rsi
#define AND_RSI_TO_PTR_EBX and qword ptr [ebx], rsi
#define AND_RSI_TO_PTR_ECX and qword ptr [ecx], rsi
#define AND_RSI_TO_PTR_EDX and qword ptr [edx], rsi
#define AND_RSI_TO_PTR_EDI and qword ptr [edi], rsi
#define AND_RSI_TO_PTR_ESI and qword ptr [esi], rsi
#define AND_RSI_TO_PTR_EBP and qword ptr [ebp], rsi
#define AND_RSI_TO_PTR_ESP and qword ptr [esp], rsi

#define AND_RBP_TO_PTR_RAX and qword ptr [rax], rbp
#define AND_RBP_TO_PTR_RBX and qword ptr [rbx], rbp
#define AND_RBP_TO_PTR_RCX and qword ptr [rcx], rbp
#define AND_RBP_TO_PTR_RDX and qword ptr [rdx], rbp
#define AND_RBP_TO_PTR_RDI and qword ptr [rdi], rbp
#define AND_RBP_TO_PTR_RSI and qword ptr [rsi], rbp
#define AND_RBP_TO_PTR_RBP and qword ptr [rbp], rbp
#define AND_RBP_TO_PTR_RSP and qword ptr [rsp], rbp
#define AND_RBP_TO_PTR_R8 and qword ptr [r8], rbp
#define AND_RBP_TO_PTR_R9 and qword ptr [r9], rbp
#define AND_RBP_TO_PTR_R10 and qword ptr [r10], rbp
#define AND_RBP_TO_PTR_R11 and qword ptr [r11], rbp
#define AND_RBP_TO_PTR_R12 and qword ptr [r12], rbp
#define AND_RBP_TO_PTR_R13 and qword ptr [r13], rbp
#define AND_RBP_TO_PTR_R14 and qword ptr [r14], rbp
#define AND_RBP_TO_PTR_R15 and qword ptr [r15], rbp
#define AND_RBP_TO_PTR_EAX and qword ptr [eax], rbp
#define AND_RBP_TO_PTR_EBX and qword ptr [ebx], rbp
#define AND_RBP_TO_PTR_ECX and qword ptr [ecx], rbp
#define AND_RBP_TO_PTR_EDX and qword ptr [edx], rbp
#define AND_RBP_TO_PTR_EDI and qword ptr [edi], rbp
#define AND_RBP_TO_PTR_ESI and qword ptr [esi], rbp
#define AND_RBP_TO_PTR_EBP and qword ptr [ebp], rbp
#define AND_RBP_TO_PTR_ESP and qword ptr [esp], rbp

#define AND_RSP_TO_PTR_RAX and qword ptr [rax], rsp
#define AND_RSP_TO_PTR_RBX and qword ptr [rbx], rsp
#define AND_RSP_TO_PTR_RCX and qword ptr [rcx], rsp
#define AND_RSP_TO_PTR_RDX and qword ptr [rdx], rsp
#define AND_RSP_TO_PTR_RDI and qword ptr [rdi], rsp
#define AND_RSP_TO_PTR_RSI and qword ptr [rsi], rsp
#define AND_RSP_TO_PTR_RBP and qword ptr [rbp], rsp
#define AND_RSP_TO_PTR_RSP and qword ptr [rsp], rsp
#define AND_RSP_TO_PTR_R8 and qword ptr [r8], rsp
#define AND_RSP_TO_PTR_R9 and qword ptr [r9], rsp
#define AND_RSP_TO_PTR_R10 and qword ptr [r10], rsp
#define AND_RSP_TO_PTR_R11 and qword ptr [r11], rsp
#define AND_RSP_TO_PTR_R12 and qword ptr [r12], rsp
#define AND_RSP_TO_PTR_R13 and qword ptr [r13], rsp
#define AND_RSP_TO_PTR_R14 and qword ptr [r14], rsp
#define AND_RSP_TO_PTR_R15 and qword ptr [r15], rsp
#define AND_RSP_TO_PTR_EAX and qword ptr [eax], rsp
#define AND_RSP_TO_PTR_EBX and qword ptr [ebx], rsp
#define AND_RSP_TO_PTR_ECX and qword ptr [ecx], rsp
#define AND_RSP_TO_PTR_EDX and qword ptr [edx], rsp
#define AND_RSP_TO_PTR_EDI and qword ptr [edi], rsp
#define AND_RSP_TO_PTR_ESI and qword ptr [esi], rsp
#define AND_RSP_TO_PTR_EBP and qword ptr [ebp], rsp
#define AND_RSP_TO_PTR_ESP and qword ptr [esp], rsp

#define AND_R8_TO_PTR_RAX and qword ptr [rax], r8
#define AND_R8_TO_PTR_RBX and qword ptr [rbx], r8
#define AND_R8_TO_PTR_RCX and qword ptr [rcx], r8
#define AND_R8_TO_PTR_RDX and qword ptr [rdx], r8
#define AND_R8_TO_PTR_RDI and qword ptr [rdi], r8
#define AND_R8_TO_PTR_RSI and qword ptr [rsi], r8
#define AND_R8_TO_PTR_RBP and qword ptr [rbp], r8
#define AND_R8_TO_PTR_RSP and qword ptr [rsp], r8
#define AND_R8_TO_PTR_R8 and qword ptr [r8], r8
#define AND_R8_TO_PTR_R9 and qword ptr [r9], r8
#define AND_R8_TO_PTR_R10 and qword ptr [r10], r8
#define AND_R8_TO_PTR_R11 and qword ptr [r11], r8
#define AND_R8_TO_PTR_R12 and qword ptr [r12], r8
#define AND_R8_TO_PTR_R13 and qword ptr [r13], r8
#define AND_R8_TO_PTR_R14 and qword ptr [r14], r8
#define AND_R8_TO_PTR_R15 and qword ptr [r15], r8
#define AND_R8_TO_PTR_EAX and qword ptr [eax], r8
#define AND_R8_TO_PTR_EBX and qword ptr [ebx], r8
#define AND_R8_TO_PTR_ECX and qword ptr [ecx], r8
#define AND_R8_TO_PTR_EDX and qword ptr [edx], r8
#define AND_R8_TO_PTR_EDI and qword ptr [edi], r8
#define AND_R8_TO_PTR_ESI and qword ptr [esi], r8
#define AND_R8_TO_PTR_EBP and qword ptr [ebp], r8
#define AND_R8_TO_PTR_ESP and qword ptr [esp], r8

#define AND_R9_TO_PTR_RAX and qword ptr [rax], r9
#define AND_R9_TO_PTR_RBX and qword ptr [rbx], r9
#define AND_R9_TO_PTR_RCX and qword ptr [rcx], r9
#define AND_R9_TO_PTR_RDX and qword ptr [rdx], r9
#define AND_R9_TO_PTR_RDI and qword ptr [rdi], r9
#define AND_R9_TO_PTR_RSI and qword ptr [rsi], r9
#define AND_R9_TO_PTR_RBP and qword ptr [rbp], r9
#define AND_R9_TO_PTR_RSP and qword ptr [rsp], r9
#define AND_R9_TO_PTR_R8 and qword ptr [r8], r9
#define AND_R9_TO_PTR_R9 and qword ptr [r9], r9
#define AND_R9_TO_PTR_R10 and qword ptr [r10], r9
#define AND_R9_TO_PTR_R11 and qword ptr [r11], r9
#define AND_R9_TO_PTR_R12 and qword ptr [r12], r9
#define AND_R9_TO_PTR_R13 and qword ptr [r13], r9
#define AND_R9_TO_PTR_R14 and qword ptr [r14], r9
#define AND_R9_TO_PTR_R15 and qword ptr [r15], r9
#define AND_R9_TO_PTR_EAX and qword ptr [eax], r9
#define AND_R9_TO_PTR_EBX and qword ptr [ebx], r9
#define AND_R9_TO_PTR_ECX and qword ptr [ecx], r9
#define AND_R9_TO_PTR_EDX and qword ptr [edx], r9
#define AND_R9_TO_PTR_EDI and qword ptr [edi], r9
#define AND_R9_TO_PTR_ESI and qword ptr [esi], r9
#define AND_R9_TO_PTR_EBP and qword ptr [ebp], r9
#define AND_R9_TO_PTR_ESP and qword ptr [esp], r9

#define AND_R10_TO_PTR_RAX and qword ptr [rax], r10
#define AND_R10_TO_PTR_RBX and qword ptr [rbx], r10
#define AND_R10_TO_PTR_RCX and qword ptr [rcx], r10
#define AND_R10_TO_PTR_RDX and qword ptr [rdx], r10
#define AND_R10_TO_PTR_RDI and qword ptr [rdi], r10
#define AND_R10_TO_PTR_RSI and qword ptr [rsi], r10
#define AND_R10_TO_PTR_RBP and qword ptr [rbp], r10
#define AND_R10_TO_PTR_RSP and qword ptr [rsp], r10
#define AND_R10_TO_PTR_R8 and qword ptr [r8], r10
#define AND_R10_TO_PTR_R9 and qword ptr [r9], r10
#define AND_R10_TO_PTR_R10 and qword ptr [r10], r10
#define AND_R10_TO_PTR_R11 and qword ptr [r11], r10
#define AND_R10_TO_PTR_R12 and qword ptr [r12], r10
#define AND_R10_TO_PTR_R13 and qword ptr [r13], r10
#define AND_R10_TO_PTR_R14 and qword ptr [r14], r10
#define AND_R10_TO_PTR_R15 and qword ptr [r15], r10
#define AND_R10_TO_PTR_EAX and qword ptr [eax], r10
#define AND_R10_TO_PTR_EBX and qword ptr [ebx], r10
#define AND_R10_TO_PTR_ECX and qword ptr [ecx], r10
#define AND_R10_TO_PTR_EDX and qword ptr [edx], r10
#define AND_R10_TO_PTR_EDI and qword ptr [edi], r10
#define AND_R10_TO_PTR_ESI and qword ptr [esi], r10
#define AND_R10_TO_PTR_EBP and qword ptr [ebp], r10
#define AND_R10_TO_PTR_ESP and qword ptr [esp], r10

#define AND_R11_TO_PTR_RAX and qword ptr [rax], r11
#define AND_R11_TO_PTR_RBX and qword ptr [rbx], r11
#define AND_R11_TO_PTR_RCX and qword ptr [rcx], r11
#define AND_R11_TO_PTR_RDX and qword ptr [rdx], r11
#define AND_R11_TO_PTR_RDI and qword ptr [rdi], r11
#define AND_R11_TO_PTR_RSI and qword ptr [rsi], r11
#define AND_R11_TO_PTR_RBP and qword ptr [rbp], r11
#define AND_R11_TO_PTR_RSP and qword ptr [rsp], r11
#define AND_R11_TO_PTR_R8 and qword ptr [r8], r11
#define AND_R11_TO_PTR_R9 and qword ptr [r9], r11
#define AND_R11_TO_PTR_R10 and qword ptr [r10], r11
#define AND_R11_TO_PTR_R11 and qword ptr [r11], r11
#define AND_R11_TO_PTR_R12 and qword ptr [r12], r11
#define AND_R11_TO_PTR_R13 and qword ptr [r13], r11
#define AND_R11_TO_PTR_R14 and qword ptr [r14], r11
#define AND_R11_TO_PTR_R15 and qword ptr [r15], r11
#define AND_R11_TO_PTR_EAX and qword ptr [eax], r11
#define AND_R11_TO_PTR_EBX and qword ptr [ebx], r11
#define AND_R11_TO_PTR_ECX and qword ptr [ecx], r11
#define AND_R11_TO_PTR_EDX and qword ptr [edx], r11
#define AND_R11_TO_PTR_EDI and qword ptr [edi], r11
#define AND_R11_TO_PTR_ESI and qword ptr [esi], r11
#define AND_R11_TO_PTR_EBP and qword ptr [ebp], r11
#define AND_R11_TO_PTR_ESP and qword ptr [esp], r11

#define AND_R12_TO_PTR_RAX and qword ptr [rax], r12
#define AND_R12_TO_PTR_RBX and qword ptr [rbx], r12
#define AND_R12_TO_PTR_RCX and qword ptr [rcx], r12
#define AND_R12_TO_PTR_RDX and qword ptr [rdx], r12
#define AND_R12_TO_PTR_RDI and qword ptr [rdi], r12
#define AND_R12_TO_PTR_RSI and qword ptr [rsi], r12
#define AND_R12_TO_PTR_RBP and qword ptr [rbp], r12
#define AND_R12_TO_PTR_RSP and qword ptr [rsp], r12
#define AND_R12_TO_PTR_R8 and qword ptr [r8], r12
#define AND_R12_TO_PTR_R9 and qword ptr [r9], r12
#define AND_R12_TO_PTR_R10 and qword ptr [r10], r12
#define AND_R12_TO_PTR_R11 and qword ptr [r11], r12
#define AND_R12_TO_PTR_R12 and qword ptr [r12], r12
#define AND_R12_TO_PTR_R13 and qword ptr [r13], r12
#define AND_R12_TO_PTR_R14 and qword ptr [r14], r12
#define AND_R12_TO_PTR_R15 and qword ptr [r15], r12
#define AND_R12_TO_PTR_EAX and qword ptr [eax], r12
#define AND_R12_TO_PTR_EBX and qword ptr [ebx], r12
#define AND_R12_TO_PTR_ECX and qword ptr [ecx], r12
#define AND_R12_TO_PTR_EDX and qword ptr [edx], r12
#define AND_R12_TO_PTR_EDI and qword ptr [edi], r12
#define AND_R12_TO_PTR_ESI and qword ptr [esi], r12
#define AND_R12_TO_PTR_EBP and qword ptr [ebp], r12
#define AND_R12_TO_PTR_ESP and qword ptr [esp], r12

#define AND_R13_TO_PTR_RAX and qword ptr [rax], r13
#define AND_R13_TO_PTR_RBX and qword ptr [rbx], r13
#define AND_R13_TO_PTR_RCX and qword ptr [rcx], r13
#define AND_R13_TO_PTR_RDX and qword ptr [rdx], r13
#define AND_R13_TO_PTR_RDI and qword ptr [rdi], r13
#define AND_R13_TO_PTR_RSI and qword ptr [rsi], r13
#define AND_R13_TO_PTR_RBP and qword ptr [rbp], r13
#define AND_R13_TO_PTR_RSP and qword ptr [rsp], r13
#define AND_R13_TO_PTR_R8 and qword ptr [r8], r13
#define AND_R13_TO_PTR_R9 and qword ptr [r9], r13
#define AND_R13_TO_PTR_R10 and qword ptr [r10], r13
#define AND_R13_TO_PTR_R11 and qword ptr [r11], r13
#define AND_R13_TO_PTR_R12 and qword ptr [r12], r13
#define AND_R13_TO_PTR_R13 and qword ptr [r13], r13
#define AND_R13_TO_PTR_R14 and qword ptr [r14], r13
#define AND_R13_TO_PTR_R15 and qword ptr [r15], r13
#define AND_R13_TO_PTR_EAX and qword ptr [eax], r13
#define AND_R13_TO_PTR_EBX and qword ptr [ebx], r13
#define AND_R13_TO_PTR_ECX and qword ptr [ecx], r13
#define AND_R13_TO_PTR_EDX and qword ptr [edx], r13
#define AND_R13_TO_PTR_EDI and qword ptr [edi], r13
#define AND_R13_TO_PTR_ESI and qword ptr [esi], r13
#define AND_R13_TO_PTR_EBP and qword ptr [ebp], r13
#define AND_R13_TO_PTR_ESP and qword ptr [esp], r13

#define AND_R14_TO_PTR_RAX and qword ptr [rax], r14
#define AND_R14_TO_PTR_RBX and qword ptr [rbx], r14
#define AND_R14_TO_PTR_RCX and qword ptr [rcx], r14
#define AND_R14_TO_PTR_RDX and qword ptr [rdx], r14
#define AND_R14_TO_PTR_RDI and qword ptr [rdi], r14
#define AND_R14_TO_PTR_RSI and qword ptr [rsi], r14
#define AND_R14_TO_PTR_RBP and qword ptr [rbp], r14
#define AND_R14_TO_PTR_RSP and qword ptr [rsp], r14
#define AND_R14_TO_PTR_R8 and qword ptr [r8], r14
#define AND_R14_TO_PTR_R9 and qword ptr [r9], r14
#define AND_R14_TO_PTR_R10 and qword ptr [r10], r14
#define AND_R14_TO_PTR_R11 and qword ptr [r11], r14
#define AND_R14_TO_PTR_R12 and qword ptr [r12], r14
#define AND_R14_TO_PTR_R13 and qword ptr [r13], r14
#define AND_R14_TO_PTR_R14 and qword ptr [r14], r14
#define AND_R14_TO_PTR_R15 and qword ptr [r15], r14
#define AND_R14_TO_PTR_EAX and qword ptr [eax], r14
#define AND_R14_TO_PTR_EBX and qword ptr [ebx], r14
#define AND_R14_TO_PTR_ECX and qword ptr [ecx], r14
#define AND_R14_TO_PTR_EDX and qword ptr [edx], r14
#define AND_R14_TO_PTR_EDI and qword ptr [edi], r14
#define AND_R14_TO_PTR_ESI and qword ptr [esi], r14
#define AND_R14_TO_PTR_EBP and qword ptr [ebp], r14
#define AND_R14_TO_PTR_ESP and qword ptr [esp], r14

#define AND_R15_TO_PTR_RAX and qword ptr [rax], r15
#define AND_R15_TO_PTR_RBX and qword ptr [rbx], r15
#define AND_R15_TO_PTR_RCX and qword ptr [rcx], r15
#define AND_R15_TO_PTR_RDX and qword ptr [rdx], r15
#define AND_R15_TO_PTR_RDI and qword ptr [rdi], r15
#define AND_R15_TO_PTR_RSI and qword ptr [rsi], r15
#define AND_R15_TO_PTR_RBP and qword ptr [rbp], r15
#define AND_R15_TO_PTR_RSP and qword ptr [rsp], r15
#define AND_R15_TO_PTR_R8 and qword ptr [r8], r15
#define AND_R15_TO_PTR_R9 and qword ptr [r9], r15
#define AND_R15_TO_PTR_R10 and qword ptr [r10], r15
#define AND_R15_TO_PTR_R11 and qword ptr [r11], r15
#define AND_R15_TO_PTR_R12 and qword ptr [r12], r15
#define AND_R15_TO_PTR_R13 and qword ptr [r13], r15
#define AND_R15_TO_PTR_R14 and qword ptr [r14], r15
#define AND_R15_TO_PTR_R15 and qword ptr [r15], r15
#define AND_R15_TO_PTR_EAX and qword ptr [eax], r15
#define AND_R15_TO_PTR_EBX and qword ptr [ebx], r15
#define AND_R15_TO_PTR_ECX and qword ptr [ecx], r15
#define AND_R15_TO_PTR_EDX and qword ptr [edx], r15
#define AND_R15_TO_PTR_EDI and qword ptr [edi], r15
#define AND_R15_TO_PTR_ESI and qword ptr [esi], r15
#define AND_R15_TO_PTR_EBP and qword ptr [ebp], r15
#define AND_R15_TO_PTR_ESP and qword ptr [esp], r15

#define AND_RAX_FROM_PTR_RAX_(VALUE) and rax, qword ptr [rax + VALUE]
#define AND_RAX_FROM_PTR_RBX_(VALUE) and rax, qword ptr [rbx + VALUE]
#define AND_RAX_FROM_PTR_RCX_(VALUE) and rax, qword ptr [rcx + VALUE]
#define AND_RAX_FROM_PTR_RDX_(VALUE) and rax, qword ptr [rdx + VALUE]
#define AND_RAX_FROM_PTR_RDI_(VALUE) and rax, qword ptr [rdi + VALUE]
#define AND_RAX_FROM_PTR_RSI_(VALUE) and rax, qword ptr [rsi + VALUE]
#define AND_RAX_FROM_PTR_RBP_(VALUE) and rax, qword ptr [rbp + VALUE]
#define AND_RAX_FROM_PTR_RSP_(VALUE) and rax, qword ptr [rsp + VALUE]
#define AND_RAX_FROM_PTR_R8_(VALUE) and rax, qword ptr [r8 + VALUE]
#define AND_RAX_FROM_PTR_R9_(VALUE) and rax, qword ptr [r9 + VALUE]
#define AND_RAX_FROM_PTR_R10_(VALUE) and rax, qword ptr [r10 + VALUE]
#define AND_RAX_FROM_PTR_R11_(VALUE) and rax, qword ptr [r11 + VALUE]
#define AND_RAX_FROM_PTR_R12_(VALUE) and rax, qword ptr [r12 + VALUE]
#define AND_RAX_FROM_PTR_R13_(VALUE) and rax, qword ptr [r13 + VALUE]
#define AND_RAX_FROM_PTR_R14_(VALUE) and rax, qword ptr [r14 + VALUE]
#define AND_RAX_FROM_PTR_R15_(VALUE) and rax, qword ptr [r15 + VALUE]
#define AND_RAX_FROM_PTR_EAX_(VALUE) and rax, qword ptr [eax + VALUE]
#define AND_RAX_FROM_PTR_EBX_(VALUE) and rax, qword ptr [ebx + VALUE]
#define AND_RAX_FROM_PTR_ECX_(VALUE) and rax, qword ptr [ecx + VALUE]
#define AND_RAX_FROM_PTR_EDX_(VALUE) and rax, qword ptr [edx + VALUE]
#define AND_RAX_FROM_PTR_EDI_(VALUE) and rax, qword ptr [edi + VALUE]
#define AND_RAX_FROM_PTR_ESI_(VALUE) and rax, qword ptr [esi + VALUE]
#define AND_RAX_FROM_PTR_EBP_(VALUE) and rax, qword ptr [ebp + VALUE]
#define AND_RAX_FROM_PTR_ESP_(VALUE) and rax, qword ptr [esp + VALUE]

#define AND_RBX_FROM_PTR_RAX_(VALUE) and rbx, qword ptr [rax + VALUE]
#define AND_RBX_FROM_PTR_RBX_(VALUE) and rbx, qword ptr [rbx + VALUE]
#define AND_RBX_FROM_PTR_RCX_(VALUE) and rbx, qword ptr [rcx + VALUE]
#define AND_RBX_FROM_PTR_RDX_(VALUE) and rbx, qword ptr [rdx + VALUE]
#define AND_RBX_FROM_PTR_RDI_(VALUE) and rbx, qword ptr [rdi + VALUE]
#define AND_RBX_FROM_PTR_RSI_(VALUE) and rbx, qword ptr [rsi + VALUE]
#define AND_RBX_FROM_PTR_RBP_(VALUE) and rbx, qword ptr [rbp + VALUE]
#define AND_RBX_FROM_PTR_RSP_(VALUE) and rbx, qword ptr [rsp + VALUE]
#define AND_RBX_FROM_PTR_R8_(VALUE) and rbx, qword ptr [r8 + VALUE]
#define AND_RBX_FROM_PTR_R9_(VALUE) and rbx, qword ptr [r9 + VALUE]
#define AND_RBX_FROM_PTR_R10_(VALUE) and rbx, qword ptr [r10 + VALUE]
#define AND_RBX_FROM_PTR_R11_(VALUE) and rbx, qword ptr [r11 + VALUE]
#define AND_RBX_FROM_PTR_R12_(VALUE) and rbx, qword ptr [r12 + VALUE]
#define AND_RBX_FROM_PTR_R13_(VALUE) and rbx, qword ptr [r13 + VALUE]
#define AND_RBX_FROM_PTR_R14_(VALUE) and rbx, qword ptr [r14 + VALUE]
#define AND_RBX_FROM_PTR_R15_(VALUE) and rbx, qword ptr [r15 + VALUE]
#define AND_RBX_FROM_PTR_EAX_(VALUE) and rbx, qword ptr [eax + VALUE]
#define AND_RBX_FROM_PTR_EBX_(VALUE) and rbx, qword ptr [ebx + VALUE]
#define AND_RBX_FROM_PTR_ECX_(VALUE) and rbx, qword ptr [ecx + VALUE]
#define AND_RBX_FROM_PTR_EDX_(VALUE) and rbx, qword ptr [edx + VALUE]
#define AND_RBX_FROM_PTR_EDI_(VALUE) and rbx, qword ptr [edi + VALUE]
#define AND_RBX_FROM_PTR_ESI_(VALUE) and rbx, qword ptr [esi + VALUE]
#define AND_RBX_FROM_PTR_EBP_(VALUE) and rbx, qword ptr [ebp + VALUE]
#define AND_RBX_FROM_PTR_ESP_(VALUE) and rbx, qword ptr [esp + VALUE]

#define AND_RCX_FROM_PTR_RAX_(VALUE) and rcx, qword ptr [rax + VALUE]
#define AND_RCX_FROM_PTR_RBX_(VALUE) and rcx, qword ptr [rbx + VALUE]
#define AND_RCX_FROM_PTR_RCX_(VALUE) and rcx, qword ptr [rcx + VALUE]
#define AND_RCX_FROM_PTR_RDX_(VALUE) and rcx, qword ptr [rdx + VALUE]
#define AND_RCX_FROM_PTR_RDI_(VALUE) and rcx, qword ptr [rdi + VALUE]
#define AND_RCX_FROM_PTR_RSI_(VALUE) and rcx, qword ptr [rsi + VALUE]
#define AND_RCX_FROM_PTR_RBP_(VALUE) and rcx, qword ptr [rbp + VALUE]
#define AND_RCX_FROM_PTR_RSP_(VALUE) and rcx, qword ptr [rsp + VALUE]
#define AND_RCX_FROM_PTR_R8_(VALUE) and rcx, qword ptr [r8 + VALUE]
#define AND_RCX_FROM_PTR_R9_(VALUE) and rcx, qword ptr [r9 + VALUE]
#define AND_RCX_FROM_PTR_R10_(VALUE) and rcx, qword ptr [r10 + VALUE]
#define AND_RCX_FROM_PTR_R11_(VALUE) and rcx, qword ptr [r11 + VALUE]
#define AND_RCX_FROM_PTR_R12_(VALUE) and rcx, qword ptr [r12 + VALUE]
#define AND_RCX_FROM_PTR_R13_(VALUE) and rcx, qword ptr [r13 + VALUE]
#define AND_RCX_FROM_PTR_R14_(VALUE) and rcx, qword ptr [r14 + VALUE]
#define AND_RCX_FROM_PTR_R15_(VALUE) and rcx, qword ptr [r15 + VALUE]
#define AND_RCX_FROM_PTR_EAX_(VALUE) and rcx, qword ptr [eax + VALUE]
#define AND_RCX_FROM_PTR_EBX_(VALUE) and rcx, qword ptr [ebx + VALUE]
#define AND_RCX_FROM_PTR_ECX_(VALUE) and rcx, qword ptr [ecx + VALUE]
#define AND_RCX_FROM_PTR_EDX_(VALUE) and rcx, qword ptr [edx + VALUE]
#define AND_RCX_FROM_PTR_EDI_(VALUE) and rcx, qword ptr [edi + VALUE]
#define AND_RCX_FROM_PTR_ESI_(VALUE) and rcx, qword ptr [esi + VALUE]
#define AND_RCX_FROM_PTR_EBP_(VALUE) and rcx, qword ptr [ebp + VALUE]
#define AND_RCX_FROM_PTR_ESP_(VALUE) and rcx, qword ptr [esp + VALUE]

#define AND_RDX_FROM_PTR_RAX_(VALUE) and rdx, qword ptr [rax + VALUE]
#define AND_RDX_FROM_PTR_RBX_(VALUE) and rdx, qword ptr [rbx + VALUE]
#define AND_RDX_FROM_PTR_RCX_(VALUE) and rdx, qword ptr [rcx + VALUE]
#define AND_RDX_FROM_PTR_RDX_(VALUE) and rdx, qword ptr [rdx + VALUE]
#define AND_RDX_FROM_PTR_RDI_(VALUE) and rdx, qword ptr [rdi + VALUE]
#define AND_RDX_FROM_PTR_RSI_(VALUE) and rdx, qword ptr [rsi + VALUE]
#define AND_RDX_FROM_PTR_RBP_(VALUE) and rdx, qword ptr [rbp + VALUE]
#define AND_RDX_FROM_PTR_RSP_(VALUE) and rdx, qword ptr [rsp + VALUE]
#define AND_RDX_FROM_PTR_R8_(VALUE) and rdx, qword ptr [r8 + VALUE]
#define AND_RDX_FROM_PTR_R9_(VALUE) and rdx, qword ptr [r9 + VALUE]
#define AND_RDX_FROM_PTR_R10_(VALUE) and rdx, qword ptr [r10 + VALUE]
#define AND_RDX_FROM_PTR_R11_(VALUE) and rdx, qword ptr [r11 + VALUE]
#define AND_RDX_FROM_PTR_R12_(VALUE) and rdx, qword ptr [r12 + VALUE]
#define AND_RDX_FROM_PTR_R13_(VALUE) and rdx, qword ptr [r13 + VALUE]
#define AND_RDX_FROM_PTR_R14_(VALUE) and rdx, qword ptr [r14 + VALUE]
#define AND_RDX_FROM_PTR_R15_(VALUE) and rdx, qword ptr [r15 + VALUE]
#define AND_RDX_FROM_PTR_EAX_(VALUE) and rdx, qword ptr [eax + VALUE]
#define AND_RDX_FROM_PTR_EBX_(VALUE) and rdx, qword ptr [ebx + VALUE]
#define AND_RDX_FROM_PTR_ECX_(VALUE) and rdx, qword ptr [ecx + VALUE]
#define AND_RDX_FROM_PTR_EDX_(VALUE) and rdx, qword ptr [edx + VALUE]
#define AND_RDX_FROM_PTR_EDI_(VALUE) and rdx, qword ptr [edi + VALUE]
#define AND_RDX_FROM_PTR_ESI_(VALUE) and rdx, qword ptr [esi + VALUE]
#define AND_RDX_FROM_PTR_EBP_(VALUE) and rdx, qword ptr [ebp + VALUE]
#define AND_RDX_FROM_PTR_ESP_(VALUE) and rdx, qword ptr [esp + VALUE]

#define AND_RDI_FROM_PTR_RAX_(VALUE) and rdi, qword ptr [rax + VALUE]
#define AND_RDI_FROM_PTR_RBX_(VALUE) and rdi, qword ptr [rbx + VALUE]
#define AND_RDI_FROM_PTR_RCX_(VALUE) and rdi, qword ptr [rcx + VALUE]
#define AND_RDI_FROM_PTR_RDX_(VALUE) and rdi, qword ptr [rdx + VALUE]
#define AND_RDI_FROM_PTR_RDI_(VALUE) and rdi, qword ptr [rdi + VALUE]
#define AND_RDI_FROM_PTR_RSI_(VALUE) and rdi, qword ptr [rsi + VALUE]
#define AND_RDI_FROM_PTR_RBP_(VALUE) and rdi, qword ptr [rbp + VALUE]
#define AND_RDI_FROM_PTR_RSP_(VALUE) and rdi, qword ptr [rsp + VALUE]
#define AND_RDI_FROM_PTR_R8_(VALUE) and rdi, qword ptr [r8 + VALUE]
#define AND_RDI_FROM_PTR_R9_(VALUE) and rdi, qword ptr [r9 + VALUE]
#define AND_RDI_FROM_PTR_R10_(VALUE) and rdi, qword ptr [r10 + VALUE]
#define AND_RDI_FROM_PTR_R11_(VALUE) and rdi, qword ptr [r11 + VALUE]
#define AND_RDI_FROM_PTR_R12_(VALUE) and rdi, qword ptr [r12 + VALUE]
#define AND_RDI_FROM_PTR_R13_(VALUE) and rdi, qword ptr [r13 + VALUE]
#define AND_RDI_FROM_PTR_R14_(VALUE) and rdi, qword ptr [r14 + VALUE]
#define AND_RDI_FROM_PTR_R15_(VALUE) and rdi, qword ptr [r15 + VALUE]
#define AND_RDI_FROM_PTR_EAX_(VALUE) and rdi, qword ptr [eax + VALUE]
#define AND_RDI_FROM_PTR_EBX_(VALUE) and rdi, qword ptr [ebx + VALUE]
#define AND_RDI_FROM_PTR_ECX_(VALUE) and rdi, qword ptr [ecx + VALUE]
#define AND_RDI_FROM_PTR_EDX_(VALUE) and rdi, qword ptr [edx + VALUE]
#define AND_RDI_FROM_PTR_EDI_(VALUE) and rdi, qword ptr [edi + VALUE]
#define AND_RDI_FROM_PTR_ESI_(VALUE) and rdi, qword ptr [esi + VALUE]
#define AND_RDI_FROM_PTR_EBP_(VALUE) and rdi, qword ptr [ebp + VALUE]
#define AND_RDI_FROM_PTR_ESP_(VALUE) and rdi, qword ptr [esp + VALUE]

#define AND_RSI_FROM_PTR_RAX_(VALUE) and rsi, qword ptr [rax + VALUE]
#define AND_RSI_FROM_PTR_RBX_(VALUE) and rsi, qword ptr [rbx + VALUE]
#define AND_RSI_FROM_PTR_RCX_(VALUE) and rsi, qword ptr [rcx + VALUE]
#define AND_RSI_FROM_PTR_RDX_(VALUE) and rsi, qword ptr [rdx + VALUE]
#define AND_RSI_FROM_PTR_RDI_(VALUE) and rsi, qword ptr [rdi + VALUE]
#define AND_RSI_FROM_PTR_RSI_(VALUE) and rsi, qword ptr [rsi + VALUE]
#define AND_RSI_FROM_PTR_RBP_(VALUE) and rsi, qword ptr [rbp + VALUE]
#define AND_RSI_FROM_PTR_RSP_(VALUE) and rsi, qword ptr [rsp + VALUE]
#define AND_RSI_FROM_PTR_R8_(VALUE) and rsi, qword ptr [r8 + VALUE]
#define AND_RSI_FROM_PTR_R9_(VALUE) and rsi, qword ptr [r9 + VALUE]
#define AND_RSI_FROM_PTR_R10_(VALUE) and rsi, qword ptr [r10 + VALUE]
#define AND_RSI_FROM_PTR_R11_(VALUE) and rsi, qword ptr [r11 + VALUE]
#define AND_RSI_FROM_PTR_R12_(VALUE) and rsi, qword ptr [r12 + VALUE]
#define AND_RSI_FROM_PTR_R13_(VALUE) and rsi, qword ptr [r13 + VALUE]
#define AND_RSI_FROM_PTR_R14_(VALUE) and rsi, qword ptr [r14 + VALUE]
#define AND_RSI_FROM_PTR_R15_(VALUE) and rsi, qword ptr [r15 + VALUE]
#define AND_RSI_FROM_PTR_EAX_(VALUE) and rsi, qword ptr [eax + VALUE]
#define AND_RSI_FROM_PTR_EBX_(VALUE) and rsi, qword ptr [ebx + VALUE]
#define AND_RSI_FROM_PTR_ECX_(VALUE) and rsi, qword ptr [ecx + VALUE]
#define AND_RSI_FROM_PTR_EDX_(VALUE) and rsi, qword ptr [edx + VALUE]
#define AND_RSI_FROM_PTR_EDI_(VALUE) and rsi, qword ptr [edi + VALUE]
#define AND_RSI_FROM_PTR_ESI_(VALUE) and rsi, qword ptr [esi + VALUE]
#define AND_RSI_FROM_PTR_EBP_(VALUE) and rsi, qword ptr [ebp + VALUE]
#define AND_RSI_FROM_PTR_ESP_(VALUE) and rsi, qword ptr [esp + VALUE]

#define AND_RBP_FROM_PTR_RAX_(VALUE) and rbp, qword ptr [rax + VALUE]
#define AND_RBP_FROM_PTR_RBX_(VALUE) and rbp, qword ptr [rbx + VALUE]
#define AND_RBP_FROM_PTR_RCX_(VALUE) and rbp, qword ptr [rcx + VALUE]
#define AND_RBP_FROM_PTR_RDX_(VALUE) and rbp, qword ptr [rdx + VALUE]
#define AND_RBP_FROM_PTR_RDI_(VALUE) and rbp, qword ptr [rdi + VALUE]
#define AND_RBP_FROM_PTR_RSI_(VALUE) and rbp, qword ptr [rsi + VALUE]
#define AND_RBP_FROM_PTR_RBP_(VALUE) and rbp, qword ptr [rbp + VALUE]
#define AND_RBP_FROM_PTR_RSP_(VALUE) and rbp, qword ptr [rsp + VALUE]
#define AND_RBP_FROM_PTR_R8_(VALUE) and rbp, qword ptr [r8 + VALUE]
#define AND_RBP_FROM_PTR_R9_(VALUE) and rbp, qword ptr [r9 + VALUE]
#define AND_RBP_FROM_PTR_R10_(VALUE) and rbp, qword ptr [r10 + VALUE]
#define AND_RBP_FROM_PTR_R11_(VALUE) and rbp, qword ptr [r11 + VALUE]
#define AND_RBP_FROM_PTR_R12_(VALUE) and rbp, qword ptr [r12 + VALUE]
#define AND_RBP_FROM_PTR_R13_(VALUE) and rbp, qword ptr [r13 + VALUE]
#define AND_RBP_FROM_PTR_R14_(VALUE) and rbp, qword ptr [r14 + VALUE]
#define AND_RBP_FROM_PTR_R15_(VALUE) and rbp, qword ptr [r15 + VALUE]
#define AND_RBP_FROM_PTR_EAX_(VALUE) and rbp, qword ptr [eax + VALUE]
#define AND_RBP_FROM_PTR_EBX_(VALUE) and rbp, qword ptr [ebx + VALUE]
#define AND_RBP_FROM_PTR_ECX_(VALUE) and rbp, qword ptr [ecx + VALUE]
#define AND_RBP_FROM_PTR_EDX_(VALUE) and rbp, qword ptr [edx + VALUE]
#define AND_RBP_FROM_PTR_EDI_(VALUE) and rbp, qword ptr [edi + VALUE]
#define AND_RBP_FROM_PTR_ESI_(VALUE) and rbp, qword ptr [esi + VALUE]
#define AND_RBP_FROM_PTR_EBP_(VALUE) and rbp, qword ptr [ebp + VALUE]
#define AND_RBP_FROM_PTR_ESP_(VALUE) and rbp, qword ptr [esp + VALUE]

#define AND_RSP_FROM_PTR_RAX_(VALUE) and rsp, qword ptr [rax + VALUE]
#define AND_RSP_FROM_PTR_RBX_(VALUE) and rsp, qword ptr [rbx + VALUE]
#define AND_RSP_FROM_PTR_RCX_(VALUE) and rsp, qword ptr [rcx + VALUE]
#define AND_RSP_FROM_PTR_RDX_(VALUE) and rsp, qword ptr [rdx + VALUE]
#define AND_RSP_FROM_PTR_RDI_(VALUE) and rsp, qword ptr [rdi + VALUE]
#define AND_RSP_FROM_PTR_RSI_(VALUE) and rsp, qword ptr [rsi + VALUE]
#define AND_RSP_FROM_PTR_RBP_(VALUE) and rsp, qword ptr [rbp + VALUE]
#define AND_RSP_FROM_PTR_RSP_(VALUE) and rsp, qword ptr [rsp + VALUE]
#define AND_RSP_FROM_PTR_R8_(VALUE) and rsp, qword ptr [r8 + VALUE]
#define AND_RSP_FROM_PTR_R9_(VALUE) and rsp, qword ptr [r9 + VALUE]
#define AND_RSP_FROM_PTR_R10_(VALUE) and rsp, qword ptr [r10 + VALUE]
#define AND_RSP_FROM_PTR_R11_(VALUE) and rsp, qword ptr [r11 + VALUE]
#define AND_RSP_FROM_PTR_R12_(VALUE) and rsp, qword ptr [r12 + VALUE]
#define AND_RSP_FROM_PTR_R13_(VALUE) and rsp, qword ptr [r13 + VALUE]
#define AND_RSP_FROM_PTR_R14_(VALUE) and rsp, qword ptr [r14 + VALUE]
#define AND_RSP_FROM_PTR_R15_(VALUE) and rsp, qword ptr [r15 + VALUE]
#define AND_RSP_FROM_PTR_EAX_(VALUE) and rsp, qword ptr [eax + VALUE]
#define AND_RSP_FROM_PTR_EBX_(VALUE) and rsp, qword ptr [ebx + VALUE]
#define AND_RSP_FROM_PTR_ECX_(VALUE) and rsp, qword ptr [ecx + VALUE]
#define AND_RSP_FROM_PTR_EDX_(VALUE) and rsp, qword ptr [edx + VALUE]
#define AND_RSP_FROM_PTR_EDI_(VALUE) and rsp, qword ptr [edi + VALUE]
#define AND_RSP_FROM_PTR_ESI_(VALUE) and rsp, qword ptr [esi + VALUE]
#define AND_RSP_FROM_PTR_EBP_(VALUE) and rsp, qword ptr [ebp + VALUE]
#define AND_RSP_FROM_PTR_ESP_(VALUE) and rsp, qword ptr [esp + VALUE]

#define AND_R8_FROM_PTR_RAX_(VALUE) and r8, qword ptr [rax + VALUE]
#define AND_R8_FROM_PTR_RBX_(VALUE) and r8, qword ptr [rbx + VALUE]
#define AND_R8_FROM_PTR_RCX_(VALUE) and r8, qword ptr [rcx + VALUE]
#define AND_R8_FROM_PTR_RDX_(VALUE) and r8, qword ptr [rdx + VALUE]
#define AND_R8_FROM_PTR_RDI_(VALUE) and r8, qword ptr [rdi + VALUE]
#define AND_R8_FROM_PTR_RSI_(VALUE) and r8, qword ptr [rsi + VALUE]
#define AND_R8_FROM_PTR_RBP_(VALUE) and r8, qword ptr [rbp + VALUE]
#define AND_R8_FROM_PTR_RSP_(VALUE) and r8, qword ptr [rsp + VALUE]
#define AND_R8_FROM_PTR_R8_(VALUE) and r8, qword ptr [r8 + VALUE]
#define AND_R8_FROM_PTR_R9_(VALUE) and r8, qword ptr [r9 + VALUE]
#define AND_R8_FROM_PTR_R10_(VALUE) and r8, qword ptr [r10 + VALUE]
#define AND_R8_FROM_PTR_R11_(VALUE) and r8, qword ptr [r11 + VALUE]
#define AND_R8_FROM_PTR_R12_(VALUE) and r8, qword ptr [r12 + VALUE]
#define AND_R8_FROM_PTR_R13_(VALUE) and r8, qword ptr [r13 + VALUE]
#define AND_R8_FROM_PTR_R14_(VALUE) and r8, qword ptr [r14 + VALUE]
#define AND_R8_FROM_PTR_R15_(VALUE) and r8, qword ptr [r15 + VALUE]
#define AND_R8_FROM_PTR_EAX_(VALUE) and r8, qword ptr [eax + VALUE]
#define AND_R8_FROM_PTR_EBX_(VALUE) and r8, qword ptr [ebx + VALUE]
#define AND_R8_FROM_PTR_ECX_(VALUE) and r8, qword ptr [ecx + VALUE]
#define AND_R8_FROM_PTR_EDX_(VALUE) and r8, qword ptr [edx + VALUE]
#define AND_R8_FROM_PTR_EDI_(VALUE) and r8, qword ptr [edi + VALUE]
#define AND_R8_FROM_PTR_ESI_(VALUE) and r8, qword ptr [esi + VALUE]
#define AND_R8_FROM_PTR_EBP_(VALUE) and r8, qword ptr [ebp + VALUE]
#define AND_R8_FROM_PTR_ESP_(VALUE) and r8, qword ptr [esp + VALUE]

#define AND_R9_FROM_PTR_RAX_(VALUE) and r9, qword ptr [rax + VALUE]
#define AND_R9_FROM_PTR_RBX_(VALUE) and r9, qword ptr [rbx + VALUE]
#define AND_R9_FROM_PTR_RCX_(VALUE) and r9, qword ptr [rcx + VALUE]
#define AND_R9_FROM_PTR_RDX_(VALUE) and r9, qword ptr [rdx + VALUE]
#define AND_R9_FROM_PTR_RDI_(VALUE) and r9, qword ptr [rdi + VALUE]
#define AND_R9_FROM_PTR_RSI_(VALUE) and r9, qword ptr [rsi + VALUE]
#define AND_R9_FROM_PTR_RBP_(VALUE) and r9, qword ptr [rbp + VALUE]
#define AND_R9_FROM_PTR_RSP_(VALUE) and r9, qword ptr [rsp + VALUE]
#define AND_R9_FROM_PTR_R8_(VALUE) and r9, qword ptr [r8 + VALUE]
#define AND_R9_FROM_PTR_R9_(VALUE) and r9, qword ptr [r9 + VALUE]
#define AND_R9_FROM_PTR_R10_(VALUE) and r9, qword ptr [r10 + VALUE]
#define AND_R9_FROM_PTR_R11_(VALUE) and r9, qword ptr [r11 + VALUE]
#define AND_R9_FROM_PTR_R12_(VALUE) and r9, qword ptr [r12 + VALUE]
#define AND_R9_FROM_PTR_R13_(VALUE) and r9, qword ptr [r13 + VALUE]
#define AND_R9_FROM_PTR_R14_(VALUE) and r9, qword ptr [r14 + VALUE]
#define AND_R9_FROM_PTR_R15_(VALUE) and r9, qword ptr [r15 + VALUE]
#define AND_R9_FROM_PTR_EAX_(VALUE) and r9, qword ptr [eax + VALUE]
#define AND_R9_FROM_PTR_EBX_(VALUE) and r9, qword ptr [ebx + VALUE]
#define AND_R9_FROM_PTR_ECX_(VALUE) and r9, qword ptr [ecx + VALUE]
#define AND_R9_FROM_PTR_EDX_(VALUE) and r9, qword ptr [edx + VALUE]
#define AND_R9_FROM_PTR_EDI_(VALUE) and r9, qword ptr [edi + VALUE]
#define AND_R9_FROM_PTR_ESI_(VALUE) and r9, qword ptr [esi + VALUE]
#define AND_R9_FROM_PTR_EBP_(VALUE) and r9, qword ptr [ebp + VALUE]
#define AND_R9_FROM_PTR_ESP_(VALUE) and r9, qword ptr [esp + VALUE]

#define AND_R10_FROM_PTR_RAX_(VALUE) and r10, qword ptr [rax + VALUE]
#define AND_R10_FROM_PTR_RBX_(VALUE) and r10, qword ptr [rbx + VALUE]
#define AND_R10_FROM_PTR_RCX_(VALUE) and r10, qword ptr [rcx + VALUE]
#define AND_R10_FROM_PTR_RDX_(VALUE) and r10, qword ptr [rdx + VALUE]
#define AND_R10_FROM_PTR_RDI_(VALUE) and r10, qword ptr [rdi + VALUE]
#define AND_R10_FROM_PTR_RSI_(VALUE) and r10, qword ptr [rsi + VALUE]
#define AND_R10_FROM_PTR_RBP_(VALUE) and r10, qword ptr [rbp + VALUE]
#define AND_R10_FROM_PTR_RSP_(VALUE) and r10, qword ptr [rsp + VALUE]
#define AND_R10_FROM_PTR_R8_(VALUE) and r10, qword ptr [r8 + VALUE]
#define AND_R10_FROM_PTR_R9_(VALUE) and r10, qword ptr [r9 + VALUE]
#define AND_R10_FROM_PTR_R10_(VALUE) and r10, qword ptr [r10 + VALUE]
#define AND_R10_FROM_PTR_R11_(VALUE) and r10, qword ptr [r11 + VALUE]
#define AND_R10_FROM_PTR_R12_(VALUE) and r10, qword ptr [r12 + VALUE]
#define AND_R10_FROM_PTR_R13_(VALUE) and r10, qword ptr [r13 + VALUE]
#define AND_R10_FROM_PTR_R14_(VALUE) and r10, qword ptr [r14 + VALUE]
#define AND_R10_FROM_PTR_R15_(VALUE) and r10, qword ptr [r15 + VALUE]
#define AND_R10_FROM_PTR_EAX_(VALUE) and r10, qword ptr [eax + VALUE]
#define AND_R10_FROM_PTR_EBX_(VALUE) and r10, qword ptr [ebx + VALUE]
#define AND_R10_FROM_PTR_ECX_(VALUE) and r10, qword ptr [ecx + VALUE]
#define AND_R10_FROM_PTR_EDX_(VALUE) and r10, qword ptr [edx + VALUE]
#define AND_R10_FROM_PTR_EDI_(VALUE) and r10, qword ptr [edi + VALUE]
#define AND_R10_FROM_PTR_ESI_(VALUE) and r10, qword ptr [esi + VALUE]
#define AND_R10_FROM_PTR_EBP_(VALUE) and r10, qword ptr [ebp + VALUE]
#define AND_R10_FROM_PTR_ESP_(VALUE) and r10, qword ptr [esp + VALUE]

#define AND_R11_FROM_PTR_RAX_(VALUE) and r11, qword ptr [rax + VALUE]
#define AND_R11_FROM_PTR_RBX_(VALUE) and r11, qword ptr [rbx + VALUE]
#define AND_R11_FROM_PTR_RCX_(VALUE) and r11, qword ptr [rcx + VALUE]
#define AND_R11_FROM_PTR_RDX_(VALUE) and r11, qword ptr [rdx + VALUE]
#define AND_R11_FROM_PTR_RDI_(VALUE) and r11, qword ptr [rdi + VALUE]
#define AND_R11_FROM_PTR_RSI_(VALUE) and r11, qword ptr [rsi + VALUE]
#define AND_R11_FROM_PTR_RBP_(VALUE) and r11, qword ptr [rbp + VALUE]
#define AND_R11_FROM_PTR_RSP_(VALUE) and r11, qword ptr [rsp + VALUE]
#define AND_R11_FROM_PTR_R8_(VALUE) and r11, qword ptr [r8 + VALUE]
#define AND_R11_FROM_PTR_R9_(VALUE) and r11, qword ptr [r9 + VALUE]
#define AND_R11_FROM_PTR_R10_(VALUE) and r11, qword ptr [r10 + VALUE]
#define AND_R11_FROM_PTR_R11_(VALUE) and r11, qword ptr [r11 + VALUE]
#define AND_R11_FROM_PTR_R12_(VALUE) and r11, qword ptr [r12 + VALUE]
#define AND_R11_FROM_PTR_R13_(VALUE) and r11, qword ptr [r13 + VALUE]
#define AND_R11_FROM_PTR_R14_(VALUE) and r11, qword ptr [r14 + VALUE]
#define AND_R11_FROM_PTR_R15_(VALUE) and r11, qword ptr [r15 + VALUE]
#define AND_R11_FROM_PTR_EAX_(VALUE) and r11, qword ptr [eax + VALUE]
#define AND_R11_FROM_PTR_EBX_(VALUE) and r11, qword ptr [ebx + VALUE]
#define AND_R11_FROM_PTR_ECX_(VALUE) and r11, qword ptr [ecx + VALUE]
#define AND_R11_FROM_PTR_EDX_(VALUE) and r11, qword ptr [edx + VALUE]
#define AND_R11_FROM_PTR_EDI_(VALUE) and r11, qword ptr [edi + VALUE]
#define AND_R11_FROM_PTR_ESI_(VALUE) and r11, qword ptr [esi + VALUE]
#define AND_R11_FROM_PTR_EBP_(VALUE) and r11, qword ptr [ebp + VALUE]
#define AND_R11_FROM_PTR_ESP_(VALUE) and r11, qword ptr [esp + VALUE]

#define AND_R12_FROM_PTR_RAX_(VALUE) and r12, qword ptr [rax + VALUE]
#define AND_R12_FROM_PTR_RBX_(VALUE) and r12, qword ptr [rbx + VALUE]
#define AND_R12_FROM_PTR_RCX_(VALUE) and r12, qword ptr [rcx + VALUE]
#define AND_R12_FROM_PTR_RDX_(VALUE) and r12, qword ptr [rdx + VALUE]
#define AND_R12_FROM_PTR_RDI_(VALUE) and r12, qword ptr [rdi + VALUE]
#define AND_R12_FROM_PTR_RSI_(VALUE) and r12, qword ptr [rsi + VALUE]
#define AND_R12_FROM_PTR_RBP_(VALUE) and r12, qword ptr [rbp + VALUE]
#define AND_R12_FROM_PTR_RSP_(VALUE) and r12, qword ptr [rsp + VALUE]
#define AND_R12_FROM_PTR_R8_(VALUE) and r12, qword ptr [r8 + VALUE]
#define AND_R12_FROM_PTR_R9_(VALUE) and r12, qword ptr [r9 + VALUE]
#define AND_R12_FROM_PTR_R10_(VALUE) and r12, qword ptr [r10 + VALUE]
#define AND_R12_FROM_PTR_R11_(VALUE) and r12, qword ptr [r11 + VALUE]
#define AND_R12_FROM_PTR_R12_(VALUE) and r12, qword ptr [r12 + VALUE]
#define AND_R12_FROM_PTR_R13_(VALUE) and r12, qword ptr [r13 + VALUE]
#define AND_R12_FROM_PTR_R14_(VALUE) and r12, qword ptr [r14 + VALUE]
#define AND_R12_FROM_PTR_R15_(VALUE) and r12, qword ptr [r15 + VALUE]
#define AND_R12_FROM_PTR_EAX_(VALUE) and r12, qword ptr [eax + VALUE]
#define AND_R12_FROM_PTR_EBX_(VALUE) and r12, qword ptr [ebx + VALUE]
#define AND_R12_FROM_PTR_ECX_(VALUE) and r12, qword ptr [ecx + VALUE]
#define AND_R12_FROM_PTR_EDX_(VALUE) and r12, qword ptr [edx + VALUE]
#define AND_R12_FROM_PTR_EDI_(VALUE) and r12, qword ptr [edi + VALUE]
#define AND_R12_FROM_PTR_ESI_(VALUE) and r12, qword ptr [esi + VALUE]
#define AND_R12_FROM_PTR_EBP_(VALUE) and r12, qword ptr [ebp + VALUE]
#define AND_R12_FROM_PTR_ESP_(VALUE) and r12, qword ptr [esp + VALUE]

#define AND_R13_FROM_PTR_RAX_(VALUE) and r13, qword ptr [rax + VALUE]
#define AND_R13_FROM_PTR_RBX_(VALUE) and r13, qword ptr [rbx + VALUE]
#define AND_R13_FROM_PTR_RCX_(VALUE) and r13, qword ptr [rcx + VALUE]
#define AND_R13_FROM_PTR_RDX_(VALUE) and r13, qword ptr [rdx + VALUE]
#define AND_R13_FROM_PTR_RDI_(VALUE) and r13, qword ptr [rdi + VALUE]
#define AND_R13_FROM_PTR_RSI_(VALUE) and r13, qword ptr [rsi + VALUE]
#define AND_R13_FROM_PTR_RBP_(VALUE) and r13, qword ptr [rbp + VALUE]
#define AND_R13_FROM_PTR_RSP_(VALUE) and r13, qword ptr [rsp + VALUE]
#define AND_R13_FROM_PTR_R8_(VALUE) and r13, qword ptr [r8 + VALUE]
#define AND_R13_FROM_PTR_R9_(VALUE) and r13, qword ptr [r9 + VALUE]
#define AND_R13_FROM_PTR_R10_(VALUE) and r13, qword ptr [r10 + VALUE]
#define AND_R13_FROM_PTR_R11_(VALUE) and r13, qword ptr [r11 + VALUE]
#define AND_R13_FROM_PTR_R12_(VALUE) and r13, qword ptr [r12 + VALUE]
#define AND_R13_FROM_PTR_R13_(VALUE) and r13, qword ptr [r13 + VALUE]
#define AND_R13_FROM_PTR_R14_(VALUE) and r13, qword ptr [r14 + VALUE]
#define AND_R13_FROM_PTR_R15_(VALUE) and r13, qword ptr [r15 + VALUE]
#define AND_R13_FROM_PTR_EAX_(VALUE) and r13, qword ptr [eax + VALUE]
#define AND_R13_FROM_PTR_EBX_(VALUE) and r13, qword ptr [ebx + VALUE]
#define AND_R13_FROM_PTR_ECX_(VALUE) and r13, qword ptr [ecx + VALUE]
#define AND_R13_FROM_PTR_EDX_(VALUE) and r13, qword ptr [edx + VALUE]
#define AND_R13_FROM_PTR_EDI_(VALUE) and r13, qword ptr [edi + VALUE]
#define AND_R13_FROM_PTR_ESI_(VALUE) and r13, qword ptr [esi + VALUE]
#define AND_R13_FROM_PTR_EBP_(VALUE) and r13, qword ptr [ebp + VALUE]
#define AND_R13_FROM_PTR_ESP_(VALUE) and r13, qword ptr [esp + VALUE]

#define AND_R14_FROM_PTR_RAX_(VALUE) and r14, qword ptr [rax + VALUE]
#define AND_R14_FROM_PTR_RBX_(VALUE) and r14, qword ptr [rbx + VALUE]
#define AND_R14_FROM_PTR_RCX_(VALUE) and r14, qword ptr [rcx + VALUE]
#define AND_R14_FROM_PTR_RDX_(VALUE) and r14, qword ptr [rdx + VALUE]
#define AND_R14_FROM_PTR_RDI_(VALUE) and r14, qword ptr [rdi + VALUE]
#define AND_R14_FROM_PTR_RSI_(VALUE) and r14, qword ptr [rsi + VALUE]
#define AND_R14_FROM_PTR_RBP_(VALUE) and r14, qword ptr [rbp + VALUE]
#define AND_R14_FROM_PTR_RSP_(VALUE) and r14, qword ptr [rsp + VALUE]
#define AND_R14_FROM_PTR_R8_(VALUE) and r14, qword ptr [r8 + VALUE]
#define AND_R14_FROM_PTR_R9_(VALUE) and r14, qword ptr [r9 + VALUE]
#define AND_R14_FROM_PTR_R10_(VALUE) and r14, qword ptr [r10 + VALUE]
#define AND_R14_FROM_PTR_R11_(VALUE) and r14, qword ptr [r11 + VALUE]
#define AND_R14_FROM_PTR_R12_(VALUE) and r14, qword ptr [r12 + VALUE]
#define AND_R14_FROM_PTR_R13_(VALUE) and r14, qword ptr [r13 + VALUE]
#define AND_R14_FROM_PTR_R14_(VALUE) and r14, qword ptr [r14 + VALUE]
#define AND_R14_FROM_PTR_R15_(VALUE) and r14, qword ptr [r15 + VALUE]
#define AND_R14_FROM_PTR_EAX_(VALUE) and r14, qword ptr [eax + VALUE]
#define AND_R14_FROM_PTR_EBX_(VALUE) and r14, qword ptr [ebx + VALUE]
#define AND_R14_FROM_PTR_ECX_(VALUE) and r14, qword ptr [ecx + VALUE]
#define AND_R14_FROM_PTR_EDX_(VALUE) and r14, qword ptr [edx + VALUE]
#define AND_R14_FROM_PTR_EDI_(VALUE) and r14, qword ptr [edi + VALUE]
#define AND_R14_FROM_PTR_ESI_(VALUE) and r14, qword ptr [esi + VALUE]
#define AND_R14_FROM_PTR_EBP_(VALUE) and r14, qword ptr [ebp + VALUE]
#define AND_R14_FROM_PTR_ESP_(VALUE) and r14, qword ptr [esp + VALUE]

#define AND_R15_FROM_PTR_RAX_(VALUE) and r15, qword ptr [rax + VALUE]
#define AND_R15_FROM_PTR_RBX_(VALUE) and r15, qword ptr [rbx + VALUE]
#define AND_R15_FROM_PTR_RCX_(VALUE) and r15, qword ptr [rcx + VALUE]
#define AND_R15_FROM_PTR_RDX_(VALUE) and r15, qword ptr [rdx + VALUE]
#define AND_R15_FROM_PTR_RDI_(VALUE) and r15, qword ptr [rdi + VALUE]
#define AND_R15_FROM_PTR_RSI_(VALUE) and r15, qword ptr [rsi + VALUE]
#define AND_R15_FROM_PTR_RBP_(VALUE) and r15, qword ptr [rbp + VALUE]
#define AND_R15_FROM_PTR_RSP_(VALUE) and r15, qword ptr [rsp + VALUE]
#define AND_R15_FROM_PTR_R8_(VALUE) and r15, qword ptr [r8 + VALUE]
#define AND_R15_FROM_PTR_R9_(VALUE) and r15, qword ptr [r9 + VALUE]
#define AND_R15_FROM_PTR_R10_(VALUE) and r15, qword ptr [r10 + VALUE]
#define AND_R15_FROM_PTR_R11_(VALUE) and r15, qword ptr [r11 + VALUE]
#define AND_R15_FROM_PTR_R12_(VALUE) and r15, qword ptr [r12 + VALUE]
#define AND_R15_FROM_PTR_R13_(VALUE) and r15, qword ptr [r13 + VALUE]
#define AND_R15_FROM_PTR_R14_(VALUE) and r15, qword ptr [r14 + VALUE]
#define AND_R15_FROM_PTR_R15_(VALUE) and r15, qword ptr [r15 + VALUE]
#define AND_R15_FROM_PTR_EAX_(VALUE) and r15, qword ptr [eax + VALUE]
#define AND_R15_FROM_PTR_EBX_(VALUE) and r15, qword ptr [ebx + VALUE]
#define AND_R15_FROM_PTR_ECX_(VALUE) and r15, qword ptr [ecx + VALUE]
#define AND_R15_FROM_PTR_EDX_(VALUE) and r15, qword ptr [edx + VALUE]
#define AND_R15_FROM_PTR_EDI_(VALUE) and r15, qword ptr [edi + VALUE]
#define AND_R15_FROM_PTR_ESI_(VALUE) and r15, qword ptr [esi + VALUE]
#define AND_R15_FROM_PTR_EBP_(VALUE) and r15, qword ptr [ebp + VALUE]
#define AND_R15_FROM_PTR_ESP_(VALUE) and r15, qword ptr [esp + VALUE]

#define AND_RAX_TO_PTR_RAX_(VALUE) and qword ptr [rax + VALUE], rax
#define AND_RAX_TO_PTR_RBX_(VALUE) and qword ptr [rbx + VALUE], rax
#define AND_RAX_TO_PTR_RCX_(VALUE) and qword ptr [rcx + VALUE], rax
#define AND_RAX_TO_PTR_RDX_(VALUE) and qword ptr [rdx + VALUE], rax
#define AND_RAX_TO_PTR_RDI_(VALUE) and qword ptr [rdi + VALUE], rax
#define AND_RAX_TO_PTR_RSI_(VALUE) and qword ptr [rsi + VALUE], rax
#define AND_RAX_TO_PTR_RBP_(VALUE) and qword ptr [rbp + VALUE], rax
#define AND_RAX_TO_PTR_RSP_(VALUE) and qword ptr [rsp + VALUE], rax
#define AND_RAX_TO_PTR_R8_(VALUE) and qword ptr [r8 + VALUE], rax
#define AND_RAX_TO_PTR_R9_(VALUE) and qword ptr [r9 + VALUE], rax
#define AND_RAX_TO_PTR_R10_(VALUE) and qword ptr [r10 + VALUE], rax
#define AND_RAX_TO_PTR_R11_(VALUE) and qword ptr [r11 + VALUE], rax
#define AND_RAX_TO_PTR_R12_(VALUE) and qword ptr [r12 + VALUE], rax
#define AND_RAX_TO_PTR_R13_(VALUE) and qword ptr [r13 + VALUE], rax
#define AND_RAX_TO_PTR_R14_(VALUE) and qword ptr [r14 + VALUE], rax
#define AND_RAX_TO_PTR_R15_(VALUE) and qword ptr [r15 + VALUE], rax
#define AND_RAX_TO_PTR_EAX_(VALUE) and qword ptr [eax + VALUE], rax
#define AND_RAX_TO_PTR_EBX_(VALUE) and qword ptr [ebx + VALUE], rax
#define AND_RAX_TO_PTR_ECX_(VALUE) and qword ptr [ecx + VALUE], rax
#define AND_RAX_TO_PTR_EDX_(VALUE) and qword ptr [edx + VALUE], rax
#define AND_RAX_TO_PTR_EDI_(VALUE) and qword ptr [edi + VALUE], rax
#define AND_RAX_TO_PTR_ESI_(VALUE) and qword ptr [esi + VALUE], rax
#define AND_RAX_TO_PTR_EBP_(VALUE) and qword ptr [ebp + VALUE], rax
#define AND_RAX_TO_PTR_ESP_(VALUE) and qword ptr [esp + VALUE], rax

#define AND_RBX_TO_PTR_RAX_(VALUE) and qword ptr [rax + VALUE], rbx
#define AND_RBX_TO_PTR_RBX_(VALUE) and qword ptr [rbx + VALUE], rbx
#define AND_RBX_TO_PTR_RCX_(VALUE) and qword ptr [rcx + VALUE], rbx
#define AND_RBX_TO_PTR_RDX_(VALUE) and qword ptr [rdx + VALUE], rbx
#define AND_RBX_TO_PTR_RDI_(VALUE) and qword ptr [rdi + VALUE], rbx
#define AND_RBX_TO_PTR_RSI_(VALUE) and qword ptr [rsi + VALUE], rbx
#define AND_RBX_TO_PTR_RBP_(VALUE) and qword ptr [rbp + VALUE], rbx
#define AND_RBX_TO_PTR_RSP_(VALUE) and qword ptr [rsp + VALUE], rbx
#define AND_RBX_TO_PTR_R8_(VALUE) and qword ptr [r8 + VALUE], rbx
#define AND_RBX_TO_PTR_R9_(VALUE) and qword ptr [r9 + VALUE], rbx
#define AND_RBX_TO_PTR_R10_(VALUE) and qword ptr [r10 + VALUE], rbx
#define AND_RBX_TO_PTR_R11_(VALUE) and qword ptr [r11 + VALUE], rbx
#define AND_RBX_TO_PTR_R12_(VALUE) and qword ptr [r12 + VALUE], rbx
#define AND_RBX_TO_PTR_R13_(VALUE) and qword ptr [r13 + VALUE], rbx
#define AND_RBX_TO_PTR_R14_(VALUE) and qword ptr [r14 + VALUE], rbx
#define AND_RBX_TO_PTR_R15_(VALUE) and qword ptr [r15 + VALUE], rbx
#define AND_RBX_TO_PTR_EAX_(VALUE) and qword ptr [eax + VALUE], rbx
#define AND_RBX_TO_PTR_EBX_(VALUE) and qword ptr [ebx + VALUE], rbx
#define AND_RBX_TO_PTR_ECX_(VALUE) and qword ptr [ecx + VALUE], rbx
#define AND_RBX_TO_PTR_EDX_(VALUE) and qword ptr [edx + VALUE], rbx
#define AND_RBX_TO_PTR_EDI_(VALUE) and qword ptr [edi + VALUE], rbx
#define AND_RBX_TO_PTR_ESI_(VALUE) and qword ptr [esi + VALUE], rbx
#define AND_RBX_TO_PTR_EBP_(VALUE) and qword ptr [ebp + VALUE], rbx
#define AND_RBX_TO_PTR_ESP_(VALUE) and qword ptr [esp + VALUE], rbx

#define AND_RCX_TO_PTR_RAX_(VALUE) and qword ptr [rax + VALUE], rcx
#define AND_RCX_TO_PTR_RBX_(VALUE) and qword ptr [rbx + VALUE], rcx
#define AND_RCX_TO_PTR_RCX_(VALUE) and qword ptr [rcx + VALUE], rcx
#define AND_RCX_TO_PTR_RDX_(VALUE) and qword ptr [rdx + VALUE], rcx
#define AND_RCX_TO_PTR_RDI_(VALUE) and qword ptr [rdi + VALUE], rcx
#define AND_RCX_TO_PTR_RSI_(VALUE) and qword ptr [rsi + VALUE], rcx
#define AND_RCX_TO_PTR_RBP_(VALUE) and qword ptr [rbp + VALUE], rcx
#define AND_RCX_TO_PTR_RSP_(VALUE) and qword ptr [rsp + VALUE], rcx
#define AND_RCX_TO_PTR_R8_(VALUE) and qword ptr [r8 + VALUE], rcx
#define AND_RCX_TO_PTR_R9_(VALUE) and qword ptr [r9 + VALUE], rcx
#define AND_RCX_TO_PTR_R10_(VALUE) and qword ptr [r10 + VALUE], rcx
#define AND_RCX_TO_PTR_R11_(VALUE) and qword ptr [r11 + VALUE], rcx
#define AND_RCX_TO_PTR_R12_(VALUE) and qword ptr [r12 + VALUE], rcx
#define AND_RCX_TO_PTR_R13_(VALUE) and qword ptr [r13 + VALUE], rcx
#define AND_RCX_TO_PTR_R14_(VALUE) and qword ptr [r14 + VALUE], rcx
#define AND_RCX_TO_PTR_R15_(VALUE) and qword ptr [r15 + VALUE], rcx
#define AND_RCX_TO_PTR_EAX_(VALUE) and qword ptr [eax + VALUE], rcx
#define AND_RCX_TO_PTR_EBX_(VALUE) and qword ptr [ebx + VALUE], rcx
#define AND_RCX_TO_PTR_ECX_(VALUE) and qword ptr [ecx + VALUE], rcx
#define AND_RCX_TO_PTR_EDX_(VALUE) and qword ptr [edx + VALUE], rcx
#define AND_RCX_TO_PTR_EDI_(VALUE) and qword ptr [edi + VALUE], rcx
#define AND_RCX_TO_PTR_ESI_(VALUE) and qword ptr [esi + VALUE], rcx
#define AND_RCX_TO_PTR_EBP_(VALUE) and qword ptr [ebp + VALUE], rcx
#define AND_RCX_TO_PTR_ESP_(VALUE) and qword ptr [esp + VALUE], rcx

#define AND_RDX_TO_PTR_RAX_(VALUE) and qword ptr [rax + VALUE], rdx
#define AND_RDX_TO_PTR_RBX_(VALUE) and qword ptr [rbx + VALUE], rdx
#define AND_RDX_TO_PTR_RCX_(VALUE) and qword ptr [rcx + VALUE], rdx
#define AND_RDX_TO_PTR_RDX_(VALUE) and qword ptr [rdx + VALUE], rdx
#define AND_RDX_TO_PTR_RDI_(VALUE) and qword ptr [rdi + VALUE], rdx
#define AND_RDX_TO_PTR_RSI_(VALUE) and qword ptr [rsi + VALUE], rdx
#define AND_RDX_TO_PTR_RBP_(VALUE) and qword ptr [rbp + VALUE], rdx
#define AND_RDX_TO_PTR_RSP_(VALUE) and qword ptr [rsp + VALUE], rdx
#define AND_RDX_TO_PTR_R8_(VALUE) and qword ptr [r8 + VALUE], rdx
#define AND_RDX_TO_PTR_R9_(VALUE) and qword ptr [r9 + VALUE], rdx
#define AND_RDX_TO_PTR_R10_(VALUE) and qword ptr [r10 + VALUE], rdx
#define AND_RDX_TO_PTR_R11_(VALUE) and qword ptr [r11 + VALUE], rdx
#define AND_RDX_TO_PTR_R12_(VALUE) and qword ptr [r12 + VALUE], rdx
#define AND_RDX_TO_PTR_R13_(VALUE) and qword ptr [r13 + VALUE], rdx
#define AND_RDX_TO_PTR_R14_(VALUE) and qword ptr [r14 + VALUE], rdx
#define AND_RDX_TO_PTR_R15_(VALUE) and qword ptr [r15 + VALUE], rdx
#define AND_RDX_TO_PTR_EAX_(VALUE) and qword ptr [eax + VALUE], rdx
#define AND_RDX_TO_PTR_EBX_(VALUE) and qword ptr [ebx + VALUE], rdx
#define AND_RDX_TO_PTR_ECX_(VALUE) and qword ptr [ecx + VALUE], rdx
#define AND_RDX_TO_PTR_EDX_(VALUE) and qword ptr [edx + VALUE], rdx
#define AND_RDX_TO_PTR_EDI_(VALUE) and qword ptr [edi + VALUE], rdx
#define AND_RDX_TO_PTR_ESI_(VALUE) and qword ptr [esi + VALUE], rdx
#define AND_RDX_TO_PTR_EBP_(VALUE) and qword ptr [ebp + VALUE], rdx
#define AND_RDX_TO_PTR_ESP_(VALUE) and qword ptr [esp + VALUE], rdx

#define AND_RDI_TO_PTR_RAX_(VALUE) and qword ptr [rax + VALUE], rdi
#define AND_RDI_TO_PTR_RBX_(VALUE) and qword ptr [rbx + VALUE], rdi
#define AND_RDI_TO_PTR_RCX_(VALUE) and qword ptr [rcx + VALUE], rdi
#define AND_RDI_TO_PTR_RDX_(VALUE) and qword ptr [rdx + VALUE], rdi
#define AND_RDI_TO_PTR_RDI_(VALUE) and qword ptr [rdi + VALUE], rdi
#define AND_RDI_TO_PTR_RSI_(VALUE) and qword ptr [rsi + VALUE], rdi
#define AND_RDI_TO_PTR_RBP_(VALUE) and qword ptr [rbp + VALUE], rdi
#define AND_RDI_TO_PTR_RSP_(VALUE) and qword ptr [rsp + VALUE], rdi
#define AND_RDI_TO_PTR_R8_(VALUE) and qword ptr [r8 + VALUE], rdi
#define AND_RDI_TO_PTR_R9_(VALUE) and qword ptr [r9 + VALUE], rdi
#define AND_RDI_TO_PTR_R10_(VALUE) and qword ptr [r10 + VALUE], rdi
#define AND_RDI_TO_PTR_R11_(VALUE) and qword ptr [r11 + VALUE], rdi
#define AND_RDI_TO_PTR_R12_(VALUE) and qword ptr [r12 + VALUE], rdi
#define AND_RDI_TO_PTR_R13_(VALUE) and qword ptr [r13 + VALUE], rdi
#define AND_RDI_TO_PTR_R14_(VALUE) and qword ptr [r14 + VALUE], rdi
#define AND_RDI_TO_PTR_R15_(VALUE) and qword ptr [r15 + VALUE], rdi
#define AND_RDI_TO_PTR_EAX_(VALUE) and qword ptr [eax + VALUE], rdi
#define AND_RDI_TO_PTR_EBX_(VALUE) and qword ptr [ebx + VALUE], rdi
#define AND_RDI_TO_PTR_ECX_(VALUE) and qword ptr [ecx + VALUE], rdi
#define AND_RDI_TO_PTR_EDX_(VALUE) and qword ptr [edx + VALUE], rdi
#define AND_RDI_TO_PTR_EDI_(VALUE) and qword ptr [edi + VALUE], rdi
#define AND_RDI_TO_PTR_ESI_(VALUE) and qword ptr [esi + VALUE], rdi
#define AND_RDI_TO_PTR_EBP_(VALUE) and qword ptr [ebp + VALUE], rdi
#define AND_RDI_TO_PTR_ESP_(VALUE) and qword ptr [esp + VALUE], rdi

#define AND_RSI_TO_PTR_RAX_(VALUE) and qword ptr [rax + VALUE], rsi
#define AND_RSI_TO_PTR_RBX_(VALUE) and qword ptr [rbx + VALUE], rsi
#define AND_RSI_TO_PTR_RCX_(VALUE) and qword ptr [rcx + VALUE], rsi
#define AND_RSI_TO_PTR_RDX_(VALUE) and qword ptr [rdx + VALUE], rsi
#define AND_RSI_TO_PTR_RDI_(VALUE) and qword ptr [rdi + VALUE], rsi
#define AND_RSI_TO_PTR_RSI_(VALUE) and qword ptr [rsi + VALUE], rsi
#define AND_RSI_TO_PTR_RBP_(VALUE) and qword ptr [rbp + VALUE], rsi
#define AND_RSI_TO_PTR_RSP_(VALUE) and qword ptr [rsp + VALUE], rsi
#define AND_RSI_TO_PTR_R8_(VALUE) and qword ptr [r8 + VALUE], rsi
#define AND_RSI_TO_PTR_R9_(VALUE) and qword ptr [r9 + VALUE], rsi
#define AND_RSI_TO_PTR_R10_(VALUE) and qword ptr [r10 + VALUE], rsi
#define AND_RSI_TO_PTR_R11_(VALUE) and qword ptr [r11 + VALUE], rsi
#define AND_RSI_TO_PTR_R12_(VALUE) and qword ptr [r12 + VALUE], rsi
#define AND_RSI_TO_PTR_R13_(VALUE) and qword ptr [r13 + VALUE], rsi
#define AND_RSI_TO_PTR_R14_(VALUE) and qword ptr [r14 + VALUE], rsi
#define AND_RSI_TO_PTR_R15_(VALUE) and qword ptr [r15 + VALUE], rsi
#define AND_RSI_TO_PTR_EAX_(VALUE) and qword ptr [eax + VALUE], rsi
#define AND_RSI_TO_PTR_EBX_(VALUE) and qword ptr [ebx + VALUE], rsi
#define AND_RSI_TO_PTR_ECX_(VALUE) and qword ptr [ecx + VALUE], rsi
#define AND_RSI_TO_PTR_EDX_(VALUE) and qword ptr [edx + VALUE], rsi
#define AND_RSI_TO_PTR_EDI_(VALUE) and qword ptr [edi + VALUE], rsi
#define AND_RSI_TO_PTR_ESI_(VALUE) and qword ptr [esi + VALUE], rsi
#define AND_RSI_TO_PTR_EBP_(VALUE) and qword ptr [ebp + VALUE], rsi
#define AND_RSI_TO_PTR_ESP_(VALUE) and qword ptr [esp + VALUE], rsi

#define AND_RBP_TO_PTR_RAX_(VALUE) and qword ptr [rax + VALUE], rbp
#define AND_RBP_TO_PTR_RBX_(VALUE) and qword ptr [rbx + VALUE], rbp
#define AND_RBP_TO_PTR_RCX_(VALUE) and qword ptr [rcx + VALUE], rbp
#define AND_RBP_TO_PTR_RDX_(VALUE) and qword ptr [rdx + VALUE], rbp
#define AND_RBP_TO_PTR_RDI_(VALUE) and qword ptr [rdi + VALUE], rbp
#define AND_RBP_TO_PTR_RSI_(VALUE) and qword ptr [rsi + VALUE], rbp
#define AND_RBP_TO_PTR_RBP_(VALUE) and qword ptr [rbp + VALUE], rbp
#define AND_RBP_TO_PTR_RSP_(VALUE) and qword ptr [rsp + VALUE], rbp
#define AND_RBP_TO_PTR_R8_(VALUE) and qword ptr [r8 + VALUE], rbp
#define AND_RBP_TO_PTR_R9_(VALUE) and qword ptr [r9 + VALUE], rbp
#define AND_RBP_TO_PTR_R10_(VALUE) and qword ptr [r10 + VALUE], rbp
#define AND_RBP_TO_PTR_R11_(VALUE) and qword ptr [r11 + VALUE], rbp
#define AND_RBP_TO_PTR_R12_(VALUE) and qword ptr [r12 + VALUE], rbp
#define AND_RBP_TO_PTR_R13_(VALUE) and qword ptr [r13 + VALUE], rbp
#define AND_RBP_TO_PTR_R14_(VALUE) and qword ptr [r14 + VALUE], rbp
#define AND_RBP_TO_PTR_R15_(VALUE) and qword ptr [r15 + VALUE], rbp
#define AND_RBP_TO_PTR_EAX_(VALUE) and qword ptr [eax + VALUE], rbp
#define AND_RBP_TO_PTR_EBX_(VALUE) and qword ptr [ebx + VALUE], rbp
#define AND_RBP_TO_PTR_ECX_(VALUE) and qword ptr [ecx + VALUE], rbp
#define AND_RBP_TO_PTR_EDX_(VALUE) and qword ptr [edx + VALUE], rbp
#define AND_RBP_TO_PTR_EDI_(VALUE) and qword ptr [edi + VALUE], rbp
#define AND_RBP_TO_PTR_ESI_(VALUE) and qword ptr [esi + VALUE], rbp
#define AND_RBP_TO_PTR_EBP_(VALUE) and qword ptr [ebp + VALUE], rbp
#define AND_RBP_TO_PTR_ESP_(VALUE) and qword ptr [esp + VALUE], rbp

#define AND_RSP_TO_PTR_RAX_(VALUE) and qword ptr [rax + VALUE], rsp
#define AND_RSP_TO_PTR_RBX_(VALUE) and qword ptr [rbx + VALUE], rsp
#define AND_RSP_TO_PTR_RCX_(VALUE) and qword ptr [rcx + VALUE], rsp
#define AND_RSP_TO_PTR_RDX_(VALUE) and qword ptr [rdx + VALUE], rsp
#define AND_RSP_TO_PTR_RDI_(VALUE) and qword ptr [rdi + VALUE], rsp
#define AND_RSP_TO_PTR_RSI_(VALUE) and qword ptr [rsi + VALUE], rsp
#define AND_RSP_TO_PTR_RBP_(VALUE) and qword ptr [rbp + VALUE], rsp
#define AND_RSP_TO_PTR_RSP_(VALUE) and qword ptr [rsp + VALUE], rsp
#define AND_RSP_TO_PTR_R8_(VALUE) and qword ptr [r8 + VALUE], rsp
#define AND_RSP_TO_PTR_R9_(VALUE) and qword ptr [r9 + VALUE], rsp
#define AND_RSP_TO_PTR_R10_(VALUE) and qword ptr [r10 + VALUE], rsp
#define AND_RSP_TO_PTR_R11_(VALUE) and qword ptr [r11 + VALUE], rsp
#define AND_RSP_TO_PTR_R12_(VALUE) and qword ptr [r12 + VALUE], rsp
#define AND_RSP_TO_PTR_R13_(VALUE) and qword ptr [r13 + VALUE], rsp
#define AND_RSP_TO_PTR_R14_(VALUE) and qword ptr [r14 + VALUE], rsp
#define AND_RSP_TO_PTR_R15_(VALUE) and qword ptr [r15 + VALUE], rsp
#define AND_RSP_TO_PTR_EAX_(VALUE) and qword ptr [eax + VALUE], rsp
#define AND_RSP_TO_PTR_EBX_(VALUE) and qword ptr [ebx + VALUE], rsp
#define AND_RSP_TO_PTR_ECX_(VALUE) and qword ptr [ecx + VALUE], rsp
#define AND_RSP_TO_PTR_EDX_(VALUE) and qword ptr [edx + VALUE], rsp
#define AND_RSP_TO_PTR_EDI_(VALUE) and qword ptr [edi + VALUE], rsp
#define AND_RSP_TO_PTR_ESI_(VALUE) and qword ptr [esi + VALUE], rsp
#define AND_RSP_TO_PTR_EBP_(VALUE) and qword ptr [ebp + VALUE], rsp
#define AND_RSP_TO_PTR_ESP_(VALUE) and qword ptr [esp + VALUE], rsp

#define AND_R8_TO_PTR_RAX_(VALUE) and qword ptr [rax + VALUE], r8
#define AND_R8_TO_PTR_RBX_(VALUE) and qword ptr [rbx + VALUE], r8
#define AND_R8_TO_PTR_RCX_(VALUE) and qword ptr [rcx + VALUE], r8
#define AND_R8_TO_PTR_RDX_(VALUE) and qword ptr [rdx + VALUE], r8
#define AND_R8_TO_PTR_RDI_(VALUE) and qword ptr [rdi + VALUE], r8
#define AND_R8_TO_PTR_RSI_(VALUE) and qword ptr [rsi + VALUE], r8
#define AND_R8_TO_PTR_RBP_(VALUE) and qword ptr [rbp + VALUE], r8
#define AND_R8_TO_PTR_RSP_(VALUE) and qword ptr [rsp + VALUE], r8
#define AND_R8_TO_PTR_R8_(VALUE) and qword ptr [r8 + VALUE], r8
#define AND_R8_TO_PTR_R9_(VALUE) and qword ptr [r9 + VALUE], r8
#define AND_R8_TO_PTR_R10_(VALUE) and qword ptr [r10 + VALUE], r8
#define AND_R8_TO_PTR_R11_(VALUE) and qword ptr [r11 + VALUE], r8
#define AND_R8_TO_PTR_R12_(VALUE) and qword ptr [r12 + VALUE], r8
#define AND_R8_TO_PTR_R13_(VALUE) and qword ptr [r13 + VALUE], r8
#define AND_R8_TO_PTR_R14_(VALUE) and qword ptr [r14 + VALUE], r8
#define AND_R8_TO_PTR_R15_(VALUE) and qword ptr [r15 + VALUE], r8
#define AND_R8_TO_PTR_EAX_(VALUE) and qword ptr [eax + VALUE], r8
#define AND_R8_TO_PTR_EBX_(VALUE) and qword ptr [ebx + VALUE], r8
#define AND_R8_TO_PTR_ECX_(VALUE) and qword ptr [ecx + VALUE], r8
#define AND_R8_TO_PTR_EDX_(VALUE) and qword ptr [edx + VALUE], r8
#define AND_R8_TO_PTR_EDI_(VALUE) and qword ptr [edi + VALUE], r8
#define AND_R8_TO_PTR_ESI_(VALUE) and qword ptr [esi + VALUE], r8
#define AND_R8_TO_PTR_EBP_(VALUE) and qword ptr [ebp + VALUE], r8
#define AND_R8_TO_PTR_ESP_(VALUE) and qword ptr [esp + VALUE], r8

#define AND_R9_TO_PTR_RAX_(VALUE) and qword ptr [rax + VALUE], r9
#define AND_R9_TO_PTR_RBX_(VALUE) and qword ptr [rbx + VALUE], r9
#define AND_R9_TO_PTR_RCX_(VALUE) and qword ptr [rcx + VALUE], r9
#define AND_R9_TO_PTR_RDX_(VALUE) and qword ptr [rdx + VALUE], r9
#define AND_R9_TO_PTR_RDI_(VALUE) and qword ptr [rdi + VALUE], r9
#define AND_R9_TO_PTR_RSI_(VALUE) and qword ptr [rsi + VALUE], r9
#define AND_R9_TO_PTR_RBP_(VALUE) and qword ptr [rbp + VALUE], r9
#define AND_R9_TO_PTR_RSP_(VALUE) and qword ptr [rsp + VALUE], r9
#define AND_R9_TO_PTR_R8_(VALUE) and qword ptr [r8 + VALUE], r9
#define AND_R9_TO_PTR_R9_(VALUE) and qword ptr [r9 + VALUE], r9
#define AND_R9_TO_PTR_R10_(VALUE) and qword ptr [r10 + VALUE], r9
#define AND_R9_TO_PTR_R11_(VALUE) and qword ptr [r11 + VALUE], r9
#define AND_R9_TO_PTR_R12_(VALUE) and qword ptr [r12 + VALUE], r9
#define AND_R9_TO_PTR_R13_(VALUE) and qword ptr [r13 + VALUE], r9
#define AND_R9_TO_PTR_R14_(VALUE) and qword ptr [r14 + VALUE], r9
#define AND_R9_TO_PTR_R15_(VALUE) and qword ptr [r15 + VALUE], r9
#define AND_R9_TO_PTR_EAX_(VALUE) and qword ptr [eax + VALUE], r9
#define AND_R9_TO_PTR_EBX_(VALUE) and qword ptr [ebx + VALUE], r9
#define AND_R9_TO_PTR_ECX_(VALUE) and qword ptr [ecx + VALUE], r9
#define AND_R9_TO_PTR_EDX_(VALUE) and qword ptr [edx + VALUE], r9
#define AND_R9_TO_PTR_EDI_(VALUE) and qword ptr [edi + VALUE], r9
#define AND_R9_TO_PTR_ESI_(VALUE) and qword ptr [esi + VALUE], r9
#define AND_R9_TO_PTR_EBP_(VALUE) and qword ptr [ebp + VALUE], r9
#define AND_R9_TO_PTR_ESP_(VALUE) and qword ptr [esp + VALUE], r9

#define AND_R10_TO_PTR_RAX_(VALUE) and qword ptr [rax + VALUE], r10
#define AND_R10_TO_PTR_RBX_(VALUE) and qword ptr [rbx + VALUE], r10
#define AND_R10_TO_PTR_RCX_(VALUE) and qword ptr [rcx + VALUE], r10
#define AND_R10_TO_PTR_RDX_(VALUE) and qword ptr [rdx + VALUE], r10
#define AND_R10_TO_PTR_RDI_(VALUE) and qword ptr [rdi + VALUE], r10
#define AND_R10_TO_PTR_RSI_(VALUE) and qword ptr [rsi + VALUE], r10
#define AND_R10_TO_PTR_RBP_(VALUE) and qword ptr [rbp + VALUE], r10
#define AND_R10_TO_PTR_RSP_(VALUE) and qword ptr [rsp + VALUE], r10
#define AND_R10_TO_PTR_R8_(VALUE) and qword ptr [r8 + VALUE], r10
#define AND_R10_TO_PTR_R9_(VALUE) and qword ptr [r9 + VALUE], r10
#define AND_R10_TO_PTR_R10_(VALUE) and qword ptr [r10 + VALUE], r10
#define AND_R10_TO_PTR_R11_(VALUE) and qword ptr [r11 + VALUE], r10
#define AND_R10_TO_PTR_R12_(VALUE) and qword ptr [r12 + VALUE], r10
#define AND_R10_TO_PTR_R13_(VALUE) and qword ptr [r13 + VALUE], r10
#define AND_R10_TO_PTR_R14_(VALUE) and qword ptr [r14 + VALUE], r10
#define AND_R10_TO_PTR_R15_(VALUE) and qword ptr [r15 + VALUE], r10
#define AND_R10_TO_PTR_EAX_(VALUE) and qword ptr [eax + VALUE], r10
#define AND_R10_TO_PTR_EBX_(VALUE) and qword ptr [ebx + VALUE], r10
#define AND_R10_TO_PTR_ECX_(VALUE) and qword ptr [ecx + VALUE], r10
#define AND_R10_TO_PTR_EDX_(VALUE) and qword ptr [edx + VALUE], r10
#define AND_R10_TO_PTR_EDI_(VALUE) and qword ptr [edi + VALUE], r10
#define AND_R10_TO_PTR_ESI_(VALUE) and qword ptr [esi + VALUE], r10
#define AND_R10_TO_PTR_EBP_(VALUE) and qword ptr [ebp + VALUE], r10
#define AND_R10_TO_PTR_ESP_(VALUE) and qword ptr [esp + VALUE], r10

#define AND_R11_TO_PTR_RAX_(VALUE) and qword ptr [rax + VALUE], r11
#define AND_R11_TO_PTR_RBX_(VALUE) and qword ptr [rbx + VALUE], r11
#define AND_R11_TO_PTR_RCX_(VALUE) and qword ptr [rcx + VALUE], r11
#define AND_R11_TO_PTR_RDX_(VALUE) and qword ptr [rdx + VALUE], r11
#define AND_R11_TO_PTR_RDI_(VALUE) and qword ptr [rdi + VALUE], r11
#define AND_R11_TO_PTR_RSI_(VALUE) and qword ptr [rsi + VALUE], r11
#define AND_R11_TO_PTR_RBP_(VALUE) and qword ptr [rbp + VALUE], r11
#define AND_R11_TO_PTR_RSP_(VALUE) and qword ptr [rsp + VALUE], r11
#define AND_R11_TO_PTR_R8_(VALUE) and qword ptr [r8 + VALUE], r11
#define AND_R11_TO_PTR_R9_(VALUE) and qword ptr [r9 + VALUE], r11
#define AND_R11_TO_PTR_R10_(VALUE) and qword ptr [r10 + VALUE], r11
#define AND_R11_TO_PTR_R11_(VALUE) and qword ptr [r11 + VALUE], r11
#define AND_R11_TO_PTR_R12_(VALUE) and qword ptr [r12 + VALUE], r11
#define AND_R11_TO_PTR_R13_(VALUE) and qword ptr [r13 + VALUE], r11
#define AND_R11_TO_PTR_R14_(VALUE) and qword ptr [r14 + VALUE], r11
#define AND_R11_TO_PTR_R15_(VALUE) and qword ptr [r15 + VALUE], r11
#define AND_R11_TO_PTR_EAX_(VALUE) and qword ptr [eax + VALUE], r11
#define AND_R11_TO_PTR_EBX_(VALUE) and qword ptr [ebx + VALUE], r11
#define AND_R11_TO_PTR_ECX_(VALUE) and qword ptr [ecx + VALUE], r11
#define AND_R11_TO_PTR_EDX_(VALUE) and qword ptr [edx + VALUE], r11
#define AND_R11_TO_PTR_EDI_(VALUE) and qword ptr [edi + VALUE], r11
#define AND_R11_TO_PTR_ESI_(VALUE) and qword ptr [esi + VALUE], r11
#define AND_R11_TO_PTR_EBP_(VALUE) and qword ptr [ebp + VALUE], r11
#define AND_R11_TO_PTR_ESP_(VALUE) and qword ptr [esp + VALUE], r11

#define AND_R12_TO_PTR_RAX_(VALUE) and qword ptr [rax + VALUE], r12
#define AND_R12_TO_PTR_RBX_(VALUE) and qword ptr [rbx + VALUE], r12
#define AND_R12_TO_PTR_RCX_(VALUE) and qword ptr [rcx + VALUE], r12
#define AND_R12_TO_PTR_RDX_(VALUE) and qword ptr [rdx + VALUE], r12
#define AND_R12_TO_PTR_RDI_(VALUE) and qword ptr [rdi + VALUE], r12
#define AND_R12_TO_PTR_RSI_(VALUE) and qword ptr [rsi + VALUE], r12
#define AND_R12_TO_PTR_RBP_(VALUE) and qword ptr [rbp + VALUE], r12
#define AND_R12_TO_PTR_RSP_(VALUE) and qword ptr [rsp + VALUE], r12
#define AND_R12_TO_PTR_R8_(VALUE) and qword ptr [r8 + VALUE], r12
#define AND_R12_TO_PTR_R9_(VALUE) and qword ptr [r9 + VALUE], r12
#define AND_R12_TO_PTR_R10_(VALUE) and qword ptr [r10 + VALUE], r12
#define AND_R12_TO_PTR_R11_(VALUE) and qword ptr [r11 + VALUE], r12
#define AND_R12_TO_PTR_R12_(VALUE) and qword ptr [r12 + VALUE], r12
#define AND_R12_TO_PTR_R13_(VALUE) and qword ptr [r13 + VALUE], r12
#define AND_R12_TO_PTR_R14_(VALUE) and qword ptr [r14 + VALUE], r12
#define AND_R12_TO_PTR_R15_(VALUE) and qword ptr [r15 + VALUE], r12
#define AND_R12_TO_PTR_EAX_(VALUE) and qword ptr [eax + VALUE], r12
#define AND_R12_TO_PTR_EBX_(VALUE) and qword ptr [ebx + VALUE], r12
#define AND_R12_TO_PTR_ECX_(VALUE) and qword ptr [ecx + VALUE], r12
#define AND_R12_TO_PTR_EDX_(VALUE) and qword ptr [edx + VALUE], r12
#define AND_R12_TO_PTR_EDI_(VALUE) and qword ptr [edi + VALUE], r12
#define AND_R12_TO_PTR_ESI_(VALUE) and qword ptr [esi + VALUE], r12
#define AND_R12_TO_PTR_EBP_(VALUE) and qword ptr [ebp + VALUE], r12
#define AND_R12_TO_PTR_ESP_(VALUE) and qword ptr [esp + VALUE], r12

#define AND_R13_TO_PTR_RAX_(VALUE) and qword ptr [rax + VALUE], r13
#define AND_R13_TO_PTR_RBX_(VALUE) and qword ptr [rbx + VALUE], r13
#define AND_R13_TO_PTR_RCX_(VALUE) and qword ptr [rcx + VALUE], r13
#define AND_R13_TO_PTR_RDX_(VALUE) and qword ptr [rdx + VALUE], r13
#define AND_R13_TO_PTR_RDI_(VALUE) and qword ptr [rdi + VALUE], r13
#define AND_R13_TO_PTR_RSI_(VALUE) and qword ptr [rsi + VALUE], r13
#define AND_R13_TO_PTR_RBP_(VALUE) and qword ptr [rbp + VALUE], r13
#define AND_R13_TO_PTR_RSP_(VALUE) and qword ptr [rsp + VALUE], r13
#define AND_R13_TO_PTR_R8_(VALUE) and qword ptr [r8 + VALUE], r13
#define AND_R13_TO_PTR_R9_(VALUE) and qword ptr [r9 + VALUE], r13
#define AND_R13_TO_PTR_R10_(VALUE) and qword ptr [r10 + VALUE], r13
#define AND_R13_TO_PTR_R11_(VALUE) and qword ptr [r11 + VALUE], r13
#define AND_R13_TO_PTR_R12_(VALUE) and qword ptr [r12 + VALUE], r13
#define AND_R13_TO_PTR_R13_(VALUE) and qword ptr [r13 + VALUE], r13
#define AND_R13_TO_PTR_R14_(VALUE) and qword ptr [r14 + VALUE], r13
#define AND_R13_TO_PTR_R15_(VALUE) and qword ptr [r15 + VALUE], r13
#define AND_R13_TO_PTR_EAX_(VALUE) and qword ptr [eax + VALUE], r13
#define AND_R13_TO_PTR_EBX_(VALUE) and qword ptr [ebx + VALUE], r13
#define AND_R13_TO_PTR_ECX_(VALUE) and qword ptr [ecx + VALUE], r13
#define AND_R13_TO_PTR_EDX_(VALUE) and qword ptr [edx + VALUE], r13
#define AND_R13_TO_PTR_EDI_(VALUE) and qword ptr [edi + VALUE], r13
#define AND_R13_TO_PTR_ESI_(VALUE) and qword ptr [esi + VALUE], r13
#define AND_R13_TO_PTR_EBP_(VALUE) and qword ptr [ebp + VALUE], r13
#define AND_R13_TO_PTR_ESP_(VALUE) and qword ptr [esp + VALUE], r13

#define AND_R14_TO_PTR_RAX_(VALUE) and qword ptr [rax + VALUE], r14
#define AND_R14_TO_PTR_RBX_(VALUE) and qword ptr [rbx + VALUE], r14
#define AND_R14_TO_PTR_RCX_(VALUE) and qword ptr [rcx + VALUE], r14
#define AND_R14_TO_PTR_RDX_(VALUE) and qword ptr [rdx + VALUE], r14
#define AND_R14_TO_PTR_RDI_(VALUE) and qword ptr [rdi + VALUE], r14
#define AND_R14_TO_PTR_RSI_(VALUE) and qword ptr [rsi + VALUE], r14
#define AND_R14_TO_PTR_RBP_(VALUE) and qword ptr [rbp + VALUE], r14
#define AND_R14_TO_PTR_RSP_(VALUE) and qword ptr [rsp + VALUE], r14
#define AND_R14_TO_PTR_R8_(VALUE) and qword ptr [r8 + VALUE], r14
#define AND_R14_TO_PTR_R9_(VALUE) and qword ptr [r9 + VALUE], r14
#define AND_R14_TO_PTR_R10_(VALUE) and qword ptr [r10 + VALUE], r14
#define AND_R14_TO_PTR_R11_(VALUE) and qword ptr [r11 + VALUE], r14
#define AND_R14_TO_PTR_R12_(VALUE) and qword ptr [r12 + VALUE], r14
#define AND_R14_TO_PTR_R13_(VALUE) and qword ptr [r13 + VALUE], r14
#define AND_R14_TO_PTR_R14_(VALUE) and qword ptr [r14 + VALUE], r14
#define AND_R14_TO_PTR_R15_(VALUE) and qword ptr [r15 + VALUE], r14
#define AND_R14_TO_PTR_EAX_(VALUE) and qword ptr [eax + VALUE], r14
#define AND_R14_TO_PTR_EBX_(VALUE) and qword ptr [ebx + VALUE], r14
#define AND_R14_TO_PTR_ECX_(VALUE) and qword ptr [ecx + VALUE], r14
#define AND_R14_TO_PTR_EDX_(VALUE) and qword ptr [edx + VALUE], r14
#define AND_R14_TO_PTR_EDI_(VALUE) and qword ptr [edi + VALUE], r14
#define AND_R14_TO_PTR_ESI_(VALUE) and qword ptr [esi + VALUE], r14
#define AND_R14_TO_PTR_EBP_(VALUE) and qword ptr [ebp + VALUE], r14
#define AND_R14_TO_PTR_ESP_(VALUE) and qword ptr [esp + VALUE], r14

#define AND_R15_TO_PTR_RAX_(VALUE) and qword ptr [rax + VALUE], r15
#define AND_R15_TO_PTR_RBX_(VALUE) and qword ptr [rbx + VALUE], r15
#define AND_R15_TO_PTR_RCX_(VALUE) and qword ptr [rcx + VALUE], r15
#define AND_R15_TO_PTR_RDX_(VALUE) and qword ptr [rdx + VALUE], r15
#define AND_R15_TO_PTR_RDI_(VALUE) and qword ptr [rdi + VALUE], r15
#define AND_R15_TO_PTR_RSI_(VALUE) and qword ptr [rsi + VALUE], r15
#define AND_R15_TO_PTR_RBP_(VALUE) and qword ptr [rbp + VALUE], r15
#define AND_R15_TO_PTR_RSP_(VALUE) and qword ptr [rsp + VALUE], r15
#define AND_R15_TO_PTR_R8_(VALUE) and qword ptr [r8 + VALUE], r15
#define AND_R15_TO_PTR_R9_(VALUE) and qword ptr [r9 + VALUE], r15
#define AND_R15_TO_PTR_R10_(VALUE) and qword ptr [r10 + VALUE], r15
#define AND_R15_TO_PTR_R11_(VALUE) and qword ptr [r11 + VALUE], r15
#define AND_R15_TO_PTR_R12_(VALUE) and qword ptr [r12 + VALUE], r15
#define AND_R15_TO_PTR_R13_(VALUE) and qword ptr [r13 + VALUE], r15
#define AND_R15_TO_PTR_R14_(VALUE) and qword ptr [r14 + VALUE], r15
#define AND_R15_TO_PTR_R15_(VALUE) and qword ptr [r15 + VALUE], r15
#define AND_R15_TO_PTR_EAX_(VALUE) and qword ptr [eax + VALUE], r15
#define AND_R15_TO_PTR_EBX_(VALUE) and qword ptr [ebx + VALUE], r15
#define AND_R15_TO_PTR_ECX_(VALUE) and qword ptr [ecx + VALUE], r15
#define AND_R15_TO_PTR_EDX_(VALUE) and qword ptr [edx + VALUE], r15
#define AND_R15_TO_PTR_EDI_(VALUE) and qword ptr [edi + VALUE], r15
#define AND_R15_TO_PTR_ESI_(VALUE) and qword ptr [esi + VALUE], r15
#define AND_R15_TO_PTR_EBP_(VALUE) and qword ptr [ebp + VALUE], r15
#define AND_R15_TO_PTR_ESP_(VALUE) and qword ptr [esp + VALUE], r15
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
