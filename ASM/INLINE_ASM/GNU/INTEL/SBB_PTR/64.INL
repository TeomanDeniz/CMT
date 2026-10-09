#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************* [v] 64-BIT MEMORY [v] ************************** */
#define SBB_RAX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X1B, 0X04, 0X25 # sbbq (" _(VALUE) "), %rax")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RBX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X1B, 0X1C, 0X25 # sbbq (" _(VALUE) "), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RCX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X1B, 0X0C, 0X25 # sbbq (" _(VALUE) "), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RDX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X1B, 0X14, 0X25 # sbbq (" _(VALUE) "), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RDI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X1B, 0X3C, 0X25 # sbbq (" _(VALUE) "), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RSI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X1B, 0X34, 0X25 # sbbq (" _(VALUE) "), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RBP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X1B, 0X2C, 0X25 # sbbq (" _(VALUE) "), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RSP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X1B, 0X24, 0X25 # sbbq (" _(VALUE) "), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X1B, 0X04, 0X25 # sbbq (" _(VALUE) "), %r8")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X1B, 0X0C, 0X25 # sbbq (" _(VALUE) "), %r9")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X1B, 0X14, 0X25 # sbbq (" _(VALUE) "), %r10")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X1B, 0X1C, 0X25 # sbbq (" _(VALUE) "), %r11")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X1B, 0X24, 0X25 # sbbq (" _(VALUE) "), %r12")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X1B, 0X2C, 0X25 # sbbq (" _(VALUE) "), %r13")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X1B, 0X34, 0X25 # sbbq (" _(VALUE) "), %r14")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X1B, 0X3C, 0X25 # sbbq (" _(VALUE) "), %r15")\
	CMT_ASM(".long " _(VALUE))

#define SBB_RAX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X19, 0X04, 0X25 # sbbq %rax, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RBX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X19, 0X1C, 0X25 # sbbq %rbx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RCX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X19, 0X0C, 0X25 # sbbq %rcx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RDX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X19, 0X14, 0X25 # sbbq %rdx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RDI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X19, 0X3C, 0X25 # sbbq %rdi, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RSI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X19, 0X34, 0X25 # sbbq %rsi, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RBP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X19, 0X2C, 0X25 # sbbq %rbp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RSP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X19, 0X24, 0X25 # sbbq %rsp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X19, 0X04, 0X25 # sbbq %r8, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X19, 0X0C, 0X25 # sbbq %r9, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X19, 0X14, 0X25 # sbbq %r10, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X19, 0X1C, 0X25 # sbbq %r11, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X19, 0X24, 0X25 # sbbq %r12, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X19, 0X2C, 0X25 # sbbq %r13, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X19, 0X34, 0X25 # sbbq %r14, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X19, 0X3C, 0X25 # sbbq %r15, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))

#define SBB_RAX_FROM_PTR_RAX CMT_ASM(".byte 0X48, 0X1B, 0X00 # sbbq (%rax), %rax")
#define SBB_RAX_FROM_PTR_RBX CMT_ASM(".byte 0X48, 0X1B, 0X03 # sbbq (%rbx), %rax")
#define SBB_RAX_FROM_PTR_RCX CMT_ASM(".byte 0X48, 0X1B, 0X01 # sbbq (%rcx), %rax")
#define SBB_RAX_FROM_PTR_RDX CMT_ASM(".byte 0X48, 0X1B, 0X02 # sbbq (%rdx), %rax")
#define SBB_RAX_FROM_PTR_RDI CMT_ASM(".byte 0X48, 0X1B, 0X07 # sbbq (%rdi), %rax")
#define SBB_RAX_FROM_PTR_RSI CMT_ASM(".byte 0X48, 0X1B, 0X06 # sbbq (%rsi), %rax")
#define SBB_RAX_FROM_PTR_RBP CMT_ASM(".byte 0X48, 0X1B, 0X45, 0X00 # sbbq (%rbp), %rax")
#define SBB_RAX_FROM_PTR_RSP CMT_ASM(".byte 0X48, 0X1B, 0X04, 0X24 # sbbq (%rsp), %rax")
#define SBB_RAX_FROM_PTR_R8 CMT_ASM(".byte 0X49, 0X1B, 0X00 # sbbq (%r8), %rax")
#define SBB_RAX_FROM_PTR_R9 CMT_ASM(".byte 0X49, 0X1B, 0X01 # sbbq (%r9), %rax")
#define SBB_RAX_FROM_PTR_R10 CMT_ASM(".byte 0X49, 0X1B, 0X02 # sbbq (%r10), %rax")
#define SBB_RAX_FROM_PTR_R11 CMT_ASM(".byte 0X49, 0X1B, 0X03 # sbbq (%r11), %rax")
#define SBB_RAX_FROM_PTR_R12 CMT_ASM(".byte 0X49, 0X1B, 0X04, 0X24 # sbbq (%r12), %rax")
#define SBB_RAX_FROM_PTR_R13 CMT_ASM(".byte 0X49, 0X1B, 0X45, 0X00 # sbbq (%r13), %rax")
#define SBB_RAX_FROM_PTR_R14 CMT_ASM(".byte 0X49, 0X1B, 0X06 # sbbq (%r14), %rax")
#define SBB_RAX_FROM_PTR_R15 CMT_ASM(".byte 0X49, 0X1B, 0X07 # sbbq (%r15), %rax")
#define SBB_RAX_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X1B, 0X00 # sbbq (%eax), %rax")
#define SBB_RAX_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X1B, 0X03 # sbbq (%ebx), %rax")
#define SBB_RAX_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X1B, 0X01 # sbbq (%ecx), %rax")
#define SBB_RAX_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X1B, 0X02 # sbbq (%edx), %rax")
#define SBB_RAX_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X1B, 0X07 # sbbq (%edi), %rax")
#define SBB_RAX_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X1B, 0X06 # sbbq (%esi), %rax")
#define SBB_RAX_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X1B, 0X45, 0X00 # sbbq (%ebp), %rax")
#define SBB_RAX_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X1B, 0X04, 0X24 # sbbq (%esp), %rax")

#define SBB_RBX_FROM_PTR_RAX CMT_ASM(".byte 0X48, 0X1B, 0X18 # sbbq (%rax), %rbx")
#define SBB_RBX_FROM_PTR_RBX CMT_ASM(".byte 0X48, 0X1B, 0X1B # sbbq (%rbx), %rbx")
#define SBB_RBX_FROM_PTR_RCX CMT_ASM(".byte 0X48, 0X1B, 0X19 # sbbq (%rcx), %rbx")
#define SBB_RBX_FROM_PTR_RDX CMT_ASM(".byte 0X48, 0X1B, 0X1A # sbbq (%rdx), %rbx")
#define SBB_RBX_FROM_PTR_RDI CMT_ASM(".byte 0X48, 0X1B, 0X1F # sbbq (%rdi), %rbx")
#define SBB_RBX_FROM_PTR_RSI CMT_ASM(".byte 0X48, 0X1B, 0X1E # sbbq (%rsi), %rbx")
#define SBB_RBX_FROM_PTR_RBP CMT_ASM(".byte 0X48, 0X1B, 0X5D, 0X00 # sbbq (%rbp), %rbx")
#define SBB_RBX_FROM_PTR_RSP CMT_ASM(".byte 0X48, 0X1B, 0X1C, 0X24 # sbbq (%rsp), %rbx")
#define SBB_RBX_FROM_PTR_R8 CMT_ASM(".byte 0X49, 0X1B, 0X18 # sbbq (%r8), %rbx")
#define SBB_RBX_FROM_PTR_R9 CMT_ASM(".byte 0X49, 0X1B, 0X19 # sbbq (%r9), %rbx")
#define SBB_RBX_FROM_PTR_R10 CMT_ASM(".byte 0X49, 0X1B, 0X1A # sbbq (%r10), %rbx")
#define SBB_RBX_FROM_PTR_R11 CMT_ASM(".byte 0X49, 0X1B, 0X1B # sbbq (%r11), %rbx")
#define SBB_RBX_FROM_PTR_R12 CMT_ASM(".byte 0X49, 0X1B, 0X1C, 0X24 # sbbq (%r12), %rbx")
#define SBB_RBX_FROM_PTR_R13 CMT_ASM(".byte 0X49, 0X1B, 0X5D, 0X00 # sbbq (%r13), %rbx")
#define SBB_RBX_FROM_PTR_R14 CMT_ASM(".byte 0X49, 0X1B, 0X1E # sbbq (%r14), %rbx")
#define SBB_RBX_FROM_PTR_R15 CMT_ASM(".byte 0X49, 0X1B, 0X1F # sbbq (%r15), %rbx")
#define SBB_RBX_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X1B, 0X18 # sbbq (%eax), %rbx")
#define SBB_RBX_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X1B, 0X1B # sbbq (%ebx), %rbx")
#define SBB_RBX_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X1B, 0X19 # sbbq (%ecx), %rbx")
#define SBB_RBX_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X1B, 0X1A # sbbq (%edx), %rbx")
#define SBB_RBX_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X1B, 0X1F # sbbq (%edi), %rbx")
#define SBB_RBX_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X1B, 0X1E # sbbq (%esi), %rbx")
#define SBB_RBX_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X1B, 0X5D, 0X00 # sbbq (%ebp), %rbx")
#define SBB_RBX_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X1B, 0X1C, 0X24 # sbbq (%esp), %rbx")

#define SBB_RCX_FROM_PTR_RAX CMT_ASM(".byte 0X48, 0X1B, 0X08 # sbbq (%rax), %rcx")
#define SBB_RCX_FROM_PTR_RBX CMT_ASM(".byte 0X48, 0X1B, 0X0B # sbbq (%rbx), %rcx")
#define SBB_RCX_FROM_PTR_RCX CMT_ASM(".byte 0X48, 0X1B, 0X09 # sbbq (%rcx), %rcx")
#define SBB_RCX_FROM_PTR_RDX CMT_ASM(".byte 0X48, 0X1B, 0X0A # sbbq (%rdx), %rcx")
#define SBB_RCX_FROM_PTR_RDI CMT_ASM(".byte 0X48, 0X1B, 0X0F # sbbq (%rdi), %rcx")
#define SBB_RCX_FROM_PTR_RSI CMT_ASM(".byte 0X48, 0X1B, 0X0E # sbbq (%rsi), %rcx")
#define SBB_RCX_FROM_PTR_RBP CMT_ASM(".byte 0X48, 0X1B, 0X4D, 0X00 # sbbq (%rbp), %rcx")
#define SBB_RCX_FROM_PTR_RSP CMT_ASM(".byte 0X48, 0X1B, 0X0C, 0X24 # sbbq (%rsp), %rcx")
#define SBB_RCX_FROM_PTR_R8 CMT_ASM(".byte 0X49, 0X1B, 0X08 # sbbq (%r8), %rcx")
#define SBB_RCX_FROM_PTR_R9 CMT_ASM(".byte 0X49, 0X1B, 0X09 # sbbq (%r9), %rcx")
#define SBB_RCX_FROM_PTR_R10 CMT_ASM(".byte 0X49, 0X1B, 0X0A # sbbq (%r10), %rcx")
#define SBB_RCX_FROM_PTR_R11 CMT_ASM(".byte 0X49, 0X1B, 0X0B # sbbq (%r11), %rcx")
#define SBB_RCX_FROM_PTR_R12 CMT_ASM(".byte 0X49, 0X1B, 0X0C, 0X24 # sbbq (%r12), %rcx")
#define SBB_RCX_FROM_PTR_R13 CMT_ASM(".byte 0X49, 0X1B, 0X4D, 0X00 # sbbq (%r13), %rcx")
#define SBB_RCX_FROM_PTR_R14 CMT_ASM(".byte 0X49, 0X1B, 0X0E # sbbq (%r14), %rcx")
#define SBB_RCX_FROM_PTR_R15 CMT_ASM(".byte 0X49, 0X1B, 0X0F # sbbq (%r15), %rcx")
#define SBB_RCX_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X1B, 0X08 # sbbq (%eax), %rcx")
#define SBB_RCX_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X1B, 0X0B # sbbq (%ebx), %rcx")
#define SBB_RCX_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X1B, 0X09 # sbbq (%ecx), %rcx")
#define SBB_RCX_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X1B, 0X0A # sbbq (%edx), %rcx")
#define SBB_RCX_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X1B, 0X0F # sbbq (%edi), %rcx")
#define SBB_RCX_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X1B, 0X0E # sbbq (%esi), %rcx")
#define SBB_RCX_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X1B, 0X4D, 0X00 # sbbq (%ebp), %rcx")
#define SBB_RCX_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X1B, 0X0C, 0X24 # sbbq (%esp), %rcx")

#define SBB_RDX_FROM_PTR_RAX CMT_ASM(".byte 0X48, 0X1B, 0X10 # sbbq (%rax), %rdx")
#define SBB_RDX_FROM_PTR_RBX CMT_ASM(".byte 0X48, 0X1B, 0X13 # sbbq (%rbx), %rdx")
#define SBB_RDX_FROM_PTR_RCX CMT_ASM(".byte 0X48, 0X1B, 0X11 # sbbq (%rcx), %rdx")
#define SBB_RDX_FROM_PTR_RDX CMT_ASM(".byte 0X48, 0X1B, 0X12 # sbbq (%rdx), %rdx")
#define SBB_RDX_FROM_PTR_RDI CMT_ASM(".byte 0X48, 0X1B, 0X17 # sbbq (%rdi), %rdx")
#define SBB_RDX_FROM_PTR_RSI CMT_ASM(".byte 0X48, 0X1B, 0X16 # sbbq (%rsi), %rdx")
#define SBB_RDX_FROM_PTR_RBP CMT_ASM(".byte 0X48, 0X1B, 0X55, 0X00 # sbbq (%rbp), %rdx")
#define SBB_RDX_FROM_PTR_RSP CMT_ASM(".byte 0X48, 0X1B, 0X14, 0X24 # sbbq (%rsp), %rdx")
#define SBB_RDX_FROM_PTR_R8 CMT_ASM(".byte 0X49, 0X1B, 0X10 # sbbq (%r8), %rdx")
#define SBB_RDX_FROM_PTR_R9 CMT_ASM(".byte 0X49, 0X1B, 0X11 # sbbq (%r9), %rdx")
#define SBB_RDX_FROM_PTR_R10 CMT_ASM(".byte 0X49, 0X1B, 0X12 # sbbq (%r10), %rdx")
#define SBB_RDX_FROM_PTR_R11 CMT_ASM(".byte 0X49, 0X1B, 0X13 # sbbq (%r11), %rdx")
#define SBB_RDX_FROM_PTR_R12 CMT_ASM(".byte 0X49, 0X1B, 0X14, 0X24 # sbbq (%r12), %rdx")
#define SBB_RDX_FROM_PTR_R13 CMT_ASM(".byte 0X49, 0X1B, 0X55, 0X00 # sbbq (%r13), %rdx")
#define SBB_RDX_FROM_PTR_R14 CMT_ASM(".byte 0X49, 0X1B, 0X16 # sbbq (%r14), %rdx")
#define SBB_RDX_FROM_PTR_R15 CMT_ASM(".byte 0X49, 0X1B, 0X17 # sbbq (%r15), %rdx")
#define SBB_RDX_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X1B, 0X10 # sbbq (%eax), %rdx")
#define SBB_RDX_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X1B, 0X13 # sbbq (%ebx), %rdx")
#define SBB_RDX_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X1B, 0X11 # sbbq (%ecx), %rdx")
#define SBB_RDX_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X1B, 0X12 # sbbq (%edx), %rdx")
#define SBB_RDX_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X1B, 0X17 # sbbq (%edi), %rdx")
#define SBB_RDX_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X1B, 0X16 # sbbq (%esi), %rdx")
#define SBB_RDX_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X1B, 0X55, 0X00 # sbbq (%ebp), %rdx")
#define SBB_RDX_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X1B, 0X14, 0X24 # sbbq (%esp), %rdx")

#define SBB_RDI_FROM_PTR_RAX CMT_ASM(".byte 0X48, 0X1B, 0X38 # sbbq (%rax), %rdi")
#define SBB_RDI_FROM_PTR_RBX CMT_ASM(".byte 0X48, 0X1B, 0X3B # sbbq (%rbx), %rdi")
#define SBB_RDI_FROM_PTR_RCX CMT_ASM(".byte 0X48, 0X1B, 0X39 # sbbq (%rcx), %rdi")
#define SBB_RDI_FROM_PTR_RDX CMT_ASM(".byte 0X48, 0X1B, 0X3A # sbbq (%rdx), %rdi")
#define SBB_RDI_FROM_PTR_RDI CMT_ASM(".byte 0X48, 0X1B, 0X3F # sbbq (%rdi), %rdi")
#define SBB_RDI_FROM_PTR_RSI CMT_ASM(".byte 0X48, 0X1B, 0X3E # sbbq (%rsi), %rdi")
#define SBB_RDI_FROM_PTR_RBP CMT_ASM(".byte 0X48, 0X1B, 0X7D, 0X00 # sbbq (%rbp), %rdi")
#define SBB_RDI_FROM_PTR_RSP CMT_ASM(".byte 0X48, 0X1B, 0X3C, 0X24 # sbbq (%rsp), %rdi")
#define SBB_RDI_FROM_PTR_R8 CMT_ASM(".byte 0X49, 0X1B, 0X38 # sbbq (%r8), %rdi")
#define SBB_RDI_FROM_PTR_R9 CMT_ASM(".byte 0X49, 0X1B, 0X39 # sbbq (%r9), %rdi")
#define SBB_RDI_FROM_PTR_R10 CMT_ASM(".byte 0X49, 0X1B, 0X3A # sbbq (%r10), %rdi")
#define SBB_RDI_FROM_PTR_R11 CMT_ASM(".byte 0X49, 0X1B, 0X3B # sbbq (%r11), %rdi")
#define SBB_RDI_FROM_PTR_R12 CMT_ASM(".byte 0X49, 0X1B, 0X3C, 0X24 # sbbq (%r12), %rdi")
#define SBB_RDI_FROM_PTR_R13 CMT_ASM(".byte 0X49, 0X1B, 0X7D, 0X00 # sbbq (%r13), %rdi")
#define SBB_RDI_FROM_PTR_R14 CMT_ASM(".byte 0X49, 0X1B, 0X3E # sbbq (%r14), %rdi")
#define SBB_RDI_FROM_PTR_R15 CMT_ASM(".byte 0X49, 0X1B, 0X3F # sbbq (%r15), %rdi")
#define SBB_RDI_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X1B, 0X38 # sbbq (%eax), %rdi")
#define SBB_RDI_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X1B, 0X3B # sbbq (%ebx), %rdi")
#define SBB_RDI_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X1B, 0X39 # sbbq (%ecx), %rdi")
#define SBB_RDI_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X1B, 0X3A # sbbq (%edx), %rdi")
#define SBB_RDI_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X1B, 0X3F # sbbq (%edi), %rdi")
#define SBB_RDI_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X1B, 0X3E # sbbq (%esi), %rdi")
#define SBB_RDI_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X1B, 0X7D, 0X00 # sbbq (%ebp), %rdi")
#define SBB_RDI_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X1B, 0X3C, 0X24 # sbbq (%esp), %rdi")

