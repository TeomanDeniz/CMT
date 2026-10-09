#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************* [v] 64-BIT MEMORY [v] ************************** */
#define XOR_RAX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X33, 0X04, 0X25 # xorq (" _(VALUE) "), %rax")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RBX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X33, 0X1C, 0X25 # xorq (" _(VALUE) "), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RCX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X33, 0X0C, 0X25 # xorq (" _(VALUE) "), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RDX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X33, 0X14, 0X25 # xorq (" _(VALUE) "), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RDI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X33, 0X3C, 0X25 # xorq (" _(VALUE) "), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RSI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X33, 0X34, 0X25 # xorq (" _(VALUE) "), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RBP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X33, 0X2C, 0X25 # xorq (" _(VALUE) "), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RSP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X33, 0X24, 0X25 # xorq (" _(VALUE) "), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X33, 0X04, 0X25 # xorq (" _(VALUE) "), %r8")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X33, 0X0C, 0X25 # xorq (" _(VALUE) "), %r9")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X33, 0X14, 0X25 # xorq (" _(VALUE) "), %r10")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X33, 0X1C, 0X25 # xorq (" _(VALUE) "), %r11")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X33, 0X24, 0X25 # xorq (" _(VALUE) "), %r12")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X33, 0X2C, 0X25 # xorq (" _(VALUE) "), %r13")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X33, 0X34, 0X25 # xorq (" _(VALUE) "), %r14")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X33, 0X3C, 0X25 # xorq (" _(VALUE) "), %r15")\
	CMT_ASM(".long " _(VALUE))

#define XOR_RAX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X31, 0X04, 0X25 # xorq %rax, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RBX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X31, 0X1C, 0X25 # xorq %rbx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RCX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X31, 0X0C, 0X25 # xorq %rcx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RDX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X31, 0X14, 0X25 # xorq %rdx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RDI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X31, 0X3C, 0X25 # xorq %rdi, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RSI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X31, 0X34, 0X25 # xorq %rsi, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RBP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X31, 0X2C, 0X25 # xorq %rbp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RSP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X31, 0X24, 0X25 # xorq %rsp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X31, 0X04, 0X25 # xorq %r8, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X31, 0X0C, 0X25 # xorq %r9, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X31, 0X14, 0X25 # xorq %r10, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X31, 0X1C, 0X25 # xorq %r11, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X31, 0X24, 0X25 # xorq %r12, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X31, 0X2C, 0X25 # xorq %r13, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X31, 0X34, 0X25 # xorq %r14, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X31, 0X3C, 0X25 # xorq %r15, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))

#define XOR_RAX_FROM_PTR_RAX CMT_ASM(".byte 0X48, 0X33, 0X00 # xorq (%rax), %rax")
#define XOR_RAX_FROM_PTR_RBX CMT_ASM(".byte 0X48, 0X33, 0X03 # xorq (%rbx), %rax")
#define XOR_RAX_FROM_PTR_RCX CMT_ASM(".byte 0X48, 0X33, 0X01 # xorq (%rcx), %rax")
#define XOR_RAX_FROM_PTR_RDX CMT_ASM(".byte 0X48, 0X33, 0X02 # xorq (%rdx), %rax")
#define XOR_RAX_FROM_PTR_RDI CMT_ASM(".byte 0X48, 0X33, 0X07 # xorq (%rdi), %rax")
#define XOR_RAX_FROM_PTR_RSI CMT_ASM(".byte 0X48, 0X33, 0X06 # xorq (%rsi), %rax")
#define XOR_RAX_FROM_PTR_RBP CMT_ASM(".byte 0X48, 0X33, 0X45, 0X00 # xorq (%rbp), %rax")
#define XOR_RAX_FROM_PTR_RSP CMT_ASM(".byte 0X48, 0X33, 0X04, 0X24 # xorq (%rsp), %rax")
#define XOR_RAX_FROM_PTR_R8 CMT_ASM(".byte 0X49, 0X33, 0X00 # xorq (%r8), %rax")
#define XOR_RAX_FROM_PTR_R9 CMT_ASM(".byte 0X49, 0X33, 0X01 # xorq (%r9), %rax")
#define XOR_RAX_FROM_PTR_R10 CMT_ASM(".byte 0X49, 0X33, 0X02 # xorq (%r10), %rax")
#define XOR_RAX_FROM_PTR_R11 CMT_ASM(".byte 0X49, 0X33, 0X03 # xorq (%r11), %rax")
#define XOR_RAX_FROM_PTR_R12 CMT_ASM(".byte 0X49, 0X33, 0X04, 0X24 # xorq (%r12), %rax")
#define XOR_RAX_FROM_PTR_R13 CMT_ASM(".byte 0X49, 0X33, 0X45, 0X00 # xorq (%r13), %rax")
#define XOR_RAX_FROM_PTR_R14 CMT_ASM(".byte 0X49, 0X33, 0X06 # xorq (%r14), %rax")
#define XOR_RAX_FROM_PTR_R15 CMT_ASM(".byte 0X49, 0X33, 0X07 # xorq (%r15), %rax")
#define XOR_RAX_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X33, 0X00 # xorq (%eax), %rax")
#define XOR_RAX_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X33, 0X03 # xorq (%ebx), %rax")
#define XOR_RAX_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X33, 0X01 # xorq (%ecx), %rax")
#define XOR_RAX_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X33, 0X02 # xorq (%edx), %rax")
#define XOR_RAX_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X33, 0X07 # xorq (%edi), %rax")
#define XOR_RAX_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X33, 0X06 # xorq (%esi), %rax")
#define XOR_RAX_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X33, 0X45, 0X00 # xorq (%ebp), %rax")
#define XOR_RAX_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X33, 0X04, 0X24 # xorq (%esp), %rax")

#define XOR_RBX_FROM_PTR_RAX CMT_ASM(".byte 0X48, 0X33, 0X18 # xorq (%rax), %rbx")
#define XOR_RBX_FROM_PTR_RBX CMT_ASM(".byte 0X48, 0X33, 0X1B # xorq (%rbx), %rbx")
#define XOR_RBX_FROM_PTR_RCX CMT_ASM(".byte 0X48, 0X33, 0X19 # xorq (%rcx), %rbx")
#define XOR_RBX_FROM_PTR_RDX CMT_ASM(".byte 0X48, 0X33, 0X1A # xorq (%rdx), %rbx")
#define XOR_RBX_FROM_PTR_RDI CMT_ASM(".byte 0X48, 0X33, 0X1F # xorq (%rdi), %rbx")
#define XOR_RBX_FROM_PTR_RSI CMT_ASM(".byte 0X48, 0X33, 0X1E # xorq (%rsi), %rbx")
#define XOR_RBX_FROM_PTR_RBP CMT_ASM(".byte 0X48, 0X33, 0X5D, 0X00 # xorq (%rbp), %rbx")
#define XOR_RBX_FROM_PTR_RSP CMT_ASM(".byte 0X48, 0X33, 0X1C, 0X24 # xorq (%rsp), %rbx")
#define XOR_RBX_FROM_PTR_R8 CMT_ASM(".byte 0X49, 0X33, 0X18 # xorq (%r8), %rbx")
#define XOR_RBX_FROM_PTR_R9 CMT_ASM(".byte 0X49, 0X33, 0X19 # xorq (%r9), %rbx")
#define XOR_RBX_FROM_PTR_R10 CMT_ASM(".byte 0X49, 0X33, 0X1A # xorq (%r10), %rbx")
#define XOR_RBX_FROM_PTR_R11 CMT_ASM(".byte 0X49, 0X33, 0X1B # xorq (%r11), %rbx")
#define XOR_RBX_FROM_PTR_R12 CMT_ASM(".byte 0X49, 0X33, 0X1C, 0X24 # xorq (%r12), %rbx")
#define XOR_RBX_FROM_PTR_R13 CMT_ASM(".byte 0X49, 0X33, 0X5D, 0X00 # xorq (%r13), %rbx")
#define XOR_RBX_FROM_PTR_R14 CMT_ASM(".byte 0X49, 0X33, 0X1E # xorq (%r14), %rbx")
#define XOR_RBX_FROM_PTR_R15 CMT_ASM(".byte 0X49, 0X33, 0X1F # xorq (%r15), %rbx")
#define XOR_RBX_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X33, 0X18 # xorq (%eax), %rbx")
#define XOR_RBX_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X33, 0X1B # xorq (%ebx), %rbx")
#define XOR_RBX_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X33, 0X19 # xorq (%ecx), %rbx")
#define XOR_RBX_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X33, 0X1A # xorq (%edx), %rbx")
#define XOR_RBX_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X33, 0X1F # xorq (%edi), %rbx")
#define XOR_RBX_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X33, 0X1E # xorq (%esi), %rbx")
#define XOR_RBX_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X33, 0X5D, 0X00 # xorq (%ebp), %rbx")
#define XOR_RBX_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X33, 0X1C, 0X24 # xorq (%esp), %rbx")

#define XOR_RCX_FROM_PTR_RAX CMT_ASM(".byte 0X48, 0X33, 0X08 # xorq (%rax), %rcx")
#define XOR_RCX_FROM_PTR_RBX CMT_ASM(".byte 0X48, 0X33, 0X0B # xorq (%rbx), %rcx")
#define XOR_RCX_FROM_PTR_RCX CMT_ASM(".byte 0X48, 0X33, 0X09 # xorq (%rcx), %rcx")
#define XOR_RCX_FROM_PTR_RDX CMT_ASM(".byte 0X48, 0X33, 0X0A # xorq (%rdx), %rcx")
#define XOR_RCX_FROM_PTR_RDI CMT_ASM(".byte 0X48, 0X33, 0X0F # xorq (%rdi), %rcx")
#define XOR_RCX_FROM_PTR_RSI CMT_ASM(".byte 0X48, 0X33, 0X0E # xorq (%rsi), %rcx")
#define XOR_RCX_FROM_PTR_RBP CMT_ASM(".byte 0X48, 0X33, 0X4D, 0X00 # xorq (%rbp), %rcx")
#define XOR_RCX_FROM_PTR_RSP CMT_ASM(".byte 0X48, 0X33, 0X0C, 0X24 # xorq (%rsp), %rcx")
#define XOR_RCX_FROM_PTR_R8 CMT_ASM(".byte 0X49, 0X33, 0X08 # xorq (%r8), %rcx")
#define XOR_RCX_FROM_PTR_R9 CMT_ASM(".byte 0X49, 0X33, 0X09 # xorq (%r9), %rcx")
#define XOR_RCX_FROM_PTR_R10 CMT_ASM(".byte 0X49, 0X33, 0X0A # xorq (%r10), %rcx")
#define XOR_RCX_FROM_PTR_R11 CMT_ASM(".byte 0X49, 0X33, 0X0B # xorq (%r11), %rcx")
#define XOR_RCX_FROM_PTR_R12 CMT_ASM(".byte 0X49, 0X33, 0X0C, 0X24 # xorq (%r12), %rcx")
#define XOR_RCX_FROM_PTR_R13 CMT_ASM(".byte 0X49, 0X33, 0X4D, 0X00 # xorq (%r13), %rcx")
#define XOR_RCX_FROM_PTR_R14 CMT_ASM(".byte 0X49, 0X33, 0X0E # xorq (%r14), %rcx")
#define XOR_RCX_FROM_PTR_R15 CMT_ASM(".byte 0X49, 0X33, 0X0F # xorq (%r15), %rcx")
#define XOR_RCX_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X33, 0X08 # xorq (%eax), %rcx")
#define XOR_RCX_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X33, 0X0B # xorq (%ebx), %rcx")
#define XOR_RCX_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X33, 0X09 # xorq (%ecx), %rcx")
#define XOR_RCX_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X33, 0X0A # xorq (%edx), %rcx")
#define XOR_RCX_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X33, 0X0F # xorq (%edi), %rcx")
#define XOR_RCX_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X33, 0X0E # xorq (%esi), %rcx")
#define XOR_RCX_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X33, 0X4D, 0X00 # xorq (%ebp), %rcx")
#define XOR_RCX_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X33, 0X0C, 0X24 # xorq (%esp), %rcx")

#define XOR_RDX_FROM_PTR_RAX CMT_ASM(".byte 0X48, 0X33, 0X10 # xorq (%rax), %rdx")
#define XOR_RDX_FROM_PTR_RBX CMT_ASM(".byte 0X48, 0X33, 0X13 # xorq (%rbx), %rdx")
#define XOR_RDX_FROM_PTR_RCX CMT_ASM(".byte 0X48, 0X33, 0X11 # xorq (%rcx), %rdx")
#define XOR_RDX_FROM_PTR_RDX CMT_ASM(".byte 0X48, 0X33, 0X12 # xorq (%rdx), %rdx")
#define XOR_RDX_FROM_PTR_RDI CMT_ASM(".byte 0X48, 0X33, 0X17 # xorq (%rdi), %rdx")
#define XOR_RDX_FROM_PTR_RSI CMT_ASM(".byte 0X48, 0X33, 0X16 # xorq (%rsi), %rdx")
#define XOR_RDX_FROM_PTR_RBP CMT_ASM(".byte 0X48, 0X33, 0X55, 0X00 # xorq (%rbp), %rdx")
#define XOR_RDX_FROM_PTR_RSP CMT_ASM(".byte 0X48, 0X33, 0X14, 0X24 # xorq (%rsp), %rdx")
#define XOR_RDX_FROM_PTR_R8 CMT_ASM(".byte 0X49, 0X33, 0X10 # xorq (%r8), %rdx")
#define XOR_RDX_FROM_PTR_R9 CMT_ASM(".byte 0X49, 0X33, 0X11 # xorq (%r9), %rdx")
#define XOR_RDX_FROM_PTR_R10 CMT_ASM(".byte 0X49, 0X33, 0X12 # xorq (%r10), %rdx")
#define XOR_RDX_FROM_PTR_R11 CMT_ASM(".byte 0X49, 0X33, 0X13 # xorq (%r11), %rdx")
#define XOR_RDX_FROM_PTR_R12 CMT_ASM(".byte 0X49, 0X33, 0X14, 0X24 # xorq (%r12), %rdx")
#define XOR_RDX_FROM_PTR_R13 CMT_ASM(".byte 0X49, 0X33, 0X55, 0X00 # xorq (%r13), %rdx")
#define XOR_RDX_FROM_PTR_R14 CMT_ASM(".byte 0X49, 0X33, 0X16 # xorq (%r14), %rdx")
#define XOR_RDX_FROM_PTR_R15 CMT_ASM(".byte 0X49, 0X33, 0X17 # xorq (%r15), %rdx")
#define XOR_RDX_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X33, 0X10 # xorq (%eax), %rdx")
#define XOR_RDX_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X33, 0X13 # xorq (%ebx), %rdx")
#define XOR_RDX_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X33, 0X11 # xorq (%ecx), %rdx")
#define XOR_RDX_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X33, 0X12 # xorq (%edx), %rdx")
#define XOR_RDX_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X33, 0X17 # xorq (%edi), %rdx")
#define XOR_RDX_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X33, 0X16 # xorq (%esi), %rdx")
#define XOR_RDX_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X33, 0X55, 0X00 # xorq (%ebp), %rdx")
#define XOR_RDX_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X33, 0X14, 0X24 # xorq (%esp), %rdx")

#define XOR_RDI_FROM_PTR_RAX CMT_ASM(".byte 0X48, 0X33, 0X38 # xorq (%rax), %rdi")
#define XOR_RDI_FROM_PTR_RBX CMT_ASM(".byte 0X48, 0X33, 0X3B # xorq (%rbx), %rdi")
#define XOR_RDI_FROM_PTR_RCX CMT_ASM(".byte 0X48, 0X33, 0X39 # xorq (%rcx), %rdi")
#define XOR_RDI_FROM_PTR_RDX CMT_ASM(".byte 0X48, 0X33, 0X3A # xorq (%rdx), %rdi")
#define XOR_RDI_FROM_PTR_RDI CMT_ASM(".byte 0X48, 0X33, 0X3F # xorq (%rdi), %rdi")
#define XOR_RDI_FROM_PTR_RSI CMT_ASM(".byte 0X48, 0X33, 0X3E # xorq (%rsi), %rdi")
#define XOR_RDI_FROM_PTR_RBP CMT_ASM(".byte 0X48, 0X33, 0X7D, 0X00 # xorq (%rbp), %rdi")
#define XOR_RDI_FROM_PTR_RSP CMT_ASM(".byte 0X48, 0X33, 0X3C, 0X24 # xorq (%rsp), %rdi")
#define XOR_RDI_FROM_PTR_R8 CMT_ASM(".byte 0X49, 0X33, 0X38 # xorq (%r8), %rdi")
#define XOR_RDI_FROM_PTR_R9 CMT_ASM(".byte 0X49, 0X33, 0X39 # xorq (%r9), %rdi")
#define XOR_RDI_FROM_PTR_R10 CMT_ASM(".byte 0X49, 0X33, 0X3A # xorq (%r10), %rdi")
#define XOR_RDI_FROM_PTR_R11 CMT_ASM(".byte 0X49, 0X33, 0X3B # xorq (%r11), %rdi")
#define XOR_RDI_FROM_PTR_R12 CMT_ASM(".byte 0X49, 0X33, 0X3C, 0X24 # xorq (%r12), %rdi")
#define XOR_RDI_FROM_PTR_R13 CMT_ASM(".byte 0X49, 0X33, 0X7D, 0X00 # xorq (%r13), %rdi")
#define XOR_RDI_FROM_PTR_R14 CMT_ASM(".byte 0X49, 0X33, 0X3E # xorq (%r14), %rdi")
#define XOR_RDI_FROM_PTR_R15 CMT_ASM(".byte 0X49, 0X33, 0X3F # xorq (%r15), %rdi")
#define XOR_RDI_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X33, 0X38 # xorq (%eax), %rdi")
#define XOR_RDI_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X33, 0X3B # xorq (%ebx), %rdi")
#define XOR_RDI_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X33, 0X39 # xorq (%ecx), %rdi")
#define XOR_RDI_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X33, 0X3A # xorq (%edx), %rdi")
#define XOR_RDI_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X33, 0X3F # xorq (%edi), %rdi")
#define XOR_RDI_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X33, 0X3E # xorq (%esi), %rdi")
#define XOR_RDI_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X33, 0X7D, 0X00 # xorq (%ebp), %rdi")
#define XOR_RDI_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X33, 0X3C, 0X24 # xorq (%esp), %rdi")

