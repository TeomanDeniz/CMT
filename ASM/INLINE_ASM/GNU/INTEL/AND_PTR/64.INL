#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************* [v] 64-BIT MEMORY [v] ************************** */
#define AND_RAX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X23, 0X04, 0X25 # andq (" _(VALUE) "), %rax")\
	CMT_ASM(".long " _(VALUE))
#define AND_RBX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X23, 0X1C, 0X25 # andq (" _(VALUE) "), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define AND_RCX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X23, 0X0C, 0X25 # andq (" _(VALUE) "), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define AND_RDX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X23, 0X14, 0X25 # andq (" _(VALUE) "), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define AND_RDI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X23, 0X3C, 0X25 # andq (" _(VALUE) "), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define AND_RSI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X23, 0X34, 0X25 # andq (" _(VALUE) "), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define AND_RBP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X23, 0X2C, 0X25 # andq (" _(VALUE) "), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define AND_RSP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X23, 0X24, 0X25 # andq (" _(VALUE) "), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X23, 0X04, 0X25 # andq (" _(VALUE) "), %r8")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X23, 0X0C, 0X25 # andq (" _(VALUE) "), %r9")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X23, 0X14, 0X25 # andq (" _(VALUE) "), %r10")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X23, 0X1C, 0X25 # andq (" _(VALUE) "), %r11")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X23, 0X24, 0X25 # andq (" _(VALUE) "), %r12")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X23, 0X2C, 0X25 # andq (" _(VALUE) "), %r13")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X23, 0X34, 0X25 # andq (" _(VALUE) "), %r14")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X23, 0X3C, 0X25 # andq (" _(VALUE) "), %r15")\
	CMT_ASM(".long " _(VALUE))

#define AND_RAX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X21, 0X04, 0X25 # andq %rax, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define AND_RBX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X21, 0X1C, 0X25 # andq %rbx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define AND_RCX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X21, 0X0C, 0X25 # andq %rcx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define AND_RDX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X21, 0X14, 0X25 # andq %rdx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define AND_RDI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X21, 0X3C, 0X25 # andq %rdi, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define AND_RSI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X21, 0X34, 0X25 # andq %rsi, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define AND_RBP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X21, 0X2C, 0X25 # andq %rbp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define AND_RSP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X21, 0X24, 0X25 # andq %rsp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X21, 0X04, 0X25 # andq %r8, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X21, 0X0C, 0X25 # andq %r9, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X21, 0X14, 0X25 # andq %r10, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X21, 0X1C, 0X25 # andq %r11, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X21, 0X24, 0X25 # andq %r12, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X21, 0X2C, 0X25 # andq %r13, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X21, 0X34, 0X25 # andq %r14, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X21, 0X3C, 0X25 # andq %r15, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))

#define AND_RAX_FROM_PTR_RAX CMT_ASM(".byte 0X48, 0X23, 0X00 # andq (%rax), %rax")
#define AND_RAX_FROM_PTR_RBX CMT_ASM(".byte 0X48, 0X23, 0X03 # andq (%rbx), %rax")
#define AND_RAX_FROM_PTR_RCX CMT_ASM(".byte 0X48, 0X23, 0X01 # andq (%rcx), %rax")
#define AND_RAX_FROM_PTR_RDX CMT_ASM(".byte 0X48, 0X23, 0X02 # andq (%rdx), %rax")
#define AND_RAX_FROM_PTR_RDI CMT_ASM(".byte 0X48, 0X23, 0X07 # andq (%rdi), %rax")
#define AND_RAX_FROM_PTR_RSI CMT_ASM(".byte 0X48, 0X23, 0X06 # andq (%rsi), %rax")
#define AND_RAX_FROM_PTR_RBP CMT_ASM(".byte 0X48, 0X23, 0X45, 0X00 # andq (%rbp), %rax")
#define AND_RAX_FROM_PTR_RSP CMT_ASM(".byte 0X48, 0X23, 0X04, 0X24 # andq (%rsp), %rax")
#define AND_RAX_FROM_PTR_R8 CMT_ASM(".byte 0X49, 0X23, 0X00 # andq (%r8), %rax")
#define AND_RAX_FROM_PTR_R9 CMT_ASM(".byte 0X49, 0X23, 0X01 # andq (%r9), %rax")
#define AND_RAX_FROM_PTR_R10 CMT_ASM(".byte 0X49, 0X23, 0X02 # andq (%r10), %rax")
#define AND_RAX_FROM_PTR_R11 CMT_ASM(".byte 0X49, 0X23, 0X03 # andq (%r11), %rax")
#define AND_RAX_FROM_PTR_R12 CMT_ASM(".byte 0X49, 0X23, 0X04, 0X24 # andq (%r12), %rax")
#define AND_RAX_FROM_PTR_R13 CMT_ASM(".byte 0X49, 0X23, 0X45, 0X00 # andq (%r13), %rax")
#define AND_RAX_FROM_PTR_R14 CMT_ASM(".byte 0X49, 0X23, 0X06 # andq (%r14), %rax")
#define AND_RAX_FROM_PTR_R15 CMT_ASM(".byte 0X49, 0X23, 0X07 # andq (%r15), %rax")
#define AND_RAX_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X23, 0X00 # andq (%eax), %rax")
#define AND_RAX_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X23, 0X03 # andq (%ebx), %rax")
#define AND_RAX_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X23, 0X01 # andq (%ecx), %rax")
#define AND_RAX_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X23, 0X02 # andq (%edx), %rax")
#define AND_RAX_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X23, 0X07 # andq (%edi), %rax")
#define AND_RAX_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X23, 0X06 # andq (%esi), %rax")
#define AND_RAX_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X23, 0X45, 0X00 # andq (%ebp), %rax")
#define AND_RAX_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X23, 0X04, 0X24 # andq (%esp), %rax")

#define AND_RBX_FROM_PTR_RAX CMT_ASM(".byte 0X48, 0X23, 0X18 # andq (%rax), %rbx")
#define AND_RBX_FROM_PTR_RBX CMT_ASM(".byte 0X48, 0X23, 0X1B # andq (%rbx), %rbx")
#define AND_RBX_FROM_PTR_RCX CMT_ASM(".byte 0X48, 0X23, 0X19 # andq (%rcx), %rbx")
#define AND_RBX_FROM_PTR_RDX CMT_ASM(".byte 0X48, 0X23, 0X1A # andq (%rdx), %rbx")
#define AND_RBX_FROM_PTR_RDI CMT_ASM(".byte 0X48, 0X23, 0X1F # andq (%rdi), %rbx")
#define AND_RBX_FROM_PTR_RSI CMT_ASM(".byte 0X48, 0X23, 0X1E # andq (%rsi), %rbx")
#define AND_RBX_FROM_PTR_RBP CMT_ASM(".byte 0X48, 0X23, 0X5D, 0X00 # andq (%rbp), %rbx")
#define AND_RBX_FROM_PTR_RSP CMT_ASM(".byte 0X48, 0X23, 0X1C, 0X24 # andq (%rsp), %rbx")
#define AND_RBX_FROM_PTR_R8 CMT_ASM(".byte 0X49, 0X23, 0X18 # andq (%r8), %rbx")
#define AND_RBX_FROM_PTR_R9 CMT_ASM(".byte 0X49, 0X23, 0X19 # andq (%r9), %rbx")
#define AND_RBX_FROM_PTR_R10 CMT_ASM(".byte 0X49, 0X23, 0X1A # andq (%r10), %rbx")
#define AND_RBX_FROM_PTR_R11 CMT_ASM(".byte 0X49, 0X23, 0X1B # andq (%r11), %rbx")
#define AND_RBX_FROM_PTR_R12 CMT_ASM(".byte 0X49, 0X23, 0X1C, 0X24 # andq (%r12), %rbx")
#define AND_RBX_FROM_PTR_R13 CMT_ASM(".byte 0X49, 0X23, 0X5D, 0X00 # andq (%r13), %rbx")
#define AND_RBX_FROM_PTR_R14 CMT_ASM(".byte 0X49, 0X23, 0X1E # andq (%r14), %rbx")
#define AND_RBX_FROM_PTR_R15 CMT_ASM(".byte 0X49, 0X23, 0X1F # andq (%r15), %rbx")
#define AND_RBX_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X23, 0X18 # andq (%eax), %rbx")
#define AND_RBX_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X23, 0X1B # andq (%ebx), %rbx")
#define AND_RBX_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X23, 0X19 # andq (%ecx), %rbx")
#define AND_RBX_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X23, 0X1A # andq (%edx), %rbx")
#define AND_RBX_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X23, 0X1F # andq (%edi), %rbx")
#define AND_RBX_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X23, 0X1E # andq (%esi), %rbx")
#define AND_RBX_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X23, 0X5D, 0X00 # andq (%ebp), %rbx")
#define AND_RBX_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X23, 0X1C, 0X24 # andq (%esp), %rbx")

#define AND_RCX_FROM_PTR_RAX CMT_ASM(".byte 0X48, 0X23, 0X08 # andq (%rax), %rcx")
#define AND_RCX_FROM_PTR_RBX CMT_ASM(".byte 0X48, 0X23, 0X0B # andq (%rbx), %rcx")
#define AND_RCX_FROM_PTR_RCX CMT_ASM(".byte 0X48, 0X23, 0X09 # andq (%rcx), %rcx")
#define AND_RCX_FROM_PTR_RDX CMT_ASM(".byte 0X48, 0X23, 0X0A # andq (%rdx), %rcx")
#define AND_RCX_FROM_PTR_RDI CMT_ASM(".byte 0X48, 0X23, 0X0F # andq (%rdi), %rcx")
#define AND_RCX_FROM_PTR_RSI CMT_ASM(".byte 0X48, 0X23, 0X0E # andq (%rsi), %rcx")
#define AND_RCX_FROM_PTR_RBP CMT_ASM(".byte 0X48, 0X23, 0X4D, 0X00 # andq (%rbp), %rcx")
#define AND_RCX_FROM_PTR_RSP CMT_ASM(".byte 0X48, 0X23, 0X0C, 0X24 # andq (%rsp), %rcx")
#define AND_RCX_FROM_PTR_R8 CMT_ASM(".byte 0X49, 0X23, 0X08 # andq (%r8), %rcx")
#define AND_RCX_FROM_PTR_R9 CMT_ASM(".byte 0X49, 0X23, 0X09 # andq (%r9), %rcx")
#define AND_RCX_FROM_PTR_R10 CMT_ASM(".byte 0X49, 0X23, 0X0A # andq (%r10), %rcx")
#define AND_RCX_FROM_PTR_R11 CMT_ASM(".byte 0X49, 0X23, 0X0B # andq (%r11), %rcx")
#define AND_RCX_FROM_PTR_R12 CMT_ASM(".byte 0X49, 0X23, 0X0C, 0X24 # andq (%r12), %rcx")
#define AND_RCX_FROM_PTR_R13 CMT_ASM(".byte 0X49, 0X23, 0X4D, 0X00 # andq (%r13), %rcx")
#define AND_RCX_FROM_PTR_R14 CMT_ASM(".byte 0X49, 0X23, 0X0E # andq (%r14), %rcx")
#define AND_RCX_FROM_PTR_R15 CMT_ASM(".byte 0X49, 0X23, 0X0F # andq (%r15), %rcx")
#define AND_RCX_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X23, 0X08 # andq (%eax), %rcx")
#define AND_RCX_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X23, 0X0B # andq (%ebx), %rcx")
#define AND_RCX_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X23, 0X09 # andq (%ecx), %rcx")
#define AND_RCX_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X23, 0X0A # andq (%edx), %rcx")
#define AND_RCX_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X23, 0X0F # andq (%edi), %rcx")
#define AND_RCX_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X23, 0X0E # andq (%esi), %rcx")
#define AND_RCX_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X23, 0X4D, 0X00 # andq (%ebp), %rcx")
#define AND_RCX_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X23, 0X0C, 0X24 # andq (%esp), %rcx")

#define AND_RDX_FROM_PTR_RAX CMT_ASM(".byte 0X48, 0X23, 0X10 # andq (%rax), %rdx")
#define AND_RDX_FROM_PTR_RBX CMT_ASM(".byte 0X48, 0X23, 0X13 # andq (%rbx), %rdx")
#define AND_RDX_FROM_PTR_RCX CMT_ASM(".byte 0X48, 0X23, 0X11 # andq (%rcx), %rdx")
#define AND_RDX_FROM_PTR_RDX CMT_ASM(".byte 0X48, 0X23, 0X12 # andq (%rdx), %rdx")
#define AND_RDX_FROM_PTR_RDI CMT_ASM(".byte 0X48, 0X23, 0X17 # andq (%rdi), %rdx")
#define AND_RDX_FROM_PTR_RSI CMT_ASM(".byte 0X48, 0X23, 0X16 # andq (%rsi), %rdx")
#define AND_RDX_FROM_PTR_RBP CMT_ASM(".byte 0X48, 0X23, 0X55, 0X00 # andq (%rbp), %rdx")
#define AND_RDX_FROM_PTR_RSP CMT_ASM(".byte 0X48, 0X23, 0X14, 0X24 # andq (%rsp), %rdx")
#define AND_RDX_FROM_PTR_R8 CMT_ASM(".byte 0X49, 0X23, 0X10 # andq (%r8), %rdx")
#define AND_RDX_FROM_PTR_R9 CMT_ASM(".byte 0X49, 0X23, 0X11 # andq (%r9), %rdx")
#define AND_RDX_FROM_PTR_R10 CMT_ASM(".byte 0X49, 0X23, 0X12 # andq (%r10), %rdx")
#define AND_RDX_FROM_PTR_R11 CMT_ASM(".byte 0X49, 0X23, 0X13 # andq (%r11), %rdx")
#define AND_RDX_FROM_PTR_R12 CMT_ASM(".byte 0X49, 0X23, 0X14, 0X24 # andq (%r12), %rdx")
#define AND_RDX_FROM_PTR_R13 CMT_ASM(".byte 0X49, 0X23, 0X55, 0X00 # andq (%r13), %rdx")
#define AND_RDX_FROM_PTR_R14 CMT_ASM(".byte 0X49, 0X23, 0X16 # andq (%r14), %rdx")
#define AND_RDX_FROM_PTR_R15 CMT_ASM(".byte 0X49, 0X23, 0X17 # andq (%r15), %rdx")
#define AND_RDX_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X23, 0X10 # andq (%eax), %rdx")
#define AND_RDX_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X23, 0X13 # andq (%ebx), %rdx")
#define AND_RDX_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X23, 0X11 # andq (%ecx), %rdx")
#define AND_RDX_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X23, 0X12 # andq (%edx), %rdx")
#define AND_RDX_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X23, 0X17 # andq (%edi), %rdx")
#define AND_RDX_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X23, 0X16 # andq (%esi), %rdx")
#define AND_RDX_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X23, 0X55, 0X00 # andq (%ebp), %rdx")
#define AND_RDX_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X23, 0X14, 0X24 # andq (%esp), %rdx")

#define AND_RDI_FROM_PTR_RAX CMT_ASM(".byte 0X48, 0X23, 0X38 # andq (%rax), %rdi")
#define AND_RDI_FROM_PTR_RBX CMT_ASM(".byte 0X48, 0X23, 0X3B # andq (%rbx), %rdi")
#define AND_RDI_FROM_PTR_RCX CMT_ASM(".byte 0X48, 0X23, 0X39 # andq (%rcx), %rdi")
#define AND_RDI_FROM_PTR_RDX CMT_ASM(".byte 0X48, 0X23, 0X3A # andq (%rdx), %rdi")
#define AND_RDI_FROM_PTR_RDI CMT_ASM(".byte 0X48, 0X23, 0X3F # andq (%rdi), %rdi")
#define AND_RDI_FROM_PTR_RSI CMT_ASM(".byte 0X48, 0X23, 0X3E # andq (%rsi), %rdi")
#define AND_RDI_FROM_PTR_RBP CMT_ASM(".byte 0X48, 0X23, 0X7D, 0X00 # andq (%rbp), %rdi")
#define AND_RDI_FROM_PTR_RSP CMT_ASM(".byte 0X48, 0X23, 0X3C, 0X24 # andq (%rsp), %rdi")
#define AND_RDI_FROM_PTR_R8 CMT_ASM(".byte 0X49, 0X23, 0X38 # andq (%r8), %rdi")
#define AND_RDI_FROM_PTR_R9 CMT_ASM(".byte 0X49, 0X23, 0X39 # andq (%r9), %rdi")
#define AND_RDI_FROM_PTR_R10 CMT_ASM(".byte 0X49, 0X23, 0X3A # andq (%r10), %rdi")
#define AND_RDI_FROM_PTR_R11 CMT_ASM(".byte 0X49, 0X23, 0X3B # andq (%r11), %rdi")
#define AND_RDI_FROM_PTR_R12 CMT_ASM(".byte 0X49, 0X23, 0X3C, 0X24 # andq (%r12), %rdi")
#define AND_RDI_FROM_PTR_R13 CMT_ASM(".byte 0X49, 0X23, 0X7D, 0X00 # andq (%r13), %rdi")
#define AND_RDI_FROM_PTR_R14 CMT_ASM(".byte 0X49, 0X23, 0X3E # andq (%r14), %rdi")
#define AND_RDI_FROM_PTR_R15 CMT_ASM(".byte 0X49, 0X23, 0X3F # andq (%r15), %rdi")
#define AND_RDI_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X23, 0X38 # andq (%eax), %rdi")
#define AND_RDI_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X23, 0X3B # andq (%ebx), %rdi")
#define AND_RDI_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X23, 0X39 # andq (%ecx), %rdi")
#define AND_RDI_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X23, 0X3A # andq (%edx), %rdi")
#define AND_RDI_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X23, 0X3F # andq (%edi), %rdi")
#define AND_RDI_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X23, 0X3E # andq (%esi), %rdi")
#define AND_RDI_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X23, 0X7D, 0X00 # andq (%ebp), %rdi")
#define AND_RDI_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X23, 0X3C, 0X24 # andq (%esp), %rdi")

