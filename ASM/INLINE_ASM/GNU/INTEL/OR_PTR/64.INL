#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************* [v] 64-BIT MEMORY [v] ************************** */
#define OR_RAX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X0B, 0X04, 0X25 # orq (" _(VALUE) "), %rax")\
	CMT_ASM(".long " _(VALUE))
#define OR_RBX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X0B, 0X1C, 0X25 # orq (" _(VALUE) "), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define OR_RCX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X0B, 0X0C, 0X25 # orq (" _(VALUE) "), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define OR_RDX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X0B, 0X14, 0X25 # orq (" _(VALUE) "), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define OR_RDI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X0B, 0X3C, 0X25 # orq (" _(VALUE) "), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define OR_RSI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X0B, 0X34, 0X25 # orq (" _(VALUE) "), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define OR_RBP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X0B, 0X2C, 0X25 # orq (" _(VALUE) "), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define OR_RSP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X0B, 0X24, 0X25 # orq (" _(VALUE) "), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X0B, 0X04, 0X25 # orq (" _(VALUE) "), %r8")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X0B, 0X0C, 0X25 # orq (" _(VALUE) "), %r9")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X0B, 0X14, 0X25 # orq (" _(VALUE) "), %r10")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X0B, 0X1C, 0X25 # orq (" _(VALUE) "), %r11")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X0B, 0X24, 0X25 # orq (" _(VALUE) "), %r12")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X0B, 0X2C, 0X25 # orq (" _(VALUE) "), %r13")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X0B, 0X34, 0X25 # orq (" _(VALUE) "), %r14")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X0B, 0X3C, 0X25 # orq (" _(VALUE) "), %r15")\
	CMT_ASM(".long " _(VALUE))

#define OR_RAX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X09, 0X04, 0X25 # orq %rax, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define OR_RBX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X09, 0X1C, 0X25 # orq %rbx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define OR_RCX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X09, 0X0C, 0X25 # orq %rcx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define OR_RDX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X09, 0X14, 0X25 # orq %rdx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define OR_RDI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X09, 0X3C, 0X25 # orq %rdi, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define OR_RSI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X09, 0X34, 0X25 # orq %rsi, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define OR_RBP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X09, 0X2C, 0X25 # orq %rbp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define OR_RSP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X09, 0X24, 0X25 # orq %rsp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X09, 0X04, 0X25 # orq %r8, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X09, 0X0C, 0X25 # orq %r9, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X09, 0X14, 0X25 # orq %r10, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X09, 0X1C, 0X25 # orq %r11, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X09, 0X24, 0X25 # orq %r12, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X09, 0X2C, 0X25 # orq %r13, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X09, 0X34, 0X25 # orq %r14, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X09, 0X3C, 0X25 # orq %r15, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))

#define OR_RAX_FROM_PTR_RAX CMT_ASM(".byte 0X48, 0X0B, 0X00 # orq (%rax), %rax")
#define OR_RAX_FROM_PTR_RBX CMT_ASM(".byte 0X48, 0X0B, 0X03 # orq (%rbx), %rax")
#define OR_RAX_FROM_PTR_RCX CMT_ASM(".byte 0X48, 0X0B, 0X01 # orq (%rcx), %rax")
#define OR_RAX_FROM_PTR_RDX CMT_ASM(".byte 0X48, 0X0B, 0X02 # orq (%rdx), %rax")
#define OR_RAX_FROM_PTR_RDI CMT_ASM(".byte 0X48, 0X0B, 0X07 # orq (%rdi), %rax")
#define OR_RAX_FROM_PTR_RSI CMT_ASM(".byte 0X48, 0X0B, 0X06 # orq (%rsi), %rax")
#define OR_RAX_FROM_PTR_RBP CMT_ASM(".byte 0X48, 0X0B, 0X45, 0X00 # orq (%rbp), %rax")
#define OR_RAX_FROM_PTR_RSP CMT_ASM(".byte 0X48, 0X0B, 0X04, 0X24 # orq (%rsp), %rax")
#define OR_RAX_FROM_PTR_R8 CMT_ASM(".byte 0X49, 0X0B, 0X00 # orq (%r8), %rax")
#define OR_RAX_FROM_PTR_R9 CMT_ASM(".byte 0X49, 0X0B, 0X01 # orq (%r9), %rax")
#define OR_RAX_FROM_PTR_R10 CMT_ASM(".byte 0X49, 0X0B, 0X02 # orq (%r10), %rax")
#define OR_RAX_FROM_PTR_R11 CMT_ASM(".byte 0X49, 0X0B, 0X03 # orq (%r11), %rax")
#define OR_RAX_FROM_PTR_R12 CMT_ASM(".byte 0X49, 0X0B, 0X04, 0X24 # orq (%r12), %rax")
#define OR_RAX_FROM_PTR_R13 CMT_ASM(".byte 0X49, 0X0B, 0X45, 0X00 # orq (%r13), %rax")
#define OR_RAX_FROM_PTR_R14 CMT_ASM(".byte 0X49, 0X0B, 0X06 # orq (%r14), %rax")
#define OR_RAX_FROM_PTR_R15 CMT_ASM(".byte 0X49, 0X0B, 0X07 # orq (%r15), %rax")
#define OR_RAX_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X0B, 0X00 # orq (%eax), %rax")
#define OR_RAX_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X0B, 0X03 # orq (%ebx), %rax")
#define OR_RAX_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X0B, 0X01 # orq (%ecx), %rax")
#define OR_RAX_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X0B, 0X02 # orq (%edx), %rax")
#define OR_RAX_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X0B, 0X07 # orq (%edi), %rax")
#define OR_RAX_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X0B, 0X06 # orq (%esi), %rax")
#define OR_RAX_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X0B, 0X45, 0X00 # orq (%ebp), %rax")
#define OR_RAX_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X0B, 0X04, 0X24 # orq (%esp), %rax")

#define OR_RBX_FROM_PTR_RAX CMT_ASM(".byte 0X48, 0X0B, 0X18 # orq (%rax), %rbx")
#define OR_RBX_FROM_PTR_RBX CMT_ASM(".byte 0X48, 0X0B, 0X1B # orq (%rbx), %rbx")
#define OR_RBX_FROM_PTR_RCX CMT_ASM(".byte 0X48, 0X0B, 0X19 # orq (%rcx), %rbx")
#define OR_RBX_FROM_PTR_RDX CMT_ASM(".byte 0X48, 0X0B, 0X1A # orq (%rdx), %rbx")
#define OR_RBX_FROM_PTR_RDI CMT_ASM(".byte 0X48, 0X0B, 0X1F # orq (%rdi), %rbx")
#define OR_RBX_FROM_PTR_RSI CMT_ASM(".byte 0X48, 0X0B, 0X1E # orq (%rsi), %rbx")
#define OR_RBX_FROM_PTR_RBP CMT_ASM(".byte 0X48, 0X0B, 0X5D, 0X00 # orq (%rbp), %rbx")
#define OR_RBX_FROM_PTR_RSP CMT_ASM(".byte 0X48, 0X0B, 0X1C, 0X24 # orq (%rsp), %rbx")
#define OR_RBX_FROM_PTR_R8 CMT_ASM(".byte 0X49, 0X0B, 0X18 # orq (%r8), %rbx")
#define OR_RBX_FROM_PTR_R9 CMT_ASM(".byte 0X49, 0X0B, 0X19 # orq (%r9), %rbx")
#define OR_RBX_FROM_PTR_R10 CMT_ASM(".byte 0X49, 0X0B, 0X1A # orq (%r10), %rbx")
#define OR_RBX_FROM_PTR_R11 CMT_ASM(".byte 0X49, 0X0B, 0X1B # orq (%r11), %rbx")
#define OR_RBX_FROM_PTR_R12 CMT_ASM(".byte 0X49, 0X0B, 0X1C, 0X24 # orq (%r12), %rbx")
#define OR_RBX_FROM_PTR_R13 CMT_ASM(".byte 0X49, 0X0B, 0X5D, 0X00 # orq (%r13), %rbx")
#define OR_RBX_FROM_PTR_R14 CMT_ASM(".byte 0X49, 0X0B, 0X1E # orq (%r14), %rbx")
#define OR_RBX_FROM_PTR_R15 CMT_ASM(".byte 0X49, 0X0B, 0X1F # orq (%r15), %rbx")
#define OR_RBX_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X0B, 0X18 # orq (%eax), %rbx")
#define OR_RBX_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X0B, 0X1B # orq (%ebx), %rbx")
#define OR_RBX_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X0B, 0X19 # orq (%ecx), %rbx")
#define OR_RBX_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X0B, 0X1A # orq (%edx), %rbx")
#define OR_RBX_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X0B, 0X1F # orq (%edi), %rbx")
#define OR_RBX_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X0B, 0X1E # orq (%esi), %rbx")
#define OR_RBX_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X0B, 0X5D, 0X00 # orq (%ebp), %rbx")
#define OR_RBX_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X0B, 0X1C, 0X24 # orq (%esp), %rbx")

#define OR_RCX_FROM_PTR_RAX CMT_ASM(".byte 0X48, 0X0B, 0X08 # orq (%rax), %rcx")
#define OR_RCX_FROM_PTR_RBX CMT_ASM(".byte 0X48, 0X0B, 0X0B # orq (%rbx), %rcx")
#define OR_RCX_FROM_PTR_RCX CMT_ASM(".byte 0X48, 0X0B, 0X09 # orq (%rcx), %rcx")
#define OR_RCX_FROM_PTR_RDX CMT_ASM(".byte 0X48, 0X0B, 0X0A # orq (%rdx), %rcx")
#define OR_RCX_FROM_PTR_RDI CMT_ASM(".byte 0X48, 0X0B, 0X0F # orq (%rdi), %rcx")
#define OR_RCX_FROM_PTR_RSI CMT_ASM(".byte 0X48, 0X0B, 0X0E # orq (%rsi), %rcx")
#define OR_RCX_FROM_PTR_RBP CMT_ASM(".byte 0X48, 0X0B, 0X4D, 0X00 # orq (%rbp), %rcx")
#define OR_RCX_FROM_PTR_RSP CMT_ASM(".byte 0X48, 0X0B, 0X0C, 0X24 # orq (%rsp), %rcx")
#define OR_RCX_FROM_PTR_R8 CMT_ASM(".byte 0X49, 0X0B, 0X08 # orq (%r8), %rcx")
#define OR_RCX_FROM_PTR_R9 CMT_ASM(".byte 0X49, 0X0B, 0X09 # orq (%r9), %rcx")
#define OR_RCX_FROM_PTR_R10 CMT_ASM(".byte 0X49, 0X0B, 0X0A # orq (%r10), %rcx")
#define OR_RCX_FROM_PTR_R11 CMT_ASM(".byte 0X49, 0X0B, 0X0B # orq (%r11), %rcx")
#define OR_RCX_FROM_PTR_R12 CMT_ASM(".byte 0X49, 0X0B, 0X0C, 0X24 # orq (%r12), %rcx")
#define OR_RCX_FROM_PTR_R13 CMT_ASM(".byte 0X49, 0X0B, 0X4D, 0X00 # orq (%r13), %rcx")
#define OR_RCX_FROM_PTR_R14 CMT_ASM(".byte 0X49, 0X0B, 0X0E # orq (%r14), %rcx")
#define OR_RCX_FROM_PTR_R15 CMT_ASM(".byte 0X49, 0X0B, 0X0F # orq (%r15), %rcx")
#define OR_RCX_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X0B, 0X08 # orq (%eax), %rcx")
#define OR_RCX_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X0B, 0X0B # orq (%ebx), %rcx")
#define OR_RCX_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X0B, 0X09 # orq (%ecx), %rcx")
#define OR_RCX_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X0B, 0X0A # orq (%edx), %rcx")
#define OR_RCX_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X0B, 0X0F # orq (%edi), %rcx")
#define OR_RCX_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X0B, 0X0E # orq (%esi), %rcx")
#define OR_RCX_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X0B, 0X4D, 0X00 # orq (%ebp), %rcx")
#define OR_RCX_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X0B, 0X0C, 0X24 # orq (%esp), %rcx")

#define OR_RDX_FROM_PTR_RAX CMT_ASM(".byte 0X48, 0X0B, 0X10 # orq (%rax), %rdx")
#define OR_RDX_FROM_PTR_RBX CMT_ASM(".byte 0X48, 0X0B, 0X13 # orq (%rbx), %rdx")
#define OR_RDX_FROM_PTR_RCX CMT_ASM(".byte 0X48, 0X0B, 0X11 # orq (%rcx), %rdx")
#define OR_RDX_FROM_PTR_RDX CMT_ASM(".byte 0X48, 0X0B, 0X12 # orq (%rdx), %rdx")
#define OR_RDX_FROM_PTR_RDI CMT_ASM(".byte 0X48, 0X0B, 0X17 # orq (%rdi), %rdx")
#define OR_RDX_FROM_PTR_RSI CMT_ASM(".byte 0X48, 0X0B, 0X16 # orq (%rsi), %rdx")
#define OR_RDX_FROM_PTR_RBP CMT_ASM(".byte 0X48, 0X0B, 0X55, 0X00 # orq (%rbp), %rdx")
#define OR_RDX_FROM_PTR_RSP CMT_ASM(".byte 0X48, 0X0B, 0X14, 0X24 # orq (%rsp), %rdx")
#define OR_RDX_FROM_PTR_R8 CMT_ASM(".byte 0X49, 0X0B, 0X10 # orq (%r8), %rdx")
#define OR_RDX_FROM_PTR_R9 CMT_ASM(".byte 0X49, 0X0B, 0X11 # orq (%r9), %rdx")
#define OR_RDX_FROM_PTR_R10 CMT_ASM(".byte 0X49, 0X0B, 0X12 # orq (%r10), %rdx")
#define OR_RDX_FROM_PTR_R11 CMT_ASM(".byte 0X49, 0X0B, 0X13 # orq (%r11), %rdx")
#define OR_RDX_FROM_PTR_R12 CMT_ASM(".byte 0X49, 0X0B, 0X14, 0X24 # orq (%r12), %rdx")
#define OR_RDX_FROM_PTR_R13 CMT_ASM(".byte 0X49, 0X0B, 0X55, 0X00 # orq (%r13), %rdx")
#define OR_RDX_FROM_PTR_R14 CMT_ASM(".byte 0X49, 0X0B, 0X16 # orq (%r14), %rdx")
#define OR_RDX_FROM_PTR_R15 CMT_ASM(".byte 0X49, 0X0B, 0X17 # orq (%r15), %rdx")
#define OR_RDX_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X0B, 0X10 # orq (%eax), %rdx")
#define OR_RDX_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X0B, 0X13 # orq (%ebx), %rdx")
#define OR_RDX_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X0B, 0X11 # orq (%ecx), %rdx")
#define OR_RDX_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X0B, 0X12 # orq (%edx), %rdx")
#define OR_RDX_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X0B, 0X17 # orq (%edi), %rdx")
#define OR_RDX_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X0B, 0X16 # orq (%esi), %rdx")
#define OR_RDX_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X0B, 0X55, 0X00 # orq (%ebp), %rdx")
#define OR_RDX_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X0B, 0X14, 0X24 # orq (%esp), %rdx")

#define OR_RDI_FROM_PTR_RAX CMT_ASM(".byte 0X48, 0X0B, 0X38 # orq (%rax), %rdi")
#define OR_RDI_FROM_PTR_RBX CMT_ASM(".byte 0X48, 0X0B, 0X3B # orq (%rbx), %rdi")
#define OR_RDI_FROM_PTR_RCX CMT_ASM(".byte 0X48, 0X0B, 0X39 # orq (%rcx), %rdi")
#define OR_RDI_FROM_PTR_RDX CMT_ASM(".byte 0X48, 0X0B, 0X3A # orq (%rdx), %rdi")
#define OR_RDI_FROM_PTR_RDI CMT_ASM(".byte 0X48, 0X0B, 0X3F # orq (%rdi), %rdi")
#define OR_RDI_FROM_PTR_RSI CMT_ASM(".byte 0X48, 0X0B, 0X3E # orq (%rsi), %rdi")
#define OR_RDI_FROM_PTR_RBP CMT_ASM(".byte 0X48, 0X0B, 0X7D, 0X00 # orq (%rbp), %rdi")
#define OR_RDI_FROM_PTR_RSP CMT_ASM(".byte 0X48, 0X0B, 0X3C, 0X24 # orq (%rsp), %rdi")
#define OR_RDI_FROM_PTR_R8 CMT_ASM(".byte 0X49, 0X0B, 0X38 # orq (%r8), %rdi")
#define OR_RDI_FROM_PTR_R9 CMT_ASM(".byte 0X49, 0X0B, 0X39 # orq (%r9), %rdi")
#define OR_RDI_FROM_PTR_R10 CMT_ASM(".byte 0X49, 0X0B, 0X3A # orq (%r10), %rdi")
#define OR_RDI_FROM_PTR_R11 CMT_ASM(".byte 0X49, 0X0B, 0X3B # orq (%r11), %rdi")
#define OR_RDI_FROM_PTR_R12 CMT_ASM(".byte 0X49, 0X0B, 0X3C, 0X24 # orq (%r12), %rdi")
#define OR_RDI_FROM_PTR_R13 CMT_ASM(".byte 0X49, 0X0B, 0X7D, 0X00 # orq (%r13), %rdi")
#define OR_RDI_FROM_PTR_R14 CMT_ASM(".byte 0X49, 0X0B, 0X3E # orq (%r14), %rdi")
#define OR_RDI_FROM_PTR_R15 CMT_ASM(".byte 0X49, 0X0B, 0X3F # orq (%r15), %rdi")
#define OR_RDI_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X0B, 0X38 # orq (%eax), %rdi")
#define OR_RDI_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X0B, 0X3B # orq (%ebx), %rdi")
#define OR_RDI_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X0B, 0X39 # orq (%ecx), %rdi")
#define OR_RDI_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X0B, 0X3A # orq (%edx), %rdi")
#define OR_RDI_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X0B, 0X3F # orq (%edi), %rdi")
#define OR_RDI_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X0B, 0X3E # orq (%esi), %rdi")
#define OR_RDI_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X0B, 0X7D, 0X00 # orq (%ebp), %rdi")
#define OR_RDI_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X0B, 0X3C, 0X24 # orq (%esp), %rdi")

