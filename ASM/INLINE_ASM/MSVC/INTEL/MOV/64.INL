#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************ [v] 64-BIT REGISTERS [v] ************************ */
#define MOV_RAX_RAX mov rax, rax
#define MOV_RAX_RBX mov rax, rbx
#define MOV_RAX_RCX mov rax, rcx
#define MOV_RAX_RDX mov rax, rdx
#define MOV_RAX_RDI mov rax, rdi
#define MOV_RAX_RSI mov rax, rsi
#define MOV_RAX_RBP mov rax, rbp
#define MOV_RAX_RSP mov rax, rsp
#define MOV_RAX_R8 mov rax, r8
#define MOV_RAX_R9 mov rax, r9
#define MOV_RAX_R10 mov rax, r10
#define MOV_RAX_R11 mov rax, r11
#define MOV_RAX_R12 mov rax, r12
#define MOV_RAX_R13 mov rax, r13
#define MOV_RAX_R14 mov rax, r14
#define MOV_RAX_R15 mov rax, r15

#define MOV_RBX_RAX mov rbx, rax
#define MOV_RBX_RBX mov rbx, rbx
#define MOV_RBX_RCX mov rbx, rcx
#define MOV_RBX_RDX mov rbx, rdx
#define MOV_RBX_RDI mov rbx, rdi
#define MOV_RBX_RSI mov rbx, rsi
#define MOV_RBX_RBP mov rbx, rbp
#define MOV_RBX_RSP mov rbx, rsp
#define MOV_RBX_R8 mov rbx, r8
#define MOV_RBX_R9 mov rbx, r9
#define MOV_RBX_R10 mov rbx, r10
#define MOV_RBX_R11 mov rbx, r11
#define MOV_RBX_R12 mov rbx, r12
#define MOV_RBX_R13 mov rbx, r13
#define MOV_RBX_R14 mov rbx, r14
#define MOV_RBX_R15 mov rbx, r15

#define MOV_RCX_RAX mov rcx, rax
#define MOV_RCX_RBX mov rcx, rbx
#define MOV_RCX_RCX mov rcx, rcx
#define MOV_RCX_RDX mov rcx, rdx
#define MOV_RCX_RDI mov rcx, rdi
#define MOV_RCX_RSI mov rcx, rsi
#define MOV_RCX_RBP mov rcx, rbp
#define MOV_RCX_RSP mov rcx, rsp
#define MOV_RCX_R8 mov rcx, r8
#define MOV_RCX_R9 mov rcx, r9
#define MOV_RCX_R10 mov rcx, r10
#define MOV_RCX_R11 mov rcx, r11
#define MOV_RCX_R12 mov rcx, r12
#define MOV_RCX_R13 mov rcx, r13
#define MOV_RCX_R14 mov rcx, r14
#define MOV_RCX_R15 mov rcx, r15

#define MOV_RDX_RAX mov rdx, rax
#define MOV_RDX_RBX mov rdx, rbx
#define MOV_RDX_RCX mov rdx, rcx
#define MOV_RDX_RDX mov rdx, rdx
#define MOV_RDX_RDI mov rdx, rdi
#define MOV_RDX_RSI mov rdx, rsi
#define MOV_RDX_RBP mov rdx, rbp
#define MOV_RDX_RSP mov rdx, rsp
#define MOV_RDX_R8 mov rdx, r8
#define MOV_RDX_R9 mov rdx, r9
#define MOV_RDX_R10 mov rdx, r10
#define MOV_RDX_R11 mov rdx, r11
#define MOV_RDX_R12 mov rdx, r12
#define MOV_RDX_R13 mov rdx, r13
#define MOV_RDX_R14 mov rdx, r14
#define MOV_RDX_R15 mov rdx, r15

#define MOV_RDI_RAX mov rdi, rax
#define MOV_RDI_RBX mov rdi, rbx
#define MOV_RDI_RCX mov rdi, rcx
#define MOV_RDI_RDX mov rdi, rdx
#define MOV_RDI_RDI mov rdi, rdi
#define MOV_RDI_RSI mov rdi, rsi
#define MOV_RDI_RBP mov rdi, rbp
#define MOV_RDI_RSP mov rdi, rsp
#define MOV_RDI_R8 mov rdi, r8
#define MOV_RDI_R9 mov rdi, r9
#define MOV_RDI_R10 mov rdi, r10
#define MOV_RDI_R11 mov rdi, r11
#define MOV_RDI_R12 mov rdi, r12
#define MOV_RDI_R13 mov rdi, r13
#define MOV_RDI_R14 mov rdi, r14
#define MOV_RDI_R15 mov rdi, r15

#define MOV_RSI_RAX mov rsi, rax
#define MOV_RSI_RBX mov rsi, rbx
#define MOV_RSI_RCX mov rsi, rcx
#define MOV_RSI_RDX mov rsi, rdx
#define MOV_RSI_RDI mov rsi, rdi
#define MOV_RSI_RSI mov rsi, rsi
#define MOV_RSI_RBP mov rsi, rbp
#define MOV_RSI_RSP mov rsi, rsp
#define MOV_RSI_R8 mov rsi, r8
#define MOV_RSI_R9 mov rsi, r9
#define MOV_RSI_R10 mov rsi, r10
#define MOV_RSI_R11 mov rsi, r11
#define MOV_RSI_R12 mov rsi, r12
#define MOV_RSI_R13 mov rsi, r13
#define MOV_RSI_R14 mov rsi, r14
#define MOV_RSI_R15 mov rsi, r15

#define MOV_RBP_RAX mov rbp, rax
#define MOV_RBP_RBX mov rbp, rbx
#define MOV_RBP_RCX mov rbp, rcx
#define MOV_RBP_RDX mov rbp, rdx
#define MOV_RBP_RDI mov rbp, rdi
#define MOV_RBP_RSI mov rbp, rsi
#define MOV_RBP_RBP mov rbp, rbp
#define MOV_RBP_RSP mov rbp, rsp
#define MOV_RBP_R8 mov rbp, r8
#define MOV_RBP_R9 mov rbp, r9
#define MOV_RBP_R10 mov rbp, r10
#define MOV_RBP_R11 mov rbp, r11
#define MOV_RBP_R12 mov rbp, r12
#define MOV_RBP_R13 mov rbp, r13
#define MOV_RBP_R14 mov rbp, r14
#define MOV_RBP_R15 mov rbp, r15

#define MOV_RSP_RAX mov rsp, rax
#define MOV_RSP_RBX mov rsp, rbx
#define MOV_RSP_RCX mov rsp, rcx
#define MOV_RSP_RDX mov rsp, rdx
#define MOV_RSP_RDI mov rsp, rdi
#define MOV_RSP_RSI mov rsp, rsi
#define MOV_RSP_RBP mov rsp, rbp
#define MOV_RSP_RSP mov rsp, rsp
#define MOV_RSP_R8 mov rsp, r8
#define MOV_RSP_R9 mov rsp, r9
#define MOV_RSP_R10 mov rsp, r10
#define MOV_RSP_R11 mov rsp, r11
#define MOV_RSP_R12 mov rsp, r12
#define MOV_RSP_R13 mov rsp, r13
#define MOV_RSP_R14 mov rsp, r14
#define MOV_RSP_R15 mov rsp, r15

#define MOV_R8_RAX mov r8, rax
#define MOV_R8_RBX mov r8, rbx
#define MOV_R8_RCX mov r8, rcx
#define MOV_R8_RDX mov r8, rdx
#define MOV_R8_RDI mov r8, rdi
#define MOV_R8_RSI mov r8, rsi
#define MOV_R8_RBP mov r8, rbp
#define MOV_R8_RSP mov r8, rsp
#define MOV_R8_R8 mov r8, r8
#define MOV_R8_R9 mov r8, r9
#define MOV_R8_R10 mov r8, r10
#define MOV_R8_R11 mov r8, r11
#define MOV_R8_R12 mov r8, r12
#define MOV_R8_R13 mov r8, r13
#define MOV_R8_R14 mov r8, r14
#define MOV_R8_R15 mov r8, r15

