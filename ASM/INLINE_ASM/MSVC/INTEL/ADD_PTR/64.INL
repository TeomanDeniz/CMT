#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************* [v] 64-BIT MEMORY [v] ************************** */
#define ADD_RAX_FROM_PTR_(VALUE) add rax, qword ptr [VALUE]
#define ADD_RBX_FROM_PTR_(VALUE) add rbx, qword ptr [VALUE]
#define ADD_RCX_FROM_PTR_(VALUE) add rcx, qword ptr [VALUE]
#define ADD_RDX_FROM_PTR_(VALUE) add rdx, qword ptr [VALUE]
#define ADD_RDI_FROM_PTR_(VALUE) add rdi, qword ptr [VALUE]
#define ADD_RSI_FROM_PTR_(VALUE) add rsi, qword ptr [VALUE]
#define ADD_RBP_FROM_PTR_(VALUE) add rbp, qword ptr [VALUE]
#define ADD_RSP_FROM_PTR_(VALUE) add rsp, qword ptr [VALUE]
#define ADD_R8_FROM_PTR_(VALUE) add r8, qword ptr [VALUE]
#define ADD_R9_FROM_PTR_(VALUE) add r9, qword ptr [VALUE]
#define ADD_R10_FROM_PTR_(VALUE) add r10, qword ptr [VALUE]
#define ADD_R11_FROM_PTR_(VALUE) add r11, qword ptr [VALUE]
#define ADD_R12_FROM_PTR_(VALUE) add r12, qword ptr [VALUE]
#define ADD_R13_FROM_PTR_(VALUE) add r13, qword ptr [VALUE]
#define ADD_R14_FROM_PTR_(VALUE) add r14, qword ptr [VALUE]
#define ADD_R15_FROM_PTR_(VALUE) add r15, qword ptr [VALUE]

#define ADD_RAX_TO_PTR_(VALUE) add qword ptr [VALUE], rax
#define ADD_RBX_TO_PTR_(VALUE) add qword ptr [VALUE], rbx
#define ADD_RCX_TO_PTR_(VALUE) add qword ptr [VALUE], rcx
#define ADD_RDX_TO_PTR_(VALUE) add qword ptr [VALUE], rdx
#define ADD_RDI_TO_PTR_(VALUE) add qword ptr [VALUE], rdi
#define ADD_RSI_TO_PTR_(VALUE) add qword ptr [VALUE], rsi
#define ADD_RBP_TO_PTR_(VALUE) add qword ptr [VALUE], rbp
#define ADD_RSP_TO_PTR_(VALUE) add qword ptr [VALUE], rsp
#define ADD_R8_TO_PTR_(VALUE) add qword ptr [VALUE], r8
#define ADD_R9_TO_PTR_(VALUE) add qword ptr [VALUE], r9
#define ADD_R10_TO_PTR_(VALUE) add qword ptr [VALUE], r10
#define ADD_R11_TO_PTR_(VALUE) add qword ptr [VALUE], r11
#define ADD_R12_TO_PTR_(VALUE) add qword ptr [VALUE], r12
#define ADD_R13_TO_PTR_(VALUE) add qword ptr [VALUE], r13
#define ADD_R14_TO_PTR_(VALUE) add qword ptr [VALUE], r14
#define ADD_R15_TO_PTR_(VALUE) add qword ptr [VALUE], r15

#define ADD_RAX_FROM_PTR_RAX add rax, qword ptr [rax]
#define ADD_RAX_FROM_PTR_RBX add rax, qword ptr [rbx]
#define ADD_RAX_FROM_PTR_RCX add rax, qword ptr [rcx]
#define ADD_RAX_FROM_PTR_RDX add rax, qword ptr [rdx]
#define ADD_RAX_FROM_PTR_RDI add rax, qword ptr [rdi]
#define ADD_RAX_FROM_PTR_RSI add rax, qword ptr [rsi]
#define ADD_RAX_FROM_PTR_RBP add rax, qword ptr [rbp]
#define ADD_RAX_FROM_PTR_RSP add rax, qword ptr [rsp]
#define ADD_RAX_FROM_PTR_R8 add rax, qword ptr [r8]
#define ADD_RAX_FROM_PTR_R9 add rax, qword ptr [r9]
#define ADD_RAX_FROM_PTR_R10 add rax, qword ptr [r10]
#define ADD_RAX_FROM_PTR_R11 add rax, qword ptr [r11]
#define ADD_RAX_FROM_PTR_R12 add rax, qword ptr [r12]
#define ADD_RAX_FROM_PTR_R13 add rax, qword ptr [r13]
#define ADD_RAX_FROM_PTR_R14 add rax, qword ptr [r14]
#define ADD_RAX_FROM_PTR_R15 add rax, qword ptr [r15]
#define ADD_RAX_FROM_PTR_EAX add rax, qword ptr [eax]
#define ADD_RAX_FROM_PTR_EBX add rax, qword ptr [ebx]
#define ADD_RAX_FROM_PTR_ECX add rax, qword ptr [ecx]
#define ADD_RAX_FROM_PTR_EDX add rax, qword ptr [edx]
#define ADD_RAX_FROM_PTR_EDI add rax, qword ptr [edi]
#define ADD_RAX_FROM_PTR_ESI add rax, qword ptr [esi]
#define ADD_RAX_FROM_PTR_EBP add rax, qword ptr [ebp]
#define ADD_RAX_FROM_PTR_ESP add rax, qword ptr [esp]

#define ADD_RBX_FROM_PTR_RAX add rbx, qword ptr [rax]
#define ADD_RBX_FROM_PTR_RBX add rbx, qword ptr [rbx]
#define ADD_RBX_FROM_PTR_RCX add rbx, qword ptr [rcx]
#define ADD_RBX_FROM_PTR_RDX add rbx, qword ptr [rdx]
#define ADD_RBX_FROM_PTR_RDI add rbx, qword ptr [rdi]
#define ADD_RBX_FROM_PTR_RSI add rbx, qword ptr [rsi]
#define ADD_RBX_FROM_PTR_RBP add rbx, qword ptr [rbp]
#define ADD_RBX_FROM_PTR_RSP add rbx, qword ptr [rsp]
#define ADD_RBX_FROM_PTR_R8 add rbx, qword ptr [r8]
#define ADD_RBX_FROM_PTR_R9 add rbx, qword ptr [r9]
#define ADD_RBX_FROM_PTR_R10 add rbx, qword ptr [r10]
#define ADD_RBX_FROM_PTR_R11 add rbx, qword ptr [r11]
#define ADD_RBX_FROM_PTR_R12 add rbx, qword ptr [r12]
#define ADD_RBX_FROM_PTR_R13 add rbx, qword ptr [r13]
#define ADD_RBX_FROM_PTR_R14 add rbx, qword ptr [r14]
#define ADD_RBX_FROM_PTR_R15 add rbx, qword ptr [r15]
#define ADD_RBX_FROM_PTR_EAX add rbx, qword ptr [eax]
#define ADD_RBX_FROM_PTR_EBX add rbx, qword ptr [ebx]
#define ADD_RBX_FROM_PTR_ECX add rbx, qword ptr [ecx]
#define ADD_RBX_FROM_PTR_EDX add rbx, qword ptr [edx]
#define ADD_RBX_FROM_PTR_EDI add rbx, qword ptr [edi]
#define ADD_RBX_FROM_PTR_ESI add rbx, qword ptr [esi]
#define ADD_RBX_FROM_PTR_EBP add rbx, qword ptr [ebp]
#define ADD_RBX_FROM_PTR_ESP add rbx, qword ptr [esp]

#define ADD_RCX_FROM_PTR_RAX add rcx, qword ptr [rax]
#define ADD_RCX_FROM_PTR_RBX add rcx, qword ptr [rbx]
#define ADD_RCX_FROM_PTR_RCX add rcx, qword ptr [rcx]
#define ADD_RCX_FROM_PTR_RDX add rcx, qword ptr [rdx]
#define ADD_RCX_FROM_PTR_RDI add rcx, qword ptr [rdi]
#define ADD_RCX_FROM_PTR_RSI add rcx, qword ptr [rsi]
#define ADD_RCX_FROM_PTR_RBP add rcx, qword ptr [rbp]
#define ADD_RCX_FROM_PTR_RSP add rcx, qword ptr [rsp]
#define ADD_RCX_FROM_PTR_R8 add rcx, qword ptr [r8]
#define ADD_RCX_FROM_PTR_R9 add rcx, qword ptr [r9]
#define ADD_RCX_FROM_PTR_R10 add rcx, qword ptr [r10]
#define ADD_RCX_FROM_PTR_R11 add rcx, qword ptr [r11]
#define ADD_RCX_FROM_PTR_R12 add rcx, qword ptr [r12]
#define ADD_RCX_FROM_PTR_R13 add rcx, qword ptr [r13]
#define ADD_RCX_FROM_PTR_R14 add rcx, qword ptr [r14]
#define ADD_RCX_FROM_PTR_R15 add rcx, qword ptr [r15]
#define ADD_RCX_FROM_PTR_EAX add rcx, qword ptr [eax]
#define ADD_RCX_FROM_PTR_EBX add rcx, qword ptr [ebx]
#define ADD_RCX_FROM_PTR_ECX add rcx, qword ptr [ecx]
#define ADD_RCX_FROM_PTR_EDX add rcx, qword ptr [edx]
#define ADD_RCX_FROM_PTR_EDI add rcx, qword ptr [edi]
#define ADD_RCX_FROM_PTR_ESI add rcx, qword ptr [esi]
#define ADD_RCX_FROM_PTR_EBP add rcx, qword ptr [ebp]
#define ADD_RCX_FROM_PTR_ESP add rcx, qword ptr [esp]

#define ADD_RDX_FROM_PTR_RAX add rdx, qword ptr [rax]
#define ADD_RDX_FROM_PTR_RBX add rdx, qword ptr [rbx]
#define ADD_RDX_FROM_PTR_RCX add rdx, qword ptr [rcx]
#define ADD_RDX_FROM_PTR_RDX add rdx, qword ptr [rdx]
#define ADD_RDX_FROM_PTR_RDI add rdx, qword ptr [rdi]
#define ADD_RDX_FROM_PTR_RSI add rdx, qword ptr [rsi]
#define ADD_RDX_FROM_PTR_RBP add rdx, qword ptr [rbp]
#define ADD_RDX_FROM_PTR_RSP add rdx, qword ptr [rsp]
#define ADD_RDX_FROM_PTR_R8 add rdx, qword ptr [r8]
#define ADD_RDX_FROM_PTR_R9 add rdx, qword ptr [r9]
#define ADD_RDX_FROM_PTR_R10 add rdx, qword ptr [r10]
#define ADD_RDX_FROM_PTR_R11 add rdx, qword ptr [r11]
#define ADD_RDX_FROM_PTR_R12 add rdx, qword ptr [r12]
#define ADD_RDX_FROM_PTR_R13 add rdx, qword ptr [r13]
#define ADD_RDX_FROM_PTR_R14 add rdx, qword ptr [r14]
#define ADD_RDX_FROM_PTR_R15 add rdx, qword ptr [r15]
#define ADD_RDX_FROM_PTR_EAX add rdx, qword ptr [eax]
#define ADD_RDX_FROM_PTR_EBX add rdx, qword ptr [ebx]
#define ADD_RDX_FROM_PTR_ECX add rdx, qword ptr [ecx]
#define ADD_RDX_FROM_PTR_EDX add rdx, qword ptr [edx]
#define ADD_RDX_FROM_PTR_EDI add rdx, qword ptr [edi]
#define ADD_RDX_FROM_PTR_ESI add rdx, qword ptr [esi]
#define ADD_RDX_FROM_PTR_EBP add rdx, qword ptr [ebp]
#define ADD_RDX_FROM_PTR_ESP add rdx, qword ptr [esp]

#define ADD_RDI_FROM_PTR_RAX add rdi, qword ptr [rax]
#define ADD_RDI_FROM_PTR_RBX add rdi, qword ptr [rbx]
#define ADD_RDI_FROM_PTR_RCX add rdi, qword ptr [rcx]
#define ADD_RDI_FROM_PTR_RDX add rdi, qword ptr [rdx]
#define ADD_RDI_FROM_PTR_RDI add rdi, qword ptr [rdi]
#define ADD_RDI_FROM_PTR_RSI add rdi, qword ptr [rsi]
#define ADD_RDI_FROM_PTR_RBP add rdi, qword ptr [rbp]
#define ADD_RDI_FROM_PTR_RSP add rdi, qword ptr [rsp]
#define ADD_RDI_FROM_PTR_R8 add rdi, qword ptr [r8]
#define ADD_RDI_FROM_PTR_R9 add rdi, qword ptr [r9]
#define ADD_RDI_FROM_PTR_R10 add rdi, qword ptr [r10]
#define ADD_RDI_FROM_PTR_R11 add rdi, qword ptr [r11]
#define ADD_RDI_FROM_PTR_R12 add rdi, qword ptr [r12]
#define ADD_RDI_FROM_PTR_R13 add rdi, qword ptr [r13]
#define ADD_RDI_FROM_PTR_R14 add rdi, qword ptr [r14]
#define ADD_RDI_FROM_PTR_R15 add rdi, qword ptr [r15]
#define ADD_RDI_FROM_PTR_EAX add rdi, qword ptr [eax]
#define ADD_RDI_FROM_PTR_EBX add rdi, qword ptr [ebx]
#define ADD_RDI_FROM_PTR_ECX add rdi, qword ptr [ecx]
#define ADD_RDI_FROM_PTR_EDX add rdi, qword ptr [edx]
#define ADD_RDI_FROM_PTR_EDI add rdi, qword ptr [edi]
#define ADD_RDI_FROM_PTR_ESI add rdi, qword ptr [esi]
#define ADD_RDI_FROM_PTR_EBP add rdi, qword ptr [ebp]
#define ADD_RDI_FROM_PTR_ESP add rdi, qword ptr [esp]

#define ADD_RSI_FROM_PTR_RAX add rsi, qword ptr [rax]
#define ADD_RSI_FROM_PTR_RBX add rsi, qword ptr [rbx]
#define ADD_RSI_FROM_PTR_RCX add rsi, qword ptr [rcx]
#define ADD_RSI_FROM_PTR_RDX add rsi, qword ptr [rdx]
#define ADD_RSI_FROM_PTR_RDI add rsi, qword ptr [rdi]
#define ADD_RSI_FROM_PTR_RSI add rsi, qword ptr [rsi]
#define ADD_RSI_FROM_PTR_RBP add rsi, qword ptr [rbp]
#define ADD_RSI_FROM_PTR_RSP add rsi, qword ptr [rsp]
#define ADD_RSI_FROM_PTR_R8 add rsi, qword ptr [r8]
#define ADD_RSI_FROM_PTR_R9 add rsi, qword ptr [r9]
#define ADD_RSI_FROM_PTR_R10 add rsi, qword ptr [r10]
#define ADD_RSI_FROM_PTR_R11 add rsi, qword ptr [r11]
#define ADD_RSI_FROM_PTR_R12 add rsi, qword ptr [r12]
#define ADD_RSI_FROM_PTR_R13 add rsi, qword ptr [r13]
#define ADD_RSI_FROM_PTR_R14 add rsi, qword ptr [r14]
#define ADD_RSI_FROM_PTR_R15 add rsi, qword ptr [r15]
#define ADD_RSI_FROM_PTR_EAX add rsi, qword ptr [eax]
#define ADD_RSI_FROM_PTR_EBX add rsi, qword ptr [ebx]
#define ADD_RSI_FROM_PTR_ECX add rsi, qword ptr [ecx]
#define ADD_RSI_FROM_PTR_EDX add rsi, qword ptr [edx]
#define ADD_RSI_FROM_PTR_EDI add rsi, qword ptr [edi]
#define ADD_RSI_FROM_PTR_ESI add rsi, qword ptr [esi]
#define ADD_RSI_FROM_PTR_EBP add rsi, qword ptr [ebp]
#define ADD_RSI_FROM_PTR_ESP add rsi, qword ptr [esp]

#define ADD_RBP_FROM_PTR_RAX add rbp, qword ptr [rax]
#define ADD_RBP_FROM_PTR_RBX add rbp, qword ptr [rbx]
#define ADD_RBP_FROM_PTR_RCX add rbp, qword ptr [rcx]
#define ADD_RBP_FROM_PTR_RDX add rbp, qword ptr [rdx]
#define ADD_RBP_FROM_PTR_RDI add rbp, qword ptr [rdi]
#define ADD_RBP_FROM_PTR_RSI add rbp, qword ptr [rsi]
#define ADD_RBP_FROM_PTR_RBP add rbp, qword ptr [rbp]
#define ADD_RBP_FROM_PTR_RSP add rbp, qword ptr [rsp]
#define ADD_RBP_FROM_PTR_R8 add rbp, qword ptr [r8]
#define ADD_RBP_FROM_PTR_R9 add rbp, qword ptr [r9]
#define ADD_RBP_FROM_PTR_R10 add rbp, qword ptr [r10]
#define ADD_RBP_FROM_PTR_R11 add rbp, qword ptr [r11]
#define ADD_RBP_FROM_PTR_R12 add rbp, qword ptr [r12]
#define ADD_RBP_FROM_PTR_R13 add rbp, qword ptr [r13]
#define ADD_RBP_FROM_PTR_R14 add rbp, qword ptr [r14]
#define ADD_RBP_FROM_PTR_R15 add rbp, qword ptr [r15]
#define ADD_RBP_FROM_PTR_EAX add rbp, qword ptr [eax]
#define ADD_RBP_FROM_PTR_EBX add rbp, qword ptr [ebx]
#define ADD_RBP_FROM_PTR_ECX add rbp, qword ptr [ecx]
#define ADD_RBP_FROM_PTR_EDX add rbp, qword ptr [edx]
#define ADD_RBP_FROM_PTR_EDI add rbp, qword ptr [edi]
#define ADD_RBP_FROM_PTR_ESI add rbp, qword ptr [esi]
#define ADD_RBP_FROM_PTR_EBP add rbp, qword ptr [ebp]
#define ADD_RBP_FROM_PTR_ESP add rbp, qword ptr [esp]

#define ADD_RSP_FROM_PTR_RAX add rsp, qword ptr [rax]
#define ADD_RSP_FROM_PTR_RBX add rsp, qword ptr [rbx]
#define ADD_RSP_FROM_PTR_RCX add rsp, qword ptr [rcx]
#define ADD_RSP_FROM_PTR_RDX add rsp, qword ptr [rdx]
#define ADD_RSP_FROM_PTR_RDI add rsp, qword ptr [rdi]
#define ADD_RSP_FROM_PTR_RSI add rsp, qword ptr [rsi]
#define ADD_RSP_FROM_PTR_RBP add rsp, qword ptr [rbp]
#define ADD_RSP_FROM_PTR_RSP add rsp, qword ptr [rsp]
#define ADD_RSP_FROM_PTR_R8 add rsp, qword ptr [r8]
#define ADD_RSP_FROM_PTR_R9 add rsp, qword ptr [r9]
#define ADD_RSP_FROM_PTR_R10 add rsp, qword ptr [r10]
#define ADD_RSP_FROM_PTR_R11 add rsp, qword ptr [r11]
#define ADD_RSP_FROM_PTR_R12 add rsp, qword ptr [r12]
#define ADD_RSP_FROM_PTR_R13 add rsp, qword ptr [r13]
#define ADD_RSP_FROM_PTR_R14 add rsp, qword ptr [r14]
#define ADD_RSP_FROM_PTR_R15 add rsp, qword ptr [r15]
#define ADD_RSP_FROM_PTR_EAX add rsp, qword ptr [eax]
#define ADD_RSP_FROM_PTR_EBX add rsp, qword ptr [ebx]
#define ADD_RSP_FROM_PTR_ECX add rsp, qword ptr [ecx]
#define ADD_RSP_FROM_PTR_EDX add rsp, qword ptr [edx]
#define ADD_RSP_FROM_PTR_EDI add rsp, qword ptr [edi]
#define ADD_RSP_FROM_PTR_ESI add rsp, qword ptr [esi]
#define ADD_RSP_FROM_PTR_EBP add rsp, qword ptr [ebp]
#define ADD_RSP_FROM_PTR_ESP add rsp, qword ptr [esp]

