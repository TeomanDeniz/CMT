#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************** [v] 8-BIT MEMORY [v] ************************** */
#ifdef __SYSTEM_16_BIT__
#define SUB_AL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X2A, 0X06 # subb (" _(VALUE) "), %al")\
	CMT_ASM(".short " _(VALUE))
#define SUB_BL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X2A, 0X1E # subb (" _(VALUE) "), %bl")\
	CMT_ASM(".short " _(VALUE))
#define SUB_CL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X2A, 0X0E # subb (" _(VALUE) "), %cl")\
	CMT_ASM(".short " _(VALUE))
#define SUB_DL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X2A, 0X16 # subb (" _(VALUE) "), %dl")\
	CMT_ASM(".short " _(VALUE))

#define SUB_AL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X28, 0X06 # subb %al, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define SUB_BL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X28, 0X1E # subb %bl, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define SUB_CL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X28, 0X0E # subb %cl, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define SUB_DL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X28, 0X16 # subb %dl, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))

#define SUB_AL_FROM_PTR_BX CMT_ASM(".byte 0X2A, 0X07 # subb (%bx), %al")
#define SUB_AL_FROM_PTR_BP CMT_ASM(".byte 0X2A, 0X46, 0X00 # subb (%bp), %al")
#define SUB_AL_FROM_PTR_SI CMT_ASM(".byte 0X2A, 0X04 # subb (%si), %al")
#define SUB_AL_FROM_PTR_DI CMT_ASM(".byte 0X2A, 0X05 # subb (%di), %al")

#define SUB_BL_FROM_PTR_BX CMT_ASM(".byte 0X2A, 0X1F # subb (%bx), %bl")
#define SUB_BL_FROM_PTR_BP CMT_ASM(".byte 0X2A, 0X5E, 0X00 # subb (%bp), %bl")
#define SUB_BL_FROM_PTR_SI CMT_ASM(".byte 0X2A, 0X1C # subb (%si), %bl")
#define SUB_BL_FROM_PTR_DI CMT_ASM(".byte 0X2A, 0X1D # subb (%di), %bl")

#define SUB_CL_FROM_PTR_BX CMT_ASM(".byte 0X2A, 0X0F # subb (%bx), %cl")
#define SUB_CL_FROM_PTR_BP CMT_ASM(".byte 0X2A, 0X4E, 0X00 # subb (%bp), %cl")
#define SUB_CL_FROM_PTR_SI CMT_ASM(".byte 0X2A, 0X0C # subb (%si), %cl")
#define SUB_CL_FROM_PTR_DI CMT_ASM(".byte 0X2A, 0X0D # subb (%di), %cl")

#define SUB_DL_FROM_PTR_BX CMT_ASM(".byte 0X2A, 0X17 # subb (%bx), %dl")
#define SUB_DL_FROM_PTR_BP CMT_ASM(".byte 0X2A, 0X56, 0X00 # subb (%bp), %dl")
#define SUB_DL_FROM_PTR_SI CMT_ASM(".byte 0X2A, 0X14 # subb (%si), %dl")
#define SUB_DL_FROM_PTR_DI CMT_ASM(".byte 0X2A, 0X15 # subb (%di), %dl")

#define SUB_AL_TO_PTR_BX CMT_ASM(".byte 0X28, 0X07 # subb %al, (%bx)")
#define SUB_AL_TO_PTR_BP CMT_ASM(".byte 0X28, 0X46, 0X00 # subb %al, (%bp)")
#define SUB_AL_TO_PTR_SI CMT_ASM(".byte 0X28, 0X04 # subb %al, (%si)")
#define SUB_AL_TO_PTR_DI CMT_ASM(".byte 0X28, 0X05 # subb %al, (%di)")

#define SUB_BL_TO_PTR_BX CMT_ASM(".byte 0X28, 0X1F # subb %bl, (%bx)")
#define SUB_BL_TO_PTR_BP CMT_ASM(".byte 0X28, 0X5E, 0X00 # subb %bl, (%bp)")
#define SUB_BL_TO_PTR_SI CMT_ASM(".byte 0X28, 0X1C # subb %bl, (%si)")
#define SUB_BL_TO_PTR_DI CMT_ASM(".byte 0X28, 0X1D # subb %bl, (%di)")

#define SUB_CL_TO_PTR_BX CMT_ASM(".byte 0X28, 0X0F # subb %cl, (%bx)")
#define SUB_CL_TO_PTR_BP CMT_ASM(".byte 0X28, 0X4E, 0X00 # subb %cl, (%bp)")
#define SUB_CL_TO_PTR_SI CMT_ASM(".byte 0X28, 0X0C # subb %cl, (%si)")
#define SUB_CL_TO_PTR_DI CMT_ASM(".byte 0X28, 0X0D # subb %cl, (%di)")

#define SUB_DL_TO_PTR_BX CMT_ASM(".byte 0X28, 0X17 # subb %dl, (%bx)")
#define SUB_DL_TO_PTR_BP CMT_ASM(".byte 0X28, 0X56, 0X00 # subb %dl, (%bp)")
#define SUB_DL_TO_PTR_SI CMT_ASM(".byte 0X28, 0X14 # subb %dl, (%si)")
#define SUB_DL_TO_PTR_DI CMT_ASM(".byte 0X28, 0X15 # subb %dl, (%di)")

#define SUB_AL_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X2A, 0X87 # subb " _(VALUE) "(%bx), %al")\
	CMT_ASM(".short " _(VALUE))
#define SUB_AL_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X2A, 0X86 # subb " _(VALUE) "(%bp), %al")\
	CMT_ASM(".short " _(VALUE))
#define SUB_AL_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X2A, 0X84 # subb " _(VALUE) "(%si), %al")\
	CMT_ASM(".short " _(VALUE))
#define SUB_AL_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X2A, 0X85 # subb " _(VALUE) "(%di), %al")\
	CMT_ASM(".short " _(VALUE))

#define SUB_BL_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X2A, 0X9F # subb " _(VALUE) "(%bx), %bl")\
	CMT_ASM(".short " _(VALUE))
#define SUB_BL_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X2A, 0X9E # subb " _(VALUE) "(%bp), %bl")\
	CMT_ASM(".short " _(VALUE))
#define SUB_BL_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X2A, 0X9C # subb " _(VALUE) "(%si), %bl")\
	CMT_ASM(".short " _(VALUE))
#define SUB_BL_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X2A, 0X9D # subb " _(VALUE) "(%di), %bl")\
	CMT_ASM(".short " _(VALUE))

#define SUB_CL_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X2A, 0X8F # subb " _(VALUE) "(%bx), %cl")\
	CMT_ASM(".short " _(VALUE))
#define SUB_CL_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X2A, 0X8E # subb " _(VALUE) "(%bp), %cl")\
	CMT_ASM(".short " _(VALUE))
#define SUB_CL_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X2A, 0X8C # subb " _(VALUE) "(%si), %cl")\
	CMT_ASM(".short " _(VALUE))
#define SUB_CL_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X2A, 0X8D # subb " _(VALUE) "(%di), %cl")\
	CMT_ASM(".short " _(VALUE))

#define SUB_DL_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X2A, 0X97 # subb " _(VALUE) "(%bx), %dl")\
	CMT_ASM(".short " _(VALUE))
#define SUB_DL_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X2A, 0X96 # subb " _(VALUE) "(%bp), %dl")\
	CMT_ASM(".short " _(VALUE))
#define SUB_DL_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X2A, 0X94 # subb " _(VALUE) "(%si), %dl")\
	CMT_ASM(".short " _(VALUE))
#define SUB_DL_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X2A, 0X95 # subb " _(VALUE) "(%di), %dl")\
	CMT_ASM(".short " _(VALUE))

#define SUB_AL_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X28, 0X87 # subb %al, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define SUB_AL_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X28, 0X86 # subb %al, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define SUB_AL_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X28, 0X84 # subb %al, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define SUB_AL_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X28, 0X85 # subb %al, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define SUB_BL_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X28, 0X9F # subb %bl, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define SUB_BL_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X28, 0X9E # subb %bl, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define SUB_BL_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X28, 0X9C # subb %bl, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define SUB_BL_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X28, 0X9D # subb %bl, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define SUB_CL_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X28, 0X8F # subb %cl, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define SUB_CL_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X28, 0X8E # subb %cl, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define SUB_CL_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X28, 0X8C # subb %cl, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define SUB_CL_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X28, 0X8D # subb %cl, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define SUB_DL_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X28, 0X97 # subb %dl, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define SUB_DL_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X28, 0X96 # subb %dl, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define SUB_DL_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X28, 0X94 # subb %dl, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define SUB_DL_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X28, 0X95 # subb %dl, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))
#endif /* __SYSTEM_16_BIT__ */

#ifdef __SYSTEM_32_BIT__
#define SUB_AL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X2A, 0X05 # subb (" _(VALUE) "), %al")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X2A, 0X1D # subb (" _(VALUE) "), %bl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X2A, 0X0D # subb (" _(VALUE) "), %cl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X2A, 0X15 # subb (" _(VALUE) "), %dl")\
	CMT_ASM(".long " _(VALUE))

#define SUB_AL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X28, 0X05 # subb %al, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X28, 0X1D # subb %bl, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X28, 0X0D # subb %cl, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X28, 0X15 # subb %dl, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))

#define SUB_AL_FROM_PTR_EAX CMT_ASM(".byte 0X2A, 0X00 # subb (%eax), %al")
#define SUB_AL_FROM_PTR_EBX CMT_ASM(".byte 0X2A, 0X03 # subb (%ebx), %al")
#define SUB_AL_FROM_PTR_ECX CMT_ASM(".byte 0X2A, 0X01 # subb (%ecx), %al")
#define SUB_AL_FROM_PTR_EDX CMT_ASM(".byte 0X2A, 0X02 # subb (%edx), %al")
#define SUB_AL_FROM_PTR_EDI CMT_ASM(".byte 0X2A, 0X07 # subb (%edi), %al")
#define SUB_AL_FROM_PTR_ESI CMT_ASM(".byte 0X2A, 0X06 # subb (%esi), %al")
#define SUB_AL_FROM_PTR_EBP CMT_ASM(".byte 0X2A, 0X45, 0X00 # subb (%ebp), %al")
#define SUB_AL_FROM_PTR_ESP CMT_ASM(".byte 0X2A, 0X04, 0X24 # subb (%esp), %al")
#define SUB_AL_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X2A, 0X07 # subb (%bx), %al")
#define SUB_AL_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X2A, 0X46, 0X00 # subb (%bp), %al")
#define SUB_AL_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X2A, 0X04 # subb (%si), %al")
#define SUB_AL_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X2A, 0X05 # subb (%di), %al")

#define SUB_BL_FROM_PTR_EAX CMT_ASM(".byte 0X2A, 0X18 # subb (%eax), %bl")
#define SUB_BL_FROM_PTR_EBX CMT_ASM(".byte 0X2A, 0X1B # subb (%ebx), %bl")
#define SUB_BL_FROM_PTR_ECX CMT_ASM(".byte 0X2A, 0X19 # subb (%ecx), %bl")
#define SUB_BL_FROM_PTR_EDX CMT_ASM(".byte 0X2A, 0X1A # subb (%edx), %bl")
#define SUB_BL_FROM_PTR_EDI CMT_ASM(".byte 0X2A, 0X1F # subb (%edi), %bl")
#define SUB_BL_FROM_PTR_ESI CMT_ASM(".byte 0X2A, 0X1E # subb (%esi), %bl")
#define SUB_BL_FROM_PTR_EBP CMT_ASM(".byte 0X2A, 0X5D, 0X00 # subb (%ebp), %bl")
#define SUB_BL_FROM_PTR_ESP CMT_ASM(".byte 0X2A, 0X1C, 0X24 # subb (%esp), %bl")
#define SUB_BL_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X2A, 0X1F # subb (%bx), %bl")
#define SUB_BL_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X2A, 0X5E, 0X00 # subb (%bp), %bl")
#define SUB_BL_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X2A, 0X1C # subb (%si), %bl")
#define SUB_BL_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X2A, 0X1D # subb (%di), %bl")

#define SUB_CL_FROM_PTR_EAX CMT_ASM(".byte 0X2A, 0X08 # subb (%eax), %cl")
#define SUB_CL_FROM_PTR_EBX CMT_ASM(".byte 0X2A, 0X0B # subb (%ebx), %cl")
#define SUB_CL_FROM_PTR_ECX CMT_ASM(".byte 0X2A, 0X09 # subb (%ecx), %cl")
#define SUB_CL_FROM_PTR_EDX CMT_ASM(".byte 0X2A, 0X0A # subb (%edx), %cl")
#define SUB_CL_FROM_PTR_EDI CMT_ASM(".byte 0X2A, 0X0F # subb (%edi), %cl")
#define SUB_CL_FROM_PTR_ESI CMT_ASM(".byte 0X2A, 0X0E # subb (%esi), %cl")
#define SUB_CL_FROM_PTR_EBP CMT_ASM(".byte 0X2A, 0X4D, 0X00 # subb (%ebp), %cl")
#define SUB_CL_FROM_PTR_ESP CMT_ASM(".byte 0X2A, 0X0C, 0X24 # subb (%esp), %cl")
#define SUB_CL_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X2A, 0X0F # subb (%bx), %cl")
#define SUB_CL_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X2A, 0X4E, 0X00 # subb (%bp), %cl")
#define SUB_CL_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X2A, 0X0C # subb (%si), %cl")
#define SUB_CL_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X2A, 0X0D # subb (%di), %cl")

#define SUB_DL_FROM_PTR_EAX CMT_ASM(".byte 0X2A, 0X10 # subb (%eax), %dl")
#define SUB_DL_FROM_PTR_EBX CMT_ASM(".byte 0X2A, 0X13 # subb (%ebx), %dl")
#define SUB_DL_FROM_PTR_ECX CMT_ASM(".byte 0X2A, 0X11 # subb (%ecx), %dl")
#define SUB_DL_FROM_PTR_EDX CMT_ASM(".byte 0X2A, 0X12 # subb (%edx), %dl")
#define SUB_DL_FROM_PTR_EDI CMT_ASM(".byte 0X2A, 0X17 # subb (%edi), %dl")
#define SUB_DL_FROM_PTR_ESI CMT_ASM(".byte 0X2A, 0X16 # subb (%esi), %dl")
#define SUB_DL_FROM_PTR_EBP CMT_ASM(".byte 0X2A, 0X55, 0X00 # subb (%ebp), %dl")
#define SUB_DL_FROM_PTR_ESP CMT_ASM(".byte 0X2A, 0X14, 0X24 # subb (%esp), %dl")
#define SUB_DL_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X2A, 0X17 # subb (%bx), %dl")
#define SUB_DL_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X2A, 0X56, 0X00 # subb (%bp), %dl")
#define SUB_DL_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X2A, 0X14 # subb (%si), %dl")
#define SUB_DL_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X2A, 0X15 # subb (%di), %dl")

#define SUB_AL_TO_PTR_EAX CMT_ASM(".byte 0X28, 0X00 # subb %al, (%eax)")
#define SUB_AL_TO_PTR_EBX CMT_ASM(".byte 0X28, 0X03 # subb %al, (%ebx)")
#define SUB_AL_TO_PTR_ECX CMT_ASM(".byte 0X28, 0X01 # subb %al, (%ecx)")
#define SUB_AL_TO_PTR_EDX CMT_ASM(".byte 0X28, 0X02 # subb %al, (%edx)")
#define SUB_AL_TO_PTR_EDI CMT_ASM(".byte 0X28, 0X07 # subb %al, (%edi)")
#define SUB_AL_TO_PTR_ESI CMT_ASM(".byte 0X28, 0X06 # subb %al, (%esi)")
#define SUB_AL_TO_PTR_EBP CMT_ASM(".byte 0X28, 0X45, 0X00 # subb %al, (%ebp)")
#define SUB_AL_TO_PTR_ESP CMT_ASM(".byte 0X28, 0X04, 0X24 # subb %al, (%esp)")
#define SUB_AL_TO_PTR_BX CMT_ASM(".byte 0X67, 0X28, 0X07 # subb %al, (%bx)")
#define SUB_AL_TO_PTR_BP CMT_ASM(".byte 0X67, 0X28, 0X46, 0X00 # subb %al, (%bp)")
#define SUB_AL_TO_PTR_SI CMT_ASM(".byte 0X67, 0X28, 0X04 # subb %al, (%si)")
#define SUB_AL_TO_PTR_DI CMT_ASM(".byte 0X67, 0X28, 0X05 # subb %al, (%di)")

#define SUB_BL_TO_PTR_EAX CMT_ASM(".byte 0X28, 0X18 # subb %bl, (%eax)")
#define SUB_BL_TO_PTR_EBX CMT_ASM(".byte 0X28, 0X1B # subb %bl, (%ebx)")
#define SUB_BL_TO_PTR_ECX CMT_ASM(".byte 0X28, 0X19 # subb %bl, (%ecx)")
#define SUB_BL_TO_PTR_EDX CMT_ASM(".byte 0X28, 0X1A # subb %bl, (%edx)")
#define SUB_BL_TO_PTR_EDI CMT_ASM(".byte 0X28, 0X1F # subb %bl, (%edi)")
#define SUB_BL_TO_PTR_ESI CMT_ASM(".byte 0X28, 0X1E # subb %bl, (%esi)")
#define SUB_BL_TO_PTR_EBP CMT_ASM(".byte 0X28, 0X5D, 0X00 # subb %bl, (%ebp)")
#define SUB_BL_TO_PTR_ESP CMT_ASM(".byte 0X28, 0X1C, 0X24 # subb %bl, (%esp)")
#define SUB_BL_TO_PTR_BX CMT_ASM(".byte 0X67, 0X28, 0X1F # subb %bl, (%bx)")
#define SUB_BL_TO_PTR_BP CMT_ASM(".byte 0X67, 0X28, 0X5E, 0X00 # subb %bl, (%bp)")
#define SUB_BL_TO_PTR_SI CMT_ASM(".byte 0X67, 0X28, 0X1C # subb %bl, (%si)")
#define SUB_BL_TO_PTR_DI CMT_ASM(".byte 0X67, 0X28, 0X1D # subb %bl, (%di)")

#define SUB_CL_TO_PTR_EAX CMT_ASM(".byte 0X28, 0X08 # subb %cl, (%eax)")
#define SUB_CL_TO_PTR_EBX CMT_ASM(".byte 0X28, 0X0B # subb %cl, (%ebx)")
#define SUB_CL_TO_PTR_ECX CMT_ASM(".byte 0X28, 0X09 # subb %cl, (%ecx)")
#define SUB_CL_TO_PTR_EDX CMT_ASM(".byte 0X28, 0X0A # subb %cl, (%edx)")
#define SUB_CL_TO_PTR_EDI CMT_ASM(".byte 0X28, 0X0F # subb %cl, (%edi)")
#define SUB_CL_TO_PTR_ESI CMT_ASM(".byte 0X28, 0X0E # subb %cl, (%esi)")
#define SUB_CL_TO_PTR_EBP CMT_ASM(".byte 0X28, 0X4D, 0X00 # subb %cl, (%ebp)")
#define SUB_CL_TO_PTR_ESP CMT_ASM(".byte 0X28, 0X0C, 0X24 # subb %cl, (%esp)")
#define SUB_CL_TO_PTR_BX CMT_ASM(".byte 0X67, 0X28, 0X0F # subb %cl, (%bx)")
#define SUB_CL_TO_PTR_BP CMT_ASM(".byte 0X67, 0X28, 0X4E, 0X00 # subb %cl, (%bp)")
#define SUB_CL_TO_PTR_SI CMT_ASM(".byte 0X67, 0X28, 0X0C # subb %cl, (%si)")
#define SUB_CL_TO_PTR_DI CMT_ASM(".byte 0X67, 0X28, 0X0D # subb %cl, (%di)")

#define SUB_DL_TO_PTR_EAX CMT_ASM(".byte 0X28, 0X10 # subb %dl, (%eax)")
#define SUB_DL_TO_PTR_EBX CMT_ASM(".byte 0X28, 0X13 # subb %dl, (%ebx)")
#define SUB_DL_TO_PTR_ECX CMT_ASM(".byte 0X28, 0X11 # subb %dl, (%ecx)")
#define SUB_DL_TO_PTR_EDX CMT_ASM(".byte 0X28, 0X12 # subb %dl, (%edx)")
#define SUB_DL_TO_PTR_EDI CMT_ASM(".byte 0X28, 0X17 # subb %dl, (%edi)")
#define SUB_DL_TO_PTR_ESI CMT_ASM(".byte 0X28, 0X16 # subb %dl, (%esi)")
#define SUB_DL_TO_PTR_EBP CMT_ASM(".byte 0X28, 0X55, 0X00 # subb %dl, (%ebp)")
#define SUB_DL_TO_PTR_ESP CMT_ASM(".byte 0X28, 0X14, 0X24 # subb %dl, (%esp)")
#define SUB_DL_TO_PTR_BX CMT_ASM(".byte 0X67, 0X28, 0X17 # subb %dl, (%bx)")
#define SUB_DL_TO_PTR_BP CMT_ASM(".byte 0X67, 0X28, 0X56, 0X00 # subb %dl, (%bp)")
#define SUB_DL_TO_PTR_SI CMT_ASM(".byte 0X67, 0X28, 0X14 # subb %dl, (%si)")
#define SUB_DL_TO_PTR_DI CMT_ASM(".byte 0X67, 0X28, 0X15 # subb %dl, (%di)")

#define SUB_AL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X2A, 0X80 # subb " _(VALUE) "(%eax), %al")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X2A, 0X83 # subb " _(VALUE) "(%ebx), %al")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X2A, 0X81 # subb " _(VALUE) "(%ecx), %al")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X2A, 0X82 # subb " _(VALUE) "(%edx), %al")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X2A, 0X87 # subb " _(VALUE) "(%edi), %al")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X2A, 0X86 # subb " _(VALUE) "(%esi), %al")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X2A, 0X85 # subb " _(VALUE) "(%ebp), %al")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X2A, 0X84, 0X24 # subb " _(VALUE) "(%esp), %al")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AL_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2A, 0X87 # subb " _(VALUE) "(%bx), %al")\
	CMT_ASM(".short " _(VALUE))
#define SUB_AL_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2A, 0X86 # subb " _(VALUE) "(%bp), %al")\
	CMT_ASM(".short " _(VALUE))
#define SUB_AL_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2A, 0X84 # subb " _(VALUE) "(%si), %al")\
	CMT_ASM(".short " _(VALUE))
#define SUB_AL_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2A, 0X85 # subb " _(VALUE) "(%di), %al")\
	CMT_ASM(".short " _(VALUE))

#define SUB_BL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X2A, 0X98 # subb " _(VALUE) "(%eax), %bl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X2A, 0X9B # subb " _(VALUE) "(%ebx), %bl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X2A, 0X99 # subb " _(VALUE) "(%ecx), %bl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X2A, 0X9A # subb " _(VALUE) "(%edx), %bl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X2A, 0X9F # subb " _(VALUE) "(%edi), %bl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X2A, 0X9E # subb " _(VALUE) "(%esi), %bl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X2A, 0X9D # subb " _(VALUE) "(%ebp), %bl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X2A, 0X9C, 0X24 # subb " _(VALUE) "(%esp), %bl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BL_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2A, 0X9F # subb " _(VALUE) "(%bx), %bl")\
	CMT_ASM(".short " _(VALUE))
#define SUB_BL_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2A, 0X9E # subb " _(VALUE) "(%bp), %bl")\
	CMT_ASM(".short " _(VALUE))
#define SUB_BL_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2A, 0X9C # subb " _(VALUE) "(%si), %bl")\
	CMT_ASM(".short " _(VALUE))
#define SUB_BL_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2A, 0X9D # subb " _(VALUE) "(%di), %bl")\
	CMT_ASM(".short " _(VALUE))

#define SUB_CL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X2A, 0X88 # subb " _(VALUE) "(%eax), %cl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X2A, 0X8B # subb " _(VALUE) "(%ebx), %cl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X2A, 0X89 # subb " _(VALUE) "(%ecx), %cl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X2A, 0X8A # subb " _(VALUE) "(%edx), %cl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X2A, 0X8F # subb " _(VALUE) "(%edi), %cl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X2A, 0X8E # subb " _(VALUE) "(%esi), %cl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X2A, 0X8D # subb " _(VALUE) "(%ebp), %cl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X2A, 0X8C, 0X24 # subb " _(VALUE) "(%esp), %cl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CL_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2A, 0X8F # subb " _(VALUE) "(%bx), %cl")\
	CMT_ASM(".short " _(VALUE))
#define SUB_CL_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2A, 0X8E # subb " _(VALUE) "(%bp), %cl")\
	CMT_ASM(".short " _(VALUE))
#define SUB_CL_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2A, 0X8C # subb " _(VALUE) "(%si), %cl")\
	CMT_ASM(".short " _(VALUE))
#define SUB_CL_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2A, 0X8D # subb " _(VALUE) "(%di), %cl")\
	CMT_ASM(".short " _(VALUE))

#define SUB_DL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X2A, 0X90 # subb " _(VALUE) "(%eax), %dl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X2A, 0X93 # subb " _(VALUE) "(%ebx), %dl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X2A, 0X91 # subb " _(VALUE) "(%ecx), %dl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X2A, 0X92 # subb " _(VALUE) "(%edx), %dl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X2A, 0X97 # subb " _(VALUE) "(%edi), %dl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X2A, 0X96 # subb " _(VALUE) "(%esi), %dl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X2A, 0X95 # subb " _(VALUE) "(%ebp), %dl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X2A, 0X94, 0X24 # subb " _(VALUE) "(%esp), %dl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DL_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2A, 0X97 # subb " _(VALUE) "(%bx), %dl")\
	CMT_ASM(".short " _(VALUE))
#define SUB_DL_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2A, 0X96 # subb " _(VALUE) "(%bp), %dl")\
	CMT_ASM(".short " _(VALUE))
#define SUB_DL_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2A, 0X94 # subb " _(VALUE) "(%si), %dl")\
	CMT_ASM(".short " _(VALUE))
#define SUB_DL_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2A, 0X95 # subb " _(VALUE) "(%di), %dl")\
	CMT_ASM(".short " _(VALUE))

#define SUB_AL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X28, 0X80 # subb %al, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X28, 0X83 # subb %al, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X28, 0X81 # subb %al, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X28, 0X82 # subb %al, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X28, 0X87 # subb %al, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X28, 0X86 # subb %al, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X28, 0X85 # subb %al, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X28, 0X84, 0X24 # subb %al, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AL_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X28, 0X87 # subb %al, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define SUB_AL_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X28, 0X86 # subb %al, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define SUB_AL_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X28, 0X84 # subb %al, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define SUB_AL_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X28, 0X85 # subb %al, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define SUB_BL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X28, 0X98 # subb %bl, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X28, 0X9B # subb %bl, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X28, 0X99 # subb %bl, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X28, 0X9A # subb %bl, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X28, 0X9F # subb %bl, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X28, 0X9E # subb %bl, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X28, 0X9D # subb %bl, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X28, 0X9C, 0X24 # subb %bl, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BL_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X28, 0X9F # subb %bl, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define SUB_BL_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X28, 0X9E # subb %bl, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define SUB_BL_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X28, 0X9C # subb %bl, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define SUB_BL_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X28, 0X9D # subb %bl, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define SUB_CL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X28, 0X88 # subb %cl, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X28, 0X8B # subb %cl, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X28, 0X89 # subb %cl, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X28, 0X8A # subb %cl, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X28, 0X8F # subb %cl, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X28, 0X8E # subb %cl, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X28, 0X8D # subb %cl, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X28, 0X8C, 0X24 # subb %cl, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CL_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X28, 0X8F # subb %cl, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define SUB_CL_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X28, 0X8E # subb %cl, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define SUB_CL_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X28, 0X8C # subb %cl, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define SUB_CL_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X28, 0X8D # subb %cl, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define SUB_DL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X28, 0X90 # subb %dl, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X28, 0X93 # subb %dl, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X28, 0X91 # subb %dl, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X28, 0X92 # subb %dl, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X28, 0X97 # subb %dl, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X28, 0X96 # subb %dl, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X28, 0X95 # subb %dl, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X28, 0X94, 0X24 # subb %dl, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DL_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X28, 0X97 # subb %dl, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define SUB_DL_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X28, 0X96 # subb %dl, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define SUB_DL_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X28, 0X94 # subb %dl, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define SUB_DL_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X28, 0X95 # subb %dl, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define SUB_AL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X2A, 0X04, 0X25 # subb (" _(VALUE) "), %al")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X2A, 0X1C, 0X25 # subb (" _(VALUE) "), %bl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X2A, 0X0C, 0X25 # subb (" _(VALUE) "), %cl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X2A, 0X14, 0X25 # subb (" _(VALUE) "), %dl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DIL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X40, 0X2A, 0X3C, 0X25 # subb (" _(VALUE) "), %dil")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SIL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X40, 0X2A, 0X34, 0X25 # subb (" _(VALUE) "), %sil")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BPL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X40, 0X2A, 0X2C, 0X25 # subb (" _(VALUE) "), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SPL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X40, 0X2A, 0X24, 0X25 # subb (" _(VALUE) "), %spl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8B_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2A, 0X04, 0X25 # subb (" _(VALUE) "), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9B_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2A, 0X0C, 0X25 # subb (" _(VALUE) "), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10B_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2A, 0X14, 0X25 # subb (" _(VALUE) "), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11B_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2A, 0X1C, 0X25 # subb (" _(VALUE) "), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12B_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2A, 0X24, 0X25 # subb (" _(VALUE) "), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13B_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2A, 0X2C, 0X25 # subb (" _(VALUE) "), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14B_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2A, 0X34, 0X25 # subb (" _(VALUE) "), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15B_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2A, 0X3C, 0X25 # subb (" _(VALUE) "), %r15b")\
	CMT_ASM(".long " _(VALUE))

#define SUB_AL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X28, 0X04, 0X25 # subb %al, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X28, 0X1C, 0X25 # subb %bl, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X28, 0X0C, 0X25 # subb %cl, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X28, 0X14, 0X25 # subb %dl, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DIL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X40, 0X28, 0X3C, 0X25 # subb %dil, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SIL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X40, 0X28, 0X34, 0X25 # subb %sil, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BPL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X40, 0X28, 0X2C, 0X25 # subb %bpl, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SPL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X40, 0X28, 0X24, 0X25 # subb %spl, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8B_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X28, 0X04, 0X25 # subb %r8b, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9B_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X28, 0X0C, 0X25 # subb %r9b, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10B_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X28, 0X14, 0X25 # subb %r10b, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11B_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X28, 0X1C, 0X25 # subb %r11b, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12B_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X28, 0X24, 0X25 # subb %r12b, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13B_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X28, 0X2C, 0X25 # subb %r13b, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14B_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X28, 0X34, 0X25 # subb %r14b, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15B_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X28, 0X3C, 0X25 # subb %r15b, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))

#define SUB_AL_FROM_PTR_RAX CMT_ASM(".byte 0X2A, 0X00 # subb (%rax), %al")
#define SUB_AL_FROM_PTR_RBX CMT_ASM(".byte 0X2A, 0X03 # subb (%rbx), %al")
#define SUB_AL_FROM_PTR_RCX CMT_ASM(".byte 0X2A, 0X01 # subb (%rcx), %al")
#define SUB_AL_FROM_PTR_RDX CMT_ASM(".byte 0X2A, 0X02 # subb (%rdx), %al")
#define SUB_AL_FROM_PTR_RDI CMT_ASM(".byte 0X2A, 0X07 # subb (%rdi), %al")
#define SUB_AL_FROM_PTR_RSI CMT_ASM(".byte 0X2A, 0X06 # subb (%rsi), %al")
#define SUB_AL_FROM_PTR_RBP CMT_ASM(".byte 0X2A, 0X45, 0X00 # subb (%rbp), %al")
#define SUB_AL_FROM_PTR_RSP CMT_ASM(".byte 0X2A, 0X04, 0X24 # subb (%rsp), %al")
#define SUB_AL_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X2A, 0X00 # subb (%r8), %al")
#define SUB_AL_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X2A, 0X01 # subb (%r9), %al")
#define SUB_AL_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X2A, 0X02 # subb (%r10), %al")
#define SUB_AL_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X2A, 0X03 # subb (%r11), %al")
#define SUB_AL_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X2A, 0X04, 0X24 # subb (%r12), %al")
#define SUB_AL_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X2A, 0X45, 0X00 # subb (%r13), %al")
#define SUB_AL_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X2A, 0X06 # subb (%r14), %al")
#define SUB_AL_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X2A, 0X07 # subb (%r15), %al")
#define SUB_AL_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X2A, 0X00 # subb (%eax), %al")
#define SUB_AL_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X2A, 0X03 # subb (%ebx), %al")
#define SUB_AL_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X2A, 0X01 # subb (%ecx), %al")
#define SUB_AL_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X2A, 0X02 # subb (%edx), %al")
#define SUB_AL_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X2A, 0X07 # subb (%edi), %al")
#define SUB_AL_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X2A, 0X06 # subb (%esi), %al")
#define SUB_AL_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X2A, 0X45, 0X00 # subb (%ebp), %al")
#define SUB_AL_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X2A, 0X04, 0X24 # subb (%esp), %al")

#define SUB_BL_FROM_PTR_RAX CMT_ASM(".byte 0X2A, 0X18 # subb (%rax), %bl")
#define SUB_BL_FROM_PTR_RBX CMT_ASM(".byte 0X2A, 0X1B # subb (%rbx), %bl")
#define SUB_BL_FROM_PTR_RCX CMT_ASM(".byte 0X2A, 0X19 # subb (%rcx), %bl")
#define SUB_BL_FROM_PTR_RDX CMT_ASM(".byte 0X2A, 0X1A # subb (%rdx), %bl")
#define SUB_BL_FROM_PTR_RDI CMT_ASM(".byte 0X2A, 0X1F # subb (%rdi), %bl")
#define SUB_BL_FROM_PTR_RSI CMT_ASM(".byte 0X2A, 0X1E # subb (%rsi), %bl")
#define SUB_BL_FROM_PTR_RBP CMT_ASM(".byte 0X2A, 0X5D, 0X00 # subb (%rbp), %bl")
#define SUB_BL_FROM_PTR_RSP CMT_ASM(".byte 0X2A, 0X1C, 0X24 # subb (%rsp), %bl")
#define SUB_BL_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X2A, 0X18 # subb (%r8), %bl")
#define SUB_BL_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X2A, 0X19 # subb (%r9), %bl")
#define SUB_BL_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X2A, 0X1A # subb (%r10), %bl")
#define SUB_BL_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X2A, 0X1B # subb (%r11), %bl")
#define SUB_BL_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X2A, 0X1C, 0X24 # subb (%r12), %bl")
#define SUB_BL_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X2A, 0X5D, 0X00 # subb (%r13), %bl")
#define SUB_BL_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X2A, 0X1E # subb (%r14), %bl")
#define SUB_BL_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X2A, 0X1F # subb (%r15), %bl")
#define SUB_BL_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X2A, 0X18 # subb (%eax), %bl")
#define SUB_BL_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X2A, 0X1B # subb (%ebx), %bl")
#define SUB_BL_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X2A, 0X19 # subb (%ecx), %bl")
#define SUB_BL_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X2A, 0X1A # subb (%edx), %bl")
#define SUB_BL_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X2A, 0X1F # subb (%edi), %bl")
#define SUB_BL_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X2A, 0X1E # subb (%esi), %bl")
#define SUB_BL_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X2A, 0X5D, 0X00 # subb (%ebp), %bl")
#define SUB_BL_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X2A, 0X1C, 0X24 # subb (%esp), %bl")

#define SUB_CL_FROM_PTR_RAX CMT_ASM(".byte 0X2A, 0X08 # subb (%rax), %cl")
#define SUB_CL_FROM_PTR_RBX CMT_ASM(".byte 0X2A, 0X0B # subb (%rbx), %cl")
#define SUB_CL_FROM_PTR_RCX CMT_ASM(".byte 0X2A, 0X09 # subb (%rcx), %cl")
#define SUB_CL_FROM_PTR_RDX CMT_ASM(".byte 0X2A, 0X0A # subb (%rdx), %cl")
#define SUB_CL_FROM_PTR_RDI CMT_ASM(".byte 0X2A, 0X0F # subb (%rdi), %cl")
#define SUB_CL_FROM_PTR_RSI CMT_ASM(".byte 0X2A, 0X0E # subb (%rsi), %cl")
#define SUB_CL_FROM_PTR_RBP CMT_ASM(".byte 0X2A, 0X4D, 0X00 # subb (%rbp), %cl")
#define SUB_CL_FROM_PTR_RSP CMT_ASM(".byte 0X2A, 0X0C, 0X24 # subb (%rsp), %cl")
#define SUB_CL_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X2A, 0X08 # subb (%r8), %cl")
#define SUB_CL_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X2A, 0X09 # subb (%r9), %cl")
#define SUB_CL_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X2A, 0X0A # subb (%r10), %cl")
#define SUB_CL_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X2A, 0X0B # subb (%r11), %cl")
#define SUB_CL_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X2A, 0X0C, 0X24 # subb (%r12), %cl")
#define SUB_CL_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X2A, 0X4D, 0X00 # subb (%r13), %cl")
#define SUB_CL_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X2A, 0X0E # subb (%r14), %cl")
#define SUB_CL_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X2A, 0X0F # subb (%r15), %cl")
#define SUB_CL_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X2A, 0X08 # subb (%eax), %cl")
#define SUB_CL_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X2A, 0X0B # subb (%ebx), %cl")
#define SUB_CL_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X2A, 0X09 # subb (%ecx), %cl")
#define SUB_CL_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X2A, 0X0A # subb (%edx), %cl")
#define SUB_CL_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X2A, 0X0F # subb (%edi), %cl")
#define SUB_CL_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X2A, 0X0E # subb (%esi), %cl")
#define SUB_CL_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X2A, 0X4D, 0X00 # subb (%ebp), %cl")
#define SUB_CL_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X2A, 0X0C, 0X24 # subb (%esp), %cl")