#define SBB_RSI_FROM_PTR_RAX CMT_ASM(".byte 0X48, 0X1B, 0X30 # sbbq (%rax), %rsi")
#define SBB_RSI_FROM_PTR_RBX CMT_ASM(".byte 0X48, 0X1B, 0X33 # sbbq (%rbx), %rsi")
#define SBB_RSI_FROM_PTR_RCX CMT_ASM(".byte 0X48, 0X1B, 0X31 # sbbq (%rcx), %rsi")
#define SBB_RSI_FROM_PTR_RDX CMT_ASM(".byte 0X48, 0X1B, 0X32 # sbbq (%rdx), %rsi")
#define SBB_RSI_FROM_PTR_RDI CMT_ASM(".byte 0X48, 0X1B, 0X37 # sbbq (%rdi), %rsi")
#define SBB_RSI_FROM_PTR_RSI CMT_ASM(".byte 0X48, 0X1B, 0X36 # sbbq (%rsi), %rsi")
#define SBB_RSI_FROM_PTR_RBP CMT_ASM(".byte 0X48, 0X1B, 0X75, 0X00 # sbbq (%rbp), %rsi")
#define SBB_RSI_FROM_PTR_RSP CMT_ASM(".byte 0X48, 0X1B, 0X34, 0X24 # sbbq (%rsp), %rsi")
#define SBB_RSI_FROM_PTR_R8 CMT_ASM(".byte 0X49, 0X1B, 0X30 # sbbq (%r8), %rsi")
#define SBB_RSI_FROM_PTR_R9 CMT_ASM(".byte 0X49, 0X1B, 0X31 # sbbq (%r9), %rsi")
#define SBB_RSI_FROM_PTR_R10 CMT_ASM(".byte 0X49, 0X1B, 0X32 # sbbq (%r10), %rsi")
#define SBB_RSI_FROM_PTR_R11 CMT_ASM(".byte 0X49, 0X1B, 0X33 # sbbq (%r11), %rsi")
#define SBB_RSI_FROM_PTR_R12 CMT_ASM(".byte 0X49, 0X1B, 0X34, 0X24 # sbbq (%r12), %rsi")
#define SBB_RSI_FROM_PTR_R13 CMT_ASM(".byte 0X49, 0X1B, 0X75, 0X00 # sbbq (%r13), %rsi")
#define SBB_RSI_FROM_PTR_R14 CMT_ASM(".byte 0X49, 0X1B, 0X36 # sbbq (%r14), %rsi")
#define SBB_RSI_FROM_PTR_R15 CMT_ASM(".byte 0X49, 0X1B, 0X37 # sbbq (%r15), %rsi")
#define SBB_RSI_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X1B, 0X30 # sbbq (%eax), %rsi")
#define SBB_RSI_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X1B, 0X33 # sbbq (%ebx), %rsi")
#define SBB_RSI_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X1B, 0X31 # sbbq (%ecx), %rsi")
#define SBB_RSI_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X1B, 0X32 # sbbq (%edx), %rsi")
#define SBB_RSI_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X1B, 0X37 # sbbq (%edi), %rsi")
#define SBB_RSI_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X1B, 0X36 # sbbq (%esi), %rsi")
#define SBB_RSI_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X1B, 0X75, 0X00 # sbbq (%ebp), %rsi")
#define SBB_RSI_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X1B, 0X34, 0X24 # sbbq (%esp), %rsi")

#define SBB_RBP_FROM_PTR_RAX CMT_ASM(".byte 0X48, 0X1B, 0X28 # sbbq (%rax), %rbp")
#define SBB_RBP_FROM_PTR_RBX CMT_ASM(".byte 0X48, 0X1B, 0X2B # sbbq (%rbx), %rbp")
#define SBB_RBP_FROM_PTR_RCX CMT_ASM(".byte 0X48, 0X1B, 0X29 # sbbq (%rcx), %rbp")
#define SBB_RBP_FROM_PTR_RDX CMT_ASM(".byte 0X48, 0X1B, 0X2A # sbbq (%rdx), %rbp")
#define SBB_RBP_FROM_PTR_RDI CMT_ASM(".byte 0X48, 0X1B, 0X2F # sbbq (%rdi), %rbp")
#define SBB_RBP_FROM_PTR_RSI CMT_ASM(".byte 0X48, 0X1B, 0X2E # sbbq (%rsi), %rbp")
#define SBB_RBP_FROM_PTR_RBP CMT_ASM(".byte 0X48, 0X1B, 0X6D, 0X00 # sbbq (%rbp), %rbp")
#define SBB_RBP_FROM_PTR_RSP CMT_ASM(".byte 0X48, 0X1B, 0X2C, 0X24 # sbbq (%rsp), %rbp")
#define SBB_RBP_FROM_PTR_R8 CMT_ASM(".byte 0X49, 0X1B, 0X28 # sbbq (%r8), %rbp")
#define SBB_RBP_FROM_PTR_R9 CMT_ASM(".byte 0X49, 0X1B, 0X29 # sbbq (%r9), %rbp")
#define SBB_RBP_FROM_PTR_R10 CMT_ASM(".byte 0X49, 0X1B, 0X2A # sbbq (%r10), %rbp")
#define SBB_RBP_FROM_PTR_R11 CMT_ASM(".byte 0X49, 0X1B, 0X2B # sbbq (%r11), %rbp")
#define SBB_RBP_FROM_PTR_R12 CMT_ASM(".byte 0X49, 0X1B, 0X2C, 0X24 # sbbq (%r12), %rbp")
#define SBB_RBP_FROM_PTR_R13 CMT_ASM(".byte 0X49, 0X1B, 0X6D, 0X00 # sbbq (%r13), %rbp")
#define SBB_RBP_FROM_PTR_R14 CMT_ASM(".byte 0X49, 0X1B, 0X2E # sbbq (%r14), %rbp")
#define SBB_RBP_FROM_PTR_R15 CMT_ASM(".byte 0X49, 0X1B, 0X2F # sbbq (%r15), %rbp")
#define SBB_RBP_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X1B, 0X28 # sbbq (%eax), %rbp")
#define SBB_RBP_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X1B, 0X2B # sbbq (%ebx), %rbp")
#define SBB_RBP_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X1B, 0X29 # sbbq (%ecx), %rbp")
#define SBB_RBP_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X1B, 0X2A # sbbq (%edx), %rbp")
#define SBB_RBP_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X1B, 0X2F # sbbq (%edi), %rbp")
#define SBB_RBP_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X1B, 0X2E # sbbq (%esi), %rbp")
#define SBB_RBP_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X1B, 0X6D, 0X00 # sbbq (%ebp), %rbp")
#define SBB_RBP_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X1B, 0X2C, 0X24 # sbbq (%esp), %rbp")

#define SBB_RSP_FROM_PTR_RAX CMT_ASM(".byte 0X48, 0X1B, 0X20 # sbbq (%rax), %rsp")
#define SBB_RSP_FROM_PTR_RBX CMT_ASM(".byte 0X48, 0X1B, 0X23 # sbbq (%rbx), %rsp")
#define SBB_RSP_FROM_PTR_RCX CMT_ASM(".byte 0X48, 0X1B, 0X21 # sbbq (%rcx), %rsp")
#define SBB_RSP_FROM_PTR_RDX CMT_ASM(".byte 0X48, 0X1B, 0X22 # sbbq (%rdx), %rsp")
#define SBB_RSP_FROM_PTR_RDI CMT_ASM(".byte 0X48, 0X1B, 0X27 # sbbq (%rdi), %rsp")
#define SBB_RSP_FROM_PTR_RSI CMT_ASM(".byte 0X48, 0X1B, 0X26 # sbbq (%rsi), %rsp")
#define SBB_RSP_FROM_PTR_RBP CMT_ASM(".byte 0X48, 0X1B, 0X65, 0X00 # sbbq (%rbp), %rsp")
#define SBB_RSP_FROM_PTR_RSP CMT_ASM(".byte 0X48, 0X1B, 0X24, 0X24 # sbbq (%rsp), %rsp")
#define SBB_RSP_FROM_PTR_R8 CMT_ASM(".byte 0X49, 0X1B, 0X20 # sbbq (%r8), %rsp")
#define SBB_RSP_FROM_PTR_R9 CMT_ASM(".byte 0X49, 0X1B, 0X21 # sbbq (%r9), %rsp")
#define SBB_RSP_FROM_PTR_R10 CMT_ASM(".byte 0X49, 0X1B, 0X22 # sbbq (%r10), %rsp")
#define SBB_RSP_FROM_PTR_R11 CMT_ASM(".byte 0X49, 0X1B, 0X23 # sbbq (%r11), %rsp")
#define SBB_RSP_FROM_PTR_R12 CMT_ASM(".byte 0X49, 0X1B, 0X24, 0X24 # sbbq (%r12), %rsp")
#define SBB_RSP_FROM_PTR_R13 CMT_ASM(".byte 0X49, 0X1B, 0X65, 0X00 # sbbq (%r13), %rsp")
#define SBB_RSP_FROM_PTR_R14 CMT_ASM(".byte 0X49, 0X1B, 0X26 # sbbq (%r14), %rsp")
#define SBB_RSP_FROM_PTR_R15 CMT_ASM(".byte 0X49, 0X1B, 0X27 # sbbq (%r15), %rsp")
#define SBB_RSP_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X1B, 0X20 # sbbq (%eax), %rsp")
#define SBB_RSP_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X1B, 0X23 # sbbq (%ebx), %rsp")
#define SBB_RSP_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X1B, 0X21 # sbbq (%ecx), %rsp")
#define SBB_RSP_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X1B, 0X22 # sbbq (%edx), %rsp")
#define SBB_RSP_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X1B, 0X27 # sbbq (%edi), %rsp")
#define SBB_RSP_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X1B, 0X26 # sbbq (%esi), %rsp")
#define SBB_RSP_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X1B, 0X65, 0X00 # sbbq (%ebp), %rsp")
#define SBB_RSP_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X1B, 0X24, 0X24 # sbbq (%esp), %rsp")

#define SBB_R8_FROM_PTR_RAX CMT_ASM(".byte 0X4C, 0X1B, 0X00 # sbbq (%rax), %r8")
#define SBB_R8_FROM_PTR_RBX CMT_ASM(".byte 0X4C, 0X1B, 0X03 # sbbq (%rbx), %r8")
#define SBB_R8_FROM_PTR_RCX CMT_ASM(".byte 0X4C, 0X1B, 0X01 # sbbq (%rcx), %r8")
#define SBB_R8_FROM_PTR_RDX CMT_ASM(".byte 0X4C, 0X1B, 0X02 # sbbq (%rdx), %r8")
#define SBB_R8_FROM_PTR_RDI CMT_ASM(".byte 0X4C, 0X1B, 0X07 # sbbq (%rdi), %r8")
#define SBB_R8_FROM_PTR_RSI CMT_ASM(".byte 0X4C, 0X1B, 0X06 # sbbq (%rsi), %r8")
#define SBB_R8_FROM_PTR_RBP CMT_ASM(".byte 0X4C, 0X1B, 0X45, 0X00 # sbbq (%rbp), %r8")
#define SBB_R8_FROM_PTR_RSP CMT_ASM(".byte 0X4C, 0X1B, 0X04, 0X24 # sbbq (%rsp), %r8")
#define SBB_R8_FROM_PTR_R8 CMT_ASM(".byte 0X4D, 0X1B, 0X00 # sbbq (%r8), %r8")
#define SBB_R8_FROM_PTR_R9 CMT_ASM(".byte 0X4D, 0X1B, 0X01 # sbbq (%r9), %r8")
#define SBB_R8_FROM_PTR_R10 CMT_ASM(".byte 0X4D, 0X1B, 0X02 # sbbq (%r10), %r8")
#define SBB_R8_FROM_PTR_R11 CMT_ASM(".byte 0X4D, 0X1B, 0X03 # sbbq (%r11), %r8")
#define SBB_R8_FROM_PTR_R12 CMT_ASM(".byte 0X4D, 0X1B, 0X04, 0X24 # sbbq (%r12), %r8")
#define SBB_R8_FROM_PTR_R13 CMT_ASM(".byte 0X4D, 0X1B, 0X45, 0X00 # sbbq (%r13), %r8")
#define SBB_R8_FROM_PTR_R14 CMT_ASM(".byte 0X4D, 0X1B, 0X06 # sbbq (%r14), %r8")
#define SBB_R8_FROM_PTR_R15 CMT_ASM(".byte 0X4D, 0X1B, 0X07 # sbbq (%r15), %r8")
#define SBB_R8_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0X00 # sbbq (%eax), %r8")
#define SBB_R8_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0X03 # sbbq (%ebx), %r8")
#define SBB_R8_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0X01 # sbbq (%ecx), %r8")
#define SBB_R8_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0X02 # sbbq (%edx), %r8")
#define SBB_R8_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0X07 # sbbq (%edi), %r8")
#define SBB_R8_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0X06 # sbbq (%esi), %r8")
#define SBB_R8_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0X45, 0X00 # sbbq (%ebp), %r8")
#define SBB_R8_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0X04, 0X24 # sbbq (%esp), %r8")

#define SBB_R9_FROM_PTR_RAX CMT_ASM(".byte 0X4C, 0X1B, 0X08 # sbbq (%rax), %r9")
#define SBB_R9_FROM_PTR_RBX CMT_ASM(".byte 0X4C, 0X1B, 0X0B # sbbq (%rbx), %r9")
#define SBB_R9_FROM_PTR_RCX CMT_ASM(".byte 0X4C, 0X1B, 0X09 # sbbq (%rcx), %r9")
#define SBB_R9_FROM_PTR_RDX CMT_ASM(".byte 0X4C, 0X1B, 0X0A # sbbq (%rdx), %r9")
#define SBB_R9_FROM_PTR_RDI CMT_ASM(".byte 0X4C, 0X1B, 0X0F # sbbq (%rdi), %r9")
#define SBB_R9_FROM_PTR_RSI CMT_ASM(".byte 0X4C, 0X1B, 0X0E # sbbq (%rsi), %r9")
#define SBB_R9_FROM_PTR_RBP CMT_ASM(".byte 0X4C, 0X1B, 0X4D, 0X00 # sbbq (%rbp), %r9")
#define SBB_R9_FROM_PTR_RSP CMT_ASM(".byte 0X4C, 0X1B, 0X0C, 0X24 # sbbq (%rsp), %r9")
#define SBB_R9_FROM_PTR_R8 CMT_ASM(".byte 0X4D, 0X1B, 0X08 # sbbq (%r8), %r9")
#define SBB_R9_FROM_PTR_R9 CMT_ASM(".byte 0X4D, 0X1B, 0X09 # sbbq (%r9), %r9")
#define SBB_R9_FROM_PTR_R10 CMT_ASM(".byte 0X4D, 0X1B, 0X0A # sbbq (%r10), %r9")
#define SBB_R9_FROM_PTR_R11 CMT_ASM(".byte 0X4D, 0X1B, 0X0B # sbbq (%r11), %r9")
#define SBB_R9_FROM_PTR_R12 CMT_ASM(".byte 0X4D, 0X1B, 0X0C, 0X24 # sbbq (%r12), %r9")
#define SBB_R9_FROM_PTR_R13 CMT_ASM(".byte 0X4D, 0X1B, 0X4D, 0X00 # sbbq (%r13), %r9")
#define SBB_R9_FROM_PTR_R14 CMT_ASM(".byte 0X4D, 0X1B, 0X0E # sbbq (%r14), %r9")
#define SBB_R9_FROM_PTR_R15 CMT_ASM(".byte 0X4D, 0X1B, 0X0F # sbbq (%r15), %r9")
#define SBB_R9_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0X08 # sbbq (%eax), %r9")
#define SBB_R9_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0X0B # sbbq (%ebx), %r9")
#define SBB_R9_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0X09 # sbbq (%ecx), %r9")
#define SBB_R9_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0X0A # sbbq (%edx), %r9")
#define SBB_R9_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0X0F # sbbq (%edi), %r9")
#define SBB_R9_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0X0E # sbbq (%esi), %r9")
#define SBB_R9_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0X4D, 0X00 # sbbq (%ebp), %r9")
#define SBB_R9_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0X0C, 0X24 # sbbq (%esp), %r9")

#define SBB_R10_FROM_PTR_RAX CMT_ASM(".byte 0X4C, 0X1B, 0X10 # sbbq (%rax), %r10")
#define SBB_R10_FROM_PTR_RBX CMT_ASM(".byte 0X4C, 0X1B, 0X13 # sbbq (%rbx), %r10")
#define SBB_R10_FROM_PTR_RCX CMT_ASM(".byte 0X4C, 0X1B, 0X11 # sbbq (%rcx), %r10")
#define SBB_R10_FROM_PTR_RDX CMT_ASM(".byte 0X4C, 0X1B, 0X12 # sbbq (%rdx), %r10")
#define SBB_R10_FROM_PTR_RDI CMT_ASM(".byte 0X4C, 0X1B, 0X17 # sbbq (%rdi), %r10")
#define SBB_R10_FROM_PTR_RSI CMT_ASM(".byte 0X4C, 0X1B, 0X16 # sbbq (%rsi), %r10")
#define SBB_R10_FROM_PTR_RBP CMT_ASM(".byte 0X4C, 0X1B, 0X55, 0X00 # sbbq (%rbp), %r10")
#define SBB_R10_FROM_PTR_RSP CMT_ASM(".byte 0X4C, 0X1B, 0X14, 0X24 # sbbq (%rsp), %r10")
#define SBB_R10_FROM_PTR_R8 CMT_ASM(".byte 0X4D, 0X1B, 0X10 # sbbq (%r8), %r10")
#define SBB_R10_FROM_PTR_R9 CMT_ASM(".byte 0X4D, 0X1B, 0X11 # sbbq (%r9), %r10")
#define SBB_R10_FROM_PTR_R10 CMT_ASM(".byte 0X4D, 0X1B, 0X12 # sbbq (%r10), %r10")
#define SBB_R10_FROM_PTR_R11 CMT_ASM(".byte 0X4D, 0X1B, 0X13 # sbbq (%r11), %r10")
#define SBB_R10_FROM_PTR_R12 CMT_ASM(".byte 0X4D, 0X1B, 0X14, 0X24 # sbbq (%r12), %r10")
#define SBB_R10_FROM_PTR_R13 CMT_ASM(".byte 0X4D, 0X1B, 0X55, 0X00 # sbbq (%r13), %r10")
#define SBB_R10_FROM_PTR_R14 CMT_ASM(".byte 0X4D, 0X1B, 0X16 # sbbq (%r14), %r10")
#define SBB_R10_FROM_PTR_R15 CMT_ASM(".byte 0X4D, 0X1B, 0X17 # sbbq (%r15), %r10")
#define SBB_R10_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0X10 # sbbq (%eax), %r10")
#define SBB_R10_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0X13 # sbbq (%ebx), %r10")
#define SBB_R10_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0X11 # sbbq (%ecx), %r10")
#define SBB_R10_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0X12 # sbbq (%edx), %r10")
#define SBB_R10_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0X17 # sbbq (%edi), %r10")
#define SBB_R10_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0X16 # sbbq (%esi), %r10")
#define SBB_R10_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0X55, 0X00 # sbbq (%ebp), %r10")
#define SBB_R10_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0X14, 0X24 # sbbq (%esp), %r10")

