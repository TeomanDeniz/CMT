#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************* [v] 64-BIT MEMORY [v] ************************** */
#define TEST_RAX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0X04, 0X25 # testq (" _(VALUE) "), %rax")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RBX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0X1C, 0X25 # testq (" _(VALUE) "), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RCX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0X0C, 0X25 # testq (" _(VALUE) "), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RDX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0X14, 0X25 # testq (" _(VALUE) "), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RDI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0X3C, 0X25 # testq (" _(VALUE) "), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RSI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0X34, 0X25 # testq (" _(VALUE) "), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RBP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0X2C, 0X25 # testq (" _(VALUE) "), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RSP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0X24, 0X25 # testq (" _(VALUE) "), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0X04, 0X25 # testq (" _(VALUE) "), %r8")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0X0C, 0X25 # testq (" _(VALUE) "), %r9")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0X14, 0X25 # testq (" _(VALUE) "), %r10")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0X1C, 0X25 # testq (" _(VALUE) "), %r11")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0X24, 0X25 # testq (" _(VALUE) "), %r12")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0X2C, 0X25 # testq (" _(VALUE) "), %r13")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0X34, 0X25 # testq (" _(VALUE) "), %r14")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0X3C, 0X25 # testq (" _(VALUE) "), %r15")\
	CMT_ASM(".long " _(VALUE))

#define TEST_RAX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0X04, 0X25 # testq %rax, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RBX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0X1C, 0X25 # testq %rbx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RCX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0X0C, 0X25 # testq %rcx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RDX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0X14, 0X25 # testq %rdx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RDI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0X3C, 0X25 # testq %rdi, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RSI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0X34, 0X25 # testq %rsi, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RBP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0X2C, 0X25 # testq %rbp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RSP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0X24, 0X25 # testq %rsp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0X04, 0X25 # testq %r8, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0X0C, 0X25 # testq %r9, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0X14, 0X25 # testq %r10, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0X1C, 0X25 # testq %r11, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0X24, 0X25 # testq %r12, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0X2C, 0X25 # testq %r13, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0X34, 0X25 # testq %r14, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0X3C, 0X25 # testq %r15, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))

#define TEST_RAX_FROM_PTR_RAX CMT_ASM(".byte 0X48, 0X85, 0X00 # testq (%rax), %rax")
#define TEST_RAX_FROM_PTR_RBX CMT_ASM(".byte 0X48, 0X85, 0X03 # testq (%rbx), %rax")
#define TEST_RAX_FROM_PTR_RCX CMT_ASM(".byte 0X48, 0X85, 0X01 # testq (%rcx), %rax")
#define TEST_RAX_FROM_PTR_RDX CMT_ASM(".byte 0X48, 0X85, 0X02 # testq (%rdx), %rax")
#define TEST_RAX_FROM_PTR_RDI CMT_ASM(".byte 0X48, 0X85, 0X07 # testq (%rdi), %rax")
#define TEST_RAX_FROM_PTR_RSI CMT_ASM(".byte 0X48, 0X85, 0X06 # testq (%rsi), %rax")
#define TEST_RAX_FROM_PTR_RBP CMT_ASM(".byte 0X48, 0X85, 0X45, 0X00 # testq (%rbp), %rax")
#define TEST_RAX_FROM_PTR_RSP CMT_ASM(".byte 0X48, 0X85, 0X04, 0X24 # testq (%rsp), %rax")
#define TEST_RAX_FROM_PTR_R8 CMT_ASM(".byte 0X49, 0X85, 0X00 # testq (%r8), %rax")
#define TEST_RAX_FROM_PTR_R9 CMT_ASM(".byte 0X49, 0X85, 0X01 # testq (%r9), %rax")
#define TEST_RAX_FROM_PTR_R10 CMT_ASM(".byte 0X49, 0X85, 0X02 # testq (%r10), %rax")
#define TEST_RAX_FROM_PTR_R11 CMT_ASM(".byte 0X49, 0X85, 0X03 # testq (%r11), %rax")
#define TEST_RAX_FROM_PTR_R12 CMT_ASM(".byte 0X49, 0X85, 0X04, 0X24 # testq (%r12), %rax")
#define TEST_RAX_FROM_PTR_R13 CMT_ASM(".byte 0X49, 0X85, 0X45, 0X00 # testq (%r13), %rax")
#define TEST_RAX_FROM_PTR_R14 CMT_ASM(".byte 0X49, 0X85, 0X06 # testq (%r14), %rax")
#define TEST_RAX_FROM_PTR_R15 CMT_ASM(".byte 0X49, 0X85, 0X07 # testq (%r15), %rax")
#define TEST_RAX_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X85, 0X00 # testq (%eax), %rax")
#define TEST_RAX_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X85, 0X03 # testq (%ebx), %rax")
#define TEST_RAX_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X85, 0X01 # testq (%ecx), %rax")
#define TEST_RAX_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X85, 0X02 # testq (%edx), %rax")
#define TEST_RAX_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X85, 0X07 # testq (%edi), %rax")
#define TEST_RAX_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X85, 0X06 # testq (%esi), %rax")
#define TEST_RAX_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X85, 0X45, 0X00 # testq (%ebp), %rax")
#define TEST_RAX_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X85, 0X04, 0X24 # testq (%esp), %rax")

#define TEST_RBX_FROM_PTR_RAX CMT_ASM(".byte 0X48, 0X85, 0X18 # testq (%rax), %rbx")
#define TEST_RBX_FROM_PTR_RBX CMT_ASM(".byte 0X48, 0X85, 0X1B # testq (%rbx), %rbx")
#define TEST_RBX_FROM_PTR_RCX CMT_ASM(".byte 0X48, 0X85, 0X19 # testq (%rcx), %rbx")
#define TEST_RBX_FROM_PTR_RDX CMT_ASM(".byte 0X48, 0X85, 0X1A # testq (%rdx), %rbx")
#define TEST_RBX_FROM_PTR_RDI CMT_ASM(".byte 0X48, 0X85, 0X1F # testq (%rdi), %rbx")
#define TEST_RBX_FROM_PTR_RSI CMT_ASM(".byte 0X48, 0X85, 0X1E # testq (%rsi), %rbx")
#define TEST_RBX_FROM_PTR_RBP CMT_ASM(".byte 0X48, 0X85, 0X5D, 0X00 # testq (%rbp), %rbx")
#define TEST_RBX_FROM_PTR_RSP CMT_ASM(".byte 0X48, 0X85, 0X1C, 0X24 # testq (%rsp), %rbx")
#define TEST_RBX_FROM_PTR_R8 CMT_ASM(".byte 0X49, 0X85, 0X18 # testq (%r8), %rbx")
#define TEST_RBX_FROM_PTR_R9 CMT_ASM(".byte 0X49, 0X85, 0X19 # testq (%r9), %rbx")
#define TEST_RBX_FROM_PTR_R10 CMT_ASM(".byte 0X49, 0X85, 0X1A # testq (%r10), %rbx")
#define TEST_RBX_FROM_PTR_R11 CMT_ASM(".byte 0X49, 0X85, 0X1B # testq (%r11), %rbx")
#define TEST_RBX_FROM_PTR_R12 CMT_ASM(".byte 0X49, 0X85, 0X1C, 0X24 # testq (%r12), %rbx")
#define TEST_RBX_FROM_PTR_R13 CMT_ASM(".byte 0X49, 0X85, 0X5D, 0X00 # testq (%r13), %rbx")
#define TEST_RBX_FROM_PTR_R14 CMT_ASM(".byte 0X49, 0X85, 0X1E # testq (%r14), %rbx")
#define TEST_RBX_FROM_PTR_R15 CMT_ASM(".byte 0X49, 0X85, 0X1F # testq (%r15), %rbx")
#define TEST_RBX_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X85, 0X18 # testq (%eax), %rbx")
#define TEST_RBX_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X85, 0X1B # testq (%ebx), %rbx")
#define TEST_RBX_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X85, 0X19 # testq (%ecx), %rbx")
#define TEST_RBX_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X85, 0X1A # testq (%edx), %rbx")
#define TEST_RBX_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X85, 0X1F # testq (%edi), %rbx")
#define TEST_RBX_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X85, 0X1E # testq (%esi), %rbx")
#define TEST_RBX_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X85, 0X5D, 0X00 # testq (%ebp), %rbx")
#define TEST_RBX_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X85, 0X1C, 0X24 # testq (%esp), %rbx")

#define TEST_RCX_FROM_PTR_RAX CMT_ASM(".byte 0X48, 0X85, 0X08 # testq (%rax), %rcx")
#define TEST_RCX_FROM_PTR_RBX CMT_ASM(".byte 0X48, 0X85, 0X0B # testq (%rbx), %rcx")
#define TEST_RCX_FROM_PTR_RCX CMT_ASM(".byte 0X48, 0X85, 0X09 # testq (%rcx), %rcx")
#define TEST_RCX_FROM_PTR_RDX CMT_ASM(".byte 0X48, 0X85, 0X0A # testq (%rdx), %rcx")
#define TEST_RCX_FROM_PTR_RDI CMT_ASM(".byte 0X48, 0X85, 0X0F # testq (%rdi), %rcx")
#define TEST_RCX_FROM_PTR_RSI CMT_ASM(".byte 0X48, 0X85, 0X0E # testq (%rsi), %rcx")
#define TEST_RCX_FROM_PTR_RBP CMT_ASM(".byte 0X48, 0X85, 0X4D, 0X00 # testq (%rbp), %rcx")
#define TEST_RCX_FROM_PTR_RSP CMT_ASM(".byte 0X48, 0X85, 0X0C, 0X24 # testq (%rsp), %rcx")
#define TEST_RCX_FROM_PTR_R8 CMT_ASM(".byte 0X49, 0X85, 0X08 # testq (%r8), %rcx")
#define TEST_RCX_FROM_PTR_R9 CMT_ASM(".byte 0X49, 0X85, 0X09 # testq (%r9), %rcx")
#define TEST_RCX_FROM_PTR_R10 CMT_ASM(".byte 0X49, 0X85, 0X0A # testq (%r10), %rcx")
#define TEST_RCX_FROM_PTR_R11 CMT_ASM(".byte 0X49, 0X85, 0X0B # testq (%r11), %rcx")
#define TEST_RCX_FROM_PTR_R12 CMT_ASM(".byte 0X49, 0X85, 0X0C, 0X24 # testq (%r12), %rcx")
#define TEST_RCX_FROM_PTR_R13 CMT_ASM(".byte 0X49, 0X85, 0X4D, 0X00 # testq (%r13), %rcx")
#define TEST_RCX_FROM_PTR_R14 CMT_ASM(".byte 0X49, 0X85, 0X0E # testq (%r14), %rcx")
#define TEST_RCX_FROM_PTR_R15 CMT_ASM(".byte 0X49, 0X85, 0X0F # testq (%r15), %rcx")
#define TEST_RCX_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X85, 0X08 # testq (%eax), %rcx")
#define TEST_RCX_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X85, 0X0B # testq (%ebx), %rcx")
#define TEST_RCX_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X85, 0X09 # testq (%ecx), %rcx")
#define TEST_RCX_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X85, 0X0A # testq (%edx), %rcx")
#define TEST_RCX_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X85, 0X0F # testq (%edi), %rcx")
#define TEST_RCX_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X85, 0X0E # testq (%esi), %rcx")
#define TEST_RCX_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X85, 0X4D, 0X00 # testq (%ebp), %rcx")
#define TEST_RCX_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X85, 0X0C, 0X24 # testq (%esp), %rcx")

#define TEST_RDX_FROM_PTR_RAX CMT_ASM(".byte 0X48, 0X85, 0X10 # testq (%rax), %rdx")
#define TEST_RDX_FROM_PTR_RBX CMT_ASM(".byte 0X48, 0X85, 0X13 # testq (%rbx), %rdx")
#define TEST_RDX_FROM_PTR_RCX CMT_ASM(".byte 0X48, 0X85, 0X11 # testq (%rcx), %rdx")
#define TEST_RDX_FROM_PTR_RDX CMT_ASM(".byte 0X48, 0X85, 0X12 # testq (%rdx), %rdx")
#define TEST_RDX_FROM_PTR_RDI CMT_ASM(".byte 0X48, 0X85, 0X17 # testq (%rdi), %rdx")
#define TEST_RDX_FROM_PTR_RSI CMT_ASM(".byte 0X48, 0X85, 0X16 # testq (%rsi), %rdx")
#define TEST_RDX_FROM_PTR_RBP CMT_ASM(".byte 0X48, 0X85, 0X55, 0X00 # testq (%rbp), %rdx")
#define TEST_RDX_FROM_PTR_RSP CMT_ASM(".byte 0X48, 0X85, 0X14, 0X24 # testq (%rsp), %rdx")
#define TEST_RDX_FROM_PTR_R8 CMT_ASM(".byte 0X49, 0X85, 0X10 # testq (%r8), %rdx")
#define TEST_RDX_FROM_PTR_R9 CMT_ASM(".byte 0X49, 0X85, 0X11 # testq (%r9), %rdx")
#define TEST_RDX_FROM_PTR_R10 CMT_ASM(".byte 0X49, 0X85, 0X12 # testq (%r10), %rdx")
#define TEST_RDX_FROM_PTR_R11 CMT_ASM(".byte 0X49, 0X85, 0X13 # testq (%r11), %rdx")
#define TEST_RDX_FROM_PTR_R12 CMT_ASM(".byte 0X49, 0X85, 0X14, 0X24 # testq (%r12), %rdx")
#define TEST_RDX_FROM_PTR_R13 CMT_ASM(".byte 0X49, 0X85, 0X55, 0X00 # testq (%r13), %rdx")
#define TEST_RDX_FROM_PTR_R14 CMT_ASM(".byte 0X49, 0X85, 0X16 # testq (%r14), %rdx")
#define TEST_RDX_FROM_PTR_R15 CMT_ASM(".byte 0X49, 0X85, 0X17 # testq (%r15), %rdx")
#define TEST_RDX_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X85, 0X10 # testq (%eax), %rdx")
#define TEST_RDX_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X85, 0X13 # testq (%ebx), %rdx")
#define TEST_RDX_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X85, 0X11 # testq (%ecx), %rdx")
#define TEST_RDX_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X85, 0X12 # testq (%edx), %rdx")
#define TEST_RDX_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X85, 0X17 # testq (%edi), %rdx")
#define TEST_RDX_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X85, 0X16 # testq (%esi), %rdx")
#define TEST_RDX_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X85, 0X55, 0X00 # testq (%ebp), %rdx")
#define TEST_RDX_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X85, 0X14, 0X24 # testq (%esp), %rdx")

#define TEST_RDI_FROM_PTR_RAX CMT_ASM(".byte 0X48, 0X85, 0X38 # testq (%rax), %rdi")
#define TEST_RDI_FROM_PTR_RBX CMT_ASM(".byte 0X48, 0X85, 0X3B # testq (%rbx), %rdi")
#define TEST_RDI_FROM_PTR_RCX CMT_ASM(".byte 0X48, 0X85, 0X39 # testq (%rcx), %rdi")
#define TEST_RDI_FROM_PTR_RDX CMT_ASM(".byte 0X48, 0X85, 0X3A # testq (%rdx), %rdi")
#define TEST_RDI_FROM_PTR_RDI CMT_ASM(".byte 0X48, 0X85, 0X3F # testq (%rdi), %rdi")
#define TEST_RDI_FROM_PTR_RSI CMT_ASM(".byte 0X48, 0X85, 0X3E # testq (%rsi), %rdi")
#define TEST_RDI_FROM_PTR_RBP CMT_ASM(".byte 0X48, 0X85, 0X7D, 0X00 # testq (%rbp), %rdi")
#define TEST_RDI_FROM_PTR_RSP CMT_ASM(".byte 0X48, 0X85, 0X3C, 0X24 # testq (%rsp), %rdi")
#define TEST_RDI_FROM_PTR_R8 CMT_ASM(".byte 0X49, 0X85, 0X38 # testq (%r8), %rdi")
#define TEST_RDI_FROM_PTR_R9 CMT_ASM(".byte 0X49, 0X85, 0X39 # testq (%r9), %rdi")
#define TEST_RDI_FROM_PTR_R10 CMT_ASM(".byte 0X49, 0X85, 0X3A # testq (%r10), %rdi")
#define TEST_RDI_FROM_PTR_R11 CMT_ASM(".byte 0X49, 0X85, 0X3B # testq (%r11), %rdi")
#define TEST_RDI_FROM_PTR_R12 CMT_ASM(".byte 0X49, 0X85, 0X3C, 0X24 # testq (%r12), %rdi")
#define TEST_RDI_FROM_PTR_R13 CMT_ASM(".byte 0X49, 0X85, 0X7D, 0X00 # testq (%r13), %rdi")
#define TEST_RDI_FROM_PTR_R14 CMT_ASM(".byte 0X49, 0X85, 0X3E # testq (%r14), %rdi")
#define TEST_RDI_FROM_PTR_R15 CMT_ASM(".byte 0X49, 0X85, 0X3F # testq (%r15), %rdi")
#define TEST_RDI_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X85, 0X38 # testq (%eax), %rdi")
#define TEST_RDI_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X85, 0X3B # testq (%ebx), %rdi")
#define TEST_RDI_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X85, 0X39 # testq (%ecx), %rdi")
#define TEST_RDI_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X85, 0X3A # testq (%edx), %rdi")
#define TEST_RDI_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X85, 0X3F # testq (%edi), %rdi")
#define TEST_RDI_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X85, 0X3E # testq (%esi), %rdi")
#define TEST_RDI_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X85, 0X7D, 0X00 # testq (%ebp), %rdi")
#define TEST_RDI_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X85, 0X3C, 0X24 # testq (%esp), %rdi")

