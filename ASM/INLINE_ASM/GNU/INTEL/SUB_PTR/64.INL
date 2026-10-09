#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************* [v] 64-BIT MEMORY [v] ************************** */
#define SUB_RAX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X2B, 0X04, 0X25 # subq (" _(VALUE) "), %rax")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RBX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X2B, 0X1C, 0X25 # subq (" _(VALUE) "), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RCX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X2B, 0X0C, 0X25 # subq (" _(VALUE) "), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RDX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X2B, 0X14, 0X25 # subq (" _(VALUE) "), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RDI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X2B, 0X3C, 0X25 # subq (" _(VALUE) "), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RSI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X2B, 0X34, 0X25 # subq (" _(VALUE) "), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RBP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X2B, 0X2C, 0X25 # subq (" _(VALUE) "), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RSP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X2B, 0X24, 0X25 # subq (" _(VALUE) "), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X2B, 0X04, 0X25 # subq (" _(VALUE) "), %r8")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X2B, 0X0C, 0X25 # subq (" _(VALUE) "), %r9")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X2B, 0X14, 0X25 # subq (" _(VALUE) "), %r10")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X2B, 0X1C, 0X25 # subq (" _(VALUE) "), %r11")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X2B, 0X24, 0X25 # subq (" _(VALUE) "), %r12")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X2B, 0X2C, 0X25 # subq (" _(VALUE) "), %r13")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X2B, 0X34, 0X25 # subq (" _(VALUE) "), %r14")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X2B, 0X3C, 0X25 # subq (" _(VALUE) "), %r15")\
	CMT_ASM(".long " _(VALUE))

#define SUB_RAX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X29, 0X04, 0X25 # subq %rax, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RBX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X29, 0X1C, 0X25 # subq %rbx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RCX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X29, 0X0C, 0X25 # subq %rcx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RDX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X29, 0X14, 0X25 # subq %rdx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RDI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X29, 0X3C, 0X25 # subq %rdi, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RSI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X29, 0X34, 0X25 # subq %rsi, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RBP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X29, 0X2C, 0X25 # subq %rbp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RSP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X29, 0X24, 0X25 # subq %rsp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X29, 0X04, 0X25 # subq %r8, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X29, 0X0C, 0X25 # subq %r9, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X29, 0X14, 0X25 # subq %r10, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X29, 0X1C, 0X25 # subq %r11, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X29, 0X24, 0X25 # subq %r12, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X29, 0X2C, 0X25 # subq %r13, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X29, 0X34, 0X25 # subq %r14, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X29, 0X3C, 0X25 # subq %r15, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))

#define SUB_RAX_FROM_PTR_RAX CMT_ASM(".byte 0X48, 0X2B, 0X00 # subq (%rax), %rax")
#define SUB_RAX_FROM_PTR_RBX CMT_ASM(".byte 0X48, 0X2B, 0X03 # subq (%rbx), %rax")
#define SUB_RAX_FROM_PTR_RCX CMT_ASM(".byte 0X48, 0X2B, 0X01 # subq (%rcx), %rax")
#define SUB_RAX_FROM_PTR_RDX CMT_ASM(".byte 0X48, 0X2B, 0X02 # subq (%rdx), %rax")
#define SUB_RAX_FROM_PTR_RDI CMT_ASM(".byte 0X48, 0X2B, 0X07 # subq (%rdi), %rax")
#define SUB_RAX_FROM_PTR_RSI CMT_ASM(".byte 0X48, 0X2B, 0X06 # subq (%rsi), %rax")
#define SUB_RAX_FROM_PTR_RBP CMT_ASM(".byte 0X48, 0X2B, 0X45, 0X00 # subq (%rbp), %rax")
#define SUB_RAX_FROM_PTR_RSP CMT_ASM(".byte 0X48, 0X2B, 0X04, 0X24 # subq (%rsp), %rax")
#define SUB_RAX_FROM_PTR_R8 CMT_ASM(".byte 0X49, 0X2B, 0X00 # subq (%r8), %rax")
#define SUB_RAX_FROM_PTR_R9 CMT_ASM(".byte 0X49, 0X2B, 0X01 # subq (%r9), %rax")
#define SUB_RAX_FROM_PTR_R10 CMT_ASM(".byte 0X49, 0X2B, 0X02 # subq (%r10), %rax")
#define SUB_RAX_FROM_PTR_R11 CMT_ASM(".byte 0X49, 0X2B, 0X03 # subq (%r11), %rax")
#define SUB_RAX_FROM_PTR_R12 CMT_ASM(".byte 0X49, 0X2B, 0X04, 0X24 # subq (%r12), %rax")
#define SUB_RAX_FROM_PTR_R13 CMT_ASM(".byte 0X49, 0X2B, 0X45, 0X00 # subq (%r13), %rax")
#define SUB_RAX_FROM_PTR_R14 CMT_ASM(".byte 0X49, 0X2B, 0X06 # subq (%r14), %rax")
#define SUB_RAX_FROM_PTR_R15 CMT_ASM(".byte 0X49, 0X2B, 0X07 # subq (%r15), %rax")
#define SUB_RAX_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X2B, 0X00 # subq (%eax), %rax")
#define SUB_RAX_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X2B, 0X03 # subq (%ebx), %rax")
#define SUB_RAX_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X2B, 0X01 # subq (%ecx), %rax")
#define SUB_RAX_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X2B, 0X02 # subq (%edx), %rax")
#define SUB_RAX_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X2B, 0X07 # subq (%edi), %rax")
#define SUB_RAX_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X2B, 0X06 # subq (%esi), %rax")
#define SUB_RAX_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X2B, 0X45, 0X00 # subq (%ebp), %rax")
#define SUB_RAX_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X2B, 0X04, 0X24 # subq (%esp), %rax")

#define SUB_RBX_FROM_PTR_RAX CMT_ASM(".byte 0X48, 0X2B, 0X18 # subq (%rax), %rbx")
#define SUB_RBX_FROM_PTR_RBX CMT_ASM(".byte 0X48, 0X2B, 0X1B # subq (%rbx), %rbx")
#define SUB_RBX_FROM_PTR_RCX CMT_ASM(".byte 0X48, 0X2B, 0X19 # subq (%rcx), %rbx")
#define SUB_RBX_FROM_PTR_RDX CMT_ASM(".byte 0X48, 0X2B, 0X1A # subq (%rdx), %rbx")
#define SUB_RBX_FROM_PTR_RDI CMT_ASM(".byte 0X48, 0X2B, 0X1F # subq (%rdi), %rbx")
#define SUB_RBX_FROM_PTR_RSI CMT_ASM(".byte 0X48, 0X2B, 0X1E # subq (%rsi), %rbx")
#define SUB_RBX_FROM_PTR_RBP CMT_ASM(".byte 0X48, 0X2B, 0X5D, 0X00 # subq (%rbp), %rbx")
#define SUB_RBX_FROM_PTR_RSP CMT_ASM(".byte 0X48, 0X2B, 0X1C, 0X24 # subq (%rsp), %rbx")
#define SUB_RBX_FROM_PTR_R8 CMT_ASM(".byte 0X49, 0X2B, 0X18 # subq (%r8), %rbx")
#define SUB_RBX_FROM_PTR_R9 CMT_ASM(".byte 0X49, 0X2B, 0X19 # subq (%r9), %rbx")
#define SUB_RBX_FROM_PTR_R10 CMT_ASM(".byte 0X49, 0X2B, 0X1A # subq (%r10), %rbx")
#define SUB_RBX_FROM_PTR_R11 CMT_ASM(".byte 0X49, 0X2B, 0X1B # subq (%r11), %rbx")
#define SUB_RBX_FROM_PTR_R12 CMT_ASM(".byte 0X49, 0X2B, 0X1C, 0X24 # subq (%r12), %rbx")
#define SUB_RBX_FROM_PTR_R13 CMT_ASM(".byte 0X49, 0X2B, 0X5D, 0X00 # subq (%r13), %rbx")
#define SUB_RBX_FROM_PTR_R14 CMT_ASM(".byte 0X49, 0X2B, 0X1E # subq (%r14), %rbx")
#define SUB_RBX_FROM_PTR_R15 CMT_ASM(".byte 0X49, 0X2B, 0X1F # subq (%r15), %rbx")
#define SUB_RBX_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X2B, 0X18 # subq (%eax), %rbx")
#define SUB_RBX_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X2B, 0X1B # subq (%ebx), %rbx")
#define SUB_RBX_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X2B, 0X19 # subq (%ecx), %rbx")
#define SUB_RBX_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X2B, 0X1A # subq (%edx), %rbx")
#define SUB_RBX_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X2B, 0X1F # subq (%edi), %rbx")
#define SUB_RBX_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X2B, 0X1E # subq (%esi), %rbx")
#define SUB_RBX_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X2B, 0X5D, 0X00 # subq (%ebp), %rbx")
#define SUB_RBX_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X2B, 0X1C, 0X24 # subq (%esp), %rbx")

#define SUB_RCX_FROM_PTR_RAX CMT_ASM(".byte 0X48, 0X2B, 0X08 # subq (%rax), %rcx")
#define SUB_RCX_FROM_PTR_RBX CMT_ASM(".byte 0X48, 0X2B, 0X0B # subq (%rbx), %rcx")
#define SUB_RCX_FROM_PTR_RCX CMT_ASM(".byte 0X48, 0X2B, 0X09 # subq (%rcx), %rcx")
#define SUB_RCX_FROM_PTR_RDX CMT_ASM(".byte 0X48, 0X2B, 0X0A # subq (%rdx), %rcx")
#define SUB_RCX_FROM_PTR_RDI CMT_ASM(".byte 0X48, 0X2B, 0X0F # subq (%rdi), %rcx")
#define SUB_RCX_FROM_PTR_RSI CMT_ASM(".byte 0X48, 0X2B, 0X0E # subq (%rsi), %rcx")
#define SUB_RCX_FROM_PTR_RBP CMT_ASM(".byte 0X48, 0X2B, 0X4D, 0X00 # subq (%rbp), %rcx")
#define SUB_RCX_FROM_PTR_RSP CMT_ASM(".byte 0X48, 0X2B, 0X0C, 0X24 # subq (%rsp), %rcx")
#define SUB_RCX_FROM_PTR_R8 CMT_ASM(".byte 0X49, 0X2B, 0X08 # subq (%r8), %rcx")
#define SUB_RCX_FROM_PTR_R9 CMT_ASM(".byte 0X49, 0X2B, 0X09 # subq (%r9), %rcx")
#define SUB_RCX_FROM_PTR_R10 CMT_ASM(".byte 0X49, 0X2B, 0X0A # subq (%r10), %rcx")
#define SUB_RCX_FROM_PTR_R11 CMT_ASM(".byte 0X49, 0X2B, 0X0B # subq (%r11), %rcx")
#define SUB_RCX_FROM_PTR_R12 CMT_ASM(".byte 0X49, 0X2B, 0X0C, 0X24 # subq (%r12), %rcx")
#define SUB_RCX_FROM_PTR_R13 CMT_ASM(".byte 0X49, 0X2B, 0X4D, 0X00 # subq (%r13), %rcx")
#define SUB_RCX_FROM_PTR_R14 CMT_ASM(".byte 0X49, 0X2B, 0X0E # subq (%r14), %rcx")
#define SUB_RCX_FROM_PTR_R15 CMT_ASM(".byte 0X49, 0X2B, 0X0F # subq (%r15), %rcx")
#define SUB_RCX_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X2B, 0X08 # subq (%eax), %rcx")
#define SUB_RCX_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X2B, 0X0B # subq (%ebx), %rcx")
#define SUB_RCX_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X2B, 0X09 # subq (%ecx), %rcx")
#define SUB_RCX_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X2B, 0X0A # subq (%edx), %rcx")
#define SUB_RCX_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X2B, 0X0F # subq (%edi), %rcx")
#define SUB_RCX_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X2B, 0X0E # subq (%esi), %rcx")
#define SUB_RCX_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X2B, 0X4D, 0X00 # subq (%ebp), %rcx")
#define SUB_RCX_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X2B, 0X0C, 0X24 # subq (%esp), %rcx")

#define SUB_RDX_FROM_PTR_RAX CMT_ASM(".byte 0X48, 0X2B, 0X10 # subq (%rax), %rdx")
#define SUB_RDX_FROM_PTR_RBX CMT_ASM(".byte 0X48, 0X2B, 0X13 # subq (%rbx), %rdx")
#define SUB_RDX_FROM_PTR_RCX CMT_ASM(".byte 0X48, 0X2B, 0X11 # subq (%rcx), %rdx")
#define SUB_RDX_FROM_PTR_RDX CMT_ASM(".byte 0X48, 0X2B, 0X12 # subq (%rdx), %rdx")
#define SUB_RDX_FROM_PTR_RDI CMT_ASM(".byte 0X48, 0X2B, 0X17 # subq (%rdi), %rdx")
#define SUB_RDX_FROM_PTR_RSI CMT_ASM(".byte 0X48, 0X2B, 0X16 # subq (%rsi), %rdx")
#define SUB_RDX_FROM_PTR_RBP CMT_ASM(".byte 0X48, 0X2B, 0X55, 0X00 # subq (%rbp), %rdx")
#define SUB_RDX_FROM_PTR_RSP CMT_ASM(".byte 0X48, 0X2B, 0X14, 0X24 # subq (%rsp), %rdx")
#define SUB_RDX_FROM_PTR_R8 CMT_ASM(".byte 0X49, 0X2B, 0X10 # subq (%r8), %rdx")
#define SUB_RDX_FROM_PTR_R9 CMT_ASM(".byte 0X49, 0X2B, 0X11 # subq (%r9), %rdx")
#define SUB_RDX_FROM_PTR_R10 CMT_ASM(".byte 0X49, 0X2B, 0X12 # subq (%r10), %rdx")
#define SUB_RDX_FROM_PTR_R11 CMT_ASM(".byte 0X49, 0X2B, 0X13 # subq (%r11), %rdx")
#define SUB_RDX_FROM_PTR_R12 CMT_ASM(".byte 0X49, 0X2B, 0X14, 0X24 # subq (%r12), %rdx")
#define SUB_RDX_FROM_PTR_R13 CMT_ASM(".byte 0X49, 0X2B, 0X55, 0X00 # subq (%r13), %rdx")
#define SUB_RDX_FROM_PTR_R14 CMT_ASM(".byte 0X49, 0X2B, 0X16 # subq (%r14), %rdx")
#define SUB_RDX_FROM_PTR_R15 CMT_ASM(".byte 0X49, 0X2B, 0X17 # subq (%r15), %rdx")
#define SUB_RDX_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X2B, 0X10 # subq (%eax), %rdx")
#define SUB_RDX_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X2B, 0X13 # subq (%ebx), %rdx")
#define SUB_RDX_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X2B, 0X11 # subq (%ecx), %rdx")
#define SUB_RDX_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X2B, 0X12 # subq (%edx), %rdx")
#define SUB_RDX_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X2B, 0X17 # subq (%edi), %rdx")
#define SUB_RDX_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X2B, 0X16 # subq (%esi), %rdx")
#define SUB_RDX_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X2B, 0X55, 0X00 # subq (%ebp), %rdx")
#define SUB_RDX_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X2B, 0X14, 0X24 # subq (%esp), %rdx")

#define SUB_RDI_FROM_PTR_RAX CMT_ASM(".byte 0X48, 0X2B, 0X38 # subq (%rax), %rdi")
#define SUB_RDI_FROM_PTR_RBX CMT_ASM(".byte 0X48, 0X2B, 0X3B # subq (%rbx), %rdi")
#define SUB_RDI_FROM_PTR_RCX CMT_ASM(".byte 0X48, 0X2B, 0X39 # subq (%rcx), %rdi")
#define SUB_RDI_FROM_PTR_RDX CMT_ASM(".byte 0X48, 0X2B, 0X3A # subq (%rdx), %rdi")
#define SUB_RDI_FROM_PTR_RDI CMT_ASM(".byte 0X48, 0X2B, 0X3F # subq (%rdi), %rdi")
#define SUB_RDI_FROM_PTR_RSI CMT_ASM(".byte 0X48, 0X2B, 0X3E # subq (%rsi), %rdi")
#define SUB_RDI_FROM_PTR_RBP CMT_ASM(".byte 0X48, 0X2B, 0X7D, 0X00 # subq (%rbp), %rdi")
#define SUB_RDI_FROM_PTR_RSP CMT_ASM(".byte 0X48, 0X2B, 0X3C, 0X24 # subq (%rsp), %rdi")
#define SUB_RDI_FROM_PTR_R8 CMT_ASM(".byte 0X49, 0X2B, 0X38 # subq (%r8), %rdi")
#define SUB_RDI_FROM_PTR_R9 CMT_ASM(".byte 0X49, 0X2B, 0X39 # subq (%r9), %rdi")
#define SUB_RDI_FROM_PTR_R10 CMT_ASM(".byte 0X49, 0X2B, 0X3A # subq (%r10), %rdi")
#define SUB_RDI_FROM_PTR_R11 CMT_ASM(".byte 0X49, 0X2B, 0X3B # subq (%r11), %rdi")
#define SUB_RDI_FROM_PTR_R12 CMT_ASM(".byte 0X49, 0X2B, 0X3C, 0X24 # subq (%r12), %rdi")
#define SUB_RDI_FROM_PTR_R13 CMT_ASM(".byte 0X49, 0X2B, 0X7D, 0X00 # subq (%r13), %rdi")
#define SUB_RDI_FROM_PTR_R14 CMT_ASM(".byte 0X49, 0X2B, 0X3E # subq (%r14), %rdi")
#define SUB_RDI_FROM_PTR_R15 CMT_ASM(".byte 0X49, 0X2B, 0X3F # subq (%r15), %rdi")
#define SUB_RDI_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X2B, 0X38 # subq (%eax), %rdi")
#define SUB_RDI_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X2B, 0X3B # subq (%ebx), %rdi")
#define SUB_RDI_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X2B, 0X39 # subq (%ecx), %rdi")
#define SUB_RDI_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X2B, 0X3A # subq (%edx), %rdi")
#define SUB_RDI_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X2B, 0X3F # subq (%edi), %rdi")
#define SUB_RDI_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X2B, 0X3E # subq (%esi), %rdi")
#define SUB_RDI_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X2B, 0X7D, 0X00 # subq (%ebp), %rdi")
#define SUB_RDI_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X2B, 0X3C, 0X24 # subq (%esp), %rdi")