#define OR_RSI_FROM_PTR_RAX CMT_ASM(".byte 0X48, 0X0B, 0X30 # orq (%rax), %rsi")
#define OR_RSI_FROM_PTR_RBX CMT_ASM(".byte 0X48, 0X0B, 0X33 # orq (%rbx), %rsi")
#define OR_RSI_FROM_PTR_RCX CMT_ASM(".byte 0X48, 0X0B, 0X31 # orq (%rcx), %rsi")
#define OR_RSI_FROM_PTR_RDX CMT_ASM(".byte 0X48, 0X0B, 0X32 # orq (%rdx), %rsi")
#define OR_RSI_FROM_PTR_RDI CMT_ASM(".byte 0X48, 0X0B, 0X37 # orq (%rdi), %rsi")
#define OR_RSI_FROM_PTR_RSI CMT_ASM(".byte 0X48, 0X0B, 0X36 # orq (%rsi), %rsi")
#define OR_RSI_FROM_PTR_RBP CMT_ASM(".byte 0X48, 0X0B, 0X75, 0X00 # orq (%rbp), %rsi")
#define OR_RSI_FROM_PTR_RSP CMT_ASM(".byte 0X48, 0X0B, 0X34, 0X24 # orq (%rsp), %rsi")
#define OR_RSI_FROM_PTR_R8 CMT_ASM(".byte 0X49, 0X0B, 0X30 # orq (%r8), %rsi")
#define OR_RSI_FROM_PTR_R9 CMT_ASM(".byte 0X49, 0X0B, 0X31 # orq (%r9), %rsi")
#define OR_RSI_FROM_PTR_R10 CMT_ASM(".byte 0X49, 0X0B, 0X32 # orq (%r10), %rsi")
#define OR_RSI_FROM_PTR_R11 CMT_ASM(".byte 0X49, 0X0B, 0X33 # orq (%r11), %rsi")
#define OR_RSI_FROM_PTR_R12 CMT_ASM(".byte 0X49, 0X0B, 0X34, 0X24 # orq (%r12), %rsi")
#define OR_RSI_FROM_PTR_R13 CMT_ASM(".byte 0X49, 0X0B, 0X75, 0X00 # orq (%r13), %rsi")
#define OR_RSI_FROM_PTR_R14 CMT_ASM(".byte 0X49, 0X0B, 0X36 # orq (%r14), %rsi")
#define OR_RSI_FROM_PTR_R15 CMT_ASM(".byte 0X49, 0X0B, 0X37 # orq (%r15), %rsi")
#define OR_RSI_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X0B, 0X30 # orq (%eax), %rsi")
#define OR_RSI_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X0B, 0X33 # orq (%ebx), %rsi")
#define OR_RSI_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X0B, 0X31 # orq (%ecx), %rsi")
#define OR_RSI_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X0B, 0X32 # orq (%edx), %rsi")
#define OR_RSI_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X0B, 0X37 # orq (%edi), %rsi")
#define OR_RSI_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X0B, 0X36 # orq (%esi), %rsi")
#define OR_RSI_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X0B, 0X75, 0X00 # orq (%ebp), %rsi")
#define OR_RSI_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X0B, 0X34, 0X24 # orq (%esp), %rsi")

#define OR_RBP_FROM_PTR_RAX CMT_ASM(".byte 0X48, 0X0B, 0X28 # orq (%rax), %rbp")
#define OR_RBP_FROM_PTR_RBX CMT_ASM(".byte 0X48, 0X0B, 0X2B # orq (%rbx), %rbp")
#define OR_RBP_FROM_PTR_RCX CMT_ASM(".byte 0X48, 0X0B, 0X29 # orq (%rcx), %rbp")
#define OR_RBP_FROM_PTR_RDX CMT_ASM(".byte 0X48, 0X0B, 0X2A # orq (%rdx), %rbp")
#define OR_RBP_FROM_PTR_RDI CMT_ASM(".byte 0X48, 0X0B, 0X2F # orq (%rdi), %rbp")
#define OR_RBP_FROM_PTR_RSI CMT_ASM(".byte 0X48, 0X0B, 0X2E # orq (%rsi), %rbp")
#define OR_RBP_FROM_PTR_RBP CMT_ASM(".byte 0X48, 0X0B, 0X6D, 0X00 # orq (%rbp), %rbp")
#define OR_RBP_FROM_PTR_RSP CMT_ASM(".byte 0X48, 0X0B, 0X2C, 0X24 # orq (%rsp), %rbp")
#define OR_RBP_FROM_PTR_R8 CMT_ASM(".byte 0X49, 0X0B, 0X28 # orq (%r8), %rbp")
#define OR_RBP_FROM_PTR_R9 CMT_ASM(".byte 0X49, 0X0B, 0X29 # orq (%r9), %rbp")
#define OR_RBP_FROM_PTR_R10 CMT_ASM(".byte 0X49, 0X0B, 0X2A # orq (%r10), %rbp")
#define OR_RBP_FROM_PTR_R11 CMT_ASM(".byte 0X49, 0X0B, 0X2B # orq (%r11), %rbp")
#define OR_RBP_FROM_PTR_R12 CMT_ASM(".byte 0X49, 0X0B, 0X2C, 0X24 # orq (%r12), %rbp")
#define OR_RBP_FROM_PTR_R13 CMT_ASM(".byte 0X49, 0X0B, 0X6D, 0X00 # orq (%r13), %rbp")
#define OR_RBP_FROM_PTR_R14 CMT_ASM(".byte 0X49, 0X0B, 0X2E # orq (%r14), %rbp")
#define OR_RBP_FROM_PTR_R15 CMT_ASM(".byte 0X49, 0X0B, 0X2F # orq (%r15), %rbp")
#define OR_RBP_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X0B, 0X28 # orq (%eax), %rbp")
#define OR_RBP_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X0B, 0X2B # orq (%ebx), %rbp")
#define OR_RBP_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X0B, 0X29 # orq (%ecx), %rbp")
#define OR_RBP_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X0B, 0X2A # orq (%edx), %rbp")
#define OR_RBP_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X0B, 0X2F # orq (%edi), %rbp")
#define OR_RBP_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X0B, 0X2E # orq (%esi), %rbp")
#define OR_RBP_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X0B, 0X6D, 0X00 # orq (%ebp), %rbp")
#define OR_RBP_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X0B, 0X2C, 0X24 # orq (%esp), %rbp")

#define OR_RSP_FROM_PTR_RAX CMT_ASM(".byte 0X48, 0X0B, 0X20 # orq (%rax), %rsp")
#define OR_RSP_FROM_PTR_RBX CMT_ASM(".byte 0X48, 0X0B, 0X23 # orq (%rbx), %rsp")
#define OR_RSP_FROM_PTR_RCX CMT_ASM(".byte 0X48, 0X0B, 0X21 # orq (%rcx), %rsp")
#define OR_RSP_FROM_PTR_RDX CMT_ASM(".byte 0X48, 0X0B, 0X22 # orq (%rdx), %rsp")
#define OR_RSP_FROM_PTR_RDI CMT_ASM(".byte 0X48, 0X0B, 0X27 # orq (%rdi), %rsp")
#define OR_RSP_FROM_PTR_RSI CMT_ASM(".byte 0X48, 0X0B, 0X26 # orq (%rsi), %rsp")
#define OR_RSP_FROM_PTR_RBP CMT_ASM(".byte 0X48, 0X0B, 0X65, 0X00 # orq (%rbp), %rsp")
#define OR_RSP_FROM_PTR_RSP CMT_ASM(".byte 0X48, 0X0B, 0X24, 0X24 # orq (%rsp), %rsp")
#define OR_RSP_FROM_PTR_R8 CMT_ASM(".byte 0X49, 0X0B, 0X20 # orq (%r8), %rsp")
#define OR_RSP_FROM_PTR_R9 CMT_ASM(".byte 0X49, 0X0B, 0X21 # orq (%r9), %rsp")
#define OR_RSP_FROM_PTR_R10 CMT_ASM(".byte 0X49, 0X0B, 0X22 # orq (%r10), %rsp")
#define OR_RSP_FROM_PTR_R11 CMT_ASM(".byte 0X49, 0X0B, 0X23 # orq (%r11), %rsp")
#define OR_RSP_FROM_PTR_R12 CMT_ASM(".byte 0X49, 0X0B, 0X24, 0X24 # orq (%r12), %rsp")
#define OR_RSP_FROM_PTR_R13 CMT_ASM(".byte 0X49, 0X0B, 0X65, 0X00 # orq (%r13), %rsp")
#define OR_RSP_FROM_PTR_R14 CMT_ASM(".byte 0X49, 0X0B, 0X26 # orq (%r14), %rsp")
#define OR_RSP_FROM_PTR_R15 CMT_ASM(".byte 0X49, 0X0B, 0X27 # orq (%r15), %rsp")
#define OR_RSP_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X0B, 0X20 # orq (%eax), %rsp")
#define OR_RSP_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X0B, 0X23 # orq (%ebx), %rsp")
#define OR_RSP_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X0B, 0X21 # orq (%ecx), %rsp")
#define OR_RSP_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X0B, 0X22 # orq (%edx), %rsp")
#define OR_RSP_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X0B, 0X27 # orq (%edi), %rsp")
#define OR_RSP_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X0B, 0X26 # orq (%esi), %rsp")
#define OR_RSP_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X0B, 0X65, 0X00 # orq (%ebp), %rsp")
#define OR_RSP_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X0B, 0X24, 0X24 # orq (%esp), %rsp")

#define OR_R8_FROM_PTR_RAX CMT_ASM(".byte 0X4C, 0X0B, 0X00 # orq (%rax), %r8")
#define OR_R8_FROM_PTR_RBX CMT_ASM(".byte 0X4C, 0X0B, 0X03 # orq (%rbx), %r8")
#define OR_R8_FROM_PTR_RCX CMT_ASM(".byte 0X4C, 0X0B, 0X01 # orq (%rcx), %r8")
#define OR_R8_FROM_PTR_RDX CMT_ASM(".byte 0X4C, 0X0B, 0X02 # orq (%rdx), %r8")
#define OR_R8_FROM_PTR_RDI CMT_ASM(".byte 0X4C, 0X0B, 0X07 # orq (%rdi), %r8")
#define OR_R8_FROM_PTR_RSI CMT_ASM(".byte 0X4C, 0X0B, 0X06 # orq (%rsi), %r8")
#define OR_R8_FROM_PTR_RBP CMT_ASM(".byte 0X4C, 0X0B, 0X45, 0X00 # orq (%rbp), %r8")
#define OR_R8_FROM_PTR_RSP CMT_ASM(".byte 0X4C, 0X0B, 0X04, 0X24 # orq (%rsp), %r8")
#define OR_R8_FROM_PTR_R8 CMT_ASM(".byte 0X4D, 0X0B, 0X00 # orq (%r8), %r8")
#define OR_R8_FROM_PTR_R9 CMT_ASM(".byte 0X4D, 0X0B, 0X01 # orq (%r9), %r8")
#define OR_R8_FROM_PTR_R10 CMT_ASM(".byte 0X4D, 0X0B, 0X02 # orq (%r10), %r8")
#define OR_R8_FROM_PTR_R11 CMT_ASM(".byte 0X4D, 0X0B, 0X03 # orq (%r11), %r8")
#define OR_R8_FROM_PTR_R12 CMT_ASM(".byte 0X4D, 0X0B, 0X04, 0X24 # orq (%r12), %r8")
#define OR_R8_FROM_PTR_R13 CMT_ASM(".byte 0X4D, 0X0B, 0X45, 0X00 # orq (%r13), %r8")
#define OR_R8_FROM_PTR_R14 CMT_ASM(".byte 0X4D, 0X0B, 0X06 # orq (%r14), %r8")
#define OR_R8_FROM_PTR_R15 CMT_ASM(".byte 0X4D, 0X0B, 0X07 # orq (%r15), %r8")
#define OR_R8_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0X00 # orq (%eax), %r8")
#define OR_R8_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0X03 # orq (%ebx), %r8")
#define OR_R8_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0X01 # orq (%ecx), %r8")
#define OR_R8_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0X02 # orq (%edx), %r8")
#define OR_R8_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0X07 # orq (%edi), %r8")
#define OR_R8_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0X06 # orq (%esi), %r8")
#define OR_R8_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0X45, 0X00 # orq (%ebp), %r8")
#define OR_R8_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0X04, 0X24 # orq (%esp), %r8")

#define OR_R9_FROM_PTR_RAX CMT_ASM(".byte 0X4C, 0X0B, 0X08 # orq (%rax), %r9")
#define OR_R9_FROM_PTR_RBX CMT_ASM(".byte 0X4C, 0X0B, 0X0B # orq (%rbx), %r9")
#define OR_R9_FROM_PTR_RCX CMT_ASM(".byte 0X4C, 0X0B, 0X09 # orq (%rcx), %r9")
#define OR_R9_FROM_PTR_RDX CMT_ASM(".byte 0X4C, 0X0B, 0X0A # orq (%rdx), %r9")
#define OR_R9_FROM_PTR_RDI CMT_ASM(".byte 0X4C, 0X0B, 0X0F # orq (%rdi), %r9")
#define OR_R9_FROM_PTR_RSI CMT_ASM(".byte 0X4C, 0X0B, 0X0E # orq (%rsi), %r9")
#define OR_R9_FROM_PTR_RBP CMT_ASM(".byte 0X4C, 0X0B, 0X4D, 0X00 # orq (%rbp), %r9")
#define OR_R9_FROM_PTR_RSP CMT_ASM(".byte 0X4C, 0X0B, 0X0C, 0X24 # orq (%rsp), %r9")
#define OR_R9_FROM_PTR_R8 CMT_ASM(".byte 0X4D, 0X0B, 0X08 # orq (%r8), %r9")
#define OR_R9_FROM_PTR_R9 CMT_ASM(".byte 0X4D, 0X0B, 0X09 # orq (%r9), %r9")
#define OR_R9_FROM_PTR_R10 CMT_ASM(".byte 0X4D, 0X0B, 0X0A # orq (%r10), %r9")
#define OR_R9_FROM_PTR_R11 CMT_ASM(".byte 0X4D, 0X0B, 0X0B # orq (%r11), %r9")
#define OR_R9_FROM_PTR_R12 CMT_ASM(".byte 0X4D, 0X0B, 0X0C, 0X24 # orq (%r12), %r9")
#define OR_R9_FROM_PTR_R13 CMT_ASM(".byte 0X4D, 0X0B, 0X4D, 0X00 # orq (%r13), %r9")
#define OR_R9_FROM_PTR_R14 CMT_ASM(".byte 0X4D, 0X0B, 0X0E # orq (%r14), %r9")
#define OR_R9_FROM_PTR_R15 CMT_ASM(".byte 0X4D, 0X0B, 0X0F # orq (%r15), %r9")
#define OR_R9_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0X08 # orq (%eax), %r9")
#define OR_R9_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0X0B # orq (%ebx), %r9")
#define OR_R9_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0X09 # orq (%ecx), %r9")
#define OR_R9_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0X0A # orq (%edx), %r9")
#define OR_R9_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0X0F # orq (%edi), %r9")
#define OR_R9_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0X0E # orq (%esi), %r9")
#define OR_R9_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0X4D, 0X00 # orq (%ebp), %r9")
#define OR_R9_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0X0C, 0X24 # orq (%esp), %r9")

#define OR_R10_FROM_PTR_RAX CMT_ASM(".byte 0X4C, 0X0B, 0X10 # orq (%rax), %r10")
#define OR_R10_FROM_PTR_RBX CMT_ASM(".byte 0X4C, 0X0B, 0X13 # orq (%rbx), %r10")
#define OR_R10_FROM_PTR_RCX CMT_ASM(".byte 0X4C, 0X0B, 0X11 # orq (%rcx), %r10")
#define OR_R10_FROM_PTR_RDX CMT_ASM(".byte 0X4C, 0X0B, 0X12 # orq (%rdx), %r10")
#define OR_R10_FROM_PTR_RDI CMT_ASM(".byte 0X4C, 0X0B, 0X17 # orq (%rdi), %r10")
#define OR_R10_FROM_PTR_RSI CMT_ASM(".byte 0X4C, 0X0B, 0X16 # orq (%rsi), %r10")
#define OR_R10_FROM_PTR_RBP CMT_ASM(".byte 0X4C, 0X0B, 0X55, 0X00 # orq (%rbp), %r10")
#define OR_R10_FROM_PTR_RSP CMT_ASM(".byte 0X4C, 0X0B, 0X14, 0X24 # orq (%rsp), %r10")
#define OR_R10_FROM_PTR_R8 CMT_ASM(".byte 0X4D, 0X0B, 0X10 # orq (%r8), %r10")
#define OR_R10_FROM_PTR_R9 CMT_ASM(".byte 0X4D, 0X0B, 0X11 # orq (%r9), %r10")
#define OR_R10_FROM_PTR_R10 CMT_ASM(".byte 0X4D, 0X0B, 0X12 # orq (%r10), %r10")
#define OR_R10_FROM_PTR_R11 CMT_ASM(".byte 0X4D, 0X0B, 0X13 # orq (%r11), %r10")
#define OR_R10_FROM_PTR_R12 CMT_ASM(".byte 0X4D, 0X0B, 0X14, 0X24 # orq (%r12), %r10")
#define OR_R10_FROM_PTR_R13 CMT_ASM(".byte 0X4D, 0X0B, 0X55, 0X00 # orq (%r13), %r10")
#define OR_R10_FROM_PTR_R14 CMT_ASM(".byte 0X4D, 0X0B, 0X16 # orq (%r14), %r10")
#define OR_R10_FROM_PTR_R15 CMT_ASM(".byte 0X4D, 0X0B, 0X17 # orq (%r15), %r10")
#define OR_R10_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0X10 # orq (%eax), %r10")
#define OR_R10_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0X13 # orq (%ebx), %r10")
#define OR_R10_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0X11 # orq (%ecx), %r10")
#define OR_R10_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0X12 # orq (%edx), %r10")
#define OR_R10_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0X17 # orq (%edi), %r10")
#define OR_R10_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0X16 # orq (%esi), %r10")
#define OR_R10_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0X55, 0X00 # orq (%ebp), %r10")
#define OR_R10_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0X14, 0X24 # orq (%esp), %r10")

#define OR_R11_FROM_PTR_RAX CMT_ASM(".byte 0X4C, 0X0B, 0X18 # orq (%rax), %r11")
#define OR_R11_FROM_PTR_RBX CMT_ASM(".byte 0X4C, 0X0B, 0X1B # orq (%rbx), %r11")
#define OR_R11_FROM_PTR_RCX CMT_ASM(".byte 0X4C, 0X0B, 0X19 # orq (%rcx), %r11")
#define OR_R11_FROM_PTR_RDX CMT_ASM(".byte 0X4C, 0X0B, 0X1A # orq (%rdx), %r11")
#define OR_R11_FROM_PTR_RDI CMT_ASM(".byte 0X4C, 0X0B, 0X1F # orq (%rdi), %r11")
#define OR_R11_FROM_PTR_RSI CMT_ASM(".byte 0X4C, 0X0B, 0X1E # orq (%rsi), %r11")
#define OR_R11_FROM_PTR_RBP CMT_ASM(".byte 0X4C, 0X0B, 0X5D, 0X00 # orq (%rbp), %r11")
#define OR_R11_FROM_PTR_RSP CMT_ASM(".byte 0X4C, 0X0B, 0X1C, 0X24 # orq (%rsp), %r11")
#define OR_R11_FROM_PTR_R8 CMT_ASM(".byte 0X4D, 0X0B, 0X18 # orq (%r8), %r11")
#define OR_R11_FROM_PTR_R9 CMT_ASM(".byte 0X4D, 0X0B, 0X19 # orq (%r9), %r11")
#define OR_R11_FROM_PTR_R10 CMT_ASM(".byte 0X4D, 0X0B, 0X1A # orq (%r10), %r11")
#define OR_R11_FROM_PTR_R11 CMT_ASM(".byte 0X4D, 0X0B, 0X1B # orq (%r11), %r11")
#define OR_R11_FROM_PTR_R12 CMT_ASM(".byte 0X4D, 0X0B, 0X1C, 0X24 # orq (%r12), %r11")
#define OR_R11_FROM_PTR_R13 CMT_ASM(".byte 0X4D, 0X0B, 0X5D, 0X00 # orq (%r13), %r11")
#define OR_R11_FROM_PTR_R14 CMT_ASM(".byte 0X4D, 0X0B, 0X1E # orq (%r14), %r11")
#define OR_R11_FROM_PTR_R15 CMT_ASM(".byte 0X4D, 0X0B, 0X1F # orq (%r15), %r11")
#define OR_R11_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0X18 # orq (%eax), %r11")
#define OR_R11_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0X1B # orq (%ebx), %r11")
#define OR_R11_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0X19 # orq (%ecx), %r11")
#define OR_R11_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0X1A # orq (%edx), %r11")
#define OR_R11_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0X1F # orq (%edi), %r11")
#define OR_R11_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0X1E # orq (%esi), %r11")
#define OR_R11_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0X5D, 0X00 # orq (%ebp), %r11")
#define OR_R11_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0X1C, 0X24 # orq (%esp), %r11")

