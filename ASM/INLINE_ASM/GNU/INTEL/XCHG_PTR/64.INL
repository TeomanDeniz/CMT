#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************* [v] 64-BIT MEMORY [v] ************************** */
#define XCHG_RAX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0X04, 0X25 # xchgq (" _(VALUE) "), %rax")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RBX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0X1C, 0X25 # xchgq (" _(VALUE) "), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RCX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0X0C, 0X25 # xchgq (" _(VALUE) "), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RDX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0X14, 0X25 # xchgq (" _(VALUE) "), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RDI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0X3C, 0X25 # xchgq (" _(VALUE) "), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RSI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0X34, 0X25 # xchgq (" _(VALUE) "), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RBP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0X2C, 0X25 # xchgq (" _(VALUE) "), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RSP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0X24, 0X25 # xchgq (" _(VALUE) "), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0X04, 0X25 # xchgq (" _(VALUE) "), %r8")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0X0C, 0X25 # xchgq (" _(VALUE) "), %r9")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0X14, 0X25 # xchgq (" _(VALUE) "), %r10")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0X1C, 0X25 # xchgq (" _(VALUE) "), %r11")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0X24, 0X25 # xchgq (" _(VALUE) "), %r12")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0X2C, 0X25 # xchgq (" _(VALUE) "), %r13")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0X34, 0X25 # xchgq (" _(VALUE) "), %r14")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0X3C, 0X25 # xchgq (" _(VALUE) "), %r15")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_RAX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0X04, 0X25 # xchgq %rax, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RBX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0X1C, 0X25 # xchgq %rbx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RCX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0X0C, 0X25 # xchgq %rcx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RDX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0X14, 0X25 # xchgq %rdx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RDI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0X3C, 0X25 # xchgq %rdi, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RSI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0X34, 0X25 # xchgq %rsi, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RBP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0X2C, 0X25 # xchgq %rbp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RSP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0X24, 0X25 # xchgq %rsp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0X04, 0X25 # xchgq %r8, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0X0C, 0X25 # xchgq %r9, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0X14, 0X25 # xchgq %r10, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0X1C, 0X25 # xchgq %r11, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0X24, 0X25 # xchgq %r12, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0X2C, 0X25 # xchgq %r13, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0X34, 0X25 # xchgq %r14, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0X3C, 0X25 # xchgq %r15, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_RAX_FROM_PTR_RAX CMT_ASM(".byte 0X48, 0X87, 0X00 # xchgq (%rax), %rax")
#define XCHG_RAX_FROM_PTR_RBX CMT_ASM(".byte 0X48, 0X87, 0X03 # xchgq (%rbx), %rax")
#define XCHG_RAX_FROM_PTR_RCX CMT_ASM(".byte 0X48, 0X87, 0X01 # xchgq (%rcx), %rax")
#define XCHG_RAX_FROM_PTR_RDX CMT_ASM(".byte 0X48, 0X87, 0X02 # xchgq (%rdx), %rax")
#define XCHG_RAX_FROM_PTR_RDI CMT_ASM(".byte 0X48, 0X87, 0X07 # xchgq (%rdi), %rax")
#define XCHG_RAX_FROM_PTR_RSI CMT_ASM(".byte 0X48, 0X87, 0X06 # xchgq (%rsi), %rax")
#define XCHG_RAX_FROM_PTR_RBP CMT_ASM(".byte 0X48, 0X87, 0X45, 0X00 # xchgq (%rbp), %rax")
#define XCHG_RAX_FROM_PTR_RSP CMT_ASM(".byte 0X48, 0X87, 0X04, 0X24 # xchgq (%rsp), %rax")
#define XCHG_RAX_FROM_PTR_R8 CMT_ASM(".byte 0X49, 0X87, 0X00 # xchgq (%r8), %rax")
#define XCHG_RAX_FROM_PTR_R9 CMT_ASM(".byte 0X49, 0X87, 0X01 # xchgq (%r9), %rax")
#define XCHG_RAX_FROM_PTR_R10 CMT_ASM(".byte 0X49, 0X87, 0X02 # xchgq (%r10), %rax")
#define XCHG_RAX_FROM_PTR_R11 CMT_ASM(".byte 0X49, 0X87, 0X03 # xchgq (%r11), %rax")
#define XCHG_RAX_FROM_PTR_R12 CMT_ASM(".byte 0X49, 0X87, 0X04, 0X24 # xchgq (%r12), %rax")
#define XCHG_RAX_FROM_PTR_R13 CMT_ASM(".byte 0X49, 0X87, 0X45, 0X00 # xchgq (%r13), %rax")
#define XCHG_RAX_FROM_PTR_R14 CMT_ASM(".byte 0X49, 0X87, 0X06 # xchgq (%r14), %rax")
#define XCHG_RAX_FROM_PTR_R15 CMT_ASM(".byte 0X49, 0X87, 0X07 # xchgq (%r15), %rax")
#define XCHG_RAX_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X87, 0X00 # xchgq (%eax), %rax")
#define XCHG_RAX_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X87, 0X03 # xchgq (%ebx), %rax")
#define XCHG_RAX_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X87, 0X01 # xchgq (%ecx), %rax")
#define XCHG_RAX_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X87, 0X02 # xchgq (%edx), %rax")
#define XCHG_RAX_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X87, 0X07 # xchgq (%edi), %rax")
#define XCHG_RAX_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X87, 0X06 # xchgq (%esi), %rax")
#define XCHG_RAX_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X87, 0X45, 0X00 # xchgq (%ebp), %rax")
#define XCHG_RAX_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X87, 0X04, 0X24 # xchgq (%esp), %rax")

#define XCHG_RBX_FROM_PTR_RAX CMT_ASM(".byte 0X48, 0X87, 0X18 # xchgq (%rax), %rbx")
#define XCHG_RBX_FROM_PTR_RBX CMT_ASM(".byte 0X48, 0X87, 0X1B # xchgq (%rbx), %rbx")
#define XCHG_RBX_FROM_PTR_RCX CMT_ASM(".byte 0X48, 0X87, 0X19 # xchgq (%rcx), %rbx")
#define XCHG_RBX_FROM_PTR_RDX CMT_ASM(".byte 0X48, 0X87, 0X1A # xchgq (%rdx), %rbx")
#define XCHG_RBX_FROM_PTR_RDI CMT_ASM(".byte 0X48, 0X87, 0X1F # xchgq (%rdi), %rbx")
#define XCHG_RBX_FROM_PTR_RSI CMT_ASM(".byte 0X48, 0X87, 0X1E # xchgq (%rsi), %rbx")
#define XCHG_RBX_FROM_PTR_RBP CMT_ASM(".byte 0X48, 0X87, 0X5D, 0X00 # xchgq (%rbp), %rbx")
#define XCHG_RBX_FROM_PTR_RSP CMT_ASM(".byte 0X48, 0X87, 0X1C, 0X24 # xchgq (%rsp), %rbx")
#define XCHG_RBX_FROM_PTR_R8 CMT_ASM(".byte 0X49, 0X87, 0X18 # xchgq (%r8), %rbx")
#define XCHG_RBX_FROM_PTR_R9 CMT_ASM(".byte 0X49, 0X87, 0X19 # xchgq (%r9), %rbx")
#define XCHG_RBX_FROM_PTR_R10 CMT_ASM(".byte 0X49, 0X87, 0X1A # xchgq (%r10), %rbx")
#define XCHG_RBX_FROM_PTR_R11 CMT_ASM(".byte 0X49, 0X87, 0X1B # xchgq (%r11), %rbx")
#define XCHG_RBX_FROM_PTR_R12 CMT_ASM(".byte 0X49, 0X87, 0X1C, 0X24 # xchgq (%r12), %rbx")
#define XCHG_RBX_FROM_PTR_R13 CMT_ASM(".byte 0X49, 0X87, 0X5D, 0X00 # xchgq (%r13), %rbx")
#define XCHG_RBX_FROM_PTR_R14 CMT_ASM(".byte 0X49, 0X87, 0X1E # xchgq (%r14), %rbx")
#define XCHG_RBX_FROM_PTR_R15 CMT_ASM(".byte 0X49, 0X87, 0X1F # xchgq (%r15), %rbx")
#define XCHG_RBX_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X87, 0X18 # xchgq (%eax), %rbx")
#define XCHG_RBX_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X87, 0X1B # xchgq (%ebx), %rbx")
#define XCHG_RBX_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X87, 0X19 # xchgq (%ecx), %rbx")
#define XCHG_RBX_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X87, 0X1A # xchgq (%edx), %rbx")
#define XCHG_RBX_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X87, 0X1F # xchgq (%edi), %rbx")
#define XCHG_RBX_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X87, 0X1E # xchgq (%esi), %rbx")
#define XCHG_RBX_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X87, 0X5D, 0X00 # xchgq (%ebp), %rbx")
#define XCHG_RBX_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X87, 0X1C, 0X24 # xchgq (%esp), %rbx")

#define XCHG_RCX_FROM_PTR_RAX CMT_ASM(".byte 0X48, 0X87, 0X08 # xchgq (%rax), %rcx")
#define XCHG_RCX_FROM_PTR_RBX CMT_ASM(".byte 0X48, 0X87, 0X0B # xchgq (%rbx), %rcx")
#define XCHG_RCX_FROM_PTR_RCX CMT_ASM(".byte 0X48, 0X87, 0X09 # xchgq (%rcx), %rcx")
#define XCHG_RCX_FROM_PTR_RDX CMT_ASM(".byte 0X48, 0X87, 0X0A # xchgq (%rdx), %rcx")
#define XCHG_RCX_FROM_PTR_RDI CMT_ASM(".byte 0X48, 0X87, 0X0F # xchgq (%rdi), %rcx")
#define XCHG_RCX_FROM_PTR_RSI CMT_ASM(".byte 0X48, 0X87, 0X0E # xchgq (%rsi), %rcx")
#define XCHG_RCX_FROM_PTR_RBP CMT_ASM(".byte 0X48, 0X87, 0X4D, 0X00 # xchgq (%rbp), %rcx")
#define XCHG_RCX_FROM_PTR_RSP CMT_ASM(".byte 0X48, 0X87, 0X0C, 0X24 # xchgq (%rsp), %rcx")
#define XCHG_RCX_FROM_PTR_R8 CMT_ASM(".byte 0X49, 0X87, 0X08 # xchgq (%r8), %rcx")
#define XCHG_RCX_FROM_PTR_R9 CMT_ASM(".byte 0X49, 0X87, 0X09 # xchgq (%r9), %rcx")
#define XCHG_RCX_FROM_PTR_R10 CMT_ASM(".byte 0X49, 0X87, 0X0A # xchgq (%r10), %rcx")
#define XCHG_RCX_FROM_PTR_R11 CMT_ASM(".byte 0X49, 0X87, 0X0B # xchgq (%r11), %rcx")
#define XCHG_RCX_FROM_PTR_R12 CMT_ASM(".byte 0X49, 0X87, 0X0C, 0X24 # xchgq (%r12), %rcx")
#define XCHG_RCX_FROM_PTR_R13 CMT_ASM(".byte 0X49, 0X87, 0X4D, 0X00 # xchgq (%r13), %rcx")
#define XCHG_RCX_FROM_PTR_R14 CMT_ASM(".byte 0X49, 0X87, 0X0E # xchgq (%r14), %rcx")
#define XCHG_RCX_FROM_PTR_R15 CMT_ASM(".byte 0X49, 0X87, 0X0F # xchgq (%r15), %rcx")
#define XCHG_RCX_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X87, 0X08 # xchgq (%eax), %rcx")
#define XCHG_RCX_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X87, 0X0B # xchgq (%ebx), %rcx")
#define XCHG_RCX_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X87, 0X09 # xchgq (%ecx), %rcx")
#define XCHG_RCX_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X87, 0X0A # xchgq (%edx), %rcx")
#define XCHG_RCX_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X87, 0X0F # xchgq (%edi), %rcx")
#define XCHG_RCX_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X87, 0X0E # xchgq (%esi), %rcx")
#define XCHG_RCX_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X87, 0X4D, 0X00 # xchgq (%ebp), %rcx")
#define XCHG_RCX_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X87, 0X0C, 0X24 # xchgq (%esp), %rcx")

#define XCHG_RDX_FROM_PTR_RAX CMT_ASM(".byte 0X48, 0X87, 0X10 # xchgq (%rax), %rdx")
#define XCHG_RDX_FROM_PTR_RBX CMT_ASM(".byte 0X48, 0X87, 0X13 # xchgq (%rbx), %rdx")
#define XCHG_RDX_FROM_PTR_RCX CMT_ASM(".byte 0X48, 0X87, 0X11 # xchgq (%rcx), %rdx")
#define XCHG_RDX_FROM_PTR_RDX CMT_ASM(".byte 0X48, 0X87, 0X12 # xchgq (%rdx), %rdx")
#define XCHG_RDX_FROM_PTR_RDI CMT_ASM(".byte 0X48, 0X87, 0X17 # xchgq (%rdi), %rdx")
#define XCHG_RDX_FROM_PTR_RSI CMT_ASM(".byte 0X48, 0X87, 0X16 # xchgq (%rsi), %rdx")
#define XCHG_RDX_FROM_PTR_RBP CMT_ASM(".byte 0X48, 0X87, 0X55, 0X00 # xchgq (%rbp), %rdx")
#define XCHG_RDX_FROM_PTR_RSP CMT_ASM(".byte 0X48, 0X87, 0X14, 0X24 # xchgq (%rsp), %rdx")
#define XCHG_RDX_FROM_PTR_R8 CMT_ASM(".byte 0X49, 0X87, 0X10 # xchgq (%r8), %rdx")
#define XCHG_RDX_FROM_PTR_R9 CMT_ASM(".byte 0X49, 0X87, 0X11 # xchgq (%r9), %rdx")
#define XCHG_RDX_FROM_PTR_R10 CMT_ASM(".byte 0X49, 0X87, 0X12 # xchgq (%r10), %rdx")
#define XCHG_RDX_FROM_PTR_R11 CMT_ASM(".byte 0X49, 0X87, 0X13 # xchgq (%r11), %rdx")
#define XCHG_RDX_FROM_PTR_R12 CMT_ASM(".byte 0X49, 0X87, 0X14, 0X24 # xchgq (%r12), %rdx")
#define XCHG_RDX_FROM_PTR_R13 CMT_ASM(".byte 0X49, 0X87, 0X55, 0X00 # xchgq (%r13), %rdx")
#define XCHG_RDX_FROM_PTR_R14 CMT_ASM(".byte 0X49, 0X87, 0X16 # xchgq (%r14), %rdx")
#define XCHG_RDX_FROM_PTR_R15 CMT_ASM(".byte 0X49, 0X87, 0X17 # xchgq (%r15), %rdx")
#define XCHG_RDX_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X87, 0X10 # xchgq (%eax), %rdx")
#define XCHG_RDX_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X87, 0X13 # xchgq (%ebx), %rdx")
#define XCHG_RDX_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X87, 0X11 # xchgq (%ecx), %rdx")
#define XCHG_RDX_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X87, 0X12 # xchgq (%edx), %rdx")
#define XCHG_RDX_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X87, 0X17 # xchgq (%edi), %rdx")
#define XCHG_RDX_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X87, 0X16 # xchgq (%esi), %rdx")
#define XCHG_RDX_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X87, 0X55, 0X00 # xchgq (%ebp), %rdx")
#define XCHG_RDX_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X87, 0X14, 0X24 # xchgq (%esp), %rdx")

#define XCHG_RDI_FROM_PTR_RAX CMT_ASM(".byte 0X48, 0X87, 0X38 # xchgq (%rax), %rdi")
#define XCHG_RDI_FROM_PTR_RBX CMT_ASM(".byte 0X48, 0X87, 0X3B # xchgq (%rbx), %rdi")
#define XCHG_RDI_FROM_PTR_RCX CMT_ASM(".byte 0X48, 0X87, 0X39 # xchgq (%rcx), %rdi")
#define XCHG_RDI_FROM_PTR_RDX CMT_ASM(".byte 0X48, 0X87, 0X3A # xchgq (%rdx), %rdi")
#define XCHG_RDI_FROM_PTR_RDI CMT_ASM(".byte 0X48, 0X87, 0X3F # xchgq (%rdi), %rdi")
#define XCHG_RDI_FROM_PTR_RSI CMT_ASM(".byte 0X48, 0X87, 0X3E # xchgq (%rsi), %rdi")
#define XCHG_RDI_FROM_PTR_RBP CMT_ASM(".byte 0X48, 0X87, 0X7D, 0X00 # xchgq (%rbp), %rdi")
#define XCHG_RDI_FROM_PTR_RSP CMT_ASM(".byte 0X48, 0X87, 0X3C, 0X24 # xchgq (%rsp), %rdi")
#define XCHG_RDI_FROM_PTR_R8 CMT_ASM(".byte 0X49, 0X87, 0X38 # xchgq (%r8), %rdi")
#define XCHG_RDI_FROM_PTR_R9 CMT_ASM(".byte 0X49, 0X87, 0X39 # xchgq (%r9), %rdi")
#define XCHG_RDI_FROM_PTR_R10 CMT_ASM(".byte 0X49, 0X87, 0X3A # xchgq (%r10), %rdi")
#define XCHG_RDI_FROM_PTR_R11 CMT_ASM(".byte 0X49, 0X87, 0X3B # xchgq (%r11), %rdi")
#define XCHG_RDI_FROM_PTR_R12 CMT_ASM(".byte 0X49, 0X87, 0X3C, 0X24 # xchgq (%r12), %rdi")
#define XCHG_RDI_FROM_PTR_R13 CMT_ASM(".byte 0X49, 0X87, 0X7D, 0X00 # xchgq (%r13), %rdi")
#define XCHG_RDI_FROM_PTR_R14 CMT_ASM(".byte 0X49, 0X87, 0X3E # xchgq (%r14), %rdi")
#define XCHG_RDI_FROM_PTR_R15 CMT_ASM(".byte 0X49, 0X87, 0X3F # xchgq (%r15), %rdi")
#define XCHG_RDI_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X87, 0X38 # xchgq (%eax), %rdi")
#define XCHG_RDI_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X87, 0X3B # xchgq (%ebx), %rdi")
#define XCHG_RDI_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X87, 0X39 # xchgq (%ecx), %rdi")
#define XCHG_RDI_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X87, 0X3A # xchgq (%edx), %rdi")
#define XCHG_RDI_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X87, 0X3F # xchgq (%edi), %rdi")
#define XCHG_RDI_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X87, 0X3E # xchgq (%esi), %rdi")
#define XCHG_RDI_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X87, 0X7D, 0X00 # xchgq (%ebp), %rdi")
#define XCHG_RDI_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X87, 0X3C, 0X24 # xchgq (%esp), %rdi")

