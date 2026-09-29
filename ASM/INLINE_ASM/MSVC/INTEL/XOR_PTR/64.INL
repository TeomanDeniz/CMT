#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************* [v] 64-BIT MEMORY [v] ************************** */
#define XOR_RAX_FROM_PTR_(VALUE) xor rax, qword ptr [VALUE]
#define XOR_RBX_FROM_PTR_(VALUE) xor rbx, qword ptr [VALUE]
#define XOR_RCX_FROM_PTR_(VALUE) xor rcx, qword ptr [VALUE]
#define XOR_RDX_FROM_PTR_(VALUE) xor rdx, qword ptr [VALUE]
#define XOR_RDI_FROM_PTR_(VALUE) xor rdi, qword ptr [VALUE]
#define XOR_RSI_FROM_PTR_(VALUE) xor rsi, qword ptr [VALUE]
#define XOR_RBP_FROM_PTR_(VALUE) xor rbp, qword ptr [VALUE]
#define XOR_RSP_FROM_PTR_(VALUE) xor rsp, qword ptr [VALUE]
#define XOR_R8_FROM_PTR_(VALUE) xor r8, qword ptr [VALUE]
#define XOR_R9_FROM_PTR_(VALUE) xor r9, qword ptr [VALUE]
#define XOR_R10_FROM_PTR_(VALUE) xor r10, qword ptr [VALUE]
#define XOR_R11_FROM_PTR_(VALUE) xor r11, qword ptr [VALUE]
#define XOR_R12_FROM_PTR_(VALUE) xor r12, qword ptr [VALUE]
#define XOR_R13_FROM_PTR_(VALUE) xor r13, qword ptr [VALUE]
#define XOR_R14_FROM_PTR_(VALUE) xor r14, qword ptr [VALUE]
#define XOR_R15_FROM_PTR_(VALUE) xor r15, qword ptr [VALUE]

#define XOR_RAX_TO_PTR_(VALUE) xor qword ptr [VALUE], rax
#define XOR_RBX_TO_PTR_(VALUE) xor qword ptr [VALUE], rbx
#define XOR_RCX_TO_PTR_(VALUE) xor qword ptr [VALUE], rcx
#define XOR_RDX_TO_PTR_(VALUE) xor qword ptr [VALUE], rdx
#define XOR_RDI_TO_PTR_(VALUE) xor qword ptr [VALUE], rdi
#define XOR_RSI_TO_PTR_(VALUE) xor qword ptr [VALUE], rsi
#define XOR_RBP_TO_PTR_(VALUE) xor qword ptr [VALUE], rbp
#define XOR_RSP_TO_PTR_(VALUE) xor qword ptr [VALUE], rsp
#define XOR_R8_TO_PTR_(VALUE) xor qword ptr [VALUE], r8
#define XOR_R9_TO_PTR_(VALUE) xor qword ptr [VALUE], r9
#define XOR_R10_TO_PTR_(VALUE) xor qword ptr [VALUE], r10
#define XOR_R11_TO_PTR_(VALUE) xor qword ptr [VALUE], r11
#define XOR_R12_TO_PTR_(VALUE) xor qword ptr [VALUE], r12
#define XOR_R13_TO_PTR_(VALUE) xor qword ptr [VALUE], r13
#define XOR_R14_TO_PTR_(VALUE) xor qword ptr [VALUE], r14
#define XOR_R15_TO_PTR_(VALUE) xor qword ptr [VALUE], r15

#define XOR_RAX_FROM_PTR_RAX xor rax, qword ptr [rax]
#define XOR_RAX_FROM_PTR_RBX xor rax, qword ptr [rbx]
#define XOR_RAX_FROM_PTR_RCX xor rax, qword ptr [rcx]
#define XOR_RAX_FROM_PTR_RDX xor rax, qword ptr [rdx]
#define XOR_RAX_FROM_PTR_RDI xor rax, qword ptr [rdi]
#define XOR_RAX_FROM_PTR_RSI xor rax, qword ptr [rsi]
#define XOR_RAX_FROM_PTR_RBP xor rax, qword ptr [rbp]
#define XOR_RAX_FROM_PTR_RSP xor rax, qword ptr [rsp]
#define XOR_RAX_FROM_PTR_R8 xor rax, qword ptr [r8]
#define XOR_RAX_FROM_PTR_R9 xor rax, qword ptr [r9]
#define XOR_RAX_FROM_PTR_R10 xor rax, qword ptr [r10]
#define XOR_RAX_FROM_PTR_R11 xor rax, qword ptr [r11]
#define XOR_RAX_FROM_PTR_R12 xor rax, qword ptr [r12]
#define XOR_RAX_FROM_PTR_R13 xor rax, qword ptr [r13]
#define XOR_RAX_FROM_PTR_R14 xor rax, qword ptr [r14]
#define XOR_RAX_FROM_PTR_R15 xor rax, qword ptr [r15]
#define XOR_RAX_FROM_PTR_EAX xor rax, qword ptr [eax]
#define XOR_RAX_FROM_PTR_EBX xor rax, qword ptr [ebx]
#define XOR_RAX_FROM_PTR_ECX xor rax, qword ptr [ecx]
#define XOR_RAX_FROM_PTR_EDX xor rax, qword ptr [edx]
#define XOR_RAX_FROM_PTR_EDI xor rax, qword ptr [edi]
#define XOR_RAX_FROM_PTR_ESI xor rax, qword ptr [esi]
#define XOR_RAX_FROM_PTR_EBP xor rax, qword ptr [ebp]
#define XOR_RAX_FROM_PTR_ESP xor rax, qword ptr [esp]

#define XOR_RBX_FROM_PTR_RAX xor rbx, qword ptr [rax]
#define XOR_RBX_FROM_PTR_RBX xor rbx, qword ptr [rbx]
#define XOR_RBX_FROM_PTR_RCX xor rbx, qword ptr [rcx]
#define XOR_RBX_FROM_PTR_RDX xor rbx, qword ptr [rdx]
#define XOR_RBX_FROM_PTR_RDI xor rbx, qword ptr [rdi]
#define XOR_RBX_FROM_PTR_RSI xor rbx, qword ptr [rsi]
#define XOR_RBX_FROM_PTR_RBP xor rbx, qword ptr [rbp]
#define XOR_RBX_FROM_PTR_RSP xor rbx, qword ptr [rsp]
#define XOR_RBX_FROM_PTR_R8 xor rbx, qword ptr [r8]
#define XOR_RBX_FROM_PTR_R9 xor rbx, qword ptr [r9]
#define XOR_RBX_FROM_PTR_R10 xor rbx, qword ptr [r10]
#define XOR_RBX_FROM_PTR_R11 xor rbx, qword ptr [r11]
#define XOR_RBX_FROM_PTR_R12 xor rbx, qword ptr [r12]
#define XOR_RBX_FROM_PTR_R13 xor rbx, qword ptr [r13]
#define XOR_RBX_FROM_PTR_R14 xor rbx, qword ptr [r14]
#define XOR_RBX_FROM_PTR_R15 xor rbx, qword ptr [r15]
#define XOR_RBX_FROM_PTR_EAX xor rbx, qword ptr [eax]
#define XOR_RBX_FROM_PTR_EBX xor rbx, qword ptr [ebx]
#define XOR_RBX_FROM_PTR_ECX xor rbx, qword ptr [ecx]
#define XOR_RBX_FROM_PTR_EDX xor rbx, qword ptr [edx]
#define XOR_RBX_FROM_PTR_EDI xor rbx, qword ptr [edi]
#define XOR_RBX_FROM_PTR_ESI xor rbx, qword ptr [esi]
#define XOR_RBX_FROM_PTR_EBP xor rbx, qword ptr [ebp]
#define XOR_RBX_FROM_PTR_ESP xor rbx, qword ptr [esp]

#define XOR_RCX_FROM_PTR_RAX xor rcx, qword ptr [rax]
#define XOR_RCX_FROM_PTR_RBX xor rcx, qword ptr [rbx]
#define XOR_RCX_FROM_PTR_RCX xor rcx, qword ptr [rcx]
#define XOR_RCX_FROM_PTR_RDX xor rcx, qword ptr [rdx]
#define XOR_RCX_FROM_PTR_RDI xor rcx, qword ptr [rdi]
#define XOR_RCX_FROM_PTR_RSI xor rcx, qword ptr [rsi]
#define XOR_RCX_FROM_PTR_RBP xor rcx, qword ptr [rbp]
#define XOR_RCX_FROM_PTR_RSP xor rcx, qword ptr [rsp]
#define XOR_RCX_FROM_PTR_R8 xor rcx, qword ptr [r8]
#define XOR_RCX_FROM_PTR_R9 xor rcx, qword ptr [r9]
#define XOR_RCX_FROM_PTR_R10 xor rcx, qword ptr [r10]
#define XOR_RCX_FROM_PTR_R11 xor rcx, qword ptr [r11]
#define XOR_RCX_FROM_PTR_R12 xor rcx, qword ptr [r12]
#define XOR_RCX_FROM_PTR_R13 xor rcx, qword ptr [r13]
#define XOR_RCX_FROM_PTR_R14 xor rcx, qword ptr [r14]
#define XOR_RCX_FROM_PTR_R15 xor rcx, qword ptr [r15]
#define XOR_RCX_FROM_PTR_EAX xor rcx, qword ptr [eax]
#define XOR_RCX_FROM_PTR_EBX xor rcx, qword ptr [ebx]
#define XOR_RCX_FROM_PTR_ECX xor rcx, qword ptr [ecx]
#define XOR_RCX_FROM_PTR_EDX xor rcx, qword ptr [edx]
#define XOR_RCX_FROM_PTR_EDI xor rcx, qword ptr [edi]
#define XOR_RCX_FROM_PTR_ESI xor rcx, qword ptr [esi]
#define XOR_RCX_FROM_PTR_EBP xor rcx, qword ptr [ebp]
#define XOR_RCX_FROM_PTR_ESP xor rcx, qword ptr [esp]

#define XOR_RDX_FROM_PTR_RAX xor rdx, qword ptr [rax]
#define XOR_RDX_FROM_PTR_RBX xor rdx, qword ptr [rbx]
#define XOR_RDX_FROM_PTR_RCX xor rdx, qword ptr [rcx]
#define XOR_RDX_FROM_PTR_RDX xor rdx, qword ptr [rdx]
#define XOR_RDX_FROM_PTR_RDI xor rdx, qword ptr [rdi]
#define XOR_RDX_FROM_PTR_RSI xor rdx, qword ptr [rsi]
#define XOR_RDX_FROM_PTR_RBP xor rdx, qword ptr [rbp]
#define XOR_RDX_FROM_PTR_RSP xor rdx, qword ptr [rsp]
#define XOR_RDX_FROM_PTR_R8 xor rdx, qword ptr [r8]
#define XOR_RDX_FROM_PTR_R9 xor rdx, qword ptr [r9]
#define XOR_RDX_FROM_PTR_R10 xor rdx, qword ptr [r10]
#define XOR_RDX_FROM_PTR_R11 xor rdx, qword ptr [r11]
#define XOR_RDX_FROM_PTR_R12 xor rdx, qword ptr [r12]
#define XOR_RDX_FROM_PTR_R13 xor rdx, qword ptr [r13]
#define XOR_RDX_FROM_PTR_R14 xor rdx, qword ptr [r14]
#define XOR_RDX_FROM_PTR_R15 xor rdx, qword ptr [r15]
#define XOR_RDX_FROM_PTR_EAX xor rdx, qword ptr [eax]
#define XOR_RDX_FROM_PTR_EBX xor rdx, qword ptr [ebx]
#define XOR_RDX_FROM_PTR_ECX xor rdx, qword ptr [ecx]
#define XOR_RDX_FROM_PTR_EDX xor rdx, qword ptr [edx]
#define XOR_RDX_FROM_PTR_EDI xor rdx, qword ptr [edi]
#define XOR_RDX_FROM_PTR_ESI xor rdx, qword ptr [esi]
#define XOR_RDX_FROM_PTR_EBP xor rdx, qword ptr [ebp]
#define XOR_RDX_FROM_PTR_ESP xor rdx, qword ptr [esp]

#define XOR_RDI_FROM_PTR_RAX xor rdi, qword ptr [rax]
#define XOR_RDI_FROM_PTR_RBX xor rdi, qword ptr [rbx]
#define XOR_RDI_FROM_PTR_RCX xor rdi, qword ptr [rcx]
#define XOR_RDI_FROM_PTR_RDX xor rdi, qword ptr [rdx]
#define XOR_RDI_FROM_PTR_RDI xor rdi, qword ptr [rdi]
#define XOR_RDI_FROM_PTR_RSI xor rdi, qword ptr [rsi]
#define XOR_RDI_FROM_PTR_RBP xor rdi, qword ptr [rbp]
#define XOR_RDI_FROM_PTR_RSP xor rdi, qword ptr [rsp]
#define XOR_RDI_FROM_PTR_R8 xor rdi, qword ptr [r8]
#define XOR_RDI_FROM_PTR_R9 xor rdi, qword ptr [r9]
#define XOR_RDI_FROM_PTR_R10 xor rdi, qword ptr [r10]
#define XOR_RDI_FROM_PTR_R11 xor rdi, qword ptr [r11]
#define XOR_RDI_FROM_PTR_R12 xor rdi, qword ptr [r12]
#define XOR_RDI_FROM_PTR_R13 xor rdi, qword ptr [r13]
#define XOR_RDI_FROM_PTR_R14 xor rdi, qword ptr [r14]
#define XOR_RDI_FROM_PTR_R15 xor rdi, qword ptr [r15]
#define XOR_RDI_FROM_PTR_EAX xor rdi, qword ptr [eax]
#define XOR_RDI_FROM_PTR_EBX xor rdi, qword ptr [ebx]
#define XOR_RDI_FROM_PTR_ECX xor rdi, qword ptr [ecx]
#define XOR_RDI_FROM_PTR_EDX xor rdi, qword ptr [edx]
#define XOR_RDI_FROM_PTR_EDI xor rdi, qword ptr [edi]
#define XOR_RDI_FROM_PTR_ESI xor rdi, qword ptr [esi]
#define XOR_RDI_FROM_PTR_EBP xor rdi, qword ptr [ebp]
#define XOR_RDI_FROM_PTR_ESP xor rdi, qword ptr [esp]

#define XOR_RSI_FROM_PTR_RAX xor rsi, qword ptr [rax]
#define XOR_RSI_FROM_PTR_RBX xor rsi, qword ptr [rbx]
#define XOR_RSI_FROM_PTR_RCX xor rsi, qword ptr [rcx]
#define XOR_RSI_FROM_PTR_RDX xor rsi, qword ptr [rdx]
#define XOR_RSI_FROM_PTR_RDI xor rsi, qword ptr [rdi]
#define XOR_RSI_FROM_PTR_RSI xor rsi, qword ptr [rsi]
#define XOR_RSI_FROM_PTR_RBP xor rsi, qword ptr [rbp]
#define XOR_RSI_FROM_PTR_RSP xor rsi, qword ptr [rsp]
#define XOR_RSI_FROM_PTR_R8 xor rsi, qword ptr [r8]
#define XOR_RSI_FROM_PTR_R9 xor rsi, qword ptr [r9]
#define XOR_RSI_FROM_PTR_R10 xor rsi, qword ptr [r10]
#define XOR_RSI_FROM_PTR_R11 xor rsi, qword ptr [r11]
#define XOR_RSI_FROM_PTR_R12 xor rsi, qword ptr [r12]
#define XOR_RSI_FROM_PTR_R13 xor rsi, qword ptr [r13]
#define XOR_RSI_FROM_PTR_R14 xor rsi, qword ptr [r14]
#define XOR_RSI_FROM_PTR_R15 xor rsi, qword ptr [r15]
#define XOR_RSI_FROM_PTR_EAX xor rsi, qword ptr [eax]
#define XOR_RSI_FROM_PTR_EBX xor rsi, qword ptr [ebx]
#define XOR_RSI_FROM_PTR_ECX xor rsi, qword ptr [ecx]
#define XOR_RSI_FROM_PTR_EDX xor rsi, qword ptr [edx]
#define XOR_RSI_FROM_PTR_EDI xor rsi, qword ptr [edi]
#define XOR_RSI_FROM_PTR_ESI xor rsi, qword ptr [esi]
#define XOR_RSI_FROM_PTR_EBP xor rsi, qword ptr [ebp]
#define XOR_RSI_FROM_PTR_ESP xor rsi, qword ptr [esp]

#define XOR_RBP_FROM_PTR_RAX xor rbp, qword ptr [rax]
#define XOR_RBP_FROM_PTR_RBX xor rbp, qword ptr [rbx]
#define XOR_RBP_FROM_PTR_RCX xor rbp, qword ptr [rcx]
#define XOR_RBP_FROM_PTR_RDX xor rbp, qword ptr [rdx]
#define XOR_RBP_FROM_PTR_RDI xor rbp, qword ptr [rdi]
#define XOR_RBP_FROM_PTR_RSI xor rbp, qword ptr [rsi]
#define XOR_RBP_FROM_PTR_RBP xor rbp, qword ptr [rbp]
#define XOR_RBP_FROM_PTR_RSP xor rbp, qword ptr [rsp]
#define XOR_RBP_FROM_PTR_R8 xor rbp, qword ptr [r8]
#define XOR_RBP_FROM_PTR_R9 xor rbp, qword ptr [r9]
#define XOR_RBP_FROM_PTR_R10 xor rbp, qword ptr [r10]
#define XOR_RBP_FROM_PTR_R11 xor rbp, qword ptr [r11]
#define XOR_RBP_FROM_PTR_R12 xor rbp, qword ptr [r12]
#define XOR_RBP_FROM_PTR_R13 xor rbp, qword ptr [r13]
#define XOR_RBP_FROM_PTR_R14 xor rbp, qword ptr [r14]
#define XOR_RBP_FROM_PTR_R15 xor rbp, qword ptr [r15]
#define XOR_RBP_FROM_PTR_EAX xor rbp, qword ptr [eax]
#define XOR_RBP_FROM_PTR_EBX xor rbp, qword ptr [ebx]
#define XOR_RBP_FROM_PTR_ECX xor rbp, qword ptr [ecx]
#define XOR_RBP_FROM_PTR_EDX xor rbp, qword ptr [edx]
#define XOR_RBP_FROM_PTR_EDI xor rbp, qword ptr [edi]
#define XOR_RBP_FROM_PTR_ESI xor rbp, qword ptr [esi]
#define XOR_RBP_FROM_PTR_EBP xor rbp, qword ptr [ebp]
#define XOR_RBP_FROM_PTR_ESP xor rbp, qword ptr [esp]

#define XOR_RSP_FROM_PTR_RAX xor rsp, qword ptr [rax]
#define XOR_RSP_FROM_PTR_RBX xor rsp, qword ptr [rbx]
#define XOR_RSP_FROM_PTR_RCX xor rsp, qword ptr [rcx]
#define XOR_RSP_FROM_PTR_RDX xor rsp, qword ptr [rdx]
#define XOR_RSP_FROM_PTR_RDI xor rsp, qword ptr [rdi]
#define XOR_RSP_FROM_PTR_RSI xor rsp, qword ptr [rsi]
#define XOR_RSP_FROM_PTR_RBP xor rsp, qword ptr [rbp]
#define XOR_RSP_FROM_PTR_RSP xor rsp, qword ptr [rsp]
#define XOR_RSP_FROM_PTR_R8 xor rsp, qword ptr [r8]
#define XOR_RSP_FROM_PTR_R9 xor rsp, qword ptr [r9]
#define XOR_RSP_FROM_PTR_R10 xor rsp, qword ptr [r10]
#define XOR_RSP_FROM_PTR_R11 xor rsp, qword ptr [r11]
#define XOR_RSP_FROM_PTR_R12 xor rsp, qword ptr [r12]
#define XOR_RSP_FROM_PTR_R13 xor rsp, qword ptr [r13]
#define XOR_RSP_FROM_PTR_R14 xor rsp, qword ptr [r14]
#define XOR_RSP_FROM_PTR_R15 xor rsp, qword ptr [r15]
#define XOR_RSP_FROM_PTR_EAX xor rsp, qword ptr [eax]
#define XOR_RSP_FROM_PTR_EBX xor rsp, qword ptr [ebx]
#define XOR_RSP_FROM_PTR_ECX xor rsp, qword ptr [ecx]
#define XOR_RSP_FROM_PTR_EDX xor rsp, qword ptr [edx]
#define XOR_RSP_FROM_PTR_EDI xor rsp, qword ptr [edi]
#define XOR_RSP_FROM_PTR_ESI xor rsp, qword ptr [esi]
#define XOR_RSP_FROM_PTR_EBP xor rsp, qword ptr [ebp]
#define XOR_RSP_FROM_PTR_ESP xor rsp, qword ptr [esp]