#define TEST_RSI_FROM_PTR_RAX CMT_ASM(".byte 0X48, 0X85, 0X30 # testq (%rax), %rsi")
#define TEST_RSI_FROM_PTR_RBX CMT_ASM(".byte 0X48, 0X85, 0X33 # testq (%rbx), %rsi")
#define TEST_RSI_FROM_PTR_RCX CMT_ASM(".byte 0X48, 0X85, 0X31 # testq (%rcx), %rsi")
#define TEST_RSI_FROM_PTR_RDX CMT_ASM(".byte 0X48, 0X85, 0X32 # testq (%rdx), %rsi")
#define TEST_RSI_FROM_PTR_RDI CMT_ASM(".byte 0X48, 0X85, 0X37 # testq (%rdi), %rsi")
#define TEST_RSI_FROM_PTR_RSI CMT_ASM(".byte 0X48, 0X85, 0X36 # testq (%rsi), %rsi")
#define TEST_RSI_FROM_PTR_RBP CMT_ASM(".byte 0X48, 0X85, 0X75, 0X00 # testq (%rbp), %rsi")
#define TEST_RSI_FROM_PTR_RSP CMT_ASM(".byte 0X48, 0X85, 0X34, 0X24 # testq (%rsp), %rsi")
#define TEST_RSI_FROM_PTR_R8 CMT_ASM(".byte 0X49, 0X85, 0X30 # testq (%r8), %rsi")
#define TEST_RSI_FROM_PTR_R9 CMT_ASM(".byte 0X49, 0X85, 0X31 # testq (%r9), %rsi")
#define TEST_RSI_FROM_PTR_R10 CMT_ASM(".byte 0X49, 0X85, 0X32 # testq (%r10), %rsi")
#define TEST_RSI_FROM_PTR_R11 CMT_ASM(".byte 0X49, 0X85, 0X33 # testq (%r11), %rsi")
#define TEST_RSI_FROM_PTR_R12 CMT_ASM(".byte 0X49, 0X85, 0X34, 0X24 # testq (%r12), %rsi")
#define TEST_RSI_FROM_PTR_R13 CMT_ASM(".byte 0X49, 0X85, 0X75, 0X00 # testq (%r13), %rsi")
#define TEST_RSI_FROM_PTR_R14 CMT_ASM(".byte 0X49, 0X85, 0X36 # testq (%r14), %rsi")
#define TEST_RSI_FROM_PTR_R15 CMT_ASM(".byte 0X49, 0X85, 0X37 # testq (%r15), %rsi")
#define TEST_RSI_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X85, 0X30 # testq (%eax), %rsi")
#define TEST_RSI_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X85, 0X33 # testq (%ebx), %rsi")
#define TEST_RSI_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X85, 0X31 # testq (%ecx), %rsi")
#define TEST_RSI_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X85, 0X32 # testq (%edx), %rsi")
#define TEST_RSI_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X85, 0X37 # testq (%edi), %rsi")
#define TEST_RSI_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X85, 0X36 # testq (%esi), %rsi")
#define TEST_RSI_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X85, 0X75, 0X00 # testq (%ebp), %rsi")
#define TEST_RSI_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X85, 0X34, 0X24 # testq (%esp), %rsi")

#define TEST_RBP_FROM_PTR_RAX CMT_ASM(".byte 0X48, 0X85, 0X28 # testq (%rax), %rbp")
#define TEST_RBP_FROM_PTR_RBX CMT_ASM(".byte 0X48, 0X85, 0X2B # testq (%rbx), %rbp")
#define TEST_RBP_FROM_PTR_RCX CMT_ASM(".byte 0X48, 0X85, 0X29 # testq (%rcx), %rbp")
#define TEST_RBP_FROM_PTR_RDX CMT_ASM(".byte 0X48, 0X85, 0X2A # testq (%rdx), %rbp")
#define TEST_RBP_FROM_PTR_RDI CMT_ASM(".byte 0X48, 0X85, 0X2F # testq (%rdi), %rbp")
#define TEST_RBP_FROM_PTR_RSI CMT_ASM(".byte 0X48, 0X85, 0X2E # testq (%rsi), %rbp")
#define TEST_RBP_FROM_PTR_RBP CMT_ASM(".byte 0X48, 0X85, 0X6D, 0X00 # testq (%rbp), %rbp")
#define TEST_RBP_FROM_PTR_RSP CMT_ASM(".byte 0X48, 0X85, 0X2C, 0X24 # testq (%rsp), %rbp")
#define TEST_RBP_FROM_PTR_R8 CMT_ASM(".byte 0X49, 0X85, 0X28 # testq (%r8), %rbp")
#define TEST_RBP_FROM_PTR_R9 CMT_ASM(".byte 0X49, 0X85, 0X29 # testq (%r9), %rbp")
#define TEST_RBP_FROM_PTR_R10 CMT_ASM(".byte 0X49, 0X85, 0X2A # testq (%r10), %rbp")
#define TEST_RBP_FROM_PTR_R11 CMT_ASM(".byte 0X49, 0X85, 0X2B # testq (%r11), %rbp")
#define TEST_RBP_FROM_PTR_R12 CMT_ASM(".byte 0X49, 0X85, 0X2C, 0X24 # testq (%r12), %rbp")
#define TEST_RBP_FROM_PTR_R13 CMT_ASM(".byte 0X49, 0X85, 0X6D, 0X00 # testq (%r13), %rbp")
#define TEST_RBP_FROM_PTR_R14 CMT_ASM(".byte 0X49, 0X85, 0X2E # testq (%r14), %rbp")
#define TEST_RBP_FROM_PTR_R15 CMT_ASM(".byte 0X49, 0X85, 0X2F # testq (%r15), %rbp")
#define TEST_RBP_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X85, 0X28 # testq (%eax), %rbp")
#define TEST_RBP_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X85, 0X2B # testq (%ebx), %rbp")
#define TEST_RBP_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X85, 0X29 # testq (%ecx), %rbp")
#define TEST_RBP_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X85, 0X2A # testq (%edx), %rbp")
#define TEST_RBP_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X85, 0X2F # testq (%edi), %rbp")
#define TEST_RBP_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X85, 0X2E # testq (%esi), %rbp")
#define TEST_RBP_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X85, 0X6D, 0X00 # testq (%ebp), %rbp")
#define TEST_RBP_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X85, 0X2C, 0X24 # testq (%esp), %rbp")

#define TEST_RSP_FROM_PTR_RAX CMT_ASM(".byte 0X48, 0X85, 0X20 # testq (%rax), %rsp")
#define TEST_RSP_FROM_PTR_RBX CMT_ASM(".byte 0X48, 0X85, 0X23 # testq (%rbx), %rsp")
#define TEST_RSP_FROM_PTR_RCX CMT_ASM(".byte 0X48, 0X85, 0X21 # testq (%rcx), %rsp")
#define TEST_RSP_FROM_PTR_RDX CMT_ASM(".byte 0X48, 0X85, 0X22 # testq (%rdx), %rsp")
#define TEST_RSP_FROM_PTR_RDI CMT_ASM(".byte 0X48, 0X85, 0X27 # testq (%rdi), %rsp")
#define TEST_RSP_FROM_PTR_RSI CMT_ASM(".byte 0X48, 0X85, 0X26 # testq (%rsi), %rsp")
#define TEST_RSP_FROM_PTR_RBP CMT_ASM(".byte 0X48, 0X85, 0X65, 0X00 # testq (%rbp), %rsp")
#define TEST_RSP_FROM_PTR_RSP CMT_ASM(".byte 0X48, 0X85, 0X24, 0X24 # testq (%rsp), %rsp")
#define TEST_RSP_FROM_PTR_R8 CMT_ASM(".byte 0X49, 0X85, 0X20 # testq (%r8), %rsp")
#define TEST_RSP_FROM_PTR_R9 CMT_ASM(".byte 0X49, 0X85, 0X21 # testq (%r9), %rsp")
#define TEST_RSP_FROM_PTR_R10 CMT_ASM(".byte 0X49, 0X85, 0X22 # testq (%r10), %rsp")
#define TEST_RSP_FROM_PTR_R11 CMT_ASM(".byte 0X49, 0X85, 0X23 # testq (%r11), %rsp")
#define TEST_RSP_FROM_PTR_R12 CMT_ASM(".byte 0X49, 0X85, 0X24, 0X24 # testq (%r12), %rsp")
#define TEST_RSP_FROM_PTR_R13 CMT_ASM(".byte 0X49, 0X85, 0X65, 0X00 # testq (%r13), %rsp")
#define TEST_RSP_FROM_PTR_R14 CMT_ASM(".byte 0X49, 0X85, 0X26 # testq (%r14), %rsp")
#define TEST_RSP_FROM_PTR_R15 CMT_ASM(".byte 0X49, 0X85, 0X27 # testq (%r15), %rsp")
#define TEST_RSP_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X85, 0X20 # testq (%eax), %rsp")
#define TEST_RSP_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X85, 0X23 # testq (%ebx), %rsp")
#define TEST_RSP_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X85, 0X21 # testq (%ecx), %rsp")
#define TEST_RSP_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X85, 0X22 # testq (%edx), %rsp")
#define TEST_RSP_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X85, 0X27 # testq (%edi), %rsp")
#define TEST_RSP_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X85, 0X26 # testq (%esi), %rsp")
#define TEST_RSP_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X85, 0X65, 0X00 # testq (%ebp), %rsp")
#define TEST_RSP_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X85, 0X24, 0X24 # testq (%esp), %rsp")

#define TEST_R8_FROM_PTR_RAX CMT_ASM(".byte 0X4C, 0X85, 0X00 # testq (%rax), %r8")
#define TEST_R8_FROM_PTR_RBX CMT_ASM(".byte 0X4C, 0X85, 0X03 # testq (%rbx), %r8")
#define TEST_R8_FROM_PTR_RCX CMT_ASM(".byte 0X4C, 0X85, 0X01 # testq (%rcx), %r8")
#define TEST_R8_FROM_PTR_RDX CMT_ASM(".byte 0X4C, 0X85, 0X02 # testq (%rdx), %r8")
#define TEST_R8_FROM_PTR_RDI CMT_ASM(".byte 0X4C, 0X85, 0X07 # testq (%rdi), %r8")
#define TEST_R8_FROM_PTR_RSI CMT_ASM(".byte 0X4C, 0X85, 0X06 # testq (%rsi), %r8")
#define TEST_R8_FROM_PTR_RBP CMT_ASM(".byte 0X4C, 0X85, 0X45, 0X00 # testq (%rbp), %r8")
#define TEST_R8_FROM_PTR_RSP CMT_ASM(".byte 0X4C, 0X85, 0X04, 0X24 # testq (%rsp), %r8")
#define TEST_R8_FROM_PTR_R8 CMT_ASM(".byte 0X4D, 0X85, 0X00 # testq (%r8), %r8")
#define TEST_R8_FROM_PTR_R9 CMT_ASM(".byte 0X4D, 0X85, 0X01 # testq (%r9), %r8")
#define TEST_R8_FROM_PTR_R10 CMT_ASM(".byte 0X4D, 0X85, 0X02 # testq (%r10), %r8")
#define TEST_R8_FROM_PTR_R11 CMT_ASM(".byte 0X4D, 0X85, 0X03 # testq (%r11), %r8")
#define TEST_R8_FROM_PTR_R12 CMT_ASM(".byte 0X4D, 0X85, 0X04, 0X24 # testq (%r12), %r8")
#define TEST_R8_FROM_PTR_R13 CMT_ASM(".byte 0X4D, 0X85, 0X45, 0X00 # testq (%r13), %r8")
#define TEST_R8_FROM_PTR_R14 CMT_ASM(".byte 0X4D, 0X85, 0X06 # testq (%r14), %r8")
#define TEST_R8_FROM_PTR_R15 CMT_ASM(".byte 0X4D, 0X85, 0X07 # testq (%r15), %r8")
#define TEST_R8_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X00 # testq (%eax), %r8")
#define TEST_R8_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X03 # testq (%ebx), %r8")
#define TEST_R8_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X01 # testq (%ecx), %r8")
#define TEST_R8_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X02 # testq (%edx), %r8")
#define TEST_R8_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X07 # testq (%edi), %r8")
#define TEST_R8_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X06 # testq (%esi), %r8")
#define TEST_R8_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X45, 0X00 # testq (%ebp), %r8")
#define TEST_R8_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X04, 0X24 # testq (%esp), %r8")

#define TEST_R9_FROM_PTR_RAX CMT_ASM(".byte 0X4C, 0X85, 0X08 # testq (%rax), %r9")
#define TEST_R9_FROM_PTR_RBX CMT_ASM(".byte 0X4C, 0X85, 0X0B # testq (%rbx), %r9")
#define TEST_R9_FROM_PTR_RCX CMT_ASM(".byte 0X4C, 0X85, 0X09 # testq (%rcx), %r9")
#define TEST_R9_FROM_PTR_RDX CMT_ASM(".byte 0X4C, 0X85, 0X0A # testq (%rdx), %r9")
#define TEST_R9_FROM_PTR_RDI CMT_ASM(".byte 0X4C, 0X85, 0X0F # testq (%rdi), %r9")
#define TEST_R9_FROM_PTR_RSI CMT_ASM(".byte 0X4C, 0X85, 0X0E # testq (%rsi), %r9")
#define TEST_R9_FROM_PTR_RBP CMT_ASM(".byte 0X4C, 0X85, 0X4D, 0X00 # testq (%rbp), %r9")
#define TEST_R9_FROM_PTR_RSP CMT_ASM(".byte 0X4C, 0X85, 0X0C, 0X24 # testq (%rsp), %r9")
#define TEST_R9_FROM_PTR_R8 CMT_ASM(".byte 0X4D, 0X85, 0X08 # testq (%r8), %r9")
#define TEST_R9_FROM_PTR_R9 CMT_ASM(".byte 0X4D, 0X85, 0X09 # testq (%r9), %r9")
#define TEST_R9_FROM_PTR_R10 CMT_ASM(".byte 0X4D, 0X85, 0X0A # testq (%r10), %r9")
#define TEST_R9_FROM_PTR_R11 CMT_ASM(".byte 0X4D, 0X85, 0X0B # testq (%r11), %r9")
#define TEST_R9_FROM_PTR_R12 CMT_ASM(".byte 0X4D, 0X85, 0X0C, 0X24 # testq (%r12), %r9")
#define TEST_R9_FROM_PTR_R13 CMT_ASM(".byte 0X4D, 0X85, 0X4D, 0X00 # testq (%r13), %r9")
#define TEST_R9_FROM_PTR_R14 CMT_ASM(".byte 0X4D, 0X85, 0X0E # testq (%r14), %r9")
#define TEST_R9_FROM_PTR_R15 CMT_ASM(".byte 0X4D, 0X85, 0X0F # testq (%r15), %r9")
#define TEST_R9_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X08 # testq (%eax), %r9")
#define TEST_R9_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X0B # testq (%ebx), %r9")
#define TEST_R9_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X09 # testq (%ecx), %r9")
#define TEST_R9_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X0A # testq (%edx), %r9")
#define TEST_R9_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X0F # testq (%edi), %r9")
#define TEST_R9_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X0E # testq (%esi), %r9")
#define TEST_R9_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X4D, 0X00 # testq (%ebp), %r9")
#define TEST_R9_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X0C, 0X24 # testq (%esp), %r9")

#define TEST_R10_FROM_PTR_RAX CMT_ASM(".byte 0X4C, 0X85, 0X10 # testq (%rax), %r10")
#define TEST_R10_FROM_PTR_RBX CMT_ASM(".byte 0X4C, 0X85, 0X13 # testq (%rbx), %r10")
#define TEST_R10_FROM_PTR_RCX CMT_ASM(".byte 0X4C, 0X85, 0X11 # testq (%rcx), %r10")
#define TEST_R10_FROM_PTR_RDX CMT_ASM(".byte 0X4C, 0X85, 0X12 # testq (%rdx), %r10")
#define TEST_R10_FROM_PTR_RDI CMT_ASM(".byte 0X4C, 0X85, 0X17 # testq (%rdi), %r10")
#define TEST_R10_FROM_PTR_RSI CMT_ASM(".byte 0X4C, 0X85, 0X16 # testq (%rsi), %r10")
#define TEST_R10_FROM_PTR_RBP CMT_ASM(".byte 0X4C, 0X85, 0X55, 0X00 # testq (%rbp), %r10")
#define TEST_R10_FROM_PTR_RSP CMT_ASM(".byte 0X4C, 0X85, 0X14, 0X24 # testq (%rsp), %r10")
#define TEST_R10_FROM_PTR_R8 CMT_ASM(".byte 0X4D, 0X85, 0X10 # testq (%r8), %r10")
#define TEST_R10_FROM_PTR_R9 CMT_ASM(".byte 0X4D, 0X85, 0X11 # testq (%r9), %r10")
#define TEST_R10_FROM_PTR_R10 CMT_ASM(".byte 0X4D, 0X85, 0X12 # testq (%r10), %r10")
#define TEST_R10_FROM_PTR_R11 CMT_ASM(".byte 0X4D, 0X85, 0X13 # testq (%r11), %r10")
#define TEST_R10_FROM_PTR_R12 CMT_ASM(".byte 0X4D, 0X85, 0X14, 0X24 # testq (%r12), %r10")
#define TEST_R10_FROM_PTR_R13 CMT_ASM(".byte 0X4D, 0X85, 0X55, 0X00 # testq (%r13), %r10")
#define TEST_R10_FROM_PTR_R14 CMT_ASM(".byte 0X4D, 0X85, 0X16 # testq (%r14), %r10")
#define TEST_R10_FROM_PTR_R15 CMT_ASM(".byte 0X4D, 0X85, 0X17 # testq (%r15), %r10")
#define TEST_R10_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X10 # testq (%eax), %r10")
#define TEST_R10_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X13 # testq (%ebx), %r10")
#define TEST_R10_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X11 # testq (%ecx), %r10")
#define TEST_R10_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X12 # testq (%edx), %r10")
#define TEST_R10_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X17 # testq (%edi), %r10")
#define TEST_R10_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X16 # testq (%esi), %r10")
#define TEST_R10_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X55, 0X00 # testq (%ebp), %r10")
#define TEST_R10_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X14, 0X24 # testq (%esp), %r10")