#define XOR_RSI_FROM_PTR_RAX CMT_ASM(".byte 0X48, 0X33, 0X30 # xorq (%rax), %rsi")
#define XOR_RSI_FROM_PTR_RBX CMT_ASM(".byte 0X48, 0X33, 0X33 # xorq (%rbx), %rsi")
#define XOR_RSI_FROM_PTR_RCX CMT_ASM(".byte 0X48, 0X33, 0X31 # xorq (%rcx), %rsi")
#define XOR_RSI_FROM_PTR_RDX CMT_ASM(".byte 0X48, 0X33, 0X32 # xorq (%rdx), %rsi")
#define XOR_RSI_FROM_PTR_RDI CMT_ASM(".byte 0X48, 0X33, 0X37 # xorq (%rdi), %rsi")
#define XOR_RSI_FROM_PTR_RSI CMT_ASM(".byte 0X48, 0X33, 0X36 # xorq (%rsi), %rsi")
#define XOR_RSI_FROM_PTR_RBP CMT_ASM(".byte 0X48, 0X33, 0X75, 0X00 # xorq (%rbp), %rsi")
#define XOR_RSI_FROM_PTR_RSP CMT_ASM(".byte 0X48, 0X33, 0X34, 0X24 # xorq (%rsp), %rsi")
#define XOR_RSI_FROM_PTR_R8 CMT_ASM(".byte 0X49, 0X33, 0X30 # xorq (%r8), %rsi")
#define XOR_RSI_FROM_PTR_R9 CMT_ASM(".byte 0X49, 0X33, 0X31 # xorq (%r9), %rsi")
#define XOR_RSI_FROM_PTR_R10 CMT_ASM(".byte 0X49, 0X33, 0X32 # xorq (%r10), %rsi")
#define XOR_RSI_FROM_PTR_R11 CMT_ASM(".byte 0X49, 0X33, 0X33 # xorq (%r11), %rsi")
#define XOR_RSI_FROM_PTR_R12 CMT_ASM(".byte 0X49, 0X33, 0X34, 0X24 # xorq (%r12), %rsi")
#define XOR_RSI_FROM_PTR_R13 CMT_ASM(".byte 0X49, 0X33, 0X75, 0X00 # xorq (%r13), %rsi")
#define XOR_RSI_FROM_PTR_R14 CMT_ASM(".byte 0X49, 0X33, 0X36 # xorq (%r14), %rsi")
#define XOR_RSI_FROM_PTR_R15 CMT_ASM(".byte 0X49, 0X33, 0X37 # xorq (%r15), %rsi")
#define XOR_RSI_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X33, 0X30 # xorq (%eax), %rsi")
#define XOR_RSI_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X33, 0X33 # xorq (%ebx), %rsi")
#define XOR_RSI_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X33, 0X31 # xorq (%ecx), %rsi")
#define XOR_RSI_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X33, 0X32 # xorq (%edx), %rsi")
#define XOR_RSI_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X33, 0X37 # xorq (%edi), %rsi")
#define XOR_RSI_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X33, 0X36 # xorq (%esi), %rsi")
#define XOR_RSI_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X33, 0X75, 0X00 # xorq (%ebp), %rsi")
#define XOR_RSI_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X33, 0X34, 0X24 # xorq (%esp), %rsi")

#define XOR_RBP_FROM_PTR_RAX CMT_ASM(".byte 0X48, 0X33, 0X28 # xorq (%rax), %rbp")
#define XOR_RBP_FROM_PTR_RBX CMT_ASM(".byte 0X48, 0X33, 0X2B # xorq (%rbx), %rbp")
#define XOR_RBP_FROM_PTR_RCX CMT_ASM(".byte 0X48, 0X33, 0X29 # xorq (%rcx), %rbp")
#define XOR_RBP_FROM_PTR_RDX CMT_ASM(".byte 0X48, 0X33, 0X2A # xorq (%rdx), %rbp")
#define XOR_RBP_FROM_PTR_RDI CMT_ASM(".byte 0X48, 0X33, 0X2F # xorq (%rdi), %rbp")
#define XOR_RBP_FROM_PTR_RSI CMT_ASM(".byte 0X48, 0X33, 0X2E # xorq (%rsi), %rbp")
#define XOR_RBP_FROM_PTR_RBP CMT_ASM(".byte 0X48, 0X33, 0X6D, 0X00 # xorq (%rbp), %rbp")
#define XOR_RBP_FROM_PTR_RSP CMT_ASM(".byte 0X48, 0X33, 0X2C, 0X24 # xorq (%rsp), %rbp")
#define XOR_RBP_FROM_PTR_R8 CMT_ASM(".byte 0X49, 0X33, 0X28 # xorq (%r8), %rbp")
#define XOR_RBP_FROM_PTR_R9 CMT_ASM(".byte 0X49, 0X33, 0X29 # xorq (%r9), %rbp")
#define XOR_RBP_FROM_PTR_R10 CMT_ASM(".byte 0X49, 0X33, 0X2A # xorq (%r10), %rbp")
#define XOR_RBP_FROM_PTR_R11 CMT_ASM(".byte 0X49, 0X33, 0X2B # xorq (%r11), %rbp")
#define XOR_RBP_FROM_PTR_R12 CMT_ASM(".byte 0X49, 0X33, 0X2C, 0X24 # xorq (%r12), %rbp")
#define XOR_RBP_FROM_PTR_R13 CMT_ASM(".byte 0X49, 0X33, 0X6D, 0X00 # xorq (%r13), %rbp")
#define XOR_RBP_FROM_PTR_R14 CMT_ASM(".byte 0X49, 0X33, 0X2E # xorq (%r14), %rbp")
#define XOR_RBP_FROM_PTR_R15 CMT_ASM(".byte 0X49, 0X33, 0X2F # xorq (%r15), %rbp")
#define XOR_RBP_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X33, 0X28 # xorq (%eax), %rbp")
#define XOR_RBP_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X33, 0X2B # xorq (%ebx), %rbp")
#define XOR_RBP_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X33, 0X29 # xorq (%ecx), %rbp")
#define XOR_RBP_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X33, 0X2A # xorq (%edx), %rbp")
#define XOR_RBP_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X33, 0X2F # xorq (%edi), %rbp")
#define XOR_RBP_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X33, 0X2E # xorq (%esi), %rbp")
#define XOR_RBP_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X33, 0X6D, 0X00 # xorq (%ebp), %rbp")
#define XOR_RBP_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X33, 0X2C, 0X24 # xorq (%esp), %rbp")

#define XOR_RSP_FROM_PTR_RAX CMT_ASM(".byte 0X48, 0X33, 0X20 # xorq (%rax), %rsp")
#define XOR_RSP_FROM_PTR_RBX CMT_ASM(".byte 0X48, 0X33, 0X23 # xorq (%rbx), %rsp")
#define XOR_RSP_FROM_PTR_RCX CMT_ASM(".byte 0X48, 0X33, 0X21 # xorq (%rcx), %rsp")
#define XOR_RSP_FROM_PTR_RDX CMT_ASM(".byte 0X48, 0X33, 0X22 # xorq (%rdx), %rsp")
#define XOR_RSP_FROM_PTR_RDI CMT_ASM(".byte 0X48, 0X33, 0X27 # xorq (%rdi), %rsp")
#define XOR_RSP_FROM_PTR_RSI CMT_ASM(".byte 0X48, 0X33, 0X26 # xorq (%rsi), %rsp")
#define XOR_RSP_FROM_PTR_RBP CMT_ASM(".byte 0X48, 0X33, 0X65, 0X00 # xorq (%rbp), %rsp")
#define XOR_RSP_FROM_PTR_RSP CMT_ASM(".byte 0X48, 0X33, 0X24, 0X24 # xorq (%rsp), %rsp")
#define XOR_RSP_FROM_PTR_R8 CMT_ASM(".byte 0X49, 0X33, 0X20 # xorq (%r8), %rsp")
#define XOR_RSP_FROM_PTR_R9 CMT_ASM(".byte 0X49, 0X33, 0X21 # xorq (%r9), %rsp")
#define XOR_RSP_FROM_PTR_R10 CMT_ASM(".byte 0X49, 0X33, 0X22 # xorq (%r10), %rsp")
#define XOR_RSP_FROM_PTR_R11 CMT_ASM(".byte 0X49, 0X33, 0X23 # xorq (%r11), %rsp")
#define XOR_RSP_FROM_PTR_R12 CMT_ASM(".byte 0X49, 0X33, 0X24, 0X24 # xorq (%r12), %rsp")
#define XOR_RSP_FROM_PTR_R13 CMT_ASM(".byte 0X49, 0X33, 0X65, 0X00 # xorq (%r13), %rsp")
#define XOR_RSP_FROM_PTR_R14 CMT_ASM(".byte 0X49, 0X33, 0X26 # xorq (%r14), %rsp")
#define XOR_RSP_FROM_PTR_R15 CMT_ASM(".byte 0X49, 0X33, 0X27 # xorq (%r15), %rsp")
#define XOR_RSP_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X33, 0X20 # xorq (%eax), %rsp")
#define XOR_RSP_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X33, 0X23 # xorq (%ebx), %rsp")
#define XOR_RSP_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X33, 0X21 # xorq (%ecx), %rsp")
#define XOR_RSP_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X33, 0X22 # xorq (%edx), %rsp")
#define XOR_RSP_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X33, 0X27 # xorq (%edi), %rsp")
#define XOR_RSP_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X33, 0X26 # xorq (%esi), %rsp")
#define XOR_RSP_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X33, 0X65, 0X00 # xorq (%ebp), %rsp")
#define XOR_RSP_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X33, 0X24, 0X24 # xorq (%esp), %rsp")

#define XOR_R8_FROM_PTR_RAX CMT_ASM(".byte 0X4C, 0X33, 0X00 # xorq (%rax), %r8")
#define XOR_R8_FROM_PTR_RBX CMT_ASM(".byte 0X4C, 0X33, 0X03 # xorq (%rbx), %r8")
#define XOR_R8_FROM_PTR_RCX CMT_ASM(".byte 0X4C, 0X33, 0X01 # xorq (%rcx), %r8")
#define XOR_R8_FROM_PTR_RDX CMT_ASM(".byte 0X4C, 0X33, 0X02 # xorq (%rdx), %r8")
#define XOR_R8_FROM_PTR_RDI CMT_ASM(".byte 0X4C, 0X33, 0X07 # xorq (%rdi), %r8")
#define XOR_R8_FROM_PTR_RSI CMT_ASM(".byte 0X4C, 0X33, 0X06 # xorq (%rsi), %r8")
#define XOR_R8_FROM_PTR_RBP CMT_ASM(".byte 0X4C, 0X33, 0X45, 0X00 # xorq (%rbp), %r8")
#define XOR_R8_FROM_PTR_RSP CMT_ASM(".byte 0X4C, 0X33, 0X04, 0X24 # xorq (%rsp), %r8")
#define XOR_R8_FROM_PTR_R8 CMT_ASM(".byte 0X4D, 0X33, 0X00 # xorq (%r8), %r8")
#define XOR_R8_FROM_PTR_R9 CMT_ASM(".byte 0X4D, 0X33, 0X01 # xorq (%r9), %r8")
#define XOR_R8_FROM_PTR_R10 CMT_ASM(".byte 0X4D, 0X33, 0X02 # xorq (%r10), %r8")
#define XOR_R8_FROM_PTR_R11 CMT_ASM(".byte 0X4D, 0X33, 0X03 # xorq (%r11), %r8")
#define XOR_R8_FROM_PTR_R12 CMT_ASM(".byte 0X4D, 0X33, 0X04, 0X24 # xorq (%r12), %r8")
#define XOR_R8_FROM_PTR_R13 CMT_ASM(".byte 0X4D, 0X33, 0X45, 0X00 # xorq (%r13), %r8")
#define XOR_R8_FROM_PTR_R14 CMT_ASM(".byte 0X4D, 0X33, 0X06 # xorq (%r14), %r8")
#define XOR_R8_FROM_PTR_R15 CMT_ASM(".byte 0X4D, 0X33, 0X07 # xorq (%r15), %r8")
#define XOR_R8_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X33, 0X00 # xorq (%eax), %r8")
#define XOR_R8_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X33, 0X03 # xorq (%ebx), %r8")
#define XOR_R8_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X33, 0X01 # xorq (%ecx), %r8")
#define XOR_R8_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X33, 0X02 # xorq (%edx), %r8")
#define XOR_R8_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X33, 0X07 # xorq (%edi), %r8")
#define XOR_R8_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X33, 0X06 # xorq (%esi), %r8")
#define XOR_R8_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X33, 0X45, 0X00 # xorq (%ebp), %r8")
#define XOR_R8_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X33, 0X04, 0X24 # xorq (%esp), %r8")

#define XOR_R9_FROM_PTR_RAX CMT_ASM(".byte 0X4C, 0X33, 0X08 # xorq (%rax), %r9")
#define XOR_R9_FROM_PTR_RBX CMT_ASM(".byte 0X4C, 0X33, 0X0B # xorq (%rbx), %r9")
#define XOR_R9_FROM_PTR_RCX CMT_ASM(".byte 0X4C, 0X33, 0X09 # xorq (%rcx), %r9")
#define XOR_R9_FROM_PTR_RDX CMT_ASM(".byte 0X4C, 0X33, 0X0A # xorq (%rdx), %r9")
#define XOR_R9_FROM_PTR_RDI CMT_ASM(".byte 0X4C, 0X33, 0X0F # xorq (%rdi), %r9")
#define XOR_R9_FROM_PTR_RSI CMT_ASM(".byte 0X4C, 0X33, 0X0E # xorq (%rsi), %r9")
#define XOR_R9_FROM_PTR_RBP CMT_ASM(".byte 0X4C, 0X33, 0X4D, 0X00 # xorq (%rbp), %r9")
#define XOR_R9_FROM_PTR_RSP CMT_ASM(".byte 0X4C, 0X33, 0X0C, 0X24 # xorq (%rsp), %r9")
#define XOR_R9_FROM_PTR_R8 CMT_ASM(".byte 0X4D, 0X33, 0X08 # xorq (%r8), %r9")
#define XOR_R9_FROM_PTR_R9 CMT_ASM(".byte 0X4D, 0X33, 0X09 # xorq (%r9), %r9")
#define XOR_R9_FROM_PTR_R10 CMT_ASM(".byte 0X4D, 0X33, 0X0A # xorq (%r10), %r9")
#define XOR_R9_FROM_PTR_R11 CMT_ASM(".byte 0X4D, 0X33, 0X0B # xorq (%r11), %r9")
#define XOR_R9_FROM_PTR_R12 CMT_ASM(".byte 0X4D, 0X33, 0X0C, 0X24 # xorq (%r12), %r9")
#define XOR_R9_FROM_PTR_R13 CMT_ASM(".byte 0X4D, 0X33, 0X4D, 0X00 # xorq (%r13), %r9")
#define XOR_R9_FROM_PTR_R14 CMT_ASM(".byte 0X4D, 0X33, 0X0E # xorq (%r14), %r9")
#define XOR_R9_FROM_PTR_R15 CMT_ASM(".byte 0X4D, 0X33, 0X0F # xorq (%r15), %r9")
#define XOR_R9_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X33, 0X08 # xorq (%eax), %r9")
#define XOR_R9_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X33, 0X0B # xorq (%ebx), %r9")
#define XOR_R9_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X33, 0X09 # xorq (%ecx), %r9")
#define XOR_R9_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X33, 0X0A # xorq (%edx), %r9")
#define XOR_R9_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X33, 0X0F # xorq (%edi), %r9")
#define XOR_R9_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X33, 0X0E # xorq (%esi), %r9")
#define XOR_R9_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X33, 0X4D, 0X00 # xorq (%ebp), %r9")
#define XOR_R9_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X33, 0X0C, 0X24 # xorq (%esp), %r9")

#define XOR_R10_FROM_PTR_RAX CMT_ASM(".byte 0X4C, 0X33, 0X10 # xorq (%rax), %r10")
#define XOR_R10_FROM_PTR_RBX CMT_ASM(".byte 0X4C, 0X33, 0X13 # xorq (%rbx), %r10")
#define XOR_R10_FROM_PTR_RCX CMT_ASM(".byte 0X4C, 0X33, 0X11 # xorq (%rcx), %r10")
#define XOR_R10_FROM_PTR_RDX CMT_ASM(".byte 0X4C, 0X33, 0X12 # xorq (%rdx), %r10")
#define XOR_R10_FROM_PTR_RDI CMT_ASM(".byte 0X4C, 0X33, 0X17 # xorq (%rdi), %r10")
#define XOR_R10_FROM_PTR_RSI CMT_ASM(".byte 0X4C, 0X33, 0X16 # xorq (%rsi), %r10")
#define XOR_R10_FROM_PTR_RBP CMT_ASM(".byte 0X4C, 0X33, 0X55, 0X00 # xorq (%rbp), %r10")
#define XOR_R10_FROM_PTR_RSP CMT_ASM(".byte 0X4C, 0X33, 0X14, 0X24 # xorq (%rsp), %r10")
#define XOR_R10_FROM_PTR_R8 CMT_ASM(".byte 0X4D, 0X33, 0X10 # xorq (%r8), %r10")
#define XOR_R10_FROM_PTR_R9 CMT_ASM(".byte 0X4D, 0X33, 0X11 # xorq (%r9), %r10")
#define XOR_R10_FROM_PTR_R10 CMT_ASM(".byte 0X4D, 0X33, 0X12 # xorq (%r10), %r10")
#define XOR_R10_FROM_PTR_R11 CMT_ASM(".byte 0X4D, 0X33, 0X13 # xorq (%r11), %r10")
#define XOR_R10_FROM_PTR_R12 CMT_ASM(".byte 0X4D, 0X33, 0X14, 0X24 # xorq (%r12), %r10")
#define XOR_R10_FROM_PTR_R13 CMT_ASM(".byte 0X4D, 0X33, 0X55, 0X00 # xorq (%r13), %r10")
#define XOR_R10_FROM_PTR_R14 CMT_ASM(".byte 0X4D, 0X33, 0X16 # xorq (%r14), %r10")
#define XOR_R10_FROM_PTR_R15 CMT_ASM(".byte 0X4D, 0X33, 0X17 # xorq (%r15), %r10")
#define XOR_R10_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X33, 0X10 # xorq (%eax), %r10")
#define XOR_R10_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X33, 0X13 # xorq (%ebx), %r10")
#define XOR_R10_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X33, 0X11 # xorq (%ecx), %r10")
#define XOR_R10_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X33, 0X12 # xorq (%edx), %r10")
#define XOR_R10_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X33, 0X17 # xorq (%edi), %r10")
#define XOR_R10_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X33, 0X16 # xorq (%esi), %r10")
#define XOR_R10_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X33, 0X55, 0X00 # xorq (%ebp), %r10")
#define XOR_R10_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X33, 0X14, 0X24 # xorq (%esp), %r10")