#define XOR_R8_FROM_PTR_RAX xor r8, qword ptr [rax]
#define XOR_R8_FROM_PTR_RBX xor r8, qword ptr [rbx]
#define XOR_R8_FROM_PTR_RCX xor r8, qword ptr [rcx]
#define XOR_R8_FROM_PTR_RDX xor r8, qword ptr [rdx]
#define XOR_R8_FROM_PTR_RDI xor r8, qword ptr [rdi]
#define XOR_R8_FROM_PTR_RSI xor r8, qword ptr [rsi]
#define XOR_R8_FROM_PTR_RBP xor r8, qword ptr [rbp]
#define XOR_R8_FROM_PTR_RSP xor r8, qword ptr [rsp]
#define XOR_R8_FROM_PTR_R8 xor r8, qword ptr [r8]
#define XOR_R8_FROM_PTR_R9 xor r8, qword ptr [r9]
#define XOR_R8_FROM_PTR_R10 xor r8, qword ptr [r10]
#define XOR_R8_FROM_PTR_R11 xor r8, qword ptr [r11]
#define XOR_R8_FROM_PTR_R12 xor r8, qword ptr [r12]
#define XOR_R8_FROM_PTR_R13 xor r8, qword ptr [r13]
#define XOR_R8_FROM_PTR_R14 xor r8, qword ptr [r14]
#define XOR_R8_FROM_PTR_R15 xor r8, qword ptr [r15]
#define XOR_R8_FROM_PTR_EAX xor r8, qword ptr [eax]
#define XOR_R8_FROM_PTR_EBX xor r8, qword ptr [ebx]
#define XOR_R8_FROM_PTR_ECX xor r8, qword ptr [ecx]
#define XOR_R8_FROM_PTR_EDX xor r8, qword ptr [edx]
#define XOR_R8_FROM_PTR_EDI xor r8, qword ptr [edi]
#define XOR_R8_FROM_PTR_ESI xor r8, qword ptr [esi]
#define XOR_R8_FROM_PTR_EBP xor r8, qword ptr [ebp]
#define XOR_R8_FROM_PTR_ESP xor r8, qword ptr [esp]

#define XOR_R9_FROM_PTR_RAX xor r9, qword ptr [rax]
#define XOR_R9_FROM_PTR_RBX xor r9, qword ptr [rbx]
#define XOR_R9_FROM_PTR_RCX xor r9, qword ptr [rcx]
#define XOR_R9_FROM_PTR_RDX xor r9, qword ptr [rdx]
#define XOR_R9_FROM_PTR_RDI xor r9, qword ptr [rdi]
#define XOR_R9_FROM_PTR_RSI xor r9, qword ptr [rsi]
#define XOR_R9_FROM_PTR_RBP xor r9, qword ptr [rbp]
#define XOR_R9_FROM_PTR_RSP xor r9, qword ptr [rsp]
#define XOR_R9_FROM_PTR_R8 xor r9, qword ptr [r8]
#define XOR_R9_FROM_PTR_R9 xor r9, qword ptr [r9]
#define XOR_R9_FROM_PTR_R10 xor r9, qword ptr [r10]
#define XOR_R9_FROM_PTR_R11 xor r9, qword ptr [r11]
#define XOR_R9_FROM_PTR_R12 xor r9, qword ptr [r12]
#define XOR_R9_FROM_PTR_R13 xor r9, qword ptr [r13]
#define XOR_R9_FROM_PTR_R14 xor r9, qword ptr [r14]
#define XOR_R9_FROM_PTR_R15 xor r9, qword ptr [r15]
#define XOR_R9_FROM_PTR_EAX xor r9, qword ptr [eax]
#define XOR_R9_FROM_PTR_EBX xor r9, qword ptr [ebx]
#define XOR_R9_FROM_PTR_ECX xor r9, qword ptr [ecx]
#define XOR_R9_FROM_PTR_EDX xor r9, qword ptr [edx]
#define XOR_R9_FROM_PTR_EDI xor r9, qword ptr [edi]
#define XOR_R9_FROM_PTR_ESI xor r9, qword ptr [esi]
#define XOR_R9_FROM_PTR_EBP xor r9, qword ptr [ebp]
#define XOR_R9_FROM_PTR_ESP xor r9, qword ptr [esp]

#define XOR_R10_FROM_PTR_RAX xor r10, qword ptr [rax]
#define XOR_R10_FROM_PTR_RBX xor r10, qword ptr [rbx]
#define XOR_R10_FROM_PTR_RCX xor r10, qword ptr [rcx]
#define XOR_R10_FROM_PTR_RDX xor r10, qword ptr [rdx]
#define XOR_R10_FROM_PTR_RDI xor r10, qword ptr [rdi]
#define XOR_R10_FROM_PTR_RSI xor r10, qword ptr [rsi]
#define XOR_R10_FROM_PTR_RBP xor r10, qword ptr [rbp]
#define XOR_R10_FROM_PTR_RSP xor r10, qword ptr [rsp]
#define XOR_R10_FROM_PTR_R8 xor r10, qword ptr [r8]
#define XOR_R10_FROM_PTR_R9 xor r10, qword ptr [r9]
#define XOR_R10_FROM_PTR_R10 xor r10, qword ptr [r10]
#define XOR_R10_FROM_PTR_R11 xor r10, qword ptr [r11]
#define XOR_R10_FROM_PTR_R12 xor r10, qword ptr [r12]
#define XOR_R10_FROM_PTR_R13 xor r10, qword ptr [r13]
#define XOR_R10_FROM_PTR_R14 xor r10, qword ptr [r14]
#define XOR_R10_FROM_PTR_R15 xor r10, qword ptr [r15]
#define XOR_R10_FROM_PTR_EAX xor r10, qword ptr [eax]
#define XOR_R10_FROM_PTR_EBX xor r10, qword ptr [ebx]
#define XOR_R10_FROM_PTR_ECX xor r10, qword ptr [ecx]
#define XOR_R10_FROM_PTR_EDX xor r10, qword ptr [edx]
#define XOR_R10_FROM_PTR_EDI xor r10, qword ptr [edi]
#define XOR_R10_FROM_PTR_ESI xor r10, qword ptr [esi]
#define XOR_R10_FROM_PTR_EBP xor r10, qword ptr [ebp]
#define XOR_R10_FROM_PTR_ESP xor r10, qword ptr [esp]

#define XOR_R11_FROM_PTR_RAX xor r11, qword ptr [rax]
#define XOR_R11_FROM_PTR_RBX xor r11, qword ptr [rbx]
#define XOR_R11_FROM_PTR_RCX xor r11, qword ptr [rcx]
#define XOR_R11_FROM_PTR_RDX xor r11, qword ptr [rdx]
#define XOR_R11_FROM_PTR_RDI xor r11, qword ptr [rdi]
#define XOR_R11_FROM_PTR_RSI xor r11, qword ptr [rsi]
#define XOR_R11_FROM_PTR_RBP xor r11, qword ptr [rbp]
#define XOR_R11_FROM_PTR_RSP xor r11, qword ptr [rsp]
#define XOR_R11_FROM_PTR_R8 xor r11, qword ptr [r8]
#define XOR_R11_FROM_PTR_R9 xor r11, qword ptr [r9]
#define XOR_R11_FROM_PTR_R10 xor r11, qword ptr [r10]
#define XOR_R11_FROM_PTR_R11 xor r11, qword ptr [r11]
#define XOR_R11_FROM_PTR_R12 xor r11, qword ptr [r12]
#define XOR_R11_FROM_PTR_R13 xor r11, qword ptr [r13]
#define XOR_R11_FROM_PTR_R14 xor r11, qword ptr [r14]
#define XOR_R11_FROM_PTR_R15 xor r11, qword ptr [r15]
#define XOR_R11_FROM_PTR_EAX xor r11, qword ptr [eax]
#define XOR_R11_FROM_PTR_EBX xor r11, qword ptr [ebx]
#define XOR_R11_FROM_PTR_ECX xor r11, qword ptr [ecx]
#define XOR_R11_FROM_PTR_EDX xor r11, qword ptr [edx]
#define XOR_R11_FROM_PTR_EDI xor r11, qword ptr [edi]
#define XOR_R11_FROM_PTR_ESI xor r11, qword ptr [esi]
#define XOR_R11_FROM_PTR_EBP xor r11, qword ptr [ebp]
#define XOR_R11_FROM_PTR_ESP xor r11, qword ptr [esp]

#define XOR_R12_FROM_PTR_RAX xor r12, qword ptr [rax]
#define XOR_R12_FROM_PTR_RBX xor r12, qword ptr [rbx]
#define XOR_R12_FROM_PTR_RCX xor r12, qword ptr [rcx]
#define XOR_R12_FROM_PTR_RDX xor r12, qword ptr [rdx]
#define XOR_R12_FROM_PTR_RDI xor r12, qword ptr [rdi]
#define XOR_R12_FROM_PTR_RSI xor r12, qword ptr [rsi]
#define XOR_R12_FROM_PTR_RBP xor r12, qword ptr [rbp]
#define XOR_R12_FROM_PTR_RSP xor r12, qword ptr [rsp]
#define XOR_R12_FROM_PTR_R8 xor r12, qword ptr [r8]
#define XOR_R12_FROM_PTR_R9 xor r12, qword ptr [r9]
#define XOR_R12_FROM_PTR_R10 xor r12, qword ptr [r10]
#define XOR_R12_FROM_PTR_R11 xor r12, qword ptr [r11]
#define XOR_R12_FROM_PTR_R12 xor r12, qword ptr [r12]
#define XOR_R12_FROM_PTR_R13 xor r12, qword ptr [r13]
#define XOR_R12_FROM_PTR_R14 xor r12, qword ptr [r14]
#define XOR_R12_FROM_PTR_R15 xor r12, qword ptr [r15]
#define XOR_R12_FROM_PTR_EAX xor r12, qword ptr [eax]
#define XOR_R12_FROM_PTR_EBX xor r12, qword ptr [ebx]
#define XOR_R12_FROM_PTR_ECX xor r12, qword ptr [ecx]
#define XOR_R12_FROM_PTR_EDX xor r12, qword ptr [edx]
#define XOR_R12_FROM_PTR_EDI xor r12, qword ptr [edi]
#define XOR_R12_FROM_PTR_ESI xor r12, qword ptr [esi]
#define XOR_R12_FROM_PTR_EBP xor r12, qword ptr [ebp]
#define XOR_R12_FROM_PTR_ESP xor r12, qword ptr [esp]

#define XOR_R13_FROM_PTR_RAX xor r13, qword ptr [rax]
#define XOR_R13_FROM_PTR_RBX xor r13, qword ptr [rbx]
#define XOR_R13_FROM_PTR_RCX xor r13, qword ptr [rcx]
#define XOR_R13_FROM_PTR_RDX xor r13, qword ptr [rdx]
#define XOR_R13_FROM_PTR_RDI xor r13, qword ptr [rdi]
#define XOR_R13_FROM_PTR_RSI xor r13, qword ptr [rsi]
#define XOR_R13_FROM_PTR_RBP xor r13, qword ptr [rbp]
#define XOR_R13_FROM_PTR_RSP xor r13, qword ptr [rsp]
#define XOR_R13_FROM_PTR_R8 xor r13, qword ptr [r8]
#define XOR_R13_FROM_PTR_R9 xor r13, qword ptr [r9]
#define XOR_R13_FROM_PTR_R10 xor r13, qword ptr [r10]
#define XOR_R13_FROM_PTR_R11 xor r13, qword ptr [r11]
#define XOR_R13_FROM_PTR_R12 xor r13, qword ptr [r12]
#define XOR_R13_FROM_PTR_R13 xor r13, qword ptr [r13]
#define XOR_R13_FROM_PTR_R14 xor r13, qword ptr [r14]
#define XOR_R13_FROM_PTR_R15 xor r13, qword ptr [r15]
#define XOR_R13_FROM_PTR_EAX xor r13, qword ptr [eax]
#define XOR_R13_FROM_PTR_EBX xor r13, qword ptr [ebx]
#define XOR_R13_FROM_PTR_ECX xor r13, qword ptr [ecx]
#define XOR_R13_FROM_PTR_EDX xor r13, qword ptr [edx]
#define XOR_R13_FROM_PTR_EDI xor r13, qword ptr [edi]
#define XOR_R13_FROM_PTR_ESI xor r13, qword ptr [esi]
#define XOR_R13_FROM_PTR_EBP xor r13, qword ptr [ebp]
#define XOR_R13_FROM_PTR_ESP xor r13, qword ptr [esp]

#define XOR_R14_FROM_PTR_RAX xor r14, qword ptr [rax]
#define XOR_R14_FROM_PTR_RBX xor r14, qword ptr [rbx]
#define XOR_R14_FROM_PTR_RCX xor r14, qword ptr [rcx]
#define XOR_R14_FROM_PTR_RDX xor r14, qword ptr [rdx]
#define XOR_R14_FROM_PTR_RDI xor r14, qword ptr [rdi]
#define XOR_R14_FROM_PTR_RSI xor r14, qword ptr [rsi]
#define XOR_R14_FROM_PTR_RBP xor r14, qword ptr [rbp]
#define XOR_R14_FROM_PTR_RSP xor r14, qword ptr [rsp]
#define XOR_R14_FROM_PTR_R8 xor r14, qword ptr [r8]
#define XOR_R14_FROM_PTR_R9 xor r14, qword ptr [r9]
#define XOR_R14_FROM_PTR_R10 xor r14, qword ptr [r10]
#define XOR_R14_FROM_PTR_R11 xor r14, qword ptr [r11]
#define XOR_R14_FROM_PTR_R12 xor r14, qword ptr [r12]
#define XOR_R14_FROM_PTR_R13 xor r14, qword ptr [r13]
#define XOR_R14_FROM_PTR_R14 xor r14, qword ptr [r14]
#define XOR_R14_FROM_PTR_R15 xor r14, qword ptr [r15]
#define XOR_R14_FROM_PTR_EAX xor r14, qword ptr [eax]
#define XOR_R14_FROM_PTR_EBX xor r14, qword ptr [ebx]
#define XOR_R14_FROM_PTR_ECX xor r14, qword ptr [ecx]
#define XOR_R14_FROM_PTR_EDX xor r14, qword ptr [edx]
#define XOR_R14_FROM_PTR_EDI xor r14, qword ptr [edi]
#define XOR_R14_FROM_PTR_ESI xor r14, qword ptr [esi]
#define XOR_R14_FROM_PTR_EBP xor r14, qword ptr [ebp]
#define XOR_R14_FROM_PTR_ESP xor r14, qword ptr [esp]

#define XOR_R15_FROM_PTR_RAX xor r15, qword ptr [rax]
#define XOR_R15_FROM_PTR_RBX xor r15, qword ptr [rbx]
#define XOR_R15_FROM_PTR_RCX xor r15, qword ptr [rcx]
#define XOR_R15_FROM_PTR_RDX xor r15, qword ptr [rdx]
#define XOR_R15_FROM_PTR_RDI xor r15, qword ptr [rdi]
#define XOR_R15_FROM_PTR_RSI xor r15, qword ptr [rsi]
#define XOR_R15_FROM_PTR_RBP xor r15, qword ptr [rbp]
#define XOR_R15_FROM_PTR_RSP xor r15, qword ptr [rsp]
#define XOR_R15_FROM_PTR_R8 xor r15, qword ptr [r8]
#define XOR_R15_FROM_PTR_R9 xor r15, qword ptr [r9]
#define XOR_R15_FROM_PTR_R10 xor r15, qword ptr [r10]
#define XOR_R15_FROM_PTR_R11 xor r15, qword ptr [r11]
#define XOR_R15_FROM_PTR_R12 xor r15, qword ptr [r12]
#define XOR_R15_FROM_PTR_R13 xor r15, qword ptr [r13]
#define XOR_R15_FROM_PTR_R14 xor r15, qword ptr [r14]
#define XOR_R15_FROM_PTR_R15 xor r15, qword ptr [r15]
#define XOR_R15_FROM_PTR_EAX xor r15, qword ptr [eax]
#define XOR_R15_FROM_PTR_EBX xor r15, qword ptr [ebx]
#define XOR_R15_FROM_PTR_ECX xor r15, qword ptr [ecx]
#define XOR_R15_FROM_PTR_EDX xor r15, qword ptr [edx]
#define XOR_R15_FROM_PTR_EDI xor r15, qword ptr [edi]
#define XOR_R15_FROM_PTR_ESI xor r15, qword ptr [esi]
#define XOR_R15_FROM_PTR_EBP xor r15, qword ptr [ebp]
#define XOR_R15_FROM_PTR_ESP xor r15, qword ptr [esp]

#define XOR_RAX_TO_PTR_RAX xor qword ptr [rax], rax
#define XOR_RAX_TO_PTR_RBX xor qword ptr [rbx], rax
#define XOR_RAX_TO_PTR_RCX xor qword ptr [rcx], rax
#define XOR_RAX_TO_PTR_RDX xor qword ptr [rdx], rax
#define XOR_RAX_TO_PTR_RDI xor qword ptr [rdi], rax
#define XOR_RAX_TO_PTR_RSI xor qword ptr [rsi], rax
#define XOR_RAX_TO_PTR_RBP xor qword ptr [rbp], rax
#define XOR_RAX_TO_PTR_RSP xor qword ptr [rsp], rax
#define XOR_RAX_TO_PTR_R8 xor qword ptr [r8], rax
#define XOR_RAX_TO_PTR_R9 xor qword ptr [r9], rax
#define XOR_RAX_TO_PTR_R10 xor qword ptr [r10], rax
#define XOR_RAX_TO_PTR_R11 xor qword ptr [r11], rax
#define XOR_RAX_TO_PTR_R12 xor qword ptr [r12], rax
#define XOR_RAX_TO_PTR_R13 xor qword ptr [r13], rax
#define XOR_RAX_TO_PTR_R14 xor qword ptr [r14], rax
#define XOR_RAX_TO_PTR_R15 xor qword ptr [r15], rax
#define XOR_RAX_TO_PTR_EAX xor qword ptr [eax], rax
#define XOR_RAX_TO_PTR_EBX xor qword ptr [ebx], rax
#define XOR_RAX_TO_PTR_ECX xor qword ptr [ecx], rax
#define XOR_RAX_TO_PTR_EDX xor qword ptr [edx], rax
#define XOR_RAX_TO_PTR_EDI xor qword ptr [edi], rax
#define XOR_RAX_TO_PTR_ESI xor qword ptr [esi], rax
#define XOR_RAX_TO_PTR_EBP xor qword ptr [ebp], rax
#define XOR_RAX_TO_PTR_ESP xor qword ptr [esp], rax