#define SUB_DL_FROM_PTR_RAX CMT_ASM(".byte 0X2A, 0X10 # subb (%rax), %dl")
#define SUB_DL_FROM_PTR_RBX CMT_ASM(".byte 0X2A, 0X13 # subb (%rbx), %dl")
#define SUB_DL_FROM_PTR_RCX CMT_ASM(".byte 0X2A, 0X11 # subb (%rcx), %dl")
#define SUB_DL_FROM_PTR_RDX CMT_ASM(".byte 0X2A, 0X12 # subb (%rdx), %dl")
#define SUB_DL_FROM_PTR_RDI CMT_ASM(".byte 0X2A, 0X17 # subb (%rdi), %dl")
#define SUB_DL_FROM_PTR_RSI CMT_ASM(".byte 0X2A, 0X16 # subb (%rsi), %dl")
#define SUB_DL_FROM_PTR_RBP CMT_ASM(".byte 0X2A, 0X55, 0X00 # subb (%rbp), %dl")
#define SUB_DL_FROM_PTR_RSP CMT_ASM(".byte 0X2A, 0X14, 0X24 # subb (%rsp), %dl")
#define SUB_DL_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X2A, 0X10 # subb (%r8), %dl")
#define SUB_DL_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X2A, 0X11 # subb (%r9), %dl")
#define SUB_DL_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X2A, 0X12 # subb (%r10), %dl")
#define SUB_DL_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X2A, 0X13 # subb (%r11), %dl")
#define SUB_DL_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X2A, 0X14, 0X24 # subb (%r12), %dl")
#define SUB_DL_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X2A, 0X55, 0X00 # subb (%r13), %dl")
#define SUB_DL_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X2A, 0X16 # subb (%r14), %dl")
#define SUB_DL_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X2A, 0X17 # subb (%r15), %dl")
#define SUB_DL_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X2A, 0X10 # subb (%eax), %dl")
#define SUB_DL_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X2A, 0X13 # subb (%ebx), %dl")
#define SUB_DL_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X2A, 0X11 # subb (%ecx), %dl")
#define SUB_DL_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X2A, 0X12 # subb (%edx), %dl")
#define SUB_DL_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X2A, 0X17 # subb (%edi), %dl")
#define SUB_DL_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X2A, 0X16 # subb (%esi), %dl")
#define SUB_DL_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X2A, 0X55, 0X00 # subb (%ebp), %dl")
#define SUB_DL_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X2A, 0X14, 0X24 # subb (%esp), %dl")

#define SUB_DIL_FROM_PTR_RAX CMT_ASM(".byte 0X40, 0X2A, 0X38 # subb (%rax), %dil")
#define SUB_DIL_FROM_PTR_RBX CMT_ASM(".byte 0X40, 0X2A, 0X3B # subb (%rbx), %dil")
#define SUB_DIL_FROM_PTR_RCX CMT_ASM(".byte 0X40, 0X2A, 0X39 # subb (%rcx), %dil")
#define SUB_DIL_FROM_PTR_RDX CMT_ASM(".byte 0X40, 0X2A, 0X3A # subb (%rdx), %dil")
#define SUB_DIL_FROM_PTR_RDI CMT_ASM(".byte 0X40, 0X2A, 0X3F # subb (%rdi), %dil")
#define SUB_DIL_FROM_PTR_RSI CMT_ASM(".byte 0X40, 0X2A, 0X3E # subb (%rsi), %dil")
#define SUB_DIL_FROM_PTR_RBP CMT_ASM(".byte 0X40, 0X2A, 0X7D, 0X00 # subb (%rbp), %dil")
#define SUB_DIL_FROM_PTR_RSP CMT_ASM(".byte 0X40, 0X2A, 0X3C, 0X24 # subb (%rsp), %dil")
#define SUB_DIL_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X2A, 0X38 # subb (%r8), %dil")
#define SUB_DIL_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X2A, 0X39 # subb (%r9), %dil")
#define SUB_DIL_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X2A, 0X3A # subb (%r10), %dil")
#define SUB_DIL_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X2A, 0X3B # subb (%r11), %dil")
#define SUB_DIL_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X2A, 0X3C, 0X24 # subb (%r12), %dil")
#define SUB_DIL_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X2A, 0X7D, 0X00 # subb (%r13), %dil")
#define SUB_DIL_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X2A, 0X3E # subb (%r14), %dil")
#define SUB_DIL_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X2A, 0X3F # subb (%r15), %dil")
#define SUB_DIL_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X40, 0X2A, 0X38 # subb (%eax), %dil")
#define SUB_DIL_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X40, 0X2A, 0X3B # subb (%ebx), %dil")
#define SUB_DIL_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X40, 0X2A, 0X39 # subb (%ecx), %dil")
#define SUB_DIL_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X40, 0X2A, 0X3A # subb (%edx), %dil")
#define SUB_DIL_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X40, 0X2A, 0X3F # subb (%edi), %dil")
#define SUB_DIL_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X40, 0X2A, 0X3E # subb (%esi), %dil")
#define SUB_DIL_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X40, 0X2A, 0X7D, 0X00 # subb (%ebp), %dil")
#define SUB_DIL_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X40, 0X2A, 0X3C, 0X24 # subb (%esp), %dil")

#define SUB_SIL_FROM_PTR_RAX CMT_ASM(".byte 0X40, 0X2A, 0X30 # subb (%rax), %sil")
#define SUB_SIL_FROM_PTR_RBX CMT_ASM(".byte 0X40, 0X2A, 0X33 # subb (%rbx), %sil")
#define SUB_SIL_FROM_PTR_RCX CMT_ASM(".byte 0X40, 0X2A, 0X31 # subb (%rcx), %sil")
#define SUB_SIL_FROM_PTR_RDX CMT_ASM(".byte 0X40, 0X2A, 0X32 # subb (%rdx), %sil")
#define SUB_SIL_FROM_PTR_RDI CMT_ASM(".byte 0X40, 0X2A, 0X37 # subb (%rdi), %sil")
#define SUB_SIL_FROM_PTR_RSI CMT_ASM(".byte 0X40, 0X2A, 0X36 # subb (%rsi), %sil")
#define SUB_SIL_FROM_PTR_RBP CMT_ASM(".byte 0X40, 0X2A, 0X75, 0X00 # subb (%rbp), %sil")
#define SUB_SIL_FROM_PTR_RSP CMT_ASM(".byte 0X40, 0X2A, 0X34, 0X24 # subb (%rsp), %sil")
#define SUB_SIL_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X2A, 0X30 # subb (%r8), %sil")
#define SUB_SIL_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X2A, 0X31 # subb (%r9), %sil")
#define SUB_SIL_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X2A, 0X32 # subb (%r10), %sil")
#define SUB_SIL_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X2A, 0X33 # subb (%r11), %sil")
#define SUB_SIL_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X2A, 0X34, 0X24 # subb (%r12), %sil")
#define SUB_SIL_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X2A, 0X75, 0X00 # subb (%r13), %sil")
#define SUB_SIL_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X2A, 0X36 # subb (%r14), %sil")
#define SUB_SIL_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X2A, 0X37 # subb (%r15), %sil")
#define SUB_SIL_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X40, 0X2A, 0X30 # subb (%eax), %sil")
#define SUB_SIL_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X40, 0X2A, 0X33 # subb (%ebx), %sil")
#define SUB_SIL_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X40, 0X2A, 0X31 # subb (%ecx), %sil")
#define SUB_SIL_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X40, 0X2A, 0X32 # subb (%edx), %sil")
#define SUB_SIL_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X40, 0X2A, 0X37 # subb (%edi), %sil")
#define SUB_SIL_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X40, 0X2A, 0X36 # subb (%esi), %sil")
#define SUB_SIL_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X40, 0X2A, 0X75, 0X00 # subb (%ebp), %sil")
#define SUB_SIL_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X40, 0X2A, 0X34, 0X24 # subb (%esp), %sil")

#define SUB_BPL_FROM_PTR_RAX CMT_ASM(".byte 0X40, 0X2A, 0X28 # subb (%rax), %bpl")
#define SUB_BPL_FROM_PTR_RBX CMT_ASM(".byte 0X40, 0X2A, 0X2B # subb (%rbx), %bpl")
#define SUB_BPL_FROM_PTR_RCX CMT_ASM(".byte 0X40, 0X2A, 0X29 # subb (%rcx), %bpl")
#define SUB_BPL_FROM_PTR_RDX CMT_ASM(".byte 0X40, 0X2A, 0X2A # subb (%rdx), %bpl")
#define SUB_BPL_FROM_PTR_RDI CMT_ASM(".byte 0X40, 0X2A, 0X2F # subb (%rdi), %bpl")
#define SUB_BPL_FROM_PTR_RSI CMT_ASM(".byte 0X40, 0X2A, 0X2E # subb (%rsi), %bpl")
#define SUB_BPL_FROM_PTR_RBP CMT_ASM(".byte 0X40, 0X2A, 0X6D, 0X00 # subb (%rbp), %bpl")
#define SUB_BPL_FROM_PTR_RSP CMT_ASM(".byte 0X40, 0X2A, 0X2C, 0X24 # subb (%rsp), %bpl")
#define SUB_BPL_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X2A, 0X28 # subb (%r8), %bpl")
#define SUB_BPL_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X2A, 0X29 # subb (%r9), %bpl")
#define SUB_BPL_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X2A, 0X2A # subb (%r10), %bpl")
#define SUB_BPL_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X2A, 0X2B # subb (%r11), %bpl")
#define SUB_BPL_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X2A, 0X2C, 0X24 # subb (%r12), %bpl")
#define SUB_BPL_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X2A, 0X6D, 0X00 # subb (%r13), %bpl")
#define SUB_BPL_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X2A, 0X2E # subb (%r14), %bpl")
#define SUB_BPL_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X2A, 0X2F # subb (%r15), %bpl")
#define SUB_BPL_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X40, 0X2A, 0X28 # subb (%eax), %bpl")
#define SUB_BPL_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X40, 0X2A, 0X2B # subb (%ebx), %bpl")
#define SUB_BPL_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X40, 0X2A, 0X29 # subb (%ecx), %bpl")
#define SUB_BPL_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X40, 0X2A, 0X2A # subb (%edx), %bpl")
#define SUB_BPL_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X40, 0X2A, 0X2F # subb (%edi), %bpl")
#define SUB_BPL_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X40, 0X2A, 0X2E # subb (%esi), %bpl")
#define SUB_BPL_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X40, 0X2A, 0X6D, 0X00 # subb (%ebp), %bpl")
#define SUB_BPL_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X40, 0X2A, 0X2C, 0X24 # subb (%esp), %bpl")

#define SUB_SPL_FROM_PTR_RAX CMT_ASM(".byte 0X40, 0X2A, 0X20 # subb (%rax), %spl")
#define SUB_SPL_FROM_PTR_RBX CMT_ASM(".byte 0X40, 0X2A, 0X23 # subb (%rbx), %spl")
#define SUB_SPL_FROM_PTR_RCX CMT_ASM(".byte 0X40, 0X2A, 0X21 # subb (%rcx), %spl")
#define SUB_SPL_FROM_PTR_RDX CMT_ASM(".byte 0X40, 0X2A, 0X22 # subb (%rdx), %spl")
#define SUB_SPL_FROM_PTR_RDI CMT_ASM(".byte 0X40, 0X2A, 0X27 # subb (%rdi), %spl")
#define SUB_SPL_FROM_PTR_RSI CMT_ASM(".byte 0X40, 0X2A, 0X26 # subb (%rsi), %spl")
#define SUB_SPL_FROM_PTR_RBP CMT_ASM(".byte 0X40, 0X2A, 0X65, 0X00 # subb (%rbp), %spl")
#define SUB_SPL_FROM_PTR_RSP CMT_ASM(".byte 0X40, 0X2A, 0X24, 0X24 # subb (%rsp), %spl")
#define SUB_SPL_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X2A, 0X20 # subb (%r8), %spl")
#define SUB_SPL_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X2A, 0X21 # subb (%r9), %spl")
#define SUB_SPL_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X2A, 0X22 # subb (%r10), %spl")
#define SUB_SPL_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X2A, 0X23 # subb (%r11), %spl")
#define SUB_SPL_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X2A, 0X24, 0X24 # subb (%r12), %spl")
#define SUB_SPL_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X2A, 0X65, 0X00 # subb (%r13), %spl")
#define SUB_SPL_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X2A, 0X26 # subb (%r14), %spl")
#define SUB_SPL_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X2A, 0X27 # subb (%r15), %spl")
#define SUB_SPL_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X40, 0X2A, 0X20 # subb (%eax), %spl")
#define SUB_SPL_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X40, 0X2A, 0X23 # subb (%ebx), %spl")
#define SUB_SPL_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X40, 0X2A, 0X21 # subb (%ecx), %spl")
#define SUB_SPL_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X40, 0X2A, 0X22 # subb (%edx), %spl")
#define SUB_SPL_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X40, 0X2A, 0X27 # subb (%edi), %spl")
#define SUB_SPL_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X40, 0X2A, 0X26 # subb (%esi), %spl")
#define SUB_SPL_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X40, 0X2A, 0X65, 0X00 # subb (%ebp), %spl")
#define SUB_SPL_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X40, 0X2A, 0X24, 0X24 # subb (%esp), %spl")

#define SUB_R8B_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X2A, 0X00 # subb (%rax), %r8b")
#define SUB_R8B_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X2A, 0X03 # subb (%rbx), %r8b")
#define SUB_R8B_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X2A, 0X01 # subb (%rcx), %r8b")
#define SUB_R8B_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X2A, 0X02 # subb (%rdx), %r8b")
#define SUB_R8B_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X2A, 0X07 # subb (%rdi), %r8b")
#define SUB_R8B_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X2A, 0X06 # subb (%rsi), %r8b")
#define SUB_R8B_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X2A, 0X45, 0X00 # subb (%rbp), %r8b")
#define SUB_R8B_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X2A, 0X04, 0X24 # subb (%rsp), %r8b")
#define SUB_R8B_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X2A, 0X00 # subb (%r8), %r8b")
#define SUB_R8B_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X2A, 0X01 # subb (%r9), %r8b")
#define SUB_R8B_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X2A, 0X02 # subb (%r10), %r8b")
#define SUB_R8B_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X2A, 0X03 # subb (%r11), %r8b")
#define SUB_R8B_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X2A, 0X04, 0X24 # subb (%r12), %r8b")
#define SUB_R8B_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X2A, 0X45, 0X00 # subb (%r13), %r8b")
#define SUB_R8B_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X2A, 0X06 # subb (%r14), %r8b")
#define SUB_R8B_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X2A, 0X07 # subb (%r15), %r8b")
#define SUB_R8B_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X2A, 0X00 # subb (%eax), %r8b")
#define SUB_R8B_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X2A, 0X03 # subb (%ebx), %r8b")
#define SUB_R8B_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X2A, 0X01 # subb (%ecx), %r8b")
#define SUB_R8B_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X2A, 0X02 # subb (%edx), %r8b")
#define SUB_R8B_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X2A, 0X07 # subb (%edi), %r8b")
#define SUB_R8B_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X2A, 0X06 # subb (%esi), %r8b")
#define SUB_R8B_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X2A, 0X45, 0X00 # subb (%ebp), %r8b")
#define SUB_R8B_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X2A, 0X04, 0X24 # subb (%esp), %r8b")

#define SUB_R9B_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X2A, 0X08 # subb (%rax), %r9b")
#define SUB_R9B_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X2A, 0X0B # subb (%rbx), %r9b")
#define SUB_R9B_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X2A, 0X09 # subb (%rcx), %r9b")
#define SUB_R9B_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X2A, 0X0A # subb (%rdx), %r9b")
#define SUB_R9B_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X2A, 0X0F # subb (%rdi), %r9b")
#define SUB_R9B_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X2A, 0X0E # subb (%rsi), %r9b")
#define SUB_R9B_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X2A, 0X4D, 0X00 # subb (%rbp), %r9b")
#define SUB_R9B_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X2A, 0X0C, 0X24 # subb (%rsp), %r9b")
#define SUB_R9B_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X2A, 0X08 # subb (%r8), %r9b")
#define SUB_R9B_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X2A, 0X09 # subb (%r9), %r9b")
#define SUB_R9B_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X2A, 0X0A # subb (%r10), %r9b")
#define SUB_R9B_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X2A, 0X0B # subb (%r11), %r9b")
#define SUB_R9B_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X2A, 0X0C, 0X24 # subb (%r12), %r9b")
#define SUB_R9B_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X2A, 0X4D, 0X00 # subb (%r13), %r9b")
#define SUB_R9B_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X2A, 0X0E # subb (%r14), %r9b")
#define SUB_R9B_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X2A, 0X0F # subb (%r15), %r9b")
#define SUB_R9B_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X2A, 0X08 # subb (%eax), %r9b")
#define SUB_R9B_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X2A, 0X0B # subb (%ebx), %r9b")
#define SUB_R9B_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X2A, 0X09 # subb (%ecx), %r9b")
#define SUB_R9B_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X2A, 0X0A # subb (%edx), %r9b")
#define SUB_R9B_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X2A, 0X0F # subb (%edi), %r9b")
#define SUB_R9B_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X2A, 0X0E # subb (%esi), %r9b")
#define SUB_R9B_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X2A, 0X4D, 0X00 # subb (%ebp), %r9b")
#define SUB_R9B_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X2A, 0X0C, 0X24 # subb (%esp), %r9b")

#define SUB_R10B_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X2A, 0X10 # subb (%rax), %r10b")
#define SUB_R10B_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X2A, 0X13 # subb (%rbx), %r10b")
#define SUB_R10B_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X2A, 0X11 # subb (%rcx), %r10b")
#define SUB_R10B_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X2A, 0X12 # subb (%rdx), %r10b")
#define SUB_R10B_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X2A, 0X17 # subb (%rdi), %r10b")
#define SUB_R10B_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X2A, 0X16 # subb (%rsi), %r10b")
#define SUB_R10B_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X2A, 0X55, 0X00 # subb (%rbp), %r10b")
#define SUB_R10B_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X2A, 0X14, 0X24 # subb (%rsp), %r10b")
#define SUB_R10B_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X2A, 0X10 # subb (%r8), %r10b")
#define SUB_R10B_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X2A, 0X11 # subb (%r9), %r10b")
#define SUB_R10B_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X2A, 0X12 # subb (%r10), %r10b")
#define SUB_R10B_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X2A, 0X13 # subb (%r11), %r10b")
#define SUB_R10B_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X2A, 0X14, 0X24 # subb (%r12), %r10b")
#define SUB_R10B_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X2A, 0X55, 0X00 # subb (%r13), %r10b")
#define SUB_R10B_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X2A, 0X16 # subb (%r14), %r10b")
#define SUB_R10B_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X2A, 0X17 # subb (%r15), %r10b")
#define SUB_R10B_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X2A, 0X10 # subb (%eax), %r10b")
#define SUB_R10B_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X2A, 0X13 # subb (%ebx), %r10b")
#define SUB_R10B_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X2A, 0X11 # subb (%ecx), %r10b")
#define SUB_R10B_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X2A, 0X12 # subb (%edx), %r10b")
#define SUB_R10B_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X2A, 0X17 # subb (%edi), %r10b")
#define SUB_R10B_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X2A, 0X16 # subb (%esi), %r10b")
#define SUB_R10B_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X2A, 0X55, 0X00 # subb (%ebp), %r10b")
#define SUB_R10B_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X2A, 0X14, 0X24 # subb (%esp), %r10b")

#define SUB_R11B_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X2A, 0X18 # subb (%rax), %r11b")
#define SUB_R11B_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X2A, 0X1B # subb (%rbx), %r11b")
#define SUB_R11B_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X2A, 0X19 # subb (%rcx), %r11b")
#define SUB_R11B_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X2A, 0X1A # subb (%rdx), %r11b")
#define SUB_R11B_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X2A, 0X1F # subb (%rdi), %r11b")
#define SUB_R11B_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X2A, 0X1E # subb (%rsi), %r11b")
#define SUB_R11B_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X2A, 0X5D, 0X00 # subb (%rbp), %r11b")
#define SUB_R11B_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X2A, 0X1C, 0X24 # subb (%rsp), %r11b")
#define SUB_R11B_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X2A, 0X18 # subb (%r8), %r11b")
#define SUB_R11B_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X2A, 0X19 # subb (%r9), %r11b")
#define SUB_R11B_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X2A, 0X1A # subb (%r10), %r11b")
#define SUB_R11B_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X2A, 0X1B # subb (%r11), %r11b")
#define SUB_R11B_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X2A, 0X1C, 0X24 # subb (%r12), %r11b")
#define SUB_R11B_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X2A, 0X5D, 0X00 # subb (%r13), %r11b")
#define SUB_R11B_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X2A, 0X1E # subb (%r14), %r11b")
#define SUB_R11B_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X2A, 0X1F # subb (%r15), %r11b")
#define SUB_R11B_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X2A, 0X18 # subb (%eax), %r11b")
#define SUB_R11B_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X2A, 0X1B # subb (%ebx), %r11b")
#define SUB_R11B_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X2A, 0X19 # subb (%ecx), %r11b")
#define SUB_R11B_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X2A, 0X1A # subb (%edx), %r11b")
#define SUB_R11B_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X2A, 0X1F # subb (%edi), %r11b")
#define SUB_R11B_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X2A, 0X1E # subb (%esi), %r11b")
#define SUB_R11B_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X2A, 0X5D, 0X00 # subb (%ebp), %r11b")
#define SUB_R11B_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X2A, 0X1C, 0X24 # subb (%esp), %r11b")

#define SUB_R12B_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X2A, 0X20 # subb (%rax), %r12b")
#define SUB_R12B_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X2A, 0X23 # subb (%rbx), %r12b")
#define SUB_R12B_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X2A, 0X21 # subb (%rcx), %r12b")
#define SUB_R12B_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X2A, 0X22 # subb (%rdx), %r12b")
#define SUB_R12B_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X2A, 0X27 # subb (%rdi), %r12b")
#define SUB_R12B_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X2A, 0X26 # subb (%rsi), %r12b")
#define SUB_R12B_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X2A, 0X65, 0X00 # subb (%rbp), %r12b")
#define SUB_R12B_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X2A, 0X24, 0X24 # subb (%rsp), %r12b")
#define SUB_R12B_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X2A, 0X20 # subb (%r8), %r12b")
#define SUB_R12B_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X2A, 0X21 # subb (%r9), %r12b")
#define SUB_R12B_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X2A, 0X22 # subb (%r10), %r12b")
#define SUB_R12B_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X2A, 0X23 # subb (%r11), %r12b")
#define SUB_R12B_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X2A, 0X24, 0X24 # subb (%r12), %r12b")
#define SUB_R12B_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X2A, 0X65, 0X00 # subb (%r13), %r12b")
#define SUB_R12B_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X2A, 0X26 # subb (%r14), %r12b")
#define SUB_R12B_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X2A, 0X27 # subb (%r15), %r12b")
#define SUB_R12B_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X2A, 0X20 # subb (%eax), %r12b")
#define SUB_R12B_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X2A, 0X23 # subb (%ebx), %r12b")
#define SUB_R12B_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X2A, 0X21 # subb (%ecx), %r12b")
#define SUB_R12B_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X2A, 0X22 # subb (%edx), %r12b")
#define SUB_R12B_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X2A, 0X27 # subb (%edi), %r12b")
#define SUB_R12B_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X2A, 0X26 # subb (%esi), %r12b")
#define SUB_R12B_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X2A, 0X65, 0X00 # subb (%ebp), %r12b")
#define SUB_R12B_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X2A, 0X24, 0X24 # subb (%esp), %r12b")

#define SUB_R13B_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X2A, 0X28 # subb (%rax), %r13b")
#define SUB_R13B_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X2A, 0X2B # subb (%rbx), %r13b")
#define SUB_R13B_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X2A, 0X29 # subb (%rcx), %r13b")
#define SUB_R13B_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X2A, 0X2A # subb (%rdx), %r13b")
#define SUB_R13B_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X2A, 0X2F # subb (%rdi), %r13b")
#define SUB_R13B_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X2A, 0X2E # subb (%rsi), %r13b")
#define SUB_R13B_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X2A, 0X6D, 0X00 # subb (%rbp), %r13b")
#define SUB_R13B_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X2A, 0X2C, 0X24 # subb (%rsp), %r13b")
#define SUB_R13B_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X2A, 0X28 # subb (%r8), %r13b")
#define SUB_R13B_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X2A, 0X29 # subb (%r9), %r13b")
#define SUB_R13B_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X2A, 0X2A # subb (%r10), %r13b")
#define SUB_R13B_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X2A, 0X2B # subb (%r11), %r13b")
#define SUB_R13B_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X2A, 0X2C, 0X24 # subb (%r12), %r13b")
#define SUB_R13B_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X2A, 0X6D, 0X00 # subb (%r13), %r13b")
#define SUB_R13B_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X2A, 0X2E # subb (%r14), %r13b")
#define SUB_R13B_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X2A, 0X2F # subb (%r15), %r13b")
#define SUB_R13B_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X2A, 0X28 # subb (%eax), %r13b")
#define SUB_R13B_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X2A, 0X2B # subb (%ebx), %r13b")
#define SUB_R13B_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X2A, 0X29 # subb (%ecx), %r13b")
#define SUB_R13B_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X2A, 0X2A # subb (%edx), %r13b")
#define SUB_R13B_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X2A, 0X2F # subb (%edi), %r13b")
#define SUB_R13B_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X2A, 0X2E # subb (%esi), %r13b")
#define SUB_R13B_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X2A, 0X6D, 0X00 # subb (%ebp), %r13b")
#define SUB_R13B_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X2A, 0X2C, 0X24 # subb (%esp), %r13b")

#define SUB_R14B_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X2A, 0X30 # subb (%rax), %r14b")
#define SUB_R14B_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X2A, 0X33 # subb (%rbx), %r14b")
#define SUB_R14B_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X2A, 0X31 # subb (%rcx), %r14b")
#define SUB_R14B_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X2A, 0X32 # subb (%rdx), %r14b")
#define SUB_R14B_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X2A, 0X37 # subb (%rdi), %r14b")
#define SUB_R14B_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X2A, 0X36 # subb (%rsi), %r14b")
#define SUB_R14B_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X2A, 0X75, 0X00 # subb (%rbp), %r14b")
#define SUB_R14B_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X2A, 0X34, 0X24 # subb (%rsp), %r14b")
#define SUB_R14B_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X2A, 0X30 # subb (%r8), %r14b")
#define SUB_R14B_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X2A, 0X31 # subb (%r9), %r14b")
#define SUB_R14B_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X2A, 0X32 # subb (%r10), %r14b")
#define SUB_R14B_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X2A, 0X33 # subb (%r11), %r14b")
#define SUB_R14B_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X2A, 0X34, 0X24 # subb (%r12), %r14b")
#define SUB_R14B_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X2A, 0X75, 0X00 # subb (%r13), %r14b")
#define SUB_R14B_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X2A, 0X36 # subb (%r14), %r14b")
#define SUB_R14B_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X2A, 0X37 # subb (%r15), %r14b")
#define SUB_R14B_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X2A, 0X30 # subb (%eax), %r14b")
#define SUB_R14B_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X2A, 0X33 # subb (%ebx), %r14b")
#define SUB_R14B_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X2A, 0X31 # subb (%ecx), %r14b")
#define SUB_R14B_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X2A, 0X32 # subb (%edx), %r14b")
#define SUB_R14B_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X2A, 0X37 # subb (%edi), %r14b")
#define SUB_R14B_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X2A, 0X36 # subb (%esi), %r14b")
#define SUB_R14B_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X2A, 0X75, 0X00 # subb (%ebp), %r14b")
#define SUB_R14B_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X2A, 0X34, 0X24 # subb (%esp), %r14b")

#define SUB_R15B_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X2A, 0X38 # subb (%rax), %r15b")
#define SUB_R15B_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X2A, 0X3B # subb (%rbx), %r15b")
#define SUB_R15B_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X2A, 0X39 # subb (%rcx), %r15b")
#define SUB_R15B_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X2A, 0X3A # subb (%rdx), %r15b")
#define SUB_R15B_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X2A, 0X3F # subb (%rdi), %r15b")
#define SUB_R15B_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X2A, 0X3E # subb (%rsi), %r15b")
#define SUB_R15B_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X2A, 0X7D, 0X00 # subb (%rbp), %r15b")
#define SUB_R15B_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X2A, 0X3C, 0X24 # subb (%rsp), %r15b")
#define SUB_R15B_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X2A, 0X38 # subb (%r8), %r15b")
#define SUB_R15B_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X2A, 0X39 # subb (%r9), %r15b")
#define SUB_R15B_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X2A, 0X3A # subb (%r10), %r15b")
#define SUB_R15B_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X2A, 0X3B # subb (%r11), %r15b")
#define SUB_R15B_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X2A, 0X3C, 0X24 # subb (%r12), %r15b")
#define SUB_R15B_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X2A, 0X7D, 0X00 # subb (%r13), %r15b")
#define SUB_R15B_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X2A, 0X3E # subb (%r14), %r15b")
#define SUB_R15B_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X2A, 0X3F # subb (%r15), %r15b")
#define SUB_R15B_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X2A, 0X38 # subb (%eax), %r15b")
#define SUB_R15B_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X2A, 0X3B # subb (%ebx), %r15b")
#define SUB_R15B_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X2A, 0X39 # subb (%ecx), %r15b")
#define SUB_R15B_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X2A, 0X3A # subb (%edx), %r15b")
#define SUB_R15B_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X2A, 0X3F # subb (%edi), %r15b")
#define SUB_R15B_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X2A, 0X3E # subb (%esi), %r15b")
#define SUB_R15B_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X2A, 0X7D, 0X00 # subb (%ebp), %r15b")
#define SUB_R15B_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X2A, 0X3C, 0X24 # subb (%esp), %r15b")

#define SUB_AL_TO_PTR_RAX CMT_ASM(".byte 0X28, 0X00 # subb %al, (%rax)")
#define SUB_AL_TO_PTR_RBX CMT_ASM(".byte 0X28, 0X03 # subb %al, (%rbx)")
#define SUB_AL_TO_PTR_RCX CMT_ASM(".byte 0X28, 0X01 # subb %al, (%rcx)")
#define SUB_AL_TO_PTR_RDX CMT_ASM(".byte 0X28, 0X02 # subb %al, (%rdx)")
#define SUB_AL_TO_PTR_RDI CMT_ASM(".byte 0X28, 0X07 # subb %al, (%rdi)")
#define SUB_AL_TO_PTR_RSI CMT_ASM(".byte 0X28, 0X06 # subb %al, (%rsi)")
#define SUB_AL_TO_PTR_RBP CMT_ASM(".byte 0X28, 0X45, 0X00 # subb %al, (%rbp)")
#define SUB_AL_TO_PTR_RSP CMT_ASM(".byte 0X28, 0X04, 0X24 # subb %al, (%rsp)")
#define SUB_AL_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X28, 0X00 # subb %al, (%r8)")
#define SUB_AL_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X28, 0X01 # subb %al, (%r9)")
#define SUB_AL_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X28, 0X02 # subb %al, (%r10)")
#define SUB_AL_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X28, 0X03 # subb %al, (%r11)")
#define SUB_AL_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X28, 0X04, 0X24 # subb %al, (%r12)")
#define SUB_AL_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X28, 0X45, 0X00 # subb %al, (%r13)")
#define SUB_AL_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X28, 0X06 # subb %al, (%r14)")
#define SUB_AL_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X28, 0X07 # subb %al, (%r15)")
#define SUB_AL_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X28, 0X00 # subb %al, (%eax)")
#define SUB_AL_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X28, 0X03 # subb %al, (%ebx)")
#define SUB_AL_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X28, 0X01 # subb %al, (%ecx)")
#define SUB_AL_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X28, 0X02 # subb %al, (%edx)")
#define SUB_AL_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X28, 0X07 # subb %al, (%edi)")
#define SUB_AL_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X28, 0X06 # subb %al, (%esi)")
#define SUB_AL_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X28, 0X45, 0X00 # subb %al, (%ebp)")
#define SUB_AL_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X28, 0X04, 0X24 # subb %al, (%esp)")

#define SUB_BL_TO_PTR_RAX CMT_ASM(".byte 0X28, 0X18 # subb %bl, (%rax)")
#define SUB_BL_TO_PTR_RBX CMT_ASM(".byte 0X28, 0X1B # subb %bl, (%rbx)")
#define SUB_BL_TO_PTR_RCX CMT_ASM(".byte 0X28, 0X19 # subb %bl, (%rcx)")
#define SUB_BL_TO_PTR_RDX CMT_ASM(".byte 0X28, 0X1A # subb %bl, (%rdx)")
#define SUB_BL_TO_PTR_RDI CMT_ASM(".byte 0X28, 0X1F # subb %bl, (%rdi)")
#define SUB_BL_TO_PTR_RSI CMT_ASM(".byte 0X28, 0X1E # subb %bl, (%rsi)")
#define SUB_BL_TO_PTR_RBP CMT_ASM(".byte 0X28, 0X5D, 0X00 # subb %bl, (%rbp)")
#define SUB_BL_TO_PTR_RSP CMT_ASM(".byte 0X28, 0X1C, 0X24 # subb %bl, (%rsp)")
#define SUB_BL_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X28, 0X18 # subb %bl, (%r8)")
#define SUB_BL_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X28, 0X19 # subb %bl, (%r9)")
#define SUB_BL_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X28, 0X1A # subb %bl, (%r10)")
#define SUB_BL_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X28, 0X1B # subb %bl, (%r11)")
#define SUB_BL_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X28, 0X1C, 0X24 # subb %bl, (%r12)")
#define SUB_BL_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X28, 0X5D, 0X00 # subb %bl, (%r13)")
#define SUB_BL_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X28, 0X1E # subb %bl, (%r14)")
#define SUB_BL_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X28, 0X1F # subb %bl, (%r15)")
#define SUB_BL_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X28, 0X18 # subb %bl, (%eax)")
#define SUB_BL_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X28, 0X1B # subb %bl, (%ebx)")
#define SUB_BL_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X28, 0X19 # subb %bl, (%ecx)")
#define SUB_BL_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X28, 0X1A # subb %bl, (%edx)")
#define SUB_BL_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X28, 0X1F # subb %bl, (%edi)")
#define SUB_BL_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X28, 0X1E # subb %bl, (%esi)")
#define SUB_BL_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X28, 0X5D, 0X00 # subb %bl, (%ebp)")
#define SUB_BL_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X28, 0X1C, 0X24 # subb %bl, (%esp)")

#define SUB_CL_TO_PTR_RAX CMT_ASM(".byte 0X28, 0X08 # subb %cl, (%rax)")
#define SUB_CL_TO_PTR_RBX CMT_ASM(".byte 0X28, 0X0B # subb %cl, (%rbx)")
#define SUB_CL_TO_PTR_RCX CMT_ASM(".byte 0X28, 0X09 # subb %cl, (%rcx)")
#define SUB_CL_TO_PTR_RDX CMT_ASM(".byte 0X28, 0X0A # subb %cl, (%rdx)")
#define SUB_CL_TO_PTR_RDI CMT_ASM(".byte 0X28, 0X0F # subb %cl, (%rdi)")
#define SUB_CL_TO_PTR_RSI CMT_ASM(".byte 0X28, 0X0E # subb %cl, (%rsi)")
#define SUB_CL_TO_PTR_RBP CMT_ASM(".byte 0X28, 0X4D, 0X00 # subb %cl, (%rbp)")
#define SUB_CL_TO_PTR_RSP CMT_ASM(".byte 0X28, 0X0C, 0X24 # subb %cl, (%rsp)")
#define SUB_CL_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X28, 0X08 # subb %cl, (%r8)")
#define SUB_CL_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X28, 0X09 # subb %cl, (%r9)")
#define SUB_CL_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X28, 0X0A # subb %cl, (%r10)")
#define SUB_CL_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X28, 0X0B # subb %cl, (%r11)")
#define SUB_CL_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X28, 0X0C, 0X24 # subb %cl, (%r12)")
#define SUB_CL_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X28, 0X4D, 0X00 # subb %cl, (%r13)")
#define SUB_CL_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X28, 0X0E # subb %cl, (%r14)")
#define SUB_CL_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X28, 0X0F # subb %cl, (%r15)")
#define SUB_CL_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X28, 0X08 # subb %cl, (%eax)")
#define SUB_CL_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X28, 0X0B # subb %cl, (%ebx)")
#define SUB_CL_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X28, 0X09 # subb %cl, (%ecx)")
#define SUB_CL_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X28, 0X0A # subb %cl, (%edx)")
#define SUB_CL_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X28, 0X0F # subb %cl, (%edi)")
#define SUB_CL_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X28, 0X0E # subb %cl, (%esi)")
#define SUB_CL_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X28, 0X4D, 0X00 # subb %cl, (%ebp)")
#define SUB_CL_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X28, 0X0C, 0X24 # subb %cl, (%esp)")

#define SUB_DL_TO_PTR_RAX CMT_ASM(".byte 0X28, 0X10 # subb %dl, (%rax)")
#define SUB_DL_TO_PTR_RBX CMT_ASM(".byte 0X28, 0X13 # subb %dl, (%rbx)")
#define SUB_DL_TO_PTR_RCX CMT_ASM(".byte 0X28, 0X11 # subb %dl, (%rcx)")
#define SUB_DL_TO_PTR_RDX CMT_ASM(".byte 0X28, 0X12 # subb %dl, (%rdx)")
#define SUB_DL_TO_PTR_RDI CMT_ASM(".byte 0X28, 0X17 # subb %dl, (%rdi)")
#define SUB_DL_TO_PTR_RSI CMT_ASM(".byte 0X28, 0X16 # subb %dl, (%rsi)")
#define SUB_DL_TO_PTR_RBP CMT_ASM(".byte 0X28, 0X55, 0X00 # subb %dl, (%rbp)")
#define SUB_DL_TO_PTR_RSP CMT_ASM(".byte 0X28, 0X14, 0X24 # subb %dl, (%rsp)")
#define SUB_DL_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X28, 0X10 # subb %dl, (%r8)")
#define SUB_DL_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X28, 0X11 # subb %dl, (%r9)")
#define SUB_DL_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X28, 0X12 # subb %dl, (%r10)")
#define SUB_DL_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X28, 0X13 # subb %dl, (%r11)")
#define SUB_DL_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X28, 0X14, 0X24 # subb %dl, (%r12)")
#define SUB_DL_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X28, 0X55, 0X00 # subb %dl, (%r13)")
#define SUB_DL_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X28, 0X16 # subb %dl, (%r14)")
#define SUB_DL_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X28, 0X17 # subb %dl, (%r15)")
#define SUB_DL_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X28, 0X10 # subb %dl, (%eax)")
#define SUB_DL_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X28, 0X13 # subb %dl, (%ebx)")
#define SUB_DL_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X28, 0X11 # subb %dl, (%ecx)")
#define SUB_DL_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X28, 0X12 # subb %dl, (%edx)")
#define SUB_DL_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X28, 0X17 # subb %dl, (%edi)")
#define SUB_DL_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X28, 0X16 # subb %dl, (%esi)")
#define SUB_DL_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X28, 0X55, 0X00 # subb %dl, (%ebp)")
#define SUB_DL_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X28, 0X14, 0X24 # subb %dl, (%esp)")

