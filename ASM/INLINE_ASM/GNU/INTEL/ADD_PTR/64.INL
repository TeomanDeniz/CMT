#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************* [v] 64-BIT MEMORY [v] ************************** */
#define ADD_RAX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X03, 0X04, 0X25 # addq (" _(VALUE) "), %rax")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RBX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X03, 0X1C, 0X25 # addq (" _(VALUE) "), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RCX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X03, 0X0C, 0X25 # addq (" _(VALUE) "), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RDX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X03, 0X14, 0X25 # addq (" _(VALUE) "), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RDI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X03, 0X3C, 0X25 # addq (" _(VALUE) "), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RSI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X03, 0X34, 0X25 # addq (" _(VALUE) "), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RBP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X03, 0X2C, 0X25 # addq (" _(VALUE) "), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RSP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X03, 0X24, 0X25 # addq (" _(VALUE) "), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X03, 0X04, 0X25 # addq (" _(VALUE) "), %r8")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X03, 0X0C, 0X25 # addq (" _(VALUE) "), %r9")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X03, 0X14, 0X25 # addq (" _(VALUE) "), %r10")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X03, 0X1C, 0X25 # addq (" _(VALUE) "), %r11")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X03, 0X24, 0X25 # addq (" _(VALUE) "), %r12")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X03, 0X2C, 0X25 # addq (" _(VALUE) "), %r13")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X03, 0X34, 0X25 # addq (" _(VALUE) "), %r14")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X03, 0X3C, 0X25 # addq (" _(VALUE) "), %r15")\
	CMT_ASM(".long " _(VALUE))

#define ADD_RAX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X01, 0X04, 0X25 # addq %rax, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RBX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X01, 0X1C, 0X25 # addq %rbx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RCX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X01, 0X0C, 0X25 # addq %rcx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RDX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X01, 0X14, 0X25 # addq %rdx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RDI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X01, 0X3C, 0X25 # addq %rdi, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RSI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X01, 0X34, 0X25 # addq %rsi, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RBP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X01, 0X2C, 0X25 # addq %rbp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RSP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X01, 0X24, 0X25 # addq %rsp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X01, 0X04, 0X25 # addq %r8, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X01, 0X0C, 0X25 # addq %r9, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X01, 0X14, 0X25 # addq %r10, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X01, 0X1C, 0X25 # addq %r11, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X01, 0X24, 0X25 # addq %r12, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X01, 0X2C, 0X25 # addq %r13, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X01, 0X34, 0X25 # addq %r14, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X01, 0X3C, 0X25 # addq %r15, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))

#define ADD_RAX_FROM_PTR_RAX CMT_ASM(".byte 0X48, 0X03, 0X00 # addq (%rax), %rax")
#define ADD_RAX_FROM_PTR_RBX CMT_ASM(".byte 0X48, 0X03, 0X03 # addq (%rbx), %rax")
#define ADD_RAX_FROM_PTR_RCX CMT_ASM(".byte 0X48, 0X03, 0X01 # addq (%rcx), %rax")
#define ADD_RAX_FROM_PTR_RDX CMT_ASM(".byte 0X48, 0X03, 0X02 # addq (%rdx), %rax")
#define ADD_RAX_FROM_PTR_RDI CMT_ASM(".byte 0X48, 0X03, 0X07 # addq (%rdi), %rax")
#define ADD_RAX_FROM_PTR_RSI CMT_ASM(".byte 0X48, 0X03, 0X06 # addq (%rsi), %rax")
#define ADD_RAX_FROM_PTR_RBP CMT_ASM(".byte 0X48, 0X03, 0X45, 0X00 # addq (%rbp), %rax")
#define ADD_RAX_FROM_PTR_RSP CMT_ASM(".byte 0X48, 0X03, 0X04, 0X24 # addq (%rsp), %rax")
#define ADD_RAX_FROM_PTR_R8 CMT_ASM(".byte 0X49, 0X03, 0X00 # addq (%r8), %rax")
#define ADD_RAX_FROM_PTR_R9 CMT_ASM(".byte 0X49, 0X03, 0X01 # addq (%r9), %rax")
#define ADD_RAX_FROM_PTR_R10 CMT_ASM(".byte 0X49, 0X03, 0X02 # addq (%r10), %rax")
#define ADD_RAX_FROM_PTR_R11 CMT_ASM(".byte 0X49, 0X03, 0X03 # addq (%r11), %rax")
#define ADD_RAX_FROM_PTR_R12 CMT_ASM(".byte 0X49, 0X03, 0X04, 0X24 # addq (%r12), %rax")
#define ADD_RAX_FROM_PTR_R13 CMT_ASM(".byte 0X49, 0X03, 0X45, 0X00 # addq (%r13), %rax")
#define ADD_RAX_FROM_PTR_R14 CMT_ASM(".byte 0X49, 0X03, 0X06 # addq (%r14), %rax")
#define ADD_RAX_FROM_PTR_R15 CMT_ASM(".byte 0X49, 0X03, 0X07 # addq (%r15), %rax")
#define ADD_RAX_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X03, 0X00 # addq (%eax), %rax")
#define ADD_RAX_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X03, 0X03 # addq (%ebx), %rax")
#define ADD_RAX_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X03, 0X01 # addq (%ecx), %rax")
#define ADD_RAX_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X03, 0X02 # addq (%edx), %rax")
#define ADD_RAX_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X03, 0X07 # addq (%edi), %rax")
#define ADD_RAX_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X03, 0X06 # addq (%esi), %rax")
#define ADD_RAX_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X03, 0X45, 0X00 # addq (%ebp), %rax")
#define ADD_RAX_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X03, 0X04, 0X24 # addq (%esp), %rax")

#define ADD_RBX_FROM_PTR_RAX CMT_ASM(".byte 0X48, 0X03, 0X18 # addq (%rax), %rbx")
#define ADD_RBX_FROM_PTR_RBX CMT_ASM(".byte 0X48, 0X03, 0X1B # addq (%rbx), %rbx")
#define ADD_RBX_FROM_PTR_RCX CMT_ASM(".byte 0X48, 0X03, 0X19 # addq (%rcx), %rbx")
#define ADD_RBX_FROM_PTR_RDX CMT_ASM(".byte 0X48, 0X03, 0X1A # addq (%rdx), %rbx")
#define ADD_RBX_FROM_PTR_RDI CMT_ASM(".byte 0X48, 0X03, 0X1F # addq (%rdi), %rbx")
#define ADD_RBX_FROM_PTR_RSI CMT_ASM(".byte 0X48, 0X03, 0X1E # addq (%rsi), %rbx")
#define ADD_RBX_FROM_PTR_RBP CMT_ASM(".byte 0X48, 0X03, 0X5D, 0X00 # addq (%rbp), %rbx")
#define ADD_RBX_FROM_PTR_RSP CMT_ASM(".byte 0X48, 0X03, 0X1C, 0X24 # addq (%rsp), %rbx")
#define ADD_RBX_FROM_PTR_R8 CMT_ASM(".byte 0X49, 0X03, 0X18 # addq (%r8), %rbx")
#define ADD_RBX_FROM_PTR_R9 CMT_ASM(".byte 0X49, 0X03, 0X19 # addq (%r9), %rbx")
#define ADD_RBX_FROM_PTR_R10 CMT_ASM(".byte 0X49, 0X03, 0X1A # addq (%r10), %rbx")
#define ADD_RBX_FROM_PTR_R11 CMT_ASM(".byte 0X49, 0X03, 0X1B # addq (%r11), %rbx")
#define ADD_RBX_FROM_PTR_R12 CMT_ASM(".byte 0X49, 0X03, 0X1C, 0X24 # addq (%r12), %rbx")
#define ADD_RBX_FROM_PTR_R13 CMT_ASM(".byte 0X49, 0X03, 0X5D, 0X00 # addq (%r13), %rbx")
#define ADD_RBX_FROM_PTR_R14 CMT_ASM(".byte 0X49, 0X03, 0X1E # addq (%r14), %rbx")
#define ADD_RBX_FROM_PTR_R15 CMT_ASM(".byte 0X49, 0X03, 0X1F # addq (%r15), %rbx")
#define ADD_RBX_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X03, 0X18 # addq (%eax), %rbx")
#define ADD_RBX_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X03, 0X1B # addq (%ebx), %rbx")
#define ADD_RBX_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X03, 0X19 # addq (%ecx), %rbx")
#define ADD_RBX_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X03, 0X1A # addq (%edx), %rbx")
#define ADD_RBX_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X03, 0X1F # addq (%edi), %rbx")
#define ADD_RBX_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X03, 0X1E # addq (%esi), %rbx")
#define ADD_RBX_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X03, 0X5D, 0X00 # addq (%ebp), %rbx")
#define ADD_RBX_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X03, 0X1C, 0X24 # addq (%esp), %rbx")

#define ADD_RCX_FROM_PTR_RAX CMT_ASM(".byte 0X48, 0X03, 0X08 # addq (%rax), %rcx")
#define ADD_RCX_FROM_PTR_RBX CMT_ASM(".byte 0X48, 0X03, 0X0B # addq (%rbx), %rcx")
#define ADD_RCX_FROM_PTR_RCX CMT_ASM(".byte 0X48, 0X03, 0X09 # addq (%rcx), %rcx")
#define ADD_RCX_FROM_PTR_RDX CMT_ASM(".byte 0X48, 0X03, 0X0A # addq (%rdx), %rcx")
#define ADD_RCX_FROM_PTR_RDI CMT_ASM(".byte 0X48, 0X03, 0X0F # addq (%rdi), %rcx")
#define ADD_RCX_FROM_PTR_RSI CMT_ASM(".byte 0X48, 0X03, 0X0E # addq (%rsi), %rcx")
#define ADD_RCX_FROM_PTR_RBP CMT_ASM(".byte 0X48, 0X03, 0X4D, 0X00 # addq (%rbp), %rcx")
#define ADD_RCX_FROM_PTR_RSP CMT_ASM(".byte 0X48, 0X03, 0X0C, 0X24 # addq (%rsp), %rcx")
#define ADD_RCX_FROM_PTR_R8 CMT_ASM(".byte 0X49, 0X03, 0X08 # addq (%r8), %rcx")
#define ADD_RCX_FROM_PTR_R9 CMT_ASM(".byte 0X49, 0X03, 0X09 # addq (%r9), %rcx")
#define ADD_RCX_FROM_PTR_R10 CMT_ASM(".byte 0X49, 0X03, 0X0A # addq (%r10), %rcx")
#define ADD_RCX_FROM_PTR_R11 CMT_ASM(".byte 0X49, 0X03, 0X0B # addq (%r11), %rcx")
#define ADD_RCX_FROM_PTR_R12 CMT_ASM(".byte 0X49, 0X03, 0X0C, 0X24 # addq (%r12), %rcx")
#define ADD_RCX_FROM_PTR_R13 CMT_ASM(".byte 0X49, 0X03, 0X4D, 0X00 # addq (%r13), %rcx")
#define ADD_RCX_FROM_PTR_R14 CMT_ASM(".byte 0X49, 0X03, 0X0E # addq (%r14), %rcx")
#define ADD_RCX_FROM_PTR_R15 CMT_ASM(".byte 0X49, 0X03, 0X0F # addq (%r15), %rcx")
#define ADD_RCX_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X03, 0X08 # addq (%eax), %rcx")
#define ADD_RCX_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X03, 0X0B # addq (%ebx), %rcx")
#define ADD_RCX_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X03, 0X09 # addq (%ecx), %rcx")
#define ADD_RCX_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X03, 0X0A # addq (%edx), %rcx")
#define ADD_RCX_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X03, 0X0F # addq (%edi), %rcx")
#define ADD_RCX_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X03, 0X0E # addq (%esi), %rcx")
#define ADD_RCX_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X03, 0X4D, 0X00 # addq (%ebp), %rcx")
#define ADD_RCX_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X03, 0X0C, 0X24 # addq (%esp), %rcx")

#define ADD_RDX_FROM_PTR_RAX CMT_ASM(".byte 0X48, 0X03, 0X10 # addq (%rax), %rdx")
#define ADD_RDX_FROM_PTR_RBX CMT_ASM(".byte 0X48, 0X03, 0X13 # addq (%rbx), %rdx")
#define ADD_RDX_FROM_PTR_RCX CMT_ASM(".byte 0X48, 0X03, 0X11 # addq (%rcx), %rdx")
#define ADD_RDX_FROM_PTR_RDX CMT_ASM(".byte 0X48, 0X03, 0X12 # addq (%rdx), %rdx")
#define ADD_RDX_FROM_PTR_RDI CMT_ASM(".byte 0X48, 0X03, 0X17 # addq (%rdi), %rdx")
#define ADD_RDX_FROM_PTR_RSI CMT_ASM(".byte 0X48, 0X03, 0X16 # addq (%rsi), %rdx")
#define ADD_RDX_FROM_PTR_RBP CMT_ASM(".byte 0X48, 0X03, 0X55, 0X00 # addq (%rbp), %rdx")
#define ADD_RDX_FROM_PTR_RSP CMT_ASM(".byte 0X48, 0X03, 0X14, 0X24 # addq (%rsp), %rdx")
#define ADD_RDX_FROM_PTR_R8 CMT_ASM(".byte 0X49, 0X03, 0X10 # addq (%r8), %rdx")
#define ADD_RDX_FROM_PTR_R9 CMT_ASM(".byte 0X49, 0X03, 0X11 # addq (%r9), %rdx")
#define ADD_RDX_FROM_PTR_R10 CMT_ASM(".byte 0X49, 0X03, 0X12 # addq (%r10), %rdx")
#define ADD_RDX_FROM_PTR_R11 CMT_ASM(".byte 0X49, 0X03, 0X13 # addq (%r11), %rdx")
#define ADD_RDX_FROM_PTR_R12 CMT_ASM(".byte 0X49, 0X03, 0X14, 0X24 # addq (%r12), %rdx")
#define ADD_RDX_FROM_PTR_R13 CMT_ASM(".byte 0X49, 0X03, 0X55, 0X00 # addq (%r13), %rdx")
#define ADD_RDX_FROM_PTR_R14 CMT_ASM(".byte 0X49, 0X03, 0X16 # addq (%r14), %rdx")
#define ADD_RDX_FROM_PTR_R15 CMT_ASM(".byte 0X49, 0X03, 0X17 # addq (%r15), %rdx")
#define ADD_RDX_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X03, 0X10 # addq (%eax), %rdx")
#define ADD_RDX_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X03, 0X13 # addq (%ebx), %rdx")
#define ADD_RDX_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X03, 0X11 # addq (%ecx), %rdx")
#define ADD_RDX_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X03, 0X12 # addq (%edx), %rdx")
#define ADD_RDX_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X03, 0X17 # addq (%edi), %rdx")
#define ADD_RDX_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X03, 0X16 # addq (%esi), %rdx")
#define ADD_RDX_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X03, 0X55, 0X00 # addq (%ebp), %rdx")
#define ADD_RDX_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X03, 0X14, 0X24 # addq (%esp), %rdx")

#define ADD_RDI_FROM_PTR_RAX CMT_ASM(".byte 0X48, 0X03, 0X38 # addq (%rax), %rdi")
#define ADD_RDI_FROM_PTR_RBX CMT_ASM(".byte 0X48, 0X03, 0X3B # addq (%rbx), %rdi")
#define ADD_RDI_FROM_PTR_RCX CMT_ASM(".byte 0X48, 0X03, 0X39 # addq (%rcx), %rdi")
#define ADD_RDI_FROM_PTR_RDX CMT_ASM(".byte 0X48, 0X03, 0X3A # addq (%rdx), %rdi")
#define ADD_RDI_FROM_PTR_RDI CMT_ASM(".byte 0X48, 0X03, 0X3F # addq (%rdi), %rdi")
#define ADD_RDI_FROM_PTR_RSI CMT_ASM(".byte 0X48, 0X03, 0X3E # addq (%rsi), %rdi")
#define ADD_RDI_FROM_PTR_RBP CMT_ASM(".byte 0X48, 0X03, 0X7D, 0X00 # addq (%rbp), %rdi")
#define ADD_RDI_FROM_PTR_RSP CMT_ASM(".byte 0X48, 0X03, 0X3C, 0X24 # addq (%rsp), %rdi")
#define ADD_RDI_FROM_PTR_R8 CMT_ASM(".byte 0X49, 0X03, 0X38 # addq (%r8), %rdi")
#define ADD_RDI_FROM_PTR_R9 CMT_ASM(".byte 0X49, 0X03, 0X39 # addq (%r9), %rdi")
#define ADD_RDI_FROM_PTR_R10 CMT_ASM(".byte 0X49, 0X03, 0X3A # addq (%r10), %rdi")
#define ADD_RDI_FROM_PTR_R11 CMT_ASM(".byte 0X49, 0X03, 0X3B # addq (%r11), %rdi")
#define ADD_RDI_FROM_PTR_R12 CMT_ASM(".byte 0X49, 0X03, 0X3C, 0X24 # addq (%r12), %rdi")
#define ADD_RDI_FROM_PTR_R13 CMT_ASM(".byte 0X49, 0X03, 0X7D, 0X00 # addq (%r13), %rdi")
#define ADD_RDI_FROM_PTR_R14 CMT_ASM(".byte 0X49, 0X03, 0X3E # addq (%r14), %rdi")
#define ADD_RDI_FROM_PTR_R15 CMT_ASM(".byte 0X49, 0X03, 0X3F # addq (%r15), %rdi")
#define ADD_RDI_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X03, 0X38 # addq (%eax), %rdi")
#define ADD_RDI_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X03, 0X3B # addq (%ebx), %rdi")
#define ADD_RDI_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X03, 0X39 # addq (%ecx), %rdi")
#define ADD_RDI_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X03, 0X3A # addq (%edx), %rdi")
#define ADD_RDI_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X03, 0X3F # addq (%edi), %rdi")
#define ADD_RDI_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X03, 0X3E # addq (%esi), %rdi")
#define ADD_RDI_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X03, 0X7D, 0X00 # addq (%ebp), %rdi")
#define ADD_RDI_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X03, 0X3C, 0X24 # addq (%esp), %rdi")

