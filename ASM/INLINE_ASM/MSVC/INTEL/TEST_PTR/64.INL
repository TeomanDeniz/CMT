#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************* [v] 64-BIT MEMORY [v] ************************** */
#define TEST_RAX_FROM_PTR_(VALUE) test rax, qword ptr [VALUE]
#define TEST_RBX_FROM_PTR_(VALUE) test rbx, qword ptr [VALUE]
#define TEST_RCX_FROM_PTR_(VALUE) test rcx, qword ptr [VALUE]
#define TEST_RDX_FROM_PTR_(VALUE) test rdx, qword ptr [VALUE]
#define TEST_RDI_FROM_PTR_(VALUE) test rdi, qword ptr [VALUE]
#define TEST_RSI_FROM_PTR_(VALUE) test rsi, qword ptr [VALUE]
#define TEST_RBP_FROM_PTR_(VALUE) test rbp, qword ptr [VALUE]
#define TEST_RSP_FROM_PTR_(VALUE) test rsp, qword ptr [VALUE]
#define TEST_R8_FROM_PTR_(VALUE) test r8, qword ptr [VALUE]
#define TEST_R9_FROM_PTR_(VALUE) test r9, qword ptr [VALUE]
#define TEST_R10_FROM_PTR_(VALUE) test r10, qword ptr [VALUE]
#define TEST_R11_FROM_PTR_(VALUE) test r11, qword ptr [VALUE]
#define TEST_R12_FROM_PTR_(VALUE) test r12, qword ptr [VALUE]
#define TEST_R13_FROM_PTR_(VALUE) test r13, qword ptr [VALUE]
#define TEST_R14_FROM_PTR_(VALUE) test r14, qword ptr [VALUE]
#define TEST_R15_FROM_PTR_(VALUE) test r15, qword ptr [VALUE]

#define TEST_RAX_TO_PTR_(VALUE) test qword ptr [VALUE], rax
#define TEST_RBX_TO_PTR_(VALUE) test qword ptr [VALUE], rbx
#define TEST_RCX_TO_PTR_(VALUE) test qword ptr [VALUE], rcx
#define TEST_RDX_TO_PTR_(VALUE) test qword ptr [VALUE], rdx
#define TEST_RDI_TO_PTR_(VALUE) test qword ptr [VALUE], rdi
#define TEST_RSI_TO_PTR_(VALUE) test qword ptr [VALUE], rsi
#define TEST_RBP_TO_PTR_(VALUE) test qword ptr [VALUE], rbp
#define TEST_RSP_TO_PTR_(VALUE) test qword ptr [VALUE], rsp
#define TEST_R8_TO_PTR_(VALUE) test qword ptr [VALUE], r8
#define TEST_R9_TO_PTR_(VALUE) test qword ptr [VALUE], r9
#define TEST_R10_TO_PTR_(VALUE) test qword ptr [VALUE], r10
#define TEST_R11_TO_PTR_(VALUE) test qword ptr [VALUE], r11
#define TEST_R12_TO_PTR_(VALUE) test qword ptr [VALUE], r12
#define TEST_R13_TO_PTR_(VALUE) test qword ptr [VALUE], r13
#define TEST_R14_TO_PTR_(VALUE) test qword ptr [VALUE], r14
#define TEST_R15_TO_PTR_(VALUE) test qword ptr [VALUE], r15

#define TEST_RAX_FROM_PTR_RAX test rax, qword ptr [rax]
#define TEST_RAX_FROM_PTR_RBX test rax, qword ptr [rbx]
#define TEST_RAX_FROM_PTR_RCX test rax, qword ptr [rcx]
#define TEST_RAX_FROM_PTR_RDX test rax, qword ptr [rdx]
#define TEST_RAX_FROM_PTR_RDI test rax, qword ptr [rdi]
#define TEST_RAX_FROM_PTR_RSI test rax, qword ptr [rsi]
#define TEST_RAX_FROM_PTR_RBP test rax, qword ptr [rbp]
#define TEST_RAX_FROM_PTR_RSP test rax, qword ptr [rsp]
#define TEST_RAX_FROM_PTR_R8 test rax, qword ptr [r8]
#define TEST_RAX_FROM_PTR_R9 test rax, qword ptr [r9]
#define TEST_RAX_FROM_PTR_R10 test rax, qword ptr [r10]
#define TEST_RAX_FROM_PTR_R11 test rax, qword ptr [r11]
#define TEST_RAX_FROM_PTR_R12 test rax, qword ptr [r12]
#define TEST_RAX_FROM_PTR_R13 test rax, qword ptr [r13]
#define TEST_RAX_FROM_PTR_R14 test rax, qword ptr [r14]
#define TEST_RAX_FROM_PTR_R15 test rax, qword ptr [r15]
#define TEST_RAX_FROM_PTR_EAX test rax, qword ptr [eax]
#define TEST_RAX_FROM_PTR_EBX test rax, qword ptr [ebx]
#define TEST_RAX_FROM_PTR_ECX test rax, qword ptr [ecx]
#define TEST_RAX_FROM_PTR_EDX test rax, qword ptr [edx]
#define TEST_RAX_FROM_PTR_EDI test rax, qword ptr [edi]
#define TEST_RAX_FROM_PTR_ESI test rax, qword ptr [esi]
#define TEST_RAX_FROM_PTR_EBP test rax, qword ptr [ebp]
#define TEST_RAX_FROM_PTR_ESP test rax, qword ptr [esp]

#define TEST_RBX_FROM_PTR_RAX test rbx, qword ptr [rax]
#define TEST_RBX_FROM_PTR_RBX test rbx, qword ptr [rbx]
#define TEST_RBX_FROM_PTR_RCX test rbx, qword ptr [rcx]
#define TEST_RBX_FROM_PTR_RDX test rbx, qword ptr [rdx]
#define TEST_RBX_FROM_PTR_RDI test rbx, qword ptr [rdi]
#define TEST_RBX_FROM_PTR_RSI test rbx, qword ptr [rsi]
#define TEST_RBX_FROM_PTR_RBP test rbx, qword ptr [rbp]
#define TEST_RBX_FROM_PTR_RSP test rbx, qword ptr [rsp]
#define TEST_RBX_FROM_PTR_R8 test rbx, qword ptr [r8]
#define TEST_RBX_FROM_PTR_R9 test rbx, qword ptr [r9]
#define TEST_RBX_FROM_PTR_R10 test rbx, qword ptr [r10]
#define TEST_RBX_FROM_PTR_R11 test rbx, qword ptr [r11]
#define TEST_RBX_FROM_PTR_R12 test rbx, qword ptr [r12]
#define TEST_RBX_FROM_PTR_R13 test rbx, qword ptr [r13]
#define TEST_RBX_FROM_PTR_R14 test rbx, qword ptr [r14]
#define TEST_RBX_FROM_PTR_R15 test rbx, qword ptr [r15]
#define TEST_RBX_FROM_PTR_EAX test rbx, qword ptr [eax]
#define TEST_RBX_FROM_PTR_EBX test rbx, qword ptr [ebx]
#define TEST_RBX_FROM_PTR_ECX test rbx, qword ptr [ecx]
#define TEST_RBX_FROM_PTR_EDX test rbx, qword ptr [edx]
#define TEST_RBX_FROM_PTR_EDI test rbx, qword ptr [edi]
#define TEST_RBX_FROM_PTR_ESI test rbx, qword ptr [esi]
#define TEST_RBX_FROM_PTR_EBP test rbx, qword ptr [ebp]
#define TEST_RBX_FROM_PTR_ESP test rbx, qword ptr [esp]

#define TEST_RCX_FROM_PTR_RAX test rcx, qword ptr [rax]
#define TEST_RCX_FROM_PTR_RBX test rcx, qword ptr [rbx]
#define TEST_RCX_FROM_PTR_RCX test rcx, qword ptr [rcx]
#define TEST_RCX_FROM_PTR_RDX test rcx, qword ptr [rdx]
#define TEST_RCX_FROM_PTR_RDI test rcx, qword ptr [rdi]
#define TEST_RCX_FROM_PTR_RSI test rcx, qword ptr [rsi]
#define TEST_RCX_FROM_PTR_RBP test rcx, qword ptr [rbp]
#define TEST_RCX_FROM_PTR_RSP test rcx, qword ptr [rsp]
#define TEST_RCX_FROM_PTR_R8 test rcx, qword ptr [r8]
#define TEST_RCX_FROM_PTR_R9 test rcx, qword ptr [r9]
#define TEST_RCX_FROM_PTR_R10 test rcx, qword ptr [r10]
#define TEST_RCX_FROM_PTR_R11 test rcx, qword ptr [r11]
#define TEST_RCX_FROM_PTR_R12 test rcx, qword ptr [r12]
#define TEST_RCX_FROM_PTR_R13 test rcx, qword ptr [r13]
#define TEST_RCX_FROM_PTR_R14 test rcx, qword ptr [r14]
#define TEST_RCX_FROM_PTR_R15 test rcx, qword ptr [r15]
#define TEST_RCX_FROM_PTR_EAX test rcx, qword ptr [eax]
#define TEST_RCX_FROM_PTR_EBX test rcx, qword ptr [ebx]
#define TEST_RCX_FROM_PTR_ECX test rcx, qword ptr [ecx]
#define TEST_RCX_FROM_PTR_EDX test rcx, qword ptr [edx]
#define TEST_RCX_FROM_PTR_EDI test rcx, qword ptr [edi]
#define TEST_RCX_FROM_PTR_ESI test rcx, qword ptr [esi]
#define TEST_RCX_FROM_PTR_EBP test rcx, qword ptr [ebp]
#define TEST_RCX_FROM_PTR_ESP test rcx, qword ptr [esp]

#define TEST_RDX_FROM_PTR_RAX test rdx, qword ptr [rax]
#define TEST_RDX_FROM_PTR_RBX test rdx, qword ptr [rbx]
#define TEST_RDX_FROM_PTR_RCX test rdx, qword ptr [rcx]
#define TEST_RDX_FROM_PTR_RDX test rdx, qword ptr [rdx]
#define TEST_RDX_FROM_PTR_RDI test rdx, qword ptr [rdi]
#define TEST_RDX_FROM_PTR_RSI test rdx, qword ptr [rsi]
#define TEST_RDX_FROM_PTR_RBP test rdx, qword ptr [rbp]
#define TEST_RDX_FROM_PTR_RSP test rdx, qword ptr [rsp]
#define TEST_RDX_FROM_PTR_R8 test rdx, qword ptr [r8]
#define TEST_RDX_FROM_PTR_R9 test rdx, qword ptr [r9]
#define TEST_RDX_FROM_PTR_R10 test rdx, qword ptr [r10]
#define TEST_RDX_FROM_PTR_R11 test rdx, qword ptr [r11]
#define TEST_RDX_FROM_PTR_R12 test rdx, qword ptr [r12]
#define TEST_RDX_FROM_PTR_R13 test rdx, qword ptr [r13]
#define TEST_RDX_FROM_PTR_R14 test rdx, qword ptr [r14]
#define TEST_RDX_FROM_PTR_R15 test rdx, qword ptr [r15]
#define TEST_RDX_FROM_PTR_EAX test rdx, qword ptr [eax]
#define TEST_RDX_FROM_PTR_EBX test rdx, qword ptr [ebx]
#define TEST_RDX_FROM_PTR_ECX test rdx, qword ptr [ecx]
#define TEST_RDX_FROM_PTR_EDX test rdx, qword ptr [edx]
#define TEST_RDX_FROM_PTR_EDI test rdx, qword ptr [edi]
#define TEST_RDX_FROM_PTR_ESI test rdx, qword ptr [esi]
#define TEST_RDX_FROM_PTR_EBP test rdx, qword ptr [ebp]
#define TEST_RDX_FROM_PTR_ESP test rdx, qword ptr [esp]

#define TEST_RDI_FROM_PTR_RAX test rdi, qword ptr [rax]
#define TEST_RDI_FROM_PTR_RBX test rdi, qword ptr [rbx]
#define TEST_RDI_FROM_PTR_RCX test rdi, qword ptr [rcx]
#define TEST_RDI_FROM_PTR_RDX test rdi, qword ptr [rdx]
#define TEST_RDI_FROM_PTR_RDI test rdi, qword ptr [rdi]
#define TEST_RDI_FROM_PTR_RSI test rdi, qword ptr [rsi]
#define TEST_RDI_FROM_PTR_RBP test rdi, qword ptr [rbp]
#define TEST_RDI_FROM_PTR_RSP test rdi, qword ptr [rsp]
#define TEST_RDI_FROM_PTR_R8 test rdi, qword ptr [r8]
#define TEST_RDI_FROM_PTR_R9 test rdi, qword ptr [r9]
#define TEST_RDI_FROM_PTR_R10 test rdi, qword ptr [r10]
#define TEST_RDI_FROM_PTR_R11 test rdi, qword ptr [r11]
#define TEST_RDI_FROM_PTR_R12 test rdi, qword ptr [r12]
#define TEST_RDI_FROM_PTR_R13 test rdi, qword ptr [r13]
#define TEST_RDI_FROM_PTR_R14 test rdi, qword ptr [r14]
#define TEST_RDI_FROM_PTR_R15 test rdi, qword ptr [r15]
#define TEST_RDI_FROM_PTR_EAX test rdi, qword ptr [eax]
#define TEST_RDI_FROM_PTR_EBX test rdi, qword ptr [ebx]
#define TEST_RDI_FROM_PTR_ECX test rdi, qword ptr [ecx]
#define TEST_RDI_FROM_PTR_EDX test rdi, qword ptr [edx]
#define TEST_RDI_FROM_PTR_EDI test rdi, qword ptr [edi]
#define TEST_RDI_FROM_PTR_ESI test rdi, qword ptr [esi]
#define TEST_RDI_FROM_PTR_EBP test rdi, qword ptr [ebp]
#define TEST_RDI_FROM_PTR_ESP test rdi, qword ptr [esp]

#define TEST_RSI_FROM_PTR_RAX test rsi, qword ptr [rax]
#define TEST_RSI_FROM_PTR_RBX test rsi, qword ptr [rbx]
#define TEST_RSI_FROM_PTR_RCX test rsi, qword ptr [rcx]
#define TEST_RSI_FROM_PTR_RDX test rsi, qword ptr [rdx]
#define TEST_RSI_FROM_PTR_RDI test rsi, qword ptr [rdi]
#define TEST_RSI_FROM_PTR_RSI test rsi, qword ptr [rsi]
#define TEST_RSI_FROM_PTR_RBP test rsi, qword ptr [rbp]
#define TEST_RSI_FROM_PTR_RSP test rsi, qword ptr [rsp]
#define TEST_RSI_FROM_PTR_R8 test rsi, qword ptr [r8]
#define TEST_RSI_FROM_PTR_R9 test rsi, qword ptr [r9]
#define TEST_RSI_FROM_PTR_R10 test rsi, qword ptr [r10]
#define TEST_RSI_FROM_PTR_R11 test rsi, qword ptr [r11]
#define TEST_RSI_FROM_PTR_R12 test rsi, qword ptr [r12]
#define TEST_RSI_FROM_PTR_R13 test rsi, qword ptr [r13]
#define TEST_RSI_FROM_PTR_R14 test rsi, qword ptr [r14]
#define TEST_RSI_FROM_PTR_R15 test rsi, qword ptr [r15]
#define TEST_RSI_FROM_PTR_EAX test rsi, qword ptr [eax]
#define TEST_RSI_FROM_PTR_EBX test rsi, qword ptr [ebx]
#define TEST_RSI_FROM_PTR_ECX test rsi, qword ptr [ecx]
#define TEST_RSI_FROM_PTR_EDX test rsi, qword ptr [edx]
#define TEST_RSI_FROM_PTR_EDI test rsi, qword ptr [edi]
#define TEST_RSI_FROM_PTR_ESI test rsi, qword ptr [esi]
#define TEST_RSI_FROM_PTR_EBP test rsi, qword ptr [ebp]
#define TEST_RSI_FROM_PTR_ESP test rsi, qword ptr [esp]

#define TEST_RBP_FROM_PTR_RAX test rbp, qword ptr [rax]
#define TEST_RBP_FROM_PTR_RBX test rbp, qword ptr [rbx]
#define TEST_RBP_FROM_PTR_RCX test rbp, qword ptr [rcx]
#define TEST_RBP_FROM_PTR_RDX test rbp, qword ptr [rdx]
#define TEST_RBP_FROM_PTR_RDI test rbp, qword ptr [rdi]
#define TEST_RBP_FROM_PTR_RSI test rbp, qword ptr [rsi]
#define TEST_RBP_FROM_PTR_RBP test rbp, qword ptr [rbp]
#define TEST_RBP_FROM_PTR_RSP test rbp, qword ptr [rsp]
#define TEST_RBP_FROM_PTR_R8 test rbp, qword ptr [r8]
#define TEST_RBP_FROM_PTR_R9 test rbp, qword ptr [r9]
#define TEST_RBP_FROM_PTR_R10 test rbp, qword ptr [r10]
#define TEST_RBP_FROM_PTR_R11 test rbp, qword ptr [r11]
#define TEST_RBP_FROM_PTR_R12 test rbp, qword ptr [r12]
#define TEST_RBP_FROM_PTR_R13 test rbp, qword ptr [r13]
#define TEST_RBP_FROM_PTR_R14 test rbp, qword ptr [r14]
#define TEST_RBP_FROM_PTR_R15 test rbp, qword ptr [r15]
#define TEST_RBP_FROM_PTR_EAX test rbp, qword ptr [eax]
#define TEST_RBP_FROM_PTR_EBX test rbp, qword ptr [ebx]
#define TEST_RBP_FROM_PTR_ECX test rbp, qword ptr [ecx]
#define TEST_RBP_FROM_PTR_EDX test rbp, qword ptr [edx]
#define TEST_RBP_FROM_PTR_EDI test rbp, qword ptr [edi]
#define TEST_RBP_FROM_PTR_ESI test rbp, qword ptr [esi]
#define TEST_RBP_FROM_PTR_EBP test rbp, qword ptr [ebp]
#define TEST_RBP_FROM_PTR_ESP test rbp, qword ptr [esp]

#define TEST_RSP_FROM_PTR_RAX test rsp, qword ptr [rax]
#define TEST_RSP_FROM_PTR_RBX test rsp, qword ptr [rbx]
#define TEST_RSP_FROM_PTR_RCX test rsp, qword ptr [rcx]
#define TEST_RSP_FROM_PTR_RDX test rsp, qword ptr [rdx]
#define TEST_RSP_FROM_PTR_RDI test rsp, qword ptr [rdi]
#define TEST_RSP_FROM_PTR_RSI test rsp, qword ptr [rsi]
#define TEST_RSP_FROM_PTR_RBP test rsp, qword ptr [rbp]
#define TEST_RSP_FROM_PTR_RSP test rsp, qword ptr [rsp]
#define TEST_RSP_FROM_PTR_R8 test rsp, qword ptr [r8]
#define TEST_RSP_FROM_PTR_R9 test rsp, qword ptr [r9]
#define TEST_RSP_FROM_PTR_R10 test rsp, qword ptr [r10]
#define TEST_RSP_FROM_PTR_R11 test rsp, qword ptr [r11]
#define TEST_RSP_FROM_PTR_R12 test rsp, qword ptr [r12]
#define TEST_RSP_FROM_PTR_R13 test rsp, qword ptr [r13]
#define TEST_RSP_FROM_PTR_R14 test rsp, qword ptr [r14]
#define TEST_RSP_FROM_PTR_R15 test rsp, qword ptr [r15]
#define TEST_RSP_FROM_PTR_EAX test rsp, qword ptr [eax]
#define TEST_RSP_FROM_PTR_EBX test rsp, qword ptr [ebx]
#define TEST_RSP_FROM_PTR_ECX test rsp, qword ptr [ecx]
#define TEST_RSP_FROM_PTR_EDX test rsp, qword ptr [edx]
#define TEST_RSP_FROM_PTR_EDI test rsp, qword ptr [edi]
#define TEST_RSP_FROM_PTR_ESI test rsp, qword ptr [esi]
#define TEST_RSP_FROM_PTR_EBP test rsp, qword ptr [ebp]
#define TEST_RSP_FROM_PTR_ESP test rsp, qword ptr [esp]