#define TEST_R11_FROM_PTR_RAX CMT_ASM(".byte 0X4C, 0X85, 0X18 # testq (%rax), %r11")
#define TEST_R11_FROM_PTR_RBX CMT_ASM(".byte 0X4C, 0X85, 0X1B # testq (%rbx), %r11")
#define TEST_R11_FROM_PTR_RCX CMT_ASM(".byte 0X4C, 0X85, 0X19 # testq (%rcx), %r11")
#define TEST_R11_FROM_PTR_RDX CMT_ASM(".byte 0X4C, 0X85, 0X1A # testq (%rdx), %r11")
#define TEST_R11_FROM_PTR_RDI CMT_ASM(".byte 0X4C, 0X85, 0X1F # testq (%rdi), %r11")
#define TEST_R11_FROM_PTR_RSI CMT_ASM(".byte 0X4C, 0X85, 0X1E # testq (%rsi), %r11")
#define TEST_R11_FROM_PTR_RBP CMT_ASM(".byte 0X4C, 0X85, 0X5D, 0X00 # testq (%rbp), %r11")
#define TEST_R11_FROM_PTR_RSP CMT_ASM(".byte 0X4C, 0X85, 0X1C, 0X24 # testq (%rsp), %r11")
#define TEST_R11_FROM_PTR_R8 CMT_ASM(".byte 0X4D, 0X85, 0X18 # testq (%r8), %r11")
#define TEST_R11_FROM_PTR_R9 CMT_ASM(".byte 0X4D, 0X85, 0X19 # testq (%r9), %r11")
#define TEST_R11_FROM_PTR_R10 CMT_ASM(".byte 0X4D, 0X85, 0X1A # testq (%r10), %r11")
#define TEST_R11_FROM_PTR_R11 CMT_ASM(".byte 0X4D, 0X85, 0X1B # testq (%r11), %r11")
#define TEST_R11_FROM_PTR_R12 CMT_ASM(".byte 0X4D, 0X85, 0X1C, 0X24 # testq (%r12), %r11")
#define TEST_R11_FROM_PTR_R13 CMT_ASM(".byte 0X4D, 0X85, 0X5D, 0X00 # testq (%r13), %r11")
#define TEST_R11_FROM_PTR_R14 CMT_ASM(".byte 0X4D, 0X85, 0X1E # testq (%r14), %r11")
#define TEST_R11_FROM_PTR_R15 CMT_ASM(".byte 0X4D, 0X85, 0X1F # testq (%r15), %r11")
#define TEST_R11_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X18 # testq (%eax), %r11")
#define TEST_R11_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X1B # testq (%ebx), %r11")
#define TEST_R11_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X19 # testq (%ecx), %r11")
#define TEST_R11_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X1A # testq (%edx), %r11")
#define TEST_R11_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X1F # testq (%edi), %r11")
#define TEST_R11_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X1E # testq (%esi), %r11")
#define TEST_R11_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X5D, 0X00 # testq (%ebp), %r11")
#define TEST_R11_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X1C, 0X24 # testq (%esp), %r11")

#define TEST_R12_FROM_PTR_RAX CMT_ASM(".byte 0X4C, 0X85, 0X20 # testq (%rax), %r12")
#define TEST_R12_FROM_PTR_RBX CMT_ASM(".byte 0X4C, 0X85, 0X23 # testq (%rbx), %r12")
#define TEST_R12_FROM_PTR_RCX CMT_ASM(".byte 0X4C, 0X85, 0X21 # testq (%rcx), %r12")
#define TEST_R12_FROM_PTR_RDX CMT_ASM(".byte 0X4C, 0X85, 0X22 # testq (%rdx), %r12")
#define TEST_R12_FROM_PTR_RDI CMT_ASM(".byte 0X4C, 0X85, 0X27 # testq (%rdi), %r12")
#define TEST_R12_FROM_PTR_RSI CMT_ASM(".byte 0X4C, 0X85, 0X26 # testq (%rsi), %r12")
#define TEST_R12_FROM_PTR_RBP CMT_ASM(".byte 0X4C, 0X85, 0X65, 0X00 # testq (%rbp), %r12")
#define TEST_R12_FROM_PTR_RSP CMT_ASM(".byte 0X4C, 0X85, 0X24, 0X24 # testq (%rsp), %r12")
#define TEST_R12_FROM_PTR_R8 CMT_ASM(".byte 0X4D, 0X85, 0X20 # testq (%r8), %r12")
#define TEST_R12_FROM_PTR_R9 CMT_ASM(".byte 0X4D, 0X85, 0X21 # testq (%r9), %r12")
#define TEST_R12_FROM_PTR_R10 CMT_ASM(".byte 0X4D, 0X85, 0X22 # testq (%r10), %r12")
#define TEST_R12_FROM_PTR_R11 CMT_ASM(".byte 0X4D, 0X85, 0X23 # testq (%r11), %r12")
#define TEST_R12_FROM_PTR_R12 CMT_ASM(".byte 0X4D, 0X85, 0X24, 0X24 # testq (%r12), %r12")
#define TEST_R12_FROM_PTR_R13 CMT_ASM(".byte 0X4D, 0X85, 0X65, 0X00 # testq (%r13), %r12")
#define TEST_R12_FROM_PTR_R14 CMT_ASM(".byte 0X4D, 0X85, 0X26 # testq (%r14), %r12")
#define TEST_R12_FROM_PTR_R15 CMT_ASM(".byte 0X4D, 0X85, 0X27 # testq (%r15), %r12")
#define TEST_R12_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X20 # testq (%eax), %r12")
#define TEST_R12_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X23 # testq (%ebx), %r12")
#define TEST_R12_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X21 # testq (%ecx), %r12")
#define TEST_R12_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X22 # testq (%edx), %r12")
#define TEST_R12_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X27 # testq (%edi), %r12")
#define TEST_R12_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X26 # testq (%esi), %r12")
#define TEST_R12_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X65, 0X00 # testq (%ebp), %r12")
#define TEST_R12_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X24, 0X24 # testq (%esp), %r12")

#define TEST_R13_FROM_PTR_RAX CMT_ASM(".byte 0X4C, 0X85, 0X28 # testq (%rax), %r13")
#define TEST_R13_FROM_PTR_RBX CMT_ASM(".byte 0X4C, 0X85, 0X2B # testq (%rbx), %r13")
#define TEST_R13_FROM_PTR_RCX CMT_ASM(".byte 0X4C, 0X85, 0X29 # testq (%rcx), %r13")
#define TEST_R13_FROM_PTR_RDX CMT_ASM(".byte 0X4C, 0X85, 0X2A # testq (%rdx), %r13")
#define TEST_R13_FROM_PTR_RDI CMT_ASM(".byte 0X4C, 0X85, 0X2F # testq (%rdi), %r13")
#define TEST_R13_FROM_PTR_RSI CMT_ASM(".byte 0X4C, 0X85, 0X2E # testq (%rsi), %r13")
#define TEST_R13_FROM_PTR_RBP CMT_ASM(".byte 0X4C, 0X85, 0X6D, 0X00 # testq (%rbp), %r13")
#define TEST_R13_FROM_PTR_RSP CMT_ASM(".byte 0X4C, 0X85, 0X2C, 0X24 # testq (%rsp), %r13")
#define TEST_R13_FROM_PTR_R8 CMT_ASM(".byte 0X4D, 0X85, 0X28 # testq (%r8), %r13")
#define TEST_R13_FROM_PTR_R9 CMT_ASM(".byte 0X4D, 0X85, 0X29 # testq (%r9), %r13")
#define TEST_R13_FROM_PTR_R10 CMT_ASM(".byte 0X4D, 0X85, 0X2A # testq (%r10), %r13")
#define TEST_R13_FROM_PTR_R11 CMT_ASM(".byte 0X4D, 0X85, 0X2B # testq (%r11), %r13")
#define TEST_R13_FROM_PTR_R12 CMT_ASM(".byte 0X4D, 0X85, 0X2C, 0X24 # testq (%r12), %r13")
#define TEST_R13_FROM_PTR_R13 CMT_ASM(".byte 0X4D, 0X85, 0X6D, 0X00 # testq (%r13), %r13")
#define TEST_R13_FROM_PTR_R14 CMT_ASM(".byte 0X4D, 0X85, 0X2E # testq (%r14), %r13")
#define TEST_R13_FROM_PTR_R15 CMT_ASM(".byte 0X4D, 0X85, 0X2F # testq (%r15), %r13")
#define TEST_R13_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X28 # testq (%eax), %r13")
#define TEST_R13_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X2B # testq (%ebx), %r13")
#define TEST_R13_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X29 # testq (%ecx), %r13")
#define TEST_R13_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X2A # testq (%edx), %r13")
#define TEST_R13_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X2F # testq (%edi), %r13")
#define TEST_R13_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X2E # testq (%esi), %r13")
#define TEST_R13_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X6D, 0X00 # testq (%ebp), %r13")
#define TEST_R13_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X2C, 0X24 # testq (%esp), %r13")

#define TEST_R14_FROM_PTR_RAX CMT_ASM(".byte 0X4C, 0X85, 0X30 # testq (%rax), %r14")
#define TEST_R14_FROM_PTR_RBX CMT_ASM(".byte 0X4C, 0X85, 0X33 # testq (%rbx), %r14")
#define TEST_R14_FROM_PTR_RCX CMT_ASM(".byte 0X4C, 0X85, 0X31 # testq (%rcx), %r14")
#define TEST_R14_FROM_PTR_RDX CMT_ASM(".byte 0X4C, 0X85, 0X32 # testq (%rdx), %r14")
#define TEST_R14_FROM_PTR_RDI CMT_ASM(".byte 0X4C, 0X85, 0X37 # testq (%rdi), %r14")
#define TEST_R14_FROM_PTR_RSI CMT_ASM(".byte 0X4C, 0X85, 0X36 # testq (%rsi), %r14")
#define TEST_R14_FROM_PTR_RBP CMT_ASM(".byte 0X4C, 0X85, 0X75, 0X00 # testq (%rbp), %r14")
#define TEST_R14_FROM_PTR_RSP CMT_ASM(".byte 0X4C, 0X85, 0X34, 0X24 # testq (%rsp), %r14")
#define TEST_R14_FROM_PTR_R8 CMT_ASM(".byte 0X4D, 0X85, 0X30 # testq (%r8), %r14")
#define TEST_R14_FROM_PTR_R9 CMT_ASM(".byte 0X4D, 0X85, 0X31 # testq (%r9), %r14")
#define TEST_R14_FROM_PTR_R10 CMT_ASM(".byte 0X4D, 0X85, 0X32 # testq (%r10), %r14")
#define TEST_R14_FROM_PTR_R11 CMT_ASM(".byte 0X4D, 0X85, 0X33 # testq (%r11), %r14")
#define TEST_R14_FROM_PTR_R12 CMT_ASM(".byte 0X4D, 0X85, 0X34, 0X24 # testq (%r12), %r14")
#define TEST_R14_FROM_PTR_R13 CMT_ASM(".byte 0X4D, 0X85, 0X75, 0X00 # testq (%r13), %r14")
#define TEST_R14_FROM_PTR_R14 CMT_ASM(".byte 0X4D, 0X85, 0X36 # testq (%r14), %r14")
#define TEST_R14_FROM_PTR_R15 CMT_ASM(".byte 0X4D, 0X85, 0X37 # testq (%r15), %r14")
#define TEST_R14_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X30 # testq (%eax), %r14")
#define TEST_R14_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X33 # testq (%ebx), %r14")
#define TEST_R14_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X31 # testq (%ecx), %r14")
#define TEST_R14_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X32 # testq (%edx), %r14")
#define TEST_R14_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X37 # testq (%edi), %r14")
#define TEST_R14_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X36 # testq (%esi), %r14")
#define TEST_R14_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X75, 0X00 # testq (%ebp), %r14")
#define TEST_R14_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X34, 0X24 # testq (%esp), %r14")

#define TEST_R15_FROM_PTR_RAX CMT_ASM(".byte 0X4C, 0X85, 0X38 # testq (%rax), %r15")
#define TEST_R15_FROM_PTR_RBX CMT_ASM(".byte 0X4C, 0X85, 0X3B # testq (%rbx), %r15")
#define TEST_R15_FROM_PTR_RCX CMT_ASM(".byte 0X4C, 0X85, 0X39 # testq (%rcx), %r15")
#define TEST_R15_FROM_PTR_RDX CMT_ASM(".byte 0X4C, 0X85, 0X3A # testq (%rdx), %r15")
#define TEST_R15_FROM_PTR_RDI CMT_ASM(".byte 0X4C, 0X85, 0X3F # testq (%rdi), %r15")
#define TEST_R15_FROM_PTR_RSI CMT_ASM(".byte 0X4C, 0X85, 0X3E # testq (%rsi), %r15")
#define TEST_R15_FROM_PTR_RBP CMT_ASM(".byte 0X4C, 0X85, 0X7D, 0X00 # testq (%rbp), %r15")
#define TEST_R15_FROM_PTR_RSP CMT_ASM(".byte 0X4C, 0X85, 0X3C, 0X24 # testq (%rsp), %r15")
#define TEST_R15_FROM_PTR_R8 CMT_ASM(".byte 0X4D, 0X85, 0X38 # testq (%r8), %r15")
#define TEST_R15_FROM_PTR_R9 CMT_ASM(".byte 0X4D, 0X85, 0X39 # testq (%r9), %r15")
#define TEST_R15_FROM_PTR_R10 CMT_ASM(".byte 0X4D, 0X85, 0X3A # testq (%r10), %r15")
#define TEST_R15_FROM_PTR_R11 CMT_ASM(".byte 0X4D, 0X85, 0X3B # testq (%r11), %r15")
#define TEST_R15_FROM_PTR_R12 CMT_ASM(".byte 0X4D, 0X85, 0X3C, 0X24 # testq (%r12), %r15")
#define TEST_R15_FROM_PTR_R13 CMT_ASM(".byte 0X4D, 0X85, 0X7D, 0X00 # testq (%r13), %r15")
#define TEST_R15_FROM_PTR_R14 CMT_ASM(".byte 0X4D, 0X85, 0X3E # testq (%r14), %r15")
#define TEST_R15_FROM_PTR_R15 CMT_ASM(".byte 0X4D, 0X85, 0X3F # testq (%r15), %r15")
#define TEST_R15_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X38 # testq (%eax), %r15")
#define TEST_R15_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X3B # testq (%ebx), %r15")
#define TEST_R15_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X39 # testq (%ecx), %r15")
#define TEST_R15_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X3A # testq (%edx), %r15")
#define TEST_R15_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X3F # testq (%edi), %r15")
#define TEST_R15_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X3E # testq (%esi), %r15")
#define TEST_R15_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X7D, 0X00 # testq (%ebp), %r15")
#define TEST_R15_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X3C, 0X24 # testq (%esp), %r15")

#define TEST_RAX_TO_PTR_RAX CMT_ASM(".byte 0X48, 0X85, 0X00 # testq %rax, (%rax)")
#define TEST_RAX_TO_PTR_RBX CMT_ASM(".byte 0X48, 0X85, 0X03 # testq %rax, (%rbx)")
#define TEST_RAX_TO_PTR_RCX CMT_ASM(".byte 0X48, 0X85, 0X01 # testq %rax, (%rcx)")
#define TEST_RAX_TO_PTR_RDX CMT_ASM(".byte 0X48, 0X85, 0X02 # testq %rax, (%rdx)")
#define TEST_RAX_TO_PTR_RDI CMT_ASM(".byte 0X48, 0X85, 0X07 # testq %rax, (%rdi)")
#define TEST_RAX_TO_PTR_RSI CMT_ASM(".byte 0X48, 0X85, 0X06 # testq %rax, (%rsi)")
#define TEST_RAX_TO_PTR_RBP CMT_ASM(".byte 0X48, 0X85, 0X45, 0X00 # testq %rax, (%rbp)")
#define TEST_RAX_TO_PTR_RSP CMT_ASM(".byte 0X48, 0X85, 0X04, 0X24 # testq %rax, (%rsp)")
#define TEST_RAX_TO_PTR_R8 CMT_ASM(".byte 0X49, 0X85, 0X00 # testq %rax, (%r8)")
#define TEST_RAX_TO_PTR_R9 CMT_ASM(".byte 0X49, 0X85, 0X01 # testq %rax, (%r9)")
#define TEST_RAX_TO_PTR_R10 CMT_ASM(".byte 0X49, 0X85, 0X02 # testq %rax, (%r10)")
#define TEST_RAX_TO_PTR_R11 CMT_ASM(".byte 0X49, 0X85, 0X03 # testq %rax, (%r11)")
#define TEST_RAX_TO_PTR_R12 CMT_ASM(".byte 0X49, 0X85, 0X04, 0X24 # testq %rax, (%r12)")
#define TEST_RAX_TO_PTR_R13 CMT_ASM(".byte 0X49, 0X85, 0X45, 0X00 # testq %rax, (%r13)")
#define TEST_RAX_TO_PTR_R14 CMT_ASM(".byte 0X49, 0X85, 0X06 # testq %rax, (%r14)")
#define TEST_RAX_TO_PTR_R15 CMT_ASM(".byte 0X49, 0X85, 0X07 # testq %rax, (%r15)")
#define TEST_RAX_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X85, 0X00 # testq %rax, (%eax)")
#define TEST_RAX_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X85, 0X03 # testq %rax, (%ebx)")
#define TEST_RAX_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X85, 0X01 # testq %rax, (%ecx)")
#define TEST_RAX_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X85, 0X02 # testq %rax, (%edx)")
#define TEST_RAX_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X85, 0X07 # testq %rax, (%edi)")
#define TEST_RAX_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X85, 0X06 # testq %rax, (%esi)")
#define TEST_RAX_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X85, 0X45, 0X00 # testq %rax, (%ebp)")
#define TEST_RAX_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X85, 0X04, 0X24 # testq %rax, (%esp)")