#define XOR_RBX_TO_PTR_RAX xor qword ptr [rax], rbx
#define XOR_RBX_TO_PTR_RBX xor qword ptr [rbx], rbx
#define XOR_RBX_TO_PTR_RCX xor qword ptr [rcx], rbx
#define XOR_RBX_TO_PTR_RDX xor qword ptr [rdx], rbx
#define XOR_RBX_TO_PTR_RDI xor qword ptr [rdi], rbx
#define XOR_RBX_TO_PTR_RSI xor qword ptr [rsi], rbx
#define XOR_RBX_TO_PTR_RBP xor qword ptr [rbp], rbx
#define XOR_RBX_TO_PTR_RSP xor qword ptr [rsp], rbx
#define XOR_RBX_TO_PTR_R8 xor qword ptr [r8], rbx
#define XOR_RBX_TO_PTR_R9 xor qword ptr [r9], rbx
#define XOR_RBX_TO_PTR_R10 xor qword ptr [r10], rbx
#define XOR_RBX_TO_PTR_R11 xor qword ptr [r11], rbx
#define XOR_RBX_TO_PTR_R12 xor qword ptr [r12], rbx
#define XOR_RBX_TO_PTR_R13 xor qword ptr [r13], rbx
#define XOR_RBX_TO_PTR_R14 xor qword ptr [r14], rbx
#define XOR_RBX_TO_PTR_R15 xor qword ptr [r15], rbx
#define XOR_RBX_TO_PTR_EAX xor qword ptr [eax], rbx
#define XOR_RBX_TO_PTR_EBX xor qword ptr [ebx], rbx
#define XOR_RBX_TO_PTR_ECX xor qword ptr [ecx], rbx
#define XOR_RBX_TO_PTR_EDX xor qword ptr [edx], rbx
#define XOR_RBX_TO_PTR_EDI xor qword ptr [edi], rbx
#define XOR_RBX_TO_PTR_ESI xor qword ptr [esi], rbx
#define XOR_RBX_TO_PTR_EBP xor qword ptr [ebp], rbx
#define XOR_RBX_TO_PTR_ESP xor qword ptr [esp], rbx

#define XOR_RCX_TO_PTR_RAX xor qword ptr [rax], rcx
#define XOR_RCX_TO_PTR_RBX xor qword ptr [rbx], rcx
#define XOR_RCX_TO_PTR_RCX xor qword ptr [rcx], rcx
#define XOR_RCX_TO_PTR_RDX xor qword ptr [rdx], rcx
#define XOR_RCX_TO_PTR_RDI xor qword ptr [rdi], rcx
#define XOR_RCX_TO_PTR_RSI xor qword ptr [rsi], rcx
#define XOR_RCX_TO_PTR_RBP xor qword ptr [rbp], rcx
#define XOR_RCX_TO_PTR_RSP xor qword ptr [rsp], rcx
#define XOR_RCX_TO_PTR_R8 xor qword ptr [r8], rcx
#define XOR_RCX_TO_PTR_R9 xor qword ptr [r9], rcx
#define XOR_RCX_TO_PTR_R10 xor qword ptr [r10], rcx
#define XOR_RCX_TO_PTR_R11 xor qword ptr [r11], rcx
#define XOR_RCX_TO_PTR_R12 xor qword ptr [r12], rcx
#define XOR_RCX_TO_PTR_R13 xor qword ptr [r13], rcx
#define XOR_RCX_TO_PTR_R14 xor qword ptr [r14], rcx
#define XOR_RCX_TO_PTR_R15 xor qword ptr [r15], rcx
#define XOR_RCX_TO_PTR_EAX xor qword ptr [eax], rcx
#define XOR_RCX_TO_PTR_EBX xor qword ptr [ebx], rcx
#define XOR_RCX_TO_PTR_ECX xor qword ptr [ecx], rcx
#define XOR_RCX_TO_PTR_EDX xor qword ptr [edx], rcx
#define XOR_RCX_TO_PTR_EDI xor qword ptr [edi], rcx
#define XOR_RCX_TO_PTR_ESI xor qword ptr [esi], rcx
#define XOR_RCX_TO_PTR_EBP xor qword ptr [ebp], rcx
#define XOR_RCX_TO_PTR_ESP xor qword ptr [esp], rcx

#define XOR_RDX_TO_PTR_RAX xor qword ptr [rax], rdx
#define XOR_RDX_TO_PTR_RBX xor qword ptr [rbx], rdx
#define XOR_RDX_TO_PTR_RCX xor qword ptr [rcx], rdx
#define XOR_RDX_TO_PTR_RDX xor qword ptr [rdx], rdx
#define XOR_RDX_TO_PTR_RDI xor qword ptr [rdi], rdx
#define XOR_RDX_TO_PTR_RSI xor qword ptr [rsi], rdx
#define XOR_RDX_TO_PTR_RBP xor qword ptr [rbp], rdx
#define XOR_RDX_TO_PTR_RSP xor qword ptr [rsp], rdx
#define XOR_RDX_TO_PTR_R8 xor qword ptr [r8], rdx
#define XOR_RDX_TO_PTR_R9 xor qword ptr [r9], rdx
#define XOR_RDX_TO_PTR_R10 xor qword ptr [r10], rdx
#define XOR_RDX_TO_PTR_R11 xor qword ptr [r11], rdx
#define XOR_RDX_TO_PTR_R12 xor qword ptr [r12], rdx
#define XOR_RDX_TO_PTR_R13 xor qword ptr [r13], rdx
#define XOR_RDX_TO_PTR_R14 xor qword ptr [r14], rdx
#define XOR_RDX_TO_PTR_R15 xor qword ptr [r15], rdx
#define XOR_RDX_TO_PTR_EAX xor qword ptr [eax], rdx
#define XOR_RDX_TO_PTR_EBX xor qword ptr [ebx], rdx
#define XOR_RDX_TO_PTR_ECX xor qword ptr [ecx], rdx
#define XOR_RDX_TO_PTR_EDX xor qword ptr [edx], rdx
#define XOR_RDX_TO_PTR_EDI xor qword ptr [edi], rdx
#define XOR_RDX_TO_PTR_ESI xor qword ptr [esi], rdx
#define XOR_RDX_TO_PTR_EBP xor qword ptr [ebp], rdx
#define XOR_RDX_TO_PTR_ESP xor qword ptr [esp], rdx

#define XOR_RDI_TO_PTR_RAX xor qword ptr [rax], rdi
#define XOR_RDI_TO_PTR_RBX xor qword ptr [rbx], rdi
#define XOR_RDI_TO_PTR_RCX xor qword ptr [rcx], rdi
#define XOR_RDI_TO_PTR_RDX xor qword ptr [rdx], rdi
#define XOR_RDI_TO_PTR_RDI xor qword ptr [rdi], rdi
#define XOR_RDI_TO_PTR_RSI xor qword ptr [rsi], rdi
#define XOR_RDI_TO_PTR_RBP xor qword ptr [rbp], rdi
#define XOR_RDI_TO_PTR_RSP xor qword ptr [rsp], rdi
#define XOR_RDI_TO_PTR_R8 xor qword ptr [r8], rdi
#define XOR_RDI_TO_PTR_R9 xor qword ptr [r9], rdi
#define XOR_RDI_TO_PTR_R10 xor qword ptr [r10], rdi
#define XOR_RDI_TO_PTR_R11 xor qword ptr [r11], rdi
#define XOR_RDI_TO_PTR_R12 xor qword ptr [r12], rdi
#define XOR_RDI_TO_PTR_R13 xor qword ptr [r13], rdi
#define XOR_RDI_TO_PTR_R14 xor qword ptr [r14], rdi
#define XOR_RDI_TO_PTR_R15 xor qword ptr [r15], rdi
#define XOR_RDI_TO_PTR_EAX xor qword ptr [eax], rdi
#define XOR_RDI_TO_PTR_EBX xor qword ptr [ebx], rdi
#define XOR_RDI_TO_PTR_ECX xor qword ptr [ecx], rdi
#define XOR_RDI_TO_PTR_EDX xor qword ptr [edx], rdi
#define XOR_RDI_TO_PTR_EDI xor qword ptr [edi], rdi
#define XOR_RDI_TO_PTR_ESI xor qword ptr [esi], rdi
#define XOR_RDI_TO_PTR_EBP xor qword ptr [ebp], rdi
#define XOR_RDI_TO_PTR_ESP xor qword ptr [esp], rdi

#define XOR_RSI_TO_PTR_RAX xor qword ptr [rax], rsi
#define XOR_RSI_TO_PTR_RBX xor qword ptr [rbx], rsi
#define XOR_RSI_TO_PTR_RCX xor qword ptr [rcx], rsi
#define XOR_RSI_TO_PTR_RDX xor qword ptr [rdx], rsi
#define XOR_RSI_TO_PTR_RDI xor qword ptr [rdi], rsi
#define XOR_RSI_TO_PTR_RSI xor qword ptr [rsi], rsi
#define XOR_RSI_TO_PTR_RBP xor qword ptr [rbp], rsi
#define XOR_RSI_TO_PTR_RSP xor qword ptr [rsp], rsi
#define XOR_RSI_TO_PTR_R8 xor qword ptr [r8], rsi
#define XOR_RSI_TO_PTR_R9 xor qword ptr [r9], rsi
#define XOR_RSI_TO_PTR_R10 xor qword ptr [r10], rsi
#define XOR_RSI_TO_PTR_R11 xor qword ptr [r11], rsi
#define XOR_RSI_TO_PTR_R12 xor qword ptr [r12], rsi
#define XOR_RSI_TO_PTR_R13 xor qword ptr [r13], rsi
#define XOR_RSI_TO_PTR_R14 xor qword ptr [r14], rsi
#define XOR_RSI_TO_PTR_R15 xor qword ptr [r15], rsi
#define XOR_RSI_TO_PTR_EAX xor qword ptr [eax], rsi
#define XOR_RSI_TO_PTR_EBX xor qword ptr [ebx], rsi
#define XOR_RSI_TO_PTR_ECX xor qword ptr [ecx], rsi
#define XOR_RSI_TO_PTR_EDX xor qword ptr [edx], rsi
#define XOR_RSI_TO_PTR_EDI xor qword ptr [edi], rsi
#define XOR_RSI_TO_PTR_ESI xor qword ptr [esi], rsi
#define XOR_RSI_TO_PTR_EBP xor qword ptr [ebp], rsi
#define XOR_RSI_TO_PTR_ESP xor qword ptr [esp], rsi

#define XOR_RBP_TO_PTR_RAX xor qword ptr [rax], rbp
#define XOR_RBP_TO_PTR_RBX xor qword ptr [rbx], rbp
#define XOR_RBP_TO_PTR_RCX xor qword ptr [rcx], rbp
#define XOR_RBP_TO_PTR_RDX xor qword ptr [rdx], rbp
#define XOR_RBP_TO_PTR_RDI xor qword ptr [rdi], rbp
#define XOR_RBP_TO_PTR_RSI xor qword ptr [rsi], rbp
#define XOR_RBP_TO_PTR_RBP xor qword ptr [rbp], rbp
#define XOR_RBP_TO_PTR_RSP xor qword ptr [rsp], rbp
#define XOR_RBP_TO_PTR_R8 xor qword ptr [r8], rbp
#define XOR_RBP_TO_PTR_R9 xor qword ptr [r9], rbp
#define XOR_RBP_TO_PTR_R10 xor qword ptr [r10], rbp
#define XOR_RBP_TO_PTR_R11 xor qword ptr [r11], rbp
#define XOR_RBP_TO_PTR_R12 xor qword ptr [r12], rbp
#define XOR_RBP_TO_PTR_R13 xor qword ptr [r13], rbp
#define XOR_RBP_TO_PTR_R14 xor qword ptr [r14], rbp
#define XOR_RBP_TO_PTR_R15 xor qword ptr [r15], rbp
#define XOR_RBP_TO_PTR_EAX xor qword ptr [eax], rbp
#define XOR_RBP_TO_PTR_EBX xor qword ptr [ebx], rbp
#define XOR_RBP_TO_PTR_ECX xor qword ptr [ecx], rbp
#define XOR_RBP_TO_PTR_EDX xor qword ptr [edx], rbp
#define XOR_RBP_TO_PTR_EDI xor qword ptr [edi], rbp
#define XOR_RBP_TO_PTR_ESI xor qword ptr [esi], rbp
#define XOR_RBP_TO_PTR_EBP xor qword ptr [ebp], rbp
#define XOR_RBP_TO_PTR_ESP xor qword ptr [esp], rbp

#define XOR_RSP_TO_PTR_RAX xor qword ptr [rax], rsp
#define XOR_RSP_TO_PTR_RBX xor qword ptr [rbx], rsp
#define XOR_RSP_TO_PTR_RCX xor qword ptr [rcx], rsp
#define XOR_RSP_TO_PTR_RDX xor qword ptr [rdx], rsp
#define XOR_RSP_TO_PTR_RDI xor qword ptr [rdi], rsp
#define XOR_RSP_TO_PTR_RSI xor qword ptr [rsi], rsp
#define XOR_RSP_TO_PTR_RBP xor qword ptr [rbp], rsp
#define XOR_RSP_TO_PTR_RSP xor qword ptr [rsp], rsp
#define XOR_RSP_TO_PTR_R8 xor qword ptr [r8], rsp
#define XOR_RSP_TO_PTR_R9 xor qword ptr [r9], rsp
#define XOR_RSP_TO_PTR_R10 xor qword ptr [r10], rsp
#define XOR_RSP_TO_PTR_R11 xor qword ptr [r11], rsp
#define XOR_RSP_TO_PTR_R12 xor qword ptr [r12], rsp
#define XOR_RSP_TO_PTR_R13 xor qword ptr [r13], rsp
#define XOR_RSP_TO_PTR_R14 xor qword ptr [r14], rsp
#define XOR_RSP_TO_PTR_R15 xor qword ptr [r15], rsp
#define XOR_RSP_TO_PTR_EAX xor qword ptr [eax], rsp
#define XOR_RSP_TO_PTR_EBX xor qword ptr [ebx], rsp
#define XOR_RSP_TO_PTR_ECX xor qword ptr [ecx], rsp
#define XOR_RSP_TO_PTR_EDX xor qword ptr [edx], rsp
#define XOR_RSP_TO_PTR_EDI xor qword ptr [edi], rsp
#define XOR_RSP_TO_PTR_ESI xor qword ptr [esi], rsp
#define XOR_RSP_TO_PTR_EBP xor qword ptr [ebp], rsp
#define XOR_RSP_TO_PTR_ESP xor qword ptr [esp], rsp

#define XOR_R8_TO_PTR_RAX xor qword ptr [rax], r8
#define XOR_R8_TO_PTR_RBX xor qword ptr [rbx], r8
#define XOR_R8_TO_PTR_RCX xor qword ptr [rcx], r8
#define XOR_R8_TO_PTR_RDX xor qword ptr [rdx], r8
#define XOR_R8_TO_PTR_RDI xor qword ptr [rdi], r8
#define XOR_R8_TO_PTR_RSI xor qword ptr [rsi], r8
#define XOR_R8_TO_PTR_RBP xor qword ptr [rbp], r8
#define XOR_R8_TO_PTR_RSP xor qword ptr [rsp], r8
#define XOR_R8_TO_PTR_R8 xor qword ptr [r8], r8
#define XOR_R8_TO_PTR_R9 xor qword ptr [r9], r8
#define XOR_R8_TO_PTR_R10 xor qword ptr [r10], r8
#define XOR_R8_TO_PTR_R11 xor qword ptr [r11], r8
#define XOR_R8_TO_PTR_R12 xor qword ptr [r12], r8
#define XOR_R8_TO_PTR_R13 xor qword ptr [r13], r8
#define XOR_R8_TO_PTR_R14 xor qword ptr [r14], r8
#define XOR_R8_TO_PTR_R15 xor qword ptr [r15], r8
#define XOR_R8_TO_PTR_EAX xor qword ptr [eax], r8
#define XOR_R8_TO_PTR_EBX xor qword ptr [ebx], r8
#define XOR_R8_TO_PTR_ECX xor qword ptr [ecx], r8
#define XOR_R8_TO_PTR_EDX xor qword ptr [edx], r8
#define XOR_R8_TO_PTR_EDI xor qword ptr [edi], r8
#define XOR_R8_TO_PTR_ESI xor qword ptr [esi], r8
#define XOR_R8_TO_PTR_EBP xor qword ptr [ebp], r8
#define XOR_R8_TO_PTR_ESP xor qword ptr [esp], r8

#define XOR_R9_TO_PTR_RAX xor qword ptr [rax], r9
#define XOR_R9_TO_PTR_RBX xor qword ptr [rbx], r9
#define XOR_R9_TO_PTR_RCX xor qword ptr [rcx], r9
#define XOR_R9_TO_PTR_RDX xor qword ptr [rdx], r9
#define XOR_R9_TO_PTR_RDI xor qword ptr [rdi], r9
#define XOR_R9_TO_PTR_RSI xor qword ptr [rsi], r9
#define XOR_R9_TO_PTR_RBP xor qword ptr [rbp], r9
#define XOR_R9_TO_PTR_RSP xor qword ptr [rsp], r9
#define XOR_R9_TO_PTR_R8 xor qword ptr [r8], r9
#define XOR_R9_TO_PTR_R9 xor qword ptr [r9], r9
#define XOR_R9_TO_PTR_R10 xor qword ptr [r10], r9
#define XOR_R9_TO_PTR_R11 xor qword ptr [r11], r9
#define XOR_R9_TO_PTR_R12 xor qword ptr [r12], r9
#define XOR_R9_TO_PTR_R13 xor qword ptr [r13], r9
#define XOR_R9_TO_PTR_R14 xor qword ptr [r14], r9
#define XOR_R9_TO_PTR_R15 xor qword ptr [r15], r9
#define XOR_R9_TO_PTR_EAX xor qword ptr [eax], r9
#define XOR_R9_TO_PTR_EBX xor qword ptr [ebx], r9
#define XOR_R9_TO_PTR_ECX xor qword ptr [ecx], r9
#define XOR_R9_TO_PTR_EDX xor qword ptr [edx], r9
#define XOR_R9_TO_PTR_EDI xor qword ptr [edi], r9
#define XOR_R9_TO_PTR_ESI xor qword ptr [esi], r9
#define XOR_R9_TO_PTR_EBP xor qword ptr [ebp], r9
#define XOR_R9_TO_PTR_ESP xor qword ptr [esp], r9

#define XOR_R10_TO_PTR_RAX xor qword ptr [rax], r10
#define XOR_R10_TO_PTR_RBX xor qword ptr [rbx], r10
#define XOR_R10_TO_PTR_RCX xor qword ptr [rcx], r10
#define XOR_R10_TO_PTR_RDX xor qword ptr [rdx], r10
#define XOR_R10_TO_PTR_RDI xor qword ptr [rdi], r10
#define XOR_R10_TO_PTR_RSI xor qword ptr [rsi], r10
#define XOR_R10_TO_PTR_RBP xor qword ptr [rbp], r10
#define XOR_R10_TO_PTR_RSP xor qword ptr [rsp], r10
#define XOR_R10_TO_PTR_R8 xor qword ptr [r8], r10
#define XOR_R10_TO_PTR_R9 xor qword ptr [r9], r10
#define XOR_R10_TO_PTR_R10 xor qword ptr [r10], r10
#define XOR_R10_TO_PTR_R11 xor qword ptr [r11], r10
#define XOR_R10_TO_PTR_R12 xor qword ptr [r12], r10
#define XOR_R10_TO_PTR_R13 xor qword ptr [r13], r10
#define XOR_R10_TO_PTR_R14 xor qword ptr [r14], r10
#define XOR_R10_TO_PTR_R15 xor qword ptr [r15], r10
#define XOR_R10_TO_PTR_EAX xor qword ptr [eax], r10
#define XOR_R10_TO_PTR_EBX xor qword ptr [ebx], r10
#define XOR_R10_TO_PTR_ECX xor qword ptr [ecx], r10
#define XOR_R10_TO_PTR_EDX xor qword ptr [edx], r10
#define XOR_R10_TO_PTR_EDI xor qword ptr [edi], r10
#define XOR_R10_TO_PTR_ESI xor qword ptr [esi], r10
#define XOR_R10_TO_PTR_EBP xor qword ptr [ebp], r10
#define XOR_R10_TO_PTR_ESP xor qword ptr [esp], r10

