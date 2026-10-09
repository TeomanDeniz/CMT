#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************* [v] 64-BIT MEMORY [v] ************************** */
#define CMP_RAX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X3B, 0X04, 0X25 # cmpq (" _(VALUE) "), %rax")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RBX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X3B, 0X1C, 0X25 # cmpq (" _(VALUE) "), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RCX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X3B, 0X0C, 0X25 # cmpq (" _(VALUE) "), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RDX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X3B, 0X14, 0X25 # cmpq (" _(VALUE) "), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RDI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X3B, 0X3C, 0X25 # cmpq (" _(VALUE) "), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RSI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X3B, 0X34, 0X25 # cmpq (" _(VALUE) "), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RBP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X3B, 0X2C, 0X25 # cmpq (" _(VALUE) "), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RSP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X3B, 0X24, 0X25 # cmpq (" _(VALUE) "), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X3B, 0X04, 0X25 # cmpq (" _(VALUE) "), %r8")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X3B, 0X0C, 0X25 # cmpq (" _(VALUE) "), %r9")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X3B, 0X14, 0X25 # cmpq (" _(VALUE) "), %r10")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X3B, 0X1C, 0X25 # cmpq (" _(VALUE) "), %r11")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X3B, 0X24, 0X25 # cmpq (" _(VALUE) "), %r12")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X3B, 0X2C, 0X25 # cmpq (" _(VALUE) "), %r13")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X3B, 0X34, 0X25 # cmpq (" _(VALUE) "), %r14")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X3B, 0X3C, 0X25 # cmpq (" _(VALUE) "), %r15")\
	CMT_ASM(".long " _(VALUE))

#define CMP_RAX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X39, 0X04, 0X25 # cmpq %rax, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RBX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X39, 0X1C, 0X25 # cmpq %rbx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RCX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X39, 0X0C, 0X25 # cmpq %rcx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RDX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X39, 0X14, 0X25 # cmpq %rdx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RDI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X39, 0X3C, 0X25 # cmpq %rdi, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RSI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X39, 0X34, 0X25 # cmpq %rsi, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RBP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X39, 0X2C, 0X25 # cmpq %rbp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RSP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X39, 0X24, 0X25 # cmpq %rsp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X39, 0X04, 0X25 # cmpq %r8, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X39, 0X0C, 0X25 # cmpq %r9, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X39, 0X14, 0X25 # cmpq %r10, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X39, 0X1C, 0X25 # cmpq %r11, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X39, 0X24, 0X25 # cmpq %r12, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X39, 0X2C, 0X25 # cmpq %r13, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X39, 0X34, 0X25 # cmpq %r14, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X39, 0X3C, 0X25 # cmpq %r15, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))

#define CMP_RAX_FROM_PTR_RAX CMT_ASM(".byte 0X48, 0X3B, 0X00 # cmpq (%rax), %rax")
#define CMP_RAX_FROM_PTR_RBX CMT_ASM(".byte 0X48, 0X3B, 0X03 # cmpq (%rbx), %rax")
#define CMP_RAX_FROM_PTR_RCX CMT_ASM(".byte 0X48, 0X3B, 0X01 # cmpq (%rcx), %rax")
#define CMP_RAX_FROM_PTR_RDX CMT_ASM(".byte 0X48, 0X3B, 0X02 # cmpq (%rdx), %rax")
#define CMP_RAX_FROM_PTR_RDI CMT_ASM(".byte 0X48, 0X3B, 0X07 # cmpq (%rdi), %rax")
#define CMP_RAX_FROM_PTR_RSI CMT_ASM(".byte 0X48, 0X3B, 0X06 # cmpq (%rsi), %rax")
#define CMP_RAX_FROM_PTR_RBP CMT_ASM(".byte 0X48, 0X3B, 0X45, 0X00 # cmpq (%rbp), %rax")
#define CMP_RAX_FROM_PTR_RSP CMT_ASM(".byte 0X48, 0X3B, 0X04, 0X24 # cmpq (%rsp), %rax")
#define CMP_RAX_FROM_PTR_R8 CMT_ASM(".byte 0X49, 0X3B, 0X00 # cmpq (%r8), %rax")
#define CMP_RAX_FROM_PTR_R9 CMT_ASM(".byte 0X49, 0X3B, 0X01 # cmpq (%r9), %rax")
#define CMP_RAX_FROM_PTR_R10 CMT_ASM(".byte 0X49, 0X3B, 0X02 # cmpq (%r10), %rax")
#define CMP_RAX_FROM_PTR_R11 CMT_ASM(".byte 0X49, 0X3B, 0X03 # cmpq (%r11), %rax")
#define CMP_RAX_FROM_PTR_R12 CMT_ASM(".byte 0X49, 0X3B, 0X04, 0X24 # cmpq (%r12), %rax")
#define CMP_RAX_FROM_PTR_R13 CMT_ASM(".byte 0X49, 0X3B, 0X45, 0X00 # cmpq (%r13), %rax")
#define CMP_RAX_FROM_PTR_R14 CMT_ASM(".byte 0X49, 0X3B, 0X06 # cmpq (%r14), %rax")
#define CMP_RAX_FROM_PTR_R15 CMT_ASM(".byte 0X49, 0X3B, 0X07 # cmpq (%r15), %rax")
#define CMP_RAX_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X3B, 0X00 # cmpq (%eax), %rax")
#define CMP_RAX_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X3B, 0X03 # cmpq (%ebx), %rax")
#define CMP_RAX_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X3B, 0X01 # cmpq (%ecx), %rax")
#define CMP_RAX_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X3B, 0X02 # cmpq (%edx), %rax")
#define CMP_RAX_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X3B, 0X07 # cmpq (%edi), %rax")
#define CMP_RAX_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X3B, 0X06 # cmpq (%esi), %rax")
#define CMP_RAX_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X3B, 0X45, 0X00 # cmpq (%ebp), %rax")
#define CMP_RAX_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X3B, 0X04, 0X24 # cmpq (%esp), %rax")

#define CMP_RBX_FROM_PTR_RAX CMT_ASM(".byte 0X48, 0X3B, 0X18 # cmpq (%rax), %rbx")
#define CMP_RBX_FROM_PTR_RBX CMT_ASM(".byte 0X48, 0X3B, 0X1B # cmpq (%rbx), %rbx")
#define CMP_RBX_FROM_PTR_RCX CMT_ASM(".byte 0X48, 0X3B, 0X19 # cmpq (%rcx), %rbx")
#define CMP_RBX_FROM_PTR_RDX CMT_ASM(".byte 0X48, 0X3B, 0X1A # cmpq (%rdx), %rbx")
#define CMP_RBX_FROM_PTR_RDI CMT_ASM(".byte 0X48, 0X3B, 0X1F # cmpq (%rdi), %rbx")
#define CMP_RBX_FROM_PTR_RSI CMT_ASM(".byte 0X48, 0X3B, 0X1E # cmpq (%rsi), %rbx")
#define CMP_RBX_FROM_PTR_RBP CMT_ASM(".byte 0X48, 0X3B, 0X5D, 0X00 # cmpq (%rbp), %rbx")
#define CMP_RBX_FROM_PTR_RSP CMT_ASM(".byte 0X48, 0X3B, 0X1C, 0X24 # cmpq (%rsp), %rbx")
#define CMP_RBX_FROM_PTR_R8 CMT_ASM(".byte 0X49, 0X3B, 0X18 # cmpq (%r8), %rbx")
#define CMP_RBX_FROM_PTR_R9 CMT_ASM(".byte 0X49, 0X3B, 0X19 # cmpq (%r9), %rbx")
#define CMP_RBX_FROM_PTR_R10 CMT_ASM(".byte 0X49, 0X3B, 0X1A # cmpq (%r10), %rbx")
#define CMP_RBX_FROM_PTR_R11 CMT_ASM(".byte 0X49, 0X3B, 0X1B # cmpq (%r11), %rbx")
#define CMP_RBX_FROM_PTR_R12 CMT_ASM(".byte 0X49, 0X3B, 0X1C, 0X24 # cmpq (%r12), %rbx")
#define CMP_RBX_FROM_PTR_R13 CMT_ASM(".byte 0X49, 0X3B, 0X5D, 0X00 # cmpq (%r13), %rbx")
#define CMP_RBX_FROM_PTR_R14 CMT_ASM(".byte 0X49, 0X3B, 0X1E # cmpq (%r14), %rbx")
#define CMP_RBX_FROM_PTR_R15 CMT_ASM(".byte 0X49, 0X3B, 0X1F # cmpq (%r15), %rbx")
#define CMP_RBX_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X3B, 0X18 # cmpq (%eax), %rbx")
#define CMP_RBX_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X3B, 0X1B # cmpq (%ebx), %rbx")
#define CMP_RBX_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X3B, 0X19 # cmpq (%ecx), %rbx")
#define CMP_RBX_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X3B, 0X1A # cmpq (%edx), %rbx")
#define CMP_RBX_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X3B, 0X1F # cmpq (%edi), %rbx")
#define CMP_RBX_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X3B, 0X1E # cmpq (%esi), %rbx")
#define CMP_RBX_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X3B, 0X5D, 0X00 # cmpq (%ebp), %rbx")
#define CMP_RBX_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X3B, 0X1C, 0X24 # cmpq (%esp), %rbx")

#define CMP_RCX_FROM_PTR_RAX CMT_ASM(".byte 0X48, 0X3B, 0X08 # cmpq (%rax), %rcx")
#define CMP_RCX_FROM_PTR_RBX CMT_ASM(".byte 0X48, 0X3B, 0X0B # cmpq (%rbx), %rcx")
#define CMP_RCX_FROM_PTR_RCX CMT_ASM(".byte 0X48, 0X3B, 0X09 # cmpq (%rcx), %rcx")
#define CMP_RCX_FROM_PTR_RDX CMT_ASM(".byte 0X48, 0X3B, 0X0A # cmpq (%rdx), %rcx")
#define CMP_RCX_FROM_PTR_RDI CMT_ASM(".byte 0X48, 0X3B, 0X0F # cmpq (%rdi), %rcx")
#define CMP_RCX_FROM_PTR_RSI CMT_ASM(".byte 0X48, 0X3B, 0X0E # cmpq (%rsi), %rcx")
#define CMP_RCX_FROM_PTR_RBP CMT_ASM(".byte 0X48, 0X3B, 0X4D, 0X00 # cmpq (%rbp), %rcx")
#define CMP_RCX_FROM_PTR_RSP CMT_ASM(".byte 0X48, 0X3B, 0X0C, 0X24 # cmpq (%rsp), %rcx")
#define CMP_RCX_FROM_PTR_R8 CMT_ASM(".byte 0X49, 0X3B, 0X08 # cmpq (%r8), %rcx")
#define CMP_RCX_FROM_PTR_R9 CMT_ASM(".byte 0X49, 0X3B, 0X09 # cmpq (%r9), %rcx")
#define CMP_RCX_FROM_PTR_R10 CMT_ASM(".byte 0X49, 0X3B, 0X0A # cmpq (%r10), %rcx")
#define CMP_RCX_FROM_PTR_R11 CMT_ASM(".byte 0X49, 0X3B, 0X0B # cmpq (%r11), %rcx")
#define CMP_RCX_FROM_PTR_R12 CMT_ASM(".byte 0X49, 0X3B, 0X0C, 0X24 # cmpq (%r12), %rcx")
#define CMP_RCX_FROM_PTR_R13 CMT_ASM(".byte 0X49, 0X3B, 0X4D, 0X00 # cmpq (%r13), %rcx")
#define CMP_RCX_FROM_PTR_R14 CMT_ASM(".byte 0X49, 0X3B, 0X0E # cmpq (%r14), %rcx")
#define CMP_RCX_FROM_PTR_R15 CMT_ASM(".byte 0X49, 0X3B, 0X0F # cmpq (%r15), %rcx")
#define CMP_RCX_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X3B, 0X08 # cmpq (%eax), %rcx")
#define CMP_RCX_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X3B, 0X0B # cmpq (%ebx), %rcx")
#define CMP_RCX_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X3B, 0X09 # cmpq (%ecx), %rcx")
#define CMP_RCX_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X3B, 0X0A # cmpq (%edx), %rcx")
#define CMP_RCX_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X3B, 0X0F # cmpq (%edi), %rcx")
#define CMP_RCX_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X3B, 0X0E # cmpq (%esi), %rcx")
#define CMP_RCX_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X3B, 0X4D, 0X00 # cmpq (%ebp), %rcx")
#define CMP_RCX_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X3B, 0X0C, 0X24 # cmpq (%esp), %rcx")

#define CMP_RDX_FROM_PTR_RAX CMT_ASM(".byte 0X48, 0X3B, 0X10 # cmpq (%rax), %rdx")
#define CMP_RDX_FROM_PTR_RBX CMT_ASM(".byte 0X48, 0X3B, 0X13 # cmpq (%rbx), %rdx")
#define CMP_RDX_FROM_PTR_RCX CMT_ASM(".byte 0X48, 0X3B, 0X11 # cmpq (%rcx), %rdx")
#define CMP_RDX_FROM_PTR_RDX CMT_ASM(".byte 0X48, 0X3B, 0X12 # cmpq (%rdx), %rdx")
#define CMP_RDX_FROM_PTR_RDI CMT_ASM(".byte 0X48, 0X3B, 0X17 # cmpq (%rdi), %rdx")
#define CMP_RDX_FROM_PTR_RSI CMT_ASM(".byte 0X48, 0X3B, 0X16 # cmpq (%rsi), %rdx")
#define CMP_RDX_FROM_PTR_RBP CMT_ASM(".byte 0X48, 0X3B, 0X55, 0X00 # cmpq (%rbp), %rdx")
#define CMP_RDX_FROM_PTR_RSP CMT_ASM(".byte 0X48, 0X3B, 0X14, 0X24 # cmpq (%rsp), %rdx")
#define CMP_RDX_FROM_PTR_R8 CMT_ASM(".byte 0X49, 0X3B, 0X10 # cmpq (%r8), %rdx")
#define CMP_RDX_FROM_PTR_R9 CMT_ASM(".byte 0X49, 0X3B, 0X11 # cmpq (%r9), %rdx")
#define CMP_RDX_FROM_PTR_R10 CMT_ASM(".byte 0X49, 0X3B, 0X12 # cmpq (%r10), %rdx")
#define CMP_RDX_FROM_PTR_R11 CMT_ASM(".byte 0X49, 0X3B, 0X13 # cmpq (%r11), %rdx")
#define CMP_RDX_FROM_PTR_R12 CMT_ASM(".byte 0X49, 0X3B, 0X14, 0X24 # cmpq (%r12), %rdx")
#define CMP_RDX_FROM_PTR_R13 CMT_ASM(".byte 0X49, 0X3B, 0X55, 0X00 # cmpq (%r13), %rdx")
#define CMP_RDX_FROM_PTR_R14 CMT_ASM(".byte 0X49, 0X3B, 0X16 # cmpq (%r14), %rdx")
#define CMP_RDX_FROM_PTR_R15 CMT_ASM(".byte 0X49, 0X3B, 0X17 # cmpq (%r15), %rdx")
#define CMP_RDX_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X3B, 0X10 # cmpq (%eax), %rdx")
#define CMP_RDX_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X3B, 0X13 # cmpq (%ebx), %rdx")
#define CMP_RDX_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X3B, 0X11 # cmpq (%ecx), %rdx")
#define CMP_RDX_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X3B, 0X12 # cmpq (%edx), %rdx")
#define CMP_RDX_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X3B, 0X17 # cmpq (%edi), %rdx")
#define CMP_RDX_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X3B, 0X16 # cmpq (%esi), %rdx")
#define CMP_RDX_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X3B, 0X55, 0X00 # cmpq (%ebp), %rdx")
#define CMP_RDX_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X3B, 0X14, 0X24 # cmpq (%esp), %rdx")

#define CMP_RDI_FROM_PTR_RAX CMT_ASM(".byte 0X48, 0X3B, 0X38 # cmpq (%rax), %rdi")
#define CMP_RDI_FROM_PTR_RBX CMT_ASM(".byte 0X48, 0X3B, 0X3B # cmpq (%rbx), %rdi")
#define CMP_RDI_FROM_PTR_RCX CMT_ASM(".byte 0X48, 0X3B, 0X39 # cmpq (%rcx), %rdi")
#define CMP_RDI_FROM_PTR_RDX CMT_ASM(".byte 0X48, 0X3B, 0X3A # cmpq (%rdx), %rdi")
#define CMP_RDI_FROM_PTR_RDI CMT_ASM(".byte 0X48, 0X3B, 0X3F # cmpq (%rdi), %rdi")
#define CMP_RDI_FROM_PTR_RSI CMT_ASM(".byte 0X48, 0X3B, 0X3E # cmpq (%rsi), %rdi")
#define CMP_RDI_FROM_PTR_RBP CMT_ASM(".byte 0X48, 0X3B, 0X7D, 0X00 # cmpq (%rbp), %rdi")
#define CMP_RDI_FROM_PTR_RSP CMT_ASM(".byte 0X48, 0X3B, 0X3C, 0X24 # cmpq (%rsp), %rdi")
#define CMP_RDI_FROM_PTR_R8 CMT_ASM(".byte 0X49, 0X3B, 0X38 # cmpq (%r8), %rdi")
#define CMP_RDI_FROM_PTR_R9 CMT_ASM(".byte 0X49, 0X3B, 0X39 # cmpq (%r9), %rdi")
#define CMP_RDI_FROM_PTR_R10 CMT_ASM(".byte 0X49, 0X3B, 0X3A # cmpq (%r10), %rdi")
#define CMP_RDI_FROM_PTR_R11 CMT_ASM(".byte 0X49, 0X3B, 0X3B # cmpq (%r11), %rdi")
#define CMP_RDI_FROM_PTR_R12 CMT_ASM(".byte 0X49, 0X3B, 0X3C, 0X24 # cmpq (%r12), %rdi")
#define CMP_RDI_FROM_PTR_R13 CMT_ASM(".byte 0X49, 0X3B, 0X7D, 0X00 # cmpq (%r13), %rdi")
#define CMP_RDI_FROM_PTR_R14 CMT_ASM(".byte 0X49, 0X3B, 0X3E # cmpq (%r14), %rdi")
#define CMP_RDI_FROM_PTR_R15 CMT_ASM(".byte 0X49, 0X3B, 0X3F # cmpq (%r15), %rdi")
#define CMP_RDI_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X3B, 0X38 # cmpq (%eax), %rdi")
#define CMP_RDI_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X3B, 0X3B # cmpq (%ebx), %rdi")
#define CMP_RDI_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X3B, 0X39 # cmpq (%ecx), %rdi")
#define CMP_RDI_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X3B, 0X3A # cmpq (%edx), %rdi")
#define CMP_RDI_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X3B, 0X3F # cmpq (%edi), %rdi")
#define CMP_RDI_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X3B, 0X3E # cmpq (%esi), %rdi")
#define CMP_RDI_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X3B, 0X7D, 0X00 # cmpq (%ebp), %rdi")
#define CMP_RDI_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X3B, 0X3C, 0X24 # cmpq (%esp), %rdi")