#define TEST_R8_FROM_PTR_RAX test r8, qword ptr [rax]
#define TEST_R8_FROM_PTR_RBX test r8, qword ptr [rbx]
#define TEST_R8_FROM_PTR_RCX test r8, qword ptr [rcx]
#define TEST_R8_FROM_PTR_RDX test r8, qword ptr [rdx]
#define TEST_R8_FROM_PTR_RDI test r8, qword ptr [rdi]
#define TEST_R8_FROM_PTR_RSI test r8, qword ptr [rsi]
#define TEST_R8_FROM_PTR_RBP test r8, qword ptr [rbp]
#define TEST_R8_FROM_PTR_RSP test r8, qword ptr [rsp]
#define TEST_R8_FROM_PTR_R8 test r8, qword ptr [r8]
#define TEST_R8_FROM_PTR_R9 test r8, qword ptr [r9]
#define TEST_R8_FROM_PTR_R10 test r8, qword ptr [r10]
#define TEST_R8_FROM_PTR_R11 test r8, qword ptr [r11]
#define TEST_R8_FROM_PTR_R12 test r8, qword ptr [r12]
#define TEST_R8_FROM_PTR_R13 test r8, qword ptr [r13]
#define TEST_R8_FROM_PTR_R14 test r8, qword ptr [r14]
#define TEST_R8_FROM_PTR_R15 test r8, qword ptr [r15]
#define TEST_R8_FROM_PTR_EAX test r8, qword ptr [eax]
#define TEST_R8_FROM_PTR_EBX test r8, qword ptr [ebx]
#define TEST_R8_FROM_PTR_ECX test r8, qword ptr [ecx]
#define TEST_R8_FROM_PTR_EDX test r8, qword ptr [edx]
#define TEST_R8_FROM_PTR_EDI test r8, qword ptr [edi]
#define TEST_R8_FROM_PTR_ESI test r8, qword ptr [esi]
#define TEST_R8_FROM_PTR_EBP test r8, qword ptr [ebp]
#define TEST_R8_FROM_PTR_ESP test r8, qword ptr [esp]

#define TEST_R9_FROM_PTR_RAX test r9, qword ptr [rax]
#define TEST_R9_FROM_PTR_RBX test r9, qword ptr [rbx]
#define TEST_R9_FROM_PTR_RCX test r9, qword ptr [rcx]
#define TEST_R9_FROM_PTR_RDX test r9, qword ptr [rdx]
#define TEST_R9_FROM_PTR_RDI test r9, qword ptr [rdi]
#define TEST_R9_FROM_PTR_RSI test r9, qword ptr [rsi]
#define TEST_R9_FROM_PTR_RBP test r9, qword ptr [rbp]
#define TEST_R9_FROM_PTR_RSP test r9, qword ptr [rsp]
#define TEST_R9_FROM_PTR_R8 test r9, qword ptr [r8]
#define TEST_R9_FROM_PTR_R9 test r9, qword ptr [r9]
#define TEST_R9_FROM_PTR_R10 test r9, qword ptr [r10]
#define TEST_R9_FROM_PTR_R11 test r9, qword ptr [r11]
#define TEST_R9_FROM_PTR_R12 test r9, qword ptr [r12]
#define TEST_R9_FROM_PTR_R13 test r9, qword ptr [r13]
#define TEST_R9_FROM_PTR_R14 test r9, qword ptr [r14]
#define TEST_R9_FROM_PTR_R15 test r9, qword ptr [r15]
#define TEST_R9_FROM_PTR_EAX test r9, qword ptr [eax]
#define TEST_R9_FROM_PTR_EBX test r9, qword ptr [ebx]
#define TEST_R9_FROM_PTR_ECX test r9, qword ptr [ecx]
#define TEST_R9_FROM_PTR_EDX test r9, qword ptr [edx]
#define TEST_R9_FROM_PTR_EDI test r9, qword ptr [edi]
#define TEST_R9_FROM_PTR_ESI test r9, qword ptr [esi]
#define TEST_R9_FROM_PTR_EBP test r9, qword ptr [ebp]
#define TEST_R9_FROM_PTR_ESP test r9, qword ptr [esp]

#define TEST_R10_FROM_PTR_RAX test r10, qword ptr [rax]
#define TEST_R10_FROM_PTR_RBX test r10, qword ptr [rbx]
#define TEST_R10_FROM_PTR_RCX test r10, qword ptr [rcx]
#define TEST_R10_FROM_PTR_RDX test r10, qword ptr [rdx]
#define TEST_R10_FROM_PTR_RDI test r10, qword ptr [rdi]
#define TEST_R10_FROM_PTR_RSI test r10, qword ptr [rsi]
#define TEST_R10_FROM_PTR_RBP test r10, qword ptr [rbp]
#define TEST_R10_FROM_PTR_RSP test r10, qword ptr [rsp]
#define TEST_R10_FROM_PTR_R8 test r10, qword ptr [r8]
#define TEST_R10_FROM_PTR_R9 test r10, qword ptr [r9]
#define TEST_R10_FROM_PTR_R10 test r10, qword ptr [r10]
#define TEST_R10_FROM_PTR_R11 test r10, qword ptr [r11]
#define TEST_R10_FROM_PTR_R12 test r10, qword ptr [r12]
#define TEST_R10_FROM_PTR_R13 test r10, qword ptr [r13]
#define TEST_R10_FROM_PTR_R14 test r10, qword ptr [r14]
#define TEST_R10_FROM_PTR_R15 test r10, qword ptr [r15]
#define TEST_R10_FROM_PTR_EAX test r10, qword ptr [eax]
#define TEST_R10_FROM_PTR_EBX test r10, qword ptr [ebx]
#define TEST_R10_FROM_PTR_ECX test r10, qword ptr [ecx]
#define TEST_R10_FROM_PTR_EDX test r10, qword ptr [edx]
#define TEST_R10_FROM_PTR_EDI test r10, qword ptr [edi]
#define TEST_R10_FROM_PTR_ESI test r10, qword ptr [esi]
#define TEST_R10_FROM_PTR_EBP test r10, qword ptr [ebp]
#define TEST_R10_FROM_PTR_ESP test r10, qword ptr [esp]

#define TEST_R11_FROM_PTR_RAX test r11, qword ptr [rax]
#define TEST_R11_FROM_PTR_RBX test r11, qword ptr [rbx]
#define TEST_R11_FROM_PTR_RCX test r11, qword ptr [rcx]
#define TEST_R11_FROM_PTR_RDX test r11, qword ptr [rdx]
#define TEST_R11_FROM_PTR_RDI test r11, qword ptr [rdi]
#define TEST_R11_FROM_PTR_RSI test r11, qword ptr [rsi]
#define TEST_R11_FROM_PTR_RBP test r11, qword ptr [rbp]
#define TEST_R11_FROM_PTR_RSP test r11, qword ptr [rsp]
#define TEST_R11_FROM_PTR_R8 test r11, qword ptr [r8]
#define TEST_R11_FROM_PTR_R9 test r11, qword ptr [r9]
#define TEST_R11_FROM_PTR_R10 test r11, qword ptr [r10]
#define TEST_R11_FROM_PTR_R11 test r11, qword ptr [r11]
#define TEST_R11_FROM_PTR_R12 test r11, qword ptr [r12]
#define TEST_R11_FROM_PTR_R13 test r11, qword ptr [r13]
#define TEST_R11_FROM_PTR_R14 test r11, qword ptr [r14]
#define TEST_R11_FROM_PTR_R15 test r11, qword ptr [r15]
#define TEST_R11_FROM_PTR_EAX test r11, qword ptr [eax]
#define TEST_R11_FROM_PTR_EBX test r11, qword ptr [ebx]
#define TEST_R11_FROM_PTR_ECX test r11, qword ptr [ecx]
#define TEST_R11_FROM_PTR_EDX test r11, qword ptr [edx]
#define TEST_R11_FROM_PTR_EDI test r11, qword ptr [edi]
#define TEST_R11_FROM_PTR_ESI test r11, qword ptr [esi]
#define TEST_R11_FROM_PTR_EBP test r11, qword ptr [ebp]
#define TEST_R11_FROM_PTR_ESP test r11, qword ptr [esp]

#define TEST_R12_FROM_PTR_RAX test r12, qword ptr [rax]
#define TEST_R12_FROM_PTR_RBX test r12, qword ptr [rbx]
#define TEST_R12_FROM_PTR_RCX test r12, qword ptr [rcx]
#define TEST_R12_FROM_PTR_RDX test r12, qword ptr [rdx]
#define TEST_R12_FROM_PTR_RDI test r12, qword ptr [rdi]
#define TEST_R12_FROM_PTR_RSI test r12, qword ptr [rsi]
#define TEST_R12_FROM_PTR_RBP test r12, qword ptr [rbp]
#define TEST_R12_FROM_PTR_RSP test r12, qword ptr [rsp]
#define TEST_R12_FROM_PTR_R8 test r12, qword ptr [r8]
#define TEST_R12_FROM_PTR_R9 test r12, qword ptr [r9]
#define TEST_R12_FROM_PTR_R10 test r12, qword ptr [r10]
#define TEST_R12_FROM_PTR_R11 test r12, qword ptr [r11]
#define TEST_R12_FROM_PTR_R12 test r12, qword ptr [r12]
#define TEST_R12_FROM_PTR_R13 test r12, qword ptr [r13]
#define TEST_R12_FROM_PTR_R14 test r12, qword ptr [r14]
#define TEST_R12_FROM_PTR_R15 test r12, qword ptr [r15]
#define TEST_R12_FROM_PTR_EAX test r12, qword ptr [eax]
#define TEST_R12_FROM_PTR_EBX test r12, qword ptr [ebx]
#define TEST_R12_FROM_PTR_ECX test r12, qword ptr [ecx]
#define TEST_R12_FROM_PTR_EDX test r12, qword ptr [edx]
#define TEST_R12_FROM_PTR_EDI test r12, qword ptr [edi]
#define TEST_R12_FROM_PTR_ESI test r12, qword ptr [esi]
#define TEST_R12_FROM_PTR_EBP test r12, qword ptr [ebp]
#define TEST_R12_FROM_PTR_ESP test r12, qword ptr [esp]

#define TEST_R13_FROM_PTR_RAX test r13, qword ptr [rax]
#define TEST_R13_FROM_PTR_RBX test r13, qword ptr [rbx]
#define TEST_R13_FROM_PTR_RCX test r13, qword ptr [rcx]
#define TEST_R13_FROM_PTR_RDX test r13, qword ptr [rdx]
#define TEST_R13_FROM_PTR_RDI test r13, qword ptr [rdi]
#define TEST_R13_FROM_PTR_RSI test r13, qword ptr [rsi]
#define TEST_R13_FROM_PTR_RBP test r13, qword ptr [rbp]
#define TEST_R13_FROM_PTR_RSP test r13, qword ptr [rsp]
#define TEST_R13_FROM_PTR_R8 test r13, qword ptr [r8]
#define TEST_R13_FROM_PTR_R9 test r13, qword ptr [r9]
#define TEST_R13_FROM_PTR_R10 test r13, qword ptr [r10]
#define TEST_R13_FROM_PTR_R11 test r13, qword ptr [r11]
#define TEST_R13_FROM_PTR_R12 test r13, qword ptr [r12]
#define TEST_R13_FROM_PTR_R13 test r13, qword ptr [r13]
#define TEST_R13_FROM_PTR_R14 test r13, qword ptr [r14]
#define TEST_R13_FROM_PTR_R15 test r13, qword ptr [r15]
#define TEST_R13_FROM_PTR_EAX test r13, qword ptr [eax]
#define TEST_R13_FROM_PTR_EBX test r13, qword ptr [ebx]
#define TEST_R13_FROM_PTR_ECX test r13, qword ptr [ecx]
#define TEST_R13_FROM_PTR_EDX test r13, qword ptr [edx]
#define TEST_R13_FROM_PTR_EDI test r13, qword ptr [edi]
#define TEST_R13_FROM_PTR_ESI test r13, qword ptr [esi]
#define TEST_R13_FROM_PTR_EBP test r13, qword ptr [ebp]
#define TEST_R13_FROM_PTR_ESP test r13, qword ptr [esp]

#define TEST_R14_FROM_PTR_RAX test r14, qword ptr [rax]
#define TEST_R14_FROM_PTR_RBX test r14, qword ptr [rbx]
#define TEST_R14_FROM_PTR_RCX test r14, qword ptr [rcx]
#define TEST_R14_FROM_PTR_RDX test r14, qword ptr [rdx]
#define TEST_R14_FROM_PTR_RDI test r14, qword ptr [rdi]
#define TEST_R14_FROM_PTR_RSI test r14, qword ptr [rsi]
#define TEST_R14_FROM_PTR_RBP test r14, qword ptr [rbp]
#define TEST_R14_FROM_PTR_RSP test r14, qword ptr [rsp]
#define TEST_R14_FROM_PTR_R8 test r14, qword ptr [r8]
#define TEST_R14_FROM_PTR_R9 test r14, qword ptr [r9]
#define TEST_R14_FROM_PTR_R10 test r14, qword ptr [r10]
#define TEST_R14_FROM_PTR_R11 test r14, qword ptr [r11]
#define TEST_R14_FROM_PTR_R12 test r14, qword ptr [r12]
#define TEST_R14_FROM_PTR_R13 test r14, qword ptr [r13]
#define TEST_R14_FROM_PTR_R14 test r14, qword ptr [r14]
#define TEST_R14_FROM_PTR_R15 test r14, qword ptr [r15]
#define TEST_R14_FROM_PTR_EAX test r14, qword ptr [eax]
#define TEST_R14_FROM_PTR_EBX test r14, qword ptr [ebx]
#define TEST_R14_FROM_PTR_ECX test r14, qword ptr [ecx]
#define TEST_R14_FROM_PTR_EDX test r14, qword ptr [edx]
#define TEST_R14_FROM_PTR_EDI test r14, qword ptr [edi]
#define TEST_R14_FROM_PTR_ESI test r14, qword ptr [esi]
#define TEST_R14_FROM_PTR_EBP test r14, qword ptr [ebp]
#define TEST_R14_FROM_PTR_ESP test r14, qword ptr [esp]

#define TEST_R15_FROM_PTR_RAX test r15, qword ptr [rax]
#define TEST_R15_FROM_PTR_RBX test r15, qword ptr [rbx]
#define TEST_R15_FROM_PTR_RCX test r15, qword ptr [rcx]
#define TEST_R15_FROM_PTR_RDX test r15, qword ptr [rdx]
#define TEST_R15_FROM_PTR_RDI test r15, qword ptr [rdi]
#define TEST_R15_FROM_PTR_RSI test r15, qword ptr [rsi]
#define TEST_R15_FROM_PTR_RBP test r15, qword ptr [rbp]
#define TEST_R15_FROM_PTR_RSP test r15, qword ptr [rsp]
#define TEST_R15_FROM_PTR_R8 test r15, qword ptr [r8]
#define TEST_R15_FROM_PTR_R9 test r15, qword ptr [r9]
#define TEST_R15_FROM_PTR_R10 test r15, qword ptr [r10]
#define TEST_R15_FROM_PTR_R11 test r15, qword ptr [r11]
#define TEST_R15_FROM_PTR_R12 test r15, qword ptr [r12]
#define TEST_R15_FROM_PTR_R13 test r15, qword ptr [r13]
#define TEST_R15_FROM_PTR_R14 test r15, qword ptr [r14]
#define TEST_R15_FROM_PTR_R15 test r15, qword ptr [r15]
#define TEST_R15_FROM_PTR_EAX test r15, qword ptr [eax]
#define TEST_R15_FROM_PTR_EBX test r15, qword ptr [ebx]
#define TEST_R15_FROM_PTR_ECX test r15, qword ptr [ecx]
#define TEST_R15_FROM_PTR_EDX test r15, qword ptr [edx]
#define TEST_R15_FROM_PTR_EDI test r15, qword ptr [edi]
#define TEST_R15_FROM_PTR_ESI test r15, qword ptr [esi]
#define TEST_R15_FROM_PTR_EBP test r15, qword ptr [ebp]
#define TEST_R15_FROM_PTR_ESP test r15, qword ptr [esp]

#define TEST_RAX_TO_PTR_RAX test qword ptr [rax], rax
#define TEST_RAX_TO_PTR_RBX test qword ptr [rbx], rax
#define TEST_RAX_TO_PTR_RCX test qword ptr [rcx], rax
#define TEST_RAX_TO_PTR_RDX test qword ptr [rdx], rax
#define TEST_RAX_TO_PTR_RDI test qword ptr [rdi], rax
#define TEST_RAX_TO_PTR_RSI test qword ptr [rsi], rax
#define TEST_RAX_TO_PTR_RBP test qword ptr [rbp], rax
#define TEST_RAX_TO_PTR_RSP test qword ptr [rsp], rax
#define TEST_RAX_TO_PTR_R8 test qword ptr [r8], rax
#define TEST_RAX_TO_PTR_R9 test qword ptr [r9], rax
#define TEST_RAX_TO_PTR_R10 test qword ptr [r10], rax
#define TEST_RAX_TO_PTR_R11 test qword ptr [r11], rax
#define TEST_RAX_TO_PTR_R12 test qword ptr [r12], rax
#define TEST_RAX_TO_PTR_R13 test qword ptr [r13], rax
#define TEST_RAX_TO_PTR_R14 test qword ptr [r14], rax
#define TEST_RAX_TO_PTR_R15 test qword ptr [r15], rax
#define TEST_RAX_TO_PTR_EAX test qword ptr [eax], rax
#define TEST_RAX_TO_PTR_EBX test qword ptr [ebx], rax
#define TEST_RAX_TO_PTR_ECX test qword ptr [ecx], rax
#define TEST_RAX_TO_PTR_EDX test qword ptr [edx], rax
#define TEST_RAX_TO_PTR_EDI test qword ptr [edi], rax
#define TEST_RAX_TO_PTR_ESI test qword ptr [esi], rax
#define TEST_RAX_TO_PTR_EBP test qword ptr [ebp], rax
#define TEST_RAX_TO_PTR_ESP test qword ptr [esp], rax