#define SUB_RSI_FROM_PTR_RAX CMT_ASM(".byte 0X48, 0X2B, 0X30 # subq (%rax), %rsi")
#define SUB_RSI_FROM_PTR_RBX CMT_ASM(".byte 0X48, 0X2B, 0X33 # subq (%rbx), %rsi")
#define SUB_RSI_FROM_PTR_RCX CMT_ASM(".byte 0X48, 0X2B, 0X31 # subq (%rcx), %rsi")
#define SUB_RSI_FROM_PTR_RDX CMT_ASM(".byte 0X48, 0X2B, 0X32 # subq (%rdx), %rsi")
#define SUB_RSI_FROM_PTR_RDI CMT_ASM(".byte 0X48, 0X2B, 0X37 # subq (%rdi), %rsi")
#define SUB_RSI_FROM_PTR_RSI CMT_ASM(".byte 0X48, 0X2B, 0X36 # subq (%rsi), %rsi")
#define SUB_RSI_FROM_PTR_RBP CMT_ASM(".byte 0X48, 0X2B, 0X75, 0X00 # subq (%rbp), %rsi")
#define SUB_RSI_FROM_PTR_RSP CMT_ASM(".byte 0X48, 0X2B, 0X34, 0X24 # subq (%rsp), %rsi")
#define SUB_RSI_FROM_PTR_R8 CMT_ASM(".byte 0X49, 0X2B, 0X30 # subq (%r8), %rsi")
#define SUB_RSI_FROM_PTR_R9 CMT_ASM(".byte 0X49, 0X2B, 0X31 # subq (%r9), %rsi")
#define SUB_RSI_FROM_PTR_R10 CMT_ASM(".byte 0X49, 0X2B, 0X32 # subq (%r10), %rsi")
#define SUB_RSI_FROM_PTR_R11 CMT_ASM(".byte 0X49, 0X2B, 0X33 # subq (%r11), %rsi")
#define SUB_RSI_FROM_PTR_R12 CMT_ASM(".byte 0X49, 0X2B, 0X34, 0X24 # subq (%r12), %rsi")
#define SUB_RSI_FROM_PTR_R13 CMT_ASM(".byte 0X49, 0X2B, 0X75, 0X00 # subq (%r13), %rsi")
#define SUB_RSI_FROM_PTR_R14 CMT_ASM(".byte 0X49, 0X2B, 0X36 # subq (%r14), %rsi")
#define SUB_RSI_FROM_PTR_R15 CMT_ASM(".byte 0X49, 0X2B, 0X37 # subq (%r15), %rsi")
#define SUB_RSI_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X2B, 0X30 # subq (%eax), %rsi")
#define SUB_RSI_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X2B, 0X33 # subq (%ebx), %rsi")
#define SUB_RSI_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X2B, 0X31 # subq (%ecx), %rsi")
#define SUB_RSI_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X2B, 0X32 # subq (%edx), %rsi")
#define SUB_RSI_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X2B, 0X37 # subq (%edi), %rsi")
#define SUB_RSI_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X2B, 0X36 # subq (%esi), %rsi")
#define SUB_RSI_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X2B, 0X75, 0X00 # subq (%ebp), %rsi")
#define SUB_RSI_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X2B, 0X34, 0X24 # subq (%esp), %rsi")

#define SUB_RBP_FROM_PTR_RAX CMT_ASM(".byte 0X48, 0X2B, 0X28 # subq (%rax), %rbp")
#define SUB_RBP_FROM_PTR_RBX CMT_ASM(".byte 0X48, 0X2B, 0X2B # subq (%rbx), %rbp")
#define SUB_RBP_FROM_PTR_RCX CMT_ASM(".byte 0X48, 0X2B, 0X29 # subq (%rcx), %rbp")
#define SUB_RBP_FROM_PTR_RDX CMT_ASM(".byte 0X48, 0X2B, 0X2A # subq (%rdx), %rbp")
#define SUB_RBP_FROM_PTR_RDI CMT_ASM(".byte 0X48, 0X2B, 0X2F # subq (%rdi), %rbp")
#define SUB_RBP_FROM_PTR_RSI CMT_ASM(".byte 0X48, 0X2B, 0X2E # subq (%rsi), %rbp")
#define SUB_RBP_FROM_PTR_RBP CMT_ASM(".byte 0X48, 0X2B, 0X6D, 0X00 # subq (%rbp), %rbp")
#define SUB_RBP_FROM_PTR_RSP CMT_ASM(".byte 0X48, 0X2B, 0X2C, 0X24 # subq (%rsp), %rbp")
#define SUB_RBP_FROM_PTR_R8 CMT_ASM(".byte 0X49, 0X2B, 0X28 # subq (%r8), %rbp")
#define SUB_RBP_FROM_PTR_R9 CMT_ASM(".byte 0X49, 0X2B, 0X29 # subq (%r9), %rbp")
#define SUB_RBP_FROM_PTR_R10 CMT_ASM(".byte 0X49, 0X2B, 0X2A # subq (%r10), %rbp")
#define SUB_RBP_FROM_PTR_R11 CMT_ASM(".byte 0X49, 0X2B, 0X2B # subq (%r11), %rbp")
#define SUB_RBP_FROM_PTR_R12 CMT_ASM(".byte 0X49, 0X2B, 0X2C, 0X24 # subq (%r12), %rbp")
#define SUB_RBP_FROM_PTR_R13 CMT_ASM(".byte 0X49, 0X2B, 0X6D, 0X00 # subq (%r13), %rbp")
#define SUB_RBP_FROM_PTR_R14 CMT_ASM(".byte 0X49, 0X2B, 0X2E # subq (%r14), %rbp")
#define SUB_RBP_FROM_PTR_R15 CMT_ASM(".byte 0X49, 0X2B, 0X2F # subq (%r15), %rbp")
#define SUB_RBP_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X2B, 0X28 # subq (%eax), %rbp")
#define SUB_RBP_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X2B, 0X2B # subq (%ebx), %rbp")
#define SUB_RBP_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X2B, 0X29 # subq (%ecx), %rbp")
#define SUB_RBP_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X2B, 0X2A # subq (%edx), %rbp")
#define SUB_RBP_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X2B, 0X2F # subq (%edi), %rbp")
#define SUB_RBP_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X2B, 0X2E # subq (%esi), %rbp")
#define SUB_RBP_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X2B, 0X6D, 0X00 # subq (%ebp), %rbp")
#define SUB_RBP_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X2B, 0X2C, 0X24 # subq (%esp), %rbp")

#define SUB_RSP_FROM_PTR_RAX CMT_ASM(".byte 0X48, 0X2B, 0X20 # subq (%rax), %rsp")
#define SUB_RSP_FROM_PTR_RBX CMT_ASM(".byte 0X48, 0X2B, 0X23 # subq (%rbx), %rsp")
#define SUB_RSP_FROM_PTR_RCX CMT_ASM(".byte 0X48, 0X2B, 0X21 # subq (%rcx), %rsp")
#define SUB_RSP_FROM_PTR_RDX CMT_ASM(".byte 0X48, 0X2B, 0X22 # subq (%rdx), %rsp")
#define SUB_RSP_FROM_PTR_RDI CMT_ASM(".byte 0X48, 0X2B, 0X27 # subq (%rdi), %rsp")
#define SUB_RSP_FROM_PTR_RSI CMT_ASM(".byte 0X48, 0X2B, 0X26 # subq (%rsi), %rsp")
#define SUB_RSP_FROM_PTR_RBP CMT_ASM(".byte 0X48, 0X2B, 0X65, 0X00 # subq (%rbp), %rsp")
#define SUB_RSP_FROM_PTR_RSP CMT_ASM(".byte 0X48, 0X2B, 0X24, 0X24 # subq (%rsp), %rsp")
#define SUB_RSP_FROM_PTR_R8 CMT_ASM(".byte 0X49, 0X2B, 0X20 # subq (%r8), %rsp")
#define SUB_RSP_FROM_PTR_R9 CMT_ASM(".byte 0X49, 0X2B, 0X21 # subq (%r9), %rsp")
#define SUB_RSP_FROM_PTR_R10 CMT_ASM(".byte 0X49, 0X2B, 0X22 # subq (%r10), %rsp")
#define SUB_RSP_FROM_PTR_R11 CMT_ASM(".byte 0X49, 0X2B, 0X23 # subq (%r11), %rsp")
#define SUB_RSP_FROM_PTR_R12 CMT_ASM(".byte 0X49, 0X2B, 0X24, 0X24 # subq (%r12), %rsp")
#define SUB_RSP_FROM_PTR_R13 CMT_ASM(".byte 0X49, 0X2B, 0X65, 0X00 # subq (%r13), %rsp")
#define SUB_RSP_FROM_PTR_R14 CMT_ASM(".byte 0X49, 0X2B, 0X26 # subq (%r14), %rsp")
#define SUB_RSP_FROM_PTR_R15 CMT_ASM(".byte 0X49, 0X2B, 0X27 # subq (%r15), %rsp")
#define SUB_RSP_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X2B, 0X20 # subq (%eax), %rsp")
#define SUB_RSP_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X2B, 0X23 # subq (%ebx), %rsp")
#define SUB_RSP_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X2B, 0X21 # subq (%ecx), %rsp")
#define SUB_RSP_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X2B, 0X22 # subq (%edx), %rsp")
#define SUB_RSP_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X2B, 0X27 # subq (%edi), %rsp")
#define SUB_RSP_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X2B, 0X26 # subq (%esi), %rsp")
#define SUB_RSP_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X2B, 0X65, 0X00 # subq (%ebp), %rsp")
#define SUB_RSP_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X2B, 0X24, 0X24 # subq (%esp), %rsp")

#define SUB_R8_FROM_PTR_RAX CMT_ASM(".byte 0X4C, 0X2B, 0X00 # subq (%rax), %r8")
#define SUB_R8_FROM_PTR_RBX CMT_ASM(".byte 0X4C, 0X2B, 0X03 # subq (%rbx), %r8")
#define SUB_R8_FROM_PTR_RCX CMT_ASM(".byte 0X4C, 0X2B, 0X01 # subq (%rcx), %r8")
#define SUB_R8_FROM_PTR_RDX CMT_ASM(".byte 0X4C, 0X2B, 0X02 # subq (%rdx), %r8")
#define SUB_R8_FROM_PTR_RDI CMT_ASM(".byte 0X4C, 0X2B, 0X07 # subq (%rdi), %r8")
#define SUB_R8_FROM_PTR_RSI CMT_ASM(".byte 0X4C, 0X2B, 0X06 # subq (%rsi), %r8")
#define SUB_R8_FROM_PTR_RBP CMT_ASM(".byte 0X4C, 0X2B, 0X45, 0X00 # subq (%rbp), %r8")
#define SUB_R8_FROM_PTR_RSP CMT_ASM(".byte 0X4C, 0X2B, 0X04, 0X24 # subq (%rsp), %r8")
#define SUB_R8_FROM_PTR_R8 CMT_ASM(".byte 0X4D, 0X2B, 0X00 # subq (%r8), %r8")
#define SUB_R8_FROM_PTR_R9 CMT_ASM(".byte 0X4D, 0X2B, 0X01 # subq (%r9), %r8")
#define SUB_R8_FROM_PTR_R10 CMT_ASM(".byte 0X4D, 0X2B, 0X02 # subq (%r10), %r8")
#define SUB_R8_FROM_PTR_R11 CMT_ASM(".byte 0X4D, 0X2B, 0X03 # subq (%r11), %r8")
#define SUB_R8_FROM_PTR_R12 CMT_ASM(".byte 0X4D, 0X2B, 0X04, 0X24 # subq (%r12), %r8")
#define SUB_R8_FROM_PTR_R13 CMT_ASM(".byte 0X4D, 0X2B, 0X45, 0X00 # subq (%r13), %r8")
#define SUB_R8_FROM_PTR_R14 CMT_ASM(".byte 0X4D, 0X2B, 0X06 # subq (%r14), %r8")
#define SUB_R8_FROM_PTR_R15 CMT_ASM(".byte 0X4D, 0X2B, 0X07 # subq (%r15), %r8")
#define SUB_R8_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0X00 # subq (%eax), %r8")
#define SUB_R8_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0X03 # subq (%ebx), %r8")
#define SUB_R8_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0X01 # subq (%ecx), %r8")
#define SUB_R8_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0X02 # subq (%edx), %r8")
#define SUB_R8_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0X07 # subq (%edi), %r8")
#define SUB_R8_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0X06 # subq (%esi), %r8")
#define SUB_R8_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0X45, 0X00 # subq (%ebp), %r8")
#define SUB_R8_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0X04, 0X24 # subq (%esp), %r8")

#define SUB_R9_FROM_PTR_RAX CMT_ASM(".byte 0X4C, 0X2B, 0X08 # subq (%rax), %r9")
#define SUB_R9_FROM_PTR_RBX CMT_ASM(".byte 0X4C, 0X2B, 0X0B # subq (%rbx), %r9")
#define SUB_R9_FROM_PTR_RCX CMT_ASM(".byte 0X4C, 0X2B, 0X09 # subq (%rcx), %r9")
#define SUB_R9_FROM_PTR_RDX CMT_ASM(".byte 0X4C, 0X2B, 0X0A # subq (%rdx), %r9")
#define SUB_R9_FROM_PTR_RDI CMT_ASM(".byte 0X4C, 0X2B, 0X0F # subq (%rdi), %r9")
#define SUB_R9_FROM_PTR_RSI CMT_ASM(".byte 0X4C, 0X2B, 0X0E # subq (%rsi), %r9")
#define SUB_R9_FROM_PTR_RBP CMT_ASM(".byte 0X4C, 0X2B, 0X4D, 0X00 # subq (%rbp), %r9")
#define SUB_R9_FROM_PTR_RSP CMT_ASM(".byte 0X4C, 0X2B, 0X0C, 0X24 # subq (%rsp), %r9")
#define SUB_R9_FROM_PTR_R8 CMT_ASM(".byte 0X4D, 0X2B, 0X08 # subq (%r8), %r9")
#define SUB_R9_FROM_PTR_R9 CMT_ASM(".byte 0X4D, 0X2B, 0X09 # subq (%r9), %r9")
#define SUB_R9_FROM_PTR_R10 CMT_ASM(".byte 0X4D, 0X2B, 0X0A # subq (%r10), %r9")
#define SUB_R9_FROM_PTR_R11 CMT_ASM(".byte 0X4D, 0X2B, 0X0B # subq (%r11), %r9")
#define SUB_R9_FROM_PTR_R12 CMT_ASM(".byte 0X4D, 0X2B, 0X0C, 0X24 # subq (%r12), %r9")
#define SUB_R9_FROM_PTR_R13 CMT_ASM(".byte 0X4D, 0X2B, 0X4D, 0X00 # subq (%r13), %r9")
#define SUB_R9_FROM_PTR_R14 CMT_ASM(".byte 0X4D, 0X2B, 0X0E # subq (%r14), %r9")
#define SUB_R9_FROM_PTR_R15 CMT_ASM(".byte 0X4D, 0X2B, 0X0F # subq (%r15), %r9")
#define SUB_R9_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0X08 # subq (%eax), %r9")
#define SUB_R9_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0X0B # subq (%ebx), %r9")
#define SUB_R9_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0X09 # subq (%ecx), %r9")
#define SUB_R9_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0X0A # subq (%edx), %r9")
#define SUB_R9_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0X0F # subq (%edi), %r9")
#define SUB_R9_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0X0E # subq (%esi), %r9")
#define SUB_R9_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0X4D, 0X00 # subq (%ebp), %r9")
#define SUB_R9_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0X0C, 0X24 # subq (%esp), %r9")

#define SUB_R10_FROM_PTR_RAX CMT_ASM(".byte 0X4C, 0X2B, 0X10 # subq (%rax), %r10")
#define SUB_R10_FROM_PTR_RBX CMT_ASM(".byte 0X4C, 0X2B, 0X13 # subq (%rbx), %r10")
#define SUB_R10_FROM_PTR_RCX CMT_ASM(".byte 0X4C, 0X2B, 0X11 # subq (%rcx), %r10")
#define SUB_R10_FROM_PTR_RDX CMT_ASM(".byte 0X4C, 0X2B, 0X12 # subq (%rdx), %r10")
#define SUB_R10_FROM_PTR_RDI CMT_ASM(".byte 0X4C, 0X2B, 0X17 # subq (%rdi), %r10")
#define SUB_R10_FROM_PTR_RSI CMT_ASM(".byte 0X4C, 0X2B, 0X16 # subq (%rsi), %r10")
#define SUB_R10_FROM_PTR_RBP CMT_ASM(".byte 0X4C, 0X2B, 0X55, 0X00 # subq (%rbp), %r10")
#define SUB_R10_FROM_PTR_RSP CMT_ASM(".byte 0X4C, 0X2B, 0X14, 0X24 # subq (%rsp), %r10")
#define SUB_R10_FROM_PTR_R8 CMT_ASM(".byte 0X4D, 0X2B, 0X10 # subq (%r8), %r10")
#define SUB_R10_FROM_PTR_R9 CMT_ASM(".byte 0X4D, 0X2B, 0X11 # subq (%r9), %r10")
#define SUB_R10_FROM_PTR_R10 CMT_ASM(".byte 0X4D, 0X2B, 0X12 # subq (%r10), %r10")
#define SUB_R10_FROM_PTR_R11 CMT_ASM(".byte 0X4D, 0X2B, 0X13 # subq (%r11), %r10")
#define SUB_R10_FROM_PTR_R12 CMT_ASM(".byte 0X4D, 0X2B, 0X14, 0X24 # subq (%r12), %r10")
#define SUB_R10_FROM_PTR_R13 CMT_ASM(".byte 0X4D, 0X2B, 0X55, 0X00 # subq (%r13), %r10")
#define SUB_R10_FROM_PTR_R14 CMT_ASM(".byte 0X4D, 0X2B, 0X16 # subq (%r14), %r10")
#define SUB_R10_FROM_PTR_R15 CMT_ASM(".byte 0X4D, 0X2B, 0X17 # subq (%r15), %r10")
#define SUB_R10_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0X10 # subq (%eax), %r10")
#define SUB_R10_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0X13 # subq (%ebx), %r10")
#define SUB_R10_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0X11 # subq (%ecx), %r10")
#define SUB_R10_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0X12 # subq (%edx), %r10")
#define SUB_R10_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0X17 # subq (%edi), %r10")
#define SUB_R10_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0X16 # subq (%esi), %r10")
#define SUB_R10_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0X55, 0X00 # subq (%ebp), %r10")
#define SUB_R10_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0X14, 0X24 # subq (%esp), %r10")