#define XOR_R11_FROM_PTR_RAX CMT_ASM(".byte 0X4C, 0X33, 0X18 # xorq (%rax), %r11")
#define XOR_R11_FROM_PTR_RBX CMT_ASM(".byte 0X4C, 0X33, 0X1B # xorq (%rbx), %r11")
#define XOR_R11_FROM_PTR_RCX CMT_ASM(".byte 0X4C, 0X33, 0X19 # xorq (%rcx), %r11")
#define XOR_R11_FROM_PTR_RDX CMT_ASM(".byte 0X4C, 0X33, 0X1A # xorq (%rdx), %r11")
#define XOR_R11_FROM_PTR_RDI CMT_ASM(".byte 0X4C, 0X33, 0X1F # xorq (%rdi), %r11")
#define XOR_R11_FROM_PTR_RSI CMT_ASM(".byte 0X4C, 0X33, 0X1E # xorq (%rsi), %r11")
#define XOR_R11_FROM_PTR_RBP CMT_ASM(".byte 0X4C, 0X33, 0X5D, 0X00 # xorq (%rbp), %r11")
#define XOR_R11_FROM_PTR_RSP CMT_ASM(".byte 0X4C, 0X33, 0X1C, 0X24 # xorq (%rsp), %r11")
#define XOR_R11_FROM_PTR_R8 CMT_ASM(".byte 0X4D, 0X33, 0X18 # xorq (%r8), %r11")
#define XOR_R11_FROM_PTR_R9 CMT_ASM(".byte 0X4D, 0X33, 0X19 # xorq (%r9), %r11")
#define XOR_R11_FROM_PTR_R10 CMT_ASM(".byte 0X4D, 0X33, 0X1A # xorq (%r10), %r11")
#define XOR_R11_FROM_PTR_R11 CMT_ASM(".byte 0X4D, 0X33, 0X1B # xorq (%r11), %r11")
#define XOR_R11_FROM_PTR_R12 CMT_ASM(".byte 0X4D, 0X33, 0X1C, 0X24 # xorq (%r12), %r11")
#define XOR_R11_FROM_PTR_R13 CMT_ASM(".byte 0X4D, 0X33, 0X5D, 0X00 # xorq (%r13), %r11")
#define XOR_R11_FROM_PTR_R14 CMT_ASM(".byte 0X4D, 0X33, 0X1E # xorq (%r14), %r11")
#define XOR_R11_FROM_PTR_R15 CMT_ASM(".byte 0X4D, 0X33, 0X1F # xorq (%r15), %r11")
#define XOR_R11_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X33, 0X18 # xorq (%eax), %r11")
#define XOR_R11_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X33, 0X1B # xorq (%ebx), %r11")
#define XOR_R11_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X33, 0X19 # xorq (%ecx), %r11")
#define XOR_R11_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X33, 0X1A # xorq (%edx), %r11")
#define XOR_R11_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X33, 0X1F # xorq (%edi), %r11")
#define XOR_R11_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X33, 0X1E # xorq (%esi), %r11")
#define XOR_R11_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X33, 0X5D, 0X00 # xorq (%ebp), %r11")
#define XOR_R11_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X33, 0X1C, 0X24 # xorq (%esp), %r11")

#define XOR_R12_FROM_PTR_RAX CMT_ASM(".byte 0X4C, 0X33, 0X20 # xorq (%rax), %r12")
#define XOR_R12_FROM_PTR_RBX CMT_ASM(".byte 0X4C, 0X33, 0X23 # xorq (%rbx), %r12")
#define XOR_R12_FROM_PTR_RCX CMT_ASM(".byte 0X4C, 0X33, 0X21 # xorq (%rcx), %r12")
#define XOR_R12_FROM_PTR_RDX CMT_ASM(".byte 0X4C, 0X33, 0X22 # xorq (%rdx), %r12")
#define XOR_R12_FROM_PTR_RDI CMT_ASM(".byte 0X4C, 0X33, 0X27 # xorq (%rdi), %r12")
#define XOR_R12_FROM_PTR_RSI CMT_ASM(".byte 0X4C, 0X33, 0X26 # xorq (%rsi), %r12")
#define XOR_R12_FROM_PTR_RBP CMT_ASM(".byte 0X4C, 0X33, 0X65, 0X00 # xorq (%rbp), %r12")
#define XOR_R12_FROM_PTR_RSP CMT_ASM(".byte 0X4C, 0X33, 0X24, 0X24 # xorq (%rsp), %r12")
#define XOR_R12_FROM_PTR_R8 CMT_ASM(".byte 0X4D, 0X33, 0X20 # xorq (%r8), %r12")
#define XOR_R12_FROM_PTR_R9 CMT_ASM(".byte 0X4D, 0X33, 0X21 # xorq (%r9), %r12")
#define XOR_R12_FROM_PTR_R10 CMT_ASM(".byte 0X4D, 0X33, 0X22 # xorq (%r10), %r12")
#define XOR_R12_FROM_PTR_R11 CMT_ASM(".byte 0X4D, 0X33, 0X23 # xorq (%r11), %r12")
#define XOR_R12_FROM_PTR_R12 CMT_ASM(".byte 0X4D, 0X33, 0X24, 0X24 # xorq (%r12), %r12")
#define XOR_R12_FROM_PTR_R13 CMT_ASM(".byte 0X4D, 0X33, 0X65, 0X00 # xorq (%r13), %r12")
#define XOR_R12_FROM_PTR_R14 CMT_ASM(".byte 0X4D, 0X33, 0X26 # xorq (%r14), %r12")
#define XOR_R12_FROM_PTR_R15 CMT_ASM(".byte 0X4D, 0X33, 0X27 # xorq (%r15), %r12")
#define XOR_R12_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X33, 0X20 # xorq (%eax), %r12")
#define XOR_R12_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X33, 0X23 # xorq (%ebx), %r12")
#define XOR_R12_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X33, 0X21 # xorq (%ecx), %r12")
#define XOR_R12_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X33, 0X22 # xorq (%edx), %r12")
#define XOR_R12_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X33, 0X27 # xorq (%edi), %r12")
#define XOR_R12_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X33, 0X26 # xorq (%esi), %r12")
#define XOR_R12_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X33, 0X65, 0X00 # xorq (%ebp), %r12")
#define XOR_R12_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X33, 0X24, 0X24 # xorq (%esp), %r12")

#define XOR_R13_FROM_PTR_RAX CMT_ASM(".byte 0X4C, 0X33, 0X28 # xorq (%rax), %r13")
#define XOR_R13_FROM_PTR_RBX CMT_ASM(".byte 0X4C, 0X33, 0X2B # xorq (%rbx), %r13")
#define XOR_R13_FROM_PTR_RCX CMT_ASM(".byte 0X4C, 0X33, 0X29 # xorq (%rcx), %r13")
#define XOR_R13_FROM_PTR_RDX CMT_ASM(".byte 0X4C, 0X33, 0X2A # xorq (%rdx), %r13")
#define XOR_R13_FROM_PTR_RDI CMT_ASM(".byte 0X4C, 0X33, 0X2F # xorq (%rdi), %r13")
#define XOR_R13_FROM_PTR_RSI CMT_ASM(".byte 0X4C, 0X33, 0X2E # xorq (%rsi), %r13")
#define XOR_R13_FROM_PTR_RBP CMT_ASM(".byte 0X4C, 0X33, 0X6D, 0X00 # xorq (%rbp), %r13")
#define XOR_R13_FROM_PTR_RSP CMT_ASM(".byte 0X4C, 0X33, 0X2C, 0X24 # xorq (%rsp), %r13")
#define XOR_R13_FROM_PTR_R8 CMT_ASM(".byte 0X4D, 0X33, 0X28 # xorq (%r8), %r13")
#define XOR_R13_FROM_PTR_R9 CMT_ASM(".byte 0X4D, 0X33, 0X29 # xorq (%r9), %r13")
#define XOR_R13_FROM_PTR_R10 CMT_ASM(".byte 0X4D, 0X33, 0X2A # xorq (%r10), %r13")
#define XOR_R13_FROM_PTR_R11 CMT_ASM(".byte 0X4D, 0X33, 0X2B # xorq (%r11), %r13")
#define XOR_R13_FROM_PTR_R12 CMT_ASM(".byte 0X4D, 0X33, 0X2C, 0X24 # xorq (%r12), %r13")
#define XOR_R13_FROM_PTR_R13 CMT_ASM(".byte 0X4D, 0X33, 0X6D, 0X00 # xorq (%r13), %r13")
#define XOR_R13_FROM_PTR_R14 CMT_ASM(".byte 0X4D, 0X33, 0X2E # xorq (%r14), %r13")
#define XOR_R13_FROM_PTR_R15 CMT_ASM(".byte 0X4D, 0X33, 0X2F # xorq (%r15), %r13")
#define XOR_R13_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X33, 0X28 # xorq (%eax), %r13")
#define XOR_R13_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X33, 0X2B # xorq (%ebx), %r13")
#define XOR_R13_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X33, 0X29 # xorq (%ecx), %r13")
#define XOR_R13_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X33, 0X2A # xorq (%edx), %r13")
#define XOR_R13_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X33, 0X2F # xorq (%edi), %r13")
#define XOR_R13_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X33, 0X2E # xorq (%esi), %r13")
#define XOR_R13_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X33, 0X6D, 0X00 # xorq (%ebp), %r13")
#define XOR_R13_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X33, 0X2C, 0X24 # xorq (%esp), %r13")

#define XOR_R14_FROM_PTR_RAX CMT_ASM(".byte 0X4C, 0X33, 0X30 # xorq (%rax), %r14")
#define XOR_R14_FROM_PTR_RBX CMT_ASM(".byte 0X4C, 0X33, 0X33 # xorq (%rbx), %r14")
#define XOR_R14_FROM_PTR_RCX CMT_ASM(".byte 0X4C, 0X33, 0X31 # xorq (%rcx), %r14")
#define XOR_R14_FROM_PTR_RDX CMT_ASM(".byte 0X4C, 0X33, 0X32 # xorq (%rdx), %r14")
#define XOR_R14_FROM_PTR_RDI CMT_ASM(".byte 0X4C, 0X33, 0X37 # xorq (%rdi), %r14")
#define XOR_R14_FROM_PTR_RSI CMT_ASM(".byte 0X4C, 0X33, 0X36 # xorq (%rsi), %r14")
#define XOR_R14_FROM_PTR_RBP CMT_ASM(".byte 0X4C, 0X33, 0X75, 0X00 # xorq (%rbp), %r14")
#define XOR_R14_FROM_PTR_RSP CMT_ASM(".byte 0X4C, 0X33, 0X34, 0X24 # xorq (%rsp), %r14")
#define XOR_R14_FROM_PTR_R8 CMT_ASM(".byte 0X4D, 0X33, 0X30 # xorq (%r8), %r14")
#define XOR_R14_FROM_PTR_R9 CMT_ASM(".byte 0X4D, 0X33, 0X31 # xorq (%r9), %r14")
#define XOR_R14_FROM_PTR_R10 CMT_ASM(".byte 0X4D, 0X33, 0X32 # xorq (%r10), %r14")
#define XOR_R14_FROM_PTR_R11 CMT_ASM(".byte 0X4D, 0X33, 0X33 # xorq (%r11), %r14")
#define XOR_R14_FROM_PTR_R12 CMT_ASM(".byte 0X4D, 0X33, 0X34, 0X24 # xorq (%r12), %r14")
#define XOR_R14_FROM_PTR_R13 CMT_ASM(".byte 0X4D, 0X33, 0X75, 0X00 # xorq (%r13), %r14")
#define XOR_R14_FROM_PTR_R14 CMT_ASM(".byte 0X4D, 0X33, 0X36 # xorq (%r14), %r14")
#define XOR_R14_FROM_PTR_R15 CMT_ASM(".byte 0X4D, 0X33, 0X37 # xorq (%r15), %r14")
#define XOR_R14_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X33, 0X30 # xorq (%eax), %r14")
#define XOR_R14_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X33, 0X33 # xorq (%ebx), %r14")
#define XOR_R14_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X33, 0X31 # xorq (%ecx), %r14")
#define XOR_R14_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X33, 0X32 # xorq (%edx), %r14")
#define XOR_R14_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X33, 0X37 # xorq (%edi), %r14")
#define XOR_R14_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X33, 0X36 # xorq (%esi), %r14")
#define XOR_R14_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X33, 0X75, 0X00 # xorq (%ebp), %r14")
#define XOR_R14_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X33, 0X34, 0X24 # xorq (%esp), %r14")

#define XOR_R15_FROM_PTR_RAX CMT_ASM(".byte 0X4C, 0X33, 0X38 # xorq (%rax), %r15")
#define XOR_R15_FROM_PTR_RBX CMT_ASM(".byte 0X4C, 0X33, 0X3B # xorq (%rbx), %r15")
#define XOR_R15_FROM_PTR_RCX CMT_ASM(".byte 0X4C, 0X33, 0X39 # xorq (%rcx), %r15")
#define XOR_R15_FROM_PTR_RDX CMT_ASM(".byte 0X4C, 0X33, 0X3A # xorq (%rdx), %r15")
#define XOR_R15_FROM_PTR_RDI CMT_ASM(".byte 0X4C, 0X33, 0X3F # xorq (%rdi), %r15")
#define XOR_R15_FROM_PTR_RSI CMT_ASM(".byte 0X4C, 0X33, 0X3E # xorq (%rsi), %r15")
#define XOR_R15_FROM_PTR_RBP CMT_ASM(".byte 0X4C, 0X33, 0X7D, 0X00 # xorq (%rbp), %r15")
#define XOR_R15_FROM_PTR_RSP CMT_ASM(".byte 0X4C, 0X33, 0X3C, 0X24 # xorq (%rsp), %r15")
#define XOR_R15_FROM_PTR_R8 CMT_ASM(".byte 0X4D, 0X33, 0X38 # xorq (%r8), %r15")
#define XOR_R15_FROM_PTR_R9 CMT_ASM(".byte 0X4D, 0X33, 0X39 # xorq (%r9), %r15")
#define XOR_R15_FROM_PTR_R10 CMT_ASM(".byte 0X4D, 0X33, 0X3A # xorq (%r10), %r15")
#define XOR_R15_FROM_PTR_R11 CMT_ASM(".byte 0X4D, 0X33, 0X3B # xorq (%r11), %r15")
#define XOR_R15_FROM_PTR_R12 CMT_ASM(".byte 0X4D, 0X33, 0X3C, 0X24 # xorq (%r12), %r15")
#define XOR_R15_FROM_PTR_R13 CMT_ASM(".byte 0X4D, 0X33, 0X7D, 0X00 # xorq (%r13), %r15")
#define XOR_R15_FROM_PTR_R14 CMT_ASM(".byte 0X4D, 0X33, 0X3E # xorq (%r14), %r15")
#define XOR_R15_FROM_PTR_R15 CMT_ASM(".byte 0X4D, 0X33, 0X3F # xorq (%r15), %r15")
#define XOR_R15_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X33, 0X38 # xorq (%eax), %r15")
#define XOR_R15_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X33, 0X3B # xorq (%ebx), %r15")
#define XOR_R15_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X33, 0X39 # xorq (%ecx), %r15")
#define XOR_R15_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X33, 0X3A # xorq (%edx), %r15")
#define XOR_R15_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X33, 0X3F # xorq (%edi), %r15")
#define XOR_R15_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X33, 0X3E # xorq (%esi), %r15")
#define XOR_R15_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X33, 0X7D, 0X00 # xorq (%ebp), %r15")
#define XOR_R15_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X33, 0X3C, 0X24 # xorq (%esp), %r15")

#define XOR_RAX_TO_PTR_RAX CMT_ASM(".byte 0X48, 0X31, 0X00 # xorq %rax, (%rax)")
#define XOR_RAX_TO_PTR_RBX CMT_ASM(".byte 0X48, 0X31, 0X03 # xorq %rax, (%rbx)")
#define XOR_RAX_TO_PTR_RCX CMT_ASM(".byte 0X48, 0X31, 0X01 # xorq %rax, (%rcx)")
#define XOR_RAX_TO_PTR_RDX CMT_ASM(".byte 0X48, 0X31, 0X02 # xorq %rax, (%rdx)")
#define XOR_RAX_TO_PTR_RDI CMT_ASM(".byte 0X48, 0X31, 0X07 # xorq %rax, (%rdi)")
#define XOR_RAX_TO_PTR_RSI CMT_ASM(".byte 0X48, 0X31, 0X06 # xorq %rax, (%rsi)")
#define XOR_RAX_TO_PTR_RBP CMT_ASM(".byte 0X48, 0X31, 0X45, 0X00 # xorq %rax, (%rbp)")
#define XOR_RAX_TO_PTR_RSP CMT_ASM(".byte 0X48, 0X31, 0X04, 0X24 # xorq %rax, (%rsp)")
#define XOR_RAX_TO_PTR_R8 CMT_ASM(".byte 0X49, 0X31, 0X00 # xorq %rax, (%r8)")
#define XOR_RAX_TO_PTR_R9 CMT_ASM(".byte 0X49, 0X31, 0X01 # xorq %rax, (%r9)")
#define XOR_RAX_TO_PTR_R10 CMT_ASM(".byte 0X49, 0X31, 0X02 # xorq %rax, (%r10)")
#define XOR_RAX_TO_PTR_R11 CMT_ASM(".byte 0X49, 0X31, 0X03 # xorq %rax, (%r11)")
#define XOR_RAX_TO_PTR_R12 CMT_ASM(".byte 0X49, 0X31, 0X04, 0X24 # xorq %rax, (%r12)")
#define XOR_RAX_TO_PTR_R13 CMT_ASM(".byte 0X49, 0X31, 0X45, 0X00 # xorq %rax, (%r13)")
#define XOR_RAX_TO_PTR_R14 CMT_ASM(".byte 0X49, 0X31, 0X06 # xorq %rax, (%r14)")
#define XOR_RAX_TO_PTR_R15 CMT_ASM(".byte 0X49, 0X31, 0X07 # xorq %rax, (%r15)")
#define XOR_RAX_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X31, 0X00 # xorq %rax, (%eax)")
#define XOR_RAX_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X31, 0X03 # xorq %rax, (%ebx)")
#define XOR_RAX_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X31, 0X01 # xorq %rax, (%ecx)")
#define XOR_RAX_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X31, 0X02 # xorq %rax, (%edx)")
#define XOR_RAX_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X31, 0X07 # xorq %rax, (%edi)")
#define XOR_RAX_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X31, 0X06 # xorq %rax, (%esi)")
#define XOR_RAX_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X31, 0X45, 0X00 # xorq %rax, (%ebp)")
#define XOR_RAX_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X31, 0X04, 0X24 # xorq %rax, (%esp)")

#define XOR_RBX_TO_PTR_RAX CMT_ASM(".byte 0X48, 0X31, 0X18 # xorq %rbx, (%rax)")
#define XOR_RBX_TO_PTR_RBX CMT_ASM(".byte 0X48, 0X31, 0X1B # xorq %rbx, (%rbx)")
#define XOR_RBX_TO_PTR_RCX CMT_ASM(".byte 0X48, 0X31, 0X19 # xorq %rbx, (%rcx)")
#define XOR_RBX_TO_PTR_RDX CMT_ASM(".byte 0X48, 0X31, 0X1A # xorq %rbx, (%rdx)")
#define XOR_RBX_TO_PTR_RDI CMT_ASM(".byte 0X48, 0X31, 0X1F # xorq %rbx, (%rdi)")
#define XOR_RBX_TO_PTR_RSI CMT_ASM(".byte 0X48, 0X31, 0X1E # xorq %rbx, (%rsi)")
#define XOR_RBX_TO_PTR_RBP CMT_ASM(".byte 0X48, 0X31, 0X5D, 0X00 # xorq %rbx, (%rbp)")
#define XOR_RBX_TO_PTR_RSP CMT_ASM(".byte 0X48, 0X31, 0X1C, 0X24 # xorq %rbx, (%rsp)")
#define XOR_RBX_TO_PTR_R8 CMT_ASM(".byte 0X49, 0X31, 0X18 # xorq %rbx, (%r8)")
#define XOR_RBX_TO_PTR_R9 CMT_ASM(".byte 0X49, 0X31, 0X19 # xorq %rbx, (%r9)")
#define XOR_RBX_TO_PTR_R10 CMT_ASM(".byte 0X49, 0X31, 0X1A # xorq %rbx, (%r10)")
#define XOR_RBX_TO_PTR_R11 CMT_ASM(".byte 0X49, 0X31, 0X1B # xorq %rbx, (%r11)")
#define XOR_RBX_TO_PTR_R12 CMT_ASM(".byte 0X49, 0X31, 0X1C, 0X24 # xorq %rbx, (%r12)")
#define XOR_RBX_TO_PTR_R13 CMT_ASM(".byte 0X49, 0X31, 0X5D, 0X00 # xorq %rbx, (%r13)")
#define XOR_RBX_TO_PTR_R14 CMT_ASM(".byte 0X49, 0X31, 0X1E # xorq %rbx, (%r14)")
#define XOR_RBX_TO_PTR_R15 CMT_ASM(".byte 0X49, 0X31, 0X1F # xorq %rbx, (%r15)")
#define XOR_RBX_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X31, 0X18 # xorq %rbx, (%eax)")
#define XOR_RBX_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X31, 0X1B # xorq %rbx, (%ebx)")
#define XOR_RBX_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X31, 0X19 # xorq %rbx, (%ecx)")
#define XOR_RBX_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X31, 0X1A # xorq %rbx, (%edx)")
#define XOR_RBX_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X31, 0X1F # xorq %rbx, (%edi)")
#define XOR_RBX_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X31, 0X1E # xorq %rbx, (%esi)")
#define XOR_RBX_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X31, 0X5D, 0X00 # xorq %rbx, (%ebp)")
#define XOR_RBX_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X31, 0X1C, 0X24 # xorq %rbx, (%esp)")