#define CMP_RSI_FROM_PTR_RAX CMT_ASM(".byte 0X48, 0X3B, 0X30 # cmpq (%rax), %rsi")
#define CMP_RSI_FROM_PTR_RBX CMT_ASM(".byte 0X48, 0X3B, 0X33 # cmpq (%rbx), %rsi")
#define CMP_RSI_FROM_PTR_RCX CMT_ASM(".byte 0X48, 0X3B, 0X31 # cmpq (%rcx), %rsi")
#define CMP_RSI_FROM_PTR_RDX CMT_ASM(".byte 0X48, 0X3B, 0X32 # cmpq (%rdx), %rsi")
#define CMP_RSI_FROM_PTR_RDI CMT_ASM(".byte 0X48, 0X3B, 0X37 # cmpq (%rdi), %rsi")
#define CMP_RSI_FROM_PTR_RSI CMT_ASM(".byte 0X48, 0X3B, 0X36 # cmpq (%rsi), %rsi")
#define CMP_RSI_FROM_PTR_RBP CMT_ASM(".byte 0X48, 0X3B, 0X75, 0X00 # cmpq (%rbp), %rsi")
#define CMP_RSI_FROM_PTR_RSP CMT_ASM(".byte 0X48, 0X3B, 0X34, 0X24 # cmpq (%rsp), %rsi")
#define CMP_RSI_FROM_PTR_R8 CMT_ASM(".byte 0X49, 0X3B, 0X30 # cmpq (%r8), %rsi")
#define CMP_RSI_FROM_PTR_R9 CMT_ASM(".byte 0X49, 0X3B, 0X31 # cmpq (%r9), %rsi")
#define CMP_RSI_FROM_PTR_R10 CMT_ASM(".byte 0X49, 0X3B, 0X32 # cmpq (%r10), %rsi")
#define CMP_RSI_FROM_PTR_R11 CMT_ASM(".byte 0X49, 0X3B, 0X33 # cmpq (%r11), %rsi")
#define CMP_RSI_FROM_PTR_R12 CMT_ASM(".byte 0X49, 0X3B, 0X34, 0X24 # cmpq (%r12), %rsi")
#define CMP_RSI_FROM_PTR_R13 CMT_ASM(".byte 0X49, 0X3B, 0X75, 0X00 # cmpq (%r13), %rsi")
#define CMP_RSI_FROM_PTR_R14 CMT_ASM(".byte 0X49, 0X3B, 0X36 # cmpq (%r14), %rsi")
#define CMP_RSI_FROM_PTR_R15 CMT_ASM(".byte 0X49, 0X3B, 0X37 # cmpq (%r15), %rsi")
#define CMP_RSI_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X3B, 0X30 # cmpq (%eax), %rsi")
#define CMP_RSI_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X3B, 0X33 # cmpq (%ebx), %rsi")
#define CMP_RSI_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X3B, 0X31 # cmpq (%ecx), %rsi")
#define CMP_RSI_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X3B, 0X32 # cmpq (%edx), %rsi")
#define CMP_RSI_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X3B, 0X37 # cmpq (%edi), %rsi")
#define CMP_RSI_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X3B, 0X36 # cmpq (%esi), %rsi")
#define CMP_RSI_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X3B, 0X75, 0X00 # cmpq (%ebp), %rsi")
#define CMP_RSI_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X3B, 0X34, 0X24 # cmpq (%esp), %rsi")

#define CMP_RBP_FROM_PTR_RAX CMT_ASM(".byte 0X48, 0X3B, 0X28 # cmpq (%rax), %rbp")
#define CMP_RBP_FROM_PTR_RBX CMT_ASM(".byte 0X48, 0X3B, 0X2B # cmpq (%rbx), %rbp")
#define CMP_RBP_FROM_PTR_RCX CMT_ASM(".byte 0X48, 0X3B, 0X29 # cmpq (%rcx), %rbp")
#define CMP_RBP_FROM_PTR_RDX CMT_ASM(".byte 0X48, 0X3B, 0X2A # cmpq (%rdx), %rbp")
#define CMP_RBP_FROM_PTR_RDI CMT_ASM(".byte 0X48, 0X3B, 0X2F # cmpq (%rdi), %rbp")
#define CMP_RBP_FROM_PTR_RSI CMT_ASM(".byte 0X48, 0X3B, 0X2E # cmpq (%rsi), %rbp")
#define CMP_RBP_FROM_PTR_RBP CMT_ASM(".byte 0X48, 0X3B, 0X6D, 0X00 # cmpq (%rbp), %rbp")
#define CMP_RBP_FROM_PTR_RSP CMT_ASM(".byte 0X48, 0X3B, 0X2C, 0X24 # cmpq (%rsp), %rbp")
#define CMP_RBP_FROM_PTR_R8 CMT_ASM(".byte 0X49, 0X3B, 0X28 # cmpq (%r8), %rbp")
#define CMP_RBP_FROM_PTR_R9 CMT_ASM(".byte 0X49, 0X3B, 0X29 # cmpq (%r9), %rbp")
#define CMP_RBP_FROM_PTR_R10 CMT_ASM(".byte 0X49, 0X3B, 0X2A # cmpq (%r10), %rbp")
#define CMP_RBP_FROM_PTR_R11 CMT_ASM(".byte 0X49, 0X3B, 0X2B # cmpq (%r11), %rbp")
#define CMP_RBP_FROM_PTR_R12 CMT_ASM(".byte 0X49, 0X3B, 0X2C, 0X24 # cmpq (%r12), %rbp")
#define CMP_RBP_FROM_PTR_R13 CMT_ASM(".byte 0X49, 0X3B, 0X6D, 0X00 # cmpq (%r13), %rbp")
#define CMP_RBP_FROM_PTR_R14 CMT_ASM(".byte 0X49, 0X3B, 0X2E # cmpq (%r14), %rbp")
#define CMP_RBP_FROM_PTR_R15 CMT_ASM(".byte 0X49, 0X3B, 0X2F # cmpq (%r15), %rbp")
#define CMP_RBP_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X3B, 0X28 # cmpq (%eax), %rbp")
#define CMP_RBP_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X3B, 0X2B # cmpq (%ebx), %rbp")
#define CMP_RBP_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X3B, 0X29 # cmpq (%ecx), %rbp")
#define CMP_RBP_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X3B, 0X2A # cmpq (%edx), %rbp")
#define CMP_RBP_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X3B, 0X2F # cmpq (%edi), %rbp")
#define CMP_RBP_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X3B, 0X2E # cmpq (%esi), %rbp")
#define CMP_RBP_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X3B, 0X6D, 0X00 # cmpq (%ebp), %rbp")
#define CMP_RBP_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X3B, 0X2C, 0X24 # cmpq (%esp), %rbp")

#define CMP_RSP_FROM_PTR_RAX CMT_ASM(".byte 0X48, 0X3B, 0X20 # cmpq (%rax), %rsp")
#define CMP_RSP_FROM_PTR_RBX CMT_ASM(".byte 0X48, 0X3B, 0X23 # cmpq (%rbx), %rsp")
#define CMP_RSP_FROM_PTR_RCX CMT_ASM(".byte 0X48, 0X3B, 0X21 # cmpq (%rcx), %rsp")
#define CMP_RSP_FROM_PTR_RDX CMT_ASM(".byte 0X48, 0X3B, 0X22 # cmpq (%rdx), %rsp")
#define CMP_RSP_FROM_PTR_RDI CMT_ASM(".byte 0X48, 0X3B, 0X27 # cmpq (%rdi), %rsp")
#define CMP_RSP_FROM_PTR_RSI CMT_ASM(".byte 0X48, 0X3B, 0X26 # cmpq (%rsi), %rsp")
#define CMP_RSP_FROM_PTR_RBP CMT_ASM(".byte 0X48, 0X3B, 0X65, 0X00 # cmpq (%rbp), %rsp")
#define CMP_RSP_FROM_PTR_RSP CMT_ASM(".byte 0X48, 0X3B, 0X24, 0X24 # cmpq (%rsp), %rsp")
#define CMP_RSP_FROM_PTR_R8 CMT_ASM(".byte 0X49, 0X3B, 0X20 # cmpq (%r8), %rsp")
#define CMP_RSP_FROM_PTR_R9 CMT_ASM(".byte 0X49, 0X3B, 0X21 # cmpq (%r9), %rsp")
#define CMP_RSP_FROM_PTR_R10 CMT_ASM(".byte 0X49, 0X3B, 0X22 # cmpq (%r10), %rsp")
#define CMP_RSP_FROM_PTR_R11 CMT_ASM(".byte 0X49, 0X3B, 0X23 # cmpq (%r11), %rsp")
#define CMP_RSP_FROM_PTR_R12 CMT_ASM(".byte 0X49, 0X3B, 0X24, 0X24 # cmpq (%r12), %rsp")
#define CMP_RSP_FROM_PTR_R13 CMT_ASM(".byte 0X49, 0X3B, 0X65, 0X00 # cmpq (%r13), %rsp")
#define CMP_RSP_FROM_PTR_R14 CMT_ASM(".byte 0X49, 0X3B, 0X26 # cmpq (%r14), %rsp")
#define CMP_RSP_FROM_PTR_R15 CMT_ASM(".byte 0X49, 0X3B, 0X27 # cmpq (%r15), %rsp")
#define CMP_RSP_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X3B, 0X20 # cmpq (%eax), %rsp")
#define CMP_RSP_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X3B, 0X23 # cmpq (%ebx), %rsp")
#define CMP_RSP_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X3B, 0X21 # cmpq (%ecx), %rsp")
#define CMP_RSP_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X3B, 0X22 # cmpq (%edx), %rsp")
#define CMP_RSP_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X3B, 0X27 # cmpq (%edi), %rsp")
#define CMP_RSP_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X3B, 0X26 # cmpq (%esi), %rsp")
#define CMP_RSP_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X3B, 0X65, 0X00 # cmpq (%ebp), %rsp")
#define CMP_RSP_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X3B, 0X24, 0X24 # cmpq (%esp), %rsp")

#define CMP_R8_FROM_PTR_RAX CMT_ASM(".byte 0X4C, 0X3B, 0X00 # cmpq (%rax), %r8")
#define CMP_R8_FROM_PTR_RBX CMT_ASM(".byte 0X4C, 0X3B, 0X03 # cmpq (%rbx), %r8")
#define CMP_R8_FROM_PTR_RCX CMT_ASM(".byte 0X4C, 0X3B, 0X01 # cmpq (%rcx), %r8")
#define CMP_R8_FROM_PTR_RDX CMT_ASM(".byte 0X4C, 0X3B, 0X02 # cmpq (%rdx), %r8")
#define CMP_R8_FROM_PTR_RDI CMT_ASM(".byte 0X4C, 0X3B, 0X07 # cmpq (%rdi), %r8")
#define CMP_R8_FROM_PTR_RSI CMT_ASM(".byte 0X4C, 0X3B, 0X06 # cmpq (%rsi), %r8")
#define CMP_R8_FROM_PTR_RBP CMT_ASM(".byte 0X4C, 0X3B, 0X45, 0X00 # cmpq (%rbp), %r8")
#define CMP_R8_FROM_PTR_RSP CMT_ASM(".byte 0X4C, 0X3B, 0X04, 0X24 # cmpq (%rsp), %r8")
#define CMP_R8_FROM_PTR_R8 CMT_ASM(".byte 0X4D, 0X3B, 0X00 # cmpq (%r8), %r8")
#define CMP_R8_FROM_PTR_R9 CMT_ASM(".byte 0X4D, 0X3B, 0X01 # cmpq (%r9), %r8")
#define CMP_R8_FROM_PTR_R10 CMT_ASM(".byte 0X4D, 0X3B, 0X02 # cmpq (%r10), %r8")
#define CMP_R8_FROM_PTR_R11 CMT_ASM(".byte 0X4D, 0X3B, 0X03 # cmpq (%r11), %r8")
#define CMP_R8_FROM_PTR_R12 CMT_ASM(".byte 0X4D, 0X3B, 0X04, 0X24 # cmpq (%r12), %r8")
#define CMP_R8_FROM_PTR_R13 CMT_ASM(".byte 0X4D, 0X3B, 0X45, 0X00 # cmpq (%r13), %r8")
#define CMP_R8_FROM_PTR_R14 CMT_ASM(".byte 0X4D, 0X3B, 0X06 # cmpq (%r14), %r8")
#define CMP_R8_FROM_PTR_R15 CMT_ASM(".byte 0X4D, 0X3B, 0X07 # cmpq (%r15), %r8")
#define CMP_R8_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0X00 # cmpq (%eax), %r8")
#define CMP_R8_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0X03 # cmpq (%ebx), %r8")
#define CMP_R8_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0X01 # cmpq (%ecx), %r8")
#define CMP_R8_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0X02 # cmpq (%edx), %r8")
#define CMP_R8_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0X07 # cmpq (%edi), %r8")
#define CMP_R8_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0X06 # cmpq (%esi), %r8")
#define CMP_R8_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0X45, 0X00 # cmpq (%ebp), %r8")
#define CMP_R8_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0X04, 0X24 # cmpq (%esp), %r8")

#define CMP_R9_FROM_PTR_RAX CMT_ASM(".byte 0X4C, 0X3B, 0X08 # cmpq (%rax), %r9")
#define CMP_R9_FROM_PTR_RBX CMT_ASM(".byte 0X4C, 0X3B, 0X0B # cmpq (%rbx), %r9")
#define CMP_R9_FROM_PTR_RCX CMT_ASM(".byte 0X4C, 0X3B, 0X09 # cmpq (%rcx), %r9")
#define CMP_R9_FROM_PTR_RDX CMT_ASM(".byte 0X4C, 0X3B, 0X0A # cmpq (%rdx), %r9")
#define CMP_R9_FROM_PTR_RDI CMT_ASM(".byte 0X4C, 0X3B, 0X0F # cmpq (%rdi), %r9")
#define CMP_R9_FROM_PTR_RSI CMT_ASM(".byte 0X4C, 0X3B, 0X0E # cmpq (%rsi), %r9")
#define CMP_R9_FROM_PTR_RBP CMT_ASM(".byte 0X4C, 0X3B, 0X4D, 0X00 # cmpq (%rbp), %r9")
#define CMP_R9_FROM_PTR_RSP CMT_ASM(".byte 0X4C, 0X3B, 0X0C, 0X24 # cmpq (%rsp), %r9")
#define CMP_R9_FROM_PTR_R8 CMT_ASM(".byte 0X4D, 0X3B, 0X08 # cmpq (%r8), %r9")
#define CMP_R9_FROM_PTR_R9 CMT_ASM(".byte 0X4D, 0X3B, 0X09 # cmpq (%r9), %r9")
#define CMP_R9_FROM_PTR_R10 CMT_ASM(".byte 0X4D, 0X3B, 0X0A # cmpq (%r10), %r9")
#define CMP_R9_FROM_PTR_R11 CMT_ASM(".byte 0X4D, 0X3B, 0X0B # cmpq (%r11), %r9")
#define CMP_R9_FROM_PTR_R12 CMT_ASM(".byte 0X4D, 0X3B, 0X0C, 0X24 # cmpq (%r12), %r9")
#define CMP_R9_FROM_PTR_R13 CMT_ASM(".byte 0X4D, 0X3B, 0X4D, 0X00 # cmpq (%r13), %r9")
#define CMP_R9_FROM_PTR_R14 CMT_ASM(".byte 0X4D, 0X3B, 0X0E # cmpq (%r14), %r9")
#define CMP_R9_FROM_PTR_R15 CMT_ASM(".byte 0X4D, 0X3B, 0X0F # cmpq (%r15), %r9")
#define CMP_R9_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0X08 # cmpq (%eax), %r9")
#define CMP_R9_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0X0B # cmpq (%ebx), %r9")
#define CMP_R9_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0X09 # cmpq (%ecx), %r9")
#define CMP_R9_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0X0A # cmpq (%edx), %r9")
#define CMP_R9_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0X0F # cmpq (%edi), %r9")
#define CMP_R9_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0X0E # cmpq (%esi), %r9")
#define CMP_R9_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0X4D, 0X00 # cmpq (%ebp), %r9")
#define CMP_R9_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0X0C, 0X24 # cmpq (%esp), %r9")

#define CMP_R10_FROM_PTR_RAX CMT_ASM(".byte 0X4C, 0X3B, 0X10 # cmpq (%rax), %r10")
#define CMP_R10_FROM_PTR_RBX CMT_ASM(".byte 0X4C, 0X3B, 0X13 # cmpq (%rbx), %r10")
#define CMP_R10_FROM_PTR_RCX CMT_ASM(".byte 0X4C, 0X3B, 0X11 # cmpq (%rcx), %r10")
#define CMP_R10_FROM_PTR_RDX CMT_ASM(".byte 0X4C, 0X3B, 0X12 # cmpq (%rdx), %r10")
#define CMP_R10_FROM_PTR_RDI CMT_ASM(".byte 0X4C, 0X3B, 0X17 # cmpq (%rdi), %r10")
#define CMP_R10_FROM_PTR_RSI CMT_ASM(".byte 0X4C, 0X3B, 0X16 # cmpq (%rsi), %r10")
#define CMP_R10_FROM_PTR_RBP CMT_ASM(".byte 0X4C, 0X3B, 0X55, 0X00 # cmpq (%rbp), %r10")
#define CMP_R10_FROM_PTR_RSP CMT_ASM(".byte 0X4C, 0X3B, 0X14, 0X24 # cmpq (%rsp), %r10")
#define CMP_R10_FROM_PTR_R8 CMT_ASM(".byte 0X4D, 0X3B, 0X10 # cmpq (%r8), %r10")
#define CMP_R10_FROM_PTR_R9 CMT_ASM(".byte 0X4D, 0X3B, 0X11 # cmpq (%r9), %r10")
#define CMP_R10_FROM_PTR_R10 CMT_ASM(".byte 0X4D, 0X3B, 0X12 # cmpq (%r10), %r10")
#define CMP_R10_FROM_PTR_R11 CMT_ASM(".byte 0X4D, 0X3B, 0X13 # cmpq (%r11), %r10")
#define CMP_R10_FROM_PTR_R12 CMT_ASM(".byte 0X4D, 0X3B, 0X14, 0X24 # cmpq (%r12), %r10")
#define CMP_R10_FROM_PTR_R13 CMT_ASM(".byte 0X4D, 0X3B, 0X55, 0X00 # cmpq (%r13), %r10")
#define CMP_R10_FROM_PTR_R14 CMT_ASM(".byte 0X4D, 0X3B, 0X16 # cmpq (%r14), %r10")
#define CMP_R10_FROM_PTR_R15 CMT_ASM(".byte 0X4D, 0X3B, 0X17 # cmpq (%r15), %r10")
#define CMP_R10_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0X10 # cmpq (%eax), %r10")
#define CMP_R10_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0X13 # cmpq (%ebx), %r10")
#define CMP_R10_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0X11 # cmpq (%ecx), %r10")
#define CMP_R10_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0X12 # cmpq (%edx), %r10")
#define CMP_R10_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0X17 # cmpq (%edi), %r10")
#define CMP_R10_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0X16 # cmpq (%esi), %r10")
#define CMP_R10_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0X55, 0X00 # cmpq (%ebp), %r10")
#define CMP_R10_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0X14, 0X24 # cmpq (%esp), %r10")