#define SUB_R11_FROM_PTR_RAX CMT_ASM(".byte 0X4C, 0X2B, 0X18 # subq (%rax), %r11")
#define SUB_R11_FROM_PTR_RBX CMT_ASM(".byte 0X4C, 0X2B, 0X1B # subq (%rbx), %r11")
#define SUB_R11_FROM_PTR_RCX CMT_ASM(".byte 0X4C, 0X2B, 0X19 # subq (%rcx), %r11")
#define SUB_R11_FROM_PTR_RDX CMT_ASM(".byte 0X4C, 0X2B, 0X1A # subq (%rdx), %r11")
#define SUB_R11_FROM_PTR_RDI CMT_ASM(".byte 0X4C, 0X2B, 0X1F # subq (%rdi), %r11")
#define SUB_R11_FROM_PTR_RSI CMT_ASM(".byte 0X4C, 0X2B, 0X1E # subq (%rsi), %r11")
#define SUB_R11_FROM_PTR_RBP CMT_ASM(".byte 0X4C, 0X2B, 0X5D, 0X00 # subq (%rbp), %r11")
#define SUB_R11_FROM_PTR_RSP CMT_ASM(".byte 0X4C, 0X2B, 0X1C, 0X24 # subq (%rsp), %r11")
#define SUB_R11_FROM_PTR_R8 CMT_ASM(".byte 0X4D, 0X2B, 0X18 # subq (%r8), %r11")
#define SUB_R11_FROM_PTR_R9 CMT_ASM(".byte 0X4D, 0X2B, 0X19 # subq (%r9), %r11")
#define SUB_R11_FROM_PTR_R10 CMT_ASM(".byte 0X4D, 0X2B, 0X1A # subq (%r10), %r11")
#define SUB_R11_FROM_PTR_R11 CMT_ASM(".byte 0X4D, 0X2B, 0X1B # subq (%r11), %r11")
#define SUB_R11_FROM_PTR_R12 CMT_ASM(".byte 0X4D, 0X2B, 0X1C, 0X24 # subq (%r12), %r11")
#define SUB_R11_FROM_PTR_R13 CMT_ASM(".byte 0X4D, 0X2B, 0X5D, 0X00 # subq (%r13), %r11")
#define SUB_R11_FROM_PTR_R14 CMT_ASM(".byte 0X4D, 0X2B, 0X1E # subq (%r14), %r11")
#define SUB_R11_FROM_PTR_R15 CMT_ASM(".byte 0X4D, 0X2B, 0X1F # subq (%r15), %r11")
#define SUB_R11_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0X18 # subq (%eax), %r11")
#define SUB_R11_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0X1B # subq (%ebx), %r11")
#define SUB_R11_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0X19 # subq (%ecx), %r11")
#define SUB_R11_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0X1A # subq (%edx), %r11")
#define SUB_R11_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0X1F # subq (%edi), %r11")
#define SUB_R11_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0X1E # subq (%esi), %r11")
#define SUB_R11_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0X5D, 0X00 # subq (%ebp), %r11")
#define SUB_R11_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0X1C, 0X24 # subq (%esp), %r11")

#define SUB_R12_FROM_PTR_RAX CMT_ASM(".byte 0X4C, 0X2B, 0X20 # subq (%rax), %r12")
#define SUB_R12_FROM_PTR_RBX CMT_ASM(".byte 0X4C, 0X2B, 0X23 # subq (%rbx), %r12")
#define SUB_R12_FROM_PTR_RCX CMT_ASM(".byte 0X4C, 0X2B, 0X21 # subq (%rcx), %r12")
#define SUB_R12_FROM_PTR_RDX CMT_ASM(".byte 0X4C, 0X2B, 0X22 # subq (%rdx), %r12")
#define SUB_R12_FROM_PTR_RDI CMT_ASM(".byte 0X4C, 0X2B, 0X27 # subq (%rdi), %r12")
#define SUB_R12_FROM_PTR_RSI CMT_ASM(".byte 0X4C, 0X2B, 0X26 # subq (%rsi), %r12")
#define SUB_R12_FROM_PTR_RBP CMT_ASM(".byte 0X4C, 0X2B, 0X65, 0X00 # subq (%rbp), %r12")
#define SUB_R12_FROM_PTR_RSP CMT_ASM(".byte 0X4C, 0X2B, 0X24, 0X24 # subq (%rsp), %r12")
#define SUB_R12_FROM_PTR_R8 CMT_ASM(".byte 0X4D, 0X2B, 0X20 # subq (%r8), %r12")
#define SUB_R12_FROM_PTR_R9 CMT_ASM(".byte 0X4D, 0X2B, 0X21 # subq (%r9), %r12")
#define SUB_R12_FROM_PTR_R10 CMT_ASM(".byte 0X4D, 0X2B, 0X22 # subq (%r10), %r12")
#define SUB_R12_FROM_PTR_R11 CMT_ASM(".byte 0X4D, 0X2B, 0X23 # subq (%r11), %r12")
#define SUB_R12_FROM_PTR_R12 CMT_ASM(".byte 0X4D, 0X2B, 0X24, 0X24 # subq (%r12), %r12")
#define SUB_R12_FROM_PTR_R13 CMT_ASM(".byte 0X4D, 0X2B, 0X65, 0X00 # subq (%r13), %r12")
#define SUB_R12_FROM_PTR_R14 CMT_ASM(".byte 0X4D, 0X2B, 0X26 # subq (%r14), %r12")
#define SUB_R12_FROM_PTR_R15 CMT_ASM(".byte 0X4D, 0X2B, 0X27 # subq (%r15), %r12")
#define SUB_R12_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0X20 # subq (%eax), %r12")
#define SUB_R12_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0X23 # subq (%ebx), %r12")
#define SUB_R12_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0X21 # subq (%ecx), %r12")
#define SUB_R12_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0X22 # subq (%edx), %r12")
#define SUB_R12_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0X27 # subq (%edi), %r12")
#define SUB_R12_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0X26 # subq (%esi), %r12")
#define SUB_R12_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0X65, 0X00 # subq (%ebp), %r12")
#define SUB_R12_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0X24, 0X24 # subq (%esp), %r12")

#define SUB_R13_FROM_PTR_RAX CMT_ASM(".byte 0X4C, 0X2B, 0X28 # subq (%rax), %r13")
#define SUB_R13_FROM_PTR_RBX CMT_ASM(".byte 0X4C, 0X2B, 0X2B # subq (%rbx), %r13")
#define SUB_R13_FROM_PTR_RCX CMT_ASM(".byte 0X4C, 0X2B, 0X29 # subq (%rcx), %r13")
#define SUB_R13_FROM_PTR_RDX CMT_ASM(".byte 0X4C, 0X2B, 0X2A # subq (%rdx), %r13")
#define SUB_R13_FROM_PTR_RDI CMT_ASM(".byte 0X4C, 0X2B, 0X2F # subq (%rdi), %r13")
#define SUB_R13_FROM_PTR_RSI CMT_ASM(".byte 0X4C, 0X2B, 0X2E # subq (%rsi), %r13")
#define SUB_R13_FROM_PTR_RBP CMT_ASM(".byte 0X4C, 0X2B, 0X6D, 0X00 # subq (%rbp), %r13")
#define SUB_R13_FROM_PTR_RSP CMT_ASM(".byte 0X4C, 0X2B, 0X2C, 0X24 # subq (%rsp), %r13")
#define SUB_R13_FROM_PTR_R8 CMT_ASM(".byte 0X4D, 0X2B, 0X28 # subq (%r8), %r13")
#define SUB_R13_FROM_PTR_R9 CMT_ASM(".byte 0X4D, 0X2B, 0X29 # subq (%r9), %r13")
#define SUB_R13_FROM_PTR_R10 CMT_ASM(".byte 0X4D, 0X2B, 0X2A # subq (%r10), %r13")
#define SUB_R13_FROM_PTR_R11 CMT_ASM(".byte 0X4D, 0X2B, 0X2B # subq (%r11), %r13")
#define SUB_R13_FROM_PTR_R12 CMT_ASM(".byte 0X4D, 0X2B, 0X2C, 0X24 # subq (%r12), %r13")
#define SUB_R13_FROM_PTR_R13 CMT_ASM(".byte 0X4D, 0X2B, 0X6D, 0X00 # subq (%r13), %r13")
#define SUB_R13_FROM_PTR_R14 CMT_ASM(".byte 0X4D, 0X2B, 0X2E # subq (%r14), %r13")
#define SUB_R13_FROM_PTR_R15 CMT_ASM(".byte 0X4D, 0X2B, 0X2F # subq (%r15), %r13")
#define SUB_R13_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0X28 # subq (%eax), %r13")
#define SUB_R13_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0X2B # subq (%ebx), %r13")
#define SUB_R13_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0X29 # subq (%ecx), %r13")
#define SUB_R13_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0X2A # subq (%edx), %r13")
#define SUB_R13_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0X2F # subq (%edi), %r13")
#define SUB_R13_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0X2E # subq (%esi), %r13")
#define SUB_R13_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0X6D, 0X00 # subq (%ebp), %r13")
#define SUB_R13_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0X2C, 0X24 # subq (%esp), %r13")

#define SUB_R14_FROM_PTR_RAX CMT_ASM(".byte 0X4C, 0X2B, 0X30 # subq (%rax), %r14")
#define SUB_R14_FROM_PTR_RBX CMT_ASM(".byte 0X4C, 0X2B, 0X33 # subq (%rbx), %r14")
#define SUB_R14_FROM_PTR_RCX CMT_ASM(".byte 0X4C, 0X2B, 0X31 # subq (%rcx), %r14")
#define SUB_R14_FROM_PTR_RDX CMT_ASM(".byte 0X4C, 0X2B, 0X32 # subq (%rdx), %r14")
#define SUB_R14_FROM_PTR_RDI CMT_ASM(".byte 0X4C, 0X2B, 0X37 # subq (%rdi), %r14")
#define SUB_R14_FROM_PTR_RSI CMT_ASM(".byte 0X4C, 0X2B, 0X36 # subq (%rsi), %r14")
#define SUB_R14_FROM_PTR_RBP CMT_ASM(".byte 0X4C, 0X2B, 0X75, 0X00 # subq (%rbp), %r14")
#define SUB_R14_FROM_PTR_RSP CMT_ASM(".byte 0X4C, 0X2B, 0X34, 0X24 # subq (%rsp), %r14")
#define SUB_R14_FROM_PTR_R8 CMT_ASM(".byte 0X4D, 0X2B, 0X30 # subq (%r8), %r14")
#define SUB_R14_FROM_PTR_R9 CMT_ASM(".byte 0X4D, 0X2B, 0X31 # subq (%r9), %r14")
#define SUB_R14_FROM_PTR_R10 CMT_ASM(".byte 0X4D, 0X2B, 0X32 # subq (%r10), %r14")
#define SUB_R14_FROM_PTR_R11 CMT_ASM(".byte 0X4D, 0X2B, 0X33 # subq (%r11), %r14")
#define SUB_R14_FROM_PTR_R12 CMT_ASM(".byte 0X4D, 0X2B, 0X34, 0X24 # subq (%r12), %r14")
#define SUB_R14_FROM_PTR_R13 CMT_ASM(".byte 0X4D, 0X2B, 0X75, 0X00 # subq (%r13), %r14")
#define SUB_R14_FROM_PTR_R14 CMT_ASM(".byte 0X4D, 0X2B, 0X36 # subq (%r14), %r14")
#define SUB_R14_FROM_PTR_R15 CMT_ASM(".byte 0X4D, 0X2B, 0X37 # subq (%r15), %r14")
#define SUB_R14_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0X30 # subq (%eax), %r14")
#define SUB_R14_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0X33 # subq (%ebx), %r14")
#define SUB_R14_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0X31 # subq (%ecx), %r14")
#define SUB_R14_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0X32 # subq (%edx), %r14")
#define SUB_R14_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0X37 # subq (%edi), %r14")
#define SUB_R14_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0X36 # subq (%esi), %r14")
#define SUB_R14_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0X75, 0X00 # subq (%ebp), %r14")
#define SUB_R14_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0X34, 0X24 # subq (%esp), %r14")

#define SUB_R15_FROM_PTR_RAX CMT_ASM(".byte 0X4C, 0X2B, 0X38 # subq (%rax), %r15")
#define SUB_R15_FROM_PTR_RBX CMT_ASM(".byte 0X4C, 0X2B, 0X3B # subq (%rbx), %r15")
#define SUB_R15_FROM_PTR_RCX CMT_ASM(".byte 0X4C, 0X2B, 0X39 # subq (%rcx), %r15")
#define SUB_R15_FROM_PTR_RDX CMT_ASM(".byte 0X4C, 0X2B, 0X3A # subq (%rdx), %r15")
#define SUB_R15_FROM_PTR_RDI CMT_ASM(".byte 0X4C, 0X2B, 0X3F # subq (%rdi), %r15")
#define SUB_R15_FROM_PTR_RSI CMT_ASM(".byte 0X4C, 0X2B, 0X3E # subq (%rsi), %r15")
#define SUB_R15_FROM_PTR_RBP CMT_ASM(".byte 0X4C, 0X2B, 0X7D, 0X00 # subq (%rbp), %r15")
#define SUB_R15_FROM_PTR_RSP CMT_ASM(".byte 0X4C, 0X2B, 0X3C, 0X24 # subq (%rsp), %r15")
#define SUB_R15_FROM_PTR_R8 CMT_ASM(".byte 0X4D, 0X2B, 0X38 # subq (%r8), %r15")
#define SUB_R15_FROM_PTR_R9 CMT_ASM(".byte 0X4D, 0X2B, 0X39 # subq (%r9), %r15")
#define SUB_R15_FROM_PTR_R10 CMT_ASM(".byte 0X4D, 0X2B, 0X3A # subq (%r10), %r15")
#define SUB_R15_FROM_PTR_R11 CMT_ASM(".byte 0X4D, 0X2B, 0X3B # subq (%r11), %r15")
#define SUB_R15_FROM_PTR_R12 CMT_ASM(".byte 0X4D, 0X2B, 0X3C, 0X24 # subq (%r12), %r15")
#define SUB_R15_FROM_PTR_R13 CMT_ASM(".byte 0X4D, 0X2B, 0X7D, 0X00 # subq (%r13), %r15")
#define SUB_R15_FROM_PTR_R14 CMT_ASM(".byte 0X4D, 0X2B, 0X3E # subq (%r14), %r15")
#define SUB_R15_FROM_PTR_R15 CMT_ASM(".byte 0X4D, 0X2B, 0X3F # subq (%r15), %r15")
#define SUB_R15_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0X38 # subq (%eax), %r15")
#define SUB_R15_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0X3B # subq (%ebx), %r15")
#define SUB_R15_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0X39 # subq (%ecx), %r15")
#define SUB_R15_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0X3A # subq (%edx), %r15")
#define SUB_R15_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0X3F # subq (%edi), %r15")
#define SUB_R15_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0X3E # subq (%esi), %r15")
#define SUB_R15_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0X7D, 0X00 # subq (%ebp), %r15")
#define SUB_R15_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0X3C, 0X24 # subq (%esp), %r15")

#define SUB_RAX_TO_PTR_RAX CMT_ASM(".byte 0X48, 0X29, 0X00 # subq %rax, (%rax)")
#define SUB_RAX_TO_PTR_RBX CMT_ASM(".byte 0X48, 0X29, 0X03 # subq %rax, (%rbx)")
#define SUB_RAX_TO_PTR_RCX CMT_ASM(".byte 0X48, 0X29, 0X01 # subq %rax, (%rcx)")
#define SUB_RAX_TO_PTR_RDX CMT_ASM(".byte 0X48, 0X29, 0X02 # subq %rax, (%rdx)")
#define SUB_RAX_TO_PTR_RDI CMT_ASM(".byte 0X48, 0X29, 0X07 # subq %rax, (%rdi)")
#define SUB_RAX_TO_PTR_RSI CMT_ASM(".byte 0X48, 0X29, 0X06 # subq %rax, (%rsi)")
#define SUB_RAX_TO_PTR_RBP CMT_ASM(".byte 0X48, 0X29, 0X45, 0X00 # subq %rax, (%rbp)")
#define SUB_RAX_TO_PTR_RSP CMT_ASM(".byte 0X48, 0X29, 0X04, 0X24 # subq %rax, (%rsp)")
#define SUB_RAX_TO_PTR_R8 CMT_ASM(".byte 0X49, 0X29, 0X00 # subq %rax, (%r8)")
#define SUB_RAX_TO_PTR_R9 CMT_ASM(".byte 0X49, 0X29, 0X01 # subq %rax, (%r9)")
#define SUB_RAX_TO_PTR_R10 CMT_ASM(".byte 0X49, 0X29, 0X02 # subq %rax, (%r10)")
#define SUB_RAX_TO_PTR_R11 CMT_ASM(".byte 0X49, 0X29, 0X03 # subq %rax, (%r11)")
#define SUB_RAX_TO_PTR_R12 CMT_ASM(".byte 0X49, 0X29, 0X04, 0X24 # subq %rax, (%r12)")
#define SUB_RAX_TO_PTR_R13 CMT_ASM(".byte 0X49, 0X29, 0X45, 0X00 # subq %rax, (%r13)")
#define SUB_RAX_TO_PTR_R14 CMT_ASM(".byte 0X49, 0X29, 0X06 # subq %rax, (%r14)")
#define SUB_RAX_TO_PTR_R15 CMT_ASM(".byte 0X49, 0X29, 0X07 # subq %rax, (%r15)")
#define SUB_RAX_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X29, 0X00 # subq %rax, (%eax)")
#define SUB_RAX_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X29, 0X03 # subq %rax, (%ebx)")
#define SUB_RAX_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X29, 0X01 # subq %rax, (%ecx)")
#define SUB_RAX_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X29, 0X02 # subq %rax, (%edx)")
#define SUB_RAX_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X29, 0X07 # subq %rax, (%edi)")
#define SUB_RAX_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X29, 0X06 # subq %rax, (%esi)")
#define SUB_RAX_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X29, 0X45, 0X00 # subq %rax, (%ebp)")
#define SUB_RAX_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X29, 0X04, 0X24 # subq %rax, (%esp)")

#define SUB_RBX_TO_PTR_RAX CMT_ASM(".byte 0X48, 0X29, 0X18 # subq %rbx, (%rax)")
#define SUB_RBX_TO_PTR_RBX CMT_ASM(".byte 0X48, 0X29, 0X1B # subq %rbx, (%rbx)")
#define SUB_RBX_TO_PTR_RCX CMT_ASM(".byte 0X48, 0X29, 0X19 # subq %rbx, (%rcx)")
#define SUB_RBX_TO_PTR_RDX CMT_ASM(".byte 0X48, 0X29, 0X1A # subq %rbx, (%rdx)")
#define SUB_RBX_TO_PTR_RDI CMT_ASM(".byte 0X48, 0X29, 0X1F # subq %rbx, (%rdi)")
#define SUB_RBX_TO_PTR_RSI CMT_ASM(".byte 0X48, 0X29, 0X1E # subq %rbx, (%rsi)")
#define SUB_RBX_TO_PTR_RBP CMT_ASM(".byte 0X48, 0X29, 0X5D, 0X00 # subq %rbx, (%rbp)")
#define SUB_RBX_TO_PTR_RSP CMT_ASM(".byte 0X48, 0X29, 0X1C, 0X24 # subq %rbx, (%rsp)")
#define SUB_RBX_TO_PTR_R8 CMT_ASM(".byte 0X49, 0X29, 0X18 # subq %rbx, (%r8)")
#define SUB_RBX_TO_PTR_R9 CMT_ASM(".byte 0X49, 0X29, 0X19 # subq %rbx, (%r9)")
#define SUB_RBX_TO_PTR_R10 CMT_ASM(".byte 0X49, 0X29, 0X1A # subq %rbx, (%r10)")
#define SUB_RBX_TO_PTR_R11 CMT_ASM(".byte 0X49, 0X29, 0X1B # subq %rbx, (%r11)")
#define SUB_RBX_TO_PTR_R12 CMT_ASM(".byte 0X49, 0X29, 0X1C, 0X24 # subq %rbx, (%r12)")
#define SUB_RBX_TO_PTR_R13 CMT_ASM(".byte 0X49, 0X29, 0X5D, 0X00 # subq %rbx, (%r13)")
#define SUB_RBX_TO_PTR_R14 CMT_ASM(".byte 0X49, 0X29, 0X1E # subq %rbx, (%r14)")
#define SUB_RBX_TO_PTR_R15 CMT_ASM(".byte 0X49, 0X29, 0X1F # subq %rbx, (%r15)")
#define SUB_RBX_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X29, 0X18 # subq %rbx, (%eax)")
#define SUB_RBX_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X29, 0X1B # subq %rbx, (%ebx)")
#define SUB_RBX_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X29, 0X19 # subq %rbx, (%ecx)")
#define SUB_RBX_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X29, 0X1A # subq %rbx, (%edx)")
#define SUB_RBX_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X29, 0X1F # subq %rbx, (%edi)")
#define SUB_RBX_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X29, 0X1E # subq %rbx, (%esi)")
#define SUB_RBX_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X29, 0X5D, 0X00 # subq %rbx, (%ebp)")
#define SUB_RBX_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X29, 0X1C, 0X24 # subq %rbx, (%esp)")