#define XOR_RCX_TO_PTR_RAX CMT_ASM(".byte 0X48, 0X31, 0X08 # xorq %rcx, (%rax)")
#define XOR_RCX_TO_PTR_RBX CMT_ASM(".byte 0X48, 0X31, 0X0B # xorq %rcx, (%rbx)")
#define XOR_RCX_TO_PTR_RCX CMT_ASM(".byte 0X48, 0X31, 0X09 # xorq %rcx, (%rcx)")
#define XOR_RCX_TO_PTR_RDX CMT_ASM(".byte 0X48, 0X31, 0X0A # xorq %rcx, (%rdx)")
#define XOR_RCX_TO_PTR_RDI CMT_ASM(".byte 0X48, 0X31, 0X0F # xorq %rcx, (%rdi)")
#define XOR_RCX_TO_PTR_RSI CMT_ASM(".byte 0X48, 0X31, 0X0E # xorq %rcx, (%rsi)")
#define XOR_RCX_TO_PTR_RBP CMT_ASM(".byte 0X48, 0X31, 0X4D, 0X00 # xorq %rcx, (%rbp)")
#define XOR_RCX_TO_PTR_RSP CMT_ASM(".byte 0X48, 0X31, 0X0C, 0X24 # xorq %rcx, (%rsp)")
#define XOR_RCX_TO_PTR_R8 CMT_ASM(".byte 0X49, 0X31, 0X08 # xorq %rcx, (%r8)")
#define XOR_RCX_TO_PTR_R9 CMT_ASM(".byte 0X49, 0X31, 0X09 # xorq %rcx, (%r9)")
#define XOR_RCX_TO_PTR_R10 CMT_ASM(".byte 0X49, 0X31, 0X0A # xorq %rcx, (%r10)")
#define XOR_RCX_TO_PTR_R11 CMT_ASM(".byte 0X49, 0X31, 0X0B # xorq %rcx, (%r11)")
#define XOR_RCX_TO_PTR_R12 CMT_ASM(".byte 0X49, 0X31, 0X0C, 0X24 # xorq %rcx, (%r12)")
#define XOR_RCX_TO_PTR_R13 CMT_ASM(".byte 0X49, 0X31, 0X4D, 0X00 # xorq %rcx, (%r13)")
#define XOR_RCX_TO_PTR_R14 CMT_ASM(".byte 0X49, 0X31, 0X0E # xorq %rcx, (%r14)")
#define XOR_RCX_TO_PTR_R15 CMT_ASM(".byte 0X49, 0X31, 0X0F # xorq %rcx, (%r15)")
#define XOR_RCX_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X31, 0X08 # xorq %rcx, (%eax)")
#define XOR_RCX_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X31, 0X0B # xorq %rcx, (%ebx)")
#define XOR_RCX_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X31, 0X09 # xorq %rcx, (%ecx)")
#define XOR_RCX_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X31, 0X0A # xorq %rcx, (%edx)")
#define XOR_RCX_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X31, 0X0F # xorq %rcx, (%edi)")
#define XOR_RCX_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X31, 0X0E # xorq %rcx, (%esi)")
#define XOR_RCX_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X31, 0X4D, 0X00 # xorq %rcx, (%ebp)")
#define XOR_RCX_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X31, 0X0C, 0X24 # xorq %rcx, (%esp)")

#define XOR_RDX_TO_PTR_RAX CMT_ASM(".byte 0X48, 0X31, 0X10 # xorq %rdx, (%rax)")
#define XOR_RDX_TO_PTR_RBX CMT_ASM(".byte 0X48, 0X31, 0X13 # xorq %rdx, (%rbx)")
#define XOR_RDX_TO_PTR_RCX CMT_ASM(".byte 0X48, 0X31, 0X11 # xorq %rdx, (%rcx)")
#define XOR_RDX_TO_PTR_RDX CMT_ASM(".byte 0X48, 0X31, 0X12 # xorq %rdx, (%rdx)")
#define XOR_RDX_TO_PTR_RDI CMT_ASM(".byte 0X48, 0X31, 0X17 # xorq %rdx, (%rdi)")
#define XOR_RDX_TO_PTR_RSI CMT_ASM(".byte 0X48, 0X31, 0X16 # xorq %rdx, (%rsi)")
#define XOR_RDX_TO_PTR_RBP CMT_ASM(".byte 0X48, 0X31, 0X55, 0X00 # xorq %rdx, (%rbp)")
#define XOR_RDX_TO_PTR_RSP CMT_ASM(".byte 0X48, 0X31, 0X14, 0X24 # xorq %rdx, (%rsp)")
#define XOR_RDX_TO_PTR_R8 CMT_ASM(".byte 0X49, 0X31, 0X10 # xorq %rdx, (%r8)")
#define XOR_RDX_TO_PTR_R9 CMT_ASM(".byte 0X49, 0X31, 0X11 # xorq %rdx, (%r9)")
#define XOR_RDX_TO_PTR_R10 CMT_ASM(".byte 0X49, 0X31, 0X12 # xorq %rdx, (%r10)")
#define XOR_RDX_TO_PTR_R11 CMT_ASM(".byte 0X49, 0X31, 0X13 # xorq %rdx, (%r11)")
#define XOR_RDX_TO_PTR_R12 CMT_ASM(".byte 0X49, 0X31, 0X14, 0X24 # xorq %rdx, (%r12)")
#define XOR_RDX_TO_PTR_R13 CMT_ASM(".byte 0X49, 0X31, 0X55, 0X00 # xorq %rdx, (%r13)")
#define XOR_RDX_TO_PTR_R14 CMT_ASM(".byte 0X49, 0X31, 0X16 # xorq %rdx, (%r14)")
#define XOR_RDX_TO_PTR_R15 CMT_ASM(".byte 0X49, 0X31, 0X17 # xorq %rdx, (%r15)")
#define XOR_RDX_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X31, 0X10 # xorq %rdx, (%eax)")
#define XOR_RDX_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X31, 0X13 # xorq %rdx, (%ebx)")
#define XOR_RDX_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X31, 0X11 # xorq %rdx, (%ecx)")
#define XOR_RDX_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X31, 0X12 # xorq %rdx, (%edx)")
#define XOR_RDX_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X31, 0X17 # xorq %rdx, (%edi)")
#define XOR_RDX_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X31, 0X16 # xorq %rdx, (%esi)")
#define XOR_RDX_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X31, 0X55, 0X00 # xorq %rdx, (%ebp)")
#define XOR_RDX_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X31, 0X14, 0X24 # xorq %rdx, (%esp)")

#define XOR_RDI_TO_PTR_RAX CMT_ASM(".byte 0X48, 0X31, 0X38 # xorq %rdi, (%rax)")
#define XOR_RDI_TO_PTR_RBX CMT_ASM(".byte 0X48, 0X31, 0X3B # xorq %rdi, (%rbx)")
#define XOR_RDI_TO_PTR_RCX CMT_ASM(".byte 0X48, 0X31, 0X39 # xorq %rdi, (%rcx)")
#define XOR_RDI_TO_PTR_RDX CMT_ASM(".byte 0X48, 0X31, 0X3A # xorq %rdi, (%rdx)")
#define XOR_RDI_TO_PTR_RDI CMT_ASM(".byte 0X48, 0X31, 0X3F # xorq %rdi, (%rdi)")
#define XOR_RDI_TO_PTR_RSI CMT_ASM(".byte 0X48, 0X31, 0X3E # xorq %rdi, (%rsi)")
#define XOR_RDI_TO_PTR_RBP CMT_ASM(".byte 0X48, 0X31, 0X7D, 0X00 # xorq %rdi, (%rbp)")
#define XOR_RDI_TO_PTR_RSP CMT_ASM(".byte 0X48, 0X31, 0X3C, 0X24 # xorq %rdi, (%rsp)")
#define XOR_RDI_TO_PTR_R8 CMT_ASM(".byte 0X49, 0X31, 0X38 # xorq %rdi, (%r8)")
#define XOR_RDI_TO_PTR_R9 CMT_ASM(".byte 0X49, 0X31, 0X39 # xorq %rdi, (%r9)")
#define XOR_RDI_TO_PTR_R10 CMT_ASM(".byte 0X49, 0X31, 0X3A # xorq %rdi, (%r10)")
#define XOR_RDI_TO_PTR_R11 CMT_ASM(".byte 0X49, 0X31, 0X3B # xorq %rdi, (%r11)")
#define XOR_RDI_TO_PTR_R12 CMT_ASM(".byte 0X49, 0X31, 0X3C, 0X24 # xorq %rdi, (%r12)")
#define XOR_RDI_TO_PTR_R13 CMT_ASM(".byte 0X49, 0X31, 0X7D, 0X00 # xorq %rdi, (%r13)")
#define XOR_RDI_TO_PTR_R14 CMT_ASM(".byte 0X49, 0X31, 0X3E # xorq %rdi, (%r14)")
#define XOR_RDI_TO_PTR_R15 CMT_ASM(".byte 0X49, 0X31, 0X3F # xorq %rdi, (%r15)")
#define XOR_RDI_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X31, 0X38 # xorq %rdi, (%eax)")
#define XOR_RDI_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X31, 0X3B # xorq %rdi, (%ebx)")
#define XOR_RDI_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X31, 0X39 # xorq %rdi, (%ecx)")
#define XOR_RDI_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X31, 0X3A # xorq %rdi, (%edx)")
#define XOR_RDI_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X31, 0X3F # xorq %rdi, (%edi)")
#define XOR_RDI_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X31, 0X3E # xorq %rdi, (%esi)")
#define XOR_RDI_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X31, 0X7D, 0X00 # xorq %rdi, (%ebp)")
#define XOR_RDI_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X31, 0X3C, 0X24 # xorq %rdi, (%esp)")

#define XOR_RSI_TO_PTR_RAX CMT_ASM(".byte 0X48, 0X31, 0X30 # xorq %rsi, (%rax)")
#define XOR_RSI_TO_PTR_RBX CMT_ASM(".byte 0X48, 0X31, 0X33 # xorq %rsi, (%rbx)")
#define XOR_RSI_TO_PTR_RCX CMT_ASM(".byte 0X48, 0X31, 0X31 # xorq %rsi, (%rcx)")
#define XOR_RSI_TO_PTR_RDX CMT_ASM(".byte 0X48, 0X31, 0X32 # xorq %rsi, (%rdx)")
#define XOR_RSI_TO_PTR_RDI CMT_ASM(".byte 0X48, 0X31, 0X37 # xorq %rsi, (%rdi)")
#define XOR_RSI_TO_PTR_RSI CMT_ASM(".byte 0X48, 0X31, 0X36 # xorq %rsi, (%rsi)")
#define XOR_RSI_TO_PTR_RBP CMT_ASM(".byte 0X48, 0X31, 0X75, 0X00 # xorq %rsi, (%rbp)")
#define XOR_RSI_TO_PTR_RSP CMT_ASM(".byte 0X48, 0X31, 0X34, 0X24 # xorq %rsi, (%rsp)")
#define XOR_RSI_TO_PTR_R8 CMT_ASM(".byte 0X49, 0X31, 0X30 # xorq %rsi, (%r8)")
#define XOR_RSI_TO_PTR_R9 CMT_ASM(".byte 0X49, 0X31, 0X31 # xorq %rsi, (%r9)")
#define XOR_RSI_TO_PTR_R10 CMT_ASM(".byte 0X49, 0X31, 0X32 # xorq %rsi, (%r10)")
#define XOR_RSI_TO_PTR_R11 CMT_ASM(".byte 0X49, 0X31, 0X33 # xorq %rsi, (%r11)")
#define XOR_RSI_TO_PTR_R12 CMT_ASM(".byte 0X49, 0X31, 0X34, 0X24 # xorq %rsi, (%r12)")
#define XOR_RSI_TO_PTR_R13 CMT_ASM(".byte 0X49, 0X31, 0X75, 0X00 # xorq %rsi, (%r13)")
#define XOR_RSI_TO_PTR_R14 CMT_ASM(".byte 0X49, 0X31, 0X36 # xorq %rsi, (%r14)")
#define XOR_RSI_TO_PTR_R15 CMT_ASM(".byte 0X49, 0X31, 0X37 # xorq %rsi, (%r15)")
#define XOR_RSI_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X31, 0X30 # xorq %rsi, (%eax)")
#define XOR_RSI_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X31, 0X33 # xorq %rsi, (%ebx)")
#define XOR_RSI_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X31, 0X31 # xorq %rsi, (%ecx)")
#define XOR_RSI_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X31, 0X32 # xorq %rsi, (%edx)")
#define XOR_RSI_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X31, 0X37 # xorq %rsi, (%edi)")
#define XOR_RSI_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X31, 0X36 # xorq %rsi, (%esi)")
#define XOR_RSI_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X31, 0X75, 0X00 # xorq %rsi, (%ebp)")
#define XOR_RSI_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X31, 0X34, 0X24 # xorq %rsi, (%esp)")

#define XOR_RBP_TO_PTR_RAX CMT_ASM(".byte 0X48, 0X31, 0X28 # xorq %rbp, (%rax)")
#define XOR_RBP_TO_PTR_RBX CMT_ASM(".byte 0X48, 0X31, 0X2B # xorq %rbp, (%rbx)")
#define XOR_RBP_TO_PTR_RCX CMT_ASM(".byte 0X48, 0X31, 0X29 # xorq %rbp, (%rcx)")
#define XOR_RBP_TO_PTR_RDX CMT_ASM(".byte 0X48, 0X31, 0X2A # xorq %rbp, (%rdx)")
#define XOR_RBP_TO_PTR_RDI CMT_ASM(".byte 0X48, 0X31, 0X2F # xorq %rbp, (%rdi)")
#define XOR_RBP_TO_PTR_RSI CMT_ASM(".byte 0X48, 0X31, 0X2E # xorq %rbp, (%rsi)")
#define XOR_RBP_TO_PTR_RBP CMT_ASM(".byte 0X48, 0X31, 0X6D, 0X00 # xorq %rbp, (%rbp)")
#define XOR_RBP_TO_PTR_RSP CMT_ASM(".byte 0X48, 0X31, 0X2C, 0X24 # xorq %rbp, (%rsp)")
#define XOR_RBP_TO_PTR_R8 CMT_ASM(".byte 0X49, 0X31, 0X28 # xorq %rbp, (%r8)")
#define XOR_RBP_TO_PTR_R9 CMT_ASM(".byte 0X49, 0X31, 0X29 # xorq %rbp, (%r9)")
#define XOR_RBP_TO_PTR_R10 CMT_ASM(".byte 0X49, 0X31, 0X2A # xorq %rbp, (%r10)")
#define XOR_RBP_TO_PTR_R11 CMT_ASM(".byte 0X49, 0X31, 0X2B # xorq %rbp, (%r11)")
#define XOR_RBP_TO_PTR_R12 CMT_ASM(".byte 0X49, 0X31, 0X2C, 0X24 # xorq %rbp, (%r12)")
#define XOR_RBP_TO_PTR_R13 CMT_ASM(".byte 0X49, 0X31, 0X6D, 0X00 # xorq %rbp, (%r13)")
#define XOR_RBP_TO_PTR_R14 CMT_ASM(".byte 0X49, 0X31, 0X2E # xorq %rbp, (%r14)")
#define XOR_RBP_TO_PTR_R15 CMT_ASM(".byte 0X49, 0X31, 0X2F # xorq %rbp, (%r15)")
#define XOR_RBP_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X31, 0X28 # xorq %rbp, (%eax)")
#define XOR_RBP_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X31, 0X2B # xorq %rbp, (%ebx)")
#define XOR_RBP_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X31, 0X29 # xorq %rbp, (%ecx)")
#define XOR_RBP_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X31, 0X2A # xorq %rbp, (%edx)")
#define XOR_RBP_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X31, 0X2F # xorq %rbp, (%edi)")
#define XOR_RBP_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X31, 0X2E # xorq %rbp, (%esi)")
#define XOR_RBP_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X31, 0X6D, 0X00 # xorq %rbp, (%ebp)")
#define XOR_RBP_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X31, 0X2C, 0X24 # xorq %rbp, (%esp)")

#define XOR_RSP_TO_PTR_RAX CMT_ASM(".byte 0X48, 0X31, 0X20 # xorq %rsp, (%rax)")
#define XOR_RSP_TO_PTR_RBX CMT_ASM(".byte 0X48, 0X31, 0X23 # xorq %rsp, (%rbx)")
#define XOR_RSP_TO_PTR_RCX CMT_ASM(".byte 0X48, 0X31, 0X21 # xorq %rsp, (%rcx)")
#define XOR_RSP_TO_PTR_RDX CMT_ASM(".byte 0X48, 0X31, 0X22 # xorq %rsp, (%rdx)")
#define XOR_RSP_TO_PTR_RDI CMT_ASM(".byte 0X48, 0X31, 0X27 # xorq %rsp, (%rdi)")
#define XOR_RSP_TO_PTR_RSI CMT_ASM(".byte 0X48, 0X31, 0X26 # xorq %rsp, (%rsi)")
#define XOR_RSP_TO_PTR_RBP CMT_ASM(".byte 0X48, 0X31, 0X65, 0X00 # xorq %rsp, (%rbp)")
#define XOR_RSP_TO_PTR_RSP CMT_ASM(".byte 0X48, 0X31, 0X24, 0X24 # xorq %rsp, (%rsp)")
#define XOR_RSP_TO_PTR_R8 CMT_ASM(".byte 0X49, 0X31, 0X20 # xorq %rsp, (%r8)")
#define XOR_RSP_TO_PTR_R9 CMT_ASM(".byte 0X49, 0X31, 0X21 # xorq %rsp, (%r9)")
#define XOR_RSP_TO_PTR_R10 CMT_ASM(".byte 0X49, 0X31, 0X22 # xorq %rsp, (%r10)")
#define XOR_RSP_TO_PTR_R11 CMT_ASM(".byte 0X49, 0X31, 0X23 # xorq %rsp, (%r11)")
#define XOR_RSP_TO_PTR_R12 CMT_ASM(".byte 0X49, 0X31, 0X24, 0X24 # xorq %rsp, (%r12)")
#define XOR_RSP_TO_PTR_R13 CMT_ASM(".byte 0X49, 0X31, 0X65, 0X00 # xorq %rsp, (%r13)")
#define XOR_RSP_TO_PTR_R14 CMT_ASM(".byte 0X49, 0X31, 0X26 # xorq %rsp, (%r14)")
#define XOR_RSP_TO_PTR_R15 CMT_ASM(".byte 0X49, 0X31, 0X27 # xorq %rsp, (%r15)")
#define XOR_RSP_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X31, 0X20 # xorq %rsp, (%eax)")
#define XOR_RSP_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X31, 0X23 # xorq %rsp, (%ebx)")
#define XOR_RSP_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X31, 0X21 # xorq %rsp, (%ecx)")
#define XOR_RSP_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X31, 0X22 # xorq %rsp, (%edx)")
#define XOR_RSP_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X31, 0X27 # xorq %rsp, (%edi)")
#define XOR_RSP_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X31, 0X26 # xorq %rsp, (%esi)")
#define XOR_RSP_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X31, 0X65, 0X00 # xorq %rsp, (%ebp)")
#define XOR_RSP_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X31, 0X24, 0X24 # xorq %rsp, (%esp)")