#define ADD_RSI_FROM_PTR_RAX CMT_ASM(".byte 0X48, 0X03, 0X30 # addq (%rax), %rsi")
#define ADD_RSI_FROM_PTR_RBX CMT_ASM(".byte 0X48, 0X03, 0X33 # addq (%rbx), %rsi")
#define ADD_RSI_FROM_PTR_RCX CMT_ASM(".byte 0X48, 0X03, 0X31 # addq (%rcx), %rsi")
#define ADD_RSI_FROM_PTR_RDX CMT_ASM(".byte 0X48, 0X03, 0X32 # addq (%rdx), %rsi")
#define ADD_RSI_FROM_PTR_RDI CMT_ASM(".byte 0X48, 0X03, 0X37 # addq (%rdi), %rsi")
#define ADD_RSI_FROM_PTR_RSI CMT_ASM(".byte 0X48, 0X03, 0X36 # addq (%rsi), %rsi")
#define ADD_RSI_FROM_PTR_RBP CMT_ASM(".byte 0X48, 0X03, 0X75, 0X00 # addq (%rbp), %rsi")
#define ADD_RSI_FROM_PTR_RSP CMT_ASM(".byte 0X48, 0X03, 0X34, 0X24 # addq (%rsp), %rsi")
#define ADD_RSI_FROM_PTR_R8 CMT_ASM(".byte 0X49, 0X03, 0X30 # addq (%r8), %rsi")
#define ADD_RSI_FROM_PTR_R9 CMT_ASM(".byte 0X49, 0X03, 0X31 # addq (%r9), %rsi")
#define ADD_RSI_FROM_PTR_R10 CMT_ASM(".byte 0X49, 0X03, 0X32 # addq (%r10), %rsi")
#define ADD_RSI_FROM_PTR_R11 CMT_ASM(".byte 0X49, 0X03, 0X33 # addq (%r11), %rsi")
#define ADD_RSI_FROM_PTR_R12 CMT_ASM(".byte 0X49, 0X03, 0X34, 0X24 # addq (%r12), %rsi")
#define ADD_RSI_FROM_PTR_R13 CMT_ASM(".byte 0X49, 0X03, 0X75, 0X00 # addq (%r13), %rsi")
#define ADD_RSI_FROM_PTR_R14 CMT_ASM(".byte 0X49, 0X03, 0X36 # addq (%r14), %rsi")
#define ADD_RSI_FROM_PTR_R15 CMT_ASM(".byte 0X49, 0X03, 0X37 # addq (%r15), %rsi")
#define ADD_RSI_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X03, 0X30 # addq (%eax), %rsi")
#define ADD_RSI_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X03, 0X33 # addq (%ebx), %rsi")
#define ADD_RSI_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X03, 0X31 # addq (%ecx), %rsi")
#define ADD_RSI_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X03, 0X32 # addq (%edx), %rsi")
#define ADD_RSI_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X03, 0X37 # addq (%edi), %rsi")
#define ADD_RSI_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X03, 0X36 # addq (%esi), %rsi")
#define ADD_RSI_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X03, 0X75, 0X00 # addq (%ebp), %rsi")
#define ADD_RSI_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X03, 0X34, 0X24 # addq (%esp), %rsi")

#define ADD_RBP_FROM_PTR_RAX CMT_ASM(".byte 0X48, 0X03, 0X28 # addq (%rax), %rbp")
#define ADD_RBP_FROM_PTR_RBX CMT_ASM(".byte 0X48, 0X03, 0X2B # addq (%rbx), %rbp")
#define ADD_RBP_FROM_PTR_RCX CMT_ASM(".byte 0X48, 0X03, 0X29 # addq (%rcx), %rbp")
#define ADD_RBP_FROM_PTR_RDX CMT_ASM(".byte 0X48, 0X03, 0X2A # addq (%rdx), %rbp")
#define ADD_RBP_FROM_PTR_RDI CMT_ASM(".byte 0X48, 0X03, 0X2F # addq (%rdi), %rbp")
#define ADD_RBP_FROM_PTR_RSI CMT_ASM(".byte 0X48, 0X03, 0X2E # addq (%rsi), %rbp")
#define ADD_RBP_FROM_PTR_RBP CMT_ASM(".byte 0X48, 0X03, 0X6D, 0X00 # addq (%rbp), %rbp")
#define ADD_RBP_FROM_PTR_RSP CMT_ASM(".byte 0X48, 0X03, 0X2C, 0X24 # addq (%rsp), %rbp")
#define ADD_RBP_FROM_PTR_R8 CMT_ASM(".byte 0X49, 0X03, 0X28 # addq (%r8), %rbp")
#define ADD_RBP_FROM_PTR_R9 CMT_ASM(".byte 0X49, 0X03, 0X29 # addq (%r9), %rbp")
#define ADD_RBP_FROM_PTR_R10 CMT_ASM(".byte 0X49, 0X03, 0X2A # addq (%r10), %rbp")
#define ADD_RBP_FROM_PTR_R11 CMT_ASM(".byte 0X49, 0X03, 0X2B # addq (%r11), %rbp")
#define ADD_RBP_FROM_PTR_R12 CMT_ASM(".byte 0X49, 0X03, 0X2C, 0X24 # addq (%r12), %rbp")
#define ADD_RBP_FROM_PTR_R13 CMT_ASM(".byte 0X49, 0X03, 0X6D, 0X00 # addq (%r13), %rbp")
#define ADD_RBP_FROM_PTR_R14 CMT_ASM(".byte 0X49, 0X03, 0X2E # addq (%r14), %rbp")
#define ADD_RBP_FROM_PTR_R15 CMT_ASM(".byte 0X49, 0X03, 0X2F # addq (%r15), %rbp")
#define ADD_RBP_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X03, 0X28 # addq (%eax), %rbp")
#define ADD_RBP_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X03, 0X2B # addq (%ebx), %rbp")
#define ADD_RBP_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X03, 0X29 # addq (%ecx), %rbp")
#define ADD_RBP_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X03, 0X2A # addq (%edx), %rbp")
#define ADD_RBP_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X03, 0X2F # addq (%edi), %rbp")
#define ADD_RBP_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X03, 0X2E # addq (%esi), %rbp")
#define ADD_RBP_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X03, 0X6D, 0X00 # addq (%ebp), %rbp")
#define ADD_RBP_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X03, 0X2C, 0X24 # addq (%esp), %rbp")

#define ADD_RSP_FROM_PTR_RAX CMT_ASM(".byte 0X48, 0X03, 0X20 # addq (%rax), %rsp")
#define ADD_RSP_FROM_PTR_RBX CMT_ASM(".byte 0X48, 0X03, 0X23 # addq (%rbx), %rsp")
#define ADD_RSP_FROM_PTR_RCX CMT_ASM(".byte 0X48, 0X03, 0X21 # addq (%rcx), %rsp")
#define ADD_RSP_FROM_PTR_RDX CMT_ASM(".byte 0X48, 0X03, 0X22 # addq (%rdx), %rsp")
#define ADD_RSP_FROM_PTR_RDI CMT_ASM(".byte 0X48, 0X03, 0X27 # addq (%rdi), %rsp")
#define ADD_RSP_FROM_PTR_RSI CMT_ASM(".byte 0X48, 0X03, 0X26 # addq (%rsi), %rsp")
#define ADD_RSP_FROM_PTR_RBP CMT_ASM(".byte 0X48, 0X03, 0X65, 0X00 # addq (%rbp), %rsp")
#define ADD_RSP_FROM_PTR_RSP CMT_ASM(".byte 0X48, 0X03, 0X24, 0X24 # addq (%rsp), %rsp")
#define ADD_RSP_FROM_PTR_R8 CMT_ASM(".byte 0X49, 0X03, 0X20 # addq (%r8), %rsp")
#define ADD_RSP_FROM_PTR_R9 CMT_ASM(".byte 0X49, 0X03, 0X21 # addq (%r9), %rsp")
#define ADD_RSP_FROM_PTR_R10 CMT_ASM(".byte 0X49, 0X03, 0X22 # addq (%r10), %rsp")
#define ADD_RSP_FROM_PTR_R11 CMT_ASM(".byte 0X49, 0X03, 0X23 # addq (%r11), %rsp")
#define ADD_RSP_FROM_PTR_R12 CMT_ASM(".byte 0X49, 0X03, 0X24, 0X24 # addq (%r12), %rsp")
#define ADD_RSP_FROM_PTR_R13 CMT_ASM(".byte 0X49, 0X03, 0X65, 0X00 # addq (%r13), %rsp")
#define ADD_RSP_FROM_PTR_R14 CMT_ASM(".byte 0X49, 0X03, 0X26 # addq (%r14), %rsp")
#define ADD_RSP_FROM_PTR_R15 CMT_ASM(".byte 0X49, 0X03, 0X27 # addq (%r15), %rsp")
#define ADD_RSP_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X03, 0X20 # addq (%eax), %rsp")
#define ADD_RSP_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X03, 0X23 # addq (%ebx), %rsp")
#define ADD_RSP_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X03, 0X21 # addq (%ecx), %rsp")
#define ADD_RSP_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X03, 0X22 # addq (%edx), %rsp")
#define ADD_RSP_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X03, 0X27 # addq (%edi), %rsp")
#define ADD_RSP_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X03, 0X26 # addq (%esi), %rsp")
#define ADD_RSP_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X03, 0X65, 0X00 # addq (%ebp), %rsp")
#define ADD_RSP_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X03, 0X24, 0X24 # addq (%esp), %rsp")

#define ADD_R8_FROM_PTR_RAX CMT_ASM(".byte 0X4C, 0X03, 0X00 # addq (%rax), %r8")
#define ADD_R8_FROM_PTR_RBX CMT_ASM(".byte 0X4C, 0X03, 0X03 # addq (%rbx), %r8")
#define ADD_R8_FROM_PTR_RCX CMT_ASM(".byte 0X4C, 0X03, 0X01 # addq (%rcx), %r8")
#define ADD_R8_FROM_PTR_RDX CMT_ASM(".byte 0X4C, 0X03, 0X02 # addq (%rdx), %r8")
#define ADD_R8_FROM_PTR_RDI CMT_ASM(".byte 0X4C, 0X03, 0X07 # addq (%rdi), %r8")
#define ADD_R8_FROM_PTR_RSI CMT_ASM(".byte 0X4C, 0X03, 0X06 # addq (%rsi), %r8")
#define ADD_R8_FROM_PTR_RBP CMT_ASM(".byte 0X4C, 0X03, 0X45, 0X00 # addq (%rbp), %r8")
#define ADD_R8_FROM_PTR_RSP CMT_ASM(".byte 0X4C, 0X03, 0X04, 0X24 # addq (%rsp), %r8")
#define ADD_R8_FROM_PTR_R8 CMT_ASM(".byte 0X4D, 0X03, 0X00 # addq (%r8), %r8")
#define ADD_R8_FROM_PTR_R9 CMT_ASM(".byte 0X4D, 0X03, 0X01 # addq (%r9), %r8")
#define ADD_R8_FROM_PTR_R10 CMT_ASM(".byte 0X4D, 0X03, 0X02 # addq (%r10), %r8")
#define ADD_R8_FROM_PTR_R11 CMT_ASM(".byte 0X4D, 0X03, 0X03 # addq (%r11), %r8")
#define ADD_R8_FROM_PTR_R12 CMT_ASM(".byte 0X4D, 0X03, 0X04, 0X24 # addq (%r12), %r8")
#define ADD_R8_FROM_PTR_R13 CMT_ASM(".byte 0X4D, 0X03, 0X45, 0X00 # addq (%r13), %r8")
#define ADD_R8_FROM_PTR_R14 CMT_ASM(".byte 0X4D, 0X03, 0X06 # addq (%r14), %r8")
#define ADD_R8_FROM_PTR_R15 CMT_ASM(".byte 0X4D, 0X03, 0X07 # addq (%r15), %r8")
#define ADD_R8_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X03, 0X00 # addq (%eax), %r8")
#define ADD_R8_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X03, 0X03 # addq (%ebx), %r8")
#define ADD_R8_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X03, 0X01 # addq (%ecx), %r8")
#define ADD_R8_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X03, 0X02 # addq (%edx), %r8")
#define ADD_R8_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X03, 0X07 # addq (%edi), %r8")
#define ADD_R8_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X03, 0X06 # addq (%esi), %r8")
#define ADD_R8_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X03, 0X45, 0X00 # addq (%ebp), %r8")
#define ADD_R8_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X03, 0X04, 0X24 # addq (%esp), %r8")

#define ADD_R9_FROM_PTR_RAX CMT_ASM(".byte 0X4C, 0X03, 0X08 # addq (%rax), %r9")
#define ADD_R9_FROM_PTR_RBX CMT_ASM(".byte 0X4C, 0X03, 0X0B # addq (%rbx), %r9")
#define ADD_R9_FROM_PTR_RCX CMT_ASM(".byte 0X4C, 0X03, 0X09 # addq (%rcx), %r9")
#define ADD_R9_FROM_PTR_RDX CMT_ASM(".byte 0X4C, 0X03, 0X0A # addq (%rdx), %r9")
#define ADD_R9_FROM_PTR_RDI CMT_ASM(".byte 0X4C, 0X03, 0X0F # addq (%rdi), %r9")
#define ADD_R9_FROM_PTR_RSI CMT_ASM(".byte 0X4C, 0X03, 0X0E # addq (%rsi), %r9")
#define ADD_R9_FROM_PTR_RBP CMT_ASM(".byte 0X4C, 0X03, 0X4D, 0X00 # addq (%rbp), %r9")
#define ADD_R9_FROM_PTR_RSP CMT_ASM(".byte 0X4C, 0X03, 0X0C, 0X24 # addq (%rsp), %r9")
#define ADD_R9_FROM_PTR_R8 CMT_ASM(".byte 0X4D, 0X03, 0X08 # addq (%r8), %r9")
#define ADD_R9_FROM_PTR_R9 CMT_ASM(".byte 0X4D, 0X03, 0X09 # addq (%r9), %r9")
#define ADD_R9_FROM_PTR_R10 CMT_ASM(".byte 0X4D, 0X03, 0X0A # addq (%r10), %r9")
#define ADD_R9_FROM_PTR_R11 CMT_ASM(".byte 0X4D, 0X03, 0X0B # addq (%r11), %r9")
#define ADD_R9_FROM_PTR_R12 CMT_ASM(".byte 0X4D, 0X03, 0X0C, 0X24 # addq (%r12), %r9")
#define ADD_R9_FROM_PTR_R13 CMT_ASM(".byte 0X4D, 0X03, 0X4D, 0X00 # addq (%r13), %r9")
#define ADD_R9_FROM_PTR_R14 CMT_ASM(".byte 0X4D, 0X03, 0X0E # addq (%r14), %r9")
#define ADD_R9_FROM_PTR_R15 CMT_ASM(".byte 0X4D, 0X03, 0X0F # addq (%r15), %r9")
#define ADD_R9_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X03, 0X08 # addq (%eax), %r9")
#define ADD_R9_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X03, 0X0B # addq (%ebx), %r9")
#define ADD_R9_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X03, 0X09 # addq (%ecx), %r9")
#define ADD_R9_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X03, 0X0A # addq (%edx), %r9")
#define ADD_R9_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X03, 0X0F # addq (%edi), %r9")
#define ADD_R9_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X03, 0X0E # addq (%esi), %r9")
#define ADD_R9_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X03, 0X4D, 0X00 # addq (%ebp), %r9")
#define ADD_R9_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X03, 0X0C, 0X24 # addq (%esp), %r9")

#define ADD_R10_FROM_PTR_RAX CMT_ASM(".byte 0X4C, 0X03, 0X10 # addq (%rax), %r10")
#define ADD_R10_FROM_PTR_RBX CMT_ASM(".byte 0X4C, 0X03, 0X13 # addq (%rbx), %r10")
#define ADD_R10_FROM_PTR_RCX CMT_ASM(".byte 0X4C, 0X03, 0X11 # addq (%rcx), %r10")
#define ADD_R10_FROM_PTR_RDX CMT_ASM(".byte 0X4C, 0X03, 0X12 # addq (%rdx), %r10")
#define ADD_R10_FROM_PTR_RDI CMT_ASM(".byte 0X4C, 0X03, 0X17 # addq (%rdi), %r10")
#define ADD_R10_FROM_PTR_RSI CMT_ASM(".byte 0X4C, 0X03, 0X16 # addq (%rsi), %r10")
#define ADD_R10_FROM_PTR_RBP CMT_ASM(".byte 0X4C, 0X03, 0X55, 0X00 # addq (%rbp), %r10")
#define ADD_R10_FROM_PTR_RSP CMT_ASM(".byte 0X4C, 0X03, 0X14, 0X24 # addq (%rsp), %r10")
#define ADD_R10_FROM_PTR_R8 CMT_ASM(".byte 0X4D, 0X03, 0X10 # addq (%r8), %r10")
#define ADD_R10_FROM_PTR_R9 CMT_ASM(".byte 0X4D, 0X03, 0X11 # addq (%r9), %r10")
#define ADD_R10_FROM_PTR_R10 CMT_ASM(".byte 0X4D, 0X03, 0X12 # addq (%r10), %r10")
#define ADD_R10_FROM_PTR_R11 CMT_ASM(".byte 0X4D, 0X03, 0X13 # addq (%r11), %r10")
#define ADD_R10_FROM_PTR_R12 CMT_ASM(".byte 0X4D, 0X03, 0X14, 0X24 # addq (%r12), %r10")
#define ADD_R10_FROM_PTR_R13 CMT_ASM(".byte 0X4D, 0X03, 0X55, 0X00 # addq (%r13), %r10")
#define ADD_R10_FROM_PTR_R14 CMT_ASM(".byte 0X4D, 0X03, 0X16 # addq (%r14), %r10")
#define ADD_R10_FROM_PTR_R15 CMT_ASM(".byte 0X4D, 0X03, 0X17 # addq (%r15), %r10")
#define ADD_R10_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X03, 0X10 # addq (%eax), %r10")
#define ADD_R10_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X03, 0X13 # addq (%ebx), %r10")
#define ADD_R10_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X03, 0X11 # addq (%ecx), %r10")
#define ADD_R10_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X03, 0X12 # addq (%edx), %r10")
#define ADD_R10_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X03, 0X17 # addq (%edi), %r10")
#define ADD_R10_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X03, 0X16 # addq (%esi), %r10")
#define ADD_R10_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X03, 0X55, 0X00 # addq (%ebp), %r10")
#define ADD_R10_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X03, 0X14, 0X24 # addq (%esp), %r10")