#define SUB_RCX_TO_PTR_RAX CMT_ASM(".byte 0X48, 0X29, 0X08 # subq %rcx, (%rax)")
#define SUB_RCX_TO_PTR_RBX CMT_ASM(".byte 0X48, 0X29, 0X0B # subq %rcx, (%rbx)")
#define SUB_RCX_TO_PTR_RCX CMT_ASM(".byte 0X48, 0X29, 0X09 # subq %rcx, (%rcx)")
#define SUB_RCX_TO_PTR_RDX CMT_ASM(".byte 0X48, 0X29, 0X0A # subq %rcx, (%rdx)")
#define SUB_RCX_TO_PTR_RDI CMT_ASM(".byte 0X48, 0X29, 0X0F # subq %rcx, (%rdi)")
#define SUB_RCX_TO_PTR_RSI CMT_ASM(".byte 0X48, 0X29, 0X0E # subq %rcx, (%rsi)")
#define SUB_RCX_TO_PTR_RBP CMT_ASM(".byte 0X48, 0X29, 0X4D, 0X00 # subq %rcx, (%rbp)")
#define SUB_RCX_TO_PTR_RSP CMT_ASM(".byte 0X48, 0X29, 0X0C, 0X24 # subq %rcx, (%rsp)")
#define SUB_RCX_TO_PTR_R8 CMT_ASM(".byte 0X49, 0X29, 0X08 # subq %rcx, (%r8)")
#define SUB_RCX_TO_PTR_R9 CMT_ASM(".byte 0X49, 0X29, 0X09 # subq %rcx, (%r9)")
#define SUB_RCX_TO_PTR_R10 CMT_ASM(".byte 0X49, 0X29, 0X0A # subq %rcx, (%r10)")
#define SUB_RCX_TO_PTR_R11 CMT_ASM(".byte 0X49, 0X29, 0X0B # subq %rcx, (%r11)")
#define SUB_RCX_TO_PTR_R12 CMT_ASM(".byte 0X49, 0X29, 0X0C, 0X24 # subq %rcx, (%r12)")
#define SUB_RCX_TO_PTR_R13 CMT_ASM(".byte 0X49, 0X29, 0X4D, 0X00 # subq %rcx, (%r13)")
#define SUB_RCX_TO_PTR_R14 CMT_ASM(".byte 0X49, 0X29, 0X0E # subq %rcx, (%r14)")
#define SUB_RCX_TO_PTR_R15 CMT_ASM(".byte 0X49, 0X29, 0X0F # subq %rcx, (%r15)")
#define SUB_RCX_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X29, 0X08 # subq %rcx, (%eax)")
#define SUB_RCX_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X29, 0X0B # subq %rcx, (%ebx)")
#define SUB_RCX_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X29, 0X09 # subq %rcx, (%ecx)")
#define SUB_RCX_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X29, 0X0A # subq %rcx, (%edx)")
#define SUB_RCX_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X29, 0X0F # subq %rcx, (%edi)")
#define SUB_RCX_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X29, 0X0E # subq %rcx, (%esi)")
#define SUB_RCX_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X29, 0X4D, 0X00 # subq %rcx, (%ebp)")
#define SUB_RCX_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X29, 0X0C, 0X24 # subq %rcx, (%esp)")

#define SUB_RDX_TO_PTR_RAX CMT_ASM(".byte 0X48, 0X29, 0X10 # subq %rdx, (%rax)")
#define SUB_RDX_TO_PTR_RBX CMT_ASM(".byte 0X48, 0X29, 0X13 # subq %rdx, (%rbx)")
#define SUB_RDX_TO_PTR_RCX CMT_ASM(".byte 0X48, 0X29, 0X11 # subq %rdx, (%rcx)")
#define SUB_RDX_TO_PTR_RDX CMT_ASM(".byte 0X48, 0X29, 0X12 # subq %rdx, (%rdx)")
#define SUB_RDX_TO_PTR_RDI CMT_ASM(".byte 0X48, 0X29, 0X17 # subq %rdx, (%rdi)")
#define SUB_RDX_TO_PTR_RSI CMT_ASM(".byte 0X48, 0X29, 0X16 # subq %rdx, (%rsi)")
#define SUB_RDX_TO_PTR_RBP CMT_ASM(".byte 0X48, 0X29, 0X55, 0X00 # subq %rdx, (%rbp)")
#define SUB_RDX_TO_PTR_RSP CMT_ASM(".byte 0X48, 0X29, 0X14, 0X24 # subq %rdx, (%rsp)")
#define SUB_RDX_TO_PTR_R8 CMT_ASM(".byte 0X49, 0X29, 0X10 # subq %rdx, (%r8)")
#define SUB_RDX_TO_PTR_R9 CMT_ASM(".byte 0X49, 0X29, 0X11 # subq %rdx, (%r9)")
#define SUB_RDX_TO_PTR_R10 CMT_ASM(".byte 0X49, 0X29, 0X12 # subq %rdx, (%r10)")
#define SUB_RDX_TO_PTR_R11 CMT_ASM(".byte 0X49, 0X29, 0X13 # subq %rdx, (%r11)")
#define SUB_RDX_TO_PTR_R12 CMT_ASM(".byte 0X49, 0X29, 0X14, 0X24 # subq %rdx, (%r12)")
#define SUB_RDX_TO_PTR_R13 CMT_ASM(".byte 0X49, 0X29, 0X55, 0X00 # subq %rdx, (%r13)")
#define SUB_RDX_TO_PTR_R14 CMT_ASM(".byte 0X49, 0X29, 0X16 # subq %rdx, (%r14)")
#define SUB_RDX_TO_PTR_R15 CMT_ASM(".byte 0X49, 0X29, 0X17 # subq %rdx, (%r15)")
#define SUB_RDX_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X29, 0X10 # subq %rdx, (%eax)")
#define SUB_RDX_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X29, 0X13 # subq %rdx, (%ebx)")
#define SUB_RDX_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X29, 0X11 # subq %rdx, (%ecx)")
#define SUB_RDX_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X29, 0X12 # subq %rdx, (%edx)")
#define SUB_RDX_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X29, 0X17 # subq %rdx, (%edi)")
#define SUB_RDX_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X29, 0X16 # subq %rdx, (%esi)")
#define SUB_RDX_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X29, 0X55, 0X00 # subq %rdx, (%ebp)")
#define SUB_RDX_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X29, 0X14, 0X24 # subq %rdx, (%esp)")

#define SUB_RDI_TO_PTR_RAX CMT_ASM(".byte 0X48, 0X29, 0X38 # subq %rdi, (%rax)")
#define SUB_RDI_TO_PTR_RBX CMT_ASM(".byte 0X48, 0X29, 0X3B # subq %rdi, (%rbx)")
#define SUB_RDI_TO_PTR_RCX CMT_ASM(".byte 0X48, 0X29, 0X39 # subq %rdi, (%rcx)")
#define SUB_RDI_TO_PTR_RDX CMT_ASM(".byte 0X48, 0X29, 0X3A # subq %rdi, (%rdx)")
#define SUB_RDI_TO_PTR_RDI CMT_ASM(".byte 0X48, 0X29, 0X3F # subq %rdi, (%rdi)")
#define SUB_RDI_TO_PTR_RSI CMT_ASM(".byte 0X48, 0X29, 0X3E # subq %rdi, (%rsi)")
#define SUB_RDI_TO_PTR_RBP CMT_ASM(".byte 0X48, 0X29, 0X7D, 0X00 # subq %rdi, (%rbp)")
#define SUB_RDI_TO_PTR_RSP CMT_ASM(".byte 0X48, 0X29, 0X3C, 0X24 # subq %rdi, (%rsp)")
#define SUB_RDI_TO_PTR_R8 CMT_ASM(".byte 0X49, 0X29, 0X38 # subq %rdi, (%r8)")
#define SUB_RDI_TO_PTR_R9 CMT_ASM(".byte 0X49, 0X29, 0X39 # subq %rdi, (%r9)")
#define SUB_RDI_TO_PTR_R10 CMT_ASM(".byte 0X49, 0X29, 0X3A # subq %rdi, (%r10)")
#define SUB_RDI_TO_PTR_R11 CMT_ASM(".byte 0X49, 0X29, 0X3B # subq %rdi, (%r11)")
#define SUB_RDI_TO_PTR_R12 CMT_ASM(".byte 0X49, 0X29, 0X3C, 0X24 # subq %rdi, (%r12)")
#define SUB_RDI_TO_PTR_R13 CMT_ASM(".byte 0X49, 0X29, 0X7D, 0X00 # subq %rdi, (%r13)")
#define SUB_RDI_TO_PTR_R14 CMT_ASM(".byte 0X49, 0X29, 0X3E # subq %rdi, (%r14)")
#define SUB_RDI_TO_PTR_R15 CMT_ASM(".byte 0X49, 0X29, 0X3F # subq %rdi, (%r15)")
#define SUB_RDI_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X29, 0X38 # subq %rdi, (%eax)")
#define SUB_RDI_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X29, 0X3B # subq %rdi, (%ebx)")
#define SUB_RDI_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X29, 0X39 # subq %rdi, (%ecx)")
#define SUB_RDI_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X29, 0X3A # subq %rdi, (%edx)")
#define SUB_RDI_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X29, 0X3F # subq %rdi, (%edi)")
#define SUB_RDI_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X29, 0X3E # subq %rdi, (%esi)")
#define SUB_RDI_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X29, 0X7D, 0X00 # subq %rdi, (%ebp)")
#define SUB_RDI_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X29, 0X3C, 0X24 # subq %rdi, (%esp)")

#define SUB_RSI_TO_PTR_RAX CMT_ASM(".byte 0X48, 0X29, 0X30 # subq %rsi, (%rax)")
#define SUB_RSI_TO_PTR_RBX CMT_ASM(".byte 0X48, 0X29, 0X33 # subq %rsi, (%rbx)")
#define SUB_RSI_TO_PTR_RCX CMT_ASM(".byte 0X48, 0X29, 0X31 # subq %rsi, (%rcx)")
#define SUB_RSI_TO_PTR_RDX CMT_ASM(".byte 0X48, 0X29, 0X32 # subq %rsi, (%rdx)")
#define SUB_RSI_TO_PTR_RDI CMT_ASM(".byte 0X48, 0X29, 0X37 # subq %rsi, (%rdi)")
#define SUB_RSI_TO_PTR_RSI CMT_ASM(".byte 0X48, 0X29, 0X36 # subq %rsi, (%rsi)")
#define SUB_RSI_TO_PTR_RBP CMT_ASM(".byte 0X48, 0X29, 0X75, 0X00 # subq %rsi, (%rbp)")
#define SUB_RSI_TO_PTR_RSP CMT_ASM(".byte 0X48, 0X29, 0X34, 0X24 # subq %rsi, (%rsp)")
#define SUB_RSI_TO_PTR_R8 CMT_ASM(".byte 0X49, 0X29, 0X30 # subq %rsi, (%r8)")
#define SUB_RSI_TO_PTR_R9 CMT_ASM(".byte 0X49, 0X29, 0X31 # subq %rsi, (%r9)")
#define SUB_RSI_TO_PTR_R10 CMT_ASM(".byte 0X49, 0X29, 0X32 # subq %rsi, (%r10)")
#define SUB_RSI_TO_PTR_R11 CMT_ASM(".byte 0X49, 0X29, 0X33 # subq %rsi, (%r11)")
#define SUB_RSI_TO_PTR_R12 CMT_ASM(".byte 0X49, 0X29, 0X34, 0X24 # subq %rsi, (%r12)")
#define SUB_RSI_TO_PTR_R13 CMT_ASM(".byte 0X49, 0X29, 0X75, 0X00 # subq %rsi, (%r13)")
#define SUB_RSI_TO_PTR_R14 CMT_ASM(".byte 0X49, 0X29, 0X36 # subq %rsi, (%r14)")
#define SUB_RSI_TO_PTR_R15 CMT_ASM(".byte 0X49, 0X29, 0X37 # subq %rsi, (%r15)")
#define SUB_RSI_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X29, 0X30 # subq %rsi, (%eax)")
#define SUB_RSI_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X29, 0X33 # subq %rsi, (%ebx)")
#define SUB_RSI_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X29, 0X31 # subq %rsi, (%ecx)")
#define SUB_RSI_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X29, 0X32 # subq %rsi, (%edx)")
#define SUB_RSI_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X29, 0X37 # subq %rsi, (%edi)")
#define SUB_RSI_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X29, 0X36 # subq %rsi, (%esi)")
#define SUB_RSI_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X29, 0X75, 0X00 # subq %rsi, (%ebp)")
#define SUB_RSI_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X29, 0X34, 0X24 # subq %rsi, (%esp)")

#define SUB_RBP_TO_PTR_RAX CMT_ASM(".byte 0X48, 0X29, 0X28 # subq %rbp, (%rax)")
#define SUB_RBP_TO_PTR_RBX CMT_ASM(".byte 0X48, 0X29, 0X2B # subq %rbp, (%rbx)")
#define SUB_RBP_TO_PTR_RCX CMT_ASM(".byte 0X48, 0X29, 0X29 # subq %rbp, (%rcx)")
#define SUB_RBP_TO_PTR_RDX CMT_ASM(".byte 0X48, 0X29, 0X2A # subq %rbp, (%rdx)")
#define SUB_RBP_TO_PTR_RDI CMT_ASM(".byte 0X48, 0X29, 0X2F # subq %rbp, (%rdi)")
#define SUB_RBP_TO_PTR_RSI CMT_ASM(".byte 0X48, 0X29, 0X2E # subq %rbp, (%rsi)")
#define SUB_RBP_TO_PTR_RBP CMT_ASM(".byte 0X48, 0X29, 0X6D, 0X00 # subq %rbp, (%rbp)")
#define SUB_RBP_TO_PTR_RSP CMT_ASM(".byte 0X48, 0X29, 0X2C, 0X24 # subq %rbp, (%rsp)")
#define SUB_RBP_TO_PTR_R8 CMT_ASM(".byte 0X49, 0X29, 0X28 # subq %rbp, (%r8)")
#define SUB_RBP_TO_PTR_R9 CMT_ASM(".byte 0X49, 0X29, 0X29 # subq %rbp, (%r9)")
#define SUB_RBP_TO_PTR_R10 CMT_ASM(".byte 0X49, 0X29, 0X2A # subq %rbp, (%r10)")
#define SUB_RBP_TO_PTR_R11 CMT_ASM(".byte 0X49, 0X29, 0X2B # subq %rbp, (%r11)")
#define SUB_RBP_TO_PTR_R12 CMT_ASM(".byte 0X49, 0X29, 0X2C, 0X24 # subq %rbp, (%r12)")
#define SUB_RBP_TO_PTR_R13 CMT_ASM(".byte 0X49, 0X29, 0X6D, 0X00 # subq %rbp, (%r13)")
#define SUB_RBP_TO_PTR_R14 CMT_ASM(".byte 0X49, 0X29, 0X2E # subq %rbp, (%r14)")
#define SUB_RBP_TO_PTR_R15 CMT_ASM(".byte 0X49, 0X29, 0X2F # subq %rbp, (%r15)")
#define SUB_RBP_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X29, 0X28 # subq %rbp, (%eax)")
#define SUB_RBP_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X29, 0X2B # subq %rbp, (%ebx)")
#define SUB_RBP_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X29, 0X29 # subq %rbp, (%ecx)")
#define SUB_RBP_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X29, 0X2A # subq %rbp, (%edx)")
#define SUB_RBP_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X29, 0X2F # subq %rbp, (%edi)")
#define SUB_RBP_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X29, 0X2E # subq %rbp, (%esi)")
#define SUB_RBP_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X29, 0X6D, 0X00 # subq %rbp, (%ebp)")
#define SUB_RBP_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X29, 0X2C, 0X24 # subq %rbp, (%esp)")

#define SUB_RSP_TO_PTR_RAX CMT_ASM(".byte 0X48, 0X29, 0X20 # subq %rsp, (%rax)")
#define SUB_RSP_TO_PTR_RBX CMT_ASM(".byte 0X48, 0X29, 0X23 # subq %rsp, (%rbx)")
#define SUB_RSP_TO_PTR_RCX CMT_ASM(".byte 0X48, 0X29, 0X21 # subq %rsp, (%rcx)")
#define SUB_RSP_TO_PTR_RDX CMT_ASM(".byte 0X48, 0X29, 0X22 # subq %rsp, (%rdx)")
#define SUB_RSP_TO_PTR_RDI CMT_ASM(".byte 0X48, 0X29, 0X27 # subq %rsp, (%rdi)")
#define SUB_RSP_TO_PTR_RSI CMT_ASM(".byte 0X48, 0X29, 0X26 # subq %rsp, (%rsi)")
#define SUB_RSP_TO_PTR_RBP CMT_ASM(".byte 0X48, 0X29, 0X65, 0X00 # subq %rsp, (%rbp)")
#define SUB_RSP_TO_PTR_RSP CMT_ASM(".byte 0X48, 0X29, 0X24, 0X24 # subq %rsp, (%rsp)")
#define SUB_RSP_TO_PTR_R8 CMT_ASM(".byte 0X49, 0X29, 0X20 # subq %rsp, (%r8)")
#define SUB_RSP_TO_PTR_R9 CMT_ASM(".byte 0X49, 0X29, 0X21 # subq %rsp, (%r9)")
#define SUB_RSP_TO_PTR_R10 CMT_ASM(".byte 0X49, 0X29, 0X22 # subq %rsp, (%r10)")
#define SUB_RSP_TO_PTR_R11 CMT_ASM(".byte 0X49, 0X29, 0X23 # subq %rsp, (%r11)")
#define SUB_RSP_TO_PTR_R12 CMT_ASM(".byte 0X49, 0X29, 0X24, 0X24 # subq %rsp, (%r12)")
#define SUB_RSP_TO_PTR_R13 CMT_ASM(".byte 0X49, 0X29, 0X65, 0X00 # subq %rsp, (%r13)")
#define SUB_RSP_TO_PTR_R14 CMT_ASM(".byte 0X49, 0X29, 0X26 # subq %rsp, (%r14)")
#define SUB_RSP_TO_PTR_R15 CMT_ASM(".byte 0X49, 0X29, 0X27 # subq %rsp, (%r15)")
#define SUB_RSP_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X29, 0X20 # subq %rsp, (%eax)")
#define SUB_RSP_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X29, 0X23 # subq %rsp, (%ebx)")
#define SUB_RSP_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X29, 0X21 # subq %rsp, (%ecx)")
#define SUB_RSP_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X29, 0X22 # subq %rsp, (%edx)")
#define SUB_RSP_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X29, 0X27 # subq %rsp, (%edi)")
#define SUB_RSP_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X29, 0X26 # subq %rsp, (%esi)")
#define SUB_RSP_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X29, 0X65, 0X00 # subq %rsp, (%ebp)")
#define SUB_RSP_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X29, 0X24, 0X24 # subq %rsp, (%esp)")