#define ADD_R8_FROM_PTR_RAX add r8, qword ptr [rax]
#define ADD_R8_FROM_PTR_RBX add r8, qword ptr [rbx]
#define ADD_R8_FROM_PTR_RCX add r8, qword ptr [rcx]
#define ADD_R8_FROM_PTR_RDX add r8, qword ptr [rdx]
#define ADD_R8_FROM_PTR_RDI add r8, qword ptr [rdi]
#define ADD_R8_FROM_PTR_RSI add r8, qword ptr [rsi]
#define ADD_R8_FROM_PTR_RBP add r8, qword ptr [rbp]
#define ADD_R8_FROM_PTR_RSP add r8, qword ptr [rsp]
#define ADD_R8_FROM_PTR_R8 add r8, qword ptr [r8]
#define ADD_R8_FROM_PTR_R9 add r8, qword ptr [r9]
#define ADD_R8_FROM_PTR_R10 add r8, qword ptr [r10]
#define ADD_R8_FROM_PTR_R11 add r8, qword ptr [r11]
#define ADD_R8_FROM_PTR_R12 add r8, qword ptr [r12]
#define ADD_R8_FROM_PTR_R13 add r8, qword ptr [r13]
#define ADD_R8_FROM_PTR_R14 add r8, qword ptr [r14]
#define ADD_R8_FROM_PTR_R15 add r8, qword ptr [r15]
#define ADD_R8_FROM_PTR_EAX add r8, qword ptr [eax]
#define ADD_R8_FROM_PTR_EBX add r8, qword ptr [ebx]
#define ADD_R8_FROM_PTR_ECX add r8, qword ptr [ecx]
#define ADD_R8_FROM_PTR_EDX add r8, qword ptr [edx]
#define ADD_R8_FROM_PTR_EDI add r8, qword ptr [edi]
#define ADD_R8_FROM_PTR_ESI add r8, qword ptr [esi]
#define ADD_R8_FROM_PTR_EBP add r8, qword ptr [ebp]
#define ADD_R8_FROM_PTR_ESP add r8, qword ptr [esp]

#define ADD_R9_FROM_PTR_RAX add r9, qword ptr [rax]
#define ADD_R9_FROM_PTR_RBX add r9, qword ptr [rbx]
#define ADD_R9_FROM_PTR_RCX add r9, qword ptr [rcx]
#define ADD_R9_FROM_PTR_RDX add r9, qword ptr [rdx]
#define ADD_R9_FROM_PTR_RDI add r9, qword ptr [rdi]
#define ADD_R9_FROM_PTR_RSI add r9, qword ptr [rsi]
#define ADD_R9_FROM_PTR_RBP add r9, qword ptr [rbp]
#define ADD_R9_FROM_PTR_RSP add r9, qword ptr [rsp]
#define ADD_R9_FROM_PTR_R8 add r9, qword ptr [r8]
#define ADD_R9_FROM_PTR_R9 add r9, qword ptr [r9]
#define ADD_R9_FROM_PTR_R10 add r9, qword ptr [r10]
#define ADD_R9_FROM_PTR_R11 add r9, qword ptr [r11]
#define ADD_R9_FROM_PTR_R12 add r9, qword ptr [r12]
#define ADD_R9_FROM_PTR_R13 add r9, qword ptr [r13]
#define ADD_R9_FROM_PTR_R14 add r9, qword ptr [r14]
#define ADD_R9_FROM_PTR_R15 add r9, qword ptr [r15]
#define ADD_R9_FROM_PTR_EAX add r9, qword ptr [eax]
#define ADD_R9_FROM_PTR_EBX add r9, qword ptr [ebx]
#define ADD_R9_FROM_PTR_ECX add r9, qword ptr [ecx]
#define ADD_R9_FROM_PTR_EDX add r9, qword ptr [edx]
#define ADD_R9_FROM_PTR_EDI add r9, qword ptr [edi]
#define ADD_R9_FROM_PTR_ESI add r9, qword ptr [esi]
#define ADD_R9_FROM_PTR_EBP add r9, qword ptr [ebp]
#define ADD_R9_FROM_PTR_ESP add r9, qword ptr [esp]

#define ADD_R10_FROM_PTR_RAX add r10, qword ptr [rax]
#define ADD_R10_FROM_PTR_RBX add r10, qword ptr [rbx]
#define ADD_R10_FROM_PTR_RCX add r10, qword ptr [rcx]
#define ADD_R10_FROM_PTR_RDX add r10, qword ptr [rdx]
#define ADD_R10_FROM_PTR_RDI add r10, qword ptr [rdi]
#define ADD_R10_FROM_PTR_RSI add r10, qword ptr [rsi]
#define ADD_R10_FROM_PTR_RBP add r10, qword ptr [rbp]
#define ADD_R10_FROM_PTR_RSP add r10, qword ptr [rsp]
#define ADD_R10_FROM_PTR_R8 add r10, qword ptr [r8]
#define ADD_R10_FROM_PTR_R9 add r10, qword ptr [r9]
#define ADD_R10_FROM_PTR_R10 add r10, qword ptr [r10]
#define ADD_R10_FROM_PTR_R11 add r10, qword ptr [r11]
#define ADD_R10_FROM_PTR_R12 add r10, qword ptr [r12]
#define ADD_R10_FROM_PTR_R13 add r10, qword ptr [r13]
#define ADD_R10_FROM_PTR_R14 add r10, qword ptr [r14]
#define ADD_R10_FROM_PTR_R15 add r10, qword ptr [r15]
#define ADD_R10_FROM_PTR_EAX add r10, qword ptr [eax]
#define ADD_R10_FROM_PTR_EBX add r10, qword ptr [ebx]
#define ADD_R10_FROM_PTR_ECX add r10, qword ptr [ecx]
#define ADD_R10_FROM_PTR_EDX add r10, qword ptr [edx]
#define ADD_R10_FROM_PTR_EDI add r10, qword ptr [edi]
#define ADD_R10_FROM_PTR_ESI add r10, qword ptr [esi]
#define ADD_R10_FROM_PTR_EBP add r10, qword ptr [ebp]
#define ADD_R10_FROM_PTR_ESP add r10, qword ptr [esp]

#define ADD_R11_FROM_PTR_RAX add r11, qword ptr [rax]
#define ADD_R11_FROM_PTR_RBX add r11, qword ptr [rbx]
#define ADD_R11_FROM_PTR_RCX add r11, qword ptr [rcx]
#define ADD_R11_FROM_PTR_RDX add r11, qword ptr [rdx]
#define ADD_R11_FROM_PTR_RDI add r11, qword ptr [rdi]
#define ADD_R11_FROM_PTR_RSI add r11, qword ptr [rsi]
#define ADD_R11_FROM_PTR_RBP add r11, qword ptr [rbp]
#define ADD_R11_FROM_PTR_RSP add r11, qword ptr [rsp]
#define ADD_R11_FROM_PTR_R8 add r11, qword ptr [r8]
#define ADD_R11_FROM_PTR_R9 add r11, qword ptr [r9]
#define ADD_R11_FROM_PTR_R10 add r11, qword ptr [r10]
#define ADD_R11_FROM_PTR_R11 add r11, qword ptr [r11]
#define ADD_R11_FROM_PTR_R12 add r11, qword ptr [r12]
#define ADD_R11_FROM_PTR_R13 add r11, qword ptr [r13]
#define ADD_R11_FROM_PTR_R14 add r11, qword ptr [r14]
#define ADD_R11_FROM_PTR_R15 add r11, qword ptr [r15]
#define ADD_R11_FROM_PTR_EAX add r11, qword ptr [eax]
#define ADD_R11_FROM_PTR_EBX add r11, qword ptr [ebx]
#define ADD_R11_FROM_PTR_ECX add r11, qword ptr [ecx]
#define ADD_R11_FROM_PTR_EDX add r11, qword ptr [edx]
#define ADD_R11_FROM_PTR_EDI add r11, qword ptr [edi]
#define ADD_R11_FROM_PTR_ESI add r11, qword ptr [esi]
#define ADD_R11_FROM_PTR_EBP add r11, qword ptr [ebp]
#define ADD_R11_FROM_PTR_ESP add r11, qword ptr [esp]

#define ADD_R12_FROM_PTR_RAX add r12, qword ptr [rax]
#define ADD_R12_FROM_PTR_RBX add r12, qword ptr [rbx]
#define ADD_R12_FROM_PTR_RCX add r12, qword ptr [rcx]
#define ADD_R12_FROM_PTR_RDX add r12, qword ptr [rdx]
#define ADD_R12_FROM_PTR_RDI add r12, qword ptr [rdi]
#define ADD_R12_FROM_PTR_RSI add r12, qword ptr [rsi]
#define ADD_R12_FROM_PTR_RBP add r12, qword ptr [rbp]
#define ADD_R12_FROM_PTR_RSP add r12, qword ptr [rsp]
#define ADD_R12_FROM_PTR_R8 add r12, qword ptr [r8]
#define ADD_R12_FROM_PTR_R9 add r12, qword ptr [r9]
#define ADD_R12_FROM_PTR_R10 add r12, qword ptr [r10]
#define ADD_R12_FROM_PTR_R11 add r12, qword ptr [r11]
#define ADD_R12_FROM_PTR_R12 add r12, qword ptr [r12]
#define ADD_R12_FROM_PTR_R13 add r12, qword ptr [r13]
#define ADD_R12_FROM_PTR_R14 add r12, qword ptr [r14]
#define ADD_R12_FROM_PTR_R15 add r12, qword ptr [r15]
#define ADD_R12_FROM_PTR_EAX add r12, qword ptr [eax]
#define ADD_R12_FROM_PTR_EBX add r12, qword ptr [ebx]
#define ADD_R12_FROM_PTR_ECX add r12, qword ptr [ecx]
#define ADD_R12_FROM_PTR_EDX add r12, qword ptr [edx]
#define ADD_R12_FROM_PTR_EDI add r12, qword ptr [edi]
#define ADD_R12_FROM_PTR_ESI add r12, qword ptr [esi]
#define ADD_R12_FROM_PTR_EBP add r12, qword ptr [ebp]
#define ADD_R12_FROM_PTR_ESP add r12, qword ptr [esp]

#define ADD_R13_FROM_PTR_RAX add r13, qword ptr [rax]
#define ADD_R13_FROM_PTR_RBX add r13, qword ptr [rbx]
#define ADD_R13_FROM_PTR_RCX add r13, qword ptr [rcx]
#define ADD_R13_FROM_PTR_RDX add r13, qword ptr [rdx]
#define ADD_R13_FROM_PTR_RDI add r13, qword ptr [rdi]
#define ADD_R13_FROM_PTR_RSI add r13, qword ptr [rsi]
#define ADD_R13_FROM_PTR_RBP add r13, qword ptr [rbp]
#define ADD_R13_FROM_PTR_RSP add r13, qword ptr [rsp]
#define ADD_R13_FROM_PTR_R8 add r13, qword ptr [r8]
#define ADD_R13_FROM_PTR_R9 add r13, qword ptr [r9]
#define ADD_R13_FROM_PTR_R10 add r13, qword ptr [r10]
#define ADD_R13_FROM_PTR_R11 add r13, qword ptr [r11]
#define ADD_R13_FROM_PTR_R12 add r13, qword ptr [r12]
#define ADD_R13_FROM_PTR_R13 add r13, qword ptr [r13]
#define ADD_R13_FROM_PTR_R14 add r13, qword ptr [r14]
#define ADD_R13_FROM_PTR_R15 add r13, qword ptr [r15]
#define ADD_R13_FROM_PTR_EAX add r13, qword ptr [eax]
#define ADD_R13_FROM_PTR_EBX add r13, qword ptr [ebx]
#define ADD_R13_FROM_PTR_ECX add r13, qword ptr [ecx]
#define ADD_R13_FROM_PTR_EDX add r13, qword ptr [edx]
#define ADD_R13_FROM_PTR_EDI add r13, qword ptr [edi]
#define ADD_R13_FROM_PTR_ESI add r13, qword ptr [esi]
#define ADD_R13_FROM_PTR_EBP add r13, qword ptr [ebp]
#define ADD_R13_FROM_PTR_ESP add r13, qword ptr [esp]

#define ADD_R14_FROM_PTR_RAX add r14, qword ptr [rax]
#define ADD_R14_FROM_PTR_RBX add r14, qword ptr [rbx]
#define ADD_R14_FROM_PTR_RCX add r14, qword ptr [rcx]
#define ADD_R14_FROM_PTR_RDX add r14, qword ptr [rdx]
#define ADD_R14_FROM_PTR_RDI add r14, qword ptr [rdi]
#define ADD_R14_FROM_PTR_RSI add r14, qword ptr [rsi]
#define ADD_R14_FROM_PTR_RBP add r14, qword ptr [rbp]
#define ADD_R14_FROM_PTR_RSP add r14, qword ptr [rsp]
#define ADD_R14_FROM_PTR_R8 add r14, qword ptr [r8]
#define ADD_R14_FROM_PTR_R9 add r14, qword ptr [r9]
#define ADD_R14_FROM_PTR_R10 add r14, qword ptr [r10]
#define ADD_R14_FROM_PTR_R11 add r14, qword ptr [r11]
#define ADD_R14_FROM_PTR_R12 add r14, qword ptr [r12]
#define ADD_R14_FROM_PTR_R13 add r14, qword ptr [r13]
#define ADD_R14_FROM_PTR_R14 add r14, qword ptr [r14]
#define ADD_R14_FROM_PTR_R15 add r14, qword ptr [r15]
#define ADD_R14_FROM_PTR_EAX add r14, qword ptr [eax]
#define ADD_R14_FROM_PTR_EBX add r14, qword ptr [ebx]
#define ADD_R14_FROM_PTR_ECX add r14, qword ptr [ecx]
#define ADD_R14_FROM_PTR_EDX add r14, qword ptr [edx]
#define ADD_R14_FROM_PTR_EDI add r14, qword ptr [edi]
#define ADD_R14_FROM_PTR_ESI add r14, qword ptr [esi]
#define ADD_R14_FROM_PTR_EBP add r14, qword ptr [ebp]
#define ADD_R14_FROM_PTR_ESP add r14, qword ptr [esp]

#define ADD_R15_FROM_PTR_RAX add r15, qword ptr [rax]
#define ADD_R15_FROM_PTR_RBX add r15, qword ptr [rbx]
#define ADD_R15_FROM_PTR_RCX add r15, qword ptr [rcx]
#define ADD_R15_FROM_PTR_RDX add r15, qword ptr [rdx]
#define ADD_R15_FROM_PTR_RDI add r15, qword ptr [rdi]
#define ADD_R15_FROM_PTR_RSI add r15, qword ptr [rsi]
#define ADD_R15_FROM_PTR_RBP add r15, qword ptr [rbp]
#define ADD_R15_FROM_PTR_RSP add r15, qword ptr [rsp]
#define ADD_R15_FROM_PTR_R8 add r15, qword ptr [r8]
#define ADD_R15_FROM_PTR_R9 add r15, qword ptr [r9]
#define ADD_R15_FROM_PTR_R10 add r15, qword ptr [r10]
#define ADD_R15_FROM_PTR_R11 add r15, qword ptr [r11]
#define ADD_R15_FROM_PTR_R12 add r15, qword ptr [r12]
#define ADD_R15_FROM_PTR_R13 add r15, qword ptr [r13]
#define ADD_R15_FROM_PTR_R14 add r15, qword ptr [r14]
#define ADD_R15_FROM_PTR_R15 add r15, qword ptr [r15]
#define ADD_R15_FROM_PTR_EAX add r15, qword ptr [eax]
#define ADD_R15_FROM_PTR_EBX add r15, qword ptr [ebx]
#define ADD_R15_FROM_PTR_ECX add r15, qword ptr [ecx]
#define ADD_R15_FROM_PTR_EDX add r15, qword ptr [edx]
#define ADD_R15_FROM_PTR_EDI add r15, qword ptr [edi]
#define ADD_R15_FROM_PTR_ESI add r15, qword ptr [esi]
#define ADD_R15_FROM_PTR_EBP add r15, qword ptr [ebp]
#define ADD_R15_FROM_PTR_ESP add r15, qword ptr [esp]

#define ADD_RAX_TO_PTR_RAX add qword ptr [rax], rax
#define ADD_RAX_TO_PTR_RBX add qword ptr [rbx], rax
#define ADD_RAX_TO_PTR_RCX add qword ptr [rcx], rax
#define ADD_RAX_TO_PTR_RDX add qword ptr [rdx], rax
#define ADD_RAX_TO_PTR_RDI add qword ptr [rdi], rax
#define ADD_RAX_TO_PTR_RSI add qword ptr [rsi], rax
#define ADD_RAX_TO_PTR_RBP add qword ptr [rbp], rax
#define ADD_RAX_TO_PTR_RSP add qword ptr [rsp], rax
#define ADD_RAX_TO_PTR_R8 add qword ptr [r8], rax
#define ADD_RAX_TO_PTR_R9 add qword ptr [r9], rax
#define ADD_RAX_TO_PTR_R10 add qword ptr [r10], rax
#define ADD_RAX_TO_PTR_R11 add qword ptr [r11], rax
#define ADD_RAX_TO_PTR_R12 add qword ptr [r12], rax
#define ADD_RAX_TO_PTR_R13 add qword ptr [r13], rax
#define ADD_RAX_TO_PTR_R14 add qword ptr [r14], rax
#define ADD_RAX_TO_PTR_R15 add qword ptr [r15], rax
#define ADD_RAX_TO_PTR_EAX add qword ptr [eax], rax
#define ADD_RAX_TO_PTR_EBX add qword ptr [ebx], rax
#define ADD_RAX_TO_PTR_ECX add qword ptr [ecx], rax
#define ADD_RAX_TO_PTR_EDX add qword ptr [edx], rax
#define ADD_RAX_TO_PTR_EDI add qword ptr [edi], rax
#define ADD_RAX_TO_PTR_ESI add qword ptr [esi], rax
#define ADD_RAX_TO_PTR_EBP add qword ptr [ebp], rax
#define ADD_RAX_TO_PTR_ESP add qword ptr [esp], rax

