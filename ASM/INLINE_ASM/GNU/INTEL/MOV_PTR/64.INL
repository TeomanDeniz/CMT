#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************* [v] 64-BIT MEMORY [v] ************************** */
#define MOV_RAX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X8B, 0X04, 0X25 # movq (" _(VALUE) "), %rax")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RBX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X8B, 0X1C, 0X25 # movq (" _(VALUE) "), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RCX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X8B, 0X0C, 0X25 # movq (" _(VALUE) "), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RDX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X8B, 0X14, 0X25 # movq (" _(VALUE) "), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RDI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X8B, 0X3C, 0X25 # movq (" _(VALUE) "), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RSI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X8B, 0X34, 0X25 # movq (" _(VALUE) "), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RBP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X8B, 0X2C, 0X25 # movq (" _(VALUE) "), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RSP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X8B, 0X24, 0X25 # movq (" _(VALUE) "), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X8B, 0X04, 0X25 # movq (" _(VALUE) "), %r8")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X8B, 0X0C, 0X25 # movq (" _(VALUE) "), %r9")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X8B, 0X14, 0X25 # movq (" _(VALUE) "), %r10")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X8B, 0X1C, 0X25 # movq (" _(VALUE) "), %r11")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X8B, 0X24, 0X25 # movq (" _(VALUE) "), %r12")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X8B, 0X2C, 0X25 # movq (" _(VALUE) "), %r13")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X8B, 0X34, 0X25 # movq (" _(VALUE) "), %r14")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X8B, 0X3C, 0X25 # movq (" _(VALUE) "), %r15")\
	CMT_ASM(".long " _(VALUE))

#define MOV_RAX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X89, 0X04, 0X25 # movq %rax, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RBX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X89, 0X1C, 0X25 # movq %rbx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RCX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X89, 0X0C, 0X25 # movq %rcx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RDX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X89, 0X14, 0X25 # movq %rdx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RDI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X89, 0X3C, 0X25 # movq %rdi, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RSI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X89, 0X34, 0X25 # movq %rsi, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RBP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X89, 0X2C, 0X25 # movq %rbp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RSP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X89, 0X24, 0X25 # movq %rsp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X89, 0X04, 0X25 # movq %r8, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X89, 0X0C, 0X25 # movq %r9, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X89, 0X14, 0X25 # movq %r10, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X89, 0X1C, 0X25 # movq %r11, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X89, 0X24, 0X25 # movq %r12, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X89, 0X2C, 0X25 # movq %r13, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X89, 0X34, 0X25 # movq %r14, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X89, 0X3C, 0X25 # movq %r15, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))

#define MOV_RAX_FROM_PTR_RAX CMT_ASM(".byte 0X48, 0X8B, 0X00 # movq (%rax), %rax")
#define MOV_RAX_FROM_PTR_RBX CMT_ASM(".byte 0X48, 0X8B, 0X03 # movq (%rbx), %rax")
#define MOV_RAX_FROM_PTR_RCX CMT_ASM(".byte 0X48, 0X8B, 0X01 # movq (%rcx), %rax")
#define MOV_RAX_FROM_PTR_RDX CMT_ASM(".byte 0X48, 0X8B, 0X02 # movq (%rdx), %rax")
#define MOV_RAX_FROM_PTR_RDI CMT_ASM(".byte 0X48, 0X8B, 0X07 # movq (%rdi), %rax")
#define MOV_RAX_FROM_PTR_RSI CMT_ASM(".byte 0X48, 0X8B, 0X06 # movq (%rsi), %rax")
#define MOV_RAX_FROM_PTR_RBP CMT_ASM(".byte 0X48, 0X8B, 0X45, 0X00 # movq (%rbp), %rax")
#define MOV_RAX_FROM_PTR_RSP CMT_ASM(".byte 0X48, 0X8B, 0X04, 0X24 # movq (%rsp), %rax")
#define MOV_RAX_FROM_PTR_R8 CMT_ASM(".byte 0X49, 0X8B, 0X00 # movq (%r8), %rax")
#define MOV_RAX_FROM_PTR_R9 CMT_ASM(".byte 0X49, 0X8B, 0X01 # movq (%r9), %rax")
#define MOV_RAX_FROM_PTR_R10 CMT_ASM(".byte 0X49, 0X8B, 0X02 # movq (%r10), %rax")
#define MOV_RAX_FROM_PTR_R11 CMT_ASM(".byte 0X49, 0X8B, 0X03 # movq (%r11), %rax")
#define MOV_RAX_FROM_PTR_R12 CMT_ASM(".byte 0X49, 0X8B, 0X04, 0X24 # movq (%r12), %rax")
#define MOV_RAX_FROM_PTR_R13 CMT_ASM(".byte 0X49, 0X8B, 0X45, 0X00 # movq (%r13), %rax")
#define MOV_RAX_FROM_PTR_R14 CMT_ASM(".byte 0X49, 0X8B, 0X06 # movq (%r14), %rax")
#define MOV_RAX_FROM_PTR_R15 CMT_ASM(".byte 0X49, 0X8B, 0X07 # movq (%r15), %rax")
#define MOV_RAX_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X8B, 0X00 # movq (%eax), %rax")
#define MOV_RAX_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X8B, 0X03 # movq (%ebx), %rax")
#define MOV_RAX_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X8B, 0X01 # movq (%ecx), %rax")
#define MOV_RAX_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X8B, 0X02 # movq (%edx), %rax")
#define MOV_RAX_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X8B, 0X07 # movq (%edi), %rax")
#define MOV_RAX_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X8B, 0X06 # movq (%esi), %rax")
#define MOV_RAX_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X8B, 0X45, 0X00 # movq (%ebp), %rax")
#define MOV_RAX_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X8B, 0X04, 0X24 # movq (%esp), %rax")

#define MOV_RBX_FROM_PTR_RAX CMT_ASM(".byte 0X48, 0X8B, 0X18 # movq (%rax), %rbx")
#define MOV_RBX_FROM_PTR_RBX CMT_ASM(".byte 0X48, 0X8B, 0X1B # movq (%rbx), %rbx")
#define MOV_RBX_FROM_PTR_RCX CMT_ASM(".byte 0X48, 0X8B, 0X19 # movq (%rcx), %rbx")
#define MOV_RBX_FROM_PTR_RDX CMT_ASM(".byte 0X48, 0X8B, 0X1A # movq (%rdx), %rbx")
#define MOV_RBX_FROM_PTR_RDI CMT_ASM(".byte 0X48, 0X8B, 0X1F # movq (%rdi), %rbx")
#define MOV_RBX_FROM_PTR_RSI CMT_ASM(".byte 0X48, 0X8B, 0X1E # movq (%rsi), %rbx")
#define MOV_RBX_FROM_PTR_RBP CMT_ASM(".byte 0X48, 0X8B, 0X5D, 0X00 # movq (%rbp), %rbx")
#define MOV_RBX_FROM_PTR_RSP CMT_ASM(".byte 0X48, 0X8B, 0X1C, 0X24 # movq (%rsp), %rbx")
#define MOV_RBX_FROM_PTR_R8 CMT_ASM(".byte 0X49, 0X8B, 0X18 # movq (%r8), %rbx")
#define MOV_RBX_FROM_PTR_R9 CMT_ASM(".byte 0X49, 0X8B, 0X19 # movq (%r9), %rbx")
#define MOV_RBX_FROM_PTR_R10 CMT_ASM(".byte 0X49, 0X8B, 0X1A # movq (%r10), %rbx")
#define MOV_RBX_FROM_PTR_R11 CMT_ASM(".byte 0X49, 0X8B, 0X1B # movq (%r11), %rbx")
#define MOV_RBX_FROM_PTR_R12 CMT_ASM(".byte 0X49, 0X8B, 0X1C, 0X24 # movq (%r12), %rbx")
#define MOV_RBX_FROM_PTR_R13 CMT_ASM(".byte 0X49, 0X8B, 0X5D, 0X00 # movq (%r13), %rbx")
#define MOV_RBX_FROM_PTR_R14 CMT_ASM(".byte 0X49, 0X8B, 0X1E # movq (%r14), %rbx")
#define MOV_RBX_FROM_PTR_R15 CMT_ASM(".byte 0X49, 0X8B, 0X1F # movq (%r15), %rbx")
#define MOV_RBX_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X8B, 0X18 # movq (%eax), %rbx")
#define MOV_RBX_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X8B, 0X1B # movq (%ebx), %rbx")
#define MOV_RBX_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X8B, 0X19 # movq (%ecx), %rbx")
#define MOV_RBX_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X8B, 0X1A # movq (%edx), %rbx")
#define MOV_RBX_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X8B, 0X1F # movq (%edi), %rbx")
#define MOV_RBX_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X8B, 0X1E # movq (%esi), %rbx")
#define MOV_RBX_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X8B, 0X5D, 0X00 # movq (%ebp), %rbx")
#define MOV_RBX_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X8B, 0X1C, 0X24 # movq (%esp), %rbx")

#define MOV_RCX_FROM_PTR_RAX CMT_ASM(".byte 0X48, 0X8B, 0X08 # movq (%rax), %rcx")
#define MOV_RCX_FROM_PTR_RBX CMT_ASM(".byte 0X48, 0X8B, 0X0B # movq (%rbx), %rcx")
#define MOV_RCX_FROM_PTR_RCX CMT_ASM(".byte 0X48, 0X8B, 0X09 # movq (%rcx), %rcx")
#define MOV_RCX_FROM_PTR_RDX CMT_ASM(".byte 0X48, 0X8B, 0X0A # movq (%rdx), %rcx")
#define MOV_RCX_FROM_PTR_RDI CMT_ASM(".byte 0X48, 0X8B, 0X0F # movq (%rdi), %rcx")
#define MOV_RCX_FROM_PTR_RSI CMT_ASM(".byte 0X48, 0X8B, 0X0E # movq (%rsi), %rcx")
#define MOV_RCX_FROM_PTR_RBP CMT_ASM(".byte 0X48, 0X8B, 0X4D, 0X00 # movq (%rbp), %rcx")
#define MOV_RCX_FROM_PTR_RSP CMT_ASM(".byte 0X48, 0X8B, 0X0C, 0X24 # movq (%rsp), %rcx")
#define MOV_RCX_FROM_PTR_R8 CMT_ASM(".byte 0X49, 0X8B, 0X08 # movq (%r8), %rcx")
#define MOV_RCX_FROM_PTR_R9 CMT_ASM(".byte 0X49, 0X8B, 0X09 # movq (%r9), %rcx")
#define MOV_RCX_FROM_PTR_R10 CMT_ASM(".byte 0X49, 0X8B, 0X0A # movq (%r10), %rcx")
#define MOV_RCX_FROM_PTR_R11 CMT_ASM(".byte 0X49, 0X8B, 0X0B # movq (%r11), %rcx")
#define MOV_RCX_FROM_PTR_R12 CMT_ASM(".byte 0X49, 0X8B, 0X0C, 0X24 # movq (%r12), %rcx")
#define MOV_RCX_FROM_PTR_R13 CMT_ASM(".byte 0X49, 0X8B, 0X4D, 0X00 # movq (%r13), %rcx")
#define MOV_RCX_FROM_PTR_R14 CMT_ASM(".byte 0X49, 0X8B, 0X0E # movq (%r14), %rcx")
#define MOV_RCX_FROM_PTR_R15 CMT_ASM(".byte 0X49, 0X8B, 0X0F # movq (%r15), %rcx")
#define MOV_RCX_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X8B, 0X08 # movq (%eax), %rcx")
#define MOV_RCX_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X8B, 0X0B # movq (%ebx), %rcx")
#define MOV_RCX_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X8B, 0X09 # movq (%ecx), %rcx")
#define MOV_RCX_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X8B, 0X0A # movq (%edx), %rcx")
#define MOV_RCX_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X8B, 0X0F # movq (%edi), %rcx")
#define MOV_RCX_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X8B, 0X0E # movq (%esi), %rcx")
#define MOV_RCX_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X8B, 0X4D, 0X00 # movq (%ebp), %rcx")
#define MOV_RCX_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X8B, 0X0C, 0X24 # movq (%esp), %rcx")

#define MOV_RDX_FROM_PTR_RAX CMT_ASM(".byte 0X48, 0X8B, 0X10 # movq (%rax), %rdx")
#define MOV_RDX_FROM_PTR_RBX CMT_ASM(".byte 0X48, 0X8B, 0X13 # movq (%rbx), %rdx")
#define MOV_RDX_FROM_PTR_RCX CMT_ASM(".byte 0X48, 0X8B, 0X11 # movq (%rcx), %rdx")
#define MOV_RDX_FROM_PTR_RDX CMT_ASM(".byte 0X48, 0X8B, 0X12 # movq (%rdx), %rdx")
#define MOV_RDX_FROM_PTR_RDI CMT_ASM(".byte 0X48, 0X8B, 0X17 # movq (%rdi), %rdx")
#define MOV_RDX_FROM_PTR_RSI CMT_ASM(".byte 0X48, 0X8B, 0X16 # movq (%rsi), %rdx")
#define MOV_RDX_FROM_PTR_RBP CMT_ASM(".byte 0X48, 0X8B, 0X55, 0X00 # movq (%rbp), %rdx")
#define MOV_RDX_FROM_PTR_RSP CMT_ASM(".byte 0X48, 0X8B, 0X14, 0X24 # movq (%rsp), %rdx")
#define MOV_RDX_FROM_PTR_R8 CMT_ASM(".byte 0X49, 0X8B, 0X10 # movq (%r8), %rdx")
#define MOV_RDX_FROM_PTR_R9 CMT_ASM(".byte 0X49, 0X8B, 0X11 # movq (%r9), %rdx")
#define MOV_RDX_FROM_PTR_R10 CMT_ASM(".byte 0X49, 0X8B, 0X12 # movq (%r10), %rdx")
#define MOV_RDX_FROM_PTR_R11 CMT_ASM(".byte 0X49, 0X8B, 0X13 # movq (%r11), %rdx")
#define MOV_RDX_FROM_PTR_R12 CMT_ASM(".byte 0X49, 0X8B, 0X14, 0X24 # movq (%r12), %rdx")
#define MOV_RDX_FROM_PTR_R13 CMT_ASM(".byte 0X49, 0X8B, 0X55, 0X00 # movq (%r13), %rdx")
#define MOV_RDX_FROM_PTR_R14 CMT_ASM(".byte 0X49, 0X8B, 0X16 # movq (%r14), %rdx")
#define MOV_RDX_FROM_PTR_R15 CMT_ASM(".byte 0X49, 0X8B, 0X17 # movq (%r15), %rdx")
#define MOV_RDX_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X8B, 0X10 # movq (%eax), %rdx")
#define MOV_RDX_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X8B, 0X13 # movq (%ebx), %rdx")
#define MOV_RDX_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X8B, 0X11 # movq (%ecx), %rdx")
#define MOV_RDX_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X8B, 0X12 # movq (%edx), %rdx")
#define MOV_RDX_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X8B, 0X17 # movq (%edi), %rdx")
#define MOV_RDX_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X8B, 0X16 # movq (%esi), %rdx")
#define MOV_RDX_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X8B, 0X55, 0X00 # movq (%ebp), %rdx")
#define MOV_RDX_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X8B, 0X14, 0X24 # movq (%esp), %rdx")

#define MOV_RDI_FROM_PTR_RAX CMT_ASM(".byte 0X48, 0X8B, 0X38 # movq (%rax), %rdi")
#define MOV_RDI_FROM_PTR_RBX CMT_ASM(".byte 0X48, 0X8B, 0X3B # movq (%rbx), %rdi")
#define MOV_RDI_FROM_PTR_RCX CMT_ASM(".byte 0X48, 0X8B, 0X39 # movq (%rcx), %rdi")
#define MOV_RDI_FROM_PTR_RDX CMT_ASM(".byte 0X48, 0X8B, 0X3A # movq (%rdx), %rdi")
#define MOV_RDI_FROM_PTR_RDI CMT_ASM(".byte 0X48, 0X8B, 0X3F # movq (%rdi), %rdi")
#define MOV_RDI_FROM_PTR_RSI CMT_ASM(".byte 0X48, 0X8B, 0X3E # movq (%rsi), %rdi")
#define MOV_RDI_FROM_PTR_RBP CMT_ASM(".byte 0X48, 0X8B, 0X7D, 0X00 # movq (%rbp), %rdi")
#define MOV_RDI_FROM_PTR_RSP CMT_ASM(".byte 0X48, 0X8B, 0X3C, 0X24 # movq (%rsp), %rdi")
#define MOV_RDI_FROM_PTR_R8 CMT_ASM(".byte 0X49, 0X8B, 0X38 # movq (%r8), %rdi")
#define MOV_RDI_FROM_PTR_R9 CMT_ASM(".byte 0X49, 0X8B, 0X39 # movq (%r9), %rdi")
#define MOV_RDI_FROM_PTR_R10 CMT_ASM(".byte 0X49, 0X8B, 0X3A # movq (%r10), %rdi")
#define MOV_RDI_FROM_PTR_R11 CMT_ASM(".byte 0X49, 0X8B, 0X3B # movq (%r11), %rdi")
#define MOV_RDI_FROM_PTR_R12 CMT_ASM(".byte 0X49, 0X8B, 0X3C, 0X24 # movq (%r12), %rdi")
#define MOV_RDI_FROM_PTR_R13 CMT_ASM(".byte 0X49, 0X8B, 0X7D, 0X00 # movq (%r13), %rdi")
#define MOV_RDI_FROM_PTR_R14 CMT_ASM(".byte 0X49, 0X8B, 0X3E # movq (%r14), %rdi")
#define MOV_RDI_FROM_PTR_R15 CMT_ASM(".byte 0X49, 0X8B, 0X3F # movq (%r15), %rdi")
#define MOV_RDI_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X8B, 0X38 # movq (%eax), %rdi")
#define MOV_RDI_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X8B, 0X3B # movq (%ebx), %rdi")
#define MOV_RDI_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X8B, 0X39 # movq (%ecx), %rdi")
#define MOV_RDI_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X8B, 0X3A # movq (%edx), %rdi")
#define MOV_RDI_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X8B, 0X3F # movq (%edi), %rdi")
#define MOV_RDI_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X8B, 0X3E # movq (%esi), %rdi")
#define MOV_RDI_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X8B, 0X7D, 0X00 # movq (%ebp), %rdi")
#define MOV_RDI_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X8B, 0X3C, 0X24 # movq (%esp), %rdi")