#define MOV_R9_RAX mov r9, rax
#define MOV_R9_RBX mov r9, rbx
#define MOV_R9_RCX mov r9, rcx
#define MOV_R9_RDX mov r9, rdx
#define MOV_R9_RDI mov r9, rdi
#define MOV_R9_RSI mov r9, rsi
#define MOV_R9_RBP mov r9, rbp
#define MOV_R9_RSP mov r9, rsp
#define MOV_R9_R8 mov r9, r8
#define MOV_R9_R9 mov r9, r9
#define MOV_R9_R10 mov r9, r10
#define MOV_R9_R11 mov r9, r11
#define MOV_R9_R12 mov r9, r12
#define MOV_R9_R13 mov r9, r13
#define MOV_R9_R14 mov r9, r14
#define MOV_R9_R15 mov r9, r15

#define MOV_R10_RAX mov r10, rax
#define MOV_R10_RBX mov r10, rbx
#define MOV_R10_RCX mov r10, rcx
#define MOV_R10_RDX mov r10, rdx
#define MOV_R10_RDI mov r10, rdi
#define MOV_R10_RSI mov r10, rsi
#define MOV_R10_RBP mov r10, rbp
#define MOV_R10_RSP mov r10, rsp
#define MOV_R10_R8 mov r10, r8
#define MOV_R10_R9 mov r10, r9
#define MOV_R10_R10 mov r10, r10
#define MOV_R10_R11 mov r10, r11
#define MOV_R10_R12 mov r10, r12
#define MOV_R10_R13 mov r10, r13
#define MOV_R10_R14 mov r10, r14
#define MOV_R10_R15 mov r10, r15

#define MOV_R11_RAX mov r11, rax
#define MOV_R11_RBX mov r11, rbx
#define MOV_R11_RCX mov r11, rcx
#define MOV_R11_RDX mov r11, rdx
#define MOV_R11_RDI mov r11, rdi
#define MOV_R11_RSI mov r11, rsi
#define MOV_R11_RBP mov r11, rbp
#define MOV_R11_RSP mov r11, rsp
#define MOV_R11_R8 mov r11, r8
#define MOV_R11_R9 mov r11, r9
#define MOV_R11_R10 mov r11, r10
#define MOV_R11_R11 mov r11, r11
#define MOV_R11_R12 mov r11, r12
#define MOV_R11_R13 mov r11, r13
#define MOV_R11_R14 mov r11, r14
#define MOV_R11_R15 mov r11, r15

#define MOV_R12_RAX mov r12, rax
#define MOV_R12_RBX mov r12, rbx
#define MOV_R12_RCX mov r12, rcx
#define MOV_R12_RDX mov r12, rdx
#define MOV_R12_RDI mov r12, rdi
#define MOV_R12_RSI mov r12, rsi
#define MOV_R12_RBP mov r12, rbp
#define MOV_R12_RSP mov r12, rsp
#define MOV_R12_R8 mov r12, r8
#define MOV_R12_R9 mov r12, r9
#define MOV_R12_R10 mov r12, r10
#define MOV_R12_R11 mov r12, r11
#define MOV_R12_R12 mov r12, r12
#define MOV_R12_R13 mov r12, r13
#define MOV_R12_R14 mov r12, r14
#define MOV_R12_R15 mov r12, r15

#define MOV_R13_RAX mov r13, rax
#define MOV_R13_RBX mov r13, rbx
#define MOV_R13_RCX mov r13, rcx
#define MOV_R13_RDX mov r13, rdx
#define MOV_R13_RDI mov r13, rdi
#define MOV_R13_RSI mov r13, rsi
#define MOV_R13_RBP mov r13, rbp
#define MOV_R13_RSP mov r13, rsp
#define MOV_R13_R8 mov r13, r8
#define MOV_R13_R9 mov r13, r9
#define MOV_R13_R10 mov r13, r10
#define MOV_R13_R11 mov r13, r11
#define MOV_R13_R12 mov r13, r12
#define MOV_R13_R13 mov r13, r13
#define MOV_R13_R14 mov r13, r14
#define MOV_R13_R15 mov r13, r15

#define MOV_R14_RAX mov r14, rax
#define MOV_R14_RBX mov r14, rbx
#define MOV_R14_RCX mov r14, rcx
#define MOV_R14_RDX mov r14, rdx
#define MOV_R14_RDI mov r14, rdi
#define MOV_R14_RSI mov r14, rsi
#define MOV_R14_RBP mov r14, rbp
#define MOV_R14_RSP mov r14, rsp
#define MOV_R14_R8 mov r14, r8
#define MOV_R14_R9 mov r14, r9
#define MOV_R14_R10 mov r14, r10
#define MOV_R14_R11 mov r14, r11
#define MOV_R14_R12 mov r14, r12
#define MOV_R14_R13 mov r14, r13
#define MOV_R14_R14 mov r14, r14
#define MOV_R14_R15 mov r14, r15

#define MOV_R15_RAX mov r15, rax
#define MOV_R15_RBX mov r15, rbx
#define MOV_R15_RCX mov r15, rcx
#define MOV_R15_RDX mov r15, rdx
#define MOV_R15_RDI mov r15, rdi
#define MOV_R15_RSI mov r15, rsi
#define MOV_R15_RBP mov r15, rbp
#define MOV_R15_RSP mov r15, rsp
#define MOV_R15_R8 mov r15, r8
#define MOV_R15_R9 mov r15, r9
#define MOV_R15_R10 mov r15, r10
#define MOV_R15_R11 mov r15, r11
#define MOV_R15_R12 mov r15, r12
#define MOV_R15_R13 mov r15, r13
#define MOV_R15_R14 mov r15, r14
#define MOV_R15_R15 mov r15, r15

#define MOV_RAX_(VALUE) mov rax, VALUE
#define MOV_RBX_(VALUE) mov rbx, VALUE
#define MOV_RCX_(VALUE) mov rcx, VALUE
#define MOV_RDX_(VALUE) mov rdx, VALUE
#define MOV_RDI_(VALUE) mov rdi, VALUE
#define MOV_RSI_(VALUE) mov rsi, VALUE
#define MOV_RBP_(VALUE) mov rbp, VALUE
#define MOV_RSP_(VALUE) mov rsp, VALUE
#define MOV_R8_(VALUE) mov r8, VALUE
#define MOV_R9_(VALUE) mov r9, VALUE
#define MOV_R10_(VALUE) mov r10, VALUE
#define MOV_R11_(VALUE) mov r11, VALUE
#define MOV_R12_(VALUE) mov r12, VALUE
#define MOV_R13_(VALUE) mov r13, VALUE
#define MOV_R14_(VALUE) mov r14, VALUE
#define MOV_R15_(VALUE) mov r15, VALUE
/* ************************ [^] 64-BIT REGISTERS [^] ************************ */

/* ************************* [v] 64-BIT MEMORY [v] ************************** */
#define MOV_RAX_FROM_PTR_(VALUE) mov rax, qword ptr [VALUE]
#define MOV_RBX_FROM_PTR_(VALUE) mov rbx, qword ptr [VALUE]
#define MOV_RCX_FROM_PTR_(VALUE) mov rcx, qword ptr [VALUE]
#define MOV_RDX_FROM_PTR_(VALUE) mov rdx, qword ptr [VALUE]
#define MOV_RSI_FROM_PTR_(VALUE) mov rsi, qword ptr [VALUE]
#define MOV_RDI_FROM_PTR_(VALUE) mov rdi, qword ptr [VALUE]
#define MOV_RBP_FROM_PTR_(VALUE) mov rbp, qword ptr [VALUE]
#define MOV_RSP_FROM_PTR_(VALUE) mov rsp, qword ptr [VALUE]

#define MOV_RAX_TO_PTR_(VALUE) mov qword ptr [VALUE], rax
#define MOV_RBX_TO_PTR_(VALUE) mov qword ptr [VALUE], rbx
#define MOV_RCX_TO_PTR_(VALUE) mov qword ptr [VALUE], rcx
#define MOV_RDX_TO_PTR_(VALUE) mov qword ptr [VALUE], rdx
#define MOV_RSI_TO_PTR_(VALUE) mov qword ptr [VALUE], rsi
#define MOV_RDI_TO_PTR_(VALUE) mov qword ptr [VALUE], rdi
#define MOV_RBP_TO_PTR_(VALUE) mov qword ptr [VALUE], rbp
#define MOV_RSP_TO_PTR_(VALUE) mov qword ptr [VALUE], rsp