#define ADD_RBX_TO_PTR_RAX add qword ptr [rax], rbx
#define ADD_RBX_TO_PTR_RBX add qword ptr [rbx], rbx
#define ADD_RBX_TO_PTR_RCX add qword ptr [rcx], rbx
#define ADD_RBX_TO_PTR_RDX add qword ptr [rdx], rbx
#define ADD_RBX_TO_PTR_RDI add qword ptr [rdi], rbx
#define ADD_RBX_TO_PTR_RSI add qword ptr [rsi], rbx
#define ADD_RBX_TO_PTR_RBP add qword ptr [rbp], rbx
#define ADD_RBX_TO_PTR_RSP add qword ptr [rsp], rbx
#define ADD_RBX_TO_PTR_R8 add qword ptr [r8], rbx
#define ADD_RBX_TO_PTR_R9 add qword ptr [r9], rbx
#define ADD_RBX_TO_PTR_R10 add qword ptr [r10], rbx
#define ADD_RBX_TO_PTR_R11 add qword ptr [r11], rbx
#define ADD_RBX_TO_PTR_R12 add qword ptr [r12], rbx
#define ADD_RBX_TO_PTR_R13 add qword ptr [r13], rbx
#define ADD_RBX_TO_PTR_R14 add qword ptr [r14], rbx
#define ADD_RBX_TO_PTR_R15 add qword ptr [r15], rbx
#define ADD_RBX_TO_PTR_EAX add qword ptr [eax], rbx
#define ADD_RBX_TO_PTR_EBX add qword ptr [ebx], rbx
#define ADD_RBX_TO_PTR_ECX add qword ptr [ecx], rbx
#define ADD_RBX_TO_PTR_EDX add qword ptr [edx], rbx
#define ADD_RBX_TO_PTR_EDI add qword ptr [edi], rbx
#define ADD_RBX_TO_PTR_ESI add qword ptr [esi], rbx
#define ADD_RBX_TO_PTR_EBP add qword ptr [ebp], rbx
#define ADD_RBX_TO_PTR_ESP add qword ptr [esp], rbx

#define ADD_RCX_TO_PTR_RAX add qword ptr [rax], rcx
#define ADD_RCX_TO_PTR_RBX add qword ptr [rbx], rcx
#define ADD_RCX_TO_PTR_RCX add qword ptr [rcx], rcx
#define ADD_RCX_TO_PTR_RDX add qword ptr [rdx], rcx
#define ADD_RCX_TO_PTR_RDI add qword ptr [rdi], rcx
#define ADD_RCX_TO_PTR_RSI add qword ptr [rsi], rcx
#define ADD_RCX_TO_PTR_RBP add qword ptr [rbp], rcx
#define ADD_RCX_TO_PTR_RSP add qword ptr [rsp], rcx
#define ADD_RCX_TO_PTR_R8 add qword ptr [r8], rcx
#define ADD_RCX_TO_PTR_R9 add qword ptr [r9], rcx
#define ADD_RCX_TO_PTR_R10 add qword ptr [r10], rcx
#define ADD_RCX_TO_PTR_R11 add qword ptr [r11], rcx
#define ADD_RCX_TO_PTR_R12 add qword ptr [r12], rcx
#define ADD_RCX_TO_PTR_R13 add qword ptr [r13], rcx
#define ADD_RCX_TO_PTR_R14 add qword ptr [r14], rcx
#define ADD_RCX_TO_PTR_R15 add qword ptr [r15], rcx
#define ADD_RCX_TO_PTR_EAX add qword ptr [eax], rcx
#define ADD_RCX_TO_PTR_EBX add qword ptr [ebx], rcx
#define ADD_RCX_TO_PTR_ECX add qword ptr [ecx], rcx
#define ADD_RCX_TO_PTR_EDX add qword ptr [edx], rcx
#define ADD_RCX_TO_PTR_EDI add qword ptr [edi], rcx
#define ADD_RCX_TO_PTR_ESI add qword ptr [esi], rcx
#define ADD_RCX_TO_PTR_EBP add qword ptr [ebp], rcx
#define ADD_RCX_TO_PTR_ESP add qword ptr [esp], rcx

#define ADD_RDX_TO_PTR_RAX add qword ptr [rax], rdx
#define ADD_RDX_TO_PTR_RBX add qword ptr [rbx], rdx
#define ADD_RDX_TO_PTR_RCX add qword ptr [rcx], rdx
#define ADD_RDX_TO_PTR_RDX add qword ptr [rdx], rdx
#define ADD_RDX_TO_PTR_RDI add qword ptr [rdi], rdx
#define ADD_RDX_TO_PTR_RSI add qword ptr [rsi], rdx
#define ADD_RDX_TO_PTR_RBP add qword ptr [rbp], rdx
#define ADD_RDX_TO_PTR_RSP add qword ptr [rsp], rdx
#define ADD_RDX_TO_PTR_R8 add qword ptr [r8], rdx
#define ADD_RDX_TO_PTR_R9 add qword ptr [r9], rdx
#define ADD_RDX_TO_PTR_R10 add qword ptr [r10], rdx
#define ADD_RDX_TO_PTR_R11 add qword ptr [r11], rdx
#define ADD_RDX_TO_PTR_R12 add qword ptr [r12], rdx
#define ADD_RDX_TO_PTR_R13 add qword ptr [r13], rdx
#define ADD_RDX_TO_PTR_R14 add qword ptr [r14], rdx
#define ADD_RDX_TO_PTR_R15 add qword ptr [r15], rdx
#define ADD_RDX_TO_PTR_EAX add qword ptr [eax], rdx
#define ADD_RDX_TO_PTR_EBX add qword ptr [ebx], rdx
#define ADD_RDX_TO_PTR_ECX add qword ptr [ecx], rdx
#define ADD_RDX_TO_PTR_EDX add qword ptr [edx], rdx
#define ADD_RDX_TO_PTR_EDI add qword ptr [edi], rdx
#define ADD_RDX_TO_PTR_ESI add qword ptr [esi], rdx
#define ADD_RDX_TO_PTR_EBP add qword ptr [ebp], rdx
#define ADD_RDX_TO_PTR_ESP add qword ptr [esp], rdx

#define ADD_RDI_TO_PTR_RAX add qword ptr [rax], rdi
#define ADD_RDI_TO_PTR_RBX add qword ptr [rbx], rdi
#define ADD_RDI_TO_PTR_RCX add qword ptr [rcx], rdi
#define ADD_RDI_TO_PTR_RDX add qword ptr [rdx], rdi
#define ADD_RDI_TO_PTR_RDI add qword ptr [rdi], rdi
#define ADD_RDI_TO_PTR_RSI add qword ptr [rsi], rdi
#define ADD_RDI_TO_PTR_RBP add qword ptr [rbp], rdi
#define ADD_RDI_TO_PTR_RSP add qword ptr [rsp], rdi
#define ADD_RDI_TO_PTR_R8 add qword ptr [r8], rdi
#define ADD_RDI_TO_PTR_R9 add qword ptr [r9], rdi
#define ADD_RDI_TO_PTR_R10 add qword ptr [r10], rdi
#define ADD_RDI_TO_PTR_R11 add qword ptr [r11], rdi
#define ADD_RDI_TO_PTR_R12 add qword ptr [r12], rdi
#define ADD_RDI_TO_PTR_R13 add qword ptr [r13], rdi
#define ADD_RDI_TO_PTR_R14 add qword ptr [r14], rdi
#define ADD_RDI_TO_PTR_R15 add qword ptr [r15], rdi
#define ADD_RDI_TO_PTR_EAX add qword ptr [eax], rdi
#define ADD_RDI_TO_PTR_EBX add qword ptr [ebx], rdi
#define ADD_RDI_TO_PTR_ECX add qword ptr [ecx], rdi
#define ADD_RDI_TO_PTR_EDX add qword ptr [edx], rdi
#define ADD_RDI_TO_PTR_EDI add qword ptr [edi], rdi
#define ADD_RDI_TO_PTR_ESI add qword ptr [esi], rdi
#define ADD_RDI_TO_PTR_EBP add qword ptr [ebp], rdi
#define ADD_RDI_TO_PTR_ESP add qword ptr [esp], rdi

#define ADD_RSI_TO_PTR_RAX add qword ptr [rax], rsi
#define ADD_RSI_TO_PTR_RBX add qword ptr [rbx], rsi
#define ADD_RSI_TO_PTR_RCX add qword ptr [rcx], rsi
#define ADD_RSI_TO_PTR_RDX add qword ptr [rdx], rsi
#define ADD_RSI_TO_PTR_RDI add qword ptr [rdi], rsi
#define ADD_RSI_TO_PTR_RSI add qword ptr [rsi], rsi
#define ADD_RSI_TO_PTR_RBP add qword ptr [rbp], rsi
#define ADD_RSI_TO_PTR_RSP add qword ptr [rsp], rsi
#define ADD_RSI_TO_PTR_R8 add qword ptr [r8], rsi
#define ADD_RSI_TO_PTR_R9 add qword ptr [r9], rsi
#define ADD_RSI_TO_PTR_R10 add qword ptr [r10], rsi
#define ADD_RSI_TO_PTR_R11 add qword ptr [r11], rsi
#define ADD_RSI_TO_PTR_R12 add qword ptr [r12], rsi
#define ADD_RSI_TO_PTR_R13 add qword ptr [r13], rsi
#define ADD_RSI_TO_PTR_R14 add qword ptr [r14], rsi
#define ADD_RSI_TO_PTR_R15 add qword ptr [r15], rsi
#define ADD_RSI_TO_PTR_EAX add qword ptr [eax], rsi
#define ADD_RSI_TO_PTR_EBX add qword ptr [ebx], rsi
#define ADD_RSI_TO_PTR_ECX add qword ptr [ecx], rsi
#define ADD_RSI_TO_PTR_EDX add qword ptr [edx], rsi
#define ADD_RSI_TO_PTR_EDI add qword ptr [edi], rsi
#define ADD_RSI_TO_PTR_ESI add qword ptr [esi], rsi
#define ADD_RSI_TO_PTR_EBP add qword ptr [ebp], rsi
#define ADD_RSI_TO_PTR_ESP add qword ptr [esp], rsi

#define ADD_RBP_TO_PTR_RAX add qword ptr [rax], rbp
#define ADD_RBP_TO_PTR_RBX add qword ptr [rbx], rbp
#define ADD_RBP_TO_PTR_RCX add qword ptr [rcx], rbp
#define ADD_RBP_TO_PTR_RDX add qword ptr [rdx], rbp
#define ADD_RBP_TO_PTR_RDI add qword ptr [rdi], rbp
#define ADD_RBP_TO_PTR_RSI add qword ptr [rsi], rbp
#define ADD_RBP_TO_PTR_RBP add qword ptr [rbp], rbp
#define ADD_RBP_TO_PTR_RSP add qword ptr [rsp], rbp
#define ADD_RBP_TO_PTR_R8 add qword ptr [r8], rbp
#define ADD_RBP_TO_PTR_R9 add qword ptr [r9], rbp
#define ADD_RBP_TO_PTR_R10 add qword ptr [r10], rbp
#define ADD_RBP_TO_PTR_R11 add qword ptr [r11], rbp
#define ADD_RBP_TO_PTR_R12 add qword ptr [r12], rbp
#define ADD_RBP_TO_PTR_R13 add qword ptr [r13], rbp
#define ADD_RBP_TO_PTR_R14 add qword ptr [r14], rbp
#define ADD_RBP_TO_PTR_R15 add qword ptr [r15], rbp
#define ADD_RBP_TO_PTR_EAX add qword ptr [eax], rbp
#define ADD_RBP_TO_PTR_EBX add qword ptr [ebx], rbp
#define ADD_RBP_TO_PTR_ECX add qword ptr [ecx], rbp
#define ADD_RBP_TO_PTR_EDX add qword ptr [edx], rbp
#define ADD_RBP_TO_PTR_EDI add qword ptr [edi], rbp
#define ADD_RBP_TO_PTR_ESI add qword ptr [esi], rbp
#define ADD_RBP_TO_PTR_EBP add qword ptr [ebp], rbp
#define ADD_RBP_TO_PTR_ESP add qword ptr [esp], rbp

#define ADD_RSP_TO_PTR_RAX add qword ptr [rax], rsp
#define ADD_RSP_TO_PTR_RBX add qword ptr [rbx], rsp
#define ADD_RSP_TO_PTR_RCX add qword ptr [rcx], rsp
#define ADD_RSP_TO_PTR_RDX add qword ptr [rdx], rsp
#define ADD_RSP_TO_PTR_RDI add qword ptr [rdi], rsp
#define ADD_RSP_TO_PTR_RSI add qword ptr [rsi], rsp
#define ADD_RSP_TO_PTR_RBP add qword ptr [rbp], rsp
#define ADD_RSP_TO_PTR_RSP add qword ptr [rsp], rsp
#define ADD_RSP_TO_PTR_R8 add qword ptr [r8], rsp
#define ADD_RSP_TO_PTR_R9 add qword ptr [r9], rsp
#define ADD_RSP_TO_PTR_R10 add qword ptr [r10], rsp
#define ADD_RSP_TO_PTR_R11 add qword ptr [r11], rsp
#define ADD_RSP_TO_PTR_R12 add qword ptr [r12], rsp
#define ADD_RSP_TO_PTR_R13 add qword ptr [r13], rsp
#define ADD_RSP_TO_PTR_R14 add qword ptr [r14], rsp
#define ADD_RSP_TO_PTR_R15 add qword ptr [r15], rsp
#define ADD_RSP_TO_PTR_EAX add qword ptr [eax], rsp
#define ADD_RSP_TO_PTR_EBX add qword ptr [ebx], rsp
#define ADD_RSP_TO_PTR_ECX add qword ptr [ecx], rsp
#define ADD_RSP_TO_PTR_EDX add qword ptr [edx], rsp
#define ADD_RSP_TO_PTR_EDI add qword ptr [edi], rsp
#define ADD_RSP_TO_PTR_ESI add qword ptr [esi], rsp
#define ADD_RSP_TO_PTR_EBP add qword ptr [ebp], rsp
#define ADD_RSP_TO_PTR_ESP add qword ptr [esp], rsp

#define ADD_R8_TO_PTR_RAX add qword ptr [rax], r8
#define ADD_R8_TO_PTR_RBX add qword ptr [rbx], r8
#define ADD_R8_TO_PTR_RCX add qword ptr [rcx], r8
#define ADD_R8_TO_PTR_RDX add qword ptr [rdx], r8
#define ADD_R8_TO_PTR_RDI add qword ptr [rdi], r8
#define ADD_R8_TO_PTR_RSI add qword ptr [rsi], r8
#define ADD_R8_TO_PTR_RBP add qword ptr [rbp], r8
#define ADD_R8_TO_PTR_RSP add qword ptr [rsp], r8
#define ADD_R8_TO_PTR_R8 add qword ptr [r8], r8
#define ADD_R8_TO_PTR_R9 add qword ptr [r9], r8
#define ADD_R8_TO_PTR_R10 add qword ptr [r10], r8
#define ADD_R8_TO_PTR_R11 add qword ptr [r11], r8
#define ADD_R8_TO_PTR_R12 add qword ptr [r12], r8
#define ADD_R8_TO_PTR_R13 add qword ptr [r13], r8
#define ADD_R8_TO_PTR_R14 add qword ptr [r14], r8
#define ADD_R8_TO_PTR_R15 add qword ptr [r15], r8
#define ADD_R8_TO_PTR_EAX add qword ptr [eax], r8
#define ADD_R8_TO_PTR_EBX add qword ptr [ebx], r8
#define ADD_R8_TO_PTR_ECX add qword ptr [ecx], r8
#define ADD_R8_TO_PTR_EDX add qword ptr [edx], r8
#define ADD_R8_TO_PTR_EDI add qword ptr [edi], r8
#define ADD_R8_TO_PTR_ESI add qword ptr [esi], r8
#define ADD_R8_TO_PTR_EBP add qword ptr [ebp], r8
#define ADD_R8_TO_PTR_ESP add qword ptr [esp], r8

#define ADD_R9_TO_PTR_RAX add qword ptr [rax], r9
#define ADD_R9_TO_PTR_RBX add qword ptr [rbx], r9
#define ADD_R9_TO_PTR_RCX add qword ptr [rcx], r9
#define ADD_R9_TO_PTR_RDX add qword ptr [rdx], r9
#define ADD_R9_TO_PTR_RDI add qword ptr [rdi], r9
#define ADD_R9_TO_PTR_RSI add qword ptr [rsi], r9
#define ADD_R9_TO_PTR_RBP add qword ptr [rbp], r9
#define ADD_R9_TO_PTR_RSP add qword ptr [rsp], r9
#define ADD_R9_TO_PTR_R8 add qword ptr [r8], r9
#define ADD_R9_TO_PTR_R9 add qword ptr [r9], r9
#define ADD_R9_TO_PTR_R10 add qword ptr [r10], r9
#define ADD_R9_TO_PTR_R11 add qword ptr [r11], r9
#define ADD_R9_TO_PTR_R12 add qword ptr [r12], r9
#define ADD_R9_TO_PTR_R13 add qword ptr [r13], r9
#define ADD_R9_TO_PTR_R14 add qword ptr [r14], r9
#define ADD_R9_TO_PTR_R15 add qword ptr [r15], r9
#define ADD_R9_TO_PTR_EAX add qword ptr [eax], r9
#define ADD_R9_TO_PTR_EBX add qword ptr [ebx], r9
#define ADD_R9_TO_PTR_ECX add qword ptr [ecx], r9
#define ADD_R9_TO_PTR_EDX add qword ptr [edx], r9
#define ADD_R9_TO_PTR_EDI add qword ptr [edi], r9
#define ADD_R9_TO_PTR_ESI add qword ptr [esi], r9
#define ADD_R9_TO_PTR_EBP add qword ptr [ebp], r9
#define ADD_R9_TO_PTR_ESP add qword ptr [esp], r9

#define ADD_R10_TO_PTR_RAX add qword ptr [rax], r10
#define ADD_R10_TO_PTR_RBX add qword ptr [rbx], r10
#define ADD_R10_TO_PTR_RCX add qword ptr [rcx], r10
#define ADD_R10_TO_PTR_RDX add qword ptr [rdx], r10
#define ADD_R10_TO_PTR_RDI add qword ptr [rdi], r10
#define ADD_R10_TO_PTR_RSI add qword ptr [rsi], r10
#define ADD_R10_TO_PTR_RBP add qword ptr [rbp], r10
#define ADD_R10_TO_PTR_RSP add qword ptr [rsp], r10
#define ADD_R10_TO_PTR_R8 add qword ptr [r8], r10
#define ADD_R10_TO_PTR_R9 add qword ptr [r9], r10
#define ADD_R10_TO_PTR_R10 add qword ptr [r10], r10
#define ADD_R10_TO_PTR_R11 add qword ptr [r11], r10
#define ADD_R10_TO_PTR_R12 add qword ptr [r12], r10
#define ADD_R10_TO_PTR_R13 add qword ptr [r13], r10
#define ADD_R10_TO_PTR_R14 add qword ptr [r14], r10
#define ADD_R10_TO_PTR_R15 add qword ptr [r15], r10
#define ADD_R10_TO_PTR_EAX add qword ptr [eax], r10
#define ADD_R10_TO_PTR_EBX add qword ptr [ebx], r10
#define ADD_R10_TO_PTR_ECX add qword ptr [ecx], r10
#define ADD_R10_TO_PTR_EDX add qword ptr [edx], r10
#define ADD_R10_TO_PTR_EDI add qword ptr [edi], r10
#define ADD_R10_TO_PTR_ESI add qword ptr [esi], r10
#define ADD_R10_TO_PTR_EBP add qword ptr [ebp], r10
#define ADD_R10_TO_PTR_ESP add qword ptr [esp], r10