#define MOV_RSI_FROM_PTR_RAX CMT_ASM(".byte 0X48, 0X8B, 0X30 # movq (%rax), %rsi")
#define MOV_RSI_FROM_PTR_RBX CMT_ASM(".byte 0X48, 0X8B, 0X33 # movq (%rbx), %rsi")
#define MOV_RSI_FROM_PTR_RCX CMT_ASM(".byte 0X48, 0X8B, 0X31 # movq (%rcx), %rsi")
#define MOV_RSI_FROM_PTR_RDX CMT_ASM(".byte 0X48, 0X8B, 0X32 # movq (%rdx), %rsi")
#define MOV_RSI_FROM_PTR_RDI CMT_ASM(".byte 0X48, 0X8B, 0X37 # movq (%rdi), %rsi")
#define MOV_RSI_FROM_PTR_RSI CMT_ASM(".byte 0X48, 0X8B, 0X36 # movq (%rsi), %rsi")
#define MOV_RSI_FROM_PTR_RBP CMT_ASM(".byte 0X48, 0X8B, 0X75, 0X00 # movq (%rbp), %rsi")
#define MOV_RSI_FROM_PTR_RSP CMT_ASM(".byte 0X48, 0X8B, 0X34, 0X24 # movq (%rsp), %rsi")
#define MOV_RSI_FROM_PTR_R8 CMT_ASM(".byte 0X49, 0X8B, 0X30 # movq (%r8), %rsi")
#define MOV_RSI_FROM_PTR_R9 CMT_ASM(".byte 0X49, 0X8B, 0X31 # movq (%r9), %rsi")
#define MOV_RSI_FROM_PTR_R10 CMT_ASM(".byte 0X49, 0X8B, 0X32 # movq (%r10), %rsi")
#define MOV_RSI_FROM_PTR_R11 CMT_ASM(".byte 0X49, 0X8B, 0X33 # movq (%r11), %rsi")
#define MOV_RSI_FROM_PTR_R12 CMT_ASM(".byte 0X49, 0X8B, 0X34, 0X24 # movq (%r12), %rsi")
#define MOV_RSI_FROM_PTR_R13 CMT_ASM(".byte 0X49, 0X8B, 0X75, 0X00 # movq (%r13), %rsi")
#define MOV_RSI_FROM_PTR_R14 CMT_ASM(".byte 0X49, 0X8B, 0X36 # movq (%r14), %rsi")
#define MOV_RSI_FROM_PTR_R15 CMT_ASM(".byte 0X49, 0X8B, 0X37 # movq (%r15), %rsi")
#define MOV_RSI_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X8B, 0X30 # movq (%eax), %rsi")
#define MOV_RSI_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X8B, 0X33 # movq (%ebx), %rsi")
#define MOV_RSI_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X8B, 0X31 # movq (%ecx), %rsi")
#define MOV_RSI_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X8B, 0X32 # movq (%edx), %rsi")
#define MOV_RSI_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X8B, 0X37 # movq (%edi), %rsi")
#define MOV_RSI_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X8B, 0X36 # movq (%esi), %rsi")
#define MOV_RSI_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X8B, 0X75, 0X00 # movq (%ebp), %rsi")
#define MOV_RSI_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X8B, 0X34, 0X24 # movq (%esp), %rsi")

#define MOV_RBP_FROM_PTR_RAX CMT_ASM(".byte 0X48, 0X8B, 0X28 # movq (%rax), %rbp")
#define MOV_RBP_FROM_PTR_RBX CMT_ASM(".byte 0X48, 0X8B, 0X2B # movq (%rbx), %rbp")
#define MOV_RBP_FROM_PTR_RCX CMT_ASM(".byte 0X48, 0X8B, 0X29 # movq (%rcx), %rbp")
#define MOV_RBP_FROM_PTR_RDX CMT_ASM(".byte 0X48, 0X8B, 0X2A # movq (%rdx), %rbp")
#define MOV_RBP_FROM_PTR_RDI CMT_ASM(".byte 0X48, 0X8B, 0X2F # movq (%rdi), %rbp")
#define MOV_RBP_FROM_PTR_RSI CMT_ASM(".byte 0X48, 0X8B, 0X2E # movq (%rsi), %rbp")
#define MOV_RBP_FROM_PTR_RBP CMT_ASM(".byte 0X48, 0X8B, 0X6D, 0X00 # movq (%rbp), %rbp")
#define MOV_RBP_FROM_PTR_RSP CMT_ASM(".byte 0X48, 0X8B, 0X2C, 0X24 # movq (%rsp), %rbp")
#define MOV_RBP_FROM_PTR_R8 CMT_ASM(".byte 0X49, 0X8B, 0X28 # movq (%r8), %rbp")
#define MOV_RBP_FROM_PTR_R9 CMT_ASM(".byte 0X49, 0X8B, 0X29 # movq (%r9), %rbp")
#define MOV_RBP_FROM_PTR_R10 CMT_ASM(".byte 0X49, 0X8B, 0X2A # movq (%r10), %rbp")
#define MOV_RBP_FROM_PTR_R11 CMT_ASM(".byte 0X49, 0X8B, 0X2B # movq (%r11), %rbp")
#define MOV_RBP_FROM_PTR_R12 CMT_ASM(".byte 0X49, 0X8B, 0X2C, 0X24 # movq (%r12), %rbp")
#define MOV_RBP_FROM_PTR_R13 CMT_ASM(".byte 0X49, 0X8B, 0X6D, 0X00 # movq (%r13), %rbp")
#define MOV_RBP_FROM_PTR_R14 CMT_ASM(".byte 0X49, 0X8B, 0X2E # movq (%r14), %rbp")
#define MOV_RBP_FROM_PTR_R15 CMT_ASM(".byte 0X49, 0X8B, 0X2F # movq (%r15), %rbp")
#define MOV_RBP_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X8B, 0X28 # movq (%eax), %rbp")
#define MOV_RBP_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X8B, 0X2B # movq (%ebx), %rbp")
#define MOV_RBP_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X8B, 0X29 # movq (%ecx), %rbp")
#define MOV_RBP_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X8B, 0X2A # movq (%edx), %rbp")
#define MOV_RBP_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X8B, 0X2F # movq (%edi), %rbp")
#define MOV_RBP_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X8B, 0X2E # movq (%esi), %rbp")
#define MOV_RBP_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X8B, 0X6D, 0X00 # movq (%ebp), %rbp")
#define MOV_RBP_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X8B, 0X2C, 0X24 # movq (%esp), %rbp")

#define MOV_RSP_FROM_PTR_RAX CMT_ASM(".byte 0X48, 0X8B, 0X20 # movq (%rax), %rsp")
#define MOV_RSP_FROM_PTR_RBX CMT_ASM(".byte 0X48, 0X8B, 0X23 # movq (%rbx), %rsp")
#define MOV_RSP_FROM_PTR_RCX CMT_ASM(".byte 0X48, 0X8B, 0X21 # movq (%rcx), %rsp")
#define MOV_RSP_FROM_PTR_RDX CMT_ASM(".byte 0X48, 0X8B, 0X22 # movq (%rdx), %rsp")
#define MOV_RSP_FROM_PTR_RDI CMT_ASM(".byte 0X48, 0X8B, 0X27 # movq (%rdi), %rsp")
#define MOV_RSP_FROM_PTR_RSI CMT_ASM(".byte 0X48, 0X8B, 0X26 # movq (%rsi), %rsp")
#define MOV_RSP_FROM_PTR_RBP CMT_ASM(".byte 0X48, 0X8B, 0X65, 0X00 # movq (%rbp), %rsp")
#define MOV_RSP_FROM_PTR_RSP CMT_ASM(".byte 0X48, 0X8B, 0X24, 0X24 # movq (%rsp), %rsp")
#define MOV_RSP_FROM_PTR_R8 CMT_ASM(".byte 0X49, 0X8B, 0X20 # movq (%r8), %rsp")
#define MOV_RSP_FROM_PTR_R9 CMT_ASM(".byte 0X49, 0X8B, 0X21 # movq (%r9), %rsp")
#define MOV_RSP_FROM_PTR_R10 CMT_ASM(".byte 0X49, 0X8B, 0X22 # movq (%r10), %rsp")
#define MOV_RSP_FROM_PTR_R11 CMT_ASM(".byte 0X49, 0X8B, 0X23 # movq (%r11), %rsp")
#define MOV_RSP_FROM_PTR_R12 CMT_ASM(".byte 0X49, 0X8B, 0X24, 0X24 # movq (%r12), %rsp")
#define MOV_RSP_FROM_PTR_R13 CMT_ASM(".byte 0X49, 0X8B, 0X65, 0X00 # movq (%r13), %rsp")
#define MOV_RSP_FROM_PTR_R14 CMT_ASM(".byte 0X49, 0X8B, 0X26 # movq (%r14), %rsp")
#define MOV_RSP_FROM_PTR_R15 CMT_ASM(".byte 0X49, 0X8B, 0X27 # movq (%r15), %rsp")
#define MOV_RSP_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X8B, 0X20 # movq (%eax), %rsp")
#define MOV_RSP_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X8B, 0X23 # movq (%ebx), %rsp")
#define MOV_RSP_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X8B, 0X21 # movq (%ecx), %rsp")
#define MOV_RSP_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X8B, 0X22 # movq (%edx), %rsp")
#define MOV_RSP_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X8B, 0X27 # movq (%edi), %rsp")
#define MOV_RSP_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X8B, 0X26 # movq (%esi), %rsp")
#define MOV_RSP_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X8B, 0X65, 0X00 # movq (%ebp), %rsp")
#define MOV_RSP_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X8B, 0X24, 0X24 # movq (%esp), %rsp")

#define MOV_R8_FROM_PTR_RAX CMT_ASM(".byte 0X4C, 0X8B, 0X00 # movq (%rax), %r8")
#define MOV_R8_FROM_PTR_RBX CMT_ASM(".byte 0X4C, 0X8B, 0X03 # movq (%rbx), %r8")
#define MOV_R8_FROM_PTR_RCX CMT_ASM(".byte 0X4C, 0X8B, 0X01 # movq (%rcx), %r8")
#define MOV_R8_FROM_PTR_RDX CMT_ASM(".byte 0X4C, 0X8B, 0X02 # movq (%rdx), %r8")
#define MOV_R8_FROM_PTR_RDI CMT_ASM(".byte 0X4C, 0X8B, 0X07 # movq (%rdi), %r8")
#define MOV_R8_FROM_PTR_RSI CMT_ASM(".byte 0X4C, 0X8B, 0X06 # movq (%rsi), %r8")
#define MOV_R8_FROM_PTR_RBP CMT_ASM(".byte 0X4C, 0X8B, 0X45, 0X00 # movq (%rbp), %r8")
#define MOV_R8_FROM_PTR_RSP CMT_ASM(".byte 0X4C, 0X8B, 0X04, 0X24 # movq (%rsp), %r8")
#define MOV_R8_FROM_PTR_R8 CMT_ASM(".byte 0X4D, 0X8B, 0X00 # movq (%r8), %r8")
#define MOV_R8_FROM_PTR_R9 CMT_ASM(".byte 0X4D, 0X8B, 0X01 # movq (%r9), %r8")
#define MOV_R8_FROM_PTR_R10 CMT_ASM(".byte 0X4D, 0X8B, 0X02 # movq (%r10), %r8")
#define MOV_R8_FROM_PTR_R11 CMT_ASM(".byte 0X4D, 0X8B, 0X03 # movq (%r11), %r8")
#define MOV_R8_FROM_PTR_R12 CMT_ASM(".byte 0X4D, 0X8B, 0X04, 0X24 # movq (%r12), %r8")
#define MOV_R8_FROM_PTR_R13 CMT_ASM(".byte 0X4D, 0X8B, 0X45, 0X00 # movq (%r13), %r8")
#define MOV_R8_FROM_PTR_R14 CMT_ASM(".byte 0X4D, 0X8B, 0X06 # movq (%r14), %r8")
#define MOV_R8_FROM_PTR_R15 CMT_ASM(".byte 0X4D, 0X8B, 0X07 # movq (%r15), %r8")
#define MOV_R8_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0X00 # movq (%eax), %r8")
#define MOV_R8_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0X03 # movq (%ebx), %r8")
#define MOV_R8_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0X01 # movq (%ecx), %r8")
#define MOV_R8_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0X02 # movq (%edx), %r8")
#define MOV_R8_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0X07 # movq (%edi), %r8")
#define MOV_R8_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0X06 # movq (%esi), %r8")
#define MOV_R8_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0X45, 0X00 # movq (%ebp), %r8")
#define MOV_R8_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0X04, 0X24 # movq (%esp), %r8")

#define MOV_R9_FROM_PTR_RAX CMT_ASM(".byte 0X4C, 0X8B, 0X08 # movq (%rax), %r9")
#define MOV_R9_FROM_PTR_RBX CMT_ASM(".byte 0X4C, 0X8B, 0X0B # movq (%rbx), %r9")
#define MOV_R9_FROM_PTR_RCX CMT_ASM(".byte 0X4C, 0X8B, 0X09 # movq (%rcx), %r9")
#define MOV_R9_FROM_PTR_RDX CMT_ASM(".byte 0X4C, 0X8B, 0X0A # movq (%rdx), %r9")
#define MOV_R9_FROM_PTR_RDI CMT_ASM(".byte 0X4C, 0X8B, 0X0F # movq (%rdi), %r9")
#define MOV_R9_FROM_PTR_RSI CMT_ASM(".byte 0X4C, 0X8B, 0X0E # movq (%rsi), %r9")
#define MOV_R9_FROM_PTR_RBP CMT_ASM(".byte 0X4C, 0X8B, 0X4D, 0X00 # movq (%rbp), %r9")
#define MOV_R9_FROM_PTR_RSP CMT_ASM(".byte 0X4C, 0X8B, 0X0C, 0X24 # movq (%rsp), %r9")
#define MOV_R9_FROM_PTR_R8 CMT_ASM(".byte 0X4D, 0X8B, 0X08 # movq (%r8), %r9")
#define MOV_R9_FROM_PTR_R9 CMT_ASM(".byte 0X4D, 0X8B, 0X09 # movq (%r9), %r9")
#define MOV_R9_FROM_PTR_R10 CMT_ASM(".byte 0X4D, 0X8B, 0X0A # movq (%r10), %r9")
#define MOV_R9_FROM_PTR_R11 CMT_ASM(".byte 0X4D, 0X8B, 0X0B # movq (%r11), %r9")
#define MOV_R9_FROM_PTR_R12 CMT_ASM(".byte 0X4D, 0X8B, 0X0C, 0X24 # movq (%r12), %r9")
#define MOV_R9_FROM_PTR_R13 CMT_ASM(".byte 0X4D, 0X8B, 0X4D, 0X00 # movq (%r13), %r9")
#define MOV_R9_FROM_PTR_R14 CMT_ASM(".byte 0X4D, 0X8B, 0X0E # movq (%r14), %r9")
#define MOV_R9_FROM_PTR_R15 CMT_ASM(".byte 0X4D, 0X8B, 0X0F # movq (%r15), %r9")
#define MOV_R9_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0X08 # movq (%eax), %r9")
#define MOV_R9_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0X0B # movq (%ebx), %r9")
#define MOV_R9_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0X09 # movq (%ecx), %r9")
#define MOV_R9_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0X0A # movq (%edx), %r9")
#define MOV_R9_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0X0F # movq (%edi), %r9")
#define MOV_R9_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0X0E # movq (%esi), %r9")
#define MOV_R9_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0X4D, 0X00 # movq (%ebp), %r9")
#define MOV_R9_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0X0C, 0X24 # movq (%esp), %r9")

#define MOV_R10_FROM_PTR_RAX CMT_ASM(".byte 0X4C, 0X8B, 0X10 # movq (%rax), %r10")
#define MOV_R10_FROM_PTR_RBX CMT_ASM(".byte 0X4C, 0X8B, 0X13 # movq (%rbx), %r10")
#define MOV_R10_FROM_PTR_RCX CMT_ASM(".byte 0X4C, 0X8B, 0X11 # movq (%rcx), %r10")
#define MOV_R10_FROM_PTR_RDX CMT_ASM(".byte 0X4C, 0X8B, 0X12 # movq (%rdx), %r10")
#define MOV_R10_FROM_PTR_RDI CMT_ASM(".byte 0X4C, 0X8B, 0X17 # movq (%rdi), %r10")
#define MOV_R10_FROM_PTR_RSI CMT_ASM(".byte 0X4C, 0X8B, 0X16 # movq (%rsi), %r10")
#define MOV_R10_FROM_PTR_RBP CMT_ASM(".byte 0X4C, 0X8B, 0X55, 0X00 # movq (%rbp), %r10")
#define MOV_R10_FROM_PTR_RSP CMT_ASM(".byte 0X4C, 0X8B, 0X14, 0X24 # movq (%rsp), %r10")
#define MOV_R10_FROM_PTR_R8 CMT_ASM(".byte 0X4D, 0X8B, 0X10 # movq (%r8), %r10")
#define MOV_R10_FROM_PTR_R9 CMT_ASM(".byte 0X4D, 0X8B, 0X11 # movq (%r9), %r10")
#define MOV_R10_FROM_PTR_R10 CMT_ASM(".byte 0X4D, 0X8B, 0X12 # movq (%r10), %r10")
#define MOV_R10_FROM_PTR_R11 CMT_ASM(".byte 0X4D, 0X8B, 0X13 # movq (%r11), %r10")
#define MOV_R10_FROM_PTR_R12 CMT_ASM(".byte 0X4D, 0X8B, 0X14, 0X24 # movq (%r12), %r10")
#define MOV_R10_FROM_PTR_R13 CMT_ASM(".byte 0X4D, 0X8B, 0X55, 0X00 # movq (%r13), %r10")
#define MOV_R10_FROM_PTR_R14 CMT_ASM(".byte 0X4D, 0X8B, 0X16 # movq (%r14), %r10")
#define MOV_R10_FROM_PTR_R15 CMT_ASM(".byte 0X4D, 0X8B, 0X17 # movq (%r15), %r10")
#define MOV_R10_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0X10 # movq (%eax), %r10")
#define MOV_R10_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0X13 # movq (%ebx), %r10")
#define MOV_R10_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0X11 # movq (%ecx), %r10")
#define MOV_R10_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0X12 # movq (%edx), %r10")
#define MOV_R10_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0X17 # movq (%edi), %r10")
#define MOV_R10_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0X16 # movq (%esi), %r10")
#define MOV_R10_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0X55, 0X00 # movq (%ebp), %r10")
#define MOV_R10_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0X14, 0X24 # movq (%esp), %r10")