#define AND_RSI_FROM_PTR_RAX CMT_ASM(".byte 0X48, 0X23, 0X30 # andq (%rax), %rsi")
#define AND_RSI_FROM_PTR_RBX CMT_ASM(".byte 0X48, 0X23, 0X33 # andq (%rbx), %rsi")
#define AND_RSI_FROM_PTR_RCX CMT_ASM(".byte 0X48, 0X23, 0X31 # andq (%rcx), %rsi")
#define AND_RSI_FROM_PTR_RDX CMT_ASM(".byte 0X48, 0X23, 0X32 # andq (%rdx), %rsi")
#define AND_RSI_FROM_PTR_RDI CMT_ASM(".byte 0X48, 0X23, 0X37 # andq (%rdi), %rsi")
#define AND_RSI_FROM_PTR_RSI CMT_ASM(".byte 0X48, 0X23, 0X36 # andq (%rsi), %rsi")
#define AND_RSI_FROM_PTR_RBP CMT_ASM(".byte 0X48, 0X23, 0X75, 0X00 # andq (%rbp), %rsi")
#define AND_RSI_FROM_PTR_RSP CMT_ASM(".byte 0X48, 0X23, 0X34, 0X24 # andq (%rsp), %rsi")
#define AND_RSI_FROM_PTR_R8 CMT_ASM(".byte 0X49, 0X23, 0X30 # andq (%r8), %rsi")
#define AND_RSI_FROM_PTR_R9 CMT_ASM(".byte 0X49, 0X23, 0X31 # andq (%r9), %rsi")
#define AND_RSI_FROM_PTR_R10 CMT_ASM(".byte 0X49, 0X23, 0X32 # andq (%r10), %rsi")
#define AND_RSI_FROM_PTR_R11 CMT_ASM(".byte 0X49, 0X23, 0X33 # andq (%r11), %rsi")
#define AND_RSI_FROM_PTR_R12 CMT_ASM(".byte 0X49, 0X23, 0X34, 0X24 # andq (%r12), %rsi")
#define AND_RSI_FROM_PTR_R13 CMT_ASM(".byte 0X49, 0X23, 0X75, 0X00 # andq (%r13), %rsi")
#define AND_RSI_FROM_PTR_R14 CMT_ASM(".byte 0X49, 0X23, 0X36 # andq (%r14), %rsi")
#define AND_RSI_FROM_PTR_R15 CMT_ASM(".byte 0X49, 0X23, 0X37 # andq (%r15), %rsi")
#define AND_RSI_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X23, 0X30 # andq (%eax), %rsi")
#define AND_RSI_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X23, 0X33 # andq (%ebx), %rsi")
#define AND_RSI_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X23, 0X31 # andq (%ecx), %rsi")
#define AND_RSI_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X23, 0X32 # andq (%edx), %rsi")
#define AND_RSI_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X23, 0X37 # andq (%edi), %rsi")
#define AND_RSI_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X23, 0X36 # andq (%esi), %rsi")
#define AND_RSI_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X23, 0X75, 0X00 # andq (%ebp), %rsi")
#define AND_RSI_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X23, 0X34, 0X24 # andq (%esp), %rsi")

#define AND_RBP_FROM_PTR_RAX CMT_ASM(".byte 0X48, 0X23, 0X28 # andq (%rax), %rbp")
#define AND_RBP_FROM_PTR_RBX CMT_ASM(".byte 0X48, 0X23, 0X2B # andq (%rbx), %rbp")
#define AND_RBP_FROM_PTR_RCX CMT_ASM(".byte 0X48, 0X23, 0X29 # andq (%rcx), %rbp")
#define AND_RBP_FROM_PTR_RDX CMT_ASM(".byte 0X48, 0X23, 0X2A # andq (%rdx), %rbp")
#define AND_RBP_FROM_PTR_RDI CMT_ASM(".byte 0X48, 0X23, 0X2F # andq (%rdi), %rbp")
#define AND_RBP_FROM_PTR_RSI CMT_ASM(".byte 0X48, 0X23, 0X2E # andq (%rsi), %rbp")
#define AND_RBP_FROM_PTR_RBP CMT_ASM(".byte 0X48, 0X23, 0X6D, 0X00 # andq (%rbp), %rbp")
#define AND_RBP_FROM_PTR_RSP CMT_ASM(".byte 0X48, 0X23, 0X2C, 0X24 # andq (%rsp), %rbp")
#define AND_RBP_FROM_PTR_R8 CMT_ASM(".byte 0X49, 0X23, 0X28 # andq (%r8), %rbp")
#define AND_RBP_FROM_PTR_R9 CMT_ASM(".byte 0X49, 0X23, 0X29 # andq (%r9), %rbp")
#define AND_RBP_FROM_PTR_R10 CMT_ASM(".byte 0X49, 0X23, 0X2A # andq (%r10), %rbp")
#define AND_RBP_FROM_PTR_R11 CMT_ASM(".byte 0X49, 0X23, 0X2B # andq (%r11), %rbp")
#define AND_RBP_FROM_PTR_R12 CMT_ASM(".byte 0X49, 0X23, 0X2C, 0X24 # andq (%r12), %rbp")
#define AND_RBP_FROM_PTR_R13 CMT_ASM(".byte 0X49, 0X23, 0X6D, 0X00 # andq (%r13), %rbp")
#define AND_RBP_FROM_PTR_R14 CMT_ASM(".byte 0X49, 0X23, 0X2E # andq (%r14), %rbp")
#define AND_RBP_FROM_PTR_R15 CMT_ASM(".byte 0X49, 0X23, 0X2F # andq (%r15), %rbp")
#define AND_RBP_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X23, 0X28 # andq (%eax), %rbp")
#define AND_RBP_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X23, 0X2B # andq (%ebx), %rbp")
#define AND_RBP_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X23, 0X29 # andq (%ecx), %rbp")
#define AND_RBP_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X23, 0X2A # andq (%edx), %rbp")
#define AND_RBP_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X23, 0X2F # andq (%edi), %rbp")
#define AND_RBP_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X23, 0X2E # andq (%esi), %rbp")
#define AND_RBP_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X23, 0X6D, 0X00 # andq (%ebp), %rbp")
#define AND_RBP_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X23, 0X2C, 0X24 # andq (%esp), %rbp")

#define AND_RSP_FROM_PTR_RAX CMT_ASM(".byte 0X48, 0X23, 0X20 # andq (%rax), %rsp")
#define AND_RSP_FROM_PTR_RBX CMT_ASM(".byte 0X48, 0X23, 0X23 # andq (%rbx), %rsp")
#define AND_RSP_FROM_PTR_RCX CMT_ASM(".byte 0X48, 0X23, 0X21 # andq (%rcx), %rsp")
#define AND_RSP_FROM_PTR_RDX CMT_ASM(".byte 0X48, 0X23, 0X22 # andq (%rdx), %rsp")
#define AND_RSP_FROM_PTR_RDI CMT_ASM(".byte 0X48, 0X23, 0X27 # andq (%rdi), %rsp")
#define AND_RSP_FROM_PTR_RSI CMT_ASM(".byte 0X48, 0X23, 0X26 # andq (%rsi), %rsp")
#define AND_RSP_FROM_PTR_RBP CMT_ASM(".byte 0X48, 0X23, 0X65, 0X00 # andq (%rbp), %rsp")
#define AND_RSP_FROM_PTR_RSP CMT_ASM(".byte 0X48, 0X23, 0X24, 0X24 # andq (%rsp), %rsp")
#define AND_RSP_FROM_PTR_R8 CMT_ASM(".byte 0X49, 0X23, 0X20 # andq (%r8), %rsp")
#define AND_RSP_FROM_PTR_R9 CMT_ASM(".byte 0X49, 0X23, 0X21 # andq (%r9), %rsp")
#define AND_RSP_FROM_PTR_R10 CMT_ASM(".byte 0X49, 0X23, 0X22 # andq (%r10), %rsp")
#define AND_RSP_FROM_PTR_R11 CMT_ASM(".byte 0X49, 0X23, 0X23 # andq (%r11), %rsp")
#define AND_RSP_FROM_PTR_R12 CMT_ASM(".byte 0X49, 0X23, 0X24, 0X24 # andq (%r12), %rsp")
#define AND_RSP_FROM_PTR_R13 CMT_ASM(".byte 0X49, 0X23, 0X65, 0X00 # andq (%r13), %rsp")
#define AND_RSP_FROM_PTR_R14 CMT_ASM(".byte 0X49, 0X23, 0X26 # andq (%r14), %rsp")
#define AND_RSP_FROM_PTR_R15 CMT_ASM(".byte 0X49, 0X23, 0X27 # andq (%r15), %rsp")
#define AND_RSP_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X23, 0X20 # andq (%eax), %rsp")
#define AND_RSP_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X23, 0X23 # andq (%ebx), %rsp")
#define AND_RSP_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X23, 0X21 # andq (%ecx), %rsp")
#define AND_RSP_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X23, 0X22 # andq (%edx), %rsp")
#define AND_RSP_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X23, 0X27 # andq (%edi), %rsp")
#define AND_RSP_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X23, 0X26 # andq (%esi), %rsp")
#define AND_RSP_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X23, 0X65, 0X00 # andq (%ebp), %rsp")
#define AND_RSP_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X23, 0X24, 0X24 # andq (%esp), %rsp")

#define AND_R8_FROM_PTR_RAX CMT_ASM(".byte 0X4C, 0X23, 0X00 # andq (%rax), %r8")
#define AND_R8_FROM_PTR_RBX CMT_ASM(".byte 0X4C, 0X23, 0X03 # andq (%rbx), %r8")
#define AND_R8_FROM_PTR_RCX CMT_ASM(".byte 0X4C, 0X23, 0X01 # andq (%rcx), %r8")
#define AND_R8_FROM_PTR_RDX CMT_ASM(".byte 0X4C, 0X23, 0X02 # andq (%rdx), %r8")
#define AND_R8_FROM_PTR_RDI CMT_ASM(".byte 0X4C, 0X23, 0X07 # andq (%rdi), %r8")
#define AND_R8_FROM_PTR_RSI CMT_ASM(".byte 0X4C, 0X23, 0X06 # andq (%rsi), %r8")
#define AND_R8_FROM_PTR_RBP CMT_ASM(".byte 0X4C, 0X23, 0X45, 0X00 # andq (%rbp), %r8")
#define AND_R8_FROM_PTR_RSP CMT_ASM(".byte 0X4C, 0X23, 0X04, 0X24 # andq (%rsp), %r8")
#define AND_R8_FROM_PTR_R8 CMT_ASM(".byte 0X4D, 0X23, 0X00 # andq (%r8), %r8")
#define AND_R8_FROM_PTR_R9 CMT_ASM(".byte 0X4D, 0X23, 0X01 # andq (%r9), %r8")
#define AND_R8_FROM_PTR_R10 CMT_ASM(".byte 0X4D, 0X23, 0X02 # andq (%r10), %r8")
#define AND_R8_FROM_PTR_R11 CMT_ASM(".byte 0X4D, 0X23, 0X03 # andq (%r11), %r8")
#define AND_R8_FROM_PTR_R12 CMT_ASM(".byte 0X4D, 0X23, 0X04, 0X24 # andq (%r12), %r8")
#define AND_R8_FROM_PTR_R13 CMT_ASM(".byte 0X4D, 0X23, 0X45, 0X00 # andq (%r13), %r8")
#define AND_R8_FROM_PTR_R14 CMT_ASM(".byte 0X4D, 0X23, 0X06 # andq (%r14), %r8")
#define AND_R8_FROM_PTR_R15 CMT_ASM(".byte 0X4D, 0X23, 0X07 # andq (%r15), %r8")
#define AND_R8_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X23, 0X00 # andq (%eax), %r8")
#define AND_R8_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X23, 0X03 # andq (%ebx), %r8")
#define AND_R8_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X23, 0X01 # andq (%ecx), %r8")
#define AND_R8_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X23, 0X02 # andq (%edx), %r8")
#define AND_R8_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X23, 0X07 # andq (%edi), %r8")
#define AND_R8_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X23, 0X06 # andq (%esi), %r8")
#define AND_R8_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X23, 0X45, 0X00 # andq (%ebp), %r8")
#define AND_R8_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X23, 0X04, 0X24 # andq (%esp), %r8")

#define AND_R9_FROM_PTR_RAX CMT_ASM(".byte 0X4C, 0X23, 0X08 # andq (%rax), %r9")
#define AND_R9_FROM_PTR_RBX CMT_ASM(".byte 0X4C, 0X23, 0X0B # andq (%rbx), %r9")
#define AND_R9_FROM_PTR_RCX CMT_ASM(".byte 0X4C, 0X23, 0X09 # andq (%rcx), %r9")
#define AND_R9_FROM_PTR_RDX CMT_ASM(".byte 0X4C, 0X23, 0X0A # andq (%rdx), %r9")
#define AND_R9_FROM_PTR_RDI CMT_ASM(".byte 0X4C, 0X23, 0X0F # andq (%rdi), %r9")
#define AND_R9_FROM_PTR_RSI CMT_ASM(".byte 0X4C, 0X23, 0X0E # andq (%rsi), %r9")
#define AND_R9_FROM_PTR_RBP CMT_ASM(".byte 0X4C, 0X23, 0X4D, 0X00 # andq (%rbp), %r9")
#define AND_R9_FROM_PTR_RSP CMT_ASM(".byte 0X4C, 0X23, 0X0C, 0X24 # andq (%rsp), %r9")
#define AND_R9_FROM_PTR_R8 CMT_ASM(".byte 0X4D, 0X23, 0X08 # andq (%r8), %r9")
#define AND_R9_FROM_PTR_R9 CMT_ASM(".byte 0X4D, 0X23, 0X09 # andq (%r9), %r9")
#define AND_R9_FROM_PTR_R10 CMT_ASM(".byte 0X4D, 0X23, 0X0A # andq (%r10), %r9")
#define AND_R9_FROM_PTR_R11 CMT_ASM(".byte 0X4D, 0X23, 0X0B # andq (%r11), %r9")
#define AND_R9_FROM_PTR_R12 CMT_ASM(".byte 0X4D, 0X23, 0X0C, 0X24 # andq (%r12), %r9")
#define AND_R9_FROM_PTR_R13 CMT_ASM(".byte 0X4D, 0X23, 0X4D, 0X00 # andq (%r13), %r9")
#define AND_R9_FROM_PTR_R14 CMT_ASM(".byte 0X4D, 0X23, 0X0E # andq (%r14), %r9")
#define AND_R9_FROM_PTR_R15 CMT_ASM(".byte 0X4D, 0X23, 0X0F # andq (%r15), %r9")
#define AND_R9_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X23, 0X08 # andq (%eax), %r9")
#define AND_R9_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X23, 0X0B # andq (%ebx), %r9")
#define AND_R9_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X23, 0X09 # andq (%ecx), %r9")
#define AND_R9_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X23, 0X0A # andq (%edx), %r9")
#define AND_R9_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X23, 0X0F # andq (%edi), %r9")
#define AND_R9_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X23, 0X0E # andq (%esi), %r9")
#define AND_R9_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X23, 0X4D, 0X00 # andq (%ebp), %r9")
#define AND_R9_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X23, 0X0C, 0X24 # andq (%esp), %r9")

#define AND_R10_FROM_PTR_RAX CMT_ASM(".byte 0X4C, 0X23, 0X10 # andq (%rax), %r10")
#define AND_R10_FROM_PTR_RBX CMT_ASM(".byte 0X4C, 0X23, 0X13 # andq (%rbx), %r10")
#define AND_R10_FROM_PTR_RCX CMT_ASM(".byte 0X4C, 0X23, 0X11 # andq (%rcx), %r10")
#define AND_R10_FROM_PTR_RDX CMT_ASM(".byte 0X4C, 0X23, 0X12 # andq (%rdx), %r10")
#define AND_R10_FROM_PTR_RDI CMT_ASM(".byte 0X4C, 0X23, 0X17 # andq (%rdi), %r10")
#define AND_R10_FROM_PTR_RSI CMT_ASM(".byte 0X4C, 0X23, 0X16 # andq (%rsi), %r10")
#define AND_R10_FROM_PTR_RBP CMT_ASM(".byte 0X4C, 0X23, 0X55, 0X00 # andq (%rbp), %r10")
#define AND_R10_FROM_PTR_RSP CMT_ASM(".byte 0X4C, 0X23, 0X14, 0X24 # andq (%rsp), %r10")
#define AND_R10_FROM_PTR_R8 CMT_ASM(".byte 0X4D, 0X23, 0X10 # andq (%r8), %r10")
#define AND_R10_FROM_PTR_R9 CMT_ASM(".byte 0X4D, 0X23, 0X11 # andq (%r9), %r10")
#define AND_R10_FROM_PTR_R10 CMT_ASM(".byte 0X4D, 0X23, 0X12 # andq (%r10), %r10")
#define AND_R10_FROM_PTR_R11 CMT_ASM(".byte 0X4D, 0X23, 0X13 # andq (%r11), %r10")
#define AND_R10_FROM_PTR_R12 CMT_ASM(".byte 0X4D, 0X23, 0X14, 0X24 # andq (%r12), %r10")
#define AND_R10_FROM_PTR_R13 CMT_ASM(".byte 0X4D, 0X23, 0X55, 0X00 # andq (%r13), %r10")
#define AND_R10_FROM_PTR_R14 CMT_ASM(".byte 0X4D, 0X23, 0X16 # andq (%r14), %r10")
#define AND_R10_FROM_PTR_R15 CMT_ASM(".byte 0X4D, 0X23, 0X17 # andq (%r15), %r10")
#define AND_R10_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X23, 0X10 # andq (%eax), %r10")
#define AND_R10_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X23, 0X13 # andq (%ebx), %r10")
#define AND_R10_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X23, 0X11 # andq (%ecx), %r10")
#define AND_R10_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X23, 0X12 # andq (%edx), %r10")
#define AND_R10_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X23, 0X17 # andq (%edi), %r10")
#define AND_R10_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X23, 0X16 # andq (%esi), %r10")
#define AND_R10_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X23, 0X55, 0X00 # andq (%ebp), %r10")
#define AND_R10_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X23, 0X14, 0X24 # andq (%esp), %r10")

#define AND_R11_FROM_PTR_RAX CMT_ASM(".byte 0X4C, 0X23, 0X18 # andq (%rax), %r11")
#define AND_R11_FROM_PTR_RBX CMT_ASM(".byte 0X4C, 0X23, 0X1B # andq (%rbx), %r11")
#define AND_R11_FROM_PTR_RCX CMT_ASM(".byte 0X4C, 0X23, 0X19 # andq (%rcx), %r11")
#define AND_R11_FROM_PTR_RDX CMT_ASM(".byte 0X4C, 0X23, 0X1A # andq (%rdx), %r11")
#define AND_R11_FROM_PTR_RDI CMT_ASM(".byte 0X4C, 0X23, 0X1F # andq (%rdi), %r11")
#define AND_R11_FROM_PTR_RSI CMT_ASM(".byte 0X4C, 0X23, 0X1E # andq (%rsi), %r11")
#define AND_R11_FROM_PTR_RBP CMT_ASM(".byte 0X4C, 0X23, 0X5D, 0X00 # andq (%rbp), %r11")
#define AND_R11_FROM_PTR_RSP CMT_ASM(".byte 0X4C, 0X23, 0X1C, 0X24 # andq (%rsp), %r11")
#define AND_R11_FROM_PTR_R8 CMT_ASM(".byte 0X4D, 0X23, 0X18 # andq (%r8), %r11")
#define AND_R11_FROM_PTR_R9 CMT_ASM(".byte 0X4D, 0X23, 0X19 # andq (%r9), %r11")
#define AND_R11_FROM_PTR_R10 CMT_ASM(".byte 0X4D, 0X23, 0X1A # andq (%r10), %r11")
#define AND_R11_FROM_PTR_R11 CMT_ASM(".byte 0X4D, 0X23, 0X1B # andq (%r11), %r11")
#define AND_R11_FROM_PTR_R12 CMT_ASM(".byte 0X4D, 0X23, 0X1C, 0X24 # andq (%r12), %r11")
#define AND_R11_FROM_PTR_R13 CMT_ASM(".byte 0X4D, 0X23, 0X5D, 0X00 # andq (%r13), %r11")
#define AND_R11_FROM_PTR_R14 CMT_ASM(".byte 0X4D, 0X23, 0X1E # andq (%r14), %r11")
#define AND_R11_FROM_PTR_R15 CMT_ASM(".byte 0X4D, 0X23, 0X1F # andq (%r15), %r11")
#define AND_R11_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X23, 0X18 # andq (%eax), %r11")
#define AND_R11_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X23, 0X1B # andq (%ebx), %r11")
#define AND_R11_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X23, 0X19 # andq (%ecx), %r11")
#define AND_R11_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X23, 0X1A # andq (%edx), %r11")
#define AND_R11_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X23, 0X1F # andq (%edi), %r11")
#define AND_R11_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X23, 0X1E # andq (%esi), %r11")
#define AND_R11_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X23, 0X5D, 0X00 # andq (%ebp), %r11")
#define AND_R11_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X23, 0X1C, 0X24 # andq (%esp), %r11")

