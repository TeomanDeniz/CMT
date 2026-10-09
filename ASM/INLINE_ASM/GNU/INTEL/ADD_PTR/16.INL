#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************** [v] 8-BIT MEMORY [v] ************************** */
#ifdef __SYSTEM_16_BIT__
#define ADD_AL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X02, 0X06 # addb (" _(VALUE) "), %al")\
	CMT_ASM(".short " _(VALUE))
#define ADD_BL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X02, 0X1E # addb (" _(VALUE) "), %bl")\
	CMT_ASM(".short " _(VALUE))
#define ADD_CL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X02, 0X0E # addb (" _(VALUE) "), %cl")\
	CMT_ASM(".short " _(VALUE))
#define ADD_DL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X02, 0X16 # addb (" _(VALUE) "), %dl")\
	CMT_ASM(".short " _(VALUE))

#define ADD_AL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X00, 0X06 # addb %al, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define ADD_BL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X00, 0X1E # addb %bl, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define ADD_CL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X00, 0X0E # addb %cl, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define ADD_DL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X00, 0X16 # addb %dl, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))

#define ADD_AL_FROM_PTR_BX CMT_ASM(".byte 0X02, 0X07 # addb (%bx), %al")
#define ADD_AL_FROM_PTR_BP CMT_ASM(".byte 0X02, 0X46, 0X00 # addb (%bp), %al")
#define ADD_AL_FROM_PTR_SI CMT_ASM(".byte 0X02, 0X04 # addb (%si), %al")
#define ADD_AL_FROM_PTR_DI CMT_ASM(".byte 0X02, 0X05 # addb (%di), %al")

#define ADD_BL_FROM_PTR_BX CMT_ASM(".byte 0X02, 0X1F # addb (%bx), %bl")
#define ADD_BL_FROM_PTR_BP CMT_ASM(".byte 0X02, 0X5E, 0X00 # addb (%bp), %bl")
#define ADD_BL_FROM_PTR_SI CMT_ASM(".byte 0X02, 0X1C # addb (%si), %bl")
#define ADD_BL_FROM_PTR_DI CMT_ASM(".byte 0X02, 0X1D # addb (%di), %bl")

#define ADD_CL_FROM_PTR_BX CMT_ASM(".byte 0X02, 0X0F # addb (%bx), %cl")
#define ADD_CL_FROM_PTR_BP CMT_ASM(".byte 0X02, 0X4E, 0X00 # addb (%bp), %cl")
#define ADD_CL_FROM_PTR_SI CMT_ASM(".byte 0X02, 0X0C # addb (%si), %cl")
#define ADD_CL_FROM_PTR_DI CMT_ASM(".byte 0X02, 0X0D # addb (%di), %cl")

#define ADD_DL_FROM_PTR_BX CMT_ASM(".byte 0X02, 0X17 # addb (%bx), %dl")
#define ADD_DL_FROM_PTR_BP CMT_ASM(".byte 0X02, 0X56, 0X00 # addb (%bp), %dl")
#define ADD_DL_FROM_PTR_SI CMT_ASM(".byte 0X02, 0X14 # addb (%si), %dl")
#define ADD_DL_FROM_PTR_DI CMT_ASM(".byte 0X02, 0X15 # addb (%di), %dl")

#define ADD_AL_TO_PTR_BX CMT_ASM(".byte 0X00, 0X07 # addb %al, (%bx)")
#define ADD_AL_TO_PTR_BP CMT_ASM(".byte 0X00, 0X46, 0X00 # addb %al, (%bp)")
#define ADD_AL_TO_PTR_SI CMT_ASM(".byte 0X00, 0X04 # addb %al, (%si)")
#define ADD_AL_TO_PTR_DI CMT_ASM(".byte 0X00, 0X05 # addb %al, (%di)")

#define ADD_BL_TO_PTR_BX CMT_ASM(".byte 0X00, 0X1F # addb %bl, (%bx)")
#define ADD_BL_TO_PTR_BP CMT_ASM(".byte 0X00, 0X5E, 0X00 # addb %bl, (%bp)")
#define ADD_BL_TO_PTR_SI CMT_ASM(".byte 0X00, 0X1C # addb %bl, (%si)")
#define ADD_BL_TO_PTR_DI CMT_ASM(".byte 0X00, 0X1D # addb %bl, (%di)")

#define ADD_CL_TO_PTR_BX CMT_ASM(".byte 0X00, 0X0F # addb %cl, (%bx)")
#define ADD_CL_TO_PTR_BP CMT_ASM(".byte 0X00, 0X4E, 0X00 # addb %cl, (%bp)")
#define ADD_CL_TO_PTR_SI CMT_ASM(".byte 0X00, 0X0C # addb %cl, (%si)")
#define ADD_CL_TO_PTR_DI CMT_ASM(".byte 0X00, 0X0D # addb %cl, (%di)")

#define ADD_DL_TO_PTR_BX CMT_ASM(".byte 0X00, 0X17 # addb %dl, (%bx)")
#define ADD_DL_TO_PTR_BP CMT_ASM(".byte 0X00, 0X56, 0X00 # addb %dl, (%bp)")
#define ADD_DL_TO_PTR_SI CMT_ASM(".byte 0X00, 0X14 # addb %dl, (%si)")
#define ADD_DL_TO_PTR_DI CMT_ASM(".byte 0X00, 0X15 # addb %dl, (%di)")

#define ADD_AL_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X02, 0X87 # addb " _(VALUE) "(%bx), %al")\
	CMT_ASM(".short " _(VALUE))
#define ADD_AL_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X02, 0X86 # addb " _(VALUE) "(%bp), %al")\
	CMT_ASM(".short " _(VALUE))
#define ADD_AL_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X02, 0X84 # addb " _(VALUE) "(%si), %al")\
	CMT_ASM(".short " _(VALUE))
#define ADD_AL_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X02, 0X85 # addb " _(VALUE) "(%di), %al")\
	CMT_ASM(".short " _(VALUE))

#define ADD_BL_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X02, 0X9F # addb " _(VALUE) "(%bx), %bl")\
	CMT_ASM(".short " _(VALUE))
#define ADD_BL_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X02, 0X9E # addb " _(VALUE) "(%bp), %bl")\
	CMT_ASM(".short " _(VALUE))
#define ADD_BL_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X02, 0X9C # addb " _(VALUE) "(%si), %bl")\
	CMT_ASM(".short " _(VALUE))
#define ADD_BL_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X02, 0X9D # addb " _(VALUE) "(%di), %bl")\
	CMT_ASM(".short " _(VALUE))

#define ADD_CL_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X02, 0X8F # addb " _(VALUE) "(%bx), %cl")\
	CMT_ASM(".short " _(VALUE))
#define ADD_CL_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X02, 0X8E # addb " _(VALUE) "(%bp), %cl")\
	CMT_ASM(".short " _(VALUE))
#define ADD_CL_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X02, 0X8C # addb " _(VALUE) "(%si), %cl")\
	CMT_ASM(".short " _(VALUE))
#define ADD_CL_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X02, 0X8D # addb " _(VALUE) "(%di), %cl")\
	CMT_ASM(".short " _(VALUE))

#define ADD_DL_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X02, 0X97 # addb " _(VALUE) "(%bx), %dl")\
	CMT_ASM(".short " _(VALUE))
#define ADD_DL_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X02, 0X96 # addb " _(VALUE) "(%bp), %dl")\
	CMT_ASM(".short " _(VALUE))
#define ADD_DL_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X02, 0X94 # addb " _(VALUE) "(%si), %dl")\
	CMT_ASM(".short " _(VALUE))
#define ADD_DL_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X02, 0X95 # addb " _(VALUE) "(%di), %dl")\
	CMT_ASM(".short " _(VALUE))

#define ADD_AL_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X00, 0X87 # addb %al, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define ADD_AL_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X00, 0X86 # addb %al, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define ADD_AL_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X00, 0X84 # addb %al, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define ADD_AL_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X00, 0X85 # addb %al, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define ADD_BL_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X00, 0X9F # addb %bl, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define ADD_BL_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X00, 0X9E # addb %bl, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define ADD_BL_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X00, 0X9C # addb %bl, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define ADD_BL_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X00, 0X9D # addb %bl, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define ADD_CL_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X00, 0X8F # addb %cl, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define ADD_CL_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X00, 0X8E # addb %cl, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define ADD_CL_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X00, 0X8C # addb %cl, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define ADD_CL_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X00, 0X8D # addb %cl, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define ADD_DL_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X00, 0X97 # addb %dl, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define ADD_DL_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X00, 0X96 # addb %dl, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define ADD_DL_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X00, 0X94 # addb %dl, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define ADD_DL_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X00, 0X95 # addb %dl, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))
#endif /* __SYSTEM_16_BIT__ */

#ifdef __SYSTEM_32_BIT__
#define ADD_AL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X02, 0X05 # addb (" _(VALUE) "), %al")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X02, 0X1D # addb (" _(VALUE) "), %bl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X02, 0X0D # addb (" _(VALUE) "), %cl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X02, 0X15 # addb (" _(VALUE) "), %dl")\
	CMT_ASM(".long " _(VALUE))

#define ADD_AL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X00, 0X05 # addb %al, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X00, 0X1D # addb %bl, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X00, 0X0D # addb %cl, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X00, 0X15 # addb %dl, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))

#define ADD_AL_FROM_PTR_EAX CMT_ASM(".byte 0X02, 0X00 # addb (%eax), %al")
#define ADD_AL_FROM_PTR_EBX CMT_ASM(".byte 0X02, 0X03 # addb (%ebx), %al")
#define ADD_AL_FROM_PTR_ECX CMT_ASM(".byte 0X02, 0X01 # addb (%ecx), %al")
#define ADD_AL_FROM_PTR_EDX CMT_ASM(".byte 0X02, 0X02 # addb (%edx), %al")
#define ADD_AL_FROM_PTR_EDI CMT_ASM(".byte 0X02, 0X07 # addb (%edi), %al")
#define ADD_AL_FROM_PTR_ESI CMT_ASM(".byte 0X02, 0X06 # addb (%esi), %al")
#define ADD_AL_FROM_PTR_EBP CMT_ASM(".byte 0X02, 0X45, 0X00 # addb (%ebp), %al")
#define ADD_AL_FROM_PTR_ESP CMT_ASM(".byte 0X02, 0X04, 0X24 # addb (%esp), %al")
#define ADD_AL_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X02, 0X07 # addb (%bx), %al")
#define ADD_AL_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X02, 0X46, 0X00 # addb (%bp), %al")
#define ADD_AL_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X02, 0X04 # addb (%si), %al")
#define ADD_AL_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X02, 0X05 # addb (%di), %al")

#define ADD_BL_FROM_PTR_EAX CMT_ASM(".byte 0X02, 0X18 # addb (%eax), %bl")
#define ADD_BL_FROM_PTR_EBX CMT_ASM(".byte 0X02, 0X1B # addb (%ebx), %bl")
#define ADD_BL_FROM_PTR_ECX CMT_ASM(".byte 0X02, 0X19 # addb (%ecx), %bl")
#define ADD_BL_FROM_PTR_EDX CMT_ASM(".byte 0X02, 0X1A # addb (%edx), %bl")
#define ADD_BL_FROM_PTR_EDI CMT_ASM(".byte 0X02, 0X1F # addb (%edi), %bl")
#define ADD_BL_FROM_PTR_ESI CMT_ASM(".byte 0X02, 0X1E # addb (%esi), %bl")
#define ADD_BL_FROM_PTR_EBP CMT_ASM(".byte 0X02, 0X5D, 0X00 # addb (%ebp), %bl")
#define ADD_BL_FROM_PTR_ESP CMT_ASM(".byte 0X02, 0X1C, 0X24 # addb (%esp), %bl")
#define ADD_BL_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X02, 0X1F # addb (%bx), %bl")
#define ADD_BL_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X02, 0X5E, 0X00 # addb (%bp), %bl")
#define ADD_BL_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X02, 0X1C # addb (%si), %bl")
#define ADD_BL_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X02, 0X1D # addb (%di), %bl")

#define ADD_CL_FROM_PTR_EAX CMT_ASM(".byte 0X02, 0X08 # addb (%eax), %cl")
#define ADD_CL_FROM_PTR_EBX CMT_ASM(".byte 0X02, 0X0B # addb (%ebx), %cl")
#define ADD_CL_FROM_PTR_ECX CMT_ASM(".byte 0X02, 0X09 # addb (%ecx), %cl")
#define ADD_CL_FROM_PTR_EDX CMT_ASM(".byte 0X02, 0X0A # addb (%edx), %cl")
#define ADD_CL_FROM_PTR_EDI CMT_ASM(".byte 0X02, 0X0F # addb (%edi), %cl")
#define ADD_CL_FROM_PTR_ESI CMT_ASM(".byte 0X02, 0X0E # addb (%esi), %cl")
#define ADD_CL_FROM_PTR_EBP CMT_ASM(".byte 0X02, 0X4D, 0X00 # addb (%ebp), %cl")
#define ADD_CL_FROM_PTR_ESP CMT_ASM(".byte 0X02, 0X0C, 0X24 # addb (%esp), %cl")
#define ADD_CL_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X02, 0X0F # addb (%bx), %cl")
#define ADD_CL_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X02, 0X4E, 0X00 # addb (%bp), %cl")
#define ADD_CL_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X02, 0X0C # addb (%si), %cl")
#define ADD_CL_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X02, 0X0D # addb (%di), %cl")

#define ADD_DL_FROM_PTR_EAX CMT_ASM(".byte 0X02, 0X10 # addb (%eax), %dl")
#define ADD_DL_FROM_PTR_EBX CMT_ASM(".byte 0X02, 0X13 # addb (%ebx), %dl")
#define ADD_DL_FROM_PTR_ECX CMT_ASM(".byte 0X02, 0X11 # addb (%ecx), %dl")
#define ADD_DL_FROM_PTR_EDX CMT_ASM(".byte 0X02, 0X12 # addb (%edx), %dl")
#define ADD_DL_FROM_PTR_EDI CMT_ASM(".byte 0X02, 0X17 # addb (%edi), %dl")
#define ADD_DL_FROM_PTR_ESI CMT_ASM(".byte 0X02, 0X16 # addb (%esi), %dl")
#define ADD_DL_FROM_PTR_EBP CMT_ASM(".byte 0X02, 0X55, 0X00 # addb (%ebp), %dl")
#define ADD_DL_FROM_PTR_ESP CMT_ASM(".byte 0X02, 0X14, 0X24 # addb (%esp), %dl")
#define ADD_DL_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X02, 0X17 # addb (%bx), %dl")
#define ADD_DL_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X02, 0X56, 0X00 # addb (%bp), %dl")
#define ADD_DL_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X02, 0X14 # addb (%si), %dl")
#define ADD_DL_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X02, 0X15 # addb (%di), %dl")

#define ADD_AL_TO_PTR_EAX CMT_ASM(".byte 0X00, 0X00 # addb %al, (%eax)")
#define ADD_AL_TO_PTR_EBX CMT_ASM(".byte 0X00, 0X03 # addb %al, (%ebx)")
#define ADD_AL_TO_PTR_ECX CMT_ASM(".byte 0X00, 0X01 # addb %al, (%ecx)")
#define ADD_AL_TO_PTR_EDX CMT_ASM(".byte 0X00, 0X02 # addb %al, (%edx)")
#define ADD_AL_TO_PTR_EDI CMT_ASM(".byte 0X00, 0X07 # addb %al, (%edi)")
#define ADD_AL_TO_PTR_ESI CMT_ASM(".byte 0X00, 0X06 # addb %al, (%esi)")
#define ADD_AL_TO_PTR_EBP CMT_ASM(".byte 0X00, 0X45, 0X00 # addb %al, (%ebp)")
#define ADD_AL_TO_PTR_ESP CMT_ASM(".byte 0X00, 0X04, 0X24 # addb %al, (%esp)")
#define ADD_AL_TO_PTR_BX CMT_ASM(".byte 0X67, 0X00, 0X07 # addb %al, (%bx)")
#define ADD_AL_TO_PTR_BP CMT_ASM(".byte 0X67, 0X00, 0X46, 0X00 # addb %al, (%bp)")
#define ADD_AL_TO_PTR_SI CMT_ASM(".byte 0X67, 0X00, 0X04 # addb %al, (%si)")
#define ADD_AL_TO_PTR_DI CMT_ASM(".byte 0X67, 0X00, 0X05 # addb %al, (%di)")

#define ADD_BL_TO_PTR_EAX CMT_ASM(".byte 0X00, 0X18 # addb %bl, (%eax)")
#define ADD_BL_TO_PTR_EBX CMT_ASM(".byte 0X00, 0X1B # addb %bl, (%ebx)")
#define ADD_BL_TO_PTR_ECX CMT_ASM(".byte 0X00, 0X19 # addb %bl, (%ecx)")
#define ADD_BL_TO_PTR_EDX CMT_ASM(".byte 0X00, 0X1A # addb %bl, (%edx)")
#define ADD_BL_TO_PTR_EDI CMT_ASM(".byte 0X00, 0X1F # addb %bl, (%edi)")
#define ADD_BL_TO_PTR_ESI CMT_ASM(".byte 0X00, 0X1E # addb %bl, (%esi)")
#define ADD_BL_TO_PTR_EBP CMT_ASM(".byte 0X00, 0X5D, 0X00 # addb %bl, (%ebp)")
#define ADD_BL_TO_PTR_ESP CMT_ASM(".byte 0X00, 0X1C, 0X24 # addb %bl, (%esp)")
#define ADD_BL_TO_PTR_BX CMT_ASM(".byte 0X67, 0X00, 0X1F # addb %bl, (%bx)")
#define ADD_BL_TO_PTR_BP CMT_ASM(".byte 0X67, 0X00, 0X5E, 0X00 # addb %bl, (%bp)")
#define ADD_BL_TO_PTR_SI CMT_ASM(".byte 0X67, 0X00, 0X1C # addb %bl, (%si)")
#define ADD_BL_TO_PTR_DI CMT_ASM(".byte 0X67, 0X00, 0X1D # addb %bl, (%di)")

#define ADD_CL_TO_PTR_EAX CMT_ASM(".byte 0X00, 0X08 # addb %cl, (%eax)")
#define ADD_CL_TO_PTR_EBX CMT_ASM(".byte 0X00, 0X0B # addb %cl, (%ebx)")
#define ADD_CL_TO_PTR_ECX CMT_ASM(".byte 0X00, 0X09 # addb %cl, (%ecx)")
#define ADD_CL_TO_PTR_EDX CMT_ASM(".byte 0X00, 0X0A # addb %cl, (%edx)")
#define ADD_CL_TO_PTR_EDI CMT_ASM(".byte 0X00, 0X0F # addb %cl, (%edi)")
#define ADD_CL_TO_PTR_ESI CMT_ASM(".byte 0X00, 0X0E # addb %cl, (%esi)")
#define ADD_CL_TO_PTR_EBP CMT_ASM(".byte 0X00, 0X4D, 0X00 # addb %cl, (%ebp)")
#define ADD_CL_TO_PTR_ESP CMT_ASM(".byte 0X00, 0X0C, 0X24 # addb %cl, (%esp)")
#define ADD_CL_TO_PTR_BX CMT_ASM(".byte 0X67, 0X00, 0X0F # addb %cl, (%bx)")
#define ADD_CL_TO_PTR_BP CMT_ASM(".byte 0X67, 0X00, 0X4E, 0X00 # addb %cl, (%bp)")
#define ADD_CL_TO_PTR_SI CMT_ASM(".byte 0X67, 0X00, 0X0C # addb %cl, (%si)")
#define ADD_CL_TO_PTR_DI CMT_ASM(".byte 0X67, 0X00, 0X0D # addb %cl, (%di)")

#define ADD_DL_TO_PTR_EAX CMT_ASM(".byte 0X00, 0X10 # addb %dl, (%eax)")
#define ADD_DL_TO_PTR_EBX CMT_ASM(".byte 0X00, 0X13 # addb %dl, (%ebx)")
#define ADD_DL_TO_PTR_ECX CMT_ASM(".byte 0X00, 0X11 # addb %dl, (%ecx)")
#define ADD_DL_TO_PTR_EDX CMT_ASM(".byte 0X00, 0X12 # addb %dl, (%edx)")
#define ADD_DL_TO_PTR_EDI CMT_ASM(".byte 0X00, 0X17 # addb %dl, (%edi)")
#define ADD_DL_TO_PTR_ESI CMT_ASM(".byte 0X00, 0X16 # addb %dl, (%esi)")
#define ADD_DL_TO_PTR_EBP CMT_ASM(".byte 0X00, 0X55, 0X00 # addb %dl, (%ebp)")
#define ADD_DL_TO_PTR_ESP CMT_ASM(".byte 0X00, 0X14, 0X24 # addb %dl, (%esp)")
#define ADD_DL_TO_PTR_BX CMT_ASM(".byte 0X67, 0X00, 0X17 # addb %dl, (%bx)")
#define ADD_DL_TO_PTR_BP CMT_ASM(".byte 0X67, 0X00, 0X56, 0X00 # addb %dl, (%bp)")
#define ADD_DL_TO_PTR_SI CMT_ASM(".byte 0X67, 0X00, 0X14 # addb %dl, (%si)")
#define ADD_DL_TO_PTR_DI CMT_ASM(".byte 0X67, 0X00, 0X15 # addb %dl, (%di)")

#define ADD_AL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X02, 0X80 # addb " _(VALUE) "(%eax), %al")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X02, 0X83 # addb " _(VALUE) "(%ebx), %al")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X02, 0X81 # addb " _(VALUE) "(%ecx), %al")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X02, 0X82 # addb " _(VALUE) "(%edx), %al")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X02, 0X87 # addb " _(VALUE) "(%edi), %al")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X02, 0X86 # addb " _(VALUE) "(%esi), %al")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X02, 0X85 # addb " _(VALUE) "(%ebp), %al")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X02, 0X84, 0X24 # addb " _(VALUE) "(%esp), %al")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AL_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X02, 0X87 # addb " _(VALUE) "(%bx), %al")\
	CMT_ASM(".short " _(VALUE))
#define ADD_AL_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X02, 0X86 # addb " _(VALUE) "(%bp), %al")\
	CMT_ASM(".short " _(VALUE))
#define ADD_AL_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X02, 0X84 # addb " _(VALUE) "(%si), %al")\
	CMT_ASM(".short " _(VALUE))
#define ADD_AL_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X02, 0X85 # addb " _(VALUE) "(%di), %al")\
	CMT_ASM(".short " _(VALUE))

#define ADD_BL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X02, 0X98 # addb " _(VALUE) "(%eax), %bl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X02, 0X9B # addb " _(VALUE) "(%ebx), %bl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X02, 0X99 # addb " _(VALUE) "(%ecx), %bl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X02, 0X9A # addb " _(VALUE) "(%edx), %bl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X02, 0X9F # addb " _(VALUE) "(%edi), %bl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X02, 0X9E # addb " _(VALUE) "(%esi), %bl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X02, 0X9D # addb " _(VALUE) "(%ebp), %bl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X02, 0X9C, 0X24 # addb " _(VALUE) "(%esp), %bl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BL_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X02, 0X9F # addb " _(VALUE) "(%bx), %bl")\
	CMT_ASM(".short " _(VALUE))
#define ADD_BL_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X02, 0X9E # addb " _(VALUE) "(%bp), %bl")\
	CMT_ASM(".short " _(VALUE))
#define ADD_BL_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X02, 0X9C # addb " _(VALUE) "(%si), %bl")\
	CMT_ASM(".short " _(VALUE))
#define ADD_BL_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X02, 0X9D # addb " _(VALUE) "(%di), %bl")\
	CMT_ASM(".short " _(VALUE))

#define ADD_CL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X02, 0X88 # addb " _(VALUE) "(%eax), %cl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X02, 0X8B # addb " _(VALUE) "(%ebx), %cl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X02, 0X89 # addb " _(VALUE) "(%ecx), %cl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X02, 0X8A # addb " _(VALUE) "(%edx), %cl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X02, 0X8F # addb " _(VALUE) "(%edi), %cl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X02, 0X8E # addb " _(VALUE) "(%esi), %cl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X02, 0X8D # addb " _(VALUE) "(%ebp), %cl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X02, 0X8C, 0X24 # addb " _(VALUE) "(%esp), %cl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CL_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X02, 0X8F # addb " _(VALUE) "(%bx), %cl")\
	CMT_ASM(".short " _(VALUE))
#define ADD_CL_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X02, 0X8E # addb " _(VALUE) "(%bp), %cl")\
	CMT_ASM(".short " _(VALUE))
#define ADD_CL_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X02, 0X8C # addb " _(VALUE) "(%si), %cl")\
	CMT_ASM(".short " _(VALUE))
#define ADD_CL_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X02, 0X8D # addb " _(VALUE) "(%di), %cl")\
	CMT_ASM(".short " _(VALUE))

#define ADD_DL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X02, 0X90 # addb " _(VALUE) "(%eax), %dl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X02, 0X93 # addb " _(VALUE) "(%ebx), %dl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X02, 0X91 # addb " _(VALUE) "(%ecx), %dl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X02, 0X92 # addb " _(VALUE) "(%edx), %dl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X02, 0X97 # addb " _(VALUE) "(%edi), %dl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X02, 0X96 # addb " _(VALUE) "(%esi), %dl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X02, 0X95 # addb " _(VALUE) "(%ebp), %dl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X02, 0X94, 0X24 # addb " _(VALUE) "(%esp), %dl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DL_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X02, 0X97 # addb " _(VALUE) "(%bx), %dl")\
	CMT_ASM(".short " _(VALUE))
#define ADD_DL_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X02, 0X96 # addb " _(VALUE) "(%bp), %dl")\
	CMT_ASM(".short " _(VALUE))
#define ADD_DL_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X02, 0X94 # addb " _(VALUE) "(%si), %dl")\
	CMT_ASM(".short " _(VALUE))
#define ADD_DL_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X02, 0X95 # addb " _(VALUE) "(%di), %dl")\
	CMT_ASM(".short " _(VALUE))

#define ADD_AL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X00, 0X80 # addb %al, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X00, 0X83 # addb %al, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X00, 0X81 # addb %al, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X00, 0X82 # addb %al, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X00, 0X87 # addb %al, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X00, 0X86 # addb %al, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X00, 0X85 # addb %al, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X00, 0X84, 0X24 # addb %al, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AL_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X00, 0X87 # addb %al, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define ADD_AL_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X00, 0X86 # addb %al, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define ADD_AL_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X00, 0X84 # addb %al, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define ADD_AL_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X00, 0X85 # addb %al, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define ADD_BL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X00, 0X98 # addb %bl, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X00, 0X9B # addb %bl, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X00, 0X99 # addb %bl, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X00, 0X9A # addb %bl, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X00, 0X9F # addb %bl, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X00, 0X9E # addb %bl, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X00, 0X9D # addb %bl, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X00, 0X9C, 0X24 # addb %bl, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BL_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X00, 0X9F # addb %bl, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define ADD_BL_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X00, 0X9E # addb %bl, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define ADD_BL_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X00, 0X9C # addb %bl, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define ADD_BL_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X00, 0X9D # addb %bl, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define ADD_CL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X00, 0X88 # addb %cl, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X00, 0X8B # addb %cl, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X00, 0X89 # addb %cl, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X00, 0X8A # addb %cl, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X00, 0X8F # addb %cl, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X00, 0X8E # addb %cl, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X00, 0X8D # addb %cl, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X00, 0X8C, 0X24 # addb %cl, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CL_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X00, 0X8F # addb %cl, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define ADD_CL_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X00, 0X8E # addb %cl, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define ADD_CL_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X00, 0X8C # addb %cl, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define ADD_CL_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X00, 0X8D # addb %cl, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define ADD_DL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X00, 0X90 # addb %dl, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X00, 0X93 # addb %dl, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X00, 0X91 # addb %dl, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X00, 0X92 # addb %dl, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X00, 0X97 # addb %dl, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X00, 0X96 # addb %dl, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X00, 0X95 # addb %dl, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X00, 0X94, 0X24 # addb %dl, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DL_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X00, 0X97 # addb %dl, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define ADD_DL_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X00, 0X96 # addb %dl, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define ADD_DL_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X00, 0X94 # addb %dl, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define ADD_DL_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X00, 0X95 # addb %dl, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define ADD_AL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X02, 0X04, 0X25 # addb (" _(VALUE) "), %al")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X02, 0X1C, 0X25 # addb (" _(VALUE) "), %bl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X02, 0X0C, 0X25 # addb (" _(VALUE) "), %cl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X02, 0X14, 0X25 # addb (" _(VALUE) "), %dl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DIL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X40, 0X02, 0X3C, 0X25 # addb (" _(VALUE) "), %dil")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SIL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X40, 0X02, 0X34, 0X25 # addb (" _(VALUE) "), %sil")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BPL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X40, 0X02, 0X2C, 0X25 # addb (" _(VALUE) "), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SPL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X40, 0X02, 0X24, 0X25 # addb (" _(VALUE) "), %spl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8B_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X02, 0X04, 0X25 # addb (" _(VALUE) "), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9B_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X02, 0X0C, 0X25 # addb (" _(VALUE) "), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10B_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X02, 0X14, 0X25 # addb (" _(VALUE) "), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11B_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X02, 0X1C, 0X25 # addb (" _(VALUE) "), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12B_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X02, 0X24, 0X25 # addb (" _(VALUE) "), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13B_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X02, 0X2C, 0X25 # addb (" _(VALUE) "), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14B_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X02, 0X34, 0X25 # addb (" _(VALUE) "), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15B_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X02, 0X3C, 0X25 # addb (" _(VALUE) "), %r15b")\
	CMT_ASM(".long " _(VALUE))

#define ADD_AL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X00, 0X04, 0X25 # addb %al, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X00, 0X1C, 0X25 # addb %bl, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X00, 0X0C, 0X25 # addb %cl, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X00, 0X14, 0X25 # addb %dl, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DIL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X40, 0X00, 0X3C, 0X25 # addb %dil, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SIL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X40, 0X00, 0X34, 0X25 # addb %sil, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BPL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X40, 0X00, 0X2C, 0X25 # addb %bpl, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SPL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X40, 0X00, 0X24, 0X25 # addb %spl, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8B_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X00, 0X04, 0X25 # addb %r8b, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9B_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X00, 0X0C, 0X25 # addb %r9b, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10B_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X00, 0X14, 0X25 # addb %r10b, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11B_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X00, 0X1C, 0X25 # addb %r11b, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12B_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X00, 0X24, 0X25 # addb %r12b, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13B_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X00, 0X2C, 0X25 # addb %r13b, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14B_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X00, 0X34, 0X25 # addb %r14b, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15B_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X00, 0X3C, 0X25 # addb %r15b, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))

#define ADD_AL_FROM_PTR_RAX CMT_ASM(".byte 0X02, 0X00 # addb (%rax), %al")
#define ADD_AL_FROM_PTR_RBX CMT_ASM(".byte 0X02, 0X03 # addb (%rbx), %al")
#define ADD_AL_FROM_PTR_RCX CMT_ASM(".byte 0X02, 0X01 # addb (%rcx), %al")
#define ADD_AL_FROM_PTR_RDX CMT_ASM(".byte 0X02, 0X02 # addb (%rdx), %al")
#define ADD_AL_FROM_PTR_RDI CMT_ASM(".byte 0X02, 0X07 # addb (%rdi), %al")
#define ADD_AL_FROM_PTR_RSI CMT_ASM(".byte 0X02, 0X06 # addb (%rsi), %al")
#define ADD_AL_FROM_PTR_RBP CMT_ASM(".byte 0X02, 0X45, 0X00 # addb (%rbp), %al")
#define ADD_AL_FROM_PTR_RSP CMT_ASM(".byte 0X02, 0X04, 0X24 # addb (%rsp), %al")
#define ADD_AL_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X02, 0X00 # addb (%r8), %al")
#define ADD_AL_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X02, 0X01 # addb (%r9), %al")
#define ADD_AL_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X02, 0X02 # addb (%r10), %al")
#define ADD_AL_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X02, 0X03 # addb (%r11), %al")
#define ADD_AL_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X02, 0X04, 0X24 # addb (%r12), %al")
#define ADD_AL_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X02, 0X45, 0X00 # addb (%r13), %al")
#define ADD_AL_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X02, 0X06 # addb (%r14), %al")
#define ADD_AL_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X02, 0X07 # addb (%r15), %al")
#define ADD_AL_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X02, 0X00 # addb (%eax), %al")
#define ADD_AL_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X02, 0X03 # addb (%ebx), %al")
#define ADD_AL_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X02, 0X01 # addb (%ecx), %al")
#define ADD_AL_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X02, 0X02 # addb (%edx), %al")
#define ADD_AL_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X02, 0X07 # addb (%edi), %al")
#define ADD_AL_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X02, 0X06 # addb (%esi), %al")
#define ADD_AL_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X02, 0X45, 0X00 # addb (%ebp), %al")
#define ADD_AL_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X02, 0X04, 0X24 # addb (%esp), %al")

#define ADD_BL_FROM_PTR_RAX CMT_ASM(".byte 0X02, 0X18 # addb (%rax), %bl")
#define ADD_BL_FROM_PTR_RBX CMT_ASM(".byte 0X02, 0X1B # addb (%rbx), %bl")
#define ADD_BL_FROM_PTR_RCX CMT_ASM(".byte 0X02, 0X19 # addb (%rcx), %bl")
#define ADD_BL_FROM_PTR_RDX CMT_ASM(".byte 0X02, 0X1A # addb (%rdx), %bl")
#define ADD_BL_FROM_PTR_RDI CMT_ASM(".byte 0X02, 0X1F # addb (%rdi), %bl")
#define ADD_BL_FROM_PTR_RSI CMT_ASM(".byte 0X02, 0X1E # addb (%rsi), %bl")
#define ADD_BL_FROM_PTR_RBP CMT_ASM(".byte 0X02, 0X5D, 0X00 # addb (%rbp), %bl")
#define ADD_BL_FROM_PTR_RSP CMT_ASM(".byte 0X02, 0X1C, 0X24 # addb (%rsp), %bl")
#define ADD_BL_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X02, 0X18 # addb (%r8), %bl")
#define ADD_BL_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X02, 0X19 # addb (%r9), %bl")
#define ADD_BL_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X02, 0X1A # addb (%r10), %bl")
#define ADD_BL_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X02, 0X1B # addb (%r11), %bl")
#define ADD_BL_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X02, 0X1C, 0X24 # addb (%r12), %bl")
#define ADD_BL_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X02, 0X5D, 0X00 # addb (%r13), %bl")
#define ADD_BL_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X02, 0X1E # addb (%r14), %bl")
#define ADD_BL_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X02, 0X1F # addb (%r15), %bl")
#define ADD_BL_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X02, 0X18 # addb (%eax), %bl")
#define ADD_BL_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X02, 0X1B # addb (%ebx), %bl")
#define ADD_BL_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X02, 0X19 # addb (%ecx), %bl")
#define ADD_BL_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X02, 0X1A # addb (%edx), %bl")
#define ADD_BL_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X02, 0X1F # addb (%edi), %bl")
#define ADD_BL_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X02, 0X1E # addb (%esi), %bl")
#define ADD_BL_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X02, 0X5D, 0X00 # addb (%ebp), %bl")
#define ADD_BL_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X02, 0X1C, 0X24 # addb (%esp), %bl")

#define ADD_CL_FROM_PTR_RAX CMT_ASM(".byte 0X02, 0X08 # addb (%rax), %cl")
#define ADD_CL_FROM_PTR_RBX CMT_ASM(".byte 0X02, 0X0B # addb (%rbx), %cl")
#define ADD_CL_FROM_PTR_RCX CMT_ASM(".byte 0X02, 0X09 # addb (%rcx), %cl")
#define ADD_CL_FROM_PTR_RDX CMT_ASM(".byte 0X02, 0X0A # addb (%rdx), %cl")
#define ADD_CL_FROM_PTR_RDI CMT_ASM(".byte 0X02, 0X0F # addb (%rdi), %cl")
#define ADD_CL_FROM_PTR_RSI CMT_ASM(".byte 0X02, 0X0E # addb (%rsi), %cl")
#define ADD_CL_FROM_PTR_RBP CMT_ASM(".byte 0X02, 0X4D, 0X00 # addb (%rbp), %cl")
#define ADD_CL_FROM_PTR_RSP CMT_ASM(".byte 0X02, 0X0C, 0X24 # addb (%rsp), %cl")
#define ADD_CL_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X02, 0X08 # addb (%r8), %cl")
#define ADD_CL_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X02, 0X09 # addb (%r9), %cl")
#define ADD_CL_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X02, 0X0A # addb (%r10), %cl")
#define ADD_CL_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X02, 0X0B # addb (%r11), %cl")
#define ADD_CL_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X02, 0X0C, 0X24 # addb (%r12), %cl")
#define ADD_CL_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X02, 0X4D, 0X00 # addb (%r13), %cl")
#define ADD_CL_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X02, 0X0E # addb (%r14), %cl")
#define ADD_CL_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X02, 0X0F # addb (%r15), %cl")
#define ADD_CL_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X02, 0X08 # addb (%eax), %cl")
#define ADD_CL_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X02, 0X0B # addb (%ebx), %cl")
#define ADD_CL_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X02, 0X09 # addb (%ecx), %cl")
#define ADD_CL_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X02, 0X0A # addb (%edx), %cl")
#define ADD_CL_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X02, 0X0F # addb (%edi), %cl")
#define ADD_CL_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X02, 0X0E # addb (%esi), %cl")
#define ADD_CL_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X02, 0X4D, 0X00 # addb (%ebp), %cl")
#define ADD_CL_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X02, 0X0C, 0X24 # addb (%esp), %cl")

#define ADD_DL_FROM_PTR_RAX CMT_ASM(".byte 0X02, 0X10 # addb (%rax), %dl")
#define ADD_DL_FROM_PTR_RBX CMT_ASM(".byte 0X02, 0X13 # addb (%rbx), %dl")
#define ADD_DL_FROM_PTR_RCX CMT_ASM(".byte 0X02, 0X11 # addb (%rcx), %dl")
#define ADD_DL_FROM_PTR_RDX CMT_ASM(".byte 0X02, 0X12 # addb (%rdx), %dl")
#define ADD_DL_FROM_PTR_RDI CMT_ASM(".byte 0X02, 0X17 # addb (%rdi), %dl")
#define ADD_DL_FROM_PTR_RSI CMT_ASM(".byte 0X02, 0X16 # addb (%rsi), %dl")
#define ADD_DL_FROM_PTR_RBP CMT_ASM(".byte 0X02, 0X55, 0X00 # addb (%rbp), %dl")
#define ADD_DL_FROM_PTR_RSP CMT_ASM(".byte 0X02, 0X14, 0X24 # addb (%rsp), %dl")
#define ADD_DL_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X02, 0X10 # addb (%r8), %dl")
#define ADD_DL_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X02, 0X11 # addb (%r9), %dl")
#define ADD_DL_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X02, 0X12 # addb (%r10), %dl")
#define ADD_DL_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X02, 0X13 # addb (%r11), %dl")
#define ADD_DL_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X02, 0X14, 0X24 # addb (%r12), %dl")
#define ADD_DL_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X02, 0X55, 0X00 # addb (%r13), %dl")
#define ADD_DL_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X02, 0X16 # addb (%r14), %dl")
#define ADD_DL_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X02, 0X17 # addb (%r15), %dl")
#define ADD_DL_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X02, 0X10 # addb (%eax), %dl")
#define ADD_DL_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X02, 0X13 # addb (%ebx), %dl")
#define ADD_DL_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X02, 0X11 # addb (%ecx), %dl")
#define ADD_DL_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X02, 0X12 # addb (%edx), %dl")
#define ADD_DL_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X02, 0X17 # addb (%edi), %dl")
#define ADD_DL_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X02, 0X16 # addb (%esi), %dl")
#define ADD_DL_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X02, 0X55, 0X00 # addb (%ebp), %dl")
#define ADD_DL_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X02, 0X14, 0X24 # addb (%esp), %dl")