#define XOR_R11_TO_PTR_RAX xor qword ptr [rax], r11
#define XOR_R11_TO_PTR_RBX xor qword ptr [rbx], r11
#define XOR_R11_TO_PTR_RCX xor qword ptr [rcx], r11
#define XOR_R11_TO_PTR_RDX xor qword ptr [rdx], r11
#define XOR_R11_TO_PTR_RDI xor qword ptr [rdi], r11
#define XOR_R11_TO_PTR_RSI xor qword ptr [rsi], r11
#define XOR_R11_TO_PTR_RBP xor qword ptr [rbp], r11
#define XOR_R11_TO_PTR_RSP xor qword ptr [rsp], r11
#define XOR_R11_TO_PTR_R8 xor qword ptr [r8], r11
#define XOR_R11_TO_PTR_R9 xor qword ptr [r9], r11
#define XOR_R11_TO_PTR_R10 xor qword ptr [r10], r11
#define XOR_R11_TO_PTR_R11 xor qword ptr [r11], r11
#define XOR_R11_TO_PTR_R12 xor qword ptr [r12], r11
#define XOR_R11_TO_PTR_R13 xor qword ptr [r13], r11
#define XOR_R11_TO_PTR_R14 xor qword ptr [r14], r11
#define XOR_R11_TO_PTR_R15 xor qword ptr [r15], r11
#define XOR_R11_TO_PTR_EAX xor qword ptr [eax], r11
#define XOR_R11_TO_PTR_EBX xor qword ptr [ebx], r11
#define XOR_R11_TO_PTR_ECX xor qword ptr [ecx], r11
#define XOR_R11_TO_PTR_EDX xor qword ptr [edx], r11
#define XOR_R11_TO_PTR_EDI xor qword ptr [edi], r11
#define XOR_R11_TO_PTR_ESI xor qword ptr [esi], r11
#define XOR_R11_TO_PTR_EBP xor qword ptr [ebp], r11
#define XOR_R11_TO_PTR_ESP xor qword ptr [esp], r11

#define XOR_R12_TO_PTR_RAX xor qword ptr [rax], r12
#define XOR_R12_TO_PTR_RBX xor qword ptr [rbx], r12
#define XOR_R12_TO_PTR_RCX xor qword ptr [rcx], r12
#define XOR_R12_TO_PTR_RDX xor qword ptr [rdx], r12
#define XOR_R12_TO_PTR_RDI xor qword ptr [rdi], r12
#define XOR_R12_TO_PTR_RSI xor qword ptr [rsi], r12
#define XOR_R12_TO_PTR_RBP xor qword ptr [rbp], r12
#define XOR_R12_TO_PTR_RSP xor qword ptr [rsp], r12
#define XOR_R12_TO_PTR_R8 xor qword ptr [r8], r12
#define XOR_R12_TO_PTR_R9 xor qword ptr [r9], r12
#define XOR_R12_TO_PTR_R10 xor qword ptr [r10], r12
#define XOR_R12_TO_PTR_R11 xor qword ptr [r11], r12
#define XOR_R12_TO_PTR_R12 xor qword ptr [r12], r12
#define XOR_R12_TO_PTR_R13 xor qword ptr [r13], r12
#define XOR_R12_TO_PTR_R14 xor qword ptr [r14], r12
#define XOR_R12_TO_PTR_R15 xor qword ptr [r15], r12
#define XOR_R12_TO_PTR_EAX xor qword ptr [eax], r12
#define XOR_R12_TO_PTR_EBX xor qword ptr [ebx], r12
#define XOR_R12_TO_PTR_ECX xor qword ptr [ecx], r12
#define XOR_R12_TO_PTR_EDX xor qword ptr [edx], r12
#define XOR_R12_TO_PTR_EDI xor qword ptr [edi], r12
#define XOR_R12_TO_PTR_ESI xor qword ptr [esi], r12
#define XOR_R12_TO_PTR_EBP xor qword ptr [ebp], r12
#define XOR_R12_TO_PTR_ESP xor qword ptr [esp], r12

#define XOR_R13_TO_PTR_RAX xor qword ptr [rax], r13
#define XOR_R13_TO_PTR_RBX xor qword ptr [rbx], r13
#define XOR_R13_TO_PTR_RCX xor qword ptr [rcx], r13
#define XOR_R13_TO_PTR_RDX xor qword ptr [rdx], r13
#define XOR_R13_TO_PTR_RDI xor qword ptr [rdi], r13
#define XOR_R13_TO_PTR_RSI xor qword ptr [rsi], r13
#define XOR_R13_TO_PTR_RBP xor qword ptr [rbp], r13
#define XOR_R13_TO_PTR_RSP xor qword ptr [rsp], r13
#define XOR_R13_TO_PTR_R8 xor qword ptr [r8], r13
#define XOR_R13_TO_PTR_R9 xor qword ptr [r9], r13
#define XOR_R13_TO_PTR_R10 xor qword ptr [r10], r13
#define XOR_R13_TO_PTR_R11 xor qword ptr [r11], r13
#define XOR_R13_TO_PTR_R12 xor qword ptr [r12], r13
#define XOR_R13_TO_PTR_R13 xor qword ptr [r13], r13
#define XOR_R13_TO_PTR_R14 xor qword ptr [r14], r13
#define XOR_R13_TO_PTR_R15 xor qword ptr [r15], r13
#define XOR_R13_TO_PTR_EAX xor qword ptr [eax], r13
#define XOR_R13_TO_PTR_EBX xor qword ptr [ebx], r13
#define XOR_R13_TO_PTR_ECX xor qword ptr [ecx], r13
#define XOR_R13_TO_PTR_EDX xor qword ptr [edx], r13
#define XOR_R13_TO_PTR_EDI xor qword ptr [edi], r13
#define XOR_R13_TO_PTR_ESI xor qword ptr [esi], r13
#define XOR_R13_TO_PTR_EBP xor qword ptr [ebp], r13
#define XOR_R13_TO_PTR_ESP xor qword ptr [esp], r13

#define XOR_R14_TO_PTR_RAX xor qword ptr [rax], r14
#define XOR_R14_TO_PTR_RBX xor qword ptr [rbx], r14
#define XOR_R14_TO_PTR_RCX xor qword ptr [rcx], r14
#define XOR_R14_TO_PTR_RDX xor qword ptr [rdx], r14
#define XOR_R14_TO_PTR_RDI xor qword ptr [rdi], r14
#define XOR_R14_TO_PTR_RSI xor qword ptr [rsi], r14
#define XOR_R14_TO_PTR_RBP xor qword ptr [rbp], r14
#define XOR_R14_TO_PTR_RSP xor qword ptr [rsp], r14
#define XOR_R14_TO_PTR_R8 xor qword ptr [r8], r14
#define XOR_R14_TO_PTR_R9 xor qword ptr [r9], r14
#define XOR_R14_TO_PTR_R10 xor qword ptr [r10], r14
#define XOR_R14_TO_PTR_R11 xor qword ptr [r11], r14
#define XOR_R14_TO_PTR_R12 xor qword ptr [r12], r14
#define XOR_R14_TO_PTR_R13 xor qword ptr [r13], r14
#define XOR_R14_TO_PTR_R14 xor qword ptr [r14], r14
#define XOR_R14_TO_PTR_R15 xor qword ptr [r15], r14
#define XOR_R14_TO_PTR_EAX xor qword ptr [eax], r14
#define XOR_R14_TO_PTR_EBX xor qword ptr [ebx], r14
#define XOR_R14_TO_PTR_ECX xor qword ptr [ecx], r14
#define XOR_R14_TO_PTR_EDX xor qword ptr [edx], r14
#define XOR_R14_TO_PTR_EDI xor qword ptr [edi], r14
#define XOR_R14_TO_PTR_ESI xor qword ptr [esi], r14
#define XOR_R14_TO_PTR_EBP xor qword ptr [ebp], r14
#define XOR_R14_TO_PTR_ESP xor qword ptr [esp], r14

#define XOR_R15_TO_PTR_RAX xor qword ptr [rax], r15
#define XOR_R15_TO_PTR_RBX xor qword ptr [rbx], r15
#define XOR_R15_TO_PTR_RCX xor qword ptr [rcx], r15
#define XOR_R15_TO_PTR_RDX xor qword ptr [rdx], r15
#define XOR_R15_TO_PTR_RDI xor qword ptr [rdi], r15
#define XOR_R15_TO_PTR_RSI xor qword ptr [rsi], r15
#define XOR_R15_TO_PTR_RBP xor qword ptr [rbp], r15
#define XOR_R15_TO_PTR_RSP xor qword ptr [rsp], r15
#define XOR_R15_TO_PTR_R8 xor qword ptr [r8], r15
#define XOR_R15_TO_PTR_R9 xor qword ptr [r9], r15
#define XOR_R15_TO_PTR_R10 xor qword ptr [r10], r15
#define XOR_R15_TO_PTR_R11 xor qword ptr [r11], r15
#define XOR_R15_TO_PTR_R12 xor qword ptr [r12], r15
#define XOR_R15_TO_PTR_R13 xor qword ptr [r13], r15
#define XOR_R15_TO_PTR_R14 xor qword ptr [r14], r15
#define XOR_R15_TO_PTR_R15 xor qword ptr [r15], r15
#define XOR_R15_TO_PTR_EAX xor qword ptr [eax], r15
#define XOR_R15_TO_PTR_EBX xor qword ptr [ebx], r15
#define XOR_R15_TO_PTR_ECX xor qword ptr [ecx], r15
#define XOR_R15_TO_PTR_EDX xor qword ptr [edx], r15
#define XOR_R15_TO_PTR_EDI xor qword ptr [edi], r15
#define XOR_R15_TO_PTR_ESI xor qword ptr [esi], r15
#define XOR_R15_TO_PTR_EBP xor qword ptr [ebp], r15
#define XOR_R15_TO_PTR_ESP xor qword ptr [esp], r15

#define XOR_RAX_FROM_PTR_RAX_(VALUE) xor rax, qword ptr [rax + VALUE]
#define XOR_RAX_FROM_PTR_RBX_(VALUE) xor rax, qword ptr [rbx + VALUE]
#define XOR_RAX_FROM_PTR_RCX_(VALUE) xor rax, qword ptr [rcx + VALUE]
#define XOR_RAX_FROM_PTR_RDX_(VALUE) xor rax, qword ptr [rdx + VALUE]
#define XOR_RAX_FROM_PTR_RDI_(VALUE) xor rax, qword ptr [rdi + VALUE]
#define XOR_RAX_FROM_PTR_RSI_(VALUE) xor rax, qword ptr [rsi + VALUE]
#define XOR_RAX_FROM_PTR_RBP_(VALUE) xor rax, qword ptr [rbp + VALUE]
#define XOR_RAX_FROM_PTR_RSP_(VALUE) xor rax, qword ptr [rsp + VALUE]
#define XOR_RAX_FROM_PTR_R8_(VALUE) xor rax, qword ptr [r8 + VALUE]
#define XOR_RAX_FROM_PTR_R9_(VALUE) xor rax, qword ptr [r9 + VALUE]
#define XOR_RAX_FROM_PTR_R10_(VALUE) xor rax, qword ptr [r10 + VALUE]
#define XOR_RAX_FROM_PTR_R11_(VALUE) xor rax, qword ptr [r11 + VALUE]
#define XOR_RAX_FROM_PTR_R12_(VALUE) xor rax, qword ptr [r12 + VALUE]
#define XOR_RAX_FROM_PTR_R13_(VALUE) xor rax, qword ptr [r13 + VALUE]
#define XOR_RAX_FROM_PTR_R14_(VALUE) xor rax, qword ptr [r14 + VALUE]
#define XOR_RAX_FROM_PTR_R15_(VALUE) xor rax, qword ptr [r15 + VALUE]
#define XOR_RAX_FROM_PTR_EAX_(VALUE) xor rax, qword ptr [eax + VALUE]
#define XOR_RAX_FROM_PTR_EBX_(VALUE) xor rax, qword ptr [ebx + VALUE]
#define XOR_RAX_FROM_PTR_ECX_(VALUE) xor rax, qword ptr [ecx + VALUE]
#define XOR_RAX_FROM_PTR_EDX_(VALUE) xor rax, qword ptr [edx + VALUE]
#define XOR_RAX_FROM_PTR_EDI_(VALUE) xor rax, qword ptr [edi + VALUE]
#define XOR_RAX_FROM_PTR_ESI_(VALUE) xor rax, qword ptr [esi + VALUE]
#define XOR_RAX_FROM_PTR_EBP_(VALUE) xor rax, qword ptr [ebp + VALUE]
#define XOR_RAX_FROM_PTR_ESP_(VALUE) xor rax, qword ptr [esp + VALUE]

#define XOR_RBX_FROM_PTR_RAX_(VALUE) xor rbx, qword ptr [rax + VALUE]
#define XOR_RBX_FROM_PTR_RBX_(VALUE) xor rbx, qword ptr [rbx + VALUE]
#define XOR_RBX_FROM_PTR_RCX_(VALUE) xor rbx, qword ptr [rcx + VALUE]
#define XOR_RBX_FROM_PTR_RDX_(VALUE) xor rbx, qword ptr [rdx + VALUE]
#define XOR_RBX_FROM_PTR_RDI_(VALUE) xor rbx, qword ptr [rdi + VALUE]
#define XOR_RBX_FROM_PTR_RSI_(VALUE) xor rbx, qword ptr [rsi + VALUE]
#define XOR_RBX_FROM_PTR_RBP_(VALUE) xor rbx, qword ptr [rbp + VALUE]
#define XOR_RBX_FROM_PTR_RSP_(VALUE) xor rbx, qword ptr [rsp + VALUE]
#define XOR_RBX_FROM_PTR_R8_(VALUE) xor rbx, qword ptr [r8 + VALUE]
#define XOR_RBX_FROM_PTR_R9_(VALUE) xor rbx, qword ptr [r9 + VALUE]
#define XOR_RBX_FROM_PTR_R10_(VALUE) xor rbx, qword ptr [r10 + VALUE]
#define XOR_RBX_FROM_PTR_R11_(VALUE) xor rbx, qword ptr [r11 + VALUE]
#define XOR_RBX_FROM_PTR_R12_(VALUE) xor rbx, qword ptr [r12 + VALUE]
#define XOR_RBX_FROM_PTR_R13_(VALUE) xor rbx, qword ptr [r13 + VALUE]
#define XOR_RBX_FROM_PTR_R14_(VALUE) xor rbx, qword ptr [r14 + VALUE]
#define XOR_RBX_FROM_PTR_R15_(VALUE) xor rbx, qword ptr [r15 + VALUE]
#define XOR_RBX_FROM_PTR_EAX_(VALUE) xor rbx, qword ptr [eax + VALUE]
#define XOR_RBX_FROM_PTR_EBX_(VALUE) xor rbx, qword ptr [ebx + VALUE]
#define XOR_RBX_FROM_PTR_ECX_(VALUE) xor rbx, qword ptr [ecx + VALUE]
#define XOR_RBX_FROM_PTR_EDX_(VALUE) xor rbx, qword ptr [edx + VALUE]
#define XOR_RBX_FROM_PTR_EDI_(VALUE) xor rbx, qword ptr [edi + VALUE]
#define XOR_RBX_FROM_PTR_ESI_(VALUE) xor rbx, qword ptr [esi + VALUE]
#define XOR_RBX_FROM_PTR_EBP_(VALUE) xor rbx, qword ptr [ebp + VALUE]
#define XOR_RBX_FROM_PTR_ESP_(VALUE) xor rbx, qword ptr [esp + VALUE]

#define XOR_RCX_FROM_PTR_RAX_(VALUE) xor rcx, qword ptr [rax + VALUE]
#define XOR_RCX_FROM_PTR_RBX_(VALUE) xor rcx, qword ptr [rbx + VALUE]
#define XOR_RCX_FROM_PTR_RCX_(VALUE) xor rcx, qword ptr [rcx + VALUE]
#define XOR_RCX_FROM_PTR_RDX_(VALUE) xor rcx, qword ptr [rdx + VALUE]
#define XOR_RCX_FROM_PTR_RDI_(VALUE) xor rcx, qword ptr [rdi + VALUE]
#define XOR_RCX_FROM_PTR_RSI_(VALUE) xor rcx, qword ptr [rsi + VALUE]
#define XOR_RCX_FROM_PTR_RBP_(VALUE) xor rcx, qword ptr [rbp + VALUE]
#define XOR_RCX_FROM_PTR_RSP_(VALUE) xor rcx, qword ptr [rsp + VALUE]
#define XOR_RCX_FROM_PTR_R8_(VALUE) xor rcx, qword ptr [r8 + VALUE]
#define XOR_RCX_FROM_PTR_R9_(VALUE) xor rcx, qword ptr [r9 + VALUE]
#define XOR_RCX_FROM_PTR_R10_(VALUE) xor rcx, qword ptr [r10 + VALUE]
#define XOR_RCX_FROM_PTR_R11_(VALUE) xor rcx, qword ptr [r11 + VALUE]
#define XOR_RCX_FROM_PTR_R12_(VALUE) xor rcx, qword ptr [r12 + VALUE]
#define XOR_RCX_FROM_PTR_R13_(VALUE) xor rcx, qword ptr [r13 + VALUE]
#define XOR_RCX_FROM_PTR_R14_(VALUE) xor rcx, qword ptr [r14 + VALUE]
#define XOR_RCX_FROM_PTR_R15_(VALUE) xor rcx, qword ptr [r15 + VALUE]
#define XOR_RCX_FROM_PTR_EAX_(VALUE) xor rcx, qword ptr [eax + VALUE]
#define XOR_RCX_FROM_PTR_EBX_(VALUE) xor rcx, qword ptr [ebx + VALUE]
#define XOR_RCX_FROM_PTR_ECX_(VALUE) xor rcx, qword ptr [ecx + VALUE]
#define XOR_RCX_FROM_PTR_EDX_(VALUE) xor rcx, qword ptr [edx + VALUE]
#define XOR_RCX_FROM_PTR_EDI_(VALUE) xor rcx, qword ptr [edi + VALUE]
#define XOR_RCX_FROM_PTR_ESI_(VALUE) xor rcx, qword ptr [esi + VALUE]
#define XOR_RCX_FROM_PTR_EBP_(VALUE) xor rcx, qword ptr [ebp + VALUE]
#define XOR_RCX_FROM_PTR_ESP_(VALUE) xor rcx, qword ptr [esp + VALUE]