#define CMP_R11_FROM_PTR_RAX CMT_ASM(".byte 0X4C, 0X3B, 0X18 # cmpq (%rax), %r11")
#define CMP_R11_FROM_PTR_RBX CMT_ASM(".byte 0X4C, 0X3B, 0X1B # cmpq (%rbx), %r11")
#define CMP_R11_FROM_PTR_RCX CMT_ASM(".byte 0X4C, 0X3B, 0X19 # cmpq (%rcx), %r11")
#define CMP_R11_FROM_PTR_RDX CMT_ASM(".byte 0X4C, 0X3B, 0X1A # cmpq (%rdx), %r11")
#define CMP_R11_FROM_PTR_RDI CMT_ASM(".byte 0X4C, 0X3B, 0X1F # cmpq (%rdi), %r11")
#define CMP_R11_FROM_PTR_RSI CMT_ASM(".byte 0X4C, 0X3B, 0X1E # cmpq (%rsi), %r11")
#define CMP_R11_FROM_PTR_RBP CMT_ASM(".byte 0X4C, 0X3B, 0X5D, 0X00 # cmpq (%rbp), %r11")
#define CMP_R11_FROM_PTR_RSP CMT_ASM(".byte 0X4C, 0X3B, 0X1C, 0X24 # cmpq (%rsp), %r11")
#define CMP_R11_FROM_PTR_R8 CMT_ASM(".byte 0X4D, 0X3B, 0X18 # cmpq (%r8), %r11")
#define CMP_R11_FROM_PTR_R9 CMT_ASM(".byte 0X4D, 0X3B, 0X19 # cmpq (%r9), %r11")
#define CMP_R11_FROM_PTR_R10 CMT_ASM(".byte 0X4D, 0X3B, 0X1A # cmpq (%r10), %r11")
#define CMP_R11_FROM_PTR_R11 CMT_ASM(".byte 0X4D, 0X3B, 0X1B # cmpq (%r11), %r11")
#define CMP_R11_FROM_PTR_R12 CMT_ASM(".byte 0X4D, 0X3B, 0X1C, 0X24 # cmpq (%r12), %r11")
#define CMP_R11_FROM_PTR_R13 CMT_ASM(".byte 0X4D, 0X3B, 0X5D, 0X00 # cmpq (%r13), %r11")
#define CMP_R11_FROM_PTR_R14 CMT_ASM(".byte 0X4D, 0X3B, 0X1E # cmpq (%r14), %r11")
#define CMP_R11_FROM_PTR_R15 CMT_ASM(".byte 0X4D, 0X3B, 0X1F # cmpq (%r15), %r11")
#define CMP_R11_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0X18 # cmpq (%eax), %r11")
#define CMP_R11_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0X1B # cmpq (%ebx), %r11")
#define CMP_R11_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0X19 # cmpq (%ecx), %r11")
#define CMP_R11_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0X1A # cmpq (%edx), %r11")
#define CMP_R11_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0X1F # cmpq (%edi), %r11")
#define CMP_R11_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0X1E # cmpq (%esi), %r11")
#define CMP_R11_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0X5D, 0X00 # cmpq (%ebp), %r11")
#define CMP_R11_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0X1C, 0X24 # cmpq (%esp), %r11")

#define CMP_R12_FROM_PTR_RAX CMT_ASM(".byte 0X4C, 0X3B, 0X20 # cmpq (%rax), %r12")
#define CMP_R12_FROM_PTR_RBX CMT_ASM(".byte 0X4C, 0X3B, 0X23 # cmpq (%rbx), %r12")
#define CMP_R12_FROM_PTR_RCX CMT_ASM(".byte 0X4C, 0X3B, 0X21 # cmpq (%rcx), %r12")
#define CMP_R12_FROM_PTR_RDX CMT_ASM(".byte 0X4C, 0X3B, 0X22 # cmpq (%rdx), %r12")
#define CMP_R12_FROM_PTR_RDI CMT_ASM(".byte 0X4C, 0X3B, 0X27 # cmpq (%rdi), %r12")
#define CMP_R12_FROM_PTR_RSI CMT_ASM(".byte 0X4C, 0X3B, 0X26 # cmpq (%rsi), %r12")
#define CMP_R12_FROM_PTR_RBP CMT_ASM(".byte 0X4C, 0X3B, 0X65, 0X00 # cmpq (%rbp), %r12")
#define CMP_R12_FROM_PTR_RSP CMT_ASM(".byte 0X4C, 0X3B, 0X24, 0X24 # cmpq (%rsp), %r12")
#define CMP_R12_FROM_PTR_R8 CMT_ASM(".byte 0X4D, 0X3B, 0X20 # cmpq (%r8), %r12")
#define CMP_R12_FROM_PTR_R9 CMT_ASM(".byte 0X4D, 0X3B, 0X21 # cmpq (%r9), %r12")
#define CMP_R12_FROM_PTR_R10 CMT_ASM(".byte 0X4D, 0X3B, 0X22 # cmpq (%r10), %r12")
#define CMP_R12_FROM_PTR_R11 CMT_ASM(".byte 0X4D, 0X3B, 0X23 # cmpq (%r11), %r12")
#define CMP_R12_FROM_PTR_R12 CMT_ASM(".byte 0X4D, 0X3B, 0X24, 0X24 # cmpq (%r12), %r12")
#define CMP_R12_FROM_PTR_R13 CMT_ASM(".byte 0X4D, 0X3B, 0X65, 0X00 # cmpq (%r13), %r12")
#define CMP_R12_FROM_PTR_R14 CMT_ASM(".byte 0X4D, 0X3B, 0X26 # cmpq (%r14), %r12")
#define CMP_R12_FROM_PTR_R15 CMT_ASM(".byte 0X4D, 0X3B, 0X27 # cmpq (%r15), %r12")
#define CMP_R12_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0X20 # cmpq (%eax), %r12")
#define CMP_R12_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0X23 # cmpq (%ebx), %r12")
#define CMP_R12_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0X21 # cmpq (%ecx), %r12")
#define CMP_R12_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0X22 # cmpq (%edx), %r12")
#define CMP_R12_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0X27 # cmpq (%edi), %r12")
#define CMP_R12_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0X26 # cmpq (%esi), %r12")
#define CMP_R12_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0X65, 0X00 # cmpq (%ebp), %r12")
#define CMP_R12_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0X24, 0X24 # cmpq (%esp), %r12")

#define CMP_R13_FROM_PTR_RAX CMT_ASM(".byte 0X4C, 0X3B, 0X28 # cmpq (%rax), %r13")
#define CMP_R13_FROM_PTR_RBX CMT_ASM(".byte 0X4C, 0X3B, 0X2B # cmpq (%rbx), %r13")
#define CMP_R13_FROM_PTR_RCX CMT_ASM(".byte 0X4C, 0X3B, 0X29 # cmpq (%rcx), %r13")
#define CMP_R13_FROM_PTR_RDX CMT_ASM(".byte 0X4C, 0X3B, 0X2A # cmpq (%rdx), %r13")
#define CMP_R13_FROM_PTR_RDI CMT_ASM(".byte 0X4C, 0X3B, 0X2F # cmpq (%rdi), %r13")
#define CMP_R13_FROM_PTR_RSI CMT_ASM(".byte 0X4C, 0X3B, 0X2E # cmpq (%rsi), %r13")
#define CMP_R13_FROM_PTR_RBP CMT_ASM(".byte 0X4C, 0X3B, 0X6D, 0X00 # cmpq (%rbp), %r13")
#define CMP_R13_FROM_PTR_RSP CMT_ASM(".byte 0X4C, 0X3B, 0X2C, 0X24 # cmpq (%rsp), %r13")
#define CMP_R13_FROM_PTR_R8 CMT_ASM(".byte 0X4D, 0X3B, 0X28 # cmpq (%r8), %r13")
#define CMP_R13_FROM_PTR_R9 CMT_ASM(".byte 0X4D, 0X3B, 0X29 # cmpq (%r9), %r13")
#define CMP_R13_FROM_PTR_R10 CMT_ASM(".byte 0X4D, 0X3B, 0X2A # cmpq (%r10), %r13")
#define CMP_R13_FROM_PTR_R11 CMT_ASM(".byte 0X4D, 0X3B, 0X2B # cmpq (%r11), %r13")
#define CMP_R13_FROM_PTR_R12 CMT_ASM(".byte 0X4D, 0X3B, 0X2C, 0X24 # cmpq (%r12), %r13")
#define CMP_R13_FROM_PTR_R13 CMT_ASM(".byte 0X4D, 0X3B, 0X6D, 0X00 # cmpq (%r13), %r13")
#define CMP_R13_FROM_PTR_R14 CMT_ASM(".byte 0X4D, 0X3B, 0X2E # cmpq (%r14), %r13")
#define CMP_R13_FROM_PTR_R15 CMT_ASM(".byte 0X4D, 0X3B, 0X2F # cmpq (%r15), %r13")
#define CMP_R13_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0X28 # cmpq (%eax), %r13")
#define CMP_R13_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0X2B # cmpq (%ebx), %r13")
#define CMP_R13_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0X29 # cmpq (%ecx), %r13")
#define CMP_R13_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0X2A # cmpq (%edx), %r13")
#define CMP_R13_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0X2F # cmpq (%edi), %r13")
#define CMP_R13_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0X2E # cmpq (%esi), %r13")
#define CMP_R13_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0X6D, 0X00 # cmpq (%ebp), %r13")
#define CMP_R13_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0X2C, 0X24 # cmpq (%esp), %r13")

#define CMP_R14_FROM_PTR_RAX CMT_ASM(".byte 0X4C, 0X3B, 0X30 # cmpq (%rax), %r14")
#define CMP_R14_FROM_PTR_RBX CMT_ASM(".byte 0X4C, 0X3B, 0X33 # cmpq (%rbx), %r14")
#define CMP_R14_FROM_PTR_RCX CMT_ASM(".byte 0X4C, 0X3B, 0X31 # cmpq (%rcx), %r14")
#define CMP_R14_FROM_PTR_RDX CMT_ASM(".byte 0X4C, 0X3B, 0X32 # cmpq (%rdx), %r14")
#define CMP_R14_FROM_PTR_RDI CMT_ASM(".byte 0X4C, 0X3B, 0X37 # cmpq (%rdi), %r14")
#define CMP_R14_FROM_PTR_RSI CMT_ASM(".byte 0X4C, 0X3B, 0X36 # cmpq (%rsi), %r14")
#define CMP_R14_FROM_PTR_RBP CMT_ASM(".byte 0X4C, 0X3B, 0X75, 0X00 # cmpq (%rbp), %r14")
#define CMP_R14_FROM_PTR_RSP CMT_ASM(".byte 0X4C, 0X3B, 0X34, 0X24 # cmpq (%rsp), %r14")
#define CMP_R14_FROM_PTR_R8 CMT_ASM(".byte 0X4D, 0X3B, 0X30 # cmpq (%r8), %r14")
#define CMP_R14_FROM_PTR_R9 CMT_ASM(".byte 0X4D, 0X3B, 0X31 # cmpq (%r9), %r14")
#define CMP_R14_FROM_PTR_R10 CMT_ASM(".byte 0X4D, 0X3B, 0X32 # cmpq (%r10), %r14")
#define CMP_R14_FROM_PTR_R11 CMT_ASM(".byte 0X4D, 0X3B, 0X33 # cmpq (%r11), %r14")
#define CMP_R14_FROM_PTR_R12 CMT_ASM(".byte 0X4D, 0X3B, 0X34, 0X24 # cmpq (%r12), %r14")
#define CMP_R14_FROM_PTR_R13 CMT_ASM(".byte 0X4D, 0X3B, 0X75, 0X00 # cmpq (%r13), %r14")
#define CMP_R14_FROM_PTR_R14 CMT_ASM(".byte 0X4D, 0X3B, 0X36 # cmpq (%r14), %r14")
#define CMP_R14_FROM_PTR_R15 CMT_ASM(".byte 0X4D, 0X3B, 0X37 # cmpq (%r15), %r14")
#define CMP_R14_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0X30 # cmpq (%eax), %r14")
#define CMP_R14_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0X33 # cmpq (%ebx), %r14")
#define CMP_R14_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0X31 # cmpq (%ecx), %r14")
#define CMP_R14_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0X32 # cmpq (%edx), %r14")
#define CMP_R14_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0X37 # cmpq (%edi), %r14")
#define CMP_R14_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0X36 # cmpq (%esi), %r14")
#define CMP_R14_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0X75, 0X00 # cmpq (%ebp), %r14")
#define CMP_R14_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0X34, 0X24 # cmpq (%esp), %r14")

#define CMP_R15_FROM_PTR_RAX CMT_ASM(".byte 0X4C, 0X3B, 0X38 # cmpq (%rax), %r15")
#define CMP_R15_FROM_PTR_RBX CMT_ASM(".byte 0X4C, 0X3B, 0X3B # cmpq (%rbx), %r15")
#define CMP_R15_FROM_PTR_RCX CMT_ASM(".byte 0X4C, 0X3B, 0X39 # cmpq (%rcx), %r15")
#define CMP_R15_FROM_PTR_RDX CMT_ASM(".byte 0X4C, 0X3B, 0X3A # cmpq (%rdx), %r15")
#define CMP_R15_FROM_PTR_RDI CMT_ASM(".byte 0X4C, 0X3B, 0X3F # cmpq (%rdi), %r15")
#define CMP_R15_FROM_PTR_RSI CMT_ASM(".byte 0X4C, 0X3B, 0X3E # cmpq (%rsi), %r15")
#define CMP_R15_FROM_PTR_RBP CMT_ASM(".byte 0X4C, 0X3B, 0X7D, 0X00 # cmpq (%rbp), %r15")
#define CMP_R15_FROM_PTR_RSP CMT_ASM(".byte 0X4C, 0X3B, 0X3C, 0X24 # cmpq (%rsp), %r15")
#define CMP_R15_FROM_PTR_R8 CMT_ASM(".byte 0X4D, 0X3B, 0X38 # cmpq (%r8), %r15")
#define CMP_R15_FROM_PTR_R9 CMT_ASM(".byte 0X4D, 0X3B, 0X39 # cmpq (%r9), %r15")
#define CMP_R15_FROM_PTR_R10 CMT_ASM(".byte 0X4D, 0X3B, 0X3A # cmpq (%r10), %r15")
#define CMP_R15_FROM_PTR_R11 CMT_ASM(".byte 0X4D, 0X3B, 0X3B # cmpq (%r11), %r15")
#define CMP_R15_FROM_PTR_R12 CMT_ASM(".byte 0X4D, 0X3B, 0X3C, 0X24 # cmpq (%r12), %r15")
#define CMP_R15_FROM_PTR_R13 CMT_ASM(".byte 0X4D, 0X3B, 0X7D, 0X00 # cmpq (%r13), %r15")
#define CMP_R15_FROM_PTR_R14 CMT_ASM(".byte 0X4D, 0X3B, 0X3E # cmpq (%r14), %r15")
#define CMP_R15_FROM_PTR_R15 CMT_ASM(".byte 0X4D, 0X3B, 0X3F # cmpq (%r15), %r15")
#define CMP_R15_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0X38 # cmpq (%eax), %r15")
#define CMP_R15_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0X3B # cmpq (%ebx), %r15")
#define CMP_R15_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0X39 # cmpq (%ecx), %r15")
#define CMP_R15_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0X3A # cmpq (%edx), %r15")
#define CMP_R15_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0X3F # cmpq (%edi), %r15")
#define CMP_R15_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0X3E # cmpq (%esi), %r15")
#define CMP_R15_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0X7D, 0X00 # cmpq (%ebp), %r15")
#define CMP_R15_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0X3C, 0X24 # cmpq (%esp), %r15")

#define CMP_RAX_TO_PTR_RAX CMT_ASM(".byte 0X48, 0X39, 0X00 # cmpq %rax, (%rax)")
#define CMP_RAX_TO_PTR_RBX CMT_ASM(".byte 0X48, 0X39, 0X03 # cmpq %rax, (%rbx)")
#define CMP_RAX_TO_PTR_RCX CMT_ASM(".byte 0X48, 0X39, 0X01 # cmpq %rax, (%rcx)")
#define CMP_RAX_TO_PTR_RDX CMT_ASM(".byte 0X48, 0X39, 0X02 # cmpq %rax, (%rdx)")
#define CMP_RAX_TO_PTR_RDI CMT_ASM(".byte 0X48, 0X39, 0X07 # cmpq %rax, (%rdi)")
#define CMP_RAX_TO_PTR_RSI CMT_ASM(".byte 0X48, 0X39, 0X06 # cmpq %rax, (%rsi)")
#define CMP_RAX_TO_PTR_RBP CMT_ASM(".byte 0X48, 0X39, 0X45, 0X00 # cmpq %rax, (%rbp)")
#define CMP_RAX_TO_PTR_RSP CMT_ASM(".byte 0X48, 0X39, 0X04, 0X24 # cmpq %rax, (%rsp)")
#define CMP_RAX_TO_PTR_R8 CMT_ASM(".byte 0X49, 0X39, 0X00 # cmpq %rax, (%r8)")
#define CMP_RAX_TO_PTR_R9 CMT_ASM(".byte 0X49, 0X39, 0X01 # cmpq %rax, (%r9)")
#define CMP_RAX_TO_PTR_R10 CMT_ASM(".byte 0X49, 0X39, 0X02 # cmpq %rax, (%r10)")
#define CMP_RAX_TO_PTR_R11 CMT_ASM(".byte 0X49, 0X39, 0X03 # cmpq %rax, (%r11)")
#define CMP_RAX_TO_PTR_R12 CMT_ASM(".byte 0X49, 0X39, 0X04, 0X24 # cmpq %rax, (%r12)")
#define CMP_RAX_TO_PTR_R13 CMT_ASM(".byte 0X49, 0X39, 0X45, 0X00 # cmpq %rax, (%r13)")
#define CMP_RAX_TO_PTR_R14 CMT_ASM(".byte 0X49, 0X39, 0X06 # cmpq %rax, (%r14)")
#define CMP_RAX_TO_PTR_R15 CMT_ASM(".byte 0X49, 0X39, 0X07 # cmpq %rax, (%r15)")
#define CMP_RAX_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X39, 0X00 # cmpq %rax, (%eax)")
#define CMP_RAX_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X39, 0X03 # cmpq %rax, (%ebx)")
#define CMP_RAX_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X39, 0X01 # cmpq %rax, (%ecx)")
#define CMP_RAX_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X39, 0X02 # cmpq %rax, (%edx)")
#define CMP_RAX_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X39, 0X07 # cmpq %rax, (%edi)")
#define CMP_RAX_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X39, 0X06 # cmpq %rax, (%esi)")
#define CMP_RAX_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X39, 0X45, 0X00 # cmpq %rax, (%ebp)")
#define CMP_RAX_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X39, 0X04, 0X24 # cmpq %rax, (%esp)")

#define CMP_RBX_TO_PTR_RAX CMT_ASM(".byte 0X48, 0X39, 0X18 # cmpq %rbx, (%rax)")
#define CMP_RBX_TO_PTR_RBX CMT_ASM(".byte 0X48, 0X39, 0X1B # cmpq %rbx, (%rbx)")
#define CMP_RBX_TO_PTR_RCX CMT_ASM(".byte 0X48, 0X39, 0X19 # cmpq %rbx, (%rcx)")
#define CMP_RBX_TO_PTR_RDX CMT_ASM(".byte 0X48, 0X39, 0X1A # cmpq %rbx, (%rdx)")
#define CMP_RBX_TO_PTR_RDI CMT_ASM(".byte 0X48, 0X39, 0X1F # cmpq %rbx, (%rdi)")
#define CMP_RBX_TO_PTR_RSI CMT_ASM(".byte 0X48, 0X39, 0X1E # cmpq %rbx, (%rsi)")
#define CMP_RBX_TO_PTR_RBP CMT_ASM(".byte 0X48, 0X39, 0X5D, 0X00 # cmpq %rbx, (%rbp)")
#define CMP_RBX_TO_PTR_RSP CMT_ASM(".byte 0X48, 0X39, 0X1C, 0X24 # cmpq %rbx, (%rsp)")
#define CMP_RBX_TO_PTR_R8 CMT_ASM(".byte 0X49, 0X39, 0X18 # cmpq %rbx, (%r8)")
#define CMP_RBX_TO_PTR_R9 CMT_ASM(".byte 0X49, 0X39, 0X19 # cmpq %rbx, (%r9)")
#define CMP_RBX_TO_PTR_R10 CMT_ASM(".byte 0X49, 0X39, 0X1A # cmpq %rbx, (%r10)")
#define CMP_RBX_TO_PTR_R11 CMT_ASM(".byte 0X49, 0X39, 0X1B # cmpq %rbx, (%r11)")
#define CMP_RBX_TO_PTR_R12 CMT_ASM(".byte 0X49, 0X39, 0X1C, 0X24 # cmpq %rbx, (%r12)")
#define CMP_RBX_TO_PTR_R13 CMT_ASM(".byte 0X49, 0X39, 0X5D, 0X00 # cmpq %rbx, (%r13)")
#define CMP_RBX_TO_PTR_R14 CMT_ASM(".byte 0X49, 0X39, 0X1E # cmpq %rbx, (%r14)")
#define CMP_RBX_TO_PTR_R15 CMT_ASM(".byte 0X49, 0X39, 0X1F # cmpq %rbx, (%r15)")
#define CMP_RBX_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X39, 0X18 # cmpq %rbx, (%eax)")
#define CMP_RBX_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X39, 0X1B # cmpq %rbx, (%ebx)")
#define CMP_RBX_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X39, 0X19 # cmpq %rbx, (%ecx)")
#define CMP_RBX_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X39, 0X1A # cmpq %rbx, (%edx)")
#define CMP_RBX_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X39, 0X1F # cmpq %rbx, (%edi)")
#define CMP_RBX_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X39, 0X1E # cmpq %rbx, (%esi)")
#define CMP_RBX_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X39, 0X5D, 0X00 # cmpq %rbx, (%ebp)")
#define CMP_RBX_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X39, 0X1C, 0X24 # cmpq %rbx, (%esp)")

