#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************* [v] 64-BIT MEMORY [v] ************************** */
#define ADC_RAX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X13, 0X04, 0X25 # adcq (" _(VALUE) "), %rax")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RBX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X13, 0X1C, 0X25 # adcq (" _(VALUE) "), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RCX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X13, 0X0C, 0X25 # adcq (" _(VALUE) "), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RDX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X13, 0X14, 0X25 # adcq (" _(VALUE) "), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RDI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X13, 0X3C, 0X25 # adcq (" _(VALUE) "), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RSI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X13, 0X34, 0X25 # adcq (" _(VALUE) "), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RBP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X13, 0X2C, 0X25 # adcq (" _(VALUE) "), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RSP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X13, 0X24, 0X25 # adcq (" _(VALUE) "), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X13, 0X04, 0X25 # adcq (" _(VALUE) "), %r8")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X13, 0X0C, 0X25 # adcq (" _(VALUE) "), %r9")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X13, 0X14, 0X25 # adcq (" _(VALUE) "), %r10")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X13, 0X1C, 0X25 # adcq (" _(VALUE) "), %r11")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X13, 0X24, 0X25 # adcq (" _(VALUE) "), %r12")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X13, 0X2C, 0X25 # adcq (" _(VALUE) "), %r13")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X13, 0X34, 0X25 # adcq (" _(VALUE) "), %r14")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X13, 0X3C, 0X25 # adcq (" _(VALUE) "), %r15")\
	CMT_ASM(".long " _(VALUE))

#define ADC_RAX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X11, 0X04, 0X25 # adcq %rax, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RBX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X11, 0X1C, 0X25 # adcq %rbx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RCX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X11, 0X0C, 0X25 # adcq %rcx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RDX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X11, 0X14, 0X25 # adcq %rdx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RDI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X11, 0X3C, 0X25 # adcq %rdi, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RSI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X11, 0X34, 0X25 # adcq %rsi, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RBP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X11, 0X2C, 0X25 # adcq %rbp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RSP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X48, 0X11, 0X24, 0X25 # adcq %rsp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X11, 0X04, 0X25 # adcq %r8, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X11, 0X0C, 0X25 # adcq %r9, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X11, 0X14, 0X25 # adcq %r10, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X11, 0X1C, 0X25 # adcq %r11, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X11, 0X24, 0X25 # adcq %r12, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X11, 0X2C, 0X25 # adcq %r13, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X11, 0X34, 0X25 # adcq %r14, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X11, 0X3C, 0X25 # adcq %r15, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))

#define ADC_RAX_FROM_PTR_RAX CMT_ASM(".byte 0X48, 0X13, 0X00 # adcq (%rax), %rax")
#define ADC_RAX_FROM_PTR_RBX CMT_ASM(".byte 0X48, 0X13, 0X03 # adcq (%rbx), %rax")
#define ADC_RAX_FROM_PTR_RCX CMT_ASM(".byte 0X48, 0X13, 0X01 # adcq (%rcx), %rax")
#define ADC_RAX_FROM_PTR_RDX CMT_ASM(".byte 0X48, 0X13, 0X02 # adcq (%rdx), %rax")
#define ADC_RAX_FROM_PTR_RDI CMT_ASM(".byte 0X48, 0X13, 0X07 # adcq (%rdi), %rax")
#define ADC_RAX_FROM_PTR_RSI CMT_ASM(".byte 0X48, 0X13, 0X06 # adcq (%rsi), %rax")
#define ADC_RAX_FROM_PTR_RBP CMT_ASM(".byte 0X48, 0X13, 0X45, 0X00 # adcq (%rbp), %rax")
#define ADC_RAX_FROM_PTR_RSP CMT_ASM(".byte 0X48, 0X13, 0X04, 0X24 # adcq (%rsp), %rax")
#define ADC_RAX_FROM_PTR_R8 CMT_ASM(".byte 0X49, 0X13, 0X00 # adcq (%r8), %rax")
#define ADC_RAX_FROM_PTR_R9 CMT_ASM(".byte 0X49, 0X13, 0X01 # adcq (%r9), %rax")
#define ADC_RAX_FROM_PTR_R10 CMT_ASM(".byte 0X49, 0X13, 0X02 # adcq (%r10), %rax")
#define ADC_RAX_FROM_PTR_R11 CMT_ASM(".byte 0X49, 0X13, 0X03 # adcq (%r11), %rax")
#define ADC_RAX_FROM_PTR_R12 CMT_ASM(".byte 0X49, 0X13, 0X04, 0X24 # adcq (%r12), %rax")
#define ADC_RAX_FROM_PTR_R13 CMT_ASM(".byte 0X49, 0X13, 0X45, 0X00 # adcq (%r13), %rax")
#define ADC_RAX_FROM_PTR_R14 CMT_ASM(".byte 0X49, 0X13, 0X06 # adcq (%r14), %rax")
#define ADC_RAX_FROM_PTR_R15 CMT_ASM(".byte 0X49, 0X13, 0X07 # adcq (%r15), %rax")
#define ADC_RAX_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X13, 0X00 # adcq (%eax), %rax")
#define ADC_RAX_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X13, 0X03 # adcq (%ebx), %rax")
#define ADC_RAX_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X13, 0X01 # adcq (%ecx), %rax")
#define ADC_RAX_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X13, 0X02 # adcq (%edx), %rax")
#define ADC_RAX_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X13, 0X07 # adcq (%edi), %rax")
#define ADC_RAX_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X13, 0X06 # adcq (%esi), %rax")
#define ADC_RAX_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X13, 0X45, 0X00 # adcq (%ebp), %rax")
#define ADC_RAX_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X13, 0X04, 0X24 # adcq (%esp), %rax")

#define ADC_RBX_FROM_PTR_RAX CMT_ASM(".byte 0X48, 0X13, 0X18 # adcq (%rax), %rbx")
#define ADC_RBX_FROM_PTR_RBX CMT_ASM(".byte 0X48, 0X13, 0X1B # adcq (%rbx), %rbx")
#define ADC_RBX_FROM_PTR_RCX CMT_ASM(".byte 0X48, 0X13, 0X19 # adcq (%rcx), %rbx")
#define ADC_RBX_FROM_PTR_RDX CMT_ASM(".byte 0X48, 0X13, 0X1A # adcq (%rdx), %rbx")
#define ADC_RBX_FROM_PTR_RDI CMT_ASM(".byte 0X48, 0X13, 0X1F # adcq (%rdi), %rbx")
#define ADC_RBX_FROM_PTR_RSI CMT_ASM(".byte 0X48, 0X13, 0X1E # adcq (%rsi), %rbx")
#define ADC_RBX_FROM_PTR_RBP CMT_ASM(".byte 0X48, 0X13, 0X5D, 0X00 # adcq (%rbp), %rbx")
#define ADC_RBX_FROM_PTR_RSP CMT_ASM(".byte 0X48, 0X13, 0X1C, 0X24 # adcq (%rsp), %rbx")
#define ADC_RBX_FROM_PTR_R8 CMT_ASM(".byte 0X49, 0X13, 0X18 # adcq (%r8), %rbx")
#define ADC_RBX_FROM_PTR_R9 CMT_ASM(".byte 0X49, 0X13, 0X19 # adcq (%r9), %rbx")
#define ADC_RBX_FROM_PTR_R10 CMT_ASM(".byte 0X49, 0X13, 0X1A # adcq (%r10), %rbx")
#define ADC_RBX_FROM_PTR_R11 CMT_ASM(".byte 0X49, 0X13, 0X1B # adcq (%r11), %rbx")
#define ADC_RBX_FROM_PTR_R12 CMT_ASM(".byte 0X49, 0X13, 0X1C, 0X24 # adcq (%r12), %rbx")
#define ADC_RBX_FROM_PTR_R13 CMT_ASM(".byte 0X49, 0X13, 0X5D, 0X00 # adcq (%r13), %rbx")
#define ADC_RBX_FROM_PTR_R14 CMT_ASM(".byte 0X49, 0X13, 0X1E # adcq (%r14), %rbx")
#define ADC_RBX_FROM_PTR_R15 CMT_ASM(".byte 0X49, 0X13, 0X1F # adcq (%r15), %rbx")
#define ADC_RBX_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X13, 0X18 # adcq (%eax), %rbx")
#define ADC_RBX_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X13, 0X1B # adcq (%ebx), %rbx")
#define ADC_RBX_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X13, 0X19 # adcq (%ecx), %rbx")
#define ADC_RBX_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X13, 0X1A # adcq (%edx), %rbx")
#define ADC_RBX_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X13, 0X1F # adcq (%edi), %rbx")
#define ADC_RBX_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X13, 0X1E # adcq (%esi), %rbx")
#define ADC_RBX_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X13, 0X5D, 0X00 # adcq (%ebp), %rbx")
#define ADC_RBX_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X13, 0X1C, 0X24 # adcq (%esp), %rbx")

#define ADC_RCX_FROM_PTR_RAX CMT_ASM(".byte 0X48, 0X13, 0X08 # adcq (%rax), %rcx")
#define ADC_RCX_FROM_PTR_RBX CMT_ASM(".byte 0X48, 0X13, 0X0B # adcq (%rbx), %rcx")
#define ADC_RCX_FROM_PTR_RCX CMT_ASM(".byte 0X48, 0X13, 0X09 # adcq (%rcx), %rcx")
#define ADC_RCX_FROM_PTR_RDX CMT_ASM(".byte 0X48, 0X13, 0X0A # adcq (%rdx), %rcx")
#define ADC_RCX_FROM_PTR_RDI CMT_ASM(".byte 0X48, 0X13, 0X0F # adcq (%rdi), %rcx")
#define ADC_RCX_FROM_PTR_RSI CMT_ASM(".byte 0X48, 0X13, 0X0E # adcq (%rsi), %rcx")
#define ADC_RCX_FROM_PTR_RBP CMT_ASM(".byte 0X48, 0X13, 0X4D, 0X00 # adcq (%rbp), %rcx")
#define ADC_RCX_FROM_PTR_RSP CMT_ASM(".byte 0X48, 0X13, 0X0C, 0X24 # adcq (%rsp), %rcx")
#define ADC_RCX_FROM_PTR_R8 CMT_ASM(".byte 0X49, 0X13, 0X08 # adcq (%r8), %rcx")
#define ADC_RCX_FROM_PTR_R9 CMT_ASM(".byte 0X49, 0X13, 0X09 # adcq (%r9), %rcx")
#define ADC_RCX_FROM_PTR_R10 CMT_ASM(".byte 0X49, 0X13, 0X0A # adcq (%r10), %rcx")
#define ADC_RCX_FROM_PTR_R11 CMT_ASM(".byte 0X49, 0X13, 0X0B # adcq (%r11), %rcx")
#define ADC_RCX_FROM_PTR_R12 CMT_ASM(".byte 0X49, 0X13, 0X0C, 0X24 # adcq (%r12), %rcx")
#define ADC_RCX_FROM_PTR_R13 CMT_ASM(".byte 0X49, 0X13, 0X4D, 0X00 # adcq (%r13), %rcx")
#define ADC_RCX_FROM_PTR_R14 CMT_ASM(".byte 0X49, 0X13, 0X0E # adcq (%r14), %rcx")
#define ADC_RCX_FROM_PTR_R15 CMT_ASM(".byte 0X49, 0X13, 0X0F # adcq (%r15), %rcx")
#define ADC_RCX_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X13, 0X08 # adcq (%eax), %rcx")
#define ADC_RCX_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X13, 0X0B # adcq (%ebx), %rcx")
#define ADC_RCX_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X13, 0X09 # adcq (%ecx), %rcx")
#define ADC_RCX_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X13, 0X0A # adcq (%edx), %rcx")
#define ADC_RCX_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X13, 0X0F # adcq (%edi), %rcx")
#define ADC_RCX_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X13, 0X0E # adcq (%esi), %rcx")
#define ADC_RCX_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X13, 0X4D, 0X00 # adcq (%ebp), %rcx")
#define ADC_RCX_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X13, 0X0C, 0X24 # adcq (%esp), %rcx")

#define ADC_RDX_FROM_PTR_RAX CMT_ASM(".byte 0X48, 0X13, 0X10 # adcq (%rax), %rdx")
#define ADC_RDX_FROM_PTR_RBX CMT_ASM(".byte 0X48, 0X13, 0X13 # adcq (%rbx), %rdx")
#define ADC_RDX_FROM_PTR_RCX CMT_ASM(".byte 0X48, 0X13, 0X11 # adcq (%rcx), %rdx")
#define ADC_RDX_FROM_PTR_RDX CMT_ASM(".byte 0X48, 0X13, 0X12 # adcq (%rdx), %rdx")
#define ADC_RDX_FROM_PTR_RDI CMT_ASM(".byte 0X48, 0X13, 0X17 # adcq (%rdi), %rdx")
#define ADC_RDX_FROM_PTR_RSI CMT_ASM(".byte 0X48, 0X13, 0X16 # adcq (%rsi), %rdx")
#define ADC_RDX_FROM_PTR_RBP CMT_ASM(".byte 0X48, 0X13, 0X55, 0X00 # adcq (%rbp), %rdx")
#define ADC_RDX_FROM_PTR_RSP CMT_ASM(".byte 0X48, 0X13, 0X14, 0X24 # adcq (%rsp), %rdx")
#define ADC_RDX_FROM_PTR_R8 CMT_ASM(".byte 0X49, 0X13, 0X10 # adcq (%r8), %rdx")
#define ADC_RDX_FROM_PTR_R9 CMT_ASM(".byte 0X49, 0X13, 0X11 # adcq (%r9), %rdx")
#define ADC_RDX_FROM_PTR_R10 CMT_ASM(".byte 0X49, 0X13, 0X12 # adcq (%r10), %rdx")
#define ADC_RDX_FROM_PTR_R11 CMT_ASM(".byte 0X49, 0X13, 0X13 # adcq (%r11), %rdx")
#define ADC_RDX_FROM_PTR_R12 CMT_ASM(".byte 0X49, 0X13, 0X14, 0X24 # adcq (%r12), %rdx")
#define ADC_RDX_FROM_PTR_R13 CMT_ASM(".byte 0X49, 0X13, 0X55, 0X00 # adcq (%r13), %rdx")
#define ADC_RDX_FROM_PTR_R14 CMT_ASM(".byte 0X49, 0X13, 0X16 # adcq (%r14), %rdx")
#define ADC_RDX_FROM_PTR_R15 CMT_ASM(".byte 0X49, 0X13, 0X17 # adcq (%r15), %rdx")
#define ADC_RDX_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X13, 0X10 # adcq (%eax), %rdx")
#define ADC_RDX_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X13, 0X13 # adcq (%ebx), %rdx")
#define ADC_RDX_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X13, 0X11 # adcq (%ecx), %rdx")
#define ADC_RDX_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X13, 0X12 # adcq (%edx), %rdx")
#define ADC_RDX_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X13, 0X17 # adcq (%edi), %rdx")
#define ADC_RDX_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X13, 0X16 # adcq (%esi), %rdx")
#define ADC_RDX_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X13, 0X55, 0X00 # adcq (%ebp), %rdx")
#define ADC_RDX_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X13, 0X14, 0X24 # adcq (%esp), %rdx")

#define ADC_RDI_FROM_PTR_RAX CMT_ASM(".byte 0X48, 0X13, 0X38 # adcq (%rax), %rdi")
#define ADC_RDI_FROM_PTR_RBX CMT_ASM(".byte 0X48, 0X13, 0X3B # adcq (%rbx), %rdi")
#define ADC_RDI_FROM_PTR_RCX CMT_ASM(".byte 0X48, 0X13, 0X39 # adcq (%rcx), %rdi")
#define ADC_RDI_FROM_PTR_RDX CMT_ASM(".byte 0X48, 0X13, 0X3A # adcq (%rdx), %rdi")
#define ADC_RDI_FROM_PTR_RDI CMT_ASM(".byte 0X48, 0X13, 0X3F # adcq (%rdi), %rdi")
#define ADC_RDI_FROM_PTR_RSI CMT_ASM(".byte 0X48, 0X13, 0X3E # adcq (%rsi), %rdi")
#define ADC_RDI_FROM_PTR_RBP CMT_ASM(".byte 0X48, 0X13, 0X7D, 0X00 # adcq (%rbp), %rdi")
#define ADC_RDI_FROM_PTR_RSP CMT_ASM(".byte 0X48, 0X13, 0X3C, 0X24 # adcq (%rsp), %rdi")
#define ADC_RDI_FROM_PTR_R8 CMT_ASM(".byte 0X49, 0X13, 0X38 # adcq (%r8), %rdi")
#define ADC_RDI_FROM_PTR_R9 CMT_ASM(".byte 0X49, 0X13, 0X39 # adcq (%r9), %rdi")
#define ADC_RDI_FROM_PTR_R10 CMT_ASM(".byte 0X49, 0X13, 0X3A # adcq (%r10), %rdi")
#define ADC_RDI_FROM_PTR_R11 CMT_ASM(".byte 0X49, 0X13, 0X3B # adcq (%r11), %rdi")
#define ADC_RDI_FROM_PTR_R12 CMT_ASM(".byte 0X49, 0X13, 0X3C, 0X24 # adcq (%r12), %rdi")
#define ADC_RDI_FROM_PTR_R13 CMT_ASM(".byte 0X49, 0X13, 0X7D, 0X00 # adcq (%r13), %rdi")
#define ADC_RDI_FROM_PTR_R14 CMT_ASM(".byte 0X49, 0X13, 0X3E # adcq (%r14), %rdi")
#define ADC_RDI_FROM_PTR_R15 CMT_ASM(".byte 0X49, 0X13, 0X3F # adcq (%r15), %rdi")
#define ADC_RDI_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X13, 0X38 # adcq (%eax), %rdi")
#define ADC_RDI_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X13, 0X3B # adcq (%ebx), %rdi")
#define ADC_RDI_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X13, 0X39 # adcq (%ecx), %rdi")
#define ADC_RDI_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X13, 0X3A # adcq (%edx), %rdi")
#define ADC_RDI_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X13, 0X3F # adcq (%edi), %rdi")
#define ADC_RDI_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X13, 0X3E # adcq (%esi), %rdi")
#define ADC_RDI_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X13, 0X7D, 0X00 # adcq (%ebp), %rdi")
#define ADC_RDI_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X13, 0X3C, 0X24 # adcq (%esp), %rdi")