#define ADD_R11_FROM_PTR_RAX CMT_ASM(".byte 0X4C, 0X03, 0X18 # addq (%rax), %r11")
#define ADD_R11_FROM_PTR_RBX CMT_ASM(".byte 0X4C, 0X03, 0X1B # addq (%rbx), %r11")
#define ADD_R11_FROM_PTR_RCX CMT_ASM(".byte 0X4C, 0X03, 0X19 # addq (%rcx), %r11")
#define ADD_R11_FROM_PTR_RDX CMT_ASM(".byte 0X4C, 0X03, 0X1A # addq (%rdx), %r11")
#define ADD_R11_FROM_PTR_RDI CMT_ASM(".byte 0X4C, 0X03, 0X1F # addq (%rdi), %r11")
#define ADD_R11_FROM_PTR_RSI CMT_ASM(".byte 0X4C, 0X03, 0X1E # addq (%rsi), %r11")
#define ADD_R11_FROM_PTR_RBP CMT_ASM(".byte 0X4C, 0X03, 0X5D, 0X00 # addq (%rbp), %r11")
#define ADD_R11_FROM_PTR_RSP CMT_ASM(".byte 0X4C, 0X03, 0X1C, 0X24 # addq (%rsp), %r11")
#define ADD_R11_FROM_PTR_R8 CMT_ASM(".byte 0X4D, 0X03, 0X18 # addq (%r8), %r11")
#define ADD_R11_FROM_PTR_R9 CMT_ASM(".byte 0X4D, 0X03, 0X19 # addq (%r9), %r11")
#define ADD_R11_FROM_PTR_R10 CMT_ASM(".byte 0X4D, 0X03, 0X1A # addq (%r10), %r11")
#define ADD_R11_FROM_PTR_R11 CMT_ASM(".byte 0X4D, 0X03, 0X1B # addq (%r11), %r11")
#define ADD_R11_FROM_PTR_R12 CMT_ASM(".byte 0X4D, 0X03, 0X1C, 0X24 # addq (%r12), %r11")
#define ADD_R11_FROM_PTR_R13 CMT_ASM(".byte 0X4D, 0X03, 0X5D, 0X00 # addq (%r13), %r11")
#define ADD_R11_FROM_PTR_R14 CMT_ASM(".byte 0X4D, 0X03, 0X1E # addq (%r14), %r11")
#define ADD_R11_FROM_PTR_R15 CMT_ASM(".byte 0X4D, 0X03, 0X1F # addq (%r15), %r11")
#define ADD_R11_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X03, 0X18 # addq (%eax), %r11")
#define ADD_R11_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X03, 0X1B # addq (%ebx), %r11")
#define ADD_R11_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X03, 0X19 # addq (%ecx), %r11")
#define ADD_R11_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X03, 0X1A # addq (%edx), %r11")
#define ADD_R11_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X03, 0X1F # addq (%edi), %r11")
#define ADD_R11_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X03, 0X1E # addq (%esi), %r11")
#define ADD_R11_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X03, 0X5D, 0X00 # addq (%ebp), %r11")
#define ADD_R11_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X03, 0X1C, 0X24 # addq (%esp), %r11")

#define ADD_R12_FROM_PTR_RAX CMT_ASM(".byte 0X4C, 0X03, 0X20 # addq (%rax), %r12")
#define ADD_R12_FROM_PTR_RBX CMT_ASM(".byte 0X4C, 0X03, 0X23 # addq (%rbx), %r12")
#define ADD_R12_FROM_PTR_RCX CMT_ASM(".byte 0X4C, 0X03, 0X21 # addq (%rcx), %r12")
#define ADD_R12_FROM_PTR_RDX CMT_ASM(".byte 0X4C, 0X03, 0X22 # addq (%rdx), %r12")
#define ADD_R12_FROM_PTR_RDI CMT_ASM(".byte 0X4C, 0X03, 0X27 # addq (%rdi), %r12")
#define ADD_R12_FROM_PTR_RSI CMT_ASM(".byte 0X4C, 0X03, 0X26 # addq (%rsi), %r12")
#define ADD_R12_FROM_PTR_RBP CMT_ASM(".byte 0X4C, 0X03, 0X65, 0X00 # addq (%rbp), %r12")
#define ADD_R12_FROM_PTR_RSP CMT_ASM(".byte 0X4C, 0X03, 0X24, 0X24 # addq (%rsp), %r12")
#define ADD_R12_FROM_PTR_R8 CMT_ASM(".byte 0X4D, 0X03, 0X20 # addq (%r8), %r12")
#define ADD_R12_FROM_PTR_R9 CMT_ASM(".byte 0X4D, 0X03, 0X21 # addq (%r9), %r12")
#define ADD_R12_FROM_PTR_R10 CMT_ASM(".byte 0X4D, 0X03, 0X22 # addq (%r10), %r12")
#define ADD_R12_FROM_PTR_R11 CMT_ASM(".byte 0X4D, 0X03, 0X23 # addq (%r11), %r12")
#define ADD_R12_FROM_PTR_R12 CMT_ASM(".byte 0X4D, 0X03, 0X24, 0X24 # addq (%r12), %r12")
#define ADD_R12_FROM_PTR_R13 CMT_ASM(".byte 0X4D, 0X03, 0X65, 0X00 # addq (%r13), %r12")
#define ADD_R12_FROM_PTR_R14 CMT_ASM(".byte 0X4D, 0X03, 0X26 # addq (%r14), %r12")
#define ADD_R12_FROM_PTR_R15 CMT_ASM(".byte 0X4D, 0X03, 0X27 # addq (%r15), %r12")
#define ADD_R12_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X03, 0X20 # addq (%eax), %r12")
#define ADD_R12_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X03, 0X23 # addq (%ebx), %r12")
#define ADD_R12_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X03, 0X21 # addq (%ecx), %r12")
#define ADD_R12_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X03, 0X22 # addq (%edx), %r12")
#define ADD_R12_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X03, 0X27 # addq (%edi), %r12")
#define ADD_R12_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X03, 0X26 # addq (%esi), %r12")
#define ADD_R12_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X03, 0X65, 0X00 # addq (%ebp), %r12")
#define ADD_R12_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X03, 0X24, 0X24 # addq (%esp), %r12")

#define ADD_R13_FROM_PTR_RAX CMT_ASM(".byte 0X4C, 0X03, 0X28 # addq (%rax), %r13")
#define ADD_R13_FROM_PTR_RBX CMT_ASM(".byte 0X4C, 0X03, 0X2B # addq (%rbx), %r13")
#define ADD_R13_FROM_PTR_RCX CMT_ASM(".byte 0X4C, 0X03, 0X29 # addq (%rcx), %r13")
#define ADD_R13_FROM_PTR_RDX CMT_ASM(".byte 0X4C, 0X03, 0X2A # addq (%rdx), %r13")
#define ADD_R13_FROM_PTR_RDI CMT_ASM(".byte 0X4C, 0X03, 0X2F # addq (%rdi), %r13")
#define ADD_R13_FROM_PTR_RSI CMT_ASM(".byte 0X4C, 0X03, 0X2E # addq (%rsi), %r13")
#define ADD_R13_FROM_PTR_RBP CMT_ASM(".byte 0X4C, 0X03, 0X6D, 0X00 # addq (%rbp), %r13")
#define ADD_R13_FROM_PTR_RSP CMT_ASM(".byte 0X4C, 0X03, 0X2C, 0X24 # addq (%rsp), %r13")
#define ADD_R13_FROM_PTR_R8 CMT_ASM(".byte 0X4D, 0X03, 0X28 # addq (%r8), %r13")
#define ADD_R13_FROM_PTR_R9 CMT_ASM(".byte 0X4D, 0X03, 0X29 # addq (%r9), %r13")
#define ADD_R13_FROM_PTR_R10 CMT_ASM(".byte 0X4D, 0X03, 0X2A # addq (%r10), %r13")
#define ADD_R13_FROM_PTR_R11 CMT_ASM(".byte 0X4D, 0X03, 0X2B # addq (%r11), %r13")
#define ADD_R13_FROM_PTR_R12 CMT_ASM(".byte 0X4D, 0X03, 0X2C, 0X24 # addq (%r12), %r13")
#define ADD_R13_FROM_PTR_R13 CMT_ASM(".byte 0X4D, 0X03, 0X6D, 0X00 # addq (%r13), %r13")
#define ADD_R13_FROM_PTR_R14 CMT_ASM(".byte 0X4D, 0X03, 0X2E # addq (%r14), %r13")
#define ADD_R13_FROM_PTR_R15 CMT_ASM(".byte 0X4D, 0X03, 0X2F # addq (%r15), %r13")
#define ADD_R13_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X03, 0X28 # addq (%eax), %r13")
#define ADD_R13_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X03, 0X2B # addq (%ebx), %r13")
#define ADD_R13_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X03, 0X29 # addq (%ecx), %r13")
#define ADD_R13_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X03, 0X2A # addq (%edx), %r13")
#define ADD_R13_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X03, 0X2F # addq (%edi), %r13")
#define ADD_R13_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X03, 0X2E # addq (%esi), %r13")
#define ADD_R13_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X03, 0X6D, 0X00 # addq (%ebp), %r13")
#define ADD_R13_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X03, 0X2C, 0X24 # addq (%esp), %r13")

#define ADD_R14_FROM_PTR_RAX CMT_ASM(".byte 0X4C, 0X03, 0X30 # addq (%rax), %r14")
#define ADD_R14_FROM_PTR_RBX CMT_ASM(".byte 0X4C, 0X03, 0X33 # addq (%rbx), %r14")
#define ADD_R14_FROM_PTR_RCX CMT_ASM(".byte 0X4C, 0X03, 0X31 # addq (%rcx), %r14")
#define ADD_R14_FROM_PTR_RDX CMT_ASM(".byte 0X4C, 0X03, 0X32 # addq (%rdx), %r14")
#define ADD_R14_FROM_PTR_RDI CMT_ASM(".byte 0X4C, 0X03, 0X37 # addq (%rdi), %r14")
#define ADD_R14_FROM_PTR_RSI CMT_ASM(".byte 0X4C, 0X03, 0X36 # addq (%rsi), %r14")
#define ADD_R14_FROM_PTR_RBP CMT_ASM(".byte 0X4C, 0X03, 0X75, 0X00 # addq (%rbp), %r14")
#define ADD_R14_FROM_PTR_RSP CMT_ASM(".byte 0X4C, 0X03, 0X34, 0X24 # addq (%rsp), %r14")
#define ADD_R14_FROM_PTR_R8 CMT_ASM(".byte 0X4D, 0X03, 0X30 # addq (%r8), %r14")
#define ADD_R14_FROM_PTR_R9 CMT_ASM(".byte 0X4D, 0X03, 0X31 # addq (%r9), %r14")
#define ADD_R14_FROM_PTR_R10 CMT_ASM(".byte 0X4D, 0X03, 0X32 # addq (%r10), %r14")
#define ADD_R14_FROM_PTR_R11 CMT_ASM(".byte 0X4D, 0X03, 0X33 # addq (%r11), %r14")
#define ADD_R14_FROM_PTR_R12 CMT_ASM(".byte 0X4D, 0X03, 0X34, 0X24 # addq (%r12), %r14")
#define ADD_R14_FROM_PTR_R13 CMT_ASM(".byte 0X4D, 0X03, 0X75, 0X00 # addq (%r13), %r14")
#define ADD_R14_FROM_PTR_R14 CMT_ASM(".byte 0X4D, 0X03, 0X36 # addq (%r14), %r14")
#define ADD_R14_FROM_PTR_R15 CMT_ASM(".byte 0X4D, 0X03, 0X37 # addq (%r15), %r14")
#define ADD_R14_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X03, 0X30 # addq (%eax), %r14")
#define ADD_R14_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X03, 0X33 # addq (%ebx), %r14")
#define ADD_R14_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X03, 0X31 # addq (%ecx), %r14")
#define ADD_R14_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X03, 0X32 # addq (%edx), %r14")
#define ADD_R14_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X03, 0X37 # addq (%edi), %r14")
#define ADD_R14_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X03, 0X36 # addq (%esi), %r14")
#define ADD_R14_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X03, 0X75, 0X00 # addq (%ebp), %r14")
#define ADD_R14_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X03, 0X34, 0X24 # addq (%esp), %r14")

#define ADD_R15_FROM_PTR_RAX CMT_ASM(".byte 0X4C, 0X03, 0X38 # addq (%rax), %r15")
#define ADD_R15_FROM_PTR_RBX CMT_ASM(".byte 0X4C, 0X03, 0X3B # addq (%rbx), %r15")
#define ADD_R15_FROM_PTR_RCX CMT_ASM(".byte 0X4C, 0X03, 0X39 # addq (%rcx), %r15")
#define ADD_R15_FROM_PTR_RDX CMT_ASM(".byte 0X4C, 0X03, 0X3A # addq (%rdx), %r15")
#define ADD_R15_FROM_PTR_RDI CMT_ASM(".byte 0X4C, 0X03, 0X3F # addq (%rdi), %r15")
#define ADD_R15_FROM_PTR_RSI CMT_ASM(".byte 0X4C, 0X03, 0X3E # addq (%rsi), %r15")
#define ADD_R15_FROM_PTR_RBP CMT_ASM(".byte 0X4C, 0X03, 0X7D, 0X00 # addq (%rbp), %r15")
#define ADD_R15_FROM_PTR_RSP CMT_ASM(".byte 0X4C, 0X03, 0X3C, 0X24 # addq (%rsp), %r15")
#define ADD_R15_FROM_PTR_R8 CMT_ASM(".byte 0X4D, 0X03, 0X38 # addq (%r8), %r15")
#define ADD_R15_FROM_PTR_R9 CMT_ASM(".byte 0X4D, 0X03, 0X39 # addq (%r9), %r15")
#define ADD_R15_FROM_PTR_R10 CMT_ASM(".byte 0X4D, 0X03, 0X3A # addq (%r10), %r15")
#define ADD_R15_FROM_PTR_R11 CMT_ASM(".byte 0X4D, 0X03, 0X3B # addq (%r11), %r15")
#define ADD_R15_FROM_PTR_R12 CMT_ASM(".byte 0X4D, 0X03, 0X3C, 0X24 # addq (%r12), %r15")
#define ADD_R15_FROM_PTR_R13 CMT_ASM(".byte 0X4D, 0X03, 0X7D, 0X00 # addq (%r13), %r15")
#define ADD_R15_FROM_PTR_R14 CMT_ASM(".byte 0X4D, 0X03, 0X3E # addq (%r14), %r15")
#define ADD_R15_FROM_PTR_R15 CMT_ASM(".byte 0X4D, 0X03, 0X3F # addq (%r15), %r15")
#define ADD_R15_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X03, 0X38 # addq (%eax), %r15")
#define ADD_R15_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X03, 0X3B # addq (%ebx), %r15")
#define ADD_R15_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X03, 0X39 # addq (%ecx), %r15")
#define ADD_R15_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X03, 0X3A # addq (%edx), %r15")
#define ADD_R15_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X03, 0X3F # addq (%edi), %r15")
#define ADD_R15_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X03, 0X3E # addq (%esi), %r15")
#define ADD_R15_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X03, 0X7D, 0X00 # addq (%ebp), %r15")
#define ADD_R15_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X03, 0X3C, 0X24 # addq (%esp), %r15")

#define ADD_RAX_TO_PTR_RAX CMT_ASM(".byte 0X48, 0X01, 0X00 # addq %rax, (%rax)")
#define ADD_RAX_TO_PTR_RBX CMT_ASM(".byte 0X48, 0X01, 0X03 # addq %rax, (%rbx)")
#define ADD_RAX_TO_PTR_RCX CMT_ASM(".byte 0X48, 0X01, 0X01 # addq %rax, (%rcx)")
#define ADD_RAX_TO_PTR_RDX CMT_ASM(".byte 0X48, 0X01, 0X02 # addq %rax, (%rdx)")
#define ADD_RAX_TO_PTR_RDI CMT_ASM(".byte 0X48, 0X01, 0X07 # addq %rax, (%rdi)")
#define ADD_RAX_TO_PTR_RSI CMT_ASM(".byte 0X48, 0X01, 0X06 # addq %rax, (%rsi)")
#define ADD_RAX_TO_PTR_RBP CMT_ASM(".byte 0X48, 0X01, 0X45, 0X00 # addq %rax, (%rbp)")
#define ADD_RAX_TO_PTR_RSP CMT_ASM(".byte 0X48, 0X01, 0X04, 0X24 # addq %rax, (%rsp)")
#define ADD_RAX_TO_PTR_R8 CMT_ASM(".byte 0X49, 0X01, 0X00 # addq %rax, (%r8)")
#define ADD_RAX_TO_PTR_R9 CMT_ASM(".byte 0X49, 0X01, 0X01 # addq %rax, (%r9)")
#define ADD_RAX_TO_PTR_R10 CMT_ASM(".byte 0X49, 0X01, 0X02 # addq %rax, (%r10)")
#define ADD_RAX_TO_PTR_R11 CMT_ASM(".byte 0X49, 0X01, 0X03 # addq %rax, (%r11)")
#define ADD_RAX_TO_PTR_R12 CMT_ASM(".byte 0X49, 0X01, 0X04, 0X24 # addq %rax, (%r12)")
#define ADD_RAX_TO_PTR_R13 CMT_ASM(".byte 0X49, 0X01, 0X45, 0X00 # addq %rax, (%r13)")
#define ADD_RAX_TO_PTR_R14 CMT_ASM(".byte 0X49, 0X01, 0X06 # addq %rax, (%r14)")
#define ADD_RAX_TO_PTR_R15 CMT_ASM(".byte 0X49, 0X01, 0X07 # addq %rax, (%r15)")
#define ADD_RAX_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X01, 0X00 # addq %rax, (%eax)")
#define ADD_RAX_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X01, 0X03 # addq %rax, (%ebx)")
#define ADD_RAX_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X01, 0X01 # addq %rax, (%ecx)")
#define ADD_RAX_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X01, 0X02 # addq %rax, (%edx)")
#define ADD_RAX_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X01, 0X07 # addq %rax, (%edi)")
#define ADD_RAX_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X01, 0X06 # addq %rax, (%esi)")
#define ADD_RAX_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X01, 0X45, 0X00 # addq %rax, (%ebp)")
#define ADD_RAX_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X01, 0X04, 0X24 # addq %rax, (%esp)")

#define ADD_RBX_TO_PTR_RAX CMT_ASM(".byte 0X48, 0X01, 0X18 # addq %rbx, (%rax)")
#define ADD_RBX_TO_PTR_RBX CMT_ASM(".byte 0X48, 0X01, 0X1B # addq %rbx, (%rbx)")
#define ADD_RBX_TO_PTR_RCX CMT_ASM(".byte 0X48, 0X01, 0X19 # addq %rbx, (%rcx)")
#define ADD_RBX_TO_PTR_RDX CMT_ASM(".byte 0X48, 0X01, 0X1A # addq %rbx, (%rdx)")
#define ADD_RBX_TO_PTR_RDI CMT_ASM(".byte 0X48, 0X01, 0X1F # addq %rbx, (%rdi)")
#define ADD_RBX_TO_PTR_RSI CMT_ASM(".byte 0X48, 0X01, 0X1E # addq %rbx, (%rsi)")
#define ADD_RBX_TO_PTR_RBP CMT_ASM(".byte 0X48, 0X01, 0X5D, 0X00 # addq %rbx, (%rbp)")
#define ADD_RBX_TO_PTR_RSP CMT_ASM(".byte 0X48, 0X01, 0X1C, 0X24 # addq %rbx, (%rsp)")
#define ADD_RBX_TO_PTR_R8 CMT_ASM(".byte 0X49, 0X01, 0X18 # addq %rbx, (%r8)")
#define ADD_RBX_TO_PTR_R9 CMT_ASM(".byte 0X49, 0X01, 0X19 # addq %rbx, (%r9)")
#define ADD_RBX_TO_PTR_R10 CMT_ASM(".byte 0X49, 0X01, 0X1A # addq %rbx, (%r10)")
#define ADD_RBX_TO_PTR_R11 CMT_ASM(".byte 0X49, 0X01, 0X1B # addq %rbx, (%r11)")
#define ADD_RBX_TO_PTR_R12 CMT_ASM(".byte 0X49, 0X01, 0X1C, 0X24 # addq %rbx, (%r12)")
#define ADD_RBX_TO_PTR_R13 CMT_ASM(".byte 0X49, 0X01, 0X5D, 0X00 # addq %rbx, (%r13)")
#define ADD_RBX_TO_PTR_R14 CMT_ASM(".byte 0X49, 0X01, 0X1E # addq %rbx, (%r14)")
#define ADD_RBX_TO_PTR_R15 CMT_ASM(".byte 0X49, 0X01, 0X1F # addq %rbx, (%r15)")
#define ADD_RBX_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X01, 0X18 # addq %rbx, (%eax)")
#define ADD_RBX_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X01, 0X1B # addq %rbx, (%ebx)")
#define ADD_RBX_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X01, 0X19 # addq %rbx, (%ecx)")
#define ADD_RBX_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X01, 0X1A # addq %rbx, (%edx)")
#define ADD_RBX_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X01, 0X1F # addq %rbx, (%edi)")
#define ADD_RBX_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X01, 0X1E # addq %rbx, (%esi)")
#define ADD_RBX_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X01, 0X5D, 0X00 # addq %rbx, (%ebp)")
#define ADD_RBX_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X01, 0X1C, 0X24 # addq %rbx, (%esp)")