#define ADD_DIL_FROM_PTR_RAX CMT_ASM(".byte 0X40, 0X02, 0X38 # addb (%rax), %dil")
#define ADD_DIL_FROM_PTR_RBX CMT_ASM(".byte 0X40, 0X02, 0X3B # addb (%rbx), %dil")
#define ADD_DIL_FROM_PTR_RCX CMT_ASM(".byte 0X40, 0X02, 0X39 # addb (%rcx), %dil")
#define ADD_DIL_FROM_PTR_RDX CMT_ASM(".byte 0X40, 0X02, 0X3A # addb (%rdx), %dil")
#define ADD_DIL_FROM_PTR_RDI CMT_ASM(".byte 0X40, 0X02, 0X3F # addb (%rdi), %dil")
#define ADD_DIL_FROM_PTR_RSI CMT_ASM(".byte 0X40, 0X02, 0X3E # addb (%rsi), %dil")
#define ADD_DIL_FROM_PTR_RBP CMT_ASM(".byte 0X40, 0X02, 0X7D, 0X00 # addb (%rbp), %dil")
#define ADD_DIL_FROM_PTR_RSP CMT_ASM(".byte 0X40, 0X02, 0X3C, 0X24 # addb (%rsp), %dil")
#define ADD_DIL_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X02, 0X38 # addb (%r8), %dil")
#define ADD_DIL_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X02, 0X39 # addb (%r9), %dil")
#define ADD_DIL_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X02, 0X3A # addb (%r10), %dil")
#define ADD_DIL_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X02, 0X3B # addb (%r11), %dil")
#define ADD_DIL_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X02, 0X3C, 0X24 # addb (%r12), %dil")
#define ADD_DIL_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X02, 0X7D, 0X00 # addb (%r13), %dil")
#define ADD_DIL_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X02, 0X3E # addb (%r14), %dil")
#define ADD_DIL_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X02, 0X3F # addb (%r15), %dil")
#define ADD_DIL_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X40, 0X02, 0X38 # addb (%eax), %dil")
#define ADD_DIL_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X40, 0X02, 0X3B # addb (%ebx), %dil")
#define ADD_DIL_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X40, 0X02, 0X39 # addb (%ecx), %dil")
#define ADD_DIL_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X40, 0X02, 0X3A # addb (%edx), %dil")
#define ADD_DIL_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X40, 0X02, 0X3F # addb (%edi), %dil")
#define ADD_DIL_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X40, 0X02, 0X3E # addb (%esi), %dil")
#define ADD_DIL_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X40, 0X02, 0X7D, 0X00 # addb (%ebp), %dil")
#define ADD_DIL_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X40, 0X02, 0X3C, 0X24 # addb (%esp), %dil")

#define ADD_SIL_FROM_PTR_RAX CMT_ASM(".byte 0X40, 0X02, 0X30 # addb (%rax), %sil")
#define ADD_SIL_FROM_PTR_RBX CMT_ASM(".byte 0X40, 0X02, 0X33 # addb (%rbx), %sil")
#define ADD_SIL_FROM_PTR_RCX CMT_ASM(".byte 0X40, 0X02, 0X31 # addb (%rcx), %sil")
#define ADD_SIL_FROM_PTR_RDX CMT_ASM(".byte 0X40, 0X02, 0X32 # addb (%rdx), %sil")
#define ADD_SIL_FROM_PTR_RDI CMT_ASM(".byte 0X40, 0X02, 0X37 # addb (%rdi), %sil")
#define ADD_SIL_FROM_PTR_RSI CMT_ASM(".byte 0X40, 0X02, 0X36 # addb (%rsi), %sil")
#define ADD_SIL_FROM_PTR_RBP CMT_ASM(".byte 0X40, 0X02, 0X75, 0X00 # addb (%rbp), %sil")
#define ADD_SIL_FROM_PTR_RSP CMT_ASM(".byte 0X40, 0X02, 0X34, 0X24 # addb (%rsp), %sil")
#define ADD_SIL_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X02, 0X30 # addb (%r8), %sil")
#define ADD_SIL_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X02, 0X31 # addb (%r9), %sil")
#define ADD_SIL_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X02, 0X32 # addb (%r10), %sil")
#define ADD_SIL_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X02, 0X33 # addb (%r11), %sil")
#define ADD_SIL_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X02, 0X34, 0X24 # addb (%r12), %sil")
#define ADD_SIL_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X02, 0X75, 0X00 # addb (%r13), %sil")
#define ADD_SIL_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X02, 0X36 # addb (%r14), %sil")
#define ADD_SIL_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X02, 0X37 # addb (%r15), %sil")
#define ADD_SIL_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X40, 0X02, 0X30 # addb (%eax), %sil")
#define ADD_SIL_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X40, 0X02, 0X33 # addb (%ebx), %sil")
#define ADD_SIL_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X40, 0X02, 0X31 # addb (%ecx), %sil")
#define ADD_SIL_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X40, 0X02, 0X32 # addb (%edx), %sil")
#define ADD_SIL_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X40, 0X02, 0X37 # addb (%edi), %sil")
#define ADD_SIL_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X40, 0X02, 0X36 # addb (%esi), %sil")
#define ADD_SIL_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X40, 0X02, 0X75, 0X00 # addb (%ebp), %sil")
#define ADD_SIL_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X40, 0X02, 0X34, 0X24 # addb (%esp), %sil")

#define ADD_BPL_FROM_PTR_RAX CMT_ASM(".byte 0X40, 0X02, 0X28 # addb (%rax), %bpl")
#define ADD_BPL_FROM_PTR_RBX CMT_ASM(".byte 0X40, 0X02, 0X2B # addb (%rbx), %bpl")
#define ADD_BPL_FROM_PTR_RCX CMT_ASM(".byte 0X40, 0X02, 0X29 # addb (%rcx), %bpl")
#define ADD_BPL_FROM_PTR_RDX CMT_ASM(".byte 0X40, 0X02, 0X2A # addb (%rdx), %bpl")
#define ADD_BPL_FROM_PTR_RDI CMT_ASM(".byte 0X40, 0X02, 0X2F # addb (%rdi), %bpl")
#define ADD_BPL_FROM_PTR_RSI CMT_ASM(".byte 0X40, 0X02, 0X2E # addb (%rsi), %bpl")
#define ADD_BPL_FROM_PTR_RBP CMT_ASM(".byte 0X40, 0X02, 0X6D, 0X00 # addb (%rbp), %bpl")
#define ADD_BPL_FROM_PTR_RSP CMT_ASM(".byte 0X40, 0X02, 0X2C, 0X24 # addb (%rsp), %bpl")
#define ADD_BPL_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X02, 0X28 # addb (%r8), %bpl")
#define ADD_BPL_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X02, 0X29 # addb (%r9), %bpl")
#define ADD_BPL_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X02, 0X2A # addb (%r10), %bpl")
#define ADD_BPL_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X02, 0X2B # addb (%r11), %bpl")
#define ADD_BPL_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X02, 0X2C, 0X24 # addb (%r12), %bpl")
#define ADD_BPL_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X02, 0X6D, 0X00 # addb (%r13), %bpl")
#define ADD_BPL_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X02, 0X2E # addb (%r14), %bpl")
#define ADD_BPL_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X02, 0X2F # addb (%r15), %bpl")
#define ADD_BPL_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X40, 0X02, 0X28 # addb (%eax), %bpl")
#define ADD_BPL_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X40, 0X02, 0X2B # addb (%ebx), %bpl")
#define ADD_BPL_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X40, 0X02, 0X29 # addb (%ecx), %bpl")
#define ADD_BPL_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X40, 0X02, 0X2A # addb (%edx), %bpl")
#define ADD_BPL_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X40, 0X02, 0X2F # addb (%edi), %bpl")
#define ADD_BPL_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X40, 0X02, 0X2E # addb (%esi), %bpl")
#define ADD_BPL_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X40, 0X02, 0X6D, 0X00 # addb (%ebp), %bpl")
#define ADD_BPL_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X40, 0X02, 0X2C, 0X24 # addb (%esp), %bpl")

#define ADD_SPL_FROM_PTR_RAX CMT_ASM(".byte 0X40, 0X02, 0X20 # addb (%rax), %spl")
#define ADD_SPL_FROM_PTR_RBX CMT_ASM(".byte 0X40, 0X02, 0X23 # addb (%rbx), %spl")
#define ADD_SPL_FROM_PTR_RCX CMT_ASM(".byte 0X40, 0X02, 0X21 # addb (%rcx), %spl")
#define ADD_SPL_FROM_PTR_RDX CMT_ASM(".byte 0X40, 0X02, 0X22 # addb (%rdx), %spl")
#define ADD_SPL_FROM_PTR_RDI CMT_ASM(".byte 0X40, 0X02, 0X27 # addb (%rdi), %spl")
#define ADD_SPL_FROM_PTR_RSI CMT_ASM(".byte 0X40, 0X02, 0X26 # addb (%rsi), %spl")
#define ADD_SPL_FROM_PTR_RBP CMT_ASM(".byte 0X40, 0X02, 0X65, 0X00 # addb (%rbp), %spl")
#define ADD_SPL_FROM_PTR_RSP CMT_ASM(".byte 0X40, 0X02, 0X24, 0X24 # addb (%rsp), %spl")
#define ADD_SPL_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X02, 0X20 # addb (%r8), %spl")
#define ADD_SPL_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X02, 0X21 # addb (%r9), %spl")
#define ADD_SPL_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X02, 0X22 # addb (%r10), %spl")
#define ADD_SPL_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X02, 0X23 # addb (%r11), %spl")
#define ADD_SPL_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X02, 0X24, 0X24 # addb (%r12), %spl")
#define ADD_SPL_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X02, 0X65, 0X00 # addb (%r13), %spl")
#define ADD_SPL_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X02, 0X26 # addb (%r14), %spl")
#define ADD_SPL_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X02, 0X27 # addb (%r15), %spl")
#define ADD_SPL_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X40, 0X02, 0X20 # addb (%eax), %spl")
#define ADD_SPL_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X40, 0X02, 0X23 # addb (%ebx), %spl")
#define ADD_SPL_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X40, 0X02, 0X21 # addb (%ecx), %spl")
#define ADD_SPL_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X40, 0X02, 0X22 # addb (%edx), %spl")
#define ADD_SPL_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X40, 0X02, 0X27 # addb (%edi), %spl")
#define ADD_SPL_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X40, 0X02, 0X26 # addb (%esi), %spl")
#define ADD_SPL_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X40, 0X02, 0X65, 0X00 # addb (%ebp), %spl")
#define ADD_SPL_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X40, 0X02, 0X24, 0X24 # addb (%esp), %spl")

#define ADD_R8B_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X02, 0X00 # addb (%rax), %r8b")
#define ADD_R8B_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X02, 0X03 # addb (%rbx), %r8b")
#define ADD_R8B_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X02, 0X01 # addb (%rcx), %r8b")
#define ADD_R8B_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X02, 0X02 # addb (%rdx), %r8b")
#define ADD_R8B_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X02, 0X07 # addb (%rdi), %r8b")
#define ADD_R8B_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X02, 0X06 # addb (%rsi), %r8b")
#define ADD_R8B_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X02, 0X45, 0X00 # addb (%rbp), %r8b")
#define ADD_R8B_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X02, 0X04, 0X24 # addb (%rsp), %r8b")
#define ADD_R8B_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X02, 0X00 # addb (%r8), %r8b")
#define ADD_R8B_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X02, 0X01 # addb (%r9), %r8b")
#define ADD_R8B_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X02, 0X02 # addb (%r10), %r8b")
#define ADD_R8B_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X02, 0X03 # addb (%r11), %r8b")
#define ADD_R8B_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X02, 0X04, 0X24 # addb (%r12), %r8b")
#define ADD_R8B_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X02, 0X45, 0X00 # addb (%r13), %r8b")
#define ADD_R8B_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X02, 0X06 # addb (%r14), %r8b")
#define ADD_R8B_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X02, 0X07 # addb (%r15), %r8b")
#define ADD_R8B_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X02, 0X00 # addb (%eax), %r8b")
#define ADD_R8B_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X02, 0X03 # addb (%ebx), %r8b")
#define ADD_R8B_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X02, 0X01 # addb (%ecx), %r8b")
#define ADD_R8B_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X02, 0X02 # addb (%edx), %r8b")
#define ADD_R8B_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X02, 0X07 # addb (%edi), %r8b")
#define ADD_R8B_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X02, 0X06 # addb (%esi), %r8b")
#define ADD_R8B_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X02, 0X45, 0X00 # addb (%ebp), %r8b")
#define ADD_R8B_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X02, 0X04, 0X24 # addb (%esp), %r8b")

#define ADD_R9B_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X02, 0X08 # addb (%rax), %r9b")
#define ADD_R9B_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X02, 0X0B # addb (%rbx), %r9b")
#define ADD_R9B_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X02, 0X09 # addb (%rcx), %r9b")
#define ADD_R9B_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X02, 0X0A # addb (%rdx), %r9b")
#define ADD_R9B_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X02, 0X0F # addb (%rdi), %r9b")
#define ADD_R9B_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X02, 0X0E # addb (%rsi), %r9b")
#define ADD_R9B_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X02, 0X4D, 0X00 # addb (%rbp), %r9b")
#define ADD_R9B_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X02, 0X0C, 0X24 # addb (%rsp), %r9b")
#define ADD_R9B_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X02, 0X08 # addb (%r8), %r9b")
#define ADD_R9B_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X02, 0X09 # addb (%r9), %r9b")
#define ADD_R9B_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X02, 0X0A # addb (%r10), %r9b")
#define ADD_R9B_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X02, 0X0B # addb (%r11), %r9b")
#define ADD_R9B_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X02, 0X0C, 0X24 # addb (%r12), %r9b")
#define ADD_R9B_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X02, 0X4D, 0X00 # addb (%r13), %r9b")
#define ADD_R9B_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X02, 0X0E # addb (%r14), %r9b")
#define ADD_R9B_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X02, 0X0F # addb (%r15), %r9b")
#define ADD_R9B_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X02, 0X08 # addb (%eax), %r9b")
#define ADD_R9B_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X02, 0X0B # addb (%ebx), %r9b")
#define ADD_R9B_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X02, 0X09 # addb (%ecx), %r9b")
#define ADD_R9B_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X02, 0X0A # addb (%edx), %r9b")
#define ADD_R9B_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X02, 0X0F # addb (%edi), %r9b")
#define ADD_R9B_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X02, 0X0E # addb (%esi), %r9b")
#define ADD_R9B_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X02, 0X4D, 0X00 # addb (%ebp), %r9b")
#define ADD_R9B_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X02, 0X0C, 0X24 # addb (%esp), %r9b")

#define ADD_R10B_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X02, 0X10 # addb (%rax), %r10b")
#define ADD_R10B_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X02, 0X13 # addb (%rbx), %r10b")
#define ADD_R10B_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X02, 0X11 # addb (%rcx), %r10b")
#define ADD_R10B_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X02, 0X12 # addb (%rdx), %r10b")
#define ADD_R10B_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X02, 0X17 # addb (%rdi), %r10b")
#define ADD_R10B_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X02, 0X16 # addb (%rsi), %r10b")
#define ADD_R10B_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X02, 0X55, 0X00 # addb (%rbp), %r10b")
#define ADD_R10B_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X02, 0X14, 0X24 # addb (%rsp), %r10b")
#define ADD_R10B_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X02, 0X10 # addb (%r8), %r10b")
#define ADD_R10B_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X02, 0X11 # addb (%r9), %r10b")
#define ADD_R10B_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X02, 0X12 # addb (%r10), %r10b")
#define ADD_R10B_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X02, 0X13 # addb (%r11), %r10b")
#define ADD_R10B_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X02, 0X14, 0X24 # addb (%r12), %r10b")
#define ADD_R10B_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X02, 0X55, 0X00 # addb (%r13), %r10b")
#define ADD_R10B_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X02, 0X16 # addb (%r14), %r10b")
#define ADD_R10B_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X02, 0X17 # addb (%r15), %r10b")
#define ADD_R10B_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X02, 0X10 # addb (%eax), %r10b")
#define ADD_R10B_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X02, 0X13 # addb (%ebx), %r10b")
#define ADD_R10B_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X02, 0X11 # addb (%ecx), %r10b")
#define ADD_R10B_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X02, 0X12 # addb (%edx), %r10b")
#define ADD_R10B_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X02, 0X17 # addb (%edi), %r10b")
#define ADD_R10B_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X02, 0X16 # addb (%esi), %r10b")
#define ADD_R10B_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X02, 0X55, 0X00 # addb (%ebp), %r10b")
#define ADD_R10B_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X02, 0X14, 0X24 # addb (%esp), %r10b")

#define ADD_R11B_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X02, 0X18 # addb (%rax), %r11b")
#define ADD_R11B_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X02, 0X1B # addb (%rbx), %r11b")
#define ADD_R11B_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X02, 0X19 # addb (%rcx), %r11b")
#define ADD_R11B_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X02, 0X1A # addb (%rdx), %r11b")
#define ADD_R11B_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X02, 0X1F # addb (%rdi), %r11b")
#define ADD_R11B_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X02, 0X1E # addb (%rsi), %r11b")
#define ADD_R11B_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X02, 0X5D, 0X00 # addb (%rbp), %r11b")
#define ADD_R11B_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X02, 0X1C, 0X24 # addb (%rsp), %r11b")
#define ADD_R11B_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X02, 0X18 # addb (%r8), %r11b")
#define ADD_R11B_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X02, 0X19 # addb (%r9), %r11b")
#define ADD_R11B_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X02, 0X1A # addb (%r10), %r11b")
#define ADD_R11B_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X02, 0X1B # addb (%r11), %r11b")
#define ADD_R11B_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X02, 0X1C, 0X24 # addb (%r12), %r11b")
#define ADD_R11B_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X02, 0X5D, 0X00 # addb (%r13), %r11b")
#define ADD_R11B_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X02, 0X1E # addb (%r14), %r11b")
#define ADD_R11B_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X02, 0X1F # addb (%r15), %r11b")
#define ADD_R11B_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X02, 0X18 # addb (%eax), %r11b")
#define ADD_R11B_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X02, 0X1B # addb (%ebx), %r11b")
#define ADD_R11B_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X02, 0X19 # addb (%ecx), %r11b")
#define ADD_R11B_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X02, 0X1A # addb (%edx), %r11b")
#define ADD_R11B_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X02, 0X1F # addb (%edi), %r11b")
#define ADD_R11B_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X02, 0X1E # addb (%esi), %r11b")
#define ADD_R11B_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X02, 0X5D, 0X00 # addb (%ebp), %r11b")
#define ADD_R11B_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X02, 0X1C, 0X24 # addb (%esp), %r11b")

#define ADD_R12B_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X02, 0X20 # addb (%rax), %r12b")
#define ADD_R12B_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X02, 0X23 # addb (%rbx), %r12b")
#define ADD_R12B_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X02, 0X21 # addb (%rcx), %r12b")
#define ADD_R12B_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X02, 0X22 # addb (%rdx), %r12b")
#define ADD_R12B_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X02, 0X27 # addb (%rdi), %r12b")
#define ADD_R12B_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X02, 0X26 # addb (%rsi), %r12b")
#define ADD_R12B_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X02, 0X65, 0X00 # addb (%rbp), %r12b")
#define ADD_R12B_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X02, 0X24, 0X24 # addb (%rsp), %r12b")
#define ADD_R12B_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X02, 0X20 # addb (%r8), %r12b")
#define ADD_R12B_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X02, 0X21 # addb (%r9), %r12b")
#define ADD_R12B_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X02, 0X22 # addb (%r10), %r12b")
#define ADD_R12B_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X02, 0X23 # addb (%r11), %r12b")
#define ADD_R12B_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X02, 0X24, 0X24 # addb (%r12), %r12b")
#define ADD_R12B_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X02, 0X65, 0X00 # addb (%r13), %r12b")
#define ADD_R12B_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X02, 0X26 # addb (%r14), %r12b")
#define ADD_R12B_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X02, 0X27 # addb (%r15), %r12b")
#define ADD_R12B_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X02, 0X20 # addb (%eax), %r12b")
#define ADD_R12B_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X02, 0X23 # addb (%ebx), %r12b")
#define ADD_R12B_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X02, 0X21 # addb (%ecx), %r12b")
#define ADD_R12B_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X02, 0X22 # addb (%edx), %r12b")
#define ADD_R12B_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X02, 0X27 # addb (%edi), %r12b")
#define ADD_R12B_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X02, 0X26 # addb (%esi), %r12b")
#define ADD_R12B_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X02, 0X65, 0X00 # addb (%ebp), %r12b")
#define ADD_R12B_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X02, 0X24, 0X24 # addb (%esp), %r12b")

#define ADD_R13B_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X02, 0X28 # addb (%rax), %r13b")
#define ADD_R13B_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X02, 0X2B # addb (%rbx), %r13b")
#define ADD_R13B_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X02, 0X29 # addb (%rcx), %r13b")
#define ADD_R13B_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X02, 0X2A # addb (%rdx), %r13b")
#define ADD_R13B_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X02, 0X2F # addb (%rdi), %r13b")
#define ADD_R13B_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X02, 0X2E # addb (%rsi), %r13b")
#define ADD_R13B_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X02, 0X6D, 0X00 # addb (%rbp), %r13b")
#define ADD_R13B_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X02, 0X2C, 0X24 # addb (%rsp), %r13b")
#define ADD_R13B_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X02, 0X28 # addb (%r8), %r13b")
#define ADD_R13B_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X02, 0X29 # addb (%r9), %r13b")
#define ADD_R13B_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X02, 0X2A # addb (%r10), %r13b")
#define ADD_R13B_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X02, 0X2B # addb (%r11), %r13b")
#define ADD_R13B_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X02, 0X2C, 0X24 # addb (%r12), %r13b")
#define ADD_R13B_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X02, 0X6D, 0X00 # addb (%r13), %r13b")
#define ADD_R13B_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X02, 0X2E # addb (%r14), %r13b")
#define ADD_R13B_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X02, 0X2F # addb (%r15), %r13b")
#define ADD_R13B_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X02, 0X28 # addb (%eax), %r13b")
#define ADD_R13B_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X02, 0X2B # addb (%ebx), %r13b")
#define ADD_R13B_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X02, 0X29 # addb (%ecx), %r13b")
#define ADD_R13B_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X02, 0X2A # addb (%edx), %r13b")
#define ADD_R13B_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X02, 0X2F # addb (%edi), %r13b")
#define ADD_R13B_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X02, 0X2E # addb (%esi), %r13b")
#define ADD_R13B_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X02, 0X6D, 0X00 # addb (%ebp), %r13b")
#define ADD_R13B_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X02, 0X2C, 0X24 # addb (%esp), %r13b")

#define ADD_R14B_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X02, 0X30 # addb (%rax), %r14b")
#define ADD_R14B_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X02, 0X33 # addb (%rbx), %r14b")
#define ADD_R14B_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X02, 0X31 # addb (%rcx), %r14b")
#define ADD_R14B_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X02, 0X32 # addb (%rdx), %r14b")
#define ADD_R14B_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X02, 0X37 # addb (%rdi), %r14b")
#define ADD_R14B_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X02, 0X36 # addb (%rsi), %r14b")
#define ADD_R14B_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X02, 0X75, 0X00 # addb (%rbp), %r14b")
#define ADD_R14B_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X02, 0X34, 0X24 # addb (%rsp), %r14b")
#define ADD_R14B_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X02, 0X30 # addb (%r8), %r14b")
#define ADD_R14B_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X02, 0X31 # addb (%r9), %r14b")
#define ADD_R14B_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X02, 0X32 # addb (%r10), %r14b")
#define ADD_R14B_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X02, 0X33 # addb (%r11), %r14b")
#define ADD_R14B_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X02, 0X34, 0X24 # addb (%r12), %r14b")
#define ADD_R14B_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X02, 0X75, 0X00 # addb (%r13), %r14b")
#define ADD_R14B_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X02, 0X36 # addb (%r14), %r14b")
#define ADD_R14B_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X02, 0X37 # addb (%r15), %r14b")
#define ADD_R14B_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X02, 0X30 # addb (%eax), %r14b")
#define ADD_R14B_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X02, 0X33 # addb (%ebx), %r14b")
#define ADD_R14B_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X02, 0X31 # addb (%ecx), %r14b")
#define ADD_R14B_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X02, 0X32 # addb (%edx), %r14b")
#define ADD_R14B_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X02, 0X37 # addb (%edi), %r14b")
#define ADD_R14B_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X02, 0X36 # addb (%esi), %r14b")
#define ADD_R14B_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X02, 0X75, 0X00 # addb (%ebp), %r14b")
#define ADD_R14B_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X02, 0X34, 0X24 # addb (%esp), %r14b")

#define ADD_R15B_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X02, 0X38 # addb (%rax), %r15b")
#define ADD_R15B_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X02, 0X3B # addb (%rbx), %r15b")
#define ADD_R15B_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X02, 0X39 # addb (%rcx), %r15b")
#define ADD_R15B_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X02, 0X3A # addb (%rdx), %r15b")
#define ADD_R15B_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X02, 0X3F # addb (%rdi), %r15b")
#define ADD_R15B_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X02, 0X3E # addb (%rsi), %r15b")
#define ADD_R15B_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X02, 0X7D, 0X00 # addb (%rbp), %r15b")
#define ADD_R15B_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X02, 0X3C, 0X24 # addb (%rsp), %r15b")
#define ADD_R15B_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X02, 0X38 # addb (%r8), %r15b")
#define ADD_R15B_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X02, 0X39 # addb (%r9), %r15b")
#define ADD_R15B_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X02, 0X3A # addb (%r10), %r15b")
#define ADD_R15B_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X02, 0X3B # addb (%r11), %r15b")
#define ADD_R15B_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X02, 0X3C, 0X24 # addb (%r12), %r15b")
#define ADD_R15B_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X02, 0X7D, 0X00 # addb (%r13), %r15b")
#define ADD_R15B_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X02, 0X3E # addb (%r14), %r15b")
#define ADD_R15B_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X02, 0X3F # addb (%r15), %r15b")
#define ADD_R15B_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X02, 0X38 # addb (%eax), %r15b")
#define ADD_R15B_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X02, 0X3B # addb (%ebx), %r15b")
#define ADD_R15B_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X02, 0X39 # addb (%ecx), %r15b")
#define ADD_R15B_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X02, 0X3A # addb (%edx), %r15b")
#define ADD_R15B_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X02, 0X3F # addb (%edi), %r15b")
#define ADD_R15B_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X02, 0X3E # addb (%esi), %r15b")
#define ADD_R15B_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X02, 0X7D, 0X00 # addb (%ebp), %r15b")
#define ADD_R15B_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X02, 0X3C, 0X24 # addb (%esp), %r15b")

#define ADD_AL_TO_PTR_RAX CMT_ASM(".byte 0X00, 0X00 # addb %al, (%rax)")
#define ADD_AL_TO_PTR_RBX CMT_ASM(".byte 0X00, 0X03 # addb %al, (%rbx)")
#define ADD_AL_TO_PTR_RCX CMT_ASM(".byte 0X00, 0X01 # addb %al, (%rcx)")
#define ADD_AL_TO_PTR_RDX CMT_ASM(".byte 0X00, 0X02 # addb %al, (%rdx)")
#define ADD_AL_TO_PTR_RDI CMT_ASM(".byte 0X00, 0X07 # addb %al, (%rdi)")
#define ADD_AL_TO_PTR_RSI CMT_ASM(".byte 0X00, 0X06 # addb %al, (%rsi)")
#define ADD_AL_TO_PTR_RBP CMT_ASM(".byte 0X00, 0X45, 0X00 # addb %al, (%rbp)")
#define ADD_AL_TO_PTR_RSP CMT_ASM(".byte 0X00, 0X04, 0X24 # addb %al, (%rsp)")
#define ADD_AL_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X00, 0X00 # addb %al, (%r8)")
#define ADD_AL_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X00, 0X01 # addb %al, (%r9)")
#define ADD_AL_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X00, 0X02 # addb %al, (%r10)")
#define ADD_AL_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X00, 0X03 # addb %al, (%r11)")
#define ADD_AL_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X00, 0X04, 0X24 # addb %al, (%r12)")
#define ADD_AL_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X00, 0X45, 0X00 # addb %al, (%r13)")
#define ADD_AL_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X00, 0X06 # addb %al, (%r14)")
#define ADD_AL_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X00, 0X07 # addb %al, (%r15)")
#define ADD_AL_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X00, 0X00 # addb %al, (%eax)")
#define ADD_AL_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X00, 0X03 # addb %al, (%ebx)")
#define ADD_AL_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X00, 0X01 # addb %al, (%ecx)")
#define ADD_AL_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X00, 0X02 # addb %al, (%edx)")
#define ADD_AL_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X00, 0X07 # addb %al, (%edi)")
#define ADD_AL_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X00, 0X06 # addb %al, (%esi)")
#define ADD_AL_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X00, 0X45, 0X00 # addb %al, (%ebp)")
#define ADD_AL_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X00, 0X04, 0X24 # addb %al, (%esp)")

#define ADD_BL_TO_PTR_RAX CMT_ASM(".byte 0X00, 0X18 # addb %bl, (%rax)")
#define ADD_BL_TO_PTR_RBX CMT_ASM(".byte 0X00, 0X1B # addb %bl, (%rbx)")
#define ADD_BL_TO_PTR_RCX CMT_ASM(".byte 0X00, 0X19 # addb %bl, (%rcx)")
#define ADD_BL_TO_PTR_RDX CMT_ASM(".byte 0X00, 0X1A # addb %bl, (%rdx)")
#define ADD_BL_TO_PTR_RDI CMT_ASM(".byte 0X00, 0X1F # addb %bl, (%rdi)")
#define ADD_BL_TO_PTR_RSI CMT_ASM(".byte 0X00, 0X1E # addb %bl, (%rsi)")
#define ADD_BL_TO_PTR_RBP CMT_ASM(".byte 0X00, 0X5D, 0X00 # addb %bl, (%rbp)")
#define ADD_BL_TO_PTR_RSP CMT_ASM(".byte 0X00, 0X1C, 0X24 # addb %bl, (%rsp)")
#define ADD_BL_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X00, 0X18 # addb %bl, (%r8)")
#define ADD_BL_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X00, 0X19 # addb %bl, (%r9)")
#define ADD_BL_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X00, 0X1A # addb %bl, (%r10)")
#define ADD_BL_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X00, 0X1B # addb %bl, (%r11)")
#define ADD_BL_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X00, 0X1C, 0X24 # addb %bl, (%r12)")
#define ADD_BL_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X00, 0X5D, 0X00 # addb %bl, (%r13)")
#define ADD_BL_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X00, 0X1E # addb %bl, (%r14)")
#define ADD_BL_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X00, 0X1F # addb %bl, (%r15)")
#define ADD_BL_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X00, 0X18 # addb %bl, (%eax)")
#define ADD_BL_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X00, 0X1B # addb %bl, (%ebx)")
#define ADD_BL_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X00, 0X19 # addb %bl, (%ecx)")
#define ADD_BL_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X00, 0X1A # addb %bl, (%edx)")
#define ADD_BL_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X00, 0X1F # addb %bl, (%edi)")
#define ADD_BL_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X00, 0X1E # addb %bl, (%esi)")
#define ADD_BL_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X00, 0X5D, 0X00 # addb %bl, (%ebp)")
#define ADD_BL_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X00, 0X1C, 0X24 # addb %bl, (%esp)")

#define ADD_CL_TO_PTR_RAX CMT_ASM(".byte 0X00, 0X08 # addb %cl, (%rax)")
#define ADD_CL_TO_PTR_RBX CMT_ASM(".byte 0X00, 0X0B # addb %cl, (%rbx)")
#define ADD_CL_TO_PTR_RCX CMT_ASM(".byte 0X00, 0X09 # addb %cl, (%rcx)")
#define ADD_CL_TO_PTR_RDX CMT_ASM(".byte 0X00, 0X0A # addb %cl, (%rdx)")
#define ADD_CL_TO_PTR_RDI CMT_ASM(".byte 0X00, 0X0F # addb %cl, (%rdi)")
#define ADD_CL_TO_PTR_RSI CMT_ASM(".byte 0X00, 0X0E # addb %cl, (%rsi)")
#define ADD_CL_TO_PTR_RBP CMT_ASM(".byte 0X00, 0X4D, 0X00 # addb %cl, (%rbp)")
#define ADD_CL_TO_PTR_RSP CMT_ASM(".byte 0X00, 0X0C, 0X24 # addb %cl, (%rsp)")
#define ADD_CL_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X00, 0X08 # addb %cl, (%r8)")
#define ADD_CL_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X00, 0X09 # addb %cl, (%r9)")
#define ADD_CL_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X00, 0X0A # addb %cl, (%r10)")
#define ADD_CL_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X00, 0X0B # addb %cl, (%r11)")
#define ADD_CL_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X00, 0X0C, 0X24 # addb %cl, (%r12)")
#define ADD_CL_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X00, 0X4D, 0X00 # addb %cl, (%r13)")
#define ADD_CL_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X00, 0X0E # addb %cl, (%r14)")
#define ADD_CL_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X00, 0X0F # addb %cl, (%r15)")
#define ADD_CL_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X00, 0X08 # addb %cl, (%eax)")
#define ADD_CL_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X00, 0X0B # addb %cl, (%ebx)")
#define ADD_CL_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X00, 0X09 # addb %cl, (%ecx)")
#define ADD_CL_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X00, 0X0A # addb %cl, (%edx)")
#define ADD_CL_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X00, 0X0F # addb %cl, (%edi)")
#define ADD_CL_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X00, 0X0E # addb %cl, (%esi)")
#define ADD_CL_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X00, 0X4D, 0X00 # addb %cl, (%ebp)")
#define ADD_CL_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X00, 0X0C, 0X24 # addb %cl, (%esp)")

#define ADD_DL_TO_PTR_RAX CMT_ASM(".byte 0X00, 0X10 # addb %dl, (%rax)")
#define ADD_DL_TO_PTR_RBX CMT_ASM(".byte 0X00, 0X13 # addb %dl, (%rbx)")
#define ADD_DL_TO_PTR_RCX CMT_ASM(".byte 0X00, 0X11 # addb %dl, (%rcx)")
#define ADD_DL_TO_PTR_RDX CMT_ASM(".byte 0X00, 0X12 # addb %dl, (%rdx)")
#define ADD_DL_TO_PTR_RDI CMT_ASM(".byte 0X00, 0X17 # addb %dl, (%rdi)")
#define ADD_DL_TO_PTR_RSI CMT_ASM(".byte 0X00, 0X16 # addb %dl, (%rsi)")
#define ADD_DL_TO_PTR_RBP CMT_ASM(".byte 0X00, 0X55, 0X00 # addb %dl, (%rbp)")
#define ADD_DL_TO_PTR_RSP CMT_ASM(".byte 0X00, 0X14, 0X24 # addb %dl, (%rsp)")
#define ADD_DL_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X00, 0X10 # addb %dl, (%r8)")
#define ADD_DL_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X00, 0X11 # addb %dl, (%r9)")
#define ADD_DL_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X00, 0X12 # addb %dl, (%r10)")
#define ADD_DL_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X00, 0X13 # addb %dl, (%r11)")
#define ADD_DL_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X00, 0X14, 0X24 # addb %dl, (%r12)")
#define ADD_DL_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X00, 0X55, 0X00 # addb %dl, (%r13)")
#define ADD_DL_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X00, 0X16 # addb %dl, (%r14)")
#define ADD_DL_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X00, 0X17 # addb %dl, (%r15)")
#define ADD_DL_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X00, 0X10 # addb %dl, (%eax)")
#define ADD_DL_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X00, 0X13 # addb %dl, (%ebx)")
#define ADD_DL_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X00, 0X11 # addb %dl, (%ecx)")
#define ADD_DL_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X00, 0X12 # addb %dl, (%edx)")
#define ADD_DL_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X00, 0X17 # addb %dl, (%edi)")
#define ADD_DL_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X00, 0X16 # addb %dl, (%esi)")
#define ADD_DL_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X00, 0X55, 0X00 # addb %dl, (%ebp)")
#define ADD_DL_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X00, 0X14, 0X24 # addb %dl, (%esp)")

#define ADD_DIL_TO_PTR_RAX CMT_ASM(".byte 0X40, 0X00, 0X38 # addb %dil, (%rax)")
#define ADD_DIL_TO_PTR_RBX CMT_ASM(".byte 0X40, 0X00, 0X3B # addb %dil, (%rbx)")
#define ADD_DIL_TO_PTR_RCX CMT_ASM(".byte 0X40, 0X00, 0X39 # addb %dil, (%rcx)")
#define ADD_DIL_TO_PTR_RDX CMT_ASM(".byte 0X40, 0X00, 0X3A # addb %dil, (%rdx)")
#define ADD_DIL_TO_PTR_RDI CMT_ASM(".byte 0X40, 0X00, 0X3F # addb %dil, (%rdi)")
#define ADD_DIL_TO_PTR_RSI CMT_ASM(".byte 0X40, 0X00, 0X3E # addb %dil, (%rsi)")
#define ADD_DIL_TO_PTR_RBP CMT_ASM(".byte 0X40, 0X00, 0X7D, 0X00 # addb %dil, (%rbp)")
#define ADD_DIL_TO_PTR_RSP CMT_ASM(".byte 0X40, 0X00, 0X3C, 0X24 # addb %dil, (%rsp)")
#define ADD_DIL_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X00, 0X38 # addb %dil, (%r8)")
#define ADD_DIL_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X00, 0X39 # addb %dil, (%r9)")
#define ADD_DIL_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X00, 0X3A # addb %dil, (%r10)")
#define ADD_DIL_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X00, 0X3B # addb %dil, (%r11)")
#define ADD_DIL_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X00, 0X3C, 0X24 # addb %dil, (%r12)")
#define ADD_DIL_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X00, 0X7D, 0X00 # addb %dil, (%r13)")
#define ADD_DIL_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X00, 0X3E # addb %dil, (%r14)")
#define ADD_DIL_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X00, 0X3F # addb %dil, (%r15)")
#define ADD_DIL_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X40, 0X00, 0X38 # addb %dil, (%eax)")
#define ADD_DIL_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X40, 0X00, 0X3B # addb %dil, (%ebx)")
#define ADD_DIL_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X40, 0X00, 0X39 # addb %dil, (%ecx)")
#define ADD_DIL_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X40, 0X00, 0X3A # addb %dil, (%edx)")
#define ADD_DIL_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X40, 0X00, 0X3F # addb %dil, (%edi)")
#define ADD_DIL_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X40, 0X00, 0X3E # addb %dil, (%esi)")
#define ADD_DIL_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X40, 0X00, 0X7D, 0X00 # addb %dil, (%ebp)")
#define ADD_DIL_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X40, 0X00, 0X3C, 0X24 # addb %dil, (%esp)")