#define TEST_RBX_TO_PTR_RAX CMT_ASM(".byte 0X48, 0X85, 0X18 # testq %rbx, (%rax)")
#define TEST_RBX_TO_PTR_RBX CMT_ASM(".byte 0X48, 0X85, 0X1B # testq %rbx, (%rbx)")
#define TEST_RBX_TO_PTR_RCX CMT_ASM(".byte 0X48, 0X85, 0X19 # testq %rbx, (%rcx)")
#define TEST_RBX_TO_PTR_RDX CMT_ASM(".byte 0X48, 0X85, 0X1A # testq %rbx, (%rdx)")
#define TEST_RBX_TO_PTR_RDI CMT_ASM(".byte 0X48, 0X85, 0X1F # testq %rbx, (%rdi)")
#define TEST_RBX_TO_PTR_RSI CMT_ASM(".byte 0X48, 0X85, 0X1E # testq %rbx, (%rsi)")
#define TEST_RBX_TO_PTR_RBP CMT_ASM(".byte 0X48, 0X85, 0X5D, 0X00 # testq %rbx, (%rbp)")
#define TEST_RBX_TO_PTR_RSP CMT_ASM(".byte 0X48, 0X85, 0X1C, 0X24 # testq %rbx, (%rsp)")
#define TEST_RBX_TO_PTR_R8 CMT_ASM(".byte 0X49, 0X85, 0X18 # testq %rbx, (%r8)")
#define TEST_RBX_TO_PTR_R9 CMT_ASM(".byte 0X49, 0X85, 0X19 # testq %rbx, (%r9)")
#define TEST_RBX_TO_PTR_R10 CMT_ASM(".byte 0X49, 0X85, 0X1A # testq %rbx, (%r10)")
#define TEST_RBX_TO_PTR_R11 CMT_ASM(".byte 0X49, 0X85, 0X1B # testq %rbx, (%r11)")
#define TEST_RBX_TO_PTR_R12 CMT_ASM(".byte 0X49, 0X85, 0X1C, 0X24 # testq %rbx, (%r12)")
#define TEST_RBX_TO_PTR_R13 CMT_ASM(".byte 0X49, 0X85, 0X5D, 0X00 # testq %rbx, (%r13)")
#define TEST_RBX_TO_PTR_R14 CMT_ASM(".byte 0X49, 0X85, 0X1E # testq %rbx, (%r14)")
#define TEST_RBX_TO_PTR_R15 CMT_ASM(".byte 0X49, 0X85, 0X1F # testq %rbx, (%r15)")
#define TEST_RBX_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X85, 0X18 # testq %rbx, (%eax)")
#define TEST_RBX_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X85, 0X1B # testq %rbx, (%ebx)")
#define TEST_RBX_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X85, 0X19 # testq %rbx, (%ecx)")
#define TEST_RBX_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X85, 0X1A # testq %rbx, (%edx)")
#define TEST_RBX_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X85, 0X1F # testq %rbx, (%edi)")
#define TEST_RBX_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X85, 0X1E # testq %rbx, (%esi)")
#define TEST_RBX_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X85, 0X5D, 0X00 # testq %rbx, (%ebp)")
#define TEST_RBX_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X85, 0X1C, 0X24 # testq %rbx, (%esp)")

#define TEST_RCX_TO_PTR_RAX CMT_ASM(".byte 0X48, 0X85, 0X08 # testq %rcx, (%rax)")
#define TEST_RCX_TO_PTR_RBX CMT_ASM(".byte 0X48, 0X85, 0X0B # testq %rcx, (%rbx)")
#define TEST_RCX_TO_PTR_RCX CMT_ASM(".byte 0X48, 0X85, 0X09 # testq %rcx, (%rcx)")
#define TEST_RCX_TO_PTR_RDX CMT_ASM(".byte 0X48, 0X85, 0X0A # testq %rcx, (%rdx)")
#define TEST_RCX_TO_PTR_RDI CMT_ASM(".byte 0X48, 0X85, 0X0F # testq %rcx, (%rdi)")
#define TEST_RCX_TO_PTR_RSI CMT_ASM(".byte 0X48, 0X85, 0X0E # testq %rcx, (%rsi)")
#define TEST_RCX_TO_PTR_RBP CMT_ASM(".byte 0X48, 0X85, 0X4D, 0X00 # testq %rcx, (%rbp)")
#define TEST_RCX_TO_PTR_RSP CMT_ASM(".byte 0X48, 0X85, 0X0C, 0X24 # testq %rcx, (%rsp)")
#define TEST_RCX_TO_PTR_R8 CMT_ASM(".byte 0X49, 0X85, 0X08 # testq %rcx, (%r8)")
#define TEST_RCX_TO_PTR_R9 CMT_ASM(".byte 0X49, 0X85, 0X09 # testq %rcx, (%r9)")
#define TEST_RCX_TO_PTR_R10 CMT_ASM(".byte 0X49, 0X85, 0X0A # testq %rcx, (%r10)")
#define TEST_RCX_TO_PTR_R11 CMT_ASM(".byte 0X49, 0X85, 0X0B # testq %rcx, (%r11)")
#define TEST_RCX_TO_PTR_R12 CMT_ASM(".byte 0X49, 0X85, 0X0C, 0X24 # testq %rcx, (%r12)")
#define TEST_RCX_TO_PTR_R13 CMT_ASM(".byte 0X49, 0X85, 0X4D, 0X00 # testq %rcx, (%r13)")
#define TEST_RCX_TO_PTR_R14 CMT_ASM(".byte 0X49, 0X85, 0X0E # testq %rcx, (%r14)")
#define TEST_RCX_TO_PTR_R15 CMT_ASM(".byte 0X49, 0X85, 0X0F # testq %rcx, (%r15)")
#define TEST_RCX_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X85, 0X08 # testq %rcx, (%eax)")
#define TEST_RCX_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X85, 0X0B # testq %rcx, (%ebx)")
#define TEST_RCX_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X85, 0X09 # testq %rcx, (%ecx)")
#define TEST_RCX_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X85, 0X0A # testq %rcx, (%edx)")
#define TEST_RCX_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X85, 0X0F # testq %rcx, (%edi)")
#define TEST_RCX_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X85, 0X0E # testq %rcx, (%esi)")
#define TEST_RCX_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X85, 0X4D, 0X00 # testq %rcx, (%ebp)")
#define TEST_RCX_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X85, 0X0C, 0X24 # testq %rcx, (%esp)")

#define TEST_RDX_TO_PTR_RAX CMT_ASM(".byte 0X48, 0X85, 0X10 # testq %rdx, (%rax)")
#define TEST_RDX_TO_PTR_RBX CMT_ASM(".byte 0X48, 0X85, 0X13 # testq %rdx, (%rbx)")
#define TEST_RDX_TO_PTR_RCX CMT_ASM(".byte 0X48, 0X85, 0X11 # testq %rdx, (%rcx)")
#define TEST_RDX_TO_PTR_RDX CMT_ASM(".byte 0X48, 0X85, 0X12 # testq %rdx, (%rdx)")
#define TEST_RDX_TO_PTR_RDI CMT_ASM(".byte 0X48, 0X85, 0X17 # testq %rdx, (%rdi)")
#define TEST_RDX_TO_PTR_RSI CMT_ASM(".byte 0X48, 0X85, 0X16 # testq %rdx, (%rsi)")
#define TEST_RDX_TO_PTR_RBP CMT_ASM(".byte 0X48, 0X85, 0X55, 0X00 # testq %rdx, (%rbp)")
#define TEST_RDX_TO_PTR_RSP CMT_ASM(".byte 0X48, 0X85, 0X14, 0X24 # testq %rdx, (%rsp)")
#define TEST_RDX_TO_PTR_R8 CMT_ASM(".byte 0X49, 0X85, 0X10 # testq %rdx, (%r8)")
#define TEST_RDX_TO_PTR_R9 CMT_ASM(".byte 0X49, 0X85, 0X11 # testq %rdx, (%r9)")
#define TEST_RDX_TO_PTR_R10 CMT_ASM(".byte 0X49, 0X85, 0X12 # testq %rdx, (%r10)")
#define TEST_RDX_TO_PTR_R11 CMT_ASM(".byte 0X49, 0X85, 0X13 # testq %rdx, (%r11)")
#define TEST_RDX_TO_PTR_R12 CMT_ASM(".byte 0X49, 0X85, 0X14, 0X24 # testq %rdx, (%r12)")
#define TEST_RDX_TO_PTR_R13 CMT_ASM(".byte 0X49, 0X85, 0X55, 0X00 # testq %rdx, (%r13)")
#define TEST_RDX_TO_PTR_R14 CMT_ASM(".byte 0X49, 0X85, 0X16 # testq %rdx, (%r14)")
#define TEST_RDX_TO_PTR_R15 CMT_ASM(".byte 0X49, 0X85, 0X17 # testq %rdx, (%r15)")
#define TEST_RDX_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X85, 0X10 # testq %rdx, (%eax)")
#define TEST_RDX_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X85, 0X13 # testq %rdx, (%ebx)")
#define TEST_RDX_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X85, 0X11 # testq %rdx, (%ecx)")
#define TEST_RDX_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X85, 0X12 # testq %rdx, (%edx)")
#define TEST_RDX_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X85, 0X17 # testq %rdx, (%edi)")
#define TEST_RDX_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X85, 0X16 # testq %rdx, (%esi)")
#define TEST_RDX_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X85, 0X55, 0X00 # testq %rdx, (%ebp)")
#define TEST_RDX_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X85, 0X14, 0X24 # testq %rdx, (%esp)")

#define TEST_RDI_TO_PTR_RAX CMT_ASM(".byte 0X48, 0X85, 0X38 # testq %rdi, (%rax)")
#define TEST_RDI_TO_PTR_RBX CMT_ASM(".byte 0X48, 0X85, 0X3B # testq %rdi, (%rbx)")
#define TEST_RDI_TO_PTR_RCX CMT_ASM(".byte 0X48, 0X85, 0X39 # testq %rdi, (%rcx)")
#define TEST_RDI_TO_PTR_RDX CMT_ASM(".byte 0X48, 0X85, 0X3A # testq %rdi, (%rdx)")
#define TEST_RDI_TO_PTR_RDI CMT_ASM(".byte 0X48, 0X85, 0X3F # testq %rdi, (%rdi)")
#define TEST_RDI_TO_PTR_RSI CMT_ASM(".byte 0X48, 0X85, 0X3E # testq %rdi, (%rsi)")
#define TEST_RDI_TO_PTR_RBP CMT_ASM(".byte 0X48, 0X85, 0X7D, 0X00 # testq %rdi, (%rbp)")
#define TEST_RDI_TO_PTR_RSP CMT_ASM(".byte 0X48, 0X85, 0X3C, 0X24 # testq %rdi, (%rsp)")
#define TEST_RDI_TO_PTR_R8 CMT_ASM(".byte 0X49, 0X85, 0X38 # testq %rdi, (%r8)")
#define TEST_RDI_TO_PTR_R9 CMT_ASM(".byte 0X49, 0X85, 0X39 # testq %rdi, (%r9)")
#define TEST_RDI_TO_PTR_R10 CMT_ASM(".byte 0X49, 0X85, 0X3A # testq %rdi, (%r10)")
#define TEST_RDI_TO_PTR_R11 CMT_ASM(".byte 0X49, 0X85, 0X3B # testq %rdi, (%r11)")
#define TEST_RDI_TO_PTR_R12 CMT_ASM(".byte 0X49, 0X85, 0X3C, 0X24 # testq %rdi, (%r12)")
#define TEST_RDI_TO_PTR_R13 CMT_ASM(".byte 0X49, 0X85, 0X7D, 0X00 # testq %rdi, (%r13)")
#define TEST_RDI_TO_PTR_R14 CMT_ASM(".byte 0X49, 0X85, 0X3E # testq %rdi, (%r14)")
#define TEST_RDI_TO_PTR_R15 CMT_ASM(".byte 0X49, 0X85, 0X3F # testq %rdi, (%r15)")
#define TEST_RDI_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X85, 0X38 # testq %rdi, (%eax)")
#define TEST_RDI_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X85, 0X3B # testq %rdi, (%ebx)")
#define TEST_RDI_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X85, 0X39 # testq %rdi, (%ecx)")
#define TEST_RDI_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X85, 0X3A # testq %rdi, (%edx)")
#define TEST_RDI_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X85, 0X3F # testq %rdi, (%edi)")
#define TEST_RDI_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X85, 0X3E # testq %rdi, (%esi)")
#define TEST_RDI_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X85, 0X7D, 0X00 # testq %rdi, (%ebp)")
#define TEST_RDI_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X85, 0X3C, 0X24 # testq %rdi, (%esp)")

#define TEST_RSI_TO_PTR_RAX CMT_ASM(".byte 0X48, 0X85, 0X30 # testq %rsi, (%rax)")
#define TEST_RSI_TO_PTR_RBX CMT_ASM(".byte 0X48, 0X85, 0X33 # testq %rsi, (%rbx)")
#define TEST_RSI_TO_PTR_RCX CMT_ASM(".byte 0X48, 0X85, 0X31 # testq %rsi, (%rcx)")
#define TEST_RSI_TO_PTR_RDX CMT_ASM(".byte 0X48, 0X85, 0X32 # testq %rsi, (%rdx)")
#define TEST_RSI_TO_PTR_RDI CMT_ASM(".byte 0X48, 0X85, 0X37 # testq %rsi, (%rdi)")
#define TEST_RSI_TO_PTR_RSI CMT_ASM(".byte 0X48, 0X85, 0X36 # testq %rsi, (%rsi)")
#define TEST_RSI_TO_PTR_RBP CMT_ASM(".byte 0X48, 0X85, 0X75, 0X00 # testq %rsi, (%rbp)")
#define TEST_RSI_TO_PTR_RSP CMT_ASM(".byte 0X48, 0X85, 0X34, 0X24 # testq %rsi, (%rsp)")
#define TEST_RSI_TO_PTR_R8 CMT_ASM(".byte 0X49, 0X85, 0X30 # testq %rsi, (%r8)")
#define TEST_RSI_TO_PTR_R9 CMT_ASM(".byte 0X49, 0X85, 0X31 # testq %rsi, (%r9)")
#define TEST_RSI_TO_PTR_R10 CMT_ASM(".byte 0X49, 0X85, 0X32 # testq %rsi, (%r10)")
#define TEST_RSI_TO_PTR_R11 CMT_ASM(".byte 0X49, 0X85, 0X33 # testq %rsi, (%r11)")
#define TEST_RSI_TO_PTR_R12 CMT_ASM(".byte 0X49, 0X85, 0X34, 0X24 # testq %rsi, (%r12)")
#define TEST_RSI_TO_PTR_R13 CMT_ASM(".byte 0X49, 0X85, 0X75, 0X00 # testq %rsi, (%r13)")
#define TEST_RSI_TO_PTR_R14 CMT_ASM(".byte 0X49, 0X85, 0X36 # testq %rsi, (%r14)")
#define TEST_RSI_TO_PTR_R15 CMT_ASM(".byte 0X49, 0X85, 0X37 # testq %rsi, (%r15)")
#define TEST_RSI_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X85, 0X30 # testq %rsi, (%eax)")
#define TEST_RSI_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X85, 0X33 # testq %rsi, (%ebx)")
#define TEST_RSI_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X85, 0X31 # testq %rsi, (%ecx)")
#define TEST_RSI_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X85, 0X32 # testq %rsi, (%edx)")
#define TEST_RSI_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X85, 0X37 # testq %rsi, (%edi)")
#define TEST_RSI_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X85, 0X36 # testq %rsi, (%esi)")
#define TEST_RSI_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X85, 0X75, 0X00 # testq %rsi, (%ebp)")
#define TEST_RSI_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X85, 0X34, 0X24 # testq %rsi, (%esp)")