#define MOV_RAX_TO_PTR_RAX mov qword ptr [rax], rax
#define MOV_RAX_TO_PTR_RBX mov qword ptr [rbx], rbx
#define MOV_RAX_TO_PTR_RCX mov qword ptr [rcx], rcx
#define MOV_RAX_TO_PTR_RDX mov qword ptr [rdx], rdx
#define MOV_RAX_TO_PTR_RSI mov qword ptr [rsi], rsi
#define MOV_RAX_TO_PTR_RDI mov qword ptr [rdi], rdi
#define MOV_RAX_TO_PTR_RBP mov qword ptr [rbp], rbp
#define MOV_RAX_TO_PTR_RSP mov qword ptr [rsp], rsp

#define MOV_RBX_TO_PTR_RAX mov qword ptr [rax], rax
#define MOV_RBX_TO_PTR_RBX mov qword ptr [rbx], rbx
#define MOV_RBX_TO_PTR_RCX mov qword ptr [rcx], rcx
#define MOV_RBX_TO_PTR_RDX mov qword ptr [rdx], rdx
#define MOV_RBX_TO_PTR_RSI mov qword ptr [rsi], rsi
#define MOV_RBX_TO_PTR_RDI mov qword ptr [rdi], rdi
#define MOV_RBX_TO_PTR_RBP mov qword ptr [rbp], rbp
#define MOV_RBX_TO_PTR_RSP mov qword ptr [rsp], rsp

#define MOV_RCX_TO_PTR_RAX mov qword ptr [rax], rax
#define MOV_RCX_TO_PTR_RBX mov qword ptr [rbx], rbx
#define MOV_RCX_TO_PTR_RCX mov qword ptr [rcx], rcx
#define MOV_RCX_TO_PTR_RDX mov qword ptr [rdx], rdx
#define MOV_RCX_TO_PTR_RSI mov qword ptr [rsi], rsi
#define MOV_RCX_TO_PTR_RDI mov qword ptr [rdi], rdi
#define MOV_RCX_TO_PTR_RBP mov qword ptr [rbp], rbp
#define MOV_RCX_TO_PTR_RSP mov qword ptr [rsp], rsp

#define MOV_RDX_TO_PTR_RAX mov qword ptr [rax], rax
#define MOV_RDX_TO_PTR_RBX mov qword ptr [rbx], rbx
#define MOV_RDX_TO_PTR_RCX mov qword ptr [rcx], rcx
#define MOV_RDX_TO_PTR_RDX mov qword ptr [rdx], rdx
#define MOV_RDX_TO_PTR_RSI mov qword ptr [rsi], rsi
#define MOV_RDX_TO_PTR_RDI mov qword ptr [rdi], rdi
#define MOV_RDX_TO_PTR_RBP mov qword ptr [rbp], rbp
#define MOV_RDX_TO_PTR_RSP mov qword ptr [rsp], rsp

#define MOV_RSI_TO_PTR_RAX mov qword ptr [rax], rax
#define MOV_RSI_TO_PTR_RBX mov qword ptr [rbx], rbx
#define MOV_RSI_TO_PTR_RCX mov qword ptr [rcx], rcx
#define MOV_RSI_TO_PTR_RDX mov qword ptr [rdx], rdx
#define MOV_RSI_TO_PTR_RSI mov qword ptr [rsi], rsi
#define MOV_RSI_TO_PTR_RDI mov qword ptr [rdi], rdi
#define MOV_RSI_TO_PTR_RBP mov qword ptr [rbp], rbp
#define MOV_RSI_TO_PTR_RSP mov qword ptr [rsp], rsp

#define MOV_RDI_TO_PTR_RAX mov qword ptr [rax], rax
#define MOV_RDI_TO_PTR_RBX mov qword ptr [rbx], rbx
#define MOV_RDI_TO_PTR_RCX mov qword ptr [rcx], rcx
#define MOV_RDI_TO_PTR_RDX mov qword ptr [rdx], rdx
#define MOV_RDI_TO_PTR_RSI mov qword ptr [rsi], rsi
#define MOV_RDI_TO_PTR_RDI mov qword ptr [rdi], rdi
#define MOV_RDI_TO_PTR_RBP mov qword ptr [rbp], rbp
#define MOV_RDI_TO_PTR_RSP mov qword ptr [rsp], rsp

#define MOV_RBP_TO_PTR_RAX mov qword ptr [rax], rax
#define MOV_RBP_TO_PTR_RBX mov qword ptr [rbx], rbx
#define MOV_RBP_TO_PTR_RCX mov qword ptr [rcx], rcx
#define MOV_RBP_TO_PTR_RDX mov qword ptr [rdx], rdx
#define MOV_RBP_TO_PTR_RSI mov qword ptr [rsi], rsi
#define MOV_RBP_TO_PTR_RDI mov qword ptr [rdi], rdi
#define MOV_RBP_TO_PTR_RBP mov qword ptr [rbp], rbp
#define MOV_RBP_TO_PTR_RSP mov qword ptr [rsp], rsp

#define MOV_RSP_TO_PTR_RAX mov qword ptr [rax], rax
#define MOV_RSP_TO_PTR_RBX mov qword ptr [rbx], rbx
#define MOV_RSP_TO_PTR_RCX mov qword ptr [rcx], rcx
#define MOV_RSP_TO_PTR_RDX mov qword ptr [rdx], rdx
#define MOV_RSP_TO_PTR_RSI mov qword ptr [rsi], rsi
#define MOV_RSP_TO_PTR_RDI mov qword ptr [rdi], rdi
#define MOV_RSP_TO_PTR_RBP mov qword ptr [rbp], rbp
#define MOV_RSP_TO_PTR_RSP mov qword ptr [rsp], rsp

#define MOV_R8_TO_PTR_RAX mov qword ptr [rax], rax
#define MOV_R8_TO_PTR_RBX mov qword ptr [rbx], rbx
#define MOV_R8_TO_PTR_RCX mov qword ptr [rcx], rcx
#define MOV_R8_TO_PTR_RDX mov qword ptr [rdx], rdx
#define MOV_R8_TO_PTR_RSI mov qword ptr [rsi], rsi
#define MOV_R8_TO_PTR_RDI mov qword ptr [rdi], rdi
#define MOV_R8_TO_PTR_RBP mov qword ptr [rbp], rbp
#define MOV_R8_TO_PTR_RSP mov qword ptr [rsp], rsp

#define MOV_R9_TO_PTR_RAX mov qword ptr [rax], rax
#define MOV_R9_TO_PTR_RBX mov qword ptr [rbx], rbx
#define MOV_R9_TO_PTR_RCX mov qword ptr [rcx], rcx
#define MOV_R9_TO_PTR_RDX mov qword ptr [rdx], rdx
#define MOV_R9_TO_PTR_RSI mov qword ptr [rsi], rsi
#define MOV_R9_TO_PTR_RDI mov qword ptr [rdi], rdi
#define MOV_R9_TO_PTR_RBP mov qword ptr [rbp], rbp
#define MOV_R9_TO_PTR_RSP mov qword ptr [rsp], rsp

#define MOV_R10_TO_PTR_RAX mov qword ptr [rax], rax
#define MOV_R10_TO_PTR_RBX mov qword ptr [rbx], rbx
#define MOV_R10_TO_PTR_RCX mov qword ptr [rcx], rcx
#define MOV_R10_TO_PTR_RDX mov qword ptr [rdx], rdx
#define MOV_R10_TO_PTR_RSI mov qword ptr [rsi], rsi
#define MOV_R10_TO_PTR_RDI mov qword ptr [rdi], rdi
#define MOV_R10_TO_PTR_RBP mov qword ptr [rbp], rbp
#define MOV_R10_TO_PTR_RSP mov qword ptr [rsp], rsp

#define MOV_R11_TO_PTR_RAX mov qword ptr [rax], rax
#define MOV_R11_TO_PTR_RBX mov qword ptr [rbx], rbx
#define MOV_R11_TO_PTR_RCX mov qword ptr [rcx], rcx
#define MOV_R11_TO_PTR_RDX mov qword ptr [rdx], rdx
#define MOV_R11_TO_PTR_RSI mov qword ptr [rsi], rsi
#define MOV_R11_TO_PTR_RDI mov qword ptr [rdi], rdi
#define MOV_R11_TO_PTR_RBP mov qword ptr [rbp], rbp
#define MOV_R11_TO_PTR_RSP mov qword ptr [rsp], rsp