#define MOV_R11_FROM_PTR_RAX CMT_ASM(".byte 0X4C, 0X8B, 0X18 # movq (%rax), %r11")
#define MOV_R11_FROM_PTR_RBX CMT_ASM(".byte 0X4C, 0X8B, 0X1B # movq (%rbx), %r11")
#define MOV_R11_FROM_PTR_RCX CMT_ASM(".byte 0X4C, 0X8B, 0X19 # movq (%rcx), %r11")
#define MOV_R11_FROM_PTR_RDX CMT_ASM(".byte 0X4C, 0X8B, 0X1A # movq (%rdx), %r11")
#define MOV_R11_FROM_PTR_RDI CMT_ASM(".byte 0X4C, 0X8B, 0X1F # movq (%rdi), %r11")
#define MOV_R11_FROM_PTR_RSI CMT_ASM(".byte 0X4C, 0X8B, 0X1E # movq (%rsi), %r11")
#define MOV_R11_FROM_PTR_RBP CMT_ASM(".byte 0X4C, 0X8B, 0X5D, 0X00 # movq (%rbp), %r11")
#define MOV_R11_FROM_PTR_RSP CMT_ASM(".byte 0X4C, 0X8B, 0X1C, 0X24 # movq (%rsp), %r11")
#define MOV_R11_FROM_PTR_R8 CMT_ASM(".byte 0X4D, 0X8B, 0X18 # movq (%r8), %r11")
#define MOV_R11_FROM_PTR_R9 CMT_ASM(".byte 0X4D, 0X8B, 0X19 # movq (%r9), %r11")
#define MOV_R11_FROM_PTR_R10 CMT_ASM(".byte 0X4D, 0X8B, 0X1A # movq (%r10), %r11")
#define MOV_R11_FROM_PTR_R11 CMT_ASM(".byte 0X4D, 0X8B, 0X1B # movq (%r11), %r11")
#define MOV_R11_FROM_PTR_R12 CMT_ASM(".byte 0X4D, 0X8B, 0X1C, 0X24 # movq (%r12), %r11")
#define MOV_R11_FROM_PTR_R13 CMT_ASM(".byte 0X4D, 0X8B, 0X5D, 0X00 # movq (%r13), %r11")
#define MOV_R11_FROM_PTR_R14 CMT_ASM(".byte 0X4D, 0X8B, 0X1E # movq (%r14), %r11")
#define MOV_R11_FROM_PTR_R15 CMT_ASM(".byte 0X4D, 0X8B, 0X1F # movq (%r15), %r11")
#define MOV_R11_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0X18 # movq (%eax), %r11")
#define MOV_R11_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0X1B # movq (%ebx), %r11")
#define MOV_R11_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0X19 # movq (%ecx), %r11")
#define MOV_R11_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0X1A # movq (%edx), %r11")
#define MOV_R11_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0X1F # movq (%edi), %r11")
#define MOV_R11_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0X1E # movq (%esi), %r11")
#define MOV_R11_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0X5D, 0X00 # movq (%ebp), %r11")
#define MOV_R11_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0X1C, 0X24 # movq (%esp), %r11")

#define MOV_R12_FROM_PTR_RAX CMT_ASM(".byte 0X4C, 0X8B, 0X20 # movq (%rax), %r12")
#define MOV_R12_FROM_PTR_RBX CMT_ASM(".byte 0X4C, 0X8B, 0X23 # movq (%rbx), %r12")
#define MOV_R12_FROM_PTR_RCX CMT_ASM(".byte 0X4C, 0X8B, 0X21 # movq (%rcx), %r12")
#define MOV_R12_FROM_PTR_RDX CMT_ASM(".byte 0X4C, 0X8B, 0X22 # movq (%rdx), %r12")
#define MOV_R12_FROM_PTR_RDI CMT_ASM(".byte 0X4C, 0X8B, 0X27 # movq (%rdi), %r12")
#define MOV_R12_FROM_PTR_RSI CMT_ASM(".byte 0X4C, 0X8B, 0X26 # movq (%rsi), %r12")
#define MOV_R12_FROM_PTR_RBP CMT_ASM(".byte 0X4C, 0X8B, 0X65, 0X00 # movq (%rbp), %r12")
#define MOV_R12_FROM_PTR_RSP CMT_ASM(".byte 0X4C, 0X8B, 0X24, 0X24 # movq (%rsp), %r12")
#define MOV_R12_FROM_PTR_R8 CMT_ASM(".byte 0X4D, 0X8B, 0X20 # movq (%r8), %r12")
#define MOV_R12_FROM_PTR_R9 CMT_ASM(".byte 0X4D, 0X8B, 0X21 # movq (%r9), %r12")
#define MOV_R12_FROM_PTR_R10 CMT_ASM(".byte 0X4D, 0X8B, 0X22 # movq (%r10), %r12")
#define MOV_R12_FROM_PTR_R11 CMT_ASM(".byte 0X4D, 0X8B, 0X23 # movq (%r11), %r12")
#define MOV_R12_FROM_PTR_R12 CMT_ASM(".byte 0X4D, 0X8B, 0X24, 0X24 # movq (%r12), %r12")
#define MOV_R12_FROM_PTR_R13 CMT_ASM(".byte 0X4D, 0X8B, 0X65, 0X00 # movq (%r13), %r12")
#define MOV_R12_FROM_PTR_R14 CMT_ASM(".byte 0X4D, 0X8B, 0X26 # movq (%r14), %r12")
#define MOV_R12_FROM_PTR_R15 CMT_ASM(".byte 0X4D, 0X8B, 0X27 # movq (%r15), %r12")
#define MOV_R12_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0X20 # movq (%eax), %r12")
#define MOV_R12_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0X23 # movq (%ebx), %r12")
#define MOV_R12_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0X21 # movq (%ecx), %r12")
#define MOV_R12_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0X22 # movq (%edx), %r12")
#define MOV_R12_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0X27 # movq (%edi), %r12")
#define MOV_R12_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0X26 # movq (%esi), %r12")
#define MOV_R12_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0X65, 0X00 # movq (%ebp), %r12")
#define MOV_R12_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0X24, 0X24 # movq (%esp), %r12")

#define MOV_R13_FROM_PTR_RAX CMT_ASM(".byte 0X4C, 0X8B, 0X28 # movq (%rax), %r13")
#define MOV_R13_FROM_PTR_RBX CMT_ASM(".byte 0X4C, 0X8B, 0X2B # movq (%rbx), %r13")
#define MOV_R13_FROM_PTR_RCX CMT_ASM(".byte 0X4C, 0X8B, 0X29 # movq (%rcx), %r13")
#define MOV_R13_FROM_PTR_RDX CMT_ASM(".byte 0X4C, 0X8B, 0X2A # movq (%rdx), %r13")
#define MOV_R13_FROM_PTR_RDI CMT_ASM(".byte 0X4C, 0X8B, 0X2F # movq (%rdi), %r13")
#define MOV_R13_FROM_PTR_RSI CMT_ASM(".byte 0X4C, 0X8B, 0X2E # movq (%rsi), %r13")
#define MOV_R13_FROM_PTR_RBP CMT_ASM(".byte 0X4C, 0X8B, 0X6D, 0X00 # movq (%rbp), %r13")
#define MOV_R13_FROM_PTR_RSP CMT_ASM(".byte 0X4C, 0X8B, 0X2C, 0X24 # movq (%rsp), %r13")
#define MOV_R13_FROM_PTR_R8 CMT_ASM(".byte 0X4D, 0X8B, 0X28 # movq (%r8), %r13")
#define MOV_R13_FROM_PTR_R9 CMT_ASM(".byte 0X4D, 0X8B, 0X29 # movq (%r9), %r13")
#define MOV_R13_FROM_PTR_R10 CMT_ASM(".byte 0X4D, 0X8B, 0X2A # movq (%r10), %r13")
#define MOV_R13_FROM_PTR_R11 CMT_ASM(".byte 0X4D, 0X8B, 0X2B # movq (%r11), %r13")
#define MOV_R13_FROM_PTR_R12 CMT_ASM(".byte 0X4D, 0X8B, 0X2C, 0X24 # movq (%r12), %r13")
#define MOV_R13_FROM_PTR_R13 CMT_ASM(".byte 0X4D, 0X8B, 0X6D, 0X00 # movq (%r13), %r13")
#define MOV_R13_FROM_PTR_R14 CMT_ASM(".byte 0X4D, 0X8B, 0X2E # movq (%r14), %r13")
#define MOV_R13_FROM_PTR_R15 CMT_ASM(".byte 0X4D, 0X8B, 0X2F # movq (%r15), %r13")
#define MOV_R13_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0X28 # movq (%eax), %r13")
#define MOV_R13_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0X2B # movq (%ebx), %r13")
#define MOV_R13_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0X29 # movq (%ecx), %r13")
#define MOV_R13_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0X2A # movq (%edx), %r13")
#define MOV_R13_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0X2F # movq (%edi), %r13")
#define MOV_R13_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0X2E # movq (%esi), %r13")
#define MOV_R13_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0X6D, 0X00 # movq (%ebp), %r13")
#define MOV_R13_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0X2C, 0X24 # movq (%esp), %r13")

#define MOV_R14_FROM_PTR_RAX CMT_ASM(".byte 0X4C, 0X8B, 0X30 # movq (%rax), %r14")
#define MOV_R14_FROM_PTR_RBX CMT_ASM(".byte 0X4C, 0X8B, 0X33 # movq (%rbx), %r14")
#define MOV_R14_FROM_PTR_RCX CMT_ASM(".byte 0X4C, 0X8B, 0X31 # movq (%rcx), %r14")
#define MOV_R14_FROM_PTR_RDX CMT_ASM(".byte 0X4C, 0X8B, 0X32 # movq (%rdx), %r14")
#define MOV_R14_FROM_PTR_RDI CMT_ASM(".byte 0X4C, 0X8B, 0X37 # movq (%rdi), %r14")
#define MOV_R14_FROM_PTR_RSI CMT_ASM(".byte 0X4C, 0X8B, 0X36 # movq (%rsi), %r14")
#define MOV_R14_FROM_PTR_RBP CMT_ASM(".byte 0X4C, 0X8B, 0X75, 0X00 # movq (%rbp), %r14")
#define MOV_R14_FROM_PTR_RSP CMT_ASM(".byte 0X4C, 0X8B, 0X34, 0X24 # movq (%rsp), %r14")
#define MOV_R14_FROM_PTR_R8 CMT_ASM(".byte 0X4D, 0X8B, 0X30 # movq (%r8), %r14")
#define MOV_R14_FROM_PTR_R9 CMT_ASM(".byte 0X4D, 0X8B, 0X31 # movq (%r9), %r14")
#define MOV_R14_FROM_PTR_R10 CMT_ASM(".byte 0X4D, 0X8B, 0X32 # movq (%r10), %r14")
#define MOV_R14_FROM_PTR_R11 CMT_ASM(".byte 0X4D, 0X8B, 0X33 # movq (%r11), %r14")
#define MOV_R14_FROM_PTR_R12 CMT_ASM(".byte 0X4D, 0X8B, 0X34, 0X24 # movq (%r12), %r14")
#define MOV_R14_FROM_PTR_R13 CMT_ASM(".byte 0X4D, 0X8B, 0X75, 0X00 # movq (%r13), %r14")
#define MOV_R14_FROM_PTR_R14 CMT_ASM(".byte 0X4D, 0X8B, 0X36 # movq (%r14), %r14")
#define MOV_R14_FROM_PTR_R15 CMT_ASM(".byte 0X4D, 0X8B, 0X37 # movq (%r15), %r14")
#define MOV_R14_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0X30 # movq (%eax), %r14")
#define MOV_R14_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0X33 # movq (%ebx), %r14")
#define MOV_R14_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0X31 # movq (%ecx), %r14")
#define MOV_R14_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0X32 # movq (%edx), %r14")
#define MOV_R14_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0X37 # movq (%edi), %r14")
#define MOV_R14_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0X36 # movq (%esi), %r14")
#define MOV_R14_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0X75, 0X00 # movq (%ebp), %r14")
#define MOV_R14_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0X34, 0X24 # movq (%esp), %r14")

#define MOV_R15_FROM_PTR_RAX CMT_ASM(".byte 0X4C, 0X8B, 0X38 # movq (%rax), %r15")
#define MOV_R15_FROM_PTR_RBX CMT_ASM(".byte 0X4C, 0X8B, 0X3B # movq (%rbx), %r15")
#define MOV_R15_FROM_PTR_RCX CMT_ASM(".byte 0X4C, 0X8B, 0X39 # movq (%rcx), %r15")
#define MOV_R15_FROM_PTR_RDX CMT_ASM(".byte 0X4C, 0X8B, 0X3A # movq (%rdx), %r15")
#define MOV_R15_FROM_PTR_RDI CMT_ASM(".byte 0X4C, 0X8B, 0X3F # movq (%rdi), %r15")
#define MOV_R15_FROM_PTR_RSI CMT_ASM(".byte 0X4C, 0X8B, 0X3E # movq (%rsi), %r15")
#define MOV_R15_FROM_PTR_RBP CMT_ASM(".byte 0X4C, 0X8B, 0X7D, 0X00 # movq (%rbp), %r15")
#define MOV_R15_FROM_PTR_RSP CMT_ASM(".byte 0X4C, 0X8B, 0X3C, 0X24 # movq (%rsp), %r15")
#define MOV_R15_FROM_PTR_R8 CMT_ASM(".byte 0X4D, 0X8B, 0X38 # movq (%r8), %r15")
#define MOV_R15_FROM_PTR_R9 CMT_ASM(".byte 0X4D, 0X8B, 0X39 # movq (%r9), %r15")
#define MOV_R15_FROM_PTR_R10 CMT_ASM(".byte 0X4D, 0X8B, 0X3A # movq (%r10), %r15")
#define MOV_R15_FROM_PTR_R11 CMT_ASM(".byte 0X4D, 0X8B, 0X3B # movq (%r11), %r15")
#define MOV_R15_FROM_PTR_R12 CMT_ASM(".byte 0X4D, 0X8B, 0X3C, 0X24 # movq (%r12), %r15")
#define MOV_R15_FROM_PTR_R13 CMT_ASM(".byte 0X4D, 0X8B, 0X7D, 0X00 # movq (%r13), %r15")
#define MOV_R15_FROM_PTR_R14 CMT_ASM(".byte 0X4D, 0X8B, 0X3E # movq (%r14), %r15")
#define MOV_R15_FROM_PTR_R15 CMT_ASM(".byte 0X4D, 0X8B, 0X3F # movq (%r15), %r15")
#define MOV_R15_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0X38 # movq (%eax), %r15")
#define MOV_R15_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0X3B # movq (%ebx), %r15")
#define MOV_R15_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0X39 # movq (%ecx), %r15")
#define MOV_R15_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0X3A # movq (%edx), %r15")
#define MOV_R15_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0X3F # movq (%edi), %r15")
#define MOV_R15_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0X3E # movq (%esi), %r15")
#define MOV_R15_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0X7D, 0X00 # movq (%ebp), %r15")
#define MOV_R15_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0X3C, 0X24 # movq (%esp), %r15")

#define MOV_RAX_TO_PTR_RAX CMT_ASM(".byte 0X48, 0X89, 0X00 # movq %rax, (%rax)")
#define MOV_RAX_TO_PTR_RBX CMT_ASM(".byte 0X48, 0X89, 0X03 # movq %rax, (%rbx)")
#define MOV_RAX_TO_PTR_RCX CMT_ASM(".byte 0X48, 0X89, 0X01 # movq %rax, (%rcx)")
#define MOV_RAX_TO_PTR_RDX CMT_ASM(".byte 0X48, 0X89, 0X02 # movq %rax, (%rdx)")
#define MOV_RAX_TO_PTR_RDI CMT_ASM(".byte 0X48, 0X89, 0X07 # movq %rax, (%rdi)")
#define MOV_RAX_TO_PTR_RSI CMT_ASM(".byte 0X48, 0X89, 0X06 # movq %rax, (%rsi)")
#define MOV_RAX_TO_PTR_RBP CMT_ASM(".byte 0X48, 0X89, 0X45, 0X00 # movq %rax, (%rbp)")
#define MOV_RAX_TO_PTR_RSP CMT_ASM(".byte 0X48, 0X89, 0X04, 0X24 # movq %rax, (%rsp)")
#define MOV_RAX_TO_PTR_R8 CMT_ASM(".byte 0X49, 0X89, 0X00 # movq %rax, (%r8)")
#define MOV_RAX_TO_PTR_R9 CMT_ASM(".byte 0X49, 0X89, 0X01 # movq %rax, (%r9)")
#define MOV_RAX_TO_PTR_R10 CMT_ASM(".byte 0X49, 0X89, 0X02 # movq %rax, (%r10)")
#define MOV_RAX_TO_PTR_R11 CMT_ASM(".byte 0X49, 0X89, 0X03 # movq %rax, (%r11)")
#define MOV_RAX_TO_PTR_R12 CMT_ASM(".byte 0X49, 0X89, 0X04, 0X24 # movq %rax, (%r12)")
#define MOV_RAX_TO_PTR_R13 CMT_ASM(".byte 0X49, 0X89, 0X45, 0X00 # movq %rax, (%r13)")
#define MOV_RAX_TO_PTR_R14 CMT_ASM(".byte 0X49, 0X89, 0X06 # movq %rax, (%r14)")
#define MOV_RAX_TO_PTR_R15 CMT_ASM(".byte 0X49, 0X89, 0X07 # movq %rax, (%r15)")
#define MOV_RAX_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X89, 0X00 # movq %rax, (%eax)")
#define MOV_RAX_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X89, 0X03 # movq %rax, (%ebx)")
#define MOV_RAX_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X89, 0X01 # movq %rax, (%ecx)")
#define MOV_RAX_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X89, 0X02 # movq %rax, (%edx)")
#define MOV_RAX_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X89, 0X07 # movq %rax, (%edi)")
#define MOV_RAX_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X89, 0X06 # movq %rax, (%esi)")
#define MOV_RAX_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X89, 0X45, 0X00 # movq %rax, (%ebp)")
#define MOV_RAX_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X89, 0X04, 0X24 # movq %rax, (%esp)")

#define MOV_RBX_TO_PTR_RAX CMT_ASM(".byte 0X48, 0X89, 0X18 # movq %rbx, (%rax)")
#define MOV_RBX_TO_PTR_RBX CMT_ASM(".byte 0X48, 0X89, 0X1B # movq %rbx, (%rbx)")
#define MOV_RBX_TO_PTR_RCX CMT_ASM(".byte 0X48, 0X89, 0X19 # movq %rbx, (%rcx)")
#define MOV_RBX_TO_PTR_RDX CMT_ASM(".byte 0X48, 0X89, 0X1A # movq %rbx, (%rdx)")
#define MOV_RBX_TO_PTR_RDI CMT_ASM(".byte 0X48, 0X89, 0X1F # movq %rbx, (%rdi)")
#define MOV_RBX_TO_PTR_RSI CMT_ASM(".byte 0X48, 0X89, 0X1E # movq %rbx, (%rsi)")
#define MOV_RBX_TO_PTR_RBP CMT_ASM(".byte 0X48, 0X89, 0X5D, 0X00 # movq %rbx, (%rbp)")
#define MOV_RBX_TO_PTR_RSP CMT_ASM(".byte 0X48, 0X89, 0X1C, 0X24 # movq %rbx, (%rsp)")
#define MOV_RBX_TO_PTR_R8 CMT_ASM(".byte 0X49, 0X89, 0X18 # movq %rbx, (%r8)")
#define MOV_RBX_TO_PTR_R9 CMT_ASM(".byte 0X49, 0X89, 0X19 # movq %rbx, (%r9)")
#define MOV_RBX_TO_PTR_R10 CMT_ASM(".byte 0X49, 0X89, 0X1A # movq %rbx, (%r10)")
#define MOV_RBX_TO_PTR_R11 CMT_ASM(".byte 0X49, 0X89, 0X1B # movq %rbx, (%r11)")
#define MOV_RBX_TO_PTR_R12 CMT_ASM(".byte 0X49, 0X89, 0X1C, 0X24 # movq %rbx, (%r12)")
#define MOV_RBX_TO_PTR_R13 CMT_ASM(".byte 0X49, 0X89, 0X5D, 0X00 # movq %rbx, (%r13)")
#define MOV_RBX_TO_PTR_R14 CMT_ASM(".byte 0X49, 0X89, 0X1E # movq %rbx, (%r14)")
#define MOV_RBX_TO_PTR_R15 CMT_ASM(".byte 0X49, 0X89, 0X1F # movq %rbx, (%r15)")
#define MOV_RBX_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X89, 0X18 # movq %rbx, (%eax)")
#define MOV_RBX_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X89, 0X1B # movq %rbx, (%ebx)")
#define MOV_RBX_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X89, 0X19 # movq %rbx, (%ecx)")
#define MOV_RBX_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X89, 0X1A # movq %rbx, (%edx)")
#define MOV_RBX_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X89, 0X1F # movq %rbx, (%edi)")
#define MOV_RBX_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X89, 0X1E # movq %rbx, (%esi)")
#define MOV_RBX_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X89, 0X5D, 0X00 # movq %rbx, (%ebp)")
#define MOV_RBX_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X89, 0X1C, 0X24 # movq %rbx, (%esp)")