#define TEST_RBP_TO_PTR_RAX CMT_ASM(".byte 0X48, 0X85, 0X28 # testq %rbp, (%rax)")
#define TEST_RBP_TO_PTR_RBX CMT_ASM(".byte 0X48, 0X85, 0X2B # testq %rbp, (%rbx)")
#define TEST_RBP_TO_PTR_RCX CMT_ASM(".byte 0X48, 0X85, 0X29 # testq %rbp, (%rcx)")
#define TEST_RBP_TO_PTR_RDX CMT_ASM(".byte 0X48, 0X85, 0X2A # testq %rbp, (%rdx)")
#define TEST_RBP_TO_PTR_RDI CMT_ASM(".byte 0X48, 0X85, 0X2F # testq %rbp, (%rdi)")
#define TEST_RBP_TO_PTR_RSI CMT_ASM(".byte 0X48, 0X85, 0X2E # testq %rbp, (%rsi)")
#define TEST_RBP_TO_PTR_RBP CMT_ASM(".byte 0X48, 0X85, 0X6D, 0X00 # testq %rbp, (%rbp)")
#define TEST_RBP_TO_PTR_RSP CMT_ASM(".byte 0X48, 0X85, 0X2C, 0X24 # testq %rbp, (%rsp)")
#define TEST_RBP_TO_PTR_R8 CMT_ASM(".byte 0X49, 0X85, 0X28 # testq %rbp, (%r8)")
#define TEST_RBP_TO_PTR_R9 CMT_ASM(".byte 0X49, 0X85, 0X29 # testq %rbp, (%r9)")
#define TEST_RBP_TO_PTR_R10 CMT_ASM(".byte 0X49, 0X85, 0X2A # testq %rbp, (%r10)")
#define TEST_RBP_TO_PTR_R11 CMT_ASM(".byte 0X49, 0X85, 0X2B # testq %rbp, (%r11)")
#define TEST_RBP_TO_PTR_R12 CMT_ASM(".byte 0X49, 0X85, 0X2C, 0X24 # testq %rbp, (%r12)")
#define TEST_RBP_TO_PTR_R13 CMT_ASM(".byte 0X49, 0X85, 0X6D, 0X00 # testq %rbp, (%r13)")
#define TEST_RBP_TO_PTR_R14 CMT_ASM(".byte 0X49, 0X85, 0X2E # testq %rbp, (%r14)")
#define TEST_RBP_TO_PTR_R15 CMT_ASM(".byte 0X49, 0X85, 0X2F # testq %rbp, (%r15)")
#define TEST_RBP_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X85, 0X28 # testq %rbp, (%eax)")
#define TEST_RBP_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X85, 0X2B # testq %rbp, (%ebx)")
#define TEST_RBP_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X85, 0X29 # testq %rbp, (%ecx)")
#define TEST_RBP_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X85, 0X2A # testq %rbp, (%edx)")
#define TEST_RBP_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X85, 0X2F # testq %rbp, (%edi)")
#define TEST_RBP_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X85, 0X2E # testq %rbp, (%esi)")
#define TEST_RBP_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X85, 0X6D, 0X00 # testq %rbp, (%ebp)")
#define TEST_RBP_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X85, 0X2C, 0X24 # testq %rbp, (%esp)")

#define TEST_RSP_TO_PTR_RAX CMT_ASM(".byte 0X48, 0X85, 0X20 # testq %rsp, (%rax)")
#define TEST_RSP_TO_PTR_RBX CMT_ASM(".byte 0X48, 0X85, 0X23 # testq %rsp, (%rbx)")
#define TEST_RSP_TO_PTR_RCX CMT_ASM(".byte 0X48, 0X85, 0X21 # testq %rsp, (%rcx)")
#define TEST_RSP_TO_PTR_RDX CMT_ASM(".byte 0X48, 0X85, 0X22 # testq %rsp, (%rdx)")
#define TEST_RSP_TO_PTR_RDI CMT_ASM(".byte 0X48, 0X85, 0X27 # testq %rsp, (%rdi)")
#define TEST_RSP_TO_PTR_RSI CMT_ASM(".byte 0X48, 0X85, 0X26 # testq %rsp, (%rsi)")
#define TEST_RSP_TO_PTR_RBP CMT_ASM(".byte 0X48, 0X85, 0X65, 0X00 # testq %rsp, (%rbp)")
#define TEST_RSP_TO_PTR_RSP CMT_ASM(".byte 0X48, 0X85, 0X24, 0X24 # testq %rsp, (%rsp)")
#define TEST_RSP_TO_PTR_R8 CMT_ASM(".byte 0X49, 0X85, 0X20 # testq %rsp, (%r8)")
#define TEST_RSP_TO_PTR_R9 CMT_ASM(".byte 0X49, 0X85, 0X21 # testq %rsp, (%r9)")
#define TEST_RSP_TO_PTR_R10 CMT_ASM(".byte 0X49, 0X85, 0X22 # testq %rsp, (%r10)")
#define TEST_RSP_TO_PTR_R11 CMT_ASM(".byte 0X49, 0X85, 0X23 # testq %rsp, (%r11)")
#define TEST_RSP_TO_PTR_R12 CMT_ASM(".byte 0X49, 0X85, 0X24, 0X24 # testq %rsp, (%r12)")
#define TEST_RSP_TO_PTR_R13 CMT_ASM(".byte 0X49, 0X85, 0X65, 0X00 # testq %rsp, (%r13)")
#define TEST_RSP_TO_PTR_R14 CMT_ASM(".byte 0X49, 0X85, 0X26 # testq %rsp, (%r14)")
#define TEST_RSP_TO_PTR_R15 CMT_ASM(".byte 0X49, 0X85, 0X27 # testq %rsp, (%r15)")
#define TEST_RSP_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X85, 0X20 # testq %rsp, (%eax)")
#define TEST_RSP_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X85, 0X23 # testq %rsp, (%ebx)")
#define TEST_RSP_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X85, 0X21 # testq %rsp, (%ecx)")
#define TEST_RSP_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X85, 0X22 # testq %rsp, (%edx)")
#define TEST_RSP_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X85, 0X27 # testq %rsp, (%edi)")
#define TEST_RSP_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X85, 0X26 # testq %rsp, (%esi)")
#define TEST_RSP_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X85, 0X65, 0X00 # testq %rsp, (%ebp)")
#define TEST_RSP_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X85, 0X24, 0X24 # testq %rsp, (%esp)")

#define TEST_R8_TO_PTR_RAX CMT_ASM(".byte 0X4C, 0X85, 0X00 # testq %r8, (%rax)")
#define TEST_R8_TO_PTR_RBX CMT_ASM(".byte 0X4C, 0X85, 0X03 # testq %r8, (%rbx)")
#define TEST_R8_TO_PTR_RCX CMT_ASM(".byte 0X4C, 0X85, 0X01 # testq %r8, (%rcx)")
#define TEST_R8_TO_PTR_RDX CMT_ASM(".byte 0X4C, 0X85, 0X02 # testq %r8, (%rdx)")
#define TEST_R8_TO_PTR_RDI CMT_ASM(".byte 0X4C, 0X85, 0X07 # testq %r8, (%rdi)")
#define TEST_R8_TO_PTR_RSI CMT_ASM(".byte 0X4C, 0X85, 0X06 # testq %r8, (%rsi)")
#define TEST_R8_TO_PTR_RBP CMT_ASM(".byte 0X4C, 0X85, 0X45, 0X00 # testq %r8, (%rbp)")
#define TEST_R8_TO_PTR_RSP CMT_ASM(".byte 0X4C, 0X85, 0X04, 0X24 # testq %r8, (%rsp)")
#define TEST_R8_TO_PTR_R8 CMT_ASM(".byte 0X4D, 0X85, 0X00 # testq %r8, (%r8)")
#define TEST_R8_TO_PTR_R9 CMT_ASM(".byte 0X4D, 0X85, 0X01 # testq %r8, (%r9)")
#define TEST_R8_TO_PTR_R10 CMT_ASM(".byte 0X4D, 0X85, 0X02 # testq %r8, (%r10)")
#define TEST_R8_TO_PTR_R11 CMT_ASM(".byte 0X4D, 0X85, 0X03 # testq %r8, (%r11)")
#define TEST_R8_TO_PTR_R12 CMT_ASM(".byte 0X4D, 0X85, 0X04, 0X24 # testq %r8, (%r12)")
#define TEST_R8_TO_PTR_R13 CMT_ASM(".byte 0X4D, 0X85, 0X45, 0X00 # testq %r8, (%r13)")
#define TEST_R8_TO_PTR_R14 CMT_ASM(".byte 0X4D, 0X85, 0X06 # testq %r8, (%r14)")
#define TEST_R8_TO_PTR_R15 CMT_ASM(".byte 0X4D, 0X85, 0X07 # testq %r8, (%r15)")
#define TEST_R8_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X00 # testq %r8, (%eax)")
#define TEST_R8_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X03 # testq %r8, (%ebx)")
#define TEST_R8_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X01 # testq %r8, (%ecx)")
#define TEST_R8_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X02 # testq %r8, (%edx)")
#define TEST_R8_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X07 # testq %r8, (%edi)")
#define TEST_R8_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X06 # testq %r8, (%esi)")
#define TEST_R8_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X45, 0X00 # testq %r8, (%ebp)")
#define TEST_R8_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X04, 0X24 # testq %r8, (%esp)")

#define TEST_R9_TO_PTR_RAX CMT_ASM(".byte 0X4C, 0X85, 0X08 # testq %r9, (%rax)")
#define TEST_R9_TO_PTR_RBX CMT_ASM(".byte 0X4C, 0X85, 0X0B # testq %r9, (%rbx)")
#define TEST_R9_TO_PTR_RCX CMT_ASM(".byte 0X4C, 0X85, 0X09 # testq %r9, (%rcx)")
#define TEST_R9_TO_PTR_RDX CMT_ASM(".byte 0X4C, 0X85, 0X0A # testq %r9, (%rdx)")
#define TEST_R9_TO_PTR_RDI CMT_ASM(".byte 0X4C, 0X85, 0X0F # testq %r9, (%rdi)")
#define TEST_R9_TO_PTR_RSI CMT_ASM(".byte 0X4C, 0X85, 0X0E # testq %r9, (%rsi)")
#define TEST_R9_TO_PTR_RBP CMT_ASM(".byte 0X4C, 0X85, 0X4D, 0X00 # testq %r9, (%rbp)")
#define TEST_R9_TO_PTR_RSP CMT_ASM(".byte 0X4C, 0X85, 0X0C, 0X24 # testq %r9, (%rsp)")
#define TEST_R9_TO_PTR_R8 CMT_ASM(".byte 0X4D, 0X85, 0X08 # testq %r9, (%r8)")
#define TEST_R9_TO_PTR_R9 CMT_ASM(".byte 0X4D, 0X85, 0X09 # testq %r9, (%r9)")
#define TEST_R9_TO_PTR_R10 CMT_ASM(".byte 0X4D, 0X85, 0X0A # testq %r9, (%r10)")
#define TEST_R9_TO_PTR_R11 CMT_ASM(".byte 0X4D, 0X85, 0X0B # testq %r9, (%r11)")
#define TEST_R9_TO_PTR_R12 CMT_ASM(".byte 0X4D, 0X85, 0X0C, 0X24 # testq %r9, (%r12)")
#define TEST_R9_TO_PTR_R13 CMT_ASM(".byte 0X4D, 0X85, 0X4D, 0X00 # testq %r9, (%r13)")
#define TEST_R9_TO_PTR_R14 CMT_ASM(".byte 0X4D, 0X85, 0X0E # testq %r9, (%r14)")
#define TEST_R9_TO_PTR_R15 CMT_ASM(".byte 0X4D, 0X85, 0X0F # testq %r9, (%r15)")
#define TEST_R9_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X08 # testq %r9, (%eax)")
#define TEST_R9_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X0B # testq %r9, (%ebx)")
#define TEST_R9_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X09 # testq %r9, (%ecx)")
#define TEST_R9_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X0A # testq %r9, (%edx)")
#define TEST_R9_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X0F # testq %r9, (%edi)")
#define TEST_R9_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X0E # testq %r9, (%esi)")
#define TEST_R9_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X4D, 0X00 # testq %r9, (%ebp)")
#define TEST_R9_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X0C, 0X24 # testq %r9, (%esp)")

#define TEST_R10_TO_PTR_RAX CMT_ASM(".byte 0X4C, 0X85, 0X10 # testq %r10, (%rax)")
#define TEST_R10_TO_PTR_RBX CMT_ASM(".byte 0X4C, 0X85, 0X13 # testq %r10, (%rbx)")
#define TEST_R10_TO_PTR_RCX CMT_ASM(".byte 0X4C, 0X85, 0X11 # testq %r10, (%rcx)")
#define TEST_R10_TO_PTR_RDX CMT_ASM(".byte 0X4C, 0X85, 0X12 # testq %r10, (%rdx)")
#define TEST_R10_TO_PTR_RDI CMT_ASM(".byte 0X4C, 0X85, 0X17 # testq %r10, (%rdi)")
#define TEST_R10_TO_PTR_RSI CMT_ASM(".byte 0X4C, 0X85, 0X16 # testq %r10, (%rsi)")
#define TEST_R10_TO_PTR_RBP CMT_ASM(".byte 0X4C, 0X85, 0X55, 0X00 # testq %r10, (%rbp)")
#define TEST_R10_TO_PTR_RSP CMT_ASM(".byte 0X4C, 0X85, 0X14, 0X24 # testq %r10, (%rsp)")
#define TEST_R10_TO_PTR_R8 CMT_ASM(".byte 0X4D, 0X85, 0X10 # testq %r10, (%r8)")
#define TEST_R10_TO_PTR_R9 CMT_ASM(".byte 0X4D, 0X85, 0X11 # testq %r10, (%r9)")
#define TEST_R10_TO_PTR_R10 CMT_ASM(".byte 0X4D, 0X85, 0X12 # testq %r10, (%r10)")
#define TEST_R10_TO_PTR_R11 CMT_ASM(".byte 0X4D, 0X85, 0X13 # testq %r10, (%r11)")
#define TEST_R10_TO_PTR_R12 CMT_ASM(".byte 0X4D, 0X85, 0X14, 0X24 # testq %r10, (%r12)")
#define TEST_R10_TO_PTR_R13 CMT_ASM(".byte 0X4D, 0X85, 0X55, 0X00 # testq %r10, (%r13)")
#define TEST_R10_TO_PTR_R14 CMT_ASM(".byte 0X4D, 0X85, 0X16 # testq %r10, (%r14)")
#define TEST_R10_TO_PTR_R15 CMT_ASM(".byte 0X4D, 0X85, 0X17 # testq %r10, (%r15)")
#define TEST_R10_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X10 # testq %r10, (%eax)")
#define TEST_R10_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X13 # testq %r10, (%ebx)")
#define TEST_R10_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X11 # testq %r10, (%ecx)")
#define TEST_R10_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X12 # testq %r10, (%edx)")
#define TEST_R10_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X17 # testq %r10, (%edi)")
#define TEST_R10_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X16 # testq %r10, (%esi)")
#define TEST_R10_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X55, 0X00 # testq %r10, (%ebp)")
#define TEST_R10_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X14, 0X24 # testq %r10, (%esp)")

#define TEST_R11_TO_PTR_RAX CMT_ASM(".byte 0X4C, 0X85, 0X18 # testq %r11, (%rax)")
#define TEST_R11_TO_PTR_RBX CMT_ASM(".byte 0X4C, 0X85, 0X1B # testq %r11, (%rbx)")
#define TEST_R11_TO_PTR_RCX CMT_ASM(".byte 0X4C, 0X85, 0X19 # testq %r11, (%rcx)")
#define TEST_R11_TO_PTR_RDX CMT_ASM(".byte 0X4C, 0X85, 0X1A # testq %r11, (%rdx)")
#define TEST_R11_TO_PTR_RDI CMT_ASM(".byte 0X4C, 0X85, 0X1F # testq %r11, (%rdi)")
#define TEST_R11_TO_PTR_RSI CMT_ASM(".byte 0X4C, 0X85, 0X1E # testq %r11, (%rsi)")
#define TEST_R11_TO_PTR_RBP CMT_ASM(".byte 0X4C, 0X85, 0X5D, 0X00 # testq %r11, (%rbp)")
#define TEST_R11_TO_PTR_RSP CMT_ASM(".byte 0X4C, 0X85, 0X1C, 0X24 # testq %r11, (%rsp)")
#define TEST_R11_TO_PTR_R8 CMT_ASM(".byte 0X4D, 0X85, 0X18 # testq %r11, (%r8)")
#define TEST_R11_TO_PTR_R9 CMT_ASM(".byte 0X4D, 0X85, 0X19 # testq %r11, (%r9)")
#define TEST_R11_TO_PTR_R10 CMT_ASM(".byte 0X4D, 0X85, 0X1A # testq %r11, (%r10)")
#define TEST_R11_TO_PTR_R11 CMT_ASM(".byte 0X4D, 0X85, 0X1B # testq %r11, (%r11)")
#define TEST_R11_TO_PTR_R12 CMT_ASM(".byte 0X4D, 0X85, 0X1C, 0X24 # testq %r11, (%r12)")
#define TEST_R11_TO_PTR_R13 CMT_ASM(".byte 0X4D, 0X85, 0X5D, 0X00 # testq %r11, (%r13)")
#define TEST_R11_TO_PTR_R14 CMT_ASM(".byte 0X4D, 0X85, 0X1E # testq %r11, (%r14)")
#define TEST_R11_TO_PTR_R15 CMT_ASM(".byte 0X4D, 0X85, 0X1F # testq %r11, (%r15)")
#define TEST_R11_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X18 # testq %r11, (%eax)")
#define TEST_R11_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X1B # testq %r11, (%ebx)")
#define TEST_R11_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X19 # testq %r11, (%ecx)")
#define TEST_R11_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X1A # testq %r11, (%edx)")
#define TEST_R11_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X1F # testq %r11, (%edi)")
#define TEST_R11_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X1E # testq %r11, (%esi)")
#define TEST_R11_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X5D, 0X00 # testq %r11, (%ebp)")
#define TEST_R11_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X1C, 0X24 # testq %r11, (%esp)")