#define ADD_SIL_TO_PTR_RAX CMT_ASM(".byte 0X40, 0X00, 0X30 # addb %sil, (%rax)")
#define ADD_SIL_TO_PTR_RBX CMT_ASM(".byte 0X40, 0X00, 0X33 # addb %sil, (%rbx)")
#define ADD_SIL_TO_PTR_RCX CMT_ASM(".byte 0X40, 0X00, 0X31 # addb %sil, (%rcx)")
#define ADD_SIL_TO_PTR_RDX CMT_ASM(".byte 0X40, 0X00, 0X32 # addb %sil, (%rdx)")
#define ADD_SIL_TO_PTR_RDI CMT_ASM(".byte 0X40, 0X00, 0X37 # addb %sil, (%rdi)")
#define ADD_SIL_TO_PTR_RSI CMT_ASM(".byte 0X40, 0X00, 0X36 # addb %sil, (%rsi)")
#define ADD_SIL_TO_PTR_RBP CMT_ASM(".byte 0X40, 0X00, 0X75, 0X00 # addb %sil, (%rbp)")
#define ADD_SIL_TO_PTR_RSP CMT_ASM(".byte 0X40, 0X00, 0X34, 0X24 # addb %sil, (%rsp)")
#define ADD_SIL_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X00, 0X30 # addb %sil, (%r8)")
#define ADD_SIL_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X00, 0X31 # addb %sil, (%r9)")
#define ADD_SIL_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X00, 0X32 # addb %sil, (%r10)")
#define ADD_SIL_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X00, 0X33 # addb %sil, (%r11)")
#define ADD_SIL_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X00, 0X34, 0X24 # addb %sil, (%r12)")
#define ADD_SIL_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X00, 0X75, 0X00 # addb %sil, (%r13)")
#define ADD_SIL_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X00, 0X36 # addb %sil, (%r14)")
#define ADD_SIL_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X00, 0X37 # addb %sil, (%r15)")
#define ADD_SIL_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X40, 0X00, 0X30 # addb %sil, (%eax)")
#define ADD_SIL_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X40, 0X00, 0X33 # addb %sil, (%ebx)")
#define ADD_SIL_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X40, 0X00, 0X31 # addb %sil, (%ecx)")
#define ADD_SIL_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X40, 0X00, 0X32 # addb %sil, (%edx)")
#define ADD_SIL_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X40, 0X00, 0X37 # addb %sil, (%edi)")
#define ADD_SIL_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X40, 0X00, 0X36 # addb %sil, (%esi)")
#define ADD_SIL_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X40, 0X00, 0X75, 0X00 # addb %sil, (%ebp)")
#define ADD_SIL_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X40, 0X00, 0X34, 0X24 # addb %sil, (%esp)")

#define ADD_BPL_TO_PTR_RAX CMT_ASM(".byte 0X40, 0X00, 0X28 # addb %bpl, (%rax)")
#define ADD_BPL_TO_PTR_RBX CMT_ASM(".byte 0X40, 0X00, 0X2B # addb %bpl, (%rbx)")
#define ADD_BPL_TO_PTR_RCX CMT_ASM(".byte 0X40, 0X00, 0X29 # addb %bpl, (%rcx)")
#define ADD_BPL_TO_PTR_RDX CMT_ASM(".byte 0X40, 0X00, 0X2A # addb %bpl, (%rdx)")
#define ADD_BPL_TO_PTR_RDI CMT_ASM(".byte 0X40, 0X00, 0X2F # addb %bpl, (%rdi)")
#define ADD_BPL_TO_PTR_RSI CMT_ASM(".byte 0X40, 0X00, 0X2E # addb %bpl, (%rsi)")
#define ADD_BPL_TO_PTR_RBP CMT_ASM(".byte 0X40, 0X00, 0X6D, 0X00 # addb %bpl, (%rbp)")
#define ADD_BPL_TO_PTR_RSP CMT_ASM(".byte 0X40, 0X00, 0X2C, 0X24 # addb %bpl, (%rsp)")
#define ADD_BPL_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X00, 0X28 # addb %bpl, (%r8)")
#define ADD_BPL_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X00, 0X29 # addb %bpl, (%r9)")
#define ADD_BPL_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X00, 0X2A # addb %bpl, (%r10)")
#define ADD_BPL_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X00, 0X2B # addb %bpl, (%r11)")
#define ADD_BPL_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X00, 0X2C, 0X24 # addb %bpl, (%r12)")
#define ADD_BPL_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X00, 0X6D, 0X00 # addb %bpl, (%r13)")
#define ADD_BPL_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X00, 0X2E # addb %bpl, (%r14)")
#define ADD_BPL_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X00, 0X2F # addb %bpl, (%r15)")
#define ADD_BPL_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X40, 0X00, 0X28 # addb %bpl, (%eax)")
#define ADD_BPL_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X40, 0X00, 0X2B # addb %bpl, (%ebx)")
#define ADD_BPL_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X40, 0X00, 0X29 # addb %bpl, (%ecx)")
#define ADD_BPL_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X40, 0X00, 0X2A # addb %bpl, (%edx)")
#define ADD_BPL_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X40, 0X00, 0X2F # addb %bpl, (%edi)")
#define ADD_BPL_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X40, 0X00, 0X2E # addb %bpl, (%esi)")
#define ADD_BPL_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X40, 0X00, 0X6D, 0X00 # addb %bpl, (%ebp)")
#define ADD_BPL_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X40, 0X00, 0X2C, 0X24 # addb %bpl, (%esp)")

#define ADD_SPL_TO_PTR_RAX CMT_ASM(".byte 0X40, 0X00, 0X20 # addb %spl, (%rax)")
#define ADD_SPL_TO_PTR_RBX CMT_ASM(".byte 0X40, 0X00, 0X23 # addb %spl, (%rbx)")
#define ADD_SPL_TO_PTR_RCX CMT_ASM(".byte 0X40, 0X00, 0X21 # addb %spl, (%rcx)")
#define ADD_SPL_TO_PTR_RDX CMT_ASM(".byte 0X40, 0X00, 0X22 # addb %spl, (%rdx)")
#define ADD_SPL_TO_PTR_RDI CMT_ASM(".byte 0X40, 0X00, 0X27 # addb %spl, (%rdi)")
#define ADD_SPL_TO_PTR_RSI CMT_ASM(".byte 0X40, 0X00, 0X26 # addb %spl, (%rsi)")
#define ADD_SPL_TO_PTR_RBP CMT_ASM(".byte 0X40, 0X00, 0X65, 0X00 # addb %spl, (%rbp)")
#define ADD_SPL_TO_PTR_RSP CMT_ASM(".byte 0X40, 0X00, 0X24, 0X24 # addb %spl, (%rsp)")
#define ADD_SPL_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X00, 0X20 # addb %spl, (%r8)")
#define ADD_SPL_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X00, 0X21 # addb %spl, (%r9)")
#define ADD_SPL_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X00, 0X22 # addb %spl, (%r10)")
#define ADD_SPL_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X00, 0X23 # addb %spl, (%r11)")
#define ADD_SPL_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X00, 0X24, 0X24 # addb %spl, (%r12)")
#define ADD_SPL_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X00, 0X65, 0X00 # addb %spl, (%r13)")
#define ADD_SPL_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X00, 0X26 # addb %spl, (%r14)")
#define ADD_SPL_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X00, 0X27 # addb %spl, (%r15)")
#define ADD_SPL_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X40, 0X00, 0X20 # addb %spl, (%eax)")
#define ADD_SPL_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X40, 0X00, 0X23 # addb %spl, (%ebx)")
#define ADD_SPL_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X40, 0X00, 0X21 # addb %spl, (%ecx)")
#define ADD_SPL_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X40, 0X00, 0X22 # addb %spl, (%edx)")
#define ADD_SPL_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X40, 0X00, 0X27 # addb %spl, (%edi)")
#define ADD_SPL_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X40, 0X00, 0X26 # addb %spl, (%esi)")
#define ADD_SPL_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X40, 0X00, 0X65, 0X00 # addb %spl, (%ebp)")
#define ADD_SPL_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X40, 0X00, 0X24, 0X24 # addb %spl, (%esp)")

#define ADD_R8B_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X00, 0X00 # addb %r8b, (%rax)")
#define ADD_R8B_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X00, 0X03 # addb %r8b, (%rbx)")
#define ADD_R8B_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X00, 0X01 # addb %r8b, (%rcx)")
#define ADD_R8B_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X00, 0X02 # addb %r8b, (%rdx)")
#define ADD_R8B_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X00, 0X07 # addb %r8b, (%rdi)")
#define ADD_R8B_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X00, 0X06 # addb %r8b, (%rsi)")
#define ADD_R8B_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X00, 0X45, 0X00 # addb %r8b, (%rbp)")
#define ADD_R8B_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X00, 0X04, 0X24 # addb %r8b, (%rsp)")
#define ADD_R8B_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X00, 0X00 # addb %r8b, (%r8)")
#define ADD_R8B_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X00, 0X01 # addb %r8b, (%r9)")
#define ADD_R8B_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X00, 0X02 # addb %r8b, (%r10)")
#define ADD_R8B_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X00, 0X03 # addb %r8b, (%r11)")
#define ADD_R8B_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X00, 0X04, 0X24 # addb %r8b, (%r12)")
#define ADD_R8B_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X00, 0X45, 0X00 # addb %r8b, (%r13)")
#define ADD_R8B_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X00, 0X06 # addb %r8b, (%r14)")
#define ADD_R8B_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X00, 0X07 # addb %r8b, (%r15)")
#define ADD_R8B_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X00, 0X00 # addb %r8b, (%eax)")
#define ADD_R8B_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X00, 0X03 # addb %r8b, (%ebx)")
#define ADD_R8B_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X00, 0X01 # addb %r8b, (%ecx)")
#define ADD_R8B_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X00, 0X02 # addb %r8b, (%edx)")
#define ADD_R8B_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X00, 0X07 # addb %r8b, (%edi)")
#define ADD_R8B_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X00, 0X06 # addb %r8b, (%esi)")
#define ADD_R8B_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X00, 0X45, 0X00 # addb %r8b, (%ebp)")
#define ADD_R8B_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X00, 0X04, 0X24 # addb %r8b, (%esp)")

#define ADD_R9B_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X00, 0X08 # addb %r9b, (%rax)")
#define ADD_R9B_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X00, 0X0B # addb %r9b, (%rbx)")
#define ADD_R9B_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X00, 0X09 # addb %r9b, (%rcx)")
#define ADD_R9B_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X00, 0X0A # addb %r9b, (%rdx)")
#define ADD_R9B_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X00, 0X0F # addb %r9b, (%rdi)")
#define ADD_R9B_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X00, 0X0E # addb %r9b, (%rsi)")
#define ADD_R9B_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X00, 0X4D, 0X00 # addb %r9b, (%rbp)")
#define ADD_R9B_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X00, 0X0C, 0X24 # addb %r9b, (%rsp)")
#define ADD_R9B_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X00, 0X08 # addb %r9b, (%r8)")
#define ADD_R9B_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X00, 0X09 # addb %r9b, (%r9)")
#define ADD_R9B_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X00, 0X0A # addb %r9b, (%r10)")
#define ADD_R9B_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X00, 0X0B # addb %r9b, (%r11)")
#define ADD_R9B_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X00, 0X0C, 0X24 # addb %r9b, (%r12)")
#define ADD_R9B_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X00, 0X4D, 0X00 # addb %r9b, (%r13)")
#define ADD_R9B_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X00, 0X0E # addb %r9b, (%r14)")
#define ADD_R9B_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X00, 0X0F # addb %r9b, (%r15)")
#define ADD_R9B_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X00, 0X08 # addb %r9b, (%eax)")
#define ADD_R9B_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X00, 0X0B # addb %r9b, (%ebx)")
#define ADD_R9B_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X00, 0X09 # addb %r9b, (%ecx)")
#define ADD_R9B_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X00, 0X0A # addb %r9b, (%edx)")
#define ADD_R9B_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X00, 0X0F # addb %r9b, (%edi)")
#define ADD_R9B_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X00, 0X0E # addb %r9b, (%esi)")
#define ADD_R9B_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X00, 0X4D, 0X00 # addb %r9b, (%ebp)")
#define ADD_R9B_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X00, 0X0C, 0X24 # addb %r9b, (%esp)")

#define ADD_R10B_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X00, 0X10 # addb %r10b, (%rax)")
#define ADD_R10B_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X00, 0X13 # addb %r10b, (%rbx)")
#define ADD_R10B_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X00, 0X11 # addb %r10b, (%rcx)")
#define ADD_R10B_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X00, 0X12 # addb %r10b, (%rdx)")
#define ADD_R10B_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X00, 0X17 # addb %r10b, (%rdi)")
#define ADD_R10B_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X00, 0X16 # addb %r10b, (%rsi)")
#define ADD_R10B_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X00, 0X55, 0X00 # addb %r10b, (%rbp)")
#define ADD_R10B_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X00, 0X14, 0X24 # addb %r10b, (%rsp)")
#define ADD_R10B_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X00, 0X10 # addb %r10b, (%r8)")
#define ADD_R10B_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X00, 0X11 # addb %r10b, (%r9)")
#define ADD_R10B_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X00, 0X12 # addb %r10b, (%r10)")
#define ADD_R10B_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X00, 0X13 # addb %r10b, (%r11)")
#define ADD_R10B_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X00, 0X14, 0X24 # addb %r10b, (%r12)")
#define ADD_R10B_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X00, 0X55, 0X00 # addb %r10b, (%r13)")
#define ADD_R10B_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X00, 0X16 # addb %r10b, (%r14)")
#define ADD_R10B_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X00, 0X17 # addb %r10b, (%r15)")
#define ADD_R10B_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X00, 0X10 # addb %r10b, (%eax)")
#define ADD_R10B_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X00, 0X13 # addb %r10b, (%ebx)")
#define ADD_R10B_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X00, 0X11 # addb %r10b, (%ecx)")
#define ADD_R10B_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X00, 0X12 # addb %r10b, (%edx)")
#define ADD_R10B_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X00, 0X17 # addb %r10b, (%edi)")
#define ADD_R10B_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X00, 0X16 # addb %r10b, (%esi)")
#define ADD_R10B_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X00, 0X55, 0X00 # addb %r10b, (%ebp)")
#define ADD_R10B_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X00, 0X14, 0X24 # addb %r10b, (%esp)")

#define ADD_R11B_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X00, 0X18 # addb %r11b, (%rax)")
#define ADD_R11B_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X00, 0X1B # addb %r11b, (%rbx)")
#define ADD_R11B_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X00, 0X19 # addb %r11b, (%rcx)")
#define ADD_R11B_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X00, 0X1A # addb %r11b, (%rdx)")
#define ADD_R11B_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X00, 0X1F # addb %r11b, (%rdi)")
#define ADD_R11B_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X00, 0X1E # addb %r11b, (%rsi)")
#define ADD_R11B_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X00, 0X5D, 0X00 # addb %r11b, (%rbp)")
#define ADD_R11B_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X00, 0X1C, 0X24 # addb %r11b, (%rsp)")
#define ADD_R11B_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X00, 0X18 # addb %r11b, (%r8)")
#define ADD_R11B_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X00, 0X19 # addb %r11b, (%r9)")
#define ADD_R11B_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X00, 0X1A # addb %r11b, (%r10)")
#define ADD_R11B_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X00, 0X1B # addb %r11b, (%r11)")
#define ADD_R11B_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X00, 0X1C, 0X24 # addb %r11b, (%r12)")
#define ADD_R11B_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X00, 0X5D, 0X00 # addb %r11b, (%r13)")
#define ADD_R11B_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X00, 0X1E # addb %r11b, (%r14)")
#define ADD_R11B_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X00, 0X1F # addb %r11b, (%r15)")
#define ADD_R11B_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X00, 0X18 # addb %r11b, (%eax)")
#define ADD_R11B_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X00, 0X1B # addb %r11b, (%ebx)")
#define ADD_R11B_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X00, 0X19 # addb %r11b, (%ecx)")
#define ADD_R11B_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X00, 0X1A # addb %r11b, (%edx)")
#define ADD_R11B_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X00, 0X1F # addb %r11b, (%edi)")
#define ADD_R11B_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X00, 0X1E # addb %r11b, (%esi)")
#define ADD_R11B_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X00, 0X5D, 0X00 # addb %r11b, (%ebp)")
#define ADD_R11B_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X00, 0X1C, 0X24 # addb %r11b, (%esp)")

#define ADD_R12B_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X00, 0X20 # addb %r12b, (%rax)")
#define ADD_R12B_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X00, 0X23 # addb %r12b, (%rbx)")
#define ADD_R12B_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X00, 0X21 # addb %r12b, (%rcx)")
#define ADD_R12B_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X00, 0X22 # addb %r12b, (%rdx)")
#define ADD_R12B_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X00, 0X27 # addb %r12b, (%rdi)")
#define ADD_R12B_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X00, 0X26 # addb %r12b, (%rsi)")
#define ADD_R12B_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X00, 0X65, 0X00 # addb %r12b, (%rbp)")
#define ADD_R12B_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X00, 0X24, 0X24 # addb %r12b, (%rsp)")
#define ADD_R12B_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X00, 0X20 # addb %r12b, (%r8)")
#define ADD_R12B_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X00, 0X21 # addb %r12b, (%r9)")
#define ADD_R12B_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X00, 0X22 # addb %r12b, (%r10)")
#define ADD_R12B_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X00, 0X23 # addb %r12b, (%r11)")
#define ADD_R12B_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X00, 0X24, 0X24 # addb %r12b, (%r12)")
#define ADD_R12B_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X00, 0X65, 0X00 # addb %r12b, (%r13)")
#define ADD_R12B_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X00, 0X26 # addb %r12b, (%r14)")
#define ADD_R12B_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X00, 0X27 # addb %r12b, (%r15)")
#define ADD_R12B_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X00, 0X20 # addb %r12b, (%eax)")
#define ADD_R12B_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X00, 0X23 # addb %r12b, (%ebx)")
#define ADD_R12B_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X00, 0X21 # addb %r12b, (%ecx)")
#define ADD_R12B_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X00, 0X22 # addb %r12b, (%edx)")
#define ADD_R12B_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X00, 0X27 # addb %r12b, (%edi)")
#define ADD_R12B_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X00, 0X26 # addb %r12b, (%esi)")
#define ADD_R12B_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X00, 0X65, 0X00 # addb %r12b, (%ebp)")
#define ADD_R12B_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X00, 0X24, 0X24 # addb %r12b, (%esp)")

#define ADD_R13B_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X00, 0X28 # addb %r13b, (%rax)")
#define ADD_R13B_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X00, 0X2B # addb %r13b, (%rbx)")
#define ADD_R13B_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X00, 0X29 # addb %r13b, (%rcx)")
#define ADD_R13B_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X00, 0X2A # addb %r13b, (%rdx)")
#define ADD_R13B_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X00, 0X2F # addb %r13b, (%rdi)")
#define ADD_R13B_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X00, 0X2E # addb %r13b, (%rsi)")
#define ADD_R13B_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X00, 0X6D, 0X00 # addb %r13b, (%rbp)")
#define ADD_R13B_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X00, 0X2C, 0X24 # addb %r13b, (%rsp)")
#define ADD_R13B_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X00, 0X28 # addb %r13b, (%r8)")
#define ADD_R13B_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X00, 0X29 # addb %r13b, (%r9)")
#define ADD_R13B_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X00, 0X2A # addb %r13b, (%r10)")
#define ADD_R13B_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X00, 0X2B # addb %r13b, (%r11)")
#define ADD_R13B_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X00, 0X2C, 0X24 # addb %r13b, (%r12)")
#define ADD_R13B_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X00, 0X6D, 0X00 # addb %r13b, (%r13)")
#define ADD_R13B_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X00, 0X2E # addb %r13b, (%r14)")
#define ADD_R13B_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X00, 0X2F # addb %r13b, (%r15)")
#define ADD_R13B_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X00, 0X28 # addb %r13b, (%eax)")
#define ADD_R13B_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X00, 0X2B # addb %r13b, (%ebx)")
#define ADD_R13B_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X00, 0X29 # addb %r13b, (%ecx)")
#define ADD_R13B_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X00, 0X2A # addb %r13b, (%edx)")
#define ADD_R13B_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X00, 0X2F # addb %r13b, (%edi)")
#define ADD_R13B_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X00, 0X2E # addb %r13b, (%esi)")
#define ADD_R13B_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X00, 0X6D, 0X00 # addb %r13b, (%ebp)")
#define ADD_R13B_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X00, 0X2C, 0X24 # addb %r13b, (%esp)")

#define ADD_R14B_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X00, 0X30 # addb %r14b, (%rax)")
#define ADD_R14B_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X00, 0X33 # addb %r14b, (%rbx)")
#define ADD_R14B_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X00, 0X31 # addb %r14b, (%rcx)")
#define ADD_R14B_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X00, 0X32 # addb %r14b, (%rdx)")
#define ADD_R14B_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X00, 0X37 # addb %r14b, (%rdi)")
#define ADD_R14B_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X00, 0X36 # addb %r14b, (%rsi)")
#define ADD_R14B_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X00, 0X75, 0X00 # addb %r14b, (%rbp)")
#define ADD_R14B_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X00, 0X34, 0X24 # addb %r14b, (%rsp)")
#define ADD_R14B_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X00, 0X30 # addb %r14b, (%r8)")
#define ADD_R14B_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X00, 0X31 # addb %r14b, (%r9)")
#define ADD_R14B_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X00, 0X32 # addb %r14b, (%r10)")
#define ADD_R14B_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X00, 0X33 # addb %r14b, (%r11)")
#define ADD_R14B_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X00, 0X34, 0X24 # addb %r14b, (%r12)")
#define ADD_R14B_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X00, 0X75, 0X00 # addb %r14b, (%r13)")
#define ADD_R14B_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X00, 0X36 # addb %r14b, (%r14)")
#define ADD_R14B_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X00, 0X37 # addb %r14b, (%r15)")
#define ADD_R14B_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X00, 0X30 # addb %r14b, (%eax)")
#define ADD_R14B_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X00, 0X33 # addb %r14b, (%ebx)")
#define ADD_R14B_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X00, 0X31 # addb %r14b, (%ecx)")
#define ADD_R14B_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X00, 0X32 # addb %r14b, (%edx)")
#define ADD_R14B_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X00, 0X37 # addb %r14b, (%edi)")
#define ADD_R14B_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X00, 0X36 # addb %r14b, (%esi)")
#define ADD_R14B_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X00, 0X75, 0X00 # addb %r14b, (%ebp)")
#define ADD_R14B_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X00, 0X34, 0X24 # addb %r14b, (%esp)")

#define ADD_R15B_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X00, 0X38 # addb %r15b, (%rax)")
#define ADD_R15B_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X00, 0X3B # addb %r15b, (%rbx)")
#define ADD_R15B_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X00, 0X39 # addb %r15b, (%rcx)")
#define ADD_R15B_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X00, 0X3A # addb %r15b, (%rdx)")
#define ADD_R15B_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X00, 0X3F # addb %r15b, (%rdi)")
#define ADD_R15B_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X00, 0X3E # addb %r15b, (%rsi)")
#define ADD_R15B_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X00, 0X7D, 0X00 # addb %r15b, (%rbp)")
#define ADD_R15B_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X00, 0X3C, 0X24 # addb %r15b, (%rsp)")
#define ADD_R15B_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X00, 0X38 # addb %r15b, (%r8)")
#define ADD_R15B_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X00, 0X39 # addb %r15b, (%r9)")
#define ADD_R15B_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X00, 0X3A # addb %r15b, (%r10)")
#define ADD_R15B_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X00, 0X3B # addb %r15b, (%r11)")
#define ADD_R15B_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X00, 0X3C, 0X24 # addb %r15b, (%r12)")
#define ADD_R15B_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X00, 0X7D, 0X00 # addb %r15b, (%r13)")
#define ADD_R15B_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X00, 0X3E # addb %r15b, (%r14)")
#define ADD_R15B_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X00, 0X3F # addb %r15b, (%r15)")
#define ADD_R15B_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X00, 0X38 # addb %r15b, (%eax)")
#define ADD_R15B_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X00, 0X3B # addb %r15b, (%ebx)")
#define ADD_R15B_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X00, 0X39 # addb %r15b, (%ecx)")
#define ADD_R15B_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X00, 0X3A # addb %r15b, (%edx)")
#define ADD_R15B_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X00, 0X3F # addb %r15b, (%edi)")
#define ADD_R15B_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X00, 0X3E # addb %r15b, (%esi)")
#define ADD_R15B_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X00, 0X7D, 0X00 # addb %r15b, (%ebp)")
#define ADD_R15B_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X00, 0X3C, 0X24 # addb %r15b, (%esp)")

#define ADD_AL_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X02, 0X80 # addb " _(VALUE) "(%rax), %al")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AL_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X02, 0X83 # addb " _(VALUE) "(%rbx), %al")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AL_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X02, 0X81 # addb " _(VALUE) "(%rcx), %al")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AL_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X02, 0X82 # addb " _(VALUE) "(%rdx), %al")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AL_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X02, 0X87 # addb " _(VALUE) "(%rdi), %al")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AL_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X02, 0X86 # addb " _(VALUE) "(%rsi), %al")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AL_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X02, 0X85 # addb " _(VALUE) "(%rbp), %al")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AL_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X02, 0X84, 0X24 # addb " _(VALUE) "(%rsp), %al")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AL_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X02, 0X80 # addb " _(VALUE) "(%r8), %al")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AL_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X02, 0X81 # addb " _(VALUE) "(%r9), %al")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AL_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X02, 0X82 # addb " _(VALUE) "(%r10), %al")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AL_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X02, 0X83 # addb " _(VALUE) "(%r11), %al")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AL_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X02, 0X84, 0X24 # addb " _(VALUE) "(%r12), %al")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AL_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X02, 0X85 # addb " _(VALUE) "(%r13), %al")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AL_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X02, 0X86 # addb " _(VALUE) "(%r14), %al")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AL_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X02, 0X87 # addb " _(VALUE) "(%r15), %al")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X02, 0X80 # addb " _(VALUE) "(%eax), %al")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X02, 0X83 # addb " _(VALUE) "(%ebx), %al")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X02, 0X81 # addb " _(VALUE) "(%ecx), %al")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X02, 0X82 # addb " _(VALUE) "(%edx), %al")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X02, 0X87 # addb " _(VALUE) "(%edi), %al")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X02, 0X86 # addb " _(VALUE) "(%esi), %al")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X02, 0X85 # addb " _(VALUE) "(%ebp), %al")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X02, 0X84, 0X24 # addb " _(VALUE) "(%esp), %al")\
	CMT_ASM(".long " _(VALUE))

#define ADD_BL_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X02, 0X98 # addb " _(VALUE) "(%rax), %bl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BL_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X02, 0X9B # addb " _(VALUE) "(%rbx), %bl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BL_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X02, 0X99 # addb " _(VALUE) "(%rcx), %bl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BL_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X02, 0X9A # addb " _(VALUE) "(%rdx), %bl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BL_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X02, 0X9F # addb " _(VALUE) "(%rdi), %bl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BL_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X02, 0X9E # addb " _(VALUE) "(%rsi), %bl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BL_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X02, 0X9D # addb " _(VALUE) "(%rbp), %bl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BL_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X02, 0X9C, 0X24 # addb " _(VALUE) "(%rsp), %bl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BL_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X02, 0X98 # addb " _(VALUE) "(%r8), %bl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BL_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X02, 0X99 # addb " _(VALUE) "(%r9), %bl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BL_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X02, 0X9A # addb " _(VALUE) "(%r10), %bl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BL_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X02, 0X9B # addb " _(VALUE) "(%r11), %bl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BL_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X02, 0X9C, 0X24 # addb " _(VALUE) "(%r12), %bl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BL_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X02, 0X9D # addb " _(VALUE) "(%r13), %bl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BL_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X02, 0X9E # addb " _(VALUE) "(%r14), %bl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BL_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X02, 0X9F # addb " _(VALUE) "(%r15), %bl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X02, 0X98 # addb " _(VALUE) "(%eax), %bl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X02, 0X9B # addb " _(VALUE) "(%ebx), %bl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X02, 0X99 # addb " _(VALUE) "(%ecx), %bl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X02, 0X9A # addb " _(VALUE) "(%edx), %bl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X02, 0X9F # addb " _(VALUE) "(%edi), %bl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X02, 0X9E # addb " _(VALUE) "(%esi), %bl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X02, 0X9D # addb " _(VALUE) "(%ebp), %bl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X02, 0X9C, 0X24 # addb " _(VALUE) "(%esp), %bl")\
	CMT_ASM(".long " _(VALUE))

#define ADD_CL_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X02, 0X88 # addb " _(VALUE) "(%rax), %cl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CL_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X02, 0X8B # addb " _(VALUE) "(%rbx), %cl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CL_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X02, 0X89 # addb " _(VALUE) "(%rcx), %cl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CL_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X02, 0X8A # addb " _(VALUE) "(%rdx), %cl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CL_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X02, 0X8F # addb " _(VALUE) "(%rdi), %cl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CL_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X02, 0X8E # addb " _(VALUE) "(%rsi), %cl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CL_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X02, 0X8D # addb " _(VALUE) "(%rbp), %cl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CL_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X02, 0X8C, 0X24 # addb " _(VALUE) "(%rsp), %cl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CL_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X02, 0X88 # addb " _(VALUE) "(%r8), %cl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CL_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X02, 0X89 # addb " _(VALUE) "(%r9), %cl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CL_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X02, 0X8A # addb " _(VALUE) "(%r10), %cl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CL_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X02, 0X8B # addb " _(VALUE) "(%r11), %cl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CL_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X02, 0X8C, 0X24 # addb " _(VALUE) "(%r12), %cl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CL_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X02, 0X8D # addb " _(VALUE) "(%r13), %cl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CL_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X02, 0X8E # addb " _(VALUE) "(%r14), %cl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CL_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X02, 0X8F # addb " _(VALUE) "(%r15), %cl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X02, 0X88 # addb " _(VALUE) "(%eax), %cl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X02, 0X8B # addb " _(VALUE) "(%ebx), %cl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X02, 0X89 # addb " _(VALUE) "(%ecx), %cl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X02, 0X8A # addb " _(VALUE) "(%edx), %cl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X02, 0X8F # addb " _(VALUE) "(%edi), %cl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X02, 0X8E # addb " _(VALUE) "(%esi), %cl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X02, 0X8D # addb " _(VALUE) "(%ebp), %cl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X02, 0X8C, 0X24 # addb " _(VALUE) "(%esp), %cl")\
	CMT_ASM(".long " _(VALUE))

#define ADD_DL_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X02, 0X90 # addb " _(VALUE) "(%rax), %dl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DL_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X02, 0X93 # addb " _(VALUE) "(%rbx), %dl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DL_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X02, 0X91 # addb " _(VALUE) "(%rcx), %dl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DL_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X02, 0X92 # addb " _(VALUE) "(%rdx), %dl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DL_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X02, 0X97 # addb " _(VALUE) "(%rdi), %dl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DL_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X02, 0X96 # addb " _(VALUE) "(%rsi), %dl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DL_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X02, 0X95 # addb " _(VALUE) "(%rbp), %dl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DL_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X02, 0X94, 0X24 # addb " _(VALUE) "(%rsp), %dl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DL_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X02, 0X90 # addb " _(VALUE) "(%r8), %dl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DL_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X02, 0X91 # addb " _(VALUE) "(%r9), %dl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DL_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X02, 0X92 # addb " _(VALUE) "(%r10), %dl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DL_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X02, 0X93 # addb " _(VALUE) "(%r11), %dl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DL_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X02, 0X94, 0X24 # addb " _(VALUE) "(%r12), %dl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DL_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X02, 0X95 # addb " _(VALUE) "(%r13), %dl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DL_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X02, 0X96 # addb " _(VALUE) "(%r14), %dl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DL_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X02, 0X97 # addb " _(VALUE) "(%r15), %dl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X02, 0X90 # addb " _(VALUE) "(%eax), %dl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X02, 0X93 # addb " _(VALUE) "(%ebx), %dl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X02, 0X91 # addb " _(VALUE) "(%ecx), %dl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X02, 0X92 # addb " _(VALUE) "(%edx), %dl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X02, 0X97 # addb " _(VALUE) "(%edi), %dl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X02, 0X96 # addb " _(VALUE) "(%esi), %dl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X02, 0X95 # addb " _(VALUE) "(%ebp), %dl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X02, 0X94, 0X24 # addb " _(VALUE) "(%esp), %dl")\
	CMT_ASM(".long " _(VALUE))

#define ADD_DIL_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X02, 0XB8 # addb " _(VALUE) "(%rax), %dil")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DIL_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X02, 0XBB # addb " _(VALUE) "(%rbx), %dil")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DIL_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X02, 0XB9 # addb " _(VALUE) "(%rcx), %dil")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DIL_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X02, 0XBA # addb " _(VALUE) "(%rdx), %dil")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DIL_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X02, 0XBF # addb " _(VALUE) "(%rdi), %dil")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DIL_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X02, 0XBE # addb " _(VALUE) "(%rsi), %dil")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DIL_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X02, 0XBD # addb " _(VALUE) "(%rbp), %dil")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DIL_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X02, 0XBC, 0X24 # addb " _(VALUE) "(%rsp), %dil")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DIL_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X02, 0XB8 # addb " _(VALUE) "(%r8), %dil")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DIL_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X02, 0XB9 # addb " _(VALUE) "(%r9), %dil")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DIL_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X02, 0XBA # addb " _(VALUE) "(%r10), %dil")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DIL_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X02, 0XBB # addb " _(VALUE) "(%r11), %dil")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DIL_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X02, 0XBC, 0X24 # addb " _(VALUE) "(%r12), %dil")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DIL_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X02, 0XBD # addb " _(VALUE) "(%r13), %dil")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DIL_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X02, 0XBE # addb " _(VALUE) "(%r14), %dil")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DIL_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X02, 0XBF # addb " _(VALUE) "(%r15), %dil")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DIL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X02, 0XB8 # addb " _(VALUE) "(%eax), %dil")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DIL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X02, 0XBB # addb " _(VALUE) "(%ebx), %dil")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DIL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X02, 0XB9 # addb " _(VALUE) "(%ecx), %dil")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DIL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X02, 0XBA # addb " _(VALUE) "(%edx), %dil")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DIL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X02, 0XBF # addb " _(VALUE) "(%edi), %dil")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DIL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X02, 0XBE # addb " _(VALUE) "(%esi), %dil")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DIL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X02, 0XBD # addb " _(VALUE) "(%ebp), %dil")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DIL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X02, 0XBC, 0X24 # addb " _(VALUE) "(%esp), %dil")\
	CMT_ASM(".long " _(VALUE))

#define ADD_SIL_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X02, 0XB0 # addb " _(VALUE) "(%rax), %sil")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SIL_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X02, 0XB3 # addb " _(VALUE) "(%rbx), %sil")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SIL_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X02, 0XB1 # addb " _(VALUE) "(%rcx), %sil")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SIL_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X02, 0XB2 # addb " _(VALUE) "(%rdx), %sil")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SIL_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X02, 0XB7 # addb " _(VALUE) "(%rdi), %sil")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SIL_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X02, 0XB6 # addb " _(VALUE) "(%rsi), %sil")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SIL_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X02, 0XB5 # addb " _(VALUE) "(%rbp), %sil")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SIL_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X02, 0XB4, 0X24 # addb " _(VALUE) "(%rsp), %sil")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SIL_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X02, 0XB0 # addb " _(VALUE) "(%r8), %sil")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SIL_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X02, 0XB1 # addb " _(VALUE) "(%r9), %sil")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SIL_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X02, 0XB2 # addb " _(VALUE) "(%r10), %sil")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SIL_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X02, 0XB3 # addb " _(VALUE) "(%r11), %sil")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SIL_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X02, 0XB4, 0X24 # addb " _(VALUE) "(%r12), %sil")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SIL_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X02, 0XB5 # addb " _(VALUE) "(%r13), %sil")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SIL_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X02, 0XB6 # addb " _(VALUE) "(%r14), %sil")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SIL_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X02, 0XB7 # addb " _(VALUE) "(%r15), %sil")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SIL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X02, 0XB0 # addb " _(VALUE) "(%eax), %sil")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SIL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X02, 0XB3 # addb " _(VALUE) "(%ebx), %sil")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SIL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X02, 0XB1 # addb " _(VALUE) "(%ecx), %sil")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SIL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X02, 0XB2 # addb " _(VALUE) "(%edx), %sil")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SIL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X02, 0XB7 # addb " _(VALUE) "(%edi), %sil")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SIL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X02, 0XB6 # addb " _(VALUE) "(%esi), %sil")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SIL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X02, 0XB5 # addb " _(VALUE) "(%ebp), %sil")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SIL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X02, 0XB4, 0X24 # addb " _(VALUE) "(%esp), %sil")\
	CMT_ASM(".long " _(VALUE))

#define ADD_BPL_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X02, 0XA8 # addb " _(VALUE) "(%rax), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BPL_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X02, 0XAB # addb " _(VALUE) "(%rbx), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BPL_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X02, 0XA9 # addb " _(VALUE) "(%rcx), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BPL_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X02, 0XAA # addb " _(VALUE) "(%rdx), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BPL_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X02, 0XAF # addb " _(VALUE) "(%rdi), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BPL_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X02, 0XAE # addb " _(VALUE) "(%rsi), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BPL_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X02, 0XAD # addb " _(VALUE) "(%rbp), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BPL_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X02, 0XAC, 0X24 # addb " _(VALUE) "(%rsp), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BPL_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X02, 0XA8 # addb " _(VALUE) "(%r8), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BPL_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X02, 0XA9 # addb " _(VALUE) "(%r9), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BPL_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X02, 0XAA # addb " _(VALUE) "(%r10), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BPL_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X02, 0XAB # addb " _(VALUE) "(%r11), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BPL_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X02, 0XAC, 0X24 # addb " _(VALUE) "(%r12), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BPL_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X02, 0XAD # addb " _(VALUE) "(%r13), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BPL_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X02, 0XAE # addb " _(VALUE) "(%r14), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BPL_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X02, 0XAF # addb " _(VALUE) "(%r15), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BPL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X02, 0XA8 # addb " _(VALUE) "(%eax), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BPL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X02, 0XAB # addb " _(VALUE) "(%ebx), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BPL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X02, 0XA9 # addb " _(VALUE) "(%ecx), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BPL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X02, 0XAA # addb " _(VALUE) "(%edx), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BPL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X02, 0XAF # addb " _(VALUE) "(%edi), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BPL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X02, 0XAE # addb " _(VALUE) "(%esi), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BPL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X02, 0XAD # addb " _(VALUE) "(%ebp), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BPL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X02, 0XAC, 0X24 # addb " _(VALUE) "(%esp), %bpl")\
	CMT_ASM(".long " _(VALUE))