#define MOV_R12_TO_PTR_RAX mov qword ptr [rax], rax
#define MOV_R12_TO_PTR_RBX mov qword ptr [rbx], rbx
#define MOV_R12_TO_PTR_RCX mov qword ptr [rcx], rcx
#define MOV_R12_TO_PTR_RDX mov qword ptr [rdx], rdx
#define MOV_R12_TO_PTR_RSI mov qword ptr [rsi], rsi
#define MOV_R12_TO_PTR_RDI mov qword ptr [rdi], rdi
#define MOV_R12_TO_PTR_RBP mov qword ptr [rbp], rbp
#define MOV_R12_TO_PTR_RSP mov qword ptr [rsp], rsp

#define MOV_R13_TO_PTR_RAX mov qword ptr [rax], rax
#define MOV_R13_TO_PTR_RBX mov qword ptr [rbx], rbx
#define MOV_R13_TO_PTR_RCX mov qword ptr [rcx], rcx
#define MOV_R13_TO_PTR_RDX mov qword ptr [rdx], rdx
#define MOV_R13_TO_PTR_RSI mov qword ptr [rsi], rsi
#define MOV_R13_TO_PTR_RDI mov qword ptr [rdi], rdi
#define MOV_R13_TO_PTR_RBP mov qword ptr [rbp], rbp
#define MOV_R13_TO_PTR_RSP mov qword ptr [rsp], rsp

#define MOV_R14_TO_PTR_RAX mov qword ptr [rax], rax
#define MOV_R14_TO_PTR_RBX mov qword ptr [rbx], rbx
#define MOV_R14_TO_PTR_RCX mov qword ptr [rcx], rcx
#define MOV_R14_TO_PTR_RDX mov qword ptr [rdx], rdx
#define MOV_R14_TO_PTR_RSI mov qword ptr [rsi], rsi
#define MOV_R14_TO_PTR_RDI mov qword ptr [rdi], rdi
#define MOV_R14_TO_PTR_RBP mov qword ptr [rbp], rbp
#define MOV_R14_TO_PTR_RSP mov qword ptr [rsp], rsp

#define MOV_R15_TO_PTR_RAX mov qword ptr [rax], rax
#define MOV_R15_TO_PTR_RBX mov qword ptr [rbx], rbx
#define MOV_R15_TO_PTR_RCX mov qword ptr [rcx], rcx
#define MOV_R15_TO_PTR_RDX mov qword ptr [rdx], rdx
#define MOV_R15_TO_PTR_RSI mov qword ptr [rsi], rsi
#define MOV_R15_TO_PTR_RDI mov qword ptr [rdi], rdi
#define MOV_R15_TO_PTR_RBP mov qword ptr [rbp], rbp
#define MOV_R15_TO_PTR_RSP mov qword ptr [rsp], rsp

#define MOV_RAX_FROM_PTR_RAX mov rax, qword ptr [rax]
#define MOV_RAX_FROM_PTR_RBX mov rax, qword ptr [rbx]
#define MOV_RAX_FROM_PTR_RCX mov rax, qword ptr [rcx]
#define MOV_RAX_FROM_PTR_RDX mov rax, qword ptr [rdx]
#define MOV_RAX_FROM_PTR_RSI mov rax, qword ptr [rsi]
#define MOV_RAX_FROM_PTR_RDI mov rax, qword ptr [rdi]
#define MOV_RAX_FROM_PTR_RBP mov rax, qword ptr [rbp]
#define MOV_RAX_FROM_PTR_RSP mov rax, qword ptr [rsp]

#define MOV_RBX_FROM_PTR_RAX mov rbx, qword ptr [rax]
#define MOV_RBX_FROM_PTR_RBX mov rbx, qword ptr [rbx]
#define MOV_RBX_FROM_PTR_RCX mov rbx, qword ptr [rcx]
#define MOV_RBX_FROM_PTR_RDX mov rbx, qword ptr [rdx]
#define MOV_RBX_FROM_PTR_RSI mov rbx, qword ptr [rsi]
#define MOV_RBX_FROM_PTR_RDI mov rbx, qword ptr [rdi]
#define MOV_RBX_FROM_PTR_RBP mov rbx, qword ptr [rbp]
#define MOV_RBX_FROM_PTR_RSP mov rbx, qword ptr [rsp]

#define MOV_RCX_FROM_PTR_RAX mov rcx, qword ptr [rax]
#define MOV_RCX_FROM_PTR_RBX mov rcx, qword ptr [rbx]
#define MOV_RCX_FROM_PTR_RCX mov rcx, qword ptr [rcx]
#define MOV_RCX_FROM_PTR_RDX mov rcx, qword ptr [rdx]
#define MOV_RCX_FROM_PTR_RSI mov rcx, qword ptr [rsi]
#define MOV_RCX_FROM_PTR_RDI mov rcx, qword ptr [rdi]
#define MOV_RCX_FROM_PTR_RBP mov rcx, qword ptr [rbp]
#define MOV_RCX_FROM_PTR_RSP mov rcx, qword ptr [rsp]

#define MOV_RDX_FROM_PTR_RAX mov rdx, qword ptr [rax]
#define MOV_RDX_FROM_PTR_RBX mov rdx, qword ptr [rbx]
#define MOV_RDX_FROM_PTR_RCX mov rdx, qword ptr [rcx]
#define MOV_RDX_FROM_PTR_RDX mov rdx, qword ptr [rdx]
#define MOV_RDX_FROM_PTR_RSI mov rdx, qword ptr [rsi]
#define MOV_RDX_FROM_PTR_RDI mov rdx, qword ptr [rdi]
#define MOV_RDX_FROM_PTR_RBP mov rdx, qword ptr [rbp]
#define MOV_RDX_FROM_PTR_RSP mov rdx, qword ptr [rsp]

#define MOV_RSI_FROM_PTR_RAX mov rsi, qword ptr [rax]
#define MOV_RSI_FROM_PTR_RBX mov rsi, qword ptr [rbx]
#define MOV_RSI_FROM_PTR_RCX mov rsi, qword ptr [rcx]
#define MOV_RSI_FROM_PTR_RDX mov rsi, qword ptr [rdx]
#define MOV_RSI_FROM_PTR_RSI mov rsi, qword ptr [rsi]
#define MOV_RSI_FROM_PTR_RDI mov rsi, qword ptr [rdi]
#define MOV_RSI_FROM_PTR_RBP mov rsi, qword ptr [rbp]
#define MOV_RSI_FROM_PTR_RSP mov rsi, qword ptr [rsp]

#define MOV_RDI_FROM_PTR_RAX mov rdi, qword ptr [rax]
#define MOV_RDI_FROM_PTR_RBX mov rdi, qword ptr [rbx]
#define MOV_RDI_FROM_PTR_RCX mov rdi, qword ptr [rcx]
#define MOV_RDI_FROM_PTR_RDX mov rdi, qword ptr [rdx]
#define MOV_RDI_FROM_PTR_RSI mov rdi, qword ptr [rsi]
#define MOV_RDI_FROM_PTR_RDI mov rdi, qword ptr [rdi]
#define MOV_RDI_FROM_PTR_RBP mov rdi, qword ptr [rbp]
#define MOV_RDI_FROM_PTR_RSP mov rdi, qword ptr [rsp]

#define MOV_RBP_FROM_PTR_RAX mov rbp, qword ptr [rax]
#define MOV_RBP_FROM_PTR_RBX mov rbp, qword ptr [rbx]
#define MOV_RBP_FROM_PTR_RCX mov rbp, qword ptr [rcx]
#define MOV_RBP_FROM_PTR_RDX mov rbp, qword ptr [rdx]
#define MOV_RBP_FROM_PTR_RSI mov rbp, qword ptr [rsi]
#define MOV_RBP_FROM_PTR_RDI mov rbp, qword ptr [rdi]
#define MOV_RBP_FROM_PTR_RBP mov rbp, qword ptr [rbp]
#define MOV_RBP_FROM_PTR_RSP mov rbp, qword ptr [rsp]