#define SUB_R8_TO_PTR_RAX CMT_ASM(".byte 0X4C, 0X29, 0X00 # subq %r8, (%rax)")
#define SUB_R8_TO_PTR_RBX CMT_ASM(".byte 0X4C, 0X29, 0X03 # subq %r8, (%rbx)")
#define SUB_R8_TO_PTR_RCX CMT_ASM(".byte 0X4C, 0X29, 0X01 # subq %r8, (%rcx)")
#define SUB_R8_TO_PTR_RDX CMT_ASM(".byte 0X4C, 0X29, 0X02 # subq %r8, (%rdx)")
#define SUB_R8_TO_PTR_RDI CMT_ASM(".byte 0X4C, 0X29, 0X07 # subq %r8, (%rdi)")
#define SUB_R8_TO_PTR_RSI CMT_ASM(".byte 0X4C, 0X29, 0X06 # subq %r8, (%rsi)")
#define SUB_R8_TO_PTR_RBP CMT_ASM(".byte 0X4C, 0X29, 0X45, 0X00 # subq %r8, (%rbp)")
#define SUB_R8_TO_PTR_RSP CMT_ASM(".byte 0X4C, 0X29, 0X04, 0X24 # subq %r8, (%rsp)")
#define SUB_R8_TO_PTR_R8 CMT_ASM(".byte 0X4D, 0X29, 0X00 # subq %r8, (%r8)")
#define SUB_R8_TO_PTR_R9 CMT_ASM(".byte 0X4D, 0X29, 0X01 # subq %r8, (%r9)")
#define SUB_R8_TO_PTR_R10 CMT_ASM(".byte 0X4D, 0X29, 0X02 # subq %r8, (%r10)")
#define SUB_R8_TO_PTR_R11 CMT_ASM(".byte 0X4D, 0X29, 0X03 # subq %r8, (%r11)")
#define SUB_R8_TO_PTR_R12 CMT_ASM(".byte 0X4D, 0X29, 0X04, 0X24 # subq %r8, (%r12)")
#define SUB_R8_TO_PTR_R13 CMT_ASM(".byte 0X4D, 0X29, 0X45, 0X00 # subq %r8, (%r13)")
#define SUB_R8_TO_PTR_R14 CMT_ASM(".byte 0X4D, 0X29, 0X06 # subq %r8, (%r14)")
#define SUB_R8_TO_PTR_R15 CMT_ASM(".byte 0X4D, 0X29, 0X07 # subq %r8, (%r15)")
#define SUB_R8_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X29, 0X00 # subq %r8, (%eax)")
#define SUB_R8_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X29, 0X03 # subq %r8, (%ebx)")
#define SUB_R8_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X29, 0X01 # subq %r8, (%ecx)")
#define SUB_R8_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X29, 0X02 # subq %r8, (%edx)")
#define SUB_R8_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X29, 0X07 # subq %r8, (%edi)")
#define SUB_R8_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X29, 0X06 # subq %r8, (%esi)")
#define SUB_R8_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X29, 0X45, 0X00 # subq %r8, (%ebp)")
#define SUB_R8_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X29, 0X04, 0X24 # subq %r8, (%esp)")

#define SUB_R9_TO_PTR_RAX CMT_ASM(".byte 0X4C, 0X29, 0X08 # subq %r9, (%rax)")
#define SUB_R9_TO_PTR_RBX CMT_ASM(".byte 0X4C, 0X29, 0X0B # subq %r9, (%rbx)")
#define SUB_R9_TO_PTR_RCX CMT_ASM(".byte 0X4C, 0X29, 0X09 # subq %r9, (%rcx)")
#define SUB_R9_TO_PTR_RDX CMT_ASM(".byte 0X4C, 0X29, 0X0A # subq %r9, (%rdx)")
#define SUB_R9_TO_PTR_RDI CMT_ASM(".byte 0X4C, 0X29, 0X0F # subq %r9, (%rdi)")
#define SUB_R9_TO_PTR_RSI CMT_ASM(".byte 0X4C, 0X29, 0X0E # subq %r9, (%rsi)")
#define SUB_R9_TO_PTR_RBP CMT_ASM(".byte 0X4C, 0X29, 0X4D, 0X00 # subq %r9, (%rbp)")
#define SUB_R9_TO_PTR_RSP CMT_ASM(".byte 0X4C, 0X29, 0X0C, 0X24 # subq %r9, (%rsp)")
#define SUB_R9_TO_PTR_R8 CMT_ASM(".byte 0X4D, 0X29, 0X08 # subq %r9, (%r8)")
#define SUB_R9_TO_PTR_R9 CMT_ASM(".byte 0X4D, 0X29, 0X09 # subq %r9, (%r9)")
#define SUB_R9_TO_PTR_R10 CMT_ASM(".byte 0X4D, 0X29, 0X0A # subq %r9, (%r10)")
#define SUB_R9_TO_PTR_R11 CMT_ASM(".byte 0X4D, 0X29, 0X0B # subq %r9, (%r11)")
#define SUB_R9_TO_PTR_R12 CMT_ASM(".byte 0X4D, 0X29, 0X0C, 0X24 # subq %r9, (%r12)")
#define SUB_R9_TO_PTR_R13 CMT_ASM(".byte 0X4D, 0X29, 0X4D, 0X00 # subq %r9, (%r13)")
#define SUB_R9_TO_PTR_R14 CMT_ASM(".byte 0X4D, 0X29, 0X0E # subq %r9, (%r14)")
#define SUB_R9_TO_PTR_R15 CMT_ASM(".byte 0X4D, 0X29, 0X0F # subq %r9, (%r15)")
#define SUB_R9_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X29, 0X08 # subq %r9, (%eax)")
#define SUB_R9_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X29, 0X0B # subq %r9, (%ebx)")
#define SUB_R9_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X29, 0X09 # subq %r9, (%ecx)")
#define SUB_R9_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X29, 0X0A # subq %r9, (%edx)")
#define SUB_R9_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X29, 0X0F # subq %r9, (%edi)")
#define SUB_R9_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X29, 0X0E # subq %r9, (%esi)")
#define SUB_R9_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X29, 0X4D, 0X00 # subq %r9, (%ebp)")
#define SUB_R9_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X29, 0X0C, 0X24 # subq %r9, (%esp)")

#define SUB_R10_TO_PTR_RAX CMT_ASM(".byte 0X4C, 0X29, 0X10 # subq %r10, (%rax)")
#define SUB_R10_TO_PTR_RBX CMT_ASM(".byte 0X4C, 0X29, 0X13 # subq %r10, (%rbx)")
#define SUB_R10_TO_PTR_RCX CMT_ASM(".byte 0X4C, 0X29, 0X11 # subq %r10, (%rcx)")
#define SUB_R10_TO_PTR_RDX CMT_ASM(".byte 0X4C, 0X29, 0X12 # subq %r10, (%rdx)")
#define SUB_R10_TO_PTR_RDI CMT_ASM(".byte 0X4C, 0X29, 0X17 # subq %r10, (%rdi)")
#define SUB_R10_TO_PTR_RSI CMT_ASM(".byte 0X4C, 0X29, 0X16 # subq %r10, (%rsi)")
#define SUB_R10_TO_PTR_RBP CMT_ASM(".byte 0X4C, 0X29, 0X55, 0X00 # subq %r10, (%rbp)")
#define SUB_R10_TO_PTR_RSP CMT_ASM(".byte 0X4C, 0X29, 0X14, 0X24 # subq %r10, (%rsp)")
#define SUB_R10_TO_PTR_R8 CMT_ASM(".byte 0X4D, 0X29, 0X10 # subq %r10, (%r8)")
#define SUB_R10_TO_PTR_R9 CMT_ASM(".byte 0X4D, 0X29, 0X11 # subq %r10, (%r9)")
#define SUB_R10_TO_PTR_R10 CMT_ASM(".byte 0X4D, 0X29, 0X12 # subq %r10, (%r10)")
#define SUB_R10_TO_PTR_R11 CMT_ASM(".byte 0X4D, 0X29, 0X13 # subq %r10, (%r11)")
#define SUB_R10_TO_PTR_R12 CMT_ASM(".byte 0X4D, 0X29, 0X14, 0X24 # subq %r10, (%r12)")
#define SUB_R10_TO_PTR_R13 CMT_ASM(".byte 0X4D, 0X29, 0X55, 0X00 # subq %r10, (%r13)")
#define SUB_R10_TO_PTR_R14 CMT_ASM(".byte 0X4D, 0X29, 0X16 # subq %r10, (%r14)")
#define SUB_R10_TO_PTR_R15 CMT_ASM(".byte 0X4D, 0X29, 0X17 # subq %r10, (%r15)")
#define SUB_R10_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X29, 0X10 # subq %r10, (%eax)")
#define SUB_R10_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X29, 0X13 # subq %r10, (%ebx)")
#define SUB_R10_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X29, 0X11 # subq %r10, (%ecx)")
#define SUB_R10_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X29, 0X12 # subq %r10, (%edx)")
#define SUB_R10_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X29, 0X17 # subq %r10, (%edi)")
#define SUB_R10_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X29, 0X16 # subq %r10, (%esi)")
#define SUB_R10_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X29, 0X55, 0X00 # subq %r10, (%ebp)")
#define SUB_R10_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X29, 0X14, 0X24 # subq %r10, (%esp)")

#define SUB_R11_TO_PTR_RAX CMT_ASM(".byte 0X4C, 0X29, 0X18 # subq %r11, (%rax)")
#define SUB_R11_TO_PTR_RBX CMT_ASM(".byte 0X4C, 0X29, 0X1B # subq %r11, (%rbx)")
#define SUB_R11_TO_PTR_RCX CMT_ASM(".byte 0X4C, 0X29, 0X19 # subq %r11, (%rcx)")
#define SUB_R11_TO_PTR_RDX CMT_ASM(".byte 0X4C, 0X29, 0X1A # subq %r11, (%rdx)")
#define SUB_R11_TO_PTR_RDI CMT_ASM(".byte 0X4C, 0X29, 0X1F # subq %r11, (%rdi)")
#define SUB_R11_TO_PTR_RSI CMT_ASM(".byte 0X4C, 0X29, 0X1E # subq %r11, (%rsi)")
#define SUB_R11_TO_PTR_RBP CMT_ASM(".byte 0X4C, 0X29, 0X5D, 0X00 # subq %r11, (%rbp)")
#define SUB_R11_TO_PTR_RSP CMT_ASM(".byte 0X4C, 0X29, 0X1C, 0X24 # subq %r11, (%rsp)")
#define SUB_R11_TO_PTR_R8 CMT_ASM(".byte 0X4D, 0X29, 0X18 # subq %r11, (%r8)")
#define SUB_R11_TO_PTR_R9 CMT_ASM(".byte 0X4D, 0X29, 0X19 # subq %r11, (%r9)")
#define SUB_R11_TO_PTR_R10 CMT_ASM(".byte 0X4D, 0X29, 0X1A # subq %r11, (%r10)")
#define SUB_R11_TO_PTR_R11 CMT_ASM(".byte 0X4D, 0X29, 0X1B # subq %r11, (%r11)")
#define SUB_R11_TO_PTR_R12 CMT_ASM(".byte 0X4D, 0X29, 0X1C, 0X24 # subq %r11, (%r12)")
#define SUB_R11_TO_PTR_R13 CMT_ASM(".byte 0X4D, 0X29, 0X5D, 0X00 # subq %r11, (%r13)")
#define SUB_R11_TO_PTR_R14 CMT_ASM(".byte 0X4D, 0X29, 0X1E # subq %r11, (%r14)")
#define SUB_R11_TO_PTR_R15 CMT_ASM(".byte 0X4D, 0X29, 0X1F # subq %r11, (%r15)")
#define SUB_R11_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X29, 0X18 # subq %r11, (%eax)")
#define SUB_R11_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X29, 0X1B # subq %r11, (%ebx)")
#define SUB_R11_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X29, 0X19 # subq %r11, (%ecx)")
#define SUB_R11_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X29, 0X1A # subq %r11, (%edx)")
#define SUB_R11_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X29, 0X1F # subq %r11, (%edi)")
#define SUB_R11_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X29, 0X1E # subq %r11, (%esi)")
#define SUB_R11_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X29, 0X5D, 0X00 # subq %r11, (%ebp)")
#define SUB_R11_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X29, 0X1C, 0X24 # subq %r11, (%esp)")

#define SUB_R12_TO_PTR_RAX CMT_ASM(".byte 0X4C, 0X29, 0X20 # subq %r12, (%rax)")
#define SUB_R12_TO_PTR_RBX CMT_ASM(".byte 0X4C, 0X29, 0X23 # subq %r12, (%rbx)")
#define SUB_R12_TO_PTR_RCX CMT_ASM(".byte 0X4C, 0X29, 0X21 # subq %r12, (%rcx)")
#define SUB_R12_TO_PTR_RDX CMT_ASM(".byte 0X4C, 0X29, 0X22 # subq %r12, (%rdx)")
#define SUB_R12_TO_PTR_RDI CMT_ASM(".byte 0X4C, 0X29, 0X27 # subq %r12, (%rdi)")
#define SUB_R12_TO_PTR_RSI CMT_ASM(".byte 0X4C, 0X29, 0X26 # subq %r12, (%rsi)")
#define SUB_R12_TO_PTR_RBP CMT_ASM(".byte 0X4C, 0X29, 0X65, 0X00 # subq %r12, (%rbp)")
#define SUB_R12_TO_PTR_RSP CMT_ASM(".byte 0X4C, 0X29, 0X24, 0X24 # subq %r12, (%rsp)")
#define SUB_R12_TO_PTR_R8 CMT_ASM(".byte 0X4D, 0X29, 0X20 # subq %r12, (%r8)")
#define SUB_R12_TO_PTR_R9 CMT_ASM(".byte 0X4D, 0X29, 0X21 # subq %r12, (%r9)")
#define SUB_R12_TO_PTR_R10 CMT_ASM(".byte 0X4D, 0X29, 0X22 # subq %r12, (%r10)")
#define SUB_R12_TO_PTR_R11 CMT_ASM(".byte 0X4D, 0X29, 0X23 # subq %r12, (%r11)")
#define SUB_R12_TO_PTR_R12 CMT_ASM(".byte 0X4D, 0X29, 0X24, 0X24 # subq %r12, (%r12)")
#define SUB_R12_TO_PTR_R13 CMT_ASM(".byte 0X4D, 0X29, 0X65, 0X00 # subq %r12, (%r13)")
#define SUB_R12_TO_PTR_R14 CMT_ASM(".byte 0X4D, 0X29, 0X26 # subq %r12, (%r14)")
#define SUB_R12_TO_PTR_R15 CMT_ASM(".byte 0X4D, 0X29, 0X27 # subq %r12, (%r15)")
#define SUB_R12_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X29, 0X20 # subq %r12, (%eax)")
#define SUB_R12_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X29, 0X23 # subq %r12, (%ebx)")
#define SUB_R12_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X29, 0X21 # subq %r12, (%ecx)")
#define SUB_R12_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X29, 0X22 # subq %r12, (%edx)")
#define SUB_R12_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X29, 0X27 # subq %r12, (%edi)")
#define SUB_R12_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X29, 0X26 # subq %r12, (%esi)")
#define SUB_R12_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X29, 0X65, 0X00 # subq %r12, (%ebp)")
#define SUB_R12_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X29, 0X24, 0X24 # subq %r12, (%esp)")

#define SUB_R13_TO_PTR_RAX CMT_ASM(".byte 0X4C, 0X29, 0X28 # subq %r13, (%rax)")
#define SUB_R13_TO_PTR_RBX CMT_ASM(".byte 0X4C, 0X29, 0X2B # subq %r13, (%rbx)")
#define SUB_R13_TO_PTR_RCX CMT_ASM(".byte 0X4C, 0X29, 0X29 # subq %r13, (%rcx)")
#define SUB_R13_TO_PTR_RDX CMT_ASM(".byte 0X4C, 0X29, 0X2A # subq %r13, (%rdx)")
#define SUB_R13_TO_PTR_RDI CMT_ASM(".byte 0X4C, 0X29, 0X2F # subq %r13, (%rdi)")
#define SUB_R13_TO_PTR_RSI CMT_ASM(".byte 0X4C, 0X29, 0X2E # subq %r13, (%rsi)")
#define SUB_R13_TO_PTR_RBP CMT_ASM(".byte 0X4C, 0X29, 0X6D, 0X00 # subq %r13, (%rbp)")
#define SUB_R13_TO_PTR_RSP CMT_ASM(".byte 0X4C, 0X29, 0X2C, 0X24 # subq %r13, (%rsp)")
#define SUB_R13_TO_PTR_R8 CMT_ASM(".byte 0X4D, 0X29, 0X28 # subq %r13, (%r8)")
#define SUB_R13_TO_PTR_R9 CMT_ASM(".byte 0X4D, 0X29, 0X29 # subq %r13, (%r9)")
#define SUB_R13_TO_PTR_R10 CMT_ASM(".byte 0X4D, 0X29, 0X2A # subq %r13, (%r10)")
#define SUB_R13_TO_PTR_R11 CMT_ASM(".byte 0X4D, 0X29, 0X2B # subq %r13, (%r11)")
#define SUB_R13_TO_PTR_R12 CMT_ASM(".byte 0X4D, 0X29, 0X2C, 0X24 # subq %r13, (%r12)")
#define SUB_R13_TO_PTR_R13 CMT_ASM(".byte 0X4D, 0X29, 0X6D, 0X00 # subq %r13, (%r13)")
#define SUB_R13_TO_PTR_R14 CMT_ASM(".byte 0X4D, 0X29, 0X2E # subq %r13, (%r14)")
#define SUB_R13_TO_PTR_R15 CMT_ASM(".byte 0X4D, 0X29, 0X2F # subq %r13, (%r15)")
#define SUB_R13_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X29, 0X28 # subq %r13, (%eax)")
#define SUB_R13_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X29, 0X2B # subq %r13, (%ebx)")
#define SUB_R13_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X29, 0X29 # subq %r13, (%ecx)")
#define SUB_R13_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X29, 0X2A # subq %r13, (%edx)")
#define SUB_R13_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X29, 0X2F # subq %r13, (%edi)")
#define SUB_R13_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X29, 0X2E # subq %r13, (%esi)")
#define SUB_R13_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X29, 0X6D, 0X00 # subq %r13, (%ebp)")
#define SUB_R13_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X29, 0X2C, 0X24 # subq %r13, (%esp)")