#define SBB_R11_FROM_PTR_RAX CMT_ASM(".byte 0X4C, 0X1B, 0X18 # sbbq (%rax), %r11")
#define SBB_R11_FROM_PTR_RBX CMT_ASM(".byte 0X4C, 0X1B, 0X1B # sbbq (%rbx), %r11")
#define SBB_R11_FROM_PTR_RCX CMT_ASM(".byte 0X4C, 0X1B, 0X19 # sbbq (%rcx), %r11")
#define SBB_R11_FROM_PTR_RDX CMT_ASM(".byte 0X4C, 0X1B, 0X1A # sbbq (%rdx), %r11")
#define SBB_R11_FROM_PTR_RDI CMT_ASM(".byte 0X4C, 0X1B, 0X1F # sbbq (%rdi), %r11")
#define SBB_R11_FROM_PTR_RSI CMT_ASM(".byte 0X4C, 0X1B, 0X1E # sbbq (%rsi), %r11")
#define SBB_R11_FROM_PTR_RBP CMT_ASM(".byte 0X4C, 0X1B, 0X5D, 0X00 # sbbq (%rbp), %r11")
#define SBB_R11_FROM_PTR_RSP CMT_ASM(".byte 0X4C, 0X1B, 0X1C, 0X24 # sbbq (%rsp), %r11")
#define SBB_R11_FROM_PTR_R8 CMT_ASM(".byte 0X4D, 0X1B, 0X18 # sbbq (%r8), %r11")
#define SBB_R11_FROM_PTR_R9 CMT_ASM(".byte 0X4D, 0X1B, 0X19 # sbbq (%r9), %r11")
#define SBB_R11_FROM_PTR_R10 CMT_ASM(".byte 0X4D, 0X1B, 0X1A # sbbq (%r10), %r11")
#define SBB_R11_FROM_PTR_R11 CMT_ASM(".byte 0X4D, 0X1B, 0X1B # sbbq (%r11), %r11")
#define SBB_R11_FROM_PTR_R12 CMT_ASM(".byte 0X4D, 0X1B, 0X1C, 0X24 # sbbq (%r12), %r11")
#define SBB_R11_FROM_PTR_R13 CMT_ASM(".byte 0X4D, 0X1B, 0X5D, 0X00 # sbbq (%r13), %r11")
#define SBB_R11_FROM_PTR_R14 CMT_ASM(".byte 0X4D, 0X1B, 0X1E # sbbq (%r14), %r11")
#define SBB_R11_FROM_PTR_R15 CMT_ASM(".byte 0X4D, 0X1B, 0X1F # sbbq (%r15), %r11")
#define SBB_R11_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0X18 # sbbq (%eax), %r11")
#define SBB_R11_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0X1B # sbbq (%ebx), %r11")
#define SBB_R11_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0X19 # sbbq (%ecx), %r11")
#define SBB_R11_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0X1A # sbbq (%edx), %r11")
#define SBB_R11_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0X1F # sbbq (%edi), %r11")
#define SBB_R11_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0X1E # sbbq (%esi), %r11")
#define SBB_R11_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0X5D, 0X00 # sbbq (%ebp), %r11")
#define SBB_R11_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0X1C, 0X24 # sbbq (%esp), %r11")

#define SBB_R12_FROM_PTR_RAX CMT_ASM(".byte 0X4C, 0X1B, 0X20 # sbbq (%rax), %r12")
#define SBB_R12_FROM_PTR_RBX CMT_ASM(".byte 0X4C, 0X1B, 0X23 # sbbq (%rbx), %r12")
#define SBB_R12_FROM_PTR_RCX CMT_ASM(".byte 0X4C, 0X1B, 0X21 # sbbq (%rcx), %r12")
#define SBB_R12_FROM_PTR_RDX CMT_ASM(".byte 0X4C, 0X1B, 0X22 # sbbq (%rdx), %r12")
#define SBB_R12_FROM_PTR_RDI CMT_ASM(".byte 0X4C, 0X1B, 0X27 # sbbq (%rdi), %r12")
#define SBB_R12_FROM_PTR_RSI CMT_ASM(".byte 0X4C, 0X1B, 0X26 # sbbq (%rsi), %r12")
#define SBB_R12_FROM_PTR_RBP CMT_ASM(".byte 0X4C, 0X1B, 0X65, 0X00 # sbbq (%rbp), %r12")
#define SBB_R12_FROM_PTR_RSP CMT_ASM(".byte 0X4C, 0X1B, 0X24, 0X24 # sbbq (%rsp), %r12")
#define SBB_R12_FROM_PTR_R8 CMT_ASM(".byte 0X4D, 0X1B, 0X20 # sbbq (%r8), %r12")
#define SBB_R12_FROM_PTR_R9 CMT_ASM(".byte 0X4D, 0X1B, 0X21 # sbbq (%r9), %r12")
#define SBB_R12_FROM_PTR_R10 CMT_ASM(".byte 0X4D, 0X1B, 0X22 # sbbq (%r10), %r12")
#define SBB_R12_FROM_PTR_R11 CMT_ASM(".byte 0X4D, 0X1B, 0X23 # sbbq (%r11), %r12")
#define SBB_R12_FROM_PTR_R12 CMT_ASM(".byte 0X4D, 0X1B, 0X24, 0X24 # sbbq (%r12), %r12")
#define SBB_R12_FROM_PTR_R13 CMT_ASM(".byte 0X4D, 0X1B, 0X65, 0X00 # sbbq (%r13), %r12")
#define SBB_R12_FROM_PTR_R14 CMT_ASM(".byte 0X4D, 0X1B, 0X26 # sbbq (%r14), %r12")
#define SBB_R12_FROM_PTR_R15 CMT_ASM(".byte 0X4D, 0X1B, 0X27 # sbbq (%r15), %r12")
#define SBB_R12_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0X20 # sbbq (%eax), %r12")
#define SBB_R12_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0X23 # sbbq (%ebx), %r12")
#define SBB_R12_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0X21 # sbbq (%ecx), %r12")
#define SBB_R12_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0X22 # sbbq (%edx), %r12")
#define SBB_R12_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0X27 # sbbq (%edi), %r12")
#define SBB_R12_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0X26 # sbbq (%esi), %r12")
#define SBB_R12_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0X65, 0X00 # sbbq (%ebp), %r12")
#define SBB_R12_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0X24, 0X24 # sbbq (%esp), %r12")

#define SBB_R13_FROM_PTR_RAX CMT_ASM(".byte 0X4C, 0X1B, 0X28 # sbbq (%rax), %r13")
#define SBB_R13_FROM_PTR_RBX CMT_ASM(".byte 0X4C, 0X1B, 0X2B # sbbq (%rbx), %r13")
#define SBB_R13_FROM_PTR_RCX CMT_ASM(".byte 0X4C, 0X1B, 0X29 # sbbq (%rcx), %r13")
#define SBB_R13_FROM_PTR_RDX CMT_ASM(".byte 0X4C, 0X1B, 0X2A # sbbq (%rdx), %r13")
#define SBB_R13_FROM_PTR_RDI CMT_ASM(".byte 0X4C, 0X1B, 0X2F # sbbq (%rdi), %r13")
#define SBB_R13_FROM_PTR_RSI CMT_ASM(".byte 0X4C, 0X1B, 0X2E # sbbq (%rsi), %r13")
#define SBB_R13_FROM_PTR_RBP CMT_ASM(".byte 0X4C, 0X1B, 0X6D, 0X00 # sbbq (%rbp), %r13")
#define SBB_R13_FROM_PTR_RSP CMT_ASM(".byte 0X4C, 0X1B, 0X2C, 0X24 # sbbq (%rsp), %r13")
#define SBB_R13_FROM_PTR_R8 CMT_ASM(".byte 0X4D, 0X1B, 0X28 # sbbq (%r8), %r13")
#define SBB_R13_FROM_PTR_R9 CMT_ASM(".byte 0X4D, 0X1B, 0X29 # sbbq (%r9), %r13")
#define SBB_R13_FROM_PTR_R10 CMT_ASM(".byte 0X4D, 0X1B, 0X2A # sbbq (%r10), %r13")
#define SBB_R13_FROM_PTR_R11 CMT_ASM(".byte 0X4D, 0X1B, 0X2B # sbbq (%r11), %r13")
#define SBB_R13_FROM_PTR_R12 CMT_ASM(".byte 0X4D, 0X1B, 0X2C, 0X24 # sbbq (%r12), %r13")
#define SBB_R13_FROM_PTR_R13 CMT_ASM(".byte 0X4D, 0X1B, 0X6D, 0X00 # sbbq (%r13), %r13")
#define SBB_R13_FROM_PTR_R14 CMT_ASM(".byte 0X4D, 0X1B, 0X2E # sbbq (%r14), %r13")
#define SBB_R13_FROM_PTR_R15 CMT_ASM(".byte 0X4D, 0X1B, 0X2F # sbbq (%r15), %r13")
#define SBB_R13_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0X28 # sbbq (%eax), %r13")
#define SBB_R13_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0X2B # sbbq (%ebx), %r13")
#define SBB_R13_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0X29 # sbbq (%ecx), %r13")
#define SBB_R13_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0X2A # sbbq (%edx), %r13")
#define SBB_R13_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0X2F # sbbq (%edi), %r13")
#define SBB_R13_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0X2E # sbbq (%esi), %r13")
#define SBB_R13_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0X6D, 0X00 # sbbq (%ebp), %r13")
#define SBB_R13_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0X2C, 0X24 # sbbq (%esp), %r13")

#define SBB_R14_FROM_PTR_RAX CMT_ASM(".byte 0X4C, 0X1B, 0X30 # sbbq (%rax), %r14")
#define SBB_R14_FROM_PTR_RBX CMT_ASM(".byte 0X4C, 0X1B, 0X33 # sbbq (%rbx), %r14")
#define SBB_R14_FROM_PTR_RCX CMT_ASM(".byte 0X4C, 0X1B, 0X31 # sbbq (%rcx), %r14")
#define SBB_R14_FROM_PTR_RDX CMT_ASM(".byte 0X4C, 0X1B, 0X32 # sbbq (%rdx), %r14")
#define SBB_R14_FROM_PTR_RDI CMT_ASM(".byte 0X4C, 0X1B, 0X37 # sbbq (%rdi), %r14")
#define SBB_R14_FROM_PTR_RSI CMT_ASM(".byte 0X4C, 0X1B, 0X36 # sbbq (%rsi), %r14")
#define SBB_R14_FROM_PTR_RBP CMT_ASM(".byte 0X4C, 0X1B, 0X75, 0X00 # sbbq (%rbp), %r14")
#define SBB_R14_FROM_PTR_RSP CMT_ASM(".byte 0X4C, 0X1B, 0X34, 0X24 # sbbq (%rsp), %r14")
#define SBB_R14_FROM_PTR_R8 CMT_ASM(".byte 0X4D, 0X1B, 0X30 # sbbq (%r8), %r14")
#define SBB_R14_FROM_PTR_R9 CMT_ASM(".byte 0X4D, 0X1B, 0X31 # sbbq (%r9), %r14")
#define SBB_R14_FROM_PTR_R10 CMT_ASM(".byte 0X4D, 0X1B, 0X32 # sbbq (%r10), %r14")
#define SBB_R14_FROM_PTR_R11 CMT_ASM(".byte 0X4D, 0X1B, 0X33 # sbbq (%r11), %r14")
#define SBB_R14_FROM_PTR_R12 CMT_ASM(".byte 0X4D, 0X1B, 0X34, 0X24 # sbbq (%r12), %r14")
#define SBB_R14_FROM_PTR_R13 CMT_ASM(".byte 0X4D, 0X1B, 0X75, 0X00 # sbbq (%r13), %r14")
#define SBB_R14_FROM_PTR_R14 CMT_ASM(".byte 0X4D, 0X1B, 0X36 # sbbq (%r14), %r14")
#define SBB_R14_FROM_PTR_R15 CMT_ASM(".byte 0X4D, 0X1B, 0X37 # sbbq (%r15), %r14")
#define SBB_R14_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0X30 # sbbq (%eax), %r14")
#define SBB_R14_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0X33 # sbbq (%ebx), %r14")
#define SBB_R14_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0X31 # sbbq (%ecx), %r14")
#define SBB_R14_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0X32 # sbbq (%edx), %r14")
#define SBB_R14_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0X37 # sbbq (%edi), %r14")
#define SBB_R14_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0X36 # sbbq (%esi), %r14")
#define SBB_R14_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0X75, 0X00 # sbbq (%ebp), %r14")
#define SBB_R14_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0X34, 0X24 # sbbq (%esp), %r14")

#define SBB_R15_FROM_PTR_RAX CMT_ASM(".byte 0X4C, 0X1B, 0X38 # sbbq (%rax), %r15")
#define SBB_R15_FROM_PTR_RBX CMT_ASM(".byte 0X4C, 0X1B, 0X3B # sbbq (%rbx), %r15")
#define SBB_R15_FROM_PTR_RCX CMT_ASM(".byte 0X4C, 0X1B, 0X39 # sbbq (%rcx), %r15")
#define SBB_R15_FROM_PTR_RDX CMT_ASM(".byte 0X4C, 0X1B, 0X3A # sbbq (%rdx), %r15")
#define SBB_R15_FROM_PTR_RDI CMT_ASM(".byte 0X4C, 0X1B, 0X3F # sbbq (%rdi), %r15")
#define SBB_R15_FROM_PTR_RSI CMT_ASM(".byte 0X4C, 0X1B, 0X3E # sbbq (%rsi), %r15")
#define SBB_R15_FROM_PTR_RBP CMT_ASM(".byte 0X4C, 0X1B, 0X7D, 0X00 # sbbq (%rbp), %r15")
#define SBB_R15_FROM_PTR_RSP CMT_ASM(".byte 0X4C, 0X1B, 0X3C, 0X24 # sbbq (%rsp), %r15")
#define SBB_R15_FROM_PTR_R8 CMT_ASM(".byte 0X4D, 0X1B, 0X38 # sbbq (%r8), %r15")
#define SBB_R15_FROM_PTR_R9 CMT_ASM(".byte 0X4D, 0X1B, 0X39 # sbbq (%r9), %r15")
#define SBB_R15_FROM_PTR_R10 CMT_ASM(".byte 0X4D, 0X1B, 0X3A # sbbq (%r10), %r15")
#define SBB_R15_FROM_PTR_R11 CMT_ASM(".byte 0X4D, 0X1B, 0X3B # sbbq (%r11), %r15")
#define SBB_R15_FROM_PTR_R12 CMT_ASM(".byte 0X4D, 0X1B, 0X3C, 0X24 # sbbq (%r12), %r15")
#define SBB_R15_FROM_PTR_R13 CMT_ASM(".byte 0X4D, 0X1B, 0X7D, 0X00 # sbbq (%r13), %r15")
#define SBB_R15_FROM_PTR_R14 CMT_ASM(".byte 0X4D, 0X1B, 0X3E # sbbq (%r14), %r15")
#define SBB_R15_FROM_PTR_R15 CMT_ASM(".byte 0X4D, 0X1B, 0X3F # sbbq (%r15), %r15")
#define SBB_R15_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0X38 # sbbq (%eax), %r15")
#define SBB_R15_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0X3B # sbbq (%ebx), %r15")
#define SBB_R15_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0X39 # sbbq (%ecx), %r15")
#define SBB_R15_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0X3A # sbbq (%edx), %r15")
#define SBB_R15_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0X3F # sbbq (%edi), %r15")
#define SBB_R15_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0X3E # sbbq (%esi), %r15")
#define SBB_R15_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0X7D, 0X00 # sbbq (%ebp), %r15")
#define SBB_R15_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0X3C, 0X24 # sbbq (%esp), %r15")

#define SBB_RAX_TO_PTR_RAX CMT_ASM(".byte 0X48, 0X19, 0X00 # sbbq %rax, (%rax)")
#define SBB_RAX_TO_PTR_RBX CMT_ASM(".byte 0X48, 0X19, 0X03 # sbbq %rax, (%rbx)")
#define SBB_RAX_TO_PTR_RCX CMT_ASM(".byte 0X48, 0X19, 0X01 # sbbq %rax, (%rcx)")
#define SBB_RAX_TO_PTR_RDX CMT_ASM(".byte 0X48, 0X19, 0X02 # sbbq %rax, (%rdx)")
#define SBB_RAX_TO_PTR_RDI CMT_ASM(".byte 0X48, 0X19, 0X07 # sbbq %rax, (%rdi)")
#define SBB_RAX_TO_PTR_RSI CMT_ASM(".byte 0X48, 0X19, 0X06 # sbbq %rax, (%rsi)")
#define SBB_RAX_TO_PTR_RBP CMT_ASM(".byte 0X48, 0X19, 0X45, 0X00 # sbbq %rax, (%rbp)")
#define SBB_RAX_TO_PTR_RSP CMT_ASM(".byte 0X48, 0X19, 0X04, 0X24 # sbbq %rax, (%rsp)")
#define SBB_RAX_TO_PTR_R8 CMT_ASM(".byte 0X49, 0X19, 0X00 # sbbq %rax, (%r8)")
#define SBB_RAX_TO_PTR_R9 CMT_ASM(".byte 0X49, 0X19, 0X01 # sbbq %rax, (%r9)")
#define SBB_RAX_TO_PTR_R10 CMT_ASM(".byte 0X49, 0X19, 0X02 # sbbq %rax, (%r10)")
#define SBB_RAX_TO_PTR_R11 CMT_ASM(".byte 0X49, 0X19, 0X03 # sbbq %rax, (%r11)")
#define SBB_RAX_TO_PTR_R12 CMT_ASM(".byte 0X49, 0X19, 0X04, 0X24 # sbbq %rax, (%r12)")
#define SBB_RAX_TO_PTR_R13 CMT_ASM(".byte 0X49, 0X19, 0X45, 0X00 # sbbq %rax, (%r13)")
#define SBB_RAX_TO_PTR_R14 CMT_ASM(".byte 0X49, 0X19, 0X06 # sbbq %rax, (%r14)")
#define SBB_RAX_TO_PTR_R15 CMT_ASM(".byte 0X49, 0X19, 0X07 # sbbq %rax, (%r15)")
#define SBB_RAX_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X19, 0X00 # sbbq %rax, (%eax)")
#define SBB_RAX_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X19, 0X03 # sbbq %rax, (%ebx)")
#define SBB_RAX_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X19, 0X01 # sbbq %rax, (%ecx)")
#define SBB_RAX_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X19, 0X02 # sbbq %rax, (%edx)")
#define SBB_RAX_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X19, 0X07 # sbbq %rax, (%edi)")
#define SBB_RAX_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X19, 0X06 # sbbq %rax, (%esi)")
#define SBB_RAX_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X19, 0X45, 0X00 # sbbq %rax, (%ebp)")
#define SBB_RAX_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X19, 0X04, 0X24 # sbbq %rax, (%esp)")

#define SBB_RBX_TO_PTR_RAX CMT_ASM(".byte 0X48, 0X19, 0X18 # sbbq %rbx, (%rax)")
#define SBB_RBX_TO_PTR_RBX CMT_ASM(".byte 0X48, 0X19, 0X1B # sbbq %rbx, (%rbx)")
#define SBB_RBX_TO_PTR_RCX CMT_ASM(".byte 0X48, 0X19, 0X19 # sbbq %rbx, (%rcx)")
#define SBB_RBX_TO_PTR_RDX CMT_ASM(".byte 0X48, 0X19, 0X1A # sbbq %rbx, (%rdx)")
#define SBB_RBX_TO_PTR_RDI CMT_ASM(".byte 0X48, 0X19, 0X1F # sbbq %rbx, (%rdi)")
#define SBB_RBX_TO_PTR_RSI CMT_ASM(".byte 0X48, 0X19, 0X1E # sbbq %rbx, (%rsi)")
#define SBB_RBX_TO_PTR_RBP CMT_ASM(".byte 0X48, 0X19, 0X5D, 0X00 # sbbq %rbx, (%rbp)")
#define SBB_RBX_TO_PTR_RSP CMT_ASM(".byte 0X48, 0X19, 0X1C, 0X24 # sbbq %rbx, (%rsp)")
#define SBB_RBX_TO_PTR_R8 CMT_ASM(".byte 0X49, 0X19, 0X18 # sbbq %rbx, (%r8)")
#define SBB_RBX_TO_PTR_R9 CMT_ASM(".byte 0X49, 0X19, 0X19 # sbbq %rbx, (%r9)")
#define SBB_RBX_TO_PTR_R10 CMT_ASM(".byte 0X49, 0X19, 0X1A # sbbq %rbx, (%r10)")
#define SBB_RBX_TO_PTR_R11 CMT_ASM(".byte 0X49, 0X19, 0X1B # sbbq %rbx, (%r11)")
#define SBB_RBX_TO_PTR_R12 CMT_ASM(".byte 0X49, 0X19, 0X1C, 0X24 # sbbq %rbx, (%r12)")
#define SBB_RBX_TO_PTR_R13 CMT_ASM(".byte 0X49, 0X19, 0X5D, 0X00 # sbbq %rbx, (%r13)")
#define SBB_RBX_TO_PTR_R14 CMT_ASM(".byte 0X49, 0X19, 0X1E # sbbq %rbx, (%r14)")
#define SBB_RBX_TO_PTR_R15 CMT_ASM(".byte 0X49, 0X19, 0X1F # sbbq %rbx, (%r15)")
#define SBB_RBX_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X19, 0X18 # sbbq %rbx, (%eax)")
#define SBB_RBX_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X19, 0X1B # sbbq %rbx, (%ebx)")
#define SBB_RBX_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X19, 0X19 # sbbq %rbx, (%ecx)")
#define SBB_RBX_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X19, 0X1A # sbbq %rbx, (%edx)")
#define SBB_RBX_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X19, 0X1F # sbbq %rbx, (%edi)")
#define SBB_RBX_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X19, 0X1E # sbbq %rbx, (%esi)")
#define SBB_RBX_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X19, 0X5D, 0X00 # sbbq %rbx, (%ebp)")
#define SBB_RBX_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X19, 0X1C, 0X24 # sbbq %rbx, (%esp)")