#define ADD_SPL_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X02, 0XA0 # addb " _(VALUE) "(%rax), %spl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SPL_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X02, 0XA3 # addb " _(VALUE) "(%rbx), %spl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SPL_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X02, 0XA1 # addb " _(VALUE) "(%rcx), %spl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SPL_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X02, 0XA2 # addb " _(VALUE) "(%rdx), %spl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SPL_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X02, 0XA7 # addb " _(VALUE) "(%rdi), %spl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SPL_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X02, 0XA6 # addb " _(VALUE) "(%rsi), %spl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SPL_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X02, 0XA5 # addb " _(VALUE) "(%rbp), %spl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SPL_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X02, 0XA4, 0X24 # addb " _(VALUE) "(%rsp), %spl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SPL_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X02, 0XA0 # addb " _(VALUE) "(%r8), %spl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SPL_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X02, 0XA1 # addb " _(VALUE) "(%r9), %spl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SPL_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X02, 0XA2 # addb " _(VALUE) "(%r10), %spl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SPL_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X02, 0XA3 # addb " _(VALUE) "(%r11), %spl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SPL_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X02, 0XA4, 0X24 # addb " _(VALUE) "(%r12), %spl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SPL_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X02, 0XA5 # addb " _(VALUE) "(%r13), %spl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SPL_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X02, 0XA6 # addb " _(VALUE) "(%r14), %spl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SPL_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X02, 0XA7 # addb " _(VALUE) "(%r15), %spl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SPL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X02, 0XA0 # addb " _(VALUE) "(%eax), %spl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SPL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X02, 0XA3 # addb " _(VALUE) "(%ebx), %spl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SPL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X02, 0XA1 # addb " _(VALUE) "(%ecx), %spl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SPL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X02, 0XA2 # addb " _(VALUE) "(%edx), %spl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SPL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X02, 0XA7 # addb " _(VALUE) "(%edi), %spl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SPL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X02, 0XA6 # addb " _(VALUE) "(%esi), %spl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SPL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X02, 0XA5 # addb " _(VALUE) "(%ebp), %spl")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SPL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X02, 0XA4, 0X24 # addb " _(VALUE) "(%esp), %spl")\
	CMT_ASM(".long " _(VALUE))

#define ADD_R8B_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X02, 0X80 # addb " _(VALUE) "(%rax), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8B_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X02, 0X83 # addb " _(VALUE) "(%rbx), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8B_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X02, 0X81 # addb " _(VALUE) "(%rcx), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8B_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X02, 0X82 # addb " _(VALUE) "(%rdx), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8B_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X02, 0X87 # addb " _(VALUE) "(%rdi), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8B_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X02, 0X86 # addb " _(VALUE) "(%rsi), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8B_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X02, 0X85 # addb " _(VALUE) "(%rbp), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8B_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X02, 0X84, 0X24 # addb " _(VALUE) "(%rsp), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8B_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X02, 0X80 # addb " _(VALUE) "(%r8), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8B_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X02, 0X81 # addb " _(VALUE) "(%r9), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8B_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X02, 0X82 # addb " _(VALUE) "(%r10), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8B_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X02, 0X83 # addb " _(VALUE) "(%r11), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8B_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X02, 0X84, 0X24 # addb " _(VALUE) "(%r12), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8B_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X02, 0X85 # addb " _(VALUE) "(%r13), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8B_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X02, 0X86 # addb " _(VALUE) "(%r14), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8B_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X02, 0X87 # addb " _(VALUE) "(%r15), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8B_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X02, 0X80 # addb " _(VALUE) "(%eax), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8B_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X02, 0X83 # addb " _(VALUE) "(%ebx), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8B_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X02, 0X81 # addb " _(VALUE) "(%ecx), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8B_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X02, 0X82 # addb " _(VALUE) "(%edx), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8B_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X02, 0X87 # addb " _(VALUE) "(%edi), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8B_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X02, 0X86 # addb " _(VALUE) "(%esi), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8B_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X02, 0X85 # addb " _(VALUE) "(%ebp), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8B_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X02, 0X84, 0X24 # addb " _(VALUE) "(%esp), %r8b")\
	CMT_ASM(".long " _(VALUE))

#define ADD_R9B_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X02, 0X88 # addb " _(VALUE) "(%rax), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9B_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X02, 0X8B # addb " _(VALUE) "(%rbx), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9B_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X02, 0X89 # addb " _(VALUE) "(%rcx), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9B_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X02, 0X8A # addb " _(VALUE) "(%rdx), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9B_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X02, 0X8F # addb " _(VALUE) "(%rdi), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9B_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X02, 0X8E # addb " _(VALUE) "(%rsi), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9B_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X02, 0X8D # addb " _(VALUE) "(%rbp), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9B_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X02, 0X8C, 0X24 # addb " _(VALUE) "(%rsp), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9B_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X02, 0X88 # addb " _(VALUE) "(%r8), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9B_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X02, 0X89 # addb " _(VALUE) "(%r9), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9B_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X02, 0X8A # addb " _(VALUE) "(%r10), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9B_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X02, 0X8B # addb " _(VALUE) "(%r11), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9B_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X02, 0X8C, 0X24 # addb " _(VALUE) "(%r12), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9B_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X02, 0X8D # addb " _(VALUE) "(%r13), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9B_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X02, 0X8E # addb " _(VALUE) "(%r14), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9B_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X02, 0X8F # addb " _(VALUE) "(%r15), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9B_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X02, 0X88 # addb " _(VALUE) "(%eax), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9B_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X02, 0X8B # addb " _(VALUE) "(%ebx), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9B_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X02, 0X89 # addb " _(VALUE) "(%ecx), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9B_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X02, 0X8A # addb " _(VALUE) "(%edx), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9B_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X02, 0X8F # addb " _(VALUE) "(%edi), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9B_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X02, 0X8E # addb " _(VALUE) "(%esi), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9B_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X02, 0X8D # addb " _(VALUE) "(%ebp), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9B_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X02, 0X8C, 0X24 # addb " _(VALUE) "(%esp), %r9b")\
	CMT_ASM(".long " _(VALUE))

#define ADD_R10B_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X02, 0X90 # addb " _(VALUE) "(%rax), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10B_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X02, 0X93 # addb " _(VALUE) "(%rbx), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10B_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X02, 0X91 # addb " _(VALUE) "(%rcx), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10B_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X02, 0X92 # addb " _(VALUE) "(%rdx), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10B_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X02, 0X97 # addb " _(VALUE) "(%rdi), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10B_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X02, 0X96 # addb " _(VALUE) "(%rsi), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10B_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X02, 0X95 # addb " _(VALUE) "(%rbp), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10B_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X02, 0X94, 0X24 # addb " _(VALUE) "(%rsp), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10B_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X02, 0X90 # addb " _(VALUE) "(%r8), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10B_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X02, 0X91 # addb " _(VALUE) "(%r9), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10B_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X02, 0X92 # addb " _(VALUE) "(%r10), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10B_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X02, 0X93 # addb " _(VALUE) "(%r11), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10B_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X02, 0X94, 0X24 # addb " _(VALUE) "(%r12), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10B_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X02, 0X95 # addb " _(VALUE) "(%r13), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10B_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X02, 0X96 # addb " _(VALUE) "(%r14), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10B_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X02, 0X97 # addb " _(VALUE) "(%r15), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10B_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X02, 0X90 # addb " _(VALUE) "(%eax), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10B_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X02, 0X93 # addb " _(VALUE) "(%ebx), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10B_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X02, 0X91 # addb " _(VALUE) "(%ecx), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10B_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X02, 0X92 # addb " _(VALUE) "(%edx), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10B_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X02, 0X97 # addb " _(VALUE) "(%edi), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10B_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X02, 0X96 # addb " _(VALUE) "(%esi), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10B_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X02, 0X95 # addb " _(VALUE) "(%ebp), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10B_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X02, 0X94, 0X24 # addb " _(VALUE) "(%esp), %r10b")\
	CMT_ASM(".long " _(VALUE))

#define ADD_R11B_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X02, 0X98 # addb " _(VALUE) "(%rax), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11B_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X02, 0X9B # addb " _(VALUE) "(%rbx), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11B_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X02, 0X99 # addb " _(VALUE) "(%rcx), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11B_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X02, 0X9A # addb " _(VALUE) "(%rdx), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11B_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X02, 0X9F # addb " _(VALUE) "(%rdi), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11B_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X02, 0X9E # addb " _(VALUE) "(%rsi), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11B_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X02, 0X9D # addb " _(VALUE) "(%rbp), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11B_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X02, 0X9C, 0X24 # addb " _(VALUE) "(%rsp), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11B_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X02, 0X98 # addb " _(VALUE) "(%r8), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11B_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X02, 0X99 # addb " _(VALUE) "(%r9), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11B_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X02, 0X9A # addb " _(VALUE) "(%r10), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11B_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X02, 0X9B # addb " _(VALUE) "(%r11), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11B_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X02, 0X9C, 0X24 # addb " _(VALUE) "(%r12), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11B_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X02, 0X9D # addb " _(VALUE) "(%r13), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11B_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X02, 0X9E # addb " _(VALUE) "(%r14), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11B_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X02, 0X9F # addb " _(VALUE) "(%r15), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11B_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X02, 0X98 # addb " _(VALUE) "(%eax), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11B_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X02, 0X9B # addb " _(VALUE) "(%ebx), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11B_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X02, 0X99 # addb " _(VALUE) "(%ecx), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11B_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X02, 0X9A # addb " _(VALUE) "(%edx), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11B_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X02, 0X9F # addb " _(VALUE) "(%edi), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11B_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X02, 0X9E # addb " _(VALUE) "(%esi), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11B_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X02, 0X9D # addb " _(VALUE) "(%ebp), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11B_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X02, 0X9C, 0X24 # addb " _(VALUE) "(%esp), %r11b")\
	CMT_ASM(".long " _(VALUE))

#define ADD_R12B_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X02, 0XA0 # addb " _(VALUE) "(%rax), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12B_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X02, 0XA3 # addb " _(VALUE) "(%rbx), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12B_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X02, 0XA1 # addb " _(VALUE) "(%rcx), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12B_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X02, 0XA2 # addb " _(VALUE) "(%rdx), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12B_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X02, 0XA7 # addb " _(VALUE) "(%rdi), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12B_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X02, 0XA6 # addb " _(VALUE) "(%rsi), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12B_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X02, 0XA5 # addb " _(VALUE) "(%rbp), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12B_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X02, 0XA4, 0X24 # addb " _(VALUE) "(%rsp), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12B_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X02, 0XA0 # addb " _(VALUE) "(%r8), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12B_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X02, 0XA1 # addb " _(VALUE) "(%r9), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12B_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X02, 0XA2 # addb " _(VALUE) "(%r10), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12B_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X02, 0XA3 # addb " _(VALUE) "(%r11), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12B_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X02, 0XA4, 0X24 # addb " _(VALUE) "(%r12), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12B_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X02, 0XA5 # addb " _(VALUE) "(%r13), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12B_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X02, 0XA6 # addb " _(VALUE) "(%r14), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12B_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X02, 0XA7 # addb " _(VALUE) "(%r15), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12B_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X02, 0XA0 # addb " _(VALUE) "(%eax), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12B_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X02, 0XA3 # addb " _(VALUE) "(%ebx), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12B_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X02, 0XA1 # addb " _(VALUE) "(%ecx), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12B_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X02, 0XA2 # addb " _(VALUE) "(%edx), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12B_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X02, 0XA7 # addb " _(VALUE) "(%edi), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12B_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X02, 0XA6 # addb " _(VALUE) "(%esi), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12B_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X02, 0XA5 # addb " _(VALUE) "(%ebp), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12B_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X02, 0XA4, 0X24 # addb " _(VALUE) "(%esp), %r12b")\
	CMT_ASM(".long " _(VALUE))

#define ADD_R13B_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X02, 0XA8 # addb " _(VALUE) "(%rax), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13B_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X02, 0XAB # addb " _(VALUE) "(%rbx), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13B_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X02, 0XA9 # addb " _(VALUE) "(%rcx), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13B_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X02, 0XAA # addb " _(VALUE) "(%rdx), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13B_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X02, 0XAF # addb " _(VALUE) "(%rdi), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13B_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X02, 0XAE # addb " _(VALUE) "(%rsi), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13B_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X02, 0XAD # addb " _(VALUE) "(%rbp), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13B_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X02, 0XAC, 0X24 # addb " _(VALUE) "(%rsp), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13B_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X02, 0XA8 # addb " _(VALUE) "(%r8), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13B_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X02, 0XA9 # addb " _(VALUE) "(%r9), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13B_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X02, 0XAA # addb " _(VALUE) "(%r10), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13B_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X02, 0XAB # addb " _(VALUE) "(%r11), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13B_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X02, 0XAC, 0X24 # addb " _(VALUE) "(%r12), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13B_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X02, 0XAD # addb " _(VALUE) "(%r13), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13B_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X02, 0XAE # addb " _(VALUE) "(%r14), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13B_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X02, 0XAF # addb " _(VALUE) "(%r15), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13B_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X02, 0XA8 # addb " _(VALUE) "(%eax), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13B_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X02, 0XAB # addb " _(VALUE) "(%ebx), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13B_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X02, 0XA9 # addb " _(VALUE) "(%ecx), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13B_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X02, 0XAA # addb " _(VALUE) "(%edx), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13B_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X02, 0XAF # addb " _(VALUE) "(%edi), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13B_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X02, 0XAE # addb " _(VALUE) "(%esi), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13B_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X02, 0XAD # addb " _(VALUE) "(%ebp), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13B_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X02, 0XAC, 0X24 # addb " _(VALUE) "(%esp), %r13b")\
	CMT_ASM(".long " _(VALUE))

#define ADD_R14B_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X02, 0XB0 # addb " _(VALUE) "(%rax), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14B_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X02, 0XB3 # addb " _(VALUE) "(%rbx), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14B_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X02, 0XB1 # addb " _(VALUE) "(%rcx), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14B_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X02, 0XB2 # addb " _(VALUE) "(%rdx), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14B_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X02, 0XB7 # addb " _(VALUE) "(%rdi), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14B_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X02, 0XB6 # addb " _(VALUE) "(%rsi), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14B_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X02, 0XB5 # addb " _(VALUE) "(%rbp), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14B_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X02, 0XB4, 0X24 # addb " _(VALUE) "(%rsp), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14B_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X02, 0XB0 # addb " _(VALUE) "(%r8), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14B_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X02, 0XB1 # addb " _(VALUE) "(%r9), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14B_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X02, 0XB2 # addb " _(VALUE) "(%r10), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14B_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X02, 0XB3 # addb " _(VALUE) "(%r11), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14B_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X02, 0XB4, 0X24 # addb " _(VALUE) "(%r12), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14B_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X02, 0XB5 # addb " _(VALUE) "(%r13), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14B_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X02, 0XB6 # addb " _(VALUE) "(%r14), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14B_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X02, 0XB7 # addb " _(VALUE) "(%r15), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14B_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X02, 0XB0 # addb " _(VALUE) "(%eax), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14B_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X02, 0XB3 # addb " _(VALUE) "(%ebx), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14B_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X02, 0XB1 # addb " _(VALUE) "(%ecx), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14B_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X02, 0XB2 # addb " _(VALUE) "(%edx), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14B_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X02, 0XB7 # addb " _(VALUE) "(%edi), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14B_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X02, 0XB6 # addb " _(VALUE) "(%esi), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14B_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X02, 0XB5 # addb " _(VALUE) "(%ebp), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14B_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X02, 0XB4, 0X24 # addb " _(VALUE) "(%esp), %r14b")\
	CMT_ASM(".long " _(VALUE))

#define ADD_R15B_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X02, 0XB8 # addb " _(VALUE) "(%rax), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15B_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X02, 0XBB # addb " _(VALUE) "(%rbx), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15B_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X02, 0XB9 # addb " _(VALUE) "(%rcx), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15B_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X02, 0XBA # addb " _(VALUE) "(%rdx), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15B_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X02, 0XBF # addb " _(VALUE) "(%rdi), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15B_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X02, 0XBE # addb " _(VALUE) "(%rsi), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15B_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X02, 0XBD # addb " _(VALUE) "(%rbp), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15B_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X02, 0XBC, 0X24 # addb " _(VALUE) "(%rsp), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15B_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X02, 0XB8 # addb " _(VALUE) "(%r8), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15B_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X02, 0XB9 # addb " _(VALUE) "(%r9), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15B_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X02, 0XBA # addb " _(VALUE) "(%r10), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15B_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X02, 0XBB # addb " _(VALUE) "(%r11), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15B_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X02, 0XBC, 0X24 # addb " _(VALUE) "(%r12), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15B_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X02, 0XBD # addb " _(VALUE) "(%r13), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15B_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X02, 0XBE # addb " _(VALUE) "(%r14), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15B_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X02, 0XBF # addb " _(VALUE) "(%r15), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15B_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X02, 0XB8 # addb " _(VALUE) "(%eax), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15B_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X02, 0XBB # addb " _(VALUE) "(%ebx), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15B_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X02, 0XB9 # addb " _(VALUE) "(%ecx), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15B_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X02, 0XBA # addb " _(VALUE) "(%edx), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15B_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X02, 0XBF # addb " _(VALUE) "(%edi), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15B_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X02, 0XBE # addb " _(VALUE) "(%esi), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15B_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X02, 0XBD # addb " _(VALUE) "(%ebp), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15B_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X02, 0XBC, 0X24 # addb " _(VALUE) "(%esp), %r15b")\
	CMT_ASM(".long " _(VALUE))

#define ADD_AL_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X00, 0X80 # addb %al, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AL_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X00, 0X83 # addb %al, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AL_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X00, 0X81 # addb %al, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AL_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X00, 0X82 # addb %al, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AL_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X00, 0X87 # addb %al, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AL_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X00, 0X86 # addb %al, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AL_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X00, 0X85 # addb %al, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AL_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X00, 0X84, 0X24 # addb %al, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AL_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X00, 0X80 # addb %al, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AL_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X00, 0X81 # addb %al, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AL_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X00, 0X82 # addb %al, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AL_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X00, 0X83 # addb %al, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AL_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X00, 0X84, 0X24 # addb %al, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AL_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X00, 0X85 # addb %al, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AL_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X00, 0X86 # addb %al, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AL_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X00, 0X87 # addb %al, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X00, 0X80 # addb %al, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X00, 0X83 # addb %al, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X00, 0X81 # addb %al, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X00, 0X82 # addb %al, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X00, 0X87 # addb %al, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X00, 0X86 # addb %al, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X00, 0X85 # addb %al, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X00, 0X84, 0X24 # addb %al, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADD_BL_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X00, 0X98 # addb %bl, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BL_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X00, 0X9B # addb %bl, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BL_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X00, 0X99 # addb %bl, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BL_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X00, 0X9A # addb %bl, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BL_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X00, 0X9F # addb %bl, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BL_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X00, 0X9E # addb %bl, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BL_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X00, 0X9D # addb %bl, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BL_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X00, 0X9C, 0X24 # addb %bl, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BL_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X00, 0X98 # addb %bl, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BL_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X00, 0X99 # addb %bl, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BL_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X00, 0X9A # addb %bl, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BL_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X00, 0X9B # addb %bl, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BL_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X00, 0X9C, 0X24 # addb %bl, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BL_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X00, 0X9D # addb %bl, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BL_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X00, 0X9E # addb %bl, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BL_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X00, 0X9F # addb %bl, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X00, 0X98 # addb %bl, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X00, 0X9B # addb %bl, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X00, 0X99 # addb %bl, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X00, 0X9A # addb %bl, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X00, 0X9F # addb %bl, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X00, 0X9E # addb %bl, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X00, 0X9D # addb %bl, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X00, 0X9C, 0X24 # addb %bl, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADD_CL_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X00, 0X88 # addb %cl, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CL_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X00, 0X8B # addb %cl, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CL_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X00, 0X89 # addb %cl, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CL_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X00, 0X8A # addb %cl, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CL_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X00, 0X8F # addb %cl, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CL_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X00, 0X8E # addb %cl, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CL_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X00, 0X8D # addb %cl, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CL_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X00, 0X8C, 0X24 # addb %cl, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CL_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X00, 0X88 # addb %cl, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CL_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X00, 0X89 # addb %cl, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CL_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X00, 0X8A # addb %cl, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CL_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X00, 0X8B # addb %cl, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CL_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X00, 0X8C, 0X24 # addb %cl, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CL_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X00, 0X8D # addb %cl, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CL_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X00, 0X8E # addb %cl, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CL_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X00, 0X8F # addb %cl, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X00, 0X88 # addb %cl, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X00, 0X8B # addb %cl, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X00, 0X89 # addb %cl, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X00, 0X8A # addb %cl, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X00, 0X8F # addb %cl, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X00, 0X8E # addb %cl, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X00, 0X8D # addb %cl, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X00, 0X8C, 0X24 # addb %cl, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADD_DL_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X00, 0X90 # addb %dl, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DL_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X00, 0X93 # addb %dl, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DL_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X00, 0X91 # addb %dl, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DL_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X00, 0X92 # addb %dl, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DL_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X00, 0X97 # addb %dl, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DL_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X00, 0X96 # addb %dl, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DL_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X00, 0X95 # addb %dl, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DL_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X00, 0X94, 0X24 # addb %dl, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DL_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X00, 0X90 # addb %dl, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DL_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X00, 0X91 # addb %dl, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DL_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X00, 0X92 # addb %dl, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DL_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X00, 0X93 # addb %dl, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DL_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X00, 0X94, 0X24 # addb %dl, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DL_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X00, 0X95 # addb %dl, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DL_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X00, 0X96 # addb %dl, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DL_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X00, 0X97 # addb %dl, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X00, 0X90 # addb %dl, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X00, 0X93 # addb %dl, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X00, 0X91 # addb %dl, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X00, 0X92 # addb %dl, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X00, 0X97 # addb %dl, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X00, 0X96 # addb %dl, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X00, 0X95 # addb %dl, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X00, 0X94, 0X24 # addb %dl, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADD_DIL_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X00, 0XB8 # addb %dil, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DIL_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X00, 0XBB # addb %dil, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DIL_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X00, 0XB9 # addb %dil, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DIL_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X00, 0XBA # addb %dil, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DIL_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X00, 0XBF # addb %dil, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DIL_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X00, 0XBE # addb %dil, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DIL_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X00, 0XBD # addb %dil, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DIL_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X00, 0XBC, 0X24 # addb %dil, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DIL_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X00, 0XB8 # addb %dil, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DIL_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X00, 0XB9 # addb %dil, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DIL_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X00, 0XBA # addb %dil, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DIL_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X00, 0XBB # addb %dil, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DIL_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X00, 0XBC, 0X24 # addb %dil, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DIL_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X00, 0XBD # addb %dil, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DIL_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X00, 0XBE # addb %dil, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DIL_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X00, 0XBF # addb %dil, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DIL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X00, 0XB8 # addb %dil, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DIL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X00, 0XBB # addb %dil, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DIL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X00, 0XB9 # addb %dil, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DIL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X00, 0XBA # addb %dil, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DIL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X00, 0XBF # addb %dil, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DIL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X00, 0XBE # addb %dil, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DIL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X00, 0XBD # addb %dil, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DIL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X00, 0XBC, 0X24 # addb %dil, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADD_SIL_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X00, 0XB0 # addb %sil, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SIL_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X00, 0XB3 # addb %sil, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SIL_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X00, 0XB1 # addb %sil, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SIL_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X00, 0XB2 # addb %sil, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SIL_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X00, 0XB7 # addb %sil, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SIL_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X00, 0XB6 # addb %sil, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SIL_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X00, 0XB5 # addb %sil, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SIL_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X00, 0XB4, 0X24 # addb %sil, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SIL_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X00, 0XB0 # addb %sil, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SIL_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X00, 0XB1 # addb %sil, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SIL_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X00, 0XB2 # addb %sil, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SIL_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X00, 0XB3 # addb %sil, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SIL_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X00, 0XB4, 0X24 # addb %sil, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SIL_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X00, 0XB5 # addb %sil, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SIL_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X00, 0XB6 # addb %sil, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SIL_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X00, 0XB7 # addb %sil, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SIL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X00, 0XB0 # addb %sil, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SIL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X00, 0XB3 # addb %sil, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SIL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X00, 0XB1 # addb %sil, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SIL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X00, 0XB2 # addb %sil, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SIL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X00, 0XB7 # addb %sil, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SIL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X00, 0XB6 # addb %sil, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SIL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X00, 0XB5 # addb %sil, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SIL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X00, 0XB4, 0X24 # addb %sil, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADD_BPL_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X00, 0XA8 # addb %bpl, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BPL_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X00, 0XAB # addb %bpl, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BPL_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X00, 0XA9 # addb %bpl, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BPL_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X00, 0XAA # addb %bpl, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BPL_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X00, 0XAF # addb %bpl, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BPL_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X00, 0XAE # addb %bpl, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BPL_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X00, 0XAD # addb %bpl, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BPL_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X00, 0XAC, 0X24 # addb %bpl, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BPL_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X00, 0XA8 # addb %bpl, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BPL_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X00, 0XA9 # addb %bpl, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BPL_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X00, 0XAA # addb %bpl, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BPL_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X00, 0XAB # addb %bpl, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BPL_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X00, 0XAC, 0X24 # addb %bpl, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BPL_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X00, 0XAD # addb %bpl, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BPL_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X00, 0XAE # addb %bpl, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BPL_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X00, 0XAF # addb %bpl, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BPL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X00, 0XA8 # addb %bpl, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BPL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X00, 0XAB # addb %bpl, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BPL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X00, 0XA9 # addb %bpl, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BPL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X00, 0XAA # addb %bpl, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BPL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X00, 0XAF # addb %bpl, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BPL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X00, 0XAE # addb %bpl, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BPL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X00, 0XAD # addb %bpl, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BPL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X00, 0XAC, 0X24 # addb %bpl, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADD_SPL_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X00, 0XA0 # addb %spl, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SPL_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X00, 0XA3 # addb %spl, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SPL_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X00, 0XA1 # addb %spl, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SPL_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X00, 0XA2 # addb %spl, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SPL_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X00, 0XA7 # addb %spl, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SPL_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X00, 0XA6 # addb %spl, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SPL_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X00, 0XA5 # addb %spl, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SPL_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X00, 0XA4, 0X24 # addb %spl, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SPL_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X00, 0XA0 # addb %spl, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SPL_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X00, 0XA1 # addb %spl, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SPL_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X00, 0XA2 # addb %spl, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SPL_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X00, 0XA3 # addb %spl, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SPL_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X00, 0XA4, 0X24 # addb %spl, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SPL_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X00, 0XA5 # addb %spl, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SPL_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X00, 0XA6 # addb %spl, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SPL_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X00, 0XA7 # addb %spl, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SPL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X00, 0XA0 # addb %spl, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SPL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X00, 0XA3 # addb %spl, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SPL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X00, 0XA1 # addb %spl, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SPL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X00, 0XA2 # addb %spl, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SPL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X00, 0XA7 # addb %spl, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SPL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X00, 0XA6 # addb %spl, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SPL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X00, 0XA5 # addb %spl, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SPL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X00, 0XA4, 0X24 # addb %spl, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADD_R8B_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X00, 0X80 # addb %r8b, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8B_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X00, 0X83 # addb %r8b, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8B_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X00, 0X81 # addb %r8b, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8B_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X00, 0X82 # addb %r8b, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8B_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X00, 0X87 # addb %r8b, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8B_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X00, 0X86 # addb %r8b, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8B_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X00, 0X85 # addb %r8b, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8B_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X00, 0X84, 0X24 # addb %r8b, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8B_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X00, 0X80 # addb %r8b, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8B_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X00, 0X81 # addb %r8b, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8B_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X00, 0X82 # addb %r8b, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8B_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X00, 0X83 # addb %r8b, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8B_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X00, 0X84, 0X24 # addb %r8b, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8B_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X00, 0X85 # addb %r8b, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8B_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X00, 0X86 # addb %r8b, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8B_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X00, 0X87 # addb %r8b, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8B_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X00, 0X80 # addb %r8b, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8B_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X00, 0X83 # addb %r8b, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8B_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X00, 0X81 # addb %r8b, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8B_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X00, 0X82 # addb %r8b, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8B_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X00, 0X87 # addb %r8b, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8B_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X00, 0X86 # addb %r8b, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8B_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X00, 0X85 # addb %r8b, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8B_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X00, 0X84, 0X24 # addb %r8b, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADD_R9B_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X00, 0X88 # addb %r9b, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9B_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X00, 0X8B # addb %r9b, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9B_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X00, 0X89 # addb %r9b, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9B_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X00, 0X8A # addb %r9b, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9B_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X00, 0X8F # addb %r9b, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9B_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X00, 0X8E # addb %r9b, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9B_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X00, 0X8D # addb %r9b, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9B_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X00, 0X8C, 0X24 # addb %r9b, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9B_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X00, 0X88 # addb %r9b, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9B_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X00, 0X89 # addb %r9b, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9B_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X00, 0X8A # addb %r9b, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9B_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X00, 0X8B # addb %r9b, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9B_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X00, 0X8C, 0X24 # addb %r9b, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9B_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X00, 0X8D # addb %r9b, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9B_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X00, 0X8E # addb %r9b, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9B_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X00, 0X8F # addb %r9b, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9B_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X00, 0X88 # addb %r9b, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9B_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X00, 0X8B # addb %r9b, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9B_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X00, 0X89 # addb %r9b, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9B_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X00, 0X8A # addb %r9b, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9B_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X00, 0X8F # addb %r9b, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9B_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X00, 0X8E # addb %r9b, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9B_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X00, 0X8D # addb %r9b, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9B_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X00, 0X8C, 0X24 # addb %r9b, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADD_R10B_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X00, 0X90 # addb %r10b, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10B_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X00, 0X93 # addb %r10b, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10B_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X00, 0X91 # addb %r10b, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10B_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X00, 0X92 # addb %r10b, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10B_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X00, 0X97 # addb %r10b, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10B_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X00, 0X96 # addb %r10b, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10B_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X00, 0X95 # addb %r10b, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10B_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X00, 0X94, 0X24 # addb %r10b, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10B_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X00, 0X90 # addb %r10b, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10B_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X00, 0X91 # addb %r10b, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10B_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X00, 0X92 # addb %r10b, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10B_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X00, 0X93 # addb %r10b, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10B_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X00, 0X94, 0X24 # addb %r10b, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10B_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X00, 0X95 # addb %r10b, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10B_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X00, 0X96 # addb %r10b, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10B_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X00, 0X97 # addb %r10b, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10B_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X00, 0X90 # addb %r10b, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10B_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X00, 0X93 # addb %r10b, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10B_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X00, 0X91 # addb %r10b, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10B_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X00, 0X92 # addb %r10b, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10B_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X00, 0X97 # addb %r10b, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10B_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X00, 0X96 # addb %r10b, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10B_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X00, 0X95 # addb %r10b, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10B_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X00, 0X94, 0X24 # addb %r10b, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADD_R11B_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X00, 0X98 # addb %r11b, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11B_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X00, 0X9B # addb %r11b, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11B_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X00, 0X99 # addb %r11b, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11B_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X00, 0X9A # addb %r11b, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11B_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X00, 0X9F # addb %r11b, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11B_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X00, 0X9E # addb %r11b, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11B_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X00, 0X9D # addb %r11b, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11B_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X00, 0X9C, 0X24 # addb %r11b, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11B_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X00, 0X98 # addb %r11b, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11B_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X00, 0X99 # addb %r11b, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11B_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X00, 0X9A # addb %r11b, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11B_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X00, 0X9B # addb %r11b, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11B_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X00, 0X9C, 0X24 # addb %r11b, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11B_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X00, 0X9D # addb %r11b, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11B_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X00, 0X9E # addb %r11b, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11B_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X00, 0X9F # addb %r11b, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11B_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X00, 0X98 # addb %r11b, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11B_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X00, 0X9B # addb %r11b, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11B_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X00, 0X99 # addb %r11b, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11B_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X00, 0X9A # addb %r11b, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11B_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X00, 0X9F # addb %r11b, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11B_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X00, 0X9E # addb %r11b, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11B_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X00, 0X9D # addb %r11b, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11B_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X00, 0X9C, 0X24 # addb %r11b, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADD_R12B_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X00, 0XA0 # addb %r12b, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12B_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X00, 0XA3 # addb %r12b, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12B_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X00, 0XA1 # addb %r12b, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12B_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X00, 0XA2 # addb %r12b, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12B_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X00, 0XA7 # addb %r12b, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12B_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X00, 0XA6 # addb %r12b, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12B_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X00, 0XA5 # addb %r12b, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12B_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X00, 0XA4, 0X24 # addb %r12b, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12B_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X00, 0XA0 # addb %r12b, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12B_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X00, 0XA1 # addb %r12b, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12B_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X00, 0XA2 # addb %r12b, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12B_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X00, 0XA3 # addb %r12b, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12B_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X00, 0XA4, 0X24 # addb %r12b, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12B_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X00, 0XA5 # addb %r12b, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12B_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X00, 0XA6 # addb %r12b, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12B_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X00, 0XA7 # addb %r12b, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12B_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X00, 0XA0 # addb %r12b, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12B_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X00, 0XA3 # addb %r12b, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12B_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X00, 0XA1 # addb %r12b, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12B_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X00, 0XA2 # addb %r12b, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12B_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X00, 0XA7 # addb %r12b, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12B_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X00, 0XA6 # addb %r12b, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12B_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X00, 0XA5 # addb %r12b, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12B_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X00, 0XA4, 0X24 # addb %r12b, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADD_R13B_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X00, 0XA8 # addb %r13b, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13B_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X00, 0XAB # addb %r13b, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13B_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X00, 0XA9 # addb %r13b, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13B_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X00, 0XAA # addb %r13b, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13B_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X00, 0XAF # addb %r13b, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13B_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X00, 0XAE # addb %r13b, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13B_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X00, 0XAD # addb %r13b, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13B_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X00, 0XAC, 0X24 # addb %r13b, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13B_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X00, 0XA8 # addb %r13b, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13B_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X00, 0XA9 # addb %r13b, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13B_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X00, 0XAA # addb %r13b, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13B_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X00, 0XAB # addb %r13b, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13B_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X00, 0XAC, 0X24 # addb %r13b, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13B_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X00, 0XAD # addb %r13b, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13B_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X00, 0XAE # addb %r13b, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13B_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X00, 0XAF # addb %r13b, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13B_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X00, 0XA8 # addb %r13b, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13B_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X00, 0XAB # addb %r13b, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13B_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X00, 0XA9 # addb %r13b, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13B_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X00, 0XAA # addb %r13b, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13B_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X00, 0XAF # addb %r13b, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13B_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X00, 0XAE # addb %r13b, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13B_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X00, 0XAD # addb %r13b, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13B_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X00, 0XAC, 0X24 # addb %r13b, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADD_R14B_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X00, 0XB0 # addb %r14b, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14B_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X00, 0XB3 # addb %r14b, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14B_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X00, 0XB1 # addb %r14b, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14B_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X00, 0XB2 # addb %r14b, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14B_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X00, 0XB7 # addb %r14b, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14B_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X00, 0XB6 # addb %r14b, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14B_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X00, 0XB5 # addb %r14b, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14B_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X00, 0XB4, 0X24 # addb %r14b, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14B_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X00, 0XB0 # addb %r14b, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14B_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X00, 0XB1 # addb %r14b, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14B_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X00, 0XB2 # addb %r14b, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14B_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X00, 0XB3 # addb %r14b, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14B_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X00, 0XB4, 0X24 # addb %r14b, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14B_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X00, 0XB5 # addb %r14b, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14B_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X00, 0XB6 # addb %r14b, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14B_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X00, 0XB7 # addb %r14b, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14B_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X00, 0XB0 # addb %r14b, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14B_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X00, 0XB3 # addb %r14b, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14B_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X00, 0XB1 # addb %r14b, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14B_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X00, 0XB2 # addb %r14b, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14B_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X00, 0XB7 # addb %r14b, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14B_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X00, 0XB6 # addb %r14b, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14B_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X00, 0XB5 # addb %r14b, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14B_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X00, 0XB4, 0X24 # addb %r14b, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADD_R15B_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X00, 0XB8 # addb %r15b, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15B_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X00, 0XBB # addb %r15b, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15B_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X00, 0XB9 # addb %r15b, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15B_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X00, 0XBA # addb %r15b, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15B_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X00, 0XBF # addb %r15b, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15B_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X00, 0XBE # addb %r15b, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15B_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X00, 0XBD # addb %r15b, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15B_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X00, 0XBC, 0X24 # addb %r15b, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15B_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X00, 0XB8 # addb %r15b, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15B_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X00, 0XB9 # addb %r15b, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15B_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X00, 0XBA # addb %r15b, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15B_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X00, 0XBB # addb %r15b, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15B_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X00, 0XBC, 0X24 # addb %r15b, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15B_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X00, 0XBD # addb %r15b, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15B_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X00, 0XBE # addb %r15b, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15B_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X00, 0XBF # addb %r15b, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15B_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X00, 0XB8 # addb %r15b, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15B_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X00, 0XBB # addb %r15b, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15B_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X00, 0XB9 # addb %r15b, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15B_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X00, 0XBA # addb %r15b, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15B_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X00, 0XBF # addb %r15b, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15B_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X00, 0XBE # addb %r15b, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15B_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X00, 0XBD # addb %r15b, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15B_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X00, 0XBC, 0X24 # addb %r15b, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#endif /* __SYSTEM_64_BIT__ */
/* ************************** [^] 8-BIT MEMORY [^] ************************** */

/* ************************* [v] 16-BIT MEMORY [v] ************************** */
#ifdef __SYSTEM_16_BIT__
#define ADD_AX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X03, 0X06 # addw (" _(VALUE) "), %ax")\
	CMT_ASM(".short " _(VALUE))
#define ADD_BX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X03, 0X1E # addw (" _(VALUE) "), %bx")\
	CMT_ASM(".short " _(VALUE))
#define ADD_CX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X03, 0X0E # addw (" _(VALUE) "), %cx")\
	CMT_ASM(".short " _(VALUE))
#define ADD_DX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X03, 0X16 # addw (" _(VALUE) "), %dx")\
	CMT_ASM(".short " _(VALUE))
#define ADD_DI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X03, 0X3E # addw (" _(VALUE) "), %di")\
	CMT_ASM(".short " _(VALUE))
#define ADD_SI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X03, 0X36 # addw (" _(VALUE) "), %si")\
	CMT_ASM(".short " _(VALUE))
#define ADD_BP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X03, 0X2E # addw (" _(VALUE) "), %bp")\
	CMT_ASM(".short " _(VALUE))
