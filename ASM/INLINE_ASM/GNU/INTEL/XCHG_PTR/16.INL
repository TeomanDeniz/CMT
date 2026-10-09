#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************** [v] 8-BIT MEMORY [v] ************************** */
#ifdef __SYSTEM_16_BIT__
#define XCHG_AL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X86, 0X06 # xchgb (" _(VALUE) "), %al")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_BL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X86, 0X1E # xchgb (" _(VALUE) "), %bl")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_CL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X86, 0X0E # xchgb (" _(VALUE) "), %cl")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_DL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X86, 0X16 # xchgb (" _(VALUE) "), %dl")\
	CMT_ASM(".short " _(VALUE))

#define XCHG_AL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X86, 0X06 # xchgb %al, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_BL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X86, 0X1E # xchgb %bl, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_CL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X86, 0X0E # xchgb %cl, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_DL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X86, 0X16 # xchgb %dl, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))

#define XCHG_AL_FROM_PTR_BX CMT_ASM(".byte 0X86, 0X07 # xchgb (%bx), %al")
#define XCHG_AL_FROM_PTR_BP CMT_ASM(".byte 0X86, 0X46, 0X00 # xchgb (%bp), %al")
#define XCHG_AL_FROM_PTR_SI CMT_ASM(".byte 0X86, 0X04 # xchgb (%si), %al")
#define XCHG_AL_FROM_PTR_DI CMT_ASM(".byte 0X86, 0X05 # xchgb (%di), %al")

#define XCHG_BL_FROM_PTR_BX CMT_ASM(".byte 0X86, 0X1F # xchgb (%bx), %bl")
#define XCHG_BL_FROM_PTR_BP CMT_ASM(".byte 0X86, 0X5E, 0X00 # xchgb (%bp), %bl")
#define XCHG_BL_FROM_PTR_SI CMT_ASM(".byte 0X86, 0X1C # xchgb (%si), %bl")
#define XCHG_BL_FROM_PTR_DI CMT_ASM(".byte 0X86, 0X1D # xchgb (%di), %bl")

#define XCHG_CL_FROM_PTR_BX CMT_ASM(".byte 0X86, 0X0F # xchgb (%bx), %cl")
#define XCHG_CL_FROM_PTR_BP CMT_ASM(".byte 0X86, 0X4E, 0X00 # xchgb (%bp), %cl")
#define XCHG_CL_FROM_PTR_SI CMT_ASM(".byte 0X86, 0X0C # xchgb (%si), %cl")
#define XCHG_CL_FROM_PTR_DI CMT_ASM(".byte 0X86, 0X0D # xchgb (%di), %cl")

#define XCHG_DL_FROM_PTR_BX CMT_ASM(".byte 0X86, 0X17 # xchgb (%bx), %dl")
#define XCHG_DL_FROM_PTR_BP CMT_ASM(".byte 0X86, 0X56, 0X00 # xchgb (%bp), %dl")
#define XCHG_DL_FROM_PTR_SI CMT_ASM(".byte 0X86, 0X14 # xchgb (%si), %dl")
#define XCHG_DL_FROM_PTR_DI CMT_ASM(".byte 0X86, 0X15 # xchgb (%di), %dl")

#define XCHG_AL_TO_PTR_BX CMT_ASM(".byte 0X86, 0X07 # xchgb %al, (%bx)")
#define XCHG_AL_TO_PTR_BP CMT_ASM(".byte 0X86, 0X46, 0X00 # xchgb %al, (%bp)")
#define XCHG_AL_TO_PTR_SI CMT_ASM(".byte 0X86, 0X04 # xchgb %al, (%si)")
#define XCHG_AL_TO_PTR_DI CMT_ASM(".byte 0X86, 0X05 # xchgb %al, (%di)")

#define XCHG_BL_TO_PTR_BX CMT_ASM(".byte 0X86, 0X1F # xchgb %bl, (%bx)")
#define XCHG_BL_TO_PTR_BP CMT_ASM(".byte 0X86, 0X5E, 0X00 # xchgb %bl, (%bp)")
#define XCHG_BL_TO_PTR_SI CMT_ASM(".byte 0X86, 0X1C # xchgb %bl, (%si)")
#define XCHG_BL_TO_PTR_DI CMT_ASM(".byte 0X86, 0X1D # xchgb %bl, (%di)")

#define XCHG_CL_TO_PTR_BX CMT_ASM(".byte 0X86, 0X0F # xchgb %cl, (%bx)")
#define XCHG_CL_TO_PTR_BP CMT_ASM(".byte 0X86, 0X4E, 0X00 # xchgb %cl, (%bp)")
#define XCHG_CL_TO_PTR_SI CMT_ASM(".byte 0X86, 0X0C # xchgb %cl, (%si)")
#define XCHG_CL_TO_PTR_DI CMT_ASM(".byte 0X86, 0X0D # xchgb %cl, (%di)")

#define XCHG_DL_TO_PTR_BX CMT_ASM(".byte 0X86, 0X17 # xchgb %dl, (%bx)")
#define XCHG_DL_TO_PTR_BP CMT_ASM(".byte 0X86, 0X56, 0X00 # xchgb %dl, (%bp)")
#define XCHG_DL_TO_PTR_SI CMT_ASM(".byte 0X86, 0X14 # xchgb %dl, (%si)")
#define XCHG_DL_TO_PTR_DI CMT_ASM(".byte 0X86, 0X15 # xchgb %dl, (%di)")

#define XCHG_AL_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X86, 0X87 # xchgb " _(VALUE) "(%bx), %al")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_AL_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X86, 0X86 # xchgb " _(VALUE) "(%bp), %al")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_AL_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X86, 0X84 # xchgb " _(VALUE) "(%si), %al")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_AL_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X86, 0X85 # xchgb " _(VALUE) "(%di), %al")\
	CMT_ASM(".short " _(VALUE))

#define XCHG_BL_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X86, 0X9F # xchgb " _(VALUE) "(%bx), %bl")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_BL_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X86, 0X9E # xchgb " _(VALUE) "(%bp), %bl")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_BL_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X86, 0X9C # xchgb " _(VALUE) "(%si), %bl")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_BL_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X86, 0X9D # xchgb " _(VALUE) "(%di), %bl")\
	CMT_ASM(".short " _(VALUE))

#define XCHG_CL_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X86, 0X8F # xchgb " _(VALUE) "(%bx), %cl")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_CL_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X86, 0X8E # xchgb " _(VALUE) "(%bp), %cl")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_CL_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X86, 0X8C # xchgb " _(VALUE) "(%si), %cl")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_CL_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X86, 0X8D # xchgb " _(VALUE) "(%di), %cl")\
	CMT_ASM(".short " _(VALUE))

#define XCHG_DL_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X86, 0X97 # xchgb " _(VALUE) "(%bx), %dl")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_DL_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X86, 0X96 # xchgb " _(VALUE) "(%bp), %dl")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_DL_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X86, 0X94 # xchgb " _(VALUE) "(%si), %dl")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_DL_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X86, 0X95 # xchgb " _(VALUE) "(%di), %dl")\
	CMT_ASM(".short " _(VALUE))

#define XCHG_AL_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X86, 0X87 # xchgb %al, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_AL_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X86, 0X86 # xchgb %al, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_AL_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X86, 0X84 # xchgb %al, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_AL_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X86, 0X85 # xchgb %al, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define XCHG_BL_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X86, 0X9F # xchgb %bl, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_BL_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X86, 0X9E # xchgb %bl, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_BL_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X86, 0X9C # xchgb %bl, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_BL_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X86, 0X9D # xchgb %bl, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define XCHG_CL_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X86, 0X8F # xchgb %cl, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_CL_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X86, 0X8E # xchgb %cl, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_CL_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X86, 0X8C # xchgb %cl, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_CL_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X86, 0X8D # xchgb %cl, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define XCHG_DL_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X86, 0X97 # xchgb %dl, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_DL_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X86, 0X96 # xchgb %dl, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_DL_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X86, 0X94 # xchgb %dl, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_DL_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X86, 0X95 # xchgb %dl, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))
#endif /* __SYSTEM_16_BIT__ */

#ifdef __SYSTEM_32_BIT__
#define XCHG_AL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X86, 0X05 # xchgb (" _(VALUE) "), %al")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X86, 0X1D # xchgb (" _(VALUE) "), %bl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X86, 0X0D # xchgb (" _(VALUE) "), %cl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X86, 0X15 # xchgb (" _(VALUE) "), %dl")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_AL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X86, 0X05 # xchgb %al, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X86, 0X1D # xchgb %bl, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X86, 0X0D # xchgb %cl, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X86, 0X15 # xchgb %dl, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_AL_FROM_PTR_EAX CMT_ASM(".byte 0X86, 0X00 # xchgb (%eax), %al")
#define XCHG_AL_FROM_PTR_EBX CMT_ASM(".byte 0X86, 0X03 # xchgb (%ebx), %al")
#define XCHG_AL_FROM_PTR_ECX CMT_ASM(".byte 0X86, 0X01 # xchgb (%ecx), %al")
#define XCHG_AL_FROM_PTR_EDX CMT_ASM(".byte 0X86, 0X02 # xchgb (%edx), %al")
#define XCHG_AL_FROM_PTR_EDI CMT_ASM(".byte 0X86, 0X07 # xchgb (%edi), %al")
#define XCHG_AL_FROM_PTR_ESI CMT_ASM(".byte 0X86, 0X06 # xchgb (%esi), %al")
#define XCHG_AL_FROM_PTR_EBP CMT_ASM(".byte 0X86, 0X45, 0X00 # xchgb (%ebp), %al")
#define XCHG_AL_FROM_PTR_ESP CMT_ASM(".byte 0X86, 0X04, 0X24 # xchgb (%esp), %al")
#define XCHG_AL_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X86, 0X07 # xchgb (%bx), %al")
#define XCHG_AL_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X86, 0X46, 0X00 # xchgb (%bp), %al")
#define XCHG_AL_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X86, 0X04 # xchgb (%si), %al")
#define XCHG_AL_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X86, 0X05 # xchgb (%di), %al")

#define XCHG_BL_FROM_PTR_EAX CMT_ASM(".byte 0X86, 0X18 # xchgb (%eax), %bl")
#define XCHG_BL_FROM_PTR_EBX CMT_ASM(".byte 0X86, 0X1B # xchgb (%ebx), %bl")
#define XCHG_BL_FROM_PTR_ECX CMT_ASM(".byte 0X86, 0X19 # xchgb (%ecx), %bl")
#define XCHG_BL_FROM_PTR_EDX CMT_ASM(".byte 0X86, 0X1A # xchgb (%edx), %bl")
#define XCHG_BL_FROM_PTR_EDI CMT_ASM(".byte 0X86, 0X1F # xchgb (%edi), %bl")
#define XCHG_BL_FROM_PTR_ESI CMT_ASM(".byte 0X86, 0X1E # xchgb (%esi), %bl")
#define XCHG_BL_FROM_PTR_EBP CMT_ASM(".byte 0X86, 0X5D, 0X00 # xchgb (%ebp), %bl")
#define XCHG_BL_FROM_PTR_ESP CMT_ASM(".byte 0X86, 0X1C, 0X24 # xchgb (%esp), %bl")
#define XCHG_BL_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X86, 0X1F # xchgb (%bx), %bl")
#define XCHG_BL_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X86, 0X5E, 0X00 # xchgb (%bp), %bl")
#define XCHG_BL_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X86, 0X1C # xchgb (%si), %bl")
#define XCHG_BL_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X86, 0X1D # xchgb (%di), %bl")

#define XCHG_CL_FROM_PTR_EAX CMT_ASM(".byte 0X86, 0X08 # xchgb (%eax), %cl")
#define XCHG_CL_FROM_PTR_EBX CMT_ASM(".byte 0X86, 0X0B # xchgb (%ebx), %cl")
#define XCHG_CL_FROM_PTR_ECX CMT_ASM(".byte 0X86, 0X09 # xchgb (%ecx), %cl")
#define XCHG_CL_FROM_PTR_EDX CMT_ASM(".byte 0X86, 0X0A # xchgb (%edx), %cl")
#define XCHG_CL_FROM_PTR_EDI CMT_ASM(".byte 0X86, 0X0F # xchgb (%edi), %cl")
#define XCHG_CL_FROM_PTR_ESI CMT_ASM(".byte 0X86, 0X0E # xchgb (%esi), %cl")
#define XCHG_CL_FROM_PTR_EBP CMT_ASM(".byte 0X86, 0X4D, 0X00 # xchgb (%ebp), %cl")
#define XCHG_CL_FROM_PTR_ESP CMT_ASM(".byte 0X86, 0X0C, 0X24 # xchgb (%esp), %cl")
#define XCHG_CL_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X86, 0X0F # xchgb (%bx), %cl")
#define XCHG_CL_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X86, 0X4E, 0X00 # xchgb (%bp), %cl")
#define XCHG_CL_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X86, 0X0C # xchgb (%si), %cl")
#define XCHG_CL_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X86, 0X0D # xchgb (%di), %cl")

#define XCHG_DL_FROM_PTR_EAX CMT_ASM(".byte 0X86, 0X10 # xchgb (%eax), %dl")
#define XCHG_DL_FROM_PTR_EBX CMT_ASM(".byte 0X86, 0X13 # xchgb (%ebx), %dl")
#define XCHG_DL_FROM_PTR_ECX CMT_ASM(".byte 0X86, 0X11 # xchgb (%ecx), %dl")
#define XCHG_DL_FROM_PTR_EDX CMT_ASM(".byte 0X86, 0X12 # xchgb (%edx), %dl")
#define XCHG_DL_FROM_PTR_EDI CMT_ASM(".byte 0X86, 0X17 # xchgb (%edi), %dl")
#define XCHG_DL_FROM_PTR_ESI CMT_ASM(".byte 0X86, 0X16 # xchgb (%esi), %dl")
#define XCHG_DL_FROM_PTR_EBP CMT_ASM(".byte 0X86, 0X55, 0X00 # xchgb (%ebp), %dl")
#define XCHG_DL_FROM_PTR_ESP CMT_ASM(".byte 0X86, 0X14, 0X24 # xchgb (%esp), %dl")
#define XCHG_DL_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X86, 0X17 # xchgb (%bx), %dl")
#define XCHG_DL_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X86, 0X56, 0X00 # xchgb (%bp), %dl")
#define XCHG_DL_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X86, 0X14 # xchgb (%si), %dl")
#define XCHG_DL_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X86, 0X15 # xchgb (%di), %dl")

#define XCHG_AL_TO_PTR_EAX CMT_ASM(".byte 0X86, 0X00 # xchgb %al, (%eax)")
#define XCHG_AL_TO_PTR_EBX CMT_ASM(".byte 0X86, 0X03 # xchgb %al, (%ebx)")
#define XCHG_AL_TO_PTR_ECX CMT_ASM(".byte 0X86, 0X01 # xchgb %al, (%ecx)")
#define XCHG_AL_TO_PTR_EDX CMT_ASM(".byte 0X86, 0X02 # xchgb %al, (%edx)")
#define XCHG_AL_TO_PTR_EDI CMT_ASM(".byte 0X86, 0X07 # xchgb %al, (%edi)")
#define XCHG_AL_TO_PTR_ESI CMT_ASM(".byte 0X86, 0X06 # xchgb %al, (%esi)")
#define XCHG_AL_TO_PTR_EBP CMT_ASM(".byte 0X86, 0X45, 0X00 # xchgb %al, (%ebp)")
#define XCHG_AL_TO_PTR_ESP CMT_ASM(".byte 0X86, 0X04, 0X24 # xchgb %al, (%esp)")
#define XCHG_AL_TO_PTR_BX CMT_ASM(".byte 0X67, 0X86, 0X07 # xchgb %al, (%bx)")
#define XCHG_AL_TO_PTR_BP CMT_ASM(".byte 0X67, 0X86, 0X46, 0X00 # xchgb %al, (%bp)")
#define XCHG_AL_TO_PTR_SI CMT_ASM(".byte 0X67, 0X86, 0X04 # xchgb %al, (%si)")
#define XCHG_AL_TO_PTR_DI CMT_ASM(".byte 0X67, 0X86, 0X05 # xchgb %al, (%di)")

#define XCHG_BL_TO_PTR_EAX CMT_ASM(".byte 0X86, 0X18 # xchgb %bl, (%eax)")
#define XCHG_BL_TO_PTR_EBX CMT_ASM(".byte 0X86, 0X1B # xchgb %bl, (%ebx)")
#define XCHG_BL_TO_PTR_ECX CMT_ASM(".byte 0X86, 0X19 # xchgb %bl, (%ecx)")
#define XCHG_BL_TO_PTR_EDX CMT_ASM(".byte 0X86, 0X1A # xchgb %bl, (%edx)")
#define XCHG_BL_TO_PTR_EDI CMT_ASM(".byte 0X86, 0X1F # xchgb %bl, (%edi)")
#define XCHG_BL_TO_PTR_ESI CMT_ASM(".byte 0X86, 0X1E # xchgb %bl, (%esi)")
#define XCHG_BL_TO_PTR_EBP CMT_ASM(".byte 0X86, 0X5D, 0X00 # xchgb %bl, (%ebp)")
#define XCHG_BL_TO_PTR_ESP CMT_ASM(".byte 0X86, 0X1C, 0X24 # xchgb %bl, (%esp)")
#define XCHG_BL_TO_PTR_BX CMT_ASM(".byte 0X67, 0X86, 0X1F # xchgb %bl, (%bx)")
#define XCHG_BL_TO_PTR_BP CMT_ASM(".byte 0X67, 0X86, 0X5E, 0X00 # xchgb %bl, (%bp)")
#define XCHG_BL_TO_PTR_SI CMT_ASM(".byte 0X67, 0X86, 0X1C # xchgb %bl, (%si)")
#define XCHG_BL_TO_PTR_DI CMT_ASM(".byte 0X67, 0X86, 0X1D # xchgb %bl, (%di)")

#define XCHG_CL_TO_PTR_EAX CMT_ASM(".byte 0X86, 0X08 # xchgb %cl, (%eax)")
#define XCHG_CL_TO_PTR_EBX CMT_ASM(".byte 0X86, 0X0B # xchgb %cl, (%ebx)")
#define XCHG_CL_TO_PTR_ECX CMT_ASM(".byte 0X86, 0X09 # xchgb %cl, (%ecx)")
#define XCHG_CL_TO_PTR_EDX CMT_ASM(".byte 0X86, 0X0A # xchgb %cl, (%edx)")
#define XCHG_CL_TO_PTR_EDI CMT_ASM(".byte 0X86, 0X0F # xchgb %cl, (%edi)")
#define XCHG_CL_TO_PTR_ESI CMT_ASM(".byte 0X86, 0X0E # xchgb %cl, (%esi)")
#define XCHG_CL_TO_PTR_EBP CMT_ASM(".byte 0X86, 0X4D, 0X00 # xchgb %cl, (%ebp)")
#define XCHG_CL_TO_PTR_ESP CMT_ASM(".byte 0X86, 0X0C, 0X24 # xchgb %cl, (%esp)")
#define XCHG_CL_TO_PTR_BX CMT_ASM(".byte 0X67, 0X86, 0X0F # xchgb %cl, (%bx)")
#define XCHG_CL_TO_PTR_BP CMT_ASM(".byte 0X67, 0X86, 0X4E, 0X00 # xchgb %cl, (%bp)")
#define XCHG_CL_TO_PTR_SI CMT_ASM(".byte 0X67, 0X86, 0X0C # xchgb %cl, (%si)")
#define XCHG_CL_TO_PTR_DI CMT_ASM(".byte 0X67, 0X86, 0X0D # xchgb %cl, (%di)")

#define XCHG_DL_TO_PTR_EAX CMT_ASM(".byte 0X86, 0X10 # xchgb %dl, (%eax)")
#define XCHG_DL_TO_PTR_EBX CMT_ASM(".byte 0X86, 0X13 # xchgb %dl, (%ebx)")
#define XCHG_DL_TO_PTR_ECX CMT_ASM(".byte 0X86, 0X11 # xchgb %dl, (%ecx)")
#define XCHG_DL_TO_PTR_EDX CMT_ASM(".byte 0X86, 0X12 # xchgb %dl, (%edx)")
#define XCHG_DL_TO_PTR_EDI CMT_ASM(".byte 0X86, 0X17 # xchgb %dl, (%edi)")
#define XCHG_DL_TO_PTR_ESI CMT_ASM(".byte 0X86, 0X16 # xchgb %dl, (%esi)")
#define XCHG_DL_TO_PTR_EBP CMT_ASM(".byte 0X86, 0X55, 0X00 # xchgb %dl, (%ebp)")
#define XCHG_DL_TO_PTR_ESP CMT_ASM(".byte 0X86, 0X14, 0X24 # xchgb %dl, (%esp)")
#define XCHG_DL_TO_PTR_BX CMT_ASM(".byte 0X67, 0X86, 0X17 # xchgb %dl, (%bx)")
#define XCHG_DL_TO_PTR_BP CMT_ASM(".byte 0X67, 0X86, 0X56, 0X00 # xchgb %dl, (%bp)")
#define XCHG_DL_TO_PTR_SI CMT_ASM(".byte 0X67, 0X86, 0X14 # xchgb %dl, (%si)")
#define XCHG_DL_TO_PTR_DI CMT_ASM(".byte 0X67, 0X86, 0X15 # xchgb %dl, (%di)")

#define XCHG_AL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X86, 0X80 # xchgb " _(VALUE) "(%eax), %al")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X86, 0X83 # xchgb " _(VALUE) "(%ebx), %al")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X86, 0X81 # xchgb " _(VALUE) "(%ecx), %al")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X86, 0X82 # xchgb " _(VALUE) "(%edx), %al")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X86, 0X87 # xchgb " _(VALUE) "(%edi), %al")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X86, 0X86 # xchgb " _(VALUE) "(%esi), %al")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X86, 0X85 # xchgb " _(VALUE) "(%ebp), %al")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X86, 0X84, 0X24 # xchgb " _(VALUE) "(%esp), %al")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AL_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X86, 0X87 # xchgb " _(VALUE) "(%bx), %al")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_AL_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X86, 0X86 # xchgb " _(VALUE) "(%bp), %al")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_AL_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X86, 0X84 # xchgb " _(VALUE) "(%si), %al")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_AL_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X86, 0X85 # xchgb " _(VALUE) "(%di), %al")\
	CMT_ASM(".short " _(VALUE))

#define XCHG_BL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X86, 0X98 # xchgb " _(VALUE) "(%eax), %bl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X86, 0X9B # xchgb " _(VALUE) "(%ebx), %bl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X86, 0X99 # xchgb " _(VALUE) "(%ecx), %bl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X86, 0X9A # xchgb " _(VALUE) "(%edx), %bl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X86, 0X9F # xchgb " _(VALUE) "(%edi), %bl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X86, 0X9E # xchgb " _(VALUE) "(%esi), %bl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X86, 0X9D # xchgb " _(VALUE) "(%ebp), %bl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X86, 0X9C, 0X24 # xchgb " _(VALUE) "(%esp), %bl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BL_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X86, 0X9F # xchgb " _(VALUE) "(%bx), %bl")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_BL_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X86, 0X9E # xchgb " _(VALUE) "(%bp), %bl")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_BL_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X86, 0X9C # xchgb " _(VALUE) "(%si), %bl")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_BL_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X86, 0X9D # xchgb " _(VALUE) "(%di), %bl")\
	CMT_ASM(".short " _(VALUE))

#define XCHG_CL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X86, 0X88 # xchgb " _(VALUE) "(%eax), %cl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X86, 0X8B # xchgb " _(VALUE) "(%ebx), %cl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X86, 0X89 # xchgb " _(VALUE) "(%ecx), %cl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X86, 0X8A # xchgb " _(VALUE) "(%edx), %cl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X86, 0X8F # xchgb " _(VALUE) "(%edi), %cl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X86, 0X8E # xchgb " _(VALUE) "(%esi), %cl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X86, 0X8D # xchgb " _(VALUE) "(%ebp), %cl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X86, 0X8C, 0X24 # xchgb " _(VALUE) "(%esp), %cl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CL_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X86, 0X8F # xchgb " _(VALUE) "(%bx), %cl")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_CL_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X86, 0X8E # xchgb " _(VALUE) "(%bp), %cl")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_CL_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X86, 0X8C # xchgb " _(VALUE) "(%si), %cl")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_CL_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X86, 0X8D # xchgb " _(VALUE) "(%di), %cl")\
	CMT_ASM(".short " _(VALUE))

#define XCHG_DL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X86, 0X90 # xchgb " _(VALUE) "(%eax), %dl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X86, 0X93 # xchgb " _(VALUE) "(%ebx), %dl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X86, 0X91 # xchgb " _(VALUE) "(%ecx), %dl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X86, 0X92 # xchgb " _(VALUE) "(%edx), %dl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X86, 0X97 # xchgb " _(VALUE) "(%edi), %dl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X86, 0X96 # xchgb " _(VALUE) "(%esi), %dl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X86, 0X95 # xchgb " _(VALUE) "(%ebp), %dl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X86, 0X94, 0X24 # xchgb " _(VALUE) "(%esp), %dl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DL_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X86, 0X97 # xchgb " _(VALUE) "(%bx), %dl")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_DL_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X86, 0X96 # xchgb " _(VALUE) "(%bp), %dl")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_DL_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X86, 0X94 # xchgb " _(VALUE) "(%si), %dl")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_DL_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X86, 0X95 # xchgb " _(VALUE) "(%di), %dl")\
	CMT_ASM(".short " _(VALUE))

#define XCHG_AL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X86, 0X80 # xchgb %al, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X86, 0X83 # xchgb %al, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X86, 0X81 # xchgb %al, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X86, 0X82 # xchgb %al, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X86, 0X87 # xchgb %al, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X86, 0X86 # xchgb %al, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X86, 0X85 # xchgb %al, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X86, 0X84, 0X24 # xchgb %al, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AL_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X86, 0X87 # xchgb %al, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_AL_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X86, 0X86 # xchgb %al, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_AL_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X86, 0X84 # xchgb %al, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_AL_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X86, 0X85 # xchgb %al, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define XCHG_BL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X86, 0X98 # xchgb %bl, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X86, 0X9B # xchgb %bl, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X86, 0X99 # xchgb %bl, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X86, 0X9A # xchgb %bl, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X86, 0X9F # xchgb %bl, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X86, 0X9E # xchgb %bl, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X86, 0X9D # xchgb %bl, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X86, 0X9C, 0X24 # xchgb %bl, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BL_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X86, 0X9F # xchgb %bl, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_BL_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X86, 0X9E # xchgb %bl, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_BL_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X86, 0X9C # xchgb %bl, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_BL_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X86, 0X9D # xchgb %bl, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define XCHG_CL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X86, 0X88 # xchgb %cl, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X86, 0X8B # xchgb %cl, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X86, 0X89 # xchgb %cl, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X86, 0X8A # xchgb %cl, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X86, 0X8F # xchgb %cl, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X86, 0X8E # xchgb %cl, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X86, 0X8D # xchgb %cl, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X86, 0X8C, 0X24 # xchgb %cl, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CL_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X86, 0X8F # xchgb %cl, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_CL_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X86, 0X8E # xchgb %cl, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_CL_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X86, 0X8C # xchgb %cl, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_CL_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X86, 0X8D # xchgb %cl, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define XCHG_DL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X86, 0X90 # xchgb %dl, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X86, 0X93 # xchgb %dl, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X86, 0X91 # xchgb %dl, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X86, 0X92 # xchgb %dl, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X86, 0X97 # xchgb %dl, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X86, 0X96 # xchgb %dl, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X86, 0X95 # xchgb %dl, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X86, 0X94, 0X24 # xchgb %dl, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DL_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X86, 0X97 # xchgb %dl, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_DL_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X86, 0X96 # xchgb %dl, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_DL_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X86, 0X94 # xchgb %dl, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_DL_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X86, 0X95 # xchgb %dl, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define XCHG_AL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X86, 0X04, 0X25 # xchgb (" _(VALUE) "), %al")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X86, 0X1C, 0X25 # xchgb (" _(VALUE) "), %bl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X86, 0X0C, 0X25 # xchgb (" _(VALUE) "), %cl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X86, 0X14, 0X25 # xchgb (" _(VALUE) "), %dl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DIL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X40, 0X86, 0X3C, 0X25 # xchgb (" _(VALUE) "), %dil")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SIL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X40, 0X86, 0X34, 0X25 # xchgb (" _(VALUE) "), %sil")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BPL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X40, 0X86, 0X2C, 0X25 # xchgb (" _(VALUE) "), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SPL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X40, 0X86, 0X24, 0X25 # xchgb (" _(VALUE) "), %spl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8B_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0X04, 0X25 # xchgb (" _(VALUE) "), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9B_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0X0C, 0X25 # xchgb (" _(VALUE) "), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10B_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0X14, 0X25 # xchgb (" _(VALUE) "), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11B_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0X1C, 0X25 # xchgb (" _(VALUE) "), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12B_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0X24, 0X25 # xchgb (" _(VALUE) "), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13B_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0X2C, 0X25 # xchgb (" _(VALUE) "), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14B_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0X34, 0X25 # xchgb (" _(VALUE) "), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15B_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0X3C, 0X25 # xchgb (" _(VALUE) "), %r15b")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_AL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X86, 0X04, 0X25 # xchgb %al, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X86, 0X1C, 0X25 # xchgb %bl, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X86, 0X0C, 0X25 # xchgb %cl, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X86, 0X14, 0X25 # xchgb %dl, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DIL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X40, 0X86, 0X3C, 0X25 # xchgb %dil, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SIL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X40, 0X86, 0X34, 0X25 # xchgb %sil, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BPL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X40, 0X86, 0X2C, 0X25 # xchgb %bpl, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SPL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X40, 0X86, 0X24, 0X25 # xchgb %spl, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8B_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0X04, 0X25 # xchgb %r8b, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9B_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0X0C, 0X25 # xchgb %r9b, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10B_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0X14, 0X25 # xchgb %r10b, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11B_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0X1C, 0X25 # xchgb %r11b, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12B_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0X24, 0X25 # xchgb %r12b, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13B_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0X2C, 0X25 # xchgb %r13b, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14B_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0X34, 0X25 # xchgb %r14b, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15B_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0X3C, 0X25 # xchgb %r15b, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_AL_FROM_PTR_RAX CMT_ASM(".byte 0X86, 0X00 # xchgb (%rax), %al")
#define XCHG_AL_FROM_PTR_RBX CMT_ASM(".byte 0X86, 0X03 # xchgb (%rbx), %al")
#define XCHG_AL_FROM_PTR_RCX CMT_ASM(".byte 0X86, 0X01 # xchgb (%rcx), %al")
#define XCHG_AL_FROM_PTR_RDX CMT_ASM(".byte 0X86, 0X02 # xchgb (%rdx), %al")
#define XCHG_AL_FROM_PTR_RDI CMT_ASM(".byte 0X86, 0X07 # xchgb (%rdi), %al")
#define XCHG_AL_FROM_PTR_RSI CMT_ASM(".byte 0X86, 0X06 # xchgb (%rsi), %al")
#define XCHG_AL_FROM_PTR_RBP CMT_ASM(".byte 0X86, 0X45, 0X00 # xchgb (%rbp), %al")
#define XCHG_AL_FROM_PTR_RSP CMT_ASM(".byte 0X86, 0X04, 0X24 # xchgb (%rsp), %al")
#define XCHG_AL_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X86, 0X00 # xchgb (%r8), %al")
#define XCHG_AL_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X86, 0X01 # xchgb (%r9), %al")
#define XCHG_AL_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X86, 0X02 # xchgb (%r10), %al")
#define XCHG_AL_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X86, 0X03 # xchgb (%r11), %al")
#define XCHG_AL_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X86, 0X04, 0X24 # xchgb (%r12), %al")
#define XCHG_AL_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X86, 0X45, 0X00 # xchgb (%r13), %al")
#define XCHG_AL_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X86, 0X06 # xchgb (%r14), %al")
#define XCHG_AL_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X86, 0X07 # xchgb (%r15), %al")
#define XCHG_AL_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X86, 0X00 # xchgb (%eax), %al")
#define XCHG_AL_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X86, 0X03 # xchgb (%ebx), %al")
#define XCHG_AL_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X86, 0X01 # xchgb (%ecx), %al")
#define XCHG_AL_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X86, 0X02 # xchgb (%edx), %al")
#define XCHG_AL_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X86, 0X07 # xchgb (%edi), %al")
#define XCHG_AL_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X86, 0X06 # xchgb (%esi), %al")
#define XCHG_AL_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X86, 0X45, 0X00 # xchgb (%ebp), %al")
#define XCHG_AL_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X86, 0X04, 0X24 # xchgb (%esp), %al")

#define XCHG_BL_FROM_PTR_RAX CMT_ASM(".byte 0X86, 0X18 # xchgb (%rax), %bl")
#define XCHG_BL_FROM_PTR_RBX CMT_ASM(".byte 0X86, 0X1B # xchgb (%rbx), %bl")
#define XCHG_BL_FROM_PTR_RCX CMT_ASM(".byte 0X86, 0X19 # xchgb (%rcx), %bl")
#define XCHG_BL_FROM_PTR_RDX CMT_ASM(".byte 0X86, 0X1A # xchgb (%rdx), %bl")
#define XCHG_BL_FROM_PTR_RDI CMT_ASM(".byte 0X86, 0X1F # xchgb (%rdi), %bl")
#define XCHG_BL_FROM_PTR_RSI CMT_ASM(".byte 0X86, 0X1E # xchgb (%rsi), %bl")
#define XCHG_BL_FROM_PTR_RBP CMT_ASM(".byte 0X86, 0X5D, 0X00 # xchgb (%rbp), %bl")
#define XCHG_BL_FROM_PTR_RSP CMT_ASM(".byte 0X86, 0X1C, 0X24 # xchgb (%rsp), %bl")
#define XCHG_BL_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X86, 0X18 # xchgb (%r8), %bl")
#define XCHG_BL_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X86, 0X19 # xchgb (%r9), %bl")
#define XCHG_BL_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X86, 0X1A # xchgb (%r10), %bl")
#define XCHG_BL_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X86, 0X1B # xchgb (%r11), %bl")
#define XCHG_BL_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X86, 0X1C, 0X24 # xchgb (%r12), %bl")
#define XCHG_BL_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X86, 0X5D, 0X00 # xchgb (%r13), %bl")
#define XCHG_BL_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X86, 0X1E # xchgb (%r14), %bl")
#define XCHG_BL_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X86, 0X1F # xchgb (%r15), %bl")
#define XCHG_BL_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X86, 0X18 # xchgb (%eax), %bl")
#define XCHG_BL_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X86, 0X1B # xchgb (%ebx), %bl")
#define XCHG_BL_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X86, 0X19 # xchgb (%ecx), %bl")
#define XCHG_BL_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X86, 0X1A # xchgb (%edx), %bl")
#define XCHG_BL_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X86, 0X1F # xchgb (%edi), %bl")
#define XCHG_BL_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X86, 0X1E # xchgb (%esi), %bl")
#define XCHG_BL_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X86, 0X5D, 0X00 # xchgb (%ebp), %bl")
#define XCHG_BL_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X86, 0X1C, 0X24 # xchgb (%esp), %bl")

#define XCHG_CL_FROM_PTR_RAX CMT_ASM(".byte 0X86, 0X08 # xchgb (%rax), %cl")
#define XCHG_CL_FROM_PTR_RBX CMT_ASM(".byte 0X86, 0X0B # xchgb (%rbx), %cl")
#define XCHG_CL_FROM_PTR_RCX CMT_ASM(".byte 0X86, 0X09 # xchgb (%rcx), %cl")
#define XCHG_CL_FROM_PTR_RDX CMT_ASM(".byte 0X86, 0X0A # xchgb (%rdx), %cl")
#define XCHG_CL_FROM_PTR_RDI CMT_ASM(".byte 0X86, 0X0F # xchgb (%rdi), %cl")
#define XCHG_CL_FROM_PTR_RSI CMT_ASM(".byte 0X86, 0X0E # xchgb (%rsi), %cl")
#define XCHG_CL_FROM_PTR_RBP CMT_ASM(".byte 0X86, 0X4D, 0X00 # xchgb (%rbp), %cl")
#define XCHG_CL_FROM_PTR_RSP CMT_ASM(".byte 0X86, 0X0C, 0X24 # xchgb (%rsp), %cl")
#define XCHG_CL_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X86, 0X08 # xchgb (%r8), %cl")
#define XCHG_CL_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X86, 0X09 # xchgb (%r9), %cl")
#define XCHG_CL_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X86, 0X0A # xchgb (%r10), %cl")
#define XCHG_CL_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X86, 0X0B # xchgb (%r11), %cl")
#define XCHG_CL_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X86, 0X0C, 0X24 # xchgb (%r12), %cl")
#define XCHG_CL_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X86, 0X4D, 0X00 # xchgb (%r13), %cl")
#define XCHG_CL_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X86, 0X0E # xchgb (%r14), %cl")
#define XCHG_CL_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X86, 0X0F # xchgb (%r15), %cl")
#define XCHG_CL_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X86, 0X08 # xchgb (%eax), %cl")
#define XCHG_CL_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X86, 0X0B # xchgb (%ebx), %cl")
#define XCHG_CL_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X86, 0X09 # xchgb (%ecx), %cl")
#define XCHG_CL_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X86, 0X0A # xchgb (%edx), %cl")
#define XCHG_CL_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X86, 0X0F # xchgb (%edi), %cl")
#define XCHG_CL_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X86, 0X0E # xchgb (%esi), %cl")
#define XCHG_CL_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X86, 0X4D, 0X00 # xchgb (%ebp), %cl")
#define XCHG_CL_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X86, 0X0C, 0X24 # xchgb (%esp), %cl")

#define XCHG_DL_FROM_PTR_RAX CMT_ASM(".byte 0X86, 0X10 # xchgb (%rax), %dl")
#define XCHG_DL_FROM_PTR_RBX CMT_ASM(".byte 0X86, 0X13 # xchgb (%rbx), %dl")
#define XCHG_DL_FROM_PTR_RCX CMT_ASM(".byte 0X86, 0X11 # xchgb (%rcx), %dl")
#define XCHG_DL_FROM_PTR_RDX CMT_ASM(".byte 0X86, 0X12 # xchgb (%rdx), %dl")
#define XCHG_DL_FROM_PTR_RDI CMT_ASM(".byte 0X86, 0X17 # xchgb (%rdi), %dl")
#define XCHG_DL_FROM_PTR_RSI CMT_ASM(".byte 0X86, 0X16 # xchgb (%rsi), %dl")
#define XCHG_DL_FROM_PTR_RBP CMT_ASM(".byte 0X86, 0X55, 0X00 # xchgb (%rbp), %dl")
#define XCHG_DL_FROM_PTR_RSP CMT_ASM(".byte 0X86, 0X14, 0X24 # xchgb (%rsp), %dl")
#define XCHG_DL_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X86, 0X10 # xchgb (%r8), %dl")
#define XCHG_DL_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X86, 0X11 # xchgb (%r9), %dl")
#define XCHG_DL_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X86, 0X12 # xchgb (%r10), %dl")
#define XCHG_DL_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X86, 0X13 # xchgb (%r11), %dl")
#define XCHG_DL_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X86, 0X14, 0X24 # xchgb (%r12), %dl")
#define XCHG_DL_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X86, 0X55, 0X00 # xchgb (%r13), %dl")
#define XCHG_DL_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X86, 0X16 # xchgb (%r14), %dl")
#define XCHG_DL_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X86, 0X17 # xchgb (%r15), %dl")
#define XCHG_DL_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X86, 0X10 # xchgb (%eax), %dl")
#define XCHG_DL_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X86, 0X13 # xchgb (%ebx), %dl")
#define XCHG_DL_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X86, 0X11 # xchgb (%ecx), %dl")
#define XCHG_DL_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X86, 0X12 # xchgb (%edx), %dl")
#define XCHG_DL_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X86, 0X17 # xchgb (%edi), %dl")
#define XCHG_DL_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X86, 0X16 # xchgb (%esi), %dl")
#define XCHG_DL_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X86, 0X55, 0X00 # xchgb (%ebp), %dl")
#define XCHG_DL_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X86, 0X14, 0X24 # xchgb (%esp), %dl")