#define MOV_RCX_TO_PTR_RAX CMT_ASM(".byte 0X48, 0X89, 0X08 # movq %rcx, (%rax)")
#define MOV_RCX_TO_PTR_RBX CMT_ASM(".byte 0X48, 0X89, 0X0B # movq %rcx, (%rbx)")
#define MOV_RCX_TO_PTR_RCX CMT_ASM(".byte 0X48, 0X89, 0X09 # movq %rcx, (%rcx)")
#define MOV_RCX_TO_PTR_RDX CMT_ASM(".byte 0X48, 0X89, 0X0A # movq %rcx, (%rdx)")
#define MOV_RCX_TO_PTR_RDI CMT_ASM(".byte 0X48, 0X89, 0X0F # movq %rcx, (%rdi)")
#define MOV_RCX_TO_PTR_RSI CMT_ASM(".byte 0X48, 0X89, 0X0E # movq %rcx, (%rsi)")
#define MOV_RCX_TO_PTR_RBP CMT_ASM(".byte 0X48, 0X89, 0X4D, 0X00 # movq %rcx, (%rbp)")
#define MOV_RCX_TO_PTR_RSP CMT_ASM(".byte 0X48, 0X89, 0X0C, 0X24 # movq %rcx, (%rsp)")
#define MOV_RCX_TO_PTR_R8 CMT_ASM(".byte 0X49, 0X89, 0X08 # movq %rcx, (%r8)")
#define MOV_RCX_TO_PTR_R9 CMT_ASM(".byte 0X49, 0X89, 0X09 # movq %rcx, (%r9)")
#define MOV_RCX_TO_PTR_R10 CMT_ASM(".byte 0X49, 0X89, 0X0A # movq %rcx, (%r10)")
#define MOV_RCX_TO_PTR_R11 CMT_ASM(".byte 0X49, 0X89, 0X0B # movq %rcx, (%r11)")
#define MOV_RCX_TO_PTR_R12 CMT_ASM(".byte 0X49, 0X89, 0X0C, 0X24 # movq %rcx, (%r12)")
#define MOV_RCX_TO_PTR_R13 CMT_ASM(".byte 0X49, 0X89, 0X4D, 0X00 # movq %rcx, (%r13)")
#define MOV_RCX_TO_PTR_R14 CMT_ASM(".byte 0X49, 0X89, 0X0E # movq %rcx, (%r14)")
#define MOV_RCX_TO_PTR_R15 CMT_ASM(".byte 0X49, 0X89, 0X0F # movq %rcx, (%r15)")
#define MOV_RCX_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X89, 0X08 # movq %rcx, (%eax)")
#define MOV_RCX_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X89, 0X0B # movq %rcx, (%ebx)")
#define MOV_RCX_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X89, 0X09 # movq %rcx, (%ecx)")
#define MOV_RCX_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X89, 0X0A # movq %rcx, (%edx)")
#define MOV_RCX_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X89, 0X0F # movq %rcx, (%edi)")
#define MOV_RCX_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X89, 0X0E # movq %rcx, (%esi)")
#define MOV_RCX_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X89, 0X4D, 0X00 # movq %rcx, (%ebp)")
#define MOV_RCX_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X89, 0X0C, 0X24 # movq %rcx, (%esp)")

#define MOV_RDX_TO_PTR_RAX CMT_ASM(".byte 0X48, 0X89, 0X10 # movq %rdx, (%rax)")
#define MOV_RDX_TO_PTR_RBX CMT_ASM(".byte 0X48, 0X89, 0X13 # movq %rdx, (%rbx)")
#define MOV_RDX_TO_PTR_RCX CMT_ASM(".byte 0X48, 0X89, 0X11 # movq %rdx, (%rcx)")
#define MOV_RDX_TO_PTR_RDX CMT_ASM(".byte 0X48, 0X89, 0X12 # movq %rdx, (%rdx)")
#define MOV_RDX_TO_PTR_RDI CMT_ASM(".byte 0X48, 0X89, 0X17 # movq %rdx, (%rdi)")
#define MOV_RDX_TO_PTR_RSI CMT_ASM(".byte 0X48, 0X89, 0X16 # movq %rdx, (%rsi)")
#define MOV_RDX_TO_PTR_RBP CMT_ASM(".byte 0X48, 0X89, 0X55, 0X00 # movq %rdx, (%rbp)")
#define MOV_RDX_TO_PTR_RSP CMT_ASM(".byte 0X48, 0X89, 0X14, 0X24 # movq %rdx, (%rsp)")
#define MOV_RDX_TO_PTR_R8 CMT_ASM(".byte 0X49, 0X89, 0X10 # movq %rdx, (%r8)")
#define MOV_RDX_TO_PTR_R9 CMT_ASM(".byte 0X49, 0X89, 0X11 # movq %rdx, (%r9)")
#define MOV_RDX_TO_PTR_R10 CMT_ASM(".byte 0X49, 0X89, 0X12 # movq %rdx, (%r10)")
#define MOV_RDX_TO_PTR_R11 CMT_ASM(".byte 0X49, 0X89, 0X13 # movq %rdx, (%r11)")
#define MOV_RDX_TO_PTR_R12 CMT_ASM(".byte 0X49, 0X89, 0X14, 0X24 # movq %rdx, (%r12)")
#define MOV_RDX_TO_PTR_R13 CMT_ASM(".byte 0X49, 0X89, 0X55, 0X00 # movq %rdx, (%r13)")
#define MOV_RDX_TO_PTR_R14 CMT_ASM(".byte 0X49, 0X89, 0X16 # movq %rdx, (%r14)")
#define MOV_RDX_TO_PTR_R15 CMT_ASM(".byte 0X49, 0X89, 0X17 # movq %rdx, (%r15)")
#define MOV_RDX_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X89, 0X10 # movq %rdx, (%eax)")
#define MOV_RDX_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X89, 0X13 # movq %rdx, (%ebx)")
#define MOV_RDX_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X89, 0X11 # movq %rdx, (%ecx)")
#define MOV_RDX_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X89, 0X12 # movq %rdx, (%edx)")
#define MOV_RDX_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X89, 0X17 # movq %rdx, (%edi)")
#define MOV_RDX_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X89, 0X16 # movq %rdx, (%esi)")
#define MOV_RDX_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X89, 0X55, 0X00 # movq %rdx, (%ebp)")
#define MOV_RDX_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X89, 0X14, 0X24 # movq %rdx, (%esp)")

#define MOV_RDI_TO_PTR_RAX CMT_ASM(".byte 0X48, 0X89, 0X38 # movq %rdi, (%rax)")
#define MOV_RDI_TO_PTR_RBX CMT_ASM(".byte 0X48, 0X89, 0X3B # movq %rdi, (%rbx)")
#define MOV_RDI_TO_PTR_RCX CMT_ASM(".byte 0X48, 0X89, 0X39 # movq %rdi, (%rcx)")
#define MOV_RDI_TO_PTR_RDX CMT_ASM(".byte 0X48, 0X89, 0X3A # movq %rdi, (%rdx)")
#define MOV_RDI_TO_PTR_RDI CMT_ASM(".byte 0X48, 0X89, 0X3F # movq %rdi, (%rdi)")
#define MOV_RDI_TO_PTR_RSI CMT_ASM(".byte 0X48, 0X89, 0X3E # movq %rdi, (%rsi)")
#define MOV_RDI_TO_PTR_RBP CMT_ASM(".byte 0X48, 0X89, 0X7D, 0X00 # movq %rdi, (%rbp)")
#define MOV_RDI_TO_PTR_RSP CMT_ASM(".byte 0X48, 0X89, 0X3C, 0X24 # movq %rdi, (%rsp)")
#define MOV_RDI_TO_PTR_R8 CMT_ASM(".byte 0X49, 0X89, 0X38 # movq %rdi, (%r8)")
#define MOV_RDI_TO_PTR_R9 CMT_ASM(".byte 0X49, 0X89, 0X39 # movq %rdi, (%r9)")
#define MOV_RDI_TO_PTR_R10 CMT_ASM(".byte 0X49, 0X89, 0X3A # movq %rdi, (%r10)")
#define MOV_RDI_TO_PTR_R11 CMT_ASM(".byte 0X49, 0X89, 0X3B # movq %rdi, (%r11)")
#define MOV_RDI_TO_PTR_R12 CMT_ASM(".byte 0X49, 0X89, 0X3C, 0X24 # movq %rdi, (%r12)")
#define MOV_RDI_TO_PTR_R13 CMT_ASM(".byte 0X49, 0X89, 0X7D, 0X00 # movq %rdi, (%r13)")
#define MOV_RDI_TO_PTR_R14 CMT_ASM(".byte 0X49, 0X89, 0X3E # movq %rdi, (%r14)")
#define MOV_RDI_TO_PTR_R15 CMT_ASM(".byte 0X49, 0X89, 0X3F # movq %rdi, (%r15)")
#define MOV_RDI_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X89, 0X38 # movq %rdi, (%eax)")
#define MOV_RDI_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X89, 0X3B # movq %rdi, (%ebx)")
#define MOV_RDI_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X89, 0X39 # movq %rdi, (%ecx)")
#define MOV_RDI_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X89, 0X3A # movq %rdi, (%edx)")
#define MOV_RDI_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X89, 0X3F # movq %rdi, (%edi)")
#define MOV_RDI_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X89, 0X3E # movq %rdi, (%esi)")
#define MOV_RDI_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X89, 0X7D, 0X00 # movq %rdi, (%ebp)")
#define MOV_RDI_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X89, 0X3C, 0X24 # movq %rdi, (%esp)")

#define MOV_RSI_TO_PTR_RAX CMT_ASM(".byte 0X48, 0X89, 0X30 # movq %rsi, (%rax)")
#define MOV_RSI_TO_PTR_RBX CMT_ASM(".byte 0X48, 0X89, 0X33 # movq %rsi, (%rbx)")
#define MOV_RSI_TO_PTR_RCX CMT_ASM(".byte 0X48, 0X89, 0X31 # movq %rsi, (%rcx)")
#define MOV_RSI_TO_PTR_RDX CMT_ASM(".byte 0X48, 0X89, 0X32 # movq %rsi, (%rdx)")
#define MOV_RSI_TO_PTR_RDI CMT_ASM(".byte 0X48, 0X89, 0X37 # movq %rsi, (%rdi)")
#define MOV_RSI_TO_PTR_RSI CMT_ASM(".byte 0X48, 0X89, 0X36 # movq %rsi, (%rsi)")
#define MOV_RSI_TO_PTR_RBP CMT_ASM(".byte 0X48, 0X89, 0X75, 0X00 # movq %rsi, (%rbp)")
#define MOV_RSI_TO_PTR_RSP CMT_ASM(".byte 0X48, 0X89, 0X34, 0X24 # movq %rsi, (%rsp)")
#define MOV_RSI_TO_PTR_R8 CMT_ASM(".byte 0X49, 0X89, 0X30 # movq %rsi, (%r8)")
#define MOV_RSI_TO_PTR_R9 CMT_ASM(".byte 0X49, 0X89, 0X31 # movq %rsi, (%r9)")
#define MOV_RSI_TO_PTR_R10 CMT_ASM(".byte 0X49, 0X89, 0X32 # movq %rsi, (%r10)")
#define MOV_RSI_TO_PTR_R11 CMT_ASM(".byte 0X49, 0X89, 0X33 # movq %rsi, (%r11)")
#define MOV_RSI_TO_PTR_R12 CMT_ASM(".byte 0X49, 0X89, 0X34, 0X24 # movq %rsi, (%r12)")
#define MOV_RSI_TO_PTR_R13 CMT_ASM(".byte 0X49, 0X89, 0X75, 0X00 # movq %rsi, (%r13)")
#define MOV_RSI_TO_PTR_R14 CMT_ASM(".byte 0X49, 0X89, 0X36 # movq %rsi, (%r14)")
#define MOV_RSI_TO_PTR_R15 CMT_ASM(".byte 0X49, 0X89, 0X37 # movq %rsi, (%r15)")
#define MOV_RSI_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X89, 0X30 # movq %rsi, (%eax)")
#define MOV_RSI_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X89, 0X33 # movq %rsi, (%ebx)")
#define MOV_RSI_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X89, 0X31 # movq %rsi, (%ecx)")
#define MOV_RSI_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X89, 0X32 # movq %rsi, (%edx)")
#define MOV_RSI_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X89, 0X37 # movq %rsi, (%edi)")
#define MOV_RSI_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X89, 0X36 # movq %rsi, (%esi)")
#define MOV_RSI_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X89, 0X75, 0X00 # movq %rsi, (%ebp)")
#define MOV_RSI_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X89, 0X34, 0X24 # movq %rsi, (%esp)")

#define MOV_RBP_TO_PTR_RAX CMT_ASM(".byte 0X48, 0X89, 0X28 # movq %rbp, (%rax)")
#define MOV_RBP_TO_PTR_RBX CMT_ASM(".byte 0X48, 0X89, 0X2B # movq %rbp, (%rbx)")
#define MOV_RBP_TO_PTR_RCX CMT_ASM(".byte 0X48, 0X89, 0X29 # movq %rbp, (%rcx)")
#define MOV_RBP_TO_PTR_RDX CMT_ASM(".byte 0X48, 0X89, 0X2A # movq %rbp, (%rdx)")
#define MOV_RBP_TO_PTR_RDI CMT_ASM(".byte 0X48, 0X89, 0X2F # movq %rbp, (%rdi)")
#define MOV_RBP_TO_PTR_RSI CMT_ASM(".byte 0X48, 0X89, 0X2E # movq %rbp, (%rsi)")
#define MOV_RBP_TO_PTR_RBP CMT_ASM(".byte 0X48, 0X89, 0X6D, 0X00 # movq %rbp, (%rbp)")
#define MOV_RBP_TO_PTR_RSP CMT_ASM(".byte 0X48, 0X89, 0X2C, 0X24 # movq %rbp, (%rsp)")
#define MOV_RBP_TO_PTR_R8 CMT_ASM(".byte 0X49, 0X89, 0X28 # movq %rbp, (%r8)")
#define MOV_RBP_TO_PTR_R9 CMT_ASM(".byte 0X49, 0X89, 0X29 # movq %rbp, (%r9)")
#define MOV_RBP_TO_PTR_R10 CMT_ASM(".byte 0X49, 0X89, 0X2A # movq %rbp, (%r10)")
#define MOV_RBP_TO_PTR_R11 CMT_ASM(".byte 0X49, 0X89, 0X2B # movq %rbp, (%r11)")
#define MOV_RBP_TO_PTR_R12 CMT_ASM(".byte 0X49, 0X89, 0X2C, 0X24 # movq %rbp, (%r12)")
#define MOV_RBP_TO_PTR_R13 CMT_ASM(".byte 0X49, 0X89, 0X6D, 0X00 # movq %rbp, (%r13)")
#define MOV_RBP_TO_PTR_R14 CMT_ASM(".byte 0X49, 0X89, 0X2E # movq %rbp, (%r14)")
#define MOV_RBP_TO_PTR_R15 CMT_ASM(".byte 0X49, 0X89, 0X2F # movq %rbp, (%r15)")
#define MOV_RBP_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X89, 0X28 # movq %rbp, (%eax)")
#define MOV_RBP_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X89, 0X2B # movq %rbp, (%ebx)")
#define MOV_RBP_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X89, 0X29 # movq %rbp, (%ecx)")
#define MOV_RBP_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X89, 0X2A # movq %rbp, (%edx)")
#define MOV_RBP_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X89, 0X2F # movq %rbp, (%edi)")
#define MOV_RBP_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X89, 0X2E # movq %rbp, (%esi)")
#define MOV_RBP_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X89, 0X6D, 0X00 # movq %rbp, (%ebp)")
#define MOV_RBP_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X89, 0X2C, 0X24 # movq %rbp, (%esp)")

#define MOV_RSP_TO_PTR_RAX CMT_ASM(".byte 0X48, 0X89, 0X20 # movq %rsp, (%rax)")
#define MOV_RSP_TO_PTR_RBX CMT_ASM(".byte 0X48, 0X89, 0X23 # movq %rsp, (%rbx)")
#define MOV_RSP_TO_PTR_RCX CMT_ASM(".byte 0X48, 0X89, 0X21 # movq %rsp, (%rcx)")
#define MOV_RSP_TO_PTR_RDX CMT_ASM(".byte 0X48, 0X89, 0X22 # movq %rsp, (%rdx)")
#define MOV_RSP_TO_PTR_RDI CMT_ASM(".byte 0X48, 0X89, 0X27 # movq %rsp, (%rdi)")
#define MOV_RSP_TO_PTR_RSI CMT_ASM(".byte 0X48, 0X89, 0X26 # movq %rsp, (%rsi)")
#define MOV_RSP_TO_PTR_RBP CMT_ASM(".byte 0X48, 0X89, 0X65, 0X00 # movq %rsp, (%rbp)")
#define MOV_RSP_TO_PTR_RSP CMT_ASM(".byte 0X48, 0X89, 0X24, 0X24 # movq %rsp, (%rsp)")
#define MOV_RSP_TO_PTR_R8 CMT_ASM(".byte 0X49, 0X89, 0X20 # movq %rsp, (%r8)")
#define MOV_RSP_TO_PTR_R9 CMT_ASM(".byte 0X49, 0X89, 0X21 # movq %rsp, (%r9)")
#define MOV_RSP_TO_PTR_R10 CMT_ASM(".byte 0X49, 0X89, 0X22 # movq %rsp, (%r10)")
#define MOV_RSP_TO_PTR_R11 CMT_ASM(".byte 0X49, 0X89, 0X23 # movq %rsp, (%r11)")
#define MOV_RSP_TO_PTR_R12 CMT_ASM(".byte 0X49, 0X89, 0X24, 0X24 # movq %rsp, (%r12)")
#define MOV_RSP_TO_PTR_R13 CMT_ASM(".byte 0X49, 0X89, 0X65, 0X00 # movq %rsp, (%r13)")
#define MOV_RSP_TO_PTR_R14 CMT_ASM(".byte 0X49, 0X89, 0X26 # movq %rsp, (%r14)")
#define MOV_RSP_TO_PTR_R15 CMT_ASM(".byte 0X49, 0X89, 0X27 # movq %rsp, (%r15)")
#define MOV_RSP_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X89, 0X20 # movq %rsp, (%eax)")
#define MOV_RSP_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X89, 0X23 # movq %rsp, (%ebx)")
#define MOV_RSP_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X89, 0X21 # movq %rsp, (%ecx)")
#define MOV_RSP_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X89, 0X22 # movq %rsp, (%edx)")
#define MOV_RSP_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X89, 0X27 # movq %rsp, (%edi)")
#define MOV_RSP_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X89, 0X26 # movq %rsp, (%esi)")
#define MOV_RSP_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X89, 0X65, 0X00 # movq %rsp, (%ebp)")
#define MOV_RSP_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X89, 0X24, 0X24 # movq %rsp, (%esp)")