#define ADD_RCX_TO_PTR_RAX CMT_ASM(".byte 0X48, 0X01, 0X08 # addq %rcx, (%rax)")
#define ADD_RCX_TO_PTR_RBX CMT_ASM(".byte 0X48, 0X01, 0X0B # addq %rcx, (%rbx)")
#define ADD_RCX_TO_PTR_RCX CMT_ASM(".byte 0X48, 0X01, 0X09 # addq %rcx, (%rcx)")
#define ADD_RCX_TO_PTR_RDX CMT_ASM(".byte 0X48, 0X01, 0X0A # addq %rcx, (%rdx)")
#define ADD_RCX_TO_PTR_RDI CMT_ASM(".byte 0X48, 0X01, 0X0F # addq %rcx, (%rdi)")
#define ADD_RCX_TO_PTR_RSI CMT_ASM(".byte 0X48, 0X01, 0X0E # addq %rcx, (%rsi)")
#define ADD_RCX_TO_PTR_RBP CMT_ASM(".byte 0X48, 0X01, 0X4D, 0X00 # addq %rcx, (%rbp)")
#define ADD_RCX_TO_PTR_RSP CMT_ASM(".byte 0X48, 0X01, 0X0C, 0X24 # addq %rcx, (%rsp)")
#define ADD_RCX_TO_PTR_R8 CMT_ASM(".byte 0X49, 0X01, 0X08 # addq %rcx, (%r8)")
#define ADD_RCX_TO_PTR_R9 CMT_ASM(".byte 0X49, 0X01, 0X09 # addq %rcx, (%r9)")
#define ADD_RCX_TO_PTR_R10 CMT_ASM(".byte 0X49, 0X01, 0X0A # addq %rcx, (%r10)")
#define ADD_RCX_TO_PTR_R11 CMT_ASM(".byte 0X49, 0X01, 0X0B # addq %rcx, (%r11)")
#define ADD_RCX_TO_PTR_R12 CMT_ASM(".byte 0X49, 0X01, 0X0C, 0X24 # addq %rcx, (%r12)")
#define ADD_RCX_TO_PTR_R13 CMT_ASM(".byte 0X49, 0X01, 0X4D, 0X00 # addq %rcx, (%r13)")
#define ADD_RCX_TO_PTR_R14 CMT_ASM(".byte 0X49, 0X01, 0X0E # addq %rcx, (%r14)")
#define ADD_RCX_TO_PTR_R15 CMT_ASM(".byte 0X49, 0X01, 0X0F # addq %rcx, (%r15)")
#define ADD_RCX_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X01, 0X08 # addq %rcx, (%eax)")
#define ADD_RCX_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X01, 0X0B # addq %rcx, (%ebx)")
#define ADD_RCX_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X01, 0X09 # addq %rcx, (%ecx)")
#define ADD_RCX_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X01, 0X0A # addq %rcx, (%edx)")
#define ADD_RCX_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X01, 0X0F # addq %rcx, (%edi)")
#define ADD_RCX_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X01, 0X0E # addq %rcx, (%esi)")
#define ADD_RCX_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X01, 0X4D, 0X00 # addq %rcx, (%ebp)")
#define ADD_RCX_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X01, 0X0C, 0X24 # addq %rcx, (%esp)")

#define ADD_RDX_TO_PTR_RAX CMT_ASM(".byte 0X48, 0X01, 0X10 # addq %rdx, (%rax)")
#define ADD_RDX_TO_PTR_RBX CMT_ASM(".byte 0X48, 0X01, 0X13 # addq %rdx, (%rbx)")
#define ADD_RDX_TO_PTR_RCX CMT_ASM(".byte 0X48, 0X01, 0X11 # addq %rdx, (%rcx)")
#define ADD_RDX_TO_PTR_RDX CMT_ASM(".byte 0X48, 0X01, 0X12 # addq %rdx, (%rdx)")
#define ADD_RDX_TO_PTR_RDI CMT_ASM(".byte 0X48, 0X01, 0X17 # addq %rdx, (%rdi)")
#define ADD_RDX_TO_PTR_RSI CMT_ASM(".byte 0X48, 0X01, 0X16 # addq %rdx, (%rsi)")
#define ADD_RDX_TO_PTR_RBP CMT_ASM(".byte 0X48, 0X01, 0X55, 0X00 # addq %rdx, (%rbp)")
#define ADD_RDX_TO_PTR_RSP CMT_ASM(".byte 0X48, 0X01, 0X14, 0X24 # addq %rdx, (%rsp)")
#define ADD_RDX_TO_PTR_R8 CMT_ASM(".byte 0X49, 0X01, 0X10 # addq %rdx, (%r8)")
#define ADD_RDX_TO_PTR_R9 CMT_ASM(".byte 0X49, 0X01, 0X11 # addq %rdx, (%r9)")
#define ADD_RDX_TO_PTR_R10 CMT_ASM(".byte 0X49, 0X01, 0X12 # addq %rdx, (%r10)")
#define ADD_RDX_TO_PTR_R11 CMT_ASM(".byte 0X49, 0X01, 0X13 # addq %rdx, (%r11)")
#define ADD_RDX_TO_PTR_R12 CMT_ASM(".byte 0X49, 0X01, 0X14, 0X24 # addq %rdx, (%r12)")
#define ADD_RDX_TO_PTR_R13 CMT_ASM(".byte 0X49, 0X01, 0X55, 0X00 # addq %rdx, (%r13)")
#define ADD_RDX_TO_PTR_R14 CMT_ASM(".byte 0X49, 0X01, 0X16 # addq %rdx, (%r14)")
#define ADD_RDX_TO_PTR_R15 CMT_ASM(".byte 0X49, 0X01, 0X17 # addq %rdx, (%r15)")
#define ADD_RDX_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X01, 0X10 # addq %rdx, (%eax)")
#define ADD_RDX_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X01, 0X13 # addq %rdx, (%ebx)")
#define ADD_RDX_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X01, 0X11 # addq %rdx, (%ecx)")
#define ADD_RDX_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X01, 0X12 # addq %rdx, (%edx)")
#define ADD_RDX_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X01, 0X17 # addq %rdx, (%edi)")
#define ADD_RDX_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X01, 0X16 # addq %rdx, (%esi)")
#define ADD_RDX_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X01, 0X55, 0X00 # addq %rdx, (%ebp)")
#define ADD_RDX_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X01, 0X14, 0X24 # addq %rdx, (%esp)")

#define ADD_RDI_TO_PTR_RAX CMT_ASM(".byte 0X48, 0X01, 0X38 # addq %rdi, (%rax)")
#define ADD_RDI_TO_PTR_RBX CMT_ASM(".byte 0X48, 0X01, 0X3B # addq %rdi, (%rbx)")
#define ADD_RDI_TO_PTR_RCX CMT_ASM(".byte 0X48, 0X01, 0X39 # addq %rdi, (%rcx)")
#define ADD_RDI_TO_PTR_RDX CMT_ASM(".byte 0X48, 0X01, 0X3A # addq %rdi, (%rdx)")
#define ADD_RDI_TO_PTR_RDI CMT_ASM(".byte 0X48, 0X01, 0X3F # addq %rdi, (%rdi)")
#define ADD_RDI_TO_PTR_RSI CMT_ASM(".byte 0X48, 0X01, 0X3E # addq %rdi, (%rsi)")
#define ADD_RDI_TO_PTR_RBP CMT_ASM(".byte 0X48, 0X01, 0X7D, 0X00 # addq %rdi, (%rbp)")
#define ADD_RDI_TO_PTR_RSP CMT_ASM(".byte 0X48, 0X01, 0X3C, 0X24 # addq %rdi, (%rsp)")
#define ADD_RDI_TO_PTR_R8 CMT_ASM(".byte 0X49, 0X01, 0X38 # addq %rdi, (%r8)")
#define ADD_RDI_TO_PTR_R9 CMT_ASM(".byte 0X49, 0X01, 0X39 # addq %rdi, (%r9)")
#define ADD_RDI_TO_PTR_R10 CMT_ASM(".byte 0X49, 0X01, 0X3A # addq %rdi, (%r10)")
#define ADD_RDI_TO_PTR_R11 CMT_ASM(".byte 0X49, 0X01, 0X3B # addq %rdi, (%r11)")
#define ADD_RDI_TO_PTR_R12 CMT_ASM(".byte 0X49, 0X01, 0X3C, 0X24 # addq %rdi, (%r12)")
#define ADD_RDI_TO_PTR_R13 CMT_ASM(".byte 0X49, 0X01, 0X7D, 0X00 # addq %rdi, (%r13)")
#define ADD_RDI_TO_PTR_R14 CMT_ASM(".byte 0X49, 0X01, 0X3E # addq %rdi, (%r14)")
#define ADD_RDI_TO_PTR_R15 CMT_ASM(".byte 0X49, 0X01, 0X3F # addq %rdi, (%r15)")
#define ADD_RDI_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X01, 0X38 # addq %rdi, (%eax)")
#define ADD_RDI_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X01, 0X3B # addq %rdi, (%ebx)")
#define ADD_RDI_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X01, 0X39 # addq %rdi, (%ecx)")
#define ADD_RDI_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X01, 0X3A # addq %rdi, (%edx)")
#define ADD_RDI_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X01, 0X3F # addq %rdi, (%edi)")
#define ADD_RDI_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X01, 0X3E # addq %rdi, (%esi)")
#define ADD_RDI_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X01, 0X7D, 0X00 # addq %rdi, (%ebp)")
#define ADD_RDI_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X01, 0X3C, 0X24 # addq %rdi, (%esp)")

#define ADD_RSI_TO_PTR_RAX CMT_ASM(".byte 0X48, 0X01, 0X30 # addq %rsi, (%rax)")
#define ADD_RSI_TO_PTR_RBX CMT_ASM(".byte 0X48, 0X01, 0X33 # addq %rsi, (%rbx)")
#define ADD_RSI_TO_PTR_RCX CMT_ASM(".byte 0X48, 0X01, 0X31 # addq %rsi, (%rcx)")
#define ADD_RSI_TO_PTR_RDX CMT_ASM(".byte 0X48, 0X01, 0X32 # addq %rsi, (%rdx)")
#define ADD_RSI_TO_PTR_RDI CMT_ASM(".byte 0X48, 0X01, 0X37 # addq %rsi, (%rdi)")
#define ADD_RSI_TO_PTR_RSI CMT_ASM(".byte 0X48, 0X01, 0X36 # addq %rsi, (%rsi)")
#define ADD_RSI_TO_PTR_RBP CMT_ASM(".byte 0X48, 0X01, 0X75, 0X00 # addq %rsi, (%rbp)")
#define ADD_RSI_TO_PTR_RSP CMT_ASM(".byte 0X48, 0X01, 0X34, 0X24 # addq %rsi, (%rsp)")
#define ADD_RSI_TO_PTR_R8 CMT_ASM(".byte 0X49, 0X01, 0X30 # addq %rsi, (%r8)")
#define ADD_RSI_TO_PTR_R9 CMT_ASM(".byte 0X49, 0X01, 0X31 # addq %rsi, (%r9)")
#define ADD_RSI_TO_PTR_R10 CMT_ASM(".byte 0X49, 0X01, 0X32 # addq %rsi, (%r10)")
#define ADD_RSI_TO_PTR_R11 CMT_ASM(".byte 0X49, 0X01, 0X33 # addq %rsi, (%r11)")
#define ADD_RSI_TO_PTR_R12 CMT_ASM(".byte 0X49, 0X01, 0X34, 0X24 # addq %rsi, (%r12)")
#define ADD_RSI_TO_PTR_R13 CMT_ASM(".byte 0X49, 0X01, 0X75, 0X00 # addq %rsi, (%r13)")
#define ADD_RSI_TO_PTR_R14 CMT_ASM(".byte 0X49, 0X01, 0X36 # addq %rsi, (%r14)")
#define ADD_RSI_TO_PTR_R15 CMT_ASM(".byte 0X49, 0X01, 0X37 # addq %rsi, (%r15)")
#define ADD_RSI_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X01, 0X30 # addq %rsi, (%eax)")
#define ADD_RSI_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X01, 0X33 # addq %rsi, (%ebx)")
#define ADD_RSI_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X01, 0X31 # addq %rsi, (%ecx)")
#define ADD_RSI_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X01, 0X32 # addq %rsi, (%edx)")
#define ADD_RSI_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X01, 0X37 # addq %rsi, (%edi)")
#define ADD_RSI_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X01, 0X36 # addq %rsi, (%esi)")
#define ADD_RSI_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X01, 0X75, 0X00 # addq %rsi, (%ebp)")
#define ADD_RSI_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X01, 0X34, 0X24 # addq %rsi, (%esp)")

#define ADD_RBP_TO_PTR_RAX CMT_ASM(".byte 0X48, 0X01, 0X28 # addq %rbp, (%rax)")
#define ADD_RBP_TO_PTR_RBX CMT_ASM(".byte 0X48, 0X01, 0X2B # addq %rbp, (%rbx)")
#define ADD_RBP_TO_PTR_RCX CMT_ASM(".byte 0X48, 0X01, 0X29 # addq %rbp, (%rcx)")
#define ADD_RBP_TO_PTR_RDX CMT_ASM(".byte 0X48, 0X01, 0X2A # addq %rbp, (%rdx)")
#define ADD_RBP_TO_PTR_RDI CMT_ASM(".byte 0X48, 0X01, 0X2F # addq %rbp, (%rdi)")
#define ADD_RBP_TO_PTR_RSI CMT_ASM(".byte 0X48, 0X01, 0X2E # addq %rbp, (%rsi)")
#define ADD_RBP_TO_PTR_RBP CMT_ASM(".byte 0X48, 0X01, 0X6D, 0X00 # addq %rbp, (%rbp)")
#define ADD_RBP_TO_PTR_RSP CMT_ASM(".byte 0X48, 0X01, 0X2C, 0X24 # addq %rbp, (%rsp)")
#define ADD_RBP_TO_PTR_R8 CMT_ASM(".byte 0X49, 0X01, 0X28 # addq %rbp, (%r8)")
#define ADD_RBP_TO_PTR_R9 CMT_ASM(".byte 0X49, 0X01, 0X29 # addq %rbp, (%r9)")
#define ADD_RBP_TO_PTR_R10 CMT_ASM(".byte 0X49, 0X01, 0X2A # addq %rbp, (%r10)")
#define ADD_RBP_TO_PTR_R11 CMT_ASM(".byte 0X49, 0X01, 0X2B # addq %rbp, (%r11)")
#define ADD_RBP_TO_PTR_R12 CMT_ASM(".byte 0X49, 0X01, 0X2C, 0X24 # addq %rbp, (%r12)")
#define ADD_RBP_TO_PTR_R13 CMT_ASM(".byte 0X49, 0X01, 0X6D, 0X00 # addq %rbp, (%r13)")
#define ADD_RBP_TO_PTR_R14 CMT_ASM(".byte 0X49, 0X01, 0X2E # addq %rbp, (%r14)")
#define ADD_RBP_TO_PTR_R15 CMT_ASM(".byte 0X49, 0X01, 0X2F # addq %rbp, (%r15)")
#define ADD_RBP_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X01, 0X28 # addq %rbp, (%eax)")
#define ADD_RBP_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X01, 0X2B # addq %rbp, (%ebx)")
#define ADD_RBP_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X01, 0X29 # addq %rbp, (%ecx)")
#define ADD_RBP_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X01, 0X2A # addq %rbp, (%edx)")
#define ADD_RBP_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X01, 0X2F # addq %rbp, (%edi)")
#define ADD_RBP_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X01, 0X2E # addq %rbp, (%esi)")
#define ADD_RBP_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X01, 0X6D, 0X00 # addq %rbp, (%ebp)")
#define ADD_RBP_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X01, 0X2C, 0X24 # addq %rbp, (%esp)")

#define ADD_RSP_TO_PTR_RAX CMT_ASM(".byte 0X48, 0X01, 0X20 # addq %rsp, (%rax)")
#define ADD_RSP_TO_PTR_RBX CMT_ASM(".byte 0X48, 0X01, 0X23 # addq %rsp, (%rbx)")
#define ADD_RSP_TO_PTR_RCX CMT_ASM(".byte 0X48, 0X01, 0X21 # addq %rsp, (%rcx)")
#define ADD_RSP_TO_PTR_RDX CMT_ASM(".byte 0X48, 0X01, 0X22 # addq %rsp, (%rdx)")
#define ADD_RSP_TO_PTR_RDI CMT_ASM(".byte 0X48, 0X01, 0X27 # addq %rsp, (%rdi)")
#define ADD_RSP_TO_PTR_RSI CMT_ASM(".byte 0X48, 0X01, 0X26 # addq %rsp, (%rsi)")
#define ADD_RSP_TO_PTR_RBP CMT_ASM(".byte 0X48, 0X01, 0X65, 0X00 # addq %rsp, (%rbp)")
#define ADD_RSP_TO_PTR_RSP CMT_ASM(".byte 0X48, 0X01, 0X24, 0X24 # addq %rsp, (%rsp)")
#define ADD_RSP_TO_PTR_R8 CMT_ASM(".byte 0X49, 0X01, 0X20 # addq %rsp, (%r8)")
#define ADD_RSP_TO_PTR_R9 CMT_ASM(".byte 0X49, 0X01, 0X21 # addq %rsp, (%r9)")
#define ADD_RSP_TO_PTR_R10 CMT_ASM(".byte 0X49, 0X01, 0X22 # addq %rsp, (%r10)")
#define ADD_RSP_TO_PTR_R11 CMT_ASM(".byte 0X49, 0X01, 0X23 # addq %rsp, (%r11)")
#define ADD_RSP_TO_PTR_R12 CMT_ASM(".byte 0X49, 0X01, 0X24, 0X24 # addq %rsp, (%r12)")
#define ADD_RSP_TO_PTR_R13 CMT_ASM(".byte 0X49, 0X01, 0X65, 0X00 # addq %rsp, (%r13)")
#define ADD_RSP_TO_PTR_R14 CMT_ASM(".byte 0X49, 0X01, 0X26 # addq %rsp, (%r14)")
#define ADD_RSP_TO_PTR_R15 CMT_ASM(".byte 0X49, 0X01, 0X27 # addq %rsp, (%r15)")
#define ADD_RSP_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X01, 0X20 # addq %rsp, (%eax)")
#define ADD_RSP_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X01, 0X23 # addq %rsp, (%ebx)")
#define ADD_RSP_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X01, 0X21 # addq %rsp, (%ecx)")
#define ADD_RSP_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X01, 0X22 # addq %rsp, (%edx)")
#define ADD_RSP_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X01, 0X27 # addq %rsp, (%edi)")
#define ADD_RSP_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X01, 0X26 # addq %rsp, (%esi)")
#define ADD_RSP_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X01, 0X65, 0X00 # addq %rsp, (%ebp)")
#define ADD_RSP_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X01, 0X24, 0X24 # addq %rsp, (%esp)")