#define XCHG_DIL_FROM_PTR_RAX CMT_ASM(".byte 0X40, 0X86, 0X38 # xchgb (%rax), %dil")
#define XCHG_DIL_FROM_PTR_RBX CMT_ASM(".byte 0X40, 0X86, 0X3B # xchgb (%rbx), %dil")
#define XCHG_DIL_FROM_PTR_RCX CMT_ASM(".byte 0X40, 0X86, 0X39 # xchgb (%rcx), %dil")
#define XCHG_DIL_FROM_PTR_RDX CMT_ASM(".byte 0X40, 0X86, 0X3A # xchgb (%rdx), %dil")
#define XCHG_DIL_FROM_PTR_RDI CMT_ASM(".byte 0X40, 0X86, 0X3F # xchgb (%rdi), %dil")
#define XCHG_DIL_FROM_PTR_RSI CMT_ASM(".byte 0X40, 0X86, 0X3E # xchgb (%rsi), %dil")
#define XCHG_DIL_FROM_PTR_RBP CMT_ASM(".byte 0X40, 0X86, 0X7D, 0X00 # xchgb (%rbp), %dil")
#define XCHG_DIL_FROM_PTR_RSP CMT_ASM(".byte 0X40, 0X86, 0X3C, 0X24 # xchgb (%rsp), %dil")
#define XCHG_DIL_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X86, 0X38 # xchgb (%r8), %dil")
#define XCHG_DIL_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X86, 0X39 # xchgb (%r9), %dil")
#define XCHG_DIL_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X86, 0X3A # xchgb (%r10), %dil")
#define XCHG_DIL_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X86, 0X3B # xchgb (%r11), %dil")
#define XCHG_DIL_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X86, 0X3C, 0X24 # xchgb (%r12), %dil")
#define XCHG_DIL_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X86, 0X7D, 0X00 # xchgb (%r13), %dil")
#define XCHG_DIL_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X86, 0X3E # xchgb (%r14), %dil")
#define XCHG_DIL_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X86, 0X3F # xchgb (%r15), %dil")
#define XCHG_DIL_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X40, 0X86, 0X38 # xchgb (%eax), %dil")
#define XCHG_DIL_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X40, 0X86, 0X3B # xchgb (%ebx), %dil")
#define XCHG_DIL_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X40, 0X86, 0X39 # xchgb (%ecx), %dil")
#define XCHG_DIL_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X40, 0X86, 0X3A # xchgb (%edx), %dil")
#define XCHG_DIL_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X40, 0X86, 0X3F # xchgb (%edi), %dil")
#define XCHG_DIL_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X40, 0X86, 0X3E # xchgb (%esi), %dil")
#define XCHG_DIL_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X40, 0X86, 0X7D, 0X00 # xchgb (%ebp), %dil")
#define XCHG_DIL_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X40, 0X86, 0X3C, 0X24 # xchgb (%esp), %dil")

#define XCHG_SIL_FROM_PTR_RAX CMT_ASM(".byte 0X40, 0X86, 0X30 # xchgb (%rax), %sil")
#define XCHG_SIL_FROM_PTR_RBX CMT_ASM(".byte 0X40, 0X86, 0X33 # xchgb (%rbx), %sil")
#define XCHG_SIL_FROM_PTR_RCX CMT_ASM(".byte 0X40, 0X86, 0X31 # xchgb (%rcx), %sil")
#define XCHG_SIL_FROM_PTR_RDX CMT_ASM(".byte 0X40, 0X86, 0X32 # xchgb (%rdx), %sil")
#define XCHG_SIL_FROM_PTR_RDI CMT_ASM(".byte 0X40, 0X86, 0X37 # xchgb (%rdi), %sil")
#define XCHG_SIL_FROM_PTR_RSI CMT_ASM(".byte 0X40, 0X86, 0X36 # xchgb (%rsi), %sil")
#define XCHG_SIL_FROM_PTR_RBP CMT_ASM(".byte 0X40, 0X86, 0X75, 0X00 # xchgb (%rbp), %sil")
#define XCHG_SIL_FROM_PTR_RSP CMT_ASM(".byte 0X40, 0X86, 0X34, 0X24 # xchgb (%rsp), %sil")
#define XCHG_SIL_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X86, 0X30 # xchgb (%r8), %sil")
#define XCHG_SIL_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X86, 0X31 # xchgb (%r9), %sil")
#define XCHG_SIL_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X86, 0X32 # xchgb (%r10), %sil")
#define XCHG_SIL_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X86, 0X33 # xchgb (%r11), %sil")
#define XCHG_SIL_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X86, 0X34, 0X24 # xchgb (%r12), %sil")
#define XCHG_SIL_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X86, 0X75, 0X00 # xchgb (%r13), %sil")
#define XCHG_SIL_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X86, 0X36 # xchgb (%r14), %sil")
#define XCHG_SIL_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X86, 0X37 # xchgb (%r15), %sil")
#define XCHG_SIL_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X40, 0X86, 0X30 # xchgb (%eax), %sil")
#define XCHG_SIL_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X40, 0X86, 0X33 # xchgb (%ebx), %sil")
#define XCHG_SIL_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X40, 0X86, 0X31 # xchgb (%ecx), %sil")
#define XCHG_SIL_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X40, 0X86, 0X32 # xchgb (%edx), %sil")
#define XCHG_SIL_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X40, 0X86, 0X37 # xchgb (%edi), %sil")
#define XCHG_SIL_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X40, 0X86, 0X36 # xchgb (%esi), %sil")
#define XCHG_SIL_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X40, 0X86, 0X75, 0X00 # xchgb (%ebp), %sil")
#define XCHG_SIL_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X40, 0X86, 0X34, 0X24 # xchgb (%esp), %sil")

#define XCHG_BPL_FROM_PTR_RAX CMT_ASM(".byte 0X40, 0X86, 0X28 # xchgb (%rax), %bpl")
#define XCHG_BPL_FROM_PTR_RBX CMT_ASM(".byte 0X40, 0X86, 0X2B # xchgb (%rbx), %bpl")
#define XCHG_BPL_FROM_PTR_RCX CMT_ASM(".byte 0X40, 0X86, 0X29 # xchgb (%rcx), %bpl")
#define XCHG_BPL_FROM_PTR_RDX CMT_ASM(".byte 0X40, 0X86, 0X2A # xchgb (%rdx), %bpl")
#define XCHG_BPL_FROM_PTR_RDI CMT_ASM(".byte 0X40, 0X86, 0X2F # xchgb (%rdi), %bpl")
#define XCHG_BPL_FROM_PTR_RSI CMT_ASM(".byte 0X40, 0X86, 0X2E # xchgb (%rsi), %bpl")
#define XCHG_BPL_FROM_PTR_RBP CMT_ASM(".byte 0X40, 0X86, 0X6D, 0X00 # xchgb (%rbp), %bpl")
#define XCHG_BPL_FROM_PTR_RSP CMT_ASM(".byte 0X40, 0X86, 0X2C, 0X24 # xchgb (%rsp), %bpl")
#define XCHG_BPL_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X86, 0X28 # xchgb (%r8), %bpl")
#define XCHG_BPL_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X86, 0X29 # xchgb (%r9), %bpl")
#define XCHG_BPL_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X86, 0X2A # xchgb (%r10), %bpl")
#define XCHG_BPL_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X86, 0X2B # xchgb (%r11), %bpl")
#define XCHG_BPL_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X86, 0X2C, 0X24 # xchgb (%r12), %bpl")
#define XCHG_BPL_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X86, 0X6D, 0X00 # xchgb (%r13), %bpl")
#define XCHG_BPL_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X86, 0X2E # xchgb (%r14), %bpl")
#define XCHG_BPL_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X86, 0X2F # xchgb (%r15), %bpl")
#define XCHG_BPL_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X40, 0X86, 0X28 # xchgb (%eax), %bpl")
#define XCHG_BPL_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X40, 0X86, 0X2B # xchgb (%ebx), %bpl")
#define XCHG_BPL_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X40, 0X86, 0X29 # xchgb (%ecx), %bpl")
#define XCHG_BPL_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X40, 0X86, 0X2A # xchgb (%edx), %bpl")
#define XCHG_BPL_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X40, 0X86, 0X2F # xchgb (%edi), %bpl")
#define XCHG_BPL_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X40, 0X86, 0X2E # xchgb (%esi), %bpl")
#define XCHG_BPL_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X40, 0X86, 0X6D, 0X00 # xchgb (%ebp), %bpl")
#define XCHG_BPL_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X40, 0X86, 0X2C, 0X24 # xchgb (%esp), %bpl")

#define XCHG_SPL_FROM_PTR_RAX CMT_ASM(".byte 0X40, 0X86, 0X20 # xchgb (%rax), %spl")
#define XCHG_SPL_FROM_PTR_RBX CMT_ASM(".byte 0X40, 0X86, 0X23 # xchgb (%rbx), %spl")
#define XCHG_SPL_FROM_PTR_RCX CMT_ASM(".byte 0X40, 0X86, 0X21 # xchgb (%rcx), %spl")
#define XCHG_SPL_FROM_PTR_RDX CMT_ASM(".byte 0X40, 0X86, 0X22 # xchgb (%rdx), %spl")
#define XCHG_SPL_FROM_PTR_RDI CMT_ASM(".byte 0X40, 0X86, 0X27 # xchgb (%rdi), %spl")
#define XCHG_SPL_FROM_PTR_RSI CMT_ASM(".byte 0X40, 0X86, 0X26 # xchgb (%rsi), %spl")
#define XCHG_SPL_FROM_PTR_RBP CMT_ASM(".byte 0X40, 0X86, 0X65, 0X00 # xchgb (%rbp), %spl")
#define XCHG_SPL_FROM_PTR_RSP CMT_ASM(".byte 0X40, 0X86, 0X24, 0X24 # xchgb (%rsp), %spl")
#define XCHG_SPL_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X86, 0X20 # xchgb (%r8), %spl")
#define XCHG_SPL_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X86, 0X21 # xchgb (%r9), %spl")
#define XCHG_SPL_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X86, 0X22 # xchgb (%r10), %spl")
#define XCHG_SPL_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X86, 0X23 # xchgb (%r11), %spl")
#define XCHG_SPL_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X86, 0X24, 0X24 # xchgb (%r12), %spl")
#define XCHG_SPL_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X86, 0X65, 0X00 # xchgb (%r13), %spl")
#define XCHG_SPL_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X86, 0X26 # xchgb (%r14), %spl")
#define XCHG_SPL_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X86, 0X27 # xchgb (%r15), %spl")
#define XCHG_SPL_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X40, 0X86, 0X20 # xchgb (%eax), %spl")
#define XCHG_SPL_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X40, 0X86, 0X23 # xchgb (%ebx), %spl")
#define XCHG_SPL_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X40, 0X86, 0X21 # xchgb (%ecx), %spl")
#define XCHG_SPL_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X40, 0X86, 0X22 # xchgb (%edx), %spl")
#define XCHG_SPL_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X40, 0X86, 0X27 # xchgb (%edi), %spl")
#define XCHG_SPL_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X40, 0X86, 0X26 # xchgb (%esi), %spl")
#define XCHG_SPL_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X40, 0X86, 0X65, 0X00 # xchgb (%ebp), %spl")
#define XCHG_SPL_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X40, 0X86, 0X24, 0X24 # xchgb (%esp), %spl")

#define XCHG_R8B_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X86, 0X00 # xchgb (%rax), %r8b")
#define XCHG_R8B_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X86, 0X03 # xchgb (%rbx), %r8b")
#define XCHG_R8B_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X86, 0X01 # xchgb (%rcx), %r8b")
#define XCHG_R8B_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X86, 0X02 # xchgb (%rdx), %r8b")
#define XCHG_R8B_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X86, 0X07 # xchgb (%rdi), %r8b")
#define XCHG_R8B_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X86, 0X06 # xchgb (%rsi), %r8b")
#define XCHG_R8B_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X86, 0X45, 0X00 # xchgb (%rbp), %r8b")
#define XCHG_R8B_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X86, 0X04, 0X24 # xchgb (%rsp), %r8b")
#define XCHG_R8B_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X86, 0X00 # xchgb (%r8), %r8b")
#define XCHG_R8B_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X86, 0X01 # xchgb (%r9), %r8b")
#define XCHG_R8B_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X86, 0X02 # xchgb (%r10), %r8b")
#define XCHG_R8B_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X86, 0X03 # xchgb (%r11), %r8b")
#define XCHG_R8B_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X86, 0X04, 0X24 # xchgb (%r12), %r8b")
#define XCHG_R8B_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X86, 0X45, 0X00 # xchgb (%r13), %r8b")
#define XCHG_R8B_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X86, 0X06 # xchgb (%r14), %r8b")
#define XCHG_R8B_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X86, 0X07 # xchgb (%r15), %r8b")
#define XCHG_R8B_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X86, 0X00 # xchgb (%eax), %r8b")
#define XCHG_R8B_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X86, 0X03 # xchgb (%ebx), %r8b")
#define XCHG_R8B_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X86, 0X01 # xchgb (%ecx), %r8b")
#define XCHG_R8B_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X86, 0X02 # xchgb (%edx), %r8b")
#define XCHG_R8B_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X86, 0X07 # xchgb (%edi), %r8b")
#define XCHG_R8B_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X86, 0X06 # xchgb (%esi), %r8b")
#define XCHG_R8B_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X86, 0X45, 0X00 # xchgb (%ebp), %r8b")
#define XCHG_R8B_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X86, 0X04, 0X24 # xchgb (%esp), %r8b")

#define XCHG_R9B_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X86, 0X08 # xchgb (%rax), %r9b")
#define XCHG_R9B_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X86, 0X0B # xchgb (%rbx), %r9b")
#define XCHG_R9B_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X86, 0X09 # xchgb (%rcx), %r9b")
#define XCHG_R9B_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X86, 0X0A # xchgb (%rdx), %r9b")
#define XCHG_R9B_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X86, 0X0F # xchgb (%rdi), %r9b")
#define XCHG_R9B_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X86, 0X0E # xchgb (%rsi), %r9b")
#define XCHG_R9B_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X86, 0X4D, 0X00 # xchgb (%rbp), %r9b")
#define XCHG_R9B_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X86, 0X0C, 0X24 # xchgb (%rsp), %r9b")
#define XCHG_R9B_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X86, 0X08 # xchgb (%r8), %r9b")
#define XCHG_R9B_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X86, 0X09 # xchgb (%r9), %r9b")
#define XCHG_R9B_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X86, 0X0A # xchgb (%r10), %r9b")
#define XCHG_R9B_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X86, 0X0B # xchgb (%r11), %r9b")
#define XCHG_R9B_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X86, 0X0C, 0X24 # xchgb (%r12), %r9b")
#define XCHG_R9B_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X86, 0X4D, 0X00 # xchgb (%r13), %r9b")
#define XCHG_R9B_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X86, 0X0E # xchgb (%r14), %r9b")
#define XCHG_R9B_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X86, 0X0F # xchgb (%r15), %r9b")
#define XCHG_R9B_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X86, 0X08 # xchgb (%eax), %r9b")
#define XCHG_R9B_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X86, 0X0B # xchgb (%ebx), %r9b")
#define XCHG_R9B_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X86, 0X09 # xchgb (%ecx), %r9b")
#define XCHG_R9B_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X86, 0X0A # xchgb (%edx), %r9b")
#define XCHG_R9B_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X86, 0X0F # xchgb (%edi), %r9b")
#define XCHG_R9B_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X86, 0X0E # xchgb (%esi), %r9b")
#define XCHG_R9B_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X86, 0X4D, 0X00 # xchgb (%ebp), %r9b")
#define XCHG_R9B_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X86, 0X0C, 0X24 # xchgb (%esp), %r9b")

#define XCHG_R10B_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X86, 0X10 # xchgb (%rax), %r10b")
#define XCHG_R10B_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X86, 0X13 # xchgb (%rbx), %r10b")
#define XCHG_R10B_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X86, 0X11 # xchgb (%rcx), %r10b")
#define XCHG_R10B_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X86, 0X12 # xchgb (%rdx), %r10b")
#define XCHG_R10B_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X86, 0X17 # xchgb (%rdi), %r10b")
#define XCHG_R10B_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X86, 0X16 # xchgb (%rsi), %r10b")
#define XCHG_R10B_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X86, 0X55, 0X00 # xchgb (%rbp), %r10b")
#define XCHG_R10B_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X86, 0X14, 0X24 # xchgb (%rsp), %r10b")
#define XCHG_R10B_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X86, 0X10 # xchgb (%r8), %r10b")
#define XCHG_R10B_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X86, 0X11 # xchgb (%r9), %r10b")
#define XCHG_R10B_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X86, 0X12 # xchgb (%r10), %r10b")
#define XCHG_R10B_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X86, 0X13 # xchgb (%r11), %r10b")
#define XCHG_R10B_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X86, 0X14, 0X24 # xchgb (%r12), %r10b")
#define XCHG_R10B_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X86, 0X55, 0X00 # xchgb (%r13), %r10b")
#define XCHG_R10B_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X86, 0X16 # xchgb (%r14), %r10b")
#define XCHG_R10B_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X86, 0X17 # xchgb (%r15), %r10b")
#define XCHG_R10B_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X86, 0X10 # xchgb (%eax), %r10b")
#define XCHG_R10B_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X86, 0X13 # xchgb (%ebx), %r10b")
#define XCHG_R10B_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X86, 0X11 # xchgb (%ecx), %r10b")
#define XCHG_R10B_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X86, 0X12 # xchgb (%edx), %r10b")
#define XCHG_R10B_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X86, 0X17 # xchgb (%edi), %r10b")
#define XCHG_R10B_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X86, 0X16 # xchgb (%esi), %r10b")
#define XCHG_R10B_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X86, 0X55, 0X00 # xchgb (%ebp), %r10b")
#define XCHG_R10B_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X86, 0X14, 0X24 # xchgb (%esp), %r10b")

#define XCHG_R11B_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X86, 0X18 # xchgb (%rax), %r11b")
#define XCHG_R11B_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X86, 0X1B # xchgb (%rbx), %r11b")
#define XCHG_R11B_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X86, 0X19 # xchgb (%rcx), %r11b")
#define XCHG_R11B_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X86, 0X1A # xchgb (%rdx), %r11b")
#define XCHG_R11B_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X86, 0X1F # xchgb (%rdi), %r11b")
#define XCHG_R11B_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X86, 0X1E # xchgb (%rsi), %r11b")
#define XCHG_R11B_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X86, 0X5D, 0X00 # xchgb (%rbp), %r11b")
#define XCHG_R11B_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X86, 0X1C, 0X24 # xchgb (%rsp), %r11b")
#define XCHG_R11B_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X86, 0X18 # xchgb (%r8), %r11b")
#define XCHG_R11B_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X86, 0X19 # xchgb (%r9), %r11b")
#define XCHG_R11B_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X86, 0X1A # xchgb (%r10), %r11b")
#define XCHG_R11B_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X86, 0X1B # xchgb (%r11), %r11b")
#define XCHG_R11B_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X86, 0X1C, 0X24 # xchgb (%r12), %r11b")
#define XCHG_R11B_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X86, 0X5D, 0X00 # xchgb (%r13), %r11b")
#define XCHG_R11B_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X86, 0X1E # xchgb (%r14), %r11b")
#define XCHG_R11B_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X86, 0X1F # xchgb (%r15), %r11b")
#define XCHG_R11B_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X86, 0X18 # xchgb (%eax), %r11b")
#define XCHG_R11B_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X86, 0X1B # xchgb (%ebx), %r11b")
#define XCHG_R11B_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X86, 0X19 # xchgb (%ecx), %r11b")
#define XCHG_R11B_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X86, 0X1A # xchgb (%edx), %r11b")
#define XCHG_R11B_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X86, 0X1F # xchgb (%edi), %r11b")
#define XCHG_R11B_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X86, 0X1E # xchgb (%esi), %r11b")
#define XCHG_R11B_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X86, 0X5D, 0X00 # xchgb (%ebp), %r11b")
#define XCHG_R11B_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X86, 0X1C, 0X24 # xchgb (%esp), %r11b")

#define XCHG_R12B_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X86, 0X20 # xchgb (%rax), %r12b")
#define XCHG_R12B_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X86, 0X23 # xchgb (%rbx), %r12b")
#define XCHG_R12B_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X86, 0X21 # xchgb (%rcx), %r12b")
#define XCHG_R12B_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X86, 0X22 # xchgb (%rdx), %r12b")
#define XCHG_R12B_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X86, 0X27 # xchgb (%rdi), %r12b")
#define XCHG_R12B_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X86, 0X26 # xchgb (%rsi), %r12b")
#define XCHG_R12B_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X86, 0X65, 0X00 # xchgb (%rbp), %r12b")
#define XCHG_R12B_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X86, 0X24, 0X24 # xchgb (%rsp), %r12b")
#define XCHG_R12B_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X86, 0X20 # xchgb (%r8), %r12b")
#define XCHG_R12B_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X86, 0X21 # xchgb (%r9), %r12b")
#define XCHG_R12B_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X86, 0X22 # xchgb (%r10), %r12b")
#define XCHG_R12B_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X86, 0X23 # xchgb (%r11), %r12b")
#define XCHG_R12B_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X86, 0X24, 0X24 # xchgb (%r12), %r12b")
#define XCHG_R12B_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X86, 0X65, 0X00 # xchgb (%r13), %r12b")
#define XCHG_R12B_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X86, 0X26 # xchgb (%r14), %r12b")
#define XCHG_R12B_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X86, 0X27 # xchgb (%r15), %r12b")
#define XCHG_R12B_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X86, 0X20 # xchgb (%eax), %r12b")
#define XCHG_R12B_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X86, 0X23 # xchgb (%ebx), %r12b")
#define XCHG_R12B_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X86, 0X21 # xchgb (%ecx), %r12b")
#define XCHG_R12B_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X86, 0X22 # xchgb (%edx), %r12b")
#define XCHG_R12B_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X86, 0X27 # xchgb (%edi), %r12b")
#define XCHG_R12B_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X86, 0X26 # xchgb (%esi), %r12b")
#define XCHG_R12B_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X86, 0X65, 0X00 # xchgb (%ebp), %r12b")
#define XCHG_R12B_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X86, 0X24, 0X24 # xchgb (%esp), %r12b")

#define XCHG_R13B_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X86, 0X28 # xchgb (%rax), %r13b")
#define XCHG_R13B_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X86, 0X2B # xchgb (%rbx), %r13b")
#define XCHG_R13B_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X86, 0X29 # xchgb (%rcx), %r13b")
#define XCHG_R13B_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X86, 0X2A # xchgb (%rdx), %r13b")
#define XCHG_R13B_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X86, 0X2F # xchgb (%rdi), %r13b")
#define XCHG_R13B_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X86, 0X2E # xchgb (%rsi), %r13b")
#define XCHG_R13B_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X86, 0X6D, 0X00 # xchgb (%rbp), %r13b")
#define XCHG_R13B_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X86, 0X2C, 0X24 # xchgb (%rsp), %r13b")
#define XCHG_R13B_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X86, 0X28 # xchgb (%r8), %r13b")
#define XCHG_R13B_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X86, 0X29 # xchgb (%r9), %r13b")
#define XCHG_R13B_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X86, 0X2A # xchgb (%r10), %r13b")
#define XCHG_R13B_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X86, 0X2B # xchgb (%r11), %r13b")
#define XCHG_R13B_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X86, 0X2C, 0X24 # xchgb (%r12), %r13b")
#define XCHG_R13B_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X86, 0X6D, 0X00 # xchgb (%r13), %r13b")
#define XCHG_R13B_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X86, 0X2E # xchgb (%r14), %r13b")
#define XCHG_R13B_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X86, 0X2F # xchgb (%r15), %r13b")
#define XCHG_R13B_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X86, 0X28 # xchgb (%eax), %r13b")
#define XCHG_R13B_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X86, 0X2B # xchgb (%ebx), %r13b")
#define XCHG_R13B_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X86, 0X29 # xchgb (%ecx), %r13b")
#define XCHG_R13B_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X86, 0X2A # xchgb (%edx), %r13b")
#define XCHG_R13B_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X86, 0X2F # xchgb (%edi), %r13b")
#define XCHG_R13B_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X86, 0X2E # xchgb (%esi), %r13b")
#define XCHG_R13B_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X86, 0X6D, 0X00 # xchgb (%ebp), %r13b")
#define XCHG_R13B_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X86, 0X2C, 0X24 # xchgb (%esp), %r13b")

#define XCHG_R14B_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X86, 0X30 # xchgb (%rax), %r14b")
#define XCHG_R14B_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X86, 0X33 # xchgb (%rbx), %r14b")
#define XCHG_R14B_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X86, 0X31 # xchgb (%rcx), %r14b")
#define XCHG_R14B_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X86, 0X32 # xchgb (%rdx), %r14b")
#define XCHG_R14B_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X86, 0X37 # xchgb (%rdi), %r14b")
#define XCHG_R14B_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X86, 0X36 # xchgb (%rsi), %r14b")
#define XCHG_R14B_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X86, 0X75, 0X00 # xchgb (%rbp), %r14b")
#define XCHG_R14B_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X86, 0X34, 0X24 # xchgb (%rsp), %r14b")
#define XCHG_R14B_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X86, 0X30 # xchgb (%r8), %r14b")
#define XCHG_R14B_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X86, 0X31 # xchgb (%r9), %r14b")
#define XCHG_R14B_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X86, 0X32 # xchgb (%r10), %r14b")
#define XCHG_R14B_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X86, 0X33 # xchgb (%r11), %r14b")
#define XCHG_R14B_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X86, 0X34, 0X24 # xchgb (%r12), %r14b")
#define XCHG_R14B_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X86, 0X75, 0X00 # xchgb (%r13), %r14b")
#define XCHG_R14B_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X86, 0X36 # xchgb (%r14), %r14b")
#define XCHG_R14B_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X86, 0X37 # xchgb (%r15), %r14b")
#define XCHG_R14B_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X86, 0X30 # xchgb (%eax), %r14b")
#define XCHG_R14B_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X86, 0X33 # xchgb (%ebx), %r14b")
#define XCHG_R14B_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X86, 0X31 # xchgb (%ecx), %r14b")
#define XCHG_R14B_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X86, 0X32 # xchgb (%edx), %r14b")
#define XCHG_R14B_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X86, 0X37 # xchgb (%edi), %r14b")
#define XCHG_R14B_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X86, 0X36 # xchgb (%esi), %r14b")
#define XCHG_R14B_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X86, 0X75, 0X00 # xchgb (%ebp), %r14b")
#define XCHG_R14B_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X86, 0X34, 0X24 # xchgb (%esp), %r14b")

#define XCHG_R15B_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X86, 0X38 # xchgb (%rax), %r15b")
#define XCHG_R15B_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X86, 0X3B # xchgb (%rbx), %r15b")
#define XCHG_R15B_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X86, 0X39 # xchgb (%rcx), %r15b")
#define XCHG_R15B_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X86, 0X3A # xchgb (%rdx), %r15b")
#define XCHG_R15B_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X86, 0X3F # xchgb (%rdi), %r15b")
#define XCHG_R15B_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X86, 0X3E # xchgb (%rsi), %r15b")
#define XCHG_R15B_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X86, 0X7D, 0X00 # xchgb (%rbp), %r15b")
#define XCHG_R15B_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X86, 0X3C, 0X24 # xchgb (%rsp), %r15b")
#define XCHG_R15B_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X86, 0X38 # xchgb (%r8), %r15b")
#define XCHG_R15B_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X86, 0X39 # xchgb (%r9), %r15b")
#define XCHG_R15B_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X86, 0X3A # xchgb (%r10), %r15b")
#define XCHG_R15B_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X86, 0X3B # xchgb (%r11), %r15b")
#define XCHG_R15B_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X86, 0X3C, 0X24 # xchgb (%r12), %r15b")
#define XCHG_R15B_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X86, 0X7D, 0X00 # xchgb (%r13), %r15b")
#define XCHG_R15B_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X86, 0X3E # xchgb (%r14), %r15b")
#define XCHG_R15B_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X86, 0X3F # xchgb (%r15), %r15b")
#define XCHG_R15B_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X86, 0X38 # xchgb (%eax), %r15b")
#define XCHG_R15B_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X86, 0X3B # xchgb (%ebx), %r15b")
#define XCHG_R15B_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X86, 0X39 # xchgb (%ecx), %r15b")
#define XCHG_R15B_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X86, 0X3A # xchgb (%edx), %r15b")
#define XCHG_R15B_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X86, 0X3F # xchgb (%edi), %r15b")
#define XCHG_R15B_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X86, 0X3E # xchgb (%esi), %r15b")
#define XCHG_R15B_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X86, 0X7D, 0X00 # xchgb (%ebp), %r15b")
#define XCHG_R15B_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X86, 0X3C, 0X24 # xchgb (%esp), %r15b")

#define XCHG_AL_TO_PTR_RAX CMT_ASM(".byte 0X86, 0X00 # xchgb %al, (%rax)")
#define XCHG_AL_TO_PTR_RBX CMT_ASM(".byte 0X86, 0X03 # xchgb %al, (%rbx)")
#define XCHG_AL_TO_PTR_RCX CMT_ASM(".byte 0X86, 0X01 # xchgb %al, (%rcx)")
#define XCHG_AL_TO_PTR_RDX CMT_ASM(".byte 0X86, 0X02 # xchgb %al, (%rdx)")
#define XCHG_AL_TO_PTR_RDI CMT_ASM(".byte 0X86, 0X07 # xchgb %al, (%rdi)")
#define XCHG_AL_TO_PTR_RSI CMT_ASM(".byte 0X86, 0X06 # xchgb %al, (%rsi)")
#define XCHG_AL_TO_PTR_RBP CMT_ASM(".byte 0X86, 0X45, 0X00 # xchgb %al, (%rbp)")
#define XCHG_AL_TO_PTR_RSP CMT_ASM(".byte 0X86, 0X04, 0X24 # xchgb %al, (%rsp)")
#define XCHG_AL_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X86, 0X00 # xchgb %al, (%r8)")
#define XCHG_AL_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X86, 0X01 # xchgb %al, (%r9)")
#define XCHG_AL_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X86, 0X02 # xchgb %al, (%r10)")
#define XCHG_AL_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X86, 0X03 # xchgb %al, (%r11)")
#define XCHG_AL_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X86, 0X04, 0X24 # xchgb %al, (%r12)")
#define XCHG_AL_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X86, 0X45, 0X00 # xchgb %al, (%r13)")
#define XCHG_AL_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X86, 0X06 # xchgb %al, (%r14)")
#define XCHG_AL_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X86, 0X07 # xchgb %al, (%r15)")
#define XCHG_AL_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X86, 0X00 # xchgb %al, (%eax)")
#define XCHG_AL_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X86, 0X03 # xchgb %al, (%ebx)")
#define XCHG_AL_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X86, 0X01 # xchgb %al, (%ecx)")
#define XCHG_AL_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X86, 0X02 # xchgb %al, (%edx)")
#define XCHG_AL_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X86, 0X07 # xchgb %al, (%edi)")
#define XCHG_AL_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X86, 0X06 # xchgb %al, (%esi)")
#define XCHG_AL_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X86, 0X45, 0X00 # xchgb %al, (%ebp)")
#define XCHG_AL_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X86, 0X04, 0X24 # xchgb %al, (%esp)")

#define XCHG_BL_TO_PTR_RAX CMT_ASM(".byte 0X86, 0X18 # xchgb %bl, (%rax)")
#define XCHG_BL_TO_PTR_RBX CMT_ASM(".byte 0X86, 0X1B # xchgb %bl, (%rbx)")
#define XCHG_BL_TO_PTR_RCX CMT_ASM(".byte 0X86, 0X19 # xchgb %bl, (%rcx)")
#define XCHG_BL_TO_PTR_RDX CMT_ASM(".byte 0X86, 0X1A # xchgb %bl, (%rdx)")
#define XCHG_BL_TO_PTR_RDI CMT_ASM(".byte 0X86, 0X1F # xchgb %bl, (%rdi)")
#define XCHG_BL_TO_PTR_RSI CMT_ASM(".byte 0X86, 0X1E # xchgb %bl, (%rsi)")
#define XCHG_BL_TO_PTR_RBP CMT_ASM(".byte 0X86, 0X5D, 0X00 # xchgb %bl, (%rbp)")
#define XCHG_BL_TO_PTR_RSP CMT_ASM(".byte 0X86, 0X1C, 0X24 # xchgb %bl, (%rsp)")
#define XCHG_BL_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X86, 0X18 # xchgb %bl, (%r8)")
#define XCHG_BL_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X86, 0X19 # xchgb %bl, (%r9)")
#define XCHG_BL_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X86, 0X1A # xchgb %bl, (%r10)")
#define XCHG_BL_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X86, 0X1B # xchgb %bl, (%r11)")
#define XCHG_BL_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X86, 0X1C, 0X24 # xchgb %bl, (%r12)")
#define XCHG_BL_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X86, 0X5D, 0X00 # xchgb %bl, (%r13)")
#define XCHG_BL_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X86, 0X1E # xchgb %bl, (%r14)")
#define XCHG_BL_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X86, 0X1F # xchgb %bl, (%r15)")
#define XCHG_BL_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X86, 0X18 # xchgb %bl, (%eax)")
#define XCHG_BL_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X86, 0X1B # xchgb %bl, (%ebx)")
#define XCHG_BL_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X86, 0X19 # xchgb %bl, (%ecx)")
#define XCHG_BL_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X86, 0X1A # xchgb %bl, (%edx)")
#define XCHG_BL_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X86, 0X1F # xchgb %bl, (%edi)")
#define XCHG_BL_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X86, 0X1E # xchgb %bl, (%esi)")
#define XCHG_BL_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X86, 0X5D, 0X00 # xchgb %bl, (%ebp)")
#define XCHG_BL_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X86, 0X1C, 0X24 # xchgb %bl, (%esp)")

#define XCHG_CL_TO_PTR_RAX CMT_ASM(".byte 0X86, 0X08 # xchgb %cl, (%rax)")
#define XCHG_CL_TO_PTR_RBX CMT_ASM(".byte 0X86, 0X0B # xchgb %cl, (%rbx)")
#define XCHG_CL_TO_PTR_RCX CMT_ASM(".byte 0X86, 0X09 # xchgb %cl, (%rcx)")
#define XCHG_CL_TO_PTR_RDX CMT_ASM(".byte 0X86, 0X0A # xchgb %cl, (%rdx)")
#define XCHG_CL_TO_PTR_RDI CMT_ASM(".byte 0X86, 0X0F # xchgb %cl, (%rdi)")
#define XCHG_CL_TO_PTR_RSI CMT_ASM(".byte 0X86, 0X0E # xchgb %cl, (%rsi)")
#define XCHG_CL_TO_PTR_RBP CMT_ASM(".byte 0X86, 0X4D, 0X00 # xchgb %cl, (%rbp)")
#define XCHG_CL_TO_PTR_RSP CMT_ASM(".byte 0X86, 0X0C, 0X24 # xchgb %cl, (%rsp)")
#define XCHG_CL_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X86, 0X08 # xchgb %cl, (%r8)")
#define XCHG_CL_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X86, 0X09 # xchgb %cl, (%r9)")
#define XCHG_CL_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X86, 0X0A # xchgb %cl, (%r10)")
#define XCHG_CL_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X86, 0X0B # xchgb %cl, (%r11)")
#define XCHG_CL_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X86, 0X0C, 0X24 # xchgb %cl, (%r12)")
#define XCHG_CL_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X86, 0X4D, 0X00 # xchgb %cl, (%r13)")
#define XCHG_CL_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X86, 0X0E # xchgb %cl, (%r14)")
#define XCHG_CL_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X86, 0X0F # xchgb %cl, (%r15)")
#define XCHG_CL_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X86, 0X08 # xchgb %cl, (%eax)")
#define XCHG_CL_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X86, 0X0B # xchgb %cl, (%ebx)")
#define XCHG_CL_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X86, 0X09 # xchgb %cl, (%ecx)")
#define XCHG_CL_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X86, 0X0A # xchgb %cl, (%edx)")
#define XCHG_CL_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X86, 0X0F # xchgb %cl, (%edi)")
#define XCHG_CL_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X86, 0X0E # xchgb %cl, (%esi)")
#define XCHG_CL_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X86, 0X4D, 0X00 # xchgb %cl, (%ebp)")
#define XCHG_CL_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X86, 0X0C, 0X24 # xchgb %cl, (%esp)")

#define XCHG_DL_TO_PTR_RAX CMT_ASM(".byte 0X86, 0X10 # xchgb %dl, (%rax)")
#define XCHG_DL_TO_PTR_RBX CMT_ASM(".byte 0X86, 0X13 # xchgb %dl, (%rbx)")
#define XCHG_DL_TO_PTR_RCX CMT_ASM(".byte 0X86, 0X11 # xchgb %dl, (%rcx)")
#define XCHG_DL_TO_PTR_RDX CMT_ASM(".byte 0X86, 0X12 # xchgb %dl, (%rdx)")
#define XCHG_DL_TO_PTR_RDI CMT_ASM(".byte 0X86, 0X17 # xchgb %dl, (%rdi)")
#define XCHG_DL_TO_PTR_RSI CMT_ASM(".byte 0X86, 0X16 # xchgb %dl, (%rsi)")
#define XCHG_DL_TO_PTR_RBP CMT_ASM(".byte 0X86, 0X55, 0X00 # xchgb %dl, (%rbp)")
#define XCHG_DL_TO_PTR_RSP CMT_ASM(".byte 0X86, 0X14, 0X24 # xchgb %dl, (%rsp)")
#define XCHG_DL_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X86, 0X10 # xchgb %dl, (%r8)")
#define XCHG_DL_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X86, 0X11 # xchgb %dl, (%r9)")
#define XCHG_DL_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X86, 0X12 # xchgb %dl, (%r10)")
#define XCHG_DL_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X86, 0X13 # xchgb %dl, (%r11)")
#define XCHG_DL_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X86, 0X14, 0X24 # xchgb %dl, (%r12)")
#define XCHG_DL_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X86, 0X55, 0X00 # xchgb %dl, (%r13)")
#define XCHG_DL_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X86, 0X16 # xchgb %dl, (%r14)")
#define XCHG_DL_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X86, 0X17 # xchgb %dl, (%r15)")
#define XCHG_DL_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X86, 0X10 # xchgb %dl, (%eax)")
#define XCHG_DL_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X86, 0X13 # xchgb %dl, (%ebx)")
#define XCHG_DL_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X86, 0X11 # xchgb %dl, (%ecx)")
#define XCHG_DL_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X86, 0X12 # xchgb %dl, (%edx)")
#define XCHG_DL_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X86, 0X17 # xchgb %dl, (%edi)")
#define XCHG_DL_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X86, 0X16 # xchgb %dl, (%esi)")
#define XCHG_DL_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X86, 0X55, 0X00 # xchgb %dl, (%ebp)")
#define XCHG_DL_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X86, 0X14, 0X24 # xchgb %dl, (%esp)")