#define ADD_R11_TO_PTR_RAX add qword ptr [rax], r11
#define ADD_R11_TO_PTR_RBX add qword ptr [rbx], r11
#define ADD_R11_TO_PTR_RCX add qword ptr [rcx], r11
#define ADD_R11_TO_PTR_RDX add qword ptr [rdx], r11
#define ADD_R11_TO_PTR_RDI add qword ptr [rdi], r11
#define ADD_R11_TO_PTR_RSI add qword ptr [rsi], r11
#define ADD_R11_TO_PTR_RBP add qword ptr [rbp], r11
#define ADD_R11_TO_PTR_RSP add qword ptr [rsp], r11
#define ADD_R11_TO_PTR_R8 add qword ptr [r8], r11
#define ADD_R11_TO_PTR_R9 add qword ptr [r9], r11
#define ADD_R11_TO_PTR_R10 add qword ptr [r10], r11
#define ADD_R11_TO_PTR_R11 add qword ptr [r11], r11
#define ADD_R11_TO_PTR_R12 add qword ptr [r12], r11
#define ADD_R11_TO_PTR_R13 add qword ptr [r13], r11
#define ADD_R11_TO_PTR_R14 add qword ptr [r14], r11
#define ADD_R11_TO_PTR_R15 add qword ptr [r15], r11
#define ADD_R11_TO_PTR_EAX add qword ptr [eax], r11
#define ADD_R11_TO_PTR_EBX add qword ptr [ebx], r11
#define ADD_R11_TO_PTR_ECX add qword ptr [ecx], r11
#define ADD_R11_TO_PTR_EDX add qword ptr [edx], r11
#define ADD_R11_TO_PTR_EDI add qword ptr [edi], r11
#define ADD_R11_TO_PTR_ESI add qword ptr [esi], r11
#define ADD_R11_TO_PTR_EBP add qword ptr [ebp], r11
#define ADD_R11_TO_PTR_ESP add qword ptr [esp], r11

#define ADD_R12_TO_PTR_RAX add qword ptr [rax], r12
#define ADD_R12_TO_PTR_RBX add qword ptr [rbx], r12
#define ADD_R12_TO_PTR_RCX add qword ptr [rcx], r12
#define ADD_R12_TO_PTR_RDX add qword ptr [rdx], r12
#define ADD_R12_TO_PTR_RDI add qword ptr [rdi], r12
#define ADD_R12_TO_PTR_RSI add qword ptr [rsi], r12
#define ADD_R12_TO_PTR_RBP add qword ptr [rbp], r12
#define ADD_R12_TO_PTR_RSP add qword ptr [rsp], r12
#define ADD_R12_TO_PTR_R8 add qword ptr [r8], r12
#define ADD_R12_TO_PTR_R9 add qword ptr [r9], r12
#define ADD_R12_TO_PTR_R10 add qword ptr [r10], r12
#define ADD_R12_TO_PTR_R11 add qword ptr [r11], r12
#define ADD_R12_TO_PTR_R12 add qword ptr [r12], r12
#define ADD_R12_TO_PTR_R13 add qword ptr [r13], r12
#define ADD_R12_TO_PTR_R14 add qword ptr [r14], r12
#define ADD_R12_TO_PTR_R15 add qword ptr [r15], r12
#define ADD_R12_TO_PTR_EAX add qword ptr [eax], r12
#define ADD_R12_TO_PTR_EBX add qword ptr [ebx], r12
#define ADD_R12_TO_PTR_ECX add qword ptr [ecx], r12
#define ADD_R12_TO_PTR_EDX add qword ptr [edx], r12
#define ADD_R12_TO_PTR_EDI add qword ptr [edi], r12
#define ADD_R12_TO_PTR_ESI add qword ptr [esi], r12
#define ADD_R12_TO_PTR_EBP add qword ptr [ebp], r12
#define ADD_R12_TO_PTR_ESP add qword ptr [esp], r12

#define ADD_R13_TO_PTR_RAX add qword ptr [rax], r13
#define ADD_R13_TO_PTR_RBX add qword ptr [rbx], r13
#define ADD_R13_TO_PTR_RCX add qword ptr [rcx], r13
#define ADD_R13_TO_PTR_RDX add qword ptr [rdx], r13
#define ADD_R13_TO_PTR_RDI add qword ptr [rdi], r13
#define ADD_R13_TO_PTR_RSI add qword ptr [rsi], r13
#define ADD_R13_TO_PTR_RBP add qword ptr [rbp], r13
#define ADD_R13_TO_PTR_RSP add qword ptr [rsp], r13
#define ADD_R13_TO_PTR_R8 add qword ptr [r8], r13
#define ADD_R13_TO_PTR_R9 add qword ptr [r9], r13
#define ADD_R13_TO_PTR_R10 add qword ptr [r10], r13
#define ADD_R13_TO_PTR_R11 add qword ptr [r11], r13
#define ADD_R13_TO_PTR_R12 add qword ptr [r12], r13
#define ADD_R13_TO_PTR_R13 add qword ptr [r13], r13
#define ADD_R13_TO_PTR_R14 add qword ptr [r14], r13
#define ADD_R13_TO_PTR_R15 add qword ptr [r15], r13
#define ADD_R13_TO_PTR_EAX add qword ptr [eax], r13
#define ADD_R13_TO_PTR_EBX add qword ptr [ebx], r13
#define ADD_R13_TO_PTR_ECX add qword ptr [ecx], r13
#define ADD_R13_TO_PTR_EDX add qword ptr [edx], r13
#define ADD_R13_TO_PTR_EDI add qword ptr [edi], r13
#define ADD_R13_TO_PTR_ESI add qword ptr [esi], r13
#define ADD_R13_TO_PTR_EBP add qword ptr [ebp], r13
#define ADD_R13_TO_PTR_ESP add qword ptr [esp], r13

#define ADD_R14_TO_PTR_RAX add qword ptr [rax], r14
#define ADD_R14_TO_PTR_RBX add qword ptr [rbx], r14
#define ADD_R14_TO_PTR_RCX add qword ptr [rcx], r14
#define ADD_R14_TO_PTR_RDX add qword ptr [rdx], r14
#define ADD_R14_TO_PTR_RDI add qword ptr [rdi], r14
#define ADD_R14_TO_PTR_RSI add qword ptr [rsi], r14
#define ADD_R14_TO_PTR_RBP add qword ptr [rbp], r14
#define ADD_R14_TO_PTR_RSP add qword ptr [rsp], r14
#define ADD_R14_TO_PTR_R8 add qword ptr [r8], r14
#define ADD_R14_TO_PTR_R9 add qword ptr [r9], r14
#define ADD_R14_TO_PTR_R10 add qword ptr [r10], r14
#define ADD_R14_TO_PTR_R11 add qword ptr [r11], r14
#define ADD_R14_TO_PTR_R12 add qword ptr [r12], r14
#define ADD_R14_TO_PTR_R13 add qword ptr [r13], r14
#define ADD_R14_TO_PTR_R14 add qword ptr [r14], r14
#define ADD_R14_TO_PTR_R15 add qword ptr [r15], r14
#define ADD_R14_TO_PTR_EAX add qword ptr [eax], r14
#define ADD_R14_TO_PTR_EBX add qword ptr [ebx], r14
#define ADD_R14_TO_PTR_ECX add qword ptr [ecx], r14
#define ADD_R14_TO_PTR_EDX add qword ptr [edx], r14
#define ADD_R14_TO_PTR_EDI add qword ptr [edi], r14
#define ADD_R14_TO_PTR_ESI add qword ptr [esi], r14
#define ADD_R14_TO_PTR_EBP add qword ptr [ebp], r14
#define ADD_R14_TO_PTR_ESP add qword ptr [esp], r14

#define ADD_R15_TO_PTR_RAX add qword ptr [rax], r15
#define ADD_R15_TO_PTR_RBX add qword ptr [rbx], r15
#define ADD_R15_TO_PTR_RCX add qword ptr [rcx], r15
#define ADD_R15_TO_PTR_RDX add qword ptr [rdx], r15
#define ADD_R15_TO_PTR_RDI add qword ptr [rdi], r15
#define ADD_R15_TO_PTR_RSI add qword ptr [rsi], r15
#define ADD_R15_TO_PTR_RBP add qword ptr [rbp], r15
#define ADD_R15_TO_PTR_RSP add qword ptr [rsp], r15
#define ADD_R15_TO_PTR_R8 add qword ptr [r8], r15
#define ADD_R15_TO_PTR_R9 add qword ptr [r9], r15
#define ADD_R15_TO_PTR_R10 add qword ptr [r10], r15
#define ADD_R15_TO_PTR_R11 add qword ptr [r11], r15
#define ADD_R15_TO_PTR_R12 add qword ptr [r12], r15
#define ADD_R15_TO_PTR_R13 add qword ptr [r13], r15
#define ADD_R15_TO_PTR_R14 add qword ptr [r14], r15
#define ADD_R15_TO_PTR_R15 add qword ptr [r15], r15
#define ADD_R15_TO_PTR_EAX add qword ptr [eax], r15
#define ADD_R15_TO_PTR_EBX add qword ptr [ebx], r15
#define ADD_R15_TO_PTR_ECX add qword ptr [ecx], r15
#define ADD_R15_TO_PTR_EDX add qword ptr [edx], r15
#define ADD_R15_TO_PTR_EDI add qword ptr [edi], r15
#define ADD_R15_TO_PTR_ESI add qword ptr [esi], r15
#define ADD_R15_TO_PTR_EBP add qword ptr [ebp], r15
#define ADD_R15_TO_PTR_ESP add qword ptr [esp], r15

#define ADD_RAX_FROM_PTR_RAX_(VALUE) add rax, qword ptr [rax + VALUE]
#define ADD_RAX_FROM_PTR_RBX_(VALUE) add rax, qword ptr [rbx + VALUE]
#define ADD_RAX_FROM_PTR_RCX_(VALUE) add rax, qword ptr [rcx + VALUE]
#define ADD_RAX_FROM_PTR_RDX_(VALUE) add rax, qword ptr [rdx + VALUE]
#define ADD_RAX_FROM_PTR_RDI_(VALUE) add rax, qword ptr [rdi + VALUE]
#define ADD_RAX_FROM_PTR_RSI_(VALUE) add rax, qword ptr [rsi + VALUE]
#define ADD_RAX_FROM_PTR_RBP_(VALUE) add rax, qword ptr [rbp + VALUE]
#define ADD_RAX_FROM_PTR_RSP_(VALUE) add rax, qword ptr [rsp + VALUE]
#define ADD_RAX_FROM_PTR_R8_(VALUE) add rax, qword ptr [r8 + VALUE]
#define ADD_RAX_FROM_PTR_R9_(VALUE) add rax, qword ptr [r9 + VALUE]
#define ADD_RAX_FROM_PTR_R10_(VALUE) add rax, qword ptr [r10 + VALUE]
#define ADD_RAX_FROM_PTR_R11_(VALUE) add rax, qword ptr [r11 + VALUE]
#define ADD_RAX_FROM_PTR_R12_(VALUE) add rax, qword ptr [r12 + VALUE]
#define ADD_RAX_FROM_PTR_R13_(VALUE) add rax, qword ptr [r13 + VALUE]
#define ADD_RAX_FROM_PTR_R14_(VALUE) add rax, qword ptr [r14 + VALUE]
#define ADD_RAX_FROM_PTR_R15_(VALUE) add rax, qword ptr [r15 + VALUE]
#define ADD_RAX_FROM_PTR_EAX_(VALUE) add rax, qword ptr [eax + VALUE]
#define ADD_RAX_FROM_PTR_EBX_(VALUE) add rax, qword ptr [ebx + VALUE]
#define ADD_RAX_FROM_PTR_ECX_(VALUE) add rax, qword ptr [ecx + VALUE]
#define ADD_RAX_FROM_PTR_EDX_(VALUE) add rax, qword ptr [edx + VALUE]
#define ADD_RAX_FROM_PTR_EDI_(VALUE) add rax, qword ptr [edi + VALUE]
#define ADD_RAX_FROM_PTR_ESI_(VALUE) add rax, qword ptr [esi + VALUE]
#define ADD_RAX_FROM_PTR_EBP_(VALUE) add rax, qword ptr [ebp + VALUE]
#define ADD_RAX_FROM_PTR_ESP_(VALUE) add rax, qword ptr [esp + VALUE]

#define ADD_RBX_FROM_PTR_RAX_(VALUE) add rbx, qword ptr [rax + VALUE]
#define ADD_RBX_FROM_PTR_RBX_(VALUE) add rbx, qword ptr [rbx + VALUE]
#define ADD_RBX_FROM_PTR_RCX_(VALUE) add rbx, qword ptr [rcx + VALUE]
#define ADD_RBX_FROM_PTR_RDX_(VALUE) add rbx, qword ptr [rdx + VALUE]
#define ADD_RBX_FROM_PTR_RDI_(VALUE) add rbx, qword ptr [rdi + VALUE]
#define ADD_RBX_FROM_PTR_RSI_(VALUE) add rbx, qword ptr [rsi + VALUE]
#define ADD_RBX_FROM_PTR_RBP_(VALUE) add rbx, qword ptr [rbp + VALUE]
#define ADD_RBX_FROM_PTR_RSP_(VALUE) add rbx, qword ptr [rsp + VALUE]
#define ADD_RBX_FROM_PTR_R8_(VALUE) add rbx, qword ptr [r8 + VALUE]
#define ADD_RBX_FROM_PTR_R9_(VALUE) add rbx, qword ptr [r9 + VALUE]
#define ADD_RBX_FROM_PTR_R10_(VALUE) add rbx, qword ptr [r10 + VALUE]
#define ADD_RBX_FROM_PTR_R11_(VALUE) add rbx, qword ptr [r11 + VALUE]
#define ADD_RBX_FROM_PTR_R12_(VALUE) add rbx, qword ptr [r12 + VALUE]
#define ADD_RBX_FROM_PTR_R13_(VALUE) add rbx, qword ptr [r13 + VALUE]
#define ADD_RBX_FROM_PTR_R14_(VALUE) add rbx, qword ptr [r14 + VALUE]
#define ADD_RBX_FROM_PTR_R15_(VALUE) add rbx, qword ptr [r15 + VALUE]
#define ADD_RBX_FROM_PTR_EAX_(VALUE) add rbx, qword ptr [eax + VALUE]
#define ADD_RBX_FROM_PTR_EBX_(VALUE) add rbx, qword ptr [ebx + VALUE]
#define ADD_RBX_FROM_PTR_ECX_(VALUE) add rbx, qword ptr [ecx + VALUE]
#define ADD_RBX_FROM_PTR_EDX_(VALUE) add rbx, qword ptr [edx + VALUE]
#define ADD_RBX_FROM_PTR_EDI_(VALUE) add rbx, qword ptr [edi + VALUE]
#define ADD_RBX_FROM_PTR_ESI_(VALUE) add rbx, qword ptr [esi + VALUE]
#define ADD_RBX_FROM_PTR_EBP_(VALUE) add rbx, qword ptr [ebp + VALUE]
#define ADD_RBX_FROM_PTR_ESP_(VALUE) add rbx, qword ptr [esp + VALUE]

#define ADD_RCX_FROM_PTR_RAX_(VALUE) add rcx, qword ptr [rax + VALUE]
#define ADD_RCX_FROM_PTR_RBX_(VALUE) add rcx, qword ptr [rbx + VALUE]
#define ADD_RCX_FROM_PTR_RCX_(VALUE) add rcx, qword ptr [rcx + VALUE]
#define ADD_RCX_FROM_PTR_RDX_(VALUE) add rcx, qword ptr [rdx + VALUE]
#define ADD_RCX_FROM_PTR_RDI_(VALUE) add rcx, qword ptr [rdi + VALUE]
#define ADD_RCX_FROM_PTR_RSI_(VALUE) add rcx, qword ptr [rsi + VALUE]
#define ADD_RCX_FROM_PTR_RBP_(VALUE) add rcx, qword ptr [rbp + VALUE]
#define ADD_RCX_FROM_PTR_RSP_(VALUE) add rcx, qword ptr [rsp + VALUE]
#define ADD_RCX_FROM_PTR_R8_(VALUE) add rcx, qword ptr [r8 + VALUE]
#define ADD_RCX_FROM_PTR_R9_(VALUE) add rcx, qword ptr [r9 + VALUE]
#define ADD_RCX_FROM_PTR_R10_(VALUE) add rcx, qword ptr [r10 + VALUE]
#define ADD_RCX_FROM_PTR_R11_(VALUE) add rcx, qword ptr [r11 + VALUE]
#define ADD_RCX_FROM_PTR_R12_(VALUE) add rcx, qword ptr [r12 + VALUE]
#define ADD_RCX_FROM_PTR_R13_(VALUE) add rcx, qword ptr [r13 + VALUE]
#define ADD_RCX_FROM_PTR_R14_(VALUE) add rcx, qword ptr [r14 + VALUE]
#define ADD_RCX_FROM_PTR_R15_(VALUE) add rcx, qword ptr [r15 + VALUE]
#define ADD_RCX_FROM_PTR_EAX_(VALUE) add rcx, qword ptr [eax + VALUE]
#define ADD_RCX_FROM_PTR_EBX_(VALUE) add rcx, qword ptr [ebx + VALUE]
#define ADD_RCX_FROM_PTR_ECX_(VALUE) add rcx, qword ptr [ecx + VALUE]
#define ADD_RCX_FROM_PTR_EDX_(VALUE) add rcx, qword ptr [edx + VALUE]
#define ADD_RCX_FROM_PTR_EDI_(VALUE) add rcx, qword ptr [edi + VALUE]
#define ADD_RCX_FROM_PTR_ESI_(VALUE) add rcx, qword ptr [esi + VALUE]
#define ADD_RCX_FROM_PTR_EBP_(VALUE) add rcx, qword ptr [ebp + VALUE]
#define ADD_RCX_FROM_PTR_ESP_(VALUE) add rcx, qword ptr [esp + VALUE]