#define TEST_R12_TO_PTR_RAX CMT_ASM(".byte 0X4C, 0X85, 0X20 # testq %r12, (%rax)")
#define TEST_R12_TO_PTR_RBX CMT_ASM(".byte 0X4C, 0X85, 0X23 # testq %r12, (%rbx)")
#define TEST_R12_TO_PTR_RCX CMT_ASM(".byte 0X4C, 0X85, 0X21 # testq %r12, (%rcx)")
#define TEST_R12_TO_PTR_RDX CMT_ASM(".byte 0X4C, 0X85, 0X22 # testq %r12, (%rdx)")
#define TEST_R12_TO_PTR_RDI CMT_ASM(".byte 0X4C, 0X85, 0X27 # testq %r12, (%rdi)")
#define TEST_R12_TO_PTR_RSI CMT_ASM(".byte 0X4C, 0X85, 0X26 # testq %r12, (%rsi)")
#define TEST_R12_TO_PTR_RBP CMT_ASM(".byte 0X4C, 0X85, 0X65, 0X00 # testq %r12, (%rbp)")
#define TEST_R12_TO_PTR_RSP CMT_ASM(".byte 0X4C, 0X85, 0X24, 0X24 # testq %r12, (%rsp)")
#define TEST_R12_TO_PTR_R8 CMT_ASM(".byte 0X4D, 0X85, 0X20 # testq %r12, (%r8)")
#define TEST_R12_TO_PTR_R9 CMT_ASM(".byte 0X4D, 0X85, 0X21 # testq %r12, (%r9)")
#define TEST_R12_TO_PTR_R10 CMT_ASM(".byte 0X4D, 0X85, 0X22 # testq %r12, (%r10)")
#define TEST_R12_TO_PTR_R11 CMT_ASM(".byte 0X4D, 0X85, 0X23 # testq %r12, (%r11)")
#define TEST_R12_TO_PTR_R12 CMT_ASM(".byte 0X4D, 0X85, 0X24, 0X24 # testq %r12, (%r12)")
#define TEST_R12_TO_PTR_R13 CMT_ASM(".byte 0X4D, 0X85, 0X65, 0X00 # testq %r12, (%r13)")
#define TEST_R12_TO_PTR_R14 CMT_ASM(".byte 0X4D, 0X85, 0X26 # testq %r12, (%r14)")
#define TEST_R12_TO_PTR_R15 CMT_ASM(".byte 0X4D, 0X85, 0X27 # testq %r12, (%r15)")
#define TEST_R12_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X20 # testq %r12, (%eax)")
#define TEST_R12_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X23 # testq %r12, (%ebx)")
#define TEST_R12_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X21 # testq %r12, (%ecx)")
#define TEST_R12_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X22 # testq %r12, (%edx)")
#define TEST_R12_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X27 # testq %r12, (%edi)")
#define TEST_R12_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X26 # testq %r12, (%esi)")
#define TEST_R12_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X65, 0X00 # testq %r12, (%ebp)")
#define TEST_R12_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X24, 0X24 # testq %r12, (%esp)")

#define TEST_R13_TO_PTR_RAX CMT_ASM(".byte 0X4C, 0X85, 0X28 # testq %r13, (%rax)")
#define TEST_R13_TO_PTR_RBX CMT_ASM(".byte 0X4C, 0X85, 0X2B # testq %r13, (%rbx)")
#define TEST_R13_TO_PTR_RCX CMT_ASM(".byte 0X4C, 0X85, 0X29 # testq %r13, (%rcx)")
#define TEST_R13_TO_PTR_RDX CMT_ASM(".byte 0X4C, 0X85, 0X2A # testq %r13, (%rdx)")
#define TEST_R13_TO_PTR_RDI CMT_ASM(".byte 0X4C, 0X85, 0X2F # testq %r13, (%rdi)")
#define TEST_R13_TO_PTR_RSI CMT_ASM(".byte 0X4C, 0X85, 0X2E # testq %r13, (%rsi)")
#define TEST_R13_TO_PTR_RBP CMT_ASM(".byte 0X4C, 0X85, 0X6D, 0X00 # testq %r13, (%rbp)")
#define TEST_R13_TO_PTR_RSP CMT_ASM(".byte 0X4C, 0X85, 0X2C, 0X24 # testq %r13, (%rsp)")
#define TEST_R13_TO_PTR_R8 CMT_ASM(".byte 0X4D, 0X85, 0X28 # testq %r13, (%r8)")
#define TEST_R13_TO_PTR_R9 CMT_ASM(".byte 0X4D, 0X85, 0X29 # testq %r13, (%r9)")
#define TEST_R13_TO_PTR_R10 CMT_ASM(".byte 0X4D, 0X85, 0X2A # testq %r13, (%r10)")
#define TEST_R13_TO_PTR_R11 CMT_ASM(".byte 0X4D, 0X85, 0X2B # testq %r13, (%r11)")
#define TEST_R13_TO_PTR_R12 CMT_ASM(".byte 0X4D, 0X85, 0X2C, 0X24 # testq %r13, (%r12)")
#define TEST_R13_TO_PTR_R13 CMT_ASM(".byte 0X4D, 0X85, 0X6D, 0X00 # testq %r13, (%r13)")
#define TEST_R13_TO_PTR_R14 CMT_ASM(".byte 0X4D, 0X85, 0X2E # testq %r13, (%r14)")
#define TEST_R13_TO_PTR_R15 CMT_ASM(".byte 0X4D, 0X85, 0X2F # testq %r13, (%r15)")
#define TEST_R13_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X28 # testq %r13, (%eax)")
#define TEST_R13_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X2B # testq %r13, (%ebx)")
#define TEST_R13_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X29 # testq %r13, (%ecx)")
#define TEST_R13_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X2A # testq %r13, (%edx)")
#define TEST_R13_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X2F # testq %r13, (%edi)")
#define TEST_R13_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X2E # testq %r13, (%esi)")
#define TEST_R13_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X6D, 0X00 # testq %r13, (%ebp)")
#define TEST_R13_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X2C, 0X24 # testq %r13, (%esp)")

#define TEST_R14_TO_PTR_RAX CMT_ASM(".byte 0X4C, 0X85, 0X30 # testq %r14, (%rax)")
#define TEST_R14_TO_PTR_RBX CMT_ASM(".byte 0X4C, 0X85, 0X33 # testq %r14, (%rbx)")
#define TEST_R14_TO_PTR_RCX CMT_ASM(".byte 0X4C, 0X85, 0X31 # testq %r14, (%rcx)")
#define TEST_R14_TO_PTR_RDX CMT_ASM(".byte 0X4C, 0X85, 0X32 # testq %r14, (%rdx)")
#define TEST_R14_TO_PTR_RDI CMT_ASM(".byte 0X4C, 0X85, 0X37 # testq %r14, (%rdi)")
#define TEST_R14_TO_PTR_RSI CMT_ASM(".byte 0X4C, 0X85, 0X36 # testq %r14, (%rsi)")
#define TEST_R14_TO_PTR_RBP CMT_ASM(".byte 0X4C, 0X85, 0X75, 0X00 # testq %r14, (%rbp)")
#define TEST_R14_TO_PTR_RSP CMT_ASM(".byte 0X4C, 0X85, 0X34, 0X24 # testq %r14, (%rsp)")
#define TEST_R14_TO_PTR_R8 CMT_ASM(".byte 0X4D, 0X85, 0X30 # testq %r14, (%r8)")
#define TEST_R14_TO_PTR_R9 CMT_ASM(".byte 0X4D, 0X85, 0X31 # testq %r14, (%r9)")
#define TEST_R14_TO_PTR_R10 CMT_ASM(".byte 0X4D, 0X85, 0X32 # testq %r14, (%r10)")
#define TEST_R14_TO_PTR_R11 CMT_ASM(".byte 0X4D, 0X85, 0X33 # testq %r14, (%r11)")
#define TEST_R14_TO_PTR_R12 CMT_ASM(".byte 0X4D, 0X85, 0X34, 0X24 # testq %r14, (%r12)")
#define TEST_R14_TO_PTR_R13 CMT_ASM(".byte 0X4D, 0X85, 0X75, 0X00 # testq %r14, (%r13)")
#define TEST_R14_TO_PTR_R14 CMT_ASM(".byte 0X4D, 0X85, 0X36 # testq %r14, (%r14)")
#define TEST_R14_TO_PTR_R15 CMT_ASM(".byte 0X4D, 0X85, 0X37 # testq %r14, (%r15)")
#define TEST_R14_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X30 # testq %r14, (%eax)")
#define TEST_R14_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X33 # testq %r14, (%ebx)")
#define TEST_R14_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X31 # testq %r14, (%ecx)")
#define TEST_R14_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X32 # testq %r14, (%edx)")
#define TEST_R14_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X37 # testq %r14, (%edi)")
#define TEST_R14_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X36 # testq %r14, (%esi)")
#define TEST_R14_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X75, 0X00 # testq %r14, (%ebp)")
#define TEST_R14_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X34, 0X24 # testq %r14, (%esp)")

#define TEST_R15_TO_PTR_RAX CMT_ASM(".byte 0X4C, 0X85, 0X38 # testq %r15, (%rax)")
#define TEST_R15_TO_PTR_RBX CMT_ASM(".byte 0X4C, 0X85, 0X3B # testq %r15, (%rbx)")
#define TEST_R15_TO_PTR_RCX CMT_ASM(".byte 0X4C, 0X85, 0X39 # testq %r15, (%rcx)")
#define TEST_R15_TO_PTR_RDX CMT_ASM(".byte 0X4C, 0X85, 0X3A # testq %r15, (%rdx)")
#define TEST_R15_TO_PTR_RDI CMT_ASM(".byte 0X4C, 0X85, 0X3F # testq %r15, (%rdi)")
#define TEST_R15_TO_PTR_RSI CMT_ASM(".byte 0X4C, 0X85, 0X3E # testq %r15, (%rsi)")
#define TEST_R15_TO_PTR_RBP CMT_ASM(".byte 0X4C, 0X85, 0X7D, 0X00 # testq %r15, (%rbp)")
#define TEST_R15_TO_PTR_RSP CMT_ASM(".byte 0X4C, 0X85, 0X3C, 0X24 # testq %r15, (%rsp)")
#define TEST_R15_TO_PTR_R8 CMT_ASM(".byte 0X4D, 0X85, 0X38 # testq %r15, (%r8)")
#define TEST_R15_TO_PTR_R9 CMT_ASM(".byte 0X4D, 0X85, 0X39 # testq %r15, (%r9)")
#define TEST_R15_TO_PTR_R10 CMT_ASM(".byte 0X4D, 0X85, 0X3A # testq %r15, (%r10)")
#define TEST_R15_TO_PTR_R11 CMT_ASM(".byte 0X4D, 0X85, 0X3B # testq %r15, (%r11)")
#define TEST_R15_TO_PTR_R12 CMT_ASM(".byte 0X4D, 0X85, 0X3C, 0X24 # testq %r15, (%r12)")
#define TEST_R15_TO_PTR_R13 CMT_ASM(".byte 0X4D, 0X85, 0X7D, 0X00 # testq %r15, (%r13)")
#define TEST_R15_TO_PTR_R14 CMT_ASM(".byte 0X4D, 0X85, 0X3E # testq %r15, (%r14)")
#define TEST_R15_TO_PTR_R15 CMT_ASM(".byte 0X4D, 0X85, 0X3F # testq %r15, (%r15)")
#define TEST_R15_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X38 # testq %r15, (%eax)")
#define TEST_R15_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X3B # testq %r15, (%ebx)")
#define TEST_R15_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X39 # testq %r15, (%ecx)")
#define TEST_R15_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X3A # testq %r15, (%edx)")
#define TEST_R15_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X3F # testq %r15, (%edi)")
#define TEST_R15_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X3E # testq %r15, (%esi)")
#define TEST_R15_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X7D, 0X00 # testq %r15, (%ebp)")
#define TEST_R15_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X3C, 0X24 # testq %r15, (%esp)")

#define TEST_RAX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0X80 # testq " _(VALUE) "(%rax), %rax")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RAX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0X83 # testq " _(VALUE) "(%rbx), %rax")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RAX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0X81 # testq " _(VALUE) "(%rcx), %rax")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RAX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0X82 # testq " _(VALUE) "(%rdx), %rax")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RAX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0X87 # testq " _(VALUE) "(%rdi), %rax")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RAX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0X86 # testq " _(VALUE) "(%rsi), %rax")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RAX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0X85 # testq " _(VALUE) "(%rbp), %rax")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RAX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0X84, 0X24 # testq " _(VALUE) "(%rsp), %rax")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RAX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0X80 # testq " _(VALUE) "(%r8), %rax")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RAX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0X81 # testq " _(VALUE) "(%r9), %rax")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RAX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0X82 # testq " _(VALUE) "(%r10), %rax")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RAX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0X83 # testq " _(VALUE) "(%r11), %rax")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RAX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0X84, 0X24 # testq " _(VALUE) "(%r12), %rax")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RAX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0X85 # testq " _(VALUE) "(%r13), %rax")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RAX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0X86 # testq " _(VALUE) "(%r14), %rax")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RAX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0X87 # testq " _(VALUE) "(%r15), %rax")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RAX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0X80 # testq " _(VALUE) "(%eax), %rax")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RAX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0X83 # testq " _(VALUE) "(%ebx), %rax")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RAX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0X81 # testq " _(VALUE) "(%ecx), %rax")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RAX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0X82 # testq " _(VALUE) "(%edx), %rax")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RAX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0X87 # testq " _(VALUE) "(%edi), %rax")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RAX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0X86 # testq " _(VALUE) "(%esi), %rax")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RAX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0X85 # testq " _(VALUE) "(%ebp), %rax")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RAX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0X84, 0X24 # testq " _(VALUE) "(%esp), %rax")\
	CMT_ASM(".long " _(VALUE))

#define TEST_RBX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0X98 # testq " _(VALUE) "(%rax), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RBX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0X9B # testq " _(VALUE) "(%rbx), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RBX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0X99 # testq " _(VALUE) "(%rcx), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RBX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0X9A # testq " _(VALUE) "(%rdx), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RBX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0X9F # testq " _(VALUE) "(%rdi), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RBX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0X9E # testq " _(VALUE) "(%rsi), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RBX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0X9D # testq " _(VALUE) "(%rbp), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RBX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0X9C, 0X24 # testq " _(VALUE) "(%rsp), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RBX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0X98 # testq " _(VALUE) "(%r8), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RBX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0X99 # testq " _(VALUE) "(%r9), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RBX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0X9A # testq " _(VALUE) "(%r10), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RBX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0X9B # testq " _(VALUE) "(%r11), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RBX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0X9C, 0X24 # testq " _(VALUE) "(%r12), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RBX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0X9D # testq " _(VALUE) "(%r13), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RBX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0X9E # testq " _(VALUE) "(%r14), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RBX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0X9F # testq " _(VALUE) "(%r15), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RBX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0X98 # testq " _(VALUE) "(%eax), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RBX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0X9B # testq " _(VALUE) "(%ebx), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RBX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0X99 # testq " _(VALUE) "(%ecx), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RBX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0X9A # testq " _(VALUE) "(%edx), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RBX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0X9F # testq " _(VALUE) "(%edi), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RBX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0X9E # testq " _(VALUE) "(%esi), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RBX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0X9D # testq " _(VALUE) "(%ebp), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RBX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0X9C, 0X24 # testq " _(VALUE) "(%esp), %rbx")\
	CMT_ASM(".long " _(VALUE))

#define TEST_RCX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0X88 # testq " _(VALUE) "(%rax), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RCX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0X8B # testq " _(VALUE) "(%rbx), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RCX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0X89 # testq " _(VALUE) "(%rcx), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RCX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0X8A # testq " _(VALUE) "(%rdx), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RCX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0X8F # testq " _(VALUE) "(%rdi), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RCX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0X8E # testq " _(VALUE) "(%rsi), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RCX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0X8D # testq " _(VALUE) "(%rbp), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RCX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0X8C, 0X24 # testq " _(VALUE) "(%rsp), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RCX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0X88 # testq " _(VALUE) "(%r8), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RCX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0X89 # testq " _(VALUE) "(%r9), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RCX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0X8A # testq " _(VALUE) "(%r10), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RCX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0X8B # testq " _(VALUE) "(%r11), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RCX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0X8C, 0X24 # testq " _(VALUE) "(%r12), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RCX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0X8D # testq " _(VALUE) "(%r13), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RCX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0X8E # testq " _(VALUE) "(%r14), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RCX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0X8F # testq " _(VALUE) "(%r15), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RCX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0X88 # testq " _(VALUE) "(%eax), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RCX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0X8B # testq " _(VALUE) "(%ebx), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RCX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0X89 # testq " _(VALUE) "(%ecx), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RCX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0X8A # testq " _(VALUE) "(%edx), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RCX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0X8F # testq " _(VALUE) "(%edi), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RCX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0X8E # testq " _(VALUE) "(%esi), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RCX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0X8D # testq " _(VALUE) "(%ebp), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RCX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0X8C, 0X24 # testq " _(VALUE) "(%esp), %rcx")\
	CMT_ASM(".long " _(VALUE))

#define TEST_RDX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0X90 # testq " _(VALUE) "(%rax), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RDX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0X93 # testq " _(VALUE) "(%rbx), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RDX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0X91 # testq " _(VALUE) "(%rcx), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RDX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0X92 # testq " _(VALUE) "(%rdx), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RDX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0X97 # testq " _(VALUE) "(%rdi), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RDX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0X96 # testq " _(VALUE) "(%rsi), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RDX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0X95 # testq " _(VALUE) "(%rbp), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RDX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0X94, 0X24 # testq " _(VALUE) "(%rsp), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RDX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0X90 # testq " _(VALUE) "(%r8), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RDX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0X91 # testq " _(VALUE) "(%r9), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RDX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0X92 # testq " _(VALUE) "(%r10), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RDX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0X93 # testq " _(VALUE) "(%r11), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RDX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0X94, 0X24 # testq " _(VALUE) "(%r12), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RDX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0X95 # testq " _(VALUE) "(%r13), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RDX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0X96 # testq " _(VALUE) "(%r14), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RDX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0X97 # testq " _(VALUE) "(%r15), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RDX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0X90 # testq " _(VALUE) "(%eax), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RDX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0X93 # testq " _(VALUE) "(%ebx), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RDX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0X91 # testq " _(VALUE) "(%ecx), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RDX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0X92 # testq " _(VALUE) "(%edx), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RDX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0X97 # testq " _(VALUE) "(%edi), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RDX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0X96 # testq " _(VALUE) "(%esi), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RDX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0X95 # testq " _(VALUE) "(%ebp), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RDX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0X94, 0X24 # testq " _(VALUE) "(%esp), %rdx")\
	CMT_ASM(".long " _(VALUE))