#define ADD_R8_TO_PTR_RAX CMT_ASM(".byte 0X4C, 0X01, 0X00 # addq %r8, (%rax)")
#define ADD_R8_TO_PTR_RBX CMT_ASM(".byte 0X4C, 0X01, 0X03 # addq %r8, (%rbx)")
#define ADD_R8_TO_PTR_RCX CMT_ASM(".byte 0X4C, 0X01, 0X01 # addq %r8, (%rcx)")
#define ADD_R8_TO_PTR_RDX CMT_ASM(".byte 0X4C, 0X01, 0X02 # addq %r8, (%rdx)")
#define ADD_R8_TO_PTR_RDI CMT_ASM(".byte 0X4C, 0X01, 0X07 # addq %r8, (%rdi)")
#define ADD_R8_TO_PTR_RSI CMT_ASM(".byte 0X4C, 0X01, 0X06 # addq %r8, (%rsi)")
#define ADD_R8_TO_PTR_RBP CMT_ASM(".byte 0X4C, 0X01, 0X45, 0X00 # addq %r8, (%rbp)")
#define ADD_R8_TO_PTR_RSP CMT_ASM(".byte 0X4C, 0X01, 0X04, 0X24 # addq %r8, (%rsp)")
#define ADD_R8_TO_PTR_R8 CMT_ASM(".byte 0X4D, 0X01, 0X00 # addq %r8, (%r8)")
#define ADD_R8_TO_PTR_R9 CMT_ASM(".byte 0X4D, 0X01, 0X01 # addq %r8, (%r9)")
#define ADD_R8_TO_PTR_R10 CMT_ASM(".byte 0X4D, 0X01, 0X02 # addq %r8, (%r10)")
#define ADD_R8_TO_PTR_R11 CMT_ASM(".byte 0X4D, 0X01, 0X03 # addq %r8, (%r11)")
#define ADD_R8_TO_PTR_R12 CMT_ASM(".byte 0X4D, 0X01, 0X04, 0X24 # addq %r8, (%r12)")
#define ADD_R8_TO_PTR_R13 CMT_ASM(".byte 0X4D, 0X01, 0X45, 0X00 # addq %r8, (%r13)")
#define ADD_R8_TO_PTR_R14 CMT_ASM(".byte 0X4D, 0X01, 0X06 # addq %r8, (%r14)")
#define ADD_R8_TO_PTR_R15 CMT_ASM(".byte 0X4D, 0X01, 0X07 # addq %r8, (%r15)")
#define ADD_R8_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X01, 0X00 # addq %r8, (%eax)")
#define ADD_R8_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X01, 0X03 # addq %r8, (%ebx)")
#define ADD_R8_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X01, 0X01 # addq %r8, (%ecx)")
#define ADD_R8_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X01, 0X02 # addq %r8, (%edx)")
#define ADD_R8_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X01, 0X07 # addq %r8, (%edi)")
#define ADD_R8_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X01, 0X06 # addq %r8, (%esi)")
#define ADD_R8_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X01, 0X45, 0X00 # addq %r8, (%ebp)")
#define ADD_R8_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X01, 0X04, 0X24 # addq %r8, (%esp)")

#define ADD_R9_TO_PTR_RAX CMT_ASM(".byte 0X4C, 0X01, 0X08 # addq %r9, (%rax)")
#define ADD_R9_TO_PTR_RBX CMT_ASM(".byte 0X4C, 0X01, 0X0B # addq %r9, (%rbx)")
#define ADD_R9_TO_PTR_RCX CMT_ASM(".byte 0X4C, 0X01, 0X09 # addq %r9, (%rcx)")
#define ADD_R9_TO_PTR_RDX CMT_ASM(".byte 0X4C, 0X01, 0X0A # addq %r9, (%rdx)")
#define ADD_R9_TO_PTR_RDI CMT_ASM(".byte 0X4C, 0X01, 0X0F # addq %r9, (%rdi)")
#define ADD_R9_TO_PTR_RSI CMT_ASM(".byte 0X4C, 0X01, 0X0E # addq %r9, (%rsi)")
#define ADD_R9_TO_PTR_RBP CMT_ASM(".byte 0X4C, 0X01, 0X4D, 0X00 # addq %r9, (%rbp)")
#define ADD_R9_TO_PTR_RSP CMT_ASM(".byte 0X4C, 0X01, 0X0C, 0X24 # addq %r9, (%rsp)")
#define ADD_R9_TO_PTR_R8 CMT_ASM(".byte 0X4D, 0X01, 0X08 # addq %r9, (%r8)")
#define ADD_R9_TO_PTR_R9 CMT_ASM(".byte 0X4D, 0X01, 0X09 # addq %r9, (%r9)")
#define ADD_R9_TO_PTR_R10 CMT_ASM(".byte 0X4D, 0X01, 0X0A # addq %r9, (%r10)")
#define ADD_R9_TO_PTR_R11 CMT_ASM(".byte 0X4D, 0X01, 0X0B # addq %r9, (%r11)")
#define ADD_R9_TO_PTR_R12 CMT_ASM(".byte 0X4D, 0X01, 0X0C, 0X24 # addq %r9, (%r12)")
#define ADD_R9_TO_PTR_R13 CMT_ASM(".byte 0X4D, 0X01, 0X4D, 0X00 # addq %r9, (%r13)")
#define ADD_R9_TO_PTR_R14 CMT_ASM(".byte 0X4D, 0X01, 0X0E # addq %r9, (%r14)")
#define ADD_R9_TO_PTR_R15 CMT_ASM(".byte 0X4D, 0X01, 0X0F # addq %r9, (%r15)")
#define ADD_R9_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X01, 0X08 # addq %r9, (%eax)")
#define ADD_R9_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X01, 0X0B # addq %r9, (%ebx)")
#define ADD_R9_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X01, 0X09 # addq %r9, (%ecx)")
#define ADD_R9_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X01, 0X0A # addq %r9, (%edx)")
#define ADD_R9_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X01, 0X0F # addq %r9, (%edi)")
#define ADD_R9_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X01, 0X0E # addq %r9, (%esi)")
#define ADD_R9_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X01, 0X4D, 0X00 # addq %r9, (%ebp)")
#define ADD_R9_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X01, 0X0C, 0X24 # addq %r9, (%esp)")

#define ADD_R10_TO_PTR_RAX CMT_ASM(".byte 0X4C, 0X01, 0X10 # addq %r10, (%rax)")
#define ADD_R10_TO_PTR_RBX CMT_ASM(".byte 0X4C, 0X01, 0X13 # addq %r10, (%rbx)")
#define ADD_R10_TO_PTR_RCX CMT_ASM(".byte 0X4C, 0X01, 0X11 # addq %r10, (%rcx)")
#define ADD_R10_TO_PTR_RDX CMT_ASM(".byte 0X4C, 0X01, 0X12 # addq %r10, (%rdx)")
#define ADD_R10_TO_PTR_RDI CMT_ASM(".byte 0X4C, 0X01, 0X17 # addq %r10, (%rdi)")
#define ADD_R10_TO_PTR_RSI CMT_ASM(".byte 0X4C, 0X01, 0X16 # addq %r10, (%rsi)")
#define ADD_R10_TO_PTR_RBP CMT_ASM(".byte 0X4C, 0X01, 0X55, 0X00 # addq %r10, (%rbp)")
#define ADD_R10_TO_PTR_RSP CMT_ASM(".byte 0X4C, 0X01, 0X14, 0X24 # addq %r10, (%rsp)")
#define ADD_R10_TO_PTR_R8 CMT_ASM(".byte 0X4D, 0X01, 0X10 # addq %r10, (%r8)")
#define ADD_R10_TO_PTR_R9 CMT_ASM(".byte 0X4D, 0X01, 0X11 # addq %r10, (%r9)")
#define ADD_R10_TO_PTR_R10 CMT_ASM(".byte 0X4D, 0X01, 0X12 # addq %r10, (%r10)")
#define ADD_R10_TO_PTR_R11 CMT_ASM(".byte 0X4D, 0X01, 0X13 # addq %r10, (%r11)")
#define ADD_R10_TO_PTR_R12 CMT_ASM(".byte 0X4D, 0X01, 0X14, 0X24 # addq %r10, (%r12)")
#define ADD_R10_TO_PTR_R13 CMT_ASM(".byte 0X4D, 0X01, 0X55, 0X00 # addq %r10, (%r13)")
#define ADD_R10_TO_PTR_R14 CMT_ASM(".byte 0X4D, 0X01, 0X16 # addq %r10, (%r14)")
#define ADD_R10_TO_PTR_R15 CMT_ASM(".byte 0X4D, 0X01, 0X17 # addq %r10, (%r15)")
#define ADD_R10_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X01, 0X10 # addq %r10, (%eax)")
#define ADD_R10_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X01, 0X13 # addq %r10, (%ebx)")
#define ADD_R10_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X01, 0X11 # addq %r10, (%ecx)")
#define ADD_R10_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X01, 0X12 # addq %r10, (%edx)")
#define ADD_R10_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X01, 0X17 # addq %r10, (%edi)")
#define ADD_R10_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X01, 0X16 # addq %r10, (%esi)")
#define ADD_R10_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X01, 0X55, 0X00 # addq %r10, (%ebp)")
#define ADD_R10_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X01, 0X14, 0X24 # addq %r10, (%esp)")

#define ADD_R11_TO_PTR_RAX CMT_ASM(".byte 0X4C, 0X01, 0X18 # addq %r11, (%rax)")
#define ADD_R11_TO_PTR_RBX CMT_ASM(".byte 0X4C, 0X01, 0X1B # addq %r11, (%rbx)")
#define ADD_R11_TO_PTR_RCX CMT_ASM(".byte 0X4C, 0X01, 0X19 # addq %r11, (%rcx)")
#define ADD_R11_TO_PTR_RDX CMT_ASM(".byte 0X4C, 0X01, 0X1A # addq %r11, (%rdx)")
#define ADD_R11_TO_PTR_RDI CMT_ASM(".byte 0X4C, 0X01, 0X1F # addq %r11, (%rdi)")
#define ADD_R11_TO_PTR_RSI CMT_ASM(".byte 0X4C, 0X01, 0X1E # addq %r11, (%rsi)")
#define ADD_R11_TO_PTR_RBP CMT_ASM(".byte 0X4C, 0X01, 0X5D, 0X00 # addq %r11, (%rbp)")
#define ADD_R11_TO_PTR_RSP CMT_ASM(".byte 0X4C, 0X01, 0X1C, 0X24 # addq %r11, (%rsp)")
#define ADD_R11_TO_PTR_R8 CMT_ASM(".byte 0X4D, 0X01, 0X18 # addq %r11, (%r8)")
#define ADD_R11_TO_PTR_R9 CMT_ASM(".byte 0X4D, 0X01, 0X19 # addq %r11, (%r9)")
#define ADD_R11_TO_PTR_R10 CMT_ASM(".byte 0X4D, 0X01, 0X1A # addq %r11, (%r10)")
#define ADD_R11_TO_PTR_R11 CMT_ASM(".byte 0X4D, 0X01, 0X1B # addq %r11, (%r11)")
#define ADD_R11_TO_PTR_R12 CMT_ASM(".byte 0X4D, 0X01, 0X1C, 0X24 # addq %r11, (%r12)")
#define ADD_R11_TO_PTR_R13 CMT_ASM(".byte 0X4D, 0X01, 0X5D, 0X00 # addq %r11, (%r13)")
#define ADD_R11_TO_PTR_R14 CMT_ASM(".byte 0X4D, 0X01, 0X1E # addq %r11, (%r14)")
#define ADD_R11_TO_PTR_R15 CMT_ASM(".byte 0X4D, 0X01, 0X1F # addq %r11, (%r15)")
#define ADD_R11_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X01, 0X18 # addq %r11, (%eax)")
#define ADD_R11_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X01, 0X1B # addq %r11, (%ebx)")
#define ADD_R11_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X01, 0X19 # addq %r11, (%ecx)")
#define ADD_R11_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X01, 0X1A # addq %r11, (%edx)")
#define ADD_R11_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X01, 0X1F # addq %r11, (%edi)")
#define ADD_R11_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X01, 0X1E # addq %r11, (%esi)")
#define ADD_R11_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X01, 0X5D, 0X00 # addq %r11, (%ebp)")
#define ADD_R11_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X01, 0X1C, 0X24 # addq %r11, (%esp)")

#define ADD_R12_TO_PTR_RAX CMT_ASM(".byte 0X4C, 0X01, 0X20 # addq %r12, (%rax)")
#define ADD_R12_TO_PTR_RBX CMT_ASM(".byte 0X4C, 0X01, 0X23 # addq %r12, (%rbx)")
#define ADD_R12_TO_PTR_RCX CMT_ASM(".byte 0X4C, 0X01, 0X21 # addq %r12, (%rcx)")
#define ADD_R12_TO_PTR_RDX CMT_ASM(".byte 0X4C, 0X01, 0X22 # addq %r12, (%rdx)")
#define ADD_R12_TO_PTR_RDI CMT_ASM(".byte 0X4C, 0X01, 0X27 # addq %r12, (%rdi)")
#define ADD_R12_TO_PTR_RSI CMT_ASM(".byte 0X4C, 0X01, 0X26 # addq %r12, (%rsi)")
#define ADD_R12_TO_PTR_RBP CMT_ASM(".byte 0X4C, 0X01, 0X65, 0X00 # addq %r12, (%rbp)")
#define ADD_R12_TO_PTR_RSP CMT_ASM(".byte 0X4C, 0X01, 0X24, 0X24 # addq %r12, (%rsp)")
#define ADD_R12_TO_PTR_R8 CMT_ASM(".byte 0X4D, 0X01, 0X20 # addq %r12, (%r8)")
#define ADD_R12_TO_PTR_R9 CMT_ASM(".byte 0X4D, 0X01, 0X21 # addq %r12, (%r9)")
#define ADD_R12_TO_PTR_R10 CMT_ASM(".byte 0X4D, 0X01, 0X22 # addq %r12, (%r10)")
#define ADD_R12_TO_PTR_R11 CMT_ASM(".byte 0X4D, 0X01, 0X23 # addq %r12, (%r11)")
#define ADD_R12_TO_PTR_R12 CMT_ASM(".byte 0X4D, 0X01, 0X24, 0X24 # addq %r12, (%r12)")
#define ADD_R12_TO_PTR_R13 CMT_ASM(".byte 0X4D, 0X01, 0X65, 0X00 # addq %r12, (%r13)")
#define ADD_R12_TO_PTR_R14 CMT_ASM(".byte 0X4D, 0X01, 0X26 # addq %r12, (%r14)")
#define ADD_R12_TO_PTR_R15 CMT_ASM(".byte 0X4D, 0X01, 0X27 # addq %r12, (%r15)")
#define ADD_R12_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X01, 0X20 # addq %r12, (%eax)")
#define ADD_R12_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X01, 0X23 # addq %r12, (%ebx)")
#define ADD_R12_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X01, 0X21 # addq %r12, (%ecx)")
#define ADD_R12_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X01, 0X22 # addq %r12, (%edx)")
#define ADD_R12_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X01, 0X27 # addq %r12, (%edi)")
#define ADD_R12_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X01, 0X26 # addq %r12, (%esi)")
#define ADD_R12_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X01, 0X65, 0X00 # addq %r12, (%ebp)")
#define ADD_R12_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X01, 0X24, 0X24 # addq %r12, (%esp)")

#define ADD_R13_TO_PTR_RAX CMT_ASM(".byte 0X4C, 0X01, 0X28 # addq %r13, (%rax)")
#define ADD_R13_TO_PTR_RBX CMT_ASM(".byte 0X4C, 0X01, 0X2B # addq %r13, (%rbx)")
#define ADD_R13_TO_PTR_RCX CMT_ASM(".byte 0X4C, 0X01, 0X29 # addq %r13, (%rcx)")
#define ADD_R13_TO_PTR_RDX CMT_ASM(".byte 0X4C, 0X01, 0X2A # addq %r13, (%rdx)")
#define ADD_R13_TO_PTR_RDI CMT_ASM(".byte 0X4C, 0X01, 0X2F # addq %r13, (%rdi)")
#define ADD_R13_TO_PTR_RSI CMT_ASM(".byte 0X4C, 0X01, 0X2E # addq %r13, (%rsi)")
#define ADD_R13_TO_PTR_RBP CMT_ASM(".byte 0X4C, 0X01, 0X6D, 0X00 # addq %r13, (%rbp)")
#define ADD_R13_TO_PTR_RSP CMT_ASM(".byte 0X4C, 0X01, 0X2C, 0X24 # addq %r13, (%rsp)")
#define ADD_R13_TO_PTR_R8 CMT_ASM(".byte 0X4D, 0X01, 0X28 # addq %r13, (%r8)")
#define ADD_R13_TO_PTR_R9 CMT_ASM(".byte 0X4D, 0X01, 0X29 # addq %r13, (%r9)")
#define ADD_R13_TO_PTR_R10 CMT_ASM(".byte 0X4D, 0X01, 0X2A # addq %r13, (%r10)")
#define ADD_R13_TO_PTR_R11 CMT_ASM(".byte 0X4D, 0X01, 0X2B # addq %r13, (%r11)")
#define ADD_R13_TO_PTR_R12 CMT_ASM(".byte 0X4D, 0X01, 0X2C, 0X24 # addq %r13, (%r12)")
#define ADD_R13_TO_PTR_R13 CMT_ASM(".byte 0X4D, 0X01, 0X6D, 0X00 # addq %r13, (%r13)")
#define ADD_R13_TO_PTR_R14 CMT_ASM(".byte 0X4D, 0X01, 0X2E # addq %r13, (%r14)")
#define ADD_R13_TO_PTR_R15 CMT_ASM(".byte 0X4D, 0X01, 0X2F # addq %r13, (%r15)")
#define ADD_R13_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X01, 0X28 # addq %r13, (%eax)")
#define ADD_R13_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X01, 0X2B # addq %r13, (%ebx)")
#define ADD_R13_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X01, 0X29 # addq %r13, (%ecx)")
#define ADD_R13_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X01, 0X2A # addq %r13, (%edx)")
#define ADD_R13_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X01, 0X2F # addq %r13, (%edi)")
#define ADD_R13_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X01, 0X2E # addq %r13, (%esi)")
#define ADD_R13_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X01, 0X6D, 0X00 # addq %r13, (%ebp)")
#define ADD_R13_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X01, 0X2C, 0X24 # addq %r13, (%esp)")

