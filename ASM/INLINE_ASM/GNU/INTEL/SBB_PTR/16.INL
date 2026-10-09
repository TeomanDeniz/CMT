#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************** [v] 8-BIT MEMORY [v] ************************** */
#ifdef __SYSTEM_16_BIT__
#define SBB_AL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X1A, 0X06 # sbbb (" _(VALUE) "), %al")\
	CMT_ASM(".short " _(VALUE))
#define SBB_BL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X1A, 0X1E # sbbb (" _(VALUE) "), %bl")\
	CMT_ASM(".short " _(VALUE))
#define SBB_CL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X1A, 0X0E # sbbb (" _(VALUE) "), %cl")\
	CMT_ASM(".short " _(VALUE))
#define SBB_DL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X1A, 0X16 # sbbb (" _(VALUE) "), %dl")\
	CMT_ASM(".short " _(VALUE))

#define SBB_AL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X18, 0X06 # sbbb %al, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define SBB_BL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X18, 0X1E # sbbb %bl, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define SBB_CL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X18, 0X0E # sbbb %cl, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define SBB_DL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X18, 0X16 # sbbb %dl, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))

#define SBB_AL_FROM_PTR_BX CMT_ASM(".byte 0X1A, 0X07 # sbbb (%bx), %al")
#define SBB_AL_FROM_PTR_BP CMT_ASM(".byte 0X1A, 0X46, 0X00 # sbbb (%bp), %al")
#define SBB_AL_FROM_PTR_SI CMT_ASM(".byte 0X1A, 0X04 # sbbb (%si), %al")
#define SBB_AL_FROM_PTR_DI CMT_ASM(".byte 0X1A, 0X05 # sbbb (%di), %al")

#define SBB_BL_FROM_PTR_BX CMT_ASM(".byte 0X1A, 0X1F # sbbb (%bx), %bl")
#define SBB_BL_FROM_PTR_BP CMT_ASM(".byte 0X1A, 0X5E, 0X00 # sbbb (%bp), %bl")
#define SBB_BL_FROM_PTR_SI CMT_ASM(".byte 0X1A, 0X1C # sbbb (%si), %bl")
#define SBB_BL_FROM_PTR_DI CMT_ASM(".byte 0X1A, 0X1D # sbbb (%di), %bl")

#define SBB_CL_FROM_PTR_BX CMT_ASM(".byte 0X1A, 0X0F # sbbb (%bx), %cl")
#define SBB_CL_FROM_PTR_BP CMT_ASM(".byte 0X1A, 0X4E, 0X00 # sbbb (%bp), %cl")
#define SBB_CL_FROM_PTR_SI CMT_ASM(".byte 0X1A, 0X0C # sbbb (%si), %cl")
#define SBB_CL_FROM_PTR_DI CMT_ASM(".byte 0X1A, 0X0D # sbbb (%di), %cl")

#define SBB_DL_FROM_PTR_BX CMT_ASM(".byte 0X1A, 0X17 # sbbb (%bx), %dl")
#define SBB_DL_FROM_PTR_BP CMT_ASM(".byte 0X1A, 0X56, 0X00 # sbbb (%bp), %dl")
#define SBB_DL_FROM_PTR_SI CMT_ASM(".byte 0X1A, 0X14 # sbbb (%si), %dl")
#define SBB_DL_FROM_PTR_DI CMT_ASM(".byte 0X1A, 0X15 # sbbb (%di), %dl")

#define SBB_AL_TO_PTR_BX CMT_ASM(".byte 0X18, 0X07 # sbbb %al, (%bx)")
#define SBB_AL_TO_PTR_BP CMT_ASM(".byte 0X18, 0X46, 0X00 # sbbb %al, (%bp)")
#define SBB_AL_TO_PTR_SI CMT_ASM(".byte 0X18, 0X04 # sbbb %al, (%si)")
#define SBB_AL_TO_PTR_DI CMT_ASM(".byte 0X18, 0X05 # sbbb %al, (%di)")

#define SBB_BL_TO_PTR_BX CMT_ASM(".byte 0X18, 0X1F # sbbb %bl, (%bx)")
#define SBB_BL_TO_PTR_BP CMT_ASM(".byte 0X18, 0X5E, 0X00 # sbbb %bl, (%bp)")
#define SBB_BL_TO_PTR_SI CMT_ASM(".byte 0X18, 0X1C # sbbb %bl, (%si)")
#define SBB_BL_TO_PTR_DI CMT_ASM(".byte 0X18, 0X1D # sbbb %bl, (%di)")

#define SBB_CL_TO_PTR_BX CMT_ASM(".byte 0X18, 0X0F # sbbb %cl, (%bx)")
#define SBB_CL_TO_PTR_BP CMT_ASM(".byte 0X18, 0X4E, 0X00 # sbbb %cl, (%bp)")
#define SBB_CL_TO_PTR_SI CMT_ASM(".byte 0X18, 0X0C # sbbb %cl, (%si)")
#define SBB_CL_TO_PTR_DI CMT_ASM(".byte 0X18, 0X0D # sbbb %cl, (%di)")

#define SBB_DL_TO_PTR_BX CMT_ASM(".byte 0X18, 0X17 # sbbb %dl, (%bx)")
#define SBB_DL_TO_PTR_BP CMT_ASM(".byte 0X18, 0X56, 0X00 # sbbb %dl, (%bp)")
#define SBB_DL_TO_PTR_SI CMT_ASM(".byte 0X18, 0X14 # sbbb %dl, (%si)")
#define SBB_DL_TO_PTR_DI CMT_ASM(".byte 0X18, 0X15 # sbbb %dl, (%di)")

#define SBB_AL_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X1A, 0X87 # sbbb " _(VALUE) "(%bx), %al")\
	CMT_ASM(".short " _(VALUE))
#define SBB_AL_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X1A, 0X86 # sbbb " _(VALUE) "(%bp), %al")\
	CMT_ASM(".short " _(VALUE))
#define SBB_AL_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X1A, 0X84 # sbbb " _(VALUE) "(%si), %al")\
	CMT_ASM(".short " _(VALUE))
#define SBB_AL_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X1A, 0X85 # sbbb " _(VALUE) "(%di), %al")\
	CMT_ASM(".short " _(VALUE))

#define SBB_BL_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X1A, 0X9F # sbbb " _(VALUE) "(%bx), %bl")\
	CMT_ASM(".short " _(VALUE))
#define SBB_BL_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X1A, 0X9E # sbbb " _(VALUE) "(%bp), %bl")\
	CMT_ASM(".short " _(VALUE))
#define SBB_BL_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X1A, 0X9C # sbbb " _(VALUE) "(%si), %bl")\
	CMT_ASM(".short " _(VALUE))
#define SBB_BL_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X1A, 0X9D # sbbb " _(VALUE) "(%di), %bl")\
	CMT_ASM(".short " _(VALUE))

#define SBB_CL_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X1A, 0X8F # sbbb " _(VALUE) "(%bx), %cl")\
	CMT_ASM(".short " _(VALUE))
#define SBB_CL_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X1A, 0X8E # sbbb " _(VALUE) "(%bp), %cl")\
	CMT_ASM(".short " _(VALUE))
#define SBB_CL_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X1A, 0X8C # sbbb " _(VALUE) "(%si), %cl")\
	CMT_ASM(".short " _(VALUE))
#define SBB_CL_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X1A, 0X8D # sbbb " _(VALUE) "(%di), %cl")\
	CMT_ASM(".short " _(VALUE))

#define SBB_DL_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X1A, 0X97 # sbbb " _(VALUE) "(%bx), %dl")\
	CMT_ASM(".short " _(VALUE))
#define SBB_DL_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X1A, 0X96 # sbbb " _(VALUE) "(%bp), %dl")\
	CMT_ASM(".short " _(VALUE))
#define SBB_DL_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X1A, 0X94 # sbbb " _(VALUE) "(%si), %dl")\
	CMT_ASM(".short " _(VALUE))
#define SBB_DL_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X1A, 0X95 # sbbb " _(VALUE) "(%di), %dl")\
	CMT_ASM(".short " _(VALUE))

#define SBB_AL_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X18, 0X87 # sbbb %al, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define SBB_AL_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X18, 0X86 # sbbb %al, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define SBB_AL_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X18, 0X84 # sbbb %al, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define SBB_AL_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X18, 0X85 # sbbb %al, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define SBB_BL_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X18, 0X9F # sbbb %bl, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define SBB_BL_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X18, 0X9E # sbbb %bl, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define SBB_BL_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X18, 0X9C # sbbb %bl, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define SBB_BL_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X18, 0X9D # sbbb %bl, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define SBB_CL_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X18, 0X8F # sbbb %cl, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define SBB_CL_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X18, 0X8E # sbbb %cl, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define SBB_CL_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X18, 0X8C # sbbb %cl, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define SBB_CL_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X18, 0X8D # sbbb %cl, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define SBB_DL_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X18, 0X97 # sbbb %dl, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define SBB_DL_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X18, 0X96 # sbbb %dl, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define SBB_DL_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X18, 0X94 # sbbb %dl, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define SBB_DL_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X18, 0X95 # sbbb %dl, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))
#endif /* __SYSTEM_16_BIT__ */

#ifdef __SYSTEM_32_BIT__
#define SBB_AL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X1A, 0X05 # sbbb (" _(VALUE) "), %al")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X1A, 0X1D # sbbb (" _(VALUE) "), %bl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X1A, 0X0D # sbbb (" _(VALUE) "), %cl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X1A, 0X15 # sbbb (" _(VALUE) "), %dl")\
	CMT_ASM(".long " _(VALUE))

#define SBB_AL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X18, 0X05 # sbbb %al, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X18, 0X1D # sbbb %bl, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X18, 0X0D # sbbb %cl, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X18, 0X15 # sbbb %dl, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))

#define SBB_AL_FROM_PTR_EAX CMT_ASM(".byte 0X1A, 0X00 # sbbb (%eax), %al")
#define SBB_AL_FROM_PTR_EBX CMT_ASM(".byte 0X1A, 0X03 # sbbb (%ebx), %al")
#define SBB_AL_FROM_PTR_ECX CMT_ASM(".byte 0X1A, 0X01 # sbbb (%ecx), %al")
#define SBB_AL_FROM_PTR_EDX CMT_ASM(".byte 0X1A, 0X02 # sbbb (%edx), %al")
#define SBB_AL_FROM_PTR_EDI CMT_ASM(".byte 0X1A, 0X07 # sbbb (%edi), %al")
#define SBB_AL_FROM_PTR_ESI CMT_ASM(".byte 0X1A, 0X06 # sbbb (%esi), %al")
#define SBB_AL_FROM_PTR_EBP CMT_ASM(".byte 0X1A, 0X45, 0X00 # sbbb (%ebp), %al")
#define SBB_AL_FROM_PTR_ESP CMT_ASM(".byte 0X1A, 0X04, 0X24 # sbbb (%esp), %al")
#define SBB_AL_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X1A, 0X07 # sbbb (%bx), %al")
#define SBB_AL_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X1A, 0X46, 0X00 # sbbb (%bp), %al")
#define SBB_AL_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X1A, 0X04 # sbbb (%si), %al")
#define SBB_AL_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X1A, 0X05 # sbbb (%di), %al")

#define SBB_BL_FROM_PTR_EAX CMT_ASM(".byte 0X1A, 0X18 # sbbb (%eax), %bl")
#define SBB_BL_FROM_PTR_EBX CMT_ASM(".byte 0X1A, 0X1B # sbbb (%ebx), %bl")
#define SBB_BL_FROM_PTR_ECX CMT_ASM(".byte 0X1A, 0X19 # sbbb (%ecx), %bl")
#define SBB_BL_FROM_PTR_EDX CMT_ASM(".byte 0X1A, 0X1A # sbbb (%edx), %bl")
#define SBB_BL_FROM_PTR_EDI CMT_ASM(".byte 0X1A, 0X1F # sbbb (%edi), %bl")
#define SBB_BL_FROM_PTR_ESI CMT_ASM(".byte 0X1A, 0X1E # sbbb (%esi), %bl")
#define SBB_BL_FROM_PTR_EBP CMT_ASM(".byte 0X1A, 0X5D, 0X00 # sbbb (%ebp), %bl")
#define SBB_BL_FROM_PTR_ESP CMT_ASM(".byte 0X1A, 0X1C, 0X24 # sbbb (%esp), %bl")
#define SBB_BL_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X1A, 0X1F # sbbb (%bx), %bl")
#define SBB_BL_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X1A, 0X5E, 0X00 # sbbb (%bp), %bl")
#define SBB_BL_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X1A, 0X1C # sbbb (%si), %bl")
#define SBB_BL_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X1A, 0X1D # sbbb (%di), %bl")

#define SBB_CL_FROM_PTR_EAX CMT_ASM(".byte 0X1A, 0X08 # sbbb (%eax), %cl")
#define SBB_CL_FROM_PTR_EBX CMT_ASM(".byte 0X1A, 0X0B # sbbb (%ebx), %cl")
#define SBB_CL_FROM_PTR_ECX CMT_ASM(".byte 0X1A, 0X09 # sbbb (%ecx), %cl")
#define SBB_CL_FROM_PTR_EDX CMT_ASM(".byte 0X1A, 0X0A # sbbb (%edx), %cl")
#define SBB_CL_FROM_PTR_EDI CMT_ASM(".byte 0X1A, 0X0F # sbbb (%edi), %cl")
#define SBB_CL_FROM_PTR_ESI CMT_ASM(".byte 0X1A, 0X0E # sbbb (%esi), %cl")
#define SBB_CL_FROM_PTR_EBP CMT_ASM(".byte 0X1A, 0X4D, 0X00 # sbbb (%ebp), %cl")
#define SBB_CL_FROM_PTR_ESP CMT_ASM(".byte 0X1A, 0X0C, 0X24 # sbbb (%esp), %cl")
#define SBB_CL_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X1A, 0X0F # sbbb (%bx), %cl")
#define SBB_CL_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X1A, 0X4E, 0X00 # sbbb (%bp), %cl")
#define SBB_CL_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X1A, 0X0C # sbbb (%si), %cl")
#define SBB_CL_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X1A, 0X0D # sbbb (%di), %cl")

#define SBB_DL_FROM_PTR_EAX CMT_ASM(".byte 0X1A, 0X10 # sbbb (%eax), %dl")
#define SBB_DL_FROM_PTR_EBX CMT_ASM(".byte 0X1A, 0X13 # sbbb (%ebx), %dl")
#define SBB_DL_FROM_PTR_ECX CMT_ASM(".byte 0X1A, 0X11 # sbbb (%ecx), %dl")
#define SBB_DL_FROM_PTR_EDX CMT_ASM(".byte 0X1A, 0X12 # sbbb (%edx), %dl")
#define SBB_DL_FROM_PTR_EDI CMT_ASM(".byte 0X1A, 0X17 # sbbb (%edi), %dl")
#define SBB_DL_FROM_PTR_ESI CMT_ASM(".byte 0X1A, 0X16 # sbbb (%esi), %dl")
#define SBB_DL_FROM_PTR_EBP CMT_ASM(".byte 0X1A, 0X55, 0X00 # sbbb (%ebp), %dl")
#define SBB_DL_FROM_PTR_ESP CMT_ASM(".byte 0X1A, 0X14, 0X24 # sbbb (%esp), %dl")
#define SBB_DL_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X1A, 0X17 # sbbb (%bx), %dl")
#define SBB_DL_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X1A, 0X56, 0X00 # sbbb (%bp), %dl")
#define SBB_DL_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X1A, 0X14 # sbbb (%si), %dl")
#define SBB_DL_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X1A, 0X15 # sbbb (%di), %dl")

#define SBB_AL_TO_PTR_EAX CMT_ASM(".byte 0X18, 0X00 # sbbb %al, (%eax)")
#define SBB_AL_TO_PTR_EBX CMT_ASM(".byte 0X18, 0X03 # sbbb %al, (%ebx)")
#define SBB_AL_TO_PTR_ECX CMT_ASM(".byte 0X18, 0X01 # sbbb %al, (%ecx)")
#define SBB_AL_TO_PTR_EDX CMT_ASM(".byte 0X18, 0X02 # sbbb %al, (%edx)")
#define SBB_AL_TO_PTR_EDI CMT_ASM(".byte 0X18, 0X07 # sbbb %al, (%edi)")
#define SBB_AL_TO_PTR_ESI CMT_ASM(".byte 0X18, 0X06 # sbbb %al, (%esi)")
#define SBB_AL_TO_PTR_EBP CMT_ASM(".byte 0X18, 0X45, 0X00 # sbbb %al, (%ebp)")
#define SBB_AL_TO_PTR_ESP CMT_ASM(".byte 0X18, 0X04, 0X24 # sbbb %al, (%esp)")
#define SBB_AL_TO_PTR_BX CMT_ASM(".byte 0X67, 0X18, 0X07 # sbbb %al, (%bx)")
#define SBB_AL_TO_PTR_BP CMT_ASM(".byte 0X67, 0X18, 0X46, 0X00 # sbbb %al, (%bp)")
#define SBB_AL_TO_PTR_SI CMT_ASM(".byte 0X67, 0X18, 0X04 # sbbb %al, (%si)")
#define SBB_AL_TO_PTR_DI CMT_ASM(".byte 0X67, 0X18, 0X05 # sbbb %al, (%di)")

#define SBB_BL_TO_PTR_EAX CMT_ASM(".byte 0X18, 0X18 # sbbb %bl, (%eax)")
#define SBB_BL_TO_PTR_EBX CMT_ASM(".byte 0X18, 0X1B # sbbb %bl, (%ebx)")
#define SBB_BL_TO_PTR_ECX CMT_ASM(".byte 0X18, 0X19 # sbbb %bl, (%ecx)")
#define SBB_BL_TO_PTR_EDX CMT_ASM(".byte 0X18, 0X1A # sbbb %bl, (%edx)")
#define SBB_BL_TO_PTR_EDI CMT_ASM(".byte 0X18, 0X1F # sbbb %bl, (%edi)")
#define SBB_BL_TO_PTR_ESI CMT_ASM(".byte 0X18, 0X1E # sbbb %bl, (%esi)")
#define SBB_BL_TO_PTR_EBP CMT_ASM(".byte 0X18, 0X5D, 0X00 # sbbb %bl, (%ebp)")
#define SBB_BL_TO_PTR_ESP CMT_ASM(".byte 0X18, 0X1C, 0X24 # sbbb %bl, (%esp)")
#define SBB_BL_TO_PTR_BX CMT_ASM(".byte 0X67, 0X18, 0X1F # sbbb %bl, (%bx)")
#define SBB_BL_TO_PTR_BP CMT_ASM(".byte 0X67, 0X18, 0X5E, 0X00 # sbbb %bl, (%bp)")
#define SBB_BL_TO_PTR_SI CMT_ASM(".byte 0X67, 0X18, 0X1C # sbbb %bl, (%si)")
#define SBB_BL_TO_PTR_DI CMT_ASM(".byte 0X67, 0X18, 0X1D # sbbb %bl, (%di)")

#define SBB_CL_TO_PTR_EAX CMT_ASM(".byte 0X18, 0X08 # sbbb %cl, (%eax)")
#define SBB_CL_TO_PTR_EBX CMT_ASM(".byte 0X18, 0X0B # sbbb %cl, (%ebx)")
#define SBB_CL_TO_PTR_ECX CMT_ASM(".byte 0X18, 0X09 # sbbb %cl, (%ecx)")
#define SBB_CL_TO_PTR_EDX CMT_ASM(".byte 0X18, 0X0A # sbbb %cl, (%edx)")
#define SBB_CL_TO_PTR_EDI CMT_ASM(".byte 0X18, 0X0F # sbbb %cl, (%edi)")
#define SBB_CL_TO_PTR_ESI CMT_ASM(".byte 0X18, 0X0E # sbbb %cl, (%esi)")
#define SBB_CL_TO_PTR_EBP CMT_ASM(".byte 0X18, 0X4D, 0X00 # sbbb %cl, (%ebp)")
#define SBB_CL_TO_PTR_ESP CMT_ASM(".byte 0X18, 0X0C, 0X24 # sbbb %cl, (%esp)")
#define SBB_CL_TO_PTR_BX CMT_ASM(".byte 0X67, 0X18, 0X0F # sbbb %cl, (%bx)")
#define SBB_CL_TO_PTR_BP CMT_ASM(".byte 0X67, 0X18, 0X4E, 0X00 # sbbb %cl, (%bp)")
#define SBB_CL_TO_PTR_SI CMT_ASM(".byte 0X67, 0X18, 0X0C # sbbb %cl, (%si)")
#define SBB_CL_TO_PTR_DI CMT_ASM(".byte 0X67, 0X18, 0X0D # sbbb %cl, (%di)")

#define SBB_DL_TO_PTR_EAX CMT_ASM(".byte 0X18, 0X10 # sbbb %dl, (%eax)")
#define SBB_DL_TO_PTR_EBX CMT_ASM(".byte 0X18, 0X13 # sbbb %dl, (%ebx)")
#define SBB_DL_TO_PTR_ECX CMT_ASM(".byte 0X18, 0X11 # sbbb %dl, (%ecx)")
#define SBB_DL_TO_PTR_EDX CMT_ASM(".byte 0X18, 0X12 # sbbb %dl, (%edx)")
#define SBB_DL_TO_PTR_EDI CMT_ASM(".byte 0X18, 0X17 # sbbb %dl, (%edi)")
#define SBB_DL_TO_PTR_ESI CMT_ASM(".byte 0X18, 0X16 # sbbb %dl, (%esi)")
#define SBB_DL_TO_PTR_EBP CMT_ASM(".byte 0X18, 0X55, 0X00 # sbbb %dl, (%ebp)")
#define SBB_DL_TO_PTR_ESP CMT_ASM(".byte 0X18, 0X14, 0X24 # sbbb %dl, (%esp)")
#define SBB_DL_TO_PTR_BX CMT_ASM(".byte 0X67, 0X18, 0X17 # sbbb %dl, (%bx)")
#define SBB_DL_TO_PTR_BP CMT_ASM(".byte 0X67, 0X18, 0X56, 0X00 # sbbb %dl, (%bp)")
#define SBB_DL_TO_PTR_SI CMT_ASM(".byte 0X67, 0X18, 0X14 # sbbb %dl, (%si)")
#define SBB_DL_TO_PTR_DI CMT_ASM(".byte 0X67, 0X18, 0X15 # sbbb %dl, (%di)")

#define SBB_AL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X1A, 0X80 # sbbb " _(VALUE) "(%eax), %al")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X1A, 0X83 # sbbb " _(VALUE) "(%ebx), %al")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X1A, 0X81 # sbbb " _(VALUE) "(%ecx), %al")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X1A, 0X82 # sbbb " _(VALUE) "(%edx), %al")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X1A, 0X87 # sbbb " _(VALUE) "(%edi), %al")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X1A, 0X86 # sbbb " _(VALUE) "(%esi), %al")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X1A, 0X85 # sbbb " _(VALUE) "(%ebp), %al")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X1A, 0X84, 0X24 # sbbb " _(VALUE) "(%esp), %al")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AL_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1A, 0X87 # sbbb " _(VALUE) "(%bx), %al")\
	CMT_ASM(".short " _(VALUE))
#define SBB_AL_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1A, 0X86 # sbbb " _(VALUE) "(%bp), %al")\
	CMT_ASM(".short " _(VALUE))
#define SBB_AL_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1A, 0X84 # sbbb " _(VALUE) "(%si), %al")\
	CMT_ASM(".short " _(VALUE))
#define SBB_AL_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1A, 0X85 # sbbb " _(VALUE) "(%di), %al")\
	CMT_ASM(".short " _(VALUE))

#define SBB_BL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X1A, 0X98 # sbbb " _(VALUE) "(%eax), %bl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X1A, 0X9B # sbbb " _(VALUE) "(%ebx), %bl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X1A, 0X99 # sbbb " _(VALUE) "(%ecx), %bl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X1A, 0X9A # sbbb " _(VALUE) "(%edx), %bl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X1A, 0X9F # sbbb " _(VALUE) "(%edi), %bl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X1A, 0X9E # sbbb " _(VALUE) "(%esi), %bl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X1A, 0X9D # sbbb " _(VALUE) "(%ebp), %bl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X1A, 0X9C, 0X24 # sbbb " _(VALUE) "(%esp), %bl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BL_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1A, 0X9F # sbbb " _(VALUE) "(%bx), %bl")\
	CMT_ASM(".short " _(VALUE))
#define SBB_BL_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1A, 0X9E # sbbb " _(VALUE) "(%bp), %bl")\
	CMT_ASM(".short " _(VALUE))
#define SBB_BL_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1A, 0X9C # sbbb " _(VALUE) "(%si), %bl")\
	CMT_ASM(".short " _(VALUE))
#define SBB_BL_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1A, 0X9D # sbbb " _(VALUE) "(%di), %bl")\
	CMT_ASM(".short " _(VALUE))

#define SBB_CL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X1A, 0X88 # sbbb " _(VALUE) "(%eax), %cl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X1A, 0X8B # sbbb " _(VALUE) "(%ebx), %cl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X1A, 0X89 # sbbb " _(VALUE) "(%ecx), %cl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X1A, 0X8A # sbbb " _(VALUE) "(%edx), %cl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X1A, 0X8F # sbbb " _(VALUE) "(%edi), %cl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X1A, 0X8E # sbbb " _(VALUE) "(%esi), %cl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X1A, 0X8D # sbbb " _(VALUE) "(%ebp), %cl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X1A, 0X8C, 0X24 # sbbb " _(VALUE) "(%esp), %cl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CL_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1A, 0X8F # sbbb " _(VALUE) "(%bx), %cl")\
	CMT_ASM(".short " _(VALUE))
#define SBB_CL_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1A, 0X8E # sbbb " _(VALUE) "(%bp), %cl")\
	CMT_ASM(".short " _(VALUE))
#define SBB_CL_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1A, 0X8C # sbbb " _(VALUE) "(%si), %cl")\
	CMT_ASM(".short " _(VALUE))
#define SBB_CL_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1A, 0X8D # sbbb " _(VALUE) "(%di), %cl")\
	CMT_ASM(".short " _(VALUE))

#define SBB_DL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X1A, 0X90 # sbbb " _(VALUE) "(%eax), %dl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X1A, 0X93 # sbbb " _(VALUE) "(%ebx), %dl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X1A, 0X91 # sbbb " _(VALUE) "(%ecx), %dl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X1A, 0X92 # sbbb " _(VALUE) "(%edx), %dl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X1A, 0X97 # sbbb " _(VALUE) "(%edi), %dl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X1A, 0X96 # sbbb " _(VALUE) "(%esi), %dl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X1A, 0X95 # sbbb " _(VALUE) "(%ebp), %dl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X1A, 0X94, 0X24 # sbbb " _(VALUE) "(%esp), %dl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DL_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1A, 0X97 # sbbb " _(VALUE) "(%bx), %dl")\
	CMT_ASM(".short " _(VALUE))
#define SBB_DL_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1A, 0X96 # sbbb " _(VALUE) "(%bp), %dl")\
	CMT_ASM(".short " _(VALUE))
#define SBB_DL_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1A, 0X94 # sbbb " _(VALUE) "(%si), %dl")\
	CMT_ASM(".short " _(VALUE))
#define SBB_DL_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1A, 0X95 # sbbb " _(VALUE) "(%di), %dl")\
	CMT_ASM(".short " _(VALUE))

#define SBB_AL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X18, 0X80 # sbbb %al, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X18, 0X83 # sbbb %al, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X18, 0X81 # sbbb %al, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X18, 0X82 # sbbb %al, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X18, 0X87 # sbbb %al, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X18, 0X86 # sbbb %al, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X18, 0X85 # sbbb %al, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X18, 0X84, 0X24 # sbbb %al, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AL_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X18, 0X87 # sbbb %al, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define SBB_AL_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X18, 0X86 # sbbb %al, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define SBB_AL_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X18, 0X84 # sbbb %al, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define SBB_AL_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X18, 0X85 # sbbb %al, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define SBB_BL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X18, 0X98 # sbbb %bl, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X18, 0X9B # sbbb %bl, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X18, 0X99 # sbbb %bl, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X18, 0X9A # sbbb %bl, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X18, 0X9F # sbbb %bl, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X18, 0X9E # sbbb %bl, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X18, 0X9D # sbbb %bl, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X18, 0X9C, 0X24 # sbbb %bl, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BL_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X18, 0X9F # sbbb %bl, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define SBB_BL_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X18, 0X9E # sbbb %bl, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define SBB_BL_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X18, 0X9C # sbbb %bl, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define SBB_BL_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X18, 0X9D # sbbb %bl, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define SBB_CL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X18, 0X88 # sbbb %cl, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X18, 0X8B # sbbb %cl, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X18, 0X89 # sbbb %cl, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X18, 0X8A # sbbb %cl, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X18, 0X8F # sbbb %cl, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X18, 0X8E # sbbb %cl, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X18, 0X8D # sbbb %cl, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X18, 0X8C, 0X24 # sbbb %cl, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CL_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X18, 0X8F # sbbb %cl, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define SBB_CL_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X18, 0X8E # sbbb %cl, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define SBB_CL_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X18, 0X8C # sbbb %cl, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define SBB_CL_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X18, 0X8D # sbbb %cl, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define SBB_DL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X18, 0X90 # sbbb %dl, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X18, 0X93 # sbbb %dl, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X18, 0X91 # sbbb %dl, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X18, 0X92 # sbbb %dl, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X18, 0X97 # sbbb %dl, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X18, 0X96 # sbbb %dl, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X18, 0X95 # sbbb %dl, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X18, 0X94, 0X24 # sbbb %dl, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DL_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X18, 0X97 # sbbb %dl, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define SBB_DL_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X18, 0X96 # sbbb %dl, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define SBB_DL_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X18, 0X94 # sbbb %dl, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define SBB_DL_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X18, 0X95 # sbbb %dl, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define SBB_AL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X1A, 0X04, 0X25 # sbbb (" _(VALUE) "), %al")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X1A, 0X1C, 0X25 # sbbb (" _(VALUE) "), %bl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X1A, 0X0C, 0X25 # sbbb (" _(VALUE) "), %cl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X1A, 0X14, 0X25 # sbbb (" _(VALUE) "), %dl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DIL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X40, 0X1A, 0X3C, 0X25 # sbbb (" _(VALUE) "), %dil")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SIL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X40, 0X1A, 0X34, 0X25 # sbbb (" _(VALUE) "), %sil")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BPL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X40, 0X1A, 0X2C, 0X25 # sbbb (" _(VALUE) "), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SPL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X40, 0X1A, 0X24, 0X25 # sbbb (" _(VALUE) "), %spl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8B_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1A, 0X04, 0X25 # sbbb (" _(VALUE) "), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9B_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1A, 0X0C, 0X25 # sbbb (" _(VALUE) "), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10B_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1A, 0X14, 0X25 # sbbb (" _(VALUE) "), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11B_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1A, 0X1C, 0X25 # sbbb (" _(VALUE) "), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12B_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1A, 0X24, 0X25 # sbbb (" _(VALUE) "), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13B_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1A, 0X2C, 0X25 # sbbb (" _(VALUE) "), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14B_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1A, 0X34, 0X25 # sbbb (" _(VALUE) "), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15B_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1A, 0X3C, 0X25 # sbbb (" _(VALUE) "), %r15b")\
	CMT_ASM(".long " _(VALUE))

#define SBB_AL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X18, 0X04, 0X25 # sbbb %al, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X18, 0X1C, 0X25 # sbbb %bl, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X18, 0X0C, 0X25 # sbbb %cl, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X18, 0X14, 0X25 # sbbb %dl, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DIL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X40, 0X18, 0X3C, 0X25 # sbbb %dil, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SIL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X40, 0X18, 0X34, 0X25 # sbbb %sil, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BPL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X40, 0X18, 0X2C, 0X25 # sbbb %bpl, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SPL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X40, 0X18, 0X24, 0X25 # sbbb %spl, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8B_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X18, 0X04, 0X25 # sbbb %r8b, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9B_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X18, 0X0C, 0X25 # sbbb %r9b, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10B_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X18, 0X14, 0X25 # sbbb %r10b, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11B_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X18, 0X1C, 0X25 # sbbb %r11b, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12B_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X18, 0X24, 0X25 # sbbb %r12b, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13B_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X18, 0X2C, 0X25 # sbbb %r13b, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14B_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X18, 0X34, 0X25 # sbbb %r14b, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15B_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X18, 0X3C, 0X25 # sbbb %r15b, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))

#define SBB_AL_FROM_PTR_RAX CMT_ASM(".byte 0X1A, 0X00 # sbbb (%rax), %al")
#define SBB_AL_FROM_PTR_RBX CMT_ASM(".byte 0X1A, 0X03 # sbbb (%rbx), %al")
#define SBB_AL_FROM_PTR_RCX CMT_ASM(".byte 0X1A, 0X01 # sbbb (%rcx), %al")
#define SBB_AL_FROM_PTR_RDX CMT_ASM(".byte 0X1A, 0X02 # sbbb (%rdx), %al")
#define SBB_AL_FROM_PTR_RDI CMT_ASM(".byte 0X1A, 0X07 # sbbb (%rdi), %al")
#define SBB_AL_FROM_PTR_RSI CMT_ASM(".byte 0X1A, 0X06 # sbbb (%rsi), %al")
#define SBB_AL_FROM_PTR_RBP CMT_ASM(".byte 0X1A, 0X45, 0X00 # sbbb (%rbp), %al")
#define SBB_AL_FROM_PTR_RSP CMT_ASM(".byte 0X1A, 0X04, 0X24 # sbbb (%rsp), %al")
#define SBB_AL_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X1A, 0X00 # sbbb (%r8), %al")
#define SBB_AL_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X1A, 0X01 # sbbb (%r9), %al")
#define SBB_AL_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X1A, 0X02 # sbbb (%r10), %al")
#define SBB_AL_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X1A, 0X03 # sbbb (%r11), %al")
#define SBB_AL_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X1A, 0X04, 0X24 # sbbb (%r12), %al")
#define SBB_AL_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X1A, 0X45, 0X00 # sbbb (%r13), %al")
#define SBB_AL_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X1A, 0X06 # sbbb (%r14), %al")
#define SBB_AL_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X1A, 0X07 # sbbb (%r15), %al")
#define SBB_AL_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X1A, 0X00 # sbbb (%eax), %al")
#define SBB_AL_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X1A, 0X03 # sbbb (%ebx), %al")
#define SBB_AL_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X1A, 0X01 # sbbb (%ecx), %al")
#define SBB_AL_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X1A, 0X02 # sbbb (%edx), %al")
#define SBB_AL_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X1A, 0X07 # sbbb (%edi), %al")
#define SBB_AL_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X1A, 0X06 # sbbb (%esi), %al")
#define SBB_AL_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X1A, 0X45, 0X00 # sbbb (%ebp), %al")
#define SBB_AL_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X1A, 0X04, 0X24 # sbbb (%esp), %al")

#define SBB_BL_FROM_PTR_RAX CMT_ASM(".byte 0X1A, 0X18 # sbbb (%rax), %bl")
#define SBB_BL_FROM_PTR_RBX CMT_ASM(".byte 0X1A, 0X1B # sbbb (%rbx), %bl")
#define SBB_BL_FROM_PTR_RCX CMT_ASM(".byte 0X1A, 0X19 # sbbb (%rcx), %bl")
#define SBB_BL_FROM_PTR_RDX CMT_ASM(".byte 0X1A, 0X1A # sbbb (%rdx), %bl")
#define SBB_BL_FROM_PTR_RDI CMT_ASM(".byte 0X1A, 0X1F # sbbb (%rdi), %bl")
#define SBB_BL_FROM_PTR_RSI CMT_ASM(".byte 0X1A, 0X1E # sbbb (%rsi), %bl")
#define SBB_BL_FROM_PTR_RBP CMT_ASM(".byte 0X1A, 0X5D, 0X00 # sbbb (%rbp), %bl")
#define SBB_BL_FROM_PTR_RSP CMT_ASM(".byte 0X1A, 0X1C, 0X24 # sbbb (%rsp), %bl")
#define SBB_BL_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X1A, 0X18 # sbbb (%r8), %bl")
#define SBB_BL_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X1A, 0X19 # sbbb (%r9), %bl")
#define SBB_BL_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X1A, 0X1A # sbbb (%r10), %bl")
#define SBB_BL_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X1A, 0X1B # sbbb (%r11), %bl")
#define SBB_BL_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X1A, 0X1C, 0X24 # sbbb (%r12), %bl")
#define SBB_BL_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X1A, 0X5D, 0X00 # sbbb (%r13), %bl")
#define SBB_BL_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X1A, 0X1E # sbbb (%r14), %bl")
#define SBB_BL_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X1A, 0X1F # sbbb (%r15), %bl")
#define SBB_BL_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X1A, 0X18 # sbbb (%eax), %bl")
#define SBB_BL_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X1A, 0X1B # sbbb (%ebx), %bl")
#define SBB_BL_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X1A, 0X19 # sbbb (%ecx), %bl")
#define SBB_BL_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X1A, 0X1A # sbbb (%edx), %bl")
#define SBB_BL_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X1A, 0X1F # sbbb (%edi), %bl")
#define SBB_BL_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X1A, 0X1E # sbbb (%esi), %bl")
#define SBB_BL_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X1A, 0X5D, 0X00 # sbbb (%ebp), %bl")
#define SBB_BL_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X1A, 0X1C, 0X24 # sbbb (%esp), %bl")

#define SBB_CL_FROM_PTR_RAX CMT_ASM(".byte 0X1A, 0X08 # sbbb (%rax), %cl")
#define SBB_CL_FROM_PTR_RBX CMT_ASM(".byte 0X1A, 0X0B # sbbb (%rbx), %cl")
#define SBB_CL_FROM_PTR_RCX CMT_ASM(".byte 0X1A, 0X09 # sbbb (%rcx), %cl")
#define SBB_CL_FROM_PTR_RDX CMT_ASM(".byte 0X1A, 0X0A # sbbb (%rdx), %cl")
#define SBB_CL_FROM_PTR_RDI CMT_ASM(".byte 0X1A, 0X0F # sbbb (%rdi), %cl")
#define SBB_CL_FROM_PTR_RSI CMT_ASM(".byte 0X1A, 0X0E # sbbb (%rsi), %cl")
#define SBB_CL_FROM_PTR_RBP CMT_ASM(".byte 0X1A, 0X4D, 0X00 # sbbb (%rbp), %cl")
#define SBB_CL_FROM_PTR_RSP CMT_ASM(".byte 0X1A, 0X0C, 0X24 # sbbb (%rsp), %cl")
#define SBB_CL_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X1A, 0X08 # sbbb (%r8), %cl")
#define SBB_CL_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X1A, 0X09 # sbbb (%r9), %cl")
#define SBB_CL_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X1A, 0X0A # sbbb (%r10), %cl")
#define SBB_CL_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X1A, 0X0B # sbbb (%r11), %cl")
#define SBB_CL_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X1A, 0X0C, 0X24 # sbbb (%r12), %cl")
#define SBB_CL_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X1A, 0X4D, 0X00 # sbbb (%r13), %cl")
#define SBB_CL_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X1A, 0X0E # sbbb (%r14), %cl")
#define SBB_CL_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X1A, 0X0F # sbbb (%r15), %cl")
#define SBB_CL_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X1A, 0X08 # sbbb (%eax), %cl")
#define SBB_CL_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X1A, 0X0B # sbbb (%ebx), %cl")
#define SBB_CL_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X1A, 0X09 # sbbb (%ecx), %cl")
#define SBB_CL_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X1A, 0X0A # sbbb (%edx), %cl")
#define SBB_CL_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X1A, 0X0F # sbbb (%edi), %cl")
#define SBB_CL_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X1A, 0X0E # sbbb (%esi), %cl")
#define SBB_CL_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X1A, 0X4D, 0X00 # sbbb (%ebp), %cl")
#define SBB_CL_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X1A, 0X0C, 0X24 # sbbb (%esp), %cl")

#define SBB_DL_FROM_PTR_RAX CMT_ASM(".byte 0X1A, 0X10 # sbbb (%rax), %dl")
#define SBB_DL_FROM_PTR_RBX CMT_ASM(".byte 0X1A, 0X13 # sbbb (%rbx), %dl")
#define SBB_DL_FROM_PTR_RCX CMT_ASM(".byte 0X1A, 0X11 # sbbb (%rcx), %dl")
#define SBB_DL_FROM_PTR_RDX CMT_ASM(".byte 0X1A, 0X12 # sbbb (%rdx), %dl")
#define SBB_DL_FROM_PTR_RDI CMT_ASM(".byte 0X1A, 0X17 # sbbb (%rdi), %dl")
#define SBB_DL_FROM_PTR_RSI CMT_ASM(".byte 0X1A, 0X16 # sbbb (%rsi), %dl")
#define SBB_DL_FROM_PTR_RBP CMT_ASM(".byte 0X1A, 0X55, 0X00 # sbbb (%rbp), %dl")
#define SBB_DL_FROM_PTR_RSP CMT_ASM(".byte 0X1A, 0X14, 0X24 # sbbb (%rsp), %dl")
#define SBB_DL_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X1A, 0X10 # sbbb (%r8), %dl")
#define SBB_DL_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X1A, 0X11 # sbbb (%r9), %dl")
#define SBB_DL_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X1A, 0X12 # sbbb (%r10), %dl")
#define SBB_DL_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X1A, 0X13 # sbbb (%r11), %dl")
#define SBB_DL_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X1A, 0X14, 0X24 # sbbb (%r12), %dl")
#define SBB_DL_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X1A, 0X55, 0X00 # sbbb (%r13), %dl")
#define SBB_DL_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X1A, 0X16 # sbbb (%r14), %dl")
#define SBB_DL_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X1A, 0X17 # sbbb (%r15), %dl")
#define SBB_DL_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X1A, 0X10 # sbbb (%eax), %dl")
#define SBB_DL_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X1A, 0X13 # sbbb (%ebx), %dl")
#define SBB_DL_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X1A, 0X11 # sbbb (%ecx), %dl")
#define SBB_DL_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X1A, 0X12 # sbbb (%edx), %dl")
#define SBB_DL_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X1A, 0X17 # sbbb (%edi), %dl")
#define SBB_DL_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X1A, 0X16 # sbbb (%esi), %dl")
#define SBB_DL_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X1A, 0X55, 0X00 # sbbb (%ebp), %dl")
#define SBB_DL_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X1A, 0X14, 0X24 # sbbb (%esp), %dl")

#define SBB_DIL_FROM_PTR_RAX CMT_ASM(".byte 0X40, 0X1A, 0X38 # sbbb (%rax), %dil")
#define SBB_DIL_FROM_PTR_RBX CMT_ASM(".byte 0X40, 0X1A, 0X3B # sbbb (%rbx), %dil")
#define SBB_DIL_FROM_PTR_RCX CMT_ASM(".byte 0X40, 0X1A, 0X39 # sbbb (%rcx), %dil")
#define SBB_DIL_FROM_PTR_RDX CMT_ASM(".byte 0X40, 0X1A, 0X3A # sbbb (%rdx), %dil")
#define SBB_DIL_FROM_PTR_RDI CMT_ASM(".byte 0X40, 0X1A, 0X3F # sbbb (%rdi), %dil")
#define SBB_DIL_FROM_PTR_RSI CMT_ASM(".byte 0X40, 0X1A, 0X3E # sbbb (%rsi), %dil")
#define SBB_DIL_FROM_PTR_RBP CMT_ASM(".byte 0X40, 0X1A, 0X7D, 0X00 # sbbb (%rbp), %dil")
#define SBB_DIL_FROM_PTR_RSP CMT_ASM(".byte 0X40, 0X1A, 0X3C, 0X24 # sbbb (%rsp), %dil")
#define SBB_DIL_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X1A, 0X38 # sbbb (%r8), %dil")
#define SBB_DIL_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X1A, 0X39 # sbbb (%r9), %dil")
#define SBB_DIL_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X1A, 0X3A # sbbb (%r10), %dil")
#define SBB_DIL_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X1A, 0X3B # sbbb (%r11), %dil")
#define SBB_DIL_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X1A, 0X3C, 0X24 # sbbb (%r12), %dil")
#define SBB_DIL_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X1A, 0X7D, 0X00 # sbbb (%r13), %dil")
#define SBB_DIL_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X1A, 0X3E # sbbb (%r14), %dil")
#define SBB_DIL_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X1A, 0X3F # sbbb (%r15), %dil")
#define SBB_DIL_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X40, 0X1A, 0X38 # sbbb (%eax), %dil")
#define SBB_DIL_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X40, 0X1A, 0X3B # sbbb (%ebx), %dil")
#define SBB_DIL_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X40, 0X1A, 0X39 # sbbb (%ecx), %dil")
#define SBB_DIL_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X40, 0X1A, 0X3A # sbbb (%edx), %dil")
#define SBB_DIL_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X40, 0X1A, 0X3F # sbbb (%edi), %dil")
#define SBB_DIL_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X40, 0X1A, 0X3E # sbbb (%esi), %dil")
#define SBB_DIL_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X40, 0X1A, 0X7D, 0X00 # sbbb (%ebp), %dil")
#define SBB_DIL_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X40, 0X1A, 0X3C, 0X24 # sbbb (%esp), %dil")

#define SBB_SIL_FROM_PTR_RAX CMT_ASM(".byte 0X40, 0X1A, 0X30 # sbbb (%rax), %sil")
#define SBB_SIL_FROM_PTR_RBX CMT_ASM(".byte 0X40, 0X1A, 0X33 # sbbb (%rbx), %sil")
#define SBB_SIL_FROM_PTR_RCX CMT_ASM(".byte 0X40, 0X1A, 0X31 # sbbb (%rcx), %sil")
#define SBB_SIL_FROM_PTR_RDX CMT_ASM(".byte 0X40, 0X1A, 0X32 # sbbb (%rdx), %sil")
#define SBB_SIL_FROM_PTR_RDI CMT_ASM(".byte 0X40, 0X1A, 0X37 # sbbb (%rdi), %sil")
#define SBB_SIL_FROM_PTR_RSI CMT_ASM(".byte 0X40, 0X1A, 0X36 # sbbb (%rsi), %sil")
#define SBB_SIL_FROM_PTR_RBP CMT_ASM(".byte 0X40, 0X1A, 0X75, 0X00 # sbbb (%rbp), %sil")
#define SBB_SIL_FROM_PTR_RSP CMT_ASM(".byte 0X40, 0X1A, 0X34, 0X24 # sbbb (%rsp), %sil")
#define SBB_SIL_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X1A, 0X30 # sbbb (%r8), %sil")
#define SBB_SIL_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X1A, 0X31 # sbbb (%r9), %sil")
#define SBB_SIL_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X1A, 0X32 # sbbb (%r10), %sil")
#define SBB_SIL_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X1A, 0X33 # sbbb (%r11), %sil")
#define SBB_SIL_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X1A, 0X34, 0X24 # sbbb (%r12), %sil")
#define SBB_SIL_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X1A, 0X75, 0X00 # sbbb (%r13), %sil")
#define SBB_SIL_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X1A, 0X36 # sbbb (%r14), %sil")
#define SBB_SIL_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X1A, 0X37 # sbbb (%r15), %sil")
#define SBB_SIL_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X40, 0X1A, 0X30 # sbbb (%eax), %sil")
#define SBB_SIL_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X40, 0X1A, 0X33 # sbbb (%ebx), %sil")
#define SBB_SIL_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X40, 0X1A, 0X31 # sbbb (%ecx), %sil")
#define SBB_SIL_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X40, 0X1A, 0X32 # sbbb (%edx), %sil")
#define SBB_SIL_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X40, 0X1A, 0X37 # sbbb (%edi), %sil")
#define SBB_SIL_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X40, 0X1A, 0X36 # sbbb (%esi), %sil")
#define SBB_SIL_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X40, 0X1A, 0X75, 0X00 # sbbb (%ebp), %sil")
#define SBB_SIL_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X40, 0X1A, 0X34, 0X24 # sbbb (%esp), %sil")

#define SBB_BPL_FROM_PTR_RAX CMT_ASM(".byte 0X40, 0X1A, 0X28 # sbbb (%rax), %bpl")
#define SBB_BPL_FROM_PTR_RBX CMT_ASM(".byte 0X40, 0X1A, 0X2B # sbbb (%rbx), %bpl")
#define SBB_BPL_FROM_PTR_RCX CMT_ASM(".byte 0X40, 0X1A, 0X29 # sbbb (%rcx), %bpl")
#define SBB_BPL_FROM_PTR_RDX CMT_ASM(".byte 0X40, 0X1A, 0X2A # sbbb (%rdx), %bpl")
#define SBB_BPL_FROM_PTR_RDI CMT_ASM(".byte 0X40, 0X1A, 0X2F # sbbb (%rdi), %bpl")
#define SBB_BPL_FROM_PTR_RSI CMT_ASM(".byte 0X40, 0X1A, 0X2E # sbbb (%rsi), %bpl")
#define SBB_BPL_FROM_PTR_RBP CMT_ASM(".byte 0X40, 0X1A, 0X6D, 0X00 # sbbb (%rbp), %bpl")
#define SBB_BPL_FROM_PTR_RSP CMT_ASM(".byte 0X40, 0X1A, 0X2C, 0X24 # sbbb (%rsp), %bpl")
#define SBB_BPL_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X1A, 0X28 # sbbb (%r8), %bpl")
#define SBB_BPL_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X1A, 0X29 # sbbb (%r9), %bpl")
#define SBB_BPL_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X1A, 0X2A # sbbb (%r10), %bpl")
#define SBB_BPL_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X1A, 0X2B # sbbb (%r11), %bpl")
#define SBB_BPL_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X1A, 0X2C, 0X24 # sbbb (%r12), %bpl")
#define SBB_BPL_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X1A, 0X6D, 0X00 # sbbb (%r13), %bpl")
#define SBB_BPL_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X1A, 0X2E # sbbb (%r14), %bpl")
#define SBB_BPL_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X1A, 0X2F # sbbb (%r15), %bpl")
#define SBB_BPL_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X40, 0X1A, 0X28 # sbbb (%eax), %bpl")
#define SBB_BPL_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X40, 0X1A, 0X2B # sbbb (%ebx), %bpl")
#define SBB_BPL_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X40, 0X1A, 0X29 # sbbb (%ecx), %bpl")
#define SBB_BPL_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X40, 0X1A, 0X2A # sbbb (%edx), %bpl")
#define SBB_BPL_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X40, 0X1A, 0X2F # sbbb (%edi), %bpl")
#define SBB_BPL_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X40, 0X1A, 0X2E # sbbb (%esi), %bpl")
#define SBB_BPL_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X40, 0X1A, 0X6D, 0X00 # sbbb (%ebp), %bpl")
#define SBB_BPL_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X40, 0X1A, 0X2C, 0X24 # sbbb (%esp), %bpl")

#define SBB_SPL_FROM_PTR_RAX CMT_ASM(".byte 0X40, 0X1A, 0X20 # sbbb (%rax), %spl")
#define SBB_SPL_FROM_PTR_RBX CMT_ASM(".byte 0X40, 0X1A, 0X23 # sbbb (%rbx), %spl")
#define SBB_SPL_FROM_PTR_RCX CMT_ASM(".byte 0X40, 0X1A, 0X21 # sbbb (%rcx), %spl")
#define SBB_SPL_FROM_PTR_RDX CMT_ASM(".byte 0X40, 0X1A, 0X22 # sbbb (%rdx), %spl")
#define SBB_SPL_FROM_PTR_RDI CMT_ASM(".byte 0X40, 0X1A, 0X27 # sbbb (%rdi), %spl")
#define SBB_SPL_FROM_PTR_RSI CMT_ASM(".byte 0X40, 0X1A, 0X26 # sbbb (%rsi), %spl")
#define SBB_SPL_FROM_PTR_RBP CMT_ASM(".byte 0X40, 0X1A, 0X65, 0X00 # sbbb (%rbp), %spl")
#define SBB_SPL_FROM_PTR_RSP CMT_ASM(".byte 0X40, 0X1A, 0X24, 0X24 # sbbb (%rsp), %spl")
#define SBB_SPL_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X1A, 0X20 # sbbb (%r8), %spl")
#define SBB_SPL_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X1A, 0X21 # sbbb (%r9), %spl")
#define SBB_SPL_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X1A, 0X22 # sbbb (%r10), %spl")
#define SBB_SPL_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X1A, 0X23 # sbbb (%r11), %spl")
#define SBB_SPL_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X1A, 0X24, 0X24 # sbbb (%r12), %spl")
#define SBB_SPL_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X1A, 0X65, 0X00 # sbbb (%r13), %spl")
#define SBB_SPL_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X1A, 0X26 # sbbb (%r14), %spl")
#define SBB_SPL_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X1A, 0X27 # sbbb (%r15), %spl")
#define SBB_SPL_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X40, 0X1A, 0X20 # sbbb (%eax), %spl")
#define SBB_SPL_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X40, 0X1A, 0X23 # sbbb (%ebx), %spl")
#define SBB_SPL_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X40, 0X1A, 0X21 # sbbb (%ecx), %spl")
#define SBB_SPL_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X40, 0X1A, 0X22 # sbbb (%edx), %spl")
#define SBB_SPL_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X40, 0X1A, 0X27 # sbbb (%edi), %spl")
#define SBB_SPL_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X40, 0X1A, 0X26 # sbbb (%esi), %spl")
#define SBB_SPL_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X40, 0X1A, 0X65, 0X00 # sbbb (%ebp), %spl")
#define SBB_SPL_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X40, 0X1A, 0X24, 0X24 # sbbb (%esp), %spl")

#define SBB_R8B_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X1A, 0X00 # sbbb (%rax), %r8b")
#define SBB_R8B_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X1A, 0X03 # sbbb (%rbx), %r8b")
#define SBB_R8B_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X1A, 0X01 # sbbb (%rcx), %r8b")
#define SBB_R8B_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X1A, 0X02 # sbbb (%rdx), %r8b")
#define SBB_R8B_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X1A, 0X07 # sbbb (%rdi), %r8b")
#define SBB_R8B_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X1A, 0X06 # sbbb (%rsi), %r8b")
#define SBB_R8B_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X1A, 0X45, 0X00 # sbbb (%rbp), %r8b")
#define SBB_R8B_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X1A, 0X04, 0X24 # sbbb (%rsp), %r8b")
#define SBB_R8B_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X1A, 0X00 # sbbb (%r8), %r8b")
#define SBB_R8B_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X1A, 0X01 # sbbb (%r9), %r8b")
#define SBB_R8B_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X1A, 0X02 # sbbb (%r10), %r8b")
#define SBB_R8B_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X1A, 0X03 # sbbb (%r11), %r8b")
#define SBB_R8B_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X1A, 0X04, 0X24 # sbbb (%r12), %r8b")
#define SBB_R8B_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X1A, 0X45, 0X00 # sbbb (%r13), %r8b")
#define SBB_R8B_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X1A, 0X06 # sbbb (%r14), %r8b")
#define SBB_R8B_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X1A, 0X07 # sbbb (%r15), %r8b")
#define SBB_R8B_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X1A, 0X00 # sbbb (%eax), %r8b")
#define SBB_R8B_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X1A, 0X03 # sbbb (%ebx), %r8b")
#define SBB_R8B_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X1A, 0X01 # sbbb (%ecx), %r8b")
#define SBB_R8B_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X1A, 0X02 # sbbb (%edx), %r8b")
#define SBB_R8B_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X1A, 0X07 # sbbb (%edi), %r8b")
#define SBB_R8B_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X1A, 0X06 # sbbb (%esi), %r8b")
#define SBB_R8B_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X1A, 0X45, 0X00 # sbbb (%ebp), %r8b")
#define SBB_R8B_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X1A, 0X04, 0X24 # sbbb (%esp), %r8b")

#define SBB_R9B_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X1A, 0X08 # sbbb (%rax), %r9b")
#define SBB_R9B_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X1A, 0X0B # sbbb (%rbx), %r9b")
#define SBB_R9B_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X1A, 0X09 # sbbb (%rcx), %r9b")
#define SBB_R9B_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X1A, 0X0A # sbbb (%rdx), %r9b")
#define SBB_R9B_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X1A, 0X0F # sbbb (%rdi), %r9b")
#define SBB_R9B_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X1A, 0X0E # sbbb (%rsi), %r9b")
#define SBB_R9B_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X1A, 0X4D, 0X00 # sbbb (%rbp), %r9b")
#define SBB_R9B_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X1A, 0X0C, 0X24 # sbbb (%rsp), %r9b")
#define SBB_R9B_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X1A, 0X08 # sbbb (%r8), %r9b")
#define SBB_R9B_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X1A, 0X09 # sbbb (%r9), %r9b")
#define SBB_R9B_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X1A, 0X0A # sbbb (%r10), %r9b")
#define SBB_R9B_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X1A, 0X0B # sbbb (%r11), %r9b")
#define SBB_R9B_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X1A, 0X0C, 0X24 # sbbb (%r12), %r9b")
#define SBB_R9B_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X1A, 0X4D, 0X00 # sbbb (%r13), %r9b")
#define SBB_R9B_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X1A, 0X0E # sbbb (%r14), %r9b")
#define SBB_R9B_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X1A, 0X0F # sbbb (%r15), %r9b")
#define SBB_R9B_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X1A, 0X08 # sbbb (%eax), %r9b")
#define SBB_R9B_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X1A, 0X0B # sbbb (%ebx), %r9b")
#define SBB_R9B_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X1A, 0X09 # sbbb (%ecx), %r9b")
#define SBB_R9B_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X1A, 0X0A # sbbb (%edx), %r9b")
#define SBB_R9B_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X1A, 0X0F # sbbb (%edi), %r9b")
#define SBB_R9B_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X1A, 0X0E # sbbb (%esi), %r9b")
#define SBB_R9B_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X1A, 0X4D, 0X00 # sbbb (%ebp), %r9b")
#define SBB_R9B_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X1A, 0X0C, 0X24 # sbbb (%esp), %r9b")

#define SBB_R10B_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X1A, 0X10 # sbbb (%rax), %r10b")
#define SBB_R10B_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X1A, 0X13 # sbbb (%rbx), %r10b")
#define SBB_R10B_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X1A, 0X11 # sbbb (%rcx), %r10b")
#define SBB_R10B_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X1A, 0X12 # sbbb (%rdx), %r10b")
#define SBB_R10B_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X1A, 0X17 # sbbb (%rdi), %r10b")
#define SBB_R10B_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X1A, 0X16 # sbbb (%rsi), %r10b")
#define SBB_R10B_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X1A, 0X55, 0X00 # sbbb (%rbp), %r10b")
#define SBB_R10B_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X1A, 0X14, 0X24 # sbbb (%rsp), %r10b")
#define SBB_R10B_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X1A, 0X10 # sbbb (%r8), %r10b")
#define SBB_R10B_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X1A, 0X11 # sbbb (%r9), %r10b")
#define SBB_R10B_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X1A, 0X12 # sbbb (%r10), %r10b")
#define SBB_R10B_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X1A, 0X13 # sbbb (%r11), %r10b")
#define SBB_R10B_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X1A, 0X14, 0X24 # sbbb (%r12), %r10b")
#define SBB_R10B_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X1A, 0X55, 0X00 # sbbb (%r13), %r10b")
#define SBB_R10B_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X1A, 0X16 # sbbb (%r14), %r10b")
#define SBB_R10B_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X1A, 0X17 # sbbb (%r15), %r10b")
#define SBB_R10B_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X1A, 0X10 # sbbb (%eax), %r10b")
#define SBB_R10B_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X1A, 0X13 # sbbb (%ebx), %r10b")
#define SBB_R10B_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X1A, 0X11 # sbbb (%ecx), %r10b")
#define SBB_R10B_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X1A, 0X12 # sbbb (%edx), %r10b")
#define SBB_R10B_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X1A, 0X17 # sbbb (%edi), %r10b")
#define SBB_R10B_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X1A, 0X16 # sbbb (%esi), %r10b")
#define SBB_R10B_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X1A, 0X55, 0X00 # sbbb (%ebp), %r10b")
#define SBB_R10B_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X1A, 0X14, 0X24 # sbbb (%esp), %r10b")

#define SBB_R11B_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X1A, 0X18 # sbbb (%rax), %r11b")
#define SBB_R11B_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X1A, 0X1B # sbbb (%rbx), %r11b")
#define SBB_R11B_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X1A, 0X19 # sbbb (%rcx), %r11b")
#define SBB_R11B_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X1A, 0X1A # sbbb (%rdx), %r11b")
#define SBB_R11B_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X1A, 0X1F # sbbb (%rdi), %r11b")
#define SBB_R11B_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X1A, 0X1E # sbbb (%rsi), %r11b")
#define SBB_R11B_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X1A, 0X5D, 0X00 # sbbb (%rbp), %r11b")
#define SBB_R11B_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X1A, 0X1C, 0X24 # sbbb (%rsp), %r11b")
#define SBB_R11B_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X1A, 0X18 # sbbb (%r8), %r11b")
#define SBB_R11B_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X1A, 0X19 # sbbb (%r9), %r11b")
#define SBB_R11B_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X1A, 0X1A # sbbb (%r10), %r11b")
#define SBB_R11B_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X1A, 0X1B # sbbb (%r11), %r11b")
#define SBB_R11B_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X1A, 0X1C, 0X24 # sbbb (%r12), %r11b")
#define SBB_R11B_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X1A, 0X5D, 0X00 # sbbb (%r13), %r11b")
#define SBB_R11B_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X1A, 0X1E # sbbb (%r14), %r11b")
#define SBB_R11B_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X1A, 0X1F # sbbb (%r15), %r11b")
#define SBB_R11B_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X1A, 0X18 # sbbb (%eax), %r11b")
#define SBB_R11B_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X1A, 0X1B # sbbb (%ebx), %r11b")
#define SBB_R11B_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X1A, 0X19 # sbbb (%ecx), %r11b")
#define SBB_R11B_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X1A, 0X1A # sbbb (%edx), %r11b")
#define SBB_R11B_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X1A, 0X1F # sbbb (%edi), %r11b")
#define SBB_R11B_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X1A, 0X1E # sbbb (%esi), %r11b")
#define SBB_R11B_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X1A, 0X5D, 0X00 # sbbb (%ebp), %r11b")
#define SBB_R11B_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X1A, 0X1C, 0X24 # sbbb (%esp), %r11b")

#define SBB_R12B_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X1A, 0X20 # sbbb (%rax), %r12b")
#define SBB_R12B_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X1A, 0X23 # sbbb (%rbx), %r12b")
#define SBB_R12B_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X1A, 0X21 # sbbb (%rcx), %r12b")
#define SBB_R12B_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X1A, 0X22 # sbbb (%rdx), %r12b")
#define SBB_R12B_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X1A, 0X27 # sbbb (%rdi), %r12b")
#define SBB_R12B_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X1A, 0X26 # sbbb (%rsi), %r12b")
#define SBB_R12B_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X1A, 0X65, 0X00 # sbbb (%rbp), %r12b")
#define SBB_R12B_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X1A, 0X24, 0X24 # sbbb (%rsp), %r12b")
#define SBB_R12B_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X1A, 0X20 # sbbb (%r8), %r12b")
#define SBB_R12B_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X1A, 0X21 # sbbb (%r9), %r12b")
#define SBB_R12B_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X1A, 0X22 # sbbb (%r10), %r12b")
#define SBB_R12B_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X1A, 0X23 # sbbb (%r11), %r12b")
#define SBB_R12B_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X1A, 0X24, 0X24 # sbbb (%r12), %r12b")
#define SBB_R12B_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X1A, 0X65, 0X00 # sbbb (%r13), %r12b")
#define SBB_R12B_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X1A, 0X26 # sbbb (%r14), %r12b")
#define SBB_R12B_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X1A, 0X27 # sbbb (%r15), %r12b")
#define SBB_R12B_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X1A, 0X20 # sbbb (%eax), %r12b")
#define SBB_R12B_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X1A, 0X23 # sbbb (%ebx), %r12b")
#define SBB_R12B_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X1A, 0X21 # sbbb (%ecx), %r12b")
#define SBB_R12B_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X1A, 0X22 # sbbb (%edx), %r12b")
#define SBB_R12B_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X1A, 0X27 # sbbb (%edi), %r12b")
#define SBB_R12B_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X1A, 0X26 # sbbb (%esi), %r12b")
#define SBB_R12B_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X1A, 0X65, 0X00 # sbbb (%ebp), %r12b")
#define SBB_R12B_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X1A, 0X24, 0X24 # sbbb (%esp), %r12b")

#define SBB_R13B_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X1A, 0X28 # sbbb (%rax), %r13b")
#define SBB_R13B_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X1A, 0X2B # sbbb (%rbx), %r13b")
#define SBB_R13B_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X1A, 0X29 # sbbb (%rcx), %r13b")
#define SBB_R13B_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X1A, 0X2A # sbbb (%rdx), %r13b")
#define SBB_R13B_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X1A, 0X2F # sbbb (%rdi), %r13b")
#define SBB_R13B_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X1A, 0X2E # sbbb (%rsi), %r13b")
#define SBB_R13B_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X1A, 0X6D, 0X00 # sbbb (%rbp), %r13b")
#define SBB_R13B_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X1A, 0X2C, 0X24 # sbbb (%rsp), %r13b")
#define SBB_R13B_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X1A, 0X28 # sbbb (%r8), %r13b")
#define SBB_R13B_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X1A, 0X29 # sbbb (%r9), %r13b")
#define SBB_R13B_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X1A, 0X2A # sbbb (%r10), %r13b")
#define SBB_R13B_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X1A, 0X2B # sbbb (%r11), %r13b")
#define SBB_R13B_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X1A, 0X2C, 0X24 # sbbb (%r12), %r13b")
#define SBB_R13B_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X1A, 0X6D, 0X00 # sbbb (%r13), %r13b")
#define SBB_R13B_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X1A, 0X2E # sbbb (%r14), %r13b")
#define SBB_R13B_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X1A, 0X2F # sbbb (%r15), %r13b")
#define SBB_R13B_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X1A, 0X28 # sbbb (%eax), %r13b")
#define SBB_R13B_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X1A, 0X2B # sbbb (%ebx), %r13b")
#define SBB_R13B_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X1A, 0X29 # sbbb (%ecx), %r13b")
#define SBB_R13B_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X1A, 0X2A # sbbb (%edx), %r13b")
#define SBB_R13B_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X1A, 0X2F # sbbb (%edi), %r13b")
#define SBB_R13B_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X1A, 0X2E # sbbb (%esi), %r13b")
#define SBB_R13B_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X1A, 0X6D, 0X00 # sbbb (%ebp), %r13b")
#define SBB_R13B_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X1A, 0X2C, 0X24 # sbbb (%esp), %r13b")

#define SBB_R14B_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X1A, 0X30 # sbbb (%rax), %r14b")
#define SBB_R14B_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X1A, 0X33 # sbbb (%rbx), %r14b")
#define SBB_R14B_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X1A, 0X31 # sbbb (%rcx), %r14b")
#define SBB_R14B_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X1A, 0X32 # sbbb (%rdx), %r14b")
#define SBB_R14B_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X1A, 0X37 # sbbb (%rdi), %r14b")
#define SBB_R14B_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X1A, 0X36 # sbbb (%rsi), %r14b")
#define SBB_R14B_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X1A, 0X75, 0X00 # sbbb (%rbp), %r14b")
#define SBB_R14B_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X1A, 0X34, 0X24 # sbbb (%rsp), %r14b")
#define SBB_R14B_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X1A, 0X30 # sbbb (%r8), %r14b")
#define SBB_R14B_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X1A, 0X31 # sbbb (%r9), %r14b")
#define SBB_R14B_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X1A, 0X32 # sbbb (%r10), %r14b")
#define SBB_R14B_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X1A, 0X33 # sbbb (%r11), %r14b")
#define SBB_R14B_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X1A, 0X34, 0X24 # sbbb (%r12), %r14b")
#define SBB_R14B_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X1A, 0X75, 0X00 # sbbb (%r13), %r14b")
#define SBB_R14B_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X1A, 0X36 # sbbb (%r14), %r14b")
#define SBB_R14B_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X1A, 0X37 # sbbb (%r15), %r14b")
#define SBB_R14B_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X1A, 0X30 # sbbb (%eax), %r14b")
#define SBB_R14B_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X1A, 0X33 # sbbb (%ebx), %r14b")
#define SBB_R14B_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X1A, 0X31 # sbbb (%ecx), %r14b")
#define SBB_R14B_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X1A, 0X32 # sbbb (%edx), %r14b")
#define SBB_R14B_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X1A, 0X37 # sbbb (%edi), %r14b")
#define SBB_R14B_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X1A, 0X36 # sbbb (%esi), %r14b")
#define SBB_R14B_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X1A, 0X75, 0X00 # sbbb (%ebp), %r14b")
#define SBB_R14B_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X1A, 0X34, 0X24 # sbbb (%esp), %r14b")

#define SBB_R15B_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X1A, 0X38 # sbbb (%rax), %r15b")
#define SBB_R15B_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X1A, 0X3B # sbbb (%rbx), %r15b")
#define SBB_R15B_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X1A, 0X39 # sbbb (%rcx), %r15b")
#define SBB_R15B_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X1A, 0X3A # sbbb (%rdx), %r15b")
#define SBB_R15B_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X1A, 0X3F # sbbb (%rdi), %r15b")
#define SBB_R15B_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X1A, 0X3E # sbbb (%rsi), %r15b")
#define SBB_R15B_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X1A, 0X7D, 0X00 # sbbb (%rbp), %r15b")
#define SBB_R15B_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X1A, 0X3C, 0X24 # sbbb (%rsp), %r15b")
#define SBB_R15B_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X1A, 0X38 # sbbb (%r8), %r15b")
#define SBB_R15B_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X1A, 0X39 # sbbb (%r9), %r15b")
#define SBB_R15B_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X1A, 0X3A # sbbb (%r10), %r15b")
#define SBB_R15B_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X1A, 0X3B # sbbb (%r11), %r15b")
#define SBB_R15B_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X1A, 0X3C, 0X24 # sbbb (%r12), %r15b")
#define SBB_R15B_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X1A, 0X7D, 0X00 # sbbb (%r13), %r15b")
#define SBB_R15B_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X1A, 0X3E # sbbb (%r14), %r15b")
#define SBB_R15B_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X1A, 0X3F # sbbb (%r15), %r15b")
#define SBB_R15B_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X1A, 0X38 # sbbb (%eax), %r15b")
#define SBB_R15B_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X1A, 0X3B # sbbb (%ebx), %r15b")
#define SBB_R15B_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X1A, 0X39 # sbbb (%ecx), %r15b")
#define SBB_R15B_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X1A, 0X3A # sbbb (%edx), %r15b")
#define SBB_R15B_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X1A, 0X3F # sbbb (%edi), %r15b")
#define SBB_R15B_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X1A, 0X3E # sbbb (%esi), %r15b")
#define SBB_R15B_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X1A, 0X7D, 0X00 # sbbb (%ebp), %r15b")
#define SBB_R15B_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X1A, 0X3C, 0X24 # sbbb (%esp), %r15b")

#define SBB_AL_TO_PTR_RAX CMT_ASM(".byte 0X18, 0X00 # sbbb %al, (%rax)")
#define SBB_AL_TO_PTR_RBX CMT_ASM(".byte 0X18, 0X03 # sbbb %al, (%rbx)")
#define SBB_AL_TO_PTR_RCX CMT_ASM(".byte 0X18, 0X01 # sbbb %al, (%rcx)")
#define SBB_AL_TO_PTR_RDX CMT_ASM(".byte 0X18, 0X02 # sbbb %al, (%rdx)")
#define SBB_AL_TO_PTR_RDI CMT_ASM(".byte 0X18, 0X07 # sbbb %al, (%rdi)")
#define SBB_AL_TO_PTR_RSI CMT_ASM(".byte 0X18, 0X06 # sbbb %al, (%rsi)")
#define SBB_AL_TO_PTR_RBP CMT_ASM(".byte 0X18, 0X45, 0X00 # sbbb %al, (%rbp)")
#define SBB_AL_TO_PTR_RSP CMT_ASM(".byte 0X18, 0X04, 0X24 # sbbb %al, (%rsp)")
#define SBB_AL_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X18, 0X00 # sbbb %al, (%r8)")
#define SBB_AL_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X18, 0X01 # sbbb %al, (%r9)")
#define SBB_AL_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X18, 0X02 # sbbb %al, (%r10)")
#define SBB_AL_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X18, 0X03 # sbbb %al, (%r11)")
#define SBB_AL_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X18, 0X04, 0X24 # sbbb %al, (%r12)")
#define SBB_AL_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X18, 0X45, 0X00 # sbbb %al, (%r13)")
#define SBB_AL_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X18, 0X06 # sbbb %al, (%r14)")
#define SBB_AL_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X18, 0X07 # sbbb %al, (%r15)")
#define SBB_AL_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X18, 0X00 # sbbb %al, (%eax)")
#define SBB_AL_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X18, 0X03 # sbbb %al, (%ebx)")
#define SBB_AL_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X18, 0X01 # sbbb %al, (%ecx)")
#define SBB_AL_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X18, 0X02 # sbbb %al, (%edx)")
#define SBB_AL_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X18, 0X07 # sbbb %al, (%edi)")
#define SBB_AL_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X18, 0X06 # sbbb %al, (%esi)")
#define SBB_AL_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X18, 0X45, 0X00 # sbbb %al, (%ebp)")
#define SBB_AL_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X18, 0X04, 0X24 # sbbb %al, (%esp)")

#define SBB_BL_TO_PTR_RAX CMT_ASM(".byte 0X18, 0X18 # sbbb %bl, (%rax)")
#define SBB_BL_TO_PTR_RBX CMT_ASM(".byte 0X18, 0X1B # sbbb %bl, (%rbx)")
#define SBB_BL_TO_PTR_RCX CMT_ASM(".byte 0X18, 0X19 # sbbb %bl, (%rcx)")
#define SBB_BL_TO_PTR_RDX CMT_ASM(".byte 0X18, 0X1A # sbbb %bl, (%rdx)")
#define SBB_BL_TO_PTR_RDI CMT_ASM(".byte 0X18, 0X1F # sbbb %bl, (%rdi)")
#define SBB_BL_TO_PTR_RSI CMT_ASM(".byte 0X18, 0X1E # sbbb %bl, (%rsi)")
#define SBB_BL_TO_PTR_RBP CMT_ASM(".byte 0X18, 0X5D, 0X00 # sbbb %bl, (%rbp)")
#define SBB_BL_TO_PTR_RSP CMT_ASM(".byte 0X18, 0X1C, 0X24 # sbbb %bl, (%rsp)")
#define SBB_BL_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X18, 0X18 # sbbb %bl, (%r8)")
#define SBB_BL_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X18, 0X19 # sbbb %bl, (%r9)")
#define SBB_BL_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X18, 0X1A # sbbb %bl, (%r10)")
#define SBB_BL_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X18, 0X1B # sbbb %bl, (%r11)")
#define SBB_BL_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X18, 0X1C, 0X24 # sbbb %bl, (%r12)")
#define SBB_BL_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X18, 0X5D, 0X00 # sbbb %bl, (%r13)")
#define SBB_BL_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X18, 0X1E # sbbb %bl, (%r14)")
#define SBB_BL_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X18, 0X1F # sbbb %bl, (%r15)")
#define SBB_BL_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X18, 0X18 # sbbb %bl, (%eax)")
#define SBB_BL_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X18, 0X1B # sbbb %bl, (%ebx)")
#define SBB_BL_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X18, 0X19 # sbbb %bl, (%ecx)")
#define SBB_BL_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X18, 0X1A # sbbb %bl, (%edx)")
#define SBB_BL_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X18, 0X1F # sbbb %bl, (%edi)")
#define SBB_BL_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X18, 0X1E # sbbb %bl, (%esi)")
#define SBB_BL_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X18, 0X5D, 0X00 # sbbb %bl, (%ebp)")
#define SBB_BL_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X18, 0X1C, 0X24 # sbbb %bl, (%esp)")

#define SBB_CL_TO_PTR_RAX CMT_ASM(".byte 0X18, 0X08 # sbbb %cl, (%rax)")
#define SBB_CL_TO_PTR_RBX CMT_ASM(".byte 0X18, 0X0B # sbbb %cl, (%rbx)")
#define SBB_CL_TO_PTR_RCX CMT_ASM(".byte 0X18, 0X09 # sbbb %cl, (%rcx)")
#define SBB_CL_TO_PTR_RDX CMT_ASM(".byte 0X18, 0X0A # sbbb %cl, (%rdx)")
#define SBB_CL_TO_PTR_RDI CMT_ASM(".byte 0X18, 0X0F # sbbb %cl, (%rdi)")
#define SBB_CL_TO_PTR_RSI CMT_ASM(".byte 0X18, 0X0E # sbbb %cl, (%rsi)")
#define SBB_CL_TO_PTR_RBP CMT_ASM(".byte 0X18, 0X4D, 0X00 # sbbb %cl, (%rbp)")
#define SBB_CL_TO_PTR_RSP CMT_ASM(".byte 0X18, 0X0C, 0X24 # sbbb %cl, (%rsp)")
#define SBB_CL_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X18, 0X08 # sbbb %cl, (%r8)")
#define SBB_CL_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X18, 0X09 # sbbb %cl, (%r9)")
#define SBB_CL_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X18, 0X0A # sbbb %cl, (%r10)")
#define SBB_CL_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X18, 0X0B # sbbb %cl, (%r11)")
#define SBB_CL_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X18, 0X0C, 0X24 # sbbb %cl, (%r12)")
#define SBB_CL_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X18, 0X4D, 0X00 # sbbb %cl, (%r13)")
#define SBB_CL_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X18, 0X0E # sbbb %cl, (%r14)")
#define SBB_CL_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X18, 0X0F # sbbb %cl, (%r15)")
#define SBB_CL_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X18, 0X08 # sbbb %cl, (%eax)")
#define SBB_CL_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X18, 0X0B # sbbb %cl, (%ebx)")
#define SBB_CL_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X18, 0X09 # sbbb %cl, (%ecx)")
#define SBB_CL_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X18, 0X0A # sbbb %cl, (%edx)")
#define SBB_CL_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X18, 0X0F # sbbb %cl, (%edi)")
#define SBB_CL_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X18, 0X0E # sbbb %cl, (%esi)")
#define SBB_CL_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X18, 0X4D, 0X00 # sbbb %cl, (%ebp)")
#define SBB_CL_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X18, 0X0C, 0X24 # sbbb %cl, (%esp)")

#define SBB_DL_TO_PTR_RAX CMT_ASM(".byte 0X18, 0X10 # sbbb %dl, (%rax)")
#define SBB_DL_TO_PTR_RBX CMT_ASM(".byte 0X18, 0X13 # sbbb %dl, (%rbx)")
#define SBB_DL_TO_PTR_RCX CMT_ASM(".byte 0X18, 0X11 # sbbb %dl, (%rcx)")
#define SBB_DL_TO_PTR_RDX CMT_ASM(".byte 0X18, 0X12 # sbbb %dl, (%rdx)")
#define SBB_DL_TO_PTR_RDI CMT_ASM(".byte 0X18, 0X17 # sbbb %dl, (%rdi)")
#define SBB_DL_TO_PTR_RSI CMT_ASM(".byte 0X18, 0X16 # sbbb %dl, (%rsi)")
#define SBB_DL_TO_PTR_RBP CMT_ASM(".byte 0X18, 0X55, 0X00 # sbbb %dl, (%rbp)")
#define SBB_DL_TO_PTR_RSP CMT_ASM(".byte 0X18, 0X14, 0X24 # sbbb %dl, (%rsp)")
#define SBB_DL_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X18, 0X10 # sbbb %dl, (%r8)")
#define SBB_DL_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X18, 0X11 # sbbb %dl, (%r9)")
#define SBB_DL_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X18, 0X12 # sbbb %dl, (%r10)")
#define SBB_DL_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X18, 0X13 # sbbb %dl, (%r11)")
#define SBB_DL_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X18, 0X14, 0X24 # sbbb %dl, (%r12)")
#define SBB_DL_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X18, 0X55, 0X00 # sbbb %dl, (%r13)")
#define SBB_DL_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X18, 0X16 # sbbb %dl, (%r14)")
#define SBB_DL_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X18, 0X17 # sbbb %dl, (%r15)")
#define SBB_DL_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X18, 0X10 # sbbb %dl, (%eax)")
#define SBB_DL_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X18, 0X13 # sbbb %dl, (%ebx)")
#define SBB_DL_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X18, 0X11 # sbbb %dl, (%ecx)")
#define SBB_DL_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X18, 0X12 # sbbb %dl, (%edx)")
#define SBB_DL_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X18, 0X17 # sbbb %dl, (%edi)")
#define SBB_DL_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X18, 0X16 # sbbb %dl, (%esi)")
#define SBB_DL_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X18, 0X55, 0X00 # sbbb %dl, (%ebp)")
#define SBB_DL_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X18, 0X14, 0X24 # sbbb %dl, (%esp)")

#define SBB_DIL_TO_PTR_RAX CMT_ASM(".byte 0X40, 0X18, 0X38 # sbbb %dil, (%rax)")
#define SBB_DIL_TO_PTR_RBX CMT_ASM(".byte 0X40, 0X18, 0X3B # sbbb %dil, (%rbx)")
#define SBB_DIL_TO_PTR_RCX CMT_ASM(".byte 0X40, 0X18, 0X39 # sbbb %dil, (%rcx)")
#define SBB_DIL_TO_PTR_RDX CMT_ASM(".byte 0X40, 0X18, 0X3A # sbbb %dil, (%rdx)")
#define SBB_DIL_TO_PTR_RDI CMT_ASM(".byte 0X40, 0X18, 0X3F # sbbb %dil, (%rdi)")
#define SBB_DIL_TO_PTR_RSI CMT_ASM(".byte 0X40, 0X18, 0X3E # sbbb %dil, (%rsi)")
#define SBB_DIL_TO_PTR_RBP CMT_ASM(".byte 0X40, 0X18, 0X7D, 0X00 # sbbb %dil, (%rbp)")
#define SBB_DIL_TO_PTR_RSP CMT_ASM(".byte 0X40, 0X18, 0X3C, 0X24 # sbbb %dil, (%rsp)")
#define SBB_DIL_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X18, 0X38 # sbbb %dil, (%r8)")
#define SBB_DIL_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X18, 0X39 # sbbb %dil, (%r9)")
#define SBB_DIL_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X18, 0X3A # sbbb %dil, (%r10)")
#define SBB_DIL_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X18, 0X3B # sbbb %dil, (%r11)")
#define SBB_DIL_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X18, 0X3C, 0X24 # sbbb %dil, (%r12)")
#define SBB_DIL_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X18, 0X7D, 0X00 # sbbb %dil, (%r13)")
#define SBB_DIL_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X18, 0X3E # sbbb %dil, (%r14)")
#define SBB_DIL_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X18, 0X3F # sbbb %dil, (%r15)")
#define SBB_DIL_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X40, 0X18, 0X38 # sbbb %dil, (%eax)")
#define SBB_DIL_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X40, 0X18, 0X3B # sbbb %dil, (%ebx)")
#define SBB_DIL_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X40, 0X18, 0X39 # sbbb %dil, (%ecx)")
#define SBB_DIL_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X40, 0X18, 0X3A # sbbb %dil, (%edx)")
#define SBB_DIL_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X40, 0X18, 0X3F # sbbb %dil, (%edi)")
#define SBB_DIL_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X40, 0X18, 0X3E # sbbb %dil, (%esi)")
#define SBB_DIL_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X40, 0X18, 0X7D, 0X00 # sbbb %dil, (%ebp)")
#define SBB_DIL_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X40, 0X18, 0X3C, 0X24 # sbbb %dil, (%esp)")

#define SBB_SIL_TO_PTR_RAX CMT_ASM(".byte 0X40, 0X18, 0X30 # sbbb %sil, (%rax)")
#define SBB_SIL_TO_PTR_RBX CMT_ASM(".byte 0X40, 0X18, 0X33 # sbbb %sil, (%rbx)")
#define SBB_SIL_TO_PTR_RCX CMT_ASM(".byte 0X40, 0X18, 0X31 # sbbb %sil, (%rcx)")
#define SBB_SIL_TO_PTR_RDX CMT_ASM(".byte 0X40, 0X18, 0X32 # sbbb %sil, (%rdx)")
#define SBB_SIL_TO_PTR_RDI CMT_ASM(".byte 0X40, 0X18, 0X37 # sbbb %sil, (%rdi)")
#define SBB_SIL_TO_PTR_RSI CMT_ASM(".byte 0X40, 0X18, 0X36 # sbbb %sil, (%rsi)")
#define SBB_SIL_TO_PTR_RBP CMT_ASM(".byte 0X40, 0X18, 0X75, 0X00 # sbbb %sil, (%rbp)")
#define SBB_SIL_TO_PTR_RSP CMT_ASM(".byte 0X40, 0X18, 0X34, 0X24 # sbbb %sil, (%rsp)")
#define SBB_SIL_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X18, 0X30 # sbbb %sil, (%r8)")
#define SBB_SIL_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X18, 0X31 # sbbb %sil, (%r9)")
#define SBB_SIL_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X18, 0X32 # sbbb %sil, (%r10)")
#define SBB_SIL_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X18, 0X33 # sbbb %sil, (%r11)")
#define SBB_SIL_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X18, 0X34, 0X24 # sbbb %sil, (%r12)")
#define SBB_SIL_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X18, 0X75, 0X00 # sbbb %sil, (%r13)")
#define SBB_SIL_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X18, 0X36 # sbbb %sil, (%r14)")
#define SBB_SIL_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X18, 0X37 # sbbb %sil, (%r15)")
#define SBB_SIL_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X40, 0X18, 0X30 # sbbb %sil, (%eax)")
#define SBB_SIL_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X40, 0X18, 0X33 # sbbb %sil, (%ebx)")
#define SBB_SIL_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X40, 0X18, 0X31 # sbbb %sil, (%ecx)")
#define SBB_SIL_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X40, 0X18, 0X32 # sbbb %sil, (%edx)")
#define SBB_SIL_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X40, 0X18, 0X37 # sbbb %sil, (%edi)")
#define SBB_SIL_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X40, 0X18, 0X36 # sbbb %sil, (%esi)")
#define SBB_SIL_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X40, 0X18, 0X75, 0X00 # sbbb %sil, (%ebp)")
#define SBB_SIL_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X40, 0X18, 0X34, 0X24 # sbbb %sil, (%esp)")

#define SBB_BPL_TO_PTR_RAX CMT_ASM(".byte 0X40, 0X18, 0X28 # sbbb %bpl, (%rax)")
#define SBB_BPL_TO_PTR_RBX CMT_ASM(".byte 0X40, 0X18, 0X2B # sbbb %bpl, (%rbx)")
#define SBB_BPL_TO_PTR_RCX CMT_ASM(".byte 0X40, 0X18, 0X29 # sbbb %bpl, (%rcx)")
#define SBB_BPL_TO_PTR_RDX CMT_ASM(".byte 0X40, 0X18, 0X2A # sbbb %bpl, (%rdx)")
#define SBB_BPL_TO_PTR_RDI CMT_ASM(".byte 0X40, 0X18, 0X2F # sbbb %bpl, (%rdi)")
#define SBB_BPL_TO_PTR_RSI CMT_ASM(".byte 0X40, 0X18, 0X2E # sbbb %bpl, (%rsi)")
#define SBB_BPL_TO_PTR_RBP CMT_ASM(".byte 0X40, 0X18, 0X6D, 0X00 # sbbb %bpl, (%rbp)")
#define SBB_BPL_TO_PTR_RSP CMT_ASM(".byte 0X40, 0X18, 0X2C, 0X24 # sbbb %bpl, (%rsp)")
#define SBB_BPL_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X18, 0X28 # sbbb %bpl, (%r8)")
#define SBB_BPL_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X18, 0X29 # sbbb %bpl, (%r9)")
#define SBB_BPL_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X18, 0X2A # sbbb %bpl, (%r10)")
#define SBB_BPL_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X18, 0X2B # sbbb %bpl, (%r11)")
#define SBB_BPL_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X18, 0X2C, 0X24 # sbbb %bpl, (%r12)")
#define SBB_BPL_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X18, 0X6D, 0X00 # sbbb %bpl, (%r13)")
#define SBB_BPL_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X18, 0X2E # sbbb %bpl, (%r14)")
#define SBB_BPL_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X18, 0X2F # sbbb %bpl, (%r15)")
#define SBB_BPL_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X40, 0X18, 0X28 # sbbb %bpl, (%eax)")
#define SBB_BPL_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X40, 0X18, 0X2B # sbbb %bpl, (%ebx)")
#define SBB_BPL_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X40, 0X18, 0X29 # sbbb %bpl, (%ecx)")
#define SBB_BPL_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X40, 0X18, 0X2A # sbbb %bpl, (%edx)")
#define SBB_BPL_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X40, 0X18, 0X2F # sbbb %bpl, (%edi)")
#define SBB_BPL_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X40, 0X18, 0X2E # sbbb %bpl, (%esi)")
#define SBB_BPL_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X40, 0X18, 0X6D, 0X00 # sbbb %bpl, (%ebp)")
#define SBB_BPL_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X40, 0X18, 0X2C, 0X24 # sbbb %bpl, (%esp)")

#define SBB_SPL_TO_PTR_RAX CMT_ASM(".byte 0X40, 0X18, 0X20 # sbbb %spl, (%rax)")
#define SBB_SPL_TO_PTR_RBX CMT_ASM(".byte 0X40, 0X18, 0X23 # sbbb %spl, (%rbx)")
#define SBB_SPL_TO_PTR_RCX CMT_ASM(".byte 0X40, 0X18, 0X21 # sbbb %spl, (%rcx)")
#define SBB_SPL_TO_PTR_RDX CMT_ASM(".byte 0X40, 0X18, 0X22 # sbbb %spl, (%rdx)")
#define SBB_SPL_TO_PTR_RDI CMT_ASM(".byte 0X40, 0X18, 0X27 # sbbb %spl, (%rdi)")
#define SBB_SPL_TO_PTR_RSI CMT_ASM(".byte 0X40, 0X18, 0X26 # sbbb %spl, (%rsi)")
#define SBB_SPL_TO_PTR_RBP CMT_ASM(".byte 0X40, 0X18, 0X65, 0X00 # sbbb %spl, (%rbp)")
#define SBB_SPL_TO_PTR_RSP CMT_ASM(".byte 0X40, 0X18, 0X24, 0X24 # sbbb %spl, (%rsp)")
#define SBB_SPL_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X18, 0X20 # sbbb %spl, (%r8)")
#define SBB_SPL_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X18, 0X21 # sbbb %spl, (%r9)")
#define SBB_SPL_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X18, 0X22 # sbbb %spl, (%r10)")
#define SBB_SPL_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X18, 0X23 # sbbb %spl, (%r11)")
#define SBB_SPL_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X18, 0X24, 0X24 # sbbb %spl, (%r12)")
#define SBB_SPL_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X18, 0X65, 0X00 # sbbb %spl, (%r13)")
#define SBB_SPL_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X18, 0X26 # sbbb %spl, (%r14)")
#define SBB_SPL_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X18, 0X27 # sbbb %spl, (%r15)")
#define SBB_SPL_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X40, 0X18, 0X20 # sbbb %spl, (%eax)")
#define SBB_SPL_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X40, 0X18, 0X23 # sbbb %spl, (%ebx)")
#define SBB_SPL_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X40, 0X18, 0X21 # sbbb %spl, (%ecx)")
#define SBB_SPL_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X40, 0X18, 0X22 # sbbb %spl, (%edx)")
#define SBB_SPL_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X40, 0X18, 0X27 # sbbb %spl, (%edi)")
#define SBB_SPL_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X40, 0X18, 0X26 # sbbb %spl, (%esi)")
#define SBB_SPL_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X40, 0X18, 0X65, 0X00 # sbbb %spl, (%ebp)")
#define SBB_SPL_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X40, 0X18, 0X24, 0X24 # sbbb %spl, (%esp)")

#define SBB_R8B_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X18, 0X00 # sbbb %r8b, (%rax)")
#define SBB_R8B_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X18, 0X03 # sbbb %r8b, (%rbx)")
#define SBB_R8B_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X18, 0X01 # sbbb %r8b, (%rcx)")
#define SBB_R8B_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X18, 0X02 # sbbb %r8b, (%rdx)")
#define SBB_R8B_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X18, 0X07 # sbbb %r8b, (%rdi)")
#define SBB_R8B_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X18, 0X06 # sbbb %r8b, (%rsi)")
#define SBB_R8B_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X18, 0X45, 0X00 # sbbb %r8b, (%rbp)")
#define SBB_R8B_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X18, 0X04, 0X24 # sbbb %r8b, (%rsp)")
#define SBB_R8B_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X18, 0X00 # sbbb %r8b, (%r8)")
#define SBB_R8B_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X18, 0X01 # sbbb %r8b, (%r9)")
#define SBB_R8B_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X18, 0X02 # sbbb %r8b, (%r10)")
#define SBB_R8B_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X18, 0X03 # sbbb %r8b, (%r11)")
#define SBB_R8B_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X18, 0X04, 0X24 # sbbb %r8b, (%r12)")
#define SBB_R8B_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X18, 0X45, 0X00 # sbbb %r8b, (%r13)")
#define SBB_R8B_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X18, 0X06 # sbbb %r8b, (%r14)")
#define SBB_R8B_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X18, 0X07 # sbbb %r8b, (%r15)")
#define SBB_R8B_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X18, 0X00 # sbbb %r8b, (%eax)")
#define SBB_R8B_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X18, 0X03 # sbbb %r8b, (%ebx)")
#define SBB_R8B_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X18, 0X01 # sbbb %r8b, (%ecx)")
#define SBB_R8B_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X18, 0X02 # sbbb %r8b, (%edx)")
#define SBB_R8B_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X18, 0X07 # sbbb %r8b, (%edi)")
#define SBB_R8B_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X18, 0X06 # sbbb %r8b, (%esi)")
#define SBB_R8B_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X18, 0X45, 0X00 # sbbb %r8b, (%ebp)")
#define SBB_R8B_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X18, 0X04, 0X24 # sbbb %r8b, (%esp)")

#define SBB_R9B_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X18, 0X08 # sbbb %r9b, (%rax)")
#define SBB_R9B_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X18, 0X0B # sbbb %r9b, (%rbx)")
#define SBB_R9B_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X18, 0X09 # sbbb %r9b, (%rcx)")
#define SBB_R9B_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X18, 0X0A # sbbb %r9b, (%rdx)")
#define SBB_R9B_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X18, 0X0F # sbbb %r9b, (%rdi)")
#define SBB_R9B_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X18, 0X0E # sbbb %r9b, (%rsi)")
#define SBB_R9B_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X18, 0X4D, 0X00 # sbbb %r9b, (%rbp)")
#define SBB_R9B_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X18, 0X0C, 0X24 # sbbb %r9b, (%rsp)")
#define SBB_R9B_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X18, 0X08 # sbbb %r9b, (%r8)")
#define SBB_R9B_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X18, 0X09 # sbbb %r9b, (%r9)")
#define SBB_R9B_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X18, 0X0A # sbbb %r9b, (%r10)")
#define SBB_R9B_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X18, 0X0B # sbbb %r9b, (%r11)")
#define SBB_R9B_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X18, 0X0C, 0X24 # sbbb %r9b, (%r12)")
#define SBB_R9B_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X18, 0X4D, 0X00 # sbbb %r9b, (%r13)")
#define SBB_R9B_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X18, 0X0E # sbbb %r9b, (%r14)")
#define SBB_R9B_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X18, 0X0F # sbbb %r9b, (%r15)")
#define SBB_R9B_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X18, 0X08 # sbbb %r9b, (%eax)")
#define SBB_R9B_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X18, 0X0B # sbbb %r9b, (%ebx)")
#define SBB_R9B_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X18, 0X09 # sbbb %r9b, (%ecx)")
#define SBB_R9B_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X18, 0X0A # sbbb %r9b, (%edx)")
#define SBB_R9B_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X18, 0X0F # sbbb %r9b, (%edi)")
#define SBB_R9B_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X18, 0X0E # sbbb %r9b, (%esi)")
#define SBB_R9B_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X18, 0X4D, 0X00 # sbbb %r9b, (%ebp)")
#define SBB_R9B_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X18, 0X0C, 0X24 # sbbb %r9b, (%esp)")

#define SBB_R10B_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X18, 0X10 # sbbb %r10b, (%rax)")
#define SBB_R10B_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X18, 0X13 # sbbb %r10b, (%rbx)")
#define SBB_R10B_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X18, 0X11 # sbbb %r10b, (%rcx)")
#define SBB_R10B_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X18, 0X12 # sbbb %r10b, (%rdx)")
#define SBB_R10B_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X18, 0X17 # sbbb %r10b, (%rdi)")
#define SBB_R10B_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X18, 0X16 # sbbb %r10b, (%rsi)")
#define SBB_R10B_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X18, 0X55, 0X00 # sbbb %r10b, (%rbp)")
#define SBB_R10B_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X18, 0X14, 0X24 # sbbb %r10b, (%rsp)")
#define SBB_R10B_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X18, 0X10 # sbbb %r10b, (%r8)")
#define SBB_R10B_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X18, 0X11 # sbbb %r10b, (%r9)")
#define SBB_R10B_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X18, 0X12 # sbbb %r10b, (%r10)")
#define SBB_R10B_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X18, 0X13 # sbbb %r10b, (%r11)")
#define SBB_R10B_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X18, 0X14, 0X24 # sbbb %r10b, (%r12)")
#define SBB_R10B_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X18, 0X55, 0X00 # sbbb %r10b, (%r13)")
#define SBB_R10B_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X18, 0X16 # sbbb %r10b, (%r14)")
#define SBB_R10B_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X18, 0X17 # sbbb %r10b, (%r15)")
#define SBB_R10B_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X18, 0X10 # sbbb %r10b, (%eax)")
#define SBB_R10B_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X18, 0X13 # sbbb %r10b, (%ebx)")
#define SBB_R10B_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X18, 0X11 # sbbb %r10b, (%ecx)")
#define SBB_R10B_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X18, 0X12 # sbbb %r10b, (%edx)")
#define SBB_R10B_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X18, 0X17 # sbbb %r10b, (%edi)")
#define SBB_R10B_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X18, 0X16 # sbbb %r10b, (%esi)")
#define SBB_R10B_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X18, 0X55, 0X00 # sbbb %r10b, (%ebp)")
#define SBB_R10B_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X18, 0X14, 0X24 # sbbb %r10b, (%esp)")

#define SBB_R11B_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X18, 0X18 # sbbb %r11b, (%rax)")
#define SBB_R11B_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X18, 0X1B # sbbb %r11b, (%rbx)")
#define SBB_R11B_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X18, 0X19 # sbbb %r11b, (%rcx)")
#define SBB_R11B_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X18, 0X1A # sbbb %r11b, (%rdx)")
#define SBB_R11B_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X18, 0X1F # sbbb %r11b, (%rdi)")
#define SBB_R11B_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X18, 0X1E # sbbb %r11b, (%rsi)")
#define SBB_R11B_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X18, 0X5D, 0X00 # sbbb %r11b, (%rbp)")
#define SBB_R11B_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X18, 0X1C, 0X24 # sbbb %r11b, (%rsp)")
#define SBB_R11B_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X18, 0X18 # sbbb %r11b, (%r8)")
#define SBB_R11B_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X18, 0X19 # sbbb %r11b, (%r9)")
#define SBB_R11B_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X18, 0X1A # sbbb %r11b, (%r10)")
#define SBB_R11B_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X18, 0X1B # sbbb %r11b, (%r11)")
#define SBB_R11B_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X18, 0X1C, 0X24 # sbbb %r11b, (%r12)")
#define SBB_R11B_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X18, 0X5D, 0X00 # sbbb %r11b, (%r13)")
#define SBB_R11B_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X18, 0X1E # sbbb %r11b, (%r14)")
#define SBB_R11B_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X18, 0X1F # sbbb %r11b, (%r15)")
#define SBB_R11B_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X18, 0X18 # sbbb %r11b, (%eax)")
#define SBB_R11B_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X18, 0X1B # sbbb %r11b, (%ebx)")
#define SBB_R11B_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X18, 0X19 # sbbb %r11b, (%ecx)")
#define SBB_R11B_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X18, 0X1A # sbbb %r11b, (%edx)")
#define SBB_R11B_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X18, 0X1F # sbbb %r11b, (%edi)")
#define SBB_R11B_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X18, 0X1E # sbbb %r11b, (%esi)")
#define SBB_R11B_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X18, 0X5D, 0X00 # sbbb %r11b, (%ebp)")
#define SBB_R11B_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X18, 0X1C, 0X24 # sbbb %r11b, (%esp)")

#define SBB_R12B_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X18, 0X20 # sbbb %r12b, (%rax)")
#define SBB_R12B_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X18, 0X23 # sbbb %r12b, (%rbx)")
#define SBB_R12B_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X18, 0X21 # sbbb %r12b, (%rcx)")
#define SBB_R12B_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X18, 0X22 # sbbb %r12b, (%rdx)")
#define SBB_R12B_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X18, 0X27 # sbbb %r12b, (%rdi)")
#define SBB_R12B_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X18, 0X26 # sbbb %r12b, (%rsi)")
#define SBB_R12B_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X18, 0X65, 0X00 # sbbb %r12b, (%rbp)")
#define SBB_R12B_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X18, 0X24, 0X24 # sbbb %r12b, (%rsp)")
#define SBB_R12B_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X18, 0X20 # sbbb %r12b, (%r8)")
#define SBB_R12B_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X18, 0X21 # sbbb %r12b, (%r9)")
#define SBB_R12B_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X18, 0X22 # sbbb %r12b, (%r10)")
#define SBB_R12B_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X18, 0X23 # sbbb %r12b, (%r11)")
#define SBB_R12B_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X18, 0X24, 0X24 # sbbb %r12b, (%r12)")
#define SBB_R12B_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X18, 0X65, 0X00 # sbbb %r12b, (%r13)")
#define SBB_R12B_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X18, 0X26 # sbbb %r12b, (%r14)")
#define SBB_R12B_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X18, 0X27 # sbbb %r12b, (%r15)")
#define SBB_R12B_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X18, 0X20 # sbbb %r12b, (%eax)")
#define SBB_R12B_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X18, 0X23 # sbbb %r12b, (%ebx)")
#define SBB_R12B_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X18, 0X21 # sbbb %r12b, (%ecx)")
#define SBB_R12B_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X18, 0X22 # sbbb %r12b, (%edx)")
#define SBB_R12B_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X18, 0X27 # sbbb %r12b, (%edi)")
#define SBB_R12B_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X18, 0X26 # sbbb %r12b, (%esi)")
#define SBB_R12B_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X18, 0X65, 0X00 # sbbb %r12b, (%ebp)")
#define SBB_R12B_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X18, 0X24, 0X24 # sbbb %r12b, (%esp)")

#define SBB_R13B_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X18, 0X28 # sbbb %r13b, (%rax)")
#define SBB_R13B_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X18, 0X2B # sbbb %r13b, (%rbx)")
#define SBB_R13B_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X18, 0X29 # sbbb %r13b, (%rcx)")
#define SBB_R13B_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X18, 0X2A # sbbb %r13b, (%rdx)")
#define SBB_R13B_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X18, 0X2F # sbbb %r13b, (%rdi)")
#define SBB_R13B_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X18, 0X2E # sbbb %r13b, (%rsi)")
#define SBB_R13B_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X18, 0X6D, 0X00 # sbbb %r13b, (%rbp)")
#define SBB_R13B_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X18, 0X2C, 0X24 # sbbb %r13b, (%rsp)")
#define SBB_R13B_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X18, 0X28 # sbbb %r13b, (%r8)")
#define SBB_R13B_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X18, 0X29 # sbbb %r13b, (%r9)")
#define SBB_R13B_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X18, 0X2A # sbbb %r13b, (%r10)")
#define SBB_R13B_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X18, 0X2B # sbbb %r13b, (%r11)")
#define SBB_R13B_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X18, 0X2C, 0X24 # sbbb %r13b, (%r12)")
#define SBB_R13B_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X18, 0X6D, 0X00 # sbbb %r13b, (%r13)")
#define SBB_R13B_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X18, 0X2E # sbbb %r13b, (%r14)")
#define SBB_R13B_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X18, 0X2F # sbbb %r13b, (%r15)")
#define SBB_R13B_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X18, 0X28 # sbbb %r13b, (%eax)")
#define SBB_R13B_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X18, 0X2B # sbbb %r13b, (%ebx)")
#define SBB_R13B_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X18, 0X29 # sbbb %r13b, (%ecx)")
#define SBB_R13B_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X18, 0X2A # sbbb %r13b, (%edx)")
#define SBB_R13B_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X18, 0X2F # sbbb %r13b, (%edi)")
#define SBB_R13B_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X18, 0X2E # sbbb %r13b, (%esi)")
#define SBB_R13B_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X18, 0X6D, 0X00 # sbbb %r13b, (%ebp)")
#define SBB_R13B_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X18, 0X2C, 0X24 # sbbb %r13b, (%esp)")

#define SBB_R14B_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X18, 0X30 # sbbb %r14b, (%rax)")
#define SBB_R14B_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X18, 0X33 # sbbb %r14b, (%rbx)")
#define SBB_R14B_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X18, 0X31 # sbbb %r14b, (%rcx)")
#define SBB_R14B_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X18, 0X32 # sbbb %r14b, (%rdx)")
#define SBB_R14B_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X18, 0X37 # sbbb %r14b, (%rdi)")
#define SBB_R14B_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X18, 0X36 # sbbb %r14b, (%rsi)")
#define SBB_R14B_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X18, 0X75, 0X00 # sbbb %r14b, (%rbp)")
#define SBB_R14B_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X18, 0X34, 0X24 # sbbb %r14b, (%rsp)")
#define SBB_R14B_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X18, 0X30 # sbbb %r14b, (%r8)")
#define SBB_R14B_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X18, 0X31 # sbbb %r14b, (%r9)")
#define SBB_R14B_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X18, 0X32 # sbbb %r14b, (%r10)")
#define SBB_R14B_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X18, 0X33 # sbbb %r14b, (%r11)")
#define SBB_R14B_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X18, 0X34, 0X24 # sbbb %r14b, (%r12)")
#define SBB_R14B_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X18, 0X75, 0X00 # sbbb %r14b, (%r13)")
#define SBB_R14B_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X18, 0X36 # sbbb %r14b, (%r14)")
#define SBB_R14B_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X18, 0X37 # sbbb %r14b, (%r15)")
#define SBB_R14B_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X18, 0X30 # sbbb %r14b, (%eax)")
#define SBB_R14B_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X18, 0X33 # sbbb %r14b, (%ebx)")
#define SBB_R14B_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X18, 0X31 # sbbb %r14b, (%ecx)")
#define SBB_R14B_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X18, 0X32 # sbbb %r14b, (%edx)")
#define SBB_R14B_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X18, 0X37 # sbbb %r14b, (%edi)")
#define SBB_R14B_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X18, 0X36 # sbbb %r14b, (%esi)")
#define SBB_R14B_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X18, 0X75, 0X00 # sbbb %r14b, (%ebp)")
#define SBB_R14B_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X18, 0X34, 0X24 # sbbb %r14b, (%esp)")

#define SBB_R15B_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X18, 0X38 # sbbb %r15b, (%rax)")
#define SBB_R15B_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X18, 0X3B # sbbb %r15b, (%rbx)")
#define SBB_R15B_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X18, 0X39 # sbbb %r15b, (%rcx)")
#define SBB_R15B_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X18, 0X3A # sbbb %r15b, (%rdx)")
#define SBB_R15B_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X18, 0X3F # sbbb %r15b, (%rdi)")
#define SBB_R15B_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X18, 0X3E # sbbb %r15b, (%rsi)")
#define SBB_R15B_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X18, 0X7D, 0X00 # sbbb %r15b, (%rbp)")
#define SBB_R15B_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X18, 0X3C, 0X24 # sbbb %r15b, (%rsp)")
#define SBB_R15B_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X18, 0X38 # sbbb %r15b, (%r8)")
#define SBB_R15B_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X18, 0X39 # sbbb %r15b, (%r9)")
#define SBB_R15B_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X18, 0X3A # sbbb %r15b, (%r10)")
#define SBB_R15B_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X18, 0X3B # sbbb %r15b, (%r11)")
#define SBB_R15B_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X18, 0X3C, 0X24 # sbbb %r15b, (%r12)")
#define SBB_R15B_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X18, 0X7D, 0X00 # sbbb %r15b, (%r13)")
#define SBB_R15B_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X18, 0X3E # sbbb %r15b, (%r14)")
#define SBB_R15B_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X18, 0X3F # sbbb %r15b, (%r15)")
#define SBB_R15B_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X18, 0X38 # sbbb %r15b, (%eax)")
#define SBB_R15B_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X18, 0X3B # sbbb %r15b, (%ebx)")
#define SBB_R15B_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X18, 0X39 # sbbb %r15b, (%ecx)")
#define SBB_R15B_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X18, 0X3A # sbbb %r15b, (%edx)")
#define SBB_R15B_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X18, 0X3F # sbbb %r15b, (%edi)")
#define SBB_R15B_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X18, 0X3E # sbbb %r15b, (%esi)")
#define SBB_R15B_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X18, 0X7D, 0X00 # sbbb %r15b, (%ebp)")
#define SBB_R15B_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X18, 0X3C, 0X24 # sbbb %r15b, (%esp)")

#define SBB_AL_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X1A, 0X80 # sbbb " _(VALUE) "(%rax), %al")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AL_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X1A, 0X83 # sbbb " _(VALUE) "(%rbx), %al")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AL_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X1A, 0X81 # sbbb " _(VALUE) "(%rcx), %al")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AL_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X1A, 0X82 # sbbb " _(VALUE) "(%rdx), %al")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AL_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X1A, 0X87 # sbbb " _(VALUE) "(%rdi), %al")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AL_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X1A, 0X86 # sbbb " _(VALUE) "(%rsi), %al")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AL_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X1A, 0X85 # sbbb " _(VALUE) "(%rbp), %al")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AL_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X1A, 0X84, 0X24 # sbbb " _(VALUE) "(%rsp), %al")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AL_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1A, 0X80 # sbbb " _(VALUE) "(%r8), %al")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AL_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1A, 0X81 # sbbb " _(VALUE) "(%r9), %al")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AL_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1A, 0X82 # sbbb " _(VALUE) "(%r10), %al")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AL_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1A, 0X83 # sbbb " _(VALUE) "(%r11), %al")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AL_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1A, 0X84, 0X24 # sbbb " _(VALUE) "(%r12), %al")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AL_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1A, 0X85 # sbbb " _(VALUE) "(%r13), %al")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AL_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1A, 0X86 # sbbb " _(VALUE) "(%r14), %al")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AL_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1A, 0X87 # sbbb " _(VALUE) "(%r15), %al")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1A, 0X80 # sbbb " _(VALUE) "(%eax), %al")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1A, 0X83 # sbbb " _(VALUE) "(%ebx), %al")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1A, 0X81 # sbbb " _(VALUE) "(%ecx), %al")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1A, 0X82 # sbbb " _(VALUE) "(%edx), %al")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1A, 0X87 # sbbb " _(VALUE) "(%edi), %al")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1A, 0X86 # sbbb " _(VALUE) "(%esi), %al")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1A, 0X85 # sbbb " _(VALUE) "(%ebp), %al")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1A, 0X84, 0X24 # sbbb " _(VALUE) "(%esp), %al")\
	CMT_ASM(".long " _(VALUE))

#define SBB_BL_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X1A, 0X98 # sbbb " _(VALUE) "(%rax), %bl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BL_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X1A, 0X9B # sbbb " _(VALUE) "(%rbx), %bl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BL_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X1A, 0X99 # sbbb " _(VALUE) "(%rcx), %bl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BL_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X1A, 0X9A # sbbb " _(VALUE) "(%rdx), %bl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BL_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X1A, 0X9F # sbbb " _(VALUE) "(%rdi), %bl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BL_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X1A, 0X9E # sbbb " _(VALUE) "(%rsi), %bl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BL_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X1A, 0X9D # sbbb " _(VALUE) "(%rbp), %bl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BL_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X1A, 0X9C, 0X24 # sbbb " _(VALUE) "(%rsp), %bl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BL_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1A, 0X98 # sbbb " _(VALUE) "(%r8), %bl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BL_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1A, 0X99 # sbbb " _(VALUE) "(%r9), %bl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BL_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1A, 0X9A # sbbb " _(VALUE) "(%r10), %bl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BL_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1A, 0X9B # sbbb " _(VALUE) "(%r11), %bl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BL_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1A, 0X9C, 0X24 # sbbb " _(VALUE) "(%r12), %bl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BL_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1A, 0X9D # sbbb " _(VALUE) "(%r13), %bl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BL_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1A, 0X9E # sbbb " _(VALUE) "(%r14), %bl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BL_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1A, 0X9F # sbbb " _(VALUE) "(%r15), %bl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1A, 0X98 # sbbb " _(VALUE) "(%eax), %bl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1A, 0X9B # sbbb " _(VALUE) "(%ebx), %bl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1A, 0X99 # sbbb " _(VALUE) "(%ecx), %bl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1A, 0X9A # sbbb " _(VALUE) "(%edx), %bl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1A, 0X9F # sbbb " _(VALUE) "(%edi), %bl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1A, 0X9E # sbbb " _(VALUE) "(%esi), %bl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1A, 0X9D # sbbb " _(VALUE) "(%ebp), %bl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1A, 0X9C, 0X24 # sbbb " _(VALUE) "(%esp), %bl")\
	CMT_ASM(".long " _(VALUE))

#define SBB_CL_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X1A, 0X88 # sbbb " _(VALUE) "(%rax), %cl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CL_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X1A, 0X8B # sbbb " _(VALUE) "(%rbx), %cl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CL_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X1A, 0X89 # sbbb " _(VALUE) "(%rcx), %cl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CL_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X1A, 0X8A # sbbb " _(VALUE) "(%rdx), %cl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CL_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X1A, 0X8F # sbbb " _(VALUE) "(%rdi), %cl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CL_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X1A, 0X8E # sbbb " _(VALUE) "(%rsi), %cl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CL_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X1A, 0X8D # sbbb " _(VALUE) "(%rbp), %cl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CL_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X1A, 0X8C, 0X24 # sbbb " _(VALUE) "(%rsp), %cl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CL_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1A, 0X88 # sbbb " _(VALUE) "(%r8), %cl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CL_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1A, 0X89 # sbbb " _(VALUE) "(%r9), %cl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CL_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1A, 0X8A # sbbb " _(VALUE) "(%r10), %cl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CL_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1A, 0X8B # sbbb " _(VALUE) "(%r11), %cl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CL_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1A, 0X8C, 0X24 # sbbb " _(VALUE) "(%r12), %cl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CL_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1A, 0X8D # sbbb " _(VALUE) "(%r13), %cl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CL_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1A, 0X8E # sbbb " _(VALUE) "(%r14), %cl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CL_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1A, 0X8F # sbbb " _(VALUE) "(%r15), %cl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1A, 0X88 # sbbb " _(VALUE) "(%eax), %cl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1A, 0X8B # sbbb " _(VALUE) "(%ebx), %cl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1A, 0X89 # sbbb " _(VALUE) "(%ecx), %cl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1A, 0X8A # sbbb " _(VALUE) "(%edx), %cl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1A, 0X8F # sbbb " _(VALUE) "(%edi), %cl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1A, 0X8E # sbbb " _(VALUE) "(%esi), %cl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1A, 0X8D # sbbb " _(VALUE) "(%ebp), %cl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1A, 0X8C, 0X24 # sbbb " _(VALUE) "(%esp), %cl")\
	CMT_ASM(".long " _(VALUE))

#define SBB_DL_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X1A, 0X90 # sbbb " _(VALUE) "(%rax), %dl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DL_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X1A, 0X93 # sbbb " _(VALUE) "(%rbx), %dl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DL_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X1A, 0X91 # sbbb " _(VALUE) "(%rcx), %dl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DL_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X1A, 0X92 # sbbb " _(VALUE) "(%rdx), %dl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DL_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X1A, 0X97 # sbbb " _(VALUE) "(%rdi), %dl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DL_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X1A, 0X96 # sbbb " _(VALUE) "(%rsi), %dl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DL_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X1A, 0X95 # sbbb " _(VALUE) "(%rbp), %dl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DL_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X1A, 0X94, 0X24 # sbbb " _(VALUE) "(%rsp), %dl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DL_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1A, 0X90 # sbbb " _(VALUE) "(%r8), %dl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DL_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1A, 0X91 # sbbb " _(VALUE) "(%r9), %dl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DL_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1A, 0X92 # sbbb " _(VALUE) "(%r10), %dl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DL_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1A, 0X93 # sbbb " _(VALUE) "(%r11), %dl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DL_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1A, 0X94, 0X24 # sbbb " _(VALUE) "(%r12), %dl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DL_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1A, 0X95 # sbbb " _(VALUE) "(%r13), %dl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DL_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1A, 0X96 # sbbb " _(VALUE) "(%r14), %dl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DL_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1A, 0X97 # sbbb " _(VALUE) "(%r15), %dl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1A, 0X90 # sbbb " _(VALUE) "(%eax), %dl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1A, 0X93 # sbbb " _(VALUE) "(%ebx), %dl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1A, 0X91 # sbbb " _(VALUE) "(%ecx), %dl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1A, 0X92 # sbbb " _(VALUE) "(%edx), %dl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1A, 0X97 # sbbb " _(VALUE) "(%edi), %dl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1A, 0X96 # sbbb " _(VALUE) "(%esi), %dl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1A, 0X95 # sbbb " _(VALUE) "(%ebp), %dl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1A, 0X94, 0X24 # sbbb " _(VALUE) "(%esp), %dl")\
	CMT_ASM(".long " _(VALUE))

#define SBB_DIL_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X1A, 0XB8 # sbbb " _(VALUE) "(%rax), %dil")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DIL_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X1A, 0XBB # sbbb " _(VALUE) "(%rbx), %dil")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DIL_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X1A, 0XB9 # sbbb " _(VALUE) "(%rcx), %dil")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DIL_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X1A, 0XBA # sbbb " _(VALUE) "(%rdx), %dil")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DIL_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X1A, 0XBF # sbbb " _(VALUE) "(%rdi), %dil")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DIL_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X1A, 0XBE # sbbb " _(VALUE) "(%rsi), %dil")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DIL_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X1A, 0XBD # sbbb " _(VALUE) "(%rbp), %dil")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DIL_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X1A, 0XBC, 0X24 # sbbb " _(VALUE) "(%rsp), %dil")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DIL_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1A, 0XB8 # sbbb " _(VALUE) "(%r8), %dil")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DIL_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1A, 0XB9 # sbbb " _(VALUE) "(%r9), %dil")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DIL_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1A, 0XBA # sbbb " _(VALUE) "(%r10), %dil")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DIL_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1A, 0XBB # sbbb " _(VALUE) "(%r11), %dil")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DIL_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1A, 0XBC, 0X24 # sbbb " _(VALUE) "(%r12), %dil")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DIL_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1A, 0XBD # sbbb " _(VALUE) "(%r13), %dil")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DIL_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1A, 0XBE # sbbb " _(VALUE) "(%r14), %dil")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DIL_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1A, 0XBF # sbbb " _(VALUE) "(%r15), %dil")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DIL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X1A, 0XB8 # sbbb " _(VALUE) "(%eax), %dil")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DIL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X1A, 0XBB # sbbb " _(VALUE) "(%ebx), %dil")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DIL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X1A, 0XB9 # sbbb " _(VALUE) "(%ecx), %dil")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DIL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X1A, 0XBA # sbbb " _(VALUE) "(%edx), %dil")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DIL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X1A, 0XBF # sbbb " _(VALUE) "(%edi), %dil")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DIL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X1A, 0XBE # sbbb " _(VALUE) "(%esi), %dil")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DIL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X1A, 0XBD # sbbb " _(VALUE) "(%ebp), %dil")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DIL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X1A, 0XBC, 0X24 # sbbb " _(VALUE) "(%esp), %dil")\
	CMT_ASM(".long " _(VALUE))

#define SBB_SIL_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X1A, 0XB0 # sbbb " _(VALUE) "(%rax), %sil")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SIL_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X1A, 0XB3 # sbbb " _(VALUE) "(%rbx), %sil")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SIL_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X1A, 0XB1 # sbbb " _(VALUE) "(%rcx), %sil")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SIL_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X1A, 0XB2 # sbbb " _(VALUE) "(%rdx), %sil")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SIL_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X1A, 0XB7 # sbbb " _(VALUE) "(%rdi), %sil")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SIL_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X1A, 0XB6 # sbbb " _(VALUE) "(%rsi), %sil")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SIL_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X1A, 0XB5 # sbbb " _(VALUE) "(%rbp), %sil")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SIL_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X1A, 0XB4, 0X24 # sbbb " _(VALUE) "(%rsp), %sil")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SIL_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1A, 0XB0 # sbbb " _(VALUE) "(%r8), %sil")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SIL_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1A, 0XB1 # sbbb " _(VALUE) "(%r9), %sil")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SIL_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1A, 0XB2 # sbbb " _(VALUE) "(%r10), %sil")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SIL_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1A, 0XB3 # sbbb " _(VALUE) "(%r11), %sil")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SIL_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1A, 0XB4, 0X24 # sbbb " _(VALUE) "(%r12), %sil")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SIL_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1A, 0XB5 # sbbb " _(VALUE) "(%r13), %sil")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SIL_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1A, 0XB6 # sbbb " _(VALUE) "(%r14), %sil")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SIL_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1A, 0XB7 # sbbb " _(VALUE) "(%r15), %sil")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SIL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X1A, 0XB0 # sbbb " _(VALUE) "(%eax), %sil")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SIL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X1A, 0XB3 # sbbb " _(VALUE) "(%ebx), %sil")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SIL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X1A, 0XB1 # sbbb " _(VALUE) "(%ecx), %sil")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SIL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X1A, 0XB2 # sbbb " _(VALUE) "(%edx), %sil")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SIL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X1A, 0XB7 # sbbb " _(VALUE) "(%edi), %sil")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SIL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X1A, 0XB6 # sbbb " _(VALUE) "(%esi), %sil")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SIL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X1A, 0XB5 # sbbb " _(VALUE) "(%ebp), %sil")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SIL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X1A, 0XB4, 0X24 # sbbb " _(VALUE) "(%esp), %sil")\
	CMT_ASM(".long " _(VALUE))

#define SBB_BPL_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X1A, 0XA8 # sbbb " _(VALUE) "(%rax), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BPL_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X1A, 0XAB # sbbb " _(VALUE) "(%rbx), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BPL_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X1A, 0XA9 # sbbb " _(VALUE) "(%rcx), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BPL_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X1A, 0XAA # sbbb " _(VALUE) "(%rdx), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BPL_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X1A, 0XAF # sbbb " _(VALUE) "(%rdi), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BPL_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X1A, 0XAE # sbbb " _(VALUE) "(%rsi), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BPL_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X1A, 0XAD # sbbb " _(VALUE) "(%rbp), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BPL_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X1A, 0XAC, 0X24 # sbbb " _(VALUE) "(%rsp), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BPL_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1A, 0XA8 # sbbb " _(VALUE) "(%r8), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BPL_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1A, 0XA9 # sbbb " _(VALUE) "(%r9), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BPL_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1A, 0XAA # sbbb " _(VALUE) "(%r10), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BPL_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1A, 0XAB # sbbb " _(VALUE) "(%r11), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BPL_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1A, 0XAC, 0X24 # sbbb " _(VALUE) "(%r12), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BPL_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1A, 0XAD # sbbb " _(VALUE) "(%r13), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BPL_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1A, 0XAE # sbbb " _(VALUE) "(%r14), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BPL_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1A, 0XAF # sbbb " _(VALUE) "(%r15), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BPL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X1A, 0XA8 # sbbb " _(VALUE) "(%eax), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BPL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X1A, 0XAB # sbbb " _(VALUE) "(%ebx), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BPL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X1A, 0XA9 # sbbb " _(VALUE) "(%ecx), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BPL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X1A, 0XAA # sbbb " _(VALUE) "(%edx), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BPL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X1A, 0XAF # sbbb " _(VALUE) "(%edi), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BPL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X1A, 0XAE # sbbb " _(VALUE) "(%esi), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BPL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X1A, 0XAD # sbbb " _(VALUE) "(%ebp), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BPL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X1A, 0XAC, 0X24 # sbbb " _(VALUE) "(%esp), %bpl")\
	CMT_ASM(".long " _(VALUE))

#define SBB_SPL_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X1A, 0XA0 # sbbb " _(VALUE) "(%rax), %spl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SPL_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X1A, 0XA3 # sbbb " _(VALUE) "(%rbx), %spl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SPL_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X1A, 0XA1 # sbbb " _(VALUE) "(%rcx), %spl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SPL_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X1A, 0XA2 # sbbb " _(VALUE) "(%rdx), %spl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SPL_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X1A, 0XA7 # sbbb " _(VALUE) "(%rdi), %spl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SPL_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X1A, 0XA6 # sbbb " _(VALUE) "(%rsi), %spl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SPL_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X1A, 0XA5 # sbbb " _(VALUE) "(%rbp), %spl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SPL_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X1A, 0XA4, 0X24 # sbbb " _(VALUE) "(%rsp), %spl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SPL_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1A, 0XA0 # sbbb " _(VALUE) "(%r8), %spl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SPL_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1A, 0XA1 # sbbb " _(VALUE) "(%r9), %spl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SPL_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1A, 0XA2 # sbbb " _(VALUE) "(%r10), %spl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SPL_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1A, 0XA3 # sbbb " _(VALUE) "(%r11), %spl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SPL_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1A, 0XA4, 0X24 # sbbb " _(VALUE) "(%r12), %spl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SPL_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1A, 0XA5 # sbbb " _(VALUE) "(%r13), %spl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SPL_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1A, 0XA6 # sbbb " _(VALUE) "(%r14), %spl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SPL_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1A, 0XA7 # sbbb " _(VALUE) "(%r15), %spl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SPL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X1A, 0XA0 # sbbb " _(VALUE) "(%eax), %spl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SPL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X1A, 0XA3 # sbbb " _(VALUE) "(%ebx), %spl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SPL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X1A, 0XA1 # sbbb " _(VALUE) "(%ecx), %spl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SPL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X1A, 0XA2 # sbbb " _(VALUE) "(%edx), %spl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SPL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X1A, 0XA7 # sbbb " _(VALUE) "(%edi), %spl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SPL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X1A, 0XA6 # sbbb " _(VALUE) "(%esi), %spl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SPL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X1A, 0XA5 # sbbb " _(VALUE) "(%ebp), %spl")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SPL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X1A, 0XA4, 0X24 # sbbb " _(VALUE) "(%esp), %spl")\
	CMT_ASM(".long " _(VALUE))

#define SBB_R8B_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1A, 0X80 # sbbb " _(VALUE) "(%rax), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8B_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1A, 0X83 # sbbb " _(VALUE) "(%rbx), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8B_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1A, 0X81 # sbbb " _(VALUE) "(%rcx), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8B_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1A, 0X82 # sbbb " _(VALUE) "(%rdx), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8B_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1A, 0X87 # sbbb " _(VALUE) "(%rdi), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8B_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1A, 0X86 # sbbb " _(VALUE) "(%rsi), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8B_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1A, 0X85 # sbbb " _(VALUE) "(%rbp), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8B_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1A, 0X84, 0X24 # sbbb " _(VALUE) "(%rsp), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8B_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1A, 0X80 # sbbb " _(VALUE) "(%r8), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8B_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1A, 0X81 # sbbb " _(VALUE) "(%r9), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8B_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1A, 0X82 # sbbb " _(VALUE) "(%r10), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8B_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1A, 0X83 # sbbb " _(VALUE) "(%r11), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8B_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1A, 0X84, 0X24 # sbbb " _(VALUE) "(%r12), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8B_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1A, 0X85 # sbbb " _(VALUE) "(%r13), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8B_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1A, 0X86 # sbbb " _(VALUE) "(%r14), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8B_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1A, 0X87 # sbbb " _(VALUE) "(%r15), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8B_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1A, 0X80 # sbbb " _(VALUE) "(%eax), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8B_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1A, 0X83 # sbbb " _(VALUE) "(%ebx), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8B_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1A, 0X81 # sbbb " _(VALUE) "(%ecx), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8B_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1A, 0X82 # sbbb " _(VALUE) "(%edx), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8B_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1A, 0X87 # sbbb " _(VALUE) "(%edi), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8B_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1A, 0X86 # sbbb " _(VALUE) "(%esi), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8B_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1A, 0X85 # sbbb " _(VALUE) "(%ebp), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8B_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1A, 0X84, 0X24 # sbbb " _(VALUE) "(%esp), %r8b")\
	CMT_ASM(".long " _(VALUE))

#define SBB_R9B_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1A, 0X88 # sbbb " _(VALUE) "(%rax), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9B_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1A, 0X8B # sbbb " _(VALUE) "(%rbx), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9B_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1A, 0X89 # sbbb " _(VALUE) "(%rcx), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9B_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1A, 0X8A # sbbb " _(VALUE) "(%rdx), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9B_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1A, 0X8F # sbbb " _(VALUE) "(%rdi), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9B_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1A, 0X8E # sbbb " _(VALUE) "(%rsi), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9B_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1A, 0X8D # sbbb " _(VALUE) "(%rbp), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9B_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1A, 0X8C, 0X24 # sbbb " _(VALUE) "(%rsp), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9B_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1A, 0X88 # sbbb " _(VALUE) "(%r8), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9B_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1A, 0X89 # sbbb " _(VALUE) "(%r9), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9B_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1A, 0X8A # sbbb " _(VALUE) "(%r10), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9B_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1A, 0X8B # sbbb " _(VALUE) "(%r11), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9B_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1A, 0X8C, 0X24 # sbbb " _(VALUE) "(%r12), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9B_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1A, 0X8D # sbbb " _(VALUE) "(%r13), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9B_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1A, 0X8E # sbbb " _(VALUE) "(%r14), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9B_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1A, 0X8F # sbbb " _(VALUE) "(%r15), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9B_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1A, 0X88 # sbbb " _(VALUE) "(%eax), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9B_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1A, 0X8B # sbbb " _(VALUE) "(%ebx), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9B_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1A, 0X89 # sbbb " _(VALUE) "(%ecx), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9B_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1A, 0X8A # sbbb " _(VALUE) "(%edx), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9B_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1A, 0X8F # sbbb " _(VALUE) "(%edi), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9B_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1A, 0X8E # sbbb " _(VALUE) "(%esi), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9B_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1A, 0X8D # sbbb " _(VALUE) "(%ebp), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9B_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1A, 0X8C, 0X24 # sbbb " _(VALUE) "(%esp), %r9b")\
	CMT_ASM(".long " _(VALUE))

#define SBB_R10B_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1A, 0X90 # sbbb " _(VALUE) "(%rax), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10B_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1A, 0X93 # sbbb " _(VALUE) "(%rbx), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10B_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1A, 0X91 # sbbb " _(VALUE) "(%rcx), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10B_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1A, 0X92 # sbbb " _(VALUE) "(%rdx), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10B_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1A, 0X97 # sbbb " _(VALUE) "(%rdi), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10B_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1A, 0X96 # sbbb " _(VALUE) "(%rsi), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10B_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1A, 0X95 # sbbb " _(VALUE) "(%rbp), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10B_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1A, 0X94, 0X24 # sbbb " _(VALUE) "(%rsp), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10B_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1A, 0X90 # sbbb " _(VALUE) "(%r8), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10B_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1A, 0X91 # sbbb " _(VALUE) "(%r9), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10B_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1A, 0X92 # sbbb " _(VALUE) "(%r10), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10B_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1A, 0X93 # sbbb " _(VALUE) "(%r11), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10B_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1A, 0X94, 0X24 # sbbb " _(VALUE) "(%r12), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10B_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1A, 0X95 # sbbb " _(VALUE) "(%r13), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10B_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1A, 0X96 # sbbb " _(VALUE) "(%r14), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10B_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1A, 0X97 # sbbb " _(VALUE) "(%r15), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10B_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1A, 0X90 # sbbb " _(VALUE) "(%eax), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10B_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1A, 0X93 # sbbb " _(VALUE) "(%ebx), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10B_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1A, 0X91 # sbbb " _(VALUE) "(%ecx), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10B_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1A, 0X92 # sbbb " _(VALUE) "(%edx), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10B_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1A, 0X97 # sbbb " _(VALUE) "(%edi), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10B_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1A, 0X96 # sbbb " _(VALUE) "(%esi), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10B_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1A, 0X95 # sbbb " _(VALUE) "(%ebp), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10B_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1A, 0X94, 0X24 # sbbb " _(VALUE) "(%esp), %r10b")\
	CMT_ASM(".long " _(VALUE))

#define SBB_R11B_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1A, 0X98 # sbbb " _(VALUE) "(%rax), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11B_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1A, 0X9B # sbbb " _(VALUE) "(%rbx), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11B_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1A, 0X99 # sbbb " _(VALUE) "(%rcx), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11B_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1A, 0X9A # sbbb " _(VALUE) "(%rdx), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11B_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1A, 0X9F # sbbb " _(VALUE) "(%rdi), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11B_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1A, 0X9E # sbbb " _(VALUE) "(%rsi), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11B_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1A, 0X9D # sbbb " _(VALUE) "(%rbp), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11B_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1A, 0X9C, 0X24 # sbbb " _(VALUE) "(%rsp), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11B_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1A, 0X98 # sbbb " _(VALUE) "(%r8), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11B_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1A, 0X99 # sbbb " _(VALUE) "(%r9), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11B_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1A, 0X9A # sbbb " _(VALUE) "(%r10), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11B_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1A, 0X9B # sbbb " _(VALUE) "(%r11), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11B_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1A, 0X9C, 0X24 # sbbb " _(VALUE) "(%r12), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11B_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1A, 0X9D # sbbb " _(VALUE) "(%r13), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11B_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1A, 0X9E # sbbb " _(VALUE) "(%r14), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11B_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1A, 0X9F # sbbb " _(VALUE) "(%r15), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11B_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1A, 0X98 # sbbb " _(VALUE) "(%eax), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11B_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1A, 0X9B # sbbb " _(VALUE) "(%ebx), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11B_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1A, 0X99 # sbbb " _(VALUE) "(%ecx), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11B_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1A, 0X9A # sbbb " _(VALUE) "(%edx), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11B_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1A, 0X9F # sbbb " _(VALUE) "(%edi), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11B_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1A, 0X9E # sbbb " _(VALUE) "(%esi), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11B_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1A, 0X9D # sbbb " _(VALUE) "(%ebp), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11B_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1A, 0X9C, 0X24 # sbbb " _(VALUE) "(%esp), %r11b")\
	CMT_ASM(".long " _(VALUE))

#define SBB_R12B_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1A, 0XA0 # sbbb " _(VALUE) "(%rax), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12B_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1A, 0XA3 # sbbb " _(VALUE) "(%rbx), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12B_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1A, 0XA1 # sbbb " _(VALUE) "(%rcx), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12B_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1A, 0XA2 # sbbb " _(VALUE) "(%rdx), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12B_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1A, 0XA7 # sbbb " _(VALUE) "(%rdi), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12B_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1A, 0XA6 # sbbb " _(VALUE) "(%rsi), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12B_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1A, 0XA5 # sbbb " _(VALUE) "(%rbp), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12B_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1A, 0XA4, 0X24 # sbbb " _(VALUE) "(%rsp), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12B_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1A, 0XA0 # sbbb " _(VALUE) "(%r8), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12B_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1A, 0XA1 # sbbb " _(VALUE) "(%r9), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12B_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1A, 0XA2 # sbbb " _(VALUE) "(%r10), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12B_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1A, 0XA3 # sbbb " _(VALUE) "(%r11), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12B_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1A, 0XA4, 0X24 # sbbb " _(VALUE) "(%r12), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12B_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1A, 0XA5 # sbbb " _(VALUE) "(%r13), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12B_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1A, 0XA6 # sbbb " _(VALUE) "(%r14), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12B_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1A, 0XA7 # sbbb " _(VALUE) "(%r15), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12B_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1A, 0XA0 # sbbb " _(VALUE) "(%eax), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12B_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1A, 0XA3 # sbbb " _(VALUE) "(%ebx), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12B_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1A, 0XA1 # sbbb " _(VALUE) "(%ecx), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12B_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1A, 0XA2 # sbbb " _(VALUE) "(%edx), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12B_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1A, 0XA7 # sbbb " _(VALUE) "(%edi), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12B_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1A, 0XA6 # sbbb " _(VALUE) "(%esi), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12B_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1A, 0XA5 # sbbb " _(VALUE) "(%ebp), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12B_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1A, 0XA4, 0X24 # sbbb " _(VALUE) "(%esp), %r12b")\
	CMT_ASM(".long " _(VALUE))

#define SBB_R13B_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1A, 0XA8 # sbbb " _(VALUE) "(%rax), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13B_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1A, 0XAB # sbbb " _(VALUE) "(%rbx), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13B_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1A, 0XA9 # sbbb " _(VALUE) "(%rcx), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13B_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1A, 0XAA # sbbb " _(VALUE) "(%rdx), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13B_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1A, 0XAF # sbbb " _(VALUE) "(%rdi), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13B_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1A, 0XAE # sbbb " _(VALUE) "(%rsi), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13B_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1A, 0XAD # sbbb " _(VALUE) "(%rbp), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13B_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1A, 0XAC, 0X24 # sbbb " _(VALUE) "(%rsp), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13B_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1A, 0XA8 # sbbb " _(VALUE) "(%r8), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13B_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1A, 0XA9 # sbbb " _(VALUE) "(%r9), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13B_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1A, 0XAA # sbbb " _(VALUE) "(%r10), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13B_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1A, 0XAB # sbbb " _(VALUE) "(%r11), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13B_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1A, 0XAC, 0X24 # sbbb " _(VALUE) "(%r12), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13B_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1A, 0XAD # sbbb " _(VALUE) "(%r13), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13B_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1A, 0XAE # sbbb " _(VALUE) "(%r14), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13B_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1A, 0XAF # sbbb " _(VALUE) "(%r15), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13B_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1A, 0XA8 # sbbb " _(VALUE) "(%eax), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13B_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1A, 0XAB # sbbb " _(VALUE) "(%ebx), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13B_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1A, 0XA9 # sbbb " _(VALUE) "(%ecx), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13B_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1A, 0XAA # sbbb " _(VALUE) "(%edx), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13B_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1A, 0XAF # sbbb " _(VALUE) "(%edi), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13B_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1A, 0XAE # sbbb " _(VALUE) "(%esi), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13B_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1A, 0XAD # sbbb " _(VALUE) "(%ebp), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13B_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1A, 0XAC, 0X24 # sbbb " _(VALUE) "(%esp), %r13b")\
	CMT_ASM(".long " _(VALUE))

#define SBB_R14B_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1A, 0XB0 # sbbb " _(VALUE) "(%rax), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14B_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1A, 0XB3 # sbbb " _(VALUE) "(%rbx), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14B_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1A, 0XB1 # sbbb " _(VALUE) "(%rcx), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14B_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1A, 0XB2 # sbbb " _(VALUE) "(%rdx), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14B_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1A, 0XB7 # sbbb " _(VALUE) "(%rdi), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14B_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1A, 0XB6 # sbbb " _(VALUE) "(%rsi), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14B_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1A, 0XB5 # sbbb " _(VALUE) "(%rbp), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14B_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1A, 0XB4, 0X24 # sbbb " _(VALUE) "(%rsp), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14B_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1A, 0XB0 # sbbb " _(VALUE) "(%r8), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14B_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1A, 0XB1 # sbbb " _(VALUE) "(%r9), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14B_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1A, 0XB2 # sbbb " _(VALUE) "(%r10), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14B_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1A, 0XB3 # sbbb " _(VALUE) "(%r11), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14B_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1A, 0XB4, 0X24 # sbbb " _(VALUE) "(%r12), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14B_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1A, 0XB5 # sbbb " _(VALUE) "(%r13), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14B_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1A, 0XB6 # sbbb " _(VALUE) "(%r14), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14B_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1A, 0XB7 # sbbb " _(VALUE) "(%r15), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14B_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1A, 0XB0 # sbbb " _(VALUE) "(%eax), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14B_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1A, 0XB3 # sbbb " _(VALUE) "(%ebx), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14B_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1A, 0XB1 # sbbb " _(VALUE) "(%ecx), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14B_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1A, 0XB2 # sbbb " _(VALUE) "(%edx), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14B_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1A, 0XB7 # sbbb " _(VALUE) "(%edi), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14B_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1A, 0XB6 # sbbb " _(VALUE) "(%esi), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14B_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1A, 0XB5 # sbbb " _(VALUE) "(%ebp), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14B_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1A, 0XB4, 0X24 # sbbb " _(VALUE) "(%esp), %r14b")\
	CMT_ASM(".long " _(VALUE))

#define SBB_R15B_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1A, 0XB8 # sbbb " _(VALUE) "(%rax), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15B_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1A, 0XBB # sbbb " _(VALUE) "(%rbx), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15B_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1A, 0XB9 # sbbb " _(VALUE) "(%rcx), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15B_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1A, 0XBA # sbbb " _(VALUE) "(%rdx), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15B_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1A, 0XBF # sbbb " _(VALUE) "(%rdi), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15B_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1A, 0XBE # sbbb " _(VALUE) "(%rsi), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15B_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1A, 0XBD # sbbb " _(VALUE) "(%rbp), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15B_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1A, 0XBC, 0X24 # sbbb " _(VALUE) "(%rsp), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15B_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1A, 0XB8 # sbbb " _(VALUE) "(%r8), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15B_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1A, 0XB9 # sbbb " _(VALUE) "(%r9), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15B_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1A, 0XBA # sbbb " _(VALUE) "(%r10), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15B_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1A, 0XBB # sbbb " _(VALUE) "(%r11), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15B_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1A, 0XBC, 0X24 # sbbb " _(VALUE) "(%r12), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15B_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1A, 0XBD # sbbb " _(VALUE) "(%r13), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15B_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1A, 0XBE # sbbb " _(VALUE) "(%r14), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15B_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1A, 0XBF # sbbb " _(VALUE) "(%r15), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15B_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1A, 0XB8 # sbbb " _(VALUE) "(%eax), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15B_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1A, 0XBB # sbbb " _(VALUE) "(%ebx), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15B_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1A, 0XB9 # sbbb " _(VALUE) "(%ecx), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15B_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1A, 0XBA # sbbb " _(VALUE) "(%edx), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15B_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1A, 0XBF # sbbb " _(VALUE) "(%edi), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15B_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1A, 0XBE # sbbb " _(VALUE) "(%esi), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15B_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1A, 0XBD # sbbb " _(VALUE) "(%ebp), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15B_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1A, 0XBC, 0X24 # sbbb " _(VALUE) "(%esp), %r15b")\
	CMT_ASM(".long " _(VALUE))

#define SBB_AL_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X18, 0X80 # sbbb %al, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AL_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X18, 0X83 # sbbb %al, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AL_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X18, 0X81 # sbbb %al, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AL_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X18, 0X82 # sbbb %al, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AL_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X18, 0X87 # sbbb %al, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AL_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X18, 0X86 # sbbb %al, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AL_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X18, 0X85 # sbbb %al, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AL_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X18, 0X84, 0X24 # sbbb %al, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AL_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X18, 0X80 # sbbb %al, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AL_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X18, 0X81 # sbbb %al, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AL_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X18, 0X82 # sbbb %al, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AL_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X18, 0X83 # sbbb %al, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AL_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X18, 0X84, 0X24 # sbbb %al, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AL_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X18, 0X85 # sbbb %al, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AL_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X18, 0X86 # sbbb %al, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AL_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X18, 0X87 # sbbb %al, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X18, 0X80 # sbbb %al, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X18, 0X83 # sbbb %al, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X18, 0X81 # sbbb %al, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X18, 0X82 # sbbb %al, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X18, 0X87 # sbbb %al, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X18, 0X86 # sbbb %al, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X18, 0X85 # sbbb %al, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X18, 0X84, 0X24 # sbbb %al, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SBB_BL_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X18, 0X98 # sbbb %bl, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BL_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X18, 0X9B # sbbb %bl, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BL_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X18, 0X99 # sbbb %bl, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BL_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X18, 0X9A # sbbb %bl, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BL_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X18, 0X9F # sbbb %bl, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BL_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X18, 0X9E # sbbb %bl, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BL_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X18, 0X9D # sbbb %bl, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BL_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X18, 0X9C, 0X24 # sbbb %bl, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BL_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X18, 0X98 # sbbb %bl, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BL_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X18, 0X99 # sbbb %bl, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BL_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X18, 0X9A # sbbb %bl, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BL_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X18, 0X9B # sbbb %bl, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BL_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X18, 0X9C, 0X24 # sbbb %bl, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BL_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X18, 0X9D # sbbb %bl, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BL_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X18, 0X9E # sbbb %bl, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BL_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X18, 0X9F # sbbb %bl, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X18, 0X98 # sbbb %bl, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X18, 0X9B # sbbb %bl, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X18, 0X99 # sbbb %bl, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X18, 0X9A # sbbb %bl, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X18, 0X9F # sbbb %bl, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X18, 0X9E # sbbb %bl, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X18, 0X9D # sbbb %bl, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X18, 0X9C, 0X24 # sbbb %bl, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SBB_CL_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X18, 0X88 # sbbb %cl, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CL_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X18, 0X8B # sbbb %cl, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CL_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X18, 0X89 # sbbb %cl, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CL_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X18, 0X8A # sbbb %cl, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CL_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X18, 0X8F # sbbb %cl, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CL_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X18, 0X8E # sbbb %cl, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CL_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X18, 0X8D # sbbb %cl, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CL_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X18, 0X8C, 0X24 # sbbb %cl, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CL_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X18, 0X88 # sbbb %cl, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CL_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X18, 0X89 # sbbb %cl, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CL_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X18, 0X8A # sbbb %cl, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CL_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X18, 0X8B # sbbb %cl, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CL_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X18, 0X8C, 0X24 # sbbb %cl, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CL_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X18, 0X8D # sbbb %cl, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CL_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X18, 0X8E # sbbb %cl, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CL_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X18, 0X8F # sbbb %cl, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X18, 0X88 # sbbb %cl, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X18, 0X8B # sbbb %cl, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X18, 0X89 # sbbb %cl, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X18, 0X8A # sbbb %cl, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X18, 0X8F # sbbb %cl, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X18, 0X8E # sbbb %cl, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X18, 0X8D # sbbb %cl, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X18, 0X8C, 0X24 # sbbb %cl, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SBB_DL_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X18, 0X90 # sbbb %dl, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DL_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X18, 0X93 # sbbb %dl, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DL_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X18, 0X91 # sbbb %dl, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DL_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X18, 0X92 # sbbb %dl, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DL_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X18, 0X97 # sbbb %dl, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DL_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X18, 0X96 # sbbb %dl, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DL_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X18, 0X95 # sbbb %dl, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DL_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X18, 0X94, 0X24 # sbbb %dl, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DL_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X18, 0X90 # sbbb %dl, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DL_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X18, 0X91 # sbbb %dl, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DL_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X18, 0X92 # sbbb %dl, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DL_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X18, 0X93 # sbbb %dl, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DL_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X18, 0X94, 0X24 # sbbb %dl, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DL_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X18, 0X95 # sbbb %dl, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DL_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X18, 0X96 # sbbb %dl, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DL_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X18, 0X97 # sbbb %dl, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X18, 0X90 # sbbb %dl, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X18, 0X93 # sbbb %dl, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X18, 0X91 # sbbb %dl, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X18, 0X92 # sbbb %dl, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X18, 0X97 # sbbb %dl, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X18, 0X96 # sbbb %dl, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X18, 0X95 # sbbb %dl, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X18, 0X94, 0X24 # sbbb %dl, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SBB_DIL_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X18, 0XB8 # sbbb %dil, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DIL_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X18, 0XBB # sbbb %dil, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DIL_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X18, 0XB9 # sbbb %dil, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DIL_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X18, 0XBA # sbbb %dil, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DIL_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X18, 0XBF # sbbb %dil, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DIL_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X18, 0XBE # sbbb %dil, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DIL_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X18, 0XBD # sbbb %dil, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DIL_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X18, 0XBC, 0X24 # sbbb %dil, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DIL_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X18, 0XB8 # sbbb %dil, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DIL_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X18, 0XB9 # sbbb %dil, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DIL_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X18, 0XBA # sbbb %dil, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DIL_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X18, 0XBB # sbbb %dil, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DIL_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X18, 0XBC, 0X24 # sbbb %dil, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DIL_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X18, 0XBD # sbbb %dil, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DIL_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X18, 0XBE # sbbb %dil, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DIL_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X18, 0XBF # sbbb %dil, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DIL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X18, 0XB8 # sbbb %dil, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DIL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X18, 0XBB # sbbb %dil, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DIL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X18, 0XB9 # sbbb %dil, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DIL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X18, 0XBA # sbbb %dil, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DIL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X18, 0XBF # sbbb %dil, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DIL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X18, 0XBE # sbbb %dil, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DIL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X18, 0XBD # sbbb %dil, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DIL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X18, 0XBC, 0X24 # sbbb %dil, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SBB_SIL_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X18, 0XB0 # sbbb %sil, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SIL_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X18, 0XB3 # sbbb %sil, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SIL_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X18, 0XB1 # sbbb %sil, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SIL_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X18, 0XB2 # sbbb %sil, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SIL_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X18, 0XB7 # sbbb %sil, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SIL_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X18, 0XB6 # sbbb %sil, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SIL_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X18, 0XB5 # sbbb %sil, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SIL_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X18, 0XB4, 0X24 # sbbb %sil, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SIL_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X18, 0XB0 # sbbb %sil, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SIL_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X18, 0XB1 # sbbb %sil, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SIL_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X18, 0XB2 # sbbb %sil, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SIL_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X18, 0XB3 # sbbb %sil, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SIL_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X18, 0XB4, 0X24 # sbbb %sil, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SIL_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X18, 0XB5 # sbbb %sil, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SIL_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X18, 0XB6 # sbbb %sil, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SIL_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X18, 0XB7 # sbbb %sil, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SIL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X18, 0XB0 # sbbb %sil, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SIL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X18, 0XB3 # sbbb %sil, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SIL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X18, 0XB1 # sbbb %sil, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SIL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X18, 0XB2 # sbbb %sil, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SIL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X18, 0XB7 # sbbb %sil, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SIL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X18, 0XB6 # sbbb %sil, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SIL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X18, 0XB5 # sbbb %sil, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SIL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X18, 0XB4, 0X24 # sbbb %sil, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SBB_BPL_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X18, 0XA8 # sbbb %bpl, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BPL_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X18, 0XAB # sbbb %bpl, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BPL_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X18, 0XA9 # sbbb %bpl, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BPL_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X18, 0XAA # sbbb %bpl, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BPL_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X18, 0XAF # sbbb %bpl, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BPL_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X18, 0XAE # sbbb %bpl, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BPL_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X18, 0XAD # sbbb %bpl, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BPL_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X18, 0XAC, 0X24 # sbbb %bpl, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BPL_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X18, 0XA8 # sbbb %bpl, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BPL_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X18, 0XA9 # sbbb %bpl, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BPL_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X18, 0XAA # sbbb %bpl, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BPL_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X18, 0XAB # sbbb %bpl, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BPL_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X18, 0XAC, 0X24 # sbbb %bpl, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BPL_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X18, 0XAD # sbbb %bpl, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BPL_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X18, 0XAE # sbbb %bpl, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BPL_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X18, 0XAF # sbbb %bpl, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BPL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X18, 0XA8 # sbbb %bpl, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BPL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X18, 0XAB # sbbb %bpl, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BPL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X18, 0XA9 # sbbb %bpl, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BPL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X18, 0XAA # sbbb %bpl, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BPL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X18, 0XAF # sbbb %bpl, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BPL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X18, 0XAE # sbbb %bpl, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BPL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X18, 0XAD # sbbb %bpl, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BPL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X18, 0XAC, 0X24 # sbbb %bpl, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SBB_SPL_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X18, 0XA0 # sbbb %spl, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SPL_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X18, 0XA3 # sbbb %spl, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SPL_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X18, 0XA1 # sbbb %spl, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SPL_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X18, 0XA2 # sbbb %spl, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SPL_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X18, 0XA7 # sbbb %spl, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SPL_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X18, 0XA6 # sbbb %spl, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SPL_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X18, 0XA5 # sbbb %spl, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SPL_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X18, 0XA4, 0X24 # sbbb %spl, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SPL_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X18, 0XA0 # sbbb %spl, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SPL_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X18, 0XA1 # sbbb %spl, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SPL_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X18, 0XA2 # sbbb %spl, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SPL_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X18, 0XA3 # sbbb %spl, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SPL_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X18, 0XA4, 0X24 # sbbb %spl, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SPL_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X18, 0XA5 # sbbb %spl, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SPL_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X18, 0XA6 # sbbb %spl, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SPL_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X18, 0XA7 # sbbb %spl, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SPL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X18, 0XA0 # sbbb %spl, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SPL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X18, 0XA3 # sbbb %spl, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SPL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X18, 0XA1 # sbbb %spl, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SPL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X18, 0XA2 # sbbb %spl, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SPL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X18, 0XA7 # sbbb %spl, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SPL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X18, 0XA6 # sbbb %spl, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SPL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X18, 0XA5 # sbbb %spl, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SPL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X18, 0XA4, 0X24 # sbbb %spl, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SBB_R8B_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X18, 0X80 # sbbb %r8b, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8B_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X18, 0X83 # sbbb %r8b, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8B_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X18, 0X81 # sbbb %r8b, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8B_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X18, 0X82 # sbbb %r8b, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8B_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X18, 0X87 # sbbb %r8b, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8B_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X18, 0X86 # sbbb %r8b, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8B_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X18, 0X85 # sbbb %r8b, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8B_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X18, 0X84, 0X24 # sbbb %r8b, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8B_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X18, 0X80 # sbbb %r8b, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8B_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X18, 0X81 # sbbb %r8b, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8B_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X18, 0X82 # sbbb %r8b, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8B_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X18, 0X83 # sbbb %r8b, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8B_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X18, 0X84, 0X24 # sbbb %r8b, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8B_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X18, 0X85 # sbbb %r8b, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8B_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X18, 0X86 # sbbb %r8b, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8B_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X18, 0X87 # sbbb %r8b, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8B_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X18, 0X80 # sbbb %r8b, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8B_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X18, 0X83 # sbbb %r8b, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8B_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X18, 0X81 # sbbb %r8b, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8B_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X18, 0X82 # sbbb %r8b, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8B_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X18, 0X87 # sbbb %r8b, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8B_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X18, 0X86 # sbbb %r8b, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8B_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X18, 0X85 # sbbb %r8b, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8B_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X18, 0X84, 0X24 # sbbb %r8b, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SBB_R9B_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X18, 0X88 # sbbb %r9b, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9B_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X18, 0X8B # sbbb %r9b, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9B_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X18, 0X89 # sbbb %r9b, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9B_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X18, 0X8A # sbbb %r9b, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9B_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X18, 0X8F # sbbb %r9b, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9B_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X18, 0X8E # sbbb %r9b, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9B_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X18, 0X8D # sbbb %r9b, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9B_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X18, 0X8C, 0X24 # sbbb %r9b, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9B_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X18, 0X88 # sbbb %r9b, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9B_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X18, 0X89 # sbbb %r9b, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9B_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X18, 0X8A # sbbb %r9b, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9B_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X18, 0X8B # sbbb %r9b, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9B_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X18, 0X8C, 0X24 # sbbb %r9b, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9B_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X18, 0X8D # sbbb %r9b, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9B_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X18, 0X8E # sbbb %r9b, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9B_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X18, 0X8F # sbbb %r9b, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9B_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X18, 0X88 # sbbb %r9b, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9B_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X18, 0X8B # sbbb %r9b, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9B_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X18, 0X89 # sbbb %r9b, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9B_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X18, 0X8A # sbbb %r9b, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9B_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X18, 0X8F # sbbb %r9b, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9B_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X18, 0X8E # sbbb %r9b, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9B_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X18, 0X8D # sbbb %r9b, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9B_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X18, 0X8C, 0X24 # sbbb %r9b, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SBB_R10B_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X18, 0X90 # sbbb %r10b, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10B_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X18, 0X93 # sbbb %r10b, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10B_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X18, 0X91 # sbbb %r10b, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10B_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X18, 0X92 # sbbb %r10b, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10B_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X18, 0X97 # sbbb %r10b, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10B_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X18, 0X96 # sbbb %r10b, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10B_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X18, 0X95 # sbbb %r10b, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10B_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X18, 0X94, 0X24 # sbbb %r10b, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10B_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X18, 0X90 # sbbb %r10b, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10B_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X18, 0X91 # sbbb %r10b, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10B_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X18, 0X92 # sbbb %r10b, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10B_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X18, 0X93 # sbbb %r10b, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10B_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X18, 0X94, 0X24 # sbbb %r10b, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10B_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X18, 0X95 # sbbb %r10b, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10B_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X18, 0X96 # sbbb %r10b, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10B_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X18, 0X97 # sbbb %r10b, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10B_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X18, 0X90 # sbbb %r10b, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10B_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X18, 0X93 # sbbb %r10b, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10B_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X18, 0X91 # sbbb %r10b, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10B_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X18, 0X92 # sbbb %r10b, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10B_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X18, 0X97 # sbbb %r10b, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10B_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X18, 0X96 # sbbb %r10b, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10B_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X18, 0X95 # sbbb %r10b, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10B_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X18, 0X94, 0X24 # sbbb %r10b, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SBB_R11B_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X18, 0X98 # sbbb %r11b, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11B_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X18, 0X9B # sbbb %r11b, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11B_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X18, 0X99 # sbbb %r11b, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11B_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X18, 0X9A # sbbb %r11b, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11B_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X18, 0X9F # sbbb %r11b, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11B_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X18, 0X9E # sbbb %r11b, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11B_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X18, 0X9D # sbbb %r11b, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11B_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X18, 0X9C, 0X24 # sbbb %r11b, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11B_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X18, 0X98 # sbbb %r11b, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11B_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X18, 0X99 # sbbb %r11b, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11B_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X18, 0X9A # sbbb %r11b, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11B_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X18, 0X9B # sbbb %r11b, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11B_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X18, 0X9C, 0X24 # sbbb %r11b, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11B_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X18, 0X9D # sbbb %r11b, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11B_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X18, 0X9E # sbbb %r11b, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11B_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X18, 0X9F # sbbb %r11b, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11B_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X18, 0X98 # sbbb %r11b, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11B_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X18, 0X9B # sbbb %r11b, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11B_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X18, 0X99 # sbbb %r11b, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11B_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X18, 0X9A # sbbb %r11b, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11B_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X18, 0X9F # sbbb %r11b, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11B_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X18, 0X9E # sbbb %r11b, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11B_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X18, 0X9D # sbbb %r11b, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11B_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X18, 0X9C, 0X24 # sbbb %r11b, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SBB_R12B_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X18, 0XA0 # sbbb %r12b, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12B_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X18, 0XA3 # sbbb %r12b, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12B_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X18, 0XA1 # sbbb %r12b, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12B_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X18, 0XA2 # sbbb %r12b, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12B_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X18, 0XA7 # sbbb %r12b, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12B_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X18, 0XA6 # sbbb %r12b, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12B_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X18, 0XA5 # sbbb %r12b, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12B_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X18, 0XA4, 0X24 # sbbb %r12b, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12B_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X18, 0XA0 # sbbb %r12b, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12B_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X18, 0XA1 # sbbb %r12b, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12B_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X18, 0XA2 # sbbb %r12b, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12B_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X18, 0XA3 # sbbb %r12b, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12B_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X18, 0XA4, 0X24 # sbbb %r12b, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12B_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X18, 0XA5 # sbbb %r12b, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12B_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X18, 0XA6 # sbbb %r12b, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12B_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X18, 0XA7 # sbbb %r12b, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12B_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X18, 0XA0 # sbbb %r12b, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12B_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X18, 0XA3 # sbbb %r12b, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12B_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X18, 0XA1 # sbbb %r12b, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12B_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X18, 0XA2 # sbbb %r12b, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12B_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X18, 0XA7 # sbbb %r12b, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12B_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X18, 0XA6 # sbbb %r12b, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12B_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X18, 0XA5 # sbbb %r12b, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12B_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X18, 0XA4, 0X24 # sbbb %r12b, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SBB_R13B_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X18, 0XA8 # sbbb %r13b, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13B_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X18, 0XAB # sbbb %r13b, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13B_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X18, 0XA9 # sbbb %r13b, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13B_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X18, 0XAA # sbbb %r13b, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13B_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X18, 0XAF # sbbb %r13b, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13B_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X18, 0XAE # sbbb %r13b, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13B_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X18, 0XAD # sbbb %r13b, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13B_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X18, 0XAC, 0X24 # sbbb %r13b, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13B_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X18, 0XA8 # sbbb %r13b, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13B_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X18, 0XA9 # sbbb %r13b, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13B_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X18, 0XAA # sbbb %r13b, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13B_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X18, 0XAB # sbbb %r13b, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13B_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X18, 0XAC, 0X24 # sbbb %r13b, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13B_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X18, 0XAD # sbbb %r13b, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13B_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X18, 0XAE # sbbb %r13b, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13B_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X18, 0XAF # sbbb %r13b, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13B_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X18, 0XA8 # sbbb %r13b, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13B_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X18, 0XAB # sbbb %r13b, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13B_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X18, 0XA9 # sbbb %r13b, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13B_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X18, 0XAA # sbbb %r13b, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13B_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X18, 0XAF # sbbb %r13b, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13B_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X18, 0XAE # sbbb %r13b, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13B_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X18, 0XAD # sbbb %r13b, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13B_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X18, 0XAC, 0X24 # sbbb %r13b, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SBB_R14B_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X18, 0XB0 # sbbb %r14b, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14B_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X18, 0XB3 # sbbb %r14b, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14B_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X18, 0XB1 # sbbb %r14b, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14B_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X18, 0XB2 # sbbb %r14b, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14B_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X18, 0XB7 # sbbb %r14b, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14B_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X18, 0XB6 # sbbb %r14b, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14B_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X18, 0XB5 # sbbb %r14b, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14B_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X18, 0XB4, 0X24 # sbbb %r14b, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14B_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X18, 0XB0 # sbbb %r14b, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14B_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X18, 0XB1 # sbbb %r14b, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14B_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X18, 0XB2 # sbbb %r14b, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14B_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X18, 0XB3 # sbbb %r14b, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14B_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X18, 0XB4, 0X24 # sbbb %r14b, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14B_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X18, 0XB5 # sbbb %r14b, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14B_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X18, 0XB6 # sbbb %r14b, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14B_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X18, 0XB7 # sbbb %r14b, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14B_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X18, 0XB0 # sbbb %r14b, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14B_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X18, 0XB3 # sbbb %r14b, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14B_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X18, 0XB1 # sbbb %r14b, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14B_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X18, 0XB2 # sbbb %r14b, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14B_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X18, 0XB7 # sbbb %r14b, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14B_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X18, 0XB6 # sbbb %r14b, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14B_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X18, 0XB5 # sbbb %r14b, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14B_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X18, 0XB4, 0X24 # sbbb %r14b, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SBB_R15B_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X18, 0XB8 # sbbb %r15b, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15B_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X18, 0XBB # sbbb %r15b, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15B_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X18, 0XB9 # sbbb %r15b, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15B_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X18, 0XBA # sbbb %r15b, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15B_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X18, 0XBF # sbbb %r15b, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15B_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X18, 0XBE # sbbb %r15b, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15B_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X18, 0XBD # sbbb %r15b, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15B_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X18, 0XBC, 0X24 # sbbb %r15b, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15B_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X18, 0XB8 # sbbb %r15b, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15B_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X18, 0XB9 # sbbb %r15b, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15B_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X18, 0XBA # sbbb %r15b, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15B_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X18, 0XBB # sbbb %r15b, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15B_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X18, 0XBC, 0X24 # sbbb %r15b, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15B_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X18, 0XBD # sbbb %r15b, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15B_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X18, 0XBE # sbbb %r15b, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15B_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X18, 0XBF # sbbb %r15b, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15B_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X18, 0XB8 # sbbb %r15b, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15B_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X18, 0XBB # sbbb %r15b, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15B_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X18, 0XB9 # sbbb %r15b, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15B_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X18, 0XBA # sbbb %r15b, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15B_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X18, 0XBF # sbbb %r15b, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15B_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X18, 0XBE # sbbb %r15b, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15B_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X18, 0XBD # sbbb %r15b, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15B_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X18, 0XBC, 0X24 # sbbb %r15b, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#endif /* __SYSTEM_64_BIT__ */
/* ************************** [^] 8-BIT MEMORY [^] ************************** */

/* ************************* [v] 16-BIT MEMORY [v] ************************** */
#ifdef __SYSTEM_16_BIT__
#define SBB_AX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X1B, 0X06 # sbbw (" _(VALUE) "), %ax")\
	CMT_ASM(".short " _(VALUE))
#define SBB_BX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X1B, 0X1E # sbbw (" _(VALUE) "), %bx")\
	CMT_ASM(".short " _(VALUE))
#define SBB_CX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X1B, 0X0E # sbbw (" _(VALUE) "), %cx")\
	CMT_ASM(".short " _(VALUE))
#define SBB_DX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X1B, 0X16 # sbbw (" _(VALUE) "), %dx")\
	CMT_ASM(".short " _(VALUE))
#define SBB_DI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X1B, 0X3E # sbbw (" _(VALUE) "), %di")\
	CMT_ASM(".short " _(VALUE))
#define SBB_SI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X1B, 0X36 # sbbw (" _(VALUE) "), %si")\
	CMT_ASM(".short " _(VALUE))
#define SBB_BP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X1B, 0X2E # sbbw (" _(VALUE) "), %bp")\
	CMT_ASM(".short " _(VALUE))
#define SBB_SP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X1B, 0X26 # sbbw (" _(VALUE) "), %sp")\
	CMT_ASM(".short " _(VALUE))

#define SBB_AX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X19, 0X06 # sbbw %ax, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define SBB_BX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X19, 0X1E # sbbw %bx, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define SBB_CX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X19, 0X0E # sbbw %cx, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define SBB_DX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X19, 0X16 # sbbw %dx, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define SBB_DI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X19, 0X3E # sbbw %di, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define SBB_SI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X19, 0X36 # sbbw %si, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define SBB_BP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X19, 0X2E # sbbw %bp, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define SBB_SP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X19, 0X26 # sbbw %sp, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))

#define SBB_AX_FROM_PTR_BX CMT_ASM(".byte 0X1B, 0X07 # sbbw (%bx), %ax")
#define SBB_AX_FROM_PTR_BP CMT_ASM(".byte 0X1B, 0X46, 0X00 # sbbw (%bp), %ax")
#define SBB_AX_FROM_PTR_SI CMT_ASM(".byte 0X1B, 0X04 # sbbw (%si), %ax")
#define SBB_AX_FROM_PTR_DI CMT_ASM(".byte 0X1B, 0X05 # sbbw (%di), %ax")

#define SBB_BX_FROM_PTR_BX CMT_ASM(".byte 0X1B, 0X1F # sbbw (%bx), %bx")
#define SBB_BX_FROM_PTR_BP CMT_ASM(".byte 0X1B, 0X5E, 0X00 # sbbw (%bp), %bx")
#define SBB_BX_FROM_PTR_SI CMT_ASM(".byte 0X1B, 0X1C # sbbw (%si), %bx")
#define SBB_BX_FROM_PTR_DI CMT_ASM(".byte 0X1B, 0X1D # sbbw (%di), %bx")

#define SBB_CX_FROM_PTR_BX CMT_ASM(".byte 0X1B, 0X0F # sbbw (%bx), %cx")
#define SBB_CX_FROM_PTR_BP CMT_ASM(".byte 0X1B, 0X4E, 0X00 # sbbw (%bp), %cx")
#define SBB_CX_FROM_PTR_SI CMT_ASM(".byte 0X1B, 0X0C # sbbw (%si), %cx")
#define SBB_CX_FROM_PTR_DI CMT_ASM(".byte 0X1B, 0X0D # sbbw (%di), %cx")

#define SBB_DX_FROM_PTR_BX CMT_ASM(".byte 0X1B, 0X17 # sbbw (%bx), %dx")
#define SBB_DX_FROM_PTR_BP CMT_ASM(".byte 0X1B, 0X56, 0X00 # sbbw (%bp), %dx")
#define SBB_DX_FROM_PTR_SI CMT_ASM(".byte 0X1B, 0X14 # sbbw (%si), %dx")
#define SBB_DX_FROM_PTR_DI CMT_ASM(".byte 0X1B, 0X15 # sbbw (%di), %dx")

#define SBB_DI_FROM_PTR_BX CMT_ASM(".byte 0X1B, 0X3F # sbbw (%bx), %di")
#define SBB_DI_FROM_PTR_BP CMT_ASM(".byte 0X1B, 0X7E, 0X00 # sbbw (%bp), %di")
#define SBB_DI_FROM_PTR_SI CMT_ASM(".byte 0X1B, 0X3C # sbbw (%si), %di")
#define SBB_DI_FROM_PTR_DI CMT_ASM(".byte 0X1B, 0X3D # sbbw (%di), %di")

#define SBB_SI_FROM_PTR_BX CMT_ASM(".byte 0X1B, 0X37 # sbbw (%bx), %si")
#define SBB_SI_FROM_PTR_BP CMT_ASM(".byte 0X1B, 0X76, 0X00 # sbbw (%bp), %si")
#define SBB_SI_FROM_PTR_SI CMT_ASM(".byte 0X1B, 0X34 # sbbw (%si), %si")
#define SBB_SI_FROM_PTR_DI CMT_ASM(".byte 0X1B, 0X35 # sbbw (%di), %si")

#define SBB_BP_FROM_PTR_BX CMT_ASM(".byte 0X1B, 0X2F # sbbw (%bx), %bp")
#define SBB_BP_FROM_PTR_BP CMT_ASM(".byte 0X1B, 0X6E, 0X00 # sbbw (%bp), %bp")
#define SBB_BP_FROM_PTR_SI CMT_ASM(".byte 0X1B, 0X2C # sbbw (%si), %bp")
#define SBB_BP_FROM_PTR_DI CMT_ASM(".byte 0X1B, 0X2D # sbbw (%di), %bp")

#define SBB_SP_FROM_PTR_BX CMT_ASM(".byte 0X1B, 0X27 # sbbw (%bx), %sp")
#define SBB_SP_FROM_PTR_BP CMT_ASM(".byte 0X1B, 0X66, 0X00 # sbbw (%bp), %sp")
#define SBB_SP_FROM_PTR_SI CMT_ASM(".byte 0X1B, 0X24 # sbbw (%si), %sp")
#define SBB_SP_FROM_PTR_DI CMT_ASM(".byte 0X1B, 0X25 # sbbw (%di), %sp")

#define SBB_AX_TO_PTR_BX CMT_ASM(".byte 0X19, 0X07 # sbbw %ax, (%bx)")
#define SBB_AX_TO_PTR_BP CMT_ASM(".byte 0X19, 0X46, 0X00 # sbbw %ax, (%bp)")
#define SBB_AX_TO_PTR_SI CMT_ASM(".byte 0X19, 0X04 # sbbw %ax, (%si)")
#define SBB_AX_TO_PTR_DI CMT_ASM(".byte 0X19, 0X05 # sbbw %ax, (%di)")

#define SBB_BX_TO_PTR_BX CMT_ASM(".byte 0X19, 0X1F # sbbw %bx, (%bx)")
#define SBB_BX_TO_PTR_BP CMT_ASM(".byte 0X19, 0X5E, 0X00 # sbbw %bx, (%bp)")
#define SBB_BX_TO_PTR_SI CMT_ASM(".byte 0X19, 0X1C # sbbw %bx, (%si)")
#define SBB_BX_TO_PTR_DI CMT_ASM(".byte 0X19, 0X1D # sbbw %bx, (%di)")

#define SBB_CX_TO_PTR_BX CMT_ASM(".byte 0X19, 0X0F # sbbw %cx, (%bx)")
#define SBB_CX_TO_PTR_BP CMT_ASM(".byte 0X19, 0X4E, 0X00 # sbbw %cx, (%bp)")
#define SBB_CX_TO_PTR_SI CMT_ASM(".byte 0X19, 0X0C # sbbw %cx, (%si)")
#define SBB_CX_TO_PTR_DI CMT_ASM(".byte 0X19, 0X0D # sbbw %cx, (%di)")

#define SBB_DX_TO_PTR_BX CMT_ASM(".byte 0X19, 0X17 # sbbw %dx, (%bx)")
#define SBB_DX_TO_PTR_BP CMT_ASM(".byte 0X19, 0X56, 0X00 # sbbw %dx, (%bp)")
#define SBB_DX_TO_PTR_SI CMT_ASM(".byte 0X19, 0X14 # sbbw %dx, (%si)")
#define SBB_DX_TO_PTR_DI CMT_ASM(".byte 0X19, 0X15 # sbbw %dx, (%di)")

#define SBB_DI_TO_PTR_BX CMT_ASM(".byte 0X19, 0X3F # sbbw %di, (%bx)")
#define SBB_DI_TO_PTR_BP CMT_ASM(".byte 0X19, 0X7E, 0X00 # sbbw %di, (%bp)")
#define SBB_DI_TO_PTR_SI CMT_ASM(".byte 0X19, 0X3C # sbbw %di, (%si)")
#define SBB_DI_TO_PTR_DI CMT_ASM(".byte 0X19, 0X3D # sbbw %di, (%di)")

#define SBB_SI_TO_PTR_BX CMT_ASM(".byte 0X19, 0X37 # sbbw %si, (%bx)")
#define SBB_SI_TO_PTR_BP CMT_ASM(".byte 0X19, 0X76, 0X00 # sbbw %si, (%bp)")
#define SBB_SI_TO_PTR_SI CMT_ASM(".byte 0X19, 0X34 # sbbw %si, (%si)")
#define SBB_SI_TO_PTR_DI CMT_ASM(".byte 0X19, 0X35 # sbbw %si, (%di)")

#define SBB_BP_TO_PTR_BX CMT_ASM(".byte 0X19, 0X2F # sbbw %bp, (%bx)")
#define SBB_BP_TO_PTR_BP CMT_ASM(".byte 0X19, 0X6E, 0X00 # sbbw %bp, (%bp)")
#define SBB_BP_TO_PTR_SI CMT_ASM(".byte 0X19, 0X2C # sbbw %bp, (%si)")
#define SBB_BP_TO_PTR_DI CMT_ASM(".byte 0X19, 0X2D # sbbw %bp, (%di)")

#define SBB_SP_TO_PTR_BX CMT_ASM(".byte 0X19, 0X27 # sbbw %sp, (%bx)")
#define SBB_SP_TO_PTR_BP CMT_ASM(".byte 0X19, 0X66, 0X00 # sbbw %sp, (%bp)")
#define SBB_SP_TO_PTR_SI CMT_ASM(".byte 0X19, 0X24 # sbbw %sp, (%si)")
#define SBB_SP_TO_PTR_DI CMT_ASM(".byte 0X19, 0X25 # sbbw %sp, (%di)")

#define SBB_AX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X1B, 0X87 # sbbw " _(VALUE) "(%bx), %ax")\
	CMT_ASM(".short " _(VALUE))
#define SBB_AX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X1B, 0X86 # sbbw " _(VALUE) "(%bp), %ax")\
	CMT_ASM(".short " _(VALUE))
#define SBB_AX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X1B, 0X84 # sbbw " _(VALUE) "(%si), %ax")\
	CMT_ASM(".short " _(VALUE))
#define SBB_AX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X1B, 0X85 # sbbw " _(VALUE) "(%di), %ax")\
	CMT_ASM(".short " _(VALUE))

#define SBB_BX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X1B, 0X9F # sbbw " _(VALUE) "(%bx), %bx")\
	CMT_ASM(".short " _(VALUE))
#define SBB_BX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X1B, 0X9E # sbbw " _(VALUE) "(%bp), %bx")\
	CMT_ASM(".short " _(VALUE))
#define SBB_BX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X1B, 0X9C # sbbw " _(VALUE) "(%si), %bx")\
	CMT_ASM(".short " _(VALUE))
#define SBB_BX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X1B, 0X9D # sbbw " _(VALUE) "(%di), %bx")\
	CMT_ASM(".short " _(VALUE))

#define SBB_CX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X1B, 0X8F # sbbw " _(VALUE) "(%bx), %cx")\
	CMT_ASM(".short " _(VALUE))
#define SBB_CX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X1B, 0X8E # sbbw " _(VALUE) "(%bp), %cx")\
	CMT_ASM(".short " _(VALUE))
#define SBB_CX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X1B, 0X8C # sbbw " _(VALUE) "(%si), %cx")\
	CMT_ASM(".short " _(VALUE))
#define SBB_CX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X1B, 0X8D # sbbw " _(VALUE) "(%di), %cx")\
	CMT_ASM(".short " _(VALUE))

#define SBB_DX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X1B, 0X97 # sbbw " _(VALUE) "(%bx), %dx")\
	CMT_ASM(".short " _(VALUE))
#define SBB_DX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X1B, 0X96 # sbbw " _(VALUE) "(%bp), %dx")\
	CMT_ASM(".short " _(VALUE))
#define SBB_DX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X1B, 0X94 # sbbw " _(VALUE) "(%si), %dx")\
	CMT_ASM(".short " _(VALUE))
#define SBB_DX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X1B, 0X95 # sbbw " _(VALUE) "(%di), %dx")\
	CMT_ASM(".short " _(VALUE))

#define SBB_DI_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X1B, 0XBF # sbbw " _(VALUE) "(%bx), %di")\
	CMT_ASM(".short " _(VALUE))
#define SBB_DI_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X1B, 0XBE # sbbw " _(VALUE) "(%bp), %di")\
	CMT_ASM(".short " _(VALUE))
#define SBB_DI_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X1B, 0XBC # sbbw " _(VALUE) "(%si), %di")\
	CMT_ASM(".short " _(VALUE))
#define SBB_DI_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X1B, 0XBD # sbbw " _(VALUE) "(%di), %di")\
	CMT_ASM(".short " _(VALUE))

#define SBB_SI_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X1B, 0XB7 # sbbw " _(VALUE) "(%bx), %si")\
	CMT_ASM(".short " _(VALUE))
#define SBB_SI_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X1B, 0XB6 # sbbw " _(VALUE) "(%bp), %si")\
	CMT_ASM(".short " _(VALUE))
#define SBB_SI_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X1B, 0XB4 # sbbw " _(VALUE) "(%si), %si")\
	CMT_ASM(".short " _(VALUE))
#define SBB_SI_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X1B, 0XB5 # sbbw " _(VALUE) "(%di), %si")\
	CMT_ASM(".short " _(VALUE))

#define SBB_BP_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X1B, 0XAF # sbbw " _(VALUE) "(%bx), %bp")\
	CMT_ASM(".short " _(VALUE))
#define SBB_BP_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X1B, 0XAE # sbbw " _(VALUE) "(%bp), %bp")\
	CMT_ASM(".short " _(VALUE))
#define SBB_BP_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X1B, 0XAC # sbbw " _(VALUE) "(%si), %bp")\
	CMT_ASM(".short " _(VALUE))
#define SBB_BP_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X1B, 0XAD # sbbw " _(VALUE) "(%di), %bp")\
	CMT_ASM(".short " _(VALUE))

#define SBB_SP_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X1B, 0XA7 # sbbw " _(VALUE) "(%bx), %sp")\
	CMT_ASM(".short " _(VALUE))
#define SBB_SP_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X1B, 0XA6 # sbbw " _(VALUE) "(%bp), %sp")\
	CMT_ASM(".short " _(VALUE))
#define SBB_SP_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X1B, 0XA4 # sbbw " _(VALUE) "(%si), %sp")\
	CMT_ASM(".short " _(VALUE))
#define SBB_SP_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X1B, 0XA5 # sbbw " _(VALUE) "(%di), %sp")\
	CMT_ASM(".short " _(VALUE))

#define SBB_AX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X19, 0X87 # sbbw %ax, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define SBB_AX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X19, 0X86 # sbbw %ax, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define SBB_AX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X19, 0X84 # sbbw %ax, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define SBB_AX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X19, 0X85 # sbbw %ax, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define SBB_BX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X19, 0X9F # sbbw %bx, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define SBB_BX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X19, 0X9E # sbbw %bx, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define SBB_BX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X19, 0X9C # sbbw %bx, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define SBB_BX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X19, 0X9D # sbbw %bx, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define SBB_CX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X19, 0X8F # sbbw %cx, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define SBB_CX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X19, 0X8E # sbbw %cx, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define SBB_CX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X19, 0X8C # sbbw %cx, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define SBB_CX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X19, 0X8D # sbbw %cx, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define SBB_DX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X19, 0X97 # sbbw %dx, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define SBB_DX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X19, 0X96 # sbbw %dx, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define SBB_DX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X19, 0X94 # sbbw %dx, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define SBB_DX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X19, 0X95 # sbbw %dx, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define SBB_DI_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X19, 0XBF # sbbw %di, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define SBB_DI_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X19, 0XBE # sbbw %di, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define SBB_DI_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X19, 0XBC # sbbw %di, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define SBB_DI_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X19, 0XBD # sbbw %di, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define SBB_SI_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X19, 0XB7 # sbbw %si, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define SBB_SI_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X19, 0XB6 # sbbw %si, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define SBB_SI_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X19, 0XB4 # sbbw %si, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define SBB_SI_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X19, 0XB5 # sbbw %si, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define SBB_BP_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X19, 0XAF # sbbw %bp, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define SBB_BP_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X19, 0XAE # sbbw %bp, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define SBB_BP_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X19, 0XAC # sbbw %bp, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define SBB_BP_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X19, 0XAD # sbbw %bp, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define SBB_SP_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X19, 0XA7 # sbbw %sp, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define SBB_SP_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X19, 0XA6 # sbbw %sp, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define SBB_SP_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X19, 0XA4 # sbbw %sp, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define SBB_SP_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X19, 0XA5 # sbbw %sp, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))
#endif /* __SYSTEM_16_BIT__ */

#ifdef __SYSTEM_32_BIT__
#define SBB_AX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0X05 # sbbw (" _(VALUE) "), %ax")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0X1D # sbbw (" _(VALUE) "), %bx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0X0D # sbbw (" _(VALUE) "), %cx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0X15 # sbbw (" _(VALUE) "), %dx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0X3D # sbbw (" _(VALUE) "), %di")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0X35 # sbbw (" _(VALUE) "), %si")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0X2D # sbbw (" _(VALUE) "), %bp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0X25 # sbbw (" _(VALUE) "), %sp")\
	CMT_ASM(".long " _(VALUE))

#define SBB_AX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0X05 # sbbw %ax, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0X1D # sbbw %bx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0X0D # sbbw %cx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0X15 # sbbw %dx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0X3D # sbbw %di, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0X35 # sbbw %si, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0X2D # sbbw %bp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0X25 # sbbw %sp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))

#define SBB_AX_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X1B, 0X00 # sbbw (%eax), %ax")
#define SBB_AX_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X1B, 0X03 # sbbw (%ebx), %ax")
#define SBB_AX_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X1B, 0X01 # sbbw (%ecx), %ax")
#define SBB_AX_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X1B, 0X02 # sbbw (%edx), %ax")
#define SBB_AX_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X1B, 0X07 # sbbw (%edi), %ax")
#define SBB_AX_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X1B, 0X06 # sbbw (%esi), %ax")
#define SBB_AX_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X1B, 0X45, 0X00 # sbbw (%ebp), %ax")
#define SBB_AX_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X1B, 0X04, 0X24 # sbbw (%esp), %ax")
#define SBB_AX_FROM_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X07 # sbbw (%bx), %ax")
#define SBB_AX_FROM_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X46, 0X00 # sbbw (%bp), %ax")
#define SBB_AX_FROM_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X04 # sbbw (%si), %ax")
#define SBB_AX_FROM_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X05 # sbbw (%di), %ax")

#define SBB_BX_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X1B, 0X18 # sbbw (%eax), %bx")
#define SBB_BX_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X1B, 0X1B # sbbw (%ebx), %bx")
#define SBB_BX_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X1B, 0X19 # sbbw (%ecx), %bx")
#define SBB_BX_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X1B, 0X1A # sbbw (%edx), %bx")
#define SBB_BX_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X1B, 0X1F # sbbw (%edi), %bx")
#define SBB_BX_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X1B, 0X1E # sbbw (%esi), %bx")
#define SBB_BX_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X1B, 0X5D, 0X00 # sbbw (%ebp), %bx")
#define SBB_BX_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X1B, 0X1C, 0X24 # sbbw (%esp), %bx")
#define SBB_BX_FROM_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X1F # sbbw (%bx), %bx")
#define SBB_BX_FROM_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X5E, 0X00 # sbbw (%bp), %bx")
#define SBB_BX_FROM_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X1C # sbbw (%si), %bx")
#define SBB_BX_FROM_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X1D # sbbw (%di), %bx")

#define SBB_CX_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X1B, 0X08 # sbbw (%eax), %cx")
#define SBB_CX_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X1B, 0X0B # sbbw (%ebx), %cx")
#define SBB_CX_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X1B, 0X09 # sbbw (%ecx), %cx")
#define SBB_CX_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X1B, 0X0A # sbbw (%edx), %cx")
#define SBB_CX_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X1B, 0X0F # sbbw (%edi), %cx")
#define SBB_CX_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X1B, 0X0E # sbbw (%esi), %cx")
#define SBB_CX_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X1B, 0X4D, 0X00 # sbbw (%ebp), %cx")
#define SBB_CX_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X1B, 0X0C, 0X24 # sbbw (%esp), %cx")
#define SBB_CX_FROM_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X0F # sbbw (%bx), %cx")
#define SBB_CX_FROM_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X4E, 0X00 # sbbw (%bp), %cx")
#define SBB_CX_FROM_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X0C # sbbw (%si), %cx")
#define SBB_CX_FROM_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X0D # sbbw (%di), %cx")

#define SBB_DX_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X1B, 0X10 # sbbw (%eax), %dx")
#define SBB_DX_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X1B, 0X13 # sbbw (%ebx), %dx")
#define SBB_DX_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X1B, 0X11 # sbbw (%ecx), %dx")
#define SBB_DX_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X1B, 0X12 # sbbw (%edx), %dx")
#define SBB_DX_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X1B, 0X17 # sbbw (%edi), %dx")
#define SBB_DX_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X1B, 0X16 # sbbw (%esi), %dx")
#define SBB_DX_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X1B, 0X55, 0X00 # sbbw (%ebp), %dx")
#define SBB_DX_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X1B, 0X14, 0X24 # sbbw (%esp), %dx")
#define SBB_DX_FROM_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X17 # sbbw (%bx), %dx")
#define SBB_DX_FROM_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X56, 0X00 # sbbw (%bp), %dx")
#define SBB_DX_FROM_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X14 # sbbw (%si), %dx")
#define SBB_DX_FROM_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X15 # sbbw (%di), %dx")

#define SBB_DI_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X1B, 0X38 # sbbw (%eax), %di")
#define SBB_DI_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X1B, 0X3B # sbbw (%ebx), %di")
#define SBB_DI_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X1B, 0X39 # sbbw (%ecx), %di")
#define SBB_DI_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X1B, 0X3A # sbbw (%edx), %di")
#define SBB_DI_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X1B, 0X3F # sbbw (%edi), %di")
#define SBB_DI_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X1B, 0X3E # sbbw (%esi), %di")
#define SBB_DI_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X1B, 0X7D, 0X00 # sbbw (%ebp), %di")
#define SBB_DI_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X1B, 0X3C, 0X24 # sbbw (%esp), %di")
#define SBB_DI_FROM_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X3F # sbbw (%bx), %di")
#define SBB_DI_FROM_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X7E, 0X00 # sbbw (%bp), %di")
#define SBB_DI_FROM_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X3C # sbbw (%si), %di")
#define SBB_DI_FROM_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X3D # sbbw (%di), %di")

#define SBB_SI_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X1B, 0X30 # sbbw (%eax), %si")
#define SBB_SI_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X1B, 0X33 # sbbw (%ebx), %si")
#define SBB_SI_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X1B, 0X31 # sbbw (%ecx), %si")
#define SBB_SI_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X1B, 0X32 # sbbw (%edx), %si")
#define SBB_SI_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X1B, 0X37 # sbbw (%edi), %si")
#define SBB_SI_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X1B, 0X36 # sbbw (%esi), %si")
#define SBB_SI_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X1B, 0X75, 0X00 # sbbw (%ebp), %si")
#define SBB_SI_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X1B, 0X34, 0X24 # sbbw (%esp), %si")
#define SBB_SI_FROM_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X37 # sbbw (%bx), %si")
#define SBB_SI_FROM_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X76, 0X00 # sbbw (%bp), %si")
#define SBB_SI_FROM_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X34 # sbbw (%si), %si")
#define SBB_SI_FROM_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X35 # sbbw (%di), %si")

#define SBB_BP_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X1B, 0X28 # sbbw (%eax), %bp")
#define SBB_BP_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X1B, 0X2B # sbbw (%ebx), %bp")
#define SBB_BP_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X1B, 0X29 # sbbw (%ecx), %bp")
#define SBB_BP_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X1B, 0X2A # sbbw (%edx), %bp")
#define SBB_BP_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X1B, 0X2F # sbbw (%edi), %bp")
#define SBB_BP_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X1B, 0X2E # sbbw (%esi), %bp")
#define SBB_BP_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X1B, 0X6D, 0X00 # sbbw (%ebp), %bp")
#define SBB_BP_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X1B, 0X2C, 0X24 # sbbw (%esp), %bp")
#define SBB_BP_FROM_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X2F # sbbw (%bx), %bp")
#define SBB_BP_FROM_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X6E, 0X00 # sbbw (%bp), %bp")
#define SBB_BP_FROM_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X2C # sbbw (%si), %bp")
#define SBB_BP_FROM_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X2D # sbbw (%di), %bp")

#define SBB_SP_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X1B, 0X20 # sbbw (%eax), %sp")
#define SBB_SP_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X1B, 0X23 # sbbw (%ebx), %sp")
#define SBB_SP_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X1B, 0X21 # sbbw (%ecx), %sp")
#define SBB_SP_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X1B, 0X22 # sbbw (%edx), %sp")
#define SBB_SP_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X1B, 0X27 # sbbw (%edi), %sp")
#define SBB_SP_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X1B, 0X26 # sbbw (%esi), %sp")
#define SBB_SP_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X1B, 0X65, 0X00 # sbbw (%ebp), %sp")
#define SBB_SP_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X1B, 0X24, 0X24 # sbbw (%esp), %sp")
#define SBB_SP_FROM_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X27 # sbbw (%bx), %sp")
#define SBB_SP_FROM_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X66, 0X00 # sbbw (%bp), %sp")
#define SBB_SP_FROM_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X24 # sbbw (%si), %sp")
#define SBB_SP_FROM_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X25 # sbbw (%di), %sp")

#define SBB_AX_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X19, 0X00 # sbbw %ax, (%eax)")
#define SBB_AX_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X19, 0X03 # sbbw %ax, (%ebx)")
#define SBB_AX_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X19, 0X01 # sbbw %ax, (%ecx)")
#define SBB_AX_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X19, 0X02 # sbbw %ax, (%edx)")
#define SBB_AX_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X19, 0X07 # sbbw %ax, (%edi)")
#define SBB_AX_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X19, 0X06 # sbbw %ax, (%esi)")
#define SBB_AX_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X19, 0X45, 0X00 # sbbw %ax, (%ebp)")
#define SBB_AX_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X19, 0X04, 0X24 # sbbw %ax, (%esp)")
#define SBB_AX_TO_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X19, 0X07 # sbbw %ax, (%bx)")
#define SBB_AX_TO_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X19, 0X46, 0X00 # sbbw %ax, (%bp)")
#define SBB_AX_TO_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X19, 0X04 # sbbw %ax, (%si)")
#define SBB_AX_TO_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X19, 0X05 # sbbw %ax, (%di)")

#define SBB_BX_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X19, 0X18 # sbbw %bx, (%eax)")
#define SBB_BX_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X19, 0X1B # sbbw %bx, (%ebx)")
#define SBB_BX_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X19, 0X19 # sbbw %bx, (%ecx)")
#define SBB_BX_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X19, 0X1A # sbbw %bx, (%edx)")
#define SBB_BX_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X19, 0X1F # sbbw %bx, (%edi)")
#define SBB_BX_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X19, 0X1E # sbbw %bx, (%esi)")
#define SBB_BX_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X19, 0X5D, 0X00 # sbbw %bx, (%ebp)")
#define SBB_BX_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X19, 0X1C, 0X24 # sbbw %bx, (%esp)")
#define SBB_BX_TO_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X19, 0X1F # sbbw %bx, (%bx)")
#define SBB_BX_TO_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X19, 0X5E, 0X00 # sbbw %bx, (%bp)")
#define SBB_BX_TO_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X19, 0X1C # sbbw %bx, (%si)")
#define SBB_BX_TO_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X19, 0X1D # sbbw %bx, (%di)")

#define SBB_CX_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X19, 0X08 # sbbw %cx, (%eax)")
#define SBB_CX_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X19, 0X0B # sbbw %cx, (%ebx)")
#define SBB_CX_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X19, 0X09 # sbbw %cx, (%ecx)")
#define SBB_CX_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X19, 0X0A # sbbw %cx, (%edx)")
#define SBB_CX_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X19, 0X0F # sbbw %cx, (%edi)")
#define SBB_CX_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X19, 0X0E # sbbw %cx, (%esi)")
#define SBB_CX_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X19, 0X4D, 0X00 # sbbw %cx, (%ebp)")
#define SBB_CX_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X19, 0X0C, 0X24 # sbbw %cx, (%esp)")
#define SBB_CX_TO_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X19, 0X0F # sbbw %cx, (%bx)")
#define SBB_CX_TO_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X19, 0X4E, 0X00 # sbbw %cx, (%bp)")
#define SBB_CX_TO_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X19, 0X0C # sbbw %cx, (%si)")
#define SBB_CX_TO_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X19, 0X0D # sbbw %cx, (%di)")

#define SBB_DX_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X19, 0X10 # sbbw %dx, (%eax)")
#define SBB_DX_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X19, 0X13 # sbbw %dx, (%ebx)")
#define SBB_DX_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X19, 0X11 # sbbw %dx, (%ecx)")
#define SBB_DX_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X19, 0X12 # sbbw %dx, (%edx)")
#define SBB_DX_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X19, 0X17 # sbbw %dx, (%edi)")
#define SBB_DX_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X19, 0X16 # sbbw %dx, (%esi)")
#define SBB_DX_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X19, 0X55, 0X00 # sbbw %dx, (%ebp)")
#define SBB_DX_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X19, 0X14, 0X24 # sbbw %dx, (%esp)")
#define SBB_DX_TO_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X19, 0X17 # sbbw %dx, (%bx)")
#define SBB_DX_TO_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X19, 0X56, 0X00 # sbbw %dx, (%bp)")
#define SBB_DX_TO_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X19, 0X14 # sbbw %dx, (%si)")
#define SBB_DX_TO_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X19, 0X15 # sbbw %dx, (%di)")

#define SBB_DI_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X19, 0X38 # sbbw %di, (%eax)")
#define SBB_DI_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X19, 0X3B # sbbw %di, (%ebx)")
#define SBB_DI_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X19, 0X39 # sbbw %di, (%ecx)")
#define SBB_DI_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X19, 0X3A # sbbw %di, (%edx)")
#define SBB_DI_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X19, 0X3F # sbbw %di, (%edi)")
#define SBB_DI_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X19, 0X3E # sbbw %di, (%esi)")
#define SBB_DI_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X19, 0X7D, 0X00 # sbbw %di, (%ebp)")
#define SBB_DI_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X19, 0X3C, 0X24 # sbbw %di, (%esp)")
#define SBB_DI_TO_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X19, 0X3F # sbbw %di, (%bx)")
#define SBB_DI_TO_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X19, 0X7E, 0X00 # sbbw %di, (%bp)")
#define SBB_DI_TO_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X19, 0X3C # sbbw %di, (%si)")
#define SBB_DI_TO_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X19, 0X3D # sbbw %di, (%di)")

#define SBB_SI_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X19, 0X30 # sbbw %si, (%eax)")
#define SBB_SI_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X19, 0X33 # sbbw %si, (%ebx)")
#define SBB_SI_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X19, 0X31 # sbbw %si, (%ecx)")
#define SBB_SI_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X19, 0X32 # sbbw %si, (%edx)")
#define SBB_SI_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X19, 0X37 # sbbw %si, (%edi)")
#define SBB_SI_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X19, 0X36 # sbbw %si, (%esi)")
#define SBB_SI_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X19, 0X75, 0X00 # sbbw %si, (%ebp)")
#define SBB_SI_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X19, 0X34, 0X24 # sbbw %si, (%esp)")
#define SBB_SI_TO_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X19, 0X37 # sbbw %si, (%bx)")
#define SBB_SI_TO_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X19, 0X76, 0X00 # sbbw %si, (%bp)")
#define SBB_SI_TO_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X19, 0X34 # sbbw %si, (%si)")
#define SBB_SI_TO_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X19, 0X35 # sbbw %si, (%di)")

#define SBB_BP_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X19, 0X28 # sbbw %bp, (%eax)")
#define SBB_BP_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X19, 0X2B # sbbw %bp, (%ebx)")
#define SBB_BP_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X19, 0X29 # sbbw %bp, (%ecx)")
#define SBB_BP_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X19, 0X2A # sbbw %bp, (%edx)")
#define SBB_BP_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X19, 0X2F # sbbw %bp, (%edi)")
#define SBB_BP_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X19, 0X2E # sbbw %bp, (%esi)")
#define SBB_BP_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X19, 0X6D, 0X00 # sbbw %bp, (%ebp)")
#define SBB_BP_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X19, 0X2C, 0X24 # sbbw %bp, (%esp)")
#define SBB_BP_TO_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X19, 0X2F # sbbw %bp, (%bx)")
#define SBB_BP_TO_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X19, 0X6E, 0X00 # sbbw %bp, (%bp)")
#define SBB_BP_TO_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X19, 0X2C # sbbw %bp, (%si)")
#define SBB_BP_TO_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X19, 0X2D # sbbw %bp, (%di)")

#define SBB_SP_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X19, 0X20 # sbbw %sp, (%eax)")
#define SBB_SP_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X19, 0X23 # sbbw %sp, (%ebx)")
#define SBB_SP_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X19, 0X21 # sbbw %sp, (%ecx)")
#define SBB_SP_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X19, 0X22 # sbbw %sp, (%edx)")
#define SBB_SP_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X19, 0X27 # sbbw %sp, (%edi)")
#define SBB_SP_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X19, 0X26 # sbbw %sp, (%esi)")
#define SBB_SP_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X19, 0X65, 0X00 # sbbw %sp, (%ebp)")
#define SBB_SP_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X19, 0X24, 0X24 # sbbw %sp, (%esp)")
#define SBB_SP_TO_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X19, 0X27 # sbbw %sp, (%bx)")
#define SBB_SP_TO_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X19, 0X66, 0X00 # sbbw %sp, (%bp)")
#define SBB_SP_TO_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X19, 0X24 # sbbw %sp, (%si)")
#define SBB_SP_TO_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X19, 0X25 # sbbw %sp, (%di)")

#define SBB_AX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0X80 # sbbw " _(VALUE) "(%eax), %ax")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0X83 # sbbw " _(VALUE) "(%ebx), %ax")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0X81 # sbbw " _(VALUE) "(%ecx), %ax")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0X82 # sbbw " _(VALUE) "(%edx), %ax")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0X87 # sbbw " _(VALUE) "(%edi), %ax")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0X86 # sbbw " _(VALUE) "(%esi), %ax")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0X85 # sbbw " _(VALUE) "(%ebp), %ax")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0X84, 0X24 # sbbw " _(VALUE) "(%esp), %ax")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X87 # sbbw " _(VALUE) "(%bx), %ax")\
	CMT_ASM(".short " _(VALUE))
#define SBB_AX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X86 # sbbw " _(VALUE) "(%bp), %ax")\
	CMT_ASM(".short " _(VALUE))
#define SBB_AX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X84 # sbbw " _(VALUE) "(%si), %ax")\
	CMT_ASM(".short " _(VALUE))
#define SBB_AX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X85 # sbbw " _(VALUE) "(%di), %ax")\
	CMT_ASM(".short " _(VALUE))

#define SBB_BX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0X98 # sbbw " _(VALUE) "(%eax), %bx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0X9B # sbbw " _(VALUE) "(%ebx), %bx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0X99 # sbbw " _(VALUE) "(%ecx), %bx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0X9A # sbbw " _(VALUE) "(%edx), %bx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0X9F # sbbw " _(VALUE) "(%edi), %bx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0X9E # sbbw " _(VALUE) "(%esi), %bx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0X9D # sbbw " _(VALUE) "(%ebp), %bx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0X9C, 0X24 # sbbw " _(VALUE) "(%esp), %bx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X9F # sbbw " _(VALUE) "(%bx), %bx")\
	CMT_ASM(".short " _(VALUE))
#define SBB_BX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X9E # sbbw " _(VALUE) "(%bp), %bx")\
	CMT_ASM(".short " _(VALUE))
#define SBB_BX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X9C # sbbw " _(VALUE) "(%si), %bx")\
	CMT_ASM(".short " _(VALUE))
#define SBB_BX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X9D # sbbw " _(VALUE) "(%di), %bx")\
	CMT_ASM(".short " _(VALUE))

#define SBB_CX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0X88 # sbbw " _(VALUE) "(%eax), %cx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0X8B # sbbw " _(VALUE) "(%ebx), %cx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0X89 # sbbw " _(VALUE) "(%ecx), %cx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0X8A # sbbw " _(VALUE) "(%edx), %cx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0X8F # sbbw " _(VALUE) "(%edi), %cx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0X8E # sbbw " _(VALUE) "(%esi), %cx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0X8D # sbbw " _(VALUE) "(%ebp), %cx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0X8C, 0X24 # sbbw " _(VALUE) "(%esp), %cx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X8F # sbbw " _(VALUE) "(%bx), %cx")\
	CMT_ASM(".short " _(VALUE))
#define SBB_CX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X8E # sbbw " _(VALUE) "(%bp), %cx")\
	CMT_ASM(".short " _(VALUE))
#define SBB_CX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X8C # sbbw " _(VALUE) "(%si), %cx")\
	CMT_ASM(".short " _(VALUE))
#define SBB_CX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X8D # sbbw " _(VALUE) "(%di), %cx")\
	CMT_ASM(".short " _(VALUE))

#define SBB_DX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0X90 # sbbw " _(VALUE) "(%eax), %dx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0X93 # sbbw " _(VALUE) "(%ebx), %dx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0X91 # sbbw " _(VALUE) "(%ecx), %dx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0X92 # sbbw " _(VALUE) "(%edx), %dx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0X97 # sbbw " _(VALUE) "(%edi), %dx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0X96 # sbbw " _(VALUE) "(%esi), %dx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0X95 # sbbw " _(VALUE) "(%ebp), %dx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0X94, 0X24 # sbbw " _(VALUE) "(%esp), %dx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X97 # sbbw " _(VALUE) "(%bx), %dx")\
	CMT_ASM(".short " _(VALUE))
#define SBB_DX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X96 # sbbw " _(VALUE) "(%bp), %dx")\
	CMT_ASM(".short " _(VALUE))
#define SBB_DX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X94 # sbbw " _(VALUE) "(%si), %dx")\
	CMT_ASM(".short " _(VALUE))
#define SBB_DX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X95 # sbbw " _(VALUE) "(%di), %dx")\
	CMT_ASM(".short " _(VALUE))

#define SBB_DI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0XB8 # sbbw " _(VALUE) "(%eax), %di")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0XBB # sbbw " _(VALUE) "(%ebx), %di")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0XB9 # sbbw " _(VALUE) "(%ecx), %di")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0XBA # sbbw " _(VALUE) "(%edx), %di")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0XBF # sbbw " _(VALUE) "(%edi), %di")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0XBE # sbbw " _(VALUE) "(%esi), %di")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0XBD # sbbw " _(VALUE) "(%ebp), %di")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0XBC, 0X24 # sbbw " _(VALUE) "(%esp), %di")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DI_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X1B, 0XBF # sbbw " _(VALUE) "(%bx), %di")\
	CMT_ASM(".short " _(VALUE))
#define SBB_DI_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X1B, 0XBE # sbbw " _(VALUE) "(%bp), %di")\
	CMT_ASM(".short " _(VALUE))
#define SBB_DI_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X1B, 0XBC # sbbw " _(VALUE) "(%si), %di")\
	CMT_ASM(".short " _(VALUE))
#define SBB_DI_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X1B, 0XBD # sbbw " _(VALUE) "(%di), %di")\
	CMT_ASM(".short " _(VALUE))

#define SBB_SI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0XB0 # sbbw " _(VALUE) "(%eax), %si")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0XB3 # sbbw " _(VALUE) "(%ebx), %si")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0XB1 # sbbw " _(VALUE) "(%ecx), %si")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0XB2 # sbbw " _(VALUE) "(%edx), %si")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0XB7 # sbbw " _(VALUE) "(%edi), %si")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0XB6 # sbbw " _(VALUE) "(%esi), %si")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0XB5 # sbbw " _(VALUE) "(%ebp), %si")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0XB4, 0X24 # sbbw " _(VALUE) "(%esp), %si")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SI_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X1B, 0XB7 # sbbw " _(VALUE) "(%bx), %si")\
	CMT_ASM(".short " _(VALUE))
#define SBB_SI_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X1B, 0XB6 # sbbw " _(VALUE) "(%bp), %si")\
	CMT_ASM(".short " _(VALUE))
#define SBB_SI_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X1B, 0XB4 # sbbw " _(VALUE) "(%si), %si")\
	CMT_ASM(".short " _(VALUE))
#define SBB_SI_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X1B, 0XB5 # sbbw " _(VALUE) "(%di), %si")\
	CMT_ASM(".short " _(VALUE))

#define SBB_BP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0XA8 # sbbw " _(VALUE) "(%eax), %bp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0XAB # sbbw " _(VALUE) "(%ebx), %bp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0XA9 # sbbw " _(VALUE) "(%ecx), %bp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0XAA # sbbw " _(VALUE) "(%edx), %bp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0XAF # sbbw " _(VALUE) "(%edi), %bp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0XAE # sbbw " _(VALUE) "(%esi), %bp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0XAD # sbbw " _(VALUE) "(%ebp), %bp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0XAC, 0X24 # sbbw " _(VALUE) "(%esp), %bp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BP_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X1B, 0XAF # sbbw " _(VALUE) "(%bx), %bp")\
	CMT_ASM(".short " _(VALUE))
#define SBB_BP_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X1B, 0XAE # sbbw " _(VALUE) "(%bp), %bp")\
	CMT_ASM(".short " _(VALUE))
#define SBB_BP_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X1B, 0XAC # sbbw " _(VALUE) "(%si), %bp")\
	CMT_ASM(".short " _(VALUE))
#define SBB_BP_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X1B, 0XAD # sbbw " _(VALUE) "(%di), %bp")\
	CMT_ASM(".short " _(VALUE))

#define SBB_SP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0XA0 # sbbw " _(VALUE) "(%eax), %sp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0XA3 # sbbw " _(VALUE) "(%ebx), %sp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0XA1 # sbbw " _(VALUE) "(%ecx), %sp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0XA2 # sbbw " _(VALUE) "(%edx), %sp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0XA7 # sbbw " _(VALUE) "(%edi), %sp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0XA6 # sbbw " _(VALUE) "(%esi), %sp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0XA5 # sbbw " _(VALUE) "(%ebp), %sp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0XA4, 0X24 # sbbw " _(VALUE) "(%esp), %sp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SP_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X1B, 0XA7 # sbbw " _(VALUE) "(%bx), %sp")\
	CMT_ASM(".short " _(VALUE))
#define SBB_SP_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X1B, 0XA6 # sbbw " _(VALUE) "(%bp), %sp")\
	CMT_ASM(".short " _(VALUE))
#define SBB_SP_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X1B, 0XA4 # sbbw " _(VALUE) "(%si), %sp")\
	CMT_ASM(".short " _(VALUE))
#define SBB_SP_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X1B, 0XA5 # sbbw " _(VALUE) "(%di), %sp")\
	CMT_ASM(".short " _(VALUE))

#define SBB_AX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0X80 # sbbw %ax, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0X83 # sbbw %ax, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0X81 # sbbw %ax, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0X82 # sbbw %ax, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0X87 # sbbw %ax, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0X86 # sbbw %ax, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0X85 # sbbw %ax, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0X84, 0X24 # sbbw %ax, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X19, 0X87 # sbbw %ax, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define SBB_AX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X19, 0X86 # sbbw %ax, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define SBB_AX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X19, 0X84 # sbbw %ax, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define SBB_AX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X19, 0X85 # sbbw %ax, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define SBB_BX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0X98 # sbbw %bx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0X9B # sbbw %bx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0X99 # sbbw %bx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0X9A # sbbw %bx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0X9F # sbbw %bx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0X9E # sbbw %bx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0X9D # sbbw %bx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0X9C, 0X24 # sbbw %bx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X19, 0X9F # sbbw %bx, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define SBB_BX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X19, 0X9E # sbbw %bx, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define SBB_BX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X19, 0X9C # sbbw %bx, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define SBB_BX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X19, 0X9D # sbbw %bx, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define SBB_CX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0X88 # sbbw %cx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0X8B # sbbw %cx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0X89 # sbbw %cx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0X8A # sbbw %cx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0X8F # sbbw %cx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0X8E # sbbw %cx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0X8D # sbbw %cx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0X8C, 0X24 # sbbw %cx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X19, 0X8F # sbbw %cx, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define SBB_CX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X19, 0X8E # sbbw %cx, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define SBB_CX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X19, 0X8C # sbbw %cx, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define SBB_CX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X19, 0X8D # sbbw %cx, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define SBB_DX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0X90 # sbbw %dx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0X93 # sbbw %dx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0X91 # sbbw %dx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0X92 # sbbw %dx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0X97 # sbbw %dx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0X96 # sbbw %dx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0X95 # sbbw %dx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0X94, 0X24 # sbbw %dx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X19, 0X97 # sbbw %dx, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define SBB_DX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X19, 0X96 # sbbw %dx, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define SBB_DX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X19, 0X94 # sbbw %dx, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define SBB_DX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X19, 0X95 # sbbw %dx, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define SBB_DI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0XB8 # sbbw %di, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0XBB # sbbw %di, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0XB9 # sbbw %di, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0XBA # sbbw %di, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0XBF # sbbw %di, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0XBE # sbbw %di, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0XBD # sbbw %di, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0XBC, 0X24 # sbbw %di, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DI_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X19, 0XBF # sbbw %di, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define SBB_DI_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X19, 0XBE # sbbw %di, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define SBB_DI_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X19, 0XBC # sbbw %di, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define SBB_DI_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X19, 0XBD # sbbw %di, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define SBB_SI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0XB0 # sbbw %si, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0XB3 # sbbw %si, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0XB1 # sbbw %si, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0XB2 # sbbw %si, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0XB7 # sbbw %si, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0XB6 # sbbw %si, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0XB5 # sbbw %si, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0XB4, 0X24 # sbbw %si, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SI_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X19, 0XB7 # sbbw %si, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define SBB_SI_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X19, 0XB6 # sbbw %si, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define SBB_SI_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X19, 0XB4 # sbbw %si, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define SBB_SI_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X19, 0XB5 # sbbw %si, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define SBB_BP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0XA8 # sbbw %bp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0XAB # sbbw %bp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0XA9 # sbbw %bp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0XAA # sbbw %bp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0XAF # sbbw %bp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0XAE # sbbw %bp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0XAD # sbbw %bp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0XAC, 0X24 # sbbw %bp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BP_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X19, 0XAF # sbbw %bp, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define SBB_BP_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X19, 0XAE # sbbw %bp, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define SBB_BP_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X19, 0XAC # sbbw %bp, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define SBB_BP_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X19, 0XAD # sbbw %bp, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define SBB_SP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0XA0 # sbbw %sp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0XA3 # sbbw %sp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0XA1 # sbbw %sp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0XA2 # sbbw %sp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0XA7 # sbbw %sp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0XA6 # sbbw %sp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0XA5 # sbbw %sp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0XA4, 0X24 # sbbw %sp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SP_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X19, 0XA7 # sbbw %sp, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define SBB_SP_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X19, 0XA6 # sbbw %sp, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define SBB_SP_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X19, 0XA4 # sbbw %sp, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define SBB_SP_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X19, 0XA5 # sbbw %sp, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define SBB_AX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0X04, 0X25 # sbbw (" _(VALUE) "), %ax")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0X1C, 0X25 # sbbw (" _(VALUE) "), %bx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0X0C, 0X25 # sbbw (" _(VALUE) "), %cx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0X14, 0X25 # sbbw (" _(VALUE) "), %dx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0X3C, 0X25 # sbbw (" _(VALUE) "), %di")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0X34, 0X25 # sbbw (" _(VALUE) "), %si")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0X2C, 0X25 # sbbw (" _(VALUE) "), %bp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0X24, 0X25 # sbbw (" _(VALUE) "), %sp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8W_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X1B, 0X04, 0X25 # sbbw (" _(VALUE) "), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9W_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X1B, 0X0C, 0X25 # sbbw (" _(VALUE) "), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10W_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X1B, 0X14, 0X25 # sbbw (" _(VALUE) "), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11W_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X1B, 0X1C, 0X25 # sbbw (" _(VALUE) "), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12W_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X1B, 0X24, 0X25 # sbbw (" _(VALUE) "), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13W_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X1B, 0X2C, 0X25 # sbbw (" _(VALUE) "), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14W_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X1B, 0X34, 0X25 # sbbw (" _(VALUE) "), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15W_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X1B, 0X3C, 0X25 # sbbw (" _(VALUE) "), %r15w")\
	CMT_ASM(".long " _(VALUE))

#define SBB_AX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0X04, 0X25 # sbbw %ax, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0X1C, 0X25 # sbbw %bx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0X0C, 0X25 # sbbw %cx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0X14, 0X25 # sbbw %dx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0X3C, 0X25 # sbbw %di, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0X34, 0X25 # sbbw %si, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0X2C, 0X25 # sbbw %bp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0X24, 0X25 # sbbw %sp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8W_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X19, 0X04, 0X25 # sbbw %r8w, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9W_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X19, 0X0C, 0X25 # sbbw %r9w, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10W_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X19, 0X14, 0X25 # sbbw %r10w, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11W_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X19, 0X1C, 0X25 # sbbw %r11w, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12W_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X19, 0X24, 0X25 # sbbw %r12w, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13W_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X19, 0X2C, 0X25 # sbbw %r13w, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14W_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X19, 0X34, 0X25 # sbbw %r14w, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15W_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X19, 0X3C, 0X25 # sbbw %r15w, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))

#define SBB_AX_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X1B, 0X00 # sbbw (%rax), %ax")
#define SBB_AX_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X1B, 0X03 # sbbw (%rbx), %ax")
#define SBB_AX_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X1B, 0X01 # sbbw (%rcx), %ax")
#define SBB_AX_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X1B, 0X02 # sbbw (%rdx), %ax")
#define SBB_AX_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X1B, 0X07 # sbbw (%rdi), %ax")
#define SBB_AX_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X1B, 0X06 # sbbw (%rsi), %ax")
#define SBB_AX_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X1B, 0X45, 0X00 # sbbw (%rbp), %ax")
#define SBB_AX_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X1B, 0X04, 0X24 # sbbw (%rsp), %ax")
#define SBB_AX_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X1B, 0X00 # sbbw (%r8), %ax")
#define SBB_AX_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X1B, 0X01 # sbbw (%r9), %ax")
#define SBB_AX_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X1B, 0X02 # sbbw (%r10), %ax")
#define SBB_AX_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X1B, 0X03 # sbbw (%r11), %ax")
#define SBB_AX_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X1B, 0X04, 0X24 # sbbw (%r12), %ax")
#define SBB_AX_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X1B, 0X45, 0X00 # sbbw (%r13), %ax")
#define SBB_AX_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X1B, 0X06 # sbbw (%r14), %ax")
#define SBB_AX_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X1B, 0X07 # sbbw (%r15), %ax")
#define SBB_AX_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X00 # sbbw (%eax), %ax")
#define SBB_AX_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X03 # sbbw (%ebx), %ax")
#define SBB_AX_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X01 # sbbw (%ecx), %ax")
#define SBB_AX_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X02 # sbbw (%edx), %ax")
#define SBB_AX_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X07 # sbbw (%edi), %ax")
#define SBB_AX_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X06 # sbbw (%esi), %ax")
#define SBB_AX_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X45, 0X00 # sbbw (%ebp), %ax")
#define SBB_AX_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X04, 0X24 # sbbw (%esp), %ax")

#define SBB_BX_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X1B, 0X18 # sbbw (%rax), %bx")
#define SBB_BX_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X1B, 0X1B # sbbw (%rbx), %bx")
#define SBB_BX_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X1B, 0X19 # sbbw (%rcx), %bx")
#define SBB_BX_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X1B, 0X1A # sbbw (%rdx), %bx")
#define SBB_BX_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X1B, 0X1F # sbbw (%rdi), %bx")
#define SBB_BX_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X1B, 0X1E # sbbw (%rsi), %bx")
#define SBB_BX_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X1B, 0X5D, 0X00 # sbbw (%rbp), %bx")
#define SBB_BX_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X1B, 0X1C, 0X24 # sbbw (%rsp), %bx")
#define SBB_BX_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X1B, 0X18 # sbbw (%r8), %bx")
#define SBB_BX_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X1B, 0X19 # sbbw (%r9), %bx")
#define SBB_BX_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X1B, 0X1A # sbbw (%r10), %bx")
#define SBB_BX_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X1B, 0X1B # sbbw (%r11), %bx")
#define SBB_BX_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X1B, 0X1C, 0X24 # sbbw (%r12), %bx")
#define SBB_BX_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X1B, 0X5D, 0X00 # sbbw (%r13), %bx")
#define SBB_BX_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X1B, 0X1E # sbbw (%r14), %bx")
#define SBB_BX_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X1B, 0X1F # sbbw (%r15), %bx")
#define SBB_BX_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X18 # sbbw (%eax), %bx")
#define SBB_BX_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X1B # sbbw (%ebx), %bx")
#define SBB_BX_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X19 # sbbw (%ecx), %bx")
#define SBB_BX_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X1A # sbbw (%edx), %bx")
#define SBB_BX_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X1F # sbbw (%edi), %bx")
#define SBB_BX_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X1E # sbbw (%esi), %bx")
#define SBB_BX_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X5D, 0X00 # sbbw (%ebp), %bx")
#define SBB_BX_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X1C, 0X24 # sbbw (%esp), %bx")

#define SBB_CX_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X1B, 0X08 # sbbw (%rax), %cx")
#define SBB_CX_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X1B, 0X0B # sbbw (%rbx), %cx")
#define SBB_CX_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X1B, 0X09 # sbbw (%rcx), %cx")
#define SBB_CX_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X1B, 0X0A # sbbw (%rdx), %cx")
#define SBB_CX_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X1B, 0X0F # sbbw (%rdi), %cx")
#define SBB_CX_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X1B, 0X0E # sbbw (%rsi), %cx")
#define SBB_CX_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X1B, 0X4D, 0X00 # sbbw (%rbp), %cx")
#define SBB_CX_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X1B, 0X0C, 0X24 # sbbw (%rsp), %cx")
#define SBB_CX_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X1B, 0X08 # sbbw (%r8), %cx")
#define SBB_CX_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X1B, 0X09 # sbbw (%r9), %cx")
#define SBB_CX_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X1B, 0X0A # sbbw (%r10), %cx")
#define SBB_CX_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X1B, 0X0B # sbbw (%r11), %cx")
#define SBB_CX_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X1B, 0X0C, 0X24 # sbbw (%r12), %cx")
#define SBB_CX_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X1B, 0X4D, 0X00 # sbbw (%r13), %cx")
#define SBB_CX_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X1B, 0X0E # sbbw (%r14), %cx")
#define SBB_CX_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X1B, 0X0F # sbbw (%r15), %cx")
#define SBB_CX_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X08 # sbbw (%eax), %cx")
#define SBB_CX_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X0B # sbbw (%ebx), %cx")
#define SBB_CX_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X09 # sbbw (%ecx), %cx")
#define SBB_CX_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X0A # sbbw (%edx), %cx")
#define SBB_CX_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X0F # sbbw (%edi), %cx")
#define SBB_CX_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X0E # sbbw (%esi), %cx")
#define SBB_CX_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X4D, 0X00 # sbbw (%ebp), %cx")
#define SBB_CX_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X0C, 0X24 # sbbw (%esp), %cx")

#define SBB_DX_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X1B, 0X10 # sbbw (%rax), %dx")
#define SBB_DX_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X1B, 0X13 # sbbw (%rbx), %dx")
#define SBB_DX_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X1B, 0X11 # sbbw (%rcx), %dx")
#define SBB_DX_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X1B, 0X12 # sbbw (%rdx), %dx")
#define SBB_DX_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X1B, 0X17 # sbbw (%rdi), %dx")
#define SBB_DX_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X1B, 0X16 # sbbw (%rsi), %dx")
#define SBB_DX_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X1B, 0X55, 0X00 # sbbw (%rbp), %dx")
#define SBB_DX_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X1B, 0X14, 0X24 # sbbw (%rsp), %dx")
#define SBB_DX_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X1B, 0X10 # sbbw (%r8), %dx")
#define SBB_DX_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X1B, 0X11 # sbbw (%r9), %dx")
#define SBB_DX_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X1B, 0X12 # sbbw (%r10), %dx")
#define SBB_DX_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X1B, 0X13 # sbbw (%r11), %dx")
#define SBB_DX_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X1B, 0X14, 0X24 # sbbw (%r12), %dx")
#define SBB_DX_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X1B, 0X55, 0X00 # sbbw (%r13), %dx")
#define SBB_DX_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X1B, 0X16 # sbbw (%r14), %dx")
#define SBB_DX_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X1B, 0X17 # sbbw (%r15), %dx")
#define SBB_DX_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X10 # sbbw (%eax), %dx")
#define SBB_DX_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X13 # sbbw (%ebx), %dx")
#define SBB_DX_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X11 # sbbw (%ecx), %dx")
#define SBB_DX_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X12 # sbbw (%edx), %dx")
#define SBB_DX_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X17 # sbbw (%edi), %dx")
#define SBB_DX_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X16 # sbbw (%esi), %dx")
#define SBB_DX_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X55, 0X00 # sbbw (%ebp), %dx")
#define SBB_DX_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X14, 0X24 # sbbw (%esp), %dx")

#define SBB_DI_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X1B, 0X38 # sbbw (%rax), %di")
#define SBB_DI_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X1B, 0X3B # sbbw (%rbx), %di")
#define SBB_DI_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X1B, 0X39 # sbbw (%rcx), %di")
#define SBB_DI_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X1B, 0X3A # sbbw (%rdx), %di")
#define SBB_DI_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X1B, 0X3F # sbbw (%rdi), %di")
#define SBB_DI_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X1B, 0X3E # sbbw (%rsi), %di")
#define SBB_DI_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X1B, 0X7D, 0X00 # sbbw (%rbp), %di")
#define SBB_DI_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X1B, 0X3C, 0X24 # sbbw (%rsp), %di")
#define SBB_DI_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X1B, 0X38 # sbbw (%r8), %di")
#define SBB_DI_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X1B, 0X39 # sbbw (%r9), %di")
#define SBB_DI_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X1B, 0X3A # sbbw (%r10), %di")
#define SBB_DI_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X1B, 0X3B # sbbw (%r11), %di")
#define SBB_DI_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X1B, 0X3C, 0X24 # sbbw (%r12), %di")
#define SBB_DI_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X1B, 0X7D, 0X00 # sbbw (%r13), %di")
#define SBB_DI_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X1B, 0X3E # sbbw (%r14), %di")
#define SBB_DI_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X1B, 0X3F # sbbw (%r15), %di")
#define SBB_DI_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X38 # sbbw (%eax), %di")
#define SBB_DI_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X3B # sbbw (%ebx), %di")
#define SBB_DI_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X39 # sbbw (%ecx), %di")
#define SBB_DI_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X3A # sbbw (%edx), %di")
#define SBB_DI_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X3F # sbbw (%edi), %di")
#define SBB_DI_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X3E # sbbw (%esi), %di")
#define SBB_DI_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X7D, 0X00 # sbbw (%ebp), %di")
#define SBB_DI_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X3C, 0X24 # sbbw (%esp), %di")

#define SBB_SI_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X1B, 0X30 # sbbw (%rax), %si")
#define SBB_SI_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X1B, 0X33 # sbbw (%rbx), %si")
#define SBB_SI_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X1B, 0X31 # sbbw (%rcx), %si")
#define SBB_SI_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X1B, 0X32 # sbbw (%rdx), %si")
#define SBB_SI_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X1B, 0X37 # sbbw (%rdi), %si")
#define SBB_SI_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X1B, 0X36 # sbbw (%rsi), %si")
#define SBB_SI_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X1B, 0X75, 0X00 # sbbw (%rbp), %si")
#define SBB_SI_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X1B, 0X34, 0X24 # sbbw (%rsp), %si")
#define SBB_SI_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X1B, 0X30 # sbbw (%r8), %si")
#define SBB_SI_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X1B, 0X31 # sbbw (%r9), %si")
#define SBB_SI_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X1B, 0X32 # sbbw (%r10), %si")
#define SBB_SI_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X1B, 0X33 # sbbw (%r11), %si")
#define SBB_SI_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X1B, 0X34, 0X24 # sbbw (%r12), %si")
#define SBB_SI_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X1B, 0X75, 0X00 # sbbw (%r13), %si")
#define SBB_SI_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X1B, 0X36 # sbbw (%r14), %si")
#define SBB_SI_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X1B, 0X37 # sbbw (%r15), %si")
#define SBB_SI_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X30 # sbbw (%eax), %si")
#define SBB_SI_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X33 # sbbw (%ebx), %si")
#define SBB_SI_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X31 # sbbw (%ecx), %si")
#define SBB_SI_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X32 # sbbw (%edx), %si")
#define SBB_SI_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X37 # sbbw (%edi), %si")
#define SBB_SI_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X36 # sbbw (%esi), %si")
#define SBB_SI_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X75, 0X00 # sbbw (%ebp), %si")
#define SBB_SI_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X34, 0X24 # sbbw (%esp), %si")

#define SBB_BP_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X1B, 0X28 # sbbw (%rax), %bp")
#define SBB_BP_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X1B, 0X2B # sbbw (%rbx), %bp")
#define SBB_BP_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X1B, 0X29 # sbbw (%rcx), %bp")
#define SBB_BP_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X1B, 0X2A # sbbw (%rdx), %bp")
#define SBB_BP_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X1B, 0X2F # sbbw (%rdi), %bp")
#define SBB_BP_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X1B, 0X2E # sbbw (%rsi), %bp")
#define SBB_BP_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X1B, 0X6D, 0X00 # sbbw (%rbp), %bp")
#define SBB_BP_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X1B, 0X2C, 0X24 # sbbw (%rsp), %bp")
#define SBB_BP_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X1B, 0X28 # sbbw (%r8), %bp")
#define SBB_BP_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X1B, 0X29 # sbbw (%r9), %bp")
#define SBB_BP_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X1B, 0X2A # sbbw (%r10), %bp")
#define SBB_BP_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X1B, 0X2B # sbbw (%r11), %bp")
#define SBB_BP_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X1B, 0X2C, 0X24 # sbbw (%r12), %bp")
#define SBB_BP_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X1B, 0X6D, 0X00 # sbbw (%r13), %bp")
#define SBB_BP_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X1B, 0X2E # sbbw (%r14), %bp")
#define SBB_BP_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X1B, 0X2F # sbbw (%r15), %bp")
#define SBB_BP_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X28 # sbbw (%eax), %bp")
#define SBB_BP_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X2B # sbbw (%ebx), %bp")
#define SBB_BP_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X29 # sbbw (%ecx), %bp")
#define SBB_BP_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X2A # sbbw (%edx), %bp")
#define SBB_BP_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X2F # sbbw (%edi), %bp")
#define SBB_BP_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X2E # sbbw (%esi), %bp")
#define SBB_BP_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X6D, 0X00 # sbbw (%ebp), %bp")
#define SBB_BP_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X2C, 0X24 # sbbw (%esp), %bp")

#define SBB_SP_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X1B, 0X20 # sbbw (%rax), %sp")
#define SBB_SP_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X1B, 0X23 # sbbw (%rbx), %sp")
#define SBB_SP_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X1B, 0X21 # sbbw (%rcx), %sp")
#define SBB_SP_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X1B, 0X22 # sbbw (%rdx), %sp")
#define SBB_SP_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X1B, 0X27 # sbbw (%rdi), %sp")
#define SBB_SP_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X1B, 0X26 # sbbw (%rsi), %sp")
#define SBB_SP_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X1B, 0X65, 0X00 # sbbw (%rbp), %sp")
#define SBB_SP_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X1B, 0X24, 0X24 # sbbw (%rsp), %sp")
#define SBB_SP_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X1B, 0X20 # sbbw (%r8), %sp")
#define SBB_SP_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X1B, 0X21 # sbbw (%r9), %sp")
#define SBB_SP_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X1B, 0X22 # sbbw (%r10), %sp")
#define SBB_SP_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X1B, 0X23 # sbbw (%r11), %sp")
#define SBB_SP_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X1B, 0X24, 0X24 # sbbw (%r12), %sp")
#define SBB_SP_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X1B, 0X65, 0X00 # sbbw (%r13), %sp")
#define SBB_SP_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X1B, 0X26 # sbbw (%r14), %sp")
#define SBB_SP_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X1B, 0X27 # sbbw (%r15), %sp")
#define SBB_SP_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X20 # sbbw (%eax), %sp")
#define SBB_SP_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X23 # sbbw (%ebx), %sp")
#define SBB_SP_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X21 # sbbw (%ecx), %sp")
#define SBB_SP_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X22 # sbbw (%edx), %sp")
#define SBB_SP_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X27 # sbbw (%edi), %sp")
#define SBB_SP_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X26 # sbbw (%esi), %sp")
#define SBB_SP_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X65, 0X00 # sbbw (%ebp), %sp")
#define SBB_SP_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X24, 0X24 # sbbw (%esp), %sp")

#define SBB_R8W_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X1B, 0X00 # sbbw (%rax), %r8w")
#define SBB_R8W_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X1B, 0X03 # sbbw (%rbx), %r8w")
#define SBB_R8W_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X1B, 0X01 # sbbw (%rcx), %r8w")
#define SBB_R8W_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X1B, 0X02 # sbbw (%rdx), %r8w")
#define SBB_R8W_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X1B, 0X07 # sbbw (%rdi), %r8w")
#define SBB_R8W_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X1B, 0X06 # sbbw (%rsi), %r8w")
#define SBB_R8W_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X1B, 0X45, 0X00 # sbbw (%rbp), %r8w")
#define SBB_R8W_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X1B, 0X04, 0X24 # sbbw (%rsp), %r8w")
#define SBB_R8W_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X1B, 0X00 # sbbw (%r8), %r8w")
#define SBB_R8W_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X1B, 0X01 # sbbw (%r9), %r8w")
#define SBB_R8W_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X1B, 0X02 # sbbw (%r10), %r8w")
#define SBB_R8W_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X1B, 0X03 # sbbw (%r11), %r8w")
#define SBB_R8W_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X1B, 0X04, 0X24 # sbbw (%r12), %r8w")
#define SBB_R8W_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X1B, 0X45, 0X00 # sbbw (%r13), %r8w")
#define SBB_R8W_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X1B, 0X06 # sbbw (%r14), %r8w")
#define SBB_R8W_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X1B, 0X07 # sbbw (%r15), %r8w")
#define SBB_R8W_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0X00 # sbbw (%eax), %r8w")
#define SBB_R8W_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0X03 # sbbw (%ebx), %r8w")
#define SBB_R8W_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0X01 # sbbw (%ecx), %r8w")
#define SBB_R8W_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0X02 # sbbw (%edx), %r8w")
#define SBB_R8W_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0X07 # sbbw (%edi), %r8w")
#define SBB_R8W_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0X06 # sbbw (%esi), %r8w")
#define SBB_R8W_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0X45, 0X00 # sbbw (%ebp), %r8w")
#define SBB_R8W_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0X04, 0X24 # sbbw (%esp), %r8w")

#define SBB_R9W_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X1B, 0X08 # sbbw (%rax), %r9w")
#define SBB_R9W_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X1B, 0X0B # sbbw (%rbx), %r9w")
#define SBB_R9W_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X1B, 0X09 # sbbw (%rcx), %r9w")
#define SBB_R9W_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X1B, 0X0A # sbbw (%rdx), %r9w")
#define SBB_R9W_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X1B, 0X0F # sbbw (%rdi), %r9w")
#define SBB_R9W_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X1B, 0X0E # sbbw (%rsi), %r9w")
#define SBB_R9W_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X1B, 0X4D, 0X00 # sbbw (%rbp), %r9w")
#define SBB_R9W_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X1B, 0X0C, 0X24 # sbbw (%rsp), %r9w")
#define SBB_R9W_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X1B, 0X08 # sbbw (%r8), %r9w")
#define SBB_R9W_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X1B, 0X09 # sbbw (%r9), %r9w")
#define SBB_R9W_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X1B, 0X0A # sbbw (%r10), %r9w")
#define SBB_R9W_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X1B, 0X0B # sbbw (%r11), %r9w")
#define SBB_R9W_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X1B, 0X0C, 0X24 # sbbw (%r12), %r9w")
#define SBB_R9W_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X1B, 0X4D, 0X00 # sbbw (%r13), %r9w")
#define SBB_R9W_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X1B, 0X0E # sbbw (%r14), %r9w")
#define SBB_R9W_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X1B, 0X0F # sbbw (%r15), %r9w")
#define SBB_R9W_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0X08 # sbbw (%eax), %r9w")
#define SBB_R9W_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0X0B # sbbw (%ebx), %r9w")
#define SBB_R9W_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0X09 # sbbw (%ecx), %r9w")
#define SBB_R9W_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0X0A # sbbw (%edx), %r9w")
#define SBB_R9W_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0X0F # sbbw (%edi), %r9w")
#define SBB_R9W_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0X0E # sbbw (%esi), %r9w")
#define SBB_R9W_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0X4D, 0X00 # sbbw (%ebp), %r9w")
#define SBB_R9W_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0X0C, 0X24 # sbbw (%esp), %r9w")

#define SBB_R10W_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X1B, 0X10 # sbbw (%rax), %r10w")
#define SBB_R10W_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X1B, 0X13 # sbbw (%rbx), %r10w")
#define SBB_R10W_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X1B, 0X11 # sbbw (%rcx), %r10w")
#define SBB_R10W_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X1B, 0X12 # sbbw (%rdx), %r10w")
#define SBB_R10W_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X1B, 0X17 # sbbw (%rdi), %r10w")
#define SBB_R10W_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X1B, 0X16 # sbbw (%rsi), %r10w")
#define SBB_R10W_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X1B, 0X55, 0X00 # sbbw (%rbp), %r10w")
#define SBB_R10W_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X1B, 0X14, 0X24 # sbbw (%rsp), %r10w")
#define SBB_R10W_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X1B, 0X10 # sbbw (%r8), %r10w")
#define SBB_R10W_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X1B, 0X11 # sbbw (%r9), %r10w")
#define SBB_R10W_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X1B, 0X12 # sbbw (%r10), %r10w")
#define SBB_R10W_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X1B, 0X13 # sbbw (%r11), %r10w")
#define SBB_R10W_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X1B, 0X14, 0X24 # sbbw (%r12), %r10w")
#define SBB_R10W_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X1B, 0X55, 0X00 # sbbw (%r13), %r10w")
#define SBB_R10W_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X1B, 0X16 # sbbw (%r14), %r10w")
#define SBB_R10W_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X1B, 0X17 # sbbw (%r15), %r10w")
#define SBB_R10W_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0X10 # sbbw (%eax), %r10w")
#define SBB_R10W_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0X13 # sbbw (%ebx), %r10w")
#define SBB_R10W_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0X11 # sbbw (%ecx), %r10w")
#define SBB_R10W_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0X12 # sbbw (%edx), %r10w")
#define SBB_R10W_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0X17 # sbbw (%edi), %r10w")
#define SBB_R10W_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0X16 # sbbw (%esi), %r10w")
#define SBB_R10W_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0X55, 0X00 # sbbw (%ebp), %r10w")
#define SBB_R10W_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0X14, 0X24 # sbbw (%esp), %r10w")

#define SBB_R11W_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X1B, 0X18 # sbbw (%rax), %r11w")
#define SBB_R11W_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X1B, 0X1B # sbbw (%rbx), %r11w")
#define SBB_R11W_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X1B, 0X19 # sbbw (%rcx), %r11w")
#define SBB_R11W_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X1B, 0X1A # sbbw (%rdx), %r11w")
#define SBB_R11W_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X1B, 0X1F # sbbw (%rdi), %r11w")
#define SBB_R11W_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X1B, 0X1E # sbbw (%rsi), %r11w")
#define SBB_R11W_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X1B, 0X5D, 0X00 # sbbw (%rbp), %r11w")
#define SBB_R11W_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X1B, 0X1C, 0X24 # sbbw (%rsp), %r11w")
#define SBB_R11W_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X1B, 0X18 # sbbw (%r8), %r11w")
#define SBB_R11W_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X1B, 0X19 # sbbw (%r9), %r11w")
#define SBB_R11W_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X1B, 0X1A # sbbw (%r10), %r11w")
#define SBB_R11W_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X1B, 0X1B # sbbw (%r11), %r11w")
#define SBB_R11W_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X1B, 0X1C, 0X24 # sbbw (%r12), %r11w")
#define SBB_R11W_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X1B, 0X5D, 0X00 # sbbw (%r13), %r11w")
#define SBB_R11W_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X1B, 0X1E # sbbw (%r14), %r11w")
#define SBB_R11W_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X1B, 0X1F # sbbw (%r15), %r11w")
#define SBB_R11W_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0X18 # sbbw (%eax), %r11w")
#define SBB_R11W_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0X1B # sbbw (%ebx), %r11w")
#define SBB_R11W_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0X19 # sbbw (%ecx), %r11w")
#define SBB_R11W_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0X1A # sbbw (%edx), %r11w")
#define SBB_R11W_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0X1F # sbbw (%edi), %r11w")
#define SBB_R11W_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0X1E # sbbw (%esi), %r11w")
#define SBB_R11W_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0X5D, 0X00 # sbbw (%ebp), %r11w")
#define SBB_R11W_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0X1C, 0X24 # sbbw (%esp), %r11w")

#define SBB_R12W_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X1B, 0X20 # sbbw (%rax), %r12w")
#define SBB_R12W_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X1B, 0X23 # sbbw (%rbx), %r12w")
#define SBB_R12W_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X1B, 0X21 # sbbw (%rcx), %r12w")
#define SBB_R12W_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X1B, 0X22 # sbbw (%rdx), %r12w")
#define SBB_R12W_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X1B, 0X27 # sbbw (%rdi), %r12w")
#define SBB_R12W_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X1B, 0X26 # sbbw (%rsi), %r12w")
#define SBB_R12W_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X1B, 0X65, 0X00 # sbbw (%rbp), %r12w")
#define SBB_R12W_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X1B, 0X24, 0X24 # sbbw (%rsp), %r12w")
#define SBB_R12W_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X1B, 0X20 # sbbw (%r8), %r12w")
#define SBB_R12W_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X1B, 0X21 # sbbw (%r9), %r12w")
#define SBB_R12W_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X1B, 0X22 # sbbw (%r10), %r12w")
#define SBB_R12W_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X1B, 0X23 # sbbw (%r11), %r12w")
#define SBB_R12W_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X1B, 0X24, 0X24 # sbbw (%r12), %r12w")
#define SBB_R12W_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X1B, 0X65, 0X00 # sbbw (%r13), %r12w")
#define SBB_R12W_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X1B, 0X26 # sbbw (%r14), %r12w")
#define SBB_R12W_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X1B, 0X27 # sbbw (%r15), %r12w")
#define SBB_R12W_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0X20 # sbbw (%eax), %r12w")
#define SBB_R12W_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0X23 # sbbw (%ebx), %r12w")
#define SBB_R12W_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0X21 # sbbw (%ecx), %r12w")
#define SBB_R12W_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0X22 # sbbw (%edx), %r12w")
#define SBB_R12W_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0X27 # sbbw (%edi), %r12w")
#define SBB_R12W_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0X26 # sbbw (%esi), %r12w")
#define SBB_R12W_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0X65, 0X00 # sbbw (%ebp), %r12w")
#define SBB_R12W_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0X24, 0X24 # sbbw (%esp), %r12w")

#define SBB_R13W_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X1B, 0X28 # sbbw (%rax), %r13w")
#define SBB_R13W_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X1B, 0X2B # sbbw (%rbx), %r13w")
#define SBB_R13W_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X1B, 0X29 # sbbw (%rcx), %r13w")
#define SBB_R13W_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X1B, 0X2A # sbbw (%rdx), %r13w")
#define SBB_R13W_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X1B, 0X2F # sbbw (%rdi), %r13w")
#define SBB_R13W_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X1B, 0X2E # sbbw (%rsi), %r13w")
#define SBB_R13W_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X1B, 0X6D, 0X00 # sbbw (%rbp), %r13w")
#define SBB_R13W_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X1B, 0X2C, 0X24 # sbbw (%rsp), %r13w")
#define SBB_R13W_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X1B, 0X28 # sbbw (%r8), %r13w")
#define SBB_R13W_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X1B, 0X29 # sbbw (%r9), %r13w")
#define SBB_R13W_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X1B, 0X2A # sbbw (%r10), %r13w")
#define SBB_R13W_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X1B, 0X2B # sbbw (%r11), %r13w")
#define SBB_R13W_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X1B, 0X2C, 0X24 # sbbw (%r12), %r13w")
#define SBB_R13W_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X1B, 0X6D, 0X00 # sbbw (%r13), %r13w")
#define SBB_R13W_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X1B, 0X2E # sbbw (%r14), %r13w")
#define SBB_R13W_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X1B, 0X2F # sbbw (%r15), %r13w")
#define SBB_R13W_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0X28 # sbbw (%eax), %r13w")
#define SBB_R13W_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0X2B # sbbw (%ebx), %r13w")
#define SBB_R13W_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0X29 # sbbw (%ecx), %r13w")
#define SBB_R13W_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0X2A # sbbw (%edx), %r13w")
#define SBB_R13W_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0X2F # sbbw (%edi), %r13w")
#define SBB_R13W_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0X2E # sbbw (%esi), %r13w")
#define SBB_R13W_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0X6D, 0X00 # sbbw (%ebp), %r13w")
#define SBB_R13W_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0X2C, 0X24 # sbbw (%esp), %r13w")

#define SBB_R14W_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X1B, 0X30 # sbbw (%rax), %r14w")
#define SBB_R14W_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X1B, 0X33 # sbbw (%rbx), %r14w")
#define SBB_R14W_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X1B, 0X31 # sbbw (%rcx), %r14w")
#define SBB_R14W_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X1B, 0X32 # sbbw (%rdx), %r14w")
#define SBB_R14W_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X1B, 0X37 # sbbw (%rdi), %r14w")
#define SBB_R14W_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X1B, 0X36 # sbbw (%rsi), %r14w")
#define SBB_R14W_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X1B, 0X75, 0X00 # sbbw (%rbp), %r14w")
#define SBB_R14W_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X1B, 0X34, 0X24 # sbbw (%rsp), %r14w")
#define SBB_R14W_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X1B, 0X30 # sbbw (%r8), %r14w")
#define SBB_R14W_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X1B, 0X31 # sbbw (%r9), %r14w")
#define SBB_R14W_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X1B, 0X32 # sbbw (%r10), %r14w")
#define SBB_R14W_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X1B, 0X33 # sbbw (%r11), %r14w")
#define SBB_R14W_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X1B, 0X34, 0X24 # sbbw (%r12), %r14w")
#define SBB_R14W_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X1B, 0X75, 0X00 # sbbw (%r13), %r14w")
#define SBB_R14W_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X1B, 0X36 # sbbw (%r14), %r14w")
#define SBB_R14W_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X1B, 0X37 # sbbw (%r15), %r14w")
#define SBB_R14W_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0X30 # sbbw (%eax), %r14w")
#define SBB_R14W_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0X33 # sbbw (%ebx), %r14w")
#define SBB_R14W_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0X31 # sbbw (%ecx), %r14w")
#define SBB_R14W_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0X32 # sbbw (%edx), %r14w")
#define SBB_R14W_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0X37 # sbbw (%edi), %r14w")
#define SBB_R14W_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0X36 # sbbw (%esi), %r14w")
#define SBB_R14W_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0X75, 0X00 # sbbw (%ebp), %r14w")
#define SBB_R14W_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0X34, 0X24 # sbbw (%esp), %r14w")

#define SBB_R15W_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X1B, 0X38 # sbbw (%rax), %r15w")
#define SBB_R15W_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X1B, 0X3B # sbbw (%rbx), %r15w")
#define SBB_R15W_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X1B, 0X39 # sbbw (%rcx), %r15w")
#define SBB_R15W_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X1B, 0X3A # sbbw (%rdx), %r15w")
#define SBB_R15W_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X1B, 0X3F # sbbw (%rdi), %r15w")
#define SBB_R15W_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X1B, 0X3E # sbbw (%rsi), %r15w")
#define SBB_R15W_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X1B, 0X7D, 0X00 # sbbw (%rbp), %r15w")
#define SBB_R15W_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X1B, 0X3C, 0X24 # sbbw (%rsp), %r15w")
#define SBB_R15W_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X1B, 0X38 # sbbw (%r8), %r15w")
#define SBB_R15W_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X1B, 0X39 # sbbw (%r9), %r15w")
#define SBB_R15W_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X1B, 0X3A # sbbw (%r10), %r15w")
#define SBB_R15W_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X1B, 0X3B # sbbw (%r11), %r15w")
#define SBB_R15W_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X1B, 0X3C, 0X24 # sbbw (%r12), %r15w")
#define SBB_R15W_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X1B, 0X7D, 0X00 # sbbw (%r13), %r15w")
#define SBB_R15W_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X1B, 0X3E # sbbw (%r14), %r15w")
#define SBB_R15W_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X1B, 0X3F # sbbw (%r15), %r15w")
#define SBB_R15W_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0X38 # sbbw (%eax), %r15w")
#define SBB_R15W_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0X3B # sbbw (%ebx), %r15w")
#define SBB_R15W_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0X39 # sbbw (%ecx), %r15w")
#define SBB_R15W_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0X3A # sbbw (%edx), %r15w")
#define SBB_R15W_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0X3F # sbbw (%edi), %r15w")
#define SBB_R15W_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0X3E # sbbw (%esi), %r15w")
#define SBB_R15W_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0X7D, 0X00 # sbbw (%ebp), %r15w")
#define SBB_R15W_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0X3C, 0X24 # sbbw (%esp), %r15w")

#define SBB_AX_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X19, 0X00 # sbbw %ax, (%rax)")
#define SBB_AX_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X19, 0X03 # sbbw %ax, (%rbx)")
#define SBB_AX_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X19, 0X01 # sbbw %ax, (%rcx)")
#define SBB_AX_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X19, 0X02 # sbbw %ax, (%rdx)")
#define SBB_AX_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X19, 0X07 # sbbw %ax, (%rdi)")
#define SBB_AX_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X19, 0X06 # sbbw %ax, (%rsi)")
#define SBB_AX_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X19, 0X45, 0X00 # sbbw %ax, (%rbp)")
#define SBB_AX_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X19, 0X04, 0X24 # sbbw %ax, (%rsp)")
#define SBB_AX_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X19, 0X00 # sbbw %ax, (%r8)")
#define SBB_AX_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X19, 0X01 # sbbw %ax, (%r9)")
#define SBB_AX_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X19, 0X02 # sbbw %ax, (%r10)")
#define SBB_AX_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X19, 0X03 # sbbw %ax, (%r11)")
#define SBB_AX_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X19, 0X04, 0X24 # sbbw %ax, (%r12)")
#define SBB_AX_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X19, 0X45, 0X00 # sbbw %ax, (%r13)")
#define SBB_AX_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X19, 0X06 # sbbw %ax, (%r14)")
#define SBB_AX_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X19, 0X07 # sbbw %ax, (%r15)")
#define SBB_AX_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X19, 0X00 # sbbw %ax, (%eax)")
#define SBB_AX_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X19, 0X03 # sbbw %ax, (%ebx)")
#define SBB_AX_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X19, 0X01 # sbbw %ax, (%ecx)")
#define SBB_AX_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X19, 0X02 # sbbw %ax, (%edx)")
#define SBB_AX_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X19, 0X07 # sbbw %ax, (%edi)")
#define SBB_AX_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X19, 0X06 # sbbw %ax, (%esi)")
#define SBB_AX_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X19, 0X45, 0X00 # sbbw %ax, (%ebp)")
#define SBB_AX_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X19, 0X04, 0X24 # sbbw %ax, (%esp)")

#define SBB_BX_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X19, 0X18 # sbbw %bx, (%rax)")
#define SBB_BX_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X19, 0X1B # sbbw %bx, (%rbx)")
#define SBB_BX_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X19, 0X19 # sbbw %bx, (%rcx)")
#define SBB_BX_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X19, 0X1A # sbbw %bx, (%rdx)")
#define SBB_BX_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X19, 0X1F # sbbw %bx, (%rdi)")
#define SBB_BX_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X19, 0X1E # sbbw %bx, (%rsi)")
#define SBB_BX_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X19, 0X5D, 0X00 # sbbw %bx, (%rbp)")
#define SBB_BX_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X19, 0X1C, 0X24 # sbbw %bx, (%rsp)")
#define SBB_BX_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X19, 0X18 # sbbw %bx, (%r8)")
#define SBB_BX_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X19, 0X19 # sbbw %bx, (%r9)")
#define SBB_BX_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X19, 0X1A # sbbw %bx, (%r10)")
#define SBB_BX_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X19, 0X1B # sbbw %bx, (%r11)")
#define SBB_BX_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X19, 0X1C, 0X24 # sbbw %bx, (%r12)")
#define SBB_BX_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X19, 0X5D, 0X00 # sbbw %bx, (%r13)")
#define SBB_BX_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X19, 0X1E # sbbw %bx, (%r14)")
#define SBB_BX_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X19, 0X1F # sbbw %bx, (%r15)")
#define SBB_BX_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X19, 0X18 # sbbw %bx, (%eax)")
#define SBB_BX_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X19, 0X1B # sbbw %bx, (%ebx)")
#define SBB_BX_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X19, 0X19 # sbbw %bx, (%ecx)")
#define SBB_BX_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X19, 0X1A # sbbw %bx, (%edx)")
#define SBB_BX_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X19, 0X1F # sbbw %bx, (%edi)")
#define SBB_BX_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X19, 0X1E # sbbw %bx, (%esi)")
#define SBB_BX_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X19, 0X5D, 0X00 # sbbw %bx, (%ebp)")
#define SBB_BX_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X19, 0X1C, 0X24 # sbbw %bx, (%esp)")

#define SBB_CX_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X19, 0X08 # sbbw %cx, (%rax)")
#define SBB_CX_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X19, 0X0B # sbbw %cx, (%rbx)")
#define SBB_CX_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X19, 0X09 # sbbw %cx, (%rcx)")
#define SBB_CX_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X19, 0X0A # sbbw %cx, (%rdx)")
#define SBB_CX_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X19, 0X0F # sbbw %cx, (%rdi)")
#define SBB_CX_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X19, 0X0E # sbbw %cx, (%rsi)")
#define SBB_CX_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X19, 0X4D, 0X00 # sbbw %cx, (%rbp)")
#define SBB_CX_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X19, 0X0C, 0X24 # sbbw %cx, (%rsp)")
#define SBB_CX_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X19, 0X08 # sbbw %cx, (%r8)")
#define SBB_CX_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X19, 0X09 # sbbw %cx, (%r9)")
#define SBB_CX_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X19, 0X0A # sbbw %cx, (%r10)")
#define SBB_CX_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X19, 0X0B # sbbw %cx, (%r11)")
#define SBB_CX_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X19, 0X0C, 0X24 # sbbw %cx, (%r12)")
#define SBB_CX_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X19, 0X4D, 0X00 # sbbw %cx, (%r13)")
#define SBB_CX_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X19, 0X0E # sbbw %cx, (%r14)")
#define SBB_CX_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X19, 0X0F # sbbw %cx, (%r15)")
#define SBB_CX_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X19, 0X08 # sbbw %cx, (%eax)")
#define SBB_CX_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X19, 0X0B # sbbw %cx, (%ebx)")
#define SBB_CX_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X19, 0X09 # sbbw %cx, (%ecx)")
#define SBB_CX_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X19, 0X0A # sbbw %cx, (%edx)")
#define SBB_CX_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X19, 0X0F # sbbw %cx, (%edi)")
#define SBB_CX_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X19, 0X0E # sbbw %cx, (%esi)")
#define SBB_CX_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X19, 0X4D, 0X00 # sbbw %cx, (%ebp)")
#define SBB_CX_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X19, 0X0C, 0X24 # sbbw %cx, (%esp)")

#define SBB_DX_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X19, 0X10 # sbbw %dx, (%rax)")
#define SBB_DX_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X19, 0X13 # sbbw %dx, (%rbx)")
#define SBB_DX_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X19, 0X11 # sbbw %dx, (%rcx)")
#define SBB_DX_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X19, 0X12 # sbbw %dx, (%rdx)")
#define SBB_DX_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X19, 0X17 # sbbw %dx, (%rdi)")
#define SBB_DX_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X19, 0X16 # sbbw %dx, (%rsi)")
#define SBB_DX_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X19, 0X55, 0X00 # sbbw %dx, (%rbp)")
#define SBB_DX_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X19, 0X14, 0X24 # sbbw %dx, (%rsp)")
#define SBB_DX_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X19, 0X10 # sbbw %dx, (%r8)")
#define SBB_DX_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X19, 0X11 # sbbw %dx, (%r9)")
#define SBB_DX_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X19, 0X12 # sbbw %dx, (%r10)")
#define SBB_DX_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X19, 0X13 # sbbw %dx, (%r11)")
#define SBB_DX_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X19, 0X14, 0X24 # sbbw %dx, (%r12)")
#define SBB_DX_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X19, 0X55, 0X00 # sbbw %dx, (%r13)")
#define SBB_DX_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X19, 0X16 # sbbw %dx, (%r14)")
#define SBB_DX_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X19, 0X17 # sbbw %dx, (%r15)")
#define SBB_DX_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X19, 0X10 # sbbw %dx, (%eax)")
#define SBB_DX_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X19, 0X13 # sbbw %dx, (%ebx)")
#define SBB_DX_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X19, 0X11 # sbbw %dx, (%ecx)")
#define SBB_DX_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X19, 0X12 # sbbw %dx, (%edx)")
#define SBB_DX_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X19, 0X17 # sbbw %dx, (%edi)")
#define SBB_DX_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X19, 0X16 # sbbw %dx, (%esi)")
#define SBB_DX_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X19, 0X55, 0X00 # sbbw %dx, (%ebp)")
#define SBB_DX_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X19, 0X14, 0X24 # sbbw %dx, (%esp)")

#define SBB_DI_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X19, 0X38 # sbbw %di, (%rax)")
#define SBB_DI_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X19, 0X3B # sbbw %di, (%rbx)")
#define SBB_DI_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X19, 0X39 # sbbw %di, (%rcx)")
#define SBB_DI_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X19, 0X3A # sbbw %di, (%rdx)")
#define SBB_DI_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X19, 0X3F # sbbw %di, (%rdi)")
#define SBB_DI_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X19, 0X3E # sbbw %di, (%rsi)")
#define SBB_DI_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X19, 0X7D, 0X00 # sbbw %di, (%rbp)")
#define SBB_DI_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X19, 0X3C, 0X24 # sbbw %di, (%rsp)")
#define SBB_DI_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X19, 0X38 # sbbw %di, (%r8)")
#define SBB_DI_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X19, 0X39 # sbbw %di, (%r9)")
#define SBB_DI_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X19, 0X3A # sbbw %di, (%r10)")
#define SBB_DI_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X19, 0X3B # sbbw %di, (%r11)")
#define SBB_DI_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X19, 0X3C, 0X24 # sbbw %di, (%r12)")
#define SBB_DI_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X19, 0X7D, 0X00 # sbbw %di, (%r13)")
#define SBB_DI_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X19, 0X3E # sbbw %di, (%r14)")
#define SBB_DI_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X19, 0X3F # sbbw %di, (%r15)")
#define SBB_DI_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X19, 0X38 # sbbw %di, (%eax)")
#define SBB_DI_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X19, 0X3B # sbbw %di, (%ebx)")
#define SBB_DI_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X19, 0X39 # sbbw %di, (%ecx)")
#define SBB_DI_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X19, 0X3A # sbbw %di, (%edx)")
#define SBB_DI_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X19, 0X3F # sbbw %di, (%edi)")
#define SBB_DI_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X19, 0X3E # sbbw %di, (%esi)")
#define SBB_DI_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X19, 0X7D, 0X00 # sbbw %di, (%ebp)")
#define SBB_DI_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X19, 0X3C, 0X24 # sbbw %di, (%esp)")

#define SBB_SI_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X19, 0X30 # sbbw %si, (%rax)")
#define SBB_SI_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X19, 0X33 # sbbw %si, (%rbx)")
#define SBB_SI_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X19, 0X31 # sbbw %si, (%rcx)")
#define SBB_SI_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X19, 0X32 # sbbw %si, (%rdx)")
#define SBB_SI_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X19, 0X37 # sbbw %si, (%rdi)")
#define SBB_SI_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X19, 0X36 # sbbw %si, (%rsi)")
#define SBB_SI_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X19, 0X75, 0X00 # sbbw %si, (%rbp)")
#define SBB_SI_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X19, 0X34, 0X24 # sbbw %si, (%rsp)")
#define SBB_SI_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X19, 0X30 # sbbw %si, (%r8)")
#define SBB_SI_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X19, 0X31 # sbbw %si, (%r9)")
#define SBB_SI_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X19, 0X32 # sbbw %si, (%r10)")
#define SBB_SI_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X19, 0X33 # sbbw %si, (%r11)")
#define SBB_SI_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X19, 0X34, 0X24 # sbbw %si, (%r12)")
#define SBB_SI_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X19, 0X75, 0X00 # sbbw %si, (%r13)")
#define SBB_SI_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X19, 0X36 # sbbw %si, (%r14)")
#define SBB_SI_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X19, 0X37 # sbbw %si, (%r15)")
#define SBB_SI_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X19, 0X30 # sbbw %si, (%eax)")
#define SBB_SI_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X19, 0X33 # sbbw %si, (%ebx)")
#define SBB_SI_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X19, 0X31 # sbbw %si, (%ecx)")
#define SBB_SI_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X19, 0X32 # sbbw %si, (%edx)")
#define SBB_SI_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X19, 0X37 # sbbw %si, (%edi)")
#define SBB_SI_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X19, 0X36 # sbbw %si, (%esi)")
#define SBB_SI_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X19, 0X75, 0X00 # sbbw %si, (%ebp)")
#define SBB_SI_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X19, 0X34, 0X24 # sbbw %si, (%esp)")

#define SBB_BP_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X19, 0X28 # sbbw %bp, (%rax)")
#define SBB_BP_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X19, 0X2B # sbbw %bp, (%rbx)")
#define SBB_BP_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X19, 0X29 # sbbw %bp, (%rcx)")
#define SBB_BP_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X19, 0X2A # sbbw %bp, (%rdx)")
#define SBB_BP_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X19, 0X2F # sbbw %bp, (%rdi)")
#define SBB_BP_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X19, 0X2E # sbbw %bp, (%rsi)")
#define SBB_BP_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X19, 0X6D, 0X00 # sbbw %bp, (%rbp)")
#define SBB_BP_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X19, 0X2C, 0X24 # sbbw %bp, (%rsp)")
#define SBB_BP_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X19, 0X28 # sbbw %bp, (%r8)")
#define SBB_BP_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X19, 0X29 # sbbw %bp, (%r9)")
#define SBB_BP_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X19, 0X2A # sbbw %bp, (%r10)")
#define SBB_BP_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X19, 0X2B # sbbw %bp, (%r11)")
#define SBB_BP_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X19, 0X2C, 0X24 # sbbw %bp, (%r12)")
#define SBB_BP_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X19, 0X6D, 0X00 # sbbw %bp, (%r13)")
#define SBB_BP_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X19, 0X2E # sbbw %bp, (%r14)")
#define SBB_BP_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X19, 0X2F # sbbw %bp, (%r15)")
#define SBB_BP_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X19, 0X28 # sbbw %bp, (%eax)")
#define SBB_BP_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X19, 0X2B # sbbw %bp, (%ebx)")
#define SBB_BP_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X19, 0X29 # sbbw %bp, (%ecx)")
#define SBB_BP_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X19, 0X2A # sbbw %bp, (%edx)")
#define SBB_BP_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X19, 0X2F # sbbw %bp, (%edi)")
#define SBB_BP_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X19, 0X2E # sbbw %bp, (%esi)")
#define SBB_BP_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X19, 0X6D, 0X00 # sbbw %bp, (%ebp)")
#define SBB_BP_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X19, 0X2C, 0X24 # sbbw %bp, (%esp)")

#define SBB_SP_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X19, 0X20 # sbbw %sp, (%rax)")
#define SBB_SP_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X19, 0X23 # sbbw %sp, (%rbx)")
#define SBB_SP_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X19, 0X21 # sbbw %sp, (%rcx)")
#define SBB_SP_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X19, 0X22 # sbbw %sp, (%rdx)")
#define SBB_SP_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X19, 0X27 # sbbw %sp, (%rdi)")
#define SBB_SP_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X19, 0X26 # sbbw %sp, (%rsi)")
#define SBB_SP_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X19, 0X65, 0X00 # sbbw %sp, (%rbp)")
#define SBB_SP_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X19, 0X24, 0X24 # sbbw %sp, (%rsp)")
#define SBB_SP_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X19, 0X20 # sbbw %sp, (%r8)")
#define SBB_SP_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X19, 0X21 # sbbw %sp, (%r9)")
#define SBB_SP_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X19, 0X22 # sbbw %sp, (%r10)")
#define SBB_SP_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X19, 0X23 # sbbw %sp, (%r11)")
#define SBB_SP_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X19, 0X24, 0X24 # sbbw %sp, (%r12)")
#define SBB_SP_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X19, 0X65, 0X00 # sbbw %sp, (%r13)")
#define SBB_SP_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X19, 0X26 # sbbw %sp, (%r14)")
#define SBB_SP_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X19, 0X27 # sbbw %sp, (%r15)")
#define SBB_SP_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X19, 0X20 # sbbw %sp, (%eax)")
#define SBB_SP_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X19, 0X23 # sbbw %sp, (%ebx)")
#define SBB_SP_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X19, 0X21 # sbbw %sp, (%ecx)")
#define SBB_SP_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X19, 0X22 # sbbw %sp, (%edx)")
#define SBB_SP_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X19, 0X27 # sbbw %sp, (%edi)")
#define SBB_SP_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X19, 0X26 # sbbw %sp, (%esi)")
#define SBB_SP_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X19, 0X65, 0X00 # sbbw %sp, (%ebp)")
#define SBB_SP_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X19, 0X24, 0X24 # sbbw %sp, (%esp)")

#define SBB_R8W_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X19, 0X00 # sbbw %r8w, (%rax)")
#define SBB_R8W_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X19, 0X03 # sbbw %r8w, (%rbx)")
#define SBB_R8W_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X19, 0X01 # sbbw %r8w, (%rcx)")
#define SBB_R8W_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X19, 0X02 # sbbw %r8w, (%rdx)")
#define SBB_R8W_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X19, 0X07 # sbbw %r8w, (%rdi)")
#define SBB_R8W_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X19, 0X06 # sbbw %r8w, (%rsi)")
#define SBB_R8W_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X19, 0X45, 0X00 # sbbw %r8w, (%rbp)")
#define SBB_R8W_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X19, 0X04, 0X24 # sbbw %r8w, (%rsp)")
#define SBB_R8W_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X19, 0X00 # sbbw %r8w, (%r8)")
#define SBB_R8W_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X19, 0X01 # sbbw %r8w, (%r9)")
#define SBB_R8W_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X19, 0X02 # sbbw %r8w, (%r10)")
#define SBB_R8W_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X19, 0X03 # sbbw %r8w, (%r11)")
#define SBB_R8W_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X19, 0X04, 0X24 # sbbw %r8w, (%r12)")
#define SBB_R8W_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X19, 0X45, 0X00 # sbbw %r8w, (%r13)")
#define SBB_R8W_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X19, 0X06 # sbbw %r8w, (%r14)")
#define SBB_R8W_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X19, 0X07 # sbbw %r8w, (%r15)")
#define SBB_R8W_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0X00 # sbbw %r8w, (%eax)")
#define SBB_R8W_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0X03 # sbbw %r8w, (%ebx)")
#define SBB_R8W_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0X01 # sbbw %r8w, (%ecx)")
#define SBB_R8W_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0X02 # sbbw %r8w, (%edx)")
#define SBB_R8W_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0X07 # sbbw %r8w, (%edi)")
#define SBB_R8W_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0X06 # sbbw %r8w, (%esi)")
#define SBB_R8W_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0X45, 0X00 # sbbw %r8w, (%ebp)")
#define SBB_R8W_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0X04, 0X24 # sbbw %r8w, (%esp)")

#define SBB_R9W_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X19, 0X08 # sbbw %r9w, (%rax)")
#define SBB_R9W_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X19, 0X0B # sbbw %r9w, (%rbx)")
#define SBB_R9W_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X19, 0X09 # sbbw %r9w, (%rcx)")
#define SBB_R9W_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X19, 0X0A # sbbw %r9w, (%rdx)")
#define SBB_R9W_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X19, 0X0F # sbbw %r9w, (%rdi)")
#define SBB_R9W_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X19, 0X0E # sbbw %r9w, (%rsi)")
#define SBB_R9W_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X19, 0X4D, 0X00 # sbbw %r9w, (%rbp)")
#define SBB_R9W_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X19, 0X0C, 0X24 # sbbw %r9w, (%rsp)")
#define SBB_R9W_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X19, 0X08 # sbbw %r9w, (%r8)")
#define SBB_R9W_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X19, 0X09 # sbbw %r9w, (%r9)")
#define SBB_R9W_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X19, 0X0A # sbbw %r9w, (%r10)")
#define SBB_R9W_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X19, 0X0B # sbbw %r9w, (%r11)")
#define SBB_R9W_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X19, 0X0C, 0X24 # sbbw %r9w, (%r12)")
#define SBB_R9W_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X19, 0X4D, 0X00 # sbbw %r9w, (%r13)")
#define SBB_R9W_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X19, 0X0E # sbbw %r9w, (%r14)")
#define SBB_R9W_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X19, 0X0F # sbbw %r9w, (%r15)")
#define SBB_R9W_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0X08 # sbbw %r9w, (%eax)")
#define SBB_R9W_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0X0B # sbbw %r9w, (%ebx)")
#define SBB_R9W_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0X09 # sbbw %r9w, (%ecx)")
#define SBB_R9W_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0X0A # sbbw %r9w, (%edx)")
#define SBB_R9W_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0X0F # sbbw %r9w, (%edi)")
#define SBB_R9W_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0X0E # sbbw %r9w, (%esi)")
#define SBB_R9W_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0X4D, 0X00 # sbbw %r9w, (%ebp)")
#define SBB_R9W_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0X0C, 0X24 # sbbw %r9w, (%esp)")

#define SBB_R10W_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X19, 0X10 # sbbw %r10w, (%rax)")
#define SBB_R10W_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X19, 0X13 # sbbw %r10w, (%rbx)")
#define SBB_R10W_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X19, 0X11 # sbbw %r10w, (%rcx)")
#define SBB_R10W_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X19, 0X12 # sbbw %r10w, (%rdx)")
#define SBB_R10W_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X19, 0X17 # sbbw %r10w, (%rdi)")
#define SBB_R10W_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X19, 0X16 # sbbw %r10w, (%rsi)")
#define SBB_R10W_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X19, 0X55, 0X00 # sbbw %r10w, (%rbp)")
#define SBB_R10W_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X19, 0X14, 0X24 # sbbw %r10w, (%rsp)")
#define SBB_R10W_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X19, 0X10 # sbbw %r10w, (%r8)")
#define SBB_R10W_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X19, 0X11 # sbbw %r10w, (%r9)")
#define SBB_R10W_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X19, 0X12 # sbbw %r10w, (%r10)")
#define SBB_R10W_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X19, 0X13 # sbbw %r10w, (%r11)")
#define SBB_R10W_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X19, 0X14, 0X24 # sbbw %r10w, (%r12)")
#define SBB_R10W_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X19, 0X55, 0X00 # sbbw %r10w, (%r13)")
#define SBB_R10W_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X19, 0X16 # sbbw %r10w, (%r14)")
#define SBB_R10W_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X19, 0X17 # sbbw %r10w, (%r15)")
#define SBB_R10W_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0X10 # sbbw %r10w, (%eax)")
#define SBB_R10W_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0X13 # sbbw %r10w, (%ebx)")
#define SBB_R10W_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0X11 # sbbw %r10w, (%ecx)")
#define SBB_R10W_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0X12 # sbbw %r10w, (%edx)")
#define SBB_R10W_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0X17 # sbbw %r10w, (%edi)")
#define SBB_R10W_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0X16 # sbbw %r10w, (%esi)")
#define SBB_R10W_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0X55, 0X00 # sbbw %r10w, (%ebp)")
#define SBB_R10W_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0X14, 0X24 # sbbw %r10w, (%esp)")

#define SBB_R11W_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X19, 0X18 # sbbw %r11w, (%rax)")
#define SBB_R11W_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X19, 0X1B # sbbw %r11w, (%rbx)")
#define SBB_R11W_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X19, 0X19 # sbbw %r11w, (%rcx)")
#define SBB_R11W_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X19, 0X1A # sbbw %r11w, (%rdx)")
#define SBB_R11W_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X19, 0X1F # sbbw %r11w, (%rdi)")
#define SBB_R11W_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X19, 0X1E # sbbw %r11w, (%rsi)")
#define SBB_R11W_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X19, 0X5D, 0X00 # sbbw %r11w, (%rbp)")
#define SBB_R11W_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X19, 0X1C, 0X24 # sbbw %r11w, (%rsp)")
#define SBB_R11W_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X19, 0X18 # sbbw %r11w, (%r8)")
#define SBB_R11W_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X19, 0X19 # sbbw %r11w, (%r9)")
#define SBB_R11W_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X19, 0X1A # sbbw %r11w, (%r10)")
#define SBB_R11W_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X19, 0X1B # sbbw %r11w, (%r11)")
#define SBB_R11W_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X19, 0X1C, 0X24 # sbbw %r11w, (%r12)")
#define SBB_R11W_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X19, 0X5D, 0X00 # sbbw %r11w, (%r13)")
#define SBB_R11W_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X19, 0X1E # sbbw %r11w, (%r14)")
#define SBB_R11W_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X19, 0X1F # sbbw %r11w, (%r15)")
#define SBB_R11W_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0X18 # sbbw %r11w, (%eax)")
#define SBB_R11W_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0X1B # sbbw %r11w, (%ebx)")
#define SBB_R11W_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0X19 # sbbw %r11w, (%ecx)")
#define SBB_R11W_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0X1A # sbbw %r11w, (%edx)")
#define SBB_R11W_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0X1F # sbbw %r11w, (%edi)")
#define SBB_R11W_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0X1E # sbbw %r11w, (%esi)")
#define SBB_R11W_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0X5D, 0X00 # sbbw %r11w, (%ebp)")
#define SBB_R11W_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0X1C, 0X24 # sbbw %r11w, (%esp)")

#define SBB_R12W_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X19, 0X20 # sbbw %r12w, (%rax)")
#define SBB_R12W_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X19, 0X23 # sbbw %r12w, (%rbx)")
#define SBB_R12W_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X19, 0X21 # sbbw %r12w, (%rcx)")
#define SBB_R12W_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X19, 0X22 # sbbw %r12w, (%rdx)")
#define SBB_R12W_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X19, 0X27 # sbbw %r12w, (%rdi)")
#define SBB_R12W_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X19, 0X26 # sbbw %r12w, (%rsi)")
#define SBB_R12W_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X19, 0X65, 0X00 # sbbw %r12w, (%rbp)")
#define SBB_R12W_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X19, 0X24, 0X24 # sbbw %r12w, (%rsp)")
#define SBB_R12W_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X19, 0X20 # sbbw %r12w, (%r8)")
#define SBB_R12W_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X19, 0X21 # sbbw %r12w, (%r9)")
#define SBB_R12W_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X19, 0X22 # sbbw %r12w, (%r10)")
#define SBB_R12W_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X19, 0X23 # sbbw %r12w, (%r11)")
#define SBB_R12W_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X19, 0X24, 0X24 # sbbw %r12w, (%r12)")
#define SBB_R12W_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X19, 0X65, 0X00 # sbbw %r12w, (%r13)")
#define SBB_R12W_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X19, 0X26 # sbbw %r12w, (%r14)")
#define SBB_R12W_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X19, 0X27 # sbbw %r12w, (%r15)")
#define SBB_R12W_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0X20 # sbbw %r12w, (%eax)")
#define SBB_R12W_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0X23 # sbbw %r12w, (%ebx)")
#define SBB_R12W_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0X21 # sbbw %r12w, (%ecx)")
#define SBB_R12W_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0X22 # sbbw %r12w, (%edx)")
#define SBB_R12W_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0X27 # sbbw %r12w, (%edi)")
#define SBB_R12W_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0X26 # sbbw %r12w, (%esi)")
#define SBB_R12W_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0X65, 0X00 # sbbw %r12w, (%ebp)")
#define SBB_R12W_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0X24, 0X24 # sbbw %r12w, (%esp)")

#define SBB_R13W_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X19, 0X28 # sbbw %r13w, (%rax)")
#define SBB_R13W_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X19, 0X2B # sbbw %r13w, (%rbx)")
#define SBB_R13W_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X19, 0X29 # sbbw %r13w, (%rcx)")
#define SBB_R13W_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X19, 0X2A # sbbw %r13w, (%rdx)")
#define SBB_R13W_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X19, 0X2F # sbbw %r13w, (%rdi)")
#define SBB_R13W_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X19, 0X2E # sbbw %r13w, (%rsi)")
#define SBB_R13W_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X19, 0X6D, 0X00 # sbbw %r13w, (%rbp)")
#define SBB_R13W_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X19, 0X2C, 0X24 # sbbw %r13w, (%rsp)")
#define SBB_R13W_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X19, 0X28 # sbbw %r13w, (%r8)")
#define SBB_R13W_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X19, 0X29 # sbbw %r13w, (%r9)")
#define SBB_R13W_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X19, 0X2A # sbbw %r13w, (%r10)")
#define SBB_R13W_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X19, 0X2B # sbbw %r13w, (%r11)")
#define SBB_R13W_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X19, 0X2C, 0X24 # sbbw %r13w, (%r12)")
#define SBB_R13W_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X19, 0X6D, 0X00 # sbbw %r13w, (%r13)")
#define SBB_R13W_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X19, 0X2E # sbbw %r13w, (%r14)")
#define SBB_R13W_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X19, 0X2F # sbbw %r13w, (%r15)")
#define SBB_R13W_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0X28 # sbbw %r13w, (%eax)")
#define SBB_R13W_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0X2B # sbbw %r13w, (%ebx)")
#define SBB_R13W_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0X29 # sbbw %r13w, (%ecx)")
#define SBB_R13W_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0X2A # sbbw %r13w, (%edx)")
#define SBB_R13W_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0X2F # sbbw %r13w, (%edi)")
#define SBB_R13W_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0X2E # sbbw %r13w, (%esi)")
#define SBB_R13W_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0X6D, 0X00 # sbbw %r13w, (%ebp)")
#define SBB_R13W_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0X2C, 0X24 # sbbw %r13w, (%esp)")

#define SBB_R14W_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X19, 0X30 # sbbw %r14w, (%rax)")
#define SBB_R14W_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X19, 0X33 # sbbw %r14w, (%rbx)")
#define SBB_R14W_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X19, 0X31 # sbbw %r14w, (%rcx)")
#define SBB_R14W_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X19, 0X32 # sbbw %r14w, (%rdx)")
#define SBB_R14W_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X19, 0X37 # sbbw %r14w, (%rdi)")
#define SBB_R14W_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X19, 0X36 # sbbw %r14w, (%rsi)")
#define SBB_R14W_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X19, 0X75, 0X00 # sbbw %r14w, (%rbp)")
#define SBB_R14W_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X19, 0X34, 0X24 # sbbw %r14w, (%rsp)")
#define SBB_R14W_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X19, 0X30 # sbbw %r14w, (%r8)")
#define SBB_R14W_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X19, 0X31 # sbbw %r14w, (%r9)")
#define SBB_R14W_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X19, 0X32 # sbbw %r14w, (%r10)")
#define SBB_R14W_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X19, 0X33 # sbbw %r14w, (%r11)")
#define SBB_R14W_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X19, 0X34, 0X24 # sbbw %r14w, (%r12)")
#define SBB_R14W_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X19, 0X75, 0X00 # sbbw %r14w, (%r13)")
#define SBB_R14W_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X19, 0X36 # sbbw %r14w, (%r14)")
#define SBB_R14W_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X19, 0X37 # sbbw %r14w, (%r15)")
#define SBB_R14W_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0X30 # sbbw %r14w, (%eax)")
#define SBB_R14W_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0X33 # sbbw %r14w, (%ebx)")
#define SBB_R14W_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0X31 # sbbw %r14w, (%ecx)")
#define SBB_R14W_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0X32 # sbbw %r14w, (%edx)")
#define SBB_R14W_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0X37 # sbbw %r14w, (%edi)")
#define SBB_R14W_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0X36 # sbbw %r14w, (%esi)")
#define SBB_R14W_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0X75, 0X00 # sbbw %r14w, (%ebp)")
#define SBB_R14W_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0X34, 0X24 # sbbw %r14w, (%esp)")

#define SBB_R15W_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X19, 0X38 # sbbw %r15w, (%rax)")
#define SBB_R15W_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X19, 0X3B # sbbw %r15w, (%rbx)")
#define SBB_R15W_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X19, 0X39 # sbbw %r15w, (%rcx)")
#define SBB_R15W_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X19, 0X3A # sbbw %r15w, (%rdx)")
#define SBB_R15W_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X19, 0X3F # sbbw %r15w, (%rdi)")
#define SBB_R15W_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X19, 0X3E # sbbw %r15w, (%rsi)")
#define SBB_R15W_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X19, 0X7D, 0X00 # sbbw %r15w, (%rbp)")
#define SBB_R15W_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X19, 0X3C, 0X24 # sbbw %r15w, (%rsp)")
#define SBB_R15W_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X19, 0X38 # sbbw %r15w, (%r8)")
#define SBB_R15W_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X19, 0X39 # sbbw %r15w, (%r9)")
#define SBB_R15W_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X19, 0X3A # sbbw %r15w, (%r10)")
#define SBB_R15W_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X19, 0X3B # sbbw %r15w, (%r11)")
#define SBB_R15W_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X19, 0X3C, 0X24 # sbbw %r15w, (%r12)")
#define SBB_R15W_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X19, 0X7D, 0X00 # sbbw %r15w, (%r13)")
#define SBB_R15W_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X19, 0X3E # sbbw %r15w, (%r14)")
#define SBB_R15W_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X19, 0X3F # sbbw %r15w, (%r15)")
#define SBB_R15W_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0X38 # sbbw %r15w, (%eax)")
#define SBB_R15W_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0X3B # sbbw %r15w, (%ebx)")
#define SBB_R15W_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0X39 # sbbw %r15w, (%ecx)")
#define SBB_R15W_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0X3A # sbbw %r15w, (%edx)")
#define SBB_R15W_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0X3F # sbbw %r15w, (%edi)")
#define SBB_R15W_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0X3E # sbbw %r15w, (%esi)")
#define SBB_R15W_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0X7D, 0X00 # sbbw %r15w, (%ebp)")
#define SBB_R15W_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0X3C, 0X24 # sbbw %r15w, (%esp)")

#define SBB_AX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0X80 # sbbw " _(VALUE) "(%rax), %ax")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0X83 # sbbw " _(VALUE) "(%rbx), %ax")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0X81 # sbbw " _(VALUE) "(%rcx), %ax")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0X82 # sbbw " _(VALUE) "(%rdx), %ax")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0X87 # sbbw " _(VALUE) "(%rdi), %ax")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0X86 # sbbw " _(VALUE) "(%rsi), %ax")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0X85 # sbbw " _(VALUE) "(%rbp), %ax")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0X84, 0X24 # sbbw " _(VALUE) "(%rsp), %ax")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X1B, 0X80 # sbbw " _(VALUE) "(%r8), %ax")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X1B, 0X81 # sbbw " _(VALUE) "(%r9), %ax")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X1B, 0X82 # sbbw " _(VALUE) "(%r10), %ax")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X1B, 0X83 # sbbw " _(VALUE) "(%r11), %ax")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X1B, 0X84, 0X24 # sbbw " _(VALUE) "(%r12), %ax")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X1B, 0X85 # sbbw " _(VALUE) "(%r13), %ax")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X1B, 0X86 # sbbw " _(VALUE) "(%r14), %ax")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X1B, 0X87 # sbbw " _(VALUE) "(%r15), %ax")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X80 # sbbw " _(VALUE) "(%eax), %ax")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X83 # sbbw " _(VALUE) "(%ebx), %ax")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X81 # sbbw " _(VALUE) "(%ecx), %ax")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X82 # sbbw " _(VALUE) "(%edx), %ax")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X87 # sbbw " _(VALUE) "(%edi), %ax")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X86 # sbbw " _(VALUE) "(%esi), %ax")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X85 # sbbw " _(VALUE) "(%ebp), %ax")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X84, 0X24 # sbbw " _(VALUE) "(%esp), %ax")\
	CMT_ASM(".long " _(VALUE))

#define SBB_BX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0X98 # sbbw " _(VALUE) "(%rax), %bx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0X9B # sbbw " _(VALUE) "(%rbx), %bx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0X99 # sbbw " _(VALUE) "(%rcx), %bx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0X9A # sbbw " _(VALUE) "(%rdx), %bx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0X9F # sbbw " _(VALUE) "(%rdi), %bx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0X9E # sbbw " _(VALUE) "(%rsi), %bx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0X9D # sbbw " _(VALUE) "(%rbp), %bx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0X9C, 0X24 # sbbw " _(VALUE) "(%rsp), %bx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X1B, 0X98 # sbbw " _(VALUE) "(%r8), %bx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X1B, 0X99 # sbbw " _(VALUE) "(%r9), %bx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X1B, 0X9A # sbbw " _(VALUE) "(%r10), %bx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X1B, 0X9B # sbbw " _(VALUE) "(%r11), %bx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X1B, 0X9C, 0X24 # sbbw " _(VALUE) "(%r12), %bx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X1B, 0X9D # sbbw " _(VALUE) "(%r13), %bx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X1B, 0X9E # sbbw " _(VALUE) "(%r14), %bx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X1B, 0X9F # sbbw " _(VALUE) "(%r15), %bx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X98 # sbbw " _(VALUE) "(%eax), %bx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X9B # sbbw " _(VALUE) "(%ebx), %bx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X99 # sbbw " _(VALUE) "(%ecx), %bx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X9A # sbbw " _(VALUE) "(%edx), %bx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X9F # sbbw " _(VALUE) "(%edi), %bx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X9E # sbbw " _(VALUE) "(%esi), %bx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X9D # sbbw " _(VALUE) "(%ebp), %bx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X9C, 0X24 # sbbw " _(VALUE) "(%esp), %bx")\
	CMT_ASM(".long " _(VALUE))

#define SBB_CX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0X88 # sbbw " _(VALUE) "(%rax), %cx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0X8B # sbbw " _(VALUE) "(%rbx), %cx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0X89 # sbbw " _(VALUE) "(%rcx), %cx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0X8A # sbbw " _(VALUE) "(%rdx), %cx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0X8F # sbbw " _(VALUE) "(%rdi), %cx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0X8E # sbbw " _(VALUE) "(%rsi), %cx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0X8D # sbbw " _(VALUE) "(%rbp), %cx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0X8C, 0X24 # sbbw " _(VALUE) "(%rsp), %cx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X1B, 0X88 # sbbw " _(VALUE) "(%r8), %cx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X1B, 0X89 # sbbw " _(VALUE) "(%r9), %cx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X1B, 0X8A # sbbw " _(VALUE) "(%r10), %cx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X1B, 0X8B # sbbw " _(VALUE) "(%r11), %cx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X1B, 0X8C, 0X24 # sbbw " _(VALUE) "(%r12), %cx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X1B, 0X8D # sbbw " _(VALUE) "(%r13), %cx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X1B, 0X8E # sbbw " _(VALUE) "(%r14), %cx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X1B, 0X8F # sbbw " _(VALUE) "(%r15), %cx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X88 # sbbw " _(VALUE) "(%eax), %cx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X8B # sbbw " _(VALUE) "(%ebx), %cx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X89 # sbbw " _(VALUE) "(%ecx), %cx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X8A # sbbw " _(VALUE) "(%edx), %cx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X8F # sbbw " _(VALUE) "(%edi), %cx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X8E # sbbw " _(VALUE) "(%esi), %cx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X8D # sbbw " _(VALUE) "(%ebp), %cx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X8C, 0X24 # sbbw " _(VALUE) "(%esp), %cx")\
	CMT_ASM(".long " _(VALUE))

#define SBB_DX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0X90 # sbbw " _(VALUE) "(%rax), %dx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0X93 # sbbw " _(VALUE) "(%rbx), %dx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0X91 # sbbw " _(VALUE) "(%rcx), %dx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0X92 # sbbw " _(VALUE) "(%rdx), %dx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0X97 # sbbw " _(VALUE) "(%rdi), %dx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0X96 # sbbw " _(VALUE) "(%rsi), %dx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0X95 # sbbw " _(VALUE) "(%rbp), %dx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0X94, 0X24 # sbbw " _(VALUE) "(%rsp), %dx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X1B, 0X90 # sbbw " _(VALUE) "(%r8), %dx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X1B, 0X91 # sbbw " _(VALUE) "(%r9), %dx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X1B, 0X92 # sbbw " _(VALUE) "(%r10), %dx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X1B, 0X93 # sbbw " _(VALUE) "(%r11), %dx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X1B, 0X94, 0X24 # sbbw " _(VALUE) "(%r12), %dx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X1B, 0X95 # sbbw " _(VALUE) "(%r13), %dx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X1B, 0X96 # sbbw " _(VALUE) "(%r14), %dx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X1B, 0X97 # sbbw " _(VALUE) "(%r15), %dx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X90 # sbbw " _(VALUE) "(%eax), %dx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X93 # sbbw " _(VALUE) "(%ebx), %dx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X91 # sbbw " _(VALUE) "(%ecx), %dx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X92 # sbbw " _(VALUE) "(%edx), %dx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X97 # sbbw " _(VALUE) "(%edi), %dx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X96 # sbbw " _(VALUE) "(%esi), %dx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X95 # sbbw " _(VALUE) "(%ebp), %dx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X1B, 0X94, 0X24 # sbbw " _(VALUE) "(%esp), %dx")\
	CMT_ASM(".long " _(VALUE))

#define SBB_DI_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0XB8 # sbbw " _(VALUE) "(%rax), %di")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DI_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0XBB # sbbw " _(VALUE) "(%rbx), %di")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DI_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0XB9 # sbbw " _(VALUE) "(%rcx), %di")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DI_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0XBA # sbbw " _(VALUE) "(%rdx), %di")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DI_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0XBF # sbbw " _(VALUE) "(%rdi), %di")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DI_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0XBE # sbbw " _(VALUE) "(%rsi), %di")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DI_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0XBD # sbbw " _(VALUE) "(%rbp), %di")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DI_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0XBC, 0X24 # sbbw " _(VALUE) "(%rsp), %di")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DI_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X1B, 0XB8 # sbbw " _(VALUE) "(%r8), %di")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DI_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X1B, 0XB9 # sbbw " _(VALUE) "(%r9), %di")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DI_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X1B, 0XBA # sbbw " _(VALUE) "(%r10), %di")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DI_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X1B, 0XBB # sbbw " _(VALUE) "(%r11), %di")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DI_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X1B, 0XBC, 0X24 # sbbw " _(VALUE) "(%r12), %di")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DI_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X1B, 0XBD # sbbw " _(VALUE) "(%r13), %di")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DI_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X1B, 0XBE # sbbw " _(VALUE) "(%r14), %di")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DI_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X1B, 0XBF # sbbw " _(VALUE) "(%r15), %di")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X1B, 0XB8 # sbbw " _(VALUE) "(%eax), %di")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X1B, 0XBB # sbbw " _(VALUE) "(%ebx), %di")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X1B, 0XB9 # sbbw " _(VALUE) "(%ecx), %di")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X1B, 0XBA # sbbw " _(VALUE) "(%edx), %di")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X1B, 0XBF # sbbw " _(VALUE) "(%edi), %di")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X1B, 0XBE # sbbw " _(VALUE) "(%esi), %di")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X1B, 0XBD # sbbw " _(VALUE) "(%ebp), %di")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X1B, 0XBC, 0X24 # sbbw " _(VALUE) "(%esp), %di")\
	CMT_ASM(".long " _(VALUE))

#define SBB_SI_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0XB0 # sbbw " _(VALUE) "(%rax), %si")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SI_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0XB3 # sbbw " _(VALUE) "(%rbx), %si")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SI_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0XB1 # sbbw " _(VALUE) "(%rcx), %si")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SI_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0XB2 # sbbw " _(VALUE) "(%rdx), %si")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SI_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0XB7 # sbbw " _(VALUE) "(%rdi), %si")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SI_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0XB6 # sbbw " _(VALUE) "(%rsi), %si")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SI_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0XB5 # sbbw " _(VALUE) "(%rbp), %si")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SI_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0XB4, 0X24 # sbbw " _(VALUE) "(%rsp), %si")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SI_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X1B, 0XB0 # sbbw " _(VALUE) "(%r8), %si")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SI_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X1B, 0XB1 # sbbw " _(VALUE) "(%r9), %si")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SI_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X1B, 0XB2 # sbbw " _(VALUE) "(%r10), %si")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SI_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X1B, 0XB3 # sbbw " _(VALUE) "(%r11), %si")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SI_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X1B, 0XB4, 0X24 # sbbw " _(VALUE) "(%r12), %si")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SI_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X1B, 0XB5 # sbbw " _(VALUE) "(%r13), %si")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SI_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X1B, 0XB6 # sbbw " _(VALUE) "(%r14), %si")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SI_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X1B, 0XB7 # sbbw " _(VALUE) "(%r15), %si")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X1B, 0XB0 # sbbw " _(VALUE) "(%eax), %si")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X1B, 0XB3 # sbbw " _(VALUE) "(%ebx), %si")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X1B, 0XB1 # sbbw " _(VALUE) "(%ecx), %si")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X1B, 0XB2 # sbbw " _(VALUE) "(%edx), %si")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X1B, 0XB7 # sbbw " _(VALUE) "(%edi), %si")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X1B, 0XB6 # sbbw " _(VALUE) "(%esi), %si")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X1B, 0XB5 # sbbw " _(VALUE) "(%ebp), %si")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X1B, 0XB4, 0X24 # sbbw " _(VALUE) "(%esp), %si")\
	CMT_ASM(".long " _(VALUE))

#define SBB_BP_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0XA8 # sbbw " _(VALUE) "(%rax), %bp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BP_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0XAB # sbbw " _(VALUE) "(%rbx), %bp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BP_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0XA9 # sbbw " _(VALUE) "(%rcx), %bp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BP_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0XAA # sbbw " _(VALUE) "(%rdx), %bp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BP_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0XAF # sbbw " _(VALUE) "(%rdi), %bp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BP_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0XAE # sbbw " _(VALUE) "(%rsi), %bp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BP_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0XAD # sbbw " _(VALUE) "(%rbp), %bp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BP_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0XAC, 0X24 # sbbw " _(VALUE) "(%rsp), %bp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BP_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X1B, 0XA8 # sbbw " _(VALUE) "(%r8), %bp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BP_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X1B, 0XA9 # sbbw " _(VALUE) "(%r9), %bp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BP_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X1B, 0XAA # sbbw " _(VALUE) "(%r10), %bp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BP_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X1B, 0XAB # sbbw " _(VALUE) "(%r11), %bp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BP_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X1B, 0XAC, 0X24 # sbbw " _(VALUE) "(%r12), %bp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BP_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X1B, 0XAD # sbbw " _(VALUE) "(%r13), %bp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BP_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X1B, 0XAE # sbbw " _(VALUE) "(%r14), %bp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BP_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X1B, 0XAF # sbbw " _(VALUE) "(%r15), %bp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X1B, 0XA8 # sbbw " _(VALUE) "(%eax), %bp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X1B, 0XAB # sbbw " _(VALUE) "(%ebx), %bp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X1B, 0XA9 # sbbw " _(VALUE) "(%ecx), %bp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X1B, 0XAA # sbbw " _(VALUE) "(%edx), %bp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X1B, 0XAF # sbbw " _(VALUE) "(%edi), %bp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X1B, 0XAE # sbbw " _(VALUE) "(%esi), %bp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X1B, 0XAD # sbbw " _(VALUE) "(%ebp), %bp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X1B, 0XAC, 0X24 # sbbw " _(VALUE) "(%esp), %bp")\
	CMT_ASM(".long " _(VALUE))

#define SBB_SP_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0XA0 # sbbw " _(VALUE) "(%rax), %sp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SP_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0XA3 # sbbw " _(VALUE) "(%rbx), %sp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SP_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0XA1 # sbbw " _(VALUE) "(%rcx), %sp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SP_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0XA2 # sbbw " _(VALUE) "(%rdx), %sp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SP_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0XA7 # sbbw " _(VALUE) "(%rdi), %sp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SP_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0XA6 # sbbw " _(VALUE) "(%rsi), %sp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SP_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0XA5 # sbbw " _(VALUE) "(%rbp), %sp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SP_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X1B, 0XA4, 0X24 # sbbw " _(VALUE) "(%rsp), %sp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SP_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X1B, 0XA0 # sbbw " _(VALUE) "(%r8), %sp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SP_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X1B, 0XA1 # sbbw " _(VALUE) "(%r9), %sp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SP_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X1B, 0XA2 # sbbw " _(VALUE) "(%r10), %sp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SP_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X1B, 0XA3 # sbbw " _(VALUE) "(%r11), %sp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SP_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X1B, 0XA4, 0X24 # sbbw " _(VALUE) "(%r12), %sp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SP_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X1B, 0XA5 # sbbw " _(VALUE) "(%r13), %sp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SP_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X1B, 0XA6 # sbbw " _(VALUE) "(%r14), %sp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SP_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X1B, 0XA7 # sbbw " _(VALUE) "(%r15), %sp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X1B, 0XA0 # sbbw " _(VALUE) "(%eax), %sp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X1B, 0XA3 # sbbw " _(VALUE) "(%ebx), %sp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X1B, 0XA1 # sbbw " _(VALUE) "(%ecx), %sp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X1B, 0XA2 # sbbw " _(VALUE) "(%edx), %sp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X1B, 0XA7 # sbbw " _(VALUE) "(%edi), %sp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X1B, 0XA6 # sbbw " _(VALUE) "(%esi), %sp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X1B, 0XA5 # sbbw " _(VALUE) "(%ebp), %sp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X1B, 0XA4, 0X24 # sbbw " _(VALUE) "(%esp), %sp")\
	CMT_ASM(".long " _(VALUE))

#define SBB_R8W_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X1B, 0X80 # sbbw " _(VALUE) "(%rax), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8W_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X1B, 0X83 # sbbw " _(VALUE) "(%rbx), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8W_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X1B, 0X81 # sbbw " _(VALUE) "(%rcx), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8W_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X1B, 0X82 # sbbw " _(VALUE) "(%rdx), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8W_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X1B, 0X87 # sbbw " _(VALUE) "(%rdi), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8W_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X1B, 0X86 # sbbw " _(VALUE) "(%rsi), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8W_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X1B, 0X85 # sbbw " _(VALUE) "(%rbp), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8W_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X1B, 0X84, 0X24 # sbbw " _(VALUE) "(%rsp), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8W_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X1B, 0X80 # sbbw " _(VALUE) "(%r8), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8W_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X1B, 0X81 # sbbw " _(VALUE) "(%r9), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8W_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X1B, 0X82 # sbbw " _(VALUE) "(%r10), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8W_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X1B, 0X83 # sbbw " _(VALUE) "(%r11), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8W_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X1B, 0X84, 0X24 # sbbw " _(VALUE) "(%r12), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8W_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X1B, 0X85 # sbbw " _(VALUE) "(%r13), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8W_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X1B, 0X86 # sbbw " _(VALUE) "(%r14), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8W_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X1B, 0X87 # sbbw " _(VALUE) "(%r15), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8W_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0X80 # sbbw " _(VALUE) "(%eax), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8W_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0X83 # sbbw " _(VALUE) "(%ebx), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8W_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0X81 # sbbw " _(VALUE) "(%ecx), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8W_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0X82 # sbbw " _(VALUE) "(%edx), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8W_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0X87 # sbbw " _(VALUE) "(%edi), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8W_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0X86 # sbbw " _(VALUE) "(%esi), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8W_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0X85 # sbbw " _(VALUE) "(%ebp), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8W_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0X84, 0X24 # sbbw " _(VALUE) "(%esp), %r8w")\
	CMT_ASM(".long " _(VALUE))

#define SBB_R9W_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X1B, 0X88 # sbbw " _(VALUE) "(%rax), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9W_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X1B, 0X8B # sbbw " _(VALUE) "(%rbx), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9W_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X1B, 0X89 # sbbw " _(VALUE) "(%rcx), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9W_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X1B, 0X8A # sbbw " _(VALUE) "(%rdx), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9W_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X1B, 0X8F # sbbw " _(VALUE) "(%rdi), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9W_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X1B, 0X8E # sbbw " _(VALUE) "(%rsi), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9W_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X1B, 0X8D # sbbw " _(VALUE) "(%rbp), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9W_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X1B, 0X8C, 0X24 # sbbw " _(VALUE) "(%rsp), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9W_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X1B, 0X88 # sbbw " _(VALUE) "(%r8), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9W_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X1B, 0X89 # sbbw " _(VALUE) "(%r9), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9W_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X1B, 0X8A # sbbw " _(VALUE) "(%r10), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9W_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X1B, 0X8B # sbbw " _(VALUE) "(%r11), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9W_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X1B, 0X8C, 0X24 # sbbw " _(VALUE) "(%r12), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9W_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X1B, 0X8D # sbbw " _(VALUE) "(%r13), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9W_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X1B, 0X8E # sbbw " _(VALUE) "(%r14), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9W_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X1B, 0X8F # sbbw " _(VALUE) "(%r15), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9W_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0X88 # sbbw " _(VALUE) "(%eax), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9W_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0X8B # sbbw " _(VALUE) "(%ebx), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9W_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0X89 # sbbw " _(VALUE) "(%ecx), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9W_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0X8A # sbbw " _(VALUE) "(%edx), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9W_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0X8F # sbbw " _(VALUE) "(%edi), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9W_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0X8E # sbbw " _(VALUE) "(%esi), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9W_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0X8D # sbbw " _(VALUE) "(%ebp), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9W_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0X8C, 0X24 # sbbw " _(VALUE) "(%esp), %r9w")\
	CMT_ASM(".long " _(VALUE))

#define SBB_R10W_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X1B, 0X90 # sbbw " _(VALUE) "(%rax), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10W_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X1B, 0X93 # sbbw " _(VALUE) "(%rbx), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10W_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X1B, 0X91 # sbbw " _(VALUE) "(%rcx), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10W_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X1B, 0X92 # sbbw " _(VALUE) "(%rdx), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10W_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X1B, 0X97 # sbbw " _(VALUE) "(%rdi), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10W_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X1B, 0X96 # sbbw " _(VALUE) "(%rsi), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10W_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X1B, 0X95 # sbbw " _(VALUE) "(%rbp), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10W_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X1B, 0X94, 0X24 # sbbw " _(VALUE) "(%rsp), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10W_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X1B, 0X90 # sbbw " _(VALUE) "(%r8), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10W_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X1B, 0X91 # sbbw " _(VALUE) "(%r9), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10W_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X1B, 0X92 # sbbw " _(VALUE) "(%r10), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10W_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X1B, 0X93 # sbbw " _(VALUE) "(%r11), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10W_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X1B, 0X94, 0X24 # sbbw " _(VALUE) "(%r12), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10W_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X1B, 0X95 # sbbw " _(VALUE) "(%r13), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10W_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X1B, 0X96 # sbbw " _(VALUE) "(%r14), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10W_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X1B, 0X97 # sbbw " _(VALUE) "(%r15), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10W_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0X90 # sbbw " _(VALUE) "(%eax), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10W_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0X93 # sbbw " _(VALUE) "(%ebx), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10W_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0X91 # sbbw " _(VALUE) "(%ecx), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10W_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0X92 # sbbw " _(VALUE) "(%edx), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10W_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0X97 # sbbw " _(VALUE) "(%edi), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10W_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0X96 # sbbw " _(VALUE) "(%esi), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10W_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0X95 # sbbw " _(VALUE) "(%ebp), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10W_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0X94, 0X24 # sbbw " _(VALUE) "(%esp), %r10w")\
	CMT_ASM(".long " _(VALUE))

#define SBB_R11W_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X1B, 0X98 # sbbw " _(VALUE) "(%rax), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11W_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X1B, 0X9B # sbbw " _(VALUE) "(%rbx), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11W_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X1B, 0X99 # sbbw " _(VALUE) "(%rcx), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11W_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X1B, 0X9A # sbbw " _(VALUE) "(%rdx), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11W_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X1B, 0X9F # sbbw " _(VALUE) "(%rdi), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11W_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X1B, 0X9E # sbbw " _(VALUE) "(%rsi), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11W_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X1B, 0X9D # sbbw " _(VALUE) "(%rbp), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11W_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X1B, 0X9C, 0X24 # sbbw " _(VALUE) "(%rsp), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11W_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X1B, 0X98 # sbbw " _(VALUE) "(%r8), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11W_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X1B, 0X99 # sbbw " _(VALUE) "(%r9), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11W_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X1B, 0X9A # sbbw " _(VALUE) "(%r10), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11W_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X1B, 0X9B # sbbw " _(VALUE) "(%r11), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11W_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X1B, 0X9C, 0X24 # sbbw " _(VALUE) "(%r12), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11W_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X1B, 0X9D # sbbw " _(VALUE) "(%r13), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11W_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X1B, 0X9E # sbbw " _(VALUE) "(%r14), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11W_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X1B, 0X9F # sbbw " _(VALUE) "(%r15), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11W_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0X98 # sbbw " _(VALUE) "(%eax), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11W_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0X9B # sbbw " _(VALUE) "(%ebx), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11W_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0X99 # sbbw " _(VALUE) "(%ecx), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11W_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0X9A # sbbw " _(VALUE) "(%edx), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11W_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0X9F # sbbw " _(VALUE) "(%edi), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11W_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0X9E # sbbw " _(VALUE) "(%esi), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11W_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0X9D # sbbw " _(VALUE) "(%ebp), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11W_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0X9C, 0X24 # sbbw " _(VALUE) "(%esp), %r11w")\
	CMT_ASM(".long " _(VALUE))

#define SBB_R12W_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X1B, 0XA0 # sbbw " _(VALUE) "(%rax), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12W_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X1B, 0XA3 # sbbw " _(VALUE) "(%rbx), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12W_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X1B, 0XA1 # sbbw " _(VALUE) "(%rcx), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12W_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X1B, 0XA2 # sbbw " _(VALUE) "(%rdx), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12W_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X1B, 0XA7 # sbbw " _(VALUE) "(%rdi), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12W_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X1B, 0XA6 # sbbw " _(VALUE) "(%rsi), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12W_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X1B, 0XA5 # sbbw " _(VALUE) "(%rbp), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12W_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X1B, 0XA4, 0X24 # sbbw " _(VALUE) "(%rsp), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12W_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X1B, 0XA0 # sbbw " _(VALUE) "(%r8), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12W_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X1B, 0XA1 # sbbw " _(VALUE) "(%r9), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12W_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X1B, 0XA2 # sbbw " _(VALUE) "(%r10), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12W_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X1B, 0XA3 # sbbw " _(VALUE) "(%r11), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12W_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X1B, 0XA4, 0X24 # sbbw " _(VALUE) "(%r12), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12W_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X1B, 0XA5 # sbbw " _(VALUE) "(%r13), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12W_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X1B, 0XA6 # sbbw " _(VALUE) "(%r14), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12W_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X1B, 0XA7 # sbbw " _(VALUE) "(%r15), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12W_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0XA0 # sbbw " _(VALUE) "(%eax), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12W_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0XA3 # sbbw " _(VALUE) "(%ebx), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12W_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0XA1 # sbbw " _(VALUE) "(%ecx), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12W_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0XA2 # sbbw " _(VALUE) "(%edx), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12W_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0XA7 # sbbw " _(VALUE) "(%edi), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12W_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0XA6 # sbbw " _(VALUE) "(%esi), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12W_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0XA5 # sbbw " _(VALUE) "(%ebp), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12W_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0XA4, 0X24 # sbbw " _(VALUE) "(%esp), %r12w")\
	CMT_ASM(".long " _(VALUE))

#define SBB_R13W_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X1B, 0XA8 # sbbw " _(VALUE) "(%rax), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13W_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X1B, 0XAB # sbbw " _(VALUE) "(%rbx), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13W_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X1B, 0XA9 # sbbw " _(VALUE) "(%rcx), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13W_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X1B, 0XAA # sbbw " _(VALUE) "(%rdx), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13W_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X1B, 0XAF # sbbw " _(VALUE) "(%rdi), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13W_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X1B, 0XAE # sbbw " _(VALUE) "(%rsi), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13W_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X1B, 0XAD # sbbw " _(VALUE) "(%rbp), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13W_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X1B, 0XAC, 0X24 # sbbw " _(VALUE) "(%rsp), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13W_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X1B, 0XA8 # sbbw " _(VALUE) "(%r8), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13W_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X1B, 0XA9 # sbbw " _(VALUE) "(%r9), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13W_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X1B, 0XAA # sbbw " _(VALUE) "(%r10), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13W_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X1B, 0XAB # sbbw " _(VALUE) "(%r11), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13W_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X1B, 0XAC, 0X24 # sbbw " _(VALUE) "(%r12), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13W_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X1B, 0XAD # sbbw " _(VALUE) "(%r13), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13W_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X1B, 0XAE # sbbw " _(VALUE) "(%r14), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13W_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X1B, 0XAF # sbbw " _(VALUE) "(%r15), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13W_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0XA8 # sbbw " _(VALUE) "(%eax), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13W_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0XAB # sbbw " _(VALUE) "(%ebx), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13W_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0XA9 # sbbw " _(VALUE) "(%ecx), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13W_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0XAA # sbbw " _(VALUE) "(%edx), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13W_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0XAF # sbbw " _(VALUE) "(%edi), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13W_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0XAE # sbbw " _(VALUE) "(%esi), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13W_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0XAD # sbbw " _(VALUE) "(%ebp), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13W_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0XAC, 0X24 # sbbw " _(VALUE) "(%esp), %r13w")\
	CMT_ASM(".long " _(VALUE))

#define SBB_R14W_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X1B, 0XB0 # sbbw " _(VALUE) "(%rax), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14W_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X1B, 0XB3 # sbbw " _(VALUE) "(%rbx), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14W_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X1B, 0XB1 # sbbw " _(VALUE) "(%rcx), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14W_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X1B, 0XB2 # sbbw " _(VALUE) "(%rdx), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14W_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X1B, 0XB7 # sbbw " _(VALUE) "(%rdi), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14W_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X1B, 0XB6 # sbbw " _(VALUE) "(%rsi), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14W_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X1B, 0XB5 # sbbw " _(VALUE) "(%rbp), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14W_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X1B, 0XB4, 0X24 # sbbw " _(VALUE) "(%rsp), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14W_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X1B, 0XB0 # sbbw " _(VALUE) "(%r8), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14W_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X1B, 0XB1 # sbbw " _(VALUE) "(%r9), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14W_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X1B, 0XB2 # sbbw " _(VALUE) "(%r10), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14W_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X1B, 0XB3 # sbbw " _(VALUE) "(%r11), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14W_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X1B, 0XB4, 0X24 # sbbw " _(VALUE) "(%r12), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14W_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X1B, 0XB5 # sbbw " _(VALUE) "(%r13), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14W_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X1B, 0XB6 # sbbw " _(VALUE) "(%r14), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14W_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X1B, 0XB7 # sbbw " _(VALUE) "(%r15), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14W_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0XB0 # sbbw " _(VALUE) "(%eax), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14W_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0XB3 # sbbw " _(VALUE) "(%ebx), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14W_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0XB1 # sbbw " _(VALUE) "(%ecx), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14W_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0XB2 # sbbw " _(VALUE) "(%edx), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14W_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0XB7 # sbbw " _(VALUE) "(%edi), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14W_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0XB6 # sbbw " _(VALUE) "(%esi), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14W_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0XB5 # sbbw " _(VALUE) "(%ebp), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14W_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0XB4, 0X24 # sbbw " _(VALUE) "(%esp), %r14w")\
	CMT_ASM(".long " _(VALUE))

#define SBB_R15W_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X1B, 0XB8 # sbbw " _(VALUE) "(%rax), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15W_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X1B, 0XBB # sbbw " _(VALUE) "(%rbx), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15W_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X1B, 0XB9 # sbbw " _(VALUE) "(%rcx), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15W_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X1B, 0XBA # sbbw " _(VALUE) "(%rdx), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15W_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X1B, 0XBF # sbbw " _(VALUE) "(%rdi), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15W_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X1B, 0XBE # sbbw " _(VALUE) "(%rsi), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15W_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X1B, 0XBD # sbbw " _(VALUE) "(%rbp), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15W_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X1B, 0XBC, 0X24 # sbbw " _(VALUE) "(%rsp), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15W_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X1B, 0XB8 # sbbw " _(VALUE) "(%r8), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15W_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X1B, 0XB9 # sbbw " _(VALUE) "(%r9), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15W_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X1B, 0XBA # sbbw " _(VALUE) "(%r10), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15W_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X1B, 0XBB # sbbw " _(VALUE) "(%r11), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15W_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X1B, 0XBC, 0X24 # sbbw " _(VALUE) "(%r12), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15W_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X1B, 0XBD # sbbw " _(VALUE) "(%r13), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15W_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X1B, 0XBE # sbbw " _(VALUE) "(%r14), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15W_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X1B, 0XBF # sbbw " _(VALUE) "(%r15), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15W_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0XB8 # sbbw " _(VALUE) "(%eax), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15W_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0XBB # sbbw " _(VALUE) "(%ebx), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15W_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0XB9 # sbbw " _(VALUE) "(%ecx), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15W_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0XBA # sbbw " _(VALUE) "(%edx), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15W_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0XBF # sbbw " _(VALUE) "(%edi), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15W_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0XBE # sbbw " _(VALUE) "(%esi), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15W_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0XBD # sbbw " _(VALUE) "(%ebp), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15W_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X1B, 0XBC, 0X24 # sbbw " _(VALUE) "(%esp), %r15w")\
	CMT_ASM(".long " _(VALUE))

#define SBB_AX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0X80 # sbbw %ax, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0X83 # sbbw %ax, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0X81 # sbbw %ax, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0X82 # sbbw %ax, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0X87 # sbbw %ax, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0X86 # sbbw %ax, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0X85 # sbbw %ax, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0X84, 0X24 # sbbw %ax, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X19, 0X80 # sbbw %ax, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X19, 0X81 # sbbw %ax, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X19, 0X82 # sbbw %ax, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X19, 0X83 # sbbw %ax, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X19, 0X84, 0X24 # sbbw %ax, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X19, 0X85 # sbbw %ax, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X19, 0X86 # sbbw %ax, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X19, 0X87 # sbbw %ax, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X19, 0X80 # sbbw %ax, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X19, 0X83 # sbbw %ax, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X19, 0X81 # sbbw %ax, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X19, 0X82 # sbbw %ax, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X19, 0X87 # sbbw %ax, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X19, 0X86 # sbbw %ax, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X19, 0X85 # sbbw %ax, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_AX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X19, 0X84, 0X24 # sbbw %ax, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SBB_BX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0X98 # sbbw %bx, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0X9B # sbbw %bx, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0X99 # sbbw %bx, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0X9A # sbbw %bx, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0X9F # sbbw %bx, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0X9E # sbbw %bx, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0X9D # sbbw %bx, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0X9C, 0X24 # sbbw %bx, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X19, 0X98 # sbbw %bx, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X19, 0X99 # sbbw %bx, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X19, 0X9A # sbbw %bx, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X19, 0X9B # sbbw %bx, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X19, 0X9C, 0X24 # sbbw %bx, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X19, 0X9D # sbbw %bx, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X19, 0X9E # sbbw %bx, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X19, 0X9F # sbbw %bx, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X19, 0X98 # sbbw %bx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X19, 0X9B # sbbw %bx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X19, 0X99 # sbbw %bx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X19, 0X9A # sbbw %bx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X19, 0X9F # sbbw %bx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X19, 0X9E # sbbw %bx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X19, 0X9D # sbbw %bx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X19, 0X9C, 0X24 # sbbw %bx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SBB_CX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0X88 # sbbw %cx, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0X8B # sbbw %cx, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0X89 # sbbw %cx, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0X8A # sbbw %cx, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0X8F # sbbw %cx, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0X8E # sbbw %cx, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0X8D # sbbw %cx, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0X8C, 0X24 # sbbw %cx, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X19, 0X88 # sbbw %cx, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X19, 0X89 # sbbw %cx, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X19, 0X8A # sbbw %cx, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X19, 0X8B # sbbw %cx, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X19, 0X8C, 0X24 # sbbw %cx, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X19, 0X8D # sbbw %cx, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X19, 0X8E # sbbw %cx, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X19, 0X8F # sbbw %cx, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X19, 0X88 # sbbw %cx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X19, 0X8B # sbbw %cx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X19, 0X89 # sbbw %cx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X19, 0X8A # sbbw %cx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X19, 0X8F # sbbw %cx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X19, 0X8E # sbbw %cx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X19, 0X8D # sbbw %cx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_CX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X19, 0X8C, 0X24 # sbbw %cx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SBB_DX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0X90 # sbbw %dx, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0X93 # sbbw %dx, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0X91 # sbbw %dx, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0X92 # sbbw %dx, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0X97 # sbbw %dx, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0X96 # sbbw %dx, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0X95 # sbbw %dx, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0X94, 0X24 # sbbw %dx, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X19, 0X90 # sbbw %dx, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X19, 0X91 # sbbw %dx, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X19, 0X92 # sbbw %dx, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X19, 0X93 # sbbw %dx, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X19, 0X94, 0X24 # sbbw %dx, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X19, 0X95 # sbbw %dx, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X19, 0X96 # sbbw %dx, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X19, 0X97 # sbbw %dx, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X19, 0X90 # sbbw %dx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X19, 0X93 # sbbw %dx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X19, 0X91 # sbbw %dx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X19, 0X92 # sbbw %dx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X19, 0X97 # sbbw %dx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X19, 0X96 # sbbw %dx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X19, 0X95 # sbbw %dx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X19, 0X94, 0X24 # sbbw %dx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SBB_DI_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0XB8 # sbbw %di, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DI_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0XBB # sbbw %di, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DI_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0XB9 # sbbw %di, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DI_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0XBA # sbbw %di, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DI_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0XBF # sbbw %di, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DI_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0XBE # sbbw %di, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DI_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0XBD # sbbw %di, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DI_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0XBC, 0X24 # sbbw %di, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DI_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X19, 0XB8 # sbbw %di, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DI_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X19, 0XB9 # sbbw %di, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DI_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X19, 0XBA # sbbw %di, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DI_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X19, 0XBB # sbbw %di, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DI_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X19, 0XBC, 0X24 # sbbw %di, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DI_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X19, 0XBD # sbbw %di, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DI_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X19, 0XBE # sbbw %di, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DI_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X19, 0XBF # sbbw %di, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X19, 0XB8 # sbbw %di, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X19, 0XBB # sbbw %di, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X19, 0XB9 # sbbw %di, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X19, 0XBA # sbbw %di, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X19, 0XBF # sbbw %di, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X19, 0XBE # sbbw %di, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X19, 0XBD # sbbw %di, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_DI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X19, 0XBC, 0X24 # sbbw %di, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SBB_SI_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0XB0 # sbbw %si, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SI_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0XB3 # sbbw %si, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SI_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0XB1 # sbbw %si, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SI_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0XB2 # sbbw %si, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SI_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0XB7 # sbbw %si, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SI_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0XB6 # sbbw %si, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SI_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0XB5 # sbbw %si, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SI_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0XB4, 0X24 # sbbw %si, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SI_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X19, 0XB0 # sbbw %si, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SI_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X19, 0XB1 # sbbw %si, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SI_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X19, 0XB2 # sbbw %si, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SI_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X19, 0XB3 # sbbw %si, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SI_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X19, 0XB4, 0X24 # sbbw %si, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SI_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X19, 0XB5 # sbbw %si, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SI_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X19, 0XB6 # sbbw %si, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SI_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X19, 0XB7 # sbbw %si, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X19, 0XB0 # sbbw %si, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X19, 0XB3 # sbbw %si, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X19, 0XB1 # sbbw %si, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X19, 0XB2 # sbbw %si, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X19, 0XB7 # sbbw %si, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X19, 0XB6 # sbbw %si, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X19, 0XB5 # sbbw %si, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X19, 0XB4, 0X24 # sbbw %si, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SBB_BP_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0XA8 # sbbw %bp, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BP_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0XAB # sbbw %bp, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BP_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0XA9 # sbbw %bp, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BP_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0XAA # sbbw %bp, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BP_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0XAF # sbbw %bp, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BP_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0XAE # sbbw %bp, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BP_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0XAD # sbbw %bp, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BP_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0XAC, 0X24 # sbbw %bp, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BP_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X19, 0XA8 # sbbw %bp, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BP_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X19, 0XA9 # sbbw %bp, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BP_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X19, 0XAA # sbbw %bp, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BP_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X19, 0XAB # sbbw %bp, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BP_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X19, 0XAC, 0X24 # sbbw %bp, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BP_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X19, 0XAD # sbbw %bp, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BP_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X19, 0XAE # sbbw %bp, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BP_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X19, 0XAF # sbbw %bp, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X19, 0XA8 # sbbw %bp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X19, 0XAB # sbbw %bp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X19, 0XA9 # sbbw %bp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X19, 0XAA # sbbw %bp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X19, 0XAF # sbbw %bp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X19, 0XAE # sbbw %bp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X19, 0XAD # sbbw %bp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_BP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X19, 0XAC, 0X24 # sbbw %bp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SBB_SP_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0XA0 # sbbw %sp, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SP_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0XA3 # sbbw %sp, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SP_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0XA1 # sbbw %sp, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SP_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0XA2 # sbbw %sp, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SP_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0XA7 # sbbw %sp, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SP_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0XA6 # sbbw %sp, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SP_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0XA5 # sbbw %sp, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SP_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X19, 0XA4, 0X24 # sbbw %sp, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SP_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X19, 0XA0 # sbbw %sp, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SP_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X19, 0XA1 # sbbw %sp, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SP_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X19, 0XA2 # sbbw %sp, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SP_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X19, 0XA3 # sbbw %sp, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SP_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X19, 0XA4, 0X24 # sbbw %sp, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SP_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X19, 0XA5 # sbbw %sp, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SP_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X19, 0XA6 # sbbw %sp, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SP_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X19, 0XA7 # sbbw %sp, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X19, 0XA0 # sbbw %sp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X19, 0XA3 # sbbw %sp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X19, 0XA1 # sbbw %sp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X19, 0XA2 # sbbw %sp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X19, 0XA7 # sbbw %sp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X19, 0XA6 # sbbw %sp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X19, 0XA5 # sbbw %sp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_SP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X19, 0XA4, 0X24 # sbbw %sp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SBB_R8W_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X19, 0X80 # sbbw %r8w, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8W_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X19, 0X83 # sbbw %r8w, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8W_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X19, 0X81 # sbbw %r8w, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8W_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X19, 0X82 # sbbw %r8w, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8W_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X19, 0X87 # sbbw %r8w, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8W_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X19, 0X86 # sbbw %r8w, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8W_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X19, 0X85 # sbbw %r8w, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8W_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X19, 0X84, 0X24 # sbbw %r8w, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8W_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X19, 0X80 # sbbw %r8w, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8W_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X19, 0X81 # sbbw %r8w, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8W_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X19, 0X82 # sbbw %r8w, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8W_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X19, 0X83 # sbbw %r8w, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8W_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X19, 0X84, 0X24 # sbbw %r8w, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8W_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X19, 0X85 # sbbw %r8w, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8W_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X19, 0X86 # sbbw %r8w, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8W_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X19, 0X87 # sbbw %r8w, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8W_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0X80 # sbbw %r8w, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8W_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0X83 # sbbw %r8w, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8W_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0X81 # sbbw %r8w, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8W_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0X82 # sbbw %r8w, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8W_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0X87 # sbbw %r8w, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8W_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0X86 # sbbw %r8w, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8W_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0X85 # sbbw %r8w, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8W_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0X84, 0X24 # sbbw %r8w, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SBB_R9W_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X19, 0X88 # sbbw %r9w, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9W_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X19, 0X8B # sbbw %r9w, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9W_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X19, 0X89 # sbbw %r9w, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9W_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X19, 0X8A # sbbw %r9w, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9W_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X19, 0X8F # sbbw %r9w, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9W_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X19, 0X8E # sbbw %r9w, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9W_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X19, 0X8D # sbbw %r9w, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9W_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X19, 0X8C, 0X24 # sbbw %r9w, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9W_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X19, 0X88 # sbbw %r9w, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9W_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X19, 0X89 # sbbw %r9w, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9W_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X19, 0X8A # sbbw %r9w, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9W_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X19, 0X8B # sbbw %r9w, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9W_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X19, 0X8C, 0X24 # sbbw %r9w, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9W_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X19, 0X8D # sbbw %r9w, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9W_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X19, 0X8E # sbbw %r9w, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9W_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X19, 0X8F # sbbw %r9w, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9W_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0X88 # sbbw %r9w, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9W_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0X8B # sbbw %r9w, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9W_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0X89 # sbbw %r9w, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9W_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0X8A # sbbw %r9w, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9W_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0X8F # sbbw %r9w, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9W_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0X8E # sbbw %r9w, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9W_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0X8D # sbbw %r9w, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9W_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0X8C, 0X24 # sbbw %r9w, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SBB_R10W_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X19, 0X90 # sbbw %r10w, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10W_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X19, 0X93 # sbbw %r10w, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10W_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X19, 0X91 # sbbw %r10w, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10W_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X19, 0X92 # sbbw %r10w, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10W_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X19, 0X97 # sbbw %r10w, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10W_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X19, 0X96 # sbbw %r10w, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10W_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X19, 0X95 # sbbw %r10w, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10W_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X19, 0X94, 0X24 # sbbw %r10w, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10W_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X19, 0X90 # sbbw %r10w, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10W_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X19, 0X91 # sbbw %r10w, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10W_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X19, 0X92 # sbbw %r10w, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10W_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X19, 0X93 # sbbw %r10w, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10W_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X19, 0X94, 0X24 # sbbw %r10w, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10W_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X19, 0X95 # sbbw %r10w, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10W_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X19, 0X96 # sbbw %r10w, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10W_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X19, 0X97 # sbbw %r10w, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10W_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0X90 # sbbw %r10w, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10W_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0X93 # sbbw %r10w, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10W_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0X91 # sbbw %r10w, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10W_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0X92 # sbbw %r10w, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10W_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0X97 # sbbw %r10w, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10W_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0X96 # sbbw %r10w, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10W_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0X95 # sbbw %r10w, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10W_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0X94, 0X24 # sbbw %r10w, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SBB_R11W_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X19, 0X98 # sbbw %r11w, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11W_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X19, 0X9B # sbbw %r11w, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11W_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X19, 0X99 # sbbw %r11w, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11W_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X19, 0X9A # sbbw %r11w, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11W_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X19, 0X9F # sbbw %r11w, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11W_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X19, 0X9E # sbbw %r11w, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11W_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X19, 0X9D # sbbw %r11w, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11W_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X19, 0X9C, 0X24 # sbbw %r11w, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11W_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X19, 0X98 # sbbw %r11w, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11W_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X19, 0X99 # sbbw %r11w, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11W_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X19, 0X9A # sbbw %r11w, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11W_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X19, 0X9B # sbbw %r11w, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11W_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X19, 0X9C, 0X24 # sbbw %r11w, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11W_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X19, 0X9D # sbbw %r11w, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11W_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X19, 0X9E # sbbw %r11w, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11W_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X19, 0X9F # sbbw %r11w, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11W_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0X98 # sbbw %r11w, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11W_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0X9B # sbbw %r11w, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11W_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0X99 # sbbw %r11w, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11W_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0X9A # sbbw %r11w, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11W_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0X9F # sbbw %r11w, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11W_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0X9E # sbbw %r11w, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11W_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0X9D # sbbw %r11w, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11W_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0X9C, 0X24 # sbbw %r11w, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SBB_R12W_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X19, 0XA0 # sbbw %r12w, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12W_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X19, 0XA3 # sbbw %r12w, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12W_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X19, 0XA1 # sbbw %r12w, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12W_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X19, 0XA2 # sbbw %r12w, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12W_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X19, 0XA7 # sbbw %r12w, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12W_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X19, 0XA6 # sbbw %r12w, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12W_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X19, 0XA5 # sbbw %r12w, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12W_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X19, 0XA4, 0X24 # sbbw %r12w, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12W_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X19, 0XA0 # sbbw %r12w, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12W_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X19, 0XA1 # sbbw %r12w, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12W_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X19, 0XA2 # sbbw %r12w, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12W_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X19, 0XA3 # sbbw %r12w, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12W_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X19, 0XA4, 0X24 # sbbw %r12w, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12W_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X19, 0XA5 # sbbw %r12w, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12W_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X19, 0XA6 # sbbw %r12w, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12W_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X19, 0XA7 # sbbw %r12w, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12W_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0XA0 # sbbw %r12w, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12W_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0XA3 # sbbw %r12w, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12W_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0XA1 # sbbw %r12w, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12W_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0XA2 # sbbw %r12w, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12W_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0XA7 # sbbw %r12w, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12W_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0XA6 # sbbw %r12w, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12W_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0XA5 # sbbw %r12w, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12W_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0XA4, 0X24 # sbbw %r12w, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SBB_R13W_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X19, 0XA8 # sbbw %r13w, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13W_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X19, 0XAB # sbbw %r13w, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13W_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X19, 0XA9 # sbbw %r13w, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13W_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X19, 0XAA # sbbw %r13w, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13W_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X19, 0XAF # sbbw %r13w, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13W_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X19, 0XAE # sbbw %r13w, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13W_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X19, 0XAD # sbbw %r13w, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13W_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X19, 0XAC, 0X24 # sbbw %r13w, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13W_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X19, 0XA8 # sbbw %r13w, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13W_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X19, 0XA9 # sbbw %r13w, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13W_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X19, 0XAA # sbbw %r13w, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13W_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X19, 0XAB # sbbw %r13w, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13W_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X19, 0XAC, 0X24 # sbbw %r13w, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13W_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X19, 0XAD # sbbw %r13w, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13W_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X19, 0XAE # sbbw %r13w, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13W_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X19, 0XAF # sbbw %r13w, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13W_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0XA8 # sbbw %r13w, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13W_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0XAB # sbbw %r13w, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13W_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0XA9 # sbbw %r13w, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13W_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0XAA # sbbw %r13w, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13W_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0XAF # sbbw %r13w, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13W_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0XAE # sbbw %r13w, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13W_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0XAD # sbbw %r13w, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13W_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0XAC, 0X24 # sbbw %r13w, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SBB_R14W_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X19, 0XB0 # sbbw %r14w, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14W_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X19, 0XB3 # sbbw %r14w, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14W_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X19, 0XB1 # sbbw %r14w, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14W_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X19, 0XB2 # sbbw %r14w, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14W_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X19, 0XB7 # sbbw %r14w, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14W_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X19, 0XB6 # sbbw %r14w, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14W_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X19, 0XB5 # sbbw %r14w, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14W_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X19, 0XB4, 0X24 # sbbw %r14w, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14W_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X19, 0XB0 # sbbw %r14w, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14W_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X19, 0XB1 # sbbw %r14w, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14W_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X19, 0XB2 # sbbw %r14w, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14W_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X19, 0XB3 # sbbw %r14w, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14W_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X19, 0XB4, 0X24 # sbbw %r14w, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14W_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X19, 0XB5 # sbbw %r14w, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14W_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X19, 0XB6 # sbbw %r14w, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14W_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X19, 0XB7 # sbbw %r14w, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14W_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0XB0 # sbbw %r14w, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14W_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0XB3 # sbbw %r14w, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14W_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0XB1 # sbbw %r14w, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14W_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0XB2 # sbbw %r14w, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14W_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0XB7 # sbbw %r14w, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14W_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0XB6 # sbbw %r14w, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14W_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0XB5 # sbbw %r14w, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14W_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0XB4, 0X24 # sbbw %r14w, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SBB_R15W_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X19, 0XB8 # sbbw %r15w, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15W_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X19, 0XBB # sbbw %r15w, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15W_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X19, 0XB9 # sbbw %r15w, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15W_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X19, 0XBA # sbbw %r15w, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15W_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X19, 0XBF # sbbw %r15w, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15W_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X19, 0XBE # sbbw %r15w, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15W_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X19, 0XBD # sbbw %r15w, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15W_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X19, 0XBC, 0X24 # sbbw %r15w, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15W_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X19, 0XB8 # sbbw %r15w, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15W_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X19, 0XB9 # sbbw %r15w, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15W_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X19, 0XBA # sbbw %r15w, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15W_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X19, 0XBB # sbbw %r15w, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15W_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X19, 0XBC, 0X24 # sbbw %r15w, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15W_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X19, 0XBD # sbbw %r15w, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15W_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X19, 0XBE # sbbw %r15w, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15W_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X19, 0XBF # sbbw %r15w, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15W_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0XB8 # sbbw %r15w, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15W_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0XBB # sbbw %r15w, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15W_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0XB9 # sbbw %r15w, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15W_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0XBA # sbbw %r15w, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15W_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0XBF # sbbw %r15w, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15W_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0XBE # sbbw %r15w, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15W_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0XBD # sbbw %r15w, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15W_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X19, 0XBC, 0X24 # sbbw %r15w, " _(VALUE) "(%esp)")\
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