#define CMP_RCX_TO_PTR_RAX CMT_ASM(".byte 0X48, 0X39, 0X08 # cmpq %rcx, (%rax)")
#define CMP_RCX_TO_PTR_RBX CMT_ASM(".byte 0X48, 0X39, 0X0B # cmpq %rcx, (%rbx)")
#define CMP_RCX_TO_PTR_RCX CMT_ASM(".byte 0X48, 0X39, 0X09 # cmpq %rcx, (%rcx)")
#define CMP_RCX_TO_PTR_RDX CMT_ASM(".byte 0X48, 0X39, 0X0A # cmpq %rcx, (%rdx)")
#define CMP_RCX_TO_PTR_RDI CMT_ASM(".byte 0X48, 0X39, 0X0F # cmpq %rcx, (%rdi)")
#define CMP_RCX_TO_PTR_RSI CMT_ASM(".byte 0X48, 0X39, 0X0E # cmpq %rcx, (%rsi)")
#define CMP_RCX_TO_PTR_RBP CMT_ASM(".byte 0X48, 0X39, 0X4D, 0X00 # cmpq %rcx, (%rbp)")
#define CMP_RCX_TO_PTR_RSP CMT_ASM(".byte 0X48, 0X39, 0X0C, 0X24 # cmpq %rcx, (%rsp)")
#define CMP_RCX_TO_PTR_R8 CMT_ASM(".byte 0X49, 0X39, 0X08 # cmpq %rcx, (%r8)")
#define CMP_RCX_TO_PTR_R9 CMT_ASM(".byte 0X49, 0X39, 0X09 # cmpq %rcx, (%r9)")
#define CMP_RCX_TO_PTR_R10 CMT_ASM(".byte 0X49, 0X39, 0X0A # cmpq %rcx, (%r10)")
#define CMP_RCX_TO_PTR_R11 CMT_ASM(".byte 0X49, 0X39, 0X0B # cmpq %rcx, (%r11)")
#define CMP_RCX_TO_PTR_R12 CMT_ASM(".byte 0X49, 0X39, 0X0C, 0X24 # cmpq %rcx, (%r12)")
#define CMP_RCX_TO_PTR_R13 CMT_ASM(".byte 0X49, 0X39, 0X4D, 0X00 # cmpq %rcx, (%r13)")
#define CMP_RCX_TO_PTR_R14 CMT_ASM(".byte 0X49, 0X39, 0X0E # cmpq %rcx, (%r14)")
#define CMP_RCX_TO_PTR_R15 CMT_ASM(".byte 0X49, 0X39, 0X0F # cmpq %rcx, (%r15)")
#define CMP_RCX_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X39, 0X08 # cmpq %rcx, (%eax)")
#define CMP_RCX_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X39, 0X0B # cmpq %rcx, (%ebx)")
#define CMP_RCX_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X39, 0X09 # cmpq %rcx, (%ecx)")
#define CMP_RCX_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X39, 0X0A # cmpq %rcx, (%edx)")
#define CMP_RCX_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X39, 0X0F # cmpq %rcx, (%edi)")
#define CMP_RCX_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X39, 0X0E # cmpq %rcx, (%esi)")
#define CMP_RCX_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X39, 0X4D, 0X00 # cmpq %rcx, (%ebp)")
#define CMP_RCX_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X39, 0X0C, 0X24 # cmpq %rcx, (%esp)")

#define CMP_RDX_TO_PTR_RAX CMT_ASM(".byte 0X48, 0X39, 0X10 # cmpq %rdx, (%rax)")
#define CMP_RDX_TO_PTR_RBX CMT_ASM(".byte 0X48, 0X39, 0X13 # cmpq %rdx, (%rbx)")
#define CMP_RDX_TO_PTR_RCX CMT_ASM(".byte 0X48, 0X39, 0X11 # cmpq %rdx, (%rcx)")
#define CMP_RDX_TO_PTR_RDX CMT_ASM(".byte 0X48, 0X39, 0X12 # cmpq %rdx, (%rdx)")
#define CMP_RDX_TO_PTR_RDI CMT_ASM(".byte 0X48, 0X39, 0X17 # cmpq %rdx, (%rdi)")
#define CMP_RDX_TO_PTR_RSI CMT_ASM(".byte 0X48, 0X39, 0X16 # cmpq %rdx, (%rsi)")
#define CMP_RDX_TO_PTR_RBP CMT_ASM(".byte 0X48, 0X39, 0X55, 0X00 # cmpq %rdx, (%rbp)")
#define CMP_RDX_TO_PTR_RSP CMT_ASM(".byte 0X48, 0X39, 0X14, 0X24 # cmpq %rdx, (%rsp)")
#define CMP_RDX_TO_PTR_R8 CMT_ASM(".byte 0X49, 0X39, 0X10 # cmpq %rdx, (%r8)")
#define CMP_RDX_TO_PTR_R9 CMT_ASM(".byte 0X49, 0X39, 0X11 # cmpq %rdx, (%r9)")
#define CMP_RDX_TO_PTR_R10 CMT_ASM(".byte 0X49, 0X39, 0X12 # cmpq %rdx, (%r10)")
#define CMP_RDX_TO_PTR_R11 CMT_ASM(".byte 0X49, 0X39, 0X13 # cmpq %rdx, (%r11)")
#define CMP_RDX_TO_PTR_R12 CMT_ASM(".byte 0X49, 0X39, 0X14, 0X24 # cmpq %rdx, (%r12)")
#define CMP_RDX_TO_PTR_R13 CMT_ASM(".byte 0X49, 0X39, 0X55, 0X00 # cmpq %rdx, (%r13)")
#define CMP_RDX_TO_PTR_R14 CMT_ASM(".byte 0X49, 0X39, 0X16 # cmpq %rdx, (%r14)")
#define CMP_RDX_TO_PTR_R15 CMT_ASM(".byte 0X49, 0X39, 0X17 # cmpq %rdx, (%r15)")
#define CMP_RDX_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X39, 0X10 # cmpq %rdx, (%eax)")
#define CMP_RDX_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X39, 0X13 # cmpq %rdx, (%ebx)")
#define CMP_RDX_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X39, 0X11 # cmpq %rdx, (%ecx)")
#define CMP_RDX_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X39, 0X12 # cmpq %rdx, (%edx)")
#define CMP_RDX_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X39, 0X17 # cmpq %rdx, (%edi)")
#define CMP_RDX_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X39, 0X16 # cmpq %rdx, (%esi)")
#define CMP_RDX_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X39, 0X55, 0X00 # cmpq %rdx, (%ebp)")
#define CMP_RDX_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X39, 0X14, 0X24 # cmpq %rdx, (%esp)")

#define CMP_RDI_TO_PTR_RAX CMT_ASM(".byte 0X48, 0X39, 0X38 # cmpq %rdi, (%rax)")
#define CMP_RDI_TO_PTR_RBX CMT_ASM(".byte 0X48, 0X39, 0X3B # cmpq %rdi, (%rbx)")
#define CMP_RDI_TO_PTR_RCX CMT_ASM(".byte 0X48, 0X39, 0X39 # cmpq %rdi, (%rcx)")
#define CMP_RDI_TO_PTR_RDX CMT_ASM(".byte 0X48, 0X39, 0X3A # cmpq %rdi, (%rdx)")
#define CMP_RDI_TO_PTR_RDI CMT_ASM(".byte 0X48, 0X39, 0X3F # cmpq %rdi, (%rdi)")
#define CMP_RDI_TO_PTR_RSI CMT_ASM(".byte 0X48, 0X39, 0X3E # cmpq %rdi, (%rsi)")
#define CMP_RDI_TO_PTR_RBP CMT_ASM(".byte 0X48, 0X39, 0X7D, 0X00 # cmpq %rdi, (%rbp)")
#define CMP_RDI_TO_PTR_RSP CMT_ASM(".byte 0X48, 0X39, 0X3C, 0X24 # cmpq %rdi, (%rsp)")
#define CMP_RDI_TO_PTR_R8 CMT_ASM(".byte 0X49, 0X39, 0X38 # cmpq %rdi, (%r8)")
#define CMP_RDI_TO_PTR_R9 CMT_ASM(".byte 0X49, 0X39, 0X39 # cmpq %rdi, (%r9)")
#define CMP_RDI_TO_PTR_R10 CMT_ASM(".byte 0X49, 0X39, 0X3A # cmpq %rdi, (%r10)")
#define CMP_RDI_TO_PTR_R11 CMT_ASM(".byte 0X49, 0X39, 0X3B # cmpq %rdi, (%r11)")
#define CMP_RDI_TO_PTR_R12 CMT_ASM(".byte 0X49, 0X39, 0X3C, 0X24 # cmpq %rdi, (%r12)")
#define CMP_RDI_TO_PTR_R13 CMT_ASM(".byte 0X49, 0X39, 0X7D, 0X00 # cmpq %rdi, (%r13)")
#define CMP_RDI_TO_PTR_R14 CMT_ASM(".byte 0X49, 0X39, 0X3E # cmpq %rdi, (%r14)")
#define CMP_RDI_TO_PTR_R15 CMT_ASM(".byte 0X49, 0X39, 0X3F # cmpq %rdi, (%r15)")
#define CMP_RDI_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X39, 0X38 # cmpq %rdi, (%eax)")
#define CMP_RDI_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X39, 0X3B # cmpq %rdi, (%ebx)")
#define CMP_RDI_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X39, 0X39 # cmpq %rdi, (%ecx)")
#define CMP_RDI_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X39, 0X3A # cmpq %rdi, (%edx)")
#define CMP_RDI_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X39, 0X3F # cmpq %rdi, (%edi)")
#define CMP_RDI_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X39, 0X3E # cmpq %rdi, (%esi)")
#define CMP_RDI_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X39, 0X7D, 0X00 # cmpq %rdi, (%ebp)")
#define CMP_RDI_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X39, 0X3C, 0X24 # cmpq %rdi, (%esp)")

#define CMP_RSI_TO_PTR_RAX CMT_ASM(".byte 0X48, 0X39, 0X30 # cmpq %rsi, (%rax)")
#define CMP_RSI_TO_PTR_RBX CMT_ASM(".byte 0X48, 0X39, 0X33 # cmpq %rsi, (%rbx)")
#define CMP_RSI_TO_PTR_RCX CMT_ASM(".byte 0X48, 0X39, 0X31 # cmpq %rsi, (%rcx)")
#define CMP_RSI_TO_PTR_RDX CMT_ASM(".byte 0X48, 0X39, 0X32 # cmpq %rsi, (%rdx)")
#define CMP_RSI_TO_PTR_RDI CMT_ASM(".byte 0X48, 0X39, 0X37 # cmpq %rsi, (%rdi)")
#define CMP_RSI_TO_PTR_RSI CMT_ASM(".byte 0X48, 0X39, 0X36 # cmpq %rsi, (%rsi)")
#define CMP_RSI_TO_PTR_RBP CMT_ASM(".byte 0X48, 0X39, 0X75, 0X00 # cmpq %rsi, (%rbp)")
#define CMP_RSI_TO_PTR_RSP CMT_ASM(".byte 0X48, 0X39, 0X34, 0X24 # cmpq %rsi, (%rsp)")
#define CMP_RSI_TO_PTR_R8 CMT_ASM(".byte 0X49, 0X39, 0X30 # cmpq %rsi, (%r8)")
#define CMP_RSI_TO_PTR_R9 CMT_ASM(".byte 0X49, 0X39, 0X31 # cmpq %rsi, (%r9)")
#define CMP_RSI_TO_PTR_R10 CMT_ASM(".byte 0X49, 0X39, 0X32 # cmpq %rsi, (%r10)")
#define CMP_RSI_TO_PTR_R11 CMT_ASM(".byte 0X49, 0X39, 0X33 # cmpq %rsi, (%r11)")
#define CMP_RSI_TO_PTR_R12 CMT_ASM(".byte 0X49, 0X39, 0X34, 0X24 # cmpq %rsi, (%r12)")
#define CMP_RSI_TO_PTR_R13 CMT_ASM(".byte 0X49, 0X39, 0X75, 0X00 # cmpq %rsi, (%r13)")
#define CMP_RSI_TO_PTR_R14 CMT_ASM(".byte 0X49, 0X39, 0X36 # cmpq %rsi, (%r14)")
#define CMP_RSI_TO_PTR_R15 CMT_ASM(".byte 0X49, 0X39, 0X37 # cmpq %rsi, (%r15)")
#define CMP_RSI_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X39, 0X30 # cmpq %rsi, (%eax)")
#define CMP_RSI_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X39, 0X33 # cmpq %rsi, (%ebx)")
#define CMP_RSI_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X39, 0X31 # cmpq %rsi, (%ecx)")
#define CMP_RSI_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X39, 0X32 # cmpq %rsi, (%edx)")
#define CMP_RSI_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X39, 0X37 # cmpq %rsi, (%edi)")
#define CMP_RSI_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X39, 0X36 # cmpq %rsi, (%esi)")
#define CMP_RSI_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X39, 0X75, 0X00 # cmpq %rsi, (%ebp)")
#define CMP_RSI_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X39, 0X34, 0X24 # cmpq %rsi, (%esp)")

#define CMP_RBP_TO_PTR_RAX CMT_ASM(".byte 0X48, 0X39, 0X28 # cmpq %rbp, (%rax)")
#define CMP_RBP_TO_PTR_RBX CMT_ASM(".byte 0X48, 0X39, 0X2B # cmpq %rbp, (%rbx)")
#define CMP_RBP_TO_PTR_RCX CMT_ASM(".byte 0X48, 0X39, 0X29 # cmpq %rbp, (%rcx)")
#define CMP_RBP_TO_PTR_RDX CMT_ASM(".byte 0X48, 0X39, 0X2A # cmpq %rbp, (%rdx)")
#define CMP_RBP_TO_PTR_RDI CMT_ASM(".byte 0X48, 0X39, 0X2F # cmpq %rbp, (%rdi)")
#define CMP_RBP_TO_PTR_RSI CMT_ASM(".byte 0X48, 0X39, 0X2E # cmpq %rbp, (%rsi)")
#define CMP_RBP_TO_PTR_RBP CMT_ASM(".byte 0X48, 0X39, 0X6D, 0X00 # cmpq %rbp, (%rbp)")
#define CMP_RBP_TO_PTR_RSP CMT_ASM(".byte 0X48, 0X39, 0X2C, 0X24 # cmpq %rbp, (%rsp)")
#define CMP_RBP_TO_PTR_R8 CMT_ASM(".byte 0X49, 0X39, 0X28 # cmpq %rbp, (%r8)")
#define CMP_RBP_TO_PTR_R9 CMT_ASM(".byte 0X49, 0X39, 0X29 # cmpq %rbp, (%r9)")
#define CMP_RBP_TO_PTR_R10 CMT_ASM(".byte 0X49, 0X39, 0X2A # cmpq %rbp, (%r10)")
#define CMP_RBP_TO_PTR_R11 CMT_ASM(".byte 0X49, 0X39, 0X2B # cmpq %rbp, (%r11)")
#define CMP_RBP_TO_PTR_R12 CMT_ASM(".byte 0X49, 0X39, 0X2C, 0X24 # cmpq %rbp, (%r12)")
#define CMP_RBP_TO_PTR_R13 CMT_ASM(".byte 0X49, 0X39, 0X6D, 0X00 # cmpq %rbp, (%r13)")
#define CMP_RBP_TO_PTR_R14 CMT_ASM(".byte 0X49, 0X39, 0X2E # cmpq %rbp, (%r14)")
#define CMP_RBP_TO_PTR_R15 CMT_ASM(".byte 0X49, 0X39, 0X2F # cmpq %rbp, (%r15)")
#define CMP_RBP_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X39, 0X28 # cmpq %rbp, (%eax)")
#define CMP_RBP_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X39, 0X2B # cmpq %rbp, (%ebx)")
#define CMP_RBP_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X39, 0X29 # cmpq %rbp, (%ecx)")
#define CMP_RBP_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X39, 0X2A # cmpq %rbp, (%edx)")
#define CMP_RBP_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X39, 0X2F # cmpq %rbp, (%edi)")
#define CMP_RBP_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X39, 0X2E # cmpq %rbp, (%esi)")
#define CMP_RBP_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X39, 0X6D, 0X00 # cmpq %rbp, (%ebp)")
#define CMP_RBP_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X39, 0X2C, 0X24 # cmpq %rbp, (%esp)")

#define CMP_RSP_TO_PTR_RAX CMT_ASM(".byte 0X48, 0X39, 0X20 # cmpq %rsp, (%rax)")
#define CMP_RSP_TO_PTR_RBX CMT_ASM(".byte 0X48, 0X39, 0X23 # cmpq %rsp, (%rbx)")
#define CMP_RSP_TO_PTR_RCX CMT_ASM(".byte 0X48, 0X39, 0X21 # cmpq %rsp, (%rcx)")
#define CMP_RSP_TO_PTR_RDX CMT_ASM(".byte 0X48, 0X39, 0X22 # cmpq %rsp, (%rdx)")
#define CMP_RSP_TO_PTR_RDI CMT_ASM(".byte 0X48, 0X39, 0X27 # cmpq %rsp, (%rdi)")
#define CMP_RSP_TO_PTR_RSI CMT_ASM(".byte 0X48, 0X39, 0X26 # cmpq %rsp, (%rsi)")
#define CMP_RSP_TO_PTR_RBP CMT_ASM(".byte 0X48, 0X39, 0X65, 0X00 # cmpq %rsp, (%rbp)")
#define CMP_RSP_TO_PTR_RSP CMT_ASM(".byte 0X48, 0X39, 0X24, 0X24 # cmpq %rsp, (%rsp)")
#define CMP_RSP_TO_PTR_R8 CMT_ASM(".byte 0X49, 0X39, 0X20 # cmpq %rsp, (%r8)")
#define CMP_RSP_TO_PTR_R9 CMT_ASM(".byte 0X49, 0X39, 0X21 # cmpq %rsp, (%r9)")
#define CMP_RSP_TO_PTR_R10 CMT_ASM(".byte 0X49, 0X39, 0X22 # cmpq %rsp, (%r10)")
#define CMP_RSP_TO_PTR_R11 CMT_ASM(".byte 0X49, 0X39, 0X23 # cmpq %rsp, (%r11)")
#define CMP_RSP_TO_PTR_R12 CMT_ASM(".byte 0X49, 0X39, 0X24, 0X24 # cmpq %rsp, (%r12)")
#define CMP_RSP_TO_PTR_R13 CMT_ASM(".byte 0X49, 0X39, 0X65, 0X00 # cmpq %rsp, (%r13)")
#define CMP_RSP_TO_PTR_R14 CMT_ASM(".byte 0X49, 0X39, 0X26 # cmpq %rsp, (%r14)")
#define CMP_RSP_TO_PTR_R15 CMT_ASM(".byte 0X49, 0X39, 0X27 # cmpq %rsp, (%r15)")
#define CMP_RSP_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X39, 0X20 # cmpq %rsp, (%eax)")
#define CMP_RSP_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X39, 0X23 # cmpq %rsp, (%ebx)")
#define CMP_RSP_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X39, 0X21 # cmpq %rsp, (%ecx)")
#define CMP_RSP_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X39, 0X22 # cmpq %rsp, (%edx)")
#define CMP_RSP_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X39, 0X27 # cmpq %rsp, (%edi)")
#define CMP_RSP_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X39, 0X26 # cmpq %rsp, (%esi)")
#define CMP_RSP_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X39, 0X65, 0X00 # cmpq %rsp, (%ebp)")
#define CMP_RSP_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X39, 0X24, 0X24 # cmpq %rsp, (%esp)")