#define SUB_DIL_TO_PTR_RAX CMT_ASM(".byte 0X40, 0X28, 0X38 # subb %dil, (%rax)")
#define SUB_DIL_TO_PTR_RBX CMT_ASM(".byte 0X40, 0X28, 0X3B # subb %dil, (%rbx)")
#define SUB_DIL_TO_PTR_RCX CMT_ASM(".byte 0X40, 0X28, 0X39 # subb %dil, (%rcx)")
#define SUB_DIL_TO_PTR_RDX CMT_ASM(".byte 0X40, 0X28, 0X3A # subb %dil, (%rdx)")
#define SUB_DIL_TO_PTR_RDI CMT_ASM(".byte 0X40, 0X28, 0X3F # subb %dil, (%rdi)")
#define SUB_DIL_TO_PTR_RSI CMT_ASM(".byte 0X40, 0X28, 0X3E # subb %dil, (%rsi)")
#define SUB_DIL_TO_PTR_RBP CMT_ASM(".byte 0X40, 0X28, 0X7D, 0X00 # subb %dil, (%rbp)")
#define SUB_DIL_TO_PTR_RSP CMT_ASM(".byte 0X40, 0X28, 0X3C, 0X24 # subb %dil, (%rsp)")
#define SUB_DIL_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X28, 0X38 # subb %dil, (%r8)")
#define SUB_DIL_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X28, 0X39 # subb %dil, (%r9)")
#define SUB_DIL_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X28, 0X3A # subb %dil, (%r10)")
#define SUB_DIL_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X28, 0X3B # subb %dil, (%r11)")
#define SUB_DIL_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X28, 0X3C, 0X24 # subb %dil, (%r12)")
#define SUB_DIL_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X28, 0X7D, 0X00 # subb %dil, (%r13)")
#define SUB_DIL_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X28, 0X3E # subb %dil, (%r14)")
#define SUB_DIL_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X28, 0X3F # subb %dil, (%r15)")
#define SUB_DIL_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X40, 0X28, 0X38 # subb %dil, (%eax)")
#define SUB_DIL_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X40, 0X28, 0X3B # subb %dil, (%ebx)")
#define SUB_DIL_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X40, 0X28, 0X39 # subb %dil, (%ecx)")
#define SUB_DIL_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X40, 0X28, 0X3A # subb %dil, (%edx)")
#define SUB_DIL_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X40, 0X28, 0X3F # subb %dil, (%edi)")
#define SUB_DIL_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X40, 0X28, 0X3E # subb %dil, (%esi)")
#define SUB_DIL_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X40, 0X28, 0X7D, 0X00 # subb %dil, (%ebp)")
#define SUB_DIL_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X40, 0X28, 0X3C, 0X24 # subb %dil, (%esp)")

#define SUB_SIL_TO_PTR_RAX CMT_ASM(".byte 0X40, 0X28, 0X30 # subb %sil, (%rax)")
#define SUB_SIL_TO_PTR_RBX CMT_ASM(".byte 0X40, 0X28, 0X33 # subb %sil, (%rbx)")
#define SUB_SIL_TO_PTR_RCX CMT_ASM(".byte 0X40, 0X28, 0X31 # subb %sil, (%rcx)")
#define SUB_SIL_TO_PTR_RDX CMT_ASM(".byte 0X40, 0X28, 0X32 # subb %sil, (%rdx)")
#define SUB_SIL_TO_PTR_RDI CMT_ASM(".byte 0X40, 0X28, 0X37 # subb %sil, (%rdi)")
#define SUB_SIL_TO_PTR_RSI CMT_ASM(".byte 0X40, 0X28, 0X36 # subb %sil, (%rsi)")
#define SUB_SIL_TO_PTR_RBP CMT_ASM(".byte 0X40, 0X28, 0X75, 0X00 # subb %sil, (%rbp)")
#define SUB_SIL_TO_PTR_RSP CMT_ASM(".byte 0X40, 0X28, 0X34, 0X24 # subb %sil, (%rsp)")
#define SUB_SIL_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X28, 0X30 # subb %sil, (%r8)")
#define SUB_SIL_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X28, 0X31 # subb %sil, (%r9)")
#define SUB_SIL_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X28, 0X32 # subb %sil, (%r10)")
#define SUB_SIL_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X28, 0X33 # subb %sil, (%r11)")
#define SUB_SIL_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X28, 0X34, 0X24 # subb %sil, (%r12)")
#define SUB_SIL_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X28, 0X75, 0X00 # subb %sil, (%r13)")
#define SUB_SIL_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X28, 0X36 # subb %sil, (%r14)")
#define SUB_SIL_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X28, 0X37 # subb %sil, (%r15)")
#define SUB_SIL_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X40, 0X28, 0X30 # subb %sil, (%eax)")
#define SUB_SIL_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X40, 0X28, 0X33 # subb %sil, (%ebx)")
#define SUB_SIL_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X40, 0X28, 0X31 # subb %sil, (%ecx)")
#define SUB_SIL_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X40, 0X28, 0X32 # subb %sil, (%edx)")
#define SUB_SIL_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X40, 0X28, 0X37 # subb %sil, (%edi)")
#define SUB_SIL_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X40, 0X28, 0X36 # subb %sil, (%esi)")
#define SUB_SIL_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X40, 0X28, 0X75, 0X00 # subb %sil, (%ebp)")
#define SUB_SIL_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X40, 0X28, 0X34, 0X24 # subb %sil, (%esp)")

#define SUB_BPL_TO_PTR_RAX CMT_ASM(".byte 0X40, 0X28, 0X28 # subb %bpl, (%rax)")
#define SUB_BPL_TO_PTR_RBX CMT_ASM(".byte 0X40, 0X28, 0X2B # subb %bpl, (%rbx)")
#define SUB_BPL_TO_PTR_RCX CMT_ASM(".byte 0X40, 0X28, 0X29 # subb %bpl, (%rcx)")
#define SUB_BPL_TO_PTR_RDX CMT_ASM(".byte 0X40, 0X28, 0X2A # subb %bpl, (%rdx)")
#define SUB_BPL_TO_PTR_RDI CMT_ASM(".byte 0X40, 0X28, 0X2F # subb %bpl, (%rdi)")
#define SUB_BPL_TO_PTR_RSI CMT_ASM(".byte 0X40, 0X28, 0X2E # subb %bpl, (%rsi)")
#define SUB_BPL_TO_PTR_RBP CMT_ASM(".byte 0X40, 0X28, 0X6D, 0X00 # subb %bpl, (%rbp)")
#define SUB_BPL_TO_PTR_RSP CMT_ASM(".byte 0X40, 0X28, 0X2C, 0X24 # subb %bpl, (%rsp)")
#define SUB_BPL_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X28, 0X28 # subb %bpl, (%r8)")
#define SUB_BPL_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X28, 0X29 # subb %bpl, (%r9)")
#define SUB_BPL_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X28, 0X2A # subb %bpl, (%r10)")
#define SUB_BPL_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X28, 0X2B # subb %bpl, (%r11)")
#define SUB_BPL_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X28, 0X2C, 0X24 # subb %bpl, (%r12)")
#define SUB_BPL_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X28, 0X6D, 0X00 # subb %bpl, (%r13)")
#define SUB_BPL_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X28, 0X2E # subb %bpl, (%r14)")
#define SUB_BPL_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X28, 0X2F # subb %bpl, (%r15)")
#define SUB_BPL_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X40, 0X28, 0X28 # subb %bpl, (%eax)")
#define SUB_BPL_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X40, 0X28, 0X2B # subb %bpl, (%ebx)")
#define SUB_BPL_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X40, 0X28, 0X29 # subb %bpl, (%ecx)")
#define SUB_BPL_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X40, 0X28, 0X2A # subb %bpl, (%edx)")
#define SUB_BPL_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X40, 0X28, 0X2F # subb %bpl, (%edi)")
#define SUB_BPL_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X40, 0X28, 0X2E # subb %bpl, (%esi)")
#define SUB_BPL_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X40, 0X28, 0X6D, 0X00 # subb %bpl, (%ebp)")
#define SUB_BPL_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X40, 0X28, 0X2C, 0X24 # subb %bpl, (%esp)")

#define SUB_SPL_TO_PTR_RAX CMT_ASM(".byte 0X40, 0X28, 0X20 # subb %spl, (%rax)")
#define SUB_SPL_TO_PTR_RBX CMT_ASM(".byte 0X40, 0X28, 0X23 # subb %spl, (%rbx)")
#define SUB_SPL_TO_PTR_RCX CMT_ASM(".byte 0X40, 0X28, 0X21 # subb %spl, (%rcx)")
#define SUB_SPL_TO_PTR_RDX CMT_ASM(".byte 0X40, 0X28, 0X22 # subb %spl, (%rdx)")
#define SUB_SPL_TO_PTR_RDI CMT_ASM(".byte 0X40, 0X28, 0X27 # subb %spl, (%rdi)")
#define SUB_SPL_TO_PTR_RSI CMT_ASM(".byte 0X40, 0X28, 0X26 # subb %spl, (%rsi)")
#define SUB_SPL_TO_PTR_RBP CMT_ASM(".byte 0X40, 0X28, 0X65, 0X00 # subb %spl, (%rbp)")
#define SUB_SPL_TO_PTR_RSP CMT_ASM(".byte 0X40, 0X28, 0X24, 0X24 # subb %spl, (%rsp)")
#define SUB_SPL_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X28, 0X20 # subb %spl, (%r8)")
#define SUB_SPL_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X28, 0X21 # subb %spl, (%r9)")
#define SUB_SPL_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X28, 0X22 # subb %spl, (%r10)")
#define SUB_SPL_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X28, 0X23 # subb %spl, (%r11)")
#define SUB_SPL_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X28, 0X24, 0X24 # subb %spl, (%r12)")
#define SUB_SPL_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X28, 0X65, 0X00 # subb %spl, (%r13)")
#define SUB_SPL_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X28, 0X26 # subb %spl, (%r14)")
#define SUB_SPL_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X28, 0X27 # subb %spl, (%r15)")
#define SUB_SPL_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X40, 0X28, 0X20 # subb %spl, (%eax)")
#define SUB_SPL_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X40, 0X28, 0X23 # subb %spl, (%ebx)")
#define SUB_SPL_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X40, 0X28, 0X21 # subb %spl, (%ecx)")
#define SUB_SPL_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X40, 0X28, 0X22 # subb %spl, (%edx)")
#define SUB_SPL_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X40, 0X28, 0X27 # subb %spl, (%edi)")
#define SUB_SPL_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X40, 0X28, 0X26 # subb %spl, (%esi)")
#define SUB_SPL_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X40, 0X28, 0X65, 0X00 # subb %spl, (%ebp)")
#define SUB_SPL_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X40, 0X28, 0X24, 0X24 # subb %spl, (%esp)")

#define SUB_R8B_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X28, 0X00 # subb %r8b, (%rax)")
#define SUB_R8B_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X28, 0X03 # subb %r8b, (%rbx)")
#define SUB_R8B_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X28, 0X01 # subb %r8b, (%rcx)")
#define SUB_R8B_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X28, 0X02 # subb %r8b, (%rdx)")
#define SUB_R8B_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X28, 0X07 # subb %r8b, (%rdi)")
#define SUB_R8B_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X28, 0X06 # subb %r8b, (%rsi)")
#define SUB_R8B_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X28, 0X45, 0X00 # subb %r8b, (%rbp)")
#define SUB_R8B_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X28, 0X04, 0X24 # subb %r8b, (%rsp)")
#define SUB_R8B_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X28, 0X00 # subb %r8b, (%r8)")
#define SUB_R8B_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X28, 0X01 # subb %r8b, (%r9)")
#define SUB_R8B_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X28, 0X02 # subb %r8b, (%r10)")
#define SUB_R8B_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X28, 0X03 # subb %r8b, (%r11)")
#define SUB_R8B_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X28, 0X04, 0X24 # subb %r8b, (%r12)")
#define SUB_R8B_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X28, 0X45, 0X00 # subb %r8b, (%r13)")
#define SUB_R8B_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X28, 0X06 # subb %r8b, (%r14)")
#define SUB_R8B_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X28, 0X07 # subb %r8b, (%r15)")
#define SUB_R8B_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X28, 0X00 # subb %r8b, (%eax)")
#define SUB_R8B_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X28, 0X03 # subb %r8b, (%ebx)")
#define SUB_R8B_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X28, 0X01 # subb %r8b, (%ecx)")
#define SUB_R8B_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X28, 0X02 # subb %r8b, (%edx)")
#define SUB_R8B_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X28, 0X07 # subb %r8b, (%edi)")
#define SUB_R8B_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X28, 0X06 # subb %r8b, (%esi)")
#define SUB_R8B_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X28, 0X45, 0X00 # subb %r8b, (%ebp)")
#define SUB_R8B_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X28, 0X04, 0X24 # subb %r8b, (%esp)")

#define SUB_R9B_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X28, 0X08 # subb %r9b, (%rax)")
#define SUB_R9B_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X28, 0X0B # subb %r9b, (%rbx)")
#define SUB_R9B_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X28, 0X09 # subb %r9b, (%rcx)")
#define SUB_R9B_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X28, 0X0A # subb %r9b, (%rdx)")
#define SUB_R9B_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X28, 0X0F # subb %r9b, (%rdi)")
#define SUB_R9B_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X28, 0X0E # subb %r9b, (%rsi)")
#define SUB_R9B_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X28, 0X4D, 0X00 # subb %r9b, (%rbp)")
#define SUB_R9B_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X28, 0X0C, 0X24 # subb %r9b, (%rsp)")
#define SUB_R9B_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X28, 0X08 # subb %r9b, (%r8)")
#define SUB_R9B_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X28, 0X09 # subb %r9b, (%r9)")
#define SUB_R9B_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X28, 0X0A # subb %r9b, (%r10)")
#define SUB_R9B_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X28, 0X0B # subb %r9b, (%r11)")
#define SUB_R9B_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X28, 0X0C, 0X24 # subb %r9b, (%r12)")
#define SUB_R9B_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X28, 0X4D, 0X00 # subb %r9b, (%r13)")
#define SUB_R9B_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X28, 0X0E # subb %r9b, (%r14)")
#define SUB_R9B_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X28, 0X0F # subb %r9b, (%r15)")
#define SUB_R9B_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X28, 0X08 # subb %r9b, (%eax)")
#define SUB_R9B_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X28, 0X0B # subb %r9b, (%ebx)")
#define SUB_R9B_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X28, 0X09 # subb %r9b, (%ecx)")
#define SUB_R9B_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X28, 0X0A # subb %r9b, (%edx)")
#define SUB_R9B_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X28, 0X0F # subb %r9b, (%edi)")
#define SUB_R9B_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X28, 0X0E # subb %r9b, (%esi)")
#define SUB_R9B_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X28, 0X4D, 0X00 # subb %r9b, (%ebp)")
#define SUB_R9B_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X28, 0X0C, 0X24 # subb %r9b, (%esp)")

#define SUB_R10B_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X28, 0X10 # subb %r10b, (%rax)")
#define SUB_R10B_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X28, 0X13 # subb %r10b, (%rbx)")
#define SUB_R10B_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X28, 0X11 # subb %r10b, (%rcx)")
#define SUB_R10B_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X28, 0X12 # subb %r10b, (%rdx)")
#define SUB_R10B_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X28, 0X17 # subb %r10b, (%rdi)")
#define SUB_R10B_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X28, 0X16 # subb %r10b, (%rsi)")
#define SUB_R10B_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X28, 0X55, 0X00 # subb %r10b, (%rbp)")
#define SUB_R10B_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X28, 0X14, 0X24 # subb %r10b, (%rsp)")
#define SUB_R10B_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X28, 0X10 # subb %r10b, (%r8)")
#define SUB_R10B_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X28, 0X11 # subb %r10b, (%r9)")
#define SUB_R10B_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X28, 0X12 # subb %r10b, (%r10)")
#define SUB_R10B_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X28, 0X13 # subb %r10b, (%r11)")
#define SUB_R10B_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X28, 0X14, 0X24 # subb %r10b, (%r12)")
#define SUB_R10B_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X28, 0X55, 0X00 # subb %r10b, (%r13)")
#define SUB_R10B_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X28, 0X16 # subb %r10b, (%r14)")
#define SUB_R10B_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X28, 0X17 # subb %r10b, (%r15)")
#define SUB_R10B_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X28, 0X10 # subb %r10b, (%eax)")
#define SUB_R10B_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X28, 0X13 # subb %r10b, (%ebx)")
#define SUB_R10B_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X28, 0X11 # subb %r10b, (%ecx)")
#define SUB_R10B_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X28, 0X12 # subb %r10b, (%edx)")
#define SUB_R10B_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X28, 0X17 # subb %r10b, (%edi)")
#define SUB_R10B_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X28, 0X16 # subb %r10b, (%esi)")
#define SUB_R10B_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X28, 0X55, 0X00 # subb %r10b, (%ebp)")
#define SUB_R10B_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X28, 0X14, 0X24 # subb %r10b, (%esp)")

#define SUB_R11B_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X28, 0X18 # subb %r11b, (%rax)")
#define SUB_R11B_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X28, 0X1B # subb %r11b, (%rbx)")
#define SUB_R11B_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X28, 0X19 # subb %r11b, (%rcx)")
#define SUB_R11B_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X28, 0X1A # subb %r11b, (%rdx)")
#define SUB_R11B_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X28, 0X1F # subb %r11b, (%rdi)")
#define SUB_R11B_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X28, 0X1E # subb %r11b, (%rsi)")
#define SUB_R11B_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X28, 0X5D, 0X00 # subb %r11b, (%rbp)")
#define SUB_R11B_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X28, 0X1C, 0X24 # subb %r11b, (%rsp)")
#define SUB_R11B_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X28, 0X18 # subb %r11b, (%r8)")
#define SUB_R11B_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X28, 0X19 # subb %r11b, (%r9)")
#define SUB_R11B_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X28, 0X1A # subb %r11b, (%r10)")
#define SUB_R11B_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X28, 0X1B # subb %r11b, (%r11)")
#define SUB_R11B_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X28, 0X1C, 0X24 # subb %r11b, (%r12)")
#define SUB_R11B_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X28, 0X5D, 0X00 # subb %r11b, (%r13)")
#define SUB_R11B_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X28, 0X1E # subb %r11b, (%r14)")
#define SUB_R11B_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X28, 0X1F # subb %r11b, (%r15)")
#define SUB_R11B_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X28, 0X18 # subb %r11b, (%eax)")
#define SUB_R11B_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X28, 0X1B # subb %r11b, (%ebx)")
#define SUB_R11B_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X28, 0X19 # subb %r11b, (%ecx)")
#define SUB_R11B_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X28, 0X1A # subb %r11b, (%edx)")
#define SUB_R11B_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X28, 0X1F # subb %r11b, (%edi)")
#define SUB_R11B_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X28, 0X1E # subb %r11b, (%esi)")
#define SUB_R11B_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X28, 0X5D, 0X00 # subb %r11b, (%ebp)")
#define SUB_R11B_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X28, 0X1C, 0X24 # subb %r11b, (%esp)")

#define SUB_R12B_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X28, 0X20 # subb %r12b, (%rax)")
#define SUB_R12B_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X28, 0X23 # subb %r12b, (%rbx)")
#define SUB_R12B_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X28, 0X21 # subb %r12b, (%rcx)")
#define SUB_R12B_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X28, 0X22 # subb %r12b, (%rdx)")
#define SUB_R12B_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X28, 0X27 # subb %r12b, (%rdi)")
#define SUB_R12B_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X28, 0X26 # subb %r12b, (%rsi)")
#define SUB_R12B_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X28, 0X65, 0X00 # subb %r12b, (%rbp)")
#define SUB_R12B_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X28, 0X24, 0X24 # subb %r12b, (%rsp)")
#define SUB_R12B_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X28, 0X20 # subb %r12b, (%r8)")
#define SUB_R12B_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X28, 0X21 # subb %r12b, (%r9)")
#define SUB_R12B_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X28, 0X22 # subb %r12b, (%r10)")
#define SUB_R12B_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X28, 0X23 # subb %r12b, (%r11)")
#define SUB_R12B_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X28, 0X24, 0X24 # subb %r12b, (%r12)")
#define SUB_R12B_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X28, 0X65, 0X00 # subb %r12b, (%r13)")
#define SUB_R12B_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X28, 0X26 # subb %r12b, (%r14)")
#define SUB_R12B_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X28, 0X27 # subb %r12b, (%r15)")
#define SUB_R12B_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X28, 0X20 # subb %r12b, (%eax)")
#define SUB_R12B_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X28, 0X23 # subb %r12b, (%ebx)")
#define SUB_R12B_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X28, 0X21 # subb %r12b, (%ecx)")
#define SUB_R12B_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X28, 0X22 # subb %r12b, (%edx)")
#define SUB_R12B_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X28, 0X27 # subb %r12b, (%edi)")
#define SUB_R12B_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X28, 0X26 # subb %r12b, (%esi)")
#define SUB_R12B_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X28, 0X65, 0X00 # subb %r12b, (%ebp)")
#define SUB_R12B_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X28, 0X24, 0X24 # subb %r12b, (%esp)")

#define SUB_R13B_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X28, 0X28 # subb %r13b, (%rax)")
#define SUB_R13B_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X28, 0X2B # subb %r13b, (%rbx)")
#define SUB_R13B_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X28, 0X29 # subb %r13b, (%rcx)")
#define SUB_R13B_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X28, 0X2A # subb %r13b, (%rdx)")
#define SUB_R13B_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X28, 0X2F # subb %r13b, (%rdi)")
#define SUB_R13B_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X28, 0X2E # subb %r13b, (%rsi)")
#define SUB_R13B_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X28, 0X6D, 0X00 # subb %r13b, (%rbp)")
#define SUB_R13B_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X28, 0X2C, 0X24 # subb %r13b, (%rsp)")
#define SUB_R13B_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X28, 0X28 # subb %r13b, (%r8)")
#define SUB_R13B_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X28, 0X29 # subb %r13b, (%r9)")
#define SUB_R13B_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X28, 0X2A # subb %r13b, (%r10)")
#define SUB_R13B_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X28, 0X2B # subb %r13b, (%r11)")
#define SUB_R13B_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X28, 0X2C, 0X24 # subb %r13b, (%r12)")
#define SUB_R13B_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X28, 0X6D, 0X00 # subb %r13b, (%r13)")
#define SUB_R13B_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X28, 0X2E # subb %r13b, (%r14)")
#define SUB_R13B_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X28, 0X2F # subb %r13b, (%r15)")
#define SUB_R13B_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X28, 0X28 # subb %r13b, (%eax)")
#define SUB_R13B_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X28, 0X2B # subb %r13b, (%ebx)")
#define SUB_R13B_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X28, 0X29 # subb %r13b, (%ecx)")
#define SUB_R13B_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X28, 0X2A # subb %r13b, (%edx)")
#define SUB_R13B_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X28, 0X2F # subb %r13b, (%edi)")
#define SUB_R13B_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X28, 0X2E # subb %r13b, (%esi)")
#define SUB_R13B_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X28, 0X6D, 0X00 # subb %r13b, (%ebp)")
#define SUB_R13B_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X28, 0X2C, 0X24 # subb %r13b, (%esp)")

#define SUB_R14B_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X28, 0X30 # subb %r14b, (%rax)")
#define SUB_R14B_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X28, 0X33 # subb %r14b, (%rbx)")
#define SUB_R14B_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X28, 0X31 # subb %r14b, (%rcx)")
#define SUB_R14B_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X28, 0X32 # subb %r14b, (%rdx)")
#define SUB_R14B_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X28, 0X37 # subb %r14b, (%rdi)")
#define SUB_R14B_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X28, 0X36 # subb %r14b, (%rsi)")
#define SUB_R14B_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X28, 0X75, 0X00 # subb %r14b, (%rbp)")
#define SUB_R14B_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X28, 0X34, 0X24 # subb %r14b, (%rsp)")
#define SUB_R14B_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X28, 0X30 # subb %r14b, (%r8)")
#define SUB_R14B_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X28, 0X31 # subb %r14b, (%r9)")
#define SUB_R14B_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X28, 0X32 # subb %r14b, (%r10)")
#define SUB_R14B_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X28, 0X33 # subb %r14b, (%r11)")
#define SUB_R14B_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X28, 0X34, 0X24 # subb %r14b, (%r12)")
#define SUB_R14B_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X28, 0X75, 0X00 # subb %r14b, (%r13)")
#define SUB_R14B_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X28, 0X36 # subb %r14b, (%r14)")
#define SUB_R14B_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X28, 0X37 # subb %r14b, (%r15)")
#define SUB_R14B_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X28, 0X30 # subb %r14b, (%eax)")
#define SUB_R14B_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X28, 0X33 # subb %r14b, (%ebx)")
#define SUB_R14B_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X28, 0X31 # subb %r14b, (%ecx)")
#define SUB_R14B_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X28, 0X32 # subb %r14b, (%edx)")
#define SUB_R14B_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X28, 0X37 # subb %r14b, (%edi)")
#define SUB_R14B_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X28, 0X36 # subb %r14b, (%esi)")
#define SUB_R14B_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X28, 0X75, 0X00 # subb %r14b, (%ebp)")
#define SUB_R14B_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X28, 0X34, 0X24 # subb %r14b, (%esp)")

#define SUB_R15B_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X28, 0X38 # subb %r15b, (%rax)")
#define SUB_R15B_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X28, 0X3B # subb %r15b, (%rbx)")
#define SUB_R15B_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X28, 0X39 # subb %r15b, (%rcx)")
#define SUB_R15B_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X28, 0X3A # subb %r15b, (%rdx)")
#define SUB_R15B_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X28, 0X3F # subb %r15b, (%rdi)")
#define SUB_R15B_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X28, 0X3E # subb %r15b, (%rsi)")
#define SUB_R15B_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X28, 0X7D, 0X00 # subb %r15b, (%rbp)")
#define SUB_R15B_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X28, 0X3C, 0X24 # subb %r15b, (%rsp)")
#define SUB_R15B_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X28, 0X38 # subb %r15b, (%r8)")
#define SUB_R15B_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X28, 0X39 # subb %r15b, (%r9)")
#define SUB_R15B_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X28, 0X3A # subb %r15b, (%r10)")
#define SUB_R15B_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X28, 0X3B # subb %r15b, (%r11)")
#define SUB_R15B_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X28, 0X3C, 0X24 # subb %r15b, (%r12)")
#define SUB_R15B_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X28, 0X7D, 0X00 # subb %r15b, (%r13)")
#define SUB_R15B_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X28, 0X3E # subb %r15b, (%r14)")
#define SUB_R15B_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X28, 0X3F # subb %r15b, (%r15)")
#define SUB_R15B_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X28, 0X38 # subb %r15b, (%eax)")
#define SUB_R15B_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X28, 0X3B # subb %r15b, (%ebx)")
#define SUB_R15B_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X28, 0X39 # subb %r15b, (%ecx)")
#define SUB_R15B_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X28, 0X3A # subb %r15b, (%edx)")
#define SUB_R15B_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X28, 0X3F # subb %r15b, (%edi)")
#define SUB_R15B_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X28, 0X3E # subb %r15b, (%esi)")
#define SUB_R15B_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X28, 0X7D, 0X00 # subb %r15b, (%ebp)")
#define SUB_R15B_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X28, 0X3C, 0X24 # subb %r15b, (%esp)")

#define SUB_AL_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X2A, 0X80 # subb " _(VALUE) "(%rax), %al")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AL_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X2A, 0X83 # subb " _(VALUE) "(%rbx), %al")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AL_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X2A, 0X81 # subb " _(VALUE) "(%rcx), %al")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AL_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X2A, 0X82 # subb " _(VALUE) "(%rdx), %al")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AL_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X2A, 0X87 # subb " _(VALUE) "(%rdi), %al")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AL_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X2A, 0X86 # subb " _(VALUE) "(%rsi), %al")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AL_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X2A, 0X85 # subb " _(VALUE) "(%rbp), %al")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AL_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X2A, 0X84, 0X24 # subb " _(VALUE) "(%rsp), %al")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AL_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2A, 0X80 # subb " _(VALUE) "(%r8), %al")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AL_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2A, 0X81 # subb " _(VALUE) "(%r9), %al")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AL_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2A, 0X82 # subb " _(VALUE) "(%r10), %al")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AL_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2A, 0X83 # subb " _(VALUE) "(%r11), %al")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AL_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2A, 0X84, 0X24 # subb " _(VALUE) "(%r12), %al")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AL_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2A, 0X85 # subb " _(VALUE) "(%r13), %al")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AL_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2A, 0X86 # subb " _(VALUE) "(%r14), %al")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AL_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2A, 0X87 # subb " _(VALUE) "(%r15), %al")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2A, 0X80 # subb " _(VALUE) "(%eax), %al")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2A, 0X83 # subb " _(VALUE) "(%ebx), %al")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2A, 0X81 # subb " _(VALUE) "(%ecx), %al")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2A, 0X82 # subb " _(VALUE) "(%edx), %al")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2A, 0X87 # subb " _(VALUE) "(%edi), %al")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2A, 0X86 # subb " _(VALUE) "(%esi), %al")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2A, 0X85 # subb " _(VALUE) "(%ebp), %al")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2A, 0X84, 0X24 # subb " _(VALUE) "(%esp), %al")\
	CMT_ASM(".long " _(VALUE))

#define SUB_BL_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X2A, 0X98 # subb " _(VALUE) "(%rax), %bl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BL_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X2A, 0X9B # subb " _(VALUE) "(%rbx), %bl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BL_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X2A, 0X99 # subb " _(VALUE) "(%rcx), %bl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BL_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X2A, 0X9A # subb " _(VALUE) "(%rdx), %bl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BL_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X2A, 0X9F # subb " _(VALUE) "(%rdi), %bl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BL_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X2A, 0X9E # subb " _(VALUE) "(%rsi), %bl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BL_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X2A, 0X9D # subb " _(VALUE) "(%rbp), %bl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BL_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X2A, 0X9C, 0X24 # subb " _(VALUE) "(%rsp), %bl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BL_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2A, 0X98 # subb " _(VALUE) "(%r8), %bl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BL_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2A, 0X99 # subb " _(VALUE) "(%r9), %bl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BL_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2A, 0X9A # subb " _(VALUE) "(%r10), %bl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BL_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2A, 0X9B # subb " _(VALUE) "(%r11), %bl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BL_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2A, 0X9C, 0X24 # subb " _(VALUE) "(%r12), %bl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BL_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2A, 0X9D # subb " _(VALUE) "(%r13), %bl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BL_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2A, 0X9E # subb " _(VALUE) "(%r14), %bl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BL_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2A, 0X9F # subb " _(VALUE) "(%r15), %bl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2A, 0X98 # subb " _(VALUE) "(%eax), %bl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2A, 0X9B # subb " _(VALUE) "(%ebx), %bl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2A, 0X99 # subb " _(VALUE) "(%ecx), %bl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2A, 0X9A # subb " _(VALUE) "(%edx), %bl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2A, 0X9F # subb " _(VALUE) "(%edi), %bl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2A, 0X9E # subb " _(VALUE) "(%esi), %bl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2A, 0X9D # subb " _(VALUE) "(%ebp), %bl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2A, 0X9C, 0X24 # subb " _(VALUE) "(%esp), %bl")\
	CMT_ASM(".long " _(VALUE))

#define SUB_CL_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X2A, 0X88 # subb " _(VALUE) "(%rax), %cl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CL_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X2A, 0X8B # subb " _(VALUE) "(%rbx), %cl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CL_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X2A, 0X89 # subb " _(VALUE) "(%rcx), %cl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CL_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X2A, 0X8A # subb " _(VALUE) "(%rdx), %cl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CL_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X2A, 0X8F # subb " _(VALUE) "(%rdi), %cl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CL_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X2A, 0X8E # subb " _(VALUE) "(%rsi), %cl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CL_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X2A, 0X8D # subb " _(VALUE) "(%rbp), %cl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CL_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X2A, 0X8C, 0X24 # subb " _(VALUE) "(%rsp), %cl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CL_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2A, 0X88 # subb " _(VALUE) "(%r8), %cl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CL_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2A, 0X89 # subb " _(VALUE) "(%r9), %cl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CL_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2A, 0X8A # subb " _(VALUE) "(%r10), %cl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CL_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2A, 0X8B # subb " _(VALUE) "(%r11), %cl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CL_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2A, 0X8C, 0X24 # subb " _(VALUE) "(%r12), %cl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CL_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2A, 0X8D # subb " _(VALUE) "(%r13), %cl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CL_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2A, 0X8E # subb " _(VALUE) "(%r14), %cl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CL_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2A, 0X8F # subb " _(VALUE) "(%r15), %cl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2A, 0X88 # subb " _(VALUE) "(%eax), %cl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2A, 0X8B # subb " _(VALUE) "(%ebx), %cl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2A, 0X89 # subb " _(VALUE) "(%ecx), %cl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2A, 0X8A # subb " _(VALUE) "(%edx), %cl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2A, 0X8F # subb " _(VALUE) "(%edi), %cl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2A, 0X8E # subb " _(VALUE) "(%esi), %cl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2A, 0X8D # subb " _(VALUE) "(%ebp), %cl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2A, 0X8C, 0X24 # subb " _(VALUE) "(%esp), %cl")\
	CMT_ASM(".long " _(VALUE))

#define SUB_DL_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X2A, 0X90 # subb " _(VALUE) "(%rax), %dl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DL_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X2A, 0X93 # subb " _(VALUE) "(%rbx), %dl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DL_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X2A, 0X91 # subb " _(VALUE) "(%rcx), %dl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DL_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X2A, 0X92 # subb " _(VALUE) "(%rdx), %dl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DL_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X2A, 0X97 # subb " _(VALUE) "(%rdi), %dl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DL_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X2A, 0X96 # subb " _(VALUE) "(%rsi), %dl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DL_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X2A, 0X95 # subb " _(VALUE) "(%rbp), %dl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DL_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X2A, 0X94, 0X24 # subb " _(VALUE) "(%rsp), %dl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DL_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2A, 0X90 # subb " _(VALUE) "(%r8), %dl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DL_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2A, 0X91 # subb " _(VALUE) "(%r9), %dl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DL_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2A, 0X92 # subb " _(VALUE) "(%r10), %dl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DL_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2A, 0X93 # subb " _(VALUE) "(%r11), %dl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DL_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2A, 0X94, 0X24 # subb " _(VALUE) "(%r12), %dl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DL_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2A, 0X95 # subb " _(VALUE) "(%r13), %dl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DL_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2A, 0X96 # subb " _(VALUE) "(%r14), %dl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DL_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2A, 0X97 # subb " _(VALUE) "(%r15), %dl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2A, 0X90 # subb " _(VALUE) "(%eax), %dl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2A, 0X93 # subb " _(VALUE) "(%ebx), %dl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2A, 0X91 # subb " _(VALUE) "(%ecx), %dl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2A, 0X92 # subb " _(VALUE) "(%edx), %dl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2A, 0X97 # subb " _(VALUE) "(%edi), %dl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2A, 0X96 # subb " _(VALUE) "(%esi), %dl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2A, 0X95 # subb " _(VALUE) "(%ebp), %dl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2A, 0X94, 0X24 # subb " _(VALUE) "(%esp), %dl")\
	CMT_ASM(".long " _(VALUE))

#define SUB_DIL_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X2A, 0XB8 # subb " _(VALUE) "(%rax), %dil")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DIL_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X2A, 0XBB # subb " _(VALUE) "(%rbx), %dil")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DIL_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X2A, 0XB9 # subb " _(VALUE) "(%rcx), %dil")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DIL_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X2A, 0XBA # subb " _(VALUE) "(%rdx), %dil")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DIL_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X2A, 0XBF # subb " _(VALUE) "(%rdi), %dil")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DIL_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X2A, 0XBE # subb " _(VALUE) "(%rsi), %dil")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DIL_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X2A, 0XBD # subb " _(VALUE) "(%rbp), %dil")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DIL_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X2A, 0XBC, 0X24 # subb " _(VALUE) "(%rsp), %dil")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DIL_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2A, 0XB8 # subb " _(VALUE) "(%r8), %dil")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DIL_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2A, 0XB9 # subb " _(VALUE) "(%r9), %dil")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DIL_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2A, 0XBA # subb " _(VALUE) "(%r10), %dil")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DIL_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2A, 0XBB # subb " _(VALUE) "(%r11), %dil")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DIL_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2A, 0XBC, 0X24 # subb " _(VALUE) "(%r12), %dil")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DIL_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2A, 0XBD # subb " _(VALUE) "(%r13), %dil")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DIL_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2A, 0XBE # subb " _(VALUE) "(%r14), %dil")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DIL_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2A, 0XBF # subb " _(VALUE) "(%r15), %dil")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DIL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X2A, 0XB8 # subb " _(VALUE) "(%eax), %dil")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DIL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X2A, 0XBB # subb " _(VALUE) "(%ebx), %dil")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DIL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X2A, 0XB9 # subb " _(VALUE) "(%ecx), %dil")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DIL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X2A, 0XBA # subb " _(VALUE) "(%edx), %dil")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DIL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X2A, 0XBF # subb " _(VALUE) "(%edi), %dil")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DIL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X2A, 0XBE # subb " _(VALUE) "(%esi), %dil")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DIL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X2A, 0XBD # subb " _(VALUE) "(%ebp), %dil")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DIL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X2A, 0XBC, 0X24 # subb " _(VALUE) "(%esp), %dil")\
	CMT_ASM(".long " _(VALUE))

#define SUB_SIL_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X2A, 0XB0 # subb " _(VALUE) "(%rax), %sil")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SIL_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X2A, 0XB3 # subb " _(VALUE) "(%rbx), %sil")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SIL_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X2A, 0XB1 # subb " _(VALUE) "(%rcx), %sil")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SIL_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X2A, 0XB2 # subb " _(VALUE) "(%rdx), %sil")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SIL_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X2A, 0XB7 # subb " _(VALUE) "(%rdi), %sil")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SIL_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X2A, 0XB6 # subb " _(VALUE) "(%rsi), %sil")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SIL_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X2A, 0XB5 # subb " _(VALUE) "(%rbp), %sil")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SIL_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X2A, 0XB4, 0X24 # subb " _(VALUE) "(%rsp), %sil")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SIL_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2A, 0XB0 # subb " _(VALUE) "(%r8), %sil")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SIL_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2A, 0XB1 # subb " _(VALUE) "(%r9), %sil")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SIL_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2A, 0XB2 # subb " _(VALUE) "(%r10), %sil")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SIL_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2A, 0XB3 # subb " _(VALUE) "(%r11), %sil")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SIL_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2A, 0XB4, 0X24 # subb " _(VALUE) "(%r12), %sil")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SIL_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2A, 0XB5 # subb " _(VALUE) "(%r13), %sil")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SIL_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2A, 0XB6 # subb " _(VALUE) "(%r14), %sil")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SIL_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2A, 0XB7 # subb " _(VALUE) "(%r15), %sil")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SIL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X2A, 0XB0 # subb " _(VALUE) "(%eax), %sil")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SIL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X2A, 0XB3 # subb " _(VALUE) "(%ebx), %sil")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SIL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X2A, 0XB1 # subb " _(VALUE) "(%ecx), %sil")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SIL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X2A, 0XB2 # subb " _(VALUE) "(%edx), %sil")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SIL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X2A, 0XB7 # subb " _(VALUE) "(%edi), %sil")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SIL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X2A, 0XB6 # subb " _(VALUE) "(%esi), %sil")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SIL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X2A, 0XB5 # subb " _(VALUE) "(%ebp), %sil")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SIL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X2A, 0XB4, 0X24 # subb " _(VALUE) "(%esp), %sil")\
	CMT_ASM(".long " _(VALUE))