#define XCHG_DIL_TO_PTR_RAX CMT_ASM(".byte 0X40, 0X86, 0X38 # xchgb %dil, (%rax)")
#define XCHG_DIL_TO_PTR_RBX CMT_ASM(".byte 0X40, 0X86, 0X3B # xchgb %dil, (%rbx)")
#define XCHG_DIL_TO_PTR_RCX CMT_ASM(".byte 0X40, 0X86, 0X39 # xchgb %dil, (%rcx)")
#define XCHG_DIL_TO_PTR_RDX CMT_ASM(".byte 0X40, 0X86, 0X3A # xchgb %dil, (%rdx)")
#define XCHG_DIL_TO_PTR_RDI CMT_ASM(".byte 0X40, 0X86, 0X3F # xchgb %dil, (%rdi)")
#define XCHG_DIL_TO_PTR_RSI CMT_ASM(".byte 0X40, 0X86, 0X3E # xchgb %dil, (%rsi)")
#define XCHG_DIL_TO_PTR_RBP CMT_ASM(".byte 0X40, 0X86, 0X7D, 0X00 # xchgb %dil, (%rbp)")
#define XCHG_DIL_TO_PTR_RSP CMT_ASM(".byte 0X40, 0X86, 0X3C, 0X24 # xchgb %dil, (%rsp)")
#define XCHG_DIL_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X86, 0X38 # xchgb %dil, (%r8)")
#define XCHG_DIL_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X86, 0X39 # xchgb %dil, (%r9)")
#define XCHG_DIL_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X86, 0X3A # xchgb %dil, (%r10)")
#define XCHG_DIL_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X86, 0X3B # xchgb %dil, (%r11)")
#define XCHG_DIL_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X86, 0X3C, 0X24 # xchgb %dil, (%r12)")
#define XCHG_DIL_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X86, 0X7D, 0X00 # xchgb %dil, (%r13)")
#define XCHG_DIL_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X86, 0X3E # xchgb %dil, (%r14)")
#define XCHG_DIL_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X86, 0X3F # xchgb %dil, (%r15)")
#define XCHG_DIL_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X40, 0X86, 0X38 # xchgb %dil, (%eax)")
#define XCHG_DIL_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X40, 0X86, 0X3B # xchgb %dil, (%ebx)")
#define XCHG_DIL_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X40, 0X86, 0X39 # xchgb %dil, (%ecx)")
#define XCHG_DIL_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X40, 0X86, 0X3A # xchgb %dil, (%edx)")
#define XCHG_DIL_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X40, 0X86, 0X3F # xchgb %dil, (%edi)")
#define XCHG_DIL_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X40, 0X86, 0X3E # xchgb %dil, (%esi)")
#define XCHG_DIL_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X40, 0X86, 0X7D, 0X00 # xchgb %dil, (%ebp)")
#define XCHG_DIL_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X40, 0X86, 0X3C, 0X24 # xchgb %dil, (%esp)")

#define XCHG_SIL_TO_PTR_RAX CMT_ASM(".byte 0X40, 0X86, 0X30 # xchgb %sil, (%rax)")
#define XCHG_SIL_TO_PTR_RBX CMT_ASM(".byte 0X40, 0X86, 0X33 # xchgb %sil, (%rbx)")
#define XCHG_SIL_TO_PTR_RCX CMT_ASM(".byte 0X40, 0X86, 0X31 # xchgb %sil, (%rcx)")
#define XCHG_SIL_TO_PTR_RDX CMT_ASM(".byte 0X40, 0X86, 0X32 # xchgb %sil, (%rdx)")
#define XCHG_SIL_TO_PTR_RDI CMT_ASM(".byte 0X40, 0X86, 0X37 # xchgb %sil, (%rdi)")
#define XCHG_SIL_TO_PTR_RSI CMT_ASM(".byte 0X40, 0X86, 0X36 # xchgb %sil, (%rsi)")
#define XCHG_SIL_TO_PTR_RBP CMT_ASM(".byte 0X40, 0X86, 0X75, 0X00 # xchgb %sil, (%rbp)")
#define XCHG_SIL_TO_PTR_RSP CMT_ASM(".byte 0X40, 0X86, 0X34, 0X24 # xchgb %sil, (%rsp)")
#define XCHG_SIL_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X86, 0X30 # xchgb %sil, (%r8)")
#define XCHG_SIL_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X86, 0X31 # xchgb %sil, (%r9)")
#define XCHG_SIL_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X86, 0X32 # xchgb %sil, (%r10)")
#define XCHG_SIL_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X86, 0X33 # xchgb %sil, (%r11)")
#define XCHG_SIL_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X86, 0X34, 0X24 # xchgb %sil, (%r12)")
#define XCHG_SIL_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X86, 0X75, 0X00 # xchgb %sil, (%r13)")
#define XCHG_SIL_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X86, 0X36 # xchgb %sil, (%r14)")
#define XCHG_SIL_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X86, 0X37 # xchgb %sil, (%r15)")
#define XCHG_SIL_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X40, 0X86, 0X30 # xchgb %sil, (%eax)")
#define XCHG_SIL_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X40, 0X86, 0X33 # xchgb %sil, (%ebx)")
#define XCHG_SIL_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X40, 0X86, 0X31 # xchgb %sil, (%ecx)")
#define XCHG_SIL_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X40, 0X86, 0X32 # xchgb %sil, (%edx)")
#define XCHG_SIL_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X40, 0X86, 0X37 # xchgb %sil, (%edi)")
#define XCHG_SIL_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X40, 0X86, 0X36 # xchgb %sil, (%esi)")
#define XCHG_SIL_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X40, 0X86, 0X75, 0X00 # xchgb %sil, (%ebp)")
#define XCHG_SIL_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X40, 0X86, 0X34, 0X24 # xchgb %sil, (%esp)")

#define XCHG_BPL_TO_PTR_RAX CMT_ASM(".byte 0X40, 0X86, 0X28 # xchgb %bpl, (%rax)")
#define XCHG_BPL_TO_PTR_RBX CMT_ASM(".byte 0X40, 0X86, 0X2B # xchgb %bpl, (%rbx)")
#define XCHG_BPL_TO_PTR_RCX CMT_ASM(".byte 0X40, 0X86, 0X29 # xchgb %bpl, (%rcx)")
#define XCHG_BPL_TO_PTR_RDX CMT_ASM(".byte 0X40, 0X86, 0X2A # xchgb %bpl, (%rdx)")
#define XCHG_BPL_TO_PTR_RDI CMT_ASM(".byte 0X40, 0X86, 0X2F # xchgb %bpl, (%rdi)")
#define XCHG_BPL_TO_PTR_RSI CMT_ASM(".byte 0X40, 0X86, 0X2E # xchgb %bpl, (%rsi)")
#define XCHG_BPL_TO_PTR_RBP CMT_ASM(".byte 0X40, 0X86, 0X6D, 0X00 # xchgb %bpl, (%rbp)")
#define XCHG_BPL_TO_PTR_RSP CMT_ASM(".byte 0X40, 0X86, 0X2C, 0X24 # xchgb %bpl, (%rsp)")
#define XCHG_BPL_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X86, 0X28 # xchgb %bpl, (%r8)")
#define XCHG_BPL_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X86, 0X29 # xchgb %bpl, (%r9)")
#define XCHG_BPL_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X86, 0X2A # xchgb %bpl, (%r10)")
#define XCHG_BPL_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X86, 0X2B # xchgb %bpl, (%r11)")
#define XCHG_BPL_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X86, 0X2C, 0X24 # xchgb %bpl, (%r12)")
#define XCHG_BPL_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X86, 0X6D, 0X00 # xchgb %bpl, (%r13)")
#define XCHG_BPL_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X86, 0X2E # xchgb %bpl, (%r14)")
#define XCHG_BPL_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X86, 0X2F # xchgb %bpl, (%r15)")
#define XCHG_BPL_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X40, 0X86, 0X28 # xchgb %bpl, (%eax)")
#define XCHG_BPL_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X40, 0X86, 0X2B # xchgb %bpl, (%ebx)")
#define XCHG_BPL_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X40, 0X86, 0X29 # xchgb %bpl, (%ecx)")
#define XCHG_BPL_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X40, 0X86, 0X2A # xchgb %bpl, (%edx)")
#define XCHG_BPL_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X40, 0X86, 0X2F # xchgb %bpl, (%edi)")
#define XCHG_BPL_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X40, 0X86, 0X2E # xchgb %bpl, (%esi)")
#define XCHG_BPL_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X40, 0X86, 0X6D, 0X00 # xchgb %bpl, (%ebp)")
#define XCHG_BPL_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X40, 0X86, 0X2C, 0X24 # xchgb %bpl, (%esp)")

#define XCHG_SPL_TO_PTR_RAX CMT_ASM(".byte 0X40, 0X86, 0X20 # xchgb %spl, (%rax)")
#define XCHG_SPL_TO_PTR_RBX CMT_ASM(".byte 0X40, 0X86, 0X23 # xchgb %spl, (%rbx)")
#define XCHG_SPL_TO_PTR_RCX CMT_ASM(".byte 0X40, 0X86, 0X21 # xchgb %spl, (%rcx)")
#define XCHG_SPL_TO_PTR_RDX CMT_ASM(".byte 0X40, 0X86, 0X22 # xchgb %spl, (%rdx)")
#define XCHG_SPL_TO_PTR_RDI CMT_ASM(".byte 0X40, 0X86, 0X27 # xchgb %spl, (%rdi)")
#define XCHG_SPL_TO_PTR_RSI CMT_ASM(".byte 0X40, 0X86, 0X26 # xchgb %spl, (%rsi)")
#define XCHG_SPL_TO_PTR_RBP CMT_ASM(".byte 0X40, 0X86, 0X65, 0X00 # xchgb %spl, (%rbp)")
#define XCHG_SPL_TO_PTR_RSP CMT_ASM(".byte 0X40, 0X86, 0X24, 0X24 # xchgb %spl, (%rsp)")
#define XCHG_SPL_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X86, 0X20 # xchgb %spl, (%r8)")
#define XCHG_SPL_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X86, 0X21 # xchgb %spl, (%r9)")
#define XCHG_SPL_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X86, 0X22 # xchgb %spl, (%r10)")
#define XCHG_SPL_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X86, 0X23 # xchgb %spl, (%r11)")
#define XCHG_SPL_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X86, 0X24, 0X24 # xchgb %spl, (%r12)")
#define XCHG_SPL_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X86, 0X65, 0X00 # xchgb %spl, (%r13)")
#define XCHG_SPL_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X86, 0X26 # xchgb %spl, (%r14)")
#define XCHG_SPL_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X86, 0X27 # xchgb %spl, (%r15)")
#define XCHG_SPL_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X40, 0X86, 0X20 # xchgb %spl, (%eax)")
#define XCHG_SPL_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X40, 0X86, 0X23 # xchgb %spl, (%ebx)")
#define XCHG_SPL_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X40, 0X86, 0X21 # xchgb %spl, (%ecx)")
#define XCHG_SPL_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X40, 0X86, 0X22 # xchgb %spl, (%edx)")
#define XCHG_SPL_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X40, 0X86, 0X27 # xchgb %spl, (%edi)")
#define XCHG_SPL_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X40, 0X86, 0X26 # xchgb %spl, (%esi)")
#define XCHG_SPL_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X40, 0X86, 0X65, 0X00 # xchgb %spl, (%ebp)")
#define XCHG_SPL_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X40, 0X86, 0X24, 0X24 # xchgb %spl, (%esp)")

#define XCHG_R8B_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X86, 0X00 # xchgb %r8b, (%rax)")
#define XCHG_R8B_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X86, 0X03 # xchgb %r8b, (%rbx)")
#define XCHG_R8B_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X86, 0X01 # xchgb %r8b, (%rcx)")
#define XCHG_R8B_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X86, 0X02 # xchgb %r8b, (%rdx)")
#define XCHG_R8B_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X86, 0X07 # xchgb %r8b, (%rdi)")
#define XCHG_R8B_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X86, 0X06 # xchgb %r8b, (%rsi)")
#define XCHG_R8B_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X86, 0X45, 0X00 # xchgb %r8b, (%rbp)")
#define XCHG_R8B_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X86, 0X04, 0X24 # xchgb %r8b, (%rsp)")
#define XCHG_R8B_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X86, 0X00 # xchgb %r8b, (%r8)")
#define XCHG_R8B_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X86, 0X01 # xchgb %r8b, (%r9)")
#define XCHG_R8B_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X86, 0X02 # xchgb %r8b, (%r10)")
#define XCHG_R8B_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X86, 0X03 # xchgb %r8b, (%r11)")
#define XCHG_R8B_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X86, 0X04, 0X24 # xchgb %r8b, (%r12)")
#define XCHG_R8B_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X86, 0X45, 0X00 # xchgb %r8b, (%r13)")
#define XCHG_R8B_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X86, 0X06 # xchgb %r8b, (%r14)")
#define XCHG_R8B_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X86, 0X07 # xchgb %r8b, (%r15)")
#define XCHG_R8B_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X86, 0X00 # xchgb %r8b, (%eax)")
#define XCHG_R8B_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X86, 0X03 # xchgb %r8b, (%ebx)")
#define XCHG_R8B_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X86, 0X01 # xchgb %r8b, (%ecx)")
#define XCHG_R8B_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X86, 0X02 # xchgb %r8b, (%edx)")
#define XCHG_R8B_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X86, 0X07 # xchgb %r8b, (%edi)")
#define XCHG_R8B_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X86, 0X06 # xchgb %r8b, (%esi)")
#define XCHG_R8B_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X86, 0X45, 0X00 # xchgb %r8b, (%ebp)")
#define XCHG_R8B_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X86, 0X04, 0X24 # xchgb %r8b, (%esp)")

#define XCHG_R9B_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X86, 0X08 # xchgb %r9b, (%rax)")
#define XCHG_R9B_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X86, 0X0B # xchgb %r9b, (%rbx)")
#define XCHG_R9B_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X86, 0X09 # xchgb %r9b, (%rcx)")
#define XCHG_R9B_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X86, 0X0A # xchgb %r9b, (%rdx)")
#define XCHG_R9B_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X86, 0X0F # xchgb %r9b, (%rdi)")
#define XCHG_R9B_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X86, 0X0E # xchgb %r9b, (%rsi)")
#define XCHG_R9B_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X86, 0X4D, 0X00 # xchgb %r9b, (%rbp)")
#define XCHG_R9B_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X86, 0X0C, 0X24 # xchgb %r9b, (%rsp)")
#define XCHG_R9B_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X86, 0X08 # xchgb %r9b, (%r8)")
#define XCHG_R9B_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X86, 0X09 # xchgb %r9b, (%r9)")
#define XCHG_R9B_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X86, 0X0A # xchgb %r9b, (%r10)")
#define XCHG_R9B_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X86, 0X0B # xchgb %r9b, (%r11)")
#define XCHG_R9B_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X86, 0X0C, 0X24 # xchgb %r9b, (%r12)")
#define XCHG_R9B_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X86, 0X4D, 0X00 # xchgb %r9b, (%r13)")
#define XCHG_R9B_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X86, 0X0E # xchgb %r9b, (%r14)")
#define XCHG_R9B_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X86, 0X0F # xchgb %r9b, (%r15)")
#define XCHG_R9B_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X86, 0X08 # xchgb %r9b, (%eax)")
#define XCHG_R9B_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X86, 0X0B # xchgb %r9b, (%ebx)")
#define XCHG_R9B_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X86, 0X09 # xchgb %r9b, (%ecx)")
#define XCHG_R9B_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X86, 0X0A # xchgb %r9b, (%edx)")
#define XCHG_R9B_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X86, 0X0F # xchgb %r9b, (%edi)")
#define XCHG_R9B_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X86, 0X0E # xchgb %r9b, (%esi)")
#define XCHG_R9B_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X86, 0X4D, 0X00 # xchgb %r9b, (%ebp)")
#define XCHG_R9B_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X86, 0X0C, 0X24 # xchgb %r9b, (%esp)")

#define XCHG_R10B_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X86, 0X10 # xchgb %r10b, (%rax)")
#define XCHG_R10B_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X86, 0X13 # xchgb %r10b, (%rbx)")
#define XCHG_R10B_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X86, 0X11 # xchgb %r10b, (%rcx)")
#define XCHG_R10B_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X86, 0X12 # xchgb %r10b, (%rdx)")
#define XCHG_R10B_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X86, 0X17 # xchgb %r10b, (%rdi)")
#define XCHG_R10B_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X86, 0X16 # xchgb %r10b, (%rsi)")
#define XCHG_R10B_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X86, 0X55, 0X00 # xchgb %r10b, (%rbp)")
#define XCHG_R10B_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X86, 0X14, 0X24 # xchgb %r10b, (%rsp)")
#define XCHG_R10B_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X86, 0X10 # xchgb %r10b, (%r8)")
#define XCHG_R10B_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X86, 0X11 # xchgb %r10b, (%r9)")
#define XCHG_R10B_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X86, 0X12 # xchgb %r10b, (%r10)")
#define XCHG_R10B_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X86, 0X13 # xchgb %r10b, (%r11)")
#define XCHG_R10B_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X86, 0X14, 0X24 # xchgb %r10b, (%r12)")
#define XCHG_R10B_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X86, 0X55, 0X00 # xchgb %r10b, (%r13)")
#define XCHG_R10B_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X86, 0X16 # xchgb %r10b, (%r14)")
#define XCHG_R10B_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X86, 0X17 # xchgb %r10b, (%r15)")
#define XCHG_R10B_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X86, 0X10 # xchgb %r10b, (%eax)")
#define XCHG_R10B_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X86, 0X13 # xchgb %r10b, (%ebx)")
#define XCHG_R10B_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X86, 0X11 # xchgb %r10b, (%ecx)")
#define XCHG_R10B_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X86, 0X12 # xchgb %r10b, (%edx)")
#define XCHG_R10B_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X86, 0X17 # xchgb %r10b, (%edi)")
#define XCHG_R10B_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X86, 0X16 # xchgb %r10b, (%esi)")
#define XCHG_R10B_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X86, 0X55, 0X00 # xchgb %r10b, (%ebp)")
#define XCHG_R10B_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X86, 0X14, 0X24 # xchgb %r10b, (%esp)")

#define XCHG_R11B_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X86, 0X18 # xchgb %r11b, (%rax)")
#define XCHG_R11B_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X86, 0X1B # xchgb %r11b, (%rbx)")
#define XCHG_R11B_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X86, 0X19 # xchgb %r11b, (%rcx)")
#define XCHG_R11B_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X86, 0X1A # xchgb %r11b, (%rdx)")
#define XCHG_R11B_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X86, 0X1F # xchgb %r11b, (%rdi)")
#define XCHG_R11B_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X86, 0X1E # xchgb %r11b, (%rsi)")
#define XCHG_R11B_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X86, 0X5D, 0X00 # xchgb %r11b, (%rbp)")
#define XCHG_R11B_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X86, 0X1C, 0X24 # xchgb %r11b, (%rsp)")
#define XCHG_R11B_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X86, 0X18 # xchgb %r11b, (%r8)")
#define XCHG_R11B_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X86, 0X19 # xchgb %r11b, (%r9)")
#define XCHG_R11B_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X86, 0X1A # xchgb %r11b, (%r10)")
#define XCHG_R11B_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X86, 0X1B # xchgb %r11b, (%r11)")
#define XCHG_R11B_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X86, 0X1C, 0X24 # xchgb %r11b, (%r12)")
#define XCHG_R11B_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X86, 0X5D, 0X00 # xchgb %r11b, (%r13)")
#define XCHG_R11B_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X86, 0X1E # xchgb %r11b, (%r14)")
#define XCHG_R11B_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X86, 0X1F # xchgb %r11b, (%r15)")
#define XCHG_R11B_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X86, 0X18 # xchgb %r11b, (%eax)")
#define XCHG_R11B_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X86, 0X1B # xchgb %r11b, (%ebx)")
#define XCHG_R11B_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X86, 0X19 # xchgb %r11b, (%ecx)")
#define XCHG_R11B_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X86, 0X1A # xchgb %r11b, (%edx)")
#define XCHG_R11B_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X86, 0X1F # xchgb %r11b, (%edi)")
#define XCHG_R11B_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X86, 0X1E # xchgb %r11b, (%esi)")
#define XCHG_R11B_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X86, 0X5D, 0X00 # xchgb %r11b, (%ebp)")
#define XCHG_R11B_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X86, 0X1C, 0X24 # xchgb %r11b, (%esp)")

#define XCHG_R12B_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X86, 0X20 # xchgb %r12b, (%rax)")
#define XCHG_R12B_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X86, 0X23 # xchgb %r12b, (%rbx)")
#define XCHG_R12B_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X86, 0X21 # xchgb %r12b, (%rcx)")
#define XCHG_R12B_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X86, 0X22 # xchgb %r12b, (%rdx)")
#define XCHG_R12B_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X86, 0X27 # xchgb %r12b, (%rdi)")
#define XCHG_R12B_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X86, 0X26 # xchgb %r12b, (%rsi)")
#define XCHG_R12B_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X86, 0X65, 0X00 # xchgb %r12b, (%rbp)")
#define XCHG_R12B_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X86, 0X24, 0X24 # xchgb %r12b, (%rsp)")
#define XCHG_R12B_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X86, 0X20 # xchgb %r12b, (%r8)")
#define XCHG_R12B_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X86, 0X21 # xchgb %r12b, (%r9)")
#define XCHG_R12B_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X86, 0X22 # xchgb %r12b, (%r10)")
#define XCHG_R12B_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X86, 0X23 # xchgb %r12b, (%r11)")
#define XCHG_R12B_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X86, 0X24, 0X24 # xchgb %r12b, (%r12)")
#define XCHG_R12B_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X86, 0X65, 0X00 # xchgb %r12b, (%r13)")
#define XCHG_R12B_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X86, 0X26 # xchgb %r12b, (%r14)")
#define XCHG_R12B_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X86, 0X27 # xchgb %r12b, (%r15)")
#define XCHG_R12B_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X86, 0X20 # xchgb %r12b, (%eax)")
#define XCHG_R12B_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X86, 0X23 # xchgb %r12b, (%ebx)")
#define XCHG_R12B_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X86, 0X21 # xchgb %r12b, (%ecx)")
#define XCHG_R12B_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X86, 0X22 # xchgb %r12b, (%edx)")
#define XCHG_R12B_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X86, 0X27 # xchgb %r12b, (%edi)")
#define XCHG_R12B_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X86, 0X26 # xchgb %r12b, (%esi)")
#define XCHG_R12B_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X86, 0X65, 0X00 # xchgb %r12b, (%ebp)")
#define XCHG_R12B_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X86, 0X24, 0X24 # xchgb %r12b, (%esp)")

#define XCHG_R13B_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X86, 0X28 # xchgb %r13b, (%rax)")
#define XCHG_R13B_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X86, 0X2B # xchgb %r13b, (%rbx)")
#define XCHG_R13B_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X86, 0X29 # xchgb %r13b, (%rcx)")
#define XCHG_R13B_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X86, 0X2A # xchgb %r13b, (%rdx)")
#define XCHG_R13B_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X86, 0X2F # xchgb %r13b, (%rdi)")
#define XCHG_R13B_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X86, 0X2E # xchgb %r13b, (%rsi)")
#define XCHG_R13B_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X86, 0X6D, 0X00 # xchgb %r13b, (%rbp)")
#define XCHG_R13B_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X86, 0X2C, 0X24 # xchgb %r13b, (%rsp)")
#define XCHG_R13B_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X86, 0X28 # xchgb %r13b, (%r8)")
#define XCHG_R13B_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X86, 0X29 # xchgb %r13b, (%r9)")
#define XCHG_R13B_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X86, 0X2A # xchgb %r13b, (%r10)")
#define XCHG_R13B_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X86, 0X2B # xchgb %r13b, (%r11)")
#define XCHG_R13B_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X86, 0X2C, 0X24 # xchgb %r13b, (%r12)")
#define XCHG_R13B_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X86, 0X6D, 0X00 # xchgb %r13b, (%r13)")
#define XCHG_R13B_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X86, 0X2E # xchgb %r13b, (%r14)")
#define XCHG_R13B_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X86, 0X2F # xchgb %r13b, (%r15)")
#define XCHG_R13B_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X86, 0X28 # xchgb %r13b, (%eax)")
#define XCHG_R13B_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X86, 0X2B # xchgb %r13b, (%ebx)")
#define XCHG_R13B_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X86, 0X29 # xchgb %r13b, (%ecx)")
#define XCHG_R13B_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X86, 0X2A # xchgb %r13b, (%edx)")
#define XCHG_R13B_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X86, 0X2F # xchgb %r13b, (%edi)")
#define XCHG_R13B_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X86, 0X2E # xchgb %r13b, (%esi)")
#define XCHG_R13B_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X86, 0X6D, 0X00 # xchgb %r13b, (%ebp)")
#define XCHG_R13B_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X86, 0X2C, 0X24 # xchgb %r13b, (%esp)")

#define XCHG_R14B_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X86, 0X30 # xchgb %r14b, (%rax)")
#define XCHG_R14B_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X86, 0X33 # xchgb %r14b, (%rbx)")
#define XCHG_R14B_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X86, 0X31 # xchgb %r14b, (%rcx)")
#define XCHG_R14B_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X86, 0X32 # xchgb %r14b, (%rdx)")
#define XCHG_R14B_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X86, 0X37 # xchgb %r14b, (%rdi)")
#define XCHG_R14B_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X86, 0X36 # xchgb %r14b, (%rsi)")
#define XCHG_R14B_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X86, 0X75, 0X00 # xchgb %r14b, (%rbp)")
#define XCHG_R14B_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X86, 0X34, 0X24 # xchgb %r14b, (%rsp)")
#define XCHG_R14B_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X86, 0X30 # xchgb %r14b, (%r8)")
#define XCHG_R14B_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X86, 0X31 # xchgb %r14b, (%r9)")
#define XCHG_R14B_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X86, 0X32 # xchgb %r14b, (%r10)")
#define XCHG_R14B_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X86, 0X33 # xchgb %r14b, (%r11)")
#define XCHG_R14B_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X86, 0X34, 0X24 # xchgb %r14b, (%r12)")
#define XCHG_R14B_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X86, 0X75, 0X00 # xchgb %r14b, (%r13)")
#define XCHG_R14B_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X86, 0X36 # xchgb %r14b, (%r14)")
#define XCHG_R14B_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X86, 0X37 # xchgb %r14b, (%r15)")
#define XCHG_R14B_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X86, 0X30 # xchgb %r14b, (%eax)")
#define XCHG_R14B_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X86, 0X33 # xchgb %r14b, (%ebx)")
#define XCHG_R14B_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X86, 0X31 # xchgb %r14b, (%ecx)")
#define XCHG_R14B_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X86, 0X32 # xchgb %r14b, (%edx)")
#define XCHG_R14B_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X86, 0X37 # xchgb %r14b, (%edi)")
#define XCHG_R14B_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X86, 0X36 # xchgb %r14b, (%esi)")
#define XCHG_R14B_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X86, 0X75, 0X00 # xchgb %r14b, (%ebp)")
#define XCHG_R14B_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X86, 0X34, 0X24 # xchgb %r14b, (%esp)")

#define XCHG_R15B_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X86, 0X38 # xchgb %r15b, (%rax)")
#define XCHG_R15B_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X86, 0X3B # xchgb %r15b, (%rbx)")
#define XCHG_R15B_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X86, 0X39 # xchgb %r15b, (%rcx)")
#define XCHG_R15B_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X86, 0X3A # xchgb %r15b, (%rdx)")
#define XCHG_R15B_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X86, 0X3F # xchgb %r15b, (%rdi)")
#define XCHG_R15B_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X86, 0X3E # xchgb %r15b, (%rsi)")
#define XCHG_R15B_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X86, 0X7D, 0X00 # xchgb %r15b, (%rbp)")
#define XCHG_R15B_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X86, 0X3C, 0X24 # xchgb %r15b, (%rsp)")
#define XCHG_R15B_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X86, 0X38 # xchgb %r15b, (%r8)")
#define XCHG_R15B_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X86, 0X39 # xchgb %r15b, (%r9)")
#define XCHG_R15B_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X86, 0X3A # xchgb %r15b, (%r10)")
#define XCHG_R15B_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X86, 0X3B # xchgb %r15b, (%r11)")
#define XCHG_R15B_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X86, 0X3C, 0X24 # xchgb %r15b, (%r12)")
#define XCHG_R15B_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X86, 0X7D, 0X00 # xchgb %r15b, (%r13)")
#define XCHG_R15B_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X86, 0X3E # xchgb %r15b, (%r14)")
#define XCHG_R15B_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X86, 0X3F # xchgb %r15b, (%r15)")
#define XCHG_R15B_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X86, 0X38 # xchgb %r15b, (%eax)")
#define XCHG_R15B_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X86, 0X3B # xchgb %r15b, (%ebx)")
#define XCHG_R15B_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X86, 0X39 # xchgb %r15b, (%ecx)")
#define XCHG_R15B_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X86, 0X3A # xchgb %r15b, (%edx)")
#define XCHG_R15B_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X86, 0X3F # xchgb %r15b, (%edi)")
#define XCHG_R15B_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X86, 0X3E # xchgb %r15b, (%esi)")
#define XCHG_R15B_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X86, 0X7D, 0X00 # xchgb %r15b, (%ebp)")
#define XCHG_R15B_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X86, 0X3C, 0X24 # xchgb %r15b, (%esp)")