#define XOR_RDX_FROM_PTR_RAX_(VALUE) xor rdx, qword ptr [rax + VALUE]
#define XOR_RDX_FROM_PTR_RBX_(VALUE) xor rdx, qword ptr [rbx + VALUE]
#define XOR_RDX_FROM_PTR_RCX_(VALUE) xor rdx, qword ptr [rcx + VALUE]
#define XOR_RDX_FROM_PTR_RDX_(VALUE) xor rdx, qword ptr [rdx + VALUE]
#define XOR_RDX_FROM_PTR_RDI_(VALUE) xor rdx, qword ptr [rdi + VALUE]
#define XOR_RDX_FROM_PTR_RSI_(VALUE) xor rdx, qword ptr [rsi + VALUE]
#define XOR_RDX_FROM_PTR_RBP_(VALUE) xor rdx, qword ptr [rbp + VALUE]
#define XOR_RDX_FROM_PTR_RSP_(VALUE) xor rdx, qword ptr [rsp + VALUE]
#define XOR_RDX_FROM_PTR_R8_(VALUE) xor rdx, qword ptr [r8 + VALUE]
#define XOR_RDX_FROM_PTR_R9_(VALUE) xor rdx, qword ptr [r9 + VALUE]
#define XOR_RDX_FROM_PTR_R10_(VALUE) xor rdx, qword ptr [r10 + VALUE]
#define XOR_RDX_FROM_PTR_R11_(VALUE) xor rdx, qword ptr [r11 + VALUE]
#define XOR_RDX_FROM_PTR_R12_(VALUE) xor rdx, qword ptr [r12 + VALUE]
#define XOR_RDX_FROM_PTR_R13_(VALUE) xor rdx, qword ptr [r13 + VALUE]
#define XOR_RDX_FROM_PTR_R14_(VALUE) xor rdx, qword ptr [r14 + VALUE]
#define XOR_RDX_FROM_PTR_R15_(VALUE) xor rdx, qword ptr [r15 + VALUE]
#define XOR_RDX_FROM_PTR_EAX_(VALUE) xor rdx, qword ptr [eax + VALUE]
#define XOR_RDX_FROM_PTR_EBX_(VALUE) xor rdx, qword ptr [ebx + VALUE]
#define XOR_RDX_FROM_PTR_ECX_(VALUE) xor rdx, qword ptr [ecx + VALUE]
#define XOR_RDX_FROM_PTR_EDX_(VALUE) xor rdx, qword ptr [edx + VALUE]
#define XOR_RDX_FROM_PTR_EDI_(VALUE) xor rdx, qword ptr [edi + VALUE]
#define XOR_RDX_FROM_PTR_ESI_(VALUE) xor rdx, qword ptr [esi + VALUE]
#define XOR_RDX_FROM_PTR_EBP_(VALUE) xor rdx, qword ptr [ebp + VALUE]
#define XOR_RDX_FROM_PTR_ESP_(VALUE) xor rdx, qword ptr [esp + VALUE]

#define XOR_RDI_FROM_PTR_RAX_(VALUE) xor rdi, qword ptr [rax + VALUE]
#define XOR_RDI_FROM_PTR_RBX_(VALUE) xor rdi, qword ptr [rbx + VALUE]
#define XOR_RDI_FROM_PTR_RCX_(VALUE) xor rdi, qword ptr [rcx + VALUE]
#define XOR_RDI_FROM_PTR_RDX_(VALUE) xor rdi, qword ptr [rdx + VALUE]
#define XOR_RDI_FROM_PTR_RDI_(VALUE) xor rdi, qword ptr [rdi + VALUE]
#define XOR_RDI_FROM_PTR_RSI_(VALUE) xor rdi, qword ptr [rsi + VALUE]
#define XOR_RDI_FROM_PTR_RBP_(VALUE) xor rdi, qword ptr [rbp + VALUE]
#define XOR_RDI_FROM_PTR_RSP_(VALUE) xor rdi, qword ptr [rsp + VALUE]
#define XOR_RDI_FROM_PTR_R8_(VALUE) xor rdi, qword ptr [r8 + VALUE]
#define XOR_RDI_FROM_PTR_R9_(VALUE) xor rdi, qword ptr [r9 + VALUE]
#define XOR_RDI_FROM_PTR_R10_(VALUE) xor rdi, qword ptr [r10 + VALUE]
#define XOR_RDI_FROM_PTR_R11_(VALUE) xor rdi, qword ptr [r11 + VALUE]
#define XOR_RDI_FROM_PTR_R12_(VALUE) xor rdi, qword ptr [r12 + VALUE]
#define XOR_RDI_FROM_PTR_R13_(VALUE) xor rdi, qword ptr [r13 + VALUE]
#define XOR_RDI_FROM_PTR_R14_(VALUE) xor rdi, qword ptr [r14 + VALUE]
#define XOR_RDI_FROM_PTR_R15_(VALUE) xor rdi, qword ptr [r15 + VALUE]
#define XOR_RDI_FROM_PTR_EAX_(VALUE) xor rdi, qword ptr [eax + VALUE]
#define XOR_RDI_FROM_PTR_EBX_(VALUE) xor rdi, qword ptr [ebx + VALUE]
#define XOR_RDI_FROM_PTR_ECX_(VALUE) xor rdi, qword ptr [ecx + VALUE]
#define XOR_RDI_FROM_PTR_EDX_(VALUE) xor rdi, qword ptr [edx + VALUE]
#define XOR_RDI_FROM_PTR_EDI_(VALUE) xor rdi, qword ptr [edi + VALUE]
#define XOR_RDI_FROM_PTR_ESI_(VALUE) xor rdi, qword ptr [esi + VALUE]
#define XOR_RDI_FROM_PTR_EBP_(VALUE) xor rdi, qword ptr [ebp + VALUE]
#define XOR_RDI_FROM_PTR_ESP_(VALUE) xor rdi, qword ptr [esp + VALUE]

#define XOR_RSI_FROM_PTR_RAX_(VALUE) xor rsi, qword ptr [rax + VALUE]
#define XOR_RSI_FROM_PTR_RBX_(VALUE) xor rsi, qword ptr [rbx + VALUE]
#define XOR_RSI_FROM_PTR_RCX_(VALUE) xor rsi, qword ptr [rcx + VALUE]
#define XOR_RSI_FROM_PTR_RDX_(VALUE) xor rsi, qword ptr [rdx + VALUE]
#define XOR_RSI_FROM_PTR_RDI_(VALUE) xor rsi, qword ptr [rdi + VALUE]
#define XOR_RSI_FROM_PTR_RSI_(VALUE) xor rsi, qword ptr [rsi + VALUE]
#define XOR_RSI_FROM_PTR_RBP_(VALUE) xor rsi, qword ptr [rbp + VALUE]
#define XOR_RSI_FROM_PTR_RSP_(VALUE) xor rsi, qword ptr [rsp + VALUE]
#define XOR_RSI_FROM_PTR_R8_(VALUE) xor rsi, qword ptr [r8 + VALUE]
#define XOR_RSI_FROM_PTR_R9_(VALUE) xor rsi, qword ptr [r9 + VALUE]
#define XOR_RSI_FROM_PTR_R10_(VALUE) xor rsi, qword ptr [r10 + VALUE]
#define XOR_RSI_FROM_PTR_R11_(VALUE) xor rsi, qword ptr [r11 + VALUE]
#define XOR_RSI_FROM_PTR_R12_(VALUE) xor rsi, qword ptr [r12 + VALUE]
#define XOR_RSI_FROM_PTR_R13_(VALUE) xor rsi, qword ptr [r13 + VALUE]
#define XOR_RSI_FROM_PTR_R14_(VALUE) xor rsi, qword ptr [r14 + VALUE]
#define XOR_RSI_FROM_PTR_R15_(VALUE) xor rsi, qword ptr [r15 + VALUE]
#define XOR_RSI_FROM_PTR_EAX_(VALUE) xor rsi, qword ptr [eax + VALUE]
#define XOR_RSI_FROM_PTR_EBX_(VALUE) xor rsi, qword ptr [ebx + VALUE]
#define XOR_RSI_FROM_PTR_ECX_(VALUE) xor rsi, qword ptr [ecx + VALUE]
#define XOR_RSI_FROM_PTR_EDX_(VALUE) xor rsi, qword ptr [edx + VALUE]
#define XOR_RSI_FROM_PTR_EDI_(VALUE) xor rsi, qword ptr [edi + VALUE]
#define XOR_RSI_FROM_PTR_ESI_(VALUE) xor rsi, qword ptr [esi + VALUE]
#define XOR_RSI_FROM_PTR_EBP_(VALUE) xor rsi, qword ptr [ebp + VALUE]
#define XOR_RSI_FROM_PTR_ESP_(VALUE) xor rsi, qword ptr [esp + VALUE]

#define XOR_RBP_FROM_PTR_RAX_(VALUE) xor rbp, qword ptr [rax + VALUE]
#define XOR_RBP_FROM_PTR_RBX_(VALUE) xor rbp, qword ptr [rbx + VALUE]
#define XOR_RBP_FROM_PTR_RCX_(VALUE) xor rbp, qword ptr [rcx + VALUE]
#define XOR_RBP_FROM_PTR_RDX_(VALUE) xor rbp, qword ptr [rdx + VALUE]
#define XOR_RBP_FROM_PTR_RDI_(VALUE) xor rbp, qword ptr [rdi + VALUE]
#define XOR_RBP_FROM_PTR_RSI_(VALUE) xor rbp, qword ptr [rsi + VALUE]
#define XOR_RBP_FROM_PTR_RBP_(VALUE) xor rbp, qword ptr [rbp + VALUE]
#define XOR_RBP_FROM_PTR_RSP_(VALUE) xor rbp, qword ptr [rsp + VALUE]
#define XOR_RBP_FROM_PTR_R8_(VALUE) xor rbp, qword ptr [r8 + VALUE]
#define XOR_RBP_FROM_PTR_R9_(VALUE) xor rbp, qword ptr [r9 + VALUE]
#define XOR_RBP_FROM_PTR_R10_(VALUE) xor rbp, qword ptr [r10 + VALUE]
#define XOR_RBP_FROM_PTR_R11_(VALUE) xor rbp, qword ptr [r11 + VALUE]
#define XOR_RBP_FROM_PTR_R12_(VALUE) xor rbp, qword ptr [r12 + VALUE]
#define XOR_RBP_FROM_PTR_R13_(VALUE) xor rbp, qword ptr [r13 + VALUE]
#define XOR_RBP_FROM_PTR_R14_(VALUE) xor rbp, qword ptr [r14 + VALUE]
#define XOR_RBP_FROM_PTR_R15_(VALUE) xor rbp, qword ptr [r15 + VALUE]
#define XOR_RBP_FROM_PTR_EAX_(VALUE) xor rbp, qword ptr [eax + VALUE]
#define XOR_RBP_FROM_PTR_EBX_(VALUE) xor rbp, qword ptr [ebx + VALUE]
#define XOR_RBP_FROM_PTR_ECX_(VALUE) xor rbp, qword ptr [ecx + VALUE]
#define XOR_RBP_FROM_PTR_EDX_(VALUE) xor rbp, qword ptr [edx + VALUE]
#define XOR_RBP_FROM_PTR_EDI_(VALUE) xor rbp, qword ptr [edi + VALUE]
#define XOR_RBP_FROM_PTR_ESI_(VALUE) xor rbp, qword ptr [esi + VALUE]
#define XOR_RBP_FROM_PTR_EBP_(VALUE) xor rbp, qword ptr [ebp + VALUE]
#define XOR_RBP_FROM_PTR_ESP_(VALUE) xor rbp, qword ptr [esp + VALUE]

#define XOR_RSP_FROM_PTR_RAX_(VALUE) xor rsp, qword ptr [rax + VALUE]
#define XOR_RSP_FROM_PTR_RBX_(VALUE) xor rsp, qword ptr [rbx + VALUE]
#define XOR_RSP_FROM_PTR_RCX_(VALUE) xor rsp, qword ptr [rcx + VALUE]
#define XOR_RSP_FROM_PTR_RDX_(VALUE) xor rsp, qword ptr [rdx + VALUE]
#define XOR_RSP_FROM_PTR_RDI_(VALUE) xor rsp, qword ptr [rdi + VALUE]
#define XOR_RSP_FROM_PTR_RSI_(VALUE) xor rsp, qword ptr [rsi + VALUE]
#define XOR_RSP_FROM_PTR_RBP_(VALUE) xor rsp, qword ptr [rbp + VALUE]
#define XOR_RSP_FROM_PTR_RSP_(VALUE) xor rsp, qword ptr [rsp + VALUE]
#define XOR_RSP_FROM_PTR_R8_(VALUE) xor rsp, qword ptr [r8 + VALUE]
#define XOR_RSP_FROM_PTR_R9_(VALUE) xor rsp, qword ptr [r9 + VALUE]
#define XOR_RSP_FROM_PTR_R10_(VALUE) xor rsp, qword ptr [r10 + VALUE]
#define XOR_RSP_FROM_PTR_R11_(VALUE) xor rsp, qword ptr [r11 + VALUE]
#define XOR_RSP_FROM_PTR_R12_(VALUE) xor rsp, qword ptr [r12 + VALUE]
#define XOR_RSP_FROM_PTR_R13_(VALUE) xor rsp, qword ptr [r13 + VALUE]
#define XOR_RSP_FROM_PTR_R14_(VALUE) xor rsp, qword ptr [r14 + VALUE]
#define XOR_RSP_FROM_PTR_R15_(VALUE) xor rsp, qword ptr [r15 + VALUE]
#define XOR_RSP_FROM_PTR_EAX_(VALUE) xor rsp, qword ptr [eax + VALUE]
#define XOR_RSP_FROM_PTR_EBX_(VALUE) xor rsp, qword ptr [ebx + VALUE]
#define XOR_RSP_FROM_PTR_ECX_(VALUE) xor rsp, qword ptr [ecx + VALUE]
#define XOR_RSP_FROM_PTR_EDX_(VALUE) xor rsp, qword ptr [edx + VALUE]
#define XOR_RSP_FROM_PTR_EDI_(VALUE) xor rsp, qword ptr [edi + VALUE]
#define XOR_RSP_FROM_PTR_ESI_(VALUE) xor rsp, qword ptr [esi + VALUE]
#define XOR_RSP_FROM_PTR_EBP_(VALUE) xor rsp, qword ptr [ebp + VALUE]
#define XOR_RSP_FROM_PTR_ESP_(VALUE) xor rsp, qword ptr [esp + VALUE]

#define XOR_R8_FROM_PTR_RAX_(VALUE) xor r8, qword ptr [rax + VALUE]
#define XOR_R8_FROM_PTR_RBX_(VALUE) xor r8, qword ptr [rbx + VALUE]
#define XOR_R8_FROM_PTR_RCX_(VALUE) xor r8, qword ptr [rcx + VALUE]
#define XOR_R8_FROM_PTR_RDX_(VALUE) xor r8, qword ptr [rdx + VALUE]
#define XOR_R8_FROM_PTR_RDI_(VALUE) xor r8, qword ptr [rdi + VALUE]
#define XOR_R8_FROM_PTR_RSI_(VALUE) xor r8, qword ptr [rsi + VALUE]
#define XOR_R8_FROM_PTR_RBP_(VALUE) xor r8, qword ptr [rbp + VALUE]
#define XOR_R8_FROM_PTR_RSP_(VALUE) xor r8, qword ptr [rsp + VALUE]
#define XOR_R8_FROM_PTR_R8_(VALUE) xor r8, qword ptr [r8 + VALUE]
#define XOR_R8_FROM_PTR_R9_(VALUE) xor r8, qword ptr [r9 + VALUE]
#define XOR_R8_FROM_PTR_R10_(VALUE) xor r8, qword ptr [r10 + VALUE]
#define XOR_R8_FROM_PTR_R11_(VALUE) xor r8, qword ptr [r11 + VALUE]
#define XOR_R8_FROM_PTR_R12_(VALUE) xor r8, qword ptr [r12 + VALUE]
#define XOR_R8_FROM_PTR_R13_(VALUE) xor r8, qword ptr [r13 + VALUE]
#define XOR_R8_FROM_PTR_R14_(VALUE) xor r8, qword ptr [r14 + VALUE]
#define XOR_R8_FROM_PTR_R15_(VALUE) xor r8, qword ptr [r15 + VALUE]
#define XOR_R8_FROM_PTR_EAX_(VALUE) xor r8, qword ptr [eax + VALUE]
#define XOR_R8_FROM_PTR_EBX_(VALUE) xor r8, qword ptr [ebx + VALUE]
#define XOR_R8_FROM_PTR_ECX_(VALUE) xor r8, qword ptr [ecx + VALUE]
#define XOR_R8_FROM_PTR_EDX_(VALUE) xor r8, qword ptr [edx + VALUE]
#define XOR_R8_FROM_PTR_EDI_(VALUE) xor r8, qword ptr [edi + VALUE]
#define XOR_R8_FROM_PTR_ESI_(VALUE) xor r8, qword ptr [esi + VALUE]
#define XOR_R8_FROM_PTR_EBP_(VALUE) xor r8, qword ptr [ebp + VALUE]
#define XOR_R8_FROM_PTR_ESP_(VALUE) xor r8, qword ptr [esp + VALUE]

#define XOR_R9_FROM_PTR_RAX_(VALUE) xor r9, qword ptr [rax + VALUE]
#define XOR_R9_FROM_PTR_RBX_(VALUE) xor r9, qword ptr [rbx + VALUE]
#define XOR_R9_FROM_PTR_RCX_(VALUE) xor r9, qword ptr [rcx + VALUE]
#define XOR_R9_FROM_PTR_RDX_(VALUE) xor r9, qword ptr [rdx + VALUE]
#define XOR_R9_FROM_PTR_RDI_(VALUE) xor r9, qword ptr [rdi + VALUE]
#define XOR_R9_FROM_PTR_RSI_(VALUE) xor r9, qword ptr [rsi + VALUE]
#define XOR_R9_FROM_PTR_RBP_(VALUE) xor r9, qword ptr [rbp + VALUE]
#define XOR_R9_FROM_PTR_RSP_(VALUE) xor r9, qword ptr [rsp + VALUE]
#define XOR_R9_FROM_PTR_R8_(VALUE) xor r9, qword ptr [r8 + VALUE]
#define XOR_R9_FROM_PTR_R9_(VALUE) xor r9, qword ptr [r9 + VALUE]
#define XOR_R9_FROM_PTR_R10_(VALUE) xor r9, qword ptr [r10 + VALUE]
#define XOR_R9_FROM_PTR_R11_(VALUE) xor r9, qword ptr [r11 + VALUE]
#define XOR_R9_FROM_PTR_R12_(VALUE) xor r9, qword ptr [r12 + VALUE]
#define XOR_R9_FROM_PTR_R13_(VALUE) xor r9, qword ptr [r13 + VALUE]
#define XOR_R9_FROM_PTR_R14_(VALUE) xor r9, qword ptr [r14 + VALUE]
#define XOR_R9_FROM_PTR_R15_(VALUE) xor r9, qword ptr [r15 + VALUE]
#define XOR_R9_FROM_PTR_EAX_(VALUE) xor r9, qword ptr [eax + VALUE]
#define XOR_R9_FROM_PTR_EBX_(VALUE) xor r9, qword ptr [ebx + VALUE]
#define XOR_R9_FROM_PTR_ECX_(VALUE) xor r9, qword ptr [ecx + VALUE]
#define XOR_R9_FROM_PTR_EDX_(VALUE) xor r9, qword ptr [edx + VALUE]
#define XOR_R9_FROM_PTR_EDI_(VALUE) xor r9, qword ptr [edi + VALUE]
#define XOR_R9_FROM_PTR_ESI_(VALUE) xor r9, qword ptr [esi + VALUE]
#define XOR_R9_FROM_PTR_EBP_(VALUE) xor r9, qword ptr [ebp + VALUE]
#define XOR_R9_FROM_PTR_ESP_(VALUE) xor r9, qword ptr [esp + VALUE]