#define ADD_SP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X03, 0X26 # addw (" _(VALUE) "), %sp")\
	CMT_ASM(".short " _(VALUE))

#define ADD_AX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X01, 0X06 # addw %ax, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define ADD_BX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X01, 0X1E # addw %bx, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define ADD_CX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X01, 0X0E # addw %cx, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define ADD_DX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X01, 0X16 # addw %dx, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define ADD_DI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X01, 0X3E # addw %di, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define ADD_SI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X01, 0X36 # addw %si, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define ADD_BP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X01, 0X2E # addw %bp, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define ADD_SP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X01, 0X26 # addw %sp, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))

#define ADD_AX_FROM_PTR_BX CMT_ASM(".byte 0X03, 0X07 # addw (%bx), %ax")
#define ADD_AX_FROM_PTR_BP CMT_ASM(".byte 0X03, 0X46, 0X00 # addw (%bp), %ax")
#define ADD_AX_FROM_PTR_SI CMT_ASM(".byte 0X03, 0X04 # addw (%si), %ax")
#define ADD_AX_FROM_PTR_DI CMT_ASM(".byte 0X03, 0X05 # addw (%di), %ax")

#define ADD_BX_FROM_PTR_BX CMT_ASM(".byte 0X03, 0X1F # addw (%bx), %bx")
#define ADD_BX_FROM_PTR_BP CMT_ASM(".byte 0X03, 0X5E, 0X00 # addw (%bp), %bx")
#define ADD_BX_FROM_PTR_SI CMT_ASM(".byte 0X03, 0X1C # addw (%si), %bx")
#define ADD_BX_FROM_PTR_DI CMT_ASM(".byte 0X03, 0X1D # addw (%di), %bx")

#define ADD_CX_FROM_PTR_BX CMT_ASM(".byte 0X03, 0X0F # addw (%bx), %cx")
#define ADD_CX_FROM_PTR_BP CMT_ASM(".byte 0X03, 0X4E, 0X00 # addw (%bp), %cx")
#define ADD_CX_FROM_PTR_SI CMT_ASM(".byte 0X03, 0X0C # addw (%si), %cx")
#define ADD_CX_FROM_PTR_DI CMT_ASM(".byte 0X03, 0X0D # addw (%di), %cx")

#define ADD_DX_FROM_PTR_BX CMT_ASM(".byte 0X03, 0X17 # addw (%bx), %dx")
#define ADD_DX_FROM_PTR_BP CMT_ASM(".byte 0X03, 0X56, 0X00 # addw (%bp), %dx")
#define ADD_DX_FROM_PTR_SI CMT_ASM(".byte 0X03, 0X14 # addw (%si), %dx")
#define ADD_DX_FROM_PTR_DI CMT_ASM(".byte 0X03, 0X15 # addw (%di), %dx")

#define ADD_DI_FROM_PTR_BX CMT_ASM(".byte 0X03, 0X3F # addw (%bx), %di")
#define ADD_DI_FROM_PTR_BP CMT_ASM(".byte 0X03, 0X7E, 0X00 # addw (%bp), %di")
#define ADD_DI_FROM_PTR_SI CMT_ASM(".byte 0X03, 0X3C # addw (%si), %di")
#define ADD_DI_FROM_PTR_DI CMT_ASM(".byte 0X03, 0X3D # addw (%di), %di")

#define ADD_SI_FROM_PTR_BX CMT_ASM(".byte 0X03, 0X37 # addw (%bx), %si")
#define ADD_SI_FROM_PTR_BP CMT_ASM(".byte 0X03, 0X76, 0X00 # addw (%bp), %si")
#define ADD_SI_FROM_PTR_SI CMT_ASM(".byte 0X03, 0X34 # addw (%si), %si")
#define ADD_SI_FROM_PTR_DI CMT_ASM(".byte 0X03, 0X35 # addw (%di), %si")

#define ADD_BP_FROM_PTR_BX CMT_ASM(".byte 0X03, 0X2F # addw (%bx), %bp")
#define ADD_BP_FROM_PTR_BP CMT_ASM(".byte 0X03, 0X6E, 0X00 # addw (%bp), %bp")
#define ADD_BP_FROM_PTR_SI CMT_ASM(".byte 0X03, 0X2C # addw (%si), %bp")
#define ADD_BP_FROM_PTR_DI CMT_ASM(".byte 0X03, 0X2D # addw (%di), %bp")

#define ADD_SP_FROM_PTR_BX CMT_ASM(".byte 0X03, 0X27 # addw (%bx), %sp")
#define ADD_SP_FROM_PTR_BP CMT_ASM(".byte 0X03, 0X66, 0X00 # addw (%bp), %sp")
#define ADD_SP_FROM_PTR_SI CMT_ASM(".byte 0X03, 0X24 # addw (%si), %sp")
#define ADD_SP_FROM_PTR_DI CMT_ASM(".byte 0X03, 0X25 # addw (%di), %sp")

#define ADD_AX_TO_PTR_BX CMT_ASM(".byte 0X01, 0X07 # addw %ax, (%bx)")
#define ADD_AX_TO_PTR_BP CMT_ASM(".byte 0X01, 0X46, 0X00 # addw %ax, (%bp)")
#define ADD_AX_TO_PTR_SI CMT_ASM(".byte 0X01, 0X04 # addw %ax, (%si)")
#define ADD_AX_TO_PTR_DI CMT_ASM(".byte 0X01, 0X05 # addw %ax, (%di)")

#define ADD_BX_TO_PTR_BX CMT_ASM(".byte 0X01, 0X1F # addw %bx, (%bx)")
#define ADD_BX_TO_PTR_BP CMT_ASM(".byte 0X01, 0X5E, 0X00 # addw %bx, (%bp)")
#define ADD_BX_TO_PTR_SI CMT_ASM(".byte 0X01, 0X1C # addw %bx, (%si)")
#define ADD_BX_TO_PTR_DI CMT_ASM(".byte 0X01, 0X1D # addw %bx, (%di)")

#define ADD_CX_TO_PTR_BX CMT_ASM(".byte 0X01, 0X0F # addw %cx, (%bx)")
#define ADD_CX_TO_PTR_BP CMT_ASM(".byte 0X01, 0X4E, 0X00 # addw %cx, (%bp)")
#define ADD_CX_TO_PTR_SI CMT_ASM(".byte 0X01, 0X0C # addw %cx, (%si)")
#define ADD_CX_TO_PTR_DI CMT_ASM(".byte 0X01, 0X0D # addw %cx, (%di)")

#define ADD_DX_TO_PTR_BX CMT_ASM(".byte 0X01, 0X17 # addw %dx, (%bx)")
#define ADD_DX_TO_PTR_BP CMT_ASM(".byte 0X01, 0X56, 0X00 # addw %dx, (%bp)")
#define ADD_DX_TO_PTR_SI CMT_ASM(".byte 0X01, 0X14 # addw %dx, (%si)")
#define ADD_DX_TO_PTR_DI CMT_ASM(".byte 0X01, 0X15 # addw %dx, (%di)")

#define ADD_DI_TO_PTR_BX CMT_ASM(".byte 0X01, 0X3F # addw %di, (%bx)")
#define ADD_DI_TO_PTR_BP CMT_ASM(".byte 0X01, 0X7E, 0X00 # addw %di, (%bp)")
#define ADD_DI_TO_PTR_SI CMT_ASM(".byte 0X01, 0X3C # addw %di, (%si)")
#define ADD_DI_TO_PTR_DI CMT_ASM(".byte 0X01, 0X3D # addw %di, (%di)")

#define ADD_SI_TO_PTR_BX CMT_ASM(".byte 0X01, 0X37 # addw %si, (%bx)")
#define ADD_SI_TO_PTR_BP CMT_ASM(".byte 0X01, 0X76, 0X00 # addw %si, (%bp)")
#define ADD_SI_TO_PTR_SI CMT_ASM(".byte 0X01, 0X34 # addw %si, (%si)")
#define ADD_SI_TO_PTR_DI CMT_ASM(".byte 0X01, 0X35 # addw %si, (%di)")

#define ADD_BP_TO_PTR_BX CMT_ASM(".byte 0X01, 0X2F # addw %bp, (%bx)")
#define ADD_BP_TO_PTR_BP CMT_ASM(".byte 0X01, 0X6E, 0X00 # addw %bp, (%bp)")
#define ADD_BP_TO_PTR_SI CMT_ASM(".byte 0X01, 0X2C # addw %bp, (%si)")
#define ADD_BP_TO_PTR_DI CMT_ASM(".byte 0X01, 0X2D # addw %bp, (%di)")

#define ADD_SP_TO_PTR_BX CMT_ASM(".byte 0X01, 0X27 # addw %sp, (%bx)")
#define ADD_SP_TO_PTR_BP CMT_ASM(".byte 0X01, 0X66, 0X00 # addw %sp, (%bp)")
#define ADD_SP_TO_PTR_SI CMT_ASM(".byte 0X01, 0X24 # addw %sp, (%si)")
#define ADD_SP_TO_PTR_DI CMT_ASM(".byte 0X01, 0X25 # addw %sp, (%di)")

#define ADD_AX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X03, 0X87 # addw " _(VALUE) "(%bx), %ax")\
	CMT_ASM(".short " _(VALUE))
#define ADD_AX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X03, 0X86 # addw " _(VALUE) "(%bp), %ax")\
	CMT_ASM(".short " _(VALUE))
#define ADD_AX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X03, 0X84 # addw " _(VALUE) "(%si), %ax")\
	CMT_ASM(".short " _(VALUE))
#define ADD_AX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X03, 0X85 # addw " _(VALUE) "(%di), %ax")\
	CMT_ASM(".short " _(VALUE))

#define ADD_BX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X03, 0X9F # addw " _(VALUE) "(%bx), %bx")\
	CMT_ASM(".short " _(VALUE))
#define ADD_BX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X03, 0X9E # addw " _(VALUE) "(%bp), %bx")\
	CMT_ASM(".short " _(VALUE))
#define ADD_BX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X03, 0X9C # addw " _(VALUE) "(%si), %bx")\
	CMT_ASM(".short " _(VALUE))
#define ADD_BX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X03, 0X9D # addw " _(VALUE) "(%di), %bx")\
	CMT_ASM(".short " _(VALUE))

#define ADD_CX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X03, 0X8F # addw " _(VALUE) "(%bx), %cx")\
	CMT_ASM(".short " _(VALUE))
#define ADD_CX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X03, 0X8E # addw " _(VALUE) "(%bp), %cx")\
	CMT_ASM(".short " _(VALUE))
#define ADD_CX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X03, 0X8C # addw " _(VALUE) "(%si), %cx")\
	CMT_ASM(".short " _(VALUE))
#define ADD_CX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X03, 0X8D # addw " _(VALUE) "(%di), %cx")\
	CMT_ASM(".short " _(VALUE))

#define ADD_DX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X03, 0X97 # addw " _(VALUE) "(%bx), %dx")\
	CMT_ASM(".short " _(VALUE))
#define ADD_DX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X03, 0X96 # addw " _(VALUE) "(%bp), %dx")\
	CMT_ASM(".short " _(VALUE))
#define ADD_DX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X03, 0X94 # addw " _(VALUE) "(%si), %dx")\
	CMT_ASM(".short " _(VALUE))
#define ADD_DX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X03, 0X95 # addw " _(VALUE) "(%di), %dx")\
	CMT_ASM(".short " _(VALUE))

#define ADD_DI_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X03, 0XBF # addw " _(VALUE) "(%bx), %di")\
	CMT_ASM(".short " _(VALUE))
#define ADD_DI_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X03, 0XBE # addw " _(VALUE) "(%bp), %di")\
	CMT_ASM(".short " _(VALUE))
#define ADD_DI_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X03, 0XBC # addw " _(VALUE) "(%si), %di")\
	CMT_ASM(".short " _(VALUE))
#define ADD_DI_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X03, 0XBD # addw " _(VALUE) "(%di), %di")\
	CMT_ASM(".short " _(VALUE))

#define ADD_SI_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X03, 0XB7 # addw " _(VALUE) "(%bx), %si")\
	CMT_ASM(".short " _(VALUE))
#define ADD_SI_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X03, 0XB6 # addw " _(VALUE) "(%bp), %si")\
	CMT_ASM(".short " _(VALUE))
#define ADD_SI_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X03, 0XB4 # addw " _(VALUE) "(%si), %si")\
	CMT_ASM(".short " _(VALUE))
#define ADD_SI_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X03, 0XB5 # addw " _(VALUE) "(%di), %si")\
	CMT_ASM(".short " _(VALUE))

#define ADD_BP_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X03, 0XAF # addw " _(VALUE) "(%bx), %bp")\
	CMT_ASM(".short " _(VALUE))
#define ADD_BP_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X03, 0XAE # addw " _(VALUE) "(%bp), %bp")\
	CMT_ASM(".short " _(VALUE))
#define ADD_BP_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X03, 0XAC # addw " _(VALUE) "(%si), %bp")\
	CMT_ASM(".short " _(VALUE))
#define ADD_BP_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X03, 0XAD # addw " _(VALUE) "(%di), %bp")\
	CMT_ASM(".short " _(VALUE))

#define ADD_SP_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X03, 0XA7 # addw " _(VALUE) "(%bx), %sp")\
	CMT_ASM(".short " _(VALUE))
#define ADD_SP_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X03, 0XA6 # addw " _(VALUE) "(%bp), %sp")\
	CMT_ASM(".short " _(VALUE))
#define ADD_SP_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X03, 0XA4 # addw " _(VALUE) "(%si), %sp")\
	CMT_ASM(".short " _(VALUE))
#define ADD_SP_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X03, 0XA5 # addw " _(VALUE) "(%di), %sp")\
	CMT_ASM(".short " _(VALUE))

#define ADD_AX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X01, 0X87 # addw %ax, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define ADD_AX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X01, 0X86 # addw %ax, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define ADD_AX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X01, 0X84 # addw %ax, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define ADD_AX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X01, 0X85 # addw %ax, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define ADD_BX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X01, 0X9F # addw %bx, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define ADD_BX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X01, 0X9E # addw %bx, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define ADD_BX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X01, 0X9C # addw %bx, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define ADD_BX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X01, 0X9D # addw %bx, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define ADD_CX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X01, 0X8F # addw %cx, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define ADD_CX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X01, 0X8E # addw %cx, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define ADD_CX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X01, 0X8C # addw %cx, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define ADD_CX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X01, 0X8D # addw %cx, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define ADD_DX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X01, 0X97 # addw %dx, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define ADD_DX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X01, 0X96 # addw %dx, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define ADD_DX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X01, 0X94 # addw %dx, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define ADD_DX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X01, 0X95 # addw %dx, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define ADD_DI_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X01, 0XBF # addw %di, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define ADD_DI_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X01, 0XBE # addw %di, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define ADD_DI_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X01, 0XBC # addw %di, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define ADD_DI_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X01, 0XBD # addw %di, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define ADD_SI_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X01, 0XB7 # addw %si, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define ADD_SI_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X01, 0XB6 # addw %si, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define ADD_SI_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X01, 0XB4 # addw %si, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define ADD_SI_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X01, 0XB5 # addw %si, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define ADD_BP_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X01, 0XAF # addw %bp, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define ADD_BP_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X01, 0XAE # addw %bp, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define ADD_BP_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X01, 0XAC # addw %bp, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define ADD_BP_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X01, 0XAD # addw %bp, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define ADD_SP_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X01, 0XA7 # addw %sp, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define ADD_SP_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X01, 0XA6 # addw %sp, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define ADD_SP_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X01, 0XA4 # addw %sp, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define ADD_SP_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X01, 0XA5 # addw %sp, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))
#endif /* __SYSTEM_16_BIT__ */

#ifdef __SYSTEM_32_BIT__
#define ADD_AX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0X05 # addw (" _(VALUE) "), %ax")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0X1D # addw (" _(VALUE) "), %bx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0X0D # addw (" _(VALUE) "), %cx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0X15 # addw (" _(VALUE) "), %dx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0X3D # addw (" _(VALUE) "), %di")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0X35 # addw (" _(VALUE) "), %si")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0X2D # addw (" _(VALUE) "), %bp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0X25 # addw (" _(VALUE) "), %sp")\
	CMT_ASM(".long " _(VALUE))

#define ADD_AX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0X05 # addw %ax, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0X1D # addw %bx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0X0D # addw %cx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0X15 # addw %dx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0X3D # addw %di, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0X35 # addw %si, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0X2D # addw %bp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0X25 # addw %sp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))

#define ADD_AX_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X03, 0X00 # addw (%eax), %ax")
#define ADD_AX_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X03, 0X03 # addw (%ebx), %ax")
#define ADD_AX_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X03, 0X01 # addw (%ecx), %ax")
#define ADD_AX_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X03, 0X02 # addw (%edx), %ax")
#define ADD_AX_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X03, 0X07 # addw (%edi), %ax")
#define ADD_AX_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X03, 0X06 # addw (%esi), %ax")
#define ADD_AX_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X03, 0X45, 0X00 # addw (%ebp), %ax")
#define ADD_AX_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X03, 0X04, 0X24 # addw (%esp), %ax")
#define ADD_AX_FROM_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X03, 0X07 # addw (%bx), %ax")
#define ADD_AX_FROM_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X03, 0X46, 0X00 # addw (%bp), %ax")
#define ADD_AX_FROM_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X03, 0X04 # addw (%si), %ax")
#define ADD_AX_FROM_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X03, 0X05 # addw (%di), %ax")

#define ADD_BX_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X03, 0X18 # addw (%eax), %bx")
#define ADD_BX_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X03, 0X1B # addw (%ebx), %bx")
#define ADD_BX_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X03, 0X19 # addw (%ecx), %bx")
#define ADD_BX_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X03, 0X1A # addw (%edx), %bx")
#define ADD_BX_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X03, 0X1F # addw (%edi), %bx")
#define ADD_BX_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X03, 0X1E # addw (%esi), %bx")
#define ADD_BX_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X03, 0X5D, 0X00 # addw (%ebp), %bx")
#define ADD_BX_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X03, 0X1C, 0X24 # addw (%esp), %bx")
#define ADD_BX_FROM_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X03, 0X1F # addw (%bx), %bx")
#define ADD_BX_FROM_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X03, 0X5E, 0X00 # addw (%bp), %bx")
#define ADD_BX_FROM_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X03, 0X1C # addw (%si), %bx")
#define ADD_BX_FROM_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X03, 0X1D # addw (%di), %bx")

#define ADD_CX_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X03, 0X08 # addw (%eax), %cx")
#define ADD_CX_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X03, 0X0B # addw (%ebx), %cx")
#define ADD_CX_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X03, 0X09 # addw (%ecx), %cx")
#define ADD_CX_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X03, 0X0A # addw (%edx), %cx")
#define ADD_CX_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X03, 0X0F # addw (%edi), %cx")
#define ADD_CX_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X03, 0X0E # addw (%esi), %cx")
#define ADD_CX_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X03, 0X4D, 0X00 # addw (%ebp), %cx")
#define ADD_CX_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X03, 0X0C, 0X24 # addw (%esp), %cx")
#define ADD_CX_FROM_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X03, 0X0F # addw (%bx), %cx")
#define ADD_CX_FROM_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X03, 0X4E, 0X00 # addw (%bp), %cx")
#define ADD_CX_FROM_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X03, 0X0C # addw (%si), %cx")
#define ADD_CX_FROM_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X03, 0X0D # addw (%di), %cx")

#define ADD_DX_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X03, 0X10 # addw (%eax), %dx")
#define ADD_DX_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X03, 0X13 # addw (%ebx), %dx")
#define ADD_DX_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X03, 0X11 # addw (%ecx), %dx")
#define ADD_DX_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X03, 0X12 # addw (%edx), %dx")
#define ADD_DX_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X03, 0X17 # addw (%edi), %dx")
#define ADD_DX_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X03, 0X16 # addw (%esi), %dx")
#define ADD_DX_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X03, 0X55, 0X00 # addw (%ebp), %dx")
#define ADD_DX_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X03, 0X14, 0X24 # addw (%esp), %dx")
#define ADD_DX_FROM_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X03, 0X17 # addw (%bx), %dx")
#define ADD_DX_FROM_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X03, 0X56, 0X00 # addw (%bp), %dx")
#define ADD_DX_FROM_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X03, 0X14 # addw (%si), %dx")
#define ADD_DX_FROM_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X03, 0X15 # addw (%di), %dx")

#define ADD_DI_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X03, 0X38 # addw (%eax), %di")
#define ADD_DI_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X03, 0X3B # addw (%ebx), %di")
#define ADD_DI_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X03, 0X39 # addw (%ecx), %di")
#define ADD_DI_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X03, 0X3A # addw (%edx), %di")
#define ADD_DI_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X03, 0X3F # addw (%edi), %di")
#define ADD_DI_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X03, 0X3E # addw (%esi), %di")
#define ADD_DI_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X03, 0X7D, 0X00 # addw (%ebp), %di")
#define ADD_DI_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X03, 0X3C, 0X24 # addw (%esp), %di")
#define ADD_DI_FROM_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X03, 0X3F # addw (%bx), %di")
#define ADD_DI_FROM_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X03, 0X7E, 0X00 # addw (%bp), %di")
#define ADD_DI_FROM_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X03, 0X3C # addw (%si), %di")
#define ADD_DI_FROM_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X03, 0X3D # addw (%di), %di")

#define ADD_SI_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X03, 0X30 # addw (%eax), %si")
#define ADD_SI_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X03, 0X33 # addw (%ebx), %si")
#define ADD_SI_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X03, 0X31 # addw (%ecx), %si")
#define ADD_SI_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X03, 0X32 # addw (%edx), %si")
#define ADD_SI_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X03, 0X37 # addw (%edi), %si")
#define ADD_SI_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X03, 0X36 # addw (%esi), %si")
#define ADD_SI_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X03, 0X75, 0X00 # addw (%ebp), %si")
#define ADD_SI_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X03, 0X34, 0X24 # addw (%esp), %si")
#define ADD_SI_FROM_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X03, 0X37 # addw (%bx), %si")
#define ADD_SI_FROM_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X03, 0X76, 0X00 # addw (%bp), %si")
#define ADD_SI_FROM_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X03, 0X34 # addw (%si), %si")
#define ADD_SI_FROM_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X03, 0X35 # addw (%di), %si")

#define ADD_BP_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X03, 0X28 # addw (%eax), %bp")
#define ADD_BP_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X03, 0X2B # addw (%ebx), %bp")
#define ADD_BP_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X03, 0X29 # addw (%ecx), %bp")
#define ADD_BP_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X03, 0X2A # addw (%edx), %bp")
#define ADD_BP_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X03, 0X2F # addw (%edi), %bp")
#define ADD_BP_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X03, 0X2E # addw (%esi), %bp")
#define ADD_BP_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X03, 0X6D, 0X00 # addw (%ebp), %bp")
#define ADD_BP_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X03, 0X2C, 0X24 # addw (%esp), %bp")
#define ADD_BP_FROM_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X03, 0X2F # addw (%bx), %bp")
#define ADD_BP_FROM_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X03, 0X6E, 0X00 # addw (%bp), %bp")
#define ADD_BP_FROM_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X03, 0X2C # addw (%si), %bp")
#define ADD_BP_FROM_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X03, 0X2D # addw (%di), %bp")

#define ADD_SP_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X03, 0X20 # addw (%eax), %sp")
#define ADD_SP_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X03, 0X23 # addw (%ebx), %sp")
#define ADD_SP_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X03, 0X21 # addw (%ecx), %sp")
#define ADD_SP_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X03, 0X22 # addw (%edx), %sp")
#define ADD_SP_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X03, 0X27 # addw (%edi), %sp")
#define ADD_SP_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X03, 0X26 # addw (%esi), %sp")
#define ADD_SP_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X03, 0X65, 0X00 # addw (%ebp), %sp")
#define ADD_SP_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X03, 0X24, 0X24 # addw (%esp), %sp")
#define ADD_SP_FROM_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X03, 0X27 # addw (%bx), %sp")
#define ADD_SP_FROM_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X03, 0X66, 0X00 # addw (%bp), %sp")
#define ADD_SP_FROM_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X03, 0X24 # addw (%si), %sp")
#define ADD_SP_FROM_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X03, 0X25 # addw (%di), %sp")

#define ADD_AX_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X01, 0X00 # addw %ax, (%eax)")
#define ADD_AX_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X01, 0X03 # addw %ax, (%ebx)")
#define ADD_AX_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X01, 0X01 # addw %ax, (%ecx)")
#define ADD_AX_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X01, 0X02 # addw %ax, (%edx)")
#define ADD_AX_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X01, 0X07 # addw %ax, (%edi)")
#define ADD_AX_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X01, 0X06 # addw %ax, (%esi)")
#define ADD_AX_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X01, 0X45, 0X00 # addw %ax, (%ebp)")
#define ADD_AX_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X01, 0X04, 0X24 # addw %ax, (%esp)")
#define ADD_AX_TO_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X01, 0X07 # addw %ax, (%bx)")
#define ADD_AX_TO_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X01, 0X46, 0X00 # addw %ax, (%bp)")
#define ADD_AX_TO_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X01, 0X04 # addw %ax, (%si)")
#define ADD_AX_TO_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X01, 0X05 # addw %ax, (%di)")

#define ADD_BX_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X01, 0X18 # addw %bx, (%eax)")
#define ADD_BX_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X01, 0X1B # addw %bx, (%ebx)")
#define ADD_BX_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X01, 0X19 # addw %bx, (%ecx)")
#define ADD_BX_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X01, 0X1A # addw %bx, (%edx)")
#define ADD_BX_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X01, 0X1F # addw %bx, (%edi)")
#define ADD_BX_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X01, 0X1E # addw %bx, (%esi)")
#define ADD_BX_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X01, 0X5D, 0X00 # addw %bx, (%ebp)")
#define ADD_BX_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X01, 0X1C, 0X24 # addw %bx, (%esp)")
#define ADD_BX_TO_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X01, 0X1F # addw %bx, (%bx)")
#define ADD_BX_TO_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X01, 0X5E, 0X00 # addw %bx, (%bp)")
#define ADD_BX_TO_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X01, 0X1C # addw %bx, (%si)")
#define ADD_BX_TO_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X01, 0X1D # addw %bx, (%di)")

#define ADD_CX_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X01, 0X08 # addw %cx, (%eax)")
#define ADD_CX_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X01, 0X0B # addw %cx, (%ebx)")
#define ADD_CX_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X01, 0X09 # addw %cx, (%ecx)")
#define ADD_CX_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X01, 0X0A # addw %cx, (%edx)")
#define ADD_CX_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X01, 0X0F # addw %cx, (%edi)")
#define ADD_CX_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X01, 0X0E # addw %cx, (%esi)")
#define ADD_CX_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X01, 0X4D, 0X00 # addw %cx, (%ebp)")
#define ADD_CX_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X01, 0X0C, 0X24 # addw %cx, (%esp)")
#define ADD_CX_TO_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X01, 0X0F # addw %cx, (%bx)")
#define ADD_CX_TO_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X01, 0X4E, 0X00 # addw %cx, (%bp)")
#define ADD_CX_TO_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X01, 0X0C # addw %cx, (%si)")
#define ADD_CX_TO_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X01, 0X0D # addw %cx, (%di)")

#define ADD_DX_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X01, 0X10 # addw %dx, (%eax)")
#define ADD_DX_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X01, 0X13 # addw %dx, (%ebx)")
#define ADD_DX_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X01, 0X11 # addw %dx, (%ecx)")
#define ADD_DX_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X01, 0X12 # addw %dx, (%edx)")
#define ADD_DX_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X01, 0X17 # addw %dx, (%edi)")
#define ADD_DX_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X01, 0X16 # addw %dx, (%esi)")
#define ADD_DX_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X01, 0X55, 0X00 # addw %dx, (%ebp)")
#define ADD_DX_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X01, 0X14, 0X24 # addw %dx, (%esp)")
#define ADD_DX_TO_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X01, 0X17 # addw %dx, (%bx)")
#define ADD_DX_TO_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X01, 0X56, 0X00 # addw %dx, (%bp)")
#define ADD_DX_TO_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X01, 0X14 # addw %dx, (%si)")
#define ADD_DX_TO_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X01, 0X15 # addw %dx, (%di)")

#define ADD_DI_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X01, 0X38 # addw %di, (%eax)")
#define ADD_DI_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X01, 0X3B # addw %di, (%ebx)")
#define ADD_DI_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X01, 0X39 # addw %di, (%ecx)")
#define ADD_DI_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X01, 0X3A # addw %di, (%edx)")
#define ADD_DI_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X01, 0X3F # addw %di, (%edi)")
#define ADD_DI_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X01, 0X3E # addw %di, (%esi)")
#define ADD_DI_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X01, 0X7D, 0X00 # addw %di, (%ebp)")
#define ADD_DI_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X01, 0X3C, 0X24 # addw %di, (%esp)")
#define ADD_DI_TO_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X01, 0X3F # addw %di, (%bx)")
#define ADD_DI_TO_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X01, 0X7E, 0X00 # addw %di, (%bp)")
#define ADD_DI_TO_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X01, 0X3C # addw %di, (%si)")
#define ADD_DI_TO_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X01, 0X3D # addw %di, (%di)")

#define ADD_SI_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X01, 0X30 # addw %si, (%eax)")
#define ADD_SI_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X01, 0X33 # addw %si, (%ebx)")
#define ADD_SI_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X01, 0X31 # addw %si, (%ecx)")
#define ADD_SI_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X01, 0X32 # addw %si, (%edx)")
#define ADD_SI_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X01, 0X37 # addw %si, (%edi)")
#define ADD_SI_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X01, 0X36 # addw %si, (%esi)")
#define ADD_SI_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X01, 0X75, 0X00 # addw %si, (%ebp)")
#define ADD_SI_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X01, 0X34, 0X24 # addw %si, (%esp)")
#define ADD_SI_TO_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X01, 0X37 # addw %si, (%bx)")
#define ADD_SI_TO_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X01, 0X76, 0X00 # addw %si, (%bp)")
#define ADD_SI_TO_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X01, 0X34 # addw %si, (%si)")
#define ADD_SI_TO_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X01, 0X35 # addw %si, (%di)")

#define ADD_BP_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X01, 0X28 # addw %bp, (%eax)")
#define ADD_BP_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X01, 0X2B # addw %bp, (%ebx)")
#define ADD_BP_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X01, 0X29 # addw %bp, (%ecx)")
#define ADD_BP_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X01, 0X2A # addw %bp, (%edx)")
#define ADD_BP_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X01, 0X2F # addw %bp, (%edi)")
#define ADD_BP_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X01, 0X2E # addw %bp, (%esi)")
#define ADD_BP_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X01, 0X6D, 0X00 # addw %bp, (%ebp)")
#define ADD_BP_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X01, 0X2C, 0X24 # addw %bp, (%esp)")
#define ADD_BP_TO_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X01, 0X2F # addw %bp, (%bx)")
#define ADD_BP_TO_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X01, 0X6E, 0X00 # addw %bp, (%bp)")
#define ADD_BP_TO_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X01, 0X2C # addw %bp, (%si)")
#define ADD_BP_TO_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X01, 0X2D # addw %bp, (%di)")

#define ADD_SP_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X01, 0X20 # addw %sp, (%eax)")
#define ADD_SP_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X01, 0X23 # addw %sp, (%ebx)")
#define ADD_SP_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X01, 0X21 # addw %sp, (%ecx)")
#define ADD_SP_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X01, 0X22 # addw %sp, (%edx)")
#define ADD_SP_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X01, 0X27 # addw %sp, (%edi)")
#define ADD_SP_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X01, 0X26 # addw %sp, (%esi)")
#define ADD_SP_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X01, 0X65, 0X00 # addw %sp, (%ebp)")
#define ADD_SP_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X01, 0X24, 0X24 # addw %sp, (%esp)")
#define ADD_SP_TO_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X01, 0X27 # addw %sp, (%bx)")
#define ADD_SP_TO_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X01, 0X66, 0X00 # addw %sp, (%bp)")
#define ADD_SP_TO_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X01, 0X24 # addw %sp, (%si)")
#define ADD_SP_TO_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X01, 0X25 # addw %sp, (%di)")

#define ADD_AX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0X80 # addw " _(VALUE) "(%eax), %ax")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0X83 # addw " _(VALUE) "(%ebx), %ax")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0X81 # addw " _(VALUE) "(%ecx), %ax")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0X82 # addw " _(VALUE) "(%edx), %ax")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0X87 # addw " _(VALUE) "(%edi), %ax")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0X86 # addw " _(VALUE) "(%esi), %ax")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0X85 # addw " _(VALUE) "(%ebp), %ax")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0X84, 0X24 # addw " _(VALUE) "(%esp), %ax")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X03, 0X87 # addw " _(VALUE) "(%bx), %ax")\
	CMT_ASM(".short " _(VALUE))
#define ADD_AX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X03, 0X86 # addw " _(VALUE) "(%bp), %ax")\
	CMT_ASM(".short " _(VALUE))
#define ADD_AX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X03, 0X84 # addw " _(VALUE) "(%si), %ax")\
	CMT_ASM(".short " _(VALUE))
#define ADD_AX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X03, 0X85 # addw " _(VALUE) "(%di), %ax")\
	CMT_ASM(".short " _(VALUE))

#define ADD_BX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0X98 # addw " _(VALUE) "(%eax), %bx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0X9B # addw " _(VALUE) "(%ebx), %bx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0X99 # addw " _(VALUE) "(%ecx), %bx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0X9A # addw " _(VALUE) "(%edx), %bx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0X9F # addw " _(VALUE) "(%edi), %bx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0X9E # addw " _(VALUE) "(%esi), %bx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0X9D # addw " _(VALUE) "(%ebp), %bx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0X9C, 0X24 # addw " _(VALUE) "(%esp), %bx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X03, 0X9F # addw " _(VALUE) "(%bx), %bx")\
	CMT_ASM(".short " _(VALUE))
#define ADD_BX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X03, 0X9E # addw " _(VALUE) "(%bp), %bx")\
	CMT_ASM(".short " _(VALUE))
#define ADD_BX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X03, 0X9C # addw " _(VALUE) "(%si), %bx")\
	CMT_ASM(".short " _(VALUE))
#define ADD_BX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X03, 0X9D # addw " _(VALUE) "(%di), %bx")\
	CMT_ASM(".short " _(VALUE))

#define ADD_CX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0X88 # addw " _(VALUE) "(%eax), %cx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0X8B # addw " _(VALUE) "(%ebx), %cx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0X89 # addw " _(VALUE) "(%ecx), %cx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0X8A # addw " _(VALUE) "(%edx), %cx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0X8F # addw " _(VALUE) "(%edi), %cx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0X8E # addw " _(VALUE) "(%esi), %cx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0X8D # addw " _(VALUE) "(%ebp), %cx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0X8C, 0X24 # addw " _(VALUE) "(%esp), %cx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X03, 0X8F # addw " _(VALUE) "(%bx), %cx")\
	CMT_ASM(".short " _(VALUE))
#define ADD_CX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X03, 0X8E # addw " _(VALUE) "(%bp), %cx")\
	CMT_ASM(".short " _(VALUE))
#define ADD_CX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X03, 0X8C # addw " _(VALUE) "(%si), %cx")\
	CMT_ASM(".short " _(VALUE))
#define ADD_CX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X03, 0X8D # addw " _(VALUE) "(%di), %cx")\
	CMT_ASM(".short " _(VALUE))

#define ADD_DX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0X90 # addw " _(VALUE) "(%eax), %dx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0X93 # addw " _(VALUE) "(%ebx), %dx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0X91 # addw " _(VALUE) "(%ecx), %dx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0X92 # addw " _(VALUE) "(%edx), %dx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0X97 # addw " _(VALUE) "(%edi), %dx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0X96 # addw " _(VALUE) "(%esi), %dx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0X95 # addw " _(VALUE) "(%ebp), %dx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0X94, 0X24 # addw " _(VALUE) "(%esp), %dx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X03, 0X97 # addw " _(VALUE) "(%bx), %dx")\
	CMT_ASM(".short " _(VALUE))
#define ADD_DX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X03, 0X96 # addw " _(VALUE) "(%bp), %dx")\
	CMT_ASM(".short " _(VALUE))
#define ADD_DX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X03, 0X94 # addw " _(VALUE) "(%si), %dx")\
	CMT_ASM(".short " _(VALUE))
#define ADD_DX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X03, 0X95 # addw " _(VALUE) "(%di), %dx")\
	CMT_ASM(".short " _(VALUE))

#define ADD_DI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0XB8 # addw " _(VALUE) "(%eax), %di")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0XBB # addw " _(VALUE) "(%ebx), %di")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0XB9 # addw " _(VALUE) "(%ecx), %di")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0XBA # addw " _(VALUE) "(%edx), %di")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0XBF # addw " _(VALUE) "(%edi), %di")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0XBE # addw " _(VALUE) "(%esi), %di")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0XBD # addw " _(VALUE) "(%ebp), %di")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0XBC, 0X24 # addw " _(VALUE) "(%esp), %di")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DI_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X03, 0XBF # addw " _(VALUE) "(%bx), %di")\
	CMT_ASM(".short " _(VALUE))
#define ADD_DI_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X03, 0XBE # addw " _(VALUE) "(%bp), %di")\
	CMT_ASM(".short " _(VALUE))
#define ADD_DI_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X03, 0XBC # addw " _(VALUE) "(%si), %di")\
	CMT_ASM(".short " _(VALUE))
#define ADD_DI_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X03, 0XBD # addw " _(VALUE) "(%di), %di")\
	CMT_ASM(".short " _(VALUE))

#define ADD_SI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0XB0 # addw " _(VALUE) "(%eax), %si")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0XB3 # addw " _(VALUE) "(%ebx), %si")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0XB1 # addw " _(VALUE) "(%ecx), %si")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0XB2 # addw " _(VALUE) "(%edx), %si")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0XB7 # addw " _(VALUE) "(%edi), %si")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0XB6 # addw " _(VALUE) "(%esi), %si")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0XB5 # addw " _(VALUE) "(%ebp), %si")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0XB4, 0X24 # addw " _(VALUE) "(%esp), %si")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SI_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X03, 0XB7 # addw " _(VALUE) "(%bx), %si")\
	CMT_ASM(".short " _(VALUE))
#define ADD_SI_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X03, 0XB6 # addw " _(VALUE) "(%bp), %si")\
	CMT_ASM(".short " _(VALUE))
#define ADD_SI_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X03, 0XB4 # addw " _(VALUE) "(%si), %si")\
	CMT_ASM(".short " _(VALUE))
#define ADD_SI_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X03, 0XB5 # addw " _(VALUE) "(%di), %si")\
	CMT_ASM(".short " _(VALUE))

#define ADD_BP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0XA8 # addw " _(VALUE) "(%eax), %bp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0XAB # addw " _(VALUE) "(%ebx), %bp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0XA9 # addw " _(VALUE) "(%ecx), %bp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0XAA # addw " _(VALUE) "(%edx), %bp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0XAF # addw " _(VALUE) "(%edi), %bp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0XAE # addw " _(VALUE) "(%esi), %bp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0XAD # addw " _(VALUE) "(%ebp), %bp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0XAC, 0X24 # addw " _(VALUE) "(%esp), %bp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BP_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X03, 0XAF # addw " _(VALUE) "(%bx), %bp")\
	CMT_ASM(".short " _(VALUE))