#define SBB_RCX_TO_PTR_RAX CMT_ASM(".byte 0X48, 0X19, 0X08 # sbbq %rcx, (%rax)")
#define SBB_RCX_TO_PTR_RBX CMT_ASM(".byte 0X48, 0X19, 0X0B # sbbq %rcx, (%rbx)")
#define SBB_RCX_TO_PTR_RCX CMT_ASM(".byte 0X48, 0X19, 0X09 # sbbq %rcx, (%rcx)")
#define SBB_RCX_TO_PTR_RDX CMT_ASM(".byte 0X48, 0X19, 0X0A # sbbq %rcx, (%rdx)")
#define SBB_RCX_TO_PTR_RDI CMT_ASM(".byte 0X48, 0X19, 0X0F # sbbq %rcx, (%rdi)")
#define SBB_RCX_TO_PTR_RSI CMT_ASM(".byte 0X48, 0X19, 0X0E # sbbq %rcx, (%rsi)")
#define SBB_RCX_TO_PTR_RBP CMT_ASM(".byte 0X48, 0X19, 0X4D, 0X00 # sbbq %rcx, (%rbp)")
#define SBB_RCX_TO_PTR_RSP CMT_ASM(".byte 0X48, 0X19, 0X0C, 0X24 # sbbq %rcx, (%rsp)")
#define SBB_RCX_TO_PTR_R8 CMT_ASM(".byte 0X49, 0X19, 0X08 # sbbq %rcx, (%r8)")
#define SBB_RCX_TO_PTR_R9 CMT_ASM(".byte 0X49, 0X19, 0X09 # sbbq %rcx, (%r9)")
#define SBB_RCX_TO_PTR_R10 CMT_ASM(".byte 0X49, 0X19, 0X0A # sbbq %rcx, (%r10)")
#define SBB_RCX_TO_PTR_R11 CMT_ASM(".byte 0X49, 0X19, 0X0B # sbbq %rcx, (%r11)")
#define SBB_RCX_TO_PTR_R12 CMT_ASM(".byte 0X49, 0X19, 0X0C, 0X24 # sbbq %rcx, (%r12)")
#define SBB_RCX_TO_PTR_R13 CMT_ASM(".byte 0X49, 0X19, 0X4D, 0X00 # sbbq %rcx, (%r13)")
#define SBB_RCX_TO_PTR_R14 CMT_ASM(".byte 0X49, 0X19, 0X0E # sbbq %rcx, (%r14)")
#define SBB_RCX_TO_PTR_R15 CMT_ASM(".byte 0X49, 0X19, 0X0F # sbbq %rcx, (%r15)")
#define SBB_RCX_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X19, 0X08 # sbbq %rcx, (%eax)")
#define SBB_RCX_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X19, 0X0B # sbbq %rcx, (%ebx)")
#define SBB_RCX_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X19, 0X09 # sbbq %rcx, (%ecx)")
#define SBB_RCX_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X19, 0X0A # sbbq %rcx, (%edx)")
#define SBB_RCX_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X19, 0X0F # sbbq %rcx, (%edi)")
#define SBB_RCX_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X19, 0X0E # sbbq %rcx, (%esi)")
#define SBB_RCX_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X19, 0X4D, 0X00 # sbbq %rcx, (%ebp)")
#define SBB_RCX_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X19, 0X0C, 0X24 # sbbq %rcx, (%esp)")

#define SBB_RDX_TO_PTR_RAX CMT_ASM(".byte 0X48, 0X19, 0X10 # sbbq %rdx, (%rax)")
#define SBB_RDX_TO_PTR_RBX CMT_ASM(".byte 0X48, 0X19, 0X13 # sbbq %rdx, (%rbx)")
#define SBB_RDX_TO_PTR_RCX CMT_ASM(".byte 0X48, 0X19, 0X11 # sbbq %rdx, (%rcx)")
#define SBB_RDX_TO_PTR_RDX CMT_ASM(".byte 0X48, 0X19, 0X12 # sbbq %rdx, (%rdx)")
#define SBB_RDX_TO_PTR_RDI CMT_ASM(".byte 0X48, 0X19, 0X17 # sbbq %rdx, (%rdi)")
#define SBB_RDX_TO_PTR_RSI CMT_ASM(".byte 0X48, 0X19, 0X16 # sbbq %rdx, (%rsi)")
#define SBB_RDX_TO_PTR_RBP CMT_ASM(".byte 0X48, 0X19, 0X55, 0X00 # sbbq %rdx, (%rbp)")
#define SBB_RDX_TO_PTR_RSP CMT_ASM(".byte 0X48, 0X19, 0X14, 0X24 # sbbq %rdx, (%rsp)")
#define SBB_RDX_TO_PTR_R8 CMT_ASM(".byte 0X49, 0X19, 0X10 # sbbq %rdx, (%r8)")
#define SBB_RDX_TO_PTR_R9 CMT_ASM(".byte 0X49, 0X19, 0X11 # sbbq %rdx, (%r9)")
#define SBB_RDX_TO_PTR_R10 CMT_ASM(".byte 0X49, 0X19, 0X12 # sbbq %rdx, (%r10)")
#define SBB_RDX_TO_PTR_R11 CMT_ASM(".byte 0X49, 0X19, 0X13 # sbbq %rdx, (%r11)")
#define SBB_RDX_TO_PTR_R12 CMT_ASM(".byte 0X49, 0X19, 0X14, 0X24 # sbbq %rdx, (%r12)")
#define SBB_RDX_TO_PTR_R13 CMT_ASM(".byte 0X49, 0X19, 0X55, 0X00 # sbbq %rdx, (%r13)")
#define SBB_RDX_TO_PTR_R14 CMT_ASM(".byte 0X49, 0X19, 0X16 # sbbq %rdx, (%r14)")
#define SBB_RDX_TO_PTR_R15 CMT_ASM(".byte 0X49, 0X19, 0X17 # sbbq %rdx, (%r15)")
#define SBB_RDX_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X19, 0X10 # sbbq %rdx, (%eax)")
#define SBB_RDX_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X19, 0X13 # sbbq %rdx, (%ebx)")
#define SBB_RDX_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X19, 0X11 # sbbq %rdx, (%ecx)")
#define SBB_RDX_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X19, 0X12 # sbbq %rdx, (%edx)")
#define SBB_RDX_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X19, 0X17 # sbbq %rdx, (%edi)")
#define SBB_RDX_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X19, 0X16 # sbbq %rdx, (%esi)")
#define SBB_RDX_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X19, 0X55, 0X00 # sbbq %rdx, (%ebp)")
#define SBB_RDX_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X19, 0X14, 0X24 # sbbq %rdx, (%esp)")

#define SBB_RDI_TO_PTR_RAX CMT_ASM(".byte 0X48, 0X19, 0X38 # sbbq %rdi, (%rax)")
#define SBB_RDI_TO_PTR_RBX CMT_ASM(".byte 0X48, 0X19, 0X3B # sbbq %rdi, (%rbx)")
#define SBB_RDI_TO_PTR_RCX CMT_ASM(".byte 0X48, 0X19, 0X39 # sbbq %rdi, (%rcx)")
#define SBB_RDI_TO_PTR_RDX CMT_ASM(".byte 0X48, 0X19, 0X3A # sbbq %rdi, (%rdx)")
#define SBB_RDI_TO_PTR_RDI CMT_ASM(".byte 0X48, 0X19, 0X3F # sbbq %rdi, (%rdi)")
#define SBB_RDI_TO_PTR_RSI CMT_ASM(".byte 0X48, 0X19, 0X3E # sbbq %rdi, (%rsi)")
#define SBB_RDI_TO_PTR_RBP CMT_ASM(".byte 0X48, 0X19, 0X7D, 0X00 # sbbq %rdi, (%rbp)")
#define SBB_RDI_TO_PTR_RSP CMT_ASM(".byte 0X48, 0X19, 0X3C, 0X24 # sbbq %rdi, (%rsp)")
#define SBB_RDI_TO_PTR_R8 CMT_ASM(".byte 0X49, 0X19, 0X38 # sbbq %rdi, (%r8)")
#define SBB_RDI_TO_PTR_R9 CMT_ASM(".byte 0X49, 0X19, 0X39 # sbbq %rdi, (%r9)")
#define SBB_RDI_TO_PTR_R10 CMT_ASM(".byte 0X49, 0X19, 0X3A # sbbq %rdi, (%r10)")
#define SBB_RDI_TO_PTR_R11 CMT_ASM(".byte 0X49, 0X19, 0X3B # sbbq %rdi, (%r11)")
#define SBB_RDI_TO_PTR_R12 CMT_ASM(".byte 0X49, 0X19, 0X3C, 0X24 # sbbq %rdi, (%r12)")
#define SBB_RDI_TO_PTR_R13 CMT_ASM(".byte 0X49, 0X19, 0X7D, 0X00 # sbbq %rdi, (%r13)")
#define SBB_RDI_TO_PTR_R14 CMT_ASM(".byte 0X49, 0X19, 0X3E # sbbq %rdi, (%r14)")
#define SBB_RDI_TO_PTR_R15 CMT_ASM(".byte 0X49, 0X19, 0X3F # sbbq %rdi, (%r15)")
#define SBB_RDI_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X19, 0X38 # sbbq %rdi, (%eax)")
#define SBB_RDI_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X19, 0X3B # sbbq %rdi, (%ebx)")
#define SBB_RDI_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X19, 0X39 # sbbq %rdi, (%ecx)")
#define SBB_RDI_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X19, 0X3A # sbbq %rdi, (%edx)")
#define SBB_RDI_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X19, 0X3F # sbbq %rdi, (%edi)")
#define SBB_RDI_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X19, 0X3E # sbbq %rdi, (%esi)")
#define SBB_RDI_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X19, 0X7D, 0X00 # sbbq %rdi, (%ebp)")
#define SBB_RDI_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X19, 0X3C, 0X24 # sbbq %rdi, (%esp)")

#define SBB_RSI_TO_PTR_RAX CMT_ASM(".byte 0X48, 0X19, 0X30 # sbbq %rsi, (%rax)")
#define SBB_RSI_TO_PTR_RBX CMT_ASM(".byte 0X48, 0X19, 0X33 # sbbq %rsi, (%rbx)")
#define SBB_RSI_TO_PTR_RCX CMT_ASM(".byte 0X48, 0X19, 0X31 # sbbq %rsi, (%rcx)")
#define SBB_RSI_TO_PTR_RDX CMT_ASM(".byte 0X48, 0X19, 0X32 # sbbq %rsi, (%rdx)")
#define SBB_RSI_TO_PTR_RDI CMT_ASM(".byte 0X48, 0X19, 0X37 # sbbq %rsi, (%rdi)")
#define SBB_RSI_TO_PTR_RSI CMT_ASM(".byte 0X48, 0X19, 0X36 # sbbq %rsi, (%rsi)")
#define SBB_RSI_TO_PTR_RBP CMT_ASM(".byte 0X48, 0X19, 0X75, 0X00 # sbbq %rsi, (%rbp)")
#define SBB_RSI_TO_PTR_RSP CMT_ASM(".byte 0X48, 0X19, 0X34, 0X24 # sbbq %rsi, (%rsp)")
#define SBB_RSI_TO_PTR_R8 CMT_ASM(".byte 0X49, 0X19, 0X30 # sbbq %rsi, (%r8)")
#define SBB_RSI_TO_PTR_R9 CMT_ASM(".byte 0X49, 0X19, 0X31 # sbbq %rsi, (%r9)")
#define SBB_RSI_TO_PTR_R10 CMT_ASM(".byte 0X49, 0X19, 0X32 # sbbq %rsi, (%r10)")
#define SBB_RSI_TO_PTR_R11 CMT_ASM(".byte 0X49, 0X19, 0X33 # sbbq %rsi, (%r11)")
#define SBB_RSI_TO_PTR_R12 CMT_ASM(".byte 0X49, 0X19, 0X34, 0X24 # sbbq %rsi, (%r12)")
#define SBB_RSI_TO_PTR_R13 CMT_ASM(".byte 0X49, 0X19, 0X75, 0X00 # sbbq %rsi, (%r13)")
#define SBB_RSI_TO_PTR_R14 CMT_ASM(".byte 0X49, 0X19, 0X36 # sbbq %rsi, (%r14)")
#define SBB_RSI_TO_PTR_R15 CMT_ASM(".byte 0X49, 0X19, 0X37 # sbbq %rsi, (%r15)")
#define SBB_RSI_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X19, 0X30 # sbbq %rsi, (%eax)")
#define SBB_RSI_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X19, 0X33 # sbbq %rsi, (%ebx)")
#define SBB_RSI_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X19, 0X31 # sbbq %rsi, (%ecx)")
#define SBB_RSI_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X19, 0X32 # sbbq %rsi, (%edx)")
#define SBB_RSI_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X19, 0X37 # sbbq %rsi, (%edi)")
#define SBB_RSI_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X19, 0X36 # sbbq %rsi, (%esi)")
#define SBB_RSI_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X19, 0X75, 0X00 # sbbq %rsi, (%ebp)")
#define SBB_RSI_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X19, 0X34, 0X24 # sbbq %rsi, (%esp)")

#define SBB_RBP_TO_PTR_RAX CMT_ASM(".byte 0X48, 0X19, 0X28 # sbbq %rbp, (%rax)")
#define SBB_RBP_TO_PTR_RBX CMT_ASM(".byte 0X48, 0X19, 0X2B # sbbq %rbp, (%rbx)")
#define SBB_RBP_TO_PTR_RCX CMT_ASM(".byte 0X48, 0X19, 0X29 # sbbq %rbp, (%rcx)")
#define SBB_RBP_TO_PTR_RDX CMT_ASM(".byte 0X48, 0X19, 0X2A # sbbq %rbp, (%rdx)")
#define SBB_RBP_TO_PTR_RDI CMT_ASM(".byte 0X48, 0X19, 0X2F # sbbq %rbp, (%rdi)")
#define SBB_RBP_TO_PTR_RSI CMT_ASM(".byte 0X48, 0X19, 0X2E # sbbq %rbp, (%rsi)")
#define SBB_RBP_TO_PTR_RBP CMT_ASM(".byte 0X48, 0X19, 0X6D, 0X00 # sbbq %rbp, (%rbp)")
#define SBB_RBP_TO_PTR_RSP CMT_ASM(".byte 0X48, 0X19, 0X2C, 0X24 # sbbq %rbp, (%rsp)")
#define SBB_RBP_TO_PTR_R8 CMT_ASM(".byte 0X49, 0X19, 0X28 # sbbq %rbp, (%r8)")
#define SBB_RBP_TO_PTR_R9 CMT_ASM(".byte 0X49, 0X19, 0X29 # sbbq %rbp, (%r9)")
#define SBB_RBP_TO_PTR_R10 CMT_ASM(".byte 0X49, 0X19, 0X2A # sbbq %rbp, (%r10)")
#define SBB_RBP_TO_PTR_R11 CMT_ASM(".byte 0X49, 0X19, 0X2B # sbbq %rbp, (%r11)")
#define SBB_RBP_TO_PTR_R12 CMT_ASM(".byte 0X49, 0X19, 0X2C, 0X24 # sbbq %rbp, (%r12)")
#define SBB_RBP_TO_PTR_R13 CMT_ASM(".byte 0X49, 0X19, 0X6D, 0X00 # sbbq %rbp, (%r13)")
#define SBB_RBP_TO_PTR_R14 CMT_ASM(".byte 0X49, 0X19, 0X2E # sbbq %rbp, (%r14)")
#define SBB_RBP_TO_PTR_R15 CMT_ASM(".byte 0X49, 0X19, 0X2F # sbbq %rbp, (%r15)")
#define SBB_RBP_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X19, 0X28 # sbbq %rbp, (%eax)")
#define SBB_RBP_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X19, 0X2B # sbbq %rbp, (%ebx)")
#define SBB_RBP_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X19, 0X29 # sbbq %rbp, (%ecx)")
#define SBB_RBP_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X19, 0X2A # sbbq %rbp, (%edx)")
#define SBB_RBP_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X19, 0X2F # sbbq %rbp, (%edi)")
#define SBB_RBP_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X19, 0X2E # sbbq %rbp, (%esi)")
#define SBB_RBP_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X19, 0X6D, 0X00 # sbbq %rbp, (%ebp)")
#define SBB_RBP_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X19, 0X2C, 0X24 # sbbq %rbp, (%esp)")

#define SBB_RSP_TO_PTR_RAX CMT_ASM(".byte 0X48, 0X19, 0X20 # sbbq %rsp, (%rax)")
#define SBB_RSP_TO_PTR_RBX CMT_ASM(".byte 0X48, 0X19, 0X23 # sbbq %rsp, (%rbx)")
#define SBB_RSP_TO_PTR_RCX CMT_ASM(".byte 0X48, 0X19, 0X21 # sbbq %rsp, (%rcx)")
#define SBB_RSP_TO_PTR_RDX CMT_ASM(".byte 0X48, 0X19, 0X22 # sbbq %rsp, (%rdx)")
#define SBB_RSP_TO_PTR_RDI CMT_ASM(".byte 0X48, 0X19, 0X27 # sbbq %rsp, (%rdi)")
#define SBB_RSP_TO_PTR_RSI CMT_ASM(".byte 0X48, 0X19, 0X26 # sbbq %rsp, (%rsi)")
#define SBB_RSP_TO_PTR_RBP CMT_ASM(".byte 0X48, 0X19, 0X65, 0X00 # sbbq %rsp, (%rbp)")
#define SBB_RSP_TO_PTR_RSP CMT_ASM(".byte 0X48, 0X19, 0X24, 0X24 # sbbq %rsp, (%rsp)")
#define SBB_RSP_TO_PTR_R8 CMT_ASM(".byte 0X49, 0X19, 0X20 # sbbq %rsp, (%r8)")
#define SBB_RSP_TO_PTR_R9 CMT_ASM(".byte 0X49, 0X19, 0X21 # sbbq %rsp, (%r9)")
#define SBB_RSP_TO_PTR_R10 CMT_ASM(".byte 0X49, 0X19, 0X22 # sbbq %rsp, (%r10)")
#define SBB_RSP_TO_PTR_R11 CMT_ASM(".byte 0X49, 0X19, 0X23 # sbbq %rsp, (%r11)")
#define SBB_RSP_TO_PTR_R12 CMT_ASM(".byte 0X49, 0X19, 0X24, 0X24 # sbbq %rsp, (%r12)")
#define SBB_RSP_TO_PTR_R13 CMT_ASM(".byte 0X49, 0X19, 0X65, 0X00 # sbbq %rsp, (%r13)")
#define SBB_RSP_TO_PTR_R14 CMT_ASM(".byte 0X49, 0X19, 0X26 # sbbq %rsp, (%r14)")
#define SBB_RSP_TO_PTR_R15 CMT_ASM(".byte 0X49, 0X19, 0X27 # sbbq %rsp, (%r15)")
#define SBB_RSP_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X19, 0X20 # sbbq %rsp, (%eax)")
#define SBB_RSP_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X19, 0X23 # sbbq %rsp, (%ebx)")
#define SBB_RSP_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X19, 0X21 # sbbq %rsp, (%ecx)")
#define SBB_RSP_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X19, 0X22 # sbbq %rsp, (%edx)")
#define SBB_RSP_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X19, 0X27 # sbbq %rsp, (%edi)")
#define SBB_RSP_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X19, 0X26 # sbbq %rsp, (%esi)")
#define SBB_RSP_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X19, 0X65, 0X00 # sbbq %rsp, (%ebp)")
#define SBB_RSP_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X19, 0X24, 0X24 # sbbq %rsp, (%esp)")