#define TEST_RBX_TO_PTR_RAX test qword ptr [rax], rbx
#define TEST_RBX_TO_PTR_RBX test qword ptr [rbx], rbx
#define TEST_RBX_TO_PTR_RCX test qword ptr [rcx], rbx
#define TEST_RBX_TO_PTR_RDX test qword ptr [rdx], rbx
#define TEST_RBX_TO_PTR_RDI test qword ptr [rdi], rbx
#define TEST_RBX_TO_PTR_RSI test qword ptr [rsi], rbx
#define TEST_RBX_TO_PTR_RBP test qword ptr [rbp], rbx
#define TEST_RBX_TO_PTR_RSP test qword ptr [rsp], rbx
#define TEST_RBX_TO_PTR_R8 test qword ptr [r8], rbx
#define TEST_RBX_TO_PTR_R9 test qword ptr [r9], rbx
#define TEST_RBX_TO_PTR_R10 test qword ptr [r10], rbx
#define TEST_RBX_TO_PTR_R11 test qword ptr [r11], rbx
#define TEST_RBX_TO_PTR_R12 test qword ptr [r12], rbx
#define TEST_RBX_TO_PTR_R13 test qword ptr [r13], rbx
#define TEST_RBX_TO_PTR_R14 test qword ptr [r14], rbx
#define TEST_RBX_TO_PTR_R15 test qword ptr [r15], rbx
#define TEST_RBX_TO_PTR_EAX test qword ptr [eax], rbx
#define TEST_RBX_TO_PTR_EBX test qword ptr [ebx], rbx
#define TEST_RBX_TO_PTR_ECX test qword ptr [ecx], rbx
#define TEST_RBX_TO_PTR_EDX test qword ptr [edx], rbx
#define TEST_RBX_TO_PTR_EDI test qword ptr [edi], rbx
#define TEST_RBX_TO_PTR_ESI test qword ptr [esi], rbx
#define TEST_RBX_TO_PTR_EBP test qword ptr [ebp], rbx
#define TEST_RBX_TO_PTR_ESP test qword ptr [esp], rbx

#define TEST_RCX_TO_PTR_RAX test qword ptr [rax], rcx
#define TEST_RCX_TO_PTR_RBX test qword ptr [rbx], rcx
#define TEST_RCX_TO_PTR_RCX test qword ptr [rcx], rcx
#define TEST_RCX_TO_PTR_RDX test qword ptr [rdx], rcx
#define TEST_RCX_TO_PTR_RDI test qword ptr [rdi], rcx
#define TEST_RCX_TO_PTR_RSI test qword ptr [rsi], rcx
#define TEST_RCX_TO_PTR_RBP test qword ptr [rbp], rcx
#define TEST_RCX_TO_PTR_RSP test qword ptr [rsp], rcx
#define TEST_RCX_TO_PTR_R8 test qword ptr [r8], rcx
#define TEST_RCX_TO_PTR_R9 test qword ptr [r9], rcx
#define TEST_RCX_TO_PTR_R10 test qword ptr [r10], rcx
#define TEST_RCX_TO_PTR_R11 test qword ptr [r11], rcx
#define TEST_RCX_TO_PTR_R12 test qword ptr [r12], rcx
#define TEST_RCX_TO_PTR_R13 test qword ptr [r13], rcx
#define TEST_RCX_TO_PTR_R14 test qword ptr [r14], rcx
#define TEST_RCX_TO_PTR_R15 test qword ptr [r15], rcx
#define TEST_RCX_TO_PTR_EAX test qword ptr [eax], rcx
#define TEST_RCX_TO_PTR_EBX test qword ptr [ebx], rcx
#define TEST_RCX_TO_PTR_ECX test qword ptr [ecx], rcx
#define TEST_RCX_TO_PTR_EDX test qword ptr [edx], rcx
#define TEST_RCX_TO_PTR_EDI test qword ptr [edi], rcx
#define TEST_RCX_TO_PTR_ESI test qword ptr [esi], rcx
#define TEST_RCX_TO_PTR_EBP test qword ptr [ebp], rcx
#define TEST_RCX_TO_PTR_ESP test qword ptr [esp], rcx

#define TEST_RDX_TO_PTR_RAX test qword ptr [rax], rdx
#define TEST_RDX_TO_PTR_RBX test qword ptr [rbx], rdx
#define TEST_RDX_TO_PTR_RCX test qword ptr [rcx], rdx
#define TEST_RDX_TO_PTR_RDX test qword ptr [rdx], rdx
#define TEST_RDX_TO_PTR_RDI test qword ptr [rdi], rdx
#define TEST_RDX_TO_PTR_RSI test qword ptr [rsi], rdx
#define TEST_RDX_TO_PTR_RBP test qword ptr [rbp], rdx
#define TEST_RDX_TO_PTR_RSP test qword ptr [rsp], rdx
#define TEST_RDX_TO_PTR_R8 test qword ptr [r8], rdx
#define TEST_RDX_TO_PTR_R9 test qword ptr [r9], rdx
#define TEST_RDX_TO_PTR_R10 test qword ptr [r10], rdx
#define TEST_RDX_TO_PTR_R11 test qword ptr [r11], rdx
#define TEST_RDX_TO_PTR_R12 test qword ptr [r12], rdx
#define TEST_RDX_TO_PTR_R13 test qword ptr [r13], rdx
#define TEST_RDX_TO_PTR_R14 test qword ptr [r14], rdx
#define TEST_RDX_TO_PTR_R15 test qword ptr [r15], rdx
#define TEST_RDX_TO_PTR_EAX test qword ptr [eax], rdx
#define TEST_RDX_TO_PTR_EBX test qword ptr [ebx], rdx
#define TEST_RDX_TO_PTR_ECX test qword ptr [ecx], rdx
#define TEST_RDX_TO_PTR_EDX test qword ptr [edx], rdx
#define TEST_RDX_TO_PTR_EDI test qword ptr [edi], rdx
#define TEST_RDX_TO_PTR_ESI test qword ptr [esi], rdx
#define TEST_RDX_TO_PTR_EBP test qword ptr [ebp], rdx
#define TEST_RDX_TO_PTR_ESP test qword ptr [esp], rdx

#define TEST_RDI_TO_PTR_RAX test qword ptr [rax], rdi
#define TEST_RDI_TO_PTR_RBX test qword ptr [rbx], rdi
#define TEST_RDI_TO_PTR_RCX test qword ptr [rcx], rdi
#define TEST_RDI_TO_PTR_RDX test qword ptr [rdx], rdi
#define TEST_RDI_TO_PTR_RDI test qword ptr [rdi], rdi
#define TEST_RDI_TO_PTR_RSI test qword ptr [rsi], rdi
#define TEST_RDI_TO_PTR_RBP test qword ptr [rbp], rdi
#define TEST_RDI_TO_PTR_RSP test qword ptr [rsp], rdi
#define TEST_RDI_TO_PTR_R8 test qword ptr [r8], rdi
#define TEST_RDI_TO_PTR_R9 test qword ptr [r9], rdi
#define TEST_RDI_TO_PTR_R10 test qword ptr [r10], rdi
#define TEST_RDI_TO_PTR_R11 test qword ptr [r11], rdi
#define TEST_RDI_TO_PTR_R12 test qword ptr [r12], rdi
#define TEST_RDI_TO_PTR_R13 test qword ptr [r13], rdi
#define TEST_RDI_TO_PTR_R14 test qword ptr [r14], rdi
#define TEST_RDI_TO_PTR_R15 test qword ptr [r15], rdi
#define TEST_RDI_TO_PTR_EAX test qword ptr [eax], rdi
#define TEST_RDI_TO_PTR_EBX test qword ptr [ebx], rdi
#define TEST_RDI_TO_PTR_ECX test qword ptr [ecx], rdi
#define TEST_RDI_TO_PTR_EDX test qword ptr [edx], rdi
#define TEST_RDI_TO_PTR_EDI test qword ptr [edi], rdi
#define TEST_RDI_TO_PTR_ESI test qword ptr [esi], rdi
#define TEST_RDI_TO_PTR_EBP test qword ptr [ebp], rdi
#define TEST_RDI_TO_PTR_ESP test qword ptr [esp], rdi

#define TEST_RSI_TO_PTR_RAX test qword ptr [rax], rsi
#define TEST_RSI_TO_PTR_RBX test qword ptr [rbx], rsi
#define TEST_RSI_TO_PTR_RCX test qword ptr [rcx], rsi
#define TEST_RSI_TO_PTR_RDX test qword ptr [rdx], rsi
#define TEST_RSI_TO_PTR_RDI test qword ptr [rdi], rsi
#define TEST_RSI_TO_PTR_RSI test qword ptr [rsi], rsi
#define TEST_RSI_TO_PTR_RBP test qword ptr [rbp], rsi
#define TEST_RSI_TO_PTR_RSP test qword ptr [rsp], rsi
#define TEST_RSI_TO_PTR_R8 test qword ptr [r8], rsi
#define TEST_RSI_TO_PTR_R9 test qword ptr [r9], rsi
#define TEST_RSI_TO_PTR_R10 test qword ptr [r10], rsi
#define TEST_RSI_TO_PTR_R11 test qword ptr [r11], rsi
#define TEST_RSI_TO_PTR_R12 test qword ptr [r12], rsi
#define TEST_RSI_TO_PTR_R13 test qword ptr [r13], rsi
#define TEST_RSI_TO_PTR_R14 test qword ptr [r14], rsi
#define TEST_RSI_TO_PTR_R15 test qword ptr [r15], rsi
#define TEST_RSI_TO_PTR_EAX test qword ptr [eax], rsi
#define TEST_RSI_TO_PTR_EBX test qword ptr [ebx], rsi
#define TEST_RSI_TO_PTR_ECX test qword ptr [ecx], rsi
#define TEST_RSI_TO_PTR_EDX test qword ptr [edx], rsi
#define TEST_RSI_TO_PTR_EDI test qword ptr [edi], rsi
#define TEST_RSI_TO_PTR_ESI test qword ptr [esi], rsi
#define TEST_RSI_TO_PTR_EBP test qword ptr [ebp], rsi
#define TEST_RSI_TO_PTR_ESP test qword ptr [esp], rsi

#define TEST_RBP_TO_PTR_RAX test qword ptr [rax], rbp
#define TEST_RBP_TO_PTR_RBX test qword ptr [rbx], rbp
#define TEST_RBP_TO_PTR_RCX test qword ptr [rcx], rbp
#define TEST_RBP_TO_PTR_RDX test qword ptr [rdx], rbp
#define TEST_RBP_TO_PTR_RDI test qword ptr [rdi], rbp
#define TEST_RBP_TO_PTR_RSI test qword ptr [rsi], rbp
#define TEST_RBP_TO_PTR_RBP test qword ptr [rbp], rbp
#define TEST_RBP_TO_PTR_RSP test qword ptr [rsp], rbp
#define TEST_RBP_TO_PTR_R8 test qword ptr [r8], rbp
#define TEST_RBP_TO_PTR_R9 test qword ptr [r9], rbp
#define TEST_RBP_TO_PTR_R10 test qword ptr [r10], rbp
#define TEST_RBP_TO_PTR_R11 test qword ptr [r11], rbp
#define TEST_RBP_TO_PTR_R12 test qword ptr [r12], rbp
#define TEST_RBP_TO_PTR_R13 test qword ptr [r13], rbp
#define TEST_RBP_TO_PTR_R14 test qword ptr [r14], rbp
#define TEST_RBP_TO_PTR_R15 test qword ptr [r15], rbp
#define TEST_RBP_TO_PTR_EAX test qword ptr [eax], rbp
#define TEST_RBP_TO_PTR_EBX test qword ptr [ebx], rbp
#define TEST_RBP_TO_PTR_ECX test qword ptr [ecx], rbp
#define TEST_RBP_TO_PTR_EDX test qword ptr [edx], rbp
#define TEST_RBP_TO_PTR_EDI test qword ptr [edi], rbp
#define TEST_RBP_TO_PTR_ESI test qword ptr [esi], rbp
#define TEST_RBP_TO_PTR_EBP test qword ptr [ebp], rbp
#define TEST_RBP_TO_PTR_ESP test qword ptr [esp], rbp

#define TEST_RSP_TO_PTR_RAX test qword ptr [rax], rsp
#define TEST_RSP_TO_PTR_RBX test qword ptr [rbx], rsp
#define TEST_RSP_TO_PTR_RCX test qword ptr [rcx], rsp
#define TEST_RSP_TO_PTR_RDX test qword ptr [rdx], rsp
#define TEST_RSP_TO_PTR_RDI test qword ptr [rdi], rsp
#define TEST_RSP_TO_PTR_RSI test qword ptr [rsi], rsp
#define TEST_RSP_TO_PTR_RBP test qword ptr [rbp], rsp
#define TEST_RSP_TO_PTR_RSP test qword ptr [rsp], rsp
#define TEST_RSP_TO_PTR_R8 test qword ptr [r8], rsp
#define TEST_RSP_TO_PTR_R9 test qword ptr [r9], rsp
#define TEST_RSP_TO_PTR_R10 test qword ptr [r10], rsp
#define TEST_RSP_TO_PTR_R11 test qword ptr [r11], rsp
#define TEST_RSP_TO_PTR_R12 test qword ptr [r12], rsp
#define TEST_RSP_TO_PTR_R13 test qword ptr [r13], rsp
#define TEST_RSP_TO_PTR_R14 test qword ptr [r14], rsp
#define TEST_RSP_TO_PTR_R15 test qword ptr [r15], rsp
#define TEST_RSP_TO_PTR_EAX test qword ptr [eax], rsp
#define TEST_RSP_TO_PTR_EBX test qword ptr [ebx], rsp
#define TEST_RSP_TO_PTR_ECX test qword ptr [ecx], rsp
#define TEST_RSP_TO_PTR_EDX test qword ptr [edx], rsp
#define TEST_RSP_TO_PTR_EDI test qword ptr [edi], rsp
#define TEST_RSP_TO_PTR_ESI test qword ptr [esi], rsp
#define TEST_RSP_TO_PTR_EBP test qword ptr [ebp], rsp
#define TEST_RSP_TO_PTR_ESP test qword ptr [esp], rsp

#define TEST_R8_TO_PTR_RAX test qword ptr [rax], r8
#define TEST_R8_TO_PTR_RBX test qword ptr [rbx], r8
#define TEST_R8_TO_PTR_RCX test qword ptr [rcx], r8
#define TEST_R8_TO_PTR_RDX test qword ptr [rdx], r8
#define TEST_R8_TO_PTR_RDI test qword ptr [rdi], r8
#define TEST_R8_TO_PTR_RSI test qword ptr [rsi], r8
#define TEST_R8_TO_PTR_RBP test qword ptr [rbp], r8
#define TEST_R8_TO_PTR_RSP test qword ptr [rsp], r8
#define TEST_R8_TO_PTR_R8 test qword ptr [r8], r8
#define TEST_R8_TO_PTR_R9 test qword ptr [r9], r8
#define TEST_R8_TO_PTR_R10 test qword ptr [r10], r8
#define TEST_R8_TO_PTR_R11 test qword ptr [r11], r8
#define TEST_R8_TO_PTR_R12 test qword ptr [r12], r8
#define TEST_R8_TO_PTR_R13 test qword ptr [r13], r8
#define TEST_R8_TO_PTR_R14 test qword ptr [r14], r8
#define TEST_R8_TO_PTR_R15 test qword ptr [r15], r8
#define TEST_R8_TO_PTR_EAX test qword ptr [eax], r8
#define TEST_R8_TO_PTR_EBX test qword ptr [ebx], r8
#define TEST_R8_TO_PTR_ECX test qword ptr [ecx], r8
#define TEST_R8_TO_PTR_EDX test qword ptr [edx], r8
#define TEST_R8_TO_PTR_EDI test qword ptr [edi], r8
#define TEST_R8_TO_PTR_ESI test qword ptr [esi], r8
#define TEST_R8_TO_PTR_EBP test qword ptr [ebp], r8
#define TEST_R8_TO_PTR_ESP test qword ptr [esp], r8

#define TEST_R9_TO_PTR_RAX test qword ptr [rax], r9
#define TEST_R9_TO_PTR_RBX test qword ptr [rbx], r9
#define TEST_R9_TO_PTR_RCX test qword ptr [rcx], r9
#define TEST_R9_TO_PTR_RDX test qword ptr [rdx], r9
#define TEST_R9_TO_PTR_RDI test qword ptr [rdi], r9
#define TEST_R9_TO_PTR_RSI test qword ptr [rsi], r9
#define TEST_R9_TO_PTR_RBP test qword ptr [rbp], r9
#define TEST_R9_TO_PTR_RSP test qword ptr [rsp], r9
#define TEST_R9_TO_PTR_R8 test qword ptr [r8], r9
#define TEST_R9_TO_PTR_R9 test qword ptr [r9], r9
#define TEST_R9_TO_PTR_R10 test qword ptr [r10], r9
#define TEST_R9_TO_PTR_R11 test qword ptr [r11], r9
#define TEST_R9_TO_PTR_R12 test qword ptr [r12], r9
#define TEST_R9_TO_PTR_R13 test qword ptr [r13], r9
#define TEST_R9_TO_PTR_R14 test qword ptr [r14], r9
#define TEST_R9_TO_PTR_R15 test qword ptr [r15], r9
#define TEST_R9_TO_PTR_EAX test qword ptr [eax], r9
#define TEST_R9_TO_PTR_EBX test qword ptr [ebx], r9
#define TEST_R9_TO_PTR_ECX test qword ptr [ecx], r9
#define TEST_R9_TO_PTR_EDX test qword ptr [edx], r9
#define TEST_R9_TO_PTR_EDI test qword ptr [edi], r9
#define TEST_R9_TO_PTR_ESI test qword ptr [esi], r9
#define TEST_R9_TO_PTR_EBP test qword ptr [ebp], r9
#define TEST_R9_TO_PTR_ESP test qword ptr [esp], r9

#define TEST_R10_TO_PTR_RAX test qword ptr [rax], r10
#define TEST_R10_TO_PTR_RBX test qword ptr [rbx], r10
#define TEST_R10_TO_PTR_RCX test qword ptr [rcx], r10
#define TEST_R10_TO_PTR_RDX test qword ptr [rdx], r10
#define TEST_R10_TO_PTR_RDI test qword ptr [rdi], r10
#define TEST_R10_TO_PTR_RSI test qword ptr [rsi], r10
#define TEST_R10_TO_PTR_RBP test qword ptr [rbp], r10
#define TEST_R10_TO_PTR_RSP test qword ptr [rsp], r10
#define TEST_R10_TO_PTR_R8 test qword ptr [r8], r10
#define TEST_R10_TO_PTR_R9 test qword ptr [r9], r10
#define TEST_R10_TO_PTR_R10 test qword ptr [r10], r10
#define TEST_R10_TO_PTR_R11 test qword ptr [r11], r10
#define TEST_R10_TO_PTR_R12 test qword ptr [r12], r10
#define TEST_R10_TO_PTR_R13 test qword ptr [r13], r10
#define TEST_R10_TO_PTR_R14 test qword ptr [r14], r10
#define TEST_R10_TO_PTR_R15 test qword ptr [r15], r10
#define TEST_R10_TO_PTR_EAX test qword ptr [eax], r10
#define TEST_R10_TO_PTR_EBX test qword ptr [ebx], r10
#define TEST_R10_TO_PTR_ECX test qword ptr [ecx], r10
#define TEST_R10_TO_PTR_EDX test qword ptr [edx], r10
#define TEST_R10_TO_PTR_EDI test qword ptr [edi], r10
#define TEST_R10_TO_PTR_ESI test qword ptr [esi], r10
#define TEST_R10_TO_PTR_EBP test qword ptr [ebp], r10
#define TEST_R10_TO_PTR_ESP test qword ptr [esp], r10