#define XCHG_RSI_FROM_PTR_RAX CMT_ASM(".byte 0X48, 0X87, 0X30 # xchgq (%rax), %rsi")
#define XCHG_RSI_FROM_PTR_RBX CMT_ASM(".byte 0X48, 0X87, 0X33 # xchgq (%rbx), %rsi")
#define XCHG_RSI_FROM_PTR_RCX CMT_ASM(".byte 0X48, 0X87, 0X31 # xchgq (%rcx), %rsi")
#define XCHG_RSI_FROM_PTR_RDX CMT_ASM(".byte 0X48, 0X87, 0X32 # xchgq (%rdx), %rsi")
#define XCHG_RSI_FROM_PTR_RDI CMT_ASM(".byte 0X48, 0X87, 0X37 # xchgq (%rdi), %rsi")
#define XCHG_RSI_FROM_PTR_RSI CMT_ASM(".byte 0X48, 0X87, 0X36 # xchgq (%rsi), %rsi")
#define XCHG_RSI_FROM_PTR_RBP CMT_ASM(".byte 0X48, 0X87, 0X75, 0X00 # xchgq (%rbp), %rsi")
#define XCHG_RSI_FROM_PTR_RSP CMT_ASM(".byte 0X48, 0X87, 0X34, 0X24 # xchgq (%rsp), %rsi")
#define XCHG_RSI_FROM_PTR_R8 CMT_ASM(".byte 0X49, 0X87, 0X30 # xchgq (%r8), %rsi")
#define XCHG_RSI_FROM_PTR_R9 CMT_ASM(".byte 0X49, 0X87, 0X31 # xchgq (%r9), %rsi")
#define XCHG_RSI_FROM_PTR_R10 CMT_ASM(".byte 0X49, 0X87, 0X32 # xchgq (%r10), %rsi")
#define XCHG_RSI_FROM_PTR_R11 CMT_ASM(".byte 0X49, 0X87, 0X33 # xchgq (%r11), %rsi")
#define XCHG_RSI_FROM_PTR_R12 CMT_ASM(".byte 0X49, 0X87, 0X34, 0X24 # xchgq (%r12), %rsi")
#define XCHG_RSI_FROM_PTR_R13 CMT_ASM(".byte 0X49, 0X87, 0X75, 0X00 # xchgq (%r13), %rsi")
#define XCHG_RSI_FROM_PTR_R14 CMT_ASM(".byte 0X49, 0X87, 0X36 # xchgq (%r14), %rsi")
#define XCHG_RSI_FROM_PTR_R15 CMT_ASM(".byte 0X49, 0X87, 0X37 # xchgq (%r15), %rsi")
#define XCHG_RSI_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X87, 0X30 # xchgq (%eax), %rsi")
#define XCHG_RSI_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X87, 0X33 # xchgq (%ebx), %rsi")
#define XCHG_RSI_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X87, 0X31 # xchgq (%ecx), %rsi")
#define XCHG_RSI_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X87, 0X32 # xchgq (%edx), %rsi")
#define XCHG_RSI_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X87, 0X37 # xchgq (%edi), %rsi")
#define XCHG_RSI_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X87, 0X36 # xchgq (%esi), %rsi")
#define XCHG_RSI_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X87, 0X75, 0X00 # xchgq (%ebp), %rsi")
#define XCHG_RSI_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X87, 0X34, 0X24 # xchgq (%esp), %rsi")

#define XCHG_RBP_FROM_PTR_RAX CMT_ASM(".byte 0X48, 0X87, 0X28 # xchgq (%rax), %rbp")
#define XCHG_RBP_FROM_PTR_RBX CMT_ASM(".byte 0X48, 0X87, 0X2B # xchgq (%rbx), %rbp")
#define XCHG_RBP_FROM_PTR_RCX CMT_ASM(".byte 0X48, 0X87, 0X29 # xchgq (%rcx), %rbp")
#define XCHG_RBP_FROM_PTR_RDX CMT_ASM(".byte 0X48, 0X87, 0X2A # xchgq (%rdx), %rbp")
#define XCHG_RBP_FROM_PTR_RDI CMT_ASM(".byte 0X48, 0X87, 0X2F # xchgq (%rdi), %rbp")
#define XCHG_RBP_FROM_PTR_RSI CMT_ASM(".byte 0X48, 0X87, 0X2E # xchgq (%rsi), %rbp")
#define XCHG_RBP_FROM_PTR_RBP CMT_ASM(".byte 0X48, 0X87, 0X6D, 0X00 # xchgq (%rbp), %rbp")
#define XCHG_RBP_FROM_PTR_RSP CMT_ASM(".byte 0X48, 0X87, 0X2C, 0X24 # xchgq (%rsp), %rbp")
#define XCHG_RBP_FROM_PTR_R8 CMT_ASM(".byte 0X49, 0X87, 0X28 # xchgq (%r8), %rbp")
#define XCHG_RBP_FROM_PTR_R9 CMT_ASM(".byte 0X49, 0X87, 0X29 # xchgq (%r9), %rbp")
#define XCHG_RBP_FROM_PTR_R10 CMT_ASM(".byte 0X49, 0X87, 0X2A # xchgq (%r10), %rbp")
#define XCHG_RBP_FROM_PTR_R11 CMT_ASM(".byte 0X49, 0X87, 0X2B # xchgq (%r11), %rbp")
#define XCHG_RBP_FROM_PTR_R12 CMT_ASM(".byte 0X49, 0X87, 0X2C, 0X24 # xchgq (%r12), %rbp")
#define XCHG_RBP_FROM_PTR_R13 CMT_ASM(".byte 0X49, 0X87, 0X6D, 0X00 # xchgq (%r13), %rbp")
#define XCHG_RBP_FROM_PTR_R14 CMT_ASM(".byte 0X49, 0X87, 0X2E # xchgq (%r14), %rbp")
#define XCHG_RBP_FROM_PTR_R15 CMT_ASM(".byte 0X49, 0X87, 0X2F # xchgq (%r15), %rbp")
#define XCHG_RBP_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X87, 0X28 # xchgq (%eax), %rbp")
#define XCHG_RBP_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X87, 0X2B # xchgq (%ebx), %rbp")
#define XCHG_RBP_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X87, 0X29 # xchgq (%ecx), %rbp")
#define XCHG_RBP_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X87, 0X2A # xchgq (%edx), %rbp")
#define XCHG_RBP_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X87, 0X2F # xchgq (%edi), %rbp")
#define XCHG_RBP_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X87, 0X2E # xchgq (%esi), %rbp")
#define XCHG_RBP_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X87, 0X6D, 0X00 # xchgq (%ebp), %rbp")
#define XCHG_RBP_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X87, 0X2C, 0X24 # xchgq (%esp), %rbp")

#define XCHG_RSP_FROM_PTR_RAX CMT_ASM(".byte 0X48, 0X87, 0X20 # xchgq (%rax), %rsp")
#define XCHG_RSP_FROM_PTR_RBX CMT_ASM(".byte 0X48, 0X87, 0X23 # xchgq (%rbx), %rsp")
#define XCHG_RSP_FROM_PTR_RCX CMT_ASM(".byte 0X48, 0X87, 0X21 # xchgq (%rcx), %rsp")
#define XCHG_RSP_FROM_PTR_RDX CMT_ASM(".byte 0X48, 0X87, 0X22 # xchgq (%rdx), %rsp")
#define XCHG_RSP_FROM_PTR_RDI CMT_ASM(".byte 0X48, 0X87, 0X27 # xchgq (%rdi), %rsp")
#define XCHG_RSP_FROM_PTR_RSI CMT_ASM(".byte 0X48, 0X87, 0X26 # xchgq (%rsi), %rsp")
#define XCHG_RSP_FROM_PTR_RBP CMT_ASM(".byte 0X48, 0X87, 0X65, 0X00 # xchgq (%rbp), %rsp")
#define XCHG_RSP_FROM_PTR_RSP CMT_ASM(".byte 0X48, 0X87, 0X24, 0X24 # xchgq (%rsp), %rsp")
#define XCHG_RSP_FROM_PTR_R8 CMT_ASM(".byte 0X49, 0X87, 0X20 # xchgq (%r8), %rsp")
#define XCHG_RSP_FROM_PTR_R9 CMT_ASM(".byte 0X49, 0X87, 0X21 # xchgq (%r9), %rsp")
#define XCHG_RSP_FROM_PTR_R10 CMT_ASM(".byte 0X49, 0X87, 0X22 # xchgq (%r10), %rsp")
#define XCHG_RSP_FROM_PTR_R11 CMT_ASM(".byte 0X49, 0X87, 0X23 # xchgq (%r11), %rsp")
#define XCHG_RSP_FROM_PTR_R12 CMT_ASM(".byte 0X49, 0X87, 0X24, 0X24 # xchgq (%r12), %rsp")
#define XCHG_RSP_FROM_PTR_R13 CMT_ASM(".byte 0X49, 0X87, 0X65, 0X00 # xchgq (%r13), %rsp")
#define XCHG_RSP_FROM_PTR_R14 CMT_ASM(".byte 0X49, 0X87, 0X26 # xchgq (%r14), %rsp")
#define XCHG_RSP_FROM_PTR_R15 CMT_ASM(".byte 0X49, 0X87, 0X27 # xchgq (%r15), %rsp")
#define XCHG_RSP_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X87, 0X20 # xchgq (%eax), %rsp")
#define XCHG_RSP_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X87, 0X23 # xchgq (%ebx), %rsp")
#define XCHG_RSP_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X87, 0X21 # xchgq (%ecx), %rsp")
#define XCHG_RSP_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X87, 0X22 # xchgq (%edx), %rsp")
#define XCHG_RSP_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X87, 0X27 # xchgq (%edi), %rsp")
#define XCHG_RSP_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X87, 0X26 # xchgq (%esi), %rsp")
#define XCHG_RSP_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X87, 0X65, 0X00 # xchgq (%ebp), %rsp")
#define XCHG_RSP_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X87, 0X24, 0X24 # xchgq (%esp), %rsp")

#define XCHG_R8_FROM_PTR_RAX CMT_ASM(".byte 0X4C, 0X87, 0X00 # xchgq (%rax), %r8")
#define XCHG_R8_FROM_PTR_RBX CMT_ASM(".byte 0X4C, 0X87, 0X03 # xchgq (%rbx), %r8")
#define XCHG_R8_FROM_PTR_RCX CMT_ASM(".byte 0X4C, 0X87, 0X01 # xchgq (%rcx), %r8")
#define XCHG_R8_FROM_PTR_RDX CMT_ASM(".byte 0X4C, 0X87, 0X02 # xchgq (%rdx), %r8")
#define XCHG_R8_FROM_PTR_RDI CMT_ASM(".byte 0X4C, 0X87, 0X07 # xchgq (%rdi), %r8")
#define XCHG_R8_FROM_PTR_RSI CMT_ASM(".byte 0X4C, 0X87, 0X06 # xchgq (%rsi), %r8")
#define XCHG_R8_FROM_PTR_RBP CMT_ASM(".byte 0X4C, 0X87, 0X45, 0X00 # xchgq (%rbp), %r8")
#define XCHG_R8_FROM_PTR_RSP CMT_ASM(".byte 0X4C, 0X87, 0X04, 0X24 # xchgq (%rsp), %r8")
#define XCHG_R8_FROM_PTR_R8 CMT_ASM(".byte 0X4D, 0X87, 0X00 # xchgq (%r8), %r8")
#define XCHG_R8_FROM_PTR_R9 CMT_ASM(".byte 0X4D, 0X87, 0X01 # xchgq (%r9), %r8")
#define XCHG_R8_FROM_PTR_R10 CMT_ASM(".byte 0X4D, 0X87, 0X02 # xchgq (%r10), %r8")
#define XCHG_R8_FROM_PTR_R11 CMT_ASM(".byte 0X4D, 0X87, 0X03 # xchgq (%r11), %r8")
#define XCHG_R8_FROM_PTR_R12 CMT_ASM(".byte 0X4D, 0X87, 0X04, 0X24 # xchgq (%r12), %r8")
#define XCHG_R8_FROM_PTR_R13 CMT_ASM(".byte 0X4D, 0X87, 0X45, 0X00 # xchgq (%r13), %r8")
#define XCHG_R8_FROM_PTR_R14 CMT_ASM(".byte 0X4D, 0X87, 0X06 # xchgq (%r14), %r8")
#define XCHG_R8_FROM_PTR_R15 CMT_ASM(".byte 0X4D, 0X87, 0X07 # xchgq (%r15), %r8")
#define XCHG_R8_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X00 # xchgq (%eax), %r8")
#define XCHG_R8_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X03 # xchgq (%ebx), %r8")
#define XCHG_R8_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X01 # xchgq (%ecx), %r8")
#define XCHG_R8_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X02 # xchgq (%edx), %r8")
#define XCHG_R8_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X07 # xchgq (%edi), %r8")
#define XCHG_R8_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X06 # xchgq (%esi), %r8")
#define XCHG_R8_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X45, 0X00 # xchgq (%ebp), %r8")
#define XCHG_R8_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X04, 0X24 # xchgq (%esp), %r8")

#define XCHG_R9_FROM_PTR_RAX CMT_ASM(".byte 0X4C, 0X87, 0X08 # xchgq (%rax), %r9")
#define XCHG_R9_FROM_PTR_RBX CMT_ASM(".byte 0X4C, 0X87, 0X0B # xchgq (%rbx), %r9")
#define XCHG_R9_FROM_PTR_RCX CMT_ASM(".byte 0X4C, 0X87, 0X09 # xchgq (%rcx), %r9")
#define XCHG_R9_FROM_PTR_RDX CMT_ASM(".byte 0X4C, 0X87, 0X0A # xchgq (%rdx), %r9")
#define XCHG_R9_FROM_PTR_RDI CMT_ASM(".byte 0X4C, 0X87, 0X0F # xchgq (%rdi), %r9")
#define XCHG_R9_FROM_PTR_RSI CMT_ASM(".byte 0X4C, 0X87, 0X0E # xchgq (%rsi), %r9")
#define XCHG_R9_FROM_PTR_RBP CMT_ASM(".byte 0X4C, 0X87, 0X4D, 0X00 # xchgq (%rbp), %r9")
#define XCHG_R9_FROM_PTR_RSP CMT_ASM(".byte 0X4C, 0X87, 0X0C, 0X24 # xchgq (%rsp), %r9")
#define XCHG_R9_FROM_PTR_R8 CMT_ASM(".byte 0X4D, 0X87, 0X08 # xchgq (%r8), %r9")
#define XCHG_R9_FROM_PTR_R9 CMT_ASM(".byte 0X4D, 0X87, 0X09 # xchgq (%r9), %r9")
#define XCHG_R9_FROM_PTR_R10 CMT_ASM(".byte 0X4D, 0X87, 0X0A # xchgq (%r10), %r9")
#define XCHG_R9_FROM_PTR_R11 CMT_ASM(".byte 0X4D, 0X87, 0X0B # xchgq (%r11), %r9")
#define XCHG_R9_FROM_PTR_R12 CMT_ASM(".byte 0X4D, 0X87, 0X0C, 0X24 # xchgq (%r12), %r9")
#define XCHG_R9_FROM_PTR_R13 CMT_ASM(".byte 0X4D, 0X87, 0X4D, 0X00 # xchgq (%r13), %r9")
#define XCHG_R9_FROM_PTR_R14 CMT_ASM(".byte 0X4D, 0X87, 0X0E # xchgq (%r14), %r9")
#define XCHG_R9_FROM_PTR_R15 CMT_ASM(".byte 0X4D, 0X87, 0X0F # xchgq (%r15), %r9")
#define XCHG_R9_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X08 # xchgq (%eax), %r9")
#define XCHG_R9_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X0B # xchgq (%ebx), %r9")
#define XCHG_R9_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X09 # xchgq (%ecx), %r9")
#define XCHG_R9_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X0A # xchgq (%edx), %r9")
#define XCHG_R9_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X0F # xchgq (%edi), %r9")
#define XCHG_R9_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X0E # xchgq (%esi), %r9")
#define XCHG_R9_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X4D, 0X00 # xchgq (%ebp), %r9")
#define XCHG_R9_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X0C, 0X24 # xchgq (%esp), %r9")

#define XCHG_R10_FROM_PTR_RAX CMT_ASM(".byte 0X4C, 0X87, 0X10 # xchgq (%rax), %r10")
#define XCHG_R10_FROM_PTR_RBX CMT_ASM(".byte 0X4C, 0X87, 0X13 # xchgq (%rbx), %r10")
#define XCHG_R10_FROM_PTR_RCX CMT_ASM(".byte 0X4C, 0X87, 0X11 # xchgq (%rcx), %r10")
#define XCHG_R10_FROM_PTR_RDX CMT_ASM(".byte 0X4C, 0X87, 0X12 # xchgq (%rdx), %r10")
#define XCHG_R10_FROM_PTR_RDI CMT_ASM(".byte 0X4C, 0X87, 0X17 # xchgq (%rdi), %r10")
#define XCHG_R10_FROM_PTR_RSI CMT_ASM(".byte 0X4C, 0X87, 0X16 # xchgq (%rsi), %r10")
#define XCHG_R10_FROM_PTR_RBP CMT_ASM(".byte 0X4C, 0X87, 0X55, 0X00 # xchgq (%rbp), %r10")
#define XCHG_R10_FROM_PTR_RSP CMT_ASM(".byte 0X4C, 0X87, 0X14, 0X24 # xchgq (%rsp), %r10")
#define XCHG_R10_FROM_PTR_R8 CMT_ASM(".byte 0X4D, 0X87, 0X10 # xchgq (%r8), %r10")
#define XCHG_R10_FROM_PTR_R9 CMT_ASM(".byte 0X4D, 0X87, 0X11 # xchgq (%r9), %r10")
#define XCHG_R10_FROM_PTR_R10 CMT_ASM(".byte 0X4D, 0X87, 0X12 # xchgq (%r10), %r10")
#define XCHG_R10_FROM_PTR_R11 CMT_ASM(".byte 0X4D, 0X87, 0X13 # xchgq (%r11), %r10")
#define XCHG_R10_FROM_PTR_R12 CMT_ASM(".byte 0X4D, 0X87, 0X14, 0X24 # xchgq (%r12), %r10")
#define XCHG_R10_FROM_PTR_R13 CMT_ASM(".byte 0X4D, 0X87, 0X55, 0X00 # xchgq (%r13), %r10")
#define XCHG_R10_FROM_PTR_R14 CMT_ASM(".byte 0X4D, 0X87, 0X16 # xchgq (%r14), %r10")
#define XCHG_R10_FROM_PTR_R15 CMT_ASM(".byte 0X4D, 0X87, 0X17 # xchgq (%r15), %r10")
#define XCHG_R10_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X10 # xchgq (%eax), %r10")
#define XCHG_R10_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X13 # xchgq (%ebx), %r10")
#define XCHG_R10_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X11 # xchgq (%ecx), %r10")
#define XCHG_R10_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X12 # xchgq (%edx), %r10")
#define XCHG_R10_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X17 # xchgq (%edi), %r10")
#define XCHG_R10_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X16 # xchgq (%esi), %r10")
#define XCHG_R10_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X55, 0X00 # xchgq (%ebp), %r10")
#define XCHG_R10_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X14, 0X24 # xchgq (%esp), %r10")