#define SUB_R14_TO_PTR_RAX CMT_ASM(".byte 0X4C, 0X29, 0X30 # subq %r14, (%rax)")
#define SUB_R14_TO_PTR_RBX CMT_ASM(".byte 0X4C, 0X29, 0X33 # subq %r14, (%rbx)")
#define SUB_R14_TO_PTR_RCX CMT_ASM(".byte 0X4C, 0X29, 0X31 # subq %r14, (%rcx)")
#define SUB_R14_TO_PTR_RDX CMT_ASM(".byte 0X4C, 0X29, 0X32 # subq %r14, (%rdx)")
#define SUB_R14_TO_PTR_RDI CMT_ASM(".byte 0X4C, 0X29, 0X37 # subq %r14, (%rdi)")
#define SUB_R14_TO_PTR_RSI CMT_ASM(".byte 0X4C, 0X29, 0X36 # subq %r14, (%rsi)")
#define SUB_R14_TO_PTR_RBP CMT_ASM(".byte 0X4C, 0X29, 0X75, 0X00 # subq %r14, (%rbp)")
#define SUB_R14_TO_PTR_RSP CMT_ASM(".byte 0X4C, 0X29, 0X34, 0X24 # subq %r14, (%rsp)")
#define SUB_R14_TO_PTR_R8 CMT_ASM(".byte 0X4D, 0X29, 0X30 # subq %r14, (%r8)")
#define SUB_R14_TO_PTR_R9 CMT_ASM(".byte 0X4D, 0X29, 0X31 # subq %r14, (%r9)")
#define SUB_R14_TO_PTR_R10 CMT_ASM(".byte 0X4D, 0X29, 0X32 # subq %r14, (%r10)")
#define SUB_R14_TO_PTR_R11 CMT_ASM(".byte 0X4D, 0X29, 0X33 # subq %r14, (%r11)")
#define SUB_R14_TO_PTR_R12 CMT_ASM(".byte 0X4D, 0X29, 0X34, 0X24 # subq %r14, (%r12)")
#define SUB_R14_TO_PTR_R13 CMT_ASM(".byte 0X4D, 0X29, 0X75, 0X00 # subq %r14, (%r13)")
#define SUB_R14_TO_PTR_R14 CMT_ASM(".byte 0X4D, 0X29, 0X36 # subq %r14, (%r14)")
#define SUB_R14_TO_PTR_R15 CMT_ASM(".byte 0X4D, 0X29, 0X37 # subq %r14, (%r15)")
#define SUB_R14_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X29, 0X30 # subq %r14, (%eax)")
#define SUB_R14_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X29, 0X33 # subq %r14, (%ebx)")
#define SUB_R14_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X29, 0X31 # subq %r14, (%ecx)")
#define SUB_R14_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X29, 0X32 # subq %r14, (%edx)")
#define SUB_R14_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X29, 0X37 # subq %r14, (%edi)")
#define SUB_R14_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X29, 0X36 # subq %r14, (%esi)")
#define SUB_R14_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X29, 0X75, 0X00 # subq %r14, (%ebp)")
#define SUB_R14_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X29, 0X34, 0X24 # subq %r14, (%esp)")

#define SUB_R15_TO_PTR_RAX CMT_ASM(".byte 0X4C, 0X29, 0X38 # subq %r15, (%rax)")
#define SUB_R15_TO_PTR_RBX CMT_ASM(".byte 0X4C, 0X29, 0X3B # subq %r15, (%rbx)")
#define SUB_R15_TO_PTR_RCX CMT_ASM(".byte 0X4C, 0X29, 0X39 # subq %r15, (%rcx)")
#define SUB_R15_TO_PTR_RDX CMT_ASM(".byte 0X4C, 0X29, 0X3A # subq %r15, (%rdx)")
#define SUB_R15_TO_PTR_RDI CMT_ASM(".byte 0X4C, 0X29, 0X3F # subq %r15, (%rdi)")
#define SUB_R15_TO_PTR_RSI CMT_ASM(".byte 0X4C, 0X29, 0X3E # subq %r15, (%rsi)")
#define SUB_R15_TO_PTR_RBP CMT_ASM(".byte 0X4C, 0X29, 0X7D, 0X00 # subq %r15, (%rbp)")
#define SUB_R15_TO_PTR_RSP CMT_ASM(".byte 0X4C, 0X29, 0X3C, 0X24 # subq %r15, (%rsp)")
#define SUB_R15_TO_PTR_R8 CMT_ASM(".byte 0X4D, 0X29, 0X38 # subq %r15, (%r8)")
#define SUB_R15_TO_PTR_R9 CMT_ASM(".byte 0X4D, 0X29, 0X39 # subq %r15, (%r9)")
#define SUB_R15_TO_PTR_R10 CMT_ASM(".byte 0X4D, 0X29, 0X3A # subq %r15, (%r10)")
#define SUB_R15_TO_PTR_R11 CMT_ASM(".byte 0X4D, 0X29, 0X3B # subq %r15, (%r11)")
#define SUB_R15_TO_PTR_R12 CMT_ASM(".byte 0X4D, 0X29, 0X3C, 0X24 # subq %r15, (%r12)")
#define SUB_R15_TO_PTR_R13 CMT_ASM(".byte 0X4D, 0X29, 0X7D, 0X00 # subq %r15, (%r13)")
#define SUB_R15_TO_PTR_R14 CMT_ASM(".byte 0X4D, 0X29, 0X3E # subq %r15, (%r14)")
#define SUB_R15_TO_PTR_R15 CMT_ASM(".byte 0X4D, 0X29, 0X3F # subq %r15, (%r15)")
#define SUB_R15_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X29, 0X38 # subq %r15, (%eax)")
#define SUB_R15_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X29, 0X3B # subq %r15, (%ebx)")
#define SUB_R15_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X29, 0X39 # subq %r15, (%ecx)")
#define SUB_R15_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X29, 0X3A # subq %r15, (%edx)")
#define SUB_R15_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X29, 0X3F # subq %r15, (%edi)")
#define SUB_R15_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X29, 0X3E # subq %r15, (%esi)")
#define SUB_R15_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X29, 0X7D, 0X00 # subq %r15, (%ebp)")
#define SUB_R15_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X29, 0X3C, 0X24 # subq %r15, (%esp)")

#define SUB_RAX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X2B, 0X80 # subq " _(VALUE) "(%rax), %rax")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RAX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X2B, 0X83 # subq " _(VALUE) "(%rbx), %rax")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RAX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X2B, 0X81 # subq " _(VALUE) "(%rcx), %rax")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RAX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X2B, 0X82 # subq " _(VALUE) "(%rdx), %rax")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RAX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X2B, 0X87 # subq " _(VALUE) "(%rdi), %rax")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RAX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X2B, 0X86 # subq " _(VALUE) "(%rsi), %rax")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RAX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X2B, 0X85 # subq " _(VALUE) "(%rbp), %rax")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RAX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X2B, 0X84, 0X24 # subq " _(VALUE) "(%rsp), %rax")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RAX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X2B, 0X80 # subq " _(VALUE) "(%r8), %rax")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RAX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X2B, 0X81 # subq " _(VALUE) "(%r9), %rax")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RAX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X2B, 0X82 # subq " _(VALUE) "(%r10), %rax")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RAX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X2B, 0X83 # subq " _(VALUE) "(%r11), %rax")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RAX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X2B, 0X84, 0X24 # subq " _(VALUE) "(%r12), %rax")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RAX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X2B, 0X85 # subq " _(VALUE) "(%r13), %rax")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RAX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X2B, 0X86 # subq " _(VALUE) "(%r14), %rax")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RAX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X2B, 0X87 # subq " _(VALUE) "(%r15), %rax")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RAX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X2B, 0X80 # subq " _(VALUE) "(%eax), %rax")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RAX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X2B, 0X83 # subq " _(VALUE) "(%ebx), %rax")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RAX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X2B, 0X81 # subq " _(VALUE) "(%ecx), %rax")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RAX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X2B, 0X82 # subq " _(VALUE) "(%edx), %rax")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RAX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X2B, 0X87 # subq " _(VALUE) "(%edi), %rax")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RAX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X2B, 0X86 # subq " _(VALUE) "(%esi), %rax")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RAX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X2B, 0X85 # subq " _(VALUE) "(%ebp), %rax")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RAX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X2B, 0X84, 0X24 # subq " _(VALUE) "(%esp), %rax")\
	CMT_ASM(".long " _(VALUE))

#define SUB_RBX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X2B, 0X98 # subq " _(VALUE) "(%rax), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RBX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X2B, 0X9B # subq " _(VALUE) "(%rbx), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RBX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X2B, 0X99 # subq " _(VALUE) "(%rcx), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RBX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X2B, 0X9A # subq " _(VALUE) "(%rdx), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RBX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X2B, 0X9F # subq " _(VALUE) "(%rdi), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RBX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X2B, 0X9E # subq " _(VALUE) "(%rsi), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RBX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X2B, 0X9D # subq " _(VALUE) "(%rbp), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RBX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X2B, 0X9C, 0X24 # subq " _(VALUE) "(%rsp), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RBX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X2B, 0X98 # subq " _(VALUE) "(%r8), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RBX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X2B, 0X99 # subq " _(VALUE) "(%r9), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RBX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X2B, 0X9A # subq " _(VALUE) "(%r10), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RBX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X2B, 0X9B # subq " _(VALUE) "(%r11), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RBX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X2B, 0X9C, 0X24 # subq " _(VALUE) "(%r12), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RBX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X2B, 0X9D # subq " _(VALUE) "(%r13), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RBX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X2B, 0X9E # subq " _(VALUE) "(%r14), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RBX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X2B, 0X9F # subq " _(VALUE) "(%r15), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RBX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X2B, 0X98 # subq " _(VALUE) "(%eax), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RBX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X2B, 0X9B # subq " _(VALUE) "(%ebx), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RBX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X2B, 0X99 # subq " _(VALUE) "(%ecx), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RBX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X2B, 0X9A # subq " _(VALUE) "(%edx), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RBX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X2B, 0X9F # subq " _(VALUE) "(%edi), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RBX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X2B, 0X9E # subq " _(VALUE) "(%esi), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RBX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X2B, 0X9D # subq " _(VALUE) "(%ebp), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RBX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X2B, 0X9C, 0X24 # subq " _(VALUE) "(%esp), %rbx")\
	CMT_ASM(".long " _(VALUE))

#define SUB_RCX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X2B, 0X88 # subq " _(VALUE) "(%rax), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RCX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X2B, 0X8B # subq " _(VALUE) "(%rbx), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RCX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X2B, 0X89 # subq " _(VALUE) "(%rcx), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RCX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X2B, 0X8A # subq " _(VALUE) "(%rdx), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RCX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X2B, 0X8F # subq " _(VALUE) "(%rdi), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RCX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X2B, 0X8E # subq " _(VALUE) "(%rsi), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RCX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X2B, 0X8D # subq " _(VALUE) "(%rbp), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RCX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X2B, 0X8C, 0X24 # subq " _(VALUE) "(%rsp), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RCX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X2B, 0X88 # subq " _(VALUE) "(%r8), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RCX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X2B, 0X89 # subq " _(VALUE) "(%r9), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RCX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X2B, 0X8A # subq " _(VALUE) "(%r10), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RCX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X2B, 0X8B # subq " _(VALUE) "(%r11), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RCX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X2B, 0X8C, 0X24 # subq " _(VALUE) "(%r12), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RCX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X2B, 0X8D # subq " _(VALUE) "(%r13), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RCX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X2B, 0X8E # subq " _(VALUE) "(%r14), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RCX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X2B, 0X8F # subq " _(VALUE) "(%r15), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RCX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X2B, 0X88 # subq " _(VALUE) "(%eax), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RCX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X2B, 0X8B # subq " _(VALUE) "(%ebx), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RCX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X2B, 0X89 # subq " _(VALUE) "(%ecx), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RCX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X2B, 0X8A # subq " _(VALUE) "(%edx), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RCX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X2B, 0X8F # subq " _(VALUE) "(%edi), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RCX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X2B, 0X8E # subq " _(VALUE) "(%esi), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RCX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X2B, 0X8D # subq " _(VALUE) "(%ebp), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RCX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X2B, 0X8C, 0X24 # subq " _(VALUE) "(%esp), %rcx")\
	CMT_ASM(".long " _(VALUE))

#define SUB_RDX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X2B, 0X90 # subq " _(VALUE) "(%rax), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RDX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X2B, 0X93 # subq " _(VALUE) "(%rbx), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RDX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X2B, 0X91 # subq " _(VALUE) "(%rcx), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RDX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X2B, 0X92 # subq " _(VALUE) "(%rdx), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RDX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X2B, 0X97 # subq " _(VALUE) "(%rdi), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RDX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X2B, 0X96 # subq " _(VALUE) "(%rsi), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RDX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X2B, 0X95 # subq " _(VALUE) "(%rbp), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RDX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X2B, 0X94, 0X24 # subq " _(VALUE) "(%rsp), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RDX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X2B, 0X90 # subq " _(VALUE) "(%r8), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RDX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X2B, 0X91 # subq " _(VALUE) "(%r9), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RDX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X2B, 0X92 # subq " _(VALUE) "(%r10), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RDX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X2B, 0X93 # subq " _(VALUE) "(%r11), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RDX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X2B, 0X94, 0X24 # subq " _(VALUE) "(%r12), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RDX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X2B, 0X95 # subq " _(VALUE) "(%r13), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RDX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X2B, 0X96 # subq " _(VALUE) "(%r14), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RDX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X2B, 0X97 # subq " _(VALUE) "(%r15), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RDX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X2B, 0X90 # subq " _(VALUE) "(%eax), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RDX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X2B, 0X93 # subq " _(VALUE) "(%ebx), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RDX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X2B, 0X91 # subq " _(VALUE) "(%ecx), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RDX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X2B, 0X92 # subq " _(VALUE) "(%edx), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RDX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X2B, 0X97 # subq " _(VALUE) "(%edi), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RDX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X2B, 0X96 # subq " _(VALUE) "(%esi), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RDX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X2B, 0X95 # subq " _(VALUE) "(%ebp), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RDX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X2B, 0X94, 0X24 # subq " _(VALUE) "(%esp), %rdx")\
	CMT_ASM(".long " _(VALUE))

#define SUB_RDI_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X2B, 0XB8 # subq " _(VALUE) "(%rax), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RDI_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X2B, 0XBB # subq " _(VALUE) "(%rbx), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RDI_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X2B, 0XB9 # subq " _(VALUE) "(%rcx), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RDI_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X2B, 0XBA # subq " _(VALUE) "(%rdx), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RDI_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X2B, 0XBF # subq " _(VALUE) "(%rdi), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RDI_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X2B, 0XBE # subq " _(VALUE) "(%rsi), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RDI_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X2B, 0XBD # subq " _(VALUE) "(%rbp), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RDI_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X2B, 0XBC, 0X24 # subq " _(VALUE) "(%rsp), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RDI_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X2B, 0XB8 # subq " _(VALUE) "(%r8), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RDI_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X2B, 0XB9 # subq " _(VALUE) "(%r9), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RDI_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X2B, 0XBA # subq " _(VALUE) "(%r10), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RDI_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X2B, 0XBB # subq " _(VALUE) "(%r11), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RDI_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X2B, 0XBC, 0X24 # subq " _(VALUE) "(%r12), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RDI_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X2B, 0XBD # subq " _(VALUE) "(%r13), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RDI_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X2B, 0XBE # subq " _(VALUE) "(%r14), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RDI_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X2B, 0XBF # subq " _(VALUE) "(%r15), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RDI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X2B, 0XB8 # subq " _(VALUE) "(%eax), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RDI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X2B, 0XBB # subq " _(VALUE) "(%ebx), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RDI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X2B, 0XB9 # subq " _(VALUE) "(%ecx), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RDI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X2B, 0XBA # subq " _(VALUE) "(%edx), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RDI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X2B, 0XBF # subq " _(VALUE) "(%edi), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RDI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X2B, 0XBE # subq " _(VALUE) "(%esi), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RDI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X2B, 0XBD # subq " _(VALUE) "(%ebp), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RDI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X2B, 0XBC, 0X24 # subq " _(VALUE) "(%esp), %rdi")\
	CMT_ASM(".long " _(VALUE))

#define SUB_RSI_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X2B, 0XB0 # subq " _(VALUE) "(%rax), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RSI_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X2B, 0XB3 # subq " _(VALUE) "(%rbx), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RSI_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X2B, 0XB1 # subq " _(VALUE) "(%rcx), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RSI_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X2B, 0XB2 # subq " _(VALUE) "(%rdx), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RSI_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X2B, 0XB7 # subq " _(VALUE) "(%rdi), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RSI_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X2B, 0XB6 # subq " _(VALUE) "(%rsi), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RSI_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X2B, 0XB5 # subq " _(VALUE) "(%rbp), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RSI_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X2B, 0XB4, 0X24 # subq " _(VALUE) "(%rsp), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RSI_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X2B, 0XB0 # subq " _(VALUE) "(%r8), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RSI_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X2B, 0XB1 # subq " _(VALUE) "(%r9), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RSI_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X2B, 0XB2 # subq " _(VALUE) "(%r10), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RSI_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X2B, 0XB3 # subq " _(VALUE) "(%r11), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RSI_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X2B, 0XB4, 0X24 # subq " _(VALUE) "(%r12), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RSI_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X2B, 0XB5 # subq " _(VALUE) "(%r13), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RSI_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X2B, 0XB6 # subq " _(VALUE) "(%r14), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RSI_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X2B, 0XB7 # subq " _(VALUE) "(%r15), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RSI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X2B, 0XB0 # subq " _(VALUE) "(%eax), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RSI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X2B, 0XB3 # subq " _(VALUE) "(%ebx), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RSI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X2B, 0XB1 # subq " _(VALUE) "(%ecx), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RSI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X2B, 0XB2 # subq " _(VALUE) "(%edx), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RSI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X2B, 0XB7 # subq " _(VALUE) "(%edi), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RSI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X2B, 0XB6 # subq " _(VALUE) "(%esi), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RSI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X2B, 0XB5 # subq " _(VALUE) "(%ebp), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RSI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X2B, 0XB4, 0X24 # subq " _(VALUE) "(%esp), %rsi")\
	CMT_ASM(".long " _(VALUE))