#define TEST_R11_TO_PTR_RAX test qword ptr [rax], r11
#define TEST_R11_TO_PTR_RBX test qword ptr [rbx], r11
#define TEST_R11_TO_PTR_RCX test qword ptr [rcx], r11
#define TEST_R11_TO_PTR_RDX test qword ptr [rdx], r11
#define TEST_R11_TO_PTR_RDI test qword ptr [rdi], r11
#define TEST_R11_TO_PTR_RSI test qword ptr [rsi], r11
#define TEST_R11_TO_PTR_RBP test qword ptr [rbp], r11
#define TEST_R11_TO_PTR_RSP test qword ptr [rsp], r11
#define TEST_R11_TO_PTR_R8 test qword ptr [r8], r11
#define TEST_R11_TO_PTR_R9 test qword ptr [r9], r11
#define TEST_R11_TO_PTR_R10 test qword ptr [r10], r11
#define TEST_R11_TO_PTR_R11 test qword ptr [r11], r11
#define TEST_R11_TO_PTR_R12 test qword ptr [r12], r11
#define TEST_R11_TO_PTR_R13 test qword ptr [r13], r11
#define TEST_R11_TO_PTR_R14 test qword ptr [r14], r11
#define TEST_R11_TO_PTR_R15 test qword ptr [r15], r11
#define TEST_R11_TO_PTR_EAX test qword ptr [eax], r11
#define TEST_R11_TO_PTR_EBX test qword ptr [ebx], r11
#define TEST_R11_TO_PTR_ECX test qword ptr [ecx], r11
#define TEST_R11_TO_PTR_EDX test qword ptr [edx], r11
#define TEST_R11_TO_PTR_EDI test qword ptr [edi], r11
#define TEST_R11_TO_PTR_ESI test qword ptr [esi], r11
#define TEST_R11_TO_PTR_EBP test qword ptr [ebp], r11
#define TEST_R11_TO_PTR_ESP test qword ptr [esp], r11

#define TEST_R12_TO_PTR_RAX test qword ptr [rax], r12
#define TEST_R12_TO_PTR_RBX test qword ptr [rbx], r12
#define TEST_R12_TO_PTR_RCX test qword ptr [rcx], r12
#define TEST_R12_TO_PTR_RDX test qword ptr [rdx], r12
#define TEST_R12_TO_PTR_RDI test qword ptr [rdi], r12
#define TEST_R12_TO_PTR_RSI test qword ptr [rsi], r12
#define TEST_R12_TO_PTR_RBP test qword ptr [rbp], r12
#define TEST_R12_TO_PTR_RSP test qword ptr [rsp], r12
#define TEST_R12_TO_PTR_R8 test qword ptr [r8], r12
#define TEST_R12_TO_PTR_R9 test qword ptr [r9], r12
#define TEST_R12_TO_PTR_R10 test qword ptr [r10], r12
#define TEST_R12_TO_PTR_R11 test qword ptr [r11], r12
#define TEST_R12_TO_PTR_R12 test qword ptr [r12], r12
#define TEST_R12_TO_PTR_R13 test qword ptr [r13], r12
#define TEST_R12_TO_PTR_R14 test qword ptr [r14], r12
#define TEST_R12_TO_PTR_R15 test qword ptr [r15], r12
#define TEST_R12_TO_PTR_EAX test qword ptr [eax], r12
#define TEST_R12_TO_PTR_EBX test qword ptr [ebx], r12
#define TEST_R12_TO_PTR_ECX test qword ptr [ecx], r12
#define TEST_R12_TO_PTR_EDX test qword ptr [edx], r12
#define TEST_R12_TO_PTR_EDI test qword ptr [edi], r12
#define TEST_R12_TO_PTR_ESI test qword ptr [esi], r12
#define TEST_R12_TO_PTR_EBP test qword ptr [ebp], r12
#define TEST_R12_TO_PTR_ESP test qword ptr [esp], r12

#define TEST_R13_TO_PTR_RAX test qword ptr [rax], r13
#define TEST_R13_TO_PTR_RBX test qword ptr [rbx], r13
#define TEST_R13_TO_PTR_RCX test qword ptr [rcx], r13
#define TEST_R13_TO_PTR_RDX test qword ptr [rdx], r13
#define TEST_R13_TO_PTR_RDI test qword ptr [rdi], r13
#define TEST_R13_TO_PTR_RSI test qword ptr [rsi], r13
#define TEST_R13_TO_PTR_RBP test qword ptr [rbp], r13
#define TEST_R13_TO_PTR_RSP test qword ptr [rsp], r13
#define TEST_R13_TO_PTR_R8 test qword ptr [r8], r13
#define TEST_R13_TO_PTR_R9 test qword ptr [r9], r13
#define TEST_R13_TO_PTR_R10 test qword ptr [r10], r13
#define TEST_R13_TO_PTR_R11 test qword ptr [r11], r13
#define TEST_R13_TO_PTR_R12 test qword ptr [r12], r13
#define TEST_R13_TO_PTR_R13 test qword ptr [r13], r13
#define TEST_R13_TO_PTR_R14 test qword ptr [r14], r13
#define TEST_R13_TO_PTR_R15 test qword ptr [r15], r13
#define TEST_R13_TO_PTR_EAX test qword ptr [eax], r13
#define TEST_R13_TO_PTR_EBX test qword ptr [ebx], r13
#define TEST_R13_TO_PTR_ECX test qword ptr [ecx], r13
#define TEST_R13_TO_PTR_EDX test qword ptr [edx], r13
#define TEST_R13_TO_PTR_EDI test qword ptr [edi], r13
#define TEST_R13_TO_PTR_ESI test qword ptr [esi], r13
#define TEST_R13_TO_PTR_EBP test qword ptr [ebp], r13
#define TEST_R13_TO_PTR_ESP test qword ptr [esp], r13

#define TEST_R14_TO_PTR_RAX test qword ptr [rax], r14
#define TEST_R14_TO_PTR_RBX test qword ptr [rbx], r14
#define TEST_R14_TO_PTR_RCX test qword ptr [rcx], r14
#define TEST_R14_TO_PTR_RDX test qword ptr [rdx], r14
#define TEST_R14_TO_PTR_RDI test qword ptr [rdi], r14
#define TEST_R14_TO_PTR_RSI test qword ptr [rsi], r14
#define TEST_R14_TO_PTR_RBP test qword ptr [rbp], r14
#define TEST_R14_TO_PTR_RSP test qword ptr [rsp], r14
#define TEST_R14_TO_PTR_R8 test qword ptr [r8], r14
#define TEST_R14_TO_PTR_R9 test qword ptr [r9], r14
#define TEST_R14_TO_PTR_R10 test qword ptr [r10], r14
#define TEST_R14_TO_PTR_R11 test qword ptr [r11], r14
#define TEST_R14_TO_PTR_R12 test qword ptr [r12], r14
#define TEST_R14_TO_PTR_R13 test qword ptr [r13], r14
#define TEST_R14_TO_PTR_R14 test qword ptr [r14], r14
#define TEST_R14_TO_PTR_R15 test qword ptr [r15], r14
#define TEST_R14_TO_PTR_EAX test qword ptr [eax], r14
#define TEST_R14_TO_PTR_EBX test qword ptr [ebx], r14
#define TEST_R14_TO_PTR_ECX test qword ptr [ecx], r14
#define TEST_R14_TO_PTR_EDX test qword ptr [edx], r14
#define TEST_R14_TO_PTR_EDI test qword ptr [edi], r14
#define TEST_R14_TO_PTR_ESI test qword ptr [esi], r14
#define TEST_R14_TO_PTR_EBP test qword ptr [ebp], r14
#define TEST_R14_TO_PTR_ESP test qword ptr [esp], r14

#define TEST_R15_TO_PTR_RAX test qword ptr [rax], r15
#define TEST_R15_TO_PTR_RBX test qword ptr [rbx], r15
#define TEST_R15_TO_PTR_RCX test qword ptr [rcx], r15
#define TEST_R15_TO_PTR_RDX test qword ptr [rdx], r15
#define TEST_R15_TO_PTR_RDI test qword ptr [rdi], r15
#define TEST_R15_TO_PTR_RSI test qword ptr [rsi], r15
#define TEST_R15_TO_PTR_RBP test qword ptr [rbp], r15
#define TEST_R15_TO_PTR_RSP test qword ptr [rsp], r15
#define TEST_R15_TO_PTR_R8 test qword ptr [r8], r15
#define TEST_R15_TO_PTR_R9 test qword ptr [r9], r15
#define TEST_R15_TO_PTR_R10 test qword ptr [r10], r15
#define TEST_R15_TO_PTR_R11 test qword ptr [r11], r15
#define TEST_R15_TO_PTR_R12 test qword ptr [r12], r15
#define TEST_R15_TO_PTR_R13 test qword ptr [r13], r15
#define TEST_R15_TO_PTR_R14 test qword ptr [r14], r15
#define TEST_R15_TO_PTR_R15 test qword ptr [r15], r15
#define TEST_R15_TO_PTR_EAX test qword ptr [eax], r15
#define TEST_R15_TO_PTR_EBX test qword ptr [ebx], r15
#define TEST_R15_TO_PTR_ECX test qword ptr [ecx], r15
#define TEST_R15_TO_PTR_EDX test qword ptr [edx], r15
#define TEST_R15_TO_PTR_EDI test qword ptr [edi], r15
#define TEST_R15_TO_PTR_ESI test qword ptr [esi], r15
#define TEST_R15_TO_PTR_EBP test qword ptr [ebp], r15
#define TEST_R15_TO_PTR_ESP test qword ptr [esp], r15

#define TEST_RAX_FROM_PTR_RAX_(VALUE) test rax, qword ptr [rax + VALUE]
#define TEST_RAX_FROM_PTR_RBX_(VALUE) test rax, qword ptr [rbx + VALUE]
#define TEST_RAX_FROM_PTR_RCX_(VALUE) test rax, qword ptr [rcx + VALUE]
#define TEST_RAX_FROM_PTR_RDX_(VALUE) test rax, qword ptr [rdx + VALUE]
#define TEST_RAX_FROM_PTR_RDI_(VALUE) test rax, qword ptr [rdi + VALUE]
#define TEST_RAX_FROM_PTR_RSI_(VALUE) test rax, qword ptr [rsi + VALUE]
#define TEST_RAX_FROM_PTR_RBP_(VALUE) test rax, qword ptr [rbp + VALUE]
#define TEST_RAX_FROM_PTR_RSP_(VALUE) test rax, qword ptr [rsp + VALUE]
#define TEST_RAX_FROM_PTR_R8_(VALUE) test rax, qword ptr [r8 + VALUE]
#define TEST_RAX_FROM_PTR_R9_(VALUE) test rax, qword ptr [r9 + VALUE]
#define TEST_RAX_FROM_PTR_R10_(VALUE) test rax, qword ptr [r10 + VALUE]
#define TEST_RAX_FROM_PTR_R11_(VALUE) test rax, qword ptr [r11 + VALUE]
#define TEST_RAX_FROM_PTR_R12_(VALUE) test rax, qword ptr [r12 + VALUE]
#define TEST_RAX_FROM_PTR_R13_(VALUE) test rax, qword ptr [r13 + VALUE]
#define TEST_RAX_FROM_PTR_R14_(VALUE) test rax, qword ptr [r14 + VALUE]
#define TEST_RAX_FROM_PTR_R15_(VALUE) test rax, qword ptr [r15 + VALUE]
#define TEST_RAX_FROM_PTR_EAX_(VALUE) test rax, qword ptr [eax + VALUE]
#define TEST_RAX_FROM_PTR_EBX_(VALUE) test rax, qword ptr [ebx + VALUE]
#define TEST_RAX_FROM_PTR_ECX_(VALUE) test rax, qword ptr [ecx + VALUE]
#define TEST_RAX_FROM_PTR_EDX_(VALUE) test rax, qword ptr [edx + VALUE]
#define TEST_RAX_FROM_PTR_EDI_(VALUE) test rax, qword ptr [edi + VALUE]
#define TEST_RAX_FROM_PTR_ESI_(VALUE) test rax, qword ptr [esi + VALUE]
#define TEST_RAX_FROM_PTR_EBP_(VALUE) test rax, qword ptr [ebp + VALUE]
#define TEST_RAX_FROM_PTR_ESP_(VALUE) test rax, qword ptr [esp + VALUE]

#define TEST_RBX_FROM_PTR_RAX_(VALUE) test rbx, qword ptr [rax + VALUE]
#define TEST_RBX_FROM_PTR_RBX_(VALUE) test rbx, qword ptr [rbx + VALUE]
#define TEST_RBX_FROM_PTR_RCX_(VALUE) test rbx, qword ptr [rcx + VALUE]
#define TEST_RBX_FROM_PTR_RDX_(VALUE) test rbx, qword ptr [rdx + VALUE]
#define TEST_RBX_FROM_PTR_RDI_(VALUE) test rbx, qword ptr [rdi + VALUE]
#define TEST_RBX_FROM_PTR_RSI_(VALUE) test rbx, qword ptr [rsi + VALUE]
#define TEST_RBX_FROM_PTR_RBP_(VALUE) test rbx, qword ptr [rbp + VALUE]
#define TEST_RBX_FROM_PTR_RSP_(VALUE) test rbx, qword ptr [rsp + VALUE]
#define TEST_RBX_FROM_PTR_R8_(VALUE) test rbx, qword ptr [r8 + VALUE]
#define TEST_RBX_FROM_PTR_R9_(VALUE) test rbx, qword ptr [r9 + VALUE]
#define TEST_RBX_FROM_PTR_R10_(VALUE) test rbx, qword ptr [r10 + VALUE]
#define TEST_RBX_FROM_PTR_R11_(VALUE) test rbx, qword ptr [r11 + VALUE]
#define TEST_RBX_FROM_PTR_R12_(VALUE) test rbx, qword ptr [r12 + VALUE]
#define TEST_RBX_FROM_PTR_R13_(VALUE) test rbx, qword ptr [r13 + VALUE]
#define TEST_RBX_FROM_PTR_R14_(VALUE) test rbx, qword ptr [r14 + VALUE]
#define TEST_RBX_FROM_PTR_R15_(VALUE) test rbx, qword ptr [r15 + VALUE]
#define TEST_RBX_FROM_PTR_EAX_(VALUE) test rbx, qword ptr [eax + VALUE]
#define TEST_RBX_FROM_PTR_EBX_(VALUE) test rbx, qword ptr [ebx + VALUE]
#define TEST_RBX_FROM_PTR_ECX_(VALUE) test rbx, qword ptr [ecx + VALUE]
#define TEST_RBX_FROM_PTR_EDX_(VALUE) test rbx, qword ptr [edx + VALUE]
#define TEST_RBX_FROM_PTR_EDI_(VALUE) test rbx, qword ptr [edi + VALUE]
#define TEST_RBX_FROM_PTR_ESI_(VALUE) test rbx, qword ptr [esi + VALUE]
#define TEST_RBX_FROM_PTR_EBP_(VALUE) test rbx, qword ptr [ebp + VALUE]
#define TEST_RBX_FROM_PTR_ESP_(VALUE) test rbx, qword ptr [esp + VALUE]

#define TEST_RCX_FROM_PTR_RAX_(VALUE) test rcx, qword ptr [rax + VALUE]
#define TEST_RCX_FROM_PTR_RBX_(VALUE) test rcx, qword ptr [rbx + VALUE]
#define TEST_RCX_FROM_PTR_RCX_(VALUE) test rcx, qword ptr [rcx + VALUE]
#define TEST_RCX_FROM_PTR_RDX_(VALUE) test rcx, qword ptr [rdx + VALUE]
#define TEST_RCX_FROM_PTR_RDI_(VALUE) test rcx, qword ptr [rdi + VALUE]
#define TEST_RCX_FROM_PTR_RSI_(VALUE) test rcx, qword ptr [rsi + VALUE]
#define TEST_RCX_FROM_PTR_RBP_(VALUE) test rcx, qword ptr [rbp + VALUE]
#define TEST_RCX_FROM_PTR_RSP_(VALUE) test rcx, qword ptr [rsp + VALUE]
#define TEST_RCX_FROM_PTR_R8_(VALUE) test rcx, qword ptr [r8 + VALUE]
#define TEST_RCX_FROM_PTR_R9_(VALUE) test rcx, qword ptr [r9 + VALUE]
#define TEST_RCX_FROM_PTR_R10_(VALUE) test rcx, qword ptr [r10 + VALUE]
#define TEST_RCX_FROM_PTR_R11_(VALUE) test rcx, qword ptr [r11 + VALUE]
#define TEST_RCX_FROM_PTR_R12_(VALUE) test rcx, qword ptr [r12 + VALUE]
#define TEST_RCX_FROM_PTR_R13_(VALUE) test rcx, qword ptr [r13 + VALUE]
#define TEST_RCX_FROM_PTR_R14_(VALUE) test rcx, qword ptr [r14 + VALUE]
#define TEST_RCX_FROM_PTR_R15_(VALUE) test rcx, qword ptr [r15 + VALUE]
#define TEST_RCX_FROM_PTR_EAX_(VALUE) test rcx, qword ptr [eax + VALUE]
#define TEST_RCX_FROM_PTR_EBX_(VALUE) test rcx, qword ptr [ebx + VALUE]
#define TEST_RCX_FROM_PTR_ECX_(VALUE) test rcx, qword ptr [ecx + VALUE]
#define TEST_RCX_FROM_PTR_EDX_(VALUE) test rcx, qword ptr [edx + VALUE]
#define TEST_RCX_FROM_PTR_EDI_(VALUE) test rcx, qword ptr [edi + VALUE]
#define TEST_RCX_FROM_PTR_ESI_(VALUE) test rcx, qword ptr [esi + VALUE]
#define TEST_RCX_FROM_PTR_EBP_(VALUE) test rcx, qword ptr [ebp + VALUE]
#define TEST_RCX_FROM_PTR_ESP_(VALUE) test rcx, qword ptr [esp + VALUE]