#define ADD_BP_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X03, 0XAE # addw " _(VALUE) "(%bp), %bp")\
	CMT_ASM(".short " _(VALUE))
#define ADD_BP_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X03, 0XAC # addw " _(VALUE) "(%si), %bp")\
	CMT_ASM(".short " _(VALUE))
#define ADD_BP_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X03, 0XAD # addw " _(VALUE) "(%di), %bp")\
	CMT_ASM(".short " _(VALUE))

#define ADD_SP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0XA0 # addw " _(VALUE) "(%eax), %sp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0XA3 # addw " _(VALUE) "(%ebx), %sp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0XA1 # addw " _(VALUE) "(%ecx), %sp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0XA2 # addw " _(VALUE) "(%edx), %sp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0XA7 # addw " _(VALUE) "(%edi), %sp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0XA6 # addw " _(VALUE) "(%esi), %sp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0XA5 # addw " _(VALUE) "(%ebp), %sp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0XA4, 0X24 # addw " _(VALUE) "(%esp), %sp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SP_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X03, 0XA7 # addw " _(VALUE) "(%bx), %sp")\
	CMT_ASM(".short " _(VALUE))
#define ADD_SP_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X03, 0XA6 # addw " _(VALUE) "(%bp), %sp")\
	CMT_ASM(".short " _(VALUE))
#define ADD_SP_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X03, 0XA4 # addw " _(VALUE) "(%si), %sp")\
	CMT_ASM(".short " _(VALUE))
#define ADD_SP_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X03, 0XA5 # addw " _(VALUE) "(%di), %sp")\
	CMT_ASM(".short " _(VALUE))

#define ADD_AX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0X80 # addw %ax, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0X83 # addw %ax, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0X81 # addw %ax, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0X82 # addw %ax, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0X87 # addw %ax, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0X86 # addw %ax, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0X85 # addw %ax, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0X84, 0X24 # addw %ax, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X01, 0X87 # addw %ax, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define ADD_AX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X01, 0X86 # addw %ax, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define ADD_AX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X01, 0X84 # addw %ax, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define ADD_AX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X01, 0X85 # addw %ax, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define ADD_BX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0X98 # addw %bx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0X9B # addw %bx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0X99 # addw %bx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0X9A # addw %bx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0X9F # addw %bx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0X9E # addw %bx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0X9D # addw %bx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0X9C, 0X24 # addw %bx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X01, 0X9F # addw %bx, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define ADD_BX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X01, 0X9E # addw %bx, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define ADD_BX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X01, 0X9C # addw %bx, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define ADD_BX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X01, 0X9D # addw %bx, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define ADD_CX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0X88 # addw %cx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0X8B # addw %cx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0X89 # addw %cx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0X8A # addw %cx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0X8F # addw %cx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0X8E # addw %cx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0X8D # addw %cx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0X8C, 0X24 # addw %cx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X01, 0X8F # addw %cx, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define ADD_CX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X01, 0X8E # addw %cx, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define ADD_CX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X01, 0X8C # addw %cx, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define ADD_CX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X01, 0X8D # addw %cx, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define ADD_DX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0X90 # addw %dx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0X93 # addw %dx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0X91 # addw %dx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0X92 # addw %dx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0X97 # addw %dx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0X96 # addw %dx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0X95 # addw %dx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0X94, 0X24 # addw %dx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X01, 0X97 # addw %dx, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define ADD_DX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X01, 0X96 # addw %dx, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define ADD_DX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X01, 0X94 # addw %dx, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define ADD_DX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X01, 0X95 # addw %dx, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define ADD_DI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0XB8 # addw %di, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0XBB # addw %di, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0XB9 # addw %di, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0XBA # addw %di, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0XBF # addw %di, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0XBE # addw %di, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0XBD # addw %di, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0XBC, 0X24 # addw %di, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DI_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X01, 0XBF # addw %di, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define ADD_DI_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X01, 0XBE # addw %di, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define ADD_DI_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X01, 0XBC # addw %di, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define ADD_DI_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X01, 0XBD # addw %di, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define ADD_SI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0XB0 # addw %si, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0XB3 # addw %si, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0XB1 # addw %si, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0XB2 # addw %si, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0XB7 # addw %si, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0XB6 # addw %si, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0XB5 # addw %si, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0XB4, 0X24 # addw %si, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SI_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X01, 0XB7 # addw %si, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define ADD_SI_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X01, 0XB6 # addw %si, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define ADD_SI_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X01, 0XB4 # addw %si, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define ADD_SI_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X01, 0XB5 # addw %si, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define ADD_BP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0XA8 # addw %bp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0XAB # addw %bp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0XA9 # addw %bp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0XAA # addw %bp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0XAF # addw %bp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0XAE # addw %bp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0XAD # addw %bp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0XAC, 0X24 # addw %bp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BP_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X01, 0XAF # addw %bp, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define ADD_BP_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X01, 0XAE # addw %bp, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define ADD_BP_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X01, 0XAC # addw %bp, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define ADD_BP_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X01, 0XAD # addw %bp, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define ADD_SP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0XA0 # addw %sp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0XA3 # addw %sp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0XA1 # addw %sp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0XA2 # addw %sp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0XA7 # addw %sp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0XA6 # addw %sp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0XA5 # addw %sp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0XA4, 0X24 # addw %sp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SP_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X01, 0XA7 # addw %sp, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define ADD_SP_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X01, 0XA6 # addw %sp, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define ADD_SP_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X01, 0XA4 # addw %sp, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define ADD_SP_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X01, 0XA5 # addw %sp, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define ADD_AX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0X04, 0X25 # addw (" _(VALUE) "), %ax")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0X1C, 0X25 # addw (" _(VALUE) "), %bx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0X0C, 0X25 # addw (" _(VALUE) "), %cx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0X14, 0X25 # addw (" _(VALUE) "), %dx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0X3C, 0X25 # addw (" _(VALUE) "), %di")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0X34, 0X25 # addw (" _(VALUE) "), %si")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0X2C, 0X25 # addw (" _(VALUE) "), %bp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0X24, 0X25 # addw (" _(VALUE) "), %sp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8W_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X03, 0X04, 0X25 # addw (" _(VALUE) "), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9W_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X03, 0X0C, 0X25 # addw (" _(VALUE) "), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10W_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X03, 0X14, 0X25 # addw (" _(VALUE) "), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11W_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X03, 0X1C, 0X25 # addw (" _(VALUE) "), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12W_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X03, 0X24, 0X25 # addw (" _(VALUE) "), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13W_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X03, 0X2C, 0X25 # addw (" _(VALUE) "), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14W_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X03, 0X34, 0X25 # addw (" _(VALUE) "), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15W_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X03, 0X3C, 0X25 # addw (" _(VALUE) "), %r15w")\
	CMT_ASM(".long " _(VALUE))

#define ADD_AX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0X04, 0X25 # addw %ax, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0X1C, 0X25 # addw %bx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0X0C, 0X25 # addw %cx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0X14, 0X25 # addw %dx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0X3C, 0X25 # addw %di, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0X34, 0X25 # addw %si, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0X2C, 0X25 # addw %bp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0X24, 0X25 # addw %sp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8W_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X01, 0X04, 0X25 # addw %r8w, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9W_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X01, 0X0C, 0X25 # addw %r9w, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10W_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X01, 0X14, 0X25 # addw %r10w, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11W_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X01, 0X1C, 0X25 # addw %r11w, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12W_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X01, 0X24, 0X25 # addw %r12w, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13W_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X01, 0X2C, 0X25 # addw %r13w, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14W_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X01, 0X34, 0X25 # addw %r14w, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15W_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X01, 0X3C, 0X25 # addw %r15w, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))

#define ADD_AX_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X03, 0X00 # addw (%rax), %ax")
#define ADD_AX_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X03, 0X03 # addw (%rbx), %ax")
#define ADD_AX_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X03, 0X01 # addw (%rcx), %ax")
#define ADD_AX_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X03, 0X02 # addw (%rdx), %ax")
#define ADD_AX_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X03, 0X07 # addw (%rdi), %ax")
#define ADD_AX_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X03, 0X06 # addw (%rsi), %ax")
#define ADD_AX_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X03, 0X45, 0X00 # addw (%rbp), %ax")
#define ADD_AX_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X03, 0X04, 0X24 # addw (%rsp), %ax")
#define ADD_AX_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X03, 0X00 # addw (%r8), %ax")
#define ADD_AX_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X03, 0X01 # addw (%r9), %ax")
#define ADD_AX_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X03, 0X02 # addw (%r10), %ax")
#define ADD_AX_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X03, 0X03 # addw (%r11), %ax")
#define ADD_AX_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X03, 0X04, 0X24 # addw (%r12), %ax")
#define ADD_AX_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X03, 0X45, 0X00 # addw (%r13), %ax")
#define ADD_AX_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X03, 0X06 # addw (%r14), %ax")
#define ADD_AX_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X03, 0X07 # addw (%r15), %ax")
#define ADD_AX_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X03, 0X00 # addw (%eax), %ax")
#define ADD_AX_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X03, 0X03 # addw (%ebx), %ax")
#define ADD_AX_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X03, 0X01 # addw (%ecx), %ax")
#define ADD_AX_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X03, 0X02 # addw (%edx), %ax")
#define ADD_AX_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X03, 0X07 # addw (%edi), %ax")
#define ADD_AX_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X03, 0X06 # addw (%esi), %ax")
#define ADD_AX_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X03, 0X45, 0X00 # addw (%ebp), %ax")
#define ADD_AX_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X03, 0X04, 0X24 # addw (%esp), %ax")

#define ADD_BX_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X03, 0X18 # addw (%rax), %bx")
#define ADD_BX_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X03, 0X1B # addw (%rbx), %bx")
#define ADD_BX_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X03, 0X19 # addw (%rcx), %bx")
#define ADD_BX_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X03, 0X1A # addw (%rdx), %bx")
#define ADD_BX_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X03, 0X1F # addw (%rdi), %bx")
#define ADD_BX_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X03, 0X1E # addw (%rsi), %bx")
#define ADD_BX_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X03, 0X5D, 0X00 # addw (%rbp), %bx")
#define ADD_BX_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X03, 0X1C, 0X24 # addw (%rsp), %bx")
#define ADD_BX_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X03, 0X18 # addw (%r8), %bx")
#define ADD_BX_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X03, 0X19 # addw (%r9), %bx")
#define ADD_BX_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X03, 0X1A # addw (%r10), %bx")
#define ADD_BX_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X03, 0X1B # addw (%r11), %bx")
#define ADD_BX_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X03, 0X1C, 0X24 # addw (%r12), %bx")
#define ADD_BX_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X03, 0X5D, 0X00 # addw (%r13), %bx")
#define ADD_BX_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X03, 0X1E # addw (%r14), %bx")
#define ADD_BX_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X03, 0X1F # addw (%r15), %bx")
#define ADD_BX_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X03, 0X18 # addw (%eax), %bx")
#define ADD_BX_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X03, 0X1B # addw (%ebx), %bx")
#define ADD_BX_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X03, 0X19 # addw (%ecx), %bx")
#define ADD_BX_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X03, 0X1A # addw (%edx), %bx")
#define ADD_BX_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X03, 0X1F # addw (%edi), %bx")
#define ADD_BX_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X03, 0X1E # addw (%esi), %bx")
#define ADD_BX_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X03, 0X5D, 0X00 # addw (%ebp), %bx")
#define ADD_BX_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X03, 0X1C, 0X24 # addw (%esp), %bx")

#define ADD_CX_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X03, 0X08 # addw (%rax), %cx")
#define ADD_CX_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X03, 0X0B # addw (%rbx), %cx")
#define ADD_CX_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X03, 0X09 # addw (%rcx), %cx")
#define ADD_CX_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X03, 0X0A # addw (%rdx), %cx")
#define ADD_CX_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X03, 0X0F # addw (%rdi), %cx")
#define ADD_CX_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X03, 0X0E # addw (%rsi), %cx")
#define ADD_CX_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X03, 0X4D, 0X00 # addw (%rbp), %cx")
#define ADD_CX_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X03, 0X0C, 0X24 # addw (%rsp), %cx")
#define ADD_CX_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X03, 0X08 # addw (%r8), %cx")
#define ADD_CX_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X03, 0X09 # addw (%r9), %cx")
#define ADD_CX_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X03, 0X0A # addw (%r10), %cx")
#define ADD_CX_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X03, 0X0B # addw (%r11), %cx")
#define ADD_CX_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X03, 0X0C, 0X24 # addw (%r12), %cx")
#define ADD_CX_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X03, 0X4D, 0X00 # addw (%r13), %cx")
#define ADD_CX_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X03, 0X0E # addw (%r14), %cx")
#define ADD_CX_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X03, 0X0F # addw (%r15), %cx")
#define ADD_CX_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X03, 0X08 # addw (%eax), %cx")
#define ADD_CX_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X03, 0X0B # addw (%ebx), %cx")
#define ADD_CX_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X03, 0X09 # addw (%ecx), %cx")
#define ADD_CX_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X03, 0X0A # addw (%edx), %cx")
#define ADD_CX_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X03, 0X0F # addw (%edi), %cx")
#define ADD_CX_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X03, 0X0E # addw (%esi), %cx")
#define ADD_CX_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X03, 0X4D, 0X00 # addw (%ebp), %cx")
#define ADD_CX_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X03, 0X0C, 0X24 # addw (%esp), %cx")

#define ADD_DX_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X03, 0X10 # addw (%rax), %dx")
#define ADD_DX_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X03, 0X13 # addw (%rbx), %dx")
#define ADD_DX_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X03, 0X11 # addw (%rcx), %dx")
#define ADD_DX_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X03, 0X12 # addw (%rdx), %dx")
#define ADD_DX_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X03, 0X17 # addw (%rdi), %dx")
#define ADD_DX_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X03, 0X16 # addw (%rsi), %dx")
#define ADD_DX_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X03, 0X55, 0X00 # addw (%rbp), %dx")
#define ADD_DX_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X03, 0X14, 0X24 # addw (%rsp), %dx")
#define ADD_DX_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X03, 0X10 # addw (%r8), %dx")
#define ADD_DX_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X03, 0X11 # addw (%r9), %dx")
#define ADD_DX_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X03, 0X12 # addw (%r10), %dx")
#define ADD_DX_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X03, 0X13 # addw (%r11), %dx")
#define ADD_DX_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X03, 0X14, 0X24 # addw (%r12), %dx")
#define ADD_DX_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X03, 0X55, 0X00 # addw (%r13), %dx")
#define ADD_DX_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X03, 0X16 # addw (%r14), %dx")
#define ADD_DX_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X03, 0X17 # addw (%r15), %dx")
#define ADD_DX_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X03, 0X10 # addw (%eax), %dx")
#define ADD_DX_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X03, 0X13 # addw (%ebx), %dx")
#define ADD_DX_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X03, 0X11 # addw (%ecx), %dx")
#define ADD_DX_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X03, 0X12 # addw (%edx), %dx")
#define ADD_DX_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X03, 0X17 # addw (%edi), %dx")
#define ADD_DX_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X03, 0X16 # addw (%esi), %dx")
#define ADD_DX_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X03, 0X55, 0X00 # addw (%ebp), %dx")
#define ADD_DX_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X03, 0X14, 0X24 # addw (%esp), %dx")

#define ADD_DI_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X03, 0X38 # addw (%rax), %di")
#define ADD_DI_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X03, 0X3B # addw (%rbx), %di")
#define ADD_DI_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X03, 0X39 # addw (%rcx), %di")
#define ADD_DI_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X03, 0X3A # addw (%rdx), %di")
#define ADD_DI_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X03, 0X3F # addw (%rdi), %di")
#define ADD_DI_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X03, 0X3E # addw (%rsi), %di")
#define ADD_DI_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X03, 0X7D, 0X00 # addw (%rbp), %di")
#define ADD_DI_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X03, 0X3C, 0X24 # addw (%rsp), %di")
#define ADD_DI_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X03, 0X38 # addw (%r8), %di")
#define ADD_DI_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X03, 0X39 # addw (%r9), %di")
#define ADD_DI_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X03, 0X3A # addw (%r10), %di")
#define ADD_DI_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X03, 0X3B # addw (%r11), %di")
#define ADD_DI_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X03, 0X3C, 0X24 # addw (%r12), %di")
#define ADD_DI_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X03, 0X7D, 0X00 # addw (%r13), %di")
#define ADD_DI_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X03, 0X3E # addw (%r14), %di")
#define ADD_DI_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X03, 0X3F # addw (%r15), %di")
#define ADD_DI_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X03, 0X38 # addw (%eax), %di")
#define ADD_DI_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X03, 0X3B # addw (%ebx), %di")
#define ADD_DI_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X03, 0X39 # addw (%ecx), %di")
#define ADD_DI_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X03, 0X3A # addw (%edx), %di")
#define ADD_DI_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X03, 0X3F # addw (%edi), %di")
#define ADD_DI_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X03, 0X3E # addw (%esi), %di")
#define ADD_DI_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X03, 0X7D, 0X00 # addw (%ebp), %di")
#define ADD_DI_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X03, 0X3C, 0X24 # addw (%esp), %di")

#define ADD_SI_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X03, 0X30 # addw (%rax), %si")
#define ADD_SI_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X03, 0X33 # addw (%rbx), %si")
#define ADD_SI_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X03, 0X31 # addw (%rcx), %si")
#define ADD_SI_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X03, 0X32 # addw (%rdx), %si")
#define ADD_SI_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X03, 0X37 # addw (%rdi), %si")
#define ADD_SI_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X03, 0X36 # addw (%rsi), %si")
#define ADD_SI_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X03, 0X75, 0X00 # addw (%rbp), %si")
#define ADD_SI_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X03, 0X34, 0X24 # addw (%rsp), %si")
#define ADD_SI_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X03, 0X30 # addw (%r8), %si")
#define ADD_SI_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X03, 0X31 # addw (%r9), %si")
#define ADD_SI_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X03, 0X32 # addw (%r10), %si")
#define ADD_SI_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X03, 0X33 # addw (%r11), %si")
#define ADD_SI_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X03, 0X34, 0X24 # addw (%r12), %si")
#define ADD_SI_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X03, 0X75, 0X00 # addw (%r13), %si")
#define ADD_SI_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X03, 0X36 # addw (%r14), %si")
#define ADD_SI_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X03, 0X37 # addw (%r15), %si")
#define ADD_SI_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X03, 0X30 # addw (%eax), %si")
#define ADD_SI_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X03, 0X33 # addw (%ebx), %si")
#define ADD_SI_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X03, 0X31 # addw (%ecx), %si")
#define ADD_SI_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X03, 0X32 # addw (%edx), %si")
#define ADD_SI_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X03, 0X37 # addw (%edi), %si")
#define ADD_SI_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X03, 0X36 # addw (%esi), %si")
#define ADD_SI_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X03, 0X75, 0X00 # addw (%ebp), %si")
#define ADD_SI_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X03, 0X34, 0X24 # addw (%esp), %si")

#define ADD_BP_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X03, 0X28 # addw (%rax), %bp")
#define ADD_BP_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X03, 0X2B # addw (%rbx), %bp")
#define ADD_BP_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X03, 0X29 # addw (%rcx), %bp")
#define ADD_BP_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X03, 0X2A # addw (%rdx), %bp")
#define ADD_BP_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X03, 0X2F # addw (%rdi), %bp")
#define ADD_BP_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X03, 0X2E # addw (%rsi), %bp")
#define ADD_BP_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X03, 0X6D, 0X00 # addw (%rbp), %bp")
#define ADD_BP_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X03, 0X2C, 0X24 # addw (%rsp), %bp")
#define ADD_BP_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X03, 0X28 # addw (%r8), %bp")
#define ADD_BP_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X03, 0X29 # addw (%r9), %bp")
#define ADD_BP_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X03, 0X2A # addw (%r10), %bp")
#define ADD_BP_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X03, 0X2B # addw (%r11), %bp")
#define ADD_BP_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X03, 0X2C, 0X24 # addw (%r12), %bp")
#define ADD_BP_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X03, 0X6D, 0X00 # addw (%r13), %bp")
#define ADD_BP_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X03, 0X2E # addw (%r14), %bp")
#define ADD_BP_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X03, 0X2F # addw (%r15), %bp")
#define ADD_BP_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X03, 0X28 # addw (%eax), %bp")
#define ADD_BP_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X03, 0X2B # addw (%ebx), %bp")
#define ADD_BP_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X03, 0X29 # addw (%ecx), %bp")
#define ADD_BP_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X03, 0X2A # addw (%edx), %bp")
#define ADD_BP_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X03, 0X2F # addw (%edi), %bp")
#define ADD_BP_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X03, 0X2E # addw (%esi), %bp")
#define ADD_BP_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X03, 0X6D, 0X00 # addw (%ebp), %bp")
#define ADD_BP_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X03, 0X2C, 0X24 # addw (%esp), %bp")

#define ADD_SP_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X03, 0X20 # addw (%rax), %sp")
#define ADD_SP_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X03, 0X23 # addw (%rbx), %sp")
#define ADD_SP_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X03, 0X21 # addw (%rcx), %sp")
#define ADD_SP_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X03, 0X22 # addw (%rdx), %sp")
#define ADD_SP_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X03, 0X27 # addw (%rdi), %sp")
#define ADD_SP_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X03, 0X26 # addw (%rsi), %sp")
#define ADD_SP_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X03, 0X65, 0X00 # addw (%rbp), %sp")
#define ADD_SP_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X03, 0X24, 0X24 # addw (%rsp), %sp")
#define ADD_SP_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X03, 0X20 # addw (%r8), %sp")
#define ADD_SP_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X03, 0X21 # addw (%r9), %sp")
#define ADD_SP_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X03, 0X22 # addw (%r10), %sp")
#define ADD_SP_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X03, 0X23 # addw (%r11), %sp")
#define ADD_SP_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X03, 0X24, 0X24 # addw (%r12), %sp")
#define ADD_SP_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X03, 0X65, 0X00 # addw (%r13), %sp")
#define ADD_SP_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X03, 0X26 # addw (%r14), %sp")
#define ADD_SP_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X03, 0X27 # addw (%r15), %sp")
#define ADD_SP_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X03, 0X20 # addw (%eax), %sp")
#define ADD_SP_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X03, 0X23 # addw (%ebx), %sp")
#define ADD_SP_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X03, 0X21 # addw (%ecx), %sp")
#define ADD_SP_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X03, 0X22 # addw (%edx), %sp")
#define ADD_SP_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X03, 0X27 # addw (%edi), %sp")
#define ADD_SP_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X03, 0X26 # addw (%esi), %sp")
#define ADD_SP_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X03, 0X65, 0X00 # addw (%ebp), %sp")
#define ADD_SP_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X03, 0X24, 0X24 # addw (%esp), %sp")

#define ADD_R8W_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X03, 0X00 # addw (%rax), %r8w")
#define ADD_R8W_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X03, 0X03 # addw (%rbx), %r8w")
#define ADD_R8W_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X03, 0X01 # addw (%rcx), %r8w")
#define ADD_R8W_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X03, 0X02 # addw (%rdx), %r8w")
#define ADD_R8W_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X03, 0X07 # addw (%rdi), %r8w")
#define ADD_R8W_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X03, 0X06 # addw (%rsi), %r8w")
#define ADD_R8W_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X03, 0X45, 0X00 # addw (%rbp), %r8w")
#define ADD_R8W_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X03, 0X04, 0X24 # addw (%rsp), %r8w")
#define ADD_R8W_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X03, 0X00 # addw (%r8), %r8w")
#define ADD_R8W_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X03, 0X01 # addw (%r9), %r8w")
#define ADD_R8W_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X03, 0X02 # addw (%r10), %r8w")
#define ADD_R8W_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X03, 0X03 # addw (%r11), %r8w")
#define ADD_R8W_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X03, 0X04, 0X24 # addw (%r12), %r8w")
#define ADD_R8W_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X03, 0X45, 0X00 # addw (%r13), %r8w")
#define ADD_R8W_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X03, 0X06 # addw (%r14), %r8w")
#define ADD_R8W_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X03, 0X07 # addw (%r15), %r8w")
#define ADD_R8W_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0X00 # addw (%eax), %r8w")
#define ADD_R8W_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0X03 # addw (%ebx), %r8w")
#define ADD_R8W_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0X01 # addw (%ecx), %r8w")
#define ADD_R8W_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0X02 # addw (%edx), %r8w")
#define ADD_R8W_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0X07 # addw (%edi), %r8w")
#define ADD_R8W_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0X06 # addw (%esi), %r8w")
#define ADD_R8W_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0X45, 0X00 # addw (%ebp), %r8w")
#define ADD_R8W_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0X04, 0X24 # addw (%esp), %r8w")

#define ADD_R9W_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X03, 0X08 # addw (%rax), %r9w")
#define ADD_R9W_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X03, 0X0B # addw (%rbx), %r9w")
#define ADD_R9W_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X03, 0X09 # addw (%rcx), %r9w")
#define ADD_R9W_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X03, 0X0A # addw (%rdx), %r9w")
#define ADD_R9W_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X03, 0X0F # addw (%rdi), %r9w")
#define ADD_R9W_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X03, 0X0E # addw (%rsi), %r9w")
#define ADD_R9W_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X03, 0X4D, 0X00 # addw (%rbp), %r9w")
#define ADD_R9W_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X03, 0X0C, 0X24 # addw (%rsp), %r9w")
#define ADD_R9W_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X03, 0X08 # addw (%r8), %r9w")
#define ADD_R9W_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X03, 0X09 # addw (%r9), %r9w")
#define ADD_R9W_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X03, 0X0A # addw (%r10), %r9w")
#define ADD_R9W_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X03, 0X0B # addw (%r11), %r9w")
#define ADD_R9W_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X03, 0X0C, 0X24 # addw (%r12), %r9w")
#define ADD_R9W_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X03, 0X4D, 0X00 # addw (%r13), %r9w")
#define ADD_R9W_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X03, 0X0E # addw (%r14), %r9w")
#define ADD_R9W_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X03, 0X0F # addw (%r15), %r9w")
#define ADD_R9W_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0X08 # addw (%eax), %r9w")
#define ADD_R9W_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0X0B # addw (%ebx), %r9w")
#define ADD_R9W_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0X09 # addw (%ecx), %r9w")
#define ADD_R9W_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0X0A # addw (%edx), %r9w")
#define ADD_R9W_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0X0F # addw (%edi), %r9w")
#define ADD_R9W_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0X0E # addw (%esi), %r9w")
#define ADD_R9W_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0X4D, 0X00 # addw (%ebp), %r9w")
#define ADD_R9W_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0X0C, 0X24 # addw (%esp), %r9w")

#define ADD_R10W_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X03, 0X10 # addw (%rax), %r10w")
#define ADD_R10W_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X03, 0X13 # addw (%rbx), %r10w")
#define ADD_R10W_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X03, 0X11 # addw (%rcx), %r10w")
#define ADD_R10W_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X03, 0X12 # addw (%rdx), %r10w")
#define ADD_R10W_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X03, 0X17 # addw (%rdi), %r10w")
#define ADD_R10W_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X03, 0X16 # addw (%rsi), %r10w")
#define ADD_R10W_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X03, 0X55, 0X00 # addw (%rbp), %r10w")
#define ADD_R10W_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X03, 0X14, 0X24 # addw (%rsp), %r10w")
#define ADD_R10W_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X03, 0X10 # addw (%r8), %r10w")
#define ADD_R10W_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X03, 0X11 # addw (%r9), %r10w")
#define ADD_R10W_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X03, 0X12 # addw (%r10), %r10w")
#define ADD_R10W_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X03, 0X13 # addw (%r11), %r10w")
#define ADD_R10W_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X03, 0X14, 0X24 # addw (%r12), %r10w")
#define ADD_R10W_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X03, 0X55, 0X00 # addw (%r13), %r10w")
#define ADD_R10W_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X03, 0X16 # addw (%r14), %r10w")
#define ADD_R10W_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X03, 0X17 # addw (%r15), %r10w")
#define ADD_R10W_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0X10 # addw (%eax), %r10w")
#define ADD_R10W_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0X13 # addw (%ebx), %r10w")
#define ADD_R10W_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0X11 # addw (%ecx), %r10w")
#define ADD_R10W_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0X12 # addw (%edx), %r10w")
#define ADD_R10W_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0X17 # addw (%edi), %r10w")
#define ADD_R10W_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0X16 # addw (%esi), %r10w")
#define ADD_R10W_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0X55, 0X00 # addw (%ebp), %r10w")
#define ADD_R10W_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0X14, 0X24 # addw (%esp), %r10w")

#define ADD_R11W_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X03, 0X18 # addw (%rax), %r11w")
#define ADD_R11W_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X03, 0X1B # addw (%rbx), %r11w")
#define ADD_R11W_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X03, 0X19 # addw (%rcx), %r11w")
#define ADD_R11W_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X03, 0X1A # addw (%rdx), %r11w")
#define ADD_R11W_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X03, 0X1F # addw (%rdi), %r11w")
#define ADD_R11W_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X03, 0X1E # addw (%rsi), %r11w")
#define ADD_R11W_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X03, 0X5D, 0X00 # addw (%rbp), %r11w")
#define ADD_R11W_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X03, 0X1C, 0X24 # addw (%rsp), %r11w")
#define ADD_R11W_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X03, 0X18 # addw (%r8), %r11w")
#define ADD_R11W_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X03, 0X19 # addw (%r9), %r11w")
#define ADD_R11W_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X03, 0X1A # addw (%r10), %r11w")
#define ADD_R11W_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X03, 0X1B # addw (%r11), %r11w")
#define ADD_R11W_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X03, 0X1C, 0X24 # addw (%r12), %r11w")
#define ADD_R11W_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X03, 0X5D, 0X00 # addw (%r13), %r11w")
#define ADD_R11W_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X03, 0X1E # addw (%r14), %r11w")
#define ADD_R11W_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X03, 0X1F # addw (%r15), %r11w")
#define ADD_R11W_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0X18 # addw (%eax), %r11w")
#define ADD_R11W_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0X1B # addw (%ebx), %r11w")
#define ADD_R11W_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0X19 # addw (%ecx), %r11w")
#define ADD_R11W_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0X1A # addw (%edx), %r11w")
#define ADD_R11W_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0X1F # addw (%edi), %r11w")
#define ADD_R11W_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0X1E # addw (%esi), %r11w")
#define ADD_R11W_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0X5D, 0X00 # addw (%ebp), %r11w")
#define ADD_R11W_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0X1C, 0X24 # addw (%esp), %r11w")

#define ADD_R12W_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X03, 0X20 # addw (%rax), %r12w")
#define ADD_R12W_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X03, 0X23 # addw (%rbx), %r12w")
#define ADD_R12W_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X03, 0X21 # addw (%rcx), %r12w")
#define ADD_R12W_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X03, 0X22 # addw (%rdx), %r12w")
#define ADD_R12W_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X03, 0X27 # addw (%rdi), %r12w")
#define ADD_R12W_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X03, 0X26 # addw (%rsi), %r12w")
#define ADD_R12W_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X03, 0X65, 0X00 # addw (%rbp), %r12w")
#define ADD_R12W_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X03, 0X24, 0X24 # addw (%rsp), %r12w")
#define ADD_R12W_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X03, 0X20 # addw (%r8), %r12w")
#define ADD_R12W_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X03, 0X21 # addw (%r9), %r12w")
#define ADD_R12W_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X03, 0X22 # addw (%r10), %r12w")
#define ADD_R12W_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X03, 0X23 # addw (%r11), %r12w")
#define ADD_R12W_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X03, 0X24, 0X24 # addw (%r12), %r12w")
#define ADD_R12W_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X03, 0X65, 0X00 # addw (%r13), %r12w")
#define ADD_R12W_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X03, 0X26 # addw (%r14), %r12w")
#define ADD_R12W_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X03, 0X27 # addw (%r15), %r12w")
#define ADD_R12W_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0X20 # addw (%eax), %r12w")
#define ADD_R12W_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0X23 # addw (%ebx), %r12w")
#define ADD_R12W_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0X21 # addw (%ecx), %r12w")
#define ADD_R12W_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0X22 # addw (%edx), %r12w")
#define ADD_R12W_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0X27 # addw (%edi), %r12w")
#define ADD_R12W_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0X26 # addw (%esi), %r12w")
#define ADD_R12W_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0X65, 0X00 # addw (%ebp), %r12w")
#define ADD_R12W_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0X24, 0X24 # addw (%esp), %r12w")

#define ADD_R13W_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X03, 0X28 # addw (%rax), %r13w")
#define ADD_R13W_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X03, 0X2B # addw (%rbx), %r13w")
#define ADD_R13W_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X03, 0X29 # addw (%rcx), %r13w")
#define ADD_R13W_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X03, 0X2A # addw (%rdx), %r13w")
#define ADD_R13W_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X03, 0X2F # addw (%rdi), %r13w")
#define ADD_R13W_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X03, 0X2E # addw (%rsi), %r13w")
#define ADD_R13W_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X03, 0X6D, 0X00 # addw (%rbp), %r13w")
#define ADD_R13W_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X03, 0X2C, 0X24 # addw (%rsp), %r13w")
#define ADD_R13W_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X03, 0X28 # addw (%r8), %r13w")
#define ADD_R13W_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X03, 0X29 # addw (%r9), %r13w")
#define ADD_R13W_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X03, 0X2A # addw (%r10), %r13w")
#define ADD_R13W_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X03, 0X2B # addw (%r11), %r13w")
#define ADD_R13W_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X03, 0X2C, 0X24 # addw (%r12), %r13w")
#define ADD_R13W_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X03, 0X6D, 0X00 # addw (%r13), %r13w")
#define ADD_R13W_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X03, 0X2E # addw (%r14), %r13w")
#define ADD_R13W_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X03, 0X2F # addw (%r15), %r13w")
#define ADD_R13W_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0X28 # addw (%eax), %r13w")
#define ADD_R13W_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0X2B # addw (%ebx), %r13w")
#define ADD_R13W_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0X29 # addw (%ecx), %r13w")
#define ADD_R13W_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0X2A # addw (%edx), %r13w")
#define ADD_R13W_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0X2F # addw (%edi), %r13w")
#define ADD_R13W_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0X2E # addw (%esi), %r13w")
#define ADD_R13W_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0X6D, 0X00 # addw (%ebp), %r13w")
#define ADD_R13W_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0X2C, 0X24 # addw (%esp), %r13w")

#define ADD_R14W_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X03, 0X30 # addw (%rax), %r14w")
#define ADD_R14W_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X03, 0X33 # addw (%rbx), %r14w")
#define ADD_R14W_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X03, 0X31 # addw (%rcx), %r14w")
#define ADD_R14W_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X03, 0X32 # addw (%rdx), %r14w")
#define ADD_R14W_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X03, 0X37 # addw (%rdi), %r14w")
#define ADD_R14W_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X03, 0X36 # addw (%rsi), %r14w")
#define ADD_R14W_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X03, 0X75, 0X00 # addw (%rbp), %r14w")
#define ADD_R14W_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X03, 0X34, 0X24 # addw (%rsp), %r14w")
#define ADD_R14W_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X03, 0X30 # addw (%r8), %r14w")
#define ADD_R14W_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X03, 0X31 # addw (%r9), %r14w")
#define ADD_R14W_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X03, 0X32 # addw (%r10), %r14w")
#define ADD_R14W_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X03, 0X33 # addw (%r11), %r14w")
#define ADD_R14W_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X03, 0X34, 0X24 # addw (%r12), %r14w")
#define ADD_R14W_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X03, 0X75, 0X00 # addw (%r13), %r14w")
#define ADD_R14W_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X03, 0X36 # addw (%r14), %r14w")
#define ADD_R14W_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X03, 0X37 # addw (%r15), %r14w")
#define ADD_R14W_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0X30 # addw (%eax), %r14w")
#define ADD_R14W_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0X33 # addw (%ebx), %r14w")
#define ADD_R14W_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0X31 # addw (%ecx), %r14w")
#define ADD_R14W_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0X32 # addw (%edx), %r14w")
#define ADD_R14W_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0X37 # addw (%edi), %r14w")
#define ADD_R14W_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0X36 # addw (%esi), %r14w")
#define ADD_R14W_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0X75, 0X00 # addw (%ebp), %r14w")
#define ADD_R14W_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0X34, 0X24 # addw (%esp), %r14w")

#define ADD_R15W_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X03, 0X38 # addw (%rax), %r15w")
#define ADD_R15W_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X03, 0X3B # addw (%rbx), %r15w")
#define ADD_R15W_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X03, 0X39 # addw (%rcx), %r15w")
#define ADD_R15W_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X03, 0X3A # addw (%rdx), %r15w")
#define ADD_R15W_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X03, 0X3F # addw (%rdi), %r15w")
#define ADD_R15W_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X03, 0X3E # addw (%rsi), %r15w")
#define ADD_R15W_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X03, 0X7D, 0X00 # addw (%rbp), %r15w")
#define ADD_R15W_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X03, 0X3C, 0X24 # addw (%rsp), %r15w")
#define ADD_R15W_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X03, 0X38 # addw (%r8), %r15w")
#define ADD_R15W_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X03, 0X39 # addw (%r9), %r15w")
#define ADD_R15W_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X03, 0X3A # addw (%r10), %r15w")
#define ADD_R15W_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X03, 0X3B # addw (%r11), %r15w")
#define ADD_R15W_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X03, 0X3C, 0X24 # addw (%r12), %r15w")
#define ADD_R15W_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X03, 0X7D, 0X00 # addw (%r13), %r15w")
#define ADD_R15W_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X03, 0X3E # addw (%r14), %r15w")
#define ADD_R15W_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X03, 0X3F # addw (%r15), %r15w")
#define ADD_R15W_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0X38 # addw (%eax), %r15w")
#define ADD_R15W_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0X3B # addw (%ebx), %r15w")
#define ADD_R15W_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0X39 # addw (%ecx), %r15w")
#define ADD_R15W_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0X3A # addw (%edx), %r15w")
#define ADD_R15W_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0X3F # addw (%edi), %r15w")
#define ADD_R15W_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0X3E # addw (%esi), %r15w")
#define ADD_R15W_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0X7D, 0X00 # addw (%ebp), %r15w")
#define ADD_R15W_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0X3C, 0X24 # addw (%esp), %r15w")