#define ADD_RDX_FROM_PTR_RAX_(VALUE) add rdx, qword ptr [rax + VALUE]
#define ADD_RDX_FROM_PTR_RBX_(VALUE) add rdx, qword ptr [rbx + VALUE]
#define ADD_RDX_FROM_PTR_RCX_(VALUE) add rdx, qword ptr [rcx + VALUE]
#define ADD_RDX_FROM_PTR_RDX_(VALUE) add rdx, qword ptr [rdx + VALUE]
#define ADD_RDX_FROM_PTR_RDI_(VALUE) add rdx, qword ptr [rdi + VALUE]
#define ADD_RDX_FROM_PTR_RSI_(VALUE) add rdx, qword ptr [rsi + VALUE]
#define ADD_RDX_FROM_PTR_RBP_(VALUE) add rdx, qword ptr [rbp + VALUE]
#define ADD_RDX_FROM_PTR_RSP_(VALUE) add rdx, qword ptr [rsp + VALUE]
#define ADD_RDX_FROM_PTR_R8_(VALUE) add rdx, qword ptr [r8 + VALUE]
#define ADD_RDX_FROM_PTR_R9_(VALUE) add rdx, qword ptr [r9 + VALUE]
#define ADD_RDX_FROM_PTR_R10_(VALUE) add rdx, qword ptr [r10 + VALUE]
#define ADD_RDX_FROM_PTR_R11_(VALUE) add rdx, qword ptr [r11 + VALUE]
#define ADD_RDX_FROM_PTR_R12_(VALUE) add rdx, qword ptr [r12 + VALUE]
#define ADD_RDX_FROM_PTR_R13_(VALUE) add rdx, qword ptr [r13 + VALUE]
#define ADD_RDX_FROM_PTR_R14_(VALUE) add rdx, qword ptr [r14 + VALUE]
#define ADD_RDX_FROM_PTR_R15_(VALUE) add rdx, qword ptr [r15 + VALUE]
#define ADD_RDX_FROM_PTR_EAX_(VALUE) add rdx, qword ptr [eax + VALUE]
#define ADD_RDX_FROM_PTR_EBX_(VALUE) add rdx, qword ptr [ebx + VALUE]
#define ADD_RDX_FROM_PTR_ECX_(VALUE) add rdx, qword ptr [ecx + VALUE]
#define ADD_RDX_FROM_PTR_EDX_(VALUE) add rdx, qword ptr [edx + VALUE]
#define ADD_RDX_FROM_PTR_EDI_(VALUE) add rdx, qword ptr [edi + VALUE]
#define ADD_RDX_FROM_PTR_ESI_(VALUE) add rdx, qword ptr [esi + VALUE]
#define ADD_RDX_FROM_PTR_EBP_(VALUE) add rdx, qword ptr [ebp + VALUE]
#define ADD_RDX_FROM_PTR_ESP_(VALUE) add rdx, qword ptr [esp + VALUE]

#define ADD_RDI_FROM_PTR_RAX_(VALUE) add rdi, qword ptr [rax + VALUE]
#define ADD_RDI_FROM_PTR_RBX_(VALUE) add rdi, qword ptr [rbx + VALUE]
#define ADD_RDI_FROM_PTR_RCX_(VALUE) add rdi, qword ptr [rcx + VALUE]
#define ADD_RDI_FROM_PTR_RDX_(VALUE) add rdi, qword ptr [rdx + VALUE]
#define ADD_RDI_FROM_PTR_RDI_(VALUE) add rdi, qword ptr [rdi + VALUE]
#define ADD_RDI_FROM_PTR_RSI_(VALUE) add rdi, qword ptr [rsi + VALUE]
#define ADD_RDI_FROM_PTR_RBP_(VALUE) add rdi, qword ptr [rbp + VALUE]
#define ADD_RDI_FROM_PTR_RSP_(VALUE) add rdi, qword ptr [rsp + VALUE]
#define ADD_RDI_FROM_PTR_R8_(VALUE) add rdi, qword ptr [r8 + VALUE]
#define ADD_RDI_FROM_PTR_R9_(VALUE) add rdi, qword ptr [r9 + VALUE]
#define ADD_RDI_FROM_PTR_R10_(VALUE) add rdi, qword ptr [r10 + VALUE]
#define ADD_RDI_FROM_PTR_R11_(VALUE) add rdi, qword ptr [r11 + VALUE]
#define ADD_RDI_FROM_PTR_R12_(VALUE) add rdi, qword ptr [r12 + VALUE]
#define ADD_RDI_FROM_PTR_R13_(VALUE) add rdi, qword ptr [r13 + VALUE]
#define ADD_RDI_FROM_PTR_R14_(VALUE) add rdi, qword ptr [r14 + VALUE]
#define ADD_RDI_FROM_PTR_R15_(VALUE) add rdi, qword ptr [r15 + VALUE]
#define ADD_RDI_FROM_PTR_EAX_(VALUE) add rdi, qword ptr [eax + VALUE]
#define ADD_RDI_FROM_PTR_EBX_(VALUE) add rdi, qword ptr [ebx + VALUE]
#define ADD_RDI_FROM_PTR_ECX_(VALUE) add rdi, qword ptr [ecx + VALUE]
#define ADD_RDI_FROM_PTR_EDX_(VALUE) add rdi, qword ptr [edx + VALUE]
#define ADD_RDI_FROM_PTR_EDI_(VALUE) add rdi, qword ptr [edi + VALUE]
#define ADD_RDI_FROM_PTR_ESI_(VALUE) add rdi, qword ptr [esi + VALUE]
#define ADD_RDI_FROM_PTR_EBP_(VALUE) add rdi, qword ptr [ebp + VALUE]
#define ADD_RDI_FROM_PTR_ESP_(VALUE) add rdi, qword ptr [esp + VALUE]

#define ADD_RSI_FROM_PTR_RAX_(VALUE) add rsi, qword ptr [rax + VALUE]
#define ADD_RSI_FROM_PTR_RBX_(VALUE) add rsi, qword ptr [rbx + VALUE]
#define ADD_RSI_FROM_PTR_RCX_(VALUE) add rsi, qword ptr [rcx + VALUE]
#define ADD_RSI_FROM_PTR_RDX_(VALUE) add rsi, qword ptr [rdx + VALUE]
#define ADD_RSI_FROM_PTR_RDI_(VALUE) add rsi, qword ptr [rdi + VALUE]
#define ADD_RSI_FROM_PTR_RSI_(VALUE) add rsi, qword ptr [rsi + VALUE]
#define ADD_RSI_FROM_PTR_RBP_(VALUE) add rsi, qword ptr [rbp + VALUE]
#define ADD_RSI_FROM_PTR_RSP_(VALUE) add rsi, qword ptr [rsp + VALUE]
#define ADD_RSI_FROM_PTR_R8_(VALUE) add rsi, qword ptr [r8 + VALUE]
#define ADD_RSI_FROM_PTR_R9_(VALUE) add rsi, qword ptr [r9 + VALUE]
#define ADD_RSI_FROM_PTR_R10_(VALUE) add rsi, qword ptr [r10 + VALUE]
#define ADD_RSI_FROM_PTR_R11_(VALUE) add rsi, qword ptr [r11 + VALUE]
#define ADD_RSI_FROM_PTR_R12_(VALUE) add rsi, qword ptr [r12 + VALUE]
#define ADD_RSI_FROM_PTR_R13_(VALUE) add rsi, qword ptr [r13 + VALUE]
#define ADD_RSI_FROM_PTR_R14_(VALUE) add rsi, qword ptr [r14 + VALUE]
#define ADD_RSI_FROM_PTR_R15_(VALUE) add rsi, qword ptr [r15 + VALUE]
#define ADD_RSI_FROM_PTR_EAX_(VALUE) add rsi, qword ptr [eax + VALUE]
#define ADD_RSI_FROM_PTR_EBX_(VALUE) add rsi, qword ptr [ebx + VALUE]
#define ADD_RSI_FROM_PTR_ECX_(VALUE) add rsi, qword ptr [ecx + VALUE]
#define ADD_RSI_FROM_PTR_EDX_(VALUE) add rsi, qword ptr [edx + VALUE]
#define ADD_RSI_FROM_PTR_EDI_(VALUE) add rsi, qword ptr [edi + VALUE]
#define ADD_RSI_FROM_PTR_ESI_(VALUE) add rsi, qword ptr [esi + VALUE]
#define ADD_RSI_FROM_PTR_EBP_(VALUE) add rsi, qword ptr [ebp + VALUE]
#define ADD_RSI_FROM_PTR_ESP_(VALUE) add rsi, qword ptr [esp + VALUE]

#define ADD_RBP_FROM_PTR_RAX_(VALUE) add rbp, qword ptr [rax + VALUE]
#define ADD_RBP_FROM_PTR_RBX_(VALUE) add rbp, qword ptr [rbx + VALUE]
#define ADD_RBP_FROM_PTR_RCX_(VALUE) add rbp, qword ptr [rcx + VALUE]
#define ADD_RBP_FROM_PTR_RDX_(VALUE) add rbp, qword ptr [rdx + VALUE]
#define ADD_RBP_FROM_PTR_RDI_(VALUE) add rbp, qword ptr [rdi + VALUE]
#define ADD_RBP_FROM_PTR_RSI_(VALUE) add rbp, qword ptr [rsi + VALUE]
#define ADD_RBP_FROM_PTR_RBP_(VALUE) add rbp, qword ptr [rbp + VALUE]
#define ADD_RBP_FROM_PTR_RSP_(VALUE) add rbp, qword ptr [rsp + VALUE]
#define ADD_RBP_FROM_PTR_R8_(VALUE) add rbp, qword ptr [r8 + VALUE]
#define ADD_RBP_FROM_PTR_R9_(VALUE) add rbp, qword ptr [r9 + VALUE]
#define ADD_RBP_FROM_PTR_R10_(VALUE) add rbp, qword ptr [r10 + VALUE]
#define ADD_RBP_FROM_PTR_R11_(VALUE) add rbp, qword ptr [r11 + VALUE]
#define ADD_RBP_FROM_PTR_R12_(VALUE) add rbp, qword ptr [r12 + VALUE]
#define ADD_RBP_FROM_PTR_R13_(VALUE) add rbp, qword ptr [r13 + VALUE]
#define ADD_RBP_FROM_PTR_R14_(VALUE) add rbp, qword ptr [r14 + VALUE]
#define ADD_RBP_FROM_PTR_R15_(VALUE) add rbp, qword ptr [r15 + VALUE]
#define ADD_RBP_FROM_PTR_EAX_(VALUE) add rbp, qword ptr [eax + VALUE]
#define ADD_RBP_FROM_PTR_EBX_(VALUE) add rbp, qword ptr [ebx + VALUE]
#define ADD_RBP_FROM_PTR_ECX_(VALUE) add rbp, qword ptr [ecx + VALUE]
#define ADD_RBP_FROM_PTR_EDX_(VALUE) add rbp, qword ptr [edx + VALUE]
#define ADD_RBP_FROM_PTR_EDI_(VALUE) add rbp, qword ptr [edi + VALUE]
#define ADD_RBP_FROM_PTR_ESI_(VALUE) add rbp, qword ptr [esi + VALUE]
#define ADD_RBP_FROM_PTR_EBP_(VALUE) add rbp, qword ptr [ebp + VALUE]
#define ADD_RBP_FROM_PTR_ESP_(VALUE) add rbp, qword ptr [esp + VALUE]

#define ADD_RSP_FROM_PTR_RAX_(VALUE) add rsp, qword ptr [rax + VALUE]
#define ADD_RSP_FROM_PTR_RBX_(VALUE) add rsp, qword ptr [rbx + VALUE]
#define ADD_RSP_FROM_PTR_RCX_(VALUE) add rsp, qword ptr [rcx + VALUE]
#define ADD_RSP_FROM_PTR_RDX_(VALUE) add rsp, qword ptr [rdx + VALUE]
#define ADD_RSP_FROM_PTR_RDI_(VALUE) add rsp, qword ptr [rdi + VALUE]
#define ADD_RSP_FROM_PTR_RSI_(VALUE) add rsp, qword ptr [rsi + VALUE]
#define ADD_RSP_FROM_PTR_RBP_(VALUE) add rsp, qword ptr [rbp + VALUE]
#define ADD_RSP_FROM_PTR_RSP_(VALUE) add rsp, qword ptr [rsp + VALUE]
#define ADD_RSP_FROM_PTR_R8_(VALUE) add rsp, qword ptr [r8 + VALUE]
#define ADD_RSP_FROM_PTR_R9_(VALUE) add rsp, qword ptr [r9 + VALUE]
#define ADD_RSP_FROM_PTR_R10_(VALUE) add rsp, qword ptr [r10 + VALUE]
#define ADD_RSP_FROM_PTR_R11_(VALUE) add rsp, qword ptr [r11 + VALUE]
#define ADD_RSP_FROM_PTR_R12_(VALUE) add rsp, qword ptr [r12 + VALUE]
#define ADD_RSP_FROM_PTR_R13_(VALUE) add rsp, qword ptr [r13 + VALUE]
#define ADD_RSP_FROM_PTR_R14_(VALUE) add rsp, qword ptr [r14 + VALUE]
#define ADD_RSP_FROM_PTR_R15_(VALUE) add rsp, qword ptr [r15 + VALUE]
#define ADD_RSP_FROM_PTR_EAX_(VALUE) add rsp, qword ptr [eax + VALUE]
#define ADD_RSP_FROM_PTR_EBX_(VALUE) add rsp, qword ptr [ebx + VALUE]
#define ADD_RSP_FROM_PTR_ECX_(VALUE) add rsp, qword ptr [ecx + VALUE]
#define ADD_RSP_FROM_PTR_EDX_(VALUE) add rsp, qword ptr [edx + VALUE]
#define ADD_RSP_FROM_PTR_EDI_(VALUE) add rsp, qword ptr [edi + VALUE]
#define ADD_RSP_FROM_PTR_ESI_(VALUE) add rsp, qword ptr [esi + VALUE]
#define ADD_RSP_FROM_PTR_EBP_(VALUE) add rsp, qword ptr [ebp + VALUE]
#define ADD_RSP_FROM_PTR_ESP_(VALUE) add rsp, qword ptr [esp + VALUE]

#define ADD_R8_FROM_PTR_RAX_(VALUE) add r8, qword ptr [rax + VALUE]
#define ADD_R8_FROM_PTR_RBX_(VALUE) add r8, qword ptr [rbx + VALUE]
#define ADD_R8_FROM_PTR_RCX_(VALUE) add r8, qword ptr [rcx + VALUE]
#define ADD_R8_FROM_PTR_RDX_(VALUE) add r8, qword ptr [rdx + VALUE]
#define ADD_R8_FROM_PTR_RDI_(VALUE) add r8, qword ptr [rdi + VALUE]
#define ADD_R8_FROM_PTR_RSI_(VALUE) add r8, qword ptr [rsi + VALUE]
#define ADD_R8_FROM_PTR_RBP_(VALUE) add r8, qword ptr [rbp + VALUE]
#define ADD_R8_FROM_PTR_RSP_(VALUE) add r8, qword ptr [rsp + VALUE]
#define ADD_R8_FROM_PTR_R8_(VALUE) add r8, qword ptr [r8 + VALUE]
#define ADD_R8_FROM_PTR_R9_(VALUE) add r8, qword ptr [r9 + VALUE]
#define ADD_R8_FROM_PTR_R10_(VALUE) add r8, qword ptr [r10 + VALUE]
#define ADD_R8_FROM_PTR_R11_(VALUE) add r8, qword ptr [r11 + VALUE]
#define ADD_R8_FROM_PTR_R12_(VALUE) add r8, qword ptr [r12 + VALUE]
#define ADD_R8_FROM_PTR_R13_(VALUE) add r8, qword ptr [r13 + VALUE]
#define ADD_R8_FROM_PTR_R14_(VALUE) add r8, qword ptr [r14 + VALUE]
#define ADD_R8_FROM_PTR_R15_(VALUE) add r8, qword ptr [r15 + VALUE]
#define ADD_R8_FROM_PTR_EAX_(VALUE) add r8, qword ptr [eax + VALUE]
#define ADD_R8_FROM_PTR_EBX_(VALUE) add r8, qword ptr [ebx + VALUE]
#define ADD_R8_FROM_PTR_ECX_(VALUE) add r8, qword ptr [ecx + VALUE]
#define ADD_R8_FROM_PTR_EDX_(VALUE) add r8, qword ptr [edx + VALUE]
#define ADD_R8_FROM_PTR_EDI_(VALUE) add r8, qword ptr [edi + VALUE]
#define ADD_R8_FROM_PTR_ESI_(VALUE) add r8, qword ptr [esi + VALUE]
#define ADD_R8_FROM_PTR_EBP_(VALUE) add r8, qword ptr [ebp + VALUE]
#define ADD_R8_FROM_PTR_ESP_(VALUE) add r8, qword ptr [esp + VALUE]

#define ADD_R9_FROM_PTR_RAX_(VALUE) add r9, qword ptr [rax + VALUE]
#define ADD_R9_FROM_PTR_RBX_(VALUE) add r9, qword ptr [rbx + VALUE]
#define ADD_R9_FROM_PTR_RCX_(VALUE) add r9, qword ptr [rcx + VALUE]
#define ADD_R9_FROM_PTR_RDX_(VALUE) add r9, qword ptr [rdx + VALUE]
#define ADD_R9_FROM_PTR_RDI_(VALUE) add r9, qword ptr [rdi + VALUE]
#define ADD_R9_FROM_PTR_RSI_(VALUE) add r9, qword ptr [rsi + VALUE]
#define ADD_R9_FROM_PTR_RBP_(VALUE) add r9, qword ptr [rbp + VALUE]
#define ADD_R9_FROM_PTR_RSP_(VALUE) add r9, qword ptr [rsp + VALUE]
#define ADD_R9_FROM_PTR_R8_(VALUE) add r9, qword ptr [r8 + VALUE]
#define ADD_R9_FROM_PTR_R9_(VALUE) add r9, qword ptr [r9 + VALUE]
#define ADD_R9_FROM_PTR_R10_(VALUE) add r9, qword ptr [r10 + VALUE]
#define ADD_R9_FROM_PTR_R11_(VALUE) add r9, qword ptr [r11 + VALUE]
#define ADD_R9_FROM_PTR_R12_(VALUE) add r9, qword ptr [r12 + VALUE]
#define ADD_R9_FROM_PTR_R13_(VALUE) add r9, qword ptr [r13 + VALUE]
#define ADD_R9_FROM_PTR_R14_(VALUE) add r9, qword ptr [r14 + VALUE]
#define ADD_R9_FROM_PTR_R15_(VALUE) add r9, qword ptr [r15 + VALUE]
#define ADD_R9_FROM_PTR_EAX_(VALUE) add r9, qword ptr [eax + VALUE]
#define ADD_R9_FROM_PTR_EBX_(VALUE) add r9, qword ptr [ebx + VALUE]
#define ADD_R9_FROM_PTR_ECX_(VALUE) add r9, qword ptr [ecx + VALUE]
#define ADD_R9_FROM_PTR_EDX_(VALUE) add r9, qword ptr [edx + VALUE]
#define ADD_R9_FROM_PTR_EDI_(VALUE) add r9, qword ptr [edi + VALUE]
#define ADD_R9_FROM_PTR_ESI_(VALUE) add r9, qword ptr [esi + VALUE]
#define ADD_R9_FROM_PTR_EBP_(VALUE) add r9, qword ptr [ebp + VALUE]
#define ADD_R9_FROM_PTR_ESP_(VALUE) add r9, qword ptr [esp + VALUE]