#define TEST_RDX_FROM_PTR_RAX_(VALUE) test rdx, qword ptr [rax + VALUE]
#define TEST_RDX_FROM_PTR_RBX_(VALUE) test rdx, qword ptr [rbx + VALUE]
#define TEST_RDX_FROM_PTR_RCX_(VALUE) test rdx, qword ptr [rcx + VALUE]
#define TEST_RDX_FROM_PTR_RDX_(VALUE) test rdx, qword ptr [rdx + VALUE]
#define TEST_RDX_FROM_PTR_RDI_(VALUE) test rdx, qword ptr [rdi + VALUE]
#define TEST_RDX_FROM_PTR_RSI_(VALUE) test rdx, qword ptr [rsi + VALUE]
#define TEST_RDX_FROM_PTR_RBP_(VALUE) test rdx, qword ptr [rbp + VALUE]
#define TEST_RDX_FROM_PTR_RSP_(VALUE) test rdx, qword ptr [rsp + VALUE]
#define TEST_RDX_FROM_PTR_R8_(VALUE) test rdx, qword ptr [r8 + VALUE]
#define TEST_RDX_FROM_PTR_R9_(VALUE) test rdx, qword ptr [r9 + VALUE]
#define TEST_RDX_FROM_PTR_R10_(VALUE) test rdx, qword ptr [r10 + VALUE]
#define TEST_RDX_FROM_PTR_R11_(VALUE) test rdx, qword ptr [r11 + VALUE]
#define TEST_RDX_FROM_PTR_R12_(VALUE) test rdx, qword ptr [r12 + VALUE]
#define TEST_RDX_FROM_PTR_R13_(VALUE) test rdx, qword ptr [r13 + VALUE]
#define TEST_RDX_FROM_PTR_R14_(VALUE) test rdx, qword ptr [r14 + VALUE]
#define TEST_RDX_FROM_PTR_R15_(VALUE) test rdx, qword ptr [r15 + VALUE]
#define TEST_RDX_FROM_PTR_EAX_(VALUE) test rdx, qword ptr [eax + VALUE]
#define TEST_RDX_FROM_PTR_EBX_(VALUE) test rdx, qword ptr [ebx + VALUE]
#define TEST_RDX_FROM_PTR_ECX_(VALUE) test rdx, qword ptr [ecx + VALUE]
#define TEST_RDX_FROM_PTR_EDX_(VALUE) test rdx, qword ptr [edx + VALUE]
#define TEST_RDX_FROM_PTR_EDI_(VALUE) test rdx, qword ptr [edi + VALUE]
#define TEST_RDX_FROM_PTR_ESI_(VALUE) test rdx, qword ptr [esi + VALUE]
#define TEST_RDX_FROM_PTR_EBP_(VALUE) test rdx, qword ptr [ebp + VALUE]
#define TEST_RDX_FROM_PTR_ESP_(VALUE) test rdx, qword ptr [esp + VALUE]

#define TEST_RDI_FROM_PTR_RAX_(VALUE) test rdi, qword ptr [rax + VALUE]
#define TEST_RDI_FROM_PTR_RBX_(VALUE) test rdi, qword ptr [rbx + VALUE]
#define TEST_RDI_FROM_PTR_RCX_(VALUE) test rdi, qword ptr [rcx + VALUE]
#define TEST_RDI_FROM_PTR_RDX_(VALUE) test rdi, qword ptr [rdx + VALUE]
#define TEST_RDI_FROM_PTR_RDI_(VALUE) test rdi, qword ptr [rdi + VALUE]
#define TEST_RDI_FROM_PTR_RSI_(VALUE) test rdi, qword ptr [rsi + VALUE]
#define TEST_RDI_FROM_PTR_RBP_(VALUE) test rdi, qword ptr [rbp + VALUE]
#define TEST_RDI_FROM_PTR_RSP_(VALUE) test rdi, qword ptr [rsp + VALUE]
#define TEST_RDI_FROM_PTR_R8_(VALUE) test rdi, qword ptr [r8 + VALUE]
#define TEST_RDI_FROM_PTR_R9_(VALUE) test rdi, qword ptr [r9 + VALUE]
#define TEST_RDI_FROM_PTR_R10_(VALUE) test rdi, qword ptr [r10 + VALUE]
#define TEST_RDI_FROM_PTR_R11_(VALUE) test rdi, qword ptr [r11 + VALUE]
#define TEST_RDI_FROM_PTR_R12_(VALUE) test rdi, qword ptr [r12 + VALUE]
#define TEST_RDI_FROM_PTR_R13_(VALUE) test rdi, qword ptr [r13 + VALUE]
#define TEST_RDI_FROM_PTR_R14_(VALUE) test rdi, qword ptr [r14 + VALUE]
#define TEST_RDI_FROM_PTR_R15_(VALUE) test rdi, qword ptr [r15 + VALUE]
#define TEST_RDI_FROM_PTR_EAX_(VALUE) test rdi, qword ptr [eax + VALUE]
#define TEST_RDI_FROM_PTR_EBX_(VALUE) test rdi, qword ptr [ebx + VALUE]
#define TEST_RDI_FROM_PTR_ECX_(VALUE) test rdi, qword ptr [ecx + VALUE]
#define TEST_RDI_FROM_PTR_EDX_(VALUE) test rdi, qword ptr [edx + VALUE]
#define TEST_RDI_FROM_PTR_EDI_(VALUE) test rdi, qword ptr [edi + VALUE]
#define TEST_RDI_FROM_PTR_ESI_(VALUE) test rdi, qword ptr [esi + VALUE]
#define TEST_RDI_FROM_PTR_EBP_(VALUE) test rdi, qword ptr [ebp + VALUE]
#define TEST_RDI_FROM_PTR_ESP_(VALUE) test rdi, qword ptr [esp + VALUE]

#define TEST_RSI_FROM_PTR_RAX_(VALUE) test rsi, qword ptr [rax + VALUE]
#define TEST_RSI_FROM_PTR_RBX_(VALUE) test rsi, qword ptr [rbx + VALUE]
#define TEST_RSI_FROM_PTR_RCX_(VALUE) test rsi, qword ptr [rcx + VALUE]
#define TEST_RSI_FROM_PTR_RDX_(VALUE) test rsi, qword ptr [rdx + VALUE]
#define TEST_RSI_FROM_PTR_RDI_(VALUE) test rsi, qword ptr [rdi + VALUE]
#define TEST_RSI_FROM_PTR_RSI_(VALUE) test rsi, qword ptr [rsi + VALUE]
#define TEST_RSI_FROM_PTR_RBP_(VALUE) test rsi, qword ptr [rbp + VALUE]
#define TEST_RSI_FROM_PTR_RSP_(VALUE) test rsi, qword ptr [rsp + VALUE]
#define TEST_RSI_FROM_PTR_R8_(VALUE) test rsi, qword ptr [r8 + VALUE]
#define TEST_RSI_FROM_PTR_R9_(VALUE) test rsi, qword ptr [r9 + VALUE]
#define TEST_RSI_FROM_PTR_R10_(VALUE) test rsi, qword ptr [r10 + VALUE]
#define TEST_RSI_FROM_PTR_R11_(VALUE) test rsi, qword ptr [r11 + VALUE]
#define TEST_RSI_FROM_PTR_R12_(VALUE) test rsi, qword ptr [r12 + VALUE]
#define TEST_RSI_FROM_PTR_R13_(VALUE) test rsi, qword ptr [r13 + VALUE]
#define TEST_RSI_FROM_PTR_R14_(VALUE) test rsi, qword ptr [r14 + VALUE]
#define TEST_RSI_FROM_PTR_R15_(VALUE) test rsi, qword ptr [r15 + VALUE]
#define TEST_RSI_FROM_PTR_EAX_(VALUE) test rsi, qword ptr [eax + VALUE]
#define TEST_RSI_FROM_PTR_EBX_(VALUE) test rsi, qword ptr [ebx + VALUE]
#define TEST_RSI_FROM_PTR_ECX_(VALUE) test rsi, qword ptr [ecx + VALUE]
#define TEST_RSI_FROM_PTR_EDX_(VALUE) test rsi, qword ptr [edx + VALUE]
#define TEST_RSI_FROM_PTR_EDI_(VALUE) test rsi, qword ptr [edi + VALUE]
#define TEST_RSI_FROM_PTR_ESI_(VALUE) test rsi, qword ptr [esi + VALUE]
#define TEST_RSI_FROM_PTR_EBP_(VALUE) test rsi, qword ptr [ebp + VALUE]
#define TEST_RSI_FROM_PTR_ESP_(VALUE) test rsi, qword ptr [esp + VALUE]

#define TEST_RBP_FROM_PTR_RAX_(VALUE) test rbp, qword ptr [rax + VALUE]
#define TEST_RBP_FROM_PTR_RBX_(VALUE) test rbp, qword ptr [rbx + VALUE]
#define TEST_RBP_FROM_PTR_RCX_(VALUE) test rbp, qword ptr [rcx + VALUE]
#define TEST_RBP_FROM_PTR_RDX_(VALUE) test rbp, qword ptr [rdx + VALUE]
#define TEST_RBP_FROM_PTR_RDI_(VALUE) test rbp, qword ptr [rdi + VALUE]
#define TEST_RBP_FROM_PTR_RSI_(VALUE) test rbp, qword ptr [rsi + VALUE]
#define TEST_RBP_FROM_PTR_RBP_(VALUE) test rbp, qword ptr [rbp + VALUE]
#define TEST_RBP_FROM_PTR_RSP_(VALUE) test rbp, qword ptr [rsp + VALUE]
#define TEST_RBP_FROM_PTR_R8_(VALUE) test rbp, qword ptr [r8 + VALUE]
#define TEST_RBP_FROM_PTR_R9_(VALUE) test rbp, qword ptr [r9 + VALUE]
#define TEST_RBP_FROM_PTR_R10_(VALUE) test rbp, qword ptr [r10 + VALUE]
#define TEST_RBP_FROM_PTR_R11_(VALUE) test rbp, qword ptr [r11 + VALUE]
#define TEST_RBP_FROM_PTR_R12_(VALUE) test rbp, qword ptr [r12 + VALUE]
#define TEST_RBP_FROM_PTR_R13_(VALUE) test rbp, qword ptr [r13 + VALUE]
#define TEST_RBP_FROM_PTR_R14_(VALUE) test rbp, qword ptr [r14 + VALUE]
#define TEST_RBP_FROM_PTR_R15_(VALUE) test rbp, qword ptr [r15 + VALUE]
#define TEST_RBP_FROM_PTR_EAX_(VALUE) test rbp, qword ptr [eax + VALUE]
#define TEST_RBP_FROM_PTR_EBX_(VALUE) test rbp, qword ptr [ebx + VALUE]
#define TEST_RBP_FROM_PTR_ECX_(VALUE) test rbp, qword ptr [ecx + VALUE]
#define TEST_RBP_FROM_PTR_EDX_(VALUE) test rbp, qword ptr [edx + VALUE]
#define TEST_RBP_FROM_PTR_EDI_(VALUE) test rbp, qword ptr [edi + VALUE]
#define TEST_RBP_FROM_PTR_ESI_(VALUE) test rbp, qword ptr [esi + VALUE]
#define TEST_RBP_FROM_PTR_EBP_(VALUE) test rbp, qword ptr [ebp + VALUE]
#define TEST_RBP_FROM_PTR_ESP_(VALUE) test rbp, qword ptr [esp + VALUE]

#define TEST_RSP_FROM_PTR_RAX_(VALUE) test rsp, qword ptr [rax + VALUE]
#define TEST_RSP_FROM_PTR_RBX_(VALUE) test rsp, qword ptr [rbx + VALUE]
#define TEST_RSP_FROM_PTR_RCX_(VALUE) test rsp, qword ptr [rcx + VALUE]
#define TEST_RSP_FROM_PTR_RDX_(VALUE) test rsp, qword ptr [rdx + VALUE]
#define TEST_RSP_FROM_PTR_RDI_(VALUE) test rsp, qword ptr [rdi + VALUE]
#define TEST_RSP_FROM_PTR_RSI_(VALUE) test rsp, qword ptr [rsi + VALUE]
#define TEST_RSP_FROM_PTR_RBP_(VALUE) test rsp, qword ptr [rbp + VALUE]
#define TEST_RSP_FROM_PTR_RSP_(VALUE) test rsp, qword ptr [rsp + VALUE]
#define TEST_RSP_FROM_PTR_R8_(VALUE) test rsp, qword ptr [r8 + VALUE]
#define TEST_RSP_FROM_PTR_R9_(VALUE) test rsp, qword ptr [r9 + VALUE]
#define TEST_RSP_FROM_PTR_R10_(VALUE) test rsp, qword ptr [r10 + VALUE]
#define TEST_RSP_FROM_PTR_R11_(VALUE) test rsp, qword ptr [r11 + VALUE]
#define TEST_RSP_FROM_PTR_R12_(VALUE) test rsp, qword ptr [r12 + VALUE]
#define TEST_RSP_FROM_PTR_R13_(VALUE) test rsp, qword ptr [r13 + VALUE]
#define TEST_RSP_FROM_PTR_R14_(VALUE) test rsp, qword ptr [r14 + VALUE]
#define TEST_RSP_FROM_PTR_R15_(VALUE) test rsp, qword ptr [r15 + VALUE]
#define TEST_RSP_FROM_PTR_EAX_(VALUE) test rsp, qword ptr [eax + VALUE]
#define TEST_RSP_FROM_PTR_EBX_(VALUE) test rsp, qword ptr [ebx + VALUE]
#define TEST_RSP_FROM_PTR_ECX_(VALUE) test rsp, qword ptr [ecx + VALUE]
#define TEST_RSP_FROM_PTR_EDX_(VALUE) test rsp, qword ptr [edx + VALUE]
#define TEST_RSP_FROM_PTR_EDI_(VALUE) test rsp, qword ptr [edi + VALUE]
#define TEST_RSP_FROM_PTR_ESI_(VALUE) test rsp, qword ptr [esi + VALUE]
#define TEST_RSP_FROM_PTR_EBP_(VALUE) test rsp, qword ptr [ebp + VALUE]
#define TEST_RSP_FROM_PTR_ESP_(VALUE) test rsp, qword ptr [esp + VALUE]

#define TEST_R8_FROM_PTR_RAX_(VALUE) test r8, qword ptr [rax + VALUE]
#define TEST_R8_FROM_PTR_RBX_(VALUE) test r8, qword ptr [rbx + VALUE]
#define TEST_R8_FROM_PTR_RCX_(VALUE) test r8, qword ptr [rcx + VALUE]
#define TEST_R8_FROM_PTR_RDX_(VALUE) test r8, qword ptr [rdx + VALUE]
#define TEST_R8_FROM_PTR_RDI_(VALUE) test r8, qword ptr [rdi + VALUE]
#define TEST_R8_FROM_PTR_RSI_(VALUE) test r8, qword ptr [rsi + VALUE]
#define TEST_R8_FROM_PTR_RBP_(VALUE) test r8, qword ptr [rbp + VALUE]
#define TEST_R8_FROM_PTR_RSP_(VALUE) test r8, qword ptr [rsp + VALUE]
#define TEST_R8_FROM_PTR_R8_(VALUE) test r8, qword ptr [r8 + VALUE]
#define TEST_R8_FROM_PTR_R9_(VALUE) test r8, qword ptr [r9 + VALUE]
#define TEST_R8_FROM_PTR_R10_(VALUE) test r8, qword ptr [r10 + VALUE]
#define TEST_R8_FROM_PTR_R11_(VALUE) test r8, qword ptr [r11 + VALUE]
#define TEST_R8_FROM_PTR_R12_(VALUE) test r8, qword ptr [r12 + VALUE]
#define TEST_R8_FROM_PTR_R13_(VALUE) test r8, qword ptr [r13 + VALUE]
#define TEST_R8_FROM_PTR_R14_(VALUE) test r8, qword ptr [r14 + VALUE]
#define TEST_R8_FROM_PTR_R15_(VALUE) test r8, qword ptr [r15 + VALUE]
#define TEST_R8_FROM_PTR_EAX_(VALUE) test r8, qword ptr [eax + VALUE]
#define TEST_R8_FROM_PTR_EBX_(VALUE) test r8, qword ptr [ebx + VALUE]
#define TEST_R8_FROM_PTR_ECX_(VALUE) test r8, qword ptr [ecx + VALUE]
#define TEST_R8_FROM_PTR_EDX_(VALUE) test r8, qword ptr [edx + VALUE]
#define TEST_R8_FROM_PTR_EDI_(VALUE) test r8, qword ptr [edi + VALUE]
#define TEST_R8_FROM_PTR_ESI_(VALUE) test r8, qword ptr [esi + VALUE]
#define TEST_R8_FROM_PTR_EBP_(VALUE) test r8, qword ptr [ebp + VALUE]
#define TEST_R8_FROM_PTR_ESP_(VALUE) test r8, qword ptr [esp + VALUE]

#define TEST_R9_FROM_PTR_RAX_(VALUE) test r9, qword ptr [rax + VALUE]
#define TEST_R9_FROM_PTR_RBX_(VALUE) test r9, qword ptr [rbx + VALUE]
#define TEST_R9_FROM_PTR_RCX_(VALUE) test r9, qword ptr [rcx + VALUE]
#define TEST_R9_FROM_PTR_RDX_(VALUE) test r9, qword ptr [rdx + VALUE]
#define TEST_R9_FROM_PTR_RDI_(VALUE) test r9, qword ptr [rdi + VALUE]
#define TEST_R9_FROM_PTR_RSI_(VALUE) test r9, qword ptr [rsi + VALUE]
#define TEST_R9_FROM_PTR_RBP_(VALUE) test r9, qword ptr [rbp + VALUE]
#define TEST_R9_FROM_PTR_RSP_(VALUE) test r9, qword ptr [rsp + VALUE]
#define TEST_R9_FROM_PTR_R8_(VALUE) test r9, qword ptr [r8 + VALUE]
#define TEST_R9_FROM_PTR_R9_(VALUE) test r9, qword ptr [r9 + VALUE]
#define TEST_R9_FROM_PTR_R10_(VALUE) test r9, qword ptr [r10 + VALUE]
#define TEST_R9_FROM_PTR_R11_(VALUE) test r9, qword ptr [r11 + VALUE]
#define TEST_R9_FROM_PTR_R12_(VALUE) test r9, qword ptr [r12 + VALUE]
#define TEST_R9_FROM_PTR_R13_(VALUE) test r9, qword ptr [r13 + VALUE]
#define TEST_R9_FROM_PTR_R14_(VALUE) test r9, qword ptr [r14 + VALUE]
#define TEST_R9_FROM_PTR_R15_(VALUE) test r9, qword ptr [r15 + VALUE]
#define TEST_R9_FROM_PTR_EAX_(VALUE) test r9, qword ptr [eax + VALUE]
#define TEST_R9_FROM_PTR_EBX_(VALUE) test r9, qword ptr [ebx + VALUE]
#define TEST_R9_FROM_PTR_ECX_(VALUE) test r9, qword ptr [ecx + VALUE]
#define TEST_R9_FROM_PTR_EDX_(VALUE) test r9, qword ptr [edx + VALUE]
#define TEST_R9_FROM_PTR_EDI_(VALUE) test r9, qword ptr [edi + VALUE]
#define TEST_R9_FROM_PTR_ESI_(VALUE) test r9, qword ptr [esi + VALUE]
#define TEST_R9_FROM_PTR_EBP_(VALUE) test r9, qword ptr [ebp + VALUE]
#define TEST_R9_FROM_PTR_ESP_(VALUE) test r9, qword ptr [esp + VALUE]