#define CMP_R8_TO_PTR_RAX CMT_ASM(".byte 0X4C, 0X39, 0X00 # cmpq %r8, (%rax)")
#define CMP_R8_TO_PTR_RBX CMT_ASM(".byte 0X4C, 0X39, 0X03 # cmpq %r8, (%rbx)")
#define CMP_R8_TO_PTR_RCX CMT_ASM(".byte 0X4C, 0X39, 0X01 # cmpq %r8, (%rcx)")
#define CMP_R8_TO_PTR_RDX CMT_ASM(".byte 0X4C, 0X39, 0X02 # cmpq %r8, (%rdx)")
#define CMP_R8_TO_PTR_RDI CMT_ASM(".byte 0X4C, 0X39, 0X07 # cmpq %r8, (%rdi)")
#define CMP_R8_TO_PTR_RSI CMT_ASM(".byte 0X4C, 0X39, 0X06 # cmpq %r8, (%rsi)")
#define CMP_R8_TO_PTR_RBP CMT_ASM(".byte 0X4C, 0X39, 0X45, 0X00 # cmpq %r8, (%rbp)")
#define CMP_R8_TO_PTR_RSP CMT_ASM(".byte 0X4C, 0X39, 0X04, 0X24 # cmpq %r8, (%rsp)")
#define CMP_R8_TO_PTR_R8 CMT_ASM(".byte 0X4D, 0X39, 0X00 # cmpq %r8, (%r8)")
#define CMP_R8_TO_PTR_R9 CMT_ASM(".byte 0X4D, 0X39, 0X01 # cmpq %r8, (%r9)")
#define CMP_R8_TO_PTR_R10 CMT_ASM(".byte 0X4D, 0X39, 0X02 # cmpq %r8, (%r10)")
#define CMP_R8_TO_PTR_R11 CMT_ASM(".byte 0X4D, 0X39, 0X03 # cmpq %r8, (%r11)")
#define CMP_R8_TO_PTR_R12 CMT_ASM(".byte 0X4D, 0X39, 0X04, 0X24 # cmpq %r8, (%r12)")
#define CMP_R8_TO_PTR_R13 CMT_ASM(".byte 0X4D, 0X39, 0X45, 0X00 # cmpq %r8, (%r13)")
#define CMP_R8_TO_PTR_R14 CMT_ASM(".byte 0X4D, 0X39, 0X06 # cmpq %r8, (%r14)")
#define CMP_R8_TO_PTR_R15 CMT_ASM(".byte 0X4D, 0X39, 0X07 # cmpq %r8, (%r15)")
#define CMP_R8_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X39, 0X00 # cmpq %r8, (%eax)")
#define CMP_R8_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X39, 0X03 # cmpq %r8, (%ebx)")
#define CMP_R8_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X39, 0X01 # cmpq %r8, (%ecx)")
#define CMP_R8_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X39, 0X02 # cmpq %r8, (%edx)")
#define CMP_R8_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X39, 0X07 # cmpq %r8, (%edi)")
#define CMP_R8_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X39, 0X06 # cmpq %r8, (%esi)")
#define CMP_R8_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X39, 0X45, 0X00 # cmpq %r8, (%ebp)")
#define CMP_R8_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X39, 0X04, 0X24 # cmpq %r8, (%esp)")

#define CMP_R9_TO_PTR_RAX CMT_ASM(".byte 0X4C, 0X39, 0X08 # cmpq %r9, (%rax)")
#define CMP_R9_TO_PTR_RBX CMT_ASM(".byte 0X4C, 0X39, 0X0B # cmpq %r9, (%rbx)")
#define CMP_R9_TO_PTR_RCX CMT_ASM(".byte 0X4C, 0X39, 0X09 # cmpq %r9, (%rcx)")
#define CMP_R9_TO_PTR_RDX CMT_ASM(".byte 0X4C, 0X39, 0X0A # cmpq %r9, (%rdx)")
#define CMP_R9_TO_PTR_RDI CMT_ASM(".byte 0X4C, 0X39, 0X0F # cmpq %r9, (%rdi)")
#define CMP_R9_TO_PTR_RSI CMT_ASM(".byte 0X4C, 0X39, 0X0E # cmpq %r9, (%rsi)")
#define CMP_R9_TO_PTR_RBP CMT_ASM(".byte 0X4C, 0X39, 0X4D, 0X00 # cmpq %r9, (%rbp)")
#define CMP_R9_TO_PTR_RSP CMT_ASM(".byte 0X4C, 0X39, 0X0C, 0X24 # cmpq %r9, (%rsp)")
#define CMP_R9_TO_PTR_R8 CMT_ASM(".byte 0X4D, 0X39, 0X08 # cmpq %r9, (%r8)")
#define CMP_R9_TO_PTR_R9 CMT_ASM(".byte 0X4D, 0X39, 0X09 # cmpq %r9, (%r9)")
#define CMP_R9_TO_PTR_R10 CMT_ASM(".byte 0X4D, 0X39, 0X0A # cmpq %r9, (%r10)")
#define CMP_R9_TO_PTR_R11 CMT_ASM(".byte 0X4D, 0X39, 0X0B # cmpq %r9, (%r11)")
#define CMP_R9_TO_PTR_R12 CMT_ASM(".byte 0X4D, 0X39, 0X0C, 0X24 # cmpq %r9, (%r12)")
#define CMP_R9_TO_PTR_R13 CMT_ASM(".byte 0X4D, 0X39, 0X4D, 0X00 # cmpq %r9, (%r13)")
#define CMP_R9_TO_PTR_R14 CMT_ASM(".byte 0X4D, 0X39, 0X0E # cmpq %r9, (%r14)")
#define CMP_R9_TO_PTR_R15 CMT_ASM(".byte 0X4D, 0X39, 0X0F # cmpq %r9, (%r15)")
#define CMP_R9_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X39, 0X08 # cmpq %r9, (%eax)")
#define CMP_R9_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X39, 0X0B # cmpq %r9, (%ebx)")
#define CMP_R9_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X39, 0X09 # cmpq %r9, (%ecx)")
#define CMP_R9_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X39, 0X0A # cmpq %r9, (%edx)")
#define CMP_R9_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X39, 0X0F # cmpq %r9, (%edi)")
#define CMP_R9_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X39, 0X0E # cmpq %r9, (%esi)")
#define CMP_R9_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X39, 0X4D, 0X00 # cmpq %r9, (%ebp)")
#define CMP_R9_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X39, 0X0C, 0X24 # cmpq %r9, (%esp)")

#define CMP_R10_TO_PTR_RAX CMT_ASM(".byte 0X4C, 0X39, 0X10 # cmpq %r10, (%rax)")
#define CMP_R10_TO_PTR_RBX CMT_ASM(".byte 0X4C, 0X39, 0X13 # cmpq %r10, (%rbx)")
#define CMP_R10_TO_PTR_RCX CMT_ASM(".byte 0X4C, 0X39, 0X11 # cmpq %r10, (%rcx)")
#define CMP_R10_TO_PTR_RDX CMT_ASM(".byte 0X4C, 0X39, 0X12 # cmpq %r10, (%rdx)")
#define CMP_R10_TO_PTR_RDI CMT_ASM(".byte 0X4C, 0X39, 0X17 # cmpq %r10, (%rdi)")
#define CMP_R10_TO_PTR_RSI CMT_ASM(".byte 0X4C, 0X39, 0X16 # cmpq %r10, (%rsi)")
#define CMP_R10_TO_PTR_RBP CMT_ASM(".byte 0X4C, 0X39, 0X55, 0X00 # cmpq %r10, (%rbp)")
#define CMP_R10_TO_PTR_RSP CMT_ASM(".byte 0X4C, 0X39, 0X14, 0X24 # cmpq %r10, (%rsp)")
#define CMP_R10_TO_PTR_R8 CMT_ASM(".byte 0X4D, 0X39, 0X10 # cmpq %r10, (%r8)")
#define CMP_R10_TO_PTR_R9 CMT_ASM(".byte 0X4D, 0X39, 0X11 # cmpq %r10, (%r9)")
#define CMP_R10_TO_PTR_R10 CMT_ASM(".byte 0X4D, 0X39, 0X12 # cmpq %r10, (%r10)")
#define CMP_R10_TO_PTR_R11 CMT_ASM(".byte 0X4D, 0X39, 0X13 # cmpq %r10, (%r11)")
#define CMP_R10_TO_PTR_R12 CMT_ASM(".byte 0X4D, 0X39, 0X14, 0X24 # cmpq %r10, (%r12)")
#define CMP_R10_TO_PTR_R13 CMT_ASM(".byte 0X4D, 0X39, 0X55, 0X00 # cmpq %r10, (%r13)")
#define CMP_R10_TO_PTR_R14 CMT_ASM(".byte 0X4D, 0X39, 0X16 # cmpq %r10, (%r14)")
#define CMP_R10_TO_PTR_R15 CMT_ASM(".byte 0X4D, 0X39, 0X17 # cmpq %r10, (%r15)")
#define CMP_R10_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X39, 0X10 # cmpq %r10, (%eax)")
#define CMP_R10_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X39, 0X13 # cmpq %r10, (%ebx)")
#define CMP_R10_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X39, 0X11 # cmpq %r10, (%ecx)")
#define CMP_R10_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X39, 0X12 # cmpq %r10, (%edx)")
#define CMP_R10_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X39, 0X17 # cmpq %r10, (%edi)")
#define CMP_R10_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X39, 0X16 # cmpq %r10, (%esi)")
#define CMP_R10_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X39, 0X55, 0X00 # cmpq %r10, (%ebp)")
#define CMP_R10_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X39, 0X14, 0X24 # cmpq %r10, (%esp)")

#define CMP_R11_TO_PTR_RAX CMT_ASM(".byte 0X4C, 0X39, 0X18 # cmpq %r11, (%rax)")
#define CMP_R11_TO_PTR_RBX CMT_ASM(".byte 0X4C, 0X39, 0X1B # cmpq %r11, (%rbx)")
#define CMP_R11_TO_PTR_RCX CMT_ASM(".byte 0X4C, 0X39, 0X19 # cmpq %r11, (%rcx)")
#define CMP_R11_TO_PTR_RDX CMT_ASM(".byte 0X4C, 0X39, 0X1A # cmpq %r11, (%rdx)")
#define CMP_R11_TO_PTR_RDI CMT_ASM(".byte 0X4C, 0X39, 0X1F # cmpq %r11, (%rdi)")
#define CMP_R11_TO_PTR_RSI CMT_ASM(".byte 0X4C, 0X39, 0X1E # cmpq %r11, (%rsi)")
#define CMP_R11_TO_PTR_RBP CMT_ASM(".byte 0X4C, 0X39, 0X5D, 0X00 # cmpq %r11, (%rbp)")
#define CMP_R11_TO_PTR_RSP CMT_ASM(".byte 0X4C, 0X39, 0X1C, 0X24 # cmpq %r11, (%rsp)")
#define CMP_R11_TO_PTR_R8 CMT_ASM(".byte 0X4D, 0X39, 0X18 # cmpq %r11, (%r8)")
#define CMP_R11_TO_PTR_R9 CMT_ASM(".byte 0X4D, 0X39, 0X19 # cmpq %r11, (%r9)")
#define CMP_R11_TO_PTR_R10 CMT_ASM(".byte 0X4D, 0X39, 0X1A # cmpq %r11, (%r10)")
#define CMP_R11_TO_PTR_R11 CMT_ASM(".byte 0X4D, 0X39, 0X1B # cmpq %r11, (%r11)")
#define CMP_R11_TO_PTR_R12 CMT_ASM(".byte 0X4D, 0X39, 0X1C, 0X24 # cmpq %r11, (%r12)")
#define CMP_R11_TO_PTR_R13 CMT_ASM(".byte 0X4D, 0X39, 0X5D, 0X00 # cmpq %r11, (%r13)")
#define CMP_R11_TO_PTR_R14 CMT_ASM(".byte 0X4D, 0X39, 0X1E # cmpq %r11, (%r14)")
#define CMP_R11_TO_PTR_R15 CMT_ASM(".byte 0X4D, 0X39, 0X1F # cmpq %r11, (%r15)")
#define CMP_R11_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X39, 0X18 # cmpq %r11, (%eax)")
#define CMP_R11_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X39, 0X1B # cmpq %r11, (%ebx)")
#define CMP_R11_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X39, 0X19 # cmpq %r11, (%ecx)")
#define CMP_R11_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X39, 0X1A # cmpq %r11, (%edx)")
#define CMP_R11_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X39, 0X1F # cmpq %r11, (%edi)")
#define CMP_R11_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X39, 0X1E # cmpq %r11, (%esi)")
#define CMP_R11_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X39, 0X5D, 0X00 # cmpq %r11, (%ebp)")
#define CMP_R11_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X39, 0X1C, 0X24 # cmpq %r11, (%esp)")

#define CMP_R12_TO_PTR_RAX CMT_ASM(".byte 0X4C, 0X39, 0X20 # cmpq %r12, (%rax)")
#define CMP_R12_TO_PTR_RBX CMT_ASM(".byte 0X4C, 0X39, 0X23 # cmpq %r12, (%rbx)")
#define CMP_R12_TO_PTR_RCX CMT_ASM(".byte 0X4C, 0X39, 0X21 # cmpq %r12, (%rcx)")
#define CMP_R12_TO_PTR_RDX CMT_ASM(".byte 0X4C, 0X39, 0X22 # cmpq %r12, (%rdx)")
#define CMP_R12_TO_PTR_RDI CMT_ASM(".byte 0X4C, 0X39, 0X27 # cmpq %r12, (%rdi)")
#define CMP_R12_TO_PTR_RSI CMT_ASM(".byte 0X4C, 0X39, 0X26 # cmpq %r12, (%rsi)")
#define CMP_R12_TO_PTR_RBP CMT_ASM(".byte 0X4C, 0X39, 0X65, 0X00 # cmpq %r12, (%rbp)")
#define CMP_R12_TO_PTR_RSP CMT_ASM(".byte 0X4C, 0X39, 0X24, 0X24 # cmpq %r12, (%rsp)")
#define CMP_R12_TO_PTR_R8 CMT_ASM(".byte 0X4D, 0X39, 0X20 # cmpq %r12, (%r8)")
#define CMP_R12_TO_PTR_R9 CMT_ASM(".byte 0X4D, 0X39, 0X21 # cmpq %r12, (%r9)")
#define CMP_R12_TO_PTR_R10 CMT_ASM(".byte 0X4D, 0X39, 0X22 # cmpq %r12, (%r10)")
#define CMP_R12_TO_PTR_R11 CMT_ASM(".byte 0X4D, 0X39, 0X23 # cmpq %r12, (%r11)")
#define CMP_R12_TO_PTR_R12 CMT_ASM(".byte 0X4D, 0X39, 0X24, 0X24 # cmpq %r12, (%r12)")
#define CMP_R12_TO_PTR_R13 CMT_ASM(".byte 0X4D, 0X39, 0X65, 0X00 # cmpq %r12, (%r13)")
#define CMP_R12_TO_PTR_R14 CMT_ASM(".byte 0X4D, 0X39, 0X26 # cmpq %r12, (%r14)")
#define CMP_R12_TO_PTR_R15 CMT_ASM(".byte 0X4D, 0X39, 0X27 # cmpq %r12, (%r15)")
#define CMP_R12_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X39, 0X20 # cmpq %r12, (%eax)")
#define CMP_R12_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X39, 0X23 # cmpq %r12, (%ebx)")
#define CMP_R12_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X39, 0X21 # cmpq %r12, (%ecx)")
#define CMP_R12_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X39, 0X22 # cmpq %r12, (%edx)")
#define CMP_R12_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X39, 0X27 # cmpq %r12, (%edi)")
#define CMP_R12_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X39, 0X26 # cmpq %r12, (%esi)")
#define CMP_R12_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X39, 0X65, 0X00 # cmpq %r12, (%ebp)")
#define CMP_R12_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X39, 0X24, 0X24 # cmpq %r12, (%esp)")

#define CMP_R13_TO_PTR_RAX CMT_ASM(".byte 0X4C, 0X39, 0X28 # cmpq %r13, (%rax)")
#define CMP_R13_TO_PTR_RBX CMT_ASM(".byte 0X4C, 0X39, 0X2B # cmpq %r13, (%rbx)")
#define CMP_R13_TO_PTR_RCX CMT_ASM(".byte 0X4C, 0X39, 0X29 # cmpq %r13, (%rcx)")
#define CMP_R13_TO_PTR_RDX CMT_ASM(".byte 0X4C, 0X39, 0X2A # cmpq %r13, (%rdx)")
#define CMP_R13_TO_PTR_RDI CMT_ASM(".byte 0X4C, 0X39, 0X2F # cmpq %r13, (%rdi)")
#define CMP_R13_TO_PTR_RSI CMT_ASM(".byte 0X4C, 0X39, 0X2E # cmpq %r13, (%rsi)")
#define CMP_R13_TO_PTR_RBP CMT_ASM(".byte 0X4C, 0X39, 0X6D, 0X00 # cmpq %r13, (%rbp)")
#define CMP_R13_TO_PTR_RSP CMT_ASM(".byte 0X4C, 0X39, 0X2C, 0X24 # cmpq %r13, (%rsp)")
#define CMP_R13_TO_PTR_R8 CMT_ASM(".byte 0X4D, 0X39, 0X28 # cmpq %r13, (%r8)")
#define CMP_R13_TO_PTR_R9 CMT_ASM(".byte 0X4D, 0X39, 0X29 # cmpq %r13, (%r9)")
#define CMP_R13_TO_PTR_R10 CMT_ASM(".byte 0X4D, 0X39, 0X2A # cmpq %r13, (%r10)")
#define CMP_R13_TO_PTR_R11 CMT_ASM(".byte 0X4D, 0X39, 0X2B # cmpq %r13, (%r11)")
#define CMP_R13_TO_PTR_R12 CMT_ASM(".byte 0X4D, 0X39, 0X2C, 0X24 # cmpq %r13, (%r12)")
#define CMP_R13_TO_PTR_R13 CMT_ASM(".byte 0X4D, 0X39, 0X6D, 0X00 # cmpq %r13, (%r13)")
#define CMP_R13_TO_PTR_R14 CMT_ASM(".byte 0X4D, 0X39, 0X2E # cmpq %r13, (%r14)")
#define CMP_R13_TO_PTR_R15 CMT_ASM(".byte 0X4D, 0X39, 0X2F # cmpq %r13, (%r15)")
#define CMP_R13_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X39, 0X28 # cmpq %r13, (%eax)")
#define CMP_R13_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X39, 0X2B # cmpq %r13, (%ebx)")
#define CMP_R13_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X39, 0X29 # cmpq %r13, (%ecx)")
#define CMP_R13_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X39, 0X2A # cmpq %r13, (%edx)")
#define CMP_R13_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X39, 0X2F # cmpq %r13, (%edi)")
#define CMP_R13_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X39, 0X2E # cmpq %r13, (%esi)")
#define CMP_R13_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X39, 0X6D, 0X00 # cmpq %r13, (%ebp)")
#define CMP_R13_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X39, 0X2C, 0X24 # cmpq %r13, (%esp)")