#define ADD_AX_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X01, 0X00 # addw %ax, (%rax)")
#define ADD_AX_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X01, 0X03 # addw %ax, (%rbx)")
#define ADD_AX_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X01, 0X01 # addw %ax, (%rcx)")
#define ADD_AX_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X01, 0X02 # addw %ax, (%rdx)")
#define ADD_AX_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X01, 0X07 # addw %ax, (%rdi)")
#define ADD_AX_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X01, 0X06 # addw %ax, (%rsi)")
#define ADD_AX_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X01, 0X45, 0X00 # addw %ax, (%rbp)")
#define ADD_AX_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X01, 0X04, 0X24 # addw %ax, (%rsp)")
#define ADD_AX_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X01, 0X00 # addw %ax, (%r8)")
#define ADD_AX_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X01, 0X01 # addw %ax, (%r9)")
#define ADD_AX_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X01, 0X02 # addw %ax, (%r10)")
#define ADD_AX_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X01, 0X03 # addw %ax, (%r11)")
#define ADD_AX_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X01, 0X04, 0X24 # addw %ax, (%r12)")
#define ADD_AX_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X01, 0X45, 0X00 # addw %ax, (%r13)")
#define ADD_AX_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X01, 0X06 # addw %ax, (%r14)")
#define ADD_AX_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X01, 0X07 # addw %ax, (%r15)")
#define ADD_AX_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X01, 0X00 # addw %ax, (%eax)")
#define ADD_AX_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X01, 0X03 # addw %ax, (%ebx)")
#define ADD_AX_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X01, 0X01 # addw %ax, (%ecx)")
#define ADD_AX_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X01, 0X02 # addw %ax, (%edx)")
#define ADD_AX_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X01, 0X07 # addw %ax, (%edi)")
#define ADD_AX_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X01, 0X06 # addw %ax, (%esi)")
#define ADD_AX_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X01, 0X45, 0X00 # addw %ax, (%ebp)")
#define ADD_AX_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X01, 0X04, 0X24 # addw %ax, (%esp)")

#define ADD_BX_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X01, 0X18 # addw %bx, (%rax)")
#define ADD_BX_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X01, 0X1B # addw %bx, (%rbx)")
#define ADD_BX_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X01, 0X19 # addw %bx, (%rcx)")
#define ADD_BX_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X01, 0X1A # addw %bx, (%rdx)")
#define ADD_BX_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X01, 0X1F # addw %bx, (%rdi)")
#define ADD_BX_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X01, 0X1E # addw %bx, (%rsi)")
#define ADD_BX_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X01, 0X5D, 0X00 # addw %bx, (%rbp)")
#define ADD_BX_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X01, 0X1C, 0X24 # addw %bx, (%rsp)")
#define ADD_BX_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X01, 0X18 # addw %bx, (%r8)")
#define ADD_BX_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X01, 0X19 # addw %bx, (%r9)")
#define ADD_BX_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X01, 0X1A # addw %bx, (%r10)")
#define ADD_BX_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X01, 0X1B # addw %bx, (%r11)")
#define ADD_BX_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X01, 0X1C, 0X24 # addw %bx, (%r12)")
#define ADD_BX_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X01, 0X5D, 0X00 # addw %bx, (%r13)")
#define ADD_BX_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X01, 0X1E # addw %bx, (%r14)")
#define ADD_BX_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X01, 0X1F # addw %bx, (%r15)")
#define ADD_BX_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X01, 0X18 # addw %bx, (%eax)")
#define ADD_BX_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X01, 0X1B # addw %bx, (%ebx)")
#define ADD_BX_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X01, 0X19 # addw %bx, (%ecx)")
#define ADD_BX_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X01, 0X1A # addw %bx, (%edx)")
#define ADD_BX_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X01, 0X1F # addw %bx, (%edi)")
#define ADD_BX_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X01, 0X1E # addw %bx, (%esi)")
#define ADD_BX_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X01, 0X5D, 0X00 # addw %bx, (%ebp)")
#define ADD_BX_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X01, 0X1C, 0X24 # addw %bx, (%esp)")

#define ADD_CX_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X01, 0X08 # addw %cx, (%rax)")
#define ADD_CX_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X01, 0X0B # addw %cx, (%rbx)")
#define ADD_CX_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X01, 0X09 # addw %cx, (%rcx)")
#define ADD_CX_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X01, 0X0A # addw %cx, (%rdx)")
#define ADD_CX_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X01, 0X0F # addw %cx, (%rdi)")
#define ADD_CX_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X01, 0X0E # addw %cx, (%rsi)")
#define ADD_CX_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X01, 0X4D, 0X00 # addw %cx, (%rbp)")
#define ADD_CX_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X01, 0X0C, 0X24 # addw %cx, (%rsp)")
#define ADD_CX_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X01, 0X08 # addw %cx, (%r8)")
#define ADD_CX_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X01, 0X09 # addw %cx, (%r9)")
#define ADD_CX_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X01, 0X0A # addw %cx, (%r10)")
#define ADD_CX_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X01, 0X0B # addw %cx, (%r11)")
#define ADD_CX_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X01, 0X0C, 0X24 # addw %cx, (%r12)")
#define ADD_CX_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X01, 0X4D, 0X00 # addw %cx, (%r13)")
#define ADD_CX_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X01, 0X0E # addw %cx, (%r14)")
#define ADD_CX_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X01, 0X0F # addw %cx, (%r15)")
#define ADD_CX_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X01, 0X08 # addw %cx, (%eax)")
#define ADD_CX_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X01, 0X0B # addw %cx, (%ebx)")
#define ADD_CX_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X01, 0X09 # addw %cx, (%ecx)")
#define ADD_CX_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X01, 0X0A # addw %cx, (%edx)")
#define ADD_CX_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X01, 0X0F # addw %cx, (%edi)")
#define ADD_CX_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X01, 0X0E # addw %cx, (%esi)")
#define ADD_CX_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X01, 0X4D, 0X00 # addw %cx, (%ebp)")
#define ADD_CX_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X01, 0X0C, 0X24 # addw %cx, (%esp)")

#define ADD_DX_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X01, 0X10 # addw %dx, (%rax)")
#define ADD_DX_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X01, 0X13 # addw %dx, (%rbx)")
#define ADD_DX_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X01, 0X11 # addw %dx, (%rcx)")
#define ADD_DX_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X01, 0X12 # addw %dx, (%rdx)")
#define ADD_DX_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X01, 0X17 # addw %dx, (%rdi)")
#define ADD_DX_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X01, 0X16 # addw %dx, (%rsi)")
#define ADD_DX_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X01, 0X55, 0X00 # addw %dx, (%rbp)")
#define ADD_DX_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X01, 0X14, 0X24 # addw %dx, (%rsp)")
#define ADD_DX_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X01, 0X10 # addw %dx, (%r8)")
#define ADD_DX_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X01, 0X11 # addw %dx, (%r9)")
#define ADD_DX_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X01, 0X12 # addw %dx, (%r10)")
#define ADD_DX_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X01, 0X13 # addw %dx, (%r11)")
#define ADD_DX_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X01, 0X14, 0X24 # addw %dx, (%r12)")
#define ADD_DX_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X01, 0X55, 0X00 # addw %dx, (%r13)")
#define ADD_DX_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X01, 0X16 # addw %dx, (%r14)")
#define ADD_DX_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X01, 0X17 # addw %dx, (%r15)")
#define ADD_DX_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X01, 0X10 # addw %dx, (%eax)")
#define ADD_DX_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X01, 0X13 # addw %dx, (%ebx)")
#define ADD_DX_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X01, 0X11 # addw %dx, (%ecx)")
#define ADD_DX_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X01, 0X12 # addw %dx, (%edx)")
#define ADD_DX_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X01, 0X17 # addw %dx, (%edi)")
#define ADD_DX_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X01, 0X16 # addw %dx, (%esi)")
#define ADD_DX_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X01, 0X55, 0X00 # addw %dx, (%ebp)")
#define ADD_DX_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X01, 0X14, 0X24 # addw %dx, (%esp)")

#define ADD_DI_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X01, 0X38 # addw %di, (%rax)")
#define ADD_DI_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X01, 0X3B # addw %di, (%rbx)")
#define ADD_DI_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X01, 0X39 # addw %di, (%rcx)")
#define ADD_DI_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X01, 0X3A # addw %di, (%rdx)")
#define ADD_DI_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X01, 0X3F # addw %di, (%rdi)")
#define ADD_DI_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X01, 0X3E # addw %di, (%rsi)")
#define ADD_DI_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X01, 0X7D, 0X00 # addw %di, (%rbp)")
#define ADD_DI_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X01, 0X3C, 0X24 # addw %di, (%rsp)")
#define ADD_DI_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X01, 0X38 # addw %di, (%r8)")
#define ADD_DI_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X01, 0X39 # addw %di, (%r9)")
#define ADD_DI_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X01, 0X3A # addw %di, (%r10)")
#define ADD_DI_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X01, 0X3B # addw %di, (%r11)")
#define ADD_DI_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X01, 0X3C, 0X24 # addw %di, (%r12)")
#define ADD_DI_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X01, 0X7D, 0X00 # addw %di, (%r13)")
#define ADD_DI_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X01, 0X3E # addw %di, (%r14)")
#define ADD_DI_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X01, 0X3F # addw %di, (%r15)")
#define ADD_DI_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X01, 0X38 # addw %di, (%eax)")
#define ADD_DI_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X01, 0X3B # addw %di, (%ebx)")
#define ADD_DI_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X01, 0X39 # addw %di, (%ecx)")
#define ADD_DI_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X01, 0X3A # addw %di, (%edx)")
#define ADD_DI_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X01, 0X3F # addw %di, (%edi)")
#define ADD_DI_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X01, 0X3E # addw %di, (%esi)")
#define ADD_DI_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X01, 0X7D, 0X00 # addw %di, (%ebp)")
#define ADD_DI_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X01, 0X3C, 0X24 # addw %di, (%esp)")

#define ADD_SI_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X01, 0X30 # addw %si, (%rax)")
#define ADD_SI_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X01, 0X33 # addw %si, (%rbx)")
#define ADD_SI_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X01, 0X31 # addw %si, (%rcx)")
#define ADD_SI_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X01, 0X32 # addw %si, (%rdx)")
#define ADD_SI_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X01, 0X37 # addw %si, (%rdi)")
#define ADD_SI_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X01, 0X36 # addw %si, (%rsi)")
#define ADD_SI_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X01, 0X75, 0X00 # addw %si, (%rbp)")
#define ADD_SI_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X01, 0X34, 0X24 # addw %si, (%rsp)")
#define ADD_SI_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X01, 0X30 # addw %si, (%r8)")
#define ADD_SI_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X01, 0X31 # addw %si, (%r9)")
#define ADD_SI_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X01, 0X32 # addw %si, (%r10)")
#define ADD_SI_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X01, 0X33 # addw %si, (%r11)")
#define ADD_SI_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X01, 0X34, 0X24 # addw %si, (%r12)")
#define ADD_SI_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X01, 0X75, 0X00 # addw %si, (%r13)")
#define ADD_SI_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X01, 0X36 # addw %si, (%r14)")
#define ADD_SI_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X01, 0X37 # addw %si, (%r15)")
#define ADD_SI_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X01, 0X30 # addw %si, (%eax)")
#define ADD_SI_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X01, 0X33 # addw %si, (%ebx)")
#define ADD_SI_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X01, 0X31 # addw %si, (%ecx)")
#define ADD_SI_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X01, 0X32 # addw %si, (%edx)")
#define ADD_SI_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X01, 0X37 # addw %si, (%edi)")
#define ADD_SI_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X01, 0X36 # addw %si, (%esi)")
#define ADD_SI_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X01, 0X75, 0X00 # addw %si, (%ebp)")
#define ADD_SI_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X01, 0X34, 0X24 # addw %si, (%esp)")

#define ADD_BP_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X01, 0X28 # addw %bp, (%rax)")
#define ADD_BP_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X01, 0X2B # addw %bp, (%rbx)")
#define ADD_BP_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X01, 0X29 # addw %bp, (%rcx)")
#define ADD_BP_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X01, 0X2A # addw %bp, (%rdx)")
#define ADD_BP_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X01, 0X2F # addw %bp, (%rdi)")
#define ADD_BP_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X01, 0X2E # addw %bp, (%rsi)")
#define ADD_BP_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X01, 0X6D, 0X00 # addw %bp, (%rbp)")
#define ADD_BP_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X01, 0X2C, 0X24 # addw %bp, (%rsp)")
#define ADD_BP_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X01, 0X28 # addw %bp, (%r8)")
#define ADD_BP_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X01, 0X29 # addw %bp, (%r9)")
#define ADD_BP_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X01, 0X2A # addw %bp, (%r10)")
#define ADD_BP_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X01, 0X2B # addw %bp, (%r11)")
#define ADD_BP_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X01, 0X2C, 0X24 # addw %bp, (%r12)")
#define ADD_BP_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X01, 0X6D, 0X00 # addw %bp, (%r13)")
#define ADD_BP_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X01, 0X2E # addw %bp, (%r14)")
#define ADD_BP_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X01, 0X2F # addw %bp, (%r15)")
#define ADD_BP_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X01, 0X28 # addw %bp, (%eax)")
#define ADD_BP_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X01, 0X2B # addw %bp, (%ebx)")
#define ADD_BP_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X01, 0X29 # addw %bp, (%ecx)")
#define ADD_BP_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X01, 0X2A # addw %bp, (%edx)")
#define ADD_BP_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X01, 0X2F # addw %bp, (%edi)")
#define ADD_BP_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X01, 0X2E # addw %bp, (%esi)")
#define ADD_BP_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X01, 0X6D, 0X00 # addw %bp, (%ebp)")
#define ADD_BP_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X01, 0X2C, 0X24 # addw %bp, (%esp)")

#define ADD_SP_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X01, 0X20 # addw %sp, (%rax)")
#define ADD_SP_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X01, 0X23 # addw %sp, (%rbx)")
#define ADD_SP_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X01, 0X21 # addw %sp, (%rcx)")
#define ADD_SP_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X01, 0X22 # addw %sp, (%rdx)")
#define ADD_SP_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X01, 0X27 # addw %sp, (%rdi)")
#define ADD_SP_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X01, 0X26 # addw %sp, (%rsi)")
#define ADD_SP_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X01, 0X65, 0X00 # addw %sp, (%rbp)")
#define ADD_SP_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X01, 0X24, 0X24 # addw %sp, (%rsp)")
#define ADD_SP_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X01, 0X20 # addw %sp, (%r8)")
#define ADD_SP_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X01, 0X21 # addw %sp, (%r9)")
#define ADD_SP_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X01, 0X22 # addw %sp, (%r10)")
#define ADD_SP_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X01, 0X23 # addw %sp, (%r11)")
#define ADD_SP_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X01, 0X24, 0X24 # addw %sp, (%r12)")
#define ADD_SP_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X01, 0X65, 0X00 # addw %sp, (%r13)")
#define ADD_SP_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X01, 0X26 # addw %sp, (%r14)")
#define ADD_SP_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X01, 0X27 # addw %sp, (%r15)")
#define ADD_SP_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X01, 0X20 # addw %sp, (%eax)")
#define ADD_SP_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X01, 0X23 # addw %sp, (%ebx)")
#define ADD_SP_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X01, 0X21 # addw %sp, (%ecx)")
#define ADD_SP_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X01, 0X22 # addw %sp, (%edx)")
#define ADD_SP_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X01, 0X27 # addw %sp, (%edi)")
#define ADD_SP_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X01, 0X26 # addw %sp, (%esi)")
#define ADD_SP_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X01, 0X65, 0X00 # addw %sp, (%ebp)")
#define ADD_SP_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X01, 0X24, 0X24 # addw %sp, (%esp)")

#define ADD_R8W_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X01, 0X00 # addw %r8w, (%rax)")
#define ADD_R8W_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X01, 0X03 # addw %r8w, (%rbx)")
#define ADD_R8W_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X01, 0X01 # addw %r8w, (%rcx)")
#define ADD_R8W_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X01, 0X02 # addw %r8w, (%rdx)")
#define ADD_R8W_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X01, 0X07 # addw %r8w, (%rdi)")
#define ADD_R8W_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X01, 0X06 # addw %r8w, (%rsi)")
#define ADD_R8W_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X01, 0X45, 0X00 # addw %r8w, (%rbp)")
#define ADD_R8W_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X01, 0X04, 0X24 # addw %r8w, (%rsp)")
#define ADD_R8W_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X01, 0X00 # addw %r8w, (%r8)")
#define ADD_R8W_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X01, 0X01 # addw %r8w, (%r9)")
#define ADD_R8W_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X01, 0X02 # addw %r8w, (%r10)")
#define ADD_R8W_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X01, 0X03 # addw %r8w, (%r11)")
#define ADD_R8W_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X01, 0X04, 0X24 # addw %r8w, (%r12)")
#define ADD_R8W_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X01, 0X45, 0X00 # addw %r8w, (%r13)")
#define ADD_R8W_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X01, 0X06 # addw %r8w, (%r14)")
#define ADD_R8W_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X01, 0X07 # addw %r8w, (%r15)")
#define ADD_R8W_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0X00 # addw %r8w, (%eax)")
#define ADD_R8W_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0X03 # addw %r8w, (%ebx)")
#define ADD_R8W_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0X01 # addw %r8w, (%ecx)")
#define ADD_R8W_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0X02 # addw %r8w, (%edx)")
#define ADD_R8W_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0X07 # addw %r8w, (%edi)")
#define ADD_R8W_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0X06 # addw %r8w, (%esi)")
#define ADD_R8W_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0X45, 0X00 # addw %r8w, (%ebp)")
#define ADD_R8W_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0X04, 0X24 # addw %r8w, (%esp)")

#define ADD_R9W_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X01, 0X08 # addw %r9w, (%rax)")
#define ADD_R9W_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X01, 0X0B # addw %r9w, (%rbx)")
#define ADD_R9W_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X01, 0X09 # addw %r9w, (%rcx)")
#define ADD_R9W_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X01, 0X0A # addw %r9w, (%rdx)")
#define ADD_R9W_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X01, 0X0F # addw %r9w, (%rdi)")
#define ADD_R9W_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X01, 0X0E # addw %r9w, (%rsi)")
#define ADD_R9W_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X01, 0X4D, 0X00 # addw %r9w, (%rbp)")
#define ADD_R9W_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X01, 0X0C, 0X24 # addw %r9w, (%rsp)")
#define ADD_R9W_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X01, 0X08 # addw %r9w, (%r8)")
#define ADD_R9W_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X01, 0X09 # addw %r9w, (%r9)")
#define ADD_R9W_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X01, 0X0A # addw %r9w, (%r10)")
#define ADD_R9W_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X01, 0X0B # addw %r9w, (%r11)")
#define ADD_R9W_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X01, 0X0C, 0X24 # addw %r9w, (%r12)")
#define ADD_R9W_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X01, 0X4D, 0X00 # addw %r9w, (%r13)")
#define ADD_R9W_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X01, 0X0E # addw %r9w, (%r14)")
#define ADD_R9W_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X01, 0X0F # addw %r9w, (%r15)")
#define ADD_R9W_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0X08 # addw %r9w, (%eax)")
#define ADD_R9W_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0X0B # addw %r9w, (%ebx)")
#define ADD_R9W_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0X09 # addw %r9w, (%ecx)")
#define ADD_R9W_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0X0A # addw %r9w, (%edx)")
#define ADD_R9W_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0X0F # addw %r9w, (%edi)")
#define ADD_R9W_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0X0E # addw %r9w, (%esi)")
#define ADD_R9W_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0X4D, 0X00 # addw %r9w, (%ebp)")
#define ADD_R9W_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0X0C, 0X24 # addw %r9w, (%esp)")

#define ADD_R10W_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X01, 0X10 # addw %r10w, (%rax)")
#define ADD_R10W_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X01, 0X13 # addw %r10w, (%rbx)")
#define ADD_R10W_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X01, 0X11 # addw %r10w, (%rcx)")
#define ADD_R10W_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X01, 0X12 # addw %r10w, (%rdx)")
#define ADD_R10W_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X01, 0X17 # addw %r10w, (%rdi)")
#define ADD_R10W_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X01, 0X16 # addw %r10w, (%rsi)")
#define ADD_R10W_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X01, 0X55, 0X00 # addw %r10w, (%rbp)")
#define ADD_R10W_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X01, 0X14, 0X24 # addw %r10w, (%rsp)")
#define ADD_R10W_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X01, 0X10 # addw %r10w, (%r8)")
#define ADD_R10W_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X01, 0X11 # addw %r10w, (%r9)")
#define ADD_R10W_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X01, 0X12 # addw %r10w, (%r10)")
#define ADD_R10W_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X01, 0X13 # addw %r10w, (%r11)")
#define ADD_R10W_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X01, 0X14, 0X24 # addw %r10w, (%r12)")
#define ADD_R10W_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X01, 0X55, 0X00 # addw %r10w, (%r13)")
#define ADD_R10W_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X01, 0X16 # addw %r10w, (%r14)")
#define ADD_R10W_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X01, 0X17 # addw %r10w, (%r15)")
#define ADD_R10W_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0X10 # addw %r10w, (%eax)")
#define ADD_R10W_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0X13 # addw %r10w, (%ebx)")
#define ADD_R10W_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0X11 # addw %r10w, (%ecx)")
#define ADD_R10W_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0X12 # addw %r10w, (%edx)")
#define ADD_R10W_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0X17 # addw %r10w, (%edi)")
#define ADD_R10W_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0X16 # addw %r10w, (%esi)")
#define ADD_R10W_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0X55, 0X00 # addw %r10w, (%ebp)")
#define ADD_R10W_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0X14, 0X24 # addw %r10w, (%esp)")

#define ADD_R11W_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X01, 0X18 # addw %r11w, (%rax)")
#define ADD_R11W_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X01, 0X1B # addw %r11w, (%rbx)")
#define ADD_R11W_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X01, 0X19 # addw %r11w, (%rcx)")
#define ADD_R11W_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X01, 0X1A # addw %r11w, (%rdx)")
#define ADD_R11W_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X01, 0X1F # addw %r11w, (%rdi)")
#define ADD_R11W_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X01, 0X1E # addw %r11w, (%rsi)")
#define ADD_R11W_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X01, 0X5D, 0X00 # addw %r11w, (%rbp)")
#define ADD_R11W_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X01, 0X1C, 0X24 # addw %r11w, (%rsp)")
#define ADD_R11W_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X01, 0X18 # addw %r11w, (%r8)")
#define ADD_R11W_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X01, 0X19 # addw %r11w, (%r9)")
#define ADD_R11W_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X01, 0X1A # addw %r11w, (%r10)")
#define ADD_R11W_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X01, 0X1B # addw %r11w, (%r11)")
#define ADD_R11W_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X01, 0X1C, 0X24 # addw %r11w, (%r12)")
#define ADD_R11W_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X01, 0X5D, 0X00 # addw %r11w, (%r13)")
#define ADD_R11W_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X01, 0X1E # addw %r11w, (%r14)")
#define ADD_R11W_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X01, 0X1F # addw %r11w, (%r15)")
#define ADD_R11W_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0X18 # addw %r11w, (%eax)")
#define ADD_R11W_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0X1B # addw %r11w, (%ebx)")
#define ADD_R11W_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0X19 # addw %r11w, (%ecx)")
#define ADD_R11W_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0X1A # addw %r11w, (%edx)")
#define ADD_R11W_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0X1F # addw %r11w, (%edi)")
#define ADD_R11W_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0X1E # addw %r11w, (%esi)")
#define ADD_R11W_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0X5D, 0X00 # addw %r11w, (%ebp)")
#define ADD_R11W_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0X1C, 0X24 # addw %r11w, (%esp)")

#define ADD_R12W_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X01, 0X20 # addw %r12w, (%rax)")
#define ADD_R12W_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X01, 0X23 # addw %r12w, (%rbx)")
#define ADD_R12W_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X01, 0X21 # addw %r12w, (%rcx)")
#define ADD_R12W_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X01, 0X22 # addw %r12w, (%rdx)")
#define ADD_R12W_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X01, 0X27 # addw %r12w, (%rdi)")
#define ADD_R12W_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X01, 0X26 # addw %r12w, (%rsi)")
#define ADD_R12W_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X01, 0X65, 0X00 # addw %r12w, (%rbp)")
#define ADD_R12W_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X01, 0X24, 0X24 # addw %r12w, (%rsp)")
#define ADD_R12W_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X01, 0X20 # addw %r12w, (%r8)")
#define ADD_R12W_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X01, 0X21 # addw %r12w, (%r9)")
#define ADD_R12W_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X01, 0X22 # addw %r12w, (%r10)")
#define ADD_R12W_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X01, 0X23 # addw %r12w, (%r11)")
#define ADD_R12W_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X01, 0X24, 0X24 # addw %r12w, (%r12)")
#define ADD_R12W_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X01, 0X65, 0X00 # addw %r12w, (%r13)")
#define ADD_R12W_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X01, 0X26 # addw %r12w, (%r14)")
#define ADD_R12W_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X01, 0X27 # addw %r12w, (%r15)")
#define ADD_R12W_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0X20 # addw %r12w, (%eax)")
#define ADD_R12W_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0X23 # addw %r12w, (%ebx)")
#define ADD_R12W_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0X21 # addw %r12w, (%ecx)")
#define ADD_R12W_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0X22 # addw %r12w, (%edx)")
#define ADD_R12W_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0X27 # addw %r12w, (%edi)")
#define ADD_R12W_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0X26 # addw %r12w, (%esi)")
#define ADD_R12W_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0X65, 0X00 # addw %r12w, (%ebp)")
#define ADD_R12W_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0X24, 0X24 # addw %r12w, (%esp)")

#define ADD_R13W_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X01, 0X28 # addw %r13w, (%rax)")
#define ADD_R13W_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X01, 0X2B # addw %r13w, (%rbx)")
#define ADD_R13W_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X01, 0X29 # addw %r13w, (%rcx)")
#define ADD_R13W_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X01, 0X2A # addw %r13w, (%rdx)")
#define ADD_R13W_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X01, 0X2F # addw %r13w, (%rdi)")
#define ADD_R13W_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X01, 0X2E # addw %r13w, (%rsi)")
#define ADD_R13W_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X01, 0X6D, 0X00 # addw %r13w, (%rbp)")
#define ADD_R13W_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X01, 0X2C, 0X24 # addw %r13w, (%rsp)")
#define ADD_R13W_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X01, 0X28 # addw %r13w, (%r8)")
#define ADD_R13W_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X01, 0X29 # addw %r13w, (%r9)")
#define ADD_R13W_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X01, 0X2A # addw %r13w, (%r10)")
#define ADD_R13W_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X01, 0X2B # addw %r13w, (%r11)")
#define ADD_R13W_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X01, 0X2C, 0X24 # addw %r13w, (%r12)")
#define ADD_R13W_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X01, 0X6D, 0X00 # addw %r13w, (%r13)")
#define ADD_R13W_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X01, 0X2E # addw %r13w, (%r14)")
#define ADD_R13W_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X01, 0X2F # addw %r13w, (%r15)")
#define ADD_R13W_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0X28 # addw %r13w, (%eax)")
#define ADD_R13W_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0X2B # addw %r13w, (%ebx)")
#define ADD_R13W_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0X29 # addw %r13w, (%ecx)")
#define ADD_R13W_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0X2A # addw %r13w, (%edx)")
#define ADD_R13W_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0X2F # addw %r13w, (%edi)")
#define ADD_R13W_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0X2E # addw %r13w, (%esi)")
#define ADD_R13W_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0X6D, 0X00 # addw %r13w, (%ebp)")
#define ADD_R13W_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0X2C, 0X24 # addw %r13w, (%esp)")

#define ADD_R14W_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X01, 0X30 # addw %r14w, (%rax)")
#define ADD_R14W_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X01, 0X33 # addw %r14w, (%rbx)")
#define ADD_R14W_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X01, 0X31 # addw %r14w, (%rcx)")
#define ADD_R14W_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X01, 0X32 # addw %r14w, (%rdx)")
#define ADD_R14W_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X01, 0X37 # addw %r14w, (%rdi)")
#define ADD_R14W_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X01, 0X36 # addw %r14w, (%rsi)")
#define ADD_R14W_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X01, 0X75, 0X00 # addw %r14w, (%rbp)")
#define ADD_R14W_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X01, 0X34, 0X24 # addw %r14w, (%rsp)")
#define ADD_R14W_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X01, 0X30 # addw %r14w, (%r8)")
#define ADD_R14W_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X01, 0X31 # addw %r14w, (%r9)")
#define ADD_R14W_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X01, 0X32 # addw %r14w, (%r10)")
#define ADD_R14W_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X01, 0X33 # addw %r14w, (%r11)")
#define ADD_R14W_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X01, 0X34, 0X24 # addw %r14w, (%r12)")
#define ADD_R14W_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X01, 0X75, 0X00 # addw %r14w, (%r13)")
#define ADD_R14W_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X01, 0X36 # addw %r14w, (%r14)")
#define ADD_R14W_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X01, 0X37 # addw %r14w, (%r15)")
#define ADD_R14W_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0X30 # addw %r14w, (%eax)")
#define ADD_R14W_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0X33 # addw %r14w, (%ebx)")
#define ADD_R14W_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0X31 # addw %r14w, (%ecx)")
#define ADD_R14W_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0X32 # addw %r14w, (%edx)")
#define ADD_R14W_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0X37 # addw %r14w, (%edi)")
#define ADD_R14W_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0X36 # addw %r14w, (%esi)")
#define ADD_R14W_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0X75, 0X00 # addw %r14w, (%ebp)")
#define ADD_R14W_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0X34, 0X24 # addw %r14w, (%esp)")

#define ADD_R15W_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X01, 0X38 # addw %r15w, (%rax)")
#define ADD_R15W_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X01, 0X3B # addw %r15w, (%rbx)")
#define ADD_R15W_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X01, 0X39 # addw %r15w, (%rcx)")
#define ADD_R15W_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X01, 0X3A # addw %r15w, (%rdx)")
#define ADD_R15W_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X01, 0X3F # addw %r15w, (%rdi)")
#define ADD_R15W_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X01, 0X3E # addw %r15w, (%rsi)")
#define ADD_R15W_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X01, 0X7D, 0X00 # addw %r15w, (%rbp)")
#define ADD_R15W_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X01, 0X3C, 0X24 # addw %r15w, (%rsp)")
#define ADD_R15W_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X01, 0X38 # addw %r15w, (%r8)")
#define ADD_R15W_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X01, 0X39 # addw %r15w, (%r9)")
#define ADD_R15W_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X01, 0X3A # addw %r15w, (%r10)")
#define ADD_R15W_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X01, 0X3B # addw %r15w, (%r11)")
#define ADD_R15W_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X01, 0X3C, 0X24 # addw %r15w, (%r12)")
#define ADD_R15W_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X01, 0X7D, 0X00 # addw %r15w, (%r13)")
#define ADD_R15W_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X01, 0X3E # addw %r15w, (%r14)")
#define ADD_R15W_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X01, 0X3F # addw %r15w, (%r15)")
#define ADD_R15W_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0X38 # addw %r15w, (%eax)")
#define ADD_R15W_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0X3B # addw %r15w, (%ebx)")
#define ADD_R15W_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0X39 # addw %r15w, (%ecx)")
#define ADD_R15W_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0X3A # addw %r15w, (%edx)")
#define ADD_R15W_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0X3F # addw %r15w, (%edi)")
#define ADD_R15W_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0X3E # addw %r15w, (%esi)")
#define ADD_R15W_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0X7D, 0X00 # addw %r15w, (%ebp)")
#define ADD_R15W_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0X3C, 0X24 # addw %r15w, (%esp)")

#define ADD_AX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0X80 # addw " _(VALUE) "(%rax), %ax")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0X83 # addw " _(VALUE) "(%rbx), %ax")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0X81 # addw " _(VALUE) "(%rcx), %ax")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0X82 # addw " _(VALUE) "(%rdx), %ax")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0X87 # addw " _(VALUE) "(%rdi), %ax")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0X86 # addw " _(VALUE) "(%rsi), %ax")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0X85 # addw " _(VALUE) "(%rbp), %ax")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0X84, 0X24 # addw " _(VALUE) "(%rsp), %ax")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X03, 0X80 # addw " _(VALUE) "(%r8), %ax")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X03, 0X81 # addw " _(VALUE) "(%r9), %ax")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X03, 0X82 # addw " _(VALUE) "(%r10), %ax")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X03, 0X83 # addw " _(VALUE) "(%r11), %ax")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X03, 0X84, 0X24 # addw " _(VALUE) "(%r12), %ax")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X03, 0X85 # addw " _(VALUE) "(%r13), %ax")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X03, 0X86 # addw " _(VALUE) "(%r14), %ax")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X03, 0X87 # addw " _(VALUE) "(%r15), %ax")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X03, 0X80 # addw " _(VALUE) "(%eax), %ax")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X03, 0X83 # addw " _(VALUE) "(%ebx), %ax")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X03, 0X81 # addw " _(VALUE) "(%ecx), %ax")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X03, 0X82 # addw " _(VALUE) "(%edx), %ax")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X03, 0X87 # addw " _(VALUE) "(%edi), %ax")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X03, 0X86 # addw " _(VALUE) "(%esi), %ax")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X03, 0X85 # addw " _(VALUE) "(%ebp), %ax")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X03, 0X84, 0X24 # addw " _(VALUE) "(%esp), %ax")\
	CMT_ASM(".long " _(VALUE))

#define ADD_BX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0X98 # addw " _(VALUE) "(%rax), %bx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0X9B # addw " _(VALUE) "(%rbx), %bx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0X99 # addw " _(VALUE) "(%rcx), %bx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0X9A # addw " _(VALUE) "(%rdx), %bx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0X9F # addw " _(VALUE) "(%rdi), %bx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0X9E # addw " _(VALUE) "(%rsi), %bx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0X9D # addw " _(VALUE) "(%rbp), %bx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0X9C, 0X24 # addw " _(VALUE) "(%rsp), %bx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X03, 0X98 # addw " _(VALUE) "(%r8), %bx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X03, 0X99 # addw " _(VALUE) "(%r9), %bx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X03, 0X9A # addw " _(VALUE) "(%r10), %bx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X03, 0X9B # addw " _(VALUE) "(%r11), %bx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X03, 0X9C, 0X24 # addw " _(VALUE) "(%r12), %bx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X03, 0X9D # addw " _(VALUE) "(%r13), %bx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X03, 0X9E # addw " _(VALUE) "(%r14), %bx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X03, 0X9F # addw " _(VALUE) "(%r15), %bx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X03, 0X98 # addw " _(VALUE) "(%eax), %bx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X03, 0X9B # addw " _(VALUE) "(%ebx), %bx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X03, 0X99 # addw " _(VALUE) "(%ecx), %bx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X03, 0X9A # addw " _(VALUE) "(%edx), %bx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X03, 0X9F # addw " _(VALUE) "(%edi), %bx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X03, 0X9E # addw " _(VALUE) "(%esi), %bx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X03, 0X9D # addw " _(VALUE) "(%ebp), %bx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X03, 0X9C, 0X24 # addw " _(VALUE) "(%esp), %bx")\
	CMT_ASM(".long " _(VALUE))

#define ADD_CX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0X88 # addw " _(VALUE) "(%rax), %cx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0X8B # addw " _(VALUE) "(%rbx), %cx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0X89 # addw " _(VALUE) "(%rcx), %cx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0X8A # addw " _(VALUE) "(%rdx), %cx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0X8F # addw " _(VALUE) "(%rdi), %cx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0X8E # addw " _(VALUE) "(%rsi), %cx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0X8D # addw " _(VALUE) "(%rbp), %cx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0X8C, 0X24 # addw " _(VALUE) "(%rsp), %cx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X03, 0X88 # addw " _(VALUE) "(%r8), %cx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X03, 0X89 # addw " _(VALUE) "(%r9), %cx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X03, 0X8A # addw " _(VALUE) "(%r10), %cx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X03, 0X8B # addw " _(VALUE) "(%r11), %cx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X03, 0X8C, 0X24 # addw " _(VALUE) "(%r12), %cx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X03, 0X8D # addw " _(VALUE) "(%r13), %cx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X03, 0X8E # addw " _(VALUE) "(%r14), %cx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X03, 0X8F # addw " _(VALUE) "(%r15), %cx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X03, 0X88 # addw " _(VALUE) "(%eax), %cx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X03, 0X8B # addw " _(VALUE) "(%ebx), %cx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X03, 0X89 # addw " _(VALUE) "(%ecx), %cx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X03, 0X8A # addw " _(VALUE) "(%edx), %cx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X03, 0X8F # addw " _(VALUE) "(%edi), %cx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X03, 0X8E # addw " _(VALUE) "(%esi), %cx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X03, 0X8D # addw " _(VALUE) "(%ebp), %cx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X03, 0X8C, 0X24 # addw " _(VALUE) "(%esp), %cx")\
	CMT_ASM(".long " _(VALUE))

#define ADD_DX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0X90 # addw " _(VALUE) "(%rax), %dx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0X93 # addw " _(VALUE) "(%rbx), %dx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0X91 # addw " _(VALUE) "(%rcx), %dx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0X92 # addw " _(VALUE) "(%rdx), %dx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0X97 # addw " _(VALUE) "(%rdi), %dx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0X96 # addw " _(VALUE) "(%rsi), %dx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0X95 # addw " _(VALUE) "(%rbp), %dx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0X94, 0X24 # addw " _(VALUE) "(%rsp), %dx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X03, 0X90 # addw " _(VALUE) "(%r8), %dx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X03, 0X91 # addw " _(VALUE) "(%r9), %dx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X03, 0X92 # addw " _(VALUE) "(%r10), %dx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X03, 0X93 # addw " _(VALUE) "(%r11), %dx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X03, 0X94, 0X24 # addw " _(VALUE) "(%r12), %dx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X03, 0X95 # addw " _(VALUE) "(%r13), %dx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X03, 0X96 # addw " _(VALUE) "(%r14), %dx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X03, 0X97 # addw " _(VALUE) "(%r15), %dx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X03, 0X90 # addw " _(VALUE) "(%eax), %dx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X03, 0X93 # addw " _(VALUE) "(%ebx), %dx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X03, 0X91 # addw " _(VALUE) "(%ecx), %dx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X03, 0X92 # addw " _(VALUE) "(%edx), %dx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X03, 0X97 # addw " _(VALUE) "(%edi), %dx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X03, 0X96 # addw " _(VALUE) "(%esi), %dx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X03, 0X95 # addw " _(VALUE) "(%ebp), %dx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X03, 0X94, 0X24 # addw " _(VALUE) "(%esp), %dx")\
	CMT_ASM(".long " _(VALUE))