#define XCHG_R11_FROM_PTR_RAX CMT_ASM(".byte 0X4C, 0X87, 0X18 # xchgq (%rax), %r11")
#define XCHG_R11_FROM_PTR_RBX CMT_ASM(".byte 0X4C, 0X87, 0X1B # xchgq (%rbx), %r11")
#define XCHG_R11_FROM_PTR_RCX CMT_ASM(".byte 0X4C, 0X87, 0X19 # xchgq (%rcx), %r11")
#define XCHG_R11_FROM_PTR_RDX CMT_ASM(".byte 0X4C, 0X87, 0X1A # xchgq (%rdx), %r11")
#define XCHG_R11_FROM_PTR_RDI CMT_ASM(".byte 0X4C, 0X87, 0X1F # xchgq (%rdi), %r11")
#define XCHG_R11_FROM_PTR_RSI CMT_ASM(".byte 0X4C, 0X87, 0X1E # xchgq (%rsi), %r11")
#define XCHG_R11_FROM_PTR_RBP CMT_ASM(".byte 0X4C, 0X87, 0X5D, 0X00 # xchgq (%rbp), %r11")
#define XCHG_R11_FROM_PTR_RSP CMT_ASM(".byte 0X4C, 0X87, 0X1C, 0X24 # xchgq (%rsp), %r11")
#define XCHG_R11_FROM_PTR_R8 CMT_ASM(".byte 0X4D, 0X87, 0X18 # xchgq (%r8), %r11")
#define XCHG_R11_FROM_PTR_R9 CMT_ASM(".byte 0X4D, 0X87, 0X19 # xchgq (%r9), %r11")
#define XCHG_R11_FROM_PTR_R10 CMT_ASM(".byte 0X4D, 0X87, 0X1A # xchgq (%r10), %r11")
#define XCHG_R11_FROM_PTR_R11 CMT_ASM(".byte 0X4D, 0X87, 0X1B # xchgq (%r11), %r11")
#define XCHG_R11_FROM_PTR_R12 CMT_ASM(".byte 0X4D, 0X87, 0X1C, 0X24 # xchgq (%r12), %r11")
#define XCHG_R11_FROM_PTR_R13 CMT_ASM(".byte 0X4D, 0X87, 0X5D, 0X00 # xchgq (%r13), %r11")
#define XCHG_R11_FROM_PTR_R14 CMT_ASM(".byte 0X4D, 0X87, 0X1E # xchgq (%r14), %r11")
#define XCHG_R11_FROM_PTR_R15 CMT_ASM(".byte 0X4D, 0X87, 0X1F # xchgq (%r15), %r11")
#define XCHG_R11_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X18 # xchgq (%eax), %r11")
#define XCHG_R11_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X1B # xchgq (%ebx), %r11")
#define XCHG_R11_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X19 # xchgq (%ecx), %r11")
#define XCHG_R11_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X1A # xchgq (%edx), %r11")
#define XCHG_R11_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X1F # xchgq (%edi), %r11")
#define XCHG_R11_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X1E # xchgq (%esi), %r11")
#define XCHG_R11_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X5D, 0X00 # xchgq (%ebp), %r11")
#define XCHG_R11_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X1C, 0X24 # xchgq (%esp), %r11")

#define XCHG_R12_FROM_PTR_RAX CMT_ASM(".byte 0X4C, 0X87, 0X20 # xchgq (%rax), %r12")
#define XCHG_R12_FROM_PTR_RBX CMT_ASM(".byte 0X4C, 0X87, 0X23 # xchgq (%rbx), %r12")
#define XCHG_R12_FROM_PTR_RCX CMT_ASM(".byte 0X4C, 0X87, 0X21 # xchgq (%rcx), %r12")
#define XCHG_R12_FROM_PTR_RDX CMT_ASM(".byte 0X4C, 0X87, 0X22 # xchgq (%rdx), %r12")
#define XCHG_R12_FROM_PTR_RDI CMT_ASM(".byte 0X4C, 0X87, 0X27 # xchgq (%rdi), %r12")
#define XCHG_R12_FROM_PTR_RSI CMT_ASM(".byte 0X4C, 0X87, 0X26 # xchgq (%rsi), %r12")
#define XCHG_R12_FROM_PTR_RBP CMT_ASM(".byte 0X4C, 0X87, 0X65, 0X00 # xchgq (%rbp), %r12")
#define XCHG_R12_FROM_PTR_RSP CMT_ASM(".byte 0X4C, 0X87, 0X24, 0X24 # xchgq (%rsp), %r12")
#define XCHG_R12_FROM_PTR_R8 CMT_ASM(".byte 0X4D, 0X87, 0X20 # xchgq (%r8), %r12")
#define XCHG_R12_FROM_PTR_R9 CMT_ASM(".byte 0X4D, 0X87, 0X21 # xchgq (%r9), %r12")
#define XCHG_R12_FROM_PTR_R10 CMT_ASM(".byte 0X4D, 0X87, 0X22 # xchgq (%r10), %r12")
#define XCHG_R12_FROM_PTR_R11 CMT_ASM(".byte 0X4D, 0X87, 0X23 # xchgq (%r11), %r12")
#define XCHG_R12_FROM_PTR_R12 CMT_ASM(".byte 0X4D, 0X87, 0X24, 0X24 # xchgq (%r12), %r12")
#define XCHG_R12_FROM_PTR_R13 CMT_ASM(".byte 0X4D, 0X87, 0X65, 0X00 # xchgq (%r13), %r12")
#define XCHG_R12_FROM_PTR_R14 CMT_ASM(".byte 0X4D, 0X87, 0X26 # xchgq (%r14), %r12")
#define XCHG_R12_FROM_PTR_R15 CMT_ASM(".byte 0X4D, 0X87, 0X27 # xchgq (%r15), %r12")
#define XCHG_R12_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X20 # xchgq (%eax), %r12")
#define XCHG_R12_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X23 # xchgq (%ebx), %r12")
#define XCHG_R12_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X21 # xchgq (%ecx), %r12")
#define XCHG_R12_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X22 # xchgq (%edx), %r12")
#define XCHG_R12_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X27 # xchgq (%edi), %r12")
#define XCHG_R12_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X26 # xchgq (%esi), %r12")
#define XCHG_R12_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X65, 0X00 # xchgq (%ebp), %r12")
#define XCHG_R12_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X24, 0X24 # xchgq (%esp), %r12")

#define XCHG_R13_FROM_PTR_RAX CMT_ASM(".byte 0X4C, 0X87, 0X28 # xchgq (%rax), %r13")
#define XCHG_R13_FROM_PTR_RBX CMT_ASM(".byte 0X4C, 0X87, 0X2B # xchgq (%rbx), %r13")
#define XCHG_R13_FROM_PTR_RCX CMT_ASM(".byte 0X4C, 0X87, 0X29 # xchgq (%rcx), %r13")
#define XCHG_R13_FROM_PTR_RDX CMT_ASM(".byte 0X4C, 0X87, 0X2A # xchgq (%rdx), %r13")
#define XCHG_R13_FROM_PTR_RDI CMT_ASM(".byte 0X4C, 0X87, 0X2F # xchgq (%rdi), %r13")
#define XCHG_R13_FROM_PTR_RSI CMT_ASM(".byte 0X4C, 0X87, 0X2E # xchgq (%rsi), %r13")
#define XCHG_R13_FROM_PTR_RBP CMT_ASM(".byte 0X4C, 0X87, 0X6D, 0X00 # xchgq (%rbp), %r13")
#define XCHG_R13_FROM_PTR_RSP CMT_ASM(".byte 0X4C, 0X87, 0X2C, 0X24 # xchgq (%rsp), %r13")
#define XCHG_R13_FROM_PTR_R8 CMT_ASM(".byte 0X4D, 0X87, 0X28 # xchgq (%r8), %r13")
#define XCHG_R13_FROM_PTR_R9 CMT_ASM(".byte 0X4D, 0X87, 0X29 # xchgq (%r9), %r13")
#define XCHG_R13_FROM_PTR_R10 CMT_ASM(".byte 0X4D, 0X87, 0X2A # xchgq (%r10), %r13")
#define XCHG_R13_FROM_PTR_R11 CMT_ASM(".byte 0X4D, 0X87, 0X2B # xchgq (%r11), %r13")
#define XCHG_R13_FROM_PTR_R12 CMT_ASM(".byte 0X4D, 0X87, 0X2C, 0X24 # xchgq (%r12), %r13")
#define XCHG_R13_FROM_PTR_R13 CMT_ASM(".byte 0X4D, 0X87, 0X6D, 0X00 # xchgq (%r13), %r13")
#define XCHG_R13_FROM_PTR_R14 CMT_ASM(".byte 0X4D, 0X87, 0X2E # xchgq (%r14), %r13")
#define XCHG_R13_FROM_PTR_R15 CMT_ASM(".byte 0X4D, 0X87, 0X2F # xchgq (%r15), %r13")
#define XCHG_R13_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X28 # xchgq (%eax), %r13")
#define XCHG_R13_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X2B # xchgq (%ebx), %r13")
#define XCHG_R13_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X29 # xchgq (%ecx), %r13")
#define XCHG_R13_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X2A # xchgq (%edx), %r13")
#define XCHG_R13_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X2F # xchgq (%edi), %r13")
#define XCHG_R13_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X2E # xchgq (%esi), %r13")
#define XCHG_R13_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X6D, 0X00 # xchgq (%ebp), %r13")
#define XCHG_R13_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X2C, 0X24 # xchgq (%esp), %r13")

#define XCHG_R14_FROM_PTR_RAX CMT_ASM(".byte 0X4C, 0X87, 0X30 # xchgq (%rax), %r14")
#define XCHG_R14_FROM_PTR_RBX CMT_ASM(".byte 0X4C, 0X87, 0X33 # xchgq (%rbx), %r14")
#define XCHG_R14_FROM_PTR_RCX CMT_ASM(".byte 0X4C, 0X87, 0X31 # xchgq (%rcx), %r14")
#define XCHG_R14_FROM_PTR_RDX CMT_ASM(".byte 0X4C, 0X87, 0X32 # xchgq (%rdx), %r14")
#define XCHG_R14_FROM_PTR_RDI CMT_ASM(".byte 0X4C, 0X87, 0X37 # xchgq (%rdi), %r14")
#define XCHG_R14_FROM_PTR_RSI CMT_ASM(".byte 0X4C, 0X87, 0X36 # xchgq (%rsi), %r14")
#define XCHG_R14_FROM_PTR_RBP CMT_ASM(".byte 0X4C, 0X87, 0X75, 0X00 # xchgq (%rbp), %r14")
#define XCHG_R14_FROM_PTR_RSP CMT_ASM(".byte 0X4C, 0X87, 0X34, 0X24 # xchgq (%rsp), %r14")
#define XCHG_R14_FROM_PTR_R8 CMT_ASM(".byte 0X4D, 0X87, 0X30 # xchgq (%r8), %r14")
#define XCHG_R14_FROM_PTR_R9 CMT_ASM(".byte 0X4D, 0X87, 0X31 # xchgq (%r9), %r14")
#define XCHG_R14_FROM_PTR_R10 CMT_ASM(".byte 0X4D, 0X87, 0X32 # xchgq (%r10), %r14")
#define XCHG_R14_FROM_PTR_R11 CMT_ASM(".byte 0X4D, 0X87, 0X33 # xchgq (%r11), %r14")
#define XCHG_R14_FROM_PTR_R12 CMT_ASM(".byte 0X4D, 0X87, 0X34, 0X24 # xchgq (%r12), %r14")
#define XCHG_R14_FROM_PTR_R13 CMT_ASM(".byte 0X4D, 0X87, 0X75, 0X00 # xchgq (%r13), %r14")
#define XCHG_R14_FROM_PTR_R14 CMT_ASM(".byte 0X4D, 0X87, 0X36 # xchgq (%r14), %r14")
#define XCHG_R14_FROM_PTR_R15 CMT_ASM(".byte 0X4D, 0X87, 0X37 # xchgq (%r15), %r14")
#define XCHG_R14_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X30 # xchgq (%eax), %r14")
#define XCHG_R14_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X33 # xchgq (%ebx), %r14")
#define XCHG_R14_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X31 # xchgq (%ecx), %r14")
#define XCHG_R14_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X32 # xchgq (%edx), %r14")
#define XCHG_R14_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X37 # xchgq (%edi), %r14")
#define XCHG_R14_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X36 # xchgq (%esi), %r14")
#define XCHG_R14_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X75, 0X00 # xchgq (%ebp), %r14")
#define XCHG_R14_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X34, 0X24 # xchgq (%esp), %r14")

#define XCHG_R15_FROM_PTR_RAX CMT_ASM(".byte 0X4C, 0X87, 0X38 # xchgq (%rax), %r15")
#define XCHG_R15_FROM_PTR_RBX CMT_ASM(".byte 0X4C, 0X87, 0X3B # xchgq (%rbx), %r15")
#define XCHG_R15_FROM_PTR_RCX CMT_ASM(".byte 0X4C, 0X87, 0X39 # xchgq (%rcx), %r15")
#define XCHG_R15_FROM_PTR_RDX CMT_ASM(".byte 0X4C, 0X87, 0X3A # xchgq (%rdx), %r15")
#define XCHG_R15_FROM_PTR_RDI CMT_ASM(".byte 0X4C, 0X87, 0X3F # xchgq (%rdi), %r15")
#define XCHG_R15_FROM_PTR_RSI CMT_ASM(".byte 0X4C, 0X87, 0X3E # xchgq (%rsi), %r15")
#define XCHG_R15_FROM_PTR_RBP CMT_ASM(".byte 0X4C, 0X87, 0X7D, 0X00 # xchgq (%rbp), %r15")
#define XCHG_R15_FROM_PTR_RSP CMT_ASM(".byte 0X4C, 0X87, 0X3C, 0X24 # xchgq (%rsp), %r15")
#define XCHG_R15_FROM_PTR_R8 CMT_ASM(".byte 0X4D, 0X87, 0X38 # xchgq (%r8), %r15")
#define XCHG_R15_FROM_PTR_R9 CMT_ASM(".byte 0X4D, 0X87, 0X39 # xchgq (%r9), %r15")
#define XCHG_R15_FROM_PTR_R10 CMT_ASM(".byte 0X4D, 0X87, 0X3A # xchgq (%r10), %r15")
#define XCHG_R15_FROM_PTR_R11 CMT_ASM(".byte 0X4D, 0X87, 0X3B # xchgq (%r11), %r15")
#define XCHG_R15_FROM_PTR_R12 CMT_ASM(".byte 0X4D, 0X87, 0X3C, 0X24 # xchgq (%r12), %r15")
#define XCHG_R15_FROM_PTR_R13 CMT_ASM(".byte 0X4D, 0X87, 0X7D, 0X00 # xchgq (%r13), %r15")
#define XCHG_R15_FROM_PTR_R14 CMT_ASM(".byte 0X4D, 0X87, 0X3E # xchgq (%r14), %r15")
#define XCHG_R15_FROM_PTR_R15 CMT_ASM(".byte 0X4D, 0X87, 0X3F # xchgq (%r15), %r15")
#define XCHG_R15_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X38 # xchgq (%eax), %r15")
#define XCHG_R15_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X3B # xchgq (%ebx), %r15")
#define XCHG_R15_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X39 # xchgq (%ecx), %r15")
#define XCHG_R15_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X3A # xchgq (%edx), %r15")
#define XCHG_R15_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X3F # xchgq (%edi), %r15")
#define XCHG_R15_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X3E # xchgq (%esi), %r15")
#define XCHG_R15_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X7D, 0X00 # xchgq (%ebp), %r15")
#define XCHG_R15_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X3C, 0X24 # xchgq (%esp), %r15")

#define XCHG_RAX_TO_PTR_RAX CMT_ASM(".byte 0X48, 0X87, 0X00 # xchgq %rax, (%rax)")
#define XCHG_RAX_TO_PTR_RBX CMT_ASM(".byte 0X48, 0X87, 0X03 # xchgq %rax, (%rbx)")
#define XCHG_RAX_TO_PTR_RCX CMT_ASM(".byte 0X48, 0X87, 0X01 # xchgq %rax, (%rcx)")
#define XCHG_RAX_TO_PTR_RDX CMT_ASM(".byte 0X48, 0X87, 0X02 # xchgq %rax, (%rdx)")
#define XCHG_RAX_TO_PTR_RDI CMT_ASM(".byte 0X48, 0X87, 0X07 # xchgq %rax, (%rdi)")
#define XCHG_RAX_TO_PTR_RSI CMT_ASM(".byte 0X48, 0X87, 0X06 # xchgq %rax, (%rsi)")
#define XCHG_RAX_TO_PTR_RBP CMT_ASM(".byte 0X48, 0X87, 0X45, 0X00 # xchgq %rax, (%rbp)")
#define XCHG_RAX_TO_PTR_RSP CMT_ASM(".byte 0X48, 0X87, 0X04, 0X24 # xchgq %rax, (%rsp)")
#define XCHG_RAX_TO_PTR_R8 CMT_ASM(".byte 0X49, 0X87, 0X00 # xchgq %rax, (%r8)")
#define XCHG_RAX_TO_PTR_R9 CMT_ASM(".byte 0X49, 0X87, 0X01 # xchgq %rax, (%r9)")
#define XCHG_RAX_TO_PTR_R10 CMT_ASM(".byte 0X49, 0X87, 0X02 # xchgq %rax, (%r10)")
#define XCHG_RAX_TO_PTR_R11 CMT_ASM(".byte 0X49, 0X87, 0X03 # xchgq %rax, (%r11)")
#define XCHG_RAX_TO_PTR_R12 CMT_ASM(".byte 0X49, 0X87, 0X04, 0X24 # xchgq %rax, (%r12)")
#define XCHG_RAX_TO_PTR_R13 CMT_ASM(".byte 0X49, 0X87, 0X45, 0X00 # xchgq %rax, (%r13)")
#define XCHG_RAX_TO_PTR_R14 CMT_ASM(".byte 0X49, 0X87, 0X06 # xchgq %rax, (%r14)")
#define XCHG_RAX_TO_PTR_R15 CMT_ASM(".byte 0X49, 0X87, 0X07 # xchgq %rax, (%r15)")
#define XCHG_RAX_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X87, 0X00 # xchgq %rax, (%eax)")
#define XCHG_RAX_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X87, 0X03 # xchgq %rax, (%ebx)")
#define XCHG_RAX_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X87, 0X01 # xchgq %rax, (%ecx)")
#define XCHG_RAX_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X87, 0X02 # xchgq %rax, (%edx)")
#define XCHG_RAX_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X87, 0X07 # xchgq %rax, (%edi)")
#define XCHG_RAX_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X87, 0X06 # xchgq %rax, (%esi)")
#define XCHG_RAX_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X87, 0X45, 0X00 # xchgq %rax, (%ebp)")
#define XCHG_RAX_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X87, 0X04, 0X24 # xchgq %rax, (%esp)")