#define SUB_BPL_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X2A, 0XA8 # subb " _(VALUE) "(%rax), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BPL_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X2A, 0XAB # subb " _(VALUE) "(%rbx), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BPL_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X2A, 0XA9 # subb " _(VALUE) "(%rcx), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BPL_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X2A, 0XAA # subb " _(VALUE) "(%rdx), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BPL_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X2A, 0XAF # subb " _(VALUE) "(%rdi), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BPL_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X2A, 0XAE # subb " _(VALUE) "(%rsi), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BPL_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X2A, 0XAD # subb " _(VALUE) "(%rbp), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BPL_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X2A, 0XAC, 0X24 # subb " _(VALUE) "(%rsp), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BPL_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2A, 0XA8 # subb " _(VALUE) "(%r8), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BPL_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2A, 0XA9 # subb " _(VALUE) "(%r9), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BPL_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2A, 0XAA # subb " _(VALUE) "(%r10), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BPL_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2A, 0XAB # subb " _(VALUE) "(%r11), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BPL_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2A, 0XAC, 0X24 # subb " _(VALUE) "(%r12), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BPL_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2A, 0XAD # subb " _(VALUE) "(%r13), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BPL_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2A, 0XAE # subb " _(VALUE) "(%r14), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BPL_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2A, 0XAF # subb " _(VALUE) "(%r15), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BPL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X2A, 0XA8 # subb " _(VALUE) "(%eax), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BPL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X2A, 0XAB # subb " _(VALUE) "(%ebx), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BPL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X2A, 0XA9 # subb " _(VALUE) "(%ecx), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BPL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X2A, 0XAA # subb " _(VALUE) "(%edx), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BPL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X2A, 0XAF # subb " _(VALUE) "(%edi), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BPL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X2A, 0XAE # subb " _(VALUE) "(%esi), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BPL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X2A, 0XAD # subb " _(VALUE) "(%ebp), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BPL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X2A, 0XAC, 0X24 # subb " _(VALUE) "(%esp), %bpl")\
	CMT_ASM(".long " _(VALUE))

#define SUB_SPL_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X2A, 0XA0 # subb " _(VALUE) "(%rax), %spl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SPL_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X2A, 0XA3 # subb " _(VALUE) "(%rbx), %spl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SPL_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X2A, 0XA1 # subb " _(VALUE) "(%rcx), %spl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SPL_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X2A, 0XA2 # subb " _(VALUE) "(%rdx), %spl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SPL_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X2A, 0XA7 # subb " _(VALUE) "(%rdi), %spl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SPL_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X2A, 0XA6 # subb " _(VALUE) "(%rsi), %spl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SPL_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X2A, 0XA5 # subb " _(VALUE) "(%rbp), %spl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SPL_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X2A, 0XA4, 0X24 # subb " _(VALUE) "(%rsp), %spl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SPL_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2A, 0XA0 # subb " _(VALUE) "(%r8), %spl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SPL_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2A, 0XA1 # subb " _(VALUE) "(%r9), %spl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SPL_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2A, 0XA2 # subb " _(VALUE) "(%r10), %spl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SPL_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2A, 0XA3 # subb " _(VALUE) "(%r11), %spl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SPL_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2A, 0XA4, 0X24 # subb " _(VALUE) "(%r12), %spl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SPL_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2A, 0XA5 # subb " _(VALUE) "(%r13), %spl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SPL_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2A, 0XA6 # subb " _(VALUE) "(%r14), %spl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SPL_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2A, 0XA7 # subb " _(VALUE) "(%r15), %spl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SPL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X2A, 0XA0 # subb " _(VALUE) "(%eax), %spl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SPL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X2A, 0XA3 # subb " _(VALUE) "(%ebx), %spl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SPL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X2A, 0XA1 # subb " _(VALUE) "(%ecx), %spl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SPL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X2A, 0XA2 # subb " _(VALUE) "(%edx), %spl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SPL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X2A, 0XA7 # subb " _(VALUE) "(%edi), %spl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SPL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X2A, 0XA6 # subb " _(VALUE) "(%esi), %spl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SPL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X2A, 0XA5 # subb " _(VALUE) "(%ebp), %spl")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SPL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X2A, 0XA4, 0X24 # subb " _(VALUE) "(%esp), %spl")\
	CMT_ASM(".long " _(VALUE))

#define SUB_R8B_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2A, 0X80 # subb " _(VALUE) "(%rax), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8B_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2A, 0X83 # subb " _(VALUE) "(%rbx), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8B_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2A, 0X81 # subb " _(VALUE) "(%rcx), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8B_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2A, 0X82 # subb " _(VALUE) "(%rdx), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8B_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2A, 0X87 # subb " _(VALUE) "(%rdi), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8B_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2A, 0X86 # subb " _(VALUE) "(%rsi), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8B_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2A, 0X85 # subb " _(VALUE) "(%rbp), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8B_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2A, 0X84, 0X24 # subb " _(VALUE) "(%rsp), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8B_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2A, 0X80 # subb " _(VALUE) "(%r8), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8B_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2A, 0X81 # subb " _(VALUE) "(%r9), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8B_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2A, 0X82 # subb " _(VALUE) "(%r10), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8B_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2A, 0X83 # subb " _(VALUE) "(%r11), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8B_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2A, 0X84, 0X24 # subb " _(VALUE) "(%r12), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8B_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2A, 0X85 # subb " _(VALUE) "(%r13), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8B_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2A, 0X86 # subb " _(VALUE) "(%r14), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8B_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2A, 0X87 # subb " _(VALUE) "(%r15), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8B_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2A, 0X80 # subb " _(VALUE) "(%eax), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8B_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2A, 0X83 # subb " _(VALUE) "(%ebx), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8B_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2A, 0X81 # subb " _(VALUE) "(%ecx), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8B_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2A, 0X82 # subb " _(VALUE) "(%edx), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8B_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2A, 0X87 # subb " _(VALUE) "(%edi), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8B_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2A, 0X86 # subb " _(VALUE) "(%esi), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8B_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2A, 0X85 # subb " _(VALUE) "(%ebp), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8B_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2A, 0X84, 0X24 # subb " _(VALUE) "(%esp), %r8b")\
	CMT_ASM(".long " _(VALUE))

#define SUB_R9B_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2A, 0X88 # subb " _(VALUE) "(%rax), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9B_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2A, 0X8B # subb " _(VALUE) "(%rbx), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9B_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2A, 0X89 # subb " _(VALUE) "(%rcx), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9B_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2A, 0X8A # subb " _(VALUE) "(%rdx), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9B_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2A, 0X8F # subb " _(VALUE) "(%rdi), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9B_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2A, 0X8E # subb " _(VALUE) "(%rsi), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9B_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2A, 0X8D # subb " _(VALUE) "(%rbp), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9B_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2A, 0X8C, 0X24 # subb " _(VALUE) "(%rsp), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9B_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2A, 0X88 # subb " _(VALUE) "(%r8), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9B_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2A, 0X89 # subb " _(VALUE) "(%r9), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9B_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2A, 0X8A # subb " _(VALUE) "(%r10), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9B_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2A, 0X8B # subb " _(VALUE) "(%r11), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9B_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2A, 0X8C, 0X24 # subb " _(VALUE) "(%r12), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9B_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2A, 0X8D # subb " _(VALUE) "(%r13), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9B_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2A, 0X8E # subb " _(VALUE) "(%r14), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9B_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2A, 0X8F # subb " _(VALUE) "(%r15), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9B_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2A, 0X88 # subb " _(VALUE) "(%eax), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9B_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2A, 0X8B # subb " _(VALUE) "(%ebx), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9B_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2A, 0X89 # subb " _(VALUE) "(%ecx), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9B_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2A, 0X8A # subb " _(VALUE) "(%edx), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9B_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2A, 0X8F # subb " _(VALUE) "(%edi), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9B_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2A, 0X8E # subb " _(VALUE) "(%esi), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9B_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2A, 0X8D # subb " _(VALUE) "(%ebp), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9B_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2A, 0X8C, 0X24 # subb " _(VALUE) "(%esp), %r9b")\
	CMT_ASM(".long " _(VALUE))

#define SUB_R10B_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2A, 0X90 # subb " _(VALUE) "(%rax), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10B_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2A, 0X93 # subb " _(VALUE) "(%rbx), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10B_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2A, 0X91 # subb " _(VALUE) "(%rcx), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10B_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2A, 0X92 # subb " _(VALUE) "(%rdx), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10B_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2A, 0X97 # subb " _(VALUE) "(%rdi), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10B_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2A, 0X96 # subb " _(VALUE) "(%rsi), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10B_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2A, 0X95 # subb " _(VALUE) "(%rbp), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10B_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2A, 0X94, 0X24 # subb " _(VALUE) "(%rsp), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10B_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2A, 0X90 # subb " _(VALUE) "(%r8), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10B_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2A, 0X91 # subb " _(VALUE) "(%r9), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10B_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2A, 0X92 # subb " _(VALUE) "(%r10), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10B_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2A, 0X93 # subb " _(VALUE) "(%r11), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10B_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2A, 0X94, 0X24 # subb " _(VALUE) "(%r12), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10B_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2A, 0X95 # subb " _(VALUE) "(%r13), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10B_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2A, 0X96 # subb " _(VALUE) "(%r14), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10B_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2A, 0X97 # subb " _(VALUE) "(%r15), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10B_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2A, 0X90 # subb " _(VALUE) "(%eax), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10B_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2A, 0X93 # subb " _(VALUE) "(%ebx), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10B_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2A, 0X91 # subb " _(VALUE) "(%ecx), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10B_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2A, 0X92 # subb " _(VALUE) "(%edx), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10B_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2A, 0X97 # subb " _(VALUE) "(%edi), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10B_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2A, 0X96 # subb " _(VALUE) "(%esi), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10B_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2A, 0X95 # subb " _(VALUE) "(%ebp), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10B_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2A, 0X94, 0X24 # subb " _(VALUE) "(%esp), %r10b")\
	CMT_ASM(".long " _(VALUE))

#define SUB_R11B_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2A, 0X98 # subb " _(VALUE) "(%rax), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11B_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2A, 0X9B # subb " _(VALUE) "(%rbx), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11B_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2A, 0X99 # subb " _(VALUE) "(%rcx), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11B_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2A, 0X9A # subb " _(VALUE) "(%rdx), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11B_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2A, 0X9F # subb " _(VALUE) "(%rdi), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11B_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2A, 0X9E # subb " _(VALUE) "(%rsi), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11B_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2A, 0X9D # subb " _(VALUE) "(%rbp), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11B_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2A, 0X9C, 0X24 # subb " _(VALUE) "(%rsp), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11B_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2A, 0X98 # subb " _(VALUE) "(%r8), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11B_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2A, 0X99 # subb " _(VALUE) "(%r9), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11B_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2A, 0X9A # subb " _(VALUE) "(%r10), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11B_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2A, 0X9B # subb " _(VALUE) "(%r11), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11B_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2A, 0X9C, 0X24 # subb " _(VALUE) "(%r12), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11B_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2A, 0X9D # subb " _(VALUE) "(%r13), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11B_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2A, 0X9E # subb " _(VALUE) "(%r14), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11B_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2A, 0X9F # subb " _(VALUE) "(%r15), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11B_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2A, 0X98 # subb " _(VALUE) "(%eax), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11B_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2A, 0X9B # subb " _(VALUE) "(%ebx), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11B_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2A, 0X99 # subb " _(VALUE) "(%ecx), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11B_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2A, 0X9A # subb " _(VALUE) "(%edx), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11B_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2A, 0X9F # subb " _(VALUE) "(%edi), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11B_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2A, 0X9E # subb " _(VALUE) "(%esi), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11B_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2A, 0X9D # subb " _(VALUE) "(%ebp), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11B_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2A, 0X9C, 0X24 # subb " _(VALUE) "(%esp), %r11b")\
	CMT_ASM(".long " _(VALUE))

#define SUB_R12B_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2A, 0XA0 # subb " _(VALUE) "(%rax), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12B_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2A, 0XA3 # subb " _(VALUE) "(%rbx), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12B_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2A, 0XA1 # subb " _(VALUE) "(%rcx), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12B_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2A, 0XA2 # subb " _(VALUE) "(%rdx), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12B_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2A, 0XA7 # subb " _(VALUE) "(%rdi), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12B_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2A, 0XA6 # subb " _(VALUE) "(%rsi), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12B_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2A, 0XA5 # subb " _(VALUE) "(%rbp), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12B_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2A, 0XA4, 0X24 # subb " _(VALUE) "(%rsp), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12B_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2A, 0XA0 # subb " _(VALUE) "(%r8), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12B_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2A, 0XA1 # subb " _(VALUE) "(%r9), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12B_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2A, 0XA2 # subb " _(VALUE) "(%r10), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12B_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2A, 0XA3 # subb " _(VALUE) "(%r11), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12B_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2A, 0XA4, 0X24 # subb " _(VALUE) "(%r12), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12B_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2A, 0XA5 # subb " _(VALUE) "(%r13), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12B_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2A, 0XA6 # subb " _(VALUE) "(%r14), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12B_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2A, 0XA7 # subb " _(VALUE) "(%r15), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12B_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2A, 0XA0 # subb " _(VALUE) "(%eax), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12B_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2A, 0XA3 # subb " _(VALUE) "(%ebx), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12B_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2A, 0XA1 # subb " _(VALUE) "(%ecx), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12B_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2A, 0XA2 # subb " _(VALUE) "(%edx), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12B_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2A, 0XA7 # subb " _(VALUE) "(%edi), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12B_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2A, 0XA6 # subb " _(VALUE) "(%esi), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12B_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2A, 0XA5 # subb " _(VALUE) "(%ebp), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12B_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2A, 0XA4, 0X24 # subb " _(VALUE) "(%esp), %r12b")\
	CMT_ASM(".long " _(VALUE))

#define SUB_R13B_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2A, 0XA8 # subb " _(VALUE) "(%rax), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13B_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2A, 0XAB # subb " _(VALUE) "(%rbx), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13B_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2A, 0XA9 # subb " _(VALUE) "(%rcx), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13B_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2A, 0XAA # subb " _(VALUE) "(%rdx), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13B_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2A, 0XAF # subb " _(VALUE) "(%rdi), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13B_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2A, 0XAE # subb " _(VALUE) "(%rsi), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13B_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2A, 0XAD # subb " _(VALUE) "(%rbp), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13B_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2A, 0XAC, 0X24 # subb " _(VALUE) "(%rsp), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13B_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2A, 0XA8 # subb " _(VALUE) "(%r8), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13B_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2A, 0XA9 # subb " _(VALUE) "(%r9), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13B_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2A, 0XAA # subb " _(VALUE) "(%r10), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13B_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2A, 0XAB # subb " _(VALUE) "(%r11), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13B_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2A, 0XAC, 0X24 # subb " _(VALUE) "(%r12), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13B_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2A, 0XAD # subb " _(VALUE) "(%r13), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13B_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2A, 0XAE # subb " _(VALUE) "(%r14), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13B_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2A, 0XAF # subb " _(VALUE) "(%r15), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13B_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2A, 0XA8 # subb " _(VALUE) "(%eax), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13B_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2A, 0XAB # subb " _(VALUE) "(%ebx), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13B_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2A, 0XA9 # subb " _(VALUE) "(%ecx), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13B_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2A, 0XAA # subb " _(VALUE) "(%edx), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13B_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2A, 0XAF # subb " _(VALUE) "(%edi), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13B_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2A, 0XAE # subb " _(VALUE) "(%esi), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13B_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2A, 0XAD # subb " _(VALUE) "(%ebp), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13B_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2A, 0XAC, 0X24 # subb " _(VALUE) "(%esp), %r13b")\
	CMT_ASM(".long " _(VALUE))

#define SUB_R14B_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2A, 0XB0 # subb " _(VALUE) "(%rax), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14B_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2A, 0XB3 # subb " _(VALUE) "(%rbx), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14B_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2A, 0XB1 # subb " _(VALUE) "(%rcx), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14B_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2A, 0XB2 # subb " _(VALUE) "(%rdx), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14B_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2A, 0XB7 # subb " _(VALUE) "(%rdi), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14B_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2A, 0XB6 # subb " _(VALUE) "(%rsi), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14B_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2A, 0XB5 # subb " _(VALUE) "(%rbp), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14B_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2A, 0XB4, 0X24 # subb " _(VALUE) "(%rsp), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14B_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2A, 0XB0 # subb " _(VALUE) "(%r8), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14B_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2A, 0XB1 # subb " _(VALUE) "(%r9), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14B_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2A, 0XB2 # subb " _(VALUE) "(%r10), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14B_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2A, 0XB3 # subb " _(VALUE) "(%r11), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14B_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2A, 0XB4, 0X24 # subb " _(VALUE) "(%r12), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14B_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2A, 0XB5 # subb " _(VALUE) "(%r13), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14B_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2A, 0XB6 # subb " _(VALUE) "(%r14), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14B_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2A, 0XB7 # subb " _(VALUE) "(%r15), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14B_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2A, 0XB0 # subb " _(VALUE) "(%eax), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14B_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2A, 0XB3 # subb " _(VALUE) "(%ebx), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14B_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2A, 0XB1 # subb " _(VALUE) "(%ecx), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14B_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2A, 0XB2 # subb " _(VALUE) "(%edx), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14B_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2A, 0XB7 # subb " _(VALUE) "(%edi), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14B_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2A, 0XB6 # subb " _(VALUE) "(%esi), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14B_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2A, 0XB5 # subb " _(VALUE) "(%ebp), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14B_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2A, 0XB4, 0X24 # subb " _(VALUE) "(%esp), %r14b")\
	CMT_ASM(".long " _(VALUE))

#define SUB_R15B_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2A, 0XB8 # subb " _(VALUE) "(%rax), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15B_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2A, 0XBB # subb " _(VALUE) "(%rbx), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15B_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2A, 0XB9 # subb " _(VALUE) "(%rcx), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15B_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2A, 0XBA # subb " _(VALUE) "(%rdx), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15B_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2A, 0XBF # subb " _(VALUE) "(%rdi), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15B_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2A, 0XBE # subb " _(VALUE) "(%rsi), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15B_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2A, 0XBD # subb " _(VALUE) "(%rbp), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15B_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2A, 0XBC, 0X24 # subb " _(VALUE) "(%rsp), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15B_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2A, 0XB8 # subb " _(VALUE) "(%r8), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15B_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2A, 0XB9 # subb " _(VALUE) "(%r9), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15B_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2A, 0XBA # subb " _(VALUE) "(%r10), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15B_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2A, 0XBB # subb " _(VALUE) "(%r11), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15B_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2A, 0XBC, 0X24 # subb " _(VALUE) "(%r12), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15B_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2A, 0XBD # subb " _(VALUE) "(%r13), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15B_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2A, 0XBE # subb " _(VALUE) "(%r14), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15B_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2A, 0XBF # subb " _(VALUE) "(%r15), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15B_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2A, 0XB8 # subb " _(VALUE) "(%eax), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15B_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2A, 0XBB # subb " _(VALUE) "(%ebx), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15B_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2A, 0XB9 # subb " _(VALUE) "(%ecx), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15B_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2A, 0XBA # subb " _(VALUE) "(%edx), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15B_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2A, 0XBF # subb " _(VALUE) "(%edi), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15B_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2A, 0XBE # subb " _(VALUE) "(%esi), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15B_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2A, 0XBD # subb " _(VALUE) "(%ebp), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15B_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2A, 0XBC, 0X24 # subb " _(VALUE) "(%esp), %r15b")\
	CMT_ASM(".long " _(VALUE))

#define SUB_AL_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X28, 0X80 # subb %al, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AL_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X28, 0X83 # subb %al, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AL_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X28, 0X81 # subb %al, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AL_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X28, 0X82 # subb %al, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AL_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X28, 0X87 # subb %al, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AL_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X28, 0X86 # subb %al, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AL_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X28, 0X85 # subb %al, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AL_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X28, 0X84, 0X24 # subb %al, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AL_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X28, 0X80 # subb %al, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AL_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X28, 0X81 # subb %al, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AL_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X28, 0X82 # subb %al, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AL_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X28, 0X83 # subb %al, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AL_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X28, 0X84, 0X24 # subb %al, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AL_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X28, 0X85 # subb %al, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AL_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X28, 0X86 # subb %al, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AL_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X28, 0X87 # subb %al, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X28, 0X80 # subb %al, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X28, 0X83 # subb %al, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X28, 0X81 # subb %al, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X28, 0X82 # subb %al, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X28, 0X87 # subb %al, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X28, 0X86 # subb %al, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X28, 0X85 # subb %al, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X28, 0X84, 0X24 # subb %al, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SUB_BL_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X28, 0X98 # subb %bl, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BL_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X28, 0X9B # subb %bl, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BL_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X28, 0X99 # subb %bl, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BL_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X28, 0X9A # subb %bl, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BL_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X28, 0X9F # subb %bl, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BL_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X28, 0X9E # subb %bl, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BL_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X28, 0X9D # subb %bl, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BL_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X28, 0X9C, 0X24 # subb %bl, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BL_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X28, 0X98 # subb %bl, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BL_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X28, 0X99 # subb %bl, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BL_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X28, 0X9A # subb %bl, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BL_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X28, 0X9B # subb %bl, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BL_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X28, 0X9C, 0X24 # subb %bl, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BL_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X28, 0X9D # subb %bl, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BL_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X28, 0X9E # subb %bl, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BL_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X28, 0X9F # subb %bl, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X28, 0X98 # subb %bl, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X28, 0X9B # subb %bl, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X28, 0X99 # subb %bl, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X28, 0X9A # subb %bl, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X28, 0X9F # subb %bl, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X28, 0X9E # subb %bl, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X28, 0X9D # subb %bl, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X28, 0X9C, 0X24 # subb %bl, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SUB_CL_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X28, 0X88 # subb %cl, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CL_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X28, 0X8B # subb %cl, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CL_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X28, 0X89 # subb %cl, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CL_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X28, 0X8A # subb %cl, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CL_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X28, 0X8F # subb %cl, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CL_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X28, 0X8E # subb %cl, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CL_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X28, 0X8D # subb %cl, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CL_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X28, 0X8C, 0X24 # subb %cl, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CL_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X28, 0X88 # subb %cl, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CL_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X28, 0X89 # subb %cl, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CL_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X28, 0X8A # subb %cl, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CL_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X28, 0X8B # subb %cl, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CL_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X28, 0X8C, 0X24 # subb %cl, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CL_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X28, 0X8D # subb %cl, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CL_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X28, 0X8E # subb %cl, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CL_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X28, 0X8F # subb %cl, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X28, 0X88 # subb %cl, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X28, 0X8B # subb %cl, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X28, 0X89 # subb %cl, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X28, 0X8A # subb %cl, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X28, 0X8F # subb %cl, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X28, 0X8E # subb %cl, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X28, 0X8D # subb %cl, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X28, 0X8C, 0X24 # subb %cl, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SUB_DL_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X28, 0X90 # subb %dl, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DL_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X28, 0X93 # subb %dl, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DL_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X28, 0X91 # subb %dl, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DL_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X28, 0X92 # subb %dl, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DL_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X28, 0X97 # subb %dl, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DL_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X28, 0X96 # subb %dl, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DL_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X28, 0X95 # subb %dl, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DL_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X28, 0X94, 0X24 # subb %dl, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DL_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X28, 0X90 # subb %dl, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DL_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X28, 0X91 # subb %dl, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DL_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X28, 0X92 # subb %dl, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DL_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X28, 0X93 # subb %dl, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DL_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X28, 0X94, 0X24 # subb %dl, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DL_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X28, 0X95 # subb %dl, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DL_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X28, 0X96 # subb %dl, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DL_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X28, 0X97 # subb %dl, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X28, 0X90 # subb %dl, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X28, 0X93 # subb %dl, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X28, 0X91 # subb %dl, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X28, 0X92 # subb %dl, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X28, 0X97 # subb %dl, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X28, 0X96 # subb %dl, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X28, 0X95 # subb %dl, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X28, 0X94, 0X24 # subb %dl, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SUB_DIL_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X28, 0XB8 # subb %dil, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DIL_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X28, 0XBB # subb %dil, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DIL_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X28, 0XB9 # subb %dil, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DIL_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X28, 0XBA # subb %dil, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DIL_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X28, 0XBF # subb %dil, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DIL_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X28, 0XBE # subb %dil, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DIL_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X28, 0XBD # subb %dil, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DIL_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X28, 0XBC, 0X24 # subb %dil, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DIL_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X28, 0XB8 # subb %dil, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DIL_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X28, 0XB9 # subb %dil, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DIL_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X28, 0XBA # subb %dil, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DIL_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X28, 0XBB # subb %dil, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DIL_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X28, 0XBC, 0X24 # subb %dil, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DIL_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X28, 0XBD # subb %dil, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DIL_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X28, 0XBE # subb %dil, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DIL_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X28, 0XBF # subb %dil, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DIL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X28, 0XB8 # subb %dil, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DIL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X28, 0XBB # subb %dil, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DIL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X28, 0XB9 # subb %dil, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DIL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X28, 0XBA # subb %dil, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DIL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X28, 0XBF # subb %dil, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DIL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X28, 0XBE # subb %dil, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DIL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X28, 0XBD # subb %dil, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DIL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X28, 0XBC, 0X24 # subb %dil, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SUB_SIL_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X28, 0XB0 # subb %sil, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SIL_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X28, 0XB3 # subb %sil, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SIL_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X28, 0XB1 # subb %sil, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SIL_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X28, 0XB2 # subb %sil, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SIL_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X28, 0XB7 # subb %sil, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SIL_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X28, 0XB6 # subb %sil, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SIL_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X28, 0XB5 # subb %sil, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SIL_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X28, 0XB4, 0X24 # subb %sil, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SIL_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X28, 0XB0 # subb %sil, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SIL_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X28, 0XB1 # subb %sil, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SIL_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X28, 0XB2 # subb %sil, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SIL_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X28, 0XB3 # subb %sil, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SIL_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X28, 0XB4, 0X24 # subb %sil, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SIL_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X28, 0XB5 # subb %sil, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SIL_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X28, 0XB6 # subb %sil, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SIL_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X28, 0XB7 # subb %sil, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SIL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X28, 0XB0 # subb %sil, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SIL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X28, 0XB3 # subb %sil, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SIL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X28, 0XB1 # subb %sil, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SIL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X28, 0XB2 # subb %sil, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SIL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X28, 0XB7 # subb %sil, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SIL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X28, 0XB6 # subb %sil, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SIL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X28, 0XB5 # subb %sil, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SIL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X28, 0XB4, 0X24 # subb %sil, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SUB_BPL_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X28, 0XA8 # subb %bpl, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BPL_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X28, 0XAB # subb %bpl, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BPL_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X28, 0XA9 # subb %bpl, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BPL_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X28, 0XAA # subb %bpl, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BPL_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X28, 0XAF # subb %bpl, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BPL_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X28, 0XAE # subb %bpl, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BPL_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X28, 0XAD # subb %bpl, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BPL_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X28, 0XAC, 0X24 # subb %bpl, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BPL_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X28, 0XA8 # subb %bpl, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BPL_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X28, 0XA9 # subb %bpl, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BPL_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X28, 0XAA # subb %bpl, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BPL_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X28, 0XAB # subb %bpl, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BPL_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X28, 0XAC, 0X24 # subb %bpl, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BPL_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X28, 0XAD # subb %bpl, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BPL_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X28, 0XAE # subb %bpl, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BPL_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X28, 0XAF # subb %bpl, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BPL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X28, 0XA8 # subb %bpl, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BPL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X28, 0XAB # subb %bpl, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BPL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X28, 0XA9 # subb %bpl, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BPL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X28, 0XAA # subb %bpl, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BPL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X28, 0XAF # subb %bpl, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BPL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X28, 0XAE # subb %bpl, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BPL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X28, 0XAD # subb %bpl, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BPL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X28, 0XAC, 0X24 # subb %bpl, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SUB_SPL_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X28, 0XA0 # subb %spl, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SPL_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X28, 0XA3 # subb %spl, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SPL_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X28, 0XA1 # subb %spl, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SPL_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X28, 0XA2 # subb %spl, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SPL_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X28, 0XA7 # subb %spl, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SPL_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X28, 0XA6 # subb %spl, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SPL_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X28, 0XA5 # subb %spl, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SPL_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X28, 0XA4, 0X24 # subb %spl, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SPL_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X28, 0XA0 # subb %spl, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SPL_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X28, 0XA1 # subb %spl, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SPL_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X28, 0XA2 # subb %spl, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SPL_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X28, 0XA3 # subb %spl, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SPL_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X28, 0XA4, 0X24 # subb %spl, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SPL_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X28, 0XA5 # subb %spl, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SPL_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X28, 0XA6 # subb %spl, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SPL_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X28, 0XA7 # subb %spl, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SPL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X28, 0XA0 # subb %spl, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SPL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X28, 0XA3 # subb %spl, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SPL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X28, 0XA1 # subb %spl, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SPL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X28, 0XA2 # subb %spl, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SPL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X28, 0XA7 # subb %spl, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SPL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X28, 0XA6 # subb %spl, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SPL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X28, 0XA5 # subb %spl, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SPL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X28, 0XA4, 0X24 # subb %spl, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SUB_R8B_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X28, 0X80 # subb %r8b, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8B_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X28, 0X83 # subb %r8b, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8B_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X28, 0X81 # subb %r8b, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8B_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X28, 0X82 # subb %r8b, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8B_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X28, 0X87 # subb %r8b, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8B_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X28, 0X86 # subb %r8b, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8B_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X28, 0X85 # subb %r8b, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8B_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X28, 0X84, 0X24 # subb %r8b, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8B_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X28, 0X80 # subb %r8b, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8B_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X28, 0X81 # subb %r8b, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8B_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X28, 0X82 # subb %r8b, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8B_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X28, 0X83 # subb %r8b, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8B_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X28, 0X84, 0X24 # subb %r8b, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8B_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X28, 0X85 # subb %r8b, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8B_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X28, 0X86 # subb %r8b, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8B_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X28, 0X87 # subb %r8b, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8B_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X28, 0X80 # subb %r8b, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8B_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X28, 0X83 # subb %r8b, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8B_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X28, 0X81 # subb %r8b, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8B_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X28, 0X82 # subb %r8b, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8B_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X28, 0X87 # subb %r8b, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8B_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X28, 0X86 # subb %r8b, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8B_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X28, 0X85 # subb %r8b, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8B_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X28, 0X84, 0X24 # subb %r8b, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SUB_R9B_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X28, 0X88 # subb %r9b, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9B_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X28, 0X8B # subb %r9b, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9B_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X28, 0X89 # subb %r9b, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9B_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X28, 0X8A # subb %r9b, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9B_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X28, 0X8F # subb %r9b, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9B_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X28, 0X8E # subb %r9b, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9B_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X28, 0X8D # subb %r9b, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9B_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X28, 0X8C, 0X24 # subb %r9b, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9B_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X28, 0X88 # subb %r9b, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9B_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X28, 0X89 # subb %r9b, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9B_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X28, 0X8A # subb %r9b, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9B_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X28, 0X8B # subb %r9b, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9B_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X28, 0X8C, 0X24 # subb %r9b, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9B_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X28, 0X8D # subb %r9b, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9B_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X28, 0X8E # subb %r9b, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9B_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X28, 0X8F # subb %r9b, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9B_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X28, 0X88 # subb %r9b, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9B_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X28, 0X8B # subb %r9b, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9B_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X28, 0X89 # subb %r9b, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9B_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X28, 0X8A # subb %r9b, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9B_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X28, 0X8F # subb %r9b, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9B_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X28, 0X8E # subb %r9b, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9B_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X28, 0X8D # subb %r9b, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9B_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X28, 0X8C, 0X24 # subb %r9b, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SUB_R10B_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X28, 0X90 # subb %r10b, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10B_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X28, 0X93 # subb %r10b, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10B_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X28, 0X91 # subb %r10b, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10B_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X28, 0X92 # subb %r10b, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10B_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X28, 0X97 # subb %r10b, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10B_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X28, 0X96 # subb %r10b, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10B_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X28, 0X95 # subb %r10b, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10B_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X28, 0X94, 0X24 # subb %r10b, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10B_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X28, 0X90 # subb %r10b, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10B_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X28, 0X91 # subb %r10b, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10B_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X28, 0X92 # subb %r10b, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10B_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X28, 0X93 # subb %r10b, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10B_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X28, 0X94, 0X24 # subb %r10b, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10B_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X28, 0X95 # subb %r10b, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10B_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X28, 0X96 # subb %r10b, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10B_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X28, 0X97 # subb %r10b, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10B_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X28, 0X90 # subb %r10b, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10B_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X28, 0X93 # subb %r10b, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10B_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X28, 0X91 # subb %r10b, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10B_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X28, 0X92 # subb %r10b, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10B_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X28, 0X97 # subb %r10b, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10B_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X28, 0X96 # subb %r10b, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10B_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X28, 0X95 # subb %r10b, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10B_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X28, 0X94, 0X24 # subb %r10b, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SUB_R11B_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X28, 0X98 # subb %r11b, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11B_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X28, 0X9B # subb %r11b, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11B_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X28, 0X99 # subb %r11b, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11B_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X28, 0X9A # subb %r11b, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11B_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X28, 0X9F # subb %r11b, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11B_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X28, 0X9E # subb %r11b, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11B_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X28, 0X9D # subb %r11b, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11B_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X28, 0X9C, 0X24 # subb %r11b, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11B_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X28, 0X98 # subb %r11b, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11B_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X28, 0X99 # subb %r11b, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11B_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X28, 0X9A # subb %r11b, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11B_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X28, 0X9B # subb %r11b, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11B_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X28, 0X9C, 0X24 # subb %r11b, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11B_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X28, 0X9D # subb %r11b, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11B_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X28, 0X9E # subb %r11b, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11B_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X28, 0X9F # subb %r11b, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11B_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X28, 0X98 # subb %r11b, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11B_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X28, 0X9B # subb %r11b, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11B_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X28, 0X99 # subb %r11b, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11B_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X28, 0X9A # subb %r11b, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11B_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X28, 0X9F # subb %r11b, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11B_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X28, 0X9E # subb %r11b, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11B_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X28, 0X9D # subb %r11b, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11B_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X28, 0X9C, 0X24 # subb %r11b, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SUB_R12B_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X28, 0XA0 # subb %r12b, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12B_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X28, 0XA3 # subb %r12b, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12B_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X28, 0XA1 # subb %r12b, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12B_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X28, 0XA2 # subb %r12b, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12B_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X28, 0XA7 # subb %r12b, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12B_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X28, 0XA6 # subb %r12b, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12B_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X28, 0XA5 # subb %r12b, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12B_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X28, 0XA4, 0X24 # subb %r12b, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12B_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X28, 0XA0 # subb %r12b, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12B_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X28, 0XA1 # subb %r12b, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12B_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X28, 0XA2 # subb %r12b, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12B_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X28, 0XA3 # subb %r12b, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12B_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X28, 0XA4, 0X24 # subb %r12b, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12B_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X28, 0XA5 # subb %r12b, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12B_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X28, 0XA6 # subb %r12b, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12B_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X28, 0XA7 # subb %r12b, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12B_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X28, 0XA0 # subb %r12b, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12B_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X28, 0XA3 # subb %r12b, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12B_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X28, 0XA1 # subb %r12b, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12B_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X28, 0XA2 # subb %r12b, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12B_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X28, 0XA7 # subb %r12b, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12B_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X28, 0XA6 # subb %r12b, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12B_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X28, 0XA5 # subb %r12b, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12B_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X28, 0XA4, 0X24 # subb %r12b, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SUB_R13B_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X28, 0XA8 # subb %r13b, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13B_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X28, 0XAB # subb %r13b, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13B_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X28, 0XA9 # subb %r13b, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13B_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X28, 0XAA # subb %r13b, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13B_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X28, 0XAF # subb %r13b, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13B_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X28, 0XAE # subb %r13b, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13B_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X28, 0XAD # subb %r13b, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13B_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X28, 0XAC, 0X24 # subb %r13b, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13B_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X28, 0XA8 # subb %r13b, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13B_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X28, 0XA9 # subb %r13b, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13B_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X28, 0XAA # subb %r13b, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13B_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X28, 0XAB # subb %r13b, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13B_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X28, 0XAC, 0X24 # subb %r13b, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13B_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X28, 0XAD # subb %r13b, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13B_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X28, 0XAE # subb %r13b, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13B_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X28, 0XAF # subb %r13b, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13B_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X28, 0XA8 # subb %r13b, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13B_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X28, 0XAB # subb %r13b, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13B_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X28, 0XA9 # subb %r13b, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13B_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X28, 0XAA # subb %r13b, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13B_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X28, 0XAF # subb %r13b, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13B_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X28, 0XAE # subb %r13b, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13B_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X28, 0XAD # subb %r13b, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13B_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X28, 0XAC, 0X24 # subb %r13b, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SUB_R14B_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X28, 0XB0 # subb %r14b, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14B_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X28, 0XB3 # subb %r14b, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14B_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X28, 0XB1 # subb %r14b, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14B_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X28, 0XB2 # subb %r14b, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14B_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X28, 0XB7 # subb %r14b, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14B_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X28, 0XB6 # subb %r14b, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14B_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X28, 0XB5 # subb %r14b, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14B_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X28, 0XB4, 0X24 # subb %r14b, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14B_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X28, 0XB0 # subb %r14b, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14B_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X28, 0XB1 # subb %r14b, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14B_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X28, 0XB2 # subb %r14b, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14B_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X28, 0XB3 # subb %r14b, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14B_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X28, 0XB4, 0X24 # subb %r14b, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14B_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X28, 0XB5 # subb %r14b, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14B_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X28, 0XB6 # subb %r14b, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14B_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X28, 0XB7 # subb %r14b, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14B_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X28, 0XB0 # subb %r14b, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14B_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X28, 0XB3 # subb %r14b, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14B_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X28, 0XB1 # subb %r14b, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14B_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X28, 0XB2 # subb %r14b, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14B_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X28, 0XB7 # subb %r14b, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14B_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X28, 0XB6 # subb %r14b, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14B_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X28, 0XB5 # subb %r14b, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14B_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X28, 0XB4, 0X24 # subb %r14b, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SUB_R15B_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X28, 0XB8 # subb %r15b, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15B_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X28, 0XBB # subb %r15b, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15B_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X28, 0XB9 # subb %r15b, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15B_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X28, 0XBA # subb %r15b, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15B_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X28, 0XBF # subb %r15b, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15B_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X28, 0XBE # subb %r15b, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15B_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X28, 0XBD # subb %r15b, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15B_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X28, 0XBC, 0X24 # subb %r15b, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15B_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X28, 0XB8 # subb %r15b, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15B_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X28, 0XB9 # subb %r15b, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15B_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X28, 0XBA # subb %r15b, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15B_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X28, 0XBB # subb %r15b, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15B_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X28, 0XBC, 0X24 # subb %r15b, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15B_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X28, 0XBD # subb %r15b, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15B_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X28, 0XBE # subb %r15b, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15B_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X28, 0XBF # subb %r15b, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15B_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X28, 0XB8 # subb %r15b, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15B_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X28, 0XBB # subb %r15b, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15B_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X28, 0XB9 # subb %r15b, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15B_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X28, 0XBA # subb %r15b, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15B_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X28, 0XBF # subb %r15b, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15B_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X28, 0XBE # subb %r15b, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15B_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X28, 0XBD # subb %r15b, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15B_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X28, 0XBC, 0X24 # subb %r15b, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#endif /* __SYSTEM_64_BIT__ */
/* ************************** [^] 8-BIT MEMORY [^] ************************** */

/* ************************* [v] 16-BIT MEMORY [v] ************************** */
#ifdef __SYSTEM_16_BIT__
#define SUB_AX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X2B, 0X06 # subw (" _(VALUE) "), %ax")\
	CMT_ASM(".short " _(VALUE))