#define CMP_R14_TO_PTR_RAX CMT_ASM(".byte 0X4C, 0X39, 0X30 # cmpq %r14, (%rax)")
#define CMP_R14_TO_PTR_RBX CMT_ASM(".byte 0X4C, 0X39, 0X33 # cmpq %r14, (%rbx)")
#define CMP_R14_TO_PTR_RCX CMT_ASM(".byte 0X4C, 0X39, 0X31 # cmpq %r14, (%rcx)")
#define CMP_R14_TO_PTR_RDX CMT_ASM(".byte 0X4C, 0X39, 0X32 # cmpq %r14, (%rdx)")
#define CMP_R14_TO_PTR_RDI CMT_ASM(".byte 0X4C, 0X39, 0X37 # cmpq %r14, (%rdi)")
#define CMP_R14_TO_PTR_RSI CMT_ASM(".byte 0X4C, 0X39, 0X36 # cmpq %r14, (%rsi)")
#define CMP_R14_TO_PTR_RBP CMT_ASM(".byte 0X4C, 0X39, 0X75, 0X00 # cmpq %r14, (%rbp)")
#define CMP_R14_TO_PTR_RSP CMT_ASM(".byte 0X4C, 0X39, 0X34, 0X24 # cmpq %r14, (%rsp)")
#define CMP_R14_TO_PTR_R8 CMT_ASM(".byte 0X4D, 0X39, 0X30 # cmpq %r14, (%r8)")
#define CMP_R14_TO_PTR_R9 CMT_ASM(".byte 0X4D, 0X39, 0X31 # cmpq %r14, (%r9)")
#define CMP_R14_TO_PTR_R10 CMT_ASM(".byte 0X4D, 0X39, 0X32 # cmpq %r14, (%r10)")
#define CMP_R14_TO_PTR_R11 CMT_ASM(".byte 0X4D, 0X39, 0X33 # cmpq %r14, (%r11)")
#define CMP_R14_TO_PTR_R12 CMT_ASM(".byte 0X4D, 0X39, 0X34, 0X24 # cmpq %r14, (%r12)")
#define CMP_R14_TO_PTR_R13 CMT_ASM(".byte 0X4D, 0X39, 0X75, 0X00 # cmpq %r14, (%r13)")
#define CMP_R14_TO_PTR_R14 CMT_ASM(".byte 0X4D, 0X39, 0X36 # cmpq %r14, (%r14)")
#define CMP_R14_TO_PTR_R15 CMT_ASM(".byte 0X4D, 0X39, 0X37 # cmpq %r14, (%r15)")
#define CMP_R14_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X39, 0X30 # cmpq %r14, (%eax)")
#define CMP_R14_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X39, 0X33 # cmpq %r14, (%ebx)")
#define CMP_R14_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X39, 0X31 # cmpq %r14, (%ecx)")
#define CMP_R14_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X39, 0X32 # cmpq %r14, (%edx)")
#define CMP_R14_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X39, 0X37 # cmpq %r14, (%edi)")
#define CMP_R14_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X39, 0X36 # cmpq %r14, (%esi)")
#define CMP_R14_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X39, 0X75, 0X00 # cmpq %r14, (%ebp)")
#define CMP_R14_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X39, 0X34, 0X24 # cmpq %r14, (%esp)")

#define CMP_R15_TO_PTR_RAX CMT_ASM(".byte 0X4C, 0X39, 0X38 # cmpq %r15, (%rax)")
#define CMP_R15_TO_PTR_RBX CMT_ASM(".byte 0X4C, 0X39, 0X3B # cmpq %r15, (%rbx)")
#define CMP_R15_TO_PTR_RCX CMT_ASM(".byte 0X4C, 0X39, 0X39 # cmpq %r15, (%rcx)")
#define CMP_R15_TO_PTR_RDX CMT_ASM(".byte 0X4C, 0X39, 0X3A # cmpq %r15, (%rdx)")
#define CMP_R15_TO_PTR_RDI CMT_ASM(".byte 0X4C, 0X39, 0X3F # cmpq %r15, (%rdi)")
#define CMP_R15_TO_PTR_RSI CMT_ASM(".byte 0X4C, 0X39, 0X3E # cmpq %r15, (%rsi)")
#define CMP_R15_TO_PTR_RBP CMT_ASM(".byte 0X4C, 0X39, 0X7D, 0X00 # cmpq %r15, (%rbp)")
#define CMP_R15_TO_PTR_RSP CMT_ASM(".byte 0X4C, 0X39, 0X3C, 0X24 # cmpq %r15, (%rsp)")
#define CMP_R15_TO_PTR_R8 CMT_ASM(".byte 0X4D, 0X39, 0X38 # cmpq %r15, (%r8)")
#define CMP_R15_TO_PTR_R9 CMT_ASM(".byte 0X4D, 0X39, 0X39 # cmpq %r15, (%r9)")
#define CMP_R15_TO_PTR_R10 CMT_ASM(".byte 0X4D, 0X39, 0X3A # cmpq %r15, (%r10)")
#define CMP_R15_TO_PTR_R11 CMT_ASM(".byte 0X4D, 0X39, 0X3B # cmpq %r15, (%r11)")
#define CMP_R15_TO_PTR_R12 CMT_ASM(".byte 0X4D, 0X39, 0X3C, 0X24 # cmpq %r15, (%r12)")
#define CMP_R15_TO_PTR_R13 CMT_ASM(".byte 0X4D, 0X39, 0X7D, 0X00 # cmpq %r15, (%r13)")
#define CMP_R15_TO_PTR_R14 CMT_ASM(".byte 0X4D, 0X39, 0X3E # cmpq %r15, (%r14)")
#define CMP_R15_TO_PTR_R15 CMT_ASM(".byte 0X4D, 0X39, 0X3F # cmpq %r15, (%r15)")
#define CMP_R15_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X39, 0X38 # cmpq %r15, (%eax)")
#define CMP_R15_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X39, 0X3B # cmpq %r15, (%ebx)")
#define CMP_R15_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X39, 0X39 # cmpq %r15, (%ecx)")
#define CMP_R15_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X39, 0X3A # cmpq %r15, (%edx)")
#define CMP_R15_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X39, 0X3F # cmpq %r15, (%edi)")
#define CMP_R15_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X39, 0X3E # cmpq %r15, (%esi)")
#define CMP_R15_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X39, 0X7D, 0X00 # cmpq %r15, (%ebp)")
#define CMP_R15_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X39, 0X3C, 0X24 # cmpq %r15, (%esp)")

#define CMP_RAX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X3B, 0X80 # cmpq " _(VALUE) "(%rax), %rax")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RAX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X3B, 0X83 # cmpq " _(VALUE) "(%rbx), %rax")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RAX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X3B, 0X81 # cmpq " _(VALUE) "(%rcx), %rax")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RAX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X3B, 0X82 # cmpq " _(VALUE) "(%rdx), %rax")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RAX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X3B, 0X87 # cmpq " _(VALUE) "(%rdi), %rax")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RAX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X3B, 0X86 # cmpq " _(VALUE) "(%rsi), %rax")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RAX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X3B, 0X85 # cmpq " _(VALUE) "(%rbp), %rax")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RAX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X3B, 0X84, 0X24 # cmpq " _(VALUE) "(%rsp), %rax")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RAX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X3B, 0X80 # cmpq " _(VALUE) "(%r8), %rax")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RAX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X3B, 0X81 # cmpq " _(VALUE) "(%r9), %rax")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RAX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X3B, 0X82 # cmpq " _(VALUE) "(%r10), %rax")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RAX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X3B, 0X83 # cmpq " _(VALUE) "(%r11), %rax")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RAX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X3B, 0X84, 0X24 # cmpq " _(VALUE) "(%r12), %rax")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RAX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X3B, 0X85 # cmpq " _(VALUE) "(%r13), %rax")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RAX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X3B, 0X86 # cmpq " _(VALUE) "(%r14), %rax")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RAX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X3B, 0X87 # cmpq " _(VALUE) "(%r15), %rax")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RAX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X3B, 0X80 # cmpq " _(VALUE) "(%eax), %rax")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RAX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X3B, 0X83 # cmpq " _(VALUE) "(%ebx), %rax")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RAX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X3B, 0X81 # cmpq " _(VALUE) "(%ecx), %rax")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RAX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X3B, 0X82 # cmpq " _(VALUE) "(%edx), %rax")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RAX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X3B, 0X87 # cmpq " _(VALUE) "(%edi), %rax")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RAX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X3B, 0X86 # cmpq " _(VALUE) "(%esi), %rax")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RAX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X3B, 0X85 # cmpq " _(VALUE) "(%ebp), %rax")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RAX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X3B, 0X84, 0X24 # cmpq " _(VALUE) "(%esp), %rax")\
	CMT_ASM(".long " _(VALUE))

#define CMP_RBX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X3B, 0X98 # cmpq " _(VALUE) "(%rax), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RBX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X3B, 0X9B # cmpq " _(VALUE) "(%rbx), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RBX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X3B, 0X99 # cmpq " _(VALUE) "(%rcx), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RBX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X3B, 0X9A # cmpq " _(VALUE) "(%rdx), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RBX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X3B, 0X9F # cmpq " _(VALUE) "(%rdi), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RBX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X3B, 0X9E # cmpq " _(VALUE) "(%rsi), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RBX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X3B, 0X9D # cmpq " _(VALUE) "(%rbp), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RBX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X3B, 0X9C, 0X24 # cmpq " _(VALUE) "(%rsp), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RBX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X3B, 0X98 # cmpq " _(VALUE) "(%r8), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RBX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X3B, 0X99 # cmpq " _(VALUE) "(%r9), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RBX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X3B, 0X9A # cmpq " _(VALUE) "(%r10), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RBX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X3B, 0X9B # cmpq " _(VALUE) "(%r11), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RBX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X3B, 0X9C, 0X24 # cmpq " _(VALUE) "(%r12), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RBX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X3B, 0X9D # cmpq " _(VALUE) "(%r13), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RBX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X3B, 0X9E # cmpq " _(VALUE) "(%r14), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RBX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X3B, 0X9F # cmpq " _(VALUE) "(%r15), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RBX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X3B, 0X98 # cmpq " _(VALUE) "(%eax), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RBX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X3B, 0X9B # cmpq " _(VALUE) "(%ebx), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RBX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X3B, 0X99 # cmpq " _(VALUE) "(%ecx), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RBX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X3B, 0X9A # cmpq " _(VALUE) "(%edx), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RBX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X3B, 0X9F # cmpq " _(VALUE) "(%edi), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RBX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X3B, 0X9E # cmpq " _(VALUE) "(%esi), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RBX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X3B, 0X9D # cmpq " _(VALUE) "(%ebp), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RBX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X3B, 0X9C, 0X24 # cmpq " _(VALUE) "(%esp), %rbx")\
	CMT_ASM(".long " _(VALUE))

#define CMP_RCX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X3B, 0X88 # cmpq " _(VALUE) "(%rax), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RCX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X3B, 0X8B # cmpq " _(VALUE) "(%rbx), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RCX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X3B, 0X89 # cmpq " _(VALUE) "(%rcx), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RCX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X3B, 0X8A # cmpq " _(VALUE) "(%rdx), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RCX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X3B, 0X8F # cmpq " _(VALUE) "(%rdi), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RCX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X3B, 0X8E # cmpq " _(VALUE) "(%rsi), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RCX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X3B, 0X8D # cmpq " _(VALUE) "(%rbp), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RCX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X3B, 0X8C, 0X24 # cmpq " _(VALUE) "(%rsp), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RCX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X3B, 0X88 # cmpq " _(VALUE) "(%r8), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RCX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X3B, 0X89 # cmpq " _(VALUE) "(%r9), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RCX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X3B, 0X8A # cmpq " _(VALUE) "(%r10), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RCX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X3B, 0X8B # cmpq " _(VALUE) "(%r11), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RCX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X3B, 0X8C, 0X24 # cmpq " _(VALUE) "(%r12), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RCX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X3B, 0X8D # cmpq " _(VALUE) "(%r13), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RCX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X3B, 0X8E # cmpq " _(VALUE) "(%r14), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RCX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X3B, 0X8F # cmpq " _(VALUE) "(%r15), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RCX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X3B, 0X88 # cmpq " _(VALUE) "(%eax), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RCX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X3B, 0X8B # cmpq " _(VALUE) "(%ebx), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RCX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X3B, 0X89 # cmpq " _(VALUE) "(%ecx), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RCX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X3B, 0X8A # cmpq " _(VALUE) "(%edx), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RCX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X3B, 0X8F # cmpq " _(VALUE) "(%edi), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RCX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X3B, 0X8E # cmpq " _(VALUE) "(%esi), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RCX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X3B, 0X8D # cmpq " _(VALUE) "(%ebp), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RCX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X3B, 0X8C, 0X24 # cmpq " _(VALUE) "(%esp), %rcx")\
	CMT_ASM(".long " _(VALUE))

#define CMP_RDX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X3B, 0X90 # cmpq " _(VALUE) "(%rax), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RDX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X3B, 0X93 # cmpq " _(VALUE) "(%rbx), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RDX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X3B, 0X91 # cmpq " _(VALUE) "(%rcx), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RDX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X3B, 0X92 # cmpq " _(VALUE) "(%rdx), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RDX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X3B, 0X97 # cmpq " _(VALUE) "(%rdi), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RDX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X3B, 0X96 # cmpq " _(VALUE) "(%rsi), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RDX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X3B, 0X95 # cmpq " _(VALUE) "(%rbp), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RDX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X3B, 0X94, 0X24 # cmpq " _(VALUE) "(%rsp), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RDX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X3B, 0X90 # cmpq " _(VALUE) "(%r8), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RDX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X3B, 0X91 # cmpq " _(VALUE) "(%r9), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RDX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X3B, 0X92 # cmpq " _(VALUE) "(%r10), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RDX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X3B, 0X93 # cmpq " _(VALUE) "(%r11), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RDX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X3B, 0X94, 0X24 # cmpq " _(VALUE) "(%r12), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RDX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X3B, 0X95 # cmpq " _(VALUE) "(%r13), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RDX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X3B, 0X96 # cmpq " _(VALUE) "(%r14), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RDX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X3B, 0X97 # cmpq " _(VALUE) "(%r15), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RDX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X3B, 0X90 # cmpq " _(VALUE) "(%eax), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RDX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X3B, 0X93 # cmpq " _(VALUE) "(%ebx), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RDX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X3B, 0X91 # cmpq " _(VALUE) "(%ecx), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RDX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X3B, 0X92 # cmpq " _(VALUE) "(%edx), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RDX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X3B, 0X97 # cmpq " _(VALUE) "(%edi), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RDX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X3B, 0X96 # cmpq " _(VALUE) "(%esi), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RDX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X3B, 0X95 # cmpq " _(VALUE) "(%ebp), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RDX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X3B, 0X94, 0X24 # cmpq " _(VALUE) "(%esp), %rdx")\
	CMT_ASM(".long " _(VALUE))

#define CMP_RDI_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X3B, 0XB8 # cmpq " _(VALUE) "(%rax), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RDI_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X3B, 0XBB # cmpq " _(VALUE) "(%rbx), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RDI_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X3B, 0XB9 # cmpq " _(VALUE) "(%rcx), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RDI_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X3B, 0XBA # cmpq " _(VALUE) "(%rdx), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RDI_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X3B, 0XBF # cmpq " _(VALUE) "(%rdi), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RDI_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X3B, 0XBE # cmpq " _(VALUE) "(%rsi), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RDI_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X3B, 0XBD # cmpq " _(VALUE) "(%rbp), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RDI_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X3B, 0XBC, 0X24 # cmpq " _(VALUE) "(%rsp), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RDI_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X3B, 0XB8 # cmpq " _(VALUE) "(%r8), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RDI_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X3B, 0XB9 # cmpq " _(VALUE) "(%r9), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RDI_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X3B, 0XBA # cmpq " _(VALUE) "(%r10), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RDI_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X3B, 0XBB # cmpq " _(VALUE) "(%r11), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RDI_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X3B, 0XBC, 0X24 # cmpq " _(VALUE) "(%r12), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RDI_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X3B, 0XBD # cmpq " _(VALUE) "(%r13), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RDI_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X3B, 0XBE # cmpq " _(VALUE) "(%r14), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RDI_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X3B, 0XBF # cmpq " _(VALUE) "(%r15), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RDI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X3B, 0XB8 # cmpq " _(VALUE) "(%eax), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RDI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X3B, 0XBB # cmpq " _(VALUE) "(%ebx), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RDI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X3B, 0XB9 # cmpq " _(VALUE) "(%ecx), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RDI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X3B, 0XBA # cmpq " _(VALUE) "(%edx), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RDI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X3B, 0XBF # cmpq " _(VALUE) "(%edi), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RDI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X3B, 0XBE # cmpq " _(VALUE) "(%esi), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RDI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X3B, 0XBD # cmpq " _(VALUE) "(%ebp), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RDI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X3B, 0XBC, 0X24 # cmpq " _(VALUE) "(%esp), %rdi")\
	CMT_ASM(".long " _(VALUE))

#define CMP_RSI_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X3B, 0XB0 # cmpq " _(VALUE) "(%rax), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RSI_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X3B, 0XB3 # cmpq " _(VALUE) "(%rbx), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RSI_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X3B, 0XB1 # cmpq " _(VALUE) "(%rcx), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RSI_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X3B, 0XB2 # cmpq " _(VALUE) "(%rdx), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RSI_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X3B, 0XB7 # cmpq " _(VALUE) "(%rdi), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RSI_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X3B, 0XB6 # cmpq " _(VALUE) "(%rsi), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RSI_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X3B, 0XB5 # cmpq " _(VALUE) "(%rbp), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RSI_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X3B, 0XB4, 0X24 # cmpq " _(VALUE) "(%rsp), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RSI_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X3B, 0XB0 # cmpq " _(VALUE) "(%r8), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RSI_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X3B, 0XB1 # cmpq " _(VALUE) "(%r9), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RSI_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X3B, 0XB2 # cmpq " _(VALUE) "(%r10), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RSI_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X3B, 0XB3 # cmpq " _(VALUE) "(%r11), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RSI_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X3B, 0XB4, 0X24 # cmpq " _(VALUE) "(%r12), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RSI_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X3B, 0XB5 # cmpq " _(VALUE) "(%r13), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RSI_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X3B, 0XB6 # cmpq " _(VALUE) "(%r14), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RSI_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X3B, 0XB7 # cmpq " _(VALUE) "(%r15), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RSI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X3B, 0XB0 # cmpq " _(VALUE) "(%eax), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RSI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X3B, 0XB3 # cmpq " _(VALUE) "(%ebx), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RSI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X3B, 0XB1 # cmpq " _(VALUE) "(%ecx), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RSI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X3B, 0XB2 # cmpq " _(VALUE) "(%edx), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RSI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X3B, 0XB7 # cmpq " _(VALUE) "(%edi), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RSI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X3B, 0XB6 # cmpq " _(VALUE) "(%esi), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RSI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X3B, 0XB5 # cmpq " _(VALUE) "(%ebp), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RSI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X3B, 0XB4, 0X24 # cmpq " _(VALUE) "(%esp), %rsi")\
	CMT_ASM(".long " _(VALUE))