#define OR_R12_FROM_PTR_RAX CMT_ASM(".byte 0X4C, 0X0B, 0X20 # orq (%rax), %r12")
#define OR_R12_FROM_PTR_RBX CMT_ASM(".byte 0X4C, 0X0B, 0X23 # orq (%rbx), %r12")
#define OR_R12_FROM_PTR_RCX CMT_ASM(".byte 0X4C, 0X0B, 0X21 # orq (%rcx), %r12")
#define OR_R12_FROM_PTR_RDX CMT_ASM(".byte 0X4C, 0X0B, 0X22 # orq (%rdx), %r12")
#define OR_R12_FROM_PTR_RDI CMT_ASM(".byte 0X4C, 0X0B, 0X27 # orq (%rdi), %r12")
#define OR_R12_FROM_PTR_RSI CMT_ASM(".byte 0X4C, 0X0B, 0X26 # orq (%rsi), %r12")
#define OR_R12_FROM_PTR_RBP CMT_ASM(".byte 0X4C, 0X0B, 0X65, 0X00 # orq (%rbp), %r12")
#define OR_R12_FROM_PTR_RSP CMT_ASM(".byte 0X4C, 0X0B, 0X24, 0X24 # orq (%rsp), %r12")
#define OR_R12_FROM_PTR_R8 CMT_ASM(".byte 0X4D, 0X0B, 0X20 # orq (%r8), %r12")
#define OR_R12_FROM_PTR_R9 CMT_ASM(".byte 0X4D, 0X0B, 0X21 # orq (%r9), %r12")
#define OR_R12_FROM_PTR_R10 CMT_ASM(".byte 0X4D, 0X0B, 0X22 # orq (%r10), %r12")
#define OR_R12_FROM_PTR_R11 CMT_ASM(".byte 0X4D, 0X0B, 0X23 # orq (%r11), %r12")
#define OR_R12_FROM_PTR_R12 CMT_ASM(".byte 0X4D, 0X0B, 0X24, 0X24 # orq (%r12), %r12")
#define OR_R12_FROM_PTR_R13 CMT_ASM(".byte 0X4D, 0X0B, 0X65, 0X00 # orq (%r13), %r12")
#define OR_R12_FROM_PTR_R14 CMT_ASM(".byte 0X4D, 0X0B, 0X26 # orq (%r14), %r12")
#define OR_R12_FROM_PTR_R15 CMT_ASM(".byte 0X4D, 0X0B, 0X27 # orq (%r15), %r12")
#define OR_R12_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0X20 # orq (%eax), %r12")
#define OR_R12_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0X23 # orq (%ebx), %r12")
#define OR_R12_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0X21 # orq (%ecx), %r12")
#define OR_R12_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0X22 # orq (%edx), %r12")
#define OR_R12_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0X27 # orq (%edi), %r12")
#define OR_R12_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0X26 # orq (%esi), %r12")
#define OR_R12_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0X65, 0X00 # orq (%ebp), %r12")
#define OR_R12_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0X24, 0X24 # orq (%esp), %r12")

#define OR_R13_FROM_PTR_RAX CMT_ASM(".byte 0X4C, 0X0B, 0X28 # orq (%rax), %r13")
#define OR_R13_FROM_PTR_RBX CMT_ASM(".byte 0X4C, 0X0B, 0X2B # orq (%rbx), %r13")
#define OR_R13_FROM_PTR_RCX CMT_ASM(".byte 0X4C, 0X0B, 0X29 # orq (%rcx), %r13")
#define OR_R13_FROM_PTR_RDX CMT_ASM(".byte 0X4C, 0X0B, 0X2A # orq (%rdx), %r13")
#define OR_R13_FROM_PTR_RDI CMT_ASM(".byte 0X4C, 0X0B, 0X2F # orq (%rdi), %r13")
#define OR_R13_FROM_PTR_RSI CMT_ASM(".byte 0X4C, 0X0B, 0X2E # orq (%rsi), %r13")
#define OR_R13_FROM_PTR_RBP CMT_ASM(".byte 0X4C, 0X0B, 0X6D, 0X00 # orq (%rbp), %r13")
#define OR_R13_FROM_PTR_RSP CMT_ASM(".byte 0X4C, 0X0B, 0X2C, 0X24 # orq (%rsp), %r13")
#define OR_R13_FROM_PTR_R8 CMT_ASM(".byte 0X4D, 0X0B, 0X28 # orq (%r8), %r13")
#define OR_R13_FROM_PTR_R9 CMT_ASM(".byte 0X4D, 0X0B, 0X29 # orq (%r9), %r13")
#define OR_R13_FROM_PTR_R10 CMT_ASM(".byte 0X4D, 0X0B, 0X2A # orq (%r10), %r13")
#define OR_R13_FROM_PTR_R11 CMT_ASM(".byte 0X4D, 0X0B, 0X2B # orq (%r11), %r13")
#define OR_R13_FROM_PTR_R12 CMT_ASM(".byte 0X4D, 0X0B, 0X2C, 0X24 # orq (%r12), %r13")
#define OR_R13_FROM_PTR_R13 CMT_ASM(".byte 0X4D, 0X0B, 0X6D, 0X00 # orq (%r13), %r13")
#define OR_R13_FROM_PTR_R14 CMT_ASM(".byte 0X4D, 0X0B, 0X2E # orq (%r14), %r13")
#define OR_R13_FROM_PTR_R15 CMT_ASM(".byte 0X4D, 0X0B, 0X2F # orq (%r15), %r13")
#define OR_R13_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0X28 # orq (%eax), %r13")
#define OR_R13_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0X2B # orq (%ebx), %r13")
#define OR_R13_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0X29 # orq (%ecx), %r13")
#define OR_R13_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0X2A # orq (%edx), %r13")
#define OR_R13_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0X2F # orq (%edi), %r13")
#define OR_R13_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0X2E # orq (%esi), %r13")
#define OR_R13_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0X6D, 0X00 # orq (%ebp), %r13")
#define OR_R13_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0X2C, 0X24 # orq (%esp), %r13")

#define OR_R14_FROM_PTR_RAX CMT_ASM(".byte 0X4C, 0X0B, 0X30 # orq (%rax), %r14")
#define OR_R14_FROM_PTR_RBX CMT_ASM(".byte 0X4C, 0X0B, 0X33 # orq (%rbx), %r14")
#define OR_R14_FROM_PTR_RCX CMT_ASM(".byte 0X4C, 0X0B, 0X31 # orq (%rcx), %r14")
#define OR_R14_FROM_PTR_RDX CMT_ASM(".byte 0X4C, 0X0B, 0X32 # orq (%rdx), %r14")
#define OR_R14_FROM_PTR_RDI CMT_ASM(".byte 0X4C, 0X0B, 0X37 # orq (%rdi), %r14")
#define OR_R14_FROM_PTR_RSI CMT_ASM(".byte 0X4C, 0X0B, 0X36 # orq (%rsi), %r14")
#define OR_R14_FROM_PTR_RBP CMT_ASM(".byte 0X4C, 0X0B, 0X75, 0X00 # orq (%rbp), %r14")
#define OR_R14_FROM_PTR_RSP CMT_ASM(".byte 0X4C, 0X0B, 0X34, 0X24 # orq (%rsp), %r14")
#define OR_R14_FROM_PTR_R8 CMT_ASM(".byte 0X4D, 0X0B, 0X30 # orq (%r8), %r14")
#define OR_R14_FROM_PTR_R9 CMT_ASM(".byte 0X4D, 0X0B, 0X31 # orq (%r9), %r14")
#define OR_R14_FROM_PTR_R10 CMT_ASM(".byte 0X4D, 0X0B, 0X32 # orq (%r10), %r14")
#define OR_R14_FROM_PTR_R11 CMT_ASM(".byte 0X4D, 0X0B, 0X33 # orq (%r11), %r14")
#define OR_R14_FROM_PTR_R12 CMT_ASM(".byte 0X4D, 0X0B, 0X34, 0X24 # orq (%r12), %r14")
#define OR_R14_FROM_PTR_R13 CMT_ASM(".byte 0X4D, 0X0B, 0X75, 0X00 # orq (%r13), %r14")
#define OR_R14_FROM_PTR_R14 CMT_ASM(".byte 0X4D, 0X0B, 0X36 # orq (%r14), %r14")
#define OR_R14_FROM_PTR_R15 CMT_ASM(".byte 0X4D, 0X0B, 0X37 # orq (%r15), %r14")
#define OR_R14_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0X30 # orq (%eax), %r14")
#define OR_R14_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0X33 # orq (%ebx), %r14")
#define OR_R14_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0X31 # orq (%ecx), %r14")
#define OR_R14_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0X32 # orq (%edx), %r14")
#define OR_R14_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0X37 # orq (%edi), %r14")
#define OR_R14_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0X36 # orq (%esi), %r14")
#define OR_R14_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0X75, 0X00 # orq (%ebp), %r14")
#define OR_R14_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0X34, 0X24 # orq (%esp), %r14")

#define OR_R15_FROM_PTR_RAX CMT_ASM(".byte 0X4C, 0X0B, 0X38 # orq (%rax), %r15")
#define OR_R15_FROM_PTR_RBX CMT_ASM(".byte 0X4C, 0X0B, 0X3B # orq (%rbx), %r15")
#define OR_R15_FROM_PTR_RCX CMT_ASM(".byte 0X4C, 0X0B, 0X39 # orq (%rcx), %r15")
#define OR_R15_FROM_PTR_RDX CMT_ASM(".byte 0X4C, 0X0B, 0X3A # orq (%rdx), %r15")
#define OR_R15_FROM_PTR_RDI CMT_ASM(".byte 0X4C, 0X0B, 0X3F # orq (%rdi), %r15")
#define OR_R15_FROM_PTR_RSI CMT_ASM(".byte 0X4C, 0X0B, 0X3E # orq (%rsi), %r15")
#define OR_R15_FROM_PTR_RBP CMT_ASM(".byte 0X4C, 0X0B, 0X7D, 0X00 # orq (%rbp), %r15")
#define OR_R15_FROM_PTR_RSP CMT_ASM(".byte 0X4C, 0X0B, 0X3C, 0X24 # orq (%rsp), %r15")
#define OR_R15_FROM_PTR_R8 CMT_ASM(".byte 0X4D, 0X0B, 0X38 # orq (%r8), %r15")
#define OR_R15_FROM_PTR_R9 CMT_ASM(".byte 0X4D, 0X0B, 0X39 # orq (%r9), %r15")
#define OR_R15_FROM_PTR_R10 CMT_ASM(".byte 0X4D, 0X0B, 0X3A # orq (%r10), %r15")
#define OR_R15_FROM_PTR_R11 CMT_ASM(".byte 0X4D, 0X0B, 0X3B # orq (%r11), %r15")
#define OR_R15_FROM_PTR_R12 CMT_ASM(".byte 0X4D, 0X0B, 0X3C, 0X24 # orq (%r12), %r15")
#define OR_R15_FROM_PTR_R13 CMT_ASM(".byte 0X4D, 0X0B, 0X7D, 0X00 # orq (%r13), %r15")
#define OR_R15_FROM_PTR_R14 CMT_ASM(".byte 0X4D, 0X0B, 0X3E # orq (%r14), %r15")
#define OR_R15_FROM_PTR_R15 CMT_ASM(".byte 0X4D, 0X0B, 0X3F # orq (%r15), %r15")
#define OR_R15_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0X38 # orq (%eax), %r15")
#define OR_R15_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0X3B # orq (%ebx), %r15")
#define OR_R15_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0X39 # orq (%ecx), %r15")
#define OR_R15_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0X3A # orq (%edx), %r15")
#define OR_R15_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0X3F # orq (%edi), %r15")
#define OR_R15_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0X3E # orq (%esi), %r15")
#define OR_R15_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0X7D, 0X00 # orq (%ebp), %r15")
#define OR_R15_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0X3C, 0X24 # orq (%esp), %r15")

#define OR_RAX_TO_PTR_RAX CMT_ASM(".byte 0X48, 0X09, 0X00 # orq %rax, (%rax)")
#define OR_RAX_TO_PTR_RBX CMT_ASM(".byte 0X48, 0X09, 0X03 # orq %rax, (%rbx)")
#define OR_RAX_TO_PTR_RCX CMT_ASM(".byte 0X48, 0X09, 0X01 # orq %rax, (%rcx)")
#define OR_RAX_TO_PTR_RDX CMT_ASM(".byte 0X48, 0X09, 0X02 # orq %rax, (%rdx)")
#define OR_RAX_TO_PTR_RDI CMT_ASM(".byte 0X48, 0X09, 0X07 # orq %rax, (%rdi)")
#define OR_RAX_TO_PTR_RSI CMT_ASM(".byte 0X48, 0X09, 0X06 # orq %rax, (%rsi)")
#define OR_RAX_TO_PTR_RBP CMT_ASM(".byte 0X48, 0X09, 0X45, 0X00 # orq %rax, (%rbp)")
#define OR_RAX_TO_PTR_RSP CMT_ASM(".byte 0X48, 0X09, 0X04, 0X24 # orq %rax, (%rsp)")
#define OR_RAX_TO_PTR_R8 CMT_ASM(".byte 0X49, 0X09, 0X00 # orq %rax, (%r8)")
#define OR_RAX_TO_PTR_R9 CMT_ASM(".byte 0X49, 0X09, 0X01 # orq %rax, (%r9)")
#define OR_RAX_TO_PTR_R10 CMT_ASM(".byte 0X49, 0X09, 0X02 # orq %rax, (%r10)")
#define OR_RAX_TO_PTR_R11 CMT_ASM(".byte 0X49, 0X09, 0X03 # orq %rax, (%r11)")
#define OR_RAX_TO_PTR_R12 CMT_ASM(".byte 0X49, 0X09, 0X04, 0X24 # orq %rax, (%r12)")
#define OR_RAX_TO_PTR_R13 CMT_ASM(".byte 0X49, 0X09, 0X45, 0X00 # orq %rax, (%r13)")
#define OR_RAX_TO_PTR_R14 CMT_ASM(".byte 0X49, 0X09, 0X06 # orq %rax, (%r14)")
#define OR_RAX_TO_PTR_R15 CMT_ASM(".byte 0X49, 0X09, 0X07 # orq %rax, (%r15)")
#define OR_RAX_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X09, 0X00 # orq %rax, (%eax)")
#define OR_RAX_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X09, 0X03 # orq %rax, (%ebx)")
#define OR_RAX_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X09, 0X01 # orq %rax, (%ecx)")
#define OR_RAX_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X09, 0X02 # orq %rax, (%edx)")
#define OR_RAX_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X09, 0X07 # orq %rax, (%edi)")
#define OR_RAX_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X09, 0X06 # orq %rax, (%esi)")
#define OR_RAX_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X09, 0X45, 0X00 # orq %rax, (%ebp)")
#define OR_RAX_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X09, 0X04, 0X24 # orq %rax, (%esp)")

#define OR_RBX_TO_PTR_RAX CMT_ASM(".byte 0X48, 0X09, 0X18 # orq %rbx, (%rax)")
#define OR_RBX_TO_PTR_RBX CMT_ASM(".byte 0X48, 0X09, 0X1B # orq %rbx, (%rbx)")
#define OR_RBX_TO_PTR_RCX CMT_ASM(".byte 0X48, 0X09, 0X19 # orq %rbx, (%rcx)")
#define OR_RBX_TO_PTR_RDX CMT_ASM(".byte 0X48, 0X09, 0X1A # orq %rbx, (%rdx)")
#define OR_RBX_TO_PTR_RDI CMT_ASM(".byte 0X48, 0X09, 0X1F # orq %rbx, (%rdi)")
#define OR_RBX_TO_PTR_RSI CMT_ASM(".byte 0X48, 0X09, 0X1E # orq %rbx, (%rsi)")
#define OR_RBX_TO_PTR_RBP CMT_ASM(".byte 0X48, 0X09, 0X5D, 0X00 # orq %rbx, (%rbp)")
#define OR_RBX_TO_PTR_RSP CMT_ASM(".byte 0X48, 0X09, 0X1C, 0X24 # orq %rbx, (%rsp)")
#define OR_RBX_TO_PTR_R8 CMT_ASM(".byte 0X49, 0X09, 0X18 # orq %rbx, (%r8)")
#define OR_RBX_TO_PTR_R9 CMT_ASM(".byte 0X49, 0X09, 0X19 # orq %rbx, (%r9)")
#define OR_RBX_TO_PTR_R10 CMT_ASM(".byte 0X49, 0X09, 0X1A # orq %rbx, (%r10)")
#define OR_RBX_TO_PTR_R11 CMT_ASM(".byte 0X49, 0X09, 0X1B # orq %rbx, (%r11)")
#define OR_RBX_TO_PTR_R12 CMT_ASM(".byte 0X49, 0X09, 0X1C, 0X24 # orq %rbx, (%r12)")
#define OR_RBX_TO_PTR_R13 CMT_ASM(".byte 0X49, 0X09, 0X5D, 0X00 # orq %rbx, (%r13)")
#define OR_RBX_TO_PTR_R14 CMT_ASM(".byte 0X49, 0X09, 0X1E # orq %rbx, (%r14)")
#define OR_RBX_TO_PTR_R15 CMT_ASM(".byte 0X49, 0X09, 0X1F # orq %rbx, (%r15)")
#define OR_RBX_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X09, 0X18 # orq %rbx, (%eax)")
#define OR_RBX_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X09, 0X1B # orq %rbx, (%ebx)")
#define OR_RBX_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X09, 0X19 # orq %rbx, (%ecx)")
#define OR_RBX_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X09, 0X1A # orq %rbx, (%edx)")
#define OR_RBX_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X09, 0X1F # orq %rbx, (%edi)")
#define OR_RBX_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X09, 0X1E # orq %rbx, (%esi)")
#define OR_RBX_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X09, 0X5D, 0X00 # orq %rbx, (%ebp)")
#define OR_RBX_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X09, 0X1C, 0X24 # orq %rbx, (%esp)")