#define AND_R12_FROM_PTR_RAX CMT_ASM(".byte 0X4C, 0X23, 0X20 # andq (%rax), %r12")
#define AND_R12_FROM_PTR_RBX CMT_ASM(".byte 0X4C, 0X23, 0X23 # andq (%rbx), %r12")
#define AND_R12_FROM_PTR_RCX CMT_ASM(".byte 0X4C, 0X23, 0X21 # andq (%rcx), %r12")
#define AND_R12_FROM_PTR_RDX CMT_ASM(".byte 0X4C, 0X23, 0X22 # andq (%rdx), %r12")
#define AND_R12_FROM_PTR_RDI CMT_ASM(".byte 0X4C, 0X23, 0X27 # andq (%rdi), %r12")
#define AND_R12_FROM_PTR_RSI CMT_ASM(".byte 0X4C, 0X23, 0X26 # andq (%rsi), %r12")
#define AND_R12_FROM_PTR_RBP CMT_ASM(".byte 0X4C, 0X23, 0X65, 0X00 # andq (%rbp), %r12")
#define AND_R12_FROM_PTR_RSP CMT_ASM(".byte 0X4C, 0X23, 0X24, 0X24 # andq (%rsp), %r12")
#define AND_R12_FROM_PTR_R8 CMT_ASM(".byte 0X4D, 0X23, 0X20 # andq (%r8), %r12")
#define AND_R12_FROM_PTR_R9 CMT_ASM(".byte 0X4D, 0X23, 0X21 # andq (%r9), %r12")
#define AND_R12_FROM_PTR_R10 CMT_ASM(".byte 0X4D, 0X23, 0X22 # andq (%r10), %r12")
#define AND_R12_FROM_PTR_R11 CMT_ASM(".byte 0X4D, 0X23, 0X23 # andq (%r11), %r12")
#define AND_R12_FROM_PTR_R12 CMT_ASM(".byte 0X4D, 0X23, 0X24, 0X24 # andq (%r12), %r12")
#define AND_R12_FROM_PTR_R13 CMT_ASM(".byte 0X4D, 0X23, 0X65, 0X00 # andq (%r13), %r12")
#define AND_R12_FROM_PTR_R14 CMT_ASM(".byte 0X4D, 0X23, 0X26 # andq (%r14), %r12")
#define AND_R12_FROM_PTR_R15 CMT_ASM(".byte 0X4D, 0X23, 0X27 # andq (%r15), %r12")
#define AND_R12_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X23, 0X20 # andq (%eax), %r12")
#define AND_R12_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X23, 0X23 # andq (%ebx), %r12")
#define AND_R12_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X23, 0X21 # andq (%ecx), %r12")
#define AND_R12_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X23, 0X22 # andq (%edx), %r12")
#define AND_R12_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X23, 0X27 # andq (%edi), %r12")
#define AND_R12_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X23, 0X26 # andq (%esi), %r12")
#define AND_R12_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X23, 0X65, 0X00 # andq (%ebp), %r12")
#define AND_R12_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X23, 0X24, 0X24 # andq (%esp), %r12")

#define AND_R13_FROM_PTR_RAX CMT_ASM(".byte 0X4C, 0X23, 0X28 # andq (%rax), %r13")
#define AND_R13_FROM_PTR_RBX CMT_ASM(".byte 0X4C, 0X23, 0X2B # andq (%rbx), %r13")
#define AND_R13_FROM_PTR_RCX CMT_ASM(".byte 0X4C, 0X23, 0X29 # andq (%rcx), %r13")
#define AND_R13_FROM_PTR_RDX CMT_ASM(".byte 0X4C, 0X23, 0X2A # andq (%rdx), %r13")
#define AND_R13_FROM_PTR_RDI CMT_ASM(".byte 0X4C, 0X23, 0X2F # andq (%rdi), %r13")
#define AND_R13_FROM_PTR_RSI CMT_ASM(".byte 0X4C, 0X23, 0X2E # andq (%rsi), %r13")
#define AND_R13_FROM_PTR_RBP CMT_ASM(".byte 0X4C, 0X23, 0X6D, 0X00 # andq (%rbp), %r13")
#define AND_R13_FROM_PTR_RSP CMT_ASM(".byte 0X4C, 0X23, 0X2C, 0X24 # andq (%rsp), %r13")
#define AND_R13_FROM_PTR_R8 CMT_ASM(".byte 0X4D, 0X23, 0X28 # andq (%r8), %r13")
#define AND_R13_FROM_PTR_R9 CMT_ASM(".byte 0X4D, 0X23, 0X29 # andq (%r9), %r13")
#define AND_R13_FROM_PTR_R10 CMT_ASM(".byte 0X4D, 0X23, 0X2A # andq (%r10), %r13")
#define AND_R13_FROM_PTR_R11 CMT_ASM(".byte 0X4D, 0X23, 0X2B # andq (%r11), %r13")
#define AND_R13_FROM_PTR_R12 CMT_ASM(".byte 0X4D, 0X23, 0X2C, 0X24 # andq (%r12), %r13")
#define AND_R13_FROM_PTR_R13 CMT_ASM(".byte 0X4D, 0X23, 0X6D, 0X00 # andq (%r13), %r13")
#define AND_R13_FROM_PTR_R14 CMT_ASM(".byte 0X4D, 0X23, 0X2E # andq (%r14), %r13")
#define AND_R13_FROM_PTR_R15 CMT_ASM(".byte 0X4D, 0X23, 0X2F # andq (%r15), %r13")
#define AND_R13_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X23, 0X28 # andq (%eax), %r13")
#define AND_R13_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X23, 0X2B # andq (%ebx), %r13")
#define AND_R13_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X23, 0X29 # andq (%ecx), %r13")
#define AND_R13_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X23, 0X2A # andq (%edx), %r13")
#define AND_R13_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X23, 0X2F # andq (%edi), %r13")
#define AND_R13_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X23, 0X2E # andq (%esi), %r13")
#define AND_R13_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X23, 0X6D, 0X00 # andq (%ebp), %r13")
#define AND_R13_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X23, 0X2C, 0X24 # andq (%esp), %r13")

#define AND_R14_FROM_PTR_RAX CMT_ASM(".byte 0X4C, 0X23, 0X30 # andq (%rax), %r14")
#define AND_R14_FROM_PTR_RBX CMT_ASM(".byte 0X4C, 0X23, 0X33 # andq (%rbx), %r14")
#define AND_R14_FROM_PTR_RCX CMT_ASM(".byte 0X4C, 0X23, 0X31 # andq (%rcx), %r14")
#define AND_R14_FROM_PTR_RDX CMT_ASM(".byte 0X4C, 0X23, 0X32 # andq (%rdx), %r14")
#define AND_R14_FROM_PTR_RDI CMT_ASM(".byte 0X4C, 0X23, 0X37 # andq (%rdi), %r14")
#define AND_R14_FROM_PTR_RSI CMT_ASM(".byte 0X4C, 0X23, 0X36 # andq (%rsi), %r14")
#define AND_R14_FROM_PTR_RBP CMT_ASM(".byte 0X4C, 0X23, 0X75, 0X00 # andq (%rbp), %r14")
#define AND_R14_FROM_PTR_RSP CMT_ASM(".byte 0X4C, 0X23, 0X34, 0X24 # andq (%rsp), %r14")
#define AND_R14_FROM_PTR_R8 CMT_ASM(".byte 0X4D, 0X23, 0X30 # andq (%r8), %r14")
#define AND_R14_FROM_PTR_R9 CMT_ASM(".byte 0X4D, 0X23, 0X31 # andq (%r9), %r14")
#define AND_R14_FROM_PTR_R10 CMT_ASM(".byte 0X4D, 0X23, 0X32 # andq (%r10), %r14")
#define AND_R14_FROM_PTR_R11 CMT_ASM(".byte 0X4D, 0X23, 0X33 # andq (%r11), %r14")
#define AND_R14_FROM_PTR_R12 CMT_ASM(".byte 0X4D, 0X23, 0X34, 0X24 # andq (%r12), %r14")
#define AND_R14_FROM_PTR_R13 CMT_ASM(".byte 0X4D, 0X23, 0X75, 0X00 # andq (%r13), %r14")
#define AND_R14_FROM_PTR_R14 CMT_ASM(".byte 0X4D, 0X23, 0X36 # andq (%r14), %r14")
#define AND_R14_FROM_PTR_R15 CMT_ASM(".byte 0X4D, 0X23, 0X37 # andq (%r15), %r14")
#define AND_R14_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X23, 0X30 # andq (%eax), %r14")
#define AND_R14_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X23, 0X33 # andq (%ebx), %r14")
#define AND_R14_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X23, 0X31 # andq (%ecx), %r14")
#define AND_R14_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X23, 0X32 # andq (%edx), %r14")
#define AND_R14_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X23, 0X37 # andq (%edi), %r14")
#define AND_R14_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X23, 0X36 # andq (%esi), %r14")
#define AND_R14_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X23, 0X75, 0X00 # andq (%ebp), %r14")
#define AND_R14_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X23, 0X34, 0X24 # andq (%esp), %r14")

#define AND_R15_FROM_PTR_RAX CMT_ASM(".byte 0X4C, 0X23, 0X38 # andq (%rax), %r15")
#define AND_R15_FROM_PTR_RBX CMT_ASM(".byte 0X4C, 0X23, 0X3B # andq (%rbx), %r15")
#define AND_R15_FROM_PTR_RCX CMT_ASM(".byte 0X4C, 0X23, 0X39 # andq (%rcx), %r15")
#define AND_R15_FROM_PTR_RDX CMT_ASM(".byte 0X4C, 0X23, 0X3A # andq (%rdx), %r15")
#define AND_R15_FROM_PTR_RDI CMT_ASM(".byte 0X4C, 0X23, 0X3F # andq (%rdi), %r15")
#define AND_R15_FROM_PTR_RSI CMT_ASM(".byte 0X4C, 0X23, 0X3E # andq (%rsi), %r15")
#define AND_R15_FROM_PTR_RBP CMT_ASM(".byte 0X4C, 0X23, 0X7D, 0X00 # andq (%rbp), %r15")
#define AND_R15_FROM_PTR_RSP CMT_ASM(".byte 0X4C, 0X23, 0X3C, 0X24 # andq (%rsp), %r15")
#define AND_R15_FROM_PTR_R8 CMT_ASM(".byte 0X4D, 0X23, 0X38 # andq (%r8), %r15")
#define AND_R15_FROM_PTR_R9 CMT_ASM(".byte 0X4D, 0X23, 0X39 # andq (%r9), %r15")
#define AND_R15_FROM_PTR_R10 CMT_ASM(".byte 0X4D, 0X23, 0X3A # andq (%r10), %r15")
#define AND_R15_FROM_PTR_R11 CMT_ASM(".byte 0X4D, 0X23, 0X3B # andq (%r11), %r15")
#define AND_R15_FROM_PTR_R12 CMT_ASM(".byte 0X4D, 0X23, 0X3C, 0X24 # andq (%r12), %r15")
#define AND_R15_FROM_PTR_R13 CMT_ASM(".byte 0X4D, 0X23, 0X7D, 0X00 # andq (%r13), %r15")
#define AND_R15_FROM_PTR_R14 CMT_ASM(".byte 0X4D, 0X23, 0X3E # andq (%r14), %r15")
#define AND_R15_FROM_PTR_R15 CMT_ASM(".byte 0X4D, 0X23, 0X3F # andq (%r15), %r15")
#define AND_R15_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X23, 0X38 # andq (%eax), %r15")
#define AND_R15_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X23, 0X3B # andq (%ebx), %r15")
#define AND_R15_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X23, 0X39 # andq (%ecx), %r15")
#define AND_R15_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X23, 0X3A # andq (%edx), %r15")
#define AND_R15_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X23, 0X3F # andq (%edi), %r15")
#define AND_R15_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X23, 0X3E # andq (%esi), %r15")
#define AND_R15_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X23, 0X7D, 0X00 # andq (%ebp), %r15")
#define AND_R15_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X23, 0X3C, 0X24 # andq (%esp), %r15")

#define AND_RAX_TO_PTR_RAX CMT_ASM(".byte 0X48, 0X21, 0X00 # andq %rax, (%rax)")
#define AND_RAX_TO_PTR_RBX CMT_ASM(".byte 0X48, 0X21, 0X03 # andq %rax, (%rbx)")
#define AND_RAX_TO_PTR_RCX CMT_ASM(".byte 0X48, 0X21, 0X01 # andq %rax, (%rcx)")
#define AND_RAX_TO_PTR_RDX CMT_ASM(".byte 0X48, 0X21, 0X02 # andq %rax, (%rdx)")
#define AND_RAX_TO_PTR_RDI CMT_ASM(".byte 0X48, 0X21, 0X07 # andq %rax, (%rdi)")
#define AND_RAX_TO_PTR_RSI CMT_ASM(".byte 0X48, 0X21, 0X06 # andq %rax, (%rsi)")
#define AND_RAX_TO_PTR_RBP CMT_ASM(".byte 0X48, 0X21, 0X45, 0X00 # andq %rax, (%rbp)")
#define AND_RAX_TO_PTR_RSP CMT_ASM(".byte 0X48, 0X21, 0X04, 0X24 # andq %rax, (%rsp)")
#define AND_RAX_TO_PTR_R8 CMT_ASM(".byte 0X49, 0X21, 0X00 # andq %rax, (%r8)")
#define AND_RAX_TO_PTR_R9 CMT_ASM(".byte 0X49, 0X21, 0X01 # andq %rax, (%r9)")
#define AND_RAX_TO_PTR_R10 CMT_ASM(".byte 0X49, 0X21, 0X02 # andq %rax, (%r10)")
#define AND_RAX_TO_PTR_R11 CMT_ASM(".byte 0X49, 0X21, 0X03 # andq %rax, (%r11)")
#define AND_RAX_TO_PTR_R12 CMT_ASM(".byte 0X49, 0X21, 0X04, 0X24 # andq %rax, (%r12)")
#define AND_RAX_TO_PTR_R13 CMT_ASM(".byte 0X49, 0X21, 0X45, 0X00 # andq %rax, (%r13)")
#define AND_RAX_TO_PTR_R14 CMT_ASM(".byte 0X49, 0X21, 0X06 # andq %rax, (%r14)")
#define AND_RAX_TO_PTR_R15 CMT_ASM(".byte 0X49, 0X21, 0X07 # andq %rax, (%r15)")
#define AND_RAX_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X21, 0X00 # andq %rax, (%eax)")
#define AND_RAX_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X21, 0X03 # andq %rax, (%ebx)")
#define AND_RAX_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X21, 0X01 # andq %rax, (%ecx)")
#define AND_RAX_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X21, 0X02 # andq %rax, (%edx)")
#define AND_RAX_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X21, 0X07 # andq %rax, (%edi)")
#define AND_RAX_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X21, 0X06 # andq %rax, (%esi)")
#define AND_RAX_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X21, 0X45, 0X00 # andq %rax, (%ebp)")
#define AND_RAX_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X21, 0X04, 0X24 # andq %rax, (%esp)")

#define AND_RBX_TO_PTR_RAX CMT_ASM(".byte 0X48, 0X21, 0X18 # andq %rbx, (%rax)")
#define AND_RBX_TO_PTR_RBX CMT_ASM(".byte 0X48, 0X21, 0X1B # andq %rbx, (%rbx)")
#define AND_RBX_TO_PTR_RCX CMT_ASM(".byte 0X48, 0X21, 0X19 # andq %rbx, (%rcx)")
#define AND_RBX_TO_PTR_RDX CMT_ASM(".byte 0X48, 0X21, 0X1A # andq %rbx, (%rdx)")
#define AND_RBX_TO_PTR_RDI CMT_ASM(".byte 0X48, 0X21, 0X1F # andq %rbx, (%rdi)")
#define AND_RBX_TO_PTR_RSI CMT_ASM(".byte 0X48, 0X21, 0X1E # andq %rbx, (%rsi)")
#define AND_RBX_TO_PTR_RBP CMT_ASM(".byte 0X48, 0X21, 0X5D, 0X00 # andq %rbx, (%rbp)")
#define AND_RBX_TO_PTR_RSP CMT_ASM(".byte 0X48, 0X21, 0X1C, 0X24 # andq %rbx, (%rsp)")
#define AND_RBX_TO_PTR_R8 CMT_ASM(".byte 0X49, 0X21, 0X18 # andq %rbx, (%r8)")
#define AND_RBX_TO_PTR_R9 CMT_ASM(".byte 0X49, 0X21, 0X19 # andq %rbx, (%r9)")
#define AND_RBX_TO_PTR_R10 CMT_ASM(".byte 0X49, 0X21, 0X1A # andq %rbx, (%r10)")
#define AND_RBX_TO_PTR_R11 CMT_ASM(".byte 0X49, 0X21, 0X1B # andq %rbx, (%r11)")
#define AND_RBX_TO_PTR_R12 CMT_ASM(".byte 0X49, 0X21, 0X1C, 0X24 # andq %rbx, (%r12)")
#define AND_RBX_TO_PTR_R13 CMT_ASM(".byte 0X49, 0X21, 0X5D, 0X00 # andq %rbx, (%r13)")
#define AND_RBX_TO_PTR_R14 CMT_ASM(".byte 0X49, 0X21, 0X1E # andq %rbx, (%r14)")
#define AND_RBX_TO_PTR_R15 CMT_ASM(".byte 0X49, 0X21, 0X1F # andq %rbx, (%r15)")
#define AND_RBX_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X21, 0X18 # andq %rbx, (%eax)")
#define AND_RBX_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X21, 0X1B # andq %rbx, (%ebx)")
#define AND_RBX_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X21, 0X19 # andq %rbx, (%ecx)")
#define AND_RBX_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X21, 0X1A # andq %rbx, (%edx)")
#define AND_RBX_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X21, 0X1F # andq %rbx, (%edi)")
#define AND_RBX_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X21, 0X1E # andq %rbx, (%esi)")
#define AND_RBX_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X21, 0X5D, 0X00 # andq %rbx, (%ebp)")
#define AND_RBX_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X21, 0X1C, 0X24 # andq %rbx, (%esp)")