#define XOR_R8_TO_PTR_RAX CMT_ASM(".byte 0X4C, 0X31, 0X00 # xorq %r8, (%rax)")
#define XOR_R8_TO_PTR_RBX CMT_ASM(".byte 0X4C, 0X31, 0X03 # xorq %r8, (%rbx)")
#define XOR_R8_TO_PTR_RCX CMT_ASM(".byte 0X4C, 0X31, 0X01 # xorq %r8, (%rcx)")
#define XOR_R8_TO_PTR_RDX CMT_ASM(".byte 0X4C, 0X31, 0X02 # xorq %r8, (%rdx)")
#define XOR_R8_TO_PTR_RDI CMT_ASM(".byte 0X4C, 0X31, 0X07 # xorq %r8, (%rdi)")
#define XOR_R8_TO_PTR_RSI CMT_ASM(".byte 0X4C, 0X31, 0X06 # xorq %r8, (%rsi)")
#define XOR_R8_TO_PTR_RBP CMT_ASM(".byte 0X4C, 0X31, 0X45, 0X00 # xorq %r8, (%rbp)")
#define XOR_R8_TO_PTR_RSP CMT_ASM(".byte 0X4C, 0X31, 0X04, 0X24 # xorq %r8, (%rsp)")
#define XOR_R8_TO_PTR_R8 CMT_ASM(".byte 0X4D, 0X31, 0X00 # xorq %r8, (%r8)")
#define XOR_R8_TO_PTR_R9 CMT_ASM(".byte 0X4D, 0X31, 0X01 # xorq %r8, (%r9)")
#define XOR_R8_TO_PTR_R10 CMT_ASM(".byte 0X4D, 0X31, 0X02 # xorq %r8, (%r10)")
#define XOR_R8_TO_PTR_R11 CMT_ASM(".byte 0X4D, 0X31, 0X03 # xorq %r8, (%r11)")
#define XOR_R8_TO_PTR_R12 CMT_ASM(".byte 0X4D, 0X31, 0X04, 0X24 # xorq %r8, (%r12)")
#define XOR_R8_TO_PTR_R13 CMT_ASM(".byte 0X4D, 0X31, 0X45, 0X00 # xorq %r8, (%r13)")
#define XOR_R8_TO_PTR_R14 CMT_ASM(".byte 0X4D, 0X31, 0X06 # xorq %r8, (%r14)")
#define XOR_R8_TO_PTR_R15 CMT_ASM(".byte 0X4D, 0X31, 0X07 # xorq %r8, (%r15)")
#define XOR_R8_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X31, 0X00 # xorq %r8, (%eax)")
#define XOR_R8_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X31, 0X03 # xorq %r8, (%ebx)")
#define XOR_R8_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X31, 0X01 # xorq %r8, (%ecx)")
#define XOR_R8_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X31, 0X02 # xorq %r8, (%edx)")
#define XOR_R8_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X31, 0X07 # xorq %r8, (%edi)")
#define XOR_R8_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X31, 0X06 # xorq %r8, (%esi)")
#define XOR_R8_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X31, 0X45, 0X00 # xorq %r8, (%ebp)")
#define XOR_R8_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X31, 0X04, 0X24 # xorq %r8, (%esp)")

#define XOR_R9_TO_PTR_RAX CMT_ASM(".byte 0X4C, 0X31, 0X08 # xorq %r9, (%rax)")
#define XOR_R9_TO_PTR_RBX CMT_ASM(".byte 0X4C, 0X31, 0X0B # xorq %r9, (%rbx)")
#define XOR_R9_TO_PTR_RCX CMT_ASM(".byte 0X4C, 0X31, 0X09 # xorq %r9, (%rcx)")
#define XOR_R9_TO_PTR_RDX CMT_ASM(".byte 0X4C, 0X31, 0X0A # xorq %r9, (%rdx)")
#define XOR_R9_TO_PTR_RDI CMT_ASM(".byte 0X4C, 0X31, 0X0F # xorq %r9, (%rdi)")
#define XOR_R9_TO_PTR_RSI CMT_ASM(".byte 0X4C, 0X31, 0X0E # xorq %r9, (%rsi)")
#define XOR_R9_TO_PTR_RBP CMT_ASM(".byte 0X4C, 0X31, 0X4D, 0X00 # xorq %r9, (%rbp)")
#define XOR_R9_TO_PTR_RSP CMT_ASM(".byte 0X4C, 0X31, 0X0C, 0X24 # xorq %r9, (%rsp)")
#define XOR_R9_TO_PTR_R8 CMT_ASM(".byte 0X4D, 0X31, 0X08 # xorq %r9, (%r8)")
#define XOR_R9_TO_PTR_R9 CMT_ASM(".byte 0X4D, 0X31, 0X09 # xorq %r9, (%r9)")
#define XOR_R9_TO_PTR_R10 CMT_ASM(".byte 0X4D, 0X31, 0X0A # xorq %r9, (%r10)")
#define XOR_R9_TO_PTR_R11 CMT_ASM(".byte 0X4D, 0X31, 0X0B # xorq %r9, (%r11)")
#define XOR_R9_TO_PTR_R12 CMT_ASM(".byte 0X4D, 0X31, 0X0C, 0X24 # xorq %r9, (%r12)")
#define XOR_R9_TO_PTR_R13 CMT_ASM(".byte 0X4D, 0X31, 0X4D, 0X00 # xorq %r9, (%r13)")
#define XOR_R9_TO_PTR_R14 CMT_ASM(".byte 0X4D, 0X31, 0X0E # xorq %r9, (%r14)")
#define XOR_R9_TO_PTR_R15 CMT_ASM(".byte 0X4D, 0X31, 0X0F # xorq %r9, (%r15)")
#define XOR_R9_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X31, 0X08 # xorq %r9, (%eax)")
#define XOR_R9_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X31, 0X0B # xorq %r9, (%ebx)")
#define XOR_R9_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X31, 0X09 # xorq %r9, (%ecx)")
#define XOR_R9_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X31, 0X0A # xorq %r9, (%edx)")
#define XOR_R9_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X31, 0X0F # xorq %r9, (%edi)")
#define XOR_R9_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X31, 0X0E # xorq %r9, (%esi)")
#define XOR_R9_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X31, 0X4D, 0X00 # xorq %r9, (%ebp)")
#define XOR_R9_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X31, 0X0C, 0X24 # xorq %r9, (%esp)")

#define XOR_R10_TO_PTR_RAX CMT_ASM(".byte 0X4C, 0X31, 0X10 # xorq %r10, (%rax)")
#define XOR_R10_TO_PTR_RBX CMT_ASM(".byte 0X4C, 0X31, 0X13 # xorq %r10, (%rbx)")
#define XOR_R10_TO_PTR_RCX CMT_ASM(".byte 0X4C, 0X31, 0X11 # xorq %r10, (%rcx)")
#define XOR_R10_TO_PTR_RDX CMT_ASM(".byte 0X4C, 0X31, 0X12 # xorq %r10, (%rdx)")
#define XOR_R10_TO_PTR_RDI CMT_ASM(".byte 0X4C, 0X31, 0X17 # xorq %r10, (%rdi)")
#define XOR_R10_TO_PTR_RSI CMT_ASM(".byte 0X4C, 0X31, 0X16 # xorq %r10, (%rsi)")
#define XOR_R10_TO_PTR_RBP CMT_ASM(".byte 0X4C, 0X31, 0X55, 0X00 # xorq %r10, (%rbp)")
#define XOR_R10_TO_PTR_RSP CMT_ASM(".byte 0X4C, 0X31, 0X14, 0X24 # xorq %r10, (%rsp)")
#define XOR_R10_TO_PTR_R8 CMT_ASM(".byte 0X4D, 0X31, 0X10 # xorq %r10, (%r8)")
#define XOR_R10_TO_PTR_R9 CMT_ASM(".byte 0X4D, 0X31, 0X11 # xorq %r10, (%r9)")
#define XOR_R10_TO_PTR_R10 CMT_ASM(".byte 0X4D, 0X31, 0X12 # xorq %r10, (%r10)")
#define XOR_R10_TO_PTR_R11 CMT_ASM(".byte 0X4D, 0X31, 0X13 # xorq %r10, (%r11)")
#define XOR_R10_TO_PTR_R12 CMT_ASM(".byte 0X4D, 0X31, 0X14, 0X24 # xorq %r10, (%r12)")
#define XOR_R10_TO_PTR_R13 CMT_ASM(".byte 0X4D, 0X31, 0X55, 0X00 # xorq %r10, (%r13)")
#define XOR_R10_TO_PTR_R14 CMT_ASM(".byte 0X4D, 0X31, 0X16 # xorq %r10, (%r14)")
#define XOR_R10_TO_PTR_R15 CMT_ASM(".byte 0X4D, 0X31, 0X17 # xorq %r10, (%r15)")
#define XOR_R10_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X31, 0X10 # xorq %r10, (%eax)")
#define XOR_R10_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X31, 0X13 # xorq %r10, (%ebx)")
#define XOR_R10_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X31, 0X11 # xorq %r10, (%ecx)")
#define XOR_R10_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X31, 0X12 # xorq %r10, (%edx)")
#define XOR_R10_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X31, 0X17 # xorq %r10, (%edi)")
#define XOR_R10_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X31, 0X16 # xorq %r10, (%esi)")
#define XOR_R10_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X31, 0X55, 0X00 # xorq %r10, (%ebp)")
#define XOR_R10_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X31, 0X14, 0X24 # xorq %r10, (%esp)")

#define XOR_R11_TO_PTR_RAX CMT_ASM(".byte 0X4C, 0X31, 0X18 # xorq %r11, (%rax)")
#define XOR_R11_TO_PTR_RBX CMT_ASM(".byte 0X4C, 0X31, 0X1B # xorq %r11, (%rbx)")
#define XOR_R11_TO_PTR_RCX CMT_ASM(".byte 0X4C, 0X31, 0X19 # xorq %r11, (%rcx)")
#define XOR_R11_TO_PTR_RDX CMT_ASM(".byte 0X4C, 0X31, 0X1A # xorq %r11, (%rdx)")
#define XOR_R11_TO_PTR_RDI CMT_ASM(".byte 0X4C, 0X31, 0X1F # xorq %r11, (%rdi)")
#define XOR_R11_TO_PTR_RSI CMT_ASM(".byte 0X4C, 0X31, 0X1E # xorq %r11, (%rsi)")
#define XOR_R11_TO_PTR_RBP CMT_ASM(".byte 0X4C, 0X31, 0X5D, 0X00 # xorq %r11, (%rbp)")
#define XOR_R11_TO_PTR_RSP CMT_ASM(".byte 0X4C, 0X31, 0X1C, 0X24 # xorq %r11, (%rsp)")
#define XOR_R11_TO_PTR_R8 CMT_ASM(".byte 0X4D, 0X31, 0X18 # xorq %r11, (%r8)")
#define XOR_R11_TO_PTR_R9 CMT_ASM(".byte 0X4D, 0X31, 0X19 # xorq %r11, (%r9)")
#define XOR_R11_TO_PTR_R10 CMT_ASM(".byte 0X4D, 0X31, 0X1A # xorq %r11, (%r10)")
#define XOR_R11_TO_PTR_R11 CMT_ASM(".byte 0X4D, 0X31, 0X1B # xorq %r11, (%r11)")
#define XOR_R11_TO_PTR_R12 CMT_ASM(".byte 0X4D, 0X31, 0X1C, 0X24 # xorq %r11, (%r12)")
#define XOR_R11_TO_PTR_R13 CMT_ASM(".byte 0X4D, 0X31, 0X5D, 0X00 # xorq %r11, (%r13)")
#define XOR_R11_TO_PTR_R14 CMT_ASM(".byte 0X4D, 0X31, 0X1E # xorq %r11, (%r14)")
#define XOR_R11_TO_PTR_R15 CMT_ASM(".byte 0X4D, 0X31, 0X1F # xorq %r11, (%r15)")
#define XOR_R11_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X31, 0X18 # xorq %r11, (%eax)")
#define XOR_R11_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X31, 0X1B # xorq %r11, (%ebx)")
#define XOR_R11_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X31, 0X19 # xorq %r11, (%ecx)")
#define XOR_R11_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X31, 0X1A # xorq %r11, (%edx)")
#define XOR_R11_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X31, 0X1F # xorq %r11, (%edi)")
#define XOR_R11_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X31, 0X1E # xorq %r11, (%esi)")
#define XOR_R11_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X31, 0X5D, 0X00 # xorq %r11, (%ebp)")
#define XOR_R11_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X31, 0X1C, 0X24 # xorq %r11, (%esp)")

#define XOR_R12_TO_PTR_RAX CMT_ASM(".byte 0X4C, 0X31, 0X20 # xorq %r12, (%rax)")
#define XOR_R12_TO_PTR_RBX CMT_ASM(".byte 0X4C, 0X31, 0X23 # xorq %r12, (%rbx)")
#define XOR_R12_TO_PTR_RCX CMT_ASM(".byte 0X4C, 0X31, 0X21 # xorq %r12, (%rcx)")
#define XOR_R12_TO_PTR_RDX CMT_ASM(".byte 0X4C, 0X31, 0X22 # xorq %r12, (%rdx)")
#define XOR_R12_TO_PTR_RDI CMT_ASM(".byte 0X4C, 0X31, 0X27 # xorq %r12, (%rdi)")
#define XOR_R12_TO_PTR_RSI CMT_ASM(".byte 0X4C, 0X31, 0X26 # xorq %r12, (%rsi)")
#define XOR_R12_TO_PTR_RBP CMT_ASM(".byte 0X4C, 0X31, 0X65, 0X00 # xorq %r12, (%rbp)")
#define XOR_R12_TO_PTR_RSP CMT_ASM(".byte 0X4C, 0X31, 0X24, 0X24 # xorq %r12, (%rsp)")
#define XOR_R12_TO_PTR_R8 CMT_ASM(".byte 0X4D, 0X31, 0X20 # xorq %r12, (%r8)")
#define XOR_R12_TO_PTR_R9 CMT_ASM(".byte 0X4D, 0X31, 0X21 # xorq %r12, (%r9)")
#define XOR_R12_TO_PTR_R10 CMT_ASM(".byte 0X4D, 0X31, 0X22 # xorq %r12, (%r10)")
#define XOR_R12_TO_PTR_R11 CMT_ASM(".byte 0X4D, 0X31, 0X23 # xorq %r12, (%r11)")
#define XOR_R12_TO_PTR_R12 CMT_ASM(".byte 0X4D, 0X31, 0X24, 0X24 # xorq %r12, (%r12)")
#define XOR_R12_TO_PTR_R13 CMT_ASM(".byte 0X4D, 0X31, 0X65, 0X00 # xorq %r12, (%r13)")
#define XOR_R12_TO_PTR_R14 CMT_ASM(".byte 0X4D, 0X31, 0X26 # xorq %r12, (%r14)")
#define XOR_R12_TO_PTR_R15 CMT_ASM(".byte 0X4D, 0X31, 0X27 # xorq %r12, (%r15)")
#define XOR_R12_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X31, 0X20 # xorq %r12, (%eax)")
#define XOR_R12_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X31, 0X23 # xorq %r12, (%ebx)")
#define XOR_R12_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X31, 0X21 # xorq %r12, (%ecx)")
#define XOR_R12_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X31, 0X22 # xorq %r12, (%edx)")
#define XOR_R12_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X31, 0X27 # xorq %r12, (%edi)")
#define XOR_R12_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X31, 0X26 # xorq %r12, (%esi)")
#define XOR_R12_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X31, 0X65, 0X00 # xorq %r12, (%ebp)")
#define XOR_R12_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X31, 0X24, 0X24 # xorq %r12, (%esp)")

#define XOR_R13_TO_PTR_RAX CMT_ASM(".byte 0X4C, 0X31, 0X28 # xorq %r13, (%rax)")
#define XOR_R13_TO_PTR_RBX CMT_ASM(".byte 0X4C, 0X31, 0X2B # xorq %r13, (%rbx)")
#define XOR_R13_TO_PTR_RCX CMT_ASM(".byte 0X4C, 0X31, 0X29 # xorq %r13, (%rcx)")
#define XOR_R13_TO_PTR_RDX CMT_ASM(".byte 0X4C, 0X31, 0X2A # xorq %r13, (%rdx)")
#define XOR_R13_TO_PTR_RDI CMT_ASM(".byte 0X4C, 0X31, 0X2F # xorq %r13, (%rdi)")
#define XOR_R13_TO_PTR_RSI CMT_ASM(".byte 0X4C, 0X31, 0X2E # xorq %r13, (%rsi)")
#define XOR_R13_TO_PTR_RBP CMT_ASM(".byte 0X4C, 0X31, 0X6D, 0X00 # xorq %r13, (%rbp)")
#define XOR_R13_TO_PTR_RSP CMT_ASM(".byte 0X4C, 0X31, 0X2C, 0X24 # xorq %r13, (%rsp)")
#define XOR_R13_TO_PTR_R8 CMT_ASM(".byte 0X4D, 0X31, 0X28 # xorq %r13, (%r8)")
#define XOR_R13_TO_PTR_R9 CMT_ASM(".byte 0X4D, 0X31, 0X29 # xorq %r13, (%r9)")
#define XOR_R13_TO_PTR_R10 CMT_ASM(".byte 0X4D, 0X31, 0X2A # xorq %r13, (%r10)")
#define XOR_R13_TO_PTR_R11 CMT_ASM(".byte 0X4D, 0X31, 0X2B # xorq %r13, (%r11)")
#define XOR_R13_TO_PTR_R12 CMT_ASM(".byte 0X4D, 0X31, 0X2C, 0X24 # xorq %r13, (%r12)")
#define XOR_R13_TO_PTR_R13 CMT_ASM(".byte 0X4D, 0X31, 0X6D, 0X00 # xorq %r13, (%r13)")
#define XOR_R13_TO_PTR_R14 CMT_ASM(".byte 0X4D, 0X31, 0X2E # xorq %r13, (%r14)")
#define XOR_R13_TO_PTR_R15 CMT_ASM(".byte 0X4D, 0X31, 0X2F # xorq %r13, (%r15)")
#define XOR_R13_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X31, 0X28 # xorq %r13, (%eax)")
#define XOR_R13_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X31, 0X2B # xorq %r13, (%ebx)")
#define XOR_R13_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X31, 0X29 # xorq %r13, (%ecx)")
#define XOR_R13_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X31, 0X2A # xorq %r13, (%edx)")
#define XOR_R13_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X31, 0X2F # xorq %r13, (%edi)")
#define XOR_R13_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X31, 0X2E # xorq %r13, (%esi)")
#define XOR_R13_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X31, 0X6D, 0X00 # xorq %r13, (%ebp)")
#define XOR_R13_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X31, 0X2C, 0X24 # xorq %r13, (%esp)")