#define MOV_RSP_FROM_PTR_RAX mov rsp, qword ptr [rax]
#define MOV_RSP_FROM_PTR_RBX mov rsp, qword ptr [rbx]
#define MOV_RSP_FROM_PTR_RCX mov rsp, qword ptr [rcx]
#define MOV_RSP_FROM_PTR_RDX mov rsp, qword ptr [rdx]
#define MOV_RSP_FROM_PTR_RSI mov rsp, qword ptr [rsi]
#define MOV_RSP_FROM_PTR_RDI mov rsp, qword ptr [rdi]
#define MOV_RSP_FROM_PTR_RBP mov rsp, qword ptr [rbp]
#define MOV_RSP_FROM_PTR_RSP mov rsp, qword ptr [rsp]

#define MOV_R8_FROM_PTR_RAX mov r8, qword ptr [rax]
#define MOV_R8_FROM_PTR_RBX mov r8, qword ptr [rbx]
#define MOV_R8_FROM_PTR_RCX mov r8, qword ptr [rcx]
#define MOV_R8_FROM_PTR_RDX mov r8, qword ptr [rdx]
#define MOV_R8_FROM_PTR_RSI mov r8, qword ptr [rsi]
#define MOV_R8_FROM_PTR_RDI mov r8, qword ptr [rdi]
#define MOV_R8_FROM_PTR_RBP mov r8, qword ptr [rbp]
#define MOV_R8_FROM_PTR_RSP mov r8, qword ptr [rsp]

#define MOV_R9_FROM_PTR_RAX mov r9, qword ptr [rax]
#define MOV_R9_FROM_PTR_RBX mov r9, qword ptr [rbx]
#define MOV_R9_FROM_PTR_RCX mov r9, qword ptr [rcx]
#define MOV_R9_FROM_PTR_RDX mov r9, qword ptr [rdx]
#define MOV_R9_FROM_PTR_RSI mov r9, qword ptr [rsi]
#define MOV_R9_FROM_PTR_RDI mov r9, qword ptr [rdi]
#define MOV_R9_FROM_PTR_RBP mov r9, qword ptr [rbp]
#define MOV_R9_FROM_PTR_RSP mov r9, qword ptr [rsp]

#define MOV_R10_FROM_PTR_RAX mov r10, qword ptr [rax]
#define MOV_R10_FROM_PTR_RBX mov r10, qword ptr [rbx]
#define MOV_R10_FROM_PTR_RCX mov r10, qword ptr [rcx]
#define MOV_R10_FROM_PTR_RDX mov r10, qword ptr [rdx]
#define MOV_R10_FROM_PTR_RSI mov r10, qword ptr [rsi]
#define MOV_R10_FROM_PTR_RDI mov r10, qword ptr [rdi]
#define MOV_R10_FROM_PTR_RBP mov r10, qword ptr [rbp]
#define MOV_R10_FROM_PTR_RSP mov r10, qword ptr [rsp]

#define MOV_R11_FROM_PTR_RAX mov r11, qword ptr [rax]
#define MOV_R11_FROM_PTR_RBX mov r11, qword ptr [rbx]
#define MOV_R11_FROM_PTR_RCX mov r11, qword ptr [rcx]
#define MOV_R11_FROM_PTR_RDX mov r11, qword ptr [rdx]
#define MOV_R11_FROM_PTR_RSI mov r11, qword ptr [rsi]
#define MOV_R11_FROM_PTR_RDI mov r11, qword ptr [rdi]
#define MOV_R11_FROM_PTR_RBP mov r11, qword ptr [rbp]
#define MOV_R11_FROM_PTR_RSP mov r11, qword ptr [rsp]

#define MOV_R12_FROM_PTR_RAX mov r12, qword ptr [rax]
#define MOV_R12_FROM_PTR_RBX mov r12, qword ptr [rbx]
#define MOV_R12_FROM_PTR_RCX mov r12, qword ptr [rcx]
#define MOV_R12_FROM_PTR_RDX mov r12, qword ptr [rdx]
#define MOV_R12_FROM_PTR_RSI mov r12, qword ptr [rsi]
#define MOV_R12_FROM_PTR_RDI mov r12, qword ptr [rdi]
#define MOV_R12_FROM_PTR_RBP mov r12, qword ptr [rbp]
#define MOV_R12_FROM_PTR_RSP mov r12, qword ptr [rsp]

#define MOV_R13_FROM_PTR_RAX mov r13, qword ptr [rax]
#define MOV_R13_FROM_PTR_RBX mov r13, qword ptr [rbx]
#define MOV_R13_FROM_PTR_RCX mov r13, qword ptr [rcx]
#define MOV_R13_FROM_PTR_RDX mov r13, qword ptr [rdx]
#define MOV_R13_FROM_PTR_RSI mov r13, qword ptr [rsi]
#define MOV_R13_FROM_PTR_RDI mov r13, qword ptr [rdi]
#define MOV_R13_FROM_PTR_RBP mov r13, qword ptr [rbp]
#define MOV_R13_FROM_PTR_RSP mov r13, qword ptr [rsp]

#define MOV_R14_FROM_PTR_RAX mov r14, qword ptr [rax]
#define MOV_R14_FROM_PTR_RBX mov r14, qword ptr [rbx]
#define MOV_R14_FROM_PTR_RCX mov r14, qword ptr [rcx]
#define MOV_R14_FROM_PTR_RDX mov r14, qword ptr [rdx]
#define MOV_R14_FROM_PTR_RSI mov r14, qword ptr [rsi]
#define MOV_R14_FROM_PTR_RDI mov r14, qword ptr [rdi]
#define MOV_R14_FROM_PTR_RBP mov r14, qword ptr [rbp]
#define MOV_R14_FROM_PTR_RSP mov r14, qword ptr [rsp]

#define MOV_R15_FROM_PTR_RAX mov r15, qword ptr [rax]
#define MOV_R15_FROM_PTR_RBX mov r15, qword ptr [rbx]
#define MOV_R15_FROM_PTR_RCX mov r15, qword ptr [rcx]
#define MOV_R15_FROM_PTR_RDX mov r15, qword ptr [rdx]
#define MOV_R15_FROM_PTR_RSI mov r15, qword ptr [rsi]
#define MOV_R15_FROM_PTR_RDI mov r15, qword ptr [rdi]
#define MOV_R15_FROM_PTR_RBP mov r15, qword ptr [rbp]
#define MOV_R15_FROM_PTR_RSP mov r15, qword ptr [rsp]

#define MOV_RAX_FROM_PTR_RSP_(VALUE) mov rax, qword ptr [VALUE + rsp]
#define MOV_RBX_FROM_PTR_RSP_(VALUE) mov rbx, qword ptr [VALUE + rsp]
#define MOV_RCX_FROM_PTR_RSP_(VALUE) mov rcx, qword ptr [VALUE + rsp]
#define MOV_RDX_FROM_PTR_RSP_(VALUE) mov rdx, qword ptr [VALUE + rsp]
#define MOV_RSI_FROM_PTR_RSP_(VALUE) mov rsi, qword ptr [VALUE + rsp]
#define MOV_RDI_FROM_PTR_RSP_(VALUE) mov rdi, qword ptr [VALUE + rsp]
#define MOV_RBP_FROM_PTR_RSP_(VALUE) mov rbp, qword ptr [VALUE + rsp]
#define MOV_RSP_FROM_PTR_RSP_(VALUE) mov rsp, qword ptr [VALUE + rsp]

#define MOV_RAX_FROM_PTR_ESP_(VALUE) mov rax, qword ptr [VALUE + esp]
#define MOV_RBX_FROM_PTR_ESP_(VALUE) mov rbx, qword ptr [VALUE + esp]
#define MOV_RCX_FROM_PTR_ESP_(VALUE) mov rcx, qword ptr [VALUE + esp]
#define MOV_RDX_FROM_PTR_ESP_(VALUE) mov rdx, qword ptr [VALUE + esp]
#define MOV_RSI_FROM_PTR_ESP_(VALUE) mov rsi, qword ptr [VALUE + esp]
#define MOV_RDI_FROM_PTR_ESP_(VALUE) mov rdi, qword ptr [VALUE + esp]
#define MOV_RBP_FROM_PTR_ESP_(VALUE) mov rbp, qword ptr [VALUE + esp]
#define MOV_RSP_FROM_PTR_ESP_(VALUE) mov rsp, qword ptr [VALUE + esp]