#define XOR_R10_FROM_PTR_RAX_(VALUE) xor r10, qword ptr [rax + VALUE]
#define XOR_R10_FROM_PTR_RBX_(VALUE) xor r10, qword ptr [rbx + VALUE]
#define XOR_R10_FROM_PTR_RCX_(VALUE) xor r10, qword ptr [rcx + VALUE]
#define XOR_R10_FROM_PTR_RDX_(VALUE) xor r10, qword ptr [rdx + VALUE]
#define XOR_R10_FROM_PTR_RDI_(VALUE) xor r10, qword ptr [rdi + VALUE]
#define XOR_R10_FROM_PTR_RSI_(VALUE) xor r10, qword ptr [rsi + VALUE]
#define XOR_R10_FROM_PTR_RBP_(VALUE) xor r10, qword ptr [rbp + VALUE]
#define XOR_R10_FROM_PTR_RSP_(VALUE) xor r10, qword ptr [rsp + VALUE]
#define XOR_R10_FROM_PTR_R8_(VALUE) xor r10, qword ptr [r8 + VALUE]
#define XOR_R10_FROM_PTR_R9_(VALUE) xor r10, qword ptr [r9 + VALUE]
#define XOR_R10_FROM_PTR_R10_(VALUE) xor r10, qword ptr [r10 + VALUE]
#define XOR_R10_FROM_PTR_R11_(VALUE) xor r10, qword ptr [r11 + VALUE]
#define XOR_R10_FROM_PTR_R12_(VALUE) xor r10, qword ptr [r12 + VALUE]
#define XOR_R10_FROM_PTR_R13_(VALUE) xor r10, qword ptr [r13 + VALUE]
#define XOR_R10_FROM_PTR_R14_(VALUE) xor r10, qword ptr [r14 + VALUE]
#define XOR_R10_FROM_PTR_R15_(VALUE) xor r10, qword ptr [r15 + VALUE]
#define XOR_R10_FROM_PTR_EAX_(VALUE) xor r10, qword ptr [eax + VALUE]
#define XOR_R10_FROM_PTR_EBX_(VALUE) xor r10, qword ptr [ebx + VALUE]
#define XOR_R10_FROM_PTR_ECX_(VALUE) xor r10, qword ptr [ecx + VALUE]
#define XOR_R10_FROM_PTR_EDX_(VALUE) xor r10, qword ptr [edx + VALUE]
#define XOR_R10_FROM_PTR_EDI_(VALUE) xor r10, qword ptr [edi + VALUE]
#define XOR_R10_FROM_PTR_ESI_(VALUE) xor r10, qword ptr [esi + VALUE]
#define XOR_R10_FROM_PTR_EBP_(VALUE) xor r10, qword ptr [ebp + VALUE]
#define XOR_R10_FROM_PTR_ESP_(VALUE) xor r10, qword ptr [esp + VALUE]

#define XOR_R11_FROM_PTR_RAX_(VALUE) xor r11, qword ptr [rax + VALUE]
#define XOR_R11_FROM_PTR_RBX_(VALUE) xor r11, qword ptr [rbx + VALUE]
#define XOR_R11_FROM_PTR_RCX_(VALUE) xor r11, qword ptr [rcx + VALUE]
#define XOR_R11_FROM_PTR_RDX_(VALUE) xor r11, qword ptr [rdx + VALUE]
#define XOR_R11_FROM_PTR_RDI_(VALUE) xor r11, qword ptr [rdi + VALUE]
#define XOR_R11_FROM_PTR_RSI_(VALUE) xor r11, qword ptr [rsi + VALUE]
#define XOR_R11_FROM_PTR_RBP_(VALUE) xor r11, qword ptr [rbp + VALUE]
#define XOR_R11_FROM_PTR_RSP_(VALUE) xor r11, qword ptr [rsp + VALUE]
#define XOR_R11_FROM_PTR_R8_(VALUE) xor r11, qword ptr [r8 + VALUE]
#define XOR_R11_FROM_PTR_R9_(VALUE) xor r11, qword ptr [r9 + VALUE]
#define XOR_R11_FROM_PTR_R10_(VALUE) xor r11, qword ptr [r10 + VALUE]
#define XOR_R11_FROM_PTR_R11_(VALUE) xor r11, qword ptr [r11 + VALUE]
#define XOR_R11_FROM_PTR_R12_(VALUE) xor r11, qword ptr [r12 + VALUE]
#define XOR_R11_FROM_PTR_R13_(VALUE) xor r11, qword ptr [r13 + VALUE]
#define XOR_R11_FROM_PTR_R14_(VALUE) xor r11, qword ptr [r14 + VALUE]
#define XOR_R11_FROM_PTR_R15_(VALUE) xor r11, qword ptr [r15 + VALUE]
#define XOR_R11_FROM_PTR_EAX_(VALUE) xor r11, qword ptr [eax + VALUE]
#define XOR_R11_FROM_PTR_EBX_(VALUE) xor r11, qword ptr [ebx + VALUE]
#define XOR_R11_FROM_PTR_ECX_(VALUE) xor r11, qword ptr [ecx + VALUE]
#define XOR_R11_FROM_PTR_EDX_(VALUE) xor r11, qword ptr [edx + VALUE]
#define XOR_R11_FROM_PTR_EDI_(VALUE) xor r11, qword ptr [edi + VALUE]
#define XOR_R11_FROM_PTR_ESI_(VALUE) xor r11, qword ptr [esi + VALUE]
#define XOR_R11_FROM_PTR_EBP_(VALUE) xor r11, qword ptr [ebp + VALUE]
#define XOR_R11_FROM_PTR_ESP_(VALUE) xor r11, qword ptr [esp + VALUE]

#define XOR_R12_FROM_PTR_RAX_(VALUE) xor r12, qword ptr [rax + VALUE]
#define XOR_R12_FROM_PTR_RBX_(VALUE) xor r12, qword ptr [rbx + VALUE]
#define XOR_R12_FROM_PTR_RCX_(VALUE) xor r12, qword ptr [rcx + VALUE]
#define XOR_R12_FROM_PTR_RDX_(VALUE) xor r12, qword ptr [rdx + VALUE]
#define XOR_R12_FROM_PTR_RDI_(VALUE) xor r12, qword ptr [rdi + VALUE]
#define XOR_R12_FROM_PTR_RSI_(VALUE) xor r12, qword ptr [rsi + VALUE]
#define XOR_R12_FROM_PTR_RBP_(VALUE) xor r12, qword ptr [rbp + VALUE]
#define XOR_R12_FROM_PTR_RSP_(VALUE) xor r12, qword ptr [rsp + VALUE]
#define XOR_R12_FROM_PTR_R8_(VALUE) xor r12, qword ptr [r8 + VALUE]
#define XOR_R12_FROM_PTR_R9_(VALUE) xor r12, qword ptr [r9 + VALUE]
#define XOR_R12_FROM_PTR_R10_(VALUE) xor r12, qword ptr [r10 + VALUE]
#define XOR_R12_FROM_PTR_R11_(VALUE) xor r12, qword ptr [r11 + VALUE]
#define XOR_R12_FROM_PTR_R12_(VALUE) xor r12, qword ptr [r12 + VALUE]
#define XOR_R12_FROM_PTR_R13_(VALUE) xor r12, qword ptr [r13 + VALUE]
#define XOR_R12_FROM_PTR_R14_(VALUE) xor r12, qword ptr [r14 + VALUE]
#define XOR_R12_FROM_PTR_R15_(VALUE) xor r12, qword ptr [r15 + VALUE]
#define XOR_R12_FROM_PTR_EAX_(VALUE) xor r12, qword ptr [eax + VALUE]
#define XOR_R12_FROM_PTR_EBX_(VALUE) xor r12, qword ptr [ebx + VALUE]
#define XOR_R12_FROM_PTR_ECX_(VALUE) xor r12, qword ptr [ecx + VALUE]
#define XOR_R12_FROM_PTR_EDX_(VALUE) xor r12, qword ptr [edx + VALUE]
#define XOR_R12_FROM_PTR_EDI_(VALUE) xor r12, qword ptr [edi + VALUE]
#define XOR_R12_FROM_PTR_ESI_(VALUE) xor r12, qword ptr [esi + VALUE]
#define XOR_R12_FROM_PTR_EBP_(VALUE) xor r12, qword ptr [ebp + VALUE]
#define XOR_R12_FROM_PTR_ESP_(VALUE) xor r12, qword ptr [esp + VALUE]

#define XOR_R13_FROM_PTR_RAX_(VALUE) xor r13, qword ptr [rax + VALUE]
#define XOR_R13_FROM_PTR_RBX_(VALUE) xor r13, qword ptr [rbx + VALUE]
#define XOR_R13_FROM_PTR_RCX_(VALUE) xor r13, qword ptr [rcx + VALUE]
#define XOR_R13_FROM_PTR_RDX_(VALUE) xor r13, qword ptr [rdx + VALUE]
#define XOR_R13_FROM_PTR_RDI_(VALUE) xor r13, qword ptr [rdi + VALUE]
#define XOR_R13_FROM_PTR_RSI_(VALUE) xor r13, qword ptr [rsi + VALUE]
#define XOR_R13_FROM_PTR_RBP_(VALUE) xor r13, qword ptr [rbp + VALUE]
#define XOR_R13_FROM_PTR_RSP_(VALUE) xor r13, qword ptr [rsp + VALUE]
#define XOR_R13_FROM_PTR_R8_(VALUE) xor r13, qword ptr [r8 + VALUE]
#define XOR_R13_FROM_PTR_R9_(VALUE) xor r13, qword ptr [r9 + VALUE]
#define XOR_R13_FROM_PTR_R10_(VALUE) xor r13, qword ptr [r10 + VALUE]
#define XOR_R13_FROM_PTR_R11_(VALUE) xor r13, qword ptr [r11 + VALUE]
#define XOR_R13_FROM_PTR_R12_(VALUE) xor r13, qword ptr [r12 + VALUE]
#define XOR_R13_FROM_PTR_R13_(VALUE) xor r13, qword ptr [r13 + VALUE]
#define XOR_R13_FROM_PTR_R14_(VALUE) xor r13, qword ptr [r14 + VALUE]
#define XOR_R13_FROM_PTR_R15_(VALUE) xor r13, qword ptr [r15 + VALUE]
#define XOR_R13_FROM_PTR_EAX_(VALUE) xor r13, qword ptr [eax + VALUE]
#define XOR_R13_FROM_PTR_EBX_(VALUE) xor r13, qword ptr [ebx + VALUE]
#define XOR_R13_FROM_PTR_ECX_(VALUE) xor r13, qword ptr [ecx + VALUE]
#define XOR_R13_FROM_PTR_EDX_(VALUE) xor r13, qword ptr [edx + VALUE]
#define XOR_R13_FROM_PTR_EDI_(VALUE) xor r13, qword ptr [edi + VALUE]
#define XOR_R13_FROM_PTR_ESI_(VALUE) xor r13, qword ptr [esi + VALUE]
#define XOR_R13_FROM_PTR_EBP_(VALUE) xor r13, qword ptr [ebp + VALUE]
#define XOR_R13_FROM_PTR_ESP_(VALUE) xor r13, qword ptr [esp + VALUE]

#define XOR_R14_FROM_PTR_RAX_(VALUE) xor r14, qword ptr [rax + VALUE]
#define XOR_R14_FROM_PTR_RBX_(VALUE) xor r14, qword ptr [rbx + VALUE]
#define XOR_R14_FROM_PTR_RCX_(VALUE) xor r14, qword ptr [rcx + VALUE]
#define XOR_R14_FROM_PTR_RDX_(VALUE) xor r14, qword ptr [rdx + VALUE]
#define XOR_R14_FROM_PTR_RDI_(VALUE) xor r14, qword ptr [rdi + VALUE]
#define XOR_R14_FROM_PTR_RSI_(VALUE) xor r14, qword ptr [rsi + VALUE]
#define XOR_R14_FROM_PTR_RBP_(VALUE) xor r14, qword ptr [rbp + VALUE]
#define XOR_R14_FROM_PTR_RSP_(VALUE) xor r14, qword ptr [rsp + VALUE]
#define XOR_R14_FROM_PTR_R8_(VALUE) xor r14, qword ptr [r8 + VALUE]
#define XOR_R14_FROM_PTR_R9_(VALUE) xor r14, qword ptr [r9 + VALUE]
#define XOR_R14_FROM_PTR_R10_(VALUE) xor r14, qword ptr [r10 + VALUE]
#define XOR_R14_FROM_PTR_R11_(VALUE) xor r14, qword ptr [r11 + VALUE]
#define XOR_R14_FROM_PTR_R12_(VALUE) xor r14, qword ptr [r12 + VALUE]
#define XOR_R14_FROM_PTR_R13_(VALUE) xor r14, qword ptr [r13 + VALUE]
#define XOR_R14_FROM_PTR_R14_(VALUE) xor r14, qword ptr [r14 + VALUE]
#define XOR_R14_FROM_PTR_R15_(VALUE) xor r14, qword ptr [r15 + VALUE]
#define XOR_R14_FROM_PTR_EAX_(VALUE) xor r14, qword ptr [eax + VALUE]
#define XOR_R14_FROM_PTR_EBX_(VALUE) xor r14, qword ptr [ebx + VALUE]
#define XOR_R14_FROM_PTR_ECX_(VALUE) xor r14, qword ptr [ecx + VALUE]
#define XOR_R14_FROM_PTR_EDX_(VALUE) xor r14, qword ptr [edx + VALUE]
#define XOR_R14_FROM_PTR_EDI_(VALUE) xor r14, qword ptr [edi + VALUE]
#define XOR_R14_FROM_PTR_ESI_(VALUE) xor r14, qword ptr [esi + VALUE]
#define XOR_R14_FROM_PTR_EBP_(VALUE) xor r14, qword ptr [ebp + VALUE]
#define XOR_R14_FROM_PTR_ESP_(VALUE) xor r14, qword ptr [esp + VALUE]

#define XOR_R15_FROM_PTR_RAX_(VALUE) xor r15, qword ptr [rax + VALUE]
#define XOR_R15_FROM_PTR_RBX_(VALUE) xor r15, qword ptr [rbx + VALUE]
#define XOR_R15_FROM_PTR_RCX_(VALUE) xor r15, qword ptr [rcx + VALUE]
#define XOR_R15_FROM_PTR_RDX_(VALUE) xor r15, qword ptr [rdx + VALUE]
#define XOR_R15_FROM_PTR_RDI_(VALUE) xor r15, qword ptr [rdi + VALUE]
#define XOR_R15_FROM_PTR_RSI_(VALUE) xor r15, qword ptr [rsi + VALUE]
#define XOR_R15_FROM_PTR_RBP_(VALUE) xor r15, qword ptr [rbp + VALUE]
#define XOR_R15_FROM_PTR_RSP_(VALUE) xor r15, qword ptr [rsp + VALUE]
#define XOR_R15_FROM_PTR_R8_(VALUE) xor r15, qword ptr [r8 + VALUE]
#define XOR_R15_FROM_PTR_R9_(VALUE) xor r15, qword ptr [r9 + VALUE]
#define XOR_R15_FROM_PTR_R10_(VALUE) xor r15, qword ptr [r10 + VALUE]
#define XOR_R15_FROM_PTR_R11_(VALUE) xor r15, qword ptr [r11 + VALUE]
#define XOR_R15_FROM_PTR_R12_(VALUE) xor r15, qword ptr [r12 + VALUE]
#define XOR_R15_FROM_PTR_R13_(VALUE) xor r15, qword ptr [r13 + VALUE]
#define XOR_R15_FROM_PTR_R14_(VALUE) xor r15, qword ptr [r14 + VALUE]
#define XOR_R15_FROM_PTR_R15_(VALUE) xor r15, qword ptr [r15 + VALUE]
#define XOR_R15_FROM_PTR_EAX_(VALUE) xor r15, qword ptr [eax + VALUE]
#define XOR_R15_FROM_PTR_EBX_(VALUE) xor r15, qword ptr [ebx + VALUE]
#define XOR_R15_FROM_PTR_ECX_(VALUE) xor r15, qword ptr [ecx + VALUE]
#define XOR_R15_FROM_PTR_EDX_(VALUE) xor r15, qword ptr [edx + VALUE]
#define XOR_R15_FROM_PTR_EDI_(VALUE) xor r15, qword ptr [edi + VALUE]
#define XOR_R15_FROM_PTR_ESI_(VALUE) xor r15, qword ptr [esi + VALUE]
#define XOR_R15_FROM_PTR_EBP_(VALUE) xor r15, qword ptr [ebp + VALUE]
#define XOR_R15_FROM_PTR_ESP_(VALUE) xor r15, qword ptr [esp + VALUE]

#define XOR_RAX_TO_PTR_RAX_(VALUE) xor qword ptr [rax + VALUE], rax
#define XOR_RAX_TO_PTR_RBX_(VALUE) xor qword ptr [rbx + VALUE], rax
#define XOR_RAX_TO_PTR_RCX_(VALUE) xor qword ptr [rcx + VALUE], rax
#define XOR_RAX_TO_PTR_RDX_(VALUE) xor qword ptr [rdx + VALUE], rax
#define XOR_RAX_TO_PTR_RDI_(VALUE) xor qword ptr [rdi + VALUE], rax
#define XOR_RAX_TO_PTR_RSI_(VALUE) xor qword ptr [rsi + VALUE], rax
#define XOR_RAX_TO_PTR_RBP_(VALUE) xor qword ptr [rbp + VALUE], rax
#define XOR_RAX_TO_PTR_RSP_(VALUE) xor qword ptr [rsp + VALUE], rax
#define XOR_RAX_TO_PTR_R8_(VALUE) xor qword ptr [r8 + VALUE], rax
#define XOR_RAX_TO_PTR_R9_(VALUE) xor qword ptr [r9 + VALUE], rax
#define XOR_RAX_TO_PTR_R10_(VALUE) xor qword ptr [r10 + VALUE], rax
#define XOR_RAX_TO_PTR_R11_(VALUE) xor qword ptr [r11 + VALUE], rax
#define XOR_RAX_TO_PTR_R12_(VALUE) xor qword ptr [r12 + VALUE], rax
#define XOR_RAX_TO_PTR_R13_(VALUE) xor qword ptr [r13 + VALUE], rax
#define XOR_RAX_TO_PTR_R14_(VALUE) xor qword ptr [r14 + VALUE], rax
#define XOR_RAX_TO_PTR_R15_(VALUE) xor qword ptr [r15 + VALUE], rax
#define XOR_RAX_TO_PTR_EAX_(VALUE) xor qword ptr [eax + VALUE], rax
#define XOR_RAX_TO_PTR_EBX_(VALUE) xor qword ptr [ebx + VALUE], rax
#define XOR_RAX_TO_PTR_ECX_(VALUE) xor qword ptr [ecx + VALUE], rax
#define XOR_RAX_TO_PTR_EDX_(VALUE) xor qword ptr [edx + VALUE], rax
#define XOR_RAX_TO_PTR_EDI_(VALUE) xor qword ptr [edi + VALUE], rax
#define XOR_RAX_TO_PTR_ESI_(VALUE) xor qword ptr [esi + VALUE], rax
#define XOR_RAX_TO_PTR_EBP_(VALUE) xor qword ptr [ebp + VALUE], rax
#define XOR_RAX_TO_PTR_ESP_(VALUE) xor qword ptr [esp + VALUE], rax