#define TEST_R10_FROM_PTR_RAX_(VALUE) test r10, qword ptr [rax + VALUE]
#define TEST_R10_FROM_PTR_RBX_(VALUE) test r10, qword ptr [rbx + VALUE]
#define TEST_R10_FROM_PTR_RCX_(VALUE) test r10, qword ptr [rcx + VALUE]
#define TEST_R10_FROM_PTR_RDX_(VALUE) test r10, qword ptr [rdx + VALUE]
#define TEST_R10_FROM_PTR_RDI_(VALUE) test r10, qword ptr [rdi + VALUE]
#define TEST_R10_FROM_PTR_RSI_(VALUE) test r10, qword ptr [rsi + VALUE]
#define TEST_R10_FROM_PTR_RBP_(VALUE) test r10, qword ptr [rbp + VALUE]
#define TEST_R10_FROM_PTR_RSP_(VALUE) test r10, qword ptr [rsp + VALUE]
#define TEST_R10_FROM_PTR_R8_(VALUE) test r10, qword ptr [r8 + VALUE]
#define TEST_R10_FROM_PTR_R9_(VALUE) test r10, qword ptr [r9 + VALUE]
#define TEST_R10_FROM_PTR_R10_(VALUE) test r10, qword ptr [r10 + VALUE]
#define TEST_R10_FROM_PTR_R11_(VALUE) test r10, qword ptr [r11 + VALUE]
#define TEST_R10_FROM_PTR_R12_(VALUE) test r10, qword ptr [r12 + VALUE]
#define TEST_R10_FROM_PTR_R13_(VALUE) test r10, qword ptr [r13 + VALUE]
#define TEST_R10_FROM_PTR_R14_(VALUE) test r10, qword ptr [r14 + VALUE]
#define TEST_R10_FROM_PTR_R15_(VALUE) test r10, qword ptr [r15 + VALUE]
#define TEST_R10_FROM_PTR_EAX_(VALUE) test r10, qword ptr [eax + VALUE]
#define TEST_R10_FROM_PTR_EBX_(VALUE) test r10, qword ptr [ebx + VALUE]
#define TEST_R10_FROM_PTR_ECX_(VALUE) test r10, qword ptr [ecx + VALUE]
#define TEST_R10_FROM_PTR_EDX_(VALUE) test r10, qword ptr [edx + VALUE]
#define TEST_R10_FROM_PTR_EDI_(VALUE) test r10, qword ptr [edi + VALUE]
#define TEST_R10_FROM_PTR_ESI_(VALUE) test r10, qword ptr [esi + VALUE]
#define TEST_R10_FROM_PTR_EBP_(VALUE) test r10, qword ptr [ebp + VALUE]
#define TEST_R10_FROM_PTR_ESP_(VALUE) test r10, qword ptr [esp + VALUE]

#define TEST_R11_FROM_PTR_RAX_(VALUE) test r11, qword ptr [rax + VALUE]
#define TEST_R11_FROM_PTR_RBX_(VALUE) test r11, qword ptr [rbx + VALUE]
#define TEST_R11_FROM_PTR_RCX_(VALUE) test r11, qword ptr [rcx + VALUE]
#define TEST_R11_FROM_PTR_RDX_(VALUE) test r11, qword ptr [rdx + VALUE]
#define TEST_R11_FROM_PTR_RDI_(VALUE) test r11, qword ptr [rdi + VALUE]
#define TEST_R11_FROM_PTR_RSI_(VALUE) test r11, qword ptr [rsi + VALUE]
#define TEST_R11_FROM_PTR_RBP_(VALUE) test r11, qword ptr [rbp + VALUE]
#define TEST_R11_FROM_PTR_RSP_(VALUE) test r11, qword ptr [rsp + VALUE]
#define TEST_R11_FROM_PTR_R8_(VALUE) test r11, qword ptr [r8 + VALUE]
#define TEST_R11_FROM_PTR_R9_(VALUE) test r11, qword ptr [r9 + VALUE]
#define TEST_R11_FROM_PTR_R10_(VALUE) test r11, qword ptr [r10 + VALUE]
#define TEST_R11_FROM_PTR_R11_(VALUE) test r11, qword ptr [r11 + VALUE]
#define TEST_R11_FROM_PTR_R12_(VALUE) test r11, qword ptr [r12 + VALUE]
#define TEST_R11_FROM_PTR_R13_(VALUE) test r11, qword ptr [r13 + VALUE]
#define TEST_R11_FROM_PTR_R14_(VALUE) test r11, qword ptr [r14 + VALUE]
#define TEST_R11_FROM_PTR_R15_(VALUE) test r11, qword ptr [r15 + VALUE]
#define TEST_R11_FROM_PTR_EAX_(VALUE) test r11, qword ptr [eax + VALUE]
#define TEST_R11_FROM_PTR_EBX_(VALUE) test r11, qword ptr [ebx + VALUE]
#define TEST_R11_FROM_PTR_ECX_(VALUE) test r11, qword ptr [ecx + VALUE]
#define TEST_R11_FROM_PTR_EDX_(VALUE) test r11, qword ptr [edx + VALUE]
#define TEST_R11_FROM_PTR_EDI_(VALUE) test r11, qword ptr [edi + VALUE]
#define TEST_R11_FROM_PTR_ESI_(VALUE) test r11, qword ptr [esi + VALUE]
#define TEST_R11_FROM_PTR_EBP_(VALUE) test r11, qword ptr [ebp + VALUE]
#define TEST_R11_FROM_PTR_ESP_(VALUE) test r11, qword ptr [esp + VALUE]

#define TEST_R12_FROM_PTR_RAX_(VALUE) test r12, qword ptr [rax + VALUE]
#define TEST_R12_FROM_PTR_RBX_(VALUE) test r12, qword ptr [rbx + VALUE]
#define TEST_R12_FROM_PTR_RCX_(VALUE) test r12, qword ptr [rcx + VALUE]
#define TEST_R12_FROM_PTR_RDX_(VALUE) test r12, qword ptr [rdx + VALUE]
#define TEST_R12_FROM_PTR_RDI_(VALUE) test r12, qword ptr [rdi + VALUE]
#define TEST_R12_FROM_PTR_RSI_(VALUE) test r12, qword ptr [rsi + VALUE]
#define TEST_R12_FROM_PTR_RBP_(VALUE) test r12, qword ptr [rbp + VALUE]
#define TEST_R12_FROM_PTR_RSP_(VALUE) test r12, qword ptr [rsp + VALUE]
#define TEST_R12_FROM_PTR_R8_(VALUE) test r12, qword ptr [r8 + VALUE]
#define TEST_R12_FROM_PTR_R9_(VALUE) test r12, qword ptr [r9 + VALUE]
#define TEST_R12_FROM_PTR_R10_(VALUE) test r12, qword ptr [r10 + VALUE]
#define TEST_R12_FROM_PTR_R11_(VALUE) test r12, qword ptr [r11 + VALUE]
#define TEST_R12_FROM_PTR_R12_(VALUE) test r12, qword ptr [r12 + VALUE]
#define TEST_R12_FROM_PTR_R13_(VALUE) test r12, qword ptr [r13 + VALUE]
#define TEST_R12_FROM_PTR_R14_(VALUE) test r12, qword ptr [r14 + VALUE]
#define TEST_R12_FROM_PTR_R15_(VALUE) test r12, qword ptr [r15 + VALUE]
#define TEST_R12_FROM_PTR_EAX_(VALUE) test r12, qword ptr [eax + VALUE]
#define TEST_R12_FROM_PTR_EBX_(VALUE) test r12, qword ptr [ebx + VALUE]
#define TEST_R12_FROM_PTR_ECX_(VALUE) test r12, qword ptr [ecx + VALUE]
#define TEST_R12_FROM_PTR_EDX_(VALUE) test r12, qword ptr [edx + VALUE]
#define TEST_R12_FROM_PTR_EDI_(VALUE) test r12, qword ptr [edi + VALUE]
#define TEST_R12_FROM_PTR_ESI_(VALUE) test r12, qword ptr [esi + VALUE]
#define TEST_R12_FROM_PTR_EBP_(VALUE) test r12, qword ptr [ebp + VALUE]
#define TEST_R12_FROM_PTR_ESP_(VALUE) test r12, qword ptr [esp + VALUE]

#define TEST_R13_FROM_PTR_RAX_(VALUE) test r13, qword ptr [rax + VALUE]
#define TEST_R13_FROM_PTR_RBX_(VALUE) test r13, qword ptr [rbx + VALUE]
#define TEST_R13_FROM_PTR_RCX_(VALUE) test r13, qword ptr [rcx + VALUE]
#define TEST_R13_FROM_PTR_RDX_(VALUE) test r13, qword ptr [rdx + VALUE]
#define TEST_R13_FROM_PTR_RDI_(VALUE) test r13, qword ptr [rdi + VALUE]
#define TEST_R13_FROM_PTR_RSI_(VALUE) test r13, qword ptr [rsi + VALUE]
#define TEST_R13_FROM_PTR_RBP_(VALUE) test r13, qword ptr [rbp + VALUE]
#define TEST_R13_FROM_PTR_RSP_(VALUE) test r13, qword ptr [rsp + VALUE]
#define TEST_R13_FROM_PTR_R8_(VALUE) test r13, qword ptr [r8 + VALUE]
#define TEST_R13_FROM_PTR_R9_(VALUE) test r13, qword ptr [r9 + VALUE]
#define TEST_R13_FROM_PTR_R10_(VALUE) test r13, qword ptr [r10 + VALUE]
#define TEST_R13_FROM_PTR_R11_(VALUE) test r13, qword ptr [r11 + VALUE]
#define TEST_R13_FROM_PTR_R12_(VALUE) test r13, qword ptr [r12 + VALUE]
#define TEST_R13_FROM_PTR_R13_(VALUE) test r13, qword ptr [r13 + VALUE]
#define TEST_R13_FROM_PTR_R14_(VALUE) test r13, qword ptr [r14 + VALUE]
#define TEST_R13_FROM_PTR_R15_(VALUE) test r13, qword ptr [r15 + VALUE]
#define TEST_R13_FROM_PTR_EAX_(VALUE) test r13, qword ptr [eax + VALUE]
#define TEST_R13_FROM_PTR_EBX_(VALUE) test r13, qword ptr [ebx + VALUE]
#define TEST_R13_FROM_PTR_ECX_(VALUE) test r13, qword ptr [ecx + VALUE]
#define TEST_R13_FROM_PTR_EDX_(VALUE) test r13, qword ptr [edx + VALUE]
#define TEST_R13_FROM_PTR_EDI_(VALUE) test r13, qword ptr [edi + VALUE]
#define TEST_R13_FROM_PTR_ESI_(VALUE) test r13, qword ptr [esi + VALUE]
#define TEST_R13_FROM_PTR_EBP_(VALUE) test r13, qword ptr [ebp + VALUE]
#define TEST_R13_FROM_PTR_ESP_(VALUE) test r13, qword ptr [esp + VALUE]

#define TEST_R14_FROM_PTR_RAX_(VALUE) test r14, qword ptr [rax + VALUE]
#define TEST_R14_FROM_PTR_RBX_(VALUE) test r14, qword ptr [rbx + VALUE]
#define TEST_R14_FROM_PTR_RCX_(VALUE) test r14, qword ptr [rcx + VALUE]
#define TEST_R14_FROM_PTR_RDX_(VALUE) test r14, qword ptr [rdx + VALUE]
#define TEST_R14_FROM_PTR_RDI_(VALUE) test r14, qword ptr [rdi + VALUE]
#define TEST_R14_FROM_PTR_RSI_(VALUE) test r14, qword ptr [rsi + VALUE]
#define TEST_R14_FROM_PTR_RBP_(VALUE) test r14, qword ptr [rbp + VALUE]
#define TEST_R14_FROM_PTR_RSP_(VALUE) test r14, qword ptr [rsp + VALUE]
#define TEST_R14_FROM_PTR_R8_(VALUE) test r14, qword ptr [r8 + VALUE]
#define TEST_R14_FROM_PTR_R9_(VALUE) test r14, qword ptr [r9 + VALUE]
#define TEST_R14_FROM_PTR_R10_(VALUE) test r14, qword ptr [r10 + VALUE]
#define TEST_R14_FROM_PTR_R11_(VALUE) test r14, qword ptr [r11 + VALUE]
#define TEST_R14_FROM_PTR_R12_(VALUE) test r14, qword ptr [r12 + VALUE]
#define TEST_R14_FROM_PTR_R13_(VALUE) test r14, qword ptr [r13 + VALUE]
#define TEST_R14_FROM_PTR_R14_(VALUE) test r14, qword ptr [r14 + VALUE]
#define TEST_R14_FROM_PTR_R15_(VALUE) test r14, qword ptr [r15 + VALUE]
#define TEST_R14_FROM_PTR_EAX_(VALUE) test r14, qword ptr [eax + VALUE]
#define TEST_R14_FROM_PTR_EBX_(VALUE) test r14, qword ptr [ebx + VALUE]
#define TEST_R14_FROM_PTR_ECX_(VALUE) test r14, qword ptr [ecx + VALUE]
#define TEST_R14_FROM_PTR_EDX_(VALUE) test r14, qword ptr [edx + VALUE]
#define TEST_R14_FROM_PTR_EDI_(VALUE) test r14, qword ptr [edi + VALUE]
#define TEST_R14_FROM_PTR_ESI_(VALUE) test r14, qword ptr [esi + VALUE]
#define TEST_R14_FROM_PTR_EBP_(VALUE) test r14, qword ptr [ebp + VALUE]
#define TEST_R14_FROM_PTR_ESP_(VALUE) test r14, qword ptr [esp + VALUE]

#define TEST_R15_FROM_PTR_RAX_(VALUE) test r15, qword ptr [rax + VALUE]
#define TEST_R15_FROM_PTR_RBX_(VALUE) test r15, qword ptr [rbx + VALUE]
#define TEST_R15_FROM_PTR_RCX_(VALUE) test r15, qword ptr [rcx + VALUE]
#define TEST_R15_FROM_PTR_RDX_(VALUE) test r15, qword ptr [rdx + VALUE]
#define TEST_R15_FROM_PTR_RDI_(VALUE) test r15, qword ptr [rdi + VALUE]
#define TEST_R15_FROM_PTR_RSI_(VALUE) test r15, qword ptr [rsi + VALUE]
#define TEST_R15_FROM_PTR_RBP_(VALUE) test r15, qword ptr [rbp + VALUE]
#define TEST_R15_FROM_PTR_RSP_(VALUE) test r15, qword ptr [rsp + VALUE]
#define TEST_R15_FROM_PTR_R8_(VALUE) test r15, qword ptr [r8 + VALUE]
#define TEST_R15_FROM_PTR_R9_(VALUE) test r15, qword ptr [r9 + VALUE]
#define TEST_R15_FROM_PTR_R10_(VALUE) test r15, qword ptr [r10 + VALUE]
#define TEST_R15_FROM_PTR_R11_(VALUE) test r15, qword ptr [r11 + VALUE]
#define TEST_R15_FROM_PTR_R12_(VALUE) test r15, qword ptr [r12 + VALUE]
#define TEST_R15_FROM_PTR_R13_(VALUE) test r15, qword ptr [r13 + VALUE]
#define TEST_R15_FROM_PTR_R14_(VALUE) test r15, qword ptr [r14 + VALUE]
#define TEST_R15_FROM_PTR_R15_(VALUE) test r15, qword ptr [r15 + VALUE]
#define TEST_R15_FROM_PTR_EAX_(VALUE) test r15, qword ptr [eax + VALUE]
#define TEST_R15_FROM_PTR_EBX_(VALUE) test r15, qword ptr [ebx + VALUE]
#define TEST_R15_FROM_PTR_ECX_(VALUE) test r15, qword ptr [ecx + VALUE]
#define TEST_R15_FROM_PTR_EDX_(VALUE) test r15, qword ptr [edx + VALUE]
#define TEST_R15_FROM_PTR_EDI_(VALUE) test r15, qword ptr [edi + VALUE]
#define TEST_R15_FROM_PTR_ESI_(VALUE) test r15, qword ptr [esi + VALUE]
#define TEST_R15_FROM_PTR_EBP_(VALUE) test r15, qword ptr [ebp + VALUE]
#define TEST_R15_FROM_PTR_ESP_(VALUE) test r15, qword ptr [esp + VALUE]

#define TEST_RAX_TO_PTR_RAX_(VALUE) test qword ptr [rax + VALUE], rax
#define TEST_RAX_TO_PTR_RBX_(VALUE) test qword ptr [rbx + VALUE], rax
#define TEST_RAX_TO_PTR_RCX_(VALUE) test qword ptr [rcx + VALUE], rax
#define TEST_RAX_TO_PTR_RDX_(VALUE) test qword ptr [rdx + VALUE], rax
#define TEST_RAX_TO_PTR_RDI_(VALUE) test qword ptr [rdi + VALUE], rax
#define TEST_RAX_TO_PTR_RSI_(VALUE) test qword ptr [rsi + VALUE], rax
#define TEST_RAX_TO_PTR_RBP_(VALUE) test qword ptr [rbp + VALUE], rax
#define TEST_RAX_TO_PTR_RSP_(VALUE) test qword ptr [rsp + VALUE], rax
#define TEST_RAX_TO_PTR_R8_(VALUE) test qword ptr [r8 + VALUE], rax
#define TEST_RAX_TO_PTR_R9_(VALUE) test qword ptr [r9 + VALUE], rax
#define TEST_RAX_TO_PTR_R10_(VALUE) test qword ptr [r10 + VALUE], rax
#define TEST_RAX_TO_PTR_R11_(VALUE) test qword ptr [r11 + VALUE], rax
#define TEST_RAX_TO_PTR_R12_(VALUE) test qword ptr [r12 + VALUE], rax
#define TEST_RAX_TO_PTR_R13_(VALUE) test qword ptr [r13 + VALUE], rax
#define TEST_RAX_TO_PTR_R14_(VALUE) test qword ptr [r14 + VALUE], rax
#define TEST_RAX_TO_PTR_R15_(VALUE) test qword ptr [r15 + VALUE], rax
#define TEST_RAX_TO_PTR_EAX_(VALUE) test qword ptr [eax + VALUE], rax
#define TEST_RAX_TO_PTR_EBX_(VALUE) test qword ptr [ebx + VALUE], rax
#define TEST_RAX_TO_PTR_ECX_(VALUE) test qword ptr [ecx + VALUE], rax
#define TEST_RAX_TO_PTR_EDX_(VALUE) test qword ptr [edx + VALUE], rax
#define TEST_RAX_TO_PTR_EDI_(VALUE) test qword ptr [edi + VALUE], rax
#define TEST_RAX_TO_PTR_ESI_(VALUE) test qword ptr [esi + VALUE], rax
#define TEST_RAX_TO_PTR_EBP_(VALUE) test qword ptr [ebp + VALUE], rax
#define TEST_RAX_TO_PTR_ESP_(VALUE) test qword ptr [esp + VALUE], rax