#define MOV_EAX_FROM_PTR_RSP_(VALUE) mov eax, dword ptr [VALUE + rsp]
#define MOV_EBX_FROM_PTR_RSP_(VALUE) mov ebx, dword ptr [VALUE + rsp]
#define MOV_ECX_FROM_PTR_RSP_(VALUE) mov ecx, dword ptr [VALUE + rsp]
#define MOV_EDX_FROM_PTR_RSP_(VALUE) mov edx, dword ptr [VALUE + rsp]
#define MOV_ESI_FROM_PTR_RSP_(VALUE) mov esi, dword ptr [VALUE + rsp]
#define MOV_EDI_FROM_PTR_RSP_(VALUE) mov edi, dword ptr [VALUE + rsp]
#define MOV_EBP_FROM_PTR_RSP_(VALUE) mov ebp, dword ptr [VALUE + rsp]
#define MOV_ESP_FROM_PTR_RSP_(VALUE) mov esp, dword ptr [VALUE + rsp]

#define MOV_AX_FROM_PTR_RSP_(VALUE) mov ax, word ptr  [VALUE + rsp]
#define MOV_BX_FROM_PTR_RSP_(VALUE) mov bx, word ptr  [VALUE + rsp]
#define MOV_CX_FROM_PTR_RSP_(VALUE) mov cx, word ptr  [VALUE + rsp]
#define MOV_DX_FROM_PTR_RSP_(VALUE) mov dx, word ptr  [VALUE + rsp]
#define MOV_SI_FROM_PTR_RSP_(VALUE) mov si, word ptr  [VALUE + rsp]
#define MOV_DI_FROM_PTR_RSP_(VALUE) mov di, word ptr  [VALUE + rsp]
#define MOV_BP_FROM_PTR_RSP_(VALUE) mov bp, word ptr  [VALUE + rsp]
#define MOV_SP_FROM_PTR_RSP_(VALUE) mov sp, word ptr  [VALUE + rsp]

#define MOV_AL_FROM_PTR_RSP_(VALUE) mov al, byte ptr [VALUE + rsp]
#define MOV_BL_FROM_PTR_RSP_(VALUE) mov bl, byte ptr [VALUE + rsp]
#define MOV_CL_FROM_PTR_RSP_(VALUE) mov cl, byte ptr [VALUE + rsp]
#define MOV_DL_FROM_PTR_RSP_(VALUE) mov dl, byte ptr [VALUE + rsp]
#define MOV_SIL_FROM_PTR_RSP_(VALUE) mov sil, byte ptr [VALUE + rsp]
#define MOV_DIL_FROM_PTR_RSP_(VALUE) mov dil, byte ptr [VALUE + rsp]
#define MOV_BPL_FROM_PTR_RSP_(VALUE) mov bpl, byte ptr [VALUE + rsp]
#define MOV_SPL_FROM_PTR_RSP_(VALUE) mov spl, byte ptr [VALUE + rsp]

#define MOV_RAX_TO_PTR_RSP_(VALUE) mov qword ptr [VALUE + rsp], rax
#define MOV_RBX_TO_PTR_RSP_(VALUE) mov qword ptr [VALUE + rsp], rbx
#define MOV_RCX_TO_PTR_RSP_(VALUE) mov qword ptr [VALUE + rsp], rcx
#define MOV_RDX_TO_PTR_RSP_(VALUE) mov qword ptr [VALUE + rsp], rdx
#define MOV_RSI_TO_PTR_RSP_(VALUE) mov qword ptr [VALUE + rsp], rsi
#define MOV_RDI_TO_PTR_RSP_(VALUE) mov qword ptr [VALUE + rsp], rdi
#define MOV_RBP_TO_PTR_RSP_(VALUE) mov qword ptr [VALUE + rsp], rbp
#define MOV_RSP_TO_PTR_RSP_(VALUE) mov qword ptr [VALUE + rsp], rsp

#define MOV_RAX_TO_PTR_ESP_(VALUE) mov qword ptr [VALUE + esp], rax
#define MOV_RBX_TO_PTR_ESP_(VALUE) mov qword ptr [VALUE + esp], rbx
#define MOV_RCX_TO_PTR_ESP_(VALUE) mov qword ptr [VALUE + esp], rcx
#define MOV_RDX_TO_PTR_ESP_(VALUE) mov qword ptr [VALUE + esp], rdx
#define MOV_RSI_TO_PTR_ESP_(VALUE) mov qword ptr [VALUE + esp], rsi
#define MOV_RDI_TO_PTR_ESP_(VALUE) mov qword ptr [VALUE + esp], rdi
#define MOV_RBP_TO_PTR_ESP_(VALUE) mov qword ptr [VALUE + esp], rbp
#define MOV_RSP_TO_PTR_ESP_(VALUE) mov qword ptr [VALUE + esp], rsp

#define MOV_EAX_TO_PTR_RSP_(VALUE) mov dword ptr [VALUE + rsp], eax
#define MOV_EBX_TO_PTR_RSP_(VALUE) mov dword ptr [VALUE + rsp], ebx
#define MOV_ECX_TO_PTR_RSP_(VALUE) mov dword ptr [VALUE + rsp], ecx
#define MOV_EDX_TO_PTR_RSP_(VALUE) mov dword ptr [VALUE + rsp], edx
#define MOV_ESI_TO_PTR_RSP_(VALUE) mov dword ptr [VALUE + rsp], esi
#define MOV_EDI_TO_PTR_RSP_(VALUE) mov dword ptr [VALUE + rsp], edi
#define MOV_EBP_TO_PTR_RSP_(VALUE) mov dword ptr [VALUE + rsp], ebp
#define MOV_ESP_TO_PTR_RSP_(VALUE) mov dword ptr [VALUE + rsp], esp

#define MOV_AX_TO_PTR_RSP_(VALUE) mov word ptr [VALUE + rsp], ax
#define MOV_BX_TO_PTR_RSP_(VALUE) mov word ptr [VALUE + rsp], bx
#define MOV_CX_TO_PTR_RSP_(VALUE) mov word ptr [VALUE + rsp], cx
#define MOV_DX_TO_PTR_RSP_(VALUE) mov word ptr [VALUE + rsp], dx
#define MOV_SI_TO_PTR_RSP_(VALUE) mov word ptr [VALUE + rsp], si
#define MOV_DI_TO_PTR_RSP_(VALUE) mov word ptr [VALUE + rsp], di
#define MOV_BP_TO_PTR_RSP_(VALUE) mov word ptr [VALUE + rsp], bp
#define MOV_SP_TO_PTR_RSP_(VALUE) mov word ptr [VALUE + rsp], sp

#define MOV_AL_TO_PTR_RSP_(VALUE) mov byte ptr [VALUE + rsp], al
#define MOV_BL_TO_PTR_RSP_(VALUE) mov byte ptr [VALUE + rsp], bl
#define MOV_CL_TO_PTR_RSP_(VALUE) mov byte ptr [VALUE + rsp], cl
#define MOV_DL_TO_PTR_RSP_(VALUE) mov byte ptr [VALUE + rsp], dl
#define MOV_SIL_TO_PTR_RSP_(VALUE) mov byte ptr [VALUE + rsp], sil
#define MOV_DIL_TO_PTR_RSP_(VALUE) mov byte ptr [VALUE + rsp], dil
#define MOV_BPL_TO_PTR_RSP_(VALUE) mov byte ptr [VALUE + rsp], bpl
#define MOV_SPL_TO_PTR_RSP_(VALUE) mov byte ptr [VALUE + rsp], spl

#define MOV_RAX_FROM_PTR_RBP_(VALUE) mov rax, qword ptr [rbp + VALUE]
#define MOV_RBX_FROM_PTR_RBP_(VALUE) mov rbx, qword ptr [rbp + VALUE]
#define MOV_RCX_FROM_PTR_RBP_(VALUE) mov rcx, qword ptr [rbp + VALUE]
#define MOV_RDX_FROM_PTR_RBP_(VALUE) mov rdx, qword ptr [rbp + VALUE]
#define MOV_RSI_FROM_PTR_RBP_(VALUE) mov rsi, qword ptr [rbp + VALUE]
#define MOV_RDI_FROM_PTR_RBP_(VALUE) mov rdi, qword ptr [rbp + VALUE]
#define MOV_RBP_FROM_PTR_RBP_(VALUE) mov rbp, qword ptr [rbp + VALUE]
#define MOV_RSP_FROM_PTR_RBP_(VALUE) mov rsp, qword ptr [rbp + VALUE]