#define ADD_R14_TO_PTR_RAX CMT_ASM(".byte 0X4C, 0X01, 0X30 # addq %r14, (%rax)")
#define ADD_R14_TO_PTR_RBX CMT_ASM(".byte 0X4C, 0X01, 0X33 # addq %r14, (%rbx)")
#define ADD_R14_TO_PTR_RCX CMT_ASM(".byte 0X4C, 0X01, 0X31 # addq %r14, (%rcx)")
#define ADD_R14_TO_PTR_RDX CMT_ASM(".byte 0X4C, 0X01, 0X32 # addq %r14, (%rdx)")
#define ADD_R14_TO_PTR_RDI CMT_ASM(".byte 0X4C, 0X01, 0X37 # addq %r14, (%rdi)")
#define ADD_R14_TO_PTR_RSI CMT_ASM(".byte 0X4C, 0X01, 0X36 # addq %r14, (%rsi)")
#define ADD_R14_TO_PTR_RBP CMT_ASM(".byte 0X4C, 0X01, 0X75, 0X00 # addq %r14, (%rbp)")
#define ADD_R14_TO_PTR_RSP CMT_ASM(".byte 0X4C, 0X01, 0X34, 0X24 # addq %r14, (%rsp)")
#define ADD_R14_TO_PTR_R8 CMT_ASM(".byte 0X4D, 0X01, 0X30 # addq %r14, (%r8)")
#define ADD_R14_TO_PTR_R9 CMT_ASM(".byte 0X4D, 0X01, 0X31 # addq %r14, (%r9)")
#define ADD_R14_TO_PTR_R10 CMT_ASM(".byte 0X4D, 0X01, 0X32 # addq %r14, (%r10)")
#define ADD_R14_TO_PTR_R11 CMT_ASM(".byte 0X4D, 0X01, 0X33 # addq %r14, (%r11)")
#define ADD_R14_TO_PTR_R12 CMT_ASM(".byte 0X4D, 0X01, 0X34, 0X24 # addq %r14, (%r12)")
#define ADD_R14_TO_PTR_R13 CMT_ASM(".byte 0X4D, 0X01, 0X75, 0X00 # addq %r14, (%r13)")
#define ADD_R14_TO_PTR_R14 CMT_ASM(".byte 0X4D, 0X01, 0X36 # addq %r14, (%r14)")
#define ADD_R14_TO_PTR_R15 CMT_ASM(".byte 0X4D, 0X01, 0X37 # addq %r14, (%r15)")
#define ADD_R14_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X01, 0X30 # addq %r14, (%eax)")
#define ADD_R14_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X01, 0X33 # addq %r14, (%ebx)")
#define ADD_R14_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X01, 0X31 # addq %r14, (%ecx)")
#define ADD_R14_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X01, 0X32 # addq %r14, (%edx)")
#define ADD_R14_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X01, 0X37 # addq %r14, (%edi)")
#define ADD_R14_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X01, 0X36 # addq %r14, (%esi)")
#define ADD_R14_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X01, 0X75, 0X00 # addq %r14, (%ebp)")
#define ADD_R14_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X01, 0X34, 0X24 # addq %r14, (%esp)")

#define ADD_R15_TO_PTR_RAX CMT_ASM(".byte 0X4C, 0X01, 0X38 # addq %r15, (%rax)")
#define ADD_R15_TO_PTR_RBX CMT_ASM(".byte 0X4C, 0X01, 0X3B # addq %r15, (%rbx)")
#define ADD_R15_TO_PTR_RCX CMT_ASM(".byte 0X4C, 0X01, 0X39 # addq %r15, (%rcx)")
#define ADD_R15_TO_PTR_RDX CMT_ASM(".byte 0X4C, 0X01, 0X3A # addq %r15, (%rdx)")
#define ADD_R15_TO_PTR_RDI CMT_ASM(".byte 0X4C, 0X01, 0X3F # addq %r15, (%rdi)")
#define ADD_R15_TO_PTR_RSI CMT_ASM(".byte 0X4C, 0X01, 0X3E # addq %r15, (%rsi)")
#define ADD_R15_TO_PTR_RBP CMT_ASM(".byte 0X4C, 0X01, 0X7D, 0X00 # addq %r15, (%rbp)")
#define ADD_R15_TO_PTR_RSP CMT_ASM(".byte 0X4C, 0X01, 0X3C, 0X24 # addq %r15, (%rsp)")
#define ADD_R15_TO_PTR_R8 CMT_ASM(".byte 0X4D, 0X01, 0X38 # addq %r15, (%r8)")
#define ADD_R15_TO_PTR_R9 CMT_ASM(".byte 0X4D, 0X01, 0X39 # addq %r15, (%r9)")
#define ADD_R15_TO_PTR_R10 CMT_ASM(".byte 0X4D, 0X01, 0X3A # addq %r15, (%r10)")
#define ADD_R15_TO_PTR_R11 CMT_ASM(".byte 0X4D, 0X01, 0X3B # addq %r15, (%r11)")
#define ADD_R15_TO_PTR_R12 CMT_ASM(".byte 0X4D, 0X01, 0X3C, 0X24 # addq %r15, (%r12)")
#define ADD_R15_TO_PTR_R13 CMT_ASM(".byte 0X4D, 0X01, 0X7D, 0X00 # addq %r15, (%r13)")
#define ADD_R15_TO_PTR_R14 CMT_ASM(".byte 0X4D, 0X01, 0X3E # addq %r15, (%r14)")
#define ADD_R15_TO_PTR_R15 CMT_ASM(".byte 0X4D, 0X01, 0X3F # addq %r15, (%r15)")
#define ADD_R15_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X01, 0X38 # addq %r15, (%eax)")
#define ADD_R15_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X01, 0X3B # addq %r15, (%ebx)")
#define ADD_R15_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X01, 0X39 # addq %r15, (%ecx)")
#define ADD_R15_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X01, 0X3A # addq %r15, (%edx)")
#define ADD_R15_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X01, 0X3F # addq %r15, (%edi)")
#define ADD_R15_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X01, 0X3E # addq %r15, (%esi)")
#define ADD_R15_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X01, 0X7D, 0X00 # addq %r15, (%ebp)")
#define ADD_R15_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X01, 0X3C, 0X24 # addq %r15, (%esp)")

#define ADD_RAX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X03, 0X80 # addq " _(VALUE) "(%rax), %rax")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RAX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X03, 0X83 # addq " _(VALUE) "(%rbx), %rax")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RAX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X03, 0X81 # addq " _(VALUE) "(%rcx), %rax")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RAX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X03, 0X82 # addq " _(VALUE) "(%rdx), %rax")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RAX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X03, 0X87 # addq " _(VALUE) "(%rdi), %rax")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RAX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X03, 0X86 # addq " _(VALUE) "(%rsi), %rax")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RAX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X03, 0X85 # addq " _(VALUE) "(%rbp), %rax")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RAX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X03, 0X84, 0X24 # addq " _(VALUE) "(%rsp), %rax")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RAX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X03, 0X80 # addq " _(VALUE) "(%r8), %rax")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RAX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X03, 0X81 # addq " _(VALUE) "(%r9), %rax")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RAX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X03, 0X82 # addq " _(VALUE) "(%r10), %rax")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RAX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X03, 0X83 # addq " _(VALUE) "(%r11), %rax")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RAX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X03, 0X84, 0X24 # addq " _(VALUE) "(%r12), %rax")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RAX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X03, 0X85 # addq " _(VALUE) "(%r13), %rax")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RAX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X03, 0X86 # addq " _(VALUE) "(%r14), %rax")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RAX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X03, 0X87 # addq " _(VALUE) "(%r15), %rax")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RAX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X03, 0X80 # addq " _(VALUE) "(%eax), %rax")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RAX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X03, 0X83 # addq " _(VALUE) "(%ebx), %rax")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RAX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X03, 0X81 # addq " _(VALUE) "(%ecx), %rax")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RAX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X03, 0X82 # addq " _(VALUE) "(%edx), %rax")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RAX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X03, 0X87 # addq " _(VALUE) "(%edi), %rax")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RAX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X03, 0X86 # addq " _(VALUE) "(%esi), %rax")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RAX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X03, 0X85 # addq " _(VALUE) "(%ebp), %rax")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RAX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X03, 0X84, 0X24 # addq " _(VALUE) "(%esp), %rax")\
	CMT_ASM(".long " _(VALUE))

#define ADD_RBX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X03, 0X98 # addq " _(VALUE) "(%rax), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RBX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X03, 0X9B # addq " _(VALUE) "(%rbx), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RBX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X03, 0X99 # addq " _(VALUE) "(%rcx), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RBX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X03, 0X9A # addq " _(VALUE) "(%rdx), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RBX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X03, 0X9F # addq " _(VALUE) "(%rdi), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RBX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X03, 0X9E # addq " _(VALUE) "(%rsi), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RBX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X03, 0X9D # addq " _(VALUE) "(%rbp), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RBX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X03, 0X9C, 0X24 # addq " _(VALUE) "(%rsp), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RBX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X03, 0X98 # addq " _(VALUE) "(%r8), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RBX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X03, 0X99 # addq " _(VALUE) "(%r9), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RBX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X03, 0X9A # addq " _(VALUE) "(%r10), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RBX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X03, 0X9B # addq " _(VALUE) "(%r11), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RBX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X03, 0X9C, 0X24 # addq " _(VALUE) "(%r12), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RBX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X03, 0X9D # addq " _(VALUE) "(%r13), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RBX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X03, 0X9E # addq " _(VALUE) "(%r14), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RBX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X03, 0X9F # addq " _(VALUE) "(%r15), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RBX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X03, 0X98 # addq " _(VALUE) "(%eax), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RBX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X03, 0X9B # addq " _(VALUE) "(%ebx), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RBX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X03, 0X99 # addq " _(VALUE) "(%ecx), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RBX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X03, 0X9A # addq " _(VALUE) "(%edx), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RBX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X03, 0X9F # addq " _(VALUE) "(%edi), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RBX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X03, 0X9E # addq " _(VALUE) "(%esi), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RBX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X03, 0X9D # addq " _(VALUE) "(%ebp), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RBX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X03, 0X9C, 0X24 # addq " _(VALUE) "(%esp), %rbx")\
	CMT_ASM(".long " _(VALUE))

#define ADD_RCX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X03, 0X88 # addq " _(VALUE) "(%rax), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RCX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X03, 0X8B # addq " _(VALUE) "(%rbx), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RCX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X03, 0X89 # addq " _(VALUE) "(%rcx), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RCX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X03, 0X8A # addq " _(VALUE) "(%rdx), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RCX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X03, 0X8F # addq " _(VALUE) "(%rdi), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RCX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X03, 0X8E # addq " _(VALUE) "(%rsi), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RCX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X03, 0X8D # addq " _(VALUE) "(%rbp), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RCX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X03, 0X8C, 0X24 # addq " _(VALUE) "(%rsp), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RCX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X03, 0X88 # addq " _(VALUE) "(%r8), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RCX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X03, 0X89 # addq " _(VALUE) "(%r9), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RCX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X03, 0X8A # addq " _(VALUE) "(%r10), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RCX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X03, 0X8B # addq " _(VALUE) "(%r11), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RCX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X03, 0X8C, 0X24 # addq " _(VALUE) "(%r12), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RCX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X03, 0X8D # addq " _(VALUE) "(%r13), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RCX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X03, 0X8E # addq " _(VALUE) "(%r14), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RCX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X03, 0X8F # addq " _(VALUE) "(%r15), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RCX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X03, 0X88 # addq " _(VALUE) "(%eax), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RCX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X03, 0X8B # addq " _(VALUE) "(%ebx), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RCX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X03, 0X89 # addq " _(VALUE) "(%ecx), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RCX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X03, 0X8A # addq " _(VALUE) "(%edx), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RCX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X03, 0X8F # addq " _(VALUE) "(%edi), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RCX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X03, 0X8E # addq " _(VALUE) "(%esi), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RCX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X03, 0X8D # addq " _(VALUE) "(%ebp), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RCX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X03, 0X8C, 0X24 # addq " _(VALUE) "(%esp), %rcx")\
	CMT_ASM(".long " _(VALUE))

#define ADD_RDX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X03, 0X90 # addq " _(VALUE) "(%rax), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RDX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X03, 0X93 # addq " _(VALUE) "(%rbx), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RDX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X03, 0X91 # addq " _(VALUE) "(%rcx), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RDX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X03, 0X92 # addq " _(VALUE) "(%rdx), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RDX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X03, 0X97 # addq " _(VALUE) "(%rdi), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RDX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X03, 0X96 # addq " _(VALUE) "(%rsi), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RDX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X03, 0X95 # addq " _(VALUE) "(%rbp), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RDX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X03, 0X94, 0X24 # addq " _(VALUE) "(%rsp), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RDX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X03, 0X90 # addq " _(VALUE) "(%r8), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RDX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X03, 0X91 # addq " _(VALUE) "(%r9), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RDX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X03, 0X92 # addq " _(VALUE) "(%r10), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RDX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X03, 0X93 # addq " _(VALUE) "(%r11), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RDX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X03, 0X94, 0X24 # addq " _(VALUE) "(%r12), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RDX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X03, 0X95 # addq " _(VALUE) "(%r13), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RDX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X03, 0X96 # addq " _(VALUE) "(%r14), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RDX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X03, 0X97 # addq " _(VALUE) "(%r15), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RDX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X03, 0X90 # addq " _(VALUE) "(%eax), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RDX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X03, 0X93 # addq " _(VALUE) "(%ebx), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RDX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X03, 0X91 # addq " _(VALUE) "(%ecx), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RDX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X03, 0X92 # addq " _(VALUE) "(%edx), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RDX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X03, 0X97 # addq " _(VALUE) "(%edi), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RDX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X03, 0X96 # addq " _(VALUE) "(%esi), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RDX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X03, 0X95 # addq " _(VALUE) "(%ebp), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RDX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X03, 0X94, 0X24 # addq " _(VALUE) "(%esp), %rdx")\
	CMT_ASM(".long " _(VALUE))

#define ADD_RDI_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X03, 0XB8 # addq " _(VALUE) "(%rax), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RDI_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X03, 0XBB # addq " _(VALUE) "(%rbx), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RDI_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X03, 0XB9 # addq " _(VALUE) "(%rcx), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RDI_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X03, 0XBA # addq " _(VALUE) "(%rdx), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RDI_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X03, 0XBF # addq " _(VALUE) "(%rdi), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RDI_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X03, 0XBE # addq " _(VALUE) "(%rsi), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RDI_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X03, 0XBD # addq " _(VALUE) "(%rbp), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RDI_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X03, 0XBC, 0X24 # addq " _(VALUE) "(%rsp), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RDI_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X03, 0XB8 # addq " _(VALUE) "(%r8), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RDI_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X03, 0XB9 # addq " _(VALUE) "(%r9), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RDI_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X03, 0XBA # addq " _(VALUE) "(%r10), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RDI_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X03, 0XBB # addq " _(VALUE) "(%r11), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RDI_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X03, 0XBC, 0X24 # addq " _(VALUE) "(%r12), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RDI_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X03, 0XBD # addq " _(VALUE) "(%r13), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RDI_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X03, 0XBE # addq " _(VALUE) "(%r14), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RDI_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X03, 0XBF # addq " _(VALUE) "(%r15), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RDI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X03, 0XB8 # addq " _(VALUE) "(%eax), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RDI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X03, 0XBB # addq " _(VALUE) "(%ebx), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RDI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X03, 0XB9 # addq " _(VALUE) "(%ecx), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RDI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X03, 0XBA # addq " _(VALUE) "(%edx), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RDI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X03, 0XBF # addq " _(VALUE) "(%edi), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RDI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X03, 0XBE # addq " _(VALUE) "(%esi), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RDI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X03, 0XBD # addq " _(VALUE) "(%ebp), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RDI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X03, 0XBC, 0X24 # addq " _(VALUE) "(%esp), %rdi")\
	CMT_ASM(".long " _(VALUE))

#define ADD_RSI_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X03, 0XB0 # addq " _(VALUE) "(%rax), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RSI_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X03, 0XB3 # addq " _(VALUE) "(%rbx), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RSI_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X03, 0XB1 # addq " _(VALUE) "(%rcx), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RSI_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X03, 0XB2 # addq " _(VALUE) "(%rdx), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RSI_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X03, 0XB7 # addq " _(VALUE) "(%rdi), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RSI_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X03, 0XB6 # addq " _(VALUE) "(%rsi), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RSI_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X03, 0XB5 # addq " _(VALUE) "(%rbp), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RSI_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X03, 0XB4, 0X24 # addq " _(VALUE) "(%rsp), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RSI_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X03, 0XB0 # addq " _(VALUE) "(%r8), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RSI_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X03, 0XB1 # addq " _(VALUE) "(%r9), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RSI_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X03, 0XB2 # addq " _(VALUE) "(%r10), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RSI_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X03, 0XB3 # addq " _(VALUE) "(%r11), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RSI_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X03, 0XB4, 0X24 # addq " _(VALUE) "(%r12), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RSI_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X03, 0XB5 # addq " _(VALUE) "(%r13), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RSI_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X03, 0XB6 # addq " _(VALUE) "(%r14), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RSI_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X03, 0XB7 # addq " _(VALUE) "(%r15), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RSI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X03, 0XB0 # addq " _(VALUE) "(%eax), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RSI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X03, 0XB3 # addq " _(VALUE) "(%ebx), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RSI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X03, 0XB1 # addq " _(VALUE) "(%ecx), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RSI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X03, 0XB2 # addq " _(VALUE) "(%edx), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RSI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X03, 0XB7 # addq " _(VALUE) "(%edi), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RSI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X03, 0XB6 # addq " _(VALUE) "(%esi), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RSI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X03, 0XB5 # addq " _(VALUE) "(%ebp), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RSI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X03, 0XB4, 0X24 # addq " _(VALUE) "(%esp), %rsi")\
	CMT_ASM(".long " _(VALUE))