#define MOV_R8_TO_PTR_RAX CMT_ASM(".byte 0X4C, 0X89, 0X00 # movq %r8, (%rax)")
#define MOV_R8_TO_PTR_RBX CMT_ASM(".byte 0X4C, 0X89, 0X03 # movq %r8, (%rbx)")
#define MOV_R8_TO_PTR_RCX CMT_ASM(".byte 0X4C, 0X89, 0X01 # movq %r8, (%rcx)")
#define MOV_R8_TO_PTR_RDX CMT_ASM(".byte 0X4C, 0X89, 0X02 # movq %r8, (%rdx)")
#define MOV_R8_TO_PTR_RDI CMT_ASM(".byte 0X4C, 0X89, 0X07 # movq %r8, (%rdi)")
#define MOV_R8_TO_PTR_RSI CMT_ASM(".byte 0X4C, 0X89, 0X06 # movq %r8, (%rsi)")
#define MOV_R8_TO_PTR_RBP CMT_ASM(".byte 0X4C, 0X89, 0X45, 0X00 # movq %r8, (%rbp)")
#define MOV_R8_TO_PTR_RSP CMT_ASM(".byte 0X4C, 0X89, 0X04, 0X24 # movq %r8, (%rsp)")
#define MOV_R8_TO_PTR_R8 CMT_ASM(".byte 0X4D, 0X89, 0X00 # movq %r8, (%r8)")
#define MOV_R8_TO_PTR_R9 CMT_ASM(".byte 0X4D, 0X89, 0X01 # movq %r8, (%r9)")
#define MOV_R8_TO_PTR_R10 CMT_ASM(".byte 0X4D, 0X89, 0X02 # movq %r8, (%r10)")
#define MOV_R8_TO_PTR_R11 CMT_ASM(".byte 0X4D, 0X89, 0X03 # movq %r8, (%r11)")
#define MOV_R8_TO_PTR_R12 CMT_ASM(".byte 0X4D, 0X89, 0X04, 0X24 # movq %r8, (%r12)")
#define MOV_R8_TO_PTR_R13 CMT_ASM(".byte 0X4D, 0X89, 0X45, 0X00 # movq %r8, (%r13)")
#define MOV_R8_TO_PTR_R14 CMT_ASM(".byte 0X4D, 0X89, 0X06 # movq %r8, (%r14)")
#define MOV_R8_TO_PTR_R15 CMT_ASM(".byte 0X4D, 0X89, 0X07 # movq %r8, (%r15)")
#define MOV_R8_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X89, 0X00 # movq %r8, (%eax)")
#define MOV_R8_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X89, 0X03 # movq %r8, (%ebx)")
#define MOV_R8_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X89, 0X01 # movq %r8, (%ecx)")
#define MOV_R8_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X89, 0X02 # movq %r8, (%edx)")
#define MOV_R8_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X89, 0X07 # movq %r8, (%edi)")
#define MOV_R8_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X89, 0X06 # movq %r8, (%esi)")
#define MOV_R8_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X89, 0X45, 0X00 # movq %r8, (%ebp)")
#define MOV_R8_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X89, 0X04, 0X24 # movq %r8, (%esp)")

#define MOV_R9_TO_PTR_RAX CMT_ASM(".byte 0X4C, 0X89, 0X08 # movq %r9, (%rax)")
#define MOV_R9_TO_PTR_RBX CMT_ASM(".byte 0X4C, 0X89, 0X0B # movq %r9, (%rbx)")
#define MOV_R9_TO_PTR_RCX CMT_ASM(".byte 0X4C, 0X89, 0X09 # movq %r9, (%rcx)")
#define MOV_R9_TO_PTR_RDX CMT_ASM(".byte 0X4C, 0X89, 0X0A # movq %r9, (%rdx)")
#define MOV_R9_TO_PTR_RDI CMT_ASM(".byte 0X4C, 0X89, 0X0F # movq %r9, (%rdi)")
#define MOV_R9_TO_PTR_RSI CMT_ASM(".byte 0X4C, 0X89, 0X0E # movq %r9, (%rsi)")
#define MOV_R9_TO_PTR_RBP CMT_ASM(".byte 0X4C, 0X89, 0X4D, 0X00 # movq %r9, (%rbp)")
#define MOV_R9_TO_PTR_RSP CMT_ASM(".byte 0X4C, 0X89, 0X0C, 0X24 # movq %r9, (%rsp)")
#define MOV_R9_TO_PTR_R8 CMT_ASM(".byte 0X4D, 0X89, 0X08 # movq %r9, (%r8)")
#define MOV_R9_TO_PTR_R9 CMT_ASM(".byte 0X4D, 0X89, 0X09 # movq %r9, (%r9)")
#define MOV_R9_TO_PTR_R10 CMT_ASM(".byte 0X4D, 0X89, 0X0A # movq %r9, (%r10)")
#define MOV_R9_TO_PTR_R11 CMT_ASM(".byte 0X4D, 0X89, 0X0B # movq %r9, (%r11)")
#define MOV_R9_TO_PTR_R12 CMT_ASM(".byte 0X4D, 0X89, 0X0C, 0X24 # movq %r9, (%r12)")
#define MOV_R9_TO_PTR_R13 CMT_ASM(".byte 0X4D, 0X89, 0X4D, 0X00 # movq %r9, (%r13)")
#define MOV_R9_TO_PTR_R14 CMT_ASM(".byte 0X4D, 0X89, 0X0E # movq %r9, (%r14)")
#define MOV_R9_TO_PTR_R15 CMT_ASM(".byte 0X4D, 0X89, 0X0F # movq %r9, (%r15)")
#define MOV_R9_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X89, 0X08 # movq %r9, (%eax)")
#define MOV_R9_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X89, 0X0B # movq %r9, (%ebx)")
#define MOV_R9_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X89, 0X09 # movq %r9, (%ecx)")
#define MOV_R9_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X89, 0X0A # movq %r9, (%edx)")
#define MOV_R9_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X89, 0X0F # movq %r9, (%edi)")
#define MOV_R9_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X89, 0X0E # movq %r9, (%esi)")
#define MOV_R9_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X89, 0X4D, 0X00 # movq %r9, (%ebp)")
#define MOV_R9_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X89, 0X0C, 0X24 # movq %r9, (%esp)")

#define MOV_R10_TO_PTR_RAX CMT_ASM(".byte 0X4C, 0X89, 0X10 # movq %r10, (%rax)")
#define MOV_R10_TO_PTR_RBX CMT_ASM(".byte 0X4C, 0X89, 0X13 # movq %r10, (%rbx)")
#define MOV_R10_TO_PTR_RCX CMT_ASM(".byte 0X4C, 0X89, 0X11 # movq %r10, (%rcx)")
#define MOV_R10_TO_PTR_RDX CMT_ASM(".byte 0X4C, 0X89, 0X12 # movq %r10, (%rdx)")
#define MOV_R10_TO_PTR_RDI CMT_ASM(".byte 0X4C, 0X89, 0X17 # movq %r10, (%rdi)")
#define MOV_R10_TO_PTR_RSI CMT_ASM(".byte 0X4C, 0X89, 0X16 # movq %r10, (%rsi)")
#define MOV_R10_TO_PTR_RBP CMT_ASM(".byte 0X4C, 0X89, 0X55, 0X00 # movq %r10, (%rbp)")
#define MOV_R10_TO_PTR_RSP CMT_ASM(".byte 0X4C, 0X89, 0X14, 0X24 # movq %r10, (%rsp)")
#define MOV_R10_TO_PTR_R8 CMT_ASM(".byte 0X4D, 0X89, 0X10 # movq %r10, (%r8)")
#define MOV_R10_TO_PTR_R9 CMT_ASM(".byte 0X4D, 0X89, 0X11 # movq %r10, (%r9)")
#define MOV_R10_TO_PTR_R10 CMT_ASM(".byte 0X4D, 0X89, 0X12 # movq %r10, (%r10)")
#define MOV_R10_TO_PTR_R11 CMT_ASM(".byte 0X4D, 0X89, 0X13 # movq %r10, (%r11)")
#define MOV_R10_TO_PTR_R12 CMT_ASM(".byte 0X4D, 0X89, 0X14, 0X24 # movq %r10, (%r12)")
#define MOV_R10_TO_PTR_R13 CMT_ASM(".byte 0X4D, 0X89, 0X55, 0X00 # movq %r10, (%r13)")
#define MOV_R10_TO_PTR_R14 CMT_ASM(".byte 0X4D, 0X89, 0X16 # movq %r10, (%r14)")
#define MOV_R10_TO_PTR_R15 CMT_ASM(".byte 0X4D, 0X89, 0X17 # movq %r10, (%r15)")
#define MOV_R10_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X89, 0X10 # movq %r10, (%eax)")
#define MOV_R10_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X89, 0X13 # movq %r10, (%ebx)")
#define MOV_R10_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X89, 0X11 # movq %r10, (%ecx)")
#define MOV_R10_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X89, 0X12 # movq %r10, (%edx)")
#define MOV_R10_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X89, 0X17 # movq %r10, (%edi)")
#define MOV_R10_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X89, 0X16 # movq %r10, (%esi)")
#define MOV_R10_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X89, 0X55, 0X00 # movq %r10, (%ebp)")
#define MOV_R10_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X89, 0X14, 0X24 # movq %r10, (%esp)")

#define MOV_R11_TO_PTR_RAX CMT_ASM(".byte 0X4C, 0X89, 0X18 # movq %r11, (%rax)")
#define MOV_R11_TO_PTR_RBX CMT_ASM(".byte 0X4C, 0X89, 0X1B # movq %r11, (%rbx)")
#define MOV_R11_TO_PTR_RCX CMT_ASM(".byte 0X4C, 0X89, 0X19 # movq %r11, (%rcx)")
#define MOV_R11_TO_PTR_RDX CMT_ASM(".byte 0X4C, 0X89, 0X1A # movq %r11, (%rdx)")
#define MOV_R11_TO_PTR_RDI CMT_ASM(".byte 0X4C, 0X89, 0X1F # movq %r11, (%rdi)")
#define MOV_R11_TO_PTR_RSI CMT_ASM(".byte 0X4C, 0X89, 0X1E # movq %r11, (%rsi)")
#define MOV_R11_TO_PTR_RBP CMT_ASM(".byte 0X4C, 0X89, 0X5D, 0X00 # movq %r11, (%rbp)")
#define MOV_R11_TO_PTR_RSP CMT_ASM(".byte 0X4C, 0X89, 0X1C, 0X24 # movq %r11, (%rsp)")
#define MOV_R11_TO_PTR_R8 CMT_ASM(".byte 0X4D, 0X89, 0X18 # movq %r11, (%r8)")
#define MOV_R11_TO_PTR_R9 CMT_ASM(".byte 0X4D, 0X89, 0X19 # movq %r11, (%r9)")
#define MOV_R11_TO_PTR_R10 CMT_ASM(".byte 0X4D, 0X89, 0X1A # movq %r11, (%r10)")
#define MOV_R11_TO_PTR_R11 CMT_ASM(".byte 0X4D, 0X89, 0X1B # movq %r11, (%r11)")
#define MOV_R11_TO_PTR_R12 CMT_ASM(".byte 0X4D, 0X89, 0X1C, 0X24 # movq %r11, (%r12)")
#define MOV_R11_TO_PTR_R13 CMT_ASM(".byte 0X4D, 0X89, 0X5D, 0X00 # movq %r11, (%r13)")
#define MOV_R11_TO_PTR_R14 CMT_ASM(".byte 0X4D, 0X89, 0X1E # movq %r11, (%r14)")
#define MOV_R11_TO_PTR_R15 CMT_ASM(".byte 0X4D, 0X89, 0X1F # movq %r11, (%r15)")
#define MOV_R11_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X89, 0X18 # movq %r11, (%eax)")
#define MOV_R11_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X89, 0X1B # movq %r11, (%ebx)")
#define MOV_R11_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X89, 0X19 # movq %r11, (%ecx)")
#define MOV_R11_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X89, 0X1A # movq %r11, (%edx)")
#define MOV_R11_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X89, 0X1F # movq %r11, (%edi)")
#define MOV_R11_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X89, 0X1E # movq %r11, (%esi)")
#define MOV_R11_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X89, 0X5D, 0X00 # movq %r11, (%ebp)")
#define MOV_R11_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X89, 0X1C, 0X24 # movq %r11, (%esp)")

#define MOV_R12_TO_PTR_RAX CMT_ASM(".byte 0X4C, 0X89, 0X20 # movq %r12, (%rax)")
#define MOV_R12_TO_PTR_RBX CMT_ASM(".byte 0X4C, 0X89, 0X23 # movq %r12, (%rbx)")
#define MOV_R12_TO_PTR_RCX CMT_ASM(".byte 0X4C, 0X89, 0X21 # movq %r12, (%rcx)")
#define MOV_R12_TO_PTR_RDX CMT_ASM(".byte 0X4C, 0X89, 0X22 # movq %r12, (%rdx)")
#define MOV_R12_TO_PTR_RDI CMT_ASM(".byte 0X4C, 0X89, 0X27 # movq %r12, (%rdi)")
#define MOV_R12_TO_PTR_RSI CMT_ASM(".byte 0X4C, 0X89, 0X26 # movq %r12, (%rsi)")
#define MOV_R12_TO_PTR_RBP CMT_ASM(".byte 0X4C, 0X89, 0X65, 0X00 # movq %r12, (%rbp)")
#define MOV_R12_TO_PTR_RSP CMT_ASM(".byte 0X4C, 0X89, 0X24, 0X24 # movq %r12, (%rsp)")
#define MOV_R12_TO_PTR_R8 CMT_ASM(".byte 0X4D, 0X89, 0X20 # movq %r12, (%r8)")
#define MOV_R12_TO_PTR_R9 CMT_ASM(".byte 0X4D, 0X89, 0X21 # movq %r12, (%r9)")
#define MOV_R12_TO_PTR_R10 CMT_ASM(".byte 0X4D, 0X89, 0X22 # movq %r12, (%r10)")
#define MOV_R12_TO_PTR_R11 CMT_ASM(".byte 0X4D, 0X89, 0X23 # movq %r12, (%r11)")
#define MOV_R12_TO_PTR_R12 CMT_ASM(".byte 0X4D, 0X89, 0X24, 0X24 # movq %r12, (%r12)")
#define MOV_R12_TO_PTR_R13 CMT_ASM(".byte 0X4D, 0X89, 0X65, 0X00 # movq %r12, (%r13)")
#define MOV_R12_TO_PTR_R14 CMT_ASM(".byte 0X4D, 0X89, 0X26 # movq %r12, (%r14)")
#define MOV_R12_TO_PTR_R15 CMT_ASM(".byte 0X4D, 0X89, 0X27 # movq %r12, (%r15)")
#define MOV_R12_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X89, 0X20 # movq %r12, (%eax)")
#define MOV_R12_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X89, 0X23 # movq %r12, (%ebx)")
#define MOV_R12_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X89, 0X21 # movq %r12, (%ecx)")
#define MOV_R12_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X89, 0X22 # movq %r12, (%edx)")
#define MOV_R12_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X89, 0X27 # movq %r12, (%edi)")
#define MOV_R12_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X89, 0X26 # movq %r12, (%esi)")
#define MOV_R12_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X89, 0X65, 0X00 # movq %r12, (%ebp)")
#define MOV_R12_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X89, 0X24, 0X24 # movq %r12, (%esp)")

#define MOV_R13_TO_PTR_RAX CMT_ASM(".byte 0X4C, 0X89, 0X28 # movq %r13, (%rax)")
#define MOV_R13_TO_PTR_RBX CMT_ASM(".byte 0X4C, 0X89, 0X2B # movq %r13, (%rbx)")
#define MOV_R13_TO_PTR_RCX CMT_ASM(".byte 0X4C, 0X89, 0X29 # movq %r13, (%rcx)")
#define MOV_R13_TO_PTR_RDX CMT_ASM(".byte 0X4C, 0X89, 0X2A # movq %r13, (%rdx)")
#define MOV_R13_TO_PTR_RDI CMT_ASM(".byte 0X4C, 0X89, 0X2F # movq %r13, (%rdi)")
#define MOV_R13_TO_PTR_RSI CMT_ASM(".byte 0X4C, 0X89, 0X2E # movq %r13, (%rsi)")
#define MOV_R13_TO_PTR_RBP CMT_ASM(".byte 0X4C, 0X89, 0X6D, 0X00 # movq %r13, (%rbp)")
#define MOV_R13_TO_PTR_RSP CMT_ASM(".byte 0X4C, 0X89, 0X2C, 0X24 # movq %r13, (%rsp)")
#define MOV_R13_TO_PTR_R8 CMT_ASM(".byte 0X4D, 0X89, 0X28 # movq %r13, (%r8)")
#define MOV_R13_TO_PTR_R9 CMT_ASM(".byte 0X4D, 0X89, 0X29 # movq %r13, (%r9)")
#define MOV_R13_TO_PTR_R10 CMT_ASM(".byte 0X4D, 0X89, 0X2A # movq %r13, (%r10)")
#define MOV_R13_TO_PTR_R11 CMT_ASM(".byte 0X4D, 0X89, 0X2B # movq %r13, (%r11)")
#define MOV_R13_TO_PTR_R12 CMT_ASM(".byte 0X4D, 0X89, 0X2C, 0X24 # movq %r13, (%r12)")
#define MOV_R13_TO_PTR_R13 CMT_ASM(".byte 0X4D, 0X89, 0X6D, 0X00 # movq %r13, (%r13)")
#define MOV_R13_TO_PTR_R14 CMT_ASM(".byte 0X4D, 0X89, 0X2E # movq %r13, (%r14)")
#define MOV_R13_TO_PTR_R15 CMT_ASM(".byte 0X4D, 0X89, 0X2F # movq %r13, (%r15)")
#define MOV_R13_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X89, 0X28 # movq %r13, (%eax)")
#define MOV_R13_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X89, 0X2B # movq %r13, (%ebx)")
#define MOV_R13_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X89, 0X29 # movq %r13, (%ecx)")
#define MOV_R13_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X89, 0X2A # movq %r13, (%edx)")
#define MOV_R13_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X89, 0X2F # movq %r13, (%edi)")
#define MOV_R13_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X89, 0X2E # movq %r13, (%esi)")
#define MOV_R13_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X89, 0X6D, 0X00 # movq %r13, (%ebp)")
#define MOV_R13_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X89, 0X2C, 0X24 # movq %r13, (%esp)")