#define SBB_R8_TO_PTR_RAX CMT_ASM(".byte 0X4C, 0X19, 0X00 # sbbq %r8, (%rax)")
#define SBB_R8_TO_PTR_RBX CMT_ASM(".byte 0X4C, 0X19, 0X03 # sbbq %r8, (%rbx)")
#define SBB_R8_TO_PTR_RCX CMT_ASM(".byte 0X4C, 0X19, 0X01 # sbbq %r8, (%rcx)")
#define SBB_R8_TO_PTR_RDX CMT_ASM(".byte 0X4C, 0X19, 0X02 # sbbq %r8, (%rdx)")
#define SBB_R8_TO_PTR_RDI CMT_ASM(".byte 0X4C, 0X19, 0X07 # sbbq %r8, (%rdi)")
#define SBB_R8_TO_PTR_RSI CMT_ASM(".byte 0X4C, 0X19, 0X06 # sbbq %r8, (%rsi)")
#define SBB_R8_TO_PTR_RBP CMT_ASM(".byte 0X4C, 0X19, 0X45, 0X00 # sbbq %r8, (%rbp)")
#define SBB_R8_TO_PTR_RSP CMT_ASM(".byte 0X4C, 0X19, 0X04, 0X24 # sbbq %r8, (%rsp)")
#define SBB_R8_TO_PTR_R8 CMT_ASM(".byte 0X4D, 0X19, 0X00 # sbbq %r8, (%r8)")
#define SBB_R8_TO_PTR_R9 CMT_ASM(".byte 0X4D, 0X19, 0X01 # sbbq %r8, (%r9)")
#define SBB_R8_TO_PTR_R10 CMT_ASM(".byte 0X4D, 0X19, 0X02 # sbbq %r8, (%r10)")
#define SBB_R8_TO_PTR_R11 CMT_ASM(".byte 0X4D, 0X19, 0X03 # sbbq %r8, (%r11)")
#define SBB_R8_TO_PTR_R12 CMT_ASM(".byte 0X4D, 0X19, 0X04, 0X24 # sbbq %r8, (%r12)")
#define SBB_R8_TO_PTR_R13 CMT_ASM(".byte 0X4D, 0X19, 0X45, 0X00 # sbbq %r8, (%r13)")
#define SBB_R8_TO_PTR_R14 CMT_ASM(".byte 0X4D, 0X19, 0X06 # sbbq %r8, (%r14)")
#define SBB_R8_TO_PTR_R15 CMT_ASM(".byte 0X4D, 0X19, 0X07 # sbbq %r8, (%r15)")
#define SBB_R8_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X19, 0X00 # sbbq %r8, (%eax)")
#define SBB_R8_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X19, 0X03 # sbbq %r8, (%ebx)")
#define SBB_R8_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X19, 0X01 # sbbq %r8, (%ecx)")
#define SBB_R8_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X19, 0X02 # sbbq %r8, (%edx)")
#define SBB_R8_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X19, 0X07 # sbbq %r8, (%edi)")
#define SBB_R8_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X19, 0X06 # sbbq %r8, (%esi)")
#define SBB_R8_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X19, 0X45, 0X00 # sbbq %r8, (%ebp)")
#define SBB_R8_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X19, 0X04, 0X24 # sbbq %r8, (%esp)")

#define SBB_R9_TO_PTR_RAX CMT_ASM(".byte 0X4C, 0X19, 0X08 # sbbq %r9, (%rax)")
#define SBB_R9_TO_PTR_RBX CMT_ASM(".byte 0X4C, 0X19, 0X0B # sbbq %r9, (%rbx)")
#define SBB_R9_TO_PTR_RCX CMT_ASM(".byte 0X4C, 0X19, 0X09 # sbbq %r9, (%rcx)")
#define SBB_R9_TO_PTR_RDX CMT_ASM(".byte 0X4C, 0X19, 0X0A # sbbq %r9, (%rdx)")
#define SBB_R9_TO_PTR_RDI CMT_ASM(".byte 0X4C, 0X19, 0X0F # sbbq %r9, (%rdi)")
#define SBB_R9_TO_PTR_RSI CMT_ASM(".byte 0X4C, 0X19, 0X0E # sbbq %r9, (%rsi)")
#define SBB_R9_TO_PTR_RBP CMT_ASM(".byte 0X4C, 0X19, 0X4D, 0X00 # sbbq %r9, (%rbp)")
#define SBB_R9_TO_PTR_RSP CMT_ASM(".byte 0X4C, 0X19, 0X0C, 0X24 # sbbq %r9, (%rsp)")
#define SBB_R9_TO_PTR_R8 CMT_ASM(".byte 0X4D, 0X19, 0X08 # sbbq %r9, (%r8)")
#define SBB_R9_TO_PTR_R9 CMT_ASM(".byte 0X4D, 0X19, 0X09 # sbbq %r9, (%r9)")
#define SBB_R9_TO_PTR_R10 CMT_ASM(".byte 0X4D, 0X19, 0X0A # sbbq %r9, (%r10)")
#define SBB_R9_TO_PTR_R11 CMT_ASM(".byte 0X4D, 0X19, 0X0B # sbbq %r9, (%r11)")
#define SBB_R9_TO_PTR_R12 CMT_ASM(".byte 0X4D, 0X19, 0X0C, 0X24 # sbbq %r9, (%r12)")
#define SBB_R9_TO_PTR_R13 CMT_ASM(".byte 0X4D, 0X19, 0X4D, 0X00 # sbbq %r9, (%r13)")
#define SBB_R9_TO_PTR_R14 CMT_ASM(".byte 0X4D, 0X19, 0X0E # sbbq %r9, (%r14)")
#define SBB_R9_TO_PTR_R15 CMT_ASM(".byte 0X4D, 0X19, 0X0F # sbbq %r9, (%r15)")
#define SBB_R9_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X19, 0X08 # sbbq %r9, (%eax)")
#define SBB_R9_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X19, 0X0B # sbbq %r9, (%ebx)")
#define SBB_R9_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X19, 0X09 # sbbq %r9, (%ecx)")
#define SBB_R9_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X19, 0X0A # sbbq %r9, (%edx)")
#define SBB_R9_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X19, 0X0F # sbbq %r9, (%edi)")
#define SBB_R9_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X19, 0X0E # sbbq %r9, (%esi)")
#define SBB_R9_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X19, 0X4D, 0X00 # sbbq %r9, (%ebp)")
#define SBB_R9_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X19, 0X0C, 0X24 # sbbq %r9, (%esp)")

#define SBB_R10_TO_PTR_RAX CMT_ASM(".byte 0X4C, 0X19, 0X10 # sbbq %r10, (%rax)")
#define SBB_R10_TO_PTR_RBX CMT_ASM(".byte 0X4C, 0X19, 0X13 # sbbq %r10, (%rbx)")
#define SBB_R10_TO_PTR_RCX CMT_ASM(".byte 0X4C, 0X19, 0X11 # sbbq %r10, (%rcx)")
#define SBB_R10_TO_PTR_RDX CMT_ASM(".byte 0X4C, 0X19, 0X12 # sbbq %r10, (%rdx)")
#define SBB_R10_TO_PTR_RDI CMT_ASM(".byte 0X4C, 0X19, 0X17 # sbbq %r10, (%rdi)")
#define SBB_R10_TO_PTR_RSI CMT_ASM(".byte 0X4C, 0X19, 0X16 # sbbq %r10, (%rsi)")
#define SBB_R10_TO_PTR_RBP CMT_ASM(".byte 0X4C, 0X19, 0X55, 0X00 # sbbq %r10, (%rbp)")
#define SBB_R10_TO_PTR_RSP CMT_ASM(".byte 0X4C, 0X19, 0X14, 0X24 # sbbq %r10, (%rsp)")
#define SBB_R10_TO_PTR_R8 CMT_ASM(".byte 0X4D, 0X19, 0X10 # sbbq %r10, (%r8)")
#define SBB_R10_TO_PTR_R9 CMT_ASM(".byte 0X4D, 0X19, 0X11 # sbbq %r10, (%r9)")
#define SBB_R10_TO_PTR_R10 CMT_ASM(".byte 0X4D, 0X19, 0X12 # sbbq %r10, (%r10)")
#define SBB_R10_TO_PTR_R11 CMT_ASM(".byte 0X4D, 0X19, 0X13 # sbbq %r10, (%r11)")
#define SBB_R10_TO_PTR_R12 CMT_ASM(".byte 0X4D, 0X19, 0X14, 0X24 # sbbq %r10, (%r12)")
#define SBB_R10_TO_PTR_R13 CMT_ASM(".byte 0X4D, 0X19, 0X55, 0X00 # sbbq %r10, (%r13)")
#define SBB_R10_TO_PTR_R14 CMT_ASM(".byte 0X4D, 0X19, 0X16 # sbbq %r10, (%r14)")
#define SBB_R10_TO_PTR_R15 CMT_ASM(".byte 0X4D, 0X19, 0X17 # sbbq %r10, (%r15)")
#define SBB_R10_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X19, 0X10 # sbbq %r10, (%eax)")
#define SBB_R10_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X19, 0X13 # sbbq %r10, (%ebx)")
#define SBB_R10_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X19, 0X11 # sbbq %r10, (%ecx)")
#define SBB_R10_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X19, 0X12 # sbbq %r10, (%edx)")
#define SBB_R10_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X19, 0X17 # sbbq %r10, (%edi)")
#define SBB_R10_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X19, 0X16 # sbbq %r10, (%esi)")
#define SBB_R10_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X19, 0X55, 0X00 # sbbq %r10, (%ebp)")
#define SBB_R10_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X19, 0X14, 0X24 # sbbq %r10, (%esp)")

#define SBB_R11_TO_PTR_RAX CMT_ASM(".byte 0X4C, 0X19, 0X18 # sbbq %r11, (%rax)")
#define SBB_R11_TO_PTR_RBX CMT_ASM(".byte 0X4C, 0X19, 0X1B # sbbq %r11, (%rbx)")
#define SBB_R11_TO_PTR_RCX CMT_ASM(".byte 0X4C, 0X19, 0X19 # sbbq %r11, (%rcx)")
#define SBB_R11_TO_PTR_RDX CMT_ASM(".byte 0X4C, 0X19, 0X1A # sbbq %r11, (%rdx)")
#define SBB_R11_TO_PTR_RDI CMT_ASM(".byte 0X4C, 0X19, 0X1F # sbbq %r11, (%rdi)")
#define SBB_R11_TO_PTR_RSI CMT_ASM(".byte 0X4C, 0X19, 0X1E # sbbq %r11, (%rsi)")
#define SBB_R11_TO_PTR_RBP CMT_ASM(".byte 0X4C, 0X19, 0X5D, 0X00 # sbbq %r11, (%rbp)")
#define SBB_R11_TO_PTR_RSP CMT_ASM(".byte 0X4C, 0X19, 0X1C, 0X24 # sbbq %r11, (%rsp)")
#define SBB_R11_TO_PTR_R8 CMT_ASM(".byte 0X4D, 0X19, 0X18 # sbbq %r11, (%r8)")
#define SBB_R11_TO_PTR_R9 CMT_ASM(".byte 0X4D, 0X19, 0X19 # sbbq %r11, (%r9)")
#define SBB_R11_TO_PTR_R10 CMT_ASM(".byte 0X4D, 0X19, 0X1A # sbbq %r11, (%r10)")
#define SBB_R11_TO_PTR_R11 CMT_ASM(".byte 0X4D, 0X19, 0X1B # sbbq %r11, (%r11)")
#define SBB_R11_TO_PTR_R12 CMT_ASM(".byte 0X4D, 0X19, 0X1C, 0X24 # sbbq %r11, (%r12)")
#define SBB_R11_TO_PTR_R13 CMT_ASM(".byte 0X4D, 0X19, 0X5D, 0X00 # sbbq %r11, (%r13)")
#define SBB_R11_TO_PTR_R14 CMT_ASM(".byte 0X4D, 0X19, 0X1E # sbbq %r11, (%r14)")
#define SBB_R11_TO_PTR_R15 CMT_ASM(".byte 0X4D, 0X19, 0X1F # sbbq %r11, (%r15)")
#define SBB_R11_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X19, 0X18 # sbbq %r11, (%eax)")
#define SBB_R11_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X19, 0X1B # sbbq %r11, (%ebx)")
#define SBB_R11_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X19, 0X19 # sbbq %r11, (%ecx)")
#define SBB_R11_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X19, 0X1A # sbbq %r11, (%edx)")
#define SBB_R11_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X19, 0X1F # sbbq %r11, (%edi)")
#define SBB_R11_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X19, 0X1E # sbbq %r11, (%esi)")
#define SBB_R11_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X19, 0X5D, 0X00 # sbbq %r11, (%ebp)")
#define SBB_R11_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X19, 0X1C, 0X24 # sbbq %r11, (%esp)")

#define SBB_R12_TO_PTR_RAX CMT_ASM(".byte 0X4C, 0X19, 0X20 # sbbq %r12, (%rax)")
#define SBB_R12_TO_PTR_RBX CMT_ASM(".byte 0X4C, 0X19, 0X23 # sbbq %r12, (%rbx)")
#define SBB_R12_TO_PTR_RCX CMT_ASM(".byte 0X4C, 0X19, 0X21 # sbbq %r12, (%rcx)")
#define SBB_R12_TO_PTR_RDX CMT_ASM(".byte 0X4C, 0X19, 0X22 # sbbq %r12, (%rdx)")
#define SBB_R12_TO_PTR_RDI CMT_ASM(".byte 0X4C, 0X19, 0X27 # sbbq %r12, (%rdi)")
#define SBB_R12_TO_PTR_RSI CMT_ASM(".byte 0X4C, 0X19, 0X26 # sbbq %r12, (%rsi)")
#define SBB_R12_TO_PTR_RBP CMT_ASM(".byte 0X4C, 0X19, 0X65, 0X00 # sbbq %r12, (%rbp)")
#define SBB_R12_TO_PTR_RSP CMT_ASM(".byte 0X4C, 0X19, 0X24, 0X24 # sbbq %r12, (%rsp)")
#define SBB_R12_TO_PTR_R8 CMT_ASM(".byte 0X4D, 0X19, 0X20 # sbbq %r12, (%r8)")
#define SBB_R12_TO_PTR_R9 CMT_ASM(".byte 0X4D, 0X19, 0X21 # sbbq %r12, (%r9)")
#define SBB_R12_TO_PTR_R10 CMT_ASM(".byte 0X4D, 0X19, 0X22 # sbbq %r12, (%r10)")
#define SBB_R12_TO_PTR_R11 CMT_ASM(".byte 0X4D, 0X19, 0X23 # sbbq %r12, (%r11)")
#define SBB_R12_TO_PTR_R12 CMT_ASM(".byte 0X4D, 0X19, 0X24, 0X24 # sbbq %r12, (%r12)")
#define SBB_R12_TO_PTR_R13 CMT_ASM(".byte 0X4D, 0X19, 0X65, 0X00 # sbbq %r12, (%r13)")
#define SBB_R12_TO_PTR_R14 CMT_ASM(".byte 0X4D, 0X19, 0X26 # sbbq %r12, (%r14)")
#define SBB_R12_TO_PTR_R15 CMT_ASM(".byte 0X4D, 0X19, 0X27 # sbbq %r12, (%r15)")
#define SBB_R12_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X19, 0X20 # sbbq %r12, (%eax)")
#define SBB_R12_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X19, 0X23 # sbbq %r12, (%ebx)")
#define SBB_R12_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X19, 0X21 # sbbq %r12, (%ecx)")
#define SBB_R12_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X19, 0X22 # sbbq %r12, (%edx)")
#define SBB_R12_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X19, 0X27 # sbbq %r12, (%edi)")
#define SBB_R12_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X19, 0X26 # sbbq %r12, (%esi)")
#define SBB_R12_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X19, 0X65, 0X00 # sbbq %r12, (%ebp)")
#define SBB_R12_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X19, 0X24, 0X24 # sbbq %r12, (%esp)")

#define SBB_R13_TO_PTR_RAX CMT_ASM(".byte 0X4C, 0X19, 0X28 # sbbq %r13, (%rax)")
#define SBB_R13_TO_PTR_RBX CMT_ASM(".byte 0X4C, 0X19, 0X2B # sbbq %r13, (%rbx)")
#define SBB_R13_TO_PTR_RCX CMT_ASM(".byte 0X4C, 0X19, 0X29 # sbbq %r13, (%rcx)")
#define SBB_R13_TO_PTR_RDX CMT_ASM(".byte 0X4C, 0X19, 0X2A # sbbq %r13, (%rdx)")
#define SBB_R13_TO_PTR_RDI CMT_ASM(".byte 0X4C, 0X19, 0X2F # sbbq %r13, (%rdi)")
#define SBB_R13_TO_PTR_RSI CMT_ASM(".byte 0X4C, 0X19, 0X2E # sbbq %r13, (%rsi)")
#define SBB_R13_TO_PTR_RBP CMT_ASM(".byte 0X4C, 0X19, 0X6D, 0X00 # sbbq %r13, (%rbp)")
#define SBB_R13_TO_PTR_RSP CMT_ASM(".byte 0X4C, 0X19, 0X2C, 0X24 # sbbq %r13, (%rsp)")
#define SBB_R13_TO_PTR_R8 CMT_ASM(".byte 0X4D, 0X19, 0X28 # sbbq %r13, (%r8)")
#define SBB_R13_TO_PTR_R9 CMT_ASM(".byte 0X4D, 0X19, 0X29 # sbbq %r13, (%r9)")
#define SBB_R13_TO_PTR_R10 CMT_ASM(".byte 0X4D, 0X19, 0X2A # sbbq %r13, (%r10)")
#define SBB_R13_TO_PTR_R11 CMT_ASM(".byte 0X4D, 0X19, 0X2B # sbbq %r13, (%r11)")
#define SBB_R13_TO_PTR_R12 CMT_ASM(".byte 0X4D, 0X19, 0X2C, 0X24 # sbbq %r13, (%r12)")
#define SBB_R13_TO_PTR_R13 CMT_ASM(".byte 0X4D, 0X19, 0X6D, 0X00 # sbbq %r13, (%r13)")
#define SBB_R13_TO_PTR_R14 CMT_ASM(".byte 0X4D, 0X19, 0X2E # sbbq %r13, (%r14)")
#define SBB_R13_TO_PTR_R15 CMT_ASM(".byte 0X4D, 0X19, 0X2F # sbbq %r13, (%r15)")
#define SBB_R13_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X19, 0X28 # sbbq %r13, (%eax)")
#define SBB_R13_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X19, 0X2B # sbbq %r13, (%ebx)")
#define SBB_R13_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X19, 0X29 # sbbq %r13, (%ecx)")
#define SBB_R13_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X19, 0X2A # sbbq %r13, (%edx)")
#define SBB_R13_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X19, 0X2F # sbbq %r13, (%edi)")
#define SBB_R13_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X19, 0X2E # sbbq %r13, (%esi)")
#define SBB_R13_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X19, 0X6D, 0X00 # sbbq %r13, (%ebp)")
#define SBB_R13_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X19, 0X2C, 0X24 # sbbq %r13, (%esp)")