#define ADC_RSI_FROM_PTR_RAX CMT_ASM(".byte 0X48, 0X13, 0X30 # adcq (%rax), %rsi")
#define ADC_RSI_FROM_PTR_RBX CMT_ASM(".byte 0X48, 0X13, 0X33 # adcq (%rbx), %rsi")
#define ADC_RSI_FROM_PTR_RCX CMT_ASM(".byte 0X48, 0X13, 0X31 # adcq (%rcx), %rsi")
#define ADC_RSI_FROM_PTR_RDX CMT_ASM(".byte 0X48, 0X13, 0X32 # adcq (%rdx), %rsi")
#define ADC_RSI_FROM_PTR_RDI CMT_ASM(".byte 0X48, 0X13, 0X37 # adcq (%rdi), %rsi")
#define ADC_RSI_FROM_PTR_RSI CMT_ASM(".byte 0X48, 0X13, 0X36 # adcq (%rsi), %rsi")
#define ADC_RSI_FROM_PTR_RBP CMT_ASM(".byte 0X48, 0X13, 0X75, 0X00 # adcq (%rbp), %rsi")
#define ADC_RSI_FROM_PTR_RSP CMT_ASM(".byte 0X48, 0X13, 0X34, 0X24 # adcq (%rsp), %rsi")
#define ADC_RSI_FROM_PTR_R8 CMT_ASM(".byte 0X49, 0X13, 0X30 # adcq (%r8), %rsi")
#define ADC_RSI_FROM_PTR_R9 CMT_ASM(".byte 0X49, 0X13, 0X31 # adcq (%r9), %rsi")
#define ADC_RSI_FROM_PTR_R10 CMT_ASM(".byte 0X49, 0X13, 0X32 # adcq (%r10), %rsi")
#define ADC_RSI_FROM_PTR_R11 CMT_ASM(".byte 0X49, 0X13, 0X33 # adcq (%r11), %rsi")
#define ADC_RSI_FROM_PTR_R12 CMT_ASM(".byte 0X49, 0X13, 0X34, 0X24 # adcq (%r12), %rsi")
#define ADC_RSI_FROM_PTR_R13 CMT_ASM(".byte 0X49, 0X13, 0X75, 0X00 # adcq (%r13), %rsi")
#define ADC_RSI_FROM_PTR_R14 CMT_ASM(".byte 0X49, 0X13, 0X36 # adcq (%r14), %rsi")
#define ADC_RSI_FROM_PTR_R15 CMT_ASM(".byte 0X49, 0X13, 0X37 # adcq (%r15), %rsi")
#define ADC_RSI_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X13, 0X30 # adcq (%eax), %rsi")
#define ADC_RSI_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X13, 0X33 # adcq (%ebx), %rsi")
#define ADC_RSI_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X13, 0X31 # adcq (%ecx), %rsi")
#define ADC_RSI_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X13, 0X32 # adcq (%edx), %rsi")
#define ADC_RSI_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X13, 0X37 # adcq (%edi), %rsi")
#define ADC_RSI_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X13, 0X36 # adcq (%esi), %rsi")
#define ADC_RSI_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X13, 0X75, 0X00 # adcq (%ebp), %rsi")
#define ADC_RSI_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X13, 0X34, 0X24 # adcq (%esp), %rsi")

#define ADC_RBP_FROM_PTR_RAX CMT_ASM(".byte 0X48, 0X13, 0X28 # adcq (%rax), %rbp")
#define ADC_RBP_FROM_PTR_RBX CMT_ASM(".byte 0X48, 0X13, 0X2B # adcq (%rbx), %rbp")
#define ADC_RBP_FROM_PTR_RCX CMT_ASM(".byte 0X48, 0X13, 0X29 # adcq (%rcx), %rbp")
#define ADC_RBP_FROM_PTR_RDX CMT_ASM(".byte 0X48, 0X13, 0X2A # adcq (%rdx), %rbp")
#define ADC_RBP_FROM_PTR_RDI CMT_ASM(".byte 0X48, 0X13, 0X2F # adcq (%rdi), %rbp")
#define ADC_RBP_FROM_PTR_RSI CMT_ASM(".byte 0X48, 0X13, 0X2E # adcq (%rsi), %rbp")
#define ADC_RBP_FROM_PTR_RBP CMT_ASM(".byte 0X48, 0X13, 0X6D, 0X00 # adcq (%rbp), %rbp")
#define ADC_RBP_FROM_PTR_RSP CMT_ASM(".byte 0X48, 0X13, 0X2C, 0X24 # adcq (%rsp), %rbp")
#define ADC_RBP_FROM_PTR_R8 CMT_ASM(".byte 0X49, 0X13, 0X28 # adcq (%r8), %rbp")
#define ADC_RBP_FROM_PTR_R9 CMT_ASM(".byte 0X49, 0X13, 0X29 # adcq (%r9), %rbp")
#define ADC_RBP_FROM_PTR_R10 CMT_ASM(".byte 0X49, 0X13, 0X2A # adcq (%r10), %rbp")
#define ADC_RBP_FROM_PTR_R11 CMT_ASM(".byte 0X49, 0X13, 0X2B # adcq (%r11), %rbp")
#define ADC_RBP_FROM_PTR_R12 CMT_ASM(".byte 0X49, 0X13, 0X2C, 0X24 # adcq (%r12), %rbp")
#define ADC_RBP_FROM_PTR_R13 CMT_ASM(".byte 0X49, 0X13, 0X6D, 0X00 # adcq (%r13), %rbp")
#define ADC_RBP_FROM_PTR_R14 CMT_ASM(".byte 0X49, 0X13, 0X2E # adcq (%r14), %rbp")
#define ADC_RBP_FROM_PTR_R15 CMT_ASM(".byte 0X49, 0X13, 0X2F # adcq (%r15), %rbp")
#define ADC_RBP_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X13, 0X28 # adcq (%eax), %rbp")
#define ADC_RBP_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X13, 0X2B # adcq (%ebx), %rbp")
#define ADC_RBP_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X13, 0X29 # adcq (%ecx), %rbp")
#define ADC_RBP_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X13, 0X2A # adcq (%edx), %rbp")
#define ADC_RBP_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X13, 0X2F # adcq (%edi), %rbp")
#define ADC_RBP_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X13, 0X2E # adcq (%esi), %rbp")
#define ADC_RBP_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X13, 0X6D, 0X00 # adcq (%ebp), %rbp")
#define ADC_RBP_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X13, 0X2C, 0X24 # adcq (%esp), %rbp")

#define ADC_RSP_FROM_PTR_RAX CMT_ASM(".byte 0X48, 0X13, 0X20 # adcq (%rax), %rsp")
#define ADC_RSP_FROM_PTR_RBX CMT_ASM(".byte 0X48, 0X13, 0X23 # adcq (%rbx), %rsp")
#define ADC_RSP_FROM_PTR_RCX CMT_ASM(".byte 0X48, 0X13, 0X21 # adcq (%rcx), %rsp")
#define ADC_RSP_FROM_PTR_RDX CMT_ASM(".byte 0X48, 0X13, 0X22 # adcq (%rdx), %rsp")
#define ADC_RSP_FROM_PTR_RDI CMT_ASM(".byte 0X48, 0X13, 0X27 # adcq (%rdi), %rsp")
#define ADC_RSP_FROM_PTR_RSI CMT_ASM(".byte 0X48, 0X13, 0X26 # adcq (%rsi), %rsp")
#define ADC_RSP_FROM_PTR_RBP CMT_ASM(".byte 0X48, 0X13, 0X65, 0X00 # adcq (%rbp), %rsp")
#define ADC_RSP_FROM_PTR_RSP CMT_ASM(".byte 0X48, 0X13, 0X24, 0X24 # adcq (%rsp), %rsp")
#define ADC_RSP_FROM_PTR_R8 CMT_ASM(".byte 0X49, 0X13, 0X20 # adcq (%r8), %rsp")
#define ADC_RSP_FROM_PTR_R9 CMT_ASM(".byte 0X49, 0X13, 0X21 # adcq (%r9), %rsp")
#define ADC_RSP_FROM_PTR_R10 CMT_ASM(".byte 0X49, 0X13, 0X22 # adcq (%r10), %rsp")
#define ADC_RSP_FROM_PTR_R11 CMT_ASM(".byte 0X49, 0X13, 0X23 # adcq (%r11), %rsp")
#define ADC_RSP_FROM_PTR_R12 CMT_ASM(".byte 0X49, 0X13, 0X24, 0X24 # adcq (%r12), %rsp")
#define ADC_RSP_FROM_PTR_R13 CMT_ASM(".byte 0X49, 0X13, 0X65, 0X00 # adcq (%r13), %rsp")
#define ADC_RSP_FROM_PTR_R14 CMT_ASM(".byte 0X49, 0X13, 0X26 # adcq (%r14), %rsp")
#define ADC_RSP_FROM_PTR_R15 CMT_ASM(".byte 0X49, 0X13, 0X27 # adcq (%r15), %rsp")
#define ADC_RSP_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X13, 0X20 # adcq (%eax), %rsp")
#define ADC_RSP_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X13, 0X23 # adcq (%ebx), %rsp")
#define ADC_RSP_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X13, 0X21 # adcq (%ecx), %rsp")
#define ADC_RSP_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X13, 0X22 # adcq (%edx), %rsp")
#define ADC_RSP_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X13, 0X27 # adcq (%edi), %rsp")
#define ADC_RSP_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X13, 0X26 # adcq (%esi), %rsp")
#define ADC_RSP_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X13, 0X65, 0X00 # adcq (%ebp), %rsp")
#define ADC_RSP_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X13, 0X24, 0X24 # adcq (%esp), %rsp")

#define ADC_R8_FROM_PTR_RAX CMT_ASM(".byte 0X4C, 0X13, 0X00 # adcq (%rax), %r8")
#define ADC_R8_FROM_PTR_RBX CMT_ASM(".byte 0X4C, 0X13, 0X03 # adcq (%rbx), %r8")
#define ADC_R8_FROM_PTR_RCX CMT_ASM(".byte 0X4C, 0X13, 0X01 # adcq (%rcx), %r8")
#define ADC_R8_FROM_PTR_RDX CMT_ASM(".byte 0X4C, 0X13, 0X02 # adcq (%rdx), %r8")
#define ADC_R8_FROM_PTR_RDI CMT_ASM(".byte 0X4C, 0X13, 0X07 # adcq (%rdi), %r8")
#define ADC_R8_FROM_PTR_RSI CMT_ASM(".byte 0X4C, 0X13, 0X06 # adcq (%rsi), %r8")
#define ADC_R8_FROM_PTR_RBP CMT_ASM(".byte 0X4C, 0X13, 0X45, 0X00 # adcq (%rbp), %r8")
#define ADC_R8_FROM_PTR_RSP CMT_ASM(".byte 0X4C, 0X13, 0X04, 0X24 # adcq (%rsp), %r8")
#define ADC_R8_FROM_PTR_R8 CMT_ASM(".byte 0X4D, 0X13, 0X00 # adcq (%r8), %r8")
#define ADC_R8_FROM_PTR_R9 CMT_ASM(".byte 0X4D, 0X13, 0X01 # adcq (%r9), %r8")
#define ADC_R8_FROM_PTR_R10 CMT_ASM(".byte 0X4D, 0X13, 0X02 # adcq (%r10), %r8")
#define ADC_R8_FROM_PTR_R11 CMT_ASM(".byte 0X4D, 0X13, 0X03 # adcq (%r11), %r8")
#define ADC_R8_FROM_PTR_R12 CMT_ASM(".byte 0X4D, 0X13, 0X04, 0X24 # adcq (%r12), %r8")
#define ADC_R8_FROM_PTR_R13 CMT_ASM(".byte 0X4D, 0X13, 0X45, 0X00 # adcq (%r13), %r8")
#define ADC_R8_FROM_PTR_R14 CMT_ASM(".byte 0X4D, 0X13, 0X06 # adcq (%r14), %r8")
#define ADC_R8_FROM_PTR_R15 CMT_ASM(".byte 0X4D, 0X13, 0X07 # adcq (%r15), %r8")
#define ADC_R8_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X13, 0X00 # adcq (%eax), %r8")
#define ADC_R8_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X13, 0X03 # adcq (%ebx), %r8")
#define ADC_R8_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X13, 0X01 # adcq (%ecx), %r8")
#define ADC_R8_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X13, 0X02 # adcq (%edx), %r8")
#define ADC_R8_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X13, 0X07 # adcq (%edi), %r8")
#define ADC_R8_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X13, 0X06 # adcq (%esi), %r8")
#define ADC_R8_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X13, 0X45, 0X00 # adcq (%ebp), %r8")
#define ADC_R8_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X13, 0X04, 0X24 # adcq (%esp), %r8")

#define ADC_R9_FROM_PTR_RAX CMT_ASM(".byte 0X4C, 0X13, 0X08 # adcq (%rax), %r9")
#define ADC_R9_FROM_PTR_RBX CMT_ASM(".byte 0X4C, 0X13, 0X0B # adcq (%rbx), %r9")
#define ADC_R9_FROM_PTR_RCX CMT_ASM(".byte 0X4C, 0X13, 0X09 # adcq (%rcx), %r9")
#define ADC_R9_FROM_PTR_RDX CMT_ASM(".byte 0X4C, 0X13, 0X0A # adcq (%rdx), %r9")
#define ADC_R9_FROM_PTR_RDI CMT_ASM(".byte 0X4C, 0X13, 0X0F # adcq (%rdi), %r9")
#define ADC_R9_FROM_PTR_RSI CMT_ASM(".byte 0X4C, 0X13, 0X0E # adcq (%rsi), %r9")
#define ADC_R9_FROM_PTR_RBP CMT_ASM(".byte 0X4C, 0X13, 0X4D, 0X00 # adcq (%rbp), %r9")
#define ADC_R9_FROM_PTR_RSP CMT_ASM(".byte 0X4C, 0X13, 0X0C, 0X24 # adcq (%rsp), %r9")
#define ADC_R9_FROM_PTR_R8 CMT_ASM(".byte 0X4D, 0X13, 0X08 # adcq (%r8), %r9")
#define ADC_R9_FROM_PTR_R9 CMT_ASM(".byte 0X4D, 0X13, 0X09 # adcq (%r9), %r9")
#define ADC_R9_FROM_PTR_R10 CMT_ASM(".byte 0X4D, 0X13, 0X0A # adcq (%r10), %r9")
#define ADC_R9_FROM_PTR_R11 CMT_ASM(".byte 0X4D, 0X13, 0X0B # adcq (%r11), %r9")
#define ADC_R9_FROM_PTR_R12 CMT_ASM(".byte 0X4D, 0X13, 0X0C, 0X24 # adcq (%r12), %r9")
#define ADC_R9_FROM_PTR_R13 CMT_ASM(".byte 0X4D, 0X13, 0X4D, 0X00 # adcq (%r13), %r9")
#define ADC_R9_FROM_PTR_R14 CMT_ASM(".byte 0X4D, 0X13, 0X0E # adcq (%r14), %r9")
#define ADC_R9_FROM_PTR_R15 CMT_ASM(".byte 0X4D, 0X13, 0X0F # adcq (%r15), %r9")
#define ADC_R9_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X13, 0X08 # adcq (%eax), %r9")
#define ADC_R9_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X13, 0X0B # adcq (%ebx), %r9")
#define ADC_R9_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X13, 0X09 # adcq (%ecx), %r9")
#define ADC_R9_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X13, 0X0A # adcq (%edx), %r9")
#define ADC_R9_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X13, 0X0F # adcq (%edi), %r9")
#define ADC_R9_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X13, 0X0E # adcq (%esi), %r9")
#define ADC_R9_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X13, 0X4D, 0X00 # adcq (%ebp), %r9")
#define ADC_R9_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X13, 0X0C, 0X24 # adcq (%esp), %r9")

#define ADC_R10_FROM_PTR_RAX CMT_ASM(".byte 0X4C, 0X13, 0X10 # adcq (%rax), %r10")
#define ADC_R10_FROM_PTR_RBX CMT_ASM(".byte 0X4C, 0X13, 0X13 # adcq (%rbx), %r10")
#define ADC_R10_FROM_PTR_RCX CMT_ASM(".byte 0X4C, 0X13, 0X11 # adcq (%rcx), %r10")
#define ADC_R10_FROM_PTR_RDX CMT_ASM(".byte 0X4C, 0X13, 0X12 # adcq (%rdx), %r10")
#define ADC_R10_FROM_PTR_RDI CMT_ASM(".byte 0X4C, 0X13, 0X17 # adcq (%rdi), %r10")
#define ADC_R10_FROM_PTR_RSI CMT_ASM(".byte 0X4C, 0X13, 0X16 # adcq (%rsi), %r10")
#define ADC_R10_FROM_PTR_RBP CMT_ASM(".byte 0X4C, 0X13, 0X55, 0X00 # adcq (%rbp), %r10")
#define ADC_R10_FROM_PTR_RSP CMT_ASM(".byte 0X4C, 0X13, 0X14, 0X24 # adcq (%rsp), %r10")
#define ADC_R10_FROM_PTR_R8 CMT_ASM(".byte 0X4D, 0X13, 0X10 # adcq (%r8), %r10")
#define ADC_R10_FROM_PTR_R9 CMT_ASM(".byte 0X4D, 0X13, 0X11 # adcq (%r9), %r10")
#define ADC_R10_FROM_PTR_R10 CMT_ASM(".byte 0X4D, 0X13, 0X12 # adcq (%r10), %r10")
#define ADC_R10_FROM_PTR_R11 CMT_ASM(".byte 0X4D, 0X13, 0X13 # adcq (%r11), %r10")
#define ADC_R10_FROM_PTR_R12 CMT_ASM(".byte 0X4D, 0X13, 0X14, 0X24 # adcq (%r12), %r10")
#define ADC_R10_FROM_PTR_R13 CMT_ASM(".byte 0X4D, 0X13, 0X55, 0X00 # adcq (%r13), %r10")
#define ADC_R10_FROM_PTR_R14 CMT_ASM(".byte 0X4D, 0X13, 0X16 # adcq (%r14), %r10")
#define ADC_R10_FROM_PTR_R15 CMT_ASM(".byte 0X4D, 0X13, 0X17 # adcq (%r15), %r10")
#define ADC_R10_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X13, 0X10 # adcq (%eax), %r10")
#define ADC_R10_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X13, 0X13 # adcq (%ebx), %r10")
#define ADC_R10_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X13, 0X11 # adcq (%ecx), %r10")
#define ADC_R10_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X13, 0X12 # adcq (%edx), %r10")
#define ADC_R10_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X13, 0X17 # adcq (%edi), %r10")
#define ADC_R10_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X13, 0X16 # adcq (%esi), %r10")
#define ADC_R10_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X13, 0X55, 0X00 # adcq (%ebp), %r10")
#define ADC_R10_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X13, 0X14, 0X24 # adcq (%esp), %r10")

#define ADC_R11_FROM_PTR_RAX CMT_ASM(".byte 0X4C, 0X13, 0X18 # adcq (%rax), %r11")
#define ADC_R11_FROM_PTR_RBX CMT_ASM(".byte 0X4C, 0X13, 0X1B # adcq (%rbx), %r11")
#define ADC_R11_FROM_PTR_RCX CMT_ASM(".byte 0X4C, 0X13, 0X19 # adcq (%rcx), %r11")
#define ADC_R11_FROM_PTR_RDX CMT_ASM(".byte 0X4C, 0X13, 0X1A # adcq (%rdx), %r11")
#define ADC_R11_FROM_PTR_RDI CMT_ASM(".byte 0X4C, 0X13, 0X1F # adcq (%rdi), %r11")
#define ADC_R11_FROM_PTR_RSI CMT_ASM(".byte 0X4C, 0X13, 0X1E # adcq (%rsi), %r11")
#define ADC_R11_FROM_PTR_RBP CMT_ASM(".byte 0X4C, 0X13, 0X5D, 0X00 # adcq (%rbp), %r11")
#define ADC_R11_FROM_PTR_RSP CMT_ASM(".byte 0X4C, 0X13, 0X1C, 0X24 # adcq (%rsp), %r11")
#define ADC_R11_FROM_PTR_R8 CMT_ASM(".byte 0X4D, 0X13, 0X18 # adcq (%r8), %r11")
#define ADC_R11_FROM_PTR_R9 CMT_ASM(".byte 0X4D, 0X13, 0X19 # adcq (%r9), %r11")
#define ADC_R11_FROM_PTR_R10 CMT_ASM(".byte 0X4D, 0X13, 0X1A # adcq (%r10), %r11")
#define ADC_R11_FROM_PTR_R11 CMT_ASM(".byte 0X4D, 0X13, 0X1B # adcq (%r11), %r11")
#define ADC_R11_FROM_PTR_R12 CMT_ASM(".byte 0X4D, 0X13, 0X1C, 0X24 # adcq (%r12), %r11")
#define ADC_R11_FROM_PTR_R13 CMT_ASM(".byte 0X4D, 0X13, 0X5D, 0X00 # adcq (%r13), %r11")
#define ADC_R11_FROM_PTR_R14 CMT_ASM(".byte 0X4D, 0X13, 0X1E # adcq (%r14), %r11")
#define ADC_R11_FROM_PTR_R15 CMT_ASM(".byte 0X4D, 0X13, 0X1F # adcq (%r15), %r11")
#define ADC_R11_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X13, 0X18 # adcq (%eax), %r11")
#define ADC_R11_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X13, 0X1B # adcq (%ebx), %r11")
#define ADC_R11_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X13, 0X19 # adcq (%ecx), %r11")
#define ADC_R11_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X13, 0X1A # adcq (%edx), %r11")
#define ADC_R11_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X13, 0X1F # adcq (%edi), %r11")
#define ADC_R11_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X13, 0X1E # adcq (%esi), %r11")
#define ADC_R11_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X13, 0X5D, 0X00 # adcq (%ebp), %r11")
#define ADC_R11_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X13, 0X1C, 0X24 # adcq (%esp), %r11")