#define XCHG_AL_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X86, 0X80 # xchgb " _(VALUE) "(%rax), %al")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AL_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X86, 0X83 # xchgb " _(VALUE) "(%rbx), %al")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AL_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X86, 0X81 # xchgb " _(VALUE) "(%rcx), %al")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AL_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X86, 0X82 # xchgb " _(VALUE) "(%rdx), %al")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AL_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X86, 0X87 # xchgb " _(VALUE) "(%rdi), %al")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AL_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X86, 0X86 # xchgb " _(VALUE) "(%rsi), %al")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AL_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X86, 0X85 # xchgb " _(VALUE) "(%rbp), %al")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AL_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X86, 0X84, 0X24 # xchgb " _(VALUE) "(%rsp), %al")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AL_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0X80 # xchgb " _(VALUE) "(%r8), %al")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AL_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0X81 # xchgb " _(VALUE) "(%r9), %al")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AL_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0X82 # xchgb " _(VALUE) "(%r10), %al")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AL_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0X83 # xchgb " _(VALUE) "(%r11), %al")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AL_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0X84, 0X24 # xchgb " _(VALUE) "(%r12), %al")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AL_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0X85 # xchgb " _(VALUE) "(%r13), %al")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AL_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0X86 # xchgb " _(VALUE) "(%r14), %al")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AL_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0X87 # xchgb " _(VALUE) "(%r15), %al")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X86, 0X80 # xchgb " _(VALUE) "(%eax), %al")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X86, 0X83 # xchgb " _(VALUE) "(%ebx), %al")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X86, 0X81 # xchgb " _(VALUE) "(%ecx), %al")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X86, 0X82 # xchgb " _(VALUE) "(%edx), %al")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X86, 0X87 # xchgb " _(VALUE) "(%edi), %al")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X86, 0X86 # xchgb " _(VALUE) "(%esi), %al")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X86, 0X85 # xchgb " _(VALUE) "(%ebp), %al")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X86, 0X84, 0X24 # xchgb " _(VALUE) "(%esp), %al")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_BL_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X86, 0X98 # xchgb " _(VALUE) "(%rax), %bl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BL_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X86, 0X9B # xchgb " _(VALUE) "(%rbx), %bl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BL_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X86, 0X99 # xchgb " _(VALUE) "(%rcx), %bl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BL_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X86, 0X9A # xchgb " _(VALUE) "(%rdx), %bl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BL_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X86, 0X9F # xchgb " _(VALUE) "(%rdi), %bl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BL_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X86, 0X9E # xchgb " _(VALUE) "(%rsi), %bl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BL_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X86, 0X9D # xchgb " _(VALUE) "(%rbp), %bl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BL_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X86, 0X9C, 0X24 # xchgb " _(VALUE) "(%rsp), %bl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BL_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0X98 # xchgb " _(VALUE) "(%r8), %bl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BL_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0X99 # xchgb " _(VALUE) "(%r9), %bl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BL_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0X9A # xchgb " _(VALUE) "(%r10), %bl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BL_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0X9B # xchgb " _(VALUE) "(%r11), %bl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BL_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0X9C, 0X24 # xchgb " _(VALUE) "(%r12), %bl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BL_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0X9D # xchgb " _(VALUE) "(%r13), %bl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BL_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0X9E # xchgb " _(VALUE) "(%r14), %bl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BL_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0X9F # xchgb " _(VALUE) "(%r15), %bl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X86, 0X98 # xchgb " _(VALUE) "(%eax), %bl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X86, 0X9B # xchgb " _(VALUE) "(%ebx), %bl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X86, 0X99 # xchgb " _(VALUE) "(%ecx), %bl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X86, 0X9A # xchgb " _(VALUE) "(%edx), %bl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X86, 0X9F # xchgb " _(VALUE) "(%edi), %bl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X86, 0X9E # xchgb " _(VALUE) "(%esi), %bl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X86, 0X9D # xchgb " _(VALUE) "(%ebp), %bl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X86, 0X9C, 0X24 # xchgb " _(VALUE) "(%esp), %bl")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_CL_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X86, 0X88 # xchgb " _(VALUE) "(%rax), %cl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CL_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X86, 0X8B # xchgb " _(VALUE) "(%rbx), %cl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CL_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X86, 0X89 # xchgb " _(VALUE) "(%rcx), %cl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CL_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X86, 0X8A # xchgb " _(VALUE) "(%rdx), %cl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CL_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X86, 0X8F # xchgb " _(VALUE) "(%rdi), %cl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CL_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X86, 0X8E # xchgb " _(VALUE) "(%rsi), %cl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CL_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X86, 0X8D # xchgb " _(VALUE) "(%rbp), %cl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CL_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X86, 0X8C, 0X24 # xchgb " _(VALUE) "(%rsp), %cl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CL_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0X88 # xchgb " _(VALUE) "(%r8), %cl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CL_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0X89 # xchgb " _(VALUE) "(%r9), %cl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CL_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0X8A # xchgb " _(VALUE) "(%r10), %cl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CL_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0X8B # xchgb " _(VALUE) "(%r11), %cl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CL_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0X8C, 0X24 # xchgb " _(VALUE) "(%r12), %cl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CL_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0X8D # xchgb " _(VALUE) "(%r13), %cl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CL_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0X8E # xchgb " _(VALUE) "(%r14), %cl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CL_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0X8F # xchgb " _(VALUE) "(%r15), %cl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X86, 0X88 # xchgb " _(VALUE) "(%eax), %cl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X86, 0X8B # xchgb " _(VALUE) "(%ebx), %cl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X86, 0X89 # xchgb " _(VALUE) "(%ecx), %cl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X86, 0X8A # xchgb " _(VALUE) "(%edx), %cl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X86, 0X8F # xchgb " _(VALUE) "(%edi), %cl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X86, 0X8E # xchgb " _(VALUE) "(%esi), %cl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X86, 0X8D # xchgb " _(VALUE) "(%ebp), %cl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X86, 0X8C, 0X24 # xchgb " _(VALUE) "(%esp), %cl")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_DL_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X86, 0X90 # xchgb " _(VALUE) "(%rax), %dl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DL_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X86, 0X93 # xchgb " _(VALUE) "(%rbx), %dl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DL_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X86, 0X91 # xchgb " _(VALUE) "(%rcx), %dl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DL_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X86, 0X92 # xchgb " _(VALUE) "(%rdx), %dl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DL_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X86, 0X97 # xchgb " _(VALUE) "(%rdi), %dl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DL_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X86, 0X96 # xchgb " _(VALUE) "(%rsi), %dl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DL_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X86, 0X95 # xchgb " _(VALUE) "(%rbp), %dl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DL_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X86, 0X94, 0X24 # xchgb " _(VALUE) "(%rsp), %dl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DL_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0X90 # xchgb " _(VALUE) "(%r8), %dl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DL_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0X91 # xchgb " _(VALUE) "(%r9), %dl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DL_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0X92 # xchgb " _(VALUE) "(%r10), %dl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DL_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0X93 # xchgb " _(VALUE) "(%r11), %dl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DL_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0X94, 0X24 # xchgb " _(VALUE) "(%r12), %dl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DL_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0X95 # xchgb " _(VALUE) "(%r13), %dl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DL_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0X96 # xchgb " _(VALUE) "(%r14), %dl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DL_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0X97 # xchgb " _(VALUE) "(%r15), %dl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X86, 0X90 # xchgb " _(VALUE) "(%eax), %dl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X86, 0X93 # xchgb " _(VALUE) "(%ebx), %dl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X86, 0X91 # xchgb " _(VALUE) "(%ecx), %dl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X86, 0X92 # xchgb " _(VALUE) "(%edx), %dl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X86, 0X97 # xchgb " _(VALUE) "(%edi), %dl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X86, 0X96 # xchgb " _(VALUE) "(%esi), %dl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X86, 0X95 # xchgb " _(VALUE) "(%ebp), %dl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X86, 0X94, 0X24 # xchgb " _(VALUE) "(%esp), %dl")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_DIL_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X86, 0XB8 # xchgb " _(VALUE) "(%rax), %dil")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DIL_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X86, 0XBB # xchgb " _(VALUE) "(%rbx), %dil")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DIL_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X86, 0XB9 # xchgb " _(VALUE) "(%rcx), %dil")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DIL_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X86, 0XBA # xchgb " _(VALUE) "(%rdx), %dil")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DIL_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X86, 0XBF # xchgb " _(VALUE) "(%rdi), %dil")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DIL_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X86, 0XBE # xchgb " _(VALUE) "(%rsi), %dil")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DIL_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X86, 0XBD # xchgb " _(VALUE) "(%rbp), %dil")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DIL_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X86, 0XBC, 0X24 # xchgb " _(VALUE) "(%rsp), %dil")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DIL_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0XB8 # xchgb " _(VALUE) "(%r8), %dil")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DIL_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0XB9 # xchgb " _(VALUE) "(%r9), %dil")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DIL_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0XBA # xchgb " _(VALUE) "(%r10), %dil")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DIL_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0XBB # xchgb " _(VALUE) "(%r11), %dil")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DIL_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0XBC, 0X24 # xchgb " _(VALUE) "(%r12), %dil")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DIL_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0XBD # xchgb " _(VALUE) "(%r13), %dil")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DIL_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0XBE # xchgb " _(VALUE) "(%r14), %dil")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DIL_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0XBF # xchgb " _(VALUE) "(%r15), %dil")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DIL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X86, 0XB8 # xchgb " _(VALUE) "(%eax), %dil")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DIL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X86, 0XBB # xchgb " _(VALUE) "(%ebx), %dil")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DIL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X86, 0XB9 # xchgb " _(VALUE) "(%ecx), %dil")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DIL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X86, 0XBA # xchgb " _(VALUE) "(%edx), %dil")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DIL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X86, 0XBF # xchgb " _(VALUE) "(%edi), %dil")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DIL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X86, 0XBE # xchgb " _(VALUE) "(%esi), %dil")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DIL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X86, 0XBD # xchgb " _(VALUE) "(%ebp), %dil")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DIL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X86, 0XBC, 0X24 # xchgb " _(VALUE) "(%esp), %dil")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_SIL_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X86, 0XB0 # xchgb " _(VALUE) "(%rax), %sil")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SIL_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X86, 0XB3 # xchgb " _(VALUE) "(%rbx), %sil")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SIL_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X86, 0XB1 # xchgb " _(VALUE) "(%rcx), %sil")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SIL_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X86, 0XB2 # xchgb " _(VALUE) "(%rdx), %sil")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SIL_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X86, 0XB7 # xchgb " _(VALUE) "(%rdi), %sil")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SIL_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X86, 0XB6 # xchgb " _(VALUE) "(%rsi), %sil")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SIL_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X86, 0XB5 # xchgb " _(VALUE) "(%rbp), %sil")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SIL_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X86, 0XB4, 0X24 # xchgb " _(VALUE) "(%rsp), %sil")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SIL_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0XB0 # xchgb " _(VALUE) "(%r8), %sil")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SIL_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0XB1 # xchgb " _(VALUE) "(%r9), %sil")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SIL_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0XB2 # xchgb " _(VALUE) "(%r10), %sil")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SIL_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0XB3 # xchgb " _(VALUE) "(%r11), %sil")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SIL_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0XB4, 0X24 # xchgb " _(VALUE) "(%r12), %sil")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SIL_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0XB5 # xchgb " _(VALUE) "(%r13), %sil")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SIL_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0XB6 # xchgb " _(VALUE) "(%r14), %sil")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SIL_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0XB7 # xchgb " _(VALUE) "(%r15), %sil")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SIL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X86, 0XB0 # xchgb " _(VALUE) "(%eax), %sil")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SIL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X86, 0XB3 # xchgb " _(VALUE) "(%ebx), %sil")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SIL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X86, 0XB1 # xchgb " _(VALUE) "(%ecx), %sil")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SIL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X86, 0XB2 # xchgb " _(VALUE) "(%edx), %sil")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SIL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X86, 0XB7 # xchgb " _(VALUE) "(%edi), %sil")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SIL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X86, 0XB6 # xchgb " _(VALUE) "(%esi), %sil")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SIL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X86, 0XB5 # xchgb " _(VALUE) "(%ebp), %sil")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SIL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X86, 0XB4, 0X24 # xchgb " _(VALUE) "(%esp), %sil")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_BPL_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X86, 0XA8 # xchgb " _(VALUE) "(%rax), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BPL_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X86, 0XAB # xchgb " _(VALUE) "(%rbx), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BPL_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X86, 0XA9 # xchgb " _(VALUE) "(%rcx), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BPL_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X86, 0XAA # xchgb " _(VALUE) "(%rdx), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BPL_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X86, 0XAF # xchgb " _(VALUE) "(%rdi), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BPL_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X86, 0XAE # xchgb " _(VALUE) "(%rsi), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BPL_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X86, 0XAD # xchgb " _(VALUE) "(%rbp), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BPL_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X86, 0XAC, 0X24 # xchgb " _(VALUE) "(%rsp), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BPL_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0XA8 # xchgb " _(VALUE) "(%r8), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BPL_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0XA9 # xchgb " _(VALUE) "(%r9), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BPL_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0XAA # xchgb " _(VALUE) "(%r10), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BPL_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0XAB # xchgb " _(VALUE) "(%r11), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BPL_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0XAC, 0X24 # xchgb " _(VALUE) "(%r12), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BPL_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0XAD # xchgb " _(VALUE) "(%r13), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BPL_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0XAE # xchgb " _(VALUE) "(%r14), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BPL_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0XAF # xchgb " _(VALUE) "(%r15), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BPL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X86, 0XA8 # xchgb " _(VALUE) "(%eax), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BPL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X86, 0XAB # xchgb " _(VALUE) "(%ebx), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BPL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X86, 0XA9 # xchgb " _(VALUE) "(%ecx), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BPL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X86, 0XAA # xchgb " _(VALUE) "(%edx), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BPL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X86, 0XAF # xchgb " _(VALUE) "(%edi), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BPL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X86, 0XAE # xchgb " _(VALUE) "(%esi), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BPL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X86, 0XAD # xchgb " _(VALUE) "(%ebp), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BPL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X86, 0XAC, 0X24 # xchgb " _(VALUE) "(%esp), %bpl")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_SPL_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X86, 0XA0 # xchgb " _(VALUE) "(%rax), %spl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SPL_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X86, 0XA3 # xchgb " _(VALUE) "(%rbx), %spl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SPL_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X86, 0XA1 # xchgb " _(VALUE) "(%rcx), %spl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SPL_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X86, 0XA2 # xchgb " _(VALUE) "(%rdx), %spl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SPL_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X86, 0XA7 # xchgb " _(VALUE) "(%rdi), %spl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SPL_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X86, 0XA6 # xchgb " _(VALUE) "(%rsi), %spl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SPL_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X86, 0XA5 # xchgb " _(VALUE) "(%rbp), %spl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SPL_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X86, 0XA4, 0X24 # xchgb " _(VALUE) "(%rsp), %spl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SPL_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0XA0 # xchgb " _(VALUE) "(%r8), %spl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SPL_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0XA1 # xchgb " _(VALUE) "(%r9), %spl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SPL_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0XA2 # xchgb " _(VALUE) "(%r10), %spl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SPL_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0XA3 # xchgb " _(VALUE) "(%r11), %spl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SPL_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0XA4, 0X24 # xchgb " _(VALUE) "(%r12), %spl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SPL_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0XA5 # xchgb " _(VALUE) "(%r13), %spl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SPL_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0XA6 # xchgb " _(VALUE) "(%r14), %spl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SPL_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0XA7 # xchgb " _(VALUE) "(%r15), %spl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SPL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X86, 0XA0 # xchgb " _(VALUE) "(%eax), %spl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SPL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X86, 0XA3 # xchgb " _(VALUE) "(%ebx), %spl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SPL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X86, 0XA1 # xchgb " _(VALUE) "(%ecx), %spl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SPL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X86, 0XA2 # xchgb " _(VALUE) "(%edx), %spl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SPL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X86, 0XA7 # xchgb " _(VALUE) "(%edi), %spl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SPL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X86, 0XA6 # xchgb " _(VALUE) "(%esi), %spl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SPL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X86, 0XA5 # xchgb " _(VALUE) "(%ebp), %spl")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SPL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X86, 0XA4, 0X24 # xchgb " _(VALUE) "(%esp), %spl")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_R8B_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0X80 # xchgb " _(VALUE) "(%rax), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8B_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0X83 # xchgb " _(VALUE) "(%rbx), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8B_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0X81 # xchgb " _(VALUE) "(%rcx), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8B_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0X82 # xchgb " _(VALUE) "(%rdx), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8B_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0X87 # xchgb " _(VALUE) "(%rdi), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8B_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0X86 # xchgb " _(VALUE) "(%rsi), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8B_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0X85 # xchgb " _(VALUE) "(%rbp), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8B_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0X84, 0X24 # xchgb " _(VALUE) "(%rsp), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8B_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0X80 # xchgb " _(VALUE) "(%r8), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8B_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0X81 # xchgb " _(VALUE) "(%r9), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8B_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0X82 # xchgb " _(VALUE) "(%r10), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8B_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0X83 # xchgb " _(VALUE) "(%r11), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8B_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0X84, 0X24 # xchgb " _(VALUE) "(%r12), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8B_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0X85 # xchgb " _(VALUE) "(%r13), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8B_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0X86 # xchgb " _(VALUE) "(%r14), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8B_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0X87 # xchgb " _(VALUE) "(%r15), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8B_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0X80 # xchgb " _(VALUE) "(%eax), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8B_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0X83 # xchgb " _(VALUE) "(%ebx), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8B_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0X81 # xchgb " _(VALUE) "(%ecx), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8B_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0X82 # xchgb " _(VALUE) "(%edx), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8B_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0X87 # xchgb " _(VALUE) "(%edi), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8B_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0X86 # xchgb " _(VALUE) "(%esi), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8B_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0X85 # xchgb " _(VALUE) "(%ebp), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8B_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0X84, 0X24 # xchgb " _(VALUE) "(%esp), %r8b")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_R9B_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0X88 # xchgb " _(VALUE) "(%rax), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9B_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0X8B # xchgb " _(VALUE) "(%rbx), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9B_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0X89 # xchgb " _(VALUE) "(%rcx), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9B_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0X8A # xchgb " _(VALUE) "(%rdx), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9B_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0X8F # xchgb " _(VALUE) "(%rdi), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9B_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0X8E # xchgb " _(VALUE) "(%rsi), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9B_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0X8D # xchgb " _(VALUE) "(%rbp), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9B_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0X8C, 0X24 # xchgb " _(VALUE) "(%rsp), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9B_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0X88 # xchgb " _(VALUE) "(%r8), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9B_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0X89 # xchgb " _(VALUE) "(%r9), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9B_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0X8A # xchgb " _(VALUE) "(%r10), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9B_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0X8B # xchgb " _(VALUE) "(%r11), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9B_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0X8C, 0X24 # xchgb " _(VALUE) "(%r12), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9B_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0X8D # xchgb " _(VALUE) "(%r13), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9B_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0X8E # xchgb " _(VALUE) "(%r14), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9B_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0X8F # xchgb " _(VALUE) "(%r15), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9B_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0X88 # xchgb " _(VALUE) "(%eax), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9B_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0X8B # xchgb " _(VALUE) "(%ebx), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9B_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0X89 # xchgb " _(VALUE) "(%ecx), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9B_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0X8A # xchgb " _(VALUE) "(%edx), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9B_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0X8F # xchgb " _(VALUE) "(%edi), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9B_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0X8E # xchgb " _(VALUE) "(%esi), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9B_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0X8D # xchgb " _(VALUE) "(%ebp), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9B_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0X8C, 0X24 # xchgb " _(VALUE) "(%esp), %r9b")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_R10B_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0X90 # xchgb " _(VALUE) "(%rax), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10B_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0X93 # xchgb " _(VALUE) "(%rbx), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10B_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0X91 # xchgb " _(VALUE) "(%rcx), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10B_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0X92 # xchgb " _(VALUE) "(%rdx), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10B_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0X97 # xchgb " _(VALUE) "(%rdi), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10B_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0X96 # xchgb " _(VALUE) "(%rsi), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10B_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0X95 # xchgb " _(VALUE) "(%rbp), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10B_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0X94, 0X24 # xchgb " _(VALUE) "(%rsp), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10B_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0X90 # xchgb " _(VALUE) "(%r8), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10B_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0X91 # xchgb " _(VALUE) "(%r9), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10B_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0X92 # xchgb " _(VALUE) "(%r10), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10B_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0X93 # xchgb " _(VALUE) "(%r11), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10B_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0X94, 0X24 # xchgb " _(VALUE) "(%r12), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10B_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0X95 # xchgb " _(VALUE) "(%r13), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10B_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0X96 # xchgb " _(VALUE) "(%r14), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10B_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0X97 # xchgb " _(VALUE) "(%r15), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10B_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0X90 # xchgb " _(VALUE) "(%eax), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10B_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0X93 # xchgb " _(VALUE) "(%ebx), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10B_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0X91 # xchgb " _(VALUE) "(%ecx), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10B_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0X92 # xchgb " _(VALUE) "(%edx), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10B_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0X97 # xchgb " _(VALUE) "(%edi), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10B_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0X96 # xchgb " _(VALUE) "(%esi), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10B_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0X95 # xchgb " _(VALUE) "(%ebp), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10B_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0X94, 0X24 # xchgb " _(VALUE) "(%esp), %r10b")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_R11B_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0X98 # xchgb " _(VALUE) "(%rax), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11B_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0X9B # xchgb " _(VALUE) "(%rbx), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11B_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0X99 # xchgb " _(VALUE) "(%rcx), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11B_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0X9A # xchgb " _(VALUE) "(%rdx), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11B_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0X9F # xchgb " _(VALUE) "(%rdi), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11B_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0X9E # xchgb " _(VALUE) "(%rsi), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11B_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0X9D # xchgb " _(VALUE) "(%rbp), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11B_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0X9C, 0X24 # xchgb " _(VALUE) "(%rsp), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11B_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0X98 # xchgb " _(VALUE) "(%r8), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11B_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0X99 # xchgb " _(VALUE) "(%r9), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11B_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0X9A # xchgb " _(VALUE) "(%r10), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11B_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0X9B # xchgb " _(VALUE) "(%r11), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11B_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0X9C, 0X24 # xchgb " _(VALUE) "(%r12), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11B_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0X9D # xchgb " _(VALUE) "(%r13), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11B_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0X9E # xchgb " _(VALUE) "(%r14), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11B_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0X9F # xchgb " _(VALUE) "(%r15), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11B_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0X98 # xchgb " _(VALUE) "(%eax), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11B_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0X9B # xchgb " _(VALUE) "(%ebx), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11B_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0X99 # xchgb " _(VALUE) "(%ecx), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11B_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0X9A # xchgb " _(VALUE) "(%edx), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11B_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0X9F # xchgb " _(VALUE) "(%edi), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11B_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0X9E # xchgb " _(VALUE) "(%esi), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11B_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0X9D # xchgb " _(VALUE) "(%ebp), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11B_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0X9C, 0X24 # xchgb " _(VALUE) "(%esp), %r11b")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_R12B_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0XA0 # xchgb " _(VALUE) "(%rax), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12B_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0XA3 # xchgb " _(VALUE) "(%rbx), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12B_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0XA1 # xchgb " _(VALUE) "(%rcx), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12B_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0XA2 # xchgb " _(VALUE) "(%rdx), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12B_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0XA7 # xchgb " _(VALUE) "(%rdi), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12B_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0XA6 # xchgb " _(VALUE) "(%rsi), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12B_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0XA5 # xchgb " _(VALUE) "(%rbp), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12B_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0XA4, 0X24 # xchgb " _(VALUE) "(%rsp), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12B_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0XA0 # xchgb " _(VALUE) "(%r8), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12B_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0XA1 # xchgb " _(VALUE) "(%r9), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12B_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0XA2 # xchgb " _(VALUE) "(%r10), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12B_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0XA3 # xchgb " _(VALUE) "(%r11), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12B_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0XA4, 0X24 # xchgb " _(VALUE) "(%r12), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12B_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0XA5 # xchgb " _(VALUE) "(%r13), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12B_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0XA6 # xchgb " _(VALUE) "(%r14), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12B_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0XA7 # xchgb " _(VALUE) "(%r15), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12B_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0XA0 # xchgb " _(VALUE) "(%eax), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12B_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0XA3 # xchgb " _(VALUE) "(%ebx), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12B_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0XA1 # xchgb " _(VALUE) "(%ecx), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12B_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0XA2 # xchgb " _(VALUE) "(%edx), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12B_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0XA7 # xchgb " _(VALUE) "(%edi), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12B_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0XA6 # xchgb " _(VALUE) "(%esi), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12B_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0XA5 # xchgb " _(VALUE) "(%ebp), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12B_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0XA4, 0X24 # xchgb " _(VALUE) "(%esp), %r12b")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_R13B_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0XA8 # xchgb " _(VALUE) "(%rax), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13B_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0XAB # xchgb " _(VALUE) "(%rbx), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13B_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0XA9 # xchgb " _(VALUE) "(%rcx), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13B_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0XAA # xchgb " _(VALUE) "(%rdx), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13B_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0XAF # xchgb " _(VALUE) "(%rdi), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13B_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0XAE # xchgb " _(VALUE) "(%rsi), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13B_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0XAD # xchgb " _(VALUE) "(%rbp), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13B_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0XAC, 0X24 # xchgb " _(VALUE) "(%rsp), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13B_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0XA8 # xchgb " _(VALUE) "(%r8), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13B_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0XA9 # xchgb " _(VALUE) "(%r9), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13B_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0XAA # xchgb " _(VALUE) "(%r10), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13B_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0XAB # xchgb " _(VALUE) "(%r11), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13B_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0XAC, 0X24 # xchgb " _(VALUE) "(%r12), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13B_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0XAD # xchgb " _(VALUE) "(%r13), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13B_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0XAE # xchgb " _(VALUE) "(%r14), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13B_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0XAF # xchgb " _(VALUE) "(%r15), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13B_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0XA8 # xchgb " _(VALUE) "(%eax), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13B_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0XAB # xchgb " _(VALUE) "(%ebx), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13B_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0XA9 # xchgb " _(VALUE) "(%ecx), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13B_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0XAA # xchgb " _(VALUE) "(%edx), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13B_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0XAF # xchgb " _(VALUE) "(%edi), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13B_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0XAE # xchgb " _(VALUE) "(%esi), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13B_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0XAD # xchgb " _(VALUE) "(%ebp), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13B_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0XAC, 0X24 # xchgb " _(VALUE) "(%esp), %r13b")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_R14B_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0XB0 # xchgb " _(VALUE) "(%rax), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14B_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0XB3 # xchgb " _(VALUE) "(%rbx), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14B_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0XB1 # xchgb " _(VALUE) "(%rcx), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14B_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0XB2 # xchgb " _(VALUE) "(%rdx), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14B_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0XB7 # xchgb " _(VALUE) "(%rdi), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14B_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0XB6 # xchgb " _(VALUE) "(%rsi), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14B_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0XB5 # xchgb " _(VALUE) "(%rbp), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14B_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0XB4, 0X24 # xchgb " _(VALUE) "(%rsp), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14B_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0XB0 # xchgb " _(VALUE) "(%r8), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14B_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0XB1 # xchgb " _(VALUE) "(%r9), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14B_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0XB2 # xchgb " _(VALUE) "(%r10), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14B_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0XB3 # xchgb " _(VALUE) "(%r11), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14B_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0XB4, 0X24 # xchgb " _(VALUE) "(%r12), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14B_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0XB5 # xchgb " _(VALUE) "(%r13), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14B_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0XB6 # xchgb " _(VALUE) "(%r14), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14B_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0XB7 # xchgb " _(VALUE) "(%r15), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14B_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0XB0 # xchgb " _(VALUE) "(%eax), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14B_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0XB3 # xchgb " _(VALUE) "(%ebx), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14B_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0XB1 # xchgb " _(VALUE) "(%ecx), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14B_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0XB2 # xchgb " _(VALUE) "(%edx), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14B_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0XB7 # xchgb " _(VALUE) "(%edi), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14B_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0XB6 # xchgb " _(VALUE) "(%esi), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14B_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0XB5 # xchgb " _(VALUE) "(%ebp), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14B_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0XB4, 0X24 # xchgb " _(VALUE) "(%esp), %r14b")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_R15B_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0XB8 # xchgb " _(VALUE) "(%rax), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15B_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0XBB # xchgb " _(VALUE) "(%rbx), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15B_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0XB9 # xchgb " _(VALUE) "(%rcx), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15B_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0XBA # xchgb " _(VALUE) "(%rdx), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15B_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0XBF # xchgb " _(VALUE) "(%rdi), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15B_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0XBE # xchgb " _(VALUE) "(%rsi), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15B_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0XBD # xchgb " _(VALUE) "(%rbp), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15B_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0XBC, 0X24 # xchgb " _(VALUE) "(%rsp), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15B_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0XB8 # xchgb " _(VALUE) "(%r8), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15B_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0XB9 # xchgb " _(VALUE) "(%r9), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15B_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0XBA # xchgb " _(VALUE) "(%r10), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15B_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0XBB # xchgb " _(VALUE) "(%r11), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15B_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0XBC, 0X24 # xchgb " _(VALUE) "(%r12), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15B_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0XBD # xchgb " _(VALUE) "(%r13), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15B_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0XBE # xchgb " _(VALUE) "(%r14), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15B_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0XBF # xchgb " _(VALUE) "(%r15), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15B_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0XB8 # xchgb " _(VALUE) "(%eax), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15B_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0XBB # xchgb " _(VALUE) "(%ebx), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15B_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0XB9 # xchgb " _(VALUE) "(%ecx), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15B_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0XBA # xchgb " _(VALUE) "(%edx), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15B_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0XBF # xchgb " _(VALUE) "(%edi), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15B_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0XBE # xchgb " _(VALUE) "(%esi), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15B_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0XBD # xchgb " _(VALUE) "(%ebp), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15B_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0XBC, 0X24 # xchgb " _(VALUE) "(%esp), %r15b")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_AL_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X86, 0X80 # xchgb %al, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AL_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X86, 0X83 # xchgb %al, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AL_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X86, 0X81 # xchgb %al, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AL_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X86, 0X82 # xchgb %al, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AL_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X86, 0X87 # xchgb %al, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AL_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X86, 0X86 # xchgb %al, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AL_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X86, 0X85 # xchgb %al, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AL_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X86, 0X84, 0X24 # xchgb %al, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AL_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0X80 # xchgb %al, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AL_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0X81 # xchgb %al, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AL_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0X82 # xchgb %al, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AL_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0X83 # xchgb %al, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AL_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0X84, 0X24 # xchgb %al, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AL_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0X85 # xchgb %al, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AL_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0X86 # xchgb %al, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AL_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0X87 # xchgb %al, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X86, 0X80 # xchgb %al, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X86, 0X83 # xchgb %al, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X86, 0X81 # xchgb %al, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X86, 0X82 # xchgb %al, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X86, 0X87 # xchgb %al, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X86, 0X86 # xchgb %al, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X86, 0X85 # xchgb %al, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X86, 0X84, 0X24 # xchgb %al, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_BL_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X86, 0X98 # xchgb %bl, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BL_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X86, 0X9B # xchgb %bl, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BL_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X86, 0X99 # xchgb %bl, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BL_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X86, 0X9A # xchgb %bl, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BL_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X86, 0X9F # xchgb %bl, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BL_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X86, 0X9E # xchgb %bl, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BL_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X86, 0X9D # xchgb %bl, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BL_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X86, 0X9C, 0X24 # xchgb %bl, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BL_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0X98 # xchgb %bl, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BL_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0X99 # xchgb %bl, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BL_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0X9A # xchgb %bl, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BL_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0X9B # xchgb %bl, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BL_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0X9C, 0X24 # xchgb %bl, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BL_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0X9D # xchgb %bl, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BL_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0X9E # xchgb %bl, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BL_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0X9F # xchgb %bl, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X86, 0X98 # xchgb %bl, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X86, 0X9B # xchgb %bl, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X86, 0X99 # xchgb %bl, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X86, 0X9A # xchgb %bl, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X86, 0X9F # xchgb %bl, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X86, 0X9E # xchgb %bl, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X86, 0X9D # xchgb %bl, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X86, 0X9C, 0X24 # xchgb %bl, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_CL_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X86, 0X88 # xchgb %cl, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CL_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X86, 0X8B # xchgb %cl, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CL_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X86, 0X89 # xchgb %cl, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CL_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X86, 0X8A # xchgb %cl, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CL_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X86, 0X8F # xchgb %cl, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CL_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X86, 0X8E # xchgb %cl, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CL_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X86, 0X8D # xchgb %cl, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CL_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X86, 0X8C, 0X24 # xchgb %cl, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CL_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0X88 # xchgb %cl, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CL_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0X89 # xchgb %cl, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CL_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0X8A # xchgb %cl, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CL_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0X8B # xchgb %cl, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CL_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0X8C, 0X24 # xchgb %cl, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CL_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0X8D # xchgb %cl, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CL_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0X8E # xchgb %cl, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CL_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0X8F # xchgb %cl, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X86, 0X88 # xchgb %cl, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X86, 0X8B # xchgb %cl, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X86, 0X89 # xchgb %cl, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X86, 0X8A # xchgb %cl, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X86, 0X8F # xchgb %cl, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X86, 0X8E # xchgb %cl, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X86, 0X8D # xchgb %cl, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X86, 0X8C, 0X24 # xchgb %cl, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_DL_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X86, 0X90 # xchgb %dl, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DL_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X86, 0X93 # xchgb %dl, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DL_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X86, 0X91 # xchgb %dl, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DL_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X86, 0X92 # xchgb %dl, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DL_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X86, 0X97 # xchgb %dl, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DL_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X86, 0X96 # xchgb %dl, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DL_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X86, 0X95 # xchgb %dl, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DL_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X86, 0X94, 0X24 # xchgb %dl, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DL_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0X90 # xchgb %dl, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DL_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0X91 # xchgb %dl, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DL_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0X92 # xchgb %dl, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DL_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0X93 # xchgb %dl, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DL_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0X94, 0X24 # xchgb %dl, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DL_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0X95 # xchgb %dl, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DL_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0X96 # xchgb %dl, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DL_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0X97 # xchgb %dl, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X86, 0X90 # xchgb %dl, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X86, 0X93 # xchgb %dl, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X86, 0X91 # xchgb %dl, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X86, 0X92 # xchgb %dl, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X86, 0X97 # xchgb %dl, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X86, 0X96 # xchgb %dl, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X86, 0X95 # xchgb %dl, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X86, 0X94, 0X24 # xchgb %dl, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_DIL_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X86, 0XB8 # xchgb %dil, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DIL_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X86, 0XBB # xchgb %dil, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DIL_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X86, 0XB9 # xchgb %dil, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DIL_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X86, 0XBA # xchgb %dil, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DIL_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X86, 0XBF # xchgb %dil, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DIL_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X86, 0XBE # xchgb %dil, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DIL_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X86, 0XBD # xchgb %dil, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DIL_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X86, 0XBC, 0X24 # xchgb %dil, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DIL_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0XB8 # xchgb %dil, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DIL_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0XB9 # xchgb %dil, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DIL_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0XBA # xchgb %dil, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DIL_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0XBB # xchgb %dil, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DIL_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0XBC, 0X24 # xchgb %dil, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DIL_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0XBD # xchgb %dil, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DIL_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0XBE # xchgb %dil, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DIL_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0XBF # xchgb %dil, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DIL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X86, 0XB8 # xchgb %dil, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DIL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X86, 0XBB # xchgb %dil, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DIL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X86, 0XB9 # xchgb %dil, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DIL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X86, 0XBA # xchgb %dil, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DIL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X86, 0XBF # xchgb %dil, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DIL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X86, 0XBE # xchgb %dil, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DIL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X86, 0XBD # xchgb %dil, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DIL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X86, 0XBC, 0X24 # xchgb %dil, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_SIL_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X86, 0XB0 # xchgb %sil, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SIL_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X86, 0XB3 # xchgb %sil, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SIL_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X86, 0XB1 # xchgb %sil, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SIL_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X86, 0XB2 # xchgb %sil, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SIL_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X86, 0XB7 # xchgb %sil, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SIL_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X86, 0XB6 # xchgb %sil, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SIL_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X86, 0XB5 # xchgb %sil, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SIL_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X86, 0XB4, 0X24 # xchgb %sil, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SIL_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0XB0 # xchgb %sil, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SIL_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0XB1 # xchgb %sil, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SIL_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0XB2 # xchgb %sil, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SIL_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0XB3 # xchgb %sil, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SIL_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0XB4, 0X24 # xchgb %sil, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SIL_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0XB5 # xchgb %sil, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SIL_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0XB6 # xchgb %sil, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SIL_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0XB7 # xchgb %sil, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SIL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X86, 0XB0 # xchgb %sil, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SIL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X86, 0XB3 # xchgb %sil, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SIL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X86, 0XB1 # xchgb %sil, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SIL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X86, 0XB2 # xchgb %sil, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SIL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X86, 0XB7 # xchgb %sil, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SIL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X86, 0XB6 # xchgb %sil, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SIL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X86, 0XB5 # xchgb %sil, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SIL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X86, 0XB4, 0X24 # xchgb %sil, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_BPL_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X86, 0XA8 # xchgb %bpl, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BPL_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X86, 0XAB # xchgb %bpl, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BPL_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X86, 0XA9 # xchgb %bpl, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BPL_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X86, 0XAA # xchgb %bpl, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BPL_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X86, 0XAF # xchgb %bpl, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BPL_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X86, 0XAE # xchgb %bpl, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BPL_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X86, 0XAD # xchgb %bpl, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BPL_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X86, 0XAC, 0X24 # xchgb %bpl, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BPL_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0XA8 # xchgb %bpl, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BPL_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0XA9 # xchgb %bpl, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BPL_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0XAA # xchgb %bpl, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BPL_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0XAB # xchgb %bpl, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BPL_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0XAC, 0X24 # xchgb %bpl, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BPL_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0XAD # xchgb %bpl, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BPL_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0XAE # xchgb %bpl, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BPL_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0XAF # xchgb %bpl, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BPL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X86, 0XA8 # xchgb %bpl, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BPL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X86, 0XAB # xchgb %bpl, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BPL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X86, 0XA9 # xchgb %bpl, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BPL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X86, 0XAA # xchgb %bpl, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BPL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X86, 0XAF # xchgb %bpl, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BPL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X86, 0XAE # xchgb %bpl, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BPL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X86, 0XAD # xchgb %bpl, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BPL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X86, 0XAC, 0X24 # xchgb %bpl, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_SPL_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X86, 0XA0 # xchgb %spl, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SPL_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X86, 0XA3 # xchgb %spl, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SPL_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X86, 0XA1 # xchgb %spl, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SPL_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X86, 0XA2 # xchgb %spl, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SPL_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X86, 0XA7 # xchgb %spl, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SPL_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X86, 0XA6 # xchgb %spl, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SPL_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X86, 0XA5 # xchgb %spl, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SPL_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X86, 0XA4, 0X24 # xchgb %spl, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SPL_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0XA0 # xchgb %spl, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SPL_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0XA1 # xchgb %spl, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SPL_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0XA2 # xchgb %spl, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SPL_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0XA3 # xchgb %spl, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SPL_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0XA4, 0X24 # xchgb %spl, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SPL_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0XA5 # xchgb %spl, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SPL_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0XA6 # xchgb %spl, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SPL_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X86, 0XA7 # xchgb %spl, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SPL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X86, 0XA0 # xchgb %spl, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SPL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X86, 0XA3 # xchgb %spl, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SPL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X86, 0XA1 # xchgb %spl, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SPL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X86, 0XA2 # xchgb %spl, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SPL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X86, 0XA7 # xchgb %spl, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SPL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X86, 0XA6 # xchgb %spl, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SPL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X86, 0XA5 # xchgb %spl, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SPL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X86, 0XA4, 0X24 # xchgb %spl, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_R8B_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0X80 # xchgb %r8b, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8B_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0X83 # xchgb %r8b, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8B_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0X81 # xchgb %r8b, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8B_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0X82 # xchgb %r8b, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8B_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0X87 # xchgb %r8b, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8B_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0X86 # xchgb %r8b, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8B_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0X85 # xchgb %r8b, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8B_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0X84, 0X24 # xchgb %r8b, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8B_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0X80 # xchgb %r8b, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8B_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0X81 # xchgb %r8b, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8B_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0X82 # xchgb %r8b, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8B_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0X83 # xchgb %r8b, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8B_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0X84, 0X24 # xchgb %r8b, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8B_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0X85 # xchgb %r8b, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8B_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0X86 # xchgb %r8b, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8B_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0X87 # xchgb %r8b, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8B_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0X80 # xchgb %r8b, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8B_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0X83 # xchgb %r8b, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8B_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0X81 # xchgb %r8b, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8B_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0X82 # xchgb %r8b, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8B_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0X87 # xchgb %r8b, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8B_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0X86 # xchgb %r8b, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8B_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0X85 # xchgb %r8b, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8B_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0X84, 0X24 # xchgb %r8b, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_R9B_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0X88 # xchgb %r9b, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9B_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0X8B # xchgb %r9b, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9B_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0X89 # xchgb %r9b, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9B_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0X8A # xchgb %r9b, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9B_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0X8F # xchgb %r9b, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9B_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0X8E # xchgb %r9b, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9B_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0X8D # xchgb %r9b, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9B_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0X8C, 0X24 # xchgb %r9b, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9B_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0X88 # xchgb %r9b, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9B_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0X89 # xchgb %r9b, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9B_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0X8A # xchgb %r9b, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9B_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0X8B # xchgb %r9b, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9B_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0X8C, 0X24 # xchgb %r9b, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9B_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0X8D # xchgb %r9b, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9B_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0X8E # xchgb %r9b, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9B_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0X8F # xchgb %r9b, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9B_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0X88 # xchgb %r9b, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9B_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0X8B # xchgb %r9b, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9B_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0X89 # xchgb %r9b, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9B_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0X8A # xchgb %r9b, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9B_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0X8F # xchgb %r9b, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9B_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0X8E # xchgb %r9b, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9B_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0X8D # xchgb %r9b, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9B_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0X8C, 0X24 # xchgb %r9b, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_R10B_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0X90 # xchgb %r10b, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10B_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0X93 # xchgb %r10b, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10B_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0X91 # xchgb %r10b, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10B_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0X92 # xchgb %r10b, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10B_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0X97 # xchgb %r10b, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10B_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0X96 # xchgb %r10b, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10B_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0X95 # xchgb %r10b, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10B_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0X94, 0X24 # xchgb %r10b, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10B_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0X90 # xchgb %r10b, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10B_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0X91 # xchgb %r10b, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10B_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0X92 # xchgb %r10b, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10B_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0X93 # xchgb %r10b, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10B_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0X94, 0X24 # xchgb %r10b, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10B_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0X95 # xchgb %r10b, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10B_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0X96 # xchgb %r10b, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10B_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0X97 # xchgb %r10b, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10B_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0X90 # xchgb %r10b, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10B_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0X93 # xchgb %r10b, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10B_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0X91 # xchgb %r10b, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10B_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0X92 # xchgb %r10b, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10B_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0X97 # xchgb %r10b, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10B_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0X96 # xchgb %r10b, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10B_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0X95 # xchgb %r10b, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10B_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0X94, 0X24 # xchgb %r10b, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_R11B_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0X98 # xchgb %r11b, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11B_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0X9B # xchgb %r11b, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11B_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0X99 # xchgb %r11b, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11B_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0X9A # xchgb %r11b, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11B_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0X9F # xchgb %r11b, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11B_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0X9E # xchgb %r11b, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11B_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0X9D # xchgb %r11b, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11B_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0X9C, 0X24 # xchgb %r11b, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11B_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0X98 # xchgb %r11b, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11B_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0X99 # xchgb %r11b, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11B_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0X9A # xchgb %r11b, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11B_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0X9B # xchgb %r11b, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11B_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0X9C, 0X24 # xchgb %r11b, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11B_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0X9D # xchgb %r11b, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11B_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0X9E # xchgb %r11b, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11B_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0X9F # xchgb %r11b, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11B_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0X98 # xchgb %r11b, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11B_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0X9B # xchgb %r11b, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11B_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0X99 # xchgb %r11b, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11B_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0X9A # xchgb %r11b, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11B_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0X9F # xchgb %r11b, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11B_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0X9E # xchgb %r11b, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11B_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0X9D # xchgb %r11b, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11B_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0X9C, 0X24 # xchgb %r11b, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_R12B_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0XA0 # xchgb %r12b, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12B_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0XA3 # xchgb %r12b, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12B_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0XA1 # xchgb %r12b, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12B_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0XA2 # xchgb %r12b, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12B_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0XA7 # xchgb %r12b, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12B_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0XA6 # xchgb %r12b, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12B_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0XA5 # xchgb %r12b, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12B_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0XA4, 0X24 # xchgb %r12b, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12B_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0XA0 # xchgb %r12b, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12B_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0XA1 # xchgb %r12b, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12B_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0XA2 # xchgb %r12b, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12B_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0XA3 # xchgb %r12b, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12B_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0XA4, 0X24 # xchgb %r12b, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12B_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0XA5 # xchgb %r12b, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12B_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0XA6 # xchgb %r12b, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12B_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0XA7 # xchgb %r12b, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12B_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0XA0 # xchgb %r12b, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12B_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0XA3 # xchgb %r12b, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12B_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0XA1 # xchgb %r12b, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12B_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0XA2 # xchgb %r12b, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12B_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0XA7 # xchgb %r12b, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12B_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0XA6 # xchgb %r12b, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12B_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0XA5 # xchgb %r12b, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12B_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0XA4, 0X24 # xchgb %r12b, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_R13B_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0XA8 # xchgb %r13b, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13B_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0XAB # xchgb %r13b, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13B_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0XA9 # xchgb %r13b, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13B_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0XAA # xchgb %r13b, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13B_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0XAF # xchgb %r13b, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13B_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0XAE # xchgb %r13b, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13B_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0XAD # xchgb %r13b, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13B_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0XAC, 0X24 # xchgb %r13b, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13B_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0XA8 # xchgb %r13b, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13B_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0XA9 # xchgb %r13b, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13B_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0XAA # xchgb %r13b, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13B_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0XAB # xchgb %r13b, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13B_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0XAC, 0X24 # xchgb %r13b, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13B_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0XAD # xchgb %r13b, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13B_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0XAE # xchgb %r13b, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13B_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0XAF # xchgb %r13b, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13B_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0XA8 # xchgb %r13b, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13B_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0XAB # xchgb %r13b, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13B_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0XA9 # xchgb %r13b, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13B_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0XAA # xchgb %r13b, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13B_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0XAF # xchgb %r13b, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13B_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0XAE # xchgb %r13b, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13B_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0XAD # xchgb %r13b, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13B_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0XAC, 0X24 # xchgb %r13b, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_R14B_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0XB0 # xchgb %r14b, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14B_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0XB3 # xchgb %r14b, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14B_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0XB1 # xchgb %r14b, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14B_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0XB2 # xchgb %r14b, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14B_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0XB7 # xchgb %r14b, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14B_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0XB6 # xchgb %r14b, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14B_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0XB5 # xchgb %r14b, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14B_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0XB4, 0X24 # xchgb %r14b, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14B_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0XB0 # xchgb %r14b, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14B_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0XB1 # xchgb %r14b, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14B_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0XB2 # xchgb %r14b, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14B_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0XB3 # xchgb %r14b, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14B_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0XB4, 0X24 # xchgb %r14b, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14B_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0XB5 # xchgb %r14b, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14B_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0XB6 # xchgb %r14b, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14B_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0XB7 # xchgb %r14b, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14B_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0XB0 # xchgb %r14b, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14B_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0XB3 # xchgb %r14b, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14B_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0XB1 # xchgb %r14b, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14B_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0XB2 # xchgb %r14b, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14B_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0XB7 # xchgb %r14b, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14B_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0XB6 # xchgb %r14b, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14B_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0XB5 # xchgb %r14b, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14B_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0XB4, 0X24 # xchgb %r14b, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_R15B_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0XB8 # xchgb %r15b, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15B_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0XBB # xchgb %r15b, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15B_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0XB9 # xchgb %r15b, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15B_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0XBA # xchgb %r15b, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15B_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0XBF # xchgb %r15b, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15B_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0XBE # xchgb %r15b, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15B_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0XBD # xchgb %r15b, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15B_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X86, 0XBC, 0X24 # xchgb %r15b, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15B_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0XB8 # xchgb %r15b, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15B_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0XB9 # xchgb %r15b, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15B_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0XBA # xchgb %r15b, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15B_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0XBB # xchgb %r15b, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15B_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0XBC, 0X24 # xchgb %r15b, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15B_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0XBD # xchgb %r15b, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15B_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0XBE # xchgb %r15b, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15B_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X86, 0XBF # xchgb %r15b, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15B_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0XB8 # xchgb %r15b, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15B_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0XBB # xchgb %r15b, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15B_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0XB9 # xchgb %r15b, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15B_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0XBA # xchgb %r15b, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15B_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0XBF # xchgb %r15b, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15B_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0XBE # xchgb %r15b, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15B_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0XBD # xchgb %r15b, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15B_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X86, 0XBC, 0X24 # xchgb %r15b, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#endif /* __SYSTEM_64_BIT__ */
/* ************************** [^] 8-BIT MEMORY [^] ************************** */