#define SBB_R14_TO_PTR_RAX CMT_ASM(".byte 0X4C, 0X19, 0X30 # sbbq %r14, (%rax)")
#define SBB_R14_TO_PTR_RBX CMT_ASM(".byte 0X4C, 0X19, 0X33 # sbbq %r14, (%rbx)")
#define SBB_R14_TO_PTR_RCX CMT_ASM(".byte 0X4C, 0X19, 0X31 # sbbq %r14, (%rcx)")
#define SBB_R14_TO_PTR_RDX CMT_ASM(".byte 0X4C, 0X19, 0X32 # sbbq %r14, (%rdx)")
#define SBB_R14_TO_PTR_RDI CMT_ASM(".byte 0X4C, 0X19, 0X37 # sbbq %r14, (%rdi)")
#define SBB_R14_TO_PTR_RSI CMT_ASM(".byte 0X4C, 0X19, 0X36 # sbbq %r14, (%rsi)")
#define SBB_R14_TO_PTR_RBP CMT_ASM(".byte 0X4C, 0X19, 0X75, 0X00 # sbbq %r14, (%rbp)")
#define SBB_R14_TO_PTR_RSP CMT_ASM(".byte 0X4C, 0X19, 0X34, 0X24 # sbbq %r14, (%rsp)")
#define SBB_R14_TO_PTR_R8 CMT_ASM(".byte 0X4D, 0X19, 0X30 # sbbq %r14, (%r8)")
#define SBB_R14_TO_PTR_R9 CMT_ASM(".byte 0X4D, 0X19, 0X31 # sbbq %r14, (%r9)")
#define SBB_R14_TO_PTR_R10 CMT_ASM(".byte 0X4D, 0X19, 0X32 # sbbq %r14, (%r10)")
#define SBB_R14_TO_PTR_R11 CMT_ASM(".byte 0X4D, 0X19, 0X33 # sbbq %r14, (%r11)")
#define SBB_R14_TO_PTR_R12 CMT_ASM(".byte 0X4D, 0X19, 0X34, 0X24 # sbbq %r14, (%r12)")
#define SBB_R14_TO_PTR_R13 CMT_ASM(".byte 0X4D, 0X19, 0X75, 0X00 # sbbq %r14, (%r13)")
#define SBB_R14_TO_PTR_R14 CMT_ASM(".byte 0X4D, 0X19, 0X36 # sbbq %r14, (%r14)")
#define SBB_R14_TO_PTR_R15 CMT_ASM(".byte 0X4D, 0X19, 0X37 # sbbq %r14, (%r15)")
#define SBB_R14_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X19, 0X30 # sbbq %r14, (%eax)")
#define SBB_R14_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X19, 0X33 # sbbq %r14, (%ebx)")
#define SBB_R14_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X19, 0X31 # sbbq %r14, (%ecx)")
#define SBB_R14_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X19, 0X32 # sbbq %r14, (%edx)")
#define SBB_R14_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X19, 0X37 # sbbq %r14, (%edi)")
#define SBB_R14_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X19, 0X36 # sbbq %r14, (%esi)")
#define SBB_R14_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X19, 0X75, 0X00 # sbbq %r14, (%ebp)")
#define SBB_R14_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X19, 0X34, 0X24 # sbbq %r14, (%esp)")

#define SBB_R15_TO_PTR_RAX CMT_ASM(".byte 0X4C, 0X19, 0X38 # sbbq %r15, (%rax)")
#define SBB_R15_TO_PTR_RBX CMT_ASM(".byte 0X4C, 0X19, 0X3B # sbbq %r15, (%rbx)")
#define SBB_R15_TO_PTR_RCX CMT_ASM(".byte 0X4C, 0X19, 0X39 # sbbq %r15, (%rcx)")
#define SBB_R15_TO_PTR_RDX CMT_ASM(".byte 0X4C, 0X19, 0X3A # sbbq %r15, (%rdx)")
#define SBB_R15_TO_PTR_RDI CMT_ASM(".byte 0X4C, 0X19, 0X3F # sbbq %r15, (%rdi)")
#define SBB_R15_TO_PTR_RSI CMT_ASM(".byte 0X4C, 0X19, 0X3E # sbbq %r15, (%rsi)")
#define SBB_R15_TO_PTR_RBP CMT_ASM(".byte 0X4C, 0X19, 0X7D, 0X00 # sbbq %r15, (%rbp)")
#define SBB_R15_TO_PTR_RSP CMT_ASM(".byte 0X4C, 0X19, 0X3C, 0X24 # sbbq %r15, (%rsp)")
#define SBB_R15_TO_PTR_R8 CMT_ASM(".byte 0X4D, 0X19, 0X38 # sbbq %r15, (%r8)")
#define SBB_R15_TO_PTR_R9 CMT_ASM(".byte 0X4D, 0X19, 0X39 # sbbq %r15, (%r9)")
#define SBB_R15_TO_PTR_R10 CMT_ASM(".byte 0X4D, 0X19, 0X3A # sbbq %r15, (%r10)")
#define SBB_R15_TO_PTR_R11 CMT_ASM(".byte 0X4D, 0X19, 0X3B # sbbq %r15, (%r11)")
#define SBB_R15_TO_PTR_R12 CMT_ASM(".byte 0X4D, 0X19, 0X3C, 0X24 # sbbq %r15, (%r12)")
#define SBB_R15_TO_PTR_R13 CMT_ASM(".byte 0X4D, 0X19, 0X7D, 0X00 # sbbq %r15, (%r13)")
#define SBB_R15_TO_PTR_R14 CMT_ASM(".byte 0X4D, 0X19, 0X3E # sbbq %r15, (%r14)")
#define SBB_R15_TO_PTR_R15 CMT_ASM(".byte 0X4D, 0X19, 0X3F # sbbq %r15, (%r15)")
#define SBB_R15_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X19, 0X38 # sbbq %r15, (%eax)")
#define SBB_R15_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X19, 0X3B # sbbq %r15, (%ebx)")
#define SBB_R15_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X19, 0X39 # sbbq %r15, (%ecx)")
#define SBB_R15_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X19, 0X3A # sbbq %r15, (%edx)")
#define SBB_R15_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X19, 0X3F # sbbq %r15, (%edi)")
#define SBB_R15_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X19, 0X3E # sbbq %r15, (%esi)")
#define SBB_R15_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X19, 0X7D, 0X00 # sbbq %r15, (%ebp)")
#define SBB_R15_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X19, 0X3C, 0X24 # sbbq %r15, (%esp)")

#define SBB_RAX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X1B, 0X80 # sbbq " _(VALUE) "(%rax), %rax")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RAX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X1B, 0X83 # sbbq " _(VALUE) "(%rbx), %rax")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RAX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X1B, 0X81 # sbbq " _(VALUE) "(%rcx), %rax")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RAX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X1B, 0X82 # sbbq " _(VALUE) "(%rdx), %rax")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RAX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X1B, 0X87 # sbbq " _(VALUE) "(%rdi), %rax")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RAX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X1B, 0X86 # sbbq " _(VALUE) "(%rsi), %rax")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RAX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X1B, 0X85 # sbbq " _(VALUE) "(%rbp), %rax")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RAX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X1B, 0X84, 0X24 # sbbq " _(VALUE) "(%rsp), %rax")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RAX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X1B, 0X80 # sbbq " _(VALUE) "(%r8), %rax")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RAX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X1B, 0X81 # sbbq " _(VALUE) "(%r9), %rax")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RAX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X1B, 0X82 # sbbq " _(VALUE) "(%r10), %rax")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RAX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X1B, 0X83 # sbbq " _(VALUE) "(%r11), %rax")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RAX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X1B, 0X84, 0X24 # sbbq " _(VALUE) "(%r12), %rax")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RAX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X1B, 0X85 # sbbq " _(VALUE) "(%r13), %rax")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RAX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X1B, 0X86 # sbbq " _(VALUE) "(%r14), %rax")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RAX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X1B, 0X87 # sbbq " _(VALUE) "(%r15), %rax")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RAX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X1B, 0X80 # sbbq " _(VALUE) "(%eax), %rax")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RAX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X1B, 0X83 # sbbq " _(VALUE) "(%ebx), %rax")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RAX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X1B, 0X81 # sbbq " _(VALUE) "(%ecx), %rax")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RAX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X1B, 0X82 # sbbq " _(VALUE) "(%edx), %rax")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RAX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X1B, 0X87 # sbbq " _(VALUE) "(%edi), %rax")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RAX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X1B, 0X86 # sbbq " _(VALUE) "(%esi), %rax")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RAX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X1B, 0X85 # sbbq " _(VALUE) "(%ebp), %rax")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RAX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X1B, 0X84, 0X24 # sbbq " _(VALUE) "(%esp), %rax")\
	CMT_ASM(".long " _(VALUE))

#define SBB_RBX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X1B, 0X98 # sbbq " _(VALUE) "(%rax), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RBX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X1B, 0X9B # sbbq " _(VALUE) "(%rbx), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RBX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X1B, 0X99 # sbbq " _(VALUE) "(%rcx), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RBX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X1B, 0X9A # sbbq " _(VALUE) "(%rdx), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RBX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X1B, 0X9F # sbbq " _(VALUE) "(%rdi), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RBX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X1B, 0X9E # sbbq " _(VALUE) "(%rsi), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RBX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X1B, 0X9D # sbbq " _(VALUE) "(%rbp), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RBX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X1B, 0X9C, 0X24 # sbbq " _(VALUE) "(%rsp), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RBX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X1B, 0X98 # sbbq " _(VALUE) "(%r8), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RBX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X1B, 0X99 # sbbq " _(VALUE) "(%r9), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RBX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X1B, 0X9A # sbbq " _(VALUE) "(%r10), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RBX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X1B, 0X9B # sbbq " _(VALUE) "(%r11), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RBX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X1B, 0X9C, 0X24 # sbbq " _(VALUE) "(%r12), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RBX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X1B, 0X9D # sbbq " _(VALUE) "(%r13), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RBX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X1B, 0X9E # sbbq " _(VALUE) "(%r14), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RBX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X1B, 0X9F # sbbq " _(VALUE) "(%r15), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RBX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X1B, 0X98 # sbbq " _(VALUE) "(%eax), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RBX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X1B, 0X9B # sbbq " _(VALUE) "(%ebx), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RBX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X1B, 0X99 # sbbq " _(VALUE) "(%ecx), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RBX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X1B, 0X9A # sbbq " _(VALUE) "(%edx), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RBX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X1B, 0X9F # sbbq " _(VALUE) "(%edi), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RBX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X1B, 0X9E # sbbq " _(VALUE) "(%esi), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RBX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X1B, 0X9D # sbbq " _(VALUE) "(%ebp), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RBX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X1B, 0X9C, 0X24 # sbbq " _(VALUE) "(%esp), %rbx")\
	CMT_ASM(".long " _(VALUE))

#define SBB_RCX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X1B, 0X88 # sbbq " _(VALUE) "(%rax), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RCX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X1B, 0X8B # sbbq " _(VALUE) "(%rbx), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RCX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X1B, 0X89 # sbbq " _(VALUE) "(%rcx), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RCX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X1B, 0X8A # sbbq " _(VALUE) "(%rdx), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RCX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X1B, 0X8F # sbbq " _(VALUE) "(%rdi), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RCX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X1B, 0X8E # sbbq " _(VALUE) "(%rsi), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RCX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X1B, 0X8D # sbbq " _(VALUE) "(%rbp), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RCX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X1B, 0X8C, 0X24 # sbbq " _(VALUE) "(%rsp), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RCX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X1B, 0X88 # sbbq " _(VALUE) "(%r8), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RCX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X1B, 0X89 # sbbq " _(VALUE) "(%r9), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RCX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X1B, 0X8A # sbbq " _(VALUE) "(%r10), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RCX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X1B, 0X8B # sbbq " _(VALUE) "(%r11), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RCX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X1B, 0X8C, 0X24 # sbbq " _(VALUE) "(%r12), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RCX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X1B, 0X8D # sbbq " _(VALUE) "(%r13), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RCX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X1B, 0X8E # sbbq " _(VALUE) "(%r14), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RCX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X1B, 0X8F # sbbq " _(VALUE) "(%r15), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RCX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X1B, 0X88 # sbbq " _(VALUE) "(%eax), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RCX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X1B, 0X8B # sbbq " _(VALUE) "(%ebx), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RCX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X1B, 0X89 # sbbq " _(VALUE) "(%ecx), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RCX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X1B, 0X8A # sbbq " _(VALUE) "(%edx), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RCX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X1B, 0X8F # sbbq " _(VALUE) "(%edi), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RCX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X1B, 0X8E # sbbq " _(VALUE) "(%esi), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RCX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X1B, 0X8D # sbbq " _(VALUE) "(%ebp), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RCX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X1B, 0X8C, 0X24 # sbbq " _(VALUE) "(%esp), %rcx")\
	CMT_ASM(".long " _(VALUE))

#define SBB_RDX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X1B, 0X90 # sbbq " _(VALUE) "(%rax), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RDX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X1B, 0X93 # sbbq " _(VALUE) "(%rbx), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RDX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X1B, 0X91 # sbbq " _(VALUE) "(%rcx), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RDX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X1B, 0X92 # sbbq " _(VALUE) "(%rdx), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RDX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X1B, 0X97 # sbbq " _(VALUE) "(%rdi), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RDX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X1B, 0X96 # sbbq " _(VALUE) "(%rsi), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RDX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X1B, 0X95 # sbbq " _(VALUE) "(%rbp), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RDX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X1B, 0X94, 0X24 # sbbq " _(VALUE) "(%rsp), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RDX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X1B, 0X90 # sbbq " _(VALUE) "(%r8), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RDX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X1B, 0X91 # sbbq " _(VALUE) "(%r9), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RDX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X1B, 0X92 # sbbq " _(VALUE) "(%r10), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RDX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X1B, 0X93 # sbbq " _(VALUE) "(%r11), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RDX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X1B, 0X94, 0X24 # sbbq " _(VALUE) "(%r12), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RDX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X1B, 0X95 # sbbq " _(VALUE) "(%r13), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RDX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X1B, 0X96 # sbbq " _(VALUE) "(%r14), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RDX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X1B, 0X97 # sbbq " _(VALUE) "(%r15), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RDX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X1B, 0X90 # sbbq " _(VALUE) "(%eax), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RDX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X1B, 0X93 # sbbq " _(VALUE) "(%ebx), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RDX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X1B, 0X91 # sbbq " _(VALUE) "(%ecx), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RDX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X1B, 0X92 # sbbq " _(VALUE) "(%edx), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RDX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X1B, 0X97 # sbbq " _(VALUE) "(%edi), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RDX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X1B, 0X96 # sbbq " _(VALUE) "(%esi), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RDX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X1B, 0X95 # sbbq " _(VALUE) "(%ebp), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RDX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X1B, 0X94, 0X24 # sbbq " _(VALUE) "(%esp), %rdx")\
	CMT_ASM(".long " _(VALUE))

#define SBB_RDI_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X1B, 0XB8 # sbbq " _(VALUE) "(%rax), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RDI_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X1B, 0XBB # sbbq " _(VALUE) "(%rbx), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RDI_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X1B, 0XB9 # sbbq " _(VALUE) "(%rcx), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RDI_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X1B, 0XBA # sbbq " _(VALUE) "(%rdx), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RDI_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X1B, 0XBF # sbbq " _(VALUE) "(%rdi), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RDI_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X1B, 0XBE # sbbq " _(VALUE) "(%rsi), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RDI_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X1B, 0XBD # sbbq " _(VALUE) "(%rbp), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RDI_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X1B, 0XBC, 0X24 # sbbq " _(VALUE) "(%rsp), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RDI_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X1B, 0XB8 # sbbq " _(VALUE) "(%r8), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RDI_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X1B, 0XB9 # sbbq " _(VALUE) "(%r9), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RDI_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X1B, 0XBA # sbbq " _(VALUE) "(%r10), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RDI_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X1B, 0XBB # sbbq " _(VALUE) "(%r11), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RDI_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X1B, 0XBC, 0X24 # sbbq " _(VALUE) "(%r12), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RDI_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X1B, 0XBD # sbbq " _(VALUE) "(%r13), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RDI_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X1B, 0XBE # sbbq " _(VALUE) "(%r14), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RDI_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X1B, 0XBF # sbbq " _(VALUE) "(%r15), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RDI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X1B, 0XB8 # sbbq " _(VALUE) "(%eax), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RDI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X1B, 0XBB # sbbq " _(VALUE) "(%ebx), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RDI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X1B, 0XB9 # sbbq " _(VALUE) "(%ecx), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RDI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X1B, 0XBA # sbbq " _(VALUE) "(%edx), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RDI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X1B, 0XBF # sbbq " _(VALUE) "(%edi), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RDI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X1B, 0XBE # sbbq " _(VALUE) "(%esi), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RDI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X1B, 0XBD # sbbq " _(VALUE) "(%ebp), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RDI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X1B, 0XBC, 0X24 # sbbq " _(VALUE) "(%esp), %rdi")\
	CMT_ASM(".long " _(VALUE))

#define SBB_RSI_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X1B, 0XB0 # sbbq " _(VALUE) "(%rax), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RSI_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X1B, 0XB3 # sbbq " _(VALUE) "(%rbx), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RSI_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X1B, 0XB1 # sbbq " _(VALUE) "(%rcx), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RSI_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X1B, 0XB2 # sbbq " _(VALUE) "(%rdx), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RSI_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X1B, 0XB7 # sbbq " _(VALUE) "(%rdi), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RSI_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X1B, 0XB6 # sbbq " _(VALUE) "(%rsi), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RSI_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X1B, 0XB5 # sbbq " _(VALUE) "(%rbp), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RSI_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X1B, 0XB4, 0X24 # sbbq " _(VALUE) "(%rsp), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RSI_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X1B, 0XB0 # sbbq " _(VALUE) "(%r8), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RSI_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X1B, 0XB1 # sbbq " _(VALUE) "(%r9), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RSI_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X1B, 0XB2 # sbbq " _(VALUE) "(%r10), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RSI_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X1B, 0XB3 # sbbq " _(VALUE) "(%r11), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RSI_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X1B, 0XB4, 0X24 # sbbq " _(VALUE) "(%r12), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RSI_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X1B, 0XB5 # sbbq " _(VALUE) "(%r13), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RSI_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X1B, 0XB6 # sbbq " _(VALUE) "(%r14), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RSI_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X1B, 0XB7 # sbbq " _(VALUE) "(%r15), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RSI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X1B, 0XB0 # sbbq " _(VALUE) "(%eax), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RSI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X1B, 0XB3 # sbbq " _(VALUE) "(%ebx), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RSI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X1B, 0XB1 # sbbq " _(VALUE) "(%ecx), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RSI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X1B, 0XB2 # sbbq " _(VALUE) "(%edx), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RSI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X1B, 0XB7 # sbbq " _(VALUE) "(%edi), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RSI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X1B, 0XB6 # sbbq " _(VALUE) "(%esi), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RSI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X1B, 0XB5 # sbbq " _(VALUE) "(%ebp), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RSI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X1B, 0XB4, 0X24 # sbbq " _(VALUE) "(%esp), %rsi")\
	CMT_ASM(".long " _(VALUE))