#define AND_RCX_TO_PTR_RAX CMT_ASM(".byte 0X48, 0X21, 0X08 # andq %rcx, (%rax)")
#define AND_RCX_TO_PTR_RBX CMT_ASM(".byte 0X48, 0X21, 0X0B # andq %rcx, (%rbx)")
#define AND_RCX_TO_PTR_RCX CMT_ASM(".byte 0X48, 0X21, 0X09 # andq %rcx, (%rcx)")
#define AND_RCX_TO_PTR_RDX CMT_ASM(".byte 0X48, 0X21, 0X0A # andq %rcx, (%rdx)")
#define AND_RCX_TO_PTR_RDI CMT_ASM(".byte 0X48, 0X21, 0X0F # andq %rcx, (%rdi)")
#define AND_RCX_TO_PTR_RSI CMT_ASM(".byte 0X48, 0X21, 0X0E # andq %rcx, (%rsi)")
#define AND_RCX_TO_PTR_RBP CMT_ASM(".byte 0X48, 0X21, 0X4D, 0X00 # andq %rcx, (%rbp)")
#define AND_RCX_TO_PTR_RSP CMT_ASM(".byte 0X48, 0X21, 0X0C, 0X24 # andq %rcx, (%rsp)")
#define AND_RCX_TO_PTR_R8 CMT_ASM(".byte 0X49, 0X21, 0X08 # andq %rcx, (%r8)")
#define AND_RCX_TO_PTR_R9 CMT_ASM(".byte 0X49, 0X21, 0X09 # andq %rcx, (%r9)")
#define AND_RCX_TO_PTR_R10 CMT_ASM(".byte 0X49, 0X21, 0X0A # andq %rcx, (%r10)")
#define AND_RCX_TO_PTR_R11 CMT_ASM(".byte 0X49, 0X21, 0X0B # andq %rcx, (%r11)")
#define AND_RCX_TO_PTR_R12 CMT_ASM(".byte 0X49, 0X21, 0X0C, 0X24 # andq %rcx, (%r12)")
#define AND_RCX_TO_PTR_R13 CMT_ASM(".byte 0X49, 0X21, 0X4D, 0X00 # andq %rcx, (%r13)")
#define AND_RCX_TO_PTR_R14 CMT_ASM(".byte 0X49, 0X21, 0X0E # andq %rcx, (%r14)")
#define AND_RCX_TO_PTR_R15 CMT_ASM(".byte 0X49, 0X21, 0X0F # andq %rcx, (%r15)")
#define AND_RCX_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X21, 0X08 # andq %rcx, (%eax)")
#define AND_RCX_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X21, 0X0B # andq %rcx, (%ebx)")
#define AND_RCX_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X21, 0X09 # andq %rcx, (%ecx)")
#define AND_RCX_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X21, 0X0A # andq %rcx, (%edx)")
#define AND_RCX_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X21, 0X0F # andq %rcx, (%edi)")
#define AND_RCX_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X21, 0X0E # andq %rcx, (%esi)")
#define AND_RCX_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X21, 0X4D, 0X00 # andq %rcx, (%ebp)")
#define AND_RCX_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X21, 0X0C, 0X24 # andq %rcx, (%esp)")

#define AND_RDX_TO_PTR_RAX CMT_ASM(".byte 0X48, 0X21, 0X10 # andq %rdx, (%rax)")
#define AND_RDX_TO_PTR_RBX CMT_ASM(".byte 0X48, 0X21, 0X13 # andq %rdx, (%rbx)")
#define AND_RDX_TO_PTR_RCX CMT_ASM(".byte 0X48, 0X21, 0X11 # andq %rdx, (%rcx)")
#define AND_RDX_TO_PTR_RDX CMT_ASM(".byte 0X48, 0X21, 0X12 # andq %rdx, (%rdx)")
#define AND_RDX_TO_PTR_RDI CMT_ASM(".byte 0X48, 0X21, 0X17 # andq %rdx, (%rdi)")
#define AND_RDX_TO_PTR_RSI CMT_ASM(".byte 0X48, 0X21, 0X16 # andq %rdx, (%rsi)")
#define AND_RDX_TO_PTR_RBP CMT_ASM(".byte 0X48, 0X21, 0X55, 0X00 # andq %rdx, (%rbp)")
#define AND_RDX_TO_PTR_RSP CMT_ASM(".byte 0X48, 0X21, 0X14, 0X24 # andq %rdx, (%rsp)")
#define AND_RDX_TO_PTR_R8 CMT_ASM(".byte 0X49, 0X21, 0X10 # andq %rdx, (%r8)")
#define AND_RDX_TO_PTR_R9 CMT_ASM(".byte 0X49, 0X21, 0X11 # andq %rdx, (%r9)")
#define AND_RDX_TO_PTR_R10 CMT_ASM(".byte 0X49, 0X21, 0X12 # andq %rdx, (%r10)")
#define AND_RDX_TO_PTR_R11 CMT_ASM(".byte 0X49, 0X21, 0X13 # andq %rdx, (%r11)")
#define AND_RDX_TO_PTR_R12 CMT_ASM(".byte 0X49, 0X21, 0X14, 0X24 # andq %rdx, (%r12)")
#define AND_RDX_TO_PTR_R13 CMT_ASM(".byte 0X49, 0X21, 0X55, 0X00 # andq %rdx, (%r13)")
#define AND_RDX_TO_PTR_R14 CMT_ASM(".byte 0X49, 0X21, 0X16 # andq %rdx, (%r14)")
#define AND_RDX_TO_PTR_R15 CMT_ASM(".byte 0X49, 0X21, 0X17 # andq %rdx, (%r15)")
#define AND_RDX_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X21, 0X10 # andq %rdx, (%eax)")
#define AND_RDX_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X21, 0X13 # andq %rdx, (%ebx)")
#define AND_RDX_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X21, 0X11 # andq %rdx, (%ecx)")
#define AND_RDX_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X21, 0X12 # andq %rdx, (%edx)")
#define AND_RDX_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X21, 0X17 # andq %rdx, (%edi)")
#define AND_RDX_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X21, 0X16 # andq %rdx, (%esi)")
#define AND_RDX_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X21, 0X55, 0X00 # andq %rdx, (%ebp)")
#define AND_RDX_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X21, 0X14, 0X24 # andq %rdx, (%esp)")

#define AND_RDI_TO_PTR_RAX CMT_ASM(".byte 0X48, 0X21, 0X38 # andq %rdi, (%rax)")
#define AND_RDI_TO_PTR_RBX CMT_ASM(".byte 0X48, 0X21, 0X3B # andq %rdi, (%rbx)")
#define AND_RDI_TO_PTR_RCX CMT_ASM(".byte 0X48, 0X21, 0X39 # andq %rdi, (%rcx)")
#define AND_RDI_TO_PTR_RDX CMT_ASM(".byte 0X48, 0X21, 0X3A # andq %rdi, (%rdx)")
#define AND_RDI_TO_PTR_RDI CMT_ASM(".byte 0X48, 0X21, 0X3F # andq %rdi, (%rdi)")
#define AND_RDI_TO_PTR_RSI CMT_ASM(".byte 0X48, 0X21, 0X3E # andq %rdi, (%rsi)")
#define AND_RDI_TO_PTR_RBP CMT_ASM(".byte 0X48, 0X21, 0X7D, 0X00 # andq %rdi, (%rbp)")
#define AND_RDI_TO_PTR_RSP CMT_ASM(".byte 0X48, 0X21, 0X3C, 0X24 # andq %rdi, (%rsp)")
#define AND_RDI_TO_PTR_R8 CMT_ASM(".byte 0X49, 0X21, 0X38 # andq %rdi, (%r8)")
#define AND_RDI_TO_PTR_R9 CMT_ASM(".byte 0X49, 0X21, 0X39 # andq %rdi, (%r9)")
#define AND_RDI_TO_PTR_R10 CMT_ASM(".byte 0X49, 0X21, 0X3A # andq %rdi, (%r10)")
#define AND_RDI_TO_PTR_R11 CMT_ASM(".byte 0X49, 0X21, 0X3B # andq %rdi, (%r11)")
#define AND_RDI_TO_PTR_R12 CMT_ASM(".byte 0X49, 0X21, 0X3C, 0X24 # andq %rdi, (%r12)")
#define AND_RDI_TO_PTR_R13 CMT_ASM(".byte 0X49, 0X21, 0X7D, 0X00 # andq %rdi, (%r13)")
#define AND_RDI_TO_PTR_R14 CMT_ASM(".byte 0X49, 0X21, 0X3E # andq %rdi, (%r14)")
#define AND_RDI_TO_PTR_R15 CMT_ASM(".byte 0X49, 0X21, 0X3F # andq %rdi, (%r15)")
#define AND_RDI_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X21, 0X38 # andq %rdi, (%eax)")
#define AND_RDI_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X21, 0X3B # andq %rdi, (%ebx)")
#define AND_RDI_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X21, 0X39 # andq %rdi, (%ecx)")
#define AND_RDI_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X21, 0X3A # andq %rdi, (%edx)")
#define AND_RDI_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X21, 0X3F # andq %rdi, (%edi)")
#define AND_RDI_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X21, 0X3E # andq %rdi, (%esi)")
#define AND_RDI_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X21, 0X7D, 0X00 # andq %rdi, (%ebp)")
#define AND_RDI_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X21, 0X3C, 0X24 # andq %rdi, (%esp)")

#define AND_RSI_TO_PTR_RAX CMT_ASM(".byte 0X48, 0X21, 0X30 # andq %rsi, (%rax)")
#define AND_RSI_TO_PTR_RBX CMT_ASM(".byte 0X48, 0X21, 0X33 # andq %rsi, (%rbx)")
#define AND_RSI_TO_PTR_RCX CMT_ASM(".byte 0X48, 0X21, 0X31 # andq %rsi, (%rcx)")
#define AND_RSI_TO_PTR_RDX CMT_ASM(".byte 0X48, 0X21, 0X32 # andq %rsi, (%rdx)")
#define AND_RSI_TO_PTR_RDI CMT_ASM(".byte 0X48, 0X21, 0X37 # andq %rsi, (%rdi)")
#define AND_RSI_TO_PTR_RSI CMT_ASM(".byte 0X48, 0X21, 0X36 # andq %rsi, (%rsi)")
#define AND_RSI_TO_PTR_RBP CMT_ASM(".byte 0X48, 0X21, 0X75, 0X00 # andq %rsi, (%rbp)")
#define AND_RSI_TO_PTR_RSP CMT_ASM(".byte 0X48, 0X21, 0X34, 0X24 # andq %rsi, (%rsp)")
#define AND_RSI_TO_PTR_R8 CMT_ASM(".byte 0X49, 0X21, 0X30 # andq %rsi, (%r8)")
#define AND_RSI_TO_PTR_R9 CMT_ASM(".byte 0X49, 0X21, 0X31 # andq %rsi, (%r9)")
#define AND_RSI_TO_PTR_R10 CMT_ASM(".byte 0X49, 0X21, 0X32 # andq %rsi, (%r10)")
#define AND_RSI_TO_PTR_R11 CMT_ASM(".byte 0X49, 0X21, 0X33 # andq %rsi, (%r11)")
#define AND_RSI_TO_PTR_R12 CMT_ASM(".byte 0X49, 0X21, 0X34, 0X24 # andq %rsi, (%r12)")
#define AND_RSI_TO_PTR_R13 CMT_ASM(".byte 0X49, 0X21, 0X75, 0X00 # andq %rsi, (%r13)")
#define AND_RSI_TO_PTR_R14 CMT_ASM(".byte 0X49, 0X21, 0X36 # andq %rsi, (%r14)")
#define AND_RSI_TO_PTR_R15 CMT_ASM(".byte 0X49, 0X21, 0X37 # andq %rsi, (%r15)")
#define AND_RSI_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X21, 0X30 # andq %rsi, (%eax)")
#define AND_RSI_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X21, 0X33 # andq %rsi, (%ebx)")
#define AND_RSI_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X21, 0X31 # andq %rsi, (%ecx)")
#define AND_RSI_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X21, 0X32 # andq %rsi, (%edx)")
#define AND_RSI_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X21, 0X37 # andq %rsi, (%edi)")
#define AND_RSI_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X21, 0X36 # andq %rsi, (%esi)")
#define AND_RSI_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X21, 0X75, 0X00 # andq %rsi, (%ebp)")
#define AND_RSI_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X21, 0X34, 0X24 # andq %rsi, (%esp)")

#define AND_RBP_TO_PTR_RAX CMT_ASM(".byte 0X48, 0X21, 0X28 # andq %rbp, (%rax)")
#define AND_RBP_TO_PTR_RBX CMT_ASM(".byte 0X48, 0X21, 0X2B # andq %rbp, (%rbx)")
#define AND_RBP_TO_PTR_RCX CMT_ASM(".byte 0X48, 0X21, 0X29 # andq %rbp, (%rcx)")
#define AND_RBP_TO_PTR_RDX CMT_ASM(".byte 0X48, 0X21, 0X2A # andq %rbp, (%rdx)")
#define AND_RBP_TO_PTR_RDI CMT_ASM(".byte 0X48, 0X21, 0X2F # andq %rbp, (%rdi)")
#define AND_RBP_TO_PTR_RSI CMT_ASM(".byte 0X48, 0X21, 0X2E # andq %rbp, (%rsi)")
#define AND_RBP_TO_PTR_RBP CMT_ASM(".byte 0X48, 0X21, 0X6D, 0X00 # andq %rbp, (%rbp)")
#define AND_RBP_TO_PTR_RSP CMT_ASM(".byte 0X48, 0X21, 0X2C, 0X24 # andq %rbp, (%rsp)")
#define AND_RBP_TO_PTR_R8 CMT_ASM(".byte 0X49, 0X21, 0X28 # andq %rbp, (%r8)")
#define AND_RBP_TO_PTR_R9 CMT_ASM(".byte 0X49, 0X21, 0X29 # andq %rbp, (%r9)")
#define AND_RBP_TO_PTR_R10 CMT_ASM(".byte 0X49, 0X21, 0X2A # andq %rbp, (%r10)")
#define AND_RBP_TO_PTR_R11 CMT_ASM(".byte 0X49, 0X21, 0X2B # andq %rbp, (%r11)")
#define AND_RBP_TO_PTR_R12 CMT_ASM(".byte 0X49, 0X21, 0X2C, 0X24 # andq %rbp, (%r12)")
#define AND_RBP_TO_PTR_R13 CMT_ASM(".byte 0X49, 0X21, 0X6D, 0X00 # andq %rbp, (%r13)")
#define AND_RBP_TO_PTR_R14 CMT_ASM(".byte 0X49, 0X21, 0X2E # andq %rbp, (%r14)")
#define AND_RBP_TO_PTR_R15 CMT_ASM(".byte 0X49, 0X21, 0X2F # andq %rbp, (%r15)")
#define AND_RBP_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X21, 0X28 # andq %rbp, (%eax)")
#define AND_RBP_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X21, 0X2B # andq %rbp, (%ebx)")
#define AND_RBP_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X21, 0X29 # andq %rbp, (%ecx)")
#define AND_RBP_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X21, 0X2A # andq %rbp, (%edx)")
#define AND_RBP_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X21, 0X2F # andq %rbp, (%edi)")
#define AND_RBP_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X21, 0X2E # andq %rbp, (%esi)")
#define AND_RBP_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X21, 0X6D, 0X00 # andq %rbp, (%ebp)")
#define AND_RBP_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X21, 0X2C, 0X24 # andq %rbp, (%esp)")

#define AND_RSP_TO_PTR_RAX CMT_ASM(".byte 0X48, 0X21, 0X20 # andq %rsp, (%rax)")
#define AND_RSP_TO_PTR_RBX CMT_ASM(".byte 0X48, 0X21, 0X23 # andq %rsp, (%rbx)")
#define AND_RSP_TO_PTR_RCX CMT_ASM(".byte 0X48, 0X21, 0X21 # andq %rsp, (%rcx)")
#define AND_RSP_TO_PTR_RDX CMT_ASM(".byte 0X48, 0X21, 0X22 # andq %rsp, (%rdx)")
#define AND_RSP_TO_PTR_RDI CMT_ASM(".byte 0X48, 0X21, 0X27 # andq %rsp, (%rdi)")
#define AND_RSP_TO_PTR_RSI CMT_ASM(".byte 0X48, 0X21, 0X26 # andq %rsp, (%rsi)")
#define AND_RSP_TO_PTR_RBP CMT_ASM(".byte 0X48, 0X21, 0X65, 0X00 # andq %rsp, (%rbp)")
#define AND_RSP_TO_PTR_RSP CMT_ASM(".byte 0X48, 0X21, 0X24, 0X24 # andq %rsp, (%rsp)")
#define AND_RSP_TO_PTR_R8 CMT_ASM(".byte 0X49, 0X21, 0X20 # andq %rsp, (%r8)")
#define AND_RSP_TO_PTR_R9 CMT_ASM(".byte 0X49, 0X21, 0X21 # andq %rsp, (%r9)")
#define AND_RSP_TO_PTR_R10 CMT_ASM(".byte 0X49, 0X21, 0X22 # andq %rsp, (%r10)")
#define AND_RSP_TO_PTR_R11 CMT_ASM(".byte 0X49, 0X21, 0X23 # andq %rsp, (%r11)")
#define AND_RSP_TO_PTR_R12 CMT_ASM(".byte 0X49, 0X21, 0X24, 0X24 # andq %rsp, (%r12)")
#define AND_RSP_TO_PTR_R13 CMT_ASM(".byte 0X49, 0X21, 0X65, 0X00 # andq %rsp, (%r13)")
#define AND_RSP_TO_PTR_R14 CMT_ASM(".byte 0X49, 0X21, 0X26 # andq %rsp, (%r14)")
#define AND_RSP_TO_PTR_R15 CMT_ASM(".byte 0X49, 0X21, 0X27 # andq %rsp, (%r15)")
#define AND_RSP_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X21, 0X20 # andq %rsp, (%eax)")
#define AND_RSP_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X21, 0X23 # andq %rsp, (%ebx)")
#define AND_RSP_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X21, 0X21 # andq %rsp, (%ecx)")
#define AND_RSP_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X21, 0X22 # andq %rsp, (%edx)")
#define AND_RSP_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X21, 0X27 # andq %rsp, (%edi)")
#define AND_RSP_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X21, 0X26 # andq %rsp, (%esi)")
#define AND_RSP_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X21, 0X65, 0X00 # andq %rsp, (%ebp)")
#define AND_RSP_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X21, 0X24, 0X24 # andq %rsp, (%esp)")