#define TEST_RBX_TO_PTR_RAX_(VALUE) test qword ptr [rax + VALUE], rbx
#define TEST_RBX_TO_PTR_RBX_(VALUE) test qword ptr [rbx + VALUE], rbx
#define TEST_RBX_TO_PTR_RCX_(VALUE) test qword ptr [rcx + VALUE], rbx
#define TEST_RBX_TO_PTR_RDX_(VALUE) test qword ptr [rdx + VALUE], rbx
#define TEST_RBX_TO_PTR_RDI_(VALUE) test qword ptr [rdi + VALUE], rbx
#define TEST_RBX_TO_PTR_RSI_(VALUE) test qword ptr [rsi + VALUE], rbx
#define TEST_RBX_TO_PTR_RBP_(VALUE) test qword ptr [rbp + VALUE], rbx
#define TEST_RBX_TO_PTR_RSP_(VALUE) test qword ptr [rsp + VALUE], rbx
#define TEST_RBX_TO_PTR_R8_(VALUE) test qword ptr [r8 + VALUE], rbx
#define TEST_RBX_TO_PTR_R9_(VALUE) test qword ptr [r9 + VALUE], rbx
#define TEST_RBX_TO_PTR_R10_(VALUE) test qword ptr [r10 + VALUE], rbx
#define TEST_RBX_TO_PTR_R11_(VALUE) test qword ptr [r11 + VALUE], rbx
#define TEST_RBX_TO_PTR_R12_(VALUE) test qword ptr [r12 + VALUE], rbx
#define TEST_RBX_TO_PTR_R13_(VALUE) test qword ptr [r13 + VALUE], rbx
#define TEST_RBX_TO_PTR_R14_(VALUE) test qword ptr [r14 + VALUE], rbx
#define TEST_RBX_TO_PTR_R15_(VALUE) test qword ptr [r15 + VALUE], rbx
#define TEST_RBX_TO_PTR_EAX_(VALUE) test qword ptr [eax + VALUE], rbx
#define TEST_RBX_TO_PTR_EBX_(VALUE) test qword ptr [ebx + VALUE], rbx
#define TEST_RBX_TO_PTR_ECX_(VALUE) test qword ptr [ecx + VALUE], rbx
#define TEST_RBX_TO_PTR_EDX_(VALUE) test qword ptr [edx + VALUE], rbx
#define TEST_RBX_TO_PTR_EDI_(VALUE) test qword ptr [edi + VALUE], rbx
#define TEST_RBX_TO_PTR_ESI_(VALUE) test qword ptr [esi + VALUE], rbx
#define TEST_RBX_TO_PTR_EBP_(VALUE) test qword ptr [ebp + VALUE], rbx
#define TEST_RBX_TO_PTR_ESP_(VALUE) test qword ptr [esp + VALUE], rbx

#define TEST_RCX_TO_PTR_RAX_(VALUE) test qword ptr [rax + VALUE], rcx
#define TEST_RCX_TO_PTR_RBX_(VALUE) test qword ptr [rbx + VALUE], rcx
#define TEST_RCX_TO_PTR_RCX_(VALUE) test qword ptr [rcx + VALUE], rcx
#define TEST_RCX_TO_PTR_RDX_(VALUE) test qword ptr [rdx + VALUE], rcx
#define TEST_RCX_TO_PTR_RDI_(VALUE) test qword ptr [rdi + VALUE], rcx
#define TEST_RCX_TO_PTR_RSI_(VALUE) test qword ptr [rsi + VALUE], rcx
#define TEST_RCX_TO_PTR_RBP_(VALUE) test qword ptr [rbp + VALUE], rcx
#define TEST_RCX_TO_PTR_RSP_(VALUE) test qword ptr [rsp + VALUE], rcx
#define TEST_RCX_TO_PTR_R8_(VALUE) test qword ptr [r8 + VALUE], rcx
#define TEST_RCX_TO_PTR_R9_(VALUE) test qword ptr [r9 + VALUE], rcx
#define TEST_RCX_TO_PTR_R10_(VALUE) test qword ptr [r10 + VALUE], rcx
#define TEST_RCX_TO_PTR_R11_(VALUE) test qword ptr [r11 + VALUE], rcx
#define TEST_RCX_TO_PTR_R12_(VALUE) test qword ptr [r12 + VALUE], rcx
#define TEST_RCX_TO_PTR_R13_(VALUE) test qword ptr [r13 + VALUE], rcx
#define TEST_RCX_TO_PTR_R14_(VALUE) test qword ptr [r14 + VALUE], rcx
#define TEST_RCX_TO_PTR_R15_(VALUE) test qword ptr [r15 + VALUE], rcx
#define TEST_RCX_TO_PTR_EAX_(VALUE) test qword ptr [eax + VALUE], rcx
#define TEST_RCX_TO_PTR_EBX_(VALUE) test qword ptr [ebx + VALUE], rcx
#define TEST_RCX_TO_PTR_ECX_(VALUE) test qword ptr [ecx + VALUE], rcx
#define TEST_RCX_TO_PTR_EDX_(VALUE) test qword ptr [edx + VALUE], rcx
#define TEST_RCX_TO_PTR_EDI_(VALUE) test qword ptr [edi + VALUE], rcx
#define TEST_RCX_TO_PTR_ESI_(VALUE) test qword ptr [esi + VALUE], rcx
#define TEST_RCX_TO_PTR_EBP_(VALUE) test qword ptr [ebp + VALUE], rcx
#define TEST_RCX_TO_PTR_ESP_(VALUE) test qword ptr [esp + VALUE], rcx

#define TEST_RDX_TO_PTR_RAX_(VALUE) test qword ptr [rax + VALUE], rdx
#define TEST_RDX_TO_PTR_RBX_(VALUE) test qword ptr [rbx + VALUE], rdx
#define TEST_RDX_TO_PTR_RCX_(VALUE) test qword ptr [rcx + VALUE], rdx
#define TEST_RDX_TO_PTR_RDX_(VALUE) test qword ptr [rdx + VALUE], rdx
#define TEST_RDX_TO_PTR_RDI_(VALUE) test qword ptr [rdi + VALUE], rdx
#define TEST_RDX_TO_PTR_RSI_(VALUE) test qword ptr [rsi + VALUE], rdx
#define TEST_RDX_TO_PTR_RBP_(VALUE) test qword ptr [rbp + VALUE], rdx
#define TEST_RDX_TO_PTR_RSP_(VALUE) test qword ptr [rsp + VALUE], rdx
#define TEST_RDX_TO_PTR_R8_(VALUE) test qword ptr [r8 + VALUE], rdx
#define TEST_RDX_TO_PTR_R9_(VALUE) test qword ptr [r9 + VALUE], rdx
#define TEST_RDX_TO_PTR_R10_(VALUE) test qword ptr [r10 + VALUE], rdx
#define TEST_RDX_TO_PTR_R11_(VALUE) test qword ptr [r11 + VALUE], rdx
#define TEST_RDX_TO_PTR_R12_(VALUE) test qword ptr [r12 + VALUE], rdx
#define TEST_RDX_TO_PTR_R13_(VALUE) test qword ptr [r13 + VALUE], rdx
#define TEST_RDX_TO_PTR_R14_(VALUE) test qword ptr [r14 + VALUE], rdx
#define TEST_RDX_TO_PTR_R15_(VALUE) test qword ptr [r15 + VALUE], rdx
#define TEST_RDX_TO_PTR_EAX_(VALUE) test qword ptr [eax + VALUE], rdx
#define TEST_RDX_TO_PTR_EBX_(VALUE) test qword ptr [ebx + VALUE], rdx
#define TEST_RDX_TO_PTR_ECX_(VALUE) test qword ptr [ecx + VALUE], rdx
#define TEST_RDX_TO_PTR_EDX_(VALUE) test qword ptr [edx + VALUE], rdx
#define TEST_RDX_TO_PTR_EDI_(VALUE) test qword ptr [edi + VALUE], rdx
#define TEST_RDX_TO_PTR_ESI_(VALUE) test qword ptr [esi + VALUE], rdx
#define TEST_RDX_TO_PTR_EBP_(VALUE) test qword ptr [ebp + VALUE], rdx
#define TEST_RDX_TO_PTR_ESP_(VALUE) test qword ptr [esp + VALUE], rdx

#define TEST_RDI_TO_PTR_RAX_(VALUE) test qword ptr [rax + VALUE], rdi
#define TEST_RDI_TO_PTR_RBX_(VALUE) test qword ptr [rbx + VALUE], rdi
#define TEST_RDI_TO_PTR_RCX_(VALUE) test qword ptr [rcx + VALUE], rdi
#define TEST_RDI_TO_PTR_RDX_(VALUE) test qword ptr [rdx + VALUE], rdi
#define TEST_RDI_TO_PTR_RDI_(VALUE) test qword ptr [rdi + VALUE], rdi
#define TEST_RDI_TO_PTR_RSI_(VALUE) test qword ptr [rsi + VALUE], rdi
#define TEST_RDI_TO_PTR_RBP_(VALUE) test qword ptr [rbp + VALUE], rdi
#define TEST_RDI_TO_PTR_RSP_(VALUE) test qword ptr [rsp + VALUE], rdi
#define TEST_RDI_TO_PTR_R8_(VALUE) test qword ptr [r8 + VALUE], rdi
#define TEST_RDI_TO_PTR_R9_(VALUE) test qword ptr [r9 + VALUE], rdi
#define TEST_RDI_TO_PTR_R10_(VALUE) test qword ptr [r10 + VALUE], rdi
#define TEST_RDI_TO_PTR_R11_(VALUE) test qword ptr [r11 + VALUE], rdi
#define TEST_RDI_TO_PTR_R12_(VALUE) test qword ptr [r12 + VALUE], rdi
#define TEST_RDI_TO_PTR_R13_(VALUE) test qword ptr [r13 + VALUE], rdi
#define TEST_RDI_TO_PTR_R14_(VALUE) test qword ptr [r14 + VALUE], rdi
#define TEST_RDI_TO_PTR_R15_(VALUE) test qword ptr [r15 + VALUE], rdi
#define TEST_RDI_TO_PTR_EAX_(VALUE) test qword ptr [eax + VALUE], rdi
#define TEST_RDI_TO_PTR_EBX_(VALUE) test qword ptr [ebx + VALUE], rdi
#define TEST_RDI_TO_PTR_ECX_(VALUE) test qword ptr [ecx + VALUE], rdi
#define TEST_RDI_TO_PTR_EDX_(VALUE) test qword ptr [edx + VALUE], rdi
#define TEST_RDI_TO_PTR_EDI_(VALUE) test qword ptr [edi + VALUE], rdi
#define TEST_RDI_TO_PTR_ESI_(VALUE) test qword ptr [esi + VALUE], rdi
#define TEST_RDI_TO_PTR_EBP_(VALUE) test qword ptr [ebp + VALUE], rdi
#define TEST_RDI_TO_PTR_ESP_(VALUE) test qword ptr [esp + VALUE], rdi

#define TEST_RSI_TO_PTR_RAX_(VALUE) test qword ptr [rax + VALUE], rsi
#define TEST_RSI_TO_PTR_RBX_(VALUE) test qword ptr [rbx + VALUE], rsi
#define TEST_RSI_TO_PTR_RCX_(VALUE) test qword ptr [rcx + VALUE], rsi
#define TEST_RSI_TO_PTR_RDX_(VALUE) test qword ptr [rdx + VALUE], rsi
#define TEST_RSI_TO_PTR_RDI_(VALUE) test qword ptr [rdi + VALUE], rsi
#define TEST_RSI_TO_PTR_RSI_(VALUE) test qword ptr [rsi + VALUE], rsi
#define TEST_RSI_TO_PTR_RBP_(VALUE) test qword ptr [rbp + VALUE], rsi
#define TEST_RSI_TO_PTR_RSP_(VALUE) test qword ptr [rsp + VALUE], rsi
#define TEST_RSI_TO_PTR_R8_(VALUE) test qword ptr [r8 + VALUE], rsi
#define TEST_RSI_TO_PTR_R9_(VALUE) test qword ptr [r9 + VALUE], rsi
#define TEST_RSI_TO_PTR_R10_(VALUE) test qword ptr [r10 + VALUE], rsi
#define TEST_RSI_TO_PTR_R11_(VALUE) test qword ptr [r11 + VALUE], rsi
#define TEST_RSI_TO_PTR_R12_(VALUE) test qword ptr [r12 + VALUE], rsi
#define TEST_RSI_TO_PTR_R13_(VALUE) test qword ptr [r13 + VALUE], rsi
#define TEST_RSI_TO_PTR_R14_(VALUE) test qword ptr [r14 + VALUE], rsi
#define TEST_RSI_TO_PTR_R15_(VALUE) test qword ptr [r15 + VALUE], rsi
#define TEST_RSI_TO_PTR_EAX_(VALUE) test qword ptr [eax + VALUE], rsi
#define TEST_RSI_TO_PTR_EBX_(VALUE) test qword ptr [ebx + VALUE], rsi
#define TEST_RSI_TO_PTR_ECX_(VALUE) test qword ptr [ecx + VALUE], rsi
#define TEST_RSI_TO_PTR_EDX_(VALUE) test qword ptr [edx + VALUE], rsi
#define TEST_RSI_TO_PTR_EDI_(VALUE) test qword ptr [edi + VALUE], rsi
#define TEST_RSI_TO_PTR_ESI_(VALUE) test qword ptr [esi + VALUE], rsi
#define TEST_RSI_TO_PTR_EBP_(VALUE) test qword ptr [ebp + VALUE], rsi
#define TEST_RSI_TO_PTR_ESP_(VALUE) test qword ptr [esp + VALUE], rsi

#define TEST_RBP_TO_PTR_RAX_(VALUE) test qword ptr [rax + VALUE], rbp
#define TEST_RBP_TO_PTR_RBX_(VALUE) test qword ptr [rbx + VALUE], rbp
#define TEST_RBP_TO_PTR_RCX_(VALUE) test qword ptr [rcx + VALUE], rbp
#define TEST_RBP_TO_PTR_RDX_(VALUE) test qword ptr [rdx + VALUE], rbp
#define TEST_RBP_TO_PTR_RDI_(VALUE) test qword ptr [rdi + VALUE], rbp
#define TEST_RBP_TO_PTR_RSI_(VALUE) test qword ptr [rsi + VALUE], rbp
#define TEST_RBP_TO_PTR_RBP_(VALUE) test qword ptr [rbp + VALUE], rbp
#define TEST_RBP_TO_PTR_RSP_(VALUE) test qword ptr [rsp + VALUE], rbp
#define TEST_RBP_TO_PTR_R8_(VALUE) test qword ptr [r8 + VALUE], rbp
#define TEST_RBP_TO_PTR_R9_(VALUE) test qword ptr [r9 + VALUE], rbp
#define TEST_RBP_TO_PTR_R10_(VALUE) test qword ptr [r10 + VALUE], rbp
#define TEST_RBP_TO_PTR_R11_(VALUE) test qword ptr [r11 + VALUE], rbp
#define TEST_RBP_TO_PTR_R12_(VALUE) test qword ptr [r12 + VALUE], rbp
#define TEST_RBP_TO_PTR_R13_(VALUE) test qword ptr [r13 + VALUE], rbp
#define TEST_RBP_TO_PTR_R14_(VALUE) test qword ptr [r14 + VALUE], rbp
#define TEST_RBP_TO_PTR_R15_(VALUE) test qword ptr [r15 + VALUE], rbp
#define TEST_RBP_TO_PTR_EAX_(VALUE) test qword ptr [eax + VALUE], rbp
#define TEST_RBP_TO_PTR_EBX_(VALUE) test qword ptr [ebx + VALUE], rbp
#define TEST_RBP_TO_PTR_ECX_(VALUE) test qword ptr [ecx + VALUE], rbp
#define TEST_RBP_TO_PTR_EDX_(VALUE) test qword ptr [edx + VALUE], rbp
#define TEST_RBP_TO_PTR_EDI_(VALUE) test qword ptr [edi + VALUE], rbp
#define TEST_RBP_TO_PTR_ESI_(VALUE) test qword ptr [esi + VALUE], rbp
#define TEST_RBP_TO_PTR_EBP_(VALUE) test qword ptr [ebp + VALUE], rbp
#define TEST_RBP_TO_PTR_ESP_(VALUE) test qword ptr [esp + VALUE], rbp

#define TEST_RSP_TO_PTR_RAX_(VALUE) test qword ptr [rax + VALUE], rsp
#define TEST_RSP_TO_PTR_RBX_(VALUE) test qword ptr [rbx + VALUE], rsp
#define TEST_RSP_TO_PTR_RCX_(VALUE) test qword ptr [rcx + VALUE], rsp
#define TEST_RSP_TO_PTR_RDX_(VALUE) test qword ptr [rdx + VALUE], rsp
#define TEST_RSP_TO_PTR_RDI_(VALUE) test qword ptr [rdi + VALUE], rsp
#define TEST_RSP_TO_PTR_RSI_(VALUE) test qword ptr [rsi + VALUE], rsp
#define TEST_RSP_TO_PTR_RBP_(VALUE) test qword ptr [rbp + VALUE], rsp
#define TEST_RSP_TO_PTR_RSP_(VALUE) test qword ptr [rsp + VALUE], rsp
#define TEST_RSP_TO_PTR_R8_(VALUE) test qword ptr [r8 + VALUE], rsp
#define TEST_RSP_TO_PTR_R9_(VALUE) test qword ptr [r9 + VALUE], rsp
#define TEST_RSP_TO_PTR_R10_(VALUE) test qword ptr [r10 + VALUE], rsp
#define TEST_RSP_TO_PTR_R11_(VALUE) test qword ptr [r11 + VALUE], rsp
#define TEST_RSP_TO_PTR_R12_(VALUE) test qword ptr [r12 + VALUE], rsp
#define TEST_RSP_TO_PTR_R13_(VALUE) test qword ptr [r13 + VALUE], rsp
#define TEST_RSP_TO_PTR_R14_(VALUE) test qword ptr [r14 + VALUE], rsp
#define TEST_RSP_TO_PTR_R15_(VALUE) test qword ptr [r15 + VALUE], rsp
#define TEST_RSP_TO_PTR_EAX_(VALUE) test qword ptr [eax + VALUE], rsp
#define TEST_RSP_TO_PTR_EBX_(VALUE) test qword ptr [ebx + VALUE], rsp
#define TEST_RSP_TO_PTR_ECX_(VALUE) test qword ptr [ecx + VALUE], rsp
#define TEST_RSP_TO_PTR_EDX_(VALUE) test qword ptr [edx + VALUE], rsp
#define TEST_RSP_TO_PTR_EDI_(VALUE) test qword ptr [edi + VALUE], rsp
#define TEST_RSP_TO_PTR_ESI_(VALUE) test qword ptr [esi + VALUE], rsp
#define TEST_RSP_TO_PTR_EBP_(VALUE) test qword ptr [ebp + VALUE], rsp
#define TEST_RSP_TO_PTR_ESP_(VALUE) test qword ptr [esp + VALUE], rsp

#define TEST_R8_TO_PTR_RAX_(VALUE) test qword ptr [rax + VALUE], r8
#define TEST_R8_TO_PTR_RBX_(VALUE) test qword ptr [rbx + VALUE], r8
#define TEST_R8_TO_PTR_RCX_(VALUE) test qword ptr [rcx + VALUE], r8
#define TEST_R8_TO_PTR_RDX_(VALUE) test qword ptr [rdx + VALUE], r8
#define TEST_R8_TO_PTR_RDI_(VALUE) test qword ptr [rdi + VALUE], r8
#define TEST_R8_TO_PTR_RSI_(VALUE) test qword ptr [rsi + VALUE], r8
#define TEST_R8_TO_PTR_RBP_(VALUE) test qword ptr [rbp + VALUE], r8
#define TEST_R8_TO_PTR_RSP_(VALUE) test qword ptr [rsp + VALUE], r8
#define TEST_R8_TO_PTR_R8_(VALUE) test qword ptr [r8 + VALUE], r8
#define TEST_R8_TO_PTR_R9_(VALUE) test qword ptr [r9 + VALUE], r8
#define TEST_R8_TO_PTR_R10_(VALUE) test qword ptr [r10 + VALUE], r8
#define TEST_R8_TO_PTR_R11_(VALUE) test qword ptr [r11 + VALUE], r8
#define TEST_R8_TO_PTR_R12_(VALUE) test qword ptr [r12 + VALUE], r8
#define TEST_R8_TO_PTR_R13_(VALUE) test qword ptr [r13 + VALUE], r8
#define TEST_R8_TO_PTR_R14_(VALUE) test qword ptr [r14 + VALUE], r8
#define TEST_R8_TO_PTR_R15_(VALUE) test qword ptr [r15 + VALUE], r8
#define TEST_R8_TO_PTR_EAX_(VALUE) test qword ptr [eax + VALUE], r8
#define TEST_R8_TO_PTR_EBX_(VALUE) test qword ptr [ebx + VALUE], r8
#define TEST_R8_TO_PTR_ECX_(VALUE) test qword ptr [ecx + VALUE], r8
#define TEST_R8_TO_PTR_EDX_(VALUE) test qword ptr [edx + VALUE], r8
#define TEST_R8_TO_PTR_EDI_(VALUE) test qword ptr [edi + VALUE], r8
#define TEST_R8_TO_PTR_ESI_(VALUE) test qword ptr [esi + VALUE], r8
#define TEST_R8_TO_PTR_EBP_(VALUE) test qword ptr [ebp + VALUE], r8
#define TEST_R8_TO_PTR_ESP_(VALUE) test qword ptr [esp + VALUE], r8