#define OR_RCX_TO_PTR_RAX CMT_ASM(".byte 0X48, 0X09, 0X08 # orq %rcx, (%rax)")
#define OR_RCX_TO_PTR_RBX CMT_ASM(".byte 0X48, 0X09, 0X0B # orq %rcx, (%rbx)")
#define OR_RCX_TO_PTR_RCX CMT_ASM(".byte 0X48, 0X09, 0X09 # orq %rcx, (%rcx)")
#define OR_RCX_TO_PTR_RDX CMT_ASM(".byte 0X48, 0X09, 0X0A # orq %rcx, (%rdx)")
#define OR_RCX_TO_PTR_RDI CMT_ASM(".byte 0X48, 0X09, 0X0F # orq %rcx, (%rdi)")
#define OR_RCX_TO_PTR_RSI CMT_ASM(".byte 0X48, 0X09, 0X0E # orq %rcx, (%rsi)")
#define OR_RCX_TO_PTR_RBP CMT_ASM(".byte 0X48, 0X09, 0X4D, 0X00 # orq %rcx, (%rbp)")
#define OR_RCX_TO_PTR_RSP CMT_ASM(".byte 0X48, 0X09, 0X0C, 0X24 # orq %rcx, (%rsp)")
#define OR_RCX_TO_PTR_R8 CMT_ASM(".byte 0X49, 0X09, 0X08 # orq %rcx, (%r8)")
#define OR_RCX_TO_PTR_R9 CMT_ASM(".byte 0X49, 0X09, 0X09 # orq %rcx, (%r9)")
#define OR_RCX_TO_PTR_R10 CMT_ASM(".byte 0X49, 0X09, 0X0A # orq %rcx, (%r10)")
#define OR_RCX_TO_PTR_R11 CMT_ASM(".byte 0X49, 0X09, 0X0B # orq %rcx, (%r11)")
#define OR_RCX_TO_PTR_R12 CMT_ASM(".byte 0X49, 0X09, 0X0C, 0X24 # orq %rcx, (%r12)")
#define OR_RCX_TO_PTR_R13 CMT_ASM(".byte 0X49, 0X09, 0X4D, 0X00 # orq %rcx, (%r13)")
#define OR_RCX_TO_PTR_R14 CMT_ASM(".byte 0X49, 0X09, 0X0E # orq %rcx, (%r14)")
#define OR_RCX_TO_PTR_R15 CMT_ASM(".byte 0X49, 0X09, 0X0F # orq %rcx, (%r15)")
#define OR_RCX_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X09, 0X08 # orq %rcx, (%eax)")
#define OR_RCX_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X09, 0X0B # orq %rcx, (%ebx)")
#define OR_RCX_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X09, 0X09 # orq %rcx, (%ecx)")
#define OR_RCX_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X09, 0X0A # orq %rcx, (%edx)")
#define OR_RCX_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X09, 0X0F # orq %rcx, (%edi)")
#define OR_RCX_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X09, 0X0E # orq %rcx, (%esi)")
#define OR_RCX_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X09, 0X4D, 0X00 # orq %rcx, (%ebp)")
#define OR_RCX_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X09, 0X0C, 0X24 # orq %rcx, (%esp)")

#define OR_RDX_TO_PTR_RAX CMT_ASM(".byte 0X48, 0X09, 0X10 # orq %rdx, (%rax)")
#define OR_RDX_TO_PTR_RBX CMT_ASM(".byte 0X48, 0X09, 0X13 # orq %rdx, (%rbx)")
#define OR_RDX_TO_PTR_RCX CMT_ASM(".byte 0X48, 0X09, 0X11 # orq %rdx, (%rcx)")
#define OR_RDX_TO_PTR_RDX CMT_ASM(".byte 0X48, 0X09, 0X12 # orq %rdx, (%rdx)")
#define OR_RDX_TO_PTR_RDI CMT_ASM(".byte 0X48, 0X09, 0X17 # orq %rdx, (%rdi)")
#define OR_RDX_TO_PTR_RSI CMT_ASM(".byte 0X48, 0X09, 0X16 # orq %rdx, (%rsi)")
#define OR_RDX_TO_PTR_RBP CMT_ASM(".byte 0X48, 0X09, 0X55, 0X00 # orq %rdx, (%rbp)")
#define OR_RDX_TO_PTR_RSP CMT_ASM(".byte 0X48, 0X09, 0X14, 0X24 # orq %rdx, (%rsp)")
#define OR_RDX_TO_PTR_R8 CMT_ASM(".byte 0X49, 0X09, 0X10 # orq %rdx, (%r8)")
#define OR_RDX_TO_PTR_R9 CMT_ASM(".byte 0X49, 0X09, 0X11 # orq %rdx, (%r9)")
#define OR_RDX_TO_PTR_R10 CMT_ASM(".byte 0X49, 0X09, 0X12 # orq %rdx, (%r10)")
#define OR_RDX_TO_PTR_R11 CMT_ASM(".byte 0X49, 0X09, 0X13 # orq %rdx, (%r11)")
#define OR_RDX_TO_PTR_R12 CMT_ASM(".byte 0X49, 0X09, 0X14, 0X24 # orq %rdx, (%r12)")
#define OR_RDX_TO_PTR_R13 CMT_ASM(".byte 0X49, 0X09, 0X55, 0X00 # orq %rdx, (%r13)")
#define OR_RDX_TO_PTR_R14 CMT_ASM(".byte 0X49, 0X09, 0X16 # orq %rdx, (%r14)")
#define OR_RDX_TO_PTR_R15 CMT_ASM(".byte 0X49, 0X09, 0X17 # orq %rdx, (%r15)")
#define OR_RDX_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X09, 0X10 # orq %rdx, (%eax)")
#define OR_RDX_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X09, 0X13 # orq %rdx, (%ebx)")
#define OR_RDX_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X09, 0X11 # orq %rdx, (%ecx)")
#define OR_RDX_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X09, 0X12 # orq %rdx, (%edx)")
#define OR_RDX_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X09, 0X17 # orq %rdx, (%edi)")
#define OR_RDX_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X09, 0X16 # orq %rdx, (%esi)")
#define OR_RDX_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X09, 0X55, 0X00 # orq %rdx, (%ebp)")
#define OR_RDX_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X09, 0X14, 0X24 # orq %rdx, (%esp)")

#define OR_RDI_TO_PTR_RAX CMT_ASM(".byte 0X48, 0X09, 0X38 # orq %rdi, (%rax)")
#define OR_RDI_TO_PTR_RBX CMT_ASM(".byte 0X48, 0X09, 0X3B # orq %rdi, (%rbx)")
#define OR_RDI_TO_PTR_RCX CMT_ASM(".byte 0X48, 0X09, 0X39 # orq %rdi, (%rcx)")
#define OR_RDI_TO_PTR_RDX CMT_ASM(".byte 0X48, 0X09, 0X3A # orq %rdi, (%rdx)")
#define OR_RDI_TO_PTR_RDI CMT_ASM(".byte 0X48, 0X09, 0X3F # orq %rdi, (%rdi)")
#define OR_RDI_TO_PTR_RSI CMT_ASM(".byte 0X48, 0X09, 0X3E # orq %rdi, (%rsi)")
#define OR_RDI_TO_PTR_RBP CMT_ASM(".byte 0X48, 0X09, 0X7D, 0X00 # orq %rdi, (%rbp)")
#define OR_RDI_TO_PTR_RSP CMT_ASM(".byte 0X48, 0X09, 0X3C, 0X24 # orq %rdi, (%rsp)")
#define OR_RDI_TO_PTR_R8 CMT_ASM(".byte 0X49, 0X09, 0X38 # orq %rdi, (%r8)")
#define OR_RDI_TO_PTR_R9 CMT_ASM(".byte 0X49, 0X09, 0X39 # orq %rdi, (%r9)")
#define OR_RDI_TO_PTR_R10 CMT_ASM(".byte 0X49, 0X09, 0X3A # orq %rdi, (%r10)")
#define OR_RDI_TO_PTR_R11 CMT_ASM(".byte 0X49, 0X09, 0X3B # orq %rdi, (%r11)")
#define OR_RDI_TO_PTR_R12 CMT_ASM(".byte 0X49, 0X09, 0X3C, 0X24 # orq %rdi, (%r12)")
#define OR_RDI_TO_PTR_R13 CMT_ASM(".byte 0X49, 0X09, 0X7D, 0X00 # orq %rdi, (%r13)")
#define OR_RDI_TO_PTR_R14 CMT_ASM(".byte 0X49, 0X09, 0X3E # orq %rdi, (%r14)")
#define OR_RDI_TO_PTR_R15 CMT_ASM(".byte 0X49, 0X09, 0X3F # orq %rdi, (%r15)")
#define OR_RDI_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X09, 0X38 # orq %rdi, (%eax)")
#define OR_RDI_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X09, 0X3B # orq %rdi, (%ebx)")
#define OR_RDI_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X09, 0X39 # orq %rdi, (%ecx)")
#define OR_RDI_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X09, 0X3A # orq %rdi, (%edx)")
#define OR_RDI_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X09, 0X3F # orq %rdi, (%edi)")
#define OR_RDI_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X09, 0X3E # orq %rdi, (%esi)")
#define OR_RDI_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X09, 0X7D, 0X00 # orq %rdi, (%ebp)")
#define OR_RDI_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X09, 0X3C, 0X24 # orq %rdi, (%esp)")

#define OR_RSI_TO_PTR_RAX CMT_ASM(".byte 0X48, 0X09, 0X30 # orq %rsi, (%rax)")
#define OR_RSI_TO_PTR_RBX CMT_ASM(".byte 0X48, 0X09, 0X33 # orq %rsi, (%rbx)")
#define OR_RSI_TO_PTR_RCX CMT_ASM(".byte 0X48, 0X09, 0X31 # orq %rsi, (%rcx)")
#define OR_RSI_TO_PTR_RDX CMT_ASM(".byte 0X48, 0X09, 0X32 # orq %rsi, (%rdx)")
#define OR_RSI_TO_PTR_RDI CMT_ASM(".byte 0X48, 0X09, 0X37 # orq %rsi, (%rdi)")
#define OR_RSI_TO_PTR_RSI CMT_ASM(".byte 0X48, 0X09, 0X36 # orq %rsi, (%rsi)")
#define OR_RSI_TO_PTR_RBP CMT_ASM(".byte 0X48, 0X09, 0X75, 0X00 # orq %rsi, (%rbp)")
#define OR_RSI_TO_PTR_RSP CMT_ASM(".byte 0X48, 0X09, 0X34, 0X24 # orq %rsi, (%rsp)")
#define OR_RSI_TO_PTR_R8 CMT_ASM(".byte 0X49, 0X09, 0X30 # orq %rsi, (%r8)")
#define OR_RSI_TO_PTR_R9 CMT_ASM(".byte 0X49, 0X09, 0X31 # orq %rsi, (%r9)")
#define OR_RSI_TO_PTR_R10 CMT_ASM(".byte 0X49, 0X09, 0X32 # orq %rsi, (%r10)")
#define OR_RSI_TO_PTR_R11 CMT_ASM(".byte 0X49, 0X09, 0X33 # orq %rsi, (%r11)")
#define OR_RSI_TO_PTR_R12 CMT_ASM(".byte 0X49, 0X09, 0X34, 0X24 # orq %rsi, (%r12)")
#define OR_RSI_TO_PTR_R13 CMT_ASM(".byte 0X49, 0X09, 0X75, 0X00 # orq %rsi, (%r13)")
#define OR_RSI_TO_PTR_R14 CMT_ASM(".byte 0X49, 0X09, 0X36 # orq %rsi, (%r14)")
#define OR_RSI_TO_PTR_R15 CMT_ASM(".byte 0X49, 0X09, 0X37 # orq %rsi, (%r15)")
#define OR_RSI_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X09, 0X30 # orq %rsi, (%eax)")
#define OR_RSI_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X09, 0X33 # orq %rsi, (%ebx)")
#define OR_RSI_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X09, 0X31 # orq %rsi, (%ecx)")
#define OR_RSI_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X09, 0X32 # orq %rsi, (%edx)")
#define OR_RSI_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X09, 0X37 # orq %rsi, (%edi)")
#define OR_RSI_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X09, 0X36 # orq %rsi, (%esi)")
#define OR_RSI_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X09, 0X75, 0X00 # orq %rsi, (%ebp)")
#define OR_RSI_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X09, 0X34, 0X24 # orq %rsi, (%esp)")

#define OR_RBP_TO_PTR_RAX CMT_ASM(".byte 0X48, 0X09, 0X28 # orq %rbp, (%rax)")
#define OR_RBP_TO_PTR_RBX CMT_ASM(".byte 0X48, 0X09, 0X2B # orq %rbp, (%rbx)")
#define OR_RBP_TO_PTR_RCX CMT_ASM(".byte 0X48, 0X09, 0X29 # orq %rbp, (%rcx)")
#define OR_RBP_TO_PTR_RDX CMT_ASM(".byte 0X48, 0X09, 0X2A # orq %rbp, (%rdx)")
#define OR_RBP_TO_PTR_RDI CMT_ASM(".byte 0X48, 0X09, 0X2F # orq %rbp, (%rdi)")
#define OR_RBP_TO_PTR_RSI CMT_ASM(".byte 0X48, 0X09, 0X2E # orq %rbp, (%rsi)")
#define OR_RBP_TO_PTR_RBP CMT_ASM(".byte 0X48, 0X09, 0X6D, 0X00 # orq %rbp, (%rbp)")
#define OR_RBP_TO_PTR_RSP CMT_ASM(".byte 0X48, 0X09, 0X2C, 0X24 # orq %rbp, (%rsp)")
#define OR_RBP_TO_PTR_R8 CMT_ASM(".byte 0X49, 0X09, 0X28 # orq %rbp, (%r8)")
#define OR_RBP_TO_PTR_R9 CMT_ASM(".byte 0X49, 0X09, 0X29 # orq %rbp, (%r9)")
#define OR_RBP_TO_PTR_R10 CMT_ASM(".byte 0X49, 0X09, 0X2A # orq %rbp, (%r10)")
#define OR_RBP_TO_PTR_R11 CMT_ASM(".byte 0X49, 0X09, 0X2B # orq %rbp, (%r11)")
#define OR_RBP_TO_PTR_R12 CMT_ASM(".byte 0X49, 0X09, 0X2C, 0X24 # orq %rbp, (%r12)")
#define OR_RBP_TO_PTR_R13 CMT_ASM(".byte 0X49, 0X09, 0X6D, 0X00 # orq %rbp, (%r13)")
#define OR_RBP_TO_PTR_R14 CMT_ASM(".byte 0X49, 0X09, 0X2E # orq %rbp, (%r14)")
#define OR_RBP_TO_PTR_R15 CMT_ASM(".byte 0X49, 0X09, 0X2F # orq %rbp, (%r15)")
#define OR_RBP_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X09, 0X28 # orq %rbp, (%eax)")
#define OR_RBP_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X09, 0X2B # orq %rbp, (%ebx)")
#define OR_RBP_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X09, 0X29 # orq %rbp, (%ecx)")
#define OR_RBP_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X09, 0X2A # orq %rbp, (%edx)")
#define OR_RBP_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X09, 0X2F # orq %rbp, (%edi)")
#define OR_RBP_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X09, 0X2E # orq %rbp, (%esi)")
#define OR_RBP_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X09, 0X6D, 0X00 # orq %rbp, (%ebp)")
#define OR_RBP_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X09, 0X2C, 0X24 # orq %rbp, (%esp)")

#define OR_RSP_TO_PTR_RAX CMT_ASM(".byte 0X48, 0X09, 0X20 # orq %rsp, (%rax)")
#define OR_RSP_TO_PTR_RBX CMT_ASM(".byte 0X48, 0X09, 0X23 # orq %rsp, (%rbx)")
#define OR_RSP_TO_PTR_RCX CMT_ASM(".byte 0X48, 0X09, 0X21 # orq %rsp, (%rcx)")
#define OR_RSP_TO_PTR_RDX CMT_ASM(".byte 0X48, 0X09, 0X22 # orq %rsp, (%rdx)")
#define OR_RSP_TO_PTR_RDI CMT_ASM(".byte 0X48, 0X09, 0X27 # orq %rsp, (%rdi)")
#define OR_RSP_TO_PTR_RSI CMT_ASM(".byte 0X48, 0X09, 0X26 # orq %rsp, (%rsi)")
#define OR_RSP_TO_PTR_RBP CMT_ASM(".byte 0X48, 0X09, 0X65, 0X00 # orq %rsp, (%rbp)")
#define OR_RSP_TO_PTR_RSP CMT_ASM(".byte 0X48, 0X09, 0X24, 0X24 # orq %rsp, (%rsp)")
#define OR_RSP_TO_PTR_R8 CMT_ASM(".byte 0X49, 0X09, 0X20 # orq %rsp, (%r8)")
#define OR_RSP_TO_PTR_R9 CMT_ASM(".byte 0X49, 0X09, 0X21 # orq %rsp, (%r9)")
#define OR_RSP_TO_PTR_R10 CMT_ASM(".byte 0X49, 0X09, 0X22 # orq %rsp, (%r10)")
#define OR_RSP_TO_PTR_R11 CMT_ASM(".byte 0X49, 0X09, 0X23 # orq %rsp, (%r11)")
#define OR_RSP_TO_PTR_R12 CMT_ASM(".byte 0X49, 0X09, 0X24, 0X24 # orq %rsp, (%r12)")
#define OR_RSP_TO_PTR_R13 CMT_ASM(".byte 0X49, 0X09, 0X65, 0X00 # orq %rsp, (%r13)")
#define OR_RSP_TO_PTR_R14 CMT_ASM(".byte 0X49, 0X09, 0X26 # orq %rsp, (%r14)")
#define OR_RSP_TO_PTR_R15 CMT_ASM(".byte 0X49, 0X09, 0X27 # orq %rsp, (%r15)")
#define OR_RSP_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X09, 0X20 # orq %rsp, (%eax)")
#define OR_RSP_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X09, 0X23 # orq %rsp, (%ebx)")
#define OR_RSP_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X09, 0X21 # orq %rsp, (%ecx)")
#define OR_RSP_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X09, 0X22 # orq %rsp, (%edx)")
#define OR_RSP_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X09, 0X27 # orq %rsp, (%edi)")
#define OR_RSP_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X09, 0X26 # orq %rsp, (%esi)")
#define OR_RSP_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X09, 0X65, 0X00 # orq %rsp, (%ebp)")
#define OR_RSP_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X09, 0X24, 0X24 # orq %rsp, (%esp)")