#define ADD_R10_FROM_PTR_RAX_(VALUE) add r10, qword ptr [rax + VALUE]
#define ADD_R10_FROM_PTR_RBX_(VALUE) add r10, qword ptr [rbx + VALUE]
#define ADD_R10_FROM_PTR_RCX_(VALUE) add r10, qword ptr [rcx + VALUE]
#define ADD_R10_FROM_PTR_RDX_(VALUE) add r10, qword ptr [rdx + VALUE]
#define ADD_R10_FROM_PTR_RDI_(VALUE) add r10, qword ptr [rdi + VALUE]
#define ADD_R10_FROM_PTR_RSI_(VALUE) add r10, qword ptr [rsi + VALUE]
#define ADD_R10_FROM_PTR_RBP_(VALUE) add r10, qword ptr [rbp + VALUE]
#define ADD_R10_FROM_PTR_RSP_(VALUE) add r10, qword ptr [rsp + VALUE]
#define ADD_R10_FROM_PTR_R8_(VALUE) add r10, qword ptr [r8 + VALUE]
#define ADD_R10_FROM_PTR_R9_(VALUE) add r10, qword ptr [r9 + VALUE]
#define ADD_R10_FROM_PTR_R10_(VALUE) add r10, qword ptr [r10 + VALUE]
#define ADD_R10_FROM_PTR_R11_(VALUE) add r10, qword ptr [r11 + VALUE]
#define ADD_R10_FROM_PTR_R12_(VALUE) add r10, qword ptr [r12 + VALUE]
#define ADD_R10_FROM_PTR_R13_(VALUE) add r10, qword ptr [r13 + VALUE]
#define ADD_R10_FROM_PTR_R14_(VALUE) add r10, qword ptr [r14 + VALUE]
#define ADD_R10_FROM_PTR_R15_(VALUE) add r10, qword ptr [r15 + VALUE]
#define ADD_R10_FROM_PTR_EAX_(VALUE) add r10, qword ptr [eax + VALUE]
#define ADD_R10_FROM_PTR_EBX_(VALUE) add r10, qword ptr [ebx + VALUE]
#define ADD_R10_FROM_PTR_ECX_(VALUE) add r10, qword ptr [ecx + VALUE]
#define ADD_R10_FROM_PTR_EDX_(VALUE) add r10, qword ptr [edx + VALUE]
#define ADD_R10_FROM_PTR_EDI_(VALUE) add r10, qword ptr [edi + VALUE]
#define ADD_R10_FROM_PTR_ESI_(VALUE) add r10, qword ptr [esi + VALUE]
#define ADD_R10_FROM_PTR_EBP_(VALUE) add r10, qword ptr [ebp + VALUE]
#define ADD_R10_FROM_PTR_ESP_(VALUE) add r10, qword ptr [esp + VALUE]

#define ADD_R11_FROM_PTR_RAX_(VALUE) add r11, qword ptr [rax + VALUE]
#define ADD_R11_FROM_PTR_RBX_(VALUE) add r11, qword ptr [rbx + VALUE]
#define ADD_R11_FROM_PTR_RCX_(VALUE) add r11, qword ptr [rcx + VALUE]
#define ADD_R11_FROM_PTR_RDX_(VALUE) add r11, qword ptr [rdx + VALUE]
#define ADD_R11_FROM_PTR_RDI_(VALUE) add r11, qword ptr [rdi + VALUE]
#define ADD_R11_FROM_PTR_RSI_(VALUE) add r11, qword ptr [rsi + VALUE]
#define ADD_R11_FROM_PTR_RBP_(VALUE) add r11, qword ptr [rbp + VALUE]
#define ADD_R11_FROM_PTR_RSP_(VALUE) add r11, qword ptr [rsp + VALUE]
#define ADD_R11_FROM_PTR_R8_(VALUE) add r11, qword ptr [r8 + VALUE]
#define ADD_R11_FROM_PTR_R9_(VALUE) add r11, qword ptr [r9 + VALUE]
#define ADD_R11_FROM_PTR_R10_(VALUE) add r11, qword ptr [r10 + VALUE]
#define ADD_R11_FROM_PTR_R11_(VALUE) add r11, qword ptr [r11 + VALUE]
#define ADD_R11_FROM_PTR_R12_(VALUE) add r11, qword ptr [r12 + VALUE]
#define ADD_R11_FROM_PTR_R13_(VALUE) add r11, qword ptr [r13 + VALUE]
#define ADD_R11_FROM_PTR_R14_(VALUE) add r11, qword ptr [r14 + VALUE]
#define ADD_R11_FROM_PTR_R15_(VALUE) add r11, qword ptr [r15 + VALUE]
#define ADD_R11_FROM_PTR_EAX_(VALUE) add r11, qword ptr [eax + VALUE]
#define ADD_R11_FROM_PTR_EBX_(VALUE) add r11, qword ptr [ebx + VALUE]
#define ADD_R11_FROM_PTR_ECX_(VALUE) add r11, qword ptr [ecx + VALUE]
#define ADD_R11_FROM_PTR_EDX_(VALUE) add r11, qword ptr [edx + VALUE]
#define ADD_R11_FROM_PTR_EDI_(VALUE) add r11, qword ptr [edi + VALUE]
#define ADD_R11_FROM_PTR_ESI_(VALUE) add r11, qword ptr [esi + VALUE]
#define ADD_R11_FROM_PTR_EBP_(VALUE) add r11, qword ptr [ebp + VALUE]
#define ADD_R11_FROM_PTR_ESP_(VALUE) add r11, qword ptr [esp + VALUE]

#define ADD_R12_FROM_PTR_RAX_(VALUE) add r12, qword ptr [rax + VALUE]
#define ADD_R12_FROM_PTR_RBX_(VALUE) add r12, qword ptr [rbx + VALUE]
#define ADD_R12_FROM_PTR_RCX_(VALUE) add r12, qword ptr [rcx + VALUE]
#define ADD_R12_FROM_PTR_RDX_(VALUE) add r12, qword ptr [rdx + VALUE]
#define ADD_R12_FROM_PTR_RDI_(VALUE) add r12, qword ptr [rdi + VALUE]
#define ADD_R12_FROM_PTR_RSI_(VALUE) add r12, qword ptr [rsi + VALUE]
#define ADD_R12_FROM_PTR_RBP_(VALUE) add r12, qword ptr [rbp + VALUE]
#define ADD_R12_FROM_PTR_RSP_(VALUE) add r12, qword ptr [rsp + VALUE]
#define ADD_R12_FROM_PTR_R8_(VALUE) add r12, qword ptr [r8 + VALUE]
#define ADD_R12_FROM_PTR_R9_(VALUE) add r12, qword ptr [r9 + VALUE]
#define ADD_R12_FROM_PTR_R10_(VALUE) add r12, qword ptr [r10 + VALUE]
#define ADD_R12_FROM_PTR_R11_(VALUE) add r12, qword ptr [r11 + VALUE]
#define ADD_R12_FROM_PTR_R12_(VALUE) add r12, qword ptr [r12 + VALUE]
#define ADD_R12_FROM_PTR_R13_(VALUE) add r12, qword ptr [r13 + VALUE]
#define ADD_R12_FROM_PTR_R14_(VALUE) add r12, qword ptr [r14 + VALUE]
#define ADD_R12_FROM_PTR_R15_(VALUE) add r12, qword ptr [r15 + VALUE]
#define ADD_R12_FROM_PTR_EAX_(VALUE) add r12, qword ptr [eax + VALUE]
#define ADD_R12_FROM_PTR_EBX_(VALUE) add r12, qword ptr [ebx + VALUE]
#define ADD_R12_FROM_PTR_ECX_(VALUE) add r12, qword ptr [ecx + VALUE]
#define ADD_R12_FROM_PTR_EDX_(VALUE) add r12, qword ptr [edx + VALUE]
#define ADD_R12_FROM_PTR_EDI_(VALUE) add r12, qword ptr [edi + VALUE]
#define ADD_R12_FROM_PTR_ESI_(VALUE) add r12, qword ptr [esi + VALUE]
#define ADD_R12_FROM_PTR_EBP_(VALUE) add r12, qword ptr [ebp + VALUE]
#define ADD_R12_FROM_PTR_ESP_(VALUE) add r12, qword ptr [esp + VALUE]

#define ADD_R13_FROM_PTR_RAX_(VALUE) add r13, qword ptr [rax + VALUE]
#define ADD_R13_FROM_PTR_RBX_(VALUE) add r13, qword ptr [rbx + VALUE]
#define ADD_R13_FROM_PTR_RCX_(VALUE) add r13, qword ptr [rcx + VALUE]
#define ADD_R13_FROM_PTR_RDX_(VALUE) add r13, qword ptr [rdx + VALUE]
#define ADD_R13_FROM_PTR_RDI_(VALUE) add r13, qword ptr [rdi + VALUE]
#define ADD_R13_FROM_PTR_RSI_(VALUE) add r13, qword ptr [rsi + VALUE]
#define ADD_R13_FROM_PTR_RBP_(VALUE) add r13, qword ptr [rbp + VALUE]
#define ADD_R13_FROM_PTR_RSP_(VALUE) add r13, qword ptr [rsp + VALUE]
#define ADD_R13_FROM_PTR_R8_(VALUE) add r13, qword ptr [r8 + VALUE]
#define ADD_R13_FROM_PTR_R9_(VALUE) add r13, qword ptr [r9 + VALUE]
#define ADD_R13_FROM_PTR_R10_(VALUE) add r13, qword ptr [r10 + VALUE]
#define ADD_R13_FROM_PTR_R11_(VALUE) add r13, qword ptr [r11 + VALUE]
#define ADD_R13_FROM_PTR_R12_(VALUE) add r13, qword ptr [r12 + VALUE]
#define ADD_R13_FROM_PTR_R13_(VALUE) add r13, qword ptr [r13 + VALUE]
#define ADD_R13_FROM_PTR_R14_(VALUE) add r13, qword ptr [r14 + VALUE]
#define ADD_R13_FROM_PTR_R15_(VALUE) add r13, qword ptr [r15 + VALUE]
#define ADD_R13_FROM_PTR_EAX_(VALUE) add r13, qword ptr [eax + VALUE]
#define ADD_R13_FROM_PTR_EBX_(VALUE) add r13, qword ptr [ebx + VALUE]
#define ADD_R13_FROM_PTR_ECX_(VALUE) add r13, qword ptr [ecx + VALUE]
#define ADD_R13_FROM_PTR_EDX_(VALUE) add r13, qword ptr [edx + VALUE]
#define ADD_R13_FROM_PTR_EDI_(VALUE) add r13, qword ptr [edi + VALUE]
#define ADD_R13_FROM_PTR_ESI_(VALUE) add r13, qword ptr [esi + VALUE]
#define ADD_R13_FROM_PTR_EBP_(VALUE) add r13, qword ptr [ebp + VALUE]
#define ADD_R13_FROM_PTR_ESP_(VALUE) add r13, qword ptr [esp + VALUE]

#define ADD_R14_FROM_PTR_RAX_(VALUE) add r14, qword ptr [rax + VALUE]
#define ADD_R14_FROM_PTR_RBX_(VALUE) add r14, qword ptr [rbx + VALUE]
#define ADD_R14_FROM_PTR_RCX_(VALUE) add r14, qword ptr [rcx + VALUE]
#define ADD_R14_FROM_PTR_RDX_(VALUE) add r14, qword ptr [rdx + VALUE]
#define ADD_R14_FROM_PTR_RDI_(VALUE) add r14, qword ptr [rdi + VALUE]
#define ADD_R14_FROM_PTR_RSI_(VALUE) add r14, qword ptr [rsi + VALUE]
#define ADD_R14_FROM_PTR_RBP_(VALUE) add r14, qword ptr [rbp + VALUE]
#define ADD_R14_FROM_PTR_RSP_(VALUE) add r14, qword ptr [rsp + VALUE]
#define ADD_R14_FROM_PTR_R8_(VALUE) add r14, qword ptr [r8 + VALUE]
#define ADD_R14_FROM_PTR_R9_(VALUE) add r14, qword ptr [r9 + VALUE]
#define ADD_R14_FROM_PTR_R10_(VALUE) add r14, qword ptr [r10 + VALUE]
#define ADD_R14_FROM_PTR_R11_(VALUE) add r14, qword ptr [r11 + VALUE]
#define ADD_R14_FROM_PTR_R12_(VALUE) add r14, qword ptr [r12 + VALUE]
#define ADD_R14_FROM_PTR_R13_(VALUE) add r14, qword ptr [r13 + VALUE]
#define ADD_R14_FROM_PTR_R14_(VALUE) add r14, qword ptr [r14 + VALUE]
#define ADD_R14_FROM_PTR_R15_(VALUE) add r14, qword ptr [r15 + VALUE]
#define ADD_R14_FROM_PTR_EAX_(VALUE) add r14, qword ptr [eax + VALUE]
#define ADD_R14_FROM_PTR_EBX_(VALUE) add r14, qword ptr [ebx + VALUE]
#define ADD_R14_FROM_PTR_ECX_(VALUE) add r14, qword ptr [ecx + VALUE]
#define ADD_R14_FROM_PTR_EDX_(VALUE) add r14, qword ptr [edx + VALUE]
#define ADD_R14_FROM_PTR_EDI_(VALUE) add r14, qword ptr [edi + VALUE]
#define ADD_R14_FROM_PTR_ESI_(VALUE) add r14, qword ptr [esi + VALUE]
#define ADD_R14_FROM_PTR_EBP_(VALUE) add r14, qword ptr [ebp + VALUE]
#define ADD_R14_FROM_PTR_ESP_(VALUE) add r14, qword ptr [esp + VALUE]

#define ADD_R15_FROM_PTR_RAX_(VALUE) add r15, qword ptr [rax + VALUE]
#define ADD_R15_FROM_PTR_RBX_(VALUE) add r15, qword ptr [rbx + VALUE]
#define ADD_R15_FROM_PTR_RCX_(VALUE) add r15, qword ptr [rcx + VALUE]
#define ADD_R15_FROM_PTR_RDX_(VALUE) add r15, qword ptr [rdx + VALUE]
#define ADD_R15_FROM_PTR_RDI_(VALUE) add r15, qword ptr [rdi + VALUE]
#define ADD_R15_FROM_PTR_RSI_(VALUE) add r15, qword ptr [rsi + VALUE]
#define ADD_R15_FROM_PTR_RBP_(VALUE) add r15, qword ptr [rbp + VALUE]
#define ADD_R15_FROM_PTR_RSP_(VALUE) add r15, qword ptr [rsp + VALUE]
#define ADD_R15_FROM_PTR_R8_(VALUE) add r15, qword ptr [r8 + VALUE]
#define ADD_R15_FROM_PTR_R9_(VALUE) add r15, qword ptr [r9 + VALUE]
#define ADD_R15_FROM_PTR_R10_(VALUE) add r15, qword ptr [r10 + VALUE]
#define ADD_R15_FROM_PTR_R11_(VALUE) add r15, qword ptr [r11 + VALUE]
#define ADD_R15_FROM_PTR_R12_(VALUE) add r15, qword ptr [r12 + VALUE]
#define ADD_R15_FROM_PTR_R13_(VALUE) add r15, qword ptr [r13 + VALUE]
#define ADD_R15_FROM_PTR_R14_(VALUE) add r15, qword ptr [r14 + VALUE]
#define ADD_R15_FROM_PTR_R15_(VALUE) add r15, qword ptr [r15 + VALUE]
#define ADD_R15_FROM_PTR_EAX_(VALUE) add r15, qword ptr [eax + VALUE]
#define ADD_R15_FROM_PTR_EBX_(VALUE) add r15, qword ptr [ebx + VALUE]
#define ADD_R15_FROM_PTR_ECX_(VALUE) add r15, qword ptr [ecx + VALUE]
#define ADD_R15_FROM_PTR_EDX_(VALUE) add r15, qword ptr [edx + VALUE]
#define ADD_R15_FROM_PTR_EDI_(VALUE) add r15, qword ptr [edi + VALUE]
#define ADD_R15_FROM_PTR_ESI_(VALUE) add r15, qword ptr [esi + VALUE]
#define ADD_R15_FROM_PTR_EBP_(VALUE) add r15, qword ptr [ebp + VALUE]
#define ADD_R15_FROM_PTR_ESP_(VALUE) add r15, qword ptr [esp + VALUE]

#define ADD_RAX_TO_PTR_RAX_(VALUE) add qword ptr [rax + VALUE], rax
#define ADD_RAX_TO_PTR_RBX_(VALUE) add qword ptr [rbx + VALUE], rax
#define ADD_RAX_TO_PTR_RCX_(VALUE) add qword ptr [rcx + VALUE], rax
#define ADD_RAX_TO_PTR_RDX_(VALUE) add qword ptr [rdx + VALUE], rax
#define ADD_RAX_TO_PTR_RDI_(VALUE) add qword ptr [rdi + VALUE], rax
#define ADD_RAX_TO_PTR_RSI_(VALUE) add qword ptr [rsi + VALUE], rax
#define ADD_RAX_TO_PTR_RBP_(VALUE) add qword ptr [rbp + VALUE], rax
#define ADD_RAX_TO_PTR_RSP_(VALUE) add qword ptr [rsp + VALUE], rax
#define ADD_RAX_TO_PTR_R8_(VALUE) add qword ptr [r8 + VALUE], rax
#define ADD_RAX_TO_PTR_R9_(VALUE) add qword ptr [r9 + VALUE], rax
#define ADD_RAX_TO_PTR_R10_(VALUE) add qword ptr [r10 + VALUE], rax
#define ADD_RAX_TO_PTR_R11_(VALUE) add qword ptr [r11 + VALUE], rax
#define ADD_RAX_TO_PTR_R12_(VALUE) add qword ptr [r12 + VALUE], rax
#define ADD_RAX_TO_PTR_R13_(VALUE) add qword ptr [r13 + VALUE], rax
#define ADD_RAX_TO_PTR_R14_(VALUE) add qword ptr [r14 + VALUE], rax
#define ADD_RAX_TO_PTR_R15_(VALUE) add qword ptr [r15 + VALUE], rax
#define ADD_RAX_TO_PTR_EAX_(VALUE) add qword ptr [eax + VALUE], rax
#define ADD_RAX_TO_PTR_EBX_(VALUE) add qword ptr [ebx + VALUE], rax
#define ADD_RAX_TO_PTR_ECX_(VALUE) add qword ptr [ecx + VALUE], rax
#define ADD_RAX_TO_PTR_EDX_(VALUE) add qword ptr [edx + VALUE], rax
#define ADD_RAX_TO_PTR_EDI_(VALUE) add qword ptr [edi + VALUE], rax
#define ADD_RAX_TO_PTR_ESI_(VALUE) add qword ptr [esi + VALUE], rax
#define ADD_RAX_TO_PTR_EBP_(VALUE) add qword ptr [ebp + VALUE], rax
#define ADD_RAX_TO_PTR_ESP_(VALUE) add qword ptr [esp + VALUE], rax

