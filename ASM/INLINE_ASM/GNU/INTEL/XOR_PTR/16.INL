#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************** [v] 8-BIT MEMORY [v] ************************** */
#ifdef __SYSTEM_16_BIT__
#define XOR_AL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X32, 0X06 # xorb (" _(VALUE) "), %al")\
	CMT_ASM(".short " _(VALUE))
#define XOR_BL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X32, 0X1E # xorb (" _(VALUE) "), %bl")\
	CMT_ASM(".short " _(VALUE))
#define XOR_CL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X32, 0X0E # xorb (" _(VALUE) "), %cl")\
	CMT_ASM(".short " _(VALUE))
#define XOR_DL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X32, 0X16 # xorb (" _(VALUE) "), %dl")\
	CMT_ASM(".short " _(VALUE))

#define XOR_AL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X30, 0X06 # xorb %al, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define XOR_BL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X30, 0X1E # xorb %bl, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define XOR_CL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X30, 0X0E # xorb %cl, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define XOR_DL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X30, 0X16 # xorb %dl, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))

#define XOR_AL_FROM_PTR_BX CMT_ASM(".byte 0X32, 0X07 # xorb (%bx), %al")
#define XOR_AL_FROM_PTR_BP CMT_ASM(".byte 0X32, 0X46, 0X00 # xorb (%bp), %al")
#define XOR_AL_FROM_PTR_SI CMT_ASM(".byte 0X32, 0X04 # xorb (%si), %al")
#define XOR_AL_FROM_PTR_DI CMT_ASM(".byte 0X32, 0X05 # xorb (%di), %al")

#define XOR_BL_FROM_PTR_BX CMT_ASM(".byte 0X32, 0X1F # xorb (%bx), %bl")
#define XOR_BL_FROM_PTR_BP CMT_ASM(".byte 0X32, 0X5E, 0X00 # xorb (%bp), %bl")
#define XOR_BL_FROM_PTR_SI CMT_ASM(".byte 0X32, 0X1C # xorb (%si), %bl")
#define XOR_BL_FROM_PTR_DI CMT_ASM(".byte 0X32, 0X1D # xorb (%di), %bl")

#define XOR_CL_FROM_PTR_BX CMT_ASM(".byte 0X32, 0X0F # xorb (%bx), %cl")
#define XOR_CL_FROM_PTR_BP CMT_ASM(".byte 0X32, 0X4E, 0X00 # xorb (%bp), %cl")
#define XOR_CL_FROM_PTR_SI CMT_ASM(".byte 0X32, 0X0C # xorb (%si), %cl")
#define XOR_CL_FROM_PTR_DI CMT_ASM(".byte 0X32, 0X0D # xorb (%di), %cl")

#define XOR_DL_FROM_PTR_BX CMT_ASM(".byte 0X32, 0X17 # xorb (%bx), %dl")
#define XOR_DL_FROM_PTR_BP CMT_ASM(".byte 0X32, 0X56, 0X00 # xorb (%bp), %dl")
#define XOR_DL_FROM_PTR_SI CMT_ASM(".byte 0X32, 0X14 # xorb (%si), %dl")
#define XOR_DL_FROM_PTR_DI CMT_ASM(".byte 0X32, 0X15 # xorb (%di), %dl")

#define XOR_AL_TO_PTR_BX CMT_ASM(".byte 0X30, 0X07 # xorb %al, (%bx)")
#define XOR_AL_TO_PTR_BP CMT_ASM(".byte 0X30, 0X46, 0X00 # xorb %al, (%bp)")
#define XOR_AL_TO_PTR_SI CMT_ASM(".byte 0X30, 0X04 # xorb %al, (%si)")
#define XOR_AL_TO_PTR_DI CMT_ASM(".byte 0X30, 0X05 # xorb %al, (%di)")

#define XOR_BL_TO_PTR_BX CMT_ASM(".byte 0X30, 0X1F # xorb %bl, (%bx)")
#define XOR_BL_TO_PTR_BP CMT_ASM(".byte 0X30, 0X5E, 0X00 # xorb %bl, (%bp)")
#define XOR_BL_TO_PTR_SI CMT_ASM(".byte 0X30, 0X1C # xorb %bl, (%si)")
#define XOR_BL_TO_PTR_DI CMT_ASM(".byte 0X30, 0X1D # xorb %bl, (%di)")

#define XOR_CL_TO_PTR_BX CMT_ASM(".byte 0X30, 0X0F # xorb %cl, (%bx)")
#define XOR_CL_TO_PTR_BP CMT_ASM(".byte 0X30, 0X4E, 0X00 # xorb %cl, (%bp)")
#define XOR_CL_TO_PTR_SI CMT_ASM(".byte 0X30, 0X0C # xorb %cl, (%si)")
#define XOR_CL_TO_PTR_DI CMT_ASM(".byte 0X30, 0X0D # xorb %cl, (%di)")

#define XOR_DL_TO_PTR_BX CMT_ASM(".byte 0X30, 0X17 # xorb %dl, (%bx)")
#define XOR_DL_TO_PTR_BP CMT_ASM(".byte 0X30, 0X56, 0X00 # xorb %dl, (%bp)")
#define XOR_DL_TO_PTR_SI CMT_ASM(".byte 0X30, 0X14 # xorb %dl, (%si)")
#define XOR_DL_TO_PTR_DI CMT_ASM(".byte 0X30, 0X15 # xorb %dl, (%di)")

#define XOR_AL_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X32, 0X87 # xorb " _(VALUE) "(%bx), %al")\
	CMT_ASM(".short " _(VALUE))
#define XOR_AL_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X32, 0X86 # xorb " _(VALUE) "(%bp), %al")\
	CMT_ASM(".short " _(VALUE))
#define XOR_AL_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X32, 0X84 # xorb " _(VALUE) "(%si), %al")\
	CMT_ASM(".short " _(VALUE))
#define XOR_AL_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X32, 0X85 # xorb " _(VALUE) "(%di), %al")\
	CMT_ASM(".short " _(VALUE))

#define XOR_BL_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X32, 0X9F # xorb " _(VALUE) "(%bx), %bl")\
	CMT_ASM(".short " _(VALUE))
#define XOR_BL_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X32, 0X9E # xorb " _(VALUE) "(%bp), %bl")\
	CMT_ASM(".short " _(VALUE))
#define XOR_BL_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X32, 0X9C # xorb " _(VALUE) "(%si), %bl")\
	CMT_ASM(".short " _(VALUE))
#define XOR_BL_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X32, 0X9D # xorb " _(VALUE) "(%di), %bl")\
	CMT_ASM(".short " _(VALUE))

#define XOR_CL_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X32, 0X8F # xorb " _(VALUE) "(%bx), %cl")\
	CMT_ASM(".short " _(VALUE))
#define XOR_CL_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X32, 0X8E # xorb " _(VALUE) "(%bp), %cl")\
	CMT_ASM(".short " _(VALUE))
#define XOR_CL_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X32, 0X8C # xorb " _(VALUE) "(%si), %cl")\
	CMT_ASM(".short " _(VALUE))
#define XOR_CL_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X32, 0X8D # xorb " _(VALUE) "(%di), %cl")\
	CMT_ASM(".short " _(VALUE))

#define XOR_DL_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X32, 0X97 # xorb " _(VALUE) "(%bx), %dl")\
	CMT_ASM(".short " _(VALUE))
#define XOR_DL_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X32, 0X96 # xorb " _(VALUE) "(%bp), %dl")\
	CMT_ASM(".short " _(VALUE))
#define XOR_DL_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X32, 0X94 # xorb " _(VALUE) "(%si), %dl")\
	CMT_ASM(".short " _(VALUE))
#define XOR_DL_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X32, 0X95 # xorb " _(VALUE) "(%di), %dl")\
	CMT_ASM(".short " _(VALUE))

#define XOR_AL_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X30, 0X87 # xorb %al, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define XOR_AL_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X30, 0X86 # xorb %al, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define XOR_AL_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X30, 0X84 # xorb %al, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define XOR_AL_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X30, 0X85 # xorb %al, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define XOR_BL_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X30, 0X9F # xorb %bl, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define XOR_BL_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X30, 0X9E # xorb %bl, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define XOR_BL_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X30, 0X9C # xorb %bl, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define XOR_BL_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X30, 0X9D # xorb %bl, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define XOR_CL_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X30, 0X8F # xorb %cl, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define XOR_CL_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X30, 0X8E # xorb %cl, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define XOR_CL_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X30, 0X8C # xorb %cl, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define XOR_CL_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X30, 0X8D # xorb %cl, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define XOR_DL_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X30, 0X97 # xorb %dl, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define XOR_DL_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X30, 0X96 # xorb %dl, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define XOR_DL_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X30, 0X94 # xorb %dl, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define XOR_DL_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X30, 0X95 # xorb %dl, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))
#endif /* __SYSTEM_16_BIT__ */

#ifdef __SYSTEM_32_BIT__
#define XOR_AL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X32, 0X05 # xorb (" _(VALUE) "), %al")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X32, 0X1D # xorb (" _(VALUE) "), %bl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X32, 0X0D # xorb (" _(VALUE) "), %cl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X32, 0X15 # xorb (" _(VALUE) "), %dl")\
	CMT_ASM(".long " _(VALUE))

#define XOR_AL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X30, 0X05 # xorb %al, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X30, 0X1D # xorb %bl, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X30, 0X0D # xorb %cl, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X30, 0X15 # xorb %dl, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))

#define XOR_AL_FROM_PTR_EAX CMT_ASM(".byte 0X32, 0X00 # xorb (%eax), %al")
#define XOR_AL_FROM_PTR_EBX CMT_ASM(".byte 0X32, 0X03 # xorb (%ebx), %al")
#define XOR_AL_FROM_PTR_ECX CMT_ASM(".byte 0X32, 0X01 # xorb (%ecx), %al")
#define XOR_AL_FROM_PTR_EDX CMT_ASM(".byte 0X32, 0X02 # xorb (%edx), %al")
#define XOR_AL_FROM_PTR_EDI CMT_ASM(".byte 0X32, 0X07 # xorb (%edi), %al")
#define XOR_AL_FROM_PTR_ESI CMT_ASM(".byte 0X32, 0X06 # xorb (%esi), %al")
#define XOR_AL_FROM_PTR_EBP CMT_ASM(".byte 0X32, 0X45, 0X00 # xorb (%ebp), %al")
#define XOR_AL_FROM_PTR_ESP CMT_ASM(".byte 0X32, 0X04, 0X24 # xorb (%esp), %al")
#define XOR_AL_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X32, 0X07 # xorb (%bx), %al")
#define XOR_AL_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X32, 0X46, 0X00 # xorb (%bp), %al")
#define XOR_AL_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X32, 0X04 # xorb (%si), %al")
#define XOR_AL_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X32, 0X05 # xorb (%di), %al")

#define XOR_BL_FROM_PTR_EAX CMT_ASM(".byte 0X32, 0X18 # xorb (%eax), %bl")
#define XOR_BL_FROM_PTR_EBX CMT_ASM(".byte 0X32, 0X1B # xorb (%ebx), %bl")
#define XOR_BL_FROM_PTR_ECX CMT_ASM(".byte 0X32, 0X19 # xorb (%ecx), %bl")
#define XOR_BL_FROM_PTR_EDX CMT_ASM(".byte 0X32, 0X1A # xorb (%edx), %bl")
#define XOR_BL_FROM_PTR_EDI CMT_ASM(".byte 0X32, 0X1F # xorb (%edi), %bl")
#define XOR_BL_FROM_PTR_ESI CMT_ASM(".byte 0X32, 0X1E # xorb (%esi), %bl")
#define XOR_BL_FROM_PTR_EBP CMT_ASM(".byte 0X32, 0X5D, 0X00 # xorb (%ebp), %bl")
#define XOR_BL_FROM_PTR_ESP CMT_ASM(".byte 0X32, 0X1C, 0X24 # xorb (%esp), %bl")
#define XOR_BL_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X32, 0X1F # xorb (%bx), %bl")
#define XOR_BL_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X32, 0X5E, 0X00 # xorb (%bp), %bl")
#define XOR_BL_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X32, 0X1C # xorb (%si), %bl")
#define XOR_BL_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X32, 0X1D # xorb (%di), %bl")

#define XOR_CL_FROM_PTR_EAX CMT_ASM(".byte 0X32, 0X08 # xorb (%eax), %cl")
#define XOR_CL_FROM_PTR_EBX CMT_ASM(".byte 0X32, 0X0B # xorb (%ebx), %cl")
#define XOR_CL_FROM_PTR_ECX CMT_ASM(".byte 0X32, 0X09 # xorb (%ecx), %cl")
#define XOR_CL_FROM_PTR_EDX CMT_ASM(".byte 0X32, 0X0A # xorb (%edx), %cl")
#define XOR_CL_FROM_PTR_EDI CMT_ASM(".byte 0X32, 0X0F # xorb (%edi), %cl")
#define XOR_CL_FROM_PTR_ESI CMT_ASM(".byte 0X32, 0X0E # xorb (%esi), %cl")
#define XOR_CL_FROM_PTR_EBP CMT_ASM(".byte 0X32, 0X4D, 0X00 # xorb (%ebp), %cl")
#define XOR_CL_FROM_PTR_ESP CMT_ASM(".byte 0X32, 0X0C, 0X24 # xorb (%esp), %cl")
#define XOR_CL_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X32, 0X0F # xorb (%bx), %cl")
#define XOR_CL_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X32, 0X4E, 0X00 # xorb (%bp), %cl")
#define XOR_CL_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X32, 0X0C # xorb (%si), %cl")
#define XOR_CL_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X32, 0X0D # xorb (%di), %cl")

#define XOR_DL_FROM_PTR_EAX CMT_ASM(".byte 0X32, 0X10 # xorb (%eax), %dl")
#define XOR_DL_FROM_PTR_EBX CMT_ASM(".byte 0X32, 0X13 # xorb (%ebx), %dl")
#define XOR_DL_FROM_PTR_ECX CMT_ASM(".byte 0X32, 0X11 # xorb (%ecx), %dl")
#define XOR_DL_FROM_PTR_EDX CMT_ASM(".byte 0X32, 0X12 # xorb (%edx), %dl")
#define XOR_DL_FROM_PTR_EDI CMT_ASM(".byte 0X32, 0X17 # xorb (%edi), %dl")
#define XOR_DL_FROM_PTR_ESI CMT_ASM(".byte 0X32, 0X16 # xorb (%esi), %dl")
#define XOR_DL_FROM_PTR_EBP CMT_ASM(".byte 0X32, 0X55, 0X00 # xorb (%ebp), %dl")
#define XOR_DL_FROM_PTR_ESP CMT_ASM(".byte 0X32, 0X14, 0X24 # xorb (%esp), %dl")
#define XOR_DL_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X32, 0X17 # xorb (%bx), %dl")
#define XOR_DL_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X32, 0X56, 0X00 # xorb (%bp), %dl")
#define XOR_DL_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X32, 0X14 # xorb (%si), %dl")
#define XOR_DL_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X32, 0X15 # xorb (%di), %dl")

#define XOR_AL_TO_PTR_EAX CMT_ASM(".byte 0X30, 0X00 # xorb %al, (%eax)")
#define XOR_AL_TO_PTR_EBX CMT_ASM(".byte 0X30, 0X03 # xorb %al, (%ebx)")
#define XOR_AL_TO_PTR_ECX CMT_ASM(".byte 0X30, 0X01 # xorb %al, (%ecx)")
#define XOR_AL_TO_PTR_EDX CMT_ASM(".byte 0X30, 0X02 # xorb %al, (%edx)")
#define XOR_AL_TO_PTR_EDI CMT_ASM(".byte 0X30, 0X07 # xorb %al, (%edi)")
#define XOR_AL_TO_PTR_ESI CMT_ASM(".byte 0X30, 0X06 # xorb %al, (%esi)")
#define XOR_AL_TO_PTR_EBP CMT_ASM(".byte 0X30, 0X45, 0X00 # xorb %al, (%ebp)")
#define XOR_AL_TO_PTR_ESP CMT_ASM(".byte 0X30, 0X04, 0X24 # xorb %al, (%esp)")
#define XOR_AL_TO_PTR_BX CMT_ASM(".byte 0X67, 0X30, 0X07 # xorb %al, (%bx)")
#define XOR_AL_TO_PTR_BP CMT_ASM(".byte 0X67, 0X30, 0X46, 0X00 # xorb %al, (%bp)")
#define XOR_AL_TO_PTR_SI CMT_ASM(".byte 0X67, 0X30, 0X04 # xorb %al, (%si)")
#define XOR_AL_TO_PTR_DI CMT_ASM(".byte 0X67, 0X30, 0X05 # xorb %al, (%di)")

#define XOR_BL_TO_PTR_EAX CMT_ASM(".byte 0X30, 0X18 # xorb %bl, (%eax)")
#define XOR_BL_TO_PTR_EBX CMT_ASM(".byte 0X30, 0X1B # xorb %bl, (%ebx)")
#define XOR_BL_TO_PTR_ECX CMT_ASM(".byte 0X30, 0X19 # xorb %bl, (%ecx)")
#define XOR_BL_TO_PTR_EDX CMT_ASM(".byte 0X30, 0X1A # xorb %bl, (%edx)")
#define XOR_BL_TO_PTR_EDI CMT_ASM(".byte 0X30, 0X1F # xorb %bl, (%edi)")
#define XOR_BL_TO_PTR_ESI CMT_ASM(".byte 0X30, 0X1E # xorb %bl, (%esi)")
#define XOR_BL_TO_PTR_EBP CMT_ASM(".byte 0X30, 0X5D, 0X00 # xorb %bl, (%ebp)")
#define XOR_BL_TO_PTR_ESP CMT_ASM(".byte 0X30, 0X1C, 0X24 # xorb %bl, (%esp)")
#define XOR_BL_TO_PTR_BX CMT_ASM(".byte 0X67, 0X30, 0X1F # xorb %bl, (%bx)")
#define XOR_BL_TO_PTR_BP CMT_ASM(".byte 0X67, 0X30, 0X5E, 0X00 # xorb %bl, (%bp)")
#define XOR_BL_TO_PTR_SI CMT_ASM(".byte 0X67, 0X30, 0X1C # xorb %bl, (%si)")
#define XOR_BL_TO_PTR_DI CMT_ASM(".byte 0X67, 0X30, 0X1D # xorb %bl, (%di)")

#define XOR_CL_TO_PTR_EAX CMT_ASM(".byte 0X30, 0X08 # xorb %cl, (%eax)")
#define XOR_CL_TO_PTR_EBX CMT_ASM(".byte 0X30, 0X0B # xorb %cl, (%ebx)")
#define XOR_CL_TO_PTR_ECX CMT_ASM(".byte 0X30, 0X09 # xorb %cl, (%ecx)")
#define XOR_CL_TO_PTR_EDX CMT_ASM(".byte 0X30, 0X0A # xorb %cl, (%edx)")
#define XOR_CL_TO_PTR_EDI CMT_ASM(".byte 0X30, 0X0F # xorb %cl, (%edi)")
#define XOR_CL_TO_PTR_ESI CMT_ASM(".byte 0X30, 0X0E # xorb %cl, (%esi)")
#define XOR_CL_TO_PTR_EBP CMT_ASM(".byte 0X30, 0X4D, 0X00 # xorb %cl, (%ebp)")
#define XOR_CL_TO_PTR_ESP CMT_ASM(".byte 0X30, 0X0C, 0X24 # xorb %cl, (%esp)")
#define XOR_CL_TO_PTR_BX CMT_ASM(".byte 0X67, 0X30, 0X0F # xorb %cl, (%bx)")
#define XOR_CL_TO_PTR_BP CMT_ASM(".byte 0X67, 0X30, 0X4E, 0X00 # xorb %cl, (%bp)")
#define XOR_CL_TO_PTR_SI CMT_ASM(".byte 0X67, 0X30, 0X0C # xorb %cl, (%si)")
#define XOR_CL_TO_PTR_DI CMT_ASM(".byte 0X67, 0X30, 0X0D # xorb %cl, (%di)")

#define XOR_DL_TO_PTR_EAX CMT_ASM(".byte 0X30, 0X10 # xorb %dl, (%eax)")
#define XOR_DL_TO_PTR_EBX CMT_ASM(".byte 0X30, 0X13 # xorb %dl, (%ebx)")
#define XOR_DL_TO_PTR_ECX CMT_ASM(".byte 0X30, 0X11 # xorb %dl, (%ecx)")
#define XOR_DL_TO_PTR_EDX CMT_ASM(".byte 0X30, 0X12 # xorb %dl, (%edx)")
#define XOR_DL_TO_PTR_EDI CMT_ASM(".byte 0X30, 0X17 # xorb %dl, (%edi)")
#define XOR_DL_TO_PTR_ESI CMT_ASM(".byte 0X30, 0X16 # xorb %dl, (%esi)")
#define XOR_DL_TO_PTR_EBP CMT_ASM(".byte 0X30, 0X55, 0X00 # xorb %dl, (%ebp)")
#define XOR_DL_TO_PTR_ESP CMT_ASM(".byte 0X30, 0X14, 0X24 # xorb %dl, (%esp)")
#define XOR_DL_TO_PTR_BX CMT_ASM(".byte 0X67, 0X30, 0X17 # xorb %dl, (%bx)")
#define XOR_DL_TO_PTR_BP CMT_ASM(".byte 0X67, 0X30, 0X56, 0X00 # xorb %dl, (%bp)")
#define XOR_DL_TO_PTR_SI CMT_ASM(".byte 0X67, 0X30, 0X14 # xorb %dl, (%si)")
#define XOR_DL_TO_PTR_DI CMT_ASM(".byte 0X67, 0X30, 0X15 # xorb %dl, (%di)")

#define XOR_AL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X32, 0X80 # xorb " _(VALUE) "(%eax), %al")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X32, 0X83 # xorb " _(VALUE) "(%ebx), %al")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X32, 0X81 # xorb " _(VALUE) "(%ecx), %al")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X32, 0X82 # xorb " _(VALUE) "(%edx), %al")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X32, 0X87 # xorb " _(VALUE) "(%edi), %al")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X32, 0X86 # xorb " _(VALUE) "(%esi), %al")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X32, 0X85 # xorb " _(VALUE) "(%ebp), %al")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X32, 0X84, 0X24 # xorb " _(VALUE) "(%esp), %al")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AL_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X32, 0X87 # xorb " _(VALUE) "(%bx), %al")\
	CMT_ASM(".short " _(VALUE))
#define XOR_AL_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X32, 0X86 # xorb " _(VALUE) "(%bp), %al")\
	CMT_ASM(".short " _(VALUE))
#define XOR_AL_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X32, 0X84 # xorb " _(VALUE) "(%si), %al")\
	CMT_ASM(".short " _(VALUE))
#define XOR_AL_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X32, 0X85 # xorb " _(VALUE) "(%di), %al")\
	CMT_ASM(".short " _(VALUE))

#define XOR_BL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X32, 0X98 # xorb " _(VALUE) "(%eax), %bl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X32, 0X9B # xorb " _(VALUE) "(%ebx), %bl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X32, 0X99 # xorb " _(VALUE) "(%ecx), %bl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X32, 0X9A # xorb " _(VALUE) "(%edx), %bl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X32, 0X9F # xorb " _(VALUE) "(%edi), %bl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X32, 0X9E # xorb " _(VALUE) "(%esi), %bl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X32, 0X9D # xorb " _(VALUE) "(%ebp), %bl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X32, 0X9C, 0X24 # xorb " _(VALUE) "(%esp), %bl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BL_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X32, 0X9F # xorb " _(VALUE) "(%bx), %bl")\
	CMT_ASM(".short " _(VALUE))
#define XOR_BL_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X32, 0X9E # xorb " _(VALUE) "(%bp), %bl")\
	CMT_ASM(".short " _(VALUE))
#define XOR_BL_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X32, 0X9C # xorb " _(VALUE) "(%si), %bl")\
	CMT_ASM(".short " _(VALUE))
#define XOR_BL_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X32, 0X9D # xorb " _(VALUE) "(%di), %bl")\
	CMT_ASM(".short " _(VALUE))

#define XOR_CL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X32, 0X88 # xorb " _(VALUE) "(%eax), %cl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X32, 0X8B # xorb " _(VALUE) "(%ebx), %cl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X32, 0X89 # xorb " _(VALUE) "(%ecx), %cl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X32, 0X8A # xorb " _(VALUE) "(%edx), %cl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X32, 0X8F # xorb " _(VALUE) "(%edi), %cl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X32, 0X8E # xorb " _(VALUE) "(%esi), %cl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X32, 0X8D # xorb " _(VALUE) "(%ebp), %cl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X32, 0X8C, 0X24 # xorb " _(VALUE) "(%esp), %cl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CL_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X32, 0X8F # xorb " _(VALUE) "(%bx), %cl")\
	CMT_ASM(".short " _(VALUE))
#define XOR_CL_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X32, 0X8E # xorb " _(VALUE) "(%bp), %cl")\
	CMT_ASM(".short " _(VALUE))
#define XOR_CL_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X32, 0X8C # xorb " _(VALUE) "(%si), %cl")\
	CMT_ASM(".short " _(VALUE))
#define XOR_CL_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X32, 0X8D # xorb " _(VALUE) "(%di), %cl")\
	CMT_ASM(".short " _(VALUE))

#define XOR_DL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X32, 0X90 # xorb " _(VALUE) "(%eax), %dl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X32, 0X93 # xorb " _(VALUE) "(%ebx), %dl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X32, 0X91 # xorb " _(VALUE) "(%ecx), %dl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X32, 0X92 # xorb " _(VALUE) "(%edx), %dl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X32, 0X97 # xorb " _(VALUE) "(%edi), %dl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X32, 0X96 # xorb " _(VALUE) "(%esi), %dl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X32, 0X95 # xorb " _(VALUE) "(%ebp), %dl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X32, 0X94, 0X24 # xorb " _(VALUE) "(%esp), %dl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DL_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X32, 0X97 # xorb " _(VALUE) "(%bx), %dl")\
	CMT_ASM(".short " _(VALUE))
#define XOR_DL_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X32, 0X96 # xorb " _(VALUE) "(%bp), %dl")\
	CMT_ASM(".short " _(VALUE))
#define XOR_DL_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X32, 0X94 # xorb " _(VALUE) "(%si), %dl")\
	CMT_ASM(".short " _(VALUE))
#define XOR_DL_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X32, 0X95 # xorb " _(VALUE) "(%di), %dl")\
	CMT_ASM(".short " _(VALUE))

#define XOR_AL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X30, 0X80 # xorb %al, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X30, 0X83 # xorb %al, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X30, 0X81 # xorb %al, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X30, 0X82 # xorb %al, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X30, 0X87 # xorb %al, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X30, 0X86 # xorb %al, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X30, 0X85 # xorb %al, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X30, 0X84, 0X24 # xorb %al, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AL_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X30, 0X87 # xorb %al, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define XOR_AL_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X30, 0X86 # xorb %al, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define XOR_AL_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X30, 0X84 # xorb %al, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define XOR_AL_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X30, 0X85 # xorb %al, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define XOR_BL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X30, 0X98 # xorb %bl, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X30, 0X9B # xorb %bl, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X30, 0X99 # xorb %bl, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X30, 0X9A # xorb %bl, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X30, 0X9F # xorb %bl, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X30, 0X9E # xorb %bl, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X30, 0X9D # xorb %bl, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X30, 0X9C, 0X24 # xorb %bl, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BL_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X30, 0X9F # xorb %bl, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define XOR_BL_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X30, 0X9E # xorb %bl, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define XOR_BL_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X30, 0X9C # xorb %bl, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define XOR_BL_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X30, 0X9D # xorb %bl, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define XOR_CL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X30, 0X88 # xorb %cl, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X30, 0X8B # xorb %cl, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X30, 0X89 # xorb %cl, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X30, 0X8A # xorb %cl, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X30, 0X8F # xorb %cl, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X30, 0X8E # xorb %cl, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X30, 0X8D # xorb %cl, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X30, 0X8C, 0X24 # xorb %cl, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CL_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X30, 0X8F # xorb %cl, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define XOR_CL_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X30, 0X8E # xorb %cl, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define XOR_CL_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X30, 0X8C # xorb %cl, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define XOR_CL_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X30, 0X8D # xorb %cl, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define XOR_DL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X30, 0X90 # xorb %dl, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X30, 0X93 # xorb %dl, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X30, 0X91 # xorb %dl, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X30, 0X92 # xorb %dl, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X30, 0X97 # xorb %dl, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X30, 0X96 # xorb %dl, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X30, 0X95 # xorb %dl, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X30, 0X94, 0X24 # xorb %dl, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DL_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X30, 0X97 # xorb %dl, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define XOR_DL_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X30, 0X96 # xorb %dl, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define XOR_DL_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X30, 0X94 # xorb %dl, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define XOR_DL_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X30, 0X95 # xorb %dl, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define XOR_AL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X32, 0X04, 0X25 # xorb (" _(VALUE) "), %al")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X32, 0X1C, 0X25 # xorb (" _(VALUE) "), %bl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X32, 0X0C, 0X25 # xorb (" _(VALUE) "), %cl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X32, 0X14, 0X25 # xorb (" _(VALUE) "), %dl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DIL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X40, 0X32, 0X3C, 0X25 # xorb (" _(VALUE) "), %dil")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SIL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X40, 0X32, 0X34, 0X25 # xorb (" _(VALUE) "), %sil")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BPL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X40, 0X32, 0X2C, 0X25 # xorb (" _(VALUE) "), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SPL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X40, 0X32, 0X24, 0X25 # xorb (" _(VALUE) "), %spl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8B_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X32, 0X04, 0X25 # xorb (" _(VALUE) "), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9B_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X32, 0X0C, 0X25 # xorb (" _(VALUE) "), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10B_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X32, 0X14, 0X25 # xorb (" _(VALUE) "), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11B_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X32, 0X1C, 0X25 # xorb (" _(VALUE) "), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12B_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X32, 0X24, 0X25 # xorb (" _(VALUE) "), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13B_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X32, 0X2C, 0X25 # xorb (" _(VALUE) "), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14B_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X32, 0X34, 0X25 # xorb (" _(VALUE) "), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15B_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X32, 0X3C, 0X25 # xorb (" _(VALUE) "), %r15b")\
	CMT_ASM(".long " _(VALUE))

#define XOR_AL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X30, 0X04, 0X25 # xorb %al, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X30, 0X1C, 0X25 # xorb %bl, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X30, 0X0C, 0X25 # xorb %cl, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X30, 0X14, 0X25 # xorb %dl, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DIL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X40, 0X30, 0X3C, 0X25 # xorb %dil, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SIL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X40, 0X30, 0X34, 0X25 # xorb %sil, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BPL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X40, 0X30, 0X2C, 0X25 # xorb %bpl, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SPL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X40, 0X30, 0X24, 0X25 # xorb %spl, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8B_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X30, 0X04, 0X25 # xorb %r8b, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9B_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X30, 0X0C, 0X25 # xorb %r9b, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10B_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X30, 0X14, 0X25 # xorb %r10b, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11B_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X30, 0X1C, 0X25 # xorb %r11b, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12B_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X30, 0X24, 0X25 # xorb %r12b, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13B_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X30, 0X2C, 0X25 # xorb %r13b, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14B_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X30, 0X34, 0X25 # xorb %r14b, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15B_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X30, 0X3C, 0X25 # xorb %r15b, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))

#define XOR_AL_FROM_PTR_RAX CMT_ASM(".byte 0X32, 0X00 # xorb (%rax), %al")
#define XOR_AL_FROM_PTR_RBX CMT_ASM(".byte 0X32, 0X03 # xorb (%rbx), %al")
#define XOR_AL_FROM_PTR_RCX CMT_ASM(".byte 0X32, 0X01 # xorb (%rcx), %al")
#define XOR_AL_FROM_PTR_RDX CMT_ASM(".byte 0X32, 0X02 # xorb (%rdx), %al")
#define XOR_AL_FROM_PTR_RDI CMT_ASM(".byte 0X32, 0X07 # xorb (%rdi), %al")
#define XOR_AL_FROM_PTR_RSI CMT_ASM(".byte 0X32, 0X06 # xorb (%rsi), %al")
#define XOR_AL_FROM_PTR_RBP CMT_ASM(".byte 0X32, 0X45, 0X00 # xorb (%rbp), %al")
#define XOR_AL_FROM_PTR_RSP CMT_ASM(".byte 0X32, 0X04, 0X24 # xorb (%rsp), %al")
#define XOR_AL_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X32, 0X00 # xorb (%r8), %al")
#define XOR_AL_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X32, 0X01 # xorb (%r9), %al")
#define XOR_AL_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X32, 0X02 # xorb (%r10), %al")
#define XOR_AL_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X32, 0X03 # xorb (%r11), %al")
#define XOR_AL_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X32, 0X04, 0X24 # xorb (%r12), %al")
#define XOR_AL_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X32, 0X45, 0X00 # xorb (%r13), %al")
#define XOR_AL_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X32, 0X06 # xorb (%r14), %al")
#define XOR_AL_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X32, 0X07 # xorb (%r15), %al")
#define XOR_AL_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X32, 0X00 # xorb (%eax), %al")
#define XOR_AL_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X32, 0X03 # xorb (%ebx), %al")
#define XOR_AL_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X32, 0X01 # xorb (%ecx), %al")
#define XOR_AL_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X32, 0X02 # xorb (%edx), %al")
#define XOR_AL_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X32, 0X07 # xorb (%edi), %al")
#define XOR_AL_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X32, 0X06 # xorb (%esi), %al")
#define XOR_AL_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X32, 0X45, 0X00 # xorb (%ebp), %al")
#define XOR_AL_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X32, 0X04, 0X24 # xorb (%esp), %al")

#define XOR_BL_FROM_PTR_RAX CMT_ASM(".byte 0X32, 0X18 # xorb (%rax), %bl")
#define XOR_BL_FROM_PTR_RBX CMT_ASM(".byte 0X32, 0X1B # xorb (%rbx), %bl")
#define XOR_BL_FROM_PTR_RCX CMT_ASM(".byte 0X32, 0X19 # xorb (%rcx), %bl")
#define XOR_BL_FROM_PTR_RDX CMT_ASM(".byte 0X32, 0X1A # xorb (%rdx), %bl")
#define XOR_BL_FROM_PTR_RDI CMT_ASM(".byte 0X32, 0X1F # xorb (%rdi), %bl")
#define XOR_BL_FROM_PTR_RSI CMT_ASM(".byte 0X32, 0X1E # xorb (%rsi), %bl")
#define XOR_BL_FROM_PTR_RBP CMT_ASM(".byte 0X32, 0X5D, 0X00 # xorb (%rbp), %bl")
#define XOR_BL_FROM_PTR_RSP CMT_ASM(".byte 0X32, 0X1C, 0X24 # xorb (%rsp), %bl")
#define XOR_BL_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X32, 0X18 # xorb (%r8), %bl")
#define XOR_BL_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X32, 0X19 # xorb (%r9), %bl")
#define XOR_BL_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X32, 0X1A # xorb (%r10), %bl")
#define XOR_BL_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X32, 0X1B # xorb (%r11), %bl")
#define XOR_BL_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X32, 0X1C, 0X24 # xorb (%r12), %bl")
#define XOR_BL_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X32, 0X5D, 0X00 # xorb (%r13), %bl")
#define XOR_BL_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X32, 0X1E # xorb (%r14), %bl")
#define XOR_BL_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X32, 0X1F # xorb (%r15), %bl")
#define XOR_BL_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X32, 0X18 # xorb (%eax), %bl")
#define XOR_BL_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X32, 0X1B # xorb (%ebx), %bl")
#define XOR_BL_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X32, 0X19 # xorb (%ecx), %bl")
#define XOR_BL_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X32, 0X1A # xorb (%edx), %bl")
#define XOR_BL_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X32, 0X1F # xorb (%edi), %bl")
#define XOR_BL_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X32, 0X1E # xorb (%esi), %bl")
#define XOR_BL_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X32, 0X5D, 0X00 # xorb (%ebp), %bl")
#define XOR_BL_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X32, 0X1C, 0X24 # xorb (%esp), %bl")

#define XOR_CL_FROM_PTR_RAX CMT_ASM(".byte 0X32, 0X08 # xorb (%rax), %cl")
#define XOR_CL_FROM_PTR_RBX CMT_ASM(".byte 0X32, 0X0B # xorb (%rbx), %cl")
#define XOR_CL_FROM_PTR_RCX CMT_ASM(".byte 0X32, 0X09 # xorb (%rcx), %cl")
#define XOR_CL_FROM_PTR_RDX CMT_ASM(".byte 0X32, 0X0A # xorb (%rdx), %cl")
#define XOR_CL_FROM_PTR_RDI CMT_ASM(".byte 0X32, 0X0F # xorb (%rdi), %cl")
#define XOR_CL_FROM_PTR_RSI CMT_ASM(".byte 0X32, 0X0E # xorb (%rsi), %cl")
#define XOR_CL_FROM_PTR_RBP CMT_ASM(".byte 0X32, 0X4D, 0X00 # xorb (%rbp), %cl")
#define XOR_CL_FROM_PTR_RSP CMT_ASM(".byte 0X32, 0X0C, 0X24 # xorb (%rsp), %cl")
#define XOR_CL_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X32, 0X08 # xorb (%r8), %cl")
#define XOR_CL_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X32, 0X09 # xorb (%r9), %cl")
#define XOR_CL_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X32, 0X0A # xorb (%r10), %cl")
#define XOR_CL_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X32, 0X0B # xorb (%r11), %cl")
#define XOR_CL_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X32, 0X0C, 0X24 # xorb (%r12), %cl")
#define XOR_CL_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X32, 0X4D, 0X00 # xorb (%r13), %cl")
#define XOR_CL_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X32, 0X0E # xorb (%r14), %cl")
#define XOR_CL_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X32, 0X0F # xorb (%r15), %cl")
#define XOR_CL_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X32, 0X08 # xorb (%eax), %cl")
#define XOR_CL_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X32, 0X0B # xorb (%ebx), %cl")
#define XOR_CL_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X32, 0X09 # xorb (%ecx), %cl")
#define XOR_CL_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X32, 0X0A # xorb (%edx), %cl")
#define XOR_CL_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X32, 0X0F # xorb (%edi), %cl")
#define XOR_CL_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X32, 0X0E # xorb (%esi), %cl")
#define XOR_CL_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X32, 0X4D, 0X00 # xorb (%ebp), %cl")
#define XOR_CL_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X32, 0X0C, 0X24 # xorb (%esp), %cl")

#define XOR_DL_FROM_PTR_RAX CMT_ASM(".byte 0X32, 0X10 # xorb (%rax), %dl")
#define XOR_DL_FROM_PTR_RBX CMT_ASM(".byte 0X32, 0X13 # xorb (%rbx), %dl")
#define XOR_DL_FROM_PTR_RCX CMT_ASM(".byte 0X32, 0X11 # xorb (%rcx), %dl")
#define XOR_DL_FROM_PTR_RDX CMT_ASM(".byte 0X32, 0X12 # xorb (%rdx), %dl")
#define XOR_DL_FROM_PTR_RDI CMT_ASM(".byte 0X32, 0X17 # xorb (%rdi), %dl")
#define XOR_DL_FROM_PTR_RSI CMT_ASM(".byte 0X32, 0X16 # xorb (%rsi), %dl")
#define XOR_DL_FROM_PTR_RBP CMT_ASM(".byte 0X32, 0X55, 0X00 # xorb (%rbp), %dl")
#define XOR_DL_FROM_PTR_RSP CMT_ASM(".byte 0X32, 0X14, 0X24 # xorb (%rsp), %dl")
#define XOR_DL_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X32, 0X10 # xorb (%r8), %dl")
#define XOR_DL_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X32, 0X11 # xorb (%r9), %dl")
#define XOR_DL_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X32, 0X12 # xorb (%r10), %dl")
#define XOR_DL_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X32, 0X13 # xorb (%r11), %dl")
#define XOR_DL_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X32, 0X14, 0X24 # xorb (%r12), %dl")
#define XOR_DL_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X32, 0X55, 0X00 # xorb (%r13), %dl")
#define XOR_DL_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X32, 0X16 # xorb (%r14), %dl")
#define XOR_DL_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X32, 0X17 # xorb (%r15), %dl")
#define XOR_DL_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X32, 0X10 # xorb (%eax), %dl")
#define XOR_DL_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X32, 0X13 # xorb (%ebx), %dl")
#define XOR_DL_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X32, 0X11 # xorb (%ecx), %dl")
#define XOR_DL_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X32, 0X12 # xorb (%edx), %dl")
#define XOR_DL_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X32, 0X17 # xorb (%edi), %dl")
#define XOR_DL_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X32, 0X16 # xorb (%esi), %dl")
#define XOR_DL_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X32, 0X55, 0X00 # xorb (%ebp), %dl")
#define XOR_DL_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X32, 0X14, 0X24 # xorb (%esp), %dl")

#define XOR_DIL_FROM_PTR_RAX CMT_ASM(".byte 0X40, 0X32, 0X38 # xorb (%rax), %dil")
#define XOR_DIL_FROM_PTR_RBX CMT_ASM(".byte 0X40, 0X32, 0X3B # xorb (%rbx), %dil")
#define XOR_DIL_FROM_PTR_RCX CMT_ASM(".byte 0X40, 0X32, 0X39 # xorb (%rcx), %dil")
#define XOR_DIL_FROM_PTR_RDX CMT_ASM(".byte 0X40, 0X32, 0X3A # xorb (%rdx), %dil")
#define XOR_DIL_FROM_PTR_RDI CMT_ASM(".byte 0X40, 0X32, 0X3F # xorb (%rdi), %dil")
#define XOR_DIL_FROM_PTR_RSI CMT_ASM(".byte 0X40, 0X32, 0X3E # xorb (%rsi), %dil")
#define XOR_DIL_FROM_PTR_RBP CMT_ASM(".byte 0X40, 0X32, 0X7D, 0X00 # xorb (%rbp), %dil")
#define XOR_DIL_FROM_PTR_RSP CMT_ASM(".byte 0X40, 0X32, 0X3C, 0X24 # xorb (%rsp), %dil")
#define XOR_DIL_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X32, 0X38 # xorb (%r8), %dil")
#define XOR_DIL_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X32, 0X39 # xorb (%r9), %dil")
#define XOR_DIL_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X32, 0X3A # xorb (%r10), %dil")
#define XOR_DIL_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X32, 0X3B # xorb (%r11), %dil")
#define XOR_DIL_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X32, 0X3C, 0X24 # xorb (%r12), %dil")
#define XOR_DIL_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X32, 0X7D, 0X00 # xorb (%r13), %dil")
#define XOR_DIL_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X32, 0X3E # xorb (%r14), %dil")
#define XOR_DIL_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X32, 0X3F # xorb (%r15), %dil")
#define XOR_DIL_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X40, 0X32, 0X38 # xorb (%eax), %dil")
#define XOR_DIL_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X40, 0X32, 0X3B # xorb (%ebx), %dil")
#define XOR_DIL_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X40, 0X32, 0X39 # xorb (%ecx), %dil")
#define XOR_DIL_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X40, 0X32, 0X3A # xorb (%edx), %dil")
#define XOR_DIL_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X40, 0X32, 0X3F # xorb (%edi), %dil")
#define XOR_DIL_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X40, 0X32, 0X3E # xorb (%esi), %dil")
#define XOR_DIL_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X40, 0X32, 0X7D, 0X00 # xorb (%ebp), %dil")
#define XOR_DIL_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X40, 0X32, 0X3C, 0X24 # xorb (%esp), %dil")

#define XOR_SIL_FROM_PTR_RAX CMT_ASM(".byte 0X40, 0X32, 0X30 # xorb (%rax), %sil")
#define XOR_SIL_FROM_PTR_RBX CMT_ASM(".byte 0X40, 0X32, 0X33 # xorb (%rbx), %sil")
#define XOR_SIL_FROM_PTR_RCX CMT_ASM(".byte 0X40, 0X32, 0X31 # xorb (%rcx), %sil")
#define XOR_SIL_FROM_PTR_RDX CMT_ASM(".byte 0X40, 0X32, 0X32 # xorb (%rdx), %sil")
#define XOR_SIL_FROM_PTR_RDI CMT_ASM(".byte 0X40, 0X32, 0X37 # xorb (%rdi), %sil")
#define XOR_SIL_FROM_PTR_RSI CMT_ASM(".byte 0X40, 0X32, 0X36 # xorb (%rsi), %sil")
#define XOR_SIL_FROM_PTR_RBP CMT_ASM(".byte 0X40, 0X32, 0X75, 0X00 # xorb (%rbp), %sil")
#define XOR_SIL_FROM_PTR_RSP CMT_ASM(".byte 0X40, 0X32, 0X34, 0X24 # xorb (%rsp), %sil")
#define XOR_SIL_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X32, 0X30 # xorb (%r8), %sil")
#define XOR_SIL_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X32, 0X31 # xorb (%r9), %sil")
#define XOR_SIL_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X32, 0X32 # xorb (%r10), %sil")
#define XOR_SIL_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X32, 0X33 # xorb (%r11), %sil")
#define XOR_SIL_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X32, 0X34, 0X24 # xorb (%r12), %sil")
#define XOR_SIL_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X32, 0X75, 0X00 # xorb (%r13), %sil")
#define XOR_SIL_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X32, 0X36 # xorb (%r14), %sil")
#define XOR_SIL_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X32, 0X37 # xorb (%r15), %sil")
#define XOR_SIL_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X40, 0X32, 0X30 # xorb (%eax), %sil")
#define XOR_SIL_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X40, 0X32, 0X33 # xorb (%ebx), %sil")
#define XOR_SIL_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X40, 0X32, 0X31 # xorb (%ecx), %sil")
#define XOR_SIL_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X40, 0X32, 0X32 # xorb (%edx), %sil")
#define XOR_SIL_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X40, 0X32, 0X37 # xorb (%edi), %sil")
#define XOR_SIL_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X40, 0X32, 0X36 # xorb (%esi), %sil")
#define XOR_SIL_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X40, 0X32, 0X75, 0X00 # xorb (%ebp), %sil")
#define XOR_SIL_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X40, 0X32, 0X34, 0X24 # xorb (%esp), %sil")

#define XOR_BPL_FROM_PTR_RAX CMT_ASM(".byte 0X40, 0X32, 0X28 # xorb (%rax), %bpl")
#define XOR_BPL_FROM_PTR_RBX CMT_ASM(".byte 0X40, 0X32, 0X2B # xorb (%rbx), %bpl")
#define XOR_BPL_FROM_PTR_RCX CMT_ASM(".byte 0X40, 0X32, 0X29 # xorb (%rcx), %bpl")
#define XOR_BPL_FROM_PTR_RDX CMT_ASM(".byte 0X40, 0X32, 0X2A # xorb (%rdx), %bpl")
#define XOR_BPL_FROM_PTR_RDI CMT_ASM(".byte 0X40, 0X32, 0X2F # xorb (%rdi), %bpl")
#define XOR_BPL_FROM_PTR_RSI CMT_ASM(".byte 0X40, 0X32, 0X2E # xorb (%rsi), %bpl")
#define XOR_BPL_FROM_PTR_RBP CMT_ASM(".byte 0X40, 0X32, 0X6D, 0X00 # xorb (%rbp), %bpl")
#define XOR_BPL_FROM_PTR_RSP CMT_ASM(".byte 0X40, 0X32, 0X2C, 0X24 # xorb (%rsp), %bpl")
#define XOR_BPL_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X32, 0X28 # xorb (%r8), %bpl")
#define XOR_BPL_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X32, 0X29 # xorb (%r9), %bpl")
#define XOR_BPL_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X32, 0X2A # xorb (%r10), %bpl")
#define XOR_BPL_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X32, 0X2B # xorb (%r11), %bpl")
#define XOR_BPL_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X32, 0X2C, 0X24 # xorb (%r12), %bpl")
#define XOR_BPL_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X32, 0X6D, 0X00 # xorb (%r13), %bpl")
#define XOR_BPL_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X32, 0X2E # xorb (%r14), %bpl")
#define XOR_BPL_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X32, 0X2F # xorb (%r15), %bpl")
#define XOR_BPL_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X40, 0X32, 0X28 # xorb (%eax), %bpl")
#define XOR_BPL_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X40, 0X32, 0X2B # xorb (%ebx), %bpl")
#define XOR_BPL_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X40, 0X32, 0X29 # xorb (%ecx), %bpl")
#define XOR_BPL_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X40, 0X32, 0X2A # xorb (%edx), %bpl")
#define XOR_BPL_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X40, 0X32, 0X2F # xorb (%edi), %bpl")
#define XOR_BPL_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X40, 0X32, 0X2E # xorb (%esi), %bpl")
#define XOR_BPL_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X40, 0X32, 0X6D, 0X00 # xorb (%ebp), %bpl")
#define XOR_BPL_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X40, 0X32, 0X2C, 0X24 # xorb (%esp), %bpl")

#define XOR_SPL_FROM_PTR_RAX CMT_ASM(".byte 0X40, 0X32, 0X20 # xorb (%rax), %spl")
#define XOR_SPL_FROM_PTR_RBX CMT_ASM(".byte 0X40, 0X32, 0X23 # xorb (%rbx), %spl")
#define XOR_SPL_FROM_PTR_RCX CMT_ASM(".byte 0X40, 0X32, 0X21 # xorb (%rcx), %spl")
#define XOR_SPL_FROM_PTR_RDX CMT_ASM(".byte 0X40, 0X32, 0X22 # xorb (%rdx), %spl")
#define XOR_SPL_FROM_PTR_RDI CMT_ASM(".byte 0X40, 0X32, 0X27 # xorb (%rdi), %spl")
#define XOR_SPL_FROM_PTR_RSI CMT_ASM(".byte 0X40, 0X32, 0X26 # xorb (%rsi), %spl")
#define XOR_SPL_FROM_PTR_RBP CMT_ASM(".byte 0X40, 0X32, 0X65, 0X00 # xorb (%rbp), %spl")
#define XOR_SPL_FROM_PTR_RSP CMT_ASM(".byte 0X40, 0X32, 0X24, 0X24 # xorb (%rsp), %spl")
#define XOR_SPL_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X32, 0X20 # xorb (%r8), %spl")
#define XOR_SPL_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X32, 0X21 # xorb (%r9), %spl")
#define XOR_SPL_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X32, 0X22 # xorb (%r10), %spl")
#define XOR_SPL_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X32, 0X23 # xorb (%r11), %spl")
#define XOR_SPL_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X32, 0X24, 0X24 # xorb (%r12), %spl")
#define XOR_SPL_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X32, 0X65, 0X00 # xorb (%r13), %spl")
#define XOR_SPL_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X32, 0X26 # xorb (%r14), %spl")
#define XOR_SPL_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X32, 0X27 # xorb (%r15), %spl")
#define XOR_SPL_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X40, 0X32, 0X20 # xorb (%eax), %spl")
#define XOR_SPL_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X40, 0X32, 0X23 # xorb (%ebx), %spl")
#define XOR_SPL_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X40, 0X32, 0X21 # xorb (%ecx), %spl")
#define XOR_SPL_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X40, 0X32, 0X22 # xorb (%edx), %spl")
#define XOR_SPL_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X40, 0X32, 0X27 # xorb (%edi), %spl")
#define XOR_SPL_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X40, 0X32, 0X26 # xorb (%esi), %spl")
#define XOR_SPL_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X40, 0X32, 0X65, 0X00 # xorb (%ebp), %spl")
#define XOR_SPL_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X40, 0X32, 0X24, 0X24 # xorb (%esp), %spl")

#define XOR_R8B_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X32, 0X00 # xorb (%rax), %r8b")
#define XOR_R8B_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X32, 0X03 # xorb (%rbx), %r8b")
#define XOR_R8B_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X32, 0X01 # xorb (%rcx), %r8b")
#define XOR_R8B_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X32, 0X02 # xorb (%rdx), %r8b")
#define XOR_R8B_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X32, 0X07 # xorb (%rdi), %r8b")
#define XOR_R8B_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X32, 0X06 # xorb (%rsi), %r8b")
#define XOR_R8B_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X32, 0X45, 0X00 # xorb (%rbp), %r8b")
#define XOR_R8B_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X32, 0X04, 0X24 # xorb (%rsp), %r8b")
#define XOR_R8B_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X32, 0X00 # xorb (%r8), %r8b")
#define XOR_R8B_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X32, 0X01 # xorb (%r9), %r8b")
#define XOR_R8B_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X32, 0X02 # xorb (%r10), %r8b")
#define XOR_R8B_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X32, 0X03 # xorb (%r11), %r8b")
#define XOR_R8B_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X32, 0X04, 0X24 # xorb (%r12), %r8b")
#define XOR_R8B_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X32, 0X45, 0X00 # xorb (%r13), %r8b")
#define XOR_R8B_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X32, 0X06 # xorb (%r14), %r8b")
#define XOR_R8B_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X32, 0X07 # xorb (%r15), %r8b")
#define XOR_R8B_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X32, 0X00 # xorb (%eax), %r8b")
#define XOR_R8B_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X32, 0X03 # xorb (%ebx), %r8b")
#define XOR_R8B_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X32, 0X01 # xorb (%ecx), %r8b")
#define XOR_R8B_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X32, 0X02 # xorb (%edx), %r8b")
#define XOR_R8B_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X32, 0X07 # xorb (%edi), %r8b")
#define XOR_R8B_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X32, 0X06 # xorb (%esi), %r8b")
#define XOR_R8B_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X32, 0X45, 0X00 # xorb (%ebp), %r8b")
#define XOR_R8B_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X32, 0X04, 0X24 # xorb (%esp), %r8b")

#define XOR_R9B_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X32, 0X08 # xorb (%rax), %r9b")
#define XOR_R9B_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X32, 0X0B # xorb (%rbx), %r9b")
#define XOR_R9B_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X32, 0X09 # xorb (%rcx), %r9b")
#define XOR_R9B_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X32, 0X0A # xorb (%rdx), %r9b")
#define XOR_R9B_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X32, 0X0F # xorb (%rdi), %r9b")
#define XOR_R9B_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X32, 0X0E # xorb (%rsi), %r9b")
#define XOR_R9B_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X32, 0X4D, 0X00 # xorb (%rbp), %r9b")
#define XOR_R9B_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X32, 0X0C, 0X24 # xorb (%rsp), %r9b")
#define XOR_R9B_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X32, 0X08 # xorb (%r8), %r9b")
#define XOR_R9B_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X32, 0X09 # xorb (%r9), %r9b")
#define XOR_R9B_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X32, 0X0A # xorb (%r10), %r9b")
#define XOR_R9B_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X32, 0X0B # xorb (%r11), %r9b")
#define XOR_R9B_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X32, 0X0C, 0X24 # xorb (%r12), %r9b")
#define XOR_R9B_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X32, 0X4D, 0X00 # xorb (%r13), %r9b")
#define XOR_R9B_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X32, 0X0E # xorb (%r14), %r9b")
#define XOR_R9B_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X32, 0X0F # xorb (%r15), %r9b")
#define XOR_R9B_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X32, 0X08 # xorb (%eax), %r9b")
#define XOR_R9B_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X32, 0X0B # xorb (%ebx), %r9b")
#define XOR_R9B_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X32, 0X09 # xorb (%ecx), %r9b")
#define XOR_R9B_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X32, 0X0A # xorb (%edx), %r9b")
#define XOR_R9B_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X32, 0X0F # xorb (%edi), %r9b")
#define XOR_R9B_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X32, 0X0E # xorb (%esi), %r9b")
#define XOR_R9B_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X32, 0X4D, 0X00 # xorb (%ebp), %r9b")
#define XOR_R9B_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X32, 0X0C, 0X24 # xorb (%esp), %r9b")

#define XOR_R10B_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X32, 0X10 # xorb (%rax), %r10b")
#define XOR_R10B_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X32, 0X13 # xorb (%rbx), %r10b")
#define XOR_R10B_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X32, 0X11 # xorb (%rcx), %r10b")
#define XOR_R10B_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X32, 0X12 # xorb (%rdx), %r10b")
#define XOR_R10B_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X32, 0X17 # xorb (%rdi), %r10b")
#define XOR_R10B_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X32, 0X16 # xorb (%rsi), %r10b")
#define XOR_R10B_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X32, 0X55, 0X00 # xorb (%rbp), %r10b")
#define XOR_R10B_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X32, 0X14, 0X24 # xorb (%rsp), %r10b")
#define XOR_R10B_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X32, 0X10 # xorb (%r8), %r10b")
#define XOR_R10B_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X32, 0X11 # xorb (%r9), %r10b")
#define XOR_R10B_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X32, 0X12 # xorb (%r10), %r10b")
#define XOR_R10B_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X32, 0X13 # xorb (%r11), %r10b")
#define XOR_R10B_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X32, 0X14, 0X24 # xorb (%r12), %r10b")
#define XOR_R10B_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X32, 0X55, 0X00 # xorb (%r13), %r10b")
#define XOR_R10B_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X32, 0X16 # xorb (%r14), %r10b")
#define XOR_R10B_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X32, 0X17 # xorb (%r15), %r10b")
#define XOR_R10B_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X32, 0X10 # xorb (%eax), %r10b")
#define XOR_R10B_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X32, 0X13 # xorb (%ebx), %r10b")
#define XOR_R10B_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X32, 0X11 # xorb (%ecx), %r10b")
#define XOR_R10B_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X32, 0X12 # xorb (%edx), %r10b")
#define XOR_R10B_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X32, 0X17 # xorb (%edi), %r10b")
#define XOR_R10B_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X32, 0X16 # xorb (%esi), %r10b")
#define XOR_R10B_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X32, 0X55, 0X00 # xorb (%ebp), %r10b")
#define XOR_R10B_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X32, 0X14, 0X24 # xorb (%esp), %r10b")

#define XOR_R11B_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X32, 0X18 # xorb (%rax), %r11b")
#define XOR_R11B_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X32, 0X1B # xorb (%rbx), %r11b")
#define XOR_R11B_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X32, 0X19 # xorb (%rcx), %r11b")
#define XOR_R11B_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X32, 0X1A # xorb (%rdx), %r11b")
#define XOR_R11B_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X32, 0X1F # xorb (%rdi), %r11b")
#define XOR_R11B_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X32, 0X1E # xorb (%rsi), %r11b")
#define XOR_R11B_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X32, 0X5D, 0X00 # xorb (%rbp), %r11b")
#define XOR_R11B_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X32, 0X1C, 0X24 # xorb (%rsp), %r11b")
#define XOR_R11B_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X32, 0X18 # xorb (%r8), %r11b")
#define XOR_R11B_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X32, 0X19 # xorb (%r9), %r11b")
#define XOR_R11B_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X32, 0X1A # xorb (%r10), %r11b")
#define XOR_R11B_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X32, 0X1B # xorb (%r11), %r11b")
#define XOR_R11B_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X32, 0X1C, 0X24 # xorb (%r12), %r11b")
#define XOR_R11B_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X32, 0X5D, 0X00 # xorb (%r13), %r11b")
#define XOR_R11B_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X32, 0X1E # xorb (%r14), %r11b")
#define XOR_R11B_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X32, 0X1F # xorb (%r15), %r11b")
#define XOR_R11B_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X32, 0X18 # xorb (%eax), %r11b")
#define XOR_R11B_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X32, 0X1B # xorb (%ebx), %r11b")
#define XOR_R11B_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X32, 0X19 # xorb (%ecx), %r11b")
#define XOR_R11B_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X32, 0X1A # xorb (%edx), %r11b")
#define XOR_R11B_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X32, 0X1F # xorb (%edi), %r11b")
#define XOR_R11B_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X32, 0X1E # xorb (%esi), %r11b")
#define XOR_R11B_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X32, 0X5D, 0X00 # xorb (%ebp), %r11b")
#define XOR_R11B_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X32, 0X1C, 0X24 # xorb (%esp), %r11b")

#define XOR_R12B_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X32, 0X20 # xorb (%rax), %r12b")
#define XOR_R12B_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X32, 0X23 # xorb (%rbx), %r12b")
#define XOR_R12B_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X32, 0X21 # xorb (%rcx), %r12b")
#define XOR_R12B_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X32, 0X22 # xorb (%rdx), %r12b")
#define XOR_R12B_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X32, 0X27 # xorb (%rdi), %r12b")
#define XOR_R12B_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X32, 0X26 # xorb (%rsi), %r12b")
#define XOR_R12B_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X32, 0X65, 0X00 # xorb (%rbp), %r12b")
#define XOR_R12B_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X32, 0X24, 0X24 # xorb (%rsp), %r12b")
#define XOR_R12B_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X32, 0X20 # xorb (%r8), %r12b")
#define XOR_R12B_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X32, 0X21 # xorb (%r9), %r12b")
#define XOR_R12B_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X32, 0X22 # xorb (%r10), %r12b")
#define XOR_R12B_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X32, 0X23 # xorb (%r11), %r12b")
#define XOR_R12B_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X32, 0X24, 0X24 # xorb (%r12), %r12b")
#define XOR_R12B_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X32, 0X65, 0X00 # xorb (%r13), %r12b")
#define XOR_R12B_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X32, 0X26 # xorb (%r14), %r12b")
#define XOR_R12B_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X32, 0X27 # xorb (%r15), %r12b")
#define XOR_R12B_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X32, 0X20 # xorb (%eax), %r12b")
#define XOR_R12B_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X32, 0X23 # xorb (%ebx), %r12b")
#define XOR_R12B_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X32, 0X21 # xorb (%ecx), %r12b")
#define XOR_R12B_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X32, 0X22 # xorb (%edx), %r12b")
#define XOR_R12B_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X32, 0X27 # xorb (%edi), %r12b")
#define XOR_R12B_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X32, 0X26 # xorb (%esi), %r12b")
#define XOR_R12B_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X32, 0X65, 0X00 # xorb (%ebp), %r12b")
#define XOR_R12B_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X32, 0X24, 0X24 # xorb (%esp), %r12b")

#define XOR_R13B_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X32, 0X28 # xorb (%rax), %r13b")
#define XOR_R13B_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X32, 0X2B # xorb (%rbx), %r13b")
#define XOR_R13B_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X32, 0X29 # xorb (%rcx), %r13b")
#define XOR_R13B_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X32, 0X2A # xorb (%rdx), %r13b")
#define XOR_R13B_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X32, 0X2F # xorb (%rdi), %r13b")
#define XOR_R13B_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X32, 0X2E # xorb (%rsi), %r13b")
#define XOR_R13B_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X32, 0X6D, 0X00 # xorb (%rbp), %r13b")
#define XOR_R13B_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X32, 0X2C, 0X24 # xorb (%rsp), %r13b")
#define XOR_R13B_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X32, 0X28 # xorb (%r8), %r13b")
#define XOR_R13B_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X32, 0X29 # xorb (%r9), %r13b")
#define XOR_R13B_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X32, 0X2A # xorb (%r10), %r13b")
#define XOR_R13B_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X32, 0X2B # xorb (%r11), %r13b")
#define XOR_R13B_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X32, 0X2C, 0X24 # xorb (%r12), %r13b")
#define XOR_R13B_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X32, 0X6D, 0X00 # xorb (%r13), %r13b")
#define XOR_R13B_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X32, 0X2E # xorb (%r14), %r13b")
#define XOR_R13B_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X32, 0X2F # xorb (%r15), %r13b")
#define XOR_R13B_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X32, 0X28 # xorb (%eax), %r13b")
#define XOR_R13B_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X32, 0X2B # xorb (%ebx), %r13b")
#define XOR_R13B_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X32, 0X29 # xorb (%ecx), %r13b")
#define XOR_R13B_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X32, 0X2A # xorb (%edx), %r13b")
#define XOR_R13B_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X32, 0X2F # xorb (%edi), %r13b")
#define XOR_R13B_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X32, 0X2E # xorb (%esi), %r13b")
#define XOR_R13B_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X32, 0X6D, 0X00 # xorb (%ebp), %r13b")
#define XOR_R13B_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X32, 0X2C, 0X24 # xorb (%esp), %r13b")

#define XOR_R14B_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X32, 0X30 # xorb (%rax), %r14b")
#define XOR_R14B_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X32, 0X33 # xorb (%rbx), %r14b")
#define XOR_R14B_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X32, 0X31 # xorb (%rcx), %r14b")
#define XOR_R14B_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X32, 0X32 # xorb (%rdx), %r14b")
#define XOR_R14B_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X32, 0X37 # xorb (%rdi), %r14b")
#define XOR_R14B_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X32, 0X36 # xorb (%rsi), %r14b")
#define XOR_R14B_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X32, 0X75, 0X00 # xorb (%rbp), %r14b")
#define XOR_R14B_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X32, 0X34, 0X24 # xorb (%rsp), %r14b")
#define XOR_R14B_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X32, 0X30 # xorb (%r8), %r14b")
#define XOR_R14B_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X32, 0X31 # xorb (%r9), %r14b")
#define XOR_R14B_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X32, 0X32 # xorb (%r10), %r14b")
#define XOR_R14B_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X32, 0X33 # xorb (%r11), %r14b")
#define XOR_R14B_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X32, 0X34, 0X24 # xorb (%r12), %r14b")
#define XOR_R14B_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X32, 0X75, 0X00 # xorb (%r13), %r14b")
#define XOR_R14B_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X32, 0X36 # xorb (%r14), %r14b")
#define XOR_R14B_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X32, 0X37 # xorb (%r15), %r14b")
#define XOR_R14B_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X32, 0X30 # xorb (%eax), %r14b")
#define XOR_R14B_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X32, 0X33 # xorb (%ebx), %r14b")
#define XOR_R14B_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X32, 0X31 # xorb (%ecx), %r14b")
#define XOR_R14B_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X32, 0X32 # xorb (%edx), %r14b")
#define XOR_R14B_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X32, 0X37 # xorb (%edi), %r14b")
#define XOR_R14B_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X32, 0X36 # xorb (%esi), %r14b")
#define XOR_R14B_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X32, 0X75, 0X00 # xorb (%ebp), %r14b")
#define XOR_R14B_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X32, 0X34, 0X24 # xorb (%esp), %r14b")

#define XOR_R15B_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X32, 0X38 # xorb (%rax), %r15b")
#define XOR_R15B_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X32, 0X3B # xorb (%rbx), %r15b")
#define XOR_R15B_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X32, 0X39 # xorb (%rcx), %r15b")
#define XOR_R15B_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X32, 0X3A # xorb (%rdx), %r15b")
#define XOR_R15B_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X32, 0X3F # xorb (%rdi), %r15b")
#define XOR_R15B_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X32, 0X3E # xorb (%rsi), %r15b")
#define XOR_R15B_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X32, 0X7D, 0X00 # xorb (%rbp), %r15b")
#define XOR_R15B_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X32, 0X3C, 0X24 # xorb (%rsp), %r15b")
#define XOR_R15B_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X32, 0X38 # xorb (%r8), %r15b")
#define XOR_R15B_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X32, 0X39 # xorb (%r9), %r15b")
#define XOR_R15B_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X32, 0X3A # xorb (%r10), %r15b")
#define XOR_R15B_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X32, 0X3B # xorb (%r11), %r15b")
#define XOR_R15B_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X32, 0X3C, 0X24 # xorb (%r12), %r15b")
#define XOR_R15B_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X32, 0X7D, 0X00 # xorb (%r13), %r15b")
#define XOR_R15B_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X32, 0X3E # xorb (%r14), %r15b")
#define XOR_R15B_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X32, 0X3F # xorb (%r15), %r15b")
#define XOR_R15B_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X32, 0X38 # xorb (%eax), %r15b")
#define XOR_R15B_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X32, 0X3B # xorb (%ebx), %r15b")
#define XOR_R15B_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X32, 0X39 # xorb (%ecx), %r15b")
#define XOR_R15B_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X32, 0X3A # xorb (%edx), %r15b")
#define XOR_R15B_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X32, 0X3F # xorb (%edi), %r15b")
#define XOR_R15B_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X32, 0X3E # xorb (%esi), %r15b")
#define XOR_R15B_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X32, 0X7D, 0X00 # xorb (%ebp), %r15b")
#define XOR_R15B_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X32, 0X3C, 0X24 # xorb (%esp), %r15b")

#define XOR_AL_TO_PTR_RAX CMT_ASM(".byte 0X30, 0X00 # xorb %al, (%rax)")
#define XOR_AL_TO_PTR_RBX CMT_ASM(".byte 0X30, 0X03 # xorb %al, (%rbx)")
#define XOR_AL_TO_PTR_RCX CMT_ASM(".byte 0X30, 0X01 # xorb %al, (%rcx)")
#define XOR_AL_TO_PTR_RDX CMT_ASM(".byte 0X30, 0X02 # xorb %al, (%rdx)")
#define XOR_AL_TO_PTR_RDI CMT_ASM(".byte 0X30, 0X07 # xorb %al, (%rdi)")
#define XOR_AL_TO_PTR_RSI CMT_ASM(".byte 0X30, 0X06 # xorb %al, (%rsi)")
#define XOR_AL_TO_PTR_RBP CMT_ASM(".byte 0X30, 0X45, 0X00 # xorb %al, (%rbp)")
#define XOR_AL_TO_PTR_RSP CMT_ASM(".byte 0X30, 0X04, 0X24 # xorb %al, (%rsp)")
#define XOR_AL_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X30, 0X00 # xorb %al, (%r8)")
#define XOR_AL_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X30, 0X01 # xorb %al, (%r9)")
#define XOR_AL_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X30, 0X02 # xorb %al, (%r10)")
#define XOR_AL_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X30, 0X03 # xorb %al, (%r11)")
#define XOR_AL_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X30, 0X04, 0X24 # xorb %al, (%r12)")
#define XOR_AL_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X30, 0X45, 0X00 # xorb %al, (%r13)")
#define XOR_AL_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X30, 0X06 # xorb %al, (%r14)")
#define XOR_AL_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X30, 0X07 # xorb %al, (%r15)")
#define XOR_AL_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X30, 0X00 # xorb %al, (%eax)")
#define XOR_AL_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X30, 0X03 # xorb %al, (%ebx)")
#define XOR_AL_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X30, 0X01 # xorb %al, (%ecx)")
#define XOR_AL_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X30, 0X02 # xorb %al, (%edx)")
#define XOR_AL_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X30, 0X07 # xorb %al, (%edi)")
#define XOR_AL_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X30, 0X06 # xorb %al, (%esi)")
#define XOR_AL_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X30, 0X45, 0X00 # xorb %al, (%ebp)")
#define XOR_AL_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X30, 0X04, 0X24 # xorb %al, (%esp)")

#define XOR_BL_TO_PTR_RAX CMT_ASM(".byte 0X30, 0X18 # xorb %bl, (%rax)")
#define XOR_BL_TO_PTR_RBX CMT_ASM(".byte 0X30, 0X1B # xorb %bl, (%rbx)")
#define XOR_BL_TO_PTR_RCX CMT_ASM(".byte 0X30, 0X19 # xorb %bl, (%rcx)")
#define XOR_BL_TO_PTR_RDX CMT_ASM(".byte 0X30, 0X1A # xorb %bl, (%rdx)")
#define XOR_BL_TO_PTR_RDI CMT_ASM(".byte 0X30, 0X1F # xorb %bl, (%rdi)")
#define XOR_BL_TO_PTR_RSI CMT_ASM(".byte 0X30, 0X1E # xorb %bl, (%rsi)")
#define XOR_BL_TO_PTR_RBP CMT_ASM(".byte 0X30, 0X5D, 0X00 # xorb %bl, (%rbp)")
#define XOR_BL_TO_PTR_RSP CMT_ASM(".byte 0X30, 0X1C, 0X24 # xorb %bl, (%rsp)")
#define XOR_BL_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X30, 0X18 # xorb %bl, (%r8)")
#define XOR_BL_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X30, 0X19 # xorb %bl, (%r9)")
#define XOR_BL_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X30, 0X1A # xorb %bl, (%r10)")
#define XOR_BL_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X30, 0X1B # xorb %bl, (%r11)")
#define XOR_BL_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X30, 0X1C, 0X24 # xorb %bl, (%r12)")
#define XOR_BL_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X30, 0X5D, 0X00 # xorb %bl, (%r13)")
#define XOR_BL_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X30, 0X1E # xorb %bl, (%r14)")
#define XOR_BL_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X30, 0X1F # xorb %bl, (%r15)")
#define XOR_BL_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X30, 0X18 # xorb %bl, (%eax)")
#define XOR_BL_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X30, 0X1B # xorb %bl, (%ebx)")
#define XOR_BL_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X30, 0X19 # xorb %bl, (%ecx)")
#define XOR_BL_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X30, 0X1A # xorb %bl, (%edx)")
#define XOR_BL_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X30, 0X1F # xorb %bl, (%edi)")
#define XOR_BL_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X30, 0X1E # xorb %bl, (%esi)")
#define XOR_BL_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X30, 0X5D, 0X00 # xorb %bl, (%ebp)")
#define XOR_BL_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X30, 0X1C, 0X24 # xorb %bl, (%esp)")

#define XOR_CL_TO_PTR_RAX CMT_ASM(".byte 0X30, 0X08 # xorb %cl, (%rax)")
#define XOR_CL_TO_PTR_RBX CMT_ASM(".byte 0X30, 0X0B # xorb %cl, (%rbx)")
#define XOR_CL_TO_PTR_RCX CMT_ASM(".byte 0X30, 0X09 # xorb %cl, (%rcx)")
#define XOR_CL_TO_PTR_RDX CMT_ASM(".byte 0X30, 0X0A # xorb %cl, (%rdx)")
#define XOR_CL_TO_PTR_RDI CMT_ASM(".byte 0X30, 0X0F # xorb %cl, (%rdi)")
#define XOR_CL_TO_PTR_RSI CMT_ASM(".byte 0X30, 0X0E # xorb %cl, (%rsi)")
#define XOR_CL_TO_PTR_RBP CMT_ASM(".byte 0X30, 0X4D, 0X00 # xorb %cl, (%rbp)")
#define XOR_CL_TO_PTR_RSP CMT_ASM(".byte 0X30, 0X0C, 0X24 # xorb %cl, (%rsp)")
#define XOR_CL_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X30, 0X08 # xorb %cl, (%r8)")
#define XOR_CL_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X30, 0X09 # xorb %cl, (%r9)")
#define XOR_CL_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X30, 0X0A # xorb %cl, (%r10)")
#define XOR_CL_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X30, 0X0B # xorb %cl, (%r11)")
#define XOR_CL_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X30, 0X0C, 0X24 # xorb %cl, (%r12)")
#define XOR_CL_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X30, 0X4D, 0X00 # xorb %cl, (%r13)")
#define XOR_CL_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X30, 0X0E # xorb %cl, (%r14)")
#define XOR_CL_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X30, 0X0F # xorb %cl, (%r15)")
#define XOR_CL_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X30, 0X08 # xorb %cl, (%eax)")
#define XOR_CL_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X30, 0X0B # xorb %cl, (%ebx)")
#define XOR_CL_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X30, 0X09 # xorb %cl, (%ecx)")
#define XOR_CL_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X30, 0X0A # xorb %cl, (%edx)")
#define XOR_CL_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X30, 0X0F # xorb %cl, (%edi)")
#define XOR_CL_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X30, 0X0E # xorb %cl, (%esi)")
#define XOR_CL_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X30, 0X4D, 0X00 # xorb %cl, (%ebp)")
#define XOR_CL_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X30, 0X0C, 0X24 # xorb %cl, (%esp)")

#define XOR_DL_TO_PTR_RAX CMT_ASM(".byte 0X30, 0X10 # xorb %dl, (%rax)")
#define XOR_DL_TO_PTR_RBX CMT_ASM(".byte 0X30, 0X13 # xorb %dl, (%rbx)")
#define XOR_DL_TO_PTR_RCX CMT_ASM(".byte 0X30, 0X11 # xorb %dl, (%rcx)")
#define XOR_DL_TO_PTR_RDX CMT_ASM(".byte 0X30, 0X12 # xorb %dl, (%rdx)")
#define XOR_DL_TO_PTR_RDI CMT_ASM(".byte 0X30, 0X17 # xorb %dl, (%rdi)")
#define XOR_DL_TO_PTR_RSI CMT_ASM(".byte 0X30, 0X16 # xorb %dl, (%rsi)")
#define XOR_DL_TO_PTR_RBP CMT_ASM(".byte 0X30, 0X55, 0X00 # xorb %dl, (%rbp)")
#define XOR_DL_TO_PTR_RSP CMT_ASM(".byte 0X30, 0X14, 0X24 # xorb %dl, (%rsp)")
#define XOR_DL_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X30, 0X10 # xorb %dl, (%r8)")
#define XOR_DL_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X30, 0X11 # xorb %dl, (%r9)")
#define XOR_DL_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X30, 0X12 # xorb %dl, (%r10)")
#define XOR_DL_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X30, 0X13 # xorb %dl, (%r11)")
#define XOR_DL_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X30, 0X14, 0X24 # xorb %dl, (%r12)")
#define XOR_DL_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X30, 0X55, 0X00 # xorb %dl, (%r13)")
#define XOR_DL_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X30, 0X16 # xorb %dl, (%r14)")
#define XOR_DL_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X30, 0X17 # xorb %dl, (%r15)")
#define XOR_DL_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X30, 0X10 # xorb %dl, (%eax)")
#define XOR_DL_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X30, 0X13 # xorb %dl, (%ebx)")
#define XOR_DL_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X30, 0X11 # xorb %dl, (%ecx)")
#define XOR_DL_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X30, 0X12 # xorb %dl, (%edx)")
#define XOR_DL_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X30, 0X17 # xorb %dl, (%edi)")
#define XOR_DL_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X30, 0X16 # xorb %dl, (%esi)")
#define XOR_DL_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X30, 0X55, 0X00 # xorb %dl, (%ebp)")
#define XOR_DL_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X30, 0X14, 0X24 # xorb %dl, (%esp)")

#define XOR_DIL_TO_PTR_RAX CMT_ASM(".byte 0X40, 0X30, 0X38 # xorb %dil, (%rax)")
#define XOR_DIL_TO_PTR_RBX CMT_ASM(".byte 0X40, 0X30, 0X3B # xorb %dil, (%rbx)")
#define XOR_DIL_TO_PTR_RCX CMT_ASM(".byte 0X40, 0X30, 0X39 # xorb %dil, (%rcx)")
#define XOR_DIL_TO_PTR_RDX CMT_ASM(".byte 0X40, 0X30, 0X3A # xorb %dil, (%rdx)")
#define XOR_DIL_TO_PTR_RDI CMT_ASM(".byte 0X40, 0X30, 0X3F # xorb %dil, (%rdi)")
#define XOR_DIL_TO_PTR_RSI CMT_ASM(".byte 0X40, 0X30, 0X3E # xorb %dil, (%rsi)")
#define XOR_DIL_TO_PTR_RBP CMT_ASM(".byte 0X40, 0X30, 0X7D, 0X00 # xorb %dil, (%rbp)")
#define XOR_DIL_TO_PTR_RSP CMT_ASM(".byte 0X40, 0X30, 0X3C, 0X24 # xorb %dil, (%rsp)")
#define XOR_DIL_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X30, 0X38 # xorb %dil, (%r8)")
#define XOR_DIL_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X30, 0X39 # xorb %dil, (%r9)")
#define XOR_DIL_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X30, 0X3A # xorb %dil, (%r10)")
#define XOR_DIL_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X30, 0X3B # xorb %dil, (%r11)")
#define XOR_DIL_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X30, 0X3C, 0X24 # xorb %dil, (%r12)")
#define XOR_DIL_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X30, 0X7D, 0X00 # xorb %dil, (%r13)")
#define XOR_DIL_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X30, 0X3E # xorb %dil, (%r14)")
#define XOR_DIL_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X30, 0X3F # xorb %dil, (%r15)")
#define XOR_DIL_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X40, 0X30, 0X38 # xorb %dil, (%eax)")
#define XOR_DIL_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X40, 0X30, 0X3B # xorb %dil, (%ebx)")
#define XOR_DIL_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X40, 0X30, 0X39 # xorb %dil, (%ecx)")
#define XOR_DIL_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X40, 0X30, 0X3A # xorb %dil, (%edx)")
#define XOR_DIL_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X40, 0X30, 0X3F # xorb %dil, (%edi)")
#define XOR_DIL_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X40, 0X30, 0X3E # xorb %dil, (%esi)")
#define XOR_DIL_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X40, 0X30, 0X7D, 0X00 # xorb %dil, (%ebp)")
#define XOR_DIL_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X40, 0X30, 0X3C, 0X24 # xorb %dil, (%esp)")

#define XOR_SIL_TO_PTR_RAX CMT_ASM(".byte 0X40, 0X30, 0X30 # xorb %sil, (%rax)")
#define XOR_SIL_TO_PTR_RBX CMT_ASM(".byte 0X40, 0X30, 0X33 # xorb %sil, (%rbx)")
#define XOR_SIL_TO_PTR_RCX CMT_ASM(".byte 0X40, 0X30, 0X31 # xorb %sil, (%rcx)")
#define XOR_SIL_TO_PTR_RDX CMT_ASM(".byte 0X40, 0X30, 0X32 # xorb %sil, (%rdx)")
#define XOR_SIL_TO_PTR_RDI CMT_ASM(".byte 0X40, 0X30, 0X37 # xorb %sil, (%rdi)")
#define XOR_SIL_TO_PTR_RSI CMT_ASM(".byte 0X40, 0X30, 0X36 # xorb %sil, (%rsi)")
#define XOR_SIL_TO_PTR_RBP CMT_ASM(".byte 0X40, 0X30, 0X75, 0X00 # xorb %sil, (%rbp)")
#define XOR_SIL_TO_PTR_RSP CMT_ASM(".byte 0X40, 0X30, 0X34, 0X24 # xorb %sil, (%rsp)")
#define XOR_SIL_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X30, 0X30 # xorb %sil, (%r8)")
#define XOR_SIL_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X30, 0X31 # xorb %sil, (%r9)")
#define XOR_SIL_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X30, 0X32 # xorb %sil, (%r10)")
#define XOR_SIL_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X30, 0X33 # xorb %sil, (%r11)")
#define XOR_SIL_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X30, 0X34, 0X24 # xorb %sil, (%r12)")
#define XOR_SIL_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X30, 0X75, 0X00 # xorb %sil, (%r13)")
#define XOR_SIL_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X30, 0X36 # xorb %sil, (%r14)")
#define XOR_SIL_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X30, 0X37 # xorb %sil, (%r15)")
#define XOR_SIL_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X40, 0X30, 0X30 # xorb %sil, (%eax)")
#define XOR_SIL_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X40, 0X30, 0X33 # xorb %sil, (%ebx)")
#define XOR_SIL_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X40, 0X30, 0X31 # xorb %sil, (%ecx)")
#define XOR_SIL_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X40, 0X30, 0X32 # xorb %sil, (%edx)")
#define XOR_SIL_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X40, 0X30, 0X37 # xorb %sil, (%edi)")
#define XOR_SIL_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X40, 0X30, 0X36 # xorb %sil, (%esi)")
#define XOR_SIL_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X40, 0X30, 0X75, 0X00 # xorb %sil, (%ebp)")
#define XOR_SIL_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X40, 0X30, 0X34, 0X24 # xorb %sil, (%esp)")

#define XOR_BPL_TO_PTR_RAX CMT_ASM(".byte 0X40, 0X30, 0X28 # xorb %bpl, (%rax)")
#define XOR_BPL_TO_PTR_RBX CMT_ASM(".byte 0X40, 0X30, 0X2B # xorb %bpl, (%rbx)")
#define XOR_BPL_TO_PTR_RCX CMT_ASM(".byte 0X40, 0X30, 0X29 # xorb %bpl, (%rcx)")
#define XOR_BPL_TO_PTR_RDX CMT_ASM(".byte 0X40, 0X30, 0X2A # xorb %bpl, (%rdx)")
#define XOR_BPL_TO_PTR_RDI CMT_ASM(".byte 0X40, 0X30, 0X2F # xorb %bpl, (%rdi)")
#define XOR_BPL_TO_PTR_RSI CMT_ASM(".byte 0X40, 0X30, 0X2E # xorb %bpl, (%rsi)")
#define XOR_BPL_TO_PTR_RBP CMT_ASM(".byte 0X40, 0X30, 0X6D, 0X00 # xorb %bpl, (%rbp)")
#define XOR_BPL_TO_PTR_RSP CMT_ASM(".byte 0X40, 0X30, 0X2C, 0X24 # xorb %bpl, (%rsp)")
#define XOR_BPL_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X30, 0X28 # xorb %bpl, (%r8)")
#define XOR_BPL_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X30, 0X29 # xorb %bpl, (%r9)")
#define XOR_BPL_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X30, 0X2A # xorb %bpl, (%r10)")
#define XOR_BPL_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X30, 0X2B # xorb %bpl, (%r11)")
#define XOR_BPL_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X30, 0X2C, 0X24 # xorb %bpl, (%r12)")
#define XOR_BPL_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X30, 0X6D, 0X00 # xorb %bpl, (%r13)")
#define XOR_BPL_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X30, 0X2E # xorb %bpl, (%r14)")
#define XOR_BPL_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X30, 0X2F # xorb %bpl, (%r15)")
#define XOR_BPL_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X40, 0X30, 0X28 # xorb %bpl, (%eax)")
#define XOR_BPL_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X40, 0X30, 0X2B # xorb %bpl, (%ebx)")
#define XOR_BPL_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X40, 0X30, 0X29 # xorb %bpl, (%ecx)")
#define XOR_BPL_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X40, 0X30, 0X2A # xorb %bpl, (%edx)")
#define XOR_BPL_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X40, 0X30, 0X2F # xorb %bpl, (%edi)")
#define XOR_BPL_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X40, 0X30, 0X2E # xorb %bpl, (%esi)")
#define XOR_BPL_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X40, 0X30, 0X6D, 0X00 # xorb %bpl, (%ebp)")
#define XOR_BPL_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X40, 0X30, 0X2C, 0X24 # xorb %bpl, (%esp)")

#define XOR_SPL_TO_PTR_RAX CMT_ASM(".byte 0X40, 0X30, 0X20 # xorb %spl, (%rax)")
#define XOR_SPL_TO_PTR_RBX CMT_ASM(".byte 0X40, 0X30, 0X23 # xorb %spl, (%rbx)")
#define XOR_SPL_TO_PTR_RCX CMT_ASM(".byte 0X40, 0X30, 0X21 # xorb %spl, (%rcx)")
#define XOR_SPL_TO_PTR_RDX CMT_ASM(".byte 0X40, 0X30, 0X22 # xorb %spl, (%rdx)")
#define XOR_SPL_TO_PTR_RDI CMT_ASM(".byte 0X40, 0X30, 0X27 # xorb %spl, (%rdi)")
#define XOR_SPL_TO_PTR_RSI CMT_ASM(".byte 0X40, 0X30, 0X26 # xorb %spl, (%rsi)")
#define XOR_SPL_TO_PTR_RBP CMT_ASM(".byte 0X40, 0X30, 0X65, 0X00 # xorb %spl, (%rbp)")
#define XOR_SPL_TO_PTR_RSP CMT_ASM(".byte 0X40, 0X30, 0X24, 0X24 # xorb %spl, (%rsp)")
#define XOR_SPL_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X30, 0X20 # xorb %spl, (%r8)")
#define XOR_SPL_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X30, 0X21 # xorb %spl, (%r9)")
#define XOR_SPL_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X30, 0X22 # xorb %spl, (%r10)")
#define XOR_SPL_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X30, 0X23 # xorb %spl, (%r11)")
#define XOR_SPL_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X30, 0X24, 0X24 # xorb %spl, (%r12)")
#define XOR_SPL_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X30, 0X65, 0X00 # xorb %spl, (%r13)")
#define XOR_SPL_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X30, 0X26 # xorb %spl, (%r14)")
#define XOR_SPL_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X30, 0X27 # xorb %spl, (%r15)")
#define XOR_SPL_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X40, 0X30, 0X20 # xorb %spl, (%eax)")
#define XOR_SPL_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X40, 0X30, 0X23 # xorb %spl, (%ebx)")
#define XOR_SPL_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X40, 0X30, 0X21 # xorb %spl, (%ecx)")
#define XOR_SPL_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X40, 0X30, 0X22 # xorb %spl, (%edx)")
#define XOR_SPL_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X40, 0X30, 0X27 # xorb %spl, (%edi)")
#define XOR_SPL_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X40, 0X30, 0X26 # xorb %spl, (%esi)")
#define XOR_SPL_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X40, 0X30, 0X65, 0X00 # xorb %spl, (%ebp)")
#define XOR_SPL_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X40, 0X30, 0X24, 0X24 # xorb %spl, (%esp)")

#define XOR_R8B_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X30, 0X00 # xorb %r8b, (%rax)")
#define XOR_R8B_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X30, 0X03 # xorb %r8b, (%rbx)")
#define XOR_R8B_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X30, 0X01 # xorb %r8b, (%rcx)")
#define XOR_R8B_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X30, 0X02 # xorb %r8b, (%rdx)")
#define XOR_R8B_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X30, 0X07 # xorb %r8b, (%rdi)")
#define XOR_R8B_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X30, 0X06 # xorb %r8b, (%rsi)")
#define XOR_R8B_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X30, 0X45, 0X00 # xorb %r8b, (%rbp)")
#define XOR_R8B_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X30, 0X04, 0X24 # xorb %r8b, (%rsp)")
#define XOR_R8B_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X30, 0X00 # xorb %r8b, (%r8)")
#define XOR_R8B_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X30, 0X01 # xorb %r8b, (%r9)")
#define XOR_R8B_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X30, 0X02 # xorb %r8b, (%r10)")
#define XOR_R8B_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X30, 0X03 # xorb %r8b, (%r11)")
#define XOR_R8B_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X30, 0X04, 0X24 # xorb %r8b, (%r12)")
#define XOR_R8B_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X30, 0X45, 0X00 # xorb %r8b, (%r13)")
#define XOR_R8B_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X30, 0X06 # xorb %r8b, (%r14)")
#define XOR_R8B_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X30, 0X07 # xorb %r8b, (%r15)")
#define XOR_R8B_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X30, 0X00 # xorb %r8b, (%eax)")
#define XOR_R8B_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X30, 0X03 # xorb %r8b, (%ebx)")
#define XOR_R8B_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X30, 0X01 # xorb %r8b, (%ecx)")
#define XOR_R8B_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X30, 0X02 # xorb %r8b, (%edx)")
#define XOR_R8B_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X30, 0X07 # xorb %r8b, (%edi)")
#define XOR_R8B_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X30, 0X06 # xorb %r8b, (%esi)")
#define XOR_R8B_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X30, 0X45, 0X00 # xorb %r8b, (%ebp)")
#define XOR_R8B_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X30, 0X04, 0X24 # xorb %r8b, (%esp)")

#define XOR_R9B_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X30, 0X08 # xorb %r9b, (%rax)")
#define XOR_R9B_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X30, 0X0B # xorb %r9b, (%rbx)")
#define XOR_R9B_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X30, 0X09 # xorb %r9b, (%rcx)")
#define XOR_R9B_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X30, 0X0A # xorb %r9b, (%rdx)")
#define XOR_R9B_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X30, 0X0F # xorb %r9b, (%rdi)")
#define XOR_R9B_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X30, 0X0E # xorb %r9b, (%rsi)")
#define XOR_R9B_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X30, 0X4D, 0X00 # xorb %r9b, (%rbp)")
#define XOR_R9B_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X30, 0X0C, 0X24 # xorb %r9b, (%rsp)")
#define XOR_R9B_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X30, 0X08 # xorb %r9b, (%r8)")
#define XOR_R9B_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X30, 0X09 # xorb %r9b, (%r9)")
#define XOR_R9B_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X30, 0X0A # xorb %r9b, (%r10)")
#define XOR_R9B_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X30, 0X0B # xorb %r9b, (%r11)")
#define XOR_R9B_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X30, 0X0C, 0X24 # xorb %r9b, (%r12)")
#define XOR_R9B_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X30, 0X4D, 0X00 # xorb %r9b, (%r13)")
#define XOR_R9B_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X30, 0X0E # xorb %r9b, (%r14)")
#define XOR_R9B_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X30, 0X0F # xorb %r9b, (%r15)")
#define XOR_R9B_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X30, 0X08 # xorb %r9b, (%eax)")
#define XOR_R9B_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X30, 0X0B # xorb %r9b, (%ebx)")
#define XOR_R9B_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X30, 0X09 # xorb %r9b, (%ecx)")
#define XOR_R9B_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X30, 0X0A # xorb %r9b, (%edx)")
#define XOR_R9B_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X30, 0X0F # xorb %r9b, (%edi)")
#define XOR_R9B_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X30, 0X0E # xorb %r9b, (%esi)")
#define XOR_R9B_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X30, 0X4D, 0X00 # xorb %r9b, (%ebp)")
#define XOR_R9B_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X30, 0X0C, 0X24 # xorb %r9b, (%esp)")

#define XOR_R10B_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X30, 0X10 # xorb %r10b, (%rax)")
#define XOR_R10B_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X30, 0X13 # xorb %r10b, (%rbx)")
#define XOR_R10B_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X30, 0X11 # xorb %r10b, (%rcx)")
#define XOR_R10B_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X30, 0X12 # xorb %r10b, (%rdx)")
#define XOR_R10B_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X30, 0X17 # xorb %r10b, (%rdi)")
#define XOR_R10B_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X30, 0X16 # xorb %r10b, (%rsi)")
#define XOR_R10B_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X30, 0X55, 0X00 # xorb %r10b, (%rbp)")
#define XOR_R10B_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X30, 0X14, 0X24 # xorb %r10b, (%rsp)")
#define XOR_R10B_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X30, 0X10 # xorb %r10b, (%r8)")
#define XOR_R10B_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X30, 0X11 # xorb %r10b, (%r9)")
#define XOR_R10B_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X30, 0X12 # xorb %r10b, (%r10)")
#define XOR_R10B_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X30, 0X13 # xorb %r10b, (%r11)")
#define XOR_R10B_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X30, 0X14, 0X24 # xorb %r10b, (%r12)")
#define XOR_R10B_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X30, 0X55, 0X00 # xorb %r10b, (%r13)")
#define XOR_R10B_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X30, 0X16 # xorb %r10b, (%r14)")
#define XOR_R10B_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X30, 0X17 # xorb %r10b, (%r15)")
#define XOR_R10B_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X30, 0X10 # xorb %r10b, (%eax)")
#define XOR_R10B_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X30, 0X13 # xorb %r10b, (%ebx)")
#define XOR_R10B_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X30, 0X11 # xorb %r10b, (%ecx)")
#define XOR_R10B_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X30, 0X12 # xorb %r10b, (%edx)")
#define XOR_R10B_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X30, 0X17 # xorb %r10b, (%edi)")
#define XOR_R10B_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X30, 0X16 # xorb %r10b, (%esi)")
#define XOR_R10B_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X30, 0X55, 0X00 # xorb %r10b, (%ebp)")
#define XOR_R10B_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X30, 0X14, 0X24 # xorb %r10b, (%esp)")

#define XOR_R11B_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X30, 0X18 # xorb %r11b, (%rax)")
#define XOR_R11B_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X30, 0X1B # xorb %r11b, (%rbx)")
#define XOR_R11B_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X30, 0X19 # xorb %r11b, (%rcx)")
#define XOR_R11B_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X30, 0X1A # xorb %r11b, (%rdx)")
#define XOR_R11B_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X30, 0X1F # xorb %r11b, (%rdi)")
#define XOR_R11B_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X30, 0X1E # xorb %r11b, (%rsi)")
#define XOR_R11B_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X30, 0X5D, 0X00 # xorb %r11b, (%rbp)")
#define XOR_R11B_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X30, 0X1C, 0X24 # xorb %r11b, (%rsp)")
#define XOR_R11B_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X30, 0X18 # xorb %r11b, (%r8)")
#define XOR_R11B_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X30, 0X19 # xorb %r11b, (%r9)")
#define XOR_R11B_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X30, 0X1A # xorb %r11b, (%r10)")
#define XOR_R11B_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X30, 0X1B # xorb %r11b, (%r11)")
#define XOR_R11B_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X30, 0X1C, 0X24 # xorb %r11b, (%r12)")
#define XOR_R11B_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X30, 0X5D, 0X00 # xorb %r11b, (%r13)")
#define XOR_R11B_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X30, 0X1E # xorb %r11b, (%r14)")
#define XOR_R11B_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X30, 0X1F # xorb %r11b, (%r15)")
#define XOR_R11B_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X30, 0X18 # xorb %r11b, (%eax)")
#define XOR_R11B_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X30, 0X1B # xorb %r11b, (%ebx)")
#define XOR_R11B_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X30, 0X19 # xorb %r11b, (%ecx)")
#define XOR_R11B_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X30, 0X1A # xorb %r11b, (%edx)")
#define XOR_R11B_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X30, 0X1F # xorb %r11b, (%edi)")
#define XOR_R11B_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X30, 0X1E # xorb %r11b, (%esi)")
#define XOR_R11B_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X30, 0X5D, 0X00 # xorb %r11b, (%ebp)")
#define XOR_R11B_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X30, 0X1C, 0X24 # xorb %r11b, (%esp)")

#define XOR_R12B_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X30, 0X20 # xorb %r12b, (%rax)")
#define XOR_R12B_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X30, 0X23 # xorb %r12b, (%rbx)")
#define XOR_R12B_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X30, 0X21 # xorb %r12b, (%rcx)")
#define XOR_R12B_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X30, 0X22 # xorb %r12b, (%rdx)")
#define XOR_R12B_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X30, 0X27 # xorb %r12b, (%rdi)")
#define XOR_R12B_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X30, 0X26 # xorb %r12b, (%rsi)")
#define XOR_R12B_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X30, 0X65, 0X00 # xorb %r12b, (%rbp)")
#define XOR_R12B_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X30, 0X24, 0X24 # xorb %r12b, (%rsp)")
#define XOR_R12B_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X30, 0X20 # xorb %r12b, (%r8)")
#define XOR_R12B_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X30, 0X21 # xorb %r12b, (%r9)")
#define XOR_R12B_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X30, 0X22 # xorb %r12b, (%r10)")
#define XOR_R12B_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X30, 0X23 # xorb %r12b, (%r11)")
#define XOR_R12B_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X30, 0X24, 0X24 # xorb %r12b, (%r12)")
#define XOR_R12B_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X30, 0X65, 0X00 # xorb %r12b, (%r13)")
#define XOR_R12B_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X30, 0X26 # xorb %r12b, (%r14)")
#define XOR_R12B_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X30, 0X27 # xorb %r12b, (%r15)")
#define XOR_R12B_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X30, 0X20 # xorb %r12b, (%eax)")
#define XOR_R12B_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X30, 0X23 # xorb %r12b, (%ebx)")
#define XOR_R12B_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X30, 0X21 # xorb %r12b, (%ecx)")
#define XOR_R12B_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X30, 0X22 # xorb %r12b, (%edx)")
#define XOR_R12B_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X30, 0X27 # xorb %r12b, (%edi)")
#define XOR_R12B_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X30, 0X26 # xorb %r12b, (%esi)")
#define XOR_R12B_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X30, 0X65, 0X00 # xorb %r12b, (%ebp)")
#define XOR_R12B_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X30, 0X24, 0X24 # xorb %r12b, (%esp)")

#define XOR_R13B_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X30, 0X28 # xorb %r13b, (%rax)")
#define XOR_R13B_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X30, 0X2B # xorb %r13b, (%rbx)")
#define XOR_R13B_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X30, 0X29 # xorb %r13b, (%rcx)")
#define XOR_R13B_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X30, 0X2A # xorb %r13b, (%rdx)")
#define XOR_R13B_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X30, 0X2F # xorb %r13b, (%rdi)")
#define XOR_R13B_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X30, 0X2E # xorb %r13b, (%rsi)")
#define XOR_R13B_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X30, 0X6D, 0X00 # xorb %r13b, (%rbp)")
#define XOR_R13B_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X30, 0X2C, 0X24 # xorb %r13b, (%rsp)")
#define XOR_R13B_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X30, 0X28 # xorb %r13b, (%r8)")
#define XOR_R13B_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X30, 0X29 # xorb %r13b, (%r9)")
#define XOR_R13B_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X30, 0X2A # xorb %r13b, (%r10)")
#define XOR_R13B_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X30, 0X2B # xorb %r13b, (%r11)")
#define XOR_R13B_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X30, 0X2C, 0X24 # xorb %r13b, (%r12)")
#define XOR_R13B_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X30, 0X6D, 0X00 # xorb %r13b, (%r13)")
#define XOR_R13B_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X30, 0X2E # xorb %r13b, (%r14)")
#define XOR_R13B_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X30, 0X2F # xorb %r13b, (%r15)")
#define XOR_R13B_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X30, 0X28 # xorb %r13b, (%eax)")
#define XOR_R13B_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X30, 0X2B # xorb %r13b, (%ebx)")
#define XOR_R13B_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X30, 0X29 # xorb %r13b, (%ecx)")
#define XOR_R13B_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X30, 0X2A # xorb %r13b, (%edx)")
#define XOR_R13B_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X30, 0X2F # xorb %r13b, (%edi)")
#define XOR_R13B_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X30, 0X2E # xorb %r13b, (%esi)")
#define XOR_R13B_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X30, 0X6D, 0X00 # xorb %r13b, (%ebp)")
#define XOR_R13B_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X30, 0X2C, 0X24 # xorb %r13b, (%esp)")

#define XOR_R14B_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X30, 0X30 # xorb %r14b, (%rax)")
#define XOR_R14B_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X30, 0X33 # xorb %r14b, (%rbx)")
#define XOR_R14B_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X30, 0X31 # xorb %r14b, (%rcx)")
#define XOR_R14B_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X30, 0X32 # xorb %r14b, (%rdx)")
#define XOR_R14B_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X30, 0X37 # xorb %r14b, (%rdi)")
#define XOR_R14B_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X30, 0X36 # xorb %r14b, (%rsi)")
#define XOR_R14B_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X30, 0X75, 0X00 # xorb %r14b, (%rbp)")
#define XOR_R14B_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X30, 0X34, 0X24 # xorb %r14b, (%rsp)")
#define XOR_R14B_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X30, 0X30 # xorb %r14b, (%r8)")
#define XOR_R14B_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X30, 0X31 # xorb %r14b, (%r9)")
#define XOR_R14B_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X30, 0X32 # xorb %r14b, (%r10)")
#define XOR_R14B_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X30, 0X33 # xorb %r14b, (%r11)")
#define XOR_R14B_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X30, 0X34, 0X24 # xorb %r14b, (%r12)")
#define XOR_R14B_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X30, 0X75, 0X00 # xorb %r14b, (%r13)")
#define XOR_R14B_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X30, 0X36 # xorb %r14b, (%r14)")
#define XOR_R14B_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X30, 0X37 # xorb %r14b, (%r15)")
#define XOR_R14B_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X30, 0X30 # xorb %r14b, (%eax)")
#define XOR_R14B_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X30, 0X33 # xorb %r14b, (%ebx)")
#define XOR_R14B_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X30, 0X31 # xorb %r14b, (%ecx)")
#define XOR_R14B_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X30, 0X32 # xorb %r14b, (%edx)")
#define XOR_R14B_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X30, 0X37 # xorb %r14b, (%edi)")
#define XOR_R14B_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X30, 0X36 # xorb %r14b, (%esi)")
#define XOR_R14B_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X30, 0X75, 0X00 # xorb %r14b, (%ebp)")
#define XOR_R14B_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X30, 0X34, 0X24 # xorb %r14b, (%esp)")

#define XOR_R15B_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X30, 0X38 # xorb %r15b, (%rax)")
#define XOR_R15B_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X30, 0X3B # xorb %r15b, (%rbx)")
#define XOR_R15B_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X30, 0X39 # xorb %r15b, (%rcx)")
#define XOR_R15B_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X30, 0X3A # xorb %r15b, (%rdx)")
#define XOR_R15B_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X30, 0X3F # xorb %r15b, (%rdi)")
#define XOR_R15B_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X30, 0X3E # xorb %r15b, (%rsi)")
#define XOR_R15B_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X30, 0X7D, 0X00 # xorb %r15b, (%rbp)")
#define XOR_R15B_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X30, 0X3C, 0X24 # xorb %r15b, (%rsp)")
#define XOR_R15B_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X30, 0X38 # xorb %r15b, (%r8)")
#define XOR_R15B_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X30, 0X39 # xorb %r15b, (%r9)")
#define XOR_R15B_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X30, 0X3A # xorb %r15b, (%r10)")
#define XOR_R15B_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X30, 0X3B # xorb %r15b, (%r11)")
#define XOR_R15B_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X30, 0X3C, 0X24 # xorb %r15b, (%r12)")
#define XOR_R15B_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X30, 0X7D, 0X00 # xorb %r15b, (%r13)")
#define XOR_R15B_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X30, 0X3E # xorb %r15b, (%r14)")
#define XOR_R15B_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X30, 0X3F # xorb %r15b, (%r15)")
#define XOR_R15B_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X30, 0X38 # xorb %r15b, (%eax)")
#define XOR_R15B_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X30, 0X3B # xorb %r15b, (%ebx)")
#define XOR_R15B_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X30, 0X39 # xorb %r15b, (%ecx)")
#define XOR_R15B_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X30, 0X3A # xorb %r15b, (%edx)")
#define XOR_R15B_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X30, 0X3F # xorb %r15b, (%edi)")
#define XOR_R15B_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X30, 0X3E # xorb %r15b, (%esi)")
#define XOR_R15B_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X30, 0X7D, 0X00 # xorb %r15b, (%ebp)")
#define XOR_R15B_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X30, 0X3C, 0X24 # xorb %r15b, (%esp)")

#define XOR_AL_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X32, 0X80 # xorb " _(VALUE) "(%rax), %al")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AL_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X32, 0X83 # xorb " _(VALUE) "(%rbx), %al")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AL_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X32, 0X81 # xorb " _(VALUE) "(%rcx), %al")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AL_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X32, 0X82 # xorb " _(VALUE) "(%rdx), %al")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AL_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X32, 0X87 # xorb " _(VALUE) "(%rdi), %al")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AL_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X32, 0X86 # xorb " _(VALUE) "(%rsi), %al")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AL_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X32, 0X85 # xorb " _(VALUE) "(%rbp), %al")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AL_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X32, 0X84, 0X24 # xorb " _(VALUE) "(%rsp), %al")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AL_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X32, 0X80 # xorb " _(VALUE) "(%r8), %al")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AL_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X32, 0X81 # xorb " _(VALUE) "(%r9), %al")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AL_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X32, 0X82 # xorb " _(VALUE) "(%r10), %al")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AL_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X32, 0X83 # xorb " _(VALUE) "(%r11), %al")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AL_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X32, 0X84, 0X24 # xorb " _(VALUE) "(%r12), %al")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AL_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X32, 0X85 # xorb " _(VALUE) "(%r13), %al")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AL_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X32, 0X86 # xorb " _(VALUE) "(%r14), %al")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AL_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X32, 0X87 # xorb " _(VALUE) "(%r15), %al")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X32, 0X80 # xorb " _(VALUE) "(%eax), %al")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X32, 0X83 # xorb " _(VALUE) "(%ebx), %al")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X32, 0X81 # xorb " _(VALUE) "(%ecx), %al")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X32, 0X82 # xorb " _(VALUE) "(%edx), %al")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X32, 0X87 # xorb " _(VALUE) "(%edi), %al")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X32, 0X86 # xorb " _(VALUE) "(%esi), %al")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X32, 0X85 # xorb " _(VALUE) "(%ebp), %al")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X32, 0X84, 0X24 # xorb " _(VALUE) "(%esp), %al")\
	CMT_ASM(".long " _(VALUE))

#define XOR_BL_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X32, 0X98 # xorb " _(VALUE) "(%rax), %bl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BL_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X32, 0X9B # xorb " _(VALUE) "(%rbx), %bl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BL_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X32, 0X99 # xorb " _(VALUE) "(%rcx), %bl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BL_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X32, 0X9A # xorb " _(VALUE) "(%rdx), %bl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BL_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X32, 0X9F # xorb " _(VALUE) "(%rdi), %bl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BL_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X32, 0X9E # xorb " _(VALUE) "(%rsi), %bl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BL_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X32, 0X9D # xorb " _(VALUE) "(%rbp), %bl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BL_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X32, 0X9C, 0X24 # xorb " _(VALUE) "(%rsp), %bl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BL_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X32, 0X98 # xorb " _(VALUE) "(%r8), %bl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BL_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X32, 0X99 # xorb " _(VALUE) "(%r9), %bl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BL_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X32, 0X9A # xorb " _(VALUE) "(%r10), %bl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BL_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X32, 0X9B # xorb " _(VALUE) "(%r11), %bl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BL_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X32, 0X9C, 0X24 # xorb " _(VALUE) "(%r12), %bl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BL_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X32, 0X9D # xorb " _(VALUE) "(%r13), %bl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BL_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X32, 0X9E # xorb " _(VALUE) "(%r14), %bl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BL_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X32, 0X9F # xorb " _(VALUE) "(%r15), %bl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X32, 0X98 # xorb " _(VALUE) "(%eax), %bl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X32, 0X9B # xorb " _(VALUE) "(%ebx), %bl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X32, 0X99 # xorb " _(VALUE) "(%ecx), %bl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X32, 0X9A # xorb " _(VALUE) "(%edx), %bl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X32, 0X9F # xorb " _(VALUE) "(%edi), %bl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X32, 0X9E # xorb " _(VALUE) "(%esi), %bl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X32, 0X9D # xorb " _(VALUE) "(%ebp), %bl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X32, 0X9C, 0X24 # xorb " _(VALUE) "(%esp), %bl")\
	CMT_ASM(".long " _(VALUE))

#define XOR_CL_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X32, 0X88 # xorb " _(VALUE) "(%rax), %cl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CL_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X32, 0X8B # xorb " _(VALUE) "(%rbx), %cl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CL_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X32, 0X89 # xorb " _(VALUE) "(%rcx), %cl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CL_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X32, 0X8A # xorb " _(VALUE) "(%rdx), %cl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CL_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X32, 0X8F # xorb " _(VALUE) "(%rdi), %cl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CL_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X32, 0X8E # xorb " _(VALUE) "(%rsi), %cl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CL_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X32, 0X8D # xorb " _(VALUE) "(%rbp), %cl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CL_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X32, 0X8C, 0X24 # xorb " _(VALUE) "(%rsp), %cl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CL_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X32, 0X88 # xorb " _(VALUE) "(%r8), %cl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CL_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X32, 0X89 # xorb " _(VALUE) "(%r9), %cl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CL_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X32, 0X8A # xorb " _(VALUE) "(%r10), %cl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CL_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X32, 0X8B # xorb " _(VALUE) "(%r11), %cl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CL_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X32, 0X8C, 0X24 # xorb " _(VALUE) "(%r12), %cl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CL_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X32, 0X8D # xorb " _(VALUE) "(%r13), %cl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CL_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X32, 0X8E # xorb " _(VALUE) "(%r14), %cl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CL_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X32, 0X8F # xorb " _(VALUE) "(%r15), %cl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X32, 0X88 # xorb " _(VALUE) "(%eax), %cl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X32, 0X8B # xorb " _(VALUE) "(%ebx), %cl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X32, 0X89 # xorb " _(VALUE) "(%ecx), %cl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X32, 0X8A # xorb " _(VALUE) "(%edx), %cl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X32, 0X8F # xorb " _(VALUE) "(%edi), %cl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X32, 0X8E # xorb " _(VALUE) "(%esi), %cl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X32, 0X8D # xorb " _(VALUE) "(%ebp), %cl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X32, 0X8C, 0X24 # xorb " _(VALUE) "(%esp), %cl")\
	CMT_ASM(".long " _(VALUE))

#define XOR_DL_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X32, 0X90 # xorb " _(VALUE) "(%rax), %dl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DL_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X32, 0X93 # xorb " _(VALUE) "(%rbx), %dl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DL_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X32, 0X91 # xorb " _(VALUE) "(%rcx), %dl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DL_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X32, 0X92 # xorb " _(VALUE) "(%rdx), %dl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DL_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X32, 0X97 # xorb " _(VALUE) "(%rdi), %dl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DL_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X32, 0X96 # xorb " _(VALUE) "(%rsi), %dl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DL_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X32, 0X95 # xorb " _(VALUE) "(%rbp), %dl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DL_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X32, 0X94, 0X24 # xorb " _(VALUE) "(%rsp), %dl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DL_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X32, 0X90 # xorb " _(VALUE) "(%r8), %dl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DL_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X32, 0X91 # xorb " _(VALUE) "(%r9), %dl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DL_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X32, 0X92 # xorb " _(VALUE) "(%r10), %dl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DL_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X32, 0X93 # xorb " _(VALUE) "(%r11), %dl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DL_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X32, 0X94, 0X24 # xorb " _(VALUE) "(%r12), %dl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DL_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X32, 0X95 # xorb " _(VALUE) "(%r13), %dl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DL_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X32, 0X96 # xorb " _(VALUE) "(%r14), %dl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DL_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X32, 0X97 # xorb " _(VALUE) "(%r15), %dl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X32, 0X90 # xorb " _(VALUE) "(%eax), %dl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X32, 0X93 # xorb " _(VALUE) "(%ebx), %dl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X32, 0X91 # xorb " _(VALUE) "(%ecx), %dl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X32, 0X92 # xorb " _(VALUE) "(%edx), %dl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X32, 0X97 # xorb " _(VALUE) "(%edi), %dl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X32, 0X96 # xorb " _(VALUE) "(%esi), %dl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X32, 0X95 # xorb " _(VALUE) "(%ebp), %dl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X32, 0X94, 0X24 # xorb " _(VALUE) "(%esp), %dl")\
	CMT_ASM(".long " _(VALUE))

#define XOR_DIL_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X32, 0XB8 # xorb " _(VALUE) "(%rax), %dil")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DIL_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X32, 0XBB # xorb " _(VALUE) "(%rbx), %dil")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DIL_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X32, 0XB9 # xorb " _(VALUE) "(%rcx), %dil")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DIL_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X32, 0XBA # xorb " _(VALUE) "(%rdx), %dil")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DIL_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X32, 0XBF # xorb " _(VALUE) "(%rdi), %dil")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DIL_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X32, 0XBE # xorb " _(VALUE) "(%rsi), %dil")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DIL_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X32, 0XBD # xorb " _(VALUE) "(%rbp), %dil")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DIL_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X32, 0XBC, 0X24 # xorb " _(VALUE) "(%rsp), %dil")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DIL_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X32, 0XB8 # xorb " _(VALUE) "(%r8), %dil")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DIL_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X32, 0XB9 # xorb " _(VALUE) "(%r9), %dil")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DIL_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X32, 0XBA # xorb " _(VALUE) "(%r10), %dil")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DIL_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X32, 0XBB # xorb " _(VALUE) "(%r11), %dil")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DIL_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X32, 0XBC, 0X24 # xorb " _(VALUE) "(%r12), %dil")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DIL_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X32, 0XBD # xorb " _(VALUE) "(%r13), %dil")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DIL_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X32, 0XBE # xorb " _(VALUE) "(%r14), %dil")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DIL_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X32, 0XBF # xorb " _(VALUE) "(%r15), %dil")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DIL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X32, 0XB8 # xorb " _(VALUE) "(%eax), %dil")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DIL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X32, 0XBB # xorb " _(VALUE) "(%ebx), %dil")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DIL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X32, 0XB9 # xorb " _(VALUE) "(%ecx), %dil")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DIL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X32, 0XBA # xorb " _(VALUE) "(%edx), %dil")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DIL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X32, 0XBF # xorb " _(VALUE) "(%edi), %dil")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DIL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X32, 0XBE # xorb " _(VALUE) "(%esi), %dil")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DIL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X32, 0XBD # xorb " _(VALUE) "(%ebp), %dil")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DIL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X32, 0XBC, 0X24 # xorb " _(VALUE) "(%esp), %dil")\
	CMT_ASM(".long " _(VALUE))

#define XOR_SIL_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X32, 0XB0 # xorb " _(VALUE) "(%rax), %sil")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SIL_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X32, 0XB3 # xorb " _(VALUE) "(%rbx), %sil")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SIL_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X32, 0XB1 # xorb " _(VALUE) "(%rcx), %sil")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SIL_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X32, 0XB2 # xorb " _(VALUE) "(%rdx), %sil")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SIL_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X32, 0XB7 # xorb " _(VALUE) "(%rdi), %sil")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SIL_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X32, 0XB6 # xorb " _(VALUE) "(%rsi), %sil")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SIL_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X32, 0XB5 # xorb " _(VALUE) "(%rbp), %sil")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SIL_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X32, 0XB4, 0X24 # xorb " _(VALUE) "(%rsp), %sil")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SIL_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X32, 0XB0 # xorb " _(VALUE) "(%r8), %sil")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SIL_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X32, 0XB1 # xorb " _(VALUE) "(%r9), %sil")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SIL_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X32, 0XB2 # xorb " _(VALUE) "(%r10), %sil")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SIL_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X32, 0XB3 # xorb " _(VALUE) "(%r11), %sil")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SIL_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X32, 0XB4, 0X24 # xorb " _(VALUE) "(%r12), %sil")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SIL_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X32, 0XB5 # xorb " _(VALUE) "(%r13), %sil")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SIL_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X32, 0XB6 # xorb " _(VALUE) "(%r14), %sil")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SIL_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X32, 0XB7 # xorb " _(VALUE) "(%r15), %sil")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SIL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X32, 0XB0 # xorb " _(VALUE) "(%eax), %sil")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SIL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X32, 0XB3 # xorb " _(VALUE) "(%ebx), %sil")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SIL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X32, 0XB1 # xorb " _(VALUE) "(%ecx), %sil")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SIL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X32, 0XB2 # xorb " _(VALUE) "(%edx), %sil")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SIL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X32, 0XB7 # xorb " _(VALUE) "(%edi), %sil")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SIL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X32, 0XB6 # xorb " _(VALUE) "(%esi), %sil")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SIL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X32, 0XB5 # xorb " _(VALUE) "(%ebp), %sil")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SIL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X32, 0XB4, 0X24 # xorb " _(VALUE) "(%esp), %sil")\
	CMT_ASM(".long " _(VALUE))

#define XOR_BPL_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X32, 0XA8 # xorb " _(VALUE) "(%rax), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BPL_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X32, 0XAB # xorb " _(VALUE) "(%rbx), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BPL_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X32, 0XA9 # xorb " _(VALUE) "(%rcx), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BPL_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X32, 0XAA # xorb " _(VALUE) "(%rdx), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BPL_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X32, 0XAF # xorb " _(VALUE) "(%rdi), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BPL_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X32, 0XAE # xorb " _(VALUE) "(%rsi), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BPL_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X32, 0XAD # xorb " _(VALUE) "(%rbp), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BPL_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X32, 0XAC, 0X24 # xorb " _(VALUE) "(%rsp), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BPL_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X32, 0XA8 # xorb " _(VALUE) "(%r8), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BPL_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X32, 0XA9 # xorb " _(VALUE) "(%r9), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BPL_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X32, 0XAA # xorb " _(VALUE) "(%r10), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BPL_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X32, 0XAB # xorb " _(VALUE) "(%r11), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BPL_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X32, 0XAC, 0X24 # xorb " _(VALUE) "(%r12), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BPL_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X32, 0XAD # xorb " _(VALUE) "(%r13), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BPL_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X32, 0XAE # xorb " _(VALUE) "(%r14), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BPL_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X32, 0XAF # xorb " _(VALUE) "(%r15), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BPL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X32, 0XA8 # xorb " _(VALUE) "(%eax), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BPL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X32, 0XAB # xorb " _(VALUE) "(%ebx), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BPL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X32, 0XA9 # xorb " _(VALUE) "(%ecx), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BPL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X32, 0XAA # xorb " _(VALUE) "(%edx), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BPL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X32, 0XAF # xorb " _(VALUE) "(%edi), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BPL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X32, 0XAE # xorb " _(VALUE) "(%esi), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BPL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X32, 0XAD # xorb " _(VALUE) "(%ebp), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BPL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X32, 0XAC, 0X24 # xorb " _(VALUE) "(%esp), %bpl")\
	CMT_ASM(".long " _(VALUE))

#define XOR_SPL_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X32, 0XA0 # xorb " _(VALUE) "(%rax), %spl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SPL_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X32, 0XA3 # xorb " _(VALUE) "(%rbx), %spl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SPL_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X32, 0XA1 # xorb " _(VALUE) "(%rcx), %spl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SPL_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X32, 0XA2 # xorb " _(VALUE) "(%rdx), %spl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SPL_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X32, 0XA7 # xorb " _(VALUE) "(%rdi), %spl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SPL_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X32, 0XA6 # xorb " _(VALUE) "(%rsi), %spl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SPL_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X32, 0XA5 # xorb " _(VALUE) "(%rbp), %spl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SPL_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X32, 0XA4, 0X24 # xorb " _(VALUE) "(%rsp), %spl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SPL_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X32, 0XA0 # xorb " _(VALUE) "(%r8), %spl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SPL_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X32, 0XA1 # xorb " _(VALUE) "(%r9), %spl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SPL_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X32, 0XA2 # xorb " _(VALUE) "(%r10), %spl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SPL_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X32, 0XA3 # xorb " _(VALUE) "(%r11), %spl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SPL_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X32, 0XA4, 0X24 # xorb " _(VALUE) "(%r12), %spl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SPL_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X32, 0XA5 # xorb " _(VALUE) "(%r13), %spl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SPL_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X32, 0XA6 # xorb " _(VALUE) "(%r14), %spl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SPL_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X32, 0XA7 # xorb " _(VALUE) "(%r15), %spl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SPL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X32, 0XA0 # xorb " _(VALUE) "(%eax), %spl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SPL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X32, 0XA3 # xorb " _(VALUE) "(%ebx), %spl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SPL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X32, 0XA1 # xorb " _(VALUE) "(%ecx), %spl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SPL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X32, 0XA2 # xorb " _(VALUE) "(%edx), %spl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SPL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X32, 0XA7 # xorb " _(VALUE) "(%edi), %spl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SPL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X32, 0XA6 # xorb " _(VALUE) "(%esi), %spl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SPL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X32, 0XA5 # xorb " _(VALUE) "(%ebp), %spl")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SPL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X32, 0XA4, 0X24 # xorb " _(VALUE) "(%esp), %spl")\
	CMT_ASM(".long " _(VALUE))

#define XOR_R8B_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X32, 0X80 # xorb " _(VALUE) "(%rax), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8B_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X32, 0X83 # xorb " _(VALUE) "(%rbx), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8B_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X32, 0X81 # xorb " _(VALUE) "(%rcx), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8B_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X32, 0X82 # xorb " _(VALUE) "(%rdx), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8B_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X32, 0X87 # xorb " _(VALUE) "(%rdi), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8B_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X32, 0X86 # xorb " _(VALUE) "(%rsi), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8B_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X32, 0X85 # xorb " _(VALUE) "(%rbp), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8B_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X32, 0X84, 0X24 # xorb " _(VALUE) "(%rsp), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8B_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X32, 0X80 # xorb " _(VALUE) "(%r8), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8B_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X32, 0X81 # xorb " _(VALUE) "(%r9), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8B_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X32, 0X82 # xorb " _(VALUE) "(%r10), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8B_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X32, 0X83 # xorb " _(VALUE) "(%r11), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8B_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X32, 0X84, 0X24 # xorb " _(VALUE) "(%r12), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8B_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X32, 0X85 # xorb " _(VALUE) "(%r13), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8B_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X32, 0X86 # xorb " _(VALUE) "(%r14), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8B_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X32, 0X87 # xorb " _(VALUE) "(%r15), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8B_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X32, 0X80 # xorb " _(VALUE) "(%eax), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8B_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X32, 0X83 # xorb " _(VALUE) "(%ebx), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8B_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X32, 0X81 # xorb " _(VALUE) "(%ecx), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8B_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X32, 0X82 # xorb " _(VALUE) "(%edx), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8B_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X32, 0X87 # xorb " _(VALUE) "(%edi), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8B_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X32, 0X86 # xorb " _(VALUE) "(%esi), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8B_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X32, 0X85 # xorb " _(VALUE) "(%ebp), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8B_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X32, 0X84, 0X24 # xorb " _(VALUE) "(%esp), %r8b")\
	CMT_ASM(".long " _(VALUE))

#define XOR_R9B_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X32, 0X88 # xorb " _(VALUE) "(%rax), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9B_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X32, 0X8B # xorb " _(VALUE) "(%rbx), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9B_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X32, 0X89 # xorb " _(VALUE) "(%rcx), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9B_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X32, 0X8A # xorb " _(VALUE) "(%rdx), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9B_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X32, 0X8F # xorb " _(VALUE) "(%rdi), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9B_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X32, 0X8E # xorb " _(VALUE) "(%rsi), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9B_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X32, 0X8D # xorb " _(VALUE) "(%rbp), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9B_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X32, 0X8C, 0X24 # xorb " _(VALUE) "(%rsp), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9B_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X32, 0X88 # xorb " _(VALUE) "(%r8), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9B_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X32, 0X89 # xorb " _(VALUE) "(%r9), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9B_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X32, 0X8A # xorb " _(VALUE) "(%r10), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9B_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X32, 0X8B # xorb " _(VALUE) "(%r11), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9B_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X32, 0X8C, 0X24 # xorb " _(VALUE) "(%r12), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9B_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X32, 0X8D # xorb " _(VALUE) "(%r13), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9B_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X32, 0X8E # xorb " _(VALUE) "(%r14), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9B_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X32, 0X8F # xorb " _(VALUE) "(%r15), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9B_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X32, 0X88 # xorb " _(VALUE) "(%eax), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9B_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X32, 0X8B # xorb " _(VALUE) "(%ebx), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9B_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X32, 0X89 # xorb " _(VALUE) "(%ecx), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9B_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X32, 0X8A # xorb " _(VALUE) "(%edx), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9B_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X32, 0X8F # xorb " _(VALUE) "(%edi), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9B_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X32, 0X8E # xorb " _(VALUE) "(%esi), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9B_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X32, 0X8D # xorb " _(VALUE) "(%ebp), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9B_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X32, 0X8C, 0X24 # xorb " _(VALUE) "(%esp), %r9b")\
	CMT_ASM(".long " _(VALUE))

#define XOR_R10B_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X32, 0X90 # xorb " _(VALUE) "(%rax), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10B_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X32, 0X93 # xorb " _(VALUE) "(%rbx), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10B_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X32, 0X91 # xorb " _(VALUE) "(%rcx), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10B_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X32, 0X92 # xorb " _(VALUE) "(%rdx), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10B_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X32, 0X97 # xorb " _(VALUE) "(%rdi), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10B_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X32, 0X96 # xorb " _(VALUE) "(%rsi), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10B_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X32, 0X95 # xorb " _(VALUE) "(%rbp), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10B_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X32, 0X94, 0X24 # xorb " _(VALUE) "(%rsp), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10B_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X32, 0X90 # xorb " _(VALUE) "(%r8), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10B_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X32, 0X91 # xorb " _(VALUE) "(%r9), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10B_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X32, 0X92 # xorb " _(VALUE) "(%r10), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10B_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X32, 0X93 # xorb " _(VALUE) "(%r11), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10B_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X32, 0X94, 0X24 # xorb " _(VALUE) "(%r12), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10B_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X32, 0X95 # xorb " _(VALUE) "(%r13), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10B_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X32, 0X96 # xorb " _(VALUE) "(%r14), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10B_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X32, 0X97 # xorb " _(VALUE) "(%r15), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10B_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X32, 0X90 # xorb " _(VALUE) "(%eax), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10B_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X32, 0X93 # xorb " _(VALUE) "(%ebx), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10B_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X32, 0X91 # xorb " _(VALUE) "(%ecx), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10B_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X32, 0X92 # xorb " _(VALUE) "(%edx), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10B_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X32, 0X97 # xorb " _(VALUE) "(%edi), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10B_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X32, 0X96 # xorb " _(VALUE) "(%esi), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10B_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X32, 0X95 # xorb " _(VALUE) "(%ebp), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10B_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X32, 0X94, 0X24 # xorb " _(VALUE) "(%esp), %r10b")\
	CMT_ASM(".long " _(VALUE))

#define XOR_R11B_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X32, 0X98 # xorb " _(VALUE) "(%rax), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11B_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X32, 0X9B # xorb " _(VALUE) "(%rbx), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11B_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X32, 0X99 # xorb " _(VALUE) "(%rcx), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11B_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X32, 0X9A # xorb " _(VALUE) "(%rdx), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11B_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X32, 0X9F # xorb " _(VALUE) "(%rdi), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11B_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X32, 0X9E # xorb " _(VALUE) "(%rsi), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11B_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X32, 0X9D # xorb " _(VALUE) "(%rbp), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11B_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X32, 0X9C, 0X24 # xorb " _(VALUE) "(%rsp), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11B_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X32, 0X98 # xorb " _(VALUE) "(%r8), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11B_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X32, 0X99 # xorb " _(VALUE) "(%r9), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11B_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X32, 0X9A # xorb " _(VALUE) "(%r10), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11B_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X32, 0X9B # xorb " _(VALUE) "(%r11), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11B_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X32, 0X9C, 0X24 # xorb " _(VALUE) "(%r12), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11B_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X32, 0X9D # xorb " _(VALUE) "(%r13), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11B_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X32, 0X9E # xorb " _(VALUE) "(%r14), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11B_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X32, 0X9F # xorb " _(VALUE) "(%r15), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11B_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X32, 0X98 # xorb " _(VALUE) "(%eax), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11B_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X32, 0X9B # xorb " _(VALUE) "(%ebx), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11B_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X32, 0X99 # xorb " _(VALUE) "(%ecx), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11B_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X32, 0X9A # xorb " _(VALUE) "(%edx), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11B_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X32, 0X9F # xorb " _(VALUE) "(%edi), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11B_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X32, 0X9E # xorb " _(VALUE) "(%esi), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11B_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X32, 0X9D # xorb " _(VALUE) "(%ebp), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11B_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X32, 0X9C, 0X24 # xorb " _(VALUE) "(%esp), %r11b")\
	CMT_ASM(".long " _(VALUE))

#define XOR_R12B_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X32, 0XA0 # xorb " _(VALUE) "(%rax), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12B_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X32, 0XA3 # xorb " _(VALUE) "(%rbx), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12B_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X32, 0XA1 # xorb " _(VALUE) "(%rcx), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12B_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X32, 0XA2 # xorb " _(VALUE) "(%rdx), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12B_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X32, 0XA7 # xorb " _(VALUE) "(%rdi), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12B_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X32, 0XA6 # xorb " _(VALUE) "(%rsi), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12B_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X32, 0XA5 # xorb " _(VALUE) "(%rbp), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12B_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X32, 0XA4, 0X24 # xorb " _(VALUE) "(%rsp), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12B_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X32, 0XA0 # xorb " _(VALUE) "(%r8), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12B_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X32, 0XA1 # xorb " _(VALUE) "(%r9), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12B_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X32, 0XA2 # xorb " _(VALUE) "(%r10), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12B_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X32, 0XA3 # xorb " _(VALUE) "(%r11), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12B_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X32, 0XA4, 0X24 # xorb " _(VALUE) "(%r12), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12B_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X32, 0XA5 # xorb " _(VALUE) "(%r13), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12B_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X32, 0XA6 # xorb " _(VALUE) "(%r14), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12B_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X32, 0XA7 # xorb " _(VALUE) "(%r15), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12B_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X32, 0XA0 # xorb " _(VALUE) "(%eax), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12B_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X32, 0XA3 # xorb " _(VALUE) "(%ebx), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12B_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X32, 0XA1 # xorb " _(VALUE) "(%ecx), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12B_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X32, 0XA2 # xorb " _(VALUE) "(%edx), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12B_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X32, 0XA7 # xorb " _(VALUE) "(%edi), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12B_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X32, 0XA6 # xorb " _(VALUE) "(%esi), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12B_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X32, 0XA5 # xorb " _(VALUE) "(%ebp), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12B_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X32, 0XA4, 0X24 # xorb " _(VALUE) "(%esp), %r12b")\
	CMT_ASM(".long " _(VALUE))

#define XOR_R13B_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X32, 0XA8 # xorb " _(VALUE) "(%rax), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13B_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X32, 0XAB # xorb " _(VALUE) "(%rbx), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13B_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X32, 0XA9 # xorb " _(VALUE) "(%rcx), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13B_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X32, 0XAA # xorb " _(VALUE) "(%rdx), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13B_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X32, 0XAF # xorb " _(VALUE) "(%rdi), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13B_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X32, 0XAE # xorb " _(VALUE) "(%rsi), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13B_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X32, 0XAD # xorb " _(VALUE) "(%rbp), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13B_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X32, 0XAC, 0X24 # xorb " _(VALUE) "(%rsp), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13B_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X32, 0XA8 # xorb " _(VALUE) "(%r8), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13B_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X32, 0XA9 # xorb " _(VALUE) "(%r9), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13B_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X32, 0XAA # xorb " _(VALUE) "(%r10), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13B_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X32, 0XAB # xorb " _(VALUE) "(%r11), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13B_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X32, 0XAC, 0X24 # xorb " _(VALUE) "(%r12), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13B_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X32, 0XAD # xorb " _(VALUE) "(%r13), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13B_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X32, 0XAE # xorb " _(VALUE) "(%r14), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13B_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X32, 0XAF # xorb " _(VALUE) "(%r15), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13B_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X32, 0XA8 # xorb " _(VALUE) "(%eax), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13B_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X32, 0XAB # xorb " _(VALUE) "(%ebx), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13B_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X32, 0XA9 # xorb " _(VALUE) "(%ecx), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13B_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X32, 0XAA # xorb " _(VALUE) "(%edx), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13B_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X32, 0XAF # xorb " _(VALUE) "(%edi), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13B_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X32, 0XAE # xorb " _(VALUE) "(%esi), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13B_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X32, 0XAD # xorb " _(VALUE) "(%ebp), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13B_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X32, 0XAC, 0X24 # xorb " _(VALUE) "(%esp), %r13b")\
	CMT_ASM(".long " _(VALUE))

#define XOR_R14B_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X32, 0XB0 # xorb " _(VALUE) "(%rax), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14B_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X32, 0XB3 # xorb " _(VALUE) "(%rbx), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14B_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X32, 0XB1 # xorb " _(VALUE) "(%rcx), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14B_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X32, 0XB2 # xorb " _(VALUE) "(%rdx), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14B_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X32, 0XB7 # xorb " _(VALUE) "(%rdi), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14B_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X32, 0XB6 # xorb " _(VALUE) "(%rsi), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14B_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X32, 0XB5 # xorb " _(VALUE) "(%rbp), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14B_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X32, 0XB4, 0X24 # xorb " _(VALUE) "(%rsp), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14B_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X32, 0XB0 # xorb " _(VALUE) "(%r8), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14B_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X32, 0XB1 # xorb " _(VALUE) "(%r9), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14B_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X32, 0XB2 # xorb " _(VALUE) "(%r10), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14B_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X32, 0XB3 # xorb " _(VALUE) "(%r11), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14B_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X32, 0XB4, 0X24 # xorb " _(VALUE) "(%r12), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14B_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X32, 0XB5 # xorb " _(VALUE) "(%r13), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14B_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X32, 0XB6 # xorb " _(VALUE) "(%r14), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14B_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X32, 0XB7 # xorb " _(VALUE) "(%r15), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14B_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X32, 0XB0 # xorb " _(VALUE) "(%eax), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14B_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X32, 0XB3 # xorb " _(VALUE) "(%ebx), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14B_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X32, 0XB1 # xorb " _(VALUE) "(%ecx), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14B_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X32, 0XB2 # xorb " _(VALUE) "(%edx), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14B_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X32, 0XB7 # xorb " _(VALUE) "(%edi), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14B_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X32, 0XB6 # xorb " _(VALUE) "(%esi), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14B_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X32, 0XB5 # xorb " _(VALUE) "(%ebp), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14B_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X32, 0XB4, 0X24 # xorb " _(VALUE) "(%esp), %r14b")\
	CMT_ASM(".long " _(VALUE))

#define XOR_R15B_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X32, 0XB8 # xorb " _(VALUE) "(%rax), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15B_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X32, 0XBB # xorb " _(VALUE) "(%rbx), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15B_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X32, 0XB9 # xorb " _(VALUE) "(%rcx), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15B_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X32, 0XBA # xorb " _(VALUE) "(%rdx), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15B_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X32, 0XBF # xorb " _(VALUE) "(%rdi), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15B_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X32, 0XBE # xorb " _(VALUE) "(%rsi), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15B_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X32, 0XBD # xorb " _(VALUE) "(%rbp), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15B_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X32, 0XBC, 0X24 # xorb " _(VALUE) "(%rsp), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15B_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X32, 0XB8 # xorb " _(VALUE) "(%r8), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15B_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X32, 0XB9 # xorb " _(VALUE) "(%r9), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15B_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X32, 0XBA # xorb " _(VALUE) "(%r10), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15B_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X32, 0XBB # xorb " _(VALUE) "(%r11), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15B_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X32, 0XBC, 0X24 # xorb " _(VALUE) "(%r12), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15B_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X32, 0XBD # xorb " _(VALUE) "(%r13), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15B_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X32, 0XBE # xorb " _(VALUE) "(%r14), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15B_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X32, 0XBF # xorb " _(VALUE) "(%r15), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15B_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X32, 0XB8 # xorb " _(VALUE) "(%eax), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15B_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X32, 0XBB # xorb " _(VALUE) "(%ebx), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15B_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X32, 0XB9 # xorb " _(VALUE) "(%ecx), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15B_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X32, 0XBA # xorb " _(VALUE) "(%edx), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15B_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X32, 0XBF # xorb " _(VALUE) "(%edi), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15B_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X32, 0XBE # xorb " _(VALUE) "(%esi), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15B_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X32, 0XBD # xorb " _(VALUE) "(%ebp), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15B_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X32, 0XBC, 0X24 # xorb " _(VALUE) "(%esp), %r15b")\
	CMT_ASM(".long " _(VALUE))

#define XOR_AL_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X30, 0X80 # xorb %al, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AL_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X30, 0X83 # xorb %al, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AL_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X30, 0X81 # xorb %al, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AL_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X30, 0X82 # xorb %al, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AL_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X30, 0X87 # xorb %al, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AL_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X30, 0X86 # xorb %al, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AL_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X30, 0X85 # xorb %al, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AL_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X30, 0X84, 0X24 # xorb %al, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AL_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X30, 0X80 # xorb %al, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AL_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X30, 0X81 # xorb %al, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AL_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X30, 0X82 # xorb %al, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AL_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X30, 0X83 # xorb %al, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AL_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X30, 0X84, 0X24 # xorb %al, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AL_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X30, 0X85 # xorb %al, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AL_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X30, 0X86 # xorb %al, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AL_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X30, 0X87 # xorb %al, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X30, 0X80 # xorb %al, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X30, 0X83 # xorb %al, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X30, 0X81 # xorb %al, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X30, 0X82 # xorb %al, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X30, 0X87 # xorb %al, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X30, 0X86 # xorb %al, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X30, 0X85 # xorb %al, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X30, 0X84, 0X24 # xorb %al, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XOR_BL_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X30, 0X98 # xorb %bl, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BL_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X30, 0X9B # xorb %bl, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BL_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X30, 0X99 # xorb %bl, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BL_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X30, 0X9A # xorb %bl, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BL_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X30, 0X9F # xorb %bl, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BL_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X30, 0X9E # xorb %bl, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BL_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X30, 0X9D # xorb %bl, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BL_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X30, 0X9C, 0X24 # xorb %bl, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BL_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X30, 0X98 # xorb %bl, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BL_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X30, 0X99 # xorb %bl, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BL_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X30, 0X9A # xorb %bl, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BL_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X30, 0X9B # xorb %bl, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BL_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X30, 0X9C, 0X24 # xorb %bl, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BL_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X30, 0X9D # xorb %bl, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BL_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X30, 0X9E # xorb %bl, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BL_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X30, 0X9F # xorb %bl, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X30, 0X98 # xorb %bl, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X30, 0X9B # xorb %bl, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X30, 0X99 # xorb %bl, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X30, 0X9A # xorb %bl, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X30, 0X9F # xorb %bl, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X30, 0X9E # xorb %bl, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X30, 0X9D # xorb %bl, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X30, 0X9C, 0X24 # xorb %bl, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XOR_CL_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X30, 0X88 # xorb %cl, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CL_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X30, 0X8B # xorb %cl, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CL_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X30, 0X89 # xorb %cl, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CL_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X30, 0X8A # xorb %cl, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CL_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X30, 0X8F # xorb %cl, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CL_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X30, 0X8E # xorb %cl, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CL_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X30, 0X8D # xorb %cl, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CL_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X30, 0X8C, 0X24 # xorb %cl, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CL_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X30, 0X88 # xorb %cl, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CL_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X30, 0X89 # xorb %cl, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CL_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X30, 0X8A # xorb %cl, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CL_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X30, 0X8B # xorb %cl, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CL_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X30, 0X8C, 0X24 # xorb %cl, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CL_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X30, 0X8D # xorb %cl, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CL_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X30, 0X8E # xorb %cl, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CL_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X30, 0X8F # xorb %cl, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X30, 0X88 # xorb %cl, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X30, 0X8B # xorb %cl, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X30, 0X89 # xorb %cl, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X30, 0X8A # xorb %cl, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X30, 0X8F # xorb %cl, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X30, 0X8E # xorb %cl, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X30, 0X8D # xorb %cl, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X30, 0X8C, 0X24 # xorb %cl, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XOR_DL_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X30, 0X90 # xorb %dl, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DL_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X30, 0X93 # xorb %dl, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DL_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X30, 0X91 # xorb %dl, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DL_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X30, 0X92 # xorb %dl, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DL_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X30, 0X97 # xorb %dl, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DL_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X30, 0X96 # xorb %dl, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DL_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X30, 0X95 # xorb %dl, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DL_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X30, 0X94, 0X24 # xorb %dl, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DL_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X30, 0X90 # xorb %dl, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DL_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X30, 0X91 # xorb %dl, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DL_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X30, 0X92 # xorb %dl, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DL_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X30, 0X93 # xorb %dl, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DL_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X30, 0X94, 0X24 # xorb %dl, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DL_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X30, 0X95 # xorb %dl, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DL_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X30, 0X96 # xorb %dl, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DL_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X30, 0X97 # xorb %dl, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X30, 0X90 # xorb %dl, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X30, 0X93 # xorb %dl, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X30, 0X91 # xorb %dl, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X30, 0X92 # xorb %dl, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X30, 0X97 # xorb %dl, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X30, 0X96 # xorb %dl, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X30, 0X95 # xorb %dl, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X30, 0X94, 0X24 # xorb %dl, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XOR_DIL_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X30, 0XB8 # xorb %dil, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DIL_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X30, 0XBB # xorb %dil, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DIL_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X30, 0XB9 # xorb %dil, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DIL_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X30, 0XBA # xorb %dil, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DIL_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X30, 0XBF # xorb %dil, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DIL_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X30, 0XBE # xorb %dil, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DIL_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X30, 0XBD # xorb %dil, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DIL_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X30, 0XBC, 0X24 # xorb %dil, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DIL_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X30, 0XB8 # xorb %dil, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DIL_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X30, 0XB9 # xorb %dil, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DIL_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X30, 0XBA # xorb %dil, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DIL_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X30, 0XBB # xorb %dil, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DIL_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X30, 0XBC, 0X24 # xorb %dil, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DIL_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X30, 0XBD # xorb %dil, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DIL_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X30, 0XBE # xorb %dil, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DIL_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X30, 0XBF # xorb %dil, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DIL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X30, 0XB8 # xorb %dil, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DIL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X30, 0XBB # xorb %dil, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DIL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X30, 0XB9 # xorb %dil, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DIL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X30, 0XBA # xorb %dil, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DIL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X30, 0XBF # xorb %dil, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DIL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X30, 0XBE # xorb %dil, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DIL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X30, 0XBD # xorb %dil, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DIL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X30, 0XBC, 0X24 # xorb %dil, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XOR_SIL_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X30, 0XB0 # xorb %sil, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SIL_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X30, 0XB3 # xorb %sil, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SIL_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X30, 0XB1 # xorb %sil, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SIL_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X30, 0XB2 # xorb %sil, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SIL_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X30, 0XB7 # xorb %sil, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SIL_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X30, 0XB6 # xorb %sil, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SIL_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X30, 0XB5 # xorb %sil, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SIL_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X30, 0XB4, 0X24 # xorb %sil, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SIL_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X30, 0XB0 # xorb %sil, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SIL_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X30, 0XB1 # xorb %sil, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SIL_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X30, 0XB2 # xorb %sil, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SIL_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X30, 0XB3 # xorb %sil, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SIL_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X30, 0XB4, 0X24 # xorb %sil, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SIL_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X30, 0XB5 # xorb %sil, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SIL_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X30, 0XB6 # xorb %sil, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SIL_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X30, 0XB7 # xorb %sil, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SIL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X30, 0XB0 # xorb %sil, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SIL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X30, 0XB3 # xorb %sil, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SIL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X30, 0XB1 # xorb %sil, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SIL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X30, 0XB2 # xorb %sil, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SIL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X30, 0XB7 # xorb %sil, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SIL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X30, 0XB6 # xorb %sil, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SIL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X30, 0XB5 # xorb %sil, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SIL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X30, 0XB4, 0X24 # xorb %sil, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XOR_BPL_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X30, 0XA8 # xorb %bpl, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BPL_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X30, 0XAB # xorb %bpl, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BPL_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X30, 0XA9 # xorb %bpl, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BPL_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X30, 0XAA # xorb %bpl, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BPL_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X30, 0XAF # xorb %bpl, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BPL_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X30, 0XAE # xorb %bpl, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BPL_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X30, 0XAD # xorb %bpl, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BPL_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X30, 0XAC, 0X24 # xorb %bpl, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BPL_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X30, 0XA8 # xorb %bpl, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BPL_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X30, 0XA9 # xorb %bpl, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BPL_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X30, 0XAA # xorb %bpl, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BPL_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X30, 0XAB # xorb %bpl, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BPL_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X30, 0XAC, 0X24 # xorb %bpl, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BPL_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X30, 0XAD # xorb %bpl, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BPL_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X30, 0XAE # xorb %bpl, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BPL_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X30, 0XAF # xorb %bpl, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BPL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X30, 0XA8 # xorb %bpl, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BPL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X30, 0XAB # xorb %bpl, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BPL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X30, 0XA9 # xorb %bpl, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BPL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X30, 0XAA # xorb %bpl, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BPL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X30, 0XAF # xorb %bpl, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BPL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X30, 0XAE # xorb %bpl, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BPL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X30, 0XAD # xorb %bpl, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BPL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X30, 0XAC, 0X24 # xorb %bpl, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XOR_SPL_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X30, 0XA0 # xorb %spl, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SPL_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X30, 0XA3 # xorb %spl, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SPL_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X30, 0XA1 # xorb %spl, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SPL_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X30, 0XA2 # xorb %spl, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SPL_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X30, 0XA7 # xorb %spl, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SPL_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X30, 0XA6 # xorb %spl, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SPL_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X30, 0XA5 # xorb %spl, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SPL_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X30, 0XA4, 0X24 # xorb %spl, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SPL_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X30, 0XA0 # xorb %spl, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SPL_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X30, 0XA1 # xorb %spl, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SPL_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X30, 0XA2 # xorb %spl, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SPL_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X30, 0XA3 # xorb %spl, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SPL_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X30, 0XA4, 0X24 # xorb %spl, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SPL_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X30, 0XA5 # xorb %spl, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SPL_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X30, 0XA6 # xorb %spl, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SPL_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X30, 0XA7 # xorb %spl, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SPL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X30, 0XA0 # xorb %spl, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SPL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X30, 0XA3 # xorb %spl, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SPL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X30, 0XA1 # xorb %spl, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SPL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X30, 0XA2 # xorb %spl, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SPL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X30, 0XA7 # xorb %spl, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SPL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X30, 0XA6 # xorb %spl, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SPL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X30, 0XA5 # xorb %spl, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SPL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X30, 0XA4, 0X24 # xorb %spl, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XOR_R8B_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X30, 0X80 # xorb %r8b, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8B_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X30, 0X83 # xorb %r8b, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8B_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X30, 0X81 # xorb %r8b, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8B_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X30, 0X82 # xorb %r8b, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8B_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X30, 0X87 # xorb %r8b, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8B_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X30, 0X86 # xorb %r8b, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8B_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X30, 0X85 # xorb %r8b, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8B_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X30, 0X84, 0X24 # xorb %r8b, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8B_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X30, 0X80 # xorb %r8b, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8B_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X30, 0X81 # xorb %r8b, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8B_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X30, 0X82 # xorb %r8b, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8B_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X30, 0X83 # xorb %r8b, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8B_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X30, 0X84, 0X24 # xorb %r8b, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8B_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X30, 0X85 # xorb %r8b, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8B_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X30, 0X86 # xorb %r8b, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8B_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X30, 0X87 # xorb %r8b, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8B_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X30, 0X80 # xorb %r8b, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8B_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X30, 0X83 # xorb %r8b, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8B_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X30, 0X81 # xorb %r8b, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8B_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X30, 0X82 # xorb %r8b, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8B_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X30, 0X87 # xorb %r8b, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8B_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X30, 0X86 # xorb %r8b, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8B_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X30, 0X85 # xorb %r8b, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8B_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X30, 0X84, 0X24 # xorb %r8b, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XOR_R9B_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X30, 0X88 # xorb %r9b, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9B_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X30, 0X8B # xorb %r9b, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9B_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X30, 0X89 # xorb %r9b, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9B_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X30, 0X8A # xorb %r9b, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9B_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X30, 0X8F # xorb %r9b, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9B_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X30, 0X8E # xorb %r9b, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9B_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X30, 0X8D # xorb %r9b, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9B_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X30, 0X8C, 0X24 # xorb %r9b, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9B_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X30, 0X88 # xorb %r9b, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9B_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X30, 0X89 # xorb %r9b, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9B_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X30, 0X8A # xorb %r9b, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9B_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X30, 0X8B # xorb %r9b, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9B_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X30, 0X8C, 0X24 # xorb %r9b, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9B_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X30, 0X8D # xorb %r9b, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9B_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X30, 0X8E # xorb %r9b, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9B_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X30, 0X8F # xorb %r9b, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9B_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X30, 0X88 # xorb %r9b, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9B_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X30, 0X8B # xorb %r9b, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9B_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X30, 0X89 # xorb %r9b, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9B_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X30, 0X8A # xorb %r9b, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9B_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X30, 0X8F # xorb %r9b, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9B_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X30, 0X8E # xorb %r9b, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9B_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X30, 0X8D # xorb %r9b, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9B_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X30, 0X8C, 0X24 # xorb %r9b, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XOR_R10B_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X30, 0X90 # xorb %r10b, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10B_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X30, 0X93 # xorb %r10b, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10B_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X30, 0X91 # xorb %r10b, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10B_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X30, 0X92 # xorb %r10b, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10B_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X30, 0X97 # xorb %r10b, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10B_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X30, 0X96 # xorb %r10b, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10B_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X30, 0X95 # xorb %r10b, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10B_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X30, 0X94, 0X24 # xorb %r10b, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10B_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X30, 0X90 # xorb %r10b, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10B_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X30, 0X91 # xorb %r10b, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10B_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X30, 0X92 # xorb %r10b, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10B_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X30, 0X93 # xorb %r10b, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10B_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X30, 0X94, 0X24 # xorb %r10b, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10B_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X30, 0X95 # xorb %r10b, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10B_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X30, 0X96 # xorb %r10b, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10B_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X30, 0X97 # xorb %r10b, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10B_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X30, 0X90 # xorb %r10b, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10B_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X30, 0X93 # xorb %r10b, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10B_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X30, 0X91 # xorb %r10b, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10B_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X30, 0X92 # xorb %r10b, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10B_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X30, 0X97 # xorb %r10b, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10B_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X30, 0X96 # xorb %r10b, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10B_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X30, 0X95 # xorb %r10b, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10B_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X30, 0X94, 0X24 # xorb %r10b, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XOR_R11B_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X30, 0X98 # xorb %r11b, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11B_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X30, 0X9B # xorb %r11b, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11B_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X30, 0X99 # xorb %r11b, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11B_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X30, 0X9A # xorb %r11b, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11B_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X30, 0X9F # xorb %r11b, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11B_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X30, 0X9E # xorb %r11b, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11B_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X30, 0X9D # xorb %r11b, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11B_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X30, 0X9C, 0X24 # xorb %r11b, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11B_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X30, 0X98 # xorb %r11b, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11B_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X30, 0X99 # xorb %r11b, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11B_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X30, 0X9A # xorb %r11b, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11B_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X30, 0X9B # xorb %r11b, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11B_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X30, 0X9C, 0X24 # xorb %r11b, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11B_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X30, 0X9D # xorb %r11b, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11B_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X30, 0X9E # xorb %r11b, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11B_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X30, 0X9F # xorb %r11b, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11B_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X30, 0X98 # xorb %r11b, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11B_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X30, 0X9B # xorb %r11b, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11B_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X30, 0X99 # xorb %r11b, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11B_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X30, 0X9A # xorb %r11b, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11B_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X30, 0X9F # xorb %r11b, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11B_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X30, 0X9E # xorb %r11b, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11B_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X30, 0X9D # xorb %r11b, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11B_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X30, 0X9C, 0X24 # xorb %r11b, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XOR_R12B_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X30, 0XA0 # xorb %r12b, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12B_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X30, 0XA3 # xorb %r12b, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12B_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X30, 0XA1 # xorb %r12b, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12B_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X30, 0XA2 # xorb %r12b, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12B_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X30, 0XA7 # xorb %r12b, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12B_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X30, 0XA6 # xorb %r12b, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12B_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X30, 0XA5 # xorb %r12b, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12B_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X30, 0XA4, 0X24 # xorb %r12b, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12B_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X30, 0XA0 # xorb %r12b, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12B_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X30, 0XA1 # xorb %r12b, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12B_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X30, 0XA2 # xorb %r12b, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12B_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X30, 0XA3 # xorb %r12b, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12B_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X30, 0XA4, 0X24 # xorb %r12b, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12B_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X30, 0XA5 # xorb %r12b, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12B_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X30, 0XA6 # xorb %r12b, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12B_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X30, 0XA7 # xorb %r12b, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12B_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X30, 0XA0 # xorb %r12b, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12B_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X30, 0XA3 # xorb %r12b, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12B_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X30, 0XA1 # xorb %r12b, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12B_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X30, 0XA2 # xorb %r12b, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12B_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X30, 0XA7 # xorb %r12b, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12B_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X30, 0XA6 # xorb %r12b, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12B_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X30, 0XA5 # xorb %r12b, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12B_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X30, 0XA4, 0X24 # xorb %r12b, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XOR_R13B_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X30, 0XA8 # xorb %r13b, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13B_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X30, 0XAB # xorb %r13b, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13B_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X30, 0XA9 # xorb %r13b, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13B_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X30, 0XAA # xorb %r13b, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13B_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X30, 0XAF # xorb %r13b, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13B_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X30, 0XAE # xorb %r13b, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13B_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X30, 0XAD # xorb %r13b, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13B_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X30, 0XAC, 0X24 # xorb %r13b, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13B_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X30, 0XA8 # xorb %r13b, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13B_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X30, 0XA9 # xorb %r13b, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13B_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X30, 0XAA # xorb %r13b, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13B_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X30, 0XAB # xorb %r13b, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13B_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X30, 0XAC, 0X24 # xorb %r13b, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13B_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X30, 0XAD # xorb %r13b, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13B_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X30, 0XAE # xorb %r13b, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13B_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X30, 0XAF # xorb %r13b, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13B_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X30, 0XA8 # xorb %r13b, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13B_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X30, 0XAB # xorb %r13b, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13B_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X30, 0XA9 # xorb %r13b, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13B_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X30, 0XAA # xorb %r13b, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13B_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X30, 0XAF # xorb %r13b, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13B_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X30, 0XAE # xorb %r13b, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13B_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X30, 0XAD # xorb %r13b, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13B_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X30, 0XAC, 0X24 # xorb %r13b, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XOR_R14B_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X30, 0XB0 # xorb %r14b, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14B_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X30, 0XB3 # xorb %r14b, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14B_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X30, 0XB1 # xorb %r14b, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14B_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X30, 0XB2 # xorb %r14b, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14B_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X30, 0XB7 # xorb %r14b, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14B_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X30, 0XB6 # xorb %r14b, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14B_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X30, 0XB5 # xorb %r14b, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14B_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X30, 0XB4, 0X24 # xorb %r14b, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14B_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X30, 0XB0 # xorb %r14b, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14B_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X30, 0XB1 # xorb %r14b, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14B_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X30, 0XB2 # xorb %r14b, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14B_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X30, 0XB3 # xorb %r14b, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14B_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X30, 0XB4, 0X24 # xorb %r14b, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14B_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X30, 0XB5 # xorb %r14b, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14B_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X30, 0XB6 # xorb %r14b, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14B_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X30, 0XB7 # xorb %r14b, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14B_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X30, 0XB0 # xorb %r14b, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14B_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X30, 0XB3 # xorb %r14b, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14B_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X30, 0XB1 # xorb %r14b, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14B_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X30, 0XB2 # xorb %r14b, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14B_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X30, 0XB7 # xorb %r14b, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14B_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X30, 0XB6 # xorb %r14b, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14B_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X30, 0XB5 # xorb %r14b, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14B_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X30, 0XB4, 0X24 # xorb %r14b, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XOR_R15B_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X30, 0XB8 # xorb %r15b, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15B_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X30, 0XBB # xorb %r15b, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15B_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X30, 0XB9 # xorb %r15b, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15B_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X30, 0XBA # xorb %r15b, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15B_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X30, 0XBF # xorb %r15b, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15B_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X30, 0XBE # xorb %r15b, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15B_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X30, 0XBD # xorb %r15b, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15B_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X30, 0XBC, 0X24 # xorb %r15b, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15B_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X30, 0XB8 # xorb %r15b, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15B_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X30, 0XB9 # xorb %r15b, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15B_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X30, 0XBA # xorb %r15b, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15B_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X30, 0XBB # xorb %r15b, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15B_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X30, 0XBC, 0X24 # xorb %r15b, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15B_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X30, 0XBD # xorb %r15b, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15B_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X30, 0XBE # xorb %r15b, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15B_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X30, 0XBF # xorb %r15b, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15B_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X30, 0XB8 # xorb %r15b, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15B_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X30, 0XBB # xorb %r15b, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15B_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X30, 0XB9 # xorb %r15b, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15B_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X30, 0XBA # xorb %r15b, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15B_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X30, 0XBF # xorb %r15b, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15B_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X30, 0XBE # xorb %r15b, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15B_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X30, 0XBD # xorb %r15b, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15B_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X30, 0XBC, 0X24 # xorb %r15b, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#endif /* __SYSTEM_64_BIT__ */
/* ************************** [^] 8-BIT MEMORY [^] ************************** */

/* ************************* [v] 16-BIT MEMORY [v] ************************** */
#ifdef __SYSTEM_16_BIT__
#define XOR_AX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X33, 0X06 # xorw (" _(VALUE) "), %ax")\
	CMT_ASM(".short " _(VALUE))
#define XOR_BX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X33, 0X1E # xorw (" _(VALUE) "), %bx")\
	CMT_ASM(".short " _(VALUE))
#define XOR_CX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X33, 0X0E # xorw (" _(VALUE) "), %cx")\
	CMT_ASM(".short " _(VALUE))
#define XOR_DX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X33, 0X16 # xorw (" _(VALUE) "), %dx")\
	CMT_ASM(".short " _(VALUE))
#define XOR_DI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X33, 0X3E # xorw (" _(VALUE) "), %di")\
	CMT_ASM(".short " _(VALUE))
#define XOR_SI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X33, 0X36 # xorw (" _(VALUE) "), %si")\
	CMT_ASM(".short " _(VALUE))
#define XOR_BP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X33, 0X2E # xorw (" _(VALUE) "), %bp")\
	CMT_ASM(".short " _(VALUE))
#define XOR_SP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X33, 0X26 # xorw (" _(VALUE) "), %sp")\
	CMT_ASM(".short " _(VALUE))

#define XOR_AX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X31, 0X06 # xorw %ax, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define XOR_BX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X31, 0X1E # xorw %bx, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define XOR_CX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X31, 0X0E # xorw %cx, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define XOR_DX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X31, 0X16 # xorw %dx, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define XOR_DI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X31, 0X3E # xorw %di, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define XOR_SI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X31, 0X36 # xorw %si, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define XOR_BP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X31, 0X2E # xorw %bp, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define XOR_SP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X31, 0X26 # xorw %sp, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))

#define XOR_AX_FROM_PTR_BX CMT_ASM(".byte 0X33, 0X07 # xorw (%bx), %ax")
#define XOR_AX_FROM_PTR_BP CMT_ASM(".byte 0X33, 0X46, 0X00 # xorw (%bp), %ax")
#define XOR_AX_FROM_PTR_SI CMT_ASM(".byte 0X33, 0X04 # xorw (%si), %ax")
#define XOR_AX_FROM_PTR_DI CMT_ASM(".byte 0X33, 0X05 # xorw (%di), %ax")

#define XOR_BX_FROM_PTR_BX CMT_ASM(".byte 0X33, 0X1F # xorw (%bx), %bx")
#define XOR_BX_FROM_PTR_BP CMT_ASM(".byte 0X33, 0X5E, 0X00 # xorw (%bp), %bx")
#define XOR_BX_FROM_PTR_SI CMT_ASM(".byte 0X33, 0X1C # xorw (%si), %bx")
#define XOR_BX_FROM_PTR_DI CMT_ASM(".byte 0X33, 0X1D # xorw (%di), %bx")

#define XOR_CX_FROM_PTR_BX CMT_ASM(".byte 0X33, 0X0F # xorw (%bx), %cx")
#define XOR_CX_FROM_PTR_BP CMT_ASM(".byte 0X33, 0X4E, 0X00 # xorw (%bp), %cx")
#define XOR_CX_FROM_PTR_SI CMT_ASM(".byte 0X33, 0X0C # xorw (%si), %cx")
#define XOR_CX_FROM_PTR_DI CMT_ASM(".byte 0X33, 0X0D # xorw (%di), %cx")

#define XOR_DX_FROM_PTR_BX CMT_ASM(".byte 0X33, 0X17 # xorw (%bx), %dx")
#define XOR_DX_FROM_PTR_BP CMT_ASM(".byte 0X33, 0X56, 0X00 # xorw (%bp), %dx")
#define XOR_DX_FROM_PTR_SI CMT_ASM(".byte 0X33, 0X14 # xorw (%si), %dx")
#define XOR_DX_FROM_PTR_DI CMT_ASM(".byte 0X33, 0X15 # xorw (%di), %dx")

#define XOR_DI_FROM_PTR_BX CMT_ASM(".byte 0X33, 0X3F # xorw (%bx), %di")
#define XOR_DI_FROM_PTR_BP CMT_ASM(".byte 0X33, 0X7E, 0X00 # xorw (%bp), %di")
#define XOR_DI_FROM_PTR_SI CMT_ASM(".byte 0X33, 0X3C # xorw (%si), %di")
#define XOR_DI_FROM_PTR_DI CMT_ASM(".byte 0X33, 0X3D # xorw (%di), %di")

#define XOR_SI_FROM_PTR_BX CMT_ASM(".byte 0X33, 0X37 # xorw (%bx), %si")
#define XOR_SI_FROM_PTR_BP CMT_ASM(".byte 0X33, 0X76, 0X00 # xorw (%bp), %si")
#define XOR_SI_FROM_PTR_SI CMT_ASM(".byte 0X33, 0X34 # xorw (%si), %si")
#define XOR_SI_FROM_PTR_DI CMT_ASM(".byte 0X33, 0X35 # xorw (%di), %si")

#define XOR_BP_FROM_PTR_BX CMT_ASM(".byte 0X33, 0X2F # xorw (%bx), %bp")
#define XOR_BP_FROM_PTR_BP CMT_ASM(".byte 0X33, 0X6E, 0X00 # xorw (%bp), %bp")
#define XOR_BP_FROM_PTR_SI CMT_ASM(".byte 0X33, 0X2C # xorw (%si), %bp")
#define XOR_BP_FROM_PTR_DI CMT_ASM(".byte 0X33, 0X2D # xorw (%di), %bp")

#define XOR_SP_FROM_PTR_BX CMT_ASM(".byte 0X33, 0X27 # xorw (%bx), %sp")
#define XOR_SP_FROM_PTR_BP CMT_ASM(".byte 0X33, 0X66, 0X00 # xorw (%bp), %sp")
#define XOR_SP_FROM_PTR_SI CMT_ASM(".byte 0X33, 0X24 # xorw (%si), %sp")
#define XOR_SP_FROM_PTR_DI CMT_ASM(".byte 0X33, 0X25 # xorw (%di), %sp")

#define XOR_AX_TO_PTR_BX CMT_ASM(".byte 0X31, 0X07 # xorw %ax, (%bx)")
#define XOR_AX_TO_PTR_BP CMT_ASM(".byte 0X31, 0X46, 0X00 # xorw %ax, (%bp)")
#define XOR_AX_TO_PTR_SI CMT_ASM(".byte 0X31, 0X04 # xorw %ax, (%si)")
#define XOR_AX_TO_PTR_DI CMT_ASM(".byte 0X31, 0X05 # xorw %ax, (%di)")

#define XOR_BX_TO_PTR_BX CMT_ASM(".byte 0X31, 0X1F # xorw %bx, (%bx)")
#define XOR_BX_TO_PTR_BP CMT_ASM(".byte 0X31, 0X5E, 0X00 # xorw %bx, (%bp)")
#define XOR_BX_TO_PTR_SI CMT_ASM(".byte 0X31, 0X1C # xorw %bx, (%si)")
#define XOR_BX_TO_PTR_DI CMT_ASM(".byte 0X31, 0X1D # xorw %bx, (%di)")

#define XOR_CX_TO_PTR_BX CMT_ASM(".byte 0X31, 0X0F # xorw %cx, (%bx)")
#define XOR_CX_TO_PTR_BP CMT_ASM(".byte 0X31, 0X4E, 0X00 # xorw %cx, (%bp)")
#define XOR_CX_TO_PTR_SI CMT_ASM(".byte 0X31, 0X0C # xorw %cx, (%si)")
#define XOR_CX_TO_PTR_DI CMT_ASM(".byte 0X31, 0X0D # xorw %cx, (%di)")

#define XOR_DX_TO_PTR_BX CMT_ASM(".byte 0X31, 0X17 # xorw %dx, (%bx)")
#define XOR_DX_TO_PTR_BP CMT_ASM(".byte 0X31, 0X56, 0X00 # xorw %dx, (%bp)")
#define XOR_DX_TO_PTR_SI CMT_ASM(".byte 0X31, 0X14 # xorw %dx, (%si)")
#define XOR_DX_TO_PTR_DI CMT_ASM(".byte 0X31, 0X15 # xorw %dx, (%di)")

#define XOR_DI_TO_PTR_BX CMT_ASM(".byte 0X31, 0X3F # xorw %di, (%bx)")
#define XOR_DI_TO_PTR_BP CMT_ASM(".byte 0X31, 0X7E, 0X00 # xorw %di, (%bp)")
#define XOR_DI_TO_PTR_SI CMT_ASM(".byte 0X31, 0X3C # xorw %di, (%si)")
#define XOR_DI_TO_PTR_DI CMT_ASM(".byte 0X31, 0X3D # xorw %di, (%di)")

#define XOR_SI_TO_PTR_BX CMT_ASM(".byte 0X31, 0X37 # xorw %si, (%bx)")
#define XOR_SI_TO_PTR_BP CMT_ASM(".byte 0X31, 0X76, 0X00 # xorw %si, (%bp)")
#define XOR_SI_TO_PTR_SI CMT_ASM(".byte 0X31, 0X34 # xorw %si, (%si)")
#define XOR_SI_TO_PTR_DI CMT_ASM(".byte 0X31, 0X35 # xorw %si, (%di)")

#define XOR_BP_TO_PTR_BX CMT_ASM(".byte 0X31, 0X2F # xorw %bp, (%bx)")
#define XOR_BP_TO_PTR_BP CMT_ASM(".byte 0X31, 0X6E, 0X00 # xorw %bp, (%bp)")
#define XOR_BP_TO_PTR_SI CMT_ASM(".byte 0X31, 0X2C # xorw %bp, (%si)")
#define XOR_BP_TO_PTR_DI CMT_ASM(".byte 0X31, 0X2D # xorw %bp, (%di)")

#define XOR_SP_TO_PTR_BX CMT_ASM(".byte 0X31, 0X27 # xorw %sp, (%bx)")
#define XOR_SP_TO_PTR_BP CMT_ASM(".byte 0X31, 0X66, 0X00 # xorw %sp, (%bp)")
#define XOR_SP_TO_PTR_SI CMT_ASM(".byte 0X31, 0X24 # xorw %sp, (%si)")
#define XOR_SP_TO_PTR_DI CMT_ASM(".byte 0X31, 0X25 # xorw %sp, (%di)")

#define XOR_AX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X33, 0X87 # xorw " _(VALUE) "(%bx), %ax")\
	CMT_ASM(".short " _(VALUE))
#define XOR_AX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X33, 0X86 # xorw " _(VALUE) "(%bp), %ax")\
	CMT_ASM(".short " _(VALUE))
#define XOR_AX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X33, 0X84 # xorw " _(VALUE) "(%si), %ax")\
	CMT_ASM(".short " _(VALUE))
#define XOR_AX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X33, 0X85 # xorw " _(VALUE) "(%di), %ax")\
	CMT_ASM(".short " _(VALUE))

#define XOR_BX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X33, 0X9F # xorw " _(VALUE) "(%bx), %bx")\
	CMT_ASM(".short " _(VALUE))
#define XOR_BX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X33, 0X9E # xorw " _(VALUE) "(%bp), %bx")\
	CMT_ASM(".short " _(VALUE))
#define XOR_BX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X33, 0X9C # xorw " _(VALUE) "(%si), %bx")\
	CMT_ASM(".short " _(VALUE))
#define XOR_BX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X33, 0X9D # xorw " _(VALUE) "(%di), %bx")\
	CMT_ASM(".short " _(VALUE))

#define XOR_CX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X33, 0X8F # xorw " _(VALUE) "(%bx), %cx")\
	CMT_ASM(".short " _(VALUE))
#define XOR_CX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X33, 0X8E # xorw " _(VALUE) "(%bp), %cx")\
	CMT_ASM(".short " _(VALUE))
#define XOR_CX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X33, 0X8C # xorw " _(VALUE) "(%si), %cx")\
	CMT_ASM(".short " _(VALUE))
#define XOR_CX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X33, 0X8D # xorw " _(VALUE) "(%di), %cx")\
	CMT_ASM(".short " _(VALUE))

#define XOR_DX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X33, 0X97 # xorw " _(VALUE) "(%bx), %dx")\
	CMT_ASM(".short " _(VALUE))
#define XOR_DX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X33, 0X96 # xorw " _(VALUE) "(%bp), %dx")\
	CMT_ASM(".short " _(VALUE))
#define XOR_DX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X33, 0X94 # xorw " _(VALUE) "(%si), %dx")\
	CMT_ASM(".short " _(VALUE))
#define XOR_DX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X33, 0X95 # xorw " _(VALUE) "(%di), %dx")\
	CMT_ASM(".short " _(VALUE))

#define XOR_DI_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X33, 0XBF # xorw " _(VALUE) "(%bx), %di")\
	CMT_ASM(".short " _(VALUE))
#define XOR_DI_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X33, 0XBE # xorw " _(VALUE) "(%bp), %di")\
	CMT_ASM(".short " _(VALUE))
#define XOR_DI_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X33, 0XBC # xorw " _(VALUE) "(%si), %di")\
	CMT_ASM(".short " _(VALUE))
#define XOR_DI_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X33, 0XBD # xorw " _(VALUE) "(%di), %di")\
	CMT_ASM(".short " _(VALUE))

#define XOR_SI_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X33, 0XB7 # xorw " _(VALUE) "(%bx), %si")\
	CMT_ASM(".short " _(VALUE))
#define XOR_SI_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X33, 0XB6 # xorw " _(VALUE) "(%bp), %si")\
	CMT_ASM(".short " _(VALUE))
#define XOR_SI_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X33, 0XB4 # xorw " _(VALUE) "(%si), %si")\
	CMT_ASM(".short " _(VALUE))
#define XOR_SI_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X33, 0XB5 # xorw " _(VALUE) "(%di), %si")\
	CMT_ASM(".short " _(VALUE))

#define XOR_BP_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X33, 0XAF # xorw " _(VALUE) "(%bx), %bp")\
	CMT_ASM(".short " _(VALUE))
#define XOR_BP_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X33, 0XAE # xorw " _(VALUE) "(%bp), %bp")\
	CMT_ASM(".short " _(VALUE))
#define XOR_BP_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X33, 0XAC # xorw " _(VALUE) "(%si), %bp")\
	CMT_ASM(".short " _(VALUE))
#define XOR_BP_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X33, 0XAD # xorw " _(VALUE) "(%di), %bp")\
	CMT_ASM(".short " _(VALUE))

#define XOR_SP_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X33, 0XA7 # xorw " _(VALUE) "(%bx), %sp")\
	CMT_ASM(".short " _(VALUE))
#define XOR_SP_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X33, 0XA6 # xorw " _(VALUE) "(%bp), %sp")\
	CMT_ASM(".short " _(VALUE))
#define XOR_SP_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X33, 0XA4 # xorw " _(VALUE) "(%si), %sp")\
	CMT_ASM(".short " _(VALUE))
#define XOR_SP_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X33, 0XA5 # xorw " _(VALUE) "(%di), %sp")\
	CMT_ASM(".short " _(VALUE))

#define XOR_AX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X31, 0X87 # xorw %ax, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define XOR_AX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X31, 0X86 # xorw %ax, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define XOR_AX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X31, 0X84 # xorw %ax, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define XOR_AX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X31, 0X85 # xorw %ax, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define XOR_BX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X31, 0X9F # xorw %bx, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define XOR_BX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X31, 0X9E # xorw %bx, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define XOR_BX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X31, 0X9C # xorw %bx, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define XOR_BX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X31, 0X9D # xorw %bx, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define XOR_CX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X31, 0X8F # xorw %cx, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define XOR_CX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X31, 0X8E # xorw %cx, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define XOR_CX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X31, 0X8C # xorw %cx, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define XOR_CX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X31, 0X8D # xorw %cx, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define XOR_DX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X31, 0X97 # xorw %dx, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define XOR_DX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X31, 0X96 # xorw %dx, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define XOR_DX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X31, 0X94 # xorw %dx, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define XOR_DX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X31, 0X95 # xorw %dx, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define XOR_DI_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X31, 0XBF # xorw %di, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define XOR_DI_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X31, 0XBE # xorw %di, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define XOR_DI_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X31, 0XBC # xorw %di, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define XOR_DI_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X31, 0XBD # xorw %di, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define XOR_SI_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X31, 0XB7 # xorw %si, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define XOR_SI_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X31, 0XB6 # xorw %si, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define XOR_SI_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X31, 0XB4 # xorw %si, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define XOR_SI_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X31, 0XB5 # xorw %si, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define XOR_BP_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X31, 0XAF # xorw %bp, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define XOR_BP_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X31, 0XAE # xorw %bp, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define XOR_BP_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X31, 0XAC # xorw %bp, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define XOR_BP_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X31, 0XAD # xorw %bp, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define XOR_SP_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X31, 0XA7 # xorw %sp, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define XOR_SP_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X31, 0XA6 # xorw %sp, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define XOR_SP_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X31, 0XA4 # xorw %sp, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define XOR_SP_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X31, 0XA5 # xorw %sp, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))
#endif /* __SYSTEM_16_BIT__ */

#ifdef __SYSTEM_32_BIT__
#define XOR_AX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0X05 # xorw (" _(VALUE) "), %ax")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0X1D # xorw (" _(VALUE) "), %bx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0X0D # xorw (" _(VALUE) "), %cx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0X15 # xorw (" _(VALUE) "), %dx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0X3D # xorw (" _(VALUE) "), %di")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0X35 # xorw (" _(VALUE) "), %si")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0X2D # xorw (" _(VALUE) "), %bp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0X25 # xorw (" _(VALUE) "), %sp")\
	CMT_ASM(".long " _(VALUE))

#define XOR_AX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0X05 # xorw %ax, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0X1D # xorw %bx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0X0D # xorw %cx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0X15 # xorw %dx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0X3D # xorw %di, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0X35 # xorw %si, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0X2D # xorw %bp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0X25 # xorw %sp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))

#define XOR_AX_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X33, 0X00 # xorw (%eax), %ax")
#define XOR_AX_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X33, 0X03 # xorw (%ebx), %ax")
#define XOR_AX_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X33, 0X01 # xorw (%ecx), %ax")
#define XOR_AX_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X33, 0X02 # xorw (%edx), %ax")
#define XOR_AX_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X33, 0X07 # xorw (%edi), %ax")
#define XOR_AX_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X33, 0X06 # xorw (%esi), %ax")
#define XOR_AX_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X33, 0X45, 0X00 # xorw (%ebp), %ax")
#define XOR_AX_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X33, 0X04, 0X24 # xorw (%esp), %ax")
#define XOR_AX_FROM_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X33, 0X07 # xorw (%bx), %ax")
#define XOR_AX_FROM_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X33, 0X46, 0X00 # xorw (%bp), %ax")
#define XOR_AX_FROM_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X33, 0X04 # xorw (%si), %ax")
#define XOR_AX_FROM_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X33, 0X05 # xorw (%di), %ax")

#define XOR_BX_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X33, 0X18 # xorw (%eax), %bx")
#define XOR_BX_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X33, 0X1B # xorw (%ebx), %bx")
#define XOR_BX_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X33, 0X19 # xorw (%ecx), %bx")
#define XOR_BX_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X33, 0X1A # xorw (%edx), %bx")
#define XOR_BX_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X33, 0X1F # xorw (%edi), %bx")
#define XOR_BX_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X33, 0X1E # xorw (%esi), %bx")
#define XOR_BX_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X33, 0X5D, 0X00 # xorw (%ebp), %bx")
#define XOR_BX_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X33, 0X1C, 0X24 # xorw (%esp), %bx")
#define XOR_BX_FROM_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X33, 0X1F # xorw (%bx), %bx")
#define XOR_BX_FROM_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X33, 0X5E, 0X00 # xorw (%bp), %bx")
#define XOR_BX_FROM_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X33, 0X1C # xorw (%si), %bx")
#define XOR_BX_FROM_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X33, 0X1D # xorw (%di), %bx")

#define XOR_CX_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X33, 0X08 # xorw (%eax), %cx")
#define XOR_CX_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X33, 0X0B # xorw (%ebx), %cx")
#define XOR_CX_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X33, 0X09 # xorw (%ecx), %cx")
#define XOR_CX_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X33, 0X0A # xorw (%edx), %cx")
#define XOR_CX_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X33, 0X0F # xorw (%edi), %cx")
#define XOR_CX_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X33, 0X0E # xorw (%esi), %cx")
#define XOR_CX_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X33, 0X4D, 0X00 # xorw (%ebp), %cx")
#define XOR_CX_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X33, 0X0C, 0X24 # xorw (%esp), %cx")
#define XOR_CX_FROM_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X33, 0X0F # xorw (%bx), %cx")
#define XOR_CX_FROM_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X33, 0X4E, 0X00 # xorw (%bp), %cx")
#define XOR_CX_FROM_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X33, 0X0C # xorw (%si), %cx")
#define XOR_CX_FROM_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X33, 0X0D # xorw (%di), %cx")

#define XOR_DX_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X33, 0X10 # xorw (%eax), %dx")
#define XOR_DX_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X33, 0X13 # xorw (%ebx), %dx")
#define XOR_DX_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X33, 0X11 # xorw (%ecx), %dx")
#define XOR_DX_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X33, 0X12 # xorw (%edx), %dx")
#define XOR_DX_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X33, 0X17 # xorw (%edi), %dx")
#define XOR_DX_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X33, 0X16 # xorw (%esi), %dx")
#define XOR_DX_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X33, 0X55, 0X00 # xorw (%ebp), %dx")
#define XOR_DX_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X33, 0X14, 0X24 # xorw (%esp), %dx")
#define XOR_DX_FROM_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X33, 0X17 # xorw (%bx), %dx")
#define XOR_DX_FROM_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X33, 0X56, 0X00 # xorw (%bp), %dx")
#define XOR_DX_FROM_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X33, 0X14 # xorw (%si), %dx")
#define XOR_DX_FROM_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X33, 0X15 # xorw (%di), %dx")

#define XOR_DI_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X33, 0X38 # xorw (%eax), %di")
#define XOR_DI_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X33, 0X3B # xorw (%ebx), %di")
#define XOR_DI_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X33, 0X39 # xorw (%ecx), %di")
#define XOR_DI_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X33, 0X3A # xorw (%edx), %di")
#define XOR_DI_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X33, 0X3F # xorw (%edi), %di")
#define XOR_DI_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X33, 0X3E # xorw (%esi), %di")
#define XOR_DI_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X33, 0X7D, 0X00 # xorw (%ebp), %di")
#define XOR_DI_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X33, 0X3C, 0X24 # xorw (%esp), %di")
#define XOR_DI_FROM_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X33, 0X3F # xorw (%bx), %di")
#define XOR_DI_FROM_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X33, 0X7E, 0X00 # xorw (%bp), %di")
#define XOR_DI_FROM_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X33, 0X3C # xorw (%si), %di")
#define XOR_DI_FROM_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X33, 0X3D # xorw (%di), %di")

#define XOR_SI_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X33, 0X30 # xorw (%eax), %si")
#define XOR_SI_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X33, 0X33 # xorw (%ebx), %si")
#define XOR_SI_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X33, 0X31 # xorw (%ecx), %si")
#define XOR_SI_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X33, 0X32 # xorw (%edx), %si")
#define XOR_SI_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X33, 0X37 # xorw (%edi), %si")
#define XOR_SI_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X33, 0X36 # xorw (%esi), %si")
#define XOR_SI_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X33, 0X75, 0X00 # xorw (%ebp), %si")
#define XOR_SI_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X33, 0X34, 0X24 # xorw (%esp), %si")
#define XOR_SI_FROM_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X33, 0X37 # xorw (%bx), %si")
#define XOR_SI_FROM_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X33, 0X76, 0X00 # xorw (%bp), %si")
#define XOR_SI_FROM_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X33, 0X34 # xorw (%si), %si")
#define XOR_SI_FROM_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X33, 0X35 # xorw (%di), %si")

#define XOR_BP_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X33, 0X28 # xorw (%eax), %bp")
#define XOR_BP_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X33, 0X2B # xorw (%ebx), %bp")
#define XOR_BP_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X33, 0X29 # xorw (%ecx), %bp")
#define XOR_BP_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X33, 0X2A # xorw (%edx), %bp")
#define XOR_BP_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X33, 0X2F # xorw (%edi), %bp")
#define XOR_BP_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X33, 0X2E # xorw (%esi), %bp")
#define XOR_BP_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X33, 0X6D, 0X00 # xorw (%ebp), %bp")
#define XOR_BP_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X33, 0X2C, 0X24 # xorw (%esp), %bp")
#define XOR_BP_FROM_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X33, 0X2F # xorw (%bx), %bp")
#define XOR_BP_FROM_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X33, 0X6E, 0X00 # xorw (%bp), %bp")
#define XOR_BP_FROM_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X33, 0X2C # xorw (%si), %bp")
#define XOR_BP_FROM_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X33, 0X2D # xorw (%di), %bp")

#define XOR_SP_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X33, 0X20 # xorw (%eax), %sp")
#define XOR_SP_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X33, 0X23 # xorw (%ebx), %sp")
#define XOR_SP_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X33, 0X21 # xorw (%ecx), %sp")
#define XOR_SP_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X33, 0X22 # xorw (%edx), %sp")
#define XOR_SP_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X33, 0X27 # xorw (%edi), %sp")
#define XOR_SP_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X33, 0X26 # xorw (%esi), %sp")
#define XOR_SP_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X33, 0X65, 0X00 # xorw (%ebp), %sp")
#define XOR_SP_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X33, 0X24, 0X24 # xorw (%esp), %sp")
#define XOR_SP_FROM_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X33, 0X27 # xorw (%bx), %sp")
#define XOR_SP_FROM_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X33, 0X66, 0X00 # xorw (%bp), %sp")
#define XOR_SP_FROM_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X33, 0X24 # xorw (%si), %sp")
#define XOR_SP_FROM_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X33, 0X25 # xorw (%di), %sp")

#define XOR_AX_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X31, 0X00 # xorw %ax, (%eax)")
#define XOR_AX_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X31, 0X03 # xorw %ax, (%ebx)")
#define XOR_AX_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X31, 0X01 # xorw %ax, (%ecx)")
#define XOR_AX_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X31, 0X02 # xorw %ax, (%edx)")
#define XOR_AX_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X31, 0X07 # xorw %ax, (%edi)")
#define XOR_AX_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X31, 0X06 # xorw %ax, (%esi)")
#define XOR_AX_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X31, 0X45, 0X00 # xorw %ax, (%ebp)")
#define XOR_AX_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X31, 0X04, 0X24 # xorw %ax, (%esp)")
#define XOR_AX_TO_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X31, 0X07 # xorw %ax, (%bx)")
#define XOR_AX_TO_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X31, 0X46, 0X00 # xorw %ax, (%bp)")
#define XOR_AX_TO_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X31, 0X04 # xorw %ax, (%si)")
#define XOR_AX_TO_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X31, 0X05 # xorw %ax, (%di)")

#define XOR_BX_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X31, 0X18 # xorw %bx, (%eax)")
#define XOR_BX_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X31, 0X1B # xorw %bx, (%ebx)")
#define XOR_BX_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X31, 0X19 # xorw %bx, (%ecx)")
#define XOR_BX_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X31, 0X1A # xorw %bx, (%edx)")
#define XOR_BX_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X31, 0X1F # xorw %bx, (%edi)")
#define XOR_BX_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X31, 0X1E # xorw %bx, (%esi)")
#define XOR_BX_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X31, 0X5D, 0X00 # xorw %bx, (%ebp)")
#define XOR_BX_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X31, 0X1C, 0X24 # xorw %bx, (%esp)")
#define XOR_BX_TO_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X31, 0X1F # xorw %bx, (%bx)")
#define XOR_BX_TO_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X31, 0X5E, 0X00 # xorw %bx, (%bp)")
#define XOR_BX_TO_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X31, 0X1C # xorw %bx, (%si)")
#define XOR_BX_TO_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X31, 0X1D # xorw %bx, (%di)")

#define XOR_CX_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X31, 0X08 # xorw %cx, (%eax)")
#define XOR_CX_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X31, 0X0B # xorw %cx, (%ebx)")
#define XOR_CX_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X31, 0X09 # xorw %cx, (%ecx)")
#define XOR_CX_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X31, 0X0A # xorw %cx, (%edx)")
#define XOR_CX_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X31, 0X0F # xorw %cx, (%edi)")
#define XOR_CX_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X31, 0X0E # xorw %cx, (%esi)")
#define XOR_CX_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X31, 0X4D, 0X00 # xorw %cx, (%ebp)")
#define XOR_CX_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X31, 0X0C, 0X24 # xorw %cx, (%esp)")
#define XOR_CX_TO_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X31, 0X0F # xorw %cx, (%bx)")
#define XOR_CX_TO_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X31, 0X4E, 0X00 # xorw %cx, (%bp)")
#define XOR_CX_TO_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X31, 0X0C # xorw %cx, (%si)")
#define XOR_CX_TO_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X31, 0X0D # xorw %cx, (%di)")

#define XOR_DX_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X31, 0X10 # xorw %dx, (%eax)")
#define XOR_DX_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X31, 0X13 # xorw %dx, (%ebx)")
#define XOR_DX_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X31, 0X11 # xorw %dx, (%ecx)")
#define XOR_DX_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X31, 0X12 # xorw %dx, (%edx)")
#define XOR_DX_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X31, 0X17 # xorw %dx, (%edi)")
#define XOR_DX_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X31, 0X16 # xorw %dx, (%esi)")
#define XOR_DX_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X31, 0X55, 0X00 # xorw %dx, (%ebp)")
#define XOR_DX_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X31, 0X14, 0X24 # xorw %dx, (%esp)")
#define XOR_DX_TO_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X31, 0X17 # xorw %dx, (%bx)")
#define XOR_DX_TO_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X31, 0X56, 0X00 # xorw %dx, (%bp)")
#define XOR_DX_TO_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X31, 0X14 # xorw %dx, (%si)")
#define XOR_DX_TO_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X31, 0X15 # xorw %dx, (%di)")

#define XOR_DI_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X31, 0X38 # xorw %di, (%eax)")
#define XOR_DI_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X31, 0X3B # xorw %di, (%ebx)")
#define XOR_DI_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X31, 0X39 # xorw %di, (%ecx)")
#define XOR_DI_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X31, 0X3A # xorw %di, (%edx)")
#define XOR_DI_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X31, 0X3F # xorw %di, (%edi)")
#define XOR_DI_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X31, 0X3E # xorw %di, (%esi)")
#define XOR_DI_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X31, 0X7D, 0X00 # xorw %di, (%ebp)")
#define XOR_DI_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X31, 0X3C, 0X24 # xorw %di, (%esp)")
#define XOR_DI_TO_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X31, 0X3F # xorw %di, (%bx)")
#define XOR_DI_TO_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X31, 0X7E, 0X00 # xorw %di, (%bp)")
#define XOR_DI_TO_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X31, 0X3C # xorw %di, (%si)")
#define XOR_DI_TO_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X31, 0X3D # xorw %di, (%di)")

#define XOR_SI_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X31, 0X30 # xorw %si, (%eax)")
#define XOR_SI_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X31, 0X33 # xorw %si, (%ebx)")
#define XOR_SI_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X31, 0X31 # xorw %si, (%ecx)")
#define XOR_SI_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X31, 0X32 # xorw %si, (%edx)")
#define XOR_SI_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X31, 0X37 # xorw %si, (%edi)")
#define XOR_SI_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X31, 0X36 # xorw %si, (%esi)")
#define XOR_SI_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X31, 0X75, 0X00 # xorw %si, (%ebp)")
#define XOR_SI_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X31, 0X34, 0X24 # xorw %si, (%esp)")
#define XOR_SI_TO_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X31, 0X37 # xorw %si, (%bx)")
#define XOR_SI_TO_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X31, 0X76, 0X00 # xorw %si, (%bp)")
#define XOR_SI_TO_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X31, 0X34 # xorw %si, (%si)")
#define XOR_SI_TO_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X31, 0X35 # xorw %si, (%di)")

#define XOR_BP_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X31, 0X28 # xorw %bp, (%eax)")
#define XOR_BP_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X31, 0X2B # xorw %bp, (%ebx)")
#define XOR_BP_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X31, 0X29 # xorw %bp, (%ecx)")
#define XOR_BP_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X31, 0X2A # xorw %bp, (%edx)")
#define XOR_BP_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X31, 0X2F # xorw %bp, (%edi)")
#define XOR_BP_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X31, 0X2E # xorw %bp, (%esi)")
#define XOR_BP_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X31, 0X6D, 0X00 # xorw %bp, (%ebp)")
#define XOR_BP_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X31, 0X2C, 0X24 # xorw %bp, (%esp)")
#define XOR_BP_TO_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X31, 0X2F # xorw %bp, (%bx)")
#define XOR_BP_TO_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X31, 0X6E, 0X00 # xorw %bp, (%bp)")
#define XOR_BP_TO_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X31, 0X2C # xorw %bp, (%si)")
#define XOR_BP_TO_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X31, 0X2D # xorw %bp, (%di)")

#define XOR_SP_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X31, 0X20 # xorw %sp, (%eax)")
#define XOR_SP_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X31, 0X23 # xorw %sp, (%ebx)")
#define XOR_SP_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X31, 0X21 # xorw %sp, (%ecx)")
#define XOR_SP_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X31, 0X22 # xorw %sp, (%edx)")
#define XOR_SP_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X31, 0X27 # xorw %sp, (%edi)")
#define XOR_SP_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X31, 0X26 # xorw %sp, (%esi)")
#define XOR_SP_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X31, 0X65, 0X00 # xorw %sp, (%ebp)")
#define XOR_SP_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X31, 0X24, 0X24 # xorw %sp, (%esp)")
#define XOR_SP_TO_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X31, 0X27 # xorw %sp, (%bx)")
#define XOR_SP_TO_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X31, 0X66, 0X00 # xorw %sp, (%bp)")
#define XOR_SP_TO_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X31, 0X24 # xorw %sp, (%si)")
#define XOR_SP_TO_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X31, 0X25 # xorw %sp, (%di)")

#define XOR_AX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0X80 # xorw " _(VALUE) "(%eax), %ax")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0X83 # xorw " _(VALUE) "(%ebx), %ax")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0X81 # xorw " _(VALUE) "(%ecx), %ax")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0X82 # xorw " _(VALUE) "(%edx), %ax")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0X87 # xorw " _(VALUE) "(%edi), %ax")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0X86 # xorw " _(VALUE) "(%esi), %ax")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0X85 # xorw " _(VALUE) "(%ebp), %ax")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0X84, 0X24 # xorw " _(VALUE) "(%esp), %ax")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X33, 0X87 # xorw " _(VALUE) "(%bx), %ax")\
	CMT_ASM(".short " _(VALUE))
#define XOR_AX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X33, 0X86 # xorw " _(VALUE) "(%bp), %ax")\
	CMT_ASM(".short " _(VALUE))
#define XOR_AX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X33, 0X84 # xorw " _(VALUE) "(%si), %ax")\
	CMT_ASM(".short " _(VALUE))
#define XOR_AX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X33, 0X85 # xorw " _(VALUE) "(%di), %ax")\
	CMT_ASM(".short " _(VALUE))

#define XOR_BX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0X98 # xorw " _(VALUE) "(%eax), %bx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0X9B # xorw " _(VALUE) "(%ebx), %bx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0X99 # xorw " _(VALUE) "(%ecx), %bx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0X9A # xorw " _(VALUE) "(%edx), %bx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0X9F # xorw " _(VALUE) "(%edi), %bx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0X9E # xorw " _(VALUE) "(%esi), %bx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0X9D # xorw " _(VALUE) "(%ebp), %bx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0X9C, 0X24 # xorw " _(VALUE) "(%esp), %bx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X33, 0X9F # xorw " _(VALUE) "(%bx), %bx")\
	CMT_ASM(".short " _(VALUE))
#define XOR_BX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X33, 0X9E # xorw " _(VALUE) "(%bp), %bx")\
	CMT_ASM(".short " _(VALUE))
#define XOR_BX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X33, 0X9C # xorw " _(VALUE) "(%si), %bx")\
	CMT_ASM(".short " _(VALUE))
#define XOR_BX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X33, 0X9D # xorw " _(VALUE) "(%di), %bx")\
	CMT_ASM(".short " _(VALUE))

#define XOR_CX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0X88 # xorw " _(VALUE) "(%eax), %cx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0X8B # xorw " _(VALUE) "(%ebx), %cx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0X89 # xorw " _(VALUE) "(%ecx), %cx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0X8A # xorw " _(VALUE) "(%edx), %cx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0X8F # xorw " _(VALUE) "(%edi), %cx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0X8E # xorw " _(VALUE) "(%esi), %cx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0X8D # xorw " _(VALUE) "(%ebp), %cx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0X8C, 0X24 # xorw " _(VALUE) "(%esp), %cx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X33, 0X8F # xorw " _(VALUE) "(%bx), %cx")\
	CMT_ASM(".short " _(VALUE))
#define XOR_CX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X33, 0X8E # xorw " _(VALUE) "(%bp), %cx")\
	CMT_ASM(".short " _(VALUE))
#define XOR_CX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X33, 0X8C # xorw " _(VALUE) "(%si), %cx")\
	CMT_ASM(".short " _(VALUE))
#define XOR_CX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X33, 0X8D # xorw " _(VALUE) "(%di), %cx")\
	CMT_ASM(".short " _(VALUE))

#define XOR_DX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0X90 # xorw " _(VALUE) "(%eax), %dx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0X93 # xorw " _(VALUE) "(%ebx), %dx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0X91 # xorw " _(VALUE) "(%ecx), %dx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0X92 # xorw " _(VALUE) "(%edx), %dx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0X97 # xorw " _(VALUE) "(%edi), %dx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0X96 # xorw " _(VALUE) "(%esi), %dx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0X95 # xorw " _(VALUE) "(%ebp), %dx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0X94, 0X24 # xorw " _(VALUE) "(%esp), %dx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X33, 0X97 # xorw " _(VALUE) "(%bx), %dx")\
	CMT_ASM(".short " _(VALUE))
#define XOR_DX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X33, 0X96 # xorw " _(VALUE) "(%bp), %dx")\
	CMT_ASM(".short " _(VALUE))
#define XOR_DX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X33, 0X94 # xorw " _(VALUE) "(%si), %dx")\
	CMT_ASM(".short " _(VALUE))
#define XOR_DX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X33, 0X95 # xorw " _(VALUE) "(%di), %dx")\
	CMT_ASM(".short " _(VALUE))

#define XOR_DI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0XB8 # xorw " _(VALUE) "(%eax), %di")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0XBB # xorw " _(VALUE) "(%ebx), %di")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0XB9 # xorw " _(VALUE) "(%ecx), %di")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0XBA # xorw " _(VALUE) "(%edx), %di")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0XBF # xorw " _(VALUE) "(%edi), %di")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0XBE # xorw " _(VALUE) "(%esi), %di")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0XBD # xorw " _(VALUE) "(%ebp), %di")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0XBC, 0X24 # xorw " _(VALUE) "(%esp), %di")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DI_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X33, 0XBF # xorw " _(VALUE) "(%bx), %di")\
	CMT_ASM(".short " _(VALUE))
#define XOR_DI_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X33, 0XBE # xorw " _(VALUE) "(%bp), %di")\
	CMT_ASM(".short " _(VALUE))
#define XOR_DI_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X33, 0XBC # xorw " _(VALUE) "(%si), %di")\
	CMT_ASM(".short " _(VALUE))
#define XOR_DI_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X33, 0XBD # xorw " _(VALUE) "(%di), %di")\
	CMT_ASM(".short " _(VALUE))

#define XOR_SI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0XB0 # xorw " _(VALUE) "(%eax), %si")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0XB3 # xorw " _(VALUE) "(%ebx), %si")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0XB1 # xorw " _(VALUE) "(%ecx), %si")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0XB2 # xorw " _(VALUE) "(%edx), %si")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0XB7 # xorw " _(VALUE) "(%edi), %si")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0XB6 # xorw " _(VALUE) "(%esi), %si")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0XB5 # xorw " _(VALUE) "(%ebp), %si")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0XB4, 0X24 # xorw " _(VALUE) "(%esp), %si")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SI_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X33, 0XB7 # xorw " _(VALUE) "(%bx), %si")\
	CMT_ASM(".short " _(VALUE))
#define XOR_SI_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X33, 0XB6 # xorw " _(VALUE) "(%bp), %si")\
	CMT_ASM(".short " _(VALUE))
#define XOR_SI_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X33, 0XB4 # xorw " _(VALUE) "(%si), %si")\
	CMT_ASM(".short " _(VALUE))
#define XOR_SI_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X33, 0XB5 # xorw " _(VALUE) "(%di), %si")\
	CMT_ASM(".short " _(VALUE))

#define XOR_BP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0XA8 # xorw " _(VALUE) "(%eax), %bp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0XAB # xorw " _(VALUE) "(%ebx), %bp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0XA9 # xorw " _(VALUE) "(%ecx), %bp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0XAA # xorw " _(VALUE) "(%edx), %bp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0XAF # xorw " _(VALUE) "(%edi), %bp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0XAE # xorw " _(VALUE) "(%esi), %bp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0XAD # xorw " _(VALUE) "(%ebp), %bp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0XAC, 0X24 # xorw " _(VALUE) "(%esp), %bp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BP_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X33, 0XAF # xorw " _(VALUE) "(%bx), %bp")\
	CMT_ASM(".short " _(VALUE))
#define XOR_BP_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X33, 0XAE # xorw " _(VALUE) "(%bp), %bp")\
	CMT_ASM(".short " _(VALUE))
#define XOR_BP_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X33, 0XAC # xorw " _(VALUE) "(%si), %bp")\
	CMT_ASM(".short " _(VALUE))
#define XOR_BP_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X33, 0XAD # xorw " _(VALUE) "(%di), %bp")\
	CMT_ASM(".short " _(VALUE))

#define XOR_SP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0XA0 # xorw " _(VALUE) "(%eax), %sp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0XA3 # xorw " _(VALUE) "(%ebx), %sp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0XA1 # xorw " _(VALUE) "(%ecx), %sp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0XA2 # xorw " _(VALUE) "(%edx), %sp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0XA7 # xorw " _(VALUE) "(%edi), %sp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0XA6 # xorw " _(VALUE) "(%esi), %sp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0XA5 # xorw " _(VALUE) "(%ebp), %sp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0XA4, 0X24 # xorw " _(VALUE) "(%esp), %sp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SP_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X33, 0XA7 # xorw " _(VALUE) "(%bx), %sp")\
	CMT_ASM(".short " _(VALUE))
#define XOR_SP_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X33, 0XA6 # xorw " _(VALUE) "(%bp), %sp")\
	CMT_ASM(".short " _(VALUE))
#define XOR_SP_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X33, 0XA4 # xorw " _(VALUE) "(%si), %sp")\
	CMT_ASM(".short " _(VALUE))
#define XOR_SP_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X33, 0XA5 # xorw " _(VALUE) "(%di), %sp")\
	CMT_ASM(".short " _(VALUE))

#define XOR_AX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0X80 # xorw %ax, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0X83 # xorw %ax, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0X81 # xorw %ax, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0X82 # xorw %ax, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0X87 # xorw %ax, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0X86 # xorw %ax, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0X85 # xorw %ax, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0X84, 0X24 # xorw %ax, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X31, 0X87 # xorw %ax, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define XOR_AX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X31, 0X86 # xorw %ax, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define XOR_AX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X31, 0X84 # xorw %ax, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define XOR_AX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X31, 0X85 # xorw %ax, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define XOR_BX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0X98 # xorw %bx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0X9B # xorw %bx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0X99 # xorw %bx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0X9A # xorw %bx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0X9F # xorw %bx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0X9E # xorw %bx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0X9D # xorw %bx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0X9C, 0X24 # xorw %bx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X31, 0X9F # xorw %bx, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define XOR_BX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X31, 0X9E # xorw %bx, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define XOR_BX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X31, 0X9C # xorw %bx, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define XOR_BX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X31, 0X9D # xorw %bx, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define XOR_CX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0X88 # xorw %cx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0X8B # xorw %cx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0X89 # xorw %cx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0X8A # xorw %cx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0X8F # xorw %cx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0X8E # xorw %cx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0X8D # xorw %cx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0X8C, 0X24 # xorw %cx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X31, 0X8F # xorw %cx, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define XOR_CX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X31, 0X8E # xorw %cx, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define XOR_CX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X31, 0X8C # xorw %cx, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define XOR_CX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X31, 0X8D # xorw %cx, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define XOR_DX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0X90 # xorw %dx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0X93 # xorw %dx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0X91 # xorw %dx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0X92 # xorw %dx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0X97 # xorw %dx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0X96 # xorw %dx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0X95 # xorw %dx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0X94, 0X24 # xorw %dx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X31, 0X97 # xorw %dx, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define XOR_DX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X31, 0X96 # xorw %dx, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define XOR_DX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X31, 0X94 # xorw %dx, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define XOR_DX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X31, 0X95 # xorw %dx, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define XOR_DI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0XB8 # xorw %di, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0XBB # xorw %di, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0XB9 # xorw %di, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0XBA # xorw %di, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0XBF # xorw %di, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0XBE # xorw %di, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0XBD # xorw %di, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0XBC, 0X24 # xorw %di, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DI_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X31, 0XBF # xorw %di, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define XOR_DI_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X31, 0XBE # xorw %di, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define XOR_DI_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X31, 0XBC # xorw %di, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define XOR_DI_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X31, 0XBD # xorw %di, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define XOR_SI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0XB0 # xorw %si, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0XB3 # xorw %si, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0XB1 # xorw %si, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0XB2 # xorw %si, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0XB7 # xorw %si, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0XB6 # xorw %si, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0XB5 # xorw %si, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0XB4, 0X24 # xorw %si, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SI_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X31, 0XB7 # xorw %si, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define XOR_SI_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X31, 0XB6 # xorw %si, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define XOR_SI_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X31, 0XB4 # xorw %si, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define XOR_SI_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X31, 0XB5 # xorw %si, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define XOR_BP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0XA8 # xorw %bp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0XAB # xorw %bp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0XA9 # xorw %bp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0XAA # xorw %bp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0XAF # xorw %bp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0XAE # xorw %bp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0XAD # xorw %bp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0XAC, 0X24 # xorw %bp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BP_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X31, 0XAF # xorw %bp, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define XOR_BP_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X31, 0XAE # xorw %bp, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define XOR_BP_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X31, 0XAC # xorw %bp, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define XOR_BP_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X31, 0XAD # xorw %bp, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define XOR_SP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0XA0 # xorw %sp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0XA3 # xorw %sp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0XA1 # xorw %sp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0XA2 # xorw %sp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0XA7 # xorw %sp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0XA6 # xorw %sp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0XA5 # xorw %sp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0XA4, 0X24 # xorw %sp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SP_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X31, 0XA7 # xorw %sp, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define XOR_SP_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X31, 0XA6 # xorw %sp, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define XOR_SP_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X31, 0XA4 # xorw %sp, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define XOR_SP_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X31, 0XA5 # xorw %sp, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define XOR_AX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0X04, 0X25 # xorw (" _(VALUE) "), %ax")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0X1C, 0X25 # xorw (" _(VALUE) "), %bx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0X0C, 0X25 # xorw (" _(VALUE) "), %cx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0X14, 0X25 # xorw (" _(VALUE) "), %dx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0X3C, 0X25 # xorw (" _(VALUE) "), %di")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0X34, 0X25 # xorw (" _(VALUE) "), %si")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0X2C, 0X25 # xorw (" _(VALUE) "), %bp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0X24, 0X25 # xorw (" _(VALUE) "), %sp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8W_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X33, 0X04, 0X25 # xorw (" _(VALUE) "), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9W_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X33, 0X0C, 0X25 # xorw (" _(VALUE) "), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10W_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X33, 0X14, 0X25 # xorw (" _(VALUE) "), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11W_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X33, 0X1C, 0X25 # xorw (" _(VALUE) "), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12W_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X33, 0X24, 0X25 # xorw (" _(VALUE) "), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13W_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X33, 0X2C, 0X25 # xorw (" _(VALUE) "), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14W_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X33, 0X34, 0X25 # xorw (" _(VALUE) "), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15W_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X33, 0X3C, 0X25 # xorw (" _(VALUE) "), %r15w")\
	CMT_ASM(".long " _(VALUE))

#define XOR_AX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0X04, 0X25 # xorw %ax, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0X1C, 0X25 # xorw %bx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0X0C, 0X25 # xorw %cx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0X14, 0X25 # xorw %dx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0X3C, 0X25 # xorw %di, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0X34, 0X25 # xorw %si, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0X2C, 0X25 # xorw %bp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0X24, 0X25 # xorw %sp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8W_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X31, 0X04, 0X25 # xorw %r8w, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9W_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X31, 0X0C, 0X25 # xorw %r9w, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10W_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X31, 0X14, 0X25 # xorw %r10w, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11W_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X31, 0X1C, 0X25 # xorw %r11w, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12W_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X31, 0X24, 0X25 # xorw %r12w, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13W_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X31, 0X2C, 0X25 # xorw %r13w, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14W_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X31, 0X34, 0X25 # xorw %r14w, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15W_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X31, 0X3C, 0X25 # xorw %r15w, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))

#define XOR_AX_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X33, 0X00 # xorw (%rax), %ax")
#define XOR_AX_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X33, 0X03 # xorw (%rbx), %ax")
#define XOR_AX_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X33, 0X01 # xorw (%rcx), %ax")
#define XOR_AX_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X33, 0X02 # xorw (%rdx), %ax")
#define XOR_AX_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X33, 0X07 # xorw (%rdi), %ax")
#define XOR_AX_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X33, 0X06 # xorw (%rsi), %ax")
#define XOR_AX_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X33, 0X45, 0X00 # xorw (%rbp), %ax")
#define XOR_AX_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X33, 0X04, 0X24 # xorw (%rsp), %ax")
#define XOR_AX_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X33, 0X00 # xorw (%r8), %ax")
#define XOR_AX_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X33, 0X01 # xorw (%r9), %ax")
#define XOR_AX_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X33, 0X02 # xorw (%r10), %ax")
#define XOR_AX_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X33, 0X03 # xorw (%r11), %ax")
#define XOR_AX_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X33, 0X04, 0X24 # xorw (%r12), %ax")
#define XOR_AX_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X33, 0X45, 0X00 # xorw (%r13), %ax")
#define XOR_AX_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X33, 0X06 # xorw (%r14), %ax")
#define XOR_AX_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X33, 0X07 # xorw (%r15), %ax")
#define XOR_AX_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X33, 0X00 # xorw (%eax), %ax")
#define XOR_AX_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X33, 0X03 # xorw (%ebx), %ax")
#define XOR_AX_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X33, 0X01 # xorw (%ecx), %ax")
#define XOR_AX_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X33, 0X02 # xorw (%edx), %ax")
#define XOR_AX_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X33, 0X07 # xorw (%edi), %ax")
#define XOR_AX_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X33, 0X06 # xorw (%esi), %ax")
#define XOR_AX_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X33, 0X45, 0X00 # xorw (%ebp), %ax")
#define XOR_AX_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X33, 0X04, 0X24 # xorw (%esp), %ax")

#define XOR_BX_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X33, 0X18 # xorw (%rax), %bx")
#define XOR_BX_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X33, 0X1B # xorw (%rbx), %bx")
#define XOR_BX_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X33, 0X19 # xorw (%rcx), %bx")
#define XOR_BX_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X33, 0X1A # xorw (%rdx), %bx")
#define XOR_BX_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X33, 0X1F # xorw (%rdi), %bx")
#define XOR_BX_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X33, 0X1E # xorw (%rsi), %bx")
#define XOR_BX_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X33, 0X5D, 0X00 # xorw (%rbp), %bx")
#define XOR_BX_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X33, 0X1C, 0X24 # xorw (%rsp), %bx")
#define XOR_BX_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X33, 0X18 # xorw (%r8), %bx")
#define XOR_BX_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X33, 0X19 # xorw (%r9), %bx")
#define XOR_BX_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X33, 0X1A # xorw (%r10), %bx")
#define XOR_BX_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X33, 0X1B # xorw (%r11), %bx")
#define XOR_BX_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X33, 0X1C, 0X24 # xorw (%r12), %bx")
#define XOR_BX_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X33, 0X5D, 0X00 # xorw (%r13), %bx")
#define XOR_BX_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X33, 0X1E # xorw (%r14), %bx")
#define XOR_BX_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X33, 0X1F # xorw (%r15), %bx")
#define XOR_BX_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X33, 0X18 # xorw (%eax), %bx")
#define XOR_BX_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X33, 0X1B # xorw (%ebx), %bx")
#define XOR_BX_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X33, 0X19 # xorw (%ecx), %bx")
#define XOR_BX_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X33, 0X1A # xorw (%edx), %bx")
#define XOR_BX_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X33, 0X1F # xorw (%edi), %bx")
#define XOR_BX_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X33, 0X1E # xorw (%esi), %bx")
#define XOR_BX_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X33, 0X5D, 0X00 # xorw (%ebp), %bx")
#define XOR_BX_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X33, 0X1C, 0X24 # xorw (%esp), %bx")

#define XOR_CX_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X33, 0X08 # xorw (%rax), %cx")
#define XOR_CX_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X33, 0X0B # xorw (%rbx), %cx")
#define XOR_CX_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X33, 0X09 # xorw (%rcx), %cx")
#define XOR_CX_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X33, 0X0A # xorw (%rdx), %cx")
#define XOR_CX_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X33, 0X0F # xorw (%rdi), %cx")
#define XOR_CX_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X33, 0X0E # xorw (%rsi), %cx")
#define XOR_CX_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X33, 0X4D, 0X00 # xorw (%rbp), %cx")
#define XOR_CX_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X33, 0X0C, 0X24 # xorw (%rsp), %cx")
#define XOR_CX_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X33, 0X08 # xorw (%r8), %cx")
#define XOR_CX_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X33, 0X09 # xorw (%r9), %cx")
#define XOR_CX_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X33, 0X0A # xorw (%r10), %cx")
#define XOR_CX_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X33, 0X0B # xorw (%r11), %cx")
#define XOR_CX_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X33, 0X0C, 0X24 # xorw (%r12), %cx")
#define XOR_CX_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X33, 0X4D, 0X00 # xorw (%r13), %cx")
#define XOR_CX_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X33, 0X0E # xorw (%r14), %cx")
#define XOR_CX_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X33, 0X0F # xorw (%r15), %cx")
#define XOR_CX_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X33, 0X08 # xorw (%eax), %cx")
#define XOR_CX_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X33, 0X0B # xorw (%ebx), %cx")
#define XOR_CX_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X33, 0X09 # xorw (%ecx), %cx")
#define XOR_CX_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X33, 0X0A # xorw (%edx), %cx")
#define XOR_CX_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X33, 0X0F # xorw (%edi), %cx")
#define XOR_CX_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X33, 0X0E # xorw (%esi), %cx")
#define XOR_CX_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X33, 0X4D, 0X00 # xorw (%ebp), %cx")
#define XOR_CX_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X33, 0X0C, 0X24 # xorw (%esp), %cx")

#define XOR_DX_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X33, 0X10 # xorw (%rax), %dx")
#define XOR_DX_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X33, 0X13 # xorw (%rbx), %dx")
#define XOR_DX_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X33, 0X11 # xorw (%rcx), %dx")
#define XOR_DX_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X33, 0X12 # xorw (%rdx), %dx")
#define XOR_DX_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X33, 0X17 # xorw (%rdi), %dx")
#define XOR_DX_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X33, 0X16 # xorw (%rsi), %dx")
#define XOR_DX_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X33, 0X55, 0X00 # xorw (%rbp), %dx")
#define XOR_DX_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X33, 0X14, 0X24 # xorw (%rsp), %dx")
#define XOR_DX_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X33, 0X10 # xorw (%r8), %dx")
#define XOR_DX_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X33, 0X11 # xorw (%r9), %dx")
#define XOR_DX_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X33, 0X12 # xorw (%r10), %dx")
#define XOR_DX_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X33, 0X13 # xorw (%r11), %dx")
#define XOR_DX_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X33, 0X14, 0X24 # xorw (%r12), %dx")
#define XOR_DX_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X33, 0X55, 0X00 # xorw (%r13), %dx")
#define XOR_DX_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X33, 0X16 # xorw (%r14), %dx")
#define XOR_DX_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X33, 0X17 # xorw (%r15), %dx")
#define XOR_DX_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X33, 0X10 # xorw (%eax), %dx")
#define XOR_DX_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X33, 0X13 # xorw (%ebx), %dx")
#define XOR_DX_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X33, 0X11 # xorw (%ecx), %dx")
#define XOR_DX_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X33, 0X12 # xorw (%edx), %dx")
#define XOR_DX_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X33, 0X17 # xorw (%edi), %dx")
#define XOR_DX_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X33, 0X16 # xorw (%esi), %dx")
#define XOR_DX_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X33, 0X55, 0X00 # xorw (%ebp), %dx")
#define XOR_DX_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X33, 0X14, 0X24 # xorw (%esp), %dx")

#define XOR_DI_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X33, 0X38 # xorw (%rax), %di")
#define XOR_DI_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X33, 0X3B # xorw (%rbx), %di")
#define XOR_DI_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X33, 0X39 # xorw (%rcx), %di")
#define XOR_DI_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X33, 0X3A # xorw (%rdx), %di")
#define XOR_DI_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X33, 0X3F # xorw (%rdi), %di")
#define XOR_DI_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X33, 0X3E # xorw (%rsi), %di")
#define XOR_DI_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X33, 0X7D, 0X00 # xorw (%rbp), %di")
#define XOR_DI_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X33, 0X3C, 0X24 # xorw (%rsp), %di")
#define XOR_DI_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X33, 0X38 # xorw (%r8), %di")
#define XOR_DI_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X33, 0X39 # xorw (%r9), %di")
#define XOR_DI_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X33, 0X3A # xorw (%r10), %di")
#define XOR_DI_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X33, 0X3B # xorw (%r11), %di")
#define XOR_DI_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X33, 0X3C, 0X24 # xorw (%r12), %di")
#define XOR_DI_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X33, 0X7D, 0X00 # xorw (%r13), %di")
#define XOR_DI_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X33, 0X3E # xorw (%r14), %di")
#define XOR_DI_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X33, 0X3F # xorw (%r15), %di")
#define XOR_DI_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X33, 0X38 # xorw (%eax), %di")
#define XOR_DI_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X33, 0X3B # xorw (%ebx), %di")
#define XOR_DI_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X33, 0X39 # xorw (%ecx), %di")
#define XOR_DI_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X33, 0X3A # xorw (%edx), %di")
#define XOR_DI_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X33, 0X3F # xorw (%edi), %di")
#define XOR_DI_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X33, 0X3E # xorw (%esi), %di")
#define XOR_DI_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X33, 0X7D, 0X00 # xorw (%ebp), %di")
#define XOR_DI_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X33, 0X3C, 0X24 # xorw (%esp), %di")

#define XOR_SI_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X33, 0X30 # xorw (%rax), %si")
#define XOR_SI_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X33, 0X33 # xorw (%rbx), %si")
#define XOR_SI_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X33, 0X31 # xorw (%rcx), %si")
#define XOR_SI_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X33, 0X32 # xorw (%rdx), %si")
#define XOR_SI_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X33, 0X37 # xorw (%rdi), %si")
#define XOR_SI_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X33, 0X36 # xorw (%rsi), %si")
#define XOR_SI_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X33, 0X75, 0X00 # xorw (%rbp), %si")
#define XOR_SI_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X33, 0X34, 0X24 # xorw (%rsp), %si")
#define XOR_SI_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X33, 0X30 # xorw (%r8), %si")
#define XOR_SI_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X33, 0X31 # xorw (%r9), %si")
#define XOR_SI_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X33, 0X32 # xorw (%r10), %si")
#define XOR_SI_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X33, 0X33 # xorw (%r11), %si")
#define XOR_SI_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X33, 0X34, 0X24 # xorw (%r12), %si")
#define XOR_SI_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X33, 0X75, 0X00 # xorw (%r13), %si")
#define XOR_SI_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X33, 0X36 # xorw (%r14), %si")
#define XOR_SI_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X33, 0X37 # xorw (%r15), %si")
#define XOR_SI_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X33, 0X30 # xorw (%eax), %si")
#define XOR_SI_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X33, 0X33 # xorw (%ebx), %si")
#define XOR_SI_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X33, 0X31 # xorw (%ecx), %si")
#define XOR_SI_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X33, 0X32 # xorw (%edx), %si")
#define XOR_SI_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X33, 0X37 # xorw (%edi), %si")
#define XOR_SI_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X33, 0X36 # xorw (%esi), %si")
#define XOR_SI_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X33, 0X75, 0X00 # xorw (%ebp), %si")
#define XOR_SI_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X33, 0X34, 0X24 # xorw (%esp), %si")

#define XOR_BP_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X33, 0X28 # xorw (%rax), %bp")
#define XOR_BP_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X33, 0X2B # xorw (%rbx), %bp")
#define XOR_BP_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X33, 0X29 # xorw (%rcx), %bp")
#define XOR_BP_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X33, 0X2A # xorw (%rdx), %bp")
#define XOR_BP_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X33, 0X2F # xorw (%rdi), %bp")
#define XOR_BP_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X33, 0X2E # xorw (%rsi), %bp")
#define XOR_BP_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X33, 0X6D, 0X00 # xorw (%rbp), %bp")
#define XOR_BP_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X33, 0X2C, 0X24 # xorw (%rsp), %bp")
#define XOR_BP_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X33, 0X28 # xorw (%r8), %bp")
#define XOR_BP_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X33, 0X29 # xorw (%r9), %bp")
#define XOR_BP_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X33, 0X2A # xorw (%r10), %bp")
#define XOR_BP_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X33, 0X2B # xorw (%r11), %bp")
#define XOR_BP_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X33, 0X2C, 0X24 # xorw (%r12), %bp")
#define XOR_BP_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X33, 0X6D, 0X00 # xorw (%r13), %bp")
#define XOR_BP_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X33, 0X2E # xorw (%r14), %bp")
#define XOR_BP_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X33, 0X2F # xorw (%r15), %bp")
#define XOR_BP_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X33, 0X28 # xorw (%eax), %bp")
#define XOR_BP_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X33, 0X2B # xorw (%ebx), %bp")
#define XOR_BP_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X33, 0X29 # xorw (%ecx), %bp")
#define XOR_BP_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X33, 0X2A # xorw (%edx), %bp")
#define XOR_BP_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X33, 0X2F # xorw (%edi), %bp")
#define XOR_BP_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X33, 0X2E # xorw (%esi), %bp")
#define XOR_BP_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X33, 0X6D, 0X00 # xorw (%ebp), %bp")
#define XOR_BP_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X33, 0X2C, 0X24 # xorw (%esp), %bp")

#define XOR_SP_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X33, 0X20 # xorw (%rax), %sp")
#define XOR_SP_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X33, 0X23 # xorw (%rbx), %sp")
#define XOR_SP_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X33, 0X21 # xorw (%rcx), %sp")
#define XOR_SP_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X33, 0X22 # xorw (%rdx), %sp")
#define XOR_SP_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X33, 0X27 # xorw (%rdi), %sp")
#define XOR_SP_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X33, 0X26 # xorw (%rsi), %sp")
#define XOR_SP_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X33, 0X65, 0X00 # xorw (%rbp), %sp")
#define XOR_SP_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X33, 0X24, 0X24 # xorw (%rsp), %sp")
#define XOR_SP_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X33, 0X20 # xorw (%r8), %sp")
#define XOR_SP_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X33, 0X21 # xorw (%r9), %sp")
#define XOR_SP_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X33, 0X22 # xorw (%r10), %sp")
#define XOR_SP_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X33, 0X23 # xorw (%r11), %sp")
#define XOR_SP_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X33, 0X24, 0X24 # xorw (%r12), %sp")
#define XOR_SP_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X33, 0X65, 0X00 # xorw (%r13), %sp")
#define XOR_SP_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X33, 0X26 # xorw (%r14), %sp")
#define XOR_SP_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X33, 0X27 # xorw (%r15), %sp")
#define XOR_SP_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X33, 0X20 # xorw (%eax), %sp")
#define XOR_SP_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X33, 0X23 # xorw (%ebx), %sp")
#define XOR_SP_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X33, 0X21 # xorw (%ecx), %sp")
#define XOR_SP_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X33, 0X22 # xorw (%edx), %sp")
#define XOR_SP_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X33, 0X27 # xorw (%edi), %sp")
#define XOR_SP_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X33, 0X26 # xorw (%esi), %sp")
#define XOR_SP_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X33, 0X65, 0X00 # xorw (%ebp), %sp")
#define XOR_SP_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X33, 0X24, 0X24 # xorw (%esp), %sp")

#define XOR_R8W_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X33, 0X00 # xorw (%rax), %r8w")
#define XOR_R8W_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X33, 0X03 # xorw (%rbx), %r8w")
#define XOR_R8W_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X33, 0X01 # xorw (%rcx), %r8w")
#define XOR_R8W_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X33, 0X02 # xorw (%rdx), %r8w")
#define XOR_R8W_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X33, 0X07 # xorw (%rdi), %r8w")
#define XOR_R8W_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X33, 0X06 # xorw (%rsi), %r8w")
#define XOR_R8W_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X33, 0X45, 0X00 # xorw (%rbp), %r8w")
#define XOR_R8W_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X33, 0X04, 0X24 # xorw (%rsp), %r8w")
#define XOR_R8W_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X33, 0X00 # xorw (%r8), %r8w")
#define XOR_R8W_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X33, 0X01 # xorw (%r9), %r8w")
#define XOR_R8W_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X33, 0X02 # xorw (%r10), %r8w")
#define XOR_R8W_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X33, 0X03 # xorw (%r11), %r8w")
#define XOR_R8W_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X33, 0X04, 0X24 # xorw (%r12), %r8w")
#define XOR_R8W_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X33, 0X45, 0X00 # xorw (%r13), %r8w")
#define XOR_R8W_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X33, 0X06 # xorw (%r14), %r8w")
#define XOR_R8W_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X33, 0X07 # xorw (%r15), %r8w")
#define XOR_R8W_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0X00 # xorw (%eax), %r8w")
#define XOR_R8W_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0X03 # xorw (%ebx), %r8w")
#define XOR_R8W_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0X01 # xorw (%ecx), %r8w")
#define XOR_R8W_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0X02 # xorw (%edx), %r8w")
#define XOR_R8W_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0X07 # xorw (%edi), %r8w")
#define XOR_R8W_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0X06 # xorw (%esi), %r8w")
#define XOR_R8W_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0X45, 0X00 # xorw (%ebp), %r8w")
#define XOR_R8W_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0X04, 0X24 # xorw (%esp), %r8w")

#define XOR_R9W_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X33, 0X08 # xorw (%rax), %r9w")
#define XOR_R9W_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X33, 0X0B # xorw (%rbx), %r9w")
#define XOR_R9W_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X33, 0X09 # xorw (%rcx), %r9w")
#define XOR_R9W_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X33, 0X0A # xorw (%rdx), %r9w")
#define XOR_R9W_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X33, 0X0F # xorw (%rdi), %r9w")
#define XOR_R9W_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X33, 0X0E # xorw (%rsi), %r9w")
#define XOR_R9W_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X33, 0X4D, 0X00 # xorw (%rbp), %r9w")
#define XOR_R9W_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X33, 0X0C, 0X24 # xorw (%rsp), %r9w")
#define XOR_R9W_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X33, 0X08 # xorw (%r8), %r9w")
#define XOR_R9W_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X33, 0X09 # xorw (%r9), %r9w")
#define XOR_R9W_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X33, 0X0A # xorw (%r10), %r9w")
#define XOR_R9W_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X33, 0X0B # xorw (%r11), %r9w")
#define XOR_R9W_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X33, 0X0C, 0X24 # xorw (%r12), %r9w")
#define XOR_R9W_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X33, 0X4D, 0X00 # xorw (%r13), %r9w")
#define XOR_R9W_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X33, 0X0E # xorw (%r14), %r9w")
#define XOR_R9W_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X33, 0X0F # xorw (%r15), %r9w")
#define XOR_R9W_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0X08 # xorw (%eax), %r9w")
#define XOR_R9W_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0X0B # xorw (%ebx), %r9w")
#define XOR_R9W_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0X09 # xorw (%ecx), %r9w")
#define XOR_R9W_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0X0A # xorw (%edx), %r9w")
#define XOR_R9W_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0X0F # xorw (%edi), %r9w")
#define XOR_R9W_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0X0E # xorw (%esi), %r9w")
#define XOR_R9W_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0X4D, 0X00 # xorw (%ebp), %r9w")
#define XOR_R9W_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0X0C, 0X24 # xorw (%esp), %r9w")

#define XOR_R10W_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X33, 0X10 # xorw (%rax), %r10w")
#define XOR_R10W_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X33, 0X13 # xorw (%rbx), %r10w")
#define XOR_R10W_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X33, 0X11 # xorw (%rcx), %r10w")
#define XOR_R10W_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X33, 0X12 # xorw (%rdx), %r10w")
#define XOR_R10W_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X33, 0X17 # xorw (%rdi), %r10w")
#define XOR_R10W_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X33, 0X16 # xorw (%rsi), %r10w")
#define XOR_R10W_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X33, 0X55, 0X00 # xorw (%rbp), %r10w")
#define XOR_R10W_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X33, 0X14, 0X24 # xorw (%rsp), %r10w")
#define XOR_R10W_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X33, 0X10 # xorw (%r8), %r10w")
#define XOR_R10W_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X33, 0X11 # xorw (%r9), %r10w")
#define XOR_R10W_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X33, 0X12 # xorw (%r10), %r10w")
#define XOR_R10W_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X33, 0X13 # xorw (%r11), %r10w")
#define XOR_R10W_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X33, 0X14, 0X24 # xorw (%r12), %r10w")
#define XOR_R10W_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X33, 0X55, 0X00 # xorw (%r13), %r10w")
#define XOR_R10W_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X33, 0X16 # xorw (%r14), %r10w")
#define XOR_R10W_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X33, 0X17 # xorw (%r15), %r10w")
#define XOR_R10W_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0X10 # xorw (%eax), %r10w")
#define XOR_R10W_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0X13 # xorw (%ebx), %r10w")
#define XOR_R10W_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0X11 # xorw (%ecx), %r10w")
#define XOR_R10W_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0X12 # xorw (%edx), %r10w")
#define XOR_R10W_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0X17 # xorw (%edi), %r10w")
#define XOR_R10W_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0X16 # xorw (%esi), %r10w")
#define XOR_R10W_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0X55, 0X00 # xorw (%ebp), %r10w")
#define XOR_R10W_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0X14, 0X24 # xorw (%esp), %r10w")

#define XOR_R11W_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X33, 0X18 # xorw (%rax), %r11w")
#define XOR_R11W_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X33, 0X1B # xorw (%rbx), %r11w")
#define XOR_R11W_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X33, 0X19 # xorw (%rcx), %r11w")
#define XOR_R11W_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X33, 0X1A # xorw (%rdx), %r11w")
#define XOR_R11W_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X33, 0X1F # xorw (%rdi), %r11w")
#define XOR_R11W_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X33, 0X1E # xorw (%rsi), %r11w")
#define XOR_R11W_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X33, 0X5D, 0X00 # xorw (%rbp), %r11w")
#define XOR_R11W_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X33, 0X1C, 0X24 # xorw (%rsp), %r11w")
#define XOR_R11W_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X33, 0X18 # xorw (%r8), %r11w")
#define XOR_R11W_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X33, 0X19 # xorw (%r9), %r11w")
#define XOR_R11W_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X33, 0X1A # xorw (%r10), %r11w")
#define XOR_R11W_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X33, 0X1B # xorw (%r11), %r11w")
#define XOR_R11W_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X33, 0X1C, 0X24 # xorw (%r12), %r11w")
#define XOR_R11W_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X33, 0X5D, 0X00 # xorw (%r13), %r11w")
#define XOR_R11W_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X33, 0X1E # xorw (%r14), %r11w")
#define XOR_R11W_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X33, 0X1F # xorw (%r15), %r11w")
#define XOR_R11W_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0X18 # xorw (%eax), %r11w")
#define XOR_R11W_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0X1B # xorw (%ebx), %r11w")
#define XOR_R11W_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0X19 # xorw (%ecx), %r11w")
#define XOR_R11W_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0X1A # xorw (%edx), %r11w")
#define XOR_R11W_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0X1F # xorw (%edi), %r11w")
#define XOR_R11W_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0X1E # xorw (%esi), %r11w")
#define XOR_R11W_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0X5D, 0X00 # xorw (%ebp), %r11w")
#define XOR_R11W_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0X1C, 0X24 # xorw (%esp), %r11w")

#define XOR_R12W_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X33, 0X20 # xorw (%rax), %r12w")
#define XOR_R12W_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X33, 0X23 # xorw (%rbx), %r12w")
#define XOR_R12W_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X33, 0X21 # xorw (%rcx), %r12w")
#define XOR_R12W_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X33, 0X22 # xorw (%rdx), %r12w")
#define XOR_R12W_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X33, 0X27 # xorw (%rdi), %r12w")
#define XOR_R12W_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X33, 0X26 # xorw (%rsi), %r12w")
#define XOR_R12W_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X33, 0X65, 0X00 # xorw (%rbp), %r12w")
#define XOR_R12W_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X33, 0X24, 0X24 # xorw (%rsp), %r12w")
#define XOR_R12W_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X33, 0X20 # xorw (%r8), %r12w")
#define XOR_R12W_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X33, 0X21 # xorw (%r9), %r12w")
#define XOR_R12W_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X33, 0X22 # xorw (%r10), %r12w")
#define XOR_R12W_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X33, 0X23 # xorw (%r11), %r12w")
#define XOR_R12W_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X33, 0X24, 0X24 # xorw (%r12), %r12w")
#define XOR_R12W_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X33, 0X65, 0X00 # xorw (%r13), %r12w")
#define XOR_R12W_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X33, 0X26 # xorw (%r14), %r12w")
#define XOR_R12W_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X33, 0X27 # xorw (%r15), %r12w")
#define XOR_R12W_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0X20 # xorw (%eax), %r12w")
#define XOR_R12W_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0X23 # xorw (%ebx), %r12w")
#define XOR_R12W_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0X21 # xorw (%ecx), %r12w")
#define XOR_R12W_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0X22 # xorw (%edx), %r12w")
#define XOR_R12W_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0X27 # xorw (%edi), %r12w")
#define XOR_R12W_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0X26 # xorw (%esi), %r12w")
#define XOR_R12W_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0X65, 0X00 # xorw (%ebp), %r12w")
#define XOR_R12W_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0X24, 0X24 # xorw (%esp), %r12w")

#define XOR_R13W_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X33, 0X28 # xorw (%rax), %r13w")
#define XOR_R13W_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X33, 0X2B # xorw (%rbx), %r13w")
#define XOR_R13W_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X33, 0X29 # xorw (%rcx), %r13w")
#define XOR_R13W_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X33, 0X2A # xorw (%rdx), %r13w")
#define XOR_R13W_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X33, 0X2F # xorw (%rdi), %r13w")
#define XOR_R13W_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X33, 0X2E # xorw (%rsi), %r13w")
#define XOR_R13W_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X33, 0X6D, 0X00 # xorw (%rbp), %r13w")
#define XOR_R13W_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X33, 0X2C, 0X24 # xorw (%rsp), %r13w")
#define XOR_R13W_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X33, 0X28 # xorw (%r8), %r13w")
#define XOR_R13W_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X33, 0X29 # xorw (%r9), %r13w")
#define XOR_R13W_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X33, 0X2A # xorw (%r10), %r13w")
#define XOR_R13W_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X33, 0X2B # xorw (%r11), %r13w")
#define XOR_R13W_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X33, 0X2C, 0X24 # xorw (%r12), %r13w")
#define XOR_R13W_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X33, 0X6D, 0X00 # xorw (%r13), %r13w")
#define XOR_R13W_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X33, 0X2E # xorw (%r14), %r13w")
#define XOR_R13W_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X33, 0X2F # xorw (%r15), %r13w")
#define XOR_R13W_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0X28 # xorw (%eax), %r13w")
#define XOR_R13W_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0X2B # xorw (%ebx), %r13w")
#define XOR_R13W_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0X29 # xorw (%ecx), %r13w")
#define XOR_R13W_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0X2A # xorw (%edx), %r13w")
#define XOR_R13W_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0X2F # xorw (%edi), %r13w")
#define XOR_R13W_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0X2E # xorw (%esi), %r13w")
#define XOR_R13W_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0X6D, 0X00 # xorw (%ebp), %r13w")
#define XOR_R13W_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0X2C, 0X24 # xorw (%esp), %r13w")

#define XOR_R14W_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X33, 0X30 # xorw (%rax), %r14w")
#define XOR_R14W_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X33, 0X33 # xorw (%rbx), %r14w")
#define XOR_R14W_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X33, 0X31 # xorw (%rcx), %r14w")
#define XOR_R14W_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X33, 0X32 # xorw (%rdx), %r14w")
#define XOR_R14W_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X33, 0X37 # xorw (%rdi), %r14w")
#define XOR_R14W_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X33, 0X36 # xorw (%rsi), %r14w")
#define XOR_R14W_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X33, 0X75, 0X00 # xorw (%rbp), %r14w")
#define XOR_R14W_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X33, 0X34, 0X24 # xorw (%rsp), %r14w")
#define XOR_R14W_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X33, 0X30 # xorw (%r8), %r14w")
#define XOR_R14W_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X33, 0X31 # xorw (%r9), %r14w")
#define XOR_R14W_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X33, 0X32 # xorw (%r10), %r14w")
#define XOR_R14W_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X33, 0X33 # xorw (%r11), %r14w")
#define XOR_R14W_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X33, 0X34, 0X24 # xorw (%r12), %r14w")
#define XOR_R14W_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X33, 0X75, 0X00 # xorw (%r13), %r14w")
#define XOR_R14W_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X33, 0X36 # xorw (%r14), %r14w")
#define XOR_R14W_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X33, 0X37 # xorw (%r15), %r14w")
#define XOR_R14W_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0X30 # xorw (%eax), %r14w")
#define XOR_R14W_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0X33 # xorw (%ebx), %r14w")
#define XOR_R14W_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0X31 # xorw (%ecx), %r14w")
#define XOR_R14W_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0X32 # xorw (%edx), %r14w")
#define XOR_R14W_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0X37 # xorw (%edi), %r14w")
#define XOR_R14W_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0X36 # xorw (%esi), %r14w")
#define XOR_R14W_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0X75, 0X00 # xorw (%ebp), %r14w")
#define XOR_R14W_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0X34, 0X24 # xorw (%esp), %r14w")

#define XOR_R15W_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X33, 0X38 # xorw (%rax), %r15w")
#define XOR_R15W_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X33, 0X3B # xorw (%rbx), %r15w")
#define XOR_R15W_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X33, 0X39 # xorw (%rcx), %r15w")
#define XOR_R15W_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X33, 0X3A # xorw (%rdx), %r15w")
#define XOR_R15W_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X33, 0X3F # xorw (%rdi), %r15w")
#define XOR_R15W_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X33, 0X3E # xorw (%rsi), %r15w")
#define XOR_R15W_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X33, 0X7D, 0X00 # xorw (%rbp), %r15w")
#define XOR_R15W_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X33, 0X3C, 0X24 # xorw (%rsp), %r15w")
#define XOR_R15W_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X33, 0X38 # xorw (%r8), %r15w")
#define XOR_R15W_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X33, 0X39 # xorw (%r9), %r15w")
#define XOR_R15W_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X33, 0X3A # xorw (%r10), %r15w")
#define XOR_R15W_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X33, 0X3B # xorw (%r11), %r15w")
#define XOR_R15W_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X33, 0X3C, 0X24 # xorw (%r12), %r15w")
#define XOR_R15W_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X33, 0X7D, 0X00 # xorw (%r13), %r15w")
#define XOR_R15W_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X33, 0X3E # xorw (%r14), %r15w")
#define XOR_R15W_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X33, 0X3F # xorw (%r15), %r15w")
#define XOR_R15W_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0X38 # xorw (%eax), %r15w")
#define XOR_R15W_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0X3B # xorw (%ebx), %r15w")
#define XOR_R15W_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0X39 # xorw (%ecx), %r15w")
#define XOR_R15W_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0X3A # xorw (%edx), %r15w")
#define XOR_R15W_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0X3F # xorw (%edi), %r15w")
#define XOR_R15W_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0X3E # xorw (%esi), %r15w")
#define XOR_R15W_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0X7D, 0X00 # xorw (%ebp), %r15w")
#define XOR_R15W_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0X3C, 0X24 # xorw (%esp), %r15w")

#define XOR_AX_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X31, 0X00 # xorw %ax, (%rax)")
#define XOR_AX_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X31, 0X03 # xorw %ax, (%rbx)")
#define XOR_AX_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X31, 0X01 # xorw %ax, (%rcx)")
#define XOR_AX_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X31, 0X02 # xorw %ax, (%rdx)")
#define XOR_AX_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X31, 0X07 # xorw %ax, (%rdi)")
#define XOR_AX_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X31, 0X06 # xorw %ax, (%rsi)")
#define XOR_AX_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X31, 0X45, 0X00 # xorw %ax, (%rbp)")
#define XOR_AX_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X31, 0X04, 0X24 # xorw %ax, (%rsp)")
#define XOR_AX_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X31, 0X00 # xorw %ax, (%r8)")
#define XOR_AX_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X31, 0X01 # xorw %ax, (%r9)")
#define XOR_AX_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X31, 0X02 # xorw %ax, (%r10)")
#define XOR_AX_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X31, 0X03 # xorw %ax, (%r11)")
#define XOR_AX_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X31, 0X04, 0X24 # xorw %ax, (%r12)")
#define XOR_AX_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X31, 0X45, 0X00 # xorw %ax, (%r13)")
#define XOR_AX_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X31, 0X06 # xorw %ax, (%r14)")
#define XOR_AX_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X31, 0X07 # xorw %ax, (%r15)")
#define XOR_AX_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X31, 0X00 # xorw %ax, (%eax)")
#define XOR_AX_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X31, 0X03 # xorw %ax, (%ebx)")
#define XOR_AX_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X31, 0X01 # xorw %ax, (%ecx)")
#define XOR_AX_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X31, 0X02 # xorw %ax, (%edx)")
#define XOR_AX_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X31, 0X07 # xorw %ax, (%edi)")
#define XOR_AX_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X31, 0X06 # xorw %ax, (%esi)")
#define XOR_AX_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X31, 0X45, 0X00 # xorw %ax, (%ebp)")
#define XOR_AX_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X31, 0X04, 0X24 # xorw %ax, (%esp)")

#define XOR_BX_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X31, 0X18 # xorw %bx, (%rax)")
#define XOR_BX_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X31, 0X1B # xorw %bx, (%rbx)")
#define XOR_BX_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X31, 0X19 # xorw %bx, (%rcx)")
#define XOR_BX_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X31, 0X1A # xorw %bx, (%rdx)")
#define XOR_BX_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X31, 0X1F # xorw %bx, (%rdi)")
#define XOR_BX_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X31, 0X1E # xorw %bx, (%rsi)")
#define XOR_BX_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X31, 0X5D, 0X00 # xorw %bx, (%rbp)")
#define XOR_BX_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X31, 0X1C, 0X24 # xorw %bx, (%rsp)")
#define XOR_BX_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X31, 0X18 # xorw %bx, (%r8)")
#define XOR_BX_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X31, 0X19 # xorw %bx, (%r9)")
#define XOR_BX_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X31, 0X1A # xorw %bx, (%r10)")
#define XOR_BX_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X31, 0X1B # xorw %bx, (%r11)")
#define XOR_BX_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X31, 0X1C, 0X24 # xorw %bx, (%r12)")
#define XOR_BX_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X31, 0X5D, 0X00 # xorw %bx, (%r13)")
#define XOR_BX_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X31, 0X1E # xorw %bx, (%r14)")
#define XOR_BX_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X31, 0X1F # xorw %bx, (%r15)")
#define XOR_BX_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X31, 0X18 # xorw %bx, (%eax)")
#define XOR_BX_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X31, 0X1B # xorw %bx, (%ebx)")
#define XOR_BX_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X31, 0X19 # xorw %bx, (%ecx)")
#define XOR_BX_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X31, 0X1A # xorw %bx, (%edx)")
#define XOR_BX_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X31, 0X1F # xorw %bx, (%edi)")
#define XOR_BX_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X31, 0X1E # xorw %bx, (%esi)")
#define XOR_BX_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X31, 0X5D, 0X00 # xorw %bx, (%ebp)")
#define XOR_BX_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X31, 0X1C, 0X24 # xorw %bx, (%esp)")

#define XOR_CX_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X31, 0X08 # xorw %cx, (%rax)")
#define XOR_CX_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X31, 0X0B # xorw %cx, (%rbx)")
#define XOR_CX_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X31, 0X09 # xorw %cx, (%rcx)")
#define XOR_CX_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X31, 0X0A # xorw %cx, (%rdx)")
#define XOR_CX_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X31, 0X0F # xorw %cx, (%rdi)")
#define XOR_CX_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X31, 0X0E # xorw %cx, (%rsi)")
#define XOR_CX_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X31, 0X4D, 0X00 # xorw %cx, (%rbp)")
#define XOR_CX_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X31, 0X0C, 0X24 # xorw %cx, (%rsp)")
#define XOR_CX_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X31, 0X08 # xorw %cx, (%r8)")
#define XOR_CX_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X31, 0X09 # xorw %cx, (%r9)")
#define XOR_CX_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X31, 0X0A # xorw %cx, (%r10)")
#define XOR_CX_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X31, 0X0B # xorw %cx, (%r11)")
#define XOR_CX_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X31, 0X0C, 0X24 # xorw %cx, (%r12)")
#define XOR_CX_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X31, 0X4D, 0X00 # xorw %cx, (%r13)")
#define XOR_CX_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X31, 0X0E # xorw %cx, (%r14)")
#define XOR_CX_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X31, 0X0F # xorw %cx, (%r15)")
#define XOR_CX_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X31, 0X08 # xorw %cx, (%eax)")
#define XOR_CX_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X31, 0X0B # xorw %cx, (%ebx)")
#define XOR_CX_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X31, 0X09 # xorw %cx, (%ecx)")
#define XOR_CX_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X31, 0X0A # xorw %cx, (%edx)")
#define XOR_CX_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X31, 0X0F # xorw %cx, (%edi)")
#define XOR_CX_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X31, 0X0E # xorw %cx, (%esi)")
#define XOR_CX_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X31, 0X4D, 0X00 # xorw %cx, (%ebp)")
#define XOR_CX_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X31, 0X0C, 0X24 # xorw %cx, (%esp)")

#define XOR_DX_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X31, 0X10 # xorw %dx, (%rax)")
#define XOR_DX_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X31, 0X13 # xorw %dx, (%rbx)")
#define XOR_DX_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X31, 0X11 # xorw %dx, (%rcx)")
#define XOR_DX_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X31, 0X12 # xorw %dx, (%rdx)")
#define XOR_DX_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X31, 0X17 # xorw %dx, (%rdi)")
#define XOR_DX_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X31, 0X16 # xorw %dx, (%rsi)")
#define XOR_DX_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X31, 0X55, 0X00 # xorw %dx, (%rbp)")
#define XOR_DX_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X31, 0X14, 0X24 # xorw %dx, (%rsp)")
#define XOR_DX_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X31, 0X10 # xorw %dx, (%r8)")
#define XOR_DX_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X31, 0X11 # xorw %dx, (%r9)")
#define XOR_DX_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X31, 0X12 # xorw %dx, (%r10)")
#define XOR_DX_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X31, 0X13 # xorw %dx, (%r11)")
#define XOR_DX_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X31, 0X14, 0X24 # xorw %dx, (%r12)")
#define XOR_DX_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X31, 0X55, 0X00 # xorw %dx, (%r13)")
#define XOR_DX_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X31, 0X16 # xorw %dx, (%r14)")
#define XOR_DX_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X31, 0X17 # xorw %dx, (%r15)")
#define XOR_DX_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X31, 0X10 # xorw %dx, (%eax)")
#define XOR_DX_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X31, 0X13 # xorw %dx, (%ebx)")
#define XOR_DX_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X31, 0X11 # xorw %dx, (%ecx)")
#define XOR_DX_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X31, 0X12 # xorw %dx, (%edx)")
#define XOR_DX_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X31, 0X17 # xorw %dx, (%edi)")
#define XOR_DX_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X31, 0X16 # xorw %dx, (%esi)")
#define XOR_DX_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X31, 0X55, 0X00 # xorw %dx, (%ebp)")
#define XOR_DX_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X31, 0X14, 0X24 # xorw %dx, (%esp)")

#define XOR_DI_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X31, 0X38 # xorw %di, (%rax)")
#define XOR_DI_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X31, 0X3B # xorw %di, (%rbx)")
#define XOR_DI_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X31, 0X39 # xorw %di, (%rcx)")
#define XOR_DI_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X31, 0X3A # xorw %di, (%rdx)")
#define XOR_DI_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X31, 0X3F # xorw %di, (%rdi)")
#define XOR_DI_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X31, 0X3E # xorw %di, (%rsi)")
#define XOR_DI_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X31, 0X7D, 0X00 # xorw %di, (%rbp)")
#define XOR_DI_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X31, 0X3C, 0X24 # xorw %di, (%rsp)")
#define XOR_DI_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X31, 0X38 # xorw %di, (%r8)")
#define XOR_DI_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X31, 0X39 # xorw %di, (%r9)")
#define XOR_DI_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X31, 0X3A # xorw %di, (%r10)")
#define XOR_DI_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X31, 0X3B # xorw %di, (%r11)")
#define XOR_DI_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X31, 0X3C, 0X24 # xorw %di, (%r12)")
#define XOR_DI_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X31, 0X7D, 0X00 # xorw %di, (%r13)")
#define XOR_DI_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X31, 0X3E # xorw %di, (%r14)")
#define XOR_DI_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X31, 0X3F # xorw %di, (%r15)")
#define XOR_DI_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X31, 0X38 # xorw %di, (%eax)")
#define XOR_DI_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X31, 0X3B # xorw %di, (%ebx)")
#define XOR_DI_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X31, 0X39 # xorw %di, (%ecx)")
#define XOR_DI_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X31, 0X3A # xorw %di, (%edx)")
#define XOR_DI_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X31, 0X3F # xorw %di, (%edi)")
#define XOR_DI_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X31, 0X3E # xorw %di, (%esi)")
#define XOR_DI_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X31, 0X7D, 0X00 # xorw %di, (%ebp)")
#define XOR_DI_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X31, 0X3C, 0X24 # xorw %di, (%esp)")

#define XOR_SI_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X31, 0X30 # xorw %si, (%rax)")
#define XOR_SI_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X31, 0X33 # xorw %si, (%rbx)")
#define XOR_SI_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X31, 0X31 # xorw %si, (%rcx)")
#define XOR_SI_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X31, 0X32 # xorw %si, (%rdx)")
#define XOR_SI_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X31, 0X37 # xorw %si, (%rdi)")
#define XOR_SI_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X31, 0X36 # xorw %si, (%rsi)")
#define XOR_SI_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X31, 0X75, 0X00 # xorw %si, (%rbp)")
#define XOR_SI_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X31, 0X34, 0X24 # xorw %si, (%rsp)")
#define XOR_SI_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X31, 0X30 # xorw %si, (%r8)")
#define XOR_SI_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X31, 0X31 # xorw %si, (%r9)")
#define XOR_SI_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X31, 0X32 # xorw %si, (%r10)")
#define XOR_SI_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X31, 0X33 # xorw %si, (%r11)")
#define XOR_SI_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X31, 0X34, 0X24 # xorw %si, (%r12)")
#define XOR_SI_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X31, 0X75, 0X00 # xorw %si, (%r13)")
#define XOR_SI_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X31, 0X36 # xorw %si, (%r14)")
#define XOR_SI_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X31, 0X37 # xorw %si, (%r15)")
#define XOR_SI_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X31, 0X30 # xorw %si, (%eax)")
#define XOR_SI_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X31, 0X33 # xorw %si, (%ebx)")
#define XOR_SI_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X31, 0X31 # xorw %si, (%ecx)")
#define XOR_SI_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X31, 0X32 # xorw %si, (%edx)")
#define XOR_SI_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X31, 0X37 # xorw %si, (%edi)")
#define XOR_SI_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X31, 0X36 # xorw %si, (%esi)")
#define XOR_SI_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X31, 0X75, 0X00 # xorw %si, (%ebp)")
#define XOR_SI_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X31, 0X34, 0X24 # xorw %si, (%esp)")

#define XOR_BP_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X31, 0X28 # xorw %bp, (%rax)")
#define XOR_BP_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X31, 0X2B # xorw %bp, (%rbx)")
#define XOR_BP_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X31, 0X29 # xorw %bp, (%rcx)")
#define XOR_BP_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X31, 0X2A # xorw %bp, (%rdx)")
#define XOR_BP_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X31, 0X2F # xorw %bp, (%rdi)")
#define XOR_BP_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X31, 0X2E # xorw %bp, (%rsi)")
#define XOR_BP_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X31, 0X6D, 0X00 # xorw %bp, (%rbp)")
#define XOR_BP_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X31, 0X2C, 0X24 # xorw %bp, (%rsp)")
#define XOR_BP_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X31, 0X28 # xorw %bp, (%r8)")
#define XOR_BP_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X31, 0X29 # xorw %bp, (%r9)")
#define XOR_BP_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X31, 0X2A # xorw %bp, (%r10)")
#define XOR_BP_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X31, 0X2B # xorw %bp, (%r11)")
#define XOR_BP_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X31, 0X2C, 0X24 # xorw %bp, (%r12)")
#define XOR_BP_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X31, 0X6D, 0X00 # xorw %bp, (%r13)")
#define XOR_BP_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X31, 0X2E # xorw %bp, (%r14)")
#define XOR_BP_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X31, 0X2F # xorw %bp, (%r15)")
#define XOR_BP_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X31, 0X28 # xorw %bp, (%eax)")
#define XOR_BP_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X31, 0X2B # xorw %bp, (%ebx)")
#define XOR_BP_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X31, 0X29 # xorw %bp, (%ecx)")
#define XOR_BP_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X31, 0X2A # xorw %bp, (%edx)")
#define XOR_BP_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X31, 0X2F # xorw %bp, (%edi)")
#define XOR_BP_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X31, 0X2E # xorw %bp, (%esi)")
#define XOR_BP_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X31, 0X6D, 0X00 # xorw %bp, (%ebp)")
#define XOR_BP_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X31, 0X2C, 0X24 # xorw %bp, (%esp)")

#define XOR_SP_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X31, 0X20 # xorw %sp, (%rax)")
#define XOR_SP_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X31, 0X23 # xorw %sp, (%rbx)")
#define XOR_SP_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X31, 0X21 # xorw %sp, (%rcx)")
#define XOR_SP_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X31, 0X22 # xorw %sp, (%rdx)")
#define XOR_SP_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X31, 0X27 # xorw %sp, (%rdi)")
#define XOR_SP_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X31, 0X26 # xorw %sp, (%rsi)")
#define XOR_SP_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X31, 0X65, 0X00 # xorw %sp, (%rbp)")
#define XOR_SP_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X31, 0X24, 0X24 # xorw %sp, (%rsp)")
#define XOR_SP_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X31, 0X20 # xorw %sp, (%r8)")
#define XOR_SP_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X31, 0X21 # xorw %sp, (%r9)")
#define XOR_SP_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X31, 0X22 # xorw %sp, (%r10)")
#define XOR_SP_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X31, 0X23 # xorw %sp, (%r11)")
#define XOR_SP_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X31, 0X24, 0X24 # xorw %sp, (%r12)")
#define XOR_SP_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X31, 0X65, 0X00 # xorw %sp, (%r13)")
#define XOR_SP_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X31, 0X26 # xorw %sp, (%r14)")
#define XOR_SP_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X31, 0X27 # xorw %sp, (%r15)")
#define XOR_SP_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X31, 0X20 # xorw %sp, (%eax)")
#define XOR_SP_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X31, 0X23 # xorw %sp, (%ebx)")
#define XOR_SP_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X31, 0X21 # xorw %sp, (%ecx)")
#define XOR_SP_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X31, 0X22 # xorw %sp, (%edx)")
#define XOR_SP_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X31, 0X27 # xorw %sp, (%edi)")
#define XOR_SP_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X31, 0X26 # xorw %sp, (%esi)")
#define XOR_SP_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X31, 0X65, 0X00 # xorw %sp, (%ebp)")
#define XOR_SP_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X31, 0X24, 0X24 # xorw %sp, (%esp)")

#define XOR_R8W_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X31, 0X00 # xorw %r8w, (%rax)")
#define XOR_R8W_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X31, 0X03 # xorw %r8w, (%rbx)")
#define XOR_R8W_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X31, 0X01 # xorw %r8w, (%rcx)")
#define XOR_R8W_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X31, 0X02 # xorw %r8w, (%rdx)")
#define XOR_R8W_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X31, 0X07 # xorw %r8w, (%rdi)")
#define XOR_R8W_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X31, 0X06 # xorw %r8w, (%rsi)")
#define XOR_R8W_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X31, 0X45, 0X00 # xorw %r8w, (%rbp)")
#define XOR_R8W_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X31, 0X04, 0X24 # xorw %r8w, (%rsp)")
#define XOR_R8W_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X31, 0X00 # xorw %r8w, (%r8)")
#define XOR_R8W_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X31, 0X01 # xorw %r8w, (%r9)")
#define XOR_R8W_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X31, 0X02 # xorw %r8w, (%r10)")
#define XOR_R8W_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X31, 0X03 # xorw %r8w, (%r11)")
#define XOR_R8W_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X31, 0X04, 0X24 # xorw %r8w, (%r12)")
#define XOR_R8W_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X31, 0X45, 0X00 # xorw %r8w, (%r13)")
#define XOR_R8W_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X31, 0X06 # xorw %r8w, (%r14)")
#define XOR_R8W_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X31, 0X07 # xorw %r8w, (%r15)")
#define XOR_R8W_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0X00 # xorw %r8w, (%eax)")
#define XOR_R8W_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0X03 # xorw %r8w, (%ebx)")
#define XOR_R8W_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0X01 # xorw %r8w, (%ecx)")
#define XOR_R8W_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0X02 # xorw %r8w, (%edx)")
#define XOR_R8W_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0X07 # xorw %r8w, (%edi)")
#define XOR_R8W_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0X06 # xorw %r8w, (%esi)")
#define XOR_R8W_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0X45, 0X00 # xorw %r8w, (%ebp)")
#define XOR_R8W_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0X04, 0X24 # xorw %r8w, (%esp)")

#define XOR_R9W_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X31, 0X08 # xorw %r9w, (%rax)")
#define XOR_R9W_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X31, 0X0B # xorw %r9w, (%rbx)")
#define XOR_R9W_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X31, 0X09 # xorw %r9w, (%rcx)")
#define XOR_R9W_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X31, 0X0A # xorw %r9w, (%rdx)")
#define XOR_R9W_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X31, 0X0F # xorw %r9w, (%rdi)")
#define XOR_R9W_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X31, 0X0E # xorw %r9w, (%rsi)")
#define XOR_R9W_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X31, 0X4D, 0X00 # xorw %r9w, (%rbp)")
#define XOR_R9W_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X31, 0X0C, 0X24 # xorw %r9w, (%rsp)")
#define XOR_R9W_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X31, 0X08 # xorw %r9w, (%r8)")
#define XOR_R9W_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X31, 0X09 # xorw %r9w, (%r9)")
#define XOR_R9W_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X31, 0X0A # xorw %r9w, (%r10)")
#define XOR_R9W_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X31, 0X0B # xorw %r9w, (%r11)")
#define XOR_R9W_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X31, 0X0C, 0X24 # xorw %r9w, (%r12)")
#define XOR_R9W_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X31, 0X4D, 0X00 # xorw %r9w, (%r13)")
#define XOR_R9W_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X31, 0X0E # xorw %r9w, (%r14)")
#define XOR_R9W_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X31, 0X0F # xorw %r9w, (%r15)")
#define XOR_R9W_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0X08 # xorw %r9w, (%eax)")
#define XOR_R9W_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0X0B # xorw %r9w, (%ebx)")
#define XOR_R9W_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0X09 # xorw %r9w, (%ecx)")
#define XOR_R9W_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0X0A # xorw %r9w, (%edx)")
#define XOR_R9W_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0X0F # xorw %r9w, (%edi)")
#define XOR_R9W_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0X0E # xorw %r9w, (%esi)")
#define XOR_R9W_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0X4D, 0X00 # xorw %r9w, (%ebp)")
#define XOR_R9W_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0X0C, 0X24 # xorw %r9w, (%esp)")

#define XOR_R10W_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X31, 0X10 # xorw %r10w, (%rax)")
#define XOR_R10W_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X31, 0X13 # xorw %r10w, (%rbx)")
#define XOR_R10W_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X31, 0X11 # xorw %r10w, (%rcx)")
#define XOR_R10W_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X31, 0X12 # xorw %r10w, (%rdx)")
#define XOR_R10W_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X31, 0X17 # xorw %r10w, (%rdi)")
#define XOR_R10W_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X31, 0X16 # xorw %r10w, (%rsi)")
#define XOR_R10W_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X31, 0X55, 0X00 # xorw %r10w, (%rbp)")
#define XOR_R10W_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X31, 0X14, 0X24 # xorw %r10w, (%rsp)")
#define XOR_R10W_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X31, 0X10 # xorw %r10w, (%r8)")
#define XOR_R10W_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X31, 0X11 # xorw %r10w, (%r9)")
#define XOR_R10W_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X31, 0X12 # xorw %r10w, (%r10)")
#define XOR_R10W_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X31, 0X13 # xorw %r10w, (%r11)")
#define XOR_R10W_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X31, 0X14, 0X24 # xorw %r10w, (%r12)")
#define XOR_R10W_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X31, 0X55, 0X00 # xorw %r10w, (%r13)")
#define XOR_R10W_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X31, 0X16 # xorw %r10w, (%r14)")
#define XOR_R10W_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X31, 0X17 # xorw %r10w, (%r15)")
#define XOR_R10W_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0X10 # xorw %r10w, (%eax)")
#define XOR_R10W_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0X13 # xorw %r10w, (%ebx)")
#define XOR_R10W_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0X11 # xorw %r10w, (%ecx)")
#define XOR_R10W_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0X12 # xorw %r10w, (%edx)")
#define XOR_R10W_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0X17 # xorw %r10w, (%edi)")
#define XOR_R10W_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0X16 # xorw %r10w, (%esi)")
#define XOR_R10W_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0X55, 0X00 # xorw %r10w, (%ebp)")
#define XOR_R10W_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0X14, 0X24 # xorw %r10w, (%esp)")

#define XOR_R11W_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X31, 0X18 # xorw %r11w, (%rax)")
#define XOR_R11W_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X31, 0X1B # xorw %r11w, (%rbx)")
#define XOR_R11W_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X31, 0X19 # xorw %r11w, (%rcx)")
#define XOR_R11W_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X31, 0X1A # xorw %r11w, (%rdx)")
#define XOR_R11W_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X31, 0X1F # xorw %r11w, (%rdi)")
#define XOR_R11W_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X31, 0X1E # xorw %r11w, (%rsi)")
#define XOR_R11W_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X31, 0X5D, 0X00 # xorw %r11w, (%rbp)")
#define XOR_R11W_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X31, 0X1C, 0X24 # xorw %r11w, (%rsp)")
#define XOR_R11W_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X31, 0X18 # xorw %r11w, (%r8)")
#define XOR_R11W_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X31, 0X19 # xorw %r11w, (%r9)")
#define XOR_R11W_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X31, 0X1A # xorw %r11w, (%r10)")
#define XOR_R11W_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X31, 0X1B # xorw %r11w, (%r11)")
#define XOR_R11W_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X31, 0X1C, 0X24 # xorw %r11w, (%r12)")
#define XOR_R11W_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X31, 0X5D, 0X00 # xorw %r11w, (%r13)")
#define XOR_R11W_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X31, 0X1E # xorw %r11w, (%r14)")
#define XOR_R11W_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X31, 0X1F # xorw %r11w, (%r15)")
#define XOR_R11W_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0X18 # xorw %r11w, (%eax)")
#define XOR_R11W_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0X1B # xorw %r11w, (%ebx)")
#define XOR_R11W_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0X19 # xorw %r11w, (%ecx)")
#define XOR_R11W_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0X1A # xorw %r11w, (%edx)")
#define XOR_R11W_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0X1F # xorw %r11w, (%edi)")
#define XOR_R11W_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0X1E # xorw %r11w, (%esi)")
#define XOR_R11W_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0X5D, 0X00 # xorw %r11w, (%ebp)")
#define XOR_R11W_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0X1C, 0X24 # xorw %r11w, (%esp)")

#define XOR_R12W_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X31, 0X20 # xorw %r12w, (%rax)")
#define XOR_R12W_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X31, 0X23 # xorw %r12w, (%rbx)")
#define XOR_R12W_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X31, 0X21 # xorw %r12w, (%rcx)")
#define XOR_R12W_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X31, 0X22 # xorw %r12w, (%rdx)")
#define XOR_R12W_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X31, 0X27 # xorw %r12w, (%rdi)")
#define XOR_R12W_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X31, 0X26 # xorw %r12w, (%rsi)")
#define XOR_R12W_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X31, 0X65, 0X00 # xorw %r12w, (%rbp)")
#define XOR_R12W_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X31, 0X24, 0X24 # xorw %r12w, (%rsp)")
#define XOR_R12W_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X31, 0X20 # xorw %r12w, (%r8)")
#define XOR_R12W_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X31, 0X21 # xorw %r12w, (%r9)")
#define XOR_R12W_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X31, 0X22 # xorw %r12w, (%r10)")
#define XOR_R12W_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X31, 0X23 # xorw %r12w, (%r11)")
#define XOR_R12W_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X31, 0X24, 0X24 # xorw %r12w, (%r12)")
#define XOR_R12W_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X31, 0X65, 0X00 # xorw %r12w, (%r13)")
#define XOR_R12W_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X31, 0X26 # xorw %r12w, (%r14)")
#define XOR_R12W_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X31, 0X27 # xorw %r12w, (%r15)")
#define XOR_R12W_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0X20 # xorw %r12w, (%eax)")
#define XOR_R12W_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0X23 # xorw %r12w, (%ebx)")
#define XOR_R12W_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0X21 # xorw %r12w, (%ecx)")
#define XOR_R12W_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0X22 # xorw %r12w, (%edx)")
#define XOR_R12W_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0X27 # xorw %r12w, (%edi)")
#define XOR_R12W_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0X26 # xorw %r12w, (%esi)")
#define XOR_R12W_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0X65, 0X00 # xorw %r12w, (%ebp)")
#define XOR_R12W_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0X24, 0X24 # xorw %r12w, (%esp)")

#define XOR_R13W_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X31, 0X28 # xorw %r13w, (%rax)")
#define XOR_R13W_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X31, 0X2B # xorw %r13w, (%rbx)")
#define XOR_R13W_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X31, 0X29 # xorw %r13w, (%rcx)")
#define XOR_R13W_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X31, 0X2A # xorw %r13w, (%rdx)")
#define XOR_R13W_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X31, 0X2F # xorw %r13w, (%rdi)")
#define XOR_R13W_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X31, 0X2E # xorw %r13w, (%rsi)")
#define XOR_R13W_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X31, 0X6D, 0X00 # xorw %r13w, (%rbp)")
#define XOR_R13W_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X31, 0X2C, 0X24 # xorw %r13w, (%rsp)")
#define XOR_R13W_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X31, 0X28 # xorw %r13w, (%r8)")
#define XOR_R13W_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X31, 0X29 # xorw %r13w, (%r9)")
#define XOR_R13W_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X31, 0X2A # xorw %r13w, (%r10)")
#define XOR_R13W_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X31, 0X2B # xorw %r13w, (%r11)")
#define XOR_R13W_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X31, 0X2C, 0X24 # xorw %r13w, (%r12)")
#define XOR_R13W_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X31, 0X6D, 0X00 # xorw %r13w, (%r13)")
#define XOR_R13W_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X31, 0X2E # xorw %r13w, (%r14)")
#define XOR_R13W_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X31, 0X2F # xorw %r13w, (%r15)")
#define XOR_R13W_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0X28 # xorw %r13w, (%eax)")
#define XOR_R13W_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0X2B # xorw %r13w, (%ebx)")
#define XOR_R13W_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0X29 # xorw %r13w, (%ecx)")
#define XOR_R13W_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0X2A # xorw %r13w, (%edx)")
#define XOR_R13W_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0X2F # xorw %r13w, (%edi)")
#define XOR_R13W_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0X2E # xorw %r13w, (%esi)")
#define XOR_R13W_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0X6D, 0X00 # xorw %r13w, (%ebp)")
#define XOR_R13W_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0X2C, 0X24 # xorw %r13w, (%esp)")

#define XOR_R14W_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X31, 0X30 # xorw %r14w, (%rax)")
#define XOR_R14W_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X31, 0X33 # xorw %r14w, (%rbx)")
#define XOR_R14W_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X31, 0X31 # xorw %r14w, (%rcx)")
#define XOR_R14W_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X31, 0X32 # xorw %r14w, (%rdx)")
#define XOR_R14W_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X31, 0X37 # xorw %r14w, (%rdi)")
#define XOR_R14W_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X31, 0X36 # xorw %r14w, (%rsi)")
#define XOR_R14W_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X31, 0X75, 0X00 # xorw %r14w, (%rbp)")
#define XOR_R14W_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X31, 0X34, 0X24 # xorw %r14w, (%rsp)")
#define XOR_R14W_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X31, 0X30 # xorw %r14w, (%r8)")
#define XOR_R14W_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X31, 0X31 # xorw %r14w, (%r9)")
#define XOR_R14W_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X31, 0X32 # xorw %r14w, (%r10)")
#define XOR_R14W_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X31, 0X33 # xorw %r14w, (%r11)")
#define XOR_R14W_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X31, 0X34, 0X24 # xorw %r14w, (%r12)")
#define XOR_R14W_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X31, 0X75, 0X00 # xorw %r14w, (%r13)")
#define XOR_R14W_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X31, 0X36 # xorw %r14w, (%r14)")
#define XOR_R14W_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X31, 0X37 # xorw %r14w, (%r15)")
#define XOR_R14W_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0X30 # xorw %r14w, (%eax)")
#define XOR_R14W_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0X33 # xorw %r14w, (%ebx)")
#define XOR_R14W_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0X31 # xorw %r14w, (%ecx)")
#define XOR_R14W_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0X32 # xorw %r14w, (%edx)")
#define XOR_R14W_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0X37 # xorw %r14w, (%edi)")
#define XOR_R14W_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0X36 # xorw %r14w, (%esi)")
#define XOR_R14W_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0X75, 0X00 # xorw %r14w, (%ebp)")
#define XOR_R14W_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0X34, 0X24 # xorw %r14w, (%esp)")

#define XOR_R15W_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X31, 0X38 # xorw %r15w, (%rax)")
#define XOR_R15W_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X31, 0X3B # xorw %r15w, (%rbx)")
#define XOR_R15W_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X31, 0X39 # xorw %r15w, (%rcx)")
#define XOR_R15W_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X31, 0X3A # xorw %r15w, (%rdx)")
#define XOR_R15W_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X31, 0X3F # xorw %r15w, (%rdi)")
#define XOR_R15W_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X31, 0X3E # xorw %r15w, (%rsi)")
#define XOR_R15W_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X31, 0X7D, 0X00 # xorw %r15w, (%rbp)")
#define XOR_R15W_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X31, 0X3C, 0X24 # xorw %r15w, (%rsp)")
#define XOR_R15W_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X31, 0X38 # xorw %r15w, (%r8)")
#define XOR_R15W_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X31, 0X39 # xorw %r15w, (%r9)")
#define XOR_R15W_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X31, 0X3A # xorw %r15w, (%r10)")
#define XOR_R15W_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X31, 0X3B # xorw %r15w, (%r11)")
#define XOR_R15W_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X31, 0X3C, 0X24 # xorw %r15w, (%r12)")
#define XOR_R15W_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X31, 0X7D, 0X00 # xorw %r15w, (%r13)")
#define XOR_R15W_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X31, 0X3E # xorw %r15w, (%r14)")
#define XOR_R15W_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X31, 0X3F # xorw %r15w, (%r15)")
#define XOR_R15W_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0X38 # xorw %r15w, (%eax)")
#define XOR_R15W_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0X3B # xorw %r15w, (%ebx)")
#define XOR_R15W_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0X39 # xorw %r15w, (%ecx)")
#define XOR_R15W_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0X3A # xorw %r15w, (%edx)")
#define XOR_R15W_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0X3F # xorw %r15w, (%edi)")
#define XOR_R15W_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0X3E # xorw %r15w, (%esi)")
#define XOR_R15W_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0X7D, 0X00 # xorw %r15w, (%ebp)")
#define XOR_R15W_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0X3C, 0X24 # xorw %r15w, (%esp)")

#define XOR_AX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0X80 # xorw " _(VALUE) "(%rax), %ax")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0X83 # xorw " _(VALUE) "(%rbx), %ax")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0X81 # xorw " _(VALUE) "(%rcx), %ax")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0X82 # xorw " _(VALUE) "(%rdx), %ax")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0X87 # xorw " _(VALUE) "(%rdi), %ax")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0X86 # xorw " _(VALUE) "(%rsi), %ax")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0X85 # xorw " _(VALUE) "(%rbp), %ax")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0X84, 0X24 # xorw " _(VALUE) "(%rsp), %ax")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X33, 0X80 # xorw " _(VALUE) "(%r8), %ax")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X33, 0X81 # xorw " _(VALUE) "(%r9), %ax")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X33, 0X82 # xorw " _(VALUE) "(%r10), %ax")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X33, 0X83 # xorw " _(VALUE) "(%r11), %ax")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X33, 0X84, 0X24 # xorw " _(VALUE) "(%r12), %ax")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X33, 0X85 # xorw " _(VALUE) "(%r13), %ax")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X33, 0X86 # xorw " _(VALUE) "(%r14), %ax")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X33, 0X87 # xorw " _(VALUE) "(%r15), %ax")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X33, 0X80 # xorw " _(VALUE) "(%eax), %ax")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X33, 0X83 # xorw " _(VALUE) "(%ebx), %ax")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X33, 0X81 # xorw " _(VALUE) "(%ecx), %ax")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X33, 0X82 # xorw " _(VALUE) "(%edx), %ax")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X33, 0X87 # xorw " _(VALUE) "(%edi), %ax")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X33, 0X86 # xorw " _(VALUE) "(%esi), %ax")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X33, 0X85 # xorw " _(VALUE) "(%ebp), %ax")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X33, 0X84, 0X24 # xorw " _(VALUE) "(%esp), %ax")\
	CMT_ASM(".long " _(VALUE))

#define XOR_BX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0X98 # xorw " _(VALUE) "(%rax), %bx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0X9B # xorw " _(VALUE) "(%rbx), %bx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0X99 # xorw " _(VALUE) "(%rcx), %bx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0X9A # xorw " _(VALUE) "(%rdx), %bx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0X9F # xorw " _(VALUE) "(%rdi), %bx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0X9E # xorw " _(VALUE) "(%rsi), %bx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0X9D # xorw " _(VALUE) "(%rbp), %bx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0X9C, 0X24 # xorw " _(VALUE) "(%rsp), %bx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X33, 0X98 # xorw " _(VALUE) "(%r8), %bx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X33, 0X99 # xorw " _(VALUE) "(%r9), %bx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X33, 0X9A # xorw " _(VALUE) "(%r10), %bx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X33, 0X9B # xorw " _(VALUE) "(%r11), %bx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X33, 0X9C, 0X24 # xorw " _(VALUE) "(%r12), %bx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X33, 0X9D # xorw " _(VALUE) "(%r13), %bx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X33, 0X9E # xorw " _(VALUE) "(%r14), %bx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X33, 0X9F # xorw " _(VALUE) "(%r15), %bx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X33, 0X98 # xorw " _(VALUE) "(%eax), %bx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X33, 0X9B # xorw " _(VALUE) "(%ebx), %bx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X33, 0X99 # xorw " _(VALUE) "(%ecx), %bx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X33, 0X9A # xorw " _(VALUE) "(%edx), %bx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X33, 0X9F # xorw " _(VALUE) "(%edi), %bx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X33, 0X9E # xorw " _(VALUE) "(%esi), %bx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X33, 0X9D # xorw " _(VALUE) "(%ebp), %bx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X33, 0X9C, 0X24 # xorw " _(VALUE) "(%esp), %bx")\
	CMT_ASM(".long " _(VALUE))

#define XOR_CX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0X88 # xorw " _(VALUE) "(%rax), %cx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0X8B # xorw " _(VALUE) "(%rbx), %cx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0X89 # xorw " _(VALUE) "(%rcx), %cx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0X8A # xorw " _(VALUE) "(%rdx), %cx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0X8F # xorw " _(VALUE) "(%rdi), %cx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0X8E # xorw " _(VALUE) "(%rsi), %cx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0X8D # xorw " _(VALUE) "(%rbp), %cx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0X8C, 0X24 # xorw " _(VALUE) "(%rsp), %cx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X33, 0X88 # xorw " _(VALUE) "(%r8), %cx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X33, 0X89 # xorw " _(VALUE) "(%r9), %cx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X33, 0X8A # xorw " _(VALUE) "(%r10), %cx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X33, 0X8B # xorw " _(VALUE) "(%r11), %cx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X33, 0X8C, 0X24 # xorw " _(VALUE) "(%r12), %cx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X33, 0X8D # xorw " _(VALUE) "(%r13), %cx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X33, 0X8E # xorw " _(VALUE) "(%r14), %cx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X33, 0X8F # xorw " _(VALUE) "(%r15), %cx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X33, 0X88 # xorw " _(VALUE) "(%eax), %cx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X33, 0X8B # xorw " _(VALUE) "(%ebx), %cx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X33, 0X89 # xorw " _(VALUE) "(%ecx), %cx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X33, 0X8A # xorw " _(VALUE) "(%edx), %cx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X33, 0X8F # xorw " _(VALUE) "(%edi), %cx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X33, 0X8E # xorw " _(VALUE) "(%esi), %cx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X33, 0X8D # xorw " _(VALUE) "(%ebp), %cx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X33, 0X8C, 0X24 # xorw " _(VALUE) "(%esp), %cx")\
	CMT_ASM(".long " _(VALUE))

#define XOR_DX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0X90 # xorw " _(VALUE) "(%rax), %dx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0X93 # xorw " _(VALUE) "(%rbx), %dx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0X91 # xorw " _(VALUE) "(%rcx), %dx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0X92 # xorw " _(VALUE) "(%rdx), %dx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0X97 # xorw " _(VALUE) "(%rdi), %dx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0X96 # xorw " _(VALUE) "(%rsi), %dx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0X95 # xorw " _(VALUE) "(%rbp), %dx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0X94, 0X24 # xorw " _(VALUE) "(%rsp), %dx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X33, 0X90 # xorw " _(VALUE) "(%r8), %dx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X33, 0X91 # xorw " _(VALUE) "(%r9), %dx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X33, 0X92 # xorw " _(VALUE) "(%r10), %dx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X33, 0X93 # xorw " _(VALUE) "(%r11), %dx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X33, 0X94, 0X24 # xorw " _(VALUE) "(%r12), %dx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X33, 0X95 # xorw " _(VALUE) "(%r13), %dx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X33, 0X96 # xorw " _(VALUE) "(%r14), %dx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X33, 0X97 # xorw " _(VALUE) "(%r15), %dx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X33, 0X90 # xorw " _(VALUE) "(%eax), %dx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X33, 0X93 # xorw " _(VALUE) "(%ebx), %dx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X33, 0X91 # xorw " _(VALUE) "(%ecx), %dx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X33, 0X92 # xorw " _(VALUE) "(%edx), %dx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X33, 0X97 # xorw " _(VALUE) "(%edi), %dx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X33, 0X96 # xorw " _(VALUE) "(%esi), %dx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X33, 0X95 # xorw " _(VALUE) "(%ebp), %dx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X33, 0X94, 0X24 # xorw " _(VALUE) "(%esp), %dx")\
	CMT_ASM(".long " _(VALUE))

#define XOR_DI_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0XB8 # xorw " _(VALUE) "(%rax), %di")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DI_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0XBB # xorw " _(VALUE) "(%rbx), %di")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DI_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0XB9 # xorw " _(VALUE) "(%rcx), %di")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DI_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0XBA # xorw " _(VALUE) "(%rdx), %di")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DI_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0XBF # xorw " _(VALUE) "(%rdi), %di")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DI_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0XBE # xorw " _(VALUE) "(%rsi), %di")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DI_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0XBD # xorw " _(VALUE) "(%rbp), %di")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DI_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0XBC, 0X24 # xorw " _(VALUE) "(%rsp), %di")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DI_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X33, 0XB8 # xorw " _(VALUE) "(%r8), %di")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DI_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X33, 0XB9 # xorw " _(VALUE) "(%r9), %di")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DI_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X33, 0XBA # xorw " _(VALUE) "(%r10), %di")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DI_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X33, 0XBB # xorw " _(VALUE) "(%r11), %di")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DI_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X33, 0XBC, 0X24 # xorw " _(VALUE) "(%r12), %di")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DI_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X33, 0XBD # xorw " _(VALUE) "(%r13), %di")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DI_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X33, 0XBE # xorw " _(VALUE) "(%r14), %di")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DI_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X33, 0XBF # xorw " _(VALUE) "(%r15), %di")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X33, 0XB8 # xorw " _(VALUE) "(%eax), %di")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X33, 0XBB # xorw " _(VALUE) "(%ebx), %di")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X33, 0XB9 # xorw " _(VALUE) "(%ecx), %di")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X33, 0XBA # xorw " _(VALUE) "(%edx), %di")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X33, 0XBF # xorw " _(VALUE) "(%edi), %di")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X33, 0XBE # xorw " _(VALUE) "(%esi), %di")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X33, 0XBD # xorw " _(VALUE) "(%ebp), %di")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X33, 0XBC, 0X24 # xorw " _(VALUE) "(%esp), %di")\
	CMT_ASM(".long " _(VALUE))

#define XOR_SI_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0XB0 # xorw " _(VALUE) "(%rax), %si")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SI_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0XB3 # xorw " _(VALUE) "(%rbx), %si")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SI_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0XB1 # xorw " _(VALUE) "(%rcx), %si")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SI_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0XB2 # xorw " _(VALUE) "(%rdx), %si")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SI_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0XB7 # xorw " _(VALUE) "(%rdi), %si")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SI_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0XB6 # xorw " _(VALUE) "(%rsi), %si")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SI_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0XB5 # xorw " _(VALUE) "(%rbp), %si")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SI_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0XB4, 0X24 # xorw " _(VALUE) "(%rsp), %si")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SI_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X33, 0XB0 # xorw " _(VALUE) "(%r8), %si")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SI_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X33, 0XB1 # xorw " _(VALUE) "(%r9), %si")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SI_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X33, 0XB2 # xorw " _(VALUE) "(%r10), %si")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SI_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X33, 0XB3 # xorw " _(VALUE) "(%r11), %si")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SI_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X33, 0XB4, 0X24 # xorw " _(VALUE) "(%r12), %si")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SI_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X33, 0XB5 # xorw " _(VALUE) "(%r13), %si")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SI_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X33, 0XB6 # xorw " _(VALUE) "(%r14), %si")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SI_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X33, 0XB7 # xorw " _(VALUE) "(%r15), %si")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X33, 0XB0 # xorw " _(VALUE) "(%eax), %si")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X33, 0XB3 # xorw " _(VALUE) "(%ebx), %si")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X33, 0XB1 # xorw " _(VALUE) "(%ecx), %si")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X33, 0XB2 # xorw " _(VALUE) "(%edx), %si")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X33, 0XB7 # xorw " _(VALUE) "(%edi), %si")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X33, 0XB6 # xorw " _(VALUE) "(%esi), %si")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X33, 0XB5 # xorw " _(VALUE) "(%ebp), %si")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X33, 0XB4, 0X24 # xorw " _(VALUE) "(%esp), %si")\
	CMT_ASM(".long " _(VALUE))

#define XOR_BP_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0XA8 # xorw " _(VALUE) "(%rax), %bp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BP_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0XAB # xorw " _(VALUE) "(%rbx), %bp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BP_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0XA9 # xorw " _(VALUE) "(%rcx), %bp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BP_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0XAA # xorw " _(VALUE) "(%rdx), %bp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BP_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0XAF # xorw " _(VALUE) "(%rdi), %bp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BP_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0XAE # xorw " _(VALUE) "(%rsi), %bp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BP_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0XAD # xorw " _(VALUE) "(%rbp), %bp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BP_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0XAC, 0X24 # xorw " _(VALUE) "(%rsp), %bp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BP_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X33, 0XA8 # xorw " _(VALUE) "(%r8), %bp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BP_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X33, 0XA9 # xorw " _(VALUE) "(%r9), %bp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BP_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X33, 0XAA # xorw " _(VALUE) "(%r10), %bp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BP_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X33, 0XAB # xorw " _(VALUE) "(%r11), %bp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BP_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X33, 0XAC, 0X24 # xorw " _(VALUE) "(%r12), %bp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BP_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X33, 0XAD # xorw " _(VALUE) "(%r13), %bp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BP_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X33, 0XAE # xorw " _(VALUE) "(%r14), %bp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BP_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X33, 0XAF # xorw " _(VALUE) "(%r15), %bp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X33, 0XA8 # xorw " _(VALUE) "(%eax), %bp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X33, 0XAB # xorw " _(VALUE) "(%ebx), %bp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X33, 0XA9 # xorw " _(VALUE) "(%ecx), %bp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X33, 0XAA # xorw " _(VALUE) "(%edx), %bp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X33, 0XAF # xorw " _(VALUE) "(%edi), %bp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X33, 0XAE # xorw " _(VALUE) "(%esi), %bp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X33, 0XAD # xorw " _(VALUE) "(%ebp), %bp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X33, 0XAC, 0X24 # xorw " _(VALUE) "(%esp), %bp")\
	CMT_ASM(".long " _(VALUE))

#define XOR_SP_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0XA0 # xorw " _(VALUE) "(%rax), %sp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SP_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0XA3 # xorw " _(VALUE) "(%rbx), %sp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SP_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0XA1 # xorw " _(VALUE) "(%rcx), %sp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SP_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0XA2 # xorw " _(VALUE) "(%rdx), %sp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SP_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0XA7 # xorw " _(VALUE) "(%rdi), %sp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SP_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0XA6 # xorw " _(VALUE) "(%rsi), %sp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SP_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0XA5 # xorw " _(VALUE) "(%rbp), %sp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SP_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X33, 0XA4, 0X24 # xorw " _(VALUE) "(%rsp), %sp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SP_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X33, 0XA0 # xorw " _(VALUE) "(%r8), %sp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SP_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X33, 0XA1 # xorw " _(VALUE) "(%r9), %sp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SP_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X33, 0XA2 # xorw " _(VALUE) "(%r10), %sp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SP_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X33, 0XA3 # xorw " _(VALUE) "(%r11), %sp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SP_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X33, 0XA4, 0X24 # xorw " _(VALUE) "(%r12), %sp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SP_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X33, 0XA5 # xorw " _(VALUE) "(%r13), %sp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SP_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X33, 0XA6 # xorw " _(VALUE) "(%r14), %sp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SP_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X33, 0XA7 # xorw " _(VALUE) "(%r15), %sp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X33, 0XA0 # xorw " _(VALUE) "(%eax), %sp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X33, 0XA3 # xorw " _(VALUE) "(%ebx), %sp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X33, 0XA1 # xorw " _(VALUE) "(%ecx), %sp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X33, 0XA2 # xorw " _(VALUE) "(%edx), %sp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X33, 0XA7 # xorw " _(VALUE) "(%edi), %sp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X33, 0XA6 # xorw " _(VALUE) "(%esi), %sp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X33, 0XA5 # xorw " _(VALUE) "(%ebp), %sp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X33, 0XA4, 0X24 # xorw " _(VALUE) "(%esp), %sp")\
	CMT_ASM(".long " _(VALUE))

#define XOR_R8W_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X33, 0X80 # xorw " _(VALUE) "(%rax), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8W_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X33, 0X83 # xorw " _(VALUE) "(%rbx), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8W_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X33, 0X81 # xorw " _(VALUE) "(%rcx), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8W_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X33, 0X82 # xorw " _(VALUE) "(%rdx), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8W_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X33, 0X87 # xorw " _(VALUE) "(%rdi), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8W_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X33, 0X86 # xorw " _(VALUE) "(%rsi), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8W_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X33, 0X85 # xorw " _(VALUE) "(%rbp), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8W_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X33, 0X84, 0X24 # xorw " _(VALUE) "(%rsp), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8W_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X33, 0X80 # xorw " _(VALUE) "(%r8), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8W_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X33, 0X81 # xorw " _(VALUE) "(%r9), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8W_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X33, 0X82 # xorw " _(VALUE) "(%r10), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8W_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X33, 0X83 # xorw " _(VALUE) "(%r11), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8W_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X33, 0X84, 0X24 # xorw " _(VALUE) "(%r12), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8W_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X33, 0X85 # xorw " _(VALUE) "(%r13), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8W_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X33, 0X86 # xorw " _(VALUE) "(%r14), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8W_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X33, 0X87 # xorw " _(VALUE) "(%r15), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8W_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0X80 # xorw " _(VALUE) "(%eax), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8W_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0X83 # xorw " _(VALUE) "(%ebx), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8W_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0X81 # xorw " _(VALUE) "(%ecx), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8W_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0X82 # xorw " _(VALUE) "(%edx), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8W_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0X87 # xorw " _(VALUE) "(%edi), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8W_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0X86 # xorw " _(VALUE) "(%esi), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8W_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0X85 # xorw " _(VALUE) "(%ebp), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8W_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0X84, 0X24 # xorw " _(VALUE) "(%esp), %r8w")\
	CMT_ASM(".long " _(VALUE))

#define XOR_R9W_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X33, 0X88 # xorw " _(VALUE) "(%rax), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9W_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X33, 0X8B # xorw " _(VALUE) "(%rbx), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9W_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X33, 0X89 # xorw " _(VALUE) "(%rcx), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9W_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X33, 0X8A # xorw " _(VALUE) "(%rdx), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9W_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X33, 0X8F # xorw " _(VALUE) "(%rdi), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9W_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X33, 0X8E # xorw " _(VALUE) "(%rsi), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9W_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X33, 0X8D # xorw " _(VALUE) "(%rbp), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9W_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X33, 0X8C, 0X24 # xorw " _(VALUE) "(%rsp), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9W_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X33, 0X88 # xorw " _(VALUE) "(%r8), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9W_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X33, 0X89 # xorw " _(VALUE) "(%r9), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9W_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X33, 0X8A # xorw " _(VALUE) "(%r10), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9W_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X33, 0X8B # xorw " _(VALUE) "(%r11), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9W_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X33, 0X8C, 0X24 # xorw " _(VALUE) "(%r12), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9W_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X33, 0X8D # xorw " _(VALUE) "(%r13), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9W_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X33, 0X8E # xorw " _(VALUE) "(%r14), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9W_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X33, 0X8F # xorw " _(VALUE) "(%r15), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9W_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0X88 # xorw " _(VALUE) "(%eax), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9W_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0X8B # xorw " _(VALUE) "(%ebx), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9W_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0X89 # xorw " _(VALUE) "(%ecx), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9W_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0X8A # xorw " _(VALUE) "(%edx), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9W_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0X8F # xorw " _(VALUE) "(%edi), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9W_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0X8E # xorw " _(VALUE) "(%esi), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9W_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0X8D # xorw " _(VALUE) "(%ebp), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9W_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0X8C, 0X24 # xorw " _(VALUE) "(%esp), %r9w")\
	CMT_ASM(".long " _(VALUE))

#define XOR_R10W_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X33, 0X90 # xorw " _(VALUE) "(%rax), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10W_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X33, 0X93 # xorw " _(VALUE) "(%rbx), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10W_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X33, 0X91 # xorw " _(VALUE) "(%rcx), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10W_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X33, 0X92 # xorw " _(VALUE) "(%rdx), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10W_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X33, 0X97 # xorw " _(VALUE) "(%rdi), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10W_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X33, 0X96 # xorw " _(VALUE) "(%rsi), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10W_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X33, 0X95 # xorw " _(VALUE) "(%rbp), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10W_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X33, 0X94, 0X24 # xorw " _(VALUE) "(%rsp), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10W_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X33, 0X90 # xorw " _(VALUE) "(%r8), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10W_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X33, 0X91 # xorw " _(VALUE) "(%r9), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10W_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X33, 0X92 # xorw " _(VALUE) "(%r10), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10W_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X33, 0X93 # xorw " _(VALUE) "(%r11), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10W_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X33, 0X94, 0X24 # xorw " _(VALUE) "(%r12), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10W_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X33, 0X95 # xorw " _(VALUE) "(%r13), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10W_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X33, 0X96 # xorw " _(VALUE) "(%r14), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10W_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X33, 0X97 # xorw " _(VALUE) "(%r15), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10W_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0X90 # xorw " _(VALUE) "(%eax), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10W_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0X93 # xorw " _(VALUE) "(%ebx), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10W_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0X91 # xorw " _(VALUE) "(%ecx), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10W_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0X92 # xorw " _(VALUE) "(%edx), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10W_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0X97 # xorw " _(VALUE) "(%edi), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10W_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0X96 # xorw " _(VALUE) "(%esi), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10W_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0X95 # xorw " _(VALUE) "(%ebp), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10W_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0X94, 0X24 # xorw " _(VALUE) "(%esp), %r10w")\
	CMT_ASM(".long " _(VALUE))

#define XOR_R11W_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X33, 0X98 # xorw " _(VALUE) "(%rax), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11W_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X33, 0X9B # xorw " _(VALUE) "(%rbx), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11W_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X33, 0X99 # xorw " _(VALUE) "(%rcx), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11W_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X33, 0X9A # xorw " _(VALUE) "(%rdx), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11W_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X33, 0X9F # xorw " _(VALUE) "(%rdi), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11W_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X33, 0X9E # xorw " _(VALUE) "(%rsi), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11W_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X33, 0X9D # xorw " _(VALUE) "(%rbp), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11W_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X33, 0X9C, 0X24 # xorw " _(VALUE) "(%rsp), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11W_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X33, 0X98 # xorw " _(VALUE) "(%r8), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11W_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X33, 0X99 # xorw " _(VALUE) "(%r9), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11W_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X33, 0X9A # xorw " _(VALUE) "(%r10), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11W_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X33, 0X9B # xorw " _(VALUE) "(%r11), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11W_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X33, 0X9C, 0X24 # xorw " _(VALUE) "(%r12), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11W_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X33, 0X9D # xorw " _(VALUE) "(%r13), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11W_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X33, 0X9E # xorw " _(VALUE) "(%r14), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11W_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X33, 0X9F # xorw " _(VALUE) "(%r15), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11W_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0X98 # xorw " _(VALUE) "(%eax), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11W_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0X9B # xorw " _(VALUE) "(%ebx), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11W_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0X99 # xorw " _(VALUE) "(%ecx), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11W_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0X9A # xorw " _(VALUE) "(%edx), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11W_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0X9F # xorw " _(VALUE) "(%edi), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11W_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0X9E # xorw " _(VALUE) "(%esi), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11W_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0X9D # xorw " _(VALUE) "(%ebp), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11W_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0X9C, 0X24 # xorw " _(VALUE) "(%esp), %r11w")\
	CMT_ASM(".long " _(VALUE))

#define XOR_R12W_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X33, 0XA0 # xorw " _(VALUE) "(%rax), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12W_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X33, 0XA3 # xorw " _(VALUE) "(%rbx), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12W_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X33, 0XA1 # xorw " _(VALUE) "(%rcx), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12W_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X33, 0XA2 # xorw " _(VALUE) "(%rdx), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12W_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X33, 0XA7 # xorw " _(VALUE) "(%rdi), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12W_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X33, 0XA6 # xorw " _(VALUE) "(%rsi), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12W_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X33, 0XA5 # xorw " _(VALUE) "(%rbp), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12W_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X33, 0XA4, 0X24 # xorw " _(VALUE) "(%rsp), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12W_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X33, 0XA0 # xorw " _(VALUE) "(%r8), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12W_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X33, 0XA1 # xorw " _(VALUE) "(%r9), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12W_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X33, 0XA2 # xorw " _(VALUE) "(%r10), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12W_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X33, 0XA3 # xorw " _(VALUE) "(%r11), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12W_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X33, 0XA4, 0X24 # xorw " _(VALUE) "(%r12), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12W_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X33, 0XA5 # xorw " _(VALUE) "(%r13), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12W_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X33, 0XA6 # xorw " _(VALUE) "(%r14), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12W_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X33, 0XA7 # xorw " _(VALUE) "(%r15), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12W_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0XA0 # xorw " _(VALUE) "(%eax), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12W_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0XA3 # xorw " _(VALUE) "(%ebx), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12W_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0XA1 # xorw " _(VALUE) "(%ecx), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12W_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0XA2 # xorw " _(VALUE) "(%edx), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12W_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0XA7 # xorw " _(VALUE) "(%edi), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12W_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0XA6 # xorw " _(VALUE) "(%esi), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12W_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0XA5 # xorw " _(VALUE) "(%ebp), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12W_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0XA4, 0X24 # xorw " _(VALUE) "(%esp), %r12w")\
	CMT_ASM(".long " _(VALUE))

#define XOR_R13W_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X33, 0XA8 # xorw " _(VALUE) "(%rax), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13W_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X33, 0XAB # xorw " _(VALUE) "(%rbx), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13W_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X33, 0XA9 # xorw " _(VALUE) "(%rcx), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13W_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X33, 0XAA # xorw " _(VALUE) "(%rdx), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13W_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X33, 0XAF # xorw " _(VALUE) "(%rdi), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13W_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X33, 0XAE # xorw " _(VALUE) "(%rsi), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13W_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X33, 0XAD # xorw " _(VALUE) "(%rbp), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13W_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X33, 0XAC, 0X24 # xorw " _(VALUE) "(%rsp), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13W_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X33, 0XA8 # xorw " _(VALUE) "(%r8), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13W_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X33, 0XA9 # xorw " _(VALUE) "(%r9), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13W_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X33, 0XAA # xorw " _(VALUE) "(%r10), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13W_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X33, 0XAB # xorw " _(VALUE) "(%r11), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13W_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X33, 0XAC, 0X24 # xorw " _(VALUE) "(%r12), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13W_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X33, 0XAD # xorw " _(VALUE) "(%r13), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13W_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X33, 0XAE # xorw " _(VALUE) "(%r14), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13W_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X33, 0XAF # xorw " _(VALUE) "(%r15), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13W_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0XA8 # xorw " _(VALUE) "(%eax), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13W_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0XAB # xorw " _(VALUE) "(%ebx), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13W_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0XA9 # xorw " _(VALUE) "(%ecx), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13W_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0XAA # xorw " _(VALUE) "(%edx), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13W_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0XAF # xorw " _(VALUE) "(%edi), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13W_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0XAE # xorw " _(VALUE) "(%esi), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13W_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0XAD # xorw " _(VALUE) "(%ebp), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13W_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0XAC, 0X24 # xorw " _(VALUE) "(%esp), %r13w")\
	CMT_ASM(".long " _(VALUE))

#define XOR_R14W_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X33, 0XB0 # xorw " _(VALUE) "(%rax), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14W_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X33, 0XB3 # xorw " _(VALUE) "(%rbx), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14W_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X33, 0XB1 # xorw " _(VALUE) "(%rcx), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14W_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X33, 0XB2 # xorw " _(VALUE) "(%rdx), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14W_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X33, 0XB7 # xorw " _(VALUE) "(%rdi), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14W_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X33, 0XB6 # xorw " _(VALUE) "(%rsi), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14W_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X33, 0XB5 # xorw " _(VALUE) "(%rbp), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14W_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X33, 0XB4, 0X24 # xorw " _(VALUE) "(%rsp), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14W_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X33, 0XB0 # xorw " _(VALUE) "(%r8), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14W_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X33, 0XB1 # xorw " _(VALUE) "(%r9), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14W_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X33, 0XB2 # xorw " _(VALUE) "(%r10), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14W_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X33, 0XB3 # xorw " _(VALUE) "(%r11), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14W_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X33, 0XB4, 0X24 # xorw " _(VALUE) "(%r12), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14W_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X33, 0XB5 # xorw " _(VALUE) "(%r13), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14W_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X33, 0XB6 # xorw " _(VALUE) "(%r14), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14W_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X33, 0XB7 # xorw " _(VALUE) "(%r15), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14W_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0XB0 # xorw " _(VALUE) "(%eax), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14W_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0XB3 # xorw " _(VALUE) "(%ebx), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14W_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0XB1 # xorw " _(VALUE) "(%ecx), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14W_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0XB2 # xorw " _(VALUE) "(%edx), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14W_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0XB7 # xorw " _(VALUE) "(%edi), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14W_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0XB6 # xorw " _(VALUE) "(%esi), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14W_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0XB5 # xorw " _(VALUE) "(%ebp), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14W_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0XB4, 0X24 # xorw " _(VALUE) "(%esp), %r14w")\
	CMT_ASM(".long " _(VALUE))

#define XOR_R15W_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X33, 0XB8 # xorw " _(VALUE) "(%rax), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15W_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X33, 0XBB # xorw " _(VALUE) "(%rbx), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15W_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X33, 0XB9 # xorw " _(VALUE) "(%rcx), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15W_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X33, 0XBA # xorw " _(VALUE) "(%rdx), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15W_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X33, 0XBF # xorw " _(VALUE) "(%rdi), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15W_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X33, 0XBE # xorw " _(VALUE) "(%rsi), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15W_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X33, 0XBD # xorw " _(VALUE) "(%rbp), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15W_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X33, 0XBC, 0X24 # xorw " _(VALUE) "(%rsp), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15W_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X33, 0XB8 # xorw " _(VALUE) "(%r8), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15W_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X33, 0XB9 # xorw " _(VALUE) "(%r9), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15W_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X33, 0XBA # xorw " _(VALUE) "(%r10), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15W_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X33, 0XBB # xorw " _(VALUE) "(%r11), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15W_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X33, 0XBC, 0X24 # xorw " _(VALUE) "(%r12), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15W_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X33, 0XBD # xorw " _(VALUE) "(%r13), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15W_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X33, 0XBE # xorw " _(VALUE) "(%r14), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15W_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X33, 0XBF # xorw " _(VALUE) "(%r15), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15W_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0XB8 # xorw " _(VALUE) "(%eax), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15W_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0XBB # xorw " _(VALUE) "(%ebx), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15W_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0XB9 # xorw " _(VALUE) "(%ecx), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15W_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0XBA # xorw " _(VALUE) "(%edx), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15W_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0XBF # xorw " _(VALUE) "(%edi), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15W_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0XBE # xorw " _(VALUE) "(%esi), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15W_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0XBD # xorw " _(VALUE) "(%ebp), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15W_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X33, 0XBC, 0X24 # xorw " _(VALUE) "(%esp), %r15w")\
	CMT_ASM(".long " _(VALUE))

#define XOR_AX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0X80 # xorw %ax, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0X83 # xorw %ax, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0X81 # xorw %ax, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0X82 # xorw %ax, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0X87 # xorw %ax, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0X86 # xorw %ax, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0X85 # xorw %ax, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0X84, 0X24 # xorw %ax, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X31, 0X80 # xorw %ax, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X31, 0X81 # xorw %ax, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X31, 0X82 # xorw %ax, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X31, 0X83 # xorw %ax, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X31, 0X84, 0X24 # xorw %ax, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X31, 0X85 # xorw %ax, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X31, 0X86 # xorw %ax, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X31, 0X87 # xorw %ax, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X31, 0X80 # xorw %ax, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X31, 0X83 # xorw %ax, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X31, 0X81 # xorw %ax, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X31, 0X82 # xorw %ax, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X31, 0X87 # xorw %ax, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X31, 0X86 # xorw %ax, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X31, 0X85 # xorw %ax, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_AX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X31, 0X84, 0X24 # xorw %ax, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XOR_BX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0X98 # xorw %bx, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0X9B # xorw %bx, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0X99 # xorw %bx, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0X9A # xorw %bx, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0X9F # xorw %bx, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0X9E # xorw %bx, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0X9D # xorw %bx, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0X9C, 0X24 # xorw %bx, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X31, 0X98 # xorw %bx, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X31, 0X99 # xorw %bx, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X31, 0X9A # xorw %bx, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X31, 0X9B # xorw %bx, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X31, 0X9C, 0X24 # xorw %bx, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X31, 0X9D # xorw %bx, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X31, 0X9E # xorw %bx, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X31, 0X9F # xorw %bx, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X31, 0X98 # xorw %bx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X31, 0X9B # xorw %bx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X31, 0X99 # xorw %bx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X31, 0X9A # xorw %bx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X31, 0X9F # xorw %bx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X31, 0X9E # xorw %bx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X31, 0X9D # xorw %bx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X31, 0X9C, 0X24 # xorw %bx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XOR_CX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0X88 # xorw %cx, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0X8B # xorw %cx, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0X89 # xorw %cx, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0X8A # xorw %cx, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0X8F # xorw %cx, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0X8E # xorw %cx, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0X8D # xorw %cx, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0X8C, 0X24 # xorw %cx, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X31, 0X88 # xorw %cx, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X31, 0X89 # xorw %cx, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X31, 0X8A # xorw %cx, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X31, 0X8B # xorw %cx, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X31, 0X8C, 0X24 # xorw %cx, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X31, 0X8D # xorw %cx, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X31, 0X8E # xorw %cx, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X31, 0X8F # xorw %cx, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X31, 0X88 # xorw %cx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X31, 0X8B # xorw %cx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X31, 0X89 # xorw %cx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X31, 0X8A # xorw %cx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X31, 0X8F # xorw %cx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X31, 0X8E # xorw %cx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X31, 0X8D # xorw %cx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_CX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X31, 0X8C, 0X24 # xorw %cx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XOR_DX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0X90 # xorw %dx, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0X93 # xorw %dx, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0X91 # xorw %dx, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0X92 # xorw %dx, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0X97 # xorw %dx, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0X96 # xorw %dx, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0X95 # xorw %dx, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0X94, 0X24 # xorw %dx, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X31, 0X90 # xorw %dx, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X31, 0X91 # xorw %dx, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X31, 0X92 # xorw %dx, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X31, 0X93 # xorw %dx, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X31, 0X94, 0X24 # xorw %dx, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X31, 0X95 # xorw %dx, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X31, 0X96 # xorw %dx, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X31, 0X97 # xorw %dx, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X31, 0X90 # xorw %dx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X31, 0X93 # xorw %dx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X31, 0X91 # xorw %dx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X31, 0X92 # xorw %dx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X31, 0X97 # xorw %dx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X31, 0X96 # xorw %dx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X31, 0X95 # xorw %dx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X31, 0X94, 0X24 # xorw %dx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XOR_DI_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0XB8 # xorw %di, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DI_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0XBB # xorw %di, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DI_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0XB9 # xorw %di, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DI_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0XBA # xorw %di, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DI_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0XBF # xorw %di, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DI_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0XBE # xorw %di, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DI_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0XBD # xorw %di, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DI_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0XBC, 0X24 # xorw %di, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DI_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X31, 0XB8 # xorw %di, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DI_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X31, 0XB9 # xorw %di, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DI_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X31, 0XBA # xorw %di, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DI_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X31, 0XBB # xorw %di, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DI_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X31, 0XBC, 0X24 # xorw %di, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DI_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X31, 0XBD # xorw %di, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DI_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X31, 0XBE # xorw %di, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DI_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X31, 0XBF # xorw %di, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X31, 0XB8 # xorw %di, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X31, 0XBB # xorw %di, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X31, 0XB9 # xorw %di, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X31, 0XBA # xorw %di, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X31, 0XBF # xorw %di, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X31, 0XBE # xorw %di, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X31, 0XBD # xorw %di, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_DI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X31, 0XBC, 0X24 # xorw %di, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XOR_SI_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0XB0 # xorw %si, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SI_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0XB3 # xorw %si, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SI_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0XB1 # xorw %si, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SI_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0XB2 # xorw %si, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SI_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0XB7 # xorw %si, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SI_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0XB6 # xorw %si, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SI_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0XB5 # xorw %si, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SI_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0XB4, 0X24 # xorw %si, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SI_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X31, 0XB0 # xorw %si, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SI_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X31, 0XB1 # xorw %si, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SI_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X31, 0XB2 # xorw %si, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SI_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X31, 0XB3 # xorw %si, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SI_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X31, 0XB4, 0X24 # xorw %si, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SI_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X31, 0XB5 # xorw %si, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SI_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X31, 0XB6 # xorw %si, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SI_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X31, 0XB7 # xorw %si, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X31, 0XB0 # xorw %si, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X31, 0XB3 # xorw %si, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X31, 0XB1 # xorw %si, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X31, 0XB2 # xorw %si, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X31, 0XB7 # xorw %si, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X31, 0XB6 # xorw %si, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X31, 0XB5 # xorw %si, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X31, 0XB4, 0X24 # xorw %si, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XOR_BP_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0XA8 # xorw %bp, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BP_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0XAB # xorw %bp, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BP_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0XA9 # xorw %bp, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BP_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0XAA # xorw %bp, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BP_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0XAF # xorw %bp, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BP_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0XAE # xorw %bp, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BP_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0XAD # xorw %bp, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BP_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0XAC, 0X24 # xorw %bp, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BP_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X31, 0XA8 # xorw %bp, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BP_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X31, 0XA9 # xorw %bp, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BP_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X31, 0XAA # xorw %bp, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BP_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X31, 0XAB # xorw %bp, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BP_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X31, 0XAC, 0X24 # xorw %bp, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BP_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X31, 0XAD # xorw %bp, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BP_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X31, 0XAE # xorw %bp, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BP_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X31, 0XAF # xorw %bp, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X31, 0XA8 # xorw %bp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X31, 0XAB # xorw %bp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X31, 0XA9 # xorw %bp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X31, 0XAA # xorw %bp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X31, 0XAF # xorw %bp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X31, 0XAE # xorw %bp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X31, 0XAD # xorw %bp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_BP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X31, 0XAC, 0X24 # xorw %bp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XOR_SP_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0XA0 # xorw %sp, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SP_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0XA3 # xorw %sp, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SP_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0XA1 # xorw %sp, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SP_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0XA2 # xorw %sp, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SP_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0XA7 # xorw %sp, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SP_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0XA6 # xorw %sp, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SP_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0XA5 # xorw %sp, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SP_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X31, 0XA4, 0X24 # xorw %sp, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SP_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X31, 0XA0 # xorw %sp, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SP_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X31, 0XA1 # xorw %sp, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SP_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X31, 0XA2 # xorw %sp, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SP_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X31, 0XA3 # xorw %sp, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SP_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X31, 0XA4, 0X24 # xorw %sp, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SP_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X31, 0XA5 # xorw %sp, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SP_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X31, 0XA6 # xorw %sp, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SP_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X31, 0XA7 # xorw %sp, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X31, 0XA0 # xorw %sp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X31, 0XA3 # xorw %sp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X31, 0XA1 # xorw %sp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X31, 0XA2 # xorw %sp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X31, 0XA7 # xorw %sp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X31, 0XA6 # xorw %sp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X31, 0XA5 # xorw %sp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_SP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X31, 0XA4, 0X24 # xorw %sp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XOR_R8W_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X31, 0X80 # xorw %r8w, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8W_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X31, 0X83 # xorw %r8w, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8W_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X31, 0X81 # xorw %r8w, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8W_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X31, 0X82 # xorw %r8w, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8W_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X31, 0X87 # xorw %r8w, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8W_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X31, 0X86 # xorw %r8w, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8W_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X31, 0X85 # xorw %r8w, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8W_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X31, 0X84, 0X24 # xorw %r8w, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8W_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X31, 0X80 # xorw %r8w, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8W_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X31, 0X81 # xorw %r8w, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8W_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X31, 0X82 # xorw %r8w, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8W_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X31, 0X83 # xorw %r8w, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8W_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X31, 0X84, 0X24 # xorw %r8w, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8W_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X31, 0X85 # xorw %r8w, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8W_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X31, 0X86 # xorw %r8w, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8W_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X31, 0X87 # xorw %r8w, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8W_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0X80 # xorw %r8w, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8W_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0X83 # xorw %r8w, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8W_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0X81 # xorw %r8w, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8W_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0X82 # xorw %r8w, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8W_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0X87 # xorw %r8w, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8W_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0X86 # xorw %r8w, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8W_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0X85 # xorw %r8w, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8W_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0X84, 0X24 # xorw %r8w, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XOR_R9W_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X31, 0X88 # xorw %r9w, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9W_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X31, 0X8B # xorw %r9w, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9W_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X31, 0X89 # xorw %r9w, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9W_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X31, 0X8A # xorw %r9w, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9W_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X31, 0X8F # xorw %r9w, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9W_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X31, 0X8E # xorw %r9w, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9W_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X31, 0X8D # xorw %r9w, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9W_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X31, 0X8C, 0X24 # xorw %r9w, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9W_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X31, 0X88 # xorw %r9w, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9W_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X31, 0X89 # xorw %r9w, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9W_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X31, 0X8A # xorw %r9w, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9W_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X31, 0X8B # xorw %r9w, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9W_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X31, 0X8C, 0X24 # xorw %r9w, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9W_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X31, 0X8D # xorw %r9w, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9W_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X31, 0X8E # xorw %r9w, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9W_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X31, 0X8F # xorw %r9w, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9W_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0X88 # xorw %r9w, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9W_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0X8B # xorw %r9w, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9W_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0X89 # xorw %r9w, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9W_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0X8A # xorw %r9w, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9W_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0X8F # xorw %r9w, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9W_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0X8E # xorw %r9w, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9W_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0X8D # xorw %r9w, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9W_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0X8C, 0X24 # xorw %r9w, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XOR_R10W_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X31, 0X90 # xorw %r10w, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10W_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X31, 0X93 # xorw %r10w, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10W_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X31, 0X91 # xorw %r10w, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10W_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X31, 0X92 # xorw %r10w, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10W_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X31, 0X97 # xorw %r10w, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10W_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X31, 0X96 # xorw %r10w, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10W_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X31, 0X95 # xorw %r10w, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10W_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X31, 0X94, 0X24 # xorw %r10w, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10W_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X31, 0X90 # xorw %r10w, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10W_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X31, 0X91 # xorw %r10w, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10W_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X31, 0X92 # xorw %r10w, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10W_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X31, 0X93 # xorw %r10w, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10W_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X31, 0X94, 0X24 # xorw %r10w, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10W_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X31, 0X95 # xorw %r10w, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10W_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X31, 0X96 # xorw %r10w, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10W_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X31, 0X97 # xorw %r10w, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10W_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0X90 # xorw %r10w, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10W_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0X93 # xorw %r10w, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10W_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0X91 # xorw %r10w, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10W_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0X92 # xorw %r10w, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10W_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0X97 # xorw %r10w, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10W_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0X96 # xorw %r10w, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10W_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0X95 # xorw %r10w, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10W_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0X94, 0X24 # xorw %r10w, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XOR_R11W_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X31, 0X98 # xorw %r11w, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11W_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X31, 0X9B # xorw %r11w, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11W_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X31, 0X99 # xorw %r11w, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11W_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X31, 0X9A # xorw %r11w, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11W_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X31, 0X9F # xorw %r11w, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11W_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X31, 0X9E # xorw %r11w, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11W_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X31, 0X9D # xorw %r11w, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11W_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X31, 0X9C, 0X24 # xorw %r11w, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11W_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X31, 0X98 # xorw %r11w, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11W_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X31, 0X99 # xorw %r11w, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11W_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X31, 0X9A # xorw %r11w, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11W_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X31, 0X9B # xorw %r11w, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11W_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X31, 0X9C, 0X24 # xorw %r11w, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11W_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X31, 0X9D # xorw %r11w, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11W_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X31, 0X9E # xorw %r11w, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11W_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X31, 0X9F # xorw %r11w, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11W_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0X98 # xorw %r11w, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11W_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0X9B # xorw %r11w, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11W_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0X99 # xorw %r11w, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11W_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0X9A # xorw %r11w, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11W_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0X9F # xorw %r11w, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11W_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0X9E # xorw %r11w, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11W_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0X9D # xorw %r11w, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11W_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0X9C, 0X24 # xorw %r11w, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XOR_R12W_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X31, 0XA0 # xorw %r12w, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12W_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X31, 0XA3 # xorw %r12w, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12W_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X31, 0XA1 # xorw %r12w, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12W_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X31, 0XA2 # xorw %r12w, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12W_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X31, 0XA7 # xorw %r12w, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12W_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X31, 0XA6 # xorw %r12w, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12W_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X31, 0XA5 # xorw %r12w, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12W_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X31, 0XA4, 0X24 # xorw %r12w, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12W_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X31, 0XA0 # xorw %r12w, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12W_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X31, 0XA1 # xorw %r12w, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12W_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X31, 0XA2 # xorw %r12w, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12W_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X31, 0XA3 # xorw %r12w, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12W_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X31, 0XA4, 0X24 # xorw %r12w, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12W_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X31, 0XA5 # xorw %r12w, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12W_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X31, 0XA6 # xorw %r12w, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12W_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X31, 0XA7 # xorw %r12w, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12W_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0XA0 # xorw %r12w, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12W_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0XA3 # xorw %r12w, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12W_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0XA1 # xorw %r12w, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12W_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0XA2 # xorw %r12w, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12W_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0XA7 # xorw %r12w, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12W_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0XA6 # xorw %r12w, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12W_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0XA5 # xorw %r12w, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12W_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0XA4, 0X24 # xorw %r12w, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XOR_R13W_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X31, 0XA8 # xorw %r13w, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13W_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X31, 0XAB # xorw %r13w, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13W_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X31, 0XA9 # xorw %r13w, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13W_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X31, 0XAA # xorw %r13w, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13W_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X31, 0XAF # xorw %r13w, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13W_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X31, 0XAE # xorw %r13w, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13W_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X31, 0XAD # xorw %r13w, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13W_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X31, 0XAC, 0X24 # xorw %r13w, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13W_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X31, 0XA8 # xorw %r13w, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13W_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X31, 0XA9 # xorw %r13w, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13W_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X31, 0XAA # xorw %r13w, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13W_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X31, 0XAB # xorw %r13w, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13W_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X31, 0XAC, 0X24 # xorw %r13w, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13W_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X31, 0XAD # xorw %r13w, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13W_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X31, 0XAE # xorw %r13w, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13W_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X31, 0XAF # xorw %r13w, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13W_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0XA8 # xorw %r13w, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13W_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0XAB # xorw %r13w, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13W_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0XA9 # xorw %r13w, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13W_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0XAA # xorw %r13w, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13W_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0XAF # xorw %r13w, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13W_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0XAE # xorw %r13w, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13W_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0XAD # xorw %r13w, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13W_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0XAC, 0X24 # xorw %r13w, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XOR_R14W_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X31, 0XB0 # xorw %r14w, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14W_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X31, 0XB3 # xorw %r14w, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14W_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X31, 0XB1 # xorw %r14w, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14W_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X31, 0XB2 # xorw %r14w, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14W_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X31, 0XB7 # xorw %r14w, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14W_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X31, 0XB6 # xorw %r14w, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14W_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X31, 0XB5 # xorw %r14w, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14W_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X31, 0XB4, 0X24 # xorw %r14w, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14W_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X31, 0XB0 # xorw %r14w, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14W_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X31, 0XB1 # xorw %r14w, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14W_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X31, 0XB2 # xorw %r14w, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14W_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X31, 0XB3 # xorw %r14w, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14W_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X31, 0XB4, 0X24 # xorw %r14w, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14W_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X31, 0XB5 # xorw %r14w, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14W_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X31, 0XB6 # xorw %r14w, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14W_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X31, 0XB7 # xorw %r14w, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14W_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0XB0 # xorw %r14w, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14W_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0XB3 # xorw %r14w, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14W_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0XB1 # xorw %r14w, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14W_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0XB2 # xorw %r14w, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14W_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0XB7 # xorw %r14w, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14W_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0XB6 # xorw %r14w, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14W_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0XB5 # xorw %r14w, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14W_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0XB4, 0X24 # xorw %r14w, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XOR_R15W_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X31, 0XB8 # xorw %r15w, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15W_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X31, 0XBB # xorw %r15w, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15W_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X31, 0XB9 # xorw %r15w, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15W_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X31, 0XBA # xorw %r15w, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15W_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X31, 0XBF # xorw %r15w, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15W_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X31, 0XBE # xorw %r15w, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15W_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X31, 0XBD # xorw %r15w, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15W_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X31, 0XBC, 0X24 # xorw %r15w, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15W_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X31, 0XB8 # xorw %r15w, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15W_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X31, 0XB9 # xorw %r15w, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15W_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X31, 0XBA # xorw %r15w, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15W_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X31, 0XBB # xorw %r15w, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15W_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X31, 0XBC, 0X24 # xorw %r15w, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15W_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X31, 0XBD # xorw %r15w, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15W_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X31, 0XBE # xorw %r15w, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15W_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X31, 0XBF # xorw %r15w, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15W_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0XB8 # xorw %r15w, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15W_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0XBB # xorw %r15w, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15W_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0XB9 # xorw %r15w, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15W_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0XBA # xorw %r15w, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15W_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0XBF # xorw %r15w, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15W_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0XBE # xorw %r15w, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15W_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0XBD # xorw %r15w, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15W_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X31, 0XBC, 0X24 # xorw %r15w, " _(VALUE) "(%esp)")\
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