#define OR_R8_TO_PTR_RAX CMT_ASM(".byte 0X4C, 0X09, 0X00 # orq %r8, (%rax)")
#define OR_R8_TO_PTR_RBX CMT_ASM(".byte 0X4C, 0X09, 0X03 # orq %r8, (%rbx)")
#define OR_R8_TO_PTR_RCX CMT_ASM(".byte 0X4C, 0X09, 0X01 # orq %r8, (%rcx)")
#define OR_R8_TO_PTR_RDX CMT_ASM(".byte 0X4C, 0X09, 0X02 # orq %r8, (%rdx)")
#define OR_R8_TO_PTR_RDI CMT_ASM(".byte 0X4C, 0X09, 0X07 # orq %r8, (%rdi)")
#define OR_R8_TO_PTR_RSI CMT_ASM(".byte 0X4C, 0X09, 0X06 # orq %r8, (%rsi)")
#define OR_R8_TO_PTR_RBP CMT_ASM(".byte 0X4C, 0X09, 0X45, 0X00 # orq %r8, (%rbp)")
#define OR_R8_TO_PTR_RSP CMT_ASM(".byte 0X4C, 0X09, 0X04, 0X24 # orq %r8, (%rsp)")
#define OR_R8_TO_PTR_R8 CMT_ASM(".byte 0X4D, 0X09, 0X00 # orq %r8, (%r8)")
#define OR_R8_TO_PTR_R9 CMT_ASM(".byte 0X4D, 0X09, 0X01 # orq %r8, (%r9)")
#define OR_R8_TO_PTR_R10 CMT_ASM(".byte 0X4D, 0X09, 0X02 # orq %r8, (%r10)")
#define OR_R8_TO_PTR_R11 CMT_ASM(".byte 0X4D, 0X09, 0X03 # orq %r8, (%r11)")
#define OR_R8_TO_PTR_R12 CMT_ASM(".byte 0X4D, 0X09, 0X04, 0X24 # orq %r8, (%r12)")
#define OR_R8_TO_PTR_R13 CMT_ASM(".byte 0X4D, 0X09, 0X45, 0X00 # orq %r8, (%r13)")
#define OR_R8_TO_PTR_R14 CMT_ASM(".byte 0X4D, 0X09, 0X06 # orq %r8, (%r14)")
#define OR_R8_TO_PTR_R15 CMT_ASM(".byte 0X4D, 0X09, 0X07 # orq %r8, (%r15)")
#define OR_R8_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X09, 0X00 # orq %r8, (%eax)")
#define OR_R8_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X09, 0X03 # orq %r8, (%ebx)")
#define OR_R8_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X09, 0X01 # orq %r8, (%ecx)")
#define OR_R8_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X09, 0X02 # orq %r8, (%edx)")
#define OR_R8_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X09, 0X07 # orq %r8, (%edi)")
#define OR_R8_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X09, 0X06 # orq %r8, (%esi)")
#define OR_R8_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X09, 0X45, 0X00 # orq %r8, (%ebp)")
#define OR_R8_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X09, 0X04, 0X24 # orq %r8, (%esp)")

#define OR_R9_TO_PTR_RAX CMT_ASM(".byte 0X4C, 0X09, 0X08 # orq %r9, (%rax)")
#define OR_R9_TO_PTR_RBX CMT_ASM(".byte 0X4C, 0X09, 0X0B # orq %r9, (%rbx)")
#define OR_R9_TO_PTR_RCX CMT_ASM(".byte 0X4C, 0X09, 0X09 # orq %r9, (%rcx)")
#define OR_R9_TO_PTR_RDX CMT_ASM(".byte 0X4C, 0X09, 0X0A # orq %r9, (%rdx)")
#define OR_R9_TO_PTR_RDI CMT_ASM(".byte 0X4C, 0X09, 0X0F # orq %r9, (%rdi)")
#define OR_R9_TO_PTR_RSI CMT_ASM(".byte 0X4C, 0X09, 0X0E # orq %r9, (%rsi)")
#define OR_R9_TO_PTR_RBP CMT_ASM(".byte 0X4C, 0X09, 0X4D, 0X00 # orq %r9, (%rbp)")
#define OR_R9_TO_PTR_RSP CMT_ASM(".byte 0X4C, 0X09, 0X0C, 0X24 # orq %r9, (%rsp)")
#define OR_R9_TO_PTR_R8 CMT_ASM(".byte 0X4D, 0X09, 0X08 # orq %r9, (%r8)")
#define OR_R9_TO_PTR_R9 CMT_ASM(".byte 0X4D, 0X09, 0X09 # orq %r9, (%r9)")
#define OR_R9_TO_PTR_R10 CMT_ASM(".byte 0X4D, 0X09, 0X0A # orq %r9, (%r10)")
#define OR_R9_TO_PTR_R11 CMT_ASM(".byte 0X4D, 0X09, 0X0B # orq %r9, (%r11)")
#define OR_R9_TO_PTR_R12 CMT_ASM(".byte 0X4D, 0X09, 0X0C, 0X24 # orq %r9, (%r12)")
#define OR_R9_TO_PTR_R13 CMT_ASM(".byte 0X4D, 0X09, 0X4D, 0X00 # orq %r9, (%r13)")
#define OR_R9_TO_PTR_R14 CMT_ASM(".byte 0X4D, 0X09, 0X0E # orq %r9, (%r14)")
#define OR_R9_TO_PTR_R15 CMT_ASM(".byte 0X4D, 0X09, 0X0F # orq %r9, (%r15)")
#define OR_R9_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X09, 0X08 # orq %r9, (%eax)")
#define OR_R9_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X09, 0X0B # orq %r9, (%ebx)")
#define OR_R9_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X09, 0X09 # orq %r9, (%ecx)")
#define OR_R9_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X09, 0X0A # orq %r9, (%edx)")
#define OR_R9_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X09, 0X0F # orq %r9, (%edi)")
#define OR_R9_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X09, 0X0E # orq %r9, (%esi)")
#define OR_R9_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X09, 0X4D, 0X00 # orq %r9, (%ebp)")
#define OR_R9_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X09, 0X0C, 0X24 # orq %r9, (%esp)")

#define OR_R10_TO_PTR_RAX CMT_ASM(".byte 0X4C, 0X09, 0X10 # orq %r10, (%rax)")
#define OR_R10_TO_PTR_RBX CMT_ASM(".byte 0X4C, 0X09, 0X13 # orq %r10, (%rbx)")
#define OR_R10_TO_PTR_RCX CMT_ASM(".byte 0X4C, 0X09, 0X11 # orq %r10, (%rcx)")
#define OR_R10_TO_PTR_RDX CMT_ASM(".byte 0X4C, 0X09, 0X12 # orq %r10, (%rdx)")
#define OR_R10_TO_PTR_RDI CMT_ASM(".byte 0X4C, 0X09, 0X17 # orq %r10, (%rdi)")
#define OR_R10_TO_PTR_RSI CMT_ASM(".byte 0X4C, 0X09, 0X16 # orq %r10, (%rsi)")
#define OR_R10_TO_PTR_RBP CMT_ASM(".byte 0X4C, 0X09, 0X55, 0X00 # orq %r10, (%rbp)")
#define OR_R10_TO_PTR_RSP CMT_ASM(".byte 0X4C, 0X09, 0X14, 0X24 # orq %r10, (%rsp)")
#define OR_R10_TO_PTR_R8 CMT_ASM(".byte 0X4D, 0X09, 0X10 # orq %r10, (%r8)")
#define OR_R10_TO_PTR_R9 CMT_ASM(".byte 0X4D, 0X09, 0X11 # orq %r10, (%r9)")
#define OR_R10_TO_PTR_R10 CMT_ASM(".byte 0X4D, 0X09, 0X12 # orq %r10, (%r10)")
#define OR_R10_TO_PTR_R11 CMT_ASM(".byte 0X4D, 0X09, 0X13 # orq %r10, (%r11)")
#define OR_R10_TO_PTR_R12 CMT_ASM(".byte 0X4D, 0X09, 0X14, 0X24 # orq %r10, (%r12)")
#define OR_R10_TO_PTR_R13 CMT_ASM(".byte 0X4D, 0X09, 0X55, 0X00 # orq %r10, (%r13)")
#define OR_R10_TO_PTR_R14 CMT_ASM(".byte 0X4D, 0X09, 0X16 # orq %r10, (%r14)")
#define OR_R10_TO_PTR_R15 CMT_ASM(".byte 0X4D, 0X09, 0X17 # orq %r10, (%r15)")
#define OR_R10_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X09, 0X10 # orq %r10, (%eax)")
#define OR_R10_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X09, 0X13 # orq %r10, (%ebx)")
#define OR_R10_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X09, 0X11 # orq %r10, (%ecx)")
#define OR_R10_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X09, 0X12 # orq %r10, (%edx)")
#define OR_R10_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X09, 0X17 # orq %r10, (%edi)")
#define OR_R10_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X09, 0X16 # orq %r10, (%esi)")
#define OR_R10_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X09, 0X55, 0X00 # orq %r10, (%ebp)")
#define OR_R10_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X09, 0X14, 0X24 # orq %r10, (%esp)")

#define OR_R11_TO_PTR_RAX CMT_ASM(".byte 0X4C, 0X09, 0X18 # orq %r11, (%rax)")
#define OR_R11_TO_PTR_RBX CMT_ASM(".byte 0X4C, 0X09, 0X1B # orq %r11, (%rbx)")
#define OR_R11_TO_PTR_RCX CMT_ASM(".byte 0X4C, 0X09, 0X19 # orq %r11, (%rcx)")
#define OR_R11_TO_PTR_RDX CMT_ASM(".byte 0X4C, 0X09, 0X1A # orq %r11, (%rdx)")
#define OR_R11_TO_PTR_RDI CMT_ASM(".byte 0X4C, 0X09, 0X1F # orq %r11, (%rdi)")
#define OR_R11_TO_PTR_RSI CMT_ASM(".byte 0X4C, 0X09, 0X1E # orq %r11, (%rsi)")
#define OR_R11_TO_PTR_RBP CMT_ASM(".byte 0X4C, 0X09, 0X5D, 0X00 # orq %r11, (%rbp)")
#define OR_R11_TO_PTR_RSP CMT_ASM(".byte 0X4C, 0X09, 0X1C, 0X24 # orq %r11, (%rsp)")
#define OR_R11_TO_PTR_R8 CMT_ASM(".byte 0X4D, 0X09, 0X18 # orq %r11, (%r8)")
#define OR_R11_TO_PTR_R9 CMT_ASM(".byte 0X4D, 0X09, 0X19 # orq %r11, (%r9)")
#define OR_R11_TO_PTR_R10 CMT_ASM(".byte 0X4D, 0X09, 0X1A # orq %r11, (%r10)")
#define OR_R11_TO_PTR_R11 CMT_ASM(".byte 0X4D, 0X09, 0X1B # orq %r11, (%r11)")
#define OR_R11_TO_PTR_R12 CMT_ASM(".byte 0X4D, 0X09, 0X1C, 0X24 # orq %r11, (%r12)")
#define OR_R11_TO_PTR_R13 CMT_ASM(".byte 0X4D, 0X09, 0X5D, 0X00 # orq %r11, (%r13)")
#define OR_R11_TO_PTR_R14 CMT_ASM(".byte 0X4D, 0X09, 0X1E # orq %r11, (%r14)")
#define OR_R11_TO_PTR_R15 CMT_ASM(".byte 0X4D, 0X09, 0X1F # orq %r11, (%r15)")
#define OR_R11_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X09, 0X18 # orq %r11, (%eax)")
#define OR_R11_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X09, 0X1B # orq %r11, (%ebx)")
#define OR_R11_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X09, 0X19 # orq %r11, (%ecx)")
#define OR_R11_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X09, 0X1A # orq %r11, (%edx)")
#define OR_R11_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X09, 0X1F # orq %r11, (%edi)")
#define OR_R11_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X09, 0X1E # orq %r11, (%esi)")
#define OR_R11_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X09, 0X5D, 0X00 # orq %r11, (%ebp)")
#define OR_R11_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X09, 0X1C, 0X24 # orq %r11, (%esp)")

#define OR_R12_TO_PTR_RAX CMT_ASM(".byte 0X4C, 0X09, 0X20 # orq %r12, (%rax)")
#define OR_R12_TO_PTR_RBX CMT_ASM(".byte 0X4C, 0X09, 0X23 # orq %r12, (%rbx)")
#define OR_R12_TO_PTR_RCX CMT_ASM(".byte 0X4C, 0X09, 0X21 # orq %r12, (%rcx)")
#define OR_R12_TO_PTR_RDX CMT_ASM(".byte 0X4C, 0X09, 0X22 # orq %r12, (%rdx)")
#define OR_R12_TO_PTR_RDI CMT_ASM(".byte 0X4C, 0X09, 0X27 # orq %r12, (%rdi)")
#define OR_R12_TO_PTR_RSI CMT_ASM(".byte 0X4C, 0X09, 0X26 # orq %r12, (%rsi)")
#define OR_R12_TO_PTR_RBP CMT_ASM(".byte 0X4C, 0X09, 0X65, 0X00 # orq %r12, (%rbp)")
#define OR_R12_TO_PTR_RSP CMT_ASM(".byte 0X4C, 0X09, 0X24, 0X24 # orq %r12, (%rsp)")
#define OR_R12_TO_PTR_R8 CMT_ASM(".byte 0X4D, 0X09, 0X20 # orq %r12, (%r8)")
#define OR_R12_TO_PTR_R9 CMT_ASM(".byte 0X4D, 0X09, 0X21 # orq %r12, (%r9)")
#define OR_R12_TO_PTR_R10 CMT_ASM(".byte 0X4D, 0X09, 0X22 # orq %r12, (%r10)")
#define OR_R12_TO_PTR_R11 CMT_ASM(".byte 0X4D, 0X09, 0X23 # orq %r12, (%r11)")
#define OR_R12_TO_PTR_R12 CMT_ASM(".byte 0X4D, 0X09, 0X24, 0X24 # orq %r12, (%r12)")
#define OR_R12_TO_PTR_R13 CMT_ASM(".byte 0X4D, 0X09, 0X65, 0X00 # orq %r12, (%r13)")
#define OR_R12_TO_PTR_R14 CMT_ASM(".byte 0X4D, 0X09, 0X26 # orq %r12, (%r14)")
#define OR_R12_TO_PTR_R15 CMT_ASM(".byte 0X4D, 0X09, 0X27 # orq %r12, (%r15)")
#define OR_R12_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X09, 0X20 # orq %r12, (%eax)")
#define OR_R12_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X09, 0X23 # orq %r12, (%ebx)")
#define OR_R12_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X09, 0X21 # orq %r12, (%ecx)")
#define OR_R12_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X09, 0X22 # orq %r12, (%edx)")
#define OR_R12_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X09, 0X27 # orq %r12, (%edi)")
#define OR_R12_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X09, 0X26 # orq %r12, (%esi)")
#define OR_R12_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X09, 0X65, 0X00 # orq %r12, (%ebp)")
#define OR_R12_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X09, 0X24, 0X24 # orq %r12, (%esp)")

#define OR_R13_TO_PTR_RAX CMT_ASM(".byte 0X4C, 0X09, 0X28 # orq %r13, (%rax)")
#define OR_R13_TO_PTR_RBX CMT_ASM(".byte 0X4C, 0X09, 0X2B # orq %r13, (%rbx)")
#define OR_R13_TO_PTR_RCX CMT_ASM(".byte 0X4C, 0X09, 0X29 # orq %r13, (%rcx)")
#define OR_R13_TO_PTR_RDX CMT_ASM(".byte 0X4C, 0X09, 0X2A # orq %r13, (%rdx)")
#define OR_R13_TO_PTR_RDI CMT_ASM(".byte 0X4C, 0X09, 0X2F # orq %r13, (%rdi)")
#define OR_R13_TO_PTR_RSI CMT_ASM(".byte 0X4C, 0X09, 0X2E # orq %r13, (%rsi)")
#define OR_R13_TO_PTR_RBP CMT_ASM(".byte 0X4C, 0X09, 0X6D, 0X00 # orq %r13, (%rbp)")
#define OR_R13_TO_PTR_RSP CMT_ASM(".byte 0X4C, 0X09, 0X2C, 0X24 # orq %r13, (%rsp)")
#define OR_R13_TO_PTR_R8 CMT_ASM(".byte 0X4D, 0X09, 0X28 # orq %r13, (%r8)")
#define OR_R13_TO_PTR_R9 CMT_ASM(".byte 0X4D, 0X09, 0X29 # orq %r13, (%r9)")
#define OR_R13_TO_PTR_R10 CMT_ASM(".byte 0X4D, 0X09, 0X2A # orq %r13, (%r10)")
#define OR_R13_TO_PTR_R11 CMT_ASM(".byte 0X4D, 0X09, 0X2B # orq %r13, (%r11)")
#define OR_R13_TO_PTR_R12 CMT_ASM(".byte 0X4D, 0X09, 0X2C, 0X24 # orq %r13, (%r12)")
#define OR_R13_TO_PTR_R13 CMT_ASM(".byte 0X4D, 0X09, 0X6D, 0X00 # orq %r13, (%r13)")
#define OR_R13_TO_PTR_R14 CMT_ASM(".byte 0X4D, 0X09, 0X2E # orq %r13, (%r14)")
#define OR_R13_TO_PTR_R15 CMT_ASM(".byte 0X4D, 0X09, 0X2F # orq %r13, (%r15)")
#define OR_R13_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X09, 0X28 # orq %r13, (%eax)")
#define OR_R13_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X09, 0X2B # orq %r13, (%ebx)")
#define OR_R13_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X09, 0X29 # orq %r13, (%ecx)")
#define OR_R13_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X09, 0X2A # orq %r13, (%edx)")
#define OR_R13_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X09, 0X2F # orq %r13, (%edi)")
#define OR_R13_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X09, 0X2E # orq %r13, (%esi)")
#define OR_R13_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X09, 0X6D, 0X00 # orq %r13, (%ebp)")
#define OR_R13_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X09, 0X2C, 0X24 # orq %r13, (%esp)")