#define ADC_R12_FROM_PTR_RAX CMT_ASM(".byte 0X4C, 0X13, 0X20 # adcq (%rax), %r12")
#define ADC_R12_FROM_PTR_RBX CMT_ASM(".byte 0X4C, 0X13, 0X23 # adcq (%rbx), %r12")
#define ADC_R12_FROM_PTR_RCX CMT_ASM(".byte 0X4C, 0X13, 0X21 # adcq (%rcx), %r12")
#define ADC_R12_FROM_PTR_RDX CMT_ASM(".byte 0X4C, 0X13, 0X22 # adcq (%rdx), %r12")
#define ADC_R12_FROM_PTR_RDI CMT_ASM(".byte 0X4C, 0X13, 0X27 # adcq (%rdi), %r12")
#define ADC_R12_FROM_PTR_RSI CMT_ASM(".byte 0X4C, 0X13, 0X26 # adcq (%rsi), %r12")
#define ADC_R12_FROM_PTR_RBP CMT_ASM(".byte 0X4C, 0X13, 0X65, 0X00 # adcq (%rbp), %r12")
#define ADC_R12_FROM_PTR_RSP CMT_ASM(".byte 0X4C, 0X13, 0X24, 0X24 # adcq (%rsp), %r12")
#define ADC_R12_FROM_PTR_R8 CMT_ASM(".byte 0X4D, 0X13, 0X20 # adcq (%r8), %r12")
#define ADC_R12_FROM_PTR_R9 CMT_ASM(".byte 0X4D, 0X13, 0X21 # adcq (%r9), %r12")
#define ADC_R12_FROM_PTR_R10 CMT_ASM(".byte 0X4D, 0X13, 0X22 # adcq (%r10), %r12")
#define ADC_R12_FROM_PTR_R11 CMT_ASM(".byte 0X4D, 0X13, 0X23 # adcq (%r11), %r12")
#define ADC_R12_FROM_PTR_R12 CMT_ASM(".byte 0X4D, 0X13, 0X24, 0X24 # adcq (%r12), %r12")
#define ADC_R12_FROM_PTR_R13 CMT_ASM(".byte 0X4D, 0X13, 0X65, 0X00 # adcq (%r13), %r12")
#define ADC_R12_FROM_PTR_R14 CMT_ASM(".byte 0X4D, 0X13, 0X26 # adcq (%r14), %r12")
#define ADC_R12_FROM_PTR_R15 CMT_ASM(".byte 0X4D, 0X13, 0X27 # adcq (%r15), %r12")
#define ADC_R12_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X13, 0X20 # adcq (%eax), %r12")
#define ADC_R12_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X13, 0X23 # adcq (%ebx), %r12")
#define ADC_R12_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X13, 0X21 # adcq (%ecx), %r12")
#define ADC_R12_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X13, 0X22 # adcq (%edx), %r12")
#define ADC_R12_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X13, 0X27 # adcq (%edi), %r12")
#define ADC_R12_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X13, 0X26 # adcq (%esi), %r12")
#define ADC_R12_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X13, 0X65, 0X00 # adcq (%ebp), %r12")
#define ADC_R12_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X13, 0X24, 0X24 # adcq (%esp), %r12")

#define ADC_R13_FROM_PTR_RAX CMT_ASM(".byte 0X4C, 0X13, 0X28 # adcq (%rax), %r13")
#define ADC_R13_FROM_PTR_RBX CMT_ASM(".byte 0X4C, 0X13, 0X2B # adcq (%rbx), %r13")
#define ADC_R13_FROM_PTR_RCX CMT_ASM(".byte 0X4C, 0X13, 0X29 # adcq (%rcx), %r13")
#define ADC_R13_FROM_PTR_RDX CMT_ASM(".byte 0X4C, 0X13, 0X2A # adcq (%rdx), %r13")
#define ADC_R13_FROM_PTR_RDI CMT_ASM(".byte 0X4C, 0X13, 0X2F # adcq (%rdi), %r13")
#define ADC_R13_FROM_PTR_RSI CMT_ASM(".byte 0X4C, 0X13, 0X2E # adcq (%rsi), %r13")
#define ADC_R13_FROM_PTR_RBP CMT_ASM(".byte 0X4C, 0X13, 0X6D, 0X00 # adcq (%rbp), %r13")
#define ADC_R13_FROM_PTR_RSP CMT_ASM(".byte 0X4C, 0X13, 0X2C, 0X24 # adcq (%rsp), %r13")
#define ADC_R13_FROM_PTR_R8 CMT_ASM(".byte 0X4D, 0X13, 0X28 # adcq (%r8), %r13")
#define ADC_R13_FROM_PTR_R9 CMT_ASM(".byte 0X4D, 0X13, 0X29 # adcq (%r9), %r13")
#define ADC_R13_FROM_PTR_R10 CMT_ASM(".byte 0X4D, 0X13, 0X2A # adcq (%r10), %r13")
#define ADC_R13_FROM_PTR_R11 CMT_ASM(".byte 0X4D, 0X13, 0X2B # adcq (%r11), %r13")
#define ADC_R13_FROM_PTR_R12 CMT_ASM(".byte 0X4D, 0X13, 0X2C, 0X24 # adcq (%r12), %r13")
#define ADC_R13_FROM_PTR_R13 CMT_ASM(".byte 0X4D, 0X13, 0X6D, 0X00 # adcq (%r13), %r13")
#define ADC_R13_FROM_PTR_R14 CMT_ASM(".byte 0X4D, 0X13, 0X2E # adcq (%r14), %r13")
#define ADC_R13_FROM_PTR_R15 CMT_ASM(".byte 0X4D, 0X13, 0X2F # adcq (%r15), %r13")
#define ADC_R13_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X13, 0X28 # adcq (%eax), %r13")
#define ADC_R13_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X13, 0X2B # adcq (%ebx), %r13")
#define ADC_R13_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X13, 0X29 # adcq (%ecx), %r13")
#define ADC_R13_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X13, 0X2A # adcq (%edx), %r13")
#define ADC_R13_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X13, 0X2F # adcq (%edi), %r13")
#define ADC_R13_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X13, 0X2E # adcq (%esi), %r13")
#define ADC_R13_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X13, 0X6D, 0X00 # adcq (%ebp), %r13")
#define ADC_R13_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X13, 0X2C, 0X24 # adcq (%esp), %r13")

#define ADC_R14_FROM_PTR_RAX CMT_ASM(".byte 0X4C, 0X13, 0X30 # adcq (%rax), %r14")
#define ADC_R14_FROM_PTR_RBX CMT_ASM(".byte 0X4C, 0X13, 0X33 # adcq (%rbx), %r14")
#define ADC_R14_FROM_PTR_RCX CMT_ASM(".byte 0X4C, 0X13, 0X31 # adcq (%rcx), %r14")
#define ADC_R14_FROM_PTR_RDX CMT_ASM(".byte 0X4C, 0X13, 0X32 # adcq (%rdx), %r14")
#define ADC_R14_FROM_PTR_RDI CMT_ASM(".byte 0X4C, 0X13, 0X37 # adcq (%rdi), %r14")
#define ADC_R14_FROM_PTR_RSI CMT_ASM(".byte 0X4C, 0X13, 0X36 # adcq (%rsi), %r14")
#define ADC_R14_FROM_PTR_RBP CMT_ASM(".byte 0X4C, 0X13, 0X75, 0X00 # adcq (%rbp), %r14")
#define ADC_R14_FROM_PTR_RSP CMT_ASM(".byte 0X4C, 0X13, 0X34, 0X24 # adcq (%rsp), %r14")
#define ADC_R14_FROM_PTR_R8 CMT_ASM(".byte 0X4D, 0X13, 0X30 # adcq (%r8), %r14")
#define ADC_R14_FROM_PTR_R9 CMT_ASM(".byte 0X4D, 0X13, 0X31 # adcq (%r9), %r14")
#define ADC_R14_FROM_PTR_R10 CMT_ASM(".byte 0X4D, 0X13, 0X32 # adcq (%r10), %r14")
#define ADC_R14_FROM_PTR_R11 CMT_ASM(".byte 0X4D, 0X13, 0X33 # adcq (%r11), %r14")
#define ADC_R14_FROM_PTR_R12 CMT_ASM(".byte 0X4D, 0X13, 0X34, 0X24 # adcq (%r12), %r14")
#define ADC_R14_FROM_PTR_R13 CMT_ASM(".byte 0X4D, 0X13, 0X75, 0X00 # adcq (%r13), %r14")
#define ADC_R14_FROM_PTR_R14 CMT_ASM(".byte 0X4D, 0X13, 0X36 # adcq (%r14), %r14")
#define ADC_R14_FROM_PTR_R15 CMT_ASM(".byte 0X4D, 0X13, 0X37 # adcq (%r15), %r14")
#define ADC_R14_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X13, 0X30 # adcq (%eax), %r14")
#define ADC_R14_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X13, 0X33 # adcq (%ebx), %r14")
#define ADC_R14_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X13, 0X31 # adcq (%ecx), %r14")
#define ADC_R14_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X13, 0X32 # adcq (%edx), %r14")
#define ADC_R14_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X13, 0X37 # adcq (%edi), %r14")
#define ADC_R14_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X13, 0X36 # adcq (%esi), %r14")
#define ADC_R14_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X13, 0X75, 0X00 # adcq (%ebp), %r14")
#define ADC_R14_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X13, 0X34, 0X24 # adcq (%esp), %r14")

#define ADC_R15_FROM_PTR_RAX CMT_ASM(".byte 0X4C, 0X13, 0X38 # adcq (%rax), %r15")
#define ADC_R15_FROM_PTR_RBX CMT_ASM(".byte 0X4C, 0X13, 0X3B # adcq (%rbx), %r15")
#define ADC_R15_FROM_PTR_RCX CMT_ASM(".byte 0X4C, 0X13, 0X39 # adcq (%rcx), %r15")
#define ADC_R15_FROM_PTR_RDX CMT_ASM(".byte 0X4C, 0X13, 0X3A # adcq (%rdx), %r15")
#define ADC_R15_FROM_PTR_RDI CMT_ASM(".byte 0X4C, 0X13, 0X3F # adcq (%rdi), %r15")
#define ADC_R15_FROM_PTR_RSI CMT_ASM(".byte 0X4C, 0X13, 0X3E # adcq (%rsi), %r15")
#define ADC_R15_FROM_PTR_RBP CMT_ASM(".byte 0X4C, 0X13, 0X7D, 0X00 # adcq (%rbp), %r15")
#define ADC_R15_FROM_PTR_RSP CMT_ASM(".byte 0X4C, 0X13, 0X3C, 0X24 # adcq (%rsp), %r15")
#define ADC_R15_FROM_PTR_R8 CMT_ASM(".byte 0X4D, 0X13, 0X38 # adcq (%r8), %r15")
#define ADC_R15_FROM_PTR_R9 CMT_ASM(".byte 0X4D, 0X13, 0X39 # adcq (%r9), %r15")
#define ADC_R15_FROM_PTR_R10 CMT_ASM(".byte 0X4D, 0X13, 0X3A # adcq (%r10), %r15")
#define ADC_R15_FROM_PTR_R11 CMT_ASM(".byte 0X4D, 0X13, 0X3B # adcq (%r11), %r15")
#define ADC_R15_FROM_PTR_R12 CMT_ASM(".byte 0X4D, 0X13, 0X3C, 0X24 # adcq (%r12), %r15")
#define ADC_R15_FROM_PTR_R13 CMT_ASM(".byte 0X4D, 0X13, 0X7D, 0X00 # adcq (%r13), %r15")
#define ADC_R15_FROM_PTR_R14 CMT_ASM(".byte 0X4D, 0X13, 0X3E # adcq (%r14), %r15")
#define ADC_R15_FROM_PTR_R15 CMT_ASM(".byte 0X4D, 0X13, 0X3F # adcq (%r15), %r15")
#define ADC_R15_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X13, 0X38 # adcq (%eax), %r15")
#define ADC_R15_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X13, 0X3B # adcq (%ebx), %r15")
#define ADC_R15_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X13, 0X39 # adcq (%ecx), %r15")
#define ADC_R15_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X13, 0X3A # adcq (%edx), %r15")
#define ADC_R15_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X13, 0X3F # adcq (%edi), %r15")
#define ADC_R15_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X13, 0X3E # adcq (%esi), %r15")
#define ADC_R15_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X13, 0X7D, 0X00 # adcq (%ebp), %r15")
#define ADC_R15_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X13, 0X3C, 0X24 # adcq (%esp), %r15")

#define ADC_RAX_TO_PTR_RAX CMT_ASM(".byte 0X48, 0X11, 0X00 # adcq %rax, (%rax)")
#define ADC_RAX_TO_PTR_RBX CMT_ASM(".byte 0X48, 0X11, 0X03 # adcq %rax, (%rbx)")
#define ADC_RAX_TO_PTR_RCX CMT_ASM(".byte 0X48, 0X11, 0X01 # adcq %rax, (%rcx)")
#define ADC_RAX_TO_PTR_RDX CMT_ASM(".byte 0X48, 0X11, 0X02 # adcq %rax, (%rdx)")
#define ADC_RAX_TO_PTR_RDI CMT_ASM(".byte 0X48, 0X11, 0X07 # adcq %rax, (%rdi)")
#define ADC_RAX_TO_PTR_RSI CMT_ASM(".byte 0X48, 0X11, 0X06 # adcq %rax, (%rsi)")
#define ADC_RAX_TO_PTR_RBP CMT_ASM(".byte 0X48, 0X11, 0X45, 0X00 # adcq %rax, (%rbp)")
#define ADC_RAX_TO_PTR_RSP CMT_ASM(".byte 0X48, 0X11, 0X04, 0X24 # adcq %rax, (%rsp)")
#define ADC_RAX_TO_PTR_R8 CMT_ASM(".byte 0X49, 0X11, 0X00 # adcq %rax, (%r8)")
#define ADC_RAX_TO_PTR_R9 CMT_ASM(".byte 0X49, 0X11, 0X01 # adcq %rax, (%r9)")
#define ADC_RAX_TO_PTR_R10 CMT_ASM(".byte 0X49, 0X11, 0X02 # adcq %rax, (%r10)")
#define ADC_RAX_TO_PTR_R11 CMT_ASM(".byte 0X49, 0X11, 0X03 # adcq %rax, (%r11)")
#define ADC_RAX_TO_PTR_R12 CMT_ASM(".byte 0X49, 0X11, 0X04, 0X24 # adcq %rax, (%r12)")
#define ADC_RAX_TO_PTR_R13 CMT_ASM(".byte 0X49, 0X11, 0X45, 0X00 # adcq %rax, (%r13)")
#define ADC_RAX_TO_PTR_R14 CMT_ASM(".byte 0X49, 0X11, 0X06 # adcq %rax, (%r14)")
#define ADC_RAX_TO_PTR_R15 CMT_ASM(".byte 0X49, 0X11, 0X07 # adcq %rax, (%r15)")
#define ADC_RAX_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X11, 0X00 # adcq %rax, (%eax)")
#define ADC_RAX_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X11, 0X03 # adcq %rax, (%ebx)")
#define ADC_RAX_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X11, 0X01 # adcq %rax, (%ecx)")
#define ADC_RAX_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X11, 0X02 # adcq %rax, (%edx)")
#define ADC_RAX_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X11, 0X07 # adcq %rax, (%edi)")
#define ADC_RAX_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X11, 0X06 # adcq %rax, (%esi)")
#define ADC_RAX_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X11, 0X45, 0X00 # adcq %rax, (%ebp)")
#define ADC_RAX_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X11, 0X04, 0X24 # adcq %rax, (%esp)")

#define ADC_RBX_TO_PTR_RAX CMT_ASM(".byte 0X48, 0X11, 0X18 # adcq %rbx, (%rax)")
#define ADC_RBX_TO_PTR_RBX CMT_ASM(".byte 0X48, 0X11, 0X1B # adcq %rbx, (%rbx)")
#define ADC_RBX_TO_PTR_RCX CMT_ASM(".byte 0X48, 0X11, 0X19 # adcq %rbx, (%rcx)")
#define ADC_RBX_TO_PTR_RDX CMT_ASM(".byte 0X48, 0X11, 0X1A # adcq %rbx, (%rdx)")
#define ADC_RBX_TO_PTR_RDI CMT_ASM(".byte 0X48, 0X11, 0X1F # adcq %rbx, (%rdi)")
#define ADC_RBX_TO_PTR_RSI CMT_ASM(".byte 0X48, 0X11, 0X1E # adcq %rbx, (%rsi)")
#define ADC_RBX_TO_PTR_RBP CMT_ASM(".byte 0X48, 0X11, 0X5D, 0X00 # adcq %rbx, (%rbp)")
#define ADC_RBX_TO_PTR_RSP CMT_ASM(".byte 0X48, 0X11, 0X1C, 0X24 # adcq %rbx, (%rsp)")
#define ADC_RBX_TO_PTR_R8 CMT_ASM(".byte 0X49, 0X11, 0X18 # adcq %rbx, (%r8)")
#define ADC_RBX_TO_PTR_R9 CMT_ASM(".byte 0X49, 0X11, 0X19 # adcq %rbx, (%r9)")
#define ADC_RBX_TO_PTR_R10 CMT_ASM(".byte 0X49, 0X11, 0X1A # adcq %rbx, (%r10)")
#define ADC_RBX_TO_PTR_R11 CMT_ASM(".byte 0X49, 0X11, 0X1B # adcq %rbx, (%r11)")
#define ADC_RBX_TO_PTR_R12 CMT_ASM(".byte 0X49, 0X11, 0X1C, 0X24 # adcq %rbx, (%r12)")
#define ADC_RBX_TO_PTR_R13 CMT_ASM(".byte 0X49, 0X11, 0X5D, 0X00 # adcq %rbx, (%r13)")
#define ADC_RBX_TO_PTR_R14 CMT_ASM(".byte 0X49, 0X11, 0X1E # adcq %rbx, (%r14)")
#define ADC_RBX_TO_PTR_R15 CMT_ASM(".byte 0X49, 0X11, 0X1F # adcq %rbx, (%r15)")
#define ADC_RBX_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X11, 0X18 # adcq %rbx, (%eax)")
#define ADC_RBX_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X11, 0X1B # adcq %rbx, (%ebx)")
#define ADC_RBX_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X11, 0X19 # adcq %rbx, (%ecx)")
#define ADC_RBX_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X11, 0X1A # adcq %rbx, (%edx)")
#define ADC_RBX_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X11, 0X1F # adcq %rbx, (%edi)")
#define ADC_RBX_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X11, 0X1E # adcq %rbx, (%esi)")
#define ADC_RBX_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X11, 0X5D, 0X00 # adcq %rbx, (%ebp)")
#define ADC_RBX_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X11, 0X1C, 0X24 # adcq %rbx, (%esp)")