#define SBB_RBP_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X1B, 0XA8 # sbbq " _(VALUE) "(%rax), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RBP_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X1B, 0XAB # sbbq " _(VALUE) "(%rbx), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RBP_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X1B, 0XA9 # sbbq " _(VALUE) "(%rcx), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RBP_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X1B, 0XAA # sbbq " _(VALUE) "(%rdx), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RBP_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X1B, 0XAF # sbbq " _(VALUE) "(%rdi), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RBP_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X1B, 0XAE # sbbq " _(VALUE) "(%rsi), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RBP_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X1B, 0XAD # sbbq " _(VALUE) "(%rbp), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RBP_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X1B, 0XAC, 0X24 # sbbq " _(VALUE) "(%rsp), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RBP_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X1B, 0XA8 # sbbq " _(VALUE) "(%r8), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RBP_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X1B, 0XA9 # sbbq " _(VALUE) "(%r9), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RBP_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X1B, 0XAA # sbbq " _(VALUE) "(%r10), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RBP_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X1B, 0XAB # sbbq " _(VALUE) "(%r11), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RBP_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X1B, 0XAC, 0X24 # sbbq " _(VALUE) "(%r12), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RBP_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X1B, 0XAD # sbbq " _(VALUE) "(%r13), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RBP_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X1B, 0XAE # sbbq " _(VALUE) "(%r14), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RBP_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X1B, 0XAF # sbbq " _(VALUE) "(%r15), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RBP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X1B, 0XA8 # sbbq " _(VALUE) "(%eax), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RBP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X1B, 0XAB # sbbq " _(VALUE) "(%ebx), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RBP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X1B, 0XA9 # sbbq " _(VALUE) "(%ecx), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RBP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X1B, 0XAA # sbbq " _(VALUE) "(%edx), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RBP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X1B, 0XAF # sbbq " _(VALUE) "(%edi), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RBP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X1B, 0XAE # sbbq " _(VALUE) "(%esi), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RBP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X1B, 0XAD # sbbq " _(VALUE) "(%ebp), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RBP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X1B, 0XAC, 0X24 # sbbq " _(VALUE) "(%esp), %rbp")\
	CMT_ASM(".long " _(VALUE))

#define SBB_RSP_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X1B, 0XA0 # sbbq " _(VALUE) "(%rax), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RSP_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X1B, 0XA3 # sbbq " _(VALUE) "(%rbx), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RSP_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X1B, 0XA1 # sbbq " _(VALUE) "(%rcx), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RSP_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X1B, 0XA2 # sbbq " _(VALUE) "(%rdx), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RSP_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X1B, 0XA7 # sbbq " _(VALUE) "(%rdi), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RSP_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X1B, 0XA6 # sbbq " _(VALUE) "(%rsi), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RSP_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X1B, 0XA5 # sbbq " _(VALUE) "(%rbp), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RSP_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X1B, 0XA4, 0X24 # sbbq " _(VALUE) "(%rsp), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RSP_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X1B, 0XA0 # sbbq " _(VALUE) "(%r8), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RSP_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X1B, 0XA1 # sbbq " _(VALUE) "(%r9), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RSP_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X1B, 0XA2 # sbbq " _(VALUE) "(%r10), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RSP_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X1B, 0XA3 # sbbq " _(VALUE) "(%r11), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RSP_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X1B, 0XA4, 0X24 # sbbq " _(VALUE) "(%r12), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RSP_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X1B, 0XA5 # sbbq " _(VALUE) "(%r13), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RSP_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X1B, 0XA6 # sbbq " _(VALUE) "(%r14), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RSP_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X1B, 0XA7 # sbbq " _(VALUE) "(%r15), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RSP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X1B, 0XA0 # sbbq " _(VALUE) "(%eax), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RSP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X1B, 0XA3 # sbbq " _(VALUE) "(%ebx), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RSP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X1B, 0XA1 # sbbq " _(VALUE) "(%ecx), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RSP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X1B, 0XA2 # sbbq " _(VALUE) "(%edx), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RSP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X1B, 0XA7 # sbbq " _(VALUE) "(%edi), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RSP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X1B, 0XA6 # sbbq " _(VALUE) "(%esi), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RSP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X1B, 0XA5 # sbbq " _(VALUE) "(%ebp), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RSP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X1B, 0XA4, 0X24 # sbbq " _(VALUE) "(%esp), %rsp")\
	CMT_ASM(".long " _(VALUE))

#define SBB_R8_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X1B, 0X80 # sbbq " _(VALUE) "(%rax), %r8")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X1B, 0X83 # sbbq " _(VALUE) "(%rbx), %r8")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X1B, 0X81 # sbbq " _(VALUE) "(%rcx), %r8")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X1B, 0X82 # sbbq " _(VALUE) "(%rdx), %r8")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X1B, 0X87 # sbbq " _(VALUE) "(%rdi), %r8")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X1B, 0X86 # sbbq " _(VALUE) "(%rsi), %r8")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X1B, 0X85 # sbbq " _(VALUE) "(%rbp), %r8")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X1B, 0X84, 0X24 # sbbq " _(VALUE) "(%rsp), %r8")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X1B, 0X80 # sbbq " _(VALUE) "(%r8), %r8")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X1B, 0X81 # sbbq " _(VALUE) "(%r9), %r8")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X1B, 0X82 # sbbq " _(VALUE) "(%r10), %r8")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X1B, 0X83 # sbbq " _(VALUE) "(%r11), %r8")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X1B, 0X84, 0X24 # sbbq " _(VALUE) "(%r12), %r8")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X1B, 0X85 # sbbq " _(VALUE) "(%r13), %r8")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X1B, 0X86 # sbbq " _(VALUE) "(%r14), %r8")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X1B, 0X87 # sbbq " _(VALUE) "(%r15), %r8")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0X80 # sbbq " _(VALUE) "(%eax), %r8")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0X83 # sbbq " _(VALUE) "(%ebx), %r8")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0X81 # sbbq " _(VALUE) "(%ecx), %r8")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0X82 # sbbq " _(VALUE) "(%edx), %r8")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0X87 # sbbq " _(VALUE) "(%edi), %r8")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0X86 # sbbq " _(VALUE) "(%esi), %r8")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0X85 # sbbq " _(VALUE) "(%ebp), %r8")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0X84, 0X24 # sbbq " _(VALUE) "(%esp), %r8")\
	CMT_ASM(".long " _(VALUE))

#define SBB_R9_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X1B, 0X88 # sbbq " _(VALUE) "(%rax), %r9")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X1B, 0X8B # sbbq " _(VALUE) "(%rbx), %r9")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X1B, 0X89 # sbbq " _(VALUE) "(%rcx), %r9")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X1B, 0X8A # sbbq " _(VALUE) "(%rdx), %r9")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X1B, 0X8F # sbbq " _(VALUE) "(%rdi), %r9")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X1B, 0X8E # sbbq " _(VALUE) "(%rsi), %r9")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X1B, 0X8D # sbbq " _(VALUE) "(%rbp), %r9")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X1B, 0X8C, 0X24 # sbbq " _(VALUE) "(%rsp), %r9")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X1B, 0X88 # sbbq " _(VALUE) "(%r8), %r9")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X1B, 0X89 # sbbq " _(VALUE) "(%r9), %r9")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X1B, 0X8A # sbbq " _(VALUE) "(%r10), %r9")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X1B, 0X8B # sbbq " _(VALUE) "(%r11), %r9")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X1B, 0X8C, 0X24 # sbbq " _(VALUE) "(%r12), %r9")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X1B, 0X8D # sbbq " _(VALUE) "(%r13), %r9")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X1B, 0X8E # sbbq " _(VALUE) "(%r14), %r9")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X1B, 0X8F # sbbq " _(VALUE) "(%r15), %r9")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0X88 # sbbq " _(VALUE) "(%eax), %r9")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0X8B # sbbq " _(VALUE) "(%ebx), %r9")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0X89 # sbbq " _(VALUE) "(%ecx), %r9")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0X8A # sbbq " _(VALUE) "(%edx), %r9")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0X8F # sbbq " _(VALUE) "(%edi), %r9")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0X8E # sbbq " _(VALUE) "(%esi), %r9")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0X8D # sbbq " _(VALUE) "(%ebp), %r9")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0X8C, 0X24 # sbbq " _(VALUE) "(%esp), %r9")\
	CMT_ASM(".long " _(VALUE))

#define SBB_R10_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X1B, 0X90 # sbbq " _(VALUE) "(%rax), %r10")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X1B, 0X93 # sbbq " _(VALUE) "(%rbx), %r10")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X1B, 0X91 # sbbq " _(VALUE) "(%rcx), %r10")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X1B, 0X92 # sbbq " _(VALUE) "(%rdx), %r10")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X1B, 0X97 # sbbq " _(VALUE) "(%rdi), %r10")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X1B, 0X96 # sbbq " _(VALUE) "(%rsi), %r10")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X1B, 0X95 # sbbq " _(VALUE) "(%rbp), %r10")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X1B, 0X94, 0X24 # sbbq " _(VALUE) "(%rsp), %r10")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X1B, 0X90 # sbbq " _(VALUE) "(%r8), %r10")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X1B, 0X91 # sbbq " _(VALUE) "(%r9), %r10")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X1B, 0X92 # sbbq " _(VALUE) "(%r10), %r10")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X1B, 0X93 # sbbq " _(VALUE) "(%r11), %r10")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X1B, 0X94, 0X24 # sbbq " _(VALUE) "(%r12), %r10")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X1B, 0X95 # sbbq " _(VALUE) "(%r13), %r10")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X1B, 0X96 # sbbq " _(VALUE) "(%r14), %r10")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X1B, 0X97 # sbbq " _(VALUE) "(%r15), %r10")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0X90 # sbbq " _(VALUE) "(%eax), %r10")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0X93 # sbbq " _(VALUE) "(%ebx), %r10")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0X91 # sbbq " _(VALUE) "(%ecx), %r10")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0X92 # sbbq " _(VALUE) "(%edx), %r10")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0X97 # sbbq " _(VALUE) "(%edi), %r10")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0X96 # sbbq " _(VALUE) "(%esi), %r10")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0X95 # sbbq " _(VALUE) "(%ebp), %r10")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0X94, 0X24 # sbbq " _(VALUE) "(%esp), %r10")\
	CMT_ASM(".long " _(VALUE))

#define SBB_R11_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X1B, 0X98 # sbbq " _(VALUE) "(%rax), %r11")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X1B, 0X9B # sbbq " _(VALUE) "(%rbx), %r11")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X1B, 0X99 # sbbq " _(VALUE) "(%rcx), %r11")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X1B, 0X9A # sbbq " _(VALUE) "(%rdx), %r11")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X1B, 0X9F # sbbq " _(VALUE) "(%rdi), %r11")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X1B, 0X9E # sbbq " _(VALUE) "(%rsi), %r11")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X1B, 0X9D # sbbq " _(VALUE) "(%rbp), %r11")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X1B, 0X9C, 0X24 # sbbq " _(VALUE) "(%rsp), %r11")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X1B, 0X98 # sbbq " _(VALUE) "(%r8), %r11")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X1B, 0X99 # sbbq " _(VALUE) "(%r9), %r11")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X1B, 0X9A # sbbq " _(VALUE) "(%r10), %r11")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X1B, 0X9B # sbbq " _(VALUE) "(%r11), %r11")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X1B, 0X9C, 0X24 # sbbq " _(VALUE) "(%r12), %r11")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X1B, 0X9D # sbbq " _(VALUE) "(%r13), %r11")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X1B, 0X9E # sbbq " _(VALUE) "(%r14), %r11")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X1B, 0X9F # sbbq " _(VALUE) "(%r15), %r11")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0X98 # sbbq " _(VALUE) "(%eax), %r11")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0X9B # sbbq " _(VALUE) "(%ebx), %r11")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0X99 # sbbq " _(VALUE) "(%ecx), %r11")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0X9A # sbbq " _(VALUE) "(%edx), %r11")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0X9F # sbbq " _(VALUE) "(%edi), %r11")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0X9E # sbbq " _(VALUE) "(%esi), %r11")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0X9D # sbbq " _(VALUE) "(%ebp), %r11")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0X9C, 0X24 # sbbq " _(VALUE) "(%esp), %r11")\
	CMT_ASM(".long " _(VALUE))

#define SBB_R12_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X1B, 0XA0 # sbbq " _(VALUE) "(%rax), %r12")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X1B, 0XA3 # sbbq " _(VALUE) "(%rbx), %r12")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X1B, 0XA1 # sbbq " _(VALUE) "(%rcx), %r12")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X1B, 0XA2 # sbbq " _(VALUE) "(%rdx), %r12")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X1B, 0XA7 # sbbq " _(VALUE) "(%rdi), %r12")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X1B, 0XA6 # sbbq " _(VALUE) "(%rsi), %r12")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X1B, 0XA5 # sbbq " _(VALUE) "(%rbp), %r12")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X1B, 0XA4, 0X24 # sbbq " _(VALUE) "(%rsp), %r12")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X1B, 0XA0 # sbbq " _(VALUE) "(%r8), %r12")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X1B, 0XA1 # sbbq " _(VALUE) "(%r9), %r12")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X1B, 0XA2 # sbbq " _(VALUE) "(%r10), %r12")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X1B, 0XA3 # sbbq " _(VALUE) "(%r11), %r12")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X1B, 0XA4, 0X24 # sbbq " _(VALUE) "(%r12), %r12")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X1B, 0XA5 # sbbq " _(VALUE) "(%r13), %r12")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X1B, 0XA6 # sbbq " _(VALUE) "(%r14), %r12")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X1B, 0XA7 # sbbq " _(VALUE) "(%r15), %r12")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0XA0 # sbbq " _(VALUE) "(%eax), %r12")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0XA3 # sbbq " _(VALUE) "(%ebx), %r12")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0XA1 # sbbq " _(VALUE) "(%ecx), %r12")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0XA2 # sbbq " _(VALUE) "(%edx), %r12")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0XA7 # sbbq " _(VALUE) "(%edi), %r12")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0XA6 # sbbq " _(VALUE) "(%esi), %r12")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0XA5 # sbbq " _(VALUE) "(%ebp), %r12")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0XA4, 0X24 # sbbq " _(VALUE) "(%esp), %r12")\
	CMT_ASM(".long " _(VALUE))

#define SBB_R13_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X1B, 0XA8 # sbbq " _(VALUE) "(%rax), %r13")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X1B, 0XAB # sbbq " _(VALUE) "(%rbx), %r13")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X1B, 0XA9 # sbbq " _(VALUE) "(%rcx), %r13")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X1B, 0XAA # sbbq " _(VALUE) "(%rdx), %r13")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X1B, 0XAF # sbbq " _(VALUE) "(%rdi), %r13")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X1B, 0XAE # sbbq " _(VALUE) "(%rsi), %r13")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X1B, 0XAD # sbbq " _(VALUE) "(%rbp), %r13")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X1B, 0XAC, 0X24 # sbbq " _(VALUE) "(%rsp), %r13")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X1B, 0XA8 # sbbq " _(VALUE) "(%r8), %r13")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X1B, 0XA9 # sbbq " _(VALUE) "(%r9), %r13")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X1B, 0XAA # sbbq " _(VALUE) "(%r10), %r13")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X1B, 0XAB # sbbq " _(VALUE) "(%r11), %r13")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X1B, 0XAC, 0X24 # sbbq " _(VALUE) "(%r12), %r13")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X1B, 0XAD # sbbq " _(VALUE) "(%r13), %r13")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X1B, 0XAE # sbbq " _(VALUE) "(%r14), %r13")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X1B, 0XAF # sbbq " _(VALUE) "(%r15), %r13")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0XA8 # sbbq " _(VALUE) "(%eax), %r13")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0XAB # sbbq " _(VALUE) "(%ebx), %r13")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0XA9 # sbbq " _(VALUE) "(%ecx), %r13")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0XAA # sbbq " _(VALUE) "(%edx), %r13")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0XAF # sbbq " _(VALUE) "(%edi), %r13")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0XAE # sbbq " _(VALUE) "(%esi), %r13")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0XAD # sbbq " _(VALUE) "(%ebp), %r13")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0XAC, 0X24 # sbbq " _(VALUE) "(%esp), %r13")\
	CMT_ASM(".long " _(VALUE))

#define SBB_R14_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X1B, 0XB0 # sbbq " _(VALUE) "(%rax), %r14")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X1B, 0XB3 # sbbq " _(VALUE) "(%rbx), %r14")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X1B, 0XB1 # sbbq " _(VALUE) "(%rcx), %r14")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X1B, 0XB2 # sbbq " _(VALUE) "(%rdx), %r14")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X1B, 0XB7 # sbbq " _(VALUE) "(%rdi), %r14")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X1B, 0XB6 # sbbq " _(VALUE) "(%rsi), %r14")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X1B, 0XB5 # sbbq " _(VALUE) "(%rbp), %r14")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X1B, 0XB4, 0X24 # sbbq " _(VALUE) "(%rsp), %r14")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X1B, 0XB0 # sbbq " _(VALUE) "(%r8), %r14")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X1B, 0XB1 # sbbq " _(VALUE) "(%r9), %r14")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X1B, 0XB2 # sbbq " _(VALUE) "(%r10), %r14")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X1B, 0XB3 # sbbq " _(VALUE) "(%r11), %r14")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X1B, 0XB4, 0X24 # sbbq " _(VALUE) "(%r12), %r14")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X1B, 0XB5 # sbbq " _(VALUE) "(%r13), %r14")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X1B, 0XB6 # sbbq " _(VALUE) "(%r14), %r14")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X1B, 0XB7 # sbbq " _(VALUE) "(%r15), %r14")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0XB0 # sbbq " _(VALUE) "(%eax), %r14")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0XB3 # sbbq " _(VALUE) "(%ebx), %r14")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0XB1 # sbbq " _(VALUE) "(%ecx), %r14")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0XB2 # sbbq " _(VALUE) "(%edx), %r14")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0XB7 # sbbq " _(VALUE) "(%edi), %r14")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0XB6 # sbbq " _(VALUE) "(%esi), %r14")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0XB5 # sbbq " _(VALUE) "(%ebp), %r14")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0XB4, 0X24 # sbbq " _(VALUE) "(%esp), %r14")\
	CMT_ASM(".long " _(VALUE))

#define SBB_R15_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X1B, 0XB8 # sbbq " _(VALUE) "(%rax), %r15")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X1B, 0XBB # sbbq " _(VALUE) "(%rbx), %r15")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X1B, 0XB9 # sbbq " _(VALUE) "(%rcx), %r15")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X1B, 0XBA # sbbq " _(VALUE) "(%rdx), %r15")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X1B, 0XBF # sbbq " _(VALUE) "(%rdi), %r15")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X1B, 0XBE # sbbq " _(VALUE) "(%rsi), %r15")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X1B, 0XBD # sbbq " _(VALUE) "(%rbp), %r15")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X1B, 0XBC, 0X24 # sbbq " _(VALUE) "(%rsp), %r15")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X1B, 0XB8 # sbbq " _(VALUE) "(%r8), %r15")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X1B, 0XB9 # sbbq " _(VALUE) "(%r9), %r15")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X1B, 0XBA # sbbq " _(VALUE) "(%r10), %r15")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X1B, 0XBB # sbbq " _(VALUE) "(%r11), %r15")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X1B, 0XBC, 0X24 # sbbq " _(VALUE) "(%r12), %r15")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X1B, 0XBD # sbbq " _(VALUE) "(%r13), %r15")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X1B, 0XBE # sbbq " _(VALUE) "(%r14), %r15")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X1B, 0XBF # sbbq " _(VALUE) "(%r15), %r15")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0XB8 # sbbq " _(VALUE) "(%eax), %r15")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0XBB # sbbq " _(VALUE) "(%ebx), %r15")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0XB9 # sbbq " _(VALUE) "(%ecx), %r15")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0XBA # sbbq " _(VALUE) "(%edx), %r15")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0XBF # sbbq " _(VALUE) "(%edi), %r15")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0XBE # sbbq " _(VALUE) "(%esi), %r15")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0XBD # sbbq " _(VALUE) "(%ebp), %r15")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X1B, 0XBC, 0X24 # sbbq " _(VALUE) "(%esp), %r15")\
	CMT_ASM(".long " _(VALUE))