#define AND_R8_TO_PTR_RAX CMT_ASM(".byte 0X4C, 0X21, 0X00 # andq %r8, (%rax)")
#define AND_R8_TO_PTR_RBX CMT_ASM(".byte 0X4C, 0X21, 0X03 # andq %r8, (%rbx)")
#define AND_R8_TO_PTR_RCX CMT_ASM(".byte 0X4C, 0X21, 0X01 # andq %r8, (%rcx)")
#define AND_R8_TO_PTR_RDX CMT_ASM(".byte 0X4C, 0X21, 0X02 # andq %r8, (%rdx)")
#define AND_R8_TO_PTR_RDI CMT_ASM(".byte 0X4C, 0X21, 0X07 # andq %r8, (%rdi)")
#define AND_R8_TO_PTR_RSI CMT_ASM(".byte 0X4C, 0X21, 0X06 # andq %r8, (%rsi)")
#define AND_R8_TO_PTR_RBP CMT_ASM(".byte 0X4C, 0X21, 0X45, 0X00 # andq %r8, (%rbp)")
#define AND_R8_TO_PTR_RSP CMT_ASM(".byte 0X4C, 0X21, 0X04, 0X24 # andq %r8, (%rsp)")
#define AND_R8_TO_PTR_R8 CMT_ASM(".byte 0X4D, 0X21, 0X00 # andq %r8, (%r8)")
#define AND_R8_TO_PTR_R9 CMT_ASM(".byte 0X4D, 0X21, 0X01 # andq %r8, (%r9)")
#define AND_R8_TO_PTR_R10 CMT_ASM(".byte 0X4D, 0X21, 0X02 # andq %r8, (%r10)")
#define AND_R8_TO_PTR_R11 CMT_ASM(".byte 0X4D, 0X21, 0X03 # andq %r8, (%r11)")
#define AND_R8_TO_PTR_R12 CMT_ASM(".byte 0X4D, 0X21, 0X04, 0X24 # andq %r8, (%r12)")
#define AND_R8_TO_PTR_R13 CMT_ASM(".byte 0X4D, 0X21, 0X45, 0X00 # andq %r8, (%r13)")
#define AND_R8_TO_PTR_R14 CMT_ASM(".byte 0X4D, 0X21, 0X06 # andq %r8, (%r14)")
#define AND_R8_TO_PTR_R15 CMT_ASM(".byte 0X4D, 0X21, 0X07 # andq %r8, (%r15)")
#define AND_R8_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X21, 0X00 # andq %r8, (%eax)")
#define AND_R8_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X21, 0X03 # andq %r8, (%ebx)")
#define AND_R8_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X21, 0X01 # andq %r8, (%ecx)")
#define AND_R8_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X21, 0X02 # andq %r8, (%edx)")
#define AND_R8_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X21, 0X07 # andq %r8, (%edi)")
#define AND_R8_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X21, 0X06 # andq %r8, (%esi)")
#define AND_R8_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X21, 0X45, 0X00 # andq %r8, (%ebp)")
#define AND_R8_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X21, 0X04, 0X24 # andq %r8, (%esp)")

#define AND_R9_TO_PTR_RAX CMT_ASM(".byte 0X4C, 0X21, 0X08 # andq %r9, (%rax)")
#define AND_R9_TO_PTR_RBX CMT_ASM(".byte 0X4C, 0X21, 0X0B # andq %r9, (%rbx)")
#define AND_R9_TO_PTR_RCX CMT_ASM(".byte 0X4C, 0X21, 0X09 # andq %r9, (%rcx)")
#define AND_R9_TO_PTR_RDX CMT_ASM(".byte 0X4C, 0X21, 0X0A # andq %r9, (%rdx)")
#define AND_R9_TO_PTR_RDI CMT_ASM(".byte 0X4C, 0X21, 0X0F # andq %r9, (%rdi)")
#define AND_R9_TO_PTR_RSI CMT_ASM(".byte 0X4C, 0X21, 0X0E # andq %r9, (%rsi)")
#define AND_R9_TO_PTR_RBP CMT_ASM(".byte 0X4C, 0X21, 0X4D, 0X00 # andq %r9, (%rbp)")
#define AND_R9_TO_PTR_RSP CMT_ASM(".byte 0X4C, 0X21, 0X0C, 0X24 # andq %r9, (%rsp)")
#define AND_R9_TO_PTR_R8 CMT_ASM(".byte 0X4D, 0X21, 0X08 # andq %r9, (%r8)")
#define AND_R9_TO_PTR_R9 CMT_ASM(".byte 0X4D, 0X21, 0X09 # andq %r9, (%r9)")
#define AND_R9_TO_PTR_R10 CMT_ASM(".byte 0X4D, 0X21, 0X0A # andq %r9, (%r10)")
#define AND_R9_TO_PTR_R11 CMT_ASM(".byte 0X4D, 0X21, 0X0B # andq %r9, (%r11)")
#define AND_R9_TO_PTR_R12 CMT_ASM(".byte 0X4D, 0X21, 0X0C, 0X24 # andq %r9, (%r12)")
#define AND_R9_TO_PTR_R13 CMT_ASM(".byte 0X4D, 0X21, 0X4D, 0X00 # andq %r9, (%r13)")
#define AND_R9_TO_PTR_R14 CMT_ASM(".byte 0X4D, 0X21, 0X0E # andq %r9, (%r14)")
#define AND_R9_TO_PTR_R15 CMT_ASM(".byte 0X4D, 0X21, 0X0F # andq %r9, (%r15)")
#define AND_R9_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X21, 0X08 # andq %r9, (%eax)")
#define AND_R9_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X21, 0X0B # andq %r9, (%ebx)")
#define AND_R9_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X21, 0X09 # andq %r9, (%ecx)")
#define AND_R9_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X21, 0X0A # andq %r9, (%edx)")
#define AND_R9_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X21, 0X0F # andq %r9, (%edi)")
#define AND_R9_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X21, 0X0E # andq %r9, (%esi)")
#define AND_R9_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X21, 0X4D, 0X00 # andq %r9, (%ebp)")
#define AND_R9_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X21, 0X0C, 0X24 # andq %r9, (%esp)")

#define AND_R10_TO_PTR_RAX CMT_ASM(".byte 0X4C, 0X21, 0X10 # andq %r10, (%rax)")
#define AND_R10_TO_PTR_RBX CMT_ASM(".byte 0X4C, 0X21, 0X13 # andq %r10, (%rbx)")
#define AND_R10_TO_PTR_RCX CMT_ASM(".byte 0X4C, 0X21, 0X11 # andq %r10, (%rcx)")
#define AND_R10_TO_PTR_RDX CMT_ASM(".byte 0X4C, 0X21, 0X12 # andq %r10, (%rdx)")
#define AND_R10_TO_PTR_RDI CMT_ASM(".byte 0X4C, 0X21, 0X17 # andq %r10, (%rdi)")
#define AND_R10_TO_PTR_RSI CMT_ASM(".byte 0X4C, 0X21, 0X16 # andq %r10, (%rsi)")
#define AND_R10_TO_PTR_RBP CMT_ASM(".byte 0X4C, 0X21, 0X55, 0X00 # andq %r10, (%rbp)")
#define AND_R10_TO_PTR_RSP CMT_ASM(".byte 0X4C, 0X21, 0X14, 0X24 # andq %r10, (%rsp)")
#define AND_R10_TO_PTR_R8 CMT_ASM(".byte 0X4D, 0X21, 0X10 # andq %r10, (%r8)")
#define AND_R10_TO_PTR_R9 CMT_ASM(".byte 0X4D, 0X21, 0X11 # andq %r10, (%r9)")
#define AND_R10_TO_PTR_R10 CMT_ASM(".byte 0X4D, 0X21, 0X12 # andq %r10, (%r10)")
#define AND_R10_TO_PTR_R11 CMT_ASM(".byte 0X4D, 0X21, 0X13 # andq %r10, (%r11)")
#define AND_R10_TO_PTR_R12 CMT_ASM(".byte 0X4D, 0X21, 0X14, 0X24 # andq %r10, (%r12)")
#define AND_R10_TO_PTR_R13 CMT_ASM(".byte 0X4D, 0X21, 0X55, 0X00 # andq %r10, (%r13)")
#define AND_R10_TO_PTR_R14 CMT_ASM(".byte 0X4D, 0X21, 0X16 # andq %r10, (%r14)")
#define AND_R10_TO_PTR_R15 CMT_ASM(".byte 0X4D, 0X21, 0X17 # andq %r10, (%r15)")
#define AND_R10_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X21, 0X10 # andq %r10, (%eax)")
#define AND_R10_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X21, 0X13 # andq %r10, (%ebx)")
#define AND_R10_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X21, 0X11 # andq %r10, (%ecx)")
#define AND_R10_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X21, 0X12 # andq %r10, (%edx)")
#define AND_R10_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X21, 0X17 # andq %r10, (%edi)")
#define AND_R10_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X21, 0X16 # andq %r10, (%esi)")
#define AND_R10_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X21, 0X55, 0X00 # andq %r10, (%ebp)")
#define AND_R10_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X21, 0X14, 0X24 # andq %r10, (%esp)")

#define AND_R11_TO_PTR_RAX CMT_ASM(".byte 0X4C, 0X21, 0X18 # andq %r11, (%rax)")
#define AND_R11_TO_PTR_RBX CMT_ASM(".byte 0X4C, 0X21, 0X1B # andq %r11, (%rbx)")
#define AND_R11_TO_PTR_RCX CMT_ASM(".byte 0X4C, 0X21, 0X19 # andq %r11, (%rcx)")
#define AND_R11_TO_PTR_RDX CMT_ASM(".byte 0X4C, 0X21, 0X1A # andq %r11, (%rdx)")
#define AND_R11_TO_PTR_RDI CMT_ASM(".byte 0X4C, 0X21, 0X1F # andq %r11, (%rdi)")
#define AND_R11_TO_PTR_RSI CMT_ASM(".byte 0X4C, 0X21, 0X1E # andq %r11, (%rsi)")
#define AND_R11_TO_PTR_RBP CMT_ASM(".byte 0X4C, 0X21, 0X5D, 0X00 # andq %r11, (%rbp)")
#define AND_R11_TO_PTR_RSP CMT_ASM(".byte 0X4C, 0X21, 0X1C, 0X24 # andq %r11, (%rsp)")
#define AND_R11_TO_PTR_R8 CMT_ASM(".byte 0X4D, 0X21, 0X18 # andq %r11, (%r8)")
#define AND_R11_TO_PTR_R9 CMT_ASM(".byte 0X4D, 0X21, 0X19 # andq %r11, (%r9)")
#define AND_R11_TO_PTR_R10 CMT_ASM(".byte 0X4D, 0X21, 0X1A # andq %r11, (%r10)")
#define AND_R11_TO_PTR_R11 CMT_ASM(".byte 0X4D, 0X21, 0X1B # andq %r11, (%r11)")
#define AND_R11_TO_PTR_R12 CMT_ASM(".byte 0X4D, 0X21, 0X1C, 0X24 # andq %r11, (%r12)")
#define AND_R11_TO_PTR_R13 CMT_ASM(".byte 0X4D, 0X21, 0X5D, 0X00 # andq %r11, (%r13)")
#define AND_R11_TO_PTR_R14 CMT_ASM(".byte 0X4D, 0X21, 0X1E # andq %r11, (%r14)")
#define AND_R11_TO_PTR_R15 CMT_ASM(".byte 0X4D, 0X21, 0X1F # andq %r11, (%r15)")
#define AND_R11_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X21, 0X18 # andq %r11, (%eax)")
#define AND_R11_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X21, 0X1B # andq %r11, (%ebx)")
#define AND_R11_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X21, 0X19 # andq %r11, (%ecx)")
#define AND_R11_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X21, 0X1A # andq %r11, (%edx)")
#define AND_R11_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X21, 0X1F # andq %r11, (%edi)")
#define AND_R11_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X21, 0X1E # andq %r11, (%esi)")
#define AND_R11_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X21, 0X5D, 0X00 # andq %r11, (%ebp)")
#define AND_R11_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X21, 0X1C, 0X24 # andq %r11, (%esp)")

#define AND_R12_TO_PTR_RAX CMT_ASM(".byte 0X4C, 0X21, 0X20 # andq %r12, (%rax)")
#define AND_R12_TO_PTR_RBX CMT_ASM(".byte 0X4C, 0X21, 0X23 # andq %r12, (%rbx)")
#define AND_R12_TO_PTR_RCX CMT_ASM(".byte 0X4C, 0X21, 0X21 # andq %r12, (%rcx)")
#define AND_R12_TO_PTR_RDX CMT_ASM(".byte 0X4C, 0X21, 0X22 # andq %r12, (%rdx)")
#define AND_R12_TO_PTR_RDI CMT_ASM(".byte 0X4C, 0X21, 0X27 # andq %r12, (%rdi)")
#define AND_R12_TO_PTR_RSI CMT_ASM(".byte 0X4C, 0X21, 0X26 # andq %r12, (%rsi)")
#define AND_R12_TO_PTR_RBP CMT_ASM(".byte 0X4C, 0X21, 0X65, 0X00 # andq %r12, (%rbp)")
#define AND_R12_TO_PTR_RSP CMT_ASM(".byte 0X4C, 0X21, 0X24, 0X24 # andq %r12, (%rsp)")
#define AND_R12_TO_PTR_R8 CMT_ASM(".byte 0X4D, 0X21, 0X20 # andq %r12, (%r8)")
#define AND_R12_TO_PTR_R9 CMT_ASM(".byte 0X4D, 0X21, 0X21 # andq %r12, (%r9)")
#define AND_R12_TO_PTR_R10 CMT_ASM(".byte 0X4D, 0X21, 0X22 # andq %r12, (%r10)")
#define AND_R12_TO_PTR_R11 CMT_ASM(".byte 0X4D, 0X21, 0X23 # andq %r12, (%r11)")
#define AND_R12_TO_PTR_R12 CMT_ASM(".byte 0X4D, 0X21, 0X24, 0X24 # andq %r12, (%r12)")
#define AND_R12_TO_PTR_R13 CMT_ASM(".byte 0X4D, 0X21, 0X65, 0X00 # andq %r12, (%r13)")
#define AND_R12_TO_PTR_R14 CMT_ASM(".byte 0X4D, 0X21, 0X26 # andq %r12, (%r14)")
#define AND_R12_TO_PTR_R15 CMT_ASM(".byte 0X4D, 0X21, 0X27 # andq %r12, (%r15)")
#define AND_R12_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X21, 0X20 # andq %r12, (%eax)")
#define AND_R12_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X21, 0X23 # andq %r12, (%ebx)")
#define AND_R12_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X21, 0X21 # andq %r12, (%ecx)")
#define AND_R12_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X21, 0X22 # andq %r12, (%edx)")
#define AND_R12_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X21, 0X27 # andq %r12, (%edi)")
#define AND_R12_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X21, 0X26 # andq %r12, (%esi)")
#define AND_R12_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X21, 0X65, 0X00 # andq %r12, (%ebp)")
#define AND_R12_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X21, 0X24, 0X24 # andq %r12, (%esp)")

#define AND_R13_TO_PTR_RAX CMT_ASM(".byte 0X4C, 0X21, 0X28 # andq %r13, (%rax)")
#define AND_R13_TO_PTR_RBX CMT_ASM(".byte 0X4C, 0X21, 0X2B # andq %r13, (%rbx)")
#define AND_R13_TO_PTR_RCX CMT_ASM(".byte 0X4C, 0X21, 0X29 # andq %r13, (%rcx)")
#define AND_R13_TO_PTR_RDX CMT_ASM(".byte 0X4C, 0X21, 0X2A # andq %r13, (%rdx)")
#define AND_R13_TO_PTR_RDI CMT_ASM(".byte 0X4C, 0X21, 0X2F # andq %r13, (%rdi)")
#define AND_R13_TO_PTR_RSI CMT_ASM(".byte 0X4C, 0X21, 0X2E # andq %r13, (%rsi)")
#define AND_R13_TO_PTR_RBP CMT_ASM(".byte 0X4C, 0X21, 0X6D, 0X00 # andq %r13, (%rbp)")
#define AND_R13_TO_PTR_RSP CMT_ASM(".byte 0X4C, 0X21, 0X2C, 0X24 # andq %r13, (%rsp)")
#define AND_R13_TO_PTR_R8 CMT_ASM(".byte 0X4D, 0X21, 0X28 # andq %r13, (%r8)")
#define AND_R13_TO_PTR_R9 CMT_ASM(".byte 0X4D, 0X21, 0X29 # andq %r13, (%r9)")
#define AND_R13_TO_PTR_R10 CMT_ASM(".byte 0X4D, 0X21, 0X2A # andq %r13, (%r10)")
#define AND_R13_TO_PTR_R11 CMT_ASM(".byte 0X4D, 0X21, 0X2B # andq %r13, (%r11)")
#define AND_R13_TO_PTR_R12 CMT_ASM(".byte 0X4D, 0X21, 0X2C, 0X24 # andq %r13, (%r12)")
#define AND_R13_TO_PTR_R13 CMT_ASM(".byte 0X4D, 0X21, 0X6D, 0X00 # andq %r13, (%r13)")
#define AND_R13_TO_PTR_R14 CMT_ASM(".byte 0X4D, 0X21, 0X2E # andq %r13, (%r14)")
#define AND_R13_TO_PTR_R15 CMT_ASM(".byte 0X4D, 0X21, 0X2F # andq %r13, (%r15)")
#define AND_R13_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X21, 0X28 # andq %r13, (%eax)")
#define AND_R13_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X21, 0X2B # andq %r13, (%ebx)")
#define AND_R13_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X21, 0X29 # andq %r13, (%ecx)")
#define AND_R13_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X21, 0X2A # andq %r13, (%edx)")
#define AND_R13_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X21, 0X2F # andq %r13, (%edi)")
#define AND_R13_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X21, 0X2E # andq %r13, (%esi)")
#define AND_R13_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X21, 0X6D, 0X00 # andq %r13, (%ebp)")
#define AND_R13_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X21, 0X2C, 0X24 # andq %r13, (%esp)")