#define ADC_RCX_TO_PTR_RAX CMT_ASM(".byte 0X48, 0X11, 0X08 # adcq %rcx, (%rax)")
#define ADC_RCX_TO_PTR_RBX CMT_ASM(".byte 0X48, 0X11, 0X0B # adcq %rcx, (%rbx)")
#define ADC_RCX_TO_PTR_RCX CMT_ASM(".byte 0X48, 0X11, 0X09 # adcq %rcx, (%rcx)")
#define ADC_RCX_TO_PTR_RDX CMT_ASM(".byte 0X48, 0X11, 0X0A # adcq %rcx, (%rdx)")
#define ADC_RCX_TO_PTR_RDI CMT_ASM(".byte 0X48, 0X11, 0X0F # adcq %rcx, (%rdi)")
#define ADC_RCX_TO_PTR_RSI CMT_ASM(".byte 0X48, 0X11, 0X0E # adcq %rcx, (%rsi)")
#define ADC_RCX_TO_PTR_RBP CMT_ASM(".byte 0X48, 0X11, 0X4D, 0X00 # adcq %rcx, (%rbp)")
#define ADC_RCX_TO_PTR_RSP CMT_ASM(".byte 0X48, 0X11, 0X0C, 0X24 # adcq %rcx, (%rsp)")
#define ADC_RCX_TO_PTR_R8 CMT_ASM(".byte 0X49, 0X11, 0X08 # adcq %rcx, (%r8)")
#define ADC_RCX_TO_PTR_R9 CMT_ASM(".byte 0X49, 0X11, 0X09 # adcq %rcx, (%r9)")
#define ADC_RCX_TO_PTR_R10 CMT_ASM(".byte 0X49, 0X11, 0X0A # adcq %rcx, (%r10)")
#define ADC_RCX_TO_PTR_R11 CMT_ASM(".byte 0X49, 0X11, 0X0B # adcq %rcx, (%r11)")
#define ADC_RCX_TO_PTR_R12 CMT_ASM(".byte 0X49, 0X11, 0X0C, 0X24 # adcq %rcx, (%r12)")
#define ADC_RCX_TO_PTR_R13 CMT_ASM(".byte 0X49, 0X11, 0X4D, 0X00 # adcq %rcx, (%r13)")
#define ADC_RCX_TO_PTR_R14 CMT_ASM(".byte 0X49, 0X11, 0X0E # adcq %rcx, (%r14)")
#define ADC_RCX_TO_PTR_R15 CMT_ASM(".byte 0X49, 0X11, 0X0F # adcq %rcx, (%r15)")
#define ADC_RCX_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X11, 0X08 # adcq %rcx, (%eax)")
#define ADC_RCX_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X11, 0X0B # adcq %rcx, (%ebx)")
#define ADC_RCX_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X11, 0X09 # adcq %rcx, (%ecx)")
#define ADC_RCX_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X11, 0X0A # adcq %rcx, (%edx)")
#define ADC_RCX_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X11, 0X0F # adcq %rcx, (%edi)")
#define ADC_RCX_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X11, 0X0E # adcq %rcx, (%esi)")
#define ADC_RCX_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X11, 0X4D, 0X00 # adcq %rcx, (%ebp)")
#define ADC_RCX_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X11, 0X0C, 0X24 # adcq %rcx, (%esp)")

#define ADC_RDX_TO_PTR_RAX CMT_ASM(".byte 0X48, 0X11, 0X10 # adcq %rdx, (%rax)")
#define ADC_RDX_TO_PTR_RBX CMT_ASM(".byte 0X48, 0X11, 0X13 # adcq %rdx, (%rbx)")
#define ADC_RDX_TO_PTR_RCX CMT_ASM(".byte 0X48, 0X11, 0X11 # adcq %rdx, (%rcx)")
#define ADC_RDX_TO_PTR_RDX CMT_ASM(".byte 0X48, 0X11, 0X12 # adcq %rdx, (%rdx)")
#define ADC_RDX_TO_PTR_RDI CMT_ASM(".byte 0X48, 0X11, 0X17 # adcq %rdx, (%rdi)")
#define ADC_RDX_TO_PTR_RSI CMT_ASM(".byte 0X48, 0X11, 0X16 # adcq %rdx, (%rsi)")
#define ADC_RDX_TO_PTR_RBP CMT_ASM(".byte 0X48, 0X11, 0X55, 0X00 # adcq %rdx, (%rbp)")
#define ADC_RDX_TO_PTR_RSP CMT_ASM(".byte 0X48, 0X11, 0X14, 0X24 # adcq %rdx, (%rsp)")
#define ADC_RDX_TO_PTR_R8 CMT_ASM(".byte 0X49, 0X11, 0X10 # adcq %rdx, (%r8)")
#define ADC_RDX_TO_PTR_R9 CMT_ASM(".byte 0X49, 0X11, 0X11 # adcq %rdx, (%r9)")
#define ADC_RDX_TO_PTR_R10 CMT_ASM(".byte 0X49, 0X11, 0X12 # adcq %rdx, (%r10)")
#define ADC_RDX_TO_PTR_R11 CMT_ASM(".byte 0X49, 0X11, 0X13 # adcq %rdx, (%r11)")
#define ADC_RDX_TO_PTR_R12 CMT_ASM(".byte 0X49, 0X11, 0X14, 0X24 # adcq %rdx, (%r12)")
#define ADC_RDX_TO_PTR_R13 CMT_ASM(".byte 0X49, 0X11, 0X55, 0X00 # adcq %rdx, (%r13)")
#define ADC_RDX_TO_PTR_R14 CMT_ASM(".byte 0X49, 0X11, 0X16 # adcq %rdx, (%r14)")
#define ADC_RDX_TO_PTR_R15 CMT_ASM(".byte 0X49, 0X11, 0X17 # adcq %rdx, (%r15)")
#define ADC_RDX_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X11, 0X10 # adcq %rdx, (%eax)")
#define ADC_RDX_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X11, 0X13 # adcq %rdx, (%ebx)")
#define ADC_RDX_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X11, 0X11 # adcq %rdx, (%ecx)")
#define ADC_RDX_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X11, 0X12 # adcq %rdx, (%edx)")
#define ADC_RDX_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X11, 0X17 # adcq %rdx, (%edi)")
#define ADC_RDX_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X11, 0X16 # adcq %rdx, (%esi)")
#define ADC_RDX_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X11, 0X55, 0X00 # adcq %rdx, (%ebp)")
#define ADC_RDX_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X11, 0X14, 0X24 # adcq %rdx, (%esp)")

#define ADC_RDI_TO_PTR_RAX CMT_ASM(".byte 0X48, 0X11, 0X38 # adcq %rdi, (%rax)")
#define ADC_RDI_TO_PTR_RBX CMT_ASM(".byte 0X48, 0X11, 0X3B # adcq %rdi, (%rbx)")
#define ADC_RDI_TO_PTR_RCX CMT_ASM(".byte 0X48, 0X11, 0X39 # adcq %rdi, (%rcx)")
#define ADC_RDI_TO_PTR_RDX CMT_ASM(".byte 0X48, 0X11, 0X3A # adcq %rdi, (%rdx)")
#define ADC_RDI_TO_PTR_RDI CMT_ASM(".byte 0X48, 0X11, 0X3F # adcq %rdi, (%rdi)")
#define ADC_RDI_TO_PTR_RSI CMT_ASM(".byte 0X48, 0X11, 0X3E # adcq %rdi, (%rsi)")
#define ADC_RDI_TO_PTR_RBP CMT_ASM(".byte 0X48, 0X11, 0X7D, 0X00 # adcq %rdi, (%rbp)")
#define ADC_RDI_TO_PTR_RSP CMT_ASM(".byte 0X48, 0X11, 0X3C, 0X24 # adcq %rdi, (%rsp)")
#define ADC_RDI_TO_PTR_R8 CMT_ASM(".byte 0X49, 0X11, 0X38 # adcq %rdi, (%r8)")
#define ADC_RDI_TO_PTR_R9 CMT_ASM(".byte 0X49, 0X11, 0X39 # adcq %rdi, (%r9)")
#define ADC_RDI_TO_PTR_R10 CMT_ASM(".byte 0X49, 0X11, 0X3A # adcq %rdi, (%r10)")
#define ADC_RDI_TO_PTR_R11 CMT_ASM(".byte 0X49, 0X11, 0X3B # adcq %rdi, (%r11)")
#define ADC_RDI_TO_PTR_R12 CMT_ASM(".byte 0X49, 0X11, 0X3C, 0X24 # adcq %rdi, (%r12)")
#define ADC_RDI_TO_PTR_R13 CMT_ASM(".byte 0X49, 0X11, 0X7D, 0X00 # adcq %rdi, (%r13)")
#define ADC_RDI_TO_PTR_R14 CMT_ASM(".byte 0X49, 0X11, 0X3E # adcq %rdi, (%r14)")
#define ADC_RDI_TO_PTR_R15 CMT_ASM(".byte 0X49, 0X11, 0X3F # adcq %rdi, (%r15)")
#define ADC_RDI_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X11, 0X38 # adcq %rdi, (%eax)")
#define ADC_RDI_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X11, 0X3B # adcq %rdi, (%ebx)")
#define ADC_RDI_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X11, 0X39 # adcq %rdi, (%ecx)")
#define ADC_RDI_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X11, 0X3A # adcq %rdi, (%edx)")
#define ADC_RDI_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X11, 0X3F # adcq %rdi, (%edi)")
#define ADC_RDI_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X11, 0X3E # adcq %rdi, (%esi)")
#define ADC_RDI_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X11, 0X7D, 0X00 # adcq %rdi, (%ebp)")
#define ADC_RDI_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X11, 0X3C, 0X24 # adcq %rdi, (%esp)")

#define ADC_RSI_TO_PTR_RAX CMT_ASM(".byte 0X48, 0X11, 0X30 # adcq %rsi, (%rax)")
#define ADC_RSI_TO_PTR_RBX CMT_ASM(".byte 0X48, 0X11, 0X33 # adcq %rsi, (%rbx)")
#define ADC_RSI_TO_PTR_RCX CMT_ASM(".byte 0X48, 0X11, 0X31 # adcq %rsi, (%rcx)")
#define ADC_RSI_TO_PTR_RDX CMT_ASM(".byte 0X48, 0X11, 0X32 # adcq %rsi, (%rdx)")
#define ADC_RSI_TO_PTR_RDI CMT_ASM(".byte 0X48, 0X11, 0X37 # adcq %rsi, (%rdi)")
#define ADC_RSI_TO_PTR_RSI CMT_ASM(".byte 0X48, 0X11, 0X36 # adcq %rsi, (%rsi)")
#define ADC_RSI_TO_PTR_RBP CMT_ASM(".byte 0X48, 0X11, 0X75, 0X00 # adcq %rsi, (%rbp)")
#define ADC_RSI_TO_PTR_RSP CMT_ASM(".byte 0X48, 0X11, 0X34, 0X24 # adcq %rsi, (%rsp)")
#define ADC_RSI_TO_PTR_R8 CMT_ASM(".byte 0X49, 0X11, 0X30 # adcq %rsi, (%r8)")
#define ADC_RSI_TO_PTR_R9 CMT_ASM(".byte 0X49, 0X11, 0X31 # adcq %rsi, (%r9)")
#define ADC_RSI_TO_PTR_R10 CMT_ASM(".byte 0X49, 0X11, 0X32 # adcq %rsi, (%r10)")
#define ADC_RSI_TO_PTR_R11 CMT_ASM(".byte 0X49, 0X11, 0X33 # adcq %rsi, (%r11)")
#define ADC_RSI_TO_PTR_R12 CMT_ASM(".byte 0X49, 0X11, 0X34, 0X24 # adcq %rsi, (%r12)")
#define ADC_RSI_TO_PTR_R13 CMT_ASM(".byte 0X49, 0X11, 0X75, 0X00 # adcq %rsi, (%r13)")
#define ADC_RSI_TO_PTR_R14 CMT_ASM(".byte 0X49, 0X11, 0X36 # adcq %rsi, (%r14)")
#define ADC_RSI_TO_PTR_R15 CMT_ASM(".byte 0X49, 0X11, 0X37 # adcq %rsi, (%r15)")
#define ADC_RSI_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X11, 0X30 # adcq %rsi, (%eax)")
#define ADC_RSI_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X11, 0X33 # adcq %rsi, (%ebx)")
#define ADC_RSI_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X11, 0X31 # adcq %rsi, (%ecx)")
#define ADC_RSI_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X11, 0X32 # adcq %rsi, (%edx)")
#define ADC_RSI_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X11, 0X37 # adcq %rsi, (%edi)")
#define ADC_RSI_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X11, 0X36 # adcq %rsi, (%esi)")
#define ADC_RSI_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X11, 0X75, 0X00 # adcq %rsi, (%ebp)")
#define ADC_RSI_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X11, 0X34, 0X24 # adcq %rsi, (%esp)")

#define ADC_RBP_TO_PTR_RAX CMT_ASM(".byte 0X48, 0X11, 0X28 # adcq %rbp, (%rax)")
#define ADC_RBP_TO_PTR_RBX CMT_ASM(".byte 0X48, 0X11, 0X2B # adcq %rbp, (%rbx)")
#define ADC_RBP_TO_PTR_RCX CMT_ASM(".byte 0X48, 0X11, 0X29 # adcq %rbp, (%rcx)")
#define ADC_RBP_TO_PTR_RDX CMT_ASM(".byte 0X48, 0X11, 0X2A # adcq %rbp, (%rdx)")
#define ADC_RBP_TO_PTR_RDI CMT_ASM(".byte 0X48, 0X11, 0X2F # adcq %rbp, (%rdi)")
#define ADC_RBP_TO_PTR_RSI CMT_ASM(".byte 0X48, 0X11, 0X2E # adcq %rbp, (%rsi)")
#define ADC_RBP_TO_PTR_RBP CMT_ASM(".byte 0X48, 0X11, 0X6D, 0X00 # adcq %rbp, (%rbp)")
#define ADC_RBP_TO_PTR_RSP CMT_ASM(".byte 0X48, 0X11, 0X2C, 0X24 # adcq %rbp, (%rsp)")
#define ADC_RBP_TO_PTR_R8 CMT_ASM(".byte 0X49, 0X11, 0X28 # adcq %rbp, (%r8)")
#define ADC_RBP_TO_PTR_R9 CMT_ASM(".byte 0X49, 0X11, 0X29 # adcq %rbp, (%r9)")
#define ADC_RBP_TO_PTR_R10 CMT_ASM(".byte 0X49, 0X11, 0X2A # adcq %rbp, (%r10)")
#define ADC_RBP_TO_PTR_R11 CMT_ASM(".byte 0X49, 0X11, 0X2B # adcq %rbp, (%r11)")
#define ADC_RBP_TO_PTR_R12 CMT_ASM(".byte 0X49, 0X11, 0X2C, 0X24 # adcq %rbp, (%r12)")
#define ADC_RBP_TO_PTR_R13 CMT_ASM(".byte 0X49, 0X11, 0X6D, 0X00 # adcq %rbp, (%r13)")
#define ADC_RBP_TO_PTR_R14 CMT_ASM(".byte 0X49, 0X11, 0X2E # adcq %rbp, (%r14)")
#define ADC_RBP_TO_PTR_R15 CMT_ASM(".byte 0X49, 0X11, 0X2F # adcq %rbp, (%r15)")
#define ADC_RBP_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X11, 0X28 # adcq %rbp, (%eax)")
#define ADC_RBP_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X11, 0X2B # adcq %rbp, (%ebx)")
#define ADC_RBP_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X11, 0X29 # adcq %rbp, (%ecx)")
#define ADC_RBP_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X11, 0X2A # adcq %rbp, (%edx)")
#define ADC_RBP_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X11, 0X2F # adcq %rbp, (%edi)")
#define ADC_RBP_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X11, 0X2E # adcq %rbp, (%esi)")
#define ADC_RBP_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X11, 0X6D, 0X00 # adcq %rbp, (%ebp)")
#define ADC_RBP_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X11, 0X2C, 0X24 # adcq %rbp, (%esp)")

#define ADC_RSP_TO_PTR_RAX CMT_ASM(".byte 0X48, 0X11, 0X20 # adcq %rsp, (%rax)")
#define ADC_RSP_TO_PTR_RBX CMT_ASM(".byte 0X48, 0X11, 0X23 # adcq %rsp, (%rbx)")
#define ADC_RSP_TO_PTR_RCX CMT_ASM(".byte 0X48, 0X11, 0X21 # adcq %rsp, (%rcx)")
#define ADC_RSP_TO_PTR_RDX CMT_ASM(".byte 0X48, 0X11, 0X22 # adcq %rsp, (%rdx)")
#define ADC_RSP_TO_PTR_RDI CMT_ASM(".byte 0X48, 0X11, 0X27 # adcq %rsp, (%rdi)")
#define ADC_RSP_TO_PTR_RSI CMT_ASM(".byte 0X48, 0X11, 0X26 # adcq %rsp, (%rsi)")
#define ADC_RSP_TO_PTR_RBP CMT_ASM(".byte 0X48, 0X11, 0X65, 0X00 # adcq %rsp, (%rbp)")
#define ADC_RSP_TO_PTR_RSP CMT_ASM(".byte 0X48, 0X11, 0X24, 0X24 # adcq %rsp, (%rsp)")
#define ADC_RSP_TO_PTR_R8 CMT_ASM(".byte 0X49, 0X11, 0X20 # adcq %rsp, (%r8)")
#define ADC_RSP_TO_PTR_R9 CMT_ASM(".byte 0X49, 0X11, 0X21 # adcq %rsp, (%r9)")
#define ADC_RSP_TO_PTR_R10 CMT_ASM(".byte 0X49, 0X11, 0X22 # adcq %rsp, (%r10)")
#define ADC_RSP_TO_PTR_R11 CMT_ASM(".byte 0X49, 0X11, 0X23 # adcq %rsp, (%r11)")
#define ADC_RSP_TO_PTR_R12 CMT_ASM(".byte 0X49, 0X11, 0X24, 0X24 # adcq %rsp, (%r12)")
#define ADC_RSP_TO_PTR_R13 CMT_ASM(".byte 0X49, 0X11, 0X65, 0X00 # adcq %rsp, (%r13)")
#define ADC_RSP_TO_PTR_R14 CMT_ASM(".byte 0X49, 0X11, 0X26 # adcq %rsp, (%r14)")
#define ADC_RSP_TO_PTR_R15 CMT_ASM(".byte 0X49, 0X11, 0X27 # adcq %rsp, (%r15)")
#define ADC_RSP_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X48, 0X11, 0X20 # adcq %rsp, (%eax)")
#define ADC_RSP_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X48, 0X11, 0X23 # adcq %rsp, (%ebx)")
#define ADC_RSP_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X48, 0X11, 0X21 # adcq %rsp, (%ecx)")
#define ADC_RSP_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X48, 0X11, 0X22 # adcq %rsp, (%edx)")
#define ADC_RSP_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X48, 0X11, 0X27 # adcq %rsp, (%edi)")
#define ADC_RSP_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X48, 0X11, 0X26 # adcq %rsp, (%esi)")
#define ADC_RSP_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X48, 0X11, 0X65, 0X00 # adcq %rsp, (%ebp)")
#define ADC_RSP_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X48, 0X11, 0X24, 0X24 # adcq %rsp, (%esp)")