#define TEST_RDI_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0XB8 # testq " _(VALUE) "(%rax), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RDI_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0XBB # testq " _(VALUE) "(%rbx), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RDI_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0XB9 # testq " _(VALUE) "(%rcx), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RDI_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0XBA # testq " _(VALUE) "(%rdx), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RDI_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0XBF # testq " _(VALUE) "(%rdi), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RDI_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0XBE # testq " _(VALUE) "(%rsi), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RDI_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0XBD # testq " _(VALUE) "(%rbp), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RDI_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0XBC, 0X24 # testq " _(VALUE) "(%rsp), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RDI_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0XB8 # testq " _(VALUE) "(%r8), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RDI_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0XB9 # testq " _(VALUE) "(%r9), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RDI_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0XBA # testq " _(VALUE) "(%r10), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RDI_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0XBB # testq " _(VALUE) "(%r11), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RDI_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0XBC, 0X24 # testq " _(VALUE) "(%r12), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RDI_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0XBD # testq " _(VALUE) "(%r13), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RDI_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0XBE # testq " _(VALUE) "(%r14), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RDI_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0XBF # testq " _(VALUE) "(%r15), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RDI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0XB8 # testq " _(VALUE) "(%eax), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RDI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0XBB # testq " _(VALUE) "(%ebx), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RDI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0XB9 # testq " _(VALUE) "(%ecx), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RDI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0XBA # testq " _(VALUE) "(%edx), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RDI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0XBF # testq " _(VALUE) "(%edi), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RDI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0XBE # testq " _(VALUE) "(%esi), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RDI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0XBD # testq " _(VALUE) "(%ebp), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RDI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0XBC, 0X24 # testq " _(VALUE) "(%esp), %rdi")\
	CMT_ASM(".long " _(VALUE))

#define TEST_RSI_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0XB0 # testq " _(VALUE) "(%rax), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RSI_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0XB3 # testq " _(VALUE) "(%rbx), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RSI_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0XB1 # testq " _(VALUE) "(%rcx), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RSI_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0XB2 # testq " _(VALUE) "(%rdx), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RSI_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0XB7 # testq " _(VALUE) "(%rdi), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RSI_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0XB6 # testq " _(VALUE) "(%rsi), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RSI_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0XB5 # testq " _(VALUE) "(%rbp), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RSI_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0XB4, 0X24 # testq " _(VALUE) "(%rsp), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RSI_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0XB0 # testq " _(VALUE) "(%r8), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RSI_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0XB1 # testq " _(VALUE) "(%r9), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RSI_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0XB2 # testq " _(VALUE) "(%r10), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RSI_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0XB3 # testq " _(VALUE) "(%r11), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RSI_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0XB4, 0X24 # testq " _(VALUE) "(%r12), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RSI_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0XB5 # testq " _(VALUE) "(%r13), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RSI_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0XB6 # testq " _(VALUE) "(%r14), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RSI_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0XB7 # testq " _(VALUE) "(%r15), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RSI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0XB0 # testq " _(VALUE) "(%eax), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RSI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0XB3 # testq " _(VALUE) "(%ebx), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RSI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0XB1 # testq " _(VALUE) "(%ecx), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RSI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0XB2 # testq " _(VALUE) "(%edx), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RSI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0XB7 # testq " _(VALUE) "(%edi), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RSI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0XB6 # testq " _(VALUE) "(%esi), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RSI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0XB5 # testq " _(VALUE) "(%ebp), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RSI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0XB4, 0X24 # testq " _(VALUE) "(%esp), %rsi")\
	CMT_ASM(".long " _(VALUE))

#define TEST_RBP_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0XA8 # testq " _(VALUE) "(%rax), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RBP_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0XAB # testq " _(VALUE) "(%rbx), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RBP_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0XA9 # testq " _(VALUE) "(%rcx), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RBP_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0XAA # testq " _(VALUE) "(%rdx), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RBP_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0XAF # testq " _(VALUE) "(%rdi), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RBP_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0XAE # testq " _(VALUE) "(%rsi), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RBP_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0XAD # testq " _(VALUE) "(%rbp), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RBP_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0XAC, 0X24 # testq " _(VALUE) "(%rsp), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RBP_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0XA8 # testq " _(VALUE) "(%r8), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RBP_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0XA9 # testq " _(VALUE) "(%r9), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RBP_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0XAA # testq " _(VALUE) "(%r10), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RBP_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0XAB # testq " _(VALUE) "(%r11), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RBP_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0XAC, 0X24 # testq " _(VALUE) "(%r12), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RBP_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0XAD # testq " _(VALUE) "(%r13), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RBP_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0XAE # testq " _(VALUE) "(%r14), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RBP_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0XAF # testq " _(VALUE) "(%r15), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RBP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0XA8 # testq " _(VALUE) "(%eax), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RBP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0XAB # testq " _(VALUE) "(%ebx), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RBP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0XA9 # testq " _(VALUE) "(%ecx), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RBP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0XAA # testq " _(VALUE) "(%edx), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RBP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0XAF # testq " _(VALUE) "(%edi), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RBP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0XAE # testq " _(VALUE) "(%esi), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RBP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0XAD # testq " _(VALUE) "(%ebp), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RBP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0XAC, 0X24 # testq " _(VALUE) "(%esp), %rbp")\
	CMT_ASM(".long " _(VALUE))

#define TEST_RSP_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0XA0 # testq " _(VALUE) "(%rax), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RSP_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0XA3 # testq " _(VALUE) "(%rbx), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RSP_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0XA1 # testq " _(VALUE) "(%rcx), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RSP_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0XA2 # testq " _(VALUE) "(%rdx), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RSP_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0XA7 # testq " _(VALUE) "(%rdi), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RSP_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0XA6 # testq " _(VALUE) "(%rsi), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RSP_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0XA5 # testq " _(VALUE) "(%rbp), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RSP_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0XA4, 0X24 # testq " _(VALUE) "(%rsp), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RSP_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0XA0 # testq " _(VALUE) "(%r8), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RSP_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0XA1 # testq " _(VALUE) "(%r9), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RSP_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0XA2 # testq " _(VALUE) "(%r10), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RSP_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0XA3 # testq " _(VALUE) "(%r11), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RSP_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0XA4, 0X24 # testq " _(VALUE) "(%r12), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RSP_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0XA5 # testq " _(VALUE) "(%r13), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RSP_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0XA6 # testq " _(VALUE) "(%r14), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RSP_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0XA7 # testq " _(VALUE) "(%r15), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RSP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0XA0 # testq " _(VALUE) "(%eax), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RSP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0XA3 # testq " _(VALUE) "(%ebx), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RSP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0XA1 # testq " _(VALUE) "(%ecx), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RSP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0XA2 # testq " _(VALUE) "(%edx), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RSP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0XA7 # testq " _(VALUE) "(%edi), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RSP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0XA6 # testq " _(VALUE) "(%esi), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RSP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0XA5 # testq " _(VALUE) "(%ebp), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RSP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0XA4, 0X24 # testq " _(VALUE) "(%esp), %rsp")\
	CMT_ASM(".long " _(VALUE))

#define TEST_R8_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0X80 # testq " _(VALUE) "(%rax), %r8")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0X83 # testq " _(VALUE) "(%rbx), %r8")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0X81 # testq " _(VALUE) "(%rcx), %r8")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0X82 # testq " _(VALUE) "(%rdx), %r8")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0X87 # testq " _(VALUE) "(%rdi), %r8")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0X86 # testq " _(VALUE) "(%rsi), %r8")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0X85 # testq " _(VALUE) "(%rbp), %r8")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0X84, 0X24 # testq " _(VALUE) "(%rsp), %r8")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0X80 # testq " _(VALUE) "(%r8), %r8")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0X81 # testq " _(VALUE) "(%r9), %r8")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0X82 # testq " _(VALUE) "(%r10), %r8")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0X83 # testq " _(VALUE) "(%r11), %r8")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0X84, 0X24 # testq " _(VALUE) "(%r12), %r8")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0X85 # testq " _(VALUE) "(%r13), %r8")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0X86 # testq " _(VALUE) "(%r14), %r8")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0X87 # testq " _(VALUE) "(%r15), %r8")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X80 # testq " _(VALUE) "(%eax), %r8")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X83 # testq " _(VALUE) "(%ebx), %r8")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X81 # testq " _(VALUE) "(%ecx), %r8")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X82 # testq " _(VALUE) "(%edx), %r8")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X87 # testq " _(VALUE) "(%edi), %r8")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X86 # testq " _(VALUE) "(%esi), %r8")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X85 # testq " _(VALUE) "(%ebp), %r8")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X84, 0X24 # testq " _(VALUE) "(%esp), %r8")\
	CMT_ASM(".long " _(VALUE))

#define TEST_R9_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0X88 # testq " _(VALUE) "(%rax), %r9")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0X8B # testq " _(VALUE) "(%rbx), %r9")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0X89 # testq " _(VALUE) "(%rcx), %r9")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0X8A # testq " _(VALUE) "(%rdx), %r9")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0X8F # testq " _(VALUE) "(%rdi), %r9")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0X8E # testq " _(VALUE) "(%rsi), %r9")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0X8D # testq " _(VALUE) "(%rbp), %r9")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0X8C, 0X24 # testq " _(VALUE) "(%rsp), %r9")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0X88 # testq " _(VALUE) "(%r8), %r9")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0X89 # testq " _(VALUE) "(%r9), %r9")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0X8A # testq " _(VALUE) "(%r10), %r9")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0X8B # testq " _(VALUE) "(%r11), %r9")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0X8C, 0X24 # testq " _(VALUE) "(%r12), %r9")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0X8D # testq " _(VALUE) "(%r13), %r9")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0X8E # testq " _(VALUE) "(%r14), %r9")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0X8F # testq " _(VALUE) "(%r15), %r9")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X88 # testq " _(VALUE) "(%eax), %r9")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X8B # testq " _(VALUE) "(%ebx), %r9")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X89 # testq " _(VALUE) "(%ecx), %r9")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X8A # testq " _(VALUE) "(%edx), %r9")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X8F # testq " _(VALUE) "(%edi), %r9")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X8E # testq " _(VALUE) "(%esi), %r9")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X8D # testq " _(VALUE) "(%ebp), %r9")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X8C, 0X24 # testq " _(VALUE) "(%esp), %r9")\
	CMT_ASM(".long " _(VALUE))

#define TEST_R10_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0X90 # testq " _(VALUE) "(%rax), %r10")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0X93 # testq " _(VALUE) "(%rbx), %r10")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0X91 # testq " _(VALUE) "(%rcx), %r10")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0X92 # testq " _(VALUE) "(%rdx), %r10")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0X97 # testq " _(VALUE) "(%rdi), %r10")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0X96 # testq " _(VALUE) "(%rsi), %r10")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0X95 # testq " _(VALUE) "(%rbp), %r10")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0X94, 0X24 # testq " _(VALUE) "(%rsp), %r10")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0X90 # testq " _(VALUE) "(%r8), %r10")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0X91 # testq " _(VALUE) "(%r9), %r10")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0X92 # testq " _(VALUE) "(%r10), %r10")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0X93 # testq " _(VALUE) "(%r11), %r10")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0X94, 0X24 # testq " _(VALUE) "(%r12), %r10")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0X95 # testq " _(VALUE) "(%r13), %r10")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0X96 # testq " _(VALUE) "(%r14), %r10")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0X97 # testq " _(VALUE) "(%r15), %r10")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X90 # testq " _(VALUE) "(%eax), %r10")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X93 # testq " _(VALUE) "(%ebx), %r10")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X91 # testq " _(VALUE) "(%ecx), %r10")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X92 # testq " _(VALUE) "(%edx), %r10")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X97 # testq " _(VALUE) "(%edi), %r10")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X96 # testq " _(VALUE) "(%esi), %r10")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X95 # testq " _(VALUE) "(%ebp), %r10")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X94, 0X24 # testq " _(VALUE) "(%esp), %r10")\
	CMT_ASM(".long " _(VALUE))

#define TEST_R11_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0X98 # testq " _(VALUE) "(%rax), %r11")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0X9B # testq " _(VALUE) "(%rbx), %r11")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0X99 # testq " _(VALUE) "(%rcx), %r11")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0X9A # testq " _(VALUE) "(%rdx), %r11")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0X9F # testq " _(VALUE) "(%rdi), %r11")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0X9E # testq " _(VALUE) "(%rsi), %r11")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0X9D # testq " _(VALUE) "(%rbp), %r11")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0X9C, 0X24 # testq " _(VALUE) "(%rsp), %r11")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0X98 # testq " _(VALUE) "(%r8), %r11")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0X99 # testq " _(VALUE) "(%r9), %r11")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0X9A # testq " _(VALUE) "(%r10), %r11")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0X9B # testq " _(VALUE) "(%r11), %r11")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0X9C, 0X24 # testq " _(VALUE) "(%r12), %r11")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0X9D # testq " _(VALUE) "(%r13), %r11")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0X9E # testq " _(VALUE) "(%r14), %r11")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0X9F # testq " _(VALUE) "(%r15), %r11")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X98 # testq " _(VALUE) "(%eax), %r11")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X9B # testq " _(VALUE) "(%ebx), %r11")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X99 # testq " _(VALUE) "(%ecx), %r11")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X9A # testq " _(VALUE) "(%edx), %r11")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X9F # testq " _(VALUE) "(%edi), %r11")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X9E # testq " _(VALUE) "(%esi), %r11")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X9D # testq " _(VALUE) "(%ebp), %r11")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X9C, 0X24 # testq " _(VALUE) "(%esp), %r11")\
	CMT_ASM(".long " _(VALUE))

#define TEST_R12_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0XA0 # testq " _(VALUE) "(%rax), %r12")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0XA3 # testq " _(VALUE) "(%rbx), %r12")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0XA1 # testq " _(VALUE) "(%rcx), %r12")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0XA2 # testq " _(VALUE) "(%rdx), %r12")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0XA7 # testq " _(VALUE) "(%rdi), %r12")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0XA6 # testq " _(VALUE) "(%rsi), %r12")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0XA5 # testq " _(VALUE) "(%rbp), %r12")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0XA4, 0X24 # testq " _(VALUE) "(%rsp), %r12")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0XA0 # testq " _(VALUE) "(%r8), %r12")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0XA1 # testq " _(VALUE) "(%r9), %r12")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0XA2 # testq " _(VALUE) "(%r10), %r12")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0XA3 # testq " _(VALUE) "(%r11), %r12")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0XA4, 0X24 # testq " _(VALUE) "(%r12), %r12")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0XA5 # testq " _(VALUE) "(%r13), %r12")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0XA6 # testq " _(VALUE) "(%r14), %r12")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0XA7 # testq " _(VALUE) "(%r15), %r12")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0XA0 # testq " _(VALUE) "(%eax), %r12")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0XA3 # testq " _(VALUE) "(%ebx), %r12")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0XA1 # testq " _(VALUE) "(%ecx), %r12")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0XA2 # testq " _(VALUE) "(%edx), %r12")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0XA7 # testq " _(VALUE) "(%edi), %r12")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0XA6 # testq " _(VALUE) "(%esi), %r12")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0XA5 # testq " _(VALUE) "(%ebp), %r12")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0XA4, 0X24 # testq " _(VALUE) "(%esp), %r12")\
	CMT_ASM(".long " _(VALUE))

#define TEST_R13_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0XA8 # testq " _(VALUE) "(%rax), %r13")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0XAB # testq " _(VALUE) "(%rbx), %r13")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0XA9 # testq " _(VALUE) "(%rcx), %r13")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0XAA # testq " _(VALUE) "(%rdx), %r13")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0XAF # testq " _(VALUE) "(%rdi), %r13")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0XAE # testq " _(VALUE) "(%rsi), %r13")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0XAD # testq " _(VALUE) "(%rbp), %r13")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0XAC, 0X24 # testq " _(VALUE) "(%rsp), %r13")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0XA8 # testq " _(VALUE) "(%r8), %r13")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0XA9 # testq " _(VALUE) "(%r9), %r13")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0XAA # testq " _(VALUE) "(%r10), %r13")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0XAB # testq " _(VALUE) "(%r11), %r13")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0XAC, 0X24 # testq " _(VALUE) "(%r12), %r13")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0XAD # testq " _(VALUE) "(%r13), %r13")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0XAE # testq " _(VALUE) "(%r14), %r13")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0XAF # testq " _(VALUE) "(%r15), %r13")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0XA8 # testq " _(VALUE) "(%eax), %r13")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0XAB # testq " _(VALUE) "(%ebx), %r13")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0XA9 # testq " _(VALUE) "(%ecx), %r13")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0XAA # testq " _(VALUE) "(%edx), %r13")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0XAF # testq " _(VALUE) "(%edi), %r13")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0XAE # testq " _(VALUE) "(%esi), %r13")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0XAD # testq " _(VALUE) "(%ebp), %r13")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0XAC, 0X24 # testq " _(VALUE) "(%esp), %r13")\
	CMT_ASM(".long " _(VALUE))