#define XCHG_RBX_TO_PTR_RAX CMT_ASM(".byte 0X48, 0X87, 0X18 # xchgq %rbx, (%rax)")
#define XCHG_RBX_TO_PTR_RBX CMT_ASM(".byte 0X48, 0X87, 0X1B # xchgq %rbx, (%rbx)")
#define XCHG_RBX_TO_PTR_RCX CMT_ASM(".byte 0X48, 0X87, 0X19 # xchgq %rbx, (%rcx)")
#define XCHG_RBX_TO_PTR_RDX CMT_ASM(".byte 0X48, 0X87, 0X1A # xchgq %rbx, (%rdx)")
#define XCHG_RBX_TO_PTR_RDI CMT_ASM(".byte 0X48, 0X87, 0X1F # xchgq %rbx, (%rdi)")
#define XCHG_RBX_TO_PTR_RSI CMT_ASM(".byte 0X48, 0X87, 0X1E # xchgq %rbx, (%rsi)")
#define XCHG_RBX_TO_PTR_RBP CMT_ASM(".byte 0X48, 0X87, 0X5D, 0X00 # xchgq %rbx, (%rbp)")
#define XCHG_RBX_TO_PTR_RSP CMT_ASM(".byte 0X48, 0X87, 0X1C, 0X24 # xchgq %rbx, (%rsp)")
#define XCHG_RBX_TO_PTR_R8 CMT_ASM(".byte 0X49, 0X87, 0X18 # xchgq %rbx, (%r8)")
#define XCHG_RBX_TO_PTR_R9 CMT_ASM(".byte 0X49, 0X87, 0X19 # xchgq %rbx, (%r9)")
#define XCHG_RBX_TO_PTR_R10 CMT_ASM(".byte 0X49, 0X87, 0X1A # xchgq %rbx, (%r10)")
#define XCHG_RBX_TO_PTR_R11 CMT_ASM(".byte 0X49, 0X87, 0X1B # xchgq %rbx, (%r11)")
#define XCHG_RBX_TO_PTR_R12 CMT_ASM(".byte 0X49, 0X87, 0X1C, 0X24 # xchgq %rbx, (%r12)")
#define XCHG_RBX_TO_PTR_R13 CMT_ASM(".byte 0X49, 0X87, 0X5D, 0X00 # xchgq %rbx, (%r13)")
#define XCHG_RBX_TO_PTR_R14 CMT_ASM(".byte 0X49, 0X87, 0X1E # xchgq %rbx, (%r14)")
#define XCHG_RBX_TO_PTR_R15 CMT_ASM(".byte 0X49, 0X87, 0X1F # xchgq %rbx, (%r15)")
#define XCHG_RBX_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X87, 0X18 # xchgq %rbx, (%eax)")
#define XCHG_RBX_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X87, 0X1B # xchgq %rbx, (%ebx)")
#define XCHG_RBX_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X87, 0X19 # xchgq %rbx, (%ecx)")
#define XCHG_RBX_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X87, 0X1A # xchgq %rbx, (%edx)")
#define XCHG_RBX_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X87, 0X1F # xchgq %rbx, (%edi)")
#define XCHG_RBX_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X87, 0X1E # xchgq %rbx, (%esi)")
#define XCHG_RBX_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X87, 0X5D, 0X00 # xchgq %rbx, (%ebp)")
#define XCHG_RBX_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X87, 0X1C, 0X24 # xchgq %rbx, (%esp)")

#define XCHG_RCX_TO_PTR_RAX CMT_ASM(".byte 0X48, 0X87, 0X08 # xchgq %rcx, (%rax)")
#define XCHG_RCX_TO_PTR_RBX CMT_ASM(".byte 0X48, 0X87, 0X0B # xchgq %rcx, (%rbx)")
#define XCHG_RCX_TO_PTR_RCX CMT_ASM(".byte 0X48, 0X87, 0X09 # xchgq %rcx, (%rcx)")
#define XCHG_RCX_TO_PTR_RDX CMT_ASM(".byte 0X48, 0X87, 0X0A # xchgq %rcx, (%rdx)")
#define XCHG_RCX_TO_PTR_RDI CMT_ASM(".byte 0X48, 0X87, 0X0F # xchgq %rcx, (%rdi)")
#define XCHG_RCX_TO_PTR_RSI CMT_ASM(".byte 0X48, 0X87, 0X0E # xchgq %rcx, (%rsi)")
#define XCHG_RCX_TO_PTR_RBP CMT_ASM(".byte 0X48, 0X87, 0X4D, 0X00 # xchgq %rcx, (%rbp)")
#define XCHG_RCX_TO_PTR_RSP CMT_ASM(".byte 0X48, 0X87, 0X0C, 0X24 # xchgq %rcx, (%rsp)")
#define XCHG_RCX_TO_PTR_R8 CMT_ASM(".byte 0X49, 0X87, 0X08 # xchgq %rcx, (%r8)")
#define XCHG_RCX_TO_PTR_R9 CMT_ASM(".byte 0X49, 0X87, 0X09 # xchgq %rcx, (%r9)")
#define XCHG_RCX_TO_PTR_R10 CMT_ASM(".byte 0X49, 0X87, 0X0A # xchgq %rcx, (%r10)")
#define XCHG_RCX_TO_PTR_R11 CMT_ASM(".byte 0X49, 0X87, 0X0B # xchgq %rcx, (%r11)")
#define XCHG_RCX_TO_PTR_R12 CMT_ASM(".byte 0X49, 0X87, 0X0C, 0X24 # xchgq %rcx, (%r12)")
#define XCHG_RCX_TO_PTR_R13 CMT_ASM(".byte 0X49, 0X87, 0X4D, 0X00 # xchgq %rcx, (%r13)")
#define XCHG_RCX_TO_PTR_R14 CMT_ASM(".byte 0X49, 0X87, 0X0E # xchgq %rcx, (%r14)")
#define XCHG_RCX_TO_PTR_R15 CMT_ASM(".byte 0X49, 0X87, 0X0F # xchgq %rcx, (%r15)")
#define XCHG_RCX_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X87, 0X08 # xchgq %rcx, (%eax)")
#define XCHG_RCX_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X87, 0X0B # xchgq %rcx, (%ebx)")
#define XCHG_RCX_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X87, 0X09 # xchgq %rcx, (%ecx)")
#define XCHG_RCX_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X87, 0X0A # xchgq %rcx, (%edx)")
#define XCHG_RCX_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X87, 0X0F # xchgq %rcx, (%edi)")
#define XCHG_RCX_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X87, 0X0E # xchgq %rcx, (%esi)")
#define XCHG_RCX_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X87, 0X4D, 0X00 # xchgq %rcx, (%ebp)")
#define XCHG_RCX_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X87, 0X0C, 0X24 # xchgq %rcx, (%esp)")

#define XCHG_RDX_TO_PTR_RAX CMT_ASM(".byte 0X48, 0X87, 0X10 # xchgq %rdx, (%rax)")
#define XCHG_RDX_TO_PTR_RBX CMT_ASM(".byte 0X48, 0X87, 0X13 # xchgq %rdx, (%rbx)")
#define XCHG_RDX_TO_PTR_RCX CMT_ASM(".byte 0X48, 0X87, 0X11 # xchgq %rdx, (%rcx)")
#define XCHG_RDX_TO_PTR_RDX CMT_ASM(".byte 0X48, 0X87, 0X12 # xchgq %rdx, (%rdx)")
#define XCHG_RDX_TO_PTR_RDI CMT_ASM(".byte 0X48, 0X87, 0X17 # xchgq %rdx, (%rdi)")
#define XCHG_RDX_TO_PTR_RSI CMT_ASM(".byte 0X48, 0X87, 0X16 # xchgq %rdx, (%rsi)")
#define XCHG_RDX_TO_PTR_RBP CMT_ASM(".byte 0X48, 0X87, 0X55, 0X00 # xchgq %rdx, (%rbp)")
#define XCHG_RDX_TO_PTR_RSP CMT_ASM(".byte 0X48, 0X87, 0X14, 0X24 # xchgq %rdx, (%rsp)")
#define XCHG_RDX_TO_PTR_R8 CMT_ASM(".byte 0X49, 0X87, 0X10 # xchgq %rdx, (%r8)")
#define XCHG_RDX_TO_PTR_R9 CMT_ASM(".byte 0X49, 0X87, 0X11 # xchgq %rdx, (%r9)")
#define XCHG_RDX_TO_PTR_R10 CMT_ASM(".byte 0X49, 0X87, 0X12 # xchgq %rdx, (%r10)")
#define XCHG_RDX_TO_PTR_R11 CMT_ASM(".byte 0X49, 0X87, 0X13 # xchgq %rdx, (%r11)")
#define XCHG_RDX_TO_PTR_R12 CMT_ASM(".byte 0X49, 0X87, 0X14, 0X24 # xchgq %rdx, (%r12)")
#define XCHG_RDX_TO_PTR_R13 CMT_ASM(".byte 0X49, 0X87, 0X55, 0X00 # xchgq %rdx, (%r13)")
#define XCHG_RDX_TO_PTR_R14 CMT_ASM(".byte 0X49, 0X87, 0X16 # xchgq %rdx, (%r14)")
#define XCHG_RDX_TO_PTR_R15 CMT_ASM(".byte 0X49, 0X87, 0X17 # xchgq %rdx, (%r15)")
#define XCHG_RDX_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X87, 0X10 # xchgq %rdx, (%eax)")
#define XCHG_RDX_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X87, 0X13 # xchgq %rdx, (%ebx)")
#define XCHG_RDX_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X87, 0X11 # xchgq %rdx, (%ecx)")
#define XCHG_RDX_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X87, 0X12 # xchgq %rdx, (%edx)")
#define XCHG_RDX_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X87, 0X17 # xchgq %rdx, (%edi)")
#define XCHG_RDX_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X87, 0X16 # xchgq %rdx, (%esi)")
#define XCHG_RDX_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X87, 0X55, 0X00 # xchgq %rdx, (%ebp)")
#define XCHG_RDX_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X87, 0X14, 0X24 # xchgq %rdx, (%esp)")

#define XCHG_RDI_TO_PTR_RAX CMT_ASM(".byte 0X48, 0X87, 0X38 # xchgq %rdi, (%rax)")
#define XCHG_RDI_TO_PTR_RBX CMT_ASM(".byte 0X48, 0X87, 0X3B # xchgq %rdi, (%rbx)")
#define XCHG_RDI_TO_PTR_RCX CMT_ASM(".byte 0X48, 0X87, 0X39 # xchgq %rdi, (%rcx)")
#define XCHG_RDI_TO_PTR_RDX CMT_ASM(".byte 0X48, 0X87, 0X3A # xchgq %rdi, (%rdx)")
#define XCHG_RDI_TO_PTR_RDI CMT_ASM(".byte 0X48, 0X87, 0X3F # xchgq %rdi, (%rdi)")
#define XCHG_RDI_TO_PTR_RSI CMT_ASM(".byte 0X48, 0X87, 0X3E # xchgq %rdi, (%rsi)")
#define XCHG_RDI_TO_PTR_RBP CMT_ASM(".byte 0X48, 0X87, 0X7D, 0X00 # xchgq %rdi, (%rbp)")
#define XCHG_RDI_TO_PTR_RSP CMT_ASM(".byte 0X48, 0X87, 0X3C, 0X24 # xchgq %rdi, (%rsp)")
#define XCHG_RDI_TO_PTR_R8 CMT_ASM(".byte 0X49, 0X87, 0X38 # xchgq %rdi, (%r8)")
#define XCHG_RDI_TO_PTR_R9 CMT_ASM(".byte 0X49, 0X87, 0X39 # xchgq %rdi, (%r9)")
#define XCHG_RDI_TO_PTR_R10 CMT_ASM(".byte 0X49, 0X87, 0X3A # xchgq %rdi, (%r10)")
#define XCHG_RDI_TO_PTR_R11 CMT_ASM(".byte 0X49, 0X87, 0X3B # xchgq %rdi, (%r11)")
#define XCHG_RDI_TO_PTR_R12 CMT_ASM(".byte 0X49, 0X87, 0X3C, 0X24 # xchgq %rdi, (%r12)")
#define XCHG_RDI_TO_PTR_R13 CMT_ASM(".byte 0X49, 0X87, 0X7D, 0X00 # xchgq %rdi, (%r13)")
#define XCHG_RDI_TO_PTR_R14 CMT_ASM(".byte 0X49, 0X87, 0X3E # xchgq %rdi, (%r14)")
#define XCHG_RDI_TO_PTR_R15 CMT_ASM(".byte 0X49, 0X87, 0X3F # xchgq %rdi, (%r15)")
#define XCHG_RDI_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X87, 0X38 # xchgq %rdi, (%eax)")
#define XCHG_RDI_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X87, 0X3B # xchgq %rdi, (%ebx)")
#define XCHG_RDI_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X87, 0X39 # xchgq %rdi, (%ecx)")
#define XCHG_RDI_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X87, 0X3A # xchgq %rdi, (%edx)")
#define XCHG_RDI_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X87, 0X3F # xchgq %rdi, (%edi)")
#define XCHG_RDI_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X87, 0X3E # xchgq %rdi, (%esi)")
#define XCHG_RDI_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X87, 0X7D, 0X00 # xchgq %rdi, (%ebp)")
#define XCHG_RDI_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X87, 0X3C, 0X24 # xchgq %rdi, (%esp)")

#define XCHG_RSI_TO_PTR_RAX CMT_ASM(".byte 0X48, 0X87, 0X30 # xchgq %rsi, (%rax)")
#define XCHG_RSI_TO_PTR_RBX CMT_ASM(".byte 0X48, 0X87, 0X33 # xchgq %rsi, (%rbx)")
#define XCHG_RSI_TO_PTR_RCX CMT_ASM(".byte 0X48, 0X87, 0X31 # xchgq %rsi, (%rcx)")
#define XCHG_RSI_TO_PTR_RDX CMT_ASM(".byte 0X48, 0X87, 0X32 # xchgq %rsi, (%rdx)")
#define XCHG_RSI_TO_PTR_RDI CMT_ASM(".byte 0X48, 0X87, 0X37 # xchgq %rsi, (%rdi)")
#define XCHG_RSI_TO_PTR_RSI CMT_ASM(".byte 0X48, 0X87, 0X36 # xchgq %rsi, (%rsi)")
#define XCHG_RSI_TO_PTR_RBP CMT_ASM(".byte 0X48, 0X87, 0X75, 0X00 # xchgq %rsi, (%rbp)")
#define XCHG_RSI_TO_PTR_RSP CMT_ASM(".byte 0X48, 0X87, 0X34, 0X24 # xchgq %rsi, (%rsp)")
#define XCHG_RSI_TO_PTR_R8 CMT_ASM(".byte 0X49, 0X87, 0X30 # xchgq %rsi, (%r8)")
#define XCHG_RSI_TO_PTR_R9 CMT_ASM(".byte 0X49, 0X87, 0X31 # xchgq %rsi, (%r9)")
#define XCHG_RSI_TO_PTR_R10 CMT_ASM(".byte 0X49, 0X87, 0X32 # xchgq %rsi, (%r10)")
#define XCHG_RSI_TO_PTR_R11 CMT_ASM(".byte 0X49, 0X87, 0X33 # xchgq %rsi, (%r11)")
#define XCHG_RSI_TO_PTR_R12 CMT_ASM(".byte 0X49, 0X87, 0X34, 0X24 # xchgq %rsi, (%r12)")
#define XCHG_RSI_TO_PTR_R13 CMT_ASM(".byte 0X49, 0X87, 0X75, 0X00 # xchgq %rsi, (%r13)")
#define XCHG_RSI_TO_PTR_R14 CMT_ASM(".byte 0X49, 0X87, 0X36 # xchgq %rsi, (%r14)")
#define XCHG_RSI_TO_PTR_R15 CMT_ASM(".byte 0X49, 0X87, 0X37 # xchgq %rsi, (%r15)")
#define XCHG_RSI_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X87, 0X30 # xchgq %rsi, (%eax)")
#define XCHG_RSI_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X87, 0X33 # xchgq %rsi, (%ebx)")
#define XCHG_RSI_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X87, 0X31 # xchgq %rsi, (%ecx)")
#define XCHG_RSI_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X87, 0X32 # xchgq %rsi, (%edx)")
#define XCHG_RSI_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X87, 0X37 # xchgq %rsi, (%edi)")
#define XCHG_RSI_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X87, 0X36 # xchgq %rsi, (%esi)")
#define XCHG_RSI_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X87, 0X75, 0X00 # xchgq %rsi, (%ebp)")
#define XCHG_RSI_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X87, 0X34, 0X24 # xchgq %rsi, (%esp)")