/* ************************* [v] 16-BIT MEMORY [v] ************************** */
#ifdef __SYSTEM_16_BIT__
#define XCHG_AX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X87, 0X06 # xchgw (" _(VALUE) "), %ax")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_BX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X87, 0X1E # xchgw (" _(VALUE) "), %bx")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_CX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X87, 0X0E # xchgw (" _(VALUE) "), %cx")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_DX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X87, 0X16 # xchgw (" _(VALUE) "), %dx")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_DI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X87, 0X3E # xchgw (" _(VALUE) "), %di")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_SI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X87, 0X36 # xchgw (" _(VALUE) "), %si")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_BP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X87, 0X2E # xchgw (" _(VALUE) "), %bp")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_SP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X87, 0X26 # xchgw (" _(VALUE) "), %sp")\
	CMT_ASM(".short " _(VALUE))

#define XCHG_AX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X87, 0X06 # xchgw %ax, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_BX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X87, 0X1E # xchgw %bx, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_CX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X87, 0X0E # xchgw %cx, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_DX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X87, 0X16 # xchgw %dx, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_DI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X87, 0X3E # xchgw %di, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_SI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X87, 0X36 # xchgw %si, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_BP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X87, 0X2E # xchgw %bp, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_SP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X87, 0X26 # xchgw %sp, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))

#define XCHG_AX_FROM_PTR_BX CMT_ASM(".byte 0X87, 0X07 # xchgw (%bx), %ax")
#define XCHG_AX_FROM_PTR_BP CMT_ASM(".byte 0X87, 0X46, 0X00 # xchgw (%bp), %ax")
#define XCHG_AX_FROM_PTR_SI CMT_ASM(".byte 0X87, 0X04 # xchgw (%si), %ax")
#define XCHG_AX_FROM_PTR_DI CMT_ASM(".byte 0X87, 0X05 # xchgw (%di), %ax")

#define XCHG_BX_FROM_PTR_BX CMT_ASM(".byte 0X87, 0X1F # xchgw (%bx), %bx")
#define XCHG_BX_FROM_PTR_BP CMT_ASM(".byte 0X87, 0X5E, 0X00 # xchgw (%bp), %bx")
#define XCHG_BX_FROM_PTR_SI CMT_ASM(".byte 0X87, 0X1C # xchgw (%si), %bx")
#define XCHG_BX_FROM_PTR_DI CMT_ASM(".byte 0X87, 0X1D # xchgw (%di), %bx")

#define XCHG_CX_FROM_PTR_BX CMT_ASM(".byte 0X87, 0X0F # xchgw (%bx), %cx")
#define XCHG_CX_FROM_PTR_BP CMT_ASM(".byte 0X87, 0X4E, 0X00 # xchgw (%bp), %cx")
#define XCHG_CX_FROM_PTR_SI CMT_ASM(".byte 0X87, 0X0C # xchgw (%si), %cx")
#define XCHG_CX_FROM_PTR_DI CMT_ASM(".byte 0X87, 0X0D # xchgw (%di), %cx")

#define XCHG_DX_FROM_PTR_BX CMT_ASM(".byte 0X87, 0X17 # xchgw (%bx), %dx")
#define XCHG_DX_FROM_PTR_BP CMT_ASM(".byte 0X87, 0X56, 0X00 # xchgw (%bp), %dx")
#define XCHG_DX_FROM_PTR_SI CMT_ASM(".byte 0X87, 0X14 # xchgw (%si), %dx")
#define XCHG_DX_FROM_PTR_DI CMT_ASM(".byte 0X87, 0X15 # xchgw (%di), %dx")

#define XCHG_DI_FROM_PTR_BX CMT_ASM(".byte 0X87, 0X3F # xchgw (%bx), %di")
#define XCHG_DI_FROM_PTR_BP CMT_ASM(".byte 0X87, 0X7E, 0X00 # xchgw (%bp), %di")
#define XCHG_DI_FROM_PTR_SI CMT_ASM(".byte 0X87, 0X3C # xchgw (%si), %di")
#define XCHG_DI_FROM_PTR_DI CMT_ASM(".byte 0X87, 0X3D # xchgw (%di), %di")

#define XCHG_SI_FROM_PTR_BX CMT_ASM(".byte 0X87, 0X37 # xchgw (%bx), %si")
#define XCHG_SI_FROM_PTR_BP CMT_ASM(".byte 0X87, 0X76, 0X00 # xchgw (%bp), %si")
#define XCHG_SI_FROM_PTR_SI CMT_ASM(".byte 0X87, 0X34 # xchgw (%si), %si")
#define XCHG_SI_FROM_PTR_DI CMT_ASM(".byte 0X87, 0X35 # xchgw (%di), %si")

#define XCHG_BP_FROM_PTR_BX CMT_ASM(".byte 0X87, 0X2F # xchgw (%bx), %bp")
#define XCHG_BP_FROM_PTR_BP CMT_ASM(".byte 0X87, 0X6E, 0X00 # xchgw (%bp), %bp")
#define XCHG_BP_FROM_PTR_SI CMT_ASM(".byte 0X87, 0X2C # xchgw (%si), %bp")
#define XCHG_BP_FROM_PTR_DI CMT_ASM(".byte 0X87, 0X2D # xchgw (%di), %bp")

#define XCHG_SP_FROM_PTR_BX CMT_ASM(".byte 0X87, 0X27 # xchgw (%bx), %sp")
#define XCHG_SP_FROM_PTR_BP CMT_ASM(".byte 0X87, 0X66, 0X00 # xchgw (%bp), %sp")
#define XCHG_SP_FROM_PTR_SI CMT_ASM(".byte 0X87, 0X24 # xchgw (%si), %sp")
#define XCHG_SP_FROM_PTR_DI CMT_ASM(".byte 0X87, 0X25 # xchgw (%di), %sp")

#define XCHG_AX_TO_PTR_BX CMT_ASM(".byte 0X87, 0X07 # xchgw %ax, (%bx)")
#define XCHG_AX_TO_PTR_BP CMT_ASM(".byte 0X87, 0X46, 0X00 # xchgw %ax, (%bp)")
#define XCHG_AX_TO_PTR_SI CMT_ASM(".byte 0X87, 0X04 # xchgw %ax, (%si)")
#define XCHG_AX_TO_PTR_DI CMT_ASM(".byte 0X87, 0X05 # xchgw %ax, (%di)")

#define XCHG_BX_TO_PTR_BX CMT_ASM(".byte 0X87, 0X1F # xchgw %bx, (%bx)")
#define XCHG_BX_TO_PTR_BP CMT_ASM(".byte 0X87, 0X5E, 0X00 # xchgw %bx, (%bp)")
#define XCHG_BX_TO_PTR_SI CMT_ASM(".byte 0X87, 0X1C # xchgw %bx, (%si)")
#define XCHG_BX_TO_PTR_DI CMT_ASM(".byte 0X87, 0X1D # xchgw %bx, (%di)")

#define XCHG_CX_TO_PTR_BX CMT_ASM(".byte 0X87, 0X0F # xchgw %cx, (%bx)")
#define XCHG_CX_TO_PTR_BP CMT_ASM(".byte 0X87, 0X4E, 0X00 # xchgw %cx, (%bp)")
#define XCHG_CX_TO_PTR_SI CMT_ASM(".byte 0X87, 0X0C # xchgw %cx, (%si)")
#define XCHG_CX_TO_PTR_DI CMT_ASM(".byte 0X87, 0X0D # xchgw %cx, (%di)")

#define XCHG_DX_TO_PTR_BX CMT_ASM(".byte 0X87, 0X17 # xchgw %dx, (%bx)")
#define XCHG_DX_TO_PTR_BP CMT_ASM(".byte 0X87, 0X56, 0X00 # xchgw %dx, (%bp)")
#define XCHG_DX_TO_PTR_SI CMT_ASM(".byte 0X87, 0X14 # xchgw %dx, (%si)")
#define XCHG_DX_TO_PTR_DI CMT_ASM(".byte 0X87, 0X15 # xchgw %dx, (%di)")

#define XCHG_DI_TO_PTR_BX CMT_ASM(".byte 0X87, 0X3F # xchgw %di, (%bx)")
#define XCHG_DI_TO_PTR_BP CMT_ASM(".byte 0X87, 0X7E, 0X00 # xchgw %di, (%bp)")
#define XCHG_DI_TO_PTR_SI CMT_ASM(".byte 0X87, 0X3C # xchgw %di, (%si)")
#define XCHG_DI_TO_PTR_DI CMT_ASM(".byte 0X87, 0X3D # xchgw %di, (%di)")

#define XCHG_SI_TO_PTR_BX CMT_ASM(".byte 0X87, 0X37 # xchgw %si, (%bx)")
#define XCHG_SI_TO_PTR_BP CMT_ASM(".byte 0X87, 0X76, 0X00 # xchgw %si, (%bp)")
#define XCHG_SI_TO_PTR_SI CMT_ASM(".byte 0X87, 0X34 # xchgw %si, (%si)")
#define XCHG_SI_TO_PTR_DI CMT_ASM(".byte 0X87, 0X35 # xchgw %si, (%di)")

#define XCHG_BP_TO_PTR_BX CMT_ASM(".byte 0X87, 0X2F # xchgw %bp, (%bx)")
#define XCHG_BP_TO_PTR_BP CMT_ASM(".byte 0X87, 0X6E, 0X00 # xchgw %bp, (%bp)")
#define XCHG_BP_TO_PTR_SI CMT_ASM(".byte 0X87, 0X2C # xchgw %bp, (%si)")
#define XCHG_BP_TO_PTR_DI CMT_ASM(".byte 0X87, 0X2D # xchgw %bp, (%di)")

#define XCHG_SP_TO_PTR_BX CMT_ASM(".byte 0X87, 0X27 # xchgw %sp, (%bx)")
#define XCHG_SP_TO_PTR_BP CMT_ASM(".byte 0X87, 0X66, 0X00 # xchgw %sp, (%bp)")
#define XCHG_SP_TO_PTR_SI CMT_ASM(".byte 0X87, 0X24 # xchgw %sp, (%si)")
#define XCHG_SP_TO_PTR_DI CMT_ASM(".byte 0X87, 0X25 # xchgw %sp, (%di)")

#define XCHG_AX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X87, 0X87 # xchgw " _(VALUE) "(%bx), %ax")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_AX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X87, 0X86 # xchgw " _(VALUE) "(%bp), %ax")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_AX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X87, 0X84 # xchgw " _(VALUE) "(%si), %ax")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_AX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X87, 0X85 # xchgw " _(VALUE) "(%di), %ax")\
	CMT_ASM(".short " _(VALUE))

#define XCHG_BX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X87, 0X9F # xchgw " _(VALUE) "(%bx), %bx")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_BX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X87, 0X9E # xchgw " _(VALUE) "(%bp), %bx")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_BX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X87, 0X9C # xchgw " _(VALUE) "(%si), %bx")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_BX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X87, 0X9D # xchgw " _(VALUE) "(%di), %bx")\
	CMT_ASM(".short " _(VALUE))

#define XCHG_CX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X87, 0X8F # xchgw " _(VALUE) "(%bx), %cx")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_CX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X87, 0X8E # xchgw " _(VALUE) "(%bp), %cx")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_CX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X87, 0X8C # xchgw " _(VALUE) "(%si), %cx")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_CX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X87, 0X8D # xchgw " _(VALUE) "(%di), %cx")\
	CMT_ASM(".short " _(VALUE))

#define XCHG_DX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X87, 0X97 # xchgw " _(VALUE) "(%bx), %dx")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_DX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X87, 0X96 # xchgw " _(VALUE) "(%bp), %dx")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_DX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X87, 0X94 # xchgw " _(VALUE) "(%si), %dx")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_DX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X87, 0X95 # xchgw " _(VALUE) "(%di), %dx")\
	CMT_ASM(".short " _(VALUE))

#define XCHG_DI_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X87, 0XBF # xchgw " _(VALUE) "(%bx), %di")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_DI_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X87, 0XBE # xchgw " _(VALUE) "(%bp), %di")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_DI_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X87, 0XBC # xchgw " _(VALUE) "(%si), %di")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_DI_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X87, 0XBD # xchgw " _(VALUE) "(%di), %di")\
	CMT_ASM(".short " _(VALUE))

#define XCHG_SI_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X87, 0XB7 # xchgw " _(VALUE) "(%bx), %si")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_SI_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X87, 0XB6 # xchgw " _(VALUE) "(%bp), %si")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_SI_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X87, 0XB4 # xchgw " _(VALUE) "(%si), %si")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_SI_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X87, 0XB5 # xchgw " _(VALUE) "(%di), %si")\
	CMT_ASM(".short " _(VALUE))

#define XCHG_BP_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X87, 0XAF # xchgw " _(VALUE) "(%bx), %bp")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_BP_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X87, 0XAE # xchgw " _(VALUE) "(%bp), %bp")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_BP_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X87, 0XAC # xchgw " _(VALUE) "(%si), %bp")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_BP_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X87, 0XAD # xchgw " _(VALUE) "(%di), %bp")\
	CMT_ASM(".short " _(VALUE))

#define XCHG_SP_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X87, 0XA7 # xchgw " _(VALUE) "(%bx), %sp")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_SP_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X87, 0XA6 # xchgw " _(VALUE) "(%bp), %sp")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_SP_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X87, 0XA4 # xchgw " _(VALUE) "(%si), %sp")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_SP_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X87, 0XA5 # xchgw " _(VALUE) "(%di), %sp")\
	CMT_ASM(".short " _(VALUE))

#define XCHG_AX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X87, 0X87 # xchgw %ax, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_AX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X87, 0X86 # xchgw %ax, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_AX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X87, 0X84 # xchgw %ax, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_AX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X87, 0X85 # xchgw %ax, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define XCHG_BX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X87, 0X9F # xchgw %bx, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_BX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X87, 0X9E # xchgw %bx, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_BX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X87, 0X9C # xchgw %bx, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_BX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X87, 0X9D # xchgw %bx, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define XCHG_CX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X87, 0X8F # xchgw %cx, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_CX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X87, 0X8E # xchgw %cx, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_CX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X87, 0X8C # xchgw %cx, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_CX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X87, 0X8D # xchgw %cx, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define XCHG_DX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X87, 0X97 # xchgw %dx, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_DX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X87, 0X96 # xchgw %dx, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_DX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X87, 0X94 # xchgw %dx, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_DX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X87, 0X95 # xchgw %dx, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define XCHG_DI_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X87, 0XBF # xchgw %di, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_DI_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X87, 0XBE # xchgw %di, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_DI_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X87, 0XBC # xchgw %di, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_DI_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X87, 0XBD # xchgw %di, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define XCHG_SI_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X87, 0XB7 # xchgw %si, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_SI_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X87, 0XB6 # xchgw %si, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_SI_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X87, 0XB4 # xchgw %si, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_SI_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X87, 0XB5 # xchgw %si, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define XCHG_BP_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X87, 0XAF # xchgw %bp, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_BP_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X87, 0XAE # xchgw %bp, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_BP_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X87, 0XAC # xchgw %bp, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_BP_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X87, 0XAD # xchgw %bp, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define XCHG_SP_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X87, 0XA7 # xchgw %sp, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_SP_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X87, 0XA6 # xchgw %sp, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_SP_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X87, 0XA4 # xchgw %sp, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_SP_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X87, 0XA5 # xchgw %sp, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))
#endif /* __SYSTEM_16_BIT__ */

#ifdef __SYSTEM_32_BIT__
#define XCHG_AX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X05 # xchgw (" _(VALUE) "), %ax")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X1D # xchgw (" _(VALUE) "), %bx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X0D # xchgw (" _(VALUE) "), %cx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X15 # xchgw (" _(VALUE) "), %dx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X3D # xchgw (" _(VALUE) "), %di")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X35 # xchgw (" _(VALUE) "), %si")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X2D # xchgw (" _(VALUE) "), %bp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X25 # xchgw (" _(VALUE) "), %sp")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_AX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X05 # xchgw %ax, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X1D # xchgw %bx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X0D # xchgw %cx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X15 # xchgw %dx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X3D # xchgw %di, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X35 # xchgw %si, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X2D # xchgw %bp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X25 # xchgw %sp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_AX_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X87, 0X00 # xchgw (%eax), %ax")
#define XCHG_AX_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X87, 0X03 # xchgw (%ebx), %ax")
#define XCHG_AX_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X87, 0X01 # xchgw (%ecx), %ax")
#define XCHG_AX_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X87, 0X02 # xchgw (%edx), %ax")
#define XCHG_AX_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X87, 0X07 # xchgw (%edi), %ax")
#define XCHG_AX_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X87, 0X06 # xchgw (%esi), %ax")
#define XCHG_AX_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X87, 0X45, 0X00 # xchgw (%ebp), %ax")
#define XCHG_AX_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X87, 0X04, 0X24 # xchgw (%esp), %ax")
#define XCHG_AX_FROM_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X87, 0X07 # xchgw (%bx), %ax")
#define XCHG_AX_FROM_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X87, 0X46, 0X00 # xchgw (%bp), %ax")
#define XCHG_AX_FROM_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X87, 0X04 # xchgw (%si), %ax")
#define XCHG_AX_FROM_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X87, 0X05 # xchgw (%di), %ax")

#define XCHG_BX_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X87, 0X18 # xchgw (%eax), %bx")
#define XCHG_BX_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X87, 0X1B # xchgw (%ebx), %bx")
#define XCHG_BX_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X87, 0X19 # xchgw (%ecx), %bx")
#define XCHG_BX_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X87, 0X1A # xchgw (%edx), %bx")
#define XCHG_BX_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X87, 0X1F # xchgw (%edi), %bx")
#define XCHG_BX_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X87, 0X1E # xchgw (%esi), %bx")
#define XCHG_BX_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X87, 0X5D, 0X00 # xchgw (%ebp), %bx")
#define XCHG_BX_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X87, 0X1C, 0X24 # xchgw (%esp), %bx")
#define XCHG_BX_FROM_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X87, 0X1F # xchgw (%bx), %bx")
#define XCHG_BX_FROM_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X87, 0X5E, 0X00 # xchgw (%bp), %bx")
#define XCHG_BX_FROM_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X87, 0X1C # xchgw (%si), %bx")
#define XCHG_BX_FROM_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X87, 0X1D # xchgw (%di), %bx")

#define XCHG_CX_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X87, 0X08 # xchgw (%eax), %cx")
#define XCHG_CX_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X87, 0X0B # xchgw (%ebx), %cx")
#define XCHG_CX_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X87, 0X09 # xchgw (%ecx), %cx")
#define XCHG_CX_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X87, 0X0A # xchgw (%edx), %cx")
#define XCHG_CX_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X87, 0X0F # xchgw (%edi), %cx")
#define XCHG_CX_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X87, 0X0E # xchgw (%esi), %cx")
#define XCHG_CX_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X87, 0X4D, 0X00 # xchgw (%ebp), %cx")
#define XCHG_CX_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X87, 0X0C, 0X24 # xchgw (%esp), %cx")
#define XCHG_CX_FROM_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X87, 0X0F # xchgw (%bx), %cx")
#define XCHG_CX_FROM_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X87, 0X4E, 0X00 # xchgw (%bp), %cx")
#define XCHG_CX_FROM_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X87, 0X0C # xchgw (%si), %cx")
#define XCHG_CX_FROM_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X87, 0X0D # xchgw (%di), %cx")

#define XCHG_DX_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X87, 0X10 # xchgw (%eax), %dx")
#define XCHG_DX_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X87, 0X13 # xchgw (%ebx), %dx")
#define XCHG_DX_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X87, 0X11 # xchgw (%ecx), %dx")
#define XCHG_DX_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X87, 0X12 # xchgw (%edx), %dx")
#define XCHG_DX_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X87, 0X17 # xchgw (%edi), %dx")
#define XCHG_DX_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X87, 0X16 # xchgw (%esi), %dx")
#define XCHG_DX_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X87, 0X55, 0X00 # xchgw (%ebp), %dx")
#define XCHG_DX_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X87, 0X14, 0X24 # xchgw (%esp), %dx")
#define XCHG_DX_FROM_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X87, 0X17 # xchgw (%bx), %dx")
#define XCHG_DX_FROM_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X87, 0X56, 0X00 # xchgw (%bp), %dx")
#define XCHG_DX_FROM_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X87, 0X14 # xchgw (%si), %dx")
#define XCHG_DX_FROM_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X87, 0X15 # xchgw (%di), %dx")

#define XCHG_DI_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X87, 0X38 # xchgw (%eax), %di")
#define XCHG_DI_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X87, 0X3B # xchgw (%ebx), %di")
#define XCHG_DI_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X87, 0X39 # xchgw (%ecx), %di")
#define XCHG_DI_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X87, 0X3A # xchgw (%edx), %di")
#define XCHG_DI_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X87, 0X3F # xchgw (%edi), %di")
#define XCHG_DI_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X87, 0X3E # xchgw (%esi), %di")
#define XCHG_DI_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X87, 0X7D, 0X00 # xchgw (%ebp), %di")
#define XCHG_DI_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X87, 0X3C, 0X24 # xchgw (%esp), %di")
#define XCHG_DI_FROM_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X87, 0X3F # xchgw (%bx), %di")
#define XCHG_DI_FROM_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X87, 0X7E, 0X00 # xchgw (%bp), %di")
#define XCHG_DI_FROM_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X87, 0X3C # xchgw (%si), %di")
#define XCHG_DI_FROM_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X87, 0X3D # xchgw (%di), %di")

#define XCHG_SI_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X87, 0X30 # xchgw (%eax), %si")
#define XCHG_SI_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X87, 0X33 # xchgw (%ebx), %si")
#define XCHG_SI_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X87, 0X31 # xchgw (%ecx), %si")
#define XCHG_SI_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X87, 0X32 # xchgw (%edx), %si")
#define XCHG_SI_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X87, 0X37 # xchgw (%edi), %si")
#define XCHG_SI_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X87, 0X36 # xchgw (%esi), %si")
#define XCHG_SI_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X87, 0X75, 0X00 # xchgw (%ebp), %si")
#define XCHG_SI_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X87, 0X34, 0X24 # xchgw (%esp), %si")
#define XCHG_SI_FROM_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X87, 0X37 # xchgw (%bx), %si")
#define XCHG_SI_FROM_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X87, 0X76, 0X00 # xchgw (%bp), %si")
#define XCHG_SI_FROM_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X87, 0X34 # xchgw (%si), %si")
#define XCHG_SI_FROM_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X87, 0X35 # xchgw (%di), %si")

#define XCHG_BP_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X87, 0X28 # xchgw (%eax), %bp")
#define XCHG_BP_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X87, 0X2B # xchgw (%ebx), %bp")
#define XCHG_BP_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X87, 0X29 # xchgw (%ecx), %bp")
#define XCHG_BP_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X87, 0X2A # xchgw (%edx), %bp")
#define XCHG_BP_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X87, 0X2F # xchgw (%edi), %bp")
#define XCHG_BP_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X87, 0X2E # xchgw (%esi), %bp")
#define XCHG_BP_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X87, 0X6D, 0X00 # xchgw (%ebp), %bp")
#define XCHG_BP_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X87, 0X2C, 0X24 # xchgw (%esp), %bp")
#define XCHG_BP_FROM_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X87, 0X2F # xchgw (%bx), %bp")
#define XCHG_BP_FROM_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X87, 0X6E, 0X00 # xchgw (%bp), %bp")
#define XCHG_BP_FROM_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X87, 0X2C # xchgw (%si), %bp")
#define XCHG_BP_FROM_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X87, 0X2D # xchgw (%di), %bp")

#define XCHG_SP_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X87, 0X20 # xchgw (%eax), %sp")
#define XCHG_SP_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X87, 0X23 # xchgw (%ebx), %sp")
#define XCHG_SP_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X87, 0X21 # xchgw (%ecx), %sp")
#define XCHG_SP_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X87, 0X22 # xchgw (%edx), %sp")
#define XCHG_SP_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X87, 0X27 # xchgw (%edi), %sp")
#define XCHG_SP_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X87, 0X26 # xchgw (%esi), %sp")
#define XCHG_SP_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X87, 0X65, 0X00 # xchgw (%ebp), %sp")
#define XCHG_SP_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X87, 0X24, 0X24 # xchgw (%esp), %sp")
#define XCHG_SP_FROM_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X87, 0X27 # xchgw (%bx), %sp")
#define XCHG_SP_FROM_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X87, 0X66, 0X00 # xchgw (%bp), %sp")
#define XCHG_SP_FROM_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X87, 0X24 # xchgw (%si), %sp")
#define XCHG_SP_FROM_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X87, 0X25 # xchgw (%di), %sp")

#define XCHG_AX_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X87, 0X00 # xchgw %ax, (%eax)")
#define XCHG_AX_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X87, 0X03 # xchgw %ax, (%ebx)")
#define XCHG_AX_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X87, 0X01 # xchgw %ax, (%ecx)")
#define XCHG_AX_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X87, 0X02 # xchgw %ax, (%edx)")
#define XCHG_AX_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X87, 0X07 # xchgw %ax, (%edi)")
#define XCHG_AX_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X87, 0X06 # xchgw %ax, (%esi)")
#define XCHG_AX_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X87, 0X45, 0X00 # xchgw %ax, (%ebp)")
#define XCHG_AX_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X87, 0X04, 0X24 # xchgw %ax, (%esp)")
#define XCHG_AX_TO_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X87, 0X07 # xchgw %ax, (%bx)")
#define XCHG_AX_TO_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X87, 0X46, 0X00 # xchgw %ax, (%bp)")
#define XCHG_AX_TO_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X87, 0X04 # xchgw %ax, (%si)")
#define XCHG_AX_TO_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X87, 0X05 # xchgw %ax, (%di)")

#define XCHG_BX_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X87, 0X18 # xchgw %bx, (%eax)")
#define XCHG_BX_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X87, 0X1B # xchgw %bx, (%ebx)")
#define XCHG_BX_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X87, 0X19 # xchgw %bx, (%ecx)")
#define XCHG_BX_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X87, 0X1A # xchgw %bx, (%edx)")
#define XCHG_BX_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X87, 0X1F # xchgw %bx, (%edi)")
#define XCHG_BX_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X87, 0X1E # xchgw %bx, (%esi)")
#define XCHG_BX_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X87, 0X5D, 0X00 # xchgw %bx, (%ebp)")
#define XCHG_BX_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X87, 0X1C, 0X24 # xchgw %bx, (%esp)")
#define XCHG_BX_TO_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X87, 0X1F # xchgw %bx, (%bx)")
#define XCHG_BX_TO_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X87, 0X5E, 0X00 # xchgw %bx, (%bp)")
#define XCHG_BX_TO_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X87, 0X1C # xchgw %bx, (%si)")
#define XCHG_BX_TO_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X87, 0X1D # xchgw %bx, (%di)")

#define XCHG_CX_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X87, 0X08 # xchgw %cx, (%eax)")
#define XCHG_CX_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X87, 0X0B # xchgw %cx, (%ebx)")
#define XCHG_CX_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X87, 0X09 # xchgw %cx, (%ecx)")
#define XCHG_CX_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X87, 0X0A # xchgw %cx, (%edx)")
#define XCHG_CX_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X87, 0X0F # xchgw %cx, (%edi)")
#define XCHG_CX_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X87, 0X0E # xchgw %cx, (%esi)")
#define XCHG_CX_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X87, 0X4D, 0X00 # xchgw %cx, (%ebp)")
#define XCHG_CX_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X87, 0X0C, 0X24 # xchgw %cx, (%esp)")
#define XCHG_CX_TO_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X87, 0X0F # xchgw %cx, (%bx)")
#define XCHG_CX_TO_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X87, 0X4E, 0X00 # xchgw %cx, (%bp)")
#define XCHG_CX_TO_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X87, 0X0C # xchgw %cx, (%si)")
#define XCHG_CX_TO_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X87, 0X0D # xchgw %cx, (%di)")

#define XCHG_DX_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X87, 0X10 # xchgw %dx, (%eax)")
#define XCHG_DX_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X87, 0X13 # xchgw %dx, (%ebx)")
#define XCHG_DX_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X87, 0X11 # xchgw %dx, (%ecx)")
#define XCHG_DX_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X87, 0X12 # xchgw %dx, (%edx)")
#define XCHG_DX_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X87, 0X17 # xchgw %dx, (%edi)")
#define XCHG_DX_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X87, 0X16 # xchgw %dx, (%esi)")
#define XCHG_DX_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X87, 0X55, 0X00 # xchgw %dx, (%ebp)")
#define XCHG_DX_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X87, 0X14, 0X24 # xchgw %dx, (%esp)")
#define XCHG_DX_TO_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X87, 0X17 # xchgw %dx, (%bx)")
#define XCHG_DX_TO_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X87, 0X56, 0X00 # xchgw %dx, (%bp)")
#define XCHG_DX_TO_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X87, 0X14 # xchgw %dx, (%si)")
#define XCHG_DX_TO_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X87, 0X15 # xchgw %dx, (%di)")

#define XCHG_DI_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X87, 0X38 # xchgw %di, (%eax)")
#define XCHG_DI_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X87, 0X3B # xchgw %di, (%ebx)")
#define XCHG_DI_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X87, 0X39 # xchgw %di, (%ecx)")
#define XCHG_DI_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X87, 0X3A # xchgw %di, (%edx)")
#define XCHG_DI_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X87, 0X3F # xchgw %di, (%edi)")
#define XCHG_DI_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X87, 0X3E # xchgw %di, (%esi)")
#define XCHG_DI_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X87, 0X7D, 0X00 # xchgw %di, (%ebp)")
#define XCHG_DI_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X87, 0X3C, 0X24 # xchgw %di, (%esp)")
#define XCHG_DI_TO_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X87, 0X3F # xchgw %di, (%bx)")
#define XCHG_DI_TO_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X87, 0X7E, 0X00 # xchgw %di, (%bp)")
#define XCHG_DI_TO_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X87, 0X3C # xchgw %di, (%si)")
#define XCHG_DI_TO_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X87, 0X3D # xchgw %di, (%di)")

#define XCHG_SI_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X87, 0X30 # xchgw %si, (%eax)")
#define XCHG_SI_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X87, 0X33 # xchgw %si, (%ebx)")
#define XCHG_SI_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X87, 0X31 # xchgw %si, (%ecx)")
#define XCHG_SI_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X87, 0X32 # xchgw %si, (%edx)")
#define XCHG_SI_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X87, 0X37 # xchgw %si, (%edi)")
#define XCHG_SI_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X87, 0X36 # xchgw %si, (%esi)")
#define XCHG_SI_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X87, 0X75, 0X00 # xchgw %si, (%ebp)")
#define XCHG_SI_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X87, 0X34, 0X24 # xchgw %si, (%esp)")
#define XCHG_SI_TO_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X87, 0X37 # xchgw %si, (%bx)")
#define XCHG_SI_TO_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X87, 0X76, 0X00 # xchgw %si, (%bp)")
#define XCHG_SI_TO_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X87, 0X34 # xchgw %si, (%si)")
#define XCHG_SI_TO_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X87, 0X35 # xchgw %si, (%di)")

#define XCHG_BP_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X87, 0X28 # xchgw %bp, (%eax)")
#define XCHG_BP_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X87, 0X2B # xchgw %bp, (%ebx)")
#define XCHG_BP_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X87, 0X29 # xchgw %bp, (%ecx)")
#define XCHG_BP_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X87, 0X2A # xchgw %bp, (%edx)")
#define XCHG_BP_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X87, 0X2F # xchgw %bp, (%edi)")
#define XCHG_BP_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X87, 0X2E # xchgw %bp, (%esi)")
#define XCHG_BP_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X87, 0X6D, 0X00 # xchgw %bp, (%ebp)")
#define XCHG_BP_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X87, 0X2C, 0X24 # xchgw %bp, (%esp)")
#define XCHG_BP_TO_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X87, 0X2F # xchgw %bp, (%bx)")
#define XCHG_BP_TO_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X87, 0X6E, 0X00 # xchgw %bp, (%bp)")
#define XCHG_BP_TO_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X87, 0X2C # xchgw %bp, (%si)")
#define XCHG_BP_TO_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X87, 0X2D # xchgw %bp, (%di)")

#define XCHG_SP_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X87, 0X20 # xchgw %sp, (%eax)")
#define XCHG_SP_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X87, 0X23 # xchgw %sp, (%ebx)")
#define XCHG_SP_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X87, 0X21 # xchgw %sp, (%ecx)")
#define XCHG_SP_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X87, 0X22 # xchgw %sp, (%edx)")
#define XCHG_SP_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X87, 0X27 # xchgw %sp, (%edi)")
#define XCHG_SP_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X87, 0X26 # xchgw %sp, (%esi)")
#define XCHG_SP_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X87, 0X65, 0X00 # xchgw %sp, (%ebp)")
#define XCHG_SP_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X87, 0X24, 0X24 # xchgw %sp, (%esp)")
#define XCHG_SP_TO_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X87, 0X27 # xchgw %sp, (%bx)")
#define XCHG_SP_TO_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X87, 0X66, 0X00 # xchgw %sp, (%bp)")
#define XCHG_SP_TO_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X87, 0X24 # xchgw %sp, (%si)")
#define XCHG_SP_TO_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X87, 0X25 # xchgw %sp, (%di)")

#define XCHG_AX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X80 # xchgw " _(VALUE) "(%eax), %ax")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X83 # xchgw " _(VALUE) "(%ebx), %ax")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X81 # xchgw " _(VALUE) "(%ecx), %ax")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X82 # xchgw " _(VALUE) "(%edx), %ax")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X87 # xchgw " _(VALUE) "(%edi), %ax")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X86 # xchgw " _(VALUE) "(%esi), %ax")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X85 # xchgw " _(VALUE) "(%ebp), %ax")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X84, 0X24 # xchgw " _(VALUE) "(%esp), %ax")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0X87 # xchgw " _(VALUE) "(%bx), %ax")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_AX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0X86 # xchgw " _(VALUE) "(%bp), %ax")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_AX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0X84 # xchgw " _(VALUE) "(%si), %ax")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_AX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0X85 # xchgw " _(VALUE) "(%di), %ax")\
	CMT_ASM(".short " _(VALUE))

#define XCHG_BX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X98 # xchgw " _(VALUE) "(%eax), %bx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X9B # xchgw " _(VALUE) "(%ebx), %bx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X99 # xchgw " _(VALUE) "(%ecx), %bx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X9A # xchgw " _(VALUE) "(%edx), %bx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X9F # xchgw " _(VALUE) "(%edi), %bx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X9E # xchgw " _(VALUE) "(%esi), %bx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X9D # xchgw " _(VALUE) "(%ebp), %bx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X9C, 0X24 # xchgw " _(VALUE) "(%esp), %bx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0X9F # xchgw " _(VALUE) "(%bx), %bx")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_BX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0X9E # xchgw " _(VALUE) "(%bp), %bx")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_BX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0X9C # xchgw " _(VALUE) "(%si), %bx")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_BX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0X9D # xchgw " _(VALUE) "(%di), %bx")\
	CMT_ASM(".short " _(VALUE))

#define XCHG_CX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X88 # xchgw " _(VALUE) "(%eax), %cx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X8B # xchgw " _(VALUE) "(%ebx), %cx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X89 # xchgw " _(VALUE) "(%ecx), %cx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X8A # xchgw " _(VALUE) "(%edx), %cx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X8F # xchgw " _(VALUE) "(%edi), %cx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X8E # xchgw " _(VALUE) "(%esi), %cx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X8D # xchgw " _(VALUE) "(%ebp), %cx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X8C, 0X24 # xchgw " _(VALUE) "(%esp), %cx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0X8F # xchgw " _(VALUE) "(%bx), %cx")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_CX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0X8E # xchgw " _(VALUE) "(%bp), %cx")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_CX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0X8C # xchgw " _(VALUE) "(%si), %cx")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_CX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0X8D # xchgw " _(VALUE) "(%di), %cx")\
	CMT_ASM(".short " _(VALUE))

#define XCHG_DX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X90 # xchgw " _(VALUE) "(%eax), %dx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X93 # xchgw " _(VALUE) "(%ebx), %dx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X91 # xchgw " _(VALUE) "(%ecx), %dx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X92 # xchgw " _(VALUE) "(%edx), %dx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X97 # xchgw " _(VALUE) "(%edi), %dx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X96 # xchgw " _(VALUE) "(%esi), %dx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X95 # xchgw " _(VALUE) "(%ebp), %dx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X94, 0X24 # xchgw " _(VALUE) "(%esp), %dx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0X97 # xchgw " _(VALUE) "(%bx), %dx")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_DX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0X96 # xchgw " _(VALUE) "(%bp), %dx")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_DX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0X94 # xchgw " _(VALUE) "(%si), %dx")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_DX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0X95 # xchgw " _(VALUE) "(%di), %dx")\
	CMT_ASM(".short " _(VALUE))

#define XCHG_DI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XB8 # xchgw " _(VALUE) "(%eax), %di")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XBB # xchgw " _(VALUE) "(%ebx), %di")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XB9 # xchgw " _(VALUE) "(%ecx), %di")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XBA # xchgw " _(VALUE) "(%edx), %di")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XBF # xchgw " _(VALUE) "(%edi), %di")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XBE # xchgw " _(VALUE) "(%esi), %di")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XBD # xchgw " _(VALUE) "(%ebp), %di")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XBC, 0X24 # xchgw " _(VALUE) "(%esp), %di")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DI_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0XBF # xchgw " _(VALUE) "(%bx), %di")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_DI_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0XBE # xchgw " _(VALUE) "(%bp), %di")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_DI_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0XBC # xchgw " _(VALUE) "(%si), %di")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_DI_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0XBD # xchgw " _(VALUE) "(%di), %di")\
	CMT_ASM(".short " _(VALUE))