#define XOR_RBX_TO_PTR_RAX_(VALUE) xor qword ptr [rax + VALUE], rbx
#define XOR_RBX_TO_PTR_RBX_(VALUE) xor qword ptr [rbx + VALUE], rbx
#define XOR_RBX_TO_PTR_RCX_(VALUE) xor qword ptr [rcx + VALUE], rbx
#define XOR_RBX_TO_PTR_RDX_(VALUE) xor qword ptr [rdx + VALUE], rbx
#define XOR_RBX_TO_PTR_RDI_(VALUE) xor qword ptr [rdi + VALUE], rbx
#define XOR_RBX_TO_PTR_RSI_(VALUE) xor qword ptr [rsi + VALUE], rbx
#define XOR_RBX_TO_PTR_RBP_(VALUE) xor qword ptr [rbp + VALUE], rbx
#define XOR_RBX_TO_PTR_RSP_(VALUE) xor qword ptr [rsp + VALUE], rbx
#define XOR_RBX_TO_PTR_R8_(VALUE) xor qword ptr [r8 + VALUE], rbx
#define XOR_RBX_TO_PTR_R9_(VALUE) xor qword ptr [r9 + VALUE], rbx
#define XOR_RBX_TO_PTR_R10_(VALUE) xor qword ptr [r10 + VALUE], rbx
#define XOR_RBX_TO_PTR_R11_(VALUE) xor qword ptr [r11 + VALUE], rbx
#define XOR_RBX_TO_PTR_R12_(VALUE) xor qword ptr [r12 + VALUE], rbx
#define XOR_RBX_TO_PTR_R13_(VALUE) xor qword ptr [r13 + VALUE], rbx
#define XOR_RBX_TO_PTR_R14_(VALUE) xor qword ptr [r14 + VALUE], rbx
#define XOR_RBX_TO_PTR_R15_(VALUE) xor qword ptr [r15 + VALUE], rbx
#define XOR_RBX_TO_PTR_EAX_(VALUE) xor qword ptr [eax + VALUE], rbx
#define XOR_RBX_TO_PTR_EBX_(VALUE) xor qword ptr [ebx + VALUE], rbx
#define XOR_RBX_TO_PTR_ECX_(VALUE) xor qword ptr [ecx + VALUE], rbx
#define XOR_RBX_TO_PTR_EDX_(VALUE) xor qword ptr [edx + VALUE], rbx
#define XOR_RBX_TO_PTR_EDI_(VALUE) xor qword ptr [edi + VALUE], rbx
#define XOR_RBX_TO_PTR_ESI_(VALUE) xor qword ptr [esi + VALUE], rbx
#define XOR_RBX_TO_PTR_EBP_(VALUE) xor qword ptr [ebp + VALUE], rbx
#define XOR_RBX_TO_PTR_ESP_(VALUE) xor qword ptr [esp + VALUE], rbx

#define XOR_RCX_TO_PTR_RAX_(VALUE) xor qword ptr [rax + VALUE], rcx
#define XOR_RCX_TO_PTR_RBX_(VALUE) xor qword ptr [rbx + VALUE], rcx
#define XOR_RCX_TO_PTR_RCX_(VALUE) xor qword ptr [rcx + VALUE], rcx
#define XOR_RCX_TO_PTR_RDX_(VALUE) xor qword ptr [rdx + VALUE], rcx
#define XOR_RCX_TO_PTR_RDI_(VALUE) xor qword ptr [rdi + VALUE], rcx
#define XOR_RCX_TO_PTR_RSI_(VALUE) xor qword ptr [rsi + VALUE], rcx
#define XOR_RCX_TO_PTR_RBP_(VALUE) xor qword ptr [rbp + VALUE], rcx
#define XOR_RCX_TO_PTR_RSP_(VALUE) xor qword ptr [rsp + VALUE], rcx
#define XOR_RCX_TO_PTR_R8_(VALUE) xor qword ptr [r8 + VALUE], rcx
#define XOR_RCX_TO_PTR_R9_(VALUE) xor qword ptr [r9 + VALUE], rcx
#define XOR_RCX_TO_PTR_R10_(VALUE) xor qword ptr [r10 + VALUE], rcx
#define XOR_RCX_TO_PTR_R11_(VALUE) xor qword ptr [r11 + VALUE], rcx
#define XOR_RCX_TO_PTR_R12_(VALUE) xor qword ptr [r12 + VALUE], rcx
#define XOR_RCX_TO_PTR_R13_(VALUE) xor qword ptr [r13 + VALUE], rcx
#define XOR_RCX_TO_PTR_R14_(VALUE) xor qword ptr [r14 + VALUE], rcx
#define XOR_RCX_TO_PTR_R15_(VALUE) xor qword ptr [r15 + VALUE], rcx
#define XOR_RCX_TO_PTR_EAX_(VALUE) xor qword ptr [eax + VALUE], rcx
#define XOR_RCX_TO_PTR_EBX_(VALUE) xor qword ptr [ebx + VALUE], rcx
#define XOR_RCX_TO_PTR_ECX_(VALUE) xor qword ptr [ecx + VALUE], rcx
#define XOR_RCX_TO_PTR_EDX_(VALUE) xor qword ptr [edx + VALUE], rcx
#define XOR_RCX_TO_PTR_EDI_(VALUE) xor qword ptr [edi + VALUE], rcx
#define XOR_RCX_TO_PTR_ESI_(VALUE) xor qword ptr [esi + VALUE], rcx
#define XOR_RCX_TO_PTR_EBP_(VALUE) xor qword ptr [ebp + VALUE], rcx
#define XOR_RCX_TO_PTR_ESP_(VALUE) xor qword ptr [esp + VALUE], rcx

#define XOR_RDX_TO_PTR_RAX_(VALUE) xor qword ptr [rax + VALUE], rdx
#define XOR_RDX_TO_PTR_RBX_(VALUE) xor qword ptr [rbx + VALUE], rdx
#define XOR_RDX_TO_PTR_RCX_(VALUE) xor qword ptr [rcx + VALUE], rdx
#define XOR_RDX_TO_PTR_RDX_(VALUE) xor qword ptr [rdx + VALUE], rdx
#define XOR_RDX_TO_PTR_RDI_(VALUE) xor qword ptr [rdi + VALUE], rdx
#define XOR_RDX_TO_PTR_RSI_(VALUE) xor qword ptr [rsi + VALUE], rdx
#define XOR_RDX_TO_PTR_RBP_(VALUE) xor qword ptr [rbp + VALUE], rdx
#define XOR_RDX_TO_PTR_RSP_(VALUE) xor qword ptr [rsp + VALUE], rdx
#define XOR_RDX_TO_PTR_R8_(VALUE) xor qword ptr [r8 + VALUE], rdx
#define XOR_RDX_TO_PTR_R9_(VALUE) xor qword ptr [r9 + VALUE], rdx
#define XOR_RDX_TO_PTR_R10_(VALUE) xor qword ptr [r10 + VALUE], rdx
#define XOR_RDX_TO_PTR_R11_(VALUE) xor qword ptr [r11 + VALUE], rdx
#define XOR_RDX_TO_PTR_R12_(VALUE) xor qword ptr [r12 + VALUE], rdx
#define XOR_RDX_TO_PTR_R13_(VALUE) xor qword ptr [r13 + VALUE], rdx
#define XOR_RDX_TO_PTR_R14_(VALUE) xor qword ptr [r14 + VALUE], rdx
#define XOR_RDX_TO_PTR_R15_(VALUE) xor qword ptr [r15 + VALUE], rdx
#define XOR_RDX_TO_PTR_EAX_(VALUE) xor qword ptr [eax + VALUE], rdx
#define XOR_RDX_TO_PTR_EBX_(VALUE) xor qword ptr [ebx + VALUE], rdx
#define XOR_RDX_TO_PTR_ECX_(VALUE) xor qword ptr [ecx + VALUE], rdx
#define XOR_RDX_TO_PTR_EDX_(VALUE) xor qword ptr [edx + VALUE], rdx
#define XOR_RDX_TO_PTR_EDI_(VALUE) xor qword ptr [edi + VALUE], rdx
#define XOR_RDX_TO_PTR_ESI_(VALUE) xor qword ptr [esi + VALUE], rdx
#define XOR_RDX_TO_PTR_EBP_(VALUE) xor qword ptr [ebp + VALUE], rdx
#define XOR_RDX_TO_PTR_ESP_(VALUE) xor qword ptr [esp + VALUE], rdx

#define XOR_RDI_TO_PTR_RAX_(VALUE) xor qword ptr [rax + VALUE], rdi
#define XOR_RDI_TO_PTR_RBX_(VALUE) xor qword ptr [rbx + VALUE], rdi
#define XOR_RDI_TO_PTR_RCX_(VALUE) xor qword ptr [rcx + VALUE], rdi
#define XOR_RDI_TO_PTR_RDX_(VALUE) xor qword ptr [rdx + VALUE], rdi
#define XOR_RDI_TO_PTR_RDI_(VALUE) xor qword ptr [rdi + VALUE], rdi
#define XOR_RDI_TO_PTR_RSI_(VALUE) xor qword ptr [rsi + VALUE], rdi
#define XOR_RDI_TO_PTR_RBP_(VALUE) xor qword ptr [rbp + VALUE], rdi
#define XOR_RDI_TO_PTR_RSP_(VALUE) xor qword ptr [rsp + VALUE], rdi
#define XOR_RDI_TO_PTR_R8_(VALUE) xor qword ptr [r8 + VALUE], rdi
#define XOR_RDI_TO_PTR_R9_(VALUE) xor qword ptr [r9 + VALUE], rdi
#define XOR_RDI_TO_PTR_R10_(VALUE) xor qword ptr [r10 + VALUE], rdi
#define XOR_RDI_TO_PTR_R11_(VALUE) xor qword ptr [r11 + VALUE], rdi
#define XOR_RDI_TO_PTR_R12_(VALUE) xor qword ptr [r12 + VALUE], rdi
#define XOR_RDI_TO_PTR_R13_(VALUE) xor qword ptr [r13 + VALUE], rdi
#define XOR_RDI_TO_PTR_R14_(VALUE) xor qword ptr [r14 + VALUE], rdi
#define XOR_RDI_TO_PTR_R15_(VALUE) xor qword ptr [r15 + VALUE], rdi
#define XOR_RDI_TO_PTR_EAX_(VALUE) xor qword ptr [eax + VALUE], rdi
#define XOR_RDI_TO_PTR_EBX_(VALUE) xor qword ptr [ebx + VALUE], rdi
#define XOR_RDI_TO_PTR_ECX_(VALUE) xor qword ptr [ecx + VALUE], rdi
#define XOR_RDI_TO_PTR_EDX_(VALUE) xor qword ptr [edx + VALUE], rdi
#define XOR_RDI_TO_PTR_EDI_(VALUE) xor qword ptr [edi + VALUE], rdi
#define XOR_RDI_TO_PTR_ESI_(VALUE) xor qword ptr [esi + VALUE], rdi
#define XOR_RDI_TO_PTR_EBP_(VALUE) xor qword ptr [ebp + VALUE], rdi
#define XOR_RDI_TO_PTR_ESP_(VALUE) xor qword ptr [esp + VALUE], rdi

#define XOR_RSI_TO_PTR_RAX_(VALUE) xor qword ptr [rax + VALUE], rsi
#define XOR_RSI_TO_PTR_RBX_(VALUE) xor qword ptr [rbx + VALUE], rsi
#define XOR_RSI_TO_PTR_RCX_(VALUE) xor qword ptr [rcx + VALUE], rsi
#define XOR_RSI_TO_PTR_RDX_(VALUE) xor qword ptr [rdx + VALUE], rsi
#define XOR_RSI_TO_PTR_RDI_(VALUE) xor qword ptr [rdi + VALUE], rsi
#define XOR_RSI_TO_PTR_RSI_(VALUE) xor qword ptr [rsi + VALUE], rsi
#define XOR_RSI_TO_PTR_RBP_(VALUE) xor qword ptr [rbp + VALUE], rsi
#define XOR_RSI_TO_PTR_RSP_(VALUE) xor qword ptr [rsp + VALUE], rsi
#define XOR_RSI_TO_PTR_R8_(VALUE) xor qword ptr [r8 + VALUE], rsi
#define XOR_RSI_TO_PTR_R9_(VALUE) xor qword ptr [r9 + VALUE], rsi
#define XOR_RSI_TO_PTR_R10_(VALUE) xor qword ptr [r10 + VALUE], rsi
#define XOR_RSI_TO_PTR_R11_(VALUE) xor qword ptr [r11 + VALUE], rsi
#define XOR_RSI_TO_PTR_R12_(VALUE) xor qword ptr [r12 + VALUE], rsi
#define XOR_RSI_TO_PTR_R13_(VALUE) xor qword ptr [r13 + VALUE], rsi
#define XOR_RSI_TO_PTR_R14_(VALUE) xor qword ptr [r14 + VALUE], rsi
#define XOR_RSI_TO_PTR_R15_(VALUE) xor qword ptr [r15 + VALUE], rsi
#define XOR_RSI_TO_PTR_EAX_(VALUE) xor qword ptr [eax + VALUE], rsi
#define XOR_RSI_TO_PTR_EBX_(VALUE) xor qword ptr [ebx + VALUE], rsi
#define XOR_RSI_TO_PTR_ECX_(VALUE) xor qword ptr [ecx + VALUE], rsi
#define XOR_RSI_TO_PTR_EDX_(VALUE) xor qword ptr [edx + VALUE], rsi
#define XOR_RSI_TO_PTR_EDI_(VALUE) xor qword ptr [edi + VALUE], rsi
#define XOR_RSI_TO_PTR_ESI_(VALUE) xor qword ptr [esi + VALUE], rsi
#define XOR_RSI_TO_PTR_EBP_(VALUE) xor qword ptr [ebp + VALUE], rsi
#define XOR_RSI_TO_PTR_ESP_(VALUE) xor qword ptr [esp + VALUE], rsi

#define XOR_RBP_TO_PTR_RAX_(VALUE) xor qword ptr [rax + VALUE], rbp
#define XOR_RBP_TO_PTR_RBX_(VALUE) xor qword ptr [rbx + VALUE], rbp
#define XOR_RBP_TO_PTR_RCX_(VALUE) xor qword ptr [rcx + VALUE], rbp
#define XOR_RBP_TO_PTR_RDX_(VALUE) xor qword ptr [rdx + VALUE], rbp
#define XOR_RBP_TO_PTR_RDI_(VALUE) xor qword ptr [rdi + VALUE], rbp
#define XOR_RBP_TO_PTR_RSI_(VALUE) xor qword ptr [rsi + VALUE], rbp
#define XOR_RBP_TO_PTR_RBP_(VALUE) xor qword ptr [rbp + VALUE], rbp
#define XOR_RBP_TO_PTR_RSP_(VALUE) xor qword ptr [rsp + VALUE], rbp
#define XOR_RBP_TO_PTR_R8_(VALUE) xor qword ptr [r8 + VALUE], rbp
#define XOR_RBP_TO_PTR_R9_(VALUE) xor qword ptr [r9 + VALUE], rbp
#define XOR_RBP_TO_PTR_R10_(VALUE) xor qword ptr [r10 + VALUE], rbp
#define XOR_RBP_TO_PTR_R11_(VALUE) xor qword ptr [r11 + VALUE], rbp
#define XOR_RBP_TO_PTR_R12_(VALUE) xor qword ptr [r12 + VALUE], rbp
#define XOR_RBP_TO_PTR_R13_(VALUE) xor qword ptr [r13 + VALUE], rbp
#define XOR_RBP_TO_PTR_R14_(VALUE) xor qword ptr [r14 + VALUE], rbp
#define XOR_RBP_TO_PTR_R15_(VALUE) xor qword ptr [r15 + VALUE], rbp
#define XOR_RBP_TO_PTR_EAX_(VALUE) xor qword ptr [eax + VALUE], rbp
#define XOR_RBP_TO_PTR_EBX_(VALUE) xor qword ptr [ebx + VALUE], rbp
#define XOR_RBP_TO_PTR_ECX_(VALUE) xor qword ptr [ecx + VALUE], rbp
#define XOR_RBP_TO_PTR_EDX_(VALUE) xor qword ptr [edx + VALUE], rbp
#define XOR_RBP_TO_PTR_EDI_(VALUE) xor qword ptr [edi + VALUE], rbp
#define XOR_RBP_TO_PTR_ESI_(VALUE) xor qword ptr [esi + VALUE], rbp
#define XOR_RBP_TO_PTR_EBP_(VALUE) xor qword ptr [ebp + VALUE], rbp
#define XOR_RBP_TO_PTR_ESP_(VALUE) xor qword ptr [esp + VALUE], rbp

#define XOR_RSP_TO_PTR_RAX_(VALUE) xor qword ptr [rax + VALUE], rsp
#define XOR_RSP_TO_PTR_RBX_(VALUE) xor qword ptr [rbx + VALUE], rsp
#define XOR_RSP_TO_PTR_RCX_(VALUE) xor qword ptr [rcx + VALUE], rsp
#define XOR_RSP_TO_PTR_RDX_(VALUE) xor qword ptr [rdx + VALUE], rsp
#define XOR_RSP_TO_PTR_RDI_(VALUE) xor qword ptr [rdi + VALUE], rsp
#define XOR_RSP_TO_PTR_RSI_(VALUE) xor qword ptr [rsi + VALUE], rsp
#define XOR_RSP_TO_PTR_RBP_(VALUE) xor qword ptr [rbp + VALUE], rsp
#define XOR_RSP_TO_PTR_RSP_(VALUE) xor qword ptr [rsp + VALUE], rsp
#define XOR_RSP_TO_PTR_R8_(VALUE) xor qword ptr [r8 + VALUE], rsp
#define XOR_RSP_TO_PTR_R9_(VALUE) xor qword ptr [r9 + VALUE], rsp
#define XOR_RSP_TO_PTR_R10_(VALUE) xor qword ptr [r10 + VALUE], rsp
#define XOR_RSP_TO_PTR_R11_(VALUE) xor qword ptr [r11 + VALUE], rsp
#define XOR_RSP_TO_PTR_R12_(VALUE) xor qword ptr [r12 + VALUE], rsp
#define XOR_RSP_TO_PTR_R13_(VALUE) xor qword ptr [r13 + VALUE], rsp
#define XOR_RSP_TO_PTR_R14_(VALUE) xor qword ptr [r14 + VALUE], rsp
#define XOR_RSP_TO_PTR_R15_(VALUE) xor qword ptr [r15 + VALUE], rsp
#define XOR_RSP_TO_PTR_EAX_(VALUE) xor qword ptr [eax + VALUE], rsp
#define XOR_RSP_TO_PTR_EBX_(VALUE) xor qword ptr [ebx + VALUE], rsp
#define XOR_RSP_TO_PTR_ECX_(VALUE) xor qword ptr [ecx + VALUE], rsp
#define XOR_RSP_TO_PTR_EDX_(VALUE) xor qword ptr [edx + VALUE], rsp
#define XOR_RSP_TO_PTR_EDI_(VALUE) xor qword ptr [edi + VALUE], rsp
#define XOR_RSP_TO_PTR_ESI_(VALUE) xor qword ptr [esi + VALUE], rsp
#define XOR_RSP_TO_PTR_EBP_(VALUE) xor qword ptr [ebp + VALUE], rsp
#define XOR_RSP_TO_PTR_ESP_(VALUE) xor qword ptr [esp + VALUE], rsp

#define XOR_R8_TO_PTR_RAX_(VALUE) xor qword ptr [rax + VALUE], r8
#define XOR_R8_TO_PTR_RBX_(VALUE) xor qword ptr [rbx + VALUE], r8
#define XOR_R8_TO_PTR_RCX_(VALUE) xor qword ptr [rcx + VALUE], r8
#define XOR_R8_TO_PTR_RDX_(VALUE) xor qword ptr [rdx + VALUE], r8
#define XOR_R8_TO_PTR_RDI_(VALUE) xor qword ptr [rdi + VALUE], r8
#define XOR_R8_TO_PTR_RSI_(VALUE) xor qword ptr [rsi + VALUE], r8
#define XOR_R8_TO_PTR_RBP_(VALUE) xor qword ptr [rbp + VALUE], r8
#define XOR_R8_TO_PTR_RSP_(VALUE) xor qword ptr [rsp + VALUE], r8
#define XOR_R8_TO_PTR_R8_(VALUE) xor qword ptr [r8 + VALUE], r8
#define XOR_R8_TO_PTR_R9_(VALUE) xor qword ptr [r9 + VALUE], r8
#define XOR_R8_TO_PTR_R10_(VALUE) xor qword ptr [r10 + VALUE], r8
#define XOR_R8_TO_PTR_R11_(VALUE) xor qword ptr [r11 + VALUE], r8
#define XOR_R8_TO_PTR_R12_(VALUE) xor qword ptr [r12 + VALUE], r8
#define XOR_R8_TO_PTR_R13_(VALUE) xor qword ptr [r13 + VALUE], r8
#define XOR_R8_TO_PTR_R14_(VALUE) xor qword ptr [r14 + VALUE], r8
#define XOR_R8_TO_PTR_R15_(VALUE) xor qword ptr [r15 + VALUE], r8
#define XOR_R8_TO_PTR_EAX_(VALUE) xor qword ptr [eax + VALUE], r8
#define XOR_R8_TO_PTR_EBX_(VALUE) xor qword ptr [ebx + VALUE], r8
#define XOR_R8_TO_PTR_ECX_(VALUE) xor qword ptr [ecx + VALUE], r8
#define XOR_R8_TO_PTR_EDX_(VALUE) xor qword ptr [edx + VALUE], r8
#define XOR_R8_TO_PTR_EDI_(VALUE) xor qword ptr [edi + VALUE], r8
#define XOR_R8_TO_PTR_ESI_(VALUE) xor qword ptr [esi + VALUE], r8
#define XOR_R8_TO_PTR_EBP_(VALUE) xor qword ptr [ebp + VALUE], r8
#define XOR_R8_TO_PTR_ESP_(VALUE) xor qword ptr [esp + VALUE], r8