#define OR_R14_TO_PTR_RAX CMT_ASM(".byte 0X4C, 0X09, 0X30 # orq %r14, (%rax)")
#define OR_R14_TO_PTR_RBX CMT_ASM(".byte 0X4C, 0X09, 0X33 # orq %r14, (%rbx)")
#define OR_R14_TO_PTR_RCX CMT_ASM(".byte 0X4C, 0X09, 0X31 # orq %r14, (%rcx)")
#define OR_R14_TO_PTR_RDX CMT_ASM(".byte 0X4C, 0X09, 0X32 # orq %r14, (%rdx)")
#define OR_R14_TO_PTR_RDI CMT_ASM(".byte 0X4C, 0X09, 0X37 # orq %r14, (%rdi)")
#define OR_R14_TO_PTR_RSI CMT_ASM(".byte 0X4C, 0X09, 0X36 # orq %r14, (%rsi)")
#define OR_R14_TO_PTR_RBP CMT_ASM(".byte 0X4C, 0X09, 0X75, 0X00 # orq %r14, (%rbp)")
#define OR_R14_TO_PTR_RSP CMT_ASM(".byte 0X4C, 0X09, 0X34, 0X24 # orq %r14, (%rsp)")
#define OR_R14_TO_PTR_R8 CMT_ASM(".byte 0X4D, 0X09, 0X30 # orq %r14, (%r8)")
#define OR_R14_TO_PTR_R9 CMT_ASM(".byte 0X4D, 0X09, 0X31 # orq %r14, (%r9)")
#define OR_R14_TO_PTR_R10 CMT_ASM(".byte 0X4D, 0X09, 0X32 # orq %r14, (%r10)")
#define OR_R14_TO_PTR_R11 CMT_ASM(".byte 0X4D, 0X09, 0X33 # orq %r14, (%r11)")
#define OR_R14_TO_PTR_R12 CMT_ASM(".byte 0X4D, 0X09, 0X34, 0X24 # orq %r14, (%r12)")
#define OR_R14_TO_PTR_R13 CMT_ASM(".byte 0X4D, 0X09, 0X75, 0X00 # orq %r14, (%r13)")
#define OR_R14_TO_PTR_R14 CMT_ASM(".byte 0X4D, 0X09, 0X36 # orq %r14, (%r14)")
#define OR_R14_TO_PTR_R15 CMT_ASM(".byte 0X4D, 0X09, 0X37 # orq %r14, (%r15)")
#define OR_R14_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X09, 0X30 # orq %r14, (%eax)")
#define OR_R14_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X09, 0X33 # orq %r14, (%ebx)")
#define OR_R14_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X09, 0X31 # orq %r14, (%ecx)")
#define OR_R14_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X09, 0X32 # orq %r14, (%edx)")
#define OR_R14_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X09, 0X37 # orq %r14, (%edi)")
#define OR_R14_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X09, 0X36 # orq %r14, (%esi)")
#define OR_R14_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X09, 0X75, 0X00 # orq %r14, (%ebp)")
#define OR_R14_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X09, 0X34, 0X24 # orq %r14, (%esp)")

#define OR_R15_TO_PTR_RAX CMT_ASM(".byte 0X4C, 0X09, 0X38 # orq %r15, (%rax)")
#define OR_R15_TO_PTR_RBX CMT_ASM(".byte 0X4C, 0X09, 0X3B # orq %r15, (%rbx)")
#define OR_R15_TO_PTR_RCX CMT_ASM(".byte 0X4C, 0X09, 0X39 # orq %r15, (%rcx)")
#define OR_R15_TO_PTR_RDX CMT_ASM(".byte 0X4C, 0X09, 0X3A # orq %r15, (%rdx)")
#define OR_R15_TO_PTR_RDI CMT_ASM(".byte 0X4C, 0X09, 0X3F # orq %r15, (%rdi)")
#define OR_R15_TO_PTR_RSI CMT_ASM(".byte 0X4C, 0X09, 0X3E # orq %r15, (%rsi)")
#define OR_R15_TO_PTR_RBP CMT_ASM(".byte 0X4C, 0X09, 0X7D, 0X00 # orq %r15, (%rbp)")
#define OR_R15_TO_PTR_RSP CMT_ASM(".byte 0X4C, 0X09, 0X3C, 0X24 # orq %r15, (%rsp)")
#define OR_R15_TO_PTR_R8 CMT_ASM(".byte 0X4D, 0X09, 0X38 # orq %r15, (%r8)")
#define OR_R15_TO_PTR_R9 CMT_ASM(".byte 0X4D, 0X09, 0X39 # orq %r15, (%r9)")
#define OR_R15_TO_PTR_R10 CMT_ASM(".byte 0X4D, 0X09, 0X3A # orq %r15, (%r10)")
#define OR_R15_TO_PTR_R11 CMT_ASM(".byte 0X4D, 0X09, 0X3B # orq %r15, (%r11)")
#define OR_R15_TO_PTR_R12 CMT_ASM(".byte 0X4D, 0X09, 0X3C, 0X24 # orq %r15, (%r12)")
#define OR_R15_TO_PTR_R13 CMT_ASM(".byte 0X4D, 0X09, 0X7D, 0X00 # orq %r15, (%r13)")
#define OR_R15_TO_PTR_R14 CMT_ASM(".byte 0X4D, 0X09, 0X3E # orq %r15, (%r14)")
#define OR_R15_TO_PTR_R15 CMT_ASM(".byte 0X4D, 0X09, 0X3F # orq %r15, (%r15)")
#define OR_R15_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X09, 0X38 # orq %r15, (%eax)")
#define OR_R15_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X09, 0X3B # orq %r15, (%ebx)")
#define OR_R15_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X09, 0X39 # orq %r15, (%ecx)")
#define OR_R15_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X09, 0X3A # orq %r15, (%edx)")
#define OR_R15_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X09, 0X3F # orq %r15, (%edi)")
#define OR_R15_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X09, 0X3E # orq %r15, (%esi)")
#define OR_R15_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X09, 0X7D, 0X00 # orq %r15, (%ebp)")
#define OR_R15_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X09, 0X3C, 0X24 # orq %r15, (%esp)")

#define OR_RAX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X0B, 0X80 # orq " _(VALUE) "(%rax), %rax")\
	CMT_ASM(".long " _(VALUE))
#define OR_RAX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X0B, 0X83 # orq " _(VALUE) "(%rbx), %rax")\
	CMT_ASM(".long " _(VALUE))
#define OR_RAX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X0B, 0X81 # orq " _(VALUE) "(%rcx), %rax")\
	CMT_ASM(".long " _(VALUE))
#define OR_RAX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X0B, 0X82 # orq " _(VALUE) "(%rdx), %rax")\
	CMT_ASM(".long " _(VALUE))
#define OR_RAX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X0B, 0X87 # orq " _(VALUE) "(%rdi), %rax")\
	CMT_ASM(".long " _(VALUE))
#define OR_RAX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X0B, 0X86 # orq " _(VALUE) "(%rsi), %rax")\
	CMT_ASM(".long " _(VALUE))
#define OR_RAX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X0B, 0X85 # orq " _(VALUE) "(%rbp), %rax")\
	CMT_ASM(".long " _(VALUE))
#define OR_RAX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X0B, 0X84, 0X24 # orq " _(VALUE) "(%rsp), %rax")\
	CMT_ASM(".long " _(VALUE))
#define OR_RAX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X0B, 0X80 # orq " _(VALUE) "(%r8), %rax")\
	CMT_ASM(".long " _(VALUE))
#define OR_RAX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X0B, 0X81 # orq " _(VALUE) "(%r9), %rax")\
	CMT_ASM(".long " _(VALUE))
#define OR_RAX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X0B, 0X82 # orq " _(VALUE) "(%r10), %rax")\
	CMT_ASM(".long " _(VALUE))
#define OR_RAX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X0B, 0X83 # orq " _(VALUE) "(%r11), %rax")\
	CMT_ASM(".long " _(VALUE))
#define OR_RAX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X0B, 0X84, 0X24 # orq " _(VALUE) "(%r12), %rax")\
	CMT_ASM(".long " _(VALUE))
#define OR_RAX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X0B, 0X85 # orq " _(VALUE) "(%r13), %rax")\
	CMT_ASM(".long " _(VALUE))
#define OR_RAX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X0B, 0X86 # orq " _(VALUE) "(%r14), %rax")\
	CMT_ASM(".long " _(VALUE))
#define OR_RAX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X0B, 0X87 # orq " _(VALUE) "(%r15), %rax")\
	CMT_ASM(".long " _(VALUE))
#define OR_RAX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X0B, 0X80 # orq " _(VALUE) "(%eax), %rax")\
	CMT_ASM(".long " _(VALUE))
#define OR_RAX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X0B, 0X83 # orq " _(VALUE) "(%ebx), %rax")\
	CMT_ASM(".long " _(VALUE))
#define OR_RAX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X0B, 0X81 # orq " _(VALUE) "(%ecx), %rax")\
	CMT_ASM(".long " _(VALUE))
#define OR_RAX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X0B, 0X82 # orq " _(VALUE) "(%edx), %rax")\
	CMT_ASM(".long " _(VALUE))
#define OR_RAX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X0B, 0X87 # orq " _(VALUE) "(%edi), %rax")\
	CMT_ASM(".long " _(VALUE))
#define OR_RAX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X0B, 0X86 # orq " _(VALUE) "(%esi), %rax")\
	CMT_ASM(".long " _(VALUE))
#define OR_RAX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X0B, 0X85 # orq " _(VALUE) "(%ebp), %rax")\
	CMT_ASM(".long " _(VALUE))
#define OR_RAX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X0B, 0X84, 0X24 # orq " _(VALUE) "(%esp), %rax")\
	CMT_ASM(".long " _(VALUE))

#define OR_RBX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X0B, 0X98 # orq " _(VALUE) "(%rax), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define OR_RBX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X0B, 0X9B # orq " _(VALUE) "(%rbx), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define OR_RBX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X0B, 0X99 # orq " _(VALUE) "(%rcx), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define OR_RBX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X0B, 0X9A # orq " _(VALUE) "(%rdx), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define OR_RBX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X0B, 0X9F # orq " _(VALUE) "(%rdi), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define OR_RBX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X0B, 0X9E # orq " _(VALUE) "(%rsi), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define OR_RBX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X0B, 0X9D # orq " _(VALUE) "(%rbp), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define OR_RBX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X0B, 0X9C, 0X24 # orq " _(VALUE) "(%rsp), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define OR_RBX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X0B, 0X98 # orq " _(VALUE) "(%r8), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define OR_RBX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X0B, 0X99 # orq " _(VALUE) "(%r9), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define OR_RBX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X0B, 0X9A # orq " _(VALUE) "(%r10), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define OR_RBX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X0B, 0X9B # orq " _(VALUE) "(%r11), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define OR_RBX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X0B, 0X9C, 0X24 # orq " _(VALUE) "(%r12), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define OR_RBX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X0B, 0X9D # orq " _(VALUE) "(%r13), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define OR_RBX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X0B, 0X9E # orq " _(VALUE) "(%r14), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define OR_RBX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X0B, 0X9F # orq " _(VALUE) "(%r15), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define OR_RBX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X0B, 0X98 # orq " _(VALUE) "(%eax), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define OR_RBX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X0B, 0X9B # orq " _(VALUE) "(%ebx), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define OR_RBX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X0B, 0X99 # orq " _(VALUE) "(%ecx), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define OR_RBX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X0B, 0X9A # orq " _(VALUE) "(%edx), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define OR_RBX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X0B, 0X9F # orq " _(VALUE) "(%edi), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define OR_RBX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X0B, 0X9E # orq " _(VALUE) "(%esi), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define OR_RBX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X0B, 0X9D # orq " _(VALUE) "(%ebp), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define OR_RBX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X0B, 0X9C, 0X24 # orq " _(VALUE) "(%esp), %rbx")\
	CMT_ASM(".long " _(VALUE))

#define OR_RCX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X0B, 0X88 # orq " _(VALUE) "(%rax), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define OR_RCX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X0B, 0X8B # orq " _(VALUE) "(%rbx), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define OR_RCX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X0B, 0X89 # orq " _(VALUE) "(%rcx), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define OR_RCX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X0B, 0X8A # orq " _(VALUE) "(%rdx), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define OR_RCX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X0B, 0X8F # orq " _(VALUE) "(%rdi), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define OR_RCX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X0B, 0X8E # orq " _(VALUE) "(%rsi), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define OR_RCX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X0B, 0X8D # orq " _(VALUE) "(%rbp), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define OR_RCX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X0B, 0X8C, 0X24 # orq " _(VALUE) "(%rsp), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define OR_RCX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X0B, 0X88 # orq " _(VALUE) "(%r8), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define OR_RCX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X0B, 0X89 # orq " _(VALUE) "(%r9), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define OR_RCX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X0B, 0X8A # orq " _(VALUE) "(%r10), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define OR_RCX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X0B, 0X8B # orq " _(VALUE) "(%r11), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define OR_RCX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X0B, 0X8C, 0X24 # orq " _(VALUE) "(%r12), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define OR_RCX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X0B, 0X8D # orq " _(VALUE) "(%r13), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define OR_RCX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X0B, 0X8E # orq " _(VALUE) "(%r14), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define OR_RCX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X0B, 0X8F # orq " _(VALUE) "(%r15), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define OR_RCX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X0B, 0X88 # orq " _(VALUE) "(%eax), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define OR_RCX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X0B, 0X8B # orq " _(VALUE) "(%ebx), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define OR_RCX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X0B, 0X89 # orq " _(VALUE) "(%ecx), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define OR_RCX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X0B, 0X8A # orq " _(VALUE) "(%edx), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define OR_RCX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X0B, 0X8F # orq " _(VALUE) "(%edi), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define OR_RCX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X0B, 0X8E # orq " _(VALUE) "(%esi), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define OR_RCX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X0B, 0X8D # orq " _(VALUE) "(%ebp), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define OR_RCX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X0B, 0X8C, 0X24 # orq " _(VALUE) "(%esp), %rcx")\
	CMT_ASM(".long " _(VALUE))

#define OR_RDX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X0B, 0X90 # orq " _(VALUE) "(%rax), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define OR_RDX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X0B, 0X93 # orq " _(VALUE) "(%rbx), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define OR_RDX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X0B, 0X91 # orq " _(VALUE) "(%rcx), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define OR_RDX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X0B, 0X92 # orq " _(VALUE) "(%rdx), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define OR_RDX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X0B, 0X97 # orq " _(VALUE) "(%rdi), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define OR_RDX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X0B, 0X96 # orq " _(VALUE) "(%rsi), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define OR_RDX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X0B, 0X95 # orq " _(VALUE) "(%rbp), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define OR_RDX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X0B, 0X94, 0X24 # orq " _(VALUE) "(%rsp), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define OR_RDX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X0B, 0X90 # orq " _(VALUE) "(%r8), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define OR_RDX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X0B, 0X91 # orq " _(VALUE) "(%r9), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define OR_RDX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X0B, 0X92 # orq " _(VALUE) "(%r10), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define OR_RDX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X0B, 0X93 # orq " _(VALUE) "(%r11), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define OR_RDX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X0B, 0X94, 0X24 # orq " _(VALUE) "(%r12), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define OR_RDX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X0B, 0X95 # orq " _(VALUE) "(%r13), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define OR_RDX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X0B, 0X96 # orq " _(VALUE) "(%r14), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define OR_RDX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X0B, 0X97 # orq " _(VALUE) "(%r15), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define OR_RDX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X0B, 0X90 # orq " _(VALUE) "(%eax), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define OR_RDX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X0B, 0X93 # orq " _(VALUE) "(%ebx), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define OR_RDX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X0B, 0X91 # orq " _(VALUE) "(%ecx), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define OR_RDX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X0B, 0X92 # orq " _(VALUE) "(%edx), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define OR_RDX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X0B, 0X97 # orq " _(VALUE) "(%edi), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define OR_RDX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X0B, 0X96 # orq " _(VALUE) "(%esi), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define OR_RDX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X0B, 0X95 # orq " _(VALUE) "(%ebp), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define OR_RDX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X0B, 0X94, 0X24 # orq " _(VALUE) "(%esp), %rdx")\
	CMT_ASM(".long " _(VALUE))

#define OR_RDI_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X0B, 0XB8 # orq " _(VALUE) "(%rax), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define OR_RDI_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X0B, 0XBB # orq " _(VALUE) "(%rbx), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define OR_RDI_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X0B, 0XB9 # orq " _(VALUE) "(%rcx), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define OR_RDI_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X0B, 0XBA # orq " _(VALUE) "(%rdx), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define OR_RDI_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X0B, 0XBF # orq " _(VALUE) "(%rdi), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define OR_RDI_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X0B, 0XBE # orq " _(VALUE) "(%rsi), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define OR_RDI_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X0B, 0XBD # orq " _(VALUE) "(%rbp), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define OR_RDI_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X0B, 0XBC, 0X24 # orq " _(VALUE) "(%rsp), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define OR_RDI_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X0B, 0XB8 # orq " _(VALUE) "(%r8), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define OR_RDI_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X0B, 0XB9 # orq " _(VALUE) "(%r9), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define OR_RDI_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X0B, 0XBA # orq " _(VALUE) "(%r10), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define OR_RDI_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X0B, 0XBB # orq " _(VALUE) "(%r11), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define OR_RDI_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X0B, 0XBC, 0X24 # orq " _(VALUE) "(%r12), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define OR_RDI_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X0B, 0XBD # orq " _(VALUE) "(%r13), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define OR_RDI_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X0B, 0XBE # orq " _(VALUE) "(%r14), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define OR_RDI_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X0B, 0XBF # orq " _(VALUE) "(%r15), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define OR_RDI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X0B, 0XB8 # orq " _(VALUE) "(%eax), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define OR_RDI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X0B, 0XBB # orq " _(VALUE) "(%ebx), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define OR_RDI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X0B, 0XB9 # orq " _(VALUE) "(%ecx), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define OR_RDI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X0B, 0XBA # orq " _(VALUE) "(%edx), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define OR_RDI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X0B, 0XBF # orq " _(VALUE) "(%edi), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define OR_RDI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X0B, 0XBE # orq " _(VALUE) "(%esi), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define OR_RDI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X0B, 0XBD # orq " _(VALUE) "(%ebp), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define OR_RDI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X0B, 0XBC, 0X24 # orq " _(VALUE) "(%esp), %rdi")\
	CMT_ASM(".long " _(VALUE))

#define OR_RSI_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X0B, 0XB0 # orq " _(VALUE) "(%rax), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define OR_RSI_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X0B, 0XB3 # orq " _(VALUE) "(%rbx), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define OR_RSI_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X0B, 0XB1 # orq " _(VALUE) "(%rcx), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define OR_RSI_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X0B, 0XB2 # orq " _(VALUE) "(%rdx), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define OR_RSI_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X0B, 0XB7 # orq " _(VALUE) "(%rdi), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define OR_RSI_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X0B, 0XB6 # orq " _(VALUE) "(%rsi), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define OR_RSI_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X0B, 0XB5 # orq " _(VALUE) "(%rbp), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define OR_RSI_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X0B, 0XB4, 0X24 # orq " _(VALUE) "(%rsp), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define OR_RSI_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X0B, 0XB0 # orq " _(VALUE) "(%r8), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define OR_RSI_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X0B, 0XB1 # orq " _(VALUE) "(%r9), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define OR_RSI_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X0B, 0XB2 # orq " _(VALUE) "(%r10), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define OR_RSI_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X0B, 0XB3 # orq " _(VALUE) "(%r11), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define OR_RSI_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X0B, 0XB4, 0X24 # orq " _(VALUE) "(%r12), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define OR_RSI_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X0B, 0XB5 # orq " _(VALUE) "(%r13), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define OR_RSI_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X0B, 0XB6 # orq " _(VALUE) "(%r14), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define OR_RSI_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X0B, 0XB7 # orq " _(VALUE) "(%r15), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define OR_RSI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X0B, 0XB0 # orq " _(VALUE) "(%eax), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define OR_RSI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X0B, 0XB3 # orq " _(VALUE) "(%ebx), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define OR_RSI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X0B, 0XB1 # orq " _(VALUE) "(%ecx), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define OR_RSI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X0B, 0XB2 # orq " _(VALUE) "(%edx), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define OR_RSI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X0B, 0XB7 # orq " _(VALUE) "(%edi), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define OR_RSI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X0B, 0XB6 # orq " _(VALUE) "(%esi), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define OR_RSI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X0B, 0XB5 # orq " _(VALUE) "(%ebp), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define OR_RSI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X0B, 0XB4, 0X24 # orq " _(VALUE) "(%esp), %rsi")\
	CMT_ASM(".long " _(VALUE))