#define ADD_RBP_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X03, 0XA8 # addq " _(VALUE) "(%rax), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RBP_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X03, 0XAB # addq " _(VALUE) "(%rbx), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RBP_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X03, 0XA9 # addq " _(VALUE) "(%rcx), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RBP_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X03, 0XAA # addq " _(VALUE) "(%rdx), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RBP_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X03, 0XAF # addq " _(VALUE) "(%rdi), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RBP_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X03, 0XAE # addq " _(VALUE) "(%rsi), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RBP_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X03, 0XAD # addq " _(VALUE) "(%rbp), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RBP_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X03, 0XAC, 0X24 # addq " _(VALUE) "(%rsp), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RBP_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X03, 0XA8 # addq " _(VALUE) "(%r8), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RBP_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X03, 0XA9 # addq " _(VALUE) "(%r9), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RBP_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X03, 0XAA # addq " _(VALUE) "(%r10), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RBP_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X03, 0XAB # addq " _(VALUE) "(%r11), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RBP_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X03, 0XAC, 0X24 # addq " _(VALUE) "(%r12), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RBP_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X03, 0XAD # addq " _(VALUE) "(%r13), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RBP_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X03, 0XAE # addq " _(VALUE) "(%r14), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RBP_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X03, 0XAF # addq " _(VALUE) "(%r15), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RBP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X03, 0XA8 # addq " _(VALUE) "(%eax), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RBP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X03, 0XAB # addq " _(VALUE) "(%ebx), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RBP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X03, 0XA9 # addq " _(VALUE) "(%ecx), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RBP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X03, 0XAA # addq " _(VALUE) "(%edx), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RBP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X03, 0XAF # addq " _(VALUE) "(%edi), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RBP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X03, 0XAE # addq " _(VALUE) "(%esi), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RBP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X03, 0XAD # addq " _(VALUE) "(%ebp), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RBP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X03, 0XAC, 0X24 # addq " _(VALUE) "(%esp), %rbp")\
	CMT_ASM(".long " _(VALUE))

#define ADD_RSP_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X03, 0XA0 # addq " _(VALUE) "(%rax), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RSP_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X03, 0XA3 # addq " _(VALUE) "(%rbx), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RSP_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X03, 0XA1 # addq " _(VALUE) "(%rcx), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RSP_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X03, 0XA2 # addq " _(VALUE) "(%rdx), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RSP_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X03, 0XA7 # addq " _(VALUE) "(%rdi), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RSP_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X03, 0XA6 # addq " _(VALUE) "(%rsi), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RSP_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X03, 0XA5 # addq " _(VALUE) "(%rbp), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RSP_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X03, 0XA4, 0X24 # addq " _(VALUE) "(%rsp), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RSP_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X03, 0XA0 # addq " _(VALUE) "(%r8), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RSP_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X03, 0XA1 # addq " _(VALUE) "(%r9), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RSP_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X03, 0XA2 # addq " _(VALUE) "(%r10), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RSP_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X03, 0XA3 # addq " _(VALUE) "(%r11), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RSP_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X03, 0XA4, 0X24 # addq " _(VALUE) "(%r12), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RSP_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X03, 0XA5 # addq " _(VALUE) "(%r13), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RSP_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X03, 0XA6 # addq " _(VALUE) "(%r14), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RSP_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X03, 0XA7 # addq " _(VALUE) "(%r15), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RSP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X03, 0XA0 # addq " _(VALUE) "(%eax), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RSP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X03, 0XA3 # addq " _(VALUE) "(%ebx), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RSP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X03, 0XA1 # addq " _(VALUE) "(%ecx), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RSP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X03, 0XA2 # addq " _(VALUE) "(%edx), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RSP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X03, 0XA7 # addq " _(VALUE) "(%edi), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RSP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X03, 0XA6 # addq " _(VALUE) "(%esi), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RSP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X03, 0XA5 # addq " _(VALUE) "(%ebp), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RSP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X03, 0XA4, 0X24 # addq " _(VALUE) "(%esp), %rsp")\
	CMT_ASM(".long " _(VALUE))

#define ADD_R8_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X03, 0X80 # addq " _(VALUE) "(%rax), %r8")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X03, 0X83 # addq " _(VALUE) "(%rbx), %r8")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X03, 0X81 # addq " _(VALUE) "(%rcx), %r8")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X03, 0X82 # addq " _(VALUE) "(%rdx), %r8")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X03, 0X87 # addq " _(VALUE) "(%rdi), %r8")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X03, 0X86 # addq " _(VALUE) "(%rsi), %r8")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X03, 0X85 # addq " _(VALUE) "(%rbp), %r8")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X03, 0X84, 0X24 # addq " _(VALUE) "(%rsp), %r8")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X03, 0X80 # addq " _(VALUE) "(%r8), %r8")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X03, 0X81 # addq " _(VALUE) "(%r9), %r8")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X03, 0X82 # addq " _(VALUE) "(%r10), %r8")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X03, 0X83 # addq " _(VALUE) "(%r11), %r8")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X03, 0X84, 0X24 # addq " _(VALUE) "(%r12), %r8")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X03, 0X85 # addq " _(VALUE) "(%r13), %r8")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X03, 0X86 # addq " _(VALUE) "(%r14), %r8")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X03, 0X87 # addq " _(VALUE) "(%r15), %r8")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X03, 0X80 # addq " _(VALUE) "(%eax), %r8")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X03, 0X83 # addq " _(VALUE) "(%ebx), %r8")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X03, 0X81 # addq " _(VALUE) "(%ecx), %r8")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X03, 0X82 # addq " _(VALUE) "(%edx), %r8")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X03, 0X87 # addq " _(VALUE) "(%edi), %r8")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X03, 0X86 # addq " _(VALUE) "(%esi), %r8")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X03, 0X85 # addq " _(VALUE) "(%ebp), %r8")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X03, 0X84, 0X24 # addq " _(VALUE) "(%esp), %r8")\
	CMT_ASM(".long " _(VALUE))

#define ADD_R9_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X03, 0X88 # addq " _(VALUE) "(%rax), %r9")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X03, 0X8B # addq " _(VALUE) "(%rbx), %r9")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X03, 0X89 # addq " _(VALUE) "(%rcx), %r9")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X03, 0X8A # addq " _(VALUE) "(%rdx), %r9")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X03, 0X8F # addq " _(VALUE) "(%rdi), %r9")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X03, 0X8E # addq " _(VALUE) "(%rsi), %r9")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X03, 0X8D # addq " _(VALUE) "(%rbp), %r9")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X03, 0X8C, 0X24 # addq " _(VALUE) "(%rsp), %r9")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X03, 0X88 # addq " _(VALUE) "(%r8), %r9")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X03, 0X89 # addq " _(VALUE) "(%r9), %r9")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X03, 0X8A # addq " _(VALUE) "(%r10), %r9")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X03, 0X8B # addq " _(VALUE) "(%r11), %r9")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X03, 0X8C, 0X24 # addq " _(VALUE) "(%r12), %r9")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X03, 0X8D # addq " _(VALUE) "(%r13), %r9")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X03, 0X8E # addq " _(VALUE) "(%r14), %r9")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X03, 0X8F # addq " _(VALUE) "(%r15), %r9")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X03, 0X88 # addq " _(VALUE) "(%eax), %r9")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X03, 0X8B # addq " _(VALUE) "(%ebx), %r9")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X03, 0X89 # addq " _(VALUE) "(%ecx), %r9")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X03, 0X8A # addq " _(VALUE) "(%edx), %r9")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X03, 0X8F # addq " _(VALUE) "(%edi), %r9")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X03, 0X8E # addq " _(VALUE) "(%esi), %r9")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X03, 0X8D # addq " _(VALUE) "(%ebp), %r9")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X03, 0X8C, 0X24 # addq " _(VALUE) "(%esp), %r9")\
	CMT_ASM(".long " _(VALUE))

#define ADD_R10_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X03, 0X90 # addq " _(VALUE) "(%rax), %r10")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X03, 0X93 # addq " _(VALUE) "(%rbx), %r10")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X03, 0X91 # addq " _(VALUE) "(%rcx), %r10")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X03, 0X92 # addq " _(VALUE) "(%rdx), %r10")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X03, 0X97 # addq " _(VALUE) "(%rdi), %r10")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X03, 0X96 # addq " _(VALUE) "(%rsi), %r10")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X03, 0X95 # addq " _(VALUE) "(%rbp), %r10")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X03, 0X94, 0X24 # addq " _(VALUE) "(%rsp), %r10")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X03, 0X90 # addq " _(VALUE) "(%r8), %r10")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X03, 0X91 # addq " _(VALUE) "(%r9), %r10")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X03, 0X92 # addq " _(VALUE) "(%r10), %r10")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X03, 0X93 # addq " _(VALUE) "(%r11), %r10")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X03, 0X94, 0X24 # addq " _(VALUE) "(%r12), %r10")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X03, 0X95 # addq " _(VALUE) "(%r13), %r10")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X03, 0X96 # addq " _(VALUE) "(%r14), %r10")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X03, 0X97 # addq " _(VALUE) "(%r15), %r10")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X03, 0X90 # addq " _(VALUE) "(%eax), %r10")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X03, 0X93 # addq " _(VALUE) "(%ebx), %r10")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X03, 0X91 # addq " _(VALUE) "(%ecx), %r10")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X03, 0X92 # addq " _(VALUE) "(%edx), %r10")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X03, 0X97 # addq " _(VALUE) "(%edi), %r10")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X03, 0X96 # addq " _(VALUE) "(%esi), %r10")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X03, 0X95 # addq " _(VALUE) "(%ebp), %r10")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X03, 0X94, 0X24 # addq " _(VALUE) "(%esp), %r10")\
	CMT_ASM(".long " _(VALUE))

#define ADD_R11_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X03, 0X98 # addq " _(VALUE) "(%rax), %r11")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X03, 0X9B # addq " _(VALUE) "(%rbx), %r11")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X03, 0X99 # addq " _(VALUE) "(%rcx), %r11")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X03, 0X9A # addq " _(VALUE) "(%rdx), %r11")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X03, 0X9F # addq " _(VALUE) "(%rdi), %r11")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X03, 0X9E # addq " _(VALUE) "(%rsi), %r11")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X03, 0X9D # addq " _(VALUE) "(%rbp), %r11")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X03, 0X9C, 0X24 # addq " _(VALUE) "(%rsp), %r11")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X03, 0X98 # addq " _(VALUE) "(%r8), %r11")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X03, 0X99 # addq " _(VALUE) "(%r9), %r11")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X03, 0X9A # addq " _(VALUE) "(%r10), %r11")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X03, 0X9B # addq " _(VALUE) "(%r11), %r11")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X03, 0X9C, 0X24 # addq " _(VALUE) "(%r12), %r11")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X03, 0X9D # addq " _(VALUE) "(%r13), %r11")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X03, 0X9E # addq " _(VALUE) "(%r14), %r11")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X03, 0X9F # addq " _(VALUE) "(%r15), %r11")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X03, 0X98 # addq " _(VALUE) "(%eax), %r11")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X03, 0X9B # addq " _(VALUE) "(%ebx), %r11")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X03, 0X99 # addq " _(VALUE) "(%ecx), %r11")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X03, 0X9A # addq " _(VALUE) "(%edx), %r11")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X03, 0X9F # addq " _(VALUE) "(%edi), %r11")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X03, 0X9E # addq " _(VALUE) "(%esi), %r11")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X03, 0X9D # addq " _(VALUE) "(%ebp), %r11")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X03, 0X9C, 0X24 # addq " _(VALUE) "(%esp), %r11")\
	CMT_ASM(".long " _(VALUE))

#define ADD_R12_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X03, 0XA0 # addq " _(VALUE) "(%rax), %r12")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X03, 0XA3 # addq " _(VALUE) "(%rbx), %r12")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X03, 0XA1 # addq " _(VALUE) "(%rcx), %r12")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X03, 0XA2 # addq " _(VALUE) "(%rdx), %r12")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X03, 0XA7 # addq " _(VALUE) "(%rdi), %r12")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X03, 0XA6 # addq " _(VALUE) "(%rsi), %r12")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X03, 0XA5 # addq " _(VALUE) "(%rbp), %r12")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X03, 0XA4, 0X24 # addq " _(VALUE) "(%rsp), %r12")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X03, 0XA0 # addq " _(VALUE) "(%r8), %r12")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X03, 0XA1 # addq " _(VALUE) "(%r9), %r12")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X03, 0XA2 # addq " _(VALUE) "(%r10), %r12")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X03, 0XA3 # addq " _(VALUE) "(%r11), %r12")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X03, 0XA4, 0X24 # addq " _(VALUE) "(%r12), %r12")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X03, 0XA5 # addq " _(VALUE) "(%r13), %r12")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X03, 0XA6 # addq " _(VALUE) "(%r14), %r12")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X03, 0XA7 # addq " _(VALUE) "(%r15), %r12")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X03, 0XA0 # addq " _(VALUE) "(%eax), %r12")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X03, 0XA3 # addq " _(VALUE) "(%ebx), %r12")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X03, 0XA1 # addq " _(VALUE) "(%ecx), %r12")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X03, 0XA2 # addq " _(VALUE) "(%edx), %r12")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X03, 0XA7 # addq " _(VALUE) "(%edi), %r12")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X03, 0XA6 # addq " _(VALUE) "(%esi), %r12")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X03, 0XA5 # addq " _(VALUE) "(%ebp), %r12")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X03, 0XA4, 0X24 # addq " _(VALUE) "(%esp), %r12")\
	CMT_ASM(".long " _(VALUE))

#define ADD_R13_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X03, 0XA8 # addq " _(VALUE) "(%rax), %r13")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X03, 0XAB # addq " _(VALUE) "(%rbx), %r13")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X03, 0XA9 # addq " _(VALUE) "(%rcx), %r13")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X03, 0XAA # addq " _(VALUE) "(%rdx), %r13")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X03, 0XAF # addq " _(VALUE) "(%rdi), %r13")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X03, 0XAE # addq " _(VALUE) "(%rsi), %r13")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X03, 0XAD # addq " _(VALUE) "(%rbp), %r13")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X03, 0XAC, 0X24 # addq " _(VALUE) "(%rsp), %r13")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X03, 0XA8 # addq " _(VALUE) "(%r8), %r13")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X03, 0XA9 # addq " _(VALUE) "(%r9), %r13")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X03, 0XAA # addq " _(VALUE) "(%r10), %r13")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X03, 0XAB # addq " _(VALUE) "(%r11), %r13")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X03, 0XAC, 0X24 # addq " _(VALUE) "(%r12), %r13")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X03, 0XAD # addq " _(VALUE) "(%r13), %r13")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X03, 0XAE # addq " _(VALUE) "(%r14), %r13")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X03, 0XAF # addq " _(VALUE) "(%r15), %r13")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X03, 0XA8 # addq " _(VALUE) "(%eax), %r13")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X03, 0XAB # addq " _(VALUE) "(%ebx), %r13")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X03, 0XA9 # addq " _(VALUE) "(%ecx), %r13")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X03, 0XAA # addq " _(VALUE) "(%edx), %r13")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X03, 0XAF # addq " _(VALUE) "(%edi), %r13")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X03, 0XAE # addq " _(VALUE) "(%esi), %r13")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X03, 0XAD # addq " _(VALUE) "(%ebp), %r13")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X03, 0XAC, 0X24 # addq " _(VALUE) "(%esp), %r13")\
	CMT_ASM(".long " _(VALUE))

#define ADD_R14_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X03, 0XB0 # addq " _(VALUE) "(%rax), %r14")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X03, 0XB3 # addq " _(VALUE) "(%rbx), %r14")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X03, 0XB1 # addq " _(VALUE) "(%rcx), %r14")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X03, 0XB2 # addq " _(VALUE) "(%rdx), %r14")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X03, 0XB7 # addq " _(VALUE) "(%rdi), %r14")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X03, 0XB6 # addq " _(VALUE) "(%rsi), %r14")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X03, 0XB5 # addq " _(VALUE) "(%rbp), %r14")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X03, 0XB4, 0X24 # addq " _(VALUE) "(%rsp), %r14")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X03, 0XB0 # addq " _(VALUE) "(%r8), %r14")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X03, 0XB1 # addq " _(VALUE) "(%r9), %r14")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X03, 0XB2 # addq " _(VALUE) "(%r10), %r14")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X03, 0XB3 # addq " _(VALUE) "(%r11), %r14")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X03, 0XB4, 0X24 # addq " _(VALUE) "(%r12), %r14")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X03, 0XB5 # addq " _(VALUE) "(%r13), %r14")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X03, 0XB6 # addq " _(VALUE) "(%r14), %r14")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X03, 0XB7 # addq " _(VALUE) "(%r15), %r14")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X03, 0XB0 # addq " _(VALUE) "(%eax), %r14")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X03, 0XB3 # addq " _(VALUE) "(%ebx), %r14")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X03, 0XB1 # addq " _(VALUE) "(%ecx), %r14")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X03, 0XB2 # addq " _(VALUE) "(%edx), %r14")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X03, 0XB7 # addq " _(VALUE) "(%edi), %r14")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X03, 0XB6 # addq " _(VALUE) "(%esi), %r14")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X03, 0XB5 # addq " _(VALUE) "(%ebp), %r14")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X03, 0XB4, 0X24 # addq " _(VALUE) "(%esp), %r14")\
	CMT_ASM(".long " _(VALUE))

#define ADD_R15_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X03, 0XB8 # addq " _(VALUE) "(%rax), %r15")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X03, 0XBB # addq " _(VALUE) "(%rbx), %r15")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X03, 0XB9 # addq " _(VALUE) "(%rcx), %r15")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X03, 0XBA # addq " _(VALUE) "(%rdx), %r15")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X03, 0XBF # addq " _(VALUE) "(%rdi), %r15")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X03, 0XBE # addq " _(VALUE) "(%rsi), %r15")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X03, 0XBD # addq " _(VALUE) "(%rbp), %r15")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X03, 0XBC, 0X24 # addq " _(VALUE) "(%rsp), %r15")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X03, 0XB8 # addq " _(VALUE) "(%r8), %r15")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X03, 0XB9 # addq " _(VALUE) "(%r9), %r15")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X03, 0XBA # addq " _(VALUE) "(%r10), %r15")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X03, 0XBB # addq " _(VALUE) "(%r11), %r15")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X03, 0XBC, 0X24 # addq " _(VALUE) "(%r12), %r15")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X03, 0XBD # addq " _(VALUE) "(%r13), %r15")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X03, 0XBE # addq " _(VALUE) "(%r14), %r15")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X03, 0XBF # addq " _(VALUE) "(%r15), %r15")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X03, 0XB8 # addq " _(VALUE) "(%eax), %r15")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X03, 0XBB # addq " _(VALUE) "(%ebx), %r15")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X03, 0XB9 # addq " _(VALUE) "(%ecx), %r15")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X03, 0XBA # addq " _(VALUE) "(%edx), %r15")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X03, 0XBF # addq " _(VALUE) "(%edi), %r15")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X03, 0XBE # addq " _(VALUE) "(%esi), %r15")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X03, 0XBD # addq " _(VALUE) "(%ebp), %r15")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X03, 0XBC, 0X24 # addq " _(VALUE) "(%esp), %r15")\
	CMT_ASM(".long " _(VALUE))