#define XCHG_RBP_TO_PTR_RAX CMT_ASM(".byte 0X48, 0X87, 0X28 # xchgq %rbp, (%rax)")
#define XCHG_RBP_TO_PTR_RBX CMT_ASM(".byte 0X48, 0X87, 0X2B # xchgq %rbp, (%rbx)")
#define XCHG_RBP_TO_PTR_RCX CMT_ASM(".byte 0X48, 0X87, 0X29 # xchgq %rbp, (%rcx)")
#define XCHG_RBP_TO_PTR_RDX CMT_ASM(".byte 0X48, 0X87, 0X2A # xchgq %rbp, (%rdx)")
#define XCHG_RBP_TO_PTR_RDI CMT_ASM(".byte 0X48, 0X87, 0X2F # xchgq %rbp, (%rdi)")
#define XCHG_RBP_TO_PTR_RSI CMT_ASM(".byte 0X48, 0X87, 0X2E # xchgq %rbp, (%rsi)")
#define XCHG_RBP_TO_PTR_RBP CMT_ASM(".byte 0X48, 0X87, 0X6D, 0X00 # xchgq %rbp, (%rbp)")
#define XCHG_RBP_TO_PTR_RSP CMT_ASM(".byte 0X48, 0X87, 0X2C, 0X24 # xchgq %rbp, (%rsp)")
#define XCHG_RBP_TO_PTR_R8 CMT_ASM(".byte 0X49, 0X87, 0X28 # xchgq %rbp, (%r8)")
#define XCHG_RBP_TO_PTR_R9 CMT_ASM(".byte 0X49, 0X87, 0X29 # xchgq %rbp, (%r9)")
#define XCHG_RBP_TO_PTR_R10 CMT_ASM(".byte 0X49, 0X87, 0X2A # xchgq %rbp, (%r10)")
#define XCHG_RBP_TO_PTR_R11 CMT_ASM(".byte 0X49, 0X87, 0X2B # xchgq %rbp, (%r11)")
#define XCHG_RBP_TO_PTR_R12 CMT_ASM(".byte 0X49, 0X87, 0X2C, 0X24 # xchgq %rbp, (%r12)")
#define XCHG_RBP_TO_PTR_R13 CMT_ASM(".byte 0X49, 0X87, 0X6D, 0X00 # xchgq %rbp, (%r13)")
#define XCHG_RBP_TO_PTR_R14 CMT_ASM(".byte 0X49, 0X87, 0X2E # xchgq %rbp, (%r14)")
#define XCHG_RBP_TO_PTR_R15 CMT_ASM(".byte 0X49, 0X87, 0X2F # xchgq %rbp, (%r15)")
#define XCHG_RBP_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X87, 0X28 # xchgq %rbp, (%eax)")
#define XCHG_RBP_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X87, 0X2B # xchgq %rbp, (%ebx)")
#define XCHG_RBP_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X87, 0X29 # xchgq %rbp, (%ecx)")
#define XCHG_RBP_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X87, 0X2A # xchgq %rbp, (%edx)")
#define XCHG_RBP_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X87, 0X2F # xchgq %rbp, (%edi)")
#define XCHG_RBP_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X87, 0X2E # xchgq %rbp, (%esi)")
#define XCHG_RBP_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X87, 0X6D, 0X00 # xchgq %rbp, (%ebp)")
#define XCHG_RBP_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X87, 0X2C, 0X24 # xchgq %rbp, (%esp)")

#define XCHG_RSP_TO_PTR_RAX CMT_ASM(".byte 0X48, 0X87, 0X20 # xchgq %rsp, (%rax)")
#define XCHG_RSP_TO_PTR_RBX CMT_ASM(".byte 0X48, 0X87, 0X23 # xchgq %rsp, (%rbx)")
#define XCHG_RSP_TO_PTR_RCX CMT_ASM(".byte 0X48, 0X87, 0X21 # xchgq %rsp, (%rcx)")
#define XCHG_RSP_TO_PTR_RDX CMT_ASM(".byte 0X48, 0X87, 0X22 # xchgq %rsp, (%rdx)")
#define XCHG_RSP_TO_PTR_RDI CMT_ASM(".byte 0X48, 0X87, 0X27 # xchgq %rsp, (%rdi)")
#define XCHG_RSP_TO_PTR_RSI CMT_ASM(".byte 0X48, 0X87, 0X26 # xchgq %rsp, (%rsi)")
#define XCHG_RSP_TO_PTR_RBP CMT_ASM(".byte 0X48, 0X87, 0X65, 0X00 # xchgq %rsp, (%rbp)")
#define XCHG_RSP_TO_PTR_RSP CMT_ASM(".byte 0X48, 0X87, 0X24, 0X24 # xchgq %rsp, (%rsp)")
#define XCHG_RSP_TO_PTR_R8 CMT_ASM(".byte 0X49, 0X87, 0X20 # xchgq %rsp, (%r8)")
#define XCHG_RSP_TO_PTR_R9 CMT_ASM(".byte 0X49, 0X87, 0X21 # xchgq %rsp, (%r9)")
#define XCHG_RSP_TO_PTR_R10 CMT_ASM(".byte 0X49, 0X87, 0X22 # xchgq %rsp, (%r10)")
#define XCHG_RSP_TO_PTR_R11 CMT_ASM(".byte 0X49, 0X87, 0X23 # xchgq %rsp, (%r11)")
#define XCHG_RSP_TO_PTR_R12 CMT_ASM(".byte 0X49, 0X87, 0X24, 0X24 # xchgq %rsp, (%r12)")
#define XCHG_RSP_TO_PTR_R13 CMT_ASM(".byte 0X49, 0X87, 0X65, 0X00 # xchgq %rsp, (%r13)")
#define XCHG_RSP_TO_PTR_R14 CMT_ASM(".byte 0X49, 0X87, 0X26 # xchgq %rsp, (%r14)")
#define XCHG_RSP_TO_PTR_R15 CMT_ASM(".byte 0X49, 0X87, 0X27 # xchgq %rsp, (%r15)")
#define XCHG_RSP_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X87, 0X20 # xchgq %rsp, (%eax)")
#define XCHG_RSP_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X87, 0X23 # xchgq %rsp, (%ebx)")
#define XCHG_RSP_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X87, 0X21 # xchgq %rsp, (%ecx)")
#define XCHG_RSP_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X87, 0X22 # xchgq %rsp, (%edx)")
#define XCHG_RSP_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X87, 0X27 # xchgq %rsp, (%edi)")
#define XCHG_RSP_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X87, 0X26 # xchgq %rsp, (%esi)")
#define XCHG_RSP_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X87, 0X65, 0X00 # xchgq %rsp, (%ebp)")
#define XCHG_RSP_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X87, 0X24, 0X24 # xchgq %rsp, (%esp)")

#define XCHG_R8_TO_PTR_RAX CMT_ASM(".byte 0X4C, 0X87, 0X00 # xchgq %r8, (%rax)")
#define XCHG_R8_TO_PTR_RBX CMT_ASM(".byte 0X4C, 0X87, 0X03 # xchgq %r8, (%rbx)")
#define XCHG_R8_TO_PTR_RCX CMT_ASM(".byte 0X4C, 0X87, 0X01 # xchgq %r8, (%rcx)")
#define XCHG_R8_TO_PTR_RDX CMT_ASM(".byte 0X4C, 0X87, 0X02 # xchgq %r8, (%rdx)")
#define XCHG_R8_TO_PTR_RDI CMT_ASM(".byte 0X4C, 0X87, 0X07 # xchgq %r8, (%rdi)")
#define XCHG_R8_TO_PTR_RSI CMT_ASM(".byte 0X4C, 0X87, 0X06 # xchgq %r8, (%rsi)")
#define XCHG_R8_TO_PTR_RBP CMT_ASM(".byte 0X4C, 0X87, 0X45, 0X00 # xchgq %r8, (%rbp)")
#define XCHG_R8_TO_PTR_RSP CMT_ASM(".byte 0X4C, 0X87, 0X04, 0X24 # xchgq %r8, (%rsp)")
#define XCHG_R8_TO_PTR_R8 CMT_ASM(".byte 0X4D, 0X87, 0X00 # xchgq %r8, (%r8)")
#define XCHG_R8_TO_PTR_R9 CMT_ASM(".byte 0X4D, 0X87, 0X01 # xchgq %r8, (%r9)")
#define XCHG_R8_TO_PTR_R10 CMT_ASM(".byte 0X4D, 0X87, 0X02 # xchgq %r8, (%r10)")
#define XCHG_R8_TO_PTR_R11 CMT_ASM(".byte 0X4D, 0X87, 0X03 # xchgq %r8, (%r11)")
#define XCHG_R8_TO_PTR_R12 CMT_ASM(".byte 0X4D, 0X87, 0X04, 0X24 # xchgq %r8, (%r12)")
#define XCHG_R8_TO_PTR_R13 CMT_ASM(".byte 0X4D, 0X87, 0X45, 0X00 # xchgq %r8, (%r13)")
#define XCHG_R8_TO_PTR_R14 CMT_ASM(".byte 0X4D, 0X87, 0X06 # xchgq %r8, (%r14)")
#define XCHG_R8_TO_PTR_R15 CMT_ASM(".byte 0X4D, 0X87, 0X07 # xchgq %r8, (%r15)")
#define XCHG_R8_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X00 # xchgq %r8, (%eax)")
#define XCHG_R8_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X03 # xchgq %r8, (%ebx)")
#define XCHG_R8_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X01 # xchgq %r8, (%ecx)")
#define XCHG_R8_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X02 # xchgq %r8, (%edx)")
#define XCHG_R8_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X07 # xchgq %r8, (%edi)")
#define XCHG_R8_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X06 # xchgq %r8, (%esi)")
#define XCHG_R8_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X45, 0X00 # xchgq %r8, (%ebp)")
#define XCHG_R8_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X04, 0X24 # xchgq %r8, (%esp)")

#define XCHG_R9_TO_PTR_RAX CMT_ASM(".byte 0X4C, 0X87, 0X08 # xchgq %r9, (%rax)")
#define XCHG_R9_TO_PTR_RBX CMT_ASM(".byte 0X4C, 0X87, 0X0B # xchgq %r9, (%rbx)")
#define XCHG_R9_TO_PTR_RCX CMT_ASM(".byte 0X4C, 0X87, 0X09 # xchgq %r9, (%rcx)")
#define XCHG_R9_TO_PTR_RDX CMT_ASM(".byte 0X4C, 0X87, 0X0A # xchgq %r9, (%rdx)")
#define XCHG_R9_TO_PTR_RDI CMT_ASM(".byte 0X4C, 0X87, 0X0F # xchgq %r9, (%rdi)")
#define XCHG_R9_TO_PTR_RSI CMT_ASM(".byte 0X4C, 0X87, 0X0E # xchgq %r9, (%rsi)")
#define XCHG_R9_TO_PTR_RBP CMT_ASM(".byte 0X4C, 0X87, 0X4D, 0X00 # xchgq %r9, (%rbp)")
#define XCHG_R9_TO_PTR_RSP CMT_ASM(".byte 0X4C, 0X87, 0X0C, 0X24 # xchgq %r9, (%rsp)")
#define XCHG_R9_TO_PTR_R8 CMT_ASM(".byte 0X4D, 0X87, 0X08 # xchgq %r9, (%r8)")
#define XCHG_R9_TO_PTR_R9 CMT_ASM(".byte 0X4D, 0X87, 0X09 # xchgq %r9, (%r9)")
#define XCHG_R9_TO_PTR_R10 CMT_ASM(".byte 0X4D, 0X87, 0X0A # xchgq %r9, (%r10)")
#define XCHG_R9_TO_PTR_R11 CMT_ASM(".byte 0X4D, 0X87, 0X0B # xchgq %r9, (%r11)")
#define XCHG_R9_TO_PTR_R12 CMT_ASM(".byte 0X4D, 0X87, 0X0C, 0X24 # xchgq %r9, (%r12)")
#define XCHG_R9_TO_PTR_R13 CMT_ASM(".byte 0X4D, 0X87, 0X4D, 0X00 # xchgq %r9, (%r13)")
#define XCHG_R9_TO_PTR_R14 CMT_ASM(".byte 0X4D, 0X87, 0X0E # xchgq %r9, (%r14)")
#define XCHG_R9_TO_PTR_R15 CMT_ASM(".byte 0X4D, 0X87, 0X0F # xchgq %r9, (%r15)")
#define XCHG_R9_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X08 # xchgq %r9, (%eax)")
#define XCHG_R9_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X0B # xchgq %r9, (%ebx)")
#define XCHG_R9_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X09 # xchgq %r9, (%ecx)")
#define XCHG_R9_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X0A # xchgq %r9, (%edx)")
#define XCHG_R9_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X0F # xchgq %r9, (%edi)")
#define XCHG_R9_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X0E # xchgq %r9, (%esi)")
#define XCHG_R9_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X4D, 0X00 # xchgq %r9, (%ebp)")
#define XCHG_R9_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X0C, 0X24 # xchgq %r9, (%esp)")

#define XCHG_R10_TO_PTR_RAX CMT_ASM(".byte 0X4C, 0X87, 0X10 # xchgq %r10, (%rax)")
#define XCHG_R10_TO_PTR_RBX CMT_ASM(".byte 0X4C, 0X87, 0X13 # xchgq %r10, (%rbx)")
#define XCHG_R10_TO_PTR_RCX CMT_ASM(".byte 0X4C, 0X87, 0X11 # xchgq %r10, (%rcx)")
#define XCHG_R10_TO_PTR_RDX CMT_ASM(".byte 0X4C, 0X87, 0X12 # xchgq %r10, (%rdx)")
#define XCHG_R10_TO_PTR_RDI CMT_ASM(".byte 0X4C, 0X87, 0X17 # xchgq %r10, (%rdi)")
#define XCHG_R10_TO_PTR_RSI CMT_ASM(".byte 0X4C, 0X87, 0X16 # xchgq %r10, (%rsi)")
#define XCHG_R10_TO_PTR_RBP CMT_ASM(".byte 0X4C, 0X87, 0X55, 0X00 # xchgq %r10, (%rbp)")
#define XCHG_R10_TO_PTR_RSP CMT_ASM(".byte 0X4C, 0X87, 0X14, 0X24 # xchgq %r10, (%rsp)")
#define XCHG_R10_TO_PTR_R8 CMT_ASM(".byte 0X4D, 0X87, 0X10 # xchgq %r10, (%r8)")
#define XCHG_R10_TO_PTR_R9 CMT_ASM(".byte 0X4D, 0X87, 0X11 # xchgq %r10, (%r9)")
#define XCHG_R10_TO_PTR_R10 CMT_ASM(".byte 0X4D, 0X87, 0X12 # xchgq %r10, (%r10)")
#define XCHG_R10_TO_PTR_R11 CMT_ASM(".byte 0X4D, 0X87, 0X13 # xchgq %r10, (%r11)")
#define XCHG_R10_TO_PTR_R12 CMT_ASM(".byte 0X4D, 0X87, 0X14, 0X24 # xchgq %r10, (%r12)")
#define XCHG_R10_TO_PTR_R13 CMT_ASM(".byte 0X4D, 0X87, 0X55, 0X00 # xchgq %r10, (%r13)")
#define XCHG_R10_TO_PTR_R14 CMT_ASM(".byte 0X4D, 0X87, 0X16 # xchgq %r10, (%r14)")
#define XCHG_R10_TO_PTR_R15 CMT_ASM(".byte 0X4D, 0X87, 0X17 # xchgq %r10, (%r15)")
#define XCHG_R10_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X10 # xchgq %r10, (%eax)")
#define XCHG_R10_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X13 # xchgq %r10, (%ebx)")
#define XCHG_R10_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X11 # xchgq %r10, (%ecx)")
#define XCHG_R10_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X12 # xchgq %r10, (%edx)")
#define XCHG_R10_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X17 # xchgq %r10, (%edi)")
#define XCHG_R10_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X16 # xchgq %r10, (%esi)")
#define XCHG_R10_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X55, 0X00 # xchgq %r10, (%ebp)")
#define XCHG_R10_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X14, 0X24 # xchgq %r10, (%esp)")

#define XCHG_R11_TO_PTR_RAX CMT_ASM(".byte 0X4C, 0X87, 0X18 # xchgq %r11, (%rax)")
#define XCHG_R11_TO_PTR_RBX CMT_ASM(".byte 0X4C, 0X87, 0X1B # xchgq %r11, (%rbx)")
#define XCHG_R11_TO_PTR_RCX CMT_ASM(".byte 0X4C, 0X87, 0X19 # xchgq %r11, (%rcx)")
#define XCHG_R11_TO_PTR_RDX CMT_ASM(".byte 0X4C, 0X87, 0X1A # xchgq %r11, (%rdx)")
#define XCHG_R11_TO_PTR_RDI CMT_ASM(".byte 0X4C, 0X87, 0X1F # xchgq %r11, (%rdi)")
#define XCHG_R11_TO_PTR_RSI CMT_ASM(".byte 0X4C, 0X87, 0X1E # xchgq %r11, (%rsi)")
#define XCHG_R11_TO_PTR_RBP CMT_ASM(".byte 0X4C, 0X87, 0X5D, 0X00 # xchgq %r11, (%rbp)")
#define XCHG_R11_TO_PTR_RSP CMT_ASM(".byte 0X4C, 0X87, 0X1C, 0X24 # xchgq %r11, (%rsp)")
#define XCHG_R11_TO_PTR_R8 CMT_ASM(".byte 0X4D, 0X87, 0X18 # xchgq %r11, (%r8)")
#define XCHG_R11_TO_PTR_R9 CMT_ASM(".byte 0X4D, 0X87, 0X19 # xchgq %r11, (%r9)")
#define XCHG_R11_TO_PTR_R10 CMT_ASM(".byte 0X4D, 0X87, 0X1A # xchgq %r11, (%r10)")
#define XCHG_R11_TO_PTR_R11 CMT_ASM(".byte 0X4D, 0X87, 0X1B # xchgq %r11, (%r11)")
#define XCHG_R11_TO_PTR_R12 CMT_ASM(".byte 0X4D, 0X87, 0X1C, 0X24 # xchgq %r11, (%r12)")
#define XCHG_R11_TO_PTR_R13 CMT_ASM(".byte 0X4D, 0X87, 0X5D, 0X00 # xchgq %r11, (%r13)")
#define XCHG_R11_TO_PTR_R14 CMT_ASM(".byte 0X4D, 0X87, 0X1E # xchgq %r11, (%r14)")
#define XCHG_R11_TO_PTR_R15 CMT_ASM(".byte 0X4D, 0X87, 0X1F # xchgq %r11, (%r15)")
#define XCHG_R11_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X18 # xchgq %r11, (%eax)")
#define XCHG_R11_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X1B # xchgq %r11, (%ebx)")
#define XCHG_R11_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X19 # xchgq %r11, (%ecx)")
#define XCHG_R11_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X1A # xchgq %r11, (%edx)")
#define XCHG_R11_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X1F # xchgq %r11, (%edi)")
#define XCHG_R11_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X1E # xchgq %r11, (%esi)")
#define XCHG_R11_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X5D, 0X00 # xchgq %r11, (%ebp)")
#define XCHG_R11_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X1C, 0X24 # xchgq %r11, (%esp)")