#define XCHG_SI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XB0 # xchgw " _(VALUE) "(%eax), %si")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XB3 # xchgw " _(VALUE) "(%ebx), %si")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XB1 # xchgw " _(VALUE) "(%ecx), %si")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XB2 # xchgw " _(VALUE) "(%edx), %si")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XB7 # xchgw " _(VALUE) "(%edi), %si")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XB6 # xchgw " _(VALUE) "(%esi), %si")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XB5 # xchgw " _(VALUE) "(%ebp), %si")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XB4, 0X24 # xchgw " _(VALUE) "(%esp), %si")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SI_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0XB7 # xchgw " _(VALUE) "(%bx), %si")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_SI_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0XB6 # xchgw " _(VALUE) "(%bp), %si")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_SI_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0XB4 # xchgw " _(VALUE) "(%si), %si")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_SI_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0XB5 # xchgw " _(VALUE) "(%di), %si")\
	CMT_ASM(".short " _(VALUE))

#define XCHG_BP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XA8 # xchgw " _(VALUE) "(%eax), %bp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XAB # xchgw " _(VALUE) "(%ebx), %bp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XA9 # xchgw " _(VALUE) "(%ecx), %bp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XAA # xchgw " _(VALUE) "(%edx), %bp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XAF # xchgw " _(VALUE) "(%edi), %bp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XAE # xchgw " _(VALUE) "(%esi), %bp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XAD # xchgw " _(VALUE) "(%ebp), %bp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XAC, 0X24 # xchgw " _(VALUE) "(%esp), %bp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BP_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0XAF # xchgw " _(VALUE) "(%bx), %bp")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_BP_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0XAE # xchgw " _(VALUE) "(%bp), %bp")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_BP_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0XAC # xchgw " _(VALUE) "(%si), %bp")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_BP_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0XAD # xchgw " _(VALUE) "(%di), %bp")\
	CMT_ASM(".short " _(VALUE))

#define XCHG_SP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XA0 # xchgw " _(VALUE) "(%eax), %sp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XA3 # xchgw " _(VALUE) "(%ebx), %sp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XA1 # xchgw " _(VALUE) "(%ecx), %sp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XA2 # xchgw " _(VALUE) "(%edx), %sp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XA7 # xchgw " _(VALUE) "(%edi), %sp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XA6 # xchgw " _(VALUE) "(%esi), %sp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XA5 # xchgw " _(VALUE) "(%ebp), %sp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XA4, 0X24 # xchgw " _(VALUE) "(%esp), %sp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SP_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0XA7 # xchgw " _(VALUE) "(%bx), %sp")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_SP_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0XA6 # xchgw " _(VALUE) "(%bp), %sp")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_SP_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0XA4 # xchgw " _(VALUE) "(%si), %sp")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_SP_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0XA5 # xchgw " _(VALUE) "(%di), %sp")\
	CMT_ASM(".short " _(VALUE))

#define XCHG_AX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X80 # xchgw %ax, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X83 # xchgw %ax, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X81 # xchgw %ax, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X82 # xchgw %ax, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X87 # xchgw %ax, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X86 # xchgw %ax, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X85 # xchgw %ax, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X84, 0X24 # xchgw %ax, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0X87 # xchgw %ax, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_AX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0X86 # xchgw %ax, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_AX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0X84 # xchgw %ax, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_AX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0X85 # xchgw %ax, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define XCHG_BX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X98 # xchgw %bx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X9B # xchgw %bx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X99 # xchgw %bx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X9A # xchgw %bx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X9F # xchgw %bx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X9E # xchgw %bx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X9D # xchgw %bx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X9C, 0X24 # xchgw %bx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0X9F # xchgw %bx, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_BX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0X9E # xchgw %bx, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_BX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0X9C # xchgw %bx, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_BX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0X9D # xchgw %bx, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define XCHG_CX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X88 # xchgw %cx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X8B # xchgw %cx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X89 # xchgw %cx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X8A # xchgw %cx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X8F # xchgw %cx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X8E # xchgw %cx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X8D # xchgw %cx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X8C, 0X24 # xchgw %cx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0X8F # xchgw %cx, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_CX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0X8E # xchgw %cx, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_CX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0X8C # xchgw %cx, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_CX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0X8D # xchgw %cx, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define XCHG_DX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X90 # xchgw %dx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X93 # xchgw %dx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X91 # xchgw %dx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X92 # xchgw %dx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X97 # xchgw %dx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X96 # xchgw %dx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X95 # xchgw %dx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X94, 0X24 # xchgw %dx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0X97 # xchgw %dx, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_DX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0X96 # xchgw %dx, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_DX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0X94 # xchgw %dx, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_DX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0X95 # xchgw %dx, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define XCHG_DI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XB8 # xchgw %di, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XBB # xchgw %di, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XB9 # xchgw %di, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XBA # xchgw %di, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XBF # xchgw %di, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XBE # xchgw %di, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XBD # xchgw %di, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XBC, 0X24 # xchgw %di, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DI_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0XBF # xchgw %di, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_DI_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0XBE # xchgw %di, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_DI_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0XBC # xchgw %di, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_DI_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0XBD # xchgw %di, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define XCHG_SI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XB0 # xchgw %si, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XB3 # xchgw %si, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XB1 # xchgw %si, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XB2 # xchgw %si, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XB7 # xchgw %si, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XB6 # xchgw %si, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XB5 # xchgw %si, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XB4, 0X24 # xchgw %si, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SI_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0XB7 # xchgw %si, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_SI_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0XB6 # xchgw %si, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_SI_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0XB4 # xchgw %si, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_SI_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0XB5 # xchgw %si, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define XCHG_BP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XA8 # xchgw %bp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XAB # xchgw %bp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XA9 # xchgw %bp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XAA # xchgw %bp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XAF # xchgw %bp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XAE # xchgw %bp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XAD # xchgw %bp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XAC, 0X24 # xchgw %bp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BP_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0XAF # xchgw %bp, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_BP_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0XAE # xchgw %bp, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_BP_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0XAC # xchgw %bp, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_BP_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0XAD # xchgw %bp, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define XCHG_SP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XA0 # xchgw %sp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XA3 # xchgw %sp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XA1 # xchgw %sp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XA2 # xchgw %sp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XA7 # xchgw %sp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XA6 # xchgw %sp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XA5 # xchgw %sp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XA4, 0X24 # xchgw %sp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SP_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0XA7 # xchgw %sp, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_SP_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0XA6 # xchgw %sp, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_SP_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0XA4 # xchgw %sp, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_SP_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0XA5 # xchgw %sp, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define XCHG_AX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X04, 0X25 # xchgw (" _(VALUE) "), %ax")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X1C, 0X25 # xchgw (" _(VALUE) "), %bx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X0C, 0X25 # xchgw (" _(VALUE) "), %cx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X14, 0X25 # xchgw (" _(VALUE) "), %dx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X3C, 0X25 # xchgw (" _(VALUE) "), %di")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X34, 0X25 # xchgw (" _(VALUE) "), %si")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X2C, 0X25 # xchgw (" _(VALUE) "), %bp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X24, 0X25 # xchgw (" _(VALUE) "), %sp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8W_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0X04, 0X25 # xchgw (" _(VALUE) "), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9W_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0X0C, 0X25 # xchgw (" _(VALUE) "), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10W_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0X14, 0X25 # xchgw (" _(VALUE) "), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11W_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0X1C, 0X25 # xchgw (" _(VALUE) "), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12W_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0X24, 0X25 # xchgw (" _(VALUE) "), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13W_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0X2C, 0X25 # xchgw (" _(VALUE) "), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14W_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0X34, 0X25 # xchgw (" _(VALUE) "), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15W_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0X3C, 0X25 # xchgw (" _(VALUE) "), %r15w")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_AX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X04, 0X25 # xchgw %ax, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X1C, 0X25 # xchgw %bx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X0C, 0X25 # xchgw %cx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X14, 0X25 # xchgw %dx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X3C, 0X25 # xchgw %di, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X34, 0X25 # xchgw %si, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X2C, 0X25 # xchgw %bp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X24, 0X25 # xchgw %sp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8W_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0X04, 0X25 # xchgw %r8w, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9W_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0X0C, 0X25 # xchgw %r9w, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10W_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0X14, 0X25 # xchgw %r10w, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11W_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0X1C, 0X25 # xchgw %r11w, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12W_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0X24, 0X25 # xchgw %r12w, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13W_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0X2C, 0X25 # xchgw %r13w, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14W_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0X34, 0X25 # xchgw %r14w, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15W_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0X3C, 0X25 # xchgw %r15w, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_AX_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X87, 0X00 # xchgw (%rax), %ax")
#define XCHG_AX_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X87, 0X03 # xchgw (%rbx), %ax")
#define XCHG_AX_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X87, 0X01 # xchgw (%rcx), %ax")
#define XCHG_AX_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X87, 0X02 # xchgw (%rdx), %ax")
#define XCHG_AX_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X87, 0X07 # xchgw (%rdi), %ax")
#define XCHG_AX_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X87, 0X06 # xchgw (%rsi), %ax")
#define XCHG_AX_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X87, 0X45, 0X00 # xchgw (%rbp), %ax")
#define XCHG_AX_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X87, 0X04, 0X24 # xchgw (%rsp), %ax")
#define XCHG_AX_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X00 # xchgw (%r8), %ax")
#define XCHG_AX_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X01 # xchgw (%r9), %ax")
#define XCHG_AX_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X02 # xchgw (%r10), %ax")
#define XCHG_AX_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X03 # xchgw (%r11), %ax")
#define XCHG_AX_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X04, 0X24 # xchgw (%r12), %ax")
#define XCHG_AX_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X45, 0X00 # xchgw (%r13), %ax")
#define XCHG_AX_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X06 # xchgw (%r14), %ax")
#define XCHG_AX_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X07 # xchgw (%r15), %ax")
#define XCHG_AX_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X87, 0X00 # xchgw (%eax), %ax")
#define XCHG_AX_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X87, 0X03 # xchgw (%ebx), %ax")
#define XCHG_AX_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X87, 0X01 # xchgw (%ecx), %ax")
#define XCHG_AX_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X87, 0X02 # xchgw (%edx), %ax")
#define XCHG_AX_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X87, 0X07 # xchgw (%edi), %ax")
#define XCHG_AX_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X87, 0X06 # xchgw (%esi), %ax")
#define XCHG_AX_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X87, 0X45, 0X00 # xchgw (%ebp), %ax")
#define XCHG_AX_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X87, 0X04, 0X24 # xchgw (%esp), %ax")

#define XCHG_BX_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X87, 0X18 # xchgw (%rax), %bx")
#define XCHG_BX_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X87, 0X1B # xchgw (%rbx), %bx")
#define XCHG_BX_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X87, 0X19 # xchgw (%rcx), %bx")
#define XCHG_BX_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X87, 0X1A # xchgw (%rdx), %bx")
#define XCHG_BX_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X87, 0X1F # xchgw (%rdi), %bx")
#define XCHG_BX_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X87, 0X1E # xchgw (%rsi), %bx")
#define XCHG_BX_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X87, 0X5D, 0X00 # xchgw (%rbp), %bx")
#define XCHG_BX_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X87, 0X1C, 0X24 # xchgw (%rsp), %bx")
#define XCHG_BX_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X18 # xchgw (%r8), %bx")
#define XCHG_BX_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X19 # xchgw (%r9), %bx")
#define XCHG_BX_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X1A # xchgw (%r10), %bx")
#define XCHG_BX_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X1B # xchgw (%r11), %bx")
#define XCHG_BX_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X1C, 0X24 # xchgw (%r12), %bx")
#define XCHG_BX_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X5D, 0X00 # xchgw (%r13), %bx")
#define XCHG_BX_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X1E # xchgw (%r14), %bx")
#define XCHG_BX_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X1F # xchgw (%r15), %bx")
#define XCHG_BX_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X87, 0X18 # xchgw (%eax), %bx")
#define XCHG_BX_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X87, 0X1B # xchgw (%ebx), %bx")
#define XCHG_BX_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X87, 0X19 # xchgw (%ecx), %bx")
#define XCHG_BX_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X87, 0X1A # xchgw (%edx), %bx")
#define XCHG_BX_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X87, 0X1F # xchgw (%edi), %bx")
#define XCHG_BX_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X87, 0X1E # xchgw (%esi), %bx")
#define XCHG_BX_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X87, 0X5D, 0X00 # xchgw (%ebp), %bx")
#define XCHG_BX_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X87, 0X1C, 0X24 # xchgw (%esp), %bx")

#define XCHG_CX_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X87, 0X08 # xchgw (%rax), %cx")
#define XCHG_CX_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X87, 0X0B # xchgw (%rbx), %cx")
#define XCHG_CX_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X87, 0X09 # xchgw (%rcx), %cx")
#define XCHG_CX_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X87, 0X0A # xchgw (%rdx), %cx")
#define XCHG_CX_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X87, 0X0F # xchgw (%rdi), %cx")
#define XCHG_CX_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X87, 0X0E # xchgw (%rsi), %cx")
#define XCHG_CX_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X87, 0X4D, 0X00 # xchgw (%rbp), %cx")
#define XCHG_CX_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X87, 0X0C, 0X24 # xchgw (%rsp), %cx")
#define XCHG_CX_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X08 # xchgw (%r8), %cx")
#define XCHG_CX_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X09 # xchgw (%r9), %cx")
#define XCHG_CX_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X0A # xchgw (%r10), %cx")
#define XCHG_CX_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X0B # xchgw (%r11), %cx")
#define XCHG_CX_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X0C, 0X24 # xchgw (%r12), %cx")
#define XCHG_CX_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X4D, 0X00 # xchgw (%r13), %cx")
#define XCHG_CX_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X0E # xchgw (%r14), %cx")
#define XCHG_CX_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X0F # xchgw (%r15), %cx")
#define XCHG_CX_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X87, 0X08 # xchgw (%eax), %cx")
#define XCHG_CX_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X87, 0X0B # xchgw (%ebx), %cx")
#define XCHG_CX_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X87, 0X09 # xchgw (%ecx), %cx")
#define XCHG_CX_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X87, 0X0A # xchgw (%edx), %cx")
#define XCHG_CX_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X87, 0X0F # xchgw (%edi), %cx")
#define XCHG_CX_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X87, 0X0E # xchgw (%esi), %cx")
#define XCHG_CX_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X87, 0X4D, 0X00 # xchgw (%ebp), %cx")
#define XCHG_CX_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X87, 0X0C, 0X24 # xchgw (%esp), %cx")

#define XCHG_DX_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X87, 0X10 # xchgw (%rax), %dx")
#define XCHG_DX_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X87, 0X13 # xchgw (%rbx), %dx")
#define XCHG_DX_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X87, 0X11 # xchgw (%rcx), %dx")
#define XCHG_DX_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X87, 0X12 # xchgw (%rdx), %dx")
#define XCHG_DX_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X87, 0X17 # xchgw (%rdi), %dx")
#define XCHG_DX_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X87, 0X16 # xchgw (%rsi), %dx")
#define XCHG_DX_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X87, 0X55, 0X00 # xchgw (%rbp), %dx")
#define XCHG_DX_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X87, 0X14, 0X24 # xchgw (%rsp), %dx")
#define XCHG_DX_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X10 # xchgw (%r8), %dx")
#define XCHG_DX_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X11 # xchgw (%r9), %dx")
#define XCHG_DX_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X12 # xchgw (%r10), %dx")
#define XCHG_DX_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X13 # xchgw (%r11), %dx")
#define XCHG_DX_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X14, 0X24 # xchgw (%r12), %dx")
#define XCHG_DX_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X55, 0X00 # xchgw (%r13), %dx")
#define XCHG_DX_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X16 # xchgw (%r14), %dx")
#define XCHG_DX_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X17 # xchgw (%r15), %dx")
#define XCHG_DX_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X87, 0X10 # xchgw (%eax), %dx")
#define XCHG_DX_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X87, 0X13 # xchgw (%ebx), %dx")
#define XCHG_DX_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X87, 0X11 # xchgw (%ecx), %dx")
#define XCHG_DX_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X87, 0X12 # xchgw (%edx), %dx")
#define XCHG_DX_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X87, 0X17 # xchgw (%edi), %dx")
#define XCHG_DX_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X87, 0X16 # xchgw (%esi), %dx")
#define XCHG_DX_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X87, 0X55, 0X00 # xchgw (%ebp), %dx")
#define XCHG_DX_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X87, 0X14, 0X24 # xchgw (%esp), %dx")

#define XCHG_DI_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X87, 0X38 # xchgw (%rax), %di")
#define XCHG_DI_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X87, 0X3B # xchgw (%rbx), %di")
#define XCHG_DI_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X87, 0X39 # xchgw (%rcx), %di")
#define XCHG_DI_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X87, 0X3A # xchgw (%rdx), %di")
#define XCHG_DI_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X87, 0X3F # xchgw (%rdi), %di")
#define XCHG_DI_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X87, 0X3E # xchgw (%rsi), %di")
#define XCHG_DI_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X87, 0X7D, 0X00 # xchgw (%rbp), %di")
#define XCHG_DI_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X87, 0X3C, 0X24 # xchgw (%rsp), %di")
#define XCHG_DI_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X38 # xchgw (%r8), %di")
#define XCHG_DI_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X39 # xchgw (%r9), %di")
#define XCHG_DI_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X3A # xchgw (%r10), %di")
#define XCHG_DI_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X3B # xchgw (%r11), %di")
#define XCHG_DI_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X3C, 0X24 # xchgw (%r12), %di")
#define XCHG_DI_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X7D, 0X00 # xchgw (%r13), %di")
#define XCHG_DI_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X3E # xchgw (%r14), %di")
#define XCHG_DI_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X3F # xchgw (%r15), %di")
#define XCHG_DI_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X87, 0X38 # xchgw (%eax), %di")
#define XCHG_DI_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X87, 0X3B # xchgw (%ebx), %di")
#define XCHG_DI_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X87, 0X39 # xchgw (%ecx), %di")
#define XCHG_DI_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X87, 0X3A # xchgw (%edx), %di")
#define XCHG_DI_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X87, 0X3F # xchgw (%edi), %di")
#define XCHG_DI_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X87, 0X3E # xchgw (%esi), %di")
#define XCHG_DI_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X87, 0X7D, 0X00 # xchgw (%ebp), %di")
#define XCHG_DI_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X87, 0X3C, 0X24 # xchgw (%esp), %di")

#define XCHG_SI_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X87, 0X30 # xchgw (%rax), %si")
#define XCHG_SI_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X87, 0X33 # xchgw (%rbx), %si")
#define XCHG_SI_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X87, 0X31 # xchgw (%rcx), %si")
#define XCHG_SI_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X87, 0X32 # xchgw (%rdx), %si")
#define XCHG_SI_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X87, 0X37 # xchgw (%rdi), %si")
#define XCHG_SI_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X87, 0X36 # xchgw (%rsi), %si")
#define XCHG_SI_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X87, 0X75, 0X00 # xchgw (%rbp), %si")
#define XCHG_SI_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X87, 0X34, 0X24 # xchgw (%rsp), %si")
#define XCHG_SI_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X30 # xchgw (%r8), %si")
#define XCHG_SI_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X31 # xchgw (%r9), %si")
#define XCHG_SI_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X32 # xchgw (%r10), %si")
#define XCHG_SI_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X33 # xchgw (%r11), %si")
#define XCHG_SI_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X34, 0X24 # xchgw (%r12), %si")
#define XCHG_SI_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X75, 0X00 # xchgw (%r13), %si")
#define XCHG_SI_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X36 # xchgw (%r14), %si")
#define XCHG_SI_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X37 # xchgw (%r15), %si")
#define XCHG_SI_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X87, 0X30 # xchgw (%eax), %si")
#define XCHG_SI_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X87, 0X33 # xchgw (%ebx), %si")
#define XCHG_SI_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X87, 0X31 # xchgw (%ecx), %si")
#define XCHG_SI_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X87, 0X32 # xchgw (%edx), %si")
#define XCHG_SI_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X87, 0X37 # xchgw (%edi), %si")
#define XCHG_SI_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X87, 0X36 # xchgw (%esi), %si")
#define XCHG_SI_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X87, 0X75, 0X00 # xchgw (%ebp), %si")
#define XCHG_SI_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X87, 0X34, 0X24 # xchgw (%esp), %si")

#define XCHG_BP_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X87, 0X28 # xchgw (%rax), %bp")
#define XCHG_BP_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X87, 0X2B # xchgw (%rbx), %bp")
#define XCHG_BP_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X87, 0X29 # xchgw (%rcx), %bp")
#define XCHG_BP_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X87, 0X2A # xchgw (%rdx), %bp")
#define XCHG_BP_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X87, 0X2F # xchgw (%rdi), %bp")
#define XCHG_BP_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X87, 0X2E # xchgw (%rsi), %bp")
#define XCHG_BP_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X87, 0X6D, 0X00 # xchgw (%rbp), %bp")
#define XCHG_BP_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X87, 0X2C, 0X24 # xchgw (%rsp), %bp")
#define XCHG_BP_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X28 # xchgw (%r8), %bp")
#define XCHG_BP_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X29 # xchgw (%r9), %bp")
#define XCHG_BP_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X2A # xchgw (%r10), %bp")
#define XCHG_BP_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X2B # xchgw (%r11), %bp")
#define XCHG_BP_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X2C, 0X24 # xchgw (%r12), %bp")
#define XCHG_BP_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X6D, 0X00 # xchgw (%r13), %bp")
#define XCHG_BP_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X2E # xchgw (%r14), %bp")
#define XCHG_BP_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X2F # xchgw (%r15), %bp")
#define XCHG_BP_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X87, 0X28 # xchgw (%eax), %bp")
#define XCHG_BP_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X87, 0X2B # xchgw (%ebx), %bp")
#define XCHG_BP_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X87, 0X29 # xchgw (%ecx), %bp")
#define XCHG_BP_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X87, 0X2A # xchgw (%edx), %bp")
#define XCHG_BP_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X87, 0X2F # xchgw (%edi), %bp")
#define XCHG_BP_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X87, 0X2E # xchgw (%esi), %bp")
#define XCHG_BP_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X87, 0X6D, 0X00 # xchgw (%ebp), %bp")
#define XCHG_BP_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X87, 0X2C, 0X24 # xchgw (%esp), %bp")

#define XCHG_SP_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X87, 0X20 # xchgw (%rax), %sp")
#define XCHG_SP_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X87, 0X23 # xchgw (%rbx), %sp")
#define XCHG_SP_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X87, 0X21 # xchgw (%rcx), %sp")
#define XCHG_SP_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X87, 0X22 # xchgw (%rdx), %sp")
#define XCHG_SP_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X87, 0X27 # xchgw (%rdi), %sp")
#define XCHG_SP_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X87, 0X26 # xchgw (%rsi), %sp")
#define XCHG_SP_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X87, 0X65, 0X00 # xchgw (%rbp), %sp")
#define XCHG_SP_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X87, 0X24, 0X24 # xchgw (%rsp), %sp")
#define XCHG_SP_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X20 # xchgw (%r8), %sp")
#define XCHG_SP_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X21 # xchgw (%r9), %sp")
#define XCHG_SP_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X22 # xchgw (%r10), %sp")
#define XCHG_SP_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X23 # xchgw (%r11), %sp")
#define XCHG_SP_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X24, 0X24 # xchgw (%r12), %sp")
#define XCHG_SP_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X65, 0X00 # xchgw (%r13), %sp")
#define XCHG_SP_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X26 # xchgw (%r14), %sp")
#define XCHG_SP_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X27 # xchgw (%r15), %sp")
#define XCHG_SP_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X87, 0X20 # xchgw (%eax), %sp")
#define XCHG_SP_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X87, 0X23 # xchgw (%ebx), %sp")
#define XCHG_SP_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X87, 0X21 # xchgw (%ecx), %sp")
#define XCHG_SP_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X87, 0X22 # xchgw (%edx), %sp")
#define XCHG_SP_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X87, 0X27 # xchgw (%edi), %sp")
#define XCHG_SP_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X87, 0X26 # xchgw (%esi), %sp")
#define XCHG_SP_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X87, 0X65, 0X00 # xchgw (%ebp), %sp")
#define XCHG_SP_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X87, 0X24, 0X24 # xchgw (%esp), %sp")

#define XCHG_R8W_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X87, 0X00 # xchgw (%rax), %r8w")
#define XCHG_R8W_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X87, 0X03 # xchgw (%rbx), %r8w")
#define XCHG_R8W_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X87, 0X01 # xchgw (%rcx), %r8w")
#define XCHG_R8W_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X87, 0X02 # xchgw (%rdx), %r8w")
#define XCHG_R8W_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X87, 0X07 # xchgw (%rdi), %r8w")
#define XCHG_R8W_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X87, 0X06 # xchgw (%rsi), %r8w")
#define XCHG_R8W_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X87, 0X45, 0X00 # xchgw (%rbp), %r8w")
#define XCHG_R8W_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X87, 0X04, 0X24 # xchgw (%rsp), %r8w")
#define XCHG_R8W_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X00 # xchgw (%r8), %r8w")
#define XCHG_R8W_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X01 # xchgw (%r9), %r8w")
#define XCHG_R8W_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X02 # xchgw (%r10), %r8w")
#define XCHG_R8W_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X03 # xchgw (%r11), %r8w")
#define XCHG_R8W_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X04, 0X24 # xchgw (%r12), %r8w")
#define XCHG_R8W_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X45, 0X00 # xchgw (%r13), %r8w")
#define XCHG_R8W_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X06 # xchgw (%r14), %r8w")
#define XCHG_R8W_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X07 # xchgw (%r15), %r8w")
#define XCHG_R8W_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X00 # xchgw (%eax), %r8w")
#define XCHG_R8W_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X03 # xchgw (%ebx), %r8w")
#define XCHG_R8W_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X01 # xchgw (%ecx), %r8w")
#define XCHG_R8W_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X02 # xchgw (%edx), %r8w")
#define XCHG_R8W_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X07 # xchgw (%edi), %r8w")
#define XCHG_R8W_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X06 # xchgw (%esi), %r8w")
#define XCHG_R8W_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X45, 0X00 # xchgw (%ebp), %r8w")
#define XCHG_R8W_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X04, 0X24 # xchgw (%esp), %r8w")

#define XCHG_R9W_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X87, 0X08 # xchgw (%rax), %r9w")
#define XCHG_R9W_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X87, 0X0B # xchgw (%rbx), %r9w")
#define XCHG_R9W_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X87, 0X09 # xchgw (%rcx), %r9w")
#define XCHG_R9W_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X87, 0X0A # xchgw (%rdx), %r9w")
#define XCHG_R9W_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X87, 0X0F # xchgw (%rdi), %r9w")
#define XCHG_R9W_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X87, 0X0E # xchgw (%rsi), %r9w")
#define XCHG_R9W_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X87, 0X4D, 0X00 # xchgw (%rbp), %r9w")
#define XCHG_R9W_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X87, 0X0C, 0X24 # xchgw (%rsp), %r9w")
#define XCHG_R9W_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X08 # xchgw (%r8), %r9w")
#define XCHG_R9W_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X09 # xchgw (%r9), %r9w")
#define XCHG_R9W_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X0A # xchgw (%r10), %r9w")
#define XCHG_R9W_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X0B # xchgw (%r11), %r9w")
#define XCHG_R9W_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X0C, 0X24 # xchgw (%r12), %r9w")
#define XCHG_R9W_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X4D, 0X00 # xchgw (%r13), %r9w")
#define XCHG_R9W_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X0E # xchgw (%r14), %r9w")
#define XCHG_R9W_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X0F # xchgw (%r15), %r9w")
#define XCHG_R9W_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X08 # xchgw (%eax), %r9w")
#define XCHG_R9W_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X0B # xchgw (%ebx), %r9w")
#define XCHG_R9W_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X09 # xchgw (%ecx), %r9w")
#define XCHG_R9W_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X0A # xchgw (%edx), %r9w")
#define XCHG_R9W_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X0F # xchgw (%edi), %r9w")
#define XCHG_R9W_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X0E # xchgw (%esi), %r9w")
#define XCHG_R9W_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X4D, 0X00 # xchgw (%ebp), %r9w")
#define XCHG_R9W_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X0C, 0X24 # xchgw (%esp), %r9w")

#define XCHG_R10W_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X87, 0X10 # xchgw (%rax), %r10w")
#define XCHG_R10W_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X87, 0X13 # xchgw (%rbx), %r10w")
#define XCHG_R10W_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X87, 0X11 # xchgw (%rcx), %r10w")
#define XCHG_R10W_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X87, 0X12 # xchgw (%rdx), %r10w")
#define XCHG_R10W_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X87, 0X17 # xchgw (%rdi), %r10w")
#define XCHG_R10W_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X87, 0X16 # xchgw (%rsi), %r10w")
#define XCHG_R10W_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X87, 0X55, 0X00 # xchgw (%rbp), %r10w")
#define XCHG_R10W_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X87, 0X14, 0X24 # xchgw (%rsp), %r10w")
#define XCHG_R10W_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X10 # xchgw (%r8), %r10w")
#define XCHG_R10W_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X11 # xchgw (%r9), %r10w")
#define XCHG_R10W_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X12 # xchgw (%r10), %r10w")
#define XCHG_R10W_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X13 # xchgw (%r11), %r10w")
#define XCHG_R10W_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X14, 0X24 # xchgw (%r12), %r10w")
#define XCHG_R10W_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X55, 0X00 # xchgw (%r13), %r10w")
#define XCHG_R10W_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X16 # xchgw (%r14), %r10w")
#define XCHG_R10W_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X17 # xchgw (%r15), %r10w")
#define XCHG_R10W_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X10 # xchgw (%eax), %r10w")
#define XCHG_R10W_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X13 # xchgw (%ebx), %r10w")
#define XCHG_R10W_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X11 # xchgw (%ecx), %r10w")
#define XCHG_R10W_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X12 # xchgw (%edx), %r10w")
#define XCHG_R10W_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X17 # xchgw (%edi), %r10w")
#define XCHG_R10W_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X16 # xchgw (%esi), %r10w")
#define XCHG_R10W_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X55, 0X00 # xchgw (%ebp), %r10w")
#define XCHG_R10W_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X14, 0X24 # xchgw (%esp), %r10w")

#define XCHG_R11W_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X87, 0X18 # xchgw (%rax), %r11w")
#define XCHG_R11W_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X87, 0X1B # xchgw (%rbx), %r11w")
#define XCHG_R11W_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X87, 0X19 # xchgw (%rcx), %r11w")
#define XCHG_R11W_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X87, 0X1A # xchgw (%rdx), %r11w")
#define XCHG_R11W_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X87, 0X1F # xchgw (%rdi), %r11w")
#define XCHG_R11W_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X87, 0X1E # xchgw (%rsi), %r11w")
#define XCHG_R11W_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X87, 0X5D, 0X00 # xchgw (%rbp), %r11w")
#define XCHG_R11W_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X87, 0X1C, 0X24 # xchgw (%rsp), %r11w")
#define XCHG_R11W_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X18 # xchgw (%r8), %r11w")
#define XCHG_R11W_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X19 # xchgw (%r9), %r11w")
#define XCHG_R11W_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X1A # xchgw (%r10), %r11w")
#define XCHG_R11W_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X1B # xchgw (%r11), %r11w")
#define XCHG_R11W_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X1C, 0X24 # xchgw (%r12), %r11w")
#define XCHG_R11W_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X5D, 0X00 # xchgw (%r13), %r11w")
#define XCHG_R11W_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X1E # xchgw (%r14), %r11w")
#define XCHG_R11W_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X1F # xchgw (%r15), %r11w")
#define XCHG_R11W_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X18 # xchgw (%eax), %r11w")
#define XCHG_R11W_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X1B # xchgw (%ebx), %r11w")
#define XCHG_R11W_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X19 # xchgw (%ecx), %r11w")
#define XCHG_R11W_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X1A # xchgw (%edx), %r11w")
#define XCHG_R11W_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X1F # xchgw (%edi), %r11w")
#define XCHG_R11W_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X1E # xchgw (%esi), %r11w")
#define XCHG_R11W_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X5D, 0X00 # xchgw (%ebp), %r11w")
#define XCHG_R11W_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X1C, 0X24 # xchgw (%esp), %r11w")

#define XCHG_R12W_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X87, 0X20 # xchgw (%rax), %r12w")
#define XCHG_R12W_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X87, 0X23 # xchgw (%rbx), %r12w")
#define XCHG_R12W_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X87, 0X21 # xchgw (%rcx), %r12w")
#define XCHG_R12W_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X87, 0X22 # xchgw (%rdx), %r12w")
#define XCHG_R12W_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X87, 0X27 # xchgw (%rdi), %r12w")
#define XCHG_R12W_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X87, 0X26 # xchgw (%rsi), %r12w")
#define XCHG_R12W_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X87, 0X65, 0X00 # xchgw (%rbp), %r12w")
#define XCHG_R12W_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X87, 0X24, 0X24 # xchgw (%rsp), %r12w")
#define XCHG_R12W_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X20 # xchgw (%r8), %r12w")
#define XCHG_R12W_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X21 # xchgw (%r9), %r12w")
#define XCHG_R12W_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X22 # xchgw (%r10), %r12w")
#define XCHG_R12W_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X23 # xchgw (%r11), %r12w")
#define XCHG_R12W_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X24, 0X24 # xchgw (%r12), %r12w")
#define XCHG_R12W_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X65, 0X00 # xchgw (%r13), %r12w")
#define XCHG_R12W_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X26 # xchgw (%r14), %r12w")
#define XCHG_R12W_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X27 # xchgw (%r15), %r12w")
#define XCHG_R12W_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X20 # xchgw (%eax), %r12w")
#define XCHG_R12W_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X23 # xchgw (%ebx), %r12w")
#define XCHG_R12W_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X21 # xchgw (%ecx), %r12w")
#define XCHG_R12W_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X22 # xchgw (%edx), %r12w")
#define XCHG_R12W_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X27 # xchgw (%edi), %r12w")
#define XCHG_R12W_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X26 # xchgw (%esi), %r12w")
#define XCHG_R12W_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X65, 0X00 # xchgw (%ebp), %r12w")
#define XCHG_R12W_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X24, 0X24 # xchgw (%esp), %r12w")

#define XCHG_R13W_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X87, 0X28 # xchgw (%rax), %r13w")
#define XCHG_R13W_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X87, 0X2B # xchgw (%rbx), %r13w")
#define XCHG_R13W_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X87, 0X29 # xchgw (%rcx), %r13w")
#define XCHG_R13W_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X87, 0X2A # xchgw (%rdx), %r13w")
#define XCHG_R13W_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X87, 0X2F # xchgw (%rdi), %r13w")
#define XCHG_R13W_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X87, 0X2E # xchgw (%rsi), %r13w")
#define XCHG_R13W_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X87, 0X6D, 0X00 # xchgw (%rbp), %r13w")
#define XCHG_R13W_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X87, 0X2C, 0X24 # xchgw (%rsp), %r13w")
#define XCHG_R13W_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X28 # xchgw (%r8), %r13w")
#define XCHG_R13W_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X29 # xchgw (%r9), %r13w")
#define XCHG_R13W_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X2A # xchgw (%r10), %r13w")
#define XCHG_R13W_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X2B # xchgw (%r11), %r13w")
#define XCHG_R13W_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X2C, 0X24 # xchgw (%r12), %r13w")
#define XCHG_R13W_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X6D, 0X00 # xchgw (%r13), %r13w")
#define XCHG_R13W_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X2E # xchgw (%r14), %r13w")
#define XCHG_R13W_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X2F # xchgw (%r15), %r13w")
#define XCHG_R13W_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X28 # xchgw (%eax), %r13w")
#define XCHG_R13W_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X2B # xchgw (%ebx), %r13w")
#define XCHG_R13W_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X29 # xchgw (%ecx), %r13w")
#define XCHG_R13W_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X2A # xchgw (%edx), %r13w")
#define XCHG_R13W_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X2F # xchgw (%edi), %r13w")
#define XCHG_R13W_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X2E # xchgw (%esi), %r13w")
#define XCHG_R13W_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X6D, 0X00 # xchgw (%ebp), %r13w")
#define XCHG_R13W_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X2C, 0X24 # xchgw (%esp), %r13w")

#define XCHG_R14W_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X87, 0X30 # xchgw (%rax), %r14w")
#define XCHG_R14W_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X87, 0X33 # xchgw (%rbx), %r14w")
#define XCHG_R14W_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X87, 0X31 # xchgw (%rcx), %r14w")
#define XCHG_R14W_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X87, 0X32 # xchgw (%rdx), %r14w")
#define XCHG_R14W_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X87, 0X37 # xchgw (%rdi), %r14w")
#define XCHG_R14W_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X87, 0X36 # xchgw (%rsi), %r14w")
#define XCHG_R14W_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X87, 0X75, 0X00 # xchgw (%rbp), %r14w")
#define XCHG_R14W_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X87, 0X34, 0X24 # xchgw (%rsp), %r14w")
#define XCHG_R14W_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X30 # xchgw (%r8), %r14w")
#define XCHG_R14W_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X31 # xchgw (%r9), %r14w")
#define XCHG_R14W_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X32 # xchgw (%r10), %r14w")
#define XCHG_R14W_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X33 # xchgw (%r11), %r14w")
#define XCHG_R14W_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X34, 0X24 # xchgw (%r12), %r14w")
#define XCHG_R14W_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X75, 0X00 # xchgw (%r13), %r14w")
#define XCHG_R14W_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X36 # xchgw (%r14), %r14w")
#define XCHG_R14W_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X37 # xchgw (%r15), %r14w")
#define XCHG_R14W_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X30 # xchgw (%eax), %r14w")
#define XCHG_R14W_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X33 # xchgw (%ebx), %r14w")
#define XCHG_R14W_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X31 # xchgw (%ecx), %r14w")
#define XCHG_R14W_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X32 # xchgw (%edx), %r14w")
#define XCHG_R14W_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X37 # xchgw (%edi), %r14w")
#define XCHG_R14W_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X36 # xchgw (%esi), %r14w")
#define XCHG_R14W_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X75, 0X00 # xchgw (%ebp), %r14w")
#define XCHG_R14W_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X34, 0X24 # xchgw (%esp), %r14w")