#define ADD_RAX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X01, 0X80 # addq %rax, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RAX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X01, 0X83 # addq %rax, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RAX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X01, 0X81 # addq %rax, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RAX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X01, 0X82 # addq %rax, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RAX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X01, 0X87 # addq %rax, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RAX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X01, 0X86 # addq %rax, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RAX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X01, 0X85 # addq %rax, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RAX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X01, 0X84, 0X24 # addq %rax, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RAX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X01, 0X80 # addq %rax, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RAX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X01, 0X81 # addq %rax, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RAX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X01, 0X82 # addq %rax, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RAX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X01, 0X83 # addq %rax, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RAX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X01, 0X84, 0X24 # addq %rax, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RAX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X01, 0X85 # addq %rax, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RAX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X01, 0X86 # addq %rax, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RAX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X01, 0X87 # addq %rax, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RAX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X01, 0X80 # addq %rax, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RAX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X01, 0X83 # addq %rax, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RAX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X01, 0X81 # addq %rax, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RAX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X01, 0X82 # addq %rax, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RAX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X01, 0X87 # addq %rax, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RAX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X01, 0X86 # addq %rax, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RAX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X01, 0X85 # addq %rax, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RAX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X01, 0X84, 0X24 # addq %rax, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADD_RBX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X01, 0X98 # addq %rbx, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RBX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X01, 0X9B # addq %rbx, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RBX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X01, 0X99 # addq %rbx, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RBX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X01, 0X9A # addq %rbx, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RBX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X01, 0X9F # addq %rbx, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RBX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X01, 0X9E # addq %rbx, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RBX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X01, 0X9D # addq %rbx, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RBX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X01, 0X9C, 0X24 # addq %rbx, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RBX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X01, 0X98 # addq %rbx, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RBX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X01, 0X99 # addq %rbx, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RBX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X01, 0X9A # addq %rbx, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RBX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X01, 0X9B # addq %rbx, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RBX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X01, 0X9C, 0X24 # addq %rbx, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RBX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X01, 0X9D # addq %rbx, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RBX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X01, 0X9E # addq %rbx, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RBX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X01, 0X9F # addq %rbx, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RBX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X01, 0X98 # addq %rbx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RBX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X01, 0X9B # addq %rbx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RBX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X01, 0X99 # addq %rbx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RBX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X01, 0X9A # addq %rbx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RBX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X01, 0X9F # addq %rbx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RBX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X01, 0X9E # addq %rbx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RBX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X01, 0X9D # addq %rbx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RBX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X01, 0X9C, 0X24 # addq %rbx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADD_RCX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X01, 0X88 # addq %rcx, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RCX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X01, 0X8B # addq %rcx, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RCX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X01, 0X89 # addq %rcx, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RCX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X01, 0X8A # addq %rcx, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RCX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X01, 0X8F # addq %rcx, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RCX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X01, 0X8E # addq %rcx, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RCX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X01, 0X8D # addq %rcx, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RCX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X01, 0X8C, 0X24 # addq %rcx, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RCX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X01, 0X88 # addq %rcx, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RCX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X01, 0X89 # addq %rcx, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RCX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X01, 0X8A # addq %rcx, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RCX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X01, 0X8B # addq %rcx, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RCX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X01, 0X8C, 0X24 # addq %rcx, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RCX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X01, 0X8D # addq %rcx, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RCX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X01, 0X8E # addq %rcx, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RCX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X01, 0X8F # addq %rcx, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RCX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X01, 0X88 # addq %rcx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RCX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X01, 0X8B # addq %rcx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RCX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X01, 0X89 # addq %rcx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RCX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X01, 0X8A # addq %rcx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RCX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X01, 0X8F # addq %rcx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RCX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X01, 0X8E # addq %rcx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RCX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X01, 0X8D # addq %rcx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RCX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X01, 0X8C, 0X24 # addq %rcx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADD_RDX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X01, 0X90 # addq %rdx, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RDX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X01, 0X93 # addq %rdx, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RDX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X01, 0X91 # addq %rdx, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RDX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X01, 0X92 # addq %rdx, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RDX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X01, 0X97 # addq %rdx, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RDX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X01, 0X96 # addq %rdx, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RDX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X01, 0X95 # addq %rdx, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RDX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X01, 0X94, 0X24 # addq %rdx, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RDX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X01, 0X90 # addq %rdx, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RDX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X01, 0X91 # addq %rdx, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RDX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X01, 0X92 # addq %rdx, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RDX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X01, 0X93 # addq %rdx, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RDX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X01, 0X94, 0X24 # addq %rdx, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RDX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X01, 0X95 # addq %rdx, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RDX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X01, 0X96 # addq %rdx, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RDX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X01, 0X97 # addq %rdx, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RDX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X01, 0X90 # addq %rdx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RDX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X01, 0X93 # addq %rdx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RDX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X01, 0X91 # addq %rdx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RDX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X01, 0X92 # addq %rdx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RDX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X01, 0X97 # addq %rdx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RDX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X01, 0X96 # addq %rdx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RDX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X01, 0X95 # addq %rdx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RDX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X01, 0X94, 0X24 # addq %rdx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADD_RDI_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X01, 0XB8 # addq %rdi, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RDI_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X01, 0XBB # addq %rdi, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RDI_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X01, 0XB9 # addq %rdi, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RDI_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X01, 0XBA # addq %rdi, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RDI_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X01, 0XBF # addq %rdi, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RDI_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X01, 0XBE # addq %rdi, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RDI_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X01, 0XBD # addq %rdi, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RDI_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X01, 0XBC, 0X24 # addq %rdi, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RDI_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X01, 0XB8 # addq %rdi, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RDI_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X01, 0XB9 # addq %rdi, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RDI_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X01, 0XBA # addq %rdi, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RDI_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X01, 0XBB # addq %rdi, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RDI_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X01, 0XBC, 0X24 # addq %rdi, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RDI_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X01, 0XBD # addq %rdi, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RDI_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X01, 0XBE # addq %rdi, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RDI_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X01, 0XBF # addq %rdi, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RDI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X01, 0XB8 # addq %rdi, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RDI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X01, 0XBB # addq %rdi, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RDI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X01, 0XB9 # addq %rdi, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RDI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X01, 0XBA # addq %rdi, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RDI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X01, 0XBF # addq %rdi, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RDI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X01, 0XBE # addq %rdi, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RDI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X01, 0XBD # addq %rdi, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RDI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X01, 0XBC, 0X24 # addq %rdi, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADD_RSI_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X01, 0XB0 # addq %rsi, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RSI_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X01, 0XB3 # addq %rsi, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RSI_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X01, 0XB1 # addq %rsi, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RSI_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X01, 0XB2 # addq %rsi, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RSI_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X01, 0XB7 # addq %rsi, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RSI_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X01, 0XB6 # addq %rsi, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RSI_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X01, 0XB5 # addq %rsi, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RSI_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X01, 0XB4, 0X24 # addq %rsi, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RSI_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X01, 0XB0 # addq %rsi, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RSI_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X01, 0XB1 # addq %rsi, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RSI_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X01, 0XB2 # addq %rsi, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RSI_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X01, 0XB3 # addq %rsi, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RSI_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X01, 0XB4, 0X24 # addq %rsi, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RSI_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X01, 0XB5 # addq %rsi, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RSI_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X01, 0XB6 # addq %rsi, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RSI_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X01, 0XB7 # addq %rsi, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RSI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X01, 0XB0 # addq %rsi, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RSI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X01, 0XB3 # addq %rsi, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RSI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X01, 0XB1 # addq %rsi, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RSI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X01, 0XB2 # addq %rsi, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RSI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X01, 0XB7 # addq %rsi, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RSI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X01, 0XB6 # addq %rsi, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RSI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X01, 0XB5 # addq %rsi, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RSI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X01, 0XB4, 0X24 # addq %rsi, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADD_RBP_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X01, 0XA8 # addq %rbp, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RBP_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X01, 0XAB # addq %rbp, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RBP_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X01, 0XA9 # addq %rbp, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RBP_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X01, 0XAA # addq %rbp, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RBP_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X01, 0XAF # addq %rbp, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RBP_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X01, 0XAE # addq %rbp, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RBP_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X01, 0XAD # addq %rbp, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RBP_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X01, 0XAC, 0X24 # addq %rbp, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RBP_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X01, 0XA8 # addq %rbp, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RBP_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X01, 0XA9 # addq %rbp, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RBP_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X01, 0XAA # addq %rbp, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RBP_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X01, 0XAB # addq %rbp, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RBP_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X01, 0XAC, 0X24 # addq %rbp, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RBP_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X01, 0XAD # addq %rbp, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RBP_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X01, 0XAE # addq %rbp, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RBP_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X01, 0XAF # addq %rbp, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RBP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X01, 0XA8 # addq %rbp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RBP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X01, 0XAB # addq %rbp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RBP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X01, 0XA9 # addq %rbp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RBP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X01, 0XAA # addq %rbp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RBP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X01, 0XAF # addq %rbp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RBP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X01, 0XAE # addq %rbp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RBP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X01, 0XAD # addq %rbp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RBP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X01, 0XAC, 0X24 # addq %rbp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADD_RSP_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X01, 0XA0 # addq %rsp, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RSP_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X01, 0XA3 # addq %rsp, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RSP_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X01, 0XA1 # addq %rsp, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RSP_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X01, 0XA2 # addq %rsp, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RSP_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X01, 0XA7 # addq %rsp, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RSP_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X01, 0XA6 # addq %rsp, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RSP_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X01, 0XA5 # addq %rsp, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RSP_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X01, 0XA4, 0X24 # addq %rsp, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RSP_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X01, 0XA0 # addq %rsp, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RSP_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X01, 0XA1 # addq %rsp, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RSP_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X01, 0XA2 # addq %rsp, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RSP_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X01, 0XA3 # addq %rsp, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RSP_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X01, 0XA4, 0X24 # addq %rsp, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RSP_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X01, 0XA5 # addq %rsp, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RSP_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X01, 0XA6 # addq %rsp, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RSP_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X01, 0XA7 # addq %rsp, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RSP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X01, 0XA0 # addq %rsp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RSP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X01, 0XA3 # addq %rsp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RSP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X01, 0XA1 # addq %rsp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RSP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X01, 0XA2 # addq %rsp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RSP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X01, 0XA7 # addq %rsp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RSP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X01, 0XA6 # addq %rsp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RSP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X01, 0XA5 # addq %rsp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_RSP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X01, 0XA4, 0X24 # addq %rsp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADD_R8_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X01, 0X80 # addq %r8, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X01, 0X83 # addq %r8, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X01, 0X81 # addq %r8, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X01, 0X82 # addq %r8, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X01, 0X87 # addq %r8, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X01, 0X86 # addq %r8, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X01, 0X85 # addq %r8, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X01, 0X84, 0X24 # addq %r8, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X01, 0X80 # addq %r8, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X01, 0X81 # addq %r8, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X01, 0X82 # addq %r8, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X01, 0X83 # addq %r8, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X01, 0X84, 0X24 # addq %r8, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X01, 0X85 # addq %r8, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X01, 0X86 # addq %r8, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X01, 0X87 # addq %r8, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X01, 0X80 # addq %r8, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X01, 0X83 # addq %r8, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X01, 0X81 # addq %r8, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X01, 0X82 # addq %r8, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X01, 0X87 # addq %r8, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X01, 0X86 # addq %r8, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X01, 0X85 # addq %r8, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X01, 0X84, 0X24 # addq %r8, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADD_R9_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X01, 0X88 # addq %r9, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X01, 0X8B # addq %r9, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X01, 0X89 # addq %r9, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X01, 0X8A # addq %r9, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X01, 0X8F # addq %r9, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X01, 0X8E # addq %r9, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X01, 0X8D # addq %r9, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X01, 0X8C, 0X24 # addq %r9, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X01, 0X88 # addq %r9, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X01, 0X89 # addq %r9, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X01, 0X8A # addq %r9, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X01, 0X8B # addq %r9, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X01, 0X8C, 0X24 # addq %r9, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X01, 0X8D # addq %r9, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X01, 0X8E # addq %r9, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X01, 0X8F # addq %r9, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X01, 0X88 # addq %r9, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X01, 0X8B # addq %r9, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X01, 0X89 # addq %r9, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X01, 0X8A # addq %r9, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X01, 0X8F # addq %r9, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X01, 0X8E # addq %r9, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X01, 0X8D # addq %r9, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X01, 0X8C, 0X24 # addq %r9, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADD_R10_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X01, 0X90 # addq %r10, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X01, 0X93 # addq %r10, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X01, 0X91 # addq %r10, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X01, 0X92 # addq %r10, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X01, 0X97 # addq %r10, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X01, 0X96 # addq %r10, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X01, 0X95 # addq %r10, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X01, 0X94, 0X24 # addq %r10, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X01, 0X90 # addq %r10, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X01, 0X91 # addq %r10, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X01, 0X92 # addq %r10, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X01, 0X93 # addq %r10, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X01, 0X94, 0X24 # addq %r10, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X01, 0X95 # addq %r10, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X01, 0X96 # addq %r10, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X01, 0X97 # addq %r10, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X01, 0X90 # addq %r10, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X01, 0X93 # addq %r10, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X01, 0X91 # addq %r10, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X01, 0X92 # addq %r10, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X01, 0X97 # addq %r10, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X01, 0X96 # addq %r10, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X01, 0X95 # addq %r10, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X01, 0X94, 0X24 # addq %r10, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADD_R11_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X01, 0X98 # addq %r11, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X01, 0X9B # addq %r11, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X01, 0X99 # addq %r11, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X01, 0X9A # addq %r11, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X01, 0X9F # addq %r11, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X01, 0X9E # addq %r11, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X01, 0X9D # addq %r11, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X01, 0X9C, 0X24 # addq %r11, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X01, 0X98 # addq %r11, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X01, 0X99 # addq %r11, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X01, 0X9A # addq %r11, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X01, 0X9B # addq %r11, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X01, 0X9C, 0X24 # addq %r11, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X01, 0X9D # addq %r11, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X01, 0X9E # addq %r11, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X01, 0X9F # addq %r11, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X01, 0X98 # addq %r11, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X01, 0X9B # addq %r11, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X01, 0X99 # addq %r11, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X01, 0X9A # addq %r11, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X01, 0X9F # addq %r11, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X01, 0X9E # addq %r11, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X01, 0X9D # addq %r11, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X01, 0X9C, 0X24 # addq %r11, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADD_R12_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X01, 0XA0 # addq %r12, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X01, 0XA3 # addq %r12, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X01, 0XA1 # addq %r12, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X01, 0XA2 # addq %r12, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X01, 0XA7 # addq %r12, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X01, 0XA6 # addq %r12, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X01, 0XA5 # addq %r12, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X01, 0XA4, 0X24 # addq %r12, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X01, 0XA0 # addq %r12, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X01, 0XA1 # addq %r12, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X01, 0XA2 # addq %r12, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X01, 0XA3 # addq %r12, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X01, 0XA4, 0X24 # addq %r12, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X01, 0XA5 # addq %r12, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X01, 0XA6 # addq %r12, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X01, 0XA7 # addq %r12, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X01, 0XA0 # addq %r12, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X01, 0XA3 # addq %r12, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X01, 0XA1 # addq %r12, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X01, 0XA2 # addq %r12, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X01, 0XA7 # addq %r12, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X01, 0XA6 # addq %r12, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X01, 0XA5 # addq %r12, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X01, 0XA4, 0X24 # addq %r12, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADD_R13_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X01, 0XA8 # addq %r13, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X01, 0XAB # addq %r13, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X01, 0XA9 # addq %r13, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X01, 0XAA # addq %r13, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X01, 0XAF # addq %r13, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X01, 0XAE # addq %r13, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X01, 0XAD # addq %r13, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X01, 0XAC, 0X24 # addq %r13, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X01, 0XA8 # addq %r13, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X01, 0XA9 # addq %r13, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X01, 0XAA # addq %r13, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X01, 0XAB # addq %r13, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X01, 0XAC, 0X24 # addq %r13, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X01, 0XAD # addq %r13, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X01, 0XAE # addq %r13, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X01, 0XAF # addq %r13, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X01, 0XA8 # addq %r13, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X01, 0XAB # addq %r13, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X01, 0XA9 # addq %r13, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X01, 0XAA # addq %r13, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X01, 0XAF # addq %r13, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X01, 0XAE # addq %r13, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X01, 0XAD # addq %r13, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X01, 0XAC, 0X24 # addq %r13, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADD_R14_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X01, 0XB0 # addq %r14, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X01, 0XB3 # addq %r14, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X01, 0XB1 # addq %r14, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X01, 0XB2 # addq %r14, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X01, 0XB7 # addq %r14, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X01, 0XB6 # addq %r14, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X01, 0XB5 # addq %r14, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X01, 0XB4, 0X24 # addq %r14, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X01, 0XB0 # addq %r14, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X01, 0XB1 # addq %r14, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X01, 0XB2 # addq %r14, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X01, 0XB3 # addq %r14, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X01, 0XB4, 0X24 # addq %r14, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X01, 0XB5 # addq %r14, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X01, 0XB6 # addq %r14, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X01, 0XB7 # addq %r14, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X01, 0XB0 # addq %r14, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X01, 0XB3 # addq %r14, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X01, 0XB1 # addq %r14, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X01, 0XB2 # addq %r14, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X01, 0XB7 # addq %r14, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X01, 0XB6 # addq %r14, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X01, 0XB5 # addq %r14, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X01, 0XB4, 0X24 # addq %r14, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADD_R15_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X01, 0XB8 # addq %r15, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X01, 0XBB # addq %r15, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X01, 0XB9 # addq %r15, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X01, 0XBA # addq %r15, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X01, 0XBF # addq %r15, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X01, 0XBE # addq %r15, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X01, 0XBD # addq %r15, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X01, 0XBC, 0X24 # addq %r15, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X01, 0XB8 # addq %r15, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X01, 0XB9 # addq %r15, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X01, 0XBA # addq %r15, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X01, 0XBB # addq %r15, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X01, 0XBC, 0X24 # addq %r15, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X01, 0XBD # addq %r15, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X01, 0XBE # addq %r15, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X01, 0XBF # addq %r15, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X01, 0XB8 # addq %r15, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X01, 0XBB # addq %r15, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X01, 0XB9 # addq %r15, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X01, 0XBA # addq %r15, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X01, 0XBF # addq %r15, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X01, 0XBE # addq %r15, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X01, 0XBD # addq %r15, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X01, 0XBC, 0X24 # addq %r15, " _(VALUE) "(%esp)")\
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