#define SUB_RBP_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X2B, 0XA8 # subq " _(VALUE) "(%rax), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RBP_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X2B, 0XAB # subq " _(VALUE) "(%rbx), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RBP_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X2B, 0XA9 # subq " _(VALUE) "(%rcx), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RBP_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X2B, 0XAA # subq " _(VALUE) "(%rdx), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RBP_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X2B, 0XAF # subq " _(VALUE) "(%rdi), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RBP_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X2B, 0XAE # subq " _(VALUE) "(%rsi), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RBP_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X2B, 0XAD # subq " _(VALUE) "(%rbp), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RBP_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X2B, 0XAC, 0X24 # subq " _(VALUE) "(%rsp), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RBP_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X2B, 0XA8 # subq " _(VALUE) "(%r8), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RBP_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X2B, 0XA9 # subq " _(VALUE) "(%r9), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RBP_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X2B, 0XAA # subq " _(VALUE) "(%r10), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RBP_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X2B, 0XAB # subq " _(VALUE) "(%r11), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RBP_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X2B, 0XAC, 0X24 # subq " _(VALUE) "(%r12), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RBP_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X2B, 0XAD # subq " _(VALUE) "(%r13), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RBP_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X2B, 0XAE # subq " _(VALUE) "(%r14), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RBP_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X2B, 0XAF # subq " _(VALUE) "(%r15), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RBP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X2B, 0XA8 # subq " _(VALUE) "(%eax), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RBP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X2B, 0XAB # subq " _(VALUE) "(%ebx), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RBP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X2B, 0XA9 # subq " _(VALUE) "(%ecx), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RBP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X2B, 0XAA # subq " _(VALUE) "(%edx), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RBP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X2B, 0XAF # subq " _(VALUE) "(%edi), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RBP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X2B, 0XAE # subq " _(VALUE) "(%esi), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RBP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X2B, 0XAD # subq " _(VALUE) "(%ebp), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RBP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X2B, 0XAC, 0X24 # subq " _(VALUE) "(%esp), %rbp")\
	CMT_ASM(".long " _(VALUE))

#define SUB_RSP_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X2B, 0XA0 # subq " _(VALUE) "(%rax), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RSP_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X2B, 0XA3 # subq " _(VALUE) "(%rbx), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RSP_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X2B, 0XA1 # subq " _(VALUE) "(%rcx), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RSP_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X2B, 0XA2 # subq " _(VALUE) "(%rdx), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RSP_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X2B, 0XA7 # subq " _(VALUE) "(%rdi), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RSP_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X2B, 0XA6 # subq " _(VALUE) "(%rsi), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RSP_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X2B, 0XA5 # subq " _(VALUE) "(%rbp), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RSP_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X2B, 0XA4, 0X24 # subq " _(VALUE) "(%rsp), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RSP_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X2B, 0XA0 # subq " _(VALUE) "(%r8), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RSP_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X2B, 0XA1 # subq " _(VALUE) "(%r9), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RSP_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X2B, 0XA2 # subq " _(VALUE) "(%r10), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RSP_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X2B, 0XA3 # subq " _(VALUE) "(%r11), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RSP_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X2B, 0XA4, 0X24 # subq " _(VALUE) "(%r12), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RSP_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X2B, 0XA5 # subq " _(VALUE) "(%r13), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RSP_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X2B, 0XA6 # subq " _(VALUE) "(%r14), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RSP_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X2B, 0XA7 # subq " _(VALUE) "(%r15), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RSP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X2B, 0XA0 # subq " _(VALUE) "(%eax), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RSP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X2B, 0XA3 # subq " _(VALUE) "(%ebx), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RSP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X2B, 0XA1 # subq " _(VALUE) "(%ecx), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RSP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X2B, 0XA2 # subq " _(VALUE) "(%edx), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RSP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X2B, 0XA7 # subq " _(VALUE) "(%edi), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RSP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X2B, 0XA6 # subq " _(VALUE) "(%esi), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RSP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X2B, 0XA5 # subq " _(VALUE) "(%ebp), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RSP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X2B, 0XA4, 0X24 # subq " _(VALUE) "(%esp), %rsp")\
	CMT_ASM(".long " _(VALUE))

#define SUB_R8_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X2B, 0X80 # subq " _(VALUE) "(%rax), %r8")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X2B, 0X83 # subq " _(VALUE) "(%rbx), %r8")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X2B, 0X81 # subq " _(VALUE) "(%rcx), %r8")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X2B, 0X82 # subq " _(VALUE) "(%rdx), %r8")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X2B, 0X87 # subq " _(VALUE) "(%rdi), %r8")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X2B, 0X86 # subq " _(VALUE) "(%rsi), %r8")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X2B, 0X85 # subq " _(VALUE) "(%rbp), %r8")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X2B, 0X84, 0X24 # subq " _(VALUE) "(%rsp), %r8")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X2B, 0X80 # subq " _(VALUE) "(%r8), %r8")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X2B, 0X81 # subq " _(VALUE) "(%r9), %r8")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X2B, 0X82 # subq " _(VALUE) "(%r10), %r8")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X2B, 0X83 # subq " _(VALUE) "(%r11), %r8")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X2B, 0X84, 0X24 # subq " _(VALUE) "(%r12), %r8")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X2B, 0X85 # subq " _(VALUE) "(%r13), %r8")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X2B, 0X86 # subq " _(VALUE) "(%r14), %r8")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X2B, 0X87 # subq " _(VALUE) "(%r15), %r8")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0X80 # subq " _(VALUE) "(%eax), %r8")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0X83 # subq " _(VALUE) "(%ebx), %r8")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0X81 # subq " _(VALUE) "(%ecx), %r8")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0X82 # subq " _(VALUE) "(%edx), %r8")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0X87 # subq " _(VALUE) "(%edi), %r8")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0X86 # subq " _(VALUE) "(%esi), %r8")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0X85 # subq " _(VALUE) "(%ebp), %r8")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0X84, 0X24 # subq " _(VALUE) "(%esp), %r8")\
	CMT_ASM(".long " _(VALUE))

#define SUB_R9_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X2B, 0X88 # subq " _(VALUE) "(%rax), %r9")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X2B, 0X8B # subq " _(VALUE) "(%rbx), %r9")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X2B, 0X89 # subq " _(VALUE) "(%rcx), %r9")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X2B, 0X8A # subq " _(VALUE) "(%rdx), %r9")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X2B, 0X8F # subq " _(VALUE) "(%rdi), %r9")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X2B, 0X8E # subq " _(VALUE) "(%rsi), %r9")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X2B, 0X8D # subq " _(VALUE) "(%rbp), %r9")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X2B, 0X8C, 0X24 # subq " _(VALUE) "(%rsp), %r9")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X2B, 0X88 # subq " _(VALUE) "(%r8), %r9")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X2B, 0X89 # subq " _(VALUE) "(%r9), %r9")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X2B, 0X8A # subq " _(VALUE) "(%r10), %r9")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X2B, 0X8B # subq " _(VALUE) "(%r11), %r9")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X2B, 0X8C, 0X24 # subq " _(VALUE) "(%r12), %r9")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X2B, 0X8D # subq " _(VALUE) "(%r13), %r9")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X2B, 0X8E # subq " _(VALUE) "(%r14), %r9")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X2B, 0X8F # subq " _(VALUE) "(%r15), %r9")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0X88 # subq " _(VALUE) "(%eax), %r9")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0X8B # subq " _(VALUE) "(%ebx), %r9")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0X89 # subq " _(VALUE) "(%ecx), %r9")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0X8A # subq " _(VALUE) "(%edx), %r9")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0X8F # subq " _(VALUE) "(%edi), %r9")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0X8E # subq " _(VALUE) "(%esi), %r9")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0X8D # subq " _(VALUE) "(%ebp), %r9")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0X8C, 0X24 # subq " _(VALUE) "(%esp), %r9")\
	CMT_ASM(".long " _(VALUE))

#define SUB_R10_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X2B, 0X90 # subq " _(VALUE) "(%rax), %r10")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X2B, 0X93 # subq " _(VALUE) "(%rbx), %r10")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X2B, 0X91 # subq " _(VALUE) "(%rcx), %r10")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X2B, 0X92 # subq " _(VALUE) "(%rdx), %r10")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X2B, 0X97 # subq " _(VALUE) "(%rdi), %r10")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X2B, 0X96 # subq " _(VALUE) "(%rsi), %r10")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X2B, 0X95 # subq " _(VALUE) "(%rbp), %r10")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X2B, 0X94, 0X24 # subq " _(VALUE) "(%rsp), %r10")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X2B, 0X90 # subq " _(VALUE) "(%r8), %r10")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X2B, 0X91 # subq " _(VALUE) "(%r9), %r10")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X2B, 0X92 # subq " _(VALUE) "(%r10), %r10")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X2B, 0X93 # subq " _(VALUE) "(%r11), %r10")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X2B, 0X94, 0X24 # subq " _(VALUE) "(%r12), %r10")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X2B, 0X95 # subq " _(VALUE) "(%r13), %r10")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X2B, 0X96 # subq " _(VALUE) "(%r14), %r10")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X2B, 0X97 # subq " _(VALUE) "(%r15), %r10")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0X90 # subq " _(VALUE) "(%eax), %r10")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0X93 # subq " _(VALUE) "(%ebx), %r10")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0X91 # subq " _(VALUE) "(%ecx), %r10")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0X92 # subq " _(VALUE) "(%edx), %r10")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0X97 # subq " _(VALUE) "(%edi), %r10")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0X96 # subq " _(VALUE) "(%esi), %r10")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0X95 # subq " _(VALUE) "(%ebp), %r10")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0X94, 0X24 # subq " _(VALUE) "(%esp), %r10")\
	CMT_ASM(".long " _(VALUE))

#define SUB_R11_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X2B, 0X98 # subq " _(VALUE) "(%rax), %r11")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X2B, 0X9B # subq " _(VALUE) "(%rbx), %r11")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X2B, 0X99 # subq " _(VALUE) "(%rcx), %r11")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X2B, 0X9A # subq " _(VALUE) "(%rdx), %r11")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X2B, 0X9F # subq " _(VALUE) "(%rdi), %r11")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X2B, 0X9E # subq " _(VALUE) "(%rsi), %r11")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X2B, 0X9D # subq " _(VALUE) "(%rbp), %r11")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X2B, 0X9C, 0X24 # subq " _(VALUE) "(%rsp), %r11")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X2B, 0X98 # subq " _(VALUE) "(%r8), %r11")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X2B, 0X99 # subq " _(VALUE) "(%r9), %r11")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X2B, 0X9A # subq " _(VALUE) "(%r10), %r11")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X2B, 0X9B # subq " _(VALUE) "(%r11), %r11")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X2B, 0X9C, 0X24 # subq " _(VALUE) "(%r12), %r11")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X2B, 0X9D # subq " _(VALUE) "(%r13), %r11")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X2B, 0X9E # subq " _(VALUE) "(%r14), %r11")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X2B, 0X9F # subq " _(VALUE) "(%r15), %r11")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0X98 # subq " _(VALUE) "(%eax), %r11")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0X9B # subq " _(VALUE) "(%ebx), %r11")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0X99 # subq " _(VALUE) "(%ecx), %r11")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0X9A # subq " _(VALUE) "(%edx), %r11")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0X9F # subq " _(VALUE) "(%edi), %r11")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0X9E # subq " _(VALUE) "(%esi), %r11")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0X9D # subq " _(VALUE) "(%ebp), %r11")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0X9C, 0X24 # subq " _(VALUE) "(%esp), %r11")\
	CMT_ASM(".long " _(VALUE))

#define SUB_R12_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X2B, 0XA0 # subq " _(VALUE) "(%rax), %r12")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X2B, 0XA3 # subq " _(VALUE) "(%rbx), %r12")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X2B, 0XA1 # subq " _(VALUE) "(%rcx), %r12")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X2B, 0XA2 # subq " _(VALUE) "(%rdx), %r12")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X2B, 0XA7 # subq " _(VALUE) "(%rdi), %r12")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X2B, 0XA6 # subq " _(VALUE) "(%rsi), %r12")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X2B, 0XA5 # subq " _(VALUE) "(%rbp), %r12")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X2B, 0XA4, 0X24 # subq " _(VALUE) "(%rsp), %r12")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X2B, 0XA0 # subq " _(VALUE) "(%r8), %r12")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X2B, 0XA1 # subq " _(VALUE) "(%r9), %r12")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X2B, 0XA2 # subq " _(VALUE) "(%r10), %r12")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X2B, 0XA3 # subq " _(VALUE) "(%r11), %r12")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X2B, 0XA4, 0X24 # subq " _(VALUE) "(%r12), %r12")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X2B, 0XA5 # subq " _(VALUE) "(%r13), %r12")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X2B, 0XA6 # subq " _(VALUE) "(%r14), %r12")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X2B, 0XA7 # subq " _(VALUE) "(%r15), %r12")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0XA0 # subq " _(VALUE) "(%eax), %r12")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0XA3 # subq " _(VALUE) "(%ebx), %r12")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0XA1 # subq " _(VALUE) "(%ecx), %r12")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0XA2 # subq " _(VALUE) "(%edx), %r12")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0XA7 # subq " _(VALUE) "(%edi), %r12")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0XA6 # subq " _(VALUE) "(%esi), %r12")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0XA5 # subq " _(VALUE) "(%ebp), %r12")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0XA4, 0X24 # subq " _(VALUE) "(%esp), %r12")\
	CMT_ASM(".long " _(VALUE))

#define SUB_R13_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X2B, 0XA8 # subq " _(VALUE) "(%rax), %r13")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X2B, 0XAB # subq " _(VALUE) "(%rbx), %r13")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X2B, 0XA9 # subq " _(VALUE) "(%rcx), %r13")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X2B, 0XAA # subq " _(VALUE) "(%rdx), %r13")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X2B, 0XAF # subq " _(VALUE) "(%rdi), %r13")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X2B, 0XAE # subq " _(VALUE) "(%rsi), %r13")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X2B, 0XAD # subq " _(VALUE) "(%rbp), %r13")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X2B, 0XAC, 0X24 # subq " _(VALUE) "(%rsp), %r13")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X2B, 0XA8 # subq " _(VALUE) "(%r8), %r13")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X2B, 0XA9 # subq " _(VALUE) "(%r9), %r13")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X2B, 0XAA # subq " _(VALUE) "(%r10), %r13")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X2B, 0XAB # subq " _(VALUE) "(%r11), %r13")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X2B, 0XAC, 0X24 # subq " _(VALUE) "(%r12), %r13")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X2B, 0XAD # subq " _(VALUE) "(%r13), %r13")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X2B, 0XAE # subq " _(VALUE) "(%r14), %r13")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X2B, 0XAF # subq " _(VALUE) "(%r15), %r13")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0XA8 # subq " _(VALUE) "(%eax), %r13")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0XAB # subq " _(VALUE) "(%ebx), %r13")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0XA9 # subq " _(VALUE) "(%ecx), %r13")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0XAA # subq " _(VALUE) "(%edx), %r13")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0XAF # subq " _(VALUE) "(%edi), %r13")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0XAE # subq " _(VALUE) "(%esi), %r13")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0XAD # subq " _(VALUE) "(%ebp), %r13")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0XAC, 0X24 # subq " _(VALUE) "(%esp), %r13")\
	CMT_ASM(".long " _(VALUE))

#define SUB_R14_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X2B, 0XB0 # subq " _(VALUE) "(%rax), %r14")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X2B, 0XB3 # subq " _(VALUE) "(%rbx), %r14")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X2B, 0XB1 # subq " _(VALUE) "(%rcx), %r14")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X2B, 0XB2 # subq " _(VALUE) "(%rdx), %r14")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X2B, 0XB7 # subq " _(VALUE) "(%rdi), %r14")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X2B, 0XB6 # subq " _(VALUE) "(%rsi), %r14")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X2B, 0XB5 # subq " _(VALUE) "(%rbp), %r14")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X2B, 0XB4, 0X24 # subq " _(VALUE) "(%rsp), %r14")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X2B, 0XB0 # subq " _(VALUE) "(%r8), %r14")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X2B, 0XB1 # subq " _(VALUE) "(%r9), %r14")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X2B, 0XB2 # subq " _(VALUE) "(%r10), %r14")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X2B, 0XB3 # subq " _(VALUE) "(%r11), %r14")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X2B, 0XB4, 0X24 # subq " _(VALUE) "(%r12), %r14")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X2B, 0XB5 # subq " _(VALUE) "(%r13), %r14")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X2B, 0XB6 # subq " _(VALUE) "(%r14), %r14")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X2B, 0XB7 # subq " _(VALUE) "(%r15), %r14")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0XB0 # subq " _(VALUE) "(%eax), %r14")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0XB3 # subq " _(VALUE) "(%ebx), %r14")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0XB1 # subq " _(VALUE) "(%ecx), %r14")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0XB2 # subq " _(VALUE) "(%edx), %r14")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0XB7 # subq " _(VALUE) "(%edi), %r14")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0XB6 # subq " _(VALUE) "(%esi), %r14")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0XB5 # subq " _(VALUE) "(%ebp), %r14")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0XB4, 0X24 # subq " _(VALUE) "(%esp), %r14")\
	CMT_ASM(".long " _(VALUE))

#define SUB_R15_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X2B, 0XB8 # subq " _(VALUE) "(%rax), %r15")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X2B, 0XBB # subq " _(VALUE) "(%rbx), %r15")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X2B, 0XB9 # subq " _(VALUE) "(%rcx), %r15")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X2B, 0XBA # subq " _(VALUE) "(%rdx), %r15")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X2B, 0XBF # subq " _(VALUE) "(%rdi), %r15")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X2B, 0XBE # subq " _(VALUE) "(%rsi), %r15")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X2B, 0XBD # subq " _(VALUE) "(%rbp), %r15")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X2B, 0XBC, 0X24 # subq " _(VALUE) "(%rsp), %r15")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X2B, 0XB8 # subq " _(VALUE) "(%r8), %r15")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X2B, 0XB9 # subq " _(VALUE) "(%r9), %r15")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X2B, 0XBA # subq " _(VALUE) "(%r10), %r15")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X2B, 0XBB # subq " _(VALUE) "(%r11), %r15")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X2B, 0XBC, 0X24 # subq " _(VALUE) "(%r12), %r15")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X2B, 0XBD # subq " _(VALUE) "(%r13), %r15")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X2B, 0XBE # subq " _(VALUE) "(%r14), %r15")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X2B, 0XBF # subq " _(VALUE) "(%r15), %r15")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0XB8 # subq " _(VALUE) "(%eax), %r15")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0XBB # subq " _(VALUE) "(%ebx), %r15")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0XB9 # subq " _(VALUE) "(%ecx), %r15")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0XBA # subq " _(VALUE) "(%edx), %r15")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0XBF # subq " _(VALUE) "(%edi), %r15")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0XBE # subq " _(VALUE) "(%esi), %r15")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0XBD # subq " _(VALUE) "(%ebp), %r15")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X2B, 0XBC, 0X24 # subq " _(VALUE) "(%esp), %r15")\
	CMT_ASM(".long " _(VALUE))