#define ADC_R8_TO_PTR_RAX CMT_ASM(".byte 0X4C, 0X11, 0X00 # adcq %r8, (%rax)")
#define ADC_R8_TO_PTR_RBX CMT_ASM(".byte 0X4C, 0X11, 0X03 # adcq %r8, (%rbx)")
#define ADC_R8_TO_PTR_RCX CMT_ASM(".byte 0X4C, 0X11, 0X01 # adcq %r8, (%rcx)")
#define ADC_R8_TO_PTR_RDX CMT_ASM(".byte 0X4C, 0X11, 0X02 # adcq %r8, (%rdx)")
#define ADC_R8_TO_PTR_RDI CMT_ASM(".byte 0X4C, 0X11, 0X07 # adcq %r8, (%rdi)")
#define ADC_R8_TO_PTR_RSI CMT_ASM(".byte 0X4C, 0X11, 0X06 # adcq %r8, (%rsi)")
#define ADC_R8_TO_PTR_RBP CMT_ASM(".byte 0X4C, 0X11, 0X45, 0X00 # adcq %r8, (%rbp)")
#define ADC_R8_TO_PTR_RSP CMT_ASM(".byte 0X4C, 0X11, 0X04, 0X24 # adcq %r8, (%rsp)")
#define ADC_R8_TO_PTR_R8 CMT_ASM(".byte 0X4D, 0X11, 0X00 # adcq %r8, (%r8)")
#define ADC_R8_TO_PTR_R9 CMT_ASM(".byte 0X4D, 0X11, 0X01 # adcq %r8, (%r9)")
#define ADC_R8_TO_PTR_R10 CMT_ASM(".byte 0X4D, 0X11, 0X02 # adcq %r8, (%r10)")
#define ADC_R8_TO_PTR_R11 CMT_ASM(".byte 0X4D, 0X11, 0X03 # adcq %r8, (%r11)")
#define ADC_R8_TO_PTR_R12 CMT_ASM(".byte 0X4D, 0X11, 0X04, 0X24 # adcq %r8, (%r12)")
#define ADC_R8_TO_PTR_R13 CMT_ASM(".byte 0X4D, 0X11, 0X45, 0X00 # adcq %r8, (%r13)")
#define ADC_R8_TO_PTR_R14 CMT_ASM(".byte 0X4D, 0X11, 0X06 # adcq %r8, (%r14)")
#define ADC_R8_TO_PTR_R15 CMT_ASM(".byte 0X4D, 0X11, 0X07 # adcq %r8, (%r15)")
#define ADC_R8_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X11, 0X00 # adcq %r8, (%eax)")
#define ADC_R8_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X11, 0X03 # adcq %r8, (%ebx)")
#define ADC_R8_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X11, 0X01 # adcq %r8, (%ecx)")
#define ADC_R8_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X11, 0X02 # adcq %r8, (%edx)")
#define ADC_R8_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X11, 0X07 # adcq %r8, (%edi)")
#define ADC_R8_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X11, 0X06 # adcq %r8, (%esi)")
#define ADC_R8_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X11, 0X45, 0X00 # adcq %r8, (%ebp)")
#define ADC_R8_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X11, 0X04, 0X24 # adcq %r8, (%esp)")

#define ADC_R9_TO_PTR_RAX CMT_ASM(".byte 0X4C, 0X11, 0X08 # adcq %r9, (%rax)")
#define ADC_R9_TO_PTR_RBX CMT_ASM(".byte 0X4C, 0X11, 0X0B # adcq %r9, (%rbx)")
#define ADC_R9_TO_PTR_RCX CMT_ASM(".byte 0X4C, 0X11, 0X09 # adcq %r9, (%rcx)")
#define ADC_R9_TO_PTR_RDX CMT_ASM(".byte 0X4C, 0X11, 0X0A # adcq %r9, (%rdx)")
#define ADC_R9_TO_PTR_RDI CMT_ASM(".byte 0X4C, 0X11, 0X0F # adcq %r9, (%rdi)")
#define ADC_R9_TO_PTR_RSI CMT_ASM(".byte 0X4C, 0X11, 0X0E # adcq %r9, (%rsi)")
#define ADC_R9_TO_PTR_RBP CMT_ASM(".byte 0X4C, 0X11, 0X4D, 0X00 # adcq %r9, (%rbp)")
#define ADC_R9_TO_PTR_RSP CMT_ASM(".byte 0X4C, 0X11, 0X0C, 0X24 # adcq %r9, (%rsp)")
#define ADC_R9_TO_PTR_R8 CMT_ASM(".byte 0X4D, 0X11, 0X08 # adcq %r9, (%r8)")
#define ADC_R9_TO_PTR_R9 CMT_ASM(".byte 0X4D, 0X11, 0X09 # adcq %r9, (%r9)")
#define ADC_R9_TO_PTR_R10 CMT_ASM(".byte 0X4D, 0X11, 0X0A # adcq %r9, (%r10)")
#define ADC_R9_TO_PTR_R11 CMT_ASM(".byte 0X4D, 0X11, 0X0B # adcq %r9, (%r11)")
#define ADC_R9_TO_PTR_R12 CMT_ASM(".byte 0X4D, 0X11, 0X0C, 0X24 # adcq %r9, (%r12)")
#define ADC_R9_TO_PTR_R13 CMT_ASM(".byte 0X4D, 0X11, 0X4D, 0X00 # adcq %r9, (%r13)")
#define ADC_R9_TO_PTR_R14 CMT_ASM(".byte 0X4D, 0X11, 0X0E # adcq %r9, (%r14)")
#define ADC_R9_TO_PTR_R15 CMT_ASM(".byte 0X4D, 0X11, 0X0F # adcq %r9, (%r15)")
#define ADC_R9_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X11, 0X08 # adcq %r9, (%eax)")
#define ADC_R9_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X11, 0X0B # adcq %r9, (%ebx)")
#define ADC_R9_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X11, 0X09 # adcq %r9, (%ecx)")
#define ADC_R9_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X11, 0X0A # adcq %r9, (%edx)")
#define ADC_R9_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X11, 0X0F # adcq %r9, (%edi)")
#define ADC_R9_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X11, 0X0E # adcq %r9, (%esi)")
#define ADC_R9_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X11, 0X4D, 0X00 # adcq %r9, (%ebp)")
#define ADC_R9_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X11, 0X0C, 0X24 # adcq %r9, (%esp)")

#define ADC_R10_TO_PTR_RAX CMT_ASM(".byte 0X4C, 0X11, 0X10 # adcq %r10, (%rax)")
#define ADC_R10_TO_PTR_RBX CMT_ASM(".byte 0X4C, 0X11, 0X13 # adcq %r10, (%rbx)")
#define ADC_R10_TO_PTR_RCX CMT_ASM(".byte 0X4C, 0X11, 0X11 # adcq %r10, (%rcx)")
#define ADC_R10_TO_PTR_RDX CMT_ASM(".byte 0X4C, 0X11, 0X12 # adcq %r10, (%rdx)")
#define ADC_R10_TO_PTR_RDI CMT_ASM(".byte 0X4C, 0X11, 0X17 # adcq %r10, (%rdi)")
#define ADC_R10_TO_PTR_RSI CMT_ASM(".byte 0X4C, 0X11, 0X16 # adcq %r10, (%rsi)")
#define ADC_R10_TO_PTR_RBP CMT_ASM(".byte 0X4C, 0X11, 0X55, 0X00 # adcq %r10, (%rbp)")
#define ADC_R10_TO_PTR_RSP CMT_ASM(".byte 0X4C, 0X11, 0X14, 0X24 # adcq %r10, (%rsp)")
#define ADC_R10_TO_PTR_R8 CMT_ASM(".byte 0X4D, 0X11, 0X10 # adcq %r10, (%r8)")
#define ADC_R10_TO_PTR_R9 CMT_ASM(".byte 0X4D, 0X11, 0X11 # adcq %r10, (%r9)")
#define ADC_R10_TO_PTR_R10 CMT_ASM(".byte 0X4D, 0X11, 0X12 # adcq %r10, (%r10)")
#define ADC_R10_TO_PTR_R11 CMT_ASM(".byte 0X4D, 0X11, 0X13 # adcq %r10, (%r11)")
#define ADC_R10_TO_PTR_R12 CMT_ASM(".byte 0X4D, 0X11, 0X14, 0X24 # adcq %r10, (%r12)")
#define ADC_R10_TO_PTR_R13 CMT_ASM(".byte 0X4D, 0X11, 0X55, 0X00 # adcq %r10, (%r13)")
#define ADC_R10_TO_PTR_R14 CMT_ASM(".byte 0X4D, 0X11, 0X16 # adcq %r10, (%r14)")
#define ADC_R10_TO_PTR_R15 CMT_ASM(".byte 0X4D, 0X11, 0X17 # adcq %r10, (%r15)")
#define ADC_R10_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X11, 0X10 # adcq %r10, (%eax)")
#define ADC_R10_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X11, 0X13 # adcq %r10, (%ebx)")
#define ADC_R10_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X11, 0X11 # adcq %r10, (%ecx)")
#define ADC_R10_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X11, 0X12 # adcq %r10, (%edx)")
#define ADC_R10_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X11, 0X17 # adcq %r10, (%edi)")
#define ADC_R10_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X11, 0X16 # adcq %r10, (%esi)")
#define ADC_R10_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X11, 0X55, 0X00 # adcq %r10, (%ebp)")
#define ADC_R10_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X11, 0X14, 0X24 # adcq %r10, (%esp)")

#define ADC_R11_TO_PTR_RAX CMT_ASM(".byte 0X4C, 0X11, 0X18 # adcq %r11, (%rax)")
#define ADC_R11_TO_PTR_RBX CMT_ASM(".byte 0X4C, 0X11, 0X1B # adcq %r11, (%rbx)")
#define ADC_R11_TO_PTR_RCX CMT_ASM(".byte 0X4C, 0X11, 0X19 # adcq %r11, (%rcx)")
#define ADC_R11_TO_PTR_RDX CMT_ASM(".byte 0X4C, 0X11, 0X1A # adcq %r11, (%rdx)")
#define ADC_R11_TO_PTR_RDI CMT_ASM(".byte 0X4C, 0X11, 0X1F # adcq %r11, (%rdi)")
#define ADC_R11_TO_PTR_RSI CMT_ASM(".byte 0X4C, 0X11, 0X1E # adcq %r11, (%rsi)")
#define ADC_R11_TO_PTR_RBP CMT_ASM(".byte 0X4C, 0X11, 0X5D, 0X00 # adcq %r11, (%rbp)")
#define ADC_R11_TO_PTR_RSP CMT_ASM(".byte 0X4C, 0X11, 0X1C, 0X24 # adcq %r11, (%rsp)")
#define ADC_R11_TO_PTR_R8 CMT_ASM(".byte 0X4D, 0X11, 0X18 # adcq %r11, (%r8)")
#define ADC_R11_TO_PTR_R9 CMT_ASM(".byte 0X4D, 0X11, 0X19 # adcq %r11, (%r9)")
#define ADC_R11_TO_PTR_R10 CMT_ASM(".byte 0X4D, 0X11, 0X1A # adcq %r11, (%r10)")
#define ADC_R11_TO_PTR_R11 CMT_ASM(".byte 0X4D, 0X11, 0X1B # adcq %r11, (%r11)")
#define ADC_R11_TO_PTR_R12 CMT_ASM(".byte 0X4D, 0X11, 0X1C, 0X24 # adcq %r11, (%r12)")
#define ADC_R11_TO_PTR_R13 CMT_ASM(".byte 0X4D, 0X11, 0X5D, 0X00 # adcq %r11, (%r13)")
#define ADC_R11_TO_PTR_R14 CMT_ASM(".byte 0X4D, 0X11, 0X1E # adcq %r11, (%r14)")
#define ADC_R11_TO_PTR_R15 CMT_ASM(".byte 0X4D, 0X11, 0X1F # adcq %r11, (%r15)")
#define ADC_R11_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X11, 0X18 # adcq %r11, (%eax)")
#define ADC_R11_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X11, 0X1B # adcq %r11, (%ebx)")
#define ADC_R11_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X11, 0X19 # adcq %r11, (%ecx)")
#define ADC_R11_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X11, 0X1A # adcq %r11, (%edx)")
#define ADC_R11_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X11, 0X1F # adcq %r11, (%edi)")
#define ADC_R11_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X11, 0X1E # adcq %r11, (%esi)")
#define ADC_R11_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X11, 0X5D, 0X00 # adcq %r11, (%ebp)")
#define ADC_R11_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X11, 0X1C, 0X24 # adcq %r11, (%esp)")

#define ADC_R12_TO_PTR_RAX CMT_ASM(".byte 0X4C, 0X11, 0X20 # adcq %r12, (%rax)")
#define ADC_R12_TO_PTR_RBX CMT_ASM(".byte 0X4C, 0X11, 0X23 # adcq %r12, (%rbx)")
#define ADC_R12_TO_PTR_RCX CMT_ASM(".byte 0X4C, 0X11, 0X21 # adcq %r12, (%rcx)")
#define ADC_R12_TO_PTR_RDX CMT_ASM(".byte 0X4C, 0X11, 0X22 # adcq %r12, (%rdx)")
#define ADC_R12_TO_PTR_RDI CMT_ASM(".byte 0X4C, 0X11, 0X27 # adcq %r12, (%rdi)")
#define ADC_R12_TO_PTR_RSI CMT_ASM(".byte 0X4C, 0X11, 0X26 # adcq %r12, (%rsi)")
#define ADC_R12_TO_PTR_RBP CMT_ASM(".byte 0X4C, 0X11, 0X65, 0X00 # adcq %r12, (%rbp)")
#define ADC_R12_TO_PTR_RSP CMT_ASM(".byte 0X4C, 0X11, 0X24, 0X24 # adcq %r12, (%rsp)")
#define ADC_R12_TO_PTR_R8 CMT_ASM(".byte 0X4D, 0X11, 0X20 # adcq %r12, (%r8)")
#define ADC_R12_TO_PTR_R9 CMT_ASM(".byte 0X4D, 0X11, 0X21 # adcq %r12, (%r9)")
#define ADC_R12_TO_PTR_R10 CMT_ASM(".byte 0X4D, 0X11, 0X22 # adcq %r12, (%r10)")
#define ADC_R12_TO_PTR_R11 CMT_ASM(".byte 0X4D, 0X11, 0X23 # adcq %r12, (%r11)")
#define ADC_R12_TO_PTR_R12 CMT_ASM(".byte 0X4D, 0X11, 0X24, 0X24 # adcq %r12, (%r12)")
#define ADC_R12_TO_PTR_R13 CMT_ASM(".byte 0X4D, 0X11, 0X65, 0X00 # adcq %r12, (%r13)")
#define ADC_R12_TO_PTR_R14 CMT_ASM(".byte 0X4D, 0X11, 0X26 # adcq %r12, (%r14)")
#define ADC_R12_TO_PTR_R15 CMT_ASM(".byte 0X4D, 0X11, 0X27 # adcq %r12, (%r15)")
#define ADC_R12_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X11, 0X20 # adcq %r12, (%eax)")
#define ADC_R12_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X11, 0X23 # adcq %r12, (%ebx)")
#define ADC_R12_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X11, 0X21 # adcq %r12, (%ecx)")
#define ADC_R12_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X11, 0X22 # adcq %r12, (%edx)")
#define ADC_R12_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X11, 0X27 # adcq %r12, (%edi)")
#define ADC_R12_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X11, 0X26 # adcq %r12, (%esi)")
#define ADC_R12_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X11, 0X65, 0X00 # adcq %r12, (%ebp)")
#define ADC_R12_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X11, 0X24, 0X24 # adcq %r12, (%esp)")

#define ADC_R13_TO_PTR_RAX CMT_ASM(".byte 0X4C, 0X11, 0X28 # adcq %r13, (%rax)")
#define ADC_R13_TO_PTR_RBX CMT_ASM(".byte 0X4C, 0X11, 0X2B # adcq %r13, (%rbx)")
#define ADC_R13_TO_PTR_RCX CMT_ASM(".byte 0X4C, 0X11, 0X29 # adcq %r13, (%rcx)")
#define ADC_R13_TO_PTR_RDX CMT_ASM(".byte 0X4C, 0X11, 0X2A # adcq %r13, (%rdx)")
#define ADC_R13_TO_PTR_RDI CMT_ASM(".byte 0X4C, 0X11, 0X2F # adcq %r13, (%rdi)")
#define ADC_R13_TO_PTR_RSI CMT_ASM(".byte 0X4C, 0X11, 0X2E # adcq %r13, (%rsi)")
#define ADC_R13_TO_PTR_RBP CMT_ASM(".byte 0X4C, 0X11, 0X6D, 0X00 # adcq %r13, (%rbp)")
#define ADC_R13_TO_PTR_RSP CMT_ASM(".byte 0X4C, 0X11, 0X2C, 0X24 # adcq %r13, (%rsp)")
#define ADC_R13_TO_PTR_R8 CMT_ASM(".byte 0X4D, 0X11, 0X28 # adcq %r13, (%r8)")
#define ADC_R13_TO_PTR_R9 CMT_ASM(".byte 0X4D, 0X11, 0X29 # adcq %r13, (%r9)")
#define ADC_R13_TO_PTR_R10 CMT_ASM(".byte 0X4D, 0X11, 0X2A # adcq %r13, (%r10)")
#define ADC_R13_TO_PTR_R11 CMT_ASM(".byte 0X4D, 0X11, 0X2B # adcq %r13, (%r11)")
#define ADC_R13_TO_PTR_R12 CMT_ASM(".byte 0X4D, 0X11, 0X2C, 0X24 # adcq %r13, (%r12)")
#define ADC_R13_TO_PTR_R13 CMT_ASM(".byte 0X4D, 0X11, 0X6D, 0X00 # adcq %r13, (%r13)")
#define ADC_R13_TO_PTR_R14 CMT_ASM(".byte 0X4D, 0X11, 0X2E # adcq %r13, (%r14)")
#define ADC_R13_TO_PTR_R15 CMT_ASM(".byte 0X4D, 0X11, 0X2F # adcq %r13, (%r15)")
#define ADC_R13_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X11, 0X28 # adcq %r13, (%eax)")
#define ADC_R13_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X11, 0X2B # adcq %r13, (%ebx)")
#define ADC_R13_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X11, 0X29 # adcq %r13, (%ecx)")
#define ADC_R13_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X11, 0X2A # adcq %r13, (%edx)")
#define ADC_R13_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X11, 0X2F # adcq %r13, (%edi)")
#define ADC_R13_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X11, 0X2E # adcq %r13, (%esi)")
#define ADC_R13_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X11, 0X6D, 0X00 # adcq %r13, (%ebp)")
#define ADC_R13_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X11, 0X2C, 0X24 # adcq %r13, (%esp)")