#define MOV_RAX_FROM_PTR_EBP_(VALUE) mov rax, qword ptr [ebp + VALUE]
#define MOV_RBX_FROM_PTR_EBP_(VALUE) mov rbx, qword ptr [ebp + VALUE]
#define MOV_RCX_FROM_PTR_EBP_(VALUE) mov rcx, qword ptr [ebp + VALUE]
#define MOV_RDX_FROM_PTR_EBP_(VALUE) mov rdx, qword ptr [ebp + VALUE]
#define MOV_RSI_FROM_PTR_EBP_(VALUE) mov rsi, qword ptr [ebp + VALUE]
#define MOV_RDI_FROM_PTR_EBP_(VALUE) mov rdi, qword ptr [ebp + VALUE]
#define MOV_RBP_FROM_PTR_EBP_(VALUE) mov rbp, qword ptr [ebp + VALUE]
#define MOV_RSP_FROM_PTR_EBP_(VALUE) mov rsp, qword ptr [ebp + VALUE]

#define MOV_EAX_FROM_PTR_RBP_(VALUE) mov eax, dword ptr [rbp + VALUE]
#define MOV_EBX_FROM_PTR_RBP_(VALUE) mov ebx, dword ptr [rbp + VALUE]
#define MOV_ECX_FROM_PTR_RBP_(VALUE) mov ecx, dword ptr [rbp + VALUE]
#define MOV_EDX_FROM_PTR_RBP_(VALUE) mov edx, dword ptr [rbp + VALUE]
#define MOV_ESI_FROM_PTR_RBP_(VALUE) mov esi, dword ptr [rbp + VALUE]
#define MOV_EDI_FROM_PTR_RBP_(VALUE) mov edi, dword ptr [rbp + VALUE]
#define MOV_EBP_FROM_PTR_RBP_(VALUE) mov ebp, dword ptr [rbp + VALUE]
#define MOV_ESP_FROM_PTR_RBP_(VALUE) mov esp, dword ptr [rbp + VALUE]

#define MOV_AX_FROM_PTR_RBP_(VALUE) mov ax, word ptr [rbp + VALUE]
#define MOV_BX_FROM_PTR_RBP_(VALUE) mov bx, word ptr [rbp + VALUE]
#define MOV_CX_FROM_PTR_RBP_(VALUE) mov cx, word ptr [rbp + VALUE]
#define MOV_DX_FROM_PTR_RBP_(VALUE) mov dx, word ptr [rbp + VALUE]
#define MOV_SI_FROM_PTR_RBP_(VALUE) mov si, word ptr [rbp + VALUE]
#define MOV_DI_FROM_PTR_RBP_(VALUE) mov di, word ptr [rbp + VALUE]
#define MOV_BP_FROM_PTR_RBP_(VALUE) mov bp, word ptr [rbp + VALUE]
#define MOV_SP_FROM_PTR_RBP_(VALUE) mov sp, word ptr [rbp + VALUE]

#define MOV_AL_FROM_PTR_RBP_(VALUE) mov al, byte ptr [rbp + VALUE]
#define MOV_BL_FROM_PTR_RBP_(VALUE) mov bl, byte ptr [rbp + VALUE]
#define MOV_CL_FROM_PTR_RBP_(VALUE) mov cl, byte ptr [rbp + VALUE]
#define MOV_DL_FROM_PTR_RBP_(VALUE) mov dl, byte ptr [rbp + VALUE]
#define MOV_SIL_FROM_PTR_RBP_(VALUE) mov sil, byte ptr [rbp + VALUE]
#define MOV_DIL_FROM_PTR_RBP_(VALUE) mov dil, byte ptr [rbp + VALUE]
#define MOV_BPL_FROM_PTR_RBP_(VALUE) mov bpl, byte ptr [rbp + VALUE]
#define MOV_SPL_FROM_PTR_RBP_(VALUE) mov spl, byte ptr [rbp + VALUE]

#define MOV_RAX_TO_PTR_RBP_(VALUE) mov qword ptr [rbp + VALUE], rax
#define MOV_RBX_TO_PTR_RBP_(VALUE) mov qword ptr [rbp + VALUE], rbx
#define MOV_RCX_TO_PTR_RBP_(VALUE) mov qword ptr [rbp + VALUE], rcx
#define MOV_RDX_TO_PTR_RBP_(VALUE) mov qword ptr [rbp + VALUE], rdx
#define MOV_RSI_TO_PTR_RBP_(VALUE) mov qword ptr [rbp + VALUE], rsi
#define MOV_RDI_TO_PTR_RBP_(VALUE) mov qword ptr [rbp + VALUE], rdi
#define MOV_RBP_TO_PTR_RBP_(VALUE) mov qword ptr [rbp + VALUE], rbp
#define MOV_RSP_TO_PTR_RBP_(VALUE) mov qword ptr [rbp + VALUE], rsp

#define MOV_RAX_TO_PTR_EBP_(VALUE) mov qword ptr [ebp + VALUE], rax
#define MOV_RBX_TO_PTR_EBP_(VALUE) mov qword ptr [ebp + VALUE], rbx
#define MOV_RCX_TO_PTR_EBP_(VALUE) mov qword ptr [ebp + VALUE], rcx
#define MOV_RDX_TO_PTR_EBP_(VALUE) mov qword ptr [ebp + VALUE], rdx
#define MOV_RSI_TO_PTR_EBP_(VALUE) mov qword ptr [ebp + VALUE], rsi
#define MOV_RDI_TO_PTR_EBP_(VALUE) mov qword ptr [ebp + VALUE], rdi
#define MOV_RBP_TO_PTR_EBP_(VALUE) mov qword ptr [ebp + VALUE], rbp
#define MOV_RSP_TO_PTR_EBP_(VALUE) mov qword ptr [ebp + VALUE], rsp

#define MOV_EAX_TO_PTR_RBP_(VALUE) mov dword ptr [rbp + VALUE], eax
#define MOV_EBX_TO_PTR_RBP_(VALUE) mov dword ptr [rbp + VALUE], ebx
#define MOV_ECX_TO_PTR_RBP_(VALUE) mov dword ptr [rbp + VALUE], ecx
#define MOV_EDX_TO_PTR_RBP_(VALUE) mov dword ptr [rbp + VALUE], edx
#define MOV_ESI_TO_PTR_RBP_(VALUE) mov dword ptr [rbp + VALUE], esi
#define MOV_EDI_TO_PTR_RBP_(VALUE) mov dword ptr [rbp + VALUE], edi
#define MOV_EBP_TO_PTR_RBP_(VALUE) mov dword ptr [rbp + VALUE], ebp
#define MOV_ESP_TO_PTR_RBP_(VALUE) mov dword ptr [rbp + VALUE], esp

#define MOV_AX_TO_PTR_RBP_(VALUE) mov word ptr [rbp + VALUE], ax
#define MOV_BX_TO_PTR_RBP_(VALUE) mov word ptr [rbp + VALUE], bx
#define MOV_CX_TO_PTR_RBP_(VALUE) mov word ptr [rbp + VALUE], cx
#define MOV_DX_TO_PTR_RBP_(VALUE) mov word ptr [rbp + VALUE], dx
#define MOV_SI_TO_PTR_RBP_(VALUE) mov word ptr [rbp + VALUE], si
#define MOV_DI_TO_PTR_RBP_(VALUE) mov word ptr [rbp + VALUE], di
#define MOV_BP_TO_PTR_RBP_(VALUE) mov word ptr [rbp + VALUE], bp
#define MOV_SP_TO_PTR_RBP_(VALUE) mov word ptr [rbp + VALUE], sp