#define AND_R14_TO_PTR_RAX CMT_ASM(".byte 0X4C, 0X21, 0X30 # andq %r14, (%rax)")
#define AND_R14_TO_PTR_RBX CMT_ASM(".byte 0X4C, 0X21, 0X33 # andq %r14, (%rbx)")
#define AND_R14_TO_PTR_RCX CMT_ASM(".byte 0X4C, 0X21, 0X31 # andq %r14, (%rcx)")
#define AND_R14_TO_PTR_RDX CMT_ASM(".byte 0X4C, 0X21, 0X32 # andq %r14, (%rdx)")
#define AND_R14_TO_PTR_RDI CMT_ASM(".byte 0X4C, 0X21, 0X37 # andq %r14, (%rdi)")
#define AND_R14_TO_PTR_RSI CMT_ASM(".byte 0X4C, 0X21, 0X36 # andq %r14, (%rsi)")
#define AND_R14_TO_PTR_RBP CMT_ASM(".byte 0X4C, 0X21, 0X75, 0X00 # andq %r14, (%rbp)")
#define AND_R14_TO_PTR_RSP CMT_ASM(".byte 0X4C, 0X21, 0X34, 0X24 # andq %r14, (%rsp)")
#define AND_R14_TO_PTR_R8 CMT_ASM(".byte 0X4D, 0X21, 0X30 # andq %r14, (%r8)")
#define AND_R14_TO_PTR_R9 CMT_ASM(".byte 0X4D, 0X21, 0X31 # andq %r14, (%r9)")
#define AND_R14_TO_PTR_R10 CMT_ASM(".byte 0X4D, 0X21, 0X32 # andq %r14, (%r10)")
#define AND_R14_TO_PTR_R11 CMT_ASM(".byte 0X4D, 0X21, 0X33 # andq %r14, (%r11)")
#define AND_R14_TO_PTR_R12 CMT_ASM(".byte 0X4D, 0X21, 0X34, 0X24 # andq %r14, (%r12)")
#define AND_R14_TO_PTR_R13 CMT_ASM(".byte 0X4D, 0X21, 0X75, 0X00 # andq %r14, (%r13)")
#define AND_R14_TO_PTR_R14 CMT_ASM(".byte 0X4D, 0X21, 0X36 # andq %r14, (%r14)")
#define AND_R14_TO_PTR_R15 CMT_ASM(".byte 0X4D, 0X21, 0X37 # andq %r14, (%r15)")
#define AND_R14_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X21, 0X30 # andq %r14, (%eax)")
#define AND_R14_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X21, 0X33 # andq %r14, (%ebx)")
#define AND_R14_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X21, 0X31 # andq %r14, (%ecx)")
#define AND_R14_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X21, 0X32 # andq %r14, (%edx)")
#define AND_R14_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X21, 0X37 # andq %r14, (%edi)")
#define AND_R14_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X21, 0X36 # andq %r14, (%esi)")
#define AND_R14_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X21, 0X75, 0X00 # andq %r14, (%ebp)")
#define AND_R14_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X21, 0X34, 0X24 # andq %r14, (%esp)")

#define AND_R15_TO_PTR_RAX CMT_ASM(".byte 0X4C, 0X21, 0X38 # andq %r15, (%rax)")
#define AND_R15_TO_PTR_RBX CMT_ASM(".byte 0X4C, 0X21, 0X3B # andq %r15, (%rbx)")
#define AND_R15_TO_PTR_RCX CMT_ASM(".byte 0X4C, 0X21, 0X39 # andq %r15, (%rcx)")
#define AND_R15_TO_PTR_RDX CMT_ASM(".byte 0X4C, 0X21, 0X3A # andq %r15, (%rdx)")
#define AND_R15_TO_PTR_RDI CMT_ASM(".byte 0X4C, 0X21, 0X3F # andq %r15, (%rdi)")
#define AND_R15_TO_PTR_RSI CMT_ASM(".byte 0X4C, 0X21, 0X3E # andq %r15, (%rsi)")
#define AND_R15_TO_PTR_RBP CMT_ASM(".byte 0X4C, 0X21, 0X7D, 0X00 # andq %r15, (%rbp)")
#define AND_R15_TO_PTR_RSP CMT_ASM(".byte 0X4C, 0X21, 0X3C, 0X24 # andq %r15, (%rsp)")
#define AND_R15_TO_PTR_R8 CMT_ASM(".byte 0X4D, 0X21, 0X38 # andq %r15, (%r8)")
#define AND_R15_TO_PTR_R9 CMT_ASM(".byte 0X4D, 0X21, 0X39 # andq %r15, (%r9)")
#define AND_R15_TO_PTR_R10 CMT_ASM(".byte 0X4D, 0X21, 0X3A # andq %r15, (%r10)")
#define AND_R15_TO_PTR_R11 CMT_ASM(".byte 0X4D, 0X21, 0X3B # andq %r15, (%r11)")
#define AND_R15_TO_PTR_R12 CMT_ASM(".byte 0X4D, 0X21, 0X3C, 0X24 # andq %r15, (%r12)")
#define AND_R15_TO_PTR_R13 CMT_ASM(".byte 0X4D, 0X21, 0X7D, 0X00 # andq %r15, (%r13)")
#define AND_R15_TO_PTR_R14 CMT_ASM(".byte 0X4D, 0X21, 0X3E # andq %r15, (%r14)")
#define AND_R15_TO_PTR_R15 CMT_ASM(".byte 0X4D, 0X21, 0X3F # andq %r15, (%r15)")
#define AND_R15_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X21, 0X38 # andq %r15, (%eax)")
#define AND_R15_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X21, 0X3B # andq %r15, (%ebx)")
#define AND_R15_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X21, 0X39 # andq %r15, (%ecx)")
#define AND_R15_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X21, 0X3A # andq %r15, (%edx)")
#define AND_R15_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X21, 0X3F # andq %r15, (%edi)")
#define AND_R15_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X21, 0X3E # andq %r15, (%esi)")
#define AND_R15_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X21, 0X7D, 0X00 # andq %r15, (%ebp)")
#define AND_R15_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X21, 0X3C, 0X24 # andq %r15, (%esp)")

#define AND_RAX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X23, 0X80 # andq " _(VALUE) "(%rax), %rax")\
	CMT_ASM(".long " _(VALUE))
#define AND_RAX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X23, 0X83 # andq " _(VALUE) "(%rbx), %rax")\
	CMT_ASM(".long " _(VALUE))
#define AND_RAX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X23, 0X81 # andq " _(VALUE) "(%rcx), %rax")\
	CMT_ASM(".long " _(VALUE))
#define AND_RAX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X23, 0X82 # andq " _(VALUE) "(%rdx), %rax")\
	CMT_ASM(".long " _(VALUE))
#define AND_RAX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X23, 0X87 # andq " _(VALUE) "(%rdi), %rax")\
	CMT_ASM(".long " _(VALUE))
#define AND_RAX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X23, 0X86 # andq " _(VALUE) "(%rsi), %rax")\
	CMT_ASM(".long " _(VALUE))
#define AND_RAX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X23, 0X85 # andq " _(VALUE) "(%rbp), %rax")\
	CMT_ASM(".long " _(VALUE))
#define AND_RAX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X23, 0X84, 0X24 # andq " _(VALUE) "(%rsp), %rax")\
	CMT_ASM(".long " _(VALUE))
#define AND_RAX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X23, 0X80 # andq " _(VALUE) "(%r8), %rax")\
	CMT_ASM(".long " _(VALUE))
#define AND_RAX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X23, 0X81 # andq " _(VALUE) "(%r9), %rax")\
	CMT_ASM(".long " _(VALUE))
#define AND_RAX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X23, 0X82 # andq " _(VALUE) "(%r10), %rax")\
	CMT_ASM(".long " _(VALUE))
#define AND_RAX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X23, 0X83 # andq " _(VALUE) "(%r11), %rax")\
	CMT_ASM(".long " _(VALUE))
#define AND_RAX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X23, 0X84, 0X24 # andq " _(VALUE) "(%r12), %rax")\
	CMT_ASM(".long " _(VALUE))
#define AND_RAX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X23, 0X85 # andq " _(VALUE) "(%r13), %rax")\
	CMT_ASM(".long " _(VALUE))
#define AND_RAX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X23, 0X86 # andq " _(VALUE) "(%r14), %rax")\
	CMT_ASM(".long " _(VALUE))
#define AND_RAX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X23, 0X87 # andq " _(VALUE) "(%r15), %rax")\
	CMT_ASM(".long " _(VALUE))
#define AND_RAX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X23, 0X80 # andq " _(VALUE) "(%eax), %rax")\
	CMT_ASM(".long " _(VALUE))
#define AND_RAX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X23, 0X83 # andq " _(VALUE) "(%ebx), %rax")\
	CMT_ASM(".long " _(VALUE))
#define AND_RAX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X23, 0X81 # andq " _(VALUE) "(%ecx), %rax")\
	CMT_ASM(".long " _(VALUE))
#define AND_RAX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X23, 0X82 # andq " _(VALUE) "(%edx), %rax")\
	CMT_ASM(".long " _(VALUE))
#define AND_RAX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X23, 0X87 # andq " _(VALUE) "(%edi), %rax")\
	CMT_ASM(".long " _(VALUE))
#define AND_RAX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X23, 0X86 # andq " _(VALUE) "(%esi), %rax")\
	CMT_ASM(".long " _(VALUE))
#define AND_RAX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X23, 0X85 # andq " _(VALUE) "(%ebp), %rax")\
	CMT_ASM(".long " _(VALUE))
#define AND_RAX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X23, 0X84, 0X24 # andq " _(VALUE) "(%esp), %rax")\
	CMT_ASM(".long " _(VALUE))

#define AND_RBX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X23, 0X98 # andq " _(VALUE) "(%rax), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define AND_RBX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X23, 0X9B # andq " _(VALUE) "(%rbx), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define AND_RBX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X23, 0X99 # andq " _(VALUE) "(%rcx), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define AND_RBX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X23, 0X9A # andq " _(VALUE) "(%rdx), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define AND_RBX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X23, 0X9F # andq " _(VALUE) "(%rdi), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define AND_RBX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X23, 0X9E # andq " _(VALUE) "(%rsi), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define AND_RBX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X23, 0X9D # andq " _(VALUE) "(%rbp), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define AND_RBX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X23, 0X9C, 0X24 # andq " _(VALUE) "(%rsp), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define AND_RBX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X23, 0X98 # andq " _(VALUE) "(%r8), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define AND_RBX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X23, 0X99 # andq " _(VALUE) "(%r9), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define AND_RBX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X23, 0X9A # andq " _(VALUE) "(%r10), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define AND_RBX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X23, 0X9B # andq " _(VALUE) "(%r11), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define AND_RBX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X23, 0X9C, 0X24 # andq " _(VALUE) "(%r12), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define AND_RBX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X23, 0X9D # andq " _(VALUE) "(%r13), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define AND_RBX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X23, 0X9E # andq " _(VALUE) "(%r14), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define AND_RBX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X23, 0X9F # andq " _(VALUE) "(%r15), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define AND_RBX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X23, 0X98 # andq " _(VALUE) "(%eax), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define AND_RBX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X23, 0X9B # andq " _(VALUE) "(%ebx), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define AND_RBX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X23, 0X99 # andq " _(VALUE) "(%ecx), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define AND_RBX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X23, 0X9A # andq " _(VALUE) "(%edx), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define AND_RBX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X23, 0X9F # andq " _(VALUE) "(%edi), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define AND_RBX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X23, 0X9E # andq " _(VALUE) "(%esi), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define AND_RBX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X23, 0X9D # andq " _(VALUE) "(%ebp), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define AND_RBX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X23, 0X9C, 0X24 # andq " _(VALUE) "(%esp), %rbx")\
	CMT_ASM(".long " _(VALUE))

#define AND_RCX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X23, 0X88 # andq " _(VALUE) "(%rax), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define AND_RCX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X23, 0X8B # andq " _(VALUE) "(%rbx), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define AND_RCX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X23, 0X89 # andq " _(VALUE) "(%rcx), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define AND_RCX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X23, 0X8A # andq " _(VALUE) "(%rdx), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define AND_RCX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X23, 0X8F # andq " _(VALUE) "(%rdi), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define AND_RCX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X23, 0X8E # andq " _(VALUE) "(%rsi), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define AND_RCX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X23, 0X8D # andq " _(VALUE) "(%rbp), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define AND_RCX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X23, 0X8C, 0X24 # andq " _(VALUE) "(%rsp), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define AND_RCX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X23, 0X88 # andq " _(VALUE) "(%r8), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define AND_RCX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X23, 0X89 # andq " _(VALUE) "(%r9), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define AND_RCX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X23, 0X8A # andq " _(VALUE) "(%r10), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define AND_RCX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X23, 0X8B # andq " _(VALUE) "(%r11), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define AND_RCX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X23, 0X8C, 0X24 # andq " _(VALUE) "(%r12), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define AND_RCX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X23, 0X8D # andq " _(VALUE) "(%r13), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define AND_RCX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X23, 0X8E # andq " _(VALUE) "(%r14), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define AND_RCX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X23, 0X8F # andq " _(VALUE) "(%r15), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define AND_RCX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X23, 0X88 # andq " _(VALUE) "(%eax), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define AND_RCX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X23, 0X8B # andq " _(VALUE) "(%ebx), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define AND_RCX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X23, 0X89 # andq " _(VALUE) "(%ecx), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define AND_RCX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X23, 0X8A # andq " _(VALUE) "(%edx), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define AND_RCX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X23, 0X8F # andq " _(VALUE) "(%edi), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define AND_RCX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X23, 0X8E # andq " _(VALUE) "(%esi), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define AND_RCX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X23, 0X8D # andq " _(VALUE) "(%ebp), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define AND_RCX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X23, 0X8C, 0X24 # andq " _(VALUE) "(%esp), %rcx")\
	CMT_ASM(".long " _(VALUE))

#define AND_RDX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X23, 0X90 # andq " _(VALUE) "(%rax), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define AND_RDX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X23, 0X93 # andq " _(VALUE) "(%rbx), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define AND_RDX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X23, 0X91 # andq " _(VALUE) "(%rcx), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define AND_RDX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X23, 0X92 # andq " _(VALUE) "(%rdx), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define AND_RDX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X23, 0X97 # andq " _(VALUE) "(%rdi), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define AND_RDX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X23, 0X96 # andq " _(VALUE) "(%rsi), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define AND_RDX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X23, 0X95 # andq " _(VALUE) "(%rbp), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define AND_RDX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X23, 0X94, 0X24 # andq " _(VALUE) "(%rsp), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define AND_RDX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X23, 0X90 # andq " _(VALUE) "(%r8), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define AND_RDX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X23, 0X91 # andq " _(VALUE) "(%r9), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define AND_RDX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X23, 0X92 # andq " _(VALUE) "(%r10), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define AND_RDX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X23, 0X93 # andq " _(VALUE) "(%r11), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define AND_RDX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X23, 0X94, 0X24 # andq " _(VALUE) "(%r12), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define AND_RDX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X23, 0X95 # andq " _(VALUE) "(%r13), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define AND_RDX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X23, 0X96 # andq " _(VALUE) "(%r14), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define AND_RDX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X23, 0X97 # andq " _(VALUE) "(%r15), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define AND_RDX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X23, 0X90 # andq " _(VALUE) "(%eax), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define AND_RDX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X23, 0X93 # andq " _(VALUE) "(%ebx), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define AND_RDX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X23, 0X91 # andq " _(VALUE) "(%ecx), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define AND_RDX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X23, 0X92 # andq " _(VALUE) "(%edx), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define AND_RDX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X23, 0X97 # andq " _(VALUE) "(%edi), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define AND_RDX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X23, 0X96 # andq " _(VALUE) "(%esi), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define AND_RDX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X23, 0X95 # andq " _(VALUE) "(%ebp), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define AND_RDX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X23, 0X94, 0X24 # andq " _(VALUE) "(%esp), %rdx")\
	CMT_ASM(".long " _(VALUE))

#define AND_RDI_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X23, 0XB8 # andq " _(VALUE) "(%rax), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define AND_RDI_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X23, 0XBB # andq " _(VALUE) "(%rbx), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define AND_RDI_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X23, 0XB9 # andq " _(VALUE) "(%rcx), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define AND_RDI_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X23, 0XBA # andq " _(VALUE) "(%rdx), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define AND_RDI_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X23, 0XBF # andq " _(VALUE) "(%rdi), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define AND_RDI_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X23, 0XBE # andq " _(VALUE) "(%rsi), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define AND_RDI_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X23, 0XBD # andq " _(VALUE) "(%rbp), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define AND_RDI_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X23, 0XBC, 0X24 # andq " _(VALUE) "(%rsp), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define AND_RDI_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X23, 0XB8 # andq " _(VALUE) "(%r8), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define AND_RDI_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X23, 0XB9 # andq " _(VALUE) "(%r9), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define AND_RDI_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X23, 0XBA # andq " _(VALUE) "(%r10), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define AND_RDI_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X23, 0XBB # andq " _(VALUE) "(%r11), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define AND_RDI_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X23, 0XBC, 0X24 # andq " _(VALUE) "(%r12), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define AND_RDI_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X23, 0XBD # andq " _(VALUE) "(%r13), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define AND_RDI_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X23, 0XBE # andq " _(VALUE) "(%r14), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define AND_RDI_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X23, 0XBF # andq " _(VALUE) "(%r15), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define AND_RDI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X23, 0XB8 # andq " _(VALUE) "(%eax), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define AND_RDI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X23, 0XBB # andq " _(VALUE) "(%ebx), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define AND_RDI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X23, 0XB9 # andq " _(VALUE) "(%ecx), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define AND_RDI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X23, 0XBA # andq " _(VALUE) "(%edx), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define AND_RDI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X23, 0XBF # andq " _(VALUE) "(%edi), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define AND_RDI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X23, 0XBE # andq " _(VALUE) "(%esi), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define AND_RDI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X23, 0XBD # andq " _(VALUE) "(%ebp), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define AND_RDI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X23, 0XBC, 0X24 # andq " _(VALUE) "(%esp), %rdi")\
	CMT_ASM(".long " _(VALUE))

#define AND_RSI_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X23, 0XB0 # andq " _(VALUE) "(%rax), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define AND_RSI_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X23, 0XB3 # andq " _(VALUE) "(%rbx), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define AND_RSI_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X23, 0XB1 # andq " _(VALUE) "(%rcx), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define AND_RSI_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X23, 0XB2 # andq " _(VALUE) "(%rdx), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define AND_RSI_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X23, 0XB7 # andq " _(VALUE) "(%rdi), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define AND_RSI_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X23, 0XB6 # andq " _(VALUE) "(%rsi), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define AND_RSI_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X23, 0XB5 # andq " _(VALUE) "(%rbp), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define AND_RSI_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X23, 0XB4, 0X24 # andq " _(VALUE) "(%rsp), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define AND_RSI_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X23, 0XB0 # andq " _(VALUE) "(%r8), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define AND_RSI_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X23, 0XB1 # andq " _(VALUE) "(%r9), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define AND_RSI_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X23, 0XB2 # andq " _(VALUE) "(%r10), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define AND_RSI_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X23, 0XB3 # andq " _(VALUE) "(%r11), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define AND_RSI_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X23, 0XB4, 0X24 # andq " _(VALUE) "(%r12), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define AND_RSI_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X23, 0XB5 # andq " _(VALUE) "(%r13), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define AND_RSI_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X23, 0XB6 # andq " _(VALUE) "(%r14), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define AND_RSI_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X23, 0XB7 # andq " _(VALUE) "(%r15), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define AND_RSI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X23, 0XB0 # andq " _(VALUE) "(%eax), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define AND_RSI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X23, 0XB3 # andq " _(VALUE) "(%ebx), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define AND_RSI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X23, 0XB1 # andq " _(VALUE) "(%ecx), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define AND_RSI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X23, 0XB2 # andq " _(VALUE) "(%edx), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define AND_RSI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X23, 0XB7 # andq " _(VALUE) "(%edi), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define AND_RSI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X23, 0XB6 # andq " _(VALUE) "(%esi), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define AND_RSI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X23, 0XB5 # andq " _(VALUE) "(%ebp), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define AND_RSI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X23, 0XB4, 0X24 # andq " _(VALUE) "(%esp), %rsi")\
	CMT_ASM(".long " _(VALUE))