#define SUB_BX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X2B, 0X1E # subw (" _(VALUE) "), %bx")\
	CMT_ASM(".short " _(VALUE))
#define SUB_CX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X2B, 0X0E # subw (" _(VALUE) "), %cx")\
	CMT_ASM(".short " _(VALUE))
#define SUB_DX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X2B, 0X16 # subw (" _(VALUE) "), %dx")\
	CMT_ASM(".short " _(VALUE))
#define SUB_DI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X2B, 0X3E # subw (" _(VALUE) "), %di")\
	CMT_ASM(".short " _(VALUE))
#define SUB_SI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X2B, 0X36 # subw (" _(VALUE) "), %si")\
	CMT_ASM(".short " _(VALUE))
#define SUB_BP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X2B, 0X2E # subw (" _(VALUE) "), %bp")\
	CMT_ASM(".short " _(VALUE))
#define SUB_SP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X2B, 0X26 # subw (" _(VALUE) "), %sp")\
	CMT_ASM(".short " _(VALUE))

#define SUB_AX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X29, 0X06 # subw %ax, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define SUB_BX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X29, 0X1E # subw %bx, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define SUB_CX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X29, 0X0E # subw %cx, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define SUB_DX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X29, 0X16 # subw %dx, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define SUB_DI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X29, 0X3E # subw %di, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define SUB_SI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X29, 0X36 # subw %si, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define SUB_BP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X29, 0X2E # subw %bp, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define SUB_SP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X29, 0X26 # subw %sp, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))

#define SUB_AX_FROM_PTR_BX CMT_ASM(".byte 0X2B, 0X07 # subw (%bx), %ax")
#define SUB_AX_FROM_PTR_BP CMT_ASM(".byte 0X2B, 0X46, 0X00 # subw (%bp), %ax")
#define SUB_AX_FROM_PTR_SI CMT_ASM(".byte 0X2B, 0X04 # subw (%si), %ax")
#define SUB_AX_FROM_PTR_DI CMT_ASM(".byte 0X2B, 0X05 # subw (%di), %ax")

#define SUB_BX_FROM_PTR_BX CMT_ASM(".byte 0X2B, 0X1F # subw (%bx), %bx")
#define SUB_BX_FROM_PTR_BP CMT_ASM(".byte 0X2B, 0X5E, 0X00 # subw (%bp), %bx")
#define SUB_BX_FROM_PTR_SI CMT_ASM(".byte 0X2B, 0X1C # subw (%si), %bx")
#define SUB_BX_FROM_PTR_DI CMT_ASM(".byte 0X2B, 0X1D # subw (%di), %bx")

#define SUB_CX_FROM_PTR_BX CMT_ASM(".byte 0X2B, 0X0F # subw (%bx), %cx")
#define SUB_CX_FROM_PTR_BP CMT_ASM(".byte 0X2B, 0X4E, 0X00 # subw (%bp), %cx")
#define SUB_CX_FROM_PTR_SI CMT_ASM(".byte 0X2B, 0X0C # subw (%si), %cx")
#define SUB_CX_FROM_PTR_DI CMT_ASM(".byte 0X2B, 0X0D # subw (%di), %cx")

#define SUB_DX_FROM_PTR_BX CMT_ASM(".byte 0X2B, 0X17 # subw (%bx), %dx")
#define SUB_DX_FROM_PTR_BP CMT_ASM(".byte 0X2B, 0X56, 0X00 # subw (%bp), %dx")
#define SUB_DX_FROM_PTR_SI CMT_ASM(".byte 0X2B, 0X14 # subw (%si), %dx")
#define SUB_DX_FROM_PTR_DI CMT_ASM(".byte 0X2B, 0X15 # subw (%di), %dx")

#define SUB_DI_FROM_PTR_BX CMT_ASM(".byte 0X2B, 0X3F # subw (%bx), %di")
#define SUB_DI_FROM_PTR_BP CMT_ASM(".byte 0X2B, 0X7E, 0X00 # subw (%bp), %di")
#define SUB_DI_FROM_PTR_SI CMT_ASM(".byte 0X2B, 0X3C # subw (%si), %di")
#define SUB_DI_FROM_PTR_DI CMT_ASM(".byte 0X2B, 0X3D # subw (%di), %di")

#define SUB_SI_FROM_PTR_BX CMT_ASM(".byte 0X2B, 0X37 # subw (%bx), %si")
#define SUB_SI_FROM_PTR_BP CMT_ASM(".byte 0X2B, 0X76, 0X00 # subw (%bp), %si")
#define SUB_SI_FROM_PTR_SI CMT_ASM(".byte 0X2B, 0X34 # subw (%si), %si")
#define SUB_SI_FROM_PTR_DI CMT_ASM(".byte 0X2B, 0X35 # subw (%di), %si")

#define SUB_BP_FROM_PTR_BX CMT_ASM(".byte 0X2B, 0X2F # subw (%bx), %bp")
#define SUB_BP_FROM_PTR_BP CMT_ASM(".byte 0X2B, 0X6E, 0X00 # subw (%bp), %bp")
#define SUB_BP_FROM_PTR_SI CMT_ASM(".byte 0X2B, 0X2C # subw (%si), %bp")
#define SUB_BP_FROM_PTR_DI CMT_ASM(".byte 0X2B, 0X2D # subw (%di), %bp")

#define SUB_SP_FROM_PTR_BX CMT_ASM(".byte 0X2B, 0X27 # subw (%bx), %sp")
#define SUB_SP_FROM_PTR_BP CMT_ASM(".byte 0X2B, 0X66, 0X00 # subw (%bp), %sp")
#define SUB_SP_FROM_PTR_SI CMT_ASM(".byte 0X2B, 0X24 # subw (%si), %sp")
#define SUB_SP_FROM_PTR_DI CMT_ASM(".byte 0X2B, 0X25 # subw (%di), %sp")

#define SUB_AX_TO_PTR_BX CMT_ASM(".byte 0X29, 0X07 # subw %ax, (%bx)")
#define SUB_AX_TO_PTR_BP CMT_ASM(".byte 0X29, 0X46, 0X00 # subw %ax, (%bp)")
#define SUB_AX_TO_PTR_SI CMT_ASM(".byte 0X29, 0X04 # subw %ax, (%si)")
#define SUB_AX_TO_PTR_DI CMT_ASM(".byte 0X29, 0X05 # subw %ax, (%di)")

#define SUB_BX_TO_PTR_BX CMT_ASM(".byte 0X29, 0X1F # subw %bx, (%bx)")
#define SUB_BX_TO_PTR_BP CMT_ASM(".byte 0X29, 0X5E, 0X00 # subw %bx, (%bp)")
#define SUB_BX_TO_PTR_SI CMT_ASM(".byte 0X29, 0X1C # subw %bx, (%si)")
#define SUB_BX_TO_PTR_DI CMT_ASM(".byte 0X29, 0X1D # subw %bx, (%di)")

#define SUB_CX_TO_PTR_BX CMT_ASM(".byte 0X29, 0X0F # subw %cx, (%bx)")
#define SUB_CX_TO_PTR_BP CMT_ASM(".byte 0X29, 0X4E, 0X00 # subw %cx, (%bp)")
#define SUB_CX_TO_PTR_SI CMT_ASM(".byte 0X29, 0X0C # subw %cx, (%si)")
#define SUB_CX_TO_PTR_DI CMT_ASM(".byte 0X29, 0X0D # subw %cx, (%di)")

#define SUB_DX_TO_PTR_BX CMT_ASM(".byte 0X29, 0X17 # subw %dx, (%bx)")
#define SUB_DX_TO_PTR_BP CMT_ASM(".byte 0X29, 0X56, 0X00 # subw %dx, (%bp)")
#define SUB_DX_TO_PTR_SI CMT_ASM(".byte 0X29, 0X14 # subw %dx, (%si)")
#define SUB_DX_TO_PTR_DI CMT_ASM(".byte 0X29, 0X15 # subw %dx, (%di)")

#define SUB_DI_TO_PTR_BX CMT_ASM(".byte 0X29, 0X3F # subw %di, (%bx)")
#define SUB_DI_TO_PTR_BP CMT_ASM(".byte 0X29, 0X7E, 0X00 # subw %di, (%bp)")
#define SUB_DI_TO_PTR_SI CMT_ASM(".byte 0X29, 0X3C # subw %di, (%si)")
#define SUB_DI_TO_PTR_DI CMT_ASM(".byte 0X29, 0X3D # subw %di, (%di)")

#define SUB_SI_TO_PTR_BX CMT_ASM(".byte 0X29, 0X37 # subw %si, (%bx)")
#define SUB_SI_TO_PTR_BP CMT_ASM(".byte 0X29, 0X76, 0X00 # subw %si, (%bp)")
#define SUB_SI_TO_PTR_SI CMT_ASM(".byte 0X29, 0X34 # subw %si, (%si)")
#define SUB_SI_TO_PTR_DI CMT_ASM(".byte 0X29, 0X35 # subw %si, (%di)")

#define SUB_BP_TO_PTR_BX CMT_ASM(".byte 0X29, 0X2F # subw %bp, (%bx)")
#define SUB_BP_TO_PTR_BP CMT_ASM(".byte 0X29, 0X6E, 0X00 # subw %bp, (%bp)")
#define SUB_BP_TO_PTR_SI CMT_ASM(".byte 0X29, 0X2C # subw %bp, (%si)")
#define SUB_BP_TO_PTR_DI CMT_ASM(".byte 0X29, 0X2D # subw %bp, (%di)")

#define SUB_SP_TO_PTR_BX CMT_ASM(".byte 0X29, 0X27 # subw %sp, (%bx)")
#define SUB_SP_TO_PTR_BP CMT_ASM(".byte 0X29, 0X66, 0X00 # subw %sp, (%bp)")
#define SUB_SP_TO_PTR_SI CMT_ASM(".byte 0X29, 0X24 # subw %sp, (%si)")
#define SUB_SP_TO_PTR_DI CMT_ASM(".byte 0X29, 0X25 # subw %sp, (%di)")

#define SUB_AX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X2B, 0X87 # subw " _(VALUE) "(%bx), %ax")\
	CMT_ASM(".short " _(VALUE))
#define SUB_AX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X2B, 0X86 # subw " _(VALUE) "(%bp), %ax")\
	CMT_ASM(".short " _(VALUE))
#define SUB_AX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X2B, 0X84 # subw " _(VALUE) "(%si), %ax")\
	CMT_ASM(".short " _(VALUE))
#define SUB_AX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X2B, 0X85 # subw " _(VALUE) "(%di), %ax")\
	CMT_ASM(".short " _(VALUE))

#define SUB_BX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X2B, 0X9F # subw " _(VALUE) "(%bx), %bx")\
	CMT_ASM(".short " _(VALUE))
#define SUB_BX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X2B, 0X9E # subw " _(VALUE) "(%bp), %bx")\
	CMT_ASM(".short " _(VALUE))
#define SUB_BX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X2B, 0X9C # subw " _(VALUE) "(%si), %bx")\
	CMT_ASM(".short " _(VALUE))
#define SUB_BX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X2B, 0X9D # subw " _(VALUE) "(%di), %bx")\
	CMT_ASM(".short " _(VALUE))

#define SUB_CX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X2B, 0X8F # subw " _(VALUE) "(%bx), %cx")\
	CMT_ASM(".short " _(VALUE))
#define SUB_CX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X2B, 0X8E # subw " _(VALUE) "(%bp), %cx")\
	CMT_ASM(".short " _(VALUE))
#define SUB_CX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X2B, 0X8C # subw " _(VALUE) "(%si), %cx")\
	CMT_ASM(".short " _(VALUE))
#define SUB_CX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X2B, 0X8D # subw " _(VALUE) "(%di), %cx")\
	CMT_ASM(".short " _(VALUE))

#define SUB_DX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X2B, 0X97 # subw " _(VALUE) "(%bx), %dx")\
	CMT_ASM(".short " _(VALUE))
#define SUB_DX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X2B, 0X96 # subw " _(VALUE) "(%bp), %dx")\
	CMT_ASM(".short " _(VALUE))
#define SUB_DX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X2B, 0X94 # subw " _(VALUE) "(%si), %dx")\
	CMT_ASM(".short " _(VALUE))
#define SUB_DX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X2B, 0X95 # subw " _(VALUE) "(%di), %dx")\
	CMT_ASM(".short " _(VALUE))

#define SUB_DI_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X2B, 0XBF # subw " _(VALUE) "(%bx), %di")\
	CMT_ASM(".short " _(VALUE))
#define SUB_DI_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X2B, 0XBE # subw " _(VALUE) "(%bp), %di")\
	CMT_ASM(".short " _(VALUE))
#define SUB_DI_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X2B, 0XBC # subw " _(VALUE) "(%si), %di")\
	CMT_ASM(".short " _(VALUE))
#define SUB_DI_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X2B, 0XBD # subw " _(VALUE) "(%di), %di")\
	CMT_ASM(".short " _(VALUE))

#define SUB_SI_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X2B, 0XB7 # subw " _(VALUE) "(%bx), %si")\
	CMT_ASM(".short " _(VALUE))
#define SUB_SI_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X2B, 0XB6 # subw " _(VALUE) "(%bp), %si")\
	CMT_ASM(".short " _(VALUE))
#define SUB_SI_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X2B, 0XB4 # subw " _(VALUE) "(%si), %si")\
	CMT_ASM(".short " _(VALUE))
#define SUB_SI_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X2B, 0XB5 # subw " _(VALUE) "(%di), %si")\
	CMT_ASM(".short " _(VALUE))

#define SUB_BP_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X2B, 0XAF # subw " _(VALUE) "(%bx), %bp")\
	CMT_ASM(".short " _(VALUE))
#define SUB_BP_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X2B, 0XAE # subw " _(VALUE) "(%bp), %bp")\
	CMT_ASM(".short " _(VALUE))
#define SUB_BP_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X2B, 0XAC # subw " _(VALUE) "(%si), %bp")\
	CMT_ASM(".short " _(VALUE))
#define SUB_BP_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X2B, 0XAD # subw " _(VALUE) "(%di), %bp")\
	CMT_ASM(".short " _(VALUE))

#define SUB_SP_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X2B, 0XA7 # subw " _(VALUE) "(%bx), %sp")\
	CMT_ASM(".short " _(VALUE))
#define SUB_SP_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X2B, 0XA6 # subw " _(VALUE) "(%bp), %sp")\
	CMT_ASM(".short " _(VALUE))
#define SUB_SP_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X2B, 0XA4 # subw " _(VALUE) "(%si), %sp")\
	CMT_ASM(".short " _(VALUE))
#define SUB_SP_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X2B, 0XA5 # subw " _(VALUE) "(%di), %sp")\
	CMT_ASM(".short " _(VALUE))

#define SUB_AX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X29, 0X87 # subw %ax, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define SUB_AX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X29, 0X86 # subw %ax, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define SUB_AX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X29, 0X84 # subw %ax, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define SUB_AX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X29, 0X85 # subw %ax, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define SUB_BX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X29, 0X9F # subw %bx, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define SUB_BX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X29, 0X9E # subw %bx, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define SUB_BX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X29, 0X9C # subw %bx, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define SUB_BX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X29, 0X9D # subw %bx, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define SUB_CX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X29, 0X8F # subw %cx, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define SUB_CX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X29, 0X8E # subw %cx, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define SUB_CX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X29, 0X8C # subw %cx, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define SUB_CX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X29, 0X8D # subw %cx, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define SUB_DX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X29, 0X97 # subw %dx, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define SUB_DX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X29, 0X96 # subw %dx, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define SUB_DX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X29, 0X94 # subw %dx, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define SUB_DX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X29, 0X95 # subw %dx, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define SUB_DI_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X29, 0XBF # subw %di, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define SUB_DI_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X29, 0XBE # subw %di, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define SUB_DI_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X29, 0XBC # subw %di, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define SUB_DI_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X29, 0XBD # subw %di, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define SUB_SI_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X29, 0XB7 # subw %si, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define SUB_SI_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X29, 0XB6 # subw %si, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define SUB_SI_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X29, 0XB4 # subw %si, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define SUB_SI_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X29, 0XB5 # subw %si, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define SUB_BP_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X29, 0XAF # subw %bp, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define SUB_BP_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X29, 0XAE # subw %bp, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define SUB_BP_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X29, 0XAC # subw %bp, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define SUB_BP_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X29, 0XAD # subw %bp, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define SUB_SP_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X29, 0XA7 # subw %sp, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define SUB_SP_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X29, 0XA6 # subw %sp, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define SUB_SP_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X29, 0XA4 # subw %sp, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define SUB_SP_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X29, 0XA5 # subw %sp, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))
#endif /* __SYSTEM_16_BIT__ */

#ifdef __SYSTEM_32_BIT__
#define SUB_AX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0X05 # subw (" _(VALUE) "), %ax")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0X1D # subw (" _(VALUE) "), %bx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0X0D # subw (" _(VALUE) "), %cx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0X15 # subw (" _(VALUE) "), %dx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0X3D # subw (" _(VALUE) "), %di")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0X35 # subw (" _(VALUE) "), %si")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0X2D # subw (" _(VALUE) "), %bp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0X25 # subw (" _(VALUE) "), %sp")\
	CMT_ASM(".long " _(VALUE))

#define SUB_AX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0X05 # subw %ax, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0X1D # subw %bx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0X0D # subw %cx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0X15 # subw %dx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0X3D # subw %di, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0X35 # subw %si, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0X2D # subw %bp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0X25 # subw %sp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))

#define SUB_AX_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X2B, 0X00 # subw (%eax), %ax")
#define SUB_AX_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X2B, 0X03 # subw (%ebx), %ax")
#define SUB_AX_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X2B, 0X01 # subw (%ecx), %ax")
#define SUB_AX_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X2B, 0X02 # subw (%edx), %ax")
#define SUB_AX_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X2B, 0X07 # subw (%edi), %ax")
#define SUB_AX_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X2B, 0X06 # subw (%esi), %ax")
#define SUB_AX_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X2B, 0X45, 0X00 # subw (%ebp), %ax")
#define SUB_AX_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X2B, 0X04, 0X24 # subw (%esp), %ax")
#define SUB_AX_FROM_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X07 # subw (%bx), %ax")
#define SUB_AX_FROM_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X46, 0X00 # subw (%bp), %ax")
#define SUB_AX_FROM_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X04 # subw (%si), %ax")
#define SUB_AX_FROM_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X05 # subw (%di), %ax")

#define SUB_BX_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X2B, 0X18 # subw (%eax), %bx")
#define SUB_BX_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X2B, 0X1B # subw (%ebx), %bx")
#define SUB_BX_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X2B, 0X19 # subw (%ecx), %bx")
#define SUB_BX_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X2B, 0X1A # subw (%edx), %bx")
#define SUB_BX_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X2B, 0X1F # subw (%edi), %bx")
#define SUB_BX_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X2B, 0X1E # subw (%esi), %bx")
#define SUB_BX_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X2B, 0X5D, 0X00 # subw (%ebp), %bx")
#define SUB_BX_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X2B, 0X1C, 0X24 # subw (%esp), %bx")
#define SUB_BX_FROM_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X1F # subw (%bx), %bx")
#define SUB_BX_FROM_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X5E, 0X00 # subw (%bp), %bx")
#define SUB_BX_FROM_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X1C # subw (%si), %bx")
#define SUB_BX_FROM_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X1D # subw (%di), %bx")

#define SUB_CX_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X2B, 0X08 # subw (%eax), %cx")
#define SUB_CX_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X2B, 0X0B # subw (%ebx), %cx")
#define SUB_CX_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X2B, 0X09 # subw (%ecx), %cx")
#define SUB_CX_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X2B, 0X0A # subw (%edx), %cx")
#define SUB_CX_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X2B, 0X0F # subw (%edi), %cx")
#define SUB_CX_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X2B, 0X0E # subw (%esi), %cx")
#define SUB_CX_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X2B, 0X4D, 0X00 # subw (%ebp), %cx")
#define SUB_CX_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X2B, 0X0C, 0X24 # subw (%esp), %cx")
#define SUB_CX_FROM_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X0F # subw (%bx), %cx")
#define SUB_CX_FROM_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X4E, 0X00 # subw (%bp), %cx")
#define SUB_CX_FROM_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X0C # subw (%si), %cx")
#define SUB_CX_FROM_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X0D # subw (%di), %cx")

#define SUB_DX_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X2B, 0X10 # subw (%eax), %dx")
#define SUB_DX_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X2B, 0X13 # subw (%ebx), %dx")
#define SUB_DX_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X2B, 0X11 # subw (%ecx), %dx")
#define SUB_DX_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X2B, 0X12 # subw (%edx), %dx")
#define SUB_DX_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X2B, 0X17 # subw (%edi), %dx")
#define SUB_DX_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X2B, 0X16 # subw (%esi), %dx")
#define SUB_DX_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X2B, 0X55, 0X00 # subw (%ebp), %dx")
#define SUB_DX_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X2B, 0X14, 0X24 # subw (%esp), %dx")
#define SUB_DX_FROM_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X17 # subw (%bx), %dx")
#define SUB_DX_FROM_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X56, 0X00 # subw (%bp), %dx")
#define SUB_DX_FROM_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X14 # subw (%si), %dx")
#define SUB_DX_FROM_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X15 # subw (%di), %dx")

#define SUB_DI_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X2B, 0X38 # subw (%eax), %di")
#define SUB_DI_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X2B, 0X3B # subw (%ebx), %di")
#define SUB_DI_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X2B, 0X39 # subw (%ecx), %di")
#define SUB_DI_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X2B, 0X3A # subw (%edx), %di")
#define SUB_DI_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X2B, 0X3F # subw (%edi), %di")
#define SUB_DI_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X2B, 0X3E # subw (%esi), %di")
#define SUB_DI_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X2B, 0X7D, 0X00 # subw (%ebp), %di")
#define SUB_DI_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X2B, 0X3C, 0X24 # subw (%esp), %di")
#define SUB_DI_FROM_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X3F # subw (%bx), %di")
#define SUB_DI_FROM_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X7E, 0X00 # subw (%bp), %di")
#define SUB_DI_FROM_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X3C # subw (%si), %di")
#define SUB_DI_FROM_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X3D # subw (%di), %di")

#define SUB_SI_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X2B, 0X30 # subw (%eax), %si")
#define SUB_SI_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X2B, 0X33 # subw (%ebx), %si")
#define SUB_SI_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X2B, 0X31 # subw (%ecx), %si")
#define SUB_SI_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X2B, 0X32 # subw (%edx), %si")
#define SUB_SI_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X2B, 0X37 # subw (%edi), %si")
#define SUB_SI_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X2B, 0X36 # subw (%esi), %si")
#define SUB_SI_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X2B, 0X75, 0X00 # subw (%ebp), %si")
#define SUB_SI_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X2B, 0X34, 0X24 # subw (%esp), %si")
#define SUB_SI_FROM_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X37 # subw (%bx), %si")
#define SUB_SI_FROM_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X76, 0X00 # subw (%bp), %si")
#define SUB_SI_FROM_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X34 # subw (%si), %si")
#define SUB_SI_FROM_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X35 # subw (%di), %si")

#define SUB_BP_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X2B, 0X28 # subw (%eax), %bp")
#define SUB_BP_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X2B, 0X2B # subw (%ebx), %bp")
#define SUB_BP_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X2B, 0X29 # subw (%ecx), %bp")
#define SUB_BP_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X2B, 0X2A # subw (%edx), %bp")
#define SUB_BP_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X2B, 0X2F # subw (%edi), %bp")
#define SUB_BP_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X2B, 0X2E # subw (%esi), %bp")
#define SUB_BP_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X2B, 0X6D, 0X00 # subw (%ebp), %bp")
#define SUB_BP_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X2B, 0X2C, 0X24 # subw (%esp), %bp")
#define SUB_BP_FROM_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X2F # subw (%bx), %bp")
#define SUB_BP_FROM_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X6E, 0X00 # subw (%bp), %bp")
#define SUB_BP_FROM_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X2C # subw (%si), %bp")
#define SUB_BP_FROM_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X2D # subw (%di), %bp")

#define SUB_SP_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X2B, 0X20 # subw (%eax), %sp")
#define SUB_SP_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X2B, 0X23 # subw (%ebx), %sp")
#define SUB_SP_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X2B, 0X21 # subw (%ecx), %sp")
#define SUB_SP_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X2B, 0X22 # subw (%edx), %sp")
#define SUB_SP_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X2B, 0X27 # subw (%edi), %sp")
#define SUB_SP_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X2B, 0X26 # subw (%esi), %sp")
#define SUB_SP_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X2B, 0X65, 0X00 # subw (%ebp), %sp")
#define SUB_SP_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X2B, 0X24, 0X24 # subw (%esp), %sp")
#define SUB_SP_FROM_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X27 # subw (%bx), %sp")
#define SUB_SP_FROM_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X66, 0X00 # subw (%bp), %sp")
#define SUB_SP_FROM_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X24 # subw (%si), %sp")
#define SUB_SP_FROM_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X25 # subw (%di), %sp")

#define SUB_AX_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X29, 0X00 # subw %ax, (%eax)")
#define SUB_AX_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X29, 0X03 # subw %ax, (%ebx)")
#define SUB_AX_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X29, 0X01 # subw %ax, (%ecx)")
#define SUB_AX_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X29, 0X02 # subw %ax, (%edx)")
#define SUB_AX_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X29, 0X07 # subw %ax, (%edi)")
#define SUB_AX_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X29, 0X06 # subw %ax, (%esi)")
#define SUB_AX_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X29, 0X45, 0X00 # subw %ax, (%ebp)")
#define SUB_AX_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X29, 0X04, 0X24 # subw %ax, (%esp)")
#define SUB_AX_TO_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X29, 0X07 # subw %ax, (%bx)")
#define SUB_AX_TO_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X29, 0X46, 0X00 # subw %ax, (%bp)")
#define SUB_AX_TO_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X29, 0X04 # subw %ax, (%si)")
#define SUB_AX_TO_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X29, 0X05 # subw %ax, (%di)")

#define SUB_BX_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X29, 0X18 # subw %bx, (%eax)")
#define SUB_BX_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X29, 0X1B # subw %bx, (%ebx)")
#define SUB_BX_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X29, 0X19 # subw %bx, (%ecx)")
#define SUB_BX_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X29, 0X1A # subw %bx, (%edx)")
#define SUB_BX_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X29, 0X1F # subw %bx, (%edi)")
#define SUB_BX_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X29, 0X1E # subw %bx, (%esi)")
#define SUB_BX_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X29, 0X5D, 0X00 # subw %bx, (%ebp)")
#define SUB_BX_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X29, 0X1C, 0X24 # subw %bx, (%esp)")
#define SUB_BX_TO_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X29, 0X1F # subw %bx, (%bx)")
#define SUB_BX_TO_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X29, 0X5E, 0X00 # subw %bx, (%bp)")
#define SUB_BX_TO_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X29, 0X1C # subw %bx, (%si)")
#define SUB_BX_TO_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X29, 0X1D # subw %bx, (%di)")

#define SUB_CX_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X29, 0X08 # subw %cx, (%eax)")
#define SUB_CX_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X29, 0X0B # subw %cx, (%ebx)")
#define SUB_CX_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X29, 0X09 # subw %cx, (%ecx)")
#define SUB_CX_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X29, 0X0A # subw %cx, (%edx)")
#define SUB_CX_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X29, 0X0F # subw %cx, (%edi)")
#define SUB_CX_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X29, 0X0E # subw %cx, (%esi)")
#define SUB_CX_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X29, 0X4D, 0X00 # subw %cx, (%ebp)")
#define SUB_CX_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X29, 0X0C, 0X24 # subw %cx, (%esp)")
#define SUB_CX_TO_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X29, 0X0F # subw %cx, (%bx)")
#define SUB_CX_TO_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X29, 0X4E, 0X00 # subw %cx, (%bp)")
#define SUB_CX_TO_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X29, 0X0C # subw %cx, (%si)")
#define SUB_CX_TO_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X29, 0X0D # subw %cx, (%di)")

#define SUB_DX_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X29, 0X10 # subw %dx, (%eax)")
#define SUB_DX_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X29, 0X13 # subw %dx, (%ebx)")
#define SUB_DX_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X29, 0X11 # subw %dx, (%ecx)")
#define SUB_DX_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X29, 0X12 # subw %dx, (%edx)")
#define SUB_DX_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X29, 0X17 # subw %dx, (%edi)")
#define SUB_DX_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X29, 0X16 # subw %dx, (%esi)")
#define SUB_DX_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X29, 0X55, 0X00 # subw %dx, (%ebp)")
#define SUB_DX_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X29, 0X14, 0X24 # subw %dx, (%esp)")
#define SUB_DX_TO_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X29, 0X17 # subw %dx, (%bx)")
#define SUB_DX_TO_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X29, 0X56, 0X00 # subw %dx, (%bp)")
#define SUB_DX_TO_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X29, 0X14 # subw %dx, (%si)")
#define SUB_DX_TO_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X29, 0X15 # subw %dx, (%di)")

#define SUB_DI_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X29, 0X38 # subw %di, (%eax)")
#define SUB_DI_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X29, 0X3B # subw %di, (%ebx)")
#define SUB_DI_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X29, 0X39 # subw %di, (%ecx)")
#define SUB_DI_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X29, 0X3A # subw %di, (%edx)")
#define SUB_DI_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X29, 0X3F # subw %di, (%edi)")
#define SUB_DI_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X29, 0X3E # subw %di, (%esi)")
#define SUB_DI_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X29, 0X7D, 0X00 # subw %di, (%ebp)")
#define SUB_DI_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X29, 0X3C, 0X24 # subw %di, (%esp)")
#define SUB_DI_TO_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X29, 0X3F # subw %di, (%bx)")
#define SUB_DI_TO_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X29, 0X7E, 0X00 # subw %di, (%bp)")
#define SUB_DI_TO_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X29, 0X3C # subw %di, (%si)")
#define SUB_DI_TO_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X29, 0X3D # subw %di, (%di)")

#define SUB_SI_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X29, 0X30 # subw %si, (%eax)")
#define SUB_SI_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X29, 0X33 # subw %si, (%ebx)")
#define SUB_SI_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X29, 0X31 # subw %si, (%ecx)")
#define SUB_SI_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X29, 0X32 # subw %si, (%edx)")
#define SUB_SI_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X29, 0X37 # subw %si, (%edi)")
#define SUB_SI_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X29, 0X36 # subw %si, (%esi)")
#define SUB_SI_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X29, 0X75, 0X00 # subw %si, (%ebp)")
#define SUB_SI_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X29, 0X34, 0X24 # subw %si, (%esp)")
#define SUB_SI_TO_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X29, 0X37 # subw %si, (%bx)")
#define SUB_SI_TO_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X29, 0X76, 0X00 # subw %si, (%bp)")
#define SUB_SI_TO_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X29, 0X34 # subw %si, (%si)")
#define SUB_SI_TO_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X29, 0X35 # subw %si, (%di)")

#define SUB_BP_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X29, 0X28 # subw %bp, (%eax)")
#define SUB_BP_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X29, 0X2B # subw %bp, (%ebx)")
#define SUB_BP_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X29, 0X29 # subw %bp, (%ecx)")
#define SUB_BP_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X29, 0X2A # subw %bp, (%edx)")
#define SUB_BP_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X29, 0X2F # subw %bp, (%edi)")
#define SUB_BP_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X29, 0X2E # subw %bp, (%esi)")
#define SUB_BP_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X29, 0X6D, 0X00 # subw %bp, (%ebp)")
#define SUB_BP_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X29, 0X2C, 0X24 # subw %bp, (%esp)")
#define SUB_BP_TO_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X29, 0X2F # subw %bp, (%bx)")
#define SUB_BP_TO_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X29, 0X6E, 0X00 # subw %bp, (%bp)")
#define SUB_BP_TO_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X29, 0X2C # subw %bp, (%si)")
#define SUB_BP_TO_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X29, 0X2D # subw %bp, (%di)")

#define SUB_SP_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X29, 0X20 # subw %sp, (%eax)")
#define SUB_SP_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X29, 0X23 # subw %sp, (%ebx)")
#define SUB_SP_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X29, 0X21 # subw %sp, (%ecx)")
#define SUB_SP_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X29, 0X22 # subw %sp, (%edx)")
#define SUB_SP_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X29, 0X27 # subw %sp, (%edi)")
#define SUB_SP_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X29, 0X26 # subw %sp, (%esi)")
#define SUB_SP_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X29, 0X65, 0X00 # subw %sp, (%ebp)")
#define SUB_SP_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X29, 0X24, 0X24 # subw %sp, (%esp)")
#define SUB_SP_TO_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X29, 0X27 # subw %sp, (%bx)")
#define SUB_SP_TO_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X29, 0X66, 0X00 # subw %sp, (%bp)")
#define SUB_SP_TO_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X29, 0X24 # subw %sp, (%si)")
#define SUB_SP_TO_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X29, 0X25 # subw %sp, (%di)")

#define SUB_AX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0X80 # subw " _(VALUE) "(%eax), %ax")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0X83 # subw " _(VALUE) "(%ebx), %ax")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0X81 # subw " _(VALUE) "(%ecx), %ax")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0X82 # subw " _(VALUE) "(%edx), %ax")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0X87 # subw " _(VALUE) "(%edi), %ax")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0X86 # subw " _(VALUE) "(%esi), %ax")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0X85 # subw " _(VALUE) "(%ebp), %ax")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0X84, 0X24 # subw " _(VALUE) "(%esp), %ax")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X87 # subw " _(VALUE) "(%bx), %ax")\
	CMT_ASM(".short " _(VALUE))
#define SUB_AX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X86 # subw " _(VALUE) "(%bp), %ax")\
	CMT_ASM(".short " _(VALUE))
#define SUB_AX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X84 # subw " _(VALUE) "(%si), %ax")\
	CMT_ASM(".short " _(VALUE))
#define SUB_AX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X85 # subw " _(VALUE) "(%di), %ax")\
	CMT_ASM(".short " _(VALUE))

#define SUB_BX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0X98 # subw " _(VALUE) "(%eax), %bx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0X9B # subw " _(VALUE) "(%ebx), %bx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0X99 # subw " _(VALUE) "(%ecx), %bx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0X9A # subw " _(VALUE) "(%edx), %bx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0X9F # subw " _(VALUE) "(%edi), %bx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0X9E # subw " _(VALUE) "(%esi), %bx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0X9D # subw " _(VALUE) "(%ebp), %bx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0X9C, 0X24 # subw " _(VALUE) "(%esp), %bx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X9F # subw " _(VALUE) "(%bx), %bx")\
	CMT_ASM(".short " _(VALUE))
#define SUB_BX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X9E # subw " _(VALUE) "(%bp), %bx")\
	CMT_ASM(".short " _(VALUE))
#define SUB_BX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X9C # subw " _(VALUE) "(%si), %bx")\
	CMT_ASM(".short " _(VALUE))
#define SUB_BX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X9D # subw " _(VALUE) "(%di), %bx")\
	CMT_ASM(".short " _(VALUE))

#define SUB_CX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0X88 # subw " _(VALUE) "(%eax), %cx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0X8B # subw " _(VALUE) "(%ebx), %cx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0X89 # subw " _(VALUE) "(%ecx), %cx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0X8A # subw " _(VALUE) "(%edx), %cx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0X8F # subw " _(VALUE) "(%edi), %cx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0X8E # subw " _(VALUE) "(%esi), %cx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0X8D # subw " _(VALUE) "(%ebp), %cx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0X8C, 0X24 # subw " _(VALUE) "(%esp), %cx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X8F # subw " _(VALUE) "(%bx), %cx")\
	CMT_ASM(".short " _(VALUE))
#define SUB_CX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X8E # subw " _(VALUE) "(%bp), %cx")\
	CMT_ASM(".short " _(VALUE))
#define SUB_CX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X8C # subw " _(VALUE) "(%si), %cx")\
	CMT_ASM(".short " _(VALUE))
#define SUB_CX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X8D # subw " _(VALUE) "(%di), %cx")\
	CMT_ASM(".short " _(VALUE))

#define SUB_DX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0X90 # subw " _(VALUE) "(%eax), %dx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0X93 # subw " _(VALUE) "(%ebx), %dx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0X91 # subw " _(VALUE) "(%ecx), %dx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0X92 # subw " _(VALUE) "(%edx), %dx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0X97 # subw " _(VALUE) "(%edi), %dx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0X96 # subw " _(VALUE) "(%esi), %dx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0X95 # subw " _(VALUE) "(%ebp), %dx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0X94, 0X24 # subw " _(VALUE) "(%esp), %dx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X97 # subw " _(VALUE) "(%bx), %dx")\
	CMT_ASM(".short " _(VALUE))
#define SUB_DX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X96 # subw " _(VALUE) "(%bp), %dx")\
	CMT_ASM(".short " _(VALUE))
#define SUB_DX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X94 # subw " _(VALUE) "(%si), %dx")\
	CMT_ASM(".short " _(VALUE))
#define SUB_DX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X95 # subw " _(VALUE) "(%di), %dx")\
	CMT_ASM(".short " _(VALUE))

#define SUB_DI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0XB8 # subw " _(VALUE) "(%eax), %di")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0XBB # subw " _(VALUE) "(%ebx), %di")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0XB9 # subw " _(VALUE) "(%ecx), %di")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0XBA # subw " _(VALUE) "(%edx), %di")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0XBF # subw " _(VALUE) "(%edi), %di")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0XBE # subw " _(VALUE) "(%esi), %di")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0XBD # subw " _(VALUE) "(%ebp), %di")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0XBC, 0X24 # subw " _(VALUE) "(%esp), %di")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DI_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X2B, 0XBF # subw " _(VALUE) "(%bx), %di")\
	CMT_ASM(".short " _(VALUE))
#define SUB_DI_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X2B, 0XBE # subw " _(VALUE) "(%bp), %di")\
	CMT_ASM(".short " _(VALUE))
#define SUB_DI_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X2B, 0XBC # subw " _(VALUE) "(%si), %di")\
	CMT_ASM(".short " _(VALUE))
#define SUB_DI_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X2B, 0XBD # subw " _(VALUE) "(%di), %di")\
	CMT_ASM(".short " _(VALUE))

#define SUB_SI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0XB0 # subw " _(VALUE) "(%eax), %si")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0XB3 # subw " _(VALUE) "(%ebx), %si")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0XB1 # subw " _(VALUE) "(%ecx), %si")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0XB2 # subw " _(VALUE) "(%edx), %si")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0XB7 # subw " _(VALUE) "(%edi), %si")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0XB6 # subw " _(VALUE) "(%esi), %si")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0XB5 # subw " _(VALUE) "(%ebp), %si")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0XB4, 0X24 # subw " _(VALUE) "(%esp), %si")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SI_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X2B, 0XB7 # subw " _(VALUE) "(%bx), %si")\
	CMT_ASM(".short " _(VALUE))
#define SUB_SI_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X2B, 0XB6 # subw " _(VALUE) "(%bp), %si")\
	CMT_ASM(".short " _(VALUE))
#define SUB_SI_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X2B, 0XB4 # subw " _(VALUE) "(%si), %si")\
	CMT_ASM(".short " _(VALUE))
#define SUB_SI_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X2B, 0XB5 # subw " _(VALUE) "(%di), %si")\
	CMT_ASM(".short " _(VALUE))