#define MOV_R14_TO_PTR_RAX CMT_ASM(".byte 0X4C, 0X89, 0X30 # movq %r14, (%rax)")
#define MOV_R14_TO_PTR_RBX CMT_ASM(".byte 0X4C, 0X89, 0X33 # movq %r14, (%rbx)")
#define MOV_R14_TO_PTR_RCX CMT_ASM(".byte 0X4C, 0X89, 0X31 # movq %r14, (%rcx)")
#define MOV_R14_TO_PTR_RDX CMT_ASM(".byte 0X4C, 0X89, 0X32 # movq %r14, (%rdx)")
#define MOV_R14_TO_PTR_RDI CMT_ASM(".byte 0X4C, 0X89, 0X37 # movq %r14, (%rdi)")
#define MOV_R14_TO_PTR_RSI CMT_ASM(".byte 0X4C, 0X89, 0X36 # movq %r14, (%rsi)")
#define MOV_R14_TO_PTR_RBP CMT_ASM(".byte 0X4C, 0X89, 0X75, 0X00 # movq %r14, (%rbp)")
#define MOV_R14_TO_PTR_RSP CMT_ASM(".byte 0X4C, 0X89, 0X34, 0X24 # movq %r14, (%rsp)")
#define MOV_R14_TO_PTR_R8 CMT_ASM(".byte 0X4D, 0X89, 0X30 # movq %r14, (%r8)")
#define MOV_R14_TO_PTR_R9 CMT_ASM(".byte 0X4D, 0X89, 0X31 # movq %r14, (%r9)")
#define MOV_R14_TO_PTR_R10 CMT_ASM(".byte 0X4D, 0X89, 0X32 # movq %r14, (%r10)")
#define MOV_R14_TO_PTR_R11 CMT_ASM(".byte 0X4D, 0X89, 0X33 # movq %r14, (%r11)")
#define MOV_R14_TO_PTR_R12 CMT_ASM(".byte 0X4D, 0X89, 0X34, 0X24 # movq %r14, (%r12)")
#define MOV_R14_TO_PTR_R13 CMT_ASM(".byte 0X4D, 0X89, 0X75, 0X00 # movq %r14, (%r13)")
#define MOV_R14_TO_PTR_R14 CMT_ASM(".byte 0X4D, 0X89, 0X36 # movq %r14, (%r14)")
#define MOV_R14_TO_PTR_R15 CMT_ASM(".byte 0X4D, 0X89, 0X37 # movq %r14, (%r15)")
#define MOV_R14_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X89, 0X30 # movq %r14, (%eax)")
#define MOV_R14_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X89, 0X33 # movq %r14, (%ebx)")
#define MOV_R14_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X89, 0X31 # movq %r14, (%ecx)")
#define MOV_R14_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X89, 0X32 # movq %r14, (%edx)")
#define MOV_R14_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X89, 0X37 # movq %r14, (%edi)")
#define MOV_R14_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X89, 0X36 # movq %r14, (%esi)")
#define MOV_R14_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X89, 0X75, 0X00 # movq %r14, (%ebp)")
#define MOV_R14_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X89, 0X34, 0X24 # movq %r14, (%esp)")

#define MOV_R15_TO_PTR_RAX CMT_ASM(".byte 0X4C, 0X89, 0X38 # movq %r15, (%rax)")
#define MOV_R15_TO_PTR_RBX CMT_ASM(".byte 0X4C, 0X89, 0X3B # movq %r15, (%rbx)")
#define MOV_R15_TO_PTR_RCX CMT_ASM(".byte 0X4C, 0X89, 0X39 # movq %r15, (%rcx)")
#define MOV_R15_TO_PTR_RDX CMT_ASM(".byte 0X4C, 0X89, 0X3A # movq %r15, (%rdx)")
#define MOV_R15_TO_PTR_RDI CMT_ASM(".byte 0X4C, 0X89, 0X3F # movq %r15, (%rdi)")
#define MOV_R15_TO_PTR_RSI CMT_ASM(".byte 0X4C, 0X89, 0X3E # movq %r15, (%rsi)")
#define MOV_R15_TO_PTR_RBP CMT_ASM(".byte 0X4C, 0X89, 0X7D, 0X00 # movq %r15, (%rbp)")
#define MOV_R15_TO_PTR_RSP CMT_ASM(".byte 0X4C, 0X89, 0X3C, 0X24 # movq %r15, (%rsp)")
#define MOV_R15_TO_PTR_R8 CMT_ASM(".byte 0X4D, 0X89, 0X38 # movq %r15, (%r8)")
#define MOV_R15_TO_PTR_R9 CMT_ASM(".byte 0X4D, 0X89, 0X39 # movq %r15, (%r9)")
#define MOV_R15_TO_PTR_R10 CMT_ASM(".byte 0X4D, 0X89, 0X3A # movq %r15, (%r10)")
#define MOV_R15_TO_PTR_R11 CMT_ASM(".byte 0X4D, 0X89, 0X3B # movq %r15, (%r11)")
#define MOV_R15_TO_PTR_R12 CMT_ASM(".byte 0X4D, 0X89, 0X3C, 0X24 # movq %r15, (%r12)")
#define MOV_R15_TO_PTR_R13 CMT_ASM(".byte 0X4D, 0X89, 0X7D, 0X00 # movq %r15, (%r13)")
#define MOV_R15_TO_PTR_R14 CMT_ASM(".byte 0X4D, 0X89, 0X3E # movq %r15, (%r14)")
#define MOV_R15_TO_PTR_R15 CMT_ASM(".byte 0X4D, 0X89, 0X3F # movq %r15, (%r15)")
#define MOV_R15_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X89, 0X38 # movq %r15, (%eax)")
#define MOV_R15_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X89, 0X3B # movq %r15, (%ebx)")
#define MOV_R15_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X89, 0X39 # movq %r15, (%ecx)")
#define MOV_R15_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X89, 0X3A # movq %r15, (%edx)")
#define MOV_R15_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X89, 0X3F # movq %r15, (%edi)")
#define MOV_R15_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X89, 0X3E # movq %r15, (%esi)")
#define MOV_R15_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X89, 0X7D, 0X00 # movq %r15, (%ebp)")
#define MOV_R15_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X89, 0X3C, 0X24 # movq %r15, (%esp)")

#define MOV_RAX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X8B, 0X80 # movq " _(VALUE) "(%rax), %rax")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RAX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X8B, 0X83 # movq " _(VALUE) "(%rbx), %rax")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RAX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X8B, 0X81 # movq " _(VALUE) "(%rcx), %rax")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RAX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X8B, 0X82 # movq " _(VALUE) "(%rdx), %rax")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RAX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X8B, 0X87 # movq " _(VALUE) "(%rdi), %rax")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RAX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X8B, 0X86 # movq " _(VALUE) "(%rsi), %rax")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RAX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X8B, 0X85 # movq " _(VALUE) "(%rbp), %rax")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RAX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X8B, 0X84, 0X24 # movq " _(VALUE) "(%rsp), %rax")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RAX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X8B, 0X80 # movq " _(VALUE) "(%r8), %rax")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RAX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X8B, 0X81 # movq " _(VALUE) "(%r9), %rax")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RAX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X8B, 0X82 # movq " _(VALUE) "(%r10), %rax")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RAX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X8B, 0X83 # movq " _(VALUE) "(%r11), %rax")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RAX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X8B, 0X84, 0X24 # movq " _(VALUE) "(%r12), %rax")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RAX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X8B, 0X85 # movq " _(VALUE) "(%r13), %rax")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RAX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X8B, 0X86 # movq " _(VALUE) "(%r14), %rax")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RAX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X8B, 0X87 # movq " _(VALUE) "(%r15), %rax")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RAX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X8B, 0X80 # movq " _(VALUE) "(%eax), %rax")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RAX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X8B, 0X83 # movq " _(VALUE) "(%ebx), %rax")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RAX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X8B, 0X81 # movq " _(VALUE) "(%ecx), %rax")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RAX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X8B, 0X82 # movq " _(VALUE) "(%edx), %rax")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RAX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X8B, 0X87 # movq " _(VALUE) "(%edi), %rax")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RAX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X8B, 0X86 # movq " _(VALUE) "(%esi), %rax")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RAX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X8B, 0X85 # movq " _(VALUE) "(%ebp), %rax")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RAX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X8B, 0X84, 0X24 # movq " _(VALUE) "(%esp), %rax")\
	CMT_ASM(".long " _(VALUE))

#define MOV_RBX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X8B, 0X98 # movq " _(VALUE) "(%rax), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RBX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X8B, 0X9B # movq " _(VALUE) "(%rbx), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RBX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X8B, 0X99 # movq " _(VALUE) "(%rcx), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RBX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X8B, 0X9A # movq " _(VALUE) "(%rdx), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RBX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X8B, 0X9F # movq " _(VALUE) "(%rdi), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RBX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X8B, 0X9E # movq " _(VALUE) "(%rsi), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RBX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X8B, 0X9D # movq " _(VALUE) "(%rbp), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RBX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X8B, 0X9C, 0X24 # movq " _(VALUE) "(%rsp), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RBX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X8B, 0X98 # movq " _(VALUE) "(%r8), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RBX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X8B, 0X99 # movq " _(VALUE) "(%r9), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RBX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X8B, 0X9A # movq " _(VALUE) "(%r10), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RBX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X8B, 0X9B # movq " _(VALUE) "(%r11), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RBX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X8B, 0X9C, 0X24 # movq " _(VALUE) "(%r12), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RBX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X8B, 0X9D # movq " _(VALUE) "(%r13), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RBX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X8B, 0X9E # movq " _(VALUE) "(%r14), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RBX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X8B, 0X9F # movq " _(VALUE) "(%r15), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RBX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X8B, 0X98 # movq " _(VALUE) "(%eax), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RBX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X8B, 0X9B # movq " _(VALUE) "(%ebx), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RBX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X8B, 0X99 # movq " _(VALUE) "(%ecx), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RBX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X8B, 0X9A # movq " _(VALUE) "(%edx), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RBX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X8B, 0X9F # movq " _(VALUE) "(%edi), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RBX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X8B, 0X9E # movq " _(VALUE) "(%esi), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RBX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X8B, 0X9D # movq " _(VALUE) "(%ebp), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RBX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X8B, 0X9C, 0X24 # movq " _(VALUE) "(%esp), %rbx")\
	CMT_ASM(".long " _(VALUE))

#define MOV_RCX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X8B, 0X88 # movq " _(VALUE) "(%rax), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RCX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X8B, 0X8B # movq " _(VALUE) "(%rbx), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RCX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X8B, 0X89 # movq " _(VALUE) "(%rcx), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RCX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X8B, 0X8A # movq " _(VALUE) "(%rdx), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RCX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X8B, 0X8F # movq " _(VALUE) "(%rdi), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RCX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X8B, 0X8E # movq " _(VALUE) "(%rsi), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RCX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X8B, 0X8D # movq " _(VALUE) "(%rbp), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RCX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X8B, 0X8C, 0X24 # movq " _(VALUE) "(%rsp), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RCX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X8B, 0X88 # movq " _(VALUE) "(%r8), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RCX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X8B, 0X89 # movq " _(VALUE) "(%r9), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RCX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X8B, 0X8A # movq " _(VALUE) "(%r10), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RCX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X8B, 0X8B # movq " _(VALUE) "(%r11), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RCX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X8B, 0X8C, 0X24 # movq " _(VALUE) "(%r12), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RCX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X8B, 0X8D # movq " _(VALUE) "(%r13), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RCX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X8B, 0X8E # movq " _(VALUE) "(%r14), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RCX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X8B, 0X8F # movq " _(VALUE) "(%r15), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RCX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X8B, 0X88 # movq " _(VALUE) "(%eax), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RCX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X8B, 0X8B # movq " _(VALUE) "(%ebx), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RCX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X8B, 0X89 # movq " _(VALUE) "(%ecx), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RCX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X8B, 0X8A # movq " _(VALUE) "(%edx), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RCX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X8B, 0X8F # movq " _(VALUE) "(%edi), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RCX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X8B, 0X8E # movq " _(VALUE) "(%esi), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RCX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X8B, 0X8D # movq " _(VALUE) "(%ebp), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RCX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X8B, 0X8C, 0X24 # movq " _(VALUE) "(%esp), %rcx")\
	CMT_ASM(".long " _(VALUE))

#define MOV_RDX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X8B, 0X90 # movq " _(VALUE) "(%rax), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RDX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X8B, 0X93 # movq " _(VALUE) "(%rbx), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RDX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X8B, 0X91 # movq " _(VALUE) "(%rcx), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RDX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X8B, 0X92 # movq " _(VALUE) "(%rdx), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RDX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X8B, 0X97 # movq " _(VALUE) "(%rdi), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RDX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X8B, 0X96 # movq " _(VALUE) "(%rsi), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RDX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X8B, 0X95 # movq " _(VALUE) "(%rbp), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RDX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X8B, 0X94, 0X24 # movq " _(VALUE) "(%rsp), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RDX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X8B, 0X90 # movq " _(VALUE) "(%r8), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RDX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X8B, 0X91 # movq " _(VALUE) "(%r9), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RDX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X8B, 0X92 # movq " _(VALUE) "(%r10), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RDX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X8B, 0X93 # movq " _(VALUE) "(%r11), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RDX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X8B, 0X94, 0X24 # movq " _(VALUE) "(%r12), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RDX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X8B, 0X95 # movq " _(VALUE) "(%r13), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RDX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X8B, 0X96 # movq " _(VALUE) "(%r14), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RDX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X8B, 0X97 # movq " _(VALUE) "(%r15), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RDX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X8B, 0X90 # movq " _(VALUE) "(%eax), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RDX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X8B, 0X93 # movq " _(VALUE) "(%ebx), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RDX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X8B, 0X91 # movq " _(VALUE) "(%ecx), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RDX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X8B, 0X92 # movq " _(VALUE) "(%edx), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RDX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X8B, 0X97 # movq " _(VALUE) "(%edi), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RDX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X8B, 0X96 # movq " _(VALUE) "(%esi), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RDX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X8B, 0X95 # movq " _(VALUE) "(%ebp), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RDX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X8B, 0X94, 0X24 # movq " _(VALUE) "(%esp), %rdx")\
	CMT_ASM(".long " _(VALUE))

#define MOV_RDI_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X8B, 0XB8 # movq " _(VALUE) "(%rax), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RDI_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X8B, 0XBB # movq " _(VALUE) "(%rbx), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RDI_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X8B, 0XB9 # movq " _(VALUE) "(%rcx), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RDI_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X8B, 0XBA # movq " _(VALUE) "(%rdx), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RDI_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X8B, 0XBF # movq " _(VALUE) "(%rdi), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RDI_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X8B, 0XBE # movq " _(VALUE) "(%rsi), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RDI_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X8B, 0XBD # movq " _(VALUE) "(%rbp), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RDI_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X8B, 0XBC, 0X24 # movq " _(VALUE) "(%rsp), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RDI_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X8B, 0XB8 # movq " _(VALUE) "(%r8), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RDI_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X8B, 0XB9 # movq " _(VALUE) "(%r9), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RDI_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X8B, 0XBA # movq " _(VALUE) "(%r10), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RDI_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X8B, 0XBB # movq " _(VALUE) "(%r11), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RDI_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X8B, 0XBC, 0X24 # movq " _(VALUE) "(%r12), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RDI_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X8B, 0XBD # movq " _(VALUE) "(%r13), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RDI_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X8B, 0XBE # movq " _(VALUE) "(%r14), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RDI_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X8B, 0XBF # movq " _(VALUE) "(%r15), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RDI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X8B, 0XB8 # movq " _(VALUE) "(%eax), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RDI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X8B, 0XBB # movq " _(VALUE) "(%ebx), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RDI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X8B, 0XB9 # movq " _(VALUE) "(%ecx), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RDI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X8B, 0XBA # movq " _(VALUE) "(%edx), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RDI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X8B, 0XBF # movq " _(VALUE) "(%edi), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RDI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X8B, 0XBE # movq " _(VALUE) "(%esi), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RDI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X8B, 0XBD # movq " _(VALUE) "(%ebp), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RDI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X8B, 0XBC, 0X24 # movq " _(VALUE) "(%esp), %rdi")\
	CMT_ASM(".long " _(VALUE))

#define MOV_RSI_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X8B, 0XB0 # movq " _(VALUE) "(%rax), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RSI_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X8B, 0XB3 # movq " _(VALUE) "(%rbx), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RSI_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X8B, 0XB1 # movq " _(VALUE) "(%rcx), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RSI_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X8B, 0XB2 # movq " _(VALUE) "(%rdx), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RSI_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X8B, 0XB7 # movq " _(VALUE) "(%rdi), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RSI_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X8B, 0XB6 # movq " _(VALUE) "(%rsi), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RSI_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X8B, 0XB5 # movq " _(VALUE) "(%rbp), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RSI_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X8B, 0XB4, 0X24 # movq " _(VALUE) "(%rsp), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RSI_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X8B, 0XB0 # movq " _(VALUE) "(%r8), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RSI_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X8B, 0XB1 # movq " _(VALUE) "(%r9), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RSI_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X8B, 0XB2 # movq " _(VALUE) "(%r10), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RSI_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X8B, 0XB3 # movq " _(VALUE) "(%r11), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RSI_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X8B, 0XB4, 0X24 # movq " _(VALUE) "(%r12), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RSI_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X8B, 0XB5 # movq " _(VALUE) "(%r13), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RSI_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X8B, 0XB6 # movq " _(VALUE) "(%r14), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RSI_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X8B, 0XB7 # movq " _(VALUE) "(%r15), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RSI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X8B, 0XB0 # movq " _(VALUE) "(%eax), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RSI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X8B, 0XB3 # movq " _(VALUE) "(%ebx), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RSI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X8B, 0XB1 # movq " _(VALUE) "(%ecx), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RSI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X8B, 0XB2 # movq " _(VALUE) "(%edx), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RSI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X8B, 0XB7 # movq " _(VALUE) "(%edi), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RSI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X8B, 0XB6 # movq " _(VALUE) "(%esi), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RSI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X8B, 0XB5 # movq " _(VALUE) "(%ebp), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RSI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X8B, 0XB4, 0X24 # movq " _(VALUE) "(%esp), %rsi")\
	CMT_ASM(".long " _(VALUE))