#define XOR_R14_TO_PTR_RAX CMT_ASM(".byte 0X4C, 0X31, 0X30 # xorq %r14, (%rax)")
#define XOR_R14_TO_PTR_RBX CMT_ASM(".byte 0X4C, 0X31, 0X33 # xorq %r14, (%rbx)")
#define XOR_R14_TO_PTR_RCX CMT_ASM(".byte 0X4C, 0X31, 0X31 # xorq %r14, (%rcx)")
#define XOR_R14_TO_PTR_RDX CMT_ASM(".byte 0X4C, 0X31, 0X32 # xorq %r14, (%rdx)")
#define XOR_R14_TO_PTR_RDI CMT_ASM(".byte 0X4C, 0X31, 0X37 # xorq %r14, (%rdi)")
#define XOR_R14_TO_PTR_RSI CMT_ASM(".byte 0X4C, 0X31, 0X36 # xorq %r14, (%rsi)")
#define XOR_R14_TO_PTR_RBP CMT_ASM(".byte 0X4C, 0X31, 0X75, 0X00 # xorq %r14, (%rbp)")
#define XOR_R14_TO_PTR_RSP CMT_ASM(".byte 0X4C, 0X31, 0X34, 0X24 # xorq %r14, (%rsp)")
#define XOR_R14_TO_PTR_R8 CMT_ASM(".byte 0X4D, 0X31, 0X30 # xorq %r14, (%r8)")
#define XOR_R14_TO_PTR_R9 CMT_ASM(".byte 0X4D, 0X31, 0X31 # xorq %r14, (%r9)")
#define XOR_R14_TO_PTR_R10 CMT_ASM(".byte 0X4D, 0X31, 0X32 # xorq %r14, (%r10)")
#define XOR_R14_TO_PTR_R11 CMT_ASM(".byte 0X4D, 0X31, 0X33 # xorq %r14, (%r11)")
#define XOR_R14_TO_PTR_R12 CMT_ASM(".byte 0X4D, 0X31, 0X34, 0X24 # xorq %r14, (%r12)")
#define XOR_R14_TO_PTR_R13 CMT_ASM(".byte 0X4D, 0X31, 0X75, 0X00 # xorq %r14, (%r13)")
#define XOR_R14_TO_PTR_R14 CMT_ASM(".byte 0X4D, 0X31, 0X36 # xorq %r14, (%r14)")
#define XOR_R14_TO_PTR_R15 CMT_ASM(".byte 0X4D, 0X31, 0X37 # xorq %r14, (%r15)")
#define XOR_R14_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X31, 0X30 # xorq %r14, (%eax)")
#define XOR_R14_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X31, 0X33 # xorq %r14, (%ebx)")
#define XOR_R14_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X31, 0X31 # xorq %r14, (%ecx)")
#define XOR_R14_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X31, 0X32 # xorq %r14, (%edx)")
#define XOR_R14_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X31, 0X37 # xorq %r14, (%edi)")
#define XOR_R14_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X31, 0X36 # xorq %r14, (%esi)")
#define XOR_R14_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X31, 0X75, 0X00 # xorq %r14, (%ebp)")
#define XOR_R14_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X31, 0X34, 0X24 # xorq %r14, (%esp)")

#define XOR_R15_TO_PTR_RAX CMT_ASM(".byte 0X4C, 0X31, 0X38 # xorq %r15, (%rax)")
#define XOR_R15_TO_PTR_RBX CMT_ASM(".byte 0X4C, 0X31, 0X3B # xorq %r15, (%rbx)")
#define XOR_R15_TO_PTR_RCX CMT_ASM(".byte 0X4C, 0X31, 0X39 # xorq %r15, (%rcx)")
#define XOR_R15_TO_PTR_RDX CMT_ASM(".byte 0X4C, 0X31, 0X3A # xorq %r15, (%rdx)")
#define XOR_R15_TO_PTR_RDI CMT_ASM(".byte 0X4C, 0X31, 0X3F # xorq %r15, (%rdi)")
#define XOR_R15_TO_PTR_RSI CMT_ASM(".byte 0X4C, 0X31, 0X3E # xorq %r15, (%rsi)")
#define XOR_R15_TO_PTR_RBP CMT_ASM(".byte 0X4C, 0X31, 0X7D, 0X00 # xorq %r15, (%rbp)")
#define XOR_R15_TO_PTR_RSP CMT_ASM(".byte 0X4C, 0X31, 0X3C, 0X24 # xorq %r15, (%rsp)")
#define XOR_R15_TO_PTR_R8 CMT_ASM(".byte 0X4D, 0X31, 0X38 # xorq %r15, (%r8)")
#define XOR_R15_TO_PTR_R9 CMT_ASM(".byte 0X4D, 0X31, 0X39 # xorq %r15, (%r9)")
#define XOR_R15_TO_PTR_R10 CMT_ASM(".byte 0X4D, 0X31, 0X3A # xorq %r15, (%r10)")
#define XOR_R15_TO_PTR_R11 CMT_ASM(".byte 0X4D, 0X31, 0X3B # xorq %r15, (%r11)")
#define XOR_R15_TO_PTR_R12 CMT_ASM(".byte 0X4D, 0X31, 0X3C, 0X24 # xorq %r15, (%r12)")
#define XOR_R15_TO_PTR_R13 CMT_ASM(".byte 0X4D, 0X31, 0X7D, 0X00 # xorq %r15, (%r13)")
#define XOR_R15_TO_PTR_R14 CMT_ASM(".byte 0X4D, 0X31, 0X3E # xorq %r15, (%r14)")
#define XOR_R15_TO_PTR_R15 CMT_ASM(".byte 0X4D, 0X31, 0X3F # xorq %r15, (%r15)")
#define XOR_R15_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X31, 0X38 # xorq %r15, (%eax)")
#define XOR_R15_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X31, 0X3B # xorq %r15, (%ebx)")
#define XOR_R15_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X31, 0X39 # xorq %r15, (%ecx)")
#define XOR_R15_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X31, 0X3A # xorq %r15, (%edx)")
#define XOR_R15_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X31, 0X3F # xorq %r15, (%edi)")
#define XOR_R15_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X31, 0X3E # xorq %r15, (%esi)")
#define XOR_R15_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X31, 0X7D, 0X00 # xorq %r15, (%ebp)")
#define XOR_R15_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X31, 0X3C, 0X24 # xorq %r15, (%esp)")

#define XOR_RAX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X33, 0X80 # xorq " _(VALUE) "(%rax), %rax")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RAX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X33, 0X83 # xorq " _(VALUE) "(%rbx), %rax")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RAX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X33, 0X81 # xorq " _(VALUE) "(%rcx), %rax")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RAX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X33, 0X82 # xorq " _(VALUE) "(%rdx), %rax")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RAX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X33, 0X87 # xorq " _(VALUE) "(%rdi), %rax")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RAX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X33, 0X86 # xorq " _(VALUE) "(%rsi), %rax")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RAX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X33, 0X85 # xorq " _(VALUE) "(%rbp), %rax")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RAX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X33, 0X84, 0X24 # xorq " _(VALUE) "(%rsp), %rax")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RAX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X33, 0X80 # xorq " _(VALUE) "(%r8), %rax")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RAX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X33, 0X81 # xorq " _(VALUE) "(%r9), %rax")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RAX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X33, 0X82 # xorq " _(VALUE) "(%r10), %rax")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RAX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X33, 0X83 # xorq " _(VALUE) "(%r11), %rax")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RAX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X33, 0X84, 0X24 # xorq " _(VALUE) "(%r12), %rax")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RAX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X33, 0X85 # xorq " _(VALUE) "(%r13), %rax")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RAX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X33, 0X86 # xorq " _(VALUE) "(%r14), %rax")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RAX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X33, 0X87 # xorq " _(VALUE) "(%r15), %rax")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RAX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X33, 0X80 # xorq " _(VALUE) "(%eax), %rax")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RAX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X33, 0X83 # xorq " _(VALUE) "(%ebx), %rax")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RAX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X33, 0X81 # xorq " _(VALUE) "(%ecx), %rax")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RAX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X33, 0X82 # xorq " _(VALUE) "(%edx), %rax")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RAX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X33, 0X87 # xorq " _(VALUE) "(%edi), %rax")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RAX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X33, 0X86 # xorq " _(VALUE) "(%esi), %rax")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RAX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X33, 0X85 # xorq " _(VALUE) "(%ebp), %rax")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RAX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X33, 0X84, 0X24 # xorq " _(VALUE) "(%esp), %rax")\
	CMT_ASM(".long " _(VALUE))

#define XOR_RBX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X33, 0X98 # xorq " _(VALUE) "(%rax), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RBX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X33, 0X9B # xorq " _(VALUE) "(%rbx), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RBX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X33, 0X99 # xorq " _(VALUE) "(%rcx), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RBX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X33, 0X9A # xorq " _(VALUE) "(%rdx), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RBX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X33, 0X9F # xorq " _(VALUE) "(%rdi), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RBX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X33, 0X9E # xorq " _(VALUE) "(%rsi), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RBX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X33, 0X9D # xorq " _(VALUE) "(%rbp), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RBX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X33, 0X9C, 0X24 # xorq " _(VALUE) "(%rsp), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RBX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X33, 0X98 # xorq " _(VALUE) "(%r8), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RBX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X33, 0X99 # xorq " _(VALUE) "(%r9), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RBX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X33, 0X9A # xorq " _(VALUE) "(%r10), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RBX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X33, 0X9B # xorq " _(VALUE) "(%r11), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RBX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X33, 0X9C, 0X24 # xorq " _(VALUE) "(%r12), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RBX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X33, 0X9D # xorq " _(VALUE) "(%r13), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RBX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X33, 0X9E # xorq " _(VALUE) "(%r14), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RBX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X33, 0X9F # xorq " _(VALUE) "(%r15), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RBX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X33, 0X98 # xorq " _(VALUE) "(%eax), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RBX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X33, 0X9B # xorq " _(VALUE) "(%ebx), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RBX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X33, 0X99 # xorq " _(VALUE) "(%ecx), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RBX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X33, 0X9A # xorq " _(VALUE) "(%edx), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RBX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X33, 0X9F # xorq " _(VALUE) "(%edi), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RBX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X33, 0X9E # xorq " _(VALUE) "(%esi), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RBX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X33, 0X9D # xorq " _(VALUE) "(%ebp), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RBX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X33, 0X9C, 0X24 # xorq " _(VALUE) "(%esp), %rbx")\
	CMT_ASM(".long " _(VALUE))

#define XOR_RCX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X33, 0X88 # xorq " _(VALUE) "(%rax), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RCX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X33, 0X8B # xorq " _(VALUE) "(%rbx), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RCX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X33, 0X89 # xorq " _(VALUE) "(%rcx), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RCX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X33, 0X8A # xorq " _(VALUE) "(%rdx), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RCX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X33, 0X8F # xorq " _(VALUE) "(%rdi), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RCX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X33, 0X8E # xorq " _(VALUE) "(%rsi), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RCX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X33, 0X8D # xorq " _(VALUE) "(%rbp), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RCX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X33, 0X8C, 0X24 # xorq " _(VALUE) "(%rsp), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RCX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X33, 0X88 # xorq " _(VALUE) "(%r8), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RCX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X33, 0X89 # xorq " _(VALUE) "(%r9), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RCX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X33, 0X8A # xorq " _(VALUE) "(%r10), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RCX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X33, 0X8B # xorq " _(VALUE) "(%r11), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RCX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X33, 0X8C, 0X24 # xorq " _(VALUE) "(%r12), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RCX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X33, 0X8D # xorq " _(VALUE) "(%r13), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RCX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X33, 0X8E # xorq " _(VALUE) "(%r14), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RCX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X33, 0X8F # xorq " _(VALUE) "(%r15), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RCX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X33, 0X88 # xorq " _(VALUE) "(%eax), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RCX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X33, 0X8B # xorq " _(VALUE) "(%ebx), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RCX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X33, 0X89 # xorq " _(VALUE) "(%ecx), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RCX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X33, 0X8A # xorq " _(VALUE) "(%edx), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RCX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X33, 0X8F # xorq " _(VALUE) "(%edi), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RCX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X33, 0X8E # xorq " _(VALUE) "(%esi), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RCX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X33, 0X8D # xorq " _(VALUE) "(%ebp), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RCX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X33, 0X8C, 0X24 # xorq " _(VALUE) "(%esp), %rcx")\
	CMT_ASM(".long " _(VALUE))

#define XOR_RDX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X33, 0X90 # xorq " _(VALUE) "(%rax), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RDX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X33, 0X93 # xorq " _(VALUE) "(%rbx), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RDX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X33, 0X91 # xorq " _(VALUE) "(%rcx), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RDX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X33, 0X92 # xorq " _(VALUE) "(%rdx), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RDX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X33, 0X97 # xorq " _(VALUE) "(%rdi), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RDX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X33, 0X96 # xorq " _(VALUE) "(%rsi), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RDX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X33, 0X95 # xorq " _(VALUE) "(%rbp), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RDX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X33, 0X94, 0X24 # xorq " _(VALUE) "(%rsp), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RDX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X33, 0X90 # xorq " _(VALUE) "(%r8), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RDX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X33, 0X91 # xorq " _(VALUE) "(%r9), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RDX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X33, 0X92 # xorq " _(VALUE) "(%r10), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RDX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X33, 0X93 # xorq " _(VALUE) "(%r11), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RDX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X33, 0X94, 0X24 # xorq " _(VALUE) "(%r12), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RDX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X33, 0X95 # xorq " _(VALUE) "(%r13), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RDX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X33, 0X96 # xorq " _(VALUE) "(%r14), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RDX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X33, 0X97 # xorq " _(VALUE) "(%r15), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RDX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X33, 0X90 # xorq " _(VALUE) "(%eax), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RDX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X33, 0X93 # xorq " _(VALUE) "(%ebx), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RDX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X33, 0X91 # xorq " _(VALUE) "(%ecx), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RDX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X33, 0X92 # xorq " _(VALUE) "(%edx), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RDX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X33, 0X97 # xorq " _(VALUE) "(%edi), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RDX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X33, 0X96 # xorq " _(VALUE) "(%esi), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RDX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X33, 0X95 # xorq " _(VALUE) "(%ebp), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RDX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X33, 0X94, 0X24 # xorq " _(VALUE) "(%esp), %rdx")\
	CMT_ASM(".long " _(VALUE))

#define XOR_RDI_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X33, 0XB8 # xorq " _(VALUE) "(%rax), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RDI_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X33, 0XBB # xorq " _(VALUE) "(%rbx), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RDI_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X33, 0XB9 # xorq " _(VALUE) "(%rcx), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RDI_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X33, 0XBA # xorq " _(VALUE) "(%rdx), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RDI_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X33, 0XBF # xorq " _(VALUE) "(%rdi), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RDI_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X33, 0XBE # xorq " _(VALUE) "(%rsi), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RDI_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X33, 0XBD # xorq " _(VALUE) "(%rbp), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RDI_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X33, 0XBC, 0X24 # xorq " _(VALUE) "(%rsp), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RDI_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X33, 0XB8 # xorq " _(VALUE) "(%r8), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RDI_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X33, 0XB9 # xorq " _(VALUE) "(%r9), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RDI_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X33, 0XBA # xorq " _(VALUE) "(%r10), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RDI_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X33, 0XBB # xorq " _(VALUE) "(%r11), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RDI_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X33, 0XBC, 0X24 # xorq " _(VALUE) "(%r12), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RDI_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X33, 0XBD # xorq " _(VALUE) "(%r13), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RDI_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X33, 0XBE # xorq " _(VALUE) "(%r14), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RDI_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X33, 0XBF # xorq " _(VALUE) "(%r15), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RDI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X33, 0XB8 # xorq " _(VALUE) "(%eax), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RDI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X33, 0XBB # xorq " _(VALUE) "(%ebx), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RDI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X33, 0XB9 # xorq " _(VALUE) "(%ecx), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RDI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X33, 0XBA # xorq " _(VALUE) "(%edx), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RDI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X33, 0XBF # xorq " _(VALUE) "(%edi), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RDI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X33, 0XBE # xorq " _(VALUE) "(%esi), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RDI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X33, 0XBD # xorq " _(VALUE) "(%ebp), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RDI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X33, 0XBC, 0X24 # xorq " _(VALUE) "(%esp), %rdi")\
	CMT_ASM(".long " _(VALUE))

#define XOR_RSI_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X33, 0XB0 # xorq " _(VALUE) "(%rax), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RSI_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X33, 0XB3 # xorq " _(VALUE) "(%rbx), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RSI_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X33, 0XB1 # xorq " _(VALUE) "(%rcx), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RSI_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X33, 0XB2 # xorq " _(VALUE) "(%rdx), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RSI_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X33, 0XB7 # xorq " _(VALUE) "(%rdi), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RSI_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X33, 0XB6 # xorq " _(VALUE) "(%rsi), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RSI_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X33, 0XB5 # xorq " _(VALUE) "(%rbp), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RSI_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X33, 0XB4, 0X24 # xorq " _(VALUE) "(%rsp), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RSI_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X33, 0XB0 # xorq " _(VALUE) "(%r8), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RSI_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X33, 0XB1 # xorq " _(VALUE) "(%r9), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RSI_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X33, 0XB2 # xorq " _(VALUE) "(%r10), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RSI_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X33, 0XB3 # xorq " _(VALUE) "(%r11), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RSI_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X33, 0XB4, 0X24 # xorq " _(VALUE) "(%r12), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RSI_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X33, 0XB5 # xorq " _(VALUE) "(%r13), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RSI_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X33, 0XB6 # xorq " _(VALUE) "(%r14), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RSI_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X33, 0XB7 # xorq " _(VALUE) "(%r15), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RSI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X33, 0XB0 # xorq " _(VALUE) "(%eax), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RSI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X33, 0XB3 # xorq " _(VALUE) "(%ebx), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RSI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X33, 0XB1 # xorq " _(VALUE) "(%ecx), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RSI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X33, 0XB2 # xorq " _(VALUE) "(%edx), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RSI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X33, 0XB7 # xorq " _(VALUE) "(%edi), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RSI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X33, 0XB6 # xorq " _(VALUE) "(%esi), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RSI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X33, 0XB5 # xorq " _(VALUE) "(%ebp), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RSI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X33, 0XB4, 0X24 # xorq " _(VALUE) "(%esp), %rsi")\
	CMT_ASM(".long " _(VALUE))