#define OR_RBP_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X0B, 0XA8 # orq " _(VALUE) "(%rax), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define OR_RBP_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X0B, 0XAB # orq " _(VALUE) "(%rbx), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define OR_RBP_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X0B, 0XA9 # orq " _(VALUE) "(%rcx), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define OR_RBP_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X0B, 0XAA # orq " _(VALUE) "(%rdx), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define OR_RBP_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X0B, 0XAF # orq " _(VALUE) "(%rdi), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define OR_RBP_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X0B, 0XAE # orq " _(VALUE) "(%rsi), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define OR_RBP_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X0B, 0XAD # orq " _(VALUE) "(%rbp), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define OR_RBP_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X0B, 0XAC, 0X24 # orq " _(VALUE) "(%rsp), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define OR_RBP_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X0B, 0XA8 # orq " _(VALUE) "(%r8), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define OR_RBP_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X0B, 0XA9 # orq " _(VALUE) "(%r9), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define OR_RBP_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X0B, 0XAA # orq " _(VALUE) "(%r10), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define OR_RBP_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X0B, 0XAB # orq " _(VALUE) "(%r11), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define OR_RBP_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X0B, 0XAC, 0X24 # orq " _(VALUE) "(%r12), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define OR_RBP_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X0B, 0XAD # orq " _(VALUE) "(%r13), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define OR_RBP_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X0B, 0XAE # orq " _(VALUE) "(%r14), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define OR_RBP_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X0B, 0XAF # orq " _(VALUE) "(%r15), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define OR_RBP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X0B, 0XA8 # orq " _(VALUE) "(%eax), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define OR_RBP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X0B, 0XAB # orq " _(VALUE) "(%ebx), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define OR_RBP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X0B, 0XA9 # orq " _(VALUE) "(%ecx), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define OR_RBP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X0B, 0XAA # orq " _(VALUE) "(%edx), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define OR_RBP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X0B, 0XAF # orq " _(VALUE) "(%edi), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define OR_RBP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X0B, 0XAE # orq " _(VALUE) "(%esi), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define OR_RBP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X0B, 0XAD # orq " _(VALUE) "(%ebp), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define OR_RBP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X0B, 0XAC, 0X24 # orq " _(VALUE) "(%esp), %rbp")\
	CMT_ASM(".long " _(VALUE))

#define OR_RSP_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X0B, 0XA0 # orq " _(VALUE) "(%rax), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define OR_RSP_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X0B, 0XA3 # orq " _(VALUE) "(%rbx), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define OR_RSP_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X0B, 0XA1 # orq " _(VALUE) "(%rcx), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define OR_RSP_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X0B, 0XA2 # orq " _(VALUE) "(%rdx), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define OR_RSP_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X0B, 0XA7 # orq " _(VALUE) "(%rdi), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define OR_RSP_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X0B, 0XA6 # orq " _(VALUE) "(%rsi), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define OR_RSP_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X0B, 0XA5 # orq " _(VALUE) "(%rbp), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define OR_RSP_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X0B, 0XA4, 0X24 # orq " _(VALUE) "(%rsp), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define OR_RSP_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X0B, 0XA0 # orq " _(VALUE) "(%r8), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define OR_RSP_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X0B, 0XA1 # orq " _(VALUE) "(%r9), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define OR_RSP_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X0B, 0XA2 # orq " _(VALUE) "(%r10), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define OR_RSP_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X0B, 0XA3 # orq " _(VALUE) "(%r11), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define OR_RSP_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X0B, 0XA4, 0X24 # orq " _(VALUE) "(%r12), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define OR_RSP_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X0B, 0XA5 # orq " _(VALUE) "(%r13), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define OR_RSP_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X0B, 0XA6 # orq " _(VALUE) "(%r14), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define OR_RSP_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X0B, 0XA7 # orq " _(VALUE) "(%r15), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define OR_RSP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X0B, 0XA0 # orq " _(VALUE) "(%eax), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define OR_RSP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X0B, 0XA3 # orq " _(VALUE) "(%ebx), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define OR_RSP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X0B, 0XA1 # orq " _(VALUE) "(%ecx), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define OR_RSP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X0B, 0XA2 # orq " _(VALUE) "(%edx), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define OR_RSP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X0B, 0XA7 # orq " _(VALUE) "(%edi), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define OR_RSP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X0B, 0XA6 # orq " _(VALUE) "(%esi), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define OR_RSP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X0B, 0XA5 # orq " _(VALUE) "(%ebp), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define OR_RSP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X0B, 0XA4, 0X24 # orq " _(VALUE) "(%esp), %rsp")\
	CMT_ASM(".long " _(VALUE))

#define OR_R8_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X0B, 0X80 # orq " _(VALUE) "(%rax), %r8")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X0B, 0X83 # orq " _(VALUE) "(%rbx), %r8")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X0B, 0X81 # orq " _(VALUE) "(%rcx), %r8")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X0B, 0X82 # orq " _(VALUE) "(%rdx), %r8")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X0B, 0X87 # orq " _(VALUE) "(%rdi), %r8")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X0B, 0X86 # orq " _(VALUE) "(%rsi), %r8")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X0B, 0X85 # orq " _(VALUE) "(%rbp), %r8")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X0B, 0X84, 0X24 # orq " _(VALUE) "(%rsp), %r8")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X0B, 0X80 # orq " _(VALUE) "(%r8), %r8")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X0B, 0X81 # orq " _(VALUE) "(%r9), %r8")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X0B, 0X82 # orq " _(VALUE) "(%r10), %r8")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X0B, 0X83 # orq " _(VALUE) "(%r11), %r8")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X0B, 0X84, 0X24 # orq " _(VALUE) "(%r12), %r8")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X0B, 0X85 # orq " _(VALUE) "(%r13), %r8")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X0B, 0X86 # orq " _(VALUE) "(%r14), %r8")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X0B, 0X87 # orq " _(VALUE) "(%r15), %r8")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0X80 # orq " _(VALUE) "(%eax), %r8")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0X83 # orq " _(VALUE) "(%ebx), %r8")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0X81 # orq " _(VALUE) "(%ecx), %r8")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0X82 # orq " _(VALUE) "(%edx), %r8")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0X87 # orq " _(VALUE) "(%edi), %r8")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0X86 # orq " _(VALUE) "(%esi), %r8")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0X85 # orq " _(VALUE) "(%ebp), %r8")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0X84, 0X24 # orq " _(VALUE) "(%esp), %r8")\
	CMT_ASM(".long " _(VALUE))

#define OR_R9_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X0B, 0X88 # orq " _(VALUE) "(%rax), %r9")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X0B, 0X8B # orq " _(VALUE) "(%rbx), %r9")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X0B, 0X89 # orq " _(VALUE) "(%rcx), %r9")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X0B, 0X8A # orq " _(VALUE) "(%rdx), %r9")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X0B, 0X8F # orq " _(VALUE) "(%rdi), %r9")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X0B, 0X8E # orq " _(VALUE) "(%rsi), %r9")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X0B, 0X8D # orq " _(VALUE) "(%rbp), %r9")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X0B, 0X8C, 0X24 # orq " _(VALUE) "(%rsp), %r9")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X0B, 0X88 # orq " _(VALUE) "(%r8), %r9")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X0B, 0X89 # orq " _(VALUE) "(%r9), %r9")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X0B, 0X8A # orq " _(VALUE) "(%r10), %r9")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X0B, 0X8B # orq " _(VALUE) "(%r11), %r9")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X0B, 0X8C, 0X24 # orq " _(VALUE) "(%r12), %r9")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X0B, 0X8D # orq " _(VALUE) "(%r13), %r9")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X0B, 0X8E # orq " _(VALUE) "(%r14), %r9")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X0B, 0X8F # orq " _(VALUE) "(%r15), %r9")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0X88 # orq " _(VALUE) "(%eax), %r9")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0X8B # orq " _(VALUE) "(%ebx), %r9")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0X89 # orq " _(VALUE) "(%ecx), %r9")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0X8A # orq " _(VALUE) "(%edx), %r9")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0X8F # orq " _(VALUE) "(%edi), %r9")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0X8E # orq " _(VALUE) "(%esi), %r9")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0X8D # orq " _(VALUE) "(%ebp), %r9")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0X8C, 0X24 # orq " _(VALUE) "(%esp), %r9")\
	CMT_ASM(".long " _(VALUE))

#define OR_R10_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X0B, 0X90 # orq " _(VALUE) "(%rax), %r10")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X0B, 0X93 # orq " _(VALUE) "(%rbx), %r10")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X0B, 0X91 # orq " _(VALUE) "(%rcx), %r10")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X0B, 0X92 # orq " _(VALUE) "(%rdx), %r10")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X0B, 0X97 # orq " _(VALUE) "(%rdi), %r10")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X0B, 0X96 # orq " _(VALUE) "(%rsi), %r10")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X0B, 0X95 # orq " _(VALUE) "(%rbp), %r10")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X0B, 0X94, 0X24 # orq " _(VALUE) "(%rsp), %r10")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X0B, 0X90 # orq " _(VALUE) "(%r8), %r10")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X0B, 0X91 # orq " _(VALUE) "(%r9), %r10")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X0B, 0X92 # orq " _(VALUE) "(%r10), %r10")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X0B, 0X93 # orq " _(VALUE) "(%r11), %r10")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X0B, 0X94, 0X24 # orq " _(VALUE) "(%r12), %r10")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X0B, 0X95 # orq " _(VALUE) "(%r13), %r10")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X0B, 0X96 # orq " _(VALUE) "(%r14), %r10")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X0B, 0X97 # orq " _(VALUE) "(%r15), %r10")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0X90 # orq " _(VALUE) "(%eax), %r10")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0X93 # orq " _(VALUE) "(%ebx), %r10")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0X91 # orq " _(VALUE) "(%ecx), %r10")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0X92 # orq " _(VALUE) "(%edx), %r10")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0X97 # orq " _(VALUE) "(%edi), %r10")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0X96 # orq " _(VALUE) "(%esi), %r10")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0X95 # orq " _(VALUE) "(%ebp), %r10")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0X94, 0X24 # orq " _(VALUE) "(%esp), %r10")\
	CMT_ASM(".long " _(VALUE))

#define OR_R11_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X0B, 0X98 # orq " _(VALUE) "(%rax), %r11")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X0B, 0X9B # orq " _(VALUE) "(%rbx), %r11")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X0B, 0X99 # orq " _(VALUE) "(%rcx), %r11")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X0B, 0X9A # orq " _(VALUE) "(%rdx), %r11")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X0B, 0X9F # orq " _(VALUE) "(%rdi), %r11")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X0B, 0X9E # orq " _(VALUE) "(%rsi), %r11")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X0B, 0X9D # orq " _(VALUE) "(%rbp), %r11")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X0B, 0X9C, 0X24 # orq " _(VALUE) "(%rsp), %r11")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X0B, 0X98 # orq " _(VALUE) "(%r8), %r11")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X0B, 0X99 # orq " _(VALUE) "(%r9), %r11")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X0B, 0X9A # orq " _(VALUE) "(%r10), %r11")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X0B, 0X9B # orq " _(VALUE) "(%r11), %r11")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X0B, 0X9C, 0X24 # orq " _(VALUE) "(%r12), %r11")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X0B, 0X9D # orq " _(VALUE) "(%r13), %r11")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X0B, 0X9E # orq " _(VALUE) "(%r14), %r11")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X0B, 0X9F # orq " _(VALUE) "(%r15), %r11")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0X98 # orq " _(VALUE) "(%eax), %r11")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0X9B # orq " _(VALUE) "(%ebx), %r11")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0X99 # orq " _(VALUE) "(%ecx), %r11")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0X9A # orq " _(VALUE) "(%edx), %r11")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0X9F # orq " _(VALUE) "(%edi), %r11")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0X9E # orq " _(VALUE) "(%esi), %r11")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0X9D # orq " _(VALUE) "(%ebp), %r11")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0X9C, 0X24 # orq " _(VALUE) "(%esp), %r11")\
	CMT_ASM(".long " _(VALUE))

#define OR_R12_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X0B, 0XA0 # orq " _(VALUE) "(%rax), %r12")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X0B, 0XA3 # orq " _(VALUE) "(%rbx), %r12")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X0B, 0XA1 # orq " _(VALUE) "(%rcx), %r12")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X0B, 0XA2 # orq " _(VALUE) "(%rdx), %r12")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X0B, 0XA7 # orq " _(VALUE) "(%rdi), %r12")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X0B, 0XA6 # orq " _(VALUE) "(%rsi), %r12")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X0B, 0XA5 # orq " _(VALUE) "(%rbp), %r12")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X0B, 0XA4, 0X24 # orq " _(VALUE) "(%rsp), %r12")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X0B, 0XA0 # orq " _(VALUE) "(%r8), %r12")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X0B, 0XA1 # orq " _(VALUE) "(%r9), %r12")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X0B, 0XA2 # orq " _(VALUE) "(%r10), %r12")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X0B, 0XA3 # orq " _(VALUE) "(%r11), %r12")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X0B, 0XA4, 0X24 # orq " _(VALUE) "(%r12), %r12")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X0B, 0XA5 # orq " _(VALUE) "(%r13), %r12")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X0B, 0XA6 # orq " _(VALUE) "(%r14), %r12")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X0B, 0XA7 # orq " _(VALUE) "(%r15), %r12")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0XA0 # orq " _(VALUE) "(%eax), %r12")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0XA3 # orq " _(VALUE) "(%ebx), %r12")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0XA1 # orq " _(VALUE) "(%ecx), %r12")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0XA2 # orq " _(VALUE) "(%edx), %r12")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0XA7 # orq " _(VALUE) "(%edi), %r12")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0XA6 # orq " _(VALUE) "(%esi), %r12")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0XA5 # orq " _(VALUE) "(%ebp), %r12")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0XA4, 0X24 # orq " _(VALUE) "(%esp), %r12")\
	CMT_ASM(".long " _(VALUE))

#define OR_R13_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X0B, 0XA8 # orq " _(VALUE) "(%rax), %r13")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X0B, 0XAB # orq " _(VALUE) "(%rbx), %r13")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X0B, 0XA9 # orq " _(VALUE) "(%rcx), %r13")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X0B, 0XAA # orq " _(VALUE) "(%rdx), %r13")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X0B, 0XAF # orq " _(VALUE) "(%rdi), %r13")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X0B, 0XAE # orq " _(VALUE) "(%rsi), %r13")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X0B, 0XAD # orq " _(VALUE) "(%rbp), %r13")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X0B, 0XAC, 0X24 # orq " _(VALUE) "(%rsp), %r13")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X0B, 0XA8 # orq " _(VALUE) "(%r8), %r13")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X0B, 0XA9 # orq " _(VALUE) "(%r9), %r13")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X0B, 0XAA # orq " _(VALUE) "(%r10), %r13")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X0B, 0XAB # orq " _(VALUE) "(%r11), %r13")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X0B, 0XAC, 0X24 # orq " _(VALUE) "(%r12), %r13")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X0B, 0XAD # orq " _(VALUE) "(%r13), %r13")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X0B, 0XAE # orq " _(VALUE) "(%r14), %r13")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X0B, 0XAF # orq " _(VALUE) "(%r15), %r13")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0XA8 # orq " _(VALUE) "(%eax), %r13")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0XAB # orq " _(VALUE) "(%ebx), %r13")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0XA9 # orq " _(VALUE) "(%ecx), %r13")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0XAA # orq " _(VALUE) "(%edx), %r13")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0XAF # orq " _(VALUE) "(%edi), %r13")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0XAE # orq " _(VALUE) "(%esi), %r13")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0XAD # orq " _(VALUE) "(%ebp), %r13")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0XAC, 0X24 # orq " _(VALUE) "(%esp), %r13")\
	CMT_ASM(".long " _(VALUE))

#define OR_R14_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X0B, 0XB0 # orq " _(VALUE) "(%rax), %r14")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X0B, 0XB3 # orq " _(VALUE) "(%rbx), %r14")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X0B, 0XB1 # orq " _(VALUE) "(%rcx), %r14")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X0B, 0XB2 # orq " _(VALUE) "(%rdx), %r14")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X0B, 0XB7 # orq " _(VALUE) "(%rdi), %r14")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X0B, 0XB6 # orq " _(VALUE) "(%rsi), %r14")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X0B, 0XB5 # orq " _(VALUE) "(%rbp), %r14")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X0B, 0XB4, 0X24 # orq " _(VALUE) "(%rsp), %r14")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X0B, 0XB0 # orq " _(VALUE) "(%r8), %r14")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X0B, 0XB1 # orq " _(VALUE) "(%r9), %r14")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X0B, 0XB2 # orq " _(VALUE) "(%r10), %r14")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X0B, 0XB3 # orq " _(VALUE) "(%r11), %r14")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X0B, 0XB4, 0X24 # orq " _(VALUE) "(%r12), %r14")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X0B, 0XB5 # orq " _(VALUE) "(%r13), %r14")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X0B, 0XB6 # orq " _(VALUE) "(%r14), %r14")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X0B, 0XB7 # orq " _(VALUE) "(%r15), %r14")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0XB0 # orq " _(VALUE) "(%eax), %r14")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0XB3 # orq " _(VALUE) "(%ebx), %r14")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0XB1 # orq " _(VALUE) "(%ecx), %r14")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0XB2 # orq " _(VALUE) "(%edx), %r14")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0XB7 # orq " _(VALUE) "(%edi), %r14")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0XB6 # orq " _(VALUE) "(%esi), %r14")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0XB5 # orq " _(VALUE) "(%ebp), %r14")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0XB4, 0X24 # orq " _(VALUE) "(%esp), %r14")\
	CMT_ASM(".long " _(VALUE))

#define OR_R15_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X0B, 0XB8 # orq " _(VALUE) "(%rax), %r15")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X0B, 0XBB # orq " _(VALUE) "(%rbx), %r15")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X0B, 0XB9 # orq " _(VALUE) "(%rcx), %r15")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X0B, 0XBA # orq " _(VALUE) "(%rdx), %r15")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X0B, 0XBF # orq " _(VALUE) "(%rdi), %r15")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X0B, 0XBE # orq " _(VALUE) "(%rsi), %r15")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X0B, 0XBD # orq " _(VALUE) "(%rbp), %r15")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X0B, 0XBC, 0X24 # orq " _(VALUE) "(%rsp), %r15")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X0B, 0XB8 # orq " _(VALUE) "(%r8), %r15")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X0B, 0XB9 # orq " _(VALUE) "(%r9), %r15")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X0B, 0XBA # orq " _(VALUE) "(%r10), %r15")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X0B, 0XBB # orq " _(VALUE) "(%r11), %r15")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X0B, 0XBC, 0X24 # orq " _(VALUE) "(%r12), %r15")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X0B, 0XBD # orq " _(VALUE) "(%r13), %r15")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X0B, 0XBE # orq " _(VALUE) "(%r14), %r15")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X0B, 0XBF # orq " _(VALUE) "(%r15), %r15")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0XB8 # orq " _(VALUE) "(%eax), %r15")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0XBB # orq " _(VALUE) "(%ebx), %r15")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0XB9 # orq " _(VALUE) "(%ecx), %r15")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0XBA # orq " _(VALUE) "(%edx), %r15")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0XBF # orq " _(VALUE) "(%edi), %r15")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0XBE # orq " _(VALUE) "(%esi), %r15")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0XBD # orq " _(VALUE) "(%ebp), %r15")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X0B, 0XBC, 0X24 # orq " _(VALUE) "(%esp), %r15")\
	CMT_ASM(".long " _(VALUE))