#define MOV_RBP_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X8B, 0XA8 # movq " _(VALUE) "(%rax), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RBP_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X8B, 0XAB # movq " _(VALUE) "(%rbx), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RBP_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X8B, 0XA9 # movq " _(VALUE) "(%rcx), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RBP_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X8B, 0XAA # movq " _(VALUE) "(%rdx), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RBP_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X8B, 0XAF # movq " _(VALUE) "(%rdi), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RBP_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X8B, 0XAE # movq " _(VALUE) "(%rsi), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RBP_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X8B, 0XAD # movq " _(VALUE) "(%rbp), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RBP_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X8B, 0XAC, 0X24 # movq " _(VALUE) "(%rsp), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RBP_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X8B, 0XA8 # movq " _(VALUE) "(%r8), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RBP_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X8B, 0XA9 # movq " _(VALUE) "(%r9), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RBP_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X8B, 0XAA # movq " _(VALUE) "(%r10), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RBP_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X8B, 0XAB # movq " _(VALUE) "(%r11), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RBP_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X8B, 0XAC, 0X24 # movq " _(VALUE) "(%r12), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RBP_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X8B, 0XAD # movq " _(VALUE) "(%r13), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RBP_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X8B, 0XAE # movq " _(VALUE) "(%r14), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RBP_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X8B, 0XAF # movq " _(VALUE) "(%r15), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RBP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X8B, 0XA8 # movq " _(VALUE) "(%eax), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RBP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X8B, 0XAB # movq " _(VALUE) "(%ebx), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RBP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X8B, 0XA9 # movq " _(VALUE) "(%ecx), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RBP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X8B, 0XAA # movq " _(VALUE) "(%edx), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RBP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X8B, 0XAF # movq " _(VALUE) "(%edi), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RBP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X8B, 0XAE # movq " _(VALUE) "(%esi), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RBP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X8B, 0XAD # movq " _(VALUE) "(%ebp), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RBP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X8B, 0XAC, 0X24 # movq " _(VALUE) "(%esp), %rbp")\
	CMT_ASM(".long " _(VALUE))

#define MOV_RSP_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X8B, 0XA0 # movq " _(VALUE) "(%rax), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RSP_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X8B, 0XA3 # movq " _(VALUE) "(%rbx), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RSP_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X8B, 0XA1 # movq " _(VALUE) "(%rcx), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RSP_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X8B, 0XA2 # movq " _(VALUE) "(%rdx), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RSP_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X8B, 0XA7 # movq " _(VALUE) "(%rdi), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RSP_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X8B, 0XA6 # movq " _(VALUE) "(%rsi), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RSP_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X8B, 0XA5 # movq " _(VALUE) "(%rbp), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RSP_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X8B, 0XA4, 0X24 # movq " _(VALUE) "(%rsp), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RSP_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X8B, 0XA0 # movq " _(VALUE) "(%r8), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RSP_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X8B, 0XA1 # movq " _(VALUE) "(%r9), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RSP_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X8B, 0XA2 # movq " _(VALUE) "(%r10), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RSP_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X8B, 0XA3 # movq " _(VALUE) "(%r11), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RSP_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X8B, 0XA4, 0X24 # movq " _(VALUE) "(%r12), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RSP_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X8B, 0XA5 # movq " _(VALUE) "(%r13), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RSP_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X8B, 0XA6 # movq " _(VALUE) "(%r14), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RSP_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X8B, 0XA7 # movq " _(VALUE) "(%r15), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RSP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X8B, 0XA0 # movq " _(VALUE) "(%eax), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RSP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X8B, 0XA3 # movq " _(VALUE) "(%ebx), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RSP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X8B, 0XA1 # movq " _(VALUE) "(%ecx), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RSP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X8B, 0XA2 # movq " _(VALUE) "(%edx), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RSP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X8B, 0XA7 # movq " _(VALUE) "(%edi), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RSP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X8B, 0XA6 # movq " _(VALUE) "(%esi), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RSP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X8B, 0XA5 # movq " _(VALUE) "(%ebp), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RSP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X8B, 0XA4, 0X24 # movq " _(VALUE) "(%esp), %rsp")\
	CMT_ASM(".long " _(VALUE))

#define MOV_R8_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X8B, 0X80 # movq " _(VALUE) "(%rax), %r8")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X8B, 0X83 # movq " _(VALUE) "(%rbx), %r8")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X8B, 0X81 # movq " _(VALUE) "(%rcx), %r8")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X8B, 0X82 # movq " _(VALUE) "(%rdx), %r8")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X8B, 0X87 # movq " _(VALUE) "(%rdi), %r8")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X8B, 0X86 # movq " _(VALUE) "(%rsi), %r8")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X8B, 0X85 # movq " _(VALUE) "(%rbp), %r8")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X8B, 0X84, 0X24 # movq " _(VALUE) "(%rsp), %r8")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X8B, 0X80 # movq " _(VALUE) "(%r8), %r8")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X8B, 0X81 # movq " _(VALUE) "(%r9), %r8")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X8B, 0X82 # movq " _(VALUE) "(%r10), %r8")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X8B, 0X83 # movq " _(VALUE) "(%r11), %r8")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X8B, 0X84, 0X24 # movq " _(VALUE) "(%r12), %r8")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X8B, 0X85 # movq " _(VALUE) "(%r13), %r8")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X8B, 0X86 # movq " _(VALUE) "(%r14), %r8")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X8B, 0X87 # movq " _(VALUE) "(%r15), %r8")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0X80 # movq " _(VALUE) "(%eax), %r8")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0X83 # movq " _(VALUE) "(%ebx), %r8")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0X81 # movq " _(VALUE) "(%ecx), %r8")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0X82 # movq " _(VALUE) "(%edx), %r8")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0X87 # movq " _(VALUE) "(%edi), %r8")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0X86 # movq " _(VALUE) "(%esi), %r8")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0X85 # movq " _(VALUE) "(%ebp), %r8")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0X84, 0X24 # movq " _(VALUE) "(%esp), %r8")\
	CMT_ASM(".long " _(VALUE))

#define MOV_R9_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X8B, 0X88 # movq " _(VALUE) "(%rax), %r9")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X8B, 0X8B # movq " _(VALUE) "(%rbx), %r9")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X8B, 0X89 # movq " _(VALUE) "(%rcx), %r9")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X8B, 0X8A # movq " _(VALUE) "(%rdx), %r9")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X8B, 0X8F # movq " _(VALUE) "(%rdi), %r9")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X8B, 0X8E # movq " _(VALUE) "(%rsi), %r9")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X8B, 0X8D # movq " _(VALUE) "(%rbp), %r9")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X8B, 0X8C, 0X24 # movq " _(VALUE) "(%rsp), %r9")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X8B, 0X88 # movq " _(VALUE) "(%r8), %r9")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X8B, 0X89 # movq " _(VALUE) "(%r9), %r9")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X8B, 0X8A # movq " _(VALUE) "(%r10), %r9")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X8B, 0X8B # movq " _(VALUE) "(%r11), %r9")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X8B, 0X8C, 0X24 # movq " _(VALUE) "(%r12), %r9")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X8B, 0X8D # movq " _(VALUE) "(%r13), %r9")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X8B, 0X8E # movq " _(VALUE) "(%r14), %r9")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X8B, 0X8F # movq " _(VALUE) "(%r15), %r9")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0X88 # movq " _(VALUE) "(%eax), %r9")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0X8B # movq " _(VALUE) "(%ebx), %r9")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0X89 # movq " _(VALUE) "(%ecx), %r9")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0X8A # movq " _(VALUE) "(%edx), %r9")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0X8F # movq " _(VALUE) "(%edi), %r9")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0X8E # movq " _(VALUE) "(%esi), %r9")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0X8D # movq " _(VALUE) "(%ebp), %r9")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0X8C, 0X24 # movq " _(VALUE) "(%esp), %r9")\
	CMT_ASM(".long " _(VALUE))

#define MOV_R10_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X8B, 0X90 # movq " _(VALUE) "(%rax), %r10")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X8B, 0X93 # movq " _(VALUE) "(%rbx), %r10")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X8B, 0X91 # movq " _(VALUE) "(%rcx), %r10")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X8B, 0X92 # movq " _(VALUE) "(%rdx), %r10")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X8B, 0X97 # movq " _(VALUE) "(%rdi), %r10")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X8B, 0X96 # movq " _(VALUE) "(%rsi), %r10")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X8B, 0X95 # movq " _(VALUE) "(%rbp), %r10")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X8B, 0X94, 0X24 # movq " _(VALUE) "(%rsp), %r10")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X8B, 0X90 # movq " _(VALUE) "(%r8), %r10")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X8B, 0X91 # movq " _(VALUE) "(%r9), %r10")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X8B, 0X92 # movq " _(VALUE) "(%r10), %r10")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X8B, 0X93 # movq " _(VALUE) "(%r11), %r10")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X8B, 0X94, 0X24 # movq " _(VALUE) "(%r12), %r10")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X8B, 0X95 # movq " _(VALUE) "(%r13), %r10")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X8B, 0X96 # movq " _(VALUE) "(%r14), %r10")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X8B, 0X97 # movq " _(VALUE) "(%r15), %r10")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0X90 # movq " _(VALUE) "(%eax), %r10")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0X93 # movq " _(VALUE) "(%ebx), %r10")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0X91 # movq " _(VALUE) "(%ecx), %r10")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0X92 # movq " _(VALUE) "(%edx), %r10")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0X97 # movq " _(VALUE) "(%edi), %r10")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0X96 # movq " _(VALUE) "(%esi), %r10")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0X95 # movq " _(VALUE) "(%ebp), %r10")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0X94, 0X24 # movq " _(VALUE) "(%esp), %r10")\
	CMT_ASM(".long " _(VALUE))

#define MOV_R11_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X8B, 0X98 # movq " _(VALUE) "(%rax), %r11")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X8B, 0X9B # movq " _(VALUE) "(%rbx), %r11")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X8B, 0X99 # movq " _(VALUE) "(%rcx), %r11")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X8B, 0X9A # movq " _(VALUE) "(%rdx), %r11")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X8B, 0X9F # movq " _(VALUE) "(%rdi), %r11")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X8B, 0X9E # movq " _(VALUE) "(%rsi), %r11")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X8B, 0X9D # movq " _(VALUE) "(%rbp), %r11")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X8B, 0X9C, 0X24 # movq " _(VALUE) "(%rsp), %r11")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X8B, 0X98 # movq " _(VALUE) "(%r8), %r11")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X8B, 0X99 # movq " _(VALUE) "(%r9), %r11")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X8B, 0X9A # movq " _(VALUE) "(%r10), %r11")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X8B, 0X9B # movq " _(VALUE) "(%r11), %r11")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X8B, 0X9C, 0X24 # movq " _(VALUE) "(%r12), %r11")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X8B, 0X9D # movq " _(VALUE) "(%r13), %r11")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X8B, 0X9E # movq " _(VALUE) "(%r14), %r11")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X8B, 0X9F # movq " _(VALUE) "(%r15), %r11")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0X98 # movq " _(VALUE) "(%eax), %r11")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0X9B # movq " _(VALUE) "(%ebx), %r11")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0X99 # movq " _(VALUE) "(%ecx), %r11")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0X9A # movq " _(VALUE) "(%edx), %r11")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0X9F # movq " _(VALUE) "(%edi), %r11")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0X9E # movq " _(VALUE) "(%esi), %r11")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0X9D # movq " _(VALUE) "(%ebp), %r11")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0X9C, 0X24 # movq " _(VALUE) "(%esp), %r11")\
	CMT_ASM(".long " _(VALUE))

#define MOV_R12_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X8B, 0XA0 # movq " _(VALUE) "(%rax), %r12")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X8B, 0XA3 # movq " _(VALUE) "(%rbx), %r12")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X8B, 0XA1 # movq " _(VALUE) "(%rcx), %r12")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X8B, 0XA2 # movq " _(VALUE) "(%rdx), %r12")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X8B, 0XA7 # movq " _(VALUE) "(%rdi), %r12")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X8B, 0XA6 # movq " _(VALUE) "(%rsi), %r12")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X8B, 0XA5 # movq " _(VALUE) "(%rbp), %r12")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X8B, 0XA4, 0X24 # movq " _(VALUE) "(%rsp), %r12")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X8B, 0XA0 # movq " _(VALUE) "(%r8), %r12")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X8B, 0XA1 # movq " _(VALUE) "(%r9), %r12")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X8B, 0XA2 # movq " _(VALUE) "(%r10), %r12")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X8B, 0XA3 # movq " _(VALUE) "(%r11), %r12")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X8B, 0XA4, 0X24 # movq " _(VALUE) "(%r12), %r12")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X8B, 0XA5 # movq " _(VALUE) "(%r13), %r12")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X8B, 0XA6 # movq " _(VALUE) "(%r14), %r12")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X8B, 0XA7 # movq " _(VALUE) "(%r15), %r12")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0XA0 # movq " _(VALUE) "(%eax), %r12")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0XA3 # movq " _(VALUE) "(%ebx), %r12")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0XA1 # movq " _(VALUE) "(%ecx), %r12")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0XA2 # movq " _(VALUE) "(%edx), %r12")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0XA7 # movq " _(VALUE) "(%edi), %r12")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0XA6 # movq " _(VALUE) "(%esi), %r12")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0XA5 # movq " _(VALUE) "(%ebp), %r12")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0XA4, 0X24 # movq " _(VALUE) "(%esp), %r12")\
	CMT_ASM(".long " _(VALUE))

#define MOV_R13_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X8B, 0XA8 # movq " _(VALUE) "(%rax), %r13")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X8B, 0XAB # movq " _(VALUE) "(%rbx), %r13")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X8B, 0XA9 # movq " _(VALUE) "(%rcx), %r13")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X8B, 0XAA # movq " _(VALUE) "(%rdx), %r13")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X8B, 0XAF # movq " _(VALUE) "(%rdi), %r13")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X8B, 0XAE # movq " _(VALUE) "(%rsi), %r13")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X8B, 0XAD # movq " _(VALUE) "(%rbp), %r13")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X8B, 0XAC, 0X24 # movq " _(VALUE) "(%rsp), %r13")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X8B, 0XA8 # movq " _(VALUE) "(%r8), %r13")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X8B, 0XA9 # movq " _(VALUE) "(%r9), %r13")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X8B, 0XAA # movq " _(VALUE) "(%r10), %r13")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X8B, 0XAB # movq " _(VALUE) "(%r11), %r13")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X8B, 0XAC, 0X24 # movq " _(VALUE) "(%r12), %r13")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X8B, 0XAD # movq " _(VALUE) "(%r13), %r13")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X8B, 0XAE # movq " _(VALUE) "(%r14), %r13")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X8B, 0XAF # movq " _(VALUE) "(%r15), %r13")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0XA8 # movq " _(VALUE) "(%eax), %r13")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0XAB # movq " _(VALUE) "(%ebx), %r13")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0XA9 # movq " _(VALUE) "(%ecx), %r13")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0XAA # movq " _(VALUE) "(%edx), %r13")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0XAF # movq " _(VALUE) "(%edi), %r13")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0XAE # movq " _(VALUE) "(%esi), %r13")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0XAD # movq " _(VALUE) "(%ebp), %r13")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0XAC, 0X24 # movq " _(VALUE) "(%esp), %r13")\
	CMT_ASM(".long " _(VALUE))

#define MOV_R14_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X8B, 0XB0 # movq " _(VALUE) "(%rax), %r14")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X8B, 0XB3 # movq " _(VALUE) "(%rbx), %r14")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X8B, 0XB1 # movq " _(VALUE) "(%rcx), %r14")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X8B, 0XB2 # movq " _(VALUE) "(%rdx), %r14")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X8B, 0XB7 # movq " _(VALUE) "(%rdi), %r14")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X8B, 0XB6 # movq " _(VALUE) "(%rsi), %r14")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X8B, 0XB5 # movq " _(VALUE) "(%rbp), %r14")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X8B, 0XB4, 0X24 # movq " _(VALUE) "(%rsp), %r14")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X8B, 0XB0 # movq " _(VALUE) "(%r8), %r14")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X8B, 0XB1 # movq " _(VALUE) "(%r9), %r14")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X8B, 0XB2 # movq " _(VALUE) "(%r10), %r14")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X8B, 0XB3 # movq " _(VALUE) "(%r11), %r14")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X8B, 0XB4, 0X24 # movq " _(VALUE) "(%r12), %r14")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X8B, 0XB5 # movq " _(VALUE) "(%r13), %r14")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X8B, 0XB6 # movq " _(VALUE) "(%r14), %r14")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X8B, 0XB7 # movq " _(VALUE) "(%r15), %r14")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0XB0 # movq " _(VALUE) "(%eax), %r14")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0XB3 # movq " _(VALUE) "(%ebx), %r14")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0XB1 # movq " _(VALUE) "(%ecx), %r14")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0XB2 # movq " _(VALUE) "(%edx), %r14")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0XB7 # movq " _(VALUE) "(%edi), %r14")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0XB6 # movq " _(VALUE) "(%esi), %r14")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0XB5 # movq " _(VALUE) "(%ebp), %r14")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0XB4, 0X24 # movq " _(VALUE) "(%esp), %r14")\
	CMT_ASM(".long " _(VALUE))

#define MOV_R15_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X8B, 0XB8 # movq " _(VALUE) "(%rax), %r15")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X8B, 0XBB # movq " _(VALUE) "(%rbx), %r15")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X8B, 0XB9 # movq " _(VALUE) "(%rcx), %r15")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X8B, 0XBA # movq " _(VALUE) "(%rdx), %r15")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X8B, 0XBF # movq " _(VALUE) "(%rdi), %r15")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X8B, 0XBE # movq " _(VALUE) "(%rsi), %r15")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X8B, 0XBD # movq " _(VALUE) "(%rbp), %r15")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X8B, 0XBC, 0X24 # movq " _(VALUE) "(%rsp), %r15")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X8B, 0XB8 # movq " _(VALUE) "(%r8), %r15")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X8B, 0XB9 # movq " _(VALUE) "(%r9), %r15")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X8B, 0XBA # movq " _(VALUE) "(%r10), %r15")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X8B, 0XBB # movq " _(VALUE) "(%r11), %r15")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X8B, 0XBC, 0X24 # movq " _(VALUE) "(%r12), %r15")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X8B, 0XBD # movq " _(VALUE) "(%r13), %r15")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X8B, 0XBE # movq " _(VALUE) "(%r14), %r15")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X8B, 0XBF # movq " _(VALUE) "(%r15), %r15")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0XB8 # movq " _(VALUE) "(%eax), %r15")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0XBB # movq " _(VALUE) "(%ebx), %r15")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0XB9 # movq " _(VALUE) "(%ecx), %r15")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0XBA # movq " _(VALUE) "(%edx), %r15")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0XBF # movq " _(VALUE) "(%edi), %r15")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0XBE # movq " _(VALUE) "(%esi), %r15")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0XBD # movq " _(VALUE) "(%ebp), %r15")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X8B, 0XBC, 0X24 # movq " _(VALUE) "(%esp), %r15")\
	CMT_ASM(".long " _(VALUE))