#define ADC_R14_TO_PTR_RAX CMT_ASM(".byte 0X4C, 0X11, 0X30 # adcq %r14, (%rax)")
#define ADC_R14_TO_PTR_RBX CMT_ASM(".byte 0X4C, 0X11, 0X33 # adcq %r14, (%rbx)")
#define ADC_R14_TO_PTR_RCX CMT_ASM(".byte 0X4C, 0X11, 0X31 # adcq %r14, (%rcx)")
#define ADC_R14_TO_PTR_RDX CMT_ASM(".byte 0X4C, 0X11, 0X32 # adcq %r14, (%rdx)")
#define ADC_R14_TO_PTR_RDI CMT_ASM(".byte 0X4C, 0X11, 0X37 # adcq %r14, (%rdi)")
#define ADC_R14_TO_PTR_RSI CMT_ASM(".byte 0X4C, 0X11, 0X36 # adcq %r14, (%rsi)")
#define ADC_R14_TO_PTR_RBP CMT_ASM(".byte 0X4C, 0X11, 0X75, 0X00 # adcq %r14, (%rbp)")
#define ADC_R14_TO_PTR_RSP CMT_ASM(".byte 0X4C, 0X11, 0X34, 0X24 # adcq %r14, (%rsp)")
#define ADC_R14_TO_PTR_R8 CMT_ASM(".byte 0X4D, 0X11, 0X30 # adcq %r14, (%r8)")
#define ADC_R14_TO_PTR_R9 CMT_ASM(".byte 0X4D, 0X11, 0X31 # adcq %r14, (%r9)")
#define ADC_R14_TO_PTR_R10 CMT_ASM(".byte 0X4D, 0X11, 0X32 # adcq %r14, (%r10)")
#define ADC_R14_TO_PTR_R11 CMT_ASM(".byte 0X4D, 0X11, 0X33 # adcq %r14, (%r11)")
#define ADC_R14_TO_PTR_R12 CMT_ASM(".byte 0X4D, 0X11, 0X34, 0X24 # adcq %r14, (%r12)")
#define ADC_R14_TO_PTR_R13 CMT_ASM(".byte 0X4D, 0X11, 0X75, 0X00 # adcq %r14, (%r13)")
#define ADC_R14_TO_PTR_R14 CMT_ASM(".byte 0X4D, 0X11, 0X36 # adcq %r14, (%r14)")
#define ADC_R14_TO_PTR_R15 CMT_ASM(".byte 0X4D, 0X11, 0X37 # adcq %r14, (%r15)")
#define ADC_R14_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X11, 0X30 # adcq %r14, (%eax)")
#define ADC_R14_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X11, 0X33 # adcq %r14, (%ebx)")
#define ADC_R14_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X11, 0X31 # adcq %r14, (%ecx)")
#define ADC_R14_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X11, 0X32 # adcq %r14, (%edx)")
#define ADC_R14_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X11, 0X37 # adcq %r14, (%edi)")
#define ADC_R14_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X11, 0X36 # adcq %r14, (%esi)")
#define ADC_R14_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X11, 0X75, 0X00 # adcq %r14, (%ebp)")
#define ADC_R14_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X11, 0X34, 0X24 # adcq %r14, (%esp)")

#define ADC_R15_TO_PTR_RAX CMT_ASM(".byte 0X4C, 0X11, 0X38 # adcq %r15, (%rax)")
#define ADC_R15_TO_PTR_RBX CMT_ASM(".byte 0X4C, 0X11, 0X3B # adcq %r15, (%rbx)")
#define ADC_R15_TO_PTR_RCX CMT_ASM(".byte 0X4C, 0X11, 0X39 # adcq %r15, (%rcx)")
#define ADC_R15_TO_PTR_RDX CMT_ASM(".byte 0X4C, 0X11, 0X3A # adcq %r15, (%rdx)")
#define ADC_R15_TO_PTR_RDI CMT_ASM(".byte 0X4C, 0X11, 0X3F # adcq %r15, (%rdi)")
#define ADC_R15_TO_PTR_RSI CMT_ASM(".byte 0X4C, 0X11, 0X3E # adcq %r15, (%rsi)")
#define ADC_R15_TO_PTR_RBP CMT_ASM(".byte 0X4C, 0X11, 0X7D, 0X00 # adcq %r15, (%rbp)")
#define ADC_R15_TO_PTR_RSP CMT_ASM(".byte 0X4C, 0X11, 0X3C, 0X24 # adcq %r15, (%rsp)")
#define ADC_R15_TO_PTR_R8 CMT_ASM(".byte 0X4D, 0X11, 0X38 # adcq %r15, (%r8)")
#define ADC_R15_TO_PTR_R9 CMT_ASM(".byte 0X4D, 0X11, 0X39 # adcq %r15, (%r9)")
#define ADC_R15_TO_PTR_R10 CMT_ASM(".byte 0X4D, 0X11, 0X3A # adcq %r15, (%r10)")
#define ADC_R15_TO_PTR_R11 CMT_ASM(".byte 0X4D, 0X11, 0X3B # adcq %r15, (%r11)")
#define ADC_R15_TO_PTR_R12 CMT_ASM(".byte 0X4D, 0X11, 0X3C, 0X24 # adcq %r15, (%r12)")
#define ADC_R15_TO_PTR_R13 CMT_ASM(".byte 0X4D, 0X11, 0X7D, 0X00 # adcq %r15, (%r13)")
#define ADC_R15_TO_PTR_R14 CMT_ASM(".byte 0X4D, 0X11, 0X3E # adcq %r15, (%r14)")
#define ADC_R15_TO_PTR_R15 CMT_ASM(".byte 0X4D, 0X11, 0X3F # adcq %r15, (%r15)")
#define ADC_R15_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X4C, 0X11, 0X38 # adcq %r15, (%eax)")
#define ADC_R15_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X4C, 0X11, 0X3B # adcq %r15, (%ebx)")
#define ADC_R15_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X4C, 0X11, 0X39 # adcq %r15, (%ecx)")
#define ADC_R15_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X4C, 0X11, 0X3A # adcq %r15, (%edx)")
#define ADC_R15_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X4C, 0X11, 0X3F # adcq %r15, (%edi)")
#define ADC_R15_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X4C, 0X11, 0X3E # adcq %r15, (%esi)")
#define ADC_R15_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X4C, 0X11, 0X7D, 0X00 # adcq %r15, (%ebp)")
#define ADC_R15_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X4C, 0X11, 0X3C, 0X24 # adcq %r15, (%esp)")

#define ADC_RAX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X13, 0X80 # adcq " _(VALUE) "(%rax), %rax")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RAX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X13, 0X83 # adcq " _(VALUE) "(%rbx), %rax")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RAX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X13, 0X81 # adcq " _(VALUE) "(%rcx), %rax")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RAX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X13, 0X82 # adcq " _(VALUE) "(%rdx), %rax")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RAX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X13, 0X87 # adcq " _(VALUE) "(%rdi), %rax")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RAX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X13, 0X86 # adcq " _(VALUE) "(%rsi), %rax")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RAX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X13, 0X85 # adcq " _(VALUE) "(%rbp), %rax")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RAX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X13, 0X84, 0X24 # adcq " _(VALUE) "(%rsp), %rax")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RAX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X13, 0X80 # adcq " _(VALUE) "(%r8), %rax")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RAX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X13, 0X81 # adcq " _(VALUE) "(%r9), %rax")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RAX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X13, 0X82 # adcq " _(VALUE) "(%r10), %rax")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RAX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X13, 0X83 # adcq " _(VALUE) "(%r11), %rax")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RAX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X13, 0X84, 0X24 # adcq " _(VALUE) "(%r12), %rax")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RAX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X13, 0X85 # adcq " _(VALUE) "(%r13), %rax")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RAX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X13, 0X86 # adcq " _(VALUE) "(%r14), %rax")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RAX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X13, 0X87 # adcq " _(VALUE) "(%r15), %rax")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RAX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X13, 0X80 # adcq " _(VALUE) "(%eax), %rax")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RAX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X13, 0X83 # adcq " _(VALUE) "(%ebx), %rax")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RAX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X13, 0X81 # adcq " _(VALUE) "(%ecx), %rax")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RAX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X13, 0X82 # adcq " _(VALUE) "(%edx), %rax")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RAX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X13, 0X87 # adcq " _(VALUE) "(%edi), %rax")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RAX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X13, 0X86 # adcq " _(VALUE) "(%esi), %rax")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RAX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X13, 0X85 # adcq " _(VALUE) "(%ebp), %rax")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RAX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X13, 0X84, 0X24 # adcq " _(VALUE) "(%esp), %rax")\
	CMT_ASM(".long " _(VALUE))

#define ADC_RBX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X13, 0X98 # adcq " _(VALUE) "(%rax), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RBX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X13, 0X9B # adcq " _(VALUE) "(%rbx), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RBX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X13, 0X99 # adcq " _(VALUE) "(%rcx), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RBX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X13, 0X9A # adcq " _(VALUE) "(%rdx), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RBX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X13, 0X9F # adcq " _(VALUE) "(%rdi), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RBX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X13, 0X9E # adcq " _(VALUE) "(%rsi), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RBX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X13, 0X9D # adcq " _(VALUE) "(%rbp), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RBX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X13, 0X9C, 0X24 # adcq " _(VALUE) "(%rsp), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RBX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X13, 0X98 # adcq " _(VALUE) "(%r8), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RBX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X13, 0X99 # adcq " _(VALUE) "(%r9), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RBX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X13, 0X9A # adcq " _(VALUE) "(%r10), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RBX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X13, 0X9B # adcq " _(VALUE) "(%r11), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RBX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X13, 0X9C, 0X24 # adcq " _(VALUE) "(%r12), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RBX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X13, 0X9D # adcq " _(VALUE) "(%r13), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RBX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X13, 0X9E # adcq " _(VALUE) "(%r14), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RBX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X13, 0X9F # adcq " _(VALUE) "(%r15), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RBX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X13, 0X98 # adcq " _(VALUE) "(%eax), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RBX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X13, 0X9B # adcq " _(VALUE) "(%ebx), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RBX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X13, 0X99 # adcq " _(VALUE) "(%ecx), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RBX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X13, 0X9A # adcq " _(VALUE) "(%edx), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RBX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X13, 0X9F # adcq " _(VALUE) "(%edi), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RBX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X13, 0X9E # adcq " _(VALUE) "(%esi), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RBX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X13, 0X9D # adcq " _(VALUE) "(%ebp), %rbx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RBX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X13, 0X9C, 0X24 # adcq " _(VALUE) "(%esp), %rbx")\
	CMT_ASM(".long " _(VALUE))

#define ADC_RCX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X13, 0X88 # adcq " _(VALUE) "(%rax), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RCX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X13, 0X8B # adcq " _(VALUE) "(%rbx), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RCX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X13, 0X89 # adcq " _(VALUE) "(%rcx), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RCX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X13, 0X8A # adcq " _(VALUE) "(%rdx), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RCX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X13, 0X8F # adcq " _(VALUE) "(%rdi), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RCX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X13, 0X8E # adcq " _(VALUE) "(%rsi), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RCX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X13, 0X8D # adcq " _(VALUE) "(%rbp), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RCX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X13, 0X8C, 0X24 # adcq " _(VALUE) "(%rsp), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RCX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X13, 0X88 # adcq " _(VALUE) "(%r8), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RCX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X13, 0X89 # adcq " _(VALUE) "(%r9), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RCX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X13, 0X8A # adcq " _(VALUE) "(%r10), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RCX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X13, 0X8B # adcq " _(VALUE) "(%r11), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RCX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X13, 0X8C, 0X24 # adcq " _(VALUE) "(%r12), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RCX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X13, 0X8D # adcq " _(VALUE) "(%r13), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RCX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X13, 0X8E # adcq " _(VALUE) "(%r14), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RCX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X13, 0X8F # adcq " _(VALUE) "(%r15), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RCX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X13, 0X88 # adcq " _(VALUE) "(%eax), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RCX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X13, 0X8B # adcq " _(VALUE) "(%ebx), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RCX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X13, 0X89 # adcq " _(VALUE) "(%ecx), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RCX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X13, 0X8A # adcq " _(VALUE) "(%edx), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RCX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X13, 0X8F # adcq " _(VALUE) "(%edi), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RCX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X13, 0X8E # adcq " _(VALUE) "(%esi), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RCX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X13, 0X8D # adcq " _(VALUE) "(%ebp), %rcx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RCX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X13, 0X8C, 0X24 # adcq " _(VALUE) "(%esp), %rcx")\
	CMT_ASM(".long " _(VALUE))

#define ADC_RDX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X13, 0X90 # adcq " _(VALUE) "(%rax), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RDX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X13, 0X93 # adcq " _(VALUE) "(%rbx), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RDX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X13, 0X91 # adcq " _(VALUE) "(%rcx), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RDX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X13, 0X92 # adcq " _(VALUE) "(%rdx), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RDX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X13, 0X97 # adcq " _(VALUE) "(%rdi), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RDX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X13, 0X96 # adcq " _(VALUE) "(%rsi), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RDX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X13, 0X95 # adcq " _(VALUE) "(%rbp), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RDX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X13, 0X94, 0X24 # adcq " _(VALUE) "(%rsp), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RDX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X13, 0X90 # adcq " _(VALUE) "(%r8), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RDX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X13, 0X91 # adcq " _(VALUE) "(%r9), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RDX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X13, 0X92 # adcq " _(VALUE) "(%r10), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RDX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X13, 0X93 # adcq " _(VALUE) "(%r11), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RDX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X13, 0X94, 0X24 # adcq " _(VALUE) "(%r12), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RDX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X13, 0X95 # adcq " _(VALUE) "(%r13), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RDX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X13, 0X96 # adcq " _(VALUE) "(%r14), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RDX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X13, 0X97 # adcq " _(VALUE) "(%r15), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RDX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X13, 0X90 # adcq " _(VALUE) "(%eax), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RDX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X13, 0X93 # adcq " _(VALUE) "(%ebx), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RDX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X13, 0X91 # adcq " _(VALUE) "(%ecx), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RDX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X13, 0X92 # adcq " _(VALUE) "(%edx), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RDX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X13, 0X97 # adcq " _(VALUE) "(%edi), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RDX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X13, 0X96 # adcq " _(VALUE) "(%esi), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RDX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X13, 0X95 # adcq " _(VALUE) "(%ebp), %rdx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RDX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X13, 0X94, 0X24 # adcq " _(VALUE) "(%esp), %rdx")\
	CMT_ASM(".long " _(VALUE))

#define ADC_RDI_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X13, 0XB8 # adcq " _(VALUE) "(%rax), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RDI_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X13, 0XBB # adcq " _(VALUE) "(%rbx), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RDI_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X13, 0XB9 # adcq " _(VALUE) "(%rcx), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RDI_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X13, 0XBA # adcq " _(VALUE) "(%rdx), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RDI_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X13, 0XBF # adcq " _(VALUE) "(%rdi), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RDI_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X13, 0XBE # adcq " _(VALUE) "(%rsi), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RDI_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X13, 0XBD # adcq " _(VALUE) "(%rbp), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RDI_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X13, 0XBC, 0X24 # adcq " _(VALUE) "(%rsp), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RDI_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X13, 0XB8 # adcq " _(VALUE) "(%r8), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RDI_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X13, 0XB9 # adcq " _(VALUE) "(%r9), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RDI_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X13, 0XBA # adcq " _(VALUE) "(%r10), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RDI_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X13, 0XBB # adcq " _(VALUE) "(%r11), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RDI_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X13, 0XBC, 0X24 # adcq " _(VALUE) "(%r12), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RDI_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X13, 0XBD # adcq " _(VALUE) "(%r13), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RDI_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X13, 0XBE # adcq " _(VALUE) "(%r14), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RDI_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X13, 0XBF # adcq " _(VALUE) "(%r15), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RDI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X13, 0XB8 # adcq " _(VALUE) "(%eax), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RDI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X13, 0XBB # adcq " _(VALUE) "(%ebx), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RDI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X13, 0XB9 # adcq " _(VALUE) "(%ecx), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RDI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X13, 0XBA # adcq " _(VALUE) "(%edx), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RDI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X13, 0XBF # adcq " _(VALUE) "(%edi), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RDI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X13, 0XBE # adcq " _(VALUE) "(%esi), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RDI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X13, 0XBD # adcq " _(VALUE) "(%ebp), %rdi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RDI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X13, 0XBC, 0X24 # adcq " _(VALUE) "(%esp), %rdi")\
	CMT_ASM(".long " _(VALUE))

#define ADC_RSI_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X13, 0XB0 # adcq " _(VALUE) "(%rax), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RSI_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X13, 0XB3 # adcq " _(VALUE) "(%rbx), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RSI_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X13, 0XB1 # adcq " _(VALUE) "(%rcx), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RSI_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X13, 0XB2 # adcq " _(VALUE) "(%rdx), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RSI_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X13, 0XB7 # adcq " _(VALUE) "(%rdi), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RSI_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X13, 0XB6 # adcq " _(VALUE) "(%rsi), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RSI_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X13, 0XB5 # adcq " _(VALUE) "(%rbp), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RSI_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X13, 0XB4, 0X24 # adcq " _(VALUE) "(%rsp), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RSI_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X13, 0XB0 # adcq " _(VALUE) "(%r8), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RSI_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X13, 0XB1 # adcq " _(VALUE) "(%r9), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RSI_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X13, 0XB2 # adcq " _(VALUE) "(%r10), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RSI_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X13, 0XB3 # adcq " _(VALUE) "(%r11), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RSI_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X13, 0XB4, 0X24 # adcq " _(VALUE) "(%r12), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RSI_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X13, 0XB5 # adcq " _(VALUE) "(%r13), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RSI_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X13, 0XB6 # adcq " _(VALUE) "(%r14), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RSI_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X13, 0XB7 # adcq " _(VALUE) "(%r15), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RSI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X13, 0XB0 # adcq " _(VALUE) "(%eax), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RSI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X13, 0XB3 # adcq " _(VALUE) "(%ebx), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RSI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X13, 0XB1 # adcq " _(VALUE) "(%ecx), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RSI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X13, 0XB2 # adcq " _(VALUE) "(%edx), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RSI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X13, 0XB7 # adcq " _(VALUE) "(%edi), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RSI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X13, 0XB6 # adcq " _(VALUE) "(%esi), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RSI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X13, 0XB5 # adcq " _(VALUE) "(%ebp), %rsi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RSI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X13, 0XB4, 0X24 # adcq " _(VALUE) "(%esp), %rsi")\
	CMT_ASM(".long " _(VALUE))