#define ADD_RBX_TO_PTR_RAX_(VALUE) add qword ptr [rax + VALUE], rbx
#define ADD_RBX_TO_PTR_RBX_(VALUE) add qword ptr [rbx + VALUE], rbx
#define ADD_RBX_TO_PTR_RCX_(VALUE) add qword ptr [rcx + VALUE], rbx
#define ADD_RBX_TO_PTR_RDX_(VALUE) add qword ptr [rdx + VALUE], rbx
#define ADD_RBX_TO_PTR_RDI_(VALUE) add qword ptr [rdi + VALUE], rbx
#define ADD_RBX_TO_PTR_RSI_(VALUE) add qword ptr [rsi + VALUE], rbx
#define ADD_RBX_TO_PTR_RBP_(VALUE) add qword ptr [rbp + VALUE], rbx
#define ADD_RBX_TO_PTR_RSP_(VALUE) add qword ptr [rsp + VALUE], rbx
#define ADD_RBX_TO_PTR_R8_(VALUE) add qword ptr [r8 + VALUE], rbx
#define ADD_RBX_TO_PTR_R9_(VALUE) add qword ptr [r9 + VALUE], rbx
#define ADD_RBX_TO_PTR_R10_(VALUE) add qword ptr [r10 + VALUE], rbx
#define ADD_RBX_TO_PTR_R11_(VALUE) add qword ptr [r11 + VALUE], rbx
#define ADD_RBX_TO_PTR_R12_(VALUE) add qword ptr [r12 + VALUE], rbx
#define ADD_RBX_TO_PTR_R13_(VALUE) add qword ptr [r13 + VALUE], rbx
#define ADD_RBX_TO_PTR_R14_(VALUE) add qword ptr [r14 + VALUE], rbx
#define ADD_RBX_TO_PTR_R15_(VALUE) add qword ptr [r15 + VALUE], rbx
#define ADD_RBX_TO_PTR_EAX_(VALUE) add qword ptr [eax + VALUE], rbx
#define ADD_RBX_TO_PTR_EBX_(VALUE) add qword ptr [ebx + VALUE], rbx
#define ADD_RBX_TO_PTR_ECX_(VALUE) add qword ptr [ecx + VALUE], rbx
#define ADD_RBX_TO_PTR_EDX_(VALUE) add qword ptr [edx + VALUE], rbx
#define ADD_RBX_TO_PTR_EDI_(VALUE) add qword ptr [edi + VALUE], rbx
#define ADD_RBX_TO_PTR_ESI_(VALUE) add qword ptr [esi + VALUE], rbx
#define ADD_RBX_TO_PTR_EBP_(VALUE) add qword ptr [ebp + VALUE], rbx
#define ADD_RBX_TO_PTR_ESP_(VALUE) add qword ptr [esp + VALUE], rbx

#define ADD_RCX_TO_PTR_RAX_(VALUE) add qword ptr [rax + VALUE], rcx
#define ADD_RCX_TO_PTR_RBX_(VALUE) add qword ptr [rbx + VALUE], rcx
#define ADD_RCX_TO_PTR_RCX_(VALUE) add qword ptr [rcx + VALUE], rcx
#define ADD_RCX_TO_PTR_RDX_(VALUE) add qword ptr [rdx + VALUE], rcx
#define ADD_RCX_TO_PTR_RDI_(VALUE) add qword ptr [rdi + VALUE], rcx
#define ADD_RCX_TO_PTR_RSI_(VALUE) add qword ptr [rsi + VALUE], rcx
#define ADD_RCX_TO_PTR_RBP_(VALUE) add qword ptr [rbp + VALUE], rcx
#define ADD_RCX_TO_PTR_RSP_(VALUE) add qword ptr [rsp + VALUE], rcx
#define ADD_RCX_TO_PTR_R8_(VALUE) add qword ptr [r8 + VALUE], rcx
#define ADD_RCX_TO_PTR_R9_(VALUE) add qword ptr [r9 + VALUE], rcx
#define ADD_RCX_TO_PTR_R10_(VALUE) add qword ptr [r10 + VALUE], rcx
#define ADD_RCX_TO_PTR_R11_(VALUE) add qword ptr [r11 + VALUE], rcx
#define ADD_RCX_TO_PTR_R12_(VALUE) add qword ptr [r12 + VALUE], rcx
#define ADD_RCX_TO_PTR_R13_(VALUE) add qword ptr [r13 + VALUE], rcx
#define ADD_RCX_TO_PTR_R14_(VALUE) add qword ptr [r14 + VALUE], rcx
#define ADD_RCX_TO_PTR_R15_(VALUE) add qword ptr [r15 + VALUE], rcx
#define ADD_RCX_TO_PTR_EAX_(VALUE) add qword ptr [eax + VALUE], rcx
#define ADD_RCX_TO_PTR_EBX_(VALUE) add qword ptr [ebx + VALUE], rcx
#define ADD_RCX_TO_PTR_ECX_(VALUE) add qword ptr [ecx + VALUE], rcx
#define ADD_RCX_TO_PTR_EDX_(VALUE) add qword ptr [edx + VALUE], rcx
#define ADD_RCX_TO_PTR_EDI_(VALUE) add qword ptr [edi + VALUE], rcx
#define ADD_RCX_TO_PTR_ESI_(VALUE) add qword ptr [esi + VALUE], rcx
#define ADD_RCX_TO_PTR_EBP_(VALUE) add qword ptr [ebp + VALUE], rcx
#define ADD_RCX_TO_PTR_ESP_(VALUE) add qword ptr [esp + VALUE], rcx

#define ADD_RDX_TO_PTR_RAX_(VALUE) add qword ptr [rax + VALUE], rdx
#define ADD_RDX_TO_PTR_RBX_(VALUE) add qword ptr [rbx + VALUE], rdx
#define ADD_RDX_TO_PTR_RCX_(VALUE) add qword ptr [rcx + VALUE], rdx
#define ADD_RDX_TO_PTR_RDX_(VALUE) add qword ptr [rdx + VALUE], rdx
#define ADD_RDX_TO_PTR_RDI_(VALUE) add qword ptr [rdi + VALUE], rdx
#define ADD_RDX_TO_PTR_RSI_(VALUE) add qword ptr [rsi + VALUE], rdx
#define ADD_RDX_TO_PTR_RBP_(VALUE) add qword ptr [rbp + VALUE], rdx
#define ADD_RDX_TO_PTR_RSP_(VALUE) add qword ptr [rsp + VALUE], rdx
#define ADD_RDX_TO_PTR_R8_(VALUE) add qword ptr [r8 + VALUE], rdx
#define ADD_RDX_TO_PTR_R9_(VALUE) add qword ptr [r9 + VALUE], rdx
#define ADD_RDX_TO_PTR_R10_(VALUE) add qword ptr [r10 + VALUE], rdx
#define ADD_RDX_TO_PTR_R11_(VALUE) add qword ptr [r11 + VALUE], rdx
#define ADD_RDX_TO_PTR_R12_(VALUE) add qword ptr [r12 + VALUE], rdx
#define ADD_RDX_TO_PTR_R13_(VALUE) add qword ptr [r13 + VALUE], rdx
#define ADD_RDX_TO_PTR_R14_(VALUE) add qword ptr [r14 + VALUE], rdx
#define ADD_RDX_TO_PTR_R15_(VALUE) add qword ptr [r15 + VALUE], rdx
#define ADD_RDX_TO_PTR_EAX_(VALUE) add qword ptr [eax + VALUE], rdx
#define ADD_RDX_TO_PTR_EBX_(VALUE) add qword ptr [ebx + VALUE], rdx
#define ADD_RDX_TO_PTR_ECX_(VALUE) add qword ptr [ecx + VALUE], rdx
#define ADD_RDX_TO_PTR_EDX_(VALUE) add qword ptr [edx + VALUE], rdx
#define ADD_RDX_TO_PTR_EDI_(VALUE) add qword ptr [edi + VALUE], rdx
#define ADD_RDX_TO_PTR_ESI_(VALUE) add qword ptr [esi + VALUE], rdx
#define ADD_RDX_TO_PTR_EBP_(VALUE) add qword ptr [ebp + VALUE], rdx
#define ADD_RDX_TO_PTR_ESP_(VALUE) add qword ptr [esp + VALUE], rdx

#define ADD_RDI_TO_PTR_RAX_(VALUE) add qword ptr [rax + VALUE], rdi
#define ADD_RDI_TO_PTR_RBX_(VALUE) add qword ptr [rbx + VALUE], rdi
#define ADD_RDI_TO_PTR_RCX_(VALUE) add qword ptr [rcx + VALUE], rdi
#define ADD_RDI_TO_PTR_RDX_(VALUE) add qword ptr [rdx + VALUE], rdi
#define ADD_RDI_TO_PTR_RDI_(VALUE) add qword ptr [rdi + VALUE], rdi
#define ADD_RDI_TO_PTR_RSI_(VALUE) add qword ptr [rsi + VALUE], rdi
#define ADD_RDI_TO_PTR_RBP_(VALUE) add qword ptr [rbp + VALUE], rdi
#define ADD_RDI_TO_PTR_RSP_(VALUE) add qword ptr [rsp + VALUE], rdi
#define ADD_RDI_TO_PTR_R8_(VALUE) add qword ptr [r8 + VALUE], rdi
#define ADD_RDI_TO_PTR_R9_(VALUE) add qword ptr [r9 + VALUE], rdi
#define ADD_RDI_TO_PTR_R10_(VALUE) add qword ptr [r10 + VALUE], rdi
#define ADD_RDI_TO_PTR_R11_(VALUE) add qword ptr [r11 + VALUE], rdi
#define ADD_RDI_TO_PTR_R12_(VALUE) add qword ptr [r12 + VALUE], rdi
#define ADD_RDI_TO_PTR_R13_(VALUE) add qword ptr [r13 + VALUE], rdi
#define ADD_RDI_TO_PTR_R14_(VALUE) add qword ptr [r14 + VALUE], rdi
#define ADD_RDI_TO_PTR_R15_(VALUE) add qword ptr [r15 + VALUE], rdi
#define ADD_RDI_TO_PTR_EAX_(VALUE) add qword ptr [eax + VALUE], rdi
#define ADD_RDI_TO_PTR_EBX_(VALUE) add qword ptr [ebx + VALUE], rdi
#define ADD_RDI_TO_PTR_ECX_(VALUE) add qword ptr [ecx + VALUE], rdi
#define ADD_RDI_TO_PTR_EDX_(VALUE) add qword ptr [edx + VALUE], rdi
#define ADD_RDI_TO_PTR_EDI_(VALUE) add qword ptr [edi + VALUE], rdi
#define ADD_RDI_TO_PTR_ESI_(VALUE) add qword ptr [esi + VALUE], rdi
#define ADD_RDI_TO_PTR_EBP_(VALUE) add qword ptr [ebp + VALUE], rdi
#define ADD_RDI_TO_PTR_ESP_(VALUE) add qword ptr [esp + VALUE], rdi

#define ADD_RSI_TO_PTR_RAX_(VALUE) add qword ptr [rax + VALUE], rsi
#define ADD_RSI_TO_PTR_RBX_(VALUE) add qword ptr [rbx + VALUE], rsi
#define ADD_RSI_TO_PTR_RCX_(VALUE) add qword ptr [rcx + VALUE], rsi
#define ADD_RSI_TO_PTR_RDX_(VALUE) add qword ptr [rdx + VALUE], rsi
#define ADD_RSI_TO_PTR_RDI_(VALUE) add qword ptr [rdi + VALUE], rsi
#define ADD_RSI_TO_PTR_RSI_(VALUE) add qword ptr [rsi + VALUE], rsi
#define ADD_RSI_TO_PTR_RBP_(VALUE) add qword ptr [rbp + VALUE], rsi
#define ADD_RSI_TO_PTR_RSP_(VALUE) add qword ptr [rsp + VALUE], rsi
#define ADD_RSI_TO_PTR_R8_(VALUE) add qword ptr [r8 + VALUE], rsi
#define ADD_RSI_TO_PTR_R9_(VALUE) add qword ptr [r9 + VALUE], rsi
#define ADD_RSI_TO_PTR_R10_(VALUE) add qword ptr [r10 + VALUE], rsi
#define ADD_RSI_TO_PTR_R11_(VALUE) add qword ptr [r11 + VALUE], rsi
#define ADD_RSI_TO_PTR_R12_(VALUE) add qword ptr [r12 + VALUE], rsi
#define ADD_RSI_TO_PTR_R13_(VALUE) add qword ptr [r13 + VALUE], rsi
#define ADD_RSI_TO_PTR_R14_(VALUE) add qword ptr [r14 + VALUE], rsi
#define ADD_RSI_TO_PTR_R15_(VALUE) add qword ptr [r15 + VALUE], rsi
#define ADD_RSI_TO_PTR_EAX_(VALUE) add qword ptr [eax + VALUE], rsi
#define ADD_RSI_TO_PTR_EBX_(VALUE) add qword ptr [ebx + VALUE], rsi
#define ADD_RSI_TO_PTR_ECX_(VALUE) add qword ptr [ecx + VALUE], rsi
#define ADD_RSI_TO_PTR_EDX_(VALUE) add qword ptr [edx + VALUE], rsi
#define ADD_RSI_TO_PTR_EDI_(VALUE) add qword ptr [edi + VALUE], rsi
#define ADD_RSI_TO_PTR_ESI_(VALUE) add qword ptr [esi + VALUE], rsi
#define ADD_RSI_TO_PTR_EBP_(VALUE) add qword ptr [ebp + VALUE], rsi
#define ADD_RSI_TO_PTR_ESP_(VALUE) add qword ptr [esp + VALUE], rsi

#define ADD_RBP_TO_PTR_RAX_(VALUE) add qword ptr [rax + VALUE], rbp
#define ADD_RBP_TO_PTR_RBX_(VALUE) add qword ptr [rbx + VALUE], rbp
#define ADD_RBP_TO_PTR_RCX_(VALUE) add qword ptr [rcx + VALUE], rbp
#define ADD_RBP_TO_PTR_RDX_(VALUE) add qword ptr [rdx + VALUE], rbp
#define ADD_RBP_TO_PTR_RDI_(VALUE) add qword ptr [rdi + VALUE], rbp
#define ADD_RBP_TO_PTR_RSI_(VALUE) add qword ptr [rsi + VALUE], rbp
#define ADD_RBP_TO_PTR_RBP_(VALUE) add qword ptr [rbp + VALUE], rbp
#define ADD_RBP_TO_PTR_RSP_(VALUE) add qword ptr [rsp + VALUE], rbp
#define ADD_RBP_TO_PTR_R8_(VALUE) add qword ptr [r8 + VALUE], rbp
#define ADD_RBP_TO_PTR_R9_(VALUE) add qword ptr [r9 + VALUE], rbp
#define ADD_RBP_TO_PTR_R10_(VALUE) add qword ptr [r10 + VALUE], rbp
#define ADD_RBP_TO_PTR_R11_(VALUE) add qword ptr [r11 + VALUE], rbp
#define ADD_RBP_TO_PTR_R12_(VALUE) add qword ptr [r12 + VALUE], rbp
#define ADD_RBP_TO_PTR_R13_(VALUE) add qword ptr [r13 + VALUE], rbp
#define ADD_RBP_TO_PTR_R14_(VALUE) add qword ptr [r14 + VALUE], rbp
#define ADD_RBP_TO_PTR_R15_(VALUE) add qword ptr [r15 + VALUE], rbp
#define ADD_RBP_TO_PTR_EAX_(VALUE) add qword ptr [eax + VALUE], rbp
#define ADD_RBP_TO_PTR_EBX_(VALUE) add qword ptr [ebx + VALUE], rbp
#define ADD_RBP_TO_PTR_ECX_(VALUE) add qword ptr [ecx + VALUE], rbp
#define ADD_RBP_TO_PTR_EDX_(VALUE) add qword ptr [edx + VALUE], rbp
#define ADD_RBP_TO_PTR_EDI_(VALUE) add qword ptr [edi + VALUE], rbp
#define ADD_RBP_TO_PTR_ESI_(VALUE) add qword ptr [esi + VALUE], rbp
#define ADD_RBP_TO_PTR_EBP_(VALUE) add qword ptr [ebp + VALUE], rbp
#define ADD_RBP_TO_PTR_ESP_(VALUE) add qword ptr [esp + VALUE], rbp

#define ADD_RSP_TO_PTR_RAX_(VALUE) add qword ptr [rax + VALUE], rsp
#define ADD_RSP_TO_PTR_RBX_(VALUE) add qword ptr [rbx + VALUE], rsp
#define ADD_RSP_TO_PTR_RCX_(VALUE) add qword ptr [rcx + VALUE], rsp
#define ADD_RSP_TO_PTR_RDX_(VALUE) add qword ptr [rdx + VALUE], rsp
#define ADD_RSP_TO_PTR_RDI_(VALUE) add qword ptr [rdi + VALUE], rsp
#define ADD_RSP_TO_PTR_RSI_(VALUE) add qword ptr [rsi + VALUE], rsp
#define ADD_RSP_TO_PTR_RBP_(VALUE) add qword ptr [rbp + VALUE], rsp
#define ADD_RSP_TO_PTR_RSP_(VALUE) add qword ptr [rsp + VALUE], rsp
#define ADD_RSP_TO_PTR_R8_(VALUE) add qword ptr [r8 + VALUE], rsp
#define ADD_RSP_TO_PTR_R9_(VALUE) add qword ptr [r9 + VALUE], rsp
#define ADD_RSP_TO_PTR_R10_(VALUE) add qword ptr [r10 + VALUE], rsp
#define ADD_RSP_TO_PTR_R11_(VALUE) add qword ptr [r11 + VALUE], rsp
#define ADD_RSP_TO_PTR_R12_(VALUE) add qword ptr [r12 + VALUE], rsp
#define ADD_RSP_TO_PTR_R13_(VALUE) add qword ptr [r13 + VALUE], rsp
#define ADD_RSP_TO_PTR_R14_(VALUE) add qword ptr [r14 + VALUE], rsp
#define ADD_RSP_TO_PTR_R15_(VALUE) add qword ptr [r15 + VALUE], rsp
#define ADD_RSP_TO_PTR_EAX_(VALUE) add qword ptr [eax + VALUE], rsp
#define ADD_RSP_TO_PTR_EBX_(VALUE) add qword ptr [ebx + VALUE], rsp
#define ADD_RSP_TO_PTR_ECX_(VALUE) add qword ptr [ecx + VALUE], rsp
#define ADD_RSP_TO_PTR_EDX_(VALUE) add qword ptr [edx + VALUE], rsp
#define ADD_RSP_TO_PTR_EDI_(VALUE) add qword ptr [edi + VALUE], rsp
#define ADD_RSP_TO_PTR_ESI_(VALUE) add qword ptr [esi + VALUE], rsp
#define ADD_RSP_TO_PTR_EBP_(VALUE) add qword ptr [ebp + VALUE], rsp
#define ADD_RSP_TO_PTR_ESP_(VALUE) add qword ptr [esp + VALUE], rsp

#define ADD_R8_TO_PTR_RAX_(VALUE) add qword ptr [rax + VALUE], r8
#define ADD_R8_TO_PTR_RBX_(VALUE) add qword ptr [rbx + VALUE], r8
#define ADD_R8_TO_PTR_RCX_(VALUE) add qword ptr [rcx + VALUE], r8
#define ADD_R8_TO_PTR_RDX_(VALUE) add qword ptr [rdx + VALUE], r8
#define ADD_R8_TO_PTR_RDI_(VALUE) add qword ptr [rdi + VALUE], r8
#define ADD_R8_TO_PTR_RSI_(VALUE) add qword ptr [rsi + VALUE], r8
#define ADD_R8_TO_PTR_RBP_(VALUE) add qword ptr [rbp + VALUE], r8
#define ADD_R8_TO_PTR_RSP_(VALUE) add qword ptr [rsp + VALUE], r8
#define ADD_R8_TO_PTR_R8_(VALUE) add qword ptr [r8 + VALUE], r8
#define ADD_R8_TO_PTR_R9_(VALUE) add qword ptr [r9 + VALUE], r8
#define ADD_R8_TO_PTR_R10_(VALUE) add qword ptr [r10 + VALUE], r8
#define ADD_R8_TO_PTR_R11_(VALUE) add qword ptr [r11 + VALUE], r8
#define ADD_R8_TO_PTR_R12_(VALUE) add qword ptr [r12 + VALUE], r8
#define ADD_R8_TO_PTR_R13_(VALUE) add qword ptr [r13 + VALUE], r8
#define ADD_R8_TO_PTR_R14_(VALUE) add qword ptr [r14 + VALUE], r8
#define ADD_R8_TO_PTR_R15_(VALUE) add qword ptr [r15 + VALUE], r8
#define ADD_R8_TO_PTR_EAX_(VALUE) add qword ptr [eax + VALUE], r8
#define ADD_R8_TO_PTR_EBX_(VALUE) add qword ptr [ebx + VALUE], r8
#define ADD_R8_TO_PTR_ECX_(VALUE) add qword ptr [ecx + VALUE], r8
#define ADD_R8_TO_PTR_EDX_(VALUE) add qword ptr [edx + VALUE], r8
#define ADD_R8_TO_PTR_EDI_(VALUE) add qword ptr [edi + VALUE], r8
#define ADD_R8_TO_PTR_ESI_(VALUE) add qword ptr [esi + VALUE], r8
#define ADD_R8_TO_PTR_EBP_(VALUE) add qword ptr [ebp + VALUE], r8
#define ADD_R8_TO_PTR_ESP_(VALUE) add qword ptr [esp + VALUE], r8