#define XCHG_R15W_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X87, 0X38 # xchgw (%rax), %r15w")
#define XCHG_R15W_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X87, 0X3B # xchgw (%rbx), %r15w")
#define XCHG_R15W_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X87, 0X39 # xchgw (%rcx), %r15w")
#define XCHG_R15W_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X87, 0X3A # xchgw (%rdx), %r15w")
#define XCHG_R15W_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X87, 0X3F # xchgw (%rdi), %r15w")
#define XCHG_R15W_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X87, 0X3E # xchgw (%rsi), %r15w")
#define XCHG_R15W_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X87, 0X7D, 0X00 # xchgw (%rbp), %r15w")
#define XCHG_R15W_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X87, 0X3C, 0X24 # xchgw (%rsp), %r15w")
#define XCHG_R15W_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X38 # xchgw (%r8), %r15w")
#define XCHG_R15W_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X39 # xchgw (%r9), %r15w")
#define XCHG_R15W_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X3A # xchgw (%r10), %r15w")
#define XCHG_R15W_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X3B # xchgw (%r11), %r15w")
#define XCHG_R15W_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X3C, 0X24 # xchgw (%r12), %r15w")
#define XCHG_R15W_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X7D, 0X00 # xchgw (%r13), %r15w")
#define XCHG_R15W_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X3E # xchgw (%r14), %r15w")
#define XCHG_R15W_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X3F # xchgw (%r15), %r15w")
#define XCHG_R15W_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X38 # xchgw (%eax), %r15w")
#define XCHG_R15W_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X3B # xchgw (%ebx), %r15w")
#define XCHG_R15W_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X39 # xchgw (%ecx), %r15w")
#define XCHG_R15W_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X3A # xchgw (%edx), %r15w")
#define XCHG_R15W_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X3F # xchgw (%edi), %r15w")
#define XCHG_R15W_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X3E # xchgw (%esi), %r15w")
#define XCHG_R15W_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X7D, 0X00 # xchgw (%ebp), %r15w")
#define XCHG_R15W_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X3C, 0X24 # xchgw (%esp), %r15w")

#define XCHG_AX_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X87, 0X00 # xchgw %ax, (%rax)")
#define XCHG_AX_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X87, 0X03 # xchgw %ax, (%rbx)")
#define XCHG_AX_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X87, 0X01 # xchgw %ax, (%rcx)")
#define XCHG_AX_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X87, 0X02 # xchgw %ax, (%rdx)")
#define XCHG_AX_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X87, 0X07 # xchgw %ax, (%rdi)")
#define XCHG_AX_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X87, 0X06 # xchgw %ax, (%rsi)")
#define XCHG_AX_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X87, 0X45, 0X00 # xchgw %ax, (%rbp)")
#define XCHG_AX_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X87, 0X04, 0X24 # xchgw %ax, (%rsp)")
#define XCHG_AX_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X00 # xchgw %ax, (%r8)")
#define XCHG_AX_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X01 # xchgw %ax, (%r9)")
#define XCHG_AX_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X02 # xchgw %ax, (%r10)")
#define XCHG_AX_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X03 # xchgw %ax, (%r11)")
#define XCHG_AX_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X04, 0X24 # xchgw %ax, (%r12)")
#define XCHG_AX_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X45, 0X00 # xchgw %ax, (%r13)")
#define XCHG_AX_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X06 # xchgw %ax, (%r14)")
#define XCHG_AX_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X07 # xchgw %ax, (%r15)")
#define XCHG_AX_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X87, 0X00 # xchgw %ax, (%eax)")
#define XCHG_AX_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X87, 0X03 # xchgw %ax, (%ebx)")
#define XCHG_AX_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X87, 0X01 # xchgw %ax, (%ecx)")
#define XCHG_AX_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X87, 0X02 # xchgw %ax, (%edx)")
#define XCHG_AX_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X87, 0X07 # xchgw %ax, (%edi)")
#define XCHG_AX_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X87, 0X06 # xchgw %ax, (%esi)")
#define XCHG_AX_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X87, 0X45, 0X00 # xchgw %ax, (%ebp)")
#define XCHG_AX_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X87, 0X04, 0X24 # xchgw %ax, (%esp)")

#define XCHG_BX_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X87, 0X18 # xchgw %bx, (%rax)")
#define XCHG_BX_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X87, 0X1B # xchgw %bx, (%rbx)")
#define XCHG_BX_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X87, 0X19 # xchgw %bx, (%rcx)")
#define XCHG_BX_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X87, 0X1A # xchgw %bx, (%rdx)")
#define XCHG_BX_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X87, 0X1F # xchgw %bx, (%rdi)")
#define XCHG_BX_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X87, 0X1E # xchgw %bx, (%rsi)")
#define XCHG_BX_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X87, 0X5D, 0X00 # xchgw %bx, (%rbp)")
#define XCHG_BX_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X87, 0X1C, 0X24 # xchgw %bx, (%rsp)")
#define XCHG_BX_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X18 # xchgw %bx, (%r8)")
#define XCHG_BX_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X19 # xchgw %bx, (%r9)")
#define XCHG_BX_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X1A # xchgw %bx, (%r10)")
#define XCHG_BX_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X1B # xchgw %bx, (%r11)")
#define XCHG_BX_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X1C, 0X24 # xchgw %bx, (%r12)")
#define XCHG_BX_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X5D, 0X00 # xchgw %bx, (%r13)")
#define XCHG_BX_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X1E # xchgw %bx, (%r14)")
#define XCHG_BX_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X1F # xchgw %bx, (%r15)")
#define XCHG_BX_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X87, 0X18 # xchgw %bx, (%eax)")
#define XCHG_BX_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X87, 0X1B # xchgw %bx, (%ebx)")
#define XCHG_BX_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X87, 0X19 # xchgw %bx, (%ecx)")
#define XCHG_BX_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X87, 0X1A # xchgw %bx, (%edx)")
#define XCHG_BX_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X87, 0X1F # xchgw %bx, (%edi)")
#define XCHG_BX_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X87, 0X1E # xchgw %bx, (%esi)")
#define XCHG_BX_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X87, 0X5D, 0X00 # xchgw %bx, (%ebp)")
#define XCHG_BX_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X87, 0X1C, 0X24 # xchgw %bx, (%esp)")

#define XCHG_CX_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X87, 0X08 # xchgw %cx, (%rax)")
#define XCHG_CX_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X87, 0X0B # xchgw %cx, (%rbx)")
#define XCHG_CX_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X87, 0X09 # xchgw %cx, (%rcx)")
#define XCHG_CX_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X87, 0X0A # xchgw %cx, (%rdx)")
#define XCHG_CX_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X87, 0X0F # xchgw %cx, (%rdi)")
#define XCHG_CX_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X87, 0X0E # xchgw %cx, (%rsi)")
#define XCHG_CX_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X87, 0X4D, 0X00 # xchgw %cx, (%rbp)")
#define XCHG_CX_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X87, 0X0C, 0X24 # xchgw %cx, (%rsp)")
#define XCHG_CX_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X08 # xchgw %cx, (%r8)")
#define XCHG_CX_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X09 # xchgw %cx, (%r9)")
#define XCHG_CX_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X0A # xchgw %cx, (%r10)")
#define XCHG_CX_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X0B # xchgw %cx, (%r11)")
#define XCHG_CX_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X0C, 0X24 # xchgw %cx, (%r12)")
#define XCHG_CX_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X4D, 0X00 # xchgw %cx, (%r13)")
#define XCHG_CX_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X0E # xchgw %cx, (%r14)")
#define XCHG_CX_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X0F # xchgw %cx, (%r15)")
#define XCHG_CX_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X87, 0X08 # xchgw %cx, (%eax)")
#define XCHG_CX_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X87, 0X0B # xchgw %cx, (%ebx)")
#define XCHG_CX_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X87, 0X09 # xchgw %cx, (%ecx)")
#define XCHG_CX_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X87, 0X0A # xchgw %cx, (%edx)")
#define XCHG_CX_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X87, 0X0F # xchgw %cx, (%edi)")
#define XCHG_CX_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X87, 0X0E # xchgw %cx, (%esi)")
#define XCHG_CX_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X87, 0X4D, 0X00 # xchgw %cx, (%ebp)")
#define XCHG_CX_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X87, 0X0C, 0X24 # xchgw %cx, (%esp)")

#define XCHG_DX_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X87, 0X10 # xchgw %dx, (%rax)")
#define XCHG_DX_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X87, 0X13 # xchgw %dx, (%rbx)")
#define XCHG_DX_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X87, 0X11 # xchgw %dx, (%rcx)")
#define XCHG_DX_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X87, 0X12 # xchgw %dx, (%rdx)")
#define XCHG_DX_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X87, 0X17 # xchgw %dx, (%rdi)")
#define XCHG_DX_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X87, 0X16 # xchgw %dx, (%rsi)")
#define XCHG_DX_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X87, 0X55, 0X00 # xchgw %dx, (%rbp)")
#define XCHG_DX_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X87, 0X14, 0X24 # xchgw %dx, (%rsp)")
#define XCHG_DX_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X10 # xchgw %dx, (%r8)")
#define XCHG_DX_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X11 # xchgw %dx, (%r9)")
#define XCHG_DX_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X12 # xchgw %dx, (%r10)")
#define XCHG_DX_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X13 # xchgw %dx, (%r11)")
#define XCHG_DX_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X14, 0X24 # xchgw %dx, (%r12)")
#define XCHG_DX_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X55, 0X00 # xchgw %dx, (%r13)")
#define XCHG_DX_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X16 # xchgw %dx, (%r14)")
#define XCHG_DX_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X17 # xchgw %dx, (%r15)")
#define XCHG_DX_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X87, 0X10 # xchgw %dx, (%eax)")
#define XCHG_DX_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X87, 0X13 # xchgw %dx, (%ebx)")
#define XCHG_DX_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X87, 0X11 # xchgw %dx, (%ecx)")
#define XCHG_DX_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X87, 0X12 # xchgw %dx, (%edx)")
#define XCHG_DX_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X87, 0X17 # xchgw %dx, (%edi)")
#define XCHG_DX_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X87, 0X16 # xchgw %dx, (%esi)")
#define XCHG_DX_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X87, 0X55, 0X00 # xchgw %dx, (%ebp)")
#define XCHG_DX_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X87, 0X14, 0X24 # xchgw %dx, (%esp)")

#define XCHG_DI_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X87, 0X38 # xchgw %di, (%rax)")
#define XCHG_DI_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X87, 0X3B # xchgw %di, (%rbx)")
#define XCHG_DI_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X87, 0X39 # xchgw %di, (%rcx)")
#define XCHG_DI_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X87, 0X3A # xchgw %di, (%rdx)")
#define XCHG_DI_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X87, 0X3F # xchgw %di, (%rdi)")
#define XCHG_DI_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X87, 0X3E # xchgw %di, (%rsi)")
#define XCHG_DI_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X87, 0X7D, 0X00 # xchgw %di, (%rbp)")
#define XCHG_DI_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X87, 0X3C, 0X24 # xchgw %di, (%rsp)")
#define XCHG_DI_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X38 # xchgw %di, (%r8)")
#define XCHG_DI_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X39 # xchgw %di, (%r9)")
#define XCHG_DI_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X3A # xchgw %di, (%r10)")
#define XCHG_DI_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X3B # xchgw %di, (%r11)")
#define XCHG_DI_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X3C, 0X24 # xchgw %di, (%r12)")
#define XCHG_DI_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X7D, 0X00 # xchgw %di, (%r13)")
#define XCHG_DI_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X3E # xchgw %di, (%r14)")
#define XCHG_DI_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X3F # xchgw %di, (%r15)")
#define XCHG_DI_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X87, 0X38 # xchgw %di, (%eax)")
#define XCHG_DI_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X87, 0X3B # xchgw %di, (%ebx)")
#define XCHG_DI_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X87, 0X39 # xchgw %di, (%ecx)")
#define XCHG_DI_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X87, 0X3A # xchgw %di, (%edx)")
#define XCHG_DI_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X87, 0X3F # xchgw %di, (%edi)")
#define XCHG_DI_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X87, 0X3E # xchgw %di, (%esi)")
#define XCHG_DI_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X87, 0X7D, 0X00 # xchgw %di, (%ebp)")
#define XCHG_DI_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X87, 0X3C, 0X24 # xchgw %di, (%esp)")

#define XCHG_SI_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X87, 0X30 # xchgw %si, (%rax)")
#define XCHG_SI_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X87, 0X33 # xchgw %si, (%rbx)")
#define XCHG_SI_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X87, 0X31 # xchgw %si, (%rcx)")
#define XCHG_SI_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X87, 0X32 # xchgw %si, (%rdx)")
#define XCHG_SI_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X87, 0X37 # xchgw %si, (%rdi)")
#define XCHG_SI_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X87, 0X36 # xchgw %si, (%rsi)")
#define XCHG_SI_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X87, 0X75, 0X00 # xchgw %si, (%rbp)")
#define XCHG_SI_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X87, 0X34, 0X24 # xchgw %si, (%rsp)")
#define XCHG_SI_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X30 # xchgw %si, (%r8)")
#define XCHG_SI_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X31 # xchgw %si, (%r9)")
#define XCHG_SI_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X32 # xchgw %si, (%r10)")
#define XCHG_SI_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X33 # xchgw %si, (%r11)")
#define XCHG_SI_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X34, 0X24 # xchgw %si, (%r12)")
#define XCHG_SI_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X75, 0X00 # xchgw %si, (%r13)")
#define XCHG_SI_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X36 # xchgw %si, (%r14)")
#define XCHG_SI_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X37 # xchgw %si, (%r15)")
#define XCHG_SI_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X87, 0X30 # xchgw %si, (%eax)")
#define XCHG_SI_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X87, 0X33 # xchgw %si, (%ebx)")
#define XCHG_SI_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X87, 0X31 # xchgw %si, (%ecx)")
#define XCHG_SI_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X87, 0X32 # xchgw %si, (%edx)")
#define XCHG_SI_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X87, 0X37 # xchgw %si, (%edi)")
#define XCHG_SI_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X87, 0X36 # xchgw %si, (%esi)")
#define XCHG_SI_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X87, 0X75, 0X00 # xchgw %si, (%ebp)")
#define XCHG_SI_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X87, 0X34, 0X24 # xchgw %si, (%esp)")

#define XCHG_BP_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X87, 0X28 # xchgw %bp, (%rax)")
#define XCHG_BP_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X87, 0X2B # xchgw %bp, (%rbx)")
#define XCHG_BP_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X87, 0X29 # xchgw %bp, (%rcx)")
#define XCHG_BP_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X87, 0X2A # xchgw %bp, (%rdx)")
#define XCHG_BP_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X87, 0X2F # xchgw %bp, (%rdi)")
#define XCHG_BP_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X87, 0X2E # xchgw %bp, (%rsi)")
#define XCHG_BP_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X87, 0X6D, 0X00 # xchgw %bp, (%rbp)")
#define XCHG_BP_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X87, 0X2C, 0X24 # xchgw %bp, (%rsp)")
#define XCHG_BP_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X28 # xchgw %bp, (%r8)")
#define XCHG_BP_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X29 # xchgw %bp, (%r9)")
#define XCHG_BP_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X2A # xchgw %bp, (%r10)")
#define XCHG_BP_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X2B # xchgw %bp, (%r11)")
#define XCHG_BP_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X2C, 0X24 # xchgw %bp, (%r12)")
#define XCHG_BP_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X6D, 0X00 # xchgw %bp, (%r13)")
#define XCHG_BP_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X2E # xchgw %bp, (%r14)")
#define XCHG_BP_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X2F # xchgw %bp, (%r15)")
#define XCHG_BP_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X87, 0X28 # xchgw %bp, (%eax)")
#define XCHG_BP_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X87, 0X2B # xchgw %bp, (%ebx)")
#define XCHG_BP_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X87, 0X29 # xchgw %bp, (%ecx)")
#define XCHG_BP_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X87, 0X2A # xchgw %bp, (%edx)")
#define XCHG_BP_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X87, 0X2F # xchgw %bp, (%edi)")
#define XCHG_BP_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X87, 0X2E # xchgw %bp, (%esi)")
#define XCHG_BP_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X87, 0X6D, 0X00 # xchgw %bp, (%ebp)")
#define XCHG_BP_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X87, 0X2C, 0X24 # xchgw %bp, (%esp)")

#define XCHG_SP_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X87, 0X20 # xchgw %sp, (%rax)")
#define XCHG_SP_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X87, 0X23 # xchgw %sp, (%rbx)")
#define XCHG_SP_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X87, 0X21 # xchgw %sp, (%rcx)")
#define XCHG_SP_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X87, 0X22 # xchgw %sp, (%rdx)")
#define XCHG_SP_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X87, 0X27 # xchgw %sp, (%rdi)")
#define XCHG_SP_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X87, 0X26 # xchgw %sp, (%rsi)")
#define XCHG_SP_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X87, 0X65, 0X00 # xchgw %sp, (%rbp)")
#define XCHG_SP_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X87, 0X24, 0X24 # xchgw %sp, (%rsp)")
#define XCHG_SP_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X20 # xchgw %sp, (%r8)")
#define XCHG_SP_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X21 # xchgw %sp, (%r9)")
#define XCHG_SP_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X22 # xchgw %sp, (%r10)")
#define XCHG_SP_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X23 # xchgw %sp, (%r11)")
#define XCHG_SP_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X24, 0X24 # xchgw %sp, (%r12)")
#define XCHG_SP_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X65, 0X00 # xchgw %sp, (%r13)")
#define XCHG_SP_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X26 # xchgw %sp, (%r14)")
#define XCHG_SP_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X87, 0X27 # xchgw %sp, (%r15)")
#define XCHG_SP_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X87, 0X20 # xchgw %sp, (%eax)")
#define XCHG_SP_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X87, 0X23 # xchgw %sp, (%ebx)")
#define XCHG_SP_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X87, 0X21 # xchgw %sp, (%ecx)")
#define XCHG_SP_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X87, 0X22 # xchgw %sp, (%edx)")
#define XCHG_SP_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X87, 0X27 # xchgw %sp, (%edi)")
#define XCHG_SP_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X87, 0X26 # xchgw %sp, (%esi)")
#define XCHG_SP_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X87, 0X65, 0X00 # xchgw %sp, (%ebp)")
#define XCHG_SP_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X87, 0X24, 0X24 # xchgw %sp, (%esp)")

#define XCHG_R8W_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X87, 0X00 # xchgw %r8w, (%rax)")
#define XCHG_R8W_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X87, 0X03 # xchgw %r8w, (%rbx)")
#define XCHG_R8W_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X87, 0X01 # xchgw %r8w, (%rcx)")
#define XCHG_R8W_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X87, 0X02 # xchgw %r8w, (%rdx)")
#define XCHG_R8W_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X87, 0X07 # xchgw %r8w, (%rdi)")
#define XCHG_R8W_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X87, 0X06 # xchgw %r8w, (%rsi)")
#define XCHG_R8W_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X87, 0X45, 0X00 # xchgw %r8w, (%rbp)")
#define XCHG_R8W_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X87, 0X04, 0X24 # xchgw %r8w, (%rsp)")
#define XCHG_R8W_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X00 # xchgw %r8w, (%r8)")
#define XCHG_R8W_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X01 # xchgw %r8w, (%r9)")
#define XCHG_R8W_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X02 # xchgw %r8w, (%r10)")
#define XCHG_R8W_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X03 # xchgw %r8w, (%r11)")
#define XCHG_R8W_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X04, 0X24 # xchgw %r8w, (%r12)")
#define XCHG_R8W_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X45, 0X00 # xchgw %r8w, (%r13)")
#define XCHG_R8W_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X06 # xchgw %r8w, (%r14)")
#define XCHG_R8W_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X07 # xchgw %r8w, (%r15)")
#define XCHG_R8W_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X00 # xchgw %r8w, (%eax)")
#define XCHG_R8W_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X03 # xchgw %r8w, (%ebx)")
#define XCHG_R8W_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X01 # xchgw %r8w, (%ecx)")
#define XCHG_R8W_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X02 # xchgw %r8w, (%edx)")
#define XCHG_R8W_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X07 # xchgw %r8w, (%edi)")
#define XCHG_R8W_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X06 # xchgw %r8w, (%esi)")
#define XCHG_R8W_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X45, 0X00 # xchgw %r8w, (%ebp)")
#define XCHG_R8W_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X04, 0X24 # xchgw %r8w, (%esp)")

#define XCHG_R9W_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X87, 0X08 # xchgw %r9w, (%rax)")
#define XCHG_R9W_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X87, 0X0B # xchgw %r9w, (%rbx)")
#define XCHG_R9W_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X87, 0X09 # xchgw %r9w, (%rcx)")
#define XCHG_R9W_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X87, 0X0A # xchgw %r9w, (%rdx)")
#define XCHG_R9W_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X87, 0X0F # xchgw %r9w, (%rdi)")
#define XCHG_R9W_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X87, 0X0E # xchgw %r9w, (%rsi)")
#define XCHG_R9W_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X87, 0X4D, 0X00 # xchgw %r9w, (%rbp)")
#define XCHG_R9W_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X87, 0X0C, 0X24 # xchgw %r9w, (%rsp)")
#define XCHG_R9W_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X08 # xchgw %r9w, (%r8)")
#define XCHG_R9W_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X09 # xchgw %r9w, (%r9)")
#define XCHG_R9W_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X0A # xchgw %r9w, (%r10)")
#define XCHG_R9W_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X0B # xchgw %r9w, (%r11)")
#define XCHG_R9W_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X0C, 0X24 # xchgw %r9w, (%r12)")
#define XCHG_R9W_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X4D, 0X00 # xchgw %r9w, (%r13)")
#define XCHG_R9W_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X0E # xchgw %r9w, (%r14)")
#define XCHG_R9W_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X0F # xchgw %r9w, (%r15)")
#define XCHG_R9W_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X08 # xchgw %r9w, (%eax)")
#define XCHG_R9W_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X0B # xchgw %r9w, (%ebx)")
#define XCHG_R9W_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X09 # xchgw %r9w, (%ecx)")
#define XCHG_R9W_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X0A # xchgw %r9w, (%edx)")
#define XCHG_R9W_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X0F # xchgw %r9w, (%edi)")
#define XCHG_R9W_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X0E # xchgw %r9w, (%esi)")
#define XCHG_R9W_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X4D, 0X00 # xchgw %r9w, (%ebp)")
#define XCHG_R9W_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X0C, 0X24 # xchgw %r9w, (%esp)")

#define XCHG_R10W_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X87, 0X10 # xchgw %r10w, (%rax)")
#define XCHG_R10W_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X87, 0X13 # xchgw %r10w, (%rbx)")
#define XCHG_R10W_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X87, 0X11 # xchgw %r10w, (%rcx)")
#define XCHG_R10W_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X87, 0X12 # xchgw %r10w, (%rdx)")
#define XCHG_R10W_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X87, 0X17 # xchgw %r10w, (%rdi)")
#define XCHG_R10W_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X87, 0X16 # xchgw %r10w, (%rsi)")
#define XCHG_R10W_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X87, 0X55, 0X00 # xchgw %r10w, (%rbp)")
#define XCHG_R10W_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X87, 0X14, 0X24 # xchgw %r10w, (%rsp)")
#define XCHG_R10W_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X10 # xchgw %r10w, (%r8)")
#define XCHG_R10W_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X11 # xchgw %r10w, (%r9)")
#define XCHG_R10W_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X12 # xchgw %r10w, (%r10)")
#define XCHG_R10W_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X13 # xchgw %r10w, (%r11)")
#define XCHG_R10W_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X14, 0X24 # xchgw %r10w, (%r12)")
#define XCHG_R10W_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X55, 0X00 # xchgw %r10w, (%r13)")
#define XCHG_R10W_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X16 # xchgw %r10w, (%r14)")
#define XCHG_R10W_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X17 # xchgw %r10w, (%r15)")
#define XCHG_R10W_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X10 # xchgw %r10w, (%eax)")
#define XCHG_R10W_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X13 # xchgw %r10w, (%ebx)")
#define XCHG_R10W_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X11 # xchgw %r10w, (%ecx)")
#define XCHG_R10W_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X12 # xchgw %r10w, (%edx)")
#define XCHG_R10W_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X17 # xchgw %r10w, (%edi)")
#define XCHG_R10W_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X16 # xchgw %r10w, (%esi)")
#define XCHG_R10W_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X55, 0X00 # xchgw %r10w, (%ebp)")
#define XCHG_R10W_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X14, 0X24 # xchgw %r10w, (%esp)")

#define XCHG_R11W_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X87, 0X18 # xchgw %r11w, (%rax)")
#define XCHG_R11W_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X87, 0X1B # xchgw %r11w, (%rbx)")
#define XCHG_R11W_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X87, 0X19 # xchgw %r11w, (%rcx)")
#define XCHG_R11W_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X87, 0X1A # xchgw %r11w, (%rdx)")
#define XCHG_R11W_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X87, 0X1F # xchgw %r11w, (%rdi)")
#define XCHG_R11W_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X87, 0X1E # xchgw %r11w, (%rsi)")
#define XCHG_R11W_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X87, 0X5D, 0X00 # xchgw %r11w, (%rbp)")
#define XCHG_R11W_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X87, 0X1C, 0X24 # xchgw %r11w, (%rsp)")
#define XCHG_R11W_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X18 # xchgw %r11w, (%r8)")
#define XCHG_R11W_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X19 # xchgw %r11w, (%r9)")
#define XCHG_R11W_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X1A # xchgw %r11w, (%r10)")
#define XCHG_R11W_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X1B # xchgw %r11w, (%r11)")
#define XCHG_R11W_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X1C, 0X24 # xchgw %r11w, (%r12)")
#define XCHG_R11W_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X5D, 0X00 # xchgw %r11w, (%r13)")
#define XCHG_R11W_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X1E # xchgw %r11w, (%r14)")
#define XCHG_R11W_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X1F # xchgw %r11w, (%r15)")
#define XCHG_R11W_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X18 # xchgw %r11w, (%eax)")
#define XCHG_R11W_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X1B # xchgw %r11w, (%ebx)")
#define XCHG_R11W_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X19 # xchgw %r11w, (%ecx)")
#define XCHG_R11W_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X1A # xchgw %r11w, (%edx)")
#define XCHG_R11W_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X1F # xchgw %r11w, (%edi)")
#define XCHG_R11W_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X1E # xchgw %r11w, (%esi)")
#define XCHG_R11W_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X5D, 0X00 # xchgw %r11w, (%ebp)")
#define XCHG_R11W_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X1C, 0X24 # xchgw %r11w, (%esp)")

#define XCHG_R12W_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X87, 0X20 # xchgw %r12w, (%rax)")
#define XCHG_R12W_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X87, 0X23 # xchgw %r12w, (%rbx)")
#define XCHG_R12W_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X87, 0X21 # xchgw %r12w, (%rcx)")
#define XCHG_R12W_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X87, 0X22 # xchgw %r12w, (%rdx)")
#define XCHG_R12W_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X87, 0X27 # xchgw %r12w, (%rdi)")
#define XCHG_R12W_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X87, 0X26 # xchgw %r12w, (%rsi)")
#define XCHG_R12W_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X87, 0X65, 0X00 # xchgw %r12w, (%rbp)")
#define XCHG_R12W_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X87, 0X24, 0X24 # xchgw %r12w, (%rsp)")
#define XCHG_R12W_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X20 # xchgw %r12w, (%r8)")
#define XCHG_R12W_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X21 # xchgw %r12w, (%r9)")
#define XCHG_R12W_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X22 # xchgw %r12w, (%r10)")
#define XCHG_R12W_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X23 # xchgw %r12w, (%r11)")
#define XCHG_R12W_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X24, 0X24 # xchgw %r12w, (%r12)")
#define XCHG_R12W_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X65, 0X00 # xchgw %r12w, (%r13)")
#define XCHG_R12W_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X26 # xchgw %r12w, (%r14)")
#define XCHG_R12W_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X27 # xchgw %r12w, (%r15)")
#define XCHG_R12W_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X20 # xchgw %r12w, (%eax)")
#define XCHG_R12W_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X23 # xchgw %r12w, (%ebx)")
#define XCHG_R12W_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X21 # xchgw %r12w, (%ecx)")
#define XCHG_R12W_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X22 # xchgw %r12w, (%edx)")
#define XCHG_R12W_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X27 # xchgw %r12w, (%edi)")
#define XCHG_R12W_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X26 # xchgw %r12w, (%esi)")
#define XCHG_R12W_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X65, 0X00 # xchgw %r12w, (%ebp)")
#define XCHG_R12W_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X24, 0X24 # xchgw %r12w, (%esp)")

#define XCHG_R13W_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X87, 0X28 # xchgw %r13w, (%rax)")
#define XCHG_R13W_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X87, 0X2B # xchgw %r13w, (%rbx)")
#define XCHG_R13W_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X87, 0X29 # xchgw %r13w, (%rcx)")
#define XCHG_R13W_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X87, 0X2A # xchgw %r13w, (%rdx)")
#define XCHG_R13W_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X87, 0X2F # xchgw %r13w, (%rdi)")
#define XCHG_R13W_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X87, 0X2E # xchgw %r13w, (%rsi)")
#define XCHG_R13W_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X87, 0X6D, 0X00 # xchgw %r13w, (%rbp)")
#define XCHG_R13W_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X87, 0X2C, 0X24 # xchgw %r13w, (%rsp)")
#define XCHG_R13W_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X28 # xchgw %r13w, (%r8)")
#define XCHG_R13W_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X29 # xchgw %r13w, (%r9)")
#define XCHG_R13W_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X2A # xchgw %r13w, (%r10)")
#define XCHG_R13W_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X2B # xchgw %r13w, (%r11)")
#define XCHG_R13W_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X2C, 0X24 # xchgw %r13w, (%r12)")
#define XCHG_R13W_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X6D, 0X00 # xchgw %r13w, (%r13)")
#define XCHG_R13W_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X2E # xchgw %r13w, (%r14)")
#define XCHG_R13W_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X2F # xchgw %r13w, (%r15)")
#define XCHG_R13W_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X28 # xchgw %r13w, (%eax)")
#define XCHG_R13W_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X2B # xchgw %r13w, (%ebx)")
#define XCHG_R13W_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X29 # xchgw %r13w, (%ecx)")
#define XCHG_R13W_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X2A # xchgw %r13w, (%edx)")
#define XCHG_R13W_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X2F # xchgw %r13w, (%edi)")
#define XCHG_R13W_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X2E # xchgw %r13w, (%esi)")
#define XCHG_R13W_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X6D, 0X00 # xchgw %r13w, (%ebp)")
#define XCHG_R13W_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X2C, 0X24 # xchgw %r13w, (%esp)")

#define XCHG_R14W_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X87, 0X30 # xchgw %r14w, (%rax)")
#define XCHG_R14W_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X87, 0X33 # xchgw %r14w, (%rbx)")
#define XCHG_R14W_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X87, 0X31 # xchgw %r14w, (%rcx)")
#define XCHG_R14W_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X87, 0X32 # xchgw %r14w, (%rdx)")
#define XCHG_R14W_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X87, 0X37 # xchgw %r14w, (%rdi)")
#define XCHG_R14W_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X87, 0X36 # xchgw %r14w, (%rsi)")
#define XCHG_R14W_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X87, 0X75, 0X00 # xchgw %r14w, (%rbp)")
#define XCHG_R14W_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X87, 0X34, 0X24 # xchgw %r14w, (%rsp)")
#define XCHG_R14W_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X30 # xchgw %r14w, (%r8)")
#define XCHG_R14W_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X31 # xchgw %r14w, (%r9)")
#define XCHG_R14W_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X32 # xchgw %r14w, (%r10)")
#define XCHG_R14W_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X33 # xchgw %r14w, (%r11)")
#define XCHG_R14W_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X34, 0X24 # xchgw %r14w, (%r12)")
#define XCHG_R14W_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X75, 0X00 # xchgw %r14w, (%r13)")
#define XCHG_R14W_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X36 # xchgw %r14w, (%r14)")
#define XCHG_R14W_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X37 # xchgw %r14w, (%r15)")
#define XCHG_R14W_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X30 # xchgw %r14w, (%eax)")
#define XCHG_R14W_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X33 # xchgw %r14w, (%ebx)")
#define XCHG_R14W_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X31 # xchgw %r14w, (%ecx)")
#define XCHG_R14W_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X32 # xchgw %r14w, (%edx)")
#define XCHG_R14W_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X37 # xchgw %r14w, (%edi)")
#define XCHG_R14W_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X36 # xchgw %r14w, (%esi)")
#define XCHG_R14W_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X75, 0X00 # xchgw %r14w, (%ebp)")
#define XCHG_R14W_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X34, 0X24 # xchgw %r14w, (%esp)")

#define XCHG_R15W_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X87, 0X38 # xchgw %r15w, (%rax)")
#define XCHG_R15W_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X87, 0X3B # xchgw %r15w, (%rbx)")
#define XCHG_R15W_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X87, 0X39 # xchgw %r15w, (%rcx)")
#define XCHG_R15W_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X87, 0X3A # xchgw %r15w, (%rdx)")
#define XCHG_R15W_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X87, 0X3F # xchgw %r15w, (%rdi)")
#define XCHG_R15W_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X87, 0X3E # xchgw %r15w, (%rsi)")
#define XCHG_R15W_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X87, 0X7D, 0X00 # xchgw %r15w, (%rbp)")
#define XCHG_R15W_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X87, 0X3C, 0X24 # xchgw %r15w, (%rsp)")
#define XCHG_R15W_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X38 # xchgw %r15w, (%r8)")
#define XCHG_R15W_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X39 # xchgw %r15w, (%r9)")
#define XCHG_R15W_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X3A # xchgw %r15w, (%r10)")
#define XCHG_R15W_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X3B # xchgw %r15w, (%r11)")
#define XCHG_R15W_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X3C, 0X24 # xchgw %r15w, (%r12)")
#define XCHG_R15W_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X7D, 0X00 # xchgw %r15w, (%r13)")
#define XCHG_R15W_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X3E # xchgw %r15w, (%r14)")
#define XCHG_R15W_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X87, 0X3F # xchgw %r15w, (%r15)")
#define XCHG_R15W_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X38 # xchgw %r15w, (%eax)")
#define XCHG_R15W_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X3B # xchgw %r15w, (%ebx)")
#define XCHG_R15W_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X39 # xchgw %r15w, (%ecx)")
#define XCHG_R15W_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X3A # xchgw %r15w, (%edx)")
#define XCHG_R15W_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X3F # xchgw %r15w, (%edi)")
#define XCHG_R15W_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X3E # xchgw %r15w, (%esi)")
#define XCHG_R15W_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X7D, 0X00 # xchgw %r15w, (%ebp)")
#define XCHG_R15W_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X3C, 0X24 # xchgw %r15w, (%esp)")