#define SUB_RAX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X29, 0X80 # subq %rax, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RAX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X29, 0X83 # subq %rax, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RAX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X29, 0X81 # subq %rax, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RAX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X29, 0X82 # subq %rax, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RAX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X29, 0X87 # subq %rax, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RAX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X29, 0X86 # subq %rax, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RAX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X29, 0X85 # subq %rax, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RAX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X29, 0X84, 0X24 # subq %rax, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RAX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X29, 0X80 # subq %rax, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RAX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X29, 0X81 # subq %rax, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RAX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X29, 0X82 # subq %rax, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RAX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X29, 0X83 # subq %rax, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RAX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X29, 0X84, 0X24 # subq %rax, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RAX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X29, 0X85 # subq %rax, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RAX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X29, 0X86 # subq %rax, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RAX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X29, 0X87 # subq %rax, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RAX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X29, 0X80 # subq %rax, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RAX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X29, 0X83 # subq %rax, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RAX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X29, 0X81 # subq %rax, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RAX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X29, 0X82 # subq %rax, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RAX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X29, 0X87 # subq %rax, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RAX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X29, 0X86 # subq %rax, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RAX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X29, 0X85 # subq %rax, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RAX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X29, 0X84, 0X24 # subq %rax, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SUB_RBX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X29, 0X98 # subq %rbx, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RBX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X29, 0X9B # subq %rbx, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RBX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X29, 0X99 # subq %rbx, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RBX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X29, 0X9A # subq %rbx, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RBX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X29, 0X9F # subq %rbx, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RBX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X29, 0X9E # subq %rbx, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RBX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X29, 0X9D # subq %rbx, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RBX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X29, 0X9C, 0X24 # subq %rbx, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RBX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X29, 0X98 # subq %rbx, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RBX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X29, 0X99 # subq %rbx, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RBX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X29, 0X9A # subq %rbx, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RBX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X29, 0X9B # subq %rbx, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RBX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X29, 0X9C, 0X24 # subq %rbx, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RBX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X29, 0X9D # subq %rbx, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RBX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X29, 0X9E # subq %rbx, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RBX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X29, 0X9F # subq %rbx, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RBX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X29, 0X98 # subq %rbx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RBX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X29, 0X9B # subq %rbx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RBX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X29, 0X99 # subq %rbx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RBX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X29, 0X9A # subq %rbx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RBX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X29, 0X9F # subq %rbx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RBX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X29, 0X9E # subq %rbx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RBX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X29, 0X9D # subq %rbx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RBX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X29, 0X9C, 0X24 # subq %rbx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SUB_RCX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X29, 0X88 # subq %rcx, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RCX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X29, 0X8B # subq %rcx, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RCX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X29, 0X89 # subq %rcx, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RCX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X29, 0X8A # subq %rcx, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RCX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X29, 0X8F # subq %rcx, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RCX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X29, 0X8E # subq %rcx, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RCX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X29, 0X8D # subq %rcx, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RCX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X29, 0X8C, 0X24 # subq %rcx, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RCX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X29, 0X88 # subq %rcx, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RCX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X29, 0X89 # subq %rcx, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RCX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X29, 0X8A # subq %rcx, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RCX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X29, 0X8B # subq %rcx, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RCX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X29, 0X8C, 0X24 # subq %rcx, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RCX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X29, 0X8D # subq %rcx, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RCX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X29, 0X8E # subq %rcx, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RCX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X29, 0X8F # subq %rcx, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RCX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X29, 0X88 # subq %rcx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RCX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X29, 0X8B # subq %rcx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RCX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X29, 0X89 # subq %rcx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RCX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X29, 0X8A # subq %rcx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RCX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X29, 0X8F # subq %rcx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RCX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X29, 0X8E # subq %rcx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RCX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X29, 0X8D # subq %rcx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RCX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X29, 0X8C, 0X24 # subq %rcx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SUB_RDX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X29, 0X90 # subq %rdx, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RDX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X29, 0X93 # subq %rdx, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RDX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X29, 0X91 # subq %rdx, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RDX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X29, 0X92 # subq %rdx, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RDX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X29, 0X97 # subq %rdx, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RDX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X29, 0X96 # subq %rdx, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RDX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X29, 0X95 # subq %rdx, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RDX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X29, 0X94, 0X24 # subq %rdx, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RDX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X29, 0X90 # subq %rdx, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RDX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X29, 0X91 # subq %rdx, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RDX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X29, 0X92 # subq %rdx, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RDX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X29, 0X93 # subq %rdx, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RDX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X29, 0X94, 0X24 # subq %rdx, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RDX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X29, 0X95 # subq %rdx, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RDX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X29, 0X96 # subq %rdx, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RDX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X29, 0X97 # subq %rdx, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RDX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X29, 0X90 # subq %rdx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RDX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X29, 0X93 # subq %rdx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RDX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X29, 0X91 # subq %rdx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RDX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X29, 0X92 # subq %rdx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RDX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X29, 0X97 # subq %rdx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RDX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X29, 0X96 # subq %rdx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RDX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X29, 0X95 # subq %rdx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RDX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X29, 0X94, 0X24 # subq %rdx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SUB_RDI_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X29, 0XB8 # subq %rdi, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RDI_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X29, 0XBB # subq %rdi, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RDI_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X29, 0XB9 # subq %rdi, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RDI_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X29, 0XBA # subq %rdi, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RDI_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X29, 0XBF # subq %rdi, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RDI_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X29, 0XBE # subq %rdi, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RDI_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X29, 0XBD # subq %rdi, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RDI_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X29, 0XBC, 0X24 # subq %rdi, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RDI_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X29, 0XB8 # subq %rdi, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RDI_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X29, 0XB9 # subq %rdi, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RDI_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X29, 0XBA # subq %rdi, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RDI_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X29, 0XBB # subq %rdi, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RDI_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X29, 0XBC, 0X24 # subq %rdi, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RDI_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X29, 0XBD # subq %rdi, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RDI_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X29, 0XBE # subq %rdi, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RDI_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X29, 0XBF # subq %rdi, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RDI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X29, 0XB8 # subq %rdi, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RDI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X29, 0XBB # subq %rdi, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RDI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X29, 0XB9 # subq %rdi, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RDI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X29, 0XBA # subq %rdi, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RDI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X29, 0XBF # subq %rdi, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RDI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X29, 0XBE # subq %rdi, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RDI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X29, 0XBD # subq %rdi, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RDI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X29, 0XBC, 0X24 # subq %rdi, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SUB_RSI_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X29, 0XB0 # subq %rsi, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RSI_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X29, 0XB3 # subq %rsi, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RSI_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X29, 0XB1 # subq %rsi, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RSI_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X29, 0XB2 # subq %rsi, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RSI_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X29, 0XB7 # subq %rsi, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RSI_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X29, 0XB6 # subq %rsi, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RSI_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X29, 0XB5 # subq %rsi, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RSI_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X29, 0XB4, 0X24 # subq %rsi, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RSI_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X29, 0XB0 # subq %rsi, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RSI_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X29, 0XB1 # subq %rsi, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RSI_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X29, 0XB2 # subq %rsi, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RSI_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X29, 0XB3 # subq %rsi, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RSI_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X29, 0XB4, 0X24 # subq %rsi, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RSI_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X29, 0XB5 # subq %rsi, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RSI_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X29, 0XB6 # subq %rsi, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RSI_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X29, 0XB7 # subq %rsi, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RSI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X29, 0XB0 # subq %rsi, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RSI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X29, 0XB3 # subq %rsi, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RSI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X29, 0XB1 # subq %rsi, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RSI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X29, 0XB2 # subq %rsi, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RSI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X29, 0XB7 # subq %rsi, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RSI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X29, 0XB6 # subq %rsi, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RSI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X29, 0XB5 # subq %rsi, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RSI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X29, 0XB4, 0X24 # subq %rsi, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SUB_RBP_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X29, 0XA8 # subq %rbp, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RBP_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X29, 0XAB # subq %rbp, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RBP_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X29, 0XA9 # subq %rbp, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RBP_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X29, 0XAA # subq %rbp, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RBP_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X29, 0XAF # subq %rbp, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RBP_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X29, 0XAE # subq %rbp, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RBP_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X29, 0XAD # subq %rbp, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RBP_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X29, 0XAC, 0X24 # subq %rbp, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RBP_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X29, 0XA8 # subq %rbp, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RBP_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X29, 0XA9 # subq %rbp, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RBP_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X29, 0XAA # subq %rbp, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RBP_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X29, 0XAB # subq %rbp, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RBP_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X29, 0XAC, 0X24 # subq %rbp, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RBP_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X29, 0XAD # subq %rbp, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RBP_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X29, 0XAE # subq %rbp, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RBP_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X29, 0XAF # subq %rbp, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RBP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X29, 0XA8 # subq %rbp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RBP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X29, 0XAB # subq %rbp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RBP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X29, 0XA9 # subq %rbp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RBP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X29, 0XAA # subq %rbp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RBP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X29, 0XAF # subq %rbp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RBP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X29, 0XAE # subq %rbp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RBP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X29, 0XAD # subq %rbp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RBP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X29, 0XAC, 0X24 # subq %rbp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SUB_RSP_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X29, 0XA0 # subq %rsp, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RSP_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X29, 0XA3 # subq %rsp, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RSP_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X29, 0XA1 # subq %rsp, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RSP_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X29, 0XA2 # subq %rsp, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RSP_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X29, 0XA7 # subq %rsp, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RSP_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X29, 0XA6 # subq %rsp, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RSP_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X29, 0XA5 # subq %rsp, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RSP_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X29, 0XA4, 0X24 # subq %rsp, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RSP_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X29, 0XA0 # subq %rsp, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RSP_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X29, 0XA1 # subq %rsp, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RSP_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X29, 0XA2 # subq %rsp, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RSP_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X29, 0XA3 # subq %rsp, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RSP_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X29, 0XA4, 0X24 # subq %rsp, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RSP_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X29, 0XA5 # subq %rsp, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RSP_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X29, 0XA6 # subq %rsp, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RSP_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X29, 0XA7 # subq %rsp, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RSP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X29, 0XA0 # subq %rsp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RSP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X29, 0XA3 # subq %rsp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RSP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X29, 0XA1 # subq %rsp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RSP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X29, 0XA2 # subq %rsp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RSP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X29, 0XA7 # subq %rsp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RSP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X29, 0XA6 # subq %rsp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RSP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X29, 0XA5 # subq %rsp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_RSP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X29, 0XA4, 0X24 # subq %rsp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SUB_R8_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X29, 0X80 # subq %r8, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X29, 0X83 # subq %r8, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X29, 0X81 # subq %r8, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X29, 0X82 # subq %r8, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X29, 0X87 # subq %r8, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X29, 0X86 # subq %r8, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X29, 0X85 # subq %r8, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X29, 0X84, 0X24 # subq %r8, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X29, 0X80 # subq %r8, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X29, 0X81 # subq %r8, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X29, 0X82 # subq %r8, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X29, 0X83 # subq %r8, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X29, 0X84, 0X24 # subq %r8, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X29, 0X85 # subq %r8, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X29, 0X86 # subq %r8, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X29, 0X87 # subq %r8, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X29, 0X80 # subq %r8, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X29, 0X83 # subq %r8, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X29, 0X81 # subq %r8, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X29, 0X82 # subq %r8, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X29, 0X87 # subq %r8, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X29, 0X86 # subq %r8, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X29, 0X85 # subq %r8, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X29, 0X84, 0X24 # subq %r8, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SUB_R9_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X29, 0X88 # subq %r9, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X29, 0X8B # subq %r9, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X29, 0X89 # subq %r9, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X29, 0X8A # subq %r9, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X29, 0X8F # subq %r9, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X29, 0X8E # subq %r9, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X29, 0X8D # subq %r9, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X29, 0X8C, 0X24 # subq %r9, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X29, 0X88 # subq %r9, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X29, 0X89 # subq %r9, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X29, 0X8A # subq %r9, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X29, 0X8B # subq %r9, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X29, 0X8C, 0X24 # subq %r9, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X29, 0X8D # subq %r9, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X29, 0X8E # subq %r9, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X29, 0X8F # subq %r9, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X29, 0X88 # subq %r9, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X29, 0X8B # subq %r9, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X29, 0X89 # subq %r9, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X29, 0X8A # subq %r9, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X29, 0X8F # subq %r9, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X29, 0X8E # subq %r9, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X29, 0X8D # subq %r9, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X29, 0X8C, 0X24 # subq %r9, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SUB_R10_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X29, 0X90 # subq %r10, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X29, 0X93 # subq %r10, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X29, 0X91 # subq %r10, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X29, 0X92 # subq %r10, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X29, 0X97 # subq %r10, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X29, 0X96 # subq %r10, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X29, 0X95 # subq %r10, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X29, 0X94, 0X24 # subq %r10, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X29, 0X90 # subq %r10, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X29, 0X91 # subq %r10, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X29, 0X92 # subq %r10, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X29, 0X93 # subq %r10, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X29, 0X94, 0X24 # subq %r10, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X29, 0X95 # subq %r10, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X29, 0X96 # subq %r10, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X29, 0X97 # subq %r10, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X29, 0X90 # subq %r10, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X29, 0X93 # subq %r10, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X29, 0X91 # subq %r10, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X29, 0X92 # subq %r10, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X29, 0X97 # subq %r10, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X29, 0X96 # subq %r10, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X29, 0X95 # subq %r10, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X29, 0X94, 0X24 # subq %r10, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SUB_R11_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X29, 0X98 # subq %r11, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X29, 0X9B # subq %r11, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X29, 0X99 # subq %r11, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X29, 0X9A # subq %r11, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X29, 0X9F # subq %r11, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X29, 0X9E # subq %r11, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X29, 0X9D # subq %r11, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X29, 0X9C, 0X24 # subq %r11, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X29, 0X98 # subq %r11, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X29, 0X99 # subq %r11, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X29, 0X9A # subq %r11, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X29, 0X9B # subq %r11, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X29, 0X9C, 0X24 # subq %r11, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X29, 0X9D # subq %r11, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X29, 0X9E # subq %r11, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X29, 0X9F # subq %r11, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X29, 0X98 # subq %r11, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X29, 0X9B # subq %r11, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X29, 0X99 # subq %r11, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X29, 0X9A # subq %r11, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X29, 0X9F # subq %r11, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X29, 0X9E # subq %r11, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X29, 0X9D # subq %r11, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X29, 0X9C, 0X24 # subq %r11, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SUB_R12_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X29, 0XA0 # subq %r12, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X29, 0XA3 # subq %r12, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X29, 0XA1 # subq %r12, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X29, 0XA2 # subq %r12, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X29, 0XA7 # subq %r12, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X29, 0XA6 # subq %r12, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X29, 0XA5 # subq %r12, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X29, 0XA4, 0X24 # subq %r12, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X29, 0XA0 # subq %r12, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X29, 0XA1 # subq %r12, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X29, 0XA2 # subq %r12, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X29, 0XA3 # subq %r12, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X29, 0XA4, 0X24 # subq %r12, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X29, 0XA5 # subq %r12, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X29, 0XA6 # subq %r12, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X29, 0XA7 # subq %r12, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X29, 0XA0 # subq %r12, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X29, 0XA3 # subq %r12, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X29, 0XA1 # subq %r12, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X29, 0XA2 # subq %r12, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X29, 0XA7 # subq %r12, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X29, 0XA6 # subq %r12, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X29, 0XA5 # subq %r12, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X29, 0XA4, 0X24 # subq %r12, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SUB_R13_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X29, 0XA8 # subq %r13, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X29, 0XAB # subq %r13, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X29, 0XA9 # subq %r13, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X29, 0XAA # subq %r13, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X29, 0XAF # subq %r13, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X29, 0XAE # subq %r13, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X29, 0XAD # subq %r13, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X29, 0XAC, 0X24 # subq %r13, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X29, 0XA8 # subq %r13, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X29, 0XA9 # subq %r13, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X29, 0XAA # subq %r13, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X29, 0XAB # subq %r13, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X29, 0XAC, 0X24 # subq %r13, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X29, 0XAD # subq %r13, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X29, 0XAE # subq %r13, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X29, 0XAF # subq %r13, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X29, 0XA8 # subq %r13, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X29, 0XAB # subq %r13, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X29, 0XA9 # subq %r13, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X29, 0XAA # subq %r13, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X29, 0XAF # subq %r13, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X29, 0XAE # subq %r13, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X29, 0XAD # subq %r13, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X29, 0XAC, 0X24 # subq %r13, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SUB_R14_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X29, 0XB0 # subq %r14, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X29, 0XB3 # subq %r14, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X29, 0XB1 # subq %r14, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X29, 0XB2 # subq %r14, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X29, 0XB7 # subq %r14, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X29, 0XB6 # subq %r14, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X29, 0XB5 # subq %r14, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X29, 0XB4, 0X24 # subq %r14, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X29, 0XB0 # subq %r14, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X29, 0XB1 # subq %r14, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X29, 0XB2 # subq %r14, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X29, 0XB3 # subq %r14, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X29, 0XB4, 0X24 # subq %r14, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X29, 0XB5 # subq %r14, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X29, 0XB6 # subq %r14, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X29, 0XB7 # subq %r14, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X29, 0XB0 # subq %r14, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X29, 0XB3 # subq %r14, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X29, 0XB1 # subq %r14, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X29, 0XB2 # subq %r14, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X29, 0XB7 # subq %r14, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X29, 0XB6 # subq %r14, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X29, 0XB5 # subq %r14, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X29, 0XB4, 0X24 # subq %r14, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SUB_R15_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X29, 0XB8 # subq %r15, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X29, 0XBB # subq %r15, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X29, 0XB9 # subq %r15, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X29, 0XBA # subq %r15, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X29, 0XBF # subq %r15, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X29, 0XBE # subq %r15, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X29, 0XBD # subq %r15, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X29, 0XBC, 0X24 # subq %r15, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X29, 0XB8 # subq %r15, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X29, 0XB9 # subq %r15, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X29, 0XBA # subq %r15, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X29, 0XBB # subq %r15, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X29, 0XBC, 0X24 # subq %r15, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X29, 0XBD # subq %r15, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X29, 0XBE # subq %r15, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X29, 0XBF # subq %r15, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X29, 0XB8 # subq %r15, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X29, 0XBB # subq %r15, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X29, 0XB9 # subq %r15, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X29, 0XBA # subq %r15, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X29, 0XBF # subq %r15, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X29, 0XBE # subq %r15, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X29, 0XBD # subq %r15, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X29, 0XBC, 0X24 # subq %r15, " _(VALUE) "(%esp)")\
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