#define XOR_R9_TO_PTR_RAX_(VALUE) xor qword ptr [rax + VALUE], r9
#define XOR_R9_TO_PTR_RBX_(VALUE) xor qword ptr [rbx + VALUE], r9
#define XOR_R9_TO_PTR_RCX_(VALUE) xor qword ptr [rcx + VALUE], r9
#define XOR_R9_TO_PTR_RDX_(VALUE) xor qword ptr [rdx + VALUE], r9
#define XOR_R9_TO_PTR_RDI_(VALUE) xor qword ptr [rdi + VALUE], r9
#define XOR_R9_TO_PTR_RSI_(VALUE) xor qword ptr [rsi + VALUE], r9
#define XOR_R9_TO_PTR_RBP_(VALUE) xor qword ptr [rbp + VALUE], r9
#define XOR_R9_TO_PTR_RSP_(VALUE) xor qword ptr [rsp + VALUE], r9
#define XOR_R9_TO_PTR_R8_(VALUE) xor qword ptr [r8 + VALUE], r9
#define XOR_R9_TO_PTR_R9_(VALUE) xor qword ptr [r9 + VALUE], r9
#define XOR_R9_TO_PTR_R10_(VALUE) xor qword ptr [r10 + VALUE], r9
#define XOR_R9_TO_PTR_R11_(VALUE) xor qword ptr [r11 + VALUE], r9
#define XOR_R9_TO_PTR_R12_(VALUE) xor qword ptr [r12 + VALUE], r9
#define XOR_R9_TO_PTR_R13_(VALUE) xor qword ptr [r13 + VALUE], r9
#define XOR_R9_TO_PTR_R14_(VALUE) xor qword ptr [r14 + VALUE], r9
#define XOR_R9_TO_PTR_R15_(VALUE) xor qword ptr [r15 + VALUE], r9
#define XOR_R9_TO_PTR_EAX_(VALUE) xor qword ptr [eax + VALUE], r9
#define XOR_R9_TO_PTR_EBX_(VALUE) xor qword ptr [ebx + VALUE], r9
#define XOR_R9_TO_PTR_ECX_(VALUE) xor qword ptr [ecx + VALUE], r9
#define XOR_R9_TO_PTR_EDX_(VALUE) xor qword ptr [edx + VALUE], r9
#define XOR_R9_TO_PTR_EDI_(VALUE) xor qword ptr [edi + VALUE], r9
#define XOR_R9_TO_PTR_ESI_(VALUE) xor qword ptr [esi + VALUE], r9
#define XOR_R9_TO_PTR_EBP_(VALUE) xor qword ptr [ebp + VALUE], r9
#define XOR_R9_TO_PTR_ESP_(VALUE) xor qword ptr [esp + VALUE], r9

#define XOR_R10_TO_PTR_RAX_(VALUE) xor qword ptr [rax + VALUE], r10
#define XOR_R10_TO_PTR_RBX_(VALUE) xor qword ptr [rbx + VALUE], r10
#define XOR_R10_TO_PTR_RCX_(VALUE) xor qword ptr [rcx + VALUE], r10
#define XOR_R10_TO_PTR_RDX_(VALUE) xor qword ptr [rdx + VALUE], r10
#define XOR_R10_TO_PTR_RDI_(VALUE) xor qword ptr [rdi + VALUE], r10
#define XOR_R10_TO_PTR_RSI_(VALUE) xor qword ptr [rsi + VALUE], r10
#define XOR_R10_TO_PTR_RBP_(VALUE) xor qword ptr [rbp + VALUE], r10
#define XOR_R10_TO_PTR_RSP_(VALUE) xor qword ptr [rsp + VALUE], r10
#define XOR_R10_TO_PTR_R8_(VALUE) xor qword ptr [r8 + VALUE], r10
#define XOR_R10_TO_PTR_R9_(VALUE) xor qword ptr [r9 + VALUE], r10
#define XOR_R10_TO_PTR_R10_(VALUE) xor qword ptr [r10 + VALUE], r10
#define XOR_R10_TO_PTR_R11_(VALUE) xor qword ptr [r11 + VALUE], r10
#define XOR_R10_TO_PTR_R12_(VALUE) xor qword ptr [r12 + VALUE], r10
#define XOR_R10_TO_PTR_R13_(VALUE) xor qword ptr [r13 + VALUE], r10
#define XOR_R10_TO_PTR_R14_(VALUE) xor qword ptr [r14 + VALUE], r10
#define XOR_R10_TO_PTR_R15_(VALUE) xor qword ptr [r15 + VALUE], r10
#define XOR_R10_TO_PTR_EAX_(VALUE) xor qword ptr [eax + VALUE], r10
#define XOR_R10_TO_PTR_EBX_(VALUE) xor qword ptr [ebx + VALUE], r10
#define XOR_R10_TO_PTR_ECX_(VALUE) xor qword ptr [ecx + VALUE], r10
#define XOR_R10_TO_PTR_EDX_(VALUE) xor qword ptr [edx + VALUE], r10
#define XOR_R10_TO_PTR_EDI_(VALUE) xor qword ptr [edi + VALUE], r10
#define XOR_R10_TO_PTR_ESI_(VALUE) xor qword ptr [esi + VALUE], r10
#define XOR_R10_TO_PTR_EBP_(VALUE) xor qword ptr [ebp + VALUE], r10
#define XOR_R10_TO_PTR_ESP_(VALUE) xor qword ptr [esp + VALUE], r10

#define XOR_R11_TO_PTR_RAX_(VALUE) xor qword ptr [rax + VALUE], r11
#define XOR_R11_TO_PTR_RBX_(VALUE) xor qword ptr [rbx + VALUE], r11
#define XOR_R11_TO_PTR_RCX_(VALUE) xor qword ptr [rcx + VALUE], r11
#define XOR_R11_TO_PTR_RDX_(VALUE) xor qword ptr [rdx + VALUE], r11
#define XOR_R11_TO_PTR_RDI_(VALUE) xor qword ptr [rdi + VALUE], r11
#define XOR_R11_TO_PTR_RSI_(VALUE) xor qword ptr [rsi + VALUE], r11
#define XOR_R11_TO_PTR_RBP_(VALUE) xor qword ptr [rbp + VALUE], r11
#define XOR_R11_TO_PTR_RSP_(VALUE) xor qword ptr [rsp + VALUE], r11
#define XOR_R11_TO_PTR_R8_(VALUE) xor qword ptr [r8 + VALUE], r11
#define XOR_R11_TO_PTR_R9_(VALUE) xor qword ptr [r9 + VALUE], r11
#define XOR_R11_TO_PTR_R10_(VALUE) xor qword ptr [r10 + VALUE], r11
#define XOR_R11_TO_PTR_R11_(VALUE) xor qword ptr [r11 + VALUE], r11
#define XOR_R11_TO_PTR_R12_(VALUE) xor qword ptr [r12 + VALUE], r11
#define XOR_R11_TO_PTR_R13_(VALUE) xor qword ptr [r13 + VALUE], r11
#define XOR_R11_TO_PTR_R14_(VALUE) xor qword ptr [r14 + VALUE], r11
#define XOR_R11_TO_PTR_R15_(VALUE) xor qword ptr [r15 + VALUE], r11
#define XOR_R11_TO_PTR_EAX_(VALUE) xor qword ptr [eax + VALUE], r11
#define XOR_R11_TO_PTR_EBX_(VALUE) xor qword ptr [ebx + VALUE], r11
#define XOR_R11_TO_PTR_ECX_(VALUE) xor qword ptr [ecx + VALUE], r11
#define XOR_R11_TO_PTR_EDX_(VALUE) xor qword ptr [edx + VALUE], r11
#define XOR_R11_TO_PTR_EDI_(VALUE) xor qword ptr [edi + VALUE], r11
#define XOR_R11_TO_PTR_ESI_(VALUE) xor qword ptr [esi + VALUE], r11
#define XOR_R11_TO_PTR_EBP_(VALUE) xor qword ptr [ebp + VALUE], r11
#define XOR_R11_TO_PTR_ESP_(VALUE) xor qword ptr [esp + VALUE], r11

#define XOR_R12_TO_PTR_RAX_(VALUE) xor qword ptr [rax + VALUE], r12
#define XOR_R12_TO_PTR_RBX_(VALUE) xor qword ptr [rbx + VALUE], r12
#define XOR_R12_TO_PTR_RCX_(VALUE) xor qword ptr [rcx + VALUE], r12
#define XOR_R12_TO_PTR_RDX_(VALUE) xor qword ptr [rdx + VALUE], r12
#define XOR_R12_TO_PTR_RDI_(VALUE) xor qword ptr [rdi + VALUE], r12
#define XOR_R12_TO_PTR_RSI_(VALUE) xor qword ptr [rsi + VALUE], r12
#define XOR_R12_TO_PTR_RBP_(VALUE) xor qword ptr [rbp + VALUE], r12
#define XOR_R12_TO_PTR_RSP_(VALUE) xor qword ptr [rsp + VALUE], r12
#define XOR_R12_TO_PTR_R8_(VALUE) xor qword ptr [r8 + VALUE], r12
#define XOR_R12_TO_PTR_R9_(VALUE) xor qword ptr [r9 + VALUE], r12
#define XOR_R12_TO_PTR_R10_(VALUE) xor qword ptr [r10 + VALUE], r12
#define XOR_R12_TO_PTR_R11_(VALUE) xor qword ptr [r11 + VALUE], r12
#define XOR_R12_TO_PTR_R12_(VALUE) xor qword ptr [r12 + VALUE], r12
#define XOR_R12_TO_PTR_R13_(VALUE) xor qword ptr [r13 + VALUE], r12
#define XOR_R12_TO_PTR_R14_(VALUE) xor qword ptr [r14 + VALUE], r12
#define XOR_R12_TO_PTR_R15_(VALUE) xor qword ptr [r15 + VALUE], r12
#define XOR_R12_TO_PTR_EAX_(VALUE) xor qword ptr [eax + VALUE], r12
#define XOR_R12_TO_PTR_EBX_(VALUE) xor qword ptr [ebx + VALUE], r12
#define XOR_R12_TO_PTR_ECX_(VALUE) xor qword ptr [ecx + VALUE], r12
#define XOR_R12_TO_PTR_EDX_(VALUE) xor qword ptr [edx + VALUE], r12
#define XOR_R12_TO_PTR_EDI_(VALUE) xor qword ptr [edi + VALUE], r12
#define XOR_R12_TO_PTR_ESI_(VALUE) xor qword ptr [esi + VALUE], r12
#define XOR_R12_TO_PTR_EBP_(VALUE) xor qword ptr [ebp + VALUE], r12
#define XOR_R12_TO_PTR_ESP_(VALUE) xor qword ptr [esp + VALUE], r12

#define XOR_R13_TO_PTR_RAX_(VALUE) xor qword ptr [rax + VALUE], r13
#define XOR_R13_TO_PTR_RBX_(VALUE) xor qword ptr [rbx + VALUE], r13
#define XOR_R13_TO_PTR_RCX_(VALUE) xor qword ptr [rcx + VALUE], r13
#define XOR_R13_TO_PTR_RDX_(VALUE) xor qword ptr [rdx + VALUE], r13
#define XOR_R13_TO_PTR_RDI_(VALUE) xor qword ptr [rdi + VALUE], r13
#define XOR_R13_TO_PTR_RSI_(VALUE) xor qword ptr [rsi + VALUE], r13
#define XOR_R13_TO_PTR_RBP_(VALUE) xor qword ptr [rbp + VALUE], r13
#define XOR_R13_TO_PTR_RSP_(VALUE) xor qword ptr [rsp + VALUE], r13
#define XOR_R13_TO_PTR_R8_(VALUE) xor qword ptr [r8 + VALUE], r13
#define XOR_R13_TO_PTR_R9_(VALUE) xor qword ptr [r9 + VALUE], r13
#define XOR_R13_TO_PTR_R10_(VALUE) xor qword ptr [r10 + VALUE], r13
#define XOR_R13_TO_PTR_R11_(VALUE) xor qword ptr [r11 + VALUE], r13
#define XOR_R13_TO_PTR_R12_(VALUE) xor qword ptr [r12 + VALUE], r13
#define XOR_R13_TO_PTR_R13_(VALUE) xor qword ptr [r13 + VALUE], r13
#define XOR_R13_TO_PTR_R14_(VALUE) xor qword ptr [r14 + VALUE], r13
#define XOR_R13_TO_PTR_R15_(VALUE) xor qword ptr [r15 + VALUE], r13
#define XOR_R13_TO_PTR_EAX_(VALUE) xor qword ptr [eax + VALUE], r13
#define XOR_R13_TO_PTR_EBX_(VALUE) xor qword ptr [ebx + VALUE], r13
#define XOR_R13_TO_PTR_ECX_(VALUE) xor qword ptr [ecx + VALUE], r13
#define XOR_R13_TO_PTR_EDX_(VALUE) xor qword ptr [edx + VALUE], r13
#define XOR_R13_TO_PTR_EDI_(VALUE) xor qword ptr [edi + VALUE], r13
#define XOR_R13_TO_PTR_ESI_(VALUE) xor qword ptr [esi + VALUE], r13
#define XOR_R13_TO_PTR_EBP_(VALUE) xor qword ptr [ebp + VALUE], r13
#define XOR_R13_TO_PTR_ESP_(VALUE) xor qword ptr [esp + VALUE], r13

#define XOR_R14_TO_PTR_RAX_(VALUE) xor qword ptr [rax + VALUE], r14
#define XOR_R14_TO_PTR_RBX_(VALUE) xor qword ptr [rbx + VALUE], r14
#define XOR_R14_TO_PTR_RCX_(VALUE) xor qword ptr [rcx + VALUE], r14
#define XOR_R14_TO_PTR_RDX_(VALUE) xor qword ptr [rdx + VALUE], r14
#define XOR_R14_TO_PTR_RDI_(VALUE) xor qword ptr [rdi + VALUE], r14
#define XOR_R14_TO_PTR_RSI_(VALUE) xor qword ptr [rsi + VALUE], r14
#define XOR_R14_TO_PTR_RBP_(VALUE) xor qword ptr [rbp + VALUE], r14
#define XOR_R14_TO_PTR_RSP_(VALUE) xor qword ptr [rsp + VALUE], r14
#define XOR_R14_TO_PTR_R8_(VALUE) xor qword ptr [r8 + VALUE], r14
#define XOR_R14_TO_PTR_R9_(VALUE) xor qword ptr [r9 + VALUE], r14
#define XOR_R14_TO_PTR_R10_(VALUE) xor qword ptr [r10 + VALUE], r14
#define XOR_R14_TO_PTR_R11_(VALUE) xor qword ptr [r11 + VALUE], r14
#define XOR_R14_TO_PTR_R12_(VALUE) xor qword ptr [r12 + VALUE], r14
#define XOR_R14_TO_PTR_R13_(VALUE) xor qword ptr [r13 + VALUE], r14
#define XOR_R14_TO_PTR_R14_(VALUE) xor qword ptr [r14 + VALUE], r14
#define XOR_R14_TO_PTR_R15_(VALUE) xor qword ptr [r15 + VALUE], r14
#define XOR_R14_TO_PTR_EAX_(VALUE) xor qword ptr [eax + VALUE], r14
#define XOR_R14_TO_PTR_EBX_(VALUE) xor qword ptr [ebx + VALUE], r14
#define XOR_R14_TO_PTR_ECX_(VALUE) xor qword ptr [ecx + VALUE], r14
#define XOR_R14_TO_PTR_EDX_(VALUE) xor qword ptr [edx + VALUE], r14
#define XOR_R14_TO_PTR_EDI_(VALUE) xor qword ptr [edi + VALUE], r14
#define XOR_R14_TO_PTR_ESI_(VALUE) xor qword ptr [esi + VALUE], r14
#define XOR_R14_TO_PTR_EBP_(VALUE) xor qword ptr [ebp + VALUE], r14
#define XOR_R14_TO_PTR_ESP_(VALUE) xor qword ptr [esp + VALUE], r14

#define XOR_R15_TO_PTR_RAX_(VALUE) xor qword ptr [rax + VALUE], r15
#define XOR_R15_TO_PTR_RBX_(VALUE) xor qword ptr [rbx + VALUE], r15
#define XOR_R15_TO_PTR_RCX_(VALUE) xor qword ptr [rcx + VALUE], r15
#define XOR_R15_TO_PTR_RDX_(VALUE) xor qword ptr [rdx + VALUE], r15
#define XOR_R15_TO_PTR_RDI_(VALUE) xor qword ptr [rdi + VALUE], r15
#define XOR_R15_TO_PTR_RSI_(VALUE) xor qword ptr [rsi + VALUE], r15
#define XOR_R15_TO_PTR_RBP_(VALUE) xor qword ptr [rbp + VALUE], r15
#define XOR_R15_TO_PTR_RSP_(VALUE) xor qword ptr [rsp + VALUE], r15
#define XOR_R15_TO_PTR_R8_(VALUE) xor qword ptr [r8 + VALUE], r15
#define XOR_R15_TO_PTR_R9_(VALUE) xor qword ptr [r9 + VALUE], r15
#define XOR_R15_TO_PTR_R10_(VALUE) xor qword ptr [r10 + VALUE], r15
#define XOR_R15_TO_PTR_R11_(VALUE) xor qword ptr [r11 + VALUE], r15
#define XOR_R15_TO_PTR_R12_(VALUE) xor qword ptr [r12 + VALUE], r15
#define XOR_R15_TO_PTR_R13_(VALUE) xor qword ptr [r13 + VALUE], r15
#define XOR_R15_TO_PTR_R14_(VALUE) xor qword ptr [r14 + VALUE], r15
#define XOR_R15_TO_PTR_R15_(VALUE) xor qword ptr [r15 + VALUE], r15
#define XOR_R15_TO_PTR_EAX_(VALUE) xor qword ptr [eax + VALUE], r15
#define XOR_R15_TO_PTR_EBX_(VALUE) xor qword ptr [ebx + VALUE], r15
#define XOR_R15_TO_PTR_ECX_(VALUE) xor qword ptr [ecx + VALUE], r15
#define XOR_R15_TO_PTR_EDX_(VALUE) xor qword ptr [edx + VALUE], r15
#define XOR_R15_TO_PTR_EDI_(VALUE) xor qword ptr [edi + VALUE], r15
#define XOR_R15_TO_PTR_ESI_(VALUE) xor qword ptr [esi + VALUE], r15
#define XOR_R15_TO_PTR_EBP_(VALUE) xor qword ptr [ebp + VALUE], r15
#define XOR_R15_TO_PTR_ESP_(VALUE) xor qword ptr [esp + VALUE], r15
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