#define XOR_RBP_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X33, 0XA8 # xorq " _(VALUE) "(%rax), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RBP_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X33, 0XAB # xorq " _(VALUE) "(%rbx), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RBP_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X33, 0XA9 # xorq " _(VALUE) "(%rcx), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RBP_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X33, 0XAA # xorq " _(VALUE) "(%rdx), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RBP_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X33, 0XAF # xorq " _(VALUE) "(%rdi), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RBP_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X33, 0XAE # xorq " _(VALUE) "(%rsi), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RBP_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X33, 0XAD # xorq " _(VALUE) "(%rbp), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RBP_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X33, 0XAC, 0X24 # xorq " _(VALUE) "(%rsp), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RBP_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X33, 0XA8 # xorq " _(VALUE) "(%r8), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RBP_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X33, 0XA9 # xorq " _(VALUE) "(%r9), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RBP_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X33, 0XAA # xorq " _(VALUE) "(%r10), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RBP_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X33, 0XAB # xorq " _(VALUE) "(%r11), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RBP_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X33, 0XAC, 0X24 # xorq " _(VALUE) "(%r12), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RBP_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X33, 0XAD # xorq " _(VALUE) "(%r13), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RBP_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X33, 0XAE # xorq " _(VALUE) "(%r14), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RBP_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X33, 0XAF # xorq " _(VALUE) "(%r15), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RBP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X33, 0XA8 # xorq " _(VALUE) "(%eax), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RBP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X33, 0XAB # xorq " _(VALUE) "(%ebx), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RBP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X33, 0XA9 # xorq " _(VALUE) "(%ecx), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RBP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X33, 0XAA # xorq " _(VALUE) "(%edx), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RBP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X33, 0XAF # xorq " _(VALUE) "(%edi), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RBP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X33, 0XAE # xorq " _(VALUE) "(%esi), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RBP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X33, 0XAD # xorq " _(VALUE) "(%ebp), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RBP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X33, 0XAC, 0X24 # xorq " _(VALUE) "(%esp), %rbp")\
	CMT_ASM(".long " _(VALUE))

#define XOR_RSP_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X33, 0XA0 # xorq " _(VALUE) "(%rax), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RSP_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X33, 0XA3 # xorq " _(VALUE) "(%rbx), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RSP_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X33, 0XA1 # xorq " _(VALUE) "(%rcx), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RSP_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X33, 0XA2 # xorq " _(VALUE) "(%rdx), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RSP_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X33, 0XA7 # xorq " _(VALUE) "(%rdi), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RSP_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X33, 0XA6 # xorq " _(VALUE) "(%rsi), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RSP_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X33, 0XA5 # xorq " _(VALUE) "(%rbp), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RSP_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X33, 0XA4, 0X24 # xorq " _(VALUE) "(%rsp), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RSP_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X33, 0XA0 # xorq " _(VALUE) "(%r8), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RSP_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X33, 0XA1 # xorq " _(VALUE) "(%r9), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RSP_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X33, 0XA2 # xorq " _(VALUE) "(%r10), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RSP_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X33, 0XA3 # xorq " _(VALUE) "(%r11), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RSP_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X33, 0XA4, 0X24 # xorq " _(VALUE) "(%r12), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RSP_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X33, 0XA5 # xorq " _(VALUE) "(%r13), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RSP_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X33, 0XA6 # xorq " _(VALUE) "(%r14), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RSP_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X33, 0XA7 # xorq " _(VALUE) "(%r15), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RSP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X33, 0XA0 # xorq " _(VALUE) "(%eax), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RSP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X33, 0XA3 # xorq " _(VALUE) "(%ebx), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RSP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X33, 0XA1 # xorq " _(VALUE) "(%ecx), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RSP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X33, 0XA2 # xorq " _(VALUE) "(%edx), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RSP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X33, 0XA7 # xorq " _(VALUE) "(%edi), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RSP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X33, 0XA6 # xorq " _(VALUE) "(%esi), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RSP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X33, 0XA5 # xorq " _(VALUE) "(%ebp), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RSP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X33, 0XA4, 0X24 # xorq " _(VALUE) "(%esp), %rsp")\
	CMT_ASM(".long " _(VALUE))

#define XOR_R8_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X33, 0X80 # xorq " _(VALUE) "(%rax), %r8")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X33, 0X83 # xorq " _(VALUE) "(%rbx), %r8")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X33, 0X81 # xorq " _(VALUE) "(%rcx), %r8")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X33, 0X82 # xorq " _(VALUE) "(%rdx), %r8")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X33, 0X87 # xorq " _(VALUE) "(%rdi), %r8")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X33, 0X86 # xorq " _(VALUE) "(%rsi), %r8")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X33, 0X85 # xorq " _(VALUE) "(%rbp), %r8")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X33, 0X84, 0X24 # xorq " _(VALUE) "(%rsp), %r8")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X33, 0X80 # xorq " _(VALUE) "(%r8), %r8")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X33, 0X81 # xorq " _(VALUE) "(%r9), %r8")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X33, 0X82 # xorq " _(VALUE) "(%r10), %r8")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X33, 0X83 # xorq " _(VALUE) "(%r11), %r8")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X33, 0X84, 0X24 # xorq " _(VALUE) "(%r12), %r8")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X33, 0X85 # xorq " _(VALUE) "(%r13), %r8")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X33, 0X86 # xorq " _(VALUE) "(%r14), %r8")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X33, 0X87 # xorq " _(VALUE) "(%r15), %r8")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X33, 0X80 # xorq " _(VALUE) "(%eax), %r8")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X33, 0X83 # xorq " _(VALUE) "(%ebx), %r8")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X33, 0X81 # xorq " _(VALUE) "(%ecx), %r8")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X33, 0X82 # xorq " _(VALUE) "(%edx), %r8")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X33, 0X87 # xorq " _(VALUE) "(%edi), %r8")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X33, 0X86 # xorq " _(VALUE) "(%esi), %r8")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X33, 0X85 # xorq " _(VALUE) "(%ebp), %r8")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X33, 0X84, 0X24 # xorq " _(VALUE) "(%esp), %r8")\
	CMT_ASM(".long " _(VALUE))

#define XOR_R9_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X33, 0X88 # xorq " _(VALUE) "(%rax), %r9")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X33, 0X8B # xorq " _(VALUE) "(%rbx), %r9")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X33, 0X89 # xorq " _(VALUE) "(%rcx), %r9")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X33, 0X8A # xorq " _(VALUE) "(%rdx), %r9")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X33, 0X8F # xorq " _(VALUE) "(%rdi), %r9")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X33, 0X8E # xorq " _(VALUE) "(%rsi), %r9")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X33, 0X8D # xorq " _(VALUE) "(%rbp), %r9")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X33, 0X8C, 0X24 # xorq " _(VALUE) "(%rsp), %r9")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X33, 0X88 # xorq " _(VALUE) "(%r8), %r9")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X33, 0X89 # xorq " _(VALUE) "(%r9), %r9")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X33, 0X8A # xorq " _(VALUE) "(%r10), %r9")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X33, 0X8B # xorq " _(VALUE) "(%r11), %r9")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X33, 0X8C, 0X24 # xorq " _(VALUE) "(%r12), %r9")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X33, 0X8D # xorq " _(VALUE) "(%r13), %r9")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X33, 0X8E # xorq " _(VALUE) "(%r14), %r9")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X33, 0X8F # xorq " _(VALUE) "(%r15), %r9")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X33, 0X88 # xorq " _(VALUE) "(%eax), %r9")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X33, 0X8B # xorq " _(VALUE) "(%ebx), %r9")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X33, 0X89 # xorq " _(VALUE) "(%ecx), %r9")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X33, 0X8A # xorq " _(VALUE) "(%edx), %r9")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X33, 0X8F # xorq " _(VALUE) "(%edi), %r9")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X33, 0X8E # xorq " _(VALUE) "(%esi), %r9")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X33, 0X8D # xorq " _(VALUE) "(%ebp), %r9")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X33, 0X8C, 0X24 # xorq " _(VALUE) "(%esp), %r9")\
	CMT_ASM(".long " _(VALUE))

#define XOR_R10_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X33, 0X90 # xorq " _(VALUE) "(%rax), %r10")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X33, 0X93 # xorq " _(VALUE) "(%rbx), %r10")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X33, 0X91 # xorq " _(VALUE) "(%rcx), %r10")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X33, 0X92 # xorq " _(VALUE) "(%rdx), %r10")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X33, 0X97 # xorq " _(VALUE) "(%rdi), %r10")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X33, 0X96 # xorq " _(VALUE) "(%rsi), %r10")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X33, 0X95 # xorq " _(VALUE) "(%rbp), %r10")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X33, 0X94, 0X24 # xorq " _(VALUE) "(%rsp), %r10")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X33, 0X90 # xorq " _(VALUE) "(%r8), %r10")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X33, 0X91 # xorq " _(VALUE) "(%r9), %r10")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X33, 0X92 # xorq " _(VALUE) "(%r10), %r10")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X33, 0X93 # xorq " _(VALUE) "(%r11), %r10")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X33, 0X94, 0X24 # xorq " _(VALUE) "(%r12), %r10")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X33, 0X95 # xorq " _(VALUE) "(%r13), %r10")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X33, 0X96 # xorq " _(VALUE) "(%r14), %r10")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X33, 0X97 # xorq " _(VALUE) "(%r15), %r10")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X33, 0X90 # xorq " _(VALUE) "(%eax), %r10")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X33, 0X93 # xorq " _(VALUE) "(%ebx), %r10")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X33, 0X91 # xorq " _(VALUE) "(%ecx), %r10")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X33, 0X92 # xorq " _(VALUE) "(%edx), %r10")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X33, 0X97 # xorq " _(VALUE) "(%edi), %r10")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X33, 0X96 # xorq " _(VALUE) "(%esi), %r10")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X33, 0X95 # xorq " _(VALUE) "(%ebp), %r10")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X33, 0X94, 0X24 # xorq " _(VALUE) "(%esp), %r10")\
	CMT_ASM(".long " _(VALUE))

#define XOR_R11_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X33, 0X98 # xorq " _(VALUE) "(%rax), %r11")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X33, 0X9B # xorq " _(VALUE) "(%rbx), %r11")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X33, 0X99 # xorq " _(VALUE) "(%rcx), %r11")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X33, 0X9A # xorq " _(VALUE) "(%rdx), %r11")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X33, 0X9F # xorq " _(VALUE) "(%rdi), %r11")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X33, 0X9E # xorq " _(VALUE) "(%rsi), %r11")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X33, 0X9D # xorq " _(VALUE) "(%rbp), %r11")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X33, 0X9C, 0X24 # xorq " _(VALUE) "(%rsp), %r11")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X33, 0X98 # xorq " _(VALUE) "(%r8), %r11")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X33, 0X99 # xorq " _(VALUE) "(%r9), %r11")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X33, 0X9A # xorq " _(VALUE) "(%r10), %r11")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X33, 0X9B # xorq " _(VALUE) "(%r11), %r11")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X33, 0X9C, 0X24 # xorq " _(VALUE) "(%r12), %r11")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X33, 0X9D # xorq " _(VALUE) "(%r13), %r11")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X33, 0X9E # xorq " _(VALUE) "(%r14), %r11")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X33, 0X9F # xorq " _(VALUE) "(%r15), %r11")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X33, 0X98 # xorq " _(VALUE) "(%eax), %r11")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X33, 0X9B # xorq " _(VALUE) "(%ebx), %r11")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X33, 0X99 # xorq " _(VALUE) "(%ecx), %r11")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X33, 0X9A # xorq " _(VALUE) "(%edx), %r11")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X33, 0X9F # xorq " _(VALUE) "(%edi), %r11")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X33, 0X9E # xorq " _(VALUE) "(%esi), %r11")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X33, 0X9D # xorq " _(VALUE) "(%ebp), %r11")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X33, 0X9C, 0X24 # xorq " _(VALUE) "(%esp), %r11")\
	CMT_ASM(".long " _(VALUE))

#define XOR_R12_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X33, 0XA0 # xorq " _(VALUE) "(%rax), %r12")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X33, 0XA3 # xorq " _(VALUE) "(%rbx), %r12")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X33, 0XA1 # xorq " _(VALUE) "(%rcx), %r12")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X33, 0XA2 # xorq " _(VALUE) "(%rdx), %r12")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X33, 0XA7 # xorq " _(VALUE) "(%rdi), %r12")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X33, 0XA6 # xorq " _(VALUE) "(%rsi), %r12")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X33, 0XA5 # xorq " _(VALUE) "(%rbp), %r12")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X33, 0XA4, 0X24 # xorq " _(VALUE) "(%rsp), %r12")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X33, 0XA0 # xorq " _(VALUE) "(%r8), %r12")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X33, 0XA1 # xorq " _(VALUE) "(%r9), %r12")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X33, 0XA2 # xorq " _(VALUE) "(%r10), %r12")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X33, 0XA3 # xorq " _(VALUE) "(%r11), %r12")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X33, 0XA4, 0X24 # xorq " _(VALUE) "(%r12), %r12")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X33, 0XA5 # xorq " _(VALUE) "(%r13), %r12")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X33, 0XA6 # xorq " _(VALUE) "(%r14), %r12")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X33, 0XA7 # xorq " _(VALUE) "(%r15), %r12")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X33, 0XA0 # xorq " _(VALUE) "(%eax), %r12")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X33, 0XA3 # xorq " _(VALUE) "(%ebx), %r12")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X33, 0XA1 # xorq " _(VALUE) "(%ecx), %r12")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X33, 0XA2 # xorq " _(VALUE) "(%edx), %r12")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X33, 0XA7 # xorq " _(VALUE) "(%edi), %r12")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X33, 0XA6 # xorq " _(VALUE) "(%esi), %r12")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X33, 0XA5 # xorq " _(VALUE) "(%ebp), %r12")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X33, 0XA4, 0X24 # xorq " _(VALUE) "(%esp), %r12")\
	CMT_ASM(".long " _(VALUE))

#define XOR_R13_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X33, 0XA8 # xorq " _(VALUE) "(%rax), %r13")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X33, 0XAB # xorq " _(VALUE) "(%rbx), %r13")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X33, 0XA9 # xorq " _(VALUE) "(%rcx), %r13")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X33, 0XAA # xorq " _(VALUE) "(%rdx), %r13")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X33, 0XAF # xorq " _(VALUE) "(%rdi), %r13")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X33, 0XAE # xorq " _(VALUE) "(%rsi), %r13")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X33, 0XAD # xorq " _(VALUE) "(%rbp), %r13")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X33, 0XAC, 0X24 # xorq " _(VALUE) "(%rsp), %r13")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X33, 0XA8 # xorq " _(VALUE) "(%r8), %r13")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X33, 0XA9 # xorq " _(VALUE) "(%r9), %r13")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X33, 0XAA # xorq " _(VALUE) "(%r10), %r13")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X33, 0XAB # xorq " _(VALUE) "(%r11), %r13")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X33, 0XAC, 0X24 # xorq " _(VALUE) "(%r12), %r13")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X33, 0XAD # xorq " _(VALUE) "(%r13), %r13")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X33, 0XAE # xorq " _(VALUE) "(%r14), %r13")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X33, 0XAF # xorq " _(VALUE) "(%r15), %r13")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X33, 0XA8 # xorq " _(VALUE) "(%eax), %r13")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X33, 0XAB # xorq " _(VALUE) "(%ebx), %r13")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X33, 0XA9 # xorq " _(VALUE) "(%ecx), %r13")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X33, 0XAA # xorq " _(VALUE) "(%edx), %r13")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X33, 0XAF # xorq " _(VALUE) "(%edi), %r13")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X33, 0XAE # xorq " _(VALUE) "(%esi), %r13")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X33, 0XAD # xorq " _(VALUE) "(%ebp), %r13")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X33, 0XAC, 0X24 # xorq " _(VALUE) "(%esp), %r13")\
	CMT_ASM(".long " _(VALUE))

#define XOR_R14_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X33, 0XB0 # xorq " _(VALUE) "(%rax), %r14")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X33, 0XB3 # xorq " _(VALUE) "(%rbx), %r14")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X33, 0XB1 # xorq " _(VALUE) "(%rcx), %r14")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X33, 0XB2 # xorq " _(VALUE) "(%rdx), %r14")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X33, 0XB7 # xorq " _(VALUE) "(%rdi), %r14")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X33, 0XB6 # xorq " _(VALUE) "(%rsi), %r14")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X33, 0XB5 # xorq " _(VALUE) "(%rbp), %r14")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X33, 0XB4, 0X24 # xorq " _(VALUE) "(%rsp), %r14")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X33, 0XB0 # xorq " _(VALUE) "(%r8), %r14")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X33, 0XB1 # xorq " _(VALUE) "(%r9), %r14")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X33, 0XB2 # xorq " _(VALUE) "(%r10), %r14")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X33, 0XB3 # xorq " _(VALUE) "(%r11), %r14")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X33, 0XB4, 0X24 # xorq " _(VALUE) "(%r12), %r14")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X33, 0XB5 # xorq " _(VALUE) "(%r13), %r14")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X33, 0XB6 # xorq " _(VALUE) "(%r14), %r14")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X33, 0XB7 # xorq " _(VALUE) "(%r15), %r14")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X33, 0XB0 # xorq " _(VALUE) "(%eax), %r14")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X33, 0XB3 # xorq " _(VALUE) "(%ebx), %r14")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X33, 0XB1 # xorq " _(VALUE) "(%ecx), %r14")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X33, 0XB2 # xorq " _(VALUE) "(%edx), %r14")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X33, 0XB7 # xorq " _(VALUE) "(%edi), %r14")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X33, 0XB6 # xorq " _(VALUE) "(%esi), %r14")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X33, 0XB5 # xorq " _(VALUE) "(%ebp), %r14")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X33, 0XB4, 0X24 # xorq " _(VALUE) "(%esp), %r14")\
	CMT_ASM(".long " _(VALUE))

#define XOR_R15_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X33, 0XB8 # xorq " _(VALUE) "(%rax), %r15")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X33, 0XBB # xorq " _(VALUE) "(%rbx), %r15")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X33, 0XB9 # xorq " _(VALUE) "(%rcx), %r15")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X33, 0XBA # xorq " _(VALUE) "(%rdx), %r15")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X33, 0XBF # xorq " _(VALUE) "(%rdi), %r15")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X33, 0XBE # xorq " _(VALUE) "(%rsi), %r15")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X33, 0XBD # xorq " _(VALUE) "(%rbp), %r15")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X33, 0XBC, 0X24 # xorq " _(VALUE) "(%rsp), %r15")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X33, 0XB8 # xorq " _(VALUE) "(%r8), %r15")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X33, 0XB9 # xorq " _(VALUE) "(%r9), %r15")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X33, 0XBA # xorq " _(VALUE) "(%r10), %r15")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X33, 0XBB # xorq " _(VALUE) "(%r11), %r15")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X33, 0XBC, 0X24 # xorq " _(VALUE) "(%r12), %r15")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X33, 0XBD # xorq " _(VALUE) "(%r13), %r15")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X33, 0XBE # xorq " _(VALUE) "(%r14), %r15")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X33, 0XBF # xorq " _(VALUE) "(%r15), %r15")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X33, 0XB8 # xorq " _(VALUE) "(%eax), %r15")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X33, 0XBB # xorq " _(VALUE) "(%ebx), %r15")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X33, 0XB9 # xorq " _(VALUE) "(%ecx), %r15")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X33, 0XBA # xorq " _(VALUE) "(%edx), %r15")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X33, 0XBF # xorq " _(VALUE) "(%edi), %r15")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X33, 0XBE # xorq " _(VALUE) "(%esi), %r15")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X33, 0XBD # xorq " _(VALUE) "(%ebp), %r15")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X33, 0XBC, 0X24 # xorq " _(VALUE) "(%esp), %r15")\
	CMT_ASM(".long " _(VALUE))