#define SBB_RAX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X19, 0X80 # sbbq %rax, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RAX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X19, 0X83 # sbbq %rax, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RAX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X19, 0X81 # sbbq %rax, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RAX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X19, 0X82 # sbbq %rax, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RAX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X19, 0X87 # sbbq %rax, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RAX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X19, 0X86 # sbbq %rax, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RAX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X19, 0X85 # sbbq %rax, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RAX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X19, 0X84, 0X24 # sbbq %rax, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RAX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X19, 0X80 # sbbq %rax, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RAX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X19, 0X81 # sbbq %rax, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RAX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X19, 0X82 # sbbq %rax, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RAX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X19, 0X83 # sbbq %rax, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RAX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X19, 0X84, 0X24 # sbbq %rax, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RAX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X19, 0X85 # sbbq %rax, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RAX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X19, 0X86 # sbbq %rax, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RAX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X19, 0X87 # sbbq %rax, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RAX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X19, 0X80 # sbbq %rax, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RAX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X19, 0X83 # sbbq %rax, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RAX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X19, 0X81 # sbbq %rax, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RAX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X19, 0X82 # sbbq %rax, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RAX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X19, 0X87 # sbbq %rax, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RAX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X19, 0X86 # sbbq %rax, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RAX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X19, 0X85 # sbbq %rax, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RAX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X19, 0X84, 0X24 # sbbq %rax, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SBB_RBX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X19, 0X98 # sbbq %rbx, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RBX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X19, 0X9B # sbbq %rbx, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RBX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X19, 0X99 # sbbq %rbx, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RBX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X19, 0X9A # sbbq %rbx, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RBX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X19, 0X9F # sbbq %rbx, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RBX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X19, 0X9E # sbbq %rbx, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RBX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X19, 0X9D # sbbq %rbx, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RBX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X19, 0X9C, 0X24 # sbbq %rbx, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RBX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X19, 0X98 # sbbq %rbx, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RBX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X19, 0X99 # sbbq %rbx, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RBX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X19, 0X9A # sbbq %rbx, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RBX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X19, 0X9B # sbbq %rbx, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RBX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X19, 0X9C, 0X24 # sbbq %rbx, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RBX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X19, 0X9D # sbbq %rbx, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RBX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X19, 0X9E # sbbq %rbx, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RBX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X19, 0X9F # sbbq %rbx, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RBX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X19, 0X98 # sbbq %rbx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RBX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X19, 0X9B # sbbq %rbx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RBX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X19, 0X99 # sbbq %rbx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RBX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X19, 0X9A # sbbq %rbx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RBX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X19, 0X9F # sbbq %rbx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RBX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X19, 0X9E # sbbq %rbx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RBX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X19, 0X9D # sbbq %rbx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RBX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X19, 0X9C, 0X24 # sbbq %rbx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SBB_RCX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X19, 0X88 # sbbq %rcx, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RCX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X19, 0X8B # sbbq %rcx, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RCX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X19, 0X89 # sbbq %rcx, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RCX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X19, 0X8A # sbbq %rcx, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RCX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X19, 0X8F # sbbq %rcx, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RCX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X19, 0X8E # sbbq %rcx, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RCX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X19, 0X8D # sbbq %rcx, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RCX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X19, 0X8C, 0X24 # sbbq %rcx, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RCX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X19, 0X88 # sbbq %rcx, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RCX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X19, 0X89 # sbbq %rcx, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RCX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X19, 0X8A # sbbq %rcx, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RCX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X19, 0X8B # sbbq %rcx, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RCX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X19, 0X8C, 0X24 # sbbq %rcx, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RCX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X19, 0X8D # sbbq %rcx, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RCX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X19, 0X8E # sbbq %rcx, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RCX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X19, 0X8F # sbbq %rcx, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RCX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X19, 0X88 # sbbq %rcx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RCX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X19, 0X8B # sbbq %rcx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RCX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X19, 0X89 # sbbq %rcx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RCX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X19, 0X8A # sbbq %rcx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RCX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X19, 0X8F # sbbq %rcx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RCX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X19, 0X8E # sbbq %rcx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RCX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X19, 0X8D # sbbq %rcx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RCX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X19, 0X8C, 0X24 # sbbq %rcx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SBB_RDX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X19, 0X90 # sbbq %rdx, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RDX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X19, 0X93 # sbbq %rdx, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RDX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X19, 0X91 # sbbq %rdx, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RDX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X19, 0X92 # sbbq %rdx, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RDX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X19, 0X97 # sbbq %rdx, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RDX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X19, 0X96 # sbbq %rdx, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RDX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X19, 0X95 # sbbq %rdx, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RDX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X19, 0X94, 0X24 # sbbq %rdx, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RDX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X19, 0X90 # sbbq %rdx, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RDX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X19, 0X91 # sbbq %rdx, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RDX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X19, 0X92 # sbbq %rdx, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RDX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X19, 0X93 # sbbq %rdx, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RDX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X19, 0X94, 0X24 # sbbq %rdx, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RDX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X19, 0X95 # sbbq %rdx, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RDX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X19, 0X96 # sbbq %rdx, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RDX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X19, 0X97 # sbbq %rdx, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RDX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X19, 0X90 # sbbq %rdx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RDX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X19, 0X93 # sbbq %rdx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RDX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X19, 0X91 # sbbq %rdx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RDX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X19, 0X92 # sbbq %rdx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RDX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X19, 0X97 # sbbq %rdx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RDX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X19, 0X96 # sbbq %rdx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RDX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X19, 0X95 # sbbq %rdx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RDX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X19, 0X94, 0X24 # sbbq %rdx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SBB_RDI_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X19, 0XB8 # sbbq %rdi, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RDI_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X19, 0XBB # sbbq %rdi, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RDI_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X19, 0XB9 # sbbq %rdi, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RDI_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X19, 0XBA # sbbq %rdi, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RDI_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X19, 0XBF # sbbq %rdi, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RDI_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X19, 0XBE # sbbq %rdi, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RDI_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X19, 0XBD # sbbq %rdi, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RDI_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X19, 0XBC, 0X24 # sbbq %rdi, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RDI_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X19, 0XB8 # sbbq %rdi, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RDI_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X19, 0XB9 # sbbq %rdi, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RDI_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X19, 0XBA # sbbq %rdi, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RDI_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X19, 0XBB # sbbq %rdi, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RDI_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X19, 0XBC, 0X24 # sbbq %rdi, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RDI_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X19, 0XBD # sbbq %rdi, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RDI_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X19, 0XBE # sbbq %rdi, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RDI_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X19, 0XBF # sbbq %rdi, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RDI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X19, 0XB8 # sbbq %rdi, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RDI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X19, 0XBB # sbbq %rdi, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RDI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X19, 0XB9 # sbbq %rdi, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RDI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X19, 0XBA # sbbq %rdi, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RDI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X19, 0XBF # sbbq %rdi, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RDI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X19, 0XBE # sbbq %rdi, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RDI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X19, 0XBD # sbbq %rdi, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RDI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X19, 0XBC, 0X24 # sbbq %rdi, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SBB_RSI_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X19, 0XB0 # sbbq %rsi, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RSI_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X19, 0XB3 # sbbq %rsi, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RSI_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X19, 0XB1 # sbbq %rsi, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RSI_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X19, 0XB2 # sbbq %rsi, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RSI_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X19, 0XB7 # sbbq %rsi, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RSI_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X19, 0XB6 # sbbq %rsi, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RSI_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X19, 0XB5 # sbbq %rsi, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RSI_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X19, 0XB4, 0X24 # sbbq %rsi, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RSI_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X19, 0XB0 # sbbq %rsi, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RSI_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X19, 0XB1 # sbbq %rsi, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RSI_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X19, 0XB2 # sbbq %rsi, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RSI_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X19, 0XB3 # sbbq %rsi, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RSI_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X19, 0XB4, 0X24 # sbbq %rsi, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RSI_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X19, 0XB5 # sbbq %rsi, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RSI_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X19, 0XB6 # sbbq %rsi, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RSI_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X19, 0XB7 # sbbq %rsi, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RSI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X19, 0XB0 # sbbq %rsi, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RSI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X19, 0XB3 # sbbq %rsi, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RSI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X19, 0XB1 # sbbq %rsi, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RSI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X19, 0XB2 # sbbq %rsi, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RSI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X19, 0XB7 # sbbq %rsi, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RSI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X19, 0XB6 # sbbq %rsi, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RSI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X19, 0XB5 # sbbq %rsi, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RSI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X19, 0XB4, 0X24 # sbbq %rsi, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SBB_RBP_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X19, 0XA8 # sbbq %rbp, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RBP_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X19, 0XAB # sbbq %rbp, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RBP_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X19, 0XA9 # sbbq %rbp, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RBP_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X19, 0XAA # sbbq %rbp, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RBP_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X19, 0XAF # sbbq %rbp, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RBP_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X19, 0XAE # sbbq %rbp, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RBP_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X19, 0XAD # sbbq %rbp, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RBP_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X19, 0XAC, 0X24 # sbbq %rbp, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RBP_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X19, 0XA8 # sbbq %rbp, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RBP_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X19, 0XA9 # sbbq %rbp, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RBP_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X19, 0XAA # sbbq %rbp, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RBP_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X19, 0XAB # sbbq %rbp, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RBP_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X19, 0XAC, 0X24 # sbbq %rbp, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RBP_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X19, 0XAD # sbbq %rbp, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RBP_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X19, 0XAE # sbbq %rbp, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RBP_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X19, 0XAF # sbbq %rbp, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RBP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X19, 0XA8 # sbbq %rbp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RBP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X19, 0XAB # sbbq %rbp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RBP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X19, 0XA9 # sbbq %rbp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RBP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X19, 0XAA # sbbq %rbp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RBP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X19, 0XAF # sbbq %rbp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RBP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X19, 0XAE # sbbq %rbp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RBP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X19, 0XAD # sbbq %rbp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RBP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X19, 0XAC, 0X24 # sbbq %rbp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SBB_RSP_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X19, 0XA0 # sbbq %rsp, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RSP_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X19, 0XA3 # sbbq %rsp, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RSP_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X19, 0XA1 # sbbq %rsp, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RSP_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X19, 0XA2 # sbbq %rsp, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RSP_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X19, 0XA7 # sbbq %rsp, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RSP_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X19, 0XA6 # sbbq %rsp, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RSP_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X19, 0XA5 # sbbq %rsp, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RSP_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X19, 0XA4, 0X24 # sbbq %rsp, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RSP_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X19, 0XA0 # sbbq %rsp, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RSP_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X19, 0XA1 # sbbq %rsp, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RSP_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X19, 0XA2 # sbbq %rsp, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RSP_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X19, 0XA3 # sbbq %rsp, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RSP_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X19, 0XA4, 0X24 # sbbq %rsp, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RSP_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X19, 0XA5 # sbbq %rsp, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RSP_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X19, 0XA6 # sbbq %rsp, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RSP_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X19, 0XA7 # sbbq %rsp, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RSP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X19, 0XA0 # sbbq %rsp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RSP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X19, 0XA3 # sbbq %rsp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RSP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X19, 0XA1 # sbbq %rsp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RSP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X19, 0XA2 # sbbq %rsp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RSP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X19, 0XA7 # sbbq %rsp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RSP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X19, 0XA6 # sbbq %rsp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RSP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X19, 0XA5 # sbbq %rsp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_RSP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X19, 0XA4, 0X24 # sbbq %rsp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SBB_R8_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X19, 0X80 # sbbq %r8, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X19, 0X83 # sbbq %r8, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X19, 0X81 # sbbq %r8, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X19, 0X82 # sbbq %r8, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X19, 0X87 # sbbq %r8, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X19, 0X86 # sbbq %r8, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X19, 0X85 # sbbq %r8, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X19, 0X84, 0X24 # sbbq %r8, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X19, 0X80 # sbbq %r8, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X19, 0X81 # sbbq %r8, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X19, 0X82 # sbbq %r8, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X19, 0X83 # sbbq %r8, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X19, 0X84, 0X24 # sbbq %r8, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X19, 0X85 # sbbq %r8, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X19, 0X86 # sbbq %r8, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X19, 0X87 # sbbq %r8, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X19, 0X80 # sbbq %r8, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X19, 0X83 # sbbq %r8, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X19, 0X81 # sbbq %r8, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X19, 0X82 # sbbq %r8, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X19, 0X87 # sbbq %r8, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X19, 0X86 # sbbq %r8, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X19, 0X85 # sbbq %r8, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X19, 0X84, 0X24 # sbbq %r8, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SBB_R9_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X19, 0X88 # sbbq %r9, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X19, 0X8B # sbbq %r9, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X19, 0X89 # sbbq %r9, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X19, 0X8A # sbbq %r9, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X19, 0X8F # sbbq %r9, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X19, 0X8E # sbbq %r9, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X19, 0X8D # sbbq %r9, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X19, 0X8C, 0X24 # sbbq %r9, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X19, 0X88 # sbbq %r9, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X19, 0X89 # sbbq %r9, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X19, 0X8A # sbbq %r9, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X19, 0X8B # sbbq %r9, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X19, 0X8C, 0X24 # sbbq %r9, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X19, 0X8D # sbbq %r9, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X19, 0X8E # sbbq %r9, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X19, 0X8F # sbbq %r9, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X19, 0X88 # sbbq %r9, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X19, 0X8B # sbbq %r9, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X19, 0X89 # sbbq %r9, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X19, 0X8A # sbbq %r9, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X19, 0X8F # sbbq %r9, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X19, 0X8E # sbbq %r9, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X19, 0X8D # sbbq %r9, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X19, 0X8C, 0X24 # sbbq %r9, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SBB_R10_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X19, 0X90 # sbbq %r10, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X19, 0X93 # sbbq %r10, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X19, 0X91 # sbbq %r10, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X19, 0X92 # sbbq %r10, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X19, 0X97 # sbbq %r10, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X19, 0X96 # sbbq %r10, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X19, 0X95 # sbbq %r10, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X19, 0X94, 0X24 # sbbq %r10, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X19, 0X90 # sbbq %r10, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X19, 0X91 # sbbq %r10, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X19, 0X92 # sbbq %r10, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X19, 0X93 # sbbq %r10, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X19, 0X94, 0X24 # sbbq %r10, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X19, 0X95 # sbbq %r10, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X19, 0X96 # sbbq %r10, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X19, 0X97 # sbbq %r10, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X19, 0X90 # sbbq %r10, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X19, 0X93 # sbbq %r10, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X19, 0X91 # sbbq %r10, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X19, 0X92 # sbbq %r10, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X19, 0X97 # sbbq %r10, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X19, 0X96 # sbbq %r10, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X19, 0X95 # sbbq %r10, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X19, 0X94, 0X24 # sbbq %r10, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SBB_R11_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X19, 0X98 # sbbq %r11, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X19, 0X9B # sbbq %r11, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X19, 0X99 # sbbq %r11, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X19, 0X9A # sbbq %r11, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X19, 0X9F # sbbq %r11, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X19, 0X9E # sbbq %r11, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X19, 0X9D # sbbq %r11, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X19, 0X9C, 0X24 # sbbq %r11, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X19, 0X98 # sbbq %r11, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X19, 0X99 # sbbq %r11, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X19, 0X9A # sbbq %r11, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X19, 0X9B # sbbq %r11, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X19, 0X9C, 0X24 # sbbq %r11, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X19, 0X9D # sbbq %r11, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X19, 0X9E # sbbq %r11, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X19, 0X9F # sbbq %r11, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X19, 0X98 # sbbq %r11, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X19, 0X9B # sbbq %r11, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X19, 0X99 # sbbq %r11, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X19, 0X9A # sbbq %r11, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X19, 0X9F # sbbq %r11, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X19, 0X9E # sbbq %r11, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X19, 0X9D # sbbq %r11, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X19, 0X9C, 0X24 # sbbq %r11, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SBB_R12_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X19, 0XA0 # sbbq %r12, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X19, 0XA3 # sbbq %r12, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X19, 0XA1 # sbbq %r12, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X19, 0XA2 # sbbq %r12, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X19, 0XA7 # sbbq %r12, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X19, 0XA6 # sbbq %r12, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X19, 0XA5 # sbbq %r12, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X19, 0XA4, 0X24 # sbbq %r12, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X19, 0XA0 # sbbq %r12, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X19, 0XA1 # sbbq %r12, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X19, 0XA2 # sbbq %r12, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X19, 0XA3 # sbbq %r12, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X19, 0XA4, 0X24 # sbbq %r12, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X19, 0XA5 # sbbq %r12, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X19, 0XA6 # sbbq %r12, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X19, 0XA7 # sbbq %r12, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X19, 0XA0 # sbbq %r12, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X19, 0XA3 # sbbq %r12, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X19, 0XA1 # sbbq %r12, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X19, 0XA2 # sbbq %r12, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X19, 0XA7 # sbbq %r12, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X19, 0XA6 # sbbq %r12, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X19, 0XA5 # sbbq %r12, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X19, 0XA4, 0X24 # sbbq %r12, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SBB_R13_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X19, 0XA8 # sbbq %r13, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X19, 0XAB # sbbq %r13, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X19, 0XA9 # sbbq %r13, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X19, 0XAA # sbbq %r13, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X19, 0XAF # sbbq %r13, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X19, 0XAE # sbbq %r13, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X19, 0XAD # sbbq %r13, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X19, 0XAC, 0X24 # sbbq %r13, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X19, 0XA8 # sbbq %r13, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X19, 0XA9 # sbbq %r13, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X19, 0XAA # sbbq %r13, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X19, 0XAB # sbbq %r13, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X19, 0XAC, 0X24 # sbbq %r13, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X19, 0XAD # sbbq %r13, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X19, 0XAE # sbbq %r13, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X19, 0XAF # sbbq %r13, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X19, 0XA8 # sbbq %r13, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X19, 0XAB # sbbq %r13, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X19, 0XA9 # sbbq %r13, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X19, 0XAA # sbbq %r13, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X19, 0XAF # sbbq %r13, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X19, 0XAE # sbbq %r13, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X19, 0XAD # sbbq %r13, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X19, 0XAC, 0X24 # sbbq %r13, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SBB_R14_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X19, 0XB0 # sbbq %r14, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X19, 0XB3 # sbbq %r14, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X19, 0XB1 # sbbq %r14, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X19, 0XB2 # sbbq %r14, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X19, 0XB7 # sbbq %r14, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X19, 0XB6 # sbbq %r14, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X19, 0XB5 # sbbq %r14, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X19, 0XB4, 0X24 # sbbq %r14, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X19, 0XB0 # sbbq %r14, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X19, 0XB1 # sbbq %r14, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X19, 0XB2 # sbbq %r14, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X19, 0XB3 # sbbq %r14, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X19, 0XB4, 0X24 # sbbq %r14, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X19, 0XB5 # sbbq %r14, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X19, 0XB6 # sbbq %r14, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X19, 0XB7 # sbbq %r14, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X19, 0XB0 # sbbq %r14, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X19, 0XB3 # sbbq %r14, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X19, 0XB1 # sbbq %r14, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X19, 0XB2 # sbbq %r14, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X19, 0XB7 # sbbq %r14, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X19, 0XB6 # sbbq %r14, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X19, 0XB5 # sbbq %r14, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X19, 0XB4, 0X24 # sbbq %r14, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SBB_R15_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X19, 0XB8 # sbbq %r15, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X19, 0XBB # sbbq %r15, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X19, 0XB9 # sbbq %r15, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X19, 0XBA # sbbq %r15, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X19, 0XBF # sbbq %r15, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X19, 0XBE # sbbq %r15, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X19, 0XBD # sbbq %r15, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X19, 0XBC, 0X24 # sbbq %r15, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X19, 0XB8 # sbbq %r15, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X19, 0XB9 # sbbq %r15, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X19, 0XBA # sbbq %r15, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X19, 0XBB # sbbq %r15, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X19, 0XBC, 0X24 # sbbq %r15, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X19, 0XBD # sbbq %r15, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X19, 0XBE # sbbq %r15, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X19, 0XBF # sbbq %r15, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X19, 0XB8 # sbbq %r15, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X19, 0XBB # sbbq %r15, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X19, 0XB9 # sbbq %r15, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X19, 0XBA # sbbq %r15, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X19, 0XBF # sbbq %r15, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X19, 0XBE # sbbq %r15, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X19, 0XBD # sbbq %r15, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X19, 0XBC, 0X24 # sbbq %r15, " _(VALUE) "(%esp)")\
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