#define AND_RBP_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X23, 0XA8 # andq " _(VALUE) "(%rax), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define AND_RBP_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X23, 0XAB # andq " _(VALUE) "(%rbx), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define AND_RBP_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X23, 0XA9 # andq " _(VALUE) "(%rcx), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define AND_RBP_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X23, 0XAA # andq " _(VALUE) "(%rdx), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define AND_RBP_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X23, 0XAF # andq " _(VALUE) "(%rdi), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define AND_RBP_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X23, 0XAE # andq " _(VALUE) "(%rsi), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define AND_RBP_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X23, 0XAD # andq " _(VALUE) "(%rbp), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define AND_RBP_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X23, 0XAC, 0X24 # andq " _(VALUE) "(%rsp), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define AND_RBP_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X23, 0XA8 # andq " _(VALUE) "(%r8), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define AND_RBP_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X23, 0XA9 # andq " _(VALUE) "(%r9), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define AND_RBP_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X23, 0XAA # andq " _(VALUE) "(%r10), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define AND_RBP_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X23, 0XAB # andq " _(VALUE) "(%r11), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define AND_RBP_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X23, 0XAC, 0X24 # andq " _(VALUE) "(%r12), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define AND_RBP_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X23, 0XAD # andq " _(VALUE) "(%r13), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define AND_RBP_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X23, 0XAE # andq " _(VALUE) "(%r14), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define AND_RBP_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X23, 0XAF # andq " _(VALUE) "(%r15), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define AND_RBP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X23, 0XA8 # andq " _(VALUE) "(%eax), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define AND_RBP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X23, 0XAB # andq " _(VALUE) "(%ebx), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define AND_RBP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X23, 0XA9 # andq " _(VALUE) "(%ecx), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define AND_RBP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X23, 0XAA # andq " _(VALUE) "(%edx), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define AND_RBP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X23, 0XAF # andq " _(VALUE) "(%edi), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define AND_RBP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X23, 0XAE # andq " _(VALUE) "(%esi), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define AND_RBP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X23, 0XAD # andq " _(VALUE) "(%ebp), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define AND_RBP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X23, 0XAC, 0X24 # andq " _(VALUE) "(%esp), %rbp")\
	CMT_ASM(".long " _(VALUE))

#define AND_RSP_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X23, 0XA0 # andq " _(VALUE) "(%rax), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define AND_RSP_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X23, 0XA3 # andq " _(VALUE) "(%rbx), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define AND_RSP_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X23, 0XA1 # andq " _(VALUE) "(%rcx), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define AND_RSP_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X23, 0XA2 # andq " _(VALUE) "(%rdx), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define AND_RSP_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X23, 0XA7 # andq " _(VALUE) "(%rdi), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define AND_RSP_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X23, 0XA6 # andq " _(VALUE) "(%rsi), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define AND_RSP_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X23, 0XA5 # andq " _(VALUE) "(%rbp), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define AND_RSP_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X23, 0XA4, 0X24 # andq " _(VALUE) "(%rsp), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define AND_RSP_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X23, 0XA0 # andq " _(VALUE) "(%r8), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define AND_RSP_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X23, 0XA1 # andq " _(VALUE) "(%r9), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define AND_RSP_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X23, 0XA2 # andq " _(VALUE) "(%r10), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define AND_RSP_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X23, 0XA3 # andq " _(VALUE) "(%r11), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define AND_RSP_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X23, 0XA4, 0X24 # andq " _(VALUE) "(%r12), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define AND_RSP_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X23, 0XA5 # andq " _(VALUE) "(%r13), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define AND_RSP_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X23, 0XA6 # andq " _(VALUE) "(%r14), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define AND_RSP_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X23, 0XA7 # andq " _(VALUE) "(%r15), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define AND_RSP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X23, 0XA0 # andq " _(VALUE) "(%eax), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define AND_RSP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X23, 0XA3 # andq " _(VALUE) "(%ebx), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define AND_RSP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X23, 0XA1 # andq " _(VALUE) "(%ecx), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define AND_RSP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X23, 0XA2 # andq " _(VALUE) "(%edx), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define AND_RSP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X23, 0XA7 # andq " _(VALUE) "(%edi), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define AND_RSP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X23, 0XA6 # andq " _(VALUE) "(%esi), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define AND_RSP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X23, 0XA5 # andq " _(VALUE) "(%ebp), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define AND_RSP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X23, 0XA4, 0X24 # andq " _(VALUE) "(%esp), %rsp")\
	CMT_ASM(".long " _(VALUE))

#define AND_R8_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X23, 0X80 # andq " _(VALUE) "(%rax), %r8")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X23, 0X83 # andq " _(VALUE) "(%rbx), %r8")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X23, 0X81 # andq " _(VALUE) "(%rcx), %r8")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X23, 0X82 # andq " _(VALUE) "(%rdx), %r8")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X23, 0X87 # andq " _(VALUE) "(%rdi), %r8")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X23, 0X86 # andq " _(VALUE) "(%rsi), %r8")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X23, 0X85 # andq " _(VALUE) "(%rbp), %r8")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X23, 0X84, 0X24 # andq " _(VALUE) "(%rsp), %r8")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X23, 0X80 # andq " _(VALUE) "(%r8), %r8")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X23, 0X81 # andq " _(VALUE) "(%r9), %r8")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X23, 0X82 # andq " _(VALUE) "(%r10), %r8")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X23, 0X83 # andq " _(VALUE) "(%r11), %r8")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X23, 0X84, 0X24 # andq " _(VALUE) "(%r12), %r8")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X23, 0X85 # andq " _(VALUE) "(%r13), %r8")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X23, 0X86 # andq " _(VALUE) "(%r14), %r8")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X23, 0X87 # andq " _(VALUE) "(%r15), %r8")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X23, 0X80 # andq " _(VALUE) "(%eax), %r8")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X23, 0X83 # andq " _(VALUE) "(%ebx), %r8")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X23, 0X81 # andq " _(VALUE) "(%ecx), %r8")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X23, 0X82 # andq " _(VALUE) "(%edx), %r8")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X23, 0X87 # andq " _(VALUE) "(%edi), %r8")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X23, 0X86 # andq " _(VALUE) "(%esi), %r8")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X23, 0X85 # andq " _(VALUE) "(%ebp), %r8")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X23, 0X84, 0X24 # andq " _(VALUE) "(%esp), %r8")\
	CMT_ASM(".long " _(VALUE))

#define AND_R9_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X23, 0X88 # andq " _(VALUE) "(%rax), %r9")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X23, 0X8B # andq " _(VALUE) "(%rbx), %r9")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X23, 0X89 # andq " _(VALUE) "(%rcx), %r9")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X23, 0X8A # andq " _(VALUE) "(%rdx), %r9")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X23, 0X8F # andq " _(VALUE) "(%rdi), %r9")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X23, 0X8E # andq " _(VALUE) "(%rsi), %r9")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X23, 0X8D # andq " _(VALUE) "(%rbp), %r9")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X23, 0X8C, 0X24 # andq " _(VALUE) "(%rsp), %r9")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X23, 0X88 # andq " _(VALUE) "(%r8), %r9")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X23, 0X89 # andq " _(VALUE) "(%r9), %r9")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X23, 0X8A # andq " _(VALUE) "(%r10), %r9")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X23, 0X8B # andq " _(VALUE) "(%r11), %r9")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X23, 0X8C, 0X24 # andq " _(VALUE) "(%r12), %r9")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X23, 0X8D # andq " _(VALUE) "(%r13), %r9")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X23, 0X8E # andq " _(VALUE) "(%r14), %r9")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X23, 0X8F # andq " _(VALUE) "(%r15), %r9")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X23, 0X88 # andq " _(VALUE) "(%eax), %r9")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X23, 0X8B # andq " _(VALUE) "(%ebx), %r9")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X23, 0X89 # andq " _(VALUE) "(%ecx), %r9")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X23, 0X8A # andq " _(VALUE) "(%edx), %r9")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X23, 0X8F # andq " _(VALUE) "(%edi), %r9")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X23, 0X8E # andq " _(VALUE) "(%esi), %r9")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X23, 0X8D # andq " _(VALUE) "(%ebp), %r9")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X23, 0X8C, 0X24 # andq " _(VALUE) "(%esp), %r9")\
	CMT_ASM(".long " _(VALUE))

#define AND_R10_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X23, 0X90 # andq " _(VALUE) "(%rax), %r10")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X23, 0X93 # andq " _(VALUE) "(%rbx), %r10")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X23, 0X91 # andq " _(VALUE) "(%rcx), %r10")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X23, 0X92 # andq " _(VALUE) "(%rdx), %r10")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X23, 0X97 # andq " _(VALUE) "(%rdi), %r10")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X23, 0X96 # andq " _(VALUE) "(%rsi), %r10")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X23, 0X95 # andq " _(VALUE) "(%rbp), %r10")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X23, 0X94, 0X24 # andq " _(VALUE) "(%rsp), %r10")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X23, 0X90 # andq " _(VALUE) "(%r8), %r10")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X23, 0X91 # andq " _(VALUE) "(%r9), %r10")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X23, 0X92 # andq " _(VALUE) "(%r10), %r10")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X23, 0X93 # andq " _(VALUE) "(%r11), %r10")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X23, 0X94, 0X24 # andq " _(VALUE) "(%r12), %r10")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X23, 0X95 # andq " _(VALUE) "(%r13), %r10")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X23, 0X96 # andq " _(VALUE) "(%r14), %r10")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X23, 0X97 # andq " _(VALUE) "(%r15), %r10")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X23, 0X90 # andq " _(VALUE) "(%eax), %r10")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X23, 0X93 # andq " _(VALUE) "(%ebx), %r10")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X23, 0X91 # andq " _(VALUE) "(%ecx), %r10")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X23, 0X92 # andq " _(VALUE) "(%edx), %r10")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X23, 0X97 # andq " _(VALUE) "(%edi), %r10")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X23, 0X96 # andq " _(VALUE) "(%esi), %r10")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X23, 0X95 # andq " _(VALUE) "(%ebp), %r10")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X23, 0X94, 0X24 # andq " _(VALUE) "(%esp), %r10")\
	CMT_ASM(".long " _(VALUE))

#define AND_R11_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X23, 0X98 # andq " _(VALUE) "(%rax), %r11")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X23, 0X9B # andq " _(VALUE) "(%rbx), %r11")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X23, 0X99 # andq " _(VALUE) "(%rcx), %r11")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X23, 0X9A # andq " _(VALUE) "(%rdx), %r11")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X23, 0X9F # andq " _(VALUE) "(%rdi), %r11")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X23, 0X9E # andq " _(VALUE) "(%rsi), %r11")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X23, 0X9D # andq " _(VALUE) "(%rbp), %r11")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X23, 0X9C, 0X24 # andq " _(VALUE) "(%rsp), %r11")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X23, 0X98 # andq " _(VALUE) "(%r8), %r11")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X23, 0X99 # andq " _(VALUE) "(%r9), %r11")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X23, 0X9A # andq " _(VALUE) "(%r10), %r11")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X23, 0X9B # andq " _(VALUE) "(%r11), %r11")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X23, 0X9C, 0X24 # andq " _(VALUE) "(%r12), %r11")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X23, 0X9D # andq " _(VALUE) "(%r13), %r11")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X23, 0X9E # andq " _(VALUE) "(%r14), %r11")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X23, 0X9F # andq " _(VALUE) "(%r15), %r11")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X23, 0X98 # andq " _(VALUE) "(%eax), %r11")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X23, 0X9B # andq " _(VALUE) "(%ebx), %r11")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X23, 0X99 # andq " _(VALUE) "(%ecx), %r11")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X23, 0X9A # andq " _(VALUE) "(%edx), %r11")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X23, 0X9F # andq " _(VALUE) "(%edi), %r11")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X23, 0X9E # andq " _(VALUE) "(%esi), %r11")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X23, 0X9D # andq " _(VALUE) "(%ebp), %r11")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X23, 0X9C, 0X24 # andq " _(VALUE) "(%esp), %r11")\
	CMT_ASM(".long " _(VALUE))

#define AND_R12_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X23, 0XA0 # andq " _(VALUE) "(%rax), %r12")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X23, 0XA3 # andq " _(VALUE) "(%rbx), %r12")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X23, 0XA1 # andq " _(VALUE) "(%rcx), %r12")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X23, 0XA2 # andq " _(VALUE) "(%rdx), %r12")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X23, 0XA7 # andq " _(VALUE) "(%rdi), %r12")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X23, 0XA6 # andq " _(VALUE) "(%rsi), %r12")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X23, 0XA5 # andq " _(VALUE) "(%rbp), %r12")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X23, 0XA4, 0X24 # andq " _(VALUE) "(%rsp), %r12")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X23, 0XA0 # andq " _(VALUE) "(%r8), %r12")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X23, 0XA1 # andq " _(VALUE) "(%r9), %r12")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X23, 0XA2 # andq " _(VALUE) "(%r10), %r12")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X23, 0XA3 # andq " _(VALUE) "(%r11), %r12")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X23, 0XA4, 0X24 # andq " _(VALUE) "(%r12), %r12")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X23, 0XA5 # andq " _(VALUE) "(%r13), %r12")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X23, 0XA6 # andq " _(VALUE) "(%r14), %r12")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X23, 0XA7 # andq " _(VALUE) "(%r15), %r12")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X23, 0XA0 # andq " _(VALUE) "(%eax), %r12")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X23, 0XA3 # andq " _(VALUE) "(%ebx), %r12")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X23, 0XA1 # andq " _(VALUE) "(%ecx), %r12")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X23, 0XA2 # andq " _(VALUE) "(%edx), %r12")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X23, 0XA7 # andq " _(VALUE) "(%edi), %r12")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X23, 0XA6 # andq " _(VALUE) "(%esi), %r12")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X23, 0XA5 # andq " _(VALUE) "(%ebp), %r12")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X23, 0XA4, 0X24 # andq " _(VALUE) "(%esp), %r12")\
	CMT_ASM(".long " _(VALUE))

#define AND_R13_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X23, 0XA8 # andq " _(VALUE) "(%rax), %r13")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X23, 0XAB # andq " _(VALUE) "(%rbx), %r13")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X23, 0XA9 # andq " _(VALUE) "(%rcx), %r13")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X23, 0XAA # andq " _(VALUE) "(%rdx), %r13")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X23, 0XAF # andq " _(VALUE) "(%rdi), %r13")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X23, 0XAE # andq " _(VALUE) "(%rsi), %r13")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X23, 0XAD # andq " _(VALUE) "(%rbp), %r13")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X23, 0XAC, 0X24 # andq " _(VALUE) "(%rsp), %r13")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X23, 0XA8 # andq " _(VALUE) "(%r8), %r13")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X23, 0XA9 # andq " _(VALUE) "(%r9), %r13")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X23, 0XAA # andq " _(VALUE) "(%r10), %r13")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X23, 0XAB # andq " _(VALUE) "(%r11), %r13")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X23, 0XAC, 0X24 # andq " _(VALUE) "(%r12), %r13")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X23, 0XAD # andq " _(VALUE) "(%r13), %r13")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X23, 0XAE # andq " _(VALUE) "(%r14), %r13")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X23, 0XAF # andq " _(VALUE) "(%r15), %r13")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X23, 0XA8 # andq " _(VALUE) "(%eax), %r13")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X23, 0XAB # andq " _(VALUE) "(%ebx), %r13")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X23, 0XA9 # andq " _(VALUE) "(%ecx), %r13")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X23, 0XAA # andq " _(VALUE) "(%edx), %r13")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X23, 0XAF # andq " _(VALUE) "(%edi), %r13")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X23, 0XAE # andq " _(VALUE) "(%esi), %r13")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X23, 0XAD # andq " _(VALUE) "(%ebp), %r13")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X23, 0XAC, 0X24 # andq " _(VALUE) "(%esp), %r13")\
	CMT_ASM(".long " _(VALUE))

#define AND_R14_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X23, 0XB0 # andq " _(VALUE) "(%rax), %r14")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X23, 0XB3 # andq " _(VALUE) "(%rbx), %r14")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X23, 0XB1 # andq " _(VALUE) "(%rcx), %r14")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X23, 0XB2 # andq " _(VALUE) "(%rdx), %r14")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X23, 0XB7 # andq " _(VALUE) "(%rdi), %r14")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X23, 0XB6 # andq " _(VALUE) "(%rsi), %r14")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X23, 0XB5 # andq " _(VALUE) "(%rbp), %r14")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X23, 0XB4, 0X24 # andq " _(VALUE) "(%rsp), %r14")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X23, 0XB0 # andq " _(VALUE) "(%r8), %r14")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X23, 0XB1 # andq " _(VALUE) "(%r9), %r14")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X23, 0XB2 # andq " _(VALUE) "(%r10), %r14")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X23, 0XB3 # andq " _(VALUE) "(%r11), %r14")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X23, 0XB4, 0X24 # andq " _(VALUE) "(%r12), %r14")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X23, 0XB5 # andq " _(VALUE) "(%r13), %r14")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X23, 0XB6 # andq " _(VALUE) "(%r14), %r14")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X23, 0XB7 # andq " _(VALUE) "(%r15), %r14")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X23, 0XB0 # andq " _(VALUE) "(%eax), %r14")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X23, 0XB3 # andq " _(VALUE) "(%ebx), %r14")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X23, 0XB1 # andq " _(VALUE) "(%ecx), %r14")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X23, 0XB2 # andq " _(VALUE) "(%edx), %r14")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X23, 0XB7 # andq " _(VALUE) "(%edi), %r14")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X23, 0XB6 # andq " _(VALUE) "(%esi), %r14")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X23, 0XB5 # andq " _(VALUE) "(%ebp), %r14")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X23, 0XB4, 0X24 # andq " _(VALUE) "(%esp), %r14")\
	CMT_ASM(".long " _(VALUE))

#define AND_R15_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X23, 0XB8 # andq " _(VALUE) "(%rax), %r15")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X23, 0XBB # andq " _(VALUE) "(%rbx), %r15")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X23, 0XB9 # andq " _(VALUE) "(%rcx), %r15")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X23, 0XBA # andq " _(VALUE) "(%rdx), %r15")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X23, 0XBF # andq " _(VALUE) "(%rdi), %r15")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X23, 0XBE # andq " _(VALUE) "(%rsi), %r15")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X23, 0XBD # andq " _(VALUE) "(%rbp), %r15")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X23, 0XBC, 0X24 # andq " _(VALUE) "(%rsp), %r15")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X23, 0XB8 # andq " _(VALUE) "(%r8), %r15")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X23, 0XB9 # andq " _(VALUE) "(%r9), %r15")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X23, 0XBA # andq " _(VALUE) "(%r10), %r15")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X23, 0XBB # andq " _(VALUE) "(%r11), %r15")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X23, 0XBC, 0X24 # andq " _(VALUE) "(%r12), %r15")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X23, 0XBD # andq " _(VALUE) "(%r13), %r15")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X23, 0XBE # andq " _(VALUE) "(%r14), %r15")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X23, 0XBF # andq " _(VALUE) "(%r15), %r15")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X23, 0XB8 # andq " _(VALUE) "(%eax), %r15")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X23, 0XBB # andq " _(VALUE) "(%ebx), %r15")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X23, 0XB9 # andq " _(VALUE) "(%ecx), %r15")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X23, 0XBA # andq " _(VALUE) "(%edx), %r15")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X23, 0XBF # andq " _(VALUE) "(%edi), %r15")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X23, 0XBE # andq " _(VALUE) "(%esi), %r15")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X23, 0XBD # andq " _(VALUE) "(%ebp), %r15")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X23, 0XBC, 0X24 # andq " _(VALUE) "(%esp), %r15")\
	CMT_ASM(".long " _(VALUE))