#define TEST_R9_TO_PTR_RAX_(VALUE) test qword ptr [rax + VALUE], r9
#define TEST_R9_TO_PTR_RBX_(VALUE) test qword ptr [rbx + VALUE], r9
#define TEST_R9_TO_PTR_RCX_(VALUE) test qword ptr [rcx + VALUE], r9
#define TEST_R9_TO_PTR_RDX_(VALUE) test qword ptr [rdx + VALUE], r9
#define TEST_R9_TO_PTR_RDI_(VALUE) test qword ptr [rdi + VALUE], r9
#define TEST_R9_TO_PTR_RSI_(VALUE) test qword ptr [rsi + VALUE], r9
#define TEST_R9_TO_PTR_RBP_(VALUE) test qword ptr [rbp + VALUE], r9
#define TEST_R9_TO_PTR_RSP_(VALUE) test qword ptr [rsp + VALUE], r9
#define TEST_R9_TO_PTR_R8_(VALUE) test qword ptr [r8 + VALUE], r9
#define TEST_R9_TO_PTR_R9_(VALUE) test qword ptr [r9 + VALUE], r9
#define TEST_R9_TO_PTR_R10_(VALUE) test qword ptr [r10 + VALUE], r9
#define TEST_R9_TO_PTR_R11_(VALUE) test qword ptr [r11 + VALUE], r9
#define TEST_R9_TO_PTR_R12_(VALUE) test qword ptr [r12 + VALUE], r9
#define TEST_R9_TO_PTR_R13_(VALUE) test qword ptr [r13 + VALUE], r9
#define TEST_R9_TO_PTR_R14_(VALUE) test qword ptr [r14 + VALUE], r9
#define TEST_R9_TO_PTR_R15_(VALUE) test qword ptr [r15 + VALUE], r9
#define TEST_R9_TO_PTR_EAX_(VALUE) test qword ptr [eax + VALUE], r9
#define TEST_R9_TO_PTR_EBX_(VALUE) test qword ptr [ebx + VALUE], r9
#define TEST_R9_TO_PTR_ECX_(VALUE) test qword ptr [ecx + VALUE], r9
#define TEST_R9_TO_PTR_EDX_(VALUE) test qword ptr [edx + VALUE], r9
#define TEST_R9_TO_PTR_EDI_(VALUE) test qword ptr [edi + VALUE], r9
#define TEST_R9_TO_PTR_ESI_(VALUE) test qword ptr [esi + VALUE], r9
#define TEST_R9_TO_PTR_EBP_(VALUE) test qword ptr [ebp + VALUE], r9
#define TEST_R9_TO_PTR_ESP_(VALUE) test qword ptr [esp + VALUE], r9

#define TEST_R10_TO_PTR_RAX_(VALUE) test qword ptr [rax + VALUE], r10
#define TEST_R10_TO_PTR_RBX_(VALUE) test qword ptr [rbx + VALUE], r10
#define TEST_R10_TO_PTR_RCX_(VALUE) test qword ptr [rcx + VALUE], r10
#define TEST_R10_TO_PTR_RDX_(VALUE) test qword ptr [rdx + VALUE], r10
#define TEST_R10_TO_PTR_RDI_(VALUE) test qword ptr [rdi + VALUE], r10
#define TEST_R10_TO_PTR_RSI_(VALUE) test qword ptr [rsi + VALUE], r10
#define TEST_R10_TO_PTR_RBP_(VALUE) test qword ptr [rbp + VALUE], r10
#define TEST_R10_TO_PTR_RSP_(VALUE) test qword ptr [rsp + VALUE], r10
#define TEST_R10_TO_PTR_R8_(VALUE) test qword ptr [r8 + VALUE], r10
#define TEST_R10_TO_PTR_R9_(VALUE) test qword ptr [r9 + VALUE], r10
#define TEST_R10_TO_PTR_R10_(VALUE) test qword ptr [r10 + VALUE], r10
#define TEST_R10_TO_PTR_R11_(VALUE) test qword ptr [r11 + VALUE], r10
#define TEST_R10_TO_PTR_R12_(VALUE) test qword ptr [r12 + VALUE], r10
#define TEST_R10_TO_PTR_R13_(VALUE) test qword ptr [r13 + VALUE], r10
#define TEST_R10_TO_PTR_R14_(VALUE) test qword ptr [r14 + VALUE], r10
#define TEST_R10_TO_PTR_R15_(VALUE) test qword ptr [r15 + VALUE], r10
#define TEST_R10_TO_PTR_EAX_(VALUE) test qword ptr [eax + VALUE], r10
#define TEST_R10_TO_PTR_EBX_(VALUE) test qword ptr [ebx + VALUE], r10
#define TEST_R10_TO_PTR_ECX_(VALUE) test qword ptr [ecx + VALUE], r10
#define TEST_R10_TO_PTR_EDX_(VALUE) test qword ptr [edx + VALUE], r10
#define TEST_R10_TO_PTR_EDI_(VALUE) test qword ptr [edi + VALUE], r10
#define TEST_R10_TO_PTR_ESI_(VALUE) test qword ptr [esi + VALUE], r10
#define TEST_R10_TO_PTR_EBP_(VALUE) test qword ptr [ebp + VALUE], r10
#define TEST_R10_TO_PTR_ESP_(VALUE) test qword ptr [esp + VALUE], r10

#define TEST_R11_TO_PTR_RAX_(VALUE) test qword ptr [rax + VALUE], r11
#define TEST_R11_TO_PTR_RBX_(VALUE) test qword ptr [rbx + VALUE], r11
#define TEST_R11_TO_PTR_RCX_(VALUE) test qword ptr [rcx + VALUE], r11
#define TEST_R11_TO_PTR_RDX_(VALUE) test qword ptr [rdx + VALUE], r11
#define TEST_R11_TO_PTR_RDI_(VALUE) test qword ptr [rdi + VALUE], r11
#define TEST_R11_TO_PTR_RSI_(VALUE) test qword ptr [rsi + VALUE], r11
#define TEST_R11_TO_PTR_RBP_(VALUE) test qword ptr [rbp + VALUE], r11
#define TEST_R11_TO_PTR_RSP_(VALUE) test qword ptr [rsp + VALUE], r11
#define TEST_R11_TO_PTR_R8_(VALUE) test qword ptr [r8 + VALUE], r11
#define TEST_R11_TO_PTR_R9_(VALUE) test qword ptr [r9 + VALUE], r11
#define TEST_R11_TO_PTR_R10_(VALUE) test qword ptr [r10 + VALUE], r11
#define TEST_R11_TO_PTR_R11_(VALUE) test qword ptr [r11 + VALUE], r11
#define TEST_R11_TO_PTR_R12_(VALUE) test qword ptr [r12 + VALUE], r11
#define TEST_R11_TO_PTR_R13_(VALUE) test qword ptr [r13 + VALUE], r11
#define TEST_R11_TO_PTR_R14_(VALUE) test qword ptr [r14 + VALUE], r11
#define TEST_R11_TO_PTR_R15_(VALUE) test qword ptr [r15 + VALUE], r11
#define TEST_R11_TO_PTR_EAX_(VALUE) test qword ptr [eax + VALUE], r11
#define TEST_R11_TO_PTR_EBX_(VALUE) test qword ptr [ebx + VALUE], r11
#define TEST_R11_TO_PTR_ECX_(VALUE) test qword ptr [ecx + VALUE], r11
#define TEST_R11_TO_PTR_EDX_(VALUE) test qword ptr [edx + VALUE], r11
#define TEST_R11_TO_PTR_EDI_(VALUE) test qword ptr [edi + VALUE], r11
#define TEST_R11_TO_PTR_ESI_(VALUE) test qword ptr [esi + VALUE], r11
#define TEST_R11_TO_PTR_EBP_(VALUE) test qword ptr [ebp + VALUE], r11
#define TEST_R11_TO_PTR_ESP_(VALUE) test qword ptr [esp + VALUE], r11

#define TEST_R12_TO_PTR_RAX_(VALUE) test qword ptr [rax + VALUE], r12
#define TEST_R12_TO_PTR_RBX_(VALUE) test qword ptr [rbx + VALUE], r12
#define TEST_R12_TO_PTR_RCX_(VALUE) test qword ptr [rcx + VALUE], r12
#define TEST_R12_TO_PTR_RDX_(VALUE) test qword ptr [rdx + VALUE], r12
#define TEST_R12_TO_PTR_RDI_(VALUE) test qword ptr [rdi + VALUE], r12
#define TEST_R12_TO_PTR_RSI_(VALUE) test qword ptr [rsi + VALUE], r12
#define TEST_R12_TO_PTR_RBP_(VALUE) test qword ptr [rbp + VALUE], r12
#define TEST_R12_TO_PTR_RSP_(VALUE) test qword ptr [rsp + VALUE], r12
#define TEST_R12_TO_PTR_R8_(VALUE) test qword ptr [r8 + VALUE], r12
#define TEST_R12_TO_PTR_R9_(VALUE) test qword ptr [r9 + VALUE], r12
#define TEST_R12_TO_PTR_R10_(VALUE) test qword ptr [r10 + VALUE], r12
#define TEST_R12_TO_PTR_R11_(VALUE) test qword ptr [r11 + VALUE], r12
#define TEST_R12_TO_PTR_R12_(VALUE) test qword ptr [r12 + VALUE], r12
#define TEST_R12_TO_PTR_R13_(VALUE) test qword ptr [r13 + VALUE], r12
#define TEST_R12_TO_PTR_R14_(VALUE) test qword ptr [r14 + VALUE], r12
#define TEST_R12_TO_PTR_R15_(VALUE) test qword ptr [r15 + VALUE], r12
#define TEST_R12_TO_PTR_EAX_(VALUE) test qword ptr [eax + VALUE], r12
#define TEST_R12_TO_PTR_EBX_(VALUE) test qword ptr [ebx + VALUE], r12
#define TEST_R12_TO_PTR_ECX_(VALUE) test qword ptr [ecx + VALUE], r12
#define TEST_R12_TO_PTR_EDX_(VALUE) test qword ptr [edx + VALUE], r12
#define TEST_R12_TO_PTR_EDI_(VALUE) test qword ptr [edi + VALUE], r12
#define TEST_R12_TO_PTR_ESI_(VALUE) test qword ptr [esi + VALUE], r12
#define TEST_R12_TO_PTR_EBP_(VALUE) test qword ptr [ebp + VALUE], r12
#define TEST_R12_TO_PTR_ESP_(VALUE) test qword ptr [esp + VALUE], r12

#define TEST_R13_TO_PTR_RAX_(VALUE) test qword ptr [rax + VALUE], r13
#define TEST_R13_TO_PTR_RBX_(VALUE) test qword ptr [rbx + VALUE], r13
#define TEST_R13_TO_PTR_RCX_(VALUE) test qword ptr [rcx + VALUE], r13
#define TEST_R13_TO_PTR_RDX_(VALUE) test qword ptr [rdx + VALUE], r13
#define TEST_R13_TO_PTR_RDI_(VALUE) test qword ptr [rdi + VALUE], r13
#define TEST_R13_TO_PTR_RSI_(VALUE) test qword ptr [rsi + VALUE], r13
#define TEST_R13_TO_PTR_RBP_(VALUE) test qword ptr [rbp + VALUE], r13
#define TEST_R13_TO_PTR_RSP_(VALUE) test qword ptr [rsp + VALUE], r13
#define TEST_R13_TO_PTR_R8_(VALUE) test qword ptr [r8 + VALUE], r13
#define TEST_R13_TO_PTR_R9_(VALUE) test qword ptr [r9 + VALUE], r13
#define TEST_R13_TO_PTR_R10_(VALUE) test qword ptr [r10 + VALUE], r13
#define TEST_R13_TO_PTR_R11_(VALUE) test qword ptr [r11 + VALUE], r13
#define TEST_R13_TO_PTR_R12_(VALUE) test qword ptr [r12 + VALUE], r13
#define TEST_R13_TO_PTR_R13_(VALUE) test qword ptr [r13 + VALUE], r13
#define TEST_R13_TO_PTR_R14_(VALUE) test qword ptr [r14 + VALUE], r13
#define TEST_R13_TO_PTR_R15_(VALUE) test qword ptr [r15 + VALUE], r13
#define TEST_R13_TO_PTR_EAX_(VALUE) test qword ptr [eax + VALUE], r13
#define TEST_R13_TO_PTR_EBX_(VALUE) test qword ptr [ebx + VALUE], r13
#define TEST_R13_TO_PTR_ECX_(VALUE) test qword ptr [ecx + VALUE], r13
#define TEST_R13_TO_PTR_EDX_(VALUE) test qword ptr [edx + VALUE], r13
#define TEST_R13_TO_PTR_EDI_(VALUE) test qword ptr [edi + VALUE], r13
#define TEST_R13_TO_PTR_ESI_(VALUE) test qword ptr [esi + VALUE], r13
#define TEST_R13_TO_PTR_EBP_(VALUE) test qword ptr [ebp + VALUE], r13
#define TEST_R13_TO_PTR_ESP_(VALUE) test qword ptr [esp + VALUE], r13

#define TEST_R14_TO_PTR_RAX_(VALUE) test qword ptr [rax + VALUE], r14
#define TEST_R14_TO_PTR_RBX_(VALUE) test qword ptr [rbx + VALUE], r14
#define TEST_R14_TO_PTR_RCX_(VALUE) test qword ptr [rcx + VALUE], r14
#define TEST_R14_TO_PTR_RDX_(VALUE) test qword ptr [rdx + VALUE], r14
#define TEST_R14_TO_PTR_RDI_(VALUE) test qword ptr [rdi + VALUE], r14
#define TEST_R14_TO_PTR_RSI_(VALUE) test qword ptr [rsi + VALUE], r14
#define TEST_R14_TO_PTR_RBP_(VALUE) test qword ptr [rbp + VALUE], r14
#define TEST_R14_TO_PTR_RSP_(VALUE) test qword ptr [rsp + VALUE], r14
#define TEST_R14_TO_PTR_R8_(VALUE) test qword ptr [r8 + VALUE], r14
#define TEST_R14_TO_PTR_R9_(VALUE) test qword ptr [r9 + VALUE], r14
#define TEST_R14_TO_PTR_R10_(VALUE) test qword ptr [r10 + VALUE], r14
#define TEST_R14_TO_PTR_R11_(VALUE) test qword ptr [r11 + VALUE], r14
#define TEST_R14_TO_PTR_R12_(VALUE) test qword ptr [r12 + VALUE], r14
#define TEST_R14_TO_PTR_R13_(VALUE) test qword ptr [r13 + VALUE], r14
#define TEST_R14_TO_PTR_R14_(VALUE) test qword ptr [r14 + VALUE], r14
#define TEST_R14_TO_PTR_R15_(VALUE) test qword ptr [r15 + VALUE], r14
#define TEST_R14_TO_PTR_EAX_(VALUE) test qword ptr [eax + VALUE], r14
#define TEST_R14_TO_PTR_EBX_(VALUE) test qword ptr [ebx + VALUE], r14
#define TEST_R14_TO_PTR_ECX_(VALUE) test qword ptr [ecx + VALUE], r14
#define TEST_R14_TO_PTR_EDX_(VALUE) test qword ptr [edx + VALUE], r14
#define TEST_R14_TO_PTR_EDI_(VALUE) test qword ptr [edi + VALUE], r14
#define TEST_R14_TO_PTR_ESI_(VALUE) test qword ptr [esi + VALUE], r14
#define TEST_R14_TO_PTR_EBP_(VALUE) test qword ptr [ebp + VALUE], r14
#define TEST_R14_TO_PTR_ESP_(VALUE) test qword ptr [esp + VALUE], r14

#define TEST_R15_TO_PTR_RAX_(VALUE) test qword ptr [rax + VALUE], r15
#define TEST_R15_TO_PTR_RBX_(VALUE) test qword ptr [rbx + VALUE], r15
#define TEST_R15_TO_PTR_RCX_(VALUE) test qword ptr [rcx + VALUE], r15
#define TEST_R15_TO_PTR_RDX_(VALUE) test qword ptr [rdx + VALUE], r15
#define TEST_R15_TO_PTR_RDI_(VALUE) test qword ptr [rdi + VALUE], r15
#define TEST_R15_TO_PTR_RSI_(VALUE) test qword ptr [rsi + VALUE], r15
#define TEST_R15_TO_PTR_RBP_(VALUE) test qword ptr [rbp + VALUE], r15
#define TEST_R15_TO_PTR_RSP_(VALUE) test qword ptr [rsp + VALUE], r15
#define TEST_R15_TO_PTR_R8_(VALUE) test qword ptr [r8 + VALUE], r15
#define TEST_R15_TO_PTR_R9_(VALUE) test qword ptr [r9 + VALUE], r15
#define TEST_R15_TO_PTR_R10_(VALUE) test qword ptr [r10 + VALUE], r15
#define TEST_R15_TO_PTR_R11_(VALUE) test qword ptr [r11 + VALUE], r15
#define TEST_R15_TO_PTR_R12_(VALUE) test qword ptr [r12 + VALUE], r15
#define TEST_R15_TO_PTR_R13_(VALUE) test qword ptr [r13 + VALUE], r15
#define TEST_R15_TO_PTR_R14_(VALUE) test qword ptr [r14 + VALUE], r15
#define TEST_R15_TO_PTR_R15_(VALUE) test qword ptr [r15 + VALUE], r15
#define TEST_R15_TO_PTR_EAX_(VALUE) test qword ptr [eax + VALUE], r15
#define TEST_R15_TO_PTR_EBX_(VALUE) test qword ptr [ebx + VALUE], r15
#define TEST_R15_TO_PTR_ECX_(VALUE) test qword ptr [ecx + VALUE], r15
#define TEST_R15_TO_PTR_EDX_(VALUE) test qword ptr [edx + VALUE], r15
#define TEST_R15_TO_PTR_EDI_(VALUE) test qword ptr [edi + VALUE], r15
#define TEST_R15_TO_PTR_ESI_(VALUE) test qword ptr [esi + VALUE], r15
#define TEST_R15_TO_PTR_EBP_(VALUE) test qword ptr [ebp + VALUE], r15
#define TEST_R15_TO_PTR_ESP_(VALUE) test qword ptr [esp + VALUE], r15
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