#define MOV_AL_TO_PTR_RBP_(VALUE) mov byte ptr [rbp + VALUE], al
#define MOV_BL_TO_PTR_RBP_(VALUE) mov byte ptr [rbp + VALUE], bl
#define MOV_CL_TO_PTR_RBP_(VALUE) mov byte ptr [rbp + VALUE], cl
#define MOV_DL_TO_PTR_RBP_(VALUE) mov byte ptr [rbp + VALUE], dl
#define MOV_SIL_TO_PTR_RBP_(VALUE) mov byte ptr [rbp + VALUE], sil
#define MOV_DIL_TO_PTR_RBP_(VALUE) mov byte ptr [rbp + VALUE], dil
#define MOV_BPL_TO_PTR_RBP_(VALUE) mov byte ptr [rbp + VALUE], bpl
#define MOV_SPL_TO_PTR_RBP_(VALUE) mov byte ptr [rbp + VALUE], spl
/* ************************* [^] 64-BIT MEMORY [^] ************************** */

/* ************************ [v] 64-BIT SEGMENTS [v] ************************* */
#define MOV_RAX_FROM_PTR_FS_(VALUE) mov rax, qword ptr fs:[VALUE]
#define MOV_RBX_FROM_PTR_FS_(VALUE) mov rbx, qword ptr fs:[VALUE]
#define MOV_RCX_FROM_PTR_FS_(VALUE) mov rcx, qword ptr fs:[VALUE]
#define MOV_RDX_FROM_PTR_FS_(VALUE) mov rdx, qword ptr fs:[VALUE]
#define MOV_RSI_FROM_PTR_FS_(VALUE) mov rsi, qword ptr fs:[VALUE]
#define MOV_RDI_FROM_PTR_FS_(VALUE) mov rdi, qword ptr fs:[VALUE]
#define MOV_RBP_FROM_PTR_FS_(VALUE) mov rbp, qword ptr fs:[VALUE]
#define MOV_RSP_FROM_PTR_FS_(VALUE) mov rsp, qword ptr fs:[VALUE]

#define MOV_RAX_FROM_PTR_GS_(VALUE) mov rax, qword ptr gs:[VALUE]
#define MOV_RBX_FROM_PTR_GS_(VALUE) mov rbx, qword ptr gs:[VALUE]
#define MOV_RCX_FROM_PTR_GS_(VALUE) mov rcx, qword ptr gs:[VALUE]
#define MOV_RDX_FROM_PTR_GS_(VALUE) mov rdx, qword ptr gs:[VALUE]
#define MOV_RSI_FROM_PTR_GS_(VALUE) mov rsi, qword ptr gs:[VALUE]
#define MOV_RDI_FROM_PTR_GS_(VALUE) mov rdi, qword ptr gs:[VALUE]
#define MOV_RBP_FROM_PTR_GS_(VALUE) mov rbp, qword ptr gs:[VALUE]
#define MOV_RSP_FROM_PTR_GS_(VALUE) mov rsp, qword ptr gs:[VALUE]

#define MOV_RAX_TO_PTR_FS_(VALUE) mov qword ptr fs:[VALUE], rax
#define MOV_RBX_TO_PTR_FS_(VALUE) mov qword ptr fs:[VALUE], rbx
#define MOV_RCX_TO_PTR_FS_(VALUE) mov qword ptr fs:[VALUE], rcx
#define MOV_RDX_TO_PTR_FS_(VALUE) mov qword ptr fs:[VALUE], rdx
#define MOV_RSI_TO_PTR_FS_(VALUE) mov qword ptr fs:[VALUE], rsi
#define MOV_RDI_TO_PTR_FS_(VALUE) mov qword ptr fs:[VALUE], rdi
#define MOV_RBP_TO_PTR_FS_(VALUE) mov qword ptr fs:[VALUE], rbp
#define MOV_RSP_TO_PTR_FS_(VALUE) mov qword ptr fs:[VALUE], rsp

#define MOV_RAX_TO_PTR_GS_(VALUE) mov qword ptr gs:[VALUE], rax
#define MOV_RBX_TO_PTR_GS_(VALUE) mov qword ptr gs:[VALUE], rbx
#define MOV_RCX_TO_PTR_GS_(VALUE) mov qword ptr gs:[VALUE], rcx
#define MOV_RDX_TO_PTR_GS_(VALUE) mov qword ptr gs:[VALUE], rdx
#define MOV_RSI_TO_PTR_GS_(VALUE) mov qword ptr gs:[VALUE], rsi
#define MOV_RDI_TO_PTR_GS_(VALUE) mov qword ptr gs:[VALUE], rdi
#define MOV_RBP_TO_PTR_GS_(VALUE) mov qword ptr gs:[VALUE], rbp
#define MOV_RSP_TO_PTR_GS_(VALUE) mov qword ptr gs:[VALUE], rsp

#define MOV_R8_FROM_PTR_FS_(VALUE) mov r8, qword ptr fs:[VALUE]
#define MOV_R9_FROM_PTR_FS_(VALUE) mov r9, qword ptr fs:[VALUE]
#define MOV_R10_FROM_PTR_FS_(VALUE) mov r10, qword ptr fs:[VALUE]
#define MOV_R11_FROM_PTR_FS_(VALUE) mov r11, qword ptr fs:[VALUE]
#define MOV_R12_FROM_PTR_FS_(VALUE) mov r12, qword ptr fs:[VALUE]
#define MOV_R13_FROM_PTR_FS_(VALUE) mov r13, qword ptr fs:[VALUE]
#define MOV_R14_FROM_PTR_FS_(VALUE) mov r14, qword ptr fs:[VALUE]
#define MOV_R15_FROM_PTR_FS_(VALUE) mov r15, qword ptr fs:[VALUE]

#define MOV_R8_FROM_PTR_GS_(VALUE) mov r8, qword ptr gs:[VALUE]
#define MOV_R9_FROM_PTR_GS_(VALUE) mov r9, qword ptr gs:[VALUE]
#define MOV_R10_FROM_PTR_GS_(VALUE) mov r10, qword ptr gs:[VALUE]
#define MOV_R11_FROM_PTR_GS_(VALUE) mov r11, qword ptr gs:[VALUE]
#define MOV_R12_FROM_PTR_GS_(VALUE) mov r12, qword ptr gs:[VALUE]
#define MOV_R13_FROM_PTR_GS_(VALUE) mov r13, qword ptr gs:[VALUE]
#define MOV_R14_FROM_PTR_GS_(VALUE) mov r14, qword ptr gs:[VALUE]
#define MOV_R15_FROM_PTR_GS_(VALUE) mov r15, qword ptr gs:[VALUE]

#define MOV_R8_TO_PTR_FS_(VALUE) mov qword ptr fs:[VALUE], r8
#define MOV_R9_TO_PTR_FS_(VALUE) mov qword ptr fs:[VALUE], r9
#define MOV_R10_TO_PTR_FS_(VALUE) mov qword ptr fs:[VALUE], r10
#define MOV_R11_TO_PTR_FS_(VALUE) mov qword ptr fs:[VALUE], r11
#define MOV_R12_TO_PTR_FS_(VALUE) mov qword ptr fs:[VALUE], r12
#define MOV_R13_TO_PTR_FS_(VALUE) mov qword ptr fs:[VALUE], r13
#define MOV_R14_TO_PTR_FS_(VALUE) mov qword ptr fs:[VALUE], r14
#define MOV_R15_TO_PTR_FS_(VALUE) mov qword ptr fs:[VALUE], r15

#define MOV_R8_TO_PTR_GS_(VALUE) mov qword ptr gs:[VALUE], r8
#define MOV_R9_TO_PTR_GS_(VALUE) mov qword ptr gs:[VALUE], r9
#define MOV_R10_TO_PTR_GS_(VALUE) mov qword ptr gs:[VALUE], r10
#define MOV_R11_TO_PTR_GS_(VALUE) mov qword ptr gs:[VALUE], r11
#define MOV_R12_TO_PTR_GS_(VALUE) mov qword ptr gs:[VALUE], r12
#define MOV_R13_TO_PTR_GS_(VALUE) mov qword ptr gs:[VALUE], r13
#define MOV_R14_TO_PTR_GS_(VALUE) mov qword ptr gs:[VALUE], r14
#define MOV_R15_TO_PTR_GS_(VALUE) mov qword ptr gs:[VALUE], r15
/* ************************ [^] 64-BIT SEGMENTS [^] ************************* */

#define MOV_RAX_FROM_PTR_GS_RCX mov rax, qword ptr gs:[rcx]

#include "32.INL"

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