#define XCHG_AX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X80 # xchgw " _(VALUE) "(%rax), %ax")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X83 # xchgw " _(VALUE) "(%rbx), %ax")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X81 # xchgw " _(VALUE) "(%rcx), %ax")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X82 # xchgw " _(VALUE) "(%rdx), %ax")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X87 # xchgw " _(VALUE) "(%rdi), %ax")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X86 # xchgw " _(VALUE) "(%rsi), %ax")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X85 # xchgw " _(VALUE) "(%rbp), %ax")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X84, 0X24 # xchgw " _(VALUE) "(%rsp), %ax")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0X80 # xchgw " _(VALUE) "(%r8), %ax")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0X81 # xchgw " _(VALUE) "(%r9), %ax")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0X82 # xchgw " _(VALUE) "(%r10), %ax")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0X83 # xchgw " _(VALUE) "(%r11), %ax")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0X84, 0X24 # xchgw " _(VALUE) "(%r12), %ax")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0X85 # xchgw " _(VALUE) "(%r13), %ax")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0X86 # xchgw " _(VALUE) "(%r14), %ax")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0X87 # xchgw " _(VALUE) "(%r15), %ax")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0X80 # xchgw " _(VALUE) "(%eax), %ax")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0X83 # xchgw " _(VALUE) "(%ebx), %ax")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0X81 # xchgw " _(VALUE) "(%ecx), %ax")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0X82 # xchgw " _(VALUE) "(%edx), %ax")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0X87 # xchgw " _(VALUE) "(%edi), %ax")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0X86 # xchgw " _(VALUE) "(%esi), %ax")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0X85 # xchgw " _(VALUE) "(%ebp), %ax")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0X84, 0X24 # xchgw " _(VALUE) "(%esp), %ax")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_BX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X98 # xchgw " _(VALUE) "(%rax), %bx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X9B # xchgw " _(VALUE) "(%rbx), %bx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X99 # xchgw " _(VALUE) "(%rcx), %bx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X9A # xchgw " _(VALUE) "(%rdx), %bx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X9F # xchgw " _(VALUE) "(%rdi), %bx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X9E # xchgw " _(VALUE) "(%rsi), %bx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X9D # xchgw " _(VALUE) "(%rbp), %bx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X9C, 0X24 # xchgw " _(VALUE) "(%rsp), %bx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0X98 # xchgw " _(VALUE) "(%r8), %bx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0X99 # xchgw " _(VALUE) "(%r9), %bx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0X9A # xchgw " _(VALUE) "(%r10), %bx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0X9B # xchgw " _(VALUE) "(%r11), %bx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0X9C, 0X24 # xchgw " _(VALUE) "(%r12), %bx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0X9D # xchgw " _(VALUE) "(%r13), %bx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0X9E # xchgw " _(VALUE) "(%r14), %bx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0X9F # xchgw " _(VALUE) "(%r15), %bx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0X98 # xchgw " _(VALUE) "(%eax), %bx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0X9B # xchgw " _(VALUE) "(%ebx), %bx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0X99 # xchgw " _(VALUE) "(%ecx), %bx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0X9A # xchgw " _(VALUE) "(%edx), %bx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0X9F # xchgw " _(VALUE) "(%edi), %bx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0X9E # xchgw " _(VALUE) "(%esi), %bx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0X9D # xchgw " _(VALUE) "(%ebp), %bx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0X9C, 0X24 # xchgw " _(VALUE) "(%esp), %bx")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_CX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X88 # xchgw " _(VALUE) "(%rax), %cx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X8B # xchgw " _(VALUE) "(%rbx), %cx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X89 # xchgw " _(VALUE) "(%rcx), %cx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X8A # xchgw " _(VALUE) "(%rdx), %cx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X8F # xchgw " _(VALUE) "(%rdi), %cx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X8E # xchgw " _(VALUE) "(%rsi), %cx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X8D # xchgw " _(VALUE) "(%rbp), %cx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X8C, 0X24 # xchgw " _(VALUE) "(%rsp), %cx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0X88 # xchgw " _(VALUE) "(%r8), %cx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0X89 # xchgw " _(VALUE) "(%r9), %cx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0X8A # xchgw " _(VALUE) "(%r10), %cx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0X8B # xchgw " _(VALUE) "(%r11), %cx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0X8C, 0X24 # xchgw " _(VALUE) "(%r12), %cx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0X8D # xchgw " _(VALUE) "(%r13), %cx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0X8E # xchgw " _(VALUE) "(%r14), %cx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0X8F # xchgw " _(VALUE) "(%r15), %cx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0X88 # xchgw " _(VALUE) "(%eax), %cx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0X8B # xchgw " _(VALUE) "(%ebx), %cx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0X89 # xchgw " _(VALUE) "(%ecx), %cx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0X8A # xchgw " _(VALUE) "(%edx), %cx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0X8F # xchgw " _(VALUE) "(%edi), %cx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0X8E # xchgw " _(VALUE) "(%esi), %cx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0X8D # xchgw " _(VALUE) "(%ebp), %cx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0X8C, 0X24 # xchgw " _(VALUE) "(%esp), %cx")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_DX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X90 # xchgw " _(VALUE) "(%rax), %dx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X93 # xchgw " _(VALUE) "(%rbx), %dx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X91 # xchgw " _(VALUE) "(%rcx), %dx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X92 # xchgw " _(VALUE) "(%rdx), %dx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X97 # xchgw " _(VALUE) "(%rdi), %dx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X96 # xchgw " _(VALUE) "(%rsi), %dx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X95 # xchgw " _(VALUE) "(%rbp), %dx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X94, 0X24 # xchgw " _(VALUE) "(%rsp), %dx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0X90 # xchgw " _(VALUE) "(%r8), %dx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0X91 # xchgw " _(VALUE) "(%r9), %dx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0X92 # xchgw " _(VALUE) "(%r10), %dx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0X93 # xchgw " _(VALUE) "(%r11), %dx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0X94, 0X24 # xchgw " _(VALUE) "(%r12), %dx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0X95 # xchgw " _(VALUE) "(%r13), %dx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0X96 # xchgw " _(VALUE) "(%r14), %dx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0X97 # xchgw " _(VALUE) "(%r15), %dx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0X90 # xchgw " _(VALUE) "(%eax), %dx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0X93 # xchgw " _(VALUE) "(%ebx), %dx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0X91 # xchgw " _(VALUE) "(%ecx), %dx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0X92 # xchgw " _(VALUE) "(%edx), %dx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0X97 # xchgw " _(VALUE) "(%edi), %dx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0X96 # xchgw " _(VALUE) "(%esi), %dx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0X95 # xchgw " _(VALUE) "(%ebp), %dx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0X94, 0X24 # xchgw " _(VALUE) "(%esp), %dx")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_DI_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XB8 # xchgw " _(VALUE) "(%rax), %di")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DI_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XBB # xchgw " _(VALUE) "(%rbx), %di")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DI_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XB9 # xchgw " _(VALUE) "(%rcx), %di")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DI_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XBA # xchgw " _(VALUE) "(%rdx), %di")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DI_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XBF # xchgw " _(VALUE) "(%rdi), %di")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DI_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XBE # xchgw " _(VALUE) "(%rsi), %di")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DI_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XBD # xchgw " _(VALUE) "(%rbp), %di")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DI_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XBC, 0X24 # xchgw " _(VALUE) "(%rsp), %di")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DI_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0XB8 # xchgw " _(VALUE) "(%r8), %di")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DI_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0XB9 # xchgw " _(VALUE) "(%r9), %di")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DI_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0XBA # xchgw " _(VALUE) "(%r10), %di")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DI_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0XBB # xchgw " _(VALUE) "(%r11), %di")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DI_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0XBC, 0X24 # xchgw " _(VALUE) "(%r12), %di")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DI_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0XBD # xchgw " _(VALUE) "(%r13), %di")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DI_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0XBE # xchgw " _(VALUE) "(%r14), %di")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DI_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0XBF # xchgw " _(VALUE) "(%r15), %di")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0XB8 # xchgw " _(VALUE) "(%eax), %di")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0XBB # xchgw " _(VALUE) "(%ebx), %di")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0XB9 # xchgw " _(VALUE) "(%ecx), %di")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0XBA # xchgw " _(VALUE) "(%edx), %di")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0XBF # xchgw " _(VALUE) "(%edi), %di")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0XBE # xchgw " _(VALUE) "(%esi), %di")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0XBD # xchgw " _(VALUE) "(%ebp), %di")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0XBC, 0X24 # xchgw " _(VALUE) "(%esp), %di")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_SI_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XB0 # xchgw " _(VALUE) "(%rax), %si")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SI_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XB3 # xchgw " _(VALUE) "(%rbx), %si")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SI_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XB1 # xchgw " _(VALUE) "(%rcx), %si")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SI_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XB2 # xchgw " _(VALUE) "(%rdx), %si")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SI_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XB7 # xchgw " _(VALUE) "(%rdi), %si")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SI_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XB6 # xchgw " _(VALUE) "(%rsi), %si")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SI_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XB5 # xchgw " _(VALUE) "(%rbp), %si")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SI_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XB4, 0X24 # xchgw " _(VALUE) "(%rsp), %si")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SI_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0XB0 # xchgw " _(VALUE) "(%r8), %si")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SI_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0XB1 # xchgw " _(VALUE) "(%r9), %si")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SI_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0XB2 # xchgw " _(VALUE) "(%r10), %si")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SI_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0XB3 # xchgw " _(VALUE) "(%r11), %si")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SI_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0XB4, 0X24 # xchgw " _(VALUE) "(%r12), %si")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SI_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0XB5 # xchgw " _(VALUE) "(%r13), %si")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SI_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0XB6 # xchgw " _(VALUE) "(%r14), %si")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SI_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0XB7 # xchgw " _(VALUE) "(%r15), %si")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0XB0 # xchgw " _(VALUE) "(%eax), %si")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0XB3 # xchgw " _(VALUE) "(%ebx), %si")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0XB1 # xchgw " _(VALUE) "(%ecx), %si")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0XB2 # xchgw " _(VALUE) "(%edx), %si")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0XB7 # xchgw " _(VALUE) "(%edi), %si")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0XB6 # xchgw " _(VALUE) "(%esi), %si")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0XB5 # xchgw " _(VALUE) "(%ebp), %si")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0XB4, 0X24 # xchgw " _(VALUE) "(%esp), %si")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_BP_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XA8 # xchgw " _(VALUE) "(%rax), %bp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BP_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XAB # xchgw " _(VALUE) "(%rbx), %bp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BP_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XA9 # xchgw " _(VALUE) "(%rcx), %bp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BP_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XAA # xchgw " _(VALUE) "(%rdx), %bp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BP_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XAF # xchgw " _(VALUE) "(%rdi), %bp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BP_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XAE # xchgw " _(VALUE) "(%rsi), %bp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BP_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XAD # xchgw " _(VALUE) "(%rbp), %bp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BP_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XAC, 0X24 # xchgw " _(VALUE) "(%rsp), %bp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BP_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0XA8 # xchgw " _(VALUE) "(%r8), %bp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BP_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0XA9 # xchgw " _(VALUE) "(%r9), %bp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BP_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0XAA # xchgw " _(VALUE) "(%r10), %bp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BP_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0XAB # xchgw " _(VALUE) "(%r11), %bp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BP_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0XAC, 0X24 # xchgw " _(VALUE) "(%r12), %bp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BP_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0XAD # xchgw " _(VALUE) "(%r13), %bp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BP_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0XAE # xchgw " _(VALUE) "(%r14), %bp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BP_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0XAF # xchgw " _(VALUE) "(%r15), %bp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0XA8 # xchgw " _(VALUE) "(%eax), %bp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0XAB # xchgw " _(VALUE) "(%ebx), %bp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0XA9 # xchgw " _(VALUE) "(%ecx), %bp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0XAA # xchgw " _(VALUE) "(%edx), %bp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0XAF # xchgw " _(VALUE) "(%edi), %bp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0XAE # xchgw " _(VALUE) "(%esi), %bp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0XAD # xchgw " _(VALUE) "(%ebp), %bp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0XAC, 0X24 # xchgw " _(VALUE) "(%esp), %bp")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_SP_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XA0 # xchgw " _(VALUE) "(%rax), %sp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SP_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XA3 # xchgw " _(VALUE) "(%rbx), %sp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SP_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XA1 # xchgw " _(VALUE) "(%rcx), %sp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SP_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XA2 # xchgw " _(VALUE) "(%rdx), %sp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SP_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XA7 # xchgw " _(VALUE) "(%rdi), %sp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SP_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XA6 # xchgw " _(VALUE) "(%rsi), %sp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SP_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XA5 # xchgw " _(VALUE) "(%rbp), %sp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SP_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XA4, 0X24 # xchgw " _(VALUE) "(%rsp), %sp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SP_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0XA0 # xchgw " _(VALUE) "(%r8), %sp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SP_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0XA1 # xchgw " _(VALUE) "(%r9), %sp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SP_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0XA2 # xchgw " _(VALUE) "(%r10), %sp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SP_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0XA3 # xchgw " _(VALUE) "(%r11), %sp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SP_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0XA4, 0X24 # xchgw " _(VALUE) "(%r12), %sp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SP_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0XA5 # xchgw " _(VALUE) "(%r13), %sp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SP_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0XA6 # xchgw " _(VALUE) "(%r14), %sp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SP_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0XA7 # xchgw " _(VALUE) "(%r15), %sp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0XA0 # xchgw " _(VALUE) "(%eax), %sp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0XA3 # xchgw " _(VALUE) "(%ebx), %sp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0XA1 # xchgw " _(VALUE) "(%ecx), %sp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0XA2 # xchgw " _(VALUE) "(%edx), %sp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0XA7 # xchgw " _(VALUE) "(%edi), %sp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0XA6 # xchgw " _(VALUE) "(%esi), %sp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0XA5 # xchgw " _(VALUE) "(%ebp), %sp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0XA4, 0X24 # xchgw " _(VALUE) "(%esp), %sp")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_R8W_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0X80 # xchgw " _(VALUE) "(%rax), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8W_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0X83 # xchgw " _(VALUE) "(%rbx), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8W_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0X81 # xchgw " _(VALUE) "(%rcx), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8W_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0X82 # xchgw " _(VALUE) "(%rdx), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8W_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0X87 # xchgw " _(VALUE) "(%rdi), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8W_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0X86 # xchgw " _(VALUE) "(%rsi), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8W_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0X85 # xchgw " _(VALUE) "(%rbp), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8W_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0X84, 0X24 # xchgw " _(VALUE) "(%rsp), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8W_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0X80 # xchgw " _(VALUE) "(%r8), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8W_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0X81 # xchgw " _(VALUE) "(%r9), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8W_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0X82 # xchgw " _(VALUE) "(%r10), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8W_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0X83 # xchgw " _(VALUE) "(%r11), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8W_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0X84, 0X24 # xchgw " _(VALUE) "(%r12), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8W_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0X85 # xchgw " _(VALUE) "(%r13), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8W_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0X86 # xchgw " _(VALUE) "(%r14), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8W_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0X87 # xchgw " _(VALUE) "(%r15), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8W_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X80 # xchgw " _(VALUE) "(%eax), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8W_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X83 # xchgw " _(VALUE) "(%ebx), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8W_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X81 # xchgw " _(VALUE) "(%ecx), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8W_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X82 # xchgw " _(VALUE) "(%edx), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8W_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X87 # xchgw " _(VALUE) "(%edi), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8W_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X86 # xchgw " _(VALUE) "(%esi), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8W_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X85 # xchgw " _(VALUE) "(%ebp), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8W_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X84, 0X24 # xchgw " _(VALUE) "(%esp), %r8w")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_R9W_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0X88 # xchgw " _(VALUE) "(%rax), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9W_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0X8B # xchgw " _(VALUE) "(%rbx), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9W_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0X89 # xchgw " _(VALUE) "(%rcx), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9W_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0X8A # xchgw " _(VALUE) "(%rdx), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9W_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0X8F # xchgw " _(VALUE) "(%rdi), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9W_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0X8E # xchgw " _(VALUE) "(%rsi), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9W_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0X8D # xchgw " _(VALUE) "(%rbp), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9W_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0X8C, 0X24 # xchgw " _(VALUE) "(%rsp), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9W_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0X88 # xchgw " _(VALUE) "(%r8), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9W_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0X89 # xchgw " _(VALUE) "(%r9), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9W_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0X8A # xchgw " _(VALUE) "(%r10), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9W_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0X8B # xchgw " _(VALUE) "(%r11), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9W_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0X8C, 0X24 # xchgw " _(VALUE) "(%r12), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9W_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0X8D # xchgw " _(VALUE) "(%r13), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9W_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0X8E # xchgw " _(VALUE) "(%r14), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9W_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0X8F # xchgw " _(VALUE) "(%r15), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9W_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X88 # xchgw " _(VALUE) "(%eax), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9W_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X8B # xchgw " _(VALUE) "(%ebx), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9W_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X89 # xchgw " _(VALUE) "(%ecx), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9W_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X8A # xchgw " _(VALUE) "(%edx), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9W_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X8F # xchgw " _(VALUE) "(%edi), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9W_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X8E # xchgw " _(VALUE) "(%esi), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9W_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X8D # xchgw " _(VALUE) "(%ebp), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9W_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X8C, 0X24 # xchgw " _(VALUE) "(%esp), %r9w")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_R10W_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0X90 # xchgw " _(VALUE) "(%rax), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10W_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0X93 # xchgw " _(VALUE) "(%rbx), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10W_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0X91 # xchgw " _(VALUE) "(%rcx), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10W_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0X92 # xchgw " _(VALUE) "(%rdx), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10W_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0X97 # xchgw " _(VALUE) "(%rdi), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10W_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0X96 # xchgw " _(VALUE) "(%rsi), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10W_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0X95 # xchgw " _(VALUE) "(%rbp), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10W_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0X94, 0X24 # xchgw " _(VALUE) "(%rsp), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10W_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0X90 # xchgw " _(VALUE) "(%r8), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10W_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0X91 # xchgw " _(VALUE) "(%r9), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10W_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0X92 # xchgw " _(VALUE) "(%r10), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10W_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0X93 # xchgw " _(VALUE) "(%r11), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10W_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0X94, 0X24 # xchgw " _(VALUE) "(%r12), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10W_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0X95 # xchgw " _(VALUE) "(%r13), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10W_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0X96 # xchgw " _(VALUE) "(%r14), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10W_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0X97 # xchgw " _(VALUE) "(%r15), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10W_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X90 # xchgw " _(VALUE) "(%eax), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10W_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X93 # xchgw " _(VALUE) "(%ebx), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10W_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X91 # xchgw " _(VALUE) "(%ecx), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10W_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X92 # xchgw " _(VALUE) "(%edx), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10W_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X97 # xchgw " _(VALUE) "(%edi), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10W_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X96 # xchgw " _(VALUE) "(%esi), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10W_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X95 # xchgw " _(VALUE) "(%ebp), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10W_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X94, 0X24 # xchgw " _(VALUE) "(%esp), %r10w")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_R11W_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0X98 # xchgw " _(VALUE) "(%rax), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11W_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0X9B # xchgw " _(VALUE) "(%rbx), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11W_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0X99 # xchgw " _(VALUE) "(%rcx), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11W_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0X9A # xchgw " _(VALUE) "(%rdx), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11W_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0X9F # xchgw " _(VALUE) "(%rdi), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11W_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0X9E # xchgw " _(VALUE) "(%rsi), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11W_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0X9D # xchgw " _(VALUE) "(%rbp), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11W_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0X9C, 0X24 # xchgw " _(VALUE) "(%rsp), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11W_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0X98 # xchgw " _(VALUE) "(%r8), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11W_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0X99 # xchgw " _(VALUE) "(%r9), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11W_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0X9A # xchgw " _(VALUE) "(%r10), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11W_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0X9B # xchgw " _(VALUE) "(%r11), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11W_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0X9C, 0X24 # xchgw " _(VALUE) "(%r12), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11W_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0X9D # xchgw " _(VALUE) "(%r13), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11W_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0X9E # xchgw " _(VALUE) "(%r14), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11W_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0X9F # xchgw " _(VALUE) "(%r15), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11W_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X98 # xchgw " _(VALUE) "(%eax), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11W_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X9B # xchgw " _(VALUE) "(%ebx), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11W_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X99 # xchgw " _(VALUE) "(%ecx), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11W_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X9A # xchgw " _(VALUE) "(%edx), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11W_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X9F # xchgw " _(VALUE) "(%edi), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11W_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X9E # xchgw " _(VALUE) "(%esi), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11W_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X9D # xchgw " _(VALUE) "(%ebp), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11W_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X9C, 0X24 # xchgw " _(VALUE) "(%esp), %r11w")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_R12W_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0XA0 # xchgw " _(VALUE) "(%rax), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12W_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0XA3 # xchgw " _(VALUE) "(%rbx), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12W_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0XA1 # xchgw " _(VALUE) "(%rcx), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12W_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0XA2 # xchgw " _(VALUE) "(%rdx), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12W_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0XA7 # xchgw " _(VALUE) "(%rdi), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12W_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0XA6 # xchgw " _(VALUE) "(%rsi), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12W_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0XA5 # xchgw " _(VALUE) "(%rbp), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12W_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0XA4, 0X24 # xchgw " _(VALUE) "(%rsp), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12W_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0XA0 # xchgw " _(VALUE) "(%r8), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12W_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0XA1 # xchgw " _(VALUE) "(%r9), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12W_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0XA2 # xchgw " _(VALUE) "(%r10), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12W_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0XA3 # xchgw " _(VALUE) "(%r11), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12W_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0XA4, 0X24 # xchgw " _(VALUE) "(%r12), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12W_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0XA5 # xchgw " _(VALUE) "(%r13), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12W_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0XA6 # xchgw " _(VALUE) "(%r14), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12W_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0XA7 # xchgw " _(VALUE) "(%r15), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12W_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0XA0 # xchgw " _(VALUE) "(%eax), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12W_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0XA3 # xchgw " _(VALUE) "(%ebx), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12W_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0XA1 # xchgw " _(VALUE) "(%ecx), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12W_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0XA2 # xchgw " _(VALUE) "(%edx), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12W_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0XA7 # xchgw " _(VALUE) "(%edi), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12W_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0XA6 # xchgw " _(VALUE) "(%esi), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12W_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0XA5 # xchgw " _(VALUE) "(%ebp), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12W_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0XA4, 0X24 # xchgw " _(VALUE) "(%esp), %r12w")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_R13W_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0XA8 # xchgw " _(VALUE) "(%rax), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13W_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0XAB # xchgw " _(VALUE) "(%rbx), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13W_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0XA9 # xchgw " _(VALUE) "(%rcx), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13W_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0XAA # xchgw " _(VALUE) "(%rdx), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13W_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0XAF # xchgw " _(VALUE) "(%rdi), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13W_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0XAE # xchgw " _(VALUE) "(%rsi), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13W_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0XAD # xchgw " _(VALUE) "(%rbp), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13W_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0XAC, 0X24 # xchgw " _(VALUE) "(%rsp), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13W_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0XA8 # xchgw " _(VALUE) "(%r8), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13W_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0XA9 # xchgw " _(VALUE) "(%r9), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13W_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0XAA # xchgw " _(VALUE) "(%r10), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13W_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0XAB # xchgw " _(VALUE) "(%r11), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13W_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0XAC, 0X24 # xchgw " _(VALUE) "(%r12), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13W_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0XAD # xchgw " _(VALUE) "(%r13), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13W_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0XAE # xchgw " _(VALUE) "(%r14), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13W_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0XAF # xchgw " _(VALUE) "(%r15), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13W_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0XA8 # xchgw " _(VALUE) "(%eax), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13W_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0XAB # xchgw " _(VALUE) "(%ebx), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13W_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0XA9 # xchgw " _(VALUE) "(%ecx), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13W_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0XAA # xchgw " _(VALUE) "(%edx), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13W_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0XAF # xchgw " _(VALUE) "(%edi), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13W_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0XAE # xchgw " _(VALUE) "(%esi), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13W_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0XAD # xchgw " _(VALUE) "(%ebp), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13W_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0XAC, 0X24 # xchgw " _(VALUE) "(%esp), %r13w")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_R14W_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0XB0 # xchgw " _(VALUE) "(%rax), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14W_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0XB3 # xchgw " _(VALUE) "(%rbx), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14W_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0XB1 # xchgw " _(VALUE) "(%rcx), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14W_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0XB2 # xchgw " _(VALUE) "(%rdx), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14W_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0XB7 # xchgw " _(VALUE) "(%rdi), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14W_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0XB6 # xchgw " _(VALUE) "(%rsi), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14W_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0XB5 # xchgw " _(VALUE) "(%rbp), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14W_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0XB4, 0X24 # xchgw " _(VALUE) "(%rsp), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14W_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0XB0 # xchgw " _(VALUE) "(%r8), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14W_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0XB1 # xchgw " _(VALUE) "(%r9), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14W_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0XB2 # xchgw " _(VALUE) "(%r10), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14W_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0XB3 # xchgw " _(VALUE) "(%r11), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14W_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0XB4, 0X24 # xchgw " _(VALUE) "(%r12), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14W_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0XB5 # xchgw " _(VALUE) "(%r13), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14W_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0XB6 # xchgw " _(VALUE) "(%r14), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14W_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0XB7 # xchgw " _(VALUE) "(%r15), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14W_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0XB0 # xchgw " _(VALUE) "(%eax), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14W_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0XB3 # xchgw " _(VALUE) "(%ebx), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14W_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0XB1 # xchgw " _(VALUE) "(%ecx), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14W_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0XB2 # xchgw " _(VALUE) "(%edx), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14W_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0XB7 # xchgw " _(VALUE) "(%edi), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14W_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0XB6 # xchgw " _(VALUE) "(%esi), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14W_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0XB5 # xchgw " _(VALUE) "(%ebp), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14W_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0XB4, 0X24 # xchgw " _(VALUE) "(%esp), %r14w")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_R15W_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0XB8 # xchgw " _(VALUE) "(%rax), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15W_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0XBB # xchgw " _(VALUE) "(%rbx), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15W_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0XB9 # xchgw " _(VALUE) "(%rcx), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15W_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0XBA # xchgw " _(VALUE) "(%rdx), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15W_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0XBF # xchgw " _(VALUE) "(%rdi), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15W_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0XBE # xchgw " _(VALUE) "(%rsi), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15W_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0XBD # xchgw " _(VALUE) "(%rbp), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15W_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0XBC, 0X24 # xchgw " _(VALUE) "(%rsp), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15W_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0XB8 # xchgw " _(VALUE) "(%r8), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15W_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0XB9 # xchgw " _(VALUE) "(%r9), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15W_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0XBA # xchgw " _(VALUE) "(%r10), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15W_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0XBB # xchgw " _(VALUE) "(%r11), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15W_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0XBC, 0X24 # xchgw " _(VALUE) "(%r12), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15W_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0XBD # xchgw " _(VALUE) "(%r13), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15W_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0XBE # xchgw " _(VALUE) "(%r14), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15W_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0XBF # xchgw " _(VALUE) "(%r15), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15W_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0XB8 # xchgw " _(VALUE) "(%eax), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15W_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0XBB # xchgw " _(VALUE) "(%ebx), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15W_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0XB9 # xchgw " _(VALUE) "(%ecx), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15W_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0XBA # xchgw " _(VALUE) "(%edx), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15W_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0XBF # xchgw " _(VALUE) "(%edi), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15W_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0XBE # xchgw " _(VALUE) "(%esi), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15W_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0XBD # xchgw " _(VALUE) "(%ebp), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15W_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0XBC, 0X24 # xchgw " _(VALUE) "(%esp), %r15w")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_AX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X80 # xchgw %ax, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X83 # xchgw %ax, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X81 # xchgw %ax, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X82 # xchgw %ax, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X87 # xchgw %ax, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X86 # xchgw %ax, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X85 # xchgw %ax, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X84, 0X24 # xchgw %ax, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0X80 # xchgw %ax, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0X81 # xchgw %ax, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0X82 # xchgw %ax, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0X83 # xchgw %ax, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0X84, 0X24 # xchgw %ax, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0X85 # xchgw %ax, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0X86 # xchgw %ax, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0X87 # xchgw %ax, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0X80 # xchgw %ax, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0X83 # xchgw %ax, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0X81 # xchgw %ax, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0X82 # xchgw %ax, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0X87 # xchgw %ax, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0X86 # xchgw %ax, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0X85 # xchgw %ax, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_AX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0X84, 0X24 # xchgw %ax, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_BX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X98 # xchgw %bx, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X9B # xchgw %bx, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X99 # xchgw %bx, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X9A # xchgw %bx, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X9F # xchgw %bx, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X9E # xchgw %bx, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X9D # xchgw %bx, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X9C, 0X24 # xchgw %bx, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0X98 # xchgw %bx, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0X99 # xchgw %bx, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0X9A # xchgw %bx, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0X9B # xchgw %bx, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0X9C, 0X24 # xchgw %bx, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0X9D # xchgw %bx, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0X9E # xchgw %bx, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0X9F # xchgw %bx, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0X98 # xchgw %bx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0X9B # xchgw %bx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0X99 # xchgw %bx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0X9A # xchgw %bx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0X9F # xchgw %bx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0X9E # xchgw %bx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0X9D # xchgw %bx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0X9C, 0X24 # xchgw %bx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_CX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X88 # xchgw %cx, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X8B # xchgw %cx, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X89 # xchgw %cx, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X8A # xchgw %cx, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X8F # xchgw %cx, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X8E # xchgw %cx, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X8D # xchgw %cx, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X8C, 0X24 # xchgw %cx, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0X88 # xchgw %cx, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0X89 # xchgw %cx, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0X8A # xchgw %cx, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0X8B # xchgw %cx, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0X8C, 0X24 # xchgw %cx, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0X8D # xchgw %cx, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0X8E # xchgw %cx, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0X8F # xchgw %cx, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0X88 # xchgw %cx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0X8B # xchgw %cx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0X89 # xchgw %cx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0X8A # xchgw %cx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0X8F # xchgw %cx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0X8E # xchgw %cx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0X8D # xchgw %cx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_CX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0X8C, 0X24 # xchgw %cx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_DX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X90 # xchgw %dx, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X93 # xchgw %dx, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X91 # xchgw %dx, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X92 # xchgw %dx, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X97 # xchgw %dx, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X96 # xchgw %dx, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X95 # xchgw %dx, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0X94, 0X24 # xchgw %dx, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0X90 # xchgw %dx, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0X91 # xchgw %dx, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0X92 # xchgw %dx, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0X93 # xchgw %dx, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0X94, 0X24 # xchgw %dx, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0X95 # xchgw %dx, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0X96 # xchgw %dx, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0X97 # xchgw %dx, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0X90 # xchgw %dx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0X93 # xchgw %dx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0X91 # xchgw %dx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0X92 # xchgw %dx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0X97 # xchgw %dx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0X96 # xchgw %dx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0X95 # xchgw %dx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0X94, 0X24 # xchgw %dx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_DI_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XB8 # xchgw %di, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DI_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XBB # xchgw %di, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DI_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XB9 # xchgw %di, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DI_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XBA # xchgw %di, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DI_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XBF # xchgw %di, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DI_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XBE # xchgw %di, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DI_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XBD # xchgw %di, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DI_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XBC, 0X24 # xchgw %di, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DI_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0XB8 # xchgw %di, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DI_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0XB9 # xchgw %di, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DI_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0XBA # xchgw %di, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DI_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0XBB # xchgw %di, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DI_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0XBC, 0X24 # xchgw %di, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DI_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0XBD # xchgw %di, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DI_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0XBE # xchgw %di, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DI_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0XBF # xchgw %di, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0XB8 # xchgw %di, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0XBB # xchgw %di, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0XB9 # xchgw %di, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0XBA # xchgw %di, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0XBF # xchgw %di, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0XBE # xchgw %di, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0XBD # xchgw %di, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_DI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0XBC, 0X24 # xchgw %di, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_SI_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XB0 # xchgw %si, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SI_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XB3 # xchgw %si, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SI_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XB1 # xchgw %si, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SI_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XB2 # xchgw %si, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SI_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XB7 # xchgw %si, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SI_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XB6 # xchgw %si, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SI_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XB5 # xchgw %si, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SI_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XB4, 0X24 # xchgw %si, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SI_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0XB0 # xchgw %si, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SI_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0XB1 # xchgw %si, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SI_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0XB2 # xchgw %si, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SI_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0XB3 # xchgw %si, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SI_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0XB4, 0X24 # xchgw %si, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SI_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0XB5 # xchgw %si, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SI_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0XB6 # xchgw %si, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SI_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0XB7 # xchgw %si, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0XB0 # xchgw %si, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0XB3 # xchgw %si, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0XB1 # xchgw %si, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0XB2 # xchgw %si, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0XB7 # xchgw %si, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0XB6 # xchgw %si, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0XB5 # xchgw %si, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0XB4, 0X24 # xchgw %si, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_BP_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XA8 # xchgw %bp, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BP_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XAB # xchgw %bp, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BP_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XA9 # xchgw %bp, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BP_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XAA # xchgw %bp, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BP_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XAF # xchgw %bp, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BP_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XAE # xchgw %bp, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BP_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XAD # xchgw %bp, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BP_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XAC, 0X24 # xchgw %bp, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BP_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0XA8 # xchgw %bp, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BP_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0XA9 # xchgw %bp, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BP_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0XAA # xchgw %bp, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BP_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0XAB # xchgw %bp, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BP_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0XAC, 0X24 # xchgw %bp, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BP_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0XAD # xchgw %bp, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BP_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0XAE # xchgw %bp, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BP_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0XAF # xchgw %bp, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0XA8 # xchgw %bp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0XAB # xchgw %bp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0XA9 # xchgw %bp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0XAA # xchgw %bp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0XAF # xchgw %bp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0XAE # xchgw %bp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0XAD # xchgw %bp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_BP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0XAC, 0X24 # xchgw %bp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_SP_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XA0 # xchgw %sp, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SP_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XA3 # xchgw %sp, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SP_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XA1 # xchgw %sp, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SP_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XA2 # xchgw %sp, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SP_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XA7 # xchgw %sp, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SP_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XA6 # xchgw %sp, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SP_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XA5 # xchgw %sp, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SP_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X87, 0XA4, 0X24 # xchgw %sp, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SP_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0XA0 # xchgw %sp, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SP_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0XA1 # xchgw %sp, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SP_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0XA2 # xchgw %sp, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SP_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0XA3 # xchgw %sp, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SP_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0XA4, 0X24 # xchgw %sp, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SP_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0XA5 # xchgw %sp, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SP_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0XA6 # xchgw %sp, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SP_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X87, 0XA7 # xchgw %sp, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0XA0 # xchgw %sp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0XA3 # xchgw %sp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0XA1 # xchgw %sp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0XA2 # xchgw %sp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0XA7 # xchgw %sp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0XA6 # xchgw %sp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0XA5 # xchgw %sp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_SP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X87, 0XA4, 0X24 # xchgw %sp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_R8W_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0X80 # xchgw %r8w, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8W_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0X83 # xchgw %r8w, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8W_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0X81 # xchgw %r8w, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8W_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0X82 # xchgw %r8w, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8W_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0X87 # xchgw %r8w, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8W_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0X86 # xchgw %r8w, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8W_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0X85 # xchgw %r8w, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8W_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0X84, 0X24 # xchgw %r8w, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8W_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0X80 # xchgw %r8w, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8W_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0X81 # xchgw %r8w, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8W_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0X82 # xchgw %r8w, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8W_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0X83 # xchgw %r8w, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8W_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0X84, 0X24 # xchgw %r8w, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8W_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0X85 # xchgw %r8w, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8W_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0X86 # xchgw %r8w, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8W_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0X87 # xchgw %r8w, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8W_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X80 # xchgw %r8w, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8W_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X83 # xchgw %r8w, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8W_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X81 # xchgw %r8w, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8W_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X82 # xchgw %r8w, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8W_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X87 # xchgw %r8w, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8W_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X86 # xchgw %r8w, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8W_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X85 # xchgw %r8w, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8W_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X84, 0X24 # xchgw %r8w, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_R9W_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0X88 # xchgw %r9w, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9W_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0X8B # xchgw %r9w, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9W_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0X89 # xchgw %r9w, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9W_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0X8A # xchgw %r9w, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9W_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0X8F # xchgw %r9w, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9W_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0X8E # xchgw %r9w, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9W_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0X8D # xchgw %r9w, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9W_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0X8C, 0X24 # xchgw %r9w, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9W_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0X88 # xchgw %r9w, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9W_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0X89 # xchgw %r9w, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9W_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0X8A # xchgw %r9w, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9W_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0X8B # xchgw %r9w, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9W_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0X8C, 0X24 # xchgw %r9w, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9W_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0X8D # xchgw %r9w, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9W_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0X8E # xchgw %r9w, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9W_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0X8F # xchgw %r9w, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9W_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X88 # xchgw %r9w, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9W_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X8B # xchgw %r9w, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9W_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X89 # xchgw %r9w, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9W_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X8A # xchgw %r9w, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9W_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X8F # xchgw %r9w, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9W_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X8E # xchgw %r9w, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9W_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X8D # xchgw %r9w, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9W_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X8C, 0X24 # xchgw %r9w, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_R10W_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0X90 # xchgw %r10w, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10W_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0X93 # xchgw %r10w, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10W_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0X91 # xchgw %r10w, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10W_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0X92 # xchgw %r10w, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10W_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0X97 # xchgw %r10w, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10W_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0X96 # xchgw %r10w, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10W_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0X95 # xchgw %r10w, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10W_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0X94, 0X24 # xchgw %r10w, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10W_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0X90 # xchgw %r10w, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10W_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0X91 # xchgw %r10w, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10W_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0X92 # xchgw %r10w, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10W_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0X93 # xchgw %r10w, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10W_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0X94, 0X24 # xchgw %r10w, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10W_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0X95 # xchgw %r10w, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10W_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0X96 # xchgw %r10w, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10W_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0X97 # xchgw %r10w, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10W_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X90 # xchgw %r10w, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10W_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X93 # xchgw %r10w, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10W_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X91 # xchgw %r10w, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10W_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X92 # xchgw %r10w, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10W_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X97 # xchgw %r10w, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10W_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X96 # xchgw %r10w, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10W_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X95 # xchgw %r10w, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10W_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X94, 0X24 # xchgw %r10w, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_R11W_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0X98 # xchgw %r11w, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11W_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0X9B # xchgw %r11w, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11W_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0X99 # xchgw %r11w, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11W_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0X9A # xchgw %r11w, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11W_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0X9F # xchgw %r11w, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11W_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0X9E # xchgw %r11w, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11W_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0X9D # xchgw %r11w, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11W_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0X9C, 0X24 # xchgw %r11w, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11W_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0X98 # xchgw %r11w, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11W_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0X99 # xchgw %r11w, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11W_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0X9A # xchgw %r11w, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11W_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0X9B # xchgw %r11w, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11W_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0X9C, 0X24 # xchgw %r11w, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11W_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0X9D # xchgw %r11w, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11W_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0X9E # xchgw %r11w, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11W_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0X9F # xchgw %r11w, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11W_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X98 # xchgw %r11w, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11W_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X9B # xchgw %r11w, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11W_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X99 # xchgw %r11w, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11W_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X9A # xchgw %r11w, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11W_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X9F # xchgw %r11w, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11W_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X9E # xchgw %r11w, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11W_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X9D # xchgw %r11w, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11W_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0X9C, 0X24 # xchgw %r11w, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_R12W_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0XA0 # xchgw %r12w, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12W_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0XA3 # xchgw %r12w, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12W_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0XA1 # xchgw %r12w, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12W_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0XA2 # xchgw %r12w, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12W_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0XA7 # xchgw %r12w, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12W_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0XA6 # xchgw %r12w, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12W_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0XA5 # xchgw %r12w, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12W_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0XA4, 0X24 # xchgw %r12w, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12W_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0XA0 # xchgw %r12w, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12W_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0XA1 # xchgw %r12w, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12W_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0XA2 # xchgw %r12w, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12W_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0XA3 # xchgw %r12w, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12W_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0XA4, 0X24 # xchgw %r12w, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12W_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0XA5 # xchgw %r12w, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12W_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0XA6 # xchgw %r12w, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12W_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0XA7 # xchgw %r12w, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12W_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0XA0 # xchgw %r12w, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12W_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0XA3 # xchgw %r12w, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12W_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0XA1 # xchgw %r12w, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12W_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0XA2 # xchgw %r12w, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12W_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0XA7 # xchgw %r12w, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12W_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0XA6 # xchgw %r12w, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12W_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0XA5 # xchgw %r12w, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12W_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0XA4, 0X24 # xchgw %r12w, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_R13W_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0XA8 # xchgw %r13w, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13W_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0XAB # xchgw %r13w, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13W_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0XA9 # xchgw %r13w, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13W_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0XAA # xchgw %r13w, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13W_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0XAF # xchgw %r13w, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13W_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0XAE # xchgw %r13w, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13W_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0XAD # xchgw %r13w, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13W_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0XAC, 0X24 # xchgw %r13w, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13W_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0XA8 # xchgw %r13w, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13W_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0XA9 # xchgw %r13w, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13W_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0XAA # xchgw %r13w, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13W_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0XAB # xchgw %r13w, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13W_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0XAC, 0X24 # xchgw %r13w, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13W_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0XAD # xchgw %r13w, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13W_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0XAE # xchgw %r13w, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13W_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0XAF # xchgw %r13w, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13W_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0XA8 # xchgw %r13w, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13W_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0XAB # xchgw %r13w, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13W_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0XA9 # xchgw %r13w, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13W_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0XAA # xchgw %r13w, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13W_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0XAF # xchgw %r13w, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13W_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0XAE # xchgw %r13w, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13W_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0XAD # xchgw %r13w, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13W_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0XAC, 0X24 # xchgw %r13w, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_R14W_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0XB0 # xchgw %r14w, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14W_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0XB3 # xchgw %r14w, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14W_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0XB1 # xchgw %r14w, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14W_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0XB2 # xchgw %r14w, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14W_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0XB7 # xchgw %r14w, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14W_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0XB6 # xchgw %r14w, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14W_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0XB5 # xchgw %r14w, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14W_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0XB4, 0X24 # xchgw %r14w, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14W_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0XB0 # xchgw %r14w, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14W_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0XB1 # xchgw %r14w, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14W_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0XB2 # xchgw %r14w, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14W_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0XB3 # xchgw %r14w, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14W_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0XB4, 0X24 # xchgw %r14w, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14W_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0XB5 # xchgw %r14w, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14W_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0XB6 # xchgw %r14w, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14W_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0XB7 # xchgw %r14w, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14W_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0XB0 # xchgw %r14w, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14W_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0XB3 # xchgw %r14w, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14W_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0XB1 # xchgw %r14w, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14W_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0XB2 # xchgw %r14w, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14W_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0XB7 # xchgw %r14w, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14W_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0XB6 # xchgw %r14w, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14W_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0XB5 # xchgw %r14w, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14W_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0XB4, 0X24 # xchgw %r14w, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_R15W_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0XB8 # xchgw %r15w, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15W_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0XBB # xchgw %r15w, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15W_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0XB9 # xchgw %r15w, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15W_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0XBA # xchgw %r15w, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15W_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0XBF # xchgw %r15w, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15W_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0XBE # xchgw %r15w, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15W_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0XBD # xchgw %r15w, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15W_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X87, 0XBC, 0X24 # xchgw %r15w, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15W_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0XB8 # xchgw %r15w, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15W_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0XB9 # xchgw %r15w, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15W_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0XBA # xchgw %r15w, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15W_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0XBB # xchgw %r15w, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15W_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0XBC, 0X24 # xchgw %r15w, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15W_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0XBD # xchgw %r15w, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15W_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0XBE # xchgw %r15w, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15W_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X87, 0XBF # xchgw %r15w, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15W_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0XB8 # xchgw %r15w, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15W_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0XBB # xchgw %r15w, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15W_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0XB9 # xchgw %r15w, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15W_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0XBA # xchgw %r15w, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15W_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0XBF # xchgw %r15w, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15W_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0XBE # xchgw %r15w, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15W_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0XBD # xchgw %r15w, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15W_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X87, 0XBC, 0X24 # xchgw %r15w, " _(VALUE) "(%esp)")\
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