#define XOR_RAX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X31, 0X80 # xorq %rax, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RAX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X31, 0X83 # xorq %rax, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RAX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X31, 0X81 # xorq %rax, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RAX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X31, 0X82 # xorq %rax, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RAX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X31, 0X87 # xorq %rax, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RAX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X31, 0X86 # xorq %rax, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RAX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X31, 0X85 # xorq %rax, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RAX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X31, 0X84, 0X24 # xorq %rax, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RAX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X31, 0X80 # xorq %rax, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RAX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X31, 0X81 # xorq %rax, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RAX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X31, 0X82 # xorq %rax, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RAX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X31, 0X83 # xorq %rax, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RAX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X31, 0X84, 0X24 # xorq %rax, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RAX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X31, 0X85 # xorq %rax, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RAX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X31, 0X86 # xorq %rax, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RAX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X31, 0X87 # xorq %rax, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RAX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X31, 0X80 # xorq %rax, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RAX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X31, 0X83 # xorq %rax, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RAX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X31, 0X81 # xorq %rax, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RAX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X31, 0X82 # xorq %rax, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RAX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X31, 0X87 # xorq %rax, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RAX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X31, 0X86 # xorq %rax, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RAX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X31, 0X85 # xorq %rax, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RAX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X31, 0X84, 0X24 # xorq %rax, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XOR_RBX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X31, 0X98 # xorq %rbx, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RBX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X31, 0X9B # xorq %rbx, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RBX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X31, 0X99 # xorq %rbx, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RBX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X31, 0X9A # xorq %rbx, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RBX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X31, 0X9F # xorq %rbx, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RBX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X31, 0X9E # xorq %rbx, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RBX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X31, 0X9D # xorq %rbx, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RBX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X31, 0X9C, 0X24 # xorq %rbx, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RBX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X31, 0X98 # xorq %rbx, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RBX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X31, 0X99 # xorq %rbx, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RBX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X31, 0X9A # xorq %rbx, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RBX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X31, 0X9B # xorq %rbx, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RBX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X31, 0X9C, 0X24 # xorq %rbx, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RBX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X31, 0X9D # xorq %rbx, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RBX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X31, 0X9E # xorq %rbx, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RBX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X31, 0X9F # xorq %rbx, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RBX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X31, 0X98 # xorq %rbx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RBX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X31, 0X9B # xorq %rbx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RBX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X31, 0X99 # xorq %rbx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RBX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X31, 0X9A # xorq %rbx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RBX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X31, 0X9F # xorq %rbx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RBX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X31, 0X9E # xorq %rbx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RBX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X31, 0X9D # xorq %rbx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RBX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X31, 0X9C, 0X24 # xorq %rbx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XOR_RCX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X31, 0X88 # xorq %rcx, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RCX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X31, 0X8B # xorq %rcx, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RCX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X31, 0X89 # xorq %rcx, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RCX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X31, 0X8A # xorq %rcx, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RCX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X31, 0X8F # xorq %rcx, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RCX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X31, 0X8E # xorq %rcx, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RCX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X31, 0X8D # xorq %rcx, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RCX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X31, 0X8C, 0X24 # xorq %rcx, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RCX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X31, 0X88 # xorq %rcx, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RCX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X31, 0X89 # xorq %rcx, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RCX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X31, 0X8A # xorq %rcx, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RCX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X31, 0X8B # xorq %rcx, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RCX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X31, 0X8C, 0X24 # xorq %rcx, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RCX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X31, 0X8D # xorq %rcx, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RCX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X31, 0X8E # xorq %rcx, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RCX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X31, 0X8F # xorq %rcx, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RCX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X31, 0X88 # xorq %rcx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RCX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X31, 0X8B # xorq %rcx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RCX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X31, 0X89 # xorq %rcx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RCX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X31, 0X8A # xorq %rcx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RCX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X31, 0X8F # xorq %rcx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RCX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X31, 0X8E # xorq %rcx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RCX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X31, 0X8D # xorq %rcx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RCX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X31, 0X8C, 0X24 # xorq %rcx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XOR_RDX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X31, 0X90 # xorq %rdx, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RDX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X31, 0X93 # xorq %rdx, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RDX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X31, 0X91 # xorq %rdx, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RDX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X31, 0X92 # xorq %rdx, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RDX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X31, 0X97 # xorq %rdx, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RDX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X31, 0X96 # xorq %rdx, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RDX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X31, 0X95 # xorq %rdx, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RDX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X31, 0X94, 0X24 # xorq %rdx, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RDX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X31, 0X90 # xorq %rdx, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RDX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X31, 0X91 # xorq %rdx, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RDX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X31, 0X92 # xorq %rdx, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RDX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X31, 0X93 # xorq %rdx, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RDX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X31, 0X94, 0X24 # xorq %rdx, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RDX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X31, 0X95 # xorq %rdx, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RDX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X31, 0X96 # xorq %rdx, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RDX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X31, 0X97 # xorq %rdx, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RDX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X31, 0X90 # xorq %rdx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RDX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X31, 0X93 # xorq %rdx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RDX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X31, 0X91 # xorq %rdx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RDX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X31, 0X92 # xorq %rdx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RDX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X31, 0X97 # xorq %rdx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RDX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X31, 0X96 # xorq %rdx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RDX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X31, 0X95 # xorq %rdx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RDX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X31, 0X94, 0X24 # xorq %rdx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XOR_RDI_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X31, 0XB8 # xorq %rdi, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RDI_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X31, 0XBB # xorq %rdi, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RDI_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X31, 0XB9 # xorq %rdi, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RDI_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X31, 0XBA # xorq %rdi, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RDI_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X31, 0XBF # xorq %rdi, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RDI_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X31, 0XBE # xorq %rdi, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RDI_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X31, 0XBD # xorq %rdi, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RDI_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X31, 0XBC, 0X24 # xorq %rdi, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RDI_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X31, 0XB8 # xorq %rdi, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RDI_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X31, 0XB9 # xorq %rdi, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RDI_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X31, 0XBA # xorq %rdi, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RDI_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X31, 0XBB # xorq %rdi, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RDI_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X31, 0XBC, 0X24 # xorq %rdi, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RDI_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X31, 0XBD # xorq %rdi, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RDI_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X31, 0XBE # xorq %rdi, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RDI_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X31, 0XBF # xorq %rdi, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RDI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X31, 0XB8 # xorq %rdi, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RDI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X31, 0XBB # xorq %rdi, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RDI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X31, 0XB9 # xorq %rdi, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RDI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X31, 0XBA # xorq %rdi, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RDI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X31, 0XBF # xorq %rdi, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RDI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X31, 0XBE # xorq %rdi, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RDI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X31, 0XBD # xorq %rdi, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RDI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X31, 0XBC, 0X24 # xorq %rdi, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XOR_RSI_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X31, 0XB0 # xorq %rsi, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RSI_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X31, 0XB3 # xorq %rsi, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RSI_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X31, 0XB1 # xorq %rsi, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RSI_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X31, 0XB2 # xorq %rsi, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RSI_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X31, 0XB7 # xorq %rsi, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RSI_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X31, 0XB6 # xorq %rsi, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RSI_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X31, 0XB5 # xorq %rsi, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RSI_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X31, 0XB4, 0X24 # xorq %rsi, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RSI_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X31, 0XB0 # xorq %rsi, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RSI_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X31, 0XB1 # xorq %rsi, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RSI_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X31, 0XB2 # xorq %rsi, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RSI_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X31, 0XB3 # xorq %rsi, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RSI_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X31, 0XB4, 0X24 # xorq %rsi, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RSI_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X31, 0XB5 # xorq %rsi, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RSI_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X31, 0XB6 # xorq %rsi, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RSI_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X31, 0XB7 # xorq %rsi, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RSI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X31, 0XB0 # xorq %rsi, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RSI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X31, 0XB3 # xorq %rsi, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RSI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X31, 0XB1 # xorq %rsi, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RSI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X31, 0XB2 # xorq %rsi, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RSI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X31, 0XB7 # xorq %rsi, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RSI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X31, 0XB6 # xorq %rsi, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RSI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X31, 0XB5 # xorq %rsi, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RSI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X31, 0XB4, 0X24 # xorq %rsi, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XOR_RBP_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X31, 0XA8 # xorq %rbp, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RBP_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X31, 0XAB # xorq %rbp, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RBP_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X31, 0XA9 # xorq %rbp, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RBP_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X31, 0XAA # xorq %rbp, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RBP_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X31, 0XAF # xorq %rbp, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RBP_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X31, 0XAE # xorq %rbp, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RBP_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X31, 0XAD # xorq %rbp, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RBP_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X31, 0XAC, 0X24 # xorq %rbp, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RBP_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X31, 0XA8 # xorq %rbp, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RBP_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X31, 0XA9 # xorq %rbp, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RBP_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X31, 0XAA # xorq %rbp, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RBP_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X31, 0XAB # xorq %rbp, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RBP_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X31, 0XAC, 0X24 # xorq %rbp, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RBP_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X31, 0XAD # xorq %rbp, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RBP_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X31, 0XAE # xorq %rbp, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RBP_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X31, 0XAF # xorq %rbp, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RBP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X31, 0XA8 # xorq %rbp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RBP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X31, 0XAB # xorq %rbp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RBP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X31, 0XA9 # xorq %rbp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RBP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X31, 0XAA # xorq %rbp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RBP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X31, 0XAF # xorq %rbp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RBP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X31, 0XAE # xorq %rbp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RBP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X31, 0XAD # xorq %rbp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RBP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X31, 0XAC, 0X24 # xorq %rbp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XOR_RSP_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X31, 0XA0 # xorq %rsp, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RSP_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X31, 0XA3 # xorq %rsp, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RSP_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X31, 0XA1 # xorq %rsp, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RSP_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X31, 0XA2 # xorq %rsp, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RSP_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X31, 0XA7 # xorq %rsp, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RSP_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X31, 0XA6 # xorq %rsp, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RSP_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X31, 0XA5 # xorq %rsp, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RSP_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X31, 0XA4, 0X24 # xorq %rsp, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RSP_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X31, 0XA0 # xorq %rsp, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RSP_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X31, 0XA1 # xorq %rsp, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RSP_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X31, 0XA2 # xorq %rsp, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RSP_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X31, 0XA3 # xorq %rsp, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RSP_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X31, 0XA4, 0X24 # xorq %rsp, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RSP_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X31, 0XA5 # xorq %rsp, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RSP_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X31, 0XA6 # xorq %rsp, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RSP_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X31, 0XA7 # xorq %rsp, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RSP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X31, 0XA0 # xorq %rsp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RSP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X31, 0XA3 # xorq %rsp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RSP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X31, 0XA1 # xorq %rsp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RSP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X31, 0XA2 # xorq %rsp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RSP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X31, 0XA7 # xorq %rsp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RSP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X31, 0XA6 # xorq %rsp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RSP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X31, 0XA5 # xorq %rsp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_RSP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X31, 0XA4, 0X24 # xorq %rsp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XOR_R8_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X31, 0X80 # xorq %r8, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X31, 0X83 # xorq %r8, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X31, 0X81 # xorq %r8, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X31, 0X82 # xorq %r8, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X31, 0X87 # xorq %r8, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X31, 0X86 # xorq %r8, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X31, 0X85 # xorq %r8, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X31, 0X84, 0X24 # xorq %r8, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X31, 0X80 # xorq %r8, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X31, 0X81 # xorq %r8, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X31, 0X82 # xorq %r8, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X31, 0X83 # xorq %r8, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X31, 0X84, 0X24 # xorq %r8, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X31, 0X85 # xorq %r8, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X31, 0X86 # xorq %r8, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X31, 0X87 # xorq %r8, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X31, 0X80 # xorq %r8, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X31, 0X83 # xorq %r8, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X31, 0X81 # xorq %r8, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X31, 0X82 # xorq %r8, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X31, 0X87 # xorq %r8, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X31, 0X86 # xorq %r8, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X31, 0X85 # xorq %r8, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X31, 0X84, 0X24 # xorq %r8, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XOR_R9_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X31, 0X88 # xorq %r9, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X31, 0X8B # xorq %r9, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X31, 0X89 # xorq %r9, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X31, 0X8A # xorq %r9, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X31, 0X8F # xorq %r9, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X31, 0X8E # xorq %r9, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X31, 0X8D # xorq %r9, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X31, 0X8C, 0X24 # xorq %r9, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X31, 0X88 # xorq %r9, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X31, 0X89 # xorq %r9, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X31, 0X8A # xorq %r9, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X31, 0X8B # xorq %r9, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X31, 0X8C, 0X24 # xorq %r9, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X31, 0X8D # xorq %r9, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X31, 0X8E # xorq %r9, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X31, 0X8F # xorq %r9, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X31, 0X88 # xorq %r9, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X31, 0X8B # xorq %r9, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X31, 0X89 # xorq %r9, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X31, 0X8A # xorq %r9, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X31, 0X8F # xorq %r9, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X31, 0X8E # xorq %r9, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X31, 0X8D # xorq %r9, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X31, 0X8C, 0X24 # xorq %r9, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XOR_R10_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X31, 0X90 # xorq %r10, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X31, 0X93 # xorq %r10, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X31, 0X91 # xorq %r10, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X31, 0X92 # xorq %r10, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X31, 0X97 # xorq %r10, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X31, 0X96 # xorq %r10, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X31, 0X95 # xorq %r10, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X31, 0X94, 0X24 # xorq %r10, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X31, 0X90 # xorq %r10, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X31, 0X91 # xorq %r10, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X31, 0X92 # xorq %r10, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X31, 0X93 # xorq %r10, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X31, 0X94, 0X24 # xorq %r10, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X31, 0X95 # xorq %r10, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X31, 0X96 # xorq %r10, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X31, 0X97 # xorq %r10, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X31, 0X90 # xorq %r10, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X31, 0X93 # xorq %r10, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X31, 0X91 # xorq %r10, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X31, 0X92 # xorq %r10, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X31, 0X97 # xorq %r10, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X31, 0X96 # xorq %r10, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X31, 0X95 # xorq %r10, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X31, 0X94, 0X24 # xorq %r10, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XOR_R11_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X31, 0X98 # xorq %r11, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X31, 0X9B # xorq %r11, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X31, 0X99 # xorq %r11, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X31, 0X9A # xorq %r11, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X31, 0X9F # xorq %r11, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X31, 0X9E # xorq %r11, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X31, 0X9D # xorq %r11, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X31, 0X9C, 0X24 # xorq %r11, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X31, 0X98 # xorq %r11, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X31, 0X99 # xorq %r11, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X31, 0X9A # xorq %r11, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X31, 0X9B # xorq %r11, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X31, 0X9C, 0X24 # xorq %r11, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X31, 0X9D # xorq %r11, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X31, 0X9E # xorq %r11, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X31, 0X9F # xorq %r11, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X31, 0X98 # xorq %r11, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X31, 0X9B # xorq %r11, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X31, 0X99 # xorq %r11, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X31, 0X9A # xorq %r11, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X31, 0X9F # xorq %r11, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X31, 0X9E # xorq %r11, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X31, 0X9D # xorq %r11, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X31, 0X9C, 0X24 # xorq %r11, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XOR_R12_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X31, 0XA0 # xorq %r12, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X31, 0XA3 # xorq %r12, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X31, 0XA1 # xorq %r12, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X31, 0XA2 # xorq %r12, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X31, 0XA7 # xorq %r12, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X31, 0XA6 # xorq %r12, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X31, 0XA5 # xorq %r12, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X31, 0XA4, 0X24 # xorq %r12, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X31, 0XA0 # xorq %r12, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X31, 0XA1 # xorq %r12, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X31, 0XA2 # xorq %r12, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X31, 0XA3 # xorq %r12, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X31, 0XA4, 0X24 # xorq %r12, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X31, 0XA5 # xorq %r12, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X31, 0XA6 # xorq %r12, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X31, 0XA7 # xorq %r12, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X31, 0XA0 # xorq %r12, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X31, 0XA3 # xorq %r12, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X31, 0XA1 # xorq %r12, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X31, 0XA2 # xorq %r12, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X31, 0XA7 # xorq %r12, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X31, 0XA6 # xorq %r12, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X31, 0XA5 # xorq %r12, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X31, 0XA4, 0X24 # xorq %r12, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XOR_R13_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X31, 0XA8 # xorq %r13, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X31, 0XAB # xorq %r13, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X31, 0XA9 # xorq %r13, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X31, 0XAA # xorq %r13, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X31, 0XAF # xorq %r13, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X31, 0XAE # xorq %r13, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X31, 0XAD # xorq %r13, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X31, 0XAC, 0X24 # xorq %r13, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X31, 0XA8 # xorq %r13, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X31, 0XA9 # xorq %r13, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X31, 0XAA # xorq %r13, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X31, 0XAB # xorq %r13, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X31, 0XAC, 0X24 # xorq %r13, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X31, 0XAD # xorq %r13, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X31, 0XAE # xorq %r13, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X31, 0XAF # xorq %r13, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X31, 0XA8 # xorq %r13, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X31, 0XAB # xorq %r13, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X31, 0XA9 # xorq %r13, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X31, 0XAA # xorq %r13, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X31, 0XAF # xorq %r13, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X31, 0XAE # xorq %r13, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X31, 0XAD # xorq %r13, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X31, 0XAC, 0X24 # xorq %r13, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XOR_R14_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X31, 0XB0 # xorq %r14, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X31, 0XB3 # xorq %r14, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X31, 0XB1 # xorq %r14, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X31, 0XB2 # xorq %r14, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X31, 0XB7 # xorq %r14, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X31, 0XB6 # xorq %r14, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X31, 0XB5 # xorq %r14, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X31, 0XB4, 0X24 # xorq %r14, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X31, 0XB0 # xorq %r14, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X31, 0XB1 # xorq %r14, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X31, 0XB2 # xorq %r14, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X31, 0XB3 # xorq %r14, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X31, 0XB4, 0X24 # xorq %r14, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X31, 0XB5 # xorq %r14, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X31, 0XB6 # xorq %r14, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X31, 0XB7 # xorq %r14, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X31, 0XB0 # xorq %r14, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X31, 0XB3 # xorq %r14, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X31, 0XB1 # xorq %r14, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X31, 0XB2 # xorq %r14, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X31, 0XB7 # xorq %r14, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X31, 0XB6 # xorq %r14, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X31, 0XB5 # xorq %r14, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X31, 0XB4, 0X24 # xorq %r14, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XOR_R15_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X31, 0XB8 # xorq %r15, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X31, 0XBB # xorq %r15, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X31, 0XB9 # xorq %r15, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X31, 0XBA # xorq %r15, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X31, 0XBF # xorq %r15, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X31, 0XBE # xorq %r15, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X31, 0XBD # xorq %r15, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X31, 0XBC, 0X24 # xorq %r15, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X31, 0XB8 # xorq %r15, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X31, 0XB9 # xorq %r15, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X31, 0XBA # xorq %r15, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X31, 0XBB # xorq %r15, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X31, 0XBC, 0X24 # xorq %r15, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X31, 0XBD # xorq %r15, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X31, 0XBE # xorq %r15, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X31, 0XBF # xorq %r15, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X31, 0XB8 # xorq %r15, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X31, 0XBB # xorq %r15, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X31, 0XB9 # xorq %r15, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X31, 0XBA # xorq %r15, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X31, 0XBF # xorq %r15, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X31, 0XBE # xorq %r15, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X31, 0XBD # xorq %r15, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X31, 0XBC, 0X24 # xorq %r15, " _(VALUE) "(%esp)")\
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