#define SUB_BP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0XA8 # subw " _(VALUE) "(%eax), %bp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0XAB # subw " _(VALUE) "(%ebx), %bp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0XA9 # subw " _(VALUE) "(%ecx), %bp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0XAA # subw " _(VALUE) "(%edx), %bp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0XAF # subw " _(VALUE) "(%edi), %bp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0XAE # subw " _(VALUE) "(%esi), %bp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0XAD # subw " _(VALUE) "(%ebp), %bp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0XAC, 0X24 # subw " _(VALUE) "(%esp), %bp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BP_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X2B, 0XAF # subw " _(VALUE) "(%bx), %bp")\
	CMT_ASM(".short " _(VALUE))
#define SUB_BP_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X2B, 0XAE # subw " _(VALUE) "(%bp), %bp")\
	CMT_ASM(".short " _(VALUE))
#define SUB_BP_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X2B, 0XAC # subw " _(VALUE) "(%si), %bp")\
	CMT_ASM(".short " _(VALUE))
#define SUB_BP_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X2B, 0XAD # subw " _(VALUE) "(%di), %bp")\
	CMT_ASM(".short " _(VALUE))

#define SUB_SP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0XA0 # subw " _(VALUE) "(%eax), %sp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0XA3 # subw " _(VALUE) "(%ebx), %sp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0XA1 # subw " _(VALUE) "(%ecx), %sp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0XA2 # subw " _(VALUE) "(%edx), %sp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0XA7 # subw " _(VALUE) "(%edi), %sp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0XA6 # subw " _(VALUE) "(%esi), %sp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0XA5 # subw " _(VALUE) "(%ebp), %sp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0XA4, 0X24 # subw " _(VALUE) "(%esp), %sp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SP_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X2B, 0XA7 # subw " _(VALUE) "(%bx), %sp")\
	CMT_ASM(".short " _(VALUE))
#define SUB_SP_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X2B, 0XA6 # subw " _(VALUE) "(%bp), %sp")\
	CMT_ASM(".short " _(VALUE))
#define SUB_SP_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X2B, 0XA4 # subw " _(VALUE) "(%si), %sp")\
	CMT_ASM(".short " _(VALUE))
#define SUB_SP_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X2B, 0XA5 # subw " _(VALUE) "(%di), %sp")\
	CMT_ASM(".short " _(VALUE))

#define SUB_AX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0X80 # subw %ax, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0X83 # subw %ax, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0X81 # subw %ax, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0X82 # subw %ax, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0X87 # subw %ax, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0X86 # subw %ax, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0X85 # subw %ax, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0X84, 0X24 # subw %ax, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X29, 0X87 # subw %ax, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define SUB_AX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X29, 0X86 # subw %ax, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define SUB_AX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X29, 0X84 # subw %ax, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define SUB_AX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X29, 0X85 # subw %ax, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define SUB_BX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0X98 # subw %bx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0X9B # subw %bx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0X99 # subw %bx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0X9A # subw %bx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0X9F # subw %bx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0X9E # subw %bx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0X9D # subw %bx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0X9C, 0X24 # subw %bx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X29, 0X9F # subw %bx, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define SUB_BX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X29, 0X9E # subw %bx, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define SUB_BX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X29, 0X9C # subw %bx, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define SUB_BX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X29, 0X9D # subw %bx, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define SUB_CX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0X88 # subw %cx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0X8B # subw %cx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0X89 # subw %cx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0X8A # subw %cx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0X8F # subw %cx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0X8E # subw %cx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0X8D # subw %cx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0X8C, 0X24 # subw %cx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X29, 0X8F # subw %cx, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define SUB_CX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X29, 0X8E # subw %cx, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define SUB_CX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X29, 0X8C # subw %cx, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define SUB_CX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X29, 0X8D # subw %cx, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define SUB_DX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0X90 # subw %dx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0X93 # subw %dx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0X91 # subw %dx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0X92 # subw %dx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0X97 # subw %dx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0X96 # subw %dx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0X95 # subw %dx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0X94, 0X24 # subw %dx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X29, 0X97 # subw %dx, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define SUB_DX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X29, 0X96 # subw %dx, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define SUB_DX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X29, 0X94 # subw %dx, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define SUB_DX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X29, 0X95 # subw %dx, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define SUB_DI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0XB8 # subw %di, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0XBB # subw %di, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0XB9 # subw %di, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0XBA # subw %di, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0XBF # subw %di, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0XBE # subw %di, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0XBD # subw %di, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0XBC, 0X24 # subw %di, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DI_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X29, 0XBF # subw %di, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define SUB_DI_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X29, 0XBE # subw %di, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define SUB_DI_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X29, 0XBC # subw %di, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define SUB_DI_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X29, 0XBD # subw %di, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define SUB_SI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0XB0 # subw %si, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0XB3 # subw %si, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0XB1 # subw %si, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0XB2 # subw %si, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0XB7 # subw %si, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0XB6 # subw %si, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0XB5 # subw %si, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0XB4, 0X24 # subw %si, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SI_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X29, 0XB7 # subw %si, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define SUB_SI_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X29, 0XB6 # subw %si, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define SUB_SI_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X29, 0XB4 # subw %si, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define SUB_SI_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X29, 0XB5 # subw %si, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define SUB_BP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0XA8 # subw %bp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0XAB # subw %bp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0XA9 # subw %bp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0XAA # subw %bp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0XAF # subw %bp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0XAE # subw %bp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0XAD # subw %bp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0XAC, 0X24 # subw %bp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BP_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X29, 0XAF # subw %bp, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define SUB_BP_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X29, 0XAE # subw %bp, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define SUB_BP_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X29, 0XAC # subw %bp, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define SUB_BP_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X29, 0XAD # subw %bp, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define SUB_SP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0XA0 # subw %sp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0XA3 # subw %sp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0XA1 # subw %sp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0XA2 # subw %sp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0XA7 # subw %sp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0XA6 # subw %sp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0XA5 # subw %sp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0XA4, 0X24 # subw %sp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SP_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X29, 0XA7 # subw %sp, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define SUB_SP_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X29, 0XA6 # subw %sp, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define SUB_SP_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X29, 0XA4 # subw %sp, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define SUB_SP_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X29, 0XA5 # subw %sp, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define SUB_AX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0X04, 0X25 # subw (" _(VALUE) "), %ax")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0X1C, 0X25 # subw (" _(VALUE) "), %bx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0X0C, 0X25 # subw (" _(VALUE) "), %cx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0X14, 0X25 # subw (" _(VALUE) "), %dx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0X3C, 0X25 # subw (" _(VALUE) "), %di")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0X34, 0X25 # subw (" _(VALUE) "), %si")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0X2C, 0X25 # subw (" _(VALUE) "), %bp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0X24, 0X25 # subw (" _(VALUE) "), %sp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8W_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X2B, 0X04, 0X25 # subw (" _(VALUE) "), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9W_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X2B, 0X0C, 0X25 # subw (" _(VALUE) "), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10W_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X2B, 0X14, 0X25 # subw (" _(VALUE) "), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11W_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X2B, 0X1C, 0X25 # subw (" _(VALUE) "), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12W_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X2B, 0X24, 0X25 # subw (" _(VALUE) "), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13W_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X2B, 0X2C, 0X25 # subw (" _(VALUE) "), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14W_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X2B, 0X34, 0X25 # subw (" _(VALUE) "), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15W_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X2B, 0X3C, 0X25 # subw (" _(VALUE) "), %r15w")\
	CMT_ASM(".long " _(VALUE))

#define SUB_AX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0X04, 0X25 # subw %ax, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0X1C, 0X25 # subw %bx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0X0C, 0X25 # subw %cx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0X14, 0X25 # subw %dx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0X3C, 0X25 # subw %di, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0X34, 0X25 # subw %si, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0X2C, 0X25 # subw %bp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0X24, 0X25 # subw %sp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8W_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X29, 0X04, 0X25 # subw %r8w, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9W_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X29, 0X0C, 0X25 # subw %r9w, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10W_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X29, 0X14, 0X25 # subw %r10w, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11W_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X29, 0X1C, 0X25 # subw %r11w, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12W_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X29, 0X24, 0X25 # subw %r12w, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13W_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X29, 0X2C, 0X25 # subw %r13w, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14W_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X29, 0X34, 0X25 # subw %r14w, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15W_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X29, 0X3C, 0X25 # subw %r15w, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))

#define SUB_AX_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X2B, 0X00 # subw (%rax), %ax")
#define SUB_AX_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X2B, 0X03 # subw (%rbx), %ax")
#define SUB_AX_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X2B, 0X01 # subw (%rcx), %ax")
#define SUB_AX_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X2B, 0X02 # subw (%rdx), %ax")
#define SUB_AX_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X2B, 0X07 # subw (%rdi), %ax")
#define SUB_AX_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X2B, 0X06 # subw (%rsi), %ax")
#define SUB_AX_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X2B, 0X45, 0X00 # subw (%rbp), %ax")
#define SUB_AX_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X2B, 0X04, 0X24 # subw (%rsp), %ax")
#define SUB_AX_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X2B, 0X00 # subw (%r8), %ax")
#define SUB_AX_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X2B, 0X01 # subw (%r9), %ax")
#define SUB_AX_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X2B, 0X02 # subw (%r10), %ax")
#define SUB_AX_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X2B, 0X03 # subw (%r11), %ax")
#define SUB_AX_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X2B, 0X04, 0X24 # subw (%r12), %ax")
#define SUB_AX_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X2B, 0X45, 0X00 # subw (%r13), %ax")
#define SUB_AX_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X2B, 0X06 # subw (%r14), %ax")
#define SUB_AX_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X2B, 0X07 # subw (%r15), %ax")
#define SUB_AX_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X00 # subw (%eax), %ax")
#define SUB_AX_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X03 # subw (%ebx), %ax")
#define SUB_AX_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X01 # subw (%ecx), %ax")
#define SUB_AX_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X02 # subw (%edx), %ax")
#define SUB_AX_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X07 # subw (%edi), %ax")
#define SUB_AX_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X06 # subw (%esi), %ax")
#define SUB_AX_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X45, 0X00 # subw (%ebp), %ax")
#define SUB_AX_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X04, 0X24 # subw (%esp), %ax")

#define SUB_BX_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X2B, 0X18 # subw (%rax), %bx")
#define SUB_BX_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X2B, 0X1B # subw (%rbx), %bx")
#define SUB_BX_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X2B, 0X19 # subw (%rcx), %bx")
#define SUB_BX_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X2B, 0X1A # subw (%rdx), %bx")
#define SUB_BX_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X2B, 0X1F # subw (%rdi), %bx")
#define SUB_BX_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X2B, 0X1E # subw (%rsi), %bx")
#define SUB_BX_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X2B, 0X5D, 0X00 # subw (%rbp), %bx")
#define SUB_BX_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X2B, 0X1C, 0X24 # subw (%rsp), %bx")
#define SUB_BX_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X2B, 0X18 # subw (%r8), %bx")
#define SUB_BX_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X2B, 0X19 # subw (%r9), %bx")
#define SUB_BX_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X2B, 0X1A # subw (%r10), %bx")
#define SUB_BX_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X2B, 0X1B # subw (%r11), %bx")
#define SUB_BX_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X2B, 0X1C, 0X24 # subw (%r12), %bx")
#define SUB_BX_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X2B, 0X5D, 0X00 # subw (%r13), %bx")
#define SUB_BX_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X2B, 0X1E # subw (%r14), %bx")
#define SUB_BX_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X2B, 0X1F # subw (%r15), %bx")
#define SUB_BX_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X18 # subw (%eax), %bx")
#define SUB_BX_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X1B # subw (%ebx), %bx")
#define SUB_BX_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X19 # subw (%ecx), %bx")
#define SUB_BX_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X1A # subw (%edx), %bx")
#define SUB_BX_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X1F # subw (%edi), %bx")
#define SUB_BX_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X1E # subw (%esi), %bx")
#define SUB_BX_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X5D, 0X00 # subw (%ebp), %bx")
#define SUB_BX_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X1C, 0X24 # subw (%esp), %bx")

#define SUB_CX_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X2B, 0X08 # subw (%rax), %cx")
#define SUB_CX_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X2B, 0X0B # subw (%rbx), %cx")
#define SUB_CX_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X2B, 0X09 # subw (%rcx), %cx")
#define SUB_CX_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X2B, 0X0A # subw (%rdx), %cx")
#define SUB_CX_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X2B, 0X0F # subw (%rdi), %cx")
#define SUB_CX_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X2B, 0X0E # subw (%rsi), %cx")
#define SUB_CX_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X2B, 0X4D, 0X00 # subw (%rbp), %cx")
#define SUB_CX_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X2B, 0X0C, 0X24 # subw (%rsp), %cx")
#define SUB_CX_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X2B, 0X08 # subw (%r8), %cx")
#define SUB_CX_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X2B, 0X09 # subw (%r9), %cx")
#define SUB_CX_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X2B, 0X0A # subw (%r10), %cx")
#define SUB_CX_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X2B, 0X0B # subw (%r11), %cx")
#define SUB_CX_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X2B, 0X0C, 0X24 # subw (%r12), %cx")
#define SUB_CX_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X2B, 0X4D, 0X00 # subw (%r13), %cx")
#define SUB_CX_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X2B, 0X0E # subw (%r14), %cx")
#define SUB_CX_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X2B, 0X0F # subw (%r15), %cx")
#define SUB_CX_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X08 # subw (%eax), %cx")
#define SUB_CX_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X0B # subw (%ebx), %cx")
#define SUB_CX_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X09 # subw (%ecx), %cx")
#define SUB_CX_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X0A # subw (%edx), %cx")
#define SUB_CX_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X0F # subw (%edi), %cx")
#define SUB_CX_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X0E # subw (%esi), %cx")
#define SUB_CX_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X4D, 0X00 # subw (%ebp), %cx")
#define SUB_CX_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X0C, 0X24 # subw (%esp), %cx")

#define SUB_DX_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X2B, 0X10 # subw (%rax), %dx")
#define SUB_DX_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X2B, 0X13 # subw (%rbx), %dx")
#define SUB_DX_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X2B, 0X11 # subw (%rcx), %dx")
#define SUB_DX_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X2B, 0X12 # subw (%rdx), %dx")
#define SUB_DX_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X2B, 0X17 # subw (%rdi), %dx")
#define SUB_DX_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X2B, 0X16 # subw (%rsi), %dx")
#define SUB_DX_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X2B, 0X55, 0X00 # subw (%rbp), %dx")
#define SUB_DX_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X2B, 0X14, 0X24 # subw (%rsp), %dx")
#define SUB_DX_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X2B, 0X10 # subw (%r8), %dx")
#define SUB_DX_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X2B, 0X11 # subw (%r9), %dx")
#define SUB_DX_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X2B, 0X12 # subw (%r10), %dx")
#define SUB_DX_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X2B, 0X13 # subw (%r11), %dx")
#define SUB_DX_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X2B, 0X14, 0X24 # subw (%r12), %dx")
#define SUB_DX_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X2B, 0X55, 0X00 # subw (%r13), %dx")
#define SUB_DX_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X2B, 0X16 # subw (%r14), %dx")
#define SUB_DX_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X2B, 0X17 # subw (%r15), %dx")
#define SUB_DX_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X10 # subw (%eax), %dx")
#define SUB_DX_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X13 # subw (%ebx), %dx")
#define SUB_DX_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X11 # subw (%ecx), %dx")
#define SUB_DX_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X12 # subw (%edx), %dx")
#define SUB_DX_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X17 # subw (%edi), %dx")
#define SUB_DX_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X16 # subw (%esi), %dx")
#define SUB_DX_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X55, 0X00 # subw (%ebp), %dx")
#define SUB_DX_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X14, 0X24 # subw (%esp), %dx")

#define SUB_DI_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X2B, 0X38 # subw (%rax), %di")
#define SUB_DI_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X2B, 0X3B # subw (%rbx), %di")
#define SUB_DI_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X2B, 0X39 # subw (%rcx), %di")
#define SUB_DI_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X2B, 0X3A # subw (%rdx), %di")
#define SUB_DI_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X2B, 0X3F # subw (%rdi), %di")
#define SUB_DI_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X2B, 0X3E # subw (%rsi), %di")
#define SUB_DI_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X2B, 0X7D, 0X00 # subw (%rbp), %di")
#define SUB_DI_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X2B, 0X3C, 0X24 # subw (%rsp), %di")
#define SUB_DI_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X2B, 0X38 # subw (%r8), %di")
#define SUB_DI_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X2B, 0X39 # subw (%r9), %di")
#define SUB_DI_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X2B, 0X3A # subw (%r10), %di")
#define SUB_DI_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X2B, 0X3B # subw (%r11), %di")
#define SUB_DI_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X2B, 0X3C, 0X24 # subw (%r12), %di")
#define SUB_DI_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X2B, 0X7D, 0X00 # subw (%r13), %di")
#define SUB_DI_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X2B, 0X3E # subw (%r14), %di")
#define SUB_DI_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X2B, 0X3F # subw (%r15), %di")
#define SUB_DI_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X38 # subw (%eax), %di")
#define SUB_DI_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X3B # subw (%ebx), %di")
#define SUB_DI_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X39 # subw (%ecx), %di")
#define SUB_DI_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X3A # subw (%edx), %di")
#define SUB_DI_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X3F # subw (%edi), %di")
#define SUB_DI_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X3E # subw (%esi), %di")
#define SUB_DI_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X7D, 0X00 # subw (%ebp), %di")
#define SUB_DI_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X3C, 0X24 # subw (%esp), %di")

#define SUB_SI_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X2B, 0X30 # subw (%rax), %si")
#define SUB_SI_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X2B, 0X33 # subw (%rbx), %si")
#define SUB_SI_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X2B, 0X31 # subw (%rcx), %si")
#define SUB_SI_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X2B, 0X32 # subw (%rdx), %si")
#define SUB_SI_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X2B, 0X37 # subw (%rdi), %si")
#define SUB_SI_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X2B, 0X36 # subw (%rsi), %si")
#define SUB_SI_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X2B, 0X75, 0X00 # subw (%rbp), %si")
#define SUB_SI_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X2B, 0X34, 0X24 # subw (%rsp), %si")
#define SUB_SI_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X2B, 0X30 # subw (%r8), %si")
#define SUB_SI_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X2B, 0X31 # subw (%r9), %si")
#define SUB_SI_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X2B, 0X32 # subw (%r10), %si")
#define SUB_SI_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X2B, 0X33 # subw (%r11), %si")
#define SUB_SI_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X2B, 0X34, 0X24 # subw (%r12), %si")
#define SUB_SI_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X2B, 0X75, 0X00 # subw (%r13), %si")
#define SUB_SI_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X2B, 0X36 # subw (%r14), %si")
#define SUB_SI_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X2B, 0X37 # subw (%r15), %si")
#define SUB_SI_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X30 # subw (%eax), %si")
#define SUB_SI_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X33 # subw (%ebx), %si")
#define SUB_SI_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X31 # subw (%ecx), %si")
#define SUB_SI_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X32 # subw (%edx), %si")
#define SUB_SI_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X37 # subw (%edi), %si")
#define SUB_SI_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X36 # subw (%esi), %si")
#define SUB_SI_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X75, 0X00 # subw (%ebp), %si")
#define SUB_SI_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X34, 0X24 # subw (%esp), %si")

#define SUB_BP_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X2B, 0X28 # subw (%rax), %bp")
#define SUB_BP_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X2B, 0X2B # subw (%rbx), %bp")
#define SUB_BP_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X2B, 0X29 # subw (%rcx), %bp")
#define SUB_BP_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X2B, 0X2A # subw (%rdx), %bp")
#define SUB_BP_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X2B, 0X2F # subw (%rdi), %bp")
#define SUB_BP_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X2B, 0X2E # subw (%rsi), %bp")
#define SUB_BP_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X2B, 0X6D, 0X00 # subw (%rbp), %bp")
#define SUB_BP_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X2B, 0X2C, 0X24 # subw (%rsp), %bp")
#define SUB_BP_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X2B, 0X28 # subw (%r8), %bp")
#define SUB_BP_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X2B, 0X29 # subw (%r9), %bp")
#define SUB_BP_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X2B, 0X2A # subw (%r10), %bp")
#define SUB_BP_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X2B, 0X2B # subw (%r11), %bp")
#define SUB_BP_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X2B, 0X2C, 0X24 # subw (%r12), %bp")
#define SUB_BP_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X2B, 0X6D, 0X00 # subw (%r13), %bp")
#define SUB_BP_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X2B, 0X2E # subw (%r14), %bp")
#define SUB_BP_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X2B, 0X2F # subw (%r15), %bp")
#define SUB_BP_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X28 # subw (%eax), %bp")
#define SUB_BP_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X2B # subw (%ebx), %bp")
#define SUB_BP_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X29 # subw (%ecx), %bp")
#define SUB_BP_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X2A # subw (%edx), %bp")
#define SUB_BP_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X2F # subw (%edi), %bp")
#define SUB_BP_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X2E # subw (%esi), %bp")
#define SUB_BP_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X6D, 0X00 # subw (%ebp), %bp")
#define SUB_BP_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X2C, 0X24 # subw (%esp), %bp")

#define SUB_SP_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X2B, 0X20 # subw (%rax), %sp")
#define SUB_SP_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X2B, 0X23 # subw (%rbx), %sp")
#define SUB_SP_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X2B, 0X21 # subw (%rcx), %sp")
#define SUB_SP_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X2B, 0X22 # subw (%rdx), %sp")
#define SUB_SP_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X2B, 0X27 # subw (%rdi), %sp")
#define SUB_SP_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X2B, 0X26 # subw (%rsi), %sp")
#define SUB_SP_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X2B, 0X65, 0X00 # subw (%rbp), %sp")
#define SUB_SP_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X2B, 0X24, 0X24 # subw (%rsp), %sp")
#define SUB_SP_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X2B, 0X20 # subw (%r8), %sp")
#define SUB_SP_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X2B, 0X21 # subw (%r9), %sp")
#define SUB_SP_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X2B, 0X22 # subw (%r10), %sp")
#define SUB_SP_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X2B, 0X23 # subw (%r11), %sp")
#define SUB_SP_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X2B, 0X24, 0X24 # subw (%r12), %sp")
#define SUB_SP_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X2B, 0X65, 0X00 # subw (%r13), %sp")
#define SUB_SP_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X2B, 0X26 # subw (%r14), %sp")
#define SUB_SP_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X2B, 0X27 # subw (%r15), %sp")
#define SUB_SP_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X20 # subw (%eax), %sp")
#define SUB_SP_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X23 # subw (%ebx), %sp")
#define SUB_SP_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X21 # subw (%ecx), %sp")
#define SUB_SP_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X22 # subw (%edx), %sp")
#define SUB_SP_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X27 # subw (%edi), %sp")
#define SUB_SP_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X26 # subw (%esi), %sp")
#define SUB_SP_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X65, 0X00 # subw (%ebp), %sp")
#define SUB_SP_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X24, 0X24 # subw (%esp), %sp")

#define SUB_R8W_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X2B, 0X00 # subw (%rax), %r8w")
#define SUB_R8W_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X2B, 0X03 # subw (%rbx), %r8w")
#define SUB_R8W_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X2B, 0X01 # subw (%rcx), %r8w")
#define SUB_R8W_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X2B, 0X02 # subw (%rdx), %r8w")
#define SUB_R8W_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X2B, 0X07 # subw (%rdi), %r8w")
#define SUB_R8W_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X2B, 0X06 # subw (%rsi), %r8w")
#define SUB_R8W_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X2B, 0X45, 0X00 # subw (%rbp), %r8w")
#define SUB_R8W_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X2B, 0X04, 0X24 # subw (%rsp), %r8w")
#define SUB_R8W_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X2B, 0X00 # subw (%r8), %r8w")
#define SUB_R8W_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X2B, 0X01 # subw (%r9), %r8w")
#define SUB_R8W_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X2B, 0X02 # subw (%r10), %r8w")
#define SUB_R8W_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X2B, 0X03 # subw (%r11), %r8w")
#define SUB_R8W_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X2B, 0X04, 0X24 # subw (%r12), %r8w")
#define SUB_R8W_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X2B, 0X45, 0X00 # subw (%r13), %r8w")
#define SUB_R8W_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X2B, 0X06 # subw (%r14), %r8w")
#define SUB_R8W_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X2B, 0X07 # subw (%r15), %r8w")
#define SUB_R8W_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0X00 # subw (%eax), %r8w")
#define SUB_R8W_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0X03 # subw (%ebx), %r8w")
#define SUB_R8W_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0X01 # subw (%ecx), %r8w")
#define SUB_R8W_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0X02 # subw (%edx), %r8w")
#define SUB_R8W_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0X07 # subw (%edi), %r8w")
#define SUB_R8W_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0X06 # subw (%esi), %r8w")
#define SUB_R8W_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0X45, 0X00 # subw (%ebp), %r8w")
#define SUB_R8W_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0X04, 0X24 # subw (%esp), %r8w")

#define SUB_R9W_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X2B, 0X08 # subw (%rax), %r9w")
#define SUB_R9W_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X2B, 0X0B # subw (%rbx), %r9w")
#define SUB_R9W_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X2B, 0X09 # subw (%rcx), %r9w")
#define SUB_R9W_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X2B, 0X0A # subw (%rdx), %r9w")
#define SUB_R9W_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X2B, 0X0F # subw (%rdi), %r9w")
#define SUB_R9W_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X2B, 0X0E # subw (%rsi), %r9w")
#define SUB_R9W_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X2B, 0X4D, 0X00 # subw (%rbp), %r9w")
#define SUB_R9W_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X2B, 0X0C, 0X24 # subw (%rsp), %r9w")
#define SUB_R9W_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X2B, 0X08 # subw (%r8), %r9w")
#define SUB_R9W_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X2B, 0X09 # subw (%r9), %r9w")
#define SUB_R9W_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X2B, 0X0A # subw (%r10), %r9w")
#define SUB_R9W_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X2B, 0X0B # subw (%r11), %r9w")
#define SUB_R9W_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X2B, 0X0C, 0X24 # subw (%r12), %r9w")
#define SUB_R9W_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X2B, 0X4D, 0X00 # subw (%r13), %r9w")
#define SUB_R9W_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X2B, 0X0E # subw (%r14), %r9w")
#define SUB_R9W_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X2B, 0X0F # subw (%r15), %r9w")
#define SUB_R9W_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0X08 # subw (%eax), %r9w")
#define SUB_R9W_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0X0B # subw (%ebx), %r9w")
#define SUB_R9W_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0X09 # subw (%ecx), %r9w")
#define SUB_R9W_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0X0A # subw (%edx), %r9w")
#define SUB_R9W_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0X0F # subw (%edi), %r9w")
#define SUB_R9W_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0X0E # subw (%esi), %r9w")
#define SUB_R9W_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0X4D, 0X00 # subw (%ebp), %r9w")
#define SUB_R9W_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0X0C, 0X24 # subw (%esp), %r9w")

#define SUB_R10W_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X2B, 0X10 # subw (%rax), %r10w")
#define SUB_R10W_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X2B, 0X13 # subw (%rbx), %r10w")
#define SUB_R10W_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X2B, 0X11 # subw (%rcx), %r10w")
#define SUB_R10W_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X2B, 0X12 # subw (%rdx), %r10w")
#define SUB_R10W_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X2B, 0X17 # subw (%rdi), %r10w")
#define SUB_R10W_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X2B, 0X16 # subw (%rsi), %r10w")
#define SUB_R10W_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X2B, 0X55, 0X00 # subw (%rbp), %r10w")
#define SUB_R10W_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X2B, 0X14, 0X24 # subw (%rsp), %r10w")
#define SUB_R10W_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X2B, 0X10 # subw (%r8), %r10w")
#define SUB_R10W_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X2B, 0X11 # subw (%r9), %r10w")
#define SUB_R10W_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X2B, 0X12 # subw (%r10), %r10w")
#define SUB_R10W_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X2B, 0X13 # subw (%r11), %r10w")
#define SUB_R10W_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X2B, 0X14, 0X24 # subw (%r12), %r10w")
#define SUB_R10W_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X2B, 0X55, 0X00 # subw (%r13), %r10w")
#define SUB_R10W_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X2B, 0X16 # subw (%r14), %r10w")
#define SUB_R10W_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X2B, 0X17 # subw (%r15), %r10w")
#define SUB_R10W_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0X10 # subw (%eax), %r10w")
#define SUB_R10W_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0X13 # subw (%ebx), %r10w")
#define SUB_R10W_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0X11 # subw (%ecx), %r10w")
#define SUB_R10W_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0X12 # subw (%edx), %r10w")
#define SUB_R10W_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0X17 # subw (%edi), %r10w")
#define SUB_R10W_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0X16 # subw (%esi), %r10w")
#define SUB_R10W_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0X55, 0X00 # subw (%ebp), %r10w")
#define SUB_R10W_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0X14, 0X24 # subw (%esp), %r10w")

#define SUB_R11W_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X2B, 0X18 # subw (%rax), %r11w")
#define SUB_R11W_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X2B, 0X1B # subw (%rbx), %r11w")
#define SUB_R11W_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X2B, 0X19 # subw (%rcx), %r11w")
#define SUB_R11W_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X2B, 0X1A # subw (%rdx), %r11w")
#define SUB_R11W_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X2B, 0X1F # subw (%rdi), %r11w")
#define SUB_R11W_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X2B, 0X1E # subw (%rsi), %r11w")
#define SUB_R11W_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X2B, 0X5D, 0X00 # subw (%rbp), %r11w")
#define SUB_R11W_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X2B, 0X1C, 0X24 # subw (%rsp), %r11w")
#define SUB_R11W_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X2B, 0X18 # subw (%r8), %r11w")
#define SUB_R11W_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X2B, 0X19 # subw (%r9), %r11w")
#define SUB_R11W_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X2B, 0X1A # subw (%r10), %r11w")
#define SUB_R11W_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X2B, 0X1B # subw (%r11), %r11w")
#define SUB_R11W_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X2B, 0X1C, 0X24 # subw (%r12), %r11w")
#define SUB_R11W_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X2B, 0X5D, 0X00 # subw (%r13), %r11w")
#define SUB_R11W_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X2B, 0X1E # subw (%r14), %r11w")
#define SUB_R11W_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X2B, 0X1F # subw (%r15), %r11w")
#define SUB_R11W_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0X18 # subw (%eax), %r11w")
#define SUB_R11W_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0X1B # subw (%ebx), %r11w")
#define SUB_R11W_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0X19 # subw (%ecx), %r11w")
#define SUB_R11W_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0X1A # subw (%edx), %r11w")
#define SUB_R11W_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0X1F # subw (%edi), %r11w")
#define SUB_R11W_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0X1E # subw (%esi), %r11w")
#define SUB_R11W_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0X5D, 0X00 # subw (%ebp), %r11w")
#define SUB_R11W_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0X1C, 0X24 # subw (%esp), %r11w")

#define SUB_R12W_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X2B, 0X20 # subw (%rax), %r12w")
#define SUB_R12W_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X2B, 0X23 # subw (%rbx), %r12w")
#define SUB_R12W_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X2B, 0X21 # subw (%rcx), %r12w")
#define SUB_R12W_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X2B, 0X22 # subw (%rdx), %r12w")
#define SUB_R12W_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X2B, 0X27 # subw (%rdi), %r12w")
#define SUB_R12W_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X2B, 0X26 # subw (%rsi), %r12w")
#define SUB_R12W_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X2B, 0X65, 0X00 # subw (%rbp), %r12w")
#define SUB_R12W_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X2B, 0X24, 0X24 # subw (%rsp), %r12w")
#define SUB_R12W_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X2B, 0X20 # subw (%r8), %r12w")
#define SUB_R12W_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X2B, 0X21 # subw (%r9), %r12w")
#define SUB_R12W_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X2B, 0X22 # subw (%r10), %r12w")
#define SUB_R12W_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X2B, 0X23 # subw (%r11), %r12w")
#define SUB_R12W_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X2B, 0X24, 0X24 # subw (%r12), %r12w")
#define SUB_R12W_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X2B, 0X65, 0X00 # subw (%r13), %r12w")
#define SUB_R12W_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X2B, 0X26 # subw (%r14), %r12w")
#define SUB_R12W_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X2B, 0X27 # subw (%r15), %r12w")
#define SUB_R12W_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0X20 # subw (%eax), %r12w")
#define SUB_R12W_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0X23 # subw (%ebx), %r12w")
#define SUB_R12W_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0X21 # subw (%ecx), %r12w")
#define SUB_R12W_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0X22 # subw (%edx), %r12w")
#define SUB_R12W_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0X27 # subw (%edi), %r12w")
#define SUB_R12W_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0X26 # subw (%esi), %r12w")
#define SUB_R12W_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0X65, 0X00 # subw (%ebp), %r12w")
#define SUB_R12W_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0X24, 0X24 # subw (%esp), %r12w")

#define SUB_R13W_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X2B, 0X28 # subw (%rax), %r13w")
#define SUB_R13W_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X2B, 0X2B # subw (%rbx), %r13w")
#define SUB_R13W_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X2B, 0X29 # subw (%rcx), %r13w")
#define SUB_R13W_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X2B, 0X2A # subw (%rdx), %r13w")
#define SUB_R13W_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X2B, 0X2F # subw (%rdi), %r13w")
#define SUB_R13W_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X2B, 0X2E # subw (%rsi), %r13w")
#define SUB_R13W_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X2B, 0X6D, 0X00 # subw (%rbp), %r13w")
#define SUB_R13W_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X2B, 0X2C, 0X24 # subw (%rsp), %r13w")
#define SUB_R13W_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X2B, 0X28 # subw (%r8), %r13w")
#define SUB_R13W_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X2B, 0X29 # subw (%r9), %r13w")
#define SUB_R13W_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X2B, 0X2A # subw (%r10), %r13w")
#define SUB_R13W_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X2B, 0X2B # subw (%r11), %r13w")
#define SUB_R13W_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X2B, 0X2C, 0X24 # subw (%r12), %r13w")
#define SUB_R13W_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X2B, 0X6D, 0X00 # subw (%r13), %r13w")
#define SUB_R13W_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X2B, 0X2E # subw (%r14), %r13w")
#define SUB_R13W_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X2B, 0X2F # subw (%r15), %r13w")
#define SUB_R13W_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0X28 # subw (%eax), %r13w")
#define SUB_R13W_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0X2B # subw (%ebx), %r13w")
#define SUB_R13W_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0X29 # subw (%ecx), %r13w")
#define SUB_R13W_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0X2A # subw (%edx), %r13w")
#define SUB_R13W_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0X2F # subw (%edi), %r13w")
#define SUB_R13W_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0X2E # subw (%esi), %r13w")
#define SUB_R13W_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0X6D, 0X00 # subw (%ebp), %r13w")
#define SUB_R13W_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0X2C, 0X24 # subw (%esp), %r13w")

#define SUB_R14W_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X2B, 0X30 # subw (%rax), %r14w")
#define SUB_R14W_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X2B, 0X33 # subw (%rbx), %r14w")
#define SUB_R14W_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X2B, 0X31 # subw (%rcx), %r14w")
#define SUB_R14W_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X2B, 0X32 # subw (%rdx), %r14w")
#define SUB_R14W_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X2B, 0X37 # subw (%rdi), %r14w")
#define SUB_R14W_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X2B, 0X36 # subw (%rsi), %r14w")
#define SUB_R14W_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X2B, 0X75, 0X00 # subw (%rbp), %r14w")
#define SUB_R14W_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X2B, 0X34, 0X24 # subw (%rsp), %r14w")
#define SUB_R14W_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X2B, 0X30 # subw (%r8), %r14w")
#define SUB_R14W_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X2B, 0X31 # subw (%r9), %r14w")
#define SUB_R14W_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X2B, 0X32 # subw (%r10), %r14w")
#define SUB_R14W_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X2B, 0X33 # subw (%r11), %r14w")
#define SUB_R14W_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X2B, 0X34, 0X24 # subw (%r12), %r14w")
#define SUB_R14W_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X2B, 0X75, 0X00 # subw (%r13), %r14w")
#define SUB_R14W_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X2B, 0X36 # subw (%r14), %r14w")
#define SUB_R14W_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X2B, 0X37 # subw (%r15), %r14w")
#define SUB_R14W_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0X30 # subw (%eax), %r14w")
#define SUB_R14W_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0X33 # subw (%ebx), %r14w")
#define SUB_R14W_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0X31 # subw (%ecx), %r14w")
#define SUB_R14W_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0X32 # subw (%edx), %r14w")
#define SUB_R14W_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0X37 # subw (%edi), %r14w")
#define SUB_R14W_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0X36 # subw (%esi), %r14w")
#define SUB_R14W_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0X75, 0X00 # subw (%ebp), %r14w")
#define SUB_R14W_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0X34, 0X24 # subw (%esp), %r14w")

#define SUB_R15W_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X2B, 0X38 # subw (%rax), %r15w")
#define SUB_R15W_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X2B, 0X3B # subw (%rbx), %r15w")
#define SUB_R15W_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X2B, 0X39 # subw (%rcx), %r15w")
#define SUB_R15W_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X2B, 0X3A # subw (%rdx), %r15w")
#define SUB_R15W_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X2B, 0X3F # subw (%rdi), %r15w")
#define SUB_R15W_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X2B, 0X3E # subw (%rsi), %r15w")
#define SUB_R15W_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X2B, 0X7D, 0X00 # subw (%rbp), %r15w")
#define SUB_R15W_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X2B, 0X3C, 0X24 # subw (%rsp), %r15w")
#define SUB_R15W_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X2B, 0X38 # subw (%r8), %r15w")
#define SUB_R15W_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X2B, 0X39 # subw (%r9), %r15w")
#define SUB_R15W_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X2B, 0X3A # subw (%r10), %r15w")
#define SUB_R15W_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X2B, 0X3B # subw (%r11), %r15w")
#define SUB_R15W_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X2B, 0X3C, 0X24 # subw (%r12), %r15w")
#define SUB_R15W_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X2B, 0X7D, 0X00 # subw (%r13), %r15w")
#define SUB_R15W_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X2B, 0X3E # subw (%r14), %r15w")
#define SUB_R15W_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X2B, 0X3F # subw (%r15), %r15w")
#define SUB_R15W_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0X38 # subw (%eax), %r15w")
#define SUB_R15W_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0X3B # subw (%ebx), %r15w")
#define SUB_R15W_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0X39 # subw (%ecx), %r15w")
#define SUB_R15W_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0X3A # subw (%edx), %r15w")
#define SUB_R15W_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0X3F # subw (%edi), %r15w")
#define SUB_R15W_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0X3E # subw (%esi), %r15w")
#define SUB_R15W_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0X7D, 0X00 # subw (%ebp), %r15w")
#define SUB_R15W_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0X3C, 0X24 # subw (%esp), %r15w")