#define XCHG_R12_TO_PTR_RAX CMT_ASM(".byte 0X4C, 0X87, 0X20 # xchgq %r12, (%rax)")
#define XCHG_R12_TO_PTR_RBX CMT_ASM(".byte 0X4C, 0X87, 0X23 # xchgq %r12, (%rbx)")
#define XCHG_R12_TO_PTR_RCX CMT_ASM(".byte 0X4C, 0X87, 0X21 # xchgq %r12, (%rcx)")
#define XCHG_R12_TO_PTR_RDX CMT_ASM(".byte 0X4C, 0X87, 0X22 # xchgq %r12, (%rdx)")
#define XCHG_R12_TO_PTR_RDI CMT_ASM(".byte 0X4C, 0X87, 0X27 # xchgq %r12, (%rdi)")
#define XCHG_R12_TO_PTR_RSI CMT_ASM(".byte 0X4C, 0X87, 0X26 # xchgq %r12, (%rsi)")
#define XCHG_R12_TO_PTR_RBP CMT_ASM(".byte 0X4C, 0X87, 0X65, 0X00 # xchgq %r12, (%rbp)")
#define XCHG_R12_TO_PTR_RSP CMT_ASM(".byte 0X4C, 0X87, 0X24, 0X24 # xchgq %r12, (%rsp)")
#define XCHG_R12_TO_PTR_R8 CMT_ASM(".byte 0X4D, 0X87, 0X20 # xchgq %r12, (%r8)")
#define XCHG_R12_TO_PTR_R9 CMT_ASM(".byte 0X4D, 0X87, 0X21 # xchgq %r12, (%r9)")
#define XCHG_R12_TO_PTR_R10 CMT_ASM(".byte 0X4D, 0X87, 0X22 # xchgq %r12, (%r10)")
#define XCHG_R12_TO_PTR_R11 CMT_ASM(".byte 0X4D, 0X87, 0X23 # xchgq %r12, (%r11)")
#define XCHG_R12_TO_PTR_R12 CMT_ASM(".byte 0X4D, 0X87, 0X24, 0X24 # xchgq %r12, (%r12)")
#define XCHG_R12_TO_PTR_R13 CMT_ASM(".byte 0X4D, 0X87, 0X65, 0X00 # xchgq %r12, (%r13)")
#define XCHG_R12_TO_PTR_R14 CMT_ASM(".byte 0X4D, 0X87, 0X26 # xchgq %r12, (%r14)")
#define XCHG_R12_TO_PTR_R15 CMT_ASM(".byte 0X4D, 0X87, 0X27 # xchgq %r12, (%r15)")
#define XCHG_R12_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X20 # xchgq %r12, (%eax)")
#define XCHG_R12_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X23 # xchgq %r12, (%ebx)")
#define XCHG_R12_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X21 # xchgq %r12, (%ecx)")
#define XCHG_R12_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X22 # xchgq %r12, (%edx)")
#define XCHG_R12_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X27 # xchgq %r12, (%edi)")
#define XCHG_R12_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X26 # xchgq %r12, (%esi)")
#define XCHG_R12_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X65, 0X00 # xchgq %r12, (%ebp)")
#define XCHG_R12_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X24, 0X24 # xchgq %r12, (%esp)")

#define XCHG_R13_TO_PTR_RAX CMT_ASM(".byte 0X4C, 0X87, 0X28 # xchgq %r13, (%rax)")
#define XCHG_R13_TO_PTR_RBX CMT_ASM(".byte 0X4C, 0X87, 0X2B # xchgq %r13, (%rbx)")
#define XCHG_R13_TO_PTR_RCX CMT_ASM(".byte 0X4C, 0X87, 0X29 # xchgq %r13, (%rcx)")
#define XCHG_R13_TO_PTR_RDX CMT_ASM(".byte 0X4C, 0X87, 0X2A # xchgq %r13, (%rdx)")
#define XCHG_R13_TO_PTR_RDI CMT_ASM(".byte 0X4C, 0X87, 0X2F # xchgq %r13, (%rdi)")
#define XCHG_R13_TO_PTR_RSI CMT_ASM(".byte 0X4C, 0X87, 0X2E # xchgq %r13, (%rsi)")
#define XCHG_R13_TO_PTR_RBP CMT_ASM(".byte 0X4C, 0X87, 0X6D, 0X00 # xchgq %r13, (%rbp)")
#define XCHG_R13_TO_PTR_RSP CMT_ASM(".byte 0X4C, 0X87, 0X2C, 0X24 # xchgq %r13, (%rsp)")
#define XCHG_R13_TO_PTR_R8 CMT_ASM(".byte 0X4D, 0X87, 0X28 # xchgq %r13, (%r8)")
#define XCHG_R13_TO_PTR_R9 CMT_ASM(".byte 0X4D, 0X87, 0X29 # xchgq %r13, (%r9)")
#define XCHG_R13_TO_PTR_R10 CMT_ASM(".byte 0X4D, 0X87, 0X2A # xchgq %r13, (%r10)")
#define XCHG_R13_TO_PTR_R11 CMT_ASM(".byte 0X4D, 0X87, 0X2B # xchgq %r13, (%r11)")
#define XCHG_R13_TO_PTR_R12 CMT_ASM(".byte 0X4D, 0X87, 0X2C, 0X24 # xchgq %r13, (%r12)")
#define XCHG_R13_TO_PTR_R13 CMT_ASM(".byte 0X4D, 0X87, 0X6D, 0X00 # xchgq %r13, (%r13)")
#define XCHG_R13_TO_PTR_R14 CMT_ASM(".byte 0X4D, 0X87, 0X2E # xchgq %r13, (%r14)")
#define XCHG_R13_TO_PTR_R15 CMT_ASM(".byte 0X4D, 0X87, 0X2F # xchgq %r13, (%r15)")
#define XCHG_R13_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X28 # xchgq %r13, (%eax)")
#define XCHG_R13_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X2B # xchgq %r13, (%ebx)")
#define XCHG_R13_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X29 # xchgq %r13, (%ecx)")
#define XCHG_R13_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X2A # xchgq %r13, (%edx)")
#define XCHG_R13_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X2F # xchgq %r13, (%edi)")
#define XCHG_R13_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X2E # xchgq %r13, (%esi)")
#define XCHG_R13_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X6D, 0X00 # xchgq %r13, (%ebp)")
#define XCHG_R13_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X2C, 0X24 # xchgq %r13, (%esp)")

#define XCHG_R14_TO_PTR_RAX CMT_ASM(".byte 0X4C, 0X87, 0X30 # xchgq %r14, (%rax)")
#define XCHG_R14_TO_PTR_RBX CMT_ASM(".byte 0X4C, 0X87, 0X33 # xchgq %r14, (%rbx)")
#define XCHG_R14_TO_PTR_RCX CMT_ASM(".byte 0X4C, 0X87, 0X31 # xchgq %r14, (%rcx)")
#define XCHG_R14_TO_PTR_RDX CMT_ASM(".byte 0X4C, 0X87, 0X32 # xchgq %r14, (%rdx)")
#define XCHG_R14_TO_PTR_RDI CMT_ASM(".byte 0X4C, 0X87, 0X37 # xchgq %r14, (%rdi)")
#define XCHG_R14_TO_PTR_RSI CMT_ASM(".byte 0X4C, 0X87, 0X36 # xchgq %r14, (%rsi)")
#define XCHG_R14_TO_PTR_RBP CMT_ASM(".byte 0X4C, 0X87, 0X75, 0X00 # xchgq %r14, (%rbp)")
#define XCHG_R14_TO_PTR_RSP CMT_ASM(".byte 0X4C, 0X87, 0X34, 0X24 # xchgq %r14, (%rsp)")
#define XCHG_R14_TO_PTR_R8 CMT_ASM(".byte 0X4D, 0X87, 0X30 # xchgq %r14, (%r8)")
#define XCHG_R14_TO_PTR_R9 CMT_ASM(".byte 0X4D, 0X87, 0X31 # xchgq %r14, (%r9)")
#define XCHG_R14_TO_PTR_R10 CMT_ASM(".byte 0X4D, 0X87, 0X32 # xchgq %r14, (%r10)")
#define XCHG_R14_TO_PTR_R11 CMT_ASM(".byte 0X4D, 0X87, 0X33 # xchgq %r14, (%r11)")
#define XCHG_R14_TO_PTR_R12 CMT_ASM(".byte 0X4D, 0X87, 0X34, 0X24 # xchgq %r14, (%r12)")
#define XCHG_R14_TO_PTR_R13 CMT_ASM(".byte 0X4D, 0X87, 0X75, 0X00 # xchgq %r14, (%r13)")
#define XCHG_R14_TO_PTR_R14 CMT_ASM(".byte 0X4D, 0X87, 0X36 # xchgq %r14, (%r14)")
#define XCHG_R14_TO_PTR_R15 CMT_ASM(".byte 0X4D, 0X87, 0X37 # xchgq %r14, (%r15)")
#define XCHG_R14_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X30 # xchgq %r14, (%eax)")
#define XCHG_R14_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X33 # xchgq %r14, (%ebx)")
#define XCHG_R14_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X31 # xchgq %r14, (%ecx)")
#define XCHG_R14_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X32 # xchgq %r14, (%edx)")
#define XCHG_R14_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X37 # xchgq %r14, (%edi)")
#define XCHG_R14_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X36 # xchgq %r14, (%esi)")
#define XCHG_R14_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X75, 0X00 # xchgq %r14, (%ebp)")
#define XCHG_R14_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X34, 0X24 # xchgq %r14, (%esp)")

#define XCHG_R15_TO_PTR_RAX CMT_ASM(".byte 0X4C, 0X87, 0X38 # xchgq %r15, (%rax)")
#define XCHG_R15_TO_PTR_RBX CMT_ASM(".byte 0X4C, 0X87, 0X3B # xchgq %r15, (%rbx)")
#define XCHG_R15_TO_PTR_RCX CMT_ASM(".byte 0X4C, 0X87, 0X39 # xchgq %r15, (%rcx)")
#define XCHG_R15_TO_PTR_RDX CMT_ASM(".byte 0X4C, 0X87, 0X3A # xchgq %r15, (%rdx)")
#define XCHG_R15_TO_PTR_RDI CMT_ASM(".byte 0X4C, 0X87, 0X3F # xchgq %r15, (%rdi)")
#define XCHG_R15_TO_PTR_RSI CMT_ASM(".byte 0X4C, 0X87, 0X3E # xchgq %r15, (%rsi)")
#define XCHG_R15_TO_PTR_RBP CMT_ASM(".byte 0X4C, 0X87, 0X7D, 0X00 # xchgq %r15, (%rbp)")
#define XCHG_R15_TO_PTR_RSP CMT_ASM(".byte 0X4C, 0X87, 0X3C, 0X24 # xchgq %r15, (%rsp)")
#define XCHG_R15_TO_PTR_R8 CMT_ASM(".byte 0X4D, 0X87, 0X38 # xchgq %r15, (%r8)")
#define XCHG_R15_TO_PTR_R9 CMT_ASM(".byte 0X4D, 0X87, 0X39 # xchgq %r15, (%r9)")
#define XCHG_R15_TO_PTR_R10 CMT_ASM(".byte 0X4D, 0X87, 0X3A # xchgq %r15, (%r10)")
#define XCHG_R15_TO_PTR_R11 CMT_ASM(".byte 0X4D, 0X87, 0X3B # xchgq %r15, (%r11)")
#define XCHG_R15_TO_PTR_R12 CMT_ASM(".byte 0X4D, 0X87, 0X3C, 0X24 # xchgq %r15, (%r12)")
#define XCHG_R15_TO_PTR_R13 CMT_ASM(".byte 0X4D, 0X87, 0X7D, 0X00 # xchgq %r15, (%r13)")
#define XCHG_R15_TO_PTR_R14 CMT_ASM(".byte 0X4D, 0X87, 0X3E # xchgq %r15, (%r14)")
#define XCHG_R15_TO_PTR_R15 CMT_ASM(".byte 0X4D, 0X87, 0X3F # xchgq %r15, (%r15)")
#define XCHG_R15_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X38 # xchgq %r15, (%eax)")
#define XCHG_R15_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X3B # xchgq %r15, (%ebx)")
#define XCHG_R15_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X39 # xchgq %r15, (%ecx)")
#define XCHG_R15_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X3A # xchgq %r15, (%edx)")
#define XCHG_R15_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X3F # xchgq %r15, (%edi)")
#define XCHG_R15_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X3E # xchgq %r15, (%esi)")
#define XCHG_R15_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X7D, 0X00 # xchgq %r15, (%ebp)")
#define XCHG_R15_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X3C, 0X24 # xchgq %r15, (%esp)")