#define MOV_RAX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X89, 0X80 # movq %rax, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RAX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X89, 0X83 # movq %rax, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RAX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X89, 0X81 # movq %rax, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RAX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X89, 0X82 # movq %rax, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RAX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X89, 0X87 # movq %rax, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RAX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X89, 0X86 # movq %rax, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RAX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X89, 0X85 # movq %rax, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RAX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X89, 0X84, 0X24 # movq %rax, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RAX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X89, 0X80 # movq %rax, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RAX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X89, 0X81 # movq %rax, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RAX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X89, 0X82 # movq %rax, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RAX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X89, 0X83 # movq %rax, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RAX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X89, 0X84, 0X24 # movq %rax, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RAX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X89, 0X85 # movq %rax, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RAX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X89, 0X86 # movq %rax, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RAX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X89, 0X87 # movq %rax, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RAX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X89, 0X80 # movq %rax, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RAX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X89, 0X83 # movq %rax, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RAX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X89, 0X81 # movq %rax, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RAX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X89, 0X82 # movq %rax, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RAX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X89, 0X87 # movq %rax, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RAX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X89, 0X86 # movq %rax, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RAX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X89, 0X85 # movq %rax, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RAX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X89, 0X84, 0X24 # movq %rax, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define MOV_RBX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X89, 0X98 # movq %rbx, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RBX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X89, 0X9B # movq %rbx, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RBX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X89, 0X99 # movq %rbx, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RBX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X89, 0X9A # movq %rbx, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RBX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X89, 0X9F # movq %rbx, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RBX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X89, 0X9E # movq %rbx, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RBX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X89, 0X9D # movq %rbx, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RBX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X89, 0X9C, 0X24 # movq %rbx, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RBX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X89, 0X98 # movq %rbx, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RBX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X89, 0X99 # movq %rbx, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RBX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X89, 0X9A # movq %rbx, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RBX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X89, 0X9B # movq %rbx, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RBX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X89, 0X9C, 0X24 # movq %rbx, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RBX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X89, 0X9D # movq %rbx, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RBX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X89, 0X9E # movq %rbx, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RBX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X89, 0X9F # movq %rbx, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RBX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X89, 0X98 # movq %rbx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RBX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X89, 0X9B # movq %rbx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RBX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X89, 0X99 # movq %rbx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RBX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X89, 0X9A # movq %rbx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RBX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X89, 0X9F # movq %rbx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RBX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X89, 0X9E # movq %rbx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RBX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X89, 0X9D # movq %rbx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RBX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X89, 0X9C, 0X24 # movq %rbx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define MOV_RCX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X89, 0X88 # movq %rcx, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RCX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X89, 0X8B # movq %rcx, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RCX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X89, 0X89 # movq %rcx, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RCX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X89, 0X8A # movq %rcx, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RCX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X89, 0X8F # movq %rcx, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RCX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X89, 0X8E # movq %rcx, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RCX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X89, 0X8D # movq %rcx, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RCX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X89, 0X8C, 0X24 # movq %rcx, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RCX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X89, 0X88 # movq %rcx, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RCX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X89, 0X89 # movq %rcx, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RCX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X89, 0X8A # movq %rcx, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RCX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X89, 0X8B # movq %rcx, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RCX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X89, 0X8C, 0X24 # movq %rcx, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RCX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X89, 0X8D # movq %rcx, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RCX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X89, 0X8E # movq %rcx, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RCX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X89, 0X8F # movq %rcx, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RCX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X89, 0X88 # movq %rcx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RCX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X89, 0X8B # movq %rcx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RCX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X89, 0X89 # movq %rcx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RCX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X89, 0X8A # movq %rcx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RCX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X89, 0X8F # movq %rcx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RCX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X89, 0X8E # movq %rcx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RCX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X89, 0X8D # movq %rcx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RCX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X89, 0X8C, 0X24 # movq %rcx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define MOV_RDX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X89, 0X90 # movq %rdx, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RDX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X89, 0X93 # movq %rdx, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RDX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X89, 0X91 # movq %rdx, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RDX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X89, 0X92 # movq %rdx, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RDX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X89, 0X97 # movq %rdx, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RDX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X89, 0X96 # movq %rdx, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RDX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X89, 0X95 # movq %rdx, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RDX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X89, 0X94, 0X24 # movq %rdx, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RDX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X89, 0X90 # movq %rdx, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RDX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X89, 0X91 # movq %rdx, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RDX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X89, 0X92 # movq %rdx, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RDX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X89, 0X93 # movq %rdx, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RDX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X89, 0X94, 0X24 # movq %rdx, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RDX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X89, 0X95 # movq %rdx, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RDX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X89, 0X96 # movq %rdx, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RDX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X89, 0X97 # movq %rdx, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RDX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X89, 0X90 # movq %rdx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RDX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X89, 0X93 # movq %rdx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RDX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X89, 0X91 # movq %rdx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RDX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X89, 0X92 # movq %rdx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RDX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X89, 0X97 # movq %rdx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RDX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X89, 0X96 # movq %rdx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RDX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X89, 0X95 # movq %rdx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RDX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X89, 0X94, 0X24 # movq %rdx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define MOV_RDI_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X89, 0XB8 # movq %rdi, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RDI_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X89, 0XBB # movq %rdi, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RDI_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X89, 0XB9 # movq %rdi, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RDI_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X89, 0XBA # movq %rdi, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RDI_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X89, 0XBF # movq %rdi, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RDI_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X89, 0XBE # movq %rdi, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RDI_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X89, 0XBD # movq %rdi, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RDI_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X89, 0XBC, 0X24 # movq %rdi, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RDI_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X89, 0XB8 # movq %rdi, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RDI_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X89, 0XB9 # movq %rdi, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RDI_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X89, 0XBA # movq %rdi, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RDI_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X89, 0XBB # movq %rdi, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RDI_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X89, 0XBC, 0X24 # movq %rdi, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RDI_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X89, 0XBD # movq %rdi, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RDI_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X89, 0XBE # movq %rdi, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RDI_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X89, 0XBF # movq %rdi, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RDI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X89, 0XB8 # movq %rdi, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RDI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X89, 0XBB # movq %rdi, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RDI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X89, 0XB9 # movq %rdi, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RDI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X89, 0XBA # movq %rdi, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RDI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X89, 0XBF # movq %rdi, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RDI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X89, 0XBE # movq %rdi, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RDI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X89, 0XBD # movq %rdi, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RDI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X89, 0XBC, 0X24 # movq %rdi, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define MOV_RSI_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X89, 0XB0 # movq %rsi, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RSI_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X89, 0XB3 # movq %rsi, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RSI_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X89, 0XB1 # movq %rsi, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RSI_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X89, 0XB2 # movq %rsi, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RSI_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X89, 0XB7 # movq %rsi, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RSI_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X89, 0XB6 # movq %rsi, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RSI_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X89, 0XB5 # movq %rsi, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RSI_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X89, 0XB4, 0X24 # movq %rsi, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RSI_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X89, 0XB0 # movq %rsi, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RSI_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X89, 0XB1 # movq %rsi, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RSI_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X89, 0XB2 # movq %rsi, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RSI_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X89, 0XB3 # movq %rsi, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RSI_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X89, 0XB4, 0X24 # movq %rsi, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RSI_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X89, 0XB5 # movq %rsi, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RSI_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X89, 0XB6 # movq %rsi, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RSI_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X89, 0XB7 # movq %rsi, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RSI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X89, 0XB0 # movq %rsi, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RSI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X89, 0XB3 # movq %rsi, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RSI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X89, 0XB1 # movq %rsi, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RSI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X89, 0XB2 # movq %rsi, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RSI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X89, 0XB7 # movq %rsi, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RSI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X89, 0XB6 # movq %rsi, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RSI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X89, 0XB5 # movq %rsi, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RSI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X89, 0XB4, 0X24 # movq %rsi, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define MOV_RBP_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X89, 0XA8 # movq %rbp, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RBP_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X89, 0XAB # movq %rbp, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RBP_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X89, 0XA9 # movq %rbp, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RBP_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X89, 0XAA # movq %rbp, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RBP_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X89, 0XAF # movq %rbp, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RBP_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X89, 0XAE # movq %rbp, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RBP_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X89, 0XAD # movq %rbp, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RBP_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X89, 0XAC, 0X24 # movq %rbp, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RBP_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X89, 0XA8 # movq %rbp, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RBP_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X89, 0XA9 # movq %rbp, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RBP_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X89, 0XAA # movq %rbp, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RBP_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X89, 0XAB # movq %rbp, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RBP_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X89, 0XAC, 0X24 # movq %rbp, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RBP_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X89, 0XAD # movq %rbp, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RBP_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X89, 0XAE # movq %rbp, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RBP_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X89, 0XAF # movq %rbp, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RBP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X89, 0XA8 # movq %rbp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RBP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X89, 0XAB # movq %rbp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RBP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X89, 0XA9 # movq %rbp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RBP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X89, 0XAA # movq %rbp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RBP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X89, 0XAF # movq %rbp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RBP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X89, 0XAE # movq %rbp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RBP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X89, 0XAD # movq %rbp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RBP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X89, 0XAC, 0X24 # movq %rbp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define MOV_RSP_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X89, 0XA0 # movq %rsp, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RSP_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X89, 0XA3 # movq %rsp, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RSP_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X89, 0XA1 # movq %rsp, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RSP_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X89, 0XA2 # movq %rsp, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RSP_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X89, 0XA7 # movq %rsp, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RSP_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X89, 0XA6 # movq %rsp, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RSP_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X89, 0XA5 # movq %rsp, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RSP_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X89, 0XA4, 0X24 # movq %rsp, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RSP_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X89, 0XA0 # movq %rsp, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RSP_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X89, 0XA1 # movq %rsp, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RSP_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X89, 0XA2 # movq %rsp, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RSP_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X89, 0XA3 # movq %rsp, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RSP_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X89, 0XA4, 0X24 # movq %rsp, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RSP_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X89, 0XA5 # movq %rsp, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RSP_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X89, 0XA6 # movq %rsp, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RSP_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X89, 0XA7 # movq %rsp, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RSP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X89, 0XA0 # movq %rsp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RSP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X89, 0XA3 # movq %rsp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RSP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X89, 0XA1 # movq %rsp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RSP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X89, 0XA2 # movq %rsp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RSP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X89, 0XA7 # movq %rsp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RSP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X89, 0XA6 # movq %rsp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RSP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X89, 0XA5 # movq %rsp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_RSP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X89, 0XA4, 0X24 # movq %rsp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define MOV_R8_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X89, 0X80 # movq %r8, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X89, 0X83 # movq %r8, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X89, 0X81 # movq %r8, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X89, 0X82 # movq %r8, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X89, 0X87 # movq %r8, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X89, 0X86 # movq %r8, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X89, 0X85 # movq %r8, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X89, 0X84, 0X24 # movq %r8, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X89, 0X80 # movq %r8, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X89, 0X81 # movq %r8, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X89, 0X82 # movq %r8, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X89, 0X83 # movq %r8, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X89, 0X84, 0X24 # movq %r8, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X89, 0X85 # movq %r8, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X89, 0X86 # movq %r8, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X89, 0X87 # movq %r8, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X89, 0X80 # movq %r8, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X89, 0X83 # movq %r8, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X89, 0X81 # movq %r8, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X89, 0X82 # movq %r8, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X89, 0X87 # movq %r8, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X89, 0X86 # movq %r8, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X89, 0X85 # movq %r8, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X89, 0X84, 0X24 # movq %r8, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define MOV_R9_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X89, 0X88 # movq %r9, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X89, 0X8B # movq %r9, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X89, 0X89 # movq %r9, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X89, 0X8A # movq %r9, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X89, 0X8F # movq %r9, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X89, 0X8E # movq %r9, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X89, 0X8D # movq %r9, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X89, 0X8C, 0X24 # movq %r9, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X89, 0X88 # movq %r9, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X89, 0X89 # movq %r9, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X89, 0X8A # movq %r9, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X89, 0X8B # movq %r9, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X89, 0X8C, 0X24 # movq %r9, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X89, 0X8D # movq %r9, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X89, 0X8E # movq %r9, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X89, 0X8F # movq %r9, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X89, 0X88 # movq %r9, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X89, 0X8B # movq %r9, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X89, 0X89 # movq %r9, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X89, 0X8A # movq %r9, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X89, 0X8F # movq %r9, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X89, 0X8E # movq %r9, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X89, 0X8D # movq %r9, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X89, 0X8C, 0X24 # movq %r9, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define MOV_R10_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X89, 0X90 # movq %r10, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X89, 0X93 # movq %r10, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X89, 0X91 # movq %r10, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X89, 0X92 # movq %r10, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X89, 0X97 # movq %r10, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X89, 0X96 # movq %r10, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X89, 0X95 # movq %r10, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X89, 0X94, 0X24 # movq %r10, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X89, 0X90 # movq %r10, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X89, 0X91 # movq %r10, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X89, 0X92 # movq %r10, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X89, 0X93 # movq %r10, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X89, 0X94, 0X24 # movq %r10, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X89, 0X95 # movq %r10, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X89, 0X96 # movq %r10, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X89, 0X97 # movq %r10, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X89, 0X90 # movq %r10, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X89, 0X93 # movq %r10, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X89, 0X91 # movq %r10, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X89, 0X92 # movq %r10, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X89, 0X97 # movq %r10, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X89, 0X96 # movq %r10, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X89, 0X95 # movq %r10, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X89, 0X94, 0X24 # movq %r10, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define MOV_R11_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X89, 0X98 # movq %r11, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X89, 0X9B # movq %r11, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X89, 0X99 # movq %r11, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X89, 0X9A # movq %r11, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X89, 0X9F # movq %r11, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X89, 0X9E # movq %r11, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X89, 0X9D # movq %r11, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X89, 0X9C, 0X24 # movq %r11, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X89, 0X98 # movq %r11, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X89, 0X99 # movq %r11, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X89, 0X9A # movq %r11, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X89, 0X9B # movq %r11, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X89, 0X9C, 0X24 # movq %r11, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X89, 0X9D # movq %r11, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X89, 0X9E # movq %r11, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X89, 0X9F # movq %r11, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X89, 0X98 # movq %r11, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X89, 0X9B # movq %r11, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X89, 0X99 # movq %r11, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X89, 0X9A # movq %r11, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X89, 0X9F # movq %r11, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X89, 0X9E # movq %r11, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X89, 0X9D # movq %r11, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X89, 0X9C, 0X24 # movq %r11, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define MOV_R12_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X89, 0XA0 # movq %r12, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X89, 0XA3 # movq %r12, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X89, 0XA1 # movq %r12, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X89, 0XA2 # movq %r12, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X89, 0XA7 # movq %r12, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X89, 0XA6 # movq %r12, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X89, 0XA5 # movq %r12, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X89, 0XA4, 0X24 # movq %r12, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X89, 0XA0 # movq %r12, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X89, 0XA1 # movq %r12, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X89, 0XA2 # movq %r12, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X89, 0XA3 # movq %r12, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X89, 0XA4, 0X24 # movq %r12, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X89, 0XA5 # movq %r12, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X89, 0XA6 # movq %r12, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X89, 0XA7 # movq %r12, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X89, 0XA0 # movq %r12, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X89, 0XA3 # movq %r12, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X89, 0XA1 # movq %r12, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X89, 0XA2 # movq %r12, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X89, 0XA7 # movq %r12, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X89, 0XA6 # movq %r12, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X89, 0XA5 # movq %r12, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X89, 0XA4, 0X24 # movq %r12, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define MOV_R13_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X89, 0XA8 # movq %r13, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X89, 0XAB # movq %r13, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X89, 0XA9 # movq %r13, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X89, 0XAA # movq %r13, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X89, 0XAF # movq %r13, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X89, 0XAE # movq %r13, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X89, 0XAD # movq %r13, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X89, 0XAC, 0X24 # movq %r13, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X89, 0XA8 # movq %r13, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X89, 0XA9 # movq %r13, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X89, 0XAA # movq %r13, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X89, 0XAB # movq %r13, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X89, 0XAC, 0X24 # movq %r13, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X89, 0XAD # movq %r13, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X89, 0XAE # movq %r13, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X89, 0XAF # movq %r13, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X89, 0XA8 # movq %r13, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X89, 0XAB # movq %r13, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X89, 0XA9 # movq %r13, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X89, 0XAA # movq %r13, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X89, 0XAF # movq %r13, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X89, 0XAE # movq %r13, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X89, 0XAD # movq %r13, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X89, 0XAC, 0X24 # movq %r13, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define MOV_R14_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X89, 0XB0 # movq %r14, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X89, 0XB3 # movq %r14, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X89, 0XB1 # movq %r14, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X89, 0XB2 # movq %r14, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X89, 0XB7 # movq %r14, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X89, 0XB6 # movq %r14, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X89, 0XB5 # movq %r14, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X89, 0XB4, 0X24 # movq %r14, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X89, 0XB0 # movq %r14, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X89, 0XB1 # movq %r14, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X89, 0XB2 # movq %r14, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X89, 0XB3 # movq %r14, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X89, 0XB4, 0X24 # movq %r14, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X89, 0XB5 # movq %r14, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X89, 0XB6 # movq %r14, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X89, 0XB7 # movq %r14, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X89, 0XB0 # movq %r14, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X89, 0XB3 # movq %r14, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X89, 0XB1 # movq %r14, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X89, 0XB2 # movq %r14, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X89, 0XB7 # movq %r14, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X89, 0XB6 # movq %r14, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X89, 0XB5 # movq %r14, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X89, 0XB4, 0X24 # movq %r14, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define MOV_R15_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X89, 0XB8 # movq %r15, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X89, 0XBB # movq %r15, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X89, 0XB9 # movq %r15, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X89, 0XBA # movq %r15, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X89, 0XBF # movq %r15, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X89, 0XBE # movq %r15, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X89, 0XBD # movq %r15, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X89, 0XBC, 0X24 # movq %r15, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X89, 0XB8 # movq %r15, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X89, 0XB9 # movq %r15, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X89, 0XBA # movq %r15, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X89, 0XBB # movq %r15, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X89, 0XBC, 0X24 # movq %r15, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X89, 0XBD # movq %r15, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X89, 0XBE # movq %r15, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X89, 0XBF # movq %r15, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X89, 0XB8 # movq %r15, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X89, 0XBB # movq %r15, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X89, 0XB9 # movq %r15, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X89, 0XBA # movq %r15, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X89, 0XBF # movq %r15, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X89, 0XBE # movq %r15, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X89, 0XBD # movq %r15, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X89, 0XBC, 0X24 # movq %r15, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
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