#define SUB_AX_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X29, 0X00 # subw %ax, (%rax)")
#define SUB_AX_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X29, 0X03 # subw %ax, (%rbx)")
#define SUB_AX_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X29, 0X01 # subw %ax, (%rcx)")
#define SUB_AX_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X29, 0X02 # subw %ax, (%rdx)")
#define SUB_AX_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X29, 0X07 # subw %ax, (%rdi)")
#define SUB_AX_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X29, 0X06 # subw %ax, (%rsi)")
#define SUB_AX_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X29, 0X45, 0X00 # subw %ax, (%rbp)")
#define SUB_AX_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X29, 0X04, 0X24 # subw %ax, (%rsp)")
#define SUB_AX_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X29, 0X00 # subw %ax, (%r8)")
#define SUB_AX_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X29, 0X01 # subw %ax, (%r9)")
#define SUB_AX_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X29, 0X02 # subw %ax, (%r10)")
#define SUB_AX_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X29, 0X03 # subw %ax, (%r11)")
#define SUB_AX_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X29, 0X04, 0X24 # subw %ax, (%r12)")
#define SUB_AX_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X29, 0X45, 0X00 # subw %ax, (%r13)")
#define SUB_AX_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X29, 0X06 # subw %ax, (%r14)")
#define SUB_AX_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X29, 0X07 # subw %ax, (%r15)")
#define SUB_AX_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X29, 0X00 # subw %ax, (%eax)")
#define SUB_AX_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X29, 0X03 # subw %ax, (%ebx)")
#define SUB_AX_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X29, 0X01 # subw %ax, (%ecx)")
#define SUB_AX_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X29, 0X02 # subw %ax, (%edx)")
#define SUB_AX_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X29, 0X07 # subw %ax, (%edi)")
#define SUB_AX_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X29, 0X06 # subw %ax, (%esi)")
#define SUB_AX_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X29, 0X45, 0X00 # subw %ax, (%ebp)")
#define SUB_AX_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X29, 0X04, 0X24 # subw %ax, (%esp)")

#define SUB_BX_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X29, 0X18 # subw %bx, (%rax)")
#define SUB_BX_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X29, 0X1B # subw %bx, (%rbx)")
#define SUB_BX_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X29, 0X19 # subw %bx, (%rcx)")
#define SUB_BX_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X29, 0X1A # subw %bx, (%rdx)")
#define SUB_BX_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X29, 0X1F # subw %bx, (%rdi)")
#define SUB_BX_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X29, 0X1E # subw %bx, (%rsi)")
#define SUB_BX_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X29, 0X5D, 0X00 # subw %bx, (%rbp)")
#define SUB_BX_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X29, 0X1C, 0X24 # subw %bx, (%rsp)")
#define SUB_BX_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X29, 0X18 # subw %bx, (%r8)")
#define SUB_BX_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X29, 0X19 # subw %bx, (%r9)")
#define SUB_BX_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X29, 0X1A # subw %bx, (%r10)")
#define SUB_BX_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X29, 0X1B # subw %bx, (%r11)")
#define SUB_BX_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X29, 0X1C, 0X24 # subw %bx, (%r12)")
#define SUB_BX_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X29, 0X5D, 0X00 # subw %bx, (%r13)")
#define SUB_BX_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X29, 0X1E # subw %bx, (%r14)")
#define SUB_BX_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X29, 0X1F # subw %bx, (%r15)")
#define SUB_BX_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X29, 0X18 # subw %bx, (%eax)")
#define SUB_BX_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X29, 0X1B # subw %bx, (%ebx)")
#define SUB_BX_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X29, 0X19 # subw %bx, (%ecx)")
#define SUB_BX_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X29, 0X1A # subw %bx, (%edx)")
#define SUB_BX_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X29, 0X1F # subw %bx, (%edi)")
#define SUB_BX_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X29, 0X1E # subw %bx, (%esi)")
#define SUB_BX_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X29, 0X5D, 0X00 # subw %bx, (%ebp)")
#define SUB_BX_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X29, 0X1C, 0X24 # subw %bx, (%esp)")

#define SUB_CX_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X29, 0X08 # subw %cx, (%rax)")
#define SUB_CX_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X29, 0X0B # subw %cx, (%rbx)")
#define SUB_CX_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X29, 0X09 # subw %cx, (%rcx)")
#define SUB_CX_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X29, 0X0A # subw %cx, (%rdx)")
#define SUB_CX_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X29, 0X0F # subw %cx, (%rdi)")
#define SUB_CX_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X29, 0X0E # subw %cx, (%rsi)")
#define SUB_CX_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X29, 0X4D, 0X00 # subw %cx, (%rbp)")
#define SUB_CX_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X29, 0X0C, 0X24 # subw %cx, (%rsp)")
#define SUB_CX_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X29, 0X08 # subw %cx, (%r8)")
#define SUB_CX_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X29, 0X09 # subw %cx, (%r9)")
#define SUB_CX_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X29, 0X0A # subw %cx, (%r10)")
#define SUB_CX_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X29, 0X0B # subw %cx, (%r11)")
#define SUB_CX_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X29, 0X0C, 0X24 # subw %cx, (%r12)")
#define SUB_CX_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X29, 0X4D, 0X00 # subw %cx, (%r13)")
#define SUB_CX_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X29, 0X0E # subw %cx, (%r14)")
#define SUB_CX_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X29, 0X0F # subw %cx, (%r15)")
#define SUB_CX_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X29, 0X08 # subw %cx, (%eax)")
#define SUB_CX_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X29, 0X0B # subw %cx, (%ebx)")
#define SUB_CX_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X29, 0X09 # subw %cx, (%ecx)")
#define SUB_CX_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X29, 0X0A # subw %cx, (%edx)")
#define SUB_CX_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X29, 0X0F # subw %cx, (%edi)")
#define SUB_CX_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X29, 0X0E # subw %cx, (%esi)")
#define SUB_CX_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X29, 0X4D, 0X00 # subw %cx, (%ebp)")
#define SUB_CX_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X29, 0X0C, 0X24 # subw %cx, (%esp)")

#define SUB_DX_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X29, 0X10 # subw %dx, (%rax)")
#define SUB_DX_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X29, 0X13 # subw %dx, (%rbx)")
#define SUB_DX_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X29, 0X11 # subw %dx, (%rcx)")
#define SUB_DX_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X29, 0X12 # subw %dx, (%rdx)")
#define SUB_DX_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X29, 0X17 # subw %dx, (%rdi)")
#define SUB_DX_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X29, 0X16 # subw %dx, (%rsi)")
#define SUB_DX_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X29, 0X55, 0X00 # subw %dx, (%rbp)")
#define SUB_DX_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X29, 0X14, 0X24 # subw %dx, (%rsp)")
#define SUB_DX_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X29, 0X10 # subw %dx, (%r8)")
#define SUB_DX_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X29, 0X11 # subw %dx, (%r9)")
#define SUB_DX_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X29, 0X12 # subw %dx, (%r10)")
#define SUB_DX_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X29, 0X13 # subw %dx, (%r11)")
#define SUB_DX_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X29, 0X14, 0X24 # subw %dx, (%r12)")
#define SUB_DX_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X29, 0X55, 0X00 # subw %dx, (%r13)")
#define SUB_DX_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X29, 0X16 # subw %dx, (%r14)")
#define SUB_DX_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X29, 0X17 # subw %dx, (%r15)")
#define SUB_DX_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X29, 0X10 # subw %dx, (%eax)")
#define SUB_DX_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X29, 0X13 # subw %dx, (%ebx)")
#define SUB_DX_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X29, 0X11 # subw %dx, (%ecx)")
#define SUB_DX_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X29, 0X12 # subw %dx, (%edx)")
#define SUB_DX_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X29, 0X17 # subw %dx, (%edi)")
#define SUB_DX_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X29, 0X16 # subw %dx, (%esi)")
#define SUB_DX_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X29, 0X55, 0X00 # subw %dx, (%ebp)")
#define SUB_DX_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X29, 0X14, 0X24 # subw %dx, (%esp)")

#define SUB_DI_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X29, 0X38 # subw %di, (%rax)")
#define SUB_DI_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X29, 0X3B # subw %di, (%rbx)")
#define SUB_DI_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X29, 0X39 # subw %di, (%rcx)")
#define SUB_DI_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X29, 0X3A # subw %di, (%rdx)")
#define SUB_DI_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X29, 0X3F # subw %di, (%rdi)")
#define SUB_DI_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X29, 0X3E # subw %di, (%rsi)")
#define SUB_DI_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X29, 0X7D, 0X00 # subw %di, (%rbp)")
#define SUB_DI_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X29, 0X3C, 0X24 # subw %di, (%rsp)")
#define SUB_DI_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X29, 0X38 # subw %di, (%r8)")
#define SUB_DI_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X29, 0X39 # subw %di, (%r9)")
#define SUB_DI_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X29, 0X3A # subw %di, (%r10)")
#define SUB_DI_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X29, 0X3B # subw %di, (%r11)")
#define SUB_DI_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X29, 0X3C, 0X24 # subw %di, (%r12)")
#define SUB_DI_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X29, 0X7D, 0X00 # subw %di, (%r13)")
#define SUB_DI_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X29, 0X3E # subw %di, (%r14)")
#define SUB_DI_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X29, 0X3F # subw %di, (%r15)")
#define SUB_DI_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X29, 0X38 # subw %di, (%eax)")
#define SUB_DI_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X29, 0X3B # subw %di, (%ebx)")
#define SUB_DI_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X29, 0X39 # subw %di, (%ecx)")
#define SUB_DI_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X29, 0X3A # subw %di, (%edx)")
#define SUB_DI_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X29, 0X3F # subw %di, (%edi)")
#define SUB_DI_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X29, 0X3E # subw %di, (%esi)")
#define SUB_DI_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X29, 0X7D, 0X00 # subw %di, (%ebp)")
#define SUB_DI_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X29, 0X3C, 0X24 # subw %di, (%esp)")

#define SUB_SI_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X29, 0X30 # subw %si, (%rax)")
#define SUB_SI_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X29, 0X33 # subw %si, (%rbx)")
#define SUB_SI_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X29, 0X31 # subw %si, (%rcx)")
#define SUB_SI_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X29, 0X32 # subw %si, (%rdx)")
#define SUB_SI_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X29, 0X37 # subw %si, (%rdi)")
#define SUB_SI_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X29, 0X36 # subw %si, (%rsi)")
#define SUB_SI_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X29, 0X75, 0X00 # subw %si, (%rbp)")
#define SUB_SI_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X29, 0X34, 0X24 # subw %si, (%rsp)")
#define SUB_SI_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X29, 0X30 # subw %si, (%r8)")
#define SUB_SI_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X29, 0X31 # subw %si, (%r9)")
#define SUB_SI_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X29, 0X32 # subw %si, (%r10)")
#define SUB_SI_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X29, 0X33 # subw %si, (%r11)")
#define SUB_SI_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X29, 0X34, 0X24 # subw %si, (%r12)")
#define SUB_SI_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X29, 0X75, 0X00 # subw %si, (%r13)")
#define SUB_SI_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X29, 0X36 # subw %si, (%r14)")
#define SUB_SI_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X29, 0X37 # subw %si, (%r15)")
#define SUB_SI_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X29, 0X30 # subw %si, (%eax)")
#define SUB_SI_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X29, 0X33 # subw %si, (%ebx)")
#define SUB_SI_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X29, 0X31 # subw %si, (%ecx)")
#define SUB_SI_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X29, 0X32 # subw %si, (%edx)")
#define SUB_SI_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X29, 0X37 # subw %si, (%edi)")
#define SUB_SI_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X29, 0X36 # subw %si, (%esi)")
#define SUB_SI_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X29, 0X75, 0X00 # subw %si, (%ebp)")
#define SUB_SI_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X29, 0X34, 0X24 # subw %si, (%esp)")

#define SUB_BP_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X29, 0X28 # subw %bp, (%rax)")
#define SUB_BP_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X29, 0X2B # subw %bp, (%rbx)")
#define SUB_BP_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X29, 0X29 # subw %bp, (%rcx)")
#define SUB_BP_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X29, 0X2A # subw %bp, (%rdx)")
#define SUB_BP_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X29, 0X2F # subw %bp, (%rdi)")
#define SUB_BP_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X29, 0X2E # subw %bp, (%rsi)")
#define SUB_BP_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X29, 0X6D, 0X00 # subw %bp, (%rbp)")
#define SUB_BP_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X29, 0X2C, 0X24 # subw %bp, (%rsp)")
#define SUB_BP_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X29, 0X28 # subw %bp, (%r8)")
#define SUB_BP_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X29, 0X29 # subw %bp, (%r9)")
#define SUB_BP_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X29, 0X2A # subw %bp, (%r10)")
#define SUB_BP_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X29, 0X2B # subw %bp, (%r11)")
#define SUB_BP_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X29, 0X2C, 0X24 # subw %bp, (%r12)")
#define SUB_BP_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X29, 0X6D, 0X00 # subw %bp, (%r13)")
#define SUB_BP_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X29, 0X2E # subw %bp, (%r14)")
#define SUB_BP_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X29, 0X2F # subw %bp, (%r15)")
#define SUB_BP_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X29, 0X28 # subw %bp, (%eax)")
#define SUB_BP_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X29, 0X2B # subw %bp, (%ebx)")
#define SUB_BP_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X29, 0X29 # subw %bp, (%ecx)")
#define SUB_BP_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X29, 0X2A # subw %bp, (%edx)")
#define SUB_BP_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X29, 0X2F # subw %bp, (%edi)")
#define SUB_BP_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X29, 0X2E # subw %bp, (%esi)")
#define SUB_BP_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X29, 0X6D, 0X00 # subw %bp, (%ebp)")
#define SUB_BP_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X29, 0X2C, 0X24 # subw %bp, (%esp)")

#define SUB_SP_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X29, 0X20 # subw %sp, (%rax)")
#define SUB_SP_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X29, 0X23 # subw %sp, (%rbx)")
#define SUB_SP_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X29, 0X21 # subw %sp, (%rcx)")
#define SUB_SP_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X29, 0X22 # subw %sp, (%rdx)")
#define SUB_SP_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X29, 0X27 # subw %sp, (%rdi)")
#define SUB_SP_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X29, 0X26 # subw %sp, (%rsi)")
#define SUB_SP_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X29, 0X65, 0X00 # subw %sp, (%rbp)")
#define SUB_SP_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X29, 0X24, 0X24 # subw %sp, (%rsp)")
#define SUB_SP_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X29, 0X20 # subw %sp, (%r8)")
#define SUB_SP_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X29, 0X21 # subw %sp, (%r9)")
#define SUB_SP_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X29, 0X22 # subw %sp, (%r10)")
#define SUB_SP_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X29, 0X23 # subw %sp, (%r11)")
#define SUB_SP_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X29, 0X24, 0X24 # subw %sp, (%r12)")
#define SUB_SP_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X29, 0X65, 0X00 # subw %sp, (%r13)")
#define SUB_SP_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X29, 0X26 # subw %sp, (%r14)")
#define SUB_SP_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X29, 0X27 # subw %sp, (%r15)")
#define SUB_SP_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X29, 0X20 # subw %sp, (%eax)")
#define SUB_SP_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X29, 0X23 # subw %sp, (%ebx)")
#define SUB_SP_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X29, 0X21 # subw %sp, (%ecx)")
#define SUB_SP_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X29, 0X22 # subw %sp, (%edx)")
#define SUB_SP_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X29, 0X27 # subw %sp, (%edi)")
#define SUB_SP_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X29, 0X26 # subw %sp, (%esi)")
#define SUB_SP_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X29, 0X65, 0X00 # subw %sp, (%ebp)")
#define SUB_SP_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X29, 0X24, 0X24 # subw %sp, (%esp)")

#define SUB_R8W_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X29, 0X00 # subw %r8w, (%rax)")
#define SUB_R8W_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X29, 0X03 # subw %r8w, (%rbx)")
#define SUB_R8W_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X29, 0X01 # subw %r8w, (%rcx)")
#define SUB_R8W_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X29, 0X02 # subw %r8w, (%rdx)")
#define SUB_R8W_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X29, 0X07 # subw %r8w, (%rdi)")
#define SUB_R8W_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X29, 0X06 # subw %r8w, (%rsi)")
#define SUB_R8W_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X29, 0X45, 0X00 # subw %r8w, (%rbp)")
#define SUB_R8W_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X29, 0X04, 0X24 # subw %r8w, (%rsp)")
#define SUB_R8W_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X29, 0X00 # subw %r8w, (%r8)")
#define SUB_R8W_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X29, 0X01 # subw %r8w, (%r9)")
#define SUB_R8W_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X29, 0X02 # subw %r8w, (%r10)")
#define SUB_R8W_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X29, 0X03 # subw %r8w, (%r11)")
#define SUB_R8W_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X29, 0X04, 0X24 # subw %r8w, (%r12)")
#define SUB_R8W_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X29, 0X45, 0X00 # subw %r8w, (%r13)")
#define SUB_R8W_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X29, 0X06 # subw %r8w, (%r14)")
#define SUB_R8W_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X29, 0X07 # subw %r8w, (%r15)")
#define SUB_R8W_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0X00 # subw %r8w, (%eax)")
#define SUB_R8W_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0X03 # subw %r8w, (%ebx)")
#define SUB_R8W_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0X01 # subw %r8w, (%ecx)")
#define SUB_R8W_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0X02 # subw %r8w, (%edx)")
#define SUB_R8W_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0X07 # subw %r8w, (%edi)")
#define SUB_R8W_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0X06 # subw %r8w, (%esi)")
#define SUB_R8W_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0X45, 0X00 # subw %r8w, (%ebp)")
#define SUB_R8W_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0X04, 0X24 # subw %r8w, (%esp)")

#define SUB_R9W_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X29, 0X08 # subw %r9w, (%rax)")
#define SUB_R9W_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X29, 0X0B # subw %r9w, (%rbx)")
#define SUB_R9W_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X29, 0X09 # subw %r9w, (%rcx)")
#define SUB_R9W_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X29, 0X0A # subw %r9w, (%rdx)")
#define SUB_R9W_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X29, 0X0F # subw %r9w, (%rdi)")
#define SUB_R9W_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X29, 0X0E # subw %r9w, (%rsi)")
#define SUB_R9W_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X29, 0X4D, 0X00 # subw %r9w, (%rbp)")
#define SUB_R9W_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X29, 0X0C, 0X24 # subw %r9w, (%rsp)")
#define SUB_R9W_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X29, 0X08 # subw %r9w, (%r8)")
#define SUB_R9W_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X29, 0X09 # subw %r9w, (%r9)")
#define SUB_R9W_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X29, 0X0A # subw %r9w, (%r10)")
#define SUB_R9W_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X29, 0X0B # subw %r9w, (%r11)")
#define SUB_R9W_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X29, 0X0C, 0X24 # subw %r9w, (%r12)")
#define SUB_R9W_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X29, 0X4D, 0X00 # subw %r9w, (%r13)")
#define SUB_R9W_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X29, 0X0E # subw %r9w, (%r14)")
#define SUB_R9W_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X29, 0X0F # subw %r9w, (%r15)")
#define SUB_R9W_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0X08 # subw %r9w, (%eax)")
#define SUB_R9W_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0X0B # subw %r9w, (%ebx)")
#define SUB_R9W_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0X09 # subw %r9w, (%ecx)")
#define SUB_R9W_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0X0A # subw %r9w, (%edx)")
#define SUB_R9W_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0X0F # subw %r9w, (%edi)")
#define SUB_R9W_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0X0E # subw %r9w, (%esi)")
#define SUB_R9W_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0X4D, 0X00 # subw %r9w, (%ebp)")
#define SUB_R9W_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0X0C, 0X24 # subw %r9w, (%esp)")

#define SUB_R10W_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X29, 0X10 # subw %r10w, (%rax)")
#define SUB_R10W_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X29, 0X13 # subw %r10w, (%rbx)")
#define SUB_R10W_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X29, 0X11 # subw %r10w, (%rcx)")
#define SUB_R10W_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X29, 0X12 # subw %r10w, (%rdx)")
#define SUB_R10W_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X29, 0X17 # subw %r10w, (%rdi)")
#define SUB_R10W_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X29, 0X16 # subw %r10w, (%rsi)")
#define SUB_R10W_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X29, 0X55, 0X00 # subw %r10w, (%rbp)")
#define SUB_R10W_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X29, 0X14, 0X24 # subw %r10w, (%rsp)")
#define SUB_R10W_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X29, 0X10 # subw %r10w, (%r8)")
#define SUB_R10W_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X29, 0X11 # subw %r10w, (%r9)")
#define SUB_R10W_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X29, 0X12 # subw %r10w, (%r10)")
#define SUB_R10W_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X29, 0X13 # subw %r10w, (%r11)")
#define SUB_R10W_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X29, 0X14, 0X24 # subw %r10w, (%r12)")
#define SUB_R10W_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X29, 0X55, 0X00 # subw %r10w, (%r13)")
#define SUB_R10W_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X29, 0X16 # subw %r10w, (%r14)")
#define SUB_R10W_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X29, 0X17 # subw %r10w, (%r15)")
#define SUB_R10W_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0X10 # subw %r10w, (%eax)")
#define SUB_R10W_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0X13 # subw %r10w, (%ebx)")
#define SUB_R10W_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0X11 # subw %r10w, (%ecx)")
#define SUB_R10W_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0X12 # subw %r10w, (%edx)")
#define SUB_R10W_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0X17 # subw %r10w, (%edi)")
#define SUB_R10W_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0X16 # subw %r10w, (%esi)")
#define SUB_R10W_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0X55, 0X00 # subw %r10w, (%ebp)")
#define SUB_R10W_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0X14, 0X24 # subw %r10w, (%esp)")

#define SUB_R11W_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X29, 0X18 # subw %r11w, (%rax)")
#define SUB_R11W_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X29, 0X1B # subw %r11w, (%rbx)")
#define SUB_R11W_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X29, 0X19 # subw %r11w, (%rcx)")
#define SUB_R11W_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X29, 0X1A # subw %r11w, (%rdx)")
#define SUB_R11W_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X29, 0X1F # subw %r11w, (%rdi)")
#define SUB_R11W_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X29, 0X1E # subw %r11w, (%rsi)")
#define SUB_R11W_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X29, 0X5D, 0X00 # subw %r11w, (%rbp)")
#define SUB_R11W_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X29, 0X1C, 0X24 # subw %r11w, (%rsp)")
#define SUB_R11W_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X29, 0X18 # subw %r11w, (%r8)")
#define SUB_R11W_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X29, 0X19 # subw %r11w, (%r9)")
#define SUB_R11W_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X29, 0X1A # subw %r11w, (%r10)")
#define SUB_R11W_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X29, 0X1B # subw %r11w, (%r11)")
#define SUB_R11W_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X29, 0X1C, 0X24 # subw %r11w, (%r12)")
#define SUB_R11W_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X29, 0X5D, 0X00 # subw %r11w, (%r13)")
#define SUB_R11W_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X29, 0X1E # subw %r11w, (%r14)")
#define SUB_R11W_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X29, 0X1F # subw %r11w, (%r15)")
#define SUB_R11W_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0X18 # subw %r11w, (%eax)")
#define SUB_R11W_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0X1B # subw %r11w, (%ebx)")
#define SUB_R11W_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0X19 # subw %r11w, (%ecx)")
#define SUB_R11W_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0X1A # subw %r11w, (%edx)")
#define SUB_R11W_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0X1F # subw %r11w, (%edi)")
#define SUB_R11W_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0X1E # subw %r11w, (%esi)")
#define SUB_R11W_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0X5D, 0X00 # subw %r11w, (%ebp)")
#define SUB_R11W_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0X1C, 0X24 # subw %r11w, (%esp)")

#define SUB_R12W_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X29, 0X20 # subw %r12w, (%rax)")
#define SUB_R12W_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X29, 0X23 # subw %r12w, (%rbx)")
#define SUB_R12W_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X29, 0X21 # subw %r12w, (%rcx)")
#define SUB_R12W_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X29, 0X22 # subw %r12w, (%rdx)")
#define SUB_R12W_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X29, 0X27 # subw %r12w, (%rdi)")
#define SUB_R12W_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X29, 0X26 # subw %r12w, (%rsi)")
#define SUB_R12W_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X29, 0X65, 0X00 # subw %r12w, (%rbp)")
#define SUB_R12W_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X29, 0X24, 0X24 # subw %r12w, (%rsp)")
#define SUB_R12W_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X29, 0X20 # subw %r12w, (%r8)")
#define SUB_R12W_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X29, 0X21 # subw %r12w, (%r9)")
#define SUB_R12W_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X29, 0X22 # subw %r12w, (%r10)")
#define SUB_R12W_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X29, 0X23 # subw %r12w, (%r11)")
#define SUB_R12W_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X29, 0X24, 0X24 # subw %r12w, (%r12)")
#define SUB_R12W_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X29, 0X65, 0X00 # subw %r12w, (%r13)")
#define SUB_R12W_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X29, 0X26 # subw %r12w, (%r14)")
#define SUB_R12W_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X29, 0X27 # subw %r12w, (%r15)")
#define SUB_R12W_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0X20 # subw %r12w, (%eax)")
#define SUB_R12W_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0X23 # subw %r12w, (%ebx)")
#define SUB_R12W_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0X21 # subw %r12w, (%ecx)")
#define SUB_R12W_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0X22 # subw %r12w, (%edx)")
#define SUB_R12W_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0X27 # subw %r12w, (%edi)")
#define SUB_R12W_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0X26 # subw %r12w, (%esi)")
#define SUB_R12W_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0X65, 0X00 # subw %r12w, (%ebp)")
#define SUB_R12W_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0X24, 0X24 # subw %r12w, (%esp)")

#define SUB_R13W_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X29, 0X28 # subw %r13w, (%rax)")
#define SUB_R13W_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X29, 0X2B # subw %r13w, (%rbx)")
#define SUB_R13W_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X29, 0X29 # subw %r13w, (%rcx)")
#define SUB_R13W_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X29, 0X2A # subw %r13w, (%rdx)")
#define SUB_R13W_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X29, 0X2F # subw %r13w, (%rdi)")
#define SUB_R13W_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X29, 0X2E # subw %r13w, (%rsi)")
#define SUB_R13W_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X29, 0X6D, 0X00 # subw %r13w, (%rbp)")
#define SUB_R13W_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X29, 0X2C, 0X24 # subw %r13w, (%rsp)")
#define SUB_R13W_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X29, 0X28 # subw %r13w, (%r8)")
#define SUB_R13W_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X29, 0X29 # subw %r13w, (%r9)")
#define SUB_R13W_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X29, 0X2A # subw %r13w, (%r10)")
#define SUB_R13W_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X29, 0X2B # subw %r13w, (%r11)")
#define SUB_R13W_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X29, 0X2C, 0X24 # subw %r13w, (%r12)")
#define SUB_R13W_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X29, 0X6D, 0X00 # subw %r13w, (%r13)")
#define SUB_R13W_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X29, 0X2E # subw %r13w, (%r14)")
#define SUB_R13W_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X29, 0X2F # subw %r13w, (%r15)")
#define SUB_R13W_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0X28 # subw %r13w, (%eax)")
#define SUB_R13W_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0X2B # subw %r13w, (%ebx)")
#define SUB_R13W_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0X29 # subw %r13w, (%ecx)")
#define SUB_R13W_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0X2A # subw %r13w, (%edx)")
#define SUB_R13W_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0X2F # subw %r13w, (%edi)")
#define SUB_R13W_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0X2E # subw %r13w, (%esi)")
#define SUB_R13W_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0X6D, 0X00 # subw %r13w, (%ebp)")
#define SUB_R13W_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0X2C, 0X24 # subw %r13w, (%esp)")

#define SUB_R14W_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X29, 0X30 # subw %r14w, (%rax)")
#define SUB_R14W_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X29, 0X33 # subw %r14w, (%rbx)")
#define SUB_R14W_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X29, 0X31 # subw %r14w, (%rcx)")
#define SUB_R14W_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X29, 0X32 # subw %r14w, (%rdx)")
#define SUB_R14W_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X29, 0X37 # subw %r14w, (%rdi)")
#define SUB_R14W_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X29, 0X36 # subw %r14w, (%rsi)")
#define SUB_R14W_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X29, 0X75, 0X00 # subw %r14w, (%rbp)")
#define SUB_R14W_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X29, 0X34, 0X24 # subw %r14w, (%rsp)")
#define SUB_R14W_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X29, 0X30 # subw %r14w, (%r8)")
#define SUB_R14W_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X29, 0X31 # subw %r14w, (%r9)")
#define SUB_R14W_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X29, 0X32 # subw %r14w, (%r10)")
#define SUB_R14W_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X29, 0X33 # subw %r14w, (%r11)")
#define SUB_R14W_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X29, 0X34, 0X24 # subw %r14w, (%r12)")
#define SUB_R14W_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X29, 0X75, 0X00 # subw %r14w, (%r13)")
#define SUB_R14W_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X29, 0X36 # subw %r14w, (%r14)")
#define SUB_R14W_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X29, 0X37 # subw %r14w, (%r15)")
#define SUB_R14W_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0X30 # subw %r14w, (%eax)")
#define SUB_R14W_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0X33 # subw %r14w, (%ebx)")
#define SUB_R14W_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0X31 # subw %r14w, (%ecx)")
#define SUB_R14W_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0X32 # subw %r14w, (%edx)")
#define SUB_R14W_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0X37 # subw %r14w, (%edi)")
#define SUB_R14W_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0X36 # subw %r14w, (%esi)")
#define SUB_R14W_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0X75, 0X00 # subw %r14w, (%ebp)")
#define SUB_R14W_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0X34, 0X24 # subw %r14w, (%esp)")

#define SUB_R15W_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X29, 0X38 # subw %r15w, (%rax)")
#define SUB_R15W_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X29, 0X3B # subw %r15w, (%rbx)")
#define SUB_R15W_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X29, 0X39 # subw %r15w, (%rcx)")
#define SUB_R15W_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X29, 0X3A # subw %r15w, (%rdx)")
#define SUB_R15W_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X29, 0X3F # subw %r15w, (%rdi)")
#define SUB_R15W_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X29, 0X3E # subw %r15w, (%rsi)")
#define SUB_R15W_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X29, 0X7D, 0X00 # subw %r15w, (%rbp)")
#define SUB_R15W_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X29, 0X3C, 0X24 # subw %r15w, (%rsp)")
#define SUB_R15W_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X29, 0X38 # subw %r15w, (%r8)")
#define SUB_R15W_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X29, 0X39 # subw %r15w, (%r9)")
#define SUB_R15W_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X29, 0X3A # subw %r15w, (%r10)")
#define SUB_R15W_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X29, 0X3B # subw %r15w, (%r11)")
#define SUB_R15W_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X29, 0X3C, 0X24 # subw %r15w, (%r12)")
#define SUB_R15W_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X29, 0X7D, 0X00 # subw %r15w, (%r13)")
#define SUB_R15W_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X29, 0X3E # subw %r15w, (%r14)")
#define SUB_R15W_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X29, 0X3F # subw %r15w, (%r15)")
#define SUB_R15W_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0X38 # subw %r15w, (%eax)")
#define SUB_R15W_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0X3B # subw %r15w, (%ebx)")
#define SUB_R15W_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0X39 # subw %r15w, (%ecx)")
#define SUB_R15W_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0X3A # subw %r15w, (%edx)")
#define SUB_R15W_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0X3F # subw %r15w, (%edi)")
#define SUB_R15W_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0X3E # subw %r15w, (%esi)")
#define SUB_R15W_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0X7D, 0X00 # subw %r15w, (%ebp)")
#define SUB_R15W_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0X3C, 0X24 # subw %r15w, (%esp)")

#define SUB_AX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0X80 # subw " _(VALUE) "(%rax), %ax")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0X83 # subw " _(VALUE) "(%rbx), %ax")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0X81 # subw " _(VALUE) "(%rcx), %ax")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0X82 # subw " _(VALUE) "(%rdx), %ax")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0X87 # subw " _(VALUE) "(%rdi), %ax")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0X86 # subw " _(VALUE) "(%rsi), %ax")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0X85 # subw " _(VALUE) "(%rbp), %ax")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0X84, 0X24 # subw " _(VALUE) "(%rsp), %ax")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X2B, 0X80 # subw " _(VALUE) "(%r8), %ax")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X2B, 0X81 # subw " _(VALUE) "(%r9), %ax")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X2B, 0X82 # subw " _(VALUE) "(%r10), %ax")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X2B, 0X83 # subw " _(VALUE) "(%r11), %ax")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X2B, 0X84, 0X24 # subw " _(VALUE) "(%r12), %ax")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X2B, 0X85 # subw " _(VALUE) "(%r13), %ax")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X2B, 0X86 # subw " _(VALUE) "(%r14), %ax")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X2B, 0X87 # subw " _(VALUE) "(%r15), %ax")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X80 # subw " _(VALUE) "(%eax), %ax")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X83 # subw " _(VALUE) "(%ebx), %ax")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X81 # subw " _(VALUE) "(%ecx), %ax")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X82 # subw " _(VALUE) "(%edx), %ax")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X87 # subw " _(VALUE) "(%edi), %ax")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X86 # subw " _(VALUE) "(%esi), %ax")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X85 # subw " _(VALUE) "(%ebp), %ax")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X84, 0X24 # subw " _(VALUE) "(%esp), %ax")\
	CMT_ASM(".long " _(VALUE))

#define SUB_BX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0X98 # subw " _(VALUE) "(%rax), %bx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0X9B # subw " _(VALUE) "(%rbx), %bx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0X99 # subw " _(VALUE) "(%rcx), %bx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0X9A # subw " _(VALUE) "(%rdx), %bx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0X9F # subw " _(VALUE) "(%rdi), %bx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0X9E # subw " _(VALUE) "(%rsi), %bx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0X9D # subw " _(VALUE) "(%rbp), %bx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0X9C, 0X24 # subw " _(VALUE) "(%rsp), %bx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X2B, 0X98 # subw " _(VALUE) "(%r8), %bx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X2B, 0X99 # subw " _(VALUE) "(%r9), %bx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X2B, 0X9A # subw " _(VALUE) "(%r10), %bx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X2B, 0X9B # subw " _(VALUE) "(%r11), %bx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X2B, 0X9C, 0X24 # subw " _(VALUE) "(%r12), %bx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X2B, 0X9D # subw " _(VALUE) "(%r13), %bx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X2B, 0X9E # subw " _(VALUE) "(%r14), %bx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X2B, 0X9F # subw " _(VALUE) "(%r15), %bx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X98 # subw " _(VALUE) "(%eax), %bx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X9B # subw " _(VALUE) "(%ebx), %bx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X99 # subw " _(VALUE) "(%ecx), %bx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X9A # subw " _(VALUE) "(%edx), %bx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X9F # subw " _(VALUE) "(%edi), %bx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X9E # subw " _(VALUE) "(%esi), %bx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X9D # subw " _(VALUE) "(%ebp), %bx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X9C, 0X24 # subw " _(VALUE) "(%esp), %bx")\
	CMT_ASM(".long " _(VALUE))

#define SUB_CX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0X88 # subw " _(VALUE) "(%rax), %cx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0X8B # subw " _(VALUE) "(%rbx), %cx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0X89 # subw " _(VALUE) "(%rcx), %cx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0X8A # subw " _(VALUE) "(%rdx), %cx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0X8F # subw " _(VALUE) "(%rdi), %cx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0X8E # subw " _(VALUE) "(%rsi), %cx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0X8D # subw " _(VALUE) "(%rbp), %cx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0X8C, 0X24 # subw " _(VALUE) "(%rsp), %cx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X2B, 0X88 # subw " _(VALUE) "(%r8), %cx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X2B, 0X89 # subw " _(VALUE) "(%r9), %cx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X2B, 0X8A # subw " _(VALUE) "(%r10), %cx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X2B, 0X8B # subw " _(VALUE) "(%r11), %cx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X2B, 0X8C, 0X24 # subw " _(VALUE) "(%r12), %cx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X2B, 0X8D # subw " _(VALUE) "(%r13), %cx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X2B, 0X8E # subw " _(VALUE) "(%r14), %cx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X2B, 0X8F # subw " _(VALUE) "(%r15), %cx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X88 # subw " _(VALUE) "(%eax), %cx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X8B # subw " _(VALUE) "(%ebx), %cx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X89 # subw " _(VALUE) "(%ecx), %cx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X8A # subw " _(VALUE) "(%edx), %cx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X8F # subw " _(VALUE) "(%edi), %cx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X8E # subw " _(VALUE) "(%esi), %cx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X8D # subw " _(VALUE) "(%ebp), %cx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X8C, 0X24 # subw " _(VALUE) "(%esp), %cx")\
	CMT_ASM(".long " _(VALUE))

#define SUB_DX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0X90 # subw " _(VALUE) "(%rax), %dx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0X93 # subw " _(VALUE) "(%rbx), %dx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0X91 # subw " _(VALUE) "(%rcx), %dx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0X92 # subw " _(VALUE) "(%rdx), %dx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0X97 # subw " _(VALUE) "(%rdi), %dx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0X96 # subw " _(VALUE) "(%rsi), %dx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0X95 # subw " _(VALUE) "(%rbp), %dx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0X94, 0X24 # subw " _(VALUE) "(%rsp), %dx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X2B, 0X90 # subw " _(VALUE) "(%r8), %dx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X2B, 0X91 # subw " _(VALUE) "(%r9), %dx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X2B, 0X92 # subw " _(VALUE) "(%r10), %dx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X2B, 0X93 # subw " _(VALUE) "(%r11), %dx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X2B, 0X94, 0X24 # subw " _(VALUE) "(%r12), %dx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X2B, 0X95 # subw " _(VALUE) "(%r13), %dx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X2B, 0X96 # subw " _(VALUE) "(%r14), %dx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X2B, 0X97 # subw " _(VALUE) "(%r15), %dx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X90 # subw " _(VALUE) "(%eax), %dx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X93 # subw " _(VALUE) "(%ebx), %dx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X91 # subw " _(VALUE) "(%ecx), %dx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X92 # subw " _(VALUE) "(%edx), %dx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X97 # subw " _(VALUE) "(%edi), %dx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X96 # subw " _(VALUE) "(%esi), %dx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X95 # subw " _(VALUE) "(%ebp), %dx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X2B, 0X94, 0X24 # subw " _(VALUE) "(%esp), %dx")\
	CMT_ASM(".long " _(VALUE))

#define SUB_DI_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0XB8 # subw " _(VALUE) "(%rax), %di")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DI_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0XBB # subw " _(VALUE) "(%rbx), %di")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DI_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0XB9 # subw " _(VALUE) "(%rcx), %di")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DI_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0XBA # subw " _(VALUE) "(%rdx), %di")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DI_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0XBF # subw " _(VALUE) "(%rdi), %di")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DI_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0XBE # subw " _(VALUE) "(%rsi), %di")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DI_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0XBD # subw " _(VALUE) "(%rbp), %di")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DI_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0XBC, 0X24 # subw " _(VALUE) "(%rsp), %di")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DI_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X2B, 0XB8 # subw " _(VALUE) "(%r8), %di")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DI_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X2B, 0XB9 # subw " _(VALUE) "(%r9), %di")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DI_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X2B, 0XBA # subw " _(VALUE) "(%r10), %di")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DI_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X2B, 0XBB # subw " _(VALUE) "(%r11), %di")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DI_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X2B, 0XBC, 0X24 # subw " _(VALUE) "(%r12), %di")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DI_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X2B, 0XBD # subw " _(VALUE) "(%r13), %di")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DI_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X2B, 0XBE # subw " _(VALUE) "(%r14), %di")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DI_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X2B, 0XBF # subw " _(VALUE) "(%r15), %di")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X2B, 0XB8 # subw " _(VALUE) "(%eax), %di")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X2B, 0XBB # subw " _(VALUE) "(%ebx), %di")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X2B, 0XB9 # subw " _(VALUE) "(%ecx), %di")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X2B, 0XBA # subw " _(VALUE) "(%edx), %di")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X2B, 0XBF # subw " _(VALUE) "(%edi), %di")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X2B, 0XBE # subw " _(VALUE) "(%esi), %di")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X2B, 0XBD # subw " _(VALUE) "(%ebp), %di")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X2B, 0XBC, 0X24 # subw " _(VALUE) "(%esp), %di")\
	CMT_ASM(".long " _(VALUE))