#define CMP_RBP_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X3B, 0XA8 # cmpq " _(VALUE) "(%rax), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RBP_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X3B, 0XAB # cmpq " _(VALUE) "(%rbx), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RBP_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X3B, 0XA9 # cmpq " _(VALUE) "(%rcx), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RBP_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X3B, 0XAA # cmpq " _(VALUE) "(%rdx), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RBP_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X3B, 0XAF # cmpq " _(VALUE) "(%rdi), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RBP_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X3B, 0XAE # cmpq " _(VALUE) "(%rsi), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RBP_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X3B, 0XAD # cmpq " _(VALUE) "(%rbp), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RBP_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X3B, 0XAC, 0X24 # cmpq " _(VALUE) "(%rsp), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RBP_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X3B, 0XA8 # cmpq " _(VALUE) "(%r8), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RBP_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X3B, 0XA9 # cmpq " _(VALUE) "(%r9), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RBP_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X3B, 0XAA # cmpq " _(VALUE) "(%r10), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RBP_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X3B, 0XAB # cmpq " _(VALUE) "(%r11), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RBP_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X3B, 0XAC, 0X24 # cmpq " _(VALUE) "(%r12), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RBP_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X3B, 0XAD # cmpq " _(VALUE) "(%r13), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RBP_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X3B, 0XAE # cmpq " _(VALUE) "(%r14), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RBP_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X3B, 0XAF # cmpq " _(VALUE) "(%r15), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RBP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X3B, 0XA8 # cmpq " _(VALUE) "(%eax), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RBP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X3B, 0XAB # cmpq " _(VALUE) "(%ebx), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RBP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X3B, 0XA9 # cmpq " _(VALUE) "(%ecx), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RBP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X3B, 0XAA # cmpq " _(VALUE) "(%edx), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RBP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X3B, 0XAF # cmpq " _(VALUE) "(%edi), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RBP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X3B, 0XAE # cmpq " _(VALUE) "(%esi), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RBP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X3B, 0XAD # cmpq " _(VALUE) "(%ebp), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RBP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X3B, 0XAC, 0X24 # cmpq " _(VALUE) "(%esp), %rbp")\
	CMT_ASM(".long " _(VALUE))

#define CMP_RSP_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X3B, 0XA0 # cmpq " _(VALUE) "(%rax), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RSP_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X3B, 0XA3 # cmpq " _(VALUE) "(%rbx), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RSP_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X3B, 0XA1 # cmpq " _(VALUE) "(%rcx), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RSP_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X3B, 0XA2 # cmpq " _(VALUE) "(%rdx), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RSP_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X3B, 0XA7 # cmpq " _(VALUE) "(%rdi), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RSP_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X3B, 0XA6 # cmpq " _(VALUE) "(%rsi), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RSP_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X3B, 0XA5 # cmpq " _(VALUE) "(%rbp), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RSP_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X3B, 0XA4, 0X24 # cmpq " _(VALUE) "(%rsp), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RSP_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X3B, 0XA0 # cmpq " _(VALUE) "(%r8), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RSP_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X3B, 0XA1 # cmpq " _(VALUE) "(%r9), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RSP_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X3B, 0XA2 # cmpq " _(VALUE) "(%r10), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RSP_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X3B, 0XA3 # cmpq " _(VALUE) "(%r11), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RSP_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X3B, 0XA4, 0X24 # cmpq " _(VALUE) "(%r12), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RSP_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X3B, 0XA5 # cmpq " _(VALUE) "(%r13), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RSP_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X3B, 0XA6 # cmpq " _(VALUE) "(%r14), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RSP_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X3B, 0XA7 # cmpq " _(VALUE) "(%r15), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RSP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X3B, 0XA0 # cmpq " _(VALUE) "(%eax), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RSP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X3B, 0XA3 # cmpq " _(VALUE) "(%ebx), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RSP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X3B, 0XA1 # cmpq " _(VALUE) "(%ecx), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RSP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X3B, 0XA2 # cmpq " _(VALUE) "(%edx), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RSP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X3B, 0XA7 # cmpq " _(VALUE) "(%edi), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RSP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X3B, 0XA6 # cmpq " _(VALUE) "(%esi), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RSP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X3B, 0XA5 # cmpq " _(VALUE) "(%ebp), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RSP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X3B, 0XA4, 0X24 # cmpq " _(VALUE) "(%esp), %rsp")\
	CMT_ASM(".long " _(VALUE))

#define CMP_R8_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X3B, 0X80 # cmpq " _(VALUE) "(%rax), %r8")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X3B, 0X83 # cmpq " _(VALUE) "(%rbx), %r8")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X3B, 0X81 # cmpq " _(VALUE) "(%rcx), %r8")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X3B, 0X82 # cmpq " _(VALUE) "(%rdx), %r8")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X3B, 0X87 # cmpq " _(VALUE) "(%rdi), %r8")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X3B, 0X86 # cmpq " _(VALUE) "(%rsi), %r8")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X3B, 0X85 # cmpq " _(VALUE) "(%rbp), %r8")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X3B, 0X84, 0X24 # cmpq " _(VALUE) "(%rsp), %r8")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X3B, 0X80 # cmpq " _(VALUE) "(%r8), %r8")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X3B, 0X81 # cmpq " _(VALUE) "(%r9), %r8")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X3B, 0X82 # cmpq " _(VALUE) "(%r10), %r8")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X3B, 0X83 # cmpq " _(VALUE) "(%r11), %r8")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X3B, 0X84, 0X24 # cmpq " _(VALUE) "(%r12), %r8")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X3B, 0X85 # cmpq " _(VALUE) "(%r13), %r8")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X3B, 0X86 # cmpq " _(VALUE) "(%r14), %r8")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X3B, 0X87 # cmpq " _(VALUE) "(%r15), %r8")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0X80 # cmpq " _(VALUE) "(%eax), %r8")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0X83 # cmpq " _(VALUE) "(%ebx), %r8")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0X81 # cmpq " _(VALUE) "(%ecx), %r8")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0X82 # cmpq " _(VALUE) "(%edx), %r8")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0X87 # cmpq " _(VALUE) "(%edi), %r8")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0X86 # cmpq " _(VALUE) "(%esi), %r8")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0X85 # cmpq " _(VALUE) "(%ebp), %r8")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0X84, 0X24 # cmpq " _(VALUE) "(%esp), %r8")\
	CMT_ASM(".long " _(VALUE))

#define CMP_R9_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X3B, 0X88 # cmpq " _(VALUE) "(%rax), %r9")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X3B, 0X8B # cmpq " _(VALUE) "(%rbx), %r9")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X3B, 0X89 # cmpq " _(VALUE) "(%rcx), %r9")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X3B, 0X8A # cmpq " _(VALUE) "(%rdx), %r9")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X3B, 0X8F # cmpq " _(VALUE) "(%rdi), %r9")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X3B, 0X8E # cmpq " _(VALUE) "(%rsi), %r9")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X3B, 0X8D # cmpq " _(VALUE) "(%rbp), %r9")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X3B, 0X8C, 0X24 # cmpq " _(VALUE) "(%rsp), %r9")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X3B, 0X88 # cmpq " _(VALUE) "(%r8), %r9")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X3B, 0X89 # cmpq " _(VALUE) "(%r9), %r9")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X3B, 0X8A # cmpq " _(VALUE) "(%r10), %r9")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X3B, 0X8B # cmpq " _(VALUE) "(%r11), %r9")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X3B, 0X8C, 0X24 # cmpq " _(VALUE) "(%r12), %r9")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X3B, 0X8D # cmpq " _(VALUE) "(%r13), %r9")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X3B, 0X8E # cmpq " _(VALUE) "(%r14), %r9")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X3B, 0X8F # cmpq " _(VALUE) "(%r15), %r9")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0X88 # cmpq " _(VALUE) "(%eax), %r9")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0X8B # cmpq " _(VALUE) "(%ebx), %r9")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0X89 # cmpq " _(VALUE) "(%ecx), %r9")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0X8A # cmpq " _(VALUE) "(%edx), %r9")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0X8F # cmpq " _(VALUE) "(%edi), %r9")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0X8E # cmpq " _(VALUE) "(%esi), %r9")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0X8D # cmpq " _(VALUE) "(%ebp), %r9")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0X8C, 0X24 # cmpq " _(VALUE) "(%esp), %r9")\
	CMT_ASM(".long " _(VALUE))

#define CMP_R10_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X3B, 0X90 # cmpq " _(VALUE) "(%rax), %r10")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X3B, 0X93 # cmpq " _(VALUE) "(%rbx), %r10")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X3B, 0X91 # cmpq " _(VALUE) "(%rcx), %r10")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X3B, 0X92 # cmpq " _(VALUE) "(%rdx), %r10")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X3B, 0X97 # cmpq " _(VALUE) "(%rdi), %r10")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X3B, 0X96 # cmpq " _(VALUE) "(%rsi), %r10")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X3B, 0X95 # cmpq " _(VALUE) "(%rbp), %r10")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X3B, 0X94, 0X24 # cmpq " _(VALUE) "(%rsp), %r10")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X3B, 0X90 # cmpq " _(VALUE) "(%r8), %r10")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X3B, 0X91 # cmpq " _(VALUE) "(%r9), %r10")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X3B, 0X92 # cmpq " _(VALUE) "(%r10), %r10")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X3B, 0X93 # cmpq " _(VALUE) "(%r11), %r10")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X3B, 0X94, 0X24 # cmpq " _(VALUE) "(%r12), %r10")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X3B, 0X95 # cmpq " _(VALUE) "(%r13), %r10")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X3B, 0X96 # cmpq " _(VALUE) "(%r14), %r10")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X3B, 0X97 # cmpq " _(VALUE) "(%r15), %r10")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0X90 # cmpq " _(VALUE) "(%eax), %r10")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0X93 # cmpq " _(VALUE) "(%ebx), %r10")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0X91 # cmpq " _(VALUE) "(%ecx), %r10")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0X92 # cmpq " _(VALUE) "(%edx), %r10")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0X97 # cmpq " _(VALUE) "(%edi), %r10")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0X96 # cmpq " _(VALUE) "(%esi), %r10")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0X95 # cmpq " _(VALUE) "(%ebp), %r10")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0X94, 0X24 # cmpq " _(VALUE) "(%esp), %r10")\
	CMT_ASM(".long " _(VALUE))

#define CMP_R11_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X3B, 0X98 # cmpq " _(VALUE) "(%rax), %r11")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X3B, 0X9B # cmpq " _(VALUE) "(%rbx), %r11")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X3B, 0X99 # cmpq " _(VALUE) "(%rcx), %r11")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X3B, 0X9A # cmpq " _(VALUE) "(%rdx), %r11")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X3B, 0X9F # cmpq " _(VALUE) "(%rdi), %r11")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X3B, 0X9E # cmpq " _(VALUE) "(%rsi), %r11")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X3B, 0X9D # cmpq " _(VALUE) "(%rbp), %r11")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X3B, 0X9C, 0X24 # cmpq " _(VALUE) "(%rsp), %r11")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X3B, 0X98 # cmpq " _(VALUE) "(%r8), %r11")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X3B, 0X99 # cmpq " _(VALUE) "(%r9), %r11")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X3B, 0X9A # cmpq " _(VALUE) "(%r10), %r11")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X3B, 0X9B # cmpq " _(VALUE) "(%r11), %r11")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X3B, 0X9C, 0X24 # cmpq " _(VALUE) "(%r12), %r11")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X3B, 0X9D # cmpq " _(VALUE) "(%r13), %r11")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X3B, 0X9E # cmpq " _(VALUE) "(%r14), %r11")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X3B, 0X9F # cmpq " _(VALUE) "(%r15), %r11")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0X98 # cmpq " _(VALUE) "(%eax), %r11")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0X9B # cmpq " _(VALUE) "(%ebx), %r11")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0X99 # cmpq " _(VALUE) "(%ecx), %r11")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0X9A # cmpq " _(VALUE) "(%edx), %r11")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0X9F # cmpq " _(VALUE) "(%edi), %r11")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0X9E # cmpq " _(VALUE) "(%esi), %r11")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0X9D # cmpq " _(VALUE) "(%ebp), %r11")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0X9C, 0X24 # cmpq " _(VALUE) "(%esp), %r11")\
	CMT_ASM(".long " _(VALUE))

#define CMP_R12_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X3B, 0XA0 # cmpq " _(VALUE) "(%rax), %r12")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X3B, 0XA3 # cmpq " _(VALUE) "(%rbx), %r12")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X3B, 0XA1 # cmpq " _(VALUE) "(%rcx), %r12")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X3B, 0XA2 # cmpq " _(VALUE) "(%rdx), %r12")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X3B, 0XA7 # cmpq " _(VALUE) "(%rdi), %r12")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X3B, 0XA6 # cmpq " _(VALUE) "(%rsi), %r12")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X3B, 0XA5 # cmpq " _(VALUE) "(%rbp), %r12")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X3B, 0XA4, 0X24 # cmpq " _(VALUE) "(%rsp), %r12")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X3B, 0XA0 # cmpq " _(VALUE) "(%r8), %r12")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X3B, 0XA1 # cmpq " _(VALUE) "(%r9), %r12")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X3B, 0XA2 # cmpq " _(VALUE) "(%r10), %r12")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X3B, 0XA3 # cmpq " _(VALUE) "(%r11), %r12")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X3B, 0XA4, 0X24 # cmpq " _(VALUE) "(%r12), %r12")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X3B, 0XA5 # cmpq " _(VALUE) "(%r13), %r12")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X3B, 0XA6 # cmpq " _(VALUE) "(%r14), %r12")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X3B, 0XA7 # cmpq " _(VALUE) "(%r15), %r12")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0XA0 # cmpq " _(VALUE) "(%eax), %r12")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0XA3 # cmpq " _(VALUE) "(%ebx), %r12")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0XA1 # cmpq " _(VALUE) "(%ecx), %r12")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0XA2 # cmpq " _(VALUE) "(%edx), %r12")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0XA7 # cmpq " _(VALUE) "(%edi), %r12")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0XA6 # cmpq " _(VALUE) "(%esi), %r12")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0XA5 # cmpq " _(VALUE) "(%ebp), %r12")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0XA4, 0X24 # cmpq " _(VALUE) "(%esp), %r12")\
	CMT_ASM(".long " _(VALUE))

#define CMP_R13_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X3B, 0XA8 # cmpq " _(VALUE) "(%rax), %r13")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X3B, 0XAB # cmpq " _(VALUE) "(%rbx), %r13")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X3B, 0XA9 # cmpq " _(VALUE) "(%rcx), %r13")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X3B, 0XAA # cmpq " _(VALUE) "(%rdx), %r13")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X3B, 0XAF # cmpq " _(VALUE) "(%rdi), %r13")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X3B, 0XAE # cmpq " _(VALUE) "(%rsi), %r13")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X3B, 0XAD # cmpq " _(VALUE) "(%rbp), %r13")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X3B, 0XAC, 0X24 # cmpq " _(VALUE) "(%rsp), %r13")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X3B, 0XA8 # cmpq " _(VALUE) "(%r8), %r13")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X3B, 0XA9 # cmpq " _(VALUE) "(%r9), %r13")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X3B, 0XAA # cmpq " _(VALUE) "(%r10), %r13")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X3B, 0XAB # cmpq " _(VALUE) "(%r11), %r13")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X3B, 0XAC, 0X24 # cmpq " _(VALUE) "(%r12), %r13")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X3B, 0XAD # cmpq " _(VALUE) "(%r13), %r13")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X3B, 0XAE # cmpq " _(VALUE) "(%r14), %r13")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X3B, 0XAF # cmpq " _(VALUE) "(%r15), %r13")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0XA8 # cmpq " _(VALUE) "(%eax), %r13")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0XAB # cmpq " _(VALUE) "(%ebx), %r13")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0XA9 # cmpq " _(VALUE) "(%ecx), %r13")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0XAA # cmpq " _(VALUE) "(%edx), %r13")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0XAF # cmpq " _(VALUE) "(%edi), %r13")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0XAE # cmpq " _(VALUE) "(%esi), %r13")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0XAD # cmpq " _(VALUE) "(%ebp), %r13")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0XAC, 0X24 # cmpq " _(VALUE) "(%esp), %r13")\
	CMT_ASM(".long " _(VALUE))

#define CMP_R14_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X3B, 0XB0 # cmpq " _(VALUE) "(%rax), %r14")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X3B, 0XB3 # cmpq " _(VALUE) "(%rbx), %r14")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X3B, 0XB1 # cmpq " _(VALUE) "(%rcx), %r14")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X3B, 0XB2 # cmpq " _(VALUE) "(%rdx), %r14")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X3B, 0XB7 # cmpq " _(VALUE) "(%rdi), %r14")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X3B, 0XB6 # cmpq " _(VALUE) "(%rsi), %r14")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X3B, 0XB5 # cmpq " _(VALUE) "(%rbp), %r14")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X3B, 0XB4, 0X24 # cmpq " _(VALUE) "(%rsp), %r14")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X3B, 0XB0 # cmpq " _(VALUE) "(%r8), %r14")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X3B, 0XB1 # cmpq " _(VALUE) "(%r9), %r14")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X3B, 0XB2 # cmpq " _(VALUE) "(%r10), %r14")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X3B, 0XB3 # cmpq " _(VALUE) "(%r11), %r14")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X3B, 0XB4, 0X24 # cmpq " _(VALUE) "(%r12), %r14")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X3B, 0XB5 # cmpq " _(VALUE) "(%r13), %r14")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X3B, 0XB6 # cmpq " _(VALUE) "(%r14), %r14")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X3B, 0XB7 # cmpq " _(VALUE) "(%r15), %r14")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0XB0 # cmpq " _(VALUE) "(%eax), %r14")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0XB3 # cmpq " _(VALUE) "(%ebx), %r14")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0XB1 # cmpq " _(VALUE) "(%ecx), %r14")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0XB2 # cmpq " _(VALUE) "(%edx), %r14")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0XB7 # cmpq " _(VALUE) "(%edi), %r14")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0XB6 # cmpq " _(VALUE) "(%esi), %r14")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0XB5 # cmpq " _(VALUE) "(%ebp), %r14")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0XB4, 0X24 # cmpq " _(VALUE) "(%esp), %r14")\
	CMT_ASM(".long " _(VALUE))

#define CMP_R15_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X3B, 0XB8 # cmpq " _(VALUE) "(%rax), %r15")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X3B, 0XBB # cmpq " _(VALUE) "(%rbx), %r15")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X3B, 0XB9 # cmpq " _(VALUE) "(%rcx), %r15")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X3B, 0XBA # cmpq " _(VALUE) "(%rdx), %r15")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X3B, 0XBF # cmpq " _(VALUE) "(%rdi), %r15")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X3B, 0XBE # cmpq " _(VALUE) "(%rsi), %r15")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X3B, 0XBD # cmpq " _(VALUE) "(%rbp), %r15")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X3B, 0XBC, 0X24 # cmpq " _(VALUE) "(%rsp), %r15")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X3B, 0XB8 # cmpq " _(VALUE) "(%r8), %r15")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X3B, 0XB9 # cmpq " _(VALUE) "(%r9), %r15")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X3B, 0XBA # cmpq " _(VALUE) "(%r10), %r15")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X3B, 0XBB # cmpq " _(VALUE) "(%r11), %r15")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X3B, 0XBC, 0X24 # cmpq " _(VALUE) "(%r12), %r15")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X3B, 0XBD # cmpq " _(VALUE) "(%r13), %r15")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X3B, 0XBE # cmpq " _(VALUE) "(%r14), %r15")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X3B, 0XBF # cmpq " _(VALUE) "(%r15), %r15")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0XB8 # cmpq " _(VALUE) "(%eax), %r15")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0XBB # cmpq " _(VALUE) "(%ebx), %r15")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0XB9 # cmpq " _(VALUE) "(%ecx), %r15")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0XBA # cmpq " _(VALUE) "(%edx), %r15")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0XBF # cmpq " _(VALUE) "(%edi), %r15")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0XBE # cmpq " _(VALUE) "(%esi), %r15")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0XBD # cmpq " _(VALUE) "(%ebp), %r15")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X3B, 0XBC, 0X24 # cmpq " _(VALUE) "(%esp), %r15")\
	CMT_ASM(".long " _(VALUE))