#define AND_RAX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X21, 0X80 # andq %rax, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RAX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X21, 0X83 # andq %rax, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RAX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X21, 0X81 # andq %rax, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RAX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X21, 0X82 # andq %rax, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RAX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X21, 0X87 # andq %rax, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RAX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X21, 0X86 # andq %rax, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RAX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X21, 0X85 # andq %rax, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RAX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X21, 0X84, 0X24 # andq %rax, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RAX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X21, 0X80 # andq %rax, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RAX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X21, 0X81 # andq %rax, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RAX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X21, 0X82 # andq %rax, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RAX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X21, 0X83 # andq %rax, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RAX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X21, 0X84, 0X24 # andq %rax, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RAX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X21, 0X85 # andq %rax, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RAX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X21, 0X86 # andq %rax, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RAX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X21, 0X87 # andq %rax, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RAX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X21, 0X80 # andq %rax, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RAX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X21, 0X83 # andq %rax, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RAX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X21, 0X81 # andq %rax, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RAX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X21, 0X82 # andq %rax, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RAX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X21, 0X87 # andq %rax, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RAX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X21, 0X86 # andq %rax, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RAX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X21, 0X85 # andq %rax, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RAX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X21, 0X84, 0X24 # andq %rax, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define AND_RBX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X21, 0X98 # andq %rbx, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RBX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X21, 0X9B # andq %rbx, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RBX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X21, 0X99 # andq %rbx, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RBX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X21, 0X9A # andq %rbx, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RBX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X21, 0X9F # andq %rbx, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RBX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X21, 0X9E # andq %rbx, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RBX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X21, 0X9D # andq %rbx, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RBX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X21, 0X9C, 0X24 # andq %rbx, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RBX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X21, 0X98 # andq %rbx, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RBX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X21, 0X99 # andq %rbx, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RBX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X21, 0X9A # andq %rbx, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RBX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X21, 0X9B # andq %rbx, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RBX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X21, 0X9C, 0X24 # andq %rbx, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RBX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X21, 0X9D # andq %rbx, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RBX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X21, 0X9E # andq %rbx, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RBX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X21, 0X9F # andq %rbx, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RBX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X21, 0X98 # andq %rbx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RBX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X21, 0X9B # andq %rbx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RBX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X21, 0X99 # andq %rbx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RBX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X21, 0X9A # andq %rbx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RBX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X21, 0X9F # andq %rbx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RBX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X21, 0X9E # andq %rbx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RBX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X21, 0X9D # andq %rbx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RBX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X21, 0X9C, 0X24 # andq %rbx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define AND_RCX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X21, 0X88 # andq %rcx, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RCX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X21, 0X8B # andq %rcx, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RCX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X21, 0X89 # andq %rcx, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RCX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X21, 0X8A # andq %rcx, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RCX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X21, 0X8F # andq %rcx, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RCX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X21, 0X8E # andq %rcx, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RCX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X21, 0X8D # andq %rcx, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RCX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X21, 0X8C, 0X24 # andq %rcx, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RCX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X21, 0X88 # andq %rcx, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RCX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X21, 0X89 # andq %rcx, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RCX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X21, 0X8A # andq %rcx, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RCX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X21, 0X8B # andq %rcx, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RCX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X21, 0X8C, 0X24 # andq %rcx, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RCX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X21, 0X8D # andq %rcx, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RCX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X21, 0X8E # andq %rcx, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RCX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X21, 0X8F # andq %rcx, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RCX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X21, 0X88 # andq %rcx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RCX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X21, 0X8B # andq %rcx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RCX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X21, 0X89 # andq %rcx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RCX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X21, 0X8A # andq %rcx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RCX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X21, 0X8F # andq %rcx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RCX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X21, 0X8E # andq %rcx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RCX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X21, 0X8D # andq %rcx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RCX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X21, 0X8C, 0X24 # andq %rcx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define AND_RDX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X21, 0X90 # andq %rdx, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RDX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X21, 0X93 # andq %rdx, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RDX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X21, 0X91 # andq %rdx, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RDX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X21, 0X92 # andq %rdx, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RDX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X21, 0X97 # andq %rdx, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RDX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X21, 0X96 # andq %rdx, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RDX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X21, 0X95 # andq %rdx, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RDX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X21, 0X94, 0X24 # andq %rdx, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RDX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X21, 0X90 # andq %rdx, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RDX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X21, 0X91 # andq %rdx, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RDX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X21, 0X92 # andq %rdx, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RDX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X21, 0X93 # andq %rdx, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RDX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X21, 0X94, 0X24 # andq %rdx, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RDX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X21, 0X95 # andq %rdx, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RDX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X21, 0X96 # andq %rdx, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RDX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X21, 0X97 # andq %rdx, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RDX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X21, 0X90 # andq %rdx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RDX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X21, 0X93 # andq %rdx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RDX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X21, 0X91 # andq %rdx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RDX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X21, 0X92 # andq %rdx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RDX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X21, 0X97 # andq %rdx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RDX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X21, 0X96 # andq %rdx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RDX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X21, 0X95 # andq %rdx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RDX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X21, 0X94, 0X24 # andq %rdx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define AND_RDI_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X21, 0XB8 # andq %rdi, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RDI_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X21, 0XBB # andq %rdi, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RDI_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X21, 0XB9 # andq %rdi, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RDI_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X21, 0XBA # andq %rdi, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RDI_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X21, 0XBF # andq %rdi, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RDI_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X21, 0XBE # andq %rdi, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RDI_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X21, 0XBD # andq %rdi, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RDI_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X21, 0XBC, 0X24 # andq %rdi, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RDI_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X21, 0XB8 # andq %rdi, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RDI_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X21, 0XB9 # andq %rdi, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RDI_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X21, 0XBA # andq %rdi, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RDI_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X21, 0XBB # andq %rdi, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RDI_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X21, 0XBC, 0X24 # andq %rdi, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RDI_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X21, 0XBD # andq %rdi, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RDI_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X21, 0XBE # andq %rdi, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RDI_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X21, 0XBF # andq %rdi, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RDI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X21, 0XB8 # andq %rdi, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RDI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X21, 0XBB # andq %rdi, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RDI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X21, 0XB9 # andq %rdi, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RDI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X21, 0XBA # andq %rdi, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RDI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X21, 0XBF # andq %rdi, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RDI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X21, 0XBE # andq %rdi, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RDI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X21, 0XBD # andq %rdi, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RDI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X21, 0XBC, 0X24 # andq %rdi, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define AND_RSI_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X21, 0XB0 # andq %rsi, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RSI_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X21, 0XB3 # andq %rsi, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RSI_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X21, 0XB1 # andq %rsi, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RSI_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X21, 0XB2 # andq %rsi, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RSI_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X21, 0XB7 # andq %rsi, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RSI_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X21, 0XB6 # andq %rsi, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RSI_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X21, 0XB5 # andq %rsi, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RSI_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X21, 0XB4, 0X24 # andq %rsi, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RSI_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X21, 0XB0 # andq %rsi, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RSI_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X21, 0XB1 # andq %rsi, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RSI_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X21, 0XB2 # andq %rsi, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RSI_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X21, 0XB3 # andq %rsi, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RSI_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X21, 0XB4, 0X24 # andq %rsi, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RSI_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X21, 0XB5 # andq %rsi, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RSI_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X21, 0XB6 # andq %rsi, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RSI_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X21, 0XB7 # andq %rsi, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RSI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X21, 0XB0 # andq %rsi, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RSI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X21, 0XB3 # andq %rsi, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RSI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X21, 0XB1 # andq %rsi, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RSI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X21, 0XB2 # andq %rsi, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RSI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X21, 0XB7 # andq %rsi, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RSI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X21, 0XB6 # andq %rsi, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RSI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X21, 0XB5 # andq %rsi, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RSI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X21, 0XB4, 0X24 # andq %rsi, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define AND_RBP_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X21, 0XA8 # andq %rbp, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RBP_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X21, 0XAB # andq %rbp, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RBP_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X21, 0XA9 # andq %rbp, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RBP_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X21, 0XAA # andq %rbp, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RBP_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X21, 0XAF # andq %rbp, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RBP_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X21, 0XAE # andq %rbp, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RBP_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X21, 0XAD # andq %rbp, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RBP_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X21, 0XAC, 0X24 # andq %rbp, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RBP_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X21, 0XA8 # andq %rbp, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RBP_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X21, 0XA9 # andq %rbp, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RBP_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X21, 0XAA # andq %rbp, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RBP_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X21, 0XAB # andq %rbp, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RBP_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X21, 0XAC, 0X24 # andq %rbp, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RBP_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X21, 0XAD # andq %rbp, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RBP_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X21, 0XAE # andq %rbp, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RBP_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X21, 0XAF # andq %rbp, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RBP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X21, 0XA8 # andq %rbp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RBP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X21, 0XAB # andq %rbp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RBP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X21, 0XA9 # andq %rbp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RBP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X21, 0XAA # andq %rbp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RBP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X21, 0XAF # andq %rbp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RBP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X21, 0XAE # andq %rbp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RBP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X21, 0XAD # andq %rbp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RBP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X21, 0XAC, 0X24 # andq %rbp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define AND_RSP_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X21, 0XA0 # andq %rsp, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RSP_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X21, 0XA3 # andq %rsp, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RSP_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X21, 0XA1 # andq %rsp, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RSP_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X21, 0XA2 # andq %rsp, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RSP_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X21, 0XA7 # andq %rsp, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RSP_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X21, 0XA6 # andq %rsp, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RSP_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X21, 0XA5 # andq %rsp, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RSP_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X21, 0XA4, 0X24 # andq %rsp, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RSP_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X21, 0XA0 # andq %rsp, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RSP_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X21, 0XA1 # andq %rsp, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RSP_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X21, 0XA2 # andq %rsp, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RSP_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X21, 0XA3 # andq %rsp, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RSP_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X21, 0XA4, 0X24 # andq %rsp, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RSP_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X21, 0XA5 # andq %rsp, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RSP_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X21, 0XA6 # andq %rsp, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RSP_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X21, 0XA7 # andq %rsp, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RSP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X21, 0XA0 # andq %rsp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RSP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X21, 0XA3 # andq %rsp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RSP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X21, 0XA1 # andq %rsp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RSP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X21, 0XA2 # andq %rsp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RSP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X21, 0XA7 # andq %rsp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RSP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X21, 0XA6 # andq %rsp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RSP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X21, 0XA5 # andq %rsp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_RSP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X21, 0XA4, 0X24 # andq %rsp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define AND_R8_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X21, 0X80 # andq %r8, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X21, 0X83 # andq %r8, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X21, 0X81 # andq %r8, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X21, 0X82 # andq %r8, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X21, 0X87 # andq %r8, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X21, 0X86 # andq %r8, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X21, 0X85 # andq %r8, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X21, 0X84, 0X24 # andq %r8, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X21, 0X80 # andq %r8, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X21, 0X81 # andq %r8, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X21, 0X82 # andq %r8, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X21, 0X83 # andq %r8, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X21, 0X84, 0X24 # andq %r8, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X21, 0X85 # andq %r8, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X21, 0X86 # andq %r8, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X21, 0X87 # andq %r8, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X21, 0X80 # andq %r8, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X21, 0X83 # andq %r8, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X21, 0X81 # andq %r8, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X21, 0X82 # andq %r8, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X21, 0X87 # andq %r8, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X21, 0X86 # andq %r8, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X21, 0X85 # andq %r8, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X21, 0X84, 0X24 # andq %r8, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define AND_R9_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X21, 0X88 # andq %r9, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X21, 0X8B # andq %r9, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X21, 0X89 # andq %r9, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X21, 0X8A # andq %r9, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X21, 0X8F # andq %r9, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X21, 0X8E # andq %r9, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X21, 0X8D # andq %r9, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X21, 0X8C, 0X24 # andq %r9, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X21, 0X88 # andq %r9, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X21, 0X89 # andq %r9, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X21, 0X8A # andq %r9, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X21, 0X8B # andq %r9, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X21, 0X8C, 0X24 # andq %r9, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X21, 0X8D # andq %r9, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X21, 0X8E # andq %r9, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X21, 0X8F # andq %r9, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X21, 0X88 # andq %r9, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X21, 0X8B # andq %r9, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X21, 0X89 # andq %r9, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X21, 0X8A # andq %r9, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X21, 0X8F # andq %r9, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X21, 0X8E # andq %r9, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X21, 0X8D # andq %r9, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X21, 0X8C, 0X24 # andq %r9, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define AND_R10_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X21, 0X90 # andq %r10, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X21, 0X93 # andq %r10, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X21, 0X91 # andq %r10, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X21, 0X92 # andq %r10, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X21, 0X97 # andq %r10, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X21, 0X96 # andq %r10, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X21, 0X95 # andq %r10, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X21, 0X94, 0X24 # andq %r10, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X21, 0X90 # andq %r10, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X21, 0X91 # andq %r10, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X21, 0X92 # andq %r10, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X21, 0X93 # andq %r10, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X21, 0X94, 0X24 # andq %r10, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X21, 0X95 # andq %r10, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X21, 0X96 # andq %r10, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X21, 0X97 # andq %r10, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X21, 0X90 # andq %r10, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X21, 0X93 # andq %r10, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X21, 0X91 # andq %r10, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X21, 0X92 # andq %r10, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X21, 0X97 # andq %r10, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X21, 0X96 # andq %r10, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X21, 0X95 # andq %r10, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X21, 0X94, 0X24 # andq %r10, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define AND_R11_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X21, 0X98 # andq %r11, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X21, 0X9B # andq %r11, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X21, 0X99 # andq %r11, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X21, 0X9A # andq %r11, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X21, 0X9F # andq %r11, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X21, 0X9E # andq %r11, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X21, 0X9D # andq %r11, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X21, 0X9C, 0X24 # andq %r11, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X21, 0X98 # andq %r11, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X21, 0X99 # andq %r11, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X21, 0X9A # andq %r11, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X21, 0X9B # andq %r11, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X21, 0X9C, 0X24 # andq %r11, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X21, 0X9D # andq %r11, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X21, 0X9E # andq %r11, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X21, 0X9F # andq %r11, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X21, 0X98 # andq %r11, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X21, 0X9B # andq %r11, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X21, 0X99 # andq %r11, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X21, 0X9A # andq %r11, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X21, 0X9F # andq %r11, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X21, 0X9E # andq %r11, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X21, 0X9D # andq %r11, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X21, 0X9C, 0X24 # andq %r11, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define AND_R12_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X21, 0XA0 # andq %r12, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X21, 0XA3 # andq %r12, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X21, 0XA1 # andq %r12, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X21, 0XA2 # andq %r12, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X21, 0XA7 # andq %r12, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X21, 0XA6 # andq %r12, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X21, 0XA5 # andq %r12, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X21, 0XA4, 0X24 # andq %r12, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X21, 0XA0 # andq %r12, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X21, 0XA1 # andq %r12, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X21, 0XA2 # andq %r12, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X21, 0XA3 # andq %r12, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X21, 0XA4, 0X24 # andq %r12, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X21, 0XA5 # andq %r12, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X21, 0XA6 # andq %r12, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X21, 0XA7 # andq %r12, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X21, 0XA0 # andq %r12, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X21, 0XA3 # andq %r12, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X21, 0XA1 # andq %r12, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X21, 0XA2 # andq %r12, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X21, 0XA7 # andq %r12, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X21, 0XA6 # andq %r12, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X21, 0XA5 # andq %r12, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X21, 0XA4, 0X24 # andq %r12, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define AND_R13_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X21, 0XA8 # andq %r13, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X21, 0XAB # andq %r13, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X21, 0XA9 # andq %r13, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X21, 0XAA # andq %r13, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X21, 0XAF # andq %r13, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X21, 0XAE # andq %r13, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X21, 0XAD # andq %r13, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X21, 0XAC, 0X24 # andq %r13, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X21, 0XA8 # andq %r13, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X21, 0XA9 # andq %r13, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X21, 0XAA # andq %r13, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X21, 0XAB # andq %r13, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X21, 0XAC, 0X24 # andq %r13, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X21, 0XAD # andq %r13, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X21, 0XAE # andq %r13, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X21, 0XAF # andq %r13, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X21, 0XA8 # andq %r13, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X21, 0XAB # andq %r13, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X21, 0XA9 # andq %r13, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X21, 0XAA # andq %r13, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X21, 0XAF # andq %r13, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X21, 0XAE # andq %r13, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X21, 0XAD # andq %r13, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X21, 0XAC, 0X24 # andq %r13, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define AND_R14_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X21, 0XB0 # andq %r14, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X21, 0XB3 # andq %r14, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X21, 0XB1 # andq %r14, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X21, 0XB2 # andq %r14, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X21, 0XB7 # andq %r14, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X21, 0XB6 # andq %r14, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X21, 0XB5 # andq %r14, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X21, 0XB4, 0X24 # andq %r14, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X21, 0XB0 # andq %r14, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X21, 0XB1 # andq %r14, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X21, 0XB2 # andq %r14, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X21, 0XB3 # andq %r14, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X21, 0XB4, 0X24 # andq %r14, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X21, 0XB5 # andq %r14, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X21, 0XB6 # andq %r14, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X21, 0XB7 # andq %r14, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X21, 0XB0 # andq %r14, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X21, 0XB3 # andq %r14, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X21, 0XB1 # andq %r14, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X21, 0XB2 # andq %r14, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X21, 0XB7 # andq %r14, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X21, 0XB6 # andq %r14, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X21, 0XB5 # andq %r14, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X21, 0XB4, 0X24 # andq %r14, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define AND_R15_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X21, 0XB8 # andq %r15, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X21, 0XBB # andq %r15, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X21, 0XB9 # andq %r15, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X21, 0XBA # andq %r15, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X21, 0XBF # andq %r15, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X21, 0XBE # andq %r15, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X21, 0XBD # andq %r15, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X21, 0XBC, 0X24 # andq %r15, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X21, 0XB8 # andq %r15, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X21, 0XB9 # andq %r15, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X21, 0XBA # andq %r15, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X21, 0XBB # andq %r15, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X21, 0XBC, 0X24 # andq %r15, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X21, 0XBD # andq %r15, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X21, 0XBE # andq %r15, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X21, 0XBF # andq %r15, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X21, 0XB8 # andq %r15, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X21, 0XBB # andq %r15, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X21, 0XB9 # andq %r15, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X21, 0XBA # andq %r15, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X21, 0XBF # andq %r15, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X21, 0XBE # andq %r15, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X21, 0XBD # andq %r15, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X21, 0XBC, 0X24 # andq %r15, " _(VALUE) "(%esp)")\
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
