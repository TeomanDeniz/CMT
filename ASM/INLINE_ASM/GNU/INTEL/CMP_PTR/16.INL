#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************** [v] 8-BIT MEMORY [v] ************************** */
#ifdef __SYSTEM_16_BIT__
#define CMP_AL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X3A, 0X06 # cmpb (" _(VALUE) "), %al")\
	CMT_ASM(".short " _(VALUE))
#define CMP_BL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X3A, 0X1E # cmpb (" _(VALUE) "), %bl")\
	CMT_ASM(".short " _(VALUE))
#define CMP_CL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X3A, 0X0E # cmpb (" _(VALUE) "), %cl")\
	CMT_ASM(".short " _(VALUE))
#define CMP_DL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X3A, 0X16 # cmpb (" _(VALUE) "), %dl")\
	CMT_ASM(".short " _(VALUE))

#define CMP_AL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X38, 0X06 # cmpb %al, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define CMP_BL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X38, 0X1E # cmpb %bl, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define CMP_CL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X38, 0X0E # cmpb %cl, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define CMP_DL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X38, 0X16 # cmpb %dl, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))

#define CMP_AL_FROM_PTR_BX CMT_ASM(".byte 0X3A, 0X07 # cmpb (%bx), %al")
#define CMP_AL_FROM_PTR_BP CMT_ASM(".byte 0X3A, 0X46, 0X00 # cmpb (%bp), %al")
#define CMP_AL_FROM_PTR_SI CMT_ASM(".byte 0X3A, 0X04 # cmpb (%si), %al")
#define CMP_AL_FROM_PTR_DI CMT_ASM(".byte 0X3A, 0X05 # cmpb (%di), %al")

#define CMP_BL_FROM_PTR_BX CMT_ASM(".byte 0X3A, 0X1F # cmpb (%bx), %bl")
#define CMP_BL_FROM_PTR_BP CMT_ASM(".byte 0X3A, 0X5E, 0X00 # cmpb (%bp), %bl")
#define CMP_BL_FROM_PTR_SI CMT_ASM(".byte 0X3A, 0X1C # cmpb (%si), %bl")
#define CMP_BL_FROM_PTR_DI CMT_ASM(".byte 0X3A, 0X1D # cmpb (%di), %bl")

#define CMP_CL_FROM_PTR_BX CMT_ASM(".byte 0X3A, 0X0F # cmpb (%bx), %cl")
#define CMP_CL_FROM_PTR_BP CMT_ASM(".byte 0X3A, 0X4E, 0X00 # cmpb (%bp), %cl")
#define CMP_CL_FROM_PTR_SI CMT_ASM(".byte 0X3A, 0X0C # cmpb (%si), %cl")
#define CMP_CL_FROM_PTR_DI CMT_ASM(".byte 0X3A, 0X0D # cmpb (%di), %cl")

#define CMP_DL_FROM_PTR_BX CMT_ASM(".byte 0X3A, 0X17 # cmpb (%bx), %dl")
#define CMP_DL_FROM_PTR_BP CMT_ASM(".byte 0X3A, 0X56, 0X00 # cmpb (%bp), %dl")
#define CMP_DL_FROM_PTR_SI CMT_ASM(".byte 0X3A, 0X14 # cmpb (%si), %dl")
#define CMP_DL_FROM_PTR_DI CMT_ASM(".byte 0X3A, 0X15 # cmpb (%di), %dl")

#define CMP_AL_TO_PTR_BX CMT_ASM(".byte 0X38, 0X07 # cmpb %al, (%bx)")
#define CMP_AL_TO_PTR_BP CMT_ASM(".byte 0X38, 0X46, 0X00 # cmpb %al, (%bp)")
#define CMP_AL_TO_PTR_SI CMT_ASM(".byte 0X38, 0X04 # cmpb %al, (%si)")
#define CMP_AL_TO_PTR_DI CMT_ASM(".byte 0X38, 0X05 # cmpb %al, (%di)")

#define CMP_BL_TO_PTR_BX CMT_ASM(".byte 0X38, 0X1F # cmpb %bl, (%bx)")
#define CMP_BL_TO_PTR_BP CMT_ASM(".byte 0X38, 0X5E, 0X00 # cmpb %bl, (%bp)")
#define CMP_BL_TO_PTR_SI CMT_ASM(".byte 0X38, 0X1C # cmpb %bl, (%si)")
#define CMP_BL_TO_PTR_DI CMT_ASM(".byte 0X38, 0X1D # cmpb %bl, (%di)")

#define CMP_CL_TO_PTR_BX CMT_ASM(".byte 0X38, 0X0F # cmpb %cl, (%bx)")
#define CMP_CL_TO_PTR_BP CMT_ASM(".byte 0X38, 0X4E, 0X00 # cmpb %cl, (%bp)")
#define CMP_CL_TO_PTR_SI CMT_ASM(".byte 0X38, 0X0C # cmpb %cl, (%si)")
#define CMP_CL_TO_PTR_DI CMT_ASM(".byte 0X38, 0X0D # cmpb %cl, (%di)")

#define CMP_DL_TO_PTR_BX CMT_ASM(".byte 0X38, 0X17 # cmpb %dl, (%bx)")
#define CMP_DL_TO_PTR_BP CMT_ASM(".byte 0X38, 0X56, 0X00 # cmpb %dl, (%bp)")
#define CMP_DL_TO_PTR_SI CMT_ASM(".byte 0X38, 0X14 # cmpb %dl, (%si)")
#define CMP_DL_TO_PTR_DI CMT_ASM(".byte 0X38, 0X15 # cmpb %dl, (%di)")

#define CMP_AL_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X3A, 0X87 # cmpb " _(VALUE) "(%bx), %al")\
	CMT_ASM(".short " _(VALUE))
#define CMP_AL_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X3A, 0X86 # cmpb " _(VALUE) "(%bp), %al")\
	CMT_ASM(".short " _(VALUE))
#define CMP_AL_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X3A, 0X84 # cmpb " _(VALUE) "(%si), %al")\
	CMT_ASM(".short " _(VALUE))
#define CMP_AL_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X3A, 0X85 # cmpb " _(VALUE) "(%di), %al")\
	CMT_ASM(".short " _(VALUE))

#define CMP_BL_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X3A, 0X9F # cmpb " _(VALUE) "(%bx), %bl")\
	CMT_ASM(".short " _(VALUE))
#define CMP_BL_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X3A, 0X9E # cmpb " _(VALUE) "(%bp), %bl")\
	CMT_ASM(".short " _(VALUE))
#define CMP_BL_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X3A, 0X9C # cmpb " _(VALUE) "(%si), %bl")\
	CMT_ASM(".short " _(VALUE))
#define CMP_BL_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X3A, 0X9D # cmpb " _(VALUE) "(%di), %bl")\
	CMT_ASM(".short " _(VALUE))

#define CMP_CL_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X3A, 0X8F # cmpb " _(VALUE) "(%bx), %cl")\
	CMT_ASM(".short " _(VALUE))
#define CMP_CL_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X3A, 0X8E # cmpb " _(VALUE) "(%bp), %cl")\
	CMT_ASM(".short " _(VALUE))
#define CMP_CL_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X3A, 0X8C # cmpb " _(VALUE) "(%si), %cl")\
	CMT_ASM(".short " _(VALUE))
#define CMP_CL_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X3A, 0X8D # cmpb " _(VALUE) "(%di), %cl")\
	CMT_ASM(".short " _(VALUE))

#define CMP_DL_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X3A, 0X97 # cmpb " _(VALUE) "(%bx), %dl")\
	CMT_ASM(".short " _(VALUE))
#define CMP_DL_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X3A, 0X96 # cmpb " _(VALUE) "(%bp), %dl")\
	CMT_ASM(".short " _(VALUE))
#define CMP_DL_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X3A, 0X94 # cmpb " _(VALUE) "(%si), %dl")\
	CMT_ASM(".short " _(VALUE))
#define CMP_DL_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X3A, 0X95 # cmpb " _(VALUE) "(%di), %dl")\
	CMT_ASM(".short " _(VALUE))

#define CMP_AL_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X38, 0X87 # cmpb %al, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define CMP_AL_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X38, 0X86 # cmpb %al, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define CMP_AL_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X38, 0X84 # cmpb %al, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define CMP_AL_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X38, 0X85 # cmpb %al, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define CMP_BL_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X38, 0X9F # cmpb %bl, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define CMP_BL_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X38, 0X9E # cmpb %bl, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define CMP_BL_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X38, 0X9C # cmpb %bl, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define CMP_BL_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X38, 0X9D # cmpb %bl, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define CMP_CL_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X38, 0X8F # cmpb %cl, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define CMP_CL_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X38, 0X8E # cmpb %cl, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define CMP_CL_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X38, 0X8C # cmpb %cl, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define CMP_CL_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X38, 0X8D # cmpb %cl, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define CMP_DL_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X38, 0X97 # cmpb %dl, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define CMP_DL_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X38, 0X96 # cmpb %dl, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define CMP_DL_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X38, 0X94 # cmpb %dl, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define CMP_DL_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X38, 0X95 # cmpb %dl, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))
#endif /* __SYSTEM_16_BIT__ */

#ifdef __SYSTEM_32_BIT__
#define CMP_AL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X3A, 0X05 # cmpb (" _(VALUE) "), %al")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X3A, 0X1D # cmpb (" _(VALUE) "), %bl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X3A, 0X0D # cmpb (" _(VALUE) "), %cl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X3A, 0X15 # cmpb (" _(VALUE) "), %dl")\
	CMT_ASM(".long " _(VALUE))

#define CMP_AL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X38, 0X05 # cmpb %al, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X38, 0X1D # cmpb %bl, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X38, 0X0D # cmpb %cl, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X38, 0X15 # cmpb %dl, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))

#define CMP_AL_FROM_PTR_EAX CMT_ASM(".byte 0X3A, 0X00 # cmpb (%eax), %al")
#define CMP_AL_FROM_PTR_EBX CMT_ASM(".byte 0X3A, 0X03 # cmpb (%ebx), %al")
#define CMP_AL_FROM_PTR_ECX CMT_ASM(".byte 0X3A, 0X01 # cmpb (%ecx), %al")
#define CMP_AL_FROM_PTR_EDX CMT_ASM(".byte 0X3A, 0X02 # cmpb (%edx), %al")
#define CMP_AL_FROM_PTR_EDI CMT_ASM(".byte 0X3A, 0X07 # cmpb (%edi), %al")
#define CMP_AL_FROM_PTR_ESI CMT_ASM(".byte 0X3A, 0X06 # cmpb (%esi), %al")
#define CMP_AL_FROM_PTR_EBP CMT_ASM(".byte 0X3A, 0X45, 0X00 # cmpb (%ebp), %al")
#define CMP_AL_FROM_PTR_ESP CMT_ASM(".byte 0X3A, 0X04, 0X24 # cmpb (%esp), %al")
#define CMP_AL_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X3A, 0X07 # cmpb (%bx), %al")
#define CMP_AL_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X3A, 0X46, 0X00 # cmpb (%bp), %al")
#define CMP_AL_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X3A, 0X04 # cmpb (%si), %al")
#define CMP_AL_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X3A, 0X05 # cmpb (%di), %al")

#define CMP_BL_FROM_PTR_EAX CMT_ASM(".byte 0X3A, 0X18 # cmpb (%eax), %bl")
#define CMP_BL_FROM_PTR_EBX CMT_ASM(".byte 0X3A, 0X1B # cmpb (%ebx), %bl")
#define CMP_BL_FROM_PTR_ECX CMT_ASM(".byte 0X3A, 0X19 # cmpb (%ecx), %bl")
#define CMP_BL_FROM_PTR_EDX CMT_ASM(".byte 0X3A, 0X1A # cmpb (%edx), %bl")
#define CMP_BL_FROM_PTR_EDI CMT_ASM(".byte 0X3A, 0X1F # cmpb (%edi), %bl")
#define CMP_BL_FROM_PTR_ESI CMT_ASM(".byte 0X3A, 0X1E # cmpb (%esi), %bl")
#define CMP_BL_FROM_PTR_EBP CMT_ASM(".byte 0X3A, 0X5D, 0X00 # cmpb (%ebp), %bl")
#define CMP_BL_FROM_PTR_ESP CMT_ASM(".byte 0X3A, 0X1C, 0X24 # cmpb (%esp), %bl")
#define CMP_BL_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X3A, 0X1F # cmpb (%bx), %bl")
#define CMP_BL_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X3A, 0X5E, 0X00 # cmpb (%bp), %bl")
#define CMP_BL_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X3A, 0X1C # cmpb (%si), %bl")
#define CMP_BL_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X3A, 0X1D # cmpb (%di), %bl")

#define CMP_CL_FROM_PTR_EAX CMT_ASM(".byte 0X3A, 0X08 # cmpb (%eax), %cl")
#define CMP_CL_FROM_PTR_EBX CMT_ASM(".byte 0X3A, 0X0B # cmpb (%ebx), %cl")
#define CMP_CL_FROM_PTR_ECX CMT_ASM(".byte 0X3A, 0X09 # cmpb (%ecx), %cl")
#define CMP_CL_FROM_PTR_EDX CMT_ASM(".byte 0X3A, 0X0A # cmpb (%edx), %cl")
#define CMP_CL_FROM_PTR_EDI CMT_ASM(".byte 0X3A, 0X0F # cmpb (%edi), %cl")
#define CMP_CL_FROM_PTR_ESI CMT_ASM(".byte 0X3A, 0X0E # cmpb (%esi), %cl")
#define CMP_CL_FROM_PTR_EBP CMT_ASM(".byte 0X3A, 0X4D, 0X00 # cmpb (%ebp), %cl")
#define CMP_CL_FROM_PTR_ESP CMT_ASM(".byte 0X3A, 0X0C, 0X24 # cmpb (%esp), %cl")
#define CMP_CL_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X3A, 0X0F # cmpb (%bx), %cl")
#define CMP_CL_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X3A, 0X4E, 0X00 # cmpb (%bp), %cl")
#define CMP_CL_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X3A, 0X0C # cmpb (%si), %cl")
#define CMP_CL_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X3A, 0X0D # cmpb (%di), %cl")

#define CMP_DL_FROM_PTR_EAX CMT_ASM(".byte 0X3A, 0X10 # cmpb (%eax), %dl")
#define CMP_DL_FROM_PTR_EBX CMT_ASM(".byte 0X3A, 0X13 # cmpb (%ebx), %dl")
#define CMP_DL_FROM_PTR_ECX CMT_ASM(".byte 0X3A, 0X11 # cmpb (%ecx), %dl")
#define CMP_DL_FROM_PTR_EDX CMT_ASM(".byte 0X3A, 0X12 # cmpb (%edx), %dl")
#define CMP_DL_FROM_PTR_EDI CMT_ASM(".byte 0X3A, 0X17 # cmpb (%edi), %dl")
#define CMP_DL_FROM_PTR_ESI CMT_ASM(".byte 0X3A, 0X16 # cmpb (%esi), %dl")
#define CMP_DL_FROM_PTR_EBP CMT_ASM(".byte 0X3A, 0X55, 0X00 # cmpb (%ebp), %dl")
#define CMP_DL_FROM_PTR_ESP CMT_ASM(".byte 0X3A, 0X14, 0X24 # cmpb (%esp), %dl")
#define CMP_DL_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X3A, 0X17 # cmpb (%bx), %dl")
#define CMP_DL_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X3A, 0X56, 0X00 # cmpb (%bp), %dl")
#define CMP_DL_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X3A, 0X14 # cmpb (%si), %dl")
#define CMP_DL_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X3A, 0X15 # cmpb (%di), %dl")

#define CMP_AL_TO_PTR_EAX CMT_ASM(".byte 0X38, 0X00 # cmpb %al, (%eax)")
#define CMP_AL_TO_PTR_EBX CMT_ASM(".byte 0X38, 0X03 # cmpb %al, (%ebx)")
#define CMP_AL_TO_PTR_ECX CMT_ASM(".byte 0X38, 0X01 # cmpb %al, (%ecx)")
#define CMP_AL_TO_PTR_EDX CMT_ASM(".byte 0X38, 0X02 # cmpb %al, (%edx)")
#define CMP_AL_TO_PTR_EDI CMT_ASM(".byte 0X38, 0X07 # cmpb %al, (%edi)")
#define CMP_AL_TO_PTR_ESI CMT_ASM(".byte 0X38, 0X06 # cmpb %al, (%esi)")
#define CMP_AL_TO_PTR_EBP CMT_ASM(".byte 0X38, 0X45, 0X00 # cmpb %al, (%ebp)")
#define CMP_AL_TO_PTR_ESP CMT_ASM(".byte 0X38, 0X04, 0X24 # cmpb %al, (%esp)")
#define CMP_AL_TO_PTR_BX CMT_ASM(".byte 0X67, 0X38, 0X07 # cmpb %al, (%bx)")
#define CMP_AL_TO_PTR_BP CMT_ASM(".byte 0X67, 0X38, 0X46, 0X00 # cmpb %al, (%bp)")
#define CMP_AL_TO_PTR_SI CMT_ASM(".byte 0X67, 0X38, 0X04 # cmpb %al, (%si)")
#define CMP_AL_TO_PTR_DI CMT_ASM(".byte 0X67, 0X38, 0X05 # cmpb %al, (%di)")

#define CMP_BL_TO_PTR_EAX CMT_ASM(".byte 0X38, 0X18 # cmpb %bl, (%eax)")
#define CMP_BL_TO_PTR_EBX CMT_ASM(".byte 0X38, 0X1B # cmpb %bl, (%ebx)")
#define CMP_BL_TO_PTR_ECX CMT_ASM(".byte 0X38, 0X19 # cmpb %bl, (%ecx)")
#define CMP_BL_TO_PTR_EDX CMT_ASM(".byte 0X38, 0X1A # cmpb %bl, (%edx)")
#define CMP_BL_TO_PTR_EDI CMT_ASM(".byte 0X38, 0X1F # cmpb %bl, (%edi)")
#define CMP_BL_TO_PTR_ESI CMT_ASM(".byte 0X38, 0X1E # cmpb %bl, (%esi)")
#define CMP_BL_TO_PTR_EBP CMT_ASM(".byte 0X38, 0X5D, 0X00 # cmpb %bl, (%ebp)")
#define CMP_BL_TO_PTR_ESP CMT_ASM(".byte 0X38, 0X1C, 0X24 # cmpb %bl, (%esp)")
#define CMP_BL_TO_PTR_BX CMT_ASM(".byte 0X67, 0X38, 0X1F # cmpb %bl, (%bx)")
#define CMP_BL_TO_PTR_BP CMT_ASM(".byte 0X67, 0X38, 0X5E, 0X00 # cmpb %bl, (%bp)")
#define CMP_BL_TO_PTR_SI CMT_ASM(".byte 0X67, 0X38, 0X1C # cmpb %bl, (%si)")
#define CMP_BL_TO_PTR_DI CMT_ASM(".byte 0X67, 0X38, 0X1D # cmpb %bl, (%di)")

#define CMP_CL_TO_PTR_EAX CMT_ASM(".byte 0X38, 0X08 # cmpb %cl, (%eax)")
#define CMP_CL_TO_PTR_EBX CMT_ASM(".byte 0X38, 0X0B # cmpb %cl, (%ebx)")
#define CMP_CL_TO_PTR_ECX CMT_ASM(".byte 0X38, 0X09 # cmpb %cl, (%ecx)")
#define CMP_CL_TO_PTR_EDX CMT_ASM(".byte 0X38, 0X0A # cmpb %cl, (%edx)")
#define CMP_CL_TO_PTR_EDI CMT_ASM(".byte 0X38, 0X0F # cmpb %cl, (%edi)")
#define CMP_CL_TO_PTR_ESI CMT_ASM(".byte 0X38, 0X0E # cmpb %cl, (%esi)")
#define CMP_CL_TO_PTR_EBP CMT_ASM(".byte 0X38, 0X4D, 0X00 # cmpb %cl, (%ebp)")
#define CMP_CL_TO_PTR_ESP CMT_ASM(".byte 0X38, 0X0C, 0X24 # cmpb %cl, (%esp)")
#define CMP_CL_TO_PTR_BX CMT_ASM(".byte 0X67, 0X38, 0X0F # cmpb %cl, (%bx)")
#define CMP_CL_TO_PTR_BP CMT_ASM(".byte 0X67, 0X38, 0X4E, 0X00 # cmpb %cl, (%bp)")
#define CMP_CL_TO_PTR_SI CMT_ASM(".byte 0X67, 0X38, 0X0C # cmpb %cl, (%si)")
#define CMP_CL_TO_PTR_DI CMT_ASM(".byte 0X67, 0X38, 0X0D # cmpb %cl, (%di)")

#define CMP_DL_TO_PTR_EAX CMT_ASM(".byte 0X38, 0X10 # cmpb %dl, (%eax)")
#define CMP_DL_TO_PTR_EBX CMT_ASM(".byte 0X38, 0X13 # cmpb %dl, (%ebx)")
#define CMP_DL_TO_PTR_ECX CMT_ASM(".byte 0X38, 0X11 # cmpb %dl, (%ecx)")
#define CMP_DL_TO_PTR_EDX CMT_ASM(".byte 0X38, 0X12 # cmpb %dl, (%edx)")
#define CMP_DL_TO_PTR_EDI CMT_ASM(".byte 0X38, 0X17 # cmpb %dl, (%edi)")
#define CMP_DL_TO_PTR_ESI CMT_ASM(".byte 0X38, 0X16 # cmpb %dl, (%esi)")
#define CMP_DL_TO_PTR_EBP CMT_ASM(".byte 0X38, 0X55, 0X00 # cmpb %dl, (%ebp)")
#define CMP_DL_TO_PTR_ESP CMT_ASM(".byte 0X38, 0X14, 0X24 # cmpb %dl, (%esp)")
#define CMP_DL_TO_PTR_BX CMT_ASM(".byte 0X67, 0X38, 0X17 # cmpb %dl, (%bx)")
#define CMP_DL_TO_PTR_BP CMT_ASM(".byte 0X67, 0X38, 0X56, 0X00 # cmpb %dl, (%bp)")
#define CMP_DL_TO_PTR_SI CMT_ASM(".byte 0X67, 0X38, 0X14 # cmpb %dl, (%si)")
#define CMP_DL_TO_PTR_DI CMT_ASM(".byte 0X67, 0X38, 0X15 # cmpb %dl, (%di)")

#define CMP_AL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X3A, 0X80 # cmpb " _(VALUE) "(%eax), %al")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X3A, 0X83 # cmpb " _(VALUE) "(%ebx), %al")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X3A, 0X81 # cmpb " _(VALUE) "(%ecx), %al")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X3A, 0X82 # cmpb " _(VALUE) "(%edx), %al")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X3A, 0X87 # cmpb " _(VALUE) "(%edi), %al")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X3A, 0X86 # cmpb " _(VALUE) "(%esi), %al")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X3A, 0X85 # cmpb " _(VALUE) "(%ebp), %al")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X3A, 0X84, 0X24 # cmpb " _(VALUE) "(%esp), %al")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AL_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3A, 0X87 # cmpb " _(VALUE) "(%bx), %al")\
	CMT_ASM(".short " _(VALUE))
#define CMP_AL_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3A, 0X86 # cmpb " _(VALUE) "(%bp), %al")\
	CMT_ASM(".short " _(VALUE))
#define CMP_AL_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3A, 0X84 # cmpb " _(VALUE) "(%si), %al")\
	CMT_ASM(".short " _(VALUE))
#define CMP_AL_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3A, 0X85 # cmpb " _(VALUE) "(%di), %al")\
	CMT_ASM(".short " _(VALUE))

#define CMP_BL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X3A, 0X98 # cmpb " _(VALUE) "(%eax), %bl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X3A, 0X9B # cmpb " _(VALUE) "(%ebx), %bl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X3A, 0X99 # cmpb " _(VALUE) "(%ecx), %bl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X3A, 0X9A # cmpb " _(VALUE) "(%edx), %bl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X3A, 0X9F # cmpb " _(VALUE) "(%edi), %bl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X3A, 0X9E # cmpb " _(VALUE) "(%esi), %bl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X3A, 0X9D # cmpb " _(VALUE) "(%ebp), %bl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X3A, 0X9C, 0X24 # cmpb " _(VALUE) "(%esp), %bl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BL_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3A, 0X9F # cmpb " _(VALUE) "(%bx), %bl")\
	CMT_ASM(".short " _(VALUE))
#define CMP_BL_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3A, 0X9E # cmpb " _(VALUE) "(%bp), %bl")\
	CMT_ASM(".short " _(VALUE))
#define CMP_BL_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3A, 0X9C # cmpb " _(VALUE) "(%si), %bl")\
	CMT_ASM(".short " _(VALUE))
#define CMP_BL_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3A, 0X9D # cmpb " _(VALUE) "(%di), %bl")\
	CMT_ASM(".short " _(VALUE))

#define CMP_CL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X3A, 0X88 # cmpb " _(VALUE) "(%eax), %cl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X3A, 0X8B # cmpb " _(VALUE) "(%ebx), %cl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X3A, 0X89 # cmpb " _(VALUE) "(%ecx), %cl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X3A, 0X8A # cmpb " _(VALUE) "(%edx), %cl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X3A, 0X8F # cmpb " _(VALUE) "(%edi), %cl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X3A, 0X8E # cmpb " _(VALUE) "(%esi), %cl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X3A, 0X8D # cmpb " _(VALUE) "(%ebp), %cl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X3A, 0X8C, 0X24 # cmpb " _(VALUE) "(%esp), %cl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CL_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3A, 0X8F # cmpb " _(VALUE) "(%bx), %cl")\
	CMT_ASM(".short " _(VALUE))
#define CMP_CL_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3A, 0X8E # cmpb " _(VALUE) "(%bp), %cl")\
	CMT_ASM(".short " _(VALUE))
#define CMP_CL_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3A, 0X8C # cmpb " _(VALUE) "(%si), %cl")\
	CMT_ASM(".short " _(VALUE))
#define CMP_CL_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3A, 0X8D # cmpb " _(VALUE) "(%di), %cl")\
	CMT_ASM(".short " _(VALUE))

#define CMP_DL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X3A, 0X90 # cmpb " _(VALUE) "(%eax), %dl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X3A, 0X93 # cmpb " _(VALUE) "(%ebx), %dl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X3A, 0X91 # cmpb " _(VALUE) "(%ecx), %dl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X3A, 0X92 # cmpb " _(VALUE) "(%edx), %dl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X3A, 0X97 # cmpb " _(VALUE) "(%edi), %dl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X3A, 0X96 # cmpb " _(VALUE) "(%esi), %dl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X3A, 0X95 # cmpb " _(VALUE) "(%ebp), %dl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X3A, 0X94, 0X24 # cmpb " _(VALUE) "(%esp), %dl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DL_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3A, 0X97 # cmpb " _(VALUE) "(%bx), %dl")\
	CMT_ASM(".short " _(VALUE))
#define CMP_DL_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3A, 0X96 # cmpb " _(VALUE) "(%bp), %dl")\
	CMT_ASM(".short " _(VALUE))
#define CMP_DL_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3A, 0X94 # cmpb " _(VALUE) "(%si), %dl")\
	CMT_ASM(".short " _(VALUE))
#define CMP_DL_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3A, 0X95 # cmpb " _(VALUE) "(%di), %dl")\
	CMT_ASM(".short " _(VALUE))

#define CMP_AL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X38, 0X80 # cmpb %al, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X38, 0X83 # cmpb %al, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X38, 0X81 # cmpb %al, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X38, 0X82 # cmpb %al, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X38, 0X87 # cmpb %al, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X38, 0X86 # cmpb %al, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X38, 0X85 # cmpb %al, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X38, 0X84, 0X24 # cmpb %al, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AL_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X38, 0X87 # cmpb %al, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define CMP_AL_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X38, 0X86 # cmpb %al, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define CMP_AL_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X38, 0X84 # cmpb %al, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define CMP_AL_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X38, 0X85 # cmpb %al, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define CMP_BL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X38, 0X98 # cmpb %bl, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X38, 0X9B # cmpb %bl, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X38, 0X99 # cmpb %bl, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X38, 0X9A # cmpb %bl, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X38, 0X9F # cmpb %bl, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X38, 0X9E # cmpb %bl, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X38, 0X9D # cmpb %bl, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X38, 0X9C, 0X24 # cmpb %bl, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BL_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X38, 0X9F # cmpb %bl, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define CMP_BL_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X38, 0X9E # cmpb %bl, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define CMP_BL_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X38, 0X9C # cmpb %bl, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define CMP_BL_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X38, 0X9D # cmpb %bl, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define CMP_CL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X38, 0X88 # cmpb %cl, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X38, 0X8B # cmpb %cl, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X38, 0X89 # cmpb %cl, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X38, 0X8A # cmpb %cl, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X38, 0X8F # cmpb %cl, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X38, 0X8E # cmpb %cl, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X38, 0X8D # cmpb %cl, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X38, 0X8C, 0X24 # cmpb %cl, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CL_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X38, 0X8F # cmpb %cl, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define CMP_CL_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X38, 0X8E # cmpb %cl, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define CMP_CL_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X38, 0X8C # cmpb %cl, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define CMP_CL_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X38, 0X8D # cmpb %cl, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define CMP_DL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X38, 0X90 # cmpb %dl, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X38, 0X93 # cmpb %dl, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X38, 0X91 # cmpb %dl, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X38, 0X92 # cmpb %dl, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X38, 0X97 # cmpb %dl, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X38, 0X96 # cmpb %dl, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X38, 0X95 # cmpb %dl, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X38, 0X94, 0X24 # cmpb %dl, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DL_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X38, 0X97 # cmpb %dl, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define CMP_DL_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X38, 0X96 # cmpb %dl, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define CMP_DL_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X38, 0X94 # cmpb %dl, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define CMP_DL_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X38, 0X95 # cmpb %dl, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define CMP_AL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X3A, 0X04, 0X25 # cmpb (" _(VALUE) "), %al")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X3A, 0X1C, 0X25 # cmpb (" _(VALUE) "), %bl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X3A, 0X0C, 0X25 # cmpb (" _(VALUE) "), %cl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X3A, 0X14, 0X25 # cmpb (" _(VALUE) "), %dl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DIL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X40, 0X3A, 0X3C, 0X25 # cmpb (" _(VALUE) "), %dil")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SIL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X40, 0X3A, 0X34, 0X25 # cmpb (" _(VALUE) "), %sil")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BPL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X40, 0X3A, 0X2C, 0X25 # cmpb (" _(VALUE) "), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SPL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X40, 0X3A, 0X24, 0X25 # cmpb (" _(VALUE) "), %spl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8B_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3A, 0X04, 0X25 # cmpb (" _(VALUE) "), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9B_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3A, 0X0C, 0X25 # cmpb (" _(VALUE) "), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10B_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3A, 0X14, 0X25 # cmpb (" _(VALUE) "), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11B_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3A, 0X1C, 0X25 # cmpb (" _(VALUE) "), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12B_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3A, 0X24, 0X25 # cmpb (" _(VALUE) "), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13B_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3A, 0X2C, 0X25 # cmpb (" _(VALUE) "), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14B_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3A, 0X34, 0X25 # cmpb (" _(VALUE) "), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15B_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3A, 0X3C, 0X25 # cmpb (" _(VALUE) "), %r15b")\
	CMT_ASM(".long " _(VALUE))

#define CMP_AL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X38, 0X04, 0X25 # cmpb %al, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X38, 0X1C, 0X25 # cmpb %bl, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X38, 0X0C, 0X25 # cmpb %cl, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X38, 0X14, 0X25 # cmpb %dl, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DIL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X40, 0X38, 0X3C, 0X25 # cmpb %dil, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SIL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X40, 0X38, 0X34, 0X25 # cmpb %sil, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BPL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X40, 0X38, 0X2C, 0X25 # cmpb %bpl, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SPL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X40, 0X38, 0X24, 0X25 # cmpb %spl, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8B_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X38, 0X04, 0X25 # cmpb %r8b, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9B_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X38, 0X0C, 0X25 # cmpb %r9b, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10B_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X38, 0X14, 0X25 # cmpb %r10b, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11B_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X38, 0X1C, 0X25 # cmpb %r11b, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12B_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X38, 0X24, 0X25 # cmpb %r12b, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13B_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X38, 0X2C, 0X25 # cmpb %r13b, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14B_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X38, 0X34, 0X25 # cmpb %r14b, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15B_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X38, 0X3C, 0X25 # cmpb %r15b, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))

#define CMP_AL_FROM_PTR_RAX CMT_ASM(".byte 0X3A, 0X00 # cmpb (%rax), %al")
#define CMP_AL_FROM_PTR_RBX CMT_ASM(".byte 0X3A, 0X03 # cmpb (%rbx), %al")
#define CMP_AL_FROM_PTR_RCX CMT_ASM(".byte 0X3A, 0X01 # cmpb (%rcx), %al")
#define CMP_AL_FROM_PTR_RDX CMT_ASM(".byte 0X3A, 0X02 # cmpb (%rdx), %al")
#define CMP_AL_FROM_PTR_RDI CMT_ASM(".byte 0X3A, 0X07 # cmpb (%rdi), %al")
#define CMP_AL_FROM_PTR_RSI CMT_ASM(".byte 0X3A, 0X06 # cmpb (%rsi), %al")
#define CMP_AL_FROM_PTR_RBP CMT_ASM(".byte 0X3A, 0X45, 0X00 # cmpb (%rbp), %al")
#define CMP_AL_FROM_PTR_RSP CMT_ASM(".byte 0X3A, 0X04, 0X24 # cmpb (%rsp), %al")
#define CMP_AL_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X3A, 0X00 # cmpb (%r8), %al")
#define CMP_AL_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X3A, 0X01 # cmpb (%r9), %al")
#define CMP_AL_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X3A, 0X02 # cmpb (%r10), %al")
#define CMP_AL_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X3A, 0X03 # cmpb (%r11), %al")
#define CMP_AL_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X3A, 0X04, 0X24 # cmpb (%r12), %al")
#define CMP_AL_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X3A, 0X45, 0X00 # cmpb (%r13), %al")
#define CMP_AL_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X3A, 0X06 # cmpb (%r14), %al")
#define CMP_AL_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X3A, 0X07 # cmpb (%r15), %al")
#define CMP_AL_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X3A, 0X00 # cmpb (%eax), %al")
#define CMP_AL_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X3A, 0X03 # cmpb (%ebx), %al")
#define CMP_AL_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X3A, 0X01 # cmpb (%ecx), %al")
#define CMP_AL_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X3A, 0X02 # cmpb (%edx), %al")
#define CMP_AL_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X3A, 0X07 # cmpb (%edi), %al")
#define CMP_AL_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X3A, 0X06 # cmpb (%esi), %al")
#define CMP_AL_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X3A, 0X45, 0X00 # cmpb (%ebp), %al")
#define CMP_AL_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X3A, 0X04, 0X24 # cmpb (%esp), %al")

#define CMP_BL_FROM_PTR_RAX CMT_ASM(".byte 0X3A, 0X18 # cmpb (%rax), %bl")
#define CMP_BL_FROM_PTR_RBX CMT_ASM(".byte 0X3A, 0X1B # cmpb (%rbx), %bl")
#define CMP_BL_FROM_PTR_RCX CMT_ASM(".byte 0X3A, 0X19 # cmpb (%rcx), %bl")
#define CMP_BL_FROM_PTR_RDX CMT_ASM(".byte 0X3A, 0X1A # cmpb (%rdx), %bl")
#define CMP_BL_FROM_PTR_RDI CMT_ASM(".byte 0X3A, 0X1F # cmpb (%rdi), %bl")
#define CMP_BL_FROM_PTR_RSI CMT_ASM(".byte 0X3A, 0X1E # cmpb (%rsi), %bl")
#define CMP_BL_FROM_PTR_RBP CMT_ASM(".byte 0X3A, 0X5D, 0X00 # cmpb (%rbp), %bl")
#define CMP_BL_FROM_PTR_RSP CMT_ASM(".byte 0X3A, 0X1C, 0X24 # cmpb (%rsp), %bl")
#define CMP_BL_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X3A, 0X18 # cmpb (%r8), %bl")
#define CMP_BL_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X3A, 0X19 # cmpb (%r9), %bl")
#define CMP_BL_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X3A, 0X1A # cmpb (%r10), %bl")
#define CMP_BL_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X3A, 0X1B # cmpb (%r11), %bl")
#define CMP_BL_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X3A, 0X1C, 0X24 # cmpb (%r12), %bl")
#define CMP_BL_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X3A, 0X5D, 0X00 # cmpb (%r13), %bl")
#define CMP_BL_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X3A, 0X1E # cmpb (%r14), %bl")
#define CMP_BL_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X3A, 0X1F # cmpb (%r15), %bl")
#define CMP_BL_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X3A, 0X18 # cmpb (%eax), %bl")
#define CMP_BL_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X3A, 0X1B # cmpb (%ebx), %bl")
#define CMP_BL_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X3A, 0X19 # cmpb (%ecx), %bl")
#define CMP_BL_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X3A, 0X1A # cmpb (%edx), %bl")
#define CMP_BL_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X3A, 0X1F # cmpb (%edi), %bl")
#define CMP_BL_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X3A, 0X1E # cmpb (%esi), %bl")
#define CMP_BL_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X3A, 0X5D, 0X00 # cmpb (%ebp), %bl")
#define CMP_BL_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X3A, 0X1C, 0X24 # cmpb (%esp), %bl")

#define CMP_CL_FROM_PTR_RAX CMT_ASM(".byte 0X3A, 0X08 # cmpb (%rax), %cl")
#define CMP_CL_FROM_PTR_RBX CMT_ASM(".byte 0X3A, 0X0B # cmpb (%rbx), %cl")
#define CMP_CL_FROM_PTR_RCX CMT_ASM(".byte 0X3A, 0X09 # cmpb (%rcx), %cl")
#define CMP_CL_FROM_PTR_RDX CMT_ASM(".byte 0X3A, 0X0A # cmpb (%rdx), %cl")
#define CMP_CL_FROM_PTR_RDI CMT_ASM(".byte 0X3A, 0X0F # cmpb (%rdi), %cl")
#define CMP_CL_FROM_PTR_RSI CMT_ASM(".byte 0X3A, 0X0E # cmpb (%rsi), %cl")
#define CMP_CL_FROM_PTR_RBP CMT_ASM(".byte 0X3A, 0X4D, 0X00 # cmpb (%rbp), %cl")
#define CMP_CL_FROM_PTR_RSP CMT_ASM(".byte 0X3A, 0X0C, 0X24 # cmpb (%rsp), %cl")
#define CMP_CL_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X3A, 0X08 # cmpb (%r8), %cl")
#define CMP_CL_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X3A, 0X09 # cmpb (%r9), %cl")
#define CMP_CL_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X3A, 0X0A # cmpb (%r10), %cl")
#define CMP_CL_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X3A, 0X0B # cmpb (%r11), %cl")
#define CMP_CL_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X3A, 0X0C, 0X24 # cmpb (%r12), %cl")
#define CMP_CL_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X3A, 0X4D, 0X00 # cmpb (%r13), %cl")
#define CMP_CL_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X3A, 0X0E # cmpb (%r14), %cl")
#define CMP_CL_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X3A, 0X0F # cmpb (%r15), %cl")
#define CMP_CL_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X3A, 0X08 # cmpb (%eax), %cl")
#define CMP_CL_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X3A, 0X0B # cmpb (%ebx), %cl")
#define CMP_CL_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X3A, 0X09 # cmpb (%ecx), %cl")
#define CMP_CL_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X3A, 0X0A # cmpb (%edx), %cl")
#define CMP_CL_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X3A, 0X0F # cmpb (%edi), %cl")
#define CMP_CL_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X3A, 0X0E # cmpb (%esi), %cl")
#define CMP_CL_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X3A, 0X4D, 0X00 # cmpb (%ebp), %cl")
#define CMP_CL_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X3A, 0X0C, 0X24 # cmpb (%esp), %cl")

#define CMP_DL_FROM_PTR_RAX CMT_ASM(".byte 0X3A, 0X10 # cmpb (%rax), %dl")
#define CMP_DL_FROM_PTR_RBX CMT_ASM(".byte 0X3A, 0X13 # cmpb (%rbx), %dl")
#define CMP_DL_FROM_PTR_RCX CMT_ASM(".byte 0X3A, 0X11 # cmpb (%rcx), %dl")
#define CMP_DL_FROM_PTR_RDX CMT_ASM(".byte 0X3A, 0X12 # cmpb (%rdx), %dl")
#define CMP_DL_FROM_PTR_RDI CMT_ASM(".byte 0X3A, 0X17 # cmpb (%rdi), %dl")
#define CMP_DL_FROM_PTR_RSI CMT_ASM(".byte 0X3A, 0X16 # cmpb (%rsi), %dl")
#define CMP_DL_FROM_PTR_RBP CMT_ASM(".byte 0X3A, 0X55, 0X00 # cmpb (%rbp), %dl")
#define CMP_DL_FROM_PTR_RSP CMT_ASM(".byte 0X3A, 0X14, 0X24 # cmpb (%rsp), %dl")
#define CMP_DL_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X3A, 0X10 # cmpb (%r8), %dl")
#define CMP_DL_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X3A, 0X11 # cmpb (%r9), %dl")
#define CMP_DL_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X3A, 0X12 # cmpb (%r10), %dl")
#define CMP_DL_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X3A, 0X13 # cmpb (%r11), %dl")
#define CMP_DL_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X3A, 0X14, 0X24 # cmpb (%r12), %dl")
#define CMP_DL_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X3A, 0X55, 0X00 # cmpb (%r13), %dl")
#define CMP_DL_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X3A, 0X16 # cmpb (%r14), %dl")
#define CMP_DL_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X3A, 0X17 # cmpb (%r15), %dl")
#define CMP_DL_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X3A, 0X10 # cmpb (%eax), %dl")
#define CMP_DL_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X3A, 0X13 # cmpb (%ebx), %dl")
#define CMP_DL_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X3A, 0X11 # cmpb (%ecx), %dl")
#define CMP_DL_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X3A, 0X12 # cmpb (%edx), %dl")
#define CMP_DL_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X3A, 0X17 # cmpb (%edi), %dl")
#define CMP_DL_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X3A, 0X16 # cmpb (%esi), %dl")
#define CMP_DL_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X3A, 0X55, 0X00 # cmpb (%ebp), %dl")
#define CMP_DL_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X3A, 0X14, 0X24 # cmpb (%esp), %dl")

#define CMP_DIL_FROM_PTR_RAX CMT_ASM(".byte 0X40, 0X3A, 0X38 # cmpb (%rax), %dil")
#define CMP_DIL_FROM_PTR_RBX CMT_ASM(".byte 0X40, 0X3A, 0X3B # cmpb (%rbx), %dil")
#define CMP_DIL_FROM_PTR_RCX CMT_ASM(".byte 0X40, 0X3A, 0X39 # cmpb (%rcx), %dil")
#define CMP_DIL_FROM_PTR_RDX CMT_ASM(".byte 0X40, 0X3A, 0X3A # cmpb (%rdx), %dil")
#define CMP_DIL_FROM_PTR_RDI CMT_ASM(".byte 0X40, 0X3A, 0X3F # cmpb (%rdi), %dil")
#define CMP_DIL_FROM_PTR_RSI CMT_ASM(".byte 0X40, 0X3A, 0X3E # cmpb (%rsi), %dil")
#define CMP_DIL_FROM_PTR_RBP CMT_ASM(".byte 0X40, 0X3A, 0X7D, 0X00 # cmpb (%rbp), %dil")
#define CMP_DIL_FROM_PTR_RSP CMT_ASM(".byte 0X40, 0X3A, 0X3C, 0X24 # cmpb (%rsp), %dil")
#define CMP_DIL_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X3A, 0X38 # cmpb (%r8), %dil")
#define CMP_DIL_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X3A, 0X39 # cmpb (%r9), %dil")
#define CMP_DIL_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X3A, 0X3A # cmpb (%r10), %dil")
#define CMP_DIL_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X3A, 0X3B # cmpb (%r11), %dil")
#define CMP_DIL_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X3A, 0X3C, 0X24 # cmpb (%r12), %dil")
#define CMP_DIL_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X3A, 0X7D, 0X00 # cmpb (%r13), %dil")
#define CMP_DIL_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X3A, 0X3E # cmpb (%r14), %dil")
#define CMP_DIL_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X3A, 0X3F # cmpb (%r15), %dil")
#define CMP_DIL_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X40, 0X3A, 0X38 # cmpb (%eax), %dil")
#define CMP_DIL_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X40, 0X3A, 0X3B # cmpb (%ebx), %dil")
#define CMP_DIL_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X40, 0X3A, 0X39 # cmpb (%ecx), %dil")
#define CMP_DIL_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X40, 0X3A, 0X3A # cmpb (%edx), %dil")
#define CMP_DIL_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X40, 0X3A, 0X3F # cmpb (%edi), %dil")
#define CMP_DIL_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X40, 0X3A, 0X3E # cmpb (%esi), %dil")
#define CMP_DIL_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X40, 0X3A, 0X7D, 0X00 # cmpb (%ebp), %dil")
#define CMP_DIL_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X40, 0X3A, 0X3C, 0X24 # cmpb (%esp), %dil")

#define CMP_SIL_FROM_PTR_RAX CMT_ASM(".byte 0X40, 0X3A, 0X30 # cmpb (%rax), %sil")
#define CMP_SIL_FROM_PTR_RBX CMT_ASM(".byte 0X40, 0X3A, 0X33 # cmpb (%rbx), %sil")
#define CMP_SIL_FROM_PTR_RCX CMT_ASM(".byte 0X40, 0X3A, 0X31 # cmpb (%rcx), %sil")
#define CMP_SIL_FROM_PTR_RDX CMT_ASM(".byte 0X40, 0X3A, 0X32 # cmpb (%rdx), %sil")
#define CMP_SIL_FROM_PTR_RDI CMT_ASM(".byte 0X40, 0X3A, 0X37 # cmpb (%rdi), %sil")
#define CMP_SIL_FROM_PTR_RSI CMT_ASM(".byte 0X40, 0X3A, 0X36 # cmpb (%rsi), %sil")
#define CMP_SIL_FROM_PTR_RBP CMT_ASM(".byte 0X40, 0X3A, 0X75, 0X00 # cmpb (%rbp), %sil")
#define CMP_SIL_FROM_PTR_RSP CMT_ASM(".byte 0X40, 0X3A, 0X34, 0X24 # cmpb (%rsp), %sil")
#define CMP_SIL_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X3A, 0X30 # cmpb (%r8), %sil")
#define CMP_SIL_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X3A, 0X31 # cmpb (%r9), %sil")
#define CMP_SIL_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X3A, 0X32 # cmpb (%r10), %sil")
#define CMP_SIL_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X3A, 0X33 # cmpb (%r11), %sil")
#define CMP_SIL_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X3A, 0X34, 0X24 # cmpb (%r12), %sil")
#define CMP_SIL_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X3A, 0X75, 0X00 # cmpb (%r13), %sil")
#define CMP_SIL_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X3A, 0X36 # cmpb (%r14), %sil")
#define CMP_SIL_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X3A, 0X37 # cmpb (%r15), %sil")
#define CMP_SIL_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X40, 0X3A, 0X30 # cmpb (%eax), %sil")
#define CMP_SIL_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X40, 0X3A, 0X33 # cmpb (%ebx), %sil")
#define CMP_SIL_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X40, 0X3A, 0X31 # cmpb (%ecx), %sil")
#define CMP_SIL_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X40, 0X3A, 0X32 # cmpb (%edx), %sil")
#define CMP_SIL_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X40, 0X3A, 0X37 # cmpb (%edi), %sil")
#define CMP_SIL_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X40, 0X3A, 0X36 # cmpb (%esi), %sil")
#define CMP_SIL_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X40, 0X3A, 0X75, 0X00 # cmpb (%ebp), %sil")
#define CMP_SIL_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X40, 0X3A, 0X34, 0X24 # cmpb (%esp), %sil")

#define CMP_BPL_FROM_PTR_RAX CMT_ASM(".byte 0X40, 0X3A, 0X28 # cmpb (%rax), %bpl")
#define CMP_BPL_FROM_PTR_RBX CMT_ASM(".byte 0X40, 0X3A, 0X2B # cmpb (%rbx), %bpl")
#define CMP_BPL_FROM_PTR_RCX CMT_ASM(".byte 0X40, 0X3A, 0X29 # cmpb (%rcx), %bpl")
#define CMP_BPL_FROM_PTR_RDX CMT_ASM(".byte 0X40, 0X3A, 0X2A # cmpb (%rdx), %bpl")
#define CMP_BPL_FROM_PTR_RDI CMT_ASM(".byte 0X40, 0X3A, 0X2F # cmpb (%rdi), %bpl")
#define CMP_BPL_FROM_PTR_RSI CMT_ASM(".byte 0X40, 0X3A, 0X2E # cmpb (%rsi), %bpl")
#define CMP_BPL_FROM_PTR_RBP CMT_ASM(".byte 0X40, 0X3A, 0X6D, 0X00 # cmpb (%rbp), %bpl")
#define CMP_BPL_FROM_PTR_RSP CMT_ASM(".byte 0X40, 0X3A, 0X2C, 0X24 # cmpb (%rsp), %bpl")
#define CMP_BPL_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X3A, 0X28 # cmpb (%r8), %bpl")
#define CMP_BPL_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X3A, 0X29 # cmpb (%r9), %bpl")
#define CMP_BPL_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X3A, 0X2A # cmpb (%r10), %bpl")
#define CMP_BPL_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X3A, 0X2B # cmpb (%r11), %bpl")
#define CMP_BPL_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X3A, 0X2C, 0X24 # cmpb (%r12), %bpl")
#define CMP_BPL_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X3A, 0X6D, 0X00 # cmpb (%r13), %bpl")
#define CMP_BPL_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X3A, 0X2E # cmpb (%r14), %bpl")
#define CMP_BPL_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X3A, 0X2F # cmpb (%r15), %bpl")
#define CMP_BPL_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X40, 0X3A, 0X28 # cmpb (%eax), %bpl")
#define CMP_BPL_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X40, 0X3A, 0X2B # cmpb (%ebx), %bpl")
#define CMP_BPL_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X40, 0X3A, 0X29 # cmpb (%ecx), %bpl")
#define CMP_BPL_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X40, 0X3A, 0X2A # cmpb (%edx), %bpl")
#define CMP_BPL_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X40, 0X3A, 0X2F # cmpb (%edi), %bpl")
#define CMP_BPL_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X40, 0X3A, 0X2E # cmpb (%esi), %bpl")
#define CMP_BPL_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X40, 0X3A, 0X6D, 0X00 # cmpb (%ebp), %bpl")
#define CMP_BPL_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X40, 0X3A, 0X2C, 0X24 # cmpb (%esp), %bpl")

#define CMP_SPL_FROM_PTR_RAX CMT_ASM(".byte 0X40, 0X3A, 0X20 # cmpb (%rax), %spl")
#define CMP_SPL_FROM_PTR_RBX CMT_ASM(".byte 0X40, 0X3A, 0X23 # cmpb (%rbx), %spl")
#define CMP_SPL_FROM_PTR_RCX CMT_ASM(".byte 0X40, 0X3A, 0X21 # cmpb (%rcx), %spl")
#define CMP_SPL_FROM_PTR_RDX CMT_ASM(".byte 0X40, 0X3A, 0X22 # cmpb (%rdx), %spl")
#define CMP_SPL_FROM_PTR_RDI CMT_ASM(".byte 0X40, 0X3A, 0X27 # cmpb (%rdi), %spl")
#define CMP_SPL_FROM_PTR_RSI CMT_ASM(".byte 0X40, 0X3A, 0X26 # cmpb (%rsi), %spl")
#define CMP_SPL_FROM_PTR_RBP CMT_ASM(".byte 0X40, 0X3A, 0X65, 0X00 # cmpb (%rbp), %spl")
#define CMP_SPL_FROM_PTR_RSP CMT_ASM(".byte 0X40, 0X3A, 0X24, 0X24 # cmpb (%rsp), %spl")
#define CMP_SPL_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X3A, 0X20 # cmpb (%r8), %spl")
#define CMP_SPL_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X3A, 0X21 # cmpb (%r9), %spl")
#define CMP_SPL_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X3A, 0X22 # cmpb (%r10), %spl")
#define CMP_SPL_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X3A, 0X23 # cmpb (%r11), %spl")
#define CMP_SPL_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X3A, 0X24, 0X24 # cmpb (%r12), %spl")
#define CMP_SPL_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X3A, 0X65, 0X00 # cmpb (%r13), %spl")
#define CMP_SPL_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X3A, 0X26 # cmpb (%r14), %spl")
#define CMP_SPL_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X3A, 0X27 # cmpb (%r15), %spl")
#define CMP_SPL_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X40, 0X3A, 0X20 # cmpb (%eax), %spl")
#define CMP_SPL_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X40, 0X3A, 0X23 # cmpb (%ebx), %spl")
#define CMP_SPL_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X40, 0X3A, 0X21 # cmpb (%ecx), %spl")
#define CMP_SPL_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X40, 0X3A, 0X22 # cmpb (%edx), %spl")
#define CMP_SPL_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X40, 0X3A, 0X27 # cmpb (%edi), %spl")
#define CMP_SPL_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X40, 0X3A, 0X26 # cmpb (%esi), %spl")
#define CMP_SPL_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X40, 0X3A, 0X65, 0X00 # cmpb (%ebp), %spl")
#define CMP_SPL_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X40, 0X3A, 0X24, 0X24 # cmpb (%esp), %spl")

#define CMP_R8B_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X3A, 0X00 # cmpb (%rax), %r8b")
#define CMP_R8B_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X3A, 0X03 # cmpb (%rbx), %r8b")
#define CMP_R8B_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X3A, 0X01 # cmpb (%rcx), %r8b")
#define CMP_R8B_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X3A, 0X02 # cmpb (%rdx), %r8b")
#define CMP_R8B_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X3A, 0X07 # cmpb (%rdi), %r8b")
#define CMP_R8B_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X3A, 0X06 # cmpb (%rsi), %r8b")
#define CMP_R8B_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X3A, 0X45, 0X00 # cmpb (%rbp), %r8b")
#define CMP_R8B_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X3A, 0X04, 0X24 # cmpb (%rsp), %r8b")
#define CMP_R8B_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X3A, 0X00 # cmpb (%r8), %r8b")
#define CMP_R8B_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X3A, 0X01 # cmpb (%r9), %r8b")
#define CMP_R8B_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X3A, 0X02 # cmpb (%r10), %r8b")
#define CMP_R8B_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X3A, 0X03 # cmpb (%r11), %r8b")
#define CMP_R8B_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X3A, 0X04, 0X24 # cmpb (%r12), %r8b")
#define CMP_R8B_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X3A, 0X45, 0X00 # cmpb (%r13), %r8b")
#define CMP_R8B_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X3A, 0X06 # cmpb (%r14), %r8b")
#define CMP_R8B_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X3A, 0X07 # cmpb (%r15), %r8b")
#define CMP_R8B_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X3A, 0X00 # cmpb (%eax), %r8b")
#define CMP_R8B_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X3A, 0X03 # cmpb (%ebx), %r8b")
#define CMP_R8B_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X3A, 0X01 # cmpb (%ecx), %r8b")
#define CMP_R8B_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X3A, 0X02 # cmpb (%edx), %r8b")
#define CMP_R8B_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X3A, 0X07 # cmpb (%edi), %r8b")
#define CMP_R8B_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X3A, 0X06 # cmpb (%esi), %r8b")
#define CMP_R8B_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X3A, 0X45, 0X00 # cmpb (%ebp), %r8b")
#define CMP_R8B_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X3A, 0X04, 0X24 # cmpb (%esp), %r8b")

#define CMP_R9B_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X3A, 0X08 # cmpb (%rax), %r9b")
#define CMP_R9B_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X3A, 0X0B # cmpb (%rbx), %r9b")
#define CMP_R9B_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X3A, 0X09 # cmpb (%rcx), %r9b")
#define CMP_R9B_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X3A, 0X0A # cmpb (%rdx), %r9b")
#define CMP_R9B_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X3A, 0X0F # cmpb (%rdi), %r9b")
#define CMP_R9B_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X3A, 0X0E # cmpb (%rsi), %r9b")
#define CMP_R9B_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X3A, 0X4D, 0X00 # cmpb (%rbp), %r9b")
#define CMP_R9B_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X3A, 0X0C, 0X24 # cmpb (%rsp), %r9b")
#define CMP_R9B_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X3A, 0X08 # cmpb (%r8), %r9b")
#define CMP_R9B_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X3A, 0X09 # cmpb (%r9), %r9b")
#define CMP_R9B_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X3A, 0X0A # cmpb (%r10), %r9b")
#define CMP_R9B_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X3A, 0X0B # cmpb (%r11), %r9b")
#define CMP_R9B_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X3A, 0X0C, 0X24 # cmpb (%r12), %r9b")
#define CMP_R9B_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X3A, 0X4D, 0X00 # cmpb (%r13), %r9b")
#define CMP_R9B_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X3A, 0X0E # cmpb (%r14), %r9b")
#define CMP_R9B_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X3A, 0X0F # cmpb (%r15), %r9b")
#define CMP_R9B_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X3A, 0X08 # cmpb (%eax), %r9b")
#define CMP_R9B_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X3A, 0X0B # cmpb (%ebx), %r9b")
#define CMP_R9B_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X3A, 0X09 # cmpb (%ecx), %r9b")
#define CMP_R9B_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X3A, 0X0A # cmpb (%edx), %r9b")
#define CMP_R9B_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X3A, 0X0F # cmpb (%edi), %r9b")
#define CMP_R9B_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X3A, 0X0E # cmpb (%esi), %r9b")
#define CMP_R9B_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X3A, 0X4D, 0X00 # cmpb (%ebp), %r9b")
#define CMP_R9B_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X3A, 0X0C, 0X24 # cmpb (%esp), %r9b")

#define CMP_R10B_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X3A, 0X10 # cmpb (%rax), %r10b")
#define CMP_R10B_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X3A, 0X13 # cmpb (%rbx), %r10b")
#define CMP_R10B_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X3A, 0X11 # cmpb (%rcx), %r10b")
#define CMP_R10B_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X3A, 0X12 # cmpb (%rdx), %r10b")
#define CMP_R10B_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X3A, 0X17 # cmpb (%rdi), %r10b")
#define CMP_R10B_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X3A, 0X16 # cmpb (%rsi), %r10b")
#define CMP_R10B_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X3A, 0X55, 0X00 # cmpb (%rbp), %r10b")
#define CMP_R10B_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X3A, 0X14, 0X24 # cmpb (%rsp), %r10b")
#define CMP_R10B_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X3A, 0X10 # cmpb (%r8), %r10b")
#define CMP_R10B_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X3A, 0X11 # cmpb (%r9), %r10b")
#define CMP_R10B_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X3A, 0X12 # cmpb (%r10), %r10b")
#define CMP_R10B_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X3A, 0X13 # cmpb (%r11), %r10b")
#define CMP_R10B_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X3A, 0X14, 0X24 # cmpb (%r12), %r10b")
#define CMP_R10B_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X3A, 0X55, 0X00 # cmpb (%r13), %r10b")
#define CMP_R10B_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X3A, 0X16 # cmpb (%r14), %r10b")
#define CMP_R10B_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X3A, 0X17 # cmpb (%r15), %r10b")
#define CMP_R10B_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X3A, 0X10 # cmpb (%eax), %r10b")
#define CMP_R10B_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X3A, 0X13 # cmpb (%ebx), %r10b")
#define CMP_R10B_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X3A, 0X11 # cmpb (%ecx), %r10b")
#define CMP_R10B_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X3A, 0X12 # cmpb (%edx), %r10b")
#define CMP_R10B_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X3A, 0X17 # cmpb (%edi), %r10b")
#define CMP_R10B_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X3A, 0X16 # cmpb (%esi), %r10b")
#define CMP_R10B_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X3A, 0X55, 0X00 # cmpb (%ebp), %r10b")
#define CMP_R10B_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X3A, 0X14, 0X24 # cmpb (%esp), %r10b")

#define CMP_R11B_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X3A, 0X18 # cmpb (%rax), %r11b")
#define CMP_R11B_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X3A, 0X1B # cmpb (%rbx), %r11b")
#define CMP_R11B_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X3A, 0X19 # cmpb (%rcx), %r11b")
#define CMP_R11B_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X3A, 0X1A # cmpb (%rdx), %r11b")
#define CMP_R11B_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X3A, 0X1F # cmpb (%rdi), %r11b")
#define CMP_R11B_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X3A, 0X1E # cmpb (%rsi), %r11b")
#define CMP_R11B_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X3A, 0X5D, 0X00 # cmpb (%rbp), %r11b")
#define CMP_R11B_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X3A, 0X1C, 0X24 # cmpb (%rsp), %r11b")
#define CMP_R11B_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X3A, 0X18 # cmpb (%r8), %r11b")
#define CMP_R11B_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X3A, 0X19 # cmpb (%r9), %r11b")
#define CMP_R11B_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X3A, 0X1A # cmpb (%r10), %r11b")
#define CMP_R11B_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X3A, 0X1B # cmpb (%r11), %r11b")
#define CMP_R11B_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X3A, 0X1C, 0X24 # cmpb (%r12), %r11b")
#define CMP_R11B_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X3A, 0X5D, 0X00 # cmpb (%r13), %r11b")
#define CMP_R11B_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X3A, 0X1E # cmpb (%r14), %r11b")
#define CMP_R11B_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X3A, 0X1F # cmpb (%r15), %r11b")
#define CMP_R11B_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X3A, 0X18 # cmpb (%eax), %r11b")
#define CMP_R11B_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X3A, 0X1B # cmpb (%ebx), %r11b")
#define CMP_R11B_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X3A, 0X19 # cmpb (%ecx), %r11b")
#define CMP_R11B_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X3A, 0X1A # cmpb (%edx), %r11b")
#define CMP_R11B_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X3A, 0X1F # cmpb (%edi), %r11b")
#define CMP_R11B_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X3A, 0X1E # cmpb (%esi), %r11b")
#define CMP_R11B_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X3A, 0X5D, 0X00 # cmpb (%ebp), %r11b")
#define CMP_R11B_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X3A, 0X1C, 0X24 # cmpb (%esp), %r11b")

#define CMP_R12B_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X3A, 0X20 # cmpb (%rax), %r12b")
#define CMP_R12B_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X3A, 0X23 # cmpb (%rbx), %r12b")
#define CMP_R12B_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X3A, 0X21 # cmpb (%rcx), %r12b")
#define CMP_R12B_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X3A, 0X22 # cmpb (%rdx), %r12b")
#define CMP_R12B_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X3A, 0X27 # cmpb (%rdi), %r12b")
#define CMP_R12B_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X3A, 0X26 # cmpb (%rsi), %r12b")
#define CMP_R12B_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X3A, 0X65, 0X00 # cmpb (%rbp), %r12b")
#define CMP_R12B_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X3A, 0X24, 0X24 # cmpb (%rsp), %r12b")
#define CMP_R12B_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X3A, 0X20 # cmpb (%r8), %r12b")
#define CMP_R12B_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X3A, 0X21 # cmpb (%r9), %r12b")
#define CMP_R12B_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X3A, 0X22 # cmpb (%r10), %r12b")
#define CMP_R12B_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X3A, 0X23 # cmpb (%r11), %r12b")
#define CMP_R12B_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X3A, 0X24, 0X24 # cmpb (%r12), %r12b")
#define CMP_R12B_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X3A, 0X65, 0X00 # cmpb (%r13), %r12b")
#define CMP_R12B_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X3A, 0X26 # cmpb (%r14), %r12b")
#define CMP_R12B_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X3A, 0X27 # cmpb (%r15), %r12b")
#define CMP_R12B_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X3A, 0X20 # cmpb (%eax), %r12b")
#define CMP_R12B_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X3A, 0X23 # cmpb (%ebx), %r12b")
#define CMP_R12B_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X3A, 0X21 # cmpb (%ecx), %r12b")
#define CMP_R12B_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X3A, 0X22 # cmpb (%edx), %r12b")
#define CMP_R12B_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X3A, 0X27 # cmpb (%edi), %r12b")
#define CMP_R12B_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X3A, 0X26 # cmpb (%esi), %r12b")
#define CMP_R12B_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X3A, 0X65, 0X00 # cmpb (%ebp), %r12b")
#define CMP_R12B_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X3A, 0X24, 0X24 # cmpb (%esp), %r12b")

#define CMP_R13B_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X3A, 0X28 # cmpb (%rax), %r13b")
#define CMP_R13B_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X3A, 0X2B # cmpb (%rbx), %r13b")
#define CMP_R13B_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X3A, 0X29 # cmpb (%rcx), %r13b")
#define CMP_R13B_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X3A, 0X2A # cmpb (%rdx), %r13b")
#define CMP_R13B_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X3A, 0X2F # cmpb (%rdi), %r13b")
#define CMP_R13B_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X3A, 0X2E # cmpb (%rsi), %r13b")
#define CMP_R13B_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X3A, 0X6D, 0X00 # cmpb (%rbp), %r13b")
#define CMP_R13B_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X3A, 0X2C, 0X24 # cmpb (%rsp), %r13b")
#define CMP_R13B_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X3A, 0X28 # cmpb (%r8), %r13b")
#define CMP_R13B_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X3A, 0X29 # cmpb (%r9), %r13b")
#define CMP_R13B_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X3A, 0X2A # cmpb (%r10), %r13b")
#define CMP_R13B_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X3A, 0X2B # cmpb (%r11), %r13b")
#define CMP_R13B_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X3A, 0X2C, 0X24 # cmpb (%r12), %r13b")
#define CMP_R13B_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X3A, 0X6D, 0X00 # cmpb (%r13), %r13b")
#define CMP_R13B_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X3A, 0X2E # cmpb (%r14), %r13b")
#define CMP_R13B_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X3A, 0X2F # cmpb (%r15), %r13b")
#define CMP_R13B_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X3A, 0X28 # cmpb (%eax), %r13b")
#define CMP_R13B_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X3A, 0X2B # cmpb (%ebx), %r13b")
#define CMP_R13B_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X3A, 0X29 # cmpb (%ecx), %r13b")
#define CMP_R13B_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X3A, 0X2A # cmpb (%edx), %r13b")
#define CMP_R13B_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X3A, 0X2F # cmpb (%edi), %r13b")
#define CMP_R13B_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X3A, 0X2E # cmpb (%esi), %r13b")
#define CMP_R13B_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X3A, 0X6D, 0X00 # cmpb (%ebp), %r13b")
#define CMP_R13B_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X3A, 0X2C, 0X24 # cmpb (%esp), %r13b")

#define CMP_R14B_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X3A, 0X30 # cmpb (%rax), %r14b")
#define CMP_R14B_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X3A, 0X33 # cmpb (%rbx), %r14b")
#define CMP_R14B_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X3A, 0X31 # cmpb (%rcx), %r14b")
#define CMP_R14B_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X3A, 0X32 # cmpb (%rdx), %r14b")
#define CMP_R14B_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X3A, 0X37 # cmpb (%rdi), %r14b")
#define CMP_R14B_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X3A, 0X36 # cmpb (%rsi), %r14b")
#define CMP_R14B_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X3A, 0X75, 0X00 # cmpb (%rbp), %r14b")
#define CMP_R14B_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X3A, 0X34, 0X24 # cmpb (%rsp), %r14b")
#define CMP_R14B_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X3A, 0X30 # cmpb (%r8), %r14b")
#define CMP_R14B_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X3A, 0X31 # cmpb (%r9), %r14b")
#define CMP_R14B_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X3A, 0X32 # cmpb (%r10), %r14b")
#define CMP_R14B_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X3A, 0X33 # cmpb (%r11), %r14b")
#define CMP_R14B_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X3A, 0X34, 0X24 # cmpb (%r12), %r14b")
#define CMP_R14B_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X3A, 0X75, 0X00 # cmpb (%r13), %r14b")
#define CMP_R14B_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X3A, 0X36 # cmpb (%r14), %r14b")
#define CMP_R14B_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X3A, 0X37 # cmpb (%r15), %r14b")
#define CMP_R14B_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X3A, 0X30 # cmpb (%eax), %r14b")
#define CMP_R14B_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X3A, 0X33 # cmpb (%ebx), %r14b")
#define CMP_R14B_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X3A, 0X31 # cmpb (%ecx), %r14b")
#define CMP_R14B_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X3A, 0X32 # cmpb (%edx), %r14b")
#define CMP_R14B_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X3A, 0X37 # cmpb (%edi), %r14b")
#define CMP_R14B_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X3A, 0X36 # cmpb (%esi), %r14b")
#define CMP_R14B_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X3A, 0X75, 0X00 # cmpb (%ebp), %r14b")
#define CMP_R14B_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X3A, 0X34, 0X24 # cmpb (%esp), %r14b")

#define CMP_R15B_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X3A, 0X38 # cmpb (%rax), %r15b")
#define CMP_R15B_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X3A, 0X3B # cmpb (%rbx), %r15b")
#define CMP_R15B_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X3A, 0X39 # cmpb (%rcx), %r15b")
#define CMP_R15B_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X3A, 0X3A # cmpb (%rdx), %r15b")
#define CMP_R15B_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X3A, 0X3F # cmpb (%rdi), %r15b")
#define CMP_R15B_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X3A, 0X3E # cmpb (%rsi), %r15b")
#define CMP_R15B_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X3A, 0X7D, 0X00 # cmpb (%rbp), %r15b")
#define CMP_R15B_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X3A, 0X3C, 0X24 # cmpb (%rsp), %r15b")
#define CMP_R15B_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X3A, 0X38 # cmpb (%r8), %r15b")
#define CMP_R15B_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X3A, 0X39 # cmpb (%r9), %r15b")
#define CMP_R15B_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X3A, 0X3A # cmpb (%r10), %r15b")
#define CMP_R15B_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X3A, 0X3B # cmpb (%r11), %r15b")
#define CMP_R15B_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X3A, 0X3C, 0X24 # cmpb (%r12), %r15b")
#define CMP_R15B_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X3A, 0X7D, 0X00 # cmpb (%r13), %r15b")
#define CMP_R15B_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X3A, 0X3E # cmpb (%r14), %r15b")
#define CMP_R15B_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X3A, 0X3F # cmpb (%r15), %r15b")
#define CMP_R15B_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X3A, 0X38 # cmpb (%eax), %r15b")
#define CMP_R15B_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X3A, 0X3B # cmpb (%ebx), %r15b")
#define CMP_R15B_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X3A, 0X39 # cmpb (%ecx), %r15b")
#define CMP_R15B_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X3A, 0X3A # cmpb (%edx), %r15b")
#define CMP_R15B_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X3A, 0X3F # cmpb (%edi), %r15b")
#define CMP_R15B_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X3A, 0X3E # cmpb (%esi), %r15b")
#define CMP_R15B_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X3A, 0X7D, 0X00 # cmpb (%ebp), %r15b")
#define CMP_R15B_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X3A, 0X3C, 0X24 # cmpb (%esp), %r15b")

#define CMP_AL_TO_PTR_RAX CMT_ASM(".byte 0X38, 0X00 # cmpb %al, (%rax)")
#define CMP_AL_TO_PTR_RBX CMT_ASM(".byte 0X38, 0X03 # cmpb %al, (%rbx)")
#define CMP_AL_TO_PTR_RCX CMT_ASM(".byte 0X38, 0X01 # cmpb %al, (%rcx)")
#define CMP_AL_TO_PTR_RDX CMT_ASM(".byte 0X38, 0X02 # cmpb %al, (%rdx)")
#define CMP_AL_TO_PTR_RDI CMT_ASM(".byte 0X38, 0X07 # cmpb %al, (%rdi)")
#define CMP_AL_TO_PTR_RSI CMT_ASM(".byte 0X38, 0X06 # cmpb %al, (%rsi)")
#define CMP_AL_TO_PTR_RBP CMT_ASM(".byte 0X38, 0X45, 0X00 # cmpb %al, (%rbp)")
#define CMP_AL_TO_PTR_RSP CMT_ASM(".byte 0X38, 0X04, 0X24 # cmpb %al, (%rsp)")
#define CMP_AL_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X38, 0X00 # cmpb %al, (%r8)")
#define CMP_AL_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X38, 0X01 # cmpb %al, (%r9)")
#define CMP_AL_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X38, 0X02 # cmpb %al, (%r10)")
#define CMP_AL_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X38, 0X03 # cmpb %al, (%r11)")
#define CMP_AL_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X38, 0X04, 0X24 # cmpb %al, (%r12)")
#define CMP_AL_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X38, 0X45, 0X00 # cmpb %al, (%r13)")
#define CMP_AL_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X38, 0X06 # cmpb %al, (%r14)")
#define CMP_AL_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X38, 0X07 # cmpb %al, (%r15)")
#define CMP_AL_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X38, 0X00 # cmpb %al, (%eax)")
#define CMP_AL_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X38, 0X03 # cmpb %al, (%ebx)")
#define CMP_AL_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X38, 0X01 # cmpb %al, (%ecx)")
#define CMP_AL_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X38, 0X02 # cmpb %al, (%edx)")
#define CMP_AL_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X38, 0X07 # cmpb %al, (%edi)")
#define CMP_AL_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X38, 0X06 # cmpb %al, (%esi)")
#define CMP_AL_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X38, 0X45, 0X00 # cmpb %al, (%ebp)")
#define CMP_AL_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X38, 0X04, 0X24 # cmpb %al, (%esp)")

#define CMP_BL_TO_PTR_RAX CMT_ASM(".byte 0X38, 0X18 # cmpb %bl, (%rax)")
#define CMP_BL_TO_PTR_RBX CMT_ASM(".byte 0X38, 0X1B # cmpb %bl, (%rbx)")
#define CMP_BL_TO_PTR_RCX CMT_ASM(".byte 0X38, 0X19 # cmpb %bl, (%rcx)")
#define CMP_BL_TO_PTR_RDX CMT_ASM(".byte 0X38, 0X1A # cmpb %bl, (%rdx)")
#define CMP_BL_TO_PTR_RDI CMT_ASM(".byte 0X38, 0X1F # cmpb %bl, (%rdi)")
#define CMP_BL_TO_PTR_RSI CMT_ASM(".byte 0X38, 0X1E # cmpb %bl, (%rsi)")
#define CMP_BL_TO_PTR_RBP CMT_ASM(".byte 0X38, 0X5D, 0X00 # cmpb %bl, (%rbp)")
#define CMP_BL_TO_PTR_RSP CMT_ASM(".byte 0X38, 0X1C, 0X24 # cmpb %bl, (%rsp)")
#define CMP_BL_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X38, 0X18 # cmpb %bl, (%r8)")
#define CMP_BL_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X38, 0X19 # cmpb %bl, (%r9)")
#define CMP_BL_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X38, 0X1A # cmpb %bl, (%r10)")
#define CMP_BL_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X38, 0X1B # cmpb %bl, (%r11)")
#define CMP_BL_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X38, 0X1C, 0X24 # cmpb %bl, (%r12)")
#define CMP_BL_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X38, 0X5D, 0X00 # cmpb %bl, (%r13)")
#define CMP_BL_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X38, 0X1E # cmpb %bl, (%r14)")
#define CMP_BL_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X38, 0X1F # cmpb %bl, (%r15)")
#define CMP_BL_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X38, 0X18 # cmpb %bl, (%eax)")
#define CMP_BL_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X38, 0X1B # cmpb %bl, (%ebx)")
#define CMP_BL_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X38, 0X19 # cmpb %bl, (%ecx)")
#define CMP_BL_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X38, 0X1A # cmpb %bl, (%edx)")
#define CMP_BL_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X38, 0X1F # cmpb %bl, (%edi)")
#define CMP_BL_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X38, 0X1E # cmpb %bl, (%esi)")
#define CMP_BL_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X38, 0X5D, 0X00 # cmpb %bl, (%ebp)")
#define CMP_BL_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X38, 0X1C, 0X24 # cmpb %bl, (%esp)")

#define CMP_CL_TO_PTR_RAX CMT_ASM(".byte 0X38, 0X08 # cmpb %cl, (%rax)")
#define CMP_CL_TO_PTR_RBX CMT_ASM(".byte 0X38, 0X0B # cmpb %cl, (%rbx)")
#define CMP_CL_TO_PTR_RCX CMT_ASM(".byte 0X38, 0X09 # cmpb %cl, (%rcx)")
#define CMP_CL_TO_PTR_RDX CMT_ASM(".byte 0X38, 0X0A # cmpb %cl, (%rdx)")
#define CMP_CL_TO_PTR_RDI CMT_ASM(".byte 0X38, 0X0F # cmpb %cl, (%rdi)")
#define CMP_CL_TO_PTR_RSI CMT_ASM(".byte 0X38, 0X0E # cmpb %cl, (%rsi)")
#define CMP_CL_TO_PTR_RBP CMT_ASM(".byte 0X38, 0X4D, 0X00 # cmpb %cl, (%rbp)")
#define CMP_CL_TO_PTR_RSP CMT_ASM(".byte 0X38, 0X0C, 0X24 # cmpb %cl, (%rsp)")
#define CMP_CL_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X38, 0X08 # cmpb %cl, (%r8)")
#define CMP_CL_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X38, 0X09 # cmpb %cl, (%r9)")
#define CMP_CL_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X38, 0X0A # cmpb %cl, (%r10)")
#define CMP_CL_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X38, 0X0B # cmpb %cl, (%r11)")
#define CMP_CL_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X38, 0X0C, 0X24 # cmpb %cl, (%r12)")
#define CMP_CL_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X38, 0X4D, 0X00 # cmpb %cl, (%r13)")
#define CMP_CL_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X38, 0X0E # cmpb %cl, (%r14)")
#define CMP_CL_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X38, 0X0F # cmpb %cl, (%r15)")
#define CMP_CL_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X38, 0X08 # cmpb %cl, (%eax)")
#define CMP_CL_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X38, 0X0B # cmpb %cl, (%ebx)")
#define CMP_CL_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X38, 0X09 # cmpb %cl, (%ecx)")
#define CMP_CL_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X38, 0X0A # cmpb %cl, (%edx)")
#define CMP_CL_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X38, 0X0F # cmpb %cl, (%edi)")
#define CMP_CL_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X38, 0X0E # cmpb %cl, (%esi)")
#define CMP_CL_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X38, 0X4D, 0X00 # cmpb %cl, (%ebp)")
#define CMP_CL_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X38, 0X0C, 0X24 # cmpb %cl, (%esp)")

#define CMP_DL_TO_PTR_RAX CMT_ASM(".byte 0X38, 0X10 # cmpb %dl, (%rax)")
#define CMP_DL_TO_PTR_RBX CMT_ASM(".byte 0X38, 0X13 # cmpb %dl, (%rbx)")
#define CMP_DL_TO_PTR_RCX CMT_ASM(".byte 0X38, 0X11 # cmpb %dl, (%rcx)")
#define CMP_DL_TO_PTR_RDX CMT_ASM(".byte 0X38, 0X12 # cmpb %dl, (%rdx)")
#define CMP_DL_TO_PTR_RDI CMT_ASM(".byte 0X38, 0X17 # cmpb %dl, (%rdi)")
#define CMP_DL_TO_PTR_RSI CMT_ASM(".byte 0X38, 0X16 # cmpb %dl, (%rsi)")
#define CMP_DL_TO_PTR_RBP CMT_ASM(".byte 0X38, 0X55, 0X00 # cmpb %dl, (%rbp)")
#define CMP_DL_TO_PTR_RSP CMT_ASM(".byte 0X38, 0X14, 0X24 # cmpb %dl, (%rsp)")
#define CMP_DL_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X38, 0X10 # cmpb %dl, (%r8)")
#define CMP_DL_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X38, 0X11 # cmpb %dl, (%r9)")
#define CMP_DL_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X38, 0X12 # cmpb %dl, (%r10)")
#define CMP_DL_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X38, 0X13 # cmpb %dl, (%r11)")
#define CMP_DL_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X38, 0X14, 0X24 # cmpb %dl, (%r12)")
#define CMP_DL_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X38, 0X55, 0X00 # cmpb %dl, (%r13)")
#define CMP_DL_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X38, 0X16 # cmpb %dl, (%r14)")
#define CMP_DL_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X38, 0X17 # cmpb %dl, (%r15)")
#define CMP_DL_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X38, 0X10 # cmpb %dl, (%eax)")
#define CMP_DL_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X38, 0X13 # cmpb %dl, (%ebx)")
#define CMP_DL_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X38, 0X11 # cmpb %dl, (%ecx)")
#define CMP_DL_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X38, 0X12 # cmpb %dl, (%edx)")
#define CMP_DL_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X38, 0X17 # cmpb %dl, (%edi)")
#define CMP_DL_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X38, 0X16 # cmpb %dl, (%esi)")
#define CMP_DL_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X38, 0X55, 0X00 # cmpb %dl, (%ebp)")
#define CMP_DL_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X38, 0X14, 0X24 # cmpb %dl, (%esp)")

#define CMP_DIL_TO_PTR_RAX CMT_ASM(".byte 0X40, 0X38, 0X38 # cmpb %dil, (%rax)")
#define CMP_DIL_TO_PTR_RBX CMT_ASM(".byte 0X40, 0X38, 0X3B # cmpb %dil, (%rbx)")
#define CMP_DIL_TO_PTR_RCX CMT_ASM(".byte 0X40, 0X38, 0X39 # cmpb %dil, (%rcx)")
#define CMP_DIL_TO_PTR_RDX CMT_ASM(".byte 0X40, 0X38, 0X3A # cmpb %dil, (%rdx)")
#define CMP_DIL_TO_PTR_RDI CMT_ASM(".byte 0X40, 0X38, 0X3F # cmpb %dil, (%rdi)")
#define CMP_DIL_TO_PTR_RSI CMT_ASM(".byte 0X40, 0X38, 0X3E # cmpb %dil, (%rsi)")
#define CMP_DIL_TO_PTR_RBP CMT_ASM(".byte 0X40, 0X38, 0X7D, 0X00 # cmpb %dil, (%rbp)")
#define CMP_DIL_TO_PTR_RSP CMT_ASM(".byte 0X40, 0X38, 0X3C, 0X24 # cmpb %dil, (%rsp)")
#define CMP_DIL_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X38, 0X38 # cmpb %dil, (%r8)")
#define CMP_DIL_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X38, 0X39 # cmpb %dil, (%r9)")
#define CMP_DIL_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X38, 0X3A # cmpb %dil, (%r10)")
#define CMP_DIL_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X38, 0X3B # cmpb %dil, (%r11)")
#define CMP_DIL_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X38, 0X3C, 0X24 # cmpb %dil, (%r12)")
#define CMP_DIL_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X38, 0X7D, 0X00 # cmpb %dil, (%r13)")
#define CMP_DIL_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X38, 0X3E # cmpb %dil, (%r14)")
#define CMP_DIL_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X38, 0X3F # cmpb %dil, (%r15)")
#define CMP_DIL_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X40, 0X38, 0X38 # cmpb %dil, (%eax)")
#define CMP_DIL_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X40, 0X38, 0X3B # cmpb %dil, (%ebx)")
#define CMP_DIL_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X40, 0X38, 0X39 # cmpb %dil, (%ecx)")
#define CMP_DIL_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X40, 0X38, 0X3A # cmpb %dil, (%edx)")
#define CMP_DIL_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X40, 0X38, 0X3F # cmpb %dil, (%edi)")
#define CMP_DIL_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X40, 0X38, 0X3E # cmpb %dil, (%esi)")
#define CMP_DIL_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X40, 0X38, 0X7D, 0X00 # cmpb %dil, (%ebp)")
#define CMP_DIL_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X40, 0X38, 0X3C, 0X24 # cmpb %dil, (%esp)")

#define CMP_SIL_TO_PTR_RAX CMT_ASM(".byte 0X40, 0X38, 0X30 # cmpb %sil, (%rax)")
#define CMP_SIL_TO_PTR_RBX CMT_ASM(".byte 0X40, 0X38, 0X33 # cmpb %sil, (%rbx)")
#define CMP_SIL_TO_PTR_RCX CMT_ASM(".byte 0X40, 0X38, 0X31 # cmpb %sil, (%rcx)")
#define CMP_SIL_TO_PTR_RDX CMT_ASM(".byte 0X40, 0X38, 0X32 # cmpb %sil, (%rdx)")
#define CMP_SIL_TO_PTR_RDI CMT_ASM(".byte 0X40, 0X38, 0X37 # cmpb %sil, (%rdi)")
#define CMP_SIL_TO_PTR_RSI CMT_ASM(".byte 0X40, 0X38, 0X36 # cmpb %sil, (%rsi)")
#define CMP_SIL_TO_PTR_RBP CMT_ASM(".byte 0X40, 0X38, 0X75, 0X00 # cmpb %sil, (%rbp)")
#define CMP_SIL_TO_PTR_RSP CMT_ASM(".byte 0X40, 0X38, 0X34, 0X24 # cmpb %sil, (%rsp)")
#define CMP_SIL_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X38, 0X30 # cmpb %sil, (%r8)")
#define CMP_SIL_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X38, 0X31 # cmpb %sil, (%r9)")
#define CMP_SIL_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X38, 0X32 # cmpb %sil, (%r10)")
#define CMP_SIL_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X38, 0X33 # cmpb %sil, (%r11)")
#define CMP_SIL_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X38, 0X34, 0X24 # cmpb %sil, (%r12)")
#define CMP_SIL_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X38, 0X75, 0X00 # cmpb %sil, (%r13)")
#define CMP_SIL_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X38, 0X36 # cmpb %sil, (%r14)")
#define CMP_SIL_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X38, 0X37 # cmpb %sil, (%r15)")
#define CMP_SIL_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X40, 0X38, 0X30 # cmpb %sil, (%eax)")
#define CMP_SIL_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X40, 0X38, 0X33 # cmpb %sil, (%ebx)")
#define CMP_SIL_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X40, 0X38, 0X31 # cmpb %sil, (%ecx)")
#define CMP_SIL_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X40, 0X38, 0X32 # cmpb %sil, (%edx)")
#define CMP_SIL_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X40, 0X38, 0X37 # cmpb %sil, (%edi)")
#define CMP_SIL_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X40, 0X38, 0X36 # cmpb %sil, (%esi)")
#define CMP_SIL_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X40, 0X38, 0X75, 0X00 # cmpb %sil, (%ebp)")
#define CMP_SIL_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X40, 0X38, 0X34, 0X24 # cmpb %sil, (%esp)")

#define CMP_BPL_TO_PTR_RAX CMT_ASM(".byte 0X40, 0X38, 0X28 # cmpb %bpl, (%rax)")
#define CMP_BPL_TO_PTR_RBX CMT_ASM(".byte 0X40, 0X38, 0X2B # cmpb %bpl, (%rbx)")
#define CMP_BPL_TO_PTR_RCX CMT_ASM(".byte 0X40, 0X38, 0X29 # cmpb %bpl, (%rcx)")
#define CMP_BPL_TO_PTR_RDX CMT_ASM(".byte 0X40, 0X38, 0X2A # cmpb %bpl, (%rdx)")
#define CMP_BPL_TO_PTR_RDI CMT_ASM(".byte 0X40, 0X38, 0X2F # cmpb %bpl, (%rdi)")
#define CMP_BPL_TO_PTR_RSI CMT_ASM(".byte 0X40, 0X38, 0X2E # cmpb %bpl, (%rsi)")
#define CMP_BPL_TO_PTR_RBP CMT_ASM(".byte 0X40, 0X38, 0X6D, 0X00 # cmpb %bpl, (%rbp)")
#define CMP_BPL_TO_PTR_RSP CMT_ASM(".byte 0X40, 0X38, 0X2C, 0X24 # cmpb %bpl, (%rsp)")
#define CMP_BPL_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X38, 0X28 # cmpb %bpl, (%r8)")
#define CMP_BPL_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X38, 0X29 # cmpb %bpl, (%r9)")
#define CMP_BPL_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X38, 0X2A # cmpb %bpl, (%r10)")
#define CMP_BPL_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X38, 0X2B # cmpb %bpl, (%r11)")
#define CMP_BPL_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X38, 0X2C, 0X24 # cmpb %bpl, (%r12)")
#define CMP_BPL_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X38, 0X6D, 0X00 # cmpb %bpl, (%r13)")
#define CMP_BPL_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X38, 0X2E # cmpb %bpl, (%r14)")
#define CMP_BPL_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X38, 0X2F # cmpb %bpl, (%r15)")
#define CMP_BPL_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X40, 0X38, 0X28 # cmpb %bpl, (%eax)")
#define CMP_BPL_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X40, 0X38, 0X2B # cmpb %bpl, (%ebx)")
#define CMP_BPL_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X40, 0X38, 0X29 # cmpb %bpl, (%ecx)")
#define CMP_BPL_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X40, 0X38, 0X2A # cmpb %bpl, (%edx)")
#define CMP_BPL_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X40, 0X38, 0X2F # cmpb %bpl, (%edi)")
#define CMP_BPL_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X40, 0X38, 0X2E # cmpb %bpl, (%esi)")
#define CMP_BPL_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X40, 0X38, 0X6D, 0X00 # cmpb %bpl, (%ebp)")
#define CMP_BPL_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X40, 0X38, 0X2C, 0X24 # cmpb %bpl, (%esp)")

#define CMP_SPL_TO_PTR_RAX CMT_ASM(".byte 0X40, 0X38, 0X20 # cmpb %spl, (%rax)")
#define CMP_SPL_TO_PTR_RBX CMT_ASM(".byte 0X40, 0X38, 0X23 # cmpb %spl, (%rbx)")
#define CMP_SPL_TO_PTR_RCX CMT_ASM(".byte 0X40, 0X38, 0X21 # cmpb %spl, (%rcx)")
#define CMP_SPL_TO_PTR_RDX CMT_ASM(".byte 0X40, 0X38, 0X22 # cmpb %spl, (%rdx)")
#define CMP_SPL_TO_PTR_RDI CMT_ASM(".byte 0X40, 0X38, 0X27 # cmpb %spl, (%rdi)")
#define CMP_SPL_TO_PTR_RSI CMT_ASM(".byte 0X40, 0X38, 0X26 # cmpb %spl, (%rsi)")
#define CMP_SPL_TO_PTR_RBP CMT_ASM(".byte 0X40, 0X38, 0X65, 0X00 # cmpb %spl, (%rbp)")
#define CMP_SPL_TO_PTR_RSP CMT_ASM(".byte 0X40, 0X38, 0X24, 0X24 # cmpb %spl, (%rsp)")
#define CMP_SPL_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X38, 0X20 # cmpb %spl, (%r8)")
#define CMP_SPL_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X38, 0X21 # cmpb %spl, (%r9)")
#define CMP_SPL_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X38, 0X22 # cmpb %spl, (%r10)")
#define CMP_SPL_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X38, 0X23 # cmpb %spl, (%r11)")
#define CMP_SPL_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X38, 0X24, 0X24 # cmpb %spl, (%r12)")
#define CMP_SPL_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X38, 0X65, 0X00 # cmpb %spl, (%r13)")
#define CMP_SPL_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X38, 0X26 # cmpb %spl, (%r14)")
#define CMP_SPL_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X38, 0X27 # cmpb %spl, (%r15)")
#define CMP_SPL_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X40, 0X38, 0X20 # cmpb %spl, (%eax)")
#define CMP_SPL_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X40, 0X38, 0X23 # cmpb %spl, (%ebx)")
#define CMP_SPL_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X40, 0X38, 0X21 # cmpb %spl, (%ecx)")
#define CMP_SPL_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X40, 0X38, 0X22 # cmpb %spl, (%edx)")
#define CMP_SPL_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X40, 0X38, 0X27 # cmpb %spl, (%edi)")
#define CMP_SPL_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X40, 0X38, 0X26 # cmpb %spl, (%esi)")
#define CMP_SPL_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X40, 0X38, 0X65, 0X00 # cmpb %spl, (%ebp)")
#define CMP_SPL_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X40, 0X38, 0X24, 0X24 # cmpb %spl, (%esp)")

#define CMP_R8B_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X38, 0X00 # cmpb %r8b, (%rax)")
#define CMP_R8B_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X38, 0X03 # cmpb %r8b, (%rbx)")
#define CMP_R8B_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X38, 0X01 # cmpb %r8b, (%rcx)")
#define CMP_R8B_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X38, 0X02 # cmpb %r8b, (%rdx)")
#define CMP_R8B_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X38, 0X07 # cmpb %r8b, (%rdi)")
#define CMP_R8B_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X38, 0X06 # cmpb %r8b, (%rsi)")
#define CMP_R8B_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X38, 0X45, 0X00 # cmpb %r8b, (%rbp)")
#define CMP_R8B_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X38, 0X04, 0X24 # cmpb %r8b, (%rsp)")
#define CMP_R8B_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X38, 0X00 # cmpb %r8b, (%r8)")
#define CMP_R8B_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X38, 0X01 # cmpb %r8b, (%r9)")
#define CMP_R8B_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X38, 0X02 # cmpb %r8b, (%r10)")
#define CMP_R8B_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X38, 0X03 # cmpb %r8b, (%r11)")
#define CMP_R8B_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X38, 0X04, 0X24 # cmpb %r8b, (%r12)")
#define CMP_R8B_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X38, 0X45, 0X00 # cmpb %r8b, (%r13)")
#define CMP_R8B_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X38, 0X06 # cmpb %r8b, (%r14)")
#define CMP_R8B_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X38, 0X07 # cmpb %r8b, (%r15)")
#define CMP_R8B_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X38, 0X00 # cmpb %r8b, (%eax)")
#define CMP_R8B_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X38, 0X03 # cmpb %r8b, (%ebx)")
#define CMP_R8B_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X38, 0X01 # cmpb %r8b, (%ecx)")
#define CMP_R8B_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X38, 0X02 # cmpb %r8b, (%edx)")
#define CMP_R8B_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X38, 0X07 # cmpb %r8b, (%edi)")
#define CMP_R8B_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X38, 0X06 # cmpb %r8b, (%esi)")
#define CMP_R8B_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X38, 0X45, 0X00 # cmpb %r8b, (%ebp)")
#define CMP_R8B_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X38, 0X04, 0X24 # cmpb %r8b, (%esp)")

#define CMP_R9B_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X38, 0X08 # cmpb %r9b, (%rax)")
#define CMP_R9B_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X38, 0X0B # cmpb %r9b, (%rbx)")
#define CMP_R9B_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X38, 0X09 # cmpb %r9b, (%rcx)")
#define CMP_R9B_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X38, 0X0A # cmpb %r9b, (%rdx)")
#define CMP_R9B_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X38, 0X0F # cmpb %r9b, (%rdi)")
#define CMP_R9B_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X38, 0X0E # cmpb %r9b, (%rsi)")
#define CMP_R9B_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X38, 0X4D, 0X00 # cmpb %r9b, (%rbp)")
#define CMP_R9B_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X38, 0X0C, 0X24 # cmpb %r9b, (%rsp)")
#define CMP_R9B_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X38, 0X08 # cmpb %r9b, (%r8)")
#define CMP_R9B_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X38, 0X09 # cmpb %r9b, (%r9)")
#define CMP_R9B_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X38, 0X0A # cmpb %r9b, (%r10)")
#define CMP_R9B_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X38, 0X0B # cmpb %r9b, (%r11)")
#define CMP_R9B_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X38, 0X0C, 0X24 # cmpb %r9b, (%r12)")
#define CMP_R9B_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X38, 0X4D, 0X00 # cmpb %r9b, (%r13)")
#define CMP_R9B_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X38, 0X0E # cmpb %r9b, (%r14)")
#define CMP_R9B_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X38, 0X0F # cmpb %r9b, (%r15)")
#define CMP_R9B_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X38, 0X08 # cmpb %r9b, (%eax)")
#define CMP_R9B_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X38, 0X0B # cmpb %r9b, (%ebx)")
#define CMP_R9B_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X38, 0X09 # cmpb %r9b, (%ecx)")
#define CMP_R9B_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X38, 0X0A # cmpb %r9b, (%edx)")
#define CMP_R9B_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X38, 0X0F # cmpb %r9b, (%edi)")
#define CMP_R9B_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X38, 0X0E # cmpb %r9b, (%esi)")
#define CMP_R9B_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X38, 0X4D, 0X00 # cmpb %r9b, (%ebp)")
#define CMP_R9B_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X38, 0X0C, 0X24 # cmpb %r9b, (%esp)")

#define CMP_R10B_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X38, 0X10 # cmpb %r10b, (%rax)")
#define CMP_R10B_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X38, 0X13 # cmpb %r10b, (%rbx)")
#define CMP_R10B_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X38, 0X11 # cmpb %r10b, (%rcx)")
#define CMP_R10B_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X38, 0X12 # cmpb %r10b, (%rdx)")
#define CMP_R10B_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X38, 0X17 # cmpb %r10b, (%rdi)")
#define CMP_R10B_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X38, 0X16 # cmpb %r10b, (%rsi)")
#define CMP_R10B_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X38, 0X55, 0X00 # cmpb %r10b, (%rbp)")
#define CMP_R10B_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X38, 0X14, 0X24 # cmpb %r10b, (%rsp)")
#define CMP_R10B_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X38, 0X10 # cmpb %r10b, (%r8)")
#define CMP_R10B_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X38, 0X11 # cmpb %r10b, (%r9)")
#define CMP_R10B_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X38, 0X12 # cmpb %r10b, (%r10)")
#define CMP_R10B_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X38, 0X13 # cmpb %r10b, (%r11)")
#define CMP_R10B_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X38, 0X14, 0X24 # cmpb %r10b, (%r12)")
#define CMP_R10B_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X38, 0X55, 0X00 # cmpb %r10b, (%r13)")
#define CMP_R10B_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X38, 0X16 # cmpb %r10b, (%r14)")
#define CMP_R10B_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X38, 0X17 # cmpb %r10b, (%r15)")
#define CMP_R10B_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X38, 0X10 # cmpb %r10b, (%eax)")
#define CMP_R10B_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X38, 0X13 # cmpb %r10b, (%ebx)")
#define CMP_R10B_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X38, 0X11 # cmpb %r10b, (%ecx)")
#define CMP_R10B_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X38, 0X12 # cmpb %r10b, (%edx)")
#define CMP_R10B_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X38, 0X17 # cmpb %r10b, (%edi)")
#define CMP_R10B_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X38, 0X16 # cmpb %r10b, (%esi)")
#define CMP_R10B_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X38, 0X55, 0X00 # cmpb %r10b, (%ebp)")
#define CMP_R10B_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X38, 0X14, 0X24 # cmpb %r10b, (%esp)")

#define CMP_R11B_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X38, 0X18 # cmpb %r11b, (%rax)")
#define CMP_R11B_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X38, 0X1B # cmpb %r11b, (%rbx)")
#define CMP_R11B_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X38, 0X19 # cmpb %r11b, (%rcx)")
#define CMP_R11B_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X38, 0X1A # cmpb %r11b, (%rdx)")
#define CMP_R11B_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X38, 0X1F # cmpb %r11b, (%rdi)")
#define CMP_R11B_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X38, 0X1E # cmpb %r11b, (%rsi)")
#define CMP_R11B_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X38, 0X5D, 0X00 # cmpb %r11b, (%rbp)")
#define CMP_R11B_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X38, 0X1C, 0X24 # cmpb %r11b, (%rsp)")
#define CMP_R11B_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X38, 0X18 # cmpb %r11b, (%r8)")
#define CMP_R11B_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X38, 0X19 # cmpb %r11b, (%r9)")
#define CMP_R11B_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X38, 0X1A # cmpb %r11b, (%r10)")
#define CMP_R11B_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X38, 0X1B # cmpb %r11b, (%r11)")
#define CMP_R11B_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X38, 0X1C, 0X24 # cmpb %r11b, (%r12)")
#define CMP_R11B_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X38, 0X5D, 0X00 # cmpb %r11b, (%r13)")
#define CMP_R11B_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X38, 0X1E # cmpb %r11b, (%r14)")
#define CMP_R11B_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X38, 0X1F # cmpb %r11b, (%r15)")
#define CMP_R11B_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X38, 0X18 # cmpb %r11b, (%eax)")
#define CMP_R11B_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X38, 0X1B # cmpb %r11b, (%ebx)")
#define CMP_R11B_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X38, 0X19 # cmpb %r11b, (%ecx)")
#define CMP_R11B_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X38, 0X1A # cmpb %r11b, (%edx)")
#define CMP_R11B_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X38, 0X1F # cmpb %r11b, (%edi)")
#define CMP_R11B_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X38, 0X1E # cmpb %r11b, (%esi)")
#define CMP_R11B_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X38, 0X5D, 0X00 # cmpb %r11b, (%ebp)")
#define CMP_R11B_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X38, 0X1C, 0X24 # cmpb %r11b, (%esp)")

#define CMP_R12B_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X38, 0X20 # cmpb %r12b, (%rax)")
#define CMP_R12B_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X38, 0X23 # cmpb %r12b, (%rbx)")
#define CMP_R12B_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X38, 0X21 # cmpb %r12b, (%rcx)")
#define CMP_R12B_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X38, 0X22 # cmpb %r12b, (%rdx)")
#define CMP_R12B_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X38, 0X27 # cmpb %r12b, (%rdi)")
#define CMP_R12B_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X38, 0X26 # cmpb %r12b, (%rsi)")
#define CMP_R12B_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X38, 0X65, 0X00 # cmpb %r12b, (%rbp)")
#define CMP_R12B_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X38, 0X24, 0X24 # cmpb %r12b, (%rsp)")
#define CMP_R12B_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X38, 0X20 # cmpb %r12b, (%r8)")
#define CMP_R12B_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X38, 0X21 # cmpb %r12b, (%r9)")
#define CMP_R12B_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X38, 0X22 # cmpb %r12b, (%r10)")
#define CMP_R12B_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X38, 0X23 # cmpb %r12b, (%r11)")
#define CMP_R12B_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X38, 0X24, 0X24 # cmpb %r12b, (%r12)")
#define CMP_R12B_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X38, 0X65, 0X00 # cmpb %r12b, (%r13)")
#define CMP_R12B_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X38, 0X26 # cmpb %r12b, (%r14)")
#define CMP_R12B_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X38, 0X27 # cmpb %r12b, (%r15)")
#define CMP_R12B_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X38, 0X20 # cmpb %r12b, (%eax)")
#define CMP_R12B_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X38, 0X23 # cmpb %r12b, (%ebx)")
#define CMP_R12B_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X38, 0X21 # cmpb %r12b, (%ecx)")
#define CMP_R12B_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X38, 0X22 # cmpb %r12b, (%edx)")
#define CMP_R12B_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X38, 0X27 # cmpb %r12b, (%edi)")
#define CMP_R12B_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X38, 0X26 # cmpb %r12b, (%esi)")
#define CMP_R12B_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X38, 0X65, 0X00 # cmpb %r12b, (%ebp)")
#define CMP_R12B_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X38, 0X24, 0X24 # cmpb %r12b, (%esp)")

#define CMP_R13B_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X38, 0X28 # cmpb %r13b, (%rax)")
#define CMP_R13B_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X38, 0X2B # cmpb %r13b, (%rbx)")
#define CMP_R13B_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X38, 0X29 # cmpb %r13b, (%rcx)")
#define CMP_R13B_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X38, 0X2A # cmpb %r13b, (%rdx)")
#define CMP_R13B_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X38, 0X2F # cmpb %r13b, (%rdi)")
#define CMP_R13B_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X38, 0X2E # cmpb %r13b, (%rsi)")
#define CMP_R13B_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X38, 0X6D, 0X00 # cmpb %r13b, (%rbp)")
#define CMP_R13B_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X38, 0X2C, 0X24 # cmpb %r13b, (%rsp)")
#define CMP_R13B_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X38, 0X28 # cmpb %r13b, (%r8)")
#define CMP_R13B_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X38, 0X29 # cmpb %r13b, (%r9)")
#define CMP_R13B_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X38, 0X2A # cmpb %r13b, (%r10)")
#define CMP_R13B_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X38, 0X2B # cmpb %r13b, (%r11)")
#define CMP_R13B_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X38, 0X2C, 0X24 # cmpb %r13b, (%r12)")
#define CMP_R13B_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X38, 0X6D, 0X00 # cmpb %r13b, (%r13)")
#define CMP_R13B_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X38, 0X2E # cmpb %r13b, (%r14)")
#define CMP_R13B_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X38, 0X2F # cmpb %r13b, (%r15)")
#define CMP_R13B_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X38, 0X28 # cmpb %r13b, (%eax)")
#define CMP_R13B_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X38, 0X2B # cmpb %r13b, (%ebx)")
#define CMP_R13B_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X38, 0X29 # cmpb %r13b, (%ecx)")
#define CMP_R13B_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X38, 0X2A # cmpb %r13b, (%edx)")
#define CMP_R13B_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X38, 0X2F # cmpb %r13b, (%edi)")
#define CMP_R13B_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X38, 0X2E # cmpb %r13b, (%esi)")
#define CMP_R13B_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X38, 0X6D, 0X00 # cmpb %r13b, (%ebp)")
#define CMP_R13B_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X38, 0X2C, 0X24 # cmpb %r13b, (%esp)")

#define CMP_R14B_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X38, 0X30 # cmpb %r14b, (%rax)")
#define CMP_R14B_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X38, 0X33 # cmpb %r14b, (%rbx)")
#define CMP_R14B_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X38, 0X31 # cmpb %r14b, (%rcx)")
#define CMP_R14B_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X38, 0X32 # cmpb %r14b, (%rdx)")
#define CMP_R14B_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X38, 0X37 # cmpb %r14b, (%rdi)")
#define CMP_R14B_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X38, 0X36 # cmpb %r14b, (%rsi)")
#define CMP_R14B_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X38, 0X75, 0X00 # cmpb %r14b, (%rbp)")
#define CMP_R14B_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X38, 0X34, 0X24 # cmpb %r14b, (%rsp)")
#define CMP_R14B_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X38, 0X30 # cmpb %r14b, (%r8)")
#define CMP_R14B_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X38, 0X31 # cmpb %r14b, (%r9)")
#define CMP_R14B_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X38, 0X32 # cmpb %r14b, (%r10)")
#define CMP_R14B_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X38, 0X33 # cmpb %r14b, (%r11)")
#define CMP_R14B_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X38, 0X34, 0X24 # cmpb %r14b, (%r12)")
#define CMP_R14B_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X38, 0X75, 0X00 # cmpb %r14b, (%r13)")
#define CMP_R14B_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X38, 0X36 # cmpb %r14b, (%r14)")
#define CMP_R14B_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X38, 0X37 # cmpb %r14b, (%r15)")
#define CMP_R14B_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X38, 0X30 # cmpb %r14b, (%eax)")
#define CMP_R14B_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X38, 0X33 # cmpb %r14b, (%ebx)")
#define CMP_R14B_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X38, 0X31 # cmpb %r14b, (%ecx)")
#define CMP_R14B_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X38, 0X32 # cmpb %r14b, (%edx)")
#define CMP_R14B_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X38, 0X37 # cmpb %r14b, (%edi)")
#define CMP_R14B_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X38, 0X36 # cmpb %r14b, (%esi)")
#define CMP_R14B_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X38, 0X75, 0X00 # cmpb %r14b, (%ebp)")
#define CMP_R14B_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X38, 0X34, 0X24 # cmpb %r14b, (%esp)")

#define CMP_R15B_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X38, 0X38 # cmpb %r15b, (%rax)")
#define CMP_R15B_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X38, 0X3B # cmpb %r15b, (%rbx)")
#define CMP_R15B_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X38, 0X39 # cmpb %r15b, (%rcx)")
#define CMP_R15B_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X38, 0X3A # cmpb %r15b, (%rdx)")
#define CMP_R15B_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X38, 0X3F # cmpb %r15b, (%rdi)")
#define CMP_R15B_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X38, 0X3E # cmpb %r15b, (%rsi)")
#define CMP_R15B_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X38, 0X7D, 0X00 # cmpb %r15b, (%rbp)")
#define CMP_R15B_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X38, 0X3C, 0X24 # cmpb %r15b, (%rsp)")
#define CMP_R15B_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X38, 0X38 # cmpb %r15b, (%r8)")
#define CMP_R15B_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X38, 0X39 # cmpb %r15b, (%r9)")
#define CMP_R15B_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X38, 0X3A # cmpb %r15b, (%r10)")
#define CMP_R15B_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X38, 0X3B # cmpb %r15b, (%r11)")
#define CMP_R15B_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X38, 0X3C, 0X24 # cmpb %r15b, (%r12)")
#define CMP_R15B_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X38, 0X7D, 0X00 # cmpb %r15b, (%r13)")
#define CMP_R15B_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X38, 0X3E # cmpb %r15b, (%r14)")
#define CMP_R15B_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X38, 0X3F # cmpb %r15b, (%r15)")
#define CMP_R15B_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X38, 0X38 # cmpb %r15b, (%eax)")
#define CMP_R15B_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X38, 0X3B # cmpb %r15b, (%ebx)")
#define CMP_R15B_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X38, 0X39 # cmpb %r15b, (%ecx)")
#define CMP_R15B_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X38, 0X3A # cmpb %r15b, (%edx)")
#define CMP_R15B_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X38, 0X3F # cmpb %r15b, (%edi)")
#define CMP_R15B_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X38, 0X3E # cmpb %r15b, (%esi)")
#define CMP_R15B_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X38, 0X7D, 0X00 # cmpb %r15b, (%ebp)")
#define CMP_R15B_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X38, 0X3C, 0X24 # cmpb %r15b, (%esp)")

#define CMP_AL_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X3A, 0X80 # cmpb " _(VALUE) "(%rax), %al")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AL_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X3A, 0X83 # cmpb " _(VALUE) "(%rbx), %al")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AL_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X3A, 0X81 # cmpb " _(VALUE) "(%rcx), %al")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AL_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X3A, 0X82 # cmpb " _(VALUE) "(%rdx), %al")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AL_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X3A, 0X87 # cmpb " _(VALUE) "(%rdi), %al")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AL_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X3A, 0X86 # cmpb " _(VALUE) "(%rsi), %al")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AL_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X3A, 0X85 # cmpb " _(VALUE) "(%rbp), %al")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AL_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X3A, 0X84, 0X24 # cmpb " _(VALUE) "(%rsp), %al")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AL_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3A, 0X80 # cmpb " _(VALUE) "(%r8), %al")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AL_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3A, 0X81 # cmpb " _(VALUE) "(%r9), %al")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AL_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3A, 0X82 # cmpb " _(VALUE) "(%r10), %al")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AL_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3A, 0X83 # cmpb " _(VALUE) "(%r11), %al")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AL_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3A, 0X84, 0X24 # cmpb " _(VALUE) "(%r12), %al")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AL_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3A, 0X85 # cmpb " _(VALUE) "(%r13), %al")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AL_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3A, 0X86 # cmpb " _(VALUE) "(%r14), %al")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AL_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3A, 0X87 # cmpb " _(VALUE) "(%r15), %al")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3A, 0X80 # cmpb " _(VALUE) "(%eax), %al")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3A, 0X83 # cmpb " _(VALUE) "(%ebx), %al")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3A, 0X81 # cmpb " _(VALUE) "(%ecx), %al")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3A, 0X82 # cmpb " _(VALUE) "(%edx), %al")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3A, 0X87 # cmpb " _(VALUE) "(%edi), %al")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3A, 0X86 # cmpb " _(VALUE) "(%esi), %al")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3A, 0X85 # cmpb " _(VALUE) "(%ebp), %al")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3A, 0X84, 0X24 # cmpb " _(VALUE) "(%esp), %al")\
	CMT_ASM(".long " _(VALUE))

#define CMP_BL_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X3A, 0X98 # cmpb " _(VALUE) "(%rax), %bl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BL_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X3A, 0X9B # cmpb " _(VALUE) "(%rbx), %bl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BL_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X3A, 0X99 # cmpb " _(VALUE) "(%rcx), %bl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BL_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X3A, 0X9A # cmpb " _(VALUE) "(%rdx), %bl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BL_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X3A, 0X9F # cmpb " _(VALUE) "(%rdi), %bl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BL_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X3A, 0X9E # cmpb " _(VALUE) "(%rsi), %bl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BL_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X3A, 0X9D # cmpb " _(VALUE) "(%rbp), %bl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BL_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X3A, 0X9C, 0X24 # cmpb " _(VALUE) "(%rsp), %bl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BL_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3A, 0X98 # cmpb " _(VALUE) "(%r8), %bl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BL_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3A, 0X99 # cmpb " _(VALUE) "(%r9), %bl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BL_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3A, 0X9A # cmpb " _(VALUE) "(%r10), %bl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BL_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3A, 0X9B # cmpb " _(VALUE) "(%r11), %bl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BL_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3A, 0X9C, 0X24 # cmpb " _(VALUE) "(%r12), %bl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BL_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3A, 0X9D # cmpb " _(VALUE) "(%r13), %bl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BL_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3A, 0X9E # cmpb " _(VALUE) "(%r14), %bl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BL_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3A, 0X9F # cmpb " _(VALUE) "(%r15), %bl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3A, 0X98 # cmpb " _(VALUE) "(%eax), %bl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3A, 0X9B # cmpb " _(VALUE) "(%ebx), %bl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3A, 0X99 # cmpb " _(VALUE) "(%ecx), %bl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3A, 0X9A # cmpb " _(VALUE) "(%edx), %bl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3A, 0X9F # cmpb " _(VALUE) "(%edi), %bl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3A, 0X9E # cmpb " _(VALUE) "(%esi), %bl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3A, 0X9D # cmpb " _(VALUE) "(%ebp), %bl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3A, 0X9C, 0X24 # cmpb " _(VALUE) "(%esp), %bl")\
	CMT_ASM(".long " _(VALUE))

#define CMP_CL_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X3A, 0X88 # cmpb " _(VALUE) "(%rax), %cl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CL_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X3A, 0X8B # cmpb " _(VALUE) "(%rbx), %cl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CL_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X3A, 0X89 # cmpb " _(VALUE) "(%rcx), %cl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CL_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X3A, 0X8A # cmpb " _(VALUE) "(%rdx), %cl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CL_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X3A, 0X8F # cmpb " _(VALUE) "(%rdi), %cl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CL_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X3A, 0X8E # cmpb " _(VALUE) "(%rsi), %cl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CL_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X3A, 0X8D # cmpb " _(VALUE) "(%rbp), %cl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CL_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X3A, 0X8C, 0X24 # cmpb " _(VALUE) "(%rsp), %cl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CL_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3A, 0X88 # cmpb " _(VALUE) "(%r8), %cl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CL_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3A, 0X89 # cmpb " _(VALUE) "(%r9), %cl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CL_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3A, 0X8A # cmpb " _(VALUE) "(%r10), %cl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CL_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3A, 0X8B # cmpb " _(VALUE) "(%r11), %cl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CL_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3A, 0X8C, 0X24 # cmpb " _(VALUE) "(%r12), %cl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CL_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3A, 0X8D # cmpb " _(VALUE) "(%r13), %cl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CL_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3A, 0X8E # cmpb " _(VALUE) "(%r14), %cl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CL_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3A, 0X8F # cmpb " _(VALUE) "(%r15), %cl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3A, 0X88 # cmpb " _(VALUE) "(%eax), %cl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3A, 0X8B # cmpb " _(VALUE) "(%ebx), %cl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3A, 0X89 # cmpb " _(VALUE) "(%ecx), %cl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3A, 0X8A # cmpb " _(VALUE) "(%edx), %cl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3A, 0X8F # cmpb " _(VALUE) "(%edi), %cl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3A, 0X8E # cmpb " _(VALUE) "(%esi), %cl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3A, 0X8D # cmpb " _(VALUE) "(%ebp), %cl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3A, 0X8C, 0X24 # cmpb " _(VALUE) "(%esp), %cl")\
	CMT_ASM(".long " _(VALUE))

#define CMP_DL_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X3A, 0X90 # cmpb " _(VALUE) "(%rax), %dl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DL_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X3A, 0X93 # cmpb " _(VALUE) "(%rbx), %dl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DL_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X3A, 0X91 # cmpb " _(VALUE) "(%rcx), %dl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DL_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X3A, 0X92 # cmpb " _(VALUE) "(%rdx), %dl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DL_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X3A, 0X97 # cmpb " _(VALUE) "(%rdi), %dl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DL_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X3A, 0X96 # cmpb " _(VALUE) "(%rsi), %dl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DL_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X3A, 0X95 # cmpb " _(VALUE) "(%rbp), %dl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DL_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X3A, 0X94, 0X24 # cmpb " _(VALUE) "(%rsp), %dl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DL_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3A, 0X90 # cmpb " _(VALUE) "(%r8), %dl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DL_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3A, 0X91 # cmpb " _(VALUE) "(%r9), %dl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DL_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3A, 0X92 # cmpb " _(VALUE) "(%r10), %dl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DL_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3A, 0X93 # cmpb " _(VALUE) "(%r11), %dl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DL_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3A, 0X94, 0X24 # cmpb " _(VALUE) "(%r12), %dl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DL_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3A, 0X95 # cmpb " _(VALUE) "(%r13), %dl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DL_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3A, 0X96 # cmpb " _(VALUE) "(%r14), %dl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DL_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3A, 0X97 # cmpb " _(VALUE) "(%r15), %dl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3A, 0X90 # cmpb " _(VALUE) "(%eax), %dl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3A, 0X93 # cmpb " _(VALUE) "(%ebx), %dl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3A, 0X91 # cmpb " _(VALUE) "(%ecx), %dl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3A, 0X92 # cmpb " _(VALUE) "(%edx), %dl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3A, 0X97 # cmpb " _(VALUE) "(%edi), %dl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3A, 0X96 # cmpb " _(VALUE) "(%esi), %dl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3A, 0X95 # cmpb " _(VALUE) "(%ebp), %dl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3A, 0X94, 0X24 # cmpb " _(VALUE) "(%esp), %dl")\
	CMT_ASM(".long " _(VALUE))

#define CMP_DIL_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X3A, 0XB8 # cmpb " _(VALUE) "(%rax), %dil")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DIL_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X3A, 0XBB # cmpb " _(VALUE) "(%rbx), %dil")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DIL_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X3A, 0XB9 # cmpb " _(VALUE) "(%rcx), %dil")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DIL_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X3A, 0XBA # cmpb " _(VALUE) "(%rdx), %dil")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DIL_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X3A, 0XBF # cmpb " _(VALUE) "(%rdi), %dil")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DIL_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X3A, 0XBE # cmpb " _(VALUE) "(%rsi), %dil")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DIL_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X3A, 0XBD # cmpb " _(VALUE) "(%rbp), %dil")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DIL_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X3A, 0XBC, 0X24 # cmpb " _(VALUE) "(%rsp), %dil")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DIL_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3A, 0XB8 # cmpb " _(VALUE) "(%r8), %dil")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DIL_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3A, 0XB9 # cmpb " _(VALUE) "(%r9), %dil")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DIL_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3A, 0XBA # cmpb " _(VALUE) "(%r10), %dil")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DIL_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3A, 0XBB # cmpb " _(VALUE) "(%r11), %dil")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DIL_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3A, 0XBC, 0X24 # cmpb " _(VALUE) "(%r12), %dil")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DIL_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3A, 0XBD # cmpb " _(VALUE) "(%r13), %dil")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DIL_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3A, 0XBE # cmpb " _(VALUE) "(%r14), %dil")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DIL_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3A, 0XBF # cmpb " _(VALUE) "(%r15), %dil")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DIL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X3A, 0XB8 # cmpb " _(VALUE) "(%eax), %dil")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DIL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X3A, 0XBB # cmpb " _(VALUE) "(%ebx), %dil")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DIL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X3A, 0XB9 # cmpb " _(VALUE) "(%ecx), %dil")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DIL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X3A, 0XBA # cmpb " _(VALUE) "(%edx), %dil")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DIL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X3A, 0XBF # cmpb " _(VALUE) "(%edi), %dil")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DIL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X3A, 0XBE # cmpb " _(VALUE) "(%esi), %dil")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DIL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X3A, 0XBD # cmpb " _(VALUE) "(%ebp), %dil")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DIL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X3A, 0XBC, 0X24 # cmpb " _(VALUE) "(%esp), %dil")\
	CMT_ASM(".long " _(VALUE))

#define CMP_SIL_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X3A, 0XB0 # cmpb " _(VALUE) "(%rax), %sil")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SIL_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X3A, 0XB3 # cmpb " _(VALUE) "(%rbx), %sil")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SIL_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X3A, 0XB1 # cmpb " _(VALUE) "(%rcx), %sil")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SIL_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X3A, 0XB2 # cmpb " _(VALUE) "(%rdx), %sil")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SIL_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X3A, 0XB7 # cmpb " _(VALUE) "(%rdi), %sil")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SIL_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X3A, 0XB6 # cmpb " _(VALUE) "(%rsi), %sil")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SIL_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X3A, 0XB5 # cmpb " _(VALUE) "(%rbp), %sil")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SIL_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X3A, 0XB4, 0X24 # cmpb " _(VALUE) "(%rsp), %sil")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SIL_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3A, 0XB0 # cmpb " _(VALUE) "(%r8), %sil")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SIL_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3A, 0XB1 # cmpb " _(VALUE) "(%r9), %sil")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SIL_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3A, 0XB2 # cmpb " _(VALUE) "(%r10), %sil")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SIL_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3A, 0XB3 # cmpb " _(VALUE) "(%r11), %sil")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SIL_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3A, 0XB4, 0X24 # cmpb " _(VALUE) "(%r12), %sil")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SIL_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3A, 0XB5 # cmpb " _(VALUE) "(%r13), %sil")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SIL_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3A, 0XB6 # cmpb " _(VALUE) "(%r14), %sil")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SIL_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3A, 0XB7 # cmpb " _(VALUE) "(%r15), %sil")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SIL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X3A, 0XB0 # cmpb " _(VALUE) "(%eax), %sil")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SIL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X3A, 0XB3 # cmpb " _(VALUE) "(%ebx), %sil")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SIL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X3A, 0XB1 # cmpb " _(VALUE) "(%ecx), %sil")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SIL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X3A, 0XB2 # cmpb " _(VALUE) "(%edx), %sil")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SIL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X3A, 0XB7 # cmpb " _(VALUE) "(%edi), %sil")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SIL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X3A, 0XB6 # cmpb " _(VALUE) "(%esi), %sil")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SIL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X3A, 0XB5 # cmpb " _(VALUE) "(%ebp), %sil")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SIL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X3A, 0XB4, 0X24 # cmpb " _(VALUE) "(%esp), %sil")\
	CMT_ASM(".long " _(VALUE))

#define CMP_BPL_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X3A, 0XA8 # cmpb " _(VALUE) "(%rax), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BPL_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X3A, 0XAB # cmpb " _(VALUE) "(%rbx), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BPL_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X3A, 0XA9 # cmpb " _(VALUE) "(%rcx), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BPL_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X3A, 0XAA # cmpb " _(VALUE) "(%rdx), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BPL_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X3A, 0XAF # cmpb " _(VALUE) "(%rdi), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BPL_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X3A, 0XAE # cmpb " _(VALUE) "(%rsi), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BPL_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X3A, 0XAD # cmpb " _(VALUE) "(%rbp), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BPL_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X3A, 0XAC, 0X24 # cmpb " _(VALUE) "(%rsp), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BPL_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3A, 0XA8 # cmpb " _(VALUE) "(%r8), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BPL_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3A, 0XA9 # cmpb " _(VALUE) "(%r9), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BPL_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3A, 0XAA # cmpb " _(VALUE) "(%r10), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BPL_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3A, 0XAB # cmpb " _(VALUE) "(%r11), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BPL_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3A, 0XAC, 0X24 # cmpb " _(VALUE) "(%r12), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BPL_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3A, 0XAD # cmpb " _(VALUE) "(%r13), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BPL_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3A, 0XAE # cmpb " _(VALUE) "(%r14), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BPL_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3A, 0XAF # cmpb " _(VALUE) "(%r15), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BPL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X3A, 0XA8 # cmpb " _(VALUE) "(%eax), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BPL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X3A, 0XAB # cmpb " _(VALUE) "(%ebx), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BPL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X3A, 0XA9 # cmpb " _(VALUE) "(%ecx), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BPL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X3A, 0XAA # cmpb " _(VALUE) "(%edx), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BPL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X3A, 0XAF # cmpb " _(VALUE) "(%edi), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BPL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X3A, 0XAE # cmpb " _(VALUE) "(%esi), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BPL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X3A, 0XAD # cmpb " _(VALUE) "(%ebp), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BPL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X3A, 0XAC, 0X24 # cmpb " _(VALUE) "(%esp), %bpl")\
	CMT_ASM(".long " _(VALUE))

#define CMP_SPL_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X3A, 0XA0 # cmpb " _(VALUE) "(%rax), %spl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SPL_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X3A, 0XA3 # cmpb " _(VALUE) "(%rbx), %spl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SPL_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X3A, 0XA1 # cmpb " _(VALUE) "(%rcx), %spl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SPL_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X3A, 0XA2 # cmpb " _(VALUE) "(%rdx), %spl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SPL_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X3A, 0XA7 # cmpb " _(VALUE) "(%rdi), %spl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SPL_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X3A, 0XA6 # cmpb " _(VALUE) "(%rsi), %spl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SPL_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X3A, 0XA5 # cmpb " _(VALUE) "(%rbp), %spl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SPL_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X3A, 0XA4, 0X24 # cmpb " _(VALUE) "(%rsp), %spl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SPL_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3A, 0XA0 # cmpb " _(VALUE) "(%r8), %spl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SPL_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3A, 0XA1 # cmpb " _(VALUE) "(%r9), %spl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SPL_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3A, 0XA2 # cmpb " _(VALUE) "(%r10), %spl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SPL_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3A, 0XA3 # cmpb " _(VALUE) "(%r11), %spl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SPL_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3A, 0XA4, 0X24 # cmpb " _(VALUE) "(%r12), %spl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SPL_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3A, 0XA5 # cmpb " _(VALUE) "(%r13), %spl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SPL_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3A, 0XA6 # cmpb " _(VALUE) "(%r14), %spl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SPL_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3A, 0XA7 # cmpb " _(VALUE) "(%r15), %spl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SPL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X3A, 0XA0 # cmpb " _(VALUE) "(%eax), %spl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SPL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X3A, 0XA3 # cmpb " _(VALUE) "(%ebx), %spl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SPL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X3A, 0XA1 # cmpb " _(VALUE) "(%ecx), %spl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SPL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X3A, 0XA2 # cmpb " _(VALUE) "(%edx), %spl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SPL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X3A, 0XA7 # cmpb " _(VALUE) "(%edi), %spl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SPL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X3A, 0XA6 # cmpb " _(VALUE) "(%esi), %spl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SPL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X3A, 0XA5 # cmpb " _(VALUE) "(%ebp), %spl")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SPL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X3A, 0XA4, 0X24 # cmpb " _(VALUE) "(%esp), %spl")\
	CMT_ASM(".long " _(VALUE))

#define CMP_R8B_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3A, 0X80 # cmpb " _(VALUE) "(%rax), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8B_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3A, 0X83 # cmpb " _(VALUE) "(%rbx), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8B_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3A, 0X81 # cmpb " _(VALUE) "(%rcx), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8B_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3A, 0X82 # cmpb " _(VALUE) "(%rdx), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8B_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3A, 0X87 # cmpb " _(VALUE) "(%rdi), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8B_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3A, 0X86 # cmpb " _(VALUE) "(%rsi), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8B_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3A, 0X85 # cmpb " _(VALUE) "(%rbp), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8B_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3A, 0X84, 0X24 # cmpb " _(VALUE) "(%rsp), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8B_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3A, 0X80 # cmpb " _(VALUE) "(%r8), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8B_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3A, 0X81 # cmpb " _(VALUE) "(%r9), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8B_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3A, 0X82 # cmpb " _(VALUE) "(%r10), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8B_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3A, 0X83 # cmpb " _(VALUE) "(%r11), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8B_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3A, 0X84, 0X24 # cmpb " _(VALUE) "(%r12), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8B_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3A, 0X85 # cmpb " _(VALUE) "(%r13), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8B_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3A, 0X86 # cmpb " _(VALUE) "(%r14), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8B_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3A, 0X87 # cmpb " _(VALUE) "(%r15), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8B_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3A, 0X80 # cmpb " _(VALUE) "(%eax), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8B_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3A, 0X83 # cmpb " _(VALUE) "(%ebx), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8B_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3A, 0X81 # cmpb " _(VALUE) "(%ecx), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8B_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3A, 0X82 # cmpb " _(VALUE) "(%edx), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8B_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3A, 0X87 # cmpb " _(VALUE) "(%edi), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8B_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3A, 0X86 # cmpb " _(VALUE) "(%esi), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8B_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3A, 0X85 # cmpb " _(VALUE) "(%ebp), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8B_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3A, 0X84, 0X24 # cmpb " _(VALUE) "(%esp), %r8b")\
	CMT_ASM(".long " _(VALUE))

#define CMP_R9B_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3A, 0X88 # cmpb " _(VALUE) "(%rax), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9B_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3A, 0X8B # cmpb " _(VALUE) "(%rbx), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9B_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3A, 0X89 # cmpb " _(VALUE) "(%rcx), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9B_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3A, 0X8A # cmpb " _(VALUE) "(%rdx), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9B_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3A, 0X8F # cmpb " _(VALUE) "(%rdi), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9B_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3A, 0X8E # cmpb " _(VALUE) "(%rsi), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9B_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3A, 0X8D # cmpb " _(VALUE) "(%rbp), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9B_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3A, 0X8C, 0X24 # cmpb " _(VALUE) "(%rsp), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9B_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3A, 0X88 # cmpb " _(VALUE) "(%r8), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9B_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3A, 0X89 # cmpb " _(VALUE) "(%r9), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9B_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3A, 0X8A # cmpb " _(VALUE) "(%r10), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9B_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3A, 0X8B # cmpb " _(VALUE) "(%r11), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9B_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3A, 0X8C, 0X24 # cmpb " _(VALUE) "(%r12), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9B_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3A, 0X8D # cmpb " _(VALUE) "(%r13), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9B_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3A, 0X8E # cmpb " _(VALUE) "(%r14), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9B_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3A, 0X8F # cmpb " _(VALUE) "(%r15), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9B_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3A, 0X88 # cmpb " _(VALUE) "(%eax), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9B_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3A, 0X8B # cmpb " _(VALUE) "(%ebx), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9B_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3A, 0X89 # cmpb " _(VALUE) "(%ecx), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9B_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3A, 0X8A # cmpb " _(VALUE) "(%edx), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9B_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3A, 0X8F # cmpb " _(VALUE) "(%edi), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9B_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3A, 0X8E # cmpb " _(VALUE) "(%esi), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9B_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3A, 0X8D # cmpb " _(VALUE) "(%ebp), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9B_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3A, 0X8C, 0X24 # cmpb " _(VALUE) "(%esp), %r9b")\
	CMT_ASM(".long " _(VALUE))

#define CMP_R10B_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3A, 0X90 # cmpb " _(VALUE) "(%rax), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10B_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3A, 0X93 # cmpb " _(VALUE) "(%rbx), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10B_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3A, 0X91 # cmpb " _(VALUE) "(%rcx), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10B_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3A, 0X92 # cmpb " _(VALUE) "(%rdx), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10B_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3A, 0X97 # cmpb " _(VALUE) "(%rdi), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10B_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3A, 0X96 # cmpb " _(VALUE) "(%rsi), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10B_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3A, 0X95 # cmpb " _(VALUE) "(%rbp), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10B_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3A, 0X94, 0X24 # cmpb " _(VALUE) "(%rsp), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10B_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3A, 0X90 # cmpb " _(VALUE) "(%r8), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10B_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3A, 0X91 # cmpb " _(VALUE) "(%r9), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10B_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3A, 0X92 # cmpb " _(VALUE) "(%r10), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10B_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3A, 0X93 # cmpb " _(VALUE) "(%r11), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10B_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3A, 0X94, 0X24 # cmpb " _(VALUE) "(%r12), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10B_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3A, 0X95 # cmpb " _(VALUE) "(%r13), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10B_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3A, 0X96 # cmpb " _(VALUE) "(%r14), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10B_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3A, 0X97 # cmpb " _(VALUE) "(%r15), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10B_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3A, 0X90 # cmpb " _(VALUE) "(%eax), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10B_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3A, 0X93 # cmpb " _(VALUE) "(%ebx), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10B_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3A, 0X91 # cmpb " _(VALUE) "(%ecx), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10B_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3A, 0X92 # cmpb " _(VALUE) "(%edx), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10B_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3A, 0X97 # cmpb " _(VALUE) "(%edi), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10B_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3A, 0X96 # cmpb " _(VALUE) "(%esi), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10B_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3A, 0X95 # cmpb " _(VALUE) "(%ebp), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10B_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3A, 0X94, 0X24 # cmpb " _(VALUE) "(%esp), %r10b")\
	CMT_ASM(".long " _(VALUE))

#define CMP_R11B_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3A, 0X98 # cmpb " _(VALUE) "(%rax), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11B_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3A, 0X9B # cmpb " _(VALUE) "(%rbx), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11B_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3A, 0X99 # cmpb " _(VALUE) "(%rcx), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11B_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3A, 0X9A # cmpb " _(VALUE) "(%rdx), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11B_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3A, 0X9F # cmpb " _(VALUE) "(%rdi), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11B_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3A, 0X9E # cmpb " _(VALUE) "(%rsi), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11B_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3A, 0X9D # cmpb " _(VALUE) "(%rbp), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11B_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3A, 0X9C, 0X24 # cmpb " _(VALUE) "(%rsp), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11B_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3A, 0X98 # cmpb " _(VALUE) "(%r8), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11B_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3A, 0X99 # cmpb " _(VALUE) "(%r9), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11B_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3A, 0X9A # cmpb " _(VALUE) "(%r10), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11B_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3A, 0X9B # cmpb " _(VALUE) "(%r11), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11B_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3A, 0X9C, 0X24 # cmpb " _(VALUE) "(%r12), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11B_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3A, 0X9D # cmpb " _(VALUE) "(%r13), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11B_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3A, 0X9E # cmpb " _(VALUE) "(%r14), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11B_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3A, 0X9F # cmpb " _(VALUE) "(%r15), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11B_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3A, 0X98 # cmpb " _(VALUE) "(%eax), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11B_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3A, 0X9B # cmpb " _(VALUE) "(%ebx), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11B_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3A, 0X99 # cmpb " _(VALUE) "(%ecx), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11B_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3A, 0X9A # cmpb " _(VALUE) "(%edx), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11B_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3A, 0X9F # cmpb " _(VALUE) "(%edi), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11B_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3A, 0X9E # cmpb " _(VALUE) "(%esi), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11B_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3A, 0X9D # cmpb " _(VALUE) "(%ebp), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11B_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3A, 0X9C, 0X24 # cmpb " _(VALUE) "(%esp), %r11b")\
	CMT_ASM(".long " _(VALUE))

#define CMP_R12B_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3A, 0XA0 # cmpb " _(VALUE) "(%rax), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12B_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3A, 0XA3 # cmpb " _(VALUE) "(%rbx), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12B_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3A, 0XA1 # cmpb " _(VALUE) "(%rcx), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12B_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3A, 0XA2 # cmpb " _(VALUE) "(%rdx), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12B_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3A, 0XA7 # cmpb " _(VALUE) "(%rdi), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12B_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3A, 0XA6 # cmpb " _(VALUE) "(%rsi), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12B_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3A, 0XA5 # cmpb " _(VALUE) "(%rbp), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12B_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3A, 0XA4, 0X24 # cmpb " _(VALUE) "(%rsp), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12B_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3A, 0XA0 # cmpb " _(VALUE) "(%r8), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12B_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3A, 0XA1 # cmpb " _(VALUE) "(%r9), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12B_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3A, 0XA2 # cmpb " _(VALUE) "(%r10), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12B_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3A, 0XA3 # cmpb " _(VALUE) "(%r11), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12B_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3A, 0XA4, 0X24 # cmpb " _(VALUE) "(%r12), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12B_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3A, 0XA5 # cmpb " _(VALUE) "(%r13), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12B_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3A, 0XA6 # cmpb " _(VALUE) "(%r14), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12B_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3A, 0XA7 # cmpb " _(VALUE) "(%r15), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12B_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3A, 0XA0 # cmpb " _(VALUE) "(%eax), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12B_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3A, 0XA3 # cmpb " _(VALUE) "(%ebx), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12B_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3A, 0XA1 # cmpb " _(VALUE) "(%ecx), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12B_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3A, 0XA2 # cmpb " _(VALUE) "(%edx), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12B_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3A, 0XA7 # cmpb " _(VALUE) "(%edi), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12B_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3A, 0XA6 # cmpb " _(VALUE) "(%esi), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12B_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3A, 0XA5 # cmpb " _(VALUE) "(%ebp), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12B_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3A, 0XA4, 0X24 # cmpb " _(VALUE) "(%esp), %r12b")\
	CMT_ASM(".long " _(VALUE))

#define CMP_R13B_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3A, 0XA8 # cmpb " _(VALUE) "(%rax), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13B_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3A, 0XAB # cmpb " _(VALUE) "(%rbx), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13B_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3A, 0XA9 # cmpb " _(VALUE) "(%rcx), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13B_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3A, 0XAA # cmpb " _(VALUE) "(%rdx), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13B_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3A, 0XAF # cmpb " _(VALUE) "(%rdi), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13B_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3A, 0XAE # cmpb " _(VALUE) "(%rsi), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13B_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3A, 0XAD # cmpb " _(VALUE) "(%rbp), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13B_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3A, 0XAC, 0X24 # cmpb " _(VALUE) "(%rsp), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13B_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3A, 0XA8 # cmpb " _(VALUE) "(%r8), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13B_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3A, 0XA9 # cmpb " _(VALUE) "(%r9), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13B_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3A, 0XAA # cmpb " _(VALUE) "(%r10), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13B_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3A, 0XAB # cmpb " _(VALUE) "(%r11), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13B_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3A, 0XAC, 0X24 # cmpb " _(VALUE) "(%r12), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13B_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3A, 0XAD # cmpb " _(VALUE) "(%r13), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13B_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3A, 0XAE # cmpb " _(VALUE) "(%r14), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13B_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3A, 0XAF # cmpb " _(VALUE) "(%r15), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13B_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3A, 0XA8 # cmpb " _(VALUE) "(%eax), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13B_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3A, 0XAB # cmpb " _(VALUE) "(%ebx), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13B_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3A, 0XA9 # cmpb " _(VALUE) "(%ecx), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13B_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3A, 0XAA # cmpb " _(VALUE) "(%edx), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13B_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3A, 0XAF # cmpb " _(VALUE) "(%edi), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13B_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3A, 0XAE # cmpb " _(VALUE) "(%esi), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13B_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3A, 0XAD # cmpb " _(VALUE) "(%ebp), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13B_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3A, 0XAC, 0X24 # cmpb " _(VALUE) "(%esp), %r13b")\
	CMT_ASM(".long " _(VALUE))

#define CMP_R14B_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3A, 0XB0 # cmpb " _(VALUE) "(%rax), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14B_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3A, 0XB3 # cmpb " _(VALUE) "(%rbx), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14B_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3A, 0XB1 # cmpb " _(VALUE) "(%rcx), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14B_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3A, 0XB2 # cmpb " _(VALUE) "(%rdx), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14B_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3A, 0XB7 # cmpb " _(VALUE) "(%rdi), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14B_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3A, 0XB6 # cmpb " _(VALUE) "(%rsi), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14B_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3A, 0XB5 # cmpb " _(VALUE) "(%rbp), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14B_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3A, 0XB4, 0X24 # cmpb " _(VALUE) "(%rsp), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14B_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3A, 0XB0 # cmpb " _(VALUE) "(%r8), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14B_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3A, 0XB1 # cmpb " _(VALUE) "(%r9), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14B_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3A, 0XB2 # cmpb " _(VALUE) "(%r10), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14B_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3A, 0XB3 # cmpb " _(VALUE) "(%r11), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14B_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3A, 0XB4, 0X24 # cmpb " _(VALUE) "(%r12), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14B_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3A, 0XB5 # cmpb " _(VALUE) "(%r13), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14B_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3A, 0XB6 # cmpb " _(VALUE) "(%r14), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14B_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3A, 0XB7 # cmpb " _(VALUE) "(%r15), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14B_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3A, 0XB0 # cmpb " _(VALUE) "(%eax), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14B_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3A, 0XB3 # cmpb " _(VALUE) "(%ebx), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14B_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3A, 0XB1 # cmpb " _(VALUE) "(%ecx), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14B_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3A, 0XB2 # cmpb " _(VALUE) "(%edx), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14B_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3A, 0XB7 # cmpb " _(VALUE) "(%edi), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14B_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3A, 0XB6 # cmpb " _(VALUE) "(%esi), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14B_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3A, 0XB5 # cmpb " _(VALUE) "(%ebp), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14B_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3A, 0XB4, 0X24 # cmpb " _(VALUE) "(%esp), %r14b")\
	CMT_ASM(".long " _(VALUE))

#define CMP_R15B_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3A, 0XB8 # cmpb " _(VALUE) "(%rax), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15B_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3A, 0XBB # cmpb " _(VALUE) "(%rbx), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15B_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3A, 0XB9 # cmpb " _(VALUE) "(%rcx), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15B_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3A, 0XBA # cmpb " _(VALUE) "(%rdx), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15B_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3A, 0XBF # cmpb " _(VALUE) "(%rdi), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15B_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3A, 0XBE # cmpb " _(VALUE) "(%rsi), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15B_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3A, 0XBD # cmpb " _(VALUE) "(%rbp), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15B_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3A, 0XBC, 0X24 # cmpb " _(VALUE) "(%rsp), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15B_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3A, 0XB8 # cmpb " _(VALUE) "(%r8), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15B_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3A, 0XB9 # cmpb " _(VALUE) "(%r9), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15B_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3A, 0XBA # cmpb " _(VALUE) "(%r10), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15B_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3A, 0XBB # cmpb " _(VALUE) "(%r11), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15B_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3A, 0XBC, 0X24 # cmpb " _(VALUE) "(%r12), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15B_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3A, 0XBD # cmpb " _(VALUE) "(%r13), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15B_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3A, 0XBE # cmpb " _(VALUE) "(%r14), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15B_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3A, 0XBF # cmpb " _(VALUE) "(%r15), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15B_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3A, 0XB8 # cmpb " _(VALUE) "(%eax), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15B_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3A, 0XBB # cmpb " _(VALUE) "(%ebx), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15B_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3A, 0XB9 # cmpb " _(VALUE) "(%ecx), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15B_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3A, 0XBA # cmpb " _(VALUE) "(%edx), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15B_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3A, 0XBF # cmpb " _(VALUE) "(%edi), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15B_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3A, 0XBE # cmpb " _(VALUE) "(%esi), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15B_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3A, 0XBD # cmpb " _(VALUE) "(%ebp), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15B_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3A, 0XBC, 0X24 # cmpb " _(VALUE) "(%esp), %r15b")\
	CMT_ASM(".long " _(VALUE))

#define CMP_AL_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X38, 0X80 # cmpb %al, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AL_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X38, 0X83 # cmpb %al, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AL_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X38, 0X81 # cmpb %al, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AL_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X38, 0X82 # cmpb %al, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AL_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X38, 0X87 # cmpb %al, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AL_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X38, 0X86 # cmpb %al, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AL_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X38, 0X85 # cmpb %al, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AL_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X38, 0X84, 0X24 # cmpb %al, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AL_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X38, 0X80 # cmpb %al, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AL_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X38, 0X81 # cmpb %al, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AL_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X38, 0X82 # cmpb %al, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AL_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X38, 0X83 # cmpb %al, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AL_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X38, 0X84, 0X24 # cmpb %al, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AL_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X38, 0X85 # cmpb %al, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AL_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X38, 0X86 # cmpb %al, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AL_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X38, 0X87 # cmpb %al, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X38, 0X80 # cmpb %al, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X38, 0X83 # cmpb %al, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X38, 0X81 # cmpb %al, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X38, 0X82 # cmpb %al, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X38, 0X87 # cmpb %al, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X38, 0X86 # cmpb %al, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X38, 0X85 # cmpb %al, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X38, 0X84, 0X24 # cmpb %al, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define CMP_BL_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X38, 0X98 # cmpb %bl, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BL_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X38, 0X9B # cmpb %bl, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BL_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X38, 0X99 # cmpb %bl, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BL_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X38, 0X9A # cmpb %bl, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BL_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X38, 0X9F # cmpb %bl, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BL_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X38, 0X9E # cmpb %bl, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BL_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X38, 0X9D # cmpb %bl, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BL_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X38, 0X9C, 0X24 # cmpb %bl, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BL_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X38, 0X98 # cmpb %bl, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BL_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X38, 0X99 # cmpb %bl, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BL_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X38, 0X9A # cmpb %bl, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BL_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X38, 0X9B # cmpb %bl, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BL_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X38, 0X9C, 0X24 # cmpb %bl, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BL_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X38, 0X9D # cmpb %bl, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BL_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X38, 0X9E # cmpb %bl, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BL_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X38, 0X9F # cmpb %bl, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X38, 0X98 # cmpb %bl, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X38, 0X9B # cmpb %bl, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X38, 0X99 # cmpb %bl, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X38, 0X9A # cmpb %bl, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X38, 0X9F # cmpb %bl, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X38, 0X9E # cmpb %bl, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X38, 0X9D # cmpb %bl, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X38, 0X9C, 0X24 # cmpb %bl, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define CMP_CL_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X38, 0X88 # cmpb %cl, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CL_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X38, 0X8B # cmpb %cl, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CL_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X38, 0X89 # cmpb %cl, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CL_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X38, 0X8A # cmpb %cl, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CL_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X38, 0X8F # cmpb %cl, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CL_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X38, 0X8E # cmpb %cl, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CL_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X38, 0X8D # cmpb %cl, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CL_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X38, 0X8C, 0X24 # cmpb %cl, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CL_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X38, 0X88 # cmpb %cl, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CL_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X38, 0X89 # cmpb %cl, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CL_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X38, 0X8A # cmpb %cl, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CL_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X38, 0X8B # cmpb %cl, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CL_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X38, 0X8C, 0X24 # cmpb %cl, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CL_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X38, 0X8D # cmpb %cl, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CL_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X38, 0X8E # cmpb %cl, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CL_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X38, 0X8F # cmpb %cl, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X38, 0X88 # cmpb %cl, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X38, 0X8B # cmpb %cl, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X38, 0X89 # cmpb %cl, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X38, 0X8A # cmpb %cl, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X38, 0X8F # cmpb %cl, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X38, 0X8E # cmpb %cl, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X38, 0X8D # cmpb %cl, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X38, 0X8C, 0X24 # cmpb %cl, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define CMP_DL_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X38, 0X90 # cmpb %dl, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DL_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X38, 0X93 # cmpb %dl, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DL_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X38, 0X91 # cmpb %dl, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DL_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X38, 0X92 # cmpb %dl, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DL_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X38, 0X97 # cmpb %dl, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DL_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X38, 0X96 # cmpb %dl, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DL_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X38, 0X95 # cmpb %dl, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DL_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X38, 0X94, 0X24 # cmpb %dl, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DL_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X38, 0X90 # cmpb %dl, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DL_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X38, 0X91 # cmpb %dl, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DL_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X38, 0X92 # cmpb %dl, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DL_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X38, 0X93 # cmpb %dl, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DL_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X38, 0X94, 0X24 # cmpb %dl, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DL_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X38, 0X95 # cmpb %dl, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DL_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X38, 0X96 # cmpb %dl, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DL_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X38, 0X97 # cmpb %dl, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X38, 0X90 # cmpb %dl, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X38, 0X93 # cmpb %dl, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X38, 0X91 # cmpb %dl, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X38, 0X92 # cmpb %dl, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X38, 0X97 # cmpb %dl, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X38, 0X96 # cmpb %dl, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X38, 0X95 # cmpb %dl, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X38, 0X94, 0X24 # cmpb %dl, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define CMP_DIL_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X38, 0XB8 # cmpb %dil, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DIL_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X38, 0XBB # cmpb %dil, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DIL_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X38, 0XB9 # cmpb %dil, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DIL_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X38, 0XBA # cmpb %dil, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DIL_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X38, 0XBF # cmpb %dil, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DIL_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X38, 0XBE # cmpb %dil, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DIL_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X38, 0XBD # cmpb %dil, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DIL_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X38, 0XBC, 0X24 # cmpb %dil, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DIL_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X38, 0XB8 # cmpb %dil, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DIL_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X38, 0XB9 # cmpb %dil, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DIL_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X38, 0XBA # cmpb %dil, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DIL_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X38, 0XBB # cmpb %dil, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DIL_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X38, 0XBC, 0X24 # cmpb %dil, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DIL_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X38, 0XBD # cmpb %dil, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DIL_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X38, 0XBE # cmpb %dil, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DIL_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X38, 0XBF # cmpb %dil, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DIL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X38, 0XB8 # cmpb %dil, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DIL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X38, 0XBB # cmpb %dil, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DIL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X38, 0XB9 # cmpb %dil, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DIL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X38, 0XBA # cmpb %dil, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DIL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X38, 0XBF # cmpb %dil, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DIL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X38, 0XBE # cmpb %dil, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DIL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X38, 0XBD # cmpb %dil, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DIL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X38, 0XBC, 0X24 # cmpb %dil, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define CMP_SIL_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X38, 0XB0 # cmpb %sil, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SIL_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X38, 0XB3 # cmpb %sil, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SIL_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X38, 0XB1 # cmpb %sil, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SIL_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X38, 0XB2 # cmpb %sil, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SIL_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X38, 0XB7 # cmpb %sil, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SIL_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X38, 0XB6 # cmpb %sil, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SIL_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X38, 0XB5 # cmpb %sil, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SIL_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X38, 0XB4, 0X24 # cmpb %sil, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SIL_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X38, 0XB0 # cmpb %sil, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SIL_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X38, 0XB1 # cmpb %sil, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SIL_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X38, 0XB2 # cmpb %sil, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SIL_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X38, 0XB3 # cmpb %sil, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SIL_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X38, 0XB4, 0X24 # cmpb %sil, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SIL_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X38, 0XB5 # cmpb %sil, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SIL_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X38, 0XB6 # cmpb %sil, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SIL_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X38, 0XB7 # cmpb %sil, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SIL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X38, 0XB0 # cmpb %sil, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SIL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X38, 0XB3 # cmpb %sil, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SIL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X38, 0XB1 # cmpb %sil, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SIL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X38, 0XB2 # cmpb %sil, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SIL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X38, 0XB7 # cmpb %sil, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SIL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X38, 0XB6 # cmpb %sil, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SIL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X38, 0XB5 # cmpb %sil, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SIL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X38, 0XB4, 0X24 # cmpb %sil, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define CMP_BPL_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X38, 0XA8 # cmpb %bpl, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BPL_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X38, 0XAB # cmpb %bpl, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BPL_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X38, 0XA9 # cmpb %bpl, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BPL_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X38, 0XAA # cmpb %bpl, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BPL_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X38, 0XAF # cmpb %bpl, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BPL_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X38, 0XAE # cmpb %bpl, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BPL_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X38, 0XAD # cmpb %bpl, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BPL_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X38, 0XAC, 0X24 # cmpb %bpl, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BPL_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X38, 0XA8 # cmpb %bpl, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BPL_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X38, 0XA9 # cmpb %bpl, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BPL_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X38, 0XAA # cmpb %bpl, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BPL_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X38, 0XAB # cmpb %bpl, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BPL_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X38, 0XAC, 0X24 # cmpb %bpl, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BPL_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X38, 0XAD # cmpb %bpl, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BPL_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X38, 0XAE # cmpb %bpl, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BPL_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X38, 0XAF # cmpb %bpl, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BPL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X38, 0XA8 # cmpb %bpl, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BPL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X38, 0XAB # cmpb %bpl, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BPL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X38, 0XA9 # cmpb %bpl, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BPL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X38, 0XAA # cmpb %bpl, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BPL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X38, 0XAF # cmpb %bpl, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BPL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X38, 0XAE # cmpb %bpl, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BPL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X38, 0XAD # cmpb %bpl, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BPL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X38, 0XAC, 0X24 # cmpb %bpl, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define CMP_SPL_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X38, 0XA0 # cmpb %spl, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SPL_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X38, 0XA3 # cmpb %spl, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SPL_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X38, 0XA1 # cmpb %spl, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SPL_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X38, 0XA2 # cmpb %spl, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SPL_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X38, 0XA7 # cmpb %spl, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SPL_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X38, 0XA6 # cmpb %spl, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SPL_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X38, 0XA5 # cmpb %spl, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SPL_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X38, 0XA4, 0X24 # cmpb %spl, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SPL_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X38, 0XA0 # cmpb %spl, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SPL_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X38, 0XA1 # cmpb %spl, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SPL_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X38, 0XA2 # cmpb %spl, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SPL_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X38, 0XA3 # cmpb %spl, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SPL_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X38, 0XA4, 0X24 # cmpb %spl, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SPL_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X38, 0XA5 # cmpb %spl, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SPL_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X38, 0XA6 # cmpb %spl, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SPL_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X38, 0XA7 # cmpb %spl, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SPL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X38, 0XA0 # cmpb %spl, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SPL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X38, 0XA3 # cmpb %spl, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SPL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X38, 0XA1 # cmpb %spl, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SPL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X38, 0XA2 # cmpb %spl, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SPL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X38, 0XA7 # cmpb %spl, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SPL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X38, 0XA6 # cmpb %spl, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SPL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X38, 0XA5 # cmpb %spl, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SPL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X38, 0XA4, 0X24 # cmpb %spl, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define CMP_R8B_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X38, 0X80 # cmpb %r8b, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8B_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X38, 0X83 # cmpb %r8b, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8B_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X38, 0X81 # cmpb %r8b, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8B_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X38, 0X82 # cmpb %r8b, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8B_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X38, 0X87 # cmpb %r8b, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8B_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X38, 0X86 # cmpb %r8b, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8B_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X38, 0X85 # cmpb %r8b, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8B_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X38, 0X84, 0X24 # cmpb %r8b, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8B_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X38, 0X80 # cmpb %r8b, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8B_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X38, 0X81 # cmpb %r8b, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8B_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X38, 0X82 # cmpb %r8b, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8B_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X38, 0X83 # cmpb %r8b, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8B_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X38, 0X84, 0X24 # cmpb %r8b, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8B_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X38, 0X85 # cmpb %r8b, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8B_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X38, 0X86 # cmpb %r8b, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8B_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X38, 0X87 # cmpb %r8b, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8B_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X38, 0X80 # cmpb %r8b, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8B_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X38, 0X83 # cmpb %r8b, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8B_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X38, 0X81 # cmpb %r8b, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8B_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X38, 0X82 # cmpb %r8b, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8B_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X38, 0X87 # cmpb %r8b, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8B_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X38, 0X86 # cmpb %r8b, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8B_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X38, 0X85 # cmpb %r8b, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8B_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X38, 0X84, 0X24 # cmpb %r8b, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define CMP_R9B_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X38, 0X88 # cmpb %r9b, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9B_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X38, 0X8B # cmpb %r9b, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9B_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X38, 0X89 # cmpb %r9b, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9B_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X38, 0X8A # cmpb %r9b, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9B_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X38, 0X8F # cmpb %r9b, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9B_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X38, 0X8E # cmpb %r9b, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9B_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X38, 0X8D # cmpb %r9b, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9B_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X38, 0X8C, 0X24 # cmpb %r9b, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9B_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X38, 0X88 # cmpb %r9b, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9B_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X38, 0X89 # cmpb %r9b, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9B_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X38, 0X8A # cmpb %r9b, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9B_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X38, 0X8B # cmpb %r9b, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9B_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X38, 0X8C, 0X24 # cmpb %r9b, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9B_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X38, 0X8D # cmpb %r9b, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9B_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X38, 0X8E # cmpb %r9b, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9B_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X38, 0X8F # cmpb %r9b, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9B_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X38, 0X88 # cmpb %r9b, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9B_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X38, 0X8B # cmpb %r9b, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9B_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X38, 0X89 # cmpb %r9b, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9B_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X38, 0X8A # cmpb %r9b, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9B_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X38, 0X8F # cmpb %r9b, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9B_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X38, 0X8E # cmpb %r9b, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9B_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X38, 0X8D # cmpb %r9b, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9B_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X38, 0X8C, 0X24 # cmpb %r9b, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define CMP_R10B_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X38, 0X90 # cmpb %r10b, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10B_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X38, 0X93 # cmpb %r10b, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10B_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X38, 0X91 # cmpb %r10b, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10B_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X38, 0X92 # cmpb %r10b, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10B_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X38, 0X97 # cmpb %r10b, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10B_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X38, 0X96 # cmpb %r10b, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10B_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X38, 0X95 # cmpb %r10b, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10B_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X38, 0X94, 0X24 # cmpb %r10b, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10B_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X38, 0X90 # cmpb %r10b, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10B_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X38, 0X91 # cmpb %r10b, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10B_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X38, 0X92 # cmpb %r10b, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10B_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X38, 0X93 # cmpb %r10b, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10B_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X38, 0X94, 0X24 # cmpb %r10b, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10B_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X38, 0X95 # cmpb %r10b, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10B_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X38, 0X96 # cmpb %r10b, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10B_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X38, 0X97 # cmpb %r10b, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10B_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X38, 0X90 # cmpb %r10b, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10B_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X38, 0X93 # cmpb %r10b, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10B_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X38, 0X91 # cmpb %r10b, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10B_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X38, 0X92 # cmpb %r10b, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10B_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X38, 0X97 # cmpb %r10b, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10B_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X38, 0X96 # cmpb %r10b, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10B_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X38, 0X95 # cmpb %r10b, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10B_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X38, 0X94, 0X24 # cmpb %r10b, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define CMP_R11B_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X38, 0X98 # cmpb %r11b, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11B_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X38, 0X9B # cmpb %r11b, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11B_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X38, 0X99 # cmpb %r11b, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11B_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X38, 0X9A # cmpb %r11b, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11B_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X38, 0X9F # cmpb %r11b, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11B_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X38, 0X9E # cmpb %r11b, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11B_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X38, 0X9D # cmpb %r11b, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11B_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X38, 0X9C, 0X24 # cmpb %r11b, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11B_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X38, 0X98 # cmpb %r11b, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11B_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X38, 0X99 # cmpb %r11b, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11B_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X38, 0X9A # cmpb %r11b, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11B_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X38, 0X9B # cmpb %r11b, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11B_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X38, 0X9C, 0X24 # cmpb %r11b, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11B_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X38, 0X9D # cmpb %r11b, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11B_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X38, 0X9E # cmpb %r11b, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11B_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X38, 0X9F # cmpb %r11b, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11B_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X38, 0X98 # cmpb %r11b, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11B_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X38, 0X9B # cmpb %r11b, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11B_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X38, 0X99 # cmpb %r11b, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11B_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X38, 0X9A # cmpb %r11b, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11B_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X38, 0X9F # cmpb %r11b, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11B_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X38, 0X9E # cmpb %r11b, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11B_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X38, 0X9D # cmpb %r11b, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11B_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X38, 0X9C, 0X24 # cmpb %r11b, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define CMP_R12B_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X38, 0XA0 # cmpb %r12b, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12B_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X38, 0XA3 # cmpb %r12b, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12B_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X38, 0XA1 # cmpb %r12b, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12B_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X38, 0XA2 # cmpb %r12b, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12B_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X38, 0XA7 # cmpb %r12b, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12B_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X38, 0XA6 # cmpb %r12b, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12B_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X38, 0XA5 # cmpb %r12b, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12B_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X38, 0XA4, 0X24 # cmpb %r12b, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12B_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X38, 0XA0 # cmpb %r12b, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12B_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X38, 0XA1 # cmpb %r12b, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12B_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X38, 0XA2 # cmpb %r12b, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12B_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X38, 0XA3 # cmpb %r12b, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12B_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X38, 0XA4, 0X24 # cmpb %r12b, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12B_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X38, 0XA5 # cmpb %r12b, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12B_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X38, 0XA6 # cmpb %r12b, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12B_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X38, 0XA7 # cmpb %r12b, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12B_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X38, 0XA0 # cmpb %r12b, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12B_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X38, 0XA3 # cmpb %r12b, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12B_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X38, 0XA1 # cmpb %r12b, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12B_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X38, 0XA2 # cmpb %r12b, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12B_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X38, 0XA7 # cmpb %r12b, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12B_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X38, 0XA6 # cmpb %r12b, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12B_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X38, 0XA5 # cmpb %r12b, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12B_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X38, 0XA4, 0X24 # cmpb %r12b, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define CMP_R13B_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X38, 0XA8 # cmpb %r13b, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13B_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X38, 0XAB # cmpb %r13b, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13B_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X38, 0XA9 # cmpb %r13b, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13B_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X38, 0XAA # cmpb %r13b, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13B_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X38, 0XAF # cmpb %r13b, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13B_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X38, 0XAE # cmpb %r13b, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13B_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X38, 0XAD # cmpb %r13b, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13B_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X38, 0XAC, 0X24 # cmpb %r13b, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13B_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X38, 0XA8 # cmpb %r13b, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13B_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X38, 0XA9 # cmpb %r13b, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13B_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X38, 0XAA # cmpb %r13b, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13B_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X38, 0XAB # cmpb %r13b, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13B_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X38, 0XAC, 0X24 # cmpb %r13b, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13B_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X38, 0XAD # cmpb %r13b, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13B_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X38, 0XAE # cmpb %r13b, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13B_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X38, 0XAF # cmpb %r13b, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13B_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X38, 0XA8 # cmpb %r13b, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13B_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X38, 0XAB # cmpb %r13b, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13B_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X38, 0XA9 # cmpb %r13b, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13B_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X38, 0XAA # cmpb %r13b, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13B_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X38, 0XAF # cmpb %r13b, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13B_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X38, 0XAE # cmpb %r13b, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13B_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X38, 0XAD # cmpb %r13b, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13B_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X38, 0XAC, 0X24 # cmpb %r13b, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define CMP_R14B_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X38, 0XB0 # cmpb %r14b, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14B_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X38, 0XB3 # cmpb %r14b, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14B_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X38, 0XB1 # cmpb %r14b, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14B_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X38, 0XB2 # cmpb %r14b, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14B_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X38, 0XB7 # cmpb %r14b, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14B_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X38, 0XB6 # cmpb %r14b, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14B_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X38, 0XB5 # cmpb %r14b, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14B_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X38, 0XB4, 0X24 # cmpb %r14b, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14B_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X38, 0XB0 # cmpb %r14b, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14B_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X38, 0XB1 # cmpb %r14b, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14B_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X38, 0XB2 # cmpb %r14b, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14B_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X38, 0XB3 # cmpb %r14b, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14B_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X38, 0XB4, 0X24 # cmpb %r14b, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14B_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X38, 0XB5 # cmpb %r14b, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14B_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X38, 0XB6 # cmpb %r14b, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14B_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X38, 0XB7 # cmpb %r14b, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14B_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X38, 0XB0 # cmpb %r14b, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14B_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X38, 0XB3 # cmpb %r14b, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14B_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X38, 0XB1 # cmpb %r14b, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14B_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X38, 0XB2 # cmpb %r14b, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14B_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X38, 0XB7 # cmpb %r14b, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14B_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X38, 0XB6 # cmpb %r14b, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14B_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X38, 0XB5 # cmpb %r14b, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14B_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X38, 0XB4, 0X24 # cmpb %r14b, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define CMP_R15B_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X38, 0XB8 # cmpb %r15b, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15B_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X38, 0XBB # cmpb %r15b, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15B_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X38, 0XB9 # cmpb %r15b, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15B_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X38, 0XBA # cmpb %r15b, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15B_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X38, 0XBF # cmpb %r15b, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15B_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X38, 0XBE # cmpb %r15b, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15B_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X38, 0XBD # cmpb %r15b, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15B_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X38, 0XBC, 0X24 # cmpb %r15b, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15B_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X38, 0XB8 # cmpb %r15b, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15B_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X38, 0XB9 # cmpb %r15b, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15B_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X38, 0XBA # cmpb %r15b, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15B_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X38, 0XBB # cmpb %r15b, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15B_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X38, 0XBC, 0X24 # cmpb %r15b, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15B_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X38, 0XBD # cmpb %r15b, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15B_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X38, 0XBE # cmpb %r15b, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15B_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X38, 0XBF # cmpb %r15b, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15B_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X38, 0XB8 # cmpb %r15b, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15B_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X38, 0XBB # cmpb %r15b, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15B_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X38, 0XB9 # cmpb %r15b, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15B_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X38, 0XBA # cmpb %r15b, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15B_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X38, 0XBF # cmpb %r15b, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15B_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X38, 0XBE # cmpb %r15b, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15B_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X38, 0XBD # cmpb %r15b, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15B_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X38, 0XBC, 0X24 # cmpb %r15b, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#endif /* __SYSTEM_64_BIT__ */
/* ************************** [^] 8-BIT MEMORY [^] ************************** */

/* ************************* [v] 16-BIT MEMORY [v] ************************** */
#ifdef __SYSTEM_16_BIT__
#define CMP_AX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X3B, 0X06 # cmpw (" _(VALUE) "), %ax")\
	CMT_ASM(".short " _(VALUE))
#define CMP_BX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X3B, 0X1E # cmpw (" _(VALUE) "), %bx")\
	CMT_ASM(".short " _(VALUE))
#define CMP_CX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X3B, 0X0E # cmpw (" _(VALUE) "), %cx")\
	CMT_ASM(".short " _(VALUE))
#define CMP_DX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X3B, 0X16 # cmpw (" _(VALUE) "), %dx")\
	CMT_ASM(".short " _(VALUE))
#define CMP_DI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X3B, 0X3E # cmpw (" _(VALUE) "), %di")\
	CMT_ASM(".short " _(VALUE))
#define CMP_SI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X3B, 0X36 # cmpw (" _(VALUE) "), %si")\
	CMT_ASM(".short " _(VALUE))
#define CMP_BP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X3B, 0X2E # cmpw (" _(VALUE) "), %bp")\
	CMT_ASM(".short " _(VALUE))
#define CMP_SP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X3B, 0X26 # cmpw (" _(VALUE) "), %sp")\
	CMT_ASM(".short " _(VALUE))

#define CMP_AX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X39, 0X06 # cmpw %ax, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define CMP_BX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X39, 0X1E # cmpw %bx, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define CMP_CX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X39, 0X0E # cmpw %cx, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define CMP_DX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X39, 0X16 # cmpw %dx, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define CMP_DI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X39, 0X3E # cmpw %di, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define CMP_SI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X39, 0X36 # cmpw %si, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define CMP_BP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X39, 0X2E # cmpw %bp, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define CMP_SP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X39, 0X26 # cmpw %sp, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))

#define CMP_AX_FROM_PTR_BX CMT_ASM(".byte 0X3B, 0X07 # cmpw (%bx), %ax")
#define CMP_AX_FROM_PTR_BP CMT_ASM(".byte 0X3B, 0X46, 0X00 # cmpw (%bp), %ax")
#define CMP_AX_FROM_PTR_SI CMT_ASM(".byte 0X3B, 0X04 # cmpw (%si), %ax")
#define CMP_AX_FROM_PTR_DI CMT_ASM(".byte 0X3B, 0X05 # cmpw (%di), %ax")

#define CMP_BX_FROM_PTR_BX CMT_ASM(".byte 0X3B, 0X1F # cmpw (%bx), %bx")
#define CMP_BX_FROM_PTR_BP CMT_ASM(".byte 0X3B, 0X5E, 0X00 # cmpw (%bp), %bx")
#define CMP_BX_FROM_PTR_SI CMT_ASM(".byte 0X3B, 0X1C # cmpw (%si), %bx")
#define CMP_BX_FROM_PTR_DI CMT_ASM(".byte 0X3B, 0X1D # cmpw (%di), %bx")

#define CMP_CX_FROM_PTR_BX CMT_ASM(".byte 0X3B, 0X0F # cmpw (%bx), %cx")
#define CMP_CX_FROM_PTR_BP CMT_ASM(".byte 0X3B, 0X4E, 0X00 # cmpw (%bp), %cx")
#define CMP_CX_FROM_PTR_SI CMT_ASM(".byte 0X3B, 0X0C # cmpw (%si), %cx")
#define CMP_CX_FROM_PTR_DI CMT_ASM(".byte 0X3B, 0X0D # cmpw (%di), %cx")

#define CMP_DX_FROM_PTR_BX CMT_ASM(".byte 0X3B, 0X17 # cmpw (%bx), %dx")
#define CMP_DX_FROM_PTR_BP CMT_ASM(".byte 0X3B, 0X56, 0X00 # cmpw (%bp), %dx")
#define CMP_DX_FROM_PTR_SI CMT_ASM(".byte 0X3B, 0X14 # cmpw (%si), %dx")
#define CMP_DX_FROM_PTR_DI CMT_ASM(".byte 0X3B, 0X15 # cmpw (%di), %dx")

#define CMP_DI_FROM_PTR_BX CMT_ASM(".byte 0X3B, 0X3F # cmpw (%bx), %di")
#define CMP_DI_FROM_PTR_BP CMT_ASM(".byte 0X3B, 0X7E, 0X00 # cmpw (%bp), %di")
#define CMP_DI_FROM_PTR_SI CMT_ASM(".byte 0X3B, 0X3C # cmpw (%si), %di")
#define CMP_DI_FROM_PTR_DI CMT_ASM(".byte 0X3B, 0X3D # cmpw (%di), %di")

#define CMP_SI_FROM_PTR_BX CMT_ASM(".byte 0X3B, 0X37 # cmpw (%bx), %si")
#define CMP_SI_FROM_PTR_BP CMT_ASM(".byte 0X3B, 0X76, 0X00 # cmpw (%bp), %si")
#define CMP_SI_FROM_PTR_SI CMT_ASM(".byte 0X3B, 0X34 # cmpw (%si), %si")
#define CMP_SI_FROM_PTR_DI CMT_ASM(".byte 0X3B, 0X35 # cmpw (%di), %si")

#define CMP_BP_FROM_PTR_BX CMT_ASM(".byte 0X3B, 0X2F # cmpw (%bx), %bp")
#define CMP_BP_FROM_PTR_BP CMT_ASM(".byte 0X3B, 0X6E, 0X00 # cmpw (%bp), %bp")
#define CMP_BP_FROM_PTR_SI CMT_ASM(".byte 0X3B, 0X2C # cmpw (%si), %bp")
#define CMP_BP_FROM_PTR_DI CMT_ASM(".byte 0X3B, 0X2D # cmpw (%di), %bp")

#define CMP_SP_FROM_PTR_BX CMT_ASM(".byte 0X3B, 0X27 # cmpw (%bx), %sp")
#define CMP_SP_FROM_PTR_BP CMT_ASM(".byte 0X3B, 0X66, 0X00 # cmpw (%bp), %sp")
#define CMP_SP_FROM_PTR_SI CMT_ASM(".byte 0X3B, 0X24 # cmpw (%si), %sp")
#define CMP_SP_FROM_PTR_DI CMT_ASM(".byte 0X3B, 0X25 # cmpw (%di), %sp")

#define CMP_AX_TO_PTR_BX CMT_ASM(".byte 0X39, 0X07 # cmpw %ax, (%bx)")
#define CMP_AX_TO_PTR_BP CMT_ASM(".byte 0X39, 0X46, 0X00 # cmpw %ax, (%bp)")
#define CMP_AX_TO_PTR_SI CMT_ASM(".byte 0X39, 0X04 # cmpw %ax, (%si)")
#define CMP_AX_TO_PTR_DI CMT_ASM(".byte 0X39, 0X05 # cmpw %ax, (%di)")

#define CMP_BX_TO_PTR_BX CMT_ASM(".byte 0X39, 0X1F # cmpw %bx, (%bx)")
#define CMP_BX_TO_PTR_BP CMT_ASM(".byte 0X39, 0X5E, 0X00 # cmpw %bx, (%bp)")
#define CMP_BX_TO_PTR_SI CMT_ASM(".byte 0X39, 0X1C # cmpw %bx, (%si)")
#define CMP_BX_TO_PTR_DI CMT_ASM(".byte 0X39, 0X1D # cmpw %bx, (%di)")

#define CMP_CX_TO_PTR_BX CMT_ASM(".byte 0X39, 0X0F # cmpw %cx, (%bx)")
#define CMP_CX_TO_PTR_BP CMT_ASM(".byte 0X39, 0X4E, 0X00 # cmpw %cx, (%bp)")
#define CMP_CX_TO_PTR_SI CMT_ASM(".byte 0X39, 0X0C # cmpw %cx, (%si)")
#define CMP_CX_TO_PTR_DI CMT_ASM(".byte 0X39, 0X0D # cmpw %cx, (%di)")

#define CMP_DX_TO_PTR_BX CMT_ASM(".byte 0X39, 0X17 # cmpw %dx, (%bx)")
#define CMP_DX_TO_PTR_BP CMT_ASM(".byte 0X39, 0X56, 0X00 # cmpw %dx, (%bp)")
#define CMP_DX_TO_PTR_SI CMT_ASM(".byte 0X39, 0X14 # cmpw %dx, (%si)")
#define CMP_DX_TO_PTR_DI CMT_ASM(".byte 0X39, 0X15 # cmpw %dx, (%di)")

#define CMP_DI_TO_PTR_BX CMT_ASM(".byte 0X39, 0X3F # cmpw %di, (%bx)")
#define CMP_DI_TO_PTR_BP CMT_ASM(".byte 0X39, 0X7E, 0X00 # cmpw %di, (%bp)")
#define CMP_DI_TO_PTR_SI CMT_ASM(".byte 0X39, 0X3C # cmpw %di, (%si)")
#define CMP_DI_TO_PTR_DI CMT_ASM(".byte 0X39, 0X3D # cmpw %di, (%di)")

#define CMP_SI_TO_PTR_BX CMT_ASM(".byte 0X39, 0X37 # cmpw %si, (%bx)")
#define CMP_SI_TO_PTR_BP CMT_ASM(".byte 0X39, 0X76, 0X00 # cmpw %si, (%bp)")
#define CMP_SI_TO_PTR_SI CMT_ASM(".byte 0X39, 0X34 # cmpw %si, (%si)")
#define CMP_SI_TO_PTR_DI CMT_ASM(".byte 0X39, 0X35 # cmpw %si, (%di)")

#define CMP_BP_TO_PTR_BX CMT_ASM(".byte 0X39, 0X2F # cmpw %bp, (%bx)")
#define CMP_BP_TO_PTR_BP CMT_ASM(".byte 0X39, 0X6E, 0X00 # cmpw %bp, (%bp)")
#define CMP_BP_TO_PTR_SI CMT_ASM(".byte 0X39, 0X2C # cmpw %bp, (%si)")
#define CMP_BP_TO_PTR_DI CMT_ASM(".byte 0X39, 0X2D # cmpw %bp, (%di)")

#define CMP_SP_TO_PTR_BX CMT_ASM(".byte 0X39, 0X27 # cmpw %sp, (%bx)")
#define CMP_SP_TO_PTR_BP CMT_ASM(".byte 0X39, 0X66, 0X00 # cmpw %sp, (%bp)")
#define CMP_SP_TO_PTR_SI CMT_ASM(".byte 0X39, 0X24 # cmpw %sp, (%si)")
#define CMP_SP_TO_PTR_DI CMT_ASM(".byte 0X39, 0X25 # cmpw %sp, (%di)")

#define CMP_AX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X3B, 0X87 # cmpw " _(VALUE) "(%bx), %ax")\
	CMT_ASM(".short " _(VALUE))
#define CMP_AX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X3B, 0X86 # cmpw " _(VALUE) "(%bp), %ax")\
	CMT_ASM(".short " _(VALUE))
#define CMP_AX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X3B, 0X84 # cmpw " _(VALUE) "(%si), %ax")\
	CMT_ASM(".short " _(VALUE))
#define CMP_AX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X3B, 0X85 # cmpw " _(VALUE) "(%di), %ax")\
	CMT_ASM(".short " _(VALUE))

#define CMP_BX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X3B, 0X9F # cmpw " _(VALUE) "(%bx), %bx")\
	CMT_ASM(".short " _(VALUE))
#define CMP_BX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X3B, 0X9E # cmpw " _(VALUE) "(%bp), %bx")\
	CMT_ASM(".short " _(VALUE))
#define CMP_BX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X3B, 0X9C # cmpw " _(VALUE) "(%si), %bx")\
	CMT_ASM(".short " _(VALUE))
#define CMP_BX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X3B, 0X9D # cmpw " _(VALUE) "(%di), %bx")\
	CMT_ASM(".short " _(VALUE))

#define CMP_CX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X3B, 0X8F # cmpw " _(VALUE) "(%bx), %cx")\
	CMT_ASM(".short " _(VALUE))
#define CMP_CX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X3B, 0X8E # cmpw " _(VALUE) "(%bp), %cx")\
	CMT_ASM(".short " _(VALUE))
#define CMP_CX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X3B, 0X8C # cmpw " _(VALUE) "(%si), %cx")\
	CMT_ASM(".short " _(VALUE))
#define CMP_CX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X3B, 0X8D # cmpw " _(VALUE) "(%di), %cx")\
	CMT_ASM(".short " _(VALUE))

#define CMP_DX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X3B, 0X97 # cmpw " _(VALUE) "(%bx), %dx")\
	CMT_ASM(".short " _(VALUE))
#define CMP_DX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X3B, 0X96 # cmpw " _(VALUE) "(%bp), %dx")\
	CMT_ASM(".short " _(VALUE))
#define CMP_DX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X3B, 0X94 # cmpw " _(VALUE) "(%si), %dx")\
	CMT_ASM(".short " _(VALUE))
#define CMP_DX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X3B, 0X95 # cmpw " _(VALUE) "(%di), %dx")\
	CMT_ASM(".short " _(VALUE))

#define CMP_DI_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X3B, 0XBF # cmpw " _(VALUE) "(%bx), %di")\
	CMT_ASM(".short " _(VALUE))
#define CMP_DI_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X3B, 0XBE # cmpw " _(VALUE) "(%bp), %di")\
	CMT_ASM(".short " _(VALUE))
#define CMP_DI_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X3B, 0XBC # cmpw " _(VALUE) "(%si), %di")\
	CMT_ASM(".short " _(VALUE))
#define CMP_DI_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X3B, 0XBD # cmpw " _(VALUE) "(%di), %di")\
	CMT_ASM(".short " _(VALUE))

#define CMP_SI_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X3B, 0XB7 # cmpw " _(VALUE) "(%bx), %si")\
	CMT_ASM(".short " _(VALUE))
#define CMP_SI_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X3B, 0XB6 # cmpw " _(VALUE) "(%bp), %si")\
	CMT_ASM(".short " _(VALUE))
#define CMP_SI_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X3B, 0XB4 # cmpw " _(VALUE) "(%si), %si")\
	CMT_ASM(".short " _(VALUE))
#define CMP_SI_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X3B, 0XB5 # cmpw " _(VALUE) "(%di), %si")\
	CMT_ASM(".short " _(VALUE))

#define CMP_BP_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X3B, 0XAF # cmpw " _(VALUE) "(%bx), %bp")\
	CMT_ASM(".short " _(VALUE))
#define CMP_BP_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X3B, 0XAE # cmpw " _(VALUE) "(%bp), %bp")\
	CMT_ASM(".short " _(VALUE))
#define CMP_BP_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X3B, 0XAC # cmpw " _(VALUE) "(%si), %bp")\
	CMT_ASM(".short " _(VALUE))
#define CMP_BP_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X3B, 0XAD # cmpw " _(VALUE) "(%di), %bp")\
	CMT_ASM(".short " _(VALUE))

#define CMP_SP_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X3B, 0XA7 # cmpw " _(VALUE) "(%bx), %sp")\
	CMT_ASM(".short " _(VALUE))
#define CMP_SP_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X3B, 0XA6 # cmpw " _(VALUE) "(%bp), %sp")\
	CMT_ASM(".short " _(VALUE))
#define CMP_SP_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X3B, 0XA4 # cmpw " _(VALUE) "(%si), %sp")\
	CMT_ASM(".short " _(VALUE))
#define CMP_SP_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X3B, 0XA5 # cmpw " _(VALUE) "(%di), %sp")\
	CMT_ASM(".short " _(VALUE))

#define CMP_AX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X39, 0X87 # cmpw %ax, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define CMP_AX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X39, 0X86 # cmpw %ax, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define CMP_AX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X39, 0X84 # cmpw %ax, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define CMP_AX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X39, 0X85 # cmpw %ax, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define CMP_BX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X39, 0X9F # cmpw %bx, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define CMP_BX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X39, 0X9E # cmpw %bx, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define CMP_BX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X39, 0X9C # cmpw %bx, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define CMP_BX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X39, 0X9D # cmpw %bx, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define CMP_CX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X39, 0X8F # cmpw %cx, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define CMP_CX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X39, 0X8E # cmpw %cx, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define CMP_CX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X39, 0X8C # cmpw %cx, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define CMP_CX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X39, 0X8D # cmpw %cx, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define CMP_DX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X39, 0X97 # cmpw %dx, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define CMP_DX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X39, 0X96 # cmpw %dx, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define CMP_DX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X39, 0X94 # cmpw %dx, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define CMP_DX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X39, 0X95 # cmpw %dx, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define CMP_DI_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X39, 0XBF # cmpw %di, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define CMP_DI_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X39, 0XBE # cmpw %di, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define CMP_DI_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X39, 0XBC # cmpw %di, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define CMP_DI_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X39, 0XBD # cmpw %di, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define CMP_SI_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X39, 0XB7 # cmpw %si, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define CMP_SI_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X39, 0XB6 # cmpw %si, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define CMP_SI_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X39, 0XB4 # cmpw %si, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define CMP_SI_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X39, 0XB5 # cmpw %si, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define CMP_BP_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X39, 0XAF # cmpw %bp, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define CMP_BP_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X39, 0XAE # cmpw %bp, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define CMP_BP_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X39, 0XAC # cmpw %bp, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define CMP_BP_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X39, 0XAD # cmpw %bp, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define CMP_SP_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X39, 0XA7 # cmpw %sp, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define CMP_SP_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X39, 0XA6 # cmpw %sp, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define CMP_SP_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X39, 0XA4 # cmpw %sp, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define CMP_SP_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X39, 0XA5 # cmpw %sp, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))
#endif /* __SYSTEM_16_BIT__ */

#ifdef __SYSTEM_32_BIT__
#define CMP_AX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0X05 # cmpw (" _(VALUE) "), %ax")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0X1D # cmpw (" _(VALUE) "), %bx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0X0D # cmpw (" _(VALUE) "), %cx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0X15 # cmpw (" _(VALUE) "), %dx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0X3D # cmpw (" _(VALUE) "), %di")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0X35 # cmpw (" _(VALUE) "), %si")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0X2D # cmpw (" _(VALUE) "), %bp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0X25 # cmpw (" _(VALUE) "), %sp")\
	CMT_ASM(".long " _(VALUE))

#define CMP_AX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0X05 # cmpw %ax, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0X1D # cmpw %bx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0X0D # cmpw %cx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0X15 # cmpw %dx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0X3D # cmpw %di, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0X35 # cmpw %si, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0X2D # cmpw %bp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0X25 # cmpw %sp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))

#define CMP_AX_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X3B, 0X00 # cmpw (%eax), %ax")
#define CMP_AX_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X3B, 0X03 # cmpw (%ebx), %ax")
#define CMP_AX_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X3B, 0X01 # cmpw (%ecx), %ax")
#define CMP_AX_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X3B, 0X02 # cmpw (%edx), %ax")
#define CMP_AX_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X3B, 0X07 # cmpw (%edi), %ax")
#define CMP_AX_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X3B, 0X06 # cmpw (%esi), %ax")
#define CMP_AX_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X3B, 0X45, 0X00 # cmpw (%ebp), %ax")
#define CMP_AX_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X3B, 0X04, 0X24 # cmpw (%esp), %ax")
#define CMP_AX_FROM_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X07 # cmpw (%bx), %ax")
#define CMP_AX_FROM_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X46, 0X00 # cmpw (%bp), %ax")
#define CMP_AX_FROM_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X04 # cmpw (%si), %ax")
#define CMP_AX_FROM_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X05 # cmpw (%di), %ax")

#define CMP_BX_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X3B, 0X18 # cmpw (%eax), %bx")
#define CMP_BX_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X3B, 0X1B # cmpw (%ebx), %bx")
#define CMP_BX_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X3B, 0X19 # cmpw (%ecx), %bx")
#define CMP_BX_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X3B, 0X1A # cmpw (%edx), %bx")
#define CMP_BX_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X3B, 0X1F # cmpw (%edi), %bx")
#define CMP_BX_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X3B, 0X1E # cmpw (%esi), %bx")
#define CMP_BX_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X3B, 0X5D, 0X00 # cmpw (%ebp), %bx")
#define CMP_BX_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X3B, 0X1C, 0X24 # cmpw (%esp), %bx")
#define CMP_BX_FROM_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X1F # cmpw (%bx), %bx")
#define CMP_BX_FROM_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X5E, 0X00 # cmpw (%bp), %bx")
#define CMP_BX_FROM_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X1C # cmpw (%si), %bx")
#define CMP_BX_FROM_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X1D # cmpw (%di), %bx")

#define CMP_CX_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X3B, 0X08 # cmpw (%eax), %cx")
#define CMP_CX_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X3B, 0X0B # cmpw (%ebx), %cx")
#define CMP_CX_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X3B, 0X09 # cmpw (%ecx), %cx")
#define CMP_CX_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X3B, 0X0A # cmpw (%edx), %cx")
#define CMP_CX_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X3B, 0X0F # cmpw (%edi), %cx")
#define CMP_CX_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X3B, 0X0E # cmpw (%esi), %cx")
#define CMP_CX_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X3B, 0X4D, 0X00 # cmpw (%ebp), %cx")
#define CMP_CX_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X3B, 0X0C, 0X24 # cmpw (%esp), %cx")
#define CMP_CX_FROM_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X0F # cmpw (%bx), %cx")
#define CMP_CX_FROM_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X4E, 0X00 # cmpw (%bp), %cx")
#define CMP_CX_FROM_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X0C # cmpw (%si), %cx")
#define CMP_CX_FROM_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X0D # cmpw (%di), %cx")

#define CMP_DX_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X3B, 0X10 # cmpw (%eax), %dx")
#define CMP_DX_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X3B, 0X13 # cmpw (%ebx), %dx")
#define CMP_DX_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X3B, 0X11 # cmpw (%ecx), %dx")
#define CMP_DX_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X3B, 0X12 # cmpw (%edx), %dx")
#define CMP_DX_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X3B, 0X17 # cmpw (%edi), %dx")
#define CMP_DX_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X3B, 0X16 # cmpw (%esi), %dx")
#define CMP_DX_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X3B, 0X55, 0X00 # cmpw (%ebp), %dx")
#define CMP_DX_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X3B, 0X14, 0X24 # cmpw (%esp), %dx")
#define CMP_DX_FROM_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X17 # cmpw (%bx), %dx")
#define CMP_DX_FROM_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X56, 0X00 # cmpw (%bp), %dx")
#define CMP_DX_FROM_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X14 # cmpw (%si), %dx")
#define CMP_DX_FROM_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X15 # cmpw (%di), %dx")

#define CMP_DI_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X3B, 0X38 # cmpw (%eax), %di")
#define CMP_DI_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X3B, 0X3B # cmpw (%ebx), %di")
#define CMP_DI_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X3B, 0X39 # cmpw (%ecx), %di")
#define CMP_DI_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X3B, 0X3A # cmpw (%edx), %di")
#define CMP_DI_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X3B, 0X3F # cmpw (%edi), %di")
#define CMP_DI_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X3B, 0X3E # cmpw (%esi), %di")
#define CMP_DI_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X3B, 0X7D, 0X00 # cmpw (%ebp), %di")
#define CMP_DI_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X3B, 0X3C, 0X24 # cmpw (%esp), %di")
#define CMP_DI_FROM_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X3F # cmpw (%bx), %di")
#define CMP_DI_FROM_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X7E, 0X00 # cmpw (%bp), %di")
#define CMP_DI_FROM_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X3C # cmpw (%si), %di")
#define CMP_DI_FROM_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X3D # cmpw (%di), %di")

#define CMP_SI_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X3B, 0X30 # cmpw (%eax), %si")
#define CMP_SI_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X3B, 0X33 # cmpw (%ebx), %si")
#define CMP_SI_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X3B, 0X31 # cmpw (%ecx), %si")
#define CMP_SI_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X3B, 0X32 # cmpw (%edx), %si")
#define CMP_SI_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X3B, 0X37 # cmpw (%edi), %si")
#define CMP_SI_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X3B, 0X36 # cmpw (%esi), %si")
#define CMP_SI_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X3B, 0X75, 0X00 # cmpw (%ebp), %si")
#define CMP_SI_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X3B, 0X34, 0X24 # cmpw (%esp), %si")
#define CMP_SI_FROM_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X37 # cmpw (%bx), %si")
#define CMP_SI_FROM_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X76, 0X00 # cmpw (%bp), %si")
#define CMP_SI_FROM_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X34 # cmpw (%si), %si")
#define CMP_SI_FROM_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X35 # cmpw (%di), %si")

#define CMP_BP_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X3B, 0X28 # cmpw (%eax), %bp")
#define CMP_BP_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X3B, 0X2B # cmpw (%ebx), %bp")
#define CMP_BP_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X3B, 0X29 # cmpw (%ecx), %bp")
#define CMP_BP_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X3B, 0X2A # cmpw (%edx), %bp")
#define CMP_BP_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X3B, 0X2F # cmpw (%edi), %bp")
#define CMP_BP_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X3B, 0X2E # cmpw (%esi), %bp")
#define CMP_BP_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X3B, 0X6D, 0X00 # cmpw (%ebp), %bp")
#define CMP_BP_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X3B, 0X2C, 0X24 # cmpw (%esp), %bp")
#define CMP_BP_FROM_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X2F # cmpw (%bx), %bp")
#define CMP_BP_FROM_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X6E, 0X00 # cmpw (%bp), %bp")
#define CMP_BP_FROM_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X2C # cmpw (%si), %bp")
#define CMP_BP_FROM_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X2D # cmpw (%di), %bp")

#define CMP_SP_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X3B, 0X20 # cmpw (%eax), %sp")
#define CMP_SP_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X3B, 0X23 # cmpw (%ebx), %sp")
#define CMP_SP_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X3B, 0X21 # cmpw (%ecx), %sp")
#define CMP_SP_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X3B, 0X22 # cmpw (%edx), %sp")
#define CMP_SP_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X3B, 0X27 # cmpw (%edi), %sp")
#define CMP_SP_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X3B, 0X26 # cmpw (%esi), %sp")
#define CMP_SP_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X3B, 0X65, 0X00 # cmpw (%ebp), %sp")
#define CMP_SP_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X3B, 0X24, 0X24 # cmpw (%esp), %sp")
#define CMP_SP_FROM_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X27 # cmpw (%bx), %sp")
#define CMP_SP_FROM_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X66, 0X00 # cmpw (%bp), %sp")
#define CMP_SP_FROM_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X24 # cmpw (%si), %sp")
#define CMP_SP_FROM_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X25 # cmpw (%di), %sp")

#define CMP_AX_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X39, 0X00 # cmpw %ax, (%eax)")
#define CMP_AX_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X39, 0X03 # cmpw %ax, (%ebx)")
#define CMP_AX_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X39, 0X01 # cmpw %ax, (%ecx)")
#define CMP_AX_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X39, 0X02 # cmpw %ax, (%edx)")
#define CMP_AX_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X39, 0X07 # cmpw %ax, (%edi)")
#define CMP_AX_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X39, 0X06 # cmpw %ax, (%esi)")
#define CMP_AX_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X39, 0X45, 0X00 # cmpw %ax, (%ebp)")
#define CMP_AX_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X39, 0X04, 0X24 # cmpw %ax, (%esp)")
#define CMP_AX_TO_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X39, 0X07 # cmpw %ax, (%bx)")
#define CMP_AX_TO_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X39, 0X46, 0X00 # cmpw %ax, (%bp)")
#define CMP_AX_TO_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X39, 0X04 # cmpw %ax, (%si)")
#define CMP_AX_TO_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X39, 0X05 # cmpw %ax, (%di)")

#define CMP_BX_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X39, 0X18 # cmpw %bx, (%eax)")
#define CMP_BX_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X39, 0X1B # cmpw %bx, (%ebx)")
#define CMP_BX_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X39, 0X19 # cmpw %bx, (%ecx)")
#define CMP_BX_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X39, 0X1A # cmpw %bx, (%edx)")
#define CMP_BX_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X39, 0X1F # cmpw %bx, (%edi)")
#define CMP_BX_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X39, 0X1E # cmpw %bx, (%esi)")
#define CMP_BX_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X39, 0X5D, 0X00 # cmpw %bx, (%ebp)")
#define CMP_BX_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X39, 0X1C, 0X24 # cmpw %bx, (%esp)")
#define CMP_BX_TO_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X39, 0X1F # cmpw %bx, (%bx)")
#define CMP_BX_TO_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X39, 0X5E, 0X00 # cmpw %bx, (%bp)")
#define CMP_BX_TO_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X39, 0X1C # cmpw %bx, (%si)")
#define CMP_BX_TO_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X39, 0X1D # cmpw %bx, (%di)")

#define CMP_CX_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X39, 0X08 # cmpw %cx, (%eax)")
#define CMP_CX_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X39, 0X0B # cmpw %cx, (%ebx)")
#define CMP_CX_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X39, 0X09 # cmpw %cx, (%ecx)")
#define CMP_CX_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X39, 0X0A # cmpw %cx, (%edx)")
#define CMP_CX_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X39, 0X0F # cmpw %cx, (%edi)")
#define CMP_CX_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X39, 0X0E # cmpw %cx, (%esi)")
#define CMP_CX_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X39, 0X4D, 0X00 # cmpw %cx, (%ebp)")
#define CMP_CX_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X39, 0X0C, 0X24 # cmpw %cx, (%esp)")
#define CMP_CX_TO_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X39, 0X0F # cmpw %cx, (%bx)")
#define CMP_CX_TO_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X39, 0X4E, 0X00 # cmpw %cx, (%bp)")
#define CMP_CX_TO_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X39, 0X0C # cmpw %cx, (%si)")
#define CMP_CX_TO_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X39, 0X0D # cmpw %cx, (%di)")

#define CMP_DX_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X39, 0X10 # cmpw %dx, (%eax)")
#define CMP_DX_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X39, 0X13 # cmpw %dx, (%ebx)")
#define CMP_DX_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X39, 0X11 # cmpw %dx, (%ecx)")
#define CMP_DX_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X39, 0X12 # cmpw %dx, (%edx)")
#define CMP_DX_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X39, 0X17 # cmpw %dx, (%edi)")
#define CMP_DX_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X39, 0X16 # cmpw %dx, (%esi)")
#define CMP_DX_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X39, 0X55, 0X00 # cmpw %dx, (%ebp)")
#define CMP_DX_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X39, 0X14, 0X24 # cmpw %dx, (%esp)")
#define CMP_DX_TO_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X39, 0X17 # cmpw %dx, (%bx)")
#define CMP_DX_TO_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X39, 0X56, 0X00 # cmpw %dx, (%bp)")
#define CMP_DX_TO_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X39, 0X14 # cmpw %dx, (%si)")
#define CMP_DX_TO_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X39, 0X15 # cmpw %dx, (%di)")

#define CMP_DI_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X39, 0X38 # cmpw %di, (%eax)")
#define CMP_DI_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X39, 0X3B # cmpw %di, (%ebx)")
#define CMP_DI_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X39, 0X39 # cmpw %di, (%ecx)")
#define CMP_DI_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X39, 0X3A # cmpw %di, (%edx)")
#define CMP_DI_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X39, 0X3F # cmpw %di, (%edi)")
#define CMP_DI_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X39, 0X3E # cmpw %di, (%esi)")
#define CMP_DI_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X39, 0X7D, 0X00 # cmpw %di, (%ebp)")
#define CMP_DI_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X39, 0X3C, 0X24 # cmpw %di, (%esp)")
#define CMP_DI_TO_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X39, 0X3F # cmpw %di, (%bx)")
#define CMP_DI_TO_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X39, 0X7E, 0X00 # cmpw %di, (%bp)")
#define CMP_DI_TO_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X39, 0X3C # cmpw %di, (%si)")
#define CMP_DI_TO_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X39, 0X3D # cmpw %di, (%di)")

#define CMP_SI_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X39, 0X30 # cmpw %si, (%eax)")
#define CMP_SI_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X39, 0X33 # cmpw %si, (%ebx)")
#define CMP_SI_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X39, 0X31 # cmpw %si, (%ecx)")
#define CMP_SI_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X39, 0X32 # cmpw %si, (%edx)")
#define CMP_SI_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X39, 0X37 # cmpw %si, (%edi)")
#define CMP_SI_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X39, 0X36 # cmpw %si, (%esi)")
#define CMP_SI_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X39, 0X75, 0X00 # cmpw %si, (%ebp)")
#define CMP_SI_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X39, 0X34, 0X24 # cmpw %si, (%esp)")
#define CMP_SI_TO_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X39, 0X37 # cmpw %si, (%bx)")
#define CMP_SI_TO_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X39, 0X76, 0X00 # cmpw %si, (%bp)")
#define CMP_SI_TO_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X39, 0X34 # cmpw %si, (%si)")
#define CMP_SI_TO_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X39, 0X35 # cmpw %si, (%di)")

#define CMP_BP_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X39, 0X28 # cmpw %bp, (%eax)")
#define CMP_BP_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X39, 0X2B # cmpw %bp, (%ebx)")
#define CMP_BP_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X39, 0X29 # cmpw %bp, (%ecx)")
#define CMP_BP_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X39, 0X2A # cmpw %bp, (%edx)")
#define CMP_BP_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X39, 0X2F # cmpw %bp, (%edi)")
#define CMP_BP_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X39, 0X2E # cmpw %bp, (%esi)")
#define CMP_BP_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X39, 0X6D, 0X00 # cmpw %bp, (%ebp)")
#define CMP_BP_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X39, 0X2C, 0X24 # cmpw %bp, (%esp)")
#define CMP_BP_TO_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X39, 0X2F # cmpw %bp, (%bx)")
#define CMP_BP_TO_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X39, 0X6E, 0X00 # cmpw %bp, (%bp)")
#define CMP_BP_TO_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X39, 0X2C # cmpw %bp, (%si)")
#define CMP_BP_TO_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X39, 0X2D # cmpw %bp, (%di)")

#define CMP_SP_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X39, 0X20 # cmpw %sp, (%eax)")
#define CMP_SP_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X39, 0X23 # cmpw %sp, (%ebx)")
#define CMP_SP_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X39, 0X21 # cmpw %sp, (%ecx)")
#define CMP_SP_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X39, 0X22 # cmpw %sp, (%edx)")
#define CMP_SP_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X39, 0X27 # cmpw %sp, (%edi)")
#define CMP_SP_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X39, 0X26 # cmpw %sp, (%esi)")
#define CMP_SP_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X39, 0X65, 0X00 # cmpw %sp, (%ebp)")
#define CMP_SP_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X39, 0X24, 0X24 # cmpw %sp, (%esp)")
#define CMP_SP_TO_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X39, 0X27 # cmpw %sp, (%bx)")
#define CMP_SP_TO_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X39, 0X66, 0X00 # cmpw %sp, (%bp)")
#define CMP_SP_TO_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X39, 0X24 # cmpw %sp, (%si)")
#define CMP_SP_TO_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X39, 0X25 # cmpw %sp, (%di)")

#define CMP_AX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0X80 # cmpw " _(VALUE) "(%eax), %ax")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0X83 # cmpw " _(VALUE) "(%ebx), %ax")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0X81 # cmpw " _(VALUE) "(%ecx), %ax")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0X82 # cmpw " _(VALUE) "(%edx), %ax")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0X87 # cmpw " _(VALUE) "(%edi), %ax")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0X86 # cmpw " _(VALUE) "(%esi), %ax")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0X85 # cmpw " _(VALUE) "(%ebp), %ax")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0X84, 0X24 # cmpw " _(VALUE) "(%esp), %ax")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X87 # cmpw " _(VALUE) "(%bx), %ax")\
	CMT_ASM(".short " _(VALUE))
#define CMP_AX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X86 # cmpw " _(VALUE) "(%bp), %ax")\
	CMT_ASM(".short " _(VALUE))
#define CMP_AX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X84 # cmpw " _(VALUE) "(%si), %ax")\
	CMT_ASM(".short " _(VALUE))
#define CMP_AX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X85 # cmpw " _(VALUE) "(%di), %ax")\
	CMT_ASM(".short " _(VALUE))

#define CMP_BX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0X98 # cmpw " _(VALUE) "(%eax), %bx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0X9B # cmpw " _(VALUE) "(%ebx), %bx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0X99 # cmpw " _(VALUE) "(%ecx), %bx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0X9A # cmpw " _(VALUE) "(%edx), %bx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0X9F # cmpw " _(VALUE) "(%edi), %bx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0X9E # cmpw " _(VALUE) "(%esi), %bx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0X9D # cmpw " _(VALUE) "(%ebp), %bx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0X9C, 0X24 # cmpw " _(VALUE) "(%esp), %bx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X9F # cmpw " _(VALUE) "(%bx), %bx")\
	CMT_ASM(".short " _(VALUE))
#define CMP_BX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X9E # cmpw " _(VALUE) "(%bp), %bx")\
	CMT_ASM(".short " _(VALUE))
#define CMP_BX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X9C # cmpw " _(VALUE) "(%si), %bx")\
	CMT_ASM(".short " _(VALUE))
#define CMP_BX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X9D # cmpw " _(VALUE) "(%di), %bx")\
	CMT_ASM(".short " _(VALUE))

#define CMP_CX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0X88 # cmpw " _(VALUE) "(%eax), %cx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0X8B # cmpw " _(VALUE) "(%ebx), %cx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0X89 # cmpw " _(VALUE) "(%ecx), %cx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0X8A # cmpw " _(VALUE) "(%edx), %cx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0X8F # cmpw " _(VALUE) "(%edi), %cx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0X8E # cmpw " _(VALUE) "(%esi), %cx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0X8D # cmpw " _(VALUE) "(%ebp), %cx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0X8C, 0X24 # cmpw " _(VALUE) "(%esp), %cx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X8F # cmpw " _(VALUE) "(%bx), %cx")\
	CMT_ASM(".short " _(VALUE))
#define CMP_CX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X8E # cmpw " _(VALUE) "(%bp), %cx")\
	CMT_ASM(".short " _(VALUE))
#define CMP_CX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X8C # cmpw " _(VALUE) "(%si), %cx")\
	CMT_ASM(".short " _(VALUE))
#define CMP_CX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X8D # cmpw " _(VALUE) "(%di), %cx")\
	CMT_ASM(".short " _(VALUE))

#define CMP_DX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0X90 # cmpw " _(VALUE) "(%eax), %dx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0X93 # cmpw " _(VALUE) "(%ebx), %dx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0X91 # cmpw " _(VALUE) "(%ecx), %dx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0X92 # cmpw " _(VALUE) "(%edx), %dx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0X97 # cmpw " _(VALUE) "(%edi), %dx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0X96 # cmpw " _(VALUE) "(%esi), %dx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0X95 # cmpw " _(VALUE) "(%ebp), %dx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0X94, 0X24 # cmpw " _(VALUE) "(%esp), %dx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X97 # cmpw " _(VALUE) "(%bx), %dx")\
	CMT_ASM(".short " _(VALUE))
#define CMP_DX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X96 # cmpw " _(VALUE) "(%bp), %dx")\
	CMT_ASM(".short " _(VALUE))
#define CMP_DX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X94 # cmpw " _(VALUE) "(%si), %dx")\
	CMT_ASM(".short " _(VALUE))
#define CMP_DX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X95 # cmpw " _(VALUE) "(%di), %dx")\
	CMT_ASM(".short " _(VALUE))

#define CMP_DI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0XB8 # cmpw " _(VALUE) "(%eax), %di")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0XBB # cmpw " _(VALUE) "(%ebx), %di")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0XB9 # cmpw " _(VALUE) "(%ecx), %di")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0XBA # cmpw " _(VALUE) "(%edx), %di")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0XBF # cmpw " _(VALUE) "(%edi), %di")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0XBE # cmpw " _(VALUE) "(%esi), %di")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0XBD # cmpw " _(VALUE) "(%ebp), %di")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0XBC, 0X24 # cmpw " _(VALUE) "(%esp), %di")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DI_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X3B, 0XBF # cmpw " _(VALUE) "(%bx), %di")\
	CMT_ASM(".short " _(VALUE))
#define CMP_DI_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X3B, 0XBE # cmpw " _(VALUE) "(%bp), %di")\
	CMT_ASM(".short " _(VALUE))
#define CMP_DI_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X3B, 0XBC # cmpw " _(VALUE) "(%si), %di")\
	CMT_ASM(".short " _(VALUE))
#define CMP_DI_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X3B, 0XBD # cmpw " _(VALUE) "(%di), %di")\
	CMT_ASM(".short " _(VALUE))

#define CMP_SI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0XB0 # cmpw " _(VALUE) "(%eax), %si")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0XB3 # cmpw " _(VALUE) "(%ebx), %si")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0XB1 # cmpw " _(VALUE) "(%ecx), %si")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0XB2 # cmpw " _(VALUE) "(%edx), %si")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0XB7 # cmpw " _(VALUE) "(%edi), %si")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0XB6 # cmpw " _(VALUE) "(%esi), %si")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0XB5 # cmpw " _(VALUE) "(%ebp), %si")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0XB4, 0X24 # cmpw " _(VALUE) "(%esp), %si")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SI_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X3B, 0XB7 # cmpw " _(VALUE) "(%bx), %si")\
	CMT_ASM(".short " _(VALUE))
#define CMP_SI_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X3B, 0XB6 # cmpw " _(VALUE) "(%bp), %si")\
	CMT_ASM(".short " _(VALUE))
#define CMP_SI_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X3B, 0XB4 # cmpw " _(VALUE) "(%si), %si")\
	CMT_ASM(".short " _(VALUE))
#define CMP_SI_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X3B, 0XB5 # cmpw " _(VALUE) "(%di), %si")\
	CMT_ASM(".short " _(VALUE))

#define CMP_BP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0XA8 # cmpw " _(VALUE) "(%eax), %bp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0XAB # cmpw " _(VALUE) "(%ebx), %bp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0XA9 # cmpw " _(VALUE) "(%ecx), %bp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0XAA # cmpw " _(VALUE) "(%edx), %bp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0XAF # cmpw " _(VALUE) "(%edi), %bp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0XAE # cmpw " _(VALUE) "(%esi), %bp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0XAD # cmpw " _(VALUE) "(%ebp), %bp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0XAC, 0X24 # cmpw " _(VALUE) "(%esp), %bp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BP_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X3B, 0XAF # cmpw " _(VALUE) "(%bx), %bp")\
	CMT_ASM(".short " _(VALUE))
#define CMP_BP_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X3B, 0XAE # cmpw " _(VALUE) "(%bp), %bp")\
	CMT_ASM(".short " _(VALUE))
#define CMP_BP_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X3B, 0XAC # cmpw " _(VALUE) "(%si), %bp")\
	CMT_ASM(".short " _(VALUE))
#define CMP_BP_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X3B, 0XAD # cmpw " _(VALUE) "(%di), %bp")\
	CMT_ASM(".short " _(VALUE))

#define CMP_SP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0XA0 # cmpw " _(VALUE) "(%eax), %sp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0XA3 # cmpw " _(VALUE) "(%ebx), %sp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0XA1 # cmpw " _(VALUE) "(%ecx), %sp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0XA2 # cmpw " _(VALUE) "(%edx), %sp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0XA7 # cmpw " _(VALUE) "(%edi), %sp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0XA6 # cmpw " _(VALUE) "(%esi), %sp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0XA5 # cmpw " _(VALUE) "(%ebp), %sp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0XA4, 0X24 # cmpw " _(VALUE) "(%esp), %sp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SP_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X3B, 0XA7 # cmpw " _(VALUE) "(%bx), %sp")\
	CMT_ASM(".short " _(VALUE))
#define CMP_SP_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X3B, 0XA6 # cmpw " _(VALUE) "(%bp), %sp")\
	CMT_ASM(".short " _(VALUE))
#define CMP_SP_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X3B, 0XA4 # cmpw " _(VALUE) "(%si), %sp")\
	CMT_ASM(".short " _(VALUE))
#define CMP_SP_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X3B, 0XA5 # cmpw " _(VALUE) "(%di), %sp")\
	CMT_ASM(".short " _(VALUE))

#define CMP_AX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0X80 # cmpw %ax, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0X83 # cmpw %ax, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0X81 # cmpw %ax, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0X82 # cmpw %ax, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0X87 # cmpw %ax, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0X86 # cmpw %ax, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0X85 # cmpw %ax, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0X84, 0X24 # cmpw %ax, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X39, 0X87 # cmpw %ax, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define CMP_AX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X39, 0X86 # cmpw %ax, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define CMP_AX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X39, 0X84 # cmpw %ax, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define CMP_AX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X39, 0X85 # cmpw %ax, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define CMP_BX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0X98 # cmpw %bx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0X9B # cmpw %bx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0X99 # cmpw %bx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0X9A # cmpw %bx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0X9F # cmpw %bx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0X9E # cmpw %bx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0X9D # cmpw %bx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0X9C, 0X24 # cmpw %bx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X39, 0X9F # cmpw %bx, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define CMP_BX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X39, 0X9E # cmpw %bx, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define CMP_BX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X39, 0X9C # cmpw %bx, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define CMP_BX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X39, 0X9D # cmpw %bx, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define CMP_CX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0X88 # cmpw %cx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0X8B # cmpw %cx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0X89 # cmpw %cx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0X8A # cmpw %cx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0X8F # cmpw %cx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0X8E # cmpw %cx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0X8D # cmpw %cx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0X8C, 0X24 # cmpw %cx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X39, 0X8F # cmpw %cx, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define CMP_CX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X39, 0X8E # cmpw %cx, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define CMP_CX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X39, 0X8C # cmpw %cx, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define CMP_CX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X39, 0X8D # cmpw %cx, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define CMP_DX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0X90 # cmpw %dx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0X93 # cmpw %dx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0X91 # cmpw %dx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0X92 # cmpw %dx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0X97 # cmpw %dx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0X96 # cmpw %dx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0X95 # cmpw %dx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0X94, 0X24 # cmpw %dx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X39, 0X97 # cmpw %dx, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define CMP_DX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X39, 0X96 # cmpw %dx, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define CMP_DX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X39, 0X94 # cmpw %dx, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define CMP_DX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X39, 0X95 # cmpw %dx, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define CMP_DI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0XB8 # cmpw %di, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0XBB # cmpw %di, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0XB9 # cmpw %di, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0XBA # cmpw %di, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0XBF # cmpw %di, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0XBE # cmpw %di, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0XBD # cmpw %di, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0XBC, 0X24 # cmpw %di, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DI_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X39, 0XBF # cmpw %di, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define CMP_DI_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X39, 0XBE # cmpw %di, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define CMP_DI_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X39, 0XBC # cmpw %di, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define CMP_DI_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X39, 0XBD # cmpw %di, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define CMP_SI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0XB0 # cmpw %si, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0XB3 # cmpw %si, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0XB1 # cmpw %si, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0XB2 # cmpw %si, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0XB7 # cmpw %si, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0XB6 # cmpw %si, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0XB5 # cmpw %si, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0XB4, 0X24 # cmpw %si, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SI_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X39, 0XB7 # cmpw %si, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define CMP_SI_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X39, 0XB6 # cmpw %si, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define CMP_SI_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X39, 0XB4 # cmpw %si, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define CMP_SI_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X39, 0XB5 # cmpw %si, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define CMP_BP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0XA8 # cmpw %bp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0XAB # cmpw %bp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0XA9 # cmpw %bp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0XAA # cmpw %bp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0XAF # cmpw %bp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0XAE # cmpw %bp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0XAD # cmpw %bp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0XAC, 0X24 # cmpw %bp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BP_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X39, 0XAF # cmpw %bp, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define CMP_BP_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X39, 0XAE # cmpw %bp, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define CMP_BP_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X39, 0XAC # cmpw %bp, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define CMP_BP_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X39, 0XAD # cmpw %bp, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define CMP_SP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0XA0 # cmpw %sp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0XA3 # cmpw %sp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0XA1 # cmpw %sp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0XA2 # cmpw %sp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0XA7 # cmpw %sp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0XA6 # cmpw %sp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0XA5 # cmpw %sp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0XA4, 0X24 # cmpw %sp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SP_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X39, 0XA7 # cmpw %sp, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define CMP_SP_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X39, 0XA6 # cmpw %sp, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define CMP_SP_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X39, 0XA4 # cmpw %sp, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define CMP_SP_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X39, 0XA5 # cmpw %sp, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define CMP_AX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0X04, 0X25 # cmpw (" _(VALUE) "), %ax")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0X1C, 0X25 # cmpw (" _(VALUE) "), %bx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0X0C, 0X25 # cmpw (" _(VALUE) "), %cx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0X14, 0X25 # cmpw (" _(VALUE) "), %dx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0X3C, 0X25 # cmpw (" _(VALUE) "), %di")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0X34, 0X25 # cmpw (" _(VALUE) "), %si")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0X2C, 0X25 # cmpw (" _(VALUE) "), %bp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0X24, 0X25 # cmpw (" _(VALUE) "), %sp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8W_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X3B, 0X04, 0X25 # cmpw (" _(VALUE) "), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9W_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X3B, 0X0C, 0X25 # cmpw (" _(VALUE) "), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10W_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X3B, 0X14, 0X25 # cmpw (" _(VALUE) "), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11W_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X3B, 0X1C, 0X25 # cmpw (" _(VALUE) "), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12W_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X3B, 0X24, 0X25 # cmpw (" _(VALUE) "), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13W_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X3B, 0X2C, 0X25 # cmpw (" _(VALUE) "), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14W_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X3B, 0X34, 0X25 # cmpw (" _(VALUE) "), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15W_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X3B, 0X3C, 0X25 # cmpw (" _(VALUE) "), %r15w")\
	CMT_ASM(".long " _(VALUE))

#define CMP_AX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0X04, 0X25 # cmpw %ax, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0X1C, 0X25 # cmpw %bx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0X0C, 0X25 # cmpw %cx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0X14, 0X25 # cmpw %dx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0X3C, 0X25 # cmpw %di, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0X34, 0X25 # cmpw %si, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0X2C, 0X25 # cmpw %bp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0X24, 0X25 # cmpw %sp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8W_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X39, 0X04, 0X25 # cmpw %r8w, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9W_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X39, 0X0C, 0X25 # cmpw %r9w, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10W_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X39, 0X14, 0X25 # cmpw %r10w, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11W_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X39, 0X1C, 0X25 # cmpw %r11w, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12W_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X39, 0X24, 0X25 # cmpw %r12w, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13W_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X39, 0X2C, 0X25 # cmpw %r13w, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14W_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X39, 0X34, 0X25 # cmpw %r14w, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15W_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X39, 0X3C, 0X25 # cmpw %r15w, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))

#define CMP_AX_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X3B, 0X00 # cmpw (%rax), %ax")
#define CMP_AX_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X3B, 0X03 # cmpw (%rbx), %ax")
#define CMP_AX_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X3B, 0X01 # cmpw (%rcx), %ax")
#define CMP_AX_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X3B, 0X02 # cmpw (%rdx), %ax")
#define CMP_AX_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X3B, 0X07 # cmpw (%rdi), %ax")
#define CMP_AX_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X3B, 0X06 # cmpw (%rsi), %ax")
#define CMP_AX_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X3B, 0X45, 0X00 # cmpw (%rbp), %ax")
#define CMP_AX_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X3B, 0X04, 0X24 # cmpw (%rsp), %ax")
#define CMP_AX_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X3B, 0X00 # cmpw (%r8), %ax")
#define CMP_AX_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X3B, 0X01 # cmpw (%r9), %ax")
#define CMP_AX_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X3B, 0X02 # cmpw (%r10), %ax")
#define CMP_AX_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X3B, 0X03 # cmpw (%r11), %ax")
#define CMP_AX_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X3B, 0X04, 0X24 # cmpw (%r12), %ax")
#define CMP_AX_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X3B, 0X45, 0X00 # cmpw (%r13), %ax")
#define CMP_AX_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X3B, 0X06 # cmpw (%r14), %ax")
#define CMP_AX_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X3B, 0X07 # cmpw (%r15), %ax")
#define CMP_AX_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X00 # cmpw (%eax), %ax")
#define CMP_AX_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X03 # cmpw (%ebx), %ax")
#define CMP_AX_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X01 # cmpw (%ecx), %ax")
#define CMP_AX_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X02 # cmpw (%edx), %ax")
#define CMP_AX_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X07 # cmpw (%edi), %ax")
#define CMP_AX_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X06 # cmpw (%esi), %ax")
#define CMP_AX_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X45, 0X00 # cmpw (%ebp), %ax")
#define CMP_AX_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X04, 0X24 # cmpw (%esp), %ax")

#define CMP_BX_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X3B, 0X18 # cmpw (%rax), %bx")
#define CMP_BX_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X3B, 0X1B # cmpw (%rbx), %bx")
#define CMP_BX_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X3B, 0X19 # cmpw (%rcx), %bx")
#define CMP_BX_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X3B, 0X1A # cmpw (%rdx), %bx")
#define CMP_BX_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X3B, 0X1F # cmpw (%rdi), %bx")
#define CMP_BX_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X3B, 0X1E # cmpw (%rsi), %bx")
#define CMP_BX_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X3B, 0X5D, 0X00 # cmpw (%rbp), %bx")
#define CMP_BX_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X3B, 0X1C, 0X24 # cmpw (%rsp), %bx")
#define CMP_BX_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X3B, 0X18 # cmpw (%r8), %bx")
#define CMP_BX_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X3B, 0X19 # cmpw (%r9), %bx")
#define CMP_BX_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X3B, 0X1A # cmpw (%r10), %bx")
#define CMP_BX_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X3B, 0X1B # cmpw (%r11), %bx")
#define CMP_BX_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X3B, 0X1C, 0X24 # cmpw (%r12), %bx")
#define CMP_BX_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X3B, 0X5D, 0X00 # cmpw (%r13), %bx")
#define CMP_BX_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X3B, 0X1E # cmpw (%r14), %bx")
#define CMP_BX_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X3B, 0X1F # cmpw (%r15), %bx")
#define CMP_BX_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X18 # cmpw (%eax), %bx")
#define CMP_BX_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X1B # cmpw (%ebx), %bx")
#define CMP_BX_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X19 # cmpw (%ecx), %bx")
#define CMP_BX_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X1A # cmpw (%edx), %bx")
#define CMP_BX_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X1F # cmpw (%edi), %bx")
#define CMP_BX_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X1E # cmpw (%esi), %bx")
#define CMP_BX_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X5D, 0X00 # cmpw (%ebp), %bx")
#define CMP_BX_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X1C, 0X24 # cmpw (%esp), %bx")

#define CMP_CX_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X3B, 0X08 # cmpw (%rax), %cx")
#define CMP_CX_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X3B, 0X0B # cmpw (%rbx), %cx")
#define CMP_CX_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X3B, 0X09 # cmpw (%rcx), %cx")
#define CMP_CX_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X3B, 0X0A # cmpw (%rdx), %cx")
#define CMP_CX_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X3B, 0X0F # cmpw (%rdi), %cx")
#define CMP_CX_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X3B, 0X0E # cmpw (%rsi), %cx")
#define CMP_CX_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X3B, 0X4D, 0X00 # cmpw (%rbp), %cx")
#define CMP_CX_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X3B, 0X0C, 0X24 # cmpw (%rsp), %cx")
#define CMP_CX_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X3B, 0X08 # cmpw (%r8), %cx")
#define CMP_CX_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X3B, 0X09 # cmpw (%r9), %cx")
#define CMP_CX_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X3B, 0X0A # cmpw (%r10), %cx")
#define CMP_CX_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X3B, 0X0B # cmpw (%r11), %cx")
#define CMP_CX_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X3B, 0X0C, 0X24 # cmpw (%r12), %cx")
#define CMP_CX_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X3B, 0X4D, 0X00 # cmpw (%r13), %cx")
#define CMP_CX_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X3B, 0X0E # cmpw (%r14), %cx")
#define CMP_CX_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X3B, 0X0F # cmpw (%r15), %cx")
#define CMP_CX_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X08 # cmpw (%eax), %cx")
#define CMP_CX_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X0B # cmpw (%ebx), %cx")
#define CMP_CX_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X09 # cmpw (%ecx), %cx")
#define CMP_CX_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X0A # cmpw (%edx), %cx")
#define CMP_CX_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X0F # cmpw (%edi), %cx")
#define CMP_CX_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X0E # cmpw (%esi), %cx")
#define CMP_CX_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X4D, 0X00 # cmpw (%ebp), %cx")
#define CMP_CX_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X0C, 0X24 # cmpw (%esp), %cx")

#define CMP_DX_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X3B, 0X10 # cmpw (%rax), %dx")
#define CMP_DX_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X3B, 0X13 # cmpw (%rbx), %dx")
#define CMP_DX_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X3B, 0X11 # cmpw (%rcx), %dx")
#define CMP_DX_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X3B, 0X12 # cmpw (%rdx), %dx")
#define CMP_DX_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X3B, 0X17 # cmpw (%rdi), %dx")
#define CMP_DX_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X3B, 0X16 # cmpw (%rsi), %dx")
#define CMP_DX_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X3B, 0X55, 0X00 # cmpw (%rbp), %dx")
#define CMP_DX_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X3B, 0X14, 0X24 # cmpw (%rsp), %dx")
#define CMP_DX_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X3B, 0X10 # cmpw (%r8), %dx")
#define CMP_DX_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X3B, 0X11 # cmpw (%r9), %dx")
#define CMP_DX_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X3B, 0X12 # cmpw (%r10), %dx")
#define CMP_DX_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X3B, 0X13 # cmpw (%r11), %dx")
#define CMP_DX_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X3B, 0X14, 0X24 # cmpw (%r12), %dx")
#define CMP_DX_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X3B, 0X55, 0X00 # cmpw (%r13), %dx")
#define CMP_DX_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X3B, 0X16 # cmpw (%r14), %dx")
#define CMP_DX_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X3B, 0X17 # cmpw (%r15), %dx")
#define CMP_DX_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X10 # cmpw (%eax), %dx")
#define CMP_DX_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X13 # cmpw (%ebx), %dx")
#define CMP_DX_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X11 # cmpw (%ecx), %dx")
#define CMP_DX_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X12 # cmpw (%edx), %dx")
#define CMP_DX_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X17 # cmpw (%edi), %dx")
#define CMP_DX_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X16 # cmpw (%esi), %dx")
#define CMP_DX_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X55, 0X00 # cmpw (%ebp), %dx")
#define CMP_DX_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X14, 0X24 # cmpw (%esp), %dx")

#define CMP_DI_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X3B, 0X38 # cmpw (%rax), %di")
#define CMP_DI_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X3B, 0X3B # cmpw (%rbx), %di")
#define CMP_DI_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X3B, 0X39 # cmpw (%rcx), %di")
#define CMP_DI_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X3B, 0X3A # cmpw (%rdx), %di")
#define CMP_DI_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X3B, 0X3F # cmpw (%rdi), %di")
#define CMP_DI_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X3B, 0X3E # cmpw (%rsi), %di")
#define CMP_DI_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X3B, 0X7D, 0X00 # cmpw (%rbp), %di")
#define CMP_DI_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X3B, 0X3C, 0X24 # cmpw (%rsp), %di")
#define CMP_DI_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X3B, 0X38 # cmpw (%r8), %di")
#define CMP_DI_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X3B, 0X39 # cmpw (%r9), %di")
#define CMP_DI_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X3B, 0X3A # cmpw (%r10), %di")
#define CMP_DI_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X3B, 0X3B # cmpw (%r11), %di")
#define CMP_DI_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X3B, 0X3C, 0X24 # cmpw (%r12), %di")
#define CMP_DI_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X3B, 0X7D, 0X00 # cmpw (%r13), %di")
#define CMP_DI_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X3B, 0X3E # cmpw (%r14), %di")
#define CMP_DI_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X3B, 0X3F # cmpw (%r15), %di")
#define CMP_DI_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X38 # cmpw (%eax), %di")
#define CMP_DI_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X3B # cmpw (%ebx), %di")
#define CMP_DI_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X39 # cmpw (%ecx), %di")
#define CMP_DI_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X3A # cmpw (%edx), %di")
#define CMP_DI_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X3F # cmpw (%edi), %di")
#define CMP_DI_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X3E # cmpw (%esi), %di")
#define CMP_DI_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X7D, 0X00 # cmpw (%ebp), %di")
#define CMP_DI_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X3C, 0X24 # cmpw (%esp), %di")

#define CMP_SI_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X3B, 0X30 # cmpw (%rax), %si")
#define CMP_SI_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X3B, 0X33 # cmpw (%rbx), %si")
#define CMP_SI_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X3B, 0X31 # cmpw (%rcx), %si")
#define CMP_SI_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X3B, 0X32 # cmpw (%rdx), %si")
#define CMP_SI_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X3B, 0X37 # cmpw (%rdi), %si")
#define CMP_SI_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X3B, 0X36 # cmpw (%rsi), %si")
#define CMP_SI_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X3B, 0X75, 0X00 # cmpw (%rbp), %si")
#define CMP_SI_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X3B, 0X34, 0X24 # cmpw (%rsp), %si")
#define CMP_SI_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X3B, 0X30 # cmpw (%r8), %si")
#define CMP_SI_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X3B, 0X31 # cmpw (%r9), %si")
#define CMP_SI_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X3B, 0X32 # cmpw (%r10), %si")
#define CMP_SI_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X3B, 0X33 # cmpw (%r11), %si")
#define CMP_SI_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X3B, 0X34, 0X24 # cmpw (%r12), %si")
#define CMP_SI_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X3B, 0X75, 0X00 # cmpw (%r13), %si")
#define CMP_SI_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X3B, 0X36 # cmpw (%r14), %si")
#define CMP_SI_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X3B, 0X37 # cmpw (%r15), %si")
#define CMP_SI_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X30 # cmpw (%eax), %si")
#define CMP_SI_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X33 # cmpw (%ebx), %si")
#define CMP_SI_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X31 # cmpw (%ecx), %si")
#define CMP_SI_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X32 # cmpw (%edx), %si")
#define CMP_SI_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X37 # cmpw (%edi), %si")
#define CMP_SI_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X36 # cmpw (%esi), %si")
#define CMP_SI_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X75, 0X00 # cmpw (%ebp), %si")
#define CMP_SI_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X34, 0X24 # cmpw (%esp), %si")

#define CMP_BP_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X3B, 0X28 # cmpw (%rax), %bp")
#define CMP_BP_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X3B, 0X2B # cmpw (%rbx), %bp")
#define CMP_BP_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X3B, 0X29 # cmpw (%rcx), %bp")
#define CMP_BP_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X3B, 0X2A # cmpw (%rdx), %bp")
#define CMP_BP_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X3B, 0X2F # cmpw (%rdi), %bp")
#define CMP_BP_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X3B, 0X2E # cmpw (%rsi), %bp")
#define CMP_BP_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X3B, 0X6D, 0X00 # cmpw (%rbp), %bp")
#define CMP_BP_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X3B, 0X2C, 0X24 # cmpw (%rsp), %bp")
#define CMP_BP_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X3B, 0X28 # cmpw (%r8), %bp")
#define CMP_BP_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X3B, 0X29 # cmpw (%r9), %bp")
#define CMP_BP_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X3B, 0X2A # cmpw (%r10), %bp")
#define CMP_BP_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X3B, 0X2B # cmpw (%r11), %bp")
#define CMP_BP_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X3B, 0X2C, 0X24 # cmpw (%r12), %bp")
#define CMP_BP_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X3B, 0X6D, 0X00 # cmpw (%r13), %bp")
#define CMP_BP_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X3B, 0X2E # cmpw (%r14), %bp")
#define CMP_BP_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X3B, 0X2F # cmpw (%r15), %bp")
#define CMP_BP_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X28 # cmpw (%eax), %bp")
#define CMP_BP_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X2B # cmpw (%ebx), %bp")
#define CMP_BP_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X29 # cmpw (%ecx), %bp")
#define CMP_BP_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X2A # cmpw (%edx), %bp")
#define CMP_BP_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X2F # cmpw (%edi), %bp")
#define CMP_BP_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X2E # cmpw (%esi), %bp")
#define CMP_BP_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X6D, 0X00 # cmpw (%ebp), %bp")
#define CMP_BP_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X2C, 0X24 # cmpw (%esp), %bp")

#define CMP_SP_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X3B, 0X20 # cmpw (%rax), %sp")
#define CMP_SP_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X3B, 0X23 # cmpw (%rbx), %sp")
#define CMP_SP_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X3B, 0X21 # cmpw (%rcx), %sp")
#define CMP_SP_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X3B, 0X22 # cmpw (%rdx), %sp")
#define CMP_SP_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X3B, 0X27 # cmpw (%rdi), %sp")
#define CMP_SP_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X3B, 0X26 # cmpw (%rsi), %sp")
#define CMP_SP_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X3B, 0X65, 0X00 # cmpw (%rbp), %sp")
#define CMP_SP_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X3B, 0X24, 0X24 # cmpw (%rsp), %sp")
#define CMP_SP_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X3B, 0X20 # cmpw (%r8), %sp")
#define CMP_SP_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X3B, 0X21 # cmpw (%r9), %sp")
#define CMP_SP_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X3B, 0X22 # cmpw (%r10), %sp")
#define CMP_SP_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X3B, 0X23 # cmpw (%r11), %sp")
#define CMP_SP_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X3B, 0X24, 0X24 # cmpw (%r12), %sp")
#define CMP_SP_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X3B, 0X65, 0X00 # cmpw (%r13), %sp")
#define CMP_SP_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X3B, 0X26 # cmpw (%r14), %sp")
#define CMP_SP_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X3B, 0X27 # cmpw (%r15), %sp")
#define CMP_SP_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X20 # cmpw (%eax), %sp")
#define CMP_SP_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X23 # cmpw (%ebx), %sp")
#define CMP_SP_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X21 # cmpw (%ecx), %sp")
#define CMP_SP_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X22 # cmpw (%edx), %sp")
#define CMP_SP_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X27 # cmpw (%edi), %sp")
#define CMP_SP_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X26 # cmpw (%esi), %sp")
#define CMP_SP_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X65, 0X00 # cmpw (%ebp), %sp")
#define CMP_SP_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X24, 0X24 # cmpw (%esp), %sp")

#define CMP_R8W_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X3B, 0X00 # cmpw (%rax), %r8w")
#define CMP_R8W_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X3B, 0X03 # cmpw (%rbx), %r8w")
#define CMP_R8W_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X3B, 0X01 # cmpw (%rcx), %r8w")
#define CMP_R8W_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X3B, 0X02 # cmpw (%rdx), %r8w")
#define CMP_R8W_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X3B, 0X07 # cmpw (%rdi), %r8w")
#define CMP_R8W_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X3B, 0X06 # cmpw (%rsi), %r8w")
#define CMP_R8W_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X3B, 0X45, 0X00 # cmpw (%rbp), %r8w")
#define CMP_R8W_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X3B, 0X04, 0X24 # cmpw (%rsp), %r8w")
#define CMP_R8W_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X3B, 0X00 # cmpw (%r8), %r8w")
#define CMP_R8W_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X3B, 0X01 # cmpw (%r9), %r8w")
#define CMP_R8W_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X3B, 0X02 # cmpw (%r10), %r8w")
#define CMP_R8W_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X3B, 0X03 # cmpw (%r11), %r8w")
#define CMP_R8W_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X3B, 0X04, 0X24 # cmpw (%r12), %r8w")
#define CMP_R8W_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X3B, 0X45, 0X00 # cmpw (%r13), %r8w")
#define CMP_R8W_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X3B, 0X06 # cmpw (%r14), %r8w")
#define CMP_R8W_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X3B, 0X07 # cmpw (%r15), %r8w")
#define CMP_R8W_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0X00 # cmpw (%eax), %r8w")
#define CMP_R8W_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0X03 # cmpw (%ebx), %r8w")
#define CMP_R8W_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0X01 # cmpw (%ecx), %r8w")
#define CMP_R8W_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0X02 # cmpw (%edx), %r8w")
#define CMP_R8W_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0X07 # cmpw (%edi), %r8w")
#define CMP_R8W_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0X06 # cmpw (%esi), %r8w")
#define CMP_R8W_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0X45, 0X00 # cmpw (%ebp), %r8w")
#define CMP_R8W_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0X04, 0X24 # cmpw (%esp), %r8w")

#define CMP_R9W_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X3B, 0X08 # cmpw (%rax), %r9w")
#define CMP_R9W_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X3B, 0X0B # cmpw (%rbx), %r9w")
#define CMP_R9W_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X3B, 0X09 # cmpw (%rcx), %r9w")
#define CMP_R9W_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X3B, 0X0A # cmpw (%rdx), %r9w")
#define CMP_R9W_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X3B, 0X0F # cmpw (%rdi), %r9w")
#define CMP_R9W_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X3B, 0X0E # cmpw (%rsi), %r9w")
#define CMP_R9W_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X3B, 0X4D, 0X00 # cmpw (%rbp), %r9w")
#define CMP_R9W_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X3B, 0X0C, 0X24 # cmpw (%rsp), %r9w")
#define CMP_R9W_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X3B, 0X08 # cmpw (%r8), %r9w")
#define CMP_R9W_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X3B, 0X09 # cmpw (%r9), %r9w")
#define CMP_R9W_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X3B, 0X0A # cmpw (%r10), %r9w")
#define CMP_R9W_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X3B, 0X0B # cmpw (%r11), %r9w")
#define CMP_R9W_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X3B, 0X0C, 0X24 # cmpw (%r12), %r9w")
#define CMP_R9W_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X3B, 0X4D, 0X00 # cmpw (%r13), %r9w")
#define CMP_R9W_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X3B, 0X0E # cmpw (%r14), %r9w")
#define CMP_R9W_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X3B, 0X0F # cmpw (%r15), %r9w")
#define CMP_R9W_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0X08 # cmpw (%eax), %r9w")
#define CMP_R9W_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0X0B # cmpw (%ebx), %r9w")
#define CMP_R9W_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0X09 # cmpw (%ecx), %r9w")
#define CMP_R9W_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0X0A # cmpw (%edx), %r9w")
#define CMP_R9W_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0X0F # cmpw (%edi), %r9w")
#define CMP_R9W_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0X0E # cmpw (%esi), %r9w")
#define CMP_R9W_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0X4D, 0X00 # cmpw (%ebp), %r9w")
#define CMP_R9W_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0X0C, 0X24 # cmpw (%esp), %r9w")

#define CMP_R10W_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X3B, 0X10 # cmpw (%rax), %r10w")
#define CMP_R10W_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X3B, 0X13 # cmpw (%rbx), %r10w")
#define CMP_R10W_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X3B, 0X11 # cmpw (%rcx), %r10w")
#define CMP_R10W_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X3B, 0X12 # cmpw (%rdx), %r10w")
#define CMP_R10W_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X3B, 0X17 # cmpw (%rdi), %r10w")
#define CMP_R10W_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X3B, 0X16 # cmpw (%rsi), %r10w")
#define CMP_R10W_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X3B, 0X55, 0X00 # cmpw (%rbp), %r10w")
#define CMP_R10W_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X3B, 0X14, 0X24 # cmpw (%rsp), %r10w")
#define CMP_R10W_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X3B, 0X10 # cmpw (%r8), %r10w")
#define CMP_R10W_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X3B, 0X11 # cmpw (%r9), %r10w")
#define CMP_R10W_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X3B, 0X12 # cmpw (%r10), %r10w")
#define CMP_R10W_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X3B, 0X13 # cmpw (%r11), %r10w")
#define CMP_R10W_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X3B, 0X14, 0X24 # cmpw (%r12), %r10w")
#define CMP_R10W_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X3B, 0X55, 0X00 # cmpw (%r13), %r10w")
#define CMP_R10W_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X3B, 0X16 # cmpw (%r14), %r10w")
#define CMP_R10W_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X3B, 0X17 # cmpw (%r15), %r10w")
#define CMP_R10W_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0X10 # cmpw (%eax), %r10w")
#define CMP_R10W_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0X13 # cmpw (%ebx), %r10w")
#define CMP_R10W_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0X11 # cmpw (%ecx), %r10w")
#define CMP_R10W_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0X12 # cmpw (%edx), %r10w")
#define CMP_R10W_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0X17 # cmpw (%edi), %r10w")
#define CMP_R10W_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0X16 # cmpw (%esi), %r10w")
#define CMP_R10W_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0X55, 0X00 # cmpw (%ebp), %r10w")
#define CMP_R10W_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0X14, 0X24 # cmpw (%esp), %r10w")

#define CMP_R11W_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X3B, 0X18 # cmpw (%rax), %r11w")
#define CMP_R11W_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X3B, 0X1B # cmpw (%rbx), %r11w")
#define CMP_R11W_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X3B, 0X19 # cmpw (%rcx), %r11w")
#define CMP_R11W_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X3B, 0X1A # cmpw (%rdx), %r11w")
#define CMP_R11W_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X3B, 0X1F # cmpw (%rdi), %r11w")
#define CMP_R11W_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X3B, 0X1E # cmpw (%rsi), %r11w")
#define CMP_R11W_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X3B, 0X5D, 0X00 # cmpw (%rbp), %r11w")
#define CMP_R11W_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X3B, 0X1C, 0X24 # cmpw (%rsp), %r11w")
#define CMP_R11W_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X3B, 0X18 # cmpw (%r8), %r11w")
#define CMP_R11W_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X3B, 0X19 # cmpw (%r9), %r11w")
#define CMP_R11W_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X3B, 0X1A # cmpw (%r10), %r11w")
#define CMP_R11W_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X3B, 0X1B # cmpw (%r11), %r11w")
#define CMP_R11W_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X3B, 0X1C, 0X24 # cmpw (%r12), %r11w")
#define CMP_R11W_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X3B, 0X5D, 0X00 # cmpw (%r13), %r11w")
#define CMP_R11W_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X3B, 0X1E # cmpw (%r14), %r11w")
#define CMP_R11W_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X3B, 0X1F # cmpw (%r15), %r11w")
#define CMP_R11W_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0X18 # cmpw (%eax), %r11w")
#define CMP_R11W_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0X1B # cmpw (%ebx), %r11w")
#define CMP_R11W_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0X19 # cmpw (%ecx), %r11w")
#define CMP_R11W_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0X1A # cmpw (%edx), %r11w")
#define CMP_R11W_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0X1F # cmpw (%edi), %r11w")
#define CMP_R11W_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0X1E # cmpw (%esi), %r11w")
#define CMP_R11W_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0X5D, 0X00 # cmpw (%ebp), %r11w")
#define CMP_R11W_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0X1C, 0X24 # cmpw (%esp), %r11w")

#define CMP_R12W_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X3B, 0X20 # cmpw (%rax), %r12w")
#define CMP_R12W_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X3B, 0X23 # cmpw (%rbx), %r12w")
#define CMP_R12W_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X3B, 0X21 # cmpw (%rcx), %r12w")
#define CMP_R12W_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X3B, 0X22 # cmpw (%rdx), %r12w")
#define CMP_R12W_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X3B, 0X27 # cmpw (%rdi), %r12w")
#define CMP_R12W_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X3B, 0X26 # cmpw (%rsi), %r12w")
#define CMP_R12W_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X3B, 0X65, 0X00 # cmpw (%rbp), %r12w")
#define CMP_R12W_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X3B, 0X24, 0X24 # cmpw (%rsp), %r12w")
#define CMP_R12W_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X3B, 0X20 # cmpw (%r8), %r12w")
#define CMP_R12W_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X3B, 0X21 # cmpw (%r9), %r12w")
#define CMP_R12W_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X3B, 0X22 # cmpw (%r10), %r12w")
#define CMP_R12W_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X3B, 0X23 # cmpw (%r11), %r12w")
#define CMP_R12W_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X3B, 0X24, 0X24 # cmpw (%r12), %r12w")
#define CMP_R12W_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X3B, 0X65, 0X00 # cmpw (%r13), %r12w")
#define CMP_R12W_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X3B, 0X26 # cmpw (%r14), %r12w")
#define CMP_R12W_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X3B, 0X27 # cmpw (%r15), %r12w")
#define CMP_R12W_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0X20 # cmpw (%eax), %r12w")
#define CMP_R12W_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0X23 # cmpw (%ebx), %r12w")
#define CMP_R12W_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0X21 # cmpw (%ecx), %r12w")
#define CMP_R12W_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0X22 # cmpw (%edx), %r12w")
#define CMP_R12W_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0X27 # cmpw (%edi), %r12w")
#define CMP_R12W_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0X26 # cmpw (%esi), %r12w")
#define CMP_R12W_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0X65, 0X00 # cmpw (%ebp), %r12w")
#define CMP_R12W_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0X24, 0X24 # cmpw (%esp), %r12w")

#define CMP_R13W_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X3B, 0X28 # cmpw (%rax), %r13w")
#define CMP_R13W_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X3B, 0X2B # cmpw (%rbx), %r13w")
#define CMP_R13W_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X3B, 0X29 # cmpw (%rcx), %r13w")
#define CMP_R13W_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X3B, 0X2A # cmpw (%rdx), %r13w")
#define CMP_R13W_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X3B, 0X2F # cmpw (%rdi), %r13w")
#define CMP_R13W_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X3B, 0X2E # cmpw (%rsi), %r13w")
#define CMP_R13W_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X3B, 0X6D, 0X00 # cmpw (%rbp), %r13w")
#define CMP_R13W_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X3B, 0X2C, 0X24 # cmpw (%rsp), %r13w")
#define CMP_R13W_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X3B, 0X28 # cmpw (%r8), %r13w")
#define CMP_R13W_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X3B, 0X29 # cmpw (%r9), %r13w")
#define CMP_R13W_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X3B, 0X2A # cmpw (%r10), %r13w")
#define CMP_R13W_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X3B, 0X2B # cmpw (%r11), %r13w")
#define CMP_R13W_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X3B, 0X2C, 0X24 # cmpw (%r12), %r13w")
#define CMP_R13W_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X3B, 0X6D, 0X00 # cmpw (%r13), %r13w")
#define CMP_R13W_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X3B, 0X2E # cmpw (%r14), %r13w")
#define CMP_R13W_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X3B, 0X2F # cmpw (%r15), %r13w")
#define CMP_R13W_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0X28 # cmpw (%eax), %r13w")
#define CMP_R13W_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0X2B # cmpw (%ebx), %r13w")
#define CMP_R13W_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0X29 # cmpw (%ecx), %r13w")
#define CMP_R13W_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0X2A # cmpw (%edx), %r13w")
#define CMP_R13W_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0X2F # cmpw (%edi), %r13w")
#define CMP_R13W_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0X2E # cmpw (%esi), %r13w")
#define CMP_R13W_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0X6D, 0X00 # cmpw (%ebp), %r13w")
#define CMP_R13W_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0X2C, 0X24 # cmpw (%esp), %r13w")

#define CMP_R14W_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X3B, 0X30 # cmpw (%rax), %r14w")
#define CMP_R14W_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X3B, 0X33 # cmpw (%rbx), %r14w")
#define CMP_R14W_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X3B, 0X31 # cmpw (%rcx), %r14w")
#define CMP_R14W_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X3B, 0X32 # cmpw (%rdx), %r14w")
#define CMP_R14W_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X3B, 0X37 # cmpw (%rdi), %r14w")
#define CMP_R14W_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X3B, 0X36 # cmpw (%rsi), %r14w")
#define CMP_R14W_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X3B, 0X75, 0X00 # cmpw (%rbp), %r14w")
#define CMP_R14W_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X3B, 0X34, 0X24 # cmpw (%rsp), %r14w")
#define CMP_R14W_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X3B, 0X30 # cmpw (%r8), %r14w")
#define CMP_R14W_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X3B, 0X31 # cmpw (%r9), %r14w")
#define CMP_R14W_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X3B, 0X32 # cmpw (%r10), %r14w")
#define CMP_R14W_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X3B, 0X33 # cmpw (%r11), %r14w")
#define CMP_R14W_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X3B, 0X34, 0X24 # cmpw (%r12), %r14w")
#define CMP_R14W_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X3B, 0X75, 0X00 # cmpw (%r13), %r14w")
#define CMP_R14W_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X3B, 0X36 # cmpw (%r14), %r14w")
#define CMP_R14W_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X3B, 0X37 # cmpw (%r15), %r14w")
#define CMP_R14W_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0X30 # cmpw (%eax), %r14w")
#define CMP_R14W_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0X33 # cmpw (%ebx), %r14w")
#define CMP_R14W_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0X31 # cmpw (%ecx), %r14w")
#define CMP_R14W_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0X32 # cmpw (%edx), %r14w")
#define CMP_R14W_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0X37 # cmpw (%edi), %r14w")
#define CMP_R14W_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0X36 # cmpw (%esi), %r14w")
#define CMP_R14W_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0X75, 0X00 # cmpw (%ebp), %r14w")
#define CMP_R14W_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0X34, 0X24 # cmpw (%esp), %r14w")

#define CMP_R15W_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X3B, 0X38 # cmpw (%rax), %r15w")
#define CMP_R15W_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X3B, 0X3B # cmpw (%rbx), %r15w")
#define CMP_R15W_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X3B, 0X39 # cmpw (%rcx), %r15w")
#define CMP_R15W_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X3B, 0X3A # cmpw (%rdx), %r15w")
#define CMP_R15W_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X3B, 0X3F # cmpw (%rdi), %r15w")
#define CMP_R15W_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X3B, 0X3E # cmpw (%rsi), %r15w")
#define CMP_R15W_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X3B, 0X7D, 0X00 # cmpw (%rbp), %r15w")
#define CMP_R15W_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X3B, 0X3C, 0X24 # cmpw (%rsp), %r15w")
#define CMP_R15W_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X3B, 0X38 # cmpw (%r8), %r15w")
#define CMP_R15W_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X3B, 0X39 # cmpw (%r9), %r15w")
#define CMP_R15W_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X3B, 0X3A # cmpw (%r10), %r15w")
#define CMP_R15W_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X3B, 0X3B # cmpw (%r11), %r15w")
#define CMP_R15W_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X3B, 0X3C, 0X24 # cmpw (%r12), %r15w")
#define CMP_R15W_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X3B, 0X7D, 0X00 # cmpw (%r13), %r15w")
#define CMP_R15W_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X3B, 0X3E # cmpw (%r14), %r15w")
#define CMP_R15W_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X3B, 0X3F # cmpw (%r15), %r15w")
#define CMP_R15W_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0X38 # cmpw (%eax), %r15w")
#define CMP_R15W_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0X3B # cmpw (%ebx), %r15w")
#define CMP_R15W_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0X39 # cmpw (%ecx), %r15w")
#define CMP_R15W_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0X3A # cmpw (%edx), %r15w")
#define CMP_R15W_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0X3F # cmpw (%edi), %r15w")
#define CMP_R15W_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0X3E # cmpw (%esi), %r15w")
#define CMP_R15W_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0X7D, 0X00 # cmpw (%ebp), %r15w")
#define CMP_R15W_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0X3C, 0X24 # cmpw (%esp), %r15w")

#define CMP_AX_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X39, 0X00 # cmpw %ax, (%rax)")
#define CMP_AX_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X39, 0X03 # cmpw %ax, (%rbx)")
#define CMP_AX_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X39, 0X01 # cmpw %ax, (%rcx)")
#define CMP_AX_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X39, 0X02 # cmpw %ax, (%rdx)")
#define CMP_AX_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X39, 0X07 # cmpw %ax, (%rdi)")
#define CMP_AX_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X39, 0X06 # cmpw %ax, (%rsi)")
#define CMP_AX_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X39, 0X45, 0X00 # cmpw %ax, (%rbp)")
#define CMP_AX_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X39, 0X04, 0X24 # cmpw %ax, (%rsp)")
#define CMP_AX_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X39, 0X00 # cmpw %ax, (%r8)")
#define CMP_AX_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X39, 0X01 # cmpw %ax, (%r9)")
#define CMP_AX_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X39, 0X02 # cmpw %ax, (%r10)")
#define CMP_AX_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X39, 0X03 # cmpw %ax, (%r11)")
#define CMP_AX_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X39, 0X04, 0X24 # cmpw %ax, (%r12)")
#define CMP_AX_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X39, 0X45, 0X00 # cmpw %ax, (%r13)")
#define CMP_AX_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X39, 0X06 # cmpw %ax, (%r14)")
#define CMP_AX_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X39, 0X07 # cmpw %ax, (%r15)")
#define CMP_AX_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X39, 0X00 # cmpw %ax, (%eax)")
#define CMP_AX_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X39, 0X03 # cmpw %ax, (%ebx)")
#define CMP_AX_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X39, 0X01 # cmpw %ax, (%ecx)")
#define CMP_AX_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X39, 0X02 # cmpw %ax, (%edx)")
#define CMP_AX_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X39, 0X07 # cmpw %ax, (%edi)")
#define CMP_AX_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X39, 0X06 # cmpw %ax, (%esi)")
#define CMP_AX_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X39, 0X45, 0X00 # cmpw %ax, (%ebp)")
#define CMP_AX_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X39, 0X04, 0X24 # cmpw %ax, (%esp)")

#define CMP_BX_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X39, 0X18 # cmpw %bx, (%rax)")
#define CMP_BX_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X39, 0X1B # cmpw %bx, (%rbx)")
#define CMP_BX_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X39, 0X19 # cmpw %bx, (%rcx)")
#define CMP_BX_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X39, 0X1A # cmpw %bx, (%rdx)")
#define CMP_BX_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X39, 0X1F # cmpw %bx, (%rdi)")
#define CMP_BX_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X39, 0X1E # cmpw %bx, (%rsi)")
#define CMP_BX_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X39, 0X5D, 0X00 # cmpw %bx, (%rbp)")
#define CMP_BX_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X39, 0X1C, 0X24 # cmpw %bx, (%rsp)")
#define CMP_BX_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X39, 0X18 # cmpw %bx, (%r8)")
#define CMP_BX_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X39, 0X19 # cmpw %bx, (%r9)")
#define CMP_BX_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X39, 0X1A # cmpw %bx, (%r10)")
#define CMP_BX_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X39, 0X1B # cmpw %bx, (%r11)")
#define CMP_BX_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X39, 0X1C, 0X24 # cmpw %bx, (%r12)")
#define CMP_BX_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X39, 0X5D, 0X00 # cmpw %bx, (%r13)")
#define CMP_BX_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X39, 0X1E # cmpw %bx, (%r14)")
#define CMP_BX_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X39, 0X1F # cmpw %bx, (%r15)")
#define CMP_BX_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X39, 0X18 # cmpw %bx, (%eax)")
#define CMP_BX_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X39, 0X1B # cmpw %bx, (%ebx)")
#define CMP_BX_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X39, 0X19 # cmpw %bx, (%ecx)")
#define CMP_BX_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X39, 0X1A # cmpw %bx, (%edx)")
#define CMP_BX_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X39, 0X1F # cmpw %bx, (%edi)")
#define CMP_BX_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X39, 0X1E # cmpw %bx, (%esi)")
#define CMP_BX_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X39, 0X5D, 0X00 # cmpw %bx, (%ebp)")
#define CMP_BX_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X39, 0X1C, 0X24 # cmpw %bx, (%esp)")

#define CMP_CX_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X39, 0X08 # cmpw %cx, (%rax)")
#define CMP_CX_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X39, 0X0B # cmpw %cx, (%rbx)")
#define CMP_CX_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X39, 0X09 # cmpw %cx, (%rcx)")
#define CMP_CX_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X39, 0X0A # cmpw %cx, (%rdx)")
#define CMP_CX_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X39, 0X0F # cmpw %cx, (%rdi)")
#define CMP_CX_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X39, 0X0E # cmpw %cx, (%rsi)")
#define CMP_CX_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X39, 0X4D, 0X00 # cmpw %cx, (%rbp)")
#define CMP_CX_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X39, 0X0C, 0X24 # cmpw %cx, (%rsp)")
#define CMP_CX_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X39, 0X08 # cmpw %cx, (%r8)")
#define CMP_CX_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X39, 0X09 # cmpw %cx, (%r9)")
#define CMP_CX_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X39, 0X0A # cmpw %cx, (%r10)")
#define CMP_CX_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X39, 0X0B # cmpw %cx, (%r11)")
#define CMP_CX_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X39, 0X0C, 0X24 # cmpw %cx, (%r12)")
#define CMP_CX_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X39, 0X4D, 0X00 # cmpw %cx, (%r13)")
#define CMP_CX_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X39, 0X0E # cmpw %cx, (%r14)")
#define CMP_CX_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X39, 0X0F # cmpw %cx, (%r15)")
#define CMP_CX_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X39, 0X08 # cmpw %cx, (%eax)")
#define CMP_CX_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X39, 0X0B # cmpw %cx, (%ebx)")
#define CMP_CX_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X39, 0X09 # cmpw %cx, (%ecx)")
#define CMP_CX_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X39, 0X0A # cmpw %cx, (%edx)")
#define CMP_CX_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X39, 0X0F # cmpw %cx, (%edi)")
#define CMP_CX_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X39, 0X0E # cmpw %cx, (%esi)")
#define CMP_CX_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X39, 0X4D, 0X00 # cmpw %cx, (%ebp)")
#define CMP_CX_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X39, 0X0C, 0X24 # cmpw %cx, (%esp)")

#define CMP_DX_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X39, 0X10 # cmpw %dx, (%rax)")
#define CMP_DX_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X39, 0X13 # cmpw %dx, (%rbx)")
#define CMP_DX_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X39, 0X11 # cmpw %dx, (%rcx)")
#define CMP_DX_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X39, 0X12 # cmpw %dx, (%rdx)")
#define CMP_DX_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X39, 0X17 # cmpw %dx, (%rdi)")
#define CMP_DX_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X39, 0X16 # cmpw %dx, (%rsi)")
#define CMP_DX_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X39, 0X55, 0X00 # cmpw %dx, (%rbp)")
#define CMP_DX_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X39, 0X14, 0X24 # cmpw %dx, (%rsp)")
#define CMP_DX_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X39, 0X10 # cmpw %dx, (%r8)")
#define CMP_DX_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X39, 0X11 # cmpw %dx, (%r9)")
#define CMP_DX_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X39, 0X12 # cmpw %dx, (%r10)")
#define CMP_DX_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X39, 0X13 # cmpw %dx, (%r11)")
#define CMP_DX_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X39, 0X14, 0X24 # cmpw %dx, (%r12)")
#define CMP_DX_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X39, 0X55, 0X00 # cmpw %dx, (%r13)")
#define CMP_DX_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X39, 0X16 # cmpw %dx, (%r14)")
#define CMP_DX_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X39, 0X17 # cmpw %dx, (%r15)")
#define CMP_DX_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X39, 0X10 # cmpw %dx, (%eax)")
#define CMP_DX_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X39, 0X13 # cmpw %dx, (%ebx)")
#define CMP_DX_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X39, 0X11 # cmpw %dx, (%ecx)")
#define CMP_DX_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X39, 0X12 # cmpw %dx, (%edx)")
#define CMP_DX_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X39, 0X17 # cmpw %dx, (%edi)")
#define CMP_DX_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X39, 0X16 # cmpw %dx, (%esi)")
#define CMP_DX_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X39, 0X55, 0X00 # cmpw %dx, (%ebp)")
#define CMP_DX_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X39, 0X14, 0X24 # cmpw %dx, (%esp)")

#define CMP_DI_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X39, 0X38 # cmpw %di, (%rax)")
#define CMP_DI_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X39, 0X3B # cmpw %di, (%rbx)")
#define CMP_DI_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X39, 0X39 # cmpw %di, (%rcx)")
#define CMP_DI_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X39, 0X3A # cmpw %di, (%rdx)")
#define CMP_DI_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X39, 0X3F # cmpw %di, (%rdi)")
#define CMP_DI_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X39, 0X3E # cmpw %di, (%rsi)")
#define CMP_DI_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X39, 0X7D, 0X00 # cmpw %di, (%rbp)")
#define CMP_DI_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X39, 0X3C, 0X24 # cmpw %di, (%rsp)")
#define CMP_DI_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X39, 0X38 # cmpw %di, (%r8)")
#define CMP_DI_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X39, 0X39 # cmpw %di, (%r9)")
#define CMP_DI_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X39, 0X3A # cmpw %di, (%r10)")
#define CMP_DI_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X39, 0X3B # cmpw %di, (%r11)")
#define CMP_DI_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X39, 0X3C, 0X24 # cmpw %di, (%r12)")
#define CMP_DI_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X39, 0X7D, 0X00 # cmpw %di, (%r13)")
#define CMP_DI_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X39, 0X3E # cmpw %di, (%r14)")
#define CMP_DI_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X39, 0X3F # cmpw %di, (%r15)")
#define CMP_DI_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X39, 0X38 # cmpw %di, (%eax)")
#define CMP_DI_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X39, 0X3B # cmpw %di, (%ebx)")
#define CMP_DI_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X39, 0X39 # cmpw %di, (%ecx)")
#define CMP_DI_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X39, 0X3A # cmpw %di, (%edx)")
#define CMP_DI_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X39, 0X3F # cmpw %di, (%edi)")
#define CMP_DI_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X39, 0X3E # cmpw %di, (%esi)")
#define CMP_DI_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X39, 0X7D, 0X00 # cmpw %di, (%ebp)")
#define CMP_DI_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X39, 0X3C, 0X24 # cmpw %di, (%esp)")

#define CMP_SI_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X39, 0X30 # cmpw %si, (%rax)")
#define CMP_SI_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X39, 0X33 # cmpw %si, (%rbx)")
#define CMP_SI_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X39, 0X31 # cmpw %si, (%rcx)")
#define CMP_SI_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X39, 0X32 # cmpw %si, (%rdx)")
#define CMP_SI_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X39, 0X37 # cmpw %si, (%rdi)")
#define CMP_SI_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X39, 0X36 # cmpw %si, (%rsi)")
#define CMP_SI_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X39, 0X75, 0X00 # cmpw %si, (%rbp)")
#define CMP_SI_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X39, 0X34, 0X24 # cmpw %si, (%rsp)")
#define CMP_SI_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X39, 0X30 # cmpw %si, (%r8)")
#define CMP_SI_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X39, 0X31 # cmpw %si, (%r9)")
#define CMP_SI_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X39, 0X32 # cmpw %si, (%r10)")
#define CMP_SI_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X39, 0X33 # cmpw %si, (%r11)")
#define CMP_SI_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X39, 0X34, 0X24 # cmpw %si, (%r12)")
#define CMP_SI_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X39, 0X75, 0X00 # cmpw %si, (%r13)")
#define CMP_SI_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X39, 0X36 # cmpw %si, (%r14)")
#define CMP_SI_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X39, 0X37 # cmpw %si, (%r15)")
#define CMP_SI_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X39, 0X30 # cmpw %si, (%eax)")
#define CMP_SI_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X39, 0X33 # cmpw %si, (%ebx)")
#define CMP_SI_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X39, 0X31 # cmpw %si, (%ecx)")
#define CMP_SI_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X39, 0X32 # cmpw %si, (%edx)")
#define CMP_SI_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X39, 0X37 # cmpw %si, (%edi)")
#define CMP_SI_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X39, 0X36 # cmpw %si, (%esi)")
#define CMP_SI_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X39, 0X75, 0X00 # cmpw %si, (%ebp)")
#define CMP_SI_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X39, 0X34, 0X24 # cmpw %si, (%esp)")

#define CMP_BP_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X39, 0X28 # cmpw %bp, (%rax)")
#define CMP_BP_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X39, 0X2B # cmpw %bp, (%rbx)")
#define CMP_BP_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X39, 0X29 # cmpw %bp, (%rcx)")
#define CMP_BP_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X39, 0X2A # cmpw %bp, (%rdx)")
#define CMP_BP_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X39, 0X2F # cmpw %bp, (%rdi)")
#define CMP_BP_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X39, 0X2E # cmpw %bp, (%rsi)")
#define CMP_BP_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X39, 0X6D, 0X00 # cmpw %bp, (%rbp)")
#define CMP_BP_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X39, 0X2C, 0X24 # cmpw %bp, (%rsp)")
#define CMP_BP_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X39, 0X28 # cmpw %bp, (%r8)")
#define CMP_BP_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X39, 0X29 # cmpw %bp, (%r9)")
#define CMP_BP_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X39, 0X2A # cmpw %bp, (%r10)")
#define CMP_BP_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X39, 0X2B # cmpw %bp, (%r11)")
#define CMP_BP_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X39, 0X2C, 0X24 # cmpw %bp, (%r12)")
#define CMP_BP_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X39, 0X6D, 0X00 # cmpw %bp, (%r13)")
#define CMP_BP_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X39, 0X2E # cmpw %bp, (%r14)")
#define CMP_BP_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X39, 0X2F # cmpw %bp, (%r15)")
#define CMP_BP_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X39, 0X28 # cmpw %bp, (%eax)")
#define CMP_BP_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X39, 0X2B # cmpw %bp, (%ebx)")
#define CMP_BP_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X39, 0X29 # cmpw %bp, (%ecx)")
#define CMP_BP_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X39, 0X2A # cmpw %bp, (%edx)")
#define CMP_BP_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X39, 0X2F # cmpw %bp, (%edi)")
#define CMP_BP_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X39, 0X2E # cmpw %bp, (%esi)")
#define CMP_BP_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X39, 0X6D, 0X00 # cmpw %bp, (%ebp)")
#define CMP_BP_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X39, 0X2C, 0X24 # cmpw %bp, (%esp)")

#define CMP_SP_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X39, 0X20 # cmpw %sp, (%rax)")
#define CMP_SP_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X39, 0X23 # cmpw %sp, (%rbx)")
#define CMP_SP_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X39, 0X21 # cmpw %sp, (%rcx)")
#define CMP_SP_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X39, 0X22 # cmpw %sp, (%rdx)")
#define CMP_SP_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X39, 0X27 # cmpw %sp, (%rdi)")
#define CMP_SP_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X39, 0X26 # cmpw %sp, (%rsi)")
#define CMP_SP_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X39, 0X65, 0X00 # cmpw %sp, (%rbp)")
#define CMP_SP_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X39, 0X24, 0X24 # cmpw %sp, (%rsp)")
#define CMP_SP_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X39, 0X20 # cmpw %sp, (%r8)")
#define CMP_SP_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X39, 0X21 # cmpw %sp, (%r9)")
#define CMP_SP_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X39, 0X22 # cmpw %sp, (%r10)")
#define CMP_SP_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X39, 0X23 # cmpw %sp, (%r11)")
#define CMP_SP_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X39, 0X24, 0X24 # cmpw %sp, (%r12)")
#define CMP_SP_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X39, 0X65, 0X00 # cmpw %sp, (%r13)")
#define CMP_SP_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X39, 0X26 # cmpw %sp, (%r14)")
#define CMP_SP_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X39, 0X27 # cmpw %sp, (%r15)")
#define CMP_SP_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X39, 0X20 # cmpw %sp, (%eax)")
#define CMP_SP_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X39, 0X23 # cmpw %sp, (%ebx)")
#define CMP_SP_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X39, 0X21 # cmpw %sp, (%ecx)")
#define CMP_SP_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X39, 0X22 # cmpw %sp, (%edx)")
#define CMP_SP_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X39, 0X27 # cmpw %sp, (%edi)")
#define CMP_SP_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X39, 0X26 # cmpw %sp, (%esi)")
#define CMP_SP_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X39, 0X65, 0X00 # cmpw %sp, (%ebp)")
#define CMP_SP_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X39, 0X24, 0X24 # cmpw %sp, (%esp)")

#define CMP_R8W_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X39, 0X00 # cmpw %r8w, (%rax)")
#define CMP_R8W_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X39, 0X03 # cmpw %r8w, (%rbx)")
#define CMP_R8W_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X39, 0X01 # cmpw %r8w, (%rcx)")
#define CMP_R8W_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X39, 0X02 # cmpw %r8w, (%rdx)")
#define CMP_R8W_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X39, 0X07 # cmpw %r8w, (%rdi)")
#define CMP_R8W_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X39, 0X06 # cmpw %r8w, (%rsi)")
#define CMP_R8W_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X39, 0X45, 0X00 # cmpw %r8w, (%rbp)")
#define CMP_R8W_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X39, 0X04, 0X24 # cmpw %r8w, (%rsp)")
#define CMP_R8W_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X39, 0X00 # cmpw %r8w, (%r8)")
#define CMP_R8W_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X39, 0X01 # cmpw %r8w, (%r9)")
#define CMP_R8W_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X39, 0X02 # cmpw %r8w, (%r10)")
#define CMP_R8W_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X39, 0X03 # cmpw %r8w, (%r11)")
#define CMP_R8W_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X39, 0X04, 0X24 # cmpw %r8w, (%r12)")
#define CMP_R8W_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X39, 0X45, 0X00 # cmpw %r8w, (%r13)")
#define CMP_R8W_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X39, 0X06 # cmpw %r8w, (%r14)")
#define CMP_R8W_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X39, 0X07 # cmpw %r8w, (%r15)")
#define CMP_R8W_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0X00 # cmpw %r8w, (%eax)")
#define CMP_R8W_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0X03 # cmpw %r8w, (%ebx)")
#define CMP_R8W_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0X01 # cmpw %r8w, (%ecx)")
#define CMP_R8W_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0X02 # cmpw %r8w, (%edx)")
#define CMP_R8W_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0X07 # cmpw %r8w, (%edi)")
#define CMP_R8W_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0X06 # cmpw %r8w, (%esi)")
#define CMP_R8W_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0X45, 0X00 # cmpw %r8w, (%ebp)")
#define CMP_R8W_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0X04, 0X24 # cmpw %r8w, (%esp)")

#define CMP_R9W_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X39, 0X08 # cmpw %r9w, (%rax)")
#define CMP_R9W_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X39, 0X0B # cmpw %r9w, (%rbx)")
#define CMP_R9W_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X39, 0X09 # cmpw %r9w, (%rcx)")
#define CMP_R9W_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X39, 0X0A # cmpw %r9w, (%rdx)")
#define CMP_R9W_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X39, 0X0F # cmpw %r9w, (%rdi)")
#define CMP_R9W_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X39, 0X0E # cmpw %r9w, (%rsi)")
#define CMP_R9W_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X39, 0X4D, 0X00 # cmpw %r9w, (%rbp)")
#define CMP_R9W_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X39, 0X0C, 0X24 # cmpw %r9w, (%rsp)")
#define CMP_R9W_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X39, 0X08 # cmpw %r9w, (%r8)")
#define CMP_R9W_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X39, 0X09 # cmpw %r9w, (%r9)")
#define CMP_R9W_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X39, 0X0A # cmpw %r9w, (%r10)")
#define CMP_R9W_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X39, 0X0B # cmpw %r9w, (%r11)")
#define CMP_R9W_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X39, 0X0C, 0X24 # cmpw %r9w, (%r12)")
#define CMP_R9W_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X39, 0X4D, 0X00 # cmpw %r9w, (%r13)")
#define CMP_R9W_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X39, 0X0E # cmpw %r9w, (%r14)")
#define CMP_R9W_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X39, 0X0F # cmpw %r9w, (%r15)")
#define CMP_R9W_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0X08 # cmpw %r9w, (%eax)")
#define CMP_R9W_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0X0B # cmpw %r9w, (%ebx)")
#define CMP_R9W_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0X09 # cmpw %r9w, (%ecx)")
#define CMP_R9W_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0X0A # cmpw %r9w, (%edx)")
#define CMP_R9W_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0X0F # cmpw %r9w, (%edi)")
#define CMP_R9W_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0X0E # cmpw %r9w, (%esi)")
#define CMP_R9W_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0X4D, 0X00 # cmpw %r9w, (%ebp)")
#define CMP_R9W_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0X0C, 0X24 # cmpw %r9w, (%esp)")

#define CMP_R10W_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X39, 0X10 # cmpw %r10w, (%rax)")
#define CMP_R10W_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X39, 0X13 # cmpw %r10w, (%rbx)")
#define CMP_R10W_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X39, 0X11 # cmpw %r10w, (%rcx)")
#define CMP_R10W_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X39, 0X12 # cmpw %r10w, (%rdx)")
#define CMP_R10W_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X39, 0X17 # cmpw %r10w, (%rdi)")
#define CMP_R10W_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X39, 0X16 # cmpw %r10w, (%rsi)")
#define CMP_R10W_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X39, 0X55, 0X00 # cmpw %r10w, (%rbp)")
#define CMP_R10W_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X39, 0X14, 0X24 # cmpw %r10w, (%rsp)")
#define CMP_R10W_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X39, 0X10 # cmpw %r10w, (%r8)")
#define CMP_R10W_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X39, 0X11 # cmpw %r10w, (%r9)")
#define CMP_R10W_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X39, 0X12 # cmpw %r10w, (%r10)")
#define CMP_R10W_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X39, 0X13 # cmpw %r10w, (%r11)")
#define CMP_R10W_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X39, 0X14, 0X24 # cmpw %r10w, (%r12)")
#define CMP_R10W_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X39, 0X55, 0X00 # cmpw %r10w, (%r13)")
#define CMP_R10W_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X39, 0X16 # cmpw %r10w, (%r14)")
#define CMP_R10W_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X39, 0X17 # cmpw %r10w, (%r15)")
#define CMP_R10W_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0X10 # cmpw %r10w, (%eax)")
#define CMP_R10W_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0X13 # cmpw %r10w, (%ebx)")
#define CMP_R10W_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0X11 # cmpw %r10w, (%ecx)")
#define CMP_R10W_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0X12 # cmpw %r10w, (%edx)")
#define CMP_R10W_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0X17 # cmpw %r10w, (%edi)")
#define CMP_R10W_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0X16 # cmpw %r10w, (%esi)")
#define CMP_R10W_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0X55, 0X00 # cmpw %r10w, (%ebp)")
#define CMP_R10W_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0X14, 0X24 # cmpw %r10w, (%esp)")

#define CMP_R11W_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X39, 0X18 # cmpw %r11w, (%rax)")
#define CMP_R11W_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X39, 0X1B # cmpw %r11w, (%rbx)")
#define CMP_R11W_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X39, 0X19 # cmpw %r11w, (%rcx)")
#define CMP_R11W_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X39, 0X1A # cmpw %r11w, (%rdx)")
#define CMP_R11W_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X39, 0X1F # cmpw %r11w, (%rdi)")
#define CMP_R11W_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X39, 0X1E # cmpw %r11w, (%rsi)")
#define CMP_R11W_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X39, 0X5D, 0X00 # cmpw %r11w, (%rbp)")
#define CMP_R11W_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X39, 0X1C, 0X24 # cmpw %r11w, (%rsp)")
#define CMP_R11W_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X39, 0X18 # cmpw %r11w, (%r8)")
#define CMP_R11W_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X39, 0X19 # cmpw %r11w, (%r9)")
#define CMP_R11W_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X39, 0X1A # cmpw %r11w, (%r10)")
#define CMP_R11W_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X39, 0X1B # cmpw %r11w, (%r11)")
#define CMP_R11W_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X39, 0X1C, 0X24 # cmpw %r11w, (%r12)")
#define CMP_R11W_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X39, 0X5D, 0X00 # cmpw %r11w, (%r13)")
#define CMP_R11W_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X39, 0X1E # cmpw %r11w, (%r14)")
#define CMP_R11W_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X39, 0X1F # cmpw %r11w, (%r15)")
#define CMP_R11W_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0X18 # cmpw %r11w, (%eax)")
#define CMP_R11W_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0X1B # cmpw %r11w, (%ebx)")
#define CMP_R11W_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0X19 # cmpw %r11w, (%ecx)")
#define CMP_R11W_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0X1A # cmpw %r11w, (%edx)")
#define CMP_R11W_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0X1F # cmpw %r11w, (%edi)")
#define CMP_R11W_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0X1E # cmpw %r11w, (%esi)")
#define CMP_R11W_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0X5D, 0X00 # cmpw %r11w, (%ebp)")
#define CMP_R11W_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0X1C, 0X24 # cmpw %r11w, (%esp)")

#define CMP_R12W_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X39, 0X20 # cmpw %r12w, (%rax)")
#define CMP_R12W_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X39, 0X23 # cmpw %r12w, (%rbx)")
#define CMP_R12W_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X39, 0X21 # cmpw %r12w, (%rcx)")
#define CMP_R12W_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X39, 0X22 # cmpw %r12w, (%rdx)")
#define CMP_R12W_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X39, 0X27 # cmpw %r12w, (%rdi)")
#define CMP_R12W_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X39, 0X26 # cmpw %r12w, (%rsi)")
#define CMP_R12W_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X39, 0X65, 0X00 # cmpw %r12w, (%rbp)")
#define CMP_R12W_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X39, 0X24, 0X24 # cmpw %r12w, (%rsp)")
#define CMP_R12W_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X39, 0X20 # cmpw %r12w, (%r8)")
#define CMP_R12W_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X39, 0X21 # cmpw %r12w, (%r9)")
#define CMP_R12W_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X39, 0X22 # cmpw %r12w, (%r10)")
#define CMP_R12W_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X39, 0X23 # cmpw %r12w, (%r11)")
#define CMP_R12W_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X39, 0X24, 0X24 # cmpw %r12w, (%r12)")
#define CMP_R12W_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X39, 0X65, 0X00 # cmpw %r12w, (%r13)")
#define CMP_R12W_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X39, 0X26 # cmpw %r12w, (%r14)")
#define CMP_R12W_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X39, 0X27 # cmpw %r12w, (%r15)")
#define CMP_R12W_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0X20 # cmpw %r12w, (%eax)")
#define CMP_R12W_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0X23 # cmpw %r12w, (%ebx)")
#define CMP_R12W_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0X21 # cmpw %r12w, (%ecx)")
#define CMP_R12W_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0X22 # cmpw %r12w, (%edx)")
#define CMP_R12W_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0X27 # cmpw %r12w, (%edi)")
#define CMP_R12W_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0X26 # cmpw %r12w, (%esi)")
#define CMP_R12W_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0X65, 0X00 # cmpw %r12w, (%ebp)")
#define CMP_R12W_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0X24, 0X24 # cmpw %r12w, (%esp)")

#define CMP_R13W_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X39, 0X28 # cmpw %r13w, (%rax)")
#define CMP_R13W_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X39, 0X2B # cmpw %r13w, (%rbx)")
#define CMP_R13W_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X39, 0X29 # cmpw %r13w, (%rcx)")
#define CMP_R13W_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X39, 0X2A # cmpw %r13w, (%rdx)")
#define CMP_R13W_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X39, 0X2F # cmpw %r13w, (%rdi)")
#define CMP_R13W_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X39, 0X2E # cmpw %r13w, (%rsi)")
#define CMP_R13W_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X39, 0X6D, 0X00 # cmpw %r13w, (%rbp)")
#define CMP_R13W_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X39, 0X2C, 0X24 # cmpw %r13w, (%rsp)")
#define CMP_R13W_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X39, 0X28 # cmpw %r13w, (%r8)")
#define CMP_R13W_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X39, 0X29 # cmpw %r13w, (%r9)")
#define CMP_R13W_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X39, 0X2A # cmpw %r13w, (%r10)")
#define CMP_R13W_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X39, 0X2B # cmpw %r13w, (%r11)")
#define CMP_R13W_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X39, 0X2C, 0X24 # cmpw %r13w, (%r12)")
#define CMP_R13W_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X39, 0X6D, 0X00 # cmpw %r13w, (%r13)")
#define CMP_R13W_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X39, 0X2E # cmpw %r13w, (%r14)")
#define CMP_R13W_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X39, 0X2F # cmpw %r13w, (%r15)")
#define CMP_R13W_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0X28 # cmpw %r13w, (%eax)")
#define CMP_R13W_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0X2B # cmpw %r13w, (%ebx)")
#define CMP_R13W_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0X29 # cmpw %r13w, (%ecx)")
#define CMP_R13W_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0X2A # cmpw %r13w, (%edx)")
#define CMP_R13W_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0X2F # cmpw %r13w, (%edi)")
#define CMP_R13W_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0X2E # cmpw %r13w, (%esi)")
#define CMP_R13W_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0X6D, 0X00 # cmpw %r13w, (%ebp)")
#define CMP_R13W_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0X2C, 0X24 # cmpw %r13w, (%esp)")

#define CMP_R14W_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X39, 0X30 # cmpw %r14w, (%rax)")
#define CMP_R14W_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X39, 0X33 # cmpw %r14w, (%rbx)")
#define CMP_R14W_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X39, 0X31 # cmpw %r14w, (%rcx)")
#define CMP_R14W_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X39, 0X32 # cmpw %r14w, (%rdx)")
#define CMP_R14W_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X39, 0X37 # cmpw %r14w, (%rdi)")
#define CMP_R14W_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X39, 0X36 # cmpw %r14w, (%rsi)")
#define CMP_R14W_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X39, 0X75, 0X00 # cmpw %r14w, (%rbp)")
#define CMP_R14W_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X39, 0X34, 0X24 # cmpw %r14w, (%rsp)")
#define CMP_R14W_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X39, 0X30 # cmpw %r14w, (%r8)")
#define CMP_R14W_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X39, 0X31 # cmpw %r14w, (%r9)")
#define CMP_R14W_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X39, 0X32 # cmpw %r14w, (%r10)")
#define CMP_R14W_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X39, 0X33 # cmpw %r14w, (%r11)")
#define CMP_R14W_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X39, 0X34, 0X24 # cmpw %r14w, (%r12)")
#define CMP_R14W_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X39, 0X75, 0X00 # cmpw %r14w, (%r13)")
#define CMP_R14W_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X39, 0X36 # cmpw %r14w, (%r14)")
#define CMP_R14W_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X39, 0X37 # cmpw %r14w, (%r15)")
#define CMP_R14W_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0X30 # cmpw %r14w, (%eax)")
#define CMP_R14W_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0X33 # cmpw %r14w, (%ebx)")
#define CMP_R14W_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0X31 # cmpw %r14w, (%ecx)")
#define CMP_R14W_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0X32 # cmpw %r14w, (%edx)")
#define CMP_R14W_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0X37 # cmpw %r14w, (%edi)")
#define CMP_R14W_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0X36 # cmpw %r14w, (%esi)")
#define CMP_R14W_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0X75, 0X00 # cmpw %r14w, (%ebp)")
#define CMP_R14W_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0X34, 0X24 # cmpw %r14w, (%esp)")

#define CMP_R15W_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X39, 0X38 # cmpw %r15w, (%rax)")
#define CMP_R15W_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X39, 0X3B # cmpw %r15w, (%rbx)")
#define CMP_R15W_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X39, 0X39 # cmpw %r15w, (%rcx)")
#define CMP_R15W_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X39, 0X3A # cmpw %r15w, (%rdx)")
#define CMP_R15W_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X39, 0X3F # cmpw %r15w, (%rdi)")
#define CMP_R15W_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X39, 0X3E # cmpw %r15w, (%rsi)")
#define CMP_R15W_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X39, 0X7D, 0X00 # cmpw %r15w, (%rbp)")
#define CMP_R15W_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X39, 0X3C, 0X24 # cmpw %r15w, (%rsp)")
#define CMP_R15W_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X39, 0X38 # cmpw %r15w, (%r8)")
#define CMP_R15W_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X39, 0X39 # cmpw %r15w, (%r9)")
#define CMP_R15W_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X39, 0X3A # cmpw %r15w, (%r10)")
#define CMP_R15W_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X39, 0X3B # cmpw %r15w, (%r11)")
#define CMP_R15W_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X39, 0X3C, 0X24 # cmpw %r15w, (%r12)")
#define CMP_R15W_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X39, 0X7D, 0X00 # cmpw %r15w, (%r13)")
#define CMP_R15W_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X39, 0X3E # cmpw %r15w, (%r14)")
#define CMP_R15W_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X39, 0X3F # cmpw %r15w, (%r15)")
#define CMP_R15W_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0X38 # cmpw %r15w, (%eax)")
#define CMP_R15W_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0X3B # cmpw %r15w, (%ebx)")
#define CMP_R15W_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0X39 # cmpw %r15w, (%ecx)")
#define CMP_R15W_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0X3A # cmpw %r15w, (%edx)")
#define CMP_R15W_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0X3F # cmpw %r15w, (%edi)")
#define CMP_R15W_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0X3E # cmpw %r15w, (%esi)")
#define CMP_R15W_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0X7D, 0X00 # cmpw %r15w, (%ebp)")
#define CMP_R15W_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0X3C, 0X24 # cmpw %r15w, (%esp)")

#define CMP_AX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0X80 # cmpw " _(VALUE) "(%rax), %ax")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0X83 # cmpw " _(VALUE) "(%rbx), %ax")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0X81 # cmpw " _(VALUE) "(%rcx), %ax")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0X82 # cmpw " _(VALUE) "(%rdx), %ax")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0X87 # cmpw " _(VALUE) "(%rdi), %ax")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0X86 # cmpw " _(VALUE) "(%rsi), %ax")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0X85 # cmpw " _(VALUE) "(%rbp), %ax")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0X84, 0X24 # cmpw " _(VALUE) "(%rsp), %ax")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X3B, 0X80 # cmpw " _(VALUE) "(%r8), %ax")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X3B, 0X81 # cmpw " _(VALUE) "(%r9), %ax")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X3B, 0X82 # cmpw " _(VALUE) "(%r10), %ax")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X3B, 0X83 # cmpw " _(VALUE) "(%r11), %ax")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X3B, 0X84, 0X24 # cmpw " _(VALUE) "(%r12), %ax")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X3B, 0X85 # cmpw " _(VALUE) "(%r13), %ax")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X3B, 0X86 # cmpw " _(VALUE) "(%r14), %ax")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X3B, 0X87 # cmpw " _(VALUE) "(%r15), %ax")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X80 # cmpw " _(VALUE) "(%eax), %ax")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X83 # cmpw " _(VALUE) "(%ebx), %ax")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X81 # cmpw " _(VALUE) "(%ecx), %ax")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X82 # cmpw " _(VALUE) "(%edx), %ax")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X87 # cmpw " _(VALUE) "(%edi), %ax")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X86 # cmpw " _(VALUE) "(%esi), %ax")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X85 # cmpw " _(VALUE) "(%ebp), %ax")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X84, 0X24 # cmpw " _(VALUE) "(%esp), %ax")\
	CMT_ASM(".long " _(VALUE))

#define CMP_BX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0X98 # cmpw " _(VALUE) "(%rax), %bx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0X9B # cmpw " _(VALUE) "(%rbx), %bx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0X99 # cmpw " _(VALUE) "(%rcx), %bx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0X9A # cmpw " _(VALUE) "(%rdx), %bx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0X9F # cmpw " _(VALUE) "(%rdi), %bx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0X9E # cmpw " _(VALUE) "(%rsi), %bx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0X9D # cmpw " _(VALUE) "(%rbp), %bx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0X9C, 0X24 # cmpw " _(VALUE) "(%rsp), %bx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X3B, 0X98 # cmpw " _(VALUE) "(%r8), %bx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X3B, 0X99 # cmpw " _(VALUE) "(%r9), %bx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X3B, 0X9A # cmpw " _(VALUE) "(%r10), %bx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X3B, 0X9B # cmpw " _(VALUE) "(%r11), %bx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X3B, 0X9C, 0X24 # cmpw " _(VALUE) "(%r12), %bx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X3B, 0X9D # cmpw " _(VALUE) "(%r13), %bx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X3B, 0X9E # cmpw " _(VALUE) "(%r14), %bx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X3B, 0X9F # cmpw " _(VALUE) "(%r15), %bx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X98 # cmpw " _(VALUE) "(%eax), %bx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X9B # cmpw " _(VALUE) "(%ebx), %bx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X99 # cmpw " _(VALUE) "(%ecx), %bx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X9A # cmpw " _(VALUE) "(%edx), %bx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X9F # cmpw " _(VALUE) "(%edi), %bx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X9E # cmpw " _(VALUE) "(%esi), %bx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X9D # cmpw " _(VALUE) "(%ebp), %bx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X9C, 0X24 # cmpw " _(VALUE) "(%esp), %bx")\
	CMT_ASM(".long " _(VALUE))

#define CMP_CX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0X88 # cmpw " _(VALUE) "(%rax), %cx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0X8B # cmpw " _(VALUE) "(%rbx), %cx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0X89 # cmpw " _(VALUE) "(%rcx), %cx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0X8A # cmpw " _(VALUE) "(%rdx), %cx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0X8F # cmpw " _(VALUE) "(%rdi), %cx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0X8E # cmpw " _(VALUE) "(%rsi), %cx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0X8D # cmpw " _(VALUE) "(%rbp), %cx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0X8C, 0X24 # cmpw " _(VALUE) "(%rsp), %cx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X3B, 0X88 # cmpw " _(VALUE) "(%r8), %cx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X3B, 0X89 # cmpw " _(VALUE) "(%r9), %cx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X3B, 0X8A # cmpw " _(VALUE) "(%r10), %cx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X3B, 0X8B # cmpw " _(VALUE) "(%r11), %cx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X3B, 0X8C, 0X24 # cmpw " _(VALUE) "(%r12), %cx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X3B, 0X8D # cmpw " _(VALUE) "(%r13), %cx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X3B, 0X8E # cmpw " _(VALUE) "(%r14), %cx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X3B, 0X8F # cmpw " _(VALUE) "(%r15), %cx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X88 # cmpw " _(VALUE) "(%eax), %cx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X8B # cmpw " _(VALUE) "(%ebx), %cx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X89 # cmpw " _(VALUE) "(%ecx), %cx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X8A # cmpw " _(VALUE) "(%edx), %cx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X8F # cmpw " _(VALUE) "(%edi), %cx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X8E # cmpw " _(VALUE) "(%esi), %cx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X8D # cmpw " _(VALUE) "(%ebp), %cx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X8C, 0X24 # cmpw " _(VALUE) "(%esp), %cx")\
	CMT_ASM(".long " _(VALUE))

#define CMP_DX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0X90 # cmpw " _(VALUE) "(%rax), %dx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0X93 # cmpw " _(VALUE) "(%rbx), %dx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0X91 # cmpw " _(VALUE) "(%rcx), %dx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0X92 # cmpw " _(VALUE) "(%rdx), %dx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0X97 # cmpw " _(VALUE) "(%rdi), %dx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0X96 # cmpw " _(VALUE) "(%rsi), %dx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0X95 # cmpw " _(VALUE) "(%rbp), %dx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0X94, 0X24 # cmpw " _(VALUE) "(%rsp), %dx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X3B, 0X90 # cmpw " _(VALUE) "(%r8), %dx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X3B, 0X91 # cmpw " _(VALUE) "(%r9), %dx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X3B, 0X92 # cmpw " _(VALUE) "(%r10), %dx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X3B, 0X93 # cmpw " _(VALUE) "(%r11), %dx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X3B, 0X94, 0X24 # cmpw " _(VALUE) "(%r12), %dx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X3B, 0X95 # cmpw " _(VALUE) "(%r13), %dx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X3B, 0X96 # cmpw " _(VALUE) "(%r14), %dx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X3B, 0X97 # cmpw " _(VALUE) "(%r15), %dx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X90 # cmpw " _(VALUE) "(%eax), %dx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X93 # cmpw " _(VALUE) "(%ebx), %dx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X91 # cmpw " _(VALUE) "(%ecx), %dx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X92 # cmpw " _(VALUE) "(%edx), %dx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X97 # cmpw " _(VALUE) "(%edi), %dx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X96 # cmpw " _(VALUE) "(%esi), %dx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X95 # cmpw " _(VALUE) "(%ebp), %dx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X3B, 0X94, 0X24 # cmpw " _(VALUE) "(%esp), %dx")\
	CMT_ASM(".long " _(VALUE))

#define CMP_DI_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0XB8 # cmpw " _(VALUE) "(%rax), %di")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DI_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0XBB # cmpw " _(VALUE) "(%rbx), %di")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DI_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0XB9 # cmpw " _(VALUE) "(%rcx), %di")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DI_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0XBA # cmpw " _(VALUE) "(%rdx), %di")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DI_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0XBF # cmpw " _(VALUE) "(%rdi), %di")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DI_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0XBE # cmpw " _(VALUE) "(%rsi), %di")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DI_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0XBD # cmpw " _(VALUE) "(%rbp), %di")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DI_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0XBC, 0X24 # cmpw " _(VALUE) "(%rsp), %di")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DI_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X3B, 0XB8 # cmpw " _(VALUE) "(%r8), %di")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DI_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X3B, 0XB9 # cmpw " _(VALUE) "(%r9), %di")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DI_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X3B, 0XBA # cmpw " _(VALUE) "(%r10), %di")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DI_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X3B, 0XBB # cmpw " _(VALUE) "(%r11), %di")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DI_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X3B, 0XBC, 0X24 # cmpw " _(VALUE) "(%r12), %di")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DI_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X3B, 0XBD # cmpw " _(VALUE) "(%r13), %di")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DI_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X3B, 0XBE # cmpw " _(VALUE) "(%r14), %di")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DI_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X3B, 0XBF # cmpw " _(VALUE) "(%r15), %di")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X3B, 0XB8 # cmpw " _(VALUE) "(%eax), %di")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X3B, 0XBB # cmpw " _(VALUE) "(%ebx), %di")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X3B, 0XB9 # cmpw " _(VALUE) "(%ecx), %di")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X3B, 0XBA # cmpw " _(VALUE) "(%edx), %di")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X3B, 0XBF # cmpw " _(VALUE) "(%edi), %di")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X3B, 0XBE # cmpw " _(VALUE) "(%esi), %di")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X3B, 0XBD # cmpw " _(VALUE) "(%ebp), %di")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X3B, 0XBC, 0X24 # cmpw " _(VALUE) "(%esp), %di")\
	CMT_ASM(".long " _(VALUE))

#define CMP_SI_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0XB0 # cmpw " _(VALUE) "(%rax), %si")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SI_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0XB3 # cmpw " _(VALUE) "(%rbx), %si")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SI_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0XB1 # cmpw " _(VALUE) "(%rcx), %si")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SI_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0XB2 # cmpw " _(VALUE) "(%rdx), %si")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SI_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0XB7 # cmpw " _(VALUE) "(%rdi), %si")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SI_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0XB6 # cmpw " _(VALUE) "(%rsi), %si")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SI_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0XB5 # cmpw " _(VALUE) "(%rbp), %si")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SI_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0XB4, 0X24 # cmpw " _(VALUE) "(%rsp), %si")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SI_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X3B, 0XB0 # cmpw " _(VALUE) "(%r8), %si")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SI_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X3B, 0XB1 # cmpw " _(VALUE) "(%r9), %si")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SI_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X3B, 0XB2 # cmpw " _(VALUE) "(%r10), %si")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SI_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X3B, 0XB3 # cmpw " _(VALUE) "(%r11), %si")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SI_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X3B, 0XB4, 0X24 # cmpw " _(VALUE) "(%r12), %si")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SI_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X3B, 0XB5 # cmpw " _(VALUE) "(%r13), %si")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SI_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X3B, 0XB6 # cmpw " _(VALUE) "(%r14), %si")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SI_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X3B, 0XB7 # cmpw " _(VALUE) "(%r15), %si")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X3B, 0XB0 # cmpw " _(VALUE) "(%eax), %si")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X3B, 0XB3 # cmpw " _(VALUE) "(%ebx), %si")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X3B, 0XB1 # cmpw " _(VALUE) "(%ecx), %si")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X3B, 0XB2 # cmpw " _(VALUE) "(%edx), %si")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X3B, 0XB7 # cmpw " _(VALUE) "(%edi), %si")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X3B, 0XB6 # cmpw " _(VALUE) "(%esi), %si")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X3B, 0XB5 # cmpw " _(VALUE) "(%ebp), %si")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X3B, 0XB4, 0X24 # cmpw " _(VALUE) "(%esp), %si")\
	CMT_ASM(".long " _(VALUE))

#define CMP_BP_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0XA8 # cmpw " _(VALUE) "(%rax), %bp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BP_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0XAB # cmpw " _(VALUE) "(%rbx), %bp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BP_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0XA9 # cmpw " _(VALUE) "(%rcx), %bp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BP_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0XAA # cmpw " _(VALUE) "(%rdx), %bp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BP_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0XAF # cmpw " _(VALUE) "(%rdi), %bp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BP_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0XAE # cmpw " _(VALUE) "(%rsi), %bp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BP_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0XAD # cmpw " _(VALUE) "(%rbp), %bp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BP_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0XAC, 0X24 # cmpw " _(VALUE) "(%rsp), %bp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BP_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X3B, 0XA8 # cmpw " _(VALUE) "(%r8), %bp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BP_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X3B, 0XA9 # cmpw " _(VALUE) "(%r9), %bp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BP_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X3B, 0XAA # cmpw " _(VALUE) "(%r10), %bp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BP_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X3B, 0XAB # cmpw " _(VALUE) "(%r11), %bp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BP_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X3B, 0XAC, 0X24 # cmpw " _(VALUE) "(%r12), %bp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BP_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X3B, 0XAD # cmpw " _(VALUE) "(%r13), %bp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BP_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X3B, 0XAE # cmpw " _(VALUE) "(%r14), %bp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BP_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X3B, 0XAF # cmpw " _(VALUE) "(%r15), %bp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X3B, 0XA8 # cmpw " _(VALUE) "(%eax), %bp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X3B, 0XAB # cmpw " _(VALUE) "(%ebx), %bp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X3B, 0XA9 # cmpw " _(VALUE) "(%ecx), %bp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X3B, 0XAA # cmpw " _(VALUE) "(%edx), %bp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X3B, 0XAF # cmpw " _(VALUE) "(%edi), %bp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X3B, 0XAE # cmpw " _(VALUE) "(%esi), %bp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X3B, 0XAD # cmpw " _(VALUE) "(%ebp), %bp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X3B, 0XAC, 0X24 # cmpw " _(VALUE) "(%esp), %bp")\
	CMT_ASM(".long " _(VALUE))

#define CMP_SP_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0XA0 # cmpw " _(VALUE) "(%rax), %sp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SP_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0XA3 # cmpw " _(VALUE) "(%rbx), %sp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SP_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0XA1 # cmpw " _(VALUE) "(%rcx), %sp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SP_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0XA2 # cmpw " _(VALUE) "(%rdx), %sp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SP_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0XA7 # cmpw " _(VALUE) "(%rdi), %sp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SP_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0XA6 # cmpw " _(VALUE) "(%rsi), %sp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SP_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0XA5 # cmpw " _(VALUE) "(%rbp), %sp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SP_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X3B, 0XA4, 0X24 # cmpw " _(VALUE) "(%rsp), %sp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SP_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X3B, 0XA0 # cmpw " _(VALUE) "(%r8), %sp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SP_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X3B, 0XA1 # cmpw " _(VALUE) "(%r9), %sp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SP_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X3B, 0XA2 # cmpw " _(VALUE) "(%r10), %sp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SP_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X3B, 0XA3 # cmpw " _(VALUE) "(%r11), %sp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SP_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X3B, 0XA4, 0X24 # cmpw " _(VALUE) "(%r12), %sp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SP_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X3B, 0XA5 # cmpw " _(VALUE) "(%r13), %sp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SP_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X3B, 0XA6 # cmpw " _(VALUE) "(%r14), %sp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SP_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X3B, 0XA7 # cmpw " _(VALUE) "(%r15), %sp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X3B, 0XA0 # cmpw " _(VALUE) "(%eax), %sp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X3B, 0XA3 # cmpw " _(VALUE) "(%ebx), %sp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X3B, 0XA1 # cmpw " _(VALUE) "(%ecx), %sp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X3B, 0XA2 # cmpw " _(VALUE) "(%edx), %sp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X3B, 0XA7 # cmpw " _(VALUE) "(%edi), %sp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X3B, 0XA6 # cmpw " _(VALUE) "(%esi), %sp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X3B, 0XA5 # cmpw " _(VALUE) "(%ebp), %sp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X3B, 0XA4, 0X24 # cmpw " _(VALUE) "(%esp), %sp")\
	CMT_ASM(".long " _(VALUE))

#define CMP_R8W_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X3B, 0X80 # cmpw " _(VALUE) "(%rax), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8W_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X3B, 0X83 # cmpw " _(VALUE) "(%rbx), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8W_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X3B, 0X81 # cmpw " _(VALUE) "(%rcx), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8W_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X3B, 0X82 # cmpw " _(VALUE) "(%rdx), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8W_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X3B, 0X87 # cmpw " _(VALUE) "(%rdi), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8W_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X3B, 0X86 # cmpw " _(VALUE) "(%rsi), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8W_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X3B, 0X85 # cmpw " _(VALUE) "(%rbp), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8W_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X3B, 0X84, 0X24 # cmpw " _(VALUE) "(%rsp), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8W_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X3B, 0X80 # cmpw " _(VALUE) "(%r8), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8W_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X3B, 0X81 # cmpw " _(VALUE) "(%r9), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8W_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X3B, 0X82 # cmpw " _(VALUE) "(%r10), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8W_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X3B, 0X83 # cmpw " _(VALUE) "(%r11), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8W_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X3B, 0X84, 0X24 # cmpw " _(VALUE) "(%r12), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8W_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X3B, 0X85 # cmpw " _(VALUE) "(%r13), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8W_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X3B, 0X86 # cmpw " _(VALUE) "(%r14), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8W_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X3B, 0X87 # cmpw " _(VALUE) "(%r15), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8W_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0X80 # cmpw " _(VALUE) "(%eax), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8W_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0X83 # cmpw " _(VALUE) "(%ebx), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8W_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0X81 # cmpw " _(VALUE) "(%ecx), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8W_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0X82 # cmpw " _(VALUE) "(%edx), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8W_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0X87 # cmpw " _(VALUE) "(%edi), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8W_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0X86 # cmpw " _(VALUE) "(%esi), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8W_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0X85 # cmpw " _(VALUE) "(%ebp), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8W_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0X84, 0X24 # cmpw " _(VALUE) "(%esp), %r8w")\
	CMT_ASM(".long " _(VALUE))

#define CMP_R9W_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X3B, 0X88 # cmpw " _(VALUE) "(%rax), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9W_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X3B, 0X8B # cmpw " _(VALUE) "(%rbx), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9W_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X3B, 0X89 # cmpw " _(VALUE) "(%rcx), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9W_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X3B, 0X8A # cmpw " _(VALUE) "(%rdx), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9W_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X3B, 0X8F # cmpw " _(VALUE) "(%rdi), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9W_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X3B, 0X8E # cmpw " _(VALUE) "(%rsi), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9W_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X3B, 0X8D # cmpw " _(VALUE) "(%rbp), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9W_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X3B, 0X8C, 0X24 # cmpw " _(VALUE) "(%rsp), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9W_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X3B, 0X88 # cmpw " _(VALUE) "(%r8), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9W_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X3B, 0X89 # cmpw " _(VALUE) "(%r9), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9W_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X3B, 0X8A # cmpw " _(VALUE) "(%r10), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9W_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X3B, 0X8B # cmpw " _(VALUE) "(%r11), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9W_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X3B, 0X8C, 0X24 # cmpw " _(VALUE) "(%r12), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9W_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X3B, 0X8D # cmpw " _(VALUE) "(%r13), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9W_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X3B, 0X8E # cmpw " _(VALUE) "(%r14), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9W_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X3B, 0X8F # cmpw " _(VALUE) "(%r15), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9W_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0X88 # cmpw " _(VALUE) "(%eax), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9W_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0X8B # cmpw " _(VALUE) "(%ebx), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9W_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0X89 # cmpw " _(VALUE) "(%ecx), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9W_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0X8A # cmpw " _(VALUE) "(%edx), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9W_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0X8F # cmpw " _(VALUE) "(%edi), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9W_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0X8E # cmpw " _(VALUE) "(%esi), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9W_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0X8D # cmpw " _(VALUE) "(%ebp), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9W_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0X8C, 0X24 # cmpw " _(VALUE) "(%esp), %r9w")\
	CMT_ASM(".long " _(VALUE))

#define CMP_R10W_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X3B, 0X90 # cmpw " _(VALUE) "(%rax), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10W_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X3B, 0X93 # cmpw " _(VALUE) "(%rbx), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10W_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X3B, 0X91 # cmpw " _(VALUE) "(%rcx), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10W_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X3B, 0X92 # cmpw " _(VALUE) "(%rdx), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10W_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X3B, 0X97 # cmpw " _(VALUE) "(%rdi), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10W_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X3B, 0X96 # cmpw " _(VALUE) "(%rsi), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10W_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X3B, 0X95 # cmpw " _(VALUE) "(%rbp), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10W_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X3B, 0X94, 0X24 # cmpw " _(VALUE) "(%rsp), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10W_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X3B, 0X90 # cmpw " _(VALUE) "(%r8), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10W_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X3B, 0X91 # cmpw " _(VALUE) "(%r9), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10W_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X3B, 0X92 # cmpw " _(VALUE) "(%r10), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10W_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X3B, 0X93 # cmpw " _(VALUE) "(%r11), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10W_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X3B, 0X94, 0X24 # cmpw " _(VALUE) "(%r12), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10W_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X3B, 0X95 # cmpw " _(VALUE) "(%r13), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10W_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X3B, 0X96 # cmpw " _(VALUE) "(%r14), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10W_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X3B, 0X97 # cmpw " _(VALUE) "(%r15), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10W_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0X90 # cmpw " _(VALUE) "(%eax), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10W_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0X93 # cmpw " _(VALUE) "(%ebx), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10W_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0X91 # cmpw " _(VALUE) "(%ecx), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10W_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0X92 # cmpw " _(VALUE) "(%edx), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10W_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0X97 # cmpw " _(VALUE) "(%edi), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10W_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0X96 # cmpw " _(VALUE) "(%esi), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10W_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0X95 # cmpw " _(VALUE) "(%ebp), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10W_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0X94, 0X24 # cmpw " _(VALUE) "(%esp), %r10w")\
	CMT_ASM(".long " _(VALUE))

#define CMP_R11W_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X3B, 0X98 # cmpw " _(VALUE) "(%rax), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11W_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X3B, 0X9B # cmpw " _(VALUE) "(%rbx), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11W_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X3B, 0X99 # cmpw " _(VALUE) "(%rcx), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11W_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X3B, 0X9A # cmpw " _(VALUE) "(%rdx), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11W_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X3B, 0X9F # cmpw " _(VALUE) "(%rdi), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11W_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X3B, 0X9E # cmpw " _(VALUE) "(%rsi), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11W_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X3B, 0X9D # cmpw " _(VALUE) "(%rbp), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11W_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X3B, 0X9C, 0X24 # cmpw " _(VALUE) "(%rsp), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11W_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X3B, 0X98 # cmpw " _(VALUE) "(%r8), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11W_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X3B, 0X99 # cmpw " _(VALUE) "(%r9), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11W_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X3B, 0X9A # cmpw " _(VALUE) "(%r10), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11W_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X3B, 0X9B # cmpw " _(VALUE) "(%r11), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11W_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X3B, 0X9C, 0X24 # cmpw " _(VALUE) "(%r12), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11W_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X3B, 0X9D # cmpw " _(VALUE) "(%r13), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11W_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X3B, 0X9E # cmpw " _(VALUE) "(%r14), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11W_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X3B, 0X9F # cmpw " _(VALUE) "(%r15), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11W_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0X98 # cmpw " _(VALUE) "(%eax), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11W_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0X9B # cmpw " _(VALUE) "(%ebx), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11W_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0X99 # cmpw " _(VALUE) "(%ecx), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11W_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0X9A # cmpw " _(VALUE) "(%edx), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11W_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0X9F # cmpw " _(VALUE) "(%edi), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11W_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0X9E # cmpw " _(VALUE) "(%esi), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11W_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0X9D # cmpw " _(VALUE) "(%ebp), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11W_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0X9C, 0X24 # cmpw " _(VALUE) "(%esp), %r11w")\
	CMT_ASM(".long " _(VALUE))

#define CMP_R12W_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X3B, 0XA0 # cmpw " _(VALUE) "(%rax), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12W_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X3B, 0XA3 # cmpw " _(VALUE) "(%rbx), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12W_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X3B, 0XA1 # cmpw " _(VALUE) "(%rcx), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12W_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X3B, 0XA2 # cmpw " _(VALUE) "(%rdx), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12W_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X3B, 0XA7 # cmpw " _(VALUE) "(%rdi), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12W_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X3B, 0XA6 # cmpw " _(VALUE) "(%rsi), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12W_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X3B, 0XA5 # cmpw " _(VALUE) "(%rbp), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12W_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X3B, 0XA4, 0X24 # cmpw " _(VALUE) "(%rsp), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12W_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X3B, 0XA0 # cmpw " _(VALUE) "(%r8), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12W_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X3B, 0XA1 # cmpw " _(VALUE) "(%r9), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12W_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X3B, 0XA2 # cmpw " _(VALUE) "(%r10), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12W_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X3B, 0XA3 # cmpw " _(VALUE) "(%r11), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12W_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X3B, 0XA4, 0X24 # cmpw " _(VALUE) "(%r12), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12W_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X3B, 0XA5 # cmpw " _(VALUE) "(%r13), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12W_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X3B, 0XA6 # cmpw " _(VALUE) "(%r14), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12W_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X3B, 0XA7 # cmpw " _(VALUE) "(%r15), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12W_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0XA0 # cmpw " _(VALUE) "(%eax), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12W_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0XA3 # cmpw " _(VALUE) "(%ebx), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12W_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0XA1 # cmpw " _(VALUE) "(%ecx), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12W_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0XA2 # cmpw " _(VALUE) "(%edx), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12W_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0XA7 # cmpw " _(VALUE) "(%edi), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12W_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0XA6 # cmpw " _(VALUE) "(%esi), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12W_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0XA5 # cmpw " _(VALUE) "(%ebp), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12W_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0XA4, 0X24 # cmpw " _(VALUE) "(%esp), %r12w")\
	CMT_ASM(".long " _(VALUE))

#define CMP_R13W_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X3B, 0XA8 # cmpw " _(VALUE) "(%rax), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13W_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X3B, 0XAB # cmpw " _(VALUE) "(%rbx), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13W_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X3B, 0XA9 # cmpw " _(VALUE) "(%rcx), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13W_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X3B, 0XAA # cmpw " _(VALUE) "(%rdx), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13W_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X3B, 0XAF # cmpw " _(VALUE) "(%rdi), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13W_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X3B, 0XAE # cmpw " _(VALUE) "(%rsi), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13W_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X3B, 0XAD # cmpw " _(VALUE) "(%rbp), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13W_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X3B, 0XAC, 0X24 # cmpw " _(VALUE) "(%rsp), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13W_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X3B, 0XA8 # cmpw " _(VALUE) "(%r8), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13W_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X3B, 0XA9 # cmpw " _(VALUE) "(%r9), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13W_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X3B, 0XAA # cmpw " _(VALUE) "(%r10), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13W_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X3B, 0XAB # cmpw " _(VALUE) "(%r11), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13W_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X3B, 0XAC, 0X24 # cmpw " _(VALUE) "(%r12), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13W_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X3B, 0XAD # cmpw " _(VALUE) "(%r13), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13W_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X3B, 0XAE # cmpw " _(VALUE) "(%r14), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13W_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X3B, 0XAF # cmpw " _(VALUE) "(%r15), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13W_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0XA8 # cmpw " _(VALUE) "(%eax), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13W_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0XAB # cmpw " _(VALUE) "(%ebx), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13W_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0XA9 # cmpw " _(VALUE) "(%ecx), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13W_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0XAA # cmpw " _(VALUE) "(%edx), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13W_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0XAF # cmpw " _(VALUE) "(%edi), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13W_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0XAE # cmpw " _(VALUE) "(%esi), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13W_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0XAD # cmpw " _(VALUE) "(%ebp), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13W_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0XAC, 0X24 # cmpw " _(VALUE) "(%esp), %r13w")\
	CMT_ASM(".long " _(VALUE))

#define CMP_R14W_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X3B, 0XB0 # cmpw " _(VALUE) "(%rax), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14W_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X3B, 0XB3 # cmpw " _(VALUE) "(%rbx), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14W_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X3B, 0XB1 # cmpw " _(VALUE) "(%rcx), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14W_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X3B, 0XB2 # cmpw " _(VALUE) "(%rdx), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14W_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X3B, 0XB7 # cmpw " _(VALUE) "(%rdi), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14W_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X3B, 0XB6 # cmpw " _(VALUE) "(%rsi), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14W_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X3B, 0XB5 # cmpw " _(VALUE) "(%rbp), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14W_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X3B, 0XB4, 0X24 # cmpw " _(VALUE) "(%rsp), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14W_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X3B, 0XB0 # cmpw " _(VALUE) "(%r8), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14W_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X3B, 0XB1 # cmpw " _(VALUE) "(%r9), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14W_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X3B, 0XB2 # cmpw " _(VALUE) "(%r10), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14W_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X3B, 0XB3 # cmpw " _(VALUE) "(%r11), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14W_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X3B, 0XB4, 0X24 # cmpw " _(VALUE) "(%r12), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14W_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X3B, 0XB5 # cmpw " _(VALUE) "(%r13), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14W_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X3B, 0XB6 # cmpw " _(VALUE) "(%r14), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14W_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X3B, 0XB7 # cmpw " _(VALUE) "(%r15), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14W_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0XB0 # cmpw " _(VALUE) "(%eax), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14W_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0XB3 # cmpw " _(VALUE) "(%ebx), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14W_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0XB1 # cmpw " _(VALUE) "(%ecx), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14W_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0XB2 # cmpw " _(VALUE) "(%edx), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14W_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0XB7 # cmpw " _(VALUE) "(%edi), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14W_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0XB6 # cmpw " _(VALUE) "(%esi), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14W_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0XB5 # cmpw " _(VALUE) "(%ebp), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14W_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0XB4, 0X24 # cmpw " _(VALUE) "(%esp), %r14w")\
	CMT_ASM(".long " _(VALUE))

#define CMP_R15W_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X3B, 0XB8 # cmpw " _(VALUE) "(%rax), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15W_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X3B, 0XBB # cmpw " _(VALUE) "(%rbx), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15W_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X3B, 0XB9 # cmpw " _(VALUE) "(%rcx), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15W_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X3B, 0XBA # cmpw " _(VALUE) "(%rdx), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15W_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X3B, 0XBF # cmpw " _(VALUE) "(%rdi), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15W_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X3B, 0XBE # cmpw " _(VALUE) "(%rsi), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15W_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X3B, 0XBD # cmpw " _(VALUE) "(%rbp), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15W_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X3B, 0XBC, 0X24 # cmpw " _(VALUE) "(%rsp), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15W_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X3B, 0XB8 # cmpw " _(VALUE) "(%r8), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15W_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X3B, 0XB9 # cmpw " _(VALUE) "(%r9), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15W_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X3B, 0XBA # cmpw " _(VALUE) "(%r10), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15W_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X3B, 0XBB # cmpw " _(VALUE) "(%r11), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15W_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X3B, 0XBC, 0X24 # cmpw " _(VALUE) "(%r12), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15W_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X3B, 0XBD # cmpw " _(VALUE) "(%r13), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15W_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X3B, 0XBE # cmpw " _(VALUE) "(%r14), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15W_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X3B, 0XBF # cmpw " _(VALUE) "(%r15), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15W_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0XB8 # cmpw " _(VALUE) "(%eax), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15W_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0XBB # cmpw " _(VALUE) "(%ebx), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15W_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0XB9 # cmpw " _(VALUE) "(%ecx), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15W_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0XBA # cmpw " _(VALUE) "(%edx), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15W_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0XBF # cmpw " _(VALUE) "(%edi), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15W_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0XBE # cmpw " _(VALUE) "(%esi), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15W_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0XBD # cmpw " _(VALUE) "(%ebp), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15W_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X3B, 0XBC, 0X24 # cmpw " _(VALUE) "(%esp), %r15w")\
	CMT_ASM(".long " _(VALUE))

#define CMP_AX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0X80 # cmpw %ax, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0X83 # cmpw %ax, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0X81 # cmpw %ax, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0X82 # cmpw %ax, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0X87 # cmpw %ax, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0X86 # cmpw %ax, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0X85 # cmpw %ax, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0X84, 0X24 # cmpw %ax, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X39, 0X80 # cmpw %ax, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X39, 0X81 # cmpw %ax, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X39, 0X82 # cmpw %ax, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X39, 0X83 # cmpw %ax, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X39, 0X84, 0X24 # cmpw %ax, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X39, 0X85 # cmpw %ax, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X39, 0X86 # cmpw %ax, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X39, 0X87 # cmpw %ax, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X39, 0X80 # cmpw %ax, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X39, 0X83 # cmpw %ax, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X39, 0X81 # cmpw %ax, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X39, 0X82 # cmpw %ax, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X39, 0X87 # cmpw %ax, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X39, 0X86 # cmpw %ax, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X39, 0X85 # cmpw %ax, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_AX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X39, 0X84, 0X24 # cmpw %ax, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define CMP_BX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0X98 # cmpw %bx, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0X9B # cmpw %bx, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0X99 # cmpw %bx, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0X9A # cmpw %bx, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0X9F # cmpw %bx, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0X9E # cmpw %bx, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0X9D # cmpw %bx, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0X9C, 0X24 # cmpw %bx, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X39, 0X98 # cmpw %bx, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X39, 0X99 # cmpw %bx, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X39, 0X9A # cmpw %bx, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X39, 0X9B # cmpw %bx, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X39, 0X9C, 0X24 # cmpw %bx, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X39, 0X9D # cmpw %bx, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X39, 0X9E # cmpw %bx, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X39, 0X9F # cmpw %bx, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X39, 0X98 # cmpw %bx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X39, 0X9B # cmpw %bx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X39, 0X99 # cmpw %bx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X39, 0X9A # cmpw %bx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X39, 0X9F # cmpw %bx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X39, 0X9E # cmpw %bx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X39, 0X9D # cmpw %bx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X39, 0X9C, 0X24 # cmpw %bx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define CMP_CX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0X88 # cmpw %cx, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0X8B # cmpw %cx, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0X89 # cmpw %cx, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0X8A # cmpw %cx, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0X8F # cmpw %cx, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0X8E # cmpw %cx, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0X8D # cmpw %cx, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0X8C, 0X24 # cmpw %cx, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X39, 0X88 # cmpw %cx, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X39, 0X89 # cmpw %cx, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X39, 0X8A # cmpw %cx, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X39, 0X8B # cmpw %cx, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X39, 0X8C, 0X24 # cmpw %cx, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X39, 0X8D # cmpw %cx, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X39, 0X8E # cmpw %cx, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X39, 0X8F # cmpw %cx, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X39, 0X88 # cmpw %cx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X39, 0X8B # cmpw %cx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X39, 0X89 # cmpw %cx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X39, 0X8A # cmpw %cx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X39, 0X8F # cmpw %cx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X39, 0X8E # cmpw %cx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X39, 0X8D # cmpw %cx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_CX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X39, 0X8C, 0X24 # cmpw %cx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define CMP_DX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0X90 # cmpw %dx, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0X93 # cmpw %dx, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0X91 # cmpw %dx, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0X92 # cmpw %dx, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0X97 # cmpw %dx, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0X96 # cmpw %dx, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0X95 # cmpw %dx, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0X94, 0X24 # cmpw %dx, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X39, 0X90 # cmpw %dx, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X39, 0X91 # cmpw %dx, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X39, 0X92 # cmpw %dx, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X39, 0X93 # cmpw %dx, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X39, 0X94, 0X24 # cmpw %dx, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X39, 0X95 # cmpw %dx, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X39, 0X96 # cmpw %dx, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X39, 0X97 # cmpw %dx, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X39, 0X90 # cmpw %dx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X39, 0X93 # cmpw %dx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X39, 0X91 # cmpw %dx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X39, 0X92 # cmpw %dx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X39, 0X97 # cmpw %dx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X39, 0X96 # cmpw %dx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X39, 0X95 # cmpw %dx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X39, 0X94, 0X24 # cmpw %dx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define CMP_DI_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0XB8 # cmpw %di, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DI_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0XBB # cmpw %di, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DI_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0XB9 # cmpw %di, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DI_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0XBA # cmpw %di, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DI_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0XBF # cmpw %di, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DI_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0XBE # cmpw %di, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DI_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0XBD # cmpw %di, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DI_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0XBC, 0X24 # cmpw %di, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DI_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X39, 0XB8 # cmpw %di, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DI_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X39, 0XB9 # cmpw %di, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DI_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X39, 0XBA # cmpw %di, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DI_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X39, 0XBB # cmpw %di, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DI_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X39, 0XBC, 0X24 # cmpw %di, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DI_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X39, 0XBD # cmpw %di, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DI_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X39, 0XBE # cmpw %di, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DI_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X39, 0XBF # cmpw %di, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X39, 0XB8 # cmpw %di, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X39, 0XBB # cmpw %di, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X39, 0XB9 # cmpw %di, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X39, 0XBA # cmpw %di, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X39, 0XBF # cmpw %di, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X39, 0XBE # cmpw %di, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X39, 0XBD # cmpw %di, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_DI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X39, 0XBC, 0X24 # cmpw %di, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define CMP_SI_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0XB0 # cmpw %si, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SI_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0XB3 # cmpw %si, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SI_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0XB1 # cmpw %si, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SI_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0XB2 # cmpw %si, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SI_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0XB7 # cmpw %si, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SI_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0XB6 # cmpw %si, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SI_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0XB5 # cmpw %si, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SI_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0XB4, 0X24 # cmpw %si, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SI_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X39, 0XB0 # cmpw %si, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SI_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X39, 0XB1 # cmpw %si, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SI_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X39, 0XB2 # cmpw %si, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SI_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X39, 0XB3 # cmpw %si, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SI_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X39, 0XB4, 0X24 # cmpw %si, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SI_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X39, 0XB5 # cmpw %si, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SI_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X39, 0XB6 # cmpw %si, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SI_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X39, 0XB7 # cmpw %si, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X39, 0XB0 # cmpw %si, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X39, 0XB3 # cmpw %si, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X39, 0XB1 # cmpw %si, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X39, 0XB2 # cmpw %si, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X39, 0XB7 # cmpw %si, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X39, 0XB6 # cmpw %si, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X39, 0XB5 # cmpw %si, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X39, 0XB4, 0X24 # cmpw %si, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define CMP_BP_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0XA8 # cmpw %bp, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BP_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0XAB # cmpw %bp, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BP_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0XA9 # cmpw %bp, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BP_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0XAA # cmpw %bp, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BP_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0XAF # cmpw %bp, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BP_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0XAE # cmpw %bp, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BP_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0XAD # cmpw %bp, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BP_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0XAC, 0X24 # cmpw %bp, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BP_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X39, 0XA8 # cmpw %bp, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BP_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X39, 0XA9 # cmpw %bp, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BP_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X39, 0XAA # cmpw %bp, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BP_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X39, 0XAB # cmpw %bp, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BP_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X39, 0XAC, 0X24 # cmpw %bp, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BP_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X39, 0XAD # cmpw %bp, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BP_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X39, 0XAE # cmpw %bp, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BP_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X39, 0XAF # cmpw %bp, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X39, 0XA8 # cmpw %bp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X39, 0XAB # cmpw %bp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X39, 0XA9 # cmpw %bp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X39, 0XAA # cmpw %bp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X39, 0XAF # cmpw %bp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X39, 0XAE # cmpw %bp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X39, 0XAD # cmpw %bp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_BP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X39, 0XAC, 0X24 # cmpw %bp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define CMP_SP_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0XA0 # cmpw %sp, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SP_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0XA3 # cmpw %sp, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SP_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0XA1 # cmpw %sp, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SP_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0XA2 # cmpw %sp, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SP_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0XA7 # cmpw %sp, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SP_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0XA6 # cmpw %sp, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SP_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0XA5 # cmpw %sp, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SP_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X39, 0XA4, 0X24 # cmpw %sp, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SP_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X39, 0XA0 # cmpw %sp, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SP_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X39, 0XA1 # cmpw %sp, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SP_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X39, 0XA2 # cmpw %sp, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SP_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X39, 0XA3 # cmpw %sp, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SP_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X39, 0XA4, 0X24 # cmpw %sp, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SP_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X39, 0XA5 # cmpw %sp, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SP_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X39, 0XA6 # cmpw %sp, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SP_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X39, 0XA7 # cmpw %sp, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X39, 0XA0 # cmpw %sp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X39, 0XA3 # cmpw %sp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X39, 0XA1 # cmpw %sp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X39, 0XA2 # cmpw %sp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X39, 0XA7 # cmpw %sp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X39, 0XA6 # cmpw %sp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X39, 0XA5 # cmpw %sp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_SP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X39, 0XA4, 0X24 # cmpw %sp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define CMP_R8W_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X39, 0X80 # cmpw %r8w, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8W_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X39, 0X83 # cmpw %r8w, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8W_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X39, 0X81 # cmpw %r8w, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8W_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X39, 0X82 # cmpw %r8w, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8W_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X39, 0X87 # cmpw %r8w, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8W_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X39, 0X86 # cmpw %r8w, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8W_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X39, 0X85 # cmpw %r8w, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8W_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X39, 0X84, 0X24 # cmpw %r8w, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8W_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X39, 0X80 # cmpw %r8w, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8W_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X39, 0X81 # cmpw %r8w, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8W_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X39, 0X82 # cmpw %r8w, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8W_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X39, 0X83 # cmpw %r8w, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8W_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X39, 0X84, 0X24 # cmpw %r8w, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8W_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X39, 0X85 # cmpw %r8w, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8W_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X39, 0X86 # cmpw %r8w, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8W_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X39, 0X87 # cmpw %r8w, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8W_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0X80 # cmpw %r8w, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8W_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0X83 # cmpw %r8w, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8W_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0X81 # cmpw %r8w, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8W_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0X82 # cmpw %r8w, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8W_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0X87 # cmpw %r8w, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8W_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0X86 # cmpw %r8w, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8W_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0X85 # cmpw %r8w, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8W_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0X84, 0X24 # cmpw %r8w, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define CMP_R9W_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X39, 0X88 # cmpw %r9w, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9W_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X39, 0X8B # cmpw %r9w, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9W_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X39, 0X89 # cmpw %r9w, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9W_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X39, 0X8A # cmpw %r9w, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9W_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X39, 0X8F # cmpw %r9w, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9W_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X39, 0X8E # cmpw %r9w, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9W_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X39, 0X8D # cmpw %r9w, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9W_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X39, 0X8C, 0X24 # cmpw %r9w, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9W_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X39, 0X88 # cmpw %r9w, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9W_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X39, 0X89 # cmpw %r9w, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9W_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X39, 0X8A # cmpw %r9w, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9W_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X39, 0X8B # cmpw %r9w, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9W_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X39, 0X8C, 0X24 # cmpw %r9w, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9W_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X39, 0X8D # cmpw %r9w, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9W_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X39, 0X8E # cmpw %r9w, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9W_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X39, 0X8F # cmpw %r9w, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9W_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0X88 # cmpw %r9w, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9W_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0X8B # cmpw %r9w, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9W_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0X89 # cmpw %r9w, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9W_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0X8A # cmpw %r9w, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9W_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0X8F # cmpw %r9w, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9W_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0X8E # cmpw %r9w, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9W_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0X8D # cmpw %r9w, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9W_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0X8C, 0X24 # cmpw %r9w, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define CMP_R10W_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X39, 0X90 # cmpw %r10w, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10W_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X39, 0X93 # cmpw %r10w, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10W_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X39, 0X91 # cmpw %r10w, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10W_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X39, 0X92 # cmpw %r10w, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10W_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X39, 0X97 # cmpw %r10w, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10W_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X39, 0X96 # cmpw %r10w, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10W_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X39, 0X95 # cmpw %r10w, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10W_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X39, 0X94, 0X24 # cmpw %r10w, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10W_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X39, 0X90 # cmpw %r10w, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10W_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X39, 0X91 # cmpw %r10w, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10W_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X39, 0X92 # cmpw %r10w, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10W_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X39, 0X93 # cmpw %r10w, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10W_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X39, 0X94, 0X24 # cmpw %r10w, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10W_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X39, 0X95 # cmpw %r10w, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10W_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X39, 0X96 # cmpw %r10w, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10W_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X39, 0X97 # cmpw %r10w, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10W_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0X90 # cmpw %r10w, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10W_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0X93 # cmpw %r10w, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10W_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0X91 # cmpw %r10w, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10W_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0X92 # cmpw %r10w, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10W_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0X97 # cmpw %r10w, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10W_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0X96 # cmpw %r10w, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10W_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0X95 # cmpw %r10w, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10W_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0X94, 0X24 # cmpw %r10w, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define CMP_R11W_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X39, 0X98 # cmpw %r11w, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11W_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X39, 0X9B # cmpw %r11w, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11W_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X39, 0X99 # cmpw %r11w, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11W_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X39, 0X9A # cmpw %r11w, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11W_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X39, 0X9F # cmpw %r11w, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11W_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X39, 0X9E # cmpw %r11w, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11W_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X39, 0X9D # cmpw %r11w, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11W_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X39, 0X9C, 0X24 # cmpw %r11w, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11W_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X39, 0X98 # cmpw %r11w, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11W_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X39, 0X99 # cmpw %r11w, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11W_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X39, 0X9A # cmpw %r11w, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11W_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X39, 0X9B # cmpw %r11w, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11W_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X39, 0X9C, 0X24 # cmpw %r11w, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11W_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X39, 0X9D # cmpw %r11w, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11W_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X39, 0X9E # cmpw %r11w, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11W_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X39, 0X9F # cmpw %r11w, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11W_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0X98 # cmpw %r11w, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11W_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0X9B # cmpw %r11w, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11W_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0X99 # cmpw %r11w, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11W_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0X9A # cmpw %r11w, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11W_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0X9F # cmpw %r11w, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11W_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0X9E # cmpw %r11w, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11W_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0X9D # cmpw %r11w, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11W_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0X9C, 0X24 # cmpw %r11w, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define CMP_R12W_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X39, 0XA0 # cmpw %r12w, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12W_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X39, 0XA3 # cmpw %r12w, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12W_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X39, 0XA1 # cmpw %r12w, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12W_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X39, 0XA2 # cmpw %r12w, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12W_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X39, 0XA7 # cmpw %r12w, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12W_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X39, 0XA6 # cmpw %r12w, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12W_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X39, 0XA5 # cmpw %r12w, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12W_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X39, 0XA4, 0X24 # cmpw %r12w, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12W_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X39, 0XA0 # cmpw %r12w, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12W_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X39, 0XA1 # cmpw %r12w, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12W_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X39, 0XA2 # cmpw %r12w, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12W_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X39, 0XA3 # cmpw %r12w, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12W_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X39, 0XA4, 0X24 # cmpw %r12w, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12W_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X39, 0XA5 # cmpw %r12w, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12W_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X39, 0XA6 # cmpw %r12w, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12W_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X39, 0XA7 # cmpw %r12w, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12W_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0XA0 # cmpw %r12w, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12W_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0XA3 # cmpw %r12w, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12W_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0XA1 # cmpw %r12w, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12W_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0XA2 # cmpw %r12w, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12W_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0XA7 # cmpw %r12w, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12W_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0XA6 # cmpw %r12w, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12W_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0XA5 # cmpw %r12w, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12W_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0XA4, 0X24 # cmpw %r12w, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define CMP_R13W_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X39, 0XA8 # cmpw %r13w, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13W_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X39, 0XAB # cmpw %r13w, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13W_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X39, 0XA9 # cmpw %r13w, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13W_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X39, 0XAA # cmpw %r13w, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13W_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X39, 0XAF # cmpw %r13w, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13W_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X39, 0XAE # cmpw %r13w, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13W_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X39, 0XAD # cmpw %r13w, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13W_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X39, 0XAC, 0X24 # cmpw %r13w, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13W_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X39, 0XA8 # cmpw %r13w, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13W_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X39, 0XA9 # cmpw %r13w, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13W_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X39, 0XAA # cmpw %r13w, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13W_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X39, 0XAB # cmpw %r13w, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13W_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X39, 0XAC, 0X24 # cmpw %r13w, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13W_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X39, 0XAD # cmpw %r13w, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13W_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X39, 0XAE # cmpw %r13w, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13W_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X39, 0XAF # cmpw %r13w, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13W_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0XA8 # cmpw %r13w, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13W_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0XAB # cmpw %r13w, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13W_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0XA9 # cmpw %r13w, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13W_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0XAA # cmpw %r13w, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13W_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0XAF # cmpw %r13w, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13W_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0XAE # cmpw %r13w, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13W_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0XAD # cmpw %r13w, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13W_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0XAC, 0X24 # cmpw %r13w, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define CMP_R14W_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X39, 0XB0 # cmpw %r14w, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14W_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X39, 0XB3 # cmpw %r14w, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14W_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X39, 0XB1 # cmpw %r14w, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14W_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X39, 0XB2 # cmpw %r14w, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14W_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X39, 0XB7 # cmpw %r14w, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14W_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X39, 0XB6 # cmpw %r14w, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14W_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X39, 0XB5 # cmpw %r14w, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14W_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X39, 0XB4, 0X24 # cmpw %r14w, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14W_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X39, 0XB0 # cmpw %r14w, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14W_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X39, 0XB1 # cmpw %r14w, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14W_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X39, 0XB2 # cmpw %r14w, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14W_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X39, 0XB3 # cmpw %r14w, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14W_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X39, 0XB4, 0X24 # cmpw %r14w, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14W_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X39, 0XB5 # cmpw %r14w, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14W_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X39, 0XB6 # cmpw %r14w, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14W_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X39, 0XB7 # cmpw %r14w, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14W_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0XB0 # cmpw %r14w, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14W_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0XB3 # cmpw %r14w, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14W_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0XB1 # cmpw %r14w, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14W_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0XB2 # cmpw %r14w, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14W_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0XB7 # cmpw %r14w, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14W_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0XB6 # cmpw %r14w, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14W_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0XB5 # cmpw %r14w, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14W_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0XB4, 0X24 # cmpw %r14w, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define CMP_R15W_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X39, 0XB8 # cmpw %r15w, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15W_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X39, 0XBB # cmpw %r15w, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15W_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X39, 0XB9 # cmpw %r15w, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15W_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X39, 0XBA # cmpw %r15w, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15W_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X39, 0XBF # cmpw %r15w, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15W_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X39, 0XBE # cmpw %r15w, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15W_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X39, 0XBD # cmpw %r15w, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15W_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X39, 0XBC, 0X24 # cmpw %r15w, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15W_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X39, 0XB8 # cmpw %r15w, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15W_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X39, 0XB9 # cmpw %r15w, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15W_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X39, 0XBA # cmpw %r15w, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15W_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X39, 0XBB # cmpw %r15w, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15W_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X39, 0XBC, 0X24 # cmpw %r15w, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15W_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X39, 0XBD # cmpw %r15w, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15W_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X39, 0XBE # cmpw %r15w, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15W_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X39, 0XBF # cmpw %r15w, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15W_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0XB8 # cmpw %r15w, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15W_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0XBB # cmpw %r15w, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15W_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0XB9 # cmpw %r15w, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15W_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0XBA # cmpw %r15w, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15W_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0XBF # cmpw %r15w, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15W_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0XBE # cmpw %r15w, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15W_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0XBD # cmpw %r15w, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15W_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X39, 0XBC, 0X24 # cmpw %r15w, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#endif /* __SYSTEM_64_BIT__ */
/* ************************* [^] 16-BIT MEMORY [^] ************************** */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