#define ADC_RBP_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X13, 0XA8 # adcq " _(VALUE) "(%rax), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RBP_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X13, 0XAB # adcq " _(VALUE) "(%rbx), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RBP_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X13, 0XA9 # adcq " _(VALUE) "(%rcx), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RBP_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X13, 0XAA # adcq " _(VALUE) "(%rdx), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RBP_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X13, 0XAF # adcq " _(VALUE) "(%rdi), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RBP_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X13, 0XAE # adcq " _(VALUE) "(%rsi), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RBP_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X13, 0XAD # adcq " _(VALUE) "(%rbp), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RBP_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X13, 0XAC, 0X24 # adcq " _(VALUE) "(%rsp), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RBP_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X13, 0XA8 # adcq " _(VALUE) "(%r8), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RBP_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X13, 0XA9 # adcq " _(VALUE) "(%r9), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RBP_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X13, 0XAA # adcq " _(VALUE) "(%r10), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RBP_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X13, 0XAB # adcq " _(VALUE) "(%r11), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RBP_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X13, 0XAC, 0X24 # adcq " _(VALUE) "(%r12), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RBP_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X13, 0XAD # adcq " _(VALUE) "(%r13), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RBP_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X13, 0XAE # adcq " _(VALUE) "(%r14), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RBP_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X13, 0XAF # adcq " _(VALUE) "(%r15), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RBP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X13, 0XA8 # adcq " _(VALUE) "(%eax), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RBP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X13, 0XAB # adcq " _(VALUE) "(%ebx), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RBP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X13, 0XA9 # adcq " _(VALUE) "(%ecx), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RBP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X13, 0XAA # adcq " _(VALUE) "(%edx), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RBP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X13, 0XAF # adcq " _(VALUE) "(%edi), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RBP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X13, 0XAE # adcq " _(VALUE) "(%esi), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RBP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X13, 0XAD # adcq " _(VALUE) "(%ebp), %rbp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RBP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X13, 0XAC, 0X24 # adcq " _(VALUE) "(%esp), %rbp")\
	CMT_ASM(".long " _(VALUE))

#define ADC_RSP_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X13, 0XA0 # adcq " _(VALUE) "(%rax), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RSP_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X13, 0XA3 # adcq " _(VALUE) "(%rbx), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RSP_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X13, 0XA1 # adcq " _(VALUE) "(%rcx), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RSP_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X13, 0XA2 # adcq " _(VALUE) "(%rdx), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RSP_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X13, 0XA7 # adcq " _(VALUE) "(%rdi), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RSP_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X13, 0XA6 # adcq " _(VALUE) "(%rsi), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RSP_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X13, 0XA5 # adcq " _(VALUE) "(%rbp), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RSP_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X13, 0XA4, 0X24 # adcq " _(VALUE) "(%rsp), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RSP_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X13, 0XA0 # adcq " _(VALUE) "(%r8), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RSP_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X13, 0XA1 # adcq " _(VALUE) "(%r9), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RSP_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X13, 0XA2 # adcq " _(VALUE) "(%r10), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RSP_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X13, 0XA3 # adcq " _(VALUE) "(%r11), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RSP_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X13, 0XA4, 0X24 # adcq " _(VALUE) "(%r12), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RSP_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X13, 0XA5 # adcq " _(VALUE) "(%r13), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RSP_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X13, 0XA6 # adcq " _(VALUE) "(%r14), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RSP_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X13, 0XA7 # adcq " _(VALUE) "(%r15), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RSP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X13, 0XA0 # adcq " _(VALUE) "(%eax), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RSP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X13, 0XA3 # adcq " _(VALUE) "(%ebx), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RSP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X13, 0XA1 # adcq " _(VALUE) "(%ecx), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RSP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X13, 0XA2 # adcq " _(VALUE) "(%edx), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RSP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X13, 0XA7 # adcq " _(VALUE) "(%edi), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RSP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X13, 0XA6 # adcq " _(VALUE) "(%esi), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RSP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X13, 0XA5 # adcq " _(VALUE) "(%ebp), %rsp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RSP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X13, 0XA4, 0X24 # adcq " _(VALUE) "(%esp), %rsp")\
	CMT_ASM(".long " _(VALUE))

#define ADC_R8_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X13, 0X80 # adcq " _(VALUE) "(%rax), %r8")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X13, 0X83 # adcq " _(VALUE) "(%rbx), %r8")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X13, 0X81 # adcq " _(VALUE) "(%rcx), %r8")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X13, 0X82 # adcq " _(VALUE) "(%rdx), %r8")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X13, 0X87 # adcq " _(VALUE) "(%rdi), %r8")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X13, 0X86 # adcq " _(VALUE) "(%rsi), %r8")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X13, 0X85 # adcq " _(VALUE) "(%rbp), %r8")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X13, 0X84, 0X24 # adcq " _(VALUE) "(%rsp), %r8")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X13, 0X80 # adcq " _(VALUE) "(%r8), %r8")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X13, 0X81 # adcq " _(VALUE) "(%r9), %r8")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X13, 0X82 # adcq " _(VALUE) "(%r10), %r8")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X13, 0X83 # adcq " _(VALUE) "(%r11), %r8")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X13, 0X84, 0X24 # adcq " _(VALUE) "(%r12), %r8")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X13, 0X85 # adcq " _(VALUE) "(%r13), %r8")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X13, 0X86 # adcq " _(VALUE) "(%r14), %r8")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X13, 0X87 # adcq " _(VALUE) "(%r15), %r8")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X13, 0X80 # adcq " _(VALUE) "(%eax), %r8")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X13, 0X83 # adcq " _(VALUE) "(%ebx), %r8")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X13, 0X81 # adcq " _(VALUE) "(%ecx), %r8")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X13, 0X82 # adcq " _(VALUE) "(%edx), %r8")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X13, 0X87 # adcq " _(VALUE) "(%edi), %r8")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X13, 0X86 # adcq " _(VALUE) "(%esi), %r8")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X13, 0X85 # adcq " _(VALUE) "(%ebp), %r8")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X13, 0X84, 0X24 # adcq " _(VALUE) "(%esp), %r8")\
	CMT_ASM(".long " _(VALUE))

#define ADC_R9_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X13, 0X88 # adcq " _(VALUE) "(%rax), %r9")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X13, 0X8B # adcq " _(VALUE) "(%rbx), %r9")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X13, 0X89 # adcq " _(VALUE) "(%rcx), %r9")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X13, 0X8A # adcq " _(VALUE) "(%rdx), %r9")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X13, 0X8F # adcq " _(VALUE) "(%rdi), %r9")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X13, 0X8E # adcq " _(VALUE) "(%rsi), %r9")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X13, 0X8D # adcq " _(VALUE) "(%rbp), %r9")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X13, 0X8C, 0X24 # adcq " _(VALUE) "(%rsp), %r9")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X13, 0X88 # adcq " _(VALUE) "(%r8), %r9")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X13, 0X89 # adcq " _(VALUE) "(%r9), %r9")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X13, 0X8A # adcq " _(VALUE) "(%r10), %r9")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X13, 0X8B # adcq " _(VALUE) "(%r11), %r9")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X13, 0X8C, 0X24 # adcq " _(VALUE) "(%r12), %r9")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X13, 0X8D # adcq " _(VALUE) "(%r13), %r9")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X13, 0X8E # adcq " _(VALUE) "(%r14), %r9")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X13, 0X8F # adcq " _(VALUE) "(%r15), %r9")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X13, 0X88 # adcq " _(VALUE) "(%eax), %r9")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X13, 0X8B # adcq " _(VALUE) "(%ebx), %r9")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X13, 0X89 # adcq " _(VALUE) "(%ecx), %r9")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X13, 0X8A # adcq " _(VALUE) "(%edx), %r9")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X13, 0X8F # adcq " _(VALUE) "(%edi), %r9")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X13, 0X8E # adcq " _(VALUE) "(%esi), %r9")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X13, 0X8D # adcq " _(VALUE) "(%ebp), %r9")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X13, 0X8C, 0X24 # adcq " _(VALUE) "(%esp), %r9")\
	CMT_ASM(".long " _(VALUE))

#define ADC_R10_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X13, 0X90 # adcq " _(VALUE) "(%rax), %r10")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X13, 0X93 # adcq " _(VALUE) "(%rbx), %r10")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X13, 0X91 # adcq " _(VALUE) "(%rcx), %r10")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X13, 0X92 # adcq " _(VALUE) "(%rdx), %r10")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X13, 0X97 # adcq " _(VALUE) "(%rdi), %r10")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X13, 0X96 # adcq " _(VALUE) "(%rsi), %r10")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X13, 0X95 # adcq " _(VALUE) "(%rbp), %r10")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X13, 0X94, 0X24 # adcq " _(VALUE) "(%rsp), %r10")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X13, 0X90 # adcq " _(VALUE) "(%r8), %r10")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X13, 0X91 # adcq " _(VALUE) "(%r9), %r10")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X13, 0X92 # adcq " _(VALUE) "(%r10), %r10")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X13, 0X93 # adcq " _(VALUE) "(%r11), %r10")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X13, 0X94, 0X24 # adcq " _(VALUE) "(%r12), %r10")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X13, 0X95 # adcq " _(VALUE) "(%r13), %r10")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X13, 0X96 # adcq " _(VALUE) "(%r14), %r10")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X13, 0X97 # adcq " _(VALUE) "(%r15), %r10")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X13, 0X90 # adcq " _(VALUE) "(%eax), %r10")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X13, 0X93 # adcq " _(VALUE) "(%ebx), %r10")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X13, 0X91 # adcq " _(VALUE) "(%ecx), %r10")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X13, 0X92 # adcq " _(VALUE) "(%edx), %r10")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X13, 0X97 # adcq " _(VALUE) "(%edi), %r10")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X13, 0X96 # adcq " _(VALUE) "(%esi), %r10")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X13, 0X95 # adcq " _(VALUE) "(%ebp), %r10")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X13, 0X94, 0X24 # adcq " _(VALUE) "(%esp), %r10")\
	CMT_ASM(".long " _(VALUE))

#define ADC_R11_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X13, 0X98 # adcq " _(VALUE) "(%rax), %r11")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X13, 0X9B # adcq " _(VALUE) "(%rbx), %r11")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X13, 0X99 # adcq " _(VALUE) "(%rcx), %r11")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X13, 0X9A # adcq " _(VALUE) "(%rdx), %r11")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X13, 0X9F # adcq " _(VALUE) "(%rdi), %r11")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X13, 0X9E # adcq " _(VALUE) "(%rsi), %r11")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X13, 0X9D # adcq " _(VALUE) "(%rbp), %r11")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X13, 0X9C, 0X24 # adcq " _(VALUE) "(%rsp), %r11")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X13, 0X98 # adcq " _(VALUE) "(%r8), %r11")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X13, 0X99 # adcq " _(VALUE) "(%r9), %r11")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X13, 0X9A # adcq " _(VALUE) "(%r10), %r11")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X13, 0X9B # adcq " _(VALUE) "(%r11), %r11")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X13, 0X9C, 0X24 # adcq " _(VALUE) "(%r12), %r11")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X13, 0X9D # adcq " _(VALUE) "(%r13), %r11")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X13, 0X9E # adcq " _(VALUE) "(%r14), %r11")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X13, 0X9F # adcq " _(VALUE) "(%r15), %r11")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X13, 0X98 # adcq " _(VALUE) "(%eax), %r11")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X13, 0X9B # adcq " _(VALUE) "(%ebx), %r11")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X13, 0X99 # adcq " _(VALUE) "(%ecx), %r11")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X13, 0X9A # adcq " _(VALUE) "(%edx), %r11")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X13, 0X9F # adcq " _(VALUE) "(%edi), %r11")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X13, 0X9E # adcq " _(VALUE) "(%esi), %r11")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X13, 0X9D # adcq " _(VALUE) "(%ebp), %r11")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X13, 0X9C, 0X24 # adcq " _(VALUE) "(%esp), %r11")\
	CMT_ASM(".long " _(VALUE))

#define ADC_R12_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X13, 0XA0 # adcq " _(VALUE) "(%rax), %r12")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X13, 0XA3 # adcq " _(VALUE) "(%rbx), %r12")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X13, 0XA1 # adcq " _(VALUE) "(%rcx), %r12")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X13, 0XA2 # adcq " _(VALUE) "(%rdx), %r12")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X13, 0XA7 # adcq " _(VALUE) "(%rdi), %r12")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X13, 0XA6 # adcq " _(VALUE) "(%rsi), %r12")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X13, 0XA5 # adcq " _(VALUE) "(%rbp), %r12")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X13, 0XA4, 0X24 # adcq " _(VALUE) "(%rsp), %r12")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X13, 0XA0 # adcq " _(VALUE) "(%r8), %r12")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X13, 0XA1 # adcq " _(VALUE) "(%r9), %r12")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X13, 0XA2 # adcq " _(VALUE) "(%r10), %r12")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X13, 0XA3 # adcq " _(VALUE) "(%r11), %r12")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X13, 0XA4, 0X24 # adcq " _(VALUE) "(%r12), %r12")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X13, 0XA5 # adcq " _(VALUE) "(%r13), %r12")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X13, 0XA6 # adcq " _(VALUE) "(%r14), %r12")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X13, 0XA7 # adcq " _(VALUE) "(%r15), %r12")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X13, 0XA0 # adcq " _(VALUE) "(%eax), %r12")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X13, 0XA3 # adcq " _(VALUE) "(%ebx), %r12")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X13, 0XA1 # adcq " _(VALUE) "(%ecx), %r12")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X13, 0XA2 # adcq " _(VALUE) "(%edx), %r12")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X13, 0XA7 # adcq " _(VALUE) "(%edi), %r12")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X13, 0XA6 # adcq " _(VALUE) "(%esi), %r12")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X13, 0XA5 # adcq " _(VALUE) "(%ebp), %r12")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X13, 0XA4, 0X24 # adcq " _(VALUE) "(%esp), %r12")\
	CMT_ASM(".long " _(VALUE))

#define ADC_R13_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X13, 0XA8 # adcq " _(VALUE) "(%rax), %r13")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X13, 0XAB # adcq " _(VALUE) "(%rbx), %r13")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X13, 0XA9 # adcq " _(VALUE) "(%rcx), %r13")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X13, 0XAA # adcq " _(VALUE) "(%rdx), %r13")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X13, 0XAF # adcq " _(VALUE) "(%rdi), %r13")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X13, 0XAE # adcq " _(VALUE) "(%rsi), %r13")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X13, 0XAD # adcq " _(VALUE) "(%rbp), %r13")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X13, 0XAC, 0X24 # adcq " _(VALUE) "(%rsp), %r13")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X13, 0XA8 # adcq " _(VALUE) "(%r8), %r13")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X13, 0XA9 # adcq " _(VALUE) "(%r9), %r13")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X13, 0XAA # adcq " _(VALUE) "(%r10), %r13")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X13, 0XAB # adcq " _(VALUE) "(%r11), %r13")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X13, 0XAC, 0X24 # adcq " _(VALUE) "(%r12), %r13")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X13, 0XAD # adcq " _(VALUE) "(%r13), %r13")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X13, 0XAE # adcq " _(VALUE) "(%r14), %r13")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X13, 0XAF # adcq " _(VALUE) "(%r15), %r13")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X13, 0XA8 # adcq " _(VALUE) "(%eax), %r13")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X13, 0XAB # adcq " _(VALUE) "(%ebx), %r13")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X13, 0XA9 # adcq " _(VALUE) "(%ecx), %r13")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X13, 0XAA # adcq " _(VALUE) "(%edx), %r13")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X13, 0XAF # adcq " _(VALUE) "(%edi), %r13")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X13, 0XAE # adcq " _(VALUE) "(%esi), %r13")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X13, 0XAD # adcq " _(VALUE) "(%ebp), %r13")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X13, 0XAC, 0X24 # adcq " _(VALUE) "(%esp), %r13")\
	CMT_ASM(".long " _(VALUE))

#define ADC_R14_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X13, 0XB0 # adcq " _(VALUE) "(%rax), %r14")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X13, 0XB3 # adcq " _(VALUE) "(%rbx), %r14")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X13, 0XB1 # adcq " _(VALUE) "(%rcx), %r14")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X13, 0XB2 # adcq " _(VALUE) "(%rdx), %r14")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X13, 0XB7 # adcq " _(VALUE) "(%rdi), %r14")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X13, 0XB6 # adcq " _(VALUE) "(%rsi), %r14")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X13, 0XB5 # adcq " _(VALUE) "(%rbp), %r14")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X13, 0XB4, 0X24 # adcq " _(VALUE) "(%rsp), %r14")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X13, 0XB0 # adcq " _(VALUE) "(%r8), %r14")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X13, 0XB1 # adcq " _(VALUE) "(%r9), %r14")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X13, 0XB2 # adcq " _(VALUE) "(%r10), %r14")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X13, 0XB3 # adcq " _(VALUE) "(%r11), %r14")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X13, 0XB4, 0X24 # adcq " _(VALUE) "(%r12), %r14")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X13, 0XB5 # adcq " _(VALUE) "(%r13), %r14")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X13, 0XB6 # adcq " _(VALUE) "(%r14), %r14")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X13, 0XB7 # adcq " _(VALUE) "(%r15), %r14")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X13, 0XB0 # adcq " _(VALUE) "(%eax), %r14")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X13, 0XB3 # adcq " _(VALUE) "(%ebx), %r14")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X13, 0XB1 # adcq " _(VALUE) "(%ecx), %r14")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X13, 0XB2 # adcq " _(VALUE) "(%edx), %r14")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X13, 0XB7 # adcq " _(VALUE) "(%edi), %r14")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X13, 0XB6 # adcq " _(VALUE) "(%esi), %r14")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X13, 0XB5 # adcq " _(VALUE) "(%ebp), %r14")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X13, 0XB4, 0X24 # adcq " _(VALUE) "(%esp), %r14")\
	CMT_ASM(".long " _(VALUE))

#define ADC_R15_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X13, 0XB8 # adcq " _(VALUE) "(%rax), %r15")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X13, 0XBB # adcq " _(VALUE) "(%rbx), %r15")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X13, 0XB9 # adcq " _(VALUE) "(%rcx), %r15")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X13, 0XBA # adcq " _(VALUE) "(%rdx), %r15")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X13, 0XBF # adcq " _(VALUE) "(%rdi), %r15")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X13, 0XBE # adcq " _(VALUE) "(%rsi), %r15")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X13, 0XBD # adcq " _(VALUE) "(%rbp), %r15")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X13, 0XBC, 0X24 # adcq " _(VALUE) "(%rsp), %r15")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X13, 0XB8 # adcq " _(VALUE) "(%r8), %r15")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X13, 0XB9 # adcq " _(VALUE) "(%r9), %r15")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X13, 0XBA # adcq " _(VALUE) "(%r10), %r15")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X13, 0XBB # adcq " _(VALUE) "(%r11), %r15")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X13, 0XBC, 0X24 # adcq " _(VALUE) "(%r12), %r15")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X13, 0XBD # adcq " _(VALUE) "(%r13), %r15")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X13, 0XBE # adcq " _(VALUE) "(%r14), %r15")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X13, 0XBF # adcq " _(VALUE) "(%r15), %r15")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X13, 0XB8 # adcq " _(VALUE) "(%eax), %r15")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X13, 0XBB # adcq " _(VALUE) "(%ebx), %r15")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X13, 0XB9 # adcq " _(VALUE) "(%ecx), %r15")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X13, 0XBA # adcq " _(VALUE) "(%edx), %r15")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X13, 0XBF # adcq " _(VALUE) "(%edi), %r15")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X13, 0XBE # adcq " _(VALUE) "(%esi), %r15")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X13, 0XBD # adcq " _(VALUE) "(%ebp), %r15")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X13, 0XBC, 0X24 # adcq " _(VALUE) "(%esp), %r15")\
	CMT_ASM(".long " _(VALUE))