#define TEST_R14_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0XB0 # testq " _(VALUE) "(%rax), %r14")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0XB3 # testq " _(VALUE) "(%rbx), %r14")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0XB1 # testq " _(VALUE) "(%rcx), %r14")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0XB2 # testq " _(VALUE) "(%rdx), %r14")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0XB7 # testq " _(VALUE) "(%rdi), %r14")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0XB6 # testq " _(VALUE) "(%rsi), %r14")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0XB5 # testq " _(VALUE) "(%rbp), %r14")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0XB4, 0X24 # testq " _(VALUE) "(%rsp), %r14")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0XB0 # testq " _(VALUE) "(%r8), %r14")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0XB1 # testq " _(VALUE) "(%r9), %r14")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0XB2 # testq " _(VALUE) "(%r10), %r14")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0XB3 # testq " _(VALUE) "(%r11), %r14")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0XB4, 0X24 # testq " _(VALUE) "(%r12), %r14")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0XB5 # testq " _(VALUE) "(%r13), %r14")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0XB6 # testq " _(VALUE) "(%r14), %r14")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0XB7 # testq " _(VALUE) "(%r15), %r14")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0XB0 # testq " _(VALUE) "(%eax), %r14")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0XB3 # testq " _(VALUE) "(%ebx), %r14")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0XB1 # testq " _(VALUE) "(%ecx), %r14")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0XB2 # testq " _(VALUE) "(%edx), %r14")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0XB7 # testq " _(VALUE) "(%edi), %r14")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0XB6 # testq " _(VALUE) "(%esi), %r14")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0XB5 # testq " _(VALUE) "(%ebp), %r14")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0XB4, 0X24 # testq " _(VALUE) "(%esp), %r14")\
	CMT_ASM(".long " _(VALUE))

#define TEST_R15_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0XB8 # testq " _(VALUE) "(%rax), %r15")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0XBB # testq " _(VALUE) "(%rbx), %r15")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0XB9 # testq " _(VALUE) "(%rcx), %r15")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0XBA # testq " _(VALUE) "(%rdx), %r15")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0XBF # testq " _(VALUE) "(%rdi), %r15")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0XBE # testq " _(VALUE) "(%rsi), %r15")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0XBD # testq " _(VALUE) "(%rbp), %r15")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0XBC, 0X24 # testq " _(VALUE) "(%rsp), %r15")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0XB8 # testq " _(VALUE) "(%r8), %r15")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0XB9 # testq " _(VALUE) "(%r9), %r15")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0XBA # testq " _(VALUE) "(%r10), %r15")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0XBB # testq " _(VALUE) "(%r11), %r15")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0XBC, 0X24 # testq " _(VALUE) "(%r12), %r15")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0XBD # testq " _(VALUE) "(%r13), %r15")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0XBE # testq " _(VALUE) "(%r14), %r15")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0XBF # testq " _(VALUE) "(%r15), %r15")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0XB8 # testq " _(VALUE) "(%eax), %r15")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0XBB # testq " _(VALUE) "(%ebx), %r15")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0XB9 # testq " _(VALUE) "(%ecx), %r15")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0XBA # testq " _(VALUE) "(%edx), %r15")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0XBF # testq " _(VALUE) "(%edi), %r15")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0XBE # testq " _(VALUE) "(%esi), %r15")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0XBD # testq " _(VALUE) "(%ebp), %r15")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0XBC, 0X24 # testq " _(VALUE) "(%esp), %r15")\
	CMT_ASM(".long " _(VALUE))

#define TEST_RAX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0X80 # testq %rax, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RAX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0X83 # testq %rax, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RAX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0X81 # testq %rax, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RAX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0X82 # testq %rax, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RAX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0X87 # testq %rax, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RAX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0X86 # testq %rax, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RAX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0X85 # testq %rax, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RAX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0X84, 0X24 # testq %rax, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RAX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0X80 # testq %rax, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RAX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0X81 # testq %rax, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RAX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0X82 # testq %rax, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RAX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0X83 # testq %rax, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RAX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0X84, 0X24 # testq %rax, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RAX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0X85 # testq %rax, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RAX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0X86 # testq %rax, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RAX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0X87 # testq %rax, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RAX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0X80 # testq %rax, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RAX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0X83 # testq %rax, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RAX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0X81 # testq %rax, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RAX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0X82 # testq %rax, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RAX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0X87 # testq %rax, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RAX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0X86 # testq %rax, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RAX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0X85 # testq %rax, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RAX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0X84, 0X24 # testq %rax, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define TEST_RBX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0X98 # testq %rbx, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RBX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0X9B # testq %rbx, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RBX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0X99 # testq %rbx, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RBX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0X9A # testq %rbx, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RBX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0X9F # testq %rbx, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RBX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0X9E # testq %rbx, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RBX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0X9D # testq %rbx, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RBX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0X9C, 0X24 # testq %rbx, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RBX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0X98 # testq %rbx, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RBX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0X99 # testq %rbx, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RBX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0X9A # testq %rbx, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RBX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0X9B # testq %rbx, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RBX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0X9C, 0X24 # testq %rbx, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RBX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0X9D # testq %rbx, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RBX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0X9E # testq %rbx, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RBX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0X9F # testq %rbx, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RBX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0X98 # testq %rbx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RBX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0X9B # testq %rbx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RBX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0X99 # testq %rbx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RBX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0X9A # testq %rbx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RBX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0X9F # testq %rbx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RBX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0X9E # testq %rbx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RBX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0X9D # testq %rbx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RBX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0X9C, 0X24 # testq %rbx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define TEST_RCX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0X88 # testq %rcx, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RCX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0X8B # testq %rcx, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RCX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0X89 # testq %rcx, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RCX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0X8A # testq %rcx, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RCX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0X8F # testq %rcx, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RCX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0X8E # testq %rcx, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RCX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0X8D # testq %rcx, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RCX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0X8C, 0X24 # testq %rcx, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RCX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0X88 # testq %rcx, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RCX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0X89 # testq %rcx, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RCX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0X8A # testq %rcx, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RCX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0X8B # testq %rcx, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RCX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0X8C, 0X24 # testq %rcx, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RCX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0X8D # testq %rcx, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RCX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0X8E # testq %rcx, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RCX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0X8F # testq %rcx, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RCX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0X88 # testq %rcx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RCX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0X8B # testq %rcx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RCX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0X89 # testq %rcx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RCX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0X8A # testq %rcx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RCX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0X8F # testq %rcx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RCX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0X8E # testq %rcx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RCX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0X8D # testq %rcx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RCX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0X8C, 0X24 # testq %rcx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define TEST_RDX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0X90 # testq %rdx, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RDX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0X93 # testq %rdx, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RDX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0X91 # testq %rdx, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RDX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0X92 # testq %rdx, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RDX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0X97 # testq %rdx, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RDX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0X96 # testq %rdx, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RDX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0X95 # testq %rdx, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RDX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0X94, 0X24 # testq %rdx, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RDX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0X90 # testq %rdx, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RDX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0X91 # testq %rdx, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RDX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0X92 # testq %rdx, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RDX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0X93 # testq %rdx, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RDX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0X94, 0X24 # testq %rdx, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RDX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0X95 # testq %rdx, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RDX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0X96 # testq %rdx, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RDX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0X97 # testq %rdx, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RDX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0X90 # testq %rdx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RDX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0X93 # testq %rdx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RDX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0X91 # testq %rdx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RDX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0X92 # testq %rdx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RDX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0X97 # testq %rdx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RDX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0X96 # testq %rdx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RDX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0X95 # testq %rdx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RDX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0X94, 0X24 # testq %rdx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define TEST_RDI_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0XB8 # testq %rdi, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RDI_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0XBB # testq %rdi, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RDI_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0XB9 # testq %rdi, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RDI_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0XBA # testq %rdi, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RDI_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0XBF # testq %rdi, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RDI_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0XBE # testq %rdi, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RDI_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0XBD # testq %rdi, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RDI_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0XBC, 0X24 # testq %rdi, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RDI_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0XB8 # testq %rdi, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RDI_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0XB9 # testq %rdi, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RDI_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0XBA # testq %rdi, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RDI_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0XBB # testq %rdi, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RDI_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0XBC, 0X24 # testq %rdi, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RDI_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0XBD # testq %rdi, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RDI_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0XBE # testq %rdi, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RDI_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0XBF # testq %rdi, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RDI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0XB8 # testq %rdi, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RDI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0XBB # testq %rdi, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RDI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0XB9 # testq %rdi, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RDI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0XBA # testq %rdi, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RDI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0XBF # testq %rdi, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RDI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0XBE # testq %rdi, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RDI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0XBD # testq %rdi, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RDI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0XBC, 0X24 # testq %rdi, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define TEST_RSI_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0XB0 # testq %rsi, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RSI_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0XB3 # testq %rsi, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RSI_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0XB1 # testq %rsi, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RSI_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0XB2 # testq %rsi, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RSI_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0XB7 # testq %rsi, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RSI_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0XB6 # testq %rsi, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RSI_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0XB5 # testq %rsi, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RSI_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0XB4, 0X24 # testq %rsi, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RSI_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0XB0 # testq %rsi, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RSI_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0XB1 # testq %rsi, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RSI_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0XB2 # testq %rsi, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RSI_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0XB3 # testq %rsi, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RSI_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0XB4, 0X24 # testq %rsi, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RSI_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0XB5 # testq %rsi, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RSI_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0XB6 # testq %rsi, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RSI_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0XB7 # testq %rsi, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RSI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0XB0 # testq %rsi, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RSI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0XB3 # testq %rsi, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RSI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0XB1 # testq %rsi, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RSI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0XB2 # testq %rsi, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RSI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0XB7 # testq %rsi, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RSI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0XB6 # testq %rsi, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RSI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0XB5 # testq %rsi, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RSI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0XB4, 0X24 # testq %rsi, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define TEST_RBP_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0XA8 # testq %rbp, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RBP_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0XAB # testq %rbp, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RBP_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0XA9 # testq %rbp, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RBP_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0XAA # testq %rbp, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RBP_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0XAF # testq %rbp, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RBP_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0XAE # testq %rbp, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RBP_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0XAD # testq %rbp, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RBP_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0XAC, 0X24 # testq %rbp, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RBP_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0XA8 # testq %rbp, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RBP_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0XA9 # testq %rbp, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RBP_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0XAA # testq %rbp, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RBP_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0XAB # testq %rbp, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RBP_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0XAC, 0X24 # testq %rbp, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RBP_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0XAD # testq %rbp, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RBP_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0XAE # testq %rbp, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RBP_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0XAF # testq %rbp, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RBP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0XA8 # testq %rbp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RBP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0XAB # testq %rbp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RBP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0XA9 # testq %rbp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RBP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0XAA # testq %rbp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RBP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0XAF # testq %rbp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RBP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0XAE # testq %rbp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RBP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0XAD # testq %rbp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RBP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0XAC, 0X24 # testq %rbp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define TEST_RSP_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0XA0 # testq %rsp, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RSP_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0XA3 # testq %rsp, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RSP_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0XA1 # testq %rsp, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RSP_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0XA2 # testq %rsp, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RSP_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0XA7 # testq %rsp, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RSP_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0XA6 # testq %rsp, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RSP_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0XA5 # testq %rsp, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RSP_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X85, 0XA4, 0X24 # testq %rsp, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RSP_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0XA0 # testq %rsp, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RSP_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0XA1 # testq %rsp, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RSP_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0XA2 # testq %rsp, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RSP_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0XA3 # testq %rsp, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RSP_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0XA4, 0X24 # testq %rsp, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RSP_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0XA5 # testq %rsp, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RSP_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0XA6 # testq %rsp, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RSP_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X85, 0XA7 # testq %rsp, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RSP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0XA0 # testq %rsp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RSP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0XA3 # testq %rsp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RSP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0XA1 # testq %rsp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RSP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0XA2 # testq %rsp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RSP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0XA7 # testq %rsp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RSP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0XA6 # testq %rsp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RSP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0XA5 # testq %rsp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_RSP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X85, 0XA4, 0X24 # testq %rsp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define TEST_R8_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0X80 # testq %r8, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0X83 # testq %r8, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0X81 # testq %r8, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0X82 # testq %r8, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0X87 # testq %r8, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0X86 # testq %r8, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0X85 # testq %r8, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0X84, 0X24 # testq %r8, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0X80 # testq %r8, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0X81 # testq %r8, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0X82 # testq %r8, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0X83 # testq %r8, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0X84, 0X24 # testq %r8, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0X85 # testq %r8, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0X86 # testq %r8, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0X87 # testq %r8, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X80 # testq %r8, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X83 # testq %r8, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X81 # testq %r8, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X82 # testq %r8, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X87 # testq %r8, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X86 # testq %r8, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X85 # testq %r8, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X84, 0X24 # testq %r8, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define TEST_R9_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0X88 # testq %r9, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0X8B # testq %r9, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0X89 # testq %r9, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0X8A # testq %r9, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0X8F # testq %r9, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0X8E # testq %r9, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0X8D # testq %r9, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0X8C, 0X24 # testq %r9, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0X88 # testq %r9, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0X89 # testq %r9, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0X8A # testq %r9, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0X8B # testq %r9, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0X8C, 0X24 # testq %r9, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0X8D # testq %r9, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0X8E # testq %r9, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0X8F # testq %r9, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X88 # testq %r9, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X8B # testq %r9, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X89 # testq %r9, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X8A # testq %r9, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X8F # testq %r9, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X8E # testq %r9, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X8D # testq %r9, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X8C, 0X24 # testq %r9, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define TEST_R10_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0X90 # testq %r10, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0X93 # testq %r10, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0X91 # testq %r10, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0X92 # testq %r10, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0X97 # testq %r10, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0X96 # testq %r10, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0X95 # testq %r10, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0X94, 0X24 # testq %r10, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0X90 # testq %r10, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0X91 # testq %r10, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0X92 # testq %r10, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0X93 # testq %r10, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0X94, 0X24 # testq %r10, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0X95 # testq %r10, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0X96 # testq %r10, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0X97 # testq %r10, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X90 # testq %r10, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X93 # testq %r10, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X91 # testq %r10, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X92 # testq %r10, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X97 # testq %r10, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X96 # testq %r10, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X95 # testq %r10, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X94, 0X24 # testq %r10, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define TEST_R11_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0X98 # testq %r11, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0X9B # testq %r11, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0X99 # testq %r11, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0X9A # testq %r11, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0X9F # testq %r11, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0X9E # testq %r11, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0X9D # testq %r11, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0X9C, 0X24 # testq %r11, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0X98 # testq %r11, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0X99 # testq %r11, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0X9A # testq %r11, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0X9B # testq %r11, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0X9C, 0X24 # testq %r11, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0X9D # testq %r11, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0X9E # testq %r11, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0X9F # testq %r11, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X98 # testq %r11, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X9B # testq %r11, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X99 # testq %r11, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X9A # testq %r11, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X9F # testq %r11, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X9E # testq %r11, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X9D # testq %r11, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0X9C, 0X24 # testq %r11, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define TEST_R12_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0XA0 # testq %r12, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0XA3 # testq %r12, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0XA1 # testq %r12, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0XA2 # testq %r12, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0XA7 # testq %r12, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0XA6 # testq %r12, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0XA5 # testq %r12, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0XA4, 0X24 # testq %r12, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0XA0 # testq %r12, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0XA1 # testq %r12, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0XA2 # testq %r12, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0XA3 # testq %r12, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0XA4, 0X24 # testq %r12, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0XA5 # testq %r12, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0XA6 # testq %r12, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0XA7 # testq %r12, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0XA0 # testq %r12, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0XA3 # testq %r12, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0XA1 # testq %r12, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0XA2 # testq %r12, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0XA7 # testq %r12, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0XA6 # testq %r12, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0XA5 # testq %r12, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0XA4, 0X24 # testq %r12, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define TEST_R13_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0XA8 # testq %r13, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0XAB # testq %r13, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0XA9 # testq %r13, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0XAA # testq %r13, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0XAF # testq %r13, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0XAE # testq %r13, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0XAD # testq %r13, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0XAC, 0X24 # testq %r13, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0XA8 # testq %r13, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0XA9 # testq %r13, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0XAA # testq %r13, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0XAB # testq %r13, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0XAC, 0X24 # testq %r13, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0XAD # testq %r13, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0XAE # testq %r13, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0XAF # testq %r13, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0XA8 # testq %r13, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0XAB # testq %r13, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0XA9 # testq %r13, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0XAA # testq %r13, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0XAF # testq %r13, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0XAE # testq %r13, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0XAD # testq %r13, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0XAC, 0X24 # testq %r13, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define TEST_R14_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0XB0 # testq %r14, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0XB3 # testq %r14, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0XB1 # testq %r14, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0XB2 # testq %r14, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0XB7 # testq %r14, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0XB6 # testq %r14, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0XB5 # testq %r14, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0XB4, 0X24 # testq %r14, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0XB0 # testq %r14, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0XB1 # testq %r14, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0XB2 # testq %r14, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0XB3 # testq %r14, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0XB4, 0X24 # testq %r14, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0XB5 # testq %r14, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0XB6 # testq %r14, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0XB7 # testq %r14, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0XB0 # testq %r14, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0XB3 # testq %r14, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0XB1 # testq %r14, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0XB2 # testq %r14, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0XB7 # testq %r14, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0XB6 # testq %r14, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0XB5 # testq %r14, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0XB4, 0X24 # testq %r14, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define TEST_R15_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0XB8 # testq %r15, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0XBB # testq %r15, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0XB9 # testq %r15, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0XBA # testq %r15, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0XBF # testq %r15, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0XBE # testq %r15, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0XBD # testq %r15, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X85, 0XBC, 0X24 # testq %r15, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0XB8 # testq %r15, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0XB9 # testq %r15, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0XBA # testq %r15, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0XBB # testq %r15, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0XBC, 0X24 # testq %r15, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0XBD # testq %r15, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0XBE # testq %r15, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X85, 0XBF # testq %r15, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0XB8 # testq %r15, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0XBB # testq %r15, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0XB9 # testq %r15, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0XBA # testq %r15, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0XBF # testq %r15, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0XBE # testq %r15, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0XBD # testq %r15, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X85, 0XBC, 0X24 # testq %r15, " _(VALUE) "(%esp)")\
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