#define ADD_DI_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0XB8 # addw " _(VALUE) "(%rax), %di")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DI_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0XBB # addw " _(VALUE) "(%rbx), %di")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DI_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0XB9 # addw " _(VALUE) "(%rcx), %di")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DI_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0XBA # addw " _(VALUE) "(%rdx), %di")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DI_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0XBF # addw " _(VALUE) "(%rdi), %di")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DI_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0XBE # addw " _(VALUE) "(%rsi), %di")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DI_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0XBD # addw " _(VALUE) "(%rbp), %di")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DI_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0XBC, 0X24 # addw " _(VALUE) "(%rsp), %di")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DI_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X03, 0XB8 # addw " _(VALUE) "(%r8), %di")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DI_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X03, 0XB9 # addw " _(VALUE) "(%r9), %di")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DI_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X03, 0XBA # addw " _(VALUE) "(%r10), %di")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DI_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X03, 0XBB # addw " _(VALUE) "(%r11), %di")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DI_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X03, 0XBC, 0X24 # addw " _(VALUE) "(%r12), %di")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DI_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X03, 0XBD # addw " _(VALUE) "(%r13), %di")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DI_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X03, 0XBE # addw " _(VALUE) "(%r14), %di")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DI_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X03, 0XBF # addw " _(VALUE) "(%r15), %di")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X03, 0XB8 # addw " _(VALUE) "(%eax), %di")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X03, 0XBB # addw " _(VALUE) "(%ebx), %di")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X03, 0XB9 # addw " _(VALUE) "(%ecx), %di")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X03, 0XBA # addw " _(VALUE) "(%edx), %di")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X03, 0XBF # addw " _(VALUE) "(%edi), %di")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X03, 0XBE # addw " _(VALUE) "(%esi), %di")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X03, 0XBD # addw " _(VALUE) "(%ebp), %di")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X03, 0XBC, 0X24 # addw " _(VALUE) "(%esp), %di")\
	CMT_ASM(".long " _(VALUE))

#define ADD_SI_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0XB0 # addw " _(VALUE) "(%rax), %si")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SI_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0XB3 # addw " _(VALUE) "(%rbx), %si")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SI_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0XB1 # addw " _(VALUE) "(%rcx), %si")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SI_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0XB2 # addw " _(VALUE) "(%rdx), %si")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SI_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0XB7 # addw " _(VALUE) "(%rdi), %si")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SI_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0XB6 # addw " _(VALUE) "(%rsi), %si")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SI_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0XB5 # addw " _(VALUE) "(%rbp), %si")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SI_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0XB4, 0X24 # addw " _(VALUE) "(%rsp), %si")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SI_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X03, 0XB0 # addw " _(VALUE) "(%r8), %si")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SI_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X03, 0XB1 # addw " _(VALUE) "(%r9), %si")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SI_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X03, 0XB2 # addw " _(VALUE) "(%r10), %si")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SI_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X03, 0XB3 # addw " _(VALUE) "(%r11), %si")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SI_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X03, 0XB4, 0X24 # addw " _(VALUE) "(%r12), %si")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SI_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X03, 0XB5 # addw " _(VALUE) "(%r13), %si")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SI_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X03, 0XB6 # addw " _(VALUE) "(%r14), %si")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SI_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X03, 0XB7 # addw " _(VALUE) "(%r15), %si")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X03, 0XB0 # addw " _(VALUE) "(%eax), %si")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X03, 0XB3 # addw " _(VALUE) "(%ebx), %si")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X03, 0XB1 # addw " _(VALUE) "(%ecx), %si")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X03, 0XB2 # addw " _(VALUE) "(%edx), %si")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X03, 0XB7 # addw " _(VALUE) "(%edi), %si")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X03, 0XB6 # addw " _(VALUE) "(%esi), %si")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X03, 0XB5 # addw " _(VALUE) "(%ebp), %si")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X03, 0XB4, 0X24 # addw " _(VALUE) "(%esp), %si")\
	CMT_ASM(".long " _(VALUE))

#define ADD_BP_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0XA8 # addw " _(VALUE) "(%rax), %bp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BP_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0XAB # addw " _(VALUE) "(%rbx), %bp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BP_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0XA9 # addw " _(VALUE) "(%rcx), %bp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BP_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0XAA # addw " _(VALUE) "(%rdx), %bp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BP_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0XAF # addw " _(VALUE) "(%rdi), %bp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BP_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0XAE # addw " _(VALUE) "(%rsi), %bp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BP_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0XAD # addw " _(VALUE) "(%rbp), %bp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BP_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0XAC, 0X24 # addw " _(VALUE) "(%rsp), %bp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BP_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X03, 0XA8 # addw " _(VALUE) "(%r8), %bp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BP_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X03, 0XA9 # addw " _(VALUE) "(%r9), %bp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BP_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X03, 0XAA # addw " _(VALUE) "(%r10), %bp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BP_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X03, 0XAB # addw " _(VALUE) "(%r11), %bp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BP_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X03, 0XAC, 0X24 # addw " _(VALUE) "(%r12), %bp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BP_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X03, 0XAD # addw " _(VALUE) "(%r13), %bp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BP_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X03, 0XAE # addw " _(VALUE) "(%r14), %bp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BP_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X03, 0XAF # addw " _(VALUE) "(%r15), %bp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X03, 0XA8 # addw " _(VALUE) "(%eax), %bp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X03, 0XAB # addw " _(VALUE) "(%ebx), %bp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X03, 0XA9 # addw " _(VALUE) "(%ecx), %bp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X03, 0XAA # addw " _(VALUE) "(%edx), %bp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X03, 0XAF # addw " _(VALUE) "(%edi), %bp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X03, 0XAE # addw " _(VALUE) "(%esi), %bp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X03, 0XAD # addw " _(VALUE) "(%ebp), %bp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X03, 0XAC, 0X24 # addw " _(VALUE) "(%esp), %bp")\
	CMT_ASM(".long " _(VALUE))

#define ADD_SP_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0XA0 # addw " _(VALUE) "(%rax), %sp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SP_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0XA3 # addw " _(VALUE) "(%rbx), %sp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SP_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0XA1 # addw " _(VALUE) "(%rcx), %sp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SP_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0XA2 # addw " _(VALUE) "(%rdx), %sp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SP_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0XA7 # addw " _(VALUE) "(%rdi), %sp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SP_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0XA6 # addw " _(VALUE) "(%rsi), %sp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SP_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0XA5 # addw " _(VALUE) "(%rbp), %sp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SP_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X03, 0XA4, 0X24 # addw " _(VALUE) "(%rsp), %sp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SP_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X03, 0XA0 # addw " _(VALUE) "(%r8), %sp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SP_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X03, 0XA1 # addw " _(VALUE) "(%r9), %sp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SP_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X03, 0XA2 # addw " _(VALUE) "(%r10), %sp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SP_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X03, 0XA3 # addw " _(VALUE) "(%r11), %sp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SP_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X03, 0XA4, 0X24 # addw " _(VALUE) "(%r12), %sp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SP_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X03, 0XA5 # addw " _(VALUE) "(%r13), %sp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SP_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X03, 0XA6 # addw " _(VALUE) "(%r14), %sp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SP_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X03, 0XA7 # addw " _(VALUE) "(%r15), %sp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X03, 0XA0 # addw " _(VALUE) "(%eax), %sp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X03, 0XA3 # addw " _(VALUE) "(%ebx), %sp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X03, 0XA1 # addw " _(VALUE) "(%ecx), %sp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X03, 0XA2 # addw " _(VALUE) "(%edx), %sp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X03, 0XA7 # addw " _(VALUE) "(%edi), %sp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X03, 0XA6 # addw " _(VALUE) "(%esi), %sp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X03, 0XA5 # addw " _(VALUE) "(%ebp), %sp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X03, 0XA4, 0X24 # addw " _(VALUE) "(%esp), %sp")\
	CMT_ASM(".long " _(VALUE))

#define ADD_R8W_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X03, 0X80 # addw " _(VALUE) "(%rax), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8W_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X03, 0X83 # addw " _(VALUE) "(%rbx), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8W_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X03, 0X81 # addw " _(VALUE) "(%rcx), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8W_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X03, 0X82 # addw " _(VALUE) "(%rdx), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8W_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X03, 0X87 # addw " _(VALUE) "(%rdi), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8W_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X03, 0X86 # addw " _(VALUE) "(%rsi), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8W_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X03, 0X85 # addw " _(VALUE) "(%rbp), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8W_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X03, 0X84, 0X24 # addw " _(VALUE) "(%rsp), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8W_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X03, 0X80 # addw " _(VALUE) "(%r8), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8W_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X03, 0X81 # addw " _(VALUE) "(%r9), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8W_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X03, 0X82 # addw " _(VALUE) "(%r10), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8W_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X03, 0X83 # addw " _(VALUE) "(%r11), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8W_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X03, 0X84, 0X24 # addw " _(VALUE) "(%r12), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8W_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X03, 0X85 # addw " _(VALUE) "(%r13), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8W_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X03, 0X86 # addw " _(VALUE) "(%r14), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8W_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X03, 0X87 # addw " _(VALUE) "(%r15), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8W_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0X80 # addw " _(VALUE) "(%eax), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8W_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0X83 # addw " _(VALUE) "(%ebx), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8W_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0X81 # addw " _(VALUE) "(%ecx), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8W_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0X82 # addw " _(VALUE) "(%edx), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8W_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0X87 # addw " _(VALUE) "(%edi), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8W_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0X86 # addw " _(VALUE) "(%esi), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8W_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0X85 # addw " _(VALUE) "(%ebp), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8W_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0X84, 0X24 # addw " _(VALUE) "(%esp), %r8w")\
	CMT_ASM(".long " _(VALUE))

#define ADD_R9W_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X03, 0X88 # addw " _(VALUE) "(%rax), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9W_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X03, 0X8B # addw " _(VALUE) "(%rbx), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9W_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X03, 0X89 # addw " _(VALUE) "(%rcx), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9W_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X03, 0X8A # addw " _(VALUE) "(%rdx), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9W_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X03, 0X8F # addw " _(VALUE) "(%rdi), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9W_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X03, 0X8E # addw " _(VALUE) "(%rsi), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9W_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X03, 0X8D # addw " _(VALUE) "(%rbp), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9W_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X03, 0X8C, 0X24 # addw " _(VALUE) "(%rsp), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9W_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X03, 0X88 # addw " _(VALUE) "(%r8), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9W_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X03, 0X89 # addw " _(VALUE) "(%r9), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9W_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X03, 0X8A # addw " _(VALUE) "(%r10), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9W_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X03, 0X8B # addw " _(VALUE) "(%r11), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9W_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X03, 0X8C, 0X24 # addw " _(VALUE) "(%r12), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9W_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X03, 0X8D # addw " _(VALUE) "(%r13), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9W_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X03, 0X8E # addw " _(VALUE) "(%r14), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9W_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X03, 0X8F # addw " _(VALUE) "(%r15), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9W_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0X88 # addw " _(VALUE) "(%eax), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9W_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0X8B # addw " _(VALUE) "(%ebx), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9W_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0X89 # addw " _(VALUE) "(%ecx), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9W_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0X8A # addw " _(VALUE) "(%edx), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9W_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0X8F # addw " _(VALUE) "(%edi), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9W_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0X8E # addw " _(VALUE) "(%esi), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9W_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0X8D # addw " _(VALUE) "(%ebp), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9W_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0X8C, 0X24 # addw " _(VALUE) "(%esp), %r9w")\
	CMT_ASM(".long " _(VALUE))

#define ADD_R10W_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X03, 0X90 # addw " _(VALUE) "(%rax), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10W_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X03, 0X93 # addw " _(VALUE) "(%rbx), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10W_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X03, 0X91 # addw " _(VALUE) "(%rcx), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10W_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X03, 0X92 # addw " _(VALUE) "(%rdx), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10W_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X03, 0X97 # addw " _(VALUE) "(%rdi), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10W_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X03, 0X96 # addw " _(VALUE) "(%rsi), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10W_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X03, 0X95 # addw " _(VALUE) "(%rbp), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10W_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X03, 0X94, 0X24 # addw " _(VALUE) "(%rsp), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10W_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X03, 0X90 # addw " _(VALUE) "(%r8), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10W_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X03, 0X91 # addw " _(VALUE) "(%r9), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10W_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X03, 0X92 # addw " _(VALUE) "(%r10), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10W_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X03, 0X93 # addw " _(VALUE) "(%r11), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10W_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X03, 0X94, 0X24 # addw " _(VALUE) "(%r12), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10W_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X03, 0X95 # addw " _(VALUE) "(%r13), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10W_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X03, 0X96 # addw " _(VALUE) "(%r14), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10W_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X03, 0X97 # addw " _(VALUE) "(%r15), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10W_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0X90 # addw " _(VALUE) "(%eax), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10W_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0X93 # addw " _(VALUE) "(%ebx), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10W_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0X91 # addw " _(VALUE) "(%ecx), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10W_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0X92 # addw " _(VALUE) "(%edx), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10W_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0X97 # addw " _(VALUE) "(%edi), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10W_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0X96 # addw " _(VALUE) "(%esi), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10W_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0X95 # addw " _(VALUE) "(%ebp), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10W_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0X94, 0X24 # addw " _(VALUE) "(%esp), %r10w")\
	CMT_ASM(".long " _(VALUE))

#define ADD_R11W_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X03, 0X98 # addw " _(VALUE) "(%rax), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11W_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X03, 0X9B # addw " _(VALUE) "(%rbx), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11W_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X03, 0X99 # addw " _(VALUE) "(%rcx), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11W_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X03, 0X9A # addw " _(VALUE) "(%rdx), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11W_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X03, 0X9F # addw " _(VALUE) "(%rdi), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11W_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X03, 0X9E # addw " _(VALUE) "(%rsi), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11W_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X03, 0X9D # addw " _(VALUE) "(%rbp), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11W_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X03, 0X9C, 0X24 # addw " _(VALUE) "(%rsp), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11W_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X03, 0X98 # addw " _(VALUE) "(%r8), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11W_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X03, 0X99 # addw " _(VALUE) "(%r9), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11W_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X03, 0X9A # addw " _(VALUE) "(%r10), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11W_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X03, 0X9B # addw " _(VALUE) "(%r11), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11W_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X03, 0X9C, 0X24 # addw " _(VALUE) "(%r12), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11W_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X03, 0X9D # addw " _(VALUE) "(%r13), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11W_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X03, 0X9E # addw " _(VALUE) "(%r14), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11W_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X03, 0X9F # addw " _(VALUE) "(%r15), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11W_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0X98 # addw " _(VALUE) "(%eax), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11W_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0X9B # addw " _(VALUE) "(%ebx), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11W_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0X99 # addw " _(VALUE) "(%ecx), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11W_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0X9A # addw " _(VALUE) "(%edx), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11W_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0X9F # addw " _(VALUE) "(%edi), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11W_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0X9E # addw " _(VALUE) "(%esi), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11W_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0X9D # addw " _(VALUE) "(%ebp), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11W_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0X9C, 0X24 # addw " _(VALUE) "(%esp), %r11w")\
	CMT_ASM(".long " _(VALUE))

#define ADD_R12W_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X03, 0XA0 # addw " _(VALUE) "(%rax), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12W_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X03, 0XA3 # addw " _(VALUE) "(%rbx), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12W_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X03, 0XA1 # addw " _(VALUE) "(%rcx), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12W_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X03, 0XA2 # addw " _(VALUE) "(%rdx), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12W_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X03, 0XA7 # addw " _(VALUE) "(%rdi), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12W_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X03, 0XA6 # addw " _(VALUE) "(%rsi), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12W_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X03, 0XA5 # addw " _(VALUE) "(%rbp), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12W_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X03, 0XA4, 0X24 # addw " _(VALUE) "(%rsp), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12W_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X03, 0XA0 # addw " _(VALUE) "(%r8), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12W_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X03, 0XA1 # addw " _(VALUE) "(%r9), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12W_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X03, 0XA2 # addw " _(VALUE) "(%r10), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12W_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X03, 0XA3 # addw " _(VALUE) "(%r11), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12W_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X03, 0XA4, 0X24 # addw " _(VALUE) "(%r12), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12W_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X03, 0XA5 # addw " _(VALUE) "(%r13), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12W_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X03, 0XA6 # addw " _(VALUE) "(%r14), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12W_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X03, 0XA7 # addw " _(VALUE) "(%r15), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12W_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0XA0 # addw " _(VALUE) "(%eax), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12W_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0XA3 # addw " _(VALUE) "(%ebx), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12W_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0XA1 # addw " _(VALUE) "(%ecx), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12W_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0XA2 # addw " _(VALUE) "(%edx), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12W_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0XA7 # addw " _(VALUE) "(%edi), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12W_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0XA6 # addw " _(VALUE) "(%esi), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12W_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0XA5 # addw " _(VALUE) "(%ebp), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12W_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0XA4, 0X24 # addw " _(VALUE) "(%esp), %r12w")\
	CMT_ASM(".long " _(VALUE))

#define ADD_R13W_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X03, 0XA8 # addw " _(VALUE) "(%rax), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13W_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X03, 0XAB # addw " _(VALUE) "(%rbx), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13W_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X03, 0XA9 # addw " _(VALUE) "(%rcx), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13W_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X03, 0XAA # addw " _(VALUE) "(%rdx), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13W_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X03, 0XAF # addw " _(VALUE) "(%rdi), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13W_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X03, 0XAE # addw " _(VALUE) "(%rsi), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13W_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X03, 0XAD # addw " _(VALUE) "(%rbp), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13W_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X03, 0XAC, 0X24 # addw " _(VALUE) "(%rsp), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13W_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X03, 0XA8 # addw " _(VALUE) "(%r8), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13W_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X03, 0XA9 # addw " _(VALUE) "(%r9), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13W_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X03, 0XAA # addw " _(VALUE) "(%r10), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13W_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X03, 0XAB # addw " _(VALUE) "(%r11), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13W_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X03, 0XAC, 0X24 # addw " _(VALUE) "(%r12), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13W_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X03, 0XAD # addw " _(VALUE) "(%r13), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13W_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X03, 0XAE # addw " _(VALUE) "(%r14), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13W_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X03, 0XAF # addw " _(VALUE) "(%r15), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13W_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0XA8 # addw " _(VALUE) "(%eax), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13W_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0XAB # addw " _(VALUE) "(%ebx), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13W_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0XA9 # addw " _(VALUE) "(%ecx), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13W_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0XAA # addw " _(VALUE) "(%edx), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13W_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0XAF # addw " _(VALUE) "(%edi), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13W_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0XAE # addw " _(VALUE) "(%esi), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13W_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0XAD # addw " _(VALUE) "(%ebp), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13W_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0XAC, 0X24 # addw " _(VALUE) "(%esp), %r13w")\
	CMT_ASM(".long " _(VALUE))

#define ADD_R14W_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X03, 0XB0 # addw " _(VALUE) "(%rax), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14W_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X03, 0XB3 # addw " _(VALUE) "(%rbx), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14W_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X03, 0XB1 # addw " _(VALUE) "(%rcx), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14W_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X03, 0XB2 # addw " _(VALUE) "(%rdx), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14W_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X03, 0XB7 # addw " _(VALUE) "(%rdi), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14W_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X03, 0XB6 # addw " _(VALUE) "(%rsi), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14W_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X03, 0XB5 # addw " _(VALUE) "(%rbp), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14W_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X03, 0XB4, 0X24 # addw " _(VALUE) "(%rsp), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14W_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X03, 0XB0 # addw " _(VALUE) "(%r8), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14W_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X03, 0XB1 # addw " _(VALUE) "(%r9), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14W_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X03, 0XB2 # addw " _(VALUE) "(%r10), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14W_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X03, 0XB3 # addw " _(VALUE) "(%r11), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14W_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X03, 0XB4, 0X24 # addw " _(VALUE) "(%r12), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14W_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X03, 0XB5 # addw " _(VALUE) "(%r13), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14W_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X03, 0XB6 # addw " _(VALUE) "(%r14), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14W_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X03, 0XB7 # addw " _(VALUE) "(%r15), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14W_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0XB0 # addw " _(VALUE) "(%eax), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14W_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0XB3 # addw " _(VALUE) "(%ebx), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14W_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0XB1 # addw " _(VALUE) "(%ecx), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14W_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0XB2 # addw " _(VALUE) "(%edx), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14W_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0XB7 # addw " _(VALUE) "(%edi), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14W_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0XB6 # addw " _(VALUE) "(%esi), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14W_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0XB5 # addw " _(VALUE) "(%ebp), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14W_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0XB4, 0X24 # addw " _(VALUE) "(%esp), %r14w")\
	CMT_ASM(".long " _(VALUE))

#define ADD_R15W_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X03, 0XB8 # addw " _(VALUE) "(%rax), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15W_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X03, 0XBB # addw " _(VALUE) "(%rbx), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15W_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X03, 0XB9 # addw " _(VALUE) "(%rcx), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15W_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X03, 0XBA # addw " _(VALUE) "(%rdx), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15W_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X03, 0XBF # addw " _(VALUE) "(%rdi), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15W_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X03, 0XBE # addw " _(VALUE) "(%rsi), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15W_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X03, 0XBD # addw " _(VALUE) "(%rbp), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15W_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X03, 0XBC, 0X24 # addw " _(VALUE) "(%rsp), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15W_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X03, 0XB8 # addw " _(VALUE) "(%r8), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15W_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X03, 0XB9 # addw " _(VALUE) "(%r9), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15W_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X03, 0XBA # addw " _(VALUE) "(%r10), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15W_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X03, 0XBB # addw " _(VALUE) "(%r11), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15W_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X03, 0XBC, 0X24 # addw " _(VALUE) "(%r12), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15W_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X03, 0XBD # addw " _(VALUE) "(%r13), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15W_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X03, 0XBE # addw " _(VALUE) "(%r14), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15W_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X03, 0XBF # addw " _(VALUE) "(%r15), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15W_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0XB8 # addw " _(VALUE) "(%eax), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15W_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0XBB # addw " _(VALUE) "(%ebx), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15W_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0XB9 # addw " _(VALUE) "(%ecx), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15W_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0XBA # addw " _(VALUE) "(%edx), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15W_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0XBF # addw " _(VALUE) "(%edi), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15W_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0XBE # addw " _(VALUE) "(%esi), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15W_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0XBD # addw " _(VALUE) "(%ebp), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15W_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X03, 0XBC, 0X24 # addw " _(VALUE) "(%esp), %r15w")\
	CMT_ASM(".long " _(VALUE))

#define ADD_AX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0X80 # addw %ax, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0X83 # addw %ax, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0X81 # addw %ax, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0X82 # addw %ax, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0X87 # addw %ax, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0X86 # addw %ax, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0X85 # addw %ax, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0X84, 0X24 # addw %ax, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X01, 0X80 # addw %ax, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X01, 0X81 # addw %ax, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X01, 0X82 # addw %ax, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X01, 0X83 # addw %ax, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X01, 0X84, 0X24 # addw %ax, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X01, 0X85 # addw %ax, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X01, 0X86 # addw %ax, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X01, 0X87 # addw %ax, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X01, 0X80 # addw %ax, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X01, 0X83 # addw %ax, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X01, 0X81 # addw %ax, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X01, 0X82 # addw %ax, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X01, 0X87 # addw %ax, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X01, 0X86 # addw %ax, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X01, 0X85 # addw %ax, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_AX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X01, 0X84, 0X24 # addw %ax, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADD_BX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0X98 # addw %bx, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0X9B # addw %bx, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0X99 # addw %bx, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0X9A # addw %bx, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0X9F # addw %bx, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0X9E # addw %bx, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0X9D # addw %bx, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0X9C, 0X24 # addw %bx, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X01, 0X98 # addw %bx, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X01, 0X99 # addw %bx, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X01, 0X9A # addw %bx, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X01, 0X9B # addw %bx, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X01, 0X9C, 0X24 # addw %bx, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X01, 0X9D # addw %bx, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X01, 0X9E # addw %bx, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X01, 0X9F # addw %bx, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X01, 0X98 # addw %bx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X01, 0X9B # addw %bx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X01, 0X99 # addw %bx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X01, 0X9A # addw %bx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X01, 0X9F # addw %bx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X01, 0X9E # addw %bx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X01, 0X9D # addw %bx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X01, 0X9C, 0X24 # addw %bx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADD_CX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0X88 # addw %cx, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0X8B # addw %cx, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0X89 # addw %cx, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0X8A # addw %cx, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0X8F # addw %cx, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0X8E # addw %cx, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0X8D # addw %cx, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0X8C, 0X24 # addw %cx, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X01, 0X88 # addw %cx, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X01, 0X89 # addw %cx, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X01, 0X8A # addw %cx, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X01, 0X8B # addw %cx, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X01, 0X8C, 0X24 # addw %cx, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X01, 0X8D # addw %cx, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X01, 0X8E # addw %cx, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X01, 0X8F # addw %cx, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X01, 0X88 # addw %cx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X01, 0X8B # addw %cx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X01, 0X89 # addw %cx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X01, 0X8A # addw %cx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X01, 0X8F # addw %cx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X01, 0X8E # addw %cx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X01, 0X8D # addw %cx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_CX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X01, 0X8C, 0X24 # addw %cx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADD_DX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0X90 # addw %dx, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0X93 # addw %dx, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0X91 # addw %dx, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0X92 # addw %dx, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0X97 # addw %dx, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0X96 # addw %dx, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0X95 # addw %dx, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0X94, 0X24 # addw %dx, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X01, 0X90 # addw %dx, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X01, 0X91 # addw %dx, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X01, 0X92 # addw %dx, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X01, 0X93 # addw %dx, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X01, 0X94, 0X24 # addw %dx, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X01, 0X95 # addw %dx, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X01, 0X96 # addw %dx, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X01, 0X97 # addw %dx, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X01, 0X90 # addw %dx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X01, 0X93 # addw %dx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X01, 0X91 # addw %dx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X01, 0X92 # addw %dx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X01, 0X97 # addw %dx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X01, 0X96 # addw %dx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X01, 0X95 # addw %dx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X01, 0X94, 0X24 # addw %dx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADD_DI_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0XB8 # addw %di, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DI_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0XBB # addw %di, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DI_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0XB9 # addw %di, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DI_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0XBA # addw %di, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DI_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0XBF # addw %di, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DI_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0XBE # addw %di, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DI_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0XBD # addw %di, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DI_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0XBC, 0X24 # addw %di, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DI_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X01, 0XB8 # addw %di, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DI_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X01, 0XB9 # addw %di, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DI_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X01, 0XBA # addw %di, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DI_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X01, 0XBB # addw %di, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DI_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X01, 0XBC, 0X24 # addw %di, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DI_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X01, 0XBD # addw %di, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DI_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X01, 0XBE # addw %di, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DI_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X01, 0XBF # addw %di, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X01, 0XB8 # addw %di, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X01, 0XBB # addw %di, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X01, 0XB9 # addw %di, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X01, 0XBA # addw %di, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X01, 0XBF # addw %di, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X01, 0XBE # addw %di, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X01, 0XBD # addw %di, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_DI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X01, 0XBC, 0X24 # addw %di, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADD_SI_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0XB0 # addw %si, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SI_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0XB3 # addw %si, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SI_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0XB1 # addw %si, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SI_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0XB2 # addw %si, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SI_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0XB7 # addw %si, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SI_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0XB6 # addw %si, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SI_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0XB5 # addw %si, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SI_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0XB4, 0X24 # addw %si, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SI_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X01, 0XB0 # addw %si, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SI_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X01, 0XB1 # addw %si, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SI_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X01, 0XB2 # addw %si, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SI_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X01, 0XB3 # addw %si, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SI_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X01, 0XB4, 0X24 # addw %si, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SI_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X01, 0XB5 # addw %si, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SI_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X01, 0XB6 # addw %si, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SI_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X01, 0XB7 # addw %si, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X01, 0XB0 # addw %si, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X01, 0XB3 # addw %si, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X01, 0XB1 # addw %si, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X01, 0XB2 # addw %si, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X01, 0XB7 # addw %si, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X01, 0XB6 # addw %si, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X01, 0XB5 # addw %si, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X01, 0XB4, 0X24 # addw %si, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADD_BP_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0XA8 # addw %bp, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BP_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0XAB # addw %bp, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BP_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0XA9 # addw %bp, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BP_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0XAA # addw %bp, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BP_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0XAF # addw %bp, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BP_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0XAE # addw %bp, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BP_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0XAD # addw %bp, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BP_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0XAC, 0X24 # addw %bp, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BP_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X01, 0XA8 # addw %bp, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BP_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X01, 0XA9 # addw %bp, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BP_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X01, 0XAA # addw %bp, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BP_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X01, 0XAB # addw %bp, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BP_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X01, 0XAC, 0X24 # addw %bp, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BP_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X01, 0XAD # addw %bp, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BP_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X01, 0XAE # addw %bp, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BP_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X01, 0XAF # addw %bp, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X01, 0XA8 # addw %bp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X01, 0XAB # addw %bp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X01, 0XA9 # addw %bp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X01, 0XAA # addw %bp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X01, 0XAF # addw %bp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X01, 0XAE # addw %bp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X01, 0XAD # addw %bp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_BP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X01, 0XAC, 0X24 # addw %bp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADD_SP_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0XA0 # addw %sp, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SP_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0XA3 # addw %sp, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SP_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0XA1 # addw %sp, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SP_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0XA2 # addw %sp, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SP_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0XA7 # addw %sp, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SP_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0XA6 # addw %sp, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SP_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0XA5 # addw %sp, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SP_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X01, 0XA4, 0X24 # addw %sp, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SP_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X01, 0XA0 # addw %sp, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SP_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X01, 0XA1 # addw %sp, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SP_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X01, 0XA2 # addw %sp, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SP_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X01, 0XA3 # addw %sp, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SP_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X01, 0XA4, 0X24 # addw %sp, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SP_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X01, 0XA5 # addw %sp, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SP_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X01, 0XA6 # addw %sp, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SP_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X01, 0XA7 # addw %sp, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X01, 0XA0 # addw %sp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X01, 0XA3 # addw %sp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X01, 0XA1 # addw %sp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X01, 0XA2 # addw %sp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X01, 0XA7 # addw %sp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X01, 0XA6 # addw %sp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X01, 0XA5 # addw %sp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_SP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X01, 0XA4, 0X24 # addw %sp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADD_R8W_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X01, 0X80 # addw %r8w, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8W_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X01, 0X83 # addw %r8w, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8W_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X01, 0X81 # addw %r8w, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8W_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X01, 0X82 # addw %r8w, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8W_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X01, 0X87 # addw %r8w, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8W_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X01, 0X86 # addw %r8w, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8W_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X01, 0X85 # addw %r8w, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8W_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X01, 0X84, 0X24 # addw %r8w, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8W_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X01, 0X80 # addw %r8w, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8W_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X01, 0X81 # addw %r8w, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8W_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X01, 0X82 # addw %r8w, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8W_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X01, 0X83 # addw %r8w, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8W_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X01, 0X84, 0X24 # addw %r8w, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8W_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X01, 0X85 # addw %r8w, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8W_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X01, 0X86 # addw %r8w, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8W_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X01, 0X87 # addw %r8w, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8W_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0X80 # addw %r8w, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8W_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0X83 # addw %r8w, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8W_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0X81 # addw %r8w, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8W_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0X82 # addw %r8w, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8W_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0X87 # addw %r8w, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8W_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0X86 # addw %r8w, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8W_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0X85 # addw %r8w, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8W_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0X84, 0X24 # addw %r8w, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADD_R9W_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X01, 0X88 # addw %r9w, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9W_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X01, 0X8B # addw %r9w, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9W_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X01, 0X89 # addw %r9w, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9W_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X01, 0X8A # addw %r9w, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9W_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X01, 0X8F # addw %r9w, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9W_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X01, 0X8E # addw %r9w, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9W_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X01, 0X8D # addw %r9w, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9W_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X01, 0X8C, 0X24 # addw %r9w, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9W_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X01, 0X88 # addw %r9w, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9W_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X01, 0X89 # addw %r9w, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9W_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X01, 0X8A # addw %r9w, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9W_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X01, 0X8B # addw %r9w, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9W_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X01, 0X8C, 0X24 # addw %r9w, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9W_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X01, 0X8D # addw %r9w, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9W_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X01, 0X8E # addw %r9w, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9W_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X01, 0X8F # addw %r9w, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9W_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0X88 # addw %r9w, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9W_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0X8B # addw %r9w, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9W_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0X89 # addw %r9w, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9W_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0X8A # addw %r9w, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9W_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0X8F # addw %r9w, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9W_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0X8E # addw %r9w, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9W_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0X8D # addw %r9w, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9W_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0X8C, 0X24 # addw %r9w, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADD_R10W_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X01, 0X90 # addw %r10w, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10W_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X01, 0X93 # addw %r10w, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10W_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X01, 0X91 # addw %r10w, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10W_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X01, 0X92 # addw %r10w, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10W_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X01, 0X97 # addw %r10w, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10W_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X01, 0X96 # addw %r10w, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10W_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X01, 0X95 # addw %r10w, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10W_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X01, 0X94, 0X24 # addw %r10w, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10W_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X01, 0X90 # addw %r10w, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10W_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X01, 0X91 # addw %r10w, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10W_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X01, 0X92 # addw %r10w, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10W_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X01, 0X93 # addw %r10w, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10W_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X01, 0X94, 0X24 # addw %r10w, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10W_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X01, 0X95 # addw %r10w, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10W_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X01, 0X96 # addw %r10w, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10W_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X01, 0X97 # addw %r10w, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10W_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0X90 # addw %r10w, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10W_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0X93 # addw %r10w, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10W_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0X91 # addw %r10w, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10W_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0X92 # addw %r10w, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10W_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0X97 # addw %r10w, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10W_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0X96 # addw %r10w, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10W_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0X95 # addw %r10w, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10W_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0X94, 0X24 # addw %r10w, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADD_R11W_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X01, 0X98 # addw %r11w, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11W_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X01, 0X9B # addw %r11w, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11W_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X01, 0X99 # addw %r11w, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11W_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X01, 0X9A # addw %r11w, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11W_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X01, 0X9F # addw %r11w, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11W_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X01, 0X9E # addw %r11w, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11W_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X01, 0X9D # addw %r11w, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11W_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X01, 0X9C, 0X24 # addw %r11w, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11W_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X01, 0X98 # addw %r11w, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11W_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X01, 0X99 # addw %r11w, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11W_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X01, 0X9A # addw %r11w, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11W_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X01, 0X9B # addw %r11w, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11W_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X01, 0X9C, 0X24 # addw %r11w, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11W_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X01, 0X9D # addw %r11w, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11W_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X01, 0X9E # addw %r11w, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11W_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X01, 0X9F # addw %r11w, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11W_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0X98 # addw %r11w, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11W_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0X9B # addw %r11w, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11W_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0X99 # addw %r11w, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11W_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0X9A # addw %r11w, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11W_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0X9F # addw %r11w, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11W_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0X9E # addw %r11w, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11W_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0X9D # addw %r11w, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11W_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0X9C, 0X24 # addw %r11w, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADD_R12W_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X01, 0XA0 # addw %r12w, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12W_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X01, 0XA3 # addw %r12w, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12W_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X01, 0XA1 # addw %r12w, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12W_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X01, 0XA2 # addw %r12w, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12W_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X01, 0XA7 # addw %r12w, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12W_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X01, 0XA6 # addw %r12w, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12W_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X01, 0XA5 # addw %r12w, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12W_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X01, 0XA4, 0X24 # addw %r12w, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12W_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X01, 0XA0 # addw %r12w, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12W_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X01, 0XA1 # addw %r12w, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12W_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X01, 0XA2 # addw %r12w, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12W_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X01, 0XA3 # addw %r12w, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12W_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X01, 0XA4, 0X24 # addw %r12w, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12W_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X01, 0XA5 # addw %r12w, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12W_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X01, 0XA6 # addw %r12w, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12W_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X01, 0XA7 # addw %r12w, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12W_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0XA0 # addw %r12w, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12W_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0XA3 # addw %r12w, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12W_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0XA1 # addw %r12w, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12W_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0XA2 # addw %r12w, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12W_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0XA7 # addw %r12w, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12W_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0XA6 # addw %r12w, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12W_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0XA5 # addw %r12w, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12W_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0XA4, 0X24 # addw %r12w, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADD_R13W_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X01, 0XA8 # addw %r13w, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13W_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X01, 0XAB # addw %r13w, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13W_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X01, 0XA9 # addw %r13w, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13W_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X01, 0XAA # addw %r13w, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13W_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X01, 0XAF # addw %r13w, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13W_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X01, 0XAE # addw %r13w, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13W_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X01, 0XAD # addw %r13w, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13W_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X01, 0XAC, 0X24 # addw %r13w, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13W_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X01, 0XA8 # addw %r13w, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13W_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X01, 0XA9 # addw %r13w, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13W_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X01, 0XAA # addw %r13w, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13W_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X01, 0XAB # addw %r13w, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13W_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X01, 0XAC, 0X24 # addw %r13w, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13W_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X01, 0XAD # addw %r13w, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13W_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X01, 0XAE # addw %r13w, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13W_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X01, 0XAF # addw %r13w, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13W_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0XA8 # addw %r13w, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13W_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0XAB # addw %r13w, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13W_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0XA9 # addw %r13w, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13W_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0XAA # addw %r13w, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13W_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0XAF # addw %r13w, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13W_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0XAE # addw %r13w, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13W_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0XAD # addw %r13w, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13W_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0XAC, 0X24 # addw %r13w, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADD_R14W_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X01, 0XB0 # addw %r14w, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14W_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X01, 0XB3 # addw %r14w, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14W_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X01, 0XB1 # addw %r14w, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14W_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X01, 0XB2 # addw %r14w, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14W_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X01, 0XB7 # addw %r14w, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14W_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X01, 0XB6 # addw %r14w, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14W_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X01, 0XB5 # addw %r14w, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14W_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X01, 0XB4, 0X24 # addw %r14w, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14W_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X01, 0XB0 # addw %r14w, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14W_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X01, 0XB1 # addw %r14w, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14W_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X01, 0XB2 # addw %r14w, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14W_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X01, 0XB3 # addw %r14w, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14W_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X01, 0XB4, 0X24 # addw %r14w, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14W_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X01, 0XB5 # addw %r14w, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14W_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X01, 0XB6 # addw %r14w, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14W_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X01, 0XB7 # addw %r14w, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14W_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0XB0 # addw %r14w, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14W_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0XB3 # addw %r14w, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14W_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0XB1 # addw %r14w, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14W_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0XB2 # addw %r14w, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14W_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0XB7 # addw %r14w, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14W_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0XB6 # addw %r14w, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14W_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0XB5 # addw %r14w, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14W_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0XB4, 0X24 # addw %r14w, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADD_R15W_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X01, 0XB8 # addw %r15w, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15W_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X01, 0XBB # addw %r15w, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15W_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X01, 0XB9 # addw %r15w, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15W_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X01, 0XBA # addw %r15w, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15W_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X01, 0XBF # addw %r15w, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15W_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X01, 0XBE # addw %r15w, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15W_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X01, 0XBD # addw %r15w, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15W_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X01, 0XBC, 0X24 # addw %r15w, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15W_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X01, 0XB8 # addw %r15w, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15W_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X01, 0XB9 # addw %r15w, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15W_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X01, 0XBA # addw %r15w, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15W_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X01, 0XBB # addw %r15w, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15W_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X01, 0XBC, 0X24 # addw %r15w, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15W_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X01, 0XBD # addw %r15w, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15W_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X01, 0XBE # addw %r15w, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15W_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X01, 0XBF # addw %r15w, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15W_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0XB8 # addw %r15w, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15W_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0XBB # addw %r15w, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15W_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0XB9 # addw %r15w, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15W_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0XBA # addw %r15w, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15W_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0XBF # addw %r15w, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15W_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0XBE # addw %r15w, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15W_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0XBD # addw %r15w, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15W_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X01, 0XBC, 0X24 # addw %r15w, " _(VALUE) "(%esp)")\
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