#define CMP_RAX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X39, 0X80 # cmpq %rax, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RAX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X39, 0X83 # cmpq %rax, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RAX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X39, 0X81 # cmpq %rax, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RAX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X39, 0X82 # cmpq %rax, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RAX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X39, 0X87 # cmpq %rax, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RAX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X39, 0X86 # cmpq %rax, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RAX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X39, 0X85 # cmpq %rax, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RAX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X39, 0X84, 0X24 # cmpq %rax, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RAX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X39, 0X80 # cmpq %rax, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RAX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X39, 0X81 # cmpq %rax, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RAX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X39, 0X82 # cmpq %rax, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RAX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X39, 0X83 # cmpq %rax, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RAX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X39, 0X84, 0X24 # cmpq %rax, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RAX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X39, 0X85 # cmpq %rax, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RAX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X39, 0X86 # cmpq %rax, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RAX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X39, 0X87 # cmpq %rax, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RAX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X39, 0X80 # cmpq %rax, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RAX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X39, 0X83 # cmpq %rax, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RAX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X39, 0X81 # cmpq %rax, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RAX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X39, 0X82 # cmpq %rax, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RAX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X39, 0X87 # cmpq %rax, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RAX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X39, 0X86 # cmpq %rax, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RAX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X39, 0X85 # cmpq %rax, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RAX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X39, 0X84, 0X24 # cmpq %rax, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define CMP_RBX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X39, 0X98 # cmpq %rbx, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RBX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X39, 0X9B # cmpq %rbx, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RBX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X39, 0X99 # cmpq %rbx, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RBX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X39, 0X9A # cmpq %rbx, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RBX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X39, 0X9F # cmpq %rbx, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RBX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X39, 0X9E # cmpq %rbx, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RBX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X39, 0X9D # cmpq %rbx, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RBX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X39, 0X9C, 0X24 # cmpq %rbx, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RBX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X39, 0X98 # cmpq %rbx, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RBX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X39, 0X99 # cmpq %rbx, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RBX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X39, 0X9A # cmpq %rbx, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RBX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X39, 0X9B # cmpq %rbx, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RBX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X39, 0X9C, 0X24 # cmpq %rbx, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RBX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X39, 0X9D # cmpq %rbx, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RBX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X39, 0X9E # cmpq %rbx, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RBX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X39, 0X9F # cmpq %rbx, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RBX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X39, 0X98 # cmpq %rbx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RBX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X39, 0X9B # cmpq %rbx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RBX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X39, 0X99 # cmpq %rbx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RBX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X39, 0X9A # cmpq %rbx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RBX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X39, 0X9F # cmpq %rbx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RBX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X39, 0X9E # cmpq %rbx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RBX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X39, 0X9D # cmpq %rbx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RBX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X39, 0X9C, 0X24 # cmpq %rbx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define CMP_RCX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X39, 0X88 # cmpq %rcx, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RCX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X39, 0X8B # cmpq %rcx, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RCX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X39, 0X89 # cmpq %rcx, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RCX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X39, 0X8A # cmpq %rcx, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RCX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X39, 0X8F # cmpq %rcx, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RCX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X39, 0X8E # cmpq %rcx, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RCX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X39, 0X8D # cmpq %rcx, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RCX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X39, 0X8C, 0X24 # cmpq %rcx, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RCX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X39, 0X88 # cmpq %rcx, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RCX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X39, 0X89 # cmpq %rcx, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RCX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X39, 0X8A # cmpq %rcx, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RCX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X39, 0X8B # cmpq %rcx, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RCX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X39, 0X8C, 0X24 # cmpq %rcx, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RCX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X39, 0X8D # cmpq %rcx, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RCX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X39, 0X8E # cmpq %rcx, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RCX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X39, 0X8F # cmpq %rcx, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RCX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X39, 0X88 # cmpq %rcx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RCX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X39, 0X8B # cmpq %rcx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RCX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X39, 0X89 # cmpq %rcx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RCX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X39, 0X8A # cmpq %rcx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RCX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X39, 0X8F # cmpq %rcx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RCX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X39, 0X8E # cmpq %rcx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RCX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X39, 0X8D # cmpq %rcx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RCX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X39, 0X8C, 0X24 # cmpq %rcx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define CMP_RDX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X39, 0X90 # cmpq %rdx, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RDX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X39, 0X93 # cmpq %rdx, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RDX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X39, 0X91 # cmpq %rdx, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RDX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X39, 0X92 # cmpq %rdx, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RDX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X39, 0X97 # cmpq %rdx, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RDX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X39, 0X96 # cmpq %rdx, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RDX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X39, 0X95 # cmpq %rdx, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RDX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X39, 0X94, 0X24 # cmpq %rdx, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RDX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X39, 0X90 # cmpq %rdx, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RDX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X39, 0X91 # cmpq %rdx, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RDX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X39, 0X92 # cmpq %rdx, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RDX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X39, 0X93 # cmpq %rdx, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RDX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X39, 0X94, 0X24 # cmpq %rdx, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RDX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X39, 0X95 # cmpq %rdx, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RDX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X39, 0X96 # cmpq %rdx, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RDX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X39, 0X97 # cmpq %rdx, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RDX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X39, 0X90 # cmpq %rdx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RDX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X39, 0X93 # cmpq %rdx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RDX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X39, 0X91 # cmpq %rdx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RDX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X39, 0X92 # cmpq %rdx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RDX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X39, 0X97 # cmpq %rdx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RDX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X39, 0X96 # cmpq %rdx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RDX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X39, 0X95 # cmpq %rdx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RDX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X39, 0X94, 0X24 # cmpq %rdx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define CMP_RDI_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X39, 0XB8 # cmpq %rdi, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RDI_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X39, 0XBB # cmpq %rdi, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RDI_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X39, 0XB9 # cmpq %rdi, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RDI_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X39, 0XBA # cmpq %rdi, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RDI_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X39, 0XBF # cmpq %rdi, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RDI_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X39, 0XBE # cmpq %rdi, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RDI_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X39, 0XBD # cmpq %rdi, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RDI_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X39, 0XBC, 0X24 # cmpq %rdi, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RDI_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X39, 0XB8 # cmpq %rdi, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RDI_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X39, 0XB9 # cmpq %rdi, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RDI_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X39, 0XBA # cmpq %rdi, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RDI_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X39, 0XBB # cmpq %rdi, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RDI_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X39, 0XBC, 0X24 # cmpq %rdi, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RDI_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X39, 0XBD # cmpq %rdi, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RDI_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X39, 0XBE # cmpq %rdi, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RDI_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X39, 0XBF # cmpq %rdi, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RDI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X39, 0XB8 # cmpq %rdi, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RDI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X39, 0XBB # cmpq %rdi, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RDI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X39, 0XB9 # cmpq %rdi, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RDI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X39, 0XBA # cmpq %rdi, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RDI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X39, 0XBF # cmpq %rdi, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RDI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X39, 0XBE # cmpq %rdi, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RDI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X39, 0XBD # cmpq %rdi, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RDI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X39, 0XBC, 0X24 # cmpq %rdi, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define CMP_RSI_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X39, 0XB0 # cmpq %rsi, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RSI_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X39, 0XB3 # cmpq %rsi, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RSI_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X39, 0XB1 # cmpq %rsi, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RSI_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X39, 0XB2 # cmpq %rsi, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RSI_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X39, 0XB7 # cmpq %rsi, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RSI_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X39, 0XB6 # cmpq %rsi, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RSI_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X39, 0XB5 # cmpq %rsi, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RSI_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X39, 0XB4, 0X24 # cmpq %rsi, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RSI_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X39, 0XB0 # cmpq %rsi, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RSI_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X39, 0XB1 # cmpq %rsi, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RSI_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X39, 0XB2 # cmpq %rsi, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RSI_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X39, 0XB3 # cmpq %rsi, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RSI_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X39, 0XB4, 0X24 # cmpq %rsi, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RSI_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X39, 0XB5 # cmpq %rsi, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RSI_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X39, 0XB6 # cmpq %rsi, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RSI_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X39, 0XB7 # cmpq %rsi, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RSI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X39, 0XB0 # cmpq %rsi, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RSI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X39, 0XB3 # cmpq %rsi, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RSI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X39, 0XB1 # cmpq %rsi, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RSI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X39, 0XB2 # cmpq %rsi, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RSI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X39, 0XB7 # cmpq %rsi, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RSI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X39, 0XB6 # cmpq %rsi, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RSI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X39, 0XB5 # cmpq %rsi, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RSI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X39, 0XB4, 0X24 # cmpq %rsi, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define CMP_RBP_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X39, 0XA8 # cmpq %rbp, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RBP_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X39, 0XAB # cmpq %rbp, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RBP_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X39, 0XA9 # cmpq %rbp, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RBP_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X39, 0XAA # cmpq %rbp, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RBP_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X39, 0XAF # cmpq %rbp, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RBP_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X39, 0XAE # cmpq %rbp, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RBP_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X39, 0XAD # cmpq %rbp, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RBP_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X39, 0XAC, 0X24 # cmpq %rbp, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RBP_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X39, 0XA8 # cmpq %rbp, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RBP_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X39, 0XA9 # cmpq %rbp, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RBP_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X39, 0XAA # cmpq %rbp, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RBP_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X39, 0XAB # cmpq %rbp, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RBP_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X39, 0XAC, 0X24 # cmpq %rbp, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RBP_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X39, 0XAD # cmpq %rbp, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RBP_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X39, 0XAE # cmpq %rbp, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RBP_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X39, 0XAF # cmpq %rbp, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RBP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X39, 0XA8 # cmpq %rbp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RBP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X39, 0XAB # cmpq %rbp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RBP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X39, 0XA9 # cmpq %rbp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RBP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X39, 0XAA # cmpq %rbp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RBP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X39, 0XAF # cmpq %rbp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RBP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X39, 0XAE # cmpq %rbp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RBP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X39, 0XAD # cmpq %rbp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RBP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X39, 0XAC, 0X24 # cmpq %rbp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define CMP_RSP_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X39, 0XA0 # cmpq %rsp, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RSP_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X39, 0XA3 # cmpq %rsp, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RSP_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X39, 0XA1 # cmpq %rsp, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RSP_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X39, 0XA2 # cmpq %rsp, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RSP_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X39, 0XA7 # cmpq %rsp, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RSP_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X39, 0XA6 # cmpq %rsp, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RSP_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X39, 0XA5 # cmpq %rsp, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RSP_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X39, 0XA4, 0X24 # cmpq %rsp, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RSP_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X39, 0XA0 # cmpq %rsp, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RSP_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X39, 0XA1 # cmpq %rsp, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RSP_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X39, 0XA2 # cmpq %rsp, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RSP_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X39, 0XA3 # cmpq %rsp, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RSP_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X39, 0XA4, 0X24 # cmpq %rsp, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RSP_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X39, 0XA5 # cmpq %rsp, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RSP_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X39, 0XA6 # cmpq %rsp, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RSP_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X39, 0XA7 # cmpq %rsp, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RSP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X39, 0XA0 # cmpq %rsp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RSP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X39, 0XA3 # cmpq %rsp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RSP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X39, 0XA1 # cmpq %rsp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RSP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X39, 0XA2 # cmpq %rsp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RSP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X39, 0XA7 # cmpq %rsp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RSP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X39, 0XA6 # cmpq %rsp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RSP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X39, 0XA5 # cmpq %rsp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_RSP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X39, 0XA4, 0X24 # cmpq %rsp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define CMP_R8_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X39, 0X80 # cmpq %r8, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X39, 0X83 # cmpq %r8, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X39, 0X81 # cmpq %r8, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X39, 0X82 # cmpq %r8, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X39, 0X87 # cmpq %r8, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X39, 0X86 # cmpq %r8, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X39, 0X85 # cmpq %r8, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X39, 0X84, 0X24 # cmpq %r8, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X39, 0X80 # cmpq %r8, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X39, 0X81 # cmpq %r8, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X39, 0X82 # cmpq %r8, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X39, 0X83 # cmpq %r8, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X39, 0X84, 0X24 # cmpq %r8, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X39, 0X85 # cmpq %r8, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X39, 0X86 # cmpq %r8, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X39, 0X87 # cmpq %r8, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X39, 0X80 # cmpq %r8, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X39, 0X83 # cmpq %r8, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X39, 0X81 # cmpq %r8, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X39, 0X82 # cmpq %r8, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X39, 0X87 # cmpq %r8, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X39, 0X86 # cmpq %r8, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X39, 0X85 # cmpq %r8, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X39, 0X84, 0X24 # cmpq %r8, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define CMP_R9_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X39, 0X88 # cmpq %r9, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X39, 0X8B # cmpq %r9, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X39, 0X89 # cmpq %r9, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X39, 0X8A # cmpq %r9, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X39, 0X8F # cmpq %r9, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X39, 0X8E # cmpq %r9, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X39, 0X8D # cmpq %r9, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X39, 0X8C, 0X24 # cmpq %r9, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X39, 0X88 # cmpq %r9, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X39, 0X89 # cmpq %r9, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X39, 0X8A # cmpq %r9, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X39, 0X8B # cmpq %r9, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X39, 0X8C, 0X24 # cmpq %r9, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X39, 0X8D # cmpq %r9, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X39, 0X8E # cmpq %r9, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X39, 0X8F # cmpq %r9, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X39, 0X88 # cmpq %r9, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X39, 0X8B # cmpq %r9, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X39, 0X89 # cmpq %r9, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X39, 0X8A # cmpq %r9, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X39, 0X8F # cmpq %r9, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X39, 0X8E # cmpq %r9, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X39, 0X8D # cmpq %r9, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X39, 0X8C, 0X24 # cmpq %r9, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define CMP_R10_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X39, 0X90 # cmpq %r10, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X39, 0X93 # cmpq %r10, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X39, 0X91 # cmpq %r10, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X39, 0X92 # cmpq %r10, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X39, 0X97 # cmpq %r10, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X39, 0X96 # cmpq %r10, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X39, 0X95 # cmpq %r10, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X39, 0X94, 0X24 # cmpq %r10, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X39, 0X90 # cmpq %r10, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X39, 0X91 # cmpq %r10, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X39, 0X92 # cmpq %r10, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X39, 0X93 # cmpq %r10, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X39, 0X94, 0X24 # cmpq %r10, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X39, 0X95 # cmpq %r10, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X39, 0X96 # cmpq %r10, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X39, 0X97 # cmpq %r10, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X39, 0X90 # cmpq %r10, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X39, 0X93 # cmpq %r10, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X39, 0X91 # cmpq %r10, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X39, 0X92 # cmpq %r10, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X39, 0X97 # cmpq %r10, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X39, 0X96 # cmpq %r10, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X39, 0X95 # cmpq %r10, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X39, 0X94, 0X24 # cmpq %r10, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define CMP_R11_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X39, 0X98 # cmpq %r11, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X39, 0X9B # cmpq %r11, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X39, 0X99 # cmpq %r11, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X39, 0X9A # cmpq %r11, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X39, 0X9F # cmpq %r11, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X39, 0X9E # cmpq %r11, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X39, 0X9D # cmpq %r11, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X39, 0X9C, 0X24 # cmpq %r11, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X39, 0X98 # cmpq %r11, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X39, 0X99 # cmpq %r11, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X39, 0X9A # cmpq %r11, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X39, 0X9B # cmpq %r11, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X39, 0X9C, 0X24 # cmpq %r11, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X39, 0X9D # cmpq %r11, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X39, 0X9E # cmpq %r11, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X39, 0X9F # cmpq %r11, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X39, 0X98 # cmpq %r11, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X39, 0X9B # cmpq %r11, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X39, 0X99 # cmpq %r11, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X39, 0X9A # cmpq %r11, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X39, 0X9F # cmpq %r11, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X39, 0X9E # cmpq %r11, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X39, 0X9D # cmpq %r11, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X39, 0X9C, 0X24 # cmpq %r11, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define CMP_R12_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X39, 0XA0 # cmpq %r12, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X39, 0XA3 # cmpq %r12, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X39, 0XA1 # cmpq %r12, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X39, 0XA2 # cmpq %r12, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X39, 0XA7 # cmpq %r12, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X39, 0XA6 # cmpq %r12, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X39, 0XA5 # cmpq %r12, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X39, 0XA4, 0X24 # cmpq %r12, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X39, 0XA0 # cmpq %r12, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X39, 0XA1 # cmpq %r12, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X39, 0XA2 # cmpq %r12, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X39, 0XA3 # cmpq %r12, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X39, 0XA4, 0X24 # cmpq %r12, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X39, 0XA5 # cmpq %r12, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X39, 0XA6 # cmpq %r12, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X39, 0XA7 # cmpq %r12, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X39, 0XA0 # cmpq %r12, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X39, 0XA3 # cmpq %r12, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X39, 0XA1 # cmpq %r12, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X39, 0XA2 # cmpq %r12, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X39, 0XA7 # cmpq %r12, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X39, 0XA6 # cmpq %r12, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X39, 0XA5 # cmpq %r12, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X39, 0XA4, 0X24 # cmpq %r12, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define CMP_R13_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X39, 0XA8 # cmpq %r13, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X39, 0XAB # cmpq %r13, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X39, 0XA9 # cmpq %r13, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X39, 0XAA # cmpq %r13, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X39, 0XAF # cmpq %r13, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X39, 0XAE # cmpq %r13, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X39, 0XAD # cmpq %r13, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X39, 0XAC, 0X24 # cmpq %r13, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X39, 0XA8 # cmpq %r13, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X39, 0XA9 # cmpq %r13, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X39, 0XAA # cmpq %r13, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X39, 0XAB # cmpq %r13, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X39, 0XAC, 0X24 # cmpq %r13, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X39, 0XAD # cmpq %r13, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X39, 0XAE # cmpq %r13, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X39, 0XAF # cmpq %r13, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X39, 0XA8 # cmpq %r13, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X39, 0XAB # cmpq %r13, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X39, 0XA9 # cmpq %r13, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X39, 0XAA # cmpq %r13, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X39, 0XAF # cmpq %r13, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X39, 0XAE # cmpq %r13, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X39, 0XAD # cmpq %r13, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X39, 0XAC, 0X24 # cmpq %r13, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define CMP_R14_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X39, 0XB0 # cmpq %r14, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X39, 0XB3 # cmpq %r14, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X39, 0XB1 # cmpq %r14, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X39, 0XB2 # cmpq %r14, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X39, 0XB7 # cmpq %r14, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X39, 0XB6 # cmpq %r14, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X39, 0XB5 # cmpq %r14, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X39, 0XB4, 0X24 # cmpq %r14, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X39, 0XB0 # cmpq %r14, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X39, 0XB1 # cmpq %r14, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X39, 0XB2 # cmpq %r14, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X39, 0XB3 # cmpq %r14, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X39, 0XB4, 0X24 # cmpq %r14, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X39, 0XB5 # cmpq %r14, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X39, 0XB6 # cmpq %r14, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X39, 0XB7 # cmpq %r14, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X39, 0XB0 # cmpq %r14, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X39, 0XB3 # cmpq %r14, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X39, 0XB1 # cmpq %r14, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X39, 0XB2 # cmpq %r14, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X39, 0XB7 # cmpq %r14, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X39, 0XB6 # cmpq %r14, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X39, 0XB5 # cmpq %r14, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X39, 0XB4, 0X24 # cmpq %r14, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define CMP_R15_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X39, 0XB8 # cmpq %r15, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X39, 0XBB # cmpq %r15, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X39, 0XB9 # cmpq %r15, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X39, 0XBA # cmpq %r15, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X39, 0XBF # cmpq %r15, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X39, 0XBE # cmpq %r15, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X39, 0XBD # cmpq %r15, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X39, 0XBC, 0X24 # cmpq %r15, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X39, 0XB8 # cmpq %r15, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X39, 0XB9 # cmpq %r15, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X39, 0XBA # cmpq %r15, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X39, 0XBB # cmpq %r15, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X39, 0XBC, 0X24 # cmpq %r15, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X39, 0XBD # cmpq %r15, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X39, 0XBE # cmpq %r15, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X39, 0XBF # cmpq %r15, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X39, 0XB8 # cmpq %r15, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X39, 0XBB # cmpq %r15, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X39, 0XB9 # cmpq %r15, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X39, 0XBA # cmpq %r15, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X39, 0XBF # cmpq %r15, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X39, 0XBE # cmpq %r15, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X39, 0XBD # cmpq %r15, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X39, 0XBC, 0X24 # cmpq %r15, " _(VALUE) "(%esp)")\
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