#define OR_RAX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X09, 0X80 # orq %rax, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RAX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X09, 0X83 # orq %rax, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RAX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X09, 0X81 # orq %rax, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RAX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X09, 0X82 # orq %rax, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RAX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X09, 0X87 # orq %rax, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RAX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X09, 0X86 # orq %rax, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RAX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X09, 0X85 # orq %rax, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RAX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X09, 0X84, 0X24 # orq %rax, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RAX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X09, 0X80 # orq %rax, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RAX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X09, 0X81 # orq %rax, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RAX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X09, 0X82 # orq %rax, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RAX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X09, 0X83 # orq %rax, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RAX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X09, 0X84, 0X24 # orq %rax, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RAX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X09, 0X85 # orq %rax, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RAX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X09, 0X86 # orq %rax, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RAX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X09, 0X87 # orq %rax, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RAX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X09, 0X80 # orq %rax, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RAX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X09, 0X83 # orq %rax, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RAX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X09, 0X81 # orq %rax, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RAX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X09, 0X82 # orq %rax, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RAX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X09, 0X87 # orq %rax, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RAX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X09, 0X86 # orq %rax, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RAX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X09, 0X85 # orq %rax, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RAX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X09, 0X84, 0X24 # orq %rax, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define OR_RBX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X09, 0X98 # orq %rbx, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RBX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X09, 0X9B # orq %rbx, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RBX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X09, 0X99 # orq %rbx, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RBX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X09, 0X9A # orq %rbx, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RBX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X09, 0X9F # orq %rbx, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RBX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X09, 0X9E # orq %rbx, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RBX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X09, 0X9D # orq %rbx, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RBX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X09, 0X9C, 0X24 # orq %rbx, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RBX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X09, 0X98 # orq %rbx, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RBX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X09, 0X99 # orq %rbx, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RBX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X09, 0X9A # orq %rbx, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RBX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X09, 0X9B # orq %rbx, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RBX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X09, 0X9C, 0X24 # orq %rbx, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RBX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X09, 0X9D # orq %rbx, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RBX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X09, 0X9E # orq %rbx, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RBX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X09, 0X9F # orq %rbx, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RBX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X09, 0X98 # orq %rbx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RBX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X09, 0X9B # orq %rbx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RBX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X09, 0X99 # orq %rbx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RBX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X09, 0X9A # orq %rbx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RBX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X09, 0X9F # orq %rbx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RBX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X09, 0X9E # orq %rbx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RBX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X09, 0X9D # orq %rbx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RBX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X09, 0X9C, 0X24 # orq %rbx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define OR_RCX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X09, 0X88 # orq %rcx, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RCX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X09, 0X8B # orq %rcx, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RCX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X09, 0X89 # orq %rcx, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RCX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X09, 0X8A # orq %rcx, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RCX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X09, 0X8F # orq %rcx, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RCX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X09, 0X8E # orq %rcx, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RCX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X09, 0X8D # orq %rcx, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RCX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X09, 0X8C, 0X24 # orq %rcx, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RCX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X09, 0X88 # orq %rcx, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RCX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X09, 0X89 # orq %rcx, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RCX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X09, 0X8A # orq %rcx, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RCX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X09, 0X8B # orq %rcx, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RCX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X09, 0X8C, 0X24 # orq %rcx, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RCX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X09, 0X8D # orq %rcx, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RCX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X09, 0X8E # orq %rcx, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RCX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X09, 0X8F # orq %rcx, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RCX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X09, 0X88 # orq %rcx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RCX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X09, 0X8B # orq %rcx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RCX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X09, 0X89 # orq %rcx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RCX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X09, 0X8A # orq %rcx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RCX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X09, 0X8F # orq %rcx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RCX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X09, 0X8E # orq %rcx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RCX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X09, 0X8D # orq %rcx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RCX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X09, 0X8C, 0X24 # orq %rcx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define OR_RDX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X09, 0X90 # orq %rdx, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RDX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X09, 0X93 # orq %rdx, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RDX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X09, 0X91 # orq %rdx, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RDX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X09, 0X92 # orq %rdx, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RDX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X09, 0X97 # orq %rdx, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RDX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X09, 0X96 # orq %rdx, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RDX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X09, 0X95 # orq %rdx, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RDX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X09, 0X94, 0X24 # orq %rdx, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RDX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X09, 0X90 # orq %rdx, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RDX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X09, 0X91 # orq %rdx, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RDX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X09, 0X92 # orq %rdx, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RDX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X09, 0X93 # orq %rdx, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RDX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X09, 0X94, 0X24 # orq %rdx, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RDX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X09, 0X95 # orq %rdx, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RDX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X09, 0X96 # orq %rdx, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RDX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X09, 0X97 # orq %rdx, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RDX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X09, 0X90 # orq %rdx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RDX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X09, 0X93 # orq %rdx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RDX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X09, 0X91 # orq %rdx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RDX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X09, 0X92 # orq %rdx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RDX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X09, 0X97 # orq %rdx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RDX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X09, 0X96 # orq %rdx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RDX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X09, 0X95 # orq %rdx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RDX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X09, 0X94, 0X24 # orq %rdx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define OR_RDI_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X09, 0XB8 # orq %rdi, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RDI_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X09, 0XBB # orq %rdi, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RDI_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X09, 0XB9 # orq %rdi, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RDI_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X09, 0XBA # orq %rdi, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RDI_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X09, 0XBF # orq %rdi, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RDI_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X09, 0XBE # orq %rdi, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RDI_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X09, 0XBD # orq %rdi, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RDI_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X09, 0XBC, 0X24 # orq %rdi, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RDI_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X09, 0XB8 # orq %rdi, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RDI_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X09, 0XB9 # orq %rdi, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RDI_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X09, 0XBA # orq %rdi, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RDI_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X09, 0XBB # orq %rdi, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RDI_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X09, 0XBC, 0X24 # orq %rdi, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RDI_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X09, 0XBD # orq %rdi, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RDI_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X09, 0XBE # orq %rdi, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RDI_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X09, 0XBF # orq %rdi, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RDI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X09, 0XB8 # orq %rdi, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RDI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X09, 0XBB # orq %rdi, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RDI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X09, 0XB9 # orq %rdi, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RDI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X09, 0XBA # orq %rdi, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RDI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X09, 0XBF # orq %rdi, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RDI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X09, 0XBE # orq %rdi, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RDI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X09, 0XBD # orq %rdi, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RDI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X09, 0XBC, 0X24 # orq %rdi, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define OR_RSI_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X09, 0XB0 # orq %rsi, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RSI_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X09, 0XB3 # orq %rsi, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RSI_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X09, 0XB1 # orq %rsi, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RSI_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X09, 0XB2 # orq %rsi, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RSI_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X09, 0XB7 # orq %rsi, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RSI_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X09, 0XB6 # orq %rsi, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RSI_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X09, 0XB5 # orq %rsi, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RSI_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X09, 0XB4, 0X24 # orq %rsi, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RSI_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X09, 0XB0 # orq %rsi, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RSI_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X09, 0XB1 # orq %rsi, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RSI_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X09, 0XB2 # orq %rsi, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RSI_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X09, 0XB3 # orq %rsi, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RSI_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X09, 0XB4, 0X24 # orq %rsi, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RSI_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X09, 0XB5 # orq %rsi, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RSI_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X09, 0XB6 # orq %rsi, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RSI_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X09, 0XB7 # orq %rsi, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RSI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X09, 0XB0 # orq %rsi, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RSI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X09, 0XB3 # orq %rsi, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RSI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X09, 0XB1 # orq %rsi, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RSI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X09, 0XB2 # orq %rsi, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RSI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X09, 0XB7 # orq %rsi, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RSI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X09, 0XB6 # orq %rsi, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RSI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X09, 0XB5 # orq %rsi, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RSI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X09, 0XB4, 0X24 # orq %rsi, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define OR_RBP_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X09, 0XA8 # orq %rbp, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RBP_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X09, 0XAB # orq %rbp, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RBP_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X09, 0XA9 # orq %rbp, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RBP_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X09, 0XAA # orq %rbp, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RBP_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X09, 0XAF # orq %rbp, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RBP_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X09, 0XAE # orq %rbp, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RBP_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X09, 0XAD # orq %rbp, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RBP_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X09, 0XAC, 0X24 # orq %rbp, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RBP_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X09, 0XA8 # orq %rbp, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RBP_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X09, 0XA9 # orq %rbp, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RBP_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X09, 0XAA # orq %rbp, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RBP_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X09, 0XAB # orq %rbp, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RBP_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X09, 0XAC, 0X24 # orq %rbp, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RBP_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X09, 0XAD # orq %rbp, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RBP_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X09, 0XAE # orq %rbp, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RBP_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X09, 0XAF # orq %rbp, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RBP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X09, 0XA8 # orq %rbp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RBP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X09, 0XAB # orq %rbp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RBP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X09, 0XA9 # orq %rbp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RBP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X09, 0XAA # orq %rbp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RBP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X09, 0XAF # orq %rbp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RBP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X09, 0XAE # orq %rbp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RBP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X09, 0XAD # orq %rbp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RBP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X09, 0XAC, 0X24 # orq %rbp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define OR_RSP_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X09, 0XA0 # orq %rsp, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RSP_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X09, 0XA3 # orq %rsp, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RSP_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X09, 0XA1 # orq %rsp, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RSP_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X09, 0XA2 # orq %rsp, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RSP_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X09, 0XA7 # orq %rsp, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RSP_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X09, 0XA6 # orq %rsp, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RSP_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X09, 0XA5 # orq %rsp, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RSP_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X09, 0XA4, 0X24 # orq %rsp, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RSP_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X09, 0XA0 # orq %rsp, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RSP_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X09, 0XA1 # orq %rsp, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RSP_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X09, 0XA2 # orq %rsp, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RSP_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X09, 0XA3 # orq %rsp, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RSP_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X09, 0XA4, 0X24 # orq %rsp, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RSP_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X09, 0XA5 # orq %rsp, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RSP_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X09, 0XA6 # orq %rsp, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RSP_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X09, 0XA7 # orq %rsp, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RSP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X09, 0XA0 # orq %rsp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RSP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X09, 0XA3 # orq %rsp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RSP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X09, 0XA1 # orq %rsp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RSP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X09, 0XA2 # orq %rsp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RSP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X09, 0XA7 # orq %rsp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RSP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X09, 0XA6 # orq %rsp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RSP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X09, 0XA5 # orq %rsp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_RSP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X09, 0XA4, 0X24 # orq %rsp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define OR_R8_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X09, 0X80 # orq %r8, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X09, 0X83 # orq %r8, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X09, 0X81 # orq %r8, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X09, 0X82 # orq %r8, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X09, 0X87 # orq %r8, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X09, 0X86 # orq %r8, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X09, 0X85 # orq %r8, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X09, 0X84, 0X24 # orq %r8, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X09, 0X80 # orq %r8, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X09, 0X81 # orq %r8, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X09, 0X82 # orq %r8, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X09, 0X83 # orq %r8, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X09, 0X84, 0X24 # orq %r8, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X09, 0X85 # orq %r8, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X09, 0X86 # orq %r8, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X09, 0X87 # orq %r8, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X09, 0X80 # orq %r8, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X09, 0X83 # orq %r8, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X09, 0X81 # orq %r8, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X09, 0X82 # orq %r8, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X09, 0X87 # orq %r8, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X09, 0X86 # orq %r8, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X09, 0X85 # orq %r8, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X09, 0X84, 0X24 # orq %r8, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define OR_R9_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X09, 0X88 # orq %r9, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X09, 0X8B # orq %r9, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X09, 0X89 # orq %r9, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X09, 0X8A # orq %r9, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X09, 0X8F # orq %r9, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X09, 0X8E # orq %r9, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X09, 0X8D # orq %r9, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X09, 0X8C, 0X24 # orq %r9, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X09, 0X88 # orq %r9, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X09, 0X89 # orq %r9, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X09, 0X8A # orq %r9, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X09, 0X8B # orq %r9, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X09, 0X8C, 0X24 # orq %r9, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X09, 0X8D # orq %r9, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X09, 0X8E # orq %r9, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X09, 0X8F # orq %r9, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X09, 0X88 # orq %r9, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X09, 0X8B # orq %r9, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X09, 0X89 # orq %r9, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X09, 0X8A # orq %r9, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X09, 0X8F # orq %r9, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X09, 0X8E # orq %r9, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X09, 0X8D # orq %r9, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X09, 0X8C, 0X24 # orq %r9, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define OR_R10_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X09, 0X90 # orq %r10, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X09, 0X93 # orq %r10, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X09, 0X91 # orq %r10, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X09, 0X92 # orq %r10, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X09, 0X97 # orq %r10, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X09, 0X96 # orq %r10, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X09, 0X95 # orq %r10, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X09, 0X94, 0X24 # orq %r10, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X09, 0X90 # orq %r10, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X09, 0X91 # orq %r10, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X09, 0X92 # orq %r10, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X09, 0X93 # orq %r10, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X09, 0X94, 0X24 # orq %r10, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X09, 0X95 # orq %r10, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X09, 0X96 # orq %r10, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X09, 0X97 # orq %r10, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X09, 0X90 # orq %r10, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X09, 0X93 # orq %r10, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X09, 0X91 # orq %r10, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X09, 0X92 # orq %r10, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X09, 0X97 # orq %r10, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X09, 0X96 # orq %r10, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X09, 0X95 # orq %r10, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X09, 0X94, 0X24 # orq %r10, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define OR_R11_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X09, 0X98 # orq %r11, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X09, 0X9B # orq %r11, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X09, 0X99 # orq %r11, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X09, 0X9A # orq %r11, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X09, 0X9F # orq %r11, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X09, 0X9E # orq %r11, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X09, 0X9D # orq %r11, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X09, 0X9C, 0X24 # orq %r11, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X09, 0X98 # orq %r11, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X09, 0X99 # orq %r11, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X09, 0X9A # orq %r11, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X09, 0X9B # orq %r11, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X09, 0X9C, 0X24 # orq %r11, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X09, 0X9D # orq %r11, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X09, 0X9E # orq %r11, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X09, 0X9F # orq %r11, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X09, 0X98 # orq %r11, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X09, 0X9B # orq %r11, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X09, 0X99 # orq %r11, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X09, 0X9A # orq %r11, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X09, 0X9F # orq %r11, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X09, 0X9E # orq %r11, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X09, 0X9D # orq %r11, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X09, 0X9C, 0X24 # orq %r11, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define OR_R12_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X09, 0XA0 # orq %r12, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X09, 0XA3 # orq %r12, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X09, 0XA1 # orq %r12, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X09, 0XA2 # orq %r12, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X09, 0XA7 # orq %r12, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X09, 0XA6 # orq %r12, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X09, 0XA5 # orq %r12, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X09, 0XA4, 0X24 # orq %r12, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X09, 0XA0 # orq %r12, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X09, 0XA1 # orq %r12, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X09, 0XA2 # orq %r12, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X09, 0XA3 # orq %r12, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X09, 0XA4, 0X24 # orq %r12, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X09, 0XA5 # orq %r12, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X09, 0XA6 # orq %r12, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X09, 0XA7 # orq %r12, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X09, 0XA0 # orq %r12, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X09, 0XA3 # orq %r12, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X09, 0XA1 # orq %r12, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X09, 0XA2 # orq %r12, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X09, 0XA7 # orq %r12, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X09, 0XA6 # orq %r12, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X09, 0XA5 # orq %r12, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X09, 0XA4, 0X24 # orq %r12, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define OR_R13_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X09, 0XA8 # orq %r13, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X09, 0XAB # orq %r13, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X09, 0XA9 # orq %r13, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X09, 0XAA # orq %r13, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X09, 0XAF # orq %r13, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X09, 0XAE # orq %r13, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X09, 0XAD # orq %r13, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X09, 0XAC, 0X24 # orq %r13, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X09, 0XA8 # orq %r13, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X09, 0XA9 # orq %r13, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X09, 0XAA # orq %r13, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X09, 0XAB # orq %r13, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X09, 0XAC, 0X24 # orq %r13, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X09, 0XAD # orq %r13, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X09, 0XAE # orq %r13, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X09, 0XAF # orq %r13, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X09, 0XA8 # orq %r13, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X09, 0XAB # orq %r13, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X09, 0XA9 # orq %r13, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X09, 0XAA # orq %r13, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X09, 0XAF # orq %r13, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X09, 0XAE # orq %r13, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X09, 0XAD # orq %r13, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X09, 0XAC, 0X24 # orq %r13, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define OR_R14_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X09, 0XB0 # orq %r14, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X09, 0XB3 # orq %r14, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X09, 0XB1 # orq %r14, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X09, 0XB2 # orq %r14, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X09, 0XB7 # orq %r14, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X09, 0XB6 # orq %r14, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X09, 0XB5 # orq %r14, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X09, 0XB4, 0X24 # orq %r14, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X09, 0XB0 # orq %r14, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X09, 0XB1 # orq %r14, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X09, 0XB2 # orq %r14, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X09, 0XB3 # orq %r14, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X09, 0XB4, 0X24 # orq %r14, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X09, 0XB5 # orq %r14, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X09, 0XB6 # orq %r14, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X09, 0XB7 # orq %r14, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X09, 0XB0 # orq %r14, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X09, 0XB3 # orq %r14, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X09, 0XB1 # orq %r14, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X09, 0XB2 # orq %r14, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X09, 0XB7 # orq %r14, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X09, 0XB6 # orq %r14, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X09, 0XB5 # orq %r14, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X09, 0XB4, 0X24 # orq %r14, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define OR_R15_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X09, 0XB8 # orq %r15, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X09, 0XBB # orq %r15, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X09, 0XB9 # orq %r15, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X09, 0XBA # orq %r15, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X09, 0XBF # orq %r15, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X09, 0XBE # orq %r15, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X09, 0XBD # orq %r15, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X09, 0XBC, 0X24 # orq %r15, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X09, 0XB8 # orq %r15, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X09, 0XB9 # orq %r15, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X09, 0XBA # orq %r15, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X09, 0XBB # orq %r15, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X09, 0XBC, 0X24 # orq %r15, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X09, 0XBD # orq %r15, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X09, 0XBE # orq %r15, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X09, 0XBF # orq %r15, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X09, 0XB8 # orq %r15, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X09, 0XBB # orq %r15, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X09, 0XB9 # orq %r15, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X09, 0XBA # orq %r15, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X09, 0XBF # orq %r15, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X09, 0XBE # orq %r15, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X09, 0XBD # orq %r15, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X09, 0XBC, 0X24 # orq %r15, " _(VALUE) "(%esp)")\
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