#define ADC_RAX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X11, 0X80 # adcq %rax, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RAX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X11, 0X83 # adcq %rax, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RAX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X11, 0X81 # adcq %rax, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RAX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X11, 0X82 # adcq %rax, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RAX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X11, 0X87 # adcq %rax, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RAX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X11, 0X86 # adcq %rax, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RAX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X11, 0X85 # adcq %rax, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RAX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X11, 0X84, 0X24 # adcq %rax, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RAX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X11, 0X80 # adcq %rax, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RAX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X11, 0X81 # adcq %rax, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RAX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X11, 0X82 # adcq %rax, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RAX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X11, 0X83 # adcq %rax, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RAX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X11, 0X84, 0X24 # adcq %rax, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RAX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X11, 0X85 # adcq %rax, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RAX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X11, 0X86 # adcq %rax, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RAX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X11, 0X87 # adcq %rax, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RAX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X11, 0X80 # adcq %rax, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RAX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X11, 0X83 # adcq %rax, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RAX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X11, 0X81 # adcq %rax, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RAX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X11, 0X82 # adcq %rax, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RAX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X11, 0X87 # adcq %rax, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RAX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X11, 0X86 # adcq %rax, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RAX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X11, 0X85 # adcq %rax, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RAX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X11, 0X84, 0X24 # adcq %rax, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADC_RBX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X11, 0X98 # adcq %rbx, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RBX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X11, 0X9B # adcq %rbx, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RBX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X11, 0X99 # adcq %rbx, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RBX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X11, 0X9A # adcq %rbx, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RBX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X11, 0X9F # adcq %rbx, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RBX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X11, 0X9E # adcq %rbx, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RBX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X11, 0X9D # adcq %rbx, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RBX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X11, 0X9C, 0X24 # adcq %rbx, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RBX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X11, 0X98 # adcq %rbx, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RBX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X11, 0X99 # adcq %rbx, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RBX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X11, 0X9A # adcq %rbx, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RBX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X11, 0X9B # adcq %rbx, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RBX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X11, 0X9C, 0X24 # adcq %rbx, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RBX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X11, 0X9D # adcq %rbx, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RBX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X11, 0X9E # adcq %rbx, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RBX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X11, 0X9F # adcq %rbx, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RBX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X11, 0X98 # adcq %rbx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RBX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X11, 0X9B # adcq %rbx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RBX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X11, 0X99 # adcq %rbx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RBX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X11, 0X9A # adcq %rbx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RBX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X11, 0X9F # adcq %rbx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RBX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X11, 0X9E # adcq %rbx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RBX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X11, 0X9D # adcq %rbx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RBX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X11, 0X9C, 0X24 # adcq %rbx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADC_RCX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X11, 0X88 # adcq %rcx, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RCX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X11, 0X8B # adcq %rcx, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RCX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X11, 0X89 # adcq %rcx, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RCX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X11, 0X8A # adcq %rcx, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RCX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X11, 0X8F # adcq %rcx, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RCX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X11, 0X8E # adcq %rcx, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RCX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X11, 0X8D # adcq %rcx, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RCX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X11, 0X8C, 0X24 # adcq %rcx, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RCX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X11, 0X88 # adcq %rcx, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RCX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X11, 0X89 # adcq %rcx, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RCX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X11, 0X8A # adcq %rcx, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RCX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X11, 0X8B # adcq %rcx, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RCX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X11, 0X8C, 0X24 # adcq %rcx, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RCX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X11, 0X8D # adcq %rcx, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RCX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X11, 0X8E # adcq %rcx, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RCX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X11, 0X8F # adcq %rcx, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RCX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X11, 0X88 # adcq %rcx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RCX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X11, 0X8B # adcq %rcx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RCX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X11, 0X89 # adcq %rcx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RCX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X11, 0X8A # adcq %rcx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RCX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X11, 0X8F # adcq %rcx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RCX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X11, 0X8E # adcq %rcx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RCX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X11, 0X8D # adcq %rcx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RCX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X11, 0X8C, 0X24 # adcq %rcx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADC_RDX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X11, 0X90 # adcq %rdx, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RDX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X11, 0X93 # adcq %rdx, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RDX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X11, 0X91 # adcq %rdx, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RDX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X11, 0X92 # adcq %rdx, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RDX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X11, 0X97 # adcq %rdx, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RDX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X11, 0X96 # adcq %rdx, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RDX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X11, 0X95 # adcq %rdx, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RDX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X11, 0X94, 0X24 # adcq %rdx, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RDX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X11, 0X90 # adcq %rdx, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RDX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X11, 0X91 # adcq %rdx, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RDX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X11, 0X92 # adcq %rdx, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RDX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X11, 0X93 # adcq %rdx, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RDX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X11, 0X94, 0X24 # adcq %rdx, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RDX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X11, 0X95 # adcq %rdx, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RDX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X11, 0X96 # adcq %rdx, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RDX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X11, 0X97 # adcq %rdx, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RDX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X11, 0X90 # adcq %rdx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RDX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X11, 0X93 # adcq %rdx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RDX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X11, 0X91 # adcq %rdx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RDX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X11, 0X92 # adcq %rdx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RDX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X11, 0X97 # adcq %rdx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RDX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X11, 0X96 # adcq %rdx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RDX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X11, 0X95 # adcq %rdx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RDX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X11, 0X94, 0X24 # adcq %rdx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADC_RDI_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X11, 0XB8 # adcq %rdi, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RDI_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X11, 0XBB # adcq %rdi, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RDI_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X11, 0XB9 # adcq %rdi, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RDI_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X11, 0XBA # adcq %rdi, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RDI_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X11, 0XBF # adcq %rdi, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RDI_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X11, 0XBE # adcq %rdi, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RDI_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X11, 0XBD # adcq %rdi, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RDI_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X11, 0XBC, 0X24 # adcq %rdi, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RDI_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X11, 0XB8 # adcq %rdi, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RDI_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X11, 0XB9 # adcq %rdi, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RDI_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X11, 0XBA # adcq %rdi, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RDI_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X11, 0XBB # adcq %rdi, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RDI_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X11, 0XBC, 0X24 # adcq %rdi, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RDI_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X11, 0XBD # adcq %rdi, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RDI_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X11, 0XBE # adcq %rdi, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RDI_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X11, 0XBF # adcq %rdi, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RDI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X11, 0XB8 # adcq %rdi, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RDI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X11, 0XBB # adcq %rdi, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RDI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X11, 0XB9 # adcq %rdi, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RDI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X11, 0XBA # adcq %rdi, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RDI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X11, 0XBF # adcq %rdi, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RDI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X11, 0XBE # adcq %rdi, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RDI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X11, 0XBD # adcq %rdi, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RDI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X11, 0XBC, 0X24 # adcq %rdi, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADC_RSI_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X11, 0XB0 # adcq %rsi, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RSI_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X11, 0XB3 # adcq %rsi, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RSI_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X11, 0XB1 # adcq %rsi, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RSI_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X11, 0XB2 # adcq %rsi, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RSI_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X11, 0XB7 # adcq %rsi, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RSI_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X11, 0XB6 # adcq %rsi, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RSI_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X11, 0XB5 # adcq %rsi, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RSI_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X11, 0XB4, 0X24 # adcq %rsi, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RSI_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X11, 0XB0 # adcq %rsi, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RSI_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X11, 0XB1 # adcq %rsi, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RSI_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X11, 0XB2 # adcq %rsi, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RSI_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X11, 0XB3 # adcq %rsi, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RSI_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X11, 0XB4, 0X24 # adcq %rsi, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RSI_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X11, 0XB5 # adcq %rsi, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RSI_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X11, 0XB6 # adcq %rsi, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RSI_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X11, 0XB7 # adcq %rsi, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RSI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X11, 0XB0 # adcq %rsi, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RSI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X11, 0XB3 # adcq %rsi, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RSI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X11, 0XB1 # adcq %rsi, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RSI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X11, 0XB2 # adcq %rsi, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RSI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X11, 0XB7 # adcq %rsi, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RSI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X11, 0XB6 # adcq %rsi, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RSI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X11, 0XB5 # adcq %rsi, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RSI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X11, 0XB4, 0X24 # adcq %rsi, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADC_RBP_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X11, 0XA8 # adcq %rbp, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RBP_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X11, 0XAB # adcq %rbp, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RBP_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X11, 0XA9 # adcq %rbp, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RBP_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X11, 0XAA # adcq %rbp, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RBP_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X11, 0XAF # adcq %rbp, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RBP_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X11, 0XAE # adcq %rbp, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RBP_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X11, 0XAD # adcq %rbp, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RBP_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X11, 0XAC, 0X24 # adcq %rbp, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RBP_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X11, 0XA8 # adcq %rbp, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RBP_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X11, 0XA9 # adcq %rbp, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RBP_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X11, 0XAA # adcq %rbp, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RBP_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X11, 0XAB # adcq %rbp, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RBP_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X11, 0XAC, 0X24 # adcq %rbp, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RBP_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X11, 0XAD # adcq %rbp, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RBP_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X11, 0XAE # adcq %rbp, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RBP_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X11, 0XAF # adcq %rbp, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RBP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X11, 0XA8 # adcq %rbp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RBP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X11, 0XAB # adcq %rbp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RBP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X11, 0XA9 # adcq %rbp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RBP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X11, 0XAA # adcq %rbp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RBP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X11, 0XAF # adcq %rbp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RBP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X11, 0XAE # adcq %rbp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RBP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X11, 0XAD # adcq %rbp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RBP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X11, 0XAC, 0X24 # adcq %rbp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADC_RSP_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X11, 0XA0 # adcq %rsp, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RSP_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X11, 0XA3 # adcq %rsp, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RSP_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X11, 0XA1 # adcq %rsp, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RSP_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X48, 0X11, 0XA2 # adcq %rsp, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RSP_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X11, 0XA7 # adcq %rsp, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RSP_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X48, 0X11, 0XA6 # adcq %rsp, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RSP_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X11, 0XA5 # adcq %rsp, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RSP_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X48, 0X11, 0XA4, 0X24 # adcq %rsp, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RSP_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X49, 0X11, 0XA0 # adcq %rsp, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RSP_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X49, 0X11, 0XA1 # adcq %rsp, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RSP_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X49, 0X11, 0XA2 # adcq %rsp, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RSP_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X49, 0X11, 0XA3 # adcq %rsp, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RSP_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X49, 0X11, 0XA4, 0X24 # adcq %rsp, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RSP_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X49, 0X11, 0XA5 # adcq %rsp, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RSP_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X49, 0X11, 0XA6 # adcq %rsp, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RSP_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X49, 0X11, 0XA7 # adcq %rsp, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RSP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X11, 0XA0 # adcq %rsp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RSP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X11, 0XA3 # adcq %rsp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RSP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X11, 0XA1 # adcq %rsp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RSP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X11, 0XA2 # adcq %rsp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RSP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X11, 0XA7 # adcq %rsp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RSP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X11, 0XA6 # adcq %rsp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RSP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X11, 0XA5 # adcq %rsp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_RSP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X48, 0X11, 0XA4, 0X24 # adcq %rsp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADC_R8_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X11, 0X80 # adcq %r8, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X11, 0X83 # adcq %r8, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X11, 0X81 # adcq %r8, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X11, 0X82 # adcq %r8, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X11, 0X87 # adcq %r8, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X11, 0X86 # adcq %r8, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X11, 0X85 # adcq %r8, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X11, 0X84, 0X24 # adcq %r8, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X11, 0X80 # adcq %r8, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X11, 0X81 # adcq %r8, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X11, 0X82 # adcq %r8, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X11, 0X83 # adcq %r8, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X11, 0X84, 0X24 # adcq %r8, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X11, 0X85 # adcq %r8, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X11, 0X86 # adcq %r8, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X11, 0X87 # adcq %r8, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X11, 0X80 # adcq %r8, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X11, 0X83 # adcq %r8, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X11, 0X81 # adcq %r8, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X11, 0X82 # adcq %r8, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X11, 0X87 # adcq %r8, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X11, 0X86 # adcq %r8, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X11, 0X85 # adcq %r8, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X11, 0X84, 0X24 # adcq %r8, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADC_R9_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X11, 0X88 # adcq %r9, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X11, 0X8B # adcq %r9, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X11, 0X89 # adcq %r9, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X11, 0X8A # adcq %r9, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X11, 0X8F # adcq %r9, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X11, 0X8E # adcq %r9, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X11, 0X8D # adcq %r9, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X11, 0X8C, 0X24 # adcq %r9, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X11, 0X88 # adcq %r9, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X11, 0X89 # adcq %r9, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X11, 0X8A # adcq %r9, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X11, 0X8B # adcq %r9, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X11, 0X8C, 0X24 # adcq %r9, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X11, 0X8D # adcq %r9, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X11, 0X8E # adcq %r9, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X11, 0X8F # adcq %r9, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X11, 0X88 # adcq %r9, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X11, 0X8B # adcq %r9, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X11, 0X89 # adcq %r9, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X11, 0X8A # adcq %r9, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X11, 0X8F # adcq %r9, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X11, 0X8E # adcq %r9, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X11, 0X8D # adcq %r9, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X11, 0X8C, 0X24 # adcq %r9, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADC_R10_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X11, 0X90 # adcq %r10, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X11, 0X93 # adcq %r10, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X11, 0X91 # adcq %r10, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X11, 0X92 # adcq %r10, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X11, 0X97 # adcq %r10, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X11, 0X96 # adcq %r10, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X11, 0X95 # adcq %r10, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X11, 0X94, 0X24 # adcq %r10, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X11, 0X90 # adcq %r10, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X11, 0X91 # adcq %r10, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X11, 0X92 # adcq %r10, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X11, 0X93 # adcq %r10, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X11, 0X94, 0X24 # adcq %r10, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X11, 0X95 # adcq %r10, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X11, 0X96 # adcq %r10, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X11, 0X97 # adcq %r10, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X11, 0X90 # adcq %r10, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X11, 0X93 # adcq %r10, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X11, 0X91 # adcq %r10, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X11, 0X92 # adcq %r10, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X11, 0X97 # adcq %r10, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X11, 0X96 # adcq %r10, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X11, 0X95 # adcq %r10, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X11, 0X94, 0X24 # adcq %r10, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADC_R11_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X11, 0X98 # adcq %r11, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X11, 0X9B # adcq %r11, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X11, 0X99 # adcq %r11, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X11, 0X9A # adcq %r11, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X11, 0X9F # adcq %r11, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X11, 0X9E # adcq %r11, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X11, 0X9D # adcq %r11, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X11, 0X9C, 0X24 # adcq %r11, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X11, 0X98 # adcq %r11, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X11, 0X99 # adcq %r11, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X11, 0X9A # adcq %r11, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X11, 0X9B # adcq %r11, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X11, 0X9C, 0X24 # adcq %r11, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X11, 0X9D # adcq %r11, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X11, 0X9E # adcq %r11, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X11, 0X9F # adcq %r11, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X11, 0X98 # adcq %r11, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X11, 0X9B # adcq %r11, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X11, 0X99 # adcq %r11, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X11, 0X9A # adcq %r11, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X11, 0X9F # adcq %r11, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X11, 0X9E # adcq %r11, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X11, 0X9D # adcq %r11, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X11, 0X9C, 0X24 # adcq %r11, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADC_R12_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X11, 0XA0 # adcq %r12, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X11, 0XA3 # adcq %r12, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X11, 0XA1 # adcq %r12, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X11, 0XA2 # adcq %r12, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X11, 0XA7 # adcq %r12, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X11, 0XA6 # adcq %r12, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X11, 0XA5 # adcq %r12, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X11, 0XA4, 0X24 # adcq %r12, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X11, 0XA0 # adcq %r12, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X11, 0XA1 # adcq %r12, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X11, 0XA2 # adcq %r12, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X11, 0XA3 # adcq %r12, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X11, 0XA4, 0X24 # adcq %r12, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X11, 0XA5 # adcq %r12, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X11, 0XA6 # adcq %r12, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X11, 0XA7 # adcq %r12, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X11, 0XA0 # adcq %r12, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X11, 0XA3 # adcq %r12, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X11, 0XA1 # adcq %r12, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X11, 0XA2 # adcq %r12, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X11, 0XA7 # adcq %r12, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X11, 0XA6 # adcq %r12, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X11, 0XA5 # adcq %r12, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X11, 0XA4, 0X24 # adcq %r12, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADC_R13_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X11, 0XA8 # adcq %r13, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X11, 0XAB # adcq %r13, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X11, 0XA9 # adcq %r13, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X11, 0XAA # adcq %r13, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X11, 0XAF # adcq %r13, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X11, 0XAE # adcq %r13, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X11, 0XAD # adcq %r13, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X11, 0XAC, 0X24 # adcq %r13, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X11, 0XA8 # adcq %r13, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X11, 0XA9 # adcq %r13, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X11, 0XAA # adcq %r13, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X11, 0XAB # adcq %r13, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X11, 0XAC, 0X24 # adcq %r13, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X11, 0XAD # adcq %r13, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X11, 0XAE # adcq %r13, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X11, 0XAF # adcq %r13, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X11, 0XA8 # adcq %r13, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X11, 0XAB # adcq %r13, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X11, 0XA9 # adcq %r13, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X11, 0XAA # adcq %r13, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X11, 0XAF # adcq %r13, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X11, 0XAE # adcq %r13, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X11, 0XAD # adcq %r13, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X11, 0XAC, 0X24 # adcq %r13, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADC_R14_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X11, 0XB0 # adcq %r14, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X11, 0XB3 # adcq %r14, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X11, 0XB1 # adcq %r14, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X11, 0XB2 # adcq %r14, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X11, 0XB7 # adcq %r14, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X11, 0XB6 # adcq %r14, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X11, 0XB5 # adcq %r14, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X11, 0XB4, 0X24 # adcq %r14, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X11, 0XB0 # adcq %r14, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X11, 0XB1 # adcq %r14, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X11, 0XB2 # adcq %r14, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X11, 0XB3 # adcq %r14, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X11, 0XB4, 0X24 # adcq %r14, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X11, 0XB5 # adcq %r14, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X11, 0XB6 # adcq %r14, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X11, 0XB7 # adcq %r14, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X11, 0XB0 # adcq %r14, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X11, 0XB3 # adcq %r14, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X11, 0XB1 # adcq %r14, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X11, 0XB2 # adcq %r14, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X11, 0XB7 # adcq %r14, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X11, 0XB6 # adcq %r14, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X11, 0XB5 # adcq %r14, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X11, 0XB4, 0X24 # adcq %r14, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADC_R15_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X11, 0XB8 # adcq %r15, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X11, 0XBB # adcq %r15, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X11, 0XB9 # adcq %r15, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X11, 0XBA # adcq %r15, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X11, 0XBF # adcq %r15, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X11, 0XBE # adcq %r15, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X11, 0XBD # adcq %r15, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X4C, 0X11, 0XBC, 0X24 # adcq %r15, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X11, 0XB8 # adcq %r15, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X11, 0XB9 # adcq %r15, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X11, 0XBA # adcq %r15, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X11, 0XBB # adcq %r15, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X11, 0XBC, 0X24 # adcq %r15, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X11, 0XBD # adcq %r15, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X11, 0XBE # adcq %r15, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X4D, 0X11, 0XBF # adcq %r15, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X11, 0XB8 # adcq %r15, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X11, 0XBB # adcq %r15, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X11, 0XB9 # adcq %r15, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X11, 0XBA # adcq %r15, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X11, 0XBF # adcq %r15, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X11, 0XBE # adcq %r15, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X11, 0XBD # adcq %r15, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X4C, 0X11, 0XBC, 0X24 # adcq %r15, " _(VALUE) "(%esp)")\
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