#define ADD_R9_TO_PTR_RAX_(VALUE) add qword ptr [rax + VALUE], r9
#define ADD_R9_TO_PTR_RBX_(VALUE) add qword ptr [rbx + VALUE], r9
#define ADD_R9_TO_PTR_RCX_(VALUE) add qword ptr [rcx + VALUE], r9
#define ADD_R9_TO_PTR_RDX_(VALUE) add qword ptr [rdx + VALUE], r9
#define ADD_R9_TO_PTR_RDI_(VALUE) add qword ptr [rdi + VALUE], r9
#define ADD_R9_TO_PTR_RSI_(VALUE) add qword ptr [rsi + VALUE], r9
#define ADD_R9_TO_PTR_RBP_(VALUE) add qword ptr [rbp + VALUE], r9
#define ADD_R9_TO_PTR_RSP_(VALUE) add qword ptr [rsp + VALUE], r9
#define ADD_R9_TO_PTR_R8_(VALUE) add qword ptr [r8 + VALUE], r9
#define ADD_R9_TO_PTR_R9_(VALUE) add qword ptr [r9 + VALUE], r9
#define ADD_R9_TO_PTR_R10_(VALUE) add qword ptr [r10 + VALUE], r9
#define ADD_R9_TO_PTR_R11_(VALUE) add qword ptr [r11 + VALUE], r9
#define ADD_R9_TO_PTR_R12_(VALUE) add qword ptr [r12 + VALUE], r9
#define ADD_R9_TO_PTR_R13_(VALUE) add qword ptr [r13 + VALUE], r9
#define ADD_R9_TO_PTR_R14_(VALUE) add qword ptr [r14 + VALUE], r9
#define ADD_R9_TO_PTR_R15_(VALUE) add qword ptr [r15 + VALUE], r9
#define ADD_R9_TO_PTR_EAX_(VALUE) add qword ptr [eax + VALUE], r9
#define ADD_R9_TO_PTR_EBX_(VALUE) add qword ptr [ebx + VALUE], r9
#define ADD_R9_TO_PTR_ECX_(VALUE) add qword ptr [ecx + VALUE], r9
#define ADD_R9_TO_PTR_EDX_(VALUE) add qword ptr [edx + VALUE], r9
#define ADD_R9_TO_PTR_EDI_(VALUE) add qword ptr [edi + VALUE], r9
#define ADD_R9_TO_PTR_ESI_(VALUE) add qword ptr [esi + VALUE], r9
#define ADD_R9_TO_PTR_EBP_(VALUE) add qword ptr [ebp + VALUE], r9
#define ADD_R9_TO_PTR_ESP_(VALUE) add qword ptr [esp + VALUE], r9

#define ADD_R10_TO_PTR_RAX_(VALUE) add qword ptr [rax + VALUE], r10
#define ADD_R10_TO_PTR_RBX_(VALUE) add qword ptr [rbx + VALUE], r10
#define ADD_R10_TO_PTR_RCX_(VALUE) add qword ptr [rcx + VALUE], r10
#define ADD_R10_TO_PTR_RDX_(VALUE) add qword ptr [rdx + VALUE], r10
#define ADD_R10_TO_PTR_RDI_(VALUE) add qword ptr [rdi + VALUE], r10
#define ADD_R10_TO_PTR_RSI_(VALUE) add qword ptr [rsi + VALUE], r10
#define ADD_R10_TO_PTR_RBP_(VALUE) add qword ptr [rbp + VALUE], r10
#define ADD_R10_TO_PTR_RSP_(VALUE) add qword ptr [rsp + VALUE], r10
#define ADD_R10_TO_PTR_R8_(VALUE) add qword ptr [r8 + VALUE], r10
#define ADD_R10_TO_PTR_R9_(VALUE) add qword ptr [r9 + VALUE], r10
#define ADD_R10_TO_PTR_R10_(VALUE) add qword ptr [r10 + VALUE], r10
#define ADD_R10_TO_PTR_R11_(VALUE) add qword ptr [r11 + VALUE], r10
#define ADD_R10_TO_PTR_R12_(VALUE) add qword ptr [r12 + VALUE], r10
#define ADD_R10_TO_PTR_R13_(VALUE) add qword ptr [r13 + VALUE], r10
#define ADD_R10_TO_PTR_R14_(VALUE) add qword ptr [r14 + VALUE], r10
#define ADD_R10_TO_PTR_R15_(VALUE) add qword ptr [r15 + VALUE], r10
#define ADD_R10_TO_PTR_EAX_(VALUE) add qword ptr [eax + VALUE], r10
#define ADD_R10_TO_PTR_EBX_(VALUE) add qword ptr [ebx + VALUE], r10
#define ADD_R10_TO_PTR_ECX_(VALUE) add qword ptr [ecx + VALUE], r10
#define ADD_R10_TO_PTR_EDX_(VALUE) add qword ptr [edx + VALUE], r10
#define ADD_R10_TO_PTR_EDI_(VALUE) add qword ptr [edi + VALUE], r10
#define ADD_R10_TO_PTR_ESI_(VALUE) add qword ptr [esi + VALUE], r10
#define ADD_R10_TO_PTR_EBP_(VALUE) add qword ptr [ebp + VALUE], r10
#define ADD_R10_TO_PTR_ESP_(VALUE) add qword ptr [esp + VALUE], r10

#define ADD_R11_TO_PTR_RAX_(VALUE) add qword ptr [rax + VALUE], r11
#define ADD_R11_TO_PTR_RBX_(VALUE) add qword ptr [rbx + VALUE], r11
#define ADD_R11_TO_PTR_RCX_(VALUE) add qword ptr [rcx + VALUE], r11
#define ADD_R11_TO_PTR_RDX_(VALUE) add qword ptr [rdx + VALUE], r11
#define ADD_R11_TO_PTR_RDI_(VALUE) add qword ptr [rdi + VALUE], r11
#define ADD_R11_TO_PTR_RSI_(VALUE) add qword ptr [rsi + VALUE], r11
#define ADD_R11_TO_PTR_RBP_(VALUE) add qword ptr [rbp + VALUE], r11
#define ADD_R11_TO_PTR_RSP_(VALUE) add qword ptr [rsp + VALUE], r11
#define ADD_R11_TO_PTR_R8_(VALUE) add qword ptr [r8 + VALUE], r11
#define ADD_R11_TO_PTR_R9_(VALUE) add qword ptr [r9 + VALUE], r11
#define ADD_R11_TO_PTR_R10_(VALUE) add qword ptr [r10 + VALUE], r11
#define ADD_R11_TO_PTR_R11_(VALUE) add qword ptr [r11 + VALUE], r11
#define ADD_R11_TO_PTR_R12_(VALUE) add qword ptr [r12 + VALUE], r11
#define ADD_R11_TO_PTR_R13_(VALUE) add qword ptr [r13 + VALUE], r11
#define ADD_R11_TO_PTR_R14_(VALUE) add qword ptr [r14 + VALUE], r11
#define ADD_R11_TO_PTR_R15_(VALUE) add qword ptr [r15 + VALUE], r11
#define ADD_R11_TO_PTR_EAX_(VALUE) add qword ptr [eax + VALUE], r11
#define ADD_R11_TO_PTR_EBX_(VALUE) add qword ptr [ebx + VALUE], r11
#define ADD_R11_TO_PTR_ECX_(VALUE) add qword ptr [ecx + VALUE], r11
#define ADD_R11_TO_PTR_EDX_(VALUE) add qword ptr [edx + VALUE], r11
#define ADD_R11_TO_PTR_EDI_(VALUE) add qword ptr [edi + VALUE], r11
#define ADD_R11_TO_PTR_ESI_(VALUE) add qword ptr [esi + VALUE], r11
#define ADD_R11_TO_PTR_EBP_(VALUE) add qword ptr [ebp + VALUE], r11
#define ADD_R11_TO_PTR_ESP_(VALUE) add qword ptr [esp + VALUE], r11

#define ADD_R12_TO_PTR_RAX_(VALUE) add qword ptr [rax + VALUE], r12
#define ADD_R12_TO_PTR_RBX_(VALUE) add qword ptr [rbx + VALUE], r12
#define ADD_R12_TO_PTR_RCX_(VALUE) add qword ptr [rcx + VALUE], r12
#define ADD_R12_TO_PTR_RDX_(VALUE) add qword ptr [rdx + VALUE], r12
#define ADD_R12_TO_PTR_RDI_(VALUE) add qword ptr [rdi + VALUE], r12
#define ADD_R12_TO_PTR_RSI_(VALUE) add qword ptr [rsi + VALUE], r12
#define ADD_R12_TO_PTR_RBP_(VALUE) add qword ptr [rbp + VALUE], r12
#define ADD_R12_TO_PTR_RSP_(VALUE) add qword ptr [rsp + VALUE], r12
#define ADD_R12_TO_PTR_R8_(VALUE) add qword ptr [r8 + VALUE], r12
#define ADD_R12_TO_PTR_R9_(VALUE) add qword ptr [r9 + VALUE], r12
#define ADD_R12_TO_PTR_R10_(VALUE) add qword ptr [r10 + VALUE], r12
#define ADD_R12_TO_PTR_R11_(VALUE) add qword ptr [r11 + VALUE], r12
#define ADD_R12_TO_PTR_R12_(VALUE) add qword ptr [r12 + VALUE], r12
#define ADD_R12_TO_PTR_R13_(VALUE) add qword ptr [r13 + VALUE], r12
#define ADD_R12_TO_PTR_R14_(VALUE) add qword ptr [r14 + VALUE], r12
#define ADD_R12_TO_PTR_R15_(VALUE) add qword ptr [r15 + VALUE], r12
#define ADD_R12_TO_PTR_EAX_(VALUE) add qword ptr [eax + VALUE], r12
#define ADD_R12_TO_PTR_EBX_(VALUE) add qword ptr [ebx + VALUE], r12
#define ADD_R12_TO_PTR_ECX_(VALUE) add qword ptr [ecx + VALUE], r12
#define ADD_R12_TO_PTR_EDX_(VALUE) add qword ptr [edx + VALUE], r12
#define ADD_R12_TO_PTR_EDI_(VALUE) add qword ptr [edi + VALUE], r12
#define ADD_R12_TO_PTR_ESI_(VALUE) add qword ptr [esi + VALUE], r12
#define ADD_R12_TO_PTR_EBP_(VALUE) add qword ptr [ebp + VALUE], r12
#define ADD_R12_TO_PTR_ESP_(VALUE) add qword ptr [esp + VALUE], r12

#define ADD_R13_TO_PTR_RAX_(VALUE) add qword ptr [rax + VALUE], r13
#define ADD_R13_TO_PTR_RBX_(VALUE) add qword ptr [rbx + VALUE], r13
#define ADD_R13_TO_PTR_RCX_(VALUE) add qword ptr [rcx + VALUE], r13
#define ADD_R13_TO_PTR_RDX_(VALUE) add qword ptr [rdx + VALUE], r13
#define ADD_R13_TO_PTR_RDI_(VALUE) add qword ptr [rdi + VALUE], r13
#define ADD_R13_TO_PTR_RSI_(VALUE) add qword ptr [rsi + VALUE], r13
#define ADD_R13_TO_PTR_RBP_(VALUE) add qword ptr [rbp + VALUE], r13
#define ADD_R13_TO_PTR_RSP_(VALUE) add qword ptr [rsp + VALUE], r13
#define ADD_R13_TO_PTR_R8_(VALUE) add qword ptr [r8 + VALUE], r13
#define ADD_R13_TO_PTR_R9_(VALUE) add qword ptr [r9 + VALUE], r13
#define ADD_R13_TO_PTR_R10_(VALUE) add qword ptr [r10 + VALUE], r13
#define ADD_R13_TO_PTR_R11_(VALUE) add qword ptr [r11 + VALUE], r13
#define ADD_R13_TO_PTR_R12_(VALUE) add qword ptr [r12 + VALUE], r13
#define ADD_R13_TO_PTR_R13_(VALUE) add qword ptr [r13 + VALUE], r13
#define ADD_R13_TO_PTR_R14_(VALUE) add qword ptr [r14 + VALUE], r13
#define ADD_R13_TO_PTR_R15_(VALUE) add qword ptr [r15 + VALUE], r13
#define ADD_R13_TO_PTR_EAX_(VALUE) add qword ptr [eax + VALUE], r13
#define ADD_R13_TO_PTR_EBX_(VALUE) add qword ptr [ebx + VALUE], r13
#define ADD_R13_TO_PTR_ECX_(VALUE) add qword ptr [ecx + VALUE], r13
#define ADD_R13_TO_PTR_EDX_(VALUE) add qword ptr [edx + VALUE], r13
#define ADD_R13_TO_PTR_EDI_(VALUE) add qword ptr [edi + VALUE], r13
#define ADD_R13_TO_PTR_ESI_(VALUE) add qword ptr [esi + VALUE], r13
#define ADD_R13_TO_PTR_EBP_(VALUE) add qword ptr [ebp + VALUE], r13
#define ADD_R13_TO_PTR_ESP_(VALUE) add qword ptr [esp + VALUE], r13

#define ADD_R14_TO_PTR_RAX_(VALUE) add qword ptr [rax + VALUE], r14
#define ADD_R14_TO_PTR_RBX_(VALUE) add qword ptr [rbx + VALUE], r14
#define ADD_R14_TO_PTR_RCX_(VALUE) add qword ptr [rcx + VALUE], r14
#define ADD_R14_TO_PTR_RDX_(VALUE) add qword ptr [rdx + VALUE], r14
#define ADD_R14_TO_PTR_RDI_(VALUE) add qword ptr [rdi + VALUE], r14
#define ADD_R14_TO_PTR_RSI_(VALUE) add qword ptr [rsi + VALUE], r14
#define ADD_R14_TO_PTR_RBP_(VALUE) add qword ptr [rbp + VALUE], r14
#define ADD_R14_TO_PTR_RSP_(VALUE) add qword ptr [rsp + VALUE], r14
#define ADD_R14_TO_PTR_R8_(VALUE) add qword ptr [r8 + VALUE], r14
#define ADD_R14_TO_PTR_R9_(VALUE) add qword ptr [r9 + VALUE], r14
#define ADD_R14_TO_PTR_R10_(VALUE) add qword ptr [r10 + VALUE], r14
#define ADD_R14_TO_PTR_R11_(VALUE) add qword ptr [r11 + VALUE], r14
#define ADD_R14_TO_PTR_R12_(VALUE) add qword ptr [r12 + VALUE], r14
#define ADD_R14_TO_PTR_R13_(VALUE) add qword ptr [r13 + VALUE], r14
#define ADD_R14_TO_PTR_R14_(VALUE) add qword ptr [r14 + VALUE], r14
#define ADD_R14_TO_PTR_R15_(VALUE) add qword ptr [r15 + VALUE], r14
#define ADD_R14_TO_PTR_EAX_(VALUE) add qword ptr [eax + VALUE], r14
#define ADD_R14_TO_PTR_EBX_(VALUE) add qword ptr [ebx + VALUE], r14
#define ADD_R14_TO_PTR_ECX_(VALUE) add qword ptr [ecx + VALUE], r14
#define ADD_R14_TO_PTR_EDX_(VALUE) add qword ptr [edx + VALUE], r14
#define ADD_R14_TO_PTR_EDI_(VALUE) add qword ptr [edi + VALUE], r14
#define ADD_R14_TO_PTR_ESI_(VALUE) add qword ptr [esi + VALUE], r14
#define ADD_R14_TO_PTR_EBP_(VALUE) add qword ptr [ebp + VALUE], r14
#define ADD_R14_TO_PTR_ESP_(VALUE) add qword ptr [esp + VALUE], r14

#define ADD_R15_TO_PTR_RAX_(VALUE) add qword ptr [rax + VALUE], r15
#define ADD_R15_TO_PTR_RBX_(VALUE) add qword ptr [rbx + VALUE], r15
#define ADD_R15_TO_PTR_RCX_(VALUE) add qword ptr [rcx + VALUE], r15
#define ADD_R15_TO_PTR_RDX_(VALUE) add qword ptr [rdx + VALUE], r15
#define ADD_R15_TO_PTR_RDI_(VALUE) add qword ptr [rdi + VALUE], r15
#define ADD_R15_TO_PTR_RSI_(VALUE) add qword ptr [rsi + VALUE], r15
#define ADD_R15_TO_PTR_RBP_(VALUE) add qword ptr [rbp + VALUE], r15
#define ADD_R15_TO_PTR_RSP_(VALUE) add qword ptr [rsp + VALUE], r15
#define ADD_R15_TO_PTR_R8_(VALUE) add qword ptr [r8 + VALUE], r15
#define ADD_R15_TO_PTR_R9_(VALUE) add qword ptr [r9 + VALUE], r15
#define ADD_R15_TO_PTR_R10_(VALUE) add qword ptr [r10 + VALUE], r15
#define ADD_R15_TO_PTR_R11_(VALUE) add qword ptr [r11 + VALUE], r15
#define ADD_R15_TO_PTR_R12_(VALUE) add qword ptr [r12 + VALUE], r15
#define ADD_R15_TO_PTR_R13_(VALUE) add qword ptr [r13 + VALUE], r15
#define ADD_R15_TO_PTR_R14_(VALUE) add qword ptr [r14 + VALUE], r15
#define ADD_R15_TO_PTR_R15_(VALUE) add qword ptr [r15 + VALUE], r15
#define ADD_R15_TO_PTR_EAX_(VALUE) add qword ptr [eax + VALUE], r15
#define ADD_R15_TO_PTR_EBX_(VALUE) add qword ptr [ebx + VALUE], r15
#define ADD_R15_TO_PTR_ECX_(VALUE) add qword ptr [ecx + VALUE], r15
#define ADD_R15_TO_PTR_EDX_(VALUE) add qword ptr [edx + VALUE], r15
#define ADD_R15_TO_PTR_EDI_(VALUE) add qword ptr [edi + VALUE], r15
#define ADD_R15_TO_PTR_ESI_(VALUE) add qword ptr [esi + VALUE], r15
#define ADD_R15_TO_PTR_EBP_(VALUE) add qword ptr [ebp + VALUE], r15
#define ADD_R15_TO_PTR_ESP_(VALUE) add qword ptr [esp + VALUE], r15
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