#define SUB_SI_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0XB0 # subw " _(VALUE) "(%rax), %si")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SI_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0XB3 # subw " _(VALUE) "(%rbx), %si")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SI_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0XB1 # subw " _(VALUE) "(%rcx), %si")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SI_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0XB2 # subw " _(VALUE) "(%rdx), %si")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SI_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0XB7 # subw " _(VALUE) "(%rdi), %si")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SI_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0XB6 # subw " _(VALUE) "(%rsi), %si")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SI_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0XB5 # subw " _(VALUE) "(%rbp), %si")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SI_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0XB4, 0X24 # subw " _(VALUE) "(%rsp), %si")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SI_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X2B, 0XB0 # subw " _(VALUE) "(%r8), %si")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SI_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X2B, 0XB1 # subw " _(VALUE) "(%r9), %si")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SI_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X2B, 0XB2 # subw " _(VALUE) "(%r10), %si")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SI_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X2B, 0XB3 # subw " _(VALUE) "(%r11), %si")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SI_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X2B, 0XB4, 0X24 # subw " _(VALUE) "(%r12), %si")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SI_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X2B, 0XB5 # subw " _(VALUE) "(%r13), %si")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SI_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X2B, 0XB6 # subw " _(VALUE) "(%r14), %si")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SI_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X2B, 0XB7 # subw " _(VALUE) "(%r15), %si")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X2B, 0XB0 # subw " _(VALUE) "(%eax), %si")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X2B, 0XB3 # subw " _(VALUE) "(%ebx), %si")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X2B, 0XB1 # subw " _(VALUE) "(%ecx), %si")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X2B, 0XB2 # subw " _(VALUE) "(%edx), %si")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X2B, 0XB7 # subw " _(VALUE) "(%edi), %si")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X2B, 0XB6 # subw " _(VALUE) "(%esi), %si")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X2B, 0XB5 # subw " _(VALUE) "(%ebp), %si")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X2B, 0XB4, 0X24 # subw " _(VALUE) "(%esp), %si")\
	CMT_ASM(".long " _(VALUE))

#define SUB_BP_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0XA8 # subw " _(VALUE) "(%rax), %bp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BP_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0XAB # subw " _(VALUE) "(%rbx), %bp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BP_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0XA9 # subw " _(VALUE) "(%rcx), %bp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BP_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0XAA # subw " _(VALUE) "(%rdx), %bp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BP_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0XAF # subw " _(VALUE) "(%rdi), %bp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BP_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0XAE # subw " _(VALUE) "(%rsi), %bp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BP_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0XAD # subw " _(VALUE) "(%rbp), %bp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BP_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0XAC, 0X24 # subw " _(VALUE) "(%rsp), %bp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BP_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X2B, 0XA8 # subw " _(VALUE) "(%r8), %bp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BP_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X2B, 0XA9 # subw " _(VALUE) "(%r9), %bp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BP_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X2B, 0XAA # subw " _(VALUE) "(%r10), %bp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BP_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X2B, 0XAB # subw " _(VALUE) "(%r11), %bp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BP_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X2B, 0XAC, 0X24 # subw " _(VALUE) "(%r12), %bp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BP_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X2B, 0XAD # subw " _(VALUE) "(%r13), %bp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BP_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X2B, 0XAE # subw " _(VALUE) "(%r14), %bp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BP_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X2B, 0XAF # subw " _(VALUE) "(%r15), %bp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X2B, 0XA8 # subw " _(VALUE) "(%eax), %bp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X2B, 0XAB # subw " _(VALUE) "(%ebx), %bp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X2B, 0XA9 # subw " _(VALUE) "(%ecx), %bp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X2B, 0XAA # subw " _(VALUE) "(%edx), %bp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X2B, 0XAF # subw " _(VALUE) "(%edi), %bp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X2B, 0XAE # subw " _(VALUE) "(%esi), %bp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X2B, 0XAD # subw " _(VALUE) "(%ebp), %bp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X2B, 0XAC, 0X24 # subw " _(VALUE) "(%esp), %bp")\
	CMT_ASM(".long " _(VALUE))

#define SUB_SP_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0XA0 # subw " _(VALUE) "(%rax), %sp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SP_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0XA3 # subw " _(VALUE) "(%rbx), %sp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SP_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0XA1 # subw " _(VALUE) "(%rcx), %sp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SP_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0XA2 # subw " _(VALUE) "(%rdx), %sp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SP_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0XA7 # subw " _(VALUE) "(%rdi), %sp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SP_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0XA6 # subw " _(VALUE) "(%rsi), %sp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SP_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0XA5 # subw " _(VALUE) "(%rbp), %sp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SP_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X2B, 0XA4, 0X24 # subw " _(VALUE) "(%rsp), %sp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SP_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X2B, 0XA0 # subw " _(VALUE) "(%r8), %sp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SP_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X2B, 0XA1 # subw " _(VALUE) "(%r9), %sp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SP_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X2B, 0XA2 # subw " _(VALUE) "(%r10), %sp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SP_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X2B, 0XA3 # subw " _(VALUE) "(%r11), %sp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SP_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X2B, 0XA4, 0X24 # subw " _(VALUE) "(%r12), %sp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SP_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X2B, 0XA5 # subw " _(VALUE) "(%r13), %sp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SP_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X2B, 0XA6 # subw " _(VALUE) "(%r14), %sp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SP_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X2B, 0XA7 # subw " _(VALUE) "(%r15), %sp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X2B, 0XA0 # subw " _(VALUE) "(%eax), %sp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X2B, 0XA3 # subw " _(VALUE) "(%ebx), %sp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X2B, 0XA1 # subw " _(VALUE) "(%ecx), %sp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X2B, 0XA2 # subw " _(VALUE) "(%edx), %sp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X2B, 0XA7 # subw " _(VALUE) "(%edi), %sp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X2B, 0XA6 # subw " _(VALUE) "(%esi), %sp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X2B, 0XA5 # subw " _(VALUE) "(%ebp), %sp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X2B, 0XA4, 0X24 # subw " _(VALUE) "(%esp), %sp")\
	CMT_ASM(".long " _(VALUE))

#define SUB_R8W_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X2B, 0X80 # subw " _(VALUE) "(%rax), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8W_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X2B, 0X83 # subw " _(VALUE) "(%rbx), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8W_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X2B, 0X81 # subw " _(VALUE) "(%rcx), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8W_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X2B, 0X82 # subw " _(VALUE) "(%rdx), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8W_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X2B, 0X87 # subw " _(VALUE) "(%rdi), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8W_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X2B, 0X86 # subw " _(VALUE) "(%rsi), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8W_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X2B, 0X85 # subw " _(VALUE) "(%rbp), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8W_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X2B, 0X84, 0X24 # subw " _(VALUE) "(%rsp), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8W_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X2B, 0X80 # subw " _(VALUE) "(%r8), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8W_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X2B, 0X81 # subw " _(VALUE) "(%r9), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8W_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X2B, 0X82 # subw " _(VALUE) "(%r10), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8W_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X2B, 0X83 # subw " _(VALUE) "(%r11), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8W_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X2B, 0X84, 0X24 # subw " _(VALUE) "(%r12), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8W_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X2B, 0X85 # subw " _(VALUE) "(%r13), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8W_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X2B, 0X86 # subw " _(VALUE) "(%r14), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8W_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X2B, 0X87 # subw " _(VALUE) "(%r15), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8W_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0X80 # subw " _(VALUE) "(%eax), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8W_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0X83 # subw " _(VALUE) "(%ebx), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8W_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0X81 # subw " _(VALUE) "(%ecx), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8W_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0X82 # subw " _(VALUE) "(%edx), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8W_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0X87 # subw " _(VALUE) "(%edi), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8W_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0X86 # subw " _(VALUE) "(%esi), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8W_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0X85 # subw " _(VALUE) "(%ebp), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8W_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0X84, 0X24 # subw " _(VALUE) "(%esp), %r8w")\
	CMT_ASM(".long " _(VALUE))

#define SUB_R9W_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X2B, 0X88 # subw " _(VALUE) "(%rax), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9W_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X2B, 0X8B # subw " _(VALUE) "(%rbx), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9W_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X2B, 0X89 # subw " _(VALUE) "(%rcx), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9W_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X2B, 0X8A # subw " _(VALUE) "(%rdx), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9W_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X2B, 0X8F # subw " _(VALUE) "(%rdi), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9W_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X2B, 0X8E # subw " _(VALUE) "(%rsi), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9W_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X2B, 0X8D # subw " _(VALUE) "(%rbp), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9W_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X2B, 0X8C, 0X24 # subw " _(VALUE) "(%rsp), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9W_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X2B, 0X88 # subw " _(VALUE) "(%r8), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9W_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X2B, 0X89 # subw " _(VALUE) "(%r9), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9W_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X2B, 0X8A # subw " _(VALUE) "(%r10), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9W_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X2B, 0X8B # subw " _(VALUE) "(%r11), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9W_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X2B, 0X8C, 0X24 # subw " _(VALUE) "(%r12), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9W_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X2B, 0X8D # subw " _(VALUE) "(%r13), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9W_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X2B, 0X8E # subw " _(VALUE) "(%r14), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9W_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X2B, 0X8F # subw " _(VALUE) "(%r15), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9W_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0X88 # subw " _(VALUE) "(%eax), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9W_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0X8B # subw " _(VALUE) "(%ebx), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9W_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0X89 # subw " _(VALUE) "(%ecx), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9W_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0X8A # subw " _(VALUE) "(%edx), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9W_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0X8F # subw " _(VALUE) "(%edi), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9W_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0X8E # subw " _(VALUE) "(%esi), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9W_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0X8D # subw " _(VALUE) "(%ebp), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9W_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0X8C, 0X24 # subw " _(VALUE) "(%esp), %r9w")\
	CMT_ASM(".long " _(VALUE))

#define SUB_R10W_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X2B, 0X90 # subw " _(VALUE) "(%rax), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10W_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X2B, 0X93 # subw " _(VALUE) "(%rbx), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10W_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X2B, 0X91 # subw " _(VALUE) "(%rcx), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10W_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X2B, 0X92 # subw " _(VALUE) "(%rdx), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10W_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X2B, 0X97 # subw " _(VALUE) "(%rdi), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10W_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X2B, 0X96 # subw " _(VALUE) "(%rsi), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10W_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X2B, 0X95 # subw " _(VALUE) "(%rbp), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10W_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X2B, 0X94, 0X24 # subw " _(VALUE) "(%rsp), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10W_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X2B, 0X90 # subw " _(VALUE) "(%r8), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10W_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X2B, 0X91 # subw " _(VALUE) "(%r9), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10W_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X2B, 0X92 # subw " _(VALUE) "(%r10), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10W_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X2B, 0X93 # subw " _(VALUE) "(%r11), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10W_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X2B, 0X94, 0X24 # subw " _(VALUE) "(%r12), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10W_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X2B, 0X95 # subw " _(VALUE) "(%r13), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10W_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X2B, 0X96 # subw " _(VALUE) "(%r14), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10W_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X2B, 0X97 # subw " _(VALUE) "(%r15), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10W_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0X90 # subw " _(VALUE) "(%eax), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10W_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0X93 # subw " _(VALUE) "(%ebx), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10W_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0X91 # subw " _(VALUE) "(%ecx), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10W_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0X92 # subw " _(VALUE) "(%edx), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10W_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0X97 # subw " _(VALUE) "(%edi), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10W_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0X96 # subw " _(VALUE) "(%esi), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10W_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0X95 # subw " _(VALUE) "(%ebp), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10W_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0X94, 0X24 # subw " _(VALUE) "(%esp), %r10w")\
	CMT_ASM(".long " _(VALUE))

#define SUB_R11W_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X2B, 0X98 # subw " _(VALUE) "(%rax), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11W_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X2B, 0X9B # subw " _(VALUE) "(%rbx), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11W_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X2B, 0X99 # subw " _(VALUE) "(%rcx), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11W_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X2B, 0X9A # subw " _(VALUE) "(%rdx), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11W_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X2B, 0X9F # subw " _(VALUE) "(%rdi), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11W_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X2B, 0X9E # subw " _(VALUE) "(%rsi), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11W_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X2B, 0X9D # subw " _(VALUE) "(%rbp), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11W_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X2B, 0X9C, 0X24 # subw " _(VALUE) "(%rsp), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11W_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X2B, 0X98 # subw " _(VALUE) "(%r8), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11W_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X2B, 0X99 # subw " _(VALUE) "(%r9), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11W_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X2B, 0X9A # subw " _(VALUE) "(%r10), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11W_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X2B, 0X9B # subw " _(VALUE) "(%r11), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11W_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X2B, 0X9C, 0X24 # subw " _(VALUE) "(%r12), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11W_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X2B, 0X9D # subw " _(VALUE) "(%r13), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11W_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X2B, 0X9E # subw " _(VALUE) "(%r14), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11W_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X2B, 0X9F # subw " _(VALUE) "(%r15), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11W_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0X98 # subw " _(VALUE) "(%eax), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11W_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0X9B # subw " _(VALUE) "(%ebx), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11W_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0X99 # subw " _(VALUE) "(%ecx), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11W_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0X9A # subw " _(VALUE) "(%edx), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11W_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0X9F # subw " _(VALUE) "(%edi), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11W_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0X9E # subw " _(VALUE) "(%esi), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11W_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0X9D # subw " _(VALUE) "(%ebp), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11W_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0X9C, 0X24 # subw " _(VALUE) "(%esp), %r11w")\
	CMT_ASM(".long " _(VALUE))

#define SUB_R12W_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X2B, 0XA0 # subw " _(VALUE) "(%rax), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12W_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X2B, 0XA3 # subw " _(VALUE) "(%rbx), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12W_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X2B, 0XA1 # subw " _(VALUE) "(%rcx), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12W_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X2B, 0XA2 # subw " _(VALUE) "(%rdx), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12W_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X2B, 0XA7 # subw " _(VALUE) "(%rdi), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12W_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X2B, 0XA6 # subw " _(VALUE) "(%rsi), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12W_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X2B, 0XA5 # subw " _(VALUE) "(%rbp), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12W_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X2B, 0XA4, 0X24 # subw " _(VALUE) "(%rsp), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12W_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X2B, 0XA0 # subw " _(VALUE) "(%r8), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12W_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X2B, 0XA1 # subw " _(VALUE) "(%r9), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12W_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X2B, 0XA2 # subw " _(VALUE) "(%r10), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12W_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X2B, 0XA3 # subw " _(VALUE) "(%r11), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12W_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X2B, 0XA4, 0X24 # subw " _(VALUE) "(%r12), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12W_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X2B, 0XA5 # subw " _(VALUE) "(%r13), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12W_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X2B, 0XA6 # subw " _(VALUE) "(%r14), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12W_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X2B, 0XA7 # subw " _(VALUE) "(%r15), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12W_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0XA0 # subw " _(VALUE) "(%eax), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12W_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0XA3 # subw " _(VALUE) "(%ebx), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12W_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0XA1 # subw " _(VALUE) "(%ecx), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12W_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0XA2 # subw " _(VALUE) "(%edx), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12W_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0XA7 # subw " _(VALUE) "(%edi), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12W_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0XA6 # subw " _(VALUE) "(%esi), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12W_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0XA5 # subw " _(VALUE) "(%ebp), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12W_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0XA4, 0X24 # subw " _(VALUE) "(%esp), %r12w")\
	CMT_ASM(".long " _(VALUE))

#define SUB_R13W_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X2B, 0XA8 # subw " _(VALUE) "(%rax), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13W_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X2B, 0XAB # subw " _(VALUE) "(%rbx), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13W_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X2B, 0XA9 # subw " _(VALUE) "(%rcx), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13W_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X2B, 0XAA # subw " _(VALUE) "(%rdx), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13W_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X2B, 0XAF # subw " _(VALUE) "(%rdi), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13W_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X2B, 0XAE # subw " _(VALUE) "(%rsi), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13W_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X2B, 0XAD # subw " _(VALUE) "(%rbp), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13W_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X2B, 0XAC, 0X24 # subw " _(VALUE) "(%rsp), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13W_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X2B, 0XA8 # subw " _(VALUE) "(%r8), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13W_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X2B, 0XA9 # subw " _(VALUE) "(%r9), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13W_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X2B, 0XAA # subw " _(VALUE) "(%r10), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13W_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X2B, 0XAB # subw " _(VALUE) "(%r11), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13W_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X2B, 0XAC, 0X24 # subw " _(VALUE) "(%r12), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13W_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X2B, 0XAD # subw " _(VALUE) "(%r13), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13W_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X2B, 0XAE # subw " _(VALUE) "(%r14), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13W_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X2B, 0XAF # subw " _(VALUE) "(%r15), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13W_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0XA8 # subw " _(VALUE) "(%eax), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13W_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0XAB # subw " _(VALUE) "(%ebx), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13W_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0XA9 # subw " _(VALUE) "(%ecx), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13W_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0XAA # subw " _(VALUE) "(%edx), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13W_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0XAF # subw " _(VALUE) "(%edi), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13W_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0XAE # subw " _(VALUE) "(%esi), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13W_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0XAD # subw " _(VALUE) "(%ebp), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13W_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0XAC, 0X24 # subw " _(VALUE) "(%esp), %r13w")\
	CMT_ASM(".long " _(VALUE))

#define SUB_R14W_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X2B, 0XB0 # subw " _(VALUE) "(%rax), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14W_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X2B, 0XB3 # subw " _(VALUE) "(%rbx), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14W_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X2B, 0XB1 # subw " _(VALUE) "(%rcx), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14W_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X2B, 0XB2 # subw " _(VALUE) "(%rdx), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14W_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X2B, 0XB7 # subw " _(VALUE) "(%rdi), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14W_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X2B, 0XB6 # subw " _(VALUE) "(%rsi), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14W_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X2B, 0XB5 # subw " _(VALUE) "(%rbp), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14W_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X2B, 0XB4, 0X24 # subw " _(VALUE) "(%rsp), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14W_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X2B, 0XB0 # subw " _(VALUE) "(%r8), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14W_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X2B, 0XB1 # subw " _(VALUE) "(%r9), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14W_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X2B, 0XB2 # subw " _(VALUE) "(%r10), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14W_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X2B, 0XB3 # subw " _(VALUE) "(%r11), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14W_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X2B, 0XB4, 0X24 # subw " _(VALUE) "(%r12), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14W_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X2B, 0XB5 # subw " _(VALUE) "(%r13), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14W_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X2B, 0XB6 # subw " _(VALUE) "(%r14), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14W_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X2B, 0XB7 # subw " _(VALUE) "(%r15), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14W_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0XB0 # subw " _(VALUE) "(%eax), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14W_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0XB3 # subw " _(VALUE) "(%ebx), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14W_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0XB1 # subw " _(VALUE) "(%ecx), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14W_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0XB2 # subw " _(VALUE) "(%edx), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14W_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0XB7 # subw " _(VALUE) "(%edi), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14W_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0XB6 # subw " _(VALUE) "(%esi), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14W_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0XB5 # subw " _(VALUE) "(%ebp), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14W_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0XB4, 0X24 # subw " _(VALUE) "(%esp), %r14w")\
	CMT_ASM(".long " _(VALUE))

#define SUB_R15W_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X2B, 0XB8 # subw " _(VALUE) "(%rax), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15W_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X2B, 0XBB # subw " _(VALUE) "(%rbx), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15W_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X2B, 0XB9 # subw " _(VALUE) "(%rcx), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15W_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X2B, 0XBA # subw " _(VALUE) "(%rdx), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15W_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X2B, 0XBF # subw " _(VALUE) "(%rdi), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15W_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X2B, 0XBE # subw " _(VALUE) "(%rsi), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15W_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X2B, 0XBD # subw " _(VALUE) "(%rbp), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15W_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X2B, 0XBC, 0X24 # subw " _(VALUE) "(%rsp), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15W_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X2B, 0XB8 # subw " _(VALUE) "(%r8), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15W_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X2B, 0XB9 # subw " _(VALUE) "(%r9), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15W_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X2B, 0XBA # subw " _(VALUE) "(%r10), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15W_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X2B, 0XBB # subw " _(VALUE) "(%r11), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15W_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X2B, 0XBC, 0X24 # subw " _(VALUE) "(%r12), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15W_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X2B, 0XBD # subw " _(VALUE) "(%r13), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15W_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X2B, 0XBE # subw " _(VALUE) "(%r14), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15W_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X2B, 0XBF # subw " _(VALUE) "(%r15), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15W_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0XB8 # subw " _(VALUE) "(%eax), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15W_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0XBB # subw " _(VALUE) "(%ebx), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15W_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0XB9 # subw " _(VALUE) "(%ecx), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15W_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0XBA # subw " _(VALUE) "(%edx), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15W_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0XBF # subw " _(VALUE) "(%edi), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15W_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0XBE # subw " _(VALUE) "(%esi), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15W_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0XBD # subw " _(VALUE) "(%ebp), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15W_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X2B, 0XBC, 0X24 # subw " _(VALUE) "(%esp), %r15w")\
	CMT_ASM(".long " _(VALUE))

#define SUB_AX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0X80 # subw %ax, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0X83 # subw %ax, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0X81 # subw %ax, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0X82 # subw %ax, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0X87 # subw %ax, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0X86 # subw %ax, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0X85 # subw %ax, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0X84, 0X24 # subw %ax, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X29, 0X80 # subw %ax, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X29, 0X81 # subw %ax, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X29, 0X82 # subw %ax, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X29, 0X83 # subw %ax, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X29, 0X84, 0X24 # subw %ax, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X29, 0X85 # subw %ax, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X29, 0X86 # subw %ax, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X29, 0X87 # subw %ax, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X29, 0X80 # subw %ax, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X29, 0X83 # subw %ax, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X29, 0X81 # subw %ax, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X29, 0X82 # subw %ax, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X29, 0X87 # subw %ax, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X29, 0X86 # subw %ax, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X29, 0X85 # subw %ax, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_AX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X29, 0X84, 0X24 # subw %ax, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SUB_BX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0X98 # subw %bx, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0X9B # subw %bx, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0X99 # subw %bx, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0X9A # subw %bx, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0X9F # subw %bx, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0X9E # subw %bx, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0X9D # subw %bx, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0X9C, 0X24 # subw %bx, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X29, 0X98 # subw %bx, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X29, 0X99 # subw %bx, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X29, 0X9A # subw %bx, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X29, 0X9B # subw %bx, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X29, 0X9C, 0X24 # subw %bx, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X29, 0X9D # subw %bx, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X29, 0X9E # subw %bx, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X29, 0X9F # subw %bx, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X29, 0X98 # subw %bx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X29, 0X9B # subw %bx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X29, 0X99 # subw %bx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X29, 0X9A # subw %bx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X29, 0X9F # subw %bx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X29, 0X9E # subw %bx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X29, 0X9D # subw %bx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X29, 0X9C, 0X24 # subw %bx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SUB_CX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0X88 # subw %cx, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0X8B # subw %cx, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0X89 # subw %cx, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0X8A # subw %cx, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0X8F # subw %cx, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0X8E # subw %cx, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0X8D # subw %cx, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0X8C, 0X24 # subw %cx, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X29, 0X88 # subw %cx, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X29, 0X89 # subw %cx, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X29, 0X8A # subw %cx, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X29, 0X8B # subw %cx, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X29, 0X8C, 0X24 # subw %cx, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X29, 0X8D # subw %cx, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X29, 0X8E # subw %cx, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X29, 0X8F # subw %cx, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X29, 0X88 # subw %cx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X29, 0X8B # subw %cx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X29, 0X89 # subw %cx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X29, 0X8A # subw %cx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X29, 0X8F # subw %cx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X29, 0X8E # subw %cx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X29, 0X8D # subw %cx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_CX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X29, 0X8C, 0X24 # subw %cx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SUB_DX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0X90 # subw %dx, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0X93 # subw %dx, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0X91 # subw %dx, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0X92 # subw %dx, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0X97 # subw %dx, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0X96 # subw %dx, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0X95 # subw %dx, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0X94, 0X24 # subw %dx, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X29, 0X90 # subw %dx, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X29, 0X91 # subw %dx, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X29, 0X92 # subw %dx, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X29, 0X93 # subw %dx, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X29, 0X94, 0X24 # subw %dx, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X29, 0X95 # subw %dx, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X29, 0X96 # subw %dx, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X29, 0X97 # subw %dx, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X29, 0X90 # subw %dx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X29, 0X93 # subw %dx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X29, 0X91 # subw %dx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X29, 0X92 # subw %dx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X29, 0X97 # subw %dx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X29, 0X96 # subw %dx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X29, 0X95 # subw %dx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X29, 0X94, 0X24 # subw %dx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SUB_DI_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0XB8 # subw %di, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DI_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0XBB # subw %di, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DI_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0XB9 # subw %di, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DI_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0XBA # subw %di, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DI_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0XBF # subw %di, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DI_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0XBE # subw %di, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DI_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0XBD # subw %di, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DI_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0XBC, 0X24 # subw %di, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DI_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X29, 0XB8 # subw %di, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DI_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X29, 0XB9 # subw %di, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DI_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X29, 0XBA # subw %di, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DI_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X29, 0XBB # subw %di, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DI_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X29, 0XBC, 0X24 # subw %di, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DI_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X29, 0XBD # subw %di, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DI_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X29, 0XBE # subw %di, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DI_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X29, 0XBF # subw %di, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X29, 0XB8 # subw %di, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X29, 0XBB # subw %di, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X29, 0XB9 # subw %di, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X29, 0XBA # subw %di, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X29, 0XBF # subw %di, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X29, 0XBE # subw %di, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X29, 0XBD # subw %di, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_DI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X29, 0XBC, 0X24 # subw %di, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SUB_SI_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0XB0 # subw %si, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SI_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0XB3 # subw %si, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SI_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0XB1 # subw %si, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SI_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0XB2 # subw %si, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SI_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0XB7 # subw %si, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SI_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0XB6 # subw %si, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SI_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0XB5 # subw %si, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SI_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0XB4, 0X24 # subw %si, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SI_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X29, 0XB0 # subw %si, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SI_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X29, 0XB1 # subw %si, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SI_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X29, 0XB2 # subw %si, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SI_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X29, 0XB3 # subw %si, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SI_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X29, 0XB4, 0X24 # subw %si, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SI_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X29, 0XB5 # subw %si, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SI_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X29, 0XB6 # subw %si, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SI_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X29, 0XB7 # subw %si, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X29, 0XB0 # subw %si, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X29, 0XB3 # subw %si, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X29, 0XB1 # subw %si, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X29, 0XB2 # subw %si, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X29, 0XB7 # subw %si, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X29, 0XB6 # subw %si, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X29, 0XB5 # subw %si, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X29, 0XB4, 0X24 # subw %si, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SUB_BP_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0XA8 # subw %bp, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BP_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0XAB # subw %bp, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BP_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0XA9 # subw %bp, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BP_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0XAA # subw %bp, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BP_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0XAF # subw %bp, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BP_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0XAE # subw %bp, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BP_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0XAD # subw %bp, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BP_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0XAC, 0X24 # subw %bp, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BP_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X29, 0XA8 # subw %bp, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BP_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X29, 0XA9 # subw %bp, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BP_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X29, 0XAA # subw %bp, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BP_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X29, 0XAB # subw %bp, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BP_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X29, 0XAC, 0X24 # subw %bp, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BP_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X29, 0XAD # subw %bp, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BP_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X29, 0XAE # subw %bp, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BP_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X29, 0XAF # subw %bp, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X29, 0XA8 # subw %bp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X29, 0XAB # subw %bp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X29, 0XA9 # subw %bp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X29, 0XAA # subw %bp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X29, 0XAF # subw %bp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X29, 0XAE # subw %bp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X29, 0XAD # subw %bp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_BP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X29, 0XAC, 0X24 # subw %bp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SUB_SP_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0XA0 # subw %sp, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SP_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0XA3 # subw %sp, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SP_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0XA1 # subw %sp, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SP_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0XA2 # subw %sp, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SP_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0XA7 # subw %sp, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SP_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0XA6 # subw %sp, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SP_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0XA5 # subw %sp, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SP_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X29, 0XA4, 0X24 # subw %sp, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SP_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X29, 0XA0 # subw %sp, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SP_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X29, 0XA1 # subw %sp, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SP_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X29, 0XA2 # subw %sp, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SP_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X29, 0XA3 # subw %sp, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SP_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X29, 0XA4, 0X24 # subw %sp, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SP_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X29, 0XA5 # subw %sp, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SP_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X29, 0XA6 # subw %sp, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SP_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X29, 0XA7 # subw %sp, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X29, 0XA0 # subw %sp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X29, 0XA3 # subw %sp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X29, 0XA1 # subw %sp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X29, 0XA2 # subw %sp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X29, 0XA7 # subw %sp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X29, 0XA6 # subw %sp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X29, 0XA5 # subw %sp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_SP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X29, 0XA4, 0X24 # subw %sp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SUB_R8W_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X29, 0X80 # subw %r8w, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8W_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X29, 0X83 # subw %r8w, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8W_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X29, 0X81 # subw %r8w, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8W_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X29, 0X82 # subw %r8w, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8W_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X29, 0X87 # subw %r8w, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8W_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X29, 0X86 # subw %r8w, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8W_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X29, 0X85 # subw %r8w, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8W_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X29, 0X84, 0X24 # subw %r8w, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8W_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X29, 0X80 # subw %r8w, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8W_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X29, 0X81 # subw %r8w, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8W_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X29, 0X82 # subw %r8w, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8W_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X29, 0X83 # subw %r8w, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8W_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X29, 0X84, 0X24 # subw %r8w, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8W_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X29, 0X85 # subw %r8w, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8W_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X29, 0X86 # subw %r8w, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8W_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X29, 0X87 # subw %r8w, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8W_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0X80 # subw %r8w, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8W_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0X83 # subw %r8w, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8W_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0X81 # subw %r8w, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8W_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0X82 # subw %r8w, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8W_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0X87 # subw %r8w, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8W_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0X86 # subw %r8w, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8W_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0X85 # subw %r8w, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8W_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0X84, 0X24 # subw %r8w, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SUB_R9W_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X29, 0X88 # subw %r9w, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9W_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X29, 0X8B # subw %r9w, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9W_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X29, 0X89 # subw %r9w, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9W_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X29, 0X8A # subw %r9w, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9W_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X29, 0X8F # subw %r9w, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9W_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X29, 0X8E # subw %r9w, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9W_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X29, 0X8D # subw %r9w, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9W_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X29, 0X8C, 0X24 # subw %r9w, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9W_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X29, 0X88 # subw %r9w, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9W_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X29, 0X89 # subw %r9w, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9W_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X29, 0X8A # subw %r9w, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9W_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X29, 0X8B # subw %r9w, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9W_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X29, 0X8C, 0X24 # subw %r9w, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9W_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X29, 0X8D # subw %r9w, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9W_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X29, 0X8E # subw %r9w, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9W_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X29, 0X8F # subw %r9w, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9W_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0X88 # subw %r9w, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9W_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0X8B # subw %r9w, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9W_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0X89 # subw %r9w, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9W_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0X8A # subw %r9w, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9W_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0X8F # subw %r9w, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9W_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0X8E # subw %r9w, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9W_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0X8D # subw %r9w, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9W_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0X8C, 0X24 # subw %r9w, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SUB_R10W_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X29, 0X90 # subw %r10w, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10W_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X29, 0X93 # subw %r10w, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10W_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X29, 0X91 # subw %r10w, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10W_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X29, 0X92 # subw %r10w, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10W_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X29, 0X97 # subw %r10w, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10W_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X29, 0X96 # subw %r10w, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10W_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X29, 0X95 # subw %r10w, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10W_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X29, 0X94, 0X24 # subw %r10w, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10W_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X29, 0X90 # subw %r10w, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10W_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X29, 0X91 # subw %r10w, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10W_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X29, 0X92 # subw %r10w, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10W_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X29, 0X93 # subw %r10w, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10W_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X29, 0X94, 0X24 # subw %r10w, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10W_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X29, 0X95 # subw %r10w, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10W_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X29, 0X96 # subw %r10w, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10W_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X29, 0X97 # subw %r10w, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10W_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0X90 # subw %r10w, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10W_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0X93 # subw %r10w, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10W_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0X91 # subw %r10w, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10W_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0X92 # subw %r10w, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10W_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0X97 # subw %r10w, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10W_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0X96 # subw %r10w, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10W_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0X95 # subw %r10w, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10W_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0X94, 0X24 # subw %r10w, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SUB_R11W_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X29, 0X98 # subw %r11w, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11W_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X29, 0X9B # subw %r11w, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11W_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X29, 0X99 # subw %r11w, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11W_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X29, 0X9A # subw %r11w, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11W_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X29, 0X9F # subw %r11w, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11W_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X29, 0X9E # subw %r11w, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11W_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X29, 0X9D # subw %r11w, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11W_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X29, 0X9C, 0X24 # subw %r11w, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11W_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X29, 0X98 # subw %r11w, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11W_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X29, 0X99 # subw %r11w, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11W_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X29, 0X9A # subw %r11w, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11W_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X29, 0X9B # subw %r11w, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11W_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X29, 0X9C, 0X24 # subw %r11w, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11W_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X29, 0X9D # subw %r11w, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11W_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X29, 0X9E # subw %r11w, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11W_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X29, 0X9F # subw %r11w, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11W_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0X98 # subw %r11w, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11W_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0X9B # subw %r11w, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11W_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0X99 # subw %r11w, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11W_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0X9A # subw %r11w, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11W_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0X9F # subw %r11w, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11W_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0X9E # subw %r11w, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11W_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0X9D # subw %r11w, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11W_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0X9C, 0X24 # subw %r11w, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SUB_R12W_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X29, 0XA0 # subw %r12w, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12W_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X29, 0XA3 # subw %r12w, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12W_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X29, 0XA1 # subw %r12w, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12W_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X29, 0XA2 # subw %r12w, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12W_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X29, 0XA7 # subw %r12w, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12W_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X29, 0XA6 # subw %r12w, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12W_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X29, 0XA5 # subw %r12w, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12W_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X29, 0XA4, 0X24 # subw %r12w, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12W_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X29, 0XA0 # subw %r12w, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12W_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X29, 0XA1 # subw %r12w, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12W_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X29, 0XA2 # subw %r12w, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12W_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X29, 0XA3 # subw %r12w, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12W_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X29, 0XA4, 0X24 # subw %r12w, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12W_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X29, 0XA5 # subw %r12w, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12W_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X29, 0XA6 # subw %r12w, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12W_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X29, 0XA7 # subw %r12w, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12W_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0XA0 # subw %r12w, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12W_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0XA3 # subw %r12w, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12W_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0XA1 # subw %r12w, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12W_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0XA2 # subw %r12w, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12W_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0XA7 # subw %r12w, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12W_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0XA6 # subw %r12w, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12W_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0XA5 # subw %r12w, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12W_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0XA4, 0X24 # subw %r12w, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SUB_R13W_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X29, 0XA8 # subw %r13w, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13W_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X29, 0XAB # subw %r13w, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13W_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X29, 0XA9 # subw %r13w, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13W_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X29, 0XAA # subw %r13w, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13W_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X29, 0XAF # subw %r13w, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13W_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X29, 0XAE # subw %r13w, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13W_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X29, 0XAD # subw %r13w, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13W_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X29, 0XAC, 0X24 # subw %r13w, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13W_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X29, 0XA8 # subw %r13w, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13W_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X29, 0XA9 # subw %r13w, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13W_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X29, 0XAA # subw %r13w, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13W_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X29, 0XAB # subw %r13w, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13W_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X29, 0XAC, 0X24 # subw %r13w, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13W_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X29, 0XAD # subw %r13w, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13W_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X29, 0XAE # subw %r13w, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13W_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X29, 0XAF # subw %r13w, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13W_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0XA8 # subw %r13w, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13W_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0XAB # subw %r13w, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13W_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0XA9 # subw %r13w, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13W_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0XAA # subw %r13w, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13W_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0XAF # subw %r13w, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13W_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0XAE # subw %r13w, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13W_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0XAD # subw %r13w, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13W_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0XAC, 0X24 # subw %r13w, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SUB_R14W_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X29, 0XB0 # subw %r14w, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14W_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X29, 0XB3 # subw %r14w, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14W_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X29, 0XB1 # subw %r14w, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14W_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X29, 0XB2 # subw %r14w, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14W_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X29, 0XB7 # subw %r14w, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14W_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X29, 0XB6 # subw %r14w, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14W_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X29, 0XB5 # subw %r14w, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14W_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X29, 0XB4, 0X24 # subw %r14w, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14W_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X29, 0XB0 # subw %r14w, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14W_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X29, 0XB1 # subw %r14w, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14W_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X29, 0XB2 # subw %r14w, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14W_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X29, 0XB3 # subw %r14w, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14W_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X29, 0XB4, 0X24 # subw %r14w, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14W_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X29, 0XB5 # subw %r14w, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14W_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X29, 0XB6 # subw %r14w, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14W_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X29, 0XB7 # subw %r14w, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14W_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0XB0 # subw %r14w, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14W_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0XB3 # subw %r14w, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14W_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0XB1 # subw %r14w, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14W_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0XB2 # subw %r14w, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14W_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0XB7 # subw %r14w, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14W_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0XB6 # subw %r14w, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14W_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0XB5 # subw %r14w, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14W_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0XB4, 0X24 # subw %r14w, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SUB_R15W_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X29, 0XB8 # subw %r15w, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15W_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X29, 0XBB # subw %r15w, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15W_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X29, 0XB9 # subw %r15w, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15W_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X29, 0XBA # subw %r15w, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15W_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X29, 0XBF # subw %r15w, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15W_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X29, 0XBE # subw %r15w, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15W_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X29, 0XBD # subw %r15w, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15W_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X29, 0XBC, 0X24 # subw %r15w, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15W_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X29, 0XB8 # subw %r15w, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15W_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X29, 0XB9 # subw %r15w, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15W_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X29, 0XBA # subw %r15w, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15W_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X29, 0XBB # subw %r15w, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15W_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X29, 0XBC, 0X24 # subw %r15w, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15W_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X29, 0XBD # subw %r15w, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15W_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X29, 0XBE # subw %r15w, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15W_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X29, 0XBF # subw %r15w, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15W_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0XB8 # subw %r15w, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15W_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0XBB # subw %r15w, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15W_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0XB9 # subw %r15w, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15W_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0XBA # subw %r15w, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15W_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0XBF # subw %r15w, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15W_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0XBE # subw %r15w, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15W_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0XBD # subw %r15w, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15W_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X29, 0XBC, 0X24 # subw %r15w, " _(VALUE) "(%esp)")\
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