#define XCHG_RAX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0X80 # xchgq " _(VALUE) "(%rax), %rax")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RAX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0X83 # xchgq " _(VALUE) "(%rbx), %rax")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RAX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0X81 # xchgq " _(VALUE) "(%rcx), %rax")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RAX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0X82 # xchgq " _(VALUE) "(%rdx), %rax")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RAX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0X87 # xchgq " _(VALUE) "(%rdi), %rax")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RAX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0X86 # xchgq " _(VALUE) "(%rsi), %rax")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RAX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0X85 # xchgq " _(VALUE) "(%rbp), %rax")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RAX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0X84, 0X24 # xchgq " _(VALUE) "(%rsp), %rax")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RAX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0X80 # xchgq " _(VALUE) "(%r8), %rax")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RAX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0X81 # xchgq " _(VALUE) "(%r9), %rax")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RAX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0X82 # xchgq " _(VALUE) "(%r10), %rax")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RAX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0X83 # xchgq " _(VALUE) "(%r11), %rax")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RAX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0X84, 0X24 # xchgq " _(VALUE) "(%r12), %rax")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RAX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0X85 # xchgq " _(VALUE) "(%r13), %rax")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RAX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0X86 # xchgq " _(VALUE) "(%r14), %rax")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RAX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0X87 # xchgq " _(VALUE) "(%r15), %rax")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RAX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0X80 # xchgq " _(VALUE) "(%eax), %rax")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RAX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0X83 # xchgq " _(VALUE) "(%ebx), %rax")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RAX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0X81 # xchgq " _(VALUE) "(%ecx), %rax")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RAX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0X82 # xchgq " _(VALUE) "(%edx), %rax")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RAX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0X87 # xchgq " _(VALUE) "(%edi), %rax")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RAX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0X86 # xchgq " _(VALUE) "(%esi), %rax")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RAX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0X85 # xchgq " _(VALUE) "(%ebp), %rax")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RAX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0X84, 0X24 # xchgq " _(VALUE) "(%esp), %rax")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_RBX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0X98 # xchgq " _(VALUE) "(%rax), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RBX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0X9B # xchgq " _(VALUE) "(%rbx), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RBX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0X99 # xchgq " _(VALUE) "(%rcx), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RBX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0X9A # xchgq " _(VALUE) "(%rdx), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RBX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0X9F # xchgq " _(VALUE) "(%rdi), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RBX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0X9E # xchgq " _(VALUE) "(%rsi), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RBX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0X9D # xchgq " _(VALUE) "(%rbp), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RBX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0X9C, 0X24 # xchgq " _(VALUE) "(%rsp), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RBX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0X98 # xchgq " _(VALUE) "(%r8), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RBX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0X99 # xchgq " _(VALUE) "(%r9), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RBX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0X9A # xchgq " _(VALUE) "(%r10), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RBX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0X9B # xchgq " _(VALUE) "(%r11), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RBX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0X9C, 0X24 # xchgq " _(VALUE) "(%r12), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RBX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0X9D # xchgq " _(VALUE) "(%r13), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RBX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0X9E # xchgq " _(VALUE) "(%r14), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RBX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0X9F # xchgq " _(VALUE) "(%r15), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RBX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0X98 # xchgq " _(VALUE) "(%eax), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RBX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0X9B # xchgq " _(VALUE) "(%ebx), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RBX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0X99 # xchgq " _(VALUE) "(%ecx), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RBX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0X9A # xchgq " _(VALUE) "(%edx), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RBX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0X9F # xchgq " _(VALUE) "(%edi), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RBX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0X9E # xchgq " _(VALUE) "(%esi), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RBX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0X9D # xchgq " _(VALUE) "(%ebp), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RBX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0X9C, 0X24 # xchgq " _(VALUE) "(%esp), %rbx")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_RCX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0X88 # xchgq " _(VALUE) "(%rax), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RCX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0X8B # xchgq " _(VALUE) "(%rbx), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RCX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0X89 # xchgq " _(VALUE) "(%rcx), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RCX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0X8A # xchgq " _(VALUE) "(%rdx), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RCX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0X8F # xchgq " _(VALUE) "(%rdi), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RCX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0X8E # xchgq " _(VALUE) "(%rsi), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RCX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0X8D # xchgq " _(VALUE) "(%rbp), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RCX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0X8C, 0X24 # xchgq " _(VALUE) "(%rsp), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RCX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0X88 # xchgq " _(VALUE) "(%r8), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RCX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0X89 # xchgq " _(VALUE) "(%r9), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RCX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0X8A # xchgq " _(VALUE) "(%r10), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RCX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0X8B # xchgq " _(VALUE) "(%r11), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RCX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0X8C, 0X24 # xchgq " _(VALUE) "(%r12), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RCX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0X8D # xchgq " _(VALUE) "(%r13), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RCX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0X8E # xchgq " _(VALUE) "(%r14), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RCX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0X8F # xchgq " _(VALUE) "(%r15), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RCX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0X88 # xchgq " _(VALUE) "(%eax), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RCX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0X8B # xchgq " _(VALUE) "(%ebx), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RCX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0X89 # xchgq " _(VALUE) "(%ecx), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RCX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0X8A # xchgq " _(VALUE) "(%edx), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RCX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0X8F # xchgq " _(VALUE) "(%edi), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RCX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0X8E # xchgq " _(VALUE) "(%esi), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RCX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0X8D # xchgq " _(VALUE) "(%ebp), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RCX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0X8C, 0X24 # xchgq " _(VALUE) "(%esp), %rcx")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_RDX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0X90 # xchgq " _(VALUE) "(%rax), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RDX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0X93 # xchgq " _(VALUE) "(%rbx), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RDX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0X91 # xchgq " _(VALUE) "(%rcx), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RDX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0X92 # xchgq " _(VALUE) "(%rdx), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RDX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0X97 # xchgq " _(VALUE) "(%rdi), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RDX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0X96 # xchgq " _(VALUE) "(%rsi), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RDX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0X95 # xchgq " _(VALUE) "(%rbp), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RDX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0X94, 0X24 # xchgq " _(VALUE) "(%rsp), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RDX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0X90 # xchgq " _(VALUE) "(%r8), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RDX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0X91 # xchgq " _(VALUE) "(%r9), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RDX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0X92 # xchgq " _(VALUE) "(%r10), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RDX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0X93 # xchgq " _(VALUE) "(%r11), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RDX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0X94, 0X24 # xchgq " _(VALUE) "(%r12), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RDX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0X95 # xchgq " _(VALUE) "(%r13), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RDX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0X96 # xchgq " _(VALUE) "(%r14), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RDX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0X97 # xchgq " _(VALUE) "(%r15), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RDX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0X90 # xchgq " _(VALUE) "(%eax), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RDX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0X93 # xchgq " _(VALUE) "(%ebx), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RDX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0X91 # xchgq " _(VALUE) "(%ecx), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RDX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0X92 # xchgq " _(VALUE) "(%edx), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RDX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0X97 # xchgq " _(VALUE) "(%edi), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RDX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0X96 # xchgq " _(VALUE) "(%esi), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RDX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0X95 # xchgq " _(VALUE) "(%ebp), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RDX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0X94, 0X24 # xchgq " _(VALUE) "(%esp), %rdx")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_RDI_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0XB8 # xchgq " _(VALUE) "(%rax), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RDI_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0XBB # xchgq " _(VALUE) "(%rbx), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RDI_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0XB9 # xchgq " _(VALUE) "(%rcx), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RDI_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0XBA # xchgq " _(VALUE) "(%rdx), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RDI_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0XBF # xchgq " _(VALUE) "(%rdi), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RDI_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0XBE # xchgq " _(VALUE) "(%rsi), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RDI_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0XBD # xchgq " _(VALUE) "(%rbp), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RDI_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0XBC, 0X24 # xchgq " _(VALUE) "(%rsp), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RDI_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0XB8 # xchgq " _(VALUE) "(%r8), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RDI_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0XB9 # xchgq " _(VALUE) "(%r9), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RDI_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0XBA # xchgq " _(VALUE) "(%r10), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RDI_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0XBB # xchgq " _(VALUE) "(%r11), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RDI_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0XBC, 0X24 # xchgq " _(VALUE) "(%r12), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RDI_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0XBD # xchgq " _(VALUE) "(%r13), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RDI_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0XBE # xchgq " _(VALUE) "(%r14), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RDI_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0XBF # xchgq " _(VALUE) "(%r15), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RDI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0XB8 # xchgq " _(VALUE) "(%eax), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RDI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0XBB # xchgq " _(VALUE) "(%ebx), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RDI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0XB9 # xchgq " _(VALUE) "(%ecx), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RDI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0XBA # xchgq " _(VALUE) "(%edx), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RDI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0XBF # xchgq " _(VALUE) "(%edi), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RDI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0XBE # xchgq " _(VALUE) "(%esi), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RDI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0XBD # xchgq " _(VALUE) "(%ebp), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RDI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0XBC, 0X24 # xchgq " _(VALUE) "(%esp), %rdi")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_RSI_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0XB0 # xchgq " _(VALUE) "(%rax), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RSI_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0XB3 # xchgq " _(VALUE) "(%rbx), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RSI_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0XB1 # xchgq " _(VALUE) "(%rcx), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RSI_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0XB2 # xchgq " _(VALUE) "(%rdx), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RSI_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0XB7 # xchgq " _(VALUE) "(%rdi), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RSI_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0XB6 # xchgq " _(VALUE) "(%rsi), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RSI_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0XB5 # xchgq " _(VALUE) "(%rbp), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RSI_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0XB4, 0X24 # xchgq " _(VALUE) "(%rsp), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RSI_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0XB0 # xchgq " _(VALUE) "(%r8), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RSI_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0XB1 # xchgq " _(VALUE) "(%r9), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RSI_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0XB2 # xchgq " _(VALUE) "(%r10), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RSI_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0XB3 # xchgq " _(VALUE) "(%r11), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RSI_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0XB4, 0X24 # xchgq " _(VALUE) "(%r12), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RSI_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0XB5 # xchgq " _(VALUE) "(%r13), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RSI_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0XB6 # xchgq " _(VALUE) "(%r14), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RSI_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0XB7 # xchgq " _(VALUE) "(%r15), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RSI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0XB0 # xchgq " _(VALUE) "(%eax), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RSI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0XB3 # xchgq " _(VALUE) "(%ebx), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RSI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0XB1 # xchgq " _(VALUE) "(%ecx), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RSI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0XB2 # xchgq " _(VALUE) "(%edx), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RSI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0XB7 # xchgq " _(VALUE) "(%edi), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RSI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0XB6 # xchgq " _(VALUE) "(%esi), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RSI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0XB5 # xchgq " _(VALUE) "(%ebp), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RSI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0XB4, 0X24 # xchgq " _(VALUE) "(%esp), %rsi")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_RBP_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0XA8 # xchgq " _(VALUE) "(%rax), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RBP_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0XAB # xchgq " _(VALUE) "(%rbx), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RBP_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0XA9 # xchgq " _(VALUE) "(%rcx), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RBP_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0XAA # xchgq " _(VALUE) "(%rdx), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RBP_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0XAF # xchgq " _(VALUE) "(%rdi), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RBP_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0XAE # xchgq " _(VALUE) "(%rsi), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RBP_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0XAD # xchgq " _(VALUE) "(%rbp), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RBP_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0XAC, 0X24 # xchgq " _(VALUE) "(%rsp), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RBP_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0XA8 # xchgq " _(VALUE) "(%r8), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RBP_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0XA9 # xchgq " _(VALUE) "(%r9), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RBP_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0XAA # xchgq " _(VALUE) "(%r10), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RBP_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0XAB # xchgq " _(VALUE) "(%r11), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RBP_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0XAC, 0X24 # xchgq " _(VALUE) "(%r12), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RBP_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0XAD # xchgq " _(VALUE) "(%r13), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RBP_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0XAE # xchgq " _(VALUE) "(%r14), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RBP_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0XAF # xchgq " _(VALUE) "(%r15), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RBP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0XA8 # xchgq " _(VALUE) "(%eax), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RBP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0XAB # xchgq " _(VALUE) "(%ebx), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RBP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0XA9 # xchgq " _(VALUE) "(%ecx), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RBP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0XAA # xchgq " _(VALUE) "(%edx), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RBP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0XAF # xchgq " _(VALUE) "(%edi), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RBP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0XAE # xchgq " _(VALUE) "(%esi), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RBP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0XAD # xchgq " _(VALUE) "(%ebp), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RBP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0XAC, 0X24 # xchgq " _(VALUE) "(%esp), %rbp")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_RSP_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0XA0 # xchgq " _(VALUE) "(%rax), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RSP_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0XA3 # xchgq " _(VALUE) "(%rbx), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RSP_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0XA1 # xchgq " _(VALUE) "(%rcx), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RSP_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0XA2 # xchgq " _(VALUE) "(%rdx), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RSP_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0XA7 # xchgq " _(VALUE) "(%rdi), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RSP_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0XA6 # xchgq " _(VALUE) "(%rsi), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RSP_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0XA5 # xchgq " _(VALUE) "(%rbp), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RSP_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0XA4, 0X24 # xchgq " _(VALUE) "(%rsp), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RSP_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0XA0 # xchgq " _(VALUE) "(%r8), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RSP_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0XA1 # xchgq " _(VALUE) "(%r9), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RSP_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0XA2 # xchgq " _(VALUE) "(%r10), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RSP_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0XA3 # xchgq " _(VALUE) "(%r11), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RSP_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0XA4, 0X24 # xchgq " _(VALUE) "(%r12), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RSP_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0XA5 # xchgq " _(VALUE) "(%r13), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RSP_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0XA6 # xchgq " _(VALUE) "(%r14), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RSP_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0XA7 # xchgq " _(VALUE) "(%r15), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RSP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0XA0 # xchgq " _(VALUE) "(%eax), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RSP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0XA3 # xchgq " _(VALUE) "(%ebx), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RSP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0XA1 # xchgq " _(VALUE) "(%ecx), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RSP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0XA2 # xchgq " _(VALUE) "(%edx), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RSP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0XA7 # xchgq " _(VALUE) "(%edi), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RSP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0XA6 # xchgq " _(VALUE) "(%esi), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RSP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0XA5 # xchgq " _(VALUE) "(%ebp), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RSP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0XA4, 0X24 # xchgq " _(VALUE) "(%esp), %rsp")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_R8_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0X80 # xchgq " _(VALUE) "(%rax), %r8")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0X83 # xchgq " _(VALUE) "(%rbx), %r8")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0X81 # xchgq " _(VALUE) "(%rcx), %r8")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0X82 # xchgq " _(VALUE) "(%rdx), %r8")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0X87 # xchgq " _(VALUE) "(%rdi), %r8")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0X86 # xchgq " _(VALUE) "(%rsi), %r8")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0X85 # xchgq " _(VALUE) "(%rbp), %r8")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0X84, 0X24 # xchgq " _(VALUE) "(%rsp), %r8")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0X80 # xchgq " _(VALUE) "(%r8), %r8")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0X81 # xchgq " _(VALUE) "(%r9), %r8")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0X82 # xchgq " _(VALUE) "(%r10), %r8")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0X83 # xchgq " _(VALUE) "(%r11), %r8")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0X84, 0X24 # xchgq " _(VALUE) "(%r12), %r8")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0X85 # xchgq " _(VALUE) "(%r13), %r8")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0X86 # xchgq " _(VALUE) "(%r14), %r8")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0X87 # xchgq " _(VALUE) "(%r15), %r8")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X80 # xchgq " _(VALUE) "(%eax), %r8")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X83 # xchgq " _(VALUE) "(%ebx), %r8")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X81 # xchgq " _(VALUE) "(%ecx), %r8")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X82 # xchgq " _(VALUE) "(%edx), %r8")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X87 # xchgq " _(VALUE) "(%edi), %r8")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X86 # xchgq " _(VALUE) "(%esi), %r8")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X85 # xchgq " _(VALUE) "(%ebp), %r8")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X84, 0X24 # xchgq " _(VALUE) "(%esp), %r8")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_R9_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0X88 # xchgq " _(VALUE) "(%rax), %r9")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0X8B # xchgq " _(VALUE) "(%rbx), %r9")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0X89 # xchgq " _(VALUE) "(%rcx), %r9")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0X8A # xchgq " _(VALUE) "(%rdx), %r9")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0X8F # xchgq " _(VALUE) "(%rdi), %r9")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0X8E # xchgq " _(VALUE) "(%rsi), %r9")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0X8D # xchgq " _(VALUE) "(%rbp), %r9")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0X8C, 0X24 # xchgq " _(VALUE) "(%rsp), %r9")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0X88 # xchgq " _(VALUE) "(%r8), %r9")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0X89 # xchgq " _(VALUE) "(%r9), %r9")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0X8A # xchgq " _(VALUE) "(%r10), %r9")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0X8B # xchgq " _(VALUE) "(%r11), %r9")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0X8C, 0X24 # xchgq " _(VALUE) "(%r12), %r9")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0X8D # xchgq " _(VALUE) "(%r13), %r9")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0X8E # xchgq " _(VALUE) "(%r14), %r9")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0X8F # xchgq " _(VALUE) "(%r15), %r9")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X88 # xchgq " _(VALUE) "(%eax), %r9")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X8B # xchgq " _(VALUE) "(%ebx), %r9")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X89 # xchgq " _(VALUE) "(%ecx), %r9")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X8A # xchgq " _(VALUE) "(%edx), %r9")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X8F # xchgq " _(VALUE) "(%edi), %r9")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X8E # xchgq " _(VALUE) "(%esi), %r9")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X8D # xchgq " _(VALUE) "(%ebp), %r9")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X8C, 0X24 # xchgq " _(VALUE) "(%esp), %r9")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_R10_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0X90 # xchgq " _(VALUE) "(%rax), %r10")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0X93 # xchgq " _(VALUE) "(%rbx), %r10")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0X91 # xchgq " _(VALUE) "(%rcx), %r10")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0X92 # xchgq " _(VALUE) "(%rdx), %r10")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0X97 # xchgq " _(VALUE) "(%rdi), %r10")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0X96 # xchgq " _(VALUE) "(%rsi), %r10")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0X95 # xchgq " _(VALUE) "(%rbp), %r10")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0X94, 0X24 # xchgq " _(VALUE) "(%rsp), %r10")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0X90 # xchgq " _(VALUE) "(%r8), %r10")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0X91 # xchgq " _(VALUE) "(%r9), %r10")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0X92 # xchgq " _(VALUE) "(%r10), %r10")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0X93 # xchgq " _(VALUE) "(%r11), %r10")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0X94, 0X24 # xchgq " _(VALUE) "(%r12), %r10")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0X95 # xchgq " _(VALUE) "(%r13), %r10")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0X96 # xchgq " _(VALUE) "(%r14), %r10")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0X97 # xchgq " _(VALUE) "(%r15), %r10")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X90 # xchgq " _(VALUE) "(%eax), %r10")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X93 # xchgq " _(VALUE) "(%ebx), %r10")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X91 # xchgq " _(VALUE) "(%ecx), %r10")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X92 # xchgq " _(VALUE) "(%edx), %r10")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X97 # xchgq " _(VALUE) "(%edi), %r10")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X96 # xchgq " _(VALUE) "(%esi), %r10")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X95 # xchgq " _(VALUE) "(%ebp), %r10")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X94, 0X24 # xchgq " _(VALUE) "(%esp), %r10")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_R11_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0X98 # xchgq " _(VALUE) "(%rax), %r11")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0X9B # xchgq " _(VALUE) "(%rbx), %r11")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0X99 # xchgq " _(VALUE) "(%rcx), %r11")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0X9A # xchgq " _(VALUE) "(%rdx), %r11")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0X9F # xchgq " _(VALUE) "(%rdi), %r11")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0X9E # xchgq " _(VALUE) "(%rsi), %r11")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0X9D # xchgq " _(VALUE) "(%rbp), %r11")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0X9C, 0X24 # xchgq " _(VALUE) "(%rsp), %r11")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0X98 # xchgq " _(VALUE) "(%r8), %r11")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0X99 # xchgq " _(VALUE) "(%r9), %r11")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0X9A # xchgq " _(VALUE) "(%r10), %r11")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0X9B # xchgq " _(VALUE) "(%r11), %r11")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0X9C, 0X24 # xchgq " _(VALUE) "(%r12), %r11")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0X9D # xchgq " _(VALUE) "(%r13), %r11")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0X9E # xchgq " _(VALUE) "(%r14), %r11")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0X9F # xchgq " _(VALUE) "(%r15), %r11")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X98 # xchgq " _(VALUE) "(%eax), %r11")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X9B # xchgq " _(VALUE) "(%ebx), %r11")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X99 # xchgq " _(VALUE) "(%ecx), %r11")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X9A # xchgq " _(VALUE) "(%edx), %r11")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X9F # xchgq " _(VALUE) "(%edi), %r11")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X9E # xchgq " _(VALUE) "(%esi), %r11")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X9D # xchgq " _(VALUE) "(%ebp), %r11")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X9C, 0X24 # xchgq " _(VALUE) "(%esp), %r11")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_R12_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0XA0 # xchgq " _(VALUE) "(%rax), %r12")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0XA3 # xchgq " _(VALUE) "(%rbx), %r12")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0XA1 # xchgq " _(VALUE) "(%rcx), %r12")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0XA2 # xchgq " _(VALUE) "(%rdx), %r12")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0XA7 # xchgq " _(VALUE) "(%rdi), %r12")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0XA6 # xchgq " _(VALUE) "(%rsi), %r12")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0XA5 # xchgq " _(VALUE) "(%rbp), %r12")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0XA4, 0X24 # xchgq " _(VALUE) "(%rsp), %r12")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0XA0 # xchgq " _(VALUE) "(%r8), %r12")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0XA1 # xchgq " _(VALUE) "(%r9), %r12")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0XA2 # xchgq " _(VALUE) "(%r10), %r12")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0XA3 # xchgq " _(VALUE) "(%r11), %r12")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0XA4, 0X24 # xchgq " _(VALUE) "(%r12), %r12")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0XA5 # xchgq " _(VALUE) "(%r13), %r12")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0XA6 # xchgq " _(VALUE) "(%r14), %r12")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0XA7 # xchgq " _(VALUE) "(%r15), %r12")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0XA0 # xchgq " _(VALUE) "(%eax), %r12")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0XA3 # xchgq " _(VALUE) "(%ebx), %r12")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0XA1 # xchgq " _(VALUE) "(%ecx), %r12")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0XA2 # xchgq " _(VALUE) "(%edx), %r12")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0XA7 # xchgq " _(VALUE) "(%edi), %r12")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0XA6 # xchgq " _(VALUE) "(%esi), %r12")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0XA5 # xchgq " _(VALUE) "(%ebp), %r12")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0XA4, 0X24 # xchgq " _(VALUE) "(%esp), %r12")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_R13_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0XA8 # xchgq " _(VALUE) "(%rax), %r13")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0XAB # xchgq " _(VALUE) "(%rbx), %r13")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0XA9 # xchgq " _(VALUE) "(%rcx), %r13")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0XAA # xchgq " _(VALUE) "(%rdx), %r13")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0XAF # xchgq " _(VALUE) "(%rdi), %r13")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0XAE # xchgq " _(VALUE) "(%rsi), %r13")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0XAD # xchgq " _(VALUE) "(%rbp), %r13")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0XAC, 0X24 # xchgq " _(VALUE) "(%rsp), %r13")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0XA8 # xchgq " _(VALUE) "(%r8), %r13")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0XA9 # xchgq " _(VALUE) "(%r9), %r13")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0XAA # xchgq " _(VALUE) "(%r10), %r13")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0XAB # xchgq " _(VALUE) "(%r11), %r13")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0XAC, 0X24 # xchgq " _(VALUE) "(%r12), %r13")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0XAD # xchgq " _(VALUE) "(%r13), %r13")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0XAE # xchgq " _(VALUE) "(%r14), %r13")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0XAF # xchgq " _(VALUE) "(%r15), %r13")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0XA8 # xchgq " _(VALUE) "(%eax), %r13")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0XAB # xchgq " _(VALUE) "(%ebx), %r13")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0XA9 # xchgq " _(VALUE) "(%ecx), %r13")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0XAA # xchgq " _(VALUE) "(%edx), %r13")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0XAF # xchgq " _(VALUE) "(%edi), %r13")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0XAE # xchgq " _(VALUE) "(%esi), %r13")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0XAD # xchgq " _(VALUE) "(%ebp), %r13")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0XAC, 0X24 # xchgq " _(VALUE) "(%esp), %r13")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_R14_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0XB0 # xchgq " _(VALUE) "(%rax), %r14")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0XB3 # xchgq " _(VALUE) "(%rbx), %r14")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0XB1 # xchgq " _(VALUE) "(%rcx), %r14")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0XB2 # xchgq " _(VALUE) "(%rdx), %r14")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0XB7 # xchgq " _(VALUE) "(%rdi), %r14")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0XB6 # xchgq " _(VALUE) "(%rsi), %r14")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0XB5 # xchgq " _(VALUE) "(%rbp), %r14")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0XB4, 0X24 # xchgq " _(VALUE) "(%rsp), %r14")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0XB0 # xchgq " _(VALUE) "(%r8), %r14")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0XB1 # xchgq " _(VALUE) "(%r9), %r14")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0XB2 # xchgq " _(VALUE) "(%r10), %r14")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0XB3 # xchgq " _(VALUE) "(%r11), %r14")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0XB4, 0X24 # xchgq " _(VALUE) "(%r12), %r14")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0XB5 # xchgq " _(VALUE) "(%r13), %r14")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0XB6 # xchgq " _(VALUE) "(%r14), %r14")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0XB7 # xchgq " _(VALUE) "(%r15), %r14")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0XB0 # xchgq " _(VALUE) "(%eax), %r14")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0XB3 # xchgq " _(VALUE) "(%ebx), %r14")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0XB1 # xchgq " _(VALUE) "(%ecx), %r14")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0XB2 # xchgq " _(VALUE) "(%edx), %r14")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0XB7 # xchgq " _(VALUE) "(%edi), %r14")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0XB6 # xchgq " _(VALUE) "(%esi), %r14")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0XB5 # xchgq " _(VALUE) "(%ebp), %r14")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0XB4, 0X24 # xchgq " _(VALUE) "(%esp), %r14")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_R15_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0XB8 # xchgq " _(VALUE) "(%rax), %r15")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0XBB # xchgq " _(VALUE) "(%rbx), %r15")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0XB9 # xchgq " _(VALUE) "(%rcx), %r15")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0XBA # xchgq " _(VALUE) "(%rdx), %r15")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0XBF # xchgq " _(VALUE) "(%rdi), %r15")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0XBE # xchgq " _(VALUE) "(%rsi), %r15")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0XBD # xchgq " _(VALUE) "(%rbp), %r15")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0XBC, 0X24 # xchgq " _(VALUE) "(%rsp), %r15")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0XB8 # xchgq " _(VALUE) "(%r8), %r15")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0XB9 # xchgq " _(VALUE) "(%r9), %r15")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0XBA # xchgq " _(VALUE) "(%r10), %r15")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0XBB # xchgq " _(VALUE) "(%r11), %r15")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0XBC, 0X24 # xchgq " _(VALUE) "(%r12), %r15")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0XBD # xchgq " _(VALUE) "(%r13), %r15")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0XBE # xchgq " _(VALUE) "(%r14), %r15")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0XBF # xchgq " _(VALUE) "(%r15), %r15")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0XB8 # xchgq " _(VALUE) "(%eax), %r15")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0XBB # xchgq " _(VALUE) "(%ebx), %r15")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0XB9 # xchgq " _(VALUE) "(%ecx), %r15")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0XBA # xchgq " _(VALUE) "(%edx), %r15")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0XBF # xchgq " _(VALUE) "(%edi), %r15")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0XBE # xchgq " _(VALUE) "(%esi), %r15")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0XBD # xchgq " _(VALUE) "(%ebp), %r15")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0XBC, 0X24 # xchgq " _(VALUE) "(%esp), %r15")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_RAX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0X80 # xchgq %rax, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RAX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0X83 # xchgq %rax, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RAX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0X81 # xchgq %rax, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RAX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0X82 # xchgq %rax, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RAX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0X87 # xchgq %rax, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RAX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0X86 # xchgq %rax, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RAX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0X85 # xchgq %rax, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RAX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0X84, 0X24 # xchgq %rax, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RAX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0X80 # xchgq %rax, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RAX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0X81 # xchgq %rax, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RAX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0X82 # xchgq %rax, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RAX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0X83 # xchgq %rax, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RAX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0X84, 0X24 # xchgq %rax, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RAX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0X85 # xchgq %rax, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RAX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0X86 # xchgq %rax, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RAX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0X87 # xchgq %rax, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RAX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0X80 # xchgq %rax, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RAX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0X83 # xchgq %rax, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RAX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0X81 # xchgq %rax, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RAX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0X82 # xchgq %rax, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RAX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0X87 # xchgq %rax, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RAX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0X86 # xchgq %rax, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RAX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0X85 # xchgq %rax, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RAX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0X84, 0X24 # xchgq %rax, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_RBX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0X98 # xchgq %rbx, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RBX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0X9B # xchgq %rbx, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RBX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0X99 # xchgq %rbx, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RBX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0X9A # xchgq %rbx, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RBX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0X9F # xchgq %rbx, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RBX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0X9E # xchgq %rbx, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RBX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0X9D # xchgq %rbx, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RBX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0X9C, 0X24 # xchgq %rbx, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RBX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0X98 # xchgq %rbx, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RBX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0X99 # xchgq %rbx, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RBX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0X9A # xchgq %rbx, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RBX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0X9B # xchgq %rbx, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RBX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0X9C, 0X24 # xchgq %rbx, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RBX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0X9D # xchgq %rbx, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RBX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0X9E # xchgq %rbx, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RBX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0X9F # xchgq %rbx, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RBX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0X98 # xchgq %rbx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RBX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0X9B # xchgq %rbx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RBX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0X99 # xchgq %rbx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RBX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0X9A # xchgq %rbx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RBX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0X9F # xchgq %rbx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RBX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0X9E # xchgq %rbx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RBX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0X9D # xchgq %rbx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RBX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0X9C, 0X24 # xchgq %rbx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_RCX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0X88 # xchgq %rcx, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RCX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0X8B # xchgq %rcx, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RCX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0X89 # xchgq %rcx, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RCX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0X8A # xchgq %rcx, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RCX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0X8F # xchgq %rcx, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RCX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0X8E # xchgq %rcx, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RCX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0X8D # xchgq %rcx, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RCX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0X8C, 0X24 # xchgq %rcx, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RCX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0X88 # xchgq %rcx, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RCX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0X89 # xchgq %rcx, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RCX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0X8A # xchgq %rcx, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RCX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0X8B # xchgq %rcx, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RCX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0X8C, 0X24 # xchgq %rcx, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RCX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0X8D # xchgq %rcx, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RCX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0X8E # xchgq %rcx, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RCX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0X8F # xchgq %rcx, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RCX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0X88 # xchgq %rcx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RCX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0X8B # xchgq %rcx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RCX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0X89 # xchgq %rcx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RCX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0X8A # xchgq %rcx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RCX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0X8F # xchgq %rcx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RCX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0X8E # xchgq %rcx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RCX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0X8D # xchgq %rcx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RCX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0X8C, 0X24 # xchgq %rcx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_RDX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0X90 # xchgq %rdx, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RDX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0X93 # xchgq %rdx, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RDX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0X91 # xchgq %rdx, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RDX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0X92 # xchgq %rdx, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RDX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0X97 # xchgq %rdx, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RDX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0X96 # xchgq %rdx, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RDX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0X95 # xchgq %rdx, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RDX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0X94, 0X24 # xchgq %rdx, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RDX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0X90 # xchgq %rdx, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RDX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0X91 # xchgq %rdx, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RDX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0X92 # xchgq %rdx, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RDX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0X93 # xchgq %rdx, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RDX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0X94, 0X24 # xchgq %rdx, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RDX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0X95 # xchgq %rdx, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RDX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0X96 # xchgq %rdx, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RDX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0X97 # xchgq %rdx, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RDX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0X90 # xchgq %rdx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RDX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0X93 # xchgq %rdx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RDX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0X91 # xchgq %rdx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RDX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0X92 # xchgq %rdx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RDX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0X97 # xchgq %rdx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RDX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0X96 # xchgq %rdx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RDX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0X95 # xchgq %rdx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RDX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0X94, 0X24 # xchgq %rdx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_RDI_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0XB8 # xchgq %rdi, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RDI_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0XBB # xchgq %rdi, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RDI_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0XB9 # xchgq %rdi, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RDI_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0XBA # xchgq %rdi, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RDI_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0XBF # xchgq %rdi, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RDI_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0XBE # xchgq %rdi, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RDI_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0XBD # xchgq %rdi, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RDI_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0XBC, 0X24 # xchgq %rdi, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RDI_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0XB8 # xchgq %rdi, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RDI_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0XB9 # xchgq %rdi, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RDI_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0XBA # xchgq %rdi, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RDI_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0XBB # xchgq %rdi, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RDI_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0XBC, 0X24 # xchgq %rdi, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RDI_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0XBD # xchgq %rdi, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RDI_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0XBE # xchgq %rdi, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RDI_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0XBF # xchgq %rdi, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RDI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0XB8 # xchgq %rdi, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RDI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0XBB # xchgq %rdi, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RDI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0XB9 # xchgq %rdi, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RDI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0XBA # xchgq %rdi, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RDI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0XBF # xchgq %rdi, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RDI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0XBE # xchgq %rdi, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RDI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0XBD # xchgq %rdi, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RDI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0XBC, 0X24 # xchgq %rdi, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_RSI_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0XB0 # xchgq %rsi, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RSI_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0XB3 # xchgq %rsi, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RSI_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0XB1 # xchgq %rsi, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RSI_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0XB2 # xchgq %rsi, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RSI_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0XB7 # xchgq %rsi, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RSI_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0XB6 # xchgq %rsi, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RSI_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0XB5 # xchgq %rsi, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RSI_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0XB4, 0X24 # xchgq %rsi, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RSI_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0XB0 # xchgq %rsi, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RSI_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0XB1 # xchgq %rsi, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RSI_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0XB2 # xchgq %rsi, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RSI_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0XB3 # xchgq %rsi, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RSI_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0XB4, 0X24 # xchgq %rsi, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RSI_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0XB5 # xchgq %rsi, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RSI_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0XB6 # xchgq %rsi, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RSI_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0XB7 # xchgq %rsi, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RSI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0XB0 # xchgq %rsi, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RSI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0XB3 # xchgq %rsi, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RSI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0XB1 # xchgq %rsi, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RSI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0XB2 # xchgq %rsi, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RSI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0XB7 # xchgq %rsi, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RSI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0XB6 # xchgq %rsi, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RSI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0XB5 # xchgq %rsi, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RSI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0XB4, 0X24 # xchgq %rsi, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_RBP_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0XA8 # xchgq %rbp, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RBP_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0XAB # xchgq %rbp, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RBP_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0XA9 # xchgq %rbp, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RBP_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0XAA # xchgq %rbp, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RBP_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0XAF # xchgq %rbp, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RBP_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0XAE # xchgq %rbp, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RBP_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0XAD # xchgq %rbp, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RBP_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0XAC, 0X24 # xchgq %rbp, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RBP_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0XA8 # xchgq %rbp, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RBP_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0XA9 # xchgq %rbp, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RBP_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0XAA # xchgq %rbp, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RBP_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0XAB # xchgq %rbp, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RBP_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0XAC, 0X24 # xchgq %rbp, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RBP_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0XAD # xchgq %rbp, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RBP_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0XAE # xchgq %rbp, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RBP_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0XAF # xchgq %rbp, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RBP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0XA8 # xchgq %rbp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RBP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0XAB # xchgq %rbp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RBP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0XA9 # xchgq %rbp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RBP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0XAA # xchgq %rbp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RBP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0XAF # xchgq %rbp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RBP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0XAE # xchgq %rbp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RBP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0XAD # xchgq %rbp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RBP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0XAC, 0X24 # xchgq %rbp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_RSP_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0XA0 # xchgq %rsp, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RSP_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0XA3 # xchgq %rsp, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RSP_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0XA1 # xchgq %rsp, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RSP_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0XA2 # xchgq %rsp, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RSP_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0XA7 # xchgq %rsp, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RSP_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0XA6 # xchgq %rsp, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RSP_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0XA5 # xchgq %rsp, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RSP_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X87, 0XA4, 0X24 # xchgq %rsp, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RSP_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0XA0 # xchgq %rsp, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RSP_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0XA1 # xchgq %rsp, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RSP_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0XA2 # xchgq %rsp, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RSP_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0XA3 # xchgq %rsp, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RSP_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0XA4, 0X24 # xchgq %rsp, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RSP_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0XA5 # xchgq %rsp, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RSP_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0XA6 # xchgq %rsp, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RSP_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X87, 0XA7 # xchgq %rsp, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RSP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0XA0 # xchgq %rsp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RSP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0XA3 # xchgq %rsp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RSP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0XA1 # xchgq %rsp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RSP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0XA2 # xchgq %rsp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RSP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0XA7 # xchgq %rsp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RSP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0XA6 # xchgq %rsp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RSP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0XA5 # xchgq %rsp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_RSP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X87, 0XA4, 0X24 # xchgq %rsp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_R8_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0X80 # xchgq %r8, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0X83 # xchgq %r8, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0X81 # xchgq %r8, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0X82 # xchgq %r8, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0X87 # xchgq %r8, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0X86 # xchgq %r8, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0X85 # xchgq %r8, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0X84, 0X24 # xchgq %r8, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0X80 # xchgq %r8, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0X81 # xchgq %r8, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0X82 # xchgq %r8, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0X83 # xchgq %r8, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0X84, 0X24 # xchgq %r8, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0X85 # xchgq %r8, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0X86 # xchgq %r8, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0X87 # xchgq %r8, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X80 # xchgq %r8, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X83 # xchgq %r8, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X81 # xchgq %r8, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X82 # xchgq %r8, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X87 # xchgq %r8, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X86 # xchgq %r8, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X85 # xchgq %r8, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X84, 0X24 # xchgq %r8, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_R9_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0X88 # xchgq %r9, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0X8B # xchgq %r9, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0X89 # xchgq %r9, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0X8A # xchgq %r9, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0X8F # xchgq %r9, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0X8E # xchgq %r9, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0X8D # xchgq %r9, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0X8C, 0X24 # xchgq %r9, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0X88 # xchgq %r9, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0X89 # xchgq %r9, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0X8A # xchgq %r9, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0X8B # xchgq %r9, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0X8C, 0X24 # xchgq %r9, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0X8D # xchgq %r9, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0X8E # xchgq %r9, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0X8F # xchgq %r9, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X88 # xchgq %r9, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X8B # xchgq %r9, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X89 # xchgq %r9, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X8A # xchgq %r9, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X8F # xchgq %r9, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X8E # xchgq %r9, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X8D # xchgq %r9, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X8C, 0X24 # xchgq %r9, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_R10_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0X90 # xchgq %r10, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0X93 # xchgq %r10, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0X91 # xchgq %r10, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0X92 # xchgq %r10, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0X97 # xchgq %r10, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0X96 # xchgq %r10, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0X95 # xchgq %r10, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0X94, 0X24 # xchgq %r10, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0X90 # xchgq %r10, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0X91 # xchgq %r10, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0X92 # xchgq %r10, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0X93 # xchgq %r10, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0X94, 0X24 # xchgq %r10, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0X95 # xchgq %r10, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0X96 # xchgq %r10, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0X97 # xchgq %r10, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X90 # xchgq %r10, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X93 # xchgq %r10, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X91 # xchgq %r10, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X92 # xchgq %r10, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X97 # xchgq %r10, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X96 # xchgq %r10, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X95 # xchgq %r10, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X94, 0X24 # xchgq %r10, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_R11_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0X98 # xchgq %r11, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0X9B # xchgq %r11, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0X99 # xchgq %r11, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0X9A # xchgq %r11, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0X9F # xchgq %r11, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0X9E # xchgq %r11, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0X9D # xchgq %r11, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0X9C, 0X24 # xchgq %r11, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0X98 # xchgq %r11, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0X99 # xchgq %r11, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0X9A # xchgq %r11, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0X9B # xchgq %r11, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0X9C, 0X24 # xchgq %r11, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0X9D # xchgq %r11, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0X9E # xchgq %r11, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0X9F # xchgq %r11, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X98 # xchgq %r11, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X9B # xchgq %r11, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X99 # xchgq %r11, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X9A # xchgq %r11, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X9F # xchgq %r11, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X9E # xchgq %r11, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X9D # xchgq %r11, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0X9C, 0X24 # xchgq %r11, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_R12_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0XA0 # xchgq %r12, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0XA3 # xchgq %r12, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0XA1 # xchgq %r12, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0XA2 # xchgq %r12, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0XA7 # xchgq %r12, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0XA6 # xchgq %r12, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0XA5 # xchgq %r12, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0XA4, 0X24 # xchgq %r12, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0XA0 # xchgq %r12, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0XA1 # xchgq %r12, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0XA2 # xchgq %r12, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0XA3 # xchgq %r12, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0XA4, 0X24 # xchgq %r12, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0XA5 # xchgq %r12, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0XA6 # xchgq %r12, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0XA7 # xchgq %r12, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0XA0 # xchgq %r12, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0XA3 # xchgq %r12, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0XA1 # xchgq %r12, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0XA2 # xchgq %r12, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0XA7 # xchgq %r12, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0XA6 # xchgq %r12, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0XA5 # xchgq %r12, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0XA4, 0X24 # xchgq %r12, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_R13_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0XA8 # xchgq %r13, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0XAB # xchgq %r13, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0XA9 # xchgq %r13, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0XAA # xchgq %r13, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0XAF # xchgq %r13, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0XAE # xchgq %r13, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0XAD # xchgq %r13, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0XAC, 0X24 # xchgq %r13, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0XA8 # xchgq %r13, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0XA9 # xchgq %r13, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0XAA # xchgq %r13, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0XAB # xchgq %r13, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0XAC, 0X24 # xchgq %r13, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0XAD # xchgq %r13, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0XAE # xchgq %r13, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0XAF # xchgq %r13, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0XA8 # xchgq %r13, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0XAB # xchgq %r13, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0XA9 # xchgq %r13, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0XAA # xchgq %r13, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0XAF # xchgq %r13, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0XAE # xchgq %r13, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0XAD # xchgq %r13, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0XAC, 0X24 # xchgq %r13, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_R14_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0XB0 # xchgq %r14, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0XB3 # xchgq %r14, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0XB1 # xchgq %r14, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0XB2 # xchgq %r14, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0XB7 # xchgq %r14, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0XB6 # xchgq %r14, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0XB5 # xchgq %r14, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0XB4, 0X24 # xchgq %r14, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0XB0 # xchgq %r14, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0XB1 # xchgq %r14, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0XB2 # xchgq %r14, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0XB3 # xchgq %r14, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0XB4, 0X24 # xchgq %r14, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0XB5 # xchgq %r14, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0XB6 # xchgq %r14, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0XB7 # xchgq %r14, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0XB0 # xchgq %r14, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0XB3 # xchgq %r14, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0XB1 # xchgq %r14, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0XB2 # xchgq %r14, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0XB7 # xchgq %r14, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0XB6 # xchgq %r14, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0XB5 # xchgq %r14, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0XB4, 0X24 # xchgq %r14, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_R15_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0XB8 # xchgq %r15, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0XBB # xchgq %r15, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0XB9 # xchgq %r15, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0XBA # xchgq %r15, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0XBF # xchgq %r15, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0XBE # xchgq %r15, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0XBD # xchgq %r15, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X87, 0XBC, 0X24 # xchgq %r15, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0XB8 # xchgq %r15, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0XB9 # xchgq %r15, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0XBA # xchgq %r15, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0XBB # xchgq %r15, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0XBC, 0X24 # xchgq %r15, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0XBD # xchgq %r15, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0XBE # xchgq %r15, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X87, 0XBF # xchgq %r15, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0XB8 # xchgq %r15, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0XBB # xchgq %r15, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0XB9 # xchgq %r15, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0XBA # xchgq %r15, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0XBF # xchgq %r15, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0XBE # xchgq %r15, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0XBD # xchgq %r15, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X87, 0XBC, 0X24 # xchgq %r15, " _(VALUE) "(%esp)")\
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
